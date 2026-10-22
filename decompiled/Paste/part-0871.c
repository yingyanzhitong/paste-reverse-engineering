/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10097068c | FUN_10097068c */

void FUN_10097068c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009706a0 | FUN_1009706a0 */

undefined1  [16] FUN_1009706a0(void)

{
  return ZEXT816(0x100f1d3d8);
}



/* Address: 0x1009706b0 | FUN_1009706b0 */

undefined1  [16] FUN_1009706b0(void)

{
  return ZEXT816(0x100f1d400);
}



/* Address: 0x1009706c0 | FUN_1009706c0 */

undefined1  [16] FUN_1009706c0(void)

{
  return ZEXT816(0x100f1d420);
}



/* Address: 0x1009706d0 | thunk_FUN_10061423c */

void thunk_FUN_10061423c(void)

{
  thunk_FUN_10061423c();
  return;
}



/* Address: 0x1009706d4 | FUN_1009706d4 */

undefined * FUN_1009706d4(void)

{
  return &DAT_100c88510;
}



/* Address: 0x1009706e0 | FUN_1009706e0 */

undefined * FUN_1009706e0(void)

{
  return &DAT_100c88511;
}



/* Address: 0x1009706ec | FUN_1009706ec */

undefined * FUN_1009706ec(void)

{
  return &DAT_100c88513;
}



/* Address: 0x1009706f8 | FUN_1009706f8 */

undefined * FUN_1009706f8(void)

{
  return &DAT_100c88514;
}



/* Address: 0x100970704 | FUN_100970704 */

undefined * FUN_100970704(void)

{
  return &DAT_100c88512;
}



/* Address: 0x100970710 | FUN_100970710 */

undefined * FUN_100970710(void)

{
  return &DAT_100c88515;
}



/* Address: 0x10097071c | FUN_10097071c */

undefined * FUN_10097071c(void)

{
  return &DAT_100c88516;
}



/* Address: 0x100970728 | FUN_100970728 */

undefined * FUN_100970728(void)

{
  return &DAT_100c88517;
}



/* Address: 0x100970734 | FUN_100970734 */

undefined * FUN_100970734(void)

{
  return &DAT_100c88518;
}



/* Address: 0x100970740 | FUN_100970740 */

undefined * FUN_100970740(void)

{
  return &DAT_100c88519;
}



/* Address: 0x10097074c | FUN_10097074c */

undefined1  [16] FUN_10097074c(void)

{
  return ZEXT816(0x100f1d4d0);
}



/* Address: 0x10097075c | FUN_10097075c */

undefined1  [16] FUN_10097075c(void)

{
  return ZEXT816(0x100f1d568);
}



/* Address: 0x10097076c | thunk_FUN_100970770 */

void thunk_FUN_100970770(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88580;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88580,&DAT_100f1d568);
  DAT_100fef8e8 = pTVar1;
  return;
}



/* Address: 0x100970770 | FUN_100970770 */

void FUN_100970770(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88580;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88580,&DAT_100f1d568);
  DAT_100fef8e8 = pTVar1;
  return;
}



/* Address: 0x1009707b0 | FUN_1009707b0 */

undefined8 FUN_1009707b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1009707fc(param_1,param_2);
  return unaff_x20;
}



/* Address: 0x1009707fc | FUN_1009707fc */

void FUN_1009707fc(long param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  long unaff_x20;
  
  if ((0 < param_1) && (0 < param_2)) {
    *(long *)(unaff_x20 + 0x30) = param_1;
    *(long *)(unaff_x20 + 0x38) = param_2;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    CVar2.unknown = &DAT_100fef420;
    FUN_1000f7830(&DAT_100fef420,&DAT_100c885e0);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0x10;
    *(undefined8 *)(_Var3.unknown + 0x20) = 0;
    *(undefined8 *)(_Var3.unknown + 0x28) = 0;
    *(undefined8 *)(_Var3.unknown + 0x2f) = 0;
    *(undefined8 *)(_Var3.unknown + 0x38) = 0;
    *(undefined8 *)(_Var3.unknown + 0x40) = 0;
    *(undefined8 *)(_Var3.unknown + 0x47) = 0;
    *(undefined8 *)(_Var3.unknown + 0x50) = 0;
    *(undefined8 *)(_Var3.unknown + 0x58) = 0;
    *(undefined8 *)(_Var3.unknown + 0x5f) = 0;
    *(undefined8 *)(_Var3.unknown + 0x68) = 0;
    *(undefined8 *)(_Var3.unknown + 0x70) = 0;
    *(undefined8 *)(_Var3.unknown + 0x77) = 0;
    *(undefined8 *)(_Var3.unknown + 0x80) = 0;
    *(undefined8 *)(_Var3.unknown + 0x88) = 0;
    *(undefined8 *)(_Var3.unknown + 0x8f) = 0;
    *(undefined8 *)(_Var3.unknown + 0xa7) = 0;
    *(undefined8 *)(_Var3.unknown + 0x98) = 0;
    *(undefined8 *)(_Var3.unknown + 0xa0) = 0;
    *(undefined8 *)(_Var3.unknown + 0xb0) = 0;
    *(undefined8 *)(_Var3.unknown + 0xb8) = 0;
    *(undefined8 *)(_Var3.unknown + 0xbf) = 0;
    *(undefined8 *)(_Var3.unknown + 200) = 0;
    *(undefined8 *)(_Var3.unknown + 0xd0) = 0;
    *(undefined8 *)(_Var3.unknown + 0xd7) = 0;
    *(undefined8 *)(_Var3.unknown + 0xe0) = 0;
    *(undefined8 *)(_Var3.unknown + 0xe8) = 0;
    *(undefined8 *)(_Var3.unknown + 0xef) = 0;
    *(undefined8 *)(_Var3.unknown + 0xf8) = 0;
    *(undefined8 *)(_Var3.unknown + 0x100) = 0;
    *(undefined8 *)(_Var3.unknown + 0x107) = 0;
    *(undefined8 *)(_Var3.unknown + 0x110) = 0;
    *(undefined8 *)(_Var3.unknown + 0x118) = 0;
    *(undefined8 *)(_Var3.unknown + 0x11f) = 0;
    *(undefined8 *)(_Var3.unknown + 0x137) = 0;
    *(undefined8 *)(_Var3.unknown + 0x128) = 0;
    *(undefined8 *)(_Var3.unknown + 0x130) = 0;
    *(undefined8 *)(_Var3.unknown + 0x140) = 0;
    *(undefined8 *)(_Var3.unknown + 0x148) = 0;
    *(undefined8 *)(_Var3.unknown + 0x14f) = 0;
    *(undefined8 *)(_Var3.unknown + 0x158) = 0;
    *(undefined8 *)(_Var3.unknown + 0x160) = 0;
    *(undefined8 *)(_Var3.unknown + 0x167) = 0;
    *(undefined8 *)(_Var3.unknown + 0x170) = 0;
    *(undefined8 *)(_Var3.unknown + 0x178) = 0;
    *(undefined8 *)(_Var3.unknown + 0x17f) = 0;
    *(undefined8 *)(_Var3.unknown + 0x188) = 0;
    *(undefined8 *)(_Var3.unknown + 400) = 0;
    *(undefined8 *)(_Var3.unknown + 0x197) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined **)(unaff_x20 + 0x10) = _Var3.unknown;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100970904);
  (*pcVar1)();
}



/* Address: 0x100970904 | FUN_100970904 */

long FUN_100970904(long param_1)

