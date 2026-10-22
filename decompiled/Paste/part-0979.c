/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a7b420 | FUN_100a7b420 */

undefined1  [16] FUN_100a7b420(void)

{
  return ZEXT816(0x100f2d868);
}



/* Address: 0x100a7b430 | thunk_FUN_100a7b434 */

void thunk_FUN_100a7b434(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6e88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ea8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ea8,&DAT_100f2d868);
  DAT_100ff6e88 = pTVar1;
  return;
}



/* Address: 0x100a7b434 | FUN_100a7b434 */

void FUN_100a7b434(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6e88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ea8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ea8,&DAT_100f2d868);
  DAT_100ff6e88 = pTVar1;
  return;
}



/* Address: 0x100a7b474 | thunk_FUN_100a7b478 */

void thunk_FUN_100a7b478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6e90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ed0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ed0,&DAT_100f2d7d8);
  DAT_100ff6e90 = pTVar1;
  return;
}



/* Address: 0x100a7b478 | FUN_100a7b478 */

void FUN_100a7b478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6e90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ed0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ed0,&DAT_100f2d7d8);
  DAT_100ff6e90 = pTVar1;
  return;
}



/* Address: 0x100a7b4b8 | FUN_100a7b4b8 */

void FUN_100a7b4b8(void)

{
  FUN_100a7be80(0x28);
  return;
}



/* Address: 0x100a7b4c0 | FUN_100a7b4c0 */

void FUN_100a7b4c0(void)

{
  FUN_100a7c2b4(0x30);
  return;
}



/* Address: 0x100a7b4c8 | FUN_100a7b4c8 */

void FUN_100a7b4c8(void)

{
  FUN_100a7be80(0x29);
  return;
}



/* Address: 0x100a7b4d0 | FUN_100a7b4d0 */

void FUN_100a7b4d0(void)

{
  FUN_100a7be80(0x2e);
  return;
}



/* Address: 0x100a7b4d8 | FUN_100a7b4d8 */

void FUN_100a7b4d8(void)

{
  FUN_100a7be80(0x30);
  return;
}



/* Address: 0x100a7b4e0 | FUN_100a7b4e0 */

void FUN_100a7b4e0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)(unaff_x20 + 0x2f) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (*(char *)(unaff_x20 + 0x2e) == '\0') {
    uVar2 = 0;
  }
  FUN_100a6cc8c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),
                uVar2 | uVar1 | (ulong)*(uint *)(unaff_x20 + 0x2a) << 0x10 |
                (ulong)*(byte *)(unaff_x20 + 0x28),param_1);
  return;
}



/* Address: 0x100a7b538 | thunk_FUN_100a7b758 */

void thunk_FUN_100a7b758(void)

{
  FUN_100a7b758();
  return;
}



/* Address: 0x100a7b53c | FUN_100a7b53c */

void FUN_100a7b53c(void)

{
  long unaff_x20;
  
  FUN_100a6d3c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                (ulong)*(uint3 *)(unaff_x20 + 0x2a),*(undefined1 *)(unaff_x20 + 0x2d));
  return;
}



/* Address: 0x100a7b570 | FUN_100a7b570 */

undefined8 FUN_100a7b570(undefined8 param_1)

{
  FUN_100a572c8();
  return param_1;
}



/* Address: 0x100a7b5a4 | FUN_100a7b5a4 */

