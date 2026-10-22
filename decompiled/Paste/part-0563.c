/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10064a578 | FUN_10064a578 */

void FUN_10064a578(void)

{
  FUN_10064a4d0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10064a59c | FUN_10064a59c */

uint FUN_10064a59c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_100324b84(uVar1,*param_2);
  return (uint)uVar1 & 1;
}



/* Address: 0x10064a5bc | FUN_10064a5bc */

void FUN_10064a5bc(void)

{
  FUN_10064a9f0();
  return;
}



/* Address: 0x10064a5d0 | FUN_10064a5d0 */

code * FUN_10064a5d0(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_01;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  long local_a0;
  undefined8 local_98;
  code *pcStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar4;
  undefined7 extraout_var_00;
  
  lVar9 = *param_1;
  local_98 = param_3;
  pcStack_90 = param_2;
  local_80 = param_4;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  local_a0 = *(long *)(lVar4 + -8);
  pcVar10 = (code *)((long)&local_a0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar11 = *(long *)(lVar9 + 0x50);
  local_88 = *(long *)(lVar11 + -8);
  pcVar13 = pcVar10 + -(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar14 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  pcVar15 = pcVar13 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar9 + 0x58);
  _swift_beginAccess((long)param_1 + lVar9,auStack_78,0,0);
  (**(code **)(lVar14 + 0x10))(pcVar15,(long)param_1 + lVar9,CONCAT71(extraout_var_01,OVar3.value));
  pcVar8 = pcVar15;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(pcVar15,1,lVar5);
  if ((int)pcVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10064a8b8);
    (*pcVar8)();
  }
  pcVar8 = pcVar15;
  _swift_getEnumCaseMultiPayload(pcVar15,lVar5);
  lVar5 = local_88;
  if ((int)pcVar8 == 1) {
    uVar12 = *(undefined8 *)pcVar15;
    *(undefined8 *)pcVar10 = uVar12;
    _swift_storeEnumTagMultiPayload(pcVar10,lVar4,1);
    _swift_errorRetain(uVar12);
    pcVar15 = pcVar10;
    FUN_100649e9c(pcVar10);
    _swift_errorRelease(uVar12);
    pcVar8 = *(code **)(local_a0 + 8);
    pcVar13 = pcVar10;
    lVar11 = lVar4;
  }
  else {
    (**(code **)(local_88 + 0x20))(pcVar13,pcVar15,lVar11);
    pcVar8 = pcVar13;
    (*pcStack_90)();
    uVar1 = *(ulong *)(pcVar8 + *(long *)(*(long *)pcVar8 + 0x60));
    lVar4 = *(long *)(pcVar8 + *(long *)(*(long *)pcVar8 + 0x60) + 8);
    uVar6 = uVar1;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar4 + 0x10);
    _swift_unknownObjectRetain(uVar1);
    (*pcVar10)(uVar6,lVar4);
    _swift_unknownObjectRelease(uVar1);
    if ((uVar6 & 1) == 0) {
      FUN_100648698(local_80);
      _swift_release(pcVar8);
      (**(code **)(lVar5 + 8))(pcVar13,lVar11);
      return (code *)0x0;
    }
    puVar7 = &DAT_100ef0db8;
    _swift_allocObject(&DAT_100ef0db8,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar11;
    *(undefined8 *)(puVar7 + 0x18) = local_80;
    *(code **)(puVar7 + 0x20) = pcVar8;
    _swift_retain();
    _swift_retain(pcVar8);
    pcVar15 = FUN_100653e98;
    FUN_100648548(FUN_100653e98,puVar7);
    _swift_release(pcVar8);
    _swift_release(puVar7);
    pcVar8 = *(code **)(lVar5 + 8);
  }
  (*pcVar8)(pcVar13,lVar11);
  return pcVar15;
}



/* Address: 0x10064a8b8 | FUN_10064a8b8 */

undefined1 * FUN_10064a8b8(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  long lVar4;
  
  lVar7 = *param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar7 + 0x58);
  _swift_beginAccess((long)param_2 + lVar7,auStack_68,0,0);
  (**(code **)(lVar8 + 0x10))(puVar6,(long)param_2 + lVar7,CONCAT71(extraout_var_00,OVar3.value));
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar4);
  if ((int)puVar5 != 1) {
    puVar5 = puVar6;
    FUN_100649e9c(puVar6);
    (**(code **)(lVar7 + 8))(puVar6,lVar4);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064a9dc);
  (*pcVar1)();
}



/* Address: 0x10064a9dc | FUN_10064a9dc */

void FUN_10064a9dc(void)

{
  FUN_10064a9f0();
  return;
}



/* Address: 0x10064a9f0 | FUN_10064a9f0 */

undefined8
FUN_10064a9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar2 = *puVar1;
  uVar3 = uVar2;
  FUN_1006528a4(uVar2,puVar1[1]);
  _swift_allocObject(param_4,0x38,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  *(long **)(param_4 + 0x18) = unaff_x20;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  *(undefined8 *)(param_4 + 0x28) = param_2;
  *(undefined8 *)(param_4 + 0x30) = uVar3;
  _swift_retain();
  _swift_retain(param_2);
  _swift_retain(uVar3);
  _swift_unknownObjectRetain(uVar2);
  FUN_10064bde0(param_5,param_4);
  _swift_release(param_4);
  return uVar3;
}



/* Address: 0x10064aaa8 | FUN_10064aaa8 */

/* WARNING: Removing unreachable block (ram,0x00010064aca0) */