{
  code *pcVar1;
  long lVar2;
  ContiguousArray CVar3;
  _ContiguousArrayBuffer<undefined> _Var4;
  
  lVar2 = param_1;
  FUN_100970a28();
  _swift_allocObject();
  if (0 < param_1) {
    *(long *)(lVar2 + 0x38) = param_1;
    *(undefined8 *)(lVar2 + 0x30) = 0x7fffffffffffffff;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    CVar3.unknown = &DAT_100fef420;
    FUN_1000f7830(&DAT_100fef420,&DAT_100c885e0);
    _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0x10;
    *(undefined8 *)(_Var4.unknown + 0x20) = 0;
    *(undefined8 *)(_Var4.unknown + 0x28) = 0;
    *(undefined8 *)(_Var4.unknown + 0x2f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x38) = 0;
    *(undefined8 *)(_Var4.unknown + 0x40) = 0;
    *(undefined8 *)(_Var4.unknown + 0x47) = 0;
    *(undefined8 *)(_Var4.unknown + 0x50) = 0;
    *(undefined8 *)(_Var4.unknown + 0x58) = 0;
    *(undefined8 *)(_Var4.unknown + 0x5f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x68) = 0;
    *(undefined8 *)(_Var4.unknown + 0x70) = 0;
    *(undefined8 *)(_Var4.unknown + 0x77) = 0;
    *(undefined8 *)(_Var4.unknown + 0x80) = 0;
    *(undefined8 *)(_Var4.unknown + 0x88) = 0;
    *(undefined8 *)(_Var4.unknown + 0x8f) = 0;
    *(undefined8 *)(_Var4.unknown + 0xa7) = 0;
    *(undefined8 *)(_Var4.unknown + 0x98) = 0;
    *(undefined8 *)(_Var4.unknown + 0xa0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xb0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xb8) = 0;
    *(undefined8 *)(_Var4.unknown + 0xbf) = 0;
    *(undefined8 *)(_Var4.unknown + 200) = 0;
    *(undefined8 *)(_Var4.unknown + 0xd0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xd7) = 0;
    *(undefined8 *)(_Var4.unknown + 0xe0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xe8) = 0;
    *(undefined8 *)(_Var4.unknown + 0xef) = 0;
    *(undefined8 *)(_Var4.unknown + 0x100) = 0;
    *(undefined8 *)(_Var4.unknown + 0x110) = 0;
    *(undefined8 *)(_Var4.unknown + 0x118) = 0;
    *(undefined8 *)(_Var4.unknown + 0x137) = 0;
    *(undefined8 *)(_Var4.unknown + 0x128) = 0;
    *(undefined8 *)(_Var4.unknown + 0x130) = 0;
    *(undefined8 *)(_Var4.unknown + 0x140) = 0;
    *(undefined8 *)(_Var4.unknown + 0x148) = 0;
    *(undefined8 *)(_Var4.unknown + 0x158) = 0;
    *(undefined8 *)(_Var4.unknown + 0x160) = 0;
    *(undefined8 *)(_Var4.unknown + 0x170) = 0;
    *(undefined8 *)(_Var4.unknown + 0x178) = 0;
    *(undefined8 *)(_Var4.unknown + 0x188) = 0;
    *(undefined8 *)(_Var4.unknown + 400) = 0;
    *(undefined8 *)(_Var4.unknown + 0xf8) = 0;
    *(undefined8 *)(_Var4.unknown + 0x107) = 0;
    *(undefined8 *)(_Var4.unknown + 0x11f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x14f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x167) = 0;
    *(undefined8 *)(_Var4.unknown + 0x17f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x197) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined **)(lVar2 + 0x10) = _Var4.unknown;
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100970a28);
  (*pcVar1)();
}



/* Address: 0x100970a28 | FUN_100970a28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100970a28(void)

{
  return ZEXT816(0x100fef930);
}



/* Address: 0x100970a48 | FUN_100970a48 */

long FUN_100970a48(long param_1)

{
  code *pcVar1;
  long lVar2;
  ContiguousArray CVar3;
  _ContiguousArrayBuffer<undefined> _Var4;
  
  lVar2 = param_1;
  FUN_100970a28();
  _swift_allocObject();
  if (0 < param_1) {
    *(long *)(lVar2 + 0x30) = param_1;
    *(undefined8 *)(lVar2 + 0x38) = 0x7fffffffffffffff;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    CVar3.unknown = &DAT_100fef420;
    FUN_1000f7830(&DAT_100fef420,&DAT_100c885e0);
    _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0x10;
    *(undefined8 *)(_Var4.unknown + 0x20) = 0;
    *(undefined8 *)(_Var4.unknown + 0x28) = 0;
    *(undefined8 *)(_Var4.unknown + 0x2f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x38) = 0;
    *(undefined8 *)(_Var4.unknown + 0x40) = 0;
    *(undefined8 *)(_Var4.unknown + 0x47) = 0;
    *(undefined8 *)(_Var4.unknown + 0x50) = 0;
    *(undefined8 *)(_Var4.unknown + 0x58) = 0;
    *(undefined8 *)(_Var4.unknown + 0x5f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x68) = 0;
    *(undefined8 *)(_Var4.unknown + 0x70) = 0;
    *(undefined8 *)(_Var4.unknown + 0x77) = 0;
    *(undefined8 *)(_Var4.unknown + 0x80) = 0;
    *(undefined8 *)(_Var4.unknown + 0x88) = 0;
    *(undefined8 *)(_Var4.unknown + 0x8f) = 0;
    *(undefined8 *)(_Var4.unknown + 0xa7) = 0;
    *(undefined8 *)(_Var4.unknown + 0x98) = 0;
    *(undefined8 *)(_Var4.unknown + 0xa0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xb0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xb8) = 0;
    *(undefined8 *)(_Var4.unknown + 0xbf) = 0;
    *(undefined8 *)(_Var4.unknown + 200) = 0;
    *(undefined8 *)(_Var4.unknown + 0xd0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xd7) = 0;
    *(undefined8 *)(_Var4.unknown + 0xe0) = 0;
    *(undefined8 *)(_Var4.unknown + 0xe8) = 0;
    *(undefined8 *)(_Var4.unknown + 0xef) = 0;
    *(undefined8 *)(_Var4.unknown + 0x100) = 0;
    *(undefined8 *)(_Var4.unknown + 0x110) = 0;
    *(undefined8 *)(_Var4.unknown + 0x118) = 0;
    *(undefined8 *)(_Var4.unknown + 0x137) = 0;
    *(undefined8 *)(_Var4.unknown + 0x128) = 0;
    *(undefined8 *)(_Var4.unknown + 0x130) = 0;
    *(undefined8 *)(_Var4.unknown + 0x140) = 0;
    *(undefined8 *)(_Var4.unknown + 0x148) = 0;
    *(undefined8 *)(_Var4.unknown + 0x158) = 0;
    *(undefined8 *)(_Var4.unknown + 0x160) = 0;
    *(undefined8 *)(_Var4.unknown + 0x170) = 0;
    *(undefined8 *)(_Var4.unknown + 0x178) = 0;
    *(undefined8 *)(_Var4.unknown + 0x188) = 0;
    *(undefined8 *)(_Var4.unknown + 400) = 0;
    *(undefined8 *)(_Var4.unknown + 0xf8) = 0;
    *(undefined8 *)(_Var4.unknown + 0x107) = 0;
    *(undefined8 *)(_Var4.unknown + 0x11f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x14f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x167) = 0;
    *(undefined8 *)(_Var4.unknown + 0x17f) = 0;
    *(undefined8 *)(_Var4.unknown + 0x197) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(undefined **)(lVar2 + 0x10) = _Var4.unknown;
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100970b68);
  (*pcVar1)();
}



/* Address: 0x100970b68 | FUN_100970b68 */

long FUN_100970b68(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0x21,0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20) - lVar2;
  if (*(long *)(unaff_x20 + 0x20) < lVar2) {
    lVar3 = lVar3 + *(long *)(lVar5 + 0x10);
  }
  if (lVar3 < 1) {
    _swift_endAccess(auStack_58);
    lVar5 = 0;
  }
  else {
    FUN_100971e68();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100970c3c);
      (*pcVar1)();
    }
    FUN_100971ef4(1);
    _swift_endAccess(auStack_58);
    uVar4 = (ulong)(uint)((int)((ulong)lVar2 >> 0x20) - (int)lVar2);
    if (SBORROW8(*(long *)(unaff_x20 + 0x28),uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100970c38);
      (*pcVar1)();
    }
    *(ulong *)(unaff_x20 + 0x28) = *(long *)(unaff_x20 + 0x28) - uVar4;
  }
  return lVar5;
}



/* Address: 0x100970c3c | FUN_100970c3c */

void FUN_100970c3c(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_80 [80];
  
  uVar4 = unaff_x20[2];
  FUN_10096ba68(param_1,auStack_80);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_10096b51c();
  }
  if (-1 < (long)uVar4) {
    if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
      FUN_10096ba9c(auStack_80,uVar3 + uVar4 * 0x50 + 0x20);
      *unaff_x20 = uVar3;
      uVar2 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar4 + 1;
      unaff_x20[2] = uVar2;
      if (unaff_x20[1] == uVar2) {
        FUN_1009710f8();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100970ce4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100970ce0);
  (*pcVar1)();
}



/* Address: 0x100970ce4 | FUN_100970ce4 */

void FUN_100970ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = unaff_x20[2];
  uVar5 = *unaff_x20;
  _swift_retain();
  uVar4 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_10096b530();
  }
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100970db4);
    (*pcVar1)();
  }
  if (*(ulong *)(uVar5 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100970db8);
    (*pcVar1)();
  }
  lVar3 = uVar5 + uVar6 * 0x18;
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  *(char *)(lVar3 + 0x36) = (char)((ulong)param_3 >> 0x30);
  *(short *)(lVar3 + 0x34) = (short)((ulong)param_3 >> 0x20);
  *(int *)(lVar3 + 0x30) = (int)param_3;
  _swift_release(uVar2);
  *unaff_x20 = uVar5;
  uVar4 = *(long *)(uVar5 + 0x10) + 0x7fffffffffffffffU & uVar6 + 1;
  unaff_x20[2] = uVar4;
  if (unaff_x20[1] == uVar4) {
    FUN_100971228();
    return;
  }
  return;
}



/* Address: 0x100970db8 | FUN_100970db8 */

