/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006f8b48 | FUN_1006f8b48 */

void FUN_1006f8b48(long *param_1,undefined8 param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  tuple2_conflict3 tVar6;
  undefined1 auStack_58 [24];
  
  lVar3 = *unaff_x20;
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(lVar3 + 0x68),1,1,*(long *)(lVar3 + 0x50));
  lVar2 = param_1[4];
  lVar5 = param_1[7];
  lVar4 = param_1[6];
  unaff_x20[7] = param_1[5];
  unaff_x20[6] = lVar2;
  unaff_x20[9] = lVar5;
  unaff_x20[8] = lVar4;
  *(char *)(unaff_x20 + 10) = (char)param_1[8];
  lVar5 = *param_1;
  lVar4 = param_1[3];
  lVar2 = param_1[2];
  unaff_x20[3] = param_1[1];
  unaff_x20[2] = lVar5;
  unaff_x20[5] = lVar4;
  unaff_x20[4] = lVar2;
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_58,0x21,0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x18))
            ((long)unaff_x20 + lVar2,param_2,CONCAT71(extraout_var,OVar1.value));
  _swift_endAccess(auStack_58);
  tVar6 = Swift::Array<undefined>::_allocateUninitialized(0,lVar3);
  unaff_x20[0xb] = tVar6._0_8_;
  return;
}



/* Address: 0x1006f8c1c | FUN_1006f8c1c */

void FUN_1006f8c1c(long param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5,
                  long *param_6,long param_7)

{
  Optional OVar1;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  long *plVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  code *local_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [72];
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 local_70;
  long lVar2;
  
  local_130 = param_3;
  local_128 = param_2;
  local_120 = param_5;
  local_118 = param_4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar11 - extraout_x12;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    _swift_retain(param_6);
  }
  else {
    plVar3 = (long *)(param_1 + 0x20);
    pcVar6 = *(code **)(*(long *)(param_7 + -8) + 0x38);
    _swift_retain(param_6);
    plVar5 = param_6;
    do {
      lStack_88 = plVar3[5];
      local_90 = plVar3[4];
      lStack_78 = plVar3[7];
      lStack_80 = plVar3[6];
      local_70 = (undefined1)plVar3[8];
      lStack_a8 = plVar3[1];
      local_b0 = *plVar3;
      lStack_98 = plVar3[3];
      lStack_a0 = plVar3[2];
      (*pcVar6)(lVar10,1,1,param_7);
      FUN_1006ee820(&local_b0,auStack_f8);
      param_6 = &local_b0;
      FUN_1006f87e8(param_6,lVar10);
      FUN_1006ee85c(&local_b0);
      _swift_release(plVar5);
      (**(code **)(lVar8 + 8))(lVar10,lVar2);
      plVar3 = plVar3 + 9;
      lVar9 = lVar9 + -1;
      plVar5 = param_6;
    } while (lVar9 != 0);
  }
  lVar4 = *(long *)(*param_6 + 0x68);
  _swift_beginAccess((long)param_6 + lVar4,auStack_f8,0,0);
  (**(code **)(lVar8 + 0x10))(lVar11,(long)param_6 + lVar4,lVar2);
  lVar7 = *(long *)(param_7 + -8);
  lVar9 = lVar11;
  (**(code **)(lVar7 + 0x30))(lVar11,1,param_7);
  (**(code **)(lVar8 + 8))(lVar11,lVar2);
  if ((int)lVar9 == 1) {
    (*local_128)(lVar10);
    (**(code **)(lVar7 + 0x38))(lVar10,0,1,param_7);
    _swift_beginAccess((long)param_6 + lVar4,auStack_110,0x21,0);
    (**(code **)(lVar8 + 0x28))((long)param_6 + lVar4,lVar10,lVar2);
    _swift_endAccess(auStack_110);
  }
  (*local_118)(param_6);
  _swift_release(param_6);
  return;
}



/* Address: 0x1006f8e68 | FUN_1006f8e68 */

void FUN_1006f8e68(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006f8e74 | FUN_1006f8e74 */

undefined1  [16] FUN_1006f8e74(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_38 = &DAT_100c73478;
  uVar2 = *(ulong *)(param_1 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1,0,3,&local_38,param_1 + 0x58);
    if (param_1 == 0) {
      param_1 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = CONCAT71(extraout_var,OVar1.value);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x1006f8efc | FUN_1006f8efc */

uint FUN_1006f8efc(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  lVar2 = *param_1;
  uStack_48 = *(undefined8 *)(lVar2 + 0x38);
  local_50 = *(undefined8 *)(lVar2 + 0x30);
  uStack_38 = *(undefined8 *)(lVar2 + 0x48);
  uStack_40 = *(undefined8 *)(lVar2 + 0x40);
  local_30 = *(undefined1 *)(lVar2 + 0x50);
  uStack_68 = *(undefined8 *)(lVar2 + 0x18);
  local_70 = *(undefined8 *)(lVar2 + 0x10);
  uStack_58 = *(undefined8 *)(lVar2 + 0x28);
  uStack_60 = *(undefined8 *)(lVar2 + 0x20);
  uStack_98 = puVar1[5];
  local_a0 = puVar1[4];
  uStack_88 = puVar1[7];
  uStack_90 = puVar1[6];
  local_80 = *(undefined1 *)(puVar1 + 8);
  uStack_b8 = puVar1[1];
  local_c0 = *puVar1;
  uStack_a8 = puVar1[3];
  uStack_b0 = puVar1[2];
  puVar1 = &local_70;
  FUN_1006f192c(puVar1,&local_c0);
  return (uint)puVar1 & 1;
}



/* Address: 0x1006f8f6c | FUN_1006f8f6c */

void FUN_1006f8f6c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f8f70);
  (*pcVar1)();
}



/* Address: 0x1006f8f70 | FUN_1006f8f70 */

void FUN_1006f8f70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1006f8f8c,0,0);
  return;
}



/* Address: 0x1006f8f8c | FUN_1006f8f8c */

void FUN_1006f8f8c(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x58))(uVar1);
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006f8ff8;
  FUN_1009e2668(uVar1);
  return;
}



/* Address: 0x1006f8ff8 | FUN_1006f8ff8 */

void FUN_1006f8ff8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006f9050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006f9074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x1006f9078 | FUN_1006f9078 */

void FUN_1006f9078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  DecodingError DVar1;
  Context CVar2;
  ulong uVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x268) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x260) = param_7;
  *(undefined8 *)(unaff_x22 + 600) = param_6;
  *(undefined8 *)(unaff_x22 + 0x250) = param_5;
  *(undefined8 *)(unaff_x22 + 0x248) = param_4;
  *(undefined8 *)(unaff_x22 + 0x240) = param_3;
  *(undefined8 *)(unaff_x22 + 0x238) = param_2;
  *(undefined8 *)(unaff_x22 + 0x230) = param_1;
  CVar2 = Swift::DecodingError::Context::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x270) = CVar2.unknown;
  lVar4 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x278) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar3;
  DVar1 = Swift::DecodingError::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x288) = CONCAT71(extraout_var,DVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  *(long *)(unaff_x22 + 0x290) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar3;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,0x100cbca10,&TargetProtocolRequirement_100cbca40);
  *(long *)(unaff_x22 + 0x2a0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x2a8) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2b0) = uVar3;
  _swift_task_switch(FUN_1006f9174,0,0);
  return;
}



