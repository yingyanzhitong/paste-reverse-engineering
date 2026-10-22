/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008f1cd4 | FUN_1008f1cd4 */

undefined8 FUN_1008f1cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x2f) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_3;
    *(ulong *)(unaff_x20 + 0x28) = param_4;
    _swift_beginAccess(unaff_x20 + 0x40,auStack_90,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    FUN_1008fa598(param_1,param_2,param_3,param_4,param_4 >> 0x38);
  }
  return uVar1;
}



/* Address: 0x1008f1da4 | FUN_1008f1da4 */

undefined8 FUN_1008f1da4(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_2b8 [152];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
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
  undefined1 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_e8,1,0);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  local_70 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x98);
  local_50 = *(undefined8 *)(unaff_x20 + 0x90);
  local_40 = *(undefined1 *)(unaff_x20 + 0xa0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x38);
  local_b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x58);
  local_90 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x18);
  local_d0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x20);
  iVar1 = (int)&local_d0;
  FUN_1008fa584();
  uVar2 = 0;
  if (iVar1 == 1) {
    uStack_1b8 = param_1[0xd];
    local_1c0 = param_1[0xc];
    uStack_1a8 = param_1[0xf];
    uStack_1b0 = param_1[0xe];
    uStack_198 = param_1[0x11];
    local_1a0 = param_1[0x10];
    local_190 = *(undefined1 *)(param_1 + 0x12);
    uStack_1f8 = param_1[5];
    local_200 = param_1[4];
    uStack_1e8 = param_1[7];
    uStack_1f0 = param_1[6];
    uStack_1d8 = param_1[9];
    local_1e0 = param_1[8];
    uStack_1c8 = param_1[0xb];
    uStack_1d0 = param_1[10];
    uStack_218 = param_1[1];
    local_220 = *param_1;
    uStack_208 = param_1[3];
    uStack_210 = param_1[2];
    FUN_100004520(&local_220,0,0);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x78);
    local_120 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x98);
    local_100 = *(undefined8 *)(unaff_x20 + 0x90);
    local_f0 = *(undefined1 *)(unaff_x20 + 0xa0);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x38);
    local_160 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x58);
    local_140 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x18);
    local_180 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_1b8;
    *(undefined8 *)(unaff_x20 + 0x70) = local_1c0;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_1a8;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_1b0;
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_198;
    *(undefined8 *)(unaff_x20 + 0x90) = local_1a0;
    *(undefined1 *)(unaff_x20 + 0xa0) = local_190;
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_1f8;
    *(undefined8 *)(unaff_x20 + 0x30) = local_200;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_1e8;
    *(undefined8 *)(unaff_x20 + 0x40) = uStack_1f0;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_1d8;
    *(undefined8 *)(unaff_x20 + 0x50) = local_1e0;
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_1c8;
    *(undefined8 *)(unaff_x20 + 0x60) = uStack_1d0;
    *(undefined8 *)(unaff_x20 + 0x18) = uStack_218;
    *(undefined8 *)(unaff_x20 + 0x10) = local_220;
    *(undefined8 *)(unaff_x20 + 0x28) = uStack_208;
    *(undefined8 *)(unaff_x20 + 0x20) = uStack_210;
    FUN_1000f8cac(param_1,auStack_2b8,&DAT_100fec420,&DAT_100c83b18);
    FUN_1000fb4c4(&local_180,&DAT_100fec428,&DAT_100c83b20);
    _swift_beginAccess(unaff_x20 + 0xb8,auStack_2b8,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
    *(undefined8 *)(unaff_x20 + 0xc0) = 0;
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  }
  return uVar2;
}



/* Address: 0x1008f1f28 | FUN_1008f1f28 */

void FUN_1008f1f28(void)

{
  FUN_1008f1b58();
  return;
}



/* Address: 0x1008f1f34 | FUN_1008f1f34 */

void FUN_1008f1f34(undefined8 param_1,undefined8 param_2)

{
  FUN_100630334(param_1,param_2,FUN_1008fa558);
  return;
}



/* Address: 0x1008f1f40 | thunk_FUN_1008f1f44 */

void thunk_FUN_1008f1f44(void)

{
  FUN_1008f1f44();
  return;
}



/* Address: 0x1008f1f44 | FUN_1008f1f44 */