undefined8 *
FUN_10064aaa8(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined7 extraout_var_01;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long local_c0 [3];
  code *pcStack_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined1 auStack_78 [24];
  undefined7 extraout_var_00;
  
  lVar12 = *param_1;
  local_c0[2] = param_3;
  pcStack_a8 = param_2;
  local_98 = param_4;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  local_88 = CONCAT71(extraout_var,RVar1.value);
  local_90 = *(long *)(local_88 + -8);
  puVar8 = (undefined8 *)((long)local_c0 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  local_c0[0] = *(long *)(param_5 + -8);
  lVar14 = (long)puVar8 - (*(long *)(local_c0[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar12 + 0x50);
  local_a0 = *(long *)(lVar10 + -8);
  puVar13 = (undefined8 *)(lVar14 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_c0[1] = param_5;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var_00,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  puVar9 = (undefined8 *)((long)puVar13 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar12 = *(long *)(lVar12 + 0x58);
  _swift_beginAccess((long)param_1 + lVar12,auStack_78,0,0);
  (**(code **)(lVar7 + 0x10))(puVar9,(long)param_1 + lVar12,CONCAT71(extraout_var_01,OVar2.value));
  puVar4 = puVar9;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar9,1,lVar3);
  if ((int)puVar4 == 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10064adac);
    (*pcVar6)();
  }
  puVar4 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  puVar5 = puVar8;
  if ((int)puVar4 == 1) {
    uVar11 = *puVar9;
    *puVar8 = uVar11;
    lVar10 = local_88;
    _swift_storeEnumTagMultiPayload(puVar8,local_88,1);
    _swift_errorRetain(uVar11);
    FUN_100649e9c(puVar8);
    _swift_errorRelease(uVar11);
    pcVar6 = *(code **)(local_90 + 8);
    puVar13 = puVar8;
  }
  else {
    (**(code **)(local_a0 + 0x20))(puVar13,puVar9,lVar10);
    (*pcStack_a8)(lVar14,puVar13);
    lVar7 = local_c0[1];
    lVar3 = local_c0[0];
    (**(code **)(local_c0[0] + 0x10))(puVar8,lVar14,local_c0[1]);
    lVar12 = local_88;
    _swift_storeEnumTagMultiPayload(puVar8,local_88,0);
    FUN_100649e9c(puVar8);
    (**(code **)(local_90 + 8))(puVar8,lVar12);
    (**(code **)(lVar3 + 8))(lVar14,lVar7);
    pcVar6 = *(code **)(local_a0 + 8);
  }
  (*pcVar6)(puVar13,lVar10);
  return puVar5;
}



/* Address: 0x10064adac | FUN_10064adac */

void FUN_10064adac(undefined8 param_1,undefined8 param_2)

{
  FUN_10064adc0(param_1,param_2,&DAT_100ef0230,FUN_100652b58);
  return;
}



/* Address: 0x10064adc0 | FUN_10064adc0 */

undefined8 FUN_10064adc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar2 = *puVar1;
  uVar3 = uVar2;
  FUN_1006528a4(uVar2,puVar1[1],*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject(param_3,0x30,7);
  *(long **)(param_3 + 0x10) = unaff_x20;
  *(undefined8 *)(param_3 + 0x18) = uVar3;
  *(undefined8 *)(param_3 + 0x20) = param_1;
  *(undefined8 *)(param_3 + 0x28) = param_2;
  _swift_retain();
  _swift_retain(uVar3);
  _swift_retain(param_2);
  _swift_unknownObjectRetain(uVar2);
  FUN_10064bde0(param_4,param_3);
  _swift_release(param_3);
  return uVar3;
}



/* Address: 0x10064ae74 | FUN_10064ae74 */

/* WARNING: Removing unreachable block (ram,0x00010064afd0) */

long FUN_10064ae74(long *param_1,undefined8 param_2,code *param_3,code *param_4)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  code *local_b0 [2];
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined1 auStack_78 [24];
  long lVar3;
  
  lVar12 = *param_1;
  lVar9 = *(long *)(lVar12 + 0x50);
  local_b0[0] = param_4;
  local_b0[1] = param_3;
  local_90 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  lVar11 = *(long *)(lVar3 + -8);
  lVar10 = (long)local_b0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = *(long *)(lVar9 + -8);
  uVar5 = *(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = lVar10 - uVar5;
  lVar8 = local_a0 - uVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  puVar14 = (undefined8 *)(lVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar12 = *(long *)(lVar12 + 0x58);
  _swift_beginAccess((long)param_1 + lVar12,auStack_78,0,0);
  (**(code **)(lVar7 + 0x10))(puVar14,(long)param_1 + lVar12,CONCAT71(extraout_var_00,OVar2.value));
  puVar4 = puVar14;
  local_88 = lVar11;
  (**(code **)(lVar11 + 0x30))(puVar14,1,lVar3);
  if ((int)puVar4 != 1) {
    puVar4 = puVar14;
    _swift_getEnumCaseMultiPayload(puVar14,lVar3);
    lVar11 = local_98;
    lVar7 = local_a0;
    lVar12 = lVar10;
    if ((int)puVar4 == 1) {
      uVar13 = *puVar14;
      (*local_b0[1])(local_a0,uVar13);
      lVar8 = local_98;
      (**(code **)(local_98 + 0x10))(lVar10,lVar7,lVar9);
      _swift_storeEnumTagMultiPayload(lVar10,lVar3,0);
      FUN_100649e9c(lVar10);
      _swift_errorRelease(uVar13);
      (**(code **)(local_88 + 8))(lVar10,lVar3);
      pcVar6 = *(code **)(lVar8 + 8);
      lVar8 = lVar7;
    }
    else {
      (**(code **)(local_98 + 0x20))(lVar8,puVar14,lVar9);
      (**(code **)(lVar11 + 0x10))(lVar10,lVar8,lVar9);
      _swift_storeEnumTagMultiPayload(lVar10,lVar3,0);
      FUN_100649e9c(lVar10);
      (**(code **)(local_88 + 8))(lVar10,lVar3);
      pcVar6 = *(code **)(lVar11 + 8);
    }
    (*pcVar6)(lVar8,lVar9);
    return lVar12;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10064b138);
  (*pcVar6)();
}



/* Address: 0x10064b138 | FUN_10064b138 */

long * FUN_10064b138(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *unaff_x20;
  undefined *puVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar7 = *(undefined **)(*unaff_x20 + 0x50);
  puVar4 = PTR___type_metadata_for____100eae0c8 + 8;
  if (param_3 == puVar7 && param_3 == puVar4) {
    uVar5 = 0x44000001;
    local_60 = param_1;
    uStack_58 = param_2;
    _swift_getFunctionTypeMetadata1(0x44000001,puVar7,puVar4);
    _swift_retain(param_2);
    _swift_dynamicCast(&local_70,&local_60,uVar5,uVar5,7);
    puVar6 = &DAT_100ef0280;
    _swift_allocObject(&DAT_100ef0280,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    *(undefined8 *)(puVar6 + 0x28) = uStack_68;
    *(undefined8 *)(puVar6 + 0x20) = local_70;
    FUN_10064838c(FUN_1005e664c,puVar6);
    _swift_release(puVar6);
    FUN_1006529e0(0,puVar4);
    _swift_dynamicCastClassUnconditional();
    _swift_retain();
  }
  else {
    puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
    plVar2 = (long *)*puVar1;
    plVar3 = plVar2;
    FUN_1006528a4(plVar2,puVar1[1]);
    puVar4 = &DAT_100ef0258;
    _swift_allocObject(&DAT_100ef0258,0x38,7);
    *(undefined **)(puVar4 + 0x10) = param_3;
    *(long **)(puVar4 + 0x18) = plVar3;
    *(long **)(puVar4 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    *(undefined8 *)(puVar4 + 0x30) = param_2;
    _swift_retain(param_2);
    _swift_retain();
    _swift_retain(plVar3);
    _swift_unknownObjectRetain(plVar2);
    FUN_10064bde0(FUN_100652b98,puVar4);
    _swift_release(puVar4);
    unaff_x20 = plVar3;
  }
  return unaff_x20;
}



/* Address: 0x10064b2bc | FUN_10064b2bc */

long FUN_10064b2bc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar4;
  
  lVar6 = *param_2;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_1;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  lVar8 = (long)&local_90 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var_01,RVar2.value) + -8);
  lVar9 = lVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar6 + 0x58);
  _swift_beginAccess((long)param_2 + lVar6,auStack_78,0,0);
  (**(code **)(lVar5 + 0x10))(lVar8,(long)param_2 + lVar6,CONCAT71(extraout_var_00,OVar3.value));
  lVar6 = *(long *)(lVar4 + -8);
  lVar5 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar5 != 1) {
    FUN_10062f364(lVar9,local_90,uStack_88,lVar4,param_5);
    (**(code **)(lVar6 + 8))(lVar8,lVar4);
    lVar5 = lVar9;
    FUN_100649e9c(lVar9);
    (**(code **)(lVar7 + 8))(lVar9,CONCAT71(extraout_var_01,RVar2.value));
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064b458);
  (*pcVar1)();
}



/* Address: 0x10064b458 | FUN_10064b458 */

code * FUN_10064b458(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  Result RVar4;
  Optional OVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  code *pcStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar6;
  
  lVar10 = *param_1;
  lVar14 = *(long *)(lVar10 + 0x50);
  local_98 = param_4;
  pcStack_90 = param_3;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,RVar4.value);
  lVar16 = *(long *)(lVar6 + -8);
  pcVar11 = (code *)(auStack_a0 + -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_88 = *(long *)(lVar14 + -8);
  lVar15 = (long)pcVar11 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar13 = *(long *)(CONCAT71(extraout_var_00,OVar5.value) + -8);
  plVar17 = (long *)(lVar15 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = *(long *)(lVar10 + 0x58);
  _swift_beginAccess((long)param_1 + lVar10,auStack_78,0,0);
  (**(code **)(lVar13 + 0x10))(plVar17,(long)param_1 + lVar10,CONCAT71(extraout_var_00,OVar5.value))
  ;
  plVar7 = plVar17;
  (**(code **)(lVar16 + 0x30))(plVar17,1,lVar6);
  if ((int)plVar7 != 1) {
    plVar7 = plVar17;
    _swift_getEnumCaseMultiPayload(plVar17,lVar6);
    lVar10 = local_88;
    if ((int)plVar7 == 1) {
      plVar17 = (long *)*plVar17;
      plVar7 = plVar17;
      (*pcStack_90)();
      puVar1 = (ulong *)((long)plVar7 + *(long *)(*plVar7 + 0x60));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar8 = uVar2;
      _swift_getObjectType();
      pcVar11 = *(code **)(uVar3 + 0x10);
      _swift_unknownObjectRetain(uVar2);
      (*pcVar11)(uVar8,uVar3);
      _swift_unknownObjectRelease(uVar2);
      if ((uVar8 & 1) == 0) {
        FUN_100648698(local_80);
        _swift_errorRelease(plVar17);
        _swift_release(plVar7);
        pcVar12 = (code *)0x0;
      }
      else {
        puVar9 = &DAT_100ef0de0;
        _swift_allocObject(&DAT_100ef0de0,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = local_80;
        *(long **)(puVar9 + 0x18) = plVar7;
        _swift_retain();
        _swift_retain(plVar7);
        pcVar12 = FUN_100653ea4;
        FUN_100648548(FUN_100653ea4,puVar9);
        _swift_release(plVar7);
        _swift_release(puVar9);
        _swift_errorRelease(plVar17);
      }
    }
    else {
      (**(code **)(local_88 + 0x20))(lVar15,plVar17,lVar14);
      (**(code **)(lVar10 + 0x10))(pcVar11,lVar15,lVar14);
      _swift_storeEnumTagMultiPayload(pcVar11,lVar6,0);
      pcVar12 = pcVar11;
      FUN_100649e9c(pcVar11);
      (**(code **)(lVar16 + 8))(pcVar11,lVar6);
      (**(code **)(lVar10 + 8))(lVar15,lVar14);
    }
    return pcVar12;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10064b714);
  (*pcVar11)();
}



/* Address: 0x10064b714 | FUN_10064b714 */

undefined8
FUN_10064b714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar2 = *puVar1;
  uVar3 = uVar2;
  FUN_1006528a4(uVar2,puVar1[1]);
  puVar4 = &DAT_100ef02a8;
  _swift_allocObject(&DAT_100ef02a8,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(long **)(puVar4 + 0x28) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(undefined8 *)(puVar4 + 0x38) = param_2;
  *(undefined8 *)(puVar4 + 0x40) = uVar3;
  _swift_retain();
  _swift_retain(param_2);
  _swift_retain(uVar3);
  _swift_unknownObjectRetain(uVar2);
  FUN_10064bde0(FUN_100652bfc,puVar4);
  _swift_release(puVar4);
  return uVar3;
}



/* Address: 0x10064b7e0 | FUN_10064b7e0 */

long * FUN_10064b7e0(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                    long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Result RVar5;
  Result RVar6;
  Optional OVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long alStack_f0 [4];
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  code *pcStack_b0;
  long local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar17 = *param_1;
  local_c8 = *(long *)(param_6 + -8);
  lVar15 = (long)alStack_f0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar15;
  local_b8 = param_3;
  pcStack_b0 = param_2;
  local_88 = param_4;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_80 = CONCAT71(extraout_var,RVar5.value);
  local_90 = *(long *)(local_80 + -8);
  plVar16 = (long *)(lVar15 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0));
  alStack_f0[2] = *(long *)(param_5 + -8);
  lVar12 = (long)plVar16 - (*(long *)(alStack_f0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_f0[1] = lVar12;
  alStack_f0[3] = param_7;
  local_c0 = param_6;
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar12 = lVar12 - (*(long *)(*(long *)(CONCAT71(extraout_var_00,RVar5.value) + -8) + 0x40) + 0xfU
                    & 0xfffffffffffffff0);
  local_98 = *(long *)(lVar17 + 0x50);
  local_a8 = *(long *)(local_98 + -8);
  plVar13 = (long *)(lVar12 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_a0 = plVar13;
  RVar6 = Swift::Result::typeMetadataAccessor();
  lVar15 = CONCAT71(extraout_var_01,RVar6.value);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  lVar18 = *(long *)(CONCAT71(extraout_var_02,OVar7.value) + -8);
  plVar13 = (long *)((long)plVar13 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar17 = *(long *)(lVar17 + 0x58);
  _swift_beginAccess((long)param_1 + lVar17,auStack_78,0,0);
  (**(code **)(lVar18 + 0x10))(plVar13,(long)param_1 + lVar17,CONCAT71(extraout_var_02,OVar7.value))
  ;
  plVar8 = plVar13;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(plVar13,1,lVar15);
  if ((int)plVar8 != 1) {
    plVar9 = plVar13;
    _swift_getEnumCaseMultiPayload(plVar13,lVar15);
    lVar17 = local_98;
    plVar8 = local_a0;
    lVar15 = local_a8;
    plVar11 = plVar16;
    if ((int)plVar9 == 1) {
      lVar15 = *plVar13;
      *plVar16 = lVar15;
      lVar17 = local_80;
      _swift_storeEnumTagMultiPayload(plVar16,local_80,1);
      _swift_errorRetain(lVar15);
      FUN_100649e9c(plVar16);
      _swift_errorRelease(lVar15);
      pcVar14 = *(code **)(local_90 + 8);
      plVar8 = plVar16;
    }
    else {
      (**(code **)(local_a8 + 0x20))(local_a0,plVar13,local_98);
      (*pcStack_b0)(lVar12,plVar8);
      lVar10 = lVar12;
      _swift_getEnumCaseMultiPayload(lVar12,CONCAT71(extraout_var_00,RVar5.value));
      lVar4 = local_c0;
      lVar3 = local_c8;
      lVar2 = local_d0;
      lVar1 = alStack_f0[2];
      lVar18 = alStack_f0[1];
      if ((int)lVar10 == 1) {
        (**(code **)(local_c8 + 0x20))(local_d0,lVar12,local_c0);
        lVar12 = lVar4;
        lVar18 = alStack_f0[3];
        _swift_allocError(lVar4,alStack_f0[3],0,0);
        (**(code **)(lVar3 + 0x10))(lVar18,lVar2,lVar4);
        *plVar16 = lVar12;
        lVar12 = local_80;
        _swift_storeEnumTagMultiPayload(plVar16,local_80,1);
        FUN_100649e9c(plVar16);
        (**(code **)(local_90 + 8))(plVar16,lVar12);
        (**(code **)(lVar3 + 8))(lVar2,lVar4);
        pcVar14 = *(code **)(lVar15 + 8);
        plVar8 = local_a0;
      }
      else {
        (**(code **)(alStack_f0[2] + 0x20))(alStack_f0[1],lVar12,param_5);
        (**(code **)(lVar1 + 0x10))(plVar16,lVar18,param_5);
        lVar12 = local_80;
        _swift_storeEnumTagMultiPayload(plVar16,local_80,0);
        FUN_100649e9c(plVar16);
        (**(code **)(local_90 + 8))(plVar16,lVar12);
        (**(code **)(lVar1 + 8))(lVar18,param_5);
        pcVar14 = *(code **)(lVar15 + 8);
        lVar17 = local_98;
      }
    }
    (*pcVar14)(plVar8,lVar17);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10064bbbc);
  (*pcVar14)();
}



/* Address: 0x10064bbbc | FUN_10064bbbc */

long FUN_10064bbbc(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  code *apcStack_a0 [3];
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar3;
  
  lVar6 = *param_1;
  lVar9 = *(long *)(lVar6 + 0x50);
  apcStack_a0[1] = (code *)param_4;
  apcStack_a0[2] = param_3;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  lVar7 = *(long *)(lVar3 + -8);
  lVar8 = (long)apcStack_a0 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = *(long *)(lVar9 + -8);
  lVar12 = lVar8 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar11 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  puVar13 = (undefined8 *)(lVar12 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = *(long *)(lVar6 + 0x58);
  _swift_beginAccess((long)param_1 + lVar6,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(puVar13,(long)param_1 + lVar6,CONCAT71(extraout_var_00,OVar2.value));
  puVar4 = puVar13;
  (**(code **)(lVar7 + 0x30))(puVar13,1,lVar3);
  if ((int)puVar4 != 1) {
    puVar4 = puVar13;
    _swift_getEnumCaseMultiPayload(puVar13,lVar3);
    lVar6 = local_88;
    lVar11 = lVar8;
    if ((int)puVar4 == 1) {
      uVar10 = *puVar13;
      (*apcStack_a0[2])(lVar8,uVar10);
      _swift_storeEnumTagMultiPayload(lVar8,lVar3,0);
      FUN_100649e9c(lVar8);
      _swift_errorRelease(uVar10);
      pcVar5 = *(code **)(lVar7 + 8);
      lVar12 = lVar8;
      lVar9 = lVar3;
    }
    else {
      (**(code **)(local_88 + 0x20))(lVar12,puVar13,lVar9);
      (**(code **)(lVar6 + 0x10))(lVar8,lVar12,lVar9);
      _swift_storeEnumTagMultiPayload(lVar8,lVar3,0);
      FUN_100649e9c(lVar8);
      (**(code **)(lVar7 + 8))(lVar8,lVar3);
      pcVar5 = *(code **)(lVar6 + 8);
    }
    (*pcVar5)(lVar12,lVar9);
    return lVar11;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10064bde0);
  (*pcVar5)();
}



/* Address: 0x10064bde0 | FUN_10064bde0 */

void FUN_10064bde0(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long *unaff_x20;
  code *pcVar6;
  
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  uVar4 = uVar3;
  (**(code **)(uVar2 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_1006486b4(param_1,param_2);
    return;
  }
  puVar5 = &DAT_100ef02d0;
  _swift_allocObject(&DAT_100ef02d0,0x28,7);
  *(long **)(puVar5 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcVar6 = *(code **)(uVar2 + 0x18);
  _swift_retain();
  _swift_retain(param_2);
  (*pcVar6)(FUN_100652c10,puVar5,uVar3,uVar2);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10064beb8 | thunk_FUN_10064bebc */

void thunk_FUN_10064bebc(void)

{
  FUN_10064bebc();
  return;
}



/* Address: 0x10064bebc | FUN_10064bebc */

void FUN_10064bebc(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = param_1 + 0x10;
  puVar3 = auStack_48;
  uVar1 = 0;
  _swift_beginAccess(lVar2,puVar3,0,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    _swift_beginAccess(param_1 + 0x30,auStack_60,0x21,0);
    FUN_10064967c(param_2,param_3);
    _swift_endAccess(auStack_60);
    lVar2 = 0;
    puVar3 = (undefined1 *)0x0;
    uVar1 = 0;
  }
  else {
    (*param_2)();
  }
  FUN_1006486f8(lVar2,puVar3,uVar1);
  FUN_100004550(lVar2,puVar3);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10064bf84 | thunk_FUN_10064c01c */

void thunk_FUN_10064c01c(void)

{
  FUN_10064c01c();
  return;
}



/* Address: 0x10064bf88 | FUN_10064bf88 */

undefined8 FUN_10064bf88(long param_1,code *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != '\x01') {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10064c01c);
      (*pcVar2)();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    local_38 = uVar3;
    FUN_1005dff00(uVar3,cVar1);
    (*param_2)(&local_38);
    FUN_100642b94(uVar3,cVar1);
  }
  return 0;
}



/* Address: 0x10064c01c | FUN_10064c01c */

undefined8 FUN_10064c01c(long param_1,code *param_2)

{
  code *pcVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  if (*(char *)(param_1 + 0x18) != '\x01') {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10064c08c);
      (*pcVar1)();
    }
    (*param_2)();
  }
  return 0;
}



/* Address: 0x10064c08c | thunk_FUN_10064c120 */

void thunk_FUN_10064c120(void)

{
  FUN_10064c120();
  return;
}



/* Address: 0x10064c090 | FUN_10064c090 */

undefined8 FUN_10064c090(long param_1,code *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    FUN_1005dff00(uVar2,1);
    (*param_2)(uVar2);
    FUN_100642b94(uVar2,1);
  }
  else if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064c0dc);
    (*pcVar1)();
  }
  return 0;
}



/* Address: 0x10064c120 | FUN_10064c120 */

undefined8 FUN_10064c120(long param_1,code *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    FUN_100308524(uVar3,1);
    (*param_2)(uVar3);
  }
  else if (cVar1 == -1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10064c170);
    (*pcVar2)();
  }
  FUN_100308538(uVar3,cVar1);
  return 0;
}



/* Address: 0x10064c1b0 | FUN_10064c1b0 */

void FUN_10064c1b0(void)

{
  FUN_10064c1c4();
  return;
}



/* Address: 0x10064c1c4 | FUN_10064c1c4 */

undefined8 FUN_10064c1c4(code *param_1,undefined8 param_2,long param_3,code *param_4,code *param_5)

{
  code *pcVar1;
  undefined8 local_68;
  char local_60;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  local_68 = *(undefined8 *)(param_3 + 0x10);
  local_60 = *(char *)(param_3 + 0x18);
  if (local_60 != -1) {
    (*param_4)();
    (*param_1)(&local_68);
    (*param_5)(local_68,local_60);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064c25c);
  (*pcVar1)();
}



/* Address: 0x10064c25c | FUN_10064c25c */

void FUN_10064c25c(void)

{
  FUN_10064c1c4();
  return;
}



/* Address: 0x10064c270 | FUN_10064c270 */

void FUN_10064c270(void)

{
  FUN_10064c1c4();
  return;
}



/* Address: 0x10064c284 | FUN_10064c284 */

void FUN_10064c284(void)

{
  FUN_100653e60(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10064c290 | FUN_10064c290 */

void FUN_10064c290(void)

{
  long unaff_x20;
  
  FUN_100649e00(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10064c29c | FUN_10064c29c */

undefined8 * FUN_10064c29c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Optional OVar5;
  Result RVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar7;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  long local_120 [4];
  long *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar18 = *param_1;
  lVar13 = *(long *)(lVar18 + 0x50);
  local_100 = param_3;
  local_c8 = param_2;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_e0 = CONCAT71(extraout_var,OVar5.value);
  local_120[3] = *(long *)(local_e0 + -8);
  lVar15 = (long)local_120 - (*(long *)(local_120[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_120[2] = lVar15;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_f0 = CONCAT71(extraout_var_00,OVar5.value);
  local_f8 = *(long *)(local_f0 + -8);
  lVar15 = lVar15 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(param_4 + -8);
  local_120[1] = lVar15 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(long *)(lVar13 + -8);
  puVar11 = (undefined8 *)(local_120[1] - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0xff;
  local_c0 = puVar11;
  _swift_getTupleTypeMetadata2(0xff,lVar13,param_4,0,0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_120[0] = lVar7;
  RVar6 = Swift::Result::typeMetadataAccessor();
  local_d0 = CONCAT71(extraout_var_01,RVar6.value);
  local_d8 = *(long *)(local_d0 + -8);
  puVar11 = (undefined8 *)((long)puVar11 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  RVar6 = Swift::Result::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_02,RVar6.value);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar17 = *(long *)(CONCAT71(extraout_var_03,OVar5.value) + -8);
  puVar16 = (undefined8 *)((long)puVar11 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar18 = *(long *)(lVar18 + 0x58);
  _swift_beginAccess((long)param_1 + lVar18,auStack_80,0,0);
  (**(code **)(lVar17 + 0x10))(puVar16,(long)param_1 + lVar18,CONCAT71(extraout_var_03,OVar5.value))
  ;
  puVar8 = puVar16;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(puVar16,1,lVar7);
  if ((int)puVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10064c6f8);
    (*pcVar12)();
  }
  puVar8 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar7);
  puVar10 = puVar11;
  if ((int)puVar8 == 1) {
    uVar14 = *puVar16;
    *puVar11 = uVar14;
    lVar13 = local_d0;
    _swift_storeEnumTagMultiPayload(puVar11,local_d0,1);
    _swift_errorRetain(uVar14);
    FUN_100649e9c(puVar11);
    _swift_errorRelease(uVar14);
    pcVar12 = *(code **)(local_d8 + 8);
    puVar8 = puVar11;
  }
  else {
    pcVar12 = *(code **)(local_b8 + 0x20);
    (*pcVar12)(local_c0,puVar16,lVar13);
    lVar7 = (long)local_100 + *(long *)(*local_100 + 0x58);
    _swift_beginAccess(lVar7,auStack_98,0,0);
    lVar4 = local_e0;
    lVar2 = local_f0;
    lVar17 = 0;
    _swift_getTupleTypeMetadata2(0,local_e0,local_f0,"t u ",0);
    lVar18 = local_f8;
    (**(code **)(local_f8 + 0x10))(lVar15,lVar7 + *(int *)(lVar17 + 0x30),lVar2);
    lVar3 = local_e8;
    lVar9 = lVar15;
    (**(code **)(local_e8 + 0x30))(lVar15,1,param_4);
    lVar17 = local_120[1];
    if ((int)lVar9 == 1) {
      (**(code **)(lVar18 + 8))(lVar15,lVar2);
      lVar15 = local_120[2];
      (*pcVar12)(local_120[2],local_c0,lVar13);
      (**(code **)(local_b8 + 0x38))(lVar15,0,1,lVar13);
      _swift_beginAccess(lVar7,auStack_b0,0x21,0);
      (**(code **)(local_120[3] + 0x28))(lVar7,lVar15,lVar4);
      _swift_endAccess(auStack_b0);
      return (undefined8 *)0x0;
    }
    (**(code **)(lVar3 + 0x20))(local_120[1],lVar15,param_4);
    puVar8 = local_c0;
    iVar1 = *(int *)(local_120[0] + 0x30);
    (**(code **)(local_b8 + 0x10))(puVar11,local_c0,lVar13);
    (**(code **)(lVar3 + 0x10))((long)puVar11 + (long)iVar1,lVar17,param_4);
    lVar7 = local_d0;
    _swift_storeEnumTagMultiPayload(puVar11,local_d0,0);
    FUN_100649e9c(puVar11);
    (**(code **)(local_d8 + 8))(puVar11,lVar7);
    (**(code **)(lVar3 + 8))(lVar17,param_4);
    pcVar12 = *(code **)(local_b8 + 8);
  }
  (*pcVar12)(puVar8,lVar13);
  return puVar10;
}



/* Address: 0x10064c6f8 | FUN_10064c6f8 */

undefined8 * FUN_10064c6f8(long *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  Result RVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long local_120 [4];
  long local_100;
  long *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar14 = *param_1;
  lVar17 = *param_2;
  lVar12 = *(long *)(lVar17 + 0x50);
  local_f8 = param_4;
  local_c0 = param_3;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_100 = CONCAT71(extraout_var,OVar4.value);
  local_120[3] = *(long *)(local_100 + -8);
  lVar15 = (long)local_120 - (*(long *)(local_120[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(lVar14 + 0x50);
  local_120[2] = lVar15;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_e0 = CONCAT71(extraout_var_00,OVar4.value);
  local_f0 = *(long *)(local_e0 + -8);
  lVar15 = lVar15 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(lVar16 + -8);
  local_120[1] = lVar15 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(long *)(lVar12 + -8);
  puVar10 = (undefined8 *)(local_120[1] - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar14 = 0xff;
  local_d8 = puVar10;
  _swift_getTupleTypeMetadata2(0xff,lVar16,lVar12,0,0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_120[0] = lVar14;
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_c8 = CONCAT71(extraout_var_01,RVar5.value);
  local_d0 = *(long *)(local_c8 + -8);
  puVar10 = (undefined8 *)((long)puVar10 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var_02,RVar5.value);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar19 = *(long *)(CONCAT71(extraout_var_03,OVar4.value) + -8);
  puVar18 = (undefined8 *)((long)puVar10 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar17 = *(long *)(lVar17 + 0x58);
  _swift_beginAccess((long)param_2 + lVar17,auStack_80,0,0);
  (**(code **)(lVar19 + 0x10))(puVar18,(long)param_2 + lVar17,CONCAT71(extraout_var_03,OVar4.value))
  ;
  puVar6 = puVar18;
  (**(code **)(*(long *)(lVar14 + -8) + 0x30))(puVar18,1,lVar14);
  if ((int)puVar6 == 1) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10064cb5c);
    (*pcVar11)();
  }
  puVar7 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar14);
  puVar6 = local_d8;
  puVar9 = puVar10;
  if ((int)puVar7 == 1) {
    uVar13 = *puVar18;
    *puVar10 = uVar13;
    lVar12 = local_c8;
    _swift_storeEnumTagMultiPayload(puVar10,local_c8,1);
    _swift_errorRetain(uVar13);
    FUN_100649e9c(puVar10);
    _swift_errorRelease(uVar13);
    pcVar11 = *(code **)(local_d0 + 8);
    puVar6 = puVar10;
  }
  else {
    pcVar11 = *(code **)(local_b8 + 0x20);
    (*pcVar11)(local_d8,puVar18,lVar12);
    lVar14 = (long)local_f8 + *(long *)(*local_f8 + 0x58);
    _swift_beginAccess(lVar14,auStack_98,0,0);
    lVar3 = local_e0;
    lVar19 = local_f0;
    (**(code **)(local_f0 + 0x10))(lVar15,lVar14,local_e0);
    lVar2 = local_e8;
    lVar8 = lVar15;
    (**(code **)(local_e8 + 0x30))(lVar15,1,lVar16);
    lVar17 = local_120[1];
    if ((int)lVar8 == 1) {
      (**(code **)(lVar19 + 8))(lVar15,lVar3);
      lVar15 = local_120[2];
      (*pcVar11)(local_120[2],puVar6,lVar12);
      (**(code **)(local_b8 + 0x38))(lVar15,0,1,lVar12);
      _swift_beginAccess(lVar14,auStack_b0,0x21,0);
      lVar12 = local_100;
      lVar16 = 0;
      _swift_getTupleTypeMetadata2(0,lVar3,local_100,"t u ",0);
      (**(code **)(local_120[3] + 0x28))(lVar14 + *(int *)(lVar16 + 0x30),lVar15,lVar12);
      _swift_endAccess(auStack_b0);
      return (undefined8 *)0x0;
    }
    (**(code **)(lVar2 + 0x20))(local_120[1],lVar15,lVar16);
    iVar1 = *(int *)(local_120[0] + 0x30);
    (**(code **)(lVar2 + 0x10))(puVar10,lVar17,lVar16);
    (**(code **)(local_b8 + 0x10))((long)puVar10 + (long)iVar1,puVar6,lVar12);
    lVar14 = local_c8;
    _swift_storeEnumTagMultiPayload(puVar10,local_c8,0);
    FUN_100649e9c(puVar10);
    (**(code **)(local_d0 + 8))(puVar10,lVar14);
    (**(code **)(lVar2 + 8))(lVar17,lVar16);
    pcVar11 = *(code **)(local_b8 + 8);
  }
  (*pcVar11)(puVar6,lVar12);
  return puVar9;
}



/* Address: 0x10064cb5c | FUN_10064cb5c */

void FUN_10064cb5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  Result RVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar2;
  
  lVar7 = *(long *)(param_3 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  puVar6 = (undefined8 *)
           (puVar4 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar6,param_1,lVar2);
  puVar3 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar2);
  if ((int)puVar3 == 1) {
    uVar5 = *puVar6;
    FUN_100646f54(uVar5,param_2,param_3);
    _swift_errorRelease(uVar5);
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar4,puVar6,param_3);
    FUN_100646e88(puVar4,param_2,param_3);
    (**(code **)(lVar7 + 8))(puVar4,param_3);
  }
  return;
}



/* Address: 0x10064cc80 | FUN_10064cc80 */

void FUN_10064cc80(undefined8 param_1)

{
  FUN_10064cc9c(param_1,&DAT_100ef02f8,FUN_100652c38,FUN_10064838c);
  return;
}



/* Address: 0x10064cc9c | FUN_10064cc9c */

void FUN_10064cc9c(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  long *unaff_x20;
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *unaff_x20;
    _swift_allocObject(param_2,0x20,7);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 0x50);
    *(long *)(param_2 + 0x18) = param_1;
    _swift_retain_n(param_1,2);
    (*param_4)(param_3,param_2);
    _swift_release(param_1);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x10064cd1c | FUN_10064cd1c */

void FUN_10064cd1c(void)

{
  FUN_10064cd30();
  return;
}



/* Address: 0x10064cd30 | FUN_10064cd30 */

void FUN_10064cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long alStack_b0 [3];
  undefined8 local_78 [3];
  long lVar4;
  
  lVar10 = *unaff_x20;
  lVar11 = *(long *)(lVar10 + 0x50);
  alStack_b0[2] = param_1;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  alStack_b0[1] = lVar11;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar11 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar3.value);
  lVar8 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)alStack_b0 - uVar9;
  plVar12 = (long *)(lVar13 - uVar9);
  puVar6 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar10 + 0x60));
  uVar5 = *puVar6;
  lVar10 = puVar6[1];
  _swift_getObjectType(uVar5);
  (**(code **)(lVar10 + 0x68))(param_2,param_3,param_4,param_5,uVar5,lVar10);
  FUN_100663960(0,lVar4);
  lVar14 = *(long *)(lVar11 + -8);
  (**(code **)(lVar14 + 0x38))(plVar12,1,1,lVar11);
  FUN_100663568();
  local_78[0] = 0;
  FUN_1000f7830(&DAT_100fd85e8,&DAT_100c6aad0);
  _swift_allocObject();
  puVar6 = local_78;
  FUN_100671b38();
  puVar7 = &DAT_100ef0320;
  _swift_allocObject(&DAT_100ef0320,0x28,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar6;
  *(long **)(puVar7 + 0x18) = plVar12;
  *(long **)(puVar7 + 0x20) = unaff_x20;
  _swift_retain(puVar6);
  _swift_retain(plVar12);
  _swift_retain();
  FUN_10064bde0(FUN_100652c74,puVar7);
  _swift_release(puVar7);
  local_78[0] = 1;
  FUN_100671cfc(local_78);
  FUN_100671c28();
  lVar10 = *(long *)(*plVar12 + 0x58);
  _swift_beginAccess((long)plVar12 + lVar10,local_78,0,0);
  (**(code **)(lVar8 + 0x10))(lVar13,(long)plVar12 + lVar10,lVar4);
  lVar10 = lVar13;
  (**(code **)(lVar14 + 0x30))(lVar13,1,lVar11);
  if ((int)lVar10 != 1) {
    lVar10 = lVar13;
    _swift_getEnumCaseMultiPayload(lVar13,lVar11);
    if ((int)lVar10 == 1) {
      _swift_willThrow();
      _swift_release(plVar12);
      _swift_release(puVar6);
    }
    else {
      _swift_release(plVar12);
      _swift_release(puVar6);
      (**(code **)(*(long *)(alStack_b0[1] + -8) + 0x20))(alStack_b0[2],lVar13);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064cfc4);
  (*pcVar1)();
}



/* Address: 0x10064cfc4 | FUN_10064cfc4 */

undefined8 FUN_10064cfc4(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_80 [3];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(*param_2 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = (long)local_80 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100671c1c();
  lVar4 = *(long *)(*param_3 + 0x58);
  _swift_beginAccess((long)param_3 + lVar4,auStack_68,0,0);
  (**(code **)(lVar3 + 0x10))(lVar2,(long)param_3 + lVar4,lVar1);
  lVar4 = *(long *)(*param_2 + 0x58);
  _swift_beginAccess((long)param_2 + lVar4,local_80,0x21,0);
  (**(code **)(lVar3 + 0x28))((long)param_2 + lVar4,lVar2,lVar1);
  _swift_endAccess(local_80);
  local_80[0] = 1;
  FUN_10067215c(local_80);
  return 0;
}



/* Address: 0x10064d0b4 | FUN_10064d0b4 */

ulong FUN_10064d0b4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long lVar7;
  
  lVar7 = *unaff_x20;
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(lVar7 + 0x60));
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  uVar4 = uVar3;
  (**(code **)(uVar2 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_10064d1dc(param_1);
    return param_1;
  }
  uVar4 = uVar3;
  FUN_1006422fc(uVar3,*(undefined8 *)(lVar7 + 0x50),uVar2);
  puVar5 = &DAT_100ef0348;
  _swift_allocObject(&DAT_100ef0348,0x40,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  *(ulong *)(puVar5 + 0x18) = param_1;
  *(long **)(puVar5 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar5 + 0x28) = param_2;
  *(undefined8 *)(puVar5 + 0x30) = param_3;
  *(ulong *)(puVar5 + 0x38) = uVar4;
  pcVar6 = *(code **)(uVar2 + 0x18);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain();
  _swift_retain(param_3);
  _swift_retain(uVar4);
  (*pcVar6)(FUN_100652cbc,puVar5,uVar3,uVar2);
  _swift_release(puVar5);
  return uVar4;
}



/* Address: 0x10064d1dc | FUN_10064d1dc */

undefined8
FUN_10064d1dc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = *param_2;
  local_70 = param_5;
  plStack_68 = param_2;
  local_60 = param_3;
  uStack_58 = param_4;
  local_48 = param_2;
  uStack_40 = param_1;
  FUN_1006529e0(0xff,param_5);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar2 = 0;
  FUN_1006529e0(0,*(undefined8 *)(lVar4 + 0x50));
  puVar3 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar1);
  (extension_Swift)::Swift::Sequence::_reduce
            (&local_38,&local_48,FUN_100653e0c,auStack_80,uVar1,uVar2,puVar3);
  return local_38;
}



/* Address: 0x10064d280 | FUN_10064d280 */

void FUN_10064d280(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_4;
  uVar1 = *param_3;
  FUN_10064926c(uVar1);
  puVar2 = &DAT_100ef0d90;
  _swift_allocObject(&DAT_100ef0d90,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(long **)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  _swift_retain(param_4);
  _swift_retain(param_6);
  pcVar3 = FUN_100653e54;
  FUN_10064a5bc(FUN_100653e54,puVar2,uVar4);
  _swift_release(uVar1);
  _swift_release(puVar2);
  *param_1 = pcVar3;
  return;
}



/* Address: 0x10064d348 | FUN_10064d348 */

long FUN_10064d348(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  code *local_68;
  
  lVar3 = *(long *)(*param_2 + 0x50);
  lVar2 = 0;
  local_68 = param_3;
  _swift_getTupleTypeMetadata2(0,lVar3,param_5,0,0);
  puVar5 = auStack_70 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_5 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar3 + -8);
  lVar7 = lVar6 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar5,param_1,lVar2);
  iVar1 = *(int *)(lVar2 + 0x30);
  (**(code **)(lVar4 + 0x20))(lVar7,puVar5,lVar3);
  (**(code **)(lVar8 + 0x20))(lVar6,puVar5 + iVar1,param_5);
  lVar2 = lVar7;
  (*local_68)(lVar7,lVar6);
  (**(code **)(lVar8 + 8))(lVar6,param_5);
  (**(code **)(lVar4 + 8))(lVar7,lVar3);
  return lVar2;
}



/* Address: 0x10064d488 | thunk_FUN_10064d48c */

undefined8
thunk_FUN_10064d48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_10063dc68(param_1,uVar1,uVar3,param_4);
  puVar2 = &DAT_100ef0370;
  _swift_allocObject(&DAT_100ef0370,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_6);
  FUN_10064d0b4(param_2,FUN_100652d20,puVar2,param_7);
  _swift_release(puVar2);
  _swift_release(param_1);
  return param_2;
}



/* Address: 0x10064d48c | FUN_10064d48c */

undefined8
FUN_10064d48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_10063dc68(param_1,uVar1,uVar3,param_4);
  puVar2 = &DAT_100ef0370;
  _swift_allocObject(&DAT_100ef0370,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_6);
  FUN_10064d0b4(param_2,FUN_100652d20,puVar2,param_7);
  _swift_release(puVar2);
  _swift_release(param_1);
  return param_2;
}



/* Address: 0x10064d56c | FUN_10064d56c */

undefined1 *
FUN_10064d56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5,undefined8 param_6,long param_7)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_7 + -8);
  puVar2 = &stack0xffffffffffffffa0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getObjectType(param_3);
  (*param_5)(puVar2,param_1,param_2);
  puVar1 = puVar2;
  FUN_10063dc68(puVar2,param_3,param_7,param_4);
  (**(code **)(lVar3 + 8))(puVar2,param_7);
  return puVar1;
}



/* Address: 0x10064d62c | FUN_10064d62c */

undefined8
FUN_10064d62c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  char cVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  ulong local_100;
  undefined8 local_f8;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar13 = *(long *)(unaff_x20 + 0x50);
  lVar11 = *(long *)(lVar13 + -8);
  lVar3 = (long)&local_100 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_3;
  local_d8 = param_5;
  local_c0 = param_2;
  _swift_getObjectType();
  FUN_1006422fc();
  local_b8 = uVar2;
  FUN_100660d18(0,lVar13);
  local_d0 = lVar13;
  (**(code **)(lVar11 + 0x10))(lVar3,param_1,lVar13);
  FUN_10065fe54(lVar3,param_3,param_4);
  uVar2 = param_3;
  _swift_unknownObjectRetain();
  FUN_10063dc68();
  puVar4 = &DAT_100ef0398;
  _swift_allocObject(&DAT_100ef0398,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(long *)(puVar4 + 0x28) = lVar3;
  *(undefined8 *)(puVar4 + 0x30) = local_d8;
  *(undefined8 *)(puVar4 + 0x38) = param_6;
  _swift_unknownObjectRetain(param_3);
  _swift_retain(lVar3);
  _swift_retain(param_6);
  lVar13 = local_c0;
  local_f8 = uVar2;
  FUN_10064d0b4(local_c0,FUN_100652d64,puVar4,param_7);
  _swift_release(puVar4);
  puVar4 = &DAT_100ef03c0;
  _swift_allocObject(&DAT_100ef03c0,0x38,7);
  uVar2 = local_b8;
  *(undefined8 *)(puVar4 + 0x10) = param_7;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined8 *)(puVar4 + 0x28) = local_b8;
  *(long *)(puVar4 + 0x30) = lVar3;
  puVar5 = &DAT_100ef03e8;
  local_e0 = param_4;
  local_d8 = param_7;
  _swift_allocObject(&DAT_100ef03e8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100652d84;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar6 = &DAT_100ef0410;
  _swift_allocObject(&DAT_100ef0410,0x28,7);
  *(long *)(puVar6 + 0x10) = lVar13;
  *(code **)(puVar6 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  uVar7 = *(ulong *)(lVar13 + 0x20);
  lVar11 = *(long *)(lVar13 + 0x28);
  _swift_getObjectType();
  local_f0 = *(code **)(lVar11 + 0x10);
  local_c0 = param_3;
  _swift_unknownObjectRetain_n(param_3,2);
  _swift_retain_n(lVar3,2);
  _swift_retain_n(uVar2,2);
  _swift_retain_n(lVar13,2);
  local_e8 = puVar5;
  _swift_retain_n(puVar5,2);
  _swift_retain(puVar4);
  local_100 = uVar7;
  (*local_f0)(uVar7,lVar11);
  uVar2 = local_b8;
  local_c8 = lVar3;
  if ((uVar7 & 1) == 0) {
    _swift_release(lVar3);
    _swift_release(local_b8);
    _swift_unknownObjectRelease(local_c0);
    _swift_release(puVar4);
    puVar4 = &DAT_100ef0438;
    _swift_allocObject(&DAT_100ef0438,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar13;
    *(code **)(puVar4 + 0x18) = FUN_100652d90;
    *(undefined **)(puVar4 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar11 + 0x18);
    _swift_retain(lVar13);
    _swift_retain(puVar6);
    (*pcVar12)(thunk_FUN_100653138,puVar4,local_100,lVar11);
    _swift_release(puVar4);
    _swift_release_n(local_e8,2);
    _swift_release(lVar13);
    _swift_release(puVar6);
    uVar10 = local_d8;
  }
  else {
    _swift_beginAccess(lVar13 + 0x10,auStack_b0,0,0);
    uVar10 = local_d8;
    if (*(char *)(lVar13 + 0x18) == '\x01') {
LAB_10064d9ac:
      _swift_unknownObjectRelease(local_c0);
      _swift_release(puVar4);
      _swift_release(lVar3);
      _swift_release(uVar2);
    }
    else {
      if (*(char *)(lVar13 + 0x18) != -1) {
        FUN_100652f28(uVar2,lVar3,local_d8);
        goto LAB_10064d9ac;
      }
      _swift_release(lVar3);
      _swift_release(uVar2);
      _swift_unknownObjectRelease(local_c0);
      _swift_release(puVar4);
      _swift_beginAccess(lVar13 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_100652d90,puVar6);
      _swift_endAccess(auStack_80);
    }
    FUN_100004550(0,0);
    _swift_release_n(local_e8,2);
    _swift_release(lVar13);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  lVar3 = local_d0;
  puVar4 = &DAT_100ef0460;
  _swift_allocObject(&DAT_100ef0460,0x38,7);
  uVar2 = local_b8;
  lVar1 = local_c0;
  *(long *)(puVar4 + 0x10) = lVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  *(long *)(puVar4 + 0x20) = local_c0;
  *(undefined8 *)(puVar4 + 0x28) = local_e0;
  *(undefined8 *)(puVar4 + 0x30) = local_b8;
  puVar5 = &DAT_100ef0488;
  _swift_allocObject(&DAT_100ef0488,0x28,7);
  *(long *)(puVar5 + 0x10) = lVar13;
  *(code **)(puVar5 + 0x18) = FUN_100652dd8;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  uVar7 = *(ulong *)(lVar13 + 0x20);
  lVar11 = *(long *)(lVar13 + 0x28);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar11 + 0x10);
  _swift_unknownObjectRetain_n(lVar1,2);
  _swift_retain_n(uVar2,2);
  _swift_retain_n(lVar13,2);
  _swift_retain_n(puVar4,2);
  uVar8 = uVar7;
  (*pcVar12)(uVar7,lVar11);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100ef04b0;
    _swift_allocObject(&DAT_100ef04b0,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar13;
    *(code **)(puVar6 + 0x18) = FUN_100652de4;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    pcVar12 = *(code **)(lVar11 + 0x18);
    _swift_retain(lVar13);
    _swift_retain(puVar5);
    (*pcVar12)(thunk_FUN_100653138,puVar6,uVar7,lVar11);
    _swift_release(local_c8);
    _swift_release(puVar6);
    _swift_release(puVar4);
    _swift_release_n(lVar13,2);
    _swift_release(puVar5);
    uVar10 = local_f8;
    goto LAB_10064dbf8;
  }
  _swift_beginAccess(lVar13 + 0x10,auStack_80,0,0);
  uVar10 = *(undefined8 *)(lVar13 + 0x10);
  cVar9 = *(char *)(lVar13 + 0x18);
  if (cVar9 == '\x01') {
    FUN_1005dfeb4(uVar10);
    FUN_100646f54(uVar10,uVar2,lVar3);
    cVar9 = '\x01';
LAB_10064dbb8:
    FUN_100308538(uVar10,cVar9);
  }
  else {
    if (cVar9 != -1) goto LAB_10064dbb8;
    _swift_beginAccess(lVar13 + 0x30,auStack_98,0x21,0);
    FUN_10064967c(FUN_100652de4,puVar5);
    _swift_endAccess(auStack_98);
  }
  uVar10 = local_f8;
  FUN_100004550(0,0);
  _swift_release(local_c8);
  _swift_release(puVar4);
  _swift_release_n(lVar13,2);
  _swift_release(puVar5);
  _swift_bridgeObjectRelease(0);
LAB_10064dbf8:
  _swift_release(uVar2);
  _swift_unknownObjectRelease(local_c0);
  _swift_release(puVar4);
  _swift_release(uVar10);
  return uVar2;
}



/* Address: 0x10064dc3c | FUN_10064dc3c */

undefined1 *
FUN_10064dc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5,code *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(*param_5 + 0x50);
  lVar4 = *(long *)(lVar2 + -8);
  puVar5 = auStack_78 + (-8 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_80 = param_4;
  _swift_getObjectType(param_3);
  FUN_10065febc(puVar5);
  (*param_6)(puVar5,param_2);
  _swift_getObjectType(param_5[2]);
  FUN_100642338();
  lVar3 = *(long *)(*param_5 + 0x60);
  _swift_beginAccess((long)param_5 + lVar3,auStack_78,0x21,0);
  (**(code **)(lVar4 + 0x18))((long)param_5 + lVar3,puVar5,lVar2);
  puVar1 = auStack_78;
  _swift_endAccess(puVar1);
  FUN_10063dc68();
  (**(code **)(lVar4 + 8))(puVar5,lVar2);
  return puVar1;
}



/* Address: 0x10064dd60 | FUN_10064dd60 */

void FUN_10064dd60(void)

{
  FUN_10064f310();
  return;
}



/* Address: 0x10064dd6c | FUN_10064dd6c */

void FUN_10064dd6c(undefined8 param_1,undefined8 param_2)

{
  FUN_10064f3a0(param_1,param_2,FUN_10064dd88,&UNK_100ef04d8,FUN_100652fac);
  return;
}



/* Address: 0x10064dd88 | FUN_10064dd88 */

void FUN_10064dd88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  Result RVar3;
  Optional OVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  __int64 _Var6;
  undefined *puVar7;
  EnumeratedSequence EVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  long alStack_140 [3];
  undefined8 *local_128;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  Iterator local_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined8 local_c0 [3];
  undefined8 local_a8;
  long *local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long lVar5;
  
  uVar18 = *(undefined8 *)(unaff_x20 + 0x50);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_100 = uVar18;
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar3.value);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar22 = *(long *)(CONCAT71(extraout_var_00,OVar4.value) + -8);
  lVar24 = (long)alStack_140 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_108 = *(long *)(lVar5 + -8);
  uVar17 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_128 = (undefined8 *)(lVar24 - uVar17);
  local_120 = (long)local_128 - uVar17;
  _Var6 = Swift::Array<undefined>::get_count();
  if (_Var6 == 0) {
    FUN_1006499b0(0,0,param_1,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
  }
  else {
    puVar7 = &DAT_100fd85f0;
    alStack_140[1] = lVar22;
    alStack_140[2] = CONCAT71(extraout_var_00,OVar4.value);
    FUN_1000f7830(&DAT_100fd85f0,&DAT_100c6aad8);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = param_4;
    *(__int64 *)(puVar7 + 0x20) = _Var6;
    uVar18 = 0;
    local_110 = param_4;
    local_c0[0] = param_2;
    Swift::Array<undefined>::typeMetadataAccessor();
    local_118 = param_3;
    _swift_unknownObjectRetain(param_3);
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar18);
    (extension_Swift)::Swift::Sequence::enumerated();
    EVar8 = Swift::EnumeratedSequence::typeMetadataAccessor();
    Swift::EnumeratedSequence::_makeIterator(EVar8);
    _swift_beginAccess(puVar7 + 0x20,auStack_98,1,0);
    local_f8 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
    Swift::EnumeratedSequence::Iterator::_next(local_f8);
    uVar18 = local_a8;
    plVar14 = local_a0;
    while (plVar14 != (long *)0x0) {
      puVar1 = (ulong *)((long)plVar14 + *(long *)(*plVar14 + 0x60));
      uVar17 = *puVar1;
      uVar15 = puVar1[1];
      uVar10 = uVar17;
      local_a8 = uVar18;
      local_a0 = plVar14;
      _swift_getObjectType();
      pcVar21 = *(code **)(uVar15 + 0x10);
      _swift_unknownObjectRetain(uVar17);
      (*pcVar21)(uVar10,uVar15);
      _swift_unknownObjectRelease(uVar17);
      if ((uVar10 & 1) == 0) {
LAB_10064df70:
        puVar9 = &DAT_100ef0500;
        _swift_allocObject(&DAT_100ef0500,0x40,7);
        *(undefined8 *)(puVar9 + 0x10) = local_100;
        *(undefined8 *)(puVar9 + 0x18) = local_118;
        *(undefined8 *)(puVar9 + 0x20) = local_110;
        *(undefined **)(puVar9 + 0x28) = puVar7;
        *(long *)(puVar9 + 0x30) = param_1;
        *(undefined8 *)(puVar9 + 0x38) = uVar18;
        _swift_unknownObjectRetain();
        _swift_retain(param_1);
        _swift_retain(puVar7);
        FUN_100646e1c(FUN_100652fb8,puVar9);
        _swift_release(puVar9);
        _swift_release(plVar14);
      }
      else {
        lVar19 = *(long *)(*plVar14 + 0x58);
        _swift_beginAccess((undefined *)((long)plVar14 + lVar19),local_c0,0,0);
        lVar16 = alStack_140[2];
        lVar22 = alStack_140[1];
        (**(code **)(alStack_140[1] + 0x10))
                  (lVar24,(undefined *)((long)plVar14 + lVar19),alStack_140[2]);
        lVar2 = local_108;
        lVar11 = lVar24;
        (**(code **)(local_108 + 0x30))(lVar24,1,lVar5);
        lVar19 = local_120;
        if ((int)lVar11 == 1) {
          (**(code **)(lVar22 + 8))(lVar24,lVar16);
          goto LAB_10064df70;
        }
        (**(code **)(lVar2 + 0x20))(local_120,lVar24,lVar5);
        puVar12 = local_128;
        lVar22 = lVar5;
        (**(code **)(lVar2 + 0x10))(local_128,lVar19,lVar5);
        _swift_getEnumCaseMultiPayload(puVar12,lVar5);
        if ((int)puVar12 == 1) {
          uVar18 = *local_128;
          uVar17 = *(ulong *)(param_1 + 0x20);
          lVar24 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          pcVar21 = *(code **)(lVar24 + 0x10);
          _swift_errorRetain(uVar18);
          uVar15 = uVar17;
          lVar16 = lVar24;
          (*pcVar21)(uVar17,lVar24);
          if ((uVar15 & 1) == 0) {
            puVar9 = &DAT_100ef0528;
            _swift_allocObject(&DAT_100ef0528,0x20,7);
            *(long *)(puVar9 + 0x10) = param_1;
            *(undefined8 *)(puVar9 + 0x18) = uVar18;
            pcVar21 = *(code **)(lVar24 + 0x18);
            _swift_errorRetain(uVar18);
            _swift_retain(param_1);
            (*pcVar21)(FUN_10061dfe0,puVar9,uVar17,lVar24);
            _swift_release(puVar7);
            _swift_release(puVar9);
          }
          else {
            uVar23 = uVar18;
            thunk_FUN_1005de8f4(uVar18);
            FUN_1006486f8();
            FUN_100004550(uVar23,lVar16);
            _swift_release(puVar7);
            _swift_bridgeObjectRelease(lVar22);
          }
          _swift_errorRelease(uVar18);
          _swift_release(plVar14);
          _swift_errorRelease(uVar18);
          (**(code **)(local_108 + 8))(local_120,lVar5);
          goto LAB_10064e260;
        }
        _swift_getObjectType(*(undefined8 *)(puVar7 + 0x10));
        FUN_100642338();
        if (SBORROW8(*(long *)(puVar7 + 0x20),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x10064e3b4);
          (*pcVar21)();
        }
        *(long *)(puVar7 + 0x20) = *(long *)(puVar7 + 0x20) + -1;
        _swift_getObjectType(*(undefined8 *)(puVar7 + 0x10));
        FUN_100642338();
        if (*(long *)(puVar7 + 0x20) == 0) {
          uVar17 = *(ulong *)(param_1 + 0x20);
          lVar22 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar15 = uVar17;
          (**(code **)(lVar22 + 0x10))();
          if ((uVar15 & 1) == 0) {
            plVar13 = (long *)&DAT_100ef0550;
            _swift_allocObject(&DAT_100ef0550,0x21,7);
            plVar13[2] = param_1;
            plVar13[3] = 0;
            *(undefined1 *)(plVar13 + 4) = 0;
            pcVar21 = *(code **)(lVar22 + 0x18);
            _swift_retain(param_1);
            (*pcVar21)(FUN_100652fc4,plVar13,uVar17,lVar22);
            _swift_release(plVar14);
            plVar14 = plVar13;
            goto LAB_10064e228;
          }
          _swift_beginAccess(param_1 + 0x10,auStack_d8,1,0);
          uVar18 = 0;
          uVar23 = 0;
          uVar20 = 0;
          if (*(char *)(param_1 + 0x18) == -1) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            _swift_beginAccess(param_1 + 0x30,auStack_f0,1,0);
            uVar18 = *(undefined8 *)(param_1 + 0x30);
            uVar23 = *(undefined8 *)(param_1 + 0x38);
            uVar20 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          FUN_1006486f8(uVar18,uVar23,uVar20);
          FUN_100004550(uVar18,uVar23);
          _swift_release(plVar14);
          _swift_bridgeObjectRelease(uVar20);
        }
        else {
LAB_10064e228:
          _swift_release(plVar14);
        }
        pcVar21 = *(code **)(local_108 + 8);
        (*pcVar21)(local_120,lVar5);
        (*pcVar21)(local_128,lVar5);
      }
      Swift::EnumeratedSequence::Iterator::_next(local_f8);
      uVar18 = local_a8;
      plVar14 = local_a0;
    }
    _swift_release(puVar7);
LAB_10064e260:
    _swift_bridgeObjectRelease(local_80);
  }
  return;
}



/* Address: 0x10064e3b4 | FUN_10064e3b4 */

undefined8 FUN_10064e3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjectType(param_2);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_1006422fc(param_2,uVar1,param_3);
  FUN_10064e430(param_1,param_2);
  return param_2;
}



