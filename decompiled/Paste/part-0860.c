/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10095709c | FUN_10095709c */

/* WARNING: Removing unreachable block (ram,0x00010095736c) */
/* WARNING: Removing unreachable block (ram,0x0001009573a4) */
/* WARNING: Removing unreachable block (ram,0x000100957190) */

void FUN_10095709c(undefined8 param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
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
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = (undefined8 *)(unaff_x20 + 0x118);
  uVar9 = 0;
  _swift_beginAccess(puVar3,auStack_108,0,0);
  if (*(char *)(unaff_x20 + 0x132) == '\0' || *(char *)(unaff_x20 + 0x132) == '\x05') {
    if (param_2 == 0) goto LAB_100957400;
    if (DAT_100fec5f8 != -1) {
      _swift_once(&DAT_100fec5f8,FUN_100901f9c);
    }
    puVar5 = DAT_101058190;
    uVar10 = *(ulong *)(param_2 + 0x20);
    lVar12 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar10;
    lVar8 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar7 = &DAT_100f1b128;
      _swift_allocObject(&DAT_100f1b128,0x20,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(undefined **)(puVar7 + 0x18) = puVar5;
      pcVar11 = *(code **)(lVar12 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar5);
      (*pcVar11)(thunk_FUN_1008d678c,puVar7,uVar10,lVar12);
LAB_1009572f0:
      _swift_release(puVar7);
      goto LAB_100957400;
    }
    thunk_FUN_1005de8f4(puVar5);
    FUN_1006486f8();
  }
  else {
    lVar12 = *(long *)(unaff_x20 + 0x20);
    iVar1 = *(int *)(lVar12 + 0x10);
    if (-1 < iVar1) {
      local_e0 = CONCAT44(local_e0._4_4_,iVar1);
      pcVar11 = FUN_10095a98c;
      puVar3 = &local_f0;
      FUN_100667428(FUN_10095a98c,puVar3,param_1,PTR___type_metadata_for____100eae0c8 + 8);
      thunk_FUN_100937a78();
      if (*(char *)(unaff_x20 + 0x132) == '\x05') {
        if (DAT_100fec600 != -1) {
          _swift_once(&DAT_100fec600,FUN_100901fbc);
        }
        _swift_willThrow();
LAB_1009573b0:
        uVar10 = 0xf000000000000007;
      }
      else {
        uStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
        uStack_168 = 0;
        local_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        local_f0 = CONCAT44(local_f0._4_4_,0x80);
        uVar2 = *(uint *)(lVar12 + 0x10);
        uVar10 = (ulong)uVar2;
        if ((int)uVar2 < 0) goto LAB_1009573b0;
        FUN_10095dc2c(uVar10,&local_190,&local_f0);
        uStack_a8 = uStack_148;
        local_b0 = local_150;
        uStack_98 = uStack_138;
        uStack_a0 = uStack_140;
        uStack_88 = uStack_128;
        local_90 = local_130;
        uStack_78 = uStack_118;
        uStack_80 = uStack_120;
        uStack_e8 = uStack_188;
        local_f0 = local_190;
        uStack_d8 = uStack_178;
        local_e0 = uStack_180;
        uStack_c8 = uStack_168;
        local_d0 = local_170;
        uStack_b8 = uStack_158;
        uStack_c0 = uStack_160;
        FUN_1008d5380();
      }
      FUN_1005d84e8(puVar3);
      FUN_1005d84e8(uVar10);
      FUN_10095a9d8(uVar10,puVar3);
      FUN_1005d8534(uVar10);
      FUN_1005d8534(puVar3);
      FUN_1005d8534(uVar10);
      FUN_1005d8534(pcVar11);
      FUN_1005d8534(puVar3);
      FUN_10094f284(param_2);
      goto LAB_100957400;
    }
    FUN_1008d5300();
    puVar6 = &DAT_100ef11e8;
    uVar9 = 0;
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000001f;
    puVar3[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
    if (param_2 == 0) {
      _swift_errorRelease(puVar6);
      goto LAB_100957400;
    }
    uVar10 = *(ulong *)(param_2 + 0x20);
    lVar12 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar10;
    lVar8 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar7 = &DAT_100f1b150;
      _swift_allocObject(&DAT_100f1b150,0x20,7);
      *(long *)(puVar7 + 0x10) = param_2;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      pcVar11 = *(code **)(lVar12 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar6);
      (*pcVar11)(thunk_FUN_1008d678c,puVar7,uVar10,lVar12);
      _swift_errorRelease(puVar6);
      goto LAB_1009572f0;
    }
    puVar5 = puVar6;
    thunk_FUN_1005de8f4(puVar6);
    FUN_1006486f8();
    _swift_errorRelease(puVar6);
  }
  FUN_100004550(puVar5,lVar8);
  _swift_bridgeObjectRelease(uVar9);
LAB_100957400:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100957478 | FUN_100957478 */

void FUN_100957478(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  _swift_retain();
  FUN_10094ab4c(uVar1,param_2,param_1);
  return;
}



/* Address: 0x1009574c0 | FUN_1009574c0 */

undefined1  [16] FUN_1009574c0(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  Optional OVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
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
  
  Swift::_StringGuts::grow(0x48,param_2);
  SVar11.bridgeObject = (void *)0x8000000100db5550;
  SVar11.str = (char *)0xd000000000000010;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x48),SVar15);
  pbVar5 = (byte *)0x657669746361202c;
  SVar8.bridgeObject = (void *)0xeb00000000203d20;
  SVar8.str = (char *)0x657669746361202c;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar8,SVar16);
  (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x88))();
  bVar3 = (*pbVar5 & 1) != 0;
  pcVar1 = (char *)0x65736c6166;
  if (bVar3) {
    pcVar1 = (char *)0x65757274;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  SVar9.bridgeObject = puVar2;
  SVar9.str = pcVar1;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar9,SVar17);
  _swift_bridgeObjectRelease(puVar2);
  uVar6 = 0xd000000000000011;
  uVar7 = 0x8000000100db4ca0;
  SVar10.bridgeObject = (void *)0x8000000100db4ca0;
  SVar10.str = (char *)0xd000000000000011;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar10,SVar18);
  thunk_FUN_100937a78();
  FUN_1005d8534(uVar7);
  OVar4.value = 8;
  FUN_1000f7830(&DAT_100fed508,&DAT_100c860e0);
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar11,SVar19);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  uVar6 = 0x8000000100db4cc0;
  SVar12.bridgeObject = (void *)0x8000000100db4cc0;
  SVar12.str = (char *)0xd000000000000012;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar12,SVar20);
  thunk_FUN_100937a78();
  FUN_1005d8534();
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar11,SVar21);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x7d20;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar13,SVar22);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1009576b4 | FUN_1009576b4 */

void FUN_1009576b4(void)

{
  FUN_1009574c0();
  return;
}



/* Address: 0x1009576d4 | FUN_1009576d4 */

undefined1  [16] FUN_1009576d4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  Optional OVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
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
  
  Swift::_StringGuts::grow(0x4e,param_2);
  SVar11.bridgeObject = (void *)0x8000000100db5570;
  SVar11.str = (char *)0xd000000000000016;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x48),SVar15);
  pbVar5 = (byte *)0x657669746361202c;
  SVar8.bridgeObject = (void *)0xeb00000000203d20;
  SVar8.str = (char *)0x657669746361202c;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar8,SVar16);
  (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x88))();
  bVar3 = (*pbVar5 & 1) != 0;
  pcVar1 = (char *)0x65736c6166;
  if (bVar3) {
    pcVar1 = (char *)0x65757274;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  SVar9.bridgeObject = puVar2;
  SVar9.str = pcVar1;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar9,SVar17);
  _swift_bridgeObjectRelease(puVar2);
  uVar7 = 0x8000000100db4ca0;
  uVar6 = 0xd000000000000011;
  SVar10.bridgeObject = (void *)0x8000000100db4ca0;
  SVar10.str = (char *)0xd000000000000011;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar10,SVar18);
  thunk_FUN_100937a78();
  FUN_1005d8534(uVar7);
  OVar4.value = 8;
  FUN_1000f7830(&DAT_100fed508,&DAT_100c860e0);
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar11,SVar19);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  uVar6 = 0x8000000100db4cc0;
  SVar12.bridgeObject = (void *)0x8000000100db4cc0;
  SVar12.str = (char *)0xd000000000000012;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar12,SVar20);
  thunk_FUN_100937a78();
  FUN_1005d8534();
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar11,SVar21);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x7d20;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar13,SVar22);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1009578c8 | FUN_1009578c8 */

void FUN_1009578c8(void)

{
  FUN_1009576d4();
  return;
}



/* Address: 0x1009578e8 | FUN_1009578e8 */

undefined1  [16] FUN_1009578e8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  Optional OVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
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
  
  Swift::_StringGuts::grow(0x4a,param_2);
  SVar11.bridgeObject = (void *)0x8000000100db5590;
  SVar11.str = (char *)0xd000000000000012;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x48),SVar15);
  pbVar5 = (byte *)0x657669746361202c;
  SVar8.bridgeObject = (void *)0xeb00000000203d20;
  SVar8.str = (char *)0x657669746361202c;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar8,SVar16);
  (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x88))();
  bVar3 = (*pbVar5 & 1) != 0;
  pcVar1 = (char *)0x65736c6166;
  if (bVar3) {
    pcVar1 = (char *)0x65757274;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  SVar9.bridgeObject = puVar2;
  SVar9.str = pcVar1;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar9,SVar17);
  _swift_bridgeObjectRelease(puVar2);
  uVar6 = 0xd000000000000011;
  uVar7 = 0x8000000100db4ca0;
  SVar10.bridgeObject = (void *)0x8000000100db4ca0;
  SVar10.str = (char *)0xd000000000000011;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar10,SVar18);
  thunk_FUN_100937a78();
  FUN_1005d8534(uVar7);
  OVar4.value = 8;
  FUN_1000f7830(&DAT_100fed508,&DAT_100c860e0);
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar11,SVar19);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  uVar6 = 0x8000000100db4cc0;
  SVar12.bridgeObject = (void *)0x8000000100db4cc0;
  SVar12.str = (char *)0xd000000000000012;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar12,SVar20);
  thunk_FUN_100937a78();
  FUN_1005d8534();
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar11,SVar21);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x7d20;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar13,SVar22);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x100957ad8 | FUN_100957ad8 */

void FUN_100957ad8(void)

{
  FUN_1009578e8();
  return;
}



/* Address: 0x100957af8 | FUN_100957af8 */

/* WARNING: Removing unreachable block (ram,0x000100958194) */
/* WARNING: Removing unreachable block (ram,0x000100958220) */

