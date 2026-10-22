/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b9fce4 | FUN_100b9fce4 */

void FUN_100b9fce4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b9fcec | FUN_100b9fcec */

void FUN_100b9fcec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_2;
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28,&local_30);
  return;
}



/* Address: 0x100b9fd20 | FUN_100b9fd20 */

void FUN_100b9fd20(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b9fd44 | FUN_100b9fd44 */

void FUN_100b9fd44(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  return;
}



/* Address: 0x100b9fd6c | FUN_100b9fd6c */

void FUN_100b9fd6c(void)

{
  FUN_100b9d078();
  return;
}



/* Address: 0x100b9fd74 | thunk_FUN_100b9fcd4 */

void thunk_FUN_100b9fcd4(void)

{
  FUN_100b9fcd4();
  return;
}



/* Address: 0x100b9fd78 | thunk_FUN_100b9fd20 */

void thunk_FUN_100b9fd20(void)

{
  FUN_100b9fd20();
  return;
}



/* Address: 0x100b9fd7c | thunk_FUN_100b9fce4 */

void thunk_FUN_100b9fce4(void)

{
  FUN_100b9fce4();
  return;
}



/* Address: 0x100b9fd80 | FUN_100b9fd80 */

void FUN_100b9fd80(_StringGuts param_1,_StringGuts param_2)

{
  _StringComparisonResult unaff_w26;
  
  Swift::_stringCompareWithSmolCheck(param_1,param_2,unaff_w26);
  return;
}



/* Address: 0x100b9fd90 | FUN_100b9fd90 */

void FUN_100b9fd90(void)

{
  FUN_10003bf18();
  return;
}



/* Address: 0x100b9fd9c | FUN_100b9fd9c */

void FUN_100b9fd9c(void)

{
  FUN_100b6f5fc(0);
  return;
}



/* Address: 0x100b9fda4 | FUN_100b9fda4 */

void FUN_100b9fda4(long param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + param_1),(SEL)*param_2);
  return;
}



/* Address: 0x100b9fdb4 | FUN_100b9fdb4 */

void FUN_100b9fdb4(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b9fdbc | FUN_100b9fdbc */

void FUN_100b9fdbc(void)

{
  return;
}



/* Address: 0x100b9fdc8 | FUN_100b9fdc8 */

void FUN_100b9fdc8(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100b9fdd0 | FUN_100b9fdd0 */

void FUN_100b9fdd0(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b9fdd8 | FUN_100b9fdd8 */

String FUN_100b9fdd8(void)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x100b9fde0 | FUN_100b9fde0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b9fde0(void)

{
  return 0;
}



/* Address: 0x100b9fde8 | FUN_100b9fde8 */

void FUN_100b9fde8(void)

{
  return;
}



/* Address: 0x100b9fdf4 | FUN_100b9fdf4 */

void FUN_100b9fdf4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    FUN_100071750(0,lVar7,0);
    pcVar8 = (char *)(param_1 + 0x20);
    do {
      uVar1 = 0xee0044455441434e;
      uVar4 = 0x5552545f54584554;
      if (*pcVar8 != '\x01') {
        uVar1 = 0x8000000100dc6f50;
        uVar4 = 0xd000000000000010;
      }
      uVar2 = 0x8000000100dc6f20;
      uVar5 = 0xd000000000000014;
      if (*pcVar8 != '\0') {
        uVar2 = uVar1;
        uVar5 = uVar4;
      }
      uVar3 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
        FUN_100071750(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(puVar6 + uVar3 * 0x10 + 0x28) = uVar2;
      lVar7 = lVar7 + -1;
      pcVar8 = pcVar8 + 1;
    } while (lVar7 != 0);
  }
  return;
}



/* Address: 0x100b9ff4c | FUN_100b9ff4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b9ff80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100b9ff4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  FUN_100b6f838();
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100b9ffa4 | FUN_100b9ffa4 */

undefined1  [16] FUN_100b9ffa4(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = 0x8000000100dc6f20;
    auVar4._0_8_ = 0xd000000000000014;
    return auVar4;
  }
  uVar2 = 0x5552545f54584554;
  uVar1 = 0xee0044455441434e;
  if (param_1 != '\x01') {
    uVar2 = 0xd000000000000010;
    uVar1 = 0x8000000100dc6f50;
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100ba0014 | FUN_100ba0014 */

void FUN_100ba0014(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100beb6dc(*param_1,*param_2);
  return;
}



/* Address: 0x100ba0020 | FUN_100ba0020 */

void FUN_100ba0020(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec830(*unaff_x20);
  return;
}



/* Address: 0x100ba0028 | FUN_100ba0028 */

void FUN_100ba0028(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100beca4c::caseD_1f(param_1,*unaff_x20);
  return;
}



/* Address: 0x100ba0030 | FUN_100ba0030 */

void FUN_100ba0030(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed5b8(param_1,*unaff_x20);
  return;
}



/* Address: 0x100ba0038 | FUN_100ba0038 */

void FUN_100ba0038(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b9ff4c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100ba0064 | FUN_100ba0064 */

void FUN_100ba0064(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b9ffa4();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100ba008c | FUN_100ba008c */

void FUN_100ba008c(undefined8 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_28;
  
  FUN_100ba39c8();
  if ((local_28 & 1) == 0) {
    FUN_100011080(&local_48,param_1);
  }
  else {
    param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
    *param_1 = local_48;
    param_1[1] = uStack_40;
  }
  return;
}



/* Address: 0x100ba00e8 | FUN_100ba00e8 */

void FUN_100ba00e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 auStack_60 [32];
  
  FUN_10000cbfc(param_2,auStack_60);
  FUN_10000cbfc(auStack_60,&local_88);
  puVar1 = &local_98;
  FUN_100b6f878(puVar1,&local_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                PTR___type_metadata_for_Swift_String_100eac208);
  if ((int)puVar1 == 0) {
    FUN_100011080(auStack_60,&local_88);
  }
  else {
    FUN_100004594(auStack_60);
    local_88 = local_98;
    uStack_80 = uStack_90;
  }
  local_68 = SUB81(puVar1,0);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  *(undefined1 *)(param_1 + 4) = local_68;
  FUN_100004594(param_2);
  param_1[5] = param_3;
  return;
}



/* Address: 0x100ba01a0 | FUN_100ba01a0 */

void FUN_100ba01a0(undefined8 param_1,ulong param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100ba01ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100ba01f0 + (ulong)(byte)(&DAT_100c9b810)[param_2 >> 0x3e] * 4))();
  return;
}



/* Address: 0x100ba065c | FUN_100ba065c */

void FUN_100ba065c(long param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  
  if (-1 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x000100ba06b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_100ba0798 + (param_3 >> 0x3e) * 4) + 0x100ba069c))(0,param_1,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba0794);
  (*pcVar1)();
}



/* Address: 0x100ba07c8 | FUN_100ba07c8 */