void FUN_100970db8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar4 = lVar7 - lVar9;
  if (lVar7 < lVar9) {
    lVar4 = lVar4 + *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  }
  lVar10 = *(long *)(unaff_x20 + 0x30);
  if (lVar4 < lVar10) {
    lVar4 = lVar7 - lVar9;
    if (lVar9 <= lVar7) goto joined_r0x000100970ff8;
  }
  else {
    FUN_100970b68();
    _swift_release();
    lVar4 = *(long *)(unaff_x20 + 0x20) - *(long *)(unaff_x20 + 0x18);
    if (*(long *)(unaff_x20 + 0x18) <= *(long *)(unaff_x20 + 0x20)) goto joined_r0x000100970ff8;
  }
  lVar4 = lVar4 + *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
joined_r0x000100970ff8:
  if (lVar10 <= lVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971000);
    (*pcVar2)();
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0x21,0);
  FUN_100970ce4(param_1,param_2,param_3 & 0xffffffffffffff);
  _swift_endAccess(auStack_80);
  uVar5 = (ulong)(uint)((int)((ulong)param_2 >> 0x20) - (int)param_2);
  lVar4 = *(long *)(unaff_x20 + 0x28) + uVar5;
  if (SCARRY8(*(long *)(unaff_x20 + 0x28),uVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971020);
    (*pcVar2)();
  }
  *(long *)(unaff_x20 + 0x28) = lVar4;
  lVar9 = *(long *)(unaff_x20 + 0x38);
  while( true ) {
    if (lVar4 <= lVar9) {
      return;
    }
    while( true ) {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0x21,0);
      uVar5 = *(ulong *)(unaff_x20 + 0x10);
      uVar1 = *(ulong *)(unaff_x20 + 0x18);
      uVar3 = *(ulong *)(unaff_x20 + 0x20);
      lVar4 = uVar3 - uVar1;
      if ((long)uVar3 < (long)uVar1) {
        lVar4 = lVar4 + *(long *)(uVar5 + 0x10);
      }
      if (0 < lVar4) break;
      _swift_endAccess(auStack_80);
    }
    if (uVar3 == uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971004);
      (*pcVar2)();
    }
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971008);
      (*pcVar2)();
    }
    if (uVar1 >> 0x20 != 0) break;
    uVar6 = *(ulong *)(uVar5 + 0x10);
    if (uVar6 <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971010);
      (*pcVar2)();
    }
    lVar4 = uVar5 + uVar1 * 0x18;
    lVar7 = *(long *)(lVar4 + 0x20);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971024);
      (*pcVar2)();
    }
    if ((long)uVar1 <= (long)uVar3) {
      uVar6 = 0;
    }
    if ((long)((uVar3 - uVar1) + uVar6) < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971014);
      (*pcVar2)();
    }
    uVar11 = *(undefined8 *)(lVar4 + 0x28);
    _swift_retain(lVar7);
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar5;
    if ((uVar3 & 1) == 0) {
      FUN_10096b530();
    }
    *(ulong *)(unaff_x20 + 0x10) = uVar5;
    if (*(ulong *)(uVar5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971018);
      (*pcVar2)();
    }
    lVar4 = uVar5 + uVar1 * 0x18;
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined8 *)(lVar4 + 0x20) = 0;
    *(undefined8 *)(lVar4 + 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x2f) = 0;
    *(ulong *)(unaff_x20 + 0x10) = uVar5;
    *(ulong *)(unaff_x20 + 0x18) = *(long *)(uVar5 + 0x10) + 0x1ffffffffU & uVar1 + 1;
    _swift_endAccess(auStack_80);
    _swift_release(lVar7);
    _swift_release(uVar8);
    uVar5 = (ulong)(uint)((int)((ulong)uVar11 >> 0x20) - (int)uVar11);
    lVar4 = *(long *)(unaff_x20 + 0x28) - uVar5;
    if (SBORROW8(*(long *)(unaff_x20 + 0x28),uVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10097101c);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x28) = lVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10097100c);
  (*pcVar2)();
}



/* Address: 0x100971024 | FUN_100971024 */

long FUN_100971024(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0x21,0);
  lVar4 = lVar2 - lVar1;
  if (lVar2 < lVar1) {
    lVar4 = lVar4 + *(long *)(lVar3 + 0x10);
  }
  _swift_retain(lVar3);
  FUN_100971ef4(lVar4);
  *(long *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_endAccess(auStack_80);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  return lVar3;
}



/* Address: 0x1009710d4 | FUN_1009710d4 */

void FUN_1009710d4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009710f8 | FUN_1009710f8 */

void FUN_1009710f8(void)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_a0 [11];
  undefined *local_48;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x10) * 2;
  if (lVar3 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971214);
    (*pcVar1)();
  }
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100971e30(0,lVar3,0);
  if (*(long *)(lVar2 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971218);
    (*pcVar1)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10097121c);
    (*pcVar1)();
  }
  _swift_retain(lVar2);
  FUN_100971360();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar2 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100971224);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_100971360();
    lVar4 = *(long *)(local_48 + 0x10);
    local_a0[8] = 0;
    local_a0[7] = 0;
    local_a0[6] = 0;
    local_a0[5] = 0;
    local_a0[4] = 0;
    local_a0[3] = 0;
    local_a0[2] = 0;
    local_a0[1] = 0;
    local_a0[9] = 0;
    local_a0[10] = 1;
    local_a0[0] = lVar3 - lVar4;
    if (-1 < local_a0[0]) {
      FUN_1009716f0(local_a0);
      _swift_release(lVar2);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar4;
      *unaff_x20 = (long)local_48;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971228);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100971220);
  (*pcVar1)();
}



/* Address: 0x100971228 | FUN_100971228 */

void FUN_100971228(void)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10) * 2;
  if (lVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10097134c);
    (*pcVar2)();
  }
  FUN_100971e4c(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971350);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971354);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_100971fc8();
  _swift_release(lVar3);
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10097135c);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_100971fc8();
    _swift_release(lVar3);
    lVar5 = *(long *)(puVar1 + 0x10);
    lVar4 = lVar4 - lVar5;
    if (-1 < lVar4) {
      FUN_100971aa8(lVar4,0,0,0);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971360);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100971358);
  (*pcVar2)();
}



/* Address: 0x100971360 | FUN_100971360 */

void FUN_100971360(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009716e0);
    (*pcVar2)();
  }
  lVar9 = *unaff_x20;
  lVar7 = *(long *)(lVar9 + 0x10);
  if (SCARRY8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009716e4);
    (*pcVar2)();
  }
  lVar3 = lVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar9;
  if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar9 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
    FUN_100971e30();
    lVar9 = *unaff_x20;
    uVar5 = *(ulong *)(lVar9 + 0x18) >> 1;
  }
  uVar6 = *(ulong *)(lVar9 + 0x10);
  if (param_3 == param_4) {
    if (0 < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009716e8);
      (*pcVar2)();
    }
    uVar11 = param_3;
    if (uVar5 == uVar6) {
LAB_10097148c:
      uVar5 = *(ulong *)(lVar9 + 0x10);
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_80 = 0;
      uStack_78 = 2;
      FUN_1000f8cac(&local_c0,&local_110,&DAT_100fefa08,&DAT_100c88640);
      while (lStack_c8 != 2) {
        FUN_1000fb4c4(&local_110,&DAT_100fefa08,&DAT_100c88640);
        if ((long)(*(ulong *)(lVar9 + 0x18) >> 1) < (long)(uVar5 + 1)) {
          FUN_100971e30(1 < *(ulong *)(lVar9 + 0x18),uVar5 + 1,1);
        }
        lVar9 = *unaff_x20;
        uVar6 = *(ulong *)(lVar9 + 0x18);
        FUN_1000f8cac(&local_c0,&local_160,&DAT_100fefa08,&DAT_100c88640);
        if (lStack_118 != 2) {
          uVar6 = uVar6 >> 1;
          uVar10 = uVar5;
          if ((long)uVar5 <= (long)uVar6) {
            uVar10 = uVar6;
          }
          puVar8 = (undefined8 *)(lVar9 + uVar5 * 0x50 + 0x20);
          do {
            uStack_e8 = uStack_138;
            local_f0 = local_140;
            uStack_d8 = uStack_128;
            local_e0 = uStack_130;
            lStack_c8 = lStack_118;
            local_d0 = local_120;
            uStack_108 = uStack_158;
            local_110 = local_160;
            uStack_f8 = uStack_148;
            local_100 = uStack_150;
            if (uVar10 == uVar5) {
              FUN_1000fb4c4(&local_110,&DAT_100fef1e0,&DAT_100c87af0);
              goto LAB_100971550;
            }
            FUN_1000fb4c4(&local_c0,&DAT_100fefa08,&DAT_100c88640);
            puVar8[1] = uStack_108;
            *puVar8 = local_110;
            puVar8[7] = uStack_d8;
            puVar8[6] = local_e0;
            puVar8[9] = lStack_c8;
            puVar8[8] = local_d0;
            puVar8[3] = uStack_f8;
            puVar8[2] = local_100;
            puVar8[5] = uStack_e8;
            puVar8[4] = local_f0;
            if (uVar11 == param_4) {
              uStack_98 = 0;
              local_a0 = 0;
              uStack_88 = 0;
              uStack_90 = 0;
              uStack_b8 = 0;
              local_c0 = 0;
              uStack_a8 = 0;
              uStack_b0 = 0;
              local_80 = 0;
              uStack_78 = 2;
              uVar11 = param_4;
            }
            else {
              if (((long)uVar11 < (long)param_3) || ((long)param_4 <= (long)uVar11)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1009716dc);
                (*pcVar2)();
              }
              FUN_1000f8cac(param_2 + uVar11 * 0x50,&local_c0,&DAT_100fef1e0,&DAT_100c87af0);
              uVar11 = uVar11 + 1;
            }
            FUN_1000f8cac(&local_c0,&local_160,&DAT_100fefa08,&DAT_100c88640);
            puVar8 = puVar8 + 10;
            uVar5 = uVar5 + 1;
          } while (lStack_118 != 2);
        }
        FUN_1000fb4c4(&local_160,&DAT_100fefa08,&DAT_100c88640);
        uVar10 = uVar5;
LAB_100971550:
        *(ulong *)(lVar9 + 0x10) = uVar10;
        FUN_1000f8cac(&local_c0,&local_110,&DAT_100fefa08,&DAT_100c88640);
        uVar5 = uVar10;
      }
      FUN_1000fb4c4(&local_c0,&DAT_100fefa08,&DAT_100c88640);
      _swift_unknownObjectRelease(param_1);
      FUN_1000fb4c4(&local_110,&DAT_100fefa08,&DAT_100c88640);
      goto LAB_100971504;
    }
  }
  else {
    if ((long)(uVar5 - uVar6) < lVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009716ec);
      (*pcVar2)();
    }
    puVar4 = &DAT_100fef1e0;
    FUN_1000f7830(&DAT_100fef1e0,&DAT_100c87af0);
    _swift_arrayInitWithCopy(lVar9 + uVar6 * 0x50 + 0x20,param_2 + param_3 * 0x50,lVar1,puVar4);
    if (0 < lVar1) {
      if (SCARRY8(*(long *)(lVar9 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009716f0);
        (*pcVar2)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + lVar1;
    }
    uVar11 = param_4;
    if (lVar1 == uVar5 - uVar6) goto LAB_10097148c;
  }
  _swift_unknownObjectRelease(param_1);
LAB_100971504:
  *unaff_x20 = lVar9;
  return;
}