void FUN_100957af8(byte *param_1,byte *param_2,long param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  uint uVar16;
  long unaff_x20;
  code *pcVar17;
  code *pcVar18;
  undefined8 local_70;
  long lStack_68;
  undefined4 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pbVar2 = param_1;
  pbVar9 = param_2;
  lVar14 = param_3;
  (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x88))();
  if ((*pbVar2 & 1) == 0) {
    if (param_3 != 0) {
      if (DAT_100fec5f8 != -1) {
        _swift_once(&DAT_100fec5f8,FUN_100901f9c);
      }
      uVar11 = DAT_101058190;
      uVar5 = *(ulong *)(param_3 + 0x20);
      lVar12 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar5;
      lVar13 = lVar12;
      (**(code **)(lVar12 + 0x10))();
      if ((uVar6 & 1) != 0) {
LAB_100957c34:
        thunk_FUN_1005de8f4(uVar11);
        FUN_1006486f8();
LAB_100957c50:
        FUN_100004550(uVar11,lVar13);
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
          _swift_bridgeObjectRelease(lVar14);
          return;
        }
        goto LAB_1009584fc;
      }
      puVar4 = &DAT_100f1afc0;
      _swift_allocObject(&DAT_100f1afc0,0x20,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = uVar11;
      pcVar17 = *(code **)(lVar12 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar11);
      pcVar18 = FUN_1008d678c;
LAB_100957e48:
      (*pcVar17)(pcVar18,puVar4,uVar5,lVar12);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
LAB_100957e74:
        _swift_release(puVar4);
        return;
      }
      goto LAB_1009584fc;
    }
  }
  else if ((param_2 == (byte *)0x0) || (pbVar2 = param_2, FUN_100658030(), ((ulong)pbVar2 & 1) != 0)
          ) {
    thunk_FUN_100937a78();
    FUN_1005d8534(pbVar9);
    if ((((ulong)pbVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      if (*(int *)(&DAT_100c8611c + ((ulong)pbVar2 >> 0x3e) * 4) ==
          *(int *)(&DAT_100c8611c + ((ulong)param_1 >> 0x3e) * 4)) {
        pbVar8 = param_1;
        FUN_1006684c0();
        if (((ulong)pbVar8 & 1) != 0) {
          uVar16 = (uint)((ulong)param_1 >> 0x3e);
          if (param_2 == (byte *)0x0) {
            pbVar8 = (byte *)0xf000000000000007;
            if (uVar16 != 0) goto LAB_100957cd0;
LAB_100958050:
            if ((((ulong)pbVar8 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
              FUN_100666b30();
              local_70 = (byte *)((ulong)param_1 >> 0x20);
              uVar16 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
              puVar3 = (undefined8 *)(ulong)uVar16;
              if (-1 < (int)uVar16) {
                uVar11 = 0;
                uVar15 = 8;
LAB_10095808c:
                FUN_10095e2f8(puVar3,uVar11,(param_4 & 0xff) + 0xc,&local_70,uVar15);
LAB_100958444:
                if (param_3 != 0) {
                  FUN_10090d0b8(0,0,param_3);
                }
                FUN_1005d8534(pbVar2);
                goto LAB_100958460;
              }
LAB_100958258:
              FUN_1008d5300();
              puVar4 = &DAT_100ef11e8;
              lVar14 = 0;
              _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
              *puVar3 = 0xd00000000000001f;
              puVar3[1] = 0x8000000100db4780;
              *(undefined4 *)(puVar3 + 2) = 9;
              _swift_willThrow();
            }
            else {
              if ((ulong)pbVar8 >> 0x3e != 0) goto LAB_100958228;
              pbVar9 = param_1;
              FUN_100666b30();
              pbVar10 = pbVar8;
              FUN_100666b30();
              local_70 = (byte *)CONCAT44((int)((ulong)pbVar10 >> 0x20),(int)((ulong)pbVar9 >> 0x20)
                                         );
              iVar1 = *(int *)(*(long *)(unaff_x20 + 0x20) + 0x10);
              if (-1 < iVar1) {
                _swift_retain((ulong)param_1 & 0x3fffffffffffffff);
                FUN_10095e2f8(iVar1,0,(param_4 & 0xff) + 0xc,&local_70,8);
                FUN_1005d8534(pbVar8);
LAB_10095843c:
                _swift_release((ulong)param_1 & 0x3fffffffffffffff);
                goto LAB_100958444;
              }
              FUN_1008d5300();
              puVar4 = &DAT_100ef11e8;
              lVar14 = 0;
              _swift_allocError(&DAT_100ef11e8,pbVar10,0,0);
              pbVar10[0] = 0x1f;
              pbVar10[1] = 0;
              pbVar10[2] = 0;
              pbVar10[3] = 0;
              pbVar10[4] = 0;
              pbVar10[5] = 0;
              pbVar10[6] = 0;
              pbVar10[7] = 0xd0;
              pbVar10[8] = 0x80;
              pbVar10[9] = 0x47;
              pbVar10[10] = 0xdb;
              pbVar10[0xb] = 0;
              pbVar10[0xc] = 1;
              pbVar10[0xd] = 0;
              pbVar10[0xe] = 0;
              pbVar10[0xf] = 0x80;
              pbVar10[0x10] = 9;
              pbVar10[0x11] = 0;
              pbVar10[0x12] = 0;
              pbVar10[0x13] = 0;
              _swift_willThrow();
              FUN_1005d8534(pbVar8);
            }
          }
          else {
            pbVar8 = param_2;
            FUN_1006578b0();
            if (uVar16 == 0) goto LAB_100958050;
LAB_100957cd0:
            if (uVar16 != 1) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100958504);
              (*pcVar18)();
            }
            if ((((ulong)pbVar8 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
              FUN_100666b68((ulong)param_1 & 0x3fffffffffffffff);
              local_60 = 0;
              uVar16 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
              puVar3 = (undefined8 *)(ulong)uVar16;
              local_70 = pbVar9;
              lStack_68 = lVar14;
              if ((int)uVar16 < 0) goto LAB_100958258;
              uVar11 = 0x29;
              uVar15 = 0x14;
              goto LAB_10095808c;
            }
            if ((ulong)pbVar8 >> 0x3e == 1) {
              _swift_retain((ulong)param_1 & 0x3fffffffffffffff);
              FUN_1005d8534(pbVar8);
              FUN_100666b68((ulong)param_1 & 0x3fffffffffffffff);
              if (param_2 == (byte *)0x0) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100958508);
                (*pcVar18)();
              }
              FUN_10065813c();
              if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1009584f8);
                (*pcVar18)();
              }
              if ((ulong)param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1009584fc);
                (*pcVar18)();
              }
              local_60 = SUB84(param_2,0);
              uVar16 = *(uint *)(*(long *)(unaff_x20 + 0x20) + 0x10);
              puVar3 = (undefined8 *)(ulong)uVar16;
              local_70 = pbVar9;
              lStack_68 = lVar14;
              if (-1 < (int)uVar16) {
                FUN_10095e2f8(puVar3,0x29,(param_4 & 0xff) + 0xc,&local_70,0x14);
                goto LAB_10095843c;
              }
              FUN_1008d5300();
              puVar4 = &DAT_100ef11e8;
              lVar14 = 0;
              _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
              *puVar3 = 0xd00000000000001f;
              puVar3[1] = 0x8000000100db4780;
              *(undefined4 *)(puVar3 + 2) = 9;
              _swift_willThrow();
              _swift_release((ulong)param_1 & 0x3fffffffffffffff);
              goto LAB_100958354;
            }
LAB_100958228:
            FUN_1005d8534();
            if (DAT_100fec5d0 != -1) {
              _swift_once(&DAT_100fec5d0,FUN_100901f5c);
            }
            puVar4 = DAT_1010581a0;
            _swift_willThrow();
            _swift_errorRetain(puVar4);
          }
LAB_100958354:
          if (param_3 == 0) {
            FUN_1005d8534(pbVar2);
            _swift_errorRelease(puVar4);
          }
          else {
            uVar5 = *(ulong *)(param_3 + 0x20);
            lVar12 = *(long *)(param_3 + 0x28);
            _swift_getObjectType();
            uVar6 = uVar5;
            lVar13 = lVar12;
            (**(code **)(lVar12 + 0x10))();
            if ((uVar6 & 1) == 0) {
              puVar7 = &DAT_100f1b060;
              _swift_allocObject(&DAT_100f1b060,0x20,7);
              *(long *)(puVar7 + 0x10) = param_3;
              *(undefined **)(puVar7 + 0x18) = puVar4;
              pcVar18 = *(code **)(lVar12 + 0x18);
              _swift_retain(param_3);
              _swift_errorRetain(puVar4);
              (*pcVar18)(thunk_FUN_1008d678c,puVar7,uVar5,lVar12);
              FUN_1005d8534(pbVar2);
              _swift_errorRelease(puVar4);
              _swift_release(puVar7);
            }
            else {
              puVar7 = puVar4;
              thunk_FUN_1005de8f4(puVar4);
              FUN_1006486f8();
              FUN_1005d8534(pbVar2);
              _swift_errorRelease(puVar4);
              FUN_100004550(puVar7,lVar13);
              _swift_bridgeObjectRelease(lVar14);
            }
          }
          goto LAB_100958460;
        }
        if (param_3 != 0) {
          FUN_1008db6c4();
          puVar4 = &DAT_100eeb710;
          uVar11 = 0;
          _swift_allocError(&DAT_100eeb710,pbVar8,0,0);
          *(byte **)pbVar8 = param_1;
          pbVar8[8] = 1;
          uVar5 = *(ulong *)(param_3 + 0x20);
          lVar14 = *(long *)(param_3 + 0x28);
          _swift_getObjectType();
          pcVar18 = *(code **)(lVar14 + 0x10);
          _swift_retain((ulong)param_1 & 0x3fffffffffffffff);
          uVar6 = uVar5;
          lVar12 = lVar14;
          (*pcVar18)(uVar5,lVar14);
          if ((uVar6 & 1) == 0) {
            puVar7 = &DAT_100f1b038;
            _swift_allocObject(&DAT_100f1b038,0x20,7);
            *(long *)(puVar7 + 0x10) = param_3;
            *(undefined **)(puVar7 + 0x18) = puVar4;
            pcVar18 = *(code **)(lVar14 + 0x18);
            _swift_retain(param_3);
            _swift_errorRetain(puVar4);
            (*pcVar18)(thunk_FUN_1008d678c,puVar7,uVar5,lVar14);
            FUN_1005d8534(pbVar2);
            _swift_release(puVar7);
          }
          else {
            puVar7 = puVar4;
            thunk_FUN_1005de8f4(puVar4);
            FUN_1006486f8();
            FUN_1005d8534(pbVar2);
            FUN_100004550(puVar7,lVar12);
            _swift_bridgeObjectRelease(uVar11);
          }
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) goto LAB_100958114;
          goto LAB_1009584fc;
        }
      }
      else if (param_3 != 0) {
        if (DAT_100fec5d8 != -1) {
          _swift_once(&DAT_100fec5d8,FUN_100901f6c);
        }
        uVar11 = DAT_1010581a8;
        uVar5 = *(ulong *)(param_3 + 0x20);
        lVar12 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar6 = uVar5;
        lVar13 = lVar12;
        (**(code **)(lVar12 + 0x10))();
        if ((uVar6 & 1) == 0) {
          puVar4 = &DAT_100f1b010;
          _swift_allocObject(&DAT_100f1b010,0x20,7);
          *(long *)(puVar4 + 0x10) = param_3;
          *(undefined8 *)(puVar4 + 0x18) = uVar11;
          pcVar18 = *(code **)(lVar12 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(uVar11);
          (*pcVar18)(thunk_FUN_1008d678c,puVar4,uVar5,lVar12);
          FUN_1005d8534(pbVar2);
          if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) goto LAB_1009584fc;
          goto LAB_100957e74;
        }
        thunk_FUN_1005de8f4(uVar11);
        FUN_1006486f8();
        FUN_1005d8534(pbVar2);
        goto LAB_100957c50;
      }
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
        FUN_1005d8534(pbVar2);
        return;
      }
      goto LAB_1009584fc;
    }
    if (param_3 != 0) {
      if (DAT_100fec5e0 != -1) {
        _swift_once(&DAT_100fec5e0,FUN_100901fec);
      }
      uVar11 = DAT_1010581b0;
      uVar5 = *(ulong *)(param_3 + 0x20);
      lVar12 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar5;
      lVar13 = lVar12;
      (**(code **)(lVar12 + 0x10))();
      if ((uVar6 & 1) != 0) goto LAB_100957c34;
      puVar4 = &DAT_100f1afe8;
      _swift_allocObject(&DAT_100f1afe8,0x20,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(undefined8 *)(puVar4 + 0x18) = uVar11;
      pcVar17 = *(code **)(lVar12 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar11);
      pcVar18 = thunk_FUN_1008d678c;
      goto LAB_100957e48;
    }
  }
  else if (param_3 != 0) {
    FUN_10095a880();
    puVar4 = &DAT_100ef1920;
    uVar11 = 0;
    _swift_allocError(&DAT_100ef1920,pbVar2,0,0);
    *(byte **)pbVar2 = param_2;
    uVar5 = *(ulong *)(param_3 + 0x20);
    lVar14 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    pcVar18 = *(code **)(lVar14 + 0x10);
    _swift_retain_n(param_2,2);
    uVar6 = uVar5;
    lVar12 = lVar14;
    (*pcVar18)(uVar5,lVar14);
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f1b088;
      _swift_allocObject(&DAT_100f1b088,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      pcVar18 = *(code **)(lVar14 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar4);
      (*pcVar18)(thunk_FUN_1008d678c,puVar7,uVar5,lVar14);
      _swift_release(puVar7);
      _swift_release(param_2);
    }
    else {
      puVar7 = puVar4;
      thunk_FUN_1005de8f4(puVar4);
      FUN_1006486f8();
      _swift_release(param_2);
      FUN_100004550(puVar7,lVar12);
      _swift_bridgeObjectRelease(uVar11);
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
LAB_100958114:
      _swift_errorRelease(puVar4);
      return;
    }
    goto LAB_1009584fc;
  }