void FUN_1008f1f44(long param_1,code *param_2,undefined8 param_3)

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
  if (*(char *)(param_1 + 0x20) == -1) {
    _swift_beginAccess(param_1 + 0x38,auStack_60,0x21,0);
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



/* Address: 0x1008f200c | FUN_1008f200c */

void FUN_1008f200c(long param_1,code *param_2,undefined8 param_3)

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
  if (*(char *)(param_1 + 0x27) == -1) {
    _swift_beginAccess(param_1 + 0x38,auStack_60,0x21,0);
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



/* Address: 0x1008f20d4 | FUN_1008f20d4 */

void FUN_1008f20d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_100f13e68;
  _swift_allocObject(&DAT_100f13e68,0x20,7);
  uVar3 = *param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  puVar2 = &DAT_100f13e90;
  _swift_allocObject(&DAT_100f13e90,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1008fefd4;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *param_1 = FUN_100625c60;
  param_1[1] = puVar2;
  _swift_unknownObjectRetain(uVar3);
  return;
}



/* Address: 0x1008f215c | FUN_1008f215c */

void FUN_1008f215c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008f226c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008f2180 | FUN_1008f2180 */

void FUN_1008f2180(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_68);
  puVar1 = &DAT_100fec4a0;
  FUN_1000f7830(&DAT_100fec4a0,&DAT_100c83b78);
  _swift_dynamicCast(auStack_70,auStack_68,puVar1,&DAT_100eec8d0,7);
  FUN_10000cbfc(param_2,auStack_90);
  puVar1 = &DAT_100fec4c0;
  FUN_1000f7830(&DAT_100fec4c0,&DAT_100c83b80);
  puVar2 = auStack_94;
  _swift_dynamicCast(puVar2,auStack_90,puVar1,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
  pcVar3 = *(code **)(param_4 + 0x48);
  FUN_1008df8a4();
  (*pcVar3)(auStack_70,auStack_94,&DAT_100eec8d0,puVar2,param_3,param_4);
  return;
}



/* Address: 0x1008f226c | FUN_1008f226c */

undefined *
FUN_1008f226c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f23d0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_1000c9144(0,&DAT_100fec4a8,FUN_1008fee60,PTR_typeMetadataAccessor_100ead690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec498;
    FUN_1000f7830(&DAT_100fec498,&DAT_100c83b70);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x1008f23d0 | FUN_1008f23d0 */

undefined * FUN_1008f23d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar2 = &DAT_100f13b48;
  _swift_allocObject(&DAT_100f13b48,0x30,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = thunk_FUN_1008f67d4;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  uVar3 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar3;
  (*pcVar7)(uVar3,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f13b70;
    _swift_allocObject(&DAT_100f13b70,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1008fddbc;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar7)(thunk_FUN_100653138,puVar6,uVar3,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  else {
    uVar4 = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(thunk_FUN_1008fddbc,puVar2);
      _swift_endAccess(auStack_80);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      lVar5 = param_1;
      puVar6 = puVar1;
      FUN_1008f2a3c(param_1,puVar1);
    }
    FUN_1006486f8(lVar5,puVar6,uVar4);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return puVar1;
}



/* Address: 0x1008f25f4 | thunk_FUN_1008fe864 */

void thunk_FUN_1008fe864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008f25f8 | thunk_FUN_1008f7304 */

void thunk_FUN_1008f7304(void)

{
  FUN_1008f7304();
  return;
}



/* Address: 0x1008f25fc | FUN_1008f25fc */

undefined * FUN_1008f25fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar2 = &DAT_100f13030;
  _swift_allocObject(&DAT_100f13030,0x30,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = thunk_FUN_1008f67d4;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  uVar3 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar3;
  (*pcVar7)(uVar3,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f13058;
    _swift_allocObject(&DAT_100f13058,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_1008fddbc;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar7)(FUN_100653138,puVar6,uVar3,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  else {
    uVar4 = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1008fddbc,puVar2);
      _swift_endAccess(auStack_80);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      lVar5 = param_1;
      puVar6 = puVar1;
      FUN_1008f2f58(param_1,puVar1);
    }
    FUN_1006486f8(lVar5,puVar6,uVar4);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return puVar1;
}



/* Address: 0x1008f2820 | FUN_1008f2820 */

undefined * FUN_1008f2820(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar1 + 0x20) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0xff;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  puVar2 = &DAT_100f10e70;
  _swift_allocObject(&DAT_100f10e70,0x30,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = thunk_FUN_1008f67d4;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  uVar3 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar3;
  (*pcVar7)(uVar3,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f10e98;
    _swift_allocObject(&DAT_100f10e98,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_1008fa48c;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar7)(thunk_FUN_100653138,puVar6,uVar3,lVar5);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_release(puVar6);
  }
  else {
    uVar4 = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1008fa48c,puVar2);
      _swift_endAccess(auStack_80);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      lVar5 = param_1;
      puVar6 = puVar1;
      FUN_1008f4710(param_1,puVar1);
    }
    FUN_1006486f8(lVar5,puVar6,uVar4);
    FUN_100004550(lVar5,puVar6);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  _swift_release(puVar1);
  return puVar1;
}



/* Address: 0x1008f2a3c | FUN_1008f2a3c */

undefined8 FUN_1008f2a3c(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar13 = *(long *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (param_2[0x20] != -1) {
      return 0;
    }
    *(long *)(param_2 + 0x10) = lVar13;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_2[0x20] = 1;
    _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    _swift_errorRetain(lVar13);
    return uVar5;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1008f2f58);
    (*pcVar14)();
  }
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  uVar4 = uVar7;
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  FUN_1005dfee0(lVar13,cVar3);
  FUN_1005dfee0(lVar13,cVar3);
  _swift_unknownObjectRetain(uVar7);
  (*pcVar14)(uVar4,lVar1);
  _swift_unknownObjectRelease(uVar7);
  if ((uVar4 & 1) != 0) {
    puVar6 = &DAT_100f13c10;
    _swift_allocObject(&DAT_100f13c10,0x20,7);
    *(undefined **)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar13;
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar13 + 0x20) != -1) {
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      FUN_1008f1b58(uVar5,*(undefined8 *)(lVar13 + 0x18),*(char *)(lVar13 + 0x20),FUN_1008fde58);
      _swift_retain(param_2);
      _swift_release(puVar6);
      FUN_1008fddc8(lVar13,cVar3);
      return uVar5;
    }
    _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
    FUN_1005dfee0(lVar13,cVar3);
    _swift_retain(param_2);
    FUN_10064967c(thunk_FUN_1008fcb74,puVar6);
    _swift_endAccess(auStack_a8);
    FUN_1008fddc8(lVar13,cVar3);
    param_2 = puVar6;
    goto LAB_1008f2f18;
  }
  puVar6 = &DAT_100f13b98;
  _swift_allocObject(&DAT_100f13b98,0x28,7);
  *(code **)(puVar6 + 0x10) = thunk_FUN_1008fcb58;
  *(undefined **)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar13;
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  _swift_retain(param_2);
  FUN_1005dfee0(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  FUN_1005dfee0(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  uVar4 = uVar7;
  (*pcVar14)(uVar7,lVar1);
  if ((uVar4 & 1) == 0) {
    _swift_release(param_2);
    puVar8 = &DAT_100f13bc0;
    _swift_allocObject(&DAT_100f13bc0,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar13;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    pcVar14 = *(code **)(lVar1 + 0x18);
    FUN_1005dfee0(lVar13,cVar3);
    _swift_retain(puVar6);
    (*pcVar14)(thunk_FUN_1008fa090,puVar8,uVar7,lVar1);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    uVar5 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    cVar11 = *(char *)(lVar13 + 0x20);
    if (cVar11 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar1 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar14 = *(code **)(lVar1 + 0x10);
      uVar12 = 1;
      FUN_1008fde6c(uVar5,uVar2,1);
      uVar4 = uVar7;
      lVar10 = lVar1;
      (*pcVar14)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f13be8;
        _swift_allocObject(&DAT_100f13be8,0x20,7);
        *(undefined **)(puVar8 + 0x10) = param_2;
        *(undefined8 *)(puVar8 + 0x18) = uVar5;
        pcVar14 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1008fde6c(uVar5,uVar2,1);
        (*pcVar14)(thunk_FUN_1008fcb6c,puVar8,uVar7,lVar1);
        _swift_release(param_2);
        _swift_release(puVar8);
      }
      else {
        uVar9 = uVar5;
        thunk_FUN_10092b398(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar9,lVar10);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar12);
      }
      cVar11 = '\x01';
LAB_1008f2ebc:
      FUN_1008fde8c(uVar5,uVar2,cVar11);
    }
    else {
      if (cVar11 != -1) {
        FUN_1008fde6c(uVar5,uVar2,cVar11);
        FUN_10090d0dc(uVar5,uVar2,cVar11,param_2);
        _swift_release(param_2);
        goto LAB_1008f2ebc;
      }
      _swift_release(param_2);
      _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
      FUN_10064967c(thunk_FUN_1008fcb60,puVar6);
      _swift_endAccess(auStack_a8);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  FUN_1008fddc8(lVar13,cVar3);
  _swift_release(param_2);
  FUN_1008fddc8(lVar13,cVar3);
LAB_1008f2f18:
  _swift_release(param_2);
  FUN_1008fddc8(lVar13,cVar3);
  return 0;
}



/* Address: 0x1008f2f58 | FUN_1008f2f58 */

undefined8 FUN_1008f2f58(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar13 = *(long *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (param_2[0x20] != -1) {
      return 0;
    }
    *(long *)(param_2 + 0x10) = lVar13;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_2[0x20] = 1;
    _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    _swift_errorRetain(lVar13);
    return uVar5;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1008f3474);
    (*pcVar14)();
  }
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  uVar4 = uVar7;
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  FUN_1005dfee0(lVar13,cVar3);
  FUN_1005dfee0(lVar13,cVar3);
  _swift_unknownObjectRetain(uVar7);
  (*pcVar14)(uVar4,lVar1);
  _swift_unknownObjectRelease(uVar7);
  if ((uVar4 & 1) != 0) {
    puVar6 = &DAT_100f130f8;
    _swift_allocObject(&DAT_100f130f8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar13;
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar13 + 0x20) != -1) {
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      FUN_1008f1b58(uVar5,*(undefined8 *)(lVar13 + 0x18),*(char *)(lVar13 + 0x20),FUN_1008fde58);
      _swift_retain(param_2);
      _swift_release(puVar6);
      FUN_1008fddc8(lVar13,cVar3);
      return uVar5;
    }
    _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
    FUN_1005dfee0(lVar13,cVar3);
    _swift_retain(param_2);
    FUN_10064967c(thunk_FUN_1008fcb74,puVar6);
    _swift_endAccess(auStack_a8);
    FUN_1008fddc8(lVar13,cVar3);
    param_2 = puVar6;
    goto LAB_1008f3434;
  }
  puVar6 = &DAT_100f13080;
  _swift_allocObject(&DAT_100f13080,0x28,7);
  *(code **)(puVar6 + 0x10) = thunk_FUN_1008fcb58;
  *(undefined **)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar13;
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  _swift_retain(param_2);
  FUN_1005dfee0(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  FUN_1005dfee0(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  uVar4 = uVar7;
  (*pcVar14)(uVar7,lVar1);
  if ((uVar4 & 1) == 0) {
    _swift_release(param_2);
    puVar8 = &DAT_100f130a8;
    _swift_allocObject(&DAT_100f130a8,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar13;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    pcVar14 = *(code **)(lVar1 + 0x18);
    FUN_1005dfee0(lVar13,cVar3);
    _swift_retain(puVar6);
    (*pcVar14)(thunk_FUN_1008fa090,puVar8,uVar7,lVar1);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    uVar5 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    cVar11 = *(char *)(lVar13 + 0x20);
    if (cVar11 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar1 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar14 = *(code **)(lVar1 + 0x10);
      uVar12 = 1;
      FUN_1008fde6c(uVar5,uVar2,1);
      uVar4 = uVar7;
      lVar10 = lVar1;
      (*pcVar14)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f130d0;
        _swift_allocObject(&DAT_100f130d0,0x20,7);
        *(undefined **)(puVar8 + 0x10) = param_2;
        *(undefined8 *)(puVar8 + 0x18) = uVar5;
        pcVar14 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1008fde6c(uVar5,uVar2,1);
        (*pcVar14)(thunk_FUN_1008fcb6c,puVar8,uVar7,lVar1);
        _swift_release(param_2);
        _swift_release(puVar8);
      }
      else {
        uVar9 = uVar5;
        thunk_FUN_10092b398(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar9,lVar10);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar12);
      }
      cVar11 = '\x01';
LAB_1008f33d8:
      FUN_1008fde8c(uVar5,uVar2,cVar11);
    }
    else {
      if (cVar11 != -1) {
        FUN_1008fde6c(uVar5,uVar2,cVar11);
        FUN_10090d0dc(uVar5,uVar2,cVar11,param_2);
        _swift_release(param_2);
        goto LAB_1008f33d8;
      }
      _swift_release(param_2);
      _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
      FUN_10064967c(thunk_FUN_1008fcb60,puVar6);
      _swift_endAccess(auStack_a8);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  FUN_1008fddc8(lVar13,cVar3);
  _swift_release(param_2);
  FUN_1008fddc8(lVar13,cVar3);
LAB_1008f3434:
  _swift_release(param_2);
  FUN_1008fddc8(lVar13,cVar3);
  return 0;
}



/* Address: 0x1008f3474 | FUN_1008f3474 */

undefined8 FUN_1008f3474(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_4 + 0x10,auStack_90,1,0);
    if (*(char *)(param_4 + 0x20) != -1) {
      return 0;
    }
    *(undefined8 *)(param_4 + 0x10) = uVar14;
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined1 *)(param_4 + 0x20) = 1;
    _swift_beginAccess(param_4 + 0x38,auStack_a8,1,0);
    uVar15 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x38) = 0;
    _swift_errorRetain(uVar14);
    return uVar15;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1008f3978);
    (*pcVar16)();
  }
  local_b0 = uVar14;
  FUN_1005dff00(uVar14,cVar3);
  puVar4 = &local_b0;
  (*param_2)();
  uVar8 = puVar4[5];
  lVar1 = puVar4[6];
  uVar5 = uVar8;
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar8);
  (*pcVar16)(uVar5,lVar1);
  _swift_unknownObjectRelease(uVar8);
  if ((uVar5 & 1) != 0) {
    puVar6 = (undefined8 *)&DAT_100f13198;
    _swift_allocObject(&DAT_100f13198,0x20,7);
    puVar6[2] = param_4;
    puVar6[3] = puVar4;
    _swift_beginAccess(puVar4 + 2,auStack_90,0,0);
    if (*(char *)(puVar4 + 4) == -1) {
      _swift_beginAccess(puVar4 + 7,auStack_a8,0x21,0);
      _swift_retain(param_4);
      _swift_retain(puVar4);
      FUN_10064967c(thunk_FUN_1008fcb74,puVar6);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar6);
      uVar15 = 0;
    }
    else {
      uVar15 = puVar4[2];
      FUN_1008f1b58(uVar15,puVar4[3],*(char *)(puVar4 + 4),FUN_1008fde58);
      _swift_retain(param_4);
      puVar4 = puVar6;
    }
    _swift_release(puVar4);
    FUN_1008fddc8(uVar14,cVar3);
    return uVar15;
  }
  puVar7 = &DAT_100f13120;
  _swift_allocObject(&DAT_100f13120,0x28,7);
  *(code **)(puVar7 + 0x10) = thunk_FUN_1008fcb58;
  *(long *)(puVar7 + 0x18) = param_4;
  *(undefined8 **)(puVar7 + 0x20) = puVar4;
  uVar8 = puVar4[5];
  lVar1 = puVar4[6];
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_4,5);
  _swift_retain_n(puVar4,2);
  uVar5 = uVar8;
  (*pcVar16)(uVar8,lVar1);
  if ((uVar5 & 1) == 0) {
    _swift_release(param_4);
    puVar9 = &DAT_100f13148;
    _swift_allocObject(&DAT_100f13148,0x28,7);
    *(undefined8 **)(puVar9 + 0x10) = puVar4;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar9 + 0x20) = puVar7;
    pcVar16 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar4);
    _swift_retain(puVar7);
    (*pcVar16)(thunk_FUN_1008fa090,puVar9,uVar8,lVar1);
    _swift_release(param_4);
    _swift_release(puVar7);
    _swift_release(puVar9);
    goto LAB_1008f3918;
  }
  _swift_beginAccess(puVar4 + 2,auStack_90,0,0);
  uVar15 = puVar4[2];
  uVar2 = puVar4[3];
  cVar12 = *(char *)(puVar4 + 4);
  if (cVar12 == '\x01') {
    uVar8 = *(ulong *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    _swift_getObjectType();
    pcVar16 = *(code **)(lVar1 + 0x10);
    uVar13 = 1;
    FUN_1008fde6c(uVar15,uVar2,1);
    uVar5 = uVar8;
    lVar11 = lVar1;
    (*pcVar16)(uVar8,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar9 = &DAT_100f13170;
      _swift_allocObject(&DAT_100f13170,0x20,7);
      *(long *)(puVar9 + 0x10) = param_4;
      *(undefined8 *)(puVar9 + 0x18) = uVar15;
      pcVar16 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_4);
      FUN_1008fde6c(uVar15,uVar2,1);
      (*pcVar16)(thunk_FUN_1008fcb6c,puVar9,uVar8,lVar1);
      _swift_release(param_4);
      _swift_release(puVar9);
    }
    else {
      uVar10 = uVar15;
      thunk_FUN_10092b398(uVar15);
      FUN_1006486f8();
      FUN_100004550(uVar10,lVar11);
      _swift_release(param_4);
      _swift_bridgeObjectRelease(uVar13);
    }
    cVar12 = '\x01';
LAB_1008f38e0:
    FUN_1008fde8c(uVar15,uVar2,cVar12);
  }
  else {
    if (cVar12 != -1) {
      FUN_1008fde6c(uVar15,uVar2,cVar12);
      FUN_10090d0dc(uVar15,uVar2,cVar12,param_4);
      _swift_release(param_4);
      goto LAB_1008f38e0;
    }
    _swift_release(param_4);
    _swift_beginAccess(puVar4 + 7,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008fcb60,puVar7);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(param_4);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
LAB_1008f3918:
  _swift_release_n(param_4,2);
  _swift_release_n(puVar4,2);
  FUN_1008fddc8(uVar14,cVar3);
  return 0;
}



