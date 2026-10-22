/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b7e4f0 | FUN_100b7e4f0 */

void FUN_100b7e4f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9fb6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9fb6c,&DAT_100f3d290);
  DAT_101045240 = pTVar1;
  return;
}



/* Address: 0x100b7e530 | FUN_100b7e530 */

int FUN_100b7e530(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b7e5b0;
  }
  if (param_2 < 0xfb) {
LAB_100b7e5a4:
    iVar2 = *param_1 - 6;
    if (*param_1 < 6) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b7e588:
      if (uVar1 == 0) goto LAB_100b7e5a4;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b7e588;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b7e5a4;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 6;
  }
LAB_100b7e5b0:
  return iVar2 + 1;
}



/* Address: 0x100b7e5b8 | FUN_100b7e5b8 */

void FUN_100b7e5b8(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar2 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfa < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfb) {
                    /* WARNING: Could not recover jumptable at 0x000100b7e600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b7e604 + (ulong)(&BYTE_100c9a0db)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x05';
                    /* WARNING: Could not recover jumptable at 0x000100b7e634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&BYTE_100c9a0d6)[uVar1] * 4 + 0x100b7e638))();
  return;
}



/* Address: 0x100b7e674 | FUN_100b7e674 */

undefined1  [16] FUN_100b7e674(void)

{
  return ZEXT816(0x100f37470);
}



/* Address: 0x100b7e684 | thunk_FUN_100b7e688 */

void thunk_FUN_100b7e688(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a1f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a1f0,&DAT_100f37470);
  DAT_101045250 = pTVar1;
  return;
}



/* Address: 0x100b7e688 | FUN_100b7e688 */

void FUN_100b7e688(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a1f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a1f0,&DAT_100f37470);
  DAT_101045250 = pTVar1;
  return;
}



/* Address: 0x100b7e6c8 | thunk_FUN_100b7e6cc */

void thunk_FUN_100b7e6cc(void)

{
  undefined *puVar1;
  
  if (DAT_101045258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a150;
  _swift_getWitnessTable(&DAT_100c9a150,&DAT_100f37470);
  DAT_101045258 = puVar1;
  return;
}



/* Address: 0x100b7e6cc | FUN_100b7e6cc */

void FUN_100b7e6cc(void)

{
  undefined *puVar1;
  
  if (DAT_101045258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a150;
  _swift_getWitnessTable(&DAT_100c9a150,&DAT_100f37470);
  DAT_101045258 = puVar1;
  return;
}



/* Address: 0x100b7e70c | thunk_FUN_100b7e710 */

void thunk_FUN_100b7e710(void)

{
  undefined *puVar1;
  
  if (DAT_101045260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a128;
  _swift_getWitnessTable(&DAT_100c9a128,&DAT_100f37470);
  DAT_101045260 = puVar1;
  return;
}



/* Address: 0x100b7e710 | FUN_100b7e710 */

void FUN_100b7e710(void)

{
  undefined *puVar1;
  
  if (DAT_101045260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a128;
  _swift_getWitnessTable(&DAT_100c9a128,&DAT_100f37470);
  DAT_101045260 = puVar1;
  return;
}



/* Address: 0x100b7e750 | thunk_FUN_100b7e2c0 */

void thunk_FUN_100b7e2c0(void)

{
  FUN_100b7e2c0();
  return;
}



/* Address: 0x100b7e754 | FUN_100b7e754 */

undefined1  [16] FUN_100b7e754(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 3) {
    uVar1 = param_1;
  }
  auVar2[8] = 2 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100b7e764 | FUN_100b7e764 */

void FUN_100b7e764(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b7e754();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b7e794 | FUN_100b7e794 */

undefined1  [16] FUN_100b7e794(long param_1)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  long local_18;
  
  if (param_1 == 0) {
    auVar3._8_8_ = &DAT_e700000000000000;
    auVar3._0_8_ = 0x6e776f6e6b6e75;
    return auVar3;
  }
  if (param_1 == 2) {
    auVar2._8_8_ = &DAT_e800000000000000;
    auVar2._0_8_ = 0x6873617243646964;
    return auVar2;
  }
  if (param_1 == 1) {
    auVar4._8_8_ = 0xeb00000000687361;
    auVar4._0_8_ = 0x7243746f4e646964;
    return auVar4;
  }
  local_18 = param_1;
  Swift::__diagnoseUnexpectedEnumCaseValue
            (&DAT_100f37550,&local_18,&DAT_100f37550,PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7e828);
  (*pcVar1)();
}



/* Address: 0x100b7e828 | thunk_FUN_100b7e82c */

void thunk_FUN_100b7e82c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a270;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a270,&DAT_100f37550);
  DAT_101045268 = pTVar1;
  return;
}



/* Address: 0x100b7e82c | FUN_100b7e82c */

void FUN_100b7e82c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a270;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a270,&DAT_100f37550);
  DAT_101045268 = pTVar1;
  return;
}