undefined1  [16] FUN_100ba07c8(undefined8 param_1,char *param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  Encoding EVar4;
  Encoding EVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  CharacterSet CVar10;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x23;
  long lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  CharacterSet unaff_x26;
  String SVar19;
  String SVar20;
  undefined1 auVar21 [16];
  String SVar22;
  undefined1 auStack_100 [16];
  undefined8 auStack_f0 [2];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  void *local_b0;
  char *pcStack_a8;
  long local_a0;
  undefined *local_98;
  String local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  char *pcVar11;
  
  EVar4 = Encoding::_typeMetadataAccessor();
  lVar16 = *(long *)(EVar4.unknown + -8);
  uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)(auStack_e0 + -uVar13) - uVar13;
  local_a0 = lVar14;
  EVar5.unknown = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_98 = EVar5.unknown;
  FUN_100ba433c();
  if (param_3 == 0) {
    Encoding::_get_utf8(EVar5);
    local_b0 = (void *)0x0;
    pcStack_a8 = param_2;
  }
  else {
    local_90.bridgeObject = (void *)0xe100000000000000;
    local_90.str = (char *)0x3b;
    uVar15 = lVar14 - 0x20;
    local_b8 = auStack_e0 + -uVar13;
    *(String **)(lVar14 + -0x10) = &local_90;
    FUN_100b86d54();
    pcVar2 = FUN_100b67628;
    puVar6 = (undefined *)0x7fffffffffffffff;
    FUN_100ba3a78(0x7fffffffffffffff,1,FUN_100b67628,uVar15,param_2,param_3);
    if (*(long *)(puVar6 + 0x10) == 0) {
      local_b0 = (void *)0x0;
      pcStack_a8 = (char *)0x0;
      EVar5.unknown = puVar6;
    }
    else {
      SVar19 = *(String *)(puVar6 + 0x20);
      uVar15 = *(ulong *)(puVar6 + 0x38);
      _swift_bridgeObjectRetain(uVar15);
      local_90 = Swift::String::__fromSubstring(SVar19);
      pcVar2 = (code *)local_90.str;
      FUN_100ba4398();
      FUN_100008378();
      SVar19 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(unaff_x26);
      EVar5.unknown = SVar19.bridgeObject;
      (**(code **)(unaff_x23 + 8))();
      FUN_100b6f980();
      SVar19 = Swift::String::lowercased(SVar19);
      local_b0 = SVar19.bridgeObject;
      pcStack_a8 = SVar19.str;
      FUN_100b6fb14();
      _swift_bridgeObjectRelease();
    }
    Encoding::_get_utf8(EVar5);
    uVar7 = 1;
    FUN_100ba17c0();
    if (pcVar2 == (code *)(uVar15 >> 1)) {
      _swift_unknownObjectRelease();
    }
    else {
      puVar17 = (undefined8 *)(puVar6 + (long)pcVar2 * 0x20 + 0x18);
      local_d8 = uVar7;
      local_d0 = lVar16;
      local_c8 = EVar4.unknown;
      local_c0 = param_1;
      do {
        if ((long)(uVar15 >> 1) <= (long)pcVar2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba0b58);
          (*pcVar2)();
        }
        local_80 = puVar17[-1];
        uVar7 = *puVar17;
        local_90 = *(String *)(puVar17 + -3);
        uStack_78 = uVar7;
        _swift_bridgeObjectRetain(uVar7);
        FUN_100ba4398();
        FUN_100ba411c();
        SVar19 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(unaff_x26);
        pcVar8 = SVar19.str;
        pcVar18 = *(code **)(unaff_x23 + 8);
        (*pcVar18)();
        _swift_bridgeObjectRelease(uVar7);
        SVar20 = Swift::String::lowercased(SVar19);
        pcVar11 = SVar20.bridgeObject;
        pcVar9 = SVar20.str;
        FUN_100ba4374();
        pvVar12 = SVar20.bridgeObject;
        SVar22.bridgeObject = pcVar11;
        SVar22.str = pcVar9;
        bVar3 = Swift::String::hasPrefix(SVar20,SVar22);
        _swift_bridgeObjectRelease();
        if (bVar3) {
          FUN_100ba4374();
          SVar20.bridgeObject = pvVar12;
          SVar20.str = pcVar11;
          pcVar9 = (char *)Swift::String::get_count(SVar20);
          FUN_100ba1828(pcVar9,pcVar8,SVar19.bridgeObject);
          SVar19.bridgeObject = pcVar8;
          SVar19.str = pcVar9;
          SVar20 = Swift::String::__fromSubstring(SVar19);
          SVar19 = SVar20;
          FUN_100b6f838();
          local_90 = SVar20;
          FUN_100ba4398();
          FUN_100008378();
          FUN_100ba4314();
          (*pcVar18)();
          FUN_100b6f980();
          uVar7 = 0xe100000000000000;
          local_90 = SVar19;
          CVar10 = Foundation::CharacterSet::_init();
          FUN_100ba4314();
          (*pcVar18)();
          FUN_100b6fbc4();
          puVar1 = local_b8;
          FUN_100ba18f8(local_b8,CVar10.unknown,uVar7);
          _swift_unknownObjectRelease(local_d8);
          FUN_100b6f860();
          lVar14 = local_a0;
          EVar4.unknown = local_c8;
          lVar16 = local_d0;
          (**(code **)(local_d0 + 8))(local_a0,local_c8);
          (**(code **)(lVar16 + 0x20))(lVar14,puVar1,EVar4.unknown);
          param_1 = local_c0;
          goto LAB_100ba0b1c;
        }
        FUN_100b6f860();
        pcVar2 = pcVar2 + 1;
        puVar17 = puVar17 + 4;
      } while ((code *)(uVar15 >> 1) != pcVar2);
      _swift_unknownObjectRelease(local_d8);
      lVar16 = local_d0;
      param_1 = local_c0;
      EVar4.unknown = local_c8;
    }
LAB_100ba0b1c:
    (**(code **)(lVar16 + 0x20))(param_1,local_a0,EVar4.unknown);
  }
  auVar21._8_8_ = local_b0;
  auVar21._0_8_ = pcStack_a8;
  return auVar21;
}



/* Address: 0x100ba0b58 | FUN_100ba0b58 */

void FUN_100ba0b58(undefined8 param_1,Encoding param_2,void *param_3,undefined8 param_4,
                  long *param_5)

