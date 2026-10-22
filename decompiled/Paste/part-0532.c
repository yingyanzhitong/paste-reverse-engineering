/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100614980 | FUN_100614980 */

void FUN_100614980(__int64 param_1)

{
  undefined1 uVar1;
  Hasher HVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  HVar2.unknown = auStack_68;
  FUN_100614818(HVar2.unknown,uVar3,uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1006149c8 | FUN_1006149c8 */

String FUN_1006149c8(uint param_1,char *param_2,void *param_3,undefined *param_4)

{
  uint uVar1;
  code *pcVar2;
  char *pcVar3;
  __int64 _Var4;
  char *pcVar5;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  String SVar13;
  String SVar15;
  String repeating;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String local_98;
  undefined1 auStack_88 [24];
  char *local_70;
  void *pvStack_68;
  String SVar14;
  void *pvVar6;
  
  uVar11 = (ulong)param_3 >> 0x20;
  local_70 = (char *)0x0;
  pvStack_68 = (void *)0xe000000000000000;
  uVar8 = uVar11 - (long)param_3;
  uVar12 = uVar8 & 0xffffffff;
  _Var4 = uVar12 + (uVar8 & 0xffffffff) * 2;
  if ((param_1 & 1) == 0) {
    _Var4 = (uVar8 & 0xffffffff) << 1;
  }
  SVar15.bridgeObject = param_3;
  SVar15.str = param_2;
  puVar7 = param_4;
  Swift::String::reserveCapacity(_Var4,SVar15);
  uVar8 = (ulong)param_3 & 0xffffffff;
  if (uVar11 < uVar8) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100614c0c);
    (*pcVar2)();
  }
  uVar1 = (uint)((ulong)param_4 >> 0x18) & 0xffff00 | (ushort)((ulong)param_4 >> 0x30) & 0xff;
  if ((int)param_4 - uVar1 < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100614c10);
    (*pcVar2)();
  }
  if (uVar11 == uVar8) {
    _swift_retain(param_2);
  }
  else {
    lVar10 = uVar11 - uVar8;
    if (uVar11 < uVar8 || lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100614c14);
      (*pcVar2)();
    }
    _swift_retain(param_2);
    pcVar5 = param_2 + 0x18;
    _swift_beginAccess(pcVar5,auStack_88,0,0);
    lVar9 = uVar1 + uVar8;
    do {
      if (uVar11 <= uVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100614c00);
        (*pcVar2)();
      }
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100614c04);
        (*pcVar2)();
      }
      local_98.str._0_1_ = *(undefined1 *)(*(long *)(param_2 + 0x18) + lVar9);
      FUN_100615fec();
      puVar7 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      SVar15 = Swift::String::_init
                         (&local_98,0x10,0,PTR___type_metadata_for_Swift_UInt8_100eadcd0,pcVar5);
      _Var4 = Swift::String::get_count(SVar15);
      pcVar3 = (char *)(2 - _Var4);
      if (SBORROW8(2,_Var4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100614c08);
        (*pcVar2)();
      }
      repeating.bridgeObject = (void *)0xe100000000000000;
      repeating.str = &DAT_00000030;
      local_98 = Swift::String::init(repeating,(__int64)pcVar3);
      pvVar6 = local_98.bridgeObject;
      _swift_bridgeObjectRetain(pvVar6);
      SVar17.bridgeObject = puVar7;
      SVar17.str = pcVar3;
      Swift::String::append(SVar15,SVar17);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar5 = local_98.bridgeObject;
      SVar18.bridgeObject = puVar7;
      SVar18.str = pcVar3;
      Swift::String::append(local_98,SVar18);
      _swift_bridgeObjectRelease();
      if ((param_1 & 1) != 0) {
        SVar16.bridgeObject = (void *)0xe100000000000000;
        SVar16.str = (char *)0x20;
        pcVar5 = (char *)0x20;
        SVar19.bridgeObject = puVar7;
        SVar19.str = pcVar3;
        Swift::String::append(SVar16,SVar19);
      }
      uVar8 = uVar8 + 1;
      uVar12 = uVar12 - 1;
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  _swift_release(param_2);
  pvVar6 = pvStack_68;
  pcVar5 = local_70;
  SVar13.bridgeObject = pvStack_68;
  SVar13.str = local_70;
  if ((param_1 & 1) != 0) {
    _swift_bridgeObjectRetain(pvStack_68);
    pcVar3 = &DAT_00000001;
    FUN_1004c24d8(1,pcVar5,pvVar6);
    _swift_bridgeObjectRelease(pvVar6);
    SVar14.bridgeObject = pcVar5;
    SVar14.str = pcVar3;
    SVar13 = Swift::String::__fromSubstring(SVar14);
    _swift_bridgeObjectRelease(pvVar6);
    _swift_bridgeObjectRelease(puVar7);
  }
  return SVar13;
}



/* Address: 0x100614c14 | FUN_100614c14 */

undefined1  [16] FUN_100614c14(long param_1,char *param_2,ulong param_3,ulong param_4,ulong param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  void *pvVar12;
  ulong uVar13;
  void *pvVar14;
  void *pvVar15;
  char *pcVar16;
  String SVar17;
  String SVar18;
  undefined1 auVar19 [16];
  String SVar20;
  String SVar21;
  
  if ((long)(ulong)(uint)((int)(param_4 >> 0x20) - (int)param_4) <= param_1) {
    uVar8 = (ulong)((uint)param_2 & 1);
    FUN_1006149c8(uVar8,param_3,param_4,param_5 & 0xffffffffffffff);
    auVar19._8_8_ = param_3;
    auVar19._0_8_ = uVar8;
    return auVar19;
  }
  pvVar15 = (void *)(param_1 / 2);
  pcVar9 = param_2;
  uVar8 = param_3;
  _swift_retain(param_3);
  pvVar6 = pvVar15;
  FUN_10060c6b4();
  if (pvVar6 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100614e08);
    (*pcVar4)();
  }
  uVar13 = (long)(param_4 >> 0x20) - (long)pvVar15;
  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100614dfc);
    (*pcVar4)();
  }
  if (uVar13 >> 0x20 == 0) {
    if ((void *)(param_4 >> 0x20) < pvVar15) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100614e04);
      (*pcVar4)();
    }
    pcVar10 = pcVar9;
    uVar13 = uVar8;
    FUN_10060c6b4();
    if (pvVar15 != (void *)0x0) {
      bVar5 = ((ulong)param_2 & 1) == 0;
      pcVar16 = (char *)(ulong)((uint)param_2 & 1);
      pcVar1 = (char *)0x202e2e2e20;
      if (bVar5) {
        pcVar1 = (char *)0x2e2e2e;
      }
      puVar2 = &DAT_e500000000000000;
      if (bVar5) {
        puVar2 = (undefined1 *)0xe300000000000000;
      }
      pcVar7 = pcVar16;
      pvVar11 = pvVar6;
      FUN_1006149c8(pcVar16,pvVar6,pcVar9,uVar8 & 0xffffffffffffff);
      pvVar14 = (void *)(uVar13 & 0xffffffffffffff);
      pvVar12 = pvVar15;
      FUN_1006149c8();
      _swift_bridgeObjectRetain(pvVar11);
      SVar17.bridgeObject = puVar2;
      SVar17.str = pcVar1;
      SVar20.bridgeObject = pvVar14;
      SVar20.str = pcVar10;
      Swift::String::append(SVar17,SVar20);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_bridgeObjectRelease(puVar2);
      _swift_bridgeObjectRetain(pvVar11);
      SVar18.bridgeObject = pvVar12;
      SVar18.str = pcVar16;
      SVar21.bridgeObject = pvVar14;
      SVar21.str = pcVar10;
      Swift::String::append(SVar18,SVar21);
      _swift_release(param_3);
      _swift_bridgeObjectRelease(pvVar12);
      _swift_bridgeObjectRelease(pvVar11);
      _swift_release(pvVar6);
      _swift_release(pvVar15);
      auVar3._8_8_ = pvVar11;
      auVar3._0_8_ = pcVar7;
      return auVar3;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100614e0c);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100614e00);
  (*pcVar4)();
}



/* Address: 0x100614e0c | FUN_100614e0c */