/* Address: 0x100b7e86c | FUN_100b7e86c */

void FUN_100b7e86c(void)

{
  undefined8 *unaff_x20;
  
  FUN_100b7e794(*unaff_x20);
  return;
}



/* Address: 0x100b7e874 | FUN_100b7e874 */

undefined1  [16] FUN_100b7e874(void)

{
  return ZEXT816(0x100f37550);
}



/* Address: 0x100b7e884 | FUN_100b7e884 */

void FUN_100b7e884(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = &DAT_100c9a3e0;
  puStack_18 = &DAT_100c9a3f8;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x60);
  return;
}



/* Address: 0x100b7e8cc | FUN_100b7e8cc */

void FUN_100b7e8cc(void)

{
  return;
}



/* Address: 0x100b7e8d0 | FUN_100b7e8d0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b7e8d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  objc_super local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_100b6730c(&DAT_101045320);
  FUN_100b7ef70();
  lVar11 = extraout_x9 - extraout_x8;
  uVar2 = 0;
  FUN_100bea018(0);
  FUN_100b7ef70();
  lVar10 = extraout_x9_00 - extraout_x8_00;
  lVar9 = lVar10 - extraout_x8_00;
  lVar8 = lVar9 - extraout_x8_00;
  IVar3 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  IVar3 = _objc_msgSend(IVar3,"getClient");
  lVar4 = 0;
  if (IVar3 == 0) {
    FUN_100b6f870(0);
    FUN_100b7ef60("beforeSendMetric");
    FUN_100b7ef88();
    FUN_100b84df8();
    return lVar4;
  }
  IVar5 = _objc_msgSend(IVar3,"isDisabled");
  if ((IVar5 & 1) != 0) {
    _objc_msgSend(IVar3,"logDisabledMessage");
    return 0;
  }
  FUN_100b7edcc(param_1,lVar8);
  puVar1 = (undefined8 *)(unaff_x20 + DAT_101045270);
  uStack_98 = puVar1[1];
  local_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  uStack_78 = puVar1[5];
  local_80 = puVar1[4];
  local_70 = puVar1[6];
  FUN_100b7ee10(&local_a0);
  FUN_100ba43e0(lVar8,&local_a0);
  FUN_100b7ee58(&local_a0);
  pcVar12 = *(code **)(unaff_x20 + DAT_101045278);
  if (pcVar12 != (code *)0x0) {
    uVar13 = ((undefined8 *)(unaff_x20 + DAT_101045278))[1];
    FUN_100b7edcc(lVar8,lVar9);
    _swift_retain(uVar13);
    (*pcVar12)(lVar11,lVar8);
    lVar4 = lVar11;
    FUN_1000c9ff0(lVar11,1,uVar2);
    if ((int)lVar4 == 1) {
      FUN_100b7eedc(lVar11);
      FUN_100b6f870();
      FUN_100b7ef60("SentryMetricsIntegration.swift");
      FUN_100b7ef88();
      FUN_100b84df8();
      FUN_100b7edcc(lVar9,lVar10);
      pcVar6 = (class_t *)0x0;
      FUN_100b7f760();
      pcVar7 = pcVar6;
      _objc_allocWithZone();
      FUN_100b7edcc(lVar10,(long)&pcVar7->isa + _TtC6Sentry16SentryMetricObjC::wrapped);
      local_b0.receiver = (ID)pcVar7;
      local_b0.super_class = pcVar6;
      IVar5 = _objc_msgSendSuper2(&local_b0,"init");
      FUN_100b7eea0(lVar10);
      _objc_msgSend(IVar3,"recordDroppedTraceMetricInClientReport:",IVar5);
      FUN_100b7efa0();
      FUN_100b7eea0(lVar9);
      goto LAB_100b7eba0;
    }
    FUN_100b7efa0();
    FUN_100b7eea0(lVar9);
    FUN_100b7eea0(lVar8);
    FUN_100b7ef1c(lVar11,lVar8);
  }
  FUN_100b7ebc8(lVar8);
LAB_100b7eba0:
  FUN_100b7eea0(lVar8);
  return lVar8;
}



/* Address: 0x100b7ebc8 | FUN_100b7ebc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b7ebc8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  ID IVar4;
  undefined *puVar5;
  ulong extraout_x8;
  ulong extraout_x9;
  long extraout_x10;
  ID unaff_x20;
  long local_70 [2];
  undefined1 auStack_60 [32];
  
  iVar3 = (int)local_70;
  IVar4 = _objc_msgSend(unaff_x20,"isDisabled");
  if ((IVar4 & 1) != 0) {
    _objc_msgSend(unaff_x20,"logDisabledMessage");
    return;
  }
  IVar4 = _objc_msgSend(unaff_x20,"getTelemetryProcessor");
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(IVar4);
  puVar5 = &DAT_101045328;
  FUN_100b6730c(&DAT_101045328);
  _swift_dynamicCast(local_70,auStack_60,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar5,6);
  if (iVar3 == 0) {
    FUN_100b6f870();
    FUN_100b7ef60("y beforeSendMetric callback.");
    FUN_100b84df8(4,extraout_x10 + 0x24,extraout_x8 | 0x8000000000000000,0xd00000000000006e,
                  extraout_x9 | 0x8000000000000000,0x60);
  }
  else {
    uVar1 = *(undefined8 *)(local_70[0] + 0x50);
    lVar2 = *(long *)(local_70[0] + 0x58);
    FUN_100004640(local_70[0] + 0x38,uVar1);
    (**(code **)(lVar2 + 0x18))(param_1,uVar1,lVar2);
    _swift_unknownObjectRelease(local_70[0]);
  }
  return;
}



/* Address: 0x100b7ed08 | FUN_100b7ed08 */

