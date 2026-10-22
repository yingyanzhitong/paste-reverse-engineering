/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004df440 | FUN_1004df440 */

void FUN_1004df440(__int64 param_1)

{
  void *pvVar1;
  char *pcVar2;
  String SVar3;
  uint6 uVar4;
  String SVar5;
  Hasher HVar6;
  Hasher HVar7;
  String *unaff_x20;
  undefined1 auStack_f8 [72];
  void *local_b0;
  char *pcStack_a8;
  void *pvStack_a0;
  char *pcStack_98;
  void *local_90;
  char *pcStack_88;
  void *pvStack_80;
  char *pcStack_78;
  void *local_70;
  char *pcStack_68;
  void *local_60;
  
  SVar3 = *unaff_x20;
  pcStack_88 = unaff_x20[4].str;
  local_90 = unaff_x20[3].bridgeObject;
  pcStack_78 = unaff_x20[5].str;
  pvStack_80 = unaff_x20[4].bridgeObject;
  pcStack_68 = unaff_x20[6].str;
  local_70 = unaff_x20[5].bridgeObject;
  local_60 = unaff_x20[6].bridgeObject;
  HVar7.unknown = unaff_x20[7].str;
  pcStack_a8 = unaff_x20[2].str;
  local_b0 = unaff_x20[1].bridgeObject;
  pcStack_98 = unaff_x20[3].str;
  pvStack_a0 = unaff_x20[2].bridgeObject;
  pvVar1 = unaff_x20[7].bridgeObject;
  SVar5 = unaff_x20[7];
  pcVar2 = unaff_x20[8].str;
  uVar4 = *(uint6 *)&unaff_x20[1].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_f8,SVar3);
  HVar6.unknown = (undefined *)(ulong)uVar4;
  FUN_100589664(auStack_f8);
  FUN_10052946c(auStack_f8);
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar6);
    HVar7.unknown = HVar6.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar6);
    Swift::String::hash((Hasher)auStack_f8,SVar5);
  }
  if (pcVar2 == (char *)0x0) {
    HVar6.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar7);
  }
  else {
    Swift::Hasher::_combine(1,HVar7);
    HVar6.unknown = auStack_f8;
    FUN_1004df778(HVar6.unknown,pcVar2);
  }
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1004df540 | FUN_1004df540 */

void FUN_1004df540(void)

{
  FUN_1004dee90();
  return;
}



/* Address: 0x1004df554 | FUN_1004df554 */

uint FUN_1004df554(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  local_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  local_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  local_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  local_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  local_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  local_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  local_30 = param_2[0x10];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  local_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_1004dfa7c(&local_140,&local_b0);
  return uVar1 & 1;
}



/* Address: 0x1004df5d4 | FUN_1004df5d4 */

undefined * FUN_1004df5d4(void)

{
  return &DAT_100edb020;
}



/* Address: 0x1004df5e0 | FUN_1004df5e0 */

undefined1  [16] FUN_1004df5e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dab4f0;
  auVar1._0_8_ = 0xd000000000000019;
  return auVar1;
}



/* Address: 0x1004df5fc | FUN_1004df5fc */

String FUN_1004df5fc(void)

