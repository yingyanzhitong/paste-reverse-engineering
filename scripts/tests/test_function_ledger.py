import importlib.util
import hashlib
import json
from pathlib import Path
import tempfile
import unittest

SPEC = importlib.util.spec_from_file_location("function_ledger", Path(__file__).resolve().parents[1] / "function_ledger.py")
ledger = importlib.util.module_from_spec(SPEC)
SPEC.loader.exec_module(ledger)


class FunctionLedgerTests(unittest.TestCase):
    def setUp(self):
        self.temporary = tempfile.TemporaryDirectory()
        self.addCleanup(self.temporary.cleanup)
        self.root = Path(self.temporary.name)
        self.write("reports/target-manifest.json", {"binaries": [{"name": "Tiny", "arm64_sha256": "a" * 64}]})
        self.write("replica/function-map.json", {"scope": "fixture", "functions": {}})
        self.write("reports/Tiny/coverage.json", {"internal_procedures": 3, "failures": [{"address": "0x3"}]})
        self.procedures = [
            {"address": "EXTERNAL:0x1", "value": "SDK::call", "procedure": {"external": True, "thunk": False}},
            {"address": "0x1", "value": "first", "procedure": {"external": False, "thunk": False}},
            {"address": "0x2", "value": "sdk_thunk", "procedure": {"external": False, "thunk": True, "thunk_target": "EXTERNAL:0x1"}},
            {"address": "0x3", "value": "failed", "procedure": {"external": False, "thunk": False}},
        ]
        self.write("reports/Tiny/procedures.json", self.procedures)
        self.write("reports/Tiny/function-index.json", [
            {"address": "0x1", "file": "decompiled/Tiny/part-0000.c", "line": 2},
            {"address": "0x2", "file": "decompiled/Tiny/part-0000.c", "line": 4},
        ])
        self.source = self.root / "decompiled/Tiny/part-0000.c"
        self.source.parent.mkdir(parents=True)
        self.source.write_text("/* Address: 0x1 | first */\nint first() { return 0; }\n/* Address: 0x2 | sdk_thunk */\nvoid sdk_thunk() { SDK_call(); }\n")

    def write(self, path, value):
        file = self.root / path
        file.parent.mkdir(parents=True, exist_ok=True)
        file.write_text(json.dumps(value))

    def test_every_internal_address_including_failure_and_thunk_is_pending(self):
        output, summary = ledger.render(self.root)
        self.assertEqual(summary["total_functions"], 3)
        self.assertEqual(summary["states"]["pending"], 3)
        self.assertEqual(summary["states"]["verified"], 0)
        self.assertEqual(sum(summary["states"].values()), 3)
        rows = [json.loads(line) for line in output["Tiny/part-0000.jsonl"].splitlines()]
        self.assertEqual(rows[1]["kind"], "local_thunk")
        self.assertEqual(rows[1]["thunk_target"], "EXTERNAL:0x1")
        self.assertEqual(rows[2]["original"]["state"], "decompilation_failed")
        self.assertEqual(len({row["id"] for row in rows}), 3)

    def test_duplicate_inventory_is_rejected(self):
        self.write("reports/Tiny/procedures.json", self.procedures + [self.procedures[1]])
        with self.assertRaises(ValueError): ledger.render(self.root)

    def test_missing_export_is_rejected(self):
        self.write("reports/Tiny/function-index.json", [])
        with self.assertRaises(ValueError): ledger.render(self.root)

    def test_nonexistent_implementation_is_rejected(self):
        with self.assertRaises(ValueError):
            ledger.validate_review(self.root, "Tiny:0x1", {"state": "implemented", "contract": "returns zero",
                                   "implementations": [{"path": "missing.swift", "symbol": "first"}]})

    def test_contract_test_cannot_claim_differential_verification(self):
        with self.assertRaises(ValueError):
            ledger.validate_review(self.root, "Tiny:0x1", {"state": "verified", "contract": "returns zero",
                "implementations": [{"path": "decompiled/Tiny/part-0000.c", "symbol": "first"}],
                "tests": [{"path": "decompiled/Tiny/part-0000.c", "symbol": "first"}]})

    def test_scope_exclusion_needs_individual_reason(self):
        with self.assertRaises(ValueError):
            ledger.validate_review(self.root, "Tiny:0x1", {"state": "excluded_by_scope", "contract": "network"})

    def test_unknown_review_address_is_rejected(self):
        self.write("replica/function-map.json", {"scope": "fixture", "functions": {"Tiny:0x4": {"state": "partial"}}})
        with self.assertRaises(ValueError): ledger.render(self.root)

    def test_source_hash_changes_and_render_is_deterministic(self):
        output, _ = ledger.render(self.root)
        self.assertEqual(output, ledger.render(self.root)[0])
        self.source.write_text(self.source.read_text().replace("return 0", "return 1"))
        changed, _ = ledger.render(self.root)
        first = lambda text: json.loads(text["Tiny/part-0000.jsonl"].splitlines()[0])["original"]["sha256"]
        self.assertNotEqual(first(output), first(changed))

    def test_contract_evidence_is_invalidated_when_implementation_changes(self):
        source = "decompiled/Tiny/part-0000.c"
        self.write("reports/contract.json", {"functions": {"Tiny:0x1": {
            "passed": True, "case": "fixture", "source_sha256": {
                source: hashlib.sha256(self.source.read_bytes()).hexdigest()}}}})
        review = {"state": "implemented", "contract": "returns zero",
                  "implementations": [{"path": source, "symbol": "first"}],
                  "tests": [{"path": source, "symbol": "sdk_thunk"}],
                  "contract_test": {"report": "reports/contract.json", "case": "fixture"}}
        ledger.validate_review(self.root, "Tiny:0x1", review)
        self.source.write_text(self.source.read_text().replace("return 0", "return 1"))
        with self.assertRaisesRegex(ValueError, "Source changed"):
            ledger.validate_review(self.root, "Tiny:0x1", review)

    def differential_fixture(self):
        source = "decompiled/Tiny/part-0000.c"
        digest = hashlib.sha256(self.source.read_bytes()).hexdigest()
        self.write("reports/contract.json", {"functions": {"Tiny:0x1": {
            "passed": True, "case": "fixture", "source_sha256": {source: digest}}}})
        review = {"state": "verified", "contract": "returns zero",
                  "implementations": [{"path": source, "symbol": "first"}],
                  "tests": [{"path": source, "symbol": "first"}],
                  "contract_test": {"report": "reports/contract.json", "case": "fixture"},
                  "equivalence_evidence": "reports/differential.json"}
        report = {"kind": "original_machine_code_differential", "function_id": "Tiny:0x1", "passed": True,
                  "original_binary_executed": True, "original_binary_sha256": "a" * 64,
                  "original_text_section": {"sha256": "b" * 64, "size": 4},
                  "original_inputs": "fixture", "replica_inputs": "fixture", "comparison": "equal",
                  "source_sha256": {source: digest}, "case_count": 1, "cases": [{"equal": True}]}
        self.write("reports/differential.json", report)
        return review, report

    def test_bound_native_comparison_accepts_verified(self):
        review, _ = self.differential_fixture()
        ledger.validate_review(self.root, "Tiny:0x1", review)

    def test_comparison_rejects_wrong_original_binary(self):
        review, report = self.differential_fixture()
        report["original_binary_sha256"] = "c" * 64
        self.write("reports/differential.json", report)
        with self.assertRaisesRegex(ValueError, "analyzed original binary"):
            ledger.validate_review(self.root, "Tiny:0x1", review)

    def test_comparison_rejects_failed_case_even_when_summary_passes(self):
        review, report = self.differential_fixture()
        report["cases"][0]["equal"] = False
        self.write("reports/differential.json", report)
        with self.assertRaisesRegex(ValueError, "cases must pass"):
            ledger.validate_review(self.root, "Tiny:0x1", review)

    def test_comparison_rejects_missing_source_binding(self):
        review, report = self.differential_fixture()
        report["source_sha256"] = {}
        self.write("reports/differential.json", report)
        with self.assertRaisesRegex(ValueError, "implementation and test sources"):
            ledger.validate_review(self.root, "Tiny:0x1", review)

    def test_comparison_is_invalidated_when_runner_changes(self):
        review, report = self.differential_fixture()
        runner = self.root / "runner.swift"
        runner.write_text("original() == replica()")
        report["source_sha256"]["runner.swift"] = hashlib.sha256(runner.read_bytes()).hexdigest()
        self.write("reports/differential.json", report)
        ledger.validate_review(self.root, "Tiny:0x1", review)
        runner.write_text("true")
        with self.assertRaisesRegex(ValueError, "Source changed since original comparison"):
            ledger.validate_review(self.root, "Tiny:0x1", review)


if __name__ == "__main__": unittest.main()
