/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008d41bc | FUN_1008d41bc */

void FUN_1008d41bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb4e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82ce0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82ce0,&DAT_100f0e638);
  DAT_100feb4e8 = pTVar1;
  return;
}



/* Address: 0x1008d41fc | FUN_1008d41fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008d41fc(void)

{
  return ZEXT816(0x100feb538);
}



/* Address: 0x1008d421c | FUN_1008d421c */

void FUN_1008d421c(void)

{
  long unaff_x20;
  
  FUN_1008ced6c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008d4244 | thunk_FUN_1008c1434 */

void thunk_FUN_1008c1434(void)

{
  FUN_1008c1434();
  return;
}



/* Address: 0x1008d4248 | FUN_1008d4248 */

void FUN_1008d4248(void)

{
  FUN_1008d426c(FUN_1008cd2e4);
  return;
}



/* Address: 0x1008d4254 | FUN_1008d4254 */

void FUN_1008d4254(void)

{
  FUN_100894fcc(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1008d4260 | FUN_1008d4260 */

void FUN_1008d4260(void)

{
  FUN_1008d426c(FUN_1008cd524);
  return;
}



/* Address: 0x1008d426c | FUN_1008d426c */

void FUN_1008d426c(code *param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  (*param_1)(uVar1);
  return;
}



/* Address: 0x1008d42a8 | thunk_FUN_1008d42fc */

void thunk_FUN_1008d42fc(void)

{
  FUN_1008d42fc();
  return;
}



/* Address: 0x1008d42ac | FUN_1008d42ac */

void FUN_1008d42ac(ulong *param_1)

{
  if (((*param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_release(*param_1 & 0x3fffffffffffffff);
  }
  if (((param_1[1] ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  _swift_release(param_1[1] & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1008d42fc | FUN_1008d42fc */

ulong * FUN_1008d42fc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_retain(uVar1 & 0x3fffffffffffffff);
  }
  *param_1 = uVar1;
  uVar1 = param_2[1];
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_retain(uVar1 & 0x3fffffffffffffff);
  }
  param_1[1] = uVar1;
  return param_1;
}



/* Address: 0x1008d435c | FUN_1008d435c */

ulong * FUN_1008d435c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *param_1 = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      goto LAB_1008d43d4;
    }
  }
  else {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *param_1 = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      _swift_release(uVar2 & 0x3fffffffffffffff);
      goto LAB_1008d43d4;
    }
    FUN_1008d444c(param_1);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
LAB_1008d43d4:
  puVar3 = param_1 + 1;
  uVar2 = *puVar3;
  uVar1 = param_2[1];
  if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *puVar3 = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      return param_1;
    }
  }
  else {
    if ((uVar1 & 0xf000000000000007) != 0xf000000000000007) {
      *puVar3 = uVar1;
      _swift_retain(uVar1 & 0x3fffffffffffffff);
      _swift_release(uVar2 & 0x3fffffffffffffff);
      return param_1;
    }
    FUN_1008d444c(puVar3);
    uVar1 = param_2[1];
  }
  *puVar3 = uVar1;
  return param_1;
}



/* Address: 0x1008d444c | FUN_1008d444c */

undefined8 FUN_1008d444c(undefined8 param_1)

{
  FUN_1005d9d28();
  return param_1;
}



/* Address: 0x1008d4480 | FUN_1008d4480 */

ulong * FUN_1008d4480(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      *param_1 = uVar2;
      _swift_release(uVar1 & 0x3fffffffffffffff);
      goto LAB_1008d44d0;
    }
    FUN_1008d444c(param_1);
  }
  *param_1 = uVar2;
LAB_1008d44d0:
  puVar3 = param_1 + 1;
  uVar1 = *puVar3;
  uVar2 = param_2[1];
  if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      *puVar3 = uVar2;
      _swift_release(uVar1 & 0x3fffffffffffffff);
      return param_1;
    }
    FUN_1008d444c(puVar3);
  }
  *puVar3 = uVar2;
  return param_1;
}



/* Address: 0x1008d4520 | FUN_1008d4520 */

