/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10064311c | FUN_10064311c */

void FUN_10064311c(void)

{
  long *unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60)));
  FUN_100642338();
  _swift_retain();
  return;
}



/* Address: 0x100643164 | FUN_100643164 */

void FUN_100643164(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  _swift_getObjectType(param_3);
  (**(code **)(param_4 + 0xa0))(param_1,param_2,param_5,param_3,param_4);
  return;
}



/* Address: 0x1006431c4 | FUN_1006431c4 */

void FUN_1006431c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  uVar1 = in_x7;
  _swift_getObjectType();
  FUN_1000f4a44();
  FUN_1006422fc(uVar1,in_stack_00000008,in_stack_00000000);
  puVar2 = &DAT_100eefb80;
  _swift_allocObject(&DAT_100eefb80,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000008;
  *(undefined8 *)(puVar2 + 0x18) = in_x5;
  *(undefined8 *)(puVar2 + 0x20) = in_x6;
  uVar3 = 0;
  FUN_1006529e0(0,in_stack_00000008);
  _swift_retain(in_x6);
  _swift_getObjectType(in_x7);
  pcVar5 = FUN_100645c84;
  puVar6 = puVar2;
  (**(code **)(in_stack_00000000 + 0xa8))();
  _swift_release(puVar2);
  uVar4 = param_1;
  FUN_100004520(param_1,pcVar5,puVar6,uVar3);
  puVar2 = &DAT_100eefba8;
  _swift_allocObject(&DAT_100eefba8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000008;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  _swift_retain(uVar4);
  _swift_retain(uVar1);
  FUN_100646e1c(FUN_100645cd4,puVar2);
  _swift_release(uVar4);
  _swift_release(puVar2);
  puVar2 = &DAT_100eefbd0;
  _swift_allocObject(&DAT_100eefbd0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = in_stack_00000008;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(code **)(puVar2 + 0x20) = pcVar5;
  *(undefined **)(puVar2 + 0x28) = puVar6;
  FUN_100004520(uVar1,FUN_100645d08,puVar2,in_stack_00000008);
  return;
}



/* Address: 0x100643348 | FUN_100643348 */

void FUN_100643348(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100646f54();
    return;
  }
  FUN_100648434(*param_1);
  return;
}



/* Address: 0x100643364 | FUN_100643364 */

void FUN_100643364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_getObjectType(param_4);
  (**(code **)(param_5 + 0xb8))(&local_80,param_2,param_3,param_6,param_7,param_4,param_5);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = CONCAT71(local_67,uStack_68);
    param_1[2] = uStack_70;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_5f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_60,local_67);
  }
  return;
}



/* Address: 0x100643404 | FUN_100643404 */

void FUN_100643404(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  _swift_getObjectType(param_4);
  (**(code **)(param_5 + 0xc0))(&local_80,param_2,param_3,param_6,param_7,param_4,param_5);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = CONCAT71(local_67,uStack_68);
    param_1[2] = uStack_70;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_5f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_60,local_67);
  }
  return;
}



/* Address: 0x1006434a4 | FUN_1006434a4 */

void FUN_1006434a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  _swift_getObjectType(param_2);
  FUN_100642338();
  (**(code **)(param_3 + 0x90))(param_1,param_2,param_3);
  return;
}



/* Address: 0x1006434f8 | FUN_1006434f8 */

void FUN_1006434f8(void)

{
  FUN_100643570();
  return;
}



/* Address: 0x100643504 | FUN_100643504 */

undefined8
FUN_100643504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType(param_2);
  FUN_1006422fc();
  FUN_100646f54(param_1,param_2,param_4);
  return param_2;
}



/* Address: 0x100643564 | FUN_100643564 */

void FUN_100643564(void)

{
  FUN_100643570();
  return;
}



/* Address: 0x100643570 | FUN_100643570 */

undefined8
FUN_100643570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             code *param_5)

{
  _swift_getObjectType(param_2);
  FUN_1006422fc();
  _swift_retain();
  (*param_5)(param_1,param_2,param_4);
  _swift_release(param_2);
  return param_2;
}



/* Address: 0x1006435e8 | FUN_1006435e8 */

undefined1 *
FUN_1006435e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  Result RVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,RVar2.value) + -8);
  puVar5 = auStack_90 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_5;
  uStack_78 = param_1;
  local_70 = param_2;
  FUN_1006414f4(puVar5,FUN_100645d48,auStack_90,param_5,puVar3,puVar1);
  puVar4 = puVar5;
  FUN_100643564(puVar5,param_3,param_4,param_5);
  (**(code **)(lVar6 + 8))(puVar5,CONCAT71(extraout_var,RVar2.value));
  return puVar4;
}



/* Address: 0x1006436e4 | FUN_1006436e4 */