{
  String SVar1;
  
  FUN_1004e06d8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004df624 | FUN_1004df624 */

String FUN_1004df624(void)

{
  String SVar1;
  
  FUN_1004e06d8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004df64c | FUN_1004df64c */

void FUN_1004df64c(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fcc5a8;
  FUN_1000f7830(&DAT_100fcc5a8,&DAT_100c523f0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004e06d8();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1004df714 | FUN_1004df714 */

void FUN_1004df714(void)

{
  Hasher HVar1;
  
  HVar1 = Swift::Hasher::init(0);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004df748 | FUN_1004df748 */

void FUN_1004df748(__int64 param_1)

{
  Hasher HVar1;
  
  HVar1 = Swift::Hasher::init(param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004df778 | FUN_1004df778 */

void FUN_1004df778(undefined8 *param_1,char *param_2)

{
  String *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  Hasher HVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  uVar15 = 1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((param_2[0x20] & 0x3fU) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_2 + 0x40);
  HVar11.unknown = param_2;
  _swift_bridgeObjectRetain(param_2);
  local_d8 = 0;
  lVar16 = 0;
  while( true ) {
    while (uVar17 == 0) {
      bVar10 = SCARRY8(lVar16,1);
      lVar16 = lVar16 + 1;
      if (bVar10) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1004df90c);
        (*pcVar9)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar16) goto LAB_1004df8d4;
      uVar17 = *(ulong *)((long)(param_2 + 0x40) + lVar16 * 8);
    }
    uVar13 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar16 << 6;
    pSVar1 = (String *)(*(long *)(param_2 + 0x30) + uVar13 * 0x10);
    pcVar12 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar8 = *pSVar1;
    puVar14 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar13 * 0x28);
    uVar2 = *puVar14;
    pcVar5 = (char *)puVar14[1];
    uVar3 = puVar14[2];
    uVar6 = puVar14[3];
    uVar7 = *(undefined1 *)(puVar14 + 4);
    _swift_bridgeObjectRetain(pvVar4);
    HVar11.unknown = pcVar5;
    FUN_10045b2bc(uVar2,pcVar5,uVar3,uVar6,uVar7);
    if (pvVar4 == (void *)0x0) break;
    uVar17 = uVar17 - 1 & uVar17;
    uStack_a8 = param_1[5];
    local_b0 = param_1[4];
    uStack_98 = param_1[7];
    uStack_a0 = param_1[6];
    local_90 = param_1[8];
    uStack_c8 = param_1[1];
    local_d0 = *param_1;
    uStack_b8 = param_1[3];
    uStack_c0 = param_1[2];
    local_88 = uVar2;
    pcStack_80 = pcVar5;
    local_78 = uVar3;
    uStack_70 = uVar6;
    local_68 = uVar7;
    Swift::String::hash((Hasher)&local_d0,SVar8);
    _swift_bridgeObjectRelease(pvVar4);
    FUN_100525cfc(&local_d0);
    HVar11.unknown = (undefined *)&local_88;
    FUN_1004e15f8();
    uVar13 = Swift::Hasher::_finalize(HVar11);
    local_d8 = uVar13 ^ local_d8;
    HVar11.unknown = pcVar12;
  }
LAB_1004df8d4:
  _swift_release(param_2);
  Swift::Hasher::_combine(local_d8,HVar11);
  return;
}



/* Address: 0x1004df90c | FUN_1004df90c */

void FUN_1004df90c(undefined8 *param_1,char *param_2)

{
  String *pSVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  code *pcVar5;
  bool bVar6;
  Hasher HVar7;
  Hasher HVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar11 = 1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((param_2[0x20] & 0x3fU) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_2 + 0x40);
  HVar8.unknown = param_2;
  _swift_bridgeObjectRetain(param_2);
  local_b8 = 0;
  lVar12 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = lVar12 << 10 | LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) << 4;
      pSVar1 = (String *)(*(long *)(param_2 + 0x30) + uVar10);
      pvVar2 = pSVar1->bridgeObject;
      SVar3 = *pSVar1;
      pSVar1 = (String *)(*(long *)(param_2 + 0x38) + uVar10);
      pcVar9 = pSVar1->str;
      HVar7.unknown = pSVar1->bridgeObject;
      SVar4 = *pSVar1;
      _swift_bridgeObjectRetain(pvVar2);
      _swift_bridgeObjectRetain(HVar7.unknown);
      if (pvVar2 == (void *)0x0) goto LAB_1004dfa44;
      uStack_88 = param_1[5];
      local_90 = param_1[4];
      uStack_78 = param_1[7];
      uStack_80 = param_1[6];
      local_70 = param_1[8];
      uStack_a8 = param_1[1];
      local_b0 = *param_1;
      uStack_98 = param_1[3];
      uStack_a0 = param_1[2];
      Swift::String::hash((Hasher)&local_b0,SVar3);
      _swift_bridgeObjectRelease(pvVar2);
      Swift::String::hash((Hasher)&local_b0,SVar4);
      _swift_bridgeObjectRelease();
      uVar10 = Swift::Hasher::_finalize(HVar7);
      local_b8 = uVar10 ^ local_b8;
      HVar8.unknown = pcVar9;
    }
    bVar6 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004dfa7c);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar12) break;
    uVar13 = *(ulong *)((long)(param_2 + 0x40) + lVar12 * 8);
  }
LAB_1004dfa44:
  _swift_release(param_2);
  Swift::Hasher::_combine(local_b8,HVar8);
  return;
}