/* Address: 0x10064e430 | FUN_10064e430 */

void FUN_10064e430(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  __int64 _Var6;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong local_d0;
  undefined8 uStack_c8;
  long local_b8;
  long local_b0;
  undefined8 local_90;
  char local_88;
  long local_78 [3];
  long lVar2;
  
  lVar15 = *(long *)(unaff_x20 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  local_b0 = *(long *)(lVar2 + -8);
  lVar12 = (long)&local_d0 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(param_2 + 0x28);
  uStack_c8 = *(undefined8 *)(param_2 + 0x28);
  uVar16 = *(ulong *)(param_2 + 0x20);
  uVar3 = uVar16;
  local_d0 = uVar16;
  _swift_getObjectType();
  uVar4 = uVar3;
  FUN_1006422fc();
  uVar5 = 0xff;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_100663960(0,uVar5);
  local_b8 = lVar15;
  (**(code **)(*(long *)(lVar15 + -8) + 0x38))(lVar12,1,1,lVar15);
  _Var6 = Swift::Array<undefined>::get_count();
  lVar15 = lVar12;
  FUN_100652fe8(lVar12,_Var6,lVar2);
  (**(code **)(local_b0 + 8))(lVar12,lVar2);
  plVar7 = local_78;
  local_78[0] = lVar15;
  FUN_100663568();
  pcVar13 = *(code **)(lVar14 + 0x10);
  _swift_retain();
  uVar8 = uVar3;
  (*pcVar13)(uVar3,lVar14);
  if ((uVar8 & 1) == 0) {
    puVar9 = &DAT_100ef0578;
    _swift_allocObject(&DAT_100ef0578,0x48,7);
    *(long *)(puVar9 + 0x10) = unaff_x20;
    *(ulong *)(puVar9 + 0x18) = uVar4;
    *(undefined8 *)(puVar9 + 0x20) = param_1;
    *(undefined8 *)(puVar9 + 0x30) = uStack_c8;
    *(ulong *)(puVar9 + 0x28) = local_d0;
    *(code **)(puVar9 + 0x38) = FUN_1006530e0;
    *(long **)(puVar9 + 0x40) = plVar7;
    pcVar13 = *(code **)(lVar14 + 0x18);
    _swift_retain(uVar4);
    _swift_bridgeObjectRetain(param_1);
    _swift_unknownObjectRetain(uVar16);
    _swift_retain(plVar7);
    (*pcVar13)(FUN_1006530ec,puVar9,uVar3,lVar14);
    _swift_release(puVar9);
  }
  else {
    FUN_10064e94c(uVar4,param_1,uVar16,lVar14,FUN_1006530e0,plVar7,local_b8);
  }
  puVar9 = &DAT_100ef05a0;
  _swift_allocObject(&DAT_100ef05a0,0x20,7);
  *(long **)(puVar9 + 0x10) = plVar7;
  *(long *)(puVar9 + 0x18) = param_2;
  puVar10 = &DAT_100ef05c8;
  _swift_allocObject(&DAT_100ef05c8,0x28,7);
  *(code **)(puVar10 + 0x10) = FUN_100653104;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  *(ulong *)(puVar10 + 0x20) = uVar4;
  uVar3 = *(ulong *)(uVar4 + 0x20);
  lVar15 = *(long *)(uVar4 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar15 + 0x10);
  _swift_retain_n(uVar4,3);
  _swift_retain_n(plVar7,2);
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar9,2);
  uVar8 = uVar3;
  (*pcVar13)(uVar3,lVar15);
  if ((uVar8 & 1) == 0) {
    _swift_release(param_2);
    _swift_release(plVar7);
    puVar11 = &DAT_100ef05f0;
    _swift_allocObject(&DAT_100ef05f0,0x28,7);
    *(ulong *)(puVar11 + 0x10) = uVar4;
    *(code **)(puVar11 + 0x18) = FUN_10065310c;
    *(undefined **)(puVar11 + 0x20) = puVar10;
    pcVar13 = *(code **)(lVar15 + 0x18);
    _swift_retain(uVar4);
    _swift_retain(puVar10);
    (*pcVar13)(FUN_100653138,puVar11,uVar3,lVar15);
    _swift_release(puVar11);
    _swift_release_n(uVar4,2);
    _swift_release_n(puVar9,2);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(uVar4 + 0x10,local_78,0,0);
    if (*(char *)(uVar4 + 0x18) == -1) {
      _swift_release(param_2);
      _swift_release(plVar7);
      _swift_beginAccess(uVar4 + 0x30,&local_90,0x21,0);
      FUN_10064967c(FUN_10065310c,puVar10);
      _swift_endAccess(&local_90);
    }
    else {
      local_90 = *(undefined8 *)(uVar4 + 0x10);
      local_88 = *(char *)(uVar4 + 0x18);
      FUN_100308524();
      FUN_10064ed50(&local_90,plVar7,param_2);
      _swift_release(param_2);
      _swift_release(plVar7);
      FUN_1002ec258(local_90,local_88);
    }
    FUN_100004550(0,0);
    _swift_release_n(uVar4,2);
    _swift_release_n(puVar9,2);
    _swift_release(puVar10);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(uVar4);
  _swift_release_n(plVar7,2);
  return;
}



/* Address: 0x10064e848 | FUN_10064e848 */

void FUN_10064e848(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(*param_3 + 0x50);
  lVar2 = *(long *)(lVar3 + 0x10);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = auStack_70 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(lVar2 + 0x10);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x10))(puVar4,param_2,lVar1);
  (**(code **)(lVar6 + 0x38))(puVar4,0,1,lVar1);
  _swift_beginAccess(param_3 + 2,auStack_68,0x21,0);
  Swift::Array<undefined>::_makeMutableAndUnique(lVar3);
  lVar1 = param_3[2];
  thunk_FUN_100662648(param_1,lVar1,lVar2);
  FUN_1006622e0(lVar1,lVar2);
  (**(code **)(lVar5 + 0x28))(lVar1 + *(long *)(lVar5 + 0x48) * param_1,puVar4,lVar2);
  FUN_10066236c(param_3 + 2,lVar2);
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x10064e94c | FUN_10064e94c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010064ea30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10064e94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Result RVar7;
  Optional OVar8;
  undefined7 extraout_var;
  undefined8 uVar10;
  __int64 _Var11;
  undefined *puVar12;
  EnumeratedSequence EVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  long unaff_x20;
  code *pcVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  Iterator local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  long lVar9;
  
  local_c8 = param_5;
  local_c0 = param_6;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar7 = Swift::Result::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)param_1 >> 8);
  lVar9 = CONCAT71(extraout_var,RVar7.value);
  OVar8 = Swift::Optional::typeMetadataAccessor();
  local_f0 = CONCAT71(extraout_var,OVar8.value);
  local_f8 = *(long *)(local_f0 + -8);
  puVar21 = auStack_110 + -(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(lVar9 + -8);
  uVar18 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = (long)puVar21 - uVar18;
  local_100 = lVar20 - uVar18;
  uVar10 = 0;
  local_b8 = param_7;
  FUN_1006529e0(0,param_7);
  _Var11 = Swift::Array<undefined>::get_count(uVar10,uVar10);
  if (_Var11 == 0) {
    FUN_1006499b0(0,0,param_1,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
  }
  else {
    puVar12 = &DAT_100fd85f0;
    local_108 = lVar20;
    FUN_1000f7830(&DAT_100fd85f0,&DAT_100c6aad8);
    _swift_allocObject();
    *(undefined8 *)(puVar12 + 0x10) = param_3;
    *(undefined8 *)(puVar12 + 0x18) = param_4;
    *(__int64 *)(puVar12 + 0x20) = _Var11;
    uVar10 = 0;
    local_d8 = param_4;
    local_90 = param_2;
    Swift::Array<undefined>::typeMetadataAccessor();
    local_e0 = param_3;
    _swift_unknownObjectRetain(param_3);
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar10);
    (extension_Swift)::Swift::Sequence::enumerated();
    EVar13 = Swift::EnumeratedSequence::typeMetadataAccessor();
    Swift::EnumeratedSequence::_makeIterator(EVar13);
    local_d0 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
    Swift::EnumeratedSequence::Iterator::_next(local_d0);
    uVar10 = local_90;
    plVar3 = local_88;
    while (local_90 = uVar10, plVar3 != (long *)0x0) {
      puVar1 = (ulong *)((long)plVar3 + *(long *)(*plVar3 + 0x60));
      uVar18 = *puVar1;
      uVar2 = puVar1[1];
      uVar16 = uVar18;
      local_88 = plVar3;
      _swift_getObjectType();
      pcVar19 = *(code **)(uVar2 + 0x10);
      _swift_unknownObjectRetain(uVar18);
      (*pcVar19)(uVar16,uVar2);
      _swift_unknownObjectRelease(uVar18);
      if ((uVar16 & 1) == 0) {
LAB_10064eb14:
        uVar14 = local_e0;
        FUN_100647054(local_e0,local_d8);
        puVar15 = &DAT_100ef0618;
        _swift_allocObject(&DAT_100ef0618,0x48,7);
        *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(unaff_x20 + 0x50);
        *(undefined8 *)(puVar15 + 0x18) = local_b8;
        *(undefined8 *)(puVar15 + 0x20) = local_c8;
        *(undefined8 *)(puVar15 + 0x28) = local_c0;
        *(undefined **)(puVar15 + 0x30) = puVar12;
        *(undefined8 *)(puVar15 + 0x38) = param_1;
        *(undefined8 *)(puVar15 + 0x40) = uVar10;
        _swift_retain();
        _swift_retain(puVar12);
        _swift_retain(param_1);
        FUN_100646e1c(FUN_100653158,puVar15);
        _swift_release(uVar14);
        _swift_release(puVar15);
        _swift_release(plVar3);
      }
      else {
        lVar20 = *(long *)(*plVar3 + 0x58);
        _swift_beginAccess((long)plVar3 + lVar20,auStack_a8,0,0);
        lVar5 = local_f0;
        lVar4 = local_f8;
        (**(code **)(local_f8 + 0x10))(puVar21,(long)plVar3 + lVar20,local_f0);
        lVar6 = local_e8;
        puVar17 = puVar21;
        (**(code **)(local_e8 + 0x30))(puVar21,1,lVar9);
        lVar20 = local_100;
        if ((int)puVar17 == 1) {
          (**(code **)(lVar4 + 8))(puVar21,lVar5);
          goto LAB_10064eb14;
        }
        pcVar19 = *(code **)(lVar6 + 0x20);
        (*pcVar19)(local_100,puVar21,lVar9);
        FUN_10064ef30(uVar10,lVar20,local_c8,local_c0,puVar12,param_1,
                      *(undefined8 *)(unaff_x20 + 0x50),local_b8);
        _swift_release(plVar3);
        lVar4 = local_108;
        (*pcVar19)(local_108,lVar20,lVar9);
        lVar20 = lVar4;
        _swift_getEnumCaseMultiPayload(lVar4,lVar9);
        if ((int)lVar20 == 1) {
          _swift_release(puVar12);
          _swift_bridgeObjectRelease(local_80);
          (**(code **)(lVar6 + 8))(lVar4,lVar9);
          return;
        }
        (**(code **)(lVar6 + 8))(lVar4,lVar9);
      }
      Swift::EnumeratedSequence::Iterator::_next(local_d0);
      uVar10 = local_90;
      plVar3 = local_88;
    }
    _swift_release(puVar12);
    _swift_bridgeObjectRelease(local_80);
  }
  return;
}



