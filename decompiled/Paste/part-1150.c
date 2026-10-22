/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bdea34 | FUN_100bdea34 */

void FUN_100bdea34(undefined8 param_1,undefined8 param_2)

{
  FUN_100bdec54(param_1,param_2,FUN_100bde9b4);
  return;
}



/* Address: 0x100bdea40 | _TtC6Sentry13SentrySession::abnormalMechanism */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::abnormalMechanism(ID param_1,SEL param_2)

{
  FUN_100bde938(param_1,param_2,FUN_100bdea4c);
  return param_1;
}



/* Address: 0x100bdea4c | FUN_100bdea4c */

void FUN_100bdea4c(void)

{
  FUN_100bdea58(&_TtC6Sentry13SentrySession::_abnormalMechanism);
  return;
}



/* Address: 0x100bdea58 | FUN_100bdea58 */

void FUN_100bdea58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x19;
  
  FUN_100bdf4e0();
  FUN_100bdf4b8(_TtC6Sentry13SentrySession::lock);
  FUN_100ba5a8c();
  uVar1 = *(undefined8 *)(param_1 + *unaff_x19);
  uVar2 = ((undefined8 *)(param_1 + *unaff_x19))[1];
  FUN_100b940f8();
  FUN_100ba5a8c();
  FUN_100b6f934();
  FUN_100b56e60(uVar1,uVar2);
  return;
}



/* Address: 0x100bdeab8 | _TtC6Sentry13SentrySession::setAbnormalMechanism: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentrySession::setAbnormalMechanism_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdeac4();
  return;
}



/* Address: 0x100bdeac4 | FUN_100bdeac4 */

void FUN_100bdeac4(char *param_1,void *param_2,long param_3,code *param_4)

{
  String SVar1;
  char *pcVar2;
  String SVar3;
  
  SVar3.bridgeObject = param_2;
  SVar3.str = param_1;
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar1 = SVar3;
  }
  pcVar2 = SVar3.str;
  FUN_10021b704();
  (*param_4)(SVar1.str,SVar1.bridgeObject);
  FUN_100b78d38(pcVar2);
  return;
}



/* Address: 0x100bdeb1c | FUN_100bdeb1c */

void FUN_100bdeb1c(undefined8 param_1,undefined8 param_2)

{
  FUN_100bdeb28(param_1,param_2,FUN_100bdc34c);
  return;
}



/* Address: 0x100bdeb28 | FUN_100bdeb28 */

void FUN_100bdeb28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry13SentrySession::lock);
  uVar1 = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_10021b704();
  _objc_msgSend(self,"lock");
  FUN_100b8483c();
  FUN_100bdf460();
  _objc_msgSend(self,"unlock");
  _swift_bridgeObjectRelease_n(param_2,2);
  FUN_100bdf4d0(uVar1);
  return;
}



/* Address: 0x100bdeba8 | FUN_100bdeba8 */

void FUN_100bdeba8(void)

{
  FUN_100b8483c();
  FUN_100bdf460();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bdebd4 | FUN_100bdebd4 */

void FUN_100bdebd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  
  param_1[2] = unaff_x20;
  puVar3 = param_1;
  FUN_100bdf46c(_TtC6Sentry13SentrySession::lock);
  FUN_100b78d60();
  uVar1 = *(undefined8 *)((long)puVar3 + _TtC6Sentry13SentrySession::_abnormalMechanism);
  uVar2 = ((undefined8 *)((long)puVar3 + _TtC6Sentry13SentrySession::_abnormalMechanism))[1];
  FUN_100b940f8();
  FUN_100b78d60();
  FUN_100b6f868();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_100b5e408(FUN_100bdec48,param_1);
  return;
}



/* Address: 0x100bdec48 | FUN_100bdec48 */

void FUN_100bdec48(undefined8 param_1,undefined8 param_2)

{
  FUN_100bdec54(param_1,param_2,FUN_100bdeb1c);
  return;
}



/* Address: 0x100bdec54 | FUN_100bdec54 */