/* Address: 0x1009716f0 | FUN_1009716f0 */

void FUN_1009716f0(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long local_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long local_180;
  long lStack_178;
  long local_170;
  long lStack_168;
  long local_160;
  long lStack_158;
  long local_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long local_130;
  long lStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_c8;
  undefined1 auStack_c0 [80];
  long local_70;
  
  lVar11 = *param_1;
  lVar7 = *unaff_x20;
  lVar8 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar8,lVar11)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971a9c);
    (*pcVar1)();
  }
  lVar2 = lVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar7;
  if (((int)lVar2 == 0) || (uVar6 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar6 < lVar8 + lVar11)) {
    FUN_100971e30();
    lVar7 = *unaff_x20;
    uVar6 = *(ulong *)(lVar7 + 0x18) >> 1;
  }
  plVar9 = (long *)(uVar6 - *(long *)(lVar7 + 0x10));
  plVar3 = &local_c8;
  FUN_100971cf4(plVar3,param_1,lVar7 + *(long *)(lVar7 + 0x10) * 0x50 + 0x20,plVar9);
  FUN_1000fb4c4(param_1,&DAT_100fef9f8,&DAT_100c88630);
  if ((long)plVar3 < lVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971aa0);
    (*pcVar1)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar7 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100971aa4);
      (*pcVar1)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + (long)plVar3;
  }
  if (plVar3 == plVar9) {
    uVar6 = *(ulong *)(lVar7 + 0x10);
    if (local_70 == local_c8) {
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      local_e0 = 0;
      uStack_d8 = 2;
      lVar8 = local_c8;
    }
    else {
      if ((local_70 < 0) || (local_c8 <= local_70)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100971aa8);
        (*pcVar1)();
      }
      FUN_1000f8cac(auStack_c0,&local_120,&DAT_100fef1e0,&DAT_100c87af0);
      lVar8 = local_70 + 1;
      local_70 = lVar8;
    }
    FUN_1000f8cac(&local_120,&local_170,&DAT_100fefa08,&DAT_100c88640);
    while (lStack_128 != 2) {
      FUN_1000fb4c4(&local_170,&DAT_100fefa08,&DAT_100c88640);
      if ((long)(*(ulong *)(lVar7 + 0x18) >> 1) < (long)(uVar6 + 1)) {
        FUN_100971e30(1 < *(ulong *)(lVar7 + 0x18),uVar6 + 1,1);
      }
      lVar7 = *unaff_x20;
      uVar10 = *(ulong *)(lVar7 + 0x18);
      FUN_1000f8cac(&local_120,&local_1c0,&DAT_100fefa08,&DAT_100c88640);
      if (lStack_178 != 2) {
        uVar10 = uVar10 >> 1;
        uVar12 = uVar6;
        if ((long)uVar6 <= (long)uVar10) {
          uVar12 = uVar10;
        }
        plVar3 = (long *)(lVar7 + uVar6 * 0x50 + 0x20);
        do {
          lStack_148 = lStack_198;
          local_150 = local_1a0;
          lStack_138 = lStack_188;
          local_140 = lStack_190;
          lStack_128 = lStack_178;
          local_130 = local_180;
          lStack_168 = lStack_1b8;
          local_170 = local_1c0;
          lStack_158 = lStack_1a8;
          local_160 = lStack_1b0;
          if (uVar12 == uVar6) {
            FUN_1000fb4c4(&local_170,&DAT_100fef1e0,&DAT_100c87af0);
            goto LAB_100971918;
          }
          FUN_1000fb4c4(&local_120,&DAT_100fefa08,&DAT_100c88640);
          plVar3[1] = lStack_168;
          *plVar3 = local_170;
          plVar3[7] = lStack_138;
          plVar3[6] = local_140;
          plVar3[9] = lStack_128;
          plVar3[8] = local_130;
          plVar3[3] = lStack_158;
          plVar3[2] = local_160;
          plVar3[5] = lStack_148;
          plVar3[4] = local_150;
          if (lVar8 == local_c8) {
            uStack_f8 = 0;
            local_100 = 0;
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_118 = 0;
            local_120 = 0;
            uStack_108 = 0;
            uStack_110 = 0;
            local_e0 = 0;
            uStack_d8 = 2;
            lVar8 = local_c8;
          }
          else {
            if ((lVar8 < 0) || (local_c8 <= lVar8)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100971a98);
              (*pcVar1)();
            }
            FUN_1000f8cac(auStack_c0,&local_120,&DAT_100fef1e0,&DAT_100c87af0);
            local_70 = lVar8 + 1;
            lVar8 = local_70;
          }
          FUN_1000f8cac(&local_120,&local_1c0,&DAT_100fefa08,&DAT_100c88640);
          plVar3 = plVar3 + 10;
          uVar6 = uVar6 + 1;
        } while (lStack_178 != 2);
      }
      FUN_1000fb4c4(&local_1c0,&DAT_100fefa08,&DAT_100c88640);
      uVar12 = uVar6;
LAB_100971918:
      *(ulong *)(lVar7 + 0x10) = uVar12;
      FUN_1000f8cac(&local_120,&local_170,&DAT_100fefa08,&DAT_100c88640);
      uVar6 = uVar12;
    }
    puVar4 = &DAT_100fefa08;
    puVar5 = &DAT_100c88640;
    FUN_1000fb4c4(&local_120,&DAT_100fefa08,&DAT_100c88640);
    FUN_1000fb4c4(&local_c8,&DAT_100fefa00,&DAT_100c88638);
    plVar3 = &local_170;
  }
  else {
    puVar4 = &DAT_100fefa00;
    puVar5 = &DAT_100c88638;
    plVar3 = &local_c8;
  }
  FUN_1000fb4c4(plVar3,puVar4,puVar5);
  *unaff_x20 = lVar7;
  return;
}



/* Address: 0x100971aa8 | FUN_100971aa8 */