/* Address: 0x1008f3978 | FUN_1008f3978 */

undefined8 FUN_1008f3978(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008f3d2c);
      (*pcVar10)();
    }
    (*param_2)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f10c68;
      _swift_allocObject(&DAT_100f10c68,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_1008fa3d4;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_4,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f10c90;
        _swift_allocObject(&DAT_100f10c90,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1008fa3dc,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1005dfeb4(uVar5,cVar2);
          FUN_10092b43c(uVar5,cVar2,param_4);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f10cb8;
      _swift_allocObject(&DAT_100f10cb8,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_4);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_4 = lVar3;
    }
    _swift_release(param_4);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008f3d2c | FUN_1008f3d2c */

undefined8 FUN_1008f3d2c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar5 = *(char *)(param_1 + 0x20);
  if (cVar5 == '\x01') {
    _swift_beginAccess(param_4 + 0x10,auStack_90,1,0);
    uVar16 = 0;
    if (*(char *)(param_4 + 0x20) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar1;
      *(undefined8 *)(param_4 + 0x18) = uVar2;
      *(undefined1 *)(param_4 + 0x20) = 1;
      _swift_beginAccess(param_4 + 0x38,auStack_a8,1,0);
      uVar16 = *(undefined8 *)(param_4 + 0x38);
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x48) = 0;
      *(undefined8 *)(param_4 + 0x38) = 0;
      _swift_errorRetain(uVar1);
    }
  }
  else {
    if (cVar5 == -1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1008f4258);
      (*pcVar17)();
    }
    local_b8 = uVar1;
    uStack_b0 = uVar2;
    FUN_1008fde58(uVar1,uVar2,cVar5);
    puVar7 = &local_b8;
    (*param_2)();
    uVar11 = puVar7[5];
    lVar3 = puVar7[6];
    uVar8 = uVar11;
    _swift_getObjectType();
    pcVar17 = *(code **)(lVar3 + 0x10);
    _swift_unknownObjectRetain(uVar11);
    (*pcVar17)(uVar8,lVar3);
    _swift_unknownObjectRelease(uVar11);
    if ((uVar8 & 1) == 0) {
      puVar10 = &DAT_100f11780;
      _swift_allocObject(&DAT_100f11780,0x28,7);
      *(code **)(puVar10 + 0x10) = thunk_FUN_1008fcb58;
      *(long *)(puVar10 + 0x18) = param_4;
      *(undefined8 **)(puVar10 + 0x20) = puVar7;
      uVar11 = puVar7[5];
      lVar3 = puVar7[6];
      _swift_getObjectType();
      pcVar17 = *(code **)(lVar3 + 0x10);
      _swift_retain_n(param_4,5);
      _swift_retain_n(puVar7,2);
      uVar8 = uVar11;
      (*pcVar17)(uVar11,lVar3);
      if ((uVar8 & 1) == 0) {
        _swift_release(param_4);
        puVar12 = &DAT_100f117a8;
        _swift_allocObject(&DAT_100f117a8,0x28,7);
        *(undefined8 **)(puVar12 + 0x10) = puVar7;
        *(code **)(puVar12 + 0x18) = thunk_FUN_1008fcb60;
        *(undefined **)(puVar12 + 0x20) = puVar10;
        pcVar17 = *(code **)(lVar3 + 0x18);
        _swift_retain(puVar7);
        _swift_retain(puVar10);
        (*pcVar17)(thunk_FUN_1008fa090,puVar12,uVar11,lVar3);
        _swift_release(param_4);
        _swift_release(puVar10);
        _swift_release(puVar12);
      }
      else {
        _swift_beginAccess(puVar7 + 2,auStack_90,0,0);
        uVar16 = puVar7[2];
        uVar4 = puVar7[3];
        cVar6 = *(char *)(puVar7 + 4);
        if (cVar6 == '\x01') {
          uVar11 = *(ulong *)(param_4 + 0x28);
          lVar3 = *(long *)(param_4 + 0x30);
          _swift_getObjectType();
          pcVar17 = *(code **)(lVar3 + 0x10);
          uVar15 = 1;
          FUN_1008fde6c(uVar16,uVar4,1);
          uVar8 = uVar11;
          lVar14 = lVar3;
          (*pcVar17)(uVar11,lVar3);
          if ((uVar8 & 1) == 0) {
            puVar12 = &DAT_100f117d0;
            _swift_allocObject(&DAT_100f117d0,0x20,7);
            *(long *)(puVar12 + 0x10) = param_4;
            *(undefined8 *)(puVar12 + 0x18) = uVar16;
            pcVar17 = *(code **)(lVar3 + 0x18);
            _swift_retain(param_4);
            FUN_1008fde6c(uVar16,uVar4,1);
            (*pcVar17)(thunk_FUN_1008fcb6c,puVar12,uVar11,lVar3);
            _swift_release(param_4);
            _swift_release(puVar12);
          }
          else {
            uVar13 = uVar16;
            thunk_FUN_10092b398(uVar16);
            FUN_1006486f8();
            FUN_100004550(uVar13,lVar14);
            _swift_release(param_4);
            _swift_bridgeObjectRelease(uVar15);
          }
          FUN_1008fde8c(uVar16,uVar4,1);
        }
        else if (cVar6 == -1) {
          _swift_release(param_4);
          _swift_beginAccess(puVar7 + 7,auStack_a8,0x21,0);
          FUN_10064967c(thunk_FUN_1008fcb60,puVar10);
          _swift_endAccess(auStack_a8);
        }
        else {
          FUN_1008fde6c(uVar16,uVar4,cVar6);
          FUN_10090d0dc(uVar16,uVar4,cVar6,param_4);
          _swift_release(param_4);
          FUN_1008fde8c(uVar16,uVar4,cVar6);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release(param_4);
        _swift_release(puVar10);
        _swift_bridgeObjectRelease(0);
      }
      _swift_release_n(param_4,2);
      _swift_release_n(puVar7,2);
      FUN_1008fde8c(uVar1,uVar2,cVar5);
      uVar16 = 0;
    }
    else {
      puVar9 = (undefined8 *)&DAT_100f117f8;
      _swift_allocObject(&DAT_100f117f8,0x20,7);
      puVar9[2] = param_4;
      puVar9[3] = puVar7;
      _swift_beginAccess(puVar7 + 2,auStack_90,0,0);
      if (*(char *)(puVar7 + 4) == -1) {
        _swift_beginAccess(puVar7 + 7,auStack_a8,0x21,0);
        _swift_retain(param_4);
        _swift_retain(puVar7);
        FUN_10064967c(thunk_FUN_1008fcb74,puVar9);
        _swift_endAccess(auStack_a8);
        _swift_release(puVar9);
        uVar16 = 0;
      }
      else {
        uVar16 = puVar7[2];
        FUN_1008f1b58(uVar16,puVar7[3],*(char *)(puVar7 + 4),FUN_1008fde58);
        _swift_retain(param_4);
        puVar7 = puVar9;
      }
      _swift_release(puVar7);
      FUN_1008fde8c(uVar1,uVar2,cVar5);
    }
  }
  return uVar16;
}



/* Address: 0x1008f4258 | FUN_1008f4258 */