LAB_100958460:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
LAB_1009584fc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100958508 | FUN_100958508 */

/* WARNING: Removing unreachable block (ram,0x0001009585e0) */

void FUN_100958508(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  long unaff_x20;
  undefined8 local_98;
  long lStack_90;
  undefined1 local_70;
  undefined1 local_58;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar1 != extraout_x8) {
    _swift_allocObject(param_5,0x30,7);
    *(long *)(param_5 + 0x10) = unaff_x20;
    *(ulong *)(param_5 + 0x18) = param_1;
    *(long *)(param_5 + 0x20) = param_2;
    *(undefined8 *)(param_5 + 0x28) = param_3;
    local_70 = 0;
    local_58 = 1;
    local_98 = param_6;
    lStack_90 = param_5;
    _swift_retain(param_3);
    _swift_retain(param_5);
    _swift_retain(param_2);
    _swift_retain();
    _swift_retain(param_1 & 0x3fffffffffffffff);
    FUN_10093efc4(&local_98);
    _swift_release(param_5);
    FUN_1008fa458(&local_98);
    return;
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    _swift_retain(param_2);
    FUN_100658240();
  }
  FUN_100957af8(param_1,param_2,param_3);
  _swift_release(param_2);
  return;
}



/* Address: 0x100958648 | FUN_100958648 */

void FUN_100958648(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 != 0) {
    _swift_retain(param_3);
    FUN_100658240();
  }
  FUN_100957af8(param_2,param_3,param_4,param_5);
  _swift_release(param_3);
  return;
}



/* Address: 0x1009586b4 | FUN_1009586b4 */

/* WARNING: Removing unreachable block (ram,0x00010095878c) */

void FUN_1009586b4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  long unaff_x20;
  undefined8 local_98;
  long lStack_90;
  undefined1 local_70;
  undefined1 local_58;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar1 != extraout_x8) {
    _swift_allocObject(param_5,0x30,7);
    *(long *)(param_5 + 0x10) = unaff_x20;
    *(ulong *)(param_5 + 0x18) = param_1;
    *(undefined8 *)(param_5 + 0x20) = param_2;
    *(undefined8 *)(param_5 + 0x28) = param_3;
    local_70 = 0;
    local_58 = 1;
    local_98 = param_6;
    lStack_90 = param_5;
    _swift_retain(param_3);
    _swift_retain(param_5);
    _swift_retain();
    _swift_retain(param_1 & 0x3fffffffffffffff);
    _swift_retain(param_2);
    FUN_10093efc4(&local_98);
    _swift_release(param_5);
    FUN_1008fa458(&local_98);
    return;
  }
  FUN_100957af8(param_1);
  return;
}



/* Address: 0x1009587c0 | FUN_1009587c0 */

void FUN_1009587c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1009586b4(param_1,0,param_2,0,&DAT_100f1b0d8,FUN_10095a8e0);
  return;
}



/* Address: 0x1009587f0 | FUN_1009587f0 */

void FUN_1009587f0(void)

{
  FUN_100958508();
  return;
}



/* Address: 0x100958818 | FUN_100958818 */

void FUN_100958818(void)

{
  FUN_1009586b4();
  return;
}



/* Address: 0x100958840 | FUN_100958840 */

void FUN_100958840(undefined8 param_1,undefined8 param_2)

{
  FUN_1009586b4(param_1,0,param_2,1,&DAT_100f1af98,FUN_1009588c4);
  return;
}



/* Address: 0x100958870 | FUN_100958870 */

void FUN_100958870(void)

{
  FUN_100958508();
  return;
}



/* Address: 0x100958898 | FUN_100958898 */

void FUN_100958898(void)

{
  FUN_1009586b4();
  return;
}



/* Address: 0x1009588c0 | thunk_FUN_10095a90c */

void thunk_FUN_10095a90c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009588c4 | FUN_1009588c4 */

void FUN_1009588c4(void)

{
  long unaff_x20;
  
  FUN_100957af8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),1);
  return;
}



/* Address: 0x1009588f0 | FUN_1009588f0 */

void FUN_1009588f0(ulong *param_1,ulong *param_2,long param_3,long param_4,uint *param_5,
                  long *param_6)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  uint uVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong *puVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long unaff_x21;
  code *pcVar21;
  long local_f8;
  uint local_f0;
  long *local_e8;
  uint local_e0;
  long local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  long local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar6 = param_2[9];
  uVar5 = param_2[10];
  FUN_100004640(param_2 + 6,uVar6);
  pcVar21 = *(code **)(uVar5 + 0x18);
  _swift_retain(param_3);
  (*pcVar21)();
  uVar4 = *param_2;
  if (((uint)uVar5 & 0xff) == 1) {
    if ((uVar4 == 0) || ((param_2[0xb] & 1) != 0)) {
LAB_10095916c:
      _swift_release_n(param_3,2);
      *(undefined1 *)(param_1 + 4) = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      goto LAB_100959184;
    }
    uVar5 = *param_2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = *param_2;
    uVar6 = uVar4;
    if ((uVar5 & 1) == 0) {
      _swift_beginAccess(uVar4 + 0x10,auStack_88,0,0);
      uVar6 = (ulong)*(uint *)(uVar4 + 0x10);
      FUN_10061204c();
      _swift_release(uVar4);
      *param_2 = uVar6;
    }
    _swift_beginAccess(uVar6 + 0x10,auStack_a0,0,0);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(uVar6 + 0x10);
    *(undefined2 *)((long)param_2 + 0x14) = 0;
    *(undefined1 *)((long)param_2 + 0x16) = 0;
    param_2[1] = 0;
    if (*param_2 == 0) {
      _swift_release(param_3);
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10095922c);
      (*pcVar21)();
    }
    FUN_100612cb0();
    uVar5 = *param_2;
    uVar6 = param_2[2];
    uVar3 = *(undefined2 *)((long)param_2 + 0x14);
    uVar9 = *(undefined1 *)((long)param_2 + 0x16);
    _swift_beginAccess(uVar5 + 0x18,auStack_b8,0,0);
    uVar19 = (uint)CONCAT21(uVar3,uVar9);
    lVar14 = *(long *)(uVar5 + 0x18) + (ulong)uVar19;
    uVar1 = *(uint *)((long)param_2 + 0xc);
    uVar5 = (ulong)uVar1;
    lVar20 = lVar14 + (ulong)((int)uVar6 - uVar19);
    FUN_10095a0a8();
    if (lVar20 == 0) {
      local_c8 = 0;
      lStack_c0 = 0;
      lVar14 = *(long *)(param_3 + 0x20);
    }
    else {
      lStack_c0 = lVar14 - uVar5;
      lVar14 = *(long *)(param_3 + 0x20);
      local_c8 = lVar20 + uVar5;
    }
    uVar19 = *param_5;
    local_e8 = &local_c8;
    local_e0 = 1;
    local_d8 = *param_6;
    uVar6 = 0;
    local_f0 = uVar19;
    if ((local_d8 != 0) && (uVar6 = param_6[1] - local_d8, uVar6 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591f0);
      local_f8 = param_4;
      (*pcVar21)();
    }
    uStack_d0 = (undefined4)uVar6;
    uStack_cc = 0;
    puVar8 = (undefined8 *)(ulong)*(uint *)(lVar14 + 0x10);
    if ((int)*(uint *)(lVar14 + 0x10) < 0) {
      local_f8 = param_4;
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar8,0,0);
      *puVar8 = 0xd00000000000001f;
      puVar8[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar8 + 2) = 9;
      _swift_willThrow();
      *param_5 = uVar19;
    }
    else {
      plVar11 = &local_f8;
      local_f8 = param_4;
      FUN_10095df60(puVar8,plVar11,0);
      uVar9 = SUB81(plVar11,0);
      if (unaff_x21 == 0) {
        if (((uint)plVar11 & 0xff) == 1) {
          param_6[2] = local_f8;
          param_6[3] = (ulong)local_f0;
          param_6[4] = (long)local_e8;
          param_6[5] = (ulong)local_e0;
          param_6[7] = CONCAT44(uStack_cc,uStack_d0);
          param_6[6] = local_d8;
          *(undefined1 *)(param_6 + 8) = 0;
        }
        *param_5 = local_f0;
        if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100959204);
          (*pcVar21)();
        }
        if ((ulong)puVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100959208);
          (*pcVar21)();
        }
        if (CARRY4(uVar1,(uint)puVar8)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x10095920c);
          (*pcVar21)();
        }
        *(uint *)((long)param_2 + 0xc) = uVar1 + (uint)puVar8;
        uVar5 = *param_2;
        if (uVar5 == 0) {
          _swift_release(param_3);
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100959244);
          (*pcVar21)();
        }
        uVar2 = *(undefined1 *)((long)param_2 + 0x16);
        uVar3 = *(undefined2 *)((long)param_2 + 0x14);
        uVar6 = param_2[2];
        uVar4 = param_2[1];
        *param_1 = uVar5;
        *(int *)(param_1 + 1) = (int)uVar4;
        *(int *)((long)param_1 + 0xc) = (int)(uVar4 >> 0x20);
        *(int *)(param_1 + 2) = (int)uVar6;
        *(undefined2 *)((long)param_1 + 0x14) = uVar3;
        *(undefined1 *)((long)param_1 + 0x16) = uVar2;
        goto LAB_10095914c;
      }
      *param_5 = local_f0;
    }