void FUN_100971aa8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  long *plVar11;
  long lVar12;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined3 local_6c;
  undefined1 uStack_6a;
  long local_68;
  
  lVar7 = *unaff_x20;
  lVar12 = *(long *)(lVar7 + 0x10);
  if (SCARRY8(lVar12,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971ce8);
    (*pcVar2)();
  }
  lVar6 = lVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar7;
  if (((int)lVar6 == 0) || (uVar4 = *(ulong *)(lVar7 + 0x18) >> 1, (long)uVar4 < lVar12 + param_1))
  {
    FUN_100971e4c();
    lVar7 = *unaff_x20;
    uVar4 = *(ulong *)(lVar7 + 0x18) >> 1;
  }
  plVar11 = (long *)(uVar4 - *(long *)(lVar7 + 0x10));
  plVar3 = &local_88;
  FUN_100651f38(plVar3,lVar7 + *(long *)(lVar7 + 0x10) * 0x18 + 0x20,plVar11,param_1,param_2,param_3
                ,param_4 & 0xffffffffffffff);
  uVar1 = local_80;
  if ((long)plVar3 < param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100971cec);
    (*pcVar2)();
  }
  if (0 < (long)plVar3) {
    if (SCARRY8(*(long *)(lVar7 + 0x10),(long)plVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971cf0);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + (long)plVar3;
  }
  if ((plVar3 == plVar11) && (local_68 != local_88)) {
    if ((local_68 < 0) || (local_88 <= local_68)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100971cf4);
      (*pcVar2)();
    }
    uVar4 = *(ulong *)(lVar7 + 0x10);
    _swift_retain(local_80);
    lVar12 = local_68 + 1;
    do {
      if ((long)(*(ulong *)(lVar7 + 0x18) >> 1) < (long)(uVar4 + 1)) {
        FUN_100971e4c(1 < *(ulong *)(lVar7 + 0x18),uVar4 + 1,1);
      }
      lVar7 = *unaff_x20;
      uVar5 = *(ulong *)(lVar7 + 0x18) >> 1;
      uVar9 = uVar4;
      lVar6 = lVar12;
      if ((long)uVar4 < (long)uVar5) {
        lVar8 = 0;
        lVar6 = (lVar12 + uVar5) - uVar4;
        puVar10 = (undefined4 *)(lVar7 + uVar4 * 0x18 + 0x30);
        do {
          *(undefined8 *)(puVar10 + -4) = uVar1;
          *(undefined8 *)(puVar10 + -2) = uStack_78;
          *puVar10 = local_70;
          *(undefined1 *)((long)puVar10 + 6) = uStack_6a;
          *(short *)(puVar10 + 1) = (short)local_6c;
          if (local_88 - lVar12 == lVar8) {
            *(ulong *)(lVar7 + 0x10) = uVar4 + lVar8 + 1;
            goto LAB_100971cb4;
          }
          if ((lVar12 < 0) || (local_88 <= lVar12 + lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100971ce4);
            (*pcVar2)();
          }
          _swift_retain(uVar1);
          lVar8 = lVar8 + 1;
          puVar10 = puVar10 + 6;
          uVar9 = uVar5;
        } while ((uVar4 - uVar5) + lVar8 != 0);
      }
      *(ulong *)(lVar7 + 0x10) = uVar9;
      uVar4 = uVar9;
      lVar12 = lVar6;
    } while( true );
  }
LAB_100971cb4:
  _swift_release(local_80);
  *unaff_x20 = lVar7;
  return;
}



/* Address: 0x100971cf4 | FUN_100971cf4 */

ulong FUN_100971cf4(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  FUN_1000f8cac(param_2,&local_c8,&DAT_100fef9f8,&DAT_100c88630);
  uVar1 = local_c8;
  uStack_70 = 0;
  if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_4;
    if (param_4 != 0) {
      if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100971e30);
        (*pcVar2)();
      }
      uVar3 = uVar1;
      if (local_c8 != 0) {
        uVar4 = local_c8 & ((long)local_c8 >> 0x3f ^ 0xffffffffffffffffU);
        uVar5 = 1;
        uVar6 = local_c8;
        do {
          if (uVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100971e2c);
            (*pcVar2)();
          }
          uStack_70 = uVar5;
          FUN_1000f8cac(&uStack_c0,&local_118,&DAT_100fef1e0,&DAT_100c87af0);
          param_3[1] = uStack_110;
          *param_3 = local_118;
          param_3[7] = uStack_e0;
          param_3[6] = local_e8;
          param_3[9] = uStack_d0;
          param_3[8] = local_d8;
          param_3[3] = uStack_100;
          param_3[2] = local_108;
          param_3[5] = uStack_f0;
          param_3[4] = local_f8;
          uVar3 = param_4;
          if (param_4 == uVar5) break;
          param_3 = param_3 + 10;
          uVar5 = uVar5 + 1;
          uVar4 = uVar4 - 1;
          uVar6 = uVar6 - 1;
          uVar3 = uVar1;
        } while (uVar6 != 0);
      }
    }
  }
  param_1[5] = uStack_a0;
  param_1[4] = local_a8;
  param_1[7] = uStack_90;
  param_1[6] = local_98;
  param_1[9] = uStack_80;
  param_1[8] = local_88;
  param_1[0xb] = uStack_70;
  param_1[10] = local_78;
  param_1[1] = uStack_c0;
  *param_1 = local_c8;
  param_1[3] = uStack_b0;
  param_1[2] = local_b8;
  return uVar3;
}



/* Address: 0x100971e30 | FUN_100971e30 */

void FUN_100971e30(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10096b544();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100971e4c | FUN_100971e4c */

void FUN_100971e4c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10096b688();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100971e68 | FUN_100971e68 */

void FUN_100971e68(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  
  if (param_2 != param_3) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100971ee8);
      (*pcVar1)();
    }
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100971eec);
      (*pcVar1)();
    }
    if (*(ulong *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100971ef0);
      (*pcVar1)();
    }
    if (*(long *)(param_1 + param_2 * 0x18 + 0x20) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100971ef4);
      (*pcVar1)();
    }
    _swift_retain();
  }
  return;
}



/* Address: 0x100971ef4 | FUN_100971ef4 */

void FUN_100971ef4(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar3 = *unaff_x20;
  uVar7 = unaff_x20[1];
  lVar5 = unaff_x20[2] - uVar7;
  if ((long)unaff_x20[2] < (long)uVar7) {
    lVar5 = lVar5 + *(long *)(uVar3 + 0x10);
  }
  if (lVar5 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971fc4);
    (*pcVar1)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100971fc8);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_10096b530();
    }
    do {
      if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100971fbc);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar3 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100971fc0);
        (*pcVar1)();
      }
      puVar6 = (undefined8 *)(uVar3 + 0x20 + uVar7 * 0x18);
      uVar4 = *puVar6;
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined8 *)((long)puVar6 + 0xf) = 0;
      _swift_release(uVar4);
      uVar7 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar7 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar3;
  }
  unaff_x20[1] = uVar7;
  return;
}



/* Address: 0x100971fc8 | FUN_100971fc8 */

void FUN_100971fc8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009720d8);
    (*pcVar2)();
  }
  lVar6 = *unaff_x20;
  lVar7 = *(long *)(lVar6 + 0x10);
  if (!SCARRY8(lVar7,lVar1)) {
    lVar3 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar6;
    if (((int)lVar3 == 0) || (uVar5 = *(ulong *)(lVar6 + 0x18) >> 1, (long)uVar5 < lVar7 + lVar1)) {
      FUN_100971e4c();
      lVar6 = *unaff_x20;
      uVar5 = *(ulong *)(lVar6 + 0x18) >> 1;
    }
    if (param_3 == param_4) {
      if (0 < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100972038);
        (*pcVar2)();
      }
    }
    else {
      lVar7 = *(long *)(lVar6 + 0x10);
      if ((long)(uVar5 - lVar7) < lVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009720ec);
        (*pcVar2)();
      }
      puVar4 = &DAT_100fef420;
      FUN_1000f7830(&DAT_100fef420,&DAT_100c885e0);
      _swift_arrayInitWithCopy(lVar6 + lVar7 * 0x18 + 0x20,param_2 + param_3 * 0x18,lVar1,puVar4);
      if (0 < lVar1) {
        if (SCARRY8(*(long *)(lVar6 + 0x10),lVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009720f0);
          (*pcVar2)();
        }
        *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + lVar1;
      }
    }
    *unaff_x20 = lVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009720dc);
  (*pcVar2)();
}



/* Address: 0x1009720f0 | FUN_1009720f0 */

undefined8 FUN_1009720f0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x20;
  lVar1 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  uVar5 = (uint)((ulong)lVar7 >> 0x3e);
  if (uVar5 == 0) {
    _swift_unknownObjectRetain();
    lVar4 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native(lVar6);
    FUN_100973d94(param_1,param_2,param_1,lVar4);
    uVar3 = 2;
  }
  else {
    if (uVar5 != 1) {
      if ((lVar1 == 0 && lVar6 == 0) && lVar7 == -0x8000000000000000) {
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009721d8);
      (*pcVar2)();
    }
    _swift_unknownObjectRetain();
    lVar7 = lVar6;
    _swift_isUniquelyReferenced_nonNull_native(lVar6);
    FUN_100973d94(param_1,param_2,param_1,lVar7);
    uVar3 = 0;
    lVar7 = 0x4000000000000000;
  }
  *unaff_x20 = lVar6;
  unaff_x20[1] = lVar1;
  unaff_x20[2] = lVar7;
  return uVar3;
}



/* Address: 0x1009721d8 | FUN_1009721d8 */

long FUN_1009721d8(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar5 = unaff_x20[2];
  uVar4 = (uint)((ulong)lVar5 >> 0x3e);
  if (uVar4 == 0) {
    FUN_100973d04();
    _swift_unknownObjectRelease();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100972290);
      (*pcVar3)();
    }
    *unaff_x20 = lVar1;
    unaff_x20[1] = lVar2;
    unaff_x20[2] = lVar5;
  }
  else {
    if (uVar4 != 1) {
      if ((lVar2 == 0 && lVar1 == 0) && lVar5 == -0x8000000000000000) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009722b0);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009722ac);
      (*pcVar3)();
    }
    FUN_100973d04();
    _swift_unknownObjectRelease();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100972294);
      (*pcVar3)();
    }
    *unaff_x20 = lVar1;
    unaff_x20[1] = lVar2;
    unaff_x20[2] = 0x4000000000000000;
    if (*(long *)(lVar1 + 0x10) == 0) {
      _swift_bridgeObjectRelease();
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      unaff_x20[2] = -0x8000000000000000;
      return lVar2;
    }
  }
  return 0;
}



