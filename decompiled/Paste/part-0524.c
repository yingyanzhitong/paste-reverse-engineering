/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005fc3a4 | FUN_1005fc3a4 */

void FUN_1005fc3a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  plVar8 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar8;
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar5 = *(undefined8 *)(lVar4 + 0x58);
  uVar2 = *(undefined8 *)(lVar4 + 0x60);
  uVar6 = *(undefined8 *)(lVar4 + 0x68);
  uVar3 = *(undefined8 *)(lVar4 + 0x70);
  uVar7 = *(undefined8 *)(lVar4 + 0x78);
  uVar9 = *(undefined8 *)(lVar4 + 0x80);
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1005fc418;
  FUN_1005fc45c(plVar8,*(undefined8 *)(unaff_x22 + 0x10),uVar10,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,
                uVar9);
  return;
}



/* Address: 0x1005fc418 | FUN_1005fc418 */

void FUN_1005fc418(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001005fc458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005fc45c | FUN_1005fc45c */

void FUN_1005fc45c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_7;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  _swift_task_switch(FUN_1005fc48c,0,0);
  return;
}



/* Address: 0x1005fc48c | FUN_1005fc48c */

void FUN_1005fc48c(void)

{
  Optional OVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
  plVar2 = (long *)0x20;
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf8) = plVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc570;
  FUN_1005f17a8(*(undefined8 *)(unaff_x22 + 0xb0),&DAT_100c67008,unaff_x22 + 0x10,FUN_100603c0c,
                unaff_x22 + 0x60,0,0,OVar1.value);
  return;
}



/* Address: 0x1005fc570 | FUN_1005fc570 */

void FUN_1005fc570(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x0001005fc5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005fc5b4 | FUN_1005fc5b4 */

void FUN_1005fc5b4(undefined8 param_1)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1005fbb50(plVar1,param_1,uVar2);
  return;
}



/* Address: 0x1005fc614 | FUN_1005fc614 */

void FUN_1005fc614(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  Optional OVar7;
  undefined7 extraout_var;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 auStack_80 [2];
  long local_70;
  long local_68;
  
  lVar9 = *unaff_x20;
  lVar11 = *(long *)(lVar9 + 0x58);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  local_68 = CONCAT71(extraout_var,OVar7.value);
  lVar14 = *(long *)(local_68 + -8);
  lVar5 = -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_70 + lVar5;
  if ((*(byte *)(unaff_x20 + 3) & 1) == 0) {
    uVar8 = unaff_x20[2];
    FUN_1005fc744(uVar8,*(undefined8 *)(lVar9 + 0x50),lVar11,*(undefined8 *)(lVar9 + 0x60),
                  *(undefined8 *)(lVar9 + 0x68),*(undefined8 *)(lVar9 + 0x70),
                  *(undefined8 *)(lVar9 + 0x78),*(undefined8 *)(lVar9 + 0x80));
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005fc744);
      (*pcVar6)();
    }
  }
  lVar13 = unaff_x20[2];
  (**(code **)(*(long *)(lVar11 + -8) + 0x38))(lVar12,1,1,lVar11);
  uVar15 = *(undefined8 *)(lVar9 + 0x50);
  uVar1 = *(undefined8 *)(lVar9 + 0x60);
  uVar3 = *(undefined8 *)(lVar9 + 0x68);
  uVar2 = *(undefined8 *)(lVar9 + 0x70);
  uVar4 = *(undefined8 *)(lVar9 + 0x78);
  uVar10 = *(undefined8 *)(lVar9 + 0x80);
  local_70 = lVar14;
  _swift_retain(lVar13);
  *(undefined8 *)((long)auStack_80 + lVar5) = uVar10;
  FUN_1005fc7c8(lVar12,lVar13,uVar15,lVar11,uVar1,uVar3,uVar2,uVar4);
  _swift_release(lVar13);
  (**(code **)(local_70 + 8))(lVar12,local_68);
  _swift_release(unaff_x20[2]);
  return;
}



/* Address: 0x1005fc744 | FUN_1005fc744 */

ulong FUN_1005fc744(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 auStack_80 [16];
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = 0;
  local_c0 = param_2;
  uStack_b8 = param_3;
  local_b0 = param_4;
  uStack_a8 = param_5;
  local_a0 = param_6;
  uStack_98 = param_7;
  local_90 = param_8;
  local_70 = param_2;
  uStack_68 = param_3;
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_6;
  uStack_48 = param_7;
  local_40 = param_8;
  FUN_100603a8c(0,&local_c0);
  FUN_10066ed6c(&local_c0,FUN_100603c20,auStack_80,param_1,uVar1,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_c0 & 0xff;
}



/* Address: 0x1005fc7c8 | FUN_1005fc7c8 */

void FUN_1005fc7c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  int iVar1;
  long lVar2;
  long lVar3;
  Optional OVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  UnsafeContinuation UVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long alStack_1a0 [4];
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined7 extraout_var_01;
  
  local_110 = param_9;
  local_160 = param_5;
  local_150 = param_8;
  local_148 = param_1;
  local_140 = param_2;
  local_120 = param_7;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_118 = CONCAT71(extraout_var,OVar4.value);
  alStack_1a0[1] =
       (long)alStack_1a0 - (*(long *)(*(long *)(local_118 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_168 = *(long *)(param_4 + -8);
  lVar12 = alStack_1a0[1] - (*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_1a0[3] = lVar12;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_158 = CONCAT71(extraout_var_00,OVar4.value);
  local_178 = *(long *)(local_158 + -8);
  uVar13 = *(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_180 = lVar12 - uVar13;
  lVar14 = local_180 - uVar13;
  local_138 = lVar14;
  local_108 = param_6;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_01,OVar4.value);
  local_90 = param_9;
  lVar6 = 0xff;
  local_c0 = param_3;
  lStack_b8 = param_4;
  local_b0 = param_5;
  lStack_a8 = param_6;
  local_a0 = param_7;
  lStack_98 = param_8;
  FUN_100603c8c(0xff,&local_c0);
  lVar12 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,lVar6,0,0);
  lVar3 = local_158;
  lVar14 = lVar14 - (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(lVar6 + -8);
  uVar13 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = (undefined8 *)(lVar14 - uVar13);
  local_128 = (long)puVar19 - uVar13;
  lVar20 = *(long *)(lVar5 + -8);
  uVar13 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130 = local_128 - uVar13;
  lVar15 = local_130 - uVar13;
  local_a0 = local_160;
  lStack_98 = local_108;
  local_90 = local_120;
  uStack_88 = local_150;
  local_80 = local_110;
  uStack_78 = local_148;
  local_f0 = local_160;
  lStack_e8 = local_108;
  local_e0 = local_120;
  uStack_d8 = local_150;
  local_d0 = local_110;
  uVar7 = 0;
  alStack_1a0[2] = param_3;
  local_170 = param_4;
  local_100 = param_3;
  lStack_f8 = param_4;
  local_b0 = param_3;
  lStack_a8 = param_4;
  FUN_100603a8c(0,&local_100);
  FUN_10066ed6c(lVar14,FUN_100603c98,&local_c0,local_140,uVar7,lVar12);
  iVar1 = *(int *)(lVar12 + 0x30);
  local_150 = lVar15;
  local_148 = lVar20;
  (**(code **)(lVar20 + 0x20))(lVar15,lVar14,lVar5);
  lVar15 = local_128;
  (**(code **)(lVar17 + 0x20))(local_128,lVar14 + iVar1,lVar6);
  local_140 = lVar17;
  (**(code **)(lVar17 + 0x10))(puVar19,lVar15,lVar6);
  puVar8 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar17 = 0;
  _swift_getTupleTypeMetadata2(0,UVar9.unknown,lVar3,0,0);
  puVar10 = puVar19;
  (**(code **)(*(long *)(lVar17 + -8) + 0x30))(puVar19,1,lVar17);
  lVar14 = local_138;
  lVar12 = local_178;
  if ((int)puVar10 != 1) {
    local_160 = *puVar19;
    (**(code **)(local_178 + 0x20))(local_138,(long)puVar19 + (long)*(int *)(lVar17 + 0x30),lVar3);
    lVar20 = local_180;
    (**(code **)(lVar12 + 0x10))(local_180,lVar14,lVar3);
    lVar18 = local_170;
    lVar11 = lVar20;
    (**(code **)(local_168 + 0x30))(lVar20,1,local_170);
    lVar2 = local_168;
    lVar17 = alStack_1a0[3];
    lVar14 = alStack_1a0[1];
    if ((int)lVar11 == 1) {
      (**(code **)(*(long *)(alStack_1a0[2] + -8) + 0x38))(alStack_1a0[1],1,1);
      FUN_1005ec10c(lVar14,local_160,local_118,puVar8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    else {
      (**(code **)(local_168 + 0x20))(alStack_1a0[3],lVar20,lVar18);
      lVar14 = lVar18;
      uVar7 = local_120;
      _swift_allocError(lVar18,local_120,0,0);
      (**(code **)(lVar2 + 0x10))(uVar7,lVar17,lVar18);
      local_c0 = lVar14;
      FUN_1005ec180(&local_c0,local_160,local_118,puVar8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      lVar15 = local_128;
      (**(code **)(lVar2 + 8))(lVar17,lVar18);
    }
    (**(code **)(lVar12 + 8))(local_138,lVar3);
  }
  lVar14 = local_130;
  lVar3 = local_148;
  lVar12 = local_150;
  (**(code **)(local_148 + 0x10))(local_130,local_150,lVar5);
  lVar18 = *(long *)(local_108 + -8);
  lVar20 = lVar14;
  (**(code **)(lVar18 + 0x30))(lVar14,1);
  lVar17 = local_108;
  if ((int)lVar20 == 1) {
    (**(code **)(local_140 + 8))(lVar15,lVar6);
    pcVar16 = *(code **)(lVar3 + 8);
    (*pcVar16)(lVar12,lVar5);
    (*pcVar16)(lVar14,lVar5);
  }
  else {
    (**(code **)(local_110 + 0x10))(local_108);
    (**(code **)(local_140 + 8))(lVar15,lVar6);
    (**(code **)(lVar3 + 8))(lVar12,lVar5);
    (**(code **)(lVar18 + 8))(lVar14,lVar17);
  }
  return;
}



/* Address: 0x1005fcd78 | FUN_1005fcd78 */

void FUN_1005fcd78(void)

{
  FUN_1005fc614();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005fcd98 | FUN_1005fcd98 */

undefined8
FUN_1005fcd98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  Optional OVar3;
  int iVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  UnsafeContinuation UVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long alStack_150 [4];
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_128 = param_1;
  local_120 = param_7;
  local_118 = param_2;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  alStack_150[2] = CONCAT71(extraout_var,OVar3.value);
  alStack_150[3] =
       (long)alStack_150 -
       (*(long *)(*(long *)(alStack_150[2] + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_150[1] = *(long *)(param_3 + -8);
  lVar11 = alStack_150[3] - (*(long *)(alStack_150[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = param_9;
  local_a0 = param_10;
  lVar5 = 0;
  local_130 = lVar11;
  local_d0 = param_3;
  uStack_c8 = param_4;
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_b0 = param_8;
  FUN_100603cc8(0,&local_d0);
  lVar14 = *(long *)(lVar5 + -8);
  uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = (undefined8 *)(lVar11 - uVar12);
  lVar13 = (long)puVar15 - uVar12;
  local_a0 = local_120;
  local_90 = param_9;
  uStack_88 = param_10;
  local_80 = param_11;
  uStack_78 = local_128;
  uStack_e8 = param_9;
  local_e0 = param_10;
  uVar6 = 0;
  local_110 = param_3;
  uStack_108 = param_4;
  local_100 = param_5;
  uStack_f8 = param_6;
  local_f0 = param_8;
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  uStack_98 = param_8;
  FUN_100603a8c(0,&local_110);
  FUN_10066ed6c(lVar13,FUN_100603cd4,&local_d0,local_118,uVar6,lVar5);
  (**(code **)(lVar14 + 0x10))(puVar15,lVar13,lVar5);
  puVar7 = puVar15;
  _swift_getEnumCaseMultiPayload(puVar15,lVar5);
  lVar1 = alStack_150[2];
  lVar11 = alStack_150[1];
  iVar4 = (int)puVar7;
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      local_118 = *puVar15;
      puVar10 = &DAT_100fd4f20;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      UVar8 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar9 = 0;
      _swift_getTupleTypeMetadata2(0,UVar8.unknown,param_3,"continuation element ",0);
      lVar2 = local_130;
      (**(code **)(lVar11 + 0x20))(local_130,(long)puVar15 + (long)*(int *)(lVar9 + 0x30),param_3);
      lVar9 = alStack_150[3];
      (**(code **)(lVar11 + 0x10))(alStack_150[3],lVar2,param_3);
      uVar6 = 1;
      (**(code **)(lVar11 + 0x38))(lVar9,0,1,param_3);
      FUN_1005ec10c(lVar9,local_118,lVar1,puVar10,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(lVar11 + 8))(lVar2,param_3);
      goto LAB_1005fd120;
    }
    uVar6 = *puVar15;
    puVar10 = &DAT_100fd4f20;
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    UVar8 = Swift::UnsafeContinuation::typeMetadataAccessor();
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,UVar8.unknown,param_3,"continuation element ",0);
    lVar2 = local_130;
    (**(code **)(lVar11 + 0x20))(local_130,(long)puVar15 + (long)*(int *)(lVar9 + 0x30),param_3);
    lVar9 = alStack_150[3];
    (**(code **)(lVar11 + 0x10))(alStack_150[3],lVar2,param_3);
    (**(code **)(lVar11 + 0x38))(lVar9,0,1,param_3);
    FUN_1005ec10c(lVar9,uVar6,lVar1,puVar10,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    (**(code **)(lVar11 + 8))(lVar2,param_3);
  }
  else if (iVar4 != 2) {
    if (iVar4 == 3) {
      uVar6 = 1;
    }
    else {
      uVar6 = 2;
    }
    goto LAB_1005fd120;
  }
  uVar6 = 0;
LAB_1005fd120:
  (**(code **)(lVar14 + 8))(lVar13,lVar5);
  return uVar6;
}



/* Address: 0x1005fd154 | FUN_1005fd154 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005fd1f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_1005fd154(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  CollectionOfOne CVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar6 = (long)&local_80 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  CVar1 = Swift::CollectionOfOne::typeMetadataAccessor();
  lVar5 = *(long *)(CVar1.unknown + -8);
  lVar3 = lVar6 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar6,param_1,param_3);
  Swift::CollectionOfOne::init(lVar3,CVar1.unknown,param_3);
  puVar2 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040;
  _swift_getWitnessTable
            (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040,CVar1.unknown);
  *(undefined8 *)(lVar3 + -0x18) = param_9;
  *(undefined **)(lVar3 + -0x10) = puVar2;
  *(undefined8 *)(lVar3 + -0x20) = param_8;
  lVar4 = lVar3;
  FUN_1005fb920(lVar3,param_2,param_3,local_80,uStack_78,local_70,CVar1.unknown,uStack_68);
  (**(code **)(lVar5 + 8))(lVar3,CVar1.unknown);
  return (uint)lVar4 & 0xff;
}



/* Address: 0x1005fd270 | FUN_1005fd270 */

void FUN_1005fd270(undefined8 param_1)

{
  FUN_100603108(param_1,FUN_100603d64);
  return;
}



/* Address: 0x1005fd27c | FUN_1005fd27c */

void FUN_1005fd27c(undefined8 param_1,undefined8 param_2)

{
  FUN_100603178(param_1,param_2,FUN_100603d64);
  return;
}



/* Address: 0x1005fd288 | FUN_1005fd288 */

void FUN_1005fd288(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x4c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005fd2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1005fd2d0 | FUN_1005fd2d0 */

void FUN_1005fd2d0(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x4c);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005fd314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1005fd318 | FUN_1005fd318 */

undefined1  [16] FUN_1005fd318(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x4c);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005fd32c | FUN_1005fd32c */

undefined1  [16] FUN_1005fd32c(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x50));
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1005fd364 | FUN_1005fd364 */

void FUN_1005fd364(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x50));
  FUN_100004550(*puVar1,puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1005fd3a0 | FUN_1005fd3a0 */

undefined1  [16] FUN_1005fd3a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x50);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005fd3b4 | FUN_1005fd3b4 */

void FUN_1005fd3b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  int iVar2;
  Optional OVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = param_10;
  uStack_70 = param_11;
  local_68 = param_12;
  lVar4 = 0;
  local_98 = param_6;
  uStack_90 = param_7;
  local_88 = param_8;
  lStack_80 = param_9;
  FUN_100603a8c(0,&local_98);
  iVar2 = *(int *)(lVar4 + 0x4c);
  (**(code **)(*(long *)(param_9 + -8) + 0x38))(param_1 + iVar2,1,1,param_9);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x50));
  local_78 = param_10;
  uStack_70 = param_11;
  local_68 = param_12;
  lVar4 = 0;
  local_98 = param_6;
  uStack_90 = param_7;
  local_88 = param_8;
  lStack_80 = param_9;
  FUN_100603d64(0,&local_98);
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1,param_2,lVar4);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x28))
            (param_1 + iVar2,param_3,CONCAT71(extraout_var,OVar3.value));
  *puVar1 = param_4;
  puVar1[1] = param_5;
  return;
}



/* Address: 0x1005fd4c0 | FUN_1005fd4c0 */

void FUN_1005fd4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = param_9;
  local_50 = param_10;
  uStack_a8 = param_9;
  local_a0 = param_10;
  uVar1 = 0;
  local_d0 = param_4;
  uStack_c8 = param_5;
  local_c0 = param_6;
  uStack_b8 = param_7;
  local_b0 = param_8;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  local_60 = param_8;
  uStack_48 = param_1;
  local_40 = param_2;
  FUN_100603a8c(0,&local_d0);
  FUN_10066ed6c(FUN_100603d70,auStack_90,param_3,uVar1,PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x1005fd548 | FUN_1005fd548 */

void FUN_1005fd548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uStack_50 = param_9;
  local_48 = param_10;
  lVar4 = 0;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  uStack_60 = param_7;
  local_58 = param_8;
  FUN_100603a8c(0,&local_78);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x50));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  FUN_100011128(param_2,param_3);
  FUN_100004550(uVar2,uVar3);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Address: 0x1005fd5d4 | FUN_1005fd5d4 */

undefined8 FUN_1005fd5d4(long param_1)

{
  Optional OVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  char acStack_100 [8];
  char acStack_f8 [5];
  char acStack_f3 [8];
  undefined1 auStack_eb [7];
  char acStack_e4 [5];
  char acStack_df [8];
  char acStack_d7 [8];
  char acStack_cf [5];
  char acStack_ca [8];
  char acStack_c2 [8];
  char acStack_ba [8];
  undefined4 uStack_b2;
  undefined1 auStack_ae [14];
  long local_a0;
  undefined *puStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 extraout_var_00;
  
  local_50 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  local_90 = *(long *)(param_1 + 0x10);
  puStack_98 = *(undefined **)(param_1 + 0x28);
  local_a0 = *(long *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  local_60 = *(undefined **)(param_1 + 0x30);
  lVar3 = 0;
  local_80 = local_90;
  local_78 = uStack_88;
  local_70 = local_a0;
  puStack_68 = puStack_98;
  FUN_100603da4(0,&local_80);
  lVar7 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)&local_a0 + lVar7);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar9);
  puVar4 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 3) {
    if (iVar2 == 0) {
      pcVar8 = *(code **)(*(long *)(local_a0 + -8) + 8);
      lVar3 = local_a0;
    }
    else {
      if (iVar2 != 1) {
        _swift_release(*puVar9);
        uVar5 = 0xff;
        FUN_1006883a0(0xff,local_90);
        OVar1 = Swift::Optional::typeMetadataAccessor();
        lVar7 = CONCAT71(extraout_var_00,OVar1.value);
        lVar3 = 0;
        _swift_getTupleTypeMetadata3
                  (0,uVar5,PTR___type_metadata_for_Swift_Bool_100eac570,lVar7,
                   "buffer iteratorInitialized failure ",0);
        (**(code **)(*(long *)(lVar7 + -8) + 8))((long)puVar9 + (long)*(int *)(lVar3 + 0x40),lVar7);
        goto LAB_1005fd83c;
      }
      builtin_strncpy(acStack_f8 + lVar7,"sureStra",8);
      builtin_strncpy(acStack_100 + lVar7,"backPres",8);
      builtin_strncpy(acStack_f3 + lVar7,"trategy ",8);
      *(undefined4 *)(auStack_eb + lVar7) = 0x66667562;
      *(undefined4 *)(auStack_eb + lVar7 + 3) = 0x20726566;
      builtin_strncpy(acStack_e4 + lVar7,"continua",8);
      builtin_strncpy(acStack_df + lVar7,"nuation ",8);
      builtin_strncpy(acStack_cf + lVar7,"andingDe",8);
      builtin_strncpy(acStack_d7 + lVar7,"hasOutst",8);
      builtin_strncpy(acStack_ca + lVar7,"gDemand ",8);
      *(undefined4 *)((long)&uStack_b2 + lVar7) = 0x2064657a;
      builtin_strncpy(acStack_ba + lVar7,"Initiali",8);
      builtin_strncpy(acStack_c2 + lVar7,"iterator",8);
      auStack_ae[lVar7] = 0;
      lVar3 = local_a0;
      local_80 = local_a0;
      uVar5 = 0xff;
      FUN_1006883a0(0xff,local_90);
      local_78 = uVar5;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar1 = Swift::Optional::typeMetadataAccessor();
      local_70 = CONCAT71(extraout_var,OVar1.value);
      puStack_68 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_60 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar6 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_80,acStack_100 + lVar7,0);
      _swift_release(*(undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x30)));
      pcVar8 = *(code **)(*(long *)(lVar3 + -8) + 8);
    }
    (*pcVar8)(puVar9,lVar3);
    uVar5 = 0;
  }
  else {
    if (1 < iVar2 - 3U) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1005fd7b0);
      (*pcVar8)();
    }