void FUN_1006436e4(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100643708 | FUN_100643708 */

void FUN_100643708(void)

{
  FUN_100642338();
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100643734 | FUN_100643734 */

void FUN_100643734(void)

{
  FUN_100643b78();
  return;
}



/* Address: 0x100643748 | FUN_100643748 */

code * FUN_100643748(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

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
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  code *pcStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar4;
  undefined7 extraout_var_00;
  
  lVar9 = *param_1;
  local_a0 = param_3;
  pcStack_98 = param_2;
  local_80 = param_4;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_90 = param_5;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  local_a8 = *(long *)(lVar4 + -8);
  pcVar10 = (code *)(auStack_b0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar12 = *(long *)(lVar9 + 0x50);
  local_88 = *(long *)(lVar12 + -8);
  pcVar14 = pcVar10 + -(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar11 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  pcVar15 = pcVar14 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar9 + 0x58);
  _swift_beginAccess((long)param_1 + lVar9,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(pcVar15,(long)param_1 + lVar9,CONCAT71(extraout_var_01,OVar3.value));
  pcVar8 = pcVar15;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(pcVar15,1,lVar5);
  if ((int)pcVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100643a38);
    (*pcVar8)();
  }
  pcVar8 = pcVar15;
  _swift_getEnumCaseMultiPayload(pcVar15,lVar5);
  lVar5 = local_88;
  if ((int)pcVar8 == 1) {
    uVar13 = *(undefined8 *)pcVar15;
    *(undefined8 *)pcVar10 = uVar13;
    _swift_storeEnumTagMultiPayload(pcVar10,lVar4,1);
    _swift_errorRetain(uVar13);
    pcVar15 = pcVar10;
    FUN_100648528(pcVar10,local_80,local_90);
    _swift_errorRelease(uVar13);
    pcVar8 = *(code **)(local_a8 + 8);
    pcVar14 = pcVar10;
    lVar12 = lVar4;
  }
  else {
    (**(code **)(local_88 + 0x20))(pcVar14,pcVar15,lVar12);
    pcVar8 = pcVar14;
    (*pcStack_98)();
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
      (**(code **)(lVar5 + 8))(pcVar14,lVar12);
      return (code *)0x0;
    }
    puVar7 = &DAT_100eefef8;
    _swift_allocObject(&DAT_100eefef8,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar12;
    *(undefined8 *)(puVar7 + 0x18) = local_80;
    *(code **)(puVar7 + 0x20) = pcVar8;
    _swift_retain();
    _swift_retain(pcVar8);
    pcVar15 = FUN_10064600c;
    FUN_100648548(FUN_10064600c,puVar7);
    _swift_release(pcVar8);
    _swift_release(puVar7);
    pcVar8 = *(code **)(lVar5 + 8);
  }
  (*pcVar8)(pcVar14,lVar12);
  return pcVar15;
}



/* Address: 0x100643a38 | FUN_100643a38 */

undefined1 * FUN_100643a38(undefined8 param_1,long *param_2)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  long lVar4;
  
  lVar8 = *param_2;
  uVar6 = *(undefined8 *)(lVar8 + 0x50);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  puVar7 = auStack_70 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar8 + 0x58);
  _swift_beginAccess((long)param_2 + lVar8,auStack_68,0,0);
  (**(code **)(lVar9 + 0x10))(puVar7,(long)param_2 + lVar8,CONCAT71(extraout_var_00,OVar3.value));
  lVar8 = *(long *)(lVar4 + -8);
  puVar5 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 != 1) {
    puVar5 = puVar7;
    FUN_100648528(puVar7,param_1,uVar6);
    (**(code **)(lVar8 + 8))(puVar7,lVar4);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100643b64);
  (*pcVar1)();
}



/* Address: 0x100643b64 | FUN_100643b64 */

void FUN_100643b64(void)

{
  FUN_100643b78();
  return;
}



/* Address: 0x100643b78 | FUN_100643b78 */

undefined8
FUN_100643b78(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x60));
  uVar2 = *puVar1;
  FUN_100652900(uVar2,puVar1[1],param_5);
  _swift_allocObject(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = param_5;
  *(long **)(param_6 + 0x18) = param_3;
  *(undefined8 *)(param_6 + 0x20) = param_1;
  *(undefined8 *)(param_6 + 0x28) = param_2;
  *(undefined8 *)(param_6 + 0x30) = uVar2;
  _swift_retain(param_3);
  _swift_retain(param_2);
  _swift_retain(uVar2);
  FUN_1006486b4(param_7,param_6);
  _swift_release(param_6);
  return uVar2;
}



/* Address: 0x100643c30 | FUN_100643c30 */

/* WARNING: Removing unreachable block (ram,0x000100643e34) */