{
  ulong *puVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  Encoding EVar6;
  char **ppcVar7;
  char **ppcVar8;
  char *pcVar9;
  undefined *puVar10;
  _NativeDictionary _Var11;
  char *pcVar12;
  char *pcVar13;
  undefined *puVar14;
  void *pvVar15;
  char *pcVar16;
  char *pcVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  char *pcVar21;
  char *pcVar22;
  String SVar23;
  String SVar24;
  undefined8 auStack_160 [4];
  undefined1 auStack_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_118;
  void *local_110;
  undefined *local_108;
  char **local_100;
  undefined8 local_f8;
  long *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  String local_88;
  ulong local_78;
  undefined *local_70;
  String separator;
  
  EVar6 = Encoding::_typeMetadataAccessor();
  lVar20 = -(*(long *)(*(long *)(EVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(EVar6.unknown + -8) + 0x10))(auStack_140 + lVar20,param_4,EVar6.unknown);
  EVar6.unknown = param_2.unknown;
  pvVar15 = param_3;
  (extension_Foundation)::Swift::String::_init(param_2);
  if (pvVar15 == (void *)0x0) {
    Encoding::_get_utf8(EVar6);
    EVar6.unknown = param_2.unknown;
    pvVar15 = param_3;
    (extension_Foundation)::Swift::String::_init(param_2);
    if (pvVar15 == (void *)0x0) {
      FUN_100b9398c();
      lVar18 = *(long *)(*param_5 + 0x10);
      FUN_100b93bf0(lVar18);
      lVar20 = *param_5;
      *(long *)(lVar20 + 0x10) = lVar18 + 1;
      *(undefined1 *)(lVar20 + lVar18 + 0x20) = 2;
      *param_5 = lVar20;
      FUN_100ba1afc(param_1,param_2.unknown,param_3,param_4,param_5);
      return;
    }
  }
  local_88.bridgeObject = pvVar15;
  local_88.str = EVar6.unknown;
  local_b0 = (char *)0x26;
  uStack_a8 = 0xe100000000000000;
  local_118 = param_2.unknown;
  local_110 = param_3;
  local_f8 = param_1;
  local_f0 = param_5;
  FUN_100008378();
  ppcVar7 = &local_b0;
  (extension_Foundation)::Swift::StringProtocol::_components
            (ppcVar7,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,EVar6.unknown,EVar6.unknown);
  _swift_bridgeObjectRelease(pvVar15);
  pcVar22 = ppcVar7[2];
  pcVar16 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  local_100 = ppcVar7;
  if (pcVar22 != (char *)0x0) {
    ppcVar7 = ppcVar7 + 5;
    uStack_128 = 4;
    local_130 = 2;
    pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
    local_138 = param_4;
    do {
      pcVar9 = *ppcVar7;
      uVar19 = (ulong)ppcVar7[-1] & 0xffffffffffff;
      if (((ulong)pcVar9 & 0x2000000000000000) != 0) {
        uVar19 = (ulong)pcVar9 >> 0x38 & 0xf;
      }
      if (uVar19 != 0) {
        local_b0 = (char *)0x3d;
        uStack_a8 = 0xe100000000000000;
        ppcVar8 = &local_b0;
        local_88.str = ppcVar7[-1];
        local_88.bridgeObject = pcVar9;
        (extension_Foundation)::Swift::StringProtocol::_components
                  (ppcVar8,pcVar13,pcVar13,EVar6.unknown,EVar6.unknown);
        if (ppcVar8[2] < (char *)0x2) {
          _swift_bridgeObjectRelease(ppcVar8);
          _swift_bridgeObjectRelease(local_100);
          plVar2 = local_f0;
          FUN_100b9398c();
          lVar18 = *(long *)(*plVar2 + 0x10);
          FUN_100b93bf0(lVar18);
          lVar20 = *plVar2;
          *(long *)(lVar20 + 0x10) = lVar18 + 1;
          *(undefined1 *)(lVar20 + lVar18 + 0x20) = 2;
          *plVar2 = lVar20;
          FUN_100ba1afc(local_f8,local_118,local_110,local_138,plVar2);
          _swift_bridgeObjectRelease(pcVar16);
          return;
        }
        pcVar9 = ppcVar8[5];
        local_88 = *(String *)(ppcVar8 + 4);
        local_b0 = (char *)0x2b;
        uStack_a8 = 0xe100000000000000;
        local_d0 = (char *)0x20;
        uStack_c8 = 0xe100000000000000;
        local_e8 = pcVar16;
        _swift_bridgeObjectRetain(pcVar9);
        *(undefined **)((long)auStack_160 + lVar20 + 0x10) = EVar6.unknown;
        *(undefined **)((long)auStack_160 + lVar20 + 0x18) = EVar6.unknown;
        *(char **)((long)auStack_160 + lVar20) = pcVar13;
        *(undefined **)((long)auStack_160 + lVar20 + 8) = EVar6.unknown;
        SVar23 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_b0,&local_d0,0,0,0,1,pcVar13,pcVar13);
        pcVar16 = EVar6.unknown;
        local_88 = SVar23;
        (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
        SVar24.bridgeObject = pcVar16;
        SVar24.str = pcVar13;
        _swift_bridgeObjectRelease(pcVar9);
        if (pcVar16 != (char *)0x0) {
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          SVar23 = SVar24;
        }
        pcVar21 = SVar23.bridgeObject;
        local_e0 = SVar23.str;
        local_78 = (ulong)(ppcVar8[2] != (char *)0x0);
        local_70 = (undefined *)((long)ppcVar8[2] << 1 | 1);
        local_88.bridgeObject = (String *)(ppcVar8 + 4);
        local_88.str = (char *)ppcVar8;
        FUN_100b6730c(&DAT_1010462c0);
        FUN_100ba3a30();
        separator.bridgeObject = (void *)0xe100000000000000;
        separator.str = (char *)0x3d;
        SVar24 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
        _swift_bridgeObjectRelease(ppcVar8);
        pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
        local_b0 = (char *)0x2b;
        uStack_a8 = 0xe100000000000000;
        local_d0 = (char *)0x20;
        uStack_c8 = 0xe100000000000000;
        local_88 = SVar24;
        *(undefined **)((long)auStack_160 + lVar20 + 0x10) = EVar6.unknown;
        *(undefined **)((long)auStack_160 + lVar20 + 0x18) = EVar6.unknown;
        *(undefined **)((long)auStack_160 + lVar20 + 8) = EVar6.unknown;
        *(undefined **)((long)auStack_160 + lVar20) = PTR___type_metadata_for_Swift_String_100eac208
        ;
        SVar23 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_b0,&local_d0,0,0,0,1,
                            PTR___type_metadata_for_Swift_String_100eac208,
                            PTR___type_metadata_for_Swift_String_100eac208);
        pcVar9 = EVar6.unknown;
        local_88 = SVar23;
        (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        pcVar16 = local_e8;
        if (pcVar9 != (char *)0x0) {
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          SVar23.bridgeObject = pcVar9;
          SVar23.str = pcVar13;
        }
        puVar14 = PTR___type_metadata_for_Any_100eae0c0;
        pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
        uVar19 = (ulong)local_e0 & 0xffffffffffff;
        if (((ulong)pcVar21 & 0x2000000000000000) != 0) {
          uVar19 = (ulong)pcVar21 >> 0x38 & 0xf;
        }
        if (uVar19 == 0) {
          _swift_bridgeObjectRelease(pcVar21);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
        }
        else {
          if (*(long *)(pcVar16 + 0x10) == 0) {
            uStack_a8 = 0;
            local_b0 = (char *)0x0;
            local_98 = (undefined *)0x0;
            uStack_a0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(pcVar21);
            _swift_bridgeObjectRetain(pcVar16);
            pcVar9 = local_e0;
            pcVar12 = pcVar21;
            FUN_100071370(local_e0);
            if (((ulong)pcVar12 & 1) == 0) {
              _swift_bridgeObjectRelease(pcVar16);
              uStack_a8 = 0;
              local_b0 = (char *)0x0;
              local_98 = (undefined *)0x0;
              uStack_a0 = 0;
              pcVar9 = pcVar21;
            }
            else {
              FUN_10000cbfc(*(long *)(pcVar16 + 0x38) + (long)pcVar9 * 0x20,&local_b0);
              _swift_bridgeObjectRelease(pcVar21);
              pcVar9 = pcVar16;
            }
            _swift_bridgeObjectRelease(pcVar9);
            if (local_98 != (undefined *)0x0) {
              FUN_100011080(&local_b0,&local_88);
              FUN_10000cbfc(&local_88,&local_b0);
              puVar10 = &DAT_101044808;
              FUN_100b6730c();
              ppcVar8 = &local_d0;
              _swift_dynamicCast(ppcVar8,&local_b0,puVar14 + 8,puVar10,6);
              pcVar9 = local_d0;
              if ((int)ppcVar8 == 0) {
                FUN_10000cbfc(&local_88,&local_b0);
                ppcVar8 = &local_d0;
                _swift_dynamicCast(ppcVar8,&local_b0,puVar14 + 8,pcVar13,6);
                uVar3 = uStack_c8;
                pcVar9 = local_d0;
                if (((ulong)ppcVar8 & 1) == 0) {
                  _swift_bridgeObjectRelease(pcVar21);
                  _swift_bridgeObjectRelease(SVar23.bridgeObject);
                  FUN_100004594(&local_88);
                }
                else {
                  pcVar13 = &DAT_101044958;
                  FUN_100b6730c();
                  _swift_allocObject();
                  *(undefined8 *)(pcVar13 + 0x18) = uStack_128;
                  *(undefined8 *)(pcVar13 + 0x10) = local_130;
                  *(char **)(pcVar13 + 0x20) = pcVar9;
                  *(undefined8 *)(pcVar13 + 0x28) = uVar3;
                  *(String *)(pcVar13 + 0x30) = SVar23;
                  local_b0 = pcVar13;
                  local_98 = puVar10;
                  FUN_100011080(&local_b0,&local_d0);
                  pcVar9 = pcVar16;
                  _swift_isUniquelyReferenced_nonNull_native();
                  pcVar13 = local_e0;
                  local_d8 = pcVar16;
                  pcVar12 = local_e0;
                  pcVar17 = pcVar21;
                  FUN_100071370();
                  lVar18 = *(long *)(pcVar16 + 0x10);
                  uVar19 = (ulong)~(uint)pcVar17 & 1;
                  if (SCARRY8(lVar18,uVar19)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1510);
                    (*pcVar4)();
                  }
                  _Var11.unknown = &DAT_101044768;
                  FUN_100b6730c();
                  bVar5 = Swift::_NativeDictionary::ensureUnique
                                    (SUB81(pcVar9,0),lVar18 + uVar19,_Var11);
                  if ((bVar5) &&
                     (pcVar12 = pcVar13, pcVar16 = pcVar21, FUN_100071370(),
                     ((uint)pcVar17 & 1) != ((uint)pcVar16 & 1))) goto LAB_100ba1518;
                  pcVar16 = local_d8;
                  if (((ulong)pcVar17 & 1) == 0) {
                    *(ulong *)(local_d8 + ((ulong)pcVar12 >> 6) * 8 + 0x40) =
                         *(ulong *)(local_d8 + ((ulong)pcVar12 >> 6) * 8 + 0x40) |
                         1L << ((ulong)pcVar12 & 0x3f);
                    puVar1 = (ulong *)(*(long *)(local_d8 + 0x30) + (long)pcVar12 * 0x10);
                    *puVar1 = (ulong)pcVar13;
                    puVar1[1] = (ulong)pcVar21;
                    FUN_100011080(&local_d0,*(long *)(local_d8 + 0x38) + (long)pcVar12 * 0x20);
                    if (SCARRY8(*(long *)(pcVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1518);
                      (*pcVar4)();
                    }
                    *(long *)(pcVar16 + 0x10) = *(long *)(pcVar16 + 0x10) + 1;
                  }
                  else {
                    lVar18 = *(long *)(local_d8 + 0x38) + (long)pcVar12 * 0x20;
                    FUN_100004594(lVar18);
                    FUN_100011080(&local_d0,lVar18);
                    _swift_bridgeObjectRelease(pcVar21);
                  }
                  pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
                  FUN_100004594(&local_88);
                }
              }
              else {
                pcVar13 = local_d0;
                _swift_isUniquelyReferenced_nonNull_native();
                pcVar12 = pcVar9;
                local_108 = puVar10;
                if (((ulong)pcVar13 & 1) == 0) {
                  pcVar12 = (char *)0x0;
                  FUN_100089044(0,*(long *)(pcVar9 + 0x10) + 1,1,pcVar9);
                }
                uVar19 = *(ulong *)(pcVar12 + 0x10);
                pcVar13 = pcVar12;
                if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar19) {
                  pcVar13 = (char *)(ulong)(1 < *(ulong *)(pcVar12 + 0x18));
                  FUN_100089044(pcVar13,uVar19 + 1,1,pcVar12);
                }
                *(ulong *)(pcVar13 + 0x10) = uVar19 + 1;
                *(String *)(pcVar13 + uVar19 * 0x10 + 0x20) = SVar23;
                local_98 = local_108;
                local_b0 = pcVar13;
                FUN_100011080(&local_b0,&local_d0);
                pcVar9 = pcVar16;
                _swift_isUniquelyReferenced_nonNull_native();
                pcVar13 = local_e0;
                local_d8 = pcVar16;
                pcVar12 = local_e0;
                pcVar17 = pcVar21;
                FUN_100071370();
                lVar18 = *(long *)(pcVar16 + 0x10);
                uVar19 = (ulong)~(uint)pcVar17 & 1;
                if (SCARRY8(lVar18,uVar19)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba150c);
                  (*pcVar4)();
                }
                _Var11.unknown = &DAT_101044768;
                FUN_100b6730c();
                bVar5 = Swift::_NativeDictionary::ensureUnique
                                  (SUB81(pcVar9,0),lVar18 + uVar19,_Var11);
                if ((bVar5) &&
                   (pcVar12 = pcVar13, pcVar16 = pcVar21, FUN_100071370(),
                   ((uint)pcVar17 & 1) != ((uint)pcVar16 & 1))) goto LAB_100ba1518;
                pcVar16 = local_d8;
                if (((ulong)pcVar17 & 1) == 0) {
                  *(ulong *)(local_d8 + ((ulong)pcVar12 >> 6) * 8 + 0x40) =
                       *(ulong *)(local_d8 + ((ulong)pcVar12 >> 6) * 8 + 0x40) |
                       1L << ((ulong)pcVar12 & 0x3f);
                  puVar1 = (ulong *)(*(long *)(local_d8 + 0x30) + (long)pcVar12 * 0x10);
                  *puVar1 = (ulong)pcVar13;
                  puVar1[1] = (ulong)pcVar21;
                  FUN_100011080(&local_d0,*(long *)(local_d8 + 0x38) + (long)pcVar12 * 0x20);
                  if (SCARRY8(*(long *)(pcVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1514);
                    (*pcVar4)();
                  }
                  *(long *)(pcVar16 + 0x10) = *(long *)(pcVar16 + 0x10) + 1;
                }
                else {
                  lVar18 = *(long *)(local_d8 + 0x38) + (long)pcVar12 * 0x20;
                  FUN_100004594(lVar18);
                  FUN_100011080(&local_d0,lVar18);
                  _swift_bridgeObjectRelease(pcVar21);
                }
                FUN_100004594(&local_88);
                pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
              }
              goto LAB_100ba132c;
            }
          }
          FUN_100b74780(&local_b0,&DAT_101044760);
          local_70 = pcVar13;
          local_88 = SVar23;
          FUN_100011080(&local_88,&local_b0);
          pcVar9 = pcVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar13 = local_e0;
          local_d0 = pcVar16;
          pcVar12 = local_e0;
          pcVar17 = pcVar21;
          FUN_100071370();
          lVar18 = *(long *)(pcVar16 + 0x10);
          uVar19 = (ulong)~(uint)pcVar17 & 1;
          if (SCARRY8(lVar18,uVar19)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1504);
            (*pcVar4)();
          }
          _Var11.unknown = &DAT_101044768;
          FUN_100b6730c();
          bVar5 = Swift::_NativeDictionary::ensureUnique(SUB81(pcVar9,0),lVar18 + uVar19,_Var11);
          if ((bVar5) &&
             (pcVar12 = pcVar13, pcVar16 = pcVar21, FUN_100071370(),
             ((uint)pcVar17 & 1) != ((uint)pcVar16 & 1))) {
LAB_100ba1518:
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1528);
            (*pcVar4)();
          }
          pcVar16 = local_d0;
          if (((ulong)pcVar17 & 1) == 0) {
            *(ulong *)(local_d0 + ((ulong)pcVar12 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_d0 + ((ulong)pcVar12 >> 6) * 8 + 0x40) |
                 1L << ((ulong)pcVar12 & 0x3f);
            puVar1 = (ulong *)(*(long *)(local_d0 + 0x30) + (long)pcVar12 * 0x10);
            *puVar1 = (ulong)pcVar13;
            puVar1[1] = (ulong)pcVar21;
            FUN_100011080(&local_b0,*(long *)(local_d0 + 0x38) + (long)pcVar12 * 0x20);
            if (SCARRY8(*(long *)(pcVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba1508);
              (*pcVar4)();
            }
            *(long *)(pcVar16 + 0x10) = *(long *)(pcVar16 + 0x10) + 1;
            pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
          }
          else {
            lVar18 = *(long *)(local_d0 + 0x38) + (long)pcVar12 * 0x20;
            FUN_100004594(lVar18);
            FUN_100011080(&local_b0,lVar18);
            _swift_bridgeObjectRelease(pcVar21);
            pcVar13 = PTR___type_metadata_for_Swift_String_100eac208;
          }
        }
      }
LAB_100ba132c:
      ppcVar7 = ppcVar7 + 2;
      pcVar22 = pcVar22 + -1;
    } while (pcVar22 != (char *)0x0);
  }
  _swift_bridgeObjectRelease(local_100);
  puVar14 = &DAT_101044968;
  FUN_100b6730c();
  local_88.str = pcVar16;
  lVar20 = *local_f0;
  local_70 = puVar14;
  _swift_bridgeObjectRetain(lVar20);
  FUN_100ba00e8(local_f8,&local_88,lVar20);
  return;
}