LAB_1005fd83c:
    uVar5 = 1;
  }
  return uVar5;
}



/* Address: 0x1005fd858 | FUN_1005fd858 */

void FUN_1005fd858(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar2 = 0;
  _swift_getTupleTypeMetadata2
            (0,param_5,PTR___type_metadata_for_Swift_Bool_100eac570,
             "backPressureStrategy iteratorInitialized ",0);
  iVar1 = *(int *)(lVar2 + 0x30);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  *(undefined1 *)(param_1 + iVar1) = 0;
  uVar3 = 0;
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  uStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  local_68 = param_9;
  FUN_100603da4(0,&local_98);
  _swift_storeEnumTagMultiPayload(param_1,uVar3,0);
  return;
}



/* Address: 0x1005fd928 | FUN_1005fd928 */

undefined8 FUN_1005fd928(long param_1)

{
  byte bVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  undefined7 extraout_var;
  long lVar8;
  long lVar9;
  undefined7 extraout_var_00;
  undefined1 *unaff_x20;
  byte *pbVar10;
  long lVar11;
  char acStack_110 [8];
  char acStack_108 [5];
  char acStack_103 [8];
  undefined1 auStack_fb [7];
  char acStack_f4 [5];
  char acStack_ef [8];
  char acStack_e7 [8];
  char acStack_df [5];
  char acStack_da [8];
  char acStack_d2 [8];
  char acStack_ca [8];
  undefined4 uStack_c2;
  undefined1 auStack_be [14];
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  local_a0 = *(long *)(param_1 + 0x10);
  puStack_a8 = *(undefined **)(param_1 + 0x28);
  local_b0 = *(long *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  local_70 = *(undefined **)(param_1 + 0x30);
  lVar5 = 0;
  local_90 = local_a0;
  local_88 = uStack_98;
  local_80 = local_b0;
  puStack_78 = puStack_a8;
  FUN_100603da4(0,&local_90);
  lVar11 = *(long *)(lVar5 + -8);
  lVar9 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar10 = (byte *)((long)&local_b0 + lVar9);
  (**(code **)(lVar11 + 0x10))(pbVar10);
  pbVar6 = pbVar10;
  _swift_getEnumCaseMultiPayload(pbVar10,lVar5);
  lVar5 = local_b0;
  iVar4 = (int)pbVar6;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      lVar9 = 0;
      _swift_getTupleTypeMetadata2
                (0,local_b0,PTR___type_metadata_for_Swift_Bool_100eac570,
                 "backPressureStrategy iteratorInitialized ",0);
      bVar1 = pbVar10[*(int *)(lVar9 + 0x30)];
      (**(code **)(*(long *)(lVar5 + -8) + 8))(pbVar10,lVar5);
    }
    else if (iVar4 == 1) {
      builtin_strncpy(acStack_108 + lVar9,"sureStra",8);
      builtin_strncpy(acStack_110 + lVar9,"backPres",8);
      builtin_strncpy(acStack_103 + lVar9,"trategy ",8);
      *(undefined4 *)(auStack_fb + lVar9) = 0x66667562;
      *(undefined4 *)(auStack_fb + lVar9 + 3) = 0x20726566;
      builtin_strncpy(acStack_f4 + lVar9,"continua",8);
      builtin_strncpy(acStack_ef + lVar9,"nuation ",8);
      builtin_strncpy(acStack_df + lVar9,"andingDe",8);
      builtin_strncpy(acStack_e7 + lVar9,"hasOutst",8);
      builtin_strncpy(acStack_da + lVar9,"gDemand ",8);
      *(undefined4 *)((long)&uStack_c2 + lVar9) = 0x2064657a;
      builtin_strncpy(acStack_ca + lVar9,"Initiali",8);
      builtin_strncpy(acStack_d2 + lVar9,"iterator",8);
      auStack_be[lVar9] = 0;
      lVar5 = local_b0;
      local_90 = local_b0;
      uVar7 = 0xff;
      FUN_1006883a0(0xff,local_a0);
      local_88 = uVar7;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      local_80 = CONCAT71(extraout_var,OVar3.value);
      puStack_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar8 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_90,acStack_110 + lVar9,0);
      _swift_release(*(undefined8 *)(pbVar10 + *(int *)(lVar8 + 0x30)));
      bVar1 = pbVar10[*(int *)(lVar8 + 0x60)];
      (**(code **)(*(long *)(lVar5 + -8) + 8))(pbVar10,lVar5);
    }
    else {
      _swift_release(*(undefined8 *)pbVar10);
      bVar1 = *(byte *)((long)&puStack_a8 + lVar9);
      uVar7 = 0xff;
      FUN_1006883a0(0xff,local_a0);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar9 = CONCAT71(extraout_var_00,OVar3.value);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3
                (0,uVar7,PTR___type_metadata_for_Swift_Bool_100eac570,lVar9,
                 "buffer iteratorInitialized failure ",0);
      (**(code **)(*(long *)(lVar9 + -8) + 8))(pbVar10 + *(int *)(lVar5 + 0x40),lVar9);
    }
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 == 4) {
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005fdb1c);
      (*pcVar2)();
    }
    bVar1 = *pbVar10;
  }
  if ((bVar1 & 1) != 0) {
    return 1;
  }
  (**(code **)(lVar11 + 8))();
  *unaff_x20 = 0;
  _swift_storeEnumTagMultiPayload();
  return 0;
}



/* Address: 0x1005fdc30 | FUN_1005fdc30 */

void FUN_1005fdc30(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Optional OVar4;
  int iVar5;
  undefined7 extraout_var;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  undefined7 extraout_var_00;
  long lVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  code *pcVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  byte abStack_120 [8];
  byte abStack_118 [5];
  byte abStack_113 [8];
  byte abStack_10b [7];
  byte abStack_104 [5];
  byte abStack_ff [8];
  byte abStack_f7 [8];
  byte abStack_ef [5];
  byte abStack_ea [8];
  byte abStack_e2 [8];
  byte abStack_da [8];
  byte abStack_d2 [10];
  byte abStack_c8 [8];
  undefined8 local_c0;
  byte abStack_b8 [4];
  uint local_b4;
  undefined8 local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,OVar4.value);
  uVar13 = *(ulong *)(lVar8 + -8);
  pbVar15 = abStack_b8 + (-8 - (*(long *)(uVar13 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar11 = *(long *)(param_1 + 0x20);
  local_a0 = *(ulong *)(lVar11 + -8);
  lVar9 = (long)pbVar15 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_1 + 0x10);
  puStack_78 = *(undefined **)(param_1 + 0x30);
  local_80 = *(undefined **)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = 0;
  local_a8 = lVar9;
  local_98 = lVar16;
  local_90 = uVar10;
  local_88 = lVar11;
  FUN_100603da4(0,&local_98);
  lVar17 = *(long *)(lVar6 + -8);
  pbVar12 = (byte *)(lVar9 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar17 + 0x10))(pbVar12);
  pbVar7 = pbVar12;
  _swift_getEnumCaseMultiPayload(pbVar12,lVar6);
  iVar5 = (int)pbVar7;
  if (iVar5 < 2) {
    pbVar7 = pbVar12;
    if (iVar5 != 0) {
      pbVar12[-0x58] = 's';
      pbVar12[-0x57] = 'u';
      pbVar12[-0x56] = 'r';
      pbVar12[-0x55] = 'e';
      pbVar12[-0x54] = 'S';
      pbVar12[-0x53] = 't';
      pbVar12[-0x52] = 'r';
      pbVar12[-0x51] = 'a';
      pbVar12[-0x60] = 'b';
      pbVar12[-0x5f] = 'a';
      pbVar12[-0x5e] = 'c';
      pbVar12[-0x5d] = 'k';
      pbVar12[-0x5c] = 'P';
      pbVar12[-0x5b] = 'r';
      pbVar12[-0x5a] = 'e';
      pbVar12[-0x59] = 's';
      pbVar12[-0x53] = 't';
      pbVar12[-0x52] = 'r';
      pbVar12[-0x51] = 'a';
      pbVar12[-0x50] = 't';
      pbVar12[-0x4f] = 'e';
      pbVar12[-0x4e] = 'g';
      pbVar12[-0x4d] = 'y';
      pbVar12[-0x4c] = ' ';
      pbVar12[-0x4b] = 0x62;
      pbVar12[-0x4a] = 0x75;
      pbVar12[-0x49] = 0x66;
      pbVar12[-0x48] = 0x66;
      pbVar12[-0x48] = 0x66;
      pbVar12[-0x47] = 0x65;
      pbVar12[-0x46] = 0x72;
      pbVar12[-0x45] = 0x20;
      pbVar12[-0x44] = 'c';
      pbVar12[-0x43] = 'o';
      pbVar12[-0x42] = 'n';
      pbVar12[-0x41] = 't';
      pbVar12[-0x40] = 'i';
      pbVar12[-0x3f] = 'n';
      pbVar12[-0x3e] = 'u';
      pbVar12[-0x3d] = 'a';
      pbVar12[-0x3f] = 'n';
      pbVar12[-0x3e] = 'u';
      pbVar12[-0x3d] = 'a';
      pbVar12[-0x3c] = 't';
      pbVar12[-0x3b] = 'i';
      pbVar12[-0x3a] = 'o';
      pbVar12[-0x39] = 'n';
      pbVar12[-0x38] = ' ';
      pbVar12[-0x2f] = 'a';
      pbVar12[-0x2e] = 'n';
      pbVar12[-0x2d] = 'd';
      pbVar12[-0x2c] = 'i';
      pbVar12[-0x2b] = 'n';
      pbVar12[-0x2a] = 'g';
      pbVar12[-0x29] = 'D';
      pbVar12[-0x28] = 'e';
      pbVar12[-0x37] = 'h';
      pbVar12[-0x36] = 'a';
      pbVar12[-0x35] = 's';
      pbVar12[-0x34] = 'O';
      pbVar12[-0x33] = 'u';
      pbVar12[-0x32] = 't';
      pbVar12[-0x31] = 's';
      pbVar12[-0x30] = 't';
      pbVar12[-0x2a] = 'g';
      pbVar12[-0x29] = 'D';
      pbVar12[-0x28] = 'e';
      pbVar12[-0x27] = 'm';
      pbVar12[-0x26] = 'a';
      pbVar12[-0x25] = 'n';
      pbVar12[-0x24] = 'd';
      pbVar12[-0x23] = ' ';
      pbVar12[-0x12] = 0x7a;
      pbVar12[-0x11] = 0x65;
      pbVar12[-0x10] = 100;
      pbVar12[-0xf] = 0x20;
      pbVar12[-0x1a] = 'I';
      pbVar12[-0x19] = 'n';
      pbVar12[-0x18] = 'i';
      pbVar12[-0x17] = 't';
      pbVar12[-0x16] = 'i';
      pbVar12[-0x15] = 'a';
      pbVar12[-0x14] = 'l';
      pbVar12[-0x13] = 'i';
      pbVar12[-0x22] = 'i';
      pbVar12[-0x21] = 't';
      pbVar12[-0x20] = 'e';
      pbVar12[-0x1f] = 'r';
      pbVar12[-0x1e] = 'a';
      pbVar12[-0x1d] = 't';
      pbVar12[-0x1c] = 'o';
      pbVar12[-0x1b] = 'r';
      pbVar12[-0xe] = 0;
      uVar10 = 0xff;
      local_98 = lVar11;
      FUN_1006883a0(0xff,lVar16);
      local_90 = uVar10;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar4 = Swift::Optional::typeMetadataAccessor();
      local_88 = CONCAT71(extraout_var_00,OVar4.value);
      local_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar6 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_98,pbVar12 + -0x60,0);
      local_b0 = *(undefined8 *)(pbVar12 + *(int *)(lVar6 + 0x30));
      lVar8 = lVar11;
      uVar13 = local_a0;
      if ((pbVar12[*(int *)(lVar6 + 0x60)] & 1) == 0) {
        local_b4 = (uint)pbVar12[*(int *)(lVar6 + 0x50)];
        local_c0 = *(undefined8 *)(pbVar12 + *(int *)(lVar6 + 0x40));
        pcVar14 = *(code **)(local_a0 + 0x20);
        (*pcVar14)(local_a8,pbVar12,lVar11);
        (**(code **)(lVar17 + 8))();
        iVar5 = *(int *)(lVar6 + 0x30);
        iVar1 = *(int *)(lVar6 + 0x40);
        iVar2 = *(int *)(lVar6 + 0x50);
        iVar3 = *(int *)(lVar6 + 0x60);
        (*pcVar14)();
        *(undefined8 *)((long)unaff_x20 + (long)iVar5) = local_b0;
        *(undefined8 *)((long)unaff_x20 + (long)iVar1) = local_c0;
        *(char *)((long)unaff_x20 + (long)iVar2) = (char)local_b4;
        *(undefined1 *)((long)unaff_x20 + (long)iVar3) = 1;
        goto LAB_1005fe014;
      }
      goto LAB_1005fe068;
    }
    lVar8 = 0;
    _swift_getTupleTypeMetadata2
              (0,lVar11,PTR___type_metadata_for_Swift_Bool_100eac570,
               "backPressureStrategy iteratorInitialized ",0);
    if ((pbVar12[*(int *)(lVar8 + 0x30)] & 1) == 0) {
      pcVar14 = *(code **)(local_a0 + 0x20);
      (*pcVar14)(local_a8,pbVar12,lVar11);
      (**(code **)(lVar17 + 8))();
      iVar5 = *(int *)(lVar8 + 0x30);
      (*pcVar14)();
      *(undefined1 *)((long)unaff_x20 + (long)iVar5) = 1;
LAB_1005fe014:
      _swift_storeEnumTagMultiPayload();
      return;
    }
  }
  else {
    if (3 < iVar5) {
      if (iVar5 != 4) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1005fe054);
        (*pcVar14)();
      }
      if ((*pbVar12 & 1) == 0) {
        (**(code **)(lVar17 + 8))();
        *(undefined1 *)unaff_x20 = 1;
        goto LAB_1005fe014;
      }
      goto LAB_1005fe080;
    }
    if (iVar5 != 2) {
      if ((*pbVar12 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1005fe050);
        (*pcVar14)();
      }
      goto LAB_1005fe080;
    }
    local_b0 = *(undefined8 *)pbVar12;
    local_a0 = CONCAT44(local_a0._4_4_,(uint)pbVar12[8]);
    uVar10 = 0xff;
    FUN_1006883a0(0xff,lVar16);
    lVar11 = 0;
    _swift_getTupleTypeMetadata3
              (0,uVar10,PTR___type_metadata_for_Swift_Bool_100eac570,lVar8,
               "buffer iteratorInitialized failure ",0);
    pbVar7 = pbVar12 + *(int *)(lVar11 + 0x40);
    if ((local_a0 & 1) == 0) {
      pcVar14 = *(code **)(uVar13 + 0x20);
      (*pcVar14)(pbVar15,pbVar7,lVar8);
      (**(code **)(lVar17 + 8))();
      iVar5 = *(int *)(lVar11 + 0x40);
      *unaff_x20 = local_b0;
      *(undefined1 *)(unaff_x20 + 1) = 1;
      (*pcVar14)((undefined1 *)((long)unaff_x20 + (long)iVar5),pbVar15,lVar8);
      goto LAB_1005fe014;
    }
LAB_1005fe068:
    local_a0 = uVar13;
    _swift_release(local_b0);
    lVar11 = lVar8;
  }
  (**(code **)(local_a0 + 8))(pbVar7,lVar11);