/* Address: 0x1004dfa7c | FUN_1004dfa7c */

undefined8 FUN_1004dfa7c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  long lVar7;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
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
  undefined8 local_40;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    uVar2 = (ulong)*(uint6 *)(param_1 + 2);
    FUN_10059bc30(uVar2,(ulong)*(uint6 *)(param_2 + 2));
    if ((uVar2 & 1) != 0) {
      uStack_68 = param_1[8];
      local_70 = param_1[7];
      uStack_58 = param_1[10];
      uStack_60 = param_1[9];
      uStack_48 = param_1[0xc];
      local_50 = param_1[0xb];
      local_40 = param_1[0xd];
      uStack_88 = param_1[4];
      local_90 = param_1[3];
      uStack_78 = param_1[6];
      uStack_80 = param_1[5];
      lStack_c8 = param_2[8];
      local_d0 = param_2[7];
      lStack_b8 = param_2[10];
      lStack_c0 = param_2[9];
      lStack_a8 = param_2[0xc];
      local_b0 = param_2[0xb];
      local_a0 = param_2[0xd];
      lStack_e8 = param_2[4];
      local_f0 = param_2[3];
      lStack_d8 = param_2[6];
      lStack_e0 = param_2[5];
      puVar3 = &local_90;
      FUN_100544444(puVar3,&local_f0);
      if (((ulong)puVar3 & 1) != 0) {
        _Var5.unknown = (undefined *)param_1[0xf];
        puVar6 = (undefined *)param_2[0xf];
        if (_Var5.unknown == (undefined *)0x0) {
          if (puVar6 != (undefined *)0x0) {
            return 0;
          }
        }
        else {
          if (puVar6 == (undefined *)0x0) {
            return 0;
          }
          if ((((undefined *)param_1[0xe] != (undefined *)param_2[0xe]) || (_Var5.unknown != puVar6)
              ) && (bVar1 = Swift::_stringCompareWithSmolCheck
                                      ((undefined *)param_1[0xe],_Var5,
                                       (_StringComparisonResult)(__int8)(undefined *)param_2[0xe]),
                   !bVar1)) {
            return 0;
          }
        }
        uVar2 = param_1[0x10];
        lVar7 = param_2[0x10];
        if (uVar2 == 0) {
          if (lVar7 == 0) {
            return 1;
          }
        }
        else if (lVar7 != 0) {
          _swift_bridgeObjectRetain(lVar7);
          uVar4 = uVar2;
          _swift_bridgeObjectRetain();
          FUN_100523efc();
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(lVar7);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Address: 0x1004dfbdc | FUN_1004dfbdc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004dfc18 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004dfbdc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1004dfc40 | FUN_1004dfc40 */

/* WARNING: Removing unreachable block (ram,0x0001004dfe84) */
/* WARNING: Removing unreachable block (ram,0x0001004dfdd0) */
/* WARNING: Removing unreachable block (ram,0x0001004dfe98) */
/* WARNING: Removing unreachable block (ram,0x0001004dfeac) */
/* WARNING: Removing unreachable block (ram,0x0001004dfd20) */

void FUN_1004dfc40(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 ***pppuVar4;
  long unaff_x21;
  long lVar5;
  long local_300;
  long lStack_2f8;
  undefined1 *local_2e8;
  long local_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  undefined1 *puStack_2a8;
  long local_2a0;
  long lStack_298;
  long local_290;
  undefined1 *puStack_288;
  long local_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long local_260;
  undefined8 ***local_230;
  undefined1 *puStack_228;
  long local_220;
  long lStack_218;
  long local_210;
  undefined1 *puStack_208;
  undefined1 *local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  undefined1 *local_1e0;
  long lStack_1d8;
  long local_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  undefined1 auStack_1a8 [95];
  undefined1 local_149;
  long local_148;
  undefined1 *local_140;
  long local_138;
  long lStack_130;
  long local_128;
  undefined1 *puStack_120;
  long local_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long local_f8;
  undefined8 ***local_f0;
  undefined *puStack_e8;
  undefined2 local_e0;
  undefined1 local_de;
  undefined2 local_dd;
  undefined1 local_db;
  undefined2 uStack_da;
  long local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  long lStack_c8;
  undefined1 *puStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  undefined1 *puStack_a0;
  long local_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long local_78;
  
  puVar1 = &DAT_100fcc880;
  FUN_1000f7830(&DAT_100fcc880,&DAT_100c52a20);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004e0028();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_230 = (undefined8 ***)((ulong)local_230 & 0xffffffffffffff00);
    ppppuVar2 = &local_230;
    puVar3 = puVar1;
    local_2b8 = lVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    if (puVar3 == (undefined *)0x0) {
      if (DAT_100fce780 != -1) {
        _swift_once(&DAT_100fce780,FUN_1005286e4);
      }
      puVar3 = DAT_101057b38;
      ppppuVar2 = DAT_101057b30;
      _swift_bridgeObjectRetain(DAT_101057b38);
    }
    local_2b0 = CONCAT71(local_2b0._1_7_,1);
    local_f0 = ppppuVar2;
    puStack_e8 = puVar3;
    FUN_1004e16ec();
    puVar3 = &DAT_100edd5b0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_230,&DAT_100edd5b0,&local_2b0,puVar1,&DAT_100edd5b0,ppppuVar2);
    if (puStack_228 == (undefined1 *)0x1) {
      local_dd = 0;
      puStack_228 = (undefined1 *)0x0;
      local_220._0_1_ = 3;
      local_de = 1;
      local_db = 1;
      pppuVar4 = (undefined8 ***)0x0;
    }
    else {
      local_de = (undefined1)((ulong)local_230 >> 0x10);
      local_dd = (undefined2)((ulong)local_230 >> 0x18);
      local_db = (undefined1)((ulong)local_230 >> 0x28);
      pppuVar4 = local_230;
    }
    local_e0 = SUB82(pppuVar4,0);
    local_149 = 2;
    local_d8 = (long)puStack_228;
    local_d0 = (undefined1)local_220;
    FUN_1004e172c();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_148,&DAT_100edd520,&local_149,puVar1,&DAT_100edd520,puVar3);
    if (local_140 == (undefined1 *)0x0) {
      (**(code **)(local_2b8 + 8))((long)&local_300 - extraout_x8,puVar1);
      local_2b0 = 0x6e776f6e6b6e75;
      puStack_2a8 = &DAT_e700000000000000;
      local_2a0 = 0;
      lStack_298 = 0;
      local_290 = 0x302e302e30;
      puStack_288 = &DAT_e500000000000000;
      lStack_278 = 0;
      local_280 = 0;
      lStack_268 = 0;
      lStack_270 = 0;
      local_260 = 0;
      local_230 = (undefined8 ***)0x6e776f6e6b6e75;
      puStack_228 = &DAT_e700000000000000;
      local_220 = 0;
      lStack_218 = 0;
      local_210 = 0x302e302e30;
      puStack_208 = &DAT_e500000000000000;
      lStack_1f8 = 0;
      local_200 = (undefined1 *)0x0;
      lStack_1e8 = 0;
      local_1f0 = 0;
      local_1e0 = (undefined1 *)0x0;
      FUN_1004ddb74(&local_2b0,auStack_1a8);
      FUN_1004e00e8(&local_230);
      lStack_1b8 = local_260;
      local_1e0 = puStack_288;
      local_128 = local_290;
      local_140 = puStack_2a8;
      local_148 = local_2b0;
      lStack_1c8 = lStack_270;
      lStack_1c0 = lStack_268;
      lStack_1d8 = local_280;
      local_1d0 = lStack_278;
      lStack_1f8 = local_2a0;
      local_1f0 = lStack_298;
    }
    else {
      lStack_2d8 = lStack_110;
      local_2e0 = local_118;
      lStack_2c8 = lStack_100;
      lStack_2d0 = lStack_108;
      local_2c0 = local_f8;
      local_2e8 = puStack_120;
      lStack_2f8 = lStack_130;
      local_300 = local_138;
      (**(code **)(local_2b8 + 8))((long)&local_300 - extraout_x8,puVar1);
      lStack_1b8 = local_2c0;
      local_1e0 = local_2e8;
      lStack_1c8 = lStack_2d0;
      lStack_1c0 = lStack_2c8;
      lStack_1d8 = local_2e0;
      local_1d0 = lStack_2d8;
      lStack_1f8 = local_300;
      local_1f0 = lStack_2f8;
    }
    local_220 = CONCAT26(uStack_da,CONCAT15(local_db,CONCAT23(local_dd,CONCAT12(local_de,local_e0)))
                        );
    puStack_228 = puStack_e8;
    local_230 = local_f0;
    lStack_218 = local_d8;
    local_210 = CONCAT71(uStack_cf,local_d0);
    puStack_208 = (undefined1 *)local_148;
    local_200 = local_140;
    lStack_1e8 = local_128;
    lStack_c8 = local_148;
    puStack_c0 = local_140;
    local_b8 = lStack_1f8;
    lStack_b0 = local_1f0;
    local_a8 = local_128;
    puStack_a0 = local_1e0;
    local_98 = lStack_1d8;
    lStack_90 = local_1d0;
    lStack_88 = lStack_1c8;
    lStack_80 = lStack_1c0;
    local_78 = lStack_1b8;
    FUN_1004e176c(&local_230,&local_2b0);
    FUN_100004594(param_2);
    FUN_1004e17a0(&local_f0);
    param_1[9] = lStack_1e8;
    param_1[8] = local_1f0;
    param_1[0xb] = lStack_1d8;
    param_1[10] = (long)local_1e0;
    param_1[0xd] = lStack_1c8;
    param_1[0xc] = local_1d0;
    param_1[0xf] = lStack_1b8;
    param_1[0xe] = lStack_1c0;
    param_1[1] = (long)puStack_228;
    *param_1 = (long)local_230;
    param_1[3] = lStack_218;
    param_1[2] = local_220;
    param_1[5] = (long)puStack_208;
    param_1[4] = local_210;
    param_1[7] = lStack_1f8;
    param_1[6] = (long)local_200;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004e0028 | FUN_1004e0028 */

void FUN_1004e0028(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc568 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c529b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c529b8,&DAT_100edb2b8);
  DAT_100fcc568 = pTVar1;
  return;
}



/* Address: 0x1004e0068 | FUN_1004e0068 */

void FUN_1004e0068(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc570 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c560a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c560a0,&DAT_100edd5b0);
  DAT_100fcc570 = pTVar1;
  return;
}