undefined1  [16]
FUN_100614e0c(char *param_1,char *param_2,char *param_3,undefined8 param_4,ulong param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  String SVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  code *pcVar8;
  undefined8 uVar9;
  __int64 _Var10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar14;
  undefined *puVar15;
  ulong uVar16;
  byte bVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  int iVar21;
  long lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  String SVar29;
  String repeating;
  String SVar30;
  String repeating_00;
  String repeating_01;
  String SVar31;
  String SVar32;
  String repeating_02;
  String SVar33;
  String repeating_03;
  String SVar34;
  String repeating_04;
  String repeating_05;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  tuple2_conflict1 tVar54;
  undefined1 auStack_140 [24];
  undefined *local_128;
  undefined1 auStack_120 [24];
  String local_108;
  int local_f8;
  ushort local_f4;
  byte local_f2;
  ulong local_f0;
  ulong uStack_e8;
  undefined1 auStack_e0 [24];
  char *local_c8;
  void *pvStack_c0;
  String local_b8;
  int local_a8;
  ushort local_a4;
  byte local_a2;
  ulong local_a0;
  ulong uStack_98;
  String local_90;
  int local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  ulong local_78;
  ulong uStack_70;
  void *pvVar13;
  
  local_c8 = (char *)0x0;
  pvStack_c0 = (void *)0xe000000000000000;
  uVar9 = 0x4f;
  SVar29.bridgeObject = param_3;
  SVar29.str = param_2;
  Swift::String::reserveCapacity(0x4f,SVar29);
  local_90.str = param_1;
  FUN_10061602c();
  puVar15 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  SVar29 = Swift::String::_init(&local_90,0x10,0,PTR___type_metadata_for_Swift_Int_100eac6f8,uVar9);
  _Var10 = Swift::String::get_count(SVar29);
  pcVar14 = (char *)(8 - _Var10);
  if (SBORROW8(8,_Var10)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10061550c);
    (*pcVar8)();
  }
  repeating.bridgeObject = (void *)0xe100000000000000;
  repeating.str = &DAT_00000030;
  local_90 = Swift::String::init(repeating,(__int64)pcVar14);
  pvVar13 = local_90.bridgeObject;
  _swift_bridgeObjectRetain(pvVar13);
  SVar37.bridgeObject = puVar15;
  SVar37.str = pcVar14;
  Swift::String::append(SVar29,SVar37);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  _swift_bridgeObjectRelease(pvVar13);
  pvVar13 = local_90.bridgeObject;
  SVar38.bridgeObject = puVar15;
  SVar38.str = pcVar14;
  Swift::String::append(local_90,SVar38);
  _swift_bridgeObjectRelease(pvVar13);
  SVar30.bridgeObject = &SUB_e200000000000000;
  SVar30.str = (char *)0x2020;
  SVar39.bridgeObject = puVar15;
  SVar39.str = pcVar14;
  Swift::String::append(SVar30,SVar39);
  pcVar14 = (char *)((long)param_2 * 3);
  if (SUB168(SEXT816((long)param_2) * SEXT816(3),8) != (long)pcVar14 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100615510);
    (*pcVar8)();
  }
  uVar25 = param_5 >> 0x20;
  repeating_00.bridgeObject = (void *)0xe100000000000000;
  repeating_00.str = (char *)0x20;
  SVar29 = Swift::String::init(repeating_00,(__int64)pcVar14);
  SVar40.bridgeObject = puVar15;
  SVar40.str = pcVar14;
  Swift::String::append(SVar29,SVar40);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  uVar16 = param_5 & 0xffffffff;
  if (uVar25 < uVar16) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100615514);
    (*pcVar8)();
  }
  iVar21 = (int)param_6;
  if (iVar21 - ((ushort)((ulong)param_6 >> 0x30) & 0xff |
               ((uint)((ulong)param_6 >> 0x20) & 0xffff) << 8) < uVar25) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100615518);
    (*pcVar8)();
  }
  uVar18 = 8U - (long)param_2 & ((long)(8U - (long)param_2) >> 0x3f ^ 0xffffffffffffffffU);
  uVar23 = (undefined4)param_5;
  uVar24 = (undefined4)(param_5 >> 0x20);
  local_90.bridgeObject._0_4_ = uVar23;
  local_90.str = (char *)param_4;
  local_90.bridgeObject._4_4_ = uVar24;
  uVar3 = (undefined2)((ulong)param_6 >> 0x20);
  uVar2 = (undefined1)((ulong)param_6 >> 0x30);
  local_80 = iVar21;
  local_7c = uVar3;
  local_7a = uVar2;
  local_78 = uVar16;
  uStack_70 = uVar25;
  FUN_100615524(&local_b8,uVar18);
  pcVar12 = local_b8.str;
  if (uStack_98 == local_a0) {
    _swift_retain(param_4);
  }
  else {
    lVar22 = uStack_98 - local_a0;
    if (lVar22 == 0 || (long)uStack_98 < (long)local_a0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100615520);
      (*pcVar8)();
    }
    uVar1 = (ulong)(uint)local_b8.bridgeObject;
    uVar4 = local_b8.bridgeObject._4_4_ - (uint)local_b8.bridgeObject;
    _swift_retain(param_4);
    pcVar11 = pcVar12 + 0x18;
    _swift_beginAccess(pcVar11,auStack_e0,0,0);
    lVar26 = local_a0 + (ulong)local_a4 * 0x100 + (ulong)local_a2;
    lVar27 = local_a0 - uVar1;
    uVar19 = local_a0;
    do {
      if ((long)uStack_98 <= (long)uVar19) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154e0);
        (*pcVar8)();
      }
      if ((long)local_a0 < (long)uVar1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154e4);
        (*pcVar8)();
      }
      if ((long)(ulong)uVar4 <= lVar27) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154e8);
        (*pcVar8)();
      }
      local_b8.str._0_1_ = *(undefined1 *)(*(long *)(pcVar12 + 0x18) + lVar26);
      FUN_100615fec();
      puVar15 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      SVar29 = Swift::String::_init
                         (&local_b8,0x10,0,PTR___type_metadata_for_Swift_UInt8_100eadcd0,pcVar11);
      _Var10 = Swift::String::get_count(SVar29);
      pcVar14 = (char *)(2 - _Var10);
      if (SBORROW8(2,_Var10)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154ec);
        (*pcVar8)();
      }
      uVar19 = uVar19 + 1;
      repeating_01.bridgeObject = (void *)0xe100000000000000;
      repeating_01.str = &DAT_00000030;
      local_b8 = Swift::String::init(repeating_01,(__int64)pcVar14);
      pvVar13 = local_b8.bridgeObject;
      _swift_bridgeObjectRetain(pvVar13);
      SVar41.bridgeObject = puVar15;
      SVar41.str = pcVar14;
      Swift::String::append(SVar29,SVar41);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      _swift_bridgeObjectRelease(pvVar13);
      pvVar13 = local_b8.bridgeObject;
      SVar42.bridgeObject = puVar15;
      SVar42.str = pcVar14;
      Swift::String::append(local_b8,SVar42);
      _swift_bridgeObjectRelease(pvVar13);
      SVar31.bridgeObject = (void *)0xe100000000000000;
      SVar31.str = (char *)0x20;
      pcVar11 = (char *)0x20;
      SVar43.bridgeObject = puVar15;
      SVar43.str = pcVar14;
      Swift::String::append(SVar31,SVar43);
      lVar26 = lVar26 + 1;
      lVar27 = lVar27 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  _swift_release(pcVar12);
  SVar32.bridgeObject = (void *)0xe100000000000000;
  SVar32.str = (char *)0x20;
  SVar44.bridgeObject = puVar15;
  SVar44.str = pcVar14;
  Swift::String::append(SVar32,SVar44);
  local_b8.bridgeObject._0_4_ = uVar23;
  local_b8.str = (char *)param_4;
  local_b8.bridgeObject._4_4_ = uVar24;
  local_a8 = iVar21;
  local_a4 = uVar3;
  local_a2 = uVar2;
  local_a0 = uVar16;
  uStack_98 = uVar25;
  FUN_1005de7cc(&local_108,uVar18);
  pcVar14 = local_108.str;
  if (uStack_e8 == local_f0) {
    _swift_retain(param_4);
  }
  else {
    lVar22 = uStack_e8 - local_f0;
    if (lVar22 == 0 || (long)uStack_e8 < (long)local_f0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100615524);
      (*pcVar8)();
    }
    uVar19 = (ulong)(uint)local_108.bridgeObject;
    uVar4 = local_108.bridgeObject._4_4_ - (uint)local_108.bridgeObject;
    _swift_retain(param_4);
    pcVar12 = pcVar14 + 0x18;
    _swift_beginAccess(pcVar12,auStack_120,0,0);
    lVar26 = local_f0 + (ulong)local_f4 * 0x100 + (ulong)local_f2;
    lVar27 = local_f0 - uVar19;
    uVar18 = local_f0;
    do {
      if ((long)uStack_e8 <= (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154f0);
        (*pcVar8)();
      }
      if ((long)local_f0 < (long)uVar19) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154f4);
        (*pcVar8)();
      }
      if ((long)(ulong)uVar4 <= lVar27) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154f8);
        (*pcVar8)();
      }
      local_108.str._0_1_ = *(undefined1 *)(*(long *)(pcVar14 + 0x18) + lVar26);
      FUN_100615fec();
      puVar15 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      SVar29 = Swift::String::_init
                         (&local_108,0x10,0,PTR___type_metadata_for_Swift_UInt8_100eadcd0,pcVar12);
      _Var10 = Swift::String::get_count(SVar29);
      pcVar11 = (char *)(2 - _Var10);
      if (SBORROW8(2,_Var10)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006154fc);
        (*pcVar8)();
      }
      uVar18 = uVar18 + 1;
      repeating_02.bridgeObject = (void *)0xe100000000000000;
      repeating_02.str = &DAT_00000030;
      local_108 = Swift::String::init(repeating_02,(__int64)pcVar11);
      pvVar13 = local_108.bridgeObject;
      _swift_bridgeObjectRetain(pvVar13);
      SVar45.bridgeObject = puVar15;
      SVar45.str = pcVar11;
      Swift::String::append(SVar29,SVar45);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      _swift_bridgeObjectRelease(pvVar13);
      pvVar13 = local_108.bridgeObject;
      SVar46.bridgeObject = puVar15;
      SVar46.str = pcVar11;
      Swift::String::append(local_108,SVar46);
      _swift_bridgeObjectRelease(pvVar13);
      SVar33.bridgeObject = (void *)0xe100000000000000;
      SVar33.str = (char *)0x20;
      pcVar12 = (char *)0x20;
      SVar47.bridgeObject = puVar15;
      SVar47.str = pcVar11;
      Swift::String::append(SVar33,SVar47);
      lVar26 = lVar26 + 1;
      lVar27 = lVar27 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
  }
  _swift_release(pcVar14);
  SVar5.bridgeObject = pvStack_c0;
  SVar5.str = local_c8;
  _Var10 = Swift::String::get_count(SVar5);
  pcVar14 = (char *)(0x3c - _Var10);
  if (SBORROW8(0x3c,_Var10)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10061551c);
    (*pcVar8)();
  }
  repeating_03.bridgeObject = (void *)0xe100000000000000;
  repeating_03.str = (char *)0x20;
  SVar29 = Swift::String::init(repeating_03,(__int64)pcVar14);
  SVar48.bridgeObject = puVar15;
  SVar48.str = pcVar14;
  Swift::String::append(SVar29,SVar48);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  local_108.bridgeObject._0_4_ = uVar23;
  local_108.str = (char *)param_4;
  local_108.bridgeObject._4_4_ = uVar24;
  lVar22 = uVar25 - uVar16;
  local_f8 = iVar21;
  local_f4 = uVar3;
  local_f2 = uVar2;
  local_f0 = uVar16;
  uStack_e8 = uVar25;
  if (lVar22 == 0) {
    _swift_retain();
    FUN_10060fd58(&local_108);
    puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_128 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_retain();
    FUN_100624f08(0,lVar22,0);
    bVar17 = local_f2;
    uVar7 = local_f4;
    puVar20 = local_128;
    pcVar12 = local_108.str;
    uVar18 = (ulong)(uint)local_108.bridgeObject;
    uVar4 = local_108.bridgeObject._4_4_ - (uint)local_108.bridgeObject;
    pcVar14 = (char *)0x0;
    puVar15 = (undefined *)0x0;
    _swift_beginAccess(local_108.str + 0x18,auStack_140);
    lVar26 = 0;
    if (uVar16 <= uVar25) {
      lVar26 = uVar25 - uVar16;
    }
    uVar25 = uVar18 + uVar4;
    lVar27 = 0;
    if (uVar16 <= uVar25) {
      lVar27 = uVar25 - uVar16;
    }
    lVar28 = CONCAT21(uVar7,bVar17) + uVar16;
    do {
      if (lVar26 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100615500);
        (*pcVar8)();
      }
      if (uVar16 < uVar18) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100615504);
        (*pcVar8)();
      }
      if (lVar27 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100615508);
        (*pcVar8)();
      }
      bVar17 = *(byte *)(*(long *)(pcVar12 + 0x18) + lVar28);
      if (0x5d < bVar17 - 0x20) {
        bVar17 = 0x2e;
      }
      uVar25 = *(ulong *)(puVar20 + 0x10);
      local_128 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar25) {
        pcVar14 = &DAT_00000001;
        FUN_100624f08(1 < *(ulong *)(puVar20 + 0x18),uVar25 + 1);
      }
      puVar20 = local_128;
      *(ulong *)(local_128 + 0x10) = uVar25 + 1;
      local_128[uVar25 + 0x20] = bVar17;
      lVar27 = lVar27 + -1;
      lVar26 = lVar26 + -1;
      lVar28 = lVar28 + 1;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    FUN_10060fd58(&local_108);
  }
  SVar34.bridgeObject = (void *)0xe100000000000000;
  SVar34.str = (char *)0x7c;
  SVar49.bridgeObject = puVar15;
  SVar49.str = pcVar14;
  Swift::String::append(SVar34,SVar49);
  repeating_04.bridgeObject = (void *)0xe100000000000000;
  repeating_04.str = (char *)0x20;
  SVar29 = Swift::String::init(repeating_04,(__int64)param_2);
  SVar50.bridgeObject = puVar15;
  SVar50.str = param_2;
  Swift::String::append(SVar29,SVar50);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  SVar36.str = *(char **)(puVar20 + 0x10);
  SVar36.bridgeObject = param_2;
  tVar54 = Swift::String::_fromUTF8Repairing((UnsafeBufferPointer<__int8>)(puVar20 + 0x20),SVar36);
  pcVar14 = tVar54._16_8_;
  _swift_bridgeObjectRelease(puVar20);
  SVar51.bridgeObject = puVar15;
  SVar51.str = pcVar14;
  Swift::String::append(tVar54.result,SVar51);
  _swift_bridgeObjectRelease(tVar54.result.bridgeObject);
  repeating_05.bridgeObject = (void *)0xe100000000000000;
  repeating_05.str = (char *)0x20;
  SVar29 = Swift::String::init(repeating_05,(__int64)param_3);
  SVar52.bridgeObject = puVar15;
  SVar52.str = param_3;
  Swift::String::append(SVar29,SVar52);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  SVar35.bridgeObject = &SUB_e200000000000000;
  SVar35.str = (char *)0xa7c;
  SVar53.bridgeObject = puVar15;
  SVar53.str = param_3;
  Swift::String::append(SVar35,SVar53);
  auVar6._8_8_ = pvStack_c0;
  auVar6._0_8_ = local_c8;
  return auVar6;
}