LAB_1005fe080:
  pbVar12[-8] = 0;
  pbVar12[-7] = 0;
  pbVar12[-6] = 0;
  pbVar12[-5] = 0;
  pbVar12[-0x10] = 100;
  pbVar12[-0xf] = 3;
  pbVar12[-0xe] = 0;
  pbVar12[-0xd] = 0;
  pbVar12[-0xc] = 0;
  pbVar12[-0xb] = 0;
  pbVar12[-10] = 0;
  pbVar12[-9] = 0;
  SVar18.bridgeObject = (void *)0x2;
  SVar18.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar18,(StaticString)0xd000000000000051,0x8000000100daeac0,
             0xdaeab0);
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1005fe0d4);
  (*pcVar14)();
}



/* Address: 0x1005fe0d4 | FUN_1005fe0d4 */

void FUN_1005fe0d4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,code *param_10)

{
  Optional OVar1;
  ulong uVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar2 = 0;
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  lStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  local_68 = param_9;
  FUN_100603d64(0,&local_98);
  (*param_10)();
  if ((uVar2 & 0xff) == 0) {
    lVar3 = 0;
    local_98 = param_3;
    uStack_90 = param_4;
    local_88 = param_5;
    lStack_80 = param_6;
    local_78 = param_7;
    uStack_70 = param_8;
    local_68 = param_9;
    FUN_100603a8c(0,&local_98);
    param_2 = param_2 + *(int *)(lVar3 + 0x4c);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x20))
              (param_1,param_2,CONCAT71(extraout_var,OVar1.value));
    param_1 = param_2;
  }
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
  return;
}



/* Address: 0x1005fe1d0 | FUN_1005fe1d0 */

undefined8 FUN_1005fe1d0(long param_1)

{
  byte bVar1;
  code *pcVar2;
  Optional OVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined7 extraout_var;
  long lVar8;
  long lVar9;
  undefined7 extraout_var_00;
  undefined1 *unaff_x20;
  char *pcVar10;
  long lVar11;
  char acStack_110 [8];
  char acStack_108 [5];
  char acStack_103 [8];
  undefined1 auStack_fb [7];
  char acStack_f4 [5];
  char acStack_ef [8];
  char acStack_e7 [8];
  char acStack_df [5];
  char acStack_da [8];
  char acStack_d2 [8];
  char acStack_ca [8];
  undefined4 uStack_c2;
  undefined1 auStack_be [14];
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = *(undefined8 *)(param_1 + 0x18);
  local_a0 = *(long *)(param_1 + 0x10);
  puStack_a8 = *(undefined **)(param_1 + 0x28);
  local_b0 = *(long *)(param_1 + 0x20);
  uStack_68 = *(undefined8 *)(param_1 + 0x38);
  local_70 = *(undefined **)(param_1 + 0x30);
  lVar5 = 0;
  local_90 = local_a0;
  local_88 = uStack_98;
  local_80 = local_b0;
  puStack_78 = puStack_a8;
  FUN_100603da4(0,&local_90);
  lVar11 = *(long *)(lVar5 + -8);
  lVar9 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar10 = (char *)((long)&local_b0 + lVar9);
  (**(code **)(lVar11 + 0x10))(pcVar10);
  pcVar6 = pcVar10;
  _swift_getEnumCaseMultiPayload(pcVar10,lVar5);
  lVar5 = local_b0;
  iVar4 = (int)pcVar6;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      lVar9 = 0;
      _swift_getTupleTypeMetadata2
                (0,local_b0,PTR___type_metadata_for_Swift_Bool_100eac570,
                 "backPressureStrategy iteratorInitialized ",0);
      bVar1 = pcVar10[*(int *)(lVar9 + 0x30)];
      (**(code **)(*(long *)(lVar5 + -8) + 8))(pcVar10,lVar5);
    }
    else if (iVar4 == 1) {
      builtin_strncpy(acStack_108 + lVar9,"sureStra",8);
      builtin_strncpy(acStack_110 + lVar9,"backPres",8);
      builtin_strncpy(acStack_103 + lVar9,"trategy ",8);
      *(undefined4 *)(auStack_fb + lVar9) = 0x66667562;
      *(undefined4 *)(auStack_fb + lVar9 + 3) = 0x20726566;
      builtin_strncpy(acStack_f4 + lVar9,"continua",8);
      builtin_strncpy(acStack_ef + lVar9,"nuation ",8);
      builtin_strncpy(acStack_df + lVar9,"andingDe",8);
      builtin_strncpy(acStack_e7 + lVar9,"hasOutst",8);
      builtin_strncpy(acStack_da + lVar9,"gDemand ",8);
      *(undefined4 *)((long)&uStack_c2 + lVar9) = 0x2064657a;
      builtin_strncpy(acStack_ca + lVar9,"Initiali",8);
      builtin_strncpy(acStack_d2 + lVar9,"iterator",8);
      auStack_be[lVar9] = 0;
      lVar5 = local_b0;
      local_90 = local_b0;
      uVar7 = 0xff;
      FUN_1006883a0(0xff,local_a0);
      local_88 = uVar7;
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      local_80 = CONCAT71(extraout_var,OVar3.value);
      puStack_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_70 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar8 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_90,acStack_110 + lVar9,0);
      _swift_release(*(undefined8 *)(pcVar10 + *(int *)(lVar8 + 0x30)));
      bVar1 = pcVar10[*(int *)(lVar8 + 0x60)];
      (**(code **)(*(long *)(lVar5 + -8) + 8))(pcVar10,lVar5);
    }
    else {
      _swift_release(*(undefined8 *)pcVar10);
      bVar1 = *(byte *)((long)&puStack_a8 + lVar9);
      uVar7 = 0xff;
      FUN_1006883a0(0xff,local_a0);
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar9 = CONCAT71(extraout_var_00,OVar3.value);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3
                (0,uVar7,PTR___type_metadata_for_Swift_Bool_100eac570,lVar9,
                 "buffer iteratorInitialized failure ",0);
      (**(code **)(*(long *)(lVar9 + -8) + 8))(pcVar10 + *(int *)(lVar5 + 0x40),lVar9);
    }
    if ((bVar1 & 1) == 0) {
LAB_1005fe464:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005fe468);
      (*pcVar2)();
    }
  }
  else {
    if (iVar4 != 3) {
      if (iVar4 == 4) {
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005fe4e4);
      (*pcVar2)();
    }
    if (*pcVar10 != '\x01') goto LAB_1005fe464;
  }
  (**(code **)(lVar11 + 8))();
  *unaff_x20 = 1;
  _swift_storeEnumTagMultiPayload();
  return 0;
}



/* Address: 0x1005fe4e4 | FUN_1005fe4e4 */

void FUN_1005fe4e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Optional OVar5;
  bool bVar6;
  int iVar7;
  undefined7 extraout_var;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined7 extraout_var_00;
  long lVar11;
  byte *pbVar12;
  UnsafeContinuation UVar13;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined8 uVar14;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  undefined7 extraout_var_06;
  ulong uVar15;
  long unaff_x20;
  undefined8 *puVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  byte *pbVar26;
  char acStack_1c0 [8];
  char acStack_1b8 [5];
  char acStack_1b3 [8];
  undefined1 auStack_1ab [7];
  char acStack_1a4 [5];
  char acStack_19f [8];
  char acStack_197 [8];
  char acStack_18f [5];
  char acStack_18a [8];
  char acStack_182 [8];
  char acStack_17a [8];
  undefined1 auStack_172 [4];
  undefined1 auStack_16e [14];
  byte abStack_160 [12];
  uint local_154;
  long local_150;
  long local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  long local_f8;
  code *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined *local_88;
  undefined *puStack_80;
  long local_78;
  undefined8 uStack_70;
  
  lVar19 = *(long *)(param_3 + 0x10);
  local_128 = param_2;
  local_120 = param_4;
  local_118 = (code *)param_5;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_f8 = CONCAT71(extraout_var,OVar5.value);
  local_148 = *(long *)(local_f8 + -8);
  pbVar26 = abStack_160 + -(*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = *(long *)(lVar19 + -8);
  local_140 = (long)pbVar26 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = *(long *)(param_3 + 0x20);
  lVar21 = *(long *)(local_b8 + -8);
  uVar15 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130 = local_140 - uVar15;
  lVar25 = local_130 - uVar15;
  local_c0 = *(undefined8 *)(param_3 + 0x18);
  uStack_100 = *(undefined8 *)(param_3 + 0x30);
  uStack_d8 = *(undefined8 *)(param_3 + 0x30);
  local_108 = *(undefined8 *)(param_3 + 0x28);
  local_110 = *(undefined8 *)(param_3 + 0x40);
  uStack_e8 = *(undefined8 *)(param_3 + 0x40);
  local_f0 = *(code **)(param_3 + 0x38);
  lVar8 = 0;
  local_e0 = (undefined8 *)local_108;
  local_c8 = (long)local_f0;
  local_a0 = lVar19;
  local_98 = local_c0;
  local_90 = local_b8;
  local_88 = (undefined *)local_108;
  puStack_80 = (undefined *)uStack_100;
  local_78 = (long)local_f0;
  uStack_70 = local_110;
  FUN_100603da4(0,&local_a0);
  lVar23 = *(long *)(lVar8 + -8);
  puVar16 = (undefined8 *)(lVar25 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar23 + 0x10))(puVar16);
  puVar9 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar8);
  lVar8 = local_b8;
  iVar7 = (int)puVar9;
  if (iVar7 < 3) {
    local_138 = param_1;
    if (iVar7 == 0) {
      lVar20 = 0;
      _swift_getTupleTypeMetadata2
                (0,local_b8,PTR___type_metadata_for_Swift_Bool_100eac570,
                 "backPressureStrategy iteratorInitialized ",0);
      local_e0 = (undefined8 *)
                 CONCAT44(local_e0._4_4_,
                          (uint)*(byte *)((long)puVar16 + (long)*(int *)(lVar20 + 0x30)));
      local_f0 = *(code **)(lVar21 + 0x20);
      (*local_f0)(lVar25,puVar16,lVar8);
      uVar10 = local_128;
      FUN_100603db0(local_128,lVar19,local_120,local_118);
      local_118 = (code *)uVar10;
      FUN_1006035b0(&local_a0,FUN_1006035a4,0,uVar10,&DAT_100ef5140,lVar19,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      lVar20 = local_a0;
      (**(code **)(local_c8 + 8))(local_a0,lVar8);
      local_120 = CONCAT44(local_120._4_4_,(int)lVar20);
      (**(code **)(lVar23 + 8))();
      builtin_strncpy((char *)(puVar16 + -0xb),"sureStra",8);
      builtin_strncpy((char *)(puVar16 + -0xc),"backPres",8);
      builtin_strncpy((char *)((long)puVar16 + -0x53),"trategy ",8);
      *(undefined4 *)((long)puVar16 + -0x4b) = 0x66667562;
      *(undefined4 *)(puVar16 + -9) = 0x20726566;
      builtin_strncpy((char *)((long)puVar16 + -0x44),"continua",8);
      builtin_strncpy((char *)((long)puVar16 + -0x3f),"nuation ",8);
      builtin_strncpy((char *)((long)puVar16 + -0x2f),"andingDe",8);
      builtin_strncpy((char *)((long)puVar16 + -0x37),"hasOutst",8);
      builtin_strncpy((char *)((long)puVar16 + -0x2a),"gDemand ",8);
      *(undefined4 *)((long)puVar16 + -0x12) = 0x2064657a;
      builtin_strncpy((char *)((long)puVar16 + -0x1a),"Initiali",8);
      builtin_strncpy((char *)((long)puVar16 + -0x22),"iterator",8);
      *(undefined1 *)((long)puVar16 + -0xe) = 0;
      local_a0 = lVar8;
      uVar10 = 0xff;
      FUN_1006883a0(0xff,lVar19);
      local_98 = uVar10;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar5 = Swift::Optional::typeMetadataAccessor();
      local_90 = CONCAT71(extraout_var_02,OVar5.value);
      local_88 = PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar20 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,puVar16 + -0xc,0);
      iVar7 = *(int *)(lVar20 + 0x30);
      iVar2 = *(int *)(lVar20 + 0x40);
      iVar3 = *(int *)(lVar20 + 0x50);
      iVar4 = *(int *)(lVar20 + 0x60);
      (*local_f0)();
      *(code **)(unaff_x20 + iVar7) = local_118;
      *(undefined8 *)(unaff_x20 + iVar2) = 0;
      uVar1 = (uint)local_120 & 1;
      *(char *)(unaff_x20 + iVar3) = (char)uVar1;
      *(char *)(unaff_x20 + iVar4) = (char)local_e0;
      _swift_storeEnumTagMultiPayload();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar20 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,UVar13.unknown,lVar19,0,0);
      OVar5 = Swift::Optional::typeMetadataAccessor();
      lVar21 = (long)puVar16 -
               (*(long *)(*(long *)(CONCAT71(extraout_var_03,OVar5.value) + -8) + 0x40) + 0xfU &
               0xfffffffffffffff0);
      (**(code **)(*(long *)(lVar20 + -8) + 0x38))(lVar21,1,1,lVar20);
      *(undefined8 *)(lVar21 + -0x10) = local_110;
    }
    else {
      if (iVar7 != 1) {
        _swift_release(*puVar16);
        uVar14 = 0xff;
        FUN_1006883a0(0xff,lVar19);
        uVar10 = local_c0;
        OVar5 = Swift::Optional::typeMetadataAccessor();
        lVar8 = CONCAT71(extraout_var_04,OVar5.value);
        lVar20 = 0;
        _swift_getTupleTypeMetadata3
                  (0,uVar14,PTR___type_metadata_for_Swift_Bool_100eac570,lVar8,
                   "buffer iteratorInitialized failure ",0);
        (**(code **)(*(long *)(lVar8 + -8) + 8))
                  ((long)puVar16 + (long)*(int *)(lVar20 + 0x40),lVar8);
        param_1 = local_138;
        goto LAB_1005fed2c;
      }
      local_e0 = puVar16;
      builtin_strncpy((char *)(puVar16 + -0xb),"sureStra",8);
      builtin_strncpy((char *)(puVar16 + -0xc),"backPres",8);
      builtin_strncpy((char *)((long)puVar16 + -0x53),"trategy ",8);
      *(undefined4 *)((long)puVar16 + -0x4b) = 0x66667562;
      *(undefined4 *)(puVar16 + -9) = 0x20726566;
      builtin_strncpy((char *)((long)puVar16 + -0x44),"continua",8);
      builtin_strncpy((char *)((long)puVar16 + -0x3f),"nuation ",8);
      builtin_strncpy((char *)((long)puVar16 + -0x2f),"andingDe",8);
      builtin_strncpy((char *)((long)puVar16 + -0x37),"hasOutst",8);
      builtin_strncpy((char *)((long)puVar16 + -0x2a),"gDemand ",8);
      *(undefined4 *)((long)puVar16 + -0x12) = 0x2064657a;
      builtin_strncpy((char *)((long)puVar16 + -0x1a),"Initiali",8);
      builtin_strncpy((char *)((long)puVar16 + -0x22),"iterator",8);
      *(undefined1 *)((long)puVar16 + -0xe) = 0;
      local_a0 = local_b8;
      uVar10 = 0xff;
      FUN_1006883a0(0xff,lVar19);
      local_98 = uVar10;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar5 = Swift::Optional::typeMetadataAccessor();
      local_90 = CONCAT71(extraout_var_00,OVar5.value);
      local_88 = PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar11 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,puVar16 + -0xc,0);
      lVar8 = local_b8;
      puVar9 = local_e0;
      lVar17 = *(long *)((long)puVar16 + (long)*(int *)(lVar11 + 0x30));
      local_150 = *(long *)((long)puVar16 + (long)*(int *)(lVar11 + 0x40));
      local_e0 = (undefined8 *)
                 CONCAT44(local_e0._4_4_,
                          (uint)*(byte *)((long)puVar16 + (long)*(int *)(lVar11 + 0x60)));
      if (local_150 != 0) {
        local_f0 = (code *)lVar11;
        local_154 = (uint)*(byte *)((long)puVar16 + (long)*(int *)(lVar11 + 0x50));
        pcVar22 = *(code **)(lVar21 + 0x20);
        (*pcVar22)(local_130,puVar16,local_b8);
        uVar10 = 0;
        local_a8 = lVar17;
        local_a0 = lVar17;
        FUN_1006883a0(0,lVar19);
        _swift_getWitnessTable(0x100c6d780,uVar10);
        bVar6 = (extension_Swift)::Swift::Collection::get_isEmpty();
        if (!bVar6) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1005ff19c);
          (*pcVar22)();
        }
        pcVar24 = *(code **)(lVar23 + 8);
        (*pcVar24)();
        _swift_storeEnumTagMultiPayload();
        FUN_10067c1f0(local_128,uVar10,local_120,local_118);
        FUN_100681318(pbVar26,uVar10);
        pbVar12 = pbVar26;
        (**(code **)(lVar20 + 0x30))(pbVar26,1,lVar19);
        if ((int)pbVar12 != 1) {
          local_118 = *(code **)(lVar20 + 0x20);
          (*local_118)(local_140,pbVar26,lVar19);
          lVar8 = local_a0;
          local_120 = local_a0;
          _swift_retain(local_a0);
          FUN_1006035b0(&local_a8,FUN_1006035a4,0,lVar8,&DAT_100ef5140,lVar19,
                        PTR___type_metadata_for_Swift_Never_100eadc38,
                        PTR___type_metadata_for_Swift_Int_100eac6f8,
                        PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                       );
          lVar20 = local_b8;
          lVar8 = local_a8;
          (**(code **)(local_c8 + 8))(local_a8,local_b8);
          local_128 = CONCAT44(local_128._4_4_,(int)lVar8);
          (*pcVar24)();
          iVar7 = *(int *)((long)local_f0 + 0x30);
          iVar2 = *(int *)((long)local_f0 + 0x40);
          iVar3 = *(int *)((long)local_f0 + 0x50);
          iVar4 = *(int *)((long)local_f0 + 0x60);
          (*pcVar22)();
          lVar8 = local_120;
          *(long *)(unaff_x20 + iVar7) = local_120;
          *(undefined8 *)(unaff_x20 + iVar2) = 0;
          uVar1 = (uint)local_128 & 1;
          *(char *)(unaff_x20 + iVar3) = (char)uVar1;
          *(char *)(unaff_x20 + iVar4) = (char)local_e0;
          _swift_storeEnumTagMultiPayload();
          FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
          UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
          lVar21 = 0xff;
          _swift_getTupleTypeMetadata2(0xff,UVar13.unknown,lVar19,0,0);
          OVar5 = Swift::Optional::typeMetadataAccessor();
          plVar18 = (long *)((long)puVar9 -
                            (*(long *)(*(long *)(CONCAT71(extraout_var_06,OVar5.value) + -8) + 0x40)
                             + 0xfU & 0xfffffffffffffff0));
          iVar7 = *(int *)(lVar21 + 0x30);
          *plVar18 = local_150;
          (*local_118)((long)plVar18 + (long)iVar7,local_140,lVar19);
          (**(code **)(*(long *)(lVar21 + -8) + 0x38))(plVar18,0,1,lVar21);
          plVar18[-2] = local_110;
          FUN_100603220(local_138,uVar1,plVar18,lVar19,local_c0,lVar20,local_108,uStack_100,local_c8
                       );
          _swift_release(lVar8);
          return;
        }
        (**(code **)(local_148 + 8))(pbVar26,local_f8);
        (*pcVar24)();
        lVar8 = local_b8;
        iVar7 = *(int *)((long)local_f0 + 0x30);
        iVar2 = *(int *)((long)local_f0 + 0x40);
        iVar3 = *(int *)((long)local_f0 + 0x50);
        iVar4 = *(int *)((long)local_f0 + 0x60);
        (*pcVar22)();
        uVar1 = local_154;
        *(long *)(unaff_x20 + iVar7) = local_a0;
        *(long *)(unaff_x20 + iVar2) = local_150;
        *(char *)(unaff_x20 + iVar3) = (char)local_154;
        *(char *)(unaff_x20 + iVar4) = (char)local_e0;
        _swift_storeEnumTagMultiPayload();
        FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
        UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar20 = 0xff;
        _swift_getTupleTypeMetadata2(0xff,UVar13.unknown,lVar19,0,0);
        OVar5 = Swift::Optional::typeMetadataAccessor();
        lVar21 = (long)puVar9 -
                 (*(long *)(*(long *)(CONCAT71(extraout_var_01,OVar5.value) + -8) + 0x40) + 0xfU &
                 0xfffffffffffffff0);
        (**(code **)(*(long *)(lVar20 + -8) + 0x38))(lVar21,1,1,lVar20);
        *(undefined8 *)(lVar21 + -0x10) = local_110;
        FUN_100603220(local_138,uVar1,lVar21,lVar19,local_c0,lVar8,local_108,uStack_100,local_c8);
        return;
      }
      local_f0 = *(code **)(lVar21 + 0x20);
      (*local_f0)(lVar25,puVar16,local_b8);
      pcVar22 = *(code **)(lVar23 + 8);
      local_a0 = lVar17;
      (*pcVar22)();
      _swift_storeEnumTagMultiPayload();
      uVar10 = 0;
      FUN_1006883a0(0,lVar19);
      FUN_10067c1f0(local_128,uVar10,local_120,local_118);
      lVar20 = local_a0;
      _swift_retain(local_a0);
      FUN_1006035b0(&local_a8,FUN_1006035a4,0,lVar20,&DAT_100ef5140,lVar19,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      lVar21 = local_a8;
      (**(code **)(local_c8 + 8))(local_a8,lVar8);
      _swift_release(lVar20);
      (*pcVar22)();
      lVar8 = local_b8;
      iVar7 = *(int *)(lVar11 + 0x30);
      iVar2 = *(int *)(lVar11 + 0x40);
      iVar3 = *(int *)(lVar11 + 0x50);
      iVar4 = *(int *)(lVar11 + 0x60);
      (*local_f0)();
      *(long *)(unaff_x20 + iVar7) = lVar20;
      *(undefined8 *)(unaff_x20 + iVar2) = 0;
      uVar1 = (uint)lVar21 & 1;
      *(char *)(unaff_x20 + iVar3) = (char)uVar1;
      *(char *)(unaff_x20 + iVar4) = (char)local_e0;
      _swift_storeEnumTagMultiPayload();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      UVar13 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar20 = 0xff;
      _swift_getTupleTypeMetadata2(0xff,UVar13.unknown,lVar19,0,0);
      OVar5 = Swift::Optional::typeMetadataAccessor();
      lVar21 = (long)puVar9 -
               (*(long *)(*(long *)(CONCAT71(extraout_var_05,OVar5.value) + -8) + 0x40) + 0xfU &
               0xfffffffffffffff0);
      (**(code **)(*(long *)(lVar20 + -8) + 0x38))(lVar21,1,1,lVar20);
      *(undefined8 *)(lVar21 + -0x10) = local_110;
    }
    FUN_100603220(local_138,uVar1,lVar21,lVar19,local_c0,lVar8,local_108,uStack_100,local_c8);
  }
  else {
    uVar10 = local_c0;
    if (1 < iVar7 - 3U) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1005fe9c8);
      (*pcVar22)();
    }