/* Address: 0x1004e00a8 | FUN_1004e00a8 */

void FUN_1004e00a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc578 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55b80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55b80,&DAT_100edd520);
  DAT_100fcc578 = pTVar1;
  return;
}



/* Address: 0x1004e00e8 | FUN_1004e00e8 */

undefined8 FUN_1004e00e8(undefined8 param_1)

{
  FUN_100549a34();
  return param_1;
}



/* Address: 0x1004e011c | FUN_1004e011c */

undefined8 FUN_1004e011c(undefined8 param_1,undefined8 param_2)

{
  FUN_100549a7c(param_2,param_1);
  return param_2;
}



/* Address: 0x1004e0158 | FUN_1004e0158 */

undefined8 FUN_1004e0158(undefined8 param_1,undefined8 param_2)

{
  FUN_1004e0f38(param_2,param_1,&DAT_100edb140);
  return param_2;
}



/* Address: 0x1004e018c | FUN_1004e018c */

undefined8 FUN_1004e018c(undefined8 param_1)

{
  FUN_1004e0ed8(param_1,&DAT_100edb140);
  return param_1;
}



/* Address: 0x1004e01b8 | FUN_1004e01b8 */

void FUN_1004e01b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc588 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52968;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52968,&DAT_100edb228);
  DAT_100fcc588 = pTVar1;
  return;
}