/* Address: 0x10064ed50 | FUN_10064ed50 */

void FUN_10064ed50(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *local_80 [2];
  undefined8 local_70;
  long local_60;
  undefined1 auStack_58 [24];
  
  lVar5 = *param_2;
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar4 = *param_1;
    uVar1 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    FUN_100646f54(uVar4,param_3,uVar1);
    return;
  }
  _swift_beginAccess(param_2 + 2,auStack_58,0,0);
  lVar6 = param_2[2];
  lVar5 = *(long *)(lVar5 + 0x50);
  uVar1 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x10);
  local_70 = uVar1;
  local_60 = lVar6;
  _swift_bridgeObjectRetain(lVar6);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,lVar5);
  pcVar3 = FUN_100653da8;
  FUN_1005f45bc(FUN_100653da8,local_80,lVar5,uVar1,PTR___type_metadata_for_Swift_Never_100eadc38,
                puVar2,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
               );
  _swift_bridgeObjectRelease(lVar6);
  uVar1 = 0;
  local_80[0] = pcVar3;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_100646e88(local_80,param_3,uVar1);
  _swift_bridgeObjectRelease(pcVar3);
  return;
}



/* Address: 0x10064ee80 | FUN_10064ee80 */

void FUN_10064ee80(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar5 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar5,param_2,CONCAT71(extraout_var,OVar2.value));
  lVar4 = *(long *)(param_3 + -8);
  puVar3 = puVar5;
  (**(code **)(lVar4 + 0x30))(puVar5,1,param_3);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar4 + 0x20))(param_1,puVar5,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064ef30);
  (*pcVar1)();
}