LAB_10095915c:
    uVar12 = 2;
  }
  else {
    if ((uVar4 == 0) || (_swift_isUniquelyReferenced_nonNull_native(), (uVar4 & 1) == 0)) {
      uVar5 = param_2[3];
      uVar4 = param_2[4];
      uVar18 = *(ulong *)(uVar5 + 0x10);
      if ((long)uVar18 < (long)uVar4) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591d0);
        (*pcVar21)();
      }
      uVar15 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar15 & 1) == 0) {
        FUN_1008dd920();
      }
      lVar14 = uVar4 * 0x18;
      uVar15 = uVar4;
      do {
        if (uVar18 == uVar15) {
          if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591e4);
            (*pcVar21)();
          }
          lVar14 = 0;
          uVar15 = 0;
          goto LAB_100958b68;
        }
        if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591c4);
          (*pcVar21)();
        }
        if (*(ulong *)(uVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591c8);
          (*pcVar21)();
        }
        uVar7 = *(ulong *)(uVar5 + lVar14 + 0x20);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar14 = lVar14 + 0x18;
        uVar15 = uVar15 + 1;
      } while ((uVar7 & 1) == 0);
      if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591e8);
        (*pcVar21)();
      }
      lVar20 = uVar5 + lVar14;
      iVar16 = (int)*(undefined8 *)(lVar20 + 8);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = *(ulong *)(lVar20 + 8);
      if (iVar16 == 0) {
        FUN_10061204c();
        _swift_release(uVar4);
        *(ulong *)(lVar20 + 8) = uVar6;
        uVar4 = uVar6;
      }
      else {
        _swift_beginAccess(uVar4 + 0x10,auStack_b8,0,0);
        if (*(uint *)(uVar4 + 0x10) < (uint)uVar6) {
          FUN_10061217c(uVar6);
        }
      }
      _swift_beginAccess(uVar4 + 0x10,auStack_88,0,0);
      lVar14 = uVar5 + lVar14;
      *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(uVar4 + 0x10);
      *(undefined2 *)(lVar14 + 0x1c) = 0;
      *(undefined1 *)(lVar14 + 0x1e) = 0;
      *(undefined8 *)(lVar14 + 0x10) = 0;
      FUN_100612cb0();
      lVar20 = *(long *)(lVar20 + 8);
      iVar16 = *(int *)(lVar14 + 0x18);
      uVar3 = *(undefined2 *)(lVar14 + 0x1c);
      uVar9 = *(undefined1 *)(lVar14 + 0x1e);
      _swift_beginAccess(lVar20 + 0x18,auStack_a0,0,0);
      uVar19 = (uint)CONCAT21(uVar3,uVar9);
      lVar20 = *(long *)(lVar20 + 0x18) + (ulong)uVar19;
      uVar1 = *(uint *)(lVar14 + 0x14);
      uVar6 = (ulong)uVar1;
      lVar13 = lVar20 + (ulong)(iVar16 - uVar19);
      FUN_10095a0a8();
      if (lVar13 == 0) {
        local_c8 = 0;
        lStack_c0 = 0;
        lVar20 = *(long *)(param_3 + 0x20);
      }
      else {
        lStack_c0 = lVar20 - uVar6;
        lVar20 = *(long *)(param_3 + 0x20);
        local_c8 = lVar13 + uVar6;
      }
      uVar19 = *param_5;
      local_e8 = &local_c8;
      local_e0 = 1;
      local_d8 = *param_6;
      uVar6 = 0;
      local_f0 = uVar19;
      if ((local_d8 != 0) && (uVar6 = param_6[1] - local_d8, uVar6 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591ec);
        local_f8 = param_4;
        (*pcVar21)();
      }
      uStack_d0 = (undefined4)uVar6;
      uStack_cc = 0;
      puVar8 = (undefined8 *)(ulong)*(uint *)(lVar20 + 0x10);
      if (-1 < (int)*(uint *)(lVar20 + 0x10)) {
        plVar11 = &local_f8;
        local_f8 = param_4;
        FUN_10095df60(puVar8,plVar11,0);
        uVar10 = (uint)plVar11;
        uVar19 = local_f0;
        if (unaff_x21 == 0) {
          if ((uVar10 & 0xff) == 1) {
            param_6[2] = local_f8;
            param_6[3] = (ulong)local_f0;
            param_6[4] = (long)local_e8;
            param_6[5] = (ulong)local_e0;
            param_6[7] = CONCAT44(uStack_cc,uStack_d0);
            param_6[6] = local_d8;
            *(undefined1 *)(param_6 + 8) = 0;
          }
          *param_5 = local_f0;
          if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591fc);
            (*pcVar21)();
          }
          if ((ulong)puVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100959200);
            (*pcVar21)();
          }
          iVar16 = uVar1 + (uint)puVar8;
          if (CARRY4(uVar1,(uint)puVar8)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100958d60);
            (*pcVar21)();
          }
          goto LAB_1009590ec;
        }
        goto LAB_100959088;
      }
      goto LAB_10095903c;
    }
    _swift_retain(param_3);
    puVar17 = param_2;
    FUN_10095aa7c(param_2,uVar6,param_3,param_4,param_5,param_6);
    if (unaff_x21 == 0) {
      _swift_release(param_3);
      uVar5 = *param_2;
      if (uVar5 == 0) {
        _swift_release(param_3);
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100959238);
        (*pcVar21)();
      }
      uVar9 = *(undefined1 *)((long)param_2 + 0x16);
      uVar3 = *(undefined2 *)((long)param_2 + 0x14);
      uVar4 = param_2[2];
      uVar18 = param_2[1];
      *param_1 = uVar5;
      *(int *)(param_1 + 1) = (int)uVar18;
      *(int *)((long)param_1 + 0xc) = (int)(uVar18 >> 0x20);
      *(int *)(param_1 + 2) = (int)uVar4;
      *(undefined2 *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)((long)param_1 + 0x16) = uVar9;
      param_1[3] = (ulong)puVar17;
      *(char *)(param_1 + 4) = (char)uVar6;
LAB_100959158:
      _swift_retain(uVar5);
      goto LAB_10095915c;
    }
    uVar12 = 3;
  }
  _swift_release_n(param_3,uVar12);
LAB_100959184:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
  while( true ) {
    if (*(ulong *)(uVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591cc);
      (*pcVar21)();
    }
    uVar15 = uVar15 + 1;
    uVar18 = *(ulong *)(uVar5 + lVar14 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar14 = lVar14 + 0x18;
    if ((uVar18 & 1) != 0) break;
LAB_100958b68:
    if (uVar4 == uVar15) {
      param_2[3] = uVar5;
      goto LAB_10095916c;
    }
  }
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591f4);
    (*pcVar21)();
  }
  lVar20 = uVar5 + lVar14;
  iVar16 = (int)*(undefined8 *)(lVar20 + 8);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *(ulong *)(lVar20 + 8);
  if (iVar16 == 0) {
    FUN_10061204c();
    _swift_release(uVar4);
    *(ulong *)(lVar20 + 8) = uVar6;
    uVar4 = uVar6;
  }
  else {
    _swift_beginAccess(uVar4 + 0x10,auStack_b8,0,0);
    if (*(uint *)(uVar4 + 0x10) < (uint)uVar6) {
      FUN_10061217c(uVar6);
    }
  }
  _swift_beginAccess(uVar4 + 0x10,auStack_88,0,0);
  lVar14 = uVar5 + lVar14;
  *(undefined4 *)(lVar14 + 0x18) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined2 *)(lVar14 + 0x1c) = 0;
  *(undefined1 *)(lVar14 + 0x1e) = 0;
  *(undefined8 *)(lVar14 + 0x10) = 0;
  FUN_100612cb0();
  lVar20 = *(long *)(lVar20 + 8);
  iVar16 = *(int *)(lVar14 + 0x18);
  uVar3 = *(undefined2 *)(lVar14 + 0x1c);
  uVar9 = *(undefined1 *)(lVar14 + 0x1e);
  _swift_beginAccess(lVar20 + 0x18,auStack_a0,0,0);
  uVar19 = (uint)CONCAT21(uVar3,uVar9);
  lVar20 = *(long *)(lVar20 + 0x18) + (ulong)uVar19;
  uVar1 = *(uint *)(lVar14 + 0x14);
  uVar6 = (ulong)uVar1;
  lVar13 = lVar20 + (ulong)(iVar16 - uVar19);
  FUN_10095a0a8();
  if (lVar13 == 0) {
    local_c8 = 0;
    lStack_c0 = 0;
    lVar20 = *(long *)(param_3 + 0x20);
  }
  else {
    lStack_c0 = lVar20 - uVar6;
    lVar20 = *(long *)(param_3 + 0x20);
    local_c8 = lVar13 + uVar6;
  }
  uVar19 = *param_5;
  local_e8 = &local_c8;
  local_e0 = 1;
  local_d8 = *param_6;
  uVar6 = 0;
  local_f0 = uVar19;
  if ((local_d8 != 0) && (uVar6 = param_6[1] - local_d8, uVar6 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x1009591f8);
    local_f8 = param_4;
    (*pcVar21)();
  }
  uStack_d0 = (undefined4)uVar6;
  uStack_cc = 0;
  puVar8 = (undefined8 *)(ulong)*(uint *)(lVar20 + 0x10);
  if ((int)*(uint *)(lVar20 + 0x10) < 0) {
LAB_10095903c:
    local_e8 = &local_c8;
    uStack_cc = 0;
    local_e0 = 1;
    local_f8 = param_4;
    local_f0 = uVar19;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar8,0,0);
    *puVar8 = 0xd00000000000001f;
    puVar8[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar8 + 2) = 9;
    _swift_willThrow();
  }
  else {
    plVar11 = &local_f8;
    local_f8 = param_4;
    FUN_10095df60(puVar8,plVar11,0);
    uVar10 = (uint)plVar11;
    uVar19 = local_f0;
    if (unaff_x21 == 0) {
      if ((uVar10 & 0xff) == 1) {
        param_6[2] = local_f8;
        param_6[3] = (ulong)local_f0;
        param_6[4] = (long)local_e8;
        param_6[5] = (ulong)local_e0;
        param_6[7] = CONCAT44(uStack_cc,uStack_d0);
        param_6[6] = local_d8;
        *(undefined1 *)(param_6 + 8) = 0;
      }
      *param_5 = local_f0;
      if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100959214);
        (*pcVar21)();
      }
      if ((ulong)puVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100959218);
        (*pcVar21)();
      }
      iVar16 = uVar1 + (uint)puVar8;
      if (CARRY4(uVar1,(uint)puVar8)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10095921c);
        (*pcVar21)();
      }
