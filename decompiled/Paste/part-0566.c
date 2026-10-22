/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100653350 | FUN_100653350 */

void FUN_100653350(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653384 | FUN_100653384 */

void FUN_100653384(undefined8 param_1)

{
  FUN_100653390(param_1,FUN_10065057c);
  return;
}



/* Address: 0x100653390 | FUN_100653390 */

void FUN_100653390(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001006533a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x40),param_1,*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006533ac | FUN_1006533ac */

void FUN_1006533ac(undefined8 param_1,char param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  if (param_2 != '\x01') {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    _swift_getObjectType(uVar5);
    FUN_100642338();
    _swift_beginAccess(param_3 + 0x20,auStack_68,1,0);
    if (!SBORROW8(*(long *)(param_3 + 0x20),1)) {
      *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + -1;
      FUN_100642338(uVar5,uVar2);
      if (*(long *)(param_3 + 0x20) == 0) {
        FUN_1006499b0(0,0,param_4,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10065354c);
    (*pcVar8)();
  }
  uVar3 = *(ulong *)(param_4 + 0x20);
  lVar1 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar7);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar6 = &DAT_100ef0d40;
  _swift_allocObject(&DAT_100ef0d40,0x20,7);
  *(long *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  pcVar8 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(param_1,1);
  (*pcVar8)(thunk_FUN_10061dfe0,puVar6,uVar3,lVar1);
  _swift_release(puVar6);
  return;
}



/* Address: 0x10065354c | FUN_10065354c */

void FUN_10065354c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = &DAT_100ef0ca0;
  _swift_allocObject(&DAT_100ef0ca0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  _swift_retain(param_2);
  FUN_100646e1c(FUN_100645f18,puVar1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x1006535c8 | FUN_1006535c8 */

void FUN_1006535c8(void)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006535ec | FUN_1006535ec */

void FUN_1006535ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100650954(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100653604 | FUN_100653604 */

void FUN_100653604(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653654 | FUN_100653654 */

void FUN_100653654(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653678 | FUN_100653678 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100653678(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006536ac | FUN_1006536ac */

void FUN_1006536ac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100650c28(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006536bc | thunk_FUN_100653704 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100653704(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006536c0 | FUN_1006536c0 */

void FUN_1006536c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100650d50(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006536cc | FUN_1006536cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1006536cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006536f8 | FUN_1006536f8 */

void FUN_1006536f8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100650fd8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100653704 | FUN_100653704 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100653704(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653730 | FUN_100653730 */

void FUN_100653730(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10065122c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10065373c | FUN_10065373c */

void FUN_10065373c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10065374c | FUN_10065374c */

void FUN_10065374c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100652094(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100653754 | FUN_100653754 */

void FUN_100653754(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100652150(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10065375c | FUN_10065375c */

void FUN_10065375c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100652204(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100653764 | thunk_FUN_100653768 */

void thunk_FUN_100653768(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8600 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6abb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6abb0,&DAT_100ef0b60);
  DAT_100fd8600 = pTVar1;
  return;
}



/* Address: 0x100653768 | FUN_100653768 */

void FUN_100653768(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8600 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6abb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6abb0,&DAT_100ef0b60);
  DAT_100fd8600 = pTVar1;
  return;
}



/* Address: 0x1006537a8 | thunk_FUN_1006537dc */

long * thunk_FUN_1006537dc(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar1;
  }
  else {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    _swift_retain();
  }
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1006537ac | FUN_1006537ac */

void FUN_1006537ac(long *param_1)

{
  if (*param_1 != 0) {
    _swift_release(param_1[1]);
  }
  _swift_bridgeObjectRelease(param_1[2]);
  return;
}



/* Address: 0x1006537dc | FUN_1006537dc */

long * FUN_1006537dc(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar1;
  }
  else {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    _swift_retain();
  }
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10065382c | FUN_10065382c */

long * FUN_10065382c(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *param_2;
  if (*param_1 == 0) {
    if (lVar2 != 0) {
      lVar1 = param_2[1];
      *param_1 = lVar2;
      param_1[1] = lVar1;
      _swift_retain();
      goto LAB_100653894;
    }
  }
  else {
    if (lVar2 != 0) {
      lVar1 = param_2[1];
      lVar3 = param_1[1];
      *param_1 = lVar2;
      param_1[1] = lVar1;
      _swift_retain();
      _swift_release(lVar3);
      goto LAB_100653894;
    }
    FUN_1006529ec(param_1);
  }
  lVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar2;
LAB_100653894:
  lVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(lVar2);
  return param_1;
}



/* Address: 0x1006538c0 | FUN_1006538c0 */

long * FUN_1006538c0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    if (*param_2 != 0) {
      lVar2 = param_2[1];
      lVar1 = param_1[1];
      *param_1 = *param_2;
      param_1[1] = lVar2;
      _swift_release(lVar1);
      goto LAB_100653908;
    }
    FUN_1006529ec(param_1);
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
LAB_100653908:
  lVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(lVar1);
  return param_1;
}



/* Address: 0x100653928 | FUN_100653928 */

int FUN_100653928(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100653984 | FUN_100653984 */

void FUN_100653984(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1006539d8 | FUN_1006539d8 */

undefined1  [16] FUN_1006539d8(void)

{
  return ZEXT816(0x100ef09b8);
}



/* Address: 0x1006539e8 | FUN_1006539e8 */

undefined1  [16] FUN_1006539e8(void)

{
  return ZEXT816(0x100ef0a38);
}



/* Address: 0x1006539f8 | FUN_1006539f8 */

undefined1  [16] FUN_1006539f8(void)

{
  return ZEXT816(0x100ef0a60);
}



/* Address: 0x100653a08 | FUN_100653a08 */

void FUN_100653a08(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100653a14 | FUN_100653a14 */

undefined1  [16] FUN_100653a14(long param_1)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  ulong uVar3;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar3 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  if (uVar3 < 0x40) {
    local_38 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 0x40;
    puStack_30 = &DAT_100c6ac70;
    local_28 = &DAT_100c6ac88;
    uVar4 = 0;
    _swift_initClassMetadata2(param_1,0,3,&local_38,param_1 + 0x58);
    if (param_1 == 0) {
      param_1 = 0;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x3f;
    param_1 = CONCAT71(extraout_var_00,OVar2.value);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Address: 0x100653ac8 | FUN_100653ac8 */

undefined1  [16] FUN_100653ac8(void)

{
  return ZEXT816(0x100ef0b60);
}



/* Address: 0x100653ad8 | FUN_100653ad8 */

void FUN_100653ad8(void)

{
  Result RVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar4 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x50);
  uVar4 = uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = unaff_x20 + uVar4;
  _swift_getEnumCaseMultiPayload(lVar2,CONCAT71(extraout_var,RVar1.value));
  if ((int)lVar2 == 1) {
    _swift_errorRelease(*(undefined8 *)(unaff_x20 + uVar4));
  }
  else {
    (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + uVar4,lVar3);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100653b90 | FUN_100653b90 */

void FUN_100653b90(void)

{
  Result RVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long unaff_x20;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,RVar1.value) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100653bf8 | FUN_100653bf8 */

void FUN_100653bf8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100653c0c | FUN_100653c0c */

void FUN_100653c0c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100653c14 | FUN_100653c14 */

void FUN_100653c14(void)

{
  FUN_100653e60(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100653c20 | FUN_100653c20 */

void FUN_100653c20(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100653c48 | FUN_100653c48 */

void FUN_100653c48(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100653cac | FUN_100653cac */

void FUN_100653cac(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100653ce8 | FUN_100653ce8 */

void FUN_100653ce8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x30 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100653d4c | FUN_100653d4c */

void FUN_100653d4c(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x20))(unaff_x20 + (uVar1 + 0x30 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100653d88 | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653d8c | FUN_100653d8c */

void FUN_100653d8c(void)

{
  long unaff_x20;
  
  FUN_100650814(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100653d9c | FUN_100653d9c */

void FUN_100653d9c(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100653da8 | FUN_100653da8 */

void FUN_100653da8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10064ee80(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x100653dc4 | FUN_100653dc4 */

void FUN_100653dc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653dfc | FUN_100653dfc */

void FUN_100653dfc(void)

{
  long unaff_x20;
  
  FUN_1006533ac(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100653e0c | FUN_100653e0c */

void FUN_100653e0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10064d280(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100653e28 | FUN_100653e28 */

void FUN_100653e28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653e54 | FUN_100653e54 */

void FUN_100653e54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10064d348(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100653e60 | FUN_100653e60 */

void FUN_100653e60(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653e98 | FUN_100653e98 */

void FUN_100653e98(void)

{
  long unaff_x20;
  
  FUN_10064a8b8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100653ea4 | FUN_100653ea4 */

void FUN_100653ea4(void)

{
  long unaff_x20;
  
  FUN_10064a8b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100653eac | FUN_100653eac */

void FUN_100653eac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100653edc | FUN_100653edc */

void FUN_100653edc(void)

{
  long lVar1;
  _ContiguousArrayStorage *p_Var2;
  
  if (DAT_100fd7860 == (_ContiguousArrayStorage *)0x0) {
    lVar1 = 0xff;
    FUN_100625a38(0xff,&DAT_100fd77f0,&DAT_100fd77f8,&DAT_100c6ad20,FUN_100625a14);
    p_Var2 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fd7860 = p_Var2;
    }
  }
  return;
}



/* Address: 0x100653f50 | thunk_FUN_100652930 */

void thunk_FUN_100652930(void)

{
  FUN_100652930();
  return;
}



/* Address: 0x100653f54 | thunk_FUN_100652930 */

void thunk_FUN_100652930(void)

{
  FUN_100652930();
  return;
}



/* Address: 0x100653f58 | thunk_FUN_100653654 */

void thunk_FUN_100653654(void)

{
  FUN_100653654();
  return;
}



/* Address: 0x100653f5c | thunk_FUN_100653654 */

void thunk_FUN_100653654(void)

{
  FUN_100653654();
  return;
}