int FUN_1008d4520(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7c < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7d;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2;
  iVar2 = 0x7e - uVar1;
  if (0x7c < (uVar1 ^ 0x7f)) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1008d4584 | FUN_1008d4584 */

void FUN_1008d4584(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7d) {
    if (0x7c < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)((param_2 ^ 0x7f) << 5 | (param_2 ^ 0x7f) >> 2);
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x7d);
    param_1[1] = 0;
    if (0x7c < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1008d45d4 | FUN_1008d45d4 */

undefined1  [16] FUN_1008d45d4(void)

{
  return ZEXT816(0x100f0e498);
}



/* Address: 0x1008d45e4 | FUN_1008d45e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008d45e4(void)

{
  return ZEXT816(0x100feb8b0);
}



/* Address: 0x1008d4604 | thunk_FUN_1008d4650 */

ulong * thunk_FUN_1008d4650(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    *param_1 = uVar1;
    uVar2 = param_2[2];
    uVar3 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1008d4608 | FUN_1008d4608 */

void FUN_1008d4608(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[1]);
    _swift_bridgeObjectRelease(param_1[2]);
    return;
  }
  return;
}



/* Address: 0x1008d4650 | FUN_1008d4650 */

ulong * FUN_1008d4650(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    *param_1 = uVar1;
    uVar2 = param_2[2];
    uVar3 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1008d46cc | FUN_1008d46cc */

ulong * FUN_1008d46cc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar2 = param_2[1];
      param_1[1] = uVar2;
      uVar1 = param_2[2];
      param_1[2] = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      uVar1 = param_1[2];
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
    _swift_bridgeObjectRelease(param_1[2]);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1008d47bc | FUN_1008d47bc */

ulong * FUN_1008d47bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  else if (*param_2 < 0xffffffff) {
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1[1]);
    _swift_bridgeObjectRelease(param_1[2]);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
  }
  else {
    *param_1 = *param_2;
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(param_1[1]);
    uVar1 = param_1[2];
    uVar2 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    _swift_bridgeObjectRelease(uVar1);
  }
  return param_1;
}



/* Address: 0x1008d4868 | FUN_1008d4868 */

undefined1  [16] FUN_1008d4868(void)

{
  return ZEXT816(0x100f0e530);
}



/* Address: 0x1008d4878 | FUN_1008d4878 */

undefined8 * FUN_1008d4878(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1008d48a4 | FUN_1008d48a4 */

undefined8 * FUN_1008d48a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1008d48dc | FUN_1008d48dc */

void FUN_1008d48dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1008d48e8 | FUN_1008d48e8 */

undefined8 * FUN_1008d48e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1008d4918 | FUN_1008d4918 */

undefined1  [16] FUN_1008d4918(void)

{
  return ZEXT816(0x100f0e5c0);
}



/* Address: 0x1008d4928 | FUN_1008d4928 */

undefined1  [16] FUN_1008d4928(void)

{
  return ZEXT816(0x100f0e638);
}



/* Address: 0x1008d4938 | FUN_1008d4938 */

undefined1  [16] FUN_1008d4938(void)

{
  return ZEXT816(0x100f0e660);
}



/* Address: 0x1008d4948 | FUN_1008d4948 */

undefined1  [16] FUN_1008d4948(void)

{
  return ZEXT816(0x100f0e6f8);
}



/* Address: 0x1008d4958 | FUN_1008d4958 */

undefined8 * FUN_1008d4958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1008d49ac | FUN_1008d49ac */

undefined8 * FUN_1008d49ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[4];
  uVar1 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x1008d4a28 | FUN_1008d4a28 */

undefined8 * FUN_1008d4a28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}



/* Address: 0x1008d4a7c | FUN_1008d4a7c */

undefined1  [16] FUN_1008d4a7c(void)

{
  return ZEXT816(0x100f0e770);
}



/* Address: 0x1008d4a8c | thunk_FUN_1008d4a90 */

void thunk_FUN_1008d4a90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82f58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82f58,&DAT_100f0e6f8);
  DAT_100feb940 = pTVar1;
  return;
}



/* Address: 0x1008d4a90 | FUN_1008d4a90 */

void FUN_1008d4a90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82f58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82f58,&DAT_100f0e6f8);
  DAT_100feb940 = pTVar1;
  return;
}



/* Address: 0x1008d4ad0 | thunk_FUN_1008d4ad4 */

void thunk_FUN_1008d4ad4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82f80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82f80,&DAT_100f0e770);
  DAT_100feb948 = pTVar1;
  return;
}



/* Address: 0x1008d4ad4 | FUN_1008d4ad4 */