undefined8 *
FUN_100643c30(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5)

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
  undefined8 *puVar12;
  long lVar13;
  long local_c0 [2];
  code *pcStack_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined1 auStack_78 [24];
  undefined7 extraout_var_00;
  
  lVar7 = *param_1;
  local_c0[1] = param_3;
  pcStack_b0 = param_2;
  local_98 = param_4;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  local_88 = CONCAT71(extraout_var,RVar1.value);
  local_90 = *(long *)(local_88 + -8);
  puVar8 = (undefined8 *)((long)local_c0 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  local_c0[0] = *(long *)(param_5 + -8);
  local_a0 = (long)puVar8 - (*(long *)(local_c0[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(lVar7 + 0x50);
  local_a8 = *(long *)(lVar10 + -8);
  puVar12 = (undefined8 *)(local_a0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var_00,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar13 = *(long *)(CONCAT71(extraout_var_01,OVar2.value) + -8);
  puVar9 = (undefined8 *)((long)puVar12 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = *(long *)(lVar7 + 0x58);
  _swift_beginAccess((long)param_1 + lVar7,auStack_78,0,0);
  (**(code **)(lVar13 + 0x10))(puVar9,(long)param_1 + lVar7,CONCAT71(extraout_var_01,OVar2.value));
  puVar4 = puVar9;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar9,1,lVar3);
  if ((int)puVar4 == 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100643f3c);
    (*pcVar6)();
  }
  puVar4 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  lVar3 = local_a8;
  puVar5 = puVar8;
  if ((int)puVar4 == 1) {
    uVar11 = *puVar9;
    *puVar8 = uVar11;
    lVar10 = local_88;
    _swift_storeEnumTagMultiPayload(puVar8,local_88,1);
    _swift_errorRetain(uVar11);
    FUN_100648528(puVar8,local_98,param_5);
    _swift_errorRelease(uVar11);
    pcVar6 = *(code **)(local_90 + 8);
    puVar12 = puVar8;
  }
  else {
    (**(code **)(local_a8 + 0x20))(puVar12,puVar9,lVar10);
    lVar13 = local_a0;
    (*pcStack_b0)(local_a0,puVar12);
    lVar7 = local_c0[0];
    (**(code **)(local_c0[0] + 0x10))(puVar8,lVar13,param_5);
    lVar13 = local_88;
    _swift_storeEnumTagMultiPayload(puVar8,local_88,0);
    FUN_100648528(puVar8,local_98,param_5);
    (**(code **)(local_90 + 8))(puVar8,lVar13);
    (**(code **)(lVar7 + 8))(local_a0,param_5);
    pcVar6 = *(code **)(lVar3 + 8);
  }
  (*pcVar6)(puVar12,lVar10);
  return puVar5;
}



/* Address: 0x100643f3c | FUN_100643f3c */

void FUN_100643f3c(void)

{
  FUN_10064509c();
  return;
}



/* Address: 0x100643f50 | FUN_100643f50 */

/* WARNING: Removing unreachable block (ram,0x0001006440ac) */

long FUN_100643f50(long *param_1,undefined8 param_2,code *param_3,code *param_4)

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
  lVar7 = *(long *)(lVar12 + 0x50);
  local_b0[0] = param_4;
  local_b0[1] = param_3;
  local_90 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  lVar11 = *(long *)(lVar3 + -8);
  lVar10 = (long)local_b0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = *(long *)(lVar7 + -8);
  uVar5 = *(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a0 = lVar10 - uVar5;
  lVar9 = local_a0 - uVar5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  puVar14 = (undefined8 *)(lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar12 = *(long *)(lVar12 + 0x58);
  _swift_beginAccess((long)param_1 + lVar12,auStack_78,0,0);
  (**(code **)(lVar8 + 0x10))(puVar14,(long)param_1 + lVar12,CONCAT71(extraout_var_00,OVar2.value));
  puVar4 = puVar14;
  local_88 = lVar11;
  (**(code **)(lVar11 + 0x30))(puVar14,1,lVar3);
  if ((int)puVar4 != 1) {
    puVar4 = puVar14;
    _swift_getEnumCaseMultiPayload(puVar14,lVar3);
    lVar11 = local_98;
    lVar8 = local_a0;
    lVar12 = lVar10;
    if ((int)puVar4 == 1) {
      uVar13 = *puVar14;
      (*local_b0[1])(local_a0,uVar13);
      lVar9 = local_98;
      (**(code **)(local_98 + 0x10))(lVar10,lVar8,lVar7);
      _swift_storeEnumTagMultiPayload(lVar10,lVar3,0);
      FUN_100648528(lVar10,local_90,lVar7);
      _swift_errorRelease(uVar13);
      (**(code **)(local_88 + 8))(lVar10,lVar3);
      pcVar6 = *(code **)(lVar9 + 8);
      lVar9 = lVar8;
    }
    else {
      (**(code **)(local_98 + 0x20))(lVar9,puVar14,lVar7);
      (**(code **)(lVar11 + 0x10))(lVar10,lVar9,lVar7);
      _swift_storeEnumTagMultiPayload(lVar10,lVar3,0);
      FUN_100648528(lVar10,local_90,lVar7);
      (**(code **)(local_88 + 8))(lVar10,lVar3);
      pcVar6 = *(code **)(lVar11 + 8);
    }
    (*pcVar6)(lVar9,lVar7);
    return lVar12;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100644220);
  (*pcVar6)();
}



/* Address: 0x100644220 | FUN_100644220 */

undefined8
FUN_100644220(long *param_1,undefined8 param_2,long *param_3,undefined *param_4,undefined *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  undefined8 uStack_48;
  
  if ((param_5 == param_4) && (puVar5 = PTR___type_metadata_for____100eae0c8 + 8, param_5 == puVar5)
     ) {
    uVar2 = 0x4000001;
    local_50 = param_1;
    uStack_48 = param_2;
    _swift_getFunctionTypeMetadata1(0x4000001,param_4,puVar5);
    _swift_retain(param_2);
    _swift_dynamicCast(&local_60,&local_50,uVar2,uVar2,7);
    puVar3 = &DAT_100eefc98;
    _swift_allocObject(&DAT_100eefc98,0x30,7);
    *(undefined **)(puVar3 + 0x10) = param_4;
    *(undefined **)(puVar3 + 0x18) = puVar5;
    *(undefined8 *)(puVar3 + 0x28) = uStack_58;
    *(undefined8 *)(puVar3 + 0x20) = local_60;
    FUN_1006443bc(FUN_1005e664c,puVar3,param_3);
    _swift_release(puVar3);
    uVar2 = 0;
    local_50 = param_3;
    FUN_100645e50(0,param_4);
    uVar4 = 0;
    FUN_100645e50(0,puVar5);
    _swift_retain(param_3);
    _swift_dynamicCast(&local_60,&local_50,uVar2,uVar4,7);
    return local_60;
  }
  puVar1 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x60));
  uVar2 = *puVar1;
  FUN_100652900(uVar2,puVar1[1],param_5);
  puVar5 = &DAT_100eefc70;
  _swift_allocObject(&DAT_100eefc70,0x38,7);
  *(undefined **)(puVar5 + 0x10) = param_5;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  *(long **)(puVar5 + 0x20) = param_3;
  *(long **)(puVar5 + 0x28) = param_1;
  *(undefined8 *)(puVar5 + 0x30) = param_2;
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(uVar2);
  FUN_1006486b4(FUN_100645e0c,puVar5);
  _swift_release(puVar5);
  return uVar2;
}



/* Address: 0x1006443bc | FUN_1006443bc */

void FUN_1006443bc(void)

{
  FUN_100645508();
  return;
}



/* Address: 0x1006443d0 | FUN_1006443d0 */

long FUN_1006443d0(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
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
  
  lVar5 = *param_2;
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_1;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  lVar8 = (long)&local_90 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var_01,RVar2.value) + -8);
  lVar9 = lVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(lVar5 + 0x58);
  _swift_beginAccess((long)param_2 + lVar5,auStack_78,0,0);
  (**(code **)(lVar6 + 0x10))(lVar8,(long)param_2 + lVar5,CONCAT71(extraout_var_00,OVar3.value));
  lVar6 = *(long *)(lVar4 + -8);
  lVar5 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,lVar4);
  if ((int)lVar5 != 1) {
    FUN_10062f364(lVar9,local_90,uStack_88,lVar4,param_5);
    (**(code **)(lVar6 + 8))(lVar8,lVar4);
    lVar5 = lVar9;
    FUN_100648528(lVar9,local_80,param_5);
    (**(code **)(lVar7 + 8))(lVar9,CONCAT71(extraout_var_01,RVar2.value));
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100644570);
  (*pcVar1)();
}