/* Address: 0x1006f9174 | FUN_1006f9174 */

void FUN_1006f9174(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2a0);
  lVar5 = *(long *)(unaff_x22 + 0x260);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
  (**(code **)(lVar5 + 0x60))(*(undefined8 *)(unaff_x22 + 0x2b0),uVar6,lVar5);
  _swift_getAssociatedConformanceWitness
            (lVar5,uVar6,uVar4,0x100cbca10,&TargetProtocolRequirement_100cbca28);
  piVar3 = *(int **)(lVar5 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2b8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006f9254;
                    /* WARNING: Could not recover jumptable at 0x0001006f9250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x230),*(undefined8 *)(unaff_x22 + 0x238),
             *(undefined8 *)(unaff_x22 + 0x268),*(undefined8 *)(unaff_x22 + 0x240),
             *(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x250),
             *(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x260),
             *(undefined8 *)(unaff_x22 + 0x2a0),lVar5);
  return;
}



/* Address: 0x1006f9254 | FUN_1006f9254 */

void FUN_1006f9254(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar3 + 0x2c0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x2b8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1006f9308,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar3 + 0x2b0);
  uVar1 = *(undefined8 *)(lVar3 + 0x298);
  uVar4 = *(undefined8 *)(lVar3 + 0x280);
  (**(code **)(*(long *)(lVar3 + 0x2a8) + 8))(uVar2,*(undefined8 *)(lVar3 + 0x2a0));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001006f9304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x1006f9308 | FUN_1006f9308 */

void FUN_1006f9308(void)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  Context CVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  _StringGuts _Var14;
  void *pvVar15;
  long unaff_x22;
  char *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x298);
  pvVar15 = *(void **)(unaff_x22 + 0x288);
  (**(code **)(*(long *)(unaff_x22 + 0x2a8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x2b0),*(undefined8 *)(unaff_x22 + 0x2a0));
  *(undefined8 *)(unaff_x22 + 0x220) = uVar12;
  _swift_errorRetain(uVar12);
  puVar2 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  _swift_dynamicCast(uVar10,unaff_x22 + 0x220,puVar2,pvVar15,0);
  if ((int)uVar10 == 0) {
LAB_1006f9958:
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2c0);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x220));
    *(undefined8 *)(unaff_x22 + 0x228) = uVar10;
    _swift_errorRetain(uVar10);
    puVar11 = &DAT_100fdc4c8;
    FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
    lVar17 = unaff_x22 + 0x130;
    _swift_dynamicCast(lVar17,(undefined8 *)(unaff_x22 + 0x228),puVar2,puVar11,8);
    if ((int)lVar17 == 0) {
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x228));
      goto LAB_1006f9c68;
    }
    lVar17 = *(long *)(unaff_x22 + 0x260);
    lVar19 = *(long *)(unaff_x22 + 0x250);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
    FUN_100076508(unaff_x22 + 0x130,unaff_x22 + 0x158);
    (**(code **)(*(long *)(lVar17 + 0x10) + 8))(lVar19);
    pcVar8 = (char *)0x0;
    pvVar15 = (void *)0x0;
    _swift_beginAccess(lVar19 + 0x20,unaff_x22 + 0x1f8);
    FUN_100076688(lVar19 + 0x20,unaff_x22 + 0x180);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x198);
    lVar17 = *(long *)(unaff_x22 + 0x1a0);
    FUN_100004640(unaff_x22 + 0x180,uVar10);
    (**(code **)(lVar17 + 0x70))(uVar10,lVar17);
    FUN_100004594(unaff_x22 + 0x180);
    if (((uint)uVar10 & 0xff) < 2) {
      FUN_100076688(lVar19 + 0x20,unaff_x22 + 0x1a8);
      puVar2 = *(undefined **)(unaff_x22 + 0x1c0);
      lVar17 = *(long *)(unaff_x22 + 0x1c8);
      _Var14.unknown = puVar2;
      FUN_100004640(unaff_x22 + 0x1a8);
      Swift::_StringGuts::grow(0x10,_Var14);
      SVar27.bridgeObject = (void *)0xee00203a726f7272;
      SVar27.str = (char *)0x452065646f636544;
      SVar37.bridgeObject = pvVar15;
      SVar37.str = pcVar8;
      Swift::String::append(SVar27,SVar37);
      FUN_100004640(unaff_x22 + 0x158,*(undefined8 *)(unaff_x22 + 0x170));
      Swift::DefaultStringInterpolation::_appendInterpolation();
      FUN_1006c446c();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x210);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x218);
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000019;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100db1030;
      *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100db1050;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x37;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x210);
      *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x218);
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000019;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100db1030;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100db1050;
      *(undefined8 *)(unaff_x22 + 200) = 0x37;
      FUN_1005bf638(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x10,puVar2,lVar17);
      _swift_release(lVar19);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x1a8);
    }
    else {
      _swift_release(lVar19);
    }
    lVar17 = *(long *)(unaff_x22 + 0x170);
    lVar19 = *(long *)(unaff_x22 + 0x178);
    FUN_100004640(unaff_x22 + 0x158,lVar17);
    lVar18 = *(long *)(lVar17 + -8);
    uVar6 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    (**(code **)(lVar18 + 0x10))();
    uVar10 = *(undefined8 *)(lVar19 + 0x10);
    uVar7 = uVar6;
    Swift::__getErrorEmbeddedNSError(uVar6,lVar17,uVar10);
    if (uVar7 == 0) {
      _swift_allocError(lVar17,uVar10,0,0);
      (**(code **)(lVar18 + 0x20))(uVar10,uVar6,lVar17);
    }
    else {
      (**(code **)(lVar18 + 8))(uVar6,lVar17);
    }
    _swift_willThrow();
    _swift_task_dealloc(uVar6);
    FUN_100004594(unaff_x22 + 0x158);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x228);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x298);
    (**(code **)(*(long *)(unaff_x22 + 0x290) + 0x58))(uVar10,*(undefined8 *)(unaff_x22 + 0x288));
    iVar1 = (int)uVar10;
    if (iVar1 == *(int *)
                  PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
       ) {
      puVar13 = *(undefined8 **)(unaff_x22 + 0x298);
      lVar17 = *(long *)(unaff_x22 + 0x290);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x288);
      puVar11 = *(undefined **)(unaff_x22 + 0x280);
      lVar19 = *(long *)(unaff_x22 + 0x278);
      pcVar16 = *(char **)(unaff_x22 + 0x270);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
      (**(code **)(lVar17 + 0x60))(puVar13,uVar10);
      uVar10 = *puVar13;
      puVar2 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      puVar2 = (undefined *)((long)puVar13 + (long)*(int *)(puVar2 + 0x30));
      CVar4.unknown = puVar11;
      pcVar3 = pcVar16;
      (**(code **)(lVar19 + 0x20))();
      Swift::DecodingError::Context::_get_codingPath(CVar4);
      pcVar8 = CVar4.unknown;
      FUN_1006f9d24();
      _Var14.unknown = puVar2;
      _swift_bridgeObjectRelease(CVar4.unknown);
      Swift::_StringGuts::grow(0x2f,_Var14);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar20.bridgeObject = puVar2;
      SVar20.str = pcVar8;
      SVar28.bridgeObject = pvVar15;
      SVar28.str = pcVar3;
      Swift::String::append(SVar20,SVar28);
      _swift_bridgeObjectRelease(puVar2);
      SVar21.bridgeObject = (void *)0x8000000100db1090;
      SVar21.str = (char *)0xd000000000000011;
      SVar29.bridgeObject = pvVar15;
      SVar29.str = pcVar3;
      Swift::String::append(SVar21,SVar29);
      SVar22 = Swift::__typeName(SUB81(uVar10,0));
      SVar30.bridgeObject = pvVar15;
      SVar30.str = pcVar3;
      Swift::String::append(SVar22,SVar30);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      SVar23.bridgeObject = &DAT_e700000000000000;
      SVar23.str = (char *)0x2e657079742060;
      SVar31.bridgeObject = pvVar15;
      SVar31.str = pcVar3;
      Swift::String::append(SVar23,SVar31);
      puVar13 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar5 = puVar13;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
      builtin_strncpy((char *)(puVar5 + 1),"Bad Requ",8);
      *puVar5 = 400;
      puVar5[2] = 0xeb00000000747365;
      puVar5[3] = puVar13;
      puVar5[4] = 0xd000000000000013;
      puVar5[5] = 0x8000000100db1070;
      _swift_willThrow();
      pcVar9 = *(code **)(lVar19 + 8);
    }
    else if (iVar1 == *(int *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
            ) {
      lVar17 = *(long *)(unaff_x22 + 0x298);
      lVar19 = *(long *)(unaff_x22 + 0x290);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x288);
      puVar11 = *(undefined **)(unaff_x22 + 0x280);
      lVar18 = *(long *)(unaff_x22 + 0x278);
      pcVar16 = *(char **)(unaff_x22 + 0x270);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
      (**(code **)(lVar19 + 0x60))(lVar17,uVar10);
      puVar2 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      puVar2 = (undefined *)(lVar17 + *(int *)(puVar2 + 0x30));
      CVar4.unknown = puVar11;
      pcVar3 = pcVar16;
      (**(code **)(lVar18 + 0x20))();
      Swift::DecodingError::Context::_get_codingPath(CVar4);
      pcVar8 = CVar4.unknown;
      FUN_1006f9d24();
      _Var14.unknown = puVar2;
      _swift_bridgeObjectRelease(CVar4.unknown);
      Swift::_StringGuts::grow(0x1d,_Var14);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar22.bridgeObject = puVar2;
      SVar22.str = pcVar8;
      SVar32.bridgeObject = pvVar15;
      SVar32.str = pcVar3;
      Swift::String::append(SVar22,SVar32);
      _swift_bridgeObjectRelease(puVar2);
      SVar24.bridgeObject = &DAT_e600000000000000;
      SVar24.str = (char *)0x2e79656b2060;
      SVar33.bridgeObject = pvVar15;
      SVar33.str = pcVar3;
      Swift::String::append(SVar24,SVar33);
      puVar13 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar5 = puVar13;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
      builtin_strncpy((char *)(puVar5 + 1),"Bad Requ",8);
      *puVar5 = 400;
      puVar5[2] = 0xeb00000000747365;
      puVar5[3] = puVar13;
      puVar5[4] = 0xd000000000000015;
      puVar5[5] = 0x8000000100db10b0;
      _swift_willThrow();
      pcVar9 = *(code **)(lVar18 + 8);
    }
    else if (iVar1 == *(int *)
                       PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
            ) {
      lVar17 = *(long *)(unaff_x22 + 0x298);
      lVar19 = *(long *)(unaff_x22 + 0x290);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x288);
      lVar18 = *(long *)(unaff_x22 + 0x278);
      pcVar16 = *(char **)(unaff_x22 + 0x270);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
      (**(code **)(lVar19 + 0x60))(lVar17,uVar10);
      puVar2 = &DAT_100fdc020;
      FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
      iVar1 = *(int *)(puVar2 + 0x30);
      FUN_100076508(lVar17,unaff_x22 + 0x1d0);
      pcVar3 = *(char **)(unaff_x22 + 0x1e8);
      _Var14.unknown = *(undefined **)(unaff_x22 + 0x1f0);
      pcVar8 = (char *)(unaff_x22 + 0x1d0);
      FUN_100004640(pcVar8,pcVar3);
      FUN_1006f9cac();
      Swift::_StringGuts::grow(0x1a,_Var14);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar25.bridgeObject = _Var14.unknown;
      SVar25.str = pcVar3;
      SVar34.bridgeObject = pvVar15;
      SVar34.str = pcVar8;
      Swift::String::append(SVar25,SVar34);
      _swift_bridgeObjectRelease(_Var14.unknown);
      SVar26.bridgeObject = (void *)0xec0000002e646e75;
      SVar26.str = (char *)0x6f6620746f6e2060;
      SVar35.bridgeObject = pvVar15;
      SVar35.str = pcVar8;
      Swift::String::append(SVar26,SVar35);
      puVar13 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar5 = puVar13;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
      builtin_strncpy((char *)(puVar5 + 1),"Bad Requ",8);
      *puVar5 = 400;
      puVar5[2] = 0xeb00000000747365;
      puVar5[3] = puVar13;
      puVar5[4] = 0x6b20676e69646f43;
      puVar5[5] = 0xec00000060207965;
      _swift_willThrow();
      FUN_100004594(unaff_x22 + 0x1d0);
      pcVar9 = *(code **)(lVar18 + 8);
      puVar11 = (undefined *)(lVar17 + iVar1);
    }
    else {
      if (iVar1 != *(int *)
                    PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
         ) {
        (**(code **)(*(long *)(unaff_x22 + 0x290) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x298),*(undefined8 *)(unaff_x22 + 0x288));
        goto LAB_1006f9958;
      }
      _Var14.unknown = *(undefined **)(unaff_x22 + 0x298);
      lVar19 = *(long *)(unaff_x22 + 0x290);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x288);
      puVar11 = *(undefined **)(unaff_x22 + 0x280);
      lVar17 = *(long *)(unaff_x22 + 0x278);
      pcVar16 = *(char **)(unaff_x22 + 0x270);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
      (**(code **)(lVar19 + 0x60))(_Var14.unknown,uVar10);
      pcVar8 = pcVar16;
      (**(code **)(lVar17 + 0x20))(puVar11);
      Swift::_StringGuts::grow(0x26,_Var14);
      CVar4.unknown = (undefined *)0xe000000000000000;
      _swift_bridgeObjectRelease();
      SVar22 = Swift::DecodingError::Context::get_debugDescription(CVar4);
      SVar36.bridgeObject = pvVar15;
      SVar36.str = pcVar8;
      Swift::String::append(SVar22,SVar36);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      puVar13 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar5 = puVar13;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar5,0,0);
      builtin_strncpy((char *)(puVar5 + 1),"Bad Requ",8);
      *puVar5 = 400;
      puVar5[2] = 0xeb00000000747365;
      puVar5[3] = puVar13;
      puVar5[4] = 0xd000000000000024;
      puVar5[5] = 0x8000000100db10d0;
      _swift_willThrow();
      pcVar9 = *(code **)(lVar17 + 8);
    }
    (*pcVar9)(puVar11,pcVar16);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x220);
  }
  _swift_errorRelease(uVar10);