LAB_1009590ec:
      uVar9 = (undefined1)uVar10;
      uVar15 = uVar15 - 1;
      *(int *)(lVar14 + 0x14) = iVar16;
      param_2[3] = uVar5;
      if (((uVar10 ^ 0xffffffff) & 0xff) != 0) {
        param_2[4] = uVar15;
        if (*(ulong *)(uVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100959210);
          (*pcVar21)();
        }
        puVar17 = (ulong *)(uVar5 + 0x20 + uVar15 * 0x18);
        uVar5 = *puVar17;
        uVar6 = puVar17[2];
        uVar3 = *(undefined2 *)((long)puVar17 + 0x14);
        uVar2 = *(undefined1 *)((long)puVar17 + 0x16);
        *param_1 = uVar5;
        param_1[1] = puVar17[1];
        *(int *)(param_1 + 2) = (int)uVar6;
        *(undefined2 *)((long)param_1 + 0x14) = uVar3;
        *(undefined1 *)((long)param_1 + 0x16) = uVar2;
LAB_10095914c:
        param_1[3] = (ulong)puVar8;
        *(undefined1 *)(param_1 + 4) = uVar9;
        goto LAB_100959158;
      }
      goto LAB_10095916c;
    }
  }
LAB_100959088:
  *param_5 = uVar19;
  _swift_release_n(param_3,2);
  param_2[3] = uVar5;
  goto LAB_100959184;
}



/* Address: 0x100959244 | FUN_100959244 */

ulong FUN_100959244(undefined8 *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,ulong *param_6,ulong param_7,long param_8,uint *param_9,
                   long *param_10)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined3 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  ulong *puVar17;
  long unaff_x21;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  ulong uVar24;
  uint local_d4;
  long local_c8;
  uint local_c0;
  long *local_b8;
  uint local_b0;
  long local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar11 = param_6[10];
  FUN_100004640(param_6 + 6,param_6[9]);
  pcVar16 = *(code **)(uVar11 + 0x10);
  _swift_retain_n(param_7,2);
  (*pcVar16)();
  iVar22 = (int)param_4;
  uVar2 = (undefined1)((ulong)param_4 >> 0x30);
  uVar3 = (undefined2)((ulong)param_4 >> 0x20);
  uVar11 = *param_6;
  local_d4 = (uint)(param_3 >> 0x20);
  local_c8 = param_8;
  if (uVar11 == 0) {
    uVar21 = param_6[3];
    lVar12 = *(long *)(uVar21 + 0x10);
    uVar20 = param_2;
    if (lVar12 == 0) {
      *param_6 = param_2;
      param_6[1] = param_3;
      *(int *)(param_6 + 2) = iVar22;
      *(undefined1 *)((long)param_6 + 0x16) = uVar2;
      *(undefined2 *)((long)param_6 + 0x14) = uVar3;
      _swift_retain();
      FUN_100612cb0();
      uVar19 = *param_6;
      uVar11 = param_6[2];
      uVar3 = *(undefined2 *)((long)param_6 + 0x14);
      uVar2 = *(undefined1 *)((long)param_6 + 0x16);
      _swift_beginAccess(uVar19 + 0x18,auStack_88,0,0);
      uVar15 = (uint)CONCAT21(uVar3,uVar2);
      lVar12 = *(long *)(uVar19 + 0x18) + (ulong)uVar15;
      uVar14 = *(uint *)((long)param_6 + 0xc);
      uVar19 = (ulong)uVar14;
      lVar13 = lVar12 + (ulong)((int)uVar11 - uVar15);
      FUN_10095a0a8();
      if (lVar13 == 0) {
        local_98 = 0;
        lStack_90 = 0;
        lVar12 = *(long *)(param_7 + 0x20);
      }
      else {
        lStack_90 = lVar12 - uVar19;
        lVar12 = *(long *)(param_7 + 0x20);
        local_98 = lVar13 + uVar19;
      }
      uVar15 = *param_9;
      local_b8 = &local_98;
      local_b0 = 1;
      local_a8 = *param_10;
      uVar11 = 0;
      local_c0 = uVar15;
      if ((local_a8 != 0) && (uVar11 = param_10[1] - local_a8, uVar11 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f14);
        (*pcVar16)();
      }
      uStack_a0 = (undefined4)uVar11;
      uStack_9c = 0;
      puVar7 = (undefined8 *)(ulong)*(uint *)(lVar12 + 0x10);
      if ((int)*(uint *)(lVar12 + 0x10) < 0) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
        *puVar7 = 0xd00000000000001f;
        puVar7[1] = 0x8000000100db4780;
        *(undefined4 *)(puVar7 + 2) = 9;
        _swift_willThrow();
      }
      else {
        plVar9 = &local_c8;
        FUN_10095df60(puVar7,plVar9,0);
        uVar15 = local_c0;
        if (unaff_x21 == 0) {
          if (((uint)plVar9 & 0xff) == 1) {
            param_10[2] = local_c8;
            param_10[3] = (ulong)local_c0;
            param_10[4] = (long)local_b8;
            param_10[5] = (ulong)local_b0;
            param_10[7] = CONCAT44(uStack_9c,uStack_a0);
            param_10[6] = local_a8;
            *(undefined1 *)(param_10 + 8) = 0;
          }
          *param_9 = local_c0;
          if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f7c);
            (*pcVar16)();
          }
          if ((ulong)puVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f80);
            (*pcVar16)();
          }
          if (CARRY4(uVar14,(uint)puVar7)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f84);
            (*pcVar16)();
          }
          *(uint *)((long)param_6 + 0xc) = uVar14 + (uint)puVar7;
          uVar11 = *param_6;
          if (uVar11 == 0) {
            _swift_release_n(param_7,2);
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959fb4);
            (*pcVar16)();
          }
          _swift_retain(uVar11);
          _swift_release_n(param_7,3);
          _swift_release(param_2);
          *param_1 = puVar7;
          *(char *)(param_1 + 1) = (char)plVar9;
          param_2 = uVar11;
          goto LAB_100959e7c;
        }
      }
      *param_9 = uVar15;
      _swift_release_n(param_7,2);
      goto LAB_100959c18;
    }
    if ((long)param_6[5] <= lVar12) {
      FUN_100612cb0();
      _swift_beginAccess(param_2 + 0x18,auStack_88,0,0);
      lVar12 = *(long *)(param_2 + 0x18) + (ulong)(uint)CONCAT21(uVar3,uVar2);
      uVar11 = (ulong)local_d4;
      lVar13 = lVar12 + (ulong)(iVar22 - (uint)CONCAT21(uVar3,uVar2));
      FUN_10095a0a8();
      if (lVar13 == 0) {
        local_98 = 0;
        lStack_90 = 0;
        lVar12 = *(long *)(param_7 + 0x20);
      }
      else {
        lStack_90 = lVar12 - uVar11;
        lVar12 = *(long *)(param_7 + 0x20);
        local_98 = lVar13 + uVar11;
      }
      uVar14 = *param_9;
      local_b8 = &local_98;
      local_b0 = 1;
      local_a8 = *param_10;
      uVar11 = 0;
      local_c0 = uVar14;
      if ((local_a8 != 0) && (uVar11 = param_10[1] - local_a8, uVar11 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f58);
        (*pcVar16)();
      }
      uStack_a0 = (undefined4)uVar11;
      uStack_9c = 0;
      puVar7 = (undefined8 *)(ulong)*(uint *)(lVar12 + 0x10);
      if ((int)*(uint *)(lVar12 + 0x10) < 0) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
        *puVar7 = 0xd00000000000001f;
        puVar7[1] = 0x8000000100db4780;
        *(undefined4 *)(puVar7 + 2) = 9;
        _swift_willThrow();
      }
      else {
        plVar9 = &local_c8;
        FUN_10095df60(puVar7,plVar9,0);
        uVar14 = local_c0;
        if (unaff_x21 == 0) {
          if (((uint)plVar9 & 0xff) == 1) {
            param_10[2] = local_c8;
            param_10[3] = (ulong)local_c0;
            param_10[4] = (long)local_b8;
            param_10[5] = (ulong)local_b0;
            param_10[7] = CONCAT44(uStack_9c,uStack_a0);
            param_10[6] = local_a8;
            *(undefined1 *)(param_10 + 8) = 0;
          }
          *param_9 = local_c0;
          _swift_release_n(param_7,3);
          if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f88);
            (*pcVar16)();
          }
          if ((ulong)puVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f90);
            (*pcVar16)();
          }
          if (CARRY4(local_d4,(uint)puVar7)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f98);
            (*pcVar16)();
          }
          *param_1 = puVar7;
          *(char *)(param_1 + 1) = (char)plVar9;
          goto LAB_100959e7c;
        }
      }
      *param_9 = uVar14;
      _swift_release_n(param_7,2);
      uVar21 = param_2;
      goto LAB_100959c18;
    }
    _swift_retain();
    uVar11 = uVar21;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar20 = uVar21;
    if ((uVar11 & 1) == 0) {
      uVar20 = 0;
      FUN_100902da8(0,lVar12 + 1,1,uVar21);
    }
    uVar11 = *(ulong *)(uVar20 + 0x10);
    uVar21 = uVar20;
    if (*(ulong *)(uVar20 + 0x18) >> 1 <= uVar11) {
      uVar21 = (ulong)(1 < *(ulong *)(uVar20 + 0x18));
      FUN_100902da8(uVar21,uVar11 + 1,1,uVar20);
    }
    *(ulong *)(uVar21 + 0x10) = uVar11 + 1;
    lVar12 = uVar21 + uVar11 * 0x18;
    puVar17 = (ulong *)(lVar12 + 0x20);
    *puVar17 = param_2;
    *(int *)(lVar12 + 0x28) = (int)param_3;
    *(uint *)(lVar12 + 0x2c) = local_d4;
    *(int *)(lVar12 + 0x30) = iVar22;
    *(undefined2 *)(lVar12 + 0x34) = uVar3;
    *(undefined1 *)(lVar12 + 0x36) = uVar2;
    param_6[4] = uVar11;
    uVar20 = *(ulong *)(uVar21 + 0x10);
    _swift_retain(param_7);
    if (uVar20 <= uVar11) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f54);
      (*pcVar16)();
    }
    FUN_100612cb0();
    uVar20 = *puVar17;
    iVar22 = *(int *)(lVar12 + 0x30);
    uVar3 = *(undefined2 *)(lVar12 + 0x34);
    uVar2 = *(undefined1 *)(lVar12 + 0x36);
    _swift_beginAccess(uVar20 + 0x18,auStack_88,0,0);
    uVar15 = (uint)CONCAT21(uVar3,uVar2);
    lVar13 = *(long *)(uVar20 + 0x18) + (ulong)uVar15;
    uVar14 = *(uint *)(lVar12 + 0x2c);
    uVar20 = (ulong)uVar14;
    lVar10 = lVar13 + (ulong)(iVar22 - uVar15);
    FUN_10095a0a8();
    if (lVar10 == 0) {
      local_98 = 0;
      lStack_90 = 0;
      lVar13 = *(long *)(param_7 + 0x20);
    }
    else {
      lStack_90 = lVar13 - uVar20;
      lVar13 = *(long *)(param_7 + 0x20);
      local_98 = lVar10 + uVar20;
    }
    uVar15 = *param_9;
    local_b8 = &local_98;
    local_b0 = 1;
    local_a8 = *param_10;
    uVar20 = 0;
    local_c0 = uVar15;
    if ((local_a8 != 0) && (uVar20 = param_10[1] - local_a8, uVar20 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f5c);
      (*pcVar16)();
    }
    uStack_a0 = (undefined4)uVar20;
    uStack_9c = 0;
    puVar7 = (undefined8 *)(ulong)*(uint *)(lVar13 + 0x10);
    if (-1 < (int)*(uint *)(lVar13 + 0x10)) {
      plVar9 = &local_c8;
      FUN_10095df60(puVar7,plVar9,0);
      uVar15 = local_c0;
      if (unaff_x21 != 0) goto LAB_100959c74;
      if (((uint)plVar9 & 0xff) == 1) {
        param_10[2] = local_c8;
        param_10[3] = (ulong)local_c0;
        param_10[4] = (long)local_b8;
        param_10[5] = (ulong)local_b0;
        param_10[7] = CONCAT44(uStack_9c,uStack_a0);
        param_10[6] = local_a8;
        *(undefined1 *)(param_10 + 8) = 0;
      }
      *param_9 = local_c0;
      if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f8c);
        (*pcVar16)();
      }
      if ((ulong)puVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f94);
        (*pcVar16)();
      }
      if (CARRY4(uVar14,(uint)puVar7)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f9c);
        (*pcVar16)();
      }
      *(uint *)(lVar12 + 0x2c) = uVar14 + (uint)puVar7;
      param_6[3] = uVar21;
      if (*(ulong *)(uVar21 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959fa0);
        (*pcVar16)();
      }
      uVar21 = *puVar17;
      *param_1 = puVar7;
      *(char *)(param_1 + 1) = (char)plVar9;
      _swift_retain(uVar21);
      _swift_release(param_2);
      goto LAB_100959e58;
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
    *puVar7 = 0xd00000000000001f;
    puVar7[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar7 + 2) = 9;
    _swift_willThrow();