/* Address: 0x1004e01f8 | FUN_1004e01f8 */

void FUN_1004e01f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc590 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f5e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f5e8,&DAT_100ee2e50);
  DAT_100fcc590 = pTVar1;
  return;
}



/* Address: 0x1004e0238 | FUN_1004e0238 */

void FUN_1004e0238(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f198;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f198,&DAT_100ee2dc0);
  DAT_100fcc598 = pTVar1;
  return;
}



/* Address: 0x1004e0278 | FUN_1004e0278 */

undefined8 FUN_1004e0278(undefined8 param_1)

{
  FUN_100549a34();
  return param_1;
}



/* Address: 0x1004e02ac | FUN_1004e02ac */

void FUN_1004e02ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55144;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55144,&DAT_100edcda0);
  DAT_100fcc5a0 = pTVar1;
  return;
}



/* Address: 0x1004e02ec | FUN_1004e02ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e0328 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004e02ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x1004e0350 | FUN_1004e0350 */

/* WARNING: Removing unreachable block (ram,0x0001004e05a0) */
/* WARNING: Removing unreachable block (ram,0x0001004e04ac) */
/* WARNING: Removing unreachable block (ram,0x0001004e0530) */
/* WARNING: Removing unreachable block (ram,0x0001004e05fc) */
/* WARNING: Removing unreachable block (ram,0x0001004e0614) */
/* WARNING: Removing unreachable block (ram,0x0001004e0628) */
/* WARNING: Removing unreachable block (ram,0x0001004e0634) */
/* WARNING: Removing unreachable block (ram,0x0001004e0638) */
/* WARNING: Removing unreachable block (ram,0x0001004e0430) */