/* Address: 0x100644570 | FUN_100644570 */

void FUN_100644570(void)

{
  FUN_10064509c();
  return;
}



/* Address: 0x100644584 | FUN_100644584 */

code * FUN_100644584(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

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
  lVar13 = *(long *)(lVar10 + 0x50);
  local_98 = param_4;
  pcStack_90 = param_3;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,RVar4.value);
  lVar16 = *(long *)(lVar6 + -8);
  pcVar11 = (code *)(auStack_a0 + -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_88 = *(long *)(lVar13 + -8);
  lVar14 = (long)pcVar11 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar15 = *(long *)(CONCAT71(extraout_var_00,OVar5.value) + -8);
  plVar17 = (long *)(lVar14 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = *(long *)(lVar10 + 0x58);
  _swift_beginAccess((long)param_1 + lVar10,auStack_78,0,0);
  (**(code **)(lVar15 + 0x10))(plVar17,(long)param_1 + lVar10,CONCAT71(extraout_var_00,OVar5.value))
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
        puVar9 = &DAT_100eefed0;
        _swift_allocObject(&DAT_100eefed0,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = local_80;
        *(long **)(puVar9 + 0x18) = plVar7;
        _swift_retain();
        _swift_retain(plVar7);
        pcVar12 = FUN_100646004;
        FUN_100648548(FUN_100646004,puVar9);
        _swift_release(plVar7);
        _swift_release(puVar9);
        _swift_errorRelease(plVar17);
      }
    }
    else {
      (**(code **)(local_88 + 0x20))(lVar14,plVar17,lVar13);
      (**(code **)(lVar10 + 0x10))(pcVar11,lVar14,lVar13);
      _swift_storeEnumTagMultiPayload(pcVar11,lVar6,0);
      pcVar12 = pcVar11;
      FUN_100648528(pcVar11,local_80,lVar13);
      (**(code **)(lVar16 + 8))(pcVar11,lVar6);
      (**(code **)(lVar10 + 8))(lVar14,lVar13);
    }
    return pcVar12;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x100644844);
  (*pcVar11)();
}