LAB_100959c74:
    *param_9 = uVar15;
    _swift_release(param_2);
    _swift_release_n(param_7,3);
    param_6[3] = uVar21;
  }
  else {
    uVar21 = param_6[5];
    uVar20 = param_7;
    if ((long)uVar21 < 2) {
      _swift_retain(uVar11);
      FUN_100612cb0();
      _swift_beginAccess(param_2 + 0x18,auStack_88,0,0);
      lVar12 = *(long *)(param_2 + 0x18) + (ulong)(uint)CONCAT21(uVar3,uVar2);
      uVar21 = (ulong)local_d4;
      lVar13 = lVar12 + (ulong)(iVar22 - (uint)CONCAT21(uVar3,uVar2));
      FUN_10095a0a8();
      if (lVar13 == 0) {
        local_98 = 0;
        lStack_90 = 0;
        lVar12 = *(long *)(param_7 + 0x20);
      }
      else {
        lStack_90 = lVar12 - uVar21;
        lVar12 = *(long *)(param_7 + 0x20);
        local_98 = lVar13 + uVar21;
      }
      uVar14 = *param_9;
      local_b8 = &local_98;
      local_b0 = 1;
      local_a8 = *param_10;
      uVar21 = 0;
      local_c0 = uVar14;
      if ((local_a8 != 0) && (uVar21 = param_10[1] - local_a8, uVar21 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f0c);
        (*pcVar16)();
      }
      uStack_a0 = (undefined4)uVar21;
      uStack_9c = 0;
      puVar7 = (undefined8 *)(ulong)*(uint *)(lVar12 + 0x10);
      if ((int)*(uint *)(lVar12 + 0x10) < 0) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
        *puVar7 = 0xd00000000000001f;
        puVar7[1] = 0x8000000100db4780;
        *(undefined4 *)(puVar7 + 2) = 9;
        _swift_willThrow();
      }
      else {
        plVar9 = &local_c8;
        FUN_10095df60(puVar7,plVar9,0);
        uVar14 = local_c0;
        if (unaff_x21 == 0) {
          if (((uint)plVar9 & 0xff) == 1) {
            param_10[2] = local_c8;
            param_10[3] = (ulong)local_c0;
            param_10[4] = (long)local_b8;
            param_10[5] = (ulong)local_b0;
            param_10[7] = CONCAT44(uStack_9c,uStack_a0);
            param_10[6] = local_a8;
            *(undefined1 *)(param_10 + 8) = 0;
          }
          *param_9 = local_c0;
          _swift_release_n(param_7,2);
          _swift_release(uVar11);
          if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f60);
            (*pcVar16)();
          }
          if ((ulong)puVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f64);
            (*pcVar16)();
          }
          if (CARRY4(local_d4,(uint)puVar7)) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f6c);
            (*pcVar16)();
          }
          _swift_release(param_7);
          *param_1 = puVar7;
          *(char *)(param_1 + 1) = (char)plVar9;
          goto LAB_100959e7c;
        }
      }
      *param_9 = uVar14;
      _swift_release(param_7);
      _swift_release(uVar11);
      _swift_release(param_2);
      uVar21 = param_2;
      goto LAB_100959c18;
    }
    uVar4 = *(undefined3 *)((long)param_6 + 0x14);
    uVar19 = param_6[2];
    uVar5 = param_6[1];
    uVar1 = *(undefined4 *)((long)param_6 + 0xc);
    *param_6 = 0;
    param_6[1] = 0;
    *(undefined8 *)((long)param_6 + 0xf) = 0;
    uVar23 = param_6[3];
    uVar6 = uVar23;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
LAB_100959380:
      FUN_100902da8();
      uVar18 = *(ulong *)(uVar6 + 0x18);
      uVar24 = uVar18 >> 1;
      uVar23 = uVar6;
    }
    else {
      uVar18 = *(ulong *)(uVar23 + 0x18);
      uVar24 = uVar18 >> 1;
      if (uVar24 < uVar21) goto LAB_100959380;
    }
    uVar21 = *(ulong *)(uVar23 + 0x10);
    uVar6 = uVar21 + 1;
    _swift_retain(uVar11);
    uVar8 = uVar23;
    if (uVar24 <= uVar21) {
      uVar8 = (ulong)(1 < uVar18);
      FUN_100902da8(uVar8,uVar6,1,uVar23);
      uVar18 = *(ulong *)(uVar8 + 0x18);
      uVar24 = uVar18 >> 1;
    }
    *(ulong *)(uVar8 + 0x10) = uVar6;
    lVar12 = uVar8 + uVar21 * 0x18;
    *(ulong *)(lVar12 + 0x20) = uVar11;
    *(int *)(lVar12 + 0x28) = (int)uVar5;
    *(undefined4 *)(lVar12 + 0x2c) = uVar1;
    *(int *)(lVar12 + 0x30) = (int)uVar19;
    *(short *)(lVar12 + 0x34) = (short)uVar4;
    *(char *)(lVar12 + 0x36) = (char)((uint3)uVar4 >> 0x10);
    lVar12 = uVar21 + 2;
    _swift_retain(param_2);
    uVar21 = uVar8;
    if ((long)uVar24 < lVar12) {
      uVar21 = (ulong)(1 < uVar18);
      FUN_100902da8(uVar21,lVar12,1,uVar8);
    }
    *(long *)(uVar21 + 0x10) = lVar12;
    lVar12 = uVar21 + uVar6 * 0x18;
    puVar17 = (ulong *)(lVar12 + 0x20);
    *puVar17 = param_2;
    *(int *)(lVar12 + 0x28) = (int)param_3;
    *(uint *)(lVar12 + 0x2c) = local_d4;
    *(int *)(lVar12 + 0x30) = iVar22;
    *(undefined2 *)(lVar12 + 0x34) = uVar3;
    *(undefined1 *)(lVar12 + 0x36) = uVar2;
    param_6[4] = uVar6;
    uVar19 = *(ulong *)(uVar21 + 0x10);
    _swift_retain();
    if (uVar19 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f08);
      (*pcVar16)();
    }
    FUN_100612cb0();
    uVar19 = *puVar17;
    iVar22 = *(int *)(lVar12 + 0x30);
    uVar3 = *(undefined2 *)(lVar12 + 0x34);
    uVar2 = *(undefined1 *)(lVar12 + 0x36);
    _swift_beginAccess(uVar19 + 0x18,auStack_88,0,0);
    uVar15 = (uint)CONCAT21(uVar3,uVar2);
    lVar13 = *(long *)(uVar19 + 0x18) + (ulong)uVar15;
    uVar14 = *(uint *)(lVar12 + 0x2c);
    uVar19 = (ulong)uVar14;
    lVar10 = lVar13 + (ulong)(iVar22 - uVar15);
    FUN_10095a0a8();
    if (lVar10 == 0) {
      local_98 = 0;
      lStack_90 = 0;
      lVar13 = *(long *)(param_7 + 0x20);
    }
    else {
      lStack_90 = lVar13 - uVar19;
      lVar13 = *(long *)(param_7 + 0x20);
      local_98 = lVar10 + uVar19;
    }
    uVar15 = *param_9;
    local_b8 = &local_98;
    local_b0 = 1;
    local_a8 = *param_10;
    uVar19 = 0;
    local_c0 = uVar15;
    if ((local_a8 != 0) && (uVar19 = param_10[1] - local_a8, uVar19 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f10);
      (*pcVar16)();
    }
    uStack_a0 = (undefined4)uVar19;
    uStack_9c = 0;
    puVar7 = (undefined8 *)(ulong)*(uint *)(lVar13 + 0x10);
    if ((int)*(uint *)(lVar13 + 0x10) < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
      *puVar7 = 0xd00000000000001f;
      puVar7[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar7 + 2) = 9;
      _swift_willThrow();
    }
    else {
      plVar9 = &local_c8;
      FUN_10095df60(puVar7,plVar9,0);
      uVar15 = local_c0;
      if (unaff_x21 == 0) {
        if (((uint)plVar9 & 0xff) == 1) {
          param_10[2] = local_c8;
          param_10[3] = (ulong)local_c0;
          param_10[4] = (long)local_b8;
          param_10[5] = (ulong)local_b0;
          param_10[7] = CONCAT44(uStack_9c,uStack_a0);
          param_10[6] = local_a8;
          *(undefined1 *)(param_10 + 8) = 0;
        }
        *param_9 = local_c0;
        if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f68);
          (*pcVar16)();
        }
        if ((ulong)puVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f70);
          (*pcVar16)();
        }
        if (CARRY4(uVar14,(uint)puVar7)) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f74);
          (*pcVar16)();
        }
        *(uint *)(lVar12 + 0x2c) = uVar14 + (uint)puVar7;
        param_6[3] = uVar21;
        if (*(ulong *)(uVar21 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100959f78);
          (*pcVar16)();
        }
        uVar21 = *puVar17;
        *param_1 = puVar7;
        *(char *)(param_1 + 1) = (char)plVar9;
        _swift_retain(uVar21);
        _swift_release(uVar11);
        _swift_release(param_2);