/* Address: 0x100ba1528 | FUN_100ba1528 */

void FUN_100ba1528(undefined8 *param_1,char *param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,long *param_8)

{
  long *plVar1;
  bool bVar2;
  UTType UVar3;
  UTType UVar4;
  undefined *puVar5;
  UTType UVar6;
  undefined *puVar7;
  UTType to;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  String mimeType;
  undefined auStack_90 [8];
  long *local_88;
  uint local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  local_7c = param_7;
  local_78 = param_4;
  local_70 = param_5;
  local_68 = param_6;
  UVar3 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  lVar12 = *(long *)(lVar10 + 0x40);
  uVar8 = lVar12 + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_90 + -uVar8;
  puVar7 = &DAT_1010462d0;
  FUN_100b6730c();
  puVar7 = puVar11 + -(*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 == (undefined *)0x0) {
    FUN_1000c9ffc(puVar7,1,1,UVar3.unknown);
  }
  else {
    UVar4.unknown = param_3;
    local_88 = param_8;
    _swift_bridgeObjectRetain();
    UniformTypeIdentifiers::UTType::get_data(UVar4);
    mimeType.bridgeObject = param_3;
    mimeType.str = param_2;
    UniformTypeIdentifiers::UTType::_init(mimeType,(UTType)(puVar7 + -uVar8));
    puVar5 = puVar7;
    FUN_1000c9ff0(puVar7,1,UVar3.unknown);
    if ((int)puVar5 != 1) {
      UVar4.unknown = puVar11;
      UVar6.unknown = puVar7;
      (**(code **)(lVar10 + 0x20))(puVar11,puVar7,UVar3.unknown);
      uVar8 = lVar12 + 0xfU & 0xfffffffffffffff0;
      to.unknown = puVar7 + -uVar8;
      UniformTypeIdentifiers::UTType::get_json(UVar4);
      bVar2 = UniformTypeIdentifiers::UTType::conforms(to,UVar6);
      pcVar9 = *(code **)(lVar10 + 8);
      UVar4 = UVar3;
      (*pcVar9)();
      plVar1 = local_88;
      if (bVar2) {
        if ((local_7c & 1) != 0) {
          FUN_100b9398c();
          lVar12 = *(long *)(*plVar1 + 0x10);
          FUN_100b93bf0(lVar12);
          lVar10 = *plVar1;
          *(long *)(lVar10 + 0x10) = lVar12 + 1;
          *(undefined1 *)(lVar10 + lVar12 + 0x20) = 0;
          *plVar1 = lVar10;
        }
        FUN_100ba1970(param_1,local_78,local_70,local_68,plVar1);
      }
      else {
        UniformTypeIdentifiers::UTType::get_text(to);
        bVar2 = UniformTypeIdentifiers::UTType::conforms((UTType)(puVar7 + -uVar8),UVar4);
        (*pcVar9)(puVar7 + -uVar8,UVar3.unknown);
        plVar1 = local_88;
        if (!bVar2) {
          (*pcVar9)(puVar11,UVar3.unknown);
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[1] = 0;
          *param_1 = 0;
          return;
        }
        if ((local_7c & 1) != 0) {
          FUN_100b9398c();
          lVar12 = *(long *)(*plVar1 + 0x10);
          FUN_100b93bf0(lVar12);
          lVar10 = *plVar1;
          *(long *)(lVar10 + 0x10) = lVar12 + 1;
          *(undefined1 *)(lVar10 + lVar12 + 0x20) = 1;
          *plVar1 = lVar10;
        }
        FUN_100ba1afc(param_1,local_78,local_70,local_68,plVar1);
      }
      (*pcVar9)(puVar11,UVar3.unknown);
      return;
    }
  }
  FUN_100b74780(puVar7,&DAT_1010462d0);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}