/* Address: 0x100615524 | FUN_100615524 */

void FUN_100615524(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100615590);
    (*pcVar5)();
  }
  lVar1 = unaff_x20[3];
  lVar6 = unaff_x20[4];
  if (SBORROW8(lVar6,lVar1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100615594);
    (*pcVar5)();
  }
  if (((param_2 == 0) || (param_2 <= (ulong)(lVar6 - lVar1))) &&
     (lVar6 = lVar1 + param_2, SCARRY8(lVar1,param_2))) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006155a4);
    (*pcVar5)();
  }
  if (lVar6 < lVar1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100615598);
    (*pcVar5)();
  }
  if (-1 < lVar1) {
    iVar2 = *(int *)(unaff_x20 + 2);
    uVar4 = *(undefined2 *)((long)unaff_x20 + 0x14);
    uVar3 = *(undefined1 *)((long)unaff_x20 + 0x16);
    if (lVar6 <= (long)(ulong)(iVar2 - (uint)CONCAT21(uVar4,uVar3))) {
      uVar7 = *unaff_x20;
      param_1[1] = unaff_x20[1];
      *param_1 = uVar7;
      *(int *)(param_1 + 2) = iVar2;
      *(undefined2 *)((long)param_1 + 0x14) = uVar4;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      param_1[3] = lVar1;
      param_1[4] = lVar6;
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006155a0);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10061559c);
  (*pcVar5)();
}