void FUN_1008d4ad4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feb948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c82f80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c82f80,&DAT_100f0e770);
  DAT_100feb948 = pTVar1;
  return;
}



/* Address: 0x1008d4b14 | FUN_1008d4b14 */

void FUN_1008d4b14(void)

{
  FUN_100894fcc(PTR__swift_unknownObjectRelease_100eae458);
  return;
}



/* Address: 0x1008d4b20 | FUN_1008d4b20 */

void FUN_1008d4b20(void)

{
  long unaff_x20;
  
  FUN_1008cb2ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008d4b2c | FUN_1008d4b2c */

void FUN_1008d4b2c(void)

{
  long unaff_x20;
  
  FUN_1008c966c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008d4b38 | FUN_1008d4b38 */

void FUN_1008d4b38(void)

{
  FUN_1008c98a4();
  return;
}



/* Address: 0x1008d4b40 | FUN_1008d4b40 */

void FUN_1008d4b40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100646f54(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008d4b48 | FUN_1008d4b48 */

void FUN_1008d4b48(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_retain(param_3);
    _swift_retain(param_5);
    return;
  }
  return;
}



/* Address: 0x1008d4b78 | thunk_FUN_1008ca9b4 */

void thunk_FUN_1008ca9b4(void)

{
  FUN_1008ca9b4();
  return;
}



/* Address: 0x1008d4b7c | thunk_FUN_1008d3a1c */

void thunk_FUN_1008d3a1c(void)

{
  FUN_1008d3a1c();
  return;
}



/* Address: 0x1008d4b80 | thunk_FUN_1008d3a1c */

void thunk_FUN_1008d3a1c(void)

{
  FUN_1008d3a1c();
  return;
}



/* Address: 0x1008d4b84 | thunk_FUN_1008d3a1c */

void thunk_FUN_1008d3a1c(void)

{
  FUN_1008d3a1c();
  return;
}



/* Address: 0x1008d4b88 | thunk_FUN_1008d3a1c */

void thunk_FUN_1008d3a1c(void)

{
  FUN_1008d3a1c();
  return;
}



/* Address: 0x1008d4b8c | thunk_FUN_1008d3a1c */

void thunk_FUN_1008d3a1c(void)

{
  FUN_1008d3a1c();
  return;
}



/* Address: 0x1008d4b90 | thunk_FUN_1008d39ac */

void thunk_FUN_1008d39ac(void)

{
  FUN_1008d39ac();
  return;
}



/* Address: 0x1008d4b94 | thunk_FUN_1008d3a1c */

void thunk_FUN_1008d3a1c(void)

{
  FUN_1008d3a1c();
  return;
}



/* Address: 0x1008d4b98 | thunk_FUN_1008d1a30 */

void thunk_FUN_1008d1a30(long param_1)

{
  FUN_1008d18c0(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008d4b9c | FUN_1008d4b9c */

void FUN_1008d4b9c(void)

{
  FUN_1008d39d8();
  return;
}



/* Address: 0x1008d4bb0 | thunk_FUN_1008c9024 */

void thunk_FUN_1008c9024(void)

{
  thunk_FUN_1008c9024();
  return;
}



/* Address: 0x1008d4bb4 | thunk_FUN_1008d418c */

void thunk_FUN_1008d418c(void)

{
  long unaff_x20;
  
  FUN_1008d3528(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x1008d4bb8 | thunk_FUN_1005dfd68 */

void thunk_FUN_1005dfd68(void)

{
  long unaff_x20;
  
  FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008d4bbc | thunk_FUN_1008d39d0 */

void thunk_FUN_1008d39d0(void)

{
  FUN_1008d39d0();
  return;
}



/* Address: 0x1008d4bc0 | thunk_FUN_1008d4878 */

void thunk_FUN_1008d4878(void)

{
  FUN_1008d4878();
  return;
}



/* Address: 0x1008d4bc4 | thunk_FUN_1008d42fc */

void thunk_FUN_1008d42fc(void)

{
  thunk_FUN_1008d42fc();
  return;
}



/* Address: 0x1008d4bc8 | thunk_FUN_1008d4650 */

void thunk_FUN_1008d4650(void)

{
  thunk_FUN_1008d4650();
  return;
}



/* Address: 0x1008d4bcc | thunk_FUN_1005e4860 */

void thunk_FUN_1005e4860(void)

{
  thunk_FUN_1005e4860();
  return;
}