void FUN_100bdec54(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if ((param_2 & 1) != 0) {
    FUN_100b8483c();
    FUN_100bdf460();
    _swift_bridgeObjectRelease(uVar1);
    return;
  }
  FUN_100bdf460();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bdec9c | FUN_100bdec9c */

void FUN_100bdec9c(long param_1)

{
  undefined *puVar1;
  Date DVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  Date DVar3;
  long lVar4;
  code *pcVar5;
  double dVar6;
  undefined1 auStack_78 [24];
  
  FUN_100b7982c();
  lVar4 = *(long *)(param_1 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar4 + 0x40));
  DVar3.unknown = (undefined *)(extraout_x9 - extraout_x8);
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar1 + -8));
  FUN_100bdf540();
  pcVar5 = *(code **)(lVar4 + 0x10);
  (*pcVar5)();
  FUN_1000c9ffc();
  FUN_100b80d44(unaff_x20 + _TtC6Sentry13SentrySession::_timestamp,auStack_78,0x21);
  FUN_100005874();
  _swift_endAccess(auStack_78);
  DVar2.unknown = (undefined *)(unaff_x20 + _TtC6Sentry13SentrySession::_started);
  (*pcVar5)(DVar3.unknown,DVar2.unknown,param_1);
  dVar6 = Foundation::Date::timeIntervalSince(DVar3,DVar2);
  (**(code **)(lVar4 + 8))(DVar3.unknown,param_1);
  puVar1 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)puVar1,"initWithDouble:",dVar6);
  FUN_100bdc334();
  return;
}



/* Address: 0x100bdedc4 | FUN_100bdedc4 */

void FUN_100bdedc4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_100bdc328(0);
  if (*(long *)(unaff_x20 + _TtC6Sentry13SentrySession::_sequence) != -1) {
    *(long *)(unaff_x20 + _TtC6Sentry13SentrySession::_sequence) =
         *(long *)(unaff_x20 + _TtC6Sentry13SentrySession::_sequence) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdedf8);
  (*pcVar1)();
}



/* Address: 0x100bdedf8 | FUN_100bdedf8 */

void FUN_100bdedf8(void)

{
  FUN_100bdefe4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bdee28 | _TtC6Sentry13SentrySession::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry13SentrySession::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100bdf4ec(0);
  FUN_100bdf4a4();
  FUN_100b7982c();
  FUN_100bdf4a4();
  FUN_100b9403c(_distinctId);
  FUN_100b78cd4(_flagInit);
  FUN_100b74780(param_1 + _timestamp,&DAT_101044980);
  FUN_100b78cd4(_duration);
  FUN_100b9403c(_releaseName);
  FUN_100b9403c(_environment);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _abnormalMechanism + 8));
  return;
}



/* Address: 0x100bdeed8 | FUN_100bdeed8 */

void FUN_100bdeed8(void)