LAB_1006f9c68:
  uVar10 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x280);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2b0));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001006f9ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006f9cac | FUN_1006f9cac */

String FUN_1006f9cac(undefined8 param_1,uint param_2)

{
  String SVar1;
  
  Swift::CodingKey::_get_intValue();
  if ((param_2 & 0xff) == 1) {
    SVar1 = Swift::CodingKey::get_stringValue();
    return SVar1;
  }
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x1006f9d24 | FUN_1006f9d24 */

String FUN_1006f9d24(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  String SVar7;
  undefined *local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined *local_58;
  
  lVar6 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1006bf7c0(0,lVar6,0);
    param_1 = param_1 + 0x20;
    do {
      puVar5 = local_58;
      FUN_100076688(param_1,local_80);
      uVar4 = uStack_60;
      uVar3 = local_68;
      ppuVar2 = local_80;
      FUN_100004640(local_80,local_68);
      FUN_1006f9cac(uVar3,uVar4,ppuVar2);
      FUN_100004594(local_80);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_1006bf7c0(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_58 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_58 + uVar1 * 0x10 + 0x20) = uVar3;
      *(undefined8 *)(local_58 + uVar1 * 0x10 + 0x28) = uVar4;
      param_1 = param_1 + 0x28;
      lVar6 = lVar6 + -1;
      puVar5 = local_58;
    } while (lVar6 != 0);
  }
  local_80[0] = puVar5;
  FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
  FUN_1006b7a54();
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x2e;
  SVar7 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar7);
  _swift_bridgeObjectRelease(puVar5);
  return SVar7;
}