undefined8 FUN_1008f4258(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_78,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar12 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_90,1,0);
    if (*(char *)(param_4 + 0x20) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar12;
      *(undefined8 *)(param_4 + 0x18) = 0;
      *(undefined1 *)(param_4 + 0x20) = 1;
      _swift_beginAccess(param_4 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_4 + 0x38);
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x48) = 0;
      *(undefined8 *)(param_4 + 0x38) = 0;
      _swift_errorRetain(uVar12);
      return uVar2;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1008f4710);
    (*pcVar13)();
  }
  (*param_2)();
  uVar6 = *(ulong *)(lVar3 + 0x28);
  lVar1 = *(long *)(lVar3 + 0x30);
  uVar4 = uVar6;
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar6);
  (*pcVar13)(uVar4,lVar1);
  _swift_unknownObjectRelease(uVar6);
  if ((uVar4 & 1) != 0) {
    puVar5 = &DAT_100f11a00;
    _swift_allocObject(&DAT_100f11a00,0x20,7);
    *(long *)(puVar5 + 0x10) = param_4;
    *(long *)(puVar5 + 0x18) = lVar3;
    _swift_beginAccess(lVar3 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar3 + 0x20) == -1) {
      _swift_beginAccess(lVar3 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fcb74,puVar5);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar5);
      _swift_release(lVar3);
      return 0;
    }
    uVar12 = *(undefined8 *)(lVar3 + 0x10);
    FUN_1008f1b58(uVar12,*(undefined8 *)(lVar3 + 0x18),*(char *)(lVar3 + 0x20),FUN_1008fde58);
    _swift_retain(param_4);
    _swift_release(puVar5);
    return uVar12;
  }
  puVar5 = &DAT_100f11988;
  _swift_allocObject(&DAT_100f11988,0x28,7);
  *(code **)(puVar5 + 0x10) = thunk_FUN_1008fcb58;
  *(long *)(puVar5 + 0x18) = param_4;
  *(long *)(puVar5 + 0x20) = lVar3;
  uVar6 = *(ulong *)(lVar3 + 0x28);
  lVar1 = *(long *)(lVar3 + 0x30);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_4,5);
  _swift_retain_n(lVar3,2);
  uVar4 = uVar6;
  (*pcVar13)(uVar6,lVar1);
  if ((uVar4 & 1) == 0) {
    _swift_release(param_4);
    puVar7 = &DAT_100f119b0;
    _swift_allocObject(&DAT_100f119b0,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar7 + 0x20) = puVar5;
    pcVar13 = *(code **)(lVar1 + 0x18);
    _swift_retain(lVar3);
    _swift_retain(puVar5);
    (*pcVar13)(thunk_FUN_1008fa090,puVar7,uVar6,lVar1);
    _swift_release(puVar5);
    _swift_release(lVar3);
    _swift_release(puVar7);
    goto LAB_1008f46cc;
  }
  _swift_beginAccess(lVar3 + 0x10,auStack_90,0,0);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  cVar10 = *(char *)(lVar3 + 0x20);
  if (cVar10 == '\x01') {
    uVar6 = *(ulong *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar1 + 0x10);
    uVar11 = 1;
    FUN_1008fde6c(uVar12,uVar2,1);
    uVar4 = uVar6;
    lVar9 = lVar1;
    (*pcVar13)(uVar6,lVar1);
    if ((uVar4 & 1) == 0) {
      puVar7 = &DAT_100f119d8;
      _swift_allocObject(&DAT_100f119d8,0x20,7);
      *(long *)(puVar7 + 0x10) = param_4;
      *(undefined8 *)(puVar7 + 0x18) = uVar12;
      pcVar13 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_4);
      FUN_1008fde6c(uVar12,uVar2,1);
      (*pcVar13)(thunk_FUN_1008fcb6c,puVar7,uVar6,lVar1);
      _swift_release(param_4);
      _swift_release(puVar7);
    }
    else {
      uVar8 = uVar12;
      thunk_FUN_10092b398(uVar12);
      FUN_1006486f8();
      FUN_100004550(uVar8,lVar9);
      _swift_release(param_4);
      _swift_bridgeObjectRelease(uVar11);
    }
    cVar10 = '\x01';
LAB_1008f4694:
    FUN_1008fde8c(uVar12,uVar2,cVar10);
  }
  else {
    if (cVar10 != -1) {
      FUN_1008fde6c(uVar12,uVar2,cVar10);
      FUN_10090d0dc(uVar12,uVar2,cVar10,param_4);
      _swift_release(param_4);
      goto LAB_1008f4694;
    }
    _swift_release(param_4);
    _swift_beginAccess(lVar3 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008fcb60,puVar5);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar5);
  _swift_release(lVar3);
  _swift_bridgeObjectRelease(0);
LAB_1008f46cc:
  _swift_release(lVar3);
  _swift_release_n(param_4,3);
  return 0;
}



/* Address: 0x1008f4710 | FUN_1008f4710 */

undefined8 FUN_1008f4710(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  lVar7 = *(long *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar6 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(long *)(param_2 + 0x10) = lVar7;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_98,1,0);
      uVar6 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(lVar7);
    }
  }
  else {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1008f499c);
      (*pcVar8)();
    }
    uVar1 = *(ulong *)(lVar7 + 0x20);
    lVar2 = *(long *)(lVar7 + 0x28);
    uVar4 = uVar1;
    _swift_getObjectType();
    pcVar8 = *(code **)(lVar2 + 0x10);
    FUN_1005dfee0(lVar7,cVar3);
    FUN_1005dfee0(lVar7,cVar3);
    _swift_unknownObjectRetain(uVar1);
    (*pcVar8)(uVar4,lVar2);
    _swift_unknownObjectRelease(uVar1);
    if ((uVar4 & 1) == 0) {
      FUN_1009261c8(param_2);
      FUN_1008fddc8(lVar7,cVar3);
      FUN_1008fddc8(lVar7,cVar3);
      uVar6 = 0;
    }
    else {
      puVar5 = &DAT_100f10ec0;
      _swift_allocObject(&DAT_100f10ec0,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(long *)(puVar5 + 0x18) = lVar7;
      _swift_beginAccess(lVar7 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar7 + 0x18) == -1) {
        _swift_beginAccess(lVar7 + 0x30,auStack_98,0x21,0);
        FUN_1005dfee0(lVar7,cVar3);
        _swift_retain(param_2);
        FUN_1005dfee0(lVar7,cVar3);
        _swift_retain(param_2);
        FUN_10064967c(thunk_FUN_1008fa40c,puVar5);
        _swift_endAccess(auStack_98);
        _swift_release(param_2);
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x10);
        FUN_100630334(uVar6,*(char *)(lVar7 + 0x18),FUN_100308524);
        FUN_1005dfee0(lVar7,cVar3);
        _swift_retain(param_2);
        FUN_1005dfee0(lVar7,cVar3);
      }
      _swift_release(puVar5);
      puVar5 = PTR__swift_release_100eae3e8;
      FUN_1008fddc8(lVar7,cVar3);
      FUN_1008fddc8(lVar7,cVar3);
      FUN_1008fddf0(lVar7,cVar3,puVar5);
    }
  }
  return uVar6;
}



/* Address: 0x1008f499c | FUN_1008f499c */

undefined8 FUN_1008f499c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar4 = &local_a0;
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar7 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar8;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar7 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar8);
    }
  }
  else {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008f4c00);
      (*pcVar9)();
    }
    local_a0 = uVar8;
    FUN_1005dff00(uVar8,cVar3);
    (*param_2)();
    uVar1 = *(ulong *)((long)puVar4 + 0x20);
    lVar2 = *(long *)((long)puVar4 + 0x28);
    uVar5 = uVar1;
    _swift_getObjectType();
    pcVar9 = *(code **)(lVar2 + 0x10);
    _swift_unknownObjectRetain(uVar1);
    (*pcVar9)(uVar5,lVar2);
    _swift_unknownObjectRelease(uVar1);
    if ((uVar5 & 1) == 0) {
      FUN_1009261c8(param_4);
      _swift_release(puVar4);
      FUN_1008fddc8(uVar8,cVar3);
      uVar7 = 0;
    }
    else {
      puVar6 = &DAT_100f10ee8;
      _swift_allocObject(&DAT_100f10ee8,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(undefined8 **)(puVar6 + 0x18) = puVar4;
      _swift_beginAccess((undefined1 *)((long)puVar4 + 0x10),auStack_80,0,0);
      if (*(char *)((long)puVar4 + 0x18) == -1) {
        _swift_beginAccess((undefined1 *)((long)puVar4 + 0x30),auStack_98,0x21,0);
        _swift_retain_n(param_4,2);
        _swift_retain_n(puVar4,2);
        FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
        _swift_endAccess(auStack_98);
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)((long)puVar4 + 0x10);
        FUN_100630334(uVar7,*(char *)((long)puVar4 + 0x18),FUN_100308524);
        _swift_retain_n(param_4,2);
        _swift_retain_n(puVar4,2);
      }
      _swift_release(param_4);
      _swift_release(puVar6);
      _swift_release_n(puVar4,2);
      FUN_1008fddc8(uVar8,cVar3);
    }
  }
  return uVar7;
}



/* Address: 0x1008f4c00 | FUN_1008f4c00 */

undefined8 FUN_1008f4c00(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  cVar3 = *(char *)(param_2 + 0x20);
  if (cVar3 != -1) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    _swift_beginAccess(param_1 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_1 + 0x20) == -1) {
      *(undefined8 *)(param_1 + 0x10) = uVar1;
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      *(char *)(param_1 + 0x20) = cVar3;
      _swift_beginAccess(param_1 + 0x38,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      FUN_1008fde58(uVar1,uVar2,cVar3);
    }
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008f4cdc);
  (*pcVar4)();
}



/* Address: 0x1008f4cdc | FUN_1008f4cdc */