{
  long unaff_x20;
  
  FUN_100bdd4a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100bdeef0 | FUN_100bdeef0 */

void FUN_100bdeef0(void)

{
  long unaff_x20;
  
  FUN_100bdd508(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100bdef08 | FUN_100bdef08 */

void FUN_100bdef08(void)

{
  long unaff_x20;
  
  FUN_100bdd630(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100bdef20 | FUN_100bdef20 */

void FUN_100bdef20(undefined8 *param_1,undefined8 param_2)

{
  FUN_100bde49c();
  *param_1 = param_2;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bdef44 | FUN_100bdef44 */

void FUN_100bdef44(undefined8 *param_1)

{
  FUN_100bde4d8(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bdef64 | FUN_100bdef64 */

void FUN_100bdef64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100bde99c();
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bdef88 | FUN_100bdef88 */

void FUN_100bdef88(void)

{
  FUN_100bdeba8();
  return;
}



/* Address: 0x100bdefa4 | FUN_100bdefa4 */

void FUN_100bdefa4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100bdea4c();
  *param_1 = param_2;
  param_1[1] = param_3;
  FUN_100b56e88();
  return;
}



/* Address: 0x100bdefc8 | FUN_100bdefc8 */

void FUN_100bdefc8(void)

{
  FUN_100bdeba8();
  return;
}



/* Address: 0x100bdefe4 | FUN_100bdefe4 */

void FUN_100bdefe4(void)

{
  FUN_100bdd418(0);
  return;
}



/* Address: 0x100bdefec | FUN_100bdefec */

void FUN_100bdefec(long param_1,ulong param_2)

{
  UUID UVar1;
  Date DVar2;
  long lVar3;
  undefined *local_88;
  long local_80;
  long local_78;
  byte *pbStack_70;
  undefined *local_68;
  undefined *puStack_60;
  byte *local_58;
  byte *pbStack_50;
  long local_48;
  byte *pbStack_40;
  byte *local_38;
  byte *pbStack_30;
  byte *local_28;
  
  local_88 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_80 = *(long *)(UVar1.unknown + -8) + 0x40;
    DVar2 = Foundation::Date::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_78 = *(long *)(DVar2.unknown + -8) + 0x40;
      pbStack_70 = &BYTE_100c9ea10;
      local_68 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      local_58 = &BYTE_100c9ea28;
      pbStack_50 = &BYTE_100c9ea40;
      lVar3 = 0x13f;
      puStack_60 = local_68;
      FUN_100005714();
      if (param_2 < 0x40) {
        local_48 = *(long *)(lVar3 + -8) + 0x40;
        pbStack_40 = &BYTE_100c9ea40;
        local_38 = &BYTE_100c9ea58;
        pbStack_30 = &BYTE_100c9ea58;
        local_28 = &BYTE_100c9ea58;
        _swift_updateClassMetadata2(param_1,0x100,0xd,&local_88,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Address: 0x100bdf0d8 | FUN_100bdf0d8 */

void FUN_100bdf0d8(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0388);
  return;
}



/* Address: 0x100bdf0e4 | FUN_100bdf0e4 */

void FUN_100bdf0e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x1d8))();
  return;
}



/* Address: 0x100bdf0ec | FUN_100bdf0ec */

void FUN_100bdf0ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x1e8))();
  return;
}



/* Address: 0x100bdf0f4 | FUN_100bdf0f4 */

void FUN_100bdf0f4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1f8))();
  return;
}



/* Address: 0x100bdf110 | FUN_100bdf110 */

void FUN_100bdf110(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x208))();
  return;
}



/* Address: 0x100bdf12c | FUN_100bdf12c */

void FUN_100bdf12c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x218))();
  return;
}



/* Address: 0x100bdf148 | FUN_100bdf148 */

void FUN_100bdf148(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x220))();
  return;
}



/* Address: 0x100bdf164 | FUN_100bdf164 */

void FUN_100bdf164(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x228))();
  return;
}



/* Address: 0x100bdf180 | FUN_100bdf180 */

void FUN_100bdf180(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x230))();
  return;
}



/* Address: 0x100bdf19c | FUN_100bdf19c */

void FUN_100bdf19c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf1b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x260))();
  return;
}



/* Address: 0x100bdf1b8 | FUN_100bdf1b8 */

void FUN_100bdf1b8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x268))();
  return;
}



/* Address: 0x100bdf1d4 | FUN_100bdf1d4 */

void FUN_100bdf1d4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf1ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x270))();
  return;
}



/* Address: 0x100bdf1f0 | FUN_100bdf1f0 */

void FUN_100bdf1f0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x278))();
  return;
}



/* Address: 0x100bdf20c | FUN_100bdf20c */

void FUN_100bdf20c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x280))();
  return;
}



/* Address: 0x100bdf228 | FUN_100bdf228 */

void FUN_100bdf228(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x288))();
  return;
}



/* Address: 0x100bdf244 | FUN_100bdf244 */

void FUN_100bdf244(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf25c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x290))();
  return;
}



/* Address: 0x100bdf260 | FUN_100bdf260 */

void FUN_100bdf260(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x298))();
  return;
}



/* Address: 0x100bdf27c | FUN_100bdf27c */

void FUN_100bdf27c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x2a8))();
  return;
}



/* Address: 0x100bdf298 | FUN_100bdf298 */