/* Address: 0x1006f9e70 | FUN_1006f9e70 */

void FUN_1006f9e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_11;
  *(undefined8 *)(unaff_x22 + 0x178) = unaff_x20;
  *(long *)(unaff_x22 + 0x160) = param_9;
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  *(undefined8 *)(unaff_x22 + 0x150) = param_7;
  *(undefined8 *)(unaff_x22 + 0x158) = param_8;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x120) = param_1;
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
  lVar2 = *(long *)(param_9 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar1;
  _swift_task_switch(FUN_1006f9ee8,0,0);
  return;
}



/* Address: 0x1006f9ee8 | FUN_1006f9ee8 */

void FUN_1006f9ee8(void)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  _StringGuts _Var4;
  long *plVar5;
  undefined8 uVar6;
  _StringGuts _Var7;
  int *piVar8;
  undefined8 *puVar9;
  _StringGuts _Var10;
  undefined8 uVar11;
  _StringGuts _Var12;
  long unaff_x22;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String SVar18;
  
  lVar13 = *(long *)(unaff_x22 + 0x178);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar16);
  FUN_10085c664(uVar15,uVar16,0x67615445,&DAT_e400000000000000,0x67617465,&DAT_e400000000000000);
  _Var12.unknown = *(undefined **)(lVar13 + 0xb8);
  lVar3 = 0x2d656e6f4e2d6649;
  FUN_10085ca84(0x2d656e6f4e2d6649,0xed0000686374614d,0x2d656e6f6e2d6669,0xed0000686374616d,
                _Var12.unknown);
  if (*(long *)(lVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease();
LAB_1006fa0c0:
    piVar8 = *(int **)(unaff_x22 + 0x148);
    iVar1 = *piVar8;
    plVar5 = (long *)(ulong)(uint)piVar8[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1006fa1f4;
                    /* WARNING: Could not recover jumptable at 0x0001006fa118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))(plVar5,*(undefined8 *)(unaff_x22 + 0x188));
    return;
  }
  uVar14 = *(ulong *)(unaff_x22 + 0x130);
  FUN_10012eef0(uVar14,*(undefined8 *)(unaff_x22 + 0x138),lVar3);
  _swift_bridgeObjectRelease(lVar3);
  if ((uVar14 & 1) == 0) goto LAB_1006fa0c0;
  uVar15 = 0xec00000064656966;
  _Var10.unknown = *(undefined **)(lVar13 + 0xb0);
  _Var4.unknown = _Var10.unknown;
  _Var7.unknown = _Var12.unknown;
  FUN_100867ea8();
  if (_Var4.unknown == (undefined *)0x544547 && _Var7.unknown == (undefined *)0xe300000000000000) {
LAB_1006fa048:
    _swift_bridgeObjectRelease(_Var7.unknown);
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck(_Var4,_Var7,(_StringComparisonResult)0x47);
    _swift_bridgeObjectRelease(_Var7.unknown);
    if (!bVar2) {
      FUN_100867ea8();
      if ((_Var10.unknown == (undefined *)0x44414548) &&
         (_Var7.unknown = _Var12.unknown, _Var12.unknown == &DAT_e400000000000000))
      goto LAB_1006fa048;
      bVar2 = Swift::_stringCompareWithSmolCheck(_Var10,_Var12,(_StringComparisonResult)0x48);
      _swift_bridgeObjectRelease(_Var12.unknown);
      if (!bVar2) {
        uVar15 = 0x8000000100db1100;
        uVar16 = 0xd000000000000013;
        uVar17 = 0x19c;
        goto LAB_1006fa064;
      }
    }
  }
  uVar16 = 0x69646f4d20746f4e;
  uVar17 = 0x130;
LAB_1006fa064:
  uVar14 = 0x2d746e65746e6f43;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_retain(uVar11);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar11);
  if ((uVar14 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x118) = 0;
    SVar18 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar18.str,SVar18.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(uVar11);
  }
  else {
    _swift_release(uVar11);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x120);
  *puVar9 = uVar17;
  puVar9[1] = uVar16;
  puVar9[2] = uVar15;
  puVar9[3] = uVar11;
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[7] = 0;
  puVar9[6] = 0;
  *(undefined1 *)(puVar9 + 8) = 2;
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001006fa1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006fa1f4 | FUN_1006fa1f4 */

void FUN_1006fa1f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x198) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 400));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006fa258;
  }
  else {
    pcVar1 = FUN_1006fa3f4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006fa258 | FUN_1006fa258 */

void FUN_1006fa258(void)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar6 = *(long *)(unaff_x22 + 0x198);
  lVar7 = *(long *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  (**(code **)(*(long *)(unaff_x22 + 0x170) + 8))
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x140),
             *(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x168),uVar5);
  (**(code **)(lVar7 + 8))(uVar3,uVar5);
  if (lVar6 == 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined1 *)(unaff_x22 + 0x98) = *(undefined1 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
    lVar6 = *(long *)(unaff_x22 + 0x110);
    lVar7 = lVar6;
    _swift_retain();
    FUN_10085d8f8();
    if (lVar7 != 0) {
      lVar7 = 0;
      do {
        FUN_10085d980(unaff_x22 + 0xa0,lVar7,lVar6);
        lVar2 = lVar6;
        FUN_10085d8f8();
        if (lVar2 <= lVar7) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006fa3f4);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar7 = lVar7 + 1;
        *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xa8);
        *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xb8);
        *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0xb0);
        *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 200);
        *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0xc0);
        *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0xd0);
        FUN_1006bd6b8();
        Swift::RangeReplaceableCollection::_append();
        lVar2 = lVar6;
        FUN_10085d8f8();
      } while (lVar7 != lVar2);
    }
    _swift_release(lVar6);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    _swift_release(lVar6);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
    puVar4 = *(undefined8 **)(unaff_x22 + 0x120);
    puVar4[1] = uVar12;
    *puVar4 = uVar11;
    puVar4[2] = uVar8;
    puVar4[3] = uVar3;
    puVar4[5] = uVar14;
    puVar4[4] = uVar13;
    puVar4[7] = uVar10;
    puVar4[6] = uVar9;
    *(undefined1 *)(puVar4 + 8) = uVar1;
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006fa3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006fa3f4 | FUN_1006fa3f4 */