void FUN_1004e0350(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_290 [8];
  void *local_288;
  undefined *local_280;
  undefined1 local_278 [136];
  undefined8 local_1f0;
  void *pvStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined1 local_161;
  undefined8 local_160;
  undefined1 local_151;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  String local_f8;
  undefined2 local_e8;
  undefined1 uStack_e6;
  undefined2 uStack_e5;
  undefined1 uStack_e3;
  undefined2 uStack_e2;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  puVar1 = &DAT_100fcc860;
  FUN_1000f7830(&DAT_100fcc860,&DAT_100c52a18);
  lVar5 = *(long *)(puVar1 + -8);
  local_280 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004e01b8();
  Swift::Decoder::_container();
  puVar1 = local_280;
  if (unaff_x21 == 0) {
    local_1f0 = (char *)((ulong)local_1f0 & 0xffffffffffffff00);
    local_f8 = Swift::KeyedDecodingContainer::_decode(&local_1f0,local_280);
    local_288 = local_f8.bridgeObject;
    pcVar2 = local_f8.str;
    local_278[0] = 1;
    FUN_1004e162c();
    puVar3 = &DAT_100ee2e50;
    Swift::KeyedDecodingContainer::_decode
              (&local_1f0,&DAT_100ee2e50,local_278,puVar1,&DAT_100ee2e50,pcVar2);
    local_e8 = (undefined2)local_1f0;
    uStack_e6 = local_1f0._2_1_;
    uStack_e5 = local_1f0._3_2_;
    uStack_e3 = local_1f0._5_1_;
    local_151 = 2;
    FUN_1004e166c();
    Swift::KeyedDecodingContainer::_decode
              (&local_150,&DAT_100ee2dc0,&local_151,puVar1,&DAT_100ee2dc0,puVar3);
    uStack_b8 = uStack_128;
    local_c0 = local_130;
    uStack_a8 = uStack_118;
    local_b0 = uStack_120;
    uStack_98 = uStack_108;
    local_a0 = local_110;
    local_90 = local_100;
    uStack_d8 = uStack_148;
    uStack_e0 = local_150;
    uStack_c8 = uStack_138;
    local_d0 = uStack_140;
    local_1f0 = (char *)CONCAT71(local_1f0._1_7_,3);
    puVar4 = &local_1f0;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_161 = 4;
    local_88 = puVar4;
    puStack_80 = puVar3;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_160,&DAT_100edcda0,&local_161,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))(auStack_290 + -extraout_x8,puVar1);
    local_78 = local_160;
    uStack_188 = local_90;
    local_190 = uStack_98;
    puStack_178 = puStack_80;
    puStack_180 = local_88;
    local_170 = local_160;
    uStack_1c8 = local_d0;
    local_1d0 = uStack_d8;
    uStack_1b8 = local_c0;
    uStack_1c0 = uStack_c8;
    uStack_1a8 = local_b0;
    local_1b0 = uStack_b8;
    uStack_198 = local_a0;
    uStack_1a0 = uStack_a8;
    uStack_1e0 = CONCAT26(uStack_e2,
                          CONCAT15(uStack_e3,CONCAT23(uStack_e5,CONCAT12(uStack_e6,local_e8))));
    pvStack_1e8 = local_f8.bridgeObject;
    local_1f0 = local_f8.str;
    uStack_1d8 = uStack_e0;
    FUN_1004e0158(&local_1f0,local_278);
    FUN_100004594(param_2);
    FUN_1004e018c(&local_f8);
    param_1[0xd] = uStack_188;
    param_1[0xc] = local_190;
    param_1[0xf] = puStack_178;
    param_1[0xe] = puStack_180;
    param_1[0x10] = local_170;
    param_1[5] = uStack_1c8;
    param_1[4] = local_1d0;
    param_1[7] = uStack_1b8;
    param_1[6] = uStack_1c0;
    param_1[9] = uStack_1a8;
    param_1[8] = local_1b0;
    param_1[0xb] = uStack_198;
    param_1[10] = uStack_1a0;
    param_1[1] = pvStack_1e8;
    *param_1 = local_1f0;
    param_1[3] = uStack_1d8;
    param_1[2] = uStack_1e0;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004e06d8 | FUN_1004e06d8 */