/* Address: 0x1006155a4 | FUN_1006155a4 */

undefined1  [16] FUN_1006155a4(undefined8 param_1,ulong param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  char *pcVar5;
  __int64 _Var6;
  void *pvVar7;
  char *pcVar10;
  undefined *puVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  String SVar16;
  String SVar17;
  String repeating;
  undefined1 auVar18 [16];
  String SVar19;
  String SVar20;
  String SVar21;
  String local_98;
  undefined8 local_88;
  uint local_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined8 uStack_68;
  void *pvVar8;
  void *pvVar9;
  
  uStack_68 = 0xe000000000000000;
  uVar14 = (uint)(param_2 >> 0x20);
  uVar1 = uVar14 - (uint)param_2;
  if (uVar1 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
    SVar17.bridgeObject = param_3;
    SVar17.str = (char *)0xe000000000000000;
    pvVar9 = (void *)0xe000000000000000;
    Swift::String::reserveCapacity((ulong)(uVar1 >> 4) * 0x4f + 8,SVar17);
    local_78 = SUB84(param_3,0);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_88 = param_1;
    local_80 = (uint)param_2;
    uStack_7c = uVar14;
    _swift_retain(param_1);
    pcVar13 = (char *)0x0;
    do {
      uVar15 = uVar14 - (int)param_2;
      if (0xf < uVar15) {
        uVar15 = 0x10;
      }
      pvVar4 = (void *)(ulong)uVar15;
      FUN_10060c6b4();
      if (pvVar4 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10061576c);
        (*pcVar2)();
      }
      pvVar7 = (void *)0x0;
      pcVar10 = (char *)0x0;
      pcVar5 = pcVar13;
      pvVar8 = pvVar4;
      FUN_100614e0c();
      SVar16.bridgeObject = pvVar7;
      SVar16.str = pcVar5;
      SVar19.bridgeObject = pvVar8;
      SVar19.str = pcVar10;
      pvVar8 = pvVar7;
      Swift::String::append(SVar16,SVar19);
      _swift_release(pvVar4);
      _swift_bridgeObjectRelease(pvVar7);
      uVar12 = (ulong)(uint)((int)((ulong)pvVar9 >> 0x20) - (int)pvVar9);
      bVar3 = SCARRY8((long)pcVar13,uVar12);
      pcVar13 = pcVar13 + uVar12;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100615764);
        (*pcVar2)();
      }
      param_2 = (ulong)local_80;
      pvVar9 = pvVar8;
    } while (local_80 != uVar14);
    local_98.str = (char *)(ulong)uVar1;
    FUN_10061602c();
    puVar11 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    SVar17 = Swift::String::_init
                       (&local_98,0x10,0,PTR___type_metadata_for_Swift_Int_100eac6f8,pvVar7);
    _Var6 = Swift::String::get_count(SVar17);
    pcVar13 = (char *)(8 - _Var6);
    if (SBORROW8(8,_Var6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100615768);
      (*pcVar2)();
    }
    repeating.bridgeObject = (void *)0xe100000000000000;
    repeating.str = &DAT_00000030;
    local_98 = Swift::String::init(repeating,(__int64)pcVar13);
    pvVar9 = local_98.bridgeObject;
    _swift_bridgeObjectRetain(pvVar9);
    SVar20.bridgeObject = puVar11;
    SVar20.str = pcVar13;
    Swift::String::append(SVar17,SVar20);
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    _swift_bridgeObjectRelease(pvVar9);
    pvVar9 = local_98.bridgeObject;
    SVar21.bridgeObject = puVar11;
    SVar21.str = pcVar13;
    Swift::String::append(local_98,SVar21);
    _swift_release(param_1);
    _swift_bridgeObjectRelease(pvVar9);
  }
  auVar18._8_8_ = uStack_68;
  auVar18._0_8_ = local_70;
  return auVar18;
}



/* Address: 0x10061576c | FUN_10061576c */