LAB_1005fed2c:
    local_90 = local_b8;
    puStack_80 = (undefined *)uStack_d8;
    local_88 = (undefined *)local_e0;
    uStack_70 = uStack_e8;
    local_78 = (long)local_f0;
    uVar14 = 0;
    local_a0 = lVar19;
    local_98 = uVar10;
    FUN_100603cc8(0,&local_a0);
    _swift_storeEnumTagMultiPayload(param_1,uVar14,4);
  }
  return;
}



/* Address: 0x1005ff19c | FUN_1005ff19c */

void FUN_1005ff19c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  Optional OVar3;
  long lVar4;
  undefined8 uVar5;
  UnsafeContinuation UVar6;
  undefined7 extraout_var;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined7 extraout_var_00;
  
  local_68 = param_10;
  lVar4 = 0;
  local_a8 = param_3;
  local_a0 = param_1;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  lStack_80 = param_7;
  local_78 = param_8;
  uStack_70 = param_9;
  FUN_100603c8c(0,&local_98);
  lVar13 = *(long *)(lVar4 + -8);
  uVar10 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar12 = auStack_e0 + -uVar10;
  lVar11 = (long)puVar12 - uVar10;
  local_d0 = param_10;
  local_68 = param_10;
  uVar5 = 0;
  local_c8 = param_6;
  uStack_c0 = param_8;
  local_b8 = param_9;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  lStack_80 = param_7;
  local_78 = param_8;
  uStack_70 = param_9;
  FUN_100603d64(0,&local_98);
  local_b0 = param_2;
  FUN_1005ff468(lVar11,local_a8,uVar5);
  local_a8 = lVar13;
  (**(code **)(lVar13 + 0x10))(puVar12,lVar11,lVar4);
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  UVar6 = Swift::UnsafeContinuation::typeMetadataAccessor();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var,OVar3.value);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,UVar6.unknown,lVar13,0,0);
  puVar8 = puVar12;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(puVar12,1,lVar7);
  if ((int)puVar8 == 1) {
    OVar3 = Swift::Optional::typeMetadataAccessor();
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,OVar3.value,lVar4,0,0);
    lVar13 = local_a0;
    iVar1 = *(int *)(lVar7 + 0x30);
    (**(code **)(*(long *)(param_7 + -8) + 0x38))(local_a0,1,1,param_7);
    (**(code **)(local_a8 + 0x20))(lVar13 + iVar1,lVar11,lVar4);
  }
  else {
    local_d8 = (long)*(int *)(lVar7 + 0x30);
    local_88 = local_c8;
    local_78 = uStack_c0;
    uStack_70 = local_b8;
    local_68 = local_d0;
    lVar7 = 0;
    local_98 = param_4;
    uStack_90 = param_5;
    lStack_80 = param_7;
    FUN_100603a8c(0,&local_98);
    iVar1 = *(int *)(lVar7 + 0x4c);
    OVar3 = Swift::Optional::typeMetadataAccessor();
    lVar2 = local_a0;
    lVar7 = local_b0;
    lVar9 = CONCAT71(extraout_var_00,OVar3.value);
    (**(code **)(*(long *)(lVar9 + -8) + 0x20))(local_a0,local_b0 + iVar1,lVar9);
    (**(code **)(*(long *)(param_7 + -8) + 0x38))(lVar7 + iVar1,1,1,param_7);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,lVar9,lVar4,0,0);
    (**(code **)(local_a8 + 0x20))(lVar2 + *(int *)(lVar7 + 0x30),lVar11,lVar4);
    (**(code **)(*(long *)(lVar13 + -8) + 8))(puVar12 + local_d8,lVar13);
  }
  return;
}



/* Address: 0x1005ff468 | FUN_1005ff468 */

void FUN_1005ff468(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  Optional OVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  long lVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar8;
  UnsafeContinuation UVar9;
  undefined7 extraout_var_01;
  long lVar10;
  long lVar11;
  undefined7 extraout_var_02;
  long lVar12;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  long *plVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long *unaff_x20;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  byte abStack_140 [8];
  byte abStack_138 [5];
  byte abStack_133 [8];
  byte abStack_12b [7];
  byte abStack_124 [5];
  byte abStack_11f [8];
  byte abStack_117 [8];
  byte abStack_10f [5];
  byte abStack_10a [8];
  byte abStack_102 [8];
  byte abStack_fa [8];
  byte abStack_f2 [4];
  byte abStack_ee [14];
  byte abStack_e0 [8];
  long local_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_c0;
  undefined *puStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = *(undefined8 *)(param_3 + 0x40);
  lStack_a8 = *(long *)(param_3 + 0x18);
  local_b0 = *(long *)(param_3 + 0x10);
  puStack_b8 = *(undefined **)(param_3 + 0x28);
  local_c0 = *(long *)(param_3 + 0x20);
  uStack_78 = *(undefined8 *)(param_3 + 0x38);
  local_80 = *(undefined **)(param_3 + 0x30);
  lVar5 = 0;
  local_a0 = local_b0;
  local_98 = lStack_a8;
  local_90 = local_c0;
  puStack_88 = puStack_b8;
  FUN_100603da4(0,&local_a0);
  lVar16 = *(long *)(lVar5 + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = -uVar14;
  pbVar18 = abStack_e0 + lVar10;
  pbVar17 = pbVar18 + -uVar14;
  (**(code **)(lVar16 + 0x10))(pbVar17);
  pbVar6 = pbVar17;
  _swift_getEnumCaseMultiPayload(pbVar17,lVar5);
  lVar7 = local_c0;
  iVar4 = (int)pbVar6;
  if (iVar4 < 3) {
    local_d0 = param_2;
    if (iVar4 == 0) {
      lVar11 = 0;
      _swift_getTupleTypeMetadata2
                (0,local_c0,PTR___type_metadata_for_Swift_Bool_100eac570,
                 "backPressureStrategy iteratorInitialized ",0);
      lVar19 = local_b0;
      local_c8 = param_1;
      bVar1 = pbVar17[*(int *)(lVar11 + 0x30)];
      uVar8 = 0xff;
      FUN_1006883a0(0xff,local_b0);
      OVar2 = Swift::Optional::typeMetadataAccessor();
      lVar11 = CONCAT71(extraout_var_02,OVar2.value);
      lVar12 = 0;
      _swift_getTupleTypeMetadata3
                (0,uVar8,PTR___type_metadata_for_Swift_Bool_100eac570,lVar11,
                 "buffer iteratorInitialized failure ",0);
      iVar4 = *(int *)(lVar12 + 0x40);
      thunk_FUN_100683d64();
      *(long *)pbVar18 = lVar19;
      *(byte *)((long)&local_d8 + lVar10) = bVar1;
      (**(code **)(*(long *)(lVar11 + -8) + 0x10))(pbVar18 + iVar4,local_d0,lVar11);
      _swift_storeEnumTagMultiPayload(pbVar18,lVar5,2);
      (**(code **)(lVar16 + 0x28))();
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
      lVar10 = 0;
      _swift_getTupleTypeMetadata2(0,UVar9.unknown,lVar11,0,0);
      (**(code **)(*(long *)(lVar10 + -8) + 0x38))(local_c8,1,1,lVar10);
      pcVar15 = *(code **)(*(long *)(lVar7 + -8) + 8);
    }
    else {
      if (iVar4 != 1) {
        _swift_release(*(undefined8 *)pbVar17);
        uVar8 = 0xff;
        FUN_1006883a0(0xff,local_b0);
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar10 = CONCAT71(extraout_var_03,OVar2.value);
        lVar7 = 0;
        _swift_getTupleTypeMetadata3
                  (0,uVar8,PTR___type_metadata_for_Swift_Bool_100eac570,lVar10,
                   "buffer iteratorInitialized failure ",0);
        (**(code **)(*(long *)(lVar10 + -8) + 8))(pbVar17 + *(int *)(lVar7 + 0x40),lVar10);
        goto LAB_1005ff934;
      }
      local_c8 = param_1;
      pbVar17[-0x58] = 's';
      pbVar17[-0x57] = 'u';
      pbVar17[-0x56] = 'r';
      pbVar17[-0x55] = 'e';
      pbVar17[-0x54] = 'S';
      pbVar17[-0x53] = 't';
      pbVar17[-0x52] = 'r';
      pbVar17[-0x51] = 'a';
      pbVar17[-0x60] = 'b';
      pbVar17[-0x5f] = 'a';
      pbVar17[-0x5e] = 'c';
      pbVar17[-0x5d] = 'k';
      pbVar17[-0x5c] = 'P';
      pbVar17[-0x5b] = 'r';
      pbVar17[-0x5a] = 'e';
      pbVar17[-0x59] = 's';
      pbVar17[-0x53] = 't';
      pbVar17[-0x52] = 'r';
      pbVar17[-0x51] = 'a';
      pbVar17[-0x50] = 't';
      pbVar17[-0x4f] = 'e';
      pbVar17[-0x4e] = 'g';
      pbVar17[-0x4d] = 'y';
      pbVar17[-0x4c] = ' ';
      pbVar17[-0x4b] = 0x62;
      pbVar17[-0x4a] = 0x75;
      pbVar17[-0x49] = 0x66;
      pbVar17[-0x48] = 0x66;
      pbVar17[-0x48] = 0x66;
      pbVar17[-0x47] = 0x65;
      pbVar17[-0x46] = 0x72;
      pbVar17[-0x45] = 0x20;
      pbVar17[-0x44] = 'c';
      pbVar17[-0x43] = 'o';
      pbVar17[-0x42] = 'n';
      pbVar17[-0x41] = 't';
      pbVar17[-0x40] = 'i';
      pbVar17[-0x3f] = 'n';
      pbVar17[-0x3e] = 'u';
      pbVar17[-0x3d] = 'a';
      pbVar17[-0x3f] = 'n';
      pbVar17[-0x3e] = 'u';
      pbVar17[-0x3d] = 'a';
      pbVar17[-0x3c] = 't';
      pbVar17[-0x3b] = 'i';
      pbVar17[-0x3a] = 'o';
      pbVar17[-0x39] = 'n';
      pbVar17[-0x38] = ' ';
      pbVar17[-0x2f] = 'a';
      pbVar17[-0x2e] = 'n';
      pbVar17[-0x2d] = 'd';
      pbVar17[-0x2c] = 'i';
      pbVar17[-0x2b] = 'n';
      pbVar17[-0x2a] = 'g';
      pbVar17[-0x29] = 'D';
      pbVar17[-0x28] = 'e';
      pbVar17[-0x37] = 'h';
      pbVar17[-0x36] = 'a';
      pbVar17[-0x35] = 's';
      pbVar17[-0x34] = 'O';
      pbVar17[-0x33] = 'u';
      pbVar17[-0x32] = 't';
      pbVar17[-0x31] = 's';
      pbVar17[-0x30] = 't';
      pbVar17[-0x2a] = 'g';
      pbVar17[-0x29] = 'D';
      pbVar17[-0x28] = 'e';
      pbVar17[-0x27] = 'm';
      pbVar17[-0x26] = 'a';
      pbVar17[-0x25] = 'n';
      pbVar17[-0x24] = 'd';
      pbVar17[-0x23] = ' ';
      pbVar17[-0x12] = 0x7a;
      pbVar17[-0x11] = 0x65;
      pbVar17[-0x10] = 100;
      pbVar17[-0xf] = 0x20;
      pbVar17[-0x1a] = 'I';
      pbVar17[-0x19] = 'n';
      pbVar17[-0x18] = 'i';
      pbVar17[-0x17] = 't';
      pbVar17[-0x16] = 'i';
      pbVar17[-0x15] = 'a';
      pbVar17[-0x14] = 'l';
      pbVar17[-0x13] = 'i';
      pbVar17[-0x22] = 'i';
      pbVar17[-0x21] = 't';
      pbVar17[-0x20] = 'e';
      pbVar17[-0x1f] = 'r';
      pbVar17[-0x1e] = 'a';
      pbVar17[-0x1d] = 't';
      pbVar17[-0x1c] = 'o';
      pbVar17[-0x1b] = 'r';
      pbVar17[-0xe] = 0;
      lVar10 = local_b0;
      local_d8 = local_c0;
      local_a0 = local_c0;
      lVar7 = 0xff;
      FUN_1006883a0(0xff,local_b0);
      local_c0 = lVar7;
      local_98 = lVar7;
      OVar2 = Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      local_b0 = CONCAT71(extraout_var,OVar2.value);
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      local_90 = CONCAT71(extraout_var_00,OVar2.value);
      puStack_88 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar7 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,pbVar17 + -0x60,0);
      lVar5 = *(long *)(pbVar17 + *(int *)(lVar7 + 0x30));
      lVar19 = *(long *)(pbVar17 + *(int *)(lVar7 + 0x40));
      bVar1 = pbVar17[*(int *)(lVar7 + 0x60)];
      if (lVar19 == 0) {
        (**(code **)(lVar16 + 8))();
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar7 = CONCAT71(extraout_var_04,OVar2.value);
        lVar10 = 0;
        _swift_getTupleTypeMetadata3
                  (0,local_c0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar7,
                   "buffer iteratorInitialized failure ",0);
        iVar4 = *(int *)(lVar10 + 0x40);
        *unaff_x20 = lVar5;
        *(byte *)(unaff_x20 + 1) = bVar1;
        (**(code **)(*(long *)(lVar7 + -8) + 0x10))
                  ((undefined1 *)((long)unaff_x20 + (long)iVar4),local_d0,lVar7);
        _swift_storeEnumTagMultiPayload();
        FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
        UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
        lVar10 = 0;
        _swift_getTupleTypeMetadata2(0,UVar9.unknown,lVar7,0,0);
        pcVar15 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
        uVar8 = 1;
        plVar13 = local_c8;
      }
      else {
        local_c0 = CONCAT44(local_c0._4_4_,(uint)bVar1);
        uVar8 = 0;
        local_a0 = lVar5;
        FUN_1006883a0(0,lVar10);
        _swift_getWitnessTable(0x100c6d780,uVar8);
        bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
        _swift_release(lVar5);
        if (!bVar3) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1005ffacc);
          (*pcVar15)();
        }
        (**(code **)(lVar16 + 8))();
        *(char *)unaff_x20 = (char)local_c0;
        _swift_storeEnumTagMultiPayload();
        FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
        UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar7 = CONCAT71(extraout_var_01,OVar2.value);
        lVar10 = 0;
        _swift_getTupleTypeMetadata2(0,UVar9.unknown,lVar7,0,0);
        plVar13 = local_c8;
        iVar4 = *(int *)(lVar10 + 0x30);
        *local_c8 = lVar19;
        (**(code **)(*(long *)(lVar7 + -8) + 0x10))((long)local_c8 + (long)iVar4,local_d0,lVar7);
        pcVar15 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
        uVar8 = 0;
      }
      (*pcVar15)(plVar13,uVar8,1,lVar10);
      pcVar15 = *(code **)(*(long *)(local_d8 + -8) + 8);
      lVar7 = local_d8;
    }
    (*pcVar15)(pbVar17,lVar7);
  }
  else {
    if (1 < iVar4 - 3U) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1005ff774);
      (*pcVar15)();
    }