/* Address: 0x100ba17c0 | FUN_100ba17c0 */

long FUN_100ba17c0(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba1820);
    (*pcVar2)();
  }
  lVar4 = *(long *)(param_2 + 0x10);
  lVar3 = 0;
  FUN_100ba3f00(0,param_1,lVar4,param_2);
  lVar1 = lVar4;
  if ((param_1 & 1) == 0) {
    lVar1 = lVar3;
  }
  if (lVar1 <= lVar4) {
    if (-1 < lVar1) {
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba1828);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba1824);
  (*pcVar2)();
}



/* Address: 0x100ba1828 | FUN_100ba1828 */

undefined * FUN_100ba1828(ulong param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  ulong uVar2;
  Index IVar3;
  code *pcVar4;
  undefined *puVar5;
  Substring SVar6;
  Index limitedBy;
  String SVar7;
  String SVar8;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba18f4);
    (*pcVar4)();
  }
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  uVar2 = 0xb;
  if (((uint)((ulong)param_3 >> 0x3c) & (uint)(((ulong)param_2 & 0x800000000000000) == 0)) == 0) {
    uVar2 = 7;
  }
  limitedBy.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | uVar1 << 0x10);
  puVar5 = (undefined *)0xf;
  SVar8.bridgeObject = param_3;
  SVar8.str = param_2;
  Swift::String::_index((Index)0xf,param_1,limitedBy,SVar8);
  IVar3.cmsgPointer.unknown = limitedBy.cmsgPointer.unknown;
  if ((param_1 & 1) == 0) {
    IVar3.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)puVar5;
  }
  if ((ulong)IVar3.cmsgPointer.unknown >> 0xe <= uVar1 << 2) {
    SVar7.bridgeObject = param_2;
    SVar7.str = (char *)limitedBy.cmsgPointer.unknown;
    SVar6 = Swift::String::get_subscript((Range<Index>)IVar3.cmsgPointer.unknown,SVar7);
    _swift_bridgeObjectRelease(param_3);
    return SVar6.unknown;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100ba18f8);
  (*pcVar4)();
}



/* Address: 0x100ba18f8 | FUN_100ba18f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba18f8(Encoding param_1,ulong param_2)

{
  ulong uVar1;
  NSString *rawValue;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    rawValue = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _CFStringConvertIANACharSetNameToEncoding();
    param_1.unknown = (undefined *)0x0;
    if ((int)rawValue != -1) {
      _CFStringConvertEncodingToNSStringEncoding();
      Encoding::_init((__uint64)rawValue);
      return;
    }
  }
  Encoding::_get_utf8(param_1);
  return;
}



/* Address: 0x100ba1970 | FUN_100ba1970 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ba1970(undefined8 param_1,Data param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  NSData *pNVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_98 [4];
  undefined1 auStack_78 [32];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_2);
  local_98[0] = 0;
  IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                        pNVar1,1,local_98);
  if (IVar2 == 0) {
    uVar3 = local_98[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_100b9398c();
    lVar5 = *(long *)(*param_5 + 0x10);
    FUN_100b93bf0(lVar5);
    lVar4 = *param_5;
    *(long *)(lVar4 + 0x10) = lVar5 + 1;
    *(undefined1 *)(lVar4 + lVar5 + 0x20) = 2;
    *param_5 = lVar4;
    FUN_100ba1afc(param_1,param_2.unknown,param_3,param_4,param_5);
    _swift_errorRelease(uVar3);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
    FUN_10000cbfc(auStack_78,local_98);
    lVar4 = *param_5;
    _swift_bridgeObjectRetain(lVar4);
    FUN_100ba00e8(param_1,local_98,lVar4);
    FUN_100004594(auStack_78);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ba1afc | FUN_100ba1afc */