void FUN_1006fa3f4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006fa438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006fa43c | FUN_1006fa43c */

void FUN_1006fa43c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = param_11;
  *(undefined8 *)(unaff_x22 + 0x178) = unaff_x20;
  *(long *)(unaff_x22 + 0x160) = param_9;
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  *(undefined8 *)(unaff_x22 + 0x150) = param_7;
  *(undefined8 *)(unaff_x22 + 0x158) = param_8;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x120) = param_1;
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
  lVar2 = *(long *)(param_9 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar1;
  _swift_task_switch(FUN_1006fa4b4,0,0);
  return;
}



/* Address: 0x1006fa4b4 | FUN_1006fa4b4 */

void FUN_1006fa4b4(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  ulong uVar8;
  String SVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x178);
  uVar8 = *(ulong *)(unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_retain();
  _swift_bridgeObjectRetain(uVar6);
  FUN_10085c664(uVar8,uVar6,0x67615445,&DAT_e400000000000000,0x67617465,&DAT_e400000000000000);
  uVar2 = 0x686374614d2d6649;
  FUN_10085ca84(0x686374614d2d6649,&DAT_e800000000000000,0x686374616d2d6669,&DAT_e800000000000000,
                *(undefined8 *)(lVar7 + 0xb8));
  FUN_10012eef0(uVar8,uVar6,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  if ((uVar8 & 1) != 0) {
    piVar4 = *(int **)(unaff_x22 + 0x148);
    iVar1 = *piVar4;
    plVar3 = (long *)(ulong)(uint)piVar4[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1006fa6bc;
                    /* WARNING: Could not recover jumptable at 0x0001006fa5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar4))(plVar3,*(undefined8 *)(unaff_x22 + 0x188));
    return;
  }
  uVar8 = 0x2d746e65746e6f43;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_retain(uVar6);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar6);
  if ((uVar8 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x118) = 0;
    SVar9 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar9.str,SVar9.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(uVar6);
  }
  else {
    _swift_release(uVar6);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x120);
  puVar5[1] = 0xd000000000000013;
  *puVar5 = 0x19c;
  puVar5[2] = 0x8000000100db1100;
  puVar5[3] = uVar6;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 8) = 2;
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006fa6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006fa6bc | FUN_1006fa6bc */

void FUN_1006fa6bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x198) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 400));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1006fa258;
  }
  else {
    pcVar1 = thunk_FUN_1006fa3f4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006fa720 | FUN_1006fa720 */

void FUN_1006fa720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  *(long *)(unaff_x22 + 0x158) = param_8;
  *(undefined8 *)(unaff_x22 + 0x160) = param_9;
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(undefined8 *)(unaff_x22 + 0x150) = param_7;
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = param_1;
  lVar4 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar1;
  puVar2 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  uVar1 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar1;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 400) = DVar3.unknown;
  lVar4 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x198) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar1;
  _swift_task_switch(FUN_1006fa7e8,0,0);
  return;
}



/* Address: 0x1006fa7e8 | FUN_1006fa7e8 */

void FUN_1006fa7e8(void)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  Date DVar7;
  long *plVar8;
  undefined8 uVar9;
  _StringGuts _Var10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  ulong uVar16;
  double dVar17;
  double dVar18;
  String SVar19;
  
  lVar15 = *(long *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_retain();
  FUN_100701f80();
  FUN_10085c664();
  _Var6.unknown = *(undefined **)(lVar15 + 0xb0);
  puVar2 = *(undefined **)(lVar15 + 0xb8);
  _Var5.unknown = _Var6.unknown;
  _Var10.unknown = puVar2;
  FUN_100867ea8();
  if (_Var5.unknown == (undefined *)0x544547 && _Var10.unknown == (undefined *)0xe300000000000000) {
LAB_1006fa910:
    _swift_bridgeObjectRelease();
  }
  else {
    bVar4 = Swift::_stringCompareWithSmolCheck(_Var5,_Var10,(_StringComparisonResult)0x47);
    _swift_bridgeObjectRelease(_Var10.unknown);
    if (!bVar4) {
      _Var5.unknown = puVar2;
      FUN_100867ea8();
      if (_Var6.unknown == (undefined *)0x44414548 && _Var5.unknown == &DAT_e400000000000000)
      goto LAB_1006fa910;
      bVar4 = Swift::_stringCompareWithSmolCheck(_Var6,_Var5,(_StringComparisonResult)0x48);
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (!bVar4) goto LAB_1006fa9c8;
    }
  }
  lVar15 = -0x7ffffffeff24f3f0;
  FUN_10085c5ec(0xd000000000000011,0x8000000100db0c10,0xd000000000000011,0x8000000100db0c30,puVar2);
  if (lVar15 != 0) {
    uVar14 = *(undefined8 *)(unaff_x22 + 400);
    lVar15 = *(long *)(unaff_x22 + 0x198);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x188);
    FUN_100701c70(uVar13);
    (**(code **)(lVar15 + 0x30))(uVar13,1,uVar14);
    if ((int)uVar13 == 1) {
      FUN_1006fb188(*(undefined8 *)(unaff_x22 + 0x188));
    }
    else {
      DVar7.unknown = *(undefined **)(unaff_x22 + 0x1a0);
      (**(code **)(*(long *)(unaff_x22 + 0x198) + 0x20))
                (DVar7.unknown,*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 400));
      dVar17 = Foundation::Date::get_timeIntervalSince1970(DVar7);
      dVar18 = Foundation::Date::get_timeIntervalSince1970(DVar7);
      if ((double)(long)dVar17 <= dVar18) {
        uVar16 = 0x2d746e65746e6f43;
        uVar14 = *(undefined8 *)(unaff_x22 + 0x110);
        _swift_retain(uVar14);
        FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,
                      uVar14);
        if ((uVar16 & 1) == 0) {
          *(undefined8 *)(unaff_x22 + 0x118) = 0;
          SVar19 = Swift::CustomStringConvertible::get_description();
          FUN_10085c664(SVar19.str,SVar19.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                        0x2d746e65746e6f63,0xee006874676e656c);
        }
        (**(code **)(*(long *)(unaff_x22 + 0x198) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 400));
        _swift_release(uVar14);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x180);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
        puVar12 = *(undefined8 **)(unaff_x22 + 0x120);
        puVar12[1] = 0x69646f4d20746f4e;
        *puVar12 = 0x130;
        puVar12[2] = 0xec00000064656966;
        puVar12[3] = uVar14;
        puVar12[5] = 0;
        puVar12[4] = 0;
        puVar12[7] = 0;
        puVar12[6] = 0;
        *(undefined1 *)(puVar12 + 8) = 2;
        _swift_task_dealloc(uVar9);
        _swift_task_dealloc(uVar3);
        _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001006fab30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x198) + 8))
                (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 400));
    }
  }