void FUN_100b7ed08(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryMetricsIntegration",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7ed34);
  (*pcVar1)();
}



/* Address: 0x100b7ed34 | FUN_100b7ed34 */

void FUN_100b7ed34(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100b7ed08();
  lVar1 = param_1 + DAT_101045270;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  FUN_100004550(*(undefined8 *)(param_1 + DAT_101045278),
                ((undefined8 *)(param_1 + DAT_101045278))[1]);
  return;
}



/* Address: 0x100b7ed40 | FUN_100b7ed40 */

void FUN_100b7ed40(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + DAT_101045270;
  uVar2 = *(undefined8 *)(lVar1 + 8);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x30));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  FUN_100004550(*(undefined8 *)(param_1 + DAT_101045278),
                ((undefined8 *)(param_1 + DAT_101045278))[1]);
  return;
}



/* Address: 0x100b7eda0 | FUN_100b7eda0 */

void FUN_100b7eda0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100b7edac | FUN_100b7edac */

void FUN_100b7edac(void)

{
  FUN_100b7e8d0();
  return;
}



/* Address: 0x100b7edcc | FUN_100b7edcc */

undefined8 FUN_100b7edcc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100bea018();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100b7ee10 | FUN_100b7ee10 */

long FUN_100b7ee10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100b7ee58 | FUN_100b7ee58 */

long FUN_100b7ee58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100b7eea0 | FUN_100b7eea0 */

undefined8 FUN_100b7eea0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100bea018();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100b7eedc | FUN_100b7eedc */

undefined8 FUN_100b7eedc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101045320;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100b7ef1c | FUN_100b7ef1c */

undefined8 FUN_100b7ef1c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100bea018();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100b7ef60 | FUN_100b7ef60 */

void FUN_100b7ef60(void)

{
  return;
}



/* Address: 0x100b7ef70 | FUN_100b7ef70 */

void FUN_100b7ef70(void)

{
  return;
}



/* Address: 0x100b7ef88 | FUN_100b7ef88 */

undefined8 FUN_100b7ef88(void)

{
  return 1;
}



/* Address: 0x100b7efa0 | FUN_100b7efa0 */