void FUN_100ba1afc(undefined8 param_1,Data param_2,ulong param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  code *pcVar2;
  Encoding EVar3;
  ulong uVar4;
  Data DVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  long local_98;
  ulong local_90;
  undefined8 local_88;
  undefined *local_80;
  ulong uStack_78;
  undefined *local_68;
  
  local_b0 = param_5;
  local_88 = param_4;
  EVar3 = Encoding::_typeMetadataAccessor();
  lVar8 = *(long *)(EVar3.unknown + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  uVar4 = Foundation::Data::get_count(param_2);
  local_90 = uVar4;
  if (2 < (long)uVar4) {
    local_90 = 3;
  }
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba1e70);
    (*pcVar2)();
  }
  lVar7 = 0;
  local_98 = (long)param_2.unknown >> 0x20;
  local_a8 = param_3 >> 0x30 & 0xff;
  local_90 = ~local_90;
  local_b8 = param_1;
  uStack_a0 = param_3 >> 0x3e;
  while( true ) {
    if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100ba1bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)*(int *)(&DAT_100ba1e70 + (param_3 >> 0x3e) * 4) + 0x100ba1bb0))(0);
      return;
    }
    FUN_100b6d4e0(param_2.unknown,param_3);
    (**(code **)(lVar8 + 0x10))
              (auStack_c0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),local_88,EVar3.unknown);
    DVar5.unknown = param_2.unknown;
    uVar4 = param_3;
    (extension_Foundation)::Swift::String::_init((Encoding)param_2.unknown);
    if (uVar4 != 0) break;
    Encoding::_get_utf8((Encoding)DVar5.unknown);
    DVar5.unknown = param_2.unknown;
    uVar4 = param_3;
    (extension_Foundation)::Swift::String::_init((Encoding)param_2.unknown);
    if (uVar4 != 0) break;
    FUN_10003bf2c(param_2.unknown,param_3);
    plVar1 = local_b0;
    lVar7 = -1;
    if (local_90 == 0xffffffffffffffff) {
      FUN_100b9398c();
      lVar6 = *(long *)(*plVar1 + 0x10);
      FUN_100b93bf0(lVar6);
      lVar8 = *plVar1;
      *(long *)(lVar8 + 0x10) = lVar6 + 1;
      *(undefined1 *)(lVar8 + lVar6 + 0x20) = 2;
      *plVar1 = lVar8;
      local_68 = PTR___type_metadata_for_Swift_String_100eac208;
      local_80 = (undefined *)0x0;
      uStack_78 = 0xe000000000000000;
      _swift_bridgeObjectRetain(lVar8);
      FUN_100ba00e8(local_b8,&local_80,lVar8);
      return;
    }
  }
  local_68 = PTR___type_metadata_for_Swift_String_100eac208;
  lVar6 = *local_b0;
  local_80 = DVar5.unknown;
  uStack_78 = uVar4;
  _swift_bridgeObjectRetain(lVar6);
  FUN_100ba00e8(local_b8,&local_80,lVar6);
  FUN_10003bf2c(param_2.unknown,param_3);
  return;
}



/* Address: 0x100ba1eb0 | FUN_100ba1eb0 */

undefined * FUN_100ba1eb0(void)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 **local_58 [3];
  undefined *local_40;
  undefined *local_38;
  
  local_38 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  FUN_100ba008c(local_58);
  pppuVar1 = local_58;
  FUN_100ba435c();
  if (*(long *)(*(long *)(unaff_x20 + 0x28) + 0x10) != 0) {
    FUN_100b86d54();
    FUN_100b9fdf4();
    FUN_100b6f838();
    puVar2 = &DAT_101044808;
    FUN_100b6730c();
    local_58[0] = pppuVar1;
    local_40 = puVar2;
    FUN_100b78fe8(local_58,0x73676e696e726177,&DAT_e800000000000000);
  }
  return local_38;
}



/* Address: 0x100ba1f54 | FUN_100ba1f54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100ba1f54(undefined *param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long *plVar2;
  long *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  long lStack_68;
  long *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *local_48;
  undefined8 local_40;
  long lStack_38;
  undefined *local_28;
  
  local_28 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  plVar2 = (long *)*unaff_x20;
  if (plVar2 != (long *)0x0) {
    FUN_100ba436c();
    local_60 = plVar2;
    local_48 = param_1;
    FUN_100b78fe8(&local_60,0x657a6973,&DAT_e400000000000000);
  }
  plVar2 = unaff_x20 + 1;
  FUN_100ba3984(plVar2,&local_90,&DAT_1010462b8);
  if (lStack_68 == 0) {
    FUN_100b74780(&local_90,&DAT_1010462b8);
  }
  else {
    uStack_58 = uStack_88;
    local_60 = local_90;
    local_48 = local_78;
    uStack_50 = uStack_80;
    lStack_38 = lStack_68;
    local_40 = local_70;
    FUN_100ba1eb0();
    puVar1 = &DAT_101044968;
    FUN_100b6730c();
    local_90 = plVar2;
    local_78 = puVar1;
    FUN_100ba435c(&local_90);
    FUN_100ba3328(&local_60);
  }
  plVar2 = (long *)unaff_x20[7];
  if (plVar2[2] != 0) {
    puVar1 = &DAT_101044b60;
    FUN_100b6730c();
    local_60 = plVar2;
    local_48 = puVar1;
    FUN_100b86d54();
    FUN_100b78fe8(&local_60,0x73726564616568,&DAT_e700000000000000);
  }
  return local_28;
}



/* Address: 0x100ba2074 | FUN_100ba2074 */

undefined1  [16] FUN_100ba2074(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dcd5f0;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x100ba2090 | _TtC6Sentry26SentryReplayNetworkDetails::replayNetworkDetailsKey */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryReplayNetworkDetails::replayNetworkDetailsKey(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100ba2074();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100ba20cc | FUN_100ba20cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba20cc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::statusCode) = param_1;
  return 0;
}



/* Address: 0x100ba20e4 | FUN_100ba20e4 */

void FUN_100ba20e4(void)

{
  FUN_100ba20fc(&_TtC6Sentry26SentryReplayNetworkDetails::request);
  return;
}



/* Address: 0x100ba20f0 | FUN_100ba20f0 */

void FUN_100ba20f0(void)

{
  FUN_100ba20fc(&_TtC6Sentry26SentryReplayNetworkDetails::response);
  return;
}



/* Address: 0x100ba20fc | FUN_100ba20fc */

undefined8 FUN_100ba20fc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 local_b8 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [56];
  long local_28;
  
  lVar1 = *param_1;
  FUN_100b78ca0(unaff_x20 + lVar1,auStack_78);
  FUN_100ba3984(unaff_x20 + lVar1,auStack_60,&DAT_101046288);
  if (local_28 == 0) {
    FUN_100b74780(auStack_60,&DAT_101046288);
    local_b8[0] = 0;
  }
  else {
    FUN_100ba39fc(auStack_60,local_b8);
    FUN_100b74780(auStack_60,&DAT_101046288);
    FUN_100b78d78();
    FUN_100ba2dbc(local_b8);
  }
  return local_b8[0];
}



/* Address: 0x100ba2190 | FUN_100ba2190 */

void FUN_100ba2190(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100ba21d0(param_1,param_2);
  return;
}



/* Address: 0x100ba21d0 | FUN_100ba21d0 */