/* Address: 0x10064ef30 | FUN_10064ef30 */

void FUN_10064ef30(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8)

{
  Result RVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  code *local_80;
  undefined1 auStack_78 [24];
  long lVar2;
  
  lVar9 = *(long *)(param_8 + -8);
  puVar12 = auStack_78 + (-8 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_80 = param_3;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  puVar13 = (undefined8 *)
            (puVar12 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar8 = lVar2;
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar13,param_2,lVar2);
  puVar3 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar2);
  if ((int)puVar3 == 1) {
    uVar11 = *puVar13;
    uVar4 = *(ulong *)(param_6 + 0x20);
    lVar2 = *(long *)(param_6 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar9 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar7 = &DAT_100ef0cf0;
      _swift_allocObject(&DAT_100ef0cf0,0x20,7);
      *(long *)(puVar7 + 0x10) = param_6;
      *(undefined8 *)(puVar7 + 0x18) = uVar11;
      pcVar10 = *(code **)(lVar2 + 0x18);
      _swift_retain(param_6);
      _swift_errorRetain(uVar11);
      (*pcVar10)(thunk_FUN_10061dfe0,puVar7,uVar4,lVar2);
      _swift_errorRelease(uVar11);
      _swift_release(puVar7);
    }
    else {
      uVar6 = uVar11;
      thunk_FUN_1005de8f4(uVar11);
      FUN_1006486f8();
      _swift_errorRelease(uVar11);
      FUN_100004550(uVar6,lVar9);
      _swift_bridgeObjectRelease(lVar8);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))(puVar12,puVar13,param_8);
    (*local_80)(param_1,puVar12);
    uVar11 = *(undefined8 *)(param_5 + 0x10);
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    _swift_getObjectType(uVar11);
    FUN_100642338();
    _swift_beginAccess(param_5 + 0x20,auStack_78,1,0);
    if (SBORROW8(*(long *)(param_5 + 0x20),1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10064f190);
      (*pcVar10)();
    }
    *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
    FUN_100642338(uVar11,uVar6);
    if (*(long *)(param_5 + 0x20) == 0) {
      FUN_1006499b0(0,0,param_6,thunk_FUN_100630328,&DAT_100ef0d68,thunk_FUN_100652fc4);
    }
    (**(code **)(lVar9 + 8))(puVar12,param_8);
  }
  return;
}



