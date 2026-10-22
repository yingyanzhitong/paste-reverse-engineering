/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10051b5ec | FUN_10051b5ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10051b5ec(void)

{
  return ZEXT816(0x100fce270);
}



/* Address: 0x10051b60c | FUN_10051b60c */

void FUN_10051b60c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcdfc8,&TargetClassDescriptor_100cb349c);
  return;
}



/* Address: 0x10051b620 | FUN_10051b620 */

void FUN_10051b620(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10051b644 | FUN_10051b644 */

void FUN_10051b644(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100513738(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10051b650 | FUN_10051b650 */

void FUN_10051b650(void)

{
  FUN_100003a00(&DAT_100fcdf70,FUN_10050e1b0,&TargetProtocolConformanceDescriptor_100c543e8);
  return;
}



/* Address: 0x10051b67c | thunk_FUN_10051b680 */

void thunk_FUN_10051b680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcdf78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54450,&DAT_100edc518);
  DAT_100fcdf78 = pTVar1;
  return;
}



/* Address: 0x10051b680 | FUN_10051b680 */

void FUN_10051b680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcdf78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54450,&DAT_100edc518);
  DAT_100fcdf78 = pTVar1;
  return;
}



/* Address: 0x10051b6c0 | thunk_FUN_10051b6c4 */

void thunk_FUN_10051b6c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcdf80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c544b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c544b8,&DAT_100edc598);
  DAT_100fcdf80 = pTVar1;
  return;
}



/* Address: 0x10051b6c4 | FUN_10051b6c4 */

void FUN_10051b6c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcdf80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c544b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c544b8,&DAT_100edc598);
  DAT_100fcdf80 = pTVar1;
  return;
}



/* Address: 0x10051b704 | thunk_FUN_10051b708 */

void thunk_FUN_10051b708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcdf88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54520;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54520,&DAT_100edc620);
  DAT_100fcdf88 = pTVar1;
  return;
}



/* Address: 0x10051b708 | FUN_10051b708 */

void FUN_10051b708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcdf88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54520;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54520,&DAT_100edc620);
  DAT_100fcdf88 = pTVar1;
  return;
}



/* Address: 0x10051b748 | FUN_10051b748 */

void FUN_10051b748(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcdf50;
  FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x10051b784 | FUN_10051b784 */

void FUN_10051b784(void)

{
  FUN_10051b60c(0);
  return;
}



/* Address: 0x10051b78c | FUN_10051b78c */

void FUN_10051b78c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_88 = &DAT_100c54620;
  puStack_80 = &DAT_100c54638;
  puStack_70 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_78 = &DAT_100c54638;
  local_68 = &DAT_100c54650;
  lVar1 = 0x13f;
  FUN_10051b8b0();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100fcd218;
    lVar1 = 0x13f;
    FUN_1004f9364(0x13f,&DAT_100fcd218,PTR_typeMetadataAccessor_100eaeea0);
    if (puVar2 < (undefined8 *)0x40) {
      local_58 = *(long *)(lVar1 + -8) + 0x40;
      puVar3 = &DAT_100fcd220;
      lVar1 = 0x13f;
      FUN_1004f9364(0x13f,&DAT_100fcd220,PTR_typeMetadataAccessor_100eaee68);
      if (puVar3 < (undefined *)0x40) {
        local_50 = *(long *)(lVar1 + -8) + 0x40;
        puStack_48 = &DAT_100c54668;
        local_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
        puStack_38 = &DAT_100c54680;
        local_30 = &DAT_100c54698;
        puStack_28 = &DAT_100c546b0;
        _swift_updateClassMetadata2(param_1,0x100,0xd,&local_88,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Address: 0x10051b8b0 | FUN_10051b8b0 */

void FUN_10051b8b0(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fcb5e0 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fcb5e0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x10051b904 | FUN_10051b904 */

void FUN_10051b904(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010051b93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(DVar1.unknown + -8))(param_1,param_2,DVar1.unknown);
  return;
}



/* Address: 0x10051b940 | FUN_10051b940 */

undefined8 FUN_10051b940(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
  return param_1;
}



/* Address: 0x10051b984 | FUN_10051b984 */

undefined8 FUN_10051b984(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x18))(param_1,param_2,DVar1.unknown);
  return param_1;
}



/* Address: 0x10051b9c8 | FUN_10051b9c8 */

undefined8 FUN_10051b9c8(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
  return param_1;
}



/* Address: 0x10051ba0c | FUN_10051ba0c */

undefined8 FUN_10051ba0c(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x28))(param_1,param_2,DVar1.unknown);
  return param_1;
}