undefined1  [16] FUN_10061576c(long param_1,char *param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  __int64 _Var8;
  void *pvVar9;
  char *pcVar10;
  undefined8 uVar11;
  void *pvVar12;
  char *pcVar14;
  undefined *puVar15;
  long lVar16;
  char *pcVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  char *pcVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String repeating;
  undefined1 auVar31 [16];
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String local_c8;
  ulong local_b8;
  int local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  ulong local_a0;
  uint local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  char *local_88;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined8 uStack_68;
  void *pvVar13;
  
  uVar24 = (ulong)param_3 >> 0x20;
  iVar19 = (int)param_3;
  iVar23 = (int)((ulong)param_3 >> 0x20);
  pcVar17 = (char *)(ulong)(uint)(iVar23 - iVar19);
  if ((long)pcVar17 <= param_1) {
    FUN_1006155a4(param_2,param_3,(ulong)param_4 & 0xffffffffffffff);
    auVar31._8_8_ = param_3;
    auVar31._0_8_ = param_2;
    return auVar31;
  }
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  lVar1 = param_1 + 0xf;
  if (-1 < param_1) {
    lVar1 = param_1;
  }
  lVar16 = (lVar1 >> 4) * 0x4f;
  if (SUB168(SEXT816(lVar1 >> 4) * SEXT816(0x4f),8) != lVar16 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b34);
    (*pcVar3)();
  }
  SVar30.bridgeObject = param_3;
  SVar30.str = param_2;
  pcVar10 = param_2;
  pvVar7 = param_4;
  Swift::String::reserveCapacity(lVar16 + 0x57,SVar30);
  local_78 = SUB84(param_4,0);
  local_74 = (undefined2)((ulong)param_4 >> 0x20);
  local_72 = (undefined1)((ulong)param_4 >> 0x30);
  uVar21 = param_1 / 2;
  local_88 = param_2;
  local_80 = iVar19;
  iStack_7c = iVar23;
  _swift_retain(param_2);
  uVar5 = uVar21;
  FUN_10060c6b4();
  if (uVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b50);
    (*pcVar3)();
  }
  local_98 = (uint)pcVar10;
  uVar18 = (uint)((ulong)pcVar10 >> 0x20);
  local_90 = SUB84(param_3,0);
  local_8c = (undefined2)((ulong)param_3 >> 0x20);
  local_8a = (undefined1)((ulong)param_3 >> 0x30);
  local_a0 = uVar5;
  uStack_94 = uVar18;
  if (uVar18 != local_98) {
    pcVar22 = (char *)0x0;
    do {
      uVar20 = uVar18 - (int)pcVar10;
      if (0xf < uVar20) {
        uVar20 = 0x10;
      }
      pvVar6 = (void *)(ulong)uVar20;
      FUN_10060c6b4();
      if (pvVar6 == (void *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b48);
        (*pcVar3)();
      }
      uVar25 = (ulong)(uint)((int)((ulong)pcVar10 >> 0x20) - (int)pcVar10);
      param_3 = (char *)(0x10 - uVar25);
      pvVar9 = (void *)0x0;
      pcVar10 = pcVar22;
      pvVar7 = pvVar6;
      FUN_100614e0c();
      SVar26.bridgeObject = pvVar9;
      SVar26.str = pcVar10;
      SVar32.bridgeObject = pvVar7;
      SVar32.str = param_3;
      Swift::String::append(SVar26,SVar32);
      _swift_release(pvVar6);
      _swift_bridgeObjectRelease(pvVar9);
      bVar4 = SCARRY8((long)pcVar22,uVar25);
      pcVar22 = pcVar22 + uVar25;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b2c);
        (*pcVar3)();
      }
      pcVar10 = (char *)(ulong)local_98;
    } while (local_98 != uVar18);
  }
  uVar11 = 0x8000000100daec20;
  SVar27.bridgeObject = (void *)0x8000000100daec20;
  SVar27.str = (char *)0xd00000000000004f;
  SVar33.bridgeObject = pvVar7;
  SVar33.str = param_3;
  Swift::String::append(SVar27,SVar33);
  uVar25 = uVar24 - uVar21;
  if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b38);
    (*pcVar3)();
  }
  if (uVar25 >> 0x20 == 0) {
    if (uVar24 < uVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b40);
      (*pcVar3)();
    }
    local_80 = (int)uVar25;
    uVar21 = uVar21 & 0xffffffff;
    FUN_10060c6b4();
    if (uVar21 != 0) {
      local_b0 = (int)uVar11;
      iVar19 = (int)((ulong)uVar11 >> 0x20);
      local_a8 = SUB84(param_3,0);
      local_a4 = (undefined2)((ulong)param_3 >> 0x20);
      local_a2 = (undefined1)((ulong)param_3 >> 0x30);
      pvVar6 = (void *)(0x10 - (uVar25 & 0xf));
      pvVar7 = (void *)(ulong)(uint)(iVar19 - local_b0);
      if (pvVar6 <= (void *)(ulong)(uint)(iVar19 - local_b0)) {
        pvVar7 = pvVar6;
      }
      pvVar6 = pvVar7;
      local_b8 = uVar21;
      iStack_ac = iVar19;
      FUN_10060c6b4();
      if (pvVar6 != (void *)0x0) {
        pvVar12 = (void *)(0x10 - (long)pvVar7);
        pcVar10 = (char *)(uVar25 & 0xfffffff0);
        pcVar22 = (char *)0x0;
        pvVar9 = pvVar6;
        FUN_100614e0c();
        SVar28.bridgeObject = pvVar12;
        SVar28.str = pcVar10;
        SVar34.bridgeObject = pvVar9;
        SVar34.str = pcVar22;
        pvVar9 = pvVar12;
        Swift::String::append(SVar28,SVar34);
        _swift_bridgeObjectRelease(pvVar12);
        if (local_b0 != iVar19) {
          pcVar10 = (char *)((long)pvVar7 + uVar25);
          do {
            uVar18 = iVar19 - local_b0;
            if (0xf < uVar18) {
              uVar18 = 0x10;
            }
            pvVar7 = (void *)(ulong)uVar18;
            FUN_10060c6b4();
            if (pvVar7 == (void *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b4c);
              (*pcVar3)();
            }
            pvVar12 = (void *)0x0;
            pcVar14 = (char *)0x0;
            pcVar22 = pcVar10;
            pvVar13 = pvVar7;
            FUN_100614e0c();
            SVar29.bridgeObject = pvVar12;
            SVar29.str = pcVar22;
            SVar35.bridgeObject = pvVar13;
            SVar35.str = pcVar14;
            pvVar13 = pvVar12;
            Swift::String::append(SVar29,SVar35);
            _swift_release(pvVar7);
            _swift_bridgeObjectRelease(pvVar12);
            uVar24 = (ulong)(uint)((int)((ulong)pvVar9 >> 0x20) - (int)pvVar9);
            bVar4 = SCARRY8((long)pcVar10,uVar24);
            pcVar10 = pcVar10 + uVar24;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b30);
              (*pcVar3)();
            }
            pvVar9 = pvVar13;
          } while (local_b0 != iVar19);
        }
        local_c8.str = pcVar17;
        FUN_10061602c();
        puVar15 = PTR___type_metadata_for_Swift_Int_100eac6f8;
        SVar30 = Swift::String::_init
                           (&local_c8,0x10,0,PTR___type_metadata_for_Swift_Int_100eac6f8,pvVar12);
        _Var8 = Swift::String::get_count(SVar30);
        pcVar17 = (char *)(8 - _Var8);
        if (!SBORROW8(8,_Var8)) {
          repeating.bridgeObject = (void *)0xe100000000000000;
          repeating.str = &DAT_00000030;
          local_c8 = Swift::String::init(repeating,(__int64)pcVar17);
          pvVar7 = local_c8.bridgeObject;
          _swift_bridgeObjectRetain(pvVar7);
          SVar36.bridgeObject = puVar15;
          SVar36.str = pcVar17;
          Swift::String::append(SVar30,SVar36);
          _swift_bridgeObjectRelease(SVar30.bridgeObject);
          _swift_bridgeObjectRelease(pvVar7);
          pvVar7 = local_c8.bridgeObject;
          SVar37.bridgeObject = puVar15;
          SVar37.str = pcVar17;
          Swift::String::append(local_c8,SVar37);
          _swift_release(param_2);
          _swift_release(uVar5);
          _swift_release(uVar21);
          _swift_bridgeObjectRelease(pvVar7);
          _swift_release(pvVar6);
          auVar2._8_8_ = uStack_68;
          auVar2._0_8_ = local_70;
          return auVar2;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b44);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b58);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b54);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100615b3c);
  (*pcVar3)();
}



/* Address: 0x100615b58 | FUN_100615b58 */

undefined * FUN_100615b58(void)

{
  return &DAT_100c67c40;
}



/* Address: 0x100615b64 | FUN_100615b64 */

undefined * FUN_100615b64(void)

{
  return &DAT_100c67c41;
}



/* Address: 0x100615b70 | FUN_100615b70 */

undefined1 * FUN_100615b70(int param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined1 *)(ulong)(param_1 - 0x30U);
  if ((param_1 - 0x30U & 0xff) < 10) {
    return puVar1;
  }
  if ((param_1 - 0x61U & 0xff) < 6) {
    return (undefined1 *)(ulong)(param_1 - 0x57);
  }
  if ((param_1 - 0x41U & 0xff) < 6) {
    return (undefined1 *)(ulong)(param_1 - 0x37);
  }
  FUN_100615ce0();
  puVar2 = &DAT_100eeadd0;
  _swift_allocError(&DAT_100eeadd0,puVar1,0,0);
  *puVar1 = 1;
  _swift_willThrow();
  return puVar2;
}



/* Address: 0x100615c04 | FUN_100615c04 */

void FUN_100615c04(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  ulong param_6)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_5 >> 0x3b) & 1;
  if ((param_6 & 0x1000000000000000) == 0) {
    uVar2 = 1;
  }
  if ((param_2 & 0xc) == 4L << (ulong)uVar2) {
    FUN_1000740a8(param_2,param_5,param_6);
  }
  if ((param_1 & 0xc) == 4L << (ulong)uVar2) {
    FUN_1000740a8(param_1,param_5,param_6);
  }
  if (((param_2 >> 0xe <= param_4 >> 0xe) && (param_3 >> 0xe <= param_1 >> 0xe)) &&
     (param_1 >> 0xe <= param_2 >> 0xe)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100615ce0);
  (*pcVar1)();
}



/* Address: 0x100615ce0 | FUN_100615ce0 */

void FUN_100615ce0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7040 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67d14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67d14,&DAT_100eeadd0);
  DAT_100fd7040 = pTVar1;
  return;
}



/* Address: 0x100615d20 | FUN_100615d20 */

undefined8 FUN_100615d20(long param_1,uint param_2,long param_3,byte param_4)

{
  uint uVar1;
  
  uVar1 = param_2 >> 6 & 3;
  if (uVar1 == 0) {
    if (param_4 < 0x40) {
      if ((param_2 & 0xff) == 1) {
        if (param_4 == 1) {
          return 1;
        }
      }
      else if ((param_4 != 1) && (param_1 == param_3)) {
        return 1;
      }
    }
  }
  else if (uVar1 == 1) {
    if ((param_4 & 0xc0) == 0x40) {
      if ((param_2 & 0x3f) == 1) {
        if ((param_4 & 0x3f) == 1) {
          return 1;
        }
      }
      else if (((param_4 & 0x3f) != 1) && (param_1 == param_3)) {
        return 1;
      }
    }
  }
  else if ((char)param_4 < -0x40) {
    if ((param_2 & 0x3f) == 1) {
      if ((param_4 & 0x3f) == 1) {
        return 1;
      }
    }
    else if (((param_4 & 0x3f) != 1) && (param_1 == param_3)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100615e00 | thunk_FUN_100615e04 */

void thunk_FUN_100615e04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67c84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67c84,&DAT_100eead58);
  DAT_100fd7048 = pTVar1;
  return;
}



/* Address: 0x100615e04 | FUN_100615e04 */

void FUN_100615e04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67c84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67c84,&DAT_100eead58);
  DAT_100fd7048 = pTVar1;
  return;
}



/* Address: 0x100615e44 | thunk_FUN_100615e48 */

void thunk_FUN_100615e48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67cec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67cec,&DAT_100eeacc0);
  DAT_100fd7050 = pTVar1;
  return;
}