LAB_1005ff934:
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    UVar9 = Swift::UnsafeContinuation::typeMetadataAccessor();
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar10 = 0;
    _swift_getTupleTypeMetadata2(0,UVar9.unknown,OVar2.value,0,0);
    (**(code **)(*(long *)(lVar10 + -8) + 0x38))(param_1,1,1,lVar10);
  }
  return;
}



/* Address: 0x1005ffacc | FUN_1005ffacc */

void FUN_1005ffacc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  Optional OVar1;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_8;
  *(undefined8 *)(unaff_x22 + 0x158) = param_9;
  *(undefined8 *)(unaff_x22 + 0x140) = param_6;
  *(undefined8 *)(unaff_x22 + 0x148) = param_7;
  *(long *)(unaff_x22 + 0x130) = param_4;
  *(undefined8 *)(unaff_x22 + 0x138) = param_5;
  *(undefined8 *)(unaff_x22 + 0x120) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = param_3;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  lVar5 = *(long *)(param_4 + -8);
  *(long *)(unaff_x22 + 0x160) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x178) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x180) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(long *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_6;
  *(undefined8 *)(unaff_x22 + 200) = param_7;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_9;
  lVar5 = 0xff;
  FUN_100603e1c();
  *(long *)(unaff_x22 + 0x1a0) = lVar5;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var_00,OVar1.value);
  *(long *)(unaff_x22 + 0x1a8) = lVar6;
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar5,lVar6,0,0);
  *(long *)(unaff_x22 + 0x1b0) = lVar4;
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar3;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar3;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar3;
  _swift_task_switch(FUN_1005ffc88,0,0);
  return;
}



/* Address: 0x1005ffc88 | FUN_1005ffc88 */

void FUN_1005ffc88(void)

{
  Optional OVar1;
  int iVar2;
  undefined8 uVar3;
  CancellationError CVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  String SVar23;
  long local_70;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar10 = *(long *)(unaff_x22 + 0x1e0);
  lVar14 = *(long *)(unaff_x22 + 0x1b8);
  lVar19 = *(long *)(unaff_x22 + 0x1c0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar22 = *(long *)(unaff_x22 + 0x1b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar3;
  puVar8 = (undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0xf8) = *puVar8;
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = 0;
  FUN_100603a8c(0);
  FUN_10066ed6c(lVar14,FUN_10060a490,unaff_x22 + 0x60,uVar11,uVar3,lVar22);
  iVar2 = *(int *)(lVar22 + 0x30);
  (**(code **)(lVar10 + 0x20))(uVar15,lVar14,uVar13);
  (**(code **)(lVar19 + 0x20))(uVar17,lVar14 + iVar2,uVar12);
  (**(code **)(lVar10 + 0x10))(uVar7,uVar15,uVar13);
  _swift_getEnumCaseMultiPayload(uVar7,uVar13);
  iVar2 = (int)uVar7;
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1f0);
        lVar10 = *(long *)(unaff_x22 + 0x1e0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
        lVar14 = *(long *)(unaff_x22 + 0x128);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
        (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1a8));
        (**(code **)(lVar10 + 8))(uVar15,uVar12);
        lVar10 = *(long *)(lVar14 + -8);
        (**(code **)(lVar10 + 0x20))(uVar17,uVar7,lVar14);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
        lVar19 = *(long *)(unaff_x22 + 0x1c0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x1a8);
        lVar14 = *(long *)(unaff_x22 + 0x140);
        lVar10 = *(long *)(*(long *)(unaff_x22 + 0x128) + -8);
        (**(code **)(lVar10 + 0x20))
                  (*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0x1e8));
        (**(code **)(lVar19 + 0x10))(uVar7,uVar17,uVar12);
        lVar19 = *(long *)(lVar14 + -8);
        (**(code **)(lVar19 + 0x30))(uVar7,1,lVar14);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x1f0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
        lVar14 = *(long *)(unaff_x22 + 0x1e0);
        if ((int)uVar7 == 1) {
          uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x1c0) + 8);
          (*UNRECOVERED_JUMPTABLE)(uVar17,*(undefined8 *)(unaff_x22 + 0x1a8));
          (**(code **)(lVar14 + 8))(uVar12,uVar7);
          puVar8 = (undefined8 *)(unaff_x22 + 0x1a8);
        }
        else {
          lVar22 = *(long *)(unaff_x22 + 0x1c0);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
          (**(code **)(*(long *)(unaff_x22 + 0x158) + 8))(*(undefined8 *)(unaff_x22 + 0x140));
          (**(code **)(lVar22 + 8))(uVar17,uVar15);
          (**(code **)(lVar14 + 8))(uVar12,uVar7);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 8);
        }
        lVar14 = *(long *)(unaff_x22 + 0x128);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
        (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0x1d0),*puVar8);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 0x38);
        uVar7 = 0;
      }
    }
    else if (iVar2 == 2) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
      lVar14 = *(long *)(unaff_x22 + 0x1c0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1a8);
      lVar10 = *(long *)(unaff_x22 + 0x140);
      (**(code **)(*(long *)(unaff_x22 + 0x180) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x1e8),
                 *(undefined8 *)(unaff_x22 + 0x178));
      (**(code **)(lVar14 + 0x10))(uVar7,uVar17,uVar12);
      lVar14 = *(long *)(lVar10 + -8);
      (**(code **)(lVar14 + 0x30))(uVar7,1,lVar10);
      if ((int)uVar7 == 1) {
        lVar14 = *(long *)(unaff_x22 + 0x1c0);
        puVar8 = (undefined8 *)(unaff_x22 + 0x1a8);
      }
      else {
        (**(code **)(*(long *)(unaff_x22 + 0x158) + 0x10))(*(undefined8 *)(unaff_x22 + 0x140));
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 400);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x178);
      lVar10 = *(long *)(unaff_x22 + 0x180);
      lVar19 = *(long *)(unaff_x22 + 0x160);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
      (**(code **)(lVar14 + 8))(*(undefined8 *)(unaff_x22 + 0x1c8),*puVar8);
      (**(code **)(lVar10 + 0x10))(uVar7,uVar12,uVar17);
      (**(code **)(lVar19 + 0x30))(uVar7,1,uVar15);
      if ((int)uVar7 != 1) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
        local_70 = *(long *)(unaff_x22 + 0x1e0);
        lVar19 = *(long *)(unaff_x22 + 0x1c0);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x178);
        lVar14 = *(long *)(unaff_x22 + 0x180);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x170);
        lVar10 = *(long *)(unaff_x22 + 0x160);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
        (**(code **)(lVar10 + 0x20))(uVar11,*(undefined8 *)(unaff_x22 + 400),uVar13);
        _swift_allocError(uVar13,uVar3,0,0);
        (**(code **)(lVar10 + 0x10))(uVar3,uVar11,uVar13);
        _swift_willThrow();
        (**(code **)(lVar10 + 8))(uVar11,uVar13);
        (**(code **)(lVar14 + 8))(uVar12,uVar17);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 8);
LAB_100600448:
        (*UNRECOVERED_JUMPTABLE)(uVar7,uVar15);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1d0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x1d8);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
        uVar16 = *(undefined8 *)(unaff_x22 + 400);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x170);
        (**(code **)(local_70 + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x1a0));
        _swift_task_dealloc(uVar11);
        _swift_task_dealloc(uVar7);
        _swift_task_dealloc(uVar13);
        _swift_task_dealloc(uVar17);
        _swift_task_dealloc(uVar21);
        _swift_task_dealloc(uVar20);
        _swift_task_dealloc(uVar12);
        _swift_task_dealloc(uVar16);
        _swift_task_dealloc(uVar15);
        _swift_task_dealloc(uVar18);
        _swift_task_dealloc(uVar3);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_100600390;
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
      lVar10 = *(long *)(unaff_x22 + 0x1e0);
      lVar19 = *(long *)(unaff_x22 + 0x1c0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
      lVar14 = *(long *)(unaff_x22 + 0x128);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
      (**(code **)(*(long *)(unaff_x22 + 0x180) + 8))
                (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x178));
      (**(code **)(lVar19 + 8))(uVar7,uVar15);
      (**(code **)(lVar10 + 8))(uVar3,uVar12);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar14 + -8) + 0x38);
      uVar7 = 1;
    }
    else {
      uVar9 = *(ulong *)(unaff_x22 + 0x188);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
      CVar4 = Swift::CancellationError::typeMetadataAccessor();
      uVar5 = *(long *)(*(long *)(CVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar5);
      Swift::CancellationError::init();
      _swift_dynamicCast(uVar9,uVar5,CVar4.unknown,uVar7,6);
      if ((uVar9 & 1) != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
        local_70 = *(long *)(unaff_x22 + 0x1e0);
        lVar10 = *(long *)(unaff_x22 + 0x1c0);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
        lVar14 = *(long *)(unaff_x22 + 0x160);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x168);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
        (**(code **)(lVar14 + 0x38))(uVar3,0,1,uVar11);
        (**(code **)(lVar14 + 0x20))(uVar17,uVar3,uVar11);
        _swift_task_dealloc(uVar5);
        _swift_allocError(uVar11,uVar12,0,0);
        (**(code **)(lVar14 + 0x10))(uVar12,uVar17,uVar11);
        _swift_willThrow();
        (**(code **)(lVar14 + 8))(uVar17,uVar11);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
        goto LAB_100600448;
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
      lVar19 = *(long *)(unaff_x22 + 0x1e0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
      lVar10 = *(long *)(unaff_x22 + 0x180);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x188);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
      lVar22 = *(long *)(unaff_x22 + 0x160);
      lVar14 = *(long *)(unaff_x22 + 0x128);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
      (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
                (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1a8));
      (**(code **)(lVar19 + 8))(uVar11,uVar7);
      (**(code **)(lVar22 + 0x38))(uVar12,1,1,uVar15);
      (**(code **)(lVar10 + 8))(uVar12,uVar3);
      _swift_task_dealloc(uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar14 + -8) + 0x38);
      uVar7 = 1;
    }
  }
  else {
    if (iVar2 - 6U < 2) {
      SVar23.bridgeObject = (void *)0x2;
      SVar23.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar23,(StaticString)0x0,0xe000000000000000,0xdaeab0);
      return;
    }
    if (iVar2 != 4) {
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x130);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x128);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x140);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x138);
      *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x150);
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x148);
      *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x158);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x120);
      plVar6 = (long *)0x20;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1f8) = plVar6;
      OVar1 = Swift::Optional::typeMetadataAccessor();
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1006004e0;
      FUN_1005da2e0(*(undefined8 *)(unaff_x22 + 0x118),0,0,FUN_10060a4ac,unaff_x22 + 0x10,
                    OVar1.value);
      return;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x1f0);
    lVar10 = *(long *)(unaff_x22 + 0x1e0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
    lVar14 = *(long *)(unaff_x22 + 0x128);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
              (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1a8));
    (**(code **)(lVar10 + 8))(uVar12,uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar14 + -8) + 0x38);
    uVar7 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar17,uVar7,1,lVar14);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar12 = *(undefined8 *)(unaff_x22 + 400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100600390:
                    /* WARNING: Could not recover jumptable at 0x0001006003ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006004e0 | FUN_1006004e0 */

void FUN_1006004e0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100600544;
  }
  else {
    pcVar1 = FUN_100600634;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100600544 | FUN_100600544 */

void FUN_100600544(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f0);
  lVar4 = *(long *)(unaff_x22 + 0x1e0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1a8));
  (**(code **)(lVar4 + 8))(uVar8,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100600630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100600634 | FUN_100600634 */

void FUN_100600634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  (**(code **)(*(long *)(unaff_x22 + 0x1c0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x1a8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar9 = *(undefined8 *)(unaff_x22 + 400);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
  (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x1a0));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100600724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100600728 | FUN_100600728 */

void FUN_100600728(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code *pcVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined7 extraout_var;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined7 extraout_var_00;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  String SVar15;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar4 = 0;
  local_a0 = param_1;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = param_8;
  local_68 = param_9;
  FUN_100603e1c(0,&local_98);
  lVar14 = *(long *)(lVar4 + -8);
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar13 = auStack_e0 + -uVar11;
  lVar12 = (long)puVar13 - uVar11;
  uVar5 = 0;
  local_d8 = param_3;
  uStack_d0 = param_4;
  local_c8 = param_5;
  uStack_c0 = param_7;
  local_b8 = param_8;
  uStack_b0 = param_9;
  local_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_7;
  local_70 = param_8;
  local_68 = param_9;
  FUN_100603d64(0,&local_98);
  local_a8 = param_2;
  FUN_100600a5c(lVar12,0,uVar5);
  (**(code **)(lVar14 + 0x10))(puVar13,lVar12,lVar4);
  puVar6 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar4);
  iVar3 = (int)puVar6;
  if (iVar3 < 3) {
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar8 = CONCAT71(extraout_var,OVar2.value);
        lVar7 = 0;
        _swift_getTupleTypeMetadata2(0,lVar4,lVar8,0,0);
        lVar9 = local_a0;
        iVar3 = *(int *)(lVar7 + 0x30);
        (**(code **)(lVar14 + 0x20))(local_a0,lVar12,lVar4);
        local_98 = local_d8;
        local_90 = uStack_d0;
        local_88 = local_c8;
        local_78 = uStack_c0;
        local_70 = local_b8;
        local_68 = uStack_b0;
        lVar12 = 0;
        local_80 = param_6;
        FUN_100603a8c(0,&local_98);
        (**(code **)(*(long *)(lVar8 + -8) + 0x10))
                  (lVar9 + iVar3,local_a8 + *(int *)(lVar12 + 0x4c),lVar8);
      }
      else {
        local_98 = local_d8;
        local_90 = uStack_d0;
        local_88 = local_c8;
        local_78 = uStack_c0;
        local_70 = local_b8;
        local_68 = uStack_b0;
        lVar9 = 0;
        local_80 = param_6;
        FUN_100603a8c(0,&local_98);
        iVar3 = *(int *)(lVar9 + 0x4c);
        OVar2 = Swift::Optional::typeMetadataAccessor();
        lVar7 = CONCAT71(extraout_var_00,OVar2.value);
        lVar10 = 0;
        _swift_getTupleTypeMetadata2(0,lVar4,lVar7,0,0);
        lVar8 = local_a0;
        lVar9 = local_a8;
        (**(code **)(*(long *)(lVar7 + -8) + 0x20))
                  (local_a0 + *(int *)(lVar10 + 0x30),local_a8 + iVar3,lVar7);
        (**(code **)(*(long *)(param_6 + -8) + 0x38))(lVar9 + iVar3,1,1,param_6);
        (**(code **)(lVar14 + 0x20))(lVar8,lVar12,lVar4);
      }
      (**(code **)(lVar14 + 8))(puVar13,lVar4);
      return;
    }
    (**(code **)(lVar14 + 8))(puVar13,lVar4);
  }
  else if (2 < iVar3 - 3U) {
    *(undefined4 *)(lVar12 + -8) = 0;
    *(undefined8 *)(lVar12 + -0x10) = 0x247;
    SVar15.bridgeObject = (void *)0x2;
    SVar15.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar15,(StaticString)0x0,0xe000000000000000,0xdaeab0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100600914);
    (*pcVar1)();
  }
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,OVar2.value,0,0);
  lVar9 = local_a0;
  iVar3 = *(int *)(lVar8 + 0x30);
  (**(code **)(lVar14 + 0x20))(local_a0,lVar12,lVar4);
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(lVar9 + iVar3,1,1,param_6);
  return;
}



/* Address: 0x100600a5c | FUN_100600a5c */