void FUN_100a7b5a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a75788(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100a7b618 | FUN_100a7b618 */

void FUN_100a7b618(code *param_1)

{
  uint uVar1;
  long unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)(unaff_x20 + 0x29) == '\0') {
    uVar1 = 0;
  }
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),uVar1 | *(byte *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a7b654 | FUN_100a7b654 */

void FUN_100a7b654(undefined8 param_1)

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
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a79464(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100a7b6dc | FUN_100a7b6dc */

void FUN_100a7b6dc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005cd444;
  FUN_100a79548(param_1,param_2,(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100a7b758 | FUN_100a7b758 */

void FUN_100a7b758(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7b7a0 | FUN_100a7b7a0 */

void FUN_100a7b7a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7b7f0 | FUN_100a7b7f0 */

void FUN_100a7b7f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7b848 | FUN_100a7b848 */

void FUN_100a7b848(void)

{
  long unaff_x20;
  
  FUN_100a792cc(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100a7b870 | FUN_100a7b870 */

undefined8 FUN_100a7b870(undefined8 param_1)

{
  FUN_100a5aac0();
  return param_1;
}



/* Address: 0x100a7b8a4 | FUN_100a7b8a4 */

void FUN_100a7b8a4(undefined1 *param_1,char *param_2,char *param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  __int32 _Var4;
  undefined *puVar5;
  undefined8 *puVar6;
  _StringGuts _Var7;
  void *pvVar8;
  undefined1 uVar10;
  undefined1 uVar11;
  Darwin *unaff_x20;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
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
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined7 uStack_338;
  undefined1 local_331;
  undefined7 uStack_330;
  int local_328;
  undefined4 uStack_324;
  undefined1 uStack_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 uStack_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 local_300;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 local_2f7;
  undefined1 uStack_2f0;
  undefined7 uStack_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 local_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 uStack_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 local_2b0;
  undefined7 uStack_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 local_2a0;
  undefined7 uStack_29f;
  undefined8 auStack_290 [28];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 local_190;
  undefined1 uStack_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 local_171;
  undefined7 uStack_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puVar9;
  
  _Var7.unknown = &DAT_00000001;
  FUN_100a79624(auStack_290,param_3);
  iVar3 = (int)auStack_290;
  FUN_100a7bec0();
  if (iVar3 == 1) {
    puVar6 = auStack_290;
    FUN_100004520();
    uVar10 = *(undefined1 *)puVar6;
    uStack_1a0 = *(undefined8 *)((long)puVar6 + 0x11);
    uStack_188 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
    uStack_181 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x29) >> 0x38);
    local_190 = (undefined7)*(undefined8 *)((long)puVar6 + 0x21);
    uStack_189 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x21) >> 0x38);
    uStack_178 = (undefined7)*(undefined8 *)((long)puVar6 + 0x39);
    uStack_180 = (undefined7)*(undefined8 *)((long)puVar6 + 0x31);
    uStack_179 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x31) >> 0x38);
    local_171 = (undefined1)puVar6[8];
    uStack_170 = (undefined7)((ulong)puVar6[8] >> 8);
    uStack_1a8 = *(undefined8 *)((long)puVar6 + 9);
    local_1b0 = *(undefined8 *)((long)puVar6 + 1);
    uStack_198 = (undefined7)*(undefined8 *)((long)puVar6 + 0x19);
    uStack_191 = (undefined1)((ulong)*(undefined8 *)((long)puVar6 + 0x19) >> 0x38);
    local_160 = 0;
    uStack_158 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x5c,_Var7);
    pvVar8 = (void *)0x8000000100db8d30;
    SVar12.bridgeObject = (void *)0x8000000100db8d30;
    SVar12.str = (char *)0xd000000000000010;
    SVar22.bridgeObject = param_5;
    SVar22.str = param_4;
    Swift::String::append(SVar12,SVar22);
    FUN_1005b32e4();
    SVar13.bridgeObject = pvVar8;
    SVar13.str = param_2;
    SVar23.bridgeObject = param_5;
    SVar23.str = param_4;
    Swift::String::append(SVar13,SVar23);
    _swift_bridgeObjectRelease(pvVar8);
    SVar14.bridgeObject = &DAT_e600000000000000;
    SVar14.str = (char *)0x27206f742027;
    puVar9 = &DAT_e600000000000000;
    SVar24.bridgeObject = param_5;
    SVar24.str = param_4;
    Swift::String::append(SVar14,SVar24);
    FUN_1005b32e4();
    SVar15.bridgeObject = puVar9;
    SVar15.str = param_3;
    SVar25.bridgeObject = param_5;
    SVar25.str = param_4;
    Swift::String::append(SVar15,SVar25);
    _swift_bridgeObjectRelease(puVar9);
    puVar9 = (undefined1 *)0xd000000000000042;
    SVar16.bridgeObject = (void *)0x8000000100db8d50;
    SVar16.str = (char *)0xd000000000000042;
    SVar26.bridgeObject = param_5;
    SVar26.str = param_4;
    Swift::String::append(SVar16,SVar26);
    uVar2 = uStack_158;
    uVar1 = local_160;
    FUN_100a500c0();
    puVar5 = &DAT_100f2de38;
    _swift_allocError(&DAT_100f2de38,puVar9,0,0);
    *puVar9 = uVar10;
    *(undefined8 *)(puVar9 + 9) = uStack_1a8;
    *(undefined8 *)(puVar9 + 1) = local_1b0;
    local_120 = CONCAT71(uStack_170,local_171);
    *(undefined8 *)(puVar9 + 0x40) = local_120;
    *(ulong *)(puVar9 + 0x39) = CONCAT17(local_171,uStack_178);
    *(ulong *)(puVar9 + 0x31) = CONCAT17(uStack_179,uStack_180);
    *(ulong *)(puVar9 + 0x29) = CONCAT17(uStack_181,uStack_188);
    *(ulong *)(puVar9 + 0x21) = CONCAT17(uStack_189,local_190);
    *(ulong *)(puVar9 + 0x19) = CONCAT17(uStack_191,uStack_198);
    *(undefined8 *)(puVar9 + 0x11) = uStack_1a0;
    uStack_138 = CONCAT71(uStack_188,uStack_189);
    local_140 = CONCAT71(local_190,uStack_191);
    uStack_128 = CONCAT71(uStack_178,uStack_179);
    uStack_130 = CONCAT71(uStack_180,uStack_181);
    uStack_2d8 = (undefined1)uVar1;
    uStack_2d7 = (undefined7)((ulong)uVar1 >> 8);
    uStack_2d0 = (undefined1)uVar2;
    uStack_2cf = (undefined7)((ulong)uVar2 >> 8);
    uStack_2c8 = SUB81(puVar5,0);
    uStack_2c7 = (undefined7)((ulong)puVar5 >> 8);
    local_2a0 = local_171;
    uStack_29f = uStack_170;
    uStack_2a8 = uStack_179;
    uStack_2a7 = uStack_178;
    local_2b0 = uStack_181;
    uStack_2af = uStack_180;
    uStack_2b8 = uStack_189;
    uStack_2b7 = uStack_188;
    uStack_2c0 = uStack_191;
    uStack_2bf = local_190;
    local_160 = CONCAT71(local_160._1_7_,uVar10);
    uStack_158 = uVar1;
    local_150 = uVar2;
    local_2e0 = uVar10;
    local_148 = puVar5;
    local_80 = uStack_130;
    uStack_78 = uStack_128;
    uStack_70 = local_140;
    uStack_68 = uStack_138;
    FUN_10000ca28(&uStack_70,&local_328);
    FUN_10000ca28(&local_80,&local_328);
    FUN_100a50050(&local_2e0,&local_328);
    FUN_100a5008c(&local_160);
LAB_100a7ba98:
    uStack_358 = CONCAT17(uStack_2c0,uStack_2c7);
    uStack_360 = CONCAT17(uStack_2c8,uStack_2cf);
    uStack_348 = CONCAT17(local_2b0,uStack_2b7);
    local_350 = CONCAT17(uStack_2b8,uStack_2bf);
    uStack_340 = CONCAT17(uStack_2a8,uStack_2af);
    uStack_338 = uStack_2a7;
    local_331 = local_2a0;
    uStack_330 = uStack_29f;
    uStack_368 = CONCAT17(uStack_2d0,uStack_2d7);
    local_370 = CONCAT17(uStack_2d8,uStack_2df);
    uVar10 = local_2e0;
  }
  else {
    puVar6 = auStack_290;
    FUN_100004520();
    uStack_158 = puVar6[1];
    local_160 = *puVar6;
    local_148 = (undefined *)puVar6[3];
    local_150 = puVar6[2];
    uStack_118 = puVar6[9];
    local_120 = puVar6[8];
    uStack_108 = puVar6[0xb];
    uStack_110 = puVar6[10];
    uStack_138 = puVar6[5];
    local_140 = puVar6[4];
    uStack_128 = puVar6[7];
    uStack_130 = puVar6[6];
    uStack_d8 = puVar6[0x11];
    local_e0 = puVar6[0x10];
    uStack_c8 = puVar6[0x13];
    uStack_d0 = puVar6[0x12];
    uStack_f8 = puVar6[0xd];
    local_100 = puVar6[0xc];
    uStack_e8 = puVar6[0xf];
    uStack_f0 = puVar6[0xe];
    uStack_a8 = puVar6[0x17];
    local_b0 = puVar6[0x16];
    uStack_98 = puVar6[0x19];
    uStack_a0 = puVar6[0x18];
    local_90 = puVar6[0x1a];
    uStack_b8 = puVar6[0x15];
    local_c0 = puVar6[0x14];
    iVar3 = (int)&local_160;
    FUN_1006c09cc();
    if (iVar3 == 1) {
      Darwin::set_errno(unaff_x20,0);
      uStack_2d0 = SUB81(param_3,0);
      uStack_2cf = (undefined7)((ulong)param_3 >> 8);
      FUN_1005b32d0(&local_328,FUN_100a7bec8,&local_2e0,param_2,
                    PTR___type_metadata_for_Swift_Int32_100eadbd0);
      uVar10 = 0;
      uVar11 = 0;
      if (local_328 != -1) goto LAB_100a7bcb4;
      _Var4 = Darwin::get_errno();
      if (_Var4 == 0x12) {
        uVar11 = 0;
        uVar10 = 1;
        goto LAB_100a7bcb4;
      }
      local_328 = 0x11;
      uStack_324 = 0xd0000000;
      uStack_320 = 0xd0;
      uStack_31f = 0x8000000100db8d;
      uStack_318 = 0x1f;
      uStack_317 = 0xd0000000000000;
      uStack_310 = 0x70;
      uStack_30f = 0x8000000100db8a;
      uStack_308 = 0x10;
      uStack_307 = 7;
      FUN_100a7f894(&local_2e0,0x656d616e6572,&DAT_e600000000000000,_Var4,param_2,param_3,&local_328
                   );
      goto LAB_100a7ba98;
    }
    local_2e0 = 0;
    uStack_2df = 0;
    uStack_2d8 = 0;
    uStack_2d7 = 0xe0000000000000;
    Swift::_StringGuts::grow(0x41,_Var7);
    pvVar8 = (void *)0x8000000100db8d30;
    SVar17.bridgeObject = (void *)0x8000000100db8d30;
    SVar17.str = (char *)0xd000000000000010;
    SVar27.bridgeObject = param_5;
    SVar27.str = param_4;
    Swift::String::append(SVar17,SVar27);
    FUN_1005b32e4();
    SVar18.bridgeObject = pvVar8;
    SVar18.str = param_2;
    SVar28.bridgeObject = param_5;
    SVar28.str = param_4;
    Swift::String::append(SVar18,SVar28);
    _swift_bridgeObjectRelease(pvVar8);
    SVar19.bridgeObject = &DAT_e600000000000000;
    SVar19.str = (char *)0x27206f742027;
    puVar9 = &DAT_e600000000000000;
    SVar29.bridgeObject = param_5;
    SVar29.str = param_4;
    Swift::String::append(SVar19,SVar29);
    FUN_1005b32e4();
    SVar20.bridgeObject = puVar9;
    SVar20.str = param_3;
    SVar30.bridgeObject = param_5;
    SVar30.str = param_4;
    Swift::String::append(SVar20,SVar30);
    _swift_bridgeObjectRelease(puVar9);
    SVar21.bridgeObject = (void *)0x8000000100db8da0;
    SVar21.str = (char *)0xd000000000000027;
    SVar31.bridgeObject = param_5;
    SVar31.str = param_4;
    Swift::String::append(SVar21,SVar31);
    uStack_2cf = uStack_2d7;
    uStack_2d0 = uStack_2d8;
    uVar10 = local_2e0;
    local_328._0_1_ = 10;
    uStack_320 = local_2e0;
    uStack_31f = uStack_2df;
    uStack_318 = uStack_2d8;
    uStack_317 = uStack_2d7;
    uStack_308 = 0x11;
    uStack_307 = 0xd0000000000000;
    uStack_310 = 0;
    uStack_30f = 0;
    local_300 = 0xd0;
    uStack_2ff = 0x8000000100db8d;
    uStack_2f8 = 0x1f;
    local_2f7 = 0xd0000000000000;
    uStack_2f0 = 0x70;
    uStack_2ef = 0x8000000100db8a;
    uStack_2e8 = 0xf3;
    uStack_2e7 = 6;
    local_2e0 = 10;
    uStack_2d8 = uVar10;
    uStack_2d7 = uStack_2df;
    uStack_2c0 = 0x11;
    uStack_2bf = 0xd0000000000000;
    uStack_2c8 = 0;
    uStack_2c7 = 0;
    uStack_2b8 = 0xd0;
    uStack_2b7 = 0x8000000100db8d;
    local_2b0 = 0x1f;
    uStack_2af = 0xd0000000000000;
    uStack_2a8 = 0x70;
    uStack_2a7 = 0x8000000100db8a;
    local_2a0 = 0xf3;
    uStack_29f = 6;
    FUN_100a50050(&local_328,&local_370);
    FUN_100a5008c(&local_2e0);
    uStack_358 = CONCAT17(uStack_308,uStack_30f);
    uStack_360 = CONCAT17(uStack_310,uStack_317);
    uStack_348 = CONCAT17(uStack_2f8,uStack_2ff);
    local_350 = CONCAT17(local_300,uStack_307);
    uStack_340 = CONCAT17(uStack_2f0,local_2f7);
    uStack_338 = uStack_2ef;
    local_331 = uStack_2e8;
    uStack_330 = uStack_2e7;
    uStack_368 = CONCAT17(uStack_318,uStack_31f);
    local_370 = CONCAT17(uStack_320,CONCAT43(uStack_324,local_328._1_3_));
    uVar10 = (undefined1)local_328;
  }
  uVar11 = 1;
LAB_100a7bcb4:
  *param_1 = uVar10;
  *(undefined8 *)(param_1 + 0x19) = uStack_358;
  *(undefined8 *)(param_1 + 0x11) = uStack_360;
  *(undefined8 *)(param_1 + 0x29) = uStack_348;
  *(undefined8 *)(param_1 + 0x21) = local_350;
  *(ulong *)(param_1 + 0x39) = CONCAT17(local_331,uStack_338);
  *(undefined8 *)(param_1 + 0x31) = uStack_340;
  *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_330,local_331);
  *(undefined8 *)(param_1 + 9) = uStack_368;
  *(undefined8 *)(param_1 + 1) = local_370;
  param_1[0x48] = uVar11;
  return;
}