undefined8 FUN_1008f4cdc(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008f5090);
      (*pcVar10)();
    }
    (*param_2)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f10da8;
      _swift_allocObject(&DAT_100f10da8,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_1008fa3d4;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_4,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f10dd0;
        _swift_allocObject(&DAT_100f10dd0,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1008fa3dc,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1005dfeb4(uVar5,cVar2);
          FUN_10092b43c(uVar5,cVar2,param_4);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f10df8;
      _swift_allocObject(&DAT_100f10df8,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_4);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_4 = lVar3;
    }
    _swift_release(param_4);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008f5090 | FUN_1008f5090 */

undefined * FUN_1008f5090(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  if (puVar2 == PTR___type_metadata_for____100eae0c8 + 8) {
    uVar9 = 0;
    local_a0 = param_1;
    uStack_98 = param_2;
    FUN_1008fa4a4(0);
    uVar10 = 0;
    FUN_1008fa508(0);
    _swift_retain(param_2);
    _swift_dynamicCast(&local_b0,&local_a0,uVar9,uVar10,7);
    puVar2 = &DAT_100f10fd8;
    _swift_allocObject(&DAT_100f10fd8,0x20,7);
    *(undefined8 *)(puVar2 + 0x18) = uStack_a8;
    *(code **)(puVar2 + 0x10) = local_b0;
    puVar3 = &DAT_100f11000;
    _swift_allocObject(&DAT_100f11000,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(code **)(puVar3 + 0x18) = FUN_1000386a0;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    uVar4 = *(ulong *)(unaff_x20 + 0x20);
    lVar8 = *(long *)(unaff_x20 + 0x28);
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar8 + 0x10);
    _swift_retain_n();
    _swift_retain_n(puVar2,2);
    _swift_retain(uStack_a8);
    uVar14 = uVar4;
    (*pcVar11)(uVar4,lVar8);
    if ((uVar14 & 1) == 0) {
      _swift_release(uStack_a8);
      puVar5 = &DAT_100f11028;
      _swift_allocObject(&DAT_100f11028,0x28,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(code **)(puVar5 + 0x18) = FUN_1008a8990;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      pcVar11 = *(code **)(lVar8 + 0x18);
      _swift_retain();
      _swift_retain(puVar3);
      (*pcVar11)(thunk_FUN_100653138,puVar5,uVar4,lVar8);
      _swift_release(puVar5);
      _swift_release_n(puVar2,2);
      _swift_release();
      _swift_release(puVar3);
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1008f551c);
      (*pcVar11)();
    }
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    if (*(char *)(unaff_x20 + 0x18) != '\x01') {
      if (*(char *)(unaff_x20 + 0x18) == -1) {
        _swift_release(uStack_a8);
        _swift_beginAccess(unaff_x20 + 0x30,&local_90,0x21,0);
        FUN_10064967c(FUN_1008a8990,puVar3);
        _swift_endAccess(&local_90);
        goto LAB_1008f5534;
      }
      (*local_b0)();
    }
    _swift_release(uStack_a8);
LAB_1008f5534:
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(puVar2,2);
    _swift_release();
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(0);
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1008f5578);
    (*pcVar11)();
  }
  puVar2 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar14 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x28) = uVar14;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x20] = 0xff;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  puVar3 = &DAT_100f10f88;
  _swift_allocObject(&DAT_100f10f88,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar14;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(param_2,2);
  _swift_retain_n();
  _swift_retain_n(puVar2,2);
  _swift_unknownObjectRetain(uVar14);
  uVar14 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar14 & 1) == 0) {
    puVar5 = &DAT_100f10fb0;
    _swift_allocObject(&DAT_100f10fb0,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1008fa498;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(thunk_FUN_100653138,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar7 = 1;
    FUN_100308524(uVar9,1);
    uVar10 = 0;
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,&local_90,0x21,0);
      FUN_10064967c(FUN_1008fa498,puVar3);
      _swift_endAccess(&local_90);
      uVar12 = 0;
      uVar13 = 0;
      uVar6 = 0;
      goto LAB_1008f52fc;
    }
    (*param_1)(&local_90);
    FUN_100308538(uVar9,cVar1);
    uVar7 = 0;
    uVar9 = local_90;
    uVar10 = uStack_88;
  }
  uVar12 = uVar9;
  uVar13 = uVar10;
  uVar6 = uVar7;
  FUN_1008f1b58(uVar9,uVar10,uVar7,FUN_1008fde58);
  FUN_1008fdeac(uVar9,uVar10,uVar7);
LAB_1008f52fc:
  FUN_1006486f8(uVar12,uVar13,uVar6);
  FUN_100004550(uVar12,uVar13);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1008f5578 | FUN_1008f5578 */

undefined * FUN_1008f5578(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  code *pcVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  puVar3 = &DAT_100febfb0;
  FUN_1000f7830(&DAT_100febfb0,&DAT_100c84e90);
  if ((puVar2 == puVar3) && (puVar2 == PTR___type_metadata_for____100eae0c8 + 8)) {
    uVar9 = 0;
    local_a0 = param_1;
    uStack_98 = param_2;
    FUN_1008fdec0(0);
    uVar7 = 0;
    FUN_1008fdf3c(0);
    _swift_retain(param_2);
    _swift_dynamicCast(&local_b0,&local_a0,uVar9,uVar7,7);
    puVar2 = &DAT_100f13328;
    _swift_allocObject(&DAT_100f13328,0x20,7);
    *(undefined8 *)(puVar2 + 0x18) = uStack_a8;
    *(code **)(puVar2 + 0x10) = local_b0;
    puVar3 = &DAT_100f13350;
    _swift_allocObject(&DAT_100f13350,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(code **)(puVar3 + 0x18) = FUN_1008fdfa0;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    uVar4 = *(ulong *)(unaff_x20 + 0x28);
    lVar8 = *(long *)(unaff_x20 + 0x30);
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar8 + 0x10);
    _swift_retain_n();
    _swift_retain_n(puVar2,2);
    _swift_retain(uStack_a8);
    uVar13 = uVar4;
    (*pcVar10)(uVar4,lVar8);
    if ((uVar13 & 1) == 0) {
      _swift_release(uStack_a8);
      puVar5 = &DAT_100f13378;
      _swift_allocObject(&DAT_100f13378,0x28,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(code **)(puVar5 + 0x18) = FUN_1008fdfd4;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      pcVar10 = *(code **)(lVar8 + 0x18);
      _swift_retain();
      _swift_retain(puVar3);
      (*pcVar10)(thunk_FUN_1008fa090,puVar5,uVar4,lVar8);
      _swift_release(puVar5);
      _swift_release_n(puVar2,2);
      _swift_release();
      _swift_release(puVar3);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008f5a40);
      (*pcVar10)();
    }
    _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
    cVar1 = *(char *)(unaff_x20 + 0x20);
    if (cVar1 == '\x01') {
      _swift_release(uStack_a8);
    }
    else if (cVar1 == -1) {
      _swift_release(uStack_a8);
      _swift_beginAccess(unaff_x20 + 0x38,&local_90,0x21,0);
      FUN_10064967c(FUN_1008fdfd4,puVar3);
      _swift_endAccess(&local_90);
    }
    else {
      pcVar10 = *(code **)(unaff_x20 + 0x10);
      uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
      local_90 = pcVar10;
      uStack_88 = uVar9;
      FUN_1008fde58(pcVar10,uVar9,cVar1);
      (*local_b0)(&local_90);
      _swift_release(uStack_a8);
      FUN_1008fde8c(pcVar10,uVar9,cVar1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(puVar2,2);
    _swift_release();
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1008f5ad4);
    (*pcVar10)();
  }
  puVar2 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x30);
  uVar13 = *(ulong *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(ulong *)(puVar2 + 0x28) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x20] = 0xff;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  puVar3 = &DAT_100f132d8;
  _swift_allocObject(&DAT_100f132d8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar13;
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(param_2,2);
  _swift_retain_n();
  _swift_retain_n(puVar2,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar4;
  (*pcVar10)(uVar4,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar5 = &DAT_100f13300;
    _swift_allocObject(&DAT_100f13300,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1008fde4c;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar10 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar10)(thunk_FUN_1008fa090,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  pcVar10 = *(code **)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  cVar1 = *(char *)(unaff_x20 + 0x20);
  if (cVar1 == '\x01') {
    uVar7 = 1;
    FUN_1008fde58(pcVar10,uVar9,1);
    uVar9 = 0;
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x38,&local_90,0x21,0);
      FUN_10064967c(FUN_1008fde4c,puVar3);
      _swift_endAccess(&local_90);
      pcVar11 = (code *)0x0;
      uVar12 = 0;
      uVar6 = 0;
      goto LAB_1008f5820;
    }
    local_90 = pcVar10;
    uStack_88 = uVar9;
    FUN_1008fde6c(pcVar10,uVar9,cVar1);
    (*param_1)(&local_a0,&local_90);
    FUN_1008fde8c(pcVar10,uVar9,cVar1);
    uVar7 = 0;
    pcVar10 = local_a0;
    uVar9 = uStack_98;
  }
  pcVar11 = pcVar10;
  uVar12 = uVar9;
  uVar6 = uVar7;
  FUN_1008f1b58(pcVar10,uVar9,uVar7,FUN_1008fde58);
  FUN_1008fdeac(pcVar10,uVar9,uVar7);
LAB_1008f5820:
  FUN_1006486f8(pcVar11,uVar12,uVar6);
  FUN_100004550(pcVar11,uVar12);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1008f5ad4 | FUN_1008f5ad4 */

long FUN_1008f5ad4(code *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  long local_98;
  long local_90 [3];
  undefined1 auStack_78 [24];
  
  lVar2 = *unaff_x20;
  _swift_allocObject(lVar2,0x48,7);
  lVar7 = unaff_x20[5];
  uVar11 = unaff_x20[4];
  *(long *)(lVar2 + 0x28) = unaff_x20[5];
  *(ulong *)(lVar2 + 0x20) = uVar11;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x18) = 0xff;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  puVar3 = &DAT_100f11050;
  _swift_allocObject(&DAT_100f11050,0x30,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  *(long **)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar11;
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(lVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar11);
  uVar11 = uVar4;
  (*pcVar9)(uVar4,lVar7);
  if ((uVar11 & 1) == 0) {
    puVar5 = &DAT_100f11078;
    _swift_allocObject(&DAT_100f11078,0x28,7);
    *(long **)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1008fa5e0;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar9 = *(code **)(lVar7 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar9)(thunk_FUN_100653138,puVar5,uVar4,lVar7);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(lVar2);
    _swift_release(puVar3);
    return lVar2;
  }
  _swift_beginAccess(unaff_x20 + 2,auStack_78,0,0);
  lVar7 = unaff_x20[2];
  cVar1 = (char)unaff_x20[3];
  if (cVar1 == '\x01') {
    uVar6 = 1;
    FUN_1008fa558(lVar7,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 6,local_90,0x21,0);
      FUN_10064967c(FUN_1008fa5e0,puVar3);
      _swift_endAccess(local_90);
      lVar8 = 0;
      uVar10 = 0;
      pcVar9 = (code *)0x0;
      goto LAB_1008f5d18;
    }
    local_90[0] = lVar7;
    FUN_1008fa5ec(lVar7,cVar1);
    (*param_1)(&local_98,local_90);
    FUN_1008fa60c(lVar7,cVar1);
    uVar6 = 0;
    lVar7 = local_98;
  }
  pcVar9 = FUN_1008fa558;
  lVar8 = lVar7;
  uVar10 = uVar6;
  FUN_100630334(lVar7,uVar6,FUN_1008fa558);
  FUN_1008fddf0(lVar7,uVar6,PTR__swift_bridgeObjectRelease_100eae160);
LAB_1008f5d18:
  FUN_1006486f8(lVar8,uVar10,pcVar9);
  FUN_100004550(lVar8,uVar10);
  _swift_release(param_2);
  _swift_release();
  _swift_release(lVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(pcVar9);
  return lVar2;
}



/* Address: 0x1008f5d80 | FUN_1008f5d80 */

undefined8 FUN_1008f5d80(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_100308524(uVar4,1);
    uStack_68 = 0;
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f5e90);
      (*pcVar2)();
    }
    (*param_3)(&local_70);
    FUN_100308538(uVar4,cVar1);
    uVar3 = 0;
    uVar4 = local_70;
  }
  _swift_beginAccess(param_1 + 0x10,&local_70,1,0);
  if (*(char *)(param_1 + 0x20) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uStack_68;
    *(undefined1 *)(param_1 + 0x20) = uVar3;
    _swift_beginAccess(param_1 + 0x38,auStack_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    FUN_1008fdeac(uVar4,uStack_68,uVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1008f5e90 | FUN_1008f5e90 */

undefined8 FUN_1008f5e90(long param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  cVar2 = *(char *)(param_2 + 0x20);
  if (cVar2 == '\x01') {
    uVar5 = 1;
    FUN_1008fde58(uVar4,uVar1,1);
    uStack_80 = 0;
  }
  else {
    if (cVar2 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008f5fbc);
      (*pcVar3)();
    }
    local_70 = uVar4;
    uStack_68 = uVar1;
    FUN_1008fde6c(uVar4,uVar1,cVar2);
    (*param_3)(&local_88,&local_70);
    FUN_1008fde8c(uVar4,uVar1,cVar2);
    uVar5 = 0;
    uVar4 = local_88;
  }
  _swift_beginAccess(param_1 + 0x10,&local_70,1,0);
  if (*(char *)(param_1 + 0x20) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x18) = uStack_80;
    *(undefined1 *)(param_1 + 0x20) = uVar5;
    _swift_beginAccess(param_1 + 0x38,&local_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    FUN_1008fdeac(uVar4,uStack_80,uVar5);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1008f5fbc | FUN_1008f5fbc */

undefined8 FUN_1008f5fbc(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 local_88 [3];
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_1008fa558(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f60e0);
      (*pcVar2)();
    }
    local_70[0] = uVar4;
    FUN_1008fa5ec(uVar4,cVar1);
    (*param_3)(local_88,local_70);
    FUN_1008fa60c(uVar4,cVar1);
    uVar3 = 0;
    uVar4 = local_88[0];
  }
  _swift_beginAccess(param_1 + 0x10,local_70,1,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
    _swift_beginAccess(param_1 + 0x30,local_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_1008fddf0(uVar4,uVar3,PTR__swift_bridgeObjectRelease_100eae160);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1008f60e0 | FUN_1008f60e0 */

undefined8 FUN_1008f60e0(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    FUN_1008fde58(uVar1,uVar2,1);
    (*param_2)(uVar1);
    FUN_1008fde8c(uVar1,uVar2,1);
  }
  else if (*(char *)(param_1 + 0x20) == -1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008f612c);
    (*pcVar3)();
  }
  return 0;
}



/* Address: 0x1008f6178 | FUN_1008f6178 */

/* WARNING: Removing unreachable block (ram,0x0001008f6258) */

undefined8 FUN_1008f6178(long param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\x01') {
    FUN_1008fde58(uVar1,uVar2,1);
    (*param_3)(&local_88,uVar1);
    uVar5 = local_88;
    FUN_1008f1b58(local_88,uStack_80,0,FUN_1008fde58);
    FUN_1008fde8c(uVar1,uVar2,1);
    _swift_unknownObjectRelease(local_88);
  }
  else {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008f630c);
      (*pcVar4)();
    }
    _swift_beginAccess(param_2 + 0x10,&local_88,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar3;
      _swift_beginAccess(param_2 + 0x38,auStack_a0,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(uVar1);
    }
  }
  return uVar5;
}



/* Address: 0x1008f630c | FUN_1008f630c */

/* WARNING: Removing unreachable block (ram,0x0001008f63e0) */

undefined8 FUN_1008f630c(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    FUN_100308524(uVar4,1);
    (*param_3)(uVar4);
    uVar3 = 0;
    FUN_100630334(0,0,FUN_100308524);
    FUN_100308538(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f6468);
      (*pcVar2)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_78,1,0);
    uVar3 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(char *)(param_2 + 0x18) = cVar1;
      _swift_beginAccess(param_2 + 0x30,auStack_90,1,0);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
  }
  return uVar3;
}