/* Address: 0x100644844 | FUN_100644844 */

void FUN_100644844(void)

{
  FUN_10064509c();
  return;
}



/* Address: 0x100644858 | FUN_100644858 */

code * FUN_100644858(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  Result RVar3;
  Optional OVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  code *pcStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar5;
  
  lVar14 = *param_1;
  lVar10 = *(long *)(lVar14 + 0x50);
  local_98 = param_4;
  pcStack_90 = param_3;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar3 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar3.value);
  lVar11 = *(long *)(lVar5 + -8);
  pcVar2 = (code *)(auStack_a0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_88 = *(long *)(lVar10 + -8);
  lVar13 = (long)pcVar2 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar15 = *(long *)(CONCAT71(extraout_var_00,OVar4.value) + -8);
  puVar16 = (undefined8 *)(lVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar14 = *(long *)(lVar14 + 0x58);
  _swift_beginAccess((long)param_1 + lVar14,auStack_78,0,0);
  (**(code **)(lVar15 + 0x10))(puVar16,(long)param_1 + lVar14,CONCAT71(extraout_var_00,OVar4.value))
  ;
  puVar6 = puVar16;
  (**(code **)(lVar11 + 0x30))(puVar16,1,lVar5);
  if ((int)puVar6 != 1) {
    puVar6 = puVar16;
    _swift_getEnumCaseMultiPayload(puVar16,lVar5);
    lVar14 = local_88;
    if ((int)puVar6 == 1) {
      uVar12 = *puVar16;
      uVar7 = uVar12;
      (*pcStack_90)();
      puVar8 = &DAT_100eefea8;
      _swift_allocObject(&DAT_100eefea8,0x28,7);
      uVar1 = local_80;
      *(long *)(puVar8 + 0x10) = lVar10;
      *(undefined8 *)(puVar8 + 0x18) = local_80;
      *(undefined8 *)(puVar8 + 0x20) = uVar7;
      _swift_retain_n(uVar7,2);
      _swift_retain(uVar1);
      pcVar9 = FUN_100645fcc;
      FUN_100648548(FUN_100645fcc,puVar8);
      _swift_release_n(uVar7,2);
      _swift_release(puVar8);
      _swift_errorRelease(uVar12);
    }
    else {
      (**(code **)(local_88 + 0x20))(lVar13,puVar16,lVar10);
      (**(code **)(lVar14 + 0x10))(pcVar2,lVar13,lVar10);
      _swift_storeEnumTagMultiPayload(pcVar2,lVar5,0);
      pcVar9 = pcVar2;
      FUN_100648528(pcVar2,local_80,lVar10);
      (**(code **)(lVar11 + 8))(pcVar2,lVar5);
      (**(code **)(lVar14 + 8))(lVar13,lVar10);
    }
    return pcVar9;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100644ab4);
  (*pcVar2)();
}



/* Address: 0x100644ab4 | FUN_100644ab4 */

undefined1 * FUN_100644ab4(undefined8 param_1,long *param_2,undefined8 param_3)

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
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(*param_2 + 0x58);
  _swift_beginAccess((long)param_2 + lVar8,auStack_68,0,0);
  (**(code **)(lVar7 + 0x10))(puVar6,(long)param_2 + lVar8,CONCAT71(extraout_var_00,OVar3.value));
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar4);
  if ((int)puVar5 != 1) {
    puVar5 = puVar6;
    FUN_100648528(puVar6,param_1,param_3);
    (**(code **)(lVar7 + 8))(puVar6,lVar4);
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100644be0);
  (*pcVar1)();
}



/* Address: 0x100644be0 | FUN_100644be0 */

undefined8
FUN_100644be0(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x60));
  uVar2 = *puVar1;
  FUN_100652900(uVar2,puVar1[1],param_5);
  puVar3 = &DAT_100eefd38;
  _swift_allocObject(&DAT_100eefd38,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  *(long **)(puVar3 + 0x28) = param_3;
  *(undefined8 *)(puVar3 + 0x30) = param_1;
  *(undefined8 *)(puVar3 + 0x38) = param_2;
  *(undefined8 *)(puVar3 + 0x40) = uVar2;
  _swift_retain(param_3);
  _swift_retain(param_2);
  _swift_retain(uVar2);
  FUN_1006486b4(FUN_100645eb8,puVar3);
  _swift_release(puVar3);
  return uVar2;
}