LAB_1006fa9c8:
  piVar11 = *(int **)(unaff_x22 + 0x140);
  iVar1 = *piVar11;
  plVar8 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1006fab34;
                    /* WARNING: Could not recover jumptable at 0x0001006faa1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(plVar8,*(undefined8 *)(unaff_x22 + 0x180));
  return;
}



/* Address: 0x1006fab34 | FUN_1006fab34 */

void FUN_1006fab34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006fab98;
  }
  else {
    pcVar1 = FUN_1006fad5c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006fab98 | FUN_1006fab98 */

void FUN_1006fab98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  lVar8 = *(long *)(unaff_x22 + 0x1b0);
  lVar9 = *(long *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  (**(code **)(*(long *)(unaff_x22 + 0x168) + 8))
            (unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x170),*(undefined8 *)(unaff_x22 + 0x138),
             *(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x160),uVar1);
  (**(code **)(lVar9 + 8))(uVar2,uVar1);
  if (lVar8 == 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined1 *)(unaff_x22 + 0x98) = *(undefined1 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
    lVar8 = *(long *)(unaff_x22 + 0x110);
    lVar9 = lVar8;
    _swift_retain();
    FUN_10085d8f8();
    if (lVar9 != 0) {
      lVar9 = 0;
      do {
        FUN_10085d980(unaff_x22 + 0xa0,lVar9,lVar8);
        lVar4 = lVar8;
        FUN_10085d8f8();
        if (lVar4 <= lVar9) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006fad5c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar9 = lVar9 + 1;
        *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xa8);
        *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xb8);
        *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0xb0);
        *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 200);
        *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0xc0);
        *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0xd0);
        FUN_1006bd6b8();
        Swift::RangeReplaceableCollection::_append();
        lVar4 = lVar8;
        FUN_10085d8f8();
      } while (lVar9 != lVar4);
    }
    _swift_release(lVar8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    _swift_release(lVar8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x120);
    puVar6[1] = uVar14;
    *puVar6 = uVar13;
    puVar6[2] = uVar10;
    puVar6[3] = uVar5;
    puVar6[5] = uVar16;
    puVar6[4] = uVar15;
    puVar6[7] = uVar12;
    puVar6[6] = uVar11;
    *(undefined1 *)(puVar6 + 8) = uVar3;
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006fad54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006fad5c | FUN_1006fad5c */

void FUN_1006fad5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006fadbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006fadc0 | FUN_1006fadc0 */

void FUN_1006fadc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ulong uVar1;
  undefined *puVar2;
  Date DVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x168) = param_10;
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  *(long *)(unaff_x22 + 0x158) = param_8;
  *(undefined8 *)(unaff_x22 + 0x160) = param_9;
  *(undefined8 *)(unaff_x22 + 0x148) = param_6;
  *(undefined8 *)(unaff_x22 + 0x150) = param_7;
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = param_1;
  lVar4 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x178) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar1;
  puVar2 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  uVar1 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar1;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 400) = DVar3.unknown;
  lVar4 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x198) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar1;
  _swift_task_switch(FUN_1006fae88,0,0);
  return;
}



/* Address: 0x1006fae88 | FUN_1006fae88 */

void FUN_1006fae88(void)

{
  int iVar1;
  undefined8 uVar2;
  Date DVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  ulong uVar12;
  double dVar13;
  double dVar14;
  String SVar15;
  
  lVar9 = *(long *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x128);
  _swift_retain();
  FUN_100701f80();
  FUN_10085c664();
  lVar6 = -0x7ffffffeff24eee0;
  FUN_10085c5ec(0xd000000000000013,0x8000000100db1120,0xd000000000000013,0x8000000100db1140,
                *(undefined8 *)(lVar9 + 0xb8));
  if (lVar6 != 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 400);
    lVar6 = *(long *)(unaff_x22 + 0x198);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
    FUN_100701c70(uVar10);
    (**(code **)(lVar6 + 0x30))(uVar10,1,uVar11);
    if ((int)uVar10 == 1) {
      FUN_1006fb188(*(undefined8 *)(unaff_x22 + 0x188));
    }
    else {
      DVar3.unknown = *(undefined **)(unaff_x22 + 0x1a0);
      (**(code **)(*(long *)(unaff_x22 + 0x198) + 0x20))
                (DVar3.unknown,*(undefined8 *)(unaff_x22 + 0x188),*(undefined8 *)(unaff_x22 + 400));
      dVar13 = Foundation::Date::get_timeIntervalSince1970(DVar3);
      dVar14 = Foundation::Date::get_timeIntervalSince1970(DVar3);
      if (dVar14 < (double)(long)dVar13) {
        uVar12 = 0x2d746e65746e6f43;
        uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
        _swift_retain(uVar11);
        FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,
                      uVar11);
        if ((uVar12 & 1) == 0) {
          *(undefined8 *)(unaff_x22 + 0x118) = 0;
          SVar15 = Swift::CustomStringConvertible::get_description();
          FUN_10085c664(SVar15.str,SVar15.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                        0x2d746e65746e6f63,0xee006874676e656c);
        }
        (**(code **)(*(long *)(unaff_x22 + 0x198) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 400));
        _swift_release(uVar11);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
        puVar7 = *(undefined8 **)(unaff_x22 + 0x120);
        puVar7[1] = 0xd000000000000013;
        *puVar7 = 0x19c;
        puVar7[2] = 0x8000000100db1100;
        puVar7[3] = uVar11;
        puVar7[5] = 0;
        puVar7[4] = 0;
        puVar7[7] = 0;
        puVar7[6] = 0;
        *(undefined1 *)(puVar7 + 8) = 2;
        _swift_task_dealloc(uVar4);
        _swift_task_dealloc(uVar2);
        _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001006fb0b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x198) + 8))
                (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 400));
    }
  }
  piVar8 = *(int **)(unaff_x22 + 0x140);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1a8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1006fb124;
                    /* WARNING: Could not recover jumptable at 0x0001006fb120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(plVar5,*(undefined8 *)(unaff_x22 + 0x180));
  return;
}



/* Address: 0x1006fb124 | FUN_1006fb124 */