/* Address: 0x100615e48 | FUN_100615e48 */

void FUN_100615e48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67cec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67cec,&DAT_100eeacc0);
  DAT_100fd7050 = pTVar1;
  return;
}



/* Address: 0x100615e88 | FUN_100615e88 */

undefined1  [16] FUN_100615e88(void)

{
  return ZEXT816(0x100eeacc0);
}



/* Address: 0x100615e98 | thunk_FUN_100615e9c */

int thunk_FUN_100615e9c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 2) >> 6) | (*(byte *)(param_1 + 2) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100615e9c | FUN_100615e9c */

int FUN_100615e9c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 2) >> 6) | (*(byte *)(param_1 + 2) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100615ef0 | thunk_FUN_100615ef4 */

void thunk_FUN_100615ef4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      *(byte *)(param_1 + 1) = (((byte)(-param_2 >> 2) & 0x1f) + (char)param_2 * -0x20) * '\x02';
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x100615ef4 | FUN_100615ef4 */

void FUN_100615ef4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7e) {
    if (0x7d < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      *(byte *)(param_1 + 1) = (((byte)(-param_2 >> 2) & 0x1f) + (char)param_2 * -0x20) * '\x02';
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0x7e);
    if (0x7d < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x100615f48 | FUN_100615f48 */

byte FUN_100615f48(long param_1)

{
  return *(byte *)(param_1 + 8) >> 6;
}



/* Address: 0x100615f54 | FUN_100615f54 */

void FUN_100615f54(long param_1)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0x3f;
  return;
}



/* Address: 0x100615f64 | FUN_100615f64 */

void FUN_100615f64(long param_1,char param_2)

{
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 1 | param_2 << 6;
  return;
}



/* Address: 0x100615f78 | FUN_100615f78 */

undefined1  [16] FUN_100615f78(void)

{
  return ZEXT816(0x100eead58);
}



/* Address: 0x100615f88 | FUN_100615f88 */

undefined1  [16] FUN_100615f88(void)

{
  return ZEXT816(0x100eeadd0);
}



/* Address: 0x100615f98 | FUN_100615f98 */

undefined1  [16] FUN_100615f98(void)

{
  return ZEXT816(0x100eeae68);
}



/* Address: 0x100615fa8 | thunk_FUN_100615fac */

void thunk_FUN_100615fac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67e18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67e18,&DAT_100eeae68);
  DAT_100fd7058 = pTVar1;
  return;
}



/* Address: 0x100615fac | FUN_100615fac */

void FUN_100615fac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67e18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67e18,&DAT_100eeae68);
  DAT_100fd7058 = pTVar1;
  return;
}



/* Address: 0x100615fec | FUN_100615fec */

void FUN_100615fec(void)

{
  undefined *puVar1;
  
  if (DAT_100fd7060 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int8_>Swift__BinaryInteger_100eadce0;
  _swift_getWitnessTable
            (PTR_Swift____int8_>Swift__BinaryInteger_100eadce0,
             PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  DAT_100fd7060 = puVar1;
  return;
}



/* Address: 0x10061602c | FUN_10061602c */

void FUN_10061602c(void)

{
  undefined *puVar1;
  
  if (DAT_100fd7068 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fd7068 = puVar1;
  return;
}



/* Address: 0x10061606c | thunk_FUN_10061489c */

void thunk_FUN_10061489c(void)

{
  FUN_10061489c();
  return;
}



/* Address: 0x100616070 | thunk_FUN_100614980 */

void thunk_FUN_100614980(void)

{
  thunk_FUN_100614980();
  return;
}



/* Address: 0x100616074 | thunk_FUN_100615ef4 */

void thunk_FUN_100615ef4(void)

{
  thunk_FUN_100615ef4();
  return;
}



/* Address: 0x100616078 | thunk_FUN_1006148e8 */

void thunk_FUN_1006148e8(void)

{
  thunk_FUN_1006148e8();
  return;
}



/* Address: 0x10061607c | thunk_FUN_100614934 */

void thunk_FUN_100614934(void)

{
  thunk_FUN_100614934();
  return;
}



/* Address: 0x100616080 | thunk_FUN_100615e9c */

void thunk_FUN_100615e9c(void)

{
  thunk_FUN_100615e9c();
  return;
}



/* Address: 0x100616084 | thunk_FUN_1006148ac */

void thunk_FUN_1006148ac(void)

{
  FUN_1006148ac();
  return;
}



/* Address: 0x100616088 | FUN_100616088 */

void FUN_100616088(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7,undefined *param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  undefined1 auStack_80 [16];
  undefined *local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined1 local_39;
  
  puVar1 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
  lVar3 = *(long *)(param_8 + -8);
  local_60 = param_2 - (param_6 & 0xffffffff);
  if (((long)(param_6 & 0xffffffff) <= param_2) &&
     (lStack_58 = *(long *)(lVar3 + 0x40), -1 < lStack_58)) {
    local_48 = (int)param_6;
    iStack_44 = (int)(param_6 >> 0x20);
    if (local_60 <= (long)((ulong)(uint)(iStack_44 - local_48) - lStack_58)) {
      lStack_58 = lStack_58 + local_60;
      uStack_68 = param_9;
      if (param_8 == PTR___type_metadata_for_Swift_UInt8_100eadcd0) {
        local_70 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
        FUN_100611110(FUN_100616760,auStack_80,param_5,param_6,param_7 & 0xffffffffffffff,
                      PTR___type_metadata_for_Swift_UInt8_100eadcd0,
                      PTR___type_metadata_for_Swift_Never_100eadc38,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar1);
      }
      else {
        local_40 = (undefined4)param_7;
        local_3c = (undefined2)(param_7 >> 0x20);
        local_3a = (undefined1)(param_7 >> 0x30);
        local_70 = param_8;
        local_50 = param_5;
        local_39 = param_3;
        OVar2 = Swift::Optional::typeMetadataAccessor();
        FUN_100611110(param_1,FUN_100616714,auStack_80,param_5,param_6,param_7 & 0xffffffffffffff,
                      OVar2.value,PTR___type_metadata_for_Swift_Never_100eadc38,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001006160ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1,1,1,param_8);
  return;
}



/* Address: 0x1006161f4 | FUN_1006161f4 */

void FUN_1006161f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  FUN_100616240(uVar2,*(undefined4 *)(unaff_x20 + 0xc),param_2,param_4,param_4,param_5);
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100616238);
    (*pcVar1)();
  }
  if (iVar3 == 0) {
    if (!CARRY4(*(uint *)(unaff_x20 + 0xc),uVar2)) {
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + uVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100616240);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10061623c);
  (*pcVar1)();
}



/* Address: 0x100616240 | FUN_100616240 */

void FUN_100616240(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  if (param_3 == '\0') {
    Swift::FixedWidthInteger::get_bigEndian();
  }
  else {
    Swift::FixedWidthInteger::get_littleEndian();
  }
  FUN_1006167fc(&local_78,auStack_80 + -(lVar2 + 0xfU & 0xfffffffffffffff0),FUN_1006167a8,auStack_70
                ,param_5,PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(lVar3 + 8))(auStack_80 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_78);
}



/* Address: 0x100616348 | FUN_100616348 */

int FUN_100616348(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = param_1 - 1U | param_1 - 1U >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = uVar2 | uVar2 >> 0x10;
    iVar1 = uVar2 + 1;
    if (uVar2 == 0xffffffff) {
      iVar1 = -1;
    }
    return iVar1;
  }
  return 1;
}



/* Address: 0x100616378 | FUN_100616378 */

void FUN_100616378(undefined8 param_1,char param_2)

{
  if (param_2 == '\0') {
    Swift::FixedWidthInteger::get_bigEndian();
  }
  else {
    Swift::FixedWidthInteger::get_littleEndian();
  }
  return;
}



/* Address: 0x1006163b4 | FUN_1006163b4 */

void FUN_1006163b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  uint uVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 local_68;
  
  local_70 = param_1;
  local_68 = param_5;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar9 = (long)&local_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_4 + -8);
  uVar6 = *(ulong *)(lVar11 + 0x40);
  lVar7 = lVar9 - (uVar6 + 0xf & 0xfffffffffffffff0);
  uVar1 = *(uint *)(unaff_x20 + 8);
  FUN_100616088(lVar9,uVar1,param_2);
  lVar3 = lVar9;
  (**(code **)(lVar11 + 0x30))(lVar9,1,param_4);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar10 + 8))(lVar9,CONCAT71(extraout_var,OVar2.value));
    uVar4 = 1;
    uVar5 = local_70;
  }
  else {
    pcVar8 = *(code **)(lVar11 + 0x20);
    (*pcVar8)(lVar7,lVar9,param_4);
    uVar5 = local_70;
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100616514);
      (*pcVar8)();
    }
    if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100616518);
      (*pcVar8)();
    }
    if (CARRY4(uVar1,(uint)uVar6)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10061651c);
      (*pcVar8)();
    }
    *(uint *)(unaff_x20 + 8) = uVar1 + (uint)uVar6;
    (*pcVar8)(local_70,lVar7,param_4);
    uVar4 = 0;
  }
  (**(code **)(lVar11 + 0x38))(uVar5,uVar4,1,param_4);
  return;
}