void FUN_100600a5c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  Optional OVar7;
  int iVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *unaff_x20;
  undefined8 *puVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  ulong uVar28;
  char acStack_1c0 [8];
  char acStack_1b8 [5];
  char acStack_1b3 [8];
  undefined1 auStack_1ab [7];
  char acStack_1a4 [5];
  char acStack_19f [8];
  char acStack_197 [8];
  char acStack_18f [5];
  char acStack_18a [8];
  char acStack_182 [8];
  char acStack_17a [8];
  undefined4 uStack_172;
  undefined1 auStack_16e [14];
  ulong local_160;
  long lStack_158;
  ulong local_150;
  long lStack_148;
  long local_140;
  long local_138;
  code *local_130;
  code *local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  code *local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  ulong local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined *local_88;
  undefined *puStack_80;
  ulong local_78;
  long lStack_70;
  
  uVar19 = *(undefined8 *)(param_3 + 0x18);
  local_110 = param_2;
  OVar7 = Swift::Optional::typeMetadataAccessor();
  local_120 = CONCAT71(extraout_var,OVar7.value);
  lVar18 = *(long *)(local_120 + -8);
  pcVar6 = (code *)((long)&local_160 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar24 = *(ulong *)(param_3 + 0x10);
  local_128 = pcVar6;
  OVar7 = Swift::Optional::typeMetadataAccessor();
  local_100 = (code *)CONCAT71(extraout_var_00,OVar7.value);
  local_118 = *(long *)(local_100 + -8);
  uVar12 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)pcVar6 - uVar12;
  local_140 = lVar15 - uVar12;
  local_108 = *(code **)(uVar24 - 8);
  uVar12 = *(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar26 = local_140 - uVar12;
  local_138 = lVar26 - uVar12;
  uVar14 = *(ulong *)(param_3 + 0x20);
  lVar13 = *(long *)(uVar14 - 8);
  uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_130 = (code *)(local_138 - uVar12);
  lVar22 = (long)local_130 - uVar12;
  local_f0 = *(long *)(param_3 + 0x30);
  lStack_148 = *(long *)(param_3 + 0x30);
  local_150 = *(ulong *)(param_3 + 0x28);
  local_e8 = *(long *)(param_3 + 0x40);
  lStack_158 = *(long *)(param_3 + 0x40);
  uVar28 = *(ulong *)(param_3 + 0x38);
  lVar9 = 0;
  local_160 = uVar28;
  local_f8 = local_150;
  local_a0 = uVar24;
  local_98 = uVar19;
  local_90 = uVar14;
  local_88 = (undefined *)local_150;
  puStack_80 = (undefined *)local_f0;
  local_78 = uVar28;
  lStack_70 = local_e8;
  FUN_100603da4(0,&local_a0);
  lVar20 = *(long *)(lVar9 + -8);
  uVar12 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar25 = lVar22 - uVar12;
  puVar16 = (undefined8 *)(lVar25 - uVar12);
  (**(code **)(lVar20 + 0x10))(puVar16);
  puVar10 = puVar16;
  _swift_getEnumCaseMultiPayload(puVar16,lVar9);
  puVar5 = PTR___type_metadata_for_Swift_Bool_100eac570;
  iVar8 = (int)puVar10;
  if (2 < iVar8) {
    if (iVar8 == 3) {
      uVar1 = *(undefined1 *)puVar16;
      (**(code **)(lVar20 + 8))(unaff_x20,lVar9);
      *(undefined1 *)unaff_x20 = uVar1;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,4);
      local_88 = (undefined *)local_f8;
      puStack_80 = (undefined *)local_f0;
      lStack_70 = local_e8;
      uVar11 = 0;
      local_a0 = uVar24;
      local_98 = uVar19;
      local_90 = uVar14;
      local_78 = uVar28;
      FUN_100603e1c(0,&local_a0);
      uVar19 = 3;
    }
    else {
      if (iVar8 != 4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006016e8);
        (*pcVar6)();
      }
      local_88 = (undefined *)local_f8;
      puStack_80 = (undefined *)local_f0;
      lStack_70 = local_e8;
      uVar11 = 0;
      local_a0 = uVar24;
      local_98 = uVar19;
      local_90 = uVar14;
      local_78 = uVar28;
      FUN_100603e1c(0,&local_a0);
      uVar19 = 4;
    }
    goto LAB_1006015e0;
  }
  if (iVar8 == 0) {
    lVar15 = 0;
    _swift_getTupleTypeMetadata2
              (0,uVar14,PTR___type_metadata_for_Swift_Bool_100eac570,
               "backPressureStrategy iteratorInitialized ",0);
    uVar1 = *(undefined1 *)((long)puVar16 + (long)*(int *)(lVar15 + 0x30));
    local_e8 = lVar13;
    (**(code **)(lVar13 + 0x20))(lVar22,puVar16,uVar14);
    if (local_110 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006016e4);
      (*pcVar6)();
    }
    builtin_strncpy((char *)(puVar16 + -0xb),"sureStra",8);
    builtin_strncpy((char *)(puVar16 + -0xc),"backPres",8);
    builtin_strncpy((char *)((long)puVar16 + -0x53),"trategy ",8);
    *(undefined4 *)((long)puVar16 + -0x4b) = 0x66667562;
    *(undefined4 *)(puVar16 + -9) = 0x20726566;
    builtin_strncpy((char *)((long)puVar16 + -0x44),"continua",8);
    builtin_strncpy((char *)((long)puVar16 + -0x3f),"nuation ",8);
    builtin_strncpy((char *)((long)puVar16 + -0x2f),"andingDe",8);
    builtin_strncpy((char *)((long)puVar16 + -0x37),"hasOutst",8);
    builtin_strncpy((char *)((long)puVar16 + -0x2a),"gDemand ",8);
    *(undefined4 *)((long)puVar16 + -0x12) = 0x2064657a;
    builtin_strncpy((char *)((long)puVar16 + -0x1a),"Initiali",8);
    builtin_strncpy((char *)((long)puVar16 + -0x22),"iterator",8);
    *(undefined1 *)((long)puVar16 + -0xe) = 0;
    uVar11 = 0xff;
    local_a0 = uVar14;
    FUN_1006883a0(0xff,uVar24);
    local_98 = uVar11;
    FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
    Swift::UnsafeContinuation::typeMetadataAccessor();
    OVar7 = Swift::Optional::typeMetadataAccessor();
    local_90 = CONCAT71(extraout_var_02,OVar7.value);
    local_88 = puVar5;
    puStack_80 = puVar5;
    lVar15 = 0;
    _swift_getTupleTypeMetadata(0,0x10005,&local_a0,puVar16 + -0xc,0);
    lVar13 = local_e8;
    local_f0 = (long)*(int *)(lVar15 + 0x30);
    iVar8 = *(int *)(lVar15 + 0x40);
    iVar2 = *(int *)(lVar15 + 0x50);
    iVar3 = *(int *)(lVar15 + 0x60);
    (**(code **)(local_e8 + 0x10))(lVar25,lVar22,uVar14);
    uVar12 = uVar24;
    thunk_FUN_100683d64();
    (**(code **)(lVar13 + 8))(lVar22,uVar14);
    *(ulong *)(lVar25 + local_f0) = uVar12;
    *(undefined8 *)(lVar25 + iVar8) = 0;
    *(undefined1 *)(lVar25 + iVar2) = 0;
    *(undefined1 *)(lVar25 + iVar3) = uVar1;
    _swift_storeEnumTagMultiPayload(lVar25,lVar9,1);
    (**(code **)(lVar20 + 0x28))(unaff_x20,lVar25,lVar9);
    puStack_80 = (undefined *)lStack_148;
    local_88 = (undefined *)local_150;
    lStack_70 = lStack_158;
    local_78 = local_160;
LAB_1006011b4:
    uVar11 = 0;
    local_a0 = uVar24;
    local_98 = uVar19;
    local_90 = uVar14;
    FUN_100603e1c(0,&local_a0);
    uVar19 = 5;
  }
  else {
    if (iVar8 == 1) {
      builtin_strncpy((char *)(puVar16 + -0xb),"sureStra",8);
      builtin_strncpy((char *)(puVar16 + -0xc),"backPres",8);
      builtin_strncpy((char *)((long)puVar16 + -0x53),"trategy ",8);
      *(undefined4 *)((long)puVar16 + -0x4b) = 0x66667562;
      *(undefined4 *)(puVar16 + -9) = 0x20726566;
      builtin_strncpy((char *)((long)puVar16 + -0x44),"continua",8);
      builtin_strncpy((char *)((long)puVar16 + -0x3f),"nuation ",8);
      builtin_strncpy((char *)((long)puVar16 + -0x2f),"andingDe",8);
      builtin_strncpy((char *)((long)puVar16 + -0x37),"hasOutst",8);
      builtin_strncpy((char *)((long)puVar16 + -0x2a),"gDemand ",8);
      *(undefined4 *)((long)puVar16 + -0x12) = 0x2064657a;
      builtin_strncpy((char *)((long)puVar16 + -0x1a),"Initiali",8);
      builtin_strncpy((char *)((long)puVar16 + -0x22),"iterator",8);
      *(undefined1 *)((long)puVar16 + -0xe) = 0;
      uVar11 = 0xff;
      local_a0 = uVar14;
      FUN_1006883a0(0xff,uVar24);
      local_98 = uVar11;
      FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
      pcVar17 = local_100;
      Swift::UnsafeContinuation::typeMetadataAccessor();
      OVar7 = Swift::Optional::typeMetadataAccessor();
      local_90 = CONCAT71(extraout_var_01,OVar7.value);
      local_88 = PTR___type_metadata_for_Swift_Bool_100eac570;
      puStack_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
      lVar15 = 0;
      _swift_getTupleTypeMetadata(0,0x10005,&local_a0,puVar16 + -0xc,0);
      pcVar6 = local_130;
      if (*(long *)((long)puVar16 + (long)*(int *)(lVar15 + 0x40)) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006016ec);
        (*pcVar6)();
      }
      local_150 = CONCAT44(local_150._4_4_,
                           (uint)*(byte *)((long)puVar16 + (long)*(int *)(lVar15 + 0x50)));
      local_120 = CONCAT44(local_120._4_4_,
                           (uint)*(byte *)((long)puVar16 + (long)*(int *)(lVar15 + 0x60)));
      uVar11 = *(undefined8 *)((long)puVar16 + (long)*(int *)(lVar15 + 0x30));
      local_128 = *(code **)(lVar13 + 0x20);
      (*local_128)(local_130,puVar16,uVar14);
      pcVar23 = *(code **)(lVar20 + 8);
      (*pcVar23)(unaff_x20,lVar9);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,5);
      FUN_1006883a0(0,uVar24);
      lVar13 = local_140;
      FUN_100681318(local_140);
      pcVar21 = local_108;
      lVar18 = lVar13;
      (**(code **)(local_108 + 0x30))(lVar13,1,uVar24);
      if ((int)lVar18 == 1) {
        local_108 = pcVar23;
        (**(code **)(local_118 + 8))(lVar13,pcVar17);
        if (local_110 != 0) {
          _swift_retain(uVar11);
          FUN_1006035b0(&local_a0,FUN_1006035a4,0,uVar11,&DAT_100ef5140,uVar24,
                        PTR___type_metadata_for_Swift_Never_100eadc38,
                        PTR___type_metadata_for_Swift_Int_100eac6f8,
                        PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
                       );
          uVar12 = local_a0;
          (**(code **)(uVar28 + 0x10))(local_a0,uVar14);
          _swift_release(uVar11);
          (*local_108)(unaff_x20,lVar9);
          iVar8 = *(int *)(lVar15 + 0x30);
          iVar2 = *(int *)(lVar15 + 0x40);
          iVar3 = *(int *)(lVar15 + 0x50);
          iVar4 = *(int *)(lVar15 + 0x60);
          (*local_128)(unaff_x20,pcVar6,uVar14);
          *(undefined8 *)((long)unaff_x20 + (long)iVar8) = uVar11;
          *(long *)((long)unaff_x20 + (long)iVar2) = local_110;
          *(byte *)((long)unaff_x20 + (long)iVar3) = (byte)uVar12 & 1;
          *(char *)((long)unaff_x20 + (long)iVar4) = (char)local_120;
          _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,1);
          if (((uVar12 & 1) == 0) || ((local_150 & 1) != 0)) {
            local_88 = (undefined *)local_f8;
            puStack_80 = (undefined *)local_f0;
            lStack_70 = local_e8;
            uVar11 = 0;
            local_a0 = uVar24;
            local_98 = uVar19;
            local_90 = uVar14;
            local_78 = uVar28;
            FUN_100603e1c(0,&local_a0);
            uVar19 = 7;
          }
          else {
            local_88 = (undefined *)local_f8;
            puStack_80 = (undefined *)local_f0;
            lStack_70 = local_e8;
            uVar11 = 0;
            local_a0 = uVar24;
            local_98 = uVar19;
            local_90 = uVar14;
            local_78 = uVar28;
            FUN_100603e1c(0,&local_a0);
            uVar19 = 6;
          }
          goto LAB_1006015e0;
        }
        (*local_108)(unaff_x20,lVar9);
        iVar8 = *(int *)(lVar15 + 0x30);
        iVar2 = *(int *)(lVar15 + 0x40);
        iVar3 = *(int *)(lVar15 + 0x50);
        iVar4 = *(int *)(lVar15 + 0x60);
        (*local_128)(unaff_x20,pcVar6,uVar14);
        *(undefined8 *)((long)unaff_x20 + (long)iVar8) = uVar11;
        *(undefined8 *)((long)unaff_x20 + (long)iVar2) = 0;
        *(char *)((long)unaff_x20 + (long)iVar3) = (char)local_150;
        *(char *)((long)unaff_x20 + (long)iVar4) = (char)local_120;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,1);
        local_88 = (undefined *)local_f8;
        puStack_80 = (undefined *)local_f0;
        lStack_70 = local_e8;
        local_78 = uVar28;
        goto LAB_1006011b4;
      }
      local_100 = *(code **)(pcVar21 + 0x20);
      (*local_100)(local_138,lVar13,uVar24);
      _swift_retain(uVar11);
      FUN_1006035b0(&local_a0,FUN_1006035a4,0,uVar11,&DAT_100ef5140,uVar24,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      uVar12 = local_a0;
      (**(code **)(uVar28 + 0x10))(local_a0,uVar14);
      local_108 = (code *)(CONCAT44(local_108._4_4_,(int)uVar12) & 0xffffffff00000001);
      _swift_release(uVar11);
      (*pcVar23)(unaff_x20,lVar9);
      iVar8 = *(int *)(lVar15 + 0x30);
      iVar2 = *(int *)(lVar15 + 0x40);
      iVar3 = *(int *)(lVar15 + 0x50);
      iVar4 = *(int *)(lVar15 + 0x60);
      (*local_128)(unaff_x20,pcVar6,uVar14);
      *(undefined8 *)((long)unaff_x20 + (long)iVar8) = uVar11;
      *(undefined8 *)((long)unaff_x20 + (long)iVar2) = 0;
      *(char *)((long)unaff_x20 + (long)iVar3) = (char)local_108;
      *(char *)((long)unaff_x20 + (long)iVar4) = (char)local_120;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,1);
      (*local_100)(param_1,local_138,uVar24);
      if (((uVar12 & 1) != 0) && ((local_150 & 1) == 0)) {
        local_88 = (undefined *)local_f8;
        puStack_80 = (undefined *)local_f0;
        lStack_70 = local_e8;
        uVar11 = 0;
        local_a0 = uVar24;
        local_98 = uVar19;
        local_90 = uVar14;
        local_78 = uVar28;
        FUN_100603e1c(0,&local_a0);
        uVar19 = 1;
        goto LAB_1006015e0;
      }
    }
    else {
      uVar27 = *puVar16;
      local_110 = CONCAT44(local_110._4_4_,(uint)*(byte *)(puVar16 + 1));
      uVar11 = 0xff;
      FUN_1006883a0(0xff,uVar24);
      lVar13 = local_120;
      lVar22 = 0;
      _swift_getTupleTypeMetadata3
                (0,uVar11,PTR___type_metadata_for_Swift_Bool_100eac570,local_120,
                 "buffer iteratorInitialized failure ",0);
      pcVar6 = local_128;
      local_130 = *(code **)(lVar18 + 0x20);
      local_138 = lVar22;
      (*local_130)(local_128,(undefined1 *)((long)puVar16 + (long)*(int *)(lVar22 + 0x40)),lVar13);
      pcVar21 = *(code **)(lVar20 + 8);
      (*pcVar21)(unaff_x20,lVar9);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,5);
      FUN_100681318(lVar15,uVar11);
      pcVar17 = local_108;
      lVar18 = lVar15;
      (**(code **)(local_108 + 0x30))(lVar15,1,uVar24);
      if ((int)lVar18 == 1) {
        _swift_release(uVar27);
        (**(code **)(local_118 + 8))(lVar15,local_100);
        (*pcVar21)(unaff_x20,lVar9);
        *(char *)unaff_x20 = (char)local_110;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,4);
        (*local_130)(param_1,pcVar6,lVar13);
        local_88 = (undefined *)local_f8;
        puStack_80 = (undefined *)local_f0;
        lStack_70 = local_e8;
        uVar11 = 0;
        local_a0 = uVar24;
        local_98 = uVar19;
        local_90 = uVar14;
        local_78 = uVar28;
        FUN_100603e1c(0,&local_a0);
        uVar19 = 2;
        goto LAB_1006015e0;
      }
      pcVar17 = *(code **)(pcVar17 + 0x20);
      (*pcVar17)(lVar26,lVar15,uVar24);
      (*pcVar21)(unaff_x20,lVar9);
      iVar8 = *(int *)(local_138 + 0x40);
      *unaff_x20 = uVar27;
      *(char *)(unaff_x20 + 1) = (char)local_110;
      (*local_130)((undefined1 *)((long)unaff_x20 + (long)iVar8),pcVar6,lVar13);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar9,2);
      (*pcVar17)(param_1,lVar26,uVar24);
    }
    local_88 = (undefined *)local_f8;
    puStack_80 = (undefined *)local_f0;
    lStack_70 = local_e8;
    uVar11 = 0;
    local_a0 = uVar24;
    local_98 = uVar19;
    local_90 = uVar14;
    local_78 = uVar28;
    FUN_100603e1c(0,&local_a0);
    uVar19 = 0;
  }
LAB_1006015e0:
  _swift_storeEnumTagMultiPayload(param_1,uVar11,uVar19);
  return;
}



/* Address: 0x1006016ec | FUN_1006016ec */