/* Address: 0x100a7bd64 | FUN_100a7bd64 */

void FUN_100a7bd64(undefined8 *param_1,undefined8 param_2,Darwin *param_3)

{
  bool bVar1;
  __int32 _Var2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  Darwin *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  Darwin::set_errno(param_3,0);
  local_a0 = param_3;
  FUN_1005b32d0(&local_58,FUN_100a7be68,&local_b0,param_2,
                PTR___type_metadata_for_Swift_Int32_100eadbd0);
  bVar1 = (int)local_58 == -1;
  if (bVar1) {
    _Var2 = Darwin::get_errno();
    local_58 = 0xd000000000000028;
    uStack_50 = 0x8000000100db8d00;
    local_48 = 0xd00000000000001f;
    uStack_40 = 0x8000000100db8a70;
    local_38 = 0x79e;
    FUN_100a7ff78(&local_b0,0x6b6e696c6d7973,&DAT_e700000000000000,_Var2,param_2,param_3,&local_58);
  }
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = local_70;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = local_a0;
  *(bool *)(param_1 + 9) = bVar1;
  return;
}



/* Address: 0x100a7be68 | FUN_100a7be68 */

void FUN_100a7be68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa7328(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a7be80 | FUN_100a7be80 */

void FUN_100a7be80(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7beb8 | FUN_100a7beb8 */

void FUN_100a7beb8(void)

{
  FUN_100a7c2b4(0x31);
  return;
}



/* Address: 0x100a7bec0 | FUN_100a7bec0 */

undefined1 FUN_100a7bec0(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd8);
}



/* Address: 0x100a7bec8 | FUN_100a7bec8 */

void FUN_100a7bec8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa7110(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a7bee0 | FUN_100a7bee0 */

void FUN_100a7bee0(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Address: 0x100a7beec | FUN_100a7beec */

void FUN_100a7beec(undefined8 *param_1)

{
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x12] = 0x900;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  return;
}



/* Address: 0x100a7bf20 | FUN_100a7bf20 */

void FUN_100a7bf20(long param_1)

{
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}



/* Address: 0x100a7bf28 | FUN_100a7bf28 */

void FUN_100a7bf28(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar2 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_100a6f410(plVar2,param_1,param_2,uVar3,uVar1);
  return;
}



/* Address: 0x100a7bfa0 | thunk_FUN_100a7bfa4 */

void thunk_FUN_100a7bfa4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7bfa4 | FUN_100a7bfa4 */

void FUN_100a7bfa4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7bfd8 | FUN_100a7bfd8 */

void FUN_100a7bfd8(void)

{
  long unaff_x20;
  
  FUN_100a7909c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x100a7bff8 | FUN_100a7bff8 */

void FUN_100a7bff8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_80 = 0x120000f;
  if ((param_4 & 1) == 0) {
    local_80 = 0x100000f;
  }
  uStack_88 = 0;
  puVar2 = &DAT_100ff6dc8;
  local_90 = param_3;
  FUN_1000f7830(&DAT_100ff6dc8,&DAT_100c91d18);
  FUN_1005b32d0(&local_58,FUN_100a7c118,&local_a0,param_2,puVar2);
  bVar1 = local_58._4_1_ == '\x01';
  if (bVar1) {
    uVar3 = local_58 & 0xffffffff;
    local_58 = 0xd00000000000002a;
    uStack_50 = 0x8000000100db8e90;
    local_48 = 0xd00000000000001f;
    uStack_40 = 0x8000000100db8a70;
    local_38 = 0x52c;
    FUN_100a80a18(&local_a0,0x656c696679706f63,&DAT_e800000000000000,uVar3,param_2,param_3,&local_58
                 );
  }
  param_1[5] = uStack_78;
  param_1[4] = CONCAT44(uStack_7c,local_80);
  param_1[7] = uStack_68;
  param_1[6] = uStack_70;
  param_1[8] = local_60;
  param_1[1] = uStack_98;
  *param_1 = local_a0;
  param_1[3] = uStack_88;
  param_1[2] = local_90;
  *(bool *)(param_1 + 9) = bVar1;
  return;
}



/* Address: 0x100a7c118 | FUN_100a7c118 */

void FUN_100a7c118(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa76a8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100a7c134 | FUN_100a7c134 */

void FUN_100a7c134(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100a7c144 | FUN_100a7c144 */

void FUN_100a7c144(void)

{
  FUN_100a7c334();
  return;
}



/* Address: 0x100a7c158 | FUN_100a7c158 */

void FUN_100a7c158(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa7360(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100a7c174 | FUN_100a7c174 */

void FUN_100a7c174(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa71a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x1c),*(undefined4 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100a7c194 | FUN_100a7c194 */

void FUN_100a7c194(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa72f0(param_1,*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14));
  return;
}



/* Address: 0x100a7c1ac | FUN_100a7c1ac */

void FUN_100a7c1ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar6 = (long *)0x570;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_100a73fe0(plVar6,param_1,param_2,uVar8,uVar5,uVar1,uVar3,uVar2,uVar4,uVar7);
  return;
}



/* Address: 0x100a7c25c | FUN_100a7c25c */

void FUN_100a7c25c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_3);
    return;
  }
  return;
}



/* Address: 0x100a7c288 | FUN_100a7c288 */

void FUN_100a7c288(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  return;
}



/* Address: 0x100a7c2b4 | FUN_100a7c2b4 */

void FUN_100a7c2b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a7c2f4 | FUN_100a7c2f4 */

void FUN_100a7c2f4(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100a7c31c | FUN_100a7c31c */

void FUN_100a7c31c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100aa70e0(param_1,*(undefined2 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a7c334 | FUN_100a7c334 */

void FUN_100a7c334(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ab1dec(param_1,*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14),
                (ulong)*(uint3 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x1b));
  return;
}



/* Address: 0x100a7c35c | thunk_FUN_100543edc */

void thunk_FUN_100543edc(void)

{
  FUN_100543edc();
  return;
}



/* Address: 0x100a7c360 | thunk_FUN_1002e7908 */

void thunk_FUN_1002e7908(void)

{
  FUN_1002e7908();
  return;
}



/* Address: 0x100a7c364 | thunk_FUN_1006c19bc */

void thunk_FUN_1006c19bc(void)

{
  FUN_1006c19bc();
  return;
}



/* Address: 0x100a7c368 | thunk_FUN_100a6d830 */

void thunk_FUN_100a6d830(void)

{
  FUN_100a6d830();
  return;
}



/* Address: 0x100a7c36c | FUN_100a7c36c */

void FUN_100a7c36c(void)

{
  FUN_100a7396c();
  return;
}



/* Address: 0x100a7c380 | FUN_100a7c380 */

void FUN_100a7c380(void)

{
  FUN_100a7b060();
  return;
}



/* Address: 0x100a7c394 | FUN_100a7c394 */

void FUN_100a7c394(void)

{
  FUN_100a7b080();
  return;
}



/* Address: 0x100a7c3a8 | FUN_100a7c3a8 */

void FUN_100a7c3a8(void)

{
  FUN_100a7394c();
  return;
}



/* Address: 0x100a7c3bc | thunk_FUN_100a6d7e0 */

void thunk_FUN_100a6d7e0(void)

{
  FUN_100a6d7e0();
  return;
}



/* Address: 0x100a7c3c0 | thunk_FUN_100a6c664 */

void thunk_FUN_100a6c664(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a6c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100a7c3c4 | FUN_100a7c3c4 */

void FUN_100a7c3c4(void)

{
  FUN_100a7c144();
  return;
}



/* Address: 0x100a7c3d8 | thunk_FUN_100a73990 */

void thunk_FUN_100a73990(void)

{
  thunk_FUN_100a73990();
  return;
}



/* Address: 0x100a7c3dc | thunk_FUN_100a72a38 */

void thunk_FUN_100a72a38(void)

{
  FUN_100a72a38();
  return;
}