void FUN_1004e06d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52918;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52918,&DAT_100edb198);
  DAT_100fcc5b0 = pTVar1;
  return;
}



/* Address: 0x1004e0718 | thunk_FUN_1004e071c */

void thunk_FUN_1004e071c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52488;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52488,&DAT_100edb0b8);
  DAT_100fcc5b8 = pTVar1;
  return;
}



/* Address: 0x1004e071c | FUN_1004e071c */

void FUN_1004e071c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52488;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52488,&DAT_100edb0b8);
  DAT_100fcc5b8 = pTVar1;
  return;
}



/* Address: 0x1004e075c | thunk_FUN_1004e0760 */

void thunk_FUN_1004e0760(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52540;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52540,&DAT_100edb140);
  DAT_100fcc5c0 = pTVar1;
  return;
}



/* Address: 0x1004e0760 | FUN_1004e0760 */

void FUN_1004e0760(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52540;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52540,&DAT_100edb140);
  DAT_100fcc5c0 = pTVar1;
  return;
}



/* Address: 0x1004e07a0 | thunk_FUN_1004e07a4 */

void thunk_FUN_1004e07a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52438;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52438,&DAT_100edb0b8);
  DAT_100fcc5c8 = pTVar1;
  return;
}



/* Address: 0x1004e07a4 | FUN_1004e07a4 */

void FUN_1004e07a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52438;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52438,&DAT_100edb0b8);
  DAT_100fcc5c8 = pTVar1;
  return;
}



/* Address: 0x1004e07e4 | thunk_FUN_1004e07e8 */

void thunk_FUN_1004e07e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52460;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52460,&DAT_100edb0b8);
  DAT_100fcc5d0 = pTVar1;
  return;
}



/* Address: 0x1004e07e8 | FUN_1004e07e8 */

void FUN_1004e07e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52460;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52460,&DAT_100edb0b8);
  DAT_100fcc5d0 = pTVar1;
  return;
}



/* Address: 0x1004e0828 | thunk_FUN_1004e082c */

void thunk_FUN_1004e082c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c523f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c523f8,&DAT_100edb0b8);
  DAT_100fcc5d8 = pTVar1;
  return;
}



/* Address: 0x1004e082c | FUN_1004e082c */

void FUN_1004e082c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c523f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c523f8,&DAT_100edb0b8);
  DAT_100fcc5d8 = pTVar1;
  return;
}



/* Address: 0x1004e086c | thunk_FUN_1004e0870 */

void thunk_FUN_1004e0870(void)

{
  FUN_1004e0870();
  return;
}



/* Address: 0x1004e0870 | FUN_1004e0870 */

void FUN_1004e0870(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c524f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c524f0,&DAT_100edb140);
  DAT_100fcc5e0 = pTVar1;
  return;
}



/* Address: 0x1004e08b0 | thunk_FUN_1004e08b4 */

void thunk_FUN_1004e08b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52518;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52518,&DAT_100edb140);
  DAT_100fcc5e8 = pTVar1;
  return;
}



/* Address: 0x1004e08b4 | FUN_1004e08b4 */

void FUN_1004e08b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52518;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52518,&DAT_100edb140);
  DAT_100fcc5e8 = pTVar1;
  return;
}



/* Address: 0x1004e08f4 | thunk_FUN_1004e08f8 */

void thunk_FUN_1004e08f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c524b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c524b0,&DAT_100edb140);
  DAT_100fcc5f0 = pTVar1;
  return;
}



/* Address: 0x1004e08f8 | FUN_1004e08f8 */

void FUN_1004e08f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc5f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c524b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c524b0,&DAT_100edb140);
  DAT_100fcc5f0 = pTVar1;
  return;
}



/* Address: 0x1004e0938 | thunk_FUN_1004e093c */