void FUN_1006016ec(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Optional OVar6;
  int iVar7;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  CancellationError CVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  String SVar30;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
  long local_1f0 [5];
  long local_1c8;
  long local_1c0;
  ulong local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  code *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined7 extraout_var_01;
  
  local_198 = *(long *)(param_4 + -8);
  uVar18 = *(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f0[1] = (long)local_1f0 - uVar18;
  lVar19 = local_1f0[1] - uVar18;
  local_1f0[2] = lVar19;
  local_150 = param_5;
  local_148 = (code *)param_8;
  local_130 = (undefined *)param_2;
  local_120 = param_7;
  local_108 = param_1;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_188 = CONCAT71(extraout_var,OVar6.value);
  local_178 = *(long *)(local_188 + -8);
  uVar18 = *(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1b8 = lVar19 - uVar18;
  local_1b0 = local_1b8 - uVar18;
  lVar19 = local_1b0 - uVar18;
  local_180 = lVar19;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  local_168 = CONCAT71(extraout_var_00,OVar6.value);
  local_170 = lVar19 - (*(long *)(*(long *)(local_168 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_160 = *(long *)(param_3 + -8);
  uVar18 = *(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1a0 = local_170 - uVar18;
  lVar20 = local_1a0 - uVar18;
  local_90 = param_9;
  lVar8 = 0xff;
  local_1c0 = lVar20;
  local_c0 = param_3;
  lStack_b8 = param_4;
  local_b0 = param_5;
  lStack_a8 = param_6;
  local_a0 = param_7;
  lStack_98 = param_8;
  FUN_100603e1c(0xff,&local_c0);
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var_01,OVar6.value);
  puVar10 = &DAT_100fd6588;
  FUN_1000f8b08(&DAT_100fd6588,&DAT_100c66fd0);
  lVar19 = 0;
  _swift_getTupleTypeMetadata3(0,lVar8,lVar9,puVar10,0,0);
  uVar18 = *(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = lVar20 - uVar18;
  lVar23 = lVar20 - uVar18;
  local_140 = *(long *)(lVar9 + -8);
  uVar18 = *(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_1f0[3] = lVar23 - uVar18;
  local_1c8 = local_1f0[3] - uVar18;
  local_1f0[4] = local_1c8 - uVar18;
  local_128 = local_1f0[4] - uVar18;
  lVar27 = *(long *)(lVar8 + -8);
  uVar18 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_138 = local_128 - uVar18;
  lVar21 = local_138 - uVar18;
  local_a0 = local_150;
  local_90 = local_120;
  uStack_88 = local_148;
  local_80 = param_9;
  uStack_78 = local_108;
  local_f0 = local_150;
  local_e0 = local_120;
  uStack_d8 = local_148;
  local_1a8 = param_9;
  local_d0 = param_9;
  uVar11 = 0;
  local_190 = param_4;
  local_158 = param_3;
  local_150 = param_6;
  local_110 = lVar21;
  local_100 = param_3;
  lStack_f8 = param_4;
  lStack_e8 = param_6;
  local_b0 = param_3;
  lStack_a8 = param_4;
  lStack_98 = param_6;
  FUN_100603a8c(0,&local_100);
  uVar12 = 0xff;
  FUN_1005f7110(0xff);
  uVar13 = 0;
  _swift_getTupleTypeMetadata3(0,lVar8,lVar9,uVar12,0,0);
  FUN_10066ed6c(lVar23,FUN_10060a4dc,&local_c0,local_130,uVar11,uVar13);
  lVar3 = local_140;
  iVar7 = *(int *)(lVar19 + 0x30);
  plVar1 = (long *)(lVar23 + *(int *)(lVar19 + 0x40));
  pcVar26 = *(code **)(lVar27 + 0x20);
  local_118 = lVar27;
  (*pcVar26)(lVar20,lVar23,lVar8);
  iVar2 = *(int *)(lVar19 + 0x30);
  pcVar29 = *(code **)(lVar3 + 0x20);
  (*pcVar29)(lVar20 + iVar2,lVar23 + iVar7,lVar9);
  lVar19 = *plVar1;
  if (lVar19 == 0) {
    local_148 = (code *)0x0;
    local_130 = (undefined *)0x0;
  }
  else {
    lVar23 = plVar1[1];
    puVar10 = &DAT_100eea558;
    _swift_allocObject(&DAT_100eea558,0x20,7);
    *(long *)(puVar10 + 0x10) = lVar19;
    *(long *)(puVar10 + 0x18) = lVar23;
    local_148 = FUN_1000386a0;
    local_130 = puVar10;
  }
  lVar22 = local_110;
  (*pcVar26)(local_110,lVar20,lVar8);
  lVar5 = local_128;
  (*pcVar29)(local_128,lVar20 + iVar2,lVar9);
  lVar28 = local_118;
  lVar4 = local_138;
  (**(code **)(local_118 + 0x10))(local_138,lVar22,lVar8);
  lVar14 = lVar4;
  _swift_getEnumCaseMultiPayload(lVar4,lVar8);
  lVar24 = local_158;
  lVar15 = local_160;
  lVar25 = local_170;
  lVar27 = local_188;
  lVar23 = local_1c0;
  lVar20 = local_1f0[3];
  iVar7 = (int)lVar14;
  if (iVar7 < 4) {
    if (iVar7 < 2) {
      if (iVar7 == 0) {
        local_1f0[0] = lVar19;
        (**(code **)(local_160 + 0x20))(local_1c0,lVar4,local_158);
        lVar19 = local_170;
        (**(code **)(lVar15 + 0x10))(local_170,lVar23,lVar24);
        (**(code **)(lVar15 + 0x38))(lVar19,0,1,lVar24);
        puVar10 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec10c(lVar19,local_108,local_168,puVar10,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        lVar19 = local_1f0[0];
        (**(code **)(lVar15 + 8))(lVar23,lVar24);
      }
      else {
        local_1f0[0] = lVar19;
        (**(code **)(local_160 + 0x20))(local_1a0,lVar4,local_158);
        lVar19 = local_1f0[4];
        (**(code **)(lVar3 + 0x10))(local_1f0[4],lVar5,lVar9);
        lVar20 = local_150;
        lVar25 = *(long *)(local_150 + -8);
        lVar21 = lVar19;
        (**(code **)(lVar25 + 0x30))(lVar19,1,local_150);
        lVar23 = lVar9;
        lVar27 = lVar3;
        if ((int)lVar21 != 1) {
          (**(code **)(local_1a8 + 8))(lVar20);
          lVar23 = lVar20;
          lVar27 = lVar25;
        }
        (**(code **)(lVar27 + 8))(lVar19,lVar23);
        lVar23 = local_158;
        lVar21 = local_160;
        lVar20 = local_170;
        lVar19 = local_1a0;
        (**(code **)(local_160 + 0x10))(local_170,local_1a0,local_158);
        (**(code **)(lVar21 + 0x38))(lVar20,0,1,lVar23);
        puVar10 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec10c(lVar20,local_108,local_168,puVar10,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        (**(code **)(lVar21 + 8))(lVar19,lVar23);
        lVar19 = local_1f0[0];
      }
    }
    else if (iVar7 == 2) {
      (**(code **)(local_178 + 0x20))(local_180,lVar4,local_188);
      lVar20 = local_1c8;
      (**(code **)(lVar3 + 0x10))(local_1c8,lVar5,lVar9);
      lVar21 = local_150;
      lVar24 = *(long *)(local_150 + -8);
      lVar23 = lVar20;
      (**(code **)(lVar24 + 0x30))(lVar20,1,local_150);
      lVar25 = lVar9;
      lVar15 = lVar3;
      if ((int)lVar23 != 1) {
        (**(code **)(local_1a8 + 0x10))(lVar21);
        lVar25 = lVar21;
        lVar15 = lVar24;
        lVar27 = local_188;
      }
      (**(code **)(lVar15 + 8))(lVar20,lVar25);
      lVar21 = local_1b0;
      (**(code **)(local_178 + 0x10))(local_1b0,local_180,lVar27);
      lVar27 = local_190;
      lVar23 = local_198;
      lVar15 = lVar21;
      (**(code **)(local_198 + 0x30))(lVar21,1,local_190);
      lVar28 = local_118;
      lVar25 = local_170;
      lVar20 = local_1f0[2];
      if ((int)lVar15 == 1) {
        (**(code **)(local_160 + 0x38))(local_170,1,1,local_158);
        puVar10 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec10c(lVar25,local_108,local_168,puVar10,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      else {
        (**(code **)(lVar23 + 0x20))(local_1f0[2],lVar21,lVar27);
        lVar21 = lVar27;
        uVar11 = local_120;
        _swift_allocError(lVar27,local_120,0,0);
        local_1f0[0] = lVar19;
        (**(code **)(lVar23 + 0x10))(uVar11,lVar20,lVar27);
        lVar19 = local_1f0[0];
        puVar10 = &DAT_100fd4f20;
        local_c0 = lVar21;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec180(&local_c0,local_108,local_168,puVar10,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        (**(code **)(lVar23 + 8))(lVar20,lVar27);
      }
      (**(code **)(local_178 + 8))(local_180,local_188);
    }
    else {
      local_1f0[0] = lVar19;
      CVar16 = Swift::CancellationError::typeMetadataAccessor();
      lVar19 = *(long *)(*(long *)(CVar16.unknown + -8) + 0x40);
      Swift::CancellationError::init();
      lVar20 = local_190;
      uVar18 = local_1b8;
      uVar17 = local_1b8;
      _swift_dynamicCast(local_1b8,lVar21 - (lVar19 + 0xfU & 0xfffffffffffffff0),CVar16.unknown,
                         local_190,6);
      lVar19 = local_198;
      if ((uVar17 & 1) == 0) {
        (**(code **)(local_198 + 0x38))(uVar18,1,1,lVar20);
        (**(code **)(local_178 + 8))(uVar18,local_188);
        lVar19 = local_170;
        (**(code **)(local_160 + 0x38))(local_170,1,1,local_158);
        puVar10 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec10c(lVar19,local_108,local_168,puVar10,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        lVar22 = local_110;
        lVar19 = local_1f0[0];
      }
      else {
        (**(code **)(local_198 + 0x38))(uVar18,0,1,lVar20);
        lVar21 = local_1f0[1];
        (**(code **)(lVar19 + 0x20))(local_1f0[1],uVar18,lVar20);
        lVar23 = lVar20;
        uVar11 = local_120;
        _swift_allocError(lVar20,local_120,0,0);
        (**(code **)(lVar19 + 0x10))(uVar11,lVar21,lVar20);
        puVar10 = &DAT_100fd4f20;
        local_c0 = lVar23;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec180(&local_c0,local_108,local_168,puVar10,
                      PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        (**(code **)(lVar19 + 8))(lVar21,lVar20);
        lVar22 = local_110;
        lVar19 = local_1f0[0];
      }
    }
  }
  else if (iVar7 < 6) {
    if (iVar7 != 4) {
      *(undefined4 *)(lVar21 + -8) = 0;
      *(undefined8 *)(lVar21 + -0x10) = 0x2b1;
      SVar30.bridgeObject = (void *)0x2;
      SVar30.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar30,(StaticString)0x0,0xe000000000000000,0xdaeab0);
                    /* WARNING: Does not return */
      pcVar26 = (code *)SoftwareBreakpoint(1,0x100602320);
      (*pcVar26)();
    }
    (**(code **)(local_160 + 0x38))(local_170,1,1,local_158);
    puVar10 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    FUN_1005ec10c(lVar25,local_108,local_168,puVar10,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  else if (iVar7 == 6) {
    (**(code **)(lVar3 + 0x10))(local_1f0[3],lVar5,lVar9);
    lVar21 = local_150;
    lVar27 = *(long *)(local_150 + -8);
    lVar23 = lVar20;
    (**(code **)(lVar27 + 0x30))(lVar20,1,local_150);
    if ((int)lVar23 == 1) {
      pcVar26 = *(code **)(lVar3 + 8);
      lVar21 = lVar9;
    }
    else {
      (**(code **)(local_1a8 + 8))(lVar21);
      pcVar26 = *(code **)(lVar27 + 8);
    }
    (*pcVar26)(lVar20,lVar21);
    lVar22 = local_110;
  }
  puVar10 = local_130;
  if (lVar19 != 0) {
    _swift_retain(local_130);
    pcVar26 = local_148;
    (*local_148)();
    FUN_100004550(pcVar26,puVar10);
    FUN_100004550(pcVar26,puVar10);
  }
  (**(code **)(lVar3 + 8))(lVar5,lVar9);
  (**(code **)(lVar28 + 8))(lVar22,lVar8);
  return;
}



/* Address: 0x100602320 | FUN_100602320 */

void FUN_100602320(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  Optional OVar9;
  long lVar10;
  undefined7 extraout_var;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_c8 = param_10;
  local_68 = param_10;
  lVar10 = 0xff;
  local_e8 = param_9;
  local_c0 = param_8;
  local_b0 = param_3;
  lStack_a8 = param_2;
  local_a0 = param_1;
  local_98 = param_4;
  local_90 = param_5;
  local_88 = param_6;
  local_80 = param_7;
  local_78 = param_8;
  local_70 = param_9;
  FUN_100603e1c(0xff,&local_98);
  OVar9 = Swift::Optional::typeMetadataAccessor();
  puVar13 = &DAT_100fd6588;
  local_b8 = CONCAT71(extraout_var,OVar9.value);
  FUN_1000f8b08(&DAT_100fd6588,&DAT_100c66fd0);
  lVar11 = 0;
  local_d8 = lVar10;
  _swift_getTupleTypeMetadata3(0,lVar10,CONCAT71(extraout_var,OVar9.value),puVar13,0,0);
  uVar7 = local_c0;
  uVar6 = local_c8;
  puVar17 = auStack_f0 + -(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e0 = *(long *)(lVar10 + -8);
  lVar15 = (long)puVar17 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = local_c0;
  local_68 = local_c8;
  uVar12 = 0;
  local_d0 = lVar11;
  local_98 = param_4;
  local_90 = param_5;
  local_88 = param_6;
  local_80 = param_7;
  local_70 = param_9;
  FUN_100603d64(0,&local_98);
  lVar8 = lStack_a8;
  FUN_100600a5c(lVar15,local_b0,uVar12);
  local_78 = uVar7;
  local_70 = local_e8;
  local_68 = uVar6;
  lVar10 = 0;
  local_98 = param_4;
  local_90 = param_5;
  local_88 = param_6;
  local_80 = param_7;
  FUN_100603a8c(0,&local_98);
  lVar5 = local_d0;
  lVar11 = local_d8;
  iVar3 = *(int *)(lVar10 + 0x4c);
  plVar1 = (long *)(lVar8 + *(int *)(lVar10 + 0x50));
  lVar10 = *plVar1;
  local_b0 = plVar1[1];
  iVar4 = *(int *)(local_d0 + 0x30);
  pcVar14 = *(code **)(local_e0 + 0x20);
  (*pcVar14)(puVar17,lVar15,local_d8);
  lVar15 = local_b8;
  lVar16 = *(long *)(local_b8 + -8);
  (**(code **)(lVar16 + 0x10))(puVar17 + iVar4,lVar8 + iVar3);
  lVar8 = local_a0;
  (*pcVar14)(local_a0,puVar17,lVar11);
  (**(code **)(lVar16 + 0x20))(lVar8 + *(int *)(lVar5 + 0x30),puVar17 + iVar4,lVar15);
  if (lVar10 == 0) {
    pcVar14 = (code *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = &DAT_100eea580;
    _swift_allocObject(&DAT_100eea580,0x20,7);
    *(long *)(puVar13 + 0x10) = lVar10;
    *(long *)(puVar13 + 0x18) = local_b0;
    pcVar14 = FUN_1000386a0;
  }
  puVar2 = (undefined8 *)(lVar8 + *(int *)(lVar5 + 0x40));
  *puVar2 = pcVar14;
  puVar2[1] = puVar13;
  FUN_100011128(lVar10,local_b0);
  return;
}



/* Address: 0x10060255c | FUN_10060255c */

void FUN_10060255c(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  CancellationError CVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong auStack_150 [4];
  long local_130;
  undefined8 local_128;
  ulong local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long lStack_c0;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined7 extraout_var_01;
  
  local_100 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_110 = CONCAT71(extraout_var,OVar2.value);
  lVar11 = (long)auStack_150 -
           (*(long *)(*(long *)(local_110 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar11;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  auStack_150[2] = CONCAT71(extraout_var_00,OVar2.value);
  auStack_150[1] = *(long *)(auStack_150[2] + -8);
  local_120 = lVar11 - (*(long *)(auStack_150[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_118 = *(long *)(param_3 + -8);
  lVar9 = local_120 - (*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  auStack_150[3] = lVar9;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var_01,OVar2.value);
  uVar4 = 0xff;
  local_b0 = param_2;
  lStack_a8 = param_3;
  local_a0 = param_4;
  lStack_98 = param_5;
  local_90 = param_6;
  lStack_88 = param_7;
  local_80 = param_8;
  FUN_1006093e8(0xff,&local_b0);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar3,uVar4,0,0);
  lVar9 = lVar9 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = lVar9 - uVar10;
  lVar11 = local_f8 - uVar10;
  uVar4 = 0;
  local_128 = param_6;
  local_108 = param_8;
  lStack_f0 = param_2;
  local_e8 = param_3;
  uStack_e0 = param_4;
  local_d8 = param_5;
  uStack_d0 = param_6;
  local_c8 = param_7;
  lStack_c0 = param_8;
  local_a0 = param_2;
  lStack_98 = param_3;
  local_90 = param_4;
  lStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_7;
  local_70 = param_8;
  FUN_100603a8c(0,&lStack_f0);
  FUN_10066ed6c(lVar9,FUN_10060a44c,&local_b0,local_100,uVar4,lVar5);
  uVar10 = *(ulong *)(lVar9 + *(int *)(lVar5 + 0x30));
  (**(code **)(lVar12 + 0x20))(lVar11,lVar9,lVar3);
  if (1 < uVar10) {
    local_100 = lVar11;
    CVar6 = Swift::CancellationError::typeMetadataAccessor();
    lVar5 = *(long *)(*(long *)(CVar6.unknown + -8) + 0x40);
    Swift::CancellationError::init();
    uVar1 = local_120;
    uVar7 = local_120;
    _swift_dynamicCast(local_120,lVar11 - (lVar5 + 0xfU & 0xfffffffffffffff0),CVar6.unknown,param_3,
                       6);
    lVar11 = local_118;
    if ((uVar7 & 1) == 0) {
      (**(code **)(local_118 + 0x38))(uVar1,1,1,param_3);
      (**(code **)(auStack_150[1] + 8))(uVar1,auStack_150[2]);
      lVar11 = local_130;
      (**(code **)(*(long *)(param_2 + -8) + 0x38))(local_130,1,1,param_2);
      puVar8 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      FUN_1005ec10c(lVar11,uVar10,local_110,puVar8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      lVar11 = local_100;
    }
    else {
      (**(code **)(local_118 + 0x38))(uVar1,0,1,param_3);
      uVar7 = auStack_150[3];
      (**(code **)(lVar11 + 0x20))(auStack_150[3],uVar1,param_3);
      lVar5 = param_3;
      uVar4 = local_128;
      _swift_allocError(param_3,local_128,0,0);
      (**(code **)(lVar11 + 0x10))(uVar4,uVar7,param_3);
      puVar8 = &DAT_100fd4f20;
      local_b0 = lVar5;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      FUN_1005ec180(&local_b0,uVar10,local_110,puVar8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      (**(code **)(lVar11 + 8))(uVar7,param_3);
      lVar11 = local_100;
    }
  }
  lVar5 = local_f8;
  (**(code **)(lVar12 + 0x10))(local_f8,lVar11,lVar3);
  lVar14 = *(long *)(param_5 + -8);
  lVar9 = lVar5;
  (**(code **)(lVar14 + 0x30))(lVar5,1,param_5);
  if ((int)lVar9 == 1) {
    pcVar13 = *(code **)(lVar12 + 8);
    (*pcVar13)(lVar11,lVar3);
    (*pcVar13)(lVar5,lVar3);
  }
  else {
    (**(code **)(local_108 + 0x10))(param_5);
    (**(code **)(lVar12 + 8))(lVar11,lVar3);
    (**(code **)(lVar14 + 8))(lVar5,param_5);
  }
  return;
}



/* Address: 0x100602994 | FUN_100602994 */

void FUN_100602994(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  long lVar5;
  undefined7 extraout_var_00;
  long lVar6;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  lStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  local_68 = param_9;
  FUN_100603d64(0,&local_98);
  FUN_100602c0c();
  if (lVar3 == 1) {
    OVar2 = Swift::Optional::typeMetadataAccessor();
    uVar4 = 0xff;
    local_98 = param_3;
    uStack_90 = param_4;
    local_88 = param_5;
    lStack_80 = param_6;
    local_78 = param_7;
    uStack_70 = param_8;
    local_68 = param_9;
    FUN_1006093e8(0xff,&local_98);
    lVar3 = 0;
    _swift_getTupleTypeMetadata2(0,OVar2.value,uVar4,0,0);
    iVar1 = *(int *)(lVar3 + 0x30);
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,1,1,param_6);
    *(undefined8 *)(param_1 + iVar1) = 1;
  }
  else if (lVar3 == 0) {
    lVar3 = 0;
    local_98 = param_3;
    uStack_90 = param_4;
    local_88 = param_5;
    lStack_80 = param_6;
    local_78 = param_7;
    uStack_70 = param_8;
    local_68 = param_9;
    FUN_100603a8c(0,&local_98);
    iVar1 = *(int *)(lVar3 + 0x4c);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar3 = CONCAT71(extraout_var,OVar2.value);
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2 + iVar1,lVar3);
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_2 + iVar1,1,1,param_6);
    uVar4 = 0xff;
    local_98 = param_3;
    uStack_90 = param_4;
    local_88 = param_5;
    lStack_80 = param_6;
    local_78 = param_7;
    uStack_70 = param_8;
    local_68 = param_9;
    FUN_1006093e8(0xff,&local_98);
    lVar5 = 0;
    _swift_getTupleTypeMetadata2(0,lVar3,uVar4,0,0);
    *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x30)) = 0;
  }
  else {
    lVar5 = 0;
    local_98 = param_3;
    uStack_90 = param_4;
    local_88 = param_5;
    lStack_80 = param_6;
    local_78 = param_7;
    uStack_70 = param_8;
    local_68 = param_9;
    FUN_100603a8c(0,&local_98);
    iVar1 = *(int *)(lVar5 + 0x4c);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_00,OVar2.value);
    (**(code **)(*(long *)(lVar5 + -8) + 0x20))(param_1,param_2 + iVar1,lVar5);
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_2 + iVar1,1,1,param_6);
    uVar4 = 0xff;
    local_98 = param_3;
    uStack_90 = param_4;
    local_88 = param_5;
    lStack_80 = param_6;
    local_78 = param_7;
    uStack_70 = param_8;
    local_68 = param_9;
    FUN_1006093e8(0xff,&local_98);
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,lVar5,uVar4,0,0);
    *(long *)(param_1 + *(int *)(lVar6 + 0x30)) = lVar3;
  }
  return;
}



/* Address: 0x100602c0c | FUN_100602c0c */

long FUN_100602c0c(long param_1)

{
  undefined1 uVar1;
  Optional OVar2;
  int iVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined7 extraout_var_00;
  long lVar7;
  long lVar8;
  CancellationError CVar9;
  byte *pbVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined1 *unaff_x20;
  long lVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  byte *pbVar22;
  long lVar23;
  char acStack_140 [8];
  char acStack_138 [5];
  char acStack_133 [8];
  undefined1 auStack_12b [7];
  char acStack_124 [5];
  char acStack_11f [8];
  char acStack_117 [8];
  char acStack_10f [5];
  char acStack_10a [8];
  char acStack_102 [8];
  char acStack_fa [8];
  undefined4 uStack_f2;
  undefined1 auStack_ee [14];
  byte abStack_e0 [8];
  undefined8 *local_d8;
  uint local_cc;
  long local_c8;
  long local_98;
  long local_90;
  long local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar19 = *(long *)(param_1 + 0x18);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,OVar2.value);
  lVar16 = *(long *)(lVar7 + -8);
  pbVar22 = abStack_e0 + -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = *(long *)(lVar19 + -8);
  lVar11 = (long)pbVar22 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = *(long *)(param_1 + 0x10);
  local_68 = *(undefined8 *)(param_1 + 0x40);
  puStack_80 = *(undefined **)(param_1 + 0x28);
  lVar23 = *(long *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x38);
  local_78 = *(undefined **)(param_1 + 0x30);
  lVar4 = 0;
  local_98 = lVar18;
  local_90 = lVar19;
  local_88 = lVar23;
  FUN_100603da4(0,&local_98);
  lVar14 = *(long *)(lVar4 + -8);
  uVar12 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar21 = (long *)(lVar11 - uVar12);
  puVar13 = (undefined8 *)((long)plVar21 - uVar12);
  (**(code **)(lVar14 + 0x10))(puVar13);
  puVar5 = puVar13;
  _swift_getEnumCaseMultiPayload(puVar13,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      lVar8 = 0;
      local_c8 = lVar14;
      _swift_getTupleTypeMetadata2
                (0,lVar23,PTR___type_metadata_for_Swift_Bool_100eac570,
                 "backPressureStrategy iteratorInitialized ",0);
      local_cc = (uint)*(byte *)((long)puVar13 + (long)*(int *)(lVar8 + 0x30));
      CVar9 = Swift::CancellationError::typeMetadataAccessor();
      lVar14 = *(long *)(*(long *)(CVar9.unknown + -8) + 0x40);
      local_d8 = puVar13;
      Swift::CancellationError::init();
      pbVar10 = pbVar22;
      _swift_dynamicCast(pbVar22,(long)puVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0),CVar9.unknown,
                         lVar19,6);
      pcVar15 = *(code **)(lVar20 + 0x38);
      if ((int)pbVar10 == 0) {
        (*pcVar15)(pbVar22,1,1,lVar19);
        (**(code **)(lVar16 + 8))(pbVar22,lVar7);
        (**(code **)(local_c8 + 8))(unaff_x20,lVar4);
        *unaff_x20 = (char)local_cc;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar4,4);
      }
      else {
        (*pcVar15)(pbVar22,0,1,lVar19);
        pcVar17 = *(code **)(lVar20 + 0x20);
        (*pcVar17)(lVar11,pbVar22,lVar19);
        uVar6 = 0xff;
        FUN_1006883a0(0xff,lVar18);
        lVar14 = 0;
        _swift_getTupleTypeMetadata3
                  (0,uVar6,PTR___type_metadata_for_Swift_Bool_100eac570,lVar7,
                   "buffer iteratorInitialized failure ",0);
        iVar3 = *(int *)(lVar14 + 0x40);
        thunk_FUN_100683d64();
        *plVar21 = lVar18;
        *(char *)(plVar21 + 1) = (char)local_cc;
        (*pcVar17)((long)plVar21 + (long)iVar3,lVar11,lVar19);
        (*pcVar15)((long)plVar21 + (long)iVar3,0,1,lVar19);
        _swift_storeEnumTagMultiPayload(plVar21,lVar4,2);
        (**(code **)(local_c8 + 0x28))(unaff_x20,plVar21,lVar4);
      }
      (**(code **)(*(long *)(lVar23 + -8) + 8))(puVar13);
    }
    else {
      if (iVar3 == 1) {
        builtin_strncpy((char *)(puVar13 + -0xb),"sureStra",8);
        builtin_strncpy((char *)(puVar13 + -0xc),"backPres",8);
        builtin_strncpy((char *)((long)puVar13 + -0x53),"trategy ",8);
        *(undefined4 *)((long)puVar13 + -0x4b) = 0x66667562;
        *(undefined4 *)(puVar13 + -9) = 0x20726566;
        builtin_strncpy((char *)((long)puVar13 + -0x44),"continua",8);
        builtin_strncpy((char *)((long)puVar13 + -0x3f),"nuation ",8);
        builtin_strncpy((char *)((long)puVar13 + -0x2f),"andingDe",8);
        builtin_strncpy((char *)((long)puVar13 + -0x37),"hasOutst",8);
        builtin_strncpy((char *)((long)puVar13 + -0x2a),"gDemand ",8);
        *(undefined4 *)((long)puVar13 + -0x12) = 0x2064657a;
        builtin_strncpy((char *)((long)puVar13 + -0x1a),"Initiali",8);
        builtin_strncpy((char *)((long)puVar13 + -0x22),"iterator",8);
        *(undefined1 *)((long)puVar13 + -0xe) = 0;
        uVar6 = 0xff;
        local_98 = lVar23;
        FUN_1006883a0(0xff,lVar18);
        local_90 = uVar6;
        Swift::Optional::typeMetadataAccessor();
        FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
        Swift::UnsafeContinuation::typeMetadataAccessor();
        OVar2 = Swift::Optional::typeMetadataAccessor();
        local_88 = CONCAT71(extraout_var_00,OVar2.value);
        puStack_80 = PTR___type_metadata_for_Swift_Bool_100eac570;
        local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
        lVar7 = 0;
        _swift_getTupleTypeMetadata(0,0x10005,&local_98,puVar13 + -0xc,0);
        _swift_release(*(undefined8 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x30)));
        lVar4 = *(long *)((long)puVar13 + (long)*(int *)(lVar7 + 0x40));
        uVar1 = *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar7 + 0x60));
        (**(code **)(lVar14 + 8))();
        *unaff_x20 = uVar1;
        if (lVar4 != 0) {
          _swift_storeEnumTagMultiPayload();
          (**(code **)(*(long *)(lVar23 + -8) + 8))(puVar13,lVar23);
          return lVar4;
        }
        _swift_storeEnumTagMultiPayload();
        (**(code **)(*(long *)(lVar23 + -8) + 8))(puVar13,lVar23);
        return 0;
      }
      _swift_release(*puVar13);
      uVar6 = 0xff;
      FUN_1006883a0(0xff,lVar18);
      lVar4 = 0;
      _swift_getTupleTypeMetadata3
                (0,uVar6,PTR___type_metadata_for_Swift_Bool_100eac570,lVar7,
                 "buffer iteratorInitialized failure ",0);
      (**(code **)(lVar16 + 8))((long)puVar13 + (long)*(int *)(lVar4 + 0x40),lVar7);
    }
  }
  else if (1 < iVar3 - 3U) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100602e94);
    (*pcVar15)();
  }
  return 1;
}



/* Address: 0x1006030fc | FUN_1006030fc */

void FUN_1006030fc(undefined8 param_1)

{
  FUN_100603108(param_1,FUN_100603da4);
  return;
}



/* Address: 0x100603108 | FUN_100603108 */

void FUN_100603108(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_2 + 0x40);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  local_60 = *(undefined8 *)(param_2 + 0x10);
  uStack_48 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x20);
  uStack_38 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(undefined8 *)(param_2 + 0x30);
  lVar1 = 0;
  (*param_3)(0,&local_60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10060316c | FUN_10060316c */

void FUN_10060316c(undefined8 param_1,undefined8 param_2)

{
  FUN_100603178(param_1,param_2,FUN_100603da4);
  return;
}



/* Address: 0x100603178 | FUN_100603178 */

void FUN_100603178(undefined8 param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_2 + 0x40);
  uStack_58 = *(undefined8 *)(param_2 + 0x18);
  local_60 = *(undefined8 *)(param_2 + 0x10);
  uStack_48 = *(undefined8 *)(param_2 + 0x28);
  uStack_50 = *(undefined8 *)(param_2 + 0x20);
  uStack_38 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(undefined8 *)(param_2 + 0x30);
  lVar1 = 0;
  (*param_3)(0,&local_60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x1006031d8 | FUN_1006031d8 */

uint FUN_1006031d8(byte *param_1,undefined1 *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  FUN_1001a7d78(*param_1,*param_2);
  return uVar1 & 1;
}



/* Address: 0x100603200 | FUN_100603200 */

void FUN_100603200(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7d88(param_1,*unaff_x20);
  return;
}



/* Address: 0x100603220 | FUN_100603220 */

void FUN_100603220(undefined8 *param_1,ulong param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  Optional OVar4;
  UnsafeContinuation UVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lVar7;
  
  auStack_c0[2] = param_10;
  auStack_c0[1] = param_7;
  auStack_c0[3] = param_8;
  uStack_a0 = param_9;
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  UVar5 = Swift::UnsafeContinuation::typeMetadataAccessor();
  lVar6 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,UVar5.unknown,param_4,0,0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,OVar4.value);
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar7,0,0);
  puVar1 = (undefined8 *)
           ((long)auStack_c0 +
           ((long)*(int *)(lVar8 + 0x30) -
           (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(*(long *)(lVar7 + -8) + 0x20))(puVar1,param_3,lVar7);
  puVar9 = puVar1;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar1,1,lVar6);
  bVar3 = (int)puVar9 != 1;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  if ((param_2 & 1) == 0) {
    if (bVar3) {
      uVar10 = *puVar1;
      iVar2 = *(int *)(lVar6 + 0x30);
      lVar6 = 0;
      _swift_getTupleTypeMetadata2(0,UVar5.unknown,param_4,"continuation element ",0);
      (**(code **)(*(long *)(param_4 + -8) + 0x20))
                ((long)param_1 + (long)*(int *)(lVar6 + 0x30),(long)puVar1 + (long)iVar2,param_4);
      *param_1 = uVar10;
      uStack_80 = auStack_c0[1];
      local_78 = auStack_c0[3];
      uStack_70 = uStack_a0;
      local_68 = auStack_c0[2];
      uVar10 = 0;
      FUN_100603cc8(0,&local_98);
      uVar11 = 1;
    }
    else {
      uStack_80 = auStack_c0[1];
      local_78 = auStack_c0[3];
      uStack_70 = uStack_a0;
      local_68 = auStack_c0[2];
      uVar10 = 0;
      FUN_100603cc8(0,&local_98);
      uVar11 = 3;
    }
  }
  else if (bVar3) {
    uVar10 = *puVar1;
    iVar2 = *(int *)(lVar6 + 0x30);
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,UVar5.unknown,param_4,"continuation element ",0);
    (**(code **)(*(long *)(param_4 + -8) + 0x20))
              ((long)param_1 + (long)*(int *)(lVar6 + 0x30),(long)puVar1 + (long)iVar2,param_4);
    *param_1 = uVar10;
    uStack_80 = auStack_c0[1];
    local_78 = auStack_c0[3];
    uStack_70 = uStack_a0;
    local_68 = auStack_c0[2];
    uVar10 = 0;
    FUN_100603cc8(0,&local_98);
    uVar11 = 0;
  }
  else {
    uStack_80 = auStack_c0[1];
    local_78 = auStack_c0[3];
    uStack_70 = uStack_a0;
    local_68 = auStack_c0[2];
    uVar10 = 0;
    FUN_100603cc8(0,&local_98);
    uVar11 = 2;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar10,uVar11);
  return;
}



/* Address: 0x1006034cc | FUN_1006034cc */

void FUN_1006034cc(undefined8 param_1,code *param_2,undefined8 param_3,ManagedBufferPointer param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  UnsafeMutablePointer<undefined> UVar1;
  UnsafeMutablePointer<undefined> UVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = *(long *)(param_7 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  local_68 = param_7;
  UVar1 = Swift::ManagedBufferPointer::get__headerPointer(param_4);
  UVar2 = Swift::ManagedBufferPointer::get__elementPointer(param_4);
  (*param_2)(param_1,UVar1.unknown,UVar2.unknown,auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar4 + 0x20))(param_10,auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),local_68)
    ;
  }
  return;
}



/* Address: 0x1006035a4 | FUN_1006035a4 */

void FUN_1006035a4(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 8);
  return;
}



/* Address: 0x1006035b0 | FUN_1006035b0 */

void FUN_1006035b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar1 = -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_7;
  local_50 = param_8;
  uStack_48 = param_1;
  local_40 = param_2;
  *(undefined1 **)((long)auStack_90 + lVar1) = auStack_80 + lVar1;
  FUN_1006034cc(FUN_10060a418,auStack_80);
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(param_9,auStack_80 + lVar1,param_6);
  }
  return;
}



/* Address: 0x10060363c | FUN_10060363c */

void FUN_10060363c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long in_x6;
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined8 in_stack_00000008;
  
  lVar2 = *(long *)(in_x6 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_3)(param_1,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_stack_00000008,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
               in_x6);
  }
  return;
}