/* Address: 0x10051ba50 | FUN_10051ba50 */

void FUN_10051ba50(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10051ba5c | FUN_10051ba5c */

void FUN_10051ba5c(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010051ba94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(param_1,param_2,DVar1.unknown);
  return;
}



/* Address: 0x10051ba98 | FUN_10051ba98 */

void FUN_10051ba98(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10051baa4 | FUN_10051baa4 */

void FUN_10051baa4(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010051bae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x10051bae4 | FUN_10051bae4 */

undefined1  [16] FUN_10051bae4(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x10051bb4c | FUN_10051bb4c */

undefined1  [16] FUN_10051bb4c(void)

{
  return ZEXT816(0x100edc518);
}



/* Address: 0x10051bb5c | FUN_10051bb5c */

void FUN_10051bb5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10051bb70 | FUN_10051bb70 */

undefined1  [16] FUN_10051bb70(void)

{
  return ZEXT816(0x100edc598);
}



/* Address: 0x10051bb80 | FUN_10051bb80 */

void FUN_10051bb80(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 9) = uVar1;
  return;
}



/* Address: 0x10051bbac | FUN_10051bbac */

undefined1  [16] FUN_10051bbac(void)

{
  return ZEXT816(0x100edc620);
}



/* Address: 0x10051bbbc | FUN_10051bbbc */

void FUN_10051bbbc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10051a31c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10051bbc4 | FUN_10051bbc4 */

void FUN_10051bbc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100519fd4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10051bc30 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x10051bc34 | FUN_10051bc34 */

void FUN_10051bc34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100519cdc(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10051bca0 | FUN_10051bca0 */

undefined8 FUN_10051bca0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10050e1b0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10051bcdc | FUN_10051bcdc */

void FUN_10051bcdc(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar3 = *(long *)(puVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10051bd68 | FUN_10051bd68 */

void FUN_10051bd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  FUN_10051a528(param_1,param_2,param_3,param_4,param_5,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(puVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x10051bdf8 | FUN_10051bdf8 */

void FUN_10051bdf8(void)

{
  undefined8 *puVar1;
  NWError NVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  long lVar5;
  long unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar4;
  
  puVar3 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
  uVar7 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(puVar3 + -8) + 0x40);
  puVar3 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar8 = *(long *)(puVar3 + -8);
  uVar9 = uVar7 + lVar6 + (ulong)*(byte *)(lVar8 + 0x50) &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  lVar6 = uVar9 + *(long *)(lVar8 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  NVar2 = Network::NWError::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,NVar2.value);
  lVar10 = *(long *)(lVar4 + -8);
  lVar5 = unaff_x20 + uVar7;
  (**(code **)(lVar10 + 0x30))(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar10 + 8))(unaff_x20 + uVar7,lVar4);
  }
  (**(code **)(lVar8 + 8))(unaff_x20 + uVar9,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + (lVar6 + 7U & 0xfffffffffffffff8));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_10003bf2c(*puVar1);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar6 + 0x1fU & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10051bf38 | FUN_10051bf38 */

undefined8 FUN_10051bf38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10051bf88 | FUN_10051bf88 */

void FUN_10051bf88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar7 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  uVar9 = (ulong)*(byte *)(*(long *)(puVar7 + -8) + 0x50);
  uVar12 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  lVar10 = *(long *)(*(long *)(puVar7 + -8) + 0x40);
  puVar7 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  uVar9 = (ulong)*(byte *)(*(long *)(puVar7 + -8) + 0x50);
  uVar9 = uVar12 + lVar10 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)
           (unaff_x20 + (uVar9 + *(long *)(*(long *)(puVar7 + -8) + 0x40) + 7 & 0xfffffffffffffff8))
  ;
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = *(undefined1 *)(puVar1 + 2);
  plVar8 = (long *)0x230;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100008284;
  FUN_10051a7ac(plVar8,param_1,uVar2,uVar4,uVar11,unaff_x20 + uVar12,unaff_x20 + uVar9,uVar3,uVar5,
                uVar6);
  return;
}



/* Address: 0x10051c09c | FUN_10051c09c */

void FUN_10051c09c(void)

{
  FUN_100512628();
  return;
}



/* Address: 0x10051c0a4 | FUN_10051c0a4 */

void FUN_10051c0a4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  puVar1 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,puVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10051c11c | FUN_10051c11c */

void FUN_10051c11c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  FUN_100512944(param_1,unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(puVar1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x10051c178 | FUN_10051c178 */

void FUN_10051c178(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100512bec(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10051c1e4 | FUN_10051c1e4 */

undefined8 FUN_10051c1e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10051c234 | FUN_10051c234 */

void FUN_10051c234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x320;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1005110d8(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10051c2a0 | FUN_10051c2a0 */

void FUN_10051c2a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100510f68(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10051c30c | FUN_10051c30c */

void FUN_10051c30c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10051c38c | FUN_10051c38c */

void FUN_10051c38c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  FUN_100513a04(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x20 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10051c3d8 | FUN_10051c3d8 */

void FUN_10051c3d8(void)

{
  NWError NVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar3;
  
  puVar2 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  lVar6 = *(long *)(puVar2 + -8);
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar7 + 0x28 & (uVar7 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  NVar1 = Network::NWError::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,NVar1.value);
  lVar8 = *(long *)(lVar3 + -8);
  lVar5 = unaff_x20 + uVar7;
  (**(code **)(lVar8 + 0x30))(lVar5,1,lVar3);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 8))(unaff_x20 + uVar7,lVar3);
  }
  lVar5 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar7 = uVar7 + *(long *)(lVar6 + 0x40) + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + uVar7));
  (**(code **)(lVar5 + 8))(unaff_x20 + (uVar4 + uVar7 + 8 & (uVar4 ^ 0xffffffffffffffff)),puVar2);
  _swift_deallocObject();
  return;
}



/* Address: 0x10051c4dc | FUN_10051c4dc */

void FUN_10051c4dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar4 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  uVar6 = (ulong)*(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar9 = uVar6 + 0x28 & (uVar6 ^ 0xffffffffffffffff);
  uVar6 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  bVar3 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + uVar6);
  plVar5 = (long *)0x3c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_100513c84(plVar5,param_1,uVar1,uVar2,uVar7,unaff_x20 + uVar9,uVar8,
                unaff_x20 + (uVar6 + bVar3 + 8 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10051c5c4 | FUN_10051c5c4 */

void FUN_10051c5c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10051462c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10051c630 | FUN_10051c630 */

void FUN_10051c630(void)

{
  FUN_1005108d0();
  return;
}



/* Address: 0x10051c638 | FUN_10051c638 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10051c638(void)

{
  undefined *puVar1;
  
  if (DAT_100fce320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fce320 = puVar1;
  return;
}



/* Address: 0x10051c67c | FUN_10051c67c */

void FUN_10051c67c(void)

{
  FUN_100510a64();
  return;
}



/* Address: 0x10051c684 | FUN_10051c684 */

void FUN_10051c684(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fce328;
  FUN_1000f7830(&DAT_100fce328,&DAT_100c54808);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10051c6e8 | FUN_10051c6e8 */

void FUN_10051c6e8(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fce328;
  FUN_1000f7830(&DAT_100fce328,&DAT_100c54808);
  FUN_100510b18(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10051c730 | thunk_FUN_10051a2cc */

void thunk_FUN_10051a2cc(void)

{
  FUN_10051a2cc();
  return;
}



/* Address: 0x10051c734 | thunk_FUN_100004520 */

void thunk_FUN_100004520(void)

{
  FUN_100004520();
  return;
}



/* Address: 0x10051c738 | thunk_FUN_100514a04 */

void thunk_FUN_100514a04(void)

{
  FUN_100514a04();
  return;
}



/* Address: 0x10051c73c | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x10051c740 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x10051c744 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x10051c748 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}