/* Address: 0x1008f6468 | FUN_1008f6468 */

/* WARNING: Removing unreachable block (ram,0x0001008f64b8) */
/* WARNING: Removing unreachable block (ram,0x0001008f6584) */
/* WARNING: Removing unreachable block (ram,0x0001008f64e4) */
/* WARNING: Removing unreachable block (ram,0x0001008f65d0) */

void FUN_1008f6468(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_68;
  
  _swift_retain();
  (*param_2)(&local_68);
  pcVar3 = FUN_1005dff00;
  uVar2 = 0;
  uVar1 = local_68;
  FUN_100630334(local_68,0,FUN_1005dff00);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_release(local_68);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(pcVar3);
  return;
}



/* Address: 0x1008f65f4 | FUN_1008f65f4 */

void FUN_1008f65f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  _swift_getObjectType(uVar2);
  FUN_10061cf14(2,0,uVar2,uVar1);
  return;
}



/* Address: 0x1008f662c | FUN_1008f662c */

void FUN_1008f662c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0xe0,auStack_48,0x21,0);
  _swift_bridgeObjectRetain(uVar1);
  FUN_10090409c();
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1008f6688 | FUN_1008f6688 */

void FUN_1008f6688(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  _swift_beginAccess(param_2 + 0xe0,auStack_48,0x21,0);
  _swift_bridgeObjectRetain(uVar1);
  FUN_10090409c();
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1008f66e4 | FUN_1008f66e4 */

code * FUN_1008f66e4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  _swift_getObjectType(param_2);
  FUN_1008f68cc();
  FUN_1008deafc();
  puVar1 = &DAT_100f11820;
  _swift_allocObject(&DAT_100f11820,0x20,7);
  uVar4 = *param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  puVar2 = &DAT_100f11848;
  _swift_allocObject(&DAT_100f11848,0x20,7);
  *(code **)(puVar2 + 0x10) = thunk_FUN_1008fcb28;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  _swift_retain(param_2);
  _swift_unknownObjectRetain(uVar4);
  pcVar3 = thunk_FUN_1008fcb38;
  FUN_1008f5090(thunk_FUN_1008fcb38,puVar2);
  _swift_release_n(param_2,2);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x1008f67d4 | FUN_1008f67d4 */

void FUN_1008f67d4(undefined8 *param_1)

{
  _swift_retain(*param_1);
  return;
}



/* Address: 0x1008f67dc | FUN_1008f67dc */

void FUN_1008f67dc(void)

{
  FUN_1008e07ec();
  return;
}



/* Address: 0x1008f67e4 | FUN_1008f67e4 */

void FUN_1008f67e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100febaf0,&DAT_100c83800);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x1008f6880 | FUN_1008f6880 */

void FUN_1008f6880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_1008f67e4(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1008f68cc | FUN_1008f68cc */

undefined8 FUN_1008f68cc(void)

{
  undefined8 unaff_x20;
  
  FUN_1008f6880();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x1008f6908 | FUN_1008f6908 */

void FUN_1008f6908(void)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  undefined1 *puVar12;
  char *pcVar13;
  void *in_x3;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
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
  undefined8 uStack_120;
  undefined4 auStack_118 [2];
  undefined1 auStack_110 [8];
  code *local_108;
  void *local_100;
  undefined1 auStack_f8 [32];
  StaticString local_d8;
  __uint64 _Stack_d0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined3 local_a4;
  undefined *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  char *local_88;
  void *pvStack_80;
  char local_77;
  long local_70 [2];
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar5.unknown + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_110 + -uVar15) - uVar15;
  FUN_100877858();
  if (local_77 == '\x02') {
    FUN_100011080(&local_b8,&local_d8);
    FUN_100011080(&local_d8,auStack_f8);
    in_x3 = (void *)0x0;
    FUN_100952c0c();
    iVar4 = (int)local_70;
    puVar12 = auStack_f8;
    pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    puStack_90 = puVar12;
    local_88 = pcVar13;
    if ((iVar4 != 0) && (local_70[0] != 0)) {
      return;
    }
  }
  else if (local_77 == '\0') {
    pcVar13 = (char *)(ulong)CONCAT34(local_a4,local_a8);
    FUN_10000c650(local_b8);
    puStack_90 = local_b0;
    local_88 = pcVar13;
  }
  else {
    local_100 = (void *)local_98;
    _swift_release(local_b0);
    _swift_release((ulong)local_b8 & 0x3fffffffffffffff);
    FUN_1005d8fac(local_100);
    in_x3 = pvStack_80;
  }
  local_b8 = (undefined *)0x0;
  local_b0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,(_StringGuts)puStack_90);
  local_d8.unknown = local_b8;
  _Stack_d0 = (__uint64)local_b0;
  SVar20.bridgeObject = (void *)0x8000000100daf900;
  SVar20.str = (char *)0xd000000000000018;
  SVar23.bridgeObject = in_x3;
  SVar23.str = local_88;
  Swift::String::append(SVar20,SVar23);
  SVar18.bridgeObject = (void *)0xed00006c656e6e61;
  SVar18.str = (char *)0x684374656b636f53;
  SVar24.bridgeObject = in_x3;
  SVar24.str = local_88;
  Swift::String::append(SVar18,SVar24);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar25.bridgeObject = in_x3;
  SVar25.str = local_88;
  Swift::String::append(SVar19,SVar25);
  local_a0 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f10920;
  _swift_allocObject(&DAT_100f10920,0x52,7);
  local_b8 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_108 = *(code **)(lVar17 + 8);
  (*local_108)(auStack_110 + -uVar15,MVar5.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_100 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown != OVar11.unknown) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f6bb4);
    (*pcVar2)();
  }
  pvVar14 = local_100;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f6bb0);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar13);
  _swift_release(AVar8.unknown);
  _swift_bridgeObjectRelease(local_b0);
  MVar7 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar7);
  (*local_108)(lVar16,MVar5.unknown);
  SVar20 = Swift::__typeName(SUB81(MVar7.unknown,0));
  SVar26.bridgeObject = pvVar14;
  SVar26.str = pcVar9;
  Swift::String::append(SVar20,SVar26);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar21.bridgeObject = (void *)0xef2073746e65746e;
  SVar21.str = (char *)0x6f63206874697720;
  SVar27.bridgeObject = pvVar14;
  SVar27.str = pcVar9;
  Swift::String::append(SVar21,SVar27);
  Swift::__print_unlocked();
  line = _Stack_d0;
  file.unknown = local_d8.unknown;
  *(undefined4 *)(lVar16 + -8) = 0;
  *(undefined8 *)(lVar16 + -0x10) = 0xd0;
  SVar22.bridgeObject = (void *)0x2;
  SVar22.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar22,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008f6cb4);
  (*pcVar2)();
}