/* Address: 0x1006036a8 | FUN_1006036a8 */

void FUN_1006036a8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_retain();
  FUN_1005fc0b0();
  return;
}



/* Address: 0x100603718 | FUN_100603718 */

void FUN_100603718(undefined8 param_1)

{
  _swift_allocObject();
  FUN_1006036a8(param_1);
  return;
}



/* Address: 0x100603750 | FUN_100603750 */

void FUN_100603750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_58 = param_2;
  uStack_50 = param_3;
  local_48 = param_4;
  uStack_40 = param_5;
  local_38 = param_6;
  uStack_30 = param_7;
  local_28 = param_8;
  FUN_100603ee0(0,&local_58);
  _swift_allocObject();
  FUN_1006036a8(param_1);
  return;
}



/* Address: 0x1006037a8 | FUN_1006037a8 */

void FUN_1006037a8(undefined8 param_1)

{
  FUN_10066ecf8(0);
  FUN_10066e7bc(param_1);
  return;
}



/* Address: 0x1006037d8 | FUN_1006037d8 */

long FUN_1006037d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 auStack_100 [4];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_a8 = param_1;
  local_a0 = param_2;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  puVar8 = auStack_e0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  local_b8 = *(long *)(param_5 + -8);
  lVar7 = (long)puVar8 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_9;
  lVar4 = 0;
  local_d8 = param_8;
  uStack_d0 = param_7;
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  lStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  FUN_100603d64(0,&local_98);
  lVar9 = lVar7 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_9;
  lVar5 = 0;
  local_c8 = param_3;
  uStack_c0 = param_4;
  local_98 = param_3;
  uStack_90 = param_4;
  local_88 = param_5;
  lStack_80 = param_6;
  local_78 = param_7;
  uStack_70 = param_8;
  FUN_100603a8c(0,&local_98);
  local_b0 = *(long *)(lVar5 + -8);
  lVar6 = lVar9 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(local_b8 + 0x10))(lVar7,local_a8,param_5);
  uVar2 = uStack_d0;
  uVar1 = local_d8;
  FUN_1005fd858(lVar9,lVar7,param_3,param_4,param_5,param_6,uStack_d0,local_d8,param_9);
  lVar4 = *(long *)(param_6 + -8);
  (**(code **)(lVar4 + 0x10))(puVar8,local_a0,param_6);
  (**(code **)(lVar4 + 0x38))(puVar8,0,1,param_6);
  *(undefined8 *)(lVar6 + -0x18) = uVar1;
  *(undefined8 *)(lVar6 + -0x10) = param_9;
  *(undefined8 *)(lVar6 + -0x20) = uVar2;
  FUN_1005fd3b4(lVar6,lVar9,puVar8,0,0,local_c8,uStack_c0,param_5,param_6);
  FUN_10066ecf8(0,lVar5);
  lVar4 = lVar6;
  FUN_10066e7bc(lVar6);
  (**(code **)(local_b0 + 8))(lVar6,lVar5);
  return lVar4;
}



/* Address: 0x1006039e4 | FUN_1006039e4 */

void FUN_1006039e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_1006037d8();
  local_58 = param_9;
  lVar1 = 0;
  local_88 = param_3;
  uStack_80 = param_4;
  local_78 = param_5;
  uStack_70 = param_6;
  local_68 = param_7;
  uStack_60 = param_8;
  FUN_100603e80(0,&local_88);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x100603a70 | FUN_100603a70 */

void FUN_100603a70(undefined8 param_1)

{
  FUN_100603b20(param_1,FUN_1005fd928);
  return;
}



/* Address: 0x100603a8c | FUN_100603a8c */

void FUN_100603a8c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb75a0);
  return;
}



/* Address: 0x100603a98 | FUN_100603a98 */

void FUN_100603a98(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cb7484);
  return;
}