void FUN_100ba21d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::method);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::statusCode) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::request);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::response);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100ba224c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100ba224c | FUN_100ba224c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba224c(void)

{
  return ZEXT816(0x100fa1e48);
}



/* Address: 0x100ba226c | _TtC6Sentry26SentryReplayNetworkDetails::initWithMethod: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry26SentryReplayNetworkDetails::initWithMethod_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_100ba21d0(pcVar1,SVar2.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100ba22a4 | FUN_100ba22a4 */

void FUN_100ba22a4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 local_68;
  
  if (param_3 >> 0x3c < 0xf) {
    _swift_bridgeObjectRetain(param_5);
    FUN_100b6d4cc(param_2,param_3);
    FUN_100ba42d8();
  }
  else {
    param_2 = param_1;
    FUN_100ba43b8();
  }
  FUN_100ba224c();
  FUN_100ba42f0();
  FUN_100ba2348();
  local_a0 = param_1;
  local_68 = param_2;
  FUN_100ba4328();
  FUN_100b78d78();
  FUN_100ba43a0();
  _swift_endAccess(auStack_b8);
  FUN_100ba42bc();
  return;
}



/* Address: 0x100ba2348 | FUN_100ba2348 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba26f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

Dictionary<undefined,undefined> FUN_100ba2348(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined *puVar4;
  char *pcVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  undefined8 *puVar9;
  Dictionary<undefined,undefined> DVar10;
  _StringGuts _Var11;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [32];
  char *local_d0;
  void *pvStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  void *pvStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  _StringGuts _Var12;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    DVar10 = Swift::Dictionary::_init
                       (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
    return (Dictionary<undefined,undefined>)DVar10.unknown;
  }
  local_70 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  lVar13 = *(long *)(param_2 + 0x10);
  if (lVar13 == 0) {
    return (Dictionary<undefined,undefined>)PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  lVar1 = param_1 + 0x40;
  _swift_bridgeObjectRetain(param_2);
  lVar16 = 0;
LAB_100ba23b4:
  lVar19 = lVar16 * 0x10;
  lVar16 = lVar16 + 1;
  SVar21 = Swift::String::lowercased(*(String *)(param_2 + 0x20 + lVar19));
  _Var11.unknown = SVar21.bridgeObject;
  uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((long)uVar14 < 0x40) {
    uVar18 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_1);
  lVar19 = 0;
  lVar20 = 0;
  if (uVar18 == 0) goto LAB_100ba2464;
LAB_100ba2420:
  uVar15 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
  uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
  uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
  uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
  uVar18 = uVar18 - 1 & uVar18;
  uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | lVar19 << 6;
  puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar15 * 0x10);
  local_d0 = (char *)*puVar9;
  pvVar3 = (void *)puVar9[1];
  pvStack_c8 = pvVar3;
  FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar15 * 0x20,&local_c0);
  _swift_bridgeObjectRetain(pvVar3);
  lVar8 = lVar19;
  do {
    pvVar3 = pvStack_c8;
    pcVar5 = local_d0;
    pvStack_98 = pvStack_c8;
    local_a0 = local_d0;
    uStack_88 = uStack_b8;
    uStack_90 = local_c0;
    uStack_78 = uStack_a8;
    local_80 = local_b0;
    if (pvStack_c8 == (void *)0x0) {
      FUN_100b6f860();
LAB_100ba2680:
      _swift_release(param_1);
      if (lVar16 == lVar13) {
        _swift_bridgeObjectRelease(param_2);
        return (Dictionary<undefined,undefined>)local_70;
      }
      goto LAB_100ba23b4;
    }
    FUN_100011080(&uStack_90,&local_d0);
    SVar22.bridgeObject = pvVar3;
    SVar22.str = pcVar5;
    SVar22 = Swift::String::lowercased(SVar22);
    _Var12.unknown = SVar22.bridgeObject;
    if (SVar21 == SVar22) {
      FUN_100b6f860();
      _Var11.unknown = _Var12.unknown;
LAB_100ba25fc:
      _swift_bridgeObjectRelease(_Var11.unknown);
      FUN_10000cbfc(&local_d0,auStack_f0);
      puVar4 = PTR___type_metadata_for_Any_100eae0c0;
      puVar9 = &local_100;
      FUN_100b6f878(puVar9,auStack_f0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                    PTR___type_metadata_for_Swift_String_100eac208);
      if ((int)puVar9 == 0) {
        local_100 = 0;
        uStack_f8 = 0xe000000000000000;
        Swift::__print_unlocked
                  (&local_d0,&local_100,puVar4 + 8,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
      }
      FUN_100bd5a94(local_100,uStack_f8,pcVar5,pvVar3);
      _swift_bridgeObjectRelease(pvVar3);
      FUN_100004594(&local_d0);
      goto LAB_100ba2680;
    }
    bVar7 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar22.str,_Var12,(_StringComparisonResult)(__int8)SVar21.str);
    _swift_bridgeObjectRelease(_Var12.unknown);
    if (bVar7) goto LAB_100ba25fc;
    FUN_100004594(&local_d0);
    _swift_bridgeObjectRelease(pvVar3);
    lVar19 = lVar8;
    lVar20 = lVar8;
    if (uVar18 != 0) goto LAB_100ba2420;
LAB_100ba2464:
    lVar19 = lVar20 + 1;
    if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100ba2700);
      (*pcVar6)();
    }
    lVar8 = lVar20;
    if (lVar19 < (long)uVar14) {
      uVar18 = *(ulong *)(lVar1 + lVar19 * 8);
      if (uVar18 != 0) goto LAB_100ba2420;
      lVar2 = lVar20 + 2;
      lVar8 = lVar19;
      if (lVar2 < (long)uVar14) {
        uVar18 = *(ulong *)(lVar1 + lVar2 * 8);
        lVar19 = lVar2;
        if (uVar18 != 0) goto LAB_100ba2420;
        lVar19 = lVar20 + 3;
        lVar8 = lVar2;
        if (lVar19 < (long)uVar14) {
          uVar18 = *(ulong *)(lVar1 + lVar19 * 8);
          if (uVar18 != 0) goto LAB_100ba2420;
          lVar2 = lVar20 + 4;
          lVar8 = lVar19;
          if (lVar2 < (long)uVar14) {
            uVar18 = *(ulong *)(lVar1 + lVar2 * 8);
            lVar19 = lVar2;
            if (uVar18 != 0) goto LAB_100ba2420;
            lVar19 = lVar20 + 5;
            lVar8 = lVar2;
            if (lVar19 < (long)uVar14) {
              uVar18 = *(ulong *)(lVar1 + lVar19 * 8);
              if (uVar18 != 0) goto LAB_100ba2420;
              lVar2 = lVar20 + 6;
              lVar8 = lVar19;
              if (lVar2 < (long)uVar14) {
                uVar18 = *(ulong *)(lVar1 + lVar2 * 8);
                lVar19 = lVar2;
                if (uVar18 != 0) goto LAB_100ba2420;
                lVar8 = lVar20 + 7;
                puVar17 = (ulong *)(param_1 + 0x78 + lVar20 * 8);
                while (lVar19 = lVar8, lVar8 = uVar14 - 1, lVar19 < (long)uVar14) {
                  uVar18 = *puVar17;
                  lVar8 = lVar19 + 1;
                  puVar17 = puVar17 + 1;
                  if (uVar18 != 0) goto LAB_100ba2420;
                }
              }
            }
          }
        }
      }
    }
    uVar18 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    pvStack_c8 = (void *)0x0;
    local_d0 = (char *)0x0;
  } while( true );
}



/* Address: 0x100ba2700 | FUN_100ba2700 */