/* Address: 0x10061651c | FUN_10061651c */

void FUN_10061651c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  uint in_w7;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_stack_00000000;
  long in_stack_00000008;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  uint local_b4;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  puVar1 = 
  PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898;
  local_b4 = in_w7 & 0xff;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(in_stack_00000008 + 8) + 0x18) + 0x10);
  lVar2 = 0;
  local_d0 = param_3;
  local_c8 = param_4;
  local_c0 = param_5;
  _swift_getAssociatedTypeWitness
            (0,uVar5,in_stack_00000000,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar3 = (long)&local_d0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(in_stack_00000000 + -8);
  lVar4 = lVar3 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedConformanceWitness
            (uVar5,in_stack_00000000,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
            );
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar3,&DAT_100c6c6b8,0x100,lVar2,uVar5);
  Swift::ExpressibleByIntegerLiteral::_init();
  uStack_88 = local_d0;
  local_80 = local_c8;
  uStack_78 = local_c0;
  local_90 = param_2;
  FUN_1006167fc(lVar4,FUN_1006172f4,auStack_a0,in_stack_00000000,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (local_b4 == 0) {
    Swift::FixedWidthInteger::get_bigEndian();
  }
  else {
    Swift::FixedWidthInteger::get_littleEndian();
  }
  (**(code **)(lVar6 + 8))(lVar4,in_stack_00000000);
  (**(code **)(lVar6 + 0x38))(param_1,0,1,in_stack_00000000);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100616714 | FUN_100616714 */

void FUN_100616714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10061651c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                (ulong)*(uint7 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x47),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x100616760 | FUN_100616760 */

void FUN_100616760(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 local_11;
  
  local_11 = *(undefined1 *)(param_2 + *(long *)(unaff_x20 + 0x20));
  _swift_dynamicCast(param_1,&local_11,PTR___type_metadata_for_Swift_UInt8_100eadcd0,
                     *(undefined8 *)(unaff_x20 + 0x10),7);
  return;
}



/* Address: 0x1006167a8 | FUN_1006167a8 */

void FUN_1006167a8(ulong *param_1,uint param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((long)*(ulong *)(unaff_x20 + 0x18) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006167f8);
    (*pcVar1)();
  }
  if (*(ulong *)(unaff_x20 + 0x18) >> 0x20 == 0) {
    FUN_1006124ec();
    *param_1 = (ulong)param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006167fc);
  (*pcVar1)();
}



/* Address: 0x1006167fc | FUN_1006167fc */

void FUN_1006167fc(long param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_2)(param_1,param_1 + *(long *)(*(long *)(param_4 + -8) + 0x40),
             &stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_8,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x100616884 | FUN_100616884 */

void FUN_100616884(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100616088(param_4 & 0xffffffff,param_1,param_3,param_3,param_4,param_5 & 0xffffffffffffff,
                param_6,param_7);
  return;
}



/* Address: 0x1006168a8 | FUN_1006168a8 */

void FUN_1006168a8(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  __int64 _Var3;
  undefined8 uVar4;
  __uint64 _Var5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long local_b0;
  __int64 local_a8;
  long local_68;
  
  lVar12 = *(long *)(param_3 + 8);
  lVar6 = *(long *)(lVar12 + 0x18);
  uVar13 = *(undefined8 *)(lVar6 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar13,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  uVar7 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_b0 - uVar7;
  lVar15 = lVar8 - uVar7;
  lVar11 = *(long *)(param_2 + -8);
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar15 - uVar7;
  lVar10 = lVar9 - uVar7;
  lVar16 = lVar10 - uVar7;
  bVar1 = Swift::BinaryInteger::get_isSigned();
  if (bVar1) {
    _Var3 = Swift::BinaryInteger::get_bitWidth();
    if (_Var3 < 0x40) {
LAB_100616acc:
      _Var5 = Swift::BinaryInteger::get__lowWord();
      if (_Var5 != 0) goto LAB_100616ae0;
    }
    else {
      local_68 = 0;
      FUN_10061602c();
      Swift::BinaryInteger::_init
                (lVar16,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var3,param_2,lVar12);
      bVar1 = Swift::Equatable::___infix();
      (**(code **)(lVar11 + 8))(lVar16,param_2);
      if (!bVar1) goto LAB_100616ae0;
    }
LAB_100616cc4:
    _swift_getAssociatedConformanceWitness
              (uVar13,param_2,lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar15,&DAT_100c30340,0x200,lVar2,uVar13);
    Swift::ExpressibleByIntegerLiteral::_init();
  }
  else {
    bVar1 = Swift::BinaryInteger::get_isSigned();
    _Var3 = Swift::BinaryInteger::get_bitWidth();
    if (bVar1) {
      if (_Var3 < 0x41) {
        uVar4 = uVar13;
        _swift_getAssociatedConformanceWitness
                  (uVar13,param_2,lVar2,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar15,&DAT_100c6c6b8,0x100,lVar2,uVar4);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar1 = Swift::Comparable::>__infix();
        (**(code **)(lVar11 + 8))(lVar16,param_2);
        if (bVar1) goto LAB_100616acc;
      }
      else {
LAB_100616c5c:
        local_68 = 0;
        FUN_10061602c();
        Swift::BinaryInteger::_init
                  (lVar16,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var3,param_2,lVar12
                  );
        bVar1 = Swift::Equatable::___infix();
        (**(code **)(lVar11 + 8))(lVar16,param_2);
        if (bVar1) goto LAB_100616cc4;
      }
    }
    else {
      if (0x3f < _Var3) goto LAB_100616c5c;
      _Var5 = Swift::BinaryInteger::get__lowWord();
      if (_Var5 == 0) goto LAB_100616cc4;
    }
LAB_100616ae0:
    local_b0 = lVar12;
    _swift_getAssociatedConformanceWitness
              (uVar13,param_2,lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar15,&DAT_100c30340,0x200,lVar2,uVar13);
    Swift::ExpressibleByIntegerLiteral::_init();
    local_a8 = Swift::FixedWidthInteger::get_bitWidth();
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar8,&DAT_100c30340,0x200,lVar2,uVar13);
    Swift::ExpressibleByIntegerLiteral::_init();
    Swift::AdditiveArithmetic::__infix(lVar10,unaff_x20,lVar9,param_2,*(undefined8 *)(lVar6 + 8));
    pcVar14 = *(code **)(lVar11 + 8);
    (*pcVar14)(lVar9,param_2);
    _Var3 = Swift::FixedWidthInteger::get_leadingZeroBitCount();
    (*pcVar14)(lVar10,param_2);
    if (SBORROW8(local_a8,_Var3)) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100616d40);
      (*pcVar14)();
    }
    local_68 = local_a8 - _Var3;
    FUN_10061602c();
    Swift::BinaryInteger::_<<_infix
              (param_1,lVar16,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,lVar10,param_2,
               local_b0);
    (*pcVar14)(lVar16,param_2);
  }
  return;
}



/* Address: 0x100616d40 | FUN_100616d40 */