/* Address: 0x10064f190 | FUN_10064f190 */

void FUN_10064f190(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  Result RVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_70;
  undefined1 local_68;
  
  local_80 = param_7;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  FUN_10062f364(&local_70,FUN_100004520,auStack_90,RVar1.value,
                PTR___type_metadata_for____100eae0c8 + 8);
  _swift_getObjectType();
  uVar2 = param_2;
  (**(code **)(param_3 + 0x10))();
  if ((uVar2 & 1) == 0) {
    puVar3 = &DAT_100ef0d18;
    _swift_allocObject(&DAT_100ef0d18,0x31,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    *(undefined8 *)(puVar3 + 0x28) = local_70;
    puVar3[0x30] = local_68;
    pcVar4 = *(code **)(param_3 + 0x18);
    _swift_retain(param_4);
    _swift_retain(param_5);
    FUN_100308524(local_70,local_68);
    (*pcVar4)(FUN_100653dfc,puVar3,param_2,param_3);
    FUN_1002ec258(local_70,local_68);
    _swift_release(puVar3);
  }
  else {
    FUN_1006533ac(local_70,local_68,param_4,param_5);
    FUN_1002ec258(local_70,local_68);
  }
  return;
}



/* Address: 0x10064f304 | FUN_10064f304 */

void FUN_10064f304(void)

{
  FUN_10064f310();
  return;
}



/* Address: 0x10064f310 | FUN_10064f310 */

undefined8 FUN_10064f310(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  _swift_getObjectType(param_2);
  FUN_1006422fc();
  (*param_4)(param_1,param_2);
  return param_2;
}



/* Address: 0x10064f384 | FUN_10064f384 */

void FUN_10064f384(undefined8 param_1,undefined8 param_2)

{
  FUN_10064f3a0(param_1,param_2,FUN_10064f4a4,&DAT_100ef0640,FUN_1006531cc);
  return;
}



/* Address: 0x10064f3a0 | FUN_10064f3a0 */

void FUN_10064f3a0(undefined8 param_1,long param_2,code *param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(ulong *)(param_2 + 0x20);
  uVar1 = uVar5;
  _swift_getObjectType();
  uVar2 = uVar1;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar2 & 1) != 0) {
    (*param_3)(param_2,param_1,uVar5,lVar3);
    return;
  }
  _swift_allocObject(param_4,0x38,7);
  *(undefined8 *)(param_4 + 0x10) = unaff_x20;
  *(long *)(param_4 + 0x18) = param_2;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  *(undefined8 *)(param_4 + 0x30) = uVar6;
  *(ulong *)(param_4 + 0x28) = uVar5;
  pcVar4 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_2);
  _swift_bridgeObjectRetain(param_1);
  _swift_unknownObjectRetain(uVar5);
  (*pcVar4)(param_5,param_4,uVar1,lVar3);
  _swift_release(param_4);
  return;
}