/* Address: 0x1008f6cb4 | FUN_1008f6cb4 */

undefined8 FUN_1008f6cb4(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008f7070);
      (*pcVar10)();
    }
    (*param_3)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f10bf0;
      _swift_allocObject(&DAT_100f10bf0,0x28,7);
      *(code **)(puVar6 + 0x10) = FUN_1008fa3d4;
      *(long *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f10c18;
        _swift_allocObject(&DAT_100f10c18,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = FUN_1008fa3dc;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(FUN_1008fa3dc,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_100308524(uVar5,cVar2);
          FUN_10092b43c(uVar5,cVar2,param_2);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f10c40;
      _swift_allocObject(&DAT_100f10c40,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_2);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008f7070 | FUN_1008f7070 */

undefined * FUN_1008f7070(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f10b78;
  _swift_allocObject(&DAT_100f10b78,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f10ba0;
  _swift_allocObject(&DAT_100f10ba0,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar4;
  (*pcVar7)(uVar4,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f10bc8;
    _swift_allocObject(&DAT_100f10bc8,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_1008fa3c8;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    (*pcVar7)(thunk_FUN_100653138,puVar6,uVar4,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1008fa3c8,puVar3);
      _swift_endAccess(auStack_90);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_retain(param_3);
      lVar5 = param_1;
      puVar6 = puVar2;
      FUN_1008f6cb4(param_1,puVar2,param_2,param_3);
      _swift_release(param_3);
    }
    FUN_1006486f8(lVar5,puVar6,param_2);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(param_2);
  }
  return puVar2;
}



/* Address: 0x1008f7304 | FUN_1008f7304 */

void FUN_1008f7304(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008f7360 | FUN_1008f7360 */

void FUN_1008f7360(void)

{
  long unaff_x20;
  
  FUN_1008e1230(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1008f739c | FUN_1008f739c */

void FUN_1008f739c(void)

{
  FUN_1008e2c38();
  return;
}



/* Address: 0x1008f73b4 | FUN_1008f73b4 */

void FUN_1008f73b4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e2dbc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008f73bc | FUN_1008f73bc */

void FUN_1008f73bc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008f73cc | FUN_1008f73cc */

void FUN_1008f73cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e37cc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008f73d4 | FUN_1008f73d4 */

void FUN_1008f73d4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008f73e4 | FUN_1008f73e4 */

void FUN_1008f73e4(void)

{
  FUN_1008e3a7c();
  return;
}



/* Address: 0x1008f73fc | FUN_1008f73fc */

undefined8 FUN_1008f73fc(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008f77b8);
      (*pcVar10)();
    }
    (*param_3)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f12978;
      _swift_allocObject(&DAT_100f12978,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_1008fa3d4;
      *(long *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f129a0;
        _swift_allocObject(&DAT_100f129a0,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1008fa3dc,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_100308524(uVar5,cVar2);
          FUN_10092b43c(uVar5,cVar2,param_2);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f129c8;
      _swift_allocObject(&DAT_100f129c8,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_2);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008f77b8 | FUN_1008f77b8 */

undefined * FUN_1008f77b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100f12928;
  _swift_allocObject(&DAT_100f12928,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f12950;
  _swift_allocObject(&DAT_100f12950,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = thunk_FUN_1000386a0;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    _swift_beginAccess(param_1 + 0x30,auStack_70,0x21,0);
    _swift_retain(param_3);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(puVar2);
    _swift_retain(puVar1);
    _swift_retain(param_1);
    FUN_10064967c(thunk_FUN_1008fa400,puVar3);
    _swift_endAccess(auStack_70);
    param_1 = 0;
    puVar4 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_retain(param_3);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(puVar2);
    _swift_retain(puVar1);
    _swift_retain(param_1);
    puVar4 = puVar2;
    FUN_1008f73fc();
  }
  FUN_1006486f8(param_1,puVar4,param_2);
  FUN_100004550(param_1,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Address: 0x1008f7988 | FUN_1008f7988 */

undefined8
FUN_1008f7988(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar14 = *(char *)(param_1 + 0x20);
  if (cVar14 != '\x01') {
    if (cVar14 == -1) {
      _swift_unknownObjectRelease(param_4);
      _swift_release(param_3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008f7edc);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(long *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar14;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(lVar1);
      return uVar2;
    }
    return 0;
  }
  FUN_1008fde58(lVar1,uVar2,1);
  FUN_10094e964(lVar1,2,0);
  _swift_getObjectType(param_4);
  puVar6 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  lVar7 = lVar1;
  FUN_10063dd74(lVar1,param_4,puVar6,param_5);
  uVar10 = *(ulong *)(lVar7 + 0x28);
  lVar3 = *(long *)(lVar7 + 0x30);
  uVar8 = uVar10;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_unknownObjectRetain(uVar10);
  (*pcVar5)(uVar8,lVar3);
  _swift_unknownObjectRelease(uVar10);
  if ((uVar8 & 1) != 0) {
    puVar6 = &DAT_100f13da0;
    _swift_allocObject(&DAT_100f13da0,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar7;
    _swift_beginAccess(lVar7 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar7 + 0x20) == -1) {
      _swift_beginAccess(lVar7 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar7);
      FUN_10064967c(thunk_FUN_1008fcb8c,puVar6);
      _swift_endAccess(auStack_a8);
      FUN_1008fde8c(lVar1,uVar2,1);
      _swift_release(puVar6);
      _swift_release(lVar7);
      return 0;
    }
    uVar9 = *(undefined8 *)(lVar7 + 0x10);
    FUN_1008f1b58(uVar9,*(undefined8 *)(lVar7 + 0x18),*(char *)(lVar7 + 0x20),FUN_1008fde58);
    _swift_retain(param_2);
    FUN_1008fde8c(lVar1,uVar2,1);
    _swift_release(puVar6);
    return uVar9;
  }
  puVar6 = &DAT_100f13d28;
  _swift_allocObject(&DAT_100f13d28,0x28,7);
  *(code **)(puVar6 + 0x10) = thunk_FUN_1008fcb58;
  *(long *)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar7;
  uVar10 = *(ulong *)(lVar7 + 0x28);
  lVar3 = *(long *)(lVar7 + 0x30);
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar3 + 0x10);
  _swift_retain_n(param_2,5);
  _swift_retain_n(lVar7,2);
  uVar8 = uVar10;
  (*pcVar5)(uVar10,lVar3);
  if ((uVar8 & 1) == 0) {
    _swift_release(param_2);
    puVar11 = &DAT_100f13d50;
    _swift_allocObject(&DAT_100f13d50,0x28,7);
    *(long *)(puVar11 + 0x10) = lVar7;
    *(code **)(puVar11 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar11 + 0x20) = puVar6;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain(lVar7);
    _swift_retain(puVar6);
    (*pcVar5)(thunk_FUN_1008fa090,puVar11,uVar10,lVar3);
    _swift_release(puVar11);
    goto LAB_1008f7e6c;
  }
  _swift_beginAccess(lVar7 + 0x10,auStack_90,0,0);
  uVar9 = *(undefined8 *)(lVar7 + 0x10);
  uVar4 = *(undefined8 *)(lVar7 + 0x18);
  cVar14 = *(char *)(lVar7 + 0x20);
  if (cVar14 == '\x01') {
    uVar10 = *(ulong *)(param_2 + 0x28);
    lVar3 = *(long *)(param_2 + 0x30);
    _swift_getObjectType();
    pcVar5 = *(code **)(lVar3 + 0x10);
    uVar15 = 1;
    FUN_1008fde58(uVar9,uVar4,1);
    uVar8 = uVar10;
    lVar13 = lVar3;
    (*pcVar5)(uVar10,lVar3);
    if ((uVar8 & 1) == 0) {
      puVar11 = &DAT_100f13d78;
      _swift_allocObject(&DAT_100f13d78,0x20,7);
      *(long *)(puVar11 + 0x10) = param_2;
      *(undefined8 *)(puVar11 + 0x18) = uVar9;
      pcVar5 = *(code **)(lVar3 + 0x18);
      _swift_retain(param_2);
      FUN_1008fde6c(uVar9,uVar4,1);
      (*pcVar5)(thunk_FUN_1008fcb6c,puVar11,uVar10,lVar3);
      _swift_release(param_2);
      _swift_release(puVar11);
    }
    else {
      uVar12 = uVar9;
      thunk_FUN_10092b398(uVar9);
      FUN_1006486f8();
      FUN_100004550(uVar12,lVar13);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(uVar15);
    }
    cVar14 = '\x01';
LAB_1008f7e44:
    FUN_1008fde8c(uVar9,uVar4,cVar14);
  }
  else {
    if (cVar14 != -1) {
      FUN_1008fde58(uVar9,uVar4,cVar14);
      FUN_10090d0dc(uVar9,uVar4,cVar14,param_2);
      _swift_release(param_2);
      goto LAB_1008f7e44;
    }
    _swift_release(param_2);
    _swift_beginAccess(lVar7 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008fcb60,puVar6);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_bridgeObjectRelease(0);
LAB_1008f7e6c:
  FUN_1008fde8c(lVar1,uVar2,1);
  _swift_release(puVar6);
  _swift_release_n(lVar7,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x1008f7edc | FUN_1008f7edc */

void FUN_1008f7edc(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined1 auStack_98 [24];
  long local_80 [4];
  undefined8 uVar2;
  
  uVar2 = param_2;
  FUN_10000cbfc(param_2,local_80);
  iVar1 = (int)uVar2;
  _swift_dynamicCast();
  if (iVar1 == 0) goto LAB_1008f8200;
  lVar13 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(lVar13 + 0x38);
  uVar14 = *(undefined8 *)(lVar13 + 0x38);
  uVar16 = *(undefined8 *)(lVar13 + 0x30);
  uVar2 = uVar16;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar16);
  lVar11 = lVar12;
  FUN_100642338(uVar2);
  lVar13 = param_1;
  _swift_retain();
  FUN_100627f08();
  lVar3 = lVar13;
  _swift_getObjectType();
  lVar4 = 2;
  local_80[0] = lVar13;
  FUN_100622874(2,"NIOPosix/Bootstrap.swift",0x18,2,0x1c9,lVar3,*(undefined8 *)(lVar11 + 8));
  _swift_unknownObjectRelease(lVar13);
  puVar5 = &DAT_100f10948;
  _swift_allocObject(&DAT_100f10948,0x28,7);
  *(undefined8 *)(puVar5 + 0x18) = uVar14;
  *(undefined8 *)(puVar5 + 0x10) = uVar16;
  *(long *)(puVar5 + 0x20) = param_1;
  puVar6 = &DAT_100f10970;
  _swift_allocObject(&DAT_100f10970,0x28,7);
  *(long *)(puVar6 + 0x10) = lVar4;
  *(code **)(puVar6 + 0x18) = FUN_1008fa31c;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  uVar7 = *(ulong *)(lVar4 + 0x20);
  lVar13 = *(long *)(lVar4 + 0x28);
  _swift_getObjectType();
  pcVar15 = *(code **)(lVar13 + 0x10);
  _swift_unknownObjectRetain_n(uVar16,2);
  _swift_retain_n(param_1,2);
  _swift_retain_n(lVar4,2);
  _swift_retain_n(puVar5,2);
  uVar8 = uVar7;
  (*pcVar15)(uVar7,lVar13);
  if ((uVar8 & 1) == 0) {
    puVar9 = &DAT_100f10998;
    _swift_allocObject(&DAT_100f10998,0x28,7);
    *(long *)(puVar9 + 0x10) = lVar4;
    *(code **)(puVar9 + 0x18) = FUN_1008db354;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    pcVar15 = *(code **)(lVar13 + 0x18);
    _swift_retain(lVar4);
    _swift_retain(puVar6);
    (*pcVar15)(thunk_FUN_100653138,puVar9,uVar7,lVar13);
    _swift_unknownObjectRelease(uVar16);
    _swift_release(puVar9);
    _swift_release_n(puVar5,2);
    _swift_release(lVar4);
    _swift_release(puVar6);
  }
  else {
    _swift_beginAccess(lVar4 + 0x10,local_80,0,0);
    uVar14 = *(undefined8 *)(lVar4 + 0x10);
    cVar10 = *(char *)(lVar4 + 0x18);
    if (cVar10 == '\x01') {
      _swift_errorRetain(uVar14);
      FUN_100642338(uVar2,lVar12);
      _swift_retain(param_1);
      FUN_100626c9c(uVar14);
      _swift_release(param_1);
      cVar10 = '\x01';
LAB_1008f8198:
      FUN_100308538(uVar14,cVar10);
    }
    else {
      if (cVar10 != -1) goto LAB_1008f8198;
      _swift_beginAccess(lVar4 + 0x30,auStack_98,0x21,0);
      FUN_10064967c(FUN_1008db354,puVar6);
      _swift_endAccess(auStack_98);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_unknownObjectRelease(uVar16);
    _swift_release_n(puVar5,2);
    _swift_release(lVar4);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_unknownObjectRelease(uVar16);
  _swift_release(lVar4);
  _swift_release_n(param_1,2);
LAB_1008f8200:
  FUN_100626b98(param_2);
  return;
}



/* Address: 0x1008f822c | FUN_1008f822c */

undefined8
FUN_1008f822c(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 *param_6)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *local_d8 [3];
  undefined8 local_c0;
  undefined1 local_97;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar11 = *param_6;
  uVar3 = param_1 + 0x10;
  puVar7 = auStack_78;
  _swift_beginAccess(uVar3,puVar7,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,local_d8,1,0);
    uVar11 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_90,1,0);
      uVar11 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar8);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_6);
      _swift_unknownObjectRelease(param_4);
      _swift_release(param_3);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008f8700);
      (*pcVar9)();
    }
    lVar10 = *(long *)(param_3 + 0x20);
    FUN_100627f08();
    uVar4 = uVar3;
    _swift_getObjectType();
    (**(code **)(puVar7 + 0x60))();
    _swift_unknownObjectRelease(uVar3);
    if ((uVar4 & 1) == 0) {
      _swift_getObjectType(param_4);
      if (DAT_100fec600 != -1) {
        _swift_once(&DAT_100fec600,FUN_100901fbc);
      }
      lVar10 = DAT_101058180;
      FUN_10063dd74(DAT_101058180,param_4,PTR___type_metadata_for____100eae0c8 + 8,param_5);
    }
    else {
      local_97 = 2;
      local_d8[0] = param_6;
      local_c0 = uVar11;
      _swift_retain(param_6);
      FUN_100626ce0(local_d8);
      FUN_1005e70f4(local_d8);
      lVar1 = *(long *)(lVar10 + 0x30);
      _swift_getObjectType(lVar1);
      lVar10 = lVar1;
      _swift_unknownObjectRetain();
      FUN_10063dc68();
      _swift_unknownObjectRelease(lVar1);
    }
    uVar3 = *(ulong *)(lVar10 + 0x20);
    lVar1 = *(long *)(lVar10 + 0x28);
    uVar4 = uVar3;
    _swift_getObjectType();
    pcVar9 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar3);
    (*pcVar9)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar3);
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f10d30;
      _swift_allocObject(&DAT_100f10d30,0x28,7);
      *(code **)(puVar5 + 0x10) = thunk_FUN_1008fa3d4;
      *(long *)(puVar5 + 0x18) = param_2;
      *(long *)(puVar5 + 0x20) = lVar10;
      uVar3 = *(ulong *)(lVar10 + 0x20);
      lVar1 = *(long *)(lVar10 + 0x28);
      _swift_getObjectType();
      pcVar9 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar10,2);
      uVar4 = uVar3;
      (*pcVar9)(uVar3,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar6 = &DAT_100f10d58;
        _swift_allocObject(&DAT_100f10d58,0x28,7);
        *(long *)(puVar6 + 0x10) = lVar10;
        *(code **)(puVar6 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar6 + 0x20) = puVar5;
        pcVar9 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar10);
        _swift_retain(puVar5);
        (*pcVar9)(thunk_FUN_100653138,puVar6,uVar3,lVar1);
        _swift_release(puVar6);
        _swift_release_n(lVar10,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar5);
      }
      else {
        _swift_beginAccess(lVar10 + 0x10,local_d8,0,0);
        cVar2 = *(char *)(lVar10 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar10 + 0x30,auStack_90,0x21,0);
          FUN_10064967c(thunk_FUN_1008fa3dc,puVar5);
          _swift_endAccess(auStack_90);
        }
        else {
          uVar11 = *(undefined8 *)(lVar10 + 0x10);
          FUN_100308524(uVar11,cVar2);
          FUN_10092b43c(uVar11,cVar2,param_2);
          FUN_100308538(uVar11,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar10,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar5);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar5 = &DAT_100f10d80;
      _swift_allocObject(&DAT_100f10d80,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(long *)(puVar5 + 0x18) = lVar10;
      _swift_beginAccess(lVar10 + 0x10,local_d8,0,0);
      if (*(char *)(lVar10 + 0x18) != -1) {
        uVar11 = *(undefined8 *)(lVar10 + 0x10);
        FUN_100630334(uVar11,*(char *)(lVar10 + 0x18),FUN_100308524);
        _swift_retain(param_2);
        _swift_release(puVar5);
        return uVar11;
      }
      _swift_beginAccess(lVar10 + 0x30,auStack_90,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar10);
      FUN_10064967c(FUN_1008fa40c,puVar5);
      _swift_endAccess(auStack_90);
      _swift_release(puVar5);
      param_2 = lVar10;
    }
    _swift_release(param_2);
    uVar11 = 0;
  }
  return uVar11;
}



/* Address: 0x1008f8700 | FUN_1008f8700 */

undefined *
FUN_1008f8700(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100f10ce0;
  _swift_allocObject(&DAT_100f10ce0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f10d08;
  _swift_allocObject(&DAT_100f10d08,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1008fa3f4;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
    _swift_retain(param_2);
    _swift_unknownObjectRetain(param_3);
    _swift_retain(param_5);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(puVar2);
    _swift_retain(puVar1);
    _swift_retain(param_1);
    FUN_10064967c(FUN_1008fa400,puVar3);
    _swift_endAccess(auStack_80);
    param_1 = 0;
    puVar4 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    _swift_retain(param_2);
    _swift_unknownObjectRetain(param_3);
    _swift_retain(param_5);
    _swift_unknownObjectRetain(uVar5);
    _swift_retain(puVar2);
    _swift_retain(puVar1);
    _swift_retain(param_1);
    puVar4 = puVar2;
    FUN_1008f822c();
  }
  FUN_1006486f8(param_1,puVar4,param_2);
  FUN_100004550(param_1,puVar4);
  _swift_release(puVar1);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Address: 0x1008f890c | FUN_1008f890c */

void FUN_1008f890c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_58,0x21,0);
  FUN_100622d54(param_1,param_2,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1008f8988 | FUN_1008f8988 */

undefined8 FUN_1008f8988(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100febfa0;
  FUN_1000f7830(&DAT_100febfa0,&DAT_100c83848);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}