/* Address: 0x100644ca4 | FUN_100644ca4 */

long * FUN_100644ca4(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5,
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
  long *local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar17 = *param_1;
  local_c8 = *(long *)(param_6 + -8);
  lVar15 = (long)alStack_f0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar15;
  local_b8 = param_3;
  pcStack_b0 = param_2;
  local_90 = param_4;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar5 = Swift::Result::typeMetadataAccessor();
  local_80 = CONCAT71(extraout_var,RVar5.value);
  local_88 = *(long *)(local_80 + -8);
  plVar16 = (long *)(lVar15 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0));
  alStack_f0[2] = *(long *)(param_5 + -8);
  lVar12 = (long)plVar16 - (*(long *)(alStack_f0[2] + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_f0[1] = lVar12;
  alStack_f0[3] = param_7;
  local_c0 = param_6;
  RVar5 = Swift::Result::typeMetadataAccessor();
  lVar12 = lVar12 - (*(long *)(*(long *)(CONCAT71(extraout_var_00,RVar5.value) + -8) + 0x40) + 0xfU
                    & 0xfffffffffffffff0);
  local_98 = *(long *)(lVar17 + 0x50);
  local_a0 = *(long *)(local_98 + -8);
  plVar13 = (long *)(lVar12 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_a8 = plVar13;
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
    lVar15 = local_a0;
    plVar8 = local_a8;
    plVar11 = plVar16;
    if ((int)plVar9 == 1) {
      lVar15 = *plVar13;
      *plVar16 = lVar15;
      lVar17 = local_80;
      _swift_storeEnumTagMultiPayload(plVar16,local_80,1);
      _swift_errorRetain(lVar15);
      FUN_100648528(plVar16,local_90,param_5);
      _swift_errorRelease(lVar15);
      pcVar14 = *(code **)(local_88 + 8);
      plVar8 = plVar16;
    }
    else {
      (**(code **)(local_a0 + 0x20))(local_a8,plVar13,local_98);
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
        lVar15 = lVar4;
        lVar12 = alStack_f0[3];
        _swift_allocError(lVar4,alStack_f0[3],0,0);
        (**(code **)(lVar3 + 0x10))(lVar12,lVar2,lVar4);
        *plVar16 = lVar15;
        lVar15 = local_80;
        _swift_storeEnumTagMultiPayload(plVar16,local_80,1);
        FUN_100648528(plVar16,local_90,param_5);
        (**(code **)(local_88 + 8))(plVar16,lVar15);
        (**(code **)(lVar3 + 8))(lVar2,lVar4);
        pcVar14 = *(code **)(local_a0 + 8);
        plVar8 = local_a8;
      }
      else {
        (**(code **)(alStack_f0[2] + 0x20))(alStack_f0[1],lVar12,param_5);
        (**(code **)(lVar1 + 0x10))(plVar16,lVar18,param_5);
        lVar12 = local_80;
        _swift_storeEnumTagMultiPayload(plVar16,local_80,0);
        FUN_100648528(plVar16,local_90,param_5);
        (**(code **)(local_88 + 8))(plVar16,lVar12);
        (**(code **)(lVar1 + 8))(lVar18,param_5);
        pcVar14 = *(code **)(lVar15 + 8);
        lVar17 = local_98;
      }
    }
    (*pcVar14)(plVar8,lVar17);
    return plVar11;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100645088);
  (*pcVar14)();
}



/* Address: 0x100645088 | FUN_100645088 */

void FUN_100645088(void)

{
  FUN_10064509c();
  return;
}



/* Address: 0x10064509c | FUN_10064509c */

undefined8
FUN_10064509c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x60));
  uVar2 = *puVar1;
  FUN_100652900(uVar2,puVar1[1],param_4);
  _swift_allocObject(param_5,0x30,7);
  *(long **)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = uVar2;
  *(undefined8 *)(param_5 + 0x20) = param_1;
  *(undefined8 *)(param_5 + 0x28) = param_2;
  _swift_retain(param_3);
  _swift_retain(uVar2);
  _swift_retain(param_2);
  FUN_1006486b4(param_6,param_5);
  _swift_release(param_5);
  return uVar2;
}



/* Address: 0x10064514c | FUN_10064514c */