undefined8 FUN_100ba2700(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101046288;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100ba2748 | _TtC6Sentry26SentryReplayNetworkDetails::setRequestWithSize:bodyData:contentType:allHeaders:configuredHeaders: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC6Sentry26SentryReplayNetworkDetails::
     setRequestWithSize_bodyData_contentType_allHeaders_configuredHeaders_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7)

{
  Data DVar1;
  Dictionary<undefined,undefined> DVar2;
  String SVar3;
  
  if (param_4 == 0) {
    param_2 = (SEL)0xf000000000000000;
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_4);
  }
  if (param_5 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_6 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_7 == 0) {
    param_7 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100ba22a4(param_3,DVar1.unknown,param_2,SVar3.str,SVar3.bridgeObject,DVar2.unknown,param_7);
  _swift_bridgeObjectRelease(param_7);
  _swift_bridgeObjectRelease(DVar2.unknown);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  FUN_10003bf18(DVar1.unknown,param_2);
  return;
}



/* Address: 0x100ba28f0 | FUN_100ba28f0 */

void FUN_100ba28f0(undefined8 param_1,undefined8 param_2,ID param_3,ulong param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined *self;
  ID IVar1;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  ID local_68;
  
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"initWithInteger:",param_1);
  FUN_100ba20cc();
  if (param_4 >> 0x3c < 0xf) {
    _swift_bridgeObjectRetain(param_6);
    FUN_100b6d4cc(param_3,param_4);
    FUN_100ba42d8();
  }
  else {
    FUN_100ba43b8();
    param_3 = IVar1;
  }
  FUN_100ba224c();
  FUN_100ba42f0();
  FUN_100ba2348();
  local_a0 = param_2;
  local_68 = param_3;
  FUN_100ba4328();
  FUN_100b78d78();
  FUN_100ba43a0();
  _swift_endAccess(auStack_b8);
  FUN_100ba42bc();
  return;
}



/* Address: 0x100ba29b8 | _TtC6Sentry26SentryReplayNetworkDetails::setResponseWithStatusCode:size:bodyData:contentType:allHeaders:configuredHeaders: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x40 bytes */

void _TtC6Sentry26SentryReplayNetworkDetails::
     setResponseWithStatusCode_size_bodyData_contentType_allHeaders_configuredHeaders_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5,ID param_6,ID param_7
               ,ID param_8)

{
  Data DVar1;
  Dictionary<undefined,undefined> DVar2;
  String SVar3;
  
  if (param_5 == 0) {
    param_2 = (SEL)0xf000000000000000;
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_5);
  }
  if (param_6 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_7 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  if (param_8 == 0) {
    param_8 = 0;
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100ba28f0(param_3,param_4,DVar1.unknown,param_2,SVar3.str,SVar3.bridgeObject,DVar2.unknown,
                param_8);
  _swift_bridgeObjectRelease(param_8);
  _swift_bridgeObjectRelease(DVar2.unknown);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  FUN_10003bf18(DVar1.unknown,param_2);
  return;
}



/* Address: 0x100ba2b68 | FUN_100ba2b68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100ba2b68(void)

{
  long lVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 ***pppuVar5;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  long local_c0 [3];
  undefined *local_a8;
  long local_88;
  undefined8 **local_80;
  long lStack_78;
  undefined8 **local_68;
  undefined *local_38;
  
  local_38 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  lVar1 = ((undefined8 *)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::method))[1];
  pppuVar2 = (undefined8 ***)0x0;
  if (lVar1 != 0) {
    local_80 = *(undefined8 ***)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::method);
    local_68 = (undefined8 **)PTR___type_metadata_for_Swift_String_100eac208;
    lStack_78 = lVar1;
    _swift_bridgeObjectRetain();
    pppuVar2 = &local_80;
    FUN_100b78fe8(pppuVar2,0x646f6874656d,&DAT_e600000000000000);
  }
  pppuVar5 = *(undefined8 ****)(unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::statusCode);
  pppuVar3 = pppuVar2;
  if (pppuVar5 != (undefined8 ***)0x0) {
    FUN_100ba436c();
    pppuVar3 = &local_80;
    local_80 = pppuVar5;
    local_68 = pppuVar2;
    FUN_100b78fe8(pppuVar3,0x6f43737574617473,0xea00000000006564);
  }
  FUN_100ba20e4();
  pppuVar2 = pppuVar3;
  if (pppuVar3 != (undefined8 ***)0x0) {
    pppuVar5 = pppuVar3;
    FUN_100ba436c();
    pppuVar2 = &local_80;
    local_80 = pppuVar3;
    local_68 = pppuVar5;
    FUN_100b78fe8(pppuVar2,0x4274736575716572,0xef657a695379646f);
  }
  FUN_100ba20f0();
  if (pppuVar2 != (undefined8 ***)0x0) {
    pppuVar3 = pppuVar2;
    FUN_100ba436c();
    local_80 = pppuVar2;
    local_68 = pppuVar3;
    FUN_100b78fe8(&local_80,0xd000000000000010,0x8000000100dcd610);
  }
  lVar1 = unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::request;
  FUN_100b78ca0(lVar1,auStack_d8);
  FUN_100ba43ac();
  if (local_88 == 0) {
    FUN_100b74780(local_c0,&DAT_101046288);
  }
  else {
    FUN_100ba42fc();
    puVar4 = &DAT_101044968;
    FUN_100b6730c();
    local_c0[0] = lVar1;
    local_a8 = puVar4;
    FUN_100b78fe8(local_c0,0x74736575716572,&DAT_e700000000000000);
    FUN_100ba2dbc(&local_80);
  }
  lVar1 = unaff_x20 + _TtC6Sentry26SentryReplayNetworkDetails::response;
  FUN_100b78ca0(lVar1,auStack_f0);
  FUN_100ba43ac();
  if (local_88 == 0) {
    FUN_100b74780(local_c0,&DAT_101046288);
  }
  else {
    FUN_100ba42fc();
    puVar4 = &DAT_101044968;
    FUN_100b6730c();
    local_c0[0] = lVar1;
    local_a8 = puVar4;
    FUN_100b78fe8(local_c0,0x65736e6f70736572,&DAT_e800000000000000);
    FUN_100ba2dbc(&local_80);
  }
  return local_38;
}



/* Address: 0x100ba2dbc | FUN_100ba2dbc */

undefined8 FUN_100ba2dbc(undefined8 param_1)

{
  FUN_100ba307c(param_1,&DAT_100f392d8);
  return param_1;
}



/* Address: 0x100ba2de8 | _TtC6Sentry26SentryReplayNetworkDetails::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryReplayNetworkDetails::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100ba2b68(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100ba2e4c | _TtC6Sentry26SentryReplayNetworkDetails::description */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryReplayNetworkDetails::description(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100ba2ea4(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100ba2ea4 | FUN_100ba2ea4 */

undefined1  [16] FUN_100ba2ea4(undefined8 param_1,_StringGuts param_2)

{
  undefined1 auVar1 [16];
  Dictionary DVar2;
  char *pcVar3;
  undefined *puVar4;
  String SVar5;
  String SVar6;
  
  Swift::_StringGuts::grow(0x1e,param_2);
  DVar2.unknown = (undefined *)0xe000000000000000;
  _swift_bridgeObjectRelease();
  FUN_100ba2b68();
  pcVar3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  puVar4 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  SVar5 = Swift::Dictionary::get_description(DVar2);
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::append(SVar5,SVar6);
  FUN_100b6f838();
  FUN_100b6f980();
  auVar1._8_8_ = 0x8000000100dcd630;
  auVar1._0_8_ = 0xd00000000000001c;
  return auVar1;
}



/* Address: 0x100ba2f4c | FUN_100ba2f4c */

void FUN_100ba2f4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryReplayNetworkDetails",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba2f78);
  (*pcVar1)();
}