void FUN_100616d40(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  __uint64 _Var6;
  __int64 _Var7;
  __int64 _Var8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  long local_68;
  
  lVar9 = *(long *)(param_3 + 8);
  uVar10 = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10);
  lVar3 = 0;
  local_78 = param_3;
  local_70 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar10,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  puVar13 = auStack_80 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_2 + -8);
  lVar12 = (long)puVar13 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if (bVar2) {
    lVar4 = Swift::BinaryInteger::get_bitWidth();
joined_r0x000100616ec0:
    if (0x3f < lVar4) {
LAB_100616fa4:
      local_68 = 0;
      FUN_10061602c();
      Swift::BinaryInteger::_init
                (lVar12,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,lVar4,param_2,lVar9);
      bVar2 = Swift::Equatable::___infix();
      (**(code **)(lVar11 + 8))(lVar12,param_2);
      if (!bVar2) goto LAB_100616ed8;
      goto LAB_100617000;
    }
  }
  else {
    bVar2 = Swift::BinaryInteger::get_isSigned();
    lVar4 = Swift::BinaryInteger::get_bitWidth();
    if (!bVar2) goto joined_r0x000100616ec0;
    if (0x40 < lVar4) goto LAB_100616fa4;
    uVar5 = uVar10;
    _swift_getAssociatedConformanceWitness
              (uVar10,param_2,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar13,&DAT_100c6c6b8,0x100,lVar3,uVar5);
    Swift::ExpressibleByIntegerLiteral::_init();
    bVar2 = Swift::Comparable::>__infix();
    (**(code **)(lVar11 + 8))(lVar12,param_2);
    if (!bVar2) goto LAB_100616ed8;
  }
  _Var6 = Swift::BinaryInteger::get__lowWord();
  if (_Var6 != 0) {
LAB_100616ed8:
    _swift_getAssociatedConformanceWitness
              (uVar10,param_2,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar13,&DAT_100c30340,0x200,lVar3,uVar10);
    Swift::ExpressibleByIntegerLiteral::_init();
    _Var7 = Swift::FixedWidthInteger::get_bitWidth();
    if (SBORROW8(_Var7,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061707c);
      (*pcVar1)();
    }
    _Var8 = Swift::FixedWidthInteger::get_leadingZeroBitCount();
    if (!SBORROW8(_Var7 + -1,_Var8)) {
      local_68 = (_Var7 + -1) - _Var8;
      FUN_10061602c();
      Swift::BinaryInteger::_<<_infix
                (local_70,lVar12,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var8,param_2
                 ,lVar9);
      (**(code **)(lVar11 + 8))(lVar12,param_2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100617080);
    (*pcVar1)();
  }
LAB_100617000:
  _swift_getAssociatedConformanceWitness
            (uVar10,param_2,lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
            );
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar13,&DAT_100c6c6b8,0x100,lVar3,uVar10);
  Swift::ExpressibleByIntegerLiteral::_init();
  return;
}



/* Address: 0x100617080 | FUN_100617080 */

undefined1 * FUN_100617080(void)

{
  if (DAT_100fd7070 != -1) {
    _swift_once(&DAT_100fd7070,FUN_100617250);
  }
  return &DAT_101057be7;
}



/* Address: 0x1006170c0 | FUN_1006170c0 */

void FUN_1006170c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_68 = (undefined4)param_4;
  local_62 = (undefined1)((ulong)param_4 >> 0x30);
  local_64 = (undefined2)((ulong)param_4 >> 0x20);
  local_8c = param_5;
  local_88 = param_7;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar8 = auStack_90 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_6 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = puVar8 + -uVar5;
  lVar11 = (long)puVar10 - uVar5;
  FUN_1006163b4(puVar8,local_8c);
  puVar2 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,param_6);
  if ((int)puVar2 == 1) {
    _swift_release(param_2);
    pcVar6 = *(code **)(lVar7 + 8);
    puVar10 = puVar8;
    lVar7 = CONCAT71(extraout_var,OVar1.value);
  }
  else {
    pcVar6 = *(code **)(lVar9 + 0x20);
    (*pcVar6)(puVar10,puVar8,param_6);
    _swift_release(param_2);
    if ((int)local_70 == (int)((ulong)param_3 >> 0x20)) {
      (*pcVar6)(lVar11,puVar10,param_6);
      uVar3 = local_80;
      (*pcVar6)(local_80,lVar11,param_6);
      uVar4 = 0;
      goto LAB_100617220;
    }
    pcVar6 = *(code **)(lVar9 + 8);
    lVar7 = param_6;
  }
  (*pcVar6)(puVar10,lVar7);
  uVar4 = 1;
  uVar3 = local_80;
LAB_100617220:
  (**(code **)(lVar9 + 0x38))(uVar3,uVar4,1,param_6);
  return;
}



/* Address: 0x100617250 | FUN_100617250 */

void FUN_100617250(void)

{
  DAT_101057be7 = 1;
  return;
}



/* Address: 0x100617260 | FUN_100617260 */

undefined1 FUN_100617260(void)

{
  if (DAT_100fd7070 != -1) {
    _swift_once(&DAT_100fd7070,FUN_100617250);
  }
  return DAT_101057be7;
}



/* Address: 0x1006172a0 | thunk_FUN_1006172a4 */

void thunk_FUN_1006172a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7078 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67e40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67e40,&DAT_100eeaf60);
  DAT_100fd7078 = pTVar1;
  return;
}



/* Address: 0x1006172a4 | FUN_1006172a4 */

void FUN_1006172a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7078 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67e40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67e40,&DAT_100eeaf60);
  DAT_100fd7078 = pTVar1;
  return;
}



/* Address: 0x1006172e4 | FUN_1006172e4 */

undefined1  [16] FUN_1006172e4(void)

{
  return ZEXT816(0x100eeaf60);
}



/* Address: 0x1006172f4 | FUN_1006172f4 */

void FUN_1006172f4(void *param_1)

{
  long unaff_x20;
  
  if ((*(long *)(unaff_x20 + 0x10) != 0) && (param_1 != (void *)0x0)) {
    _memmove(param_1,(void *)(*(long *)(unaff_x20 + 0x10) + *(long *)(unaff_x20 + 0x20)),
             *(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x20 + 0x20));
    return;
  }
  return;
}



/* Address: 0x100617314 | FUN_100617314 */

undefined * FUN_100617314(void)

{
  return &DAT_100c67ec0;
}



/* Address: 0x100617320 | FUN_100617320 */

undefined * FUN_100617320(void)

{
  return &DAT_100c67ec1;
}



/* Address: 0x10061732c | FUN_10061732c */

code * FUN_10061732c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                    long param_5,long param_6)

{
  undefined4 uVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  code *pcVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong local_a0;
  long local_98;
  long lStack_90;
  undefined1 *local_88;
  undefined4 local_7c;
  code *local_78;
  undefined1 local_58 [8];
  
  local_78 = (code *)param_4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_90 = CONCAT71(extraout_var,OVar3.value);
  local_98 = *(long *)(lStack_90 + -8);
  local_88 = (undefined1 *)
             ((long)&local_a0 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = *(long *)(param_5 + -8);
  uVar7 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)local_88 - uVar7;
  lVar12 = lVar9 - uVar7;
  local_a0 = (ulong)*(uint *)(unaff_x20 + 0xc);
  uVar11 = *(undefined8 *)(*(long *)(param_6 + 8) + 0x18);
  Swift::AdditiveArithmetic::get_zero();
  local_7c = (undefined4)param_1;
  lVar4 = lVar12;
  FUN_1006161f4(lVar12,param_1,param_5,param_5,param_6);
  pcVar8 = *(code **)(lVar10 + 8);
  (*pcVar8)(lVar12,param_5);
  (*param_3)();
  uVar1 = local_7c;
  puVar6 = local_88;
  pcVar2 = pcVar8;
  if (unaff_x21 == 0) {
    pcVar2 = (code *)(lVar4 + unaff_x20);
    local_78 = pcVar8;
    if (SCARRY8(lVar4,unaff_x20)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100617544);
      (*pcVar2)();
    }
    FUN_10061602c();
    Swift::Numeric::_init
              (puVar6,local_58,PTR___type_metadata_for_Swift_Int_100eac6f8,unaff_x20,param_5,uVar11)
    ;
    puVar5 = puVar6;
    (**(code **)(lVar10 + 0x30))(puVar6,1,param_5);
    if ((int)puVar5 == 1) {
      (**(code **)(local_98 + 8))(puVar6,lStack_90);
      FUN_100617544();
      _swift_allocError(&DAT_100eeb010,puVar6,0,0);
      *puVar6 = 0;
      _swift_willThrow();
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar9,puVar6,param_5);
      FUN_100616240(lVar9,local_a0,uVar1,param_5,param_5,param_6);
      (*local_78)(lVar9,param_5);
    }
  }
  return pcVar2;
}