long FUN_10064514c(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

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
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  code *apcStack_a0 [3];
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar3;
  
  lVar7 = *param_1;
  lVar6 = *(long *)(lVar7 + 0x50);
  apcStack_a0[1] = (code *)param_4;
  apcStack_a0[2] = param_3;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  lVar9 = *(long *)(lVar3 + -8);
  lVar8 = (long)apcStack_a0 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_88 = *(long *)(lVar6 + -8);
  lVar11 = lVar8 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  puVar13 = (undefined8 *)(lVar11 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar7 = *(long *)(lVar7 + 0x58);
  _swift_beginAccess((long)param_1 + lVar7,auStack_78,0,0);
  (**(code **)(lVar10 + 0x10))(puVar13,(long)param_1 + lVar7,CONCAT71(extraout_var_00,OVar2.value));
  puVar4 = puVar13;
  (**(code **)(lVar9 + 0x30))(puVar13,1,lVar3);
  if ((int)puVar4 != 1) {
    puVar4 = puVar13;
    _swift_getEnumCaseMultiPayload(puVar13,lVar3);
    lVar7 = local_88;
    lVar10 = lVar8;
    if ((int)puVar4 == 1) {
      uVar12 = *puVar13;
      (*apcStack_a0[2])(lVar8,uVar12);
      _swift_storeEnumTagMultiPayload(lVar8,lVar3,0);
      FUN_100648528(lVar8,local_80,lVar6);
      _swift_errorRelease(uVar12);
      pcVar5 = *(code **)(lVar9 + 8);
      lVar11 = lVar8;
      lVar6 = lVar3;
    }
    else {
      (**(code **)(local_88 + 0x20))(lVar11,puVar13,lVar6);
      (**(code **)(lVar7 + 0x10))(lVar8,lVar11,lVar6);
      _swift_storeEnumTagMultiPayload(lVar8,lVar3,0);
      FUN_100648528(lVar8,local_80,lVar6);
      (**(code **)(lVar9 + 8))(lVar8,lVar3);
      pcVar5 = *(code **)(lVar7 + 8);
    }
    (*pcVar5)(lVar11,lVar6);
    return lVar10;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100645378);
  (*pcVar5)();
}



/* Address: 0x100645378 | FUN_100645378 */

undefined8 FUN_100645378(long *param_1,code *param_2,undefined8 param_3)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar3;
  
  lVar11 = *param_1;
  lVar6 = *(long *)(lVar11 + 0x50);
  local_80 = param_3;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8);
  puVar8 = auStack_78 + (-8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = *(long *)(lVar6 + -8);
  puVar9 = puVar8 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar11 + 0x58);
  _swift_beginAccess((long)param_1 + lVar11,auStack_78,0,0);
  (**(code **)(lVar7 + 0x10))(puVar8,(long)param_1 + lVar11,CONCAT71(extraout_var_00,OVar2.value));
  lVar7 = *(long *)(lVar3 + -8);
  puVar4 = puVar8;
  (**(code **)(lVar7 + 0x30))(puVar8,1,lVar3);
  if ((int)puVar4 != 1) {
    puVar4 = puVar8;
    _swift_getEnumCaseMultiPayload(puVar8,lVar3);
    if ((int)puVar4 == 1) {
      pcVar5 = *(code **)(lVar7 + 8);
      puVar9 = puVar8;
      lVar6 = lVar3;
    }
    else {
      (**(code **)(lVar10 + 0x20))(puVar9,puVar8,lVar6);
      (*param_2)(puVar9);
      pcVar5 = *(code **)(lVar10 + 8);
    }
    (*pcVar5)(puVar9,lVar6);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006454f4);
  (*pcVar5)();
}



/* Address: 0x1006454f4 | FUN_1006454f4 */

void FUN_1006454f4(void)

{
  FUN_100645508();
  return;
}



/* Address: 0x100645508 | FUN_100645508 */

void FUN_100645508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  _swift_allocObject(param_5,0x28,7);
  *(undefined8 *)(param_5 + 0x10) = param_3;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  _swift_retain(param_3);
  _swift_retain(param_2);
  FUN_1006486b4(param_6,param_5);
  _swift_release(param_5);
  return;
}



/* Address: 0x10064557c | FUN_10064557c */

undefined8 FUN_10064557c(long *param_1,code *param_2)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  long lVar4;
  
  lVar8 = *param_1;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  puVar7 = (undefined8 *)((long)&uStack_70 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar8 = *(long *)(lVar8 + 0x58);
  _swift_beginAccess((long)param_1 + lVar8,auStack_68,0,0);
  (**(code **)(lVar9 + 0x10))(puVar7,(long)param_1 + lVar8,CONCAT71(extraout_var_00,OVar3.value));
  lVar8 = *(long *)(lVar4 + -8);
  puVar5 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 != 1) {
    puVar5 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,lVar4);
    if ((int)puVar5 == 1) {
      uVar6 = *puVar7;
      (*param_2)(uVar6);
      _swift_errorRelease(uVar6);
    }
    else {
      (**(code **)(lVar8 + 8))(puVar7,lVar4);
    }
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006456bc);
  (*pcVar1)();
}



/* Address: 0x1006456bc | FUN_1006456bc */

undefined8 FUN_1006456bc(code *param_1,undefined8 param_2,long *param_3)

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
  
  lVar7 = *param_3;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar7 + 0x58);
  _swift_beginAccess((long)param_3 + lVar7,auStack_68,0,0);
  (**(code **)(lVar8 + 0x10))(puVar6,(long)param_3 + lVar7,CONCAT71(extraout_var_00,OVar3.value));
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar4);
  if ((int)puVar5 != 1) {
    (*param_1)(puVar6);
    (**(code **)(lVar7 + 8))(puVar6,lVar4);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006457d8);
  (*pcVar1)();
}