/* Address: 0x1009722b0 | FUN_1009722b0 */

void FUN_1009722b0(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 local_68 [3];
  
  _swift_beginAccess(unaff_x20 + 0x10,local_68,0x21,0);
  uVar4 = param_1;
  FUN_1009720f0(param_1,param_2);
  _swift_endAccess(local_68);
  uVar1 = (uint)uVar4 & 0xff;
  if (uVar1 == 1) {
    _swift_getObjectType(param_1);
    uVar4 = 2;
    FUN_10061cf14(2,0,param_1,param_2);
    FUN_100974df4();
    _swift_allocError(&DAT_100f1db08,uVar4,0,0);
    _swift_willThrow();
  }
  else if (uVar1 != 2) {
    uVar4 = param_1;
    _swift_getObjectType(param_1);
    lVar5 = *(long *)(param_2 + 8);
    local_68[0] = param_1;
    (**(code **)(lVar5 + 0x50))();
    uVar2 = uVar4;
    _swift_getObjectType();
    puVar3 = &DAT_100f1d868;
    _swift_allocObject(&DAT_100f1d868,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = param_2;
    pcVar6 = *(code **)(lVar5 + 0x18);
    _swift_unknownObjectRetain(param_1);
    (*pcVar6)(FUN_100974e58,puVar3,uVar2,lVar5);
    _swift_unknownObjectRelease(uVar4);
    _swift_release(puVar3);
  }
  return;
}



/* Address: 0x100972404 | FUN_100972404 */

void FUN_100972404(long param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0x21,0);
  FUN_1009721d8(param_2,param_3);
  _swift_endAccess(auStack_48);
  if (param_2 != 0) {
    FUN_1009742a8(0,0,param_2);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100972484 | FUN_100972484 */

void FUN_100972484(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long local_98 [3];
  undefined *local_80;
  long local_78 [3];
  
  _swift_beginAccess(unaff_x20 + 0x10,local_98,0x21,0);
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar18 = *(long *)(unaff_x20 + 0x20);
  uVar13 = (uint)((ulong)lVar18 >> 0x3e);
  if (uVar13 != 0) {
    if (uVar13 != 1) {
      if ((lVar3 != 0 || lVar2 != 0) || lVar18 != -0x8000000000000000) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100972c4c);
        (*pcVar15)();
      }
      _swift_endAccess(local_98);
      if (param_1 == 0) {
        return;
      }
      FUN_100973bf8(0,0,param_1,FUN_100308524,&DAT_100f1d8b8,FUN_100974e70);
      return;
    }
    _swift_endAccess(local_98);
    if (param_1 == 0) {
      return;
    }
    puVar9 = &DAT_100f1d958;
    _swift_allocObject(&DAT_100f1d958,0x28,7);
    *(code **)(puVar9 + 0x10) = FUN_100974f1c;
    *(long *)(puVar9 + 0x18) = param_1;
    *(long *)(puVar9 + 0x20) = lVar3;
    uVar16 = *(ulong *)(lVar3 + 0x20);
    lVar2 = *(long *)(lVar3 + 0x28);
    _swift_getObjectType();
    pcVar15 = *(code **)(lVar2 + 0x10);
    _swift_retain_n(lVar3,4);
    _swift_retain_n(param_1,5);
    uVar14 = uVar16;
    (*pcVar15)(uVar16,lVar2);
    if ((uVar14 & 1) == 0) {
      _swift_release(param_1);
      puVar10 = &DAT_100f1d980;
      _swift_allocObject(&DAT_100f1d980,0x28,7);
      *(long *)(puVar10 + 0x10) = lVar3;
      *(code **)(puVar10 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      pcVar15 = *(code **)(lVar2 + 0x18);
      _swift_retain(lVar3);
      _swift_retain(puVar9);
      (*pcVar15)(thunk_FUN_100653138,puVar10,uVar16,lVar2);
      _swift_release(puVar10);
      _swift_release_n(lVar3,3);
      _swift_release_n(param_1,2);
      _swift_release(puVar9);
    }
    else {
      _swift_beginAccess(lVar3 + 0x10,local_98,0,0);
      cVar12 = *(char *)(lVar3 + 0x18);
      if (cVar12 == -1) {
        _swift_release(param_1);
        _swift_beginAccess(lVar3 + 0x30,local_78,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar9);
        _swift_endAccess(local_78);
      }
      else {
        uVar17 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100308524(uVar17,cVar12);
        FUN_10097cf74(uVar17,cVar12,param_1);
        _swift_release(param_1);
        FUN_100308538(uVar17,cVar12);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release_n(lVar3,3);
      _swift_release_n(param_1,2);
      _swift_release(puVar9);
      _swift_bridgeObjectRelease(0);
    }
    goto LAB_100972c20;
  }
  lVar6 = param_1;
  if (param_1 == 0) {
    lVar6 = lVar3;
    _swift_getObjectType();
    local_78[0] = lVar3;
    (**(code **)(*(long *)(lVar18 + 8) + 0x50))();
    FUN_100974a58();
  }
  *(long *)(unaff_x20 + 0x10) = lVar2;
  *(long *)(unaff_x20 + 0x18) = lVar6;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x4000000000000000;
  _swift_endAccess(local_98);
  lVar7 = lVar3;
  _swift_getObjectType(lVar3);
  pcVar15 = *(code **)(lVar18 + 0x28);
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(lVar2);
  _swift_retain(lVar6);
  lVar8 = lVar7;
  (*pcVar15)(lVar7,lVar18);
  local_80 = &DAT_100eeb8a0;
  FUN_100629a5c(local_98);
  _swift_release(lVar8);
  FUN_100004594(local_98);
  lVar8 = 2;
  local_98[0] = lVar3;
  FUN_100622874(2,"NIOExtras/QuiescingHelper.swift",0x1f,2,0xf9,lVar7,*(undefined8 *)(lVar18 + 8));
  puVar9 = &DAT_100f1d9a8;
  _swift_allocObject(&DAT_100f1d9a8,0x28,7);
  *(long *)(puVar9 + 0x10) = lVar8;
  *(code **)(puVar9 + 0x18) = thunk_FUN_100974b7c;
  *(long *)(puVar9 + 0x20) = lVar6;
  uVar16 = *(ulong *)(lVar8 + 0x20);
  lVar18 = *(long *)(lVar8 + 0x28);
  _swift_getObjectType();
  pcVar15 = *(code **)(lVar18 + 0x10);
  _swift_retain_n(lVar6,6);
  _swift_retain_n(lVar8,2);
  uVar14 = uVar16;
  (*pcVar15)(uVar16,lVar18);
  if ((uVar14 & 1) == 0) {
    puVar10 = &DAT_100f1d9d0;
    _swift_allocObject(&DAT_100f1d9d0,0x28,7);
    *(long *)(puVar10 + 0x10) = lVar8;
    *(code **)(puVar10 + 0x18) = thunk_FUN_1008db354;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    pcVar15 = *(code **)(lVar18 + 0x18);
    _swift_retain(lVar8);
    _swift_retain(puVar9);
    (*pcVar15)(thunk_FUN_100653138,puVar10,uVar16,lVar18);
    _swift_release(puVar10);
    _swift_release_n(lVar6,2);
    _swift_release_n(lVar8,2);
    _swift_release(puVar9);
  }
  else {
    uVar17 = 0;
    _swift_beginAccess(lVar8 + 0x10,local_98,0,0);
    uVar19 = *(undefined8 *)(lVar8 + 0x10);
    cVar12 = *(char *)(lVar8 + 0x18);
    if (cVar12 == '\x01') {
      uVar16 = *(ulong *)(lVar6 + 0x20);
      lVar18 = *(long *)(lVar6 + 0x28);
      _swift_getObjectType();
      pcVar15 = *(code **)(lVar18 + 0x10);
      FUN_100308524(uVar19,1);
      (*pcVar15)(uVar16,lVar18);
      if ((uVar16 & 1) == 0) {
        uVar17 = *(undefined8 *)(lVar6 + 0x20);
        lVar18 = *(long *)(lVar6 + 0x28);
        _swift_getObjectType();
        puVar10 = &DAT_100f1da20;
        _swift_allocObject(&DAT_100f1da20,0x20,7);
        *(long *)(puVar10 + 0x10) = lVar6;
        *(undefined8 *)(puVar10 + 0x18) = uVar19;
        pcVar15 = *(code **)(lVar18 + 0x18);
        _swift_retain(lVar6);
        FUN_1005dfeb4(uVar19,1);
        (*pcVar15)(thunk_FUN_1008d678c,puVar10,uVar17,lVar18);
        _swift_release(puVar10);
      }
      else {
        uVar11 = uVar19;
        thunk_FUN_1005de8f4(uVar19);
        FUN_1006486f8();
        FUN_100004550(uVar11,lVar18);
        _swift_bridgeObjectRelease(uVar17);
      }
      cVar12 = '\x01';
LAB_100972a04:
      FUN_100308538(uVar19,cVar12);
    }
    else {
      if (cVar12 != -1) goto LAB_100972a04;
      _swift_beginAccess(lVar8 + 0x30,local_78,0x21,0);
      FUN_10064967c(thunk_FUN_1008db354,puVar9);
      _swift_endAccess(local_78);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(lVar6,2);
    _swift_release_n(lVar8,2);
    _swift_release(puVar9);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release_n(lVar6,3);
  uVar14 = 1L << ((ulong)*(byte *)(lVar2 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar2 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar2 + 0x40);
  _swift_bridgeObjectRetain(lVar2);
  lVar18 = 0;
  while( true ) {
    for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
      uVar4 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      plVar1 = (long *)(*(long *)(lVar2 + 0x38) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
                       lVar18 * 0x400);
      lVar8 = plVar1[1];
      lVar22 = plVar1[1];
      lVar21 = *plVar1;
      lVar7 = lVar21;
      _swift_getObjectType(lVar21);
      lVar20 = *(long *)(lVar8 + 8);
      pcVar15 = *(code **)(lVar20 + 0x50);
      local_78[0] = lVar21;
      _swift_unknownObjectRetain(lVar21);
      (*pcVar15)(lVar7);
      lVar8 = lVar7;
      _swift_getObjectType();
      puVar9 = &DAT_100f1d9f8;
      _swift_allocObject(&DAT_100f1d9f8,0x20,7);
      *(long *)(puVar9 + 0x18) = lVar22;
      *(long *)(puVar9 + 0x10) = lVar21;
      pcVar15 = *(code **)(lVar20 + 0x18);
      _swift_unknownObjectRetain(lVar21);
      (*pcVar15)(thunk_FUN_100974e58,puVar9,lVar8,lVar20);
      _swift_unknownObjectRelease(lVar7);
      _swift_release(puVar9);
      _swift_unknownObjectRelease(lVar21);
    }
    bVar5 = SCARRY8(lVar18,1);
    lVar18 = lVar18 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100972c48);
      (*pcVar15)();
    }
    if ((long)(uVar14 + 0x3f >> 6) <= lVar18) break;
    uVar16 = ((ulong *)(lVar2 + 0x40))[lVar18];
  }
  _swift_release(lVar2);
  lVar18 = *(long *)(lVar2 + 0x10);
  _swift_bridgeObjectRelease(lVar2);
  if (lVar18 == 0) {
    param_1 = *(long *)(unaff_x20 + 0x18);
    uVar13 = (uint)((ulong)*(long *)(unaff_x20 + 0x20) >> 0x3e);
    if (uVar13 != 1) {
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100972c54);
        (*pcVar15)();
      }
      if ((param_1 == 0 && *(long *)(unaff_x20 + 0x10) == 0) &&
         (*(long *)(unaff_x20 + 0x20) == -0x8000000000000000)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100972c6c);
        (*pcVar15)();
      }
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100972c70);
      (*pcVar15)();
    }
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
    _swift_bridgeObjectRelease();
    FUN_1009742a8(0,0,param_1);
    _swift_unknownObjectRelease(lVar3);
    _swift_release(lVar6);
  }
  else {
    _swift_unknownObjectRelease(lVar3);
    param_1 = lVar6;
  }