void FUN_100b7efa0(void)

{
  FUN_100004550();
  return;
}



/* Address: 0x100b7efac | FUN_100b7efac */

int FUN_100b7efac(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100b7efec | FUN_100b7efec */

undefined1  [16] FUN_100b7efec(void)

{
  return ZEXT816(0x100f37700);
}



/* Address: 0x100b7effc | FUN_100b7effc */

uint FUN_100b7effc(_StringGuts param_1,_StringGuts param_2,uint param_3,undefined *param_4,
                  undefined *param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  
  if (param_1.unknown != param_4 || param_2.unknown != param_5) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_2,(_StringComparisonResult)(__int8)param_4);
    uVar2 = 0;
    if (!bVar1) goto LAB_100b7f03c;
  }
  uVar2 = param_3 ^ param_6 ^ 1;
LAB_100b7f03c:
  return uVar2 & 1;
}



/* Address: 0x100b7f04c | FUN_100b7f04c */

void FUN_100b7f04c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100b7effc(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined1 *)(param_2 + 2));
  return;
}



/* Address: 0x100b7f068 | FUN_100b7f068 */

void FUN_100b7f068(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100b7f0a8(param_1,param_2);
  return;
}



/* Address: 0x100b7f0a8 | FUN_100b7f0a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b7f0a8(undefined8 param_1,ID param_2)

{
  Date DVar1;
  Date DVar2;
  ID IVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  _swift_getObjectType();
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  DVar2.unknown = (undefined *)_objc_msgSend(param_2,"date");
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar2);
  (**(code **)(lVar5 + 0x20))
            (unaff_x20 + _TtC6Sentry18SentryClientReport::timestamp,
             &stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry18SentryClientReport::discardedEvents) = param_1;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  _swift_unknownObjectRelease(param_2);
  return IVar3;
}



/* Address: 0x100b7f1ac | _TtC6Sentry18SentryClientReport::initWithDiscardedEvents:dateProvider: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry18SentryClientReport::initWithDiscardedEvents_dateProvider_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100b707a4(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  _swift_unknownObjectRetain(param_4);
  FUN_100b7f0a8(param_3,param_4);
  return param_3;
}



/* Address: 0x100b7f208 | FUN_100b7f208 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b7f3e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b7f208(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  Date DVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  
  uVar10 = *(ulong *)(unaff_x20 + _TtC6Sentry18SentryClientReport::discardedEvents);
  uVar4 = uVar10;
  thunk_FUN_100b6cd50();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    _swift_bridgeObjectRetain(uVar10);
    FUN_100b69614(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b7f414);
      (*pcVar3)();
    }
    uVar11 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar10 + uVar11 * 8 + 0x20);
      }
      else {
        uVar5 = uVar11;
        FUN_100b6d618(uVar11,uVar10);
      }
      FUN_100b705bc();
      uVar1 = *(ulong *)(puVar2 + 0x10);
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_100b69614(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
      *(ulong *)(puVar2 + uVar1 * 8 + 0x20) = uVar5;
    } while (uVar4 != uVar11);
    _swift_bridgeObjectRelease(uVar10);
  }
  DVar6.unknown = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(DVar6.unknown + 0x18) = 4;
  *(undefined8 *)(DVar6.unknown + 0x10) = 2;
  *(undefined1 **)(DVar6.unknown + 0x20) = &DAT_6d617473656d6974;
  *(undefined1 **)(DVar6.unknown + 0x28) = &SUB_e900000000000070;
  dVar12 = Foundation::Date::get_timeIntervalSince1970(DVar6);
  puVar7 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar8 = _objc_msgSend((ID)puVar7,"initWithDouble:",dVar12);
  uVar9 = 0;
  FUN_100b7f4fc();
  *(ID *)(DVar6.unknown + 0x30) = IVar8;
  *(undefined8 *)(DVar6.unknown + 0x48) = uVar9;
  *(undefined8 *)(DVar6.unknown + 0x50) = 0xd000000000000010;
  *(undefined8 *)(DVar6.unknown + 0x58) = 0x8000000100dca910;
  puVar7 = &DAT_101045338;
  FUN_100b6730c();
  *(undefined **)(DVar6.unknown + 0x78) = puVar7;
  *(undefined **)(DVar6.unknown + 0x60) = puVar2;
  Swift::Dictionary::_init
            (puVar7,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  return;
}



/* Address: 0x100b7f414 | _TtC6Sentry18SentryClientReport::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryClientReport::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b7f208(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b7f478 | FUN_100b7f478 */