void FUN_1006fb124(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1a8));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_1006fab98;
  }
  else {
    pcVar1 = thunk_FUN_1006fad5c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006fb188 | FUN_1006fb188 */

undefined8 FUN_1006fb188(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1006fb1d0 | FUN_1006fb1d0 */

bool FUN_1006fb1d0(undefined *param_1,undefined *param_2,long param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)(param_3 + 0x38);
  lVar5 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
    puVar1 = puVar4 + -1;
    _Var2.unknown = (undefined *)*puVar4;
    if ((undefined *)*puVar1 == param_1 && _Var2.unknown == param_2) break;
    puVar4 = puVar4 + 4;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar1,_Var2,(_StringComparisonResult)(__int8)param_1);
  } while (!bVar3);
  return lVar5 != 0;
}



/* Address: 0x1006fb23c | thunk_FUN_1006fad5c */

void thunk_FUN_1006fad5c(void)

{
  FUN_1006fad5c();
  return;
}



/* Address: 0x1006fb240 | thunk_FUN_1006fab98 */

void thunk_FUN_1006fab98(void)

{
  FUN_1006fab98();
  return;
}



/* Address: 0x1006fb244 | thunk_FUN_1006fa258 */

void thunk_FUN_1006fa258(void)

{
  FUN_1006fa258();
  return;
}



/* Address: 0x1006fb248 | thunk_FUN_1006fa3f4 */

void thunk_FUN_1006fa3f4(void)

{
  FUN_1006fa3f4();
  return;
}



/* Address: 0x1006fb24c | FUN_1006fb24c */

void FUN_1006fb24c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fb2a0);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_3 + 0x18));
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x20));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fb2a4);
  (*pcVar1)();
}



/* Address: 0x1006fb2a4 | FUN_1006fb2a4 */

undefined1  [16]
FUN_1006fb2a4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  int iVar3;
  
  (**(code **)(param_2 + 0x40))();
  _swift_release();
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006fb324);
    (*pcVar2)();
  }
  auVar1 = *(undefined1 (*) [16])(param_2 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_2 + 0x18));
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x20));
  if (iVar3 == 0) {
    _swift_release(param_2);
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006fb328);
  (*pcVar2)();
}



/* Address: 0x1006fb328 | FUN_1006fb328 */

undefined * FUN_1006fb328(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100fde858;
  FUN_1000f7830(&DAT_100fde858,&DAT_100c73510);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fb3bc);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006fb3c0 | FUN_1006fb3c0 */

undefined1  [16] FUN_1006fb3c0(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  int iVar3;
  
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x20));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006fb414);
    (*pcVar2)();
  }
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x18));
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x20));
  if (iVar3 == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006fb418);
  (*pcVar2)();
}



/* Address: 0x1006fb418 | FUN_1006fb418 */

undefined1  [16] FUN_1006fb418(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  param_1[2] = param_2;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fb47c);
    (*pcVar3)();
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain(uVar2);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x20));
  if (iVar4 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar2;
    auVar5._8_8_ = param_1;
    auVar5._0_8_ = FUN_1006fb480;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fb480);
  (*pcVar3)();
}



/* Address: 0x1006fb480 | FUN_1006fb480 */

void FUN_1006fb480(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  lVar5 = param_1[2];
  if ((param_2 & 1) == 0) {
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fb518);
      (*pcVar3)();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
    *(undefined8 *)(lVar5 + 0x10) = uVar1;
    *(undefined8 *)(lVar5 + 0x18) = uVar2;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fb520);
    (*pcVar3)();
  }
  _swift_bridgeObjectRetain(uVar2);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fb514);
    (*pcVar3)();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 0x18));
  *(undefined8 *)(lVar5 + 0x10) = uVar1;
  *(undefined8 *)(lVar5 + 0x18) = uVar2;
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x20));
  if (iVar4 == 0) {
    _swift_bridgeObjectRelease(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fb51c);
  (*pcVar3)();
}



/* Address: 0x1006fb520 | FUN_1006fb520 */

void FUN_1006fb520(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Address: 0x1006fb548 | FUN_1006fb548 */

undefined1  [16]
FUN_1006fb548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1006fb580 | FUN_1006fb580 */

void FUN_1006fb580(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1006fb5bc | FUN_1006fb5bc */

long FUN_1006fb5bc(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  pthread_mutexattr_t local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = param_2;
  (**(code **)(param_3 + 8))(param_2,param_3);
  puVar4 = &DAT_100fde858;
  FUN_1000f7830(&DAT_100fde858,&DAT_100c73510);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  local_58.__sig = 0;
  local_58.__opaque[0] = '\0';
  local_58.__opaque[1] = '\0';
  local_58.__opaque[2] = '\0';
  local_58.__opaque[3] = '\0';
  local_58.__opaque[4] = '\0';
  local_58.__opaque[5] = '\0';
  local_58.__opaque[6] = '\0';
  local_58.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_58);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x20),&local_58);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fb6c0);
    (*pcVar1)();
  }
  FUN_100a2fc0c(PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006fb6c4 | FUN_1006fb6c4 */

undefined8 FUN_1006fb6c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_2 + 0x40))();
  _swift_release(param_2);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_4);
  return param_1;
}



/* Address: 0x1006fb714 | FUN_1006fb714 */

void FUN_1006fb714(undefined8 param_1)

{
  FUN_1006fbebc();
  _swift_release(param_1);
  return;
}



/* Address: 0x1006fb738 | FUN_1006fb738 */

undefined1  [16] FUN_1006fb738(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[2] = param_3;
  param_1[3] = unaff_x20;
  param_1[1] = param_2;
  FUN_1006fb6c4(param_2,param_3);
  *param_1 = param_2;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1006fb778;
  return auVar1;
}



/* Address: 0x1006fb778 | FUN_1006fb778 */

void FUN_1006fb778(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    FUN_1006fbebc(uVar1,param_1[1],param_1[2]);
  }
  else {
    _swift_retain();
    FUN_1006fbebc();
    _swift_release(uVar1);
  }
  _swift_release(uVar1);
  return;
}



/* Address: 0x1006fb7d4 | FUN_1006fb7d4 */

undefined8 FUN_1006fb7d4(void)

{
  return 0x200000;
}



/* Address: 0x1006fb7dc | FUN_1006fb7dc */

undefined1  [16]
FUN_1006fb7dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  (**(code **)(param_2 + 0x40))();
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRelease(param_3);
  _swift_release(param_2);
  _swift_release(param_1);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1006fb83c | FUN_1006fb83c */