LAB_100972c20:
  _swift_release(param_1);
  return;
}



/* Address: 0x100972c70 | FUN_100972c70 */

void FUN_100972c70(undefined8 param_1,long param_2)

{
  undefined1 auStack_40 [24];
  undefined *local_28;
  
  _swift_getObjectType();
  (**(code **)(param_2 + 0x28))();
  local_28 = &DAT_100eeb8a0;
  FUN_100629a5c(auStack_40);
  _swift_release(param_1);
  FUN_100004594(auStack_40);
  return;
}



/* Address: 0x100972cd0 | FUN_100972cd0 */

void FUN_100972cd0(void)

{
  long unaff_x20;
  
  FUN_100974c0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100972d00 | FUN_100972d00 */

/* WARNING: Removing unreachable block (ram,0x000100972d50) */
/* WARNING: Removing unreachable block (ram,0x0001009730f8) */
/* WARNING: Removing unreachable block (ram,0x000100972d8c) */

void FUN_100972d00(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c0 [24];
  undefined1 local_a8 [72];
  
  lVar10 = param_2;
  FUN_100974c70();
  lVar13 = *(long *)(unaff_x20 + 0x10);
  FUN_1009722b0();
  lVar2 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x20))();
  puVar3 = &DAT_100f1d7a0;
  _swift_allocObject(&DAT_100f1d7a0,0x28,7);
  *(long *)(puVar3 + 0x10) = lVar13;
  *(long *)(puVar3 + 0x18) = param_1;
  *(long *)(puVar3 + 0x20) = lVar10;
  puVar4 = &DAT_100f1d7c8;
  _swift_allocObject(&DAT_100f1d7c8,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_100974dc8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = lVar2;
  uVar5 = *(ulong *)(lVar2 + 0x20);
  lVar7 = *(long *)(lVar2 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(lVar13,2);
  _swift_unknownObjectRetain_n(param_1,2);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(lVar2,2);
  uVar6 = uVar5;
  (*pcVar11)(uVar5,lVar7);
  if ((uVar6 & 1) == 0) {
    puVar8 = &DAT_100f1d7f0;
    _swift_allocObject(&DAT_100f1d7f0,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar2;
    *(code **)(puVar8 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar8 + 0x20) = puVar4;
    pcVar11 = *(code **)(lVar7 + 0x18);
    _swift_retain(lVar2);
    _swift_retain(puVar4);
    (*pcVar11)(thunk_FUN_100653138,puVar8,uVar5,lVar7);
    _swift_release(lVar13);
    _swift_release(puVar8);
    _swift_release(lVar2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar4);
  }
  else {
    _swift_beginAccess(lVar2 + 0x10,local_a8,0,0);
    cVar1 = *(char *)(lVar2 + 0x18);
    if (cVar1 == -1) {
      _swift_beginAccess(lVar2 + 0x30,auStack_c0,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar4);
      _swift_endAccess(auStack_c0);
    }
    else {
      uVar12 = *(undefined8 *)(lVar2 + 0x10);
      uVar5 = *(ulong *)(lVar13 + 0x28);
      lVar7 = *(long *)(lVar13 + 0x30);
      _swift_getObjectType();
      pcVar11 = *(code **)(lVar7 + 0x10);
      FUN_100308524(uVar12,cVar1);
      (*pcVar11)(uVar5,lVar7);
      if ((uVar5 & 1) == 0) {
        uVar9 = *(undefined8 *)(lVar13 + 0x28);
        lVar7 = *(long *)(lVar13 + 0x30);
        _swift_getObjectType();
        puVar8 = &DAT_100f1d818;
        _swift_allocObject(&DAT_100f1d818,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar13;
        *(long *)(puVar8 + 0x18) = param_1;
        *(long *)(puVar8 + 0x20) = lVar10;
        pcVar11 = *(code **)(lVar7 + 0x18);
        _swift_retain(lVar13);
        _swift_unknownObjectRetain(param_1);
        (*pcVar11)(FUN_100974ddc,puVar8,uVar9,lVar7);
        _swift_release(puVar8);
      }
      else {
        _swift_beginAccess(lVar13 + 0x10,auStack_c0,0x21,0);
        lVar7 = param_1;
        FUN_1009721d8(param_1,lVar10);
        _swift_endAccess(auStack_c0);
        if (lVar7 != 0) {
          FUN_1009742a8(0,0,lVar7);
          _swift_release(lVar7);
        }
      }
      FUN_100308538(uVar12,cVar1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(lVar13);
    _swift_release(lVar2);
    _swift_release_n(puVar3,2);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(0);
  }
  _swift_unknownObjectRelease(param_1);
  FUN_100626ce0(param_2);
  _swift_release(lVar2);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x100973198 | FUN_100973198 */

void FUN_100973198(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_68 [24];
  
  uVar2 = *(ulong *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    _swift_beginAccess(param_2 + 0x10,auStack_68,0x21,0);
    FUN_1009721d8(param_3,param_4);
    _swift_endAccess(auStack_68);
    if (param_3 != 0) {
      FUN_1009742a8(0,0,param_3);
      _swift_release(param_3);
    }
    return;
  }
  puVar4 = &DAT_100f1d890;
  _swift_allocObject(&DAT_100f1d890,0x28,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(long *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  (*pcVar5)(thunk_FUN_100974ddc,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1009732b4 | FUN_1009732b4 */

void FUN_1009732b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100974c70();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1009732dc | thunk_FUN_100972d00 */

void thunk_FUN_100972d00(void)

{
  FUN_100972d00();
  return;
}



/* Address: 0x1009732e0 | FUN_1009732e0 */

void FUN_1009732e0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = param_2;
  FUN_10000cbfc(param_2,auStack_40);
  _swift_dynamicCast();
  if ((uVar1 & 1) == 0) {
    FUN_100626b98(param_2);
  }
  return;
}



/* Address: 0x100973340 | FUN_100973340 */

long FUN_100973340(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  _swift_allocObject();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x10))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = 0;
  FUN_100973430(0);
  FUN_100974a58(uVar1,param_2,uVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Address: 0x1009733c4 | FUN_1009733c4 */

void FUN_1009733c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x10))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = 0;
  FUN_100973430(0);
  FUN_100974a58(uVar1,param_2,uVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return;
}



/* Address: 0x100973430 | FUN_100973430 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100973430(void)

{
  return ZEXT816(0x100fefa58);
}



/* Address: 0x100973450 | FUN_100973450 */

void FUN_100973450(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  FUN_100974ae0();
  puVar1 = &DAT_100f1d690;
  uVar5 = 0;
  _swift_allocError(&DAT_100f1d690,param_1,0,0);
  uVar2 = *(ulong *)(lVar6 + 0x20);
  lVar4 = *(long *)(lVar6 + 0x28);
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar4 + 0x10);
  _swift_retain(lVar6);
  (*pcVar7)(uVar2,lVar4);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x20);
    lVar4 = *(long *)(lVar6 + 0x28);
    _swift_getObjectType(uVar5);
    puVar3 = &DAT_100f1d5c8;
    _swift_allocObject(&DAT_100f1d5c8,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar6;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    pcVar7 = *(code **)(lVar4 + 0x18);
    _swift_retain(lVar6);
    _swift_errorRetain(puVar1);
    (*pcVar7)(FUN_1008d678c,puVar3,uVar5,lVar4);
    _swift_release(lVar6);
    _swift_release(puVar3);
  }
  else {
    puVar3 = puVar1;
    thunk_FUN_1005de8f4(puVar1);
    FUN_1006486f8();
    _swift_release(lVar6);
    FUN_100004550(puVar3,lVar4);
    _swift_bridgeObjectRelease(uVar5);
  }
  _swift_errorRelease(puVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10097358c | FUN_10097358c */

void FUN_10097358c(void)

{
  FUN_100973450();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009735ac | FUN_1009735ac */

void FUN_1009735ac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = 0;
  FUN_100973430();
  _swift_allocObject();
  uVar2 = param_1;
  _swift_getObjectType();
  lVar4 = *(long *)(param_2 + 8);
  (**(code **)(lVar4 + 0x50))();
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *(long *)(lVar1 + 0x30) = lVar4;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1009748a8();
  *(undefined **)(lVar1 + 0x10) = puVar3;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(long *)(lVar1 + 0x20) = param_2;
  _swift_unknownObjectRetain(param_1);
  _swift_retain(lVar1);
  FUN_100973bf8();
  _swift_release(lVar1);
  lVar4 = 0;
  FUN_100974b30();
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar1;
  return;
}



/* Address: 0x100973694 | FUN_100973694 */

void FUN_100973694(long param_1)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code cVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100f1d5f0;
  _swift_allocObject(&DAT_100f1d5f0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_1;
  _swift_retain(param_1);
  pcVar3 = FUN_100974b74;
  FUN_100974490(FUN_100974b74,puVar2);
  _swift_release(puVar2);
  if (param_1 == 0) {
    _swift_release(pcVar3);
    return;
  }
  puVar2 = &DAT_100f1d618;
  _swift_allocObject(&DAT_100f1d618,0x28,7);
  *(code **)(puVar2 + 0x10) = pcVar3;
  *(code **)(puVar2 + 0x18) = FUN_100974b7c;
  *(long *)(puVar2 + 0x20) = param_1;
  uVar4 = *(ulong *)(pcVar3 + 0x20);
  lVar1 = *(long *)(pcVar3 + 0x28);
  _swift_retain(param_1);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_1,6);
  _swift_retain_n(pcVar3,2);
  uVar5 = uVar4;
  (*pcVar12)(uVar4,lVar1);
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f1d640;
    _swift_allocObject(&DAT_100f1d640,0x28,7);
    *(code **)(puVar6 + 0x10) = pcVar3;
    *(code **)(puVar6 + 0x18) = FUN_1008db354;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar2);
    (*pcVar12)(thunk_FUN_100653138,puVar6,uVar4,lVar1);
    _swift_release(puVar6);
    _swift_release_n(param_1,4);
    _swift_release_n(pcVar3,2);
    _swift_release(puVar2);
    goto LAB_100973980;
  }
  uVar10 = 0;
  _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
  uVar11 = *(undefined8 *)(pcVar3 + 0x10);
  cVar8 = pcVar3[0x18];
  if (cVar8 == (code)0x1) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar1 + 0x10);
    FUN_100308524(uVar11,1);
    uVar5 = uVar4;
    lVar9 = lVar1;
    (*pcVar12)(uVar4,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f1d668;
      _swift_allocObject(&DAT_100f1d668,0x20,7);
      *(long *)(puVar6 + 0x10) = param_1;
      *(undefined8 *)(puVar6 + 0x18) = uVar11;
      pcVar12 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_1);
      FUN_1005dfeb4(uVar11,1);
      (*pcVar12)(FUN_1008d678c,puVar6,uVar4,lVar1);
      _swift_release(puVar6);
    }
    else {
      uVar7 = uVar11;
      thunk_FUN_1005de8f4(uVar11);
      FUN_1006486f8();
      FUN_100004550(uVar7,lVar9);
      _swift_bridgeObjectRelease(uVar10);
    }
    cVar8 = (code)0x1;
LAB_100973938:
    FUN_100308538(uVar11,cVar8);
  }
  else {
    if (cVar8 != (code)0xff) goto LAB_100973938;
    _swift_beginAccess(pcVar3 + 0x30,auStack_90,0x21,0);
    FUN_10064967c(FUN_1008db354,puVar2);
    _swift_endAccess(auStack_90);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(param_1,4);
  _swift_release_n(pcVar3,2);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(0);
LAB_100973980:
  _swift_release_n(param_1,2);
  return;
}



/* Address: 0x1009739ac | FUN_1009739ac */

void FUN_1009739ac(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *param_1;
  uVar2 = *(ulong *)(lVar5 + 0x28);
  lVar1 = *(long *)(lVar5 + 0x30);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) != 0) {
    FUN_100972484(param_2);
    return;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  lVar1 = *(long *)(lVar5 + 0x30);
  _swift_getObjectType(uVar3);
  puVar4 = &DAT_100f1d930;
  _swift_allocObject(&DAT_100f1d930,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(lVar5);
  (*pcVar6)(FUN_100974ef8,puVar4,uVar3,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100973a80 | FUN_100973a80 */

void FUN_100973a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if ((undefined **)PTR___type_metadata_for_Any_100eae0c0 == &PTR_PTR_100eeaaa0) {
    FUN_10065b5f8();
    local_78 = (undefined4)param_4;
    local_72 = (undefined1)((ulong)param_4 >> 0x30);
    local_74 = (undefined2)((ulong)param_4 >> 0x20);
    puVar3 = &DAT_100eeaaa8;
    local_88 = param_2;
    uStack_80 = param_3;
  }
  else if ((undefined **)PTR___type_metadata_for_Any_100eae0c0 == &PTR_PTR_100ef1118) {
    FUN_10065bcfc();
    local_78 = (undefined4)param_4;
    local_72 = (undefined1)((ulong)param_4 >> 0x30);
    local_74 = (undefined2)((ulong)param_4 >> 0x20);
    puVar3 = &DAT_100ef1120;
    local_88 = param_2;
    uStack_80 = param_3;
  }
  else {
    puVar3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    if (puVar3 == &DAT_100ef13d8) {
      FUN_10065b97c();
      local_78 = (undefined4)param_4;
      local_72 = (undefined1)((ulong)param_4 >> 0x30);
      local_74 = (undefined2)((ulong)param_4 >> 0x20);
      puVar3 = &DAT_100ef13d8;
      local_88 = param_2;
      uStack_80 = param_3;
    }
    else {
      puVar2 = &DAT_100fef0f0;
      FUN_1000f7830(&DAT_100fef0f0,&DAT_100c88790);
      if (puVar2 != puVar3) {
        FUN_10096a7c0(param_1,param_2);
        return;
      }
      FUN_10065c09c(&local_88);
      puVar3 = puVar1 + 8;
    }
  }
  _swift_dynamicCast(param_1,&local_88,puVar3,puVar1 + 8,7);
  return;
}



/* Address: 0x100973bdc | FUN_100973bdc */

void FUN_100973bdc(void)

{
  FUN_100973bf8();
  return;
}



/* Address: 0x100973bf8 | FUN_100973bf8 */

void FUN_100973bf8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_100630334(param_1,param_2,param_4);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  _swift_allocObject(param_5,0x21,7);
  *(long *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(char *)(param_5 + 0x20) = (char)param_2;
  pcVar4 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  (*param_4)(param_1,param_2);
  (*pcVar4)(param_6,param_5,uVar2,lVar1);
  _swift_release(param_5);
  return;
}