void thunk_FUN_1004e093c(void)

{
  FUN_1004e093c();
  return;
}



/* Address: 0x1004e093c | FUN_1004e093c */

void FUN_1004e093c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc648 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52a90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52a90,&DAT_100edb3f8);
  DAT_100fcc648 = pTVar1;
  return;
}



/* Address: 0x1004e097c | thunk_FUN_1004e0980 */

void thunk_FUN_1004e0980(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52ab8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52ab8,&DAT_100edb3f8);
  DAT_100fcc650 = pTVar1;
  return;
}



/* Address: 0x1004e0980 | FUN_1004e0980 */

void FUN_1004e0980(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52ab8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52ab8,&DAT_100edb3f8);
  DAT_100fcc650 = pTVar1;
  return;
}



/* Address: 0x1004e09c0 | thunk_FUN_1004e09c4 */

void thunk_FUN_1004e09c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52a50,&DAT_100edb3f8);
  DAT_100fcc658 = pTVar1;
  return;
}



/* Address: 0x1004e09c4 | FUN_1004e09c4 */

void FUN_1004e09c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52a50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52a50,&DAT_100edb3f8);
  DAT_100fcc658 = pTVar1;
  return;
}



/* Address: 0x1004e0a04 | FUN_1004e0a04 */

void FUN_1004e0a04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1004e0a38();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1004e0a78();
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_1004e0ab8();
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Address: 0x1004e0a38 | FUN_1004e0a38 */

void FUN_1004e0a38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c525e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c525e0,&DAT_100edb178);
  DAT_100fcc6a8 = pTVar1;
  return;
}



/* Address: 0x1004e0a78 | FUN_1004e0a78 */

void FUN_1004e0a78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52608;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52608,&DAT_100edb178);
  DAT_100fcc6b0 = pTVar1;
  return;
}



/* Address: 0x1004e0ab8 | FUN_1004e0ab8 */

void FUN_1004e0ab8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c525a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c525a0,&DAT_100edb178);
  DAT_100fcc6b8 = pTVar1;
  return;
}



/* Address: 0x1004e0af8 | thunk_FUN_1004e0afc */

void thunk_FUN_1004e0afc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52630,&DAT_100edb178);
  DAT_100fcc6c0 = pTVar1;
  return;
}



/* Address: 0x1004e0afc | FUN_1004e0afc */

void FUN_1004e0afc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc6c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52630,&DAT_100edb178);
  DAT_100fcc6c0 = pTVar1;
  return;
}



/* Address: 0x1004e0b3c | FUN_1004e0b3c */

undefined1  [16] FUN_1004e0b3c(void)

{
  return ZEXT816(0x100edb040);
}



/* Address: 0x1004e0b4c | FUN_1004e0b4c */

void FUN_1004e0b4c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Address: 0x1004e0ba4 | FUN_1004e0ba4 */

undefined8 * FUN_1004e0ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined2 *)((long)param_1 + 0x13) = *(undefined2 *)((long)param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  uVar5 = param_2[3];
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  uVar4 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar4;
  param_1[0xd] = param_2[0xd];
  uVar6 = param_2[0xf];
  uVar7 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Address: 0x1004e0c94 | FUN_1004e0c94 */

undefined8 * FUN_1004e0c94(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar2 = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined2 *)(param_1 + 2) = uVar2;
  uVar1 = *(undefined1 *)((long)param_2 + 0x15);
  *(undefined2 *)((long)param_1 + 0x13) = *(undefined2 *)((long)param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x15) = uVar1;
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[7] = param_2[7];
  uVar3 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[9] = param_2[9];
  uVar3 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0xb] = param_2[0xb];
  uVar3 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0xd] = param_2[0xd];
  uVar3 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x1004e0dd8 | FUN_1004e0dd8 */

void FUN_1004e0dd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}



/* Address: 0x1004e0dfc | FUN_1004e0dfc */

undefined8 * FUN_1004e0dfc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined2 *)((long)param_1 + 0x13) = *(undefined2 *)((long)param_2 + 0x13);
  *(undefined1 *)((long)param_1 + 0x15) = *(undefined1 *)((long)param_2 + 0x15);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[8];
  uVar1 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[10];
  uVar1 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRelease(param_1[0xe]);
  uVar2 = param_1[0xf];
  uVar1 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}


