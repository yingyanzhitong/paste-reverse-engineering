import Foundation

/// Address-level reconstructions used by the real UI, not placeholder exports.
public enum OriginalStackFunctions {
    /// Original helper checks MainActor isolation and returns false for both window selectors.
    @MainActor public static func f_1000114fc() -> Bool { false }

    /// Original in-place reversal swaps both ends and preserves Swift Array copy-on-write.
    /// The decompiler's ulong return is an ABI recovery artifact; callers use the mutated array.
    public static func f_10008468c<T>(_ values: inout [T]) { values.reverse() }
}