/* Address: 0x1006457d8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1006457dc | FUN_1006457dc */

void FUN_1006457dc(void)

{
  long unaff_x20;
  
  FUN_1006456bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006457e8 | FUN_1006457e8 */

void FUN_1006457e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100eefdb0;
  _swift_allocObject(&DAT_100eefdb0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  _swift_retain(param_2);
  FUN_100642e24(FUN_100645f18,puVar1,param_3);
  _swift_release(puVar1);
  _swift_retain(param_3);
  return;
}



/* Address: 0x100645868 | FUN_100645868 */

code * FUN_100645868(undefined8 param_1,undefined8 param_2,long param_3)

{
  Optional OVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar6 = *(long *)(param_3 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_1);
  uVar4 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100eefdd8;
  _swift_allocObject(&DAT_100eefdd8,uVar7 + lVar5,uVar4 | 7);
  *(long *)(puVar2 + 0x10) = param_3;
  (**(code **)(lVar6 + 0x20))
            (puVar2 + uVar7,&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  pcVar3 = FUN_100645f88;
  FUN_100644220(FUN_100645f88,puVar2,param_2,OVar1.value,param_3);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x10064593c | FUN_10064593c */

void FUN_10064593c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(lVar2 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar5,param_2,lVar2);
  puVar3 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,param_4);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar7 + 8))(puVar5,lVar2);
    (**(code **)(lVar8 + 0x10))(param_1,param_3,param_4);
  }
  else {
    pcVar4 = *(code **)(lVar8 + 0x20);
    (*pcVar4)(lVar6,puVar5,param_4);
    (*pcVar4)(param_1,lVar6,param_4);
  }
  return;
}



/* Address: 0x100645a4c | FUN_100645a4c */

code * FUN_100645a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Optional OVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar2 = &DAT_100eefe00;
  _swift_allocObject(&DAT_100eefe00,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  _swift_retain(param_2);
  pcVar3 = FUN_100645fa4;
  FUN_100644220(FUN_100645fa4,puVar2,param_3,OVar1.value,param_4);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x100645ae8 | FUN_100645ae8 */

void FUN_100645ae8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(lVar2 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_5 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar5,param_2,lVar2);
  puVar3 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,param_5);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar7 + 8))(puVar5,lVar2);
    (*param_3)(param_1);
  }
  else {
    pcVar4 = *(code **)(lVar8 + 0x20);
    (*pcVar4)(lVar6,puVar5,param_5);
    (*pcVar4)(param_1,lVar6,param_5);
  }
  return;
}



/* Address: 0x100645bf4 | FUN_100645bf4 */

undefined8 FUN_100645bf4(undefined8 param_1)

{
  FUN_10064311c();
  return param_1;
}



/* Address: 0x100645c18 | FUN_100645c18 */

void FUN_100645c18(long *param_1)

{
  _swift_getObjectType(*(undefined8 *)((long)param_1 + *(long *)(*param_1 + 0x60)));
  FUN_100642338();
  _swift_retain(param_1);
  return;
}



/* Address: 0x100645c60 | FUN_100645c60 */

void FUN_100645c60(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645c84 | FUN_100645c84 */

void FUN_100645c84(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x18))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100645cb0 | FUN_100645cb0 */

void FUN_100645cb0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645cd4 | FUN_100645cd4 */

void FUN_100645cd4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100643348(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100645cdc | FUN_100645cdc */

void FUN_100645cdc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645d08 | FUN_100645d08 */

void FUN_100645d08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = 0;
  FUN_1006529e0(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10063daa0(uVar2,uVar1,uVar3,uVar4);
  return;
}



/* Address: 0x100645d48 | FUN_100645d48 */

void FUN_100645d48(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x18))();
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Address: 0x100645d78 | thunk_FUN_100645d88 */

void thunk_FUN_100645d88(void)

{
  FUN_100645d88();
  return;
}



/* Address: 0x100645d7c | FUN_100645d7c */

void FUN_100645d7c(void)

{
  FUN_100645e18(FUN_100643748);
  return;
}



/* Address: 0x100645d88 | FUN_100645d88 */

void FUN_100645d88(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645dbc | FUN_100645dbc */

void FUN_100645dbc(void)

{
  FUN_100645e18(FUN_100643c30);
  return;
}



/* Address: 0x100645dc8 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  FUN_100645ecc();
  return;
}



/* Address: 0x100645dcc | FUN_100645dcc */

void FUN_100645dcc(void)

{
  long unaff_x20;
  
  FUN_100643f50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100645dd8 | FUN_100645dd8 */

void FUN_100645dd8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645e0c | FUN_100645e0c */

void FUN_100645e0c(void)

{
  FUN_100645e18(FUN_1006443d0);
  return;
}