void FUN_100b7f478(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryClientReport",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7f4a4);
  (*pcVar1)();
}



/* Address: 0x100b7f4a4 | _TtC6Sentry18SentryClientReport::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryClientReport::init(ID param_1,SEL param_2)

{
  long lVar1;
  Date DVar2;
  ID IVar3;
  
  FUN_100b7f478();
  lVar1 = timestamp;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + lVar1,DVar2.unknown);
  IVar3 = *(ID *)(param_1 + discardedEvents);
  _swift_bridgeObjectRelease();
  return IVar3;
}



/* Address: 0x100b7f4b0 | _TtC6Sentry18SentryClientReport::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryClientReport::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  Date DVar2;
  
  lVar1 = timestamp;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + lVar1,DVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + discardedEvents));
  return;
}



/* Address: 0x100b7f4fc | FUN_100b7f4fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b7f4fc(void)

{
  undefined *puVar1;
  
  if (DAT_100fa87f8 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSNumber;
    _swift_getObjCClassMetadata();
    DAT_100fa87f8 = puVar1;
  }
  return;
}



/* Address: 0x100b7f538 | FUN_100b7f538 */

void FUN_100b7f538(void)

{
  FUN_100b7f540(0);
  return;
}



/* Address: 0x100b7f540 | FUN_100b7f540 */

void FUN_100b7f540(undefined8 param_1)

{
  if (DAT_101045368 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccdb08);
  return;
}



/* Address: 0x100b7f578 | FUN_100b7f578 */

undefined1  [16] FUN_100b7f578(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined *puStack_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,2,&local_30,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100b7f5f0 | FUN_100b7f5f0 */

void FUN_100b7f5f0(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccdb08);
  return;
}



/* Address: 0x100b7f5fc | FUN_100b7f5fc */

void FUN_100b7f5fc(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_allocWithZone();
  FUN_100b7edcc(param_1,unaff_x20 + _TtC6Sentry16SentryMetricObjC::wrapped);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  FUN_100b7f810();
  FUN_100b69e90();
  return;
}



/* Address: 0x100b7f658 | FUN_100b7f658 */

void FUN_100b7f658(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_getObjectType();
  FUN_100b7edcc(param_1,unaff_x20 + _TtC6Sentry16SentryMetricObjC::wrapped);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  FUN_100b7f810();
  FUN_100b69e90();
  return;
}



/* Address: 0x100b7f6b4 | FUN_100b7f6b4 */

void FUN_100b7f6b4(void)

{
  FUN_100ba5ac4(_TtC6Sentry16SentryMetricObjC::wrapped);
  return;
}



/* Address: 0x100b7f6dc | _TtC6Sentry16SentryMetricObjC::serializedByteCount */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry16SentryMetricObjC::serializedByteCount(ID param_1,SEL param_2)

{
  FUN_100b7f6b4();
  return param_1;
}



/* Address: 0x100b7f710 | FUN_100b7f710 */

void FUN_100b7f710(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryMetricObjC",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7f73c);
  (*pcVar1)();
}



/* Address: 0x100b7f73c | _TtC6Sentry16SentryMetricObjC::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentryMetricObjC::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b7f710();
  IVar1 = param_1 + wrapped;
  FUN_100b7eea0();
  return IVar1;
}



/* Address: 0x100b7f748 | _TtC6Sentry16SentryMetricObjC::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry16SentryMetricObjC::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100b7eea0(param_1 + wrapped);
  return;
}



/* Address: 0x100b7f758 | FUN_100b7f758 */

void FUN_100b7f758(void)

{
  FUN_100b7f760(0);
  return;
}



/* Address: 0x100b7f760 | FUN_100b7f760 */

void FUN_100b7f760(undefined8 param_1)

{
  if (DAT_1010453a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccdb50);
  return;
}



/* Address: 0x100b7f798 | FUN_100b7f798 */

void FUN_100b7f798(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_100bea018();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&local_28,param_1 + 0x50);
  }
  return;
}