undefined1  [16] FUN_1006fb83c(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  undefined1 auStack_60 [40];
  char local_38;
  
  (**(code **)(*(long *)(param_2 + 0x10) + 8))();
  _swift_beginAccess(param_1 + 0x20,auStack_a0,0,0);
  FUN_100076688(param_1 + 0x20,auStack_88);
  FUN_100004640(auStack_88,local_70);
  uVar3 = 0xed000064692e7473;
  (**(code **)(lStack_68 + 0x40))
            (auStack_60,0x65757165722e6268,0xed000064692e7473,local_70,lStack_68);
  _swift_release(param_1);
  puVar2 = auStack_88;
  FUN_100004594(puVar2);
  if (local_38 != -1) {
    FUN_1005cc780();
    FUN_1005bee8c(auStack_60);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = puVar2;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fb91c);
  (*pcVar1)();
}



/* Address: 0x1006fb91c | FUN_1006fb91c */

JSONDecoder * FUN_1006fb91c(void)

{
  DateDecodingStrategy DVar1;
  undefined7 extraout_var;
  JSONDecoder *pJVar2;
  long extraout_x8;
  long lVar3;
  
  DVar1 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONDecoder::init(pJVar2);
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___enum_case_for_Foundation_JSONDecoder_DateDecodingStrategy_iso8601_Foundation_JSONDecoder_DateDecodingStrategy_Type___>_Foundation_JSONDecoder_DateDecodingStrategy_100ea6a38
             ,CONCAT71(extraout_var,DVar1.value));
  Foundation::JSONDecoder::set_dateDecodingStrategy
            (pJVar2,(DateDecodingStrategy)
                    (__int8)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)))
  ;
  return pJVar2;
}



/* Address: 0x1006fb9c0 | FUN_1006fb9c0 */

JSONEncoder * FUN_1006fb9c0(void)

{
  DateEncodingStrategy DVar1;
  undefined7 extraout_var;
  JSONEncoder *pJVar2;
  long extraout_x8;
  long lVar3;
  
  DVar1 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONEncoder::init(pJVar2);
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_iso8601_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6ab0
             ,CONCAT71(extraout_var,DVar1.value));
  Foundation::JSONEncoder::set_dateEncodingStrategy
            (pJVar2,(DateEncodingStrategy)
                    (__int8)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)))
  ;
  return pJVar2;
}



/* Address: 0x1006fba64 | FUN_1006fba64 */

undefined8
FUN_1006fba64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_retain();
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  return param_1;
}



/* Address: 0x1006fbac0 | FUN_1006fbac0 */

void FUN_1006fbac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_bridgeObjectRelease(unaff_x20[2]);
  _swift_bridgeObjectRelease(unaff_x20[3]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  unaff_x20[3] = param_4;
  return;
}



/* Address: 0x1006fbb20 | FUN_1006fbb20 */

undefined8 FUN_1006fbb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100fde858;
  FUN_1000f7830(&DAT_100fde858,&DAT_100c73510);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  local_58.__sig = 0;
  local_58.__opaque[0] = '\0';
  local_58.__opaque[1] = '\0';
  local_58.__opaque[2] = '\0';
  local_58.__opaque[3] = '\0';
  local_58.__opaque[4] = '\0';
  local_58.__opaque[5] = '\0';
  local_58.__opaque[6] = '\0';
  local_58.__opaque[7] = '\0';
  _swift_retain(param_3);
  _pthread_mutexattr_init(&local_58);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_58);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fbc10);
    (*pcVar1)();
  }
  FUN_100a2fc0c(PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_release(param_3);
  _swift_unknownObjectRelease(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006fbc14 | FUN_1006fbc14 */

undefined8 FUN_1006fbc14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  _swift_retain(uVar1);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  return uVar1;
}



/* Address: 0x1006fbc6c | FUN_1006fbc6c */

void FUN_1006fbc6c(undefined8 *param_1)

{
  DateDecodingStrategy DVar1;
  undefined7 extraout_var;
  JSONDecoder *pJVar2;
  long extraout_x8;
  long lVar3;
  
  DVar1 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONDecoder::init(pJVar2);
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___enum_case_for_Foundation_JSONDecoder_DateDecodingStrategy_iso8601_Foundation_JSONDecoder_DateDecodingStrategy_Type___>_Foundation_JSONDecoder_DateDecodingStrategy_100ea6a38
             ,CONCAT71(extraout_var,DVar1.value));
  Foundation::JSONDecoder::set_dateDecodingStrategy
            (pJVar2,(DateDecodingStrategy)
                    (__int8)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)))
  ;
  *param_1 = pJVar2;
  return;
}



/* Address: 0x1006fbd1c | FUN_1006fbd1c */

void FUN_1006fbd1c(undefined8 *param_1)

{
  DateEncodingStrategy DVar1;
  undefined7 extraout_var;
  JSONEncoder *pJVar2;
  long extraout_x8;
  long lVar3;
  
  DVar1 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONEncoder::init(pJVar2);
  (**(code **)(lVar3 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_iso8601_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6ab0
             ,CONCAT71(extraout_var,DVar1.value));
  Foundation::JSONEncoder::set_dateEncodingStrategy
            (pJVar2,(DateEncodingStrategy)
                    (__int8)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)))
  ;
  *param_1 = pJVar2;
  return;
}



/* Address: 0x1006fbdcc | FUN_1006fbdcc */

void FUN_1006fbdcc(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  pthread_mutexattr_t local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar7 = *param_2;
  uVar6 = param_2[2];
  puVar3 = &DAT_100fde858;
  FUN_1000f7830(&DAT_100fde858,&DAT_100c73510);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  local_58.__sig = 0;
  local_58.__opaque[0] = '\0';
  local_58.__opaque[1] = '\0';
  local_58.__opaque[2] = '\0';
  local_58.__opaque[3] = '\0';
  local_58.__opaque[4] = '\0';
  local_58.__opaque[5] = '\0';
  local_58.__opaque[6] = '\0';
  local_58.__opaque[7] = '\0';
  _swift_retain(uVar6);
  _pthread_mutexattr_init(&local_58);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_58);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006fbeb8);
    (*pcVar1)();
  }
  puVar4 = PTR___type_metadata_for_Swift_Substring_100eaca98;
  puVar5 = PTR___type_metadata_for_Swift_Substring_100eaca98;
  FUN_100a2fc0c(PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  _swift_release(uVar6);
  _swift_unknownObjectRelease(uVar7);
  *param_1 = uVar6;
  param_1[1] = puVar3;
  param_1[2] = puVar4;
  param_1[3] = puVar5;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1006fbebc | FUN_1006fbebc */

void FUN_1006fbebc(undefined8 param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_60 [32];
  
  pcVar1 = (code *)auStack_60;
  pcVar3 = *(code **)(param_3 + 0x50);
  _swift_retain();
  (*pcVar3)(auStack_60,param_2,param_3);
  uVar2 = *param_2;
  *param_2 = param_1;
  _swift_release(uVar2);
  (*pcVar1)(auStack_60,0);
  return;
}