LAB_100959e58:
        _swift_release_n(param_7,4);
        param_2 = uVar21;
        goto LAB_100959e7c;
      }
    }
    *param_9 = uVar15;
    _swift_release(uVar11);
    _swift_release(param_2);
    _swift_release_n(param_7,2);
    param_6[3] = uVar21;
LAB_100959c18:
    _swift_release(uVar20);
  }
  _swift_release(param_7);
  param_2 = uVar21;
LAB_100959e7c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100959fb4 | FUN_100959fb4 */

void FUN_100959fb4(ulong *param_1,ulong param_2,code *param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  undefined1 local_50 [16];
  
  if (param_2 >> 0x20 == 0) {
    iVar2 = (int)*param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = *param_1;
    if (iVar2 == 0) {
      FUN_10061204c();
      _swift_release(uVar3);
      *param_1 = param_2;
      uVar3 = param_2;
    }
    else {
      _swift_beginAccess(uVar3 + 0x10,auStack_80,0,0);
      if (*(uint *)(uVar3 + 0x10) < (uint)param_2) {
        FUN_10061217c(param_2);
      }
    }
    _swift_beginAccess(uVar3 + 0x10,auStack_68,0,0);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(uVar3 + 0x10);
    *(undefined2 *)((long)param_1 + 0x14) = 0;
    *(undefined1 *)((long)param_1 + 0x16) = 0;
    param_1[1] = 0;
    (*param_3)(local_50,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095a0a8);
  (*pcVar1)();
}



/* Address: 0x10095a0a8 | FUN_10095a0a8 */

undefined1  [16] FUN_10095a0a8(ulong param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095a108);
    (*pcVar1)();
  }
  uVar4 = param_3 - param_2;
  if (param_1 == 0) {
    if (param_2 == 0) {
      return ZEXT816(0);
    }
  }
  else {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = uVar4;
    }
    uVar3 = uVar2;
    if (uVar2 < param_1) goto LAB_10095a0ec;
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095a0d8);
      (*pcVar1)();
    }
  }
  uVar2 = uVar4;
  uVar3 = param_1;
  if (uVar4 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095a10c);
    (*pcVar1)();
  }
LAB_10095a0ec:
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x10095a10c | FUN_10095a10c */

/* WARNING: Removing unreachable block (ram,0x00010095a168) */

void FUN_10095a10c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_70,1,0);
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar2;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_88,1,0);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar2);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095a240);
      (*pcVar1)();
    }
    (*param_2)();
    FUN_100630328(0,0);
  }
  return;
}



/* Address: 0x10095a240 | FUN_10095a240 */

void FUN_10095a240(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 8) = param_2;
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x10);
  *puVar2 = param_3;
  *(char *)(puVar2 + 1) = (char)param_4;
  *(char *)((long)puVar2 + 9) = (char)((ulong)param_4 >> 8);
  *(int *)((long)puVar2 + 0xc) = (int)((ulong)param_4 >> 0x20);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10095a29c);
  (*pcVar3)();
}



/* Address: 0x10095a29c | FUN_10095a29c */

undefined1  [16] FUN_10095a29c(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  FUN_100071340();
  if ((param_2 & 1) == 0) {
    uVar6 = 0xf000000000000007;
    uVar5 = 0xfe;
  }
  else {
    iVar4 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar7 = *unaff_x20;
    if (iVar4 == 0) {
      FUN_10095a460();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + param_1 * 0x10);
    uVar6 = *puVar1;
    uVar3 = *(ushort *)(puVar1 + 1);
    uVar2 = *(uint *)((long)puVar1 + 0xc);
    FUN_1001f60f0(param_1,lVar7);
    *unaff_x20 = lVar7;
    uVar5 = (ulong)uVar3 | (ulong)uVar2 << 0x20;
  }
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Address: 0x10095a33c | FUN_10095a33c */

void FUN_10095a33c(undefined8 param_1,ulong param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  lVar4 = param_3;
  uVar6 = param_2;
  FUN_100071340();
  lVar8 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar7 = lVar8 + uVar9;
  if (SCARRY8(lVar8,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10095a424);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_10095a5e0(lVar7);
    FUN_100071340();
    lVar4 = param_3;
    if (((uint)uVar6 & 1) != (param_4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10095a3d4);
      (*pcVar3)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_10095a460();
    lVar7 = *unaff_x20;
    goto joined_r0x00010095a438;
  }
  lVar7 = *unaff_x20;
joined_r0x00010095a438:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar4 * 0x10);
    uVar5 = *puVar1;
    *puVar1 = param_1;
    uVar2 = *(undefined1 *)(puVar1 + 1);
    *(char *)(puVar1 + 1) = (char)param_2;
    *(char *)((long)puVar1 + 9) = (char)(param_2 >> 8);
    *(int *)((long)puVar1 + 0xc) = (int)(param_2 >> 0x20);
    _swift_release(uVar5,uVar2);
    return;
  }
  FUN_10095a240();
  return;
}



/* Address: 0x10095a460 | FUN_10095a460 */

void FUN_10095a460(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar13;
  
  this = (_DictionaryStorage *)&DAT_100feeb68;
  FUN_1000f7830(&DAT_100feeb68,&DAT_100c860e8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var8 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar10 = (1L << ((ulong)(byte)p_Var8[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var8 != original || p_Var1 + uVar10 * 8 <= p_Var8 + 0x40) {
      _memmove(p_Var8 + 0x40,p_Var1,uVar10 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(p_Var8 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(original + 0x40);
    if (uVar10 == 0) goto LAB_10095a53c;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar12 * 0x10);
        uVar9 = *puVar3;
        uVar5 = *(undefined1 *)((long)puVar3 + 9);
        uVar4 = *(undefined4 *)((long)puVar3 + 0xc);
        uVar6 = *(undefined1 *)(puVar3 + 1);
        *(undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar12 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar12 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar12 * 0x10);
        *puVar3 = uVar9;
        *(undefined1 *)(puVar3 + 1) = uVar6;
        *(undefined1 *)((long)puVar3 + 9) = uVar5;
        *(undefined4 *)((long)puVar3 + 0xc) = uVar4;
        _swift_retain();
        if (uVar10 != 0) break;
LAB_10095a53c:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10095a5e0);
            (*pcVar7)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar2) goto LAB_10095a5b8;
          uVar10 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_10095a5b8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var8;
  return;
}



/* Address: 0x10095a5e0 | FUN_10095a5e0 */

void FUN_10095a5e0(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  __int64 capacity;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  Hasher HVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  undefined8 uVar17;
  __uint64 _Var18;
  long lVar19;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100feeb68;
  FUN_1000f7830(&DAT_100feeb68,&DAT_100c860e8);
  p_Var7 = original;
  HVar9.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_10095a84c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10095a87c);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar19) {
          if (((ulong)param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10095a84c;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar19 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar19 << 6;
    _Var18 = *(__uint64 *)(*(long *)(original + 0x30) + uVar10 * 8);
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x10);
    uVar17 = *puVar1;
    uVar3 = *(undefined1 *)(puVar1 + 1);
    uVar4 = *(undefined1 *)((long)puVar1 + 9);
    uVar2 = *(undefined4 *)((long)puVar1 + 0xc);
    if (((ulong)param_2 & 1) == 0) {
      _swift_retain(uVar17,uVar3);
    }
    uVar8 = Swift::Hasher::_hash(*(__int64 *)(p_Var7 + 0x28),_Var18,HVar9);
    uVar14 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar8 >> 6;
    uVar10 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar8 = uVar12 + 1;
        if ((uVar8 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10095a880);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar8 != uVar10) {
          uVar12 = uVar8;
        }
        bVar5 = (bool)(uVar8 == uVar10 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var7 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var7 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var7 + uVar12 + 0x40);
    *(__uint64 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 8) = _Var18;
    puVar1 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 0x10);
    *puVar1 = uVar17;
    *(undefined1 *)(puVar1 + 1) = uVar3;
    *(undefined1 *)((long)puVar1 + 9) = uVar4;
    *(undefined4 *)((long)puVar1 + 0xc) = uVar2;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar11 = lVar19;
  } while( true );
}



/* Address: 0x10095a880 | FUN_10095a880 */

void FUN_10095a880(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feeb60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b880;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b880,&DAT_100ef1920);
  DAT_100feeb60 = pTVar1;
  return;
}



/* Address: 0x10095a8c0 | FUN_10095a8c0 */

void FUN_10095a8c0(void)

{
  long unaff_x20;
  
  FUN_100958648(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),1);
  return;
}



/* Address: 0x10095a8e0 | FUN_10095a8e0 */

void FUN_10095a8e0(void)

{
  long unaff_x20;
  
  FUN_100957af8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),0);
  return;
}



/* Address: 0x10095a90c | FUN_10095a90c */

void FUN_10095a90c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10095a94c | FUN_10095a94c */

void FUN_10095a94c(void)

{
  long unaff_x20;
  
  FUN_100958648(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),0);
  return;
}



/* Address: 0x10095a96c | FUN_10095a96c */

void FUN_10095a96c(ulong param_1,ulong param_2)

{
  if ((((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) && ((param_2 & 0xfe) == 0xfe)) {
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x10095a98c | FUN_10095a98c */

void FUN_10095a98c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008d5c1c(param_1,param_2,*(undefined4 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10095a9a4 | thunk_FUN_10095a9d8 */

void thunk_FUN_10095a9d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined *extraout_x8;
  long unaff_x20;
  long lVar6;
  
  ppuVar5 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar5 != extraout_x8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10095aa74);
    (*pcVar3)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar4 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe0) = param_1;
    *(undefined8 *)(unaff_x20 + 0xe8) = param_2;
    FUN_1005d84e8(param_1);
    FUN_1005d84e8(param_2);
    FUN_1005d8534(uVar1);
    FUN_1005d8534(uVar2);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10095aa7c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10095aa78);
  (*pcVar3)();
}



/* Address: 0x10095a9a8 | FUN_10095a9a8 */

void FUN_10095a9a8(void)

{
  FUN_100956e88();
  return;
}



/* Address: 0x10095a9c0 | FUN_10095a9c0 */

void FUN_10095a9c0(void)

{
  FUN_100956ff0();
  return;
}



/* Address: 0x10095a9d8 | FUN_10095a9d8 */

void FUN_10095a9d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined *extraout_x8;
  long unaff_x20;
  long lVar6;
  
  ppuVar5 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar5 != extraout_x8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10095aa74);
    (*pcVar3)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x38);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar4 == 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xe8);
    *(undefined8 *)(unaff_x20 + 0xe0) = param_1;
    *(undefined8 *)(unaff_x20 + 0xe8) = param_2;
    FUN_1005d84e8(param_1);
    FUN_1005d84e8(param_2);
    FUN_1005d8534(uVar1);
    FUN_1005d8534(uVar2);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar4 == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10095aa7c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10095aa78);
  (*pcVar3)();
}