int FUN_100bdf298(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100bdf318;
  }
  if (param_2 < 0xfd) {
LAB_100bdf30c:
    iVar2 = *param_1 - 4;
    if (*param_1 < 4) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100bdf2f0:
      if (uVar1 == 0) goto LAB_100bdf30c;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100bdf2f0;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100bdf30c;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 4;
  }
LAB_100bdf318:
  return iVar2 + 1;
}



/* Address: 0x100bdf320 | FUN_100bdf320 */

void FUN_100bdf320(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 3) {
    uVar2 = 4;
  }
  if (param_3 + 3 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfc < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfd) {
                    /* WARNING: Could not recover jumptable at 0x000100bdf368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bdf36c + (ulong)(&BYTE_100c9e9d9)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x03';
                    /* WARNING: Could not recover jumptable at 0x000100bdf39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bdf3a0 + (ulong)(&BYTE_100c9e9d4)[uVar1] * 4))();
  return;
}



/* Address: 0x100bdf3dc | FUN_100bdf3dc */

undefined1  [16] FUN_100bdf3dc(void)

{
  return ZEXT816(0x100f3c420);
}



/* Address: 0x100bdf3ec | thunk_FUN_100bdf3f0 */

void thunk_FUN_100bdf3f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010480a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9eafc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9eafc,&DAT_100f3c420);
  DAT_1010480a0 = pTVar1;
  return;
}



/* Address: 0x100bdf3f0 | FUN_100bdf3f0 */

void FUN_100bdf3f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010480a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9eafc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9eafc,&DAT_100f3c420);
  DAT_1010480a0 = pTVar1;
  return;
}



/* Address: 0x100bdf430 | FUN_100bdf430 */

void FUN_100bdf430(long param_1)

{
  long unaff_x25;
  long unaff_x29;
  
  FUN_10000cbfc(*(long *)(unaff_x25 + 0x38) + param_1 * 0x20,unaff_x29 + -0x80);
  return;
}



/* Address: 0x100bdf440 | FUN_100bdf440 */

void FUN_100bdf440(long param_1,long param_2)

{
  long unaff_x29;
  
  FUN_10000cbfc(param_1 + param_2 * 0x20,unaff_x29 + -0x80);
  return;
}



/* Address: 0x100bdf44c | FUN_100bdf44c */

void FUN_100bdf44c(void)

{
  _swift_bridgeObjectRelease_n();
  return;
}



/* Address: 0x100bdf458 | FUN_100bdf458 */

void FUN_100bdf458(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100bdf460 | FUN_100bdf460 */

void FUN_100bdf460(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bdf46c | FUN_100bdf46c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bdf46c(void)

{
  return;
}



/* Address: 0x100bdf478 | FUN_100bdf478 */

void FUN_100bdf478(void)

{
  FUN_100071370();
  return;
}



/* Address: 0x100bdf480 | FUN_100bdf480 */

undefined1  [16] FUN_100bdf480(void)

{
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = unaff_x29 + -0x90;
  auVar1._8_8_ = unaff_x29 + -0x80;
  return auVar1;
}



/* Address: 0x100bdf48c | FUN_100bdf48c */

void FUN_100bdf48c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x19;
  undefined8 unaff_x22;
  
  *(undefined8 *)(unaff_x19 + 0xb8) = unaff_x22;
  *(undefined8 *)(unaff_x19 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x19 + 0xa8) = param_2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100bdf498 | FUN_100bdf498 */

long FUN_100bdf498(void)

{
  long unaff_x19;
  
  return unaff_x19 + 0xa0;
}



/* Address: 0x100bdf4a4 | FUN_100bdf4a4 */

void FUN_100bdf4a4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))(unaff_x19 + unaff_x20,param_1);
  return;
}



/* Address: 0x100bdf4b8 | FUN_100bdf4b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bdf4b8(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100bdf4c0 | FUN_100bdf4c0 */

void FUN_100bdf4c0(void)

{
  long unaff_x24;
  
                    /* WARNING: Could not recover jumptable at 0x000100bdf4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x24 + 8))();
  return;
}



/* Address: 0x100bdf4d0 | FUN_100bdf4d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdf4d0(void)

{
  return 0;
}