/* Address: 0x10095aa7c | FUN_10095aa7c */

void FUN_10095aa7c(ulong *param_1,ulong param_2,long param_3,long param_4,uint *param_5,
                  long *param_6)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  uint uVar12;
  undefined1 auStack_f0 [24];
  long local_d8;
  uint local_d0;
  long *local_c8;
  uint local_c0;
  long local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long local_a8;
  long lStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10095acfc);
    (*pcVar4)();
  }
  iVar5 = (int)*param_1;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *param_1;
  if (iVar5 == 0) {
    FUN_10061204c();
    _swift_release(uVar10);
    *param_1 = param_2;
    uVar10 = param_2;
  }
  else {
    _swift_beginAccess(uVar10 + 0x10,auStack_f0,0,0);
    if (*(uint *)(uVar10 + 0x10) < (uint)param_2) {
      FUN_10061217c(param_2);
    }
  }
  _swift_beginAccess(uVar10 + 0x10,auStack_80,0,0);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(uVar10 + 0x10);
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  param_1[1] = 0;
  FUN_100612cb0();
  uVar11 = *param_1;
  uVar10 = param_1[2];
  uVar3 = *(undefined2 *)((long)param_1 + 0x14);
  uVar2 = *(undefined1 *)((long)param_1 + 0x16);
  _swift_beginAccess(uVar11 + 0x18,auStack_98,0,0);
  uVar12 = (uint)CONCAT21(uVar3,uVar2);
  lVar9 = *(long *)(uVar11 + 0x18) + (ulong)uVar12;
  uVar1 = *(uint *)((long)param_1 + 0xc);
  uVar11 = (ulong)uVar1;
  lVar8 = lVar9 + (ulong)((int)uVar10 - uVar12);
  FUN_10095a0a8();
  if (lVar8 == 0) {
    local_a8 = 0;
    lStack_a0 = 0;
    lVar9 = *(long *)(param_3 + 0x20);
  }
  else {
    lStack_a0 = lVar9 - uVar11;
    lVar9 = *(long *)(param_3 + 0x20);
    local_a8 = lVar8 + uVar11;
  }
  uVar12 = *param_5;
  local_c8 = &local_a8;
  local_c0 = 1;
  local_b8 = *param_6;
  uVar10 = 0;
  local_d8 = param_4;
  local_d0 = uVar12;
  if ((local_b8 != 0) && (uVar10 = param_6[1] - local_b8, uVar10 >> 0x20 != 0)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10095ad00);
    (*pcVar4)();
  }
  uStack_b0 = (undefined4)uVar10;
  uStack_ac = 0;
  puVar6 = (undefined8 *)(ulong)*(uint *)(lVar9 + 0x10);
  if ((int)*(uint *)(lVar9 + 0x10) < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar6,0,0);
    *puVar6 = 0xd00000000000001f;
    puVar6[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar6 + 2) = 9;
    _swift_willThrow();
  }
  else {
    plVar7 = &local_d8;
    FUN_10095df60(puVar6,plVar7,0);
    uVar12 = local_d0;
    if (unaff_x21 == 0) {
      if (((uint)plVar7 & 0xff) == 1) {
        param_6[2] = local_d8;
        param_6[3] = (ulong)local_d0;
        param_6[4] = (long)local_c8;
        param_6[5] = (ulong)local_c0;
        param_6[7] = CONCAT44(uStack_ac,uStack_b0);
        param_6[6] = local_b8;
        *(undefined1 *)(param_6 + 8) = 0;
      }
      *param_5 = local_d0;
      if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10095ad04);
        (*pcVar4)();
      }
      if ((ulong)puVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10095ad08);
        (*pcVar4)();
      }
      if (CARRY4(uVar1,(uint)puVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10095ad0c);
        (*pcVar4)();
      }
      *(uint *)((long)param_1 + 0xc) = uVar1 + (uint)puVar6;
      goto LAB_10095acc0;
    }
  }
  *param_5 = uVar12;
LAB_10095acc0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10095ad10 | FUN_10095ad10 */

/* WARNING: Removing unreachable block (ram,0x00010095ae90) */
/* WARNING: Removing unreachable block (ram,0x00010095ae44) */

undefined8 *
FUN_10095ad10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x21;
  undefined *local_a0 [3];
  undefined *local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  puVar3 = (undefined8 *)0x0;
  FUN_10094ccdc(0);
  _swift_allocObject();
  FUN_10094c7d8(param_1,1);
  if (unaff_x21 == 0) {
    lVar4 = 0;
    FUN_10095456c();
    _swift_allocObject();
    *(undefined4 *)(lVar4 + 0x158) = 0x80;
    *(undefined8 *)(lVar4 + 0x160) = param_3;
    *(undefined8 *)(lVar4 + 0x168) = param_4;
    FUN_1006648f0(&local_78,0x40,0x800,0x10000);
    local_88 = &DAT_100ef25a0;
    ppuStack_80 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
    puVar5 = &DAT_100f1b5d8;
    _swift_allocObject(&DAT_100f1b5d8,0x38,7);
    *(undefined8 *)(puVar5 + 0x18) = uStack_70;
    *(undefined8 *)(puVar5 + 0x10) = local_78;
    *(undefined8 *)(puVar5 + 0x28) = uStack_60;
    *(undefined8 *)(puVar5 + 0x20) = local_68;
    puVar5[0x30] = local_58;
    local_a0[0] = puVar5;
    _swift_retain(param_1);
    _swift_retain(param_2);
    _swift_unknownObjectRetain(param_3);
    puVar3 = param_1;
    FUN_10094d4b0(param_1,0,0,param_2,local_a0,0);
    lVar4 = puVar3[4];
    iVar1 = *(int *)(lVar4 + 0x10);
    if (iVar1 < 0) {
      puVar6 = puVar3;
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar6,0,0);
      *puVar6 = 0xd00000000000001f;
      puVar6[1] = 0x8000000100db4780;
      *(undefined4 *)(puVar6 + 2) = 9;
      _swift_willThrow();
      _swift_release(param_2);
      _swift_unknownObjectRelease(param_3);
      _swift_release(puVar3);
      _swift_release(param_1);
    }
    else {
      uVar2 = *(undefined4 *)(puVar3 + 0x2b);
      _swift_retain(lVar4);
      FUN_10095ddc4(iVar1,uVar2);
      _swift_release(param_1);
      _swift_release(lVar4);
      _swift_release(param_2);
      _swift_unknownObjectRelease(param_3);
    }
  }
  else {
    _swift_release(param_2);
    _swift_unknownObjectRelease(param_3);
  }
  return puVar3;
}



/* Address: 0x10095af60 | FUN_10095af60 */

/* WARNING: Removing unreachable block (ram,0x00010095afbc) */

void FUN_10095af60(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_70,1,0);
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_88,1,0);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar2);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095b09c);
      (*pcVar1)();
    }
    (*param_3)();
    FUN_100630328(0,0);
  }
  return;
}



/* Address: 0x10095b09c | FUN_10095b09c */

undefined * FUN_10095b09c(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar1 = &DAT_100f1b560;
  _swift_allocObject(&DAT_100f1b560,0x20,7);
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
  puVar3 = &DAT_100f1b588;
  _swift_allocObject(&DAT_100f1b588,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1006226e4;
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
    puVar6 = &DAT_100f1b5b0;
    _swift_allocObject(&DAT_100f1b5b0,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_10095b568;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    (*pcVar7)(thunk_FUN_1008db360,puVar6,uVar4,lVar5);
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
      FUN_10064967c(FUN_10095b568,puVar3);
      _swift_endAccess(auStack_90);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_retain(param_3);
      lVar5 = param_1;
      puVar6 = puVar2;
      FUN_10095af60(param_1,puVar2,param_2,param_3);
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



/* Address: 0x10095b330 | FUN_10095b330 */

undefined8 FUN_10095b330(undefined8 param_1)

{
  FUN_100934480();
  return param_1;
}



/* Address: 0x10095b364 | FUN_10095b364 */

void FUN_10095b364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feeb78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c685dc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c685dc,&DAT_100eeb7e8);
  DAT_100feeb78 = pTVar1;
  return;
}



/* Address: 0x10095b3a4 | FUN_10095b3a4 */

void FUN_10095b3a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feeb80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6859c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6859c,&DAT_100eeb770);
  DAT_100feeb80 = pTVar1;
  return;
}



/* Address: 0x10095b3e4 | FUN_10095b3e4 */

void FUN_10095b3e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feeb88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69090,&DAT_100eecb18);
  DAT_100feeb88 = pTVar1;
  return;
}



/* Address: 0x10095b424 | FUN_10095b424 */

void FUN_10095b424(void)

{
  FUN_10094ef6c();
  return;
}



/* Address: 0x10095b44c | FUN_10095b44c */

void FUN_10095b44c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008d9500(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10095b454 | FUN_10095b454 */

void FUN_10095b454(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10094cd60(param_1,param_2,*(undefined4 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10095b46c | FUN_10095b46c */

void FUN_10095b46c(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10095b478 | FUN_10095b478 */

void FUN_10095b478(void)

{
  long unaff_x20;
  
  FUN_10094eff4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10095b49c | FUN_10095b49c */

void FUN_10095b49c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10095b4c0 | FUN_10095b4c0 */

void FUN_10095b4c0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009538b0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10095b4c8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10095b4cc | FUN_10095b4cc */

void FUN_10095b4cc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x10095b4d8 | FUN_10095b4d8 */

void FUN_10095b4d8(void)

{
  FUN_1009540b8();
  return;
}



/* Address: 0x10095b4e0 | FUN_10095b4e0 */

void FUN_10095b4e0(void)

{
  FUN_100954320();
  return;
}



/* Address: 0x10095b4f8 | FUN_10095b4f8 */

void FUN_10095b4f8(void)

{
  undefined8 *unaff_x20;
  
  FUN_10061cf14(2,0,*unaff_x20,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x10095b510 | FUN_10095b510 */

void FUN_10095b510(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10095b534 | FUN_10095b534 */

void FUN_10095b534(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10095b568 | FUN_10095b568 */

void FUN_10095b568(void)

{
  long unaff_x20;
  
  FUN_10095a10c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


