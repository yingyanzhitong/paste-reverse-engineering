/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10082492c | thunk_FUN_100824398 */

void thunk_FUN_100824398(void)

{
  thunk_FUN_100824398();
  return;
}



/* Address: 0x100824930 | thunk_FUN_100824350 */

void thunk_FUN_100824350(void)

{
  thunk_FUN_100824350();
  return;
}



/* Address: 0x100824934 | thunk_FUN_100824398 */

void thunk_FUN_100824398(void)

{
  thunk_FUN_100824398();
  return;
}



/* Address: 0x100824938 | thunk_FUN_100824350 */

void thunk_FUN_100824350(void)

{
  thunk_FUN_100824350();
  return;
}



/* Address: 0x10082493c | thunk_FUN_100824398 */

void thunk_FUN_100824398(void)

{
  thunk_FUN_100824398();
  return;
}



/* Address: 0x100824940 | thunk_FUN_100824350 */

void thunk_FUN_100824350(void)

{
  thunk_FUN_100824350();
  return;
}



/* Address: 0x100824944 | thunk_FUN_100824398 */

void thunk_FUN_100824398(void)

{
  thunk_FUN_100824398();
  return;
}



/* Address: 0x100824948 | thunk_FUN_100824350 */

void thunk_FUN_100824350(void)

{
  thunk_FUN_100824350();
  return;
}



/* Address: 0x10082494c | thunk_FUN_100824398 */

void thunk_FUN_100824398(void)

{
  thunk_FUN_100824398();
  return;
}



/* Address: 0x100824950 | FUN_100824950 */

void FUN_100824950(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10080a674(unaff_x20 + 0x18);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10082497c | thunk_FUN_100824edc */

void thunk_FUN_100824edc(void)

{
  FUN_100824edc();
  return;
}



/* Address: 0x100824980 | FUN_100824980 */

undefined * FUN_100824980(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_78 [40];
  
  puVar1 = &DAT_100fe7280;
  FUN_1000f7830(&DAT_100fe7280,&DAT_100c7bfd8);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(long *)(puVar1 + 0x38) = param_3;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  FUN_10000cbb0(puVar1 + 0x20);
  lVar2 = *(long *)(param_3 + -8);
  (**(code **)(lVar2 + 0x10))();
  FUN_10080b3ec(param_2,auStack_78);
  FUN_100824edc(puVar1,auStack_78);
  FUN_10080a674(param_2);
  (**(code **)(lVar2 + 8))(param_1,param_3);
  return puVar1;
}



/* Address: 0x100824a60 | FUN_100824a60 */

long FUN_100824a60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_50;
  long local_48;
  
  if (param_3 == 0) {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    local_48 = param_3;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_1);
    FUN_1007ffd94();
    _swift_bridgeObjectRetain(param_2);
    uVar1 = param_4;
    _swift_isUniquelyReferenced_nonNull_native(param_4);
    local_50 = param_4;
    FUN_100800c1c(param_2,FUN_100800294,0,uVar1,&local_50);
    _swift_bridgeObjectRelease(param_2);
    param_1 = local_48;
  }
  _swift_retain(param_5);
  return param_1;
}



/* Address: 0x100824b30 | FUN_100824b30 */

undefined1  [16]
FUN_100824b30(undefined8 param_1,_StringGuts param_2,char *param_3,undefined *param_4)

{
  undefined1 auVar1 [16];
  String *unaff_x20;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
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
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  
  pcVar2 = unaff_x20->str;
  pvVar3 = unaff_x20->bridgeObject;
  SVar14 = *unaff_x20;
  SVar6 = *unaff_x20;
  if (*(char *)&unaff_x20[2].str == '\0') {
    local_50 = 0;
    local_48 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,param_2);
    _swift_bridgeObjectRelease(local_48);
    local_50 = 0xd000000000000027;
    local_48 = 0x8000000100db1d90;
    thunk_FUN_1007ff8e4();
    SVar6.bridgeObject = pvVar3;
    SVar6.str = pcVar2;
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar6,SVar14);
    _swift_bridgeObjectRelease(pvVar3);
  }
  else {
    pcVar2 = unaff_x20[1].str;
    if (*(char *)&unaff_x20[2].str == '\x01') {
      local_50 = 0;
      local_48 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x37,param_2);
      SVar4.bridgeObject = (void *)0x8000000100db1d30;
      SVar4.str = (char *)0xd000000000000016;
      SVar11.bridgeObject = param_4;
      SVar11.str = param_3;
      Swift::String::append(SVar4,SVar11);
      SVar12.bridgeObject = param_4;
      SVar12.str = param_3;
      Swift::String::append(SVar6,SVar12);
      SVar5.bridgeObject = (void *)0x8000000100db1d70;
      SVar5.str = (char *)0xd00000000000001c;
      SVar13.bridgeObject = param_4;
      SVar13.str = param_3;
      Swift::String::append(SVar5,SVar13);
      local_51 = SUB81(pcVar2,0);
      param_3 = "\x01\x02";
      param_4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (&local_51,&local_50,&DAT_100f046d8,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
    }
    else {
      pvVar3 = unaff_x20[1].bridgeObject;
      local_50 = 0;
      local_48 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x34,param_2);
      SVar7.bridgeObject = (void *)0x8000000100db1d30;
      SVar7.str = (char *)0xd000000000000016;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar7,SVar15);
      SVar16.bridgeObject = param_4;
      SVar16.str = param_3;
      Swift::String::append(SVar14,SVar16);
      SVar8.bridgeObject = (void *)0x8000000100db1d50;
      SVar8.str = (char *)0xd000000000000019;
      SVar17.bridgeObject = param_4;
      SVar17.str = param_3;
      Swift::String::append(SVar8,SVar17);
      SVar9.bridgeObject = pvVar3;
      SVar9.str = pcVar2;
      SVar18.bridgeObject = param_4;
      SVar18.str = param_3;
      Swift::String::append(SVar9,SVar18);
    }
  }
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x2e;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar10,SVar19);
  auVar1._8_8_ = local_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}



/* Address: 0x100824d0c | thunk_FUN_100824d5c */

void thunk_FUN_100824d5c(void)

{
  FUN_100824d5c();
  return;
}



/* Address: 0x100824d10 | thunk_FUN_100824b30 */

void thunk_FUN_100824b30(void)

{
  FUN_100824b30();
  return;
}



/* Address: 0x100824d14 | FUN_100824d14 */

uint FUN_100824d14(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = *(undefined1 *)(param_2 + 4);
  FUN_100824d5c(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x100824d5c | FUN_100824d5c */

bool FUN_100824d5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  long lVar9;
  _StringGuts _Var10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  _Var4.unknown = (undefined *)*param_1;
  _Var7.unknown = (undefined *)param_1[1];
  puVar6 = (undefined *)param_2[1];
  if (*(char *)(param_1 + 4) == '\0') {
    if (*(char *)(param_2 + 4) == '\0') {
      puVar5 = (undefined *)*param_2;
      lVar9 = *(long *)(_Var4.unknown + 0x10);
      if (lVar9 == *(long *)(puVar5 + 0x10)) {
        if (lVar9 != 0 && puVar5 != _Var4.unknown) {
          puVar11 = (undefined8 *)(puVar5 + 0x28);
          puVar12 = (undefined8 *)(_Var4.unknown + 0x28);
          do {
            if (((undefined *)puVar12[-1] != (undefined *)puVar11[-1] ||
                 (undefined *)*puVar12 != (undefined *)*puVar11) &&
               (bVar3 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)puVar12[-1],(undefined *)*puVar12,
                                   (_StringComparisonResult)(__int8)(undefined *)puVar11[-1]),
               !bVar3)) {
              return false;
            }
            puVar11 = puVar11 + 2;
            puVar12 = puVar12 + 2;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        FUN_100832498(_Var7.unknown,puVar6);
        if (((ulong)_Var7.unknown & 1) != 0) {
          return true;
        }
      }
    }
  }
  else {
    _Var8.unknown = (undefined *)param_1[2];
    if (*(char *)(param_1 + 4) == '\x01') {
      if (*(char *)(param_2 + 4) == '\x01') {
        bVar2 = *(byte *)(param_2 + 2);
        if ((_Var4.unknown == (undefined *)*param_2 && _Var7.unknown == puVar6) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              (_Var4,_Var7,(_StringComparisonResult)(__int8)(undefined *)*param_2),
           bVar3)) {
          return (uint)bVar2 == ((uint)_Var8.unknown & 0xff);
        }
      }
    }
    else if (*(char *)(param_2 + 4) == '\x02') {
      _Var10.unknown = (undefined *)param_1[3];
      puVar5 = (undefined *)param_2[2];
      puVar1 = (undefined *)param_2[3];
      if ((_Var4.unknown == (undefined *)*param_2 && _Var7.unknown == puVar6) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            (_Var4,_Var7,(_StringComparisonResult)(__int8)(undefined *)*param_2),
         bVar3)) {
        if ((_Var8.unknown == puVar5) && (_Var10.unknown == puVar1)) {
          return true;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var8,_Var10,(_StringComparisonResult)(__int8)puVar5);
        return bVar3;
      }
    }
  }
  return false;
}



/* Address: 0x100824edc | FUN_100824edc */

undefined8 FUN_100824edc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined **local_38;
  
  FUN_10080b3ec(param_2,&local_58);
  if (DAT_100fe6f50 != -1) {
    _swift_once(&DAT_100fe6f50,FUN_1007fcbf0);
  }
  puVar1 = DAT_100fe6f08;
  if (DAT_100fe6f10 == '\x01') {
    local_a0 = DAT_100fe6f08;
    _Var6.unknown = (undefined *)0x0;
    pcVar7 = (char *)0x0;
    puVar8 = &DAT_00000012;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar1);
    if ((bVar3 & 1) != 0) {
      _Var6.unknown = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      pcVar7 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_willThrowTypedImpl(&local_a0);
    }
    local_a0 = (undefined *)0x0;
    uStack_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x6f,_Var6);
    SVar10.bridgeObject = (void *)0x8000000100db1dc0;
    SVar10.str = (char *)0xd00000000000006d;
    SVar11.bridgeObject = puVar8;
    SVar11.str = pcVar7;
    Swift::String::append(SVar10,SVar11);
    _swift_getErrorValue(puVar1,auStack_60,&local_78);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_78,uStack_70);
    uVar4 = uStack_98;
    FUN_100856824(local_a0,uStack_98);
    _swift_bridgeObjectRelease(uVar4);
    FUN_1005dff14(puVar1,1);
  }
  else if (DAT_100fe6f08 != (undefined *)0x0) {
    FUN_10080b3ec(param_2,auStack_c8);
    if (local_b0 == 0) {
      _swift_retain(puVar1);
      FUN_10080a674(auStack_c8);
      puVar5 = (undefined *)0x0;
      FUN_1007fe194();
      FUN_10080a674(&local_58);
      local_58 = puVar1;
      local_38 = &PTR_DAT_100f04210;
      puStack_40 = puVar5;
    }
    else {
      FUN_100076508(auStack_c8,&local_a0);
      puVar5 = &DAT_100fe7330;
      FUN_1000f7830(&DAT_100fe7330,&DAT_100c7c0b8);
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 4;
      *(undefined8 *)(puVar5 + 0x10) = 2;
      FUN_100076688(&local_a0,puVar5 + 0x20);
      uVar4 = 0;
      FUN_1007fe194();
      *(undefined8 *)(puVar5 + 0x60) = uVar4;
      *(undefined ***)(puVar5 + 0x68) = &PTR_DAT_100f04210;
      *(undefined **)(puVar5 + 0x48) = puVar1;
      _swift_retain(puVar1);
      FUN_100004594(&local_a0);
      FUN_10080a674(&local_58);
      puStack_40 = &DAT_100f040e8;
      local_38 = &PTR_PTR_100f03f38;
      local_58 = puVar5;
    }
  }
  lVar9 = *(long *)(param_1 + 0x10);
  FUN_10080a674(param_2);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100825160);
    (*pcVar2)();
  }
  lVar9 = 0;
  FUN_10082535c();
  _swift_allocObject();
  *(long *)(lVar9 + 0x10) = param_1;
  *(undefined8 *)(lVar9 + 0x20) = uStack_50;
  *(undefined **)(lVar9 + 0x18) = local_58;
  *(undefined **)(lVar9 + 0x30) = puStack_40;
  *(undefined8 *)(lVar9 + 0x28) = local_48;
  *(undefined ***)(lVar9 + 0x38) = local_38;
  return 0;
}



/* Address: 0x100825160 | thunk_FUN_100825198 */

long * thunk_FUN_100825198(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar1;
  }
  else {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar1);
  }
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Address: 0x100825164 | FUN_100825164 */

void FUN_100825164(long *param_1)

{
  if (*param_1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_1[1]);
  }
  _swift_release(param_1[2]);
  return;
}



/* Address: 0x100825198 | FUN_100825198 */

long * FUN_100825198(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar1;
  }
  else {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar1);
  }
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Address: 0x1008251f8 | FUN_1008251f8 */

long * FUN_1008251f8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = *param_2;
  if (lVar2 == 0) {
    if (lVar1 != 0) {
      *param_1 = lVar1;
      lVar1 = param_2[1];
      param_1[1] = lVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar1);
      goto LAB_10082527c;
    }
  }
  else {
    if (lVar1 != 0) {
      *param_1 = lVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar2);
      lVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_10082527c;
    }
    FUN_1008252a8(param_1);
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
LAB_10082527c:
  lVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(lVar1);
  return param_1;
}



/* Address: 0x1008252a8 | FUN_1008252a8 */

undefined8 FUN_1008252a8(undefined8 param_1)

{
  thunk_FUN_1001b6840();
  return param_1;
}



/* Address: 0x1008252dc | FUN_1008252dc */

long * FUN_1008252dc(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_1 != 0) {
    if (*param_2 != 0) {
      *param_1 = *param_2;
      _swift_bridgeObjectRelease();
      lVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_10082532c;
    }
    FUN_1008252a8(param_1);
  }
  lVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar1;
LAB_10082532c:
  lVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(lVar1);
  return param_1;
}



/* Address: 0x10082534c | FUN_10082534c */

undefined1  [16] FUN_10082534c(void)

{
  return ZEXT816(0x100f052d0);
}



/* Address: 0x10082535c | FUN_10082535c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10082535c(void)

{
  return ZEXT816(0x100fe72c8);
}



/* Address: 0x10082537c | FUN_10082537c */

void FUN_10082537c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\0') {
    if (param_5 == '\x01') goto LAB_1008253b0;
    param_1 = param_2;
    param_2 = param_4;
    if (param_5 != '\x02') {
      return;
    }
  }
  _swift_bridgeObjectRetain(param_1);
LAB_1008253b0:
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1008253cc | FUN_1008253cc */

void FUN_1008253cc(undefined8 *param_1)

{
  FUN_1008253e0(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1008253e0 | FUN_1008253e0 */

void FUN_1008253e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\0') {
    if (param_5 == '\x01') goto LAB_100825414;
    param_1 = param_2;
    param_2 = param_4;
    if (param_5 != '\x02') {
      return;
    }
  }
  _swift_bridgeObjectRelease(param_1);
LAB_100825414:
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100825430 | FUN_100825430 */

undefined8 * FUN_100825430(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_10082537c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x100825490 | FUN_100825490 */

undefined8 * FUN_100825490(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_10082537c(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1008253e0(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x100825500 | FUN_100825500 */

void FUN_100825500(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100825514 | FUN_100825514 */

undefined8 * FUN_100825514(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1008253e0(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x10082555c | FUN_10082555c */

undefined1  [16] FUN_10082555c(void)

{
  return ZEXT816(0x100f05368);
}



/* Address: 0x10082556c | thunk_FUN_100825198 */

void thunk_FUN_100825198(void)

{
  thunk_FUN_100825198();
  return;
}



/* Address: 0x100825570 | FUN_100825570 */

undefined1  [16]
FUN_100825570(undefined1 *param_1,long param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  byte bVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 **ppuVar12;
  long lVar13;
  Date DVar14;
  undefined1 *puVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  ushort uVar22;
  code *pcVar23;
  undefined1 auVar24 [16];
  undefined1 *local_120;
  long local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  long local_d0;
  long local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar18 = *(ulong *)(param_9 + 0x10);
  uVar16 = 0;
  puVar10 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar15 = puVar10;
  lVar21 = param_2;
  uVar19 = uVar16;
  FUN_100804a74();
  uVar17 = (uint)uVar19;
  local_f0[3] = (undefined *)param_3;
  local_c8 = lVar21;
  FUN_1007fb2c4(param_2,uVar16,uVar18,uVar18 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar10);
  lVar21 = local_c8;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar15;
    bVar9 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar9 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar20 = (undefined *)0x0;
  }
  else if ((uVar17 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar15,local_c8,uVar19,uVar17 >> 0x10);
    puVar20 = (undefined *)0x0;
  }
  else {
    if ((uVar19 & 0xff) == 0) {
      FUN_1007fb28c(puVar15,local_c8,uVar19);
      puVar20 = (undefined *)0x0;
      uVar22 = (ushort)uVar19 & 0x100;
      puVar10 = puVar15;
      goto LAB_1008256f8;
    }
    puVar10 = puVar15;
    FUN_1000f4a4c(puVar15,local_c8,uVar19);
    puVar11 = puVar10;
    FUN_10080b43c();
    puVar20 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar11,0,0);
    *puVar11 = (char)puVar10;
    puVar11[1] = 0;
    _swift_willThrow();
  }
  lVar21 = 0;
  uVar22 = 0;
  puVar10 = (undefined1 *)0x0;
LAB_1008256f8:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(puVar15,local_c8,uVar19,uVar17 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar17 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    local_118 = lStack_70;
    ppuVar12 = local_90;
    local_120 = param_1;
    local_108 = puVar15;
    FUN_100004640(ppuVar12,local_78);
    lVar13 = 0;
    local_110 = ppuVar12;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)&local_120 + lVar4);
    local_100 = (undefined1 *)&local_120;
    FUN_1007fb128();
    puVar6 = local_f0[2];
    DVar14.unknown = local_f0[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar14);
    *puVar11 = 0;
    lVar8 = local_d0;
    puVar7 = local_f0[3];
    *(undefined1 **)((long)&local_118 + lVar4) = local_120;
    *(long *)((long)&local_110 + lVar4) = lVar8;
    *(undefined1 *)((long)&local_108 + lVar4) = 0;
    puVar5 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar4) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar4) = puVar6;
    *(undefined **)((long)local_f0 + lVar4) = puVar5;
    puVar15 = (undefined1 *)0x0;
    if (lVar21 != 0) {
      puVar15 = puVar10;
    }
    uVar2 = 0x200;
    if (lVar21 != 0) {
      uVar2 = uVar22;
    }
    iVar3 = *(int *)(lVar13 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar13 + 0x14)) = puVar7;
    *(undefined **)(puVar11 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar13 + 0x1c));
    *puVar1 = puVar15;
    puVar1[1] = lVar21;
    lVar4 = local_118;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar23 = *(code **)(local_118 + 8);
    _swift_bridgeObjectRetain(lVar21);
    _swift_errorRetain(puVar20);
    (*pcVar23)(puVar11,local_78,lVar4);
    FUN_1007fb2c4(local_108,local_c8,uVar19,local_f4);
    _swift_errorRelease(puVar20);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  puVar15 = (undefined1 *)0x0;
  if (lVar21 != 0) {
    puVar15 = puVar10;
  }
  auVar24._8_8_ = lVar21;
  auVar24._0_8_ = puVar15;
  return auVar24;
}



/* Address: 0x1008258e8 | FUN_1008258e8 */

undefined1  [16]
FUN_1008258e8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7,undefined *param_8,
             undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 uVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 auVar22 [16];
  undefined1 **appuStack_130 [2];
  undefined1 ***local_120;
  undefined1 auStack_11e [6];
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined *local_108 [3];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_108[0] = param_8;
  local_108[1] = (undefined *)param_6;
  local_108[2] = param_7;
  local_d0 = param_4;
  FUN_1007ffcdc(param_1,param_2,param_9,param_10);
  uVar17 = *(ulong *)(param_11 + 0x10);
  uVar14 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  FUN_10082f764();
  local_ec = (uint)param_3;
  puVar13 = param_1;
  uVar15 = param_2;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  local_e8 = param_3;
  local_c8 = uVar15;
  FUN_1007fb2c4(param_2,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  uVar15 = local_c8;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar13;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      if ((uVar18 & 0xff) == 0) {
        local_ec = uVar16 >> 8 & 1;
        FUN_1007fb28c(puVar13,local_c8,uVar18);
        puVar21 = (undefined *)0x0;
        local_d0 = puVar13;
      }
      else {
        puVar11 = puVar13;
        FUN_1000f4a4c(puVar13,local_c8,uVar18);
        puVar12 = puVar11;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar12,0,0);
        *puVar12 = (char)puVar11;
        puVar12[1] = 0;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_5);
        uVar15 = param_5;
      }
      goto LAB_100825a1c;
    }
    FUN_1007fb2c4(puVar13,local_c8,uVar18,uVar16 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_5);
  puVar21 = (undefined *)0x0;
  uVar15 = param_5;
LAB_100825a1c:
  FUN_10080b3ec(param_11 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar13,local_c8,uVar18,uVar16 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    uStack_110._4_4_ = uVar16 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_118 = puVar13;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar13 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    FUN_1007fb128();
    puVar5 = local_108[2];
    DVar10.unknown = local_108[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar13 = 0;
    uVar6 = local_e0;
    *(undefined1 **)((long)appuStack_130 + lVar3 + 8) = local_d8;
    *(undefined8 *)((long)&stack0xfffffffffffffee0 + lVar3) = uVar6;
    *(undefined1 *)((long)&local_118 + lVar3) = 0;
    puVar4 = local_108[0];
    *(undefined **)((long)&uStack_110 + lVar3) = local_108[1];
    *(undefined **)((long)local_108 + lVar3) = puVar5;
    *(undefined **)((long)local_108 + lVar3 + 8) = puVar4;
    uVar19 = 0x100;
    if ((local_ec & 1) == 0) {
      uVar19 = 0;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar13 + *(int *)(lVar9 + 0x14)) = local_e8;
    *(undefined **)(puVar13 + iVar2) = puVar21;
    puVar11 = local_d0;
    puVar1 = (undefined8 *)(puVar13 + *(int *)(lVar9 + 0x1c));
    *puVar1 = local_d0;
    puVar1[1] = uVar15;
    *(undefined2 *)(puVar1 + 2) = uVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar21);
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar20)(puVar13,local_78,lStack_70);
    FUN_1007fb2c4(local_118,local_c8,uVar18,uStack_110._4_4_);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar13);
    FUN_100004594(local_90);
    local_d0 = puVar11;
  }
  auVar22._8_8_ = uVar15;
  auVar22._0_8_ = local_d0;
  return auVar22;
}



/* Address: 0x100825c64 | FUN_100825c64 */

undefined1  [16]
FUN_100825c64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long lVar10;
  Date DVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  undefined8 **appuStack_140 [2];
  undefined8 ***local_130;
  undefined1 auStack_12e [6];
  long local_128;
  undefined *local_120 [5];
  undefined8 *local_f0;
  undefined4 local_e4;
  uint local_cc;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined *local_78;
  long local_70;
  
  local_120[2] = (undefined *)param_4;
  local_120[3] = param_5;
  local_120[4] = (undefined *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 0;
  puVar23 = param_1;
  uVar20 = param_2;
  FUN_10082f764();
  puVar13 = puVar23;
  uVar15 = uVar20;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar20,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      local_cc = uVar16 & 0x1ff;
      bVar5 = (uVar18 & 0xff) == 0;
      if (bVar5) {
        uVar21 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar23 = (undefined8 *)0x0;
        uVar20 = uVar15;
      }
      else {
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar8 = puVar7;
        FUN_10080b43c();
        puVar23 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar8,0,0);
        *(char *)puVar8 = (char)puVar7;
        *(undefined1 *)((long)puVar8 + 1) = 0;
        _swift_willThrow();
        _swift_errorRetain(puVar23);
        uVar21 = 0;
        uVar20 = 0;
        puVar7 = puVar23;
      }
      bVar5 = !bVar5;
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_e4 = 0;
      puVar19 = (undefined *)uVar15;
      local_f0 = puVar13;
      goto LAB_100825e74;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar23,0,0);
    *puVar23 = param_1;
    puVar23[1] = param_2;
    puVar23[2] = 0;
    puVar23[3] = 0;
    *(undefined1 *)(puVar23 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  uVar20 = 0;
  uVar21 = 0;
  puVar23 = (undefined8 *)0x0;
  local_cc = 0;
  bVar5 = true;
  local_e4 = 1;
  puVar19 = (undefined *)0;
  local_f0 = puVar7;
LAB_100825e74:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_120[0] = local_78;
    local_128 = local_70;
    ppuVar9 = local_90;
    FUN_100004640();
    lVar10 = 0;
    appuStack_140[1] = ppuVar9;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)appuStack_140 + lVar4);
    local_130 = appuStack_140;
    local_120[1] = puVar19;
    FUN_1007fb128();
    puVar19 = local_120[3];
    DVar11.unknown = local_120[3];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar22 = 0;
    *(undefined8 **)((long)appuStack_140 + lVar4 + 8) = param_1;
    *(undefined8 *)((long)&stack0xfffffffffffffed0 + lVar4) = param_2;
    *(undefined1 *)((long)&local_128 + lVar4) = 0;
    *(undefined **)((long)local_120 + lVar4) = local_120[2];
    *(undefined **)((long)local_120 + lVar4 + 8) = puVar19;
    uVar1 = 0;
    if (bVar5 == false) {
      uVar1 = (short)(uVar21 << 8);
    }
    uVar2 = 0;
    if (bVar5 == false) {
      uVar2 = uVar20;
    }
    *(undefined **)((long)local_120 + lVar4 + 0x10) = local_120[4];
    _swift_errorRetain(puVar23);
    FUN_100813fa8(puVar7,uVar20,uVar21,bVar5);
    _swift_errorRelease(0);
    iVar3 = *(int *)(lVar10 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar10 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar3) = puVar23;
    puVar8 = (undefined8 *)(puVar22 + *(int *)(lVar10 + 0x1c));
    *puVar8 = puVar7;
    puVar8[1] = uVar2;
    *(undefined2 *)(puVar8 + 2) = uVar1;
    *(bool *)((long)puVar8 + 0x12) = bVar5;
    (**(code **)(local_128 + 8))(puVar22,local_120[0]);
    puVar19 = local_120[1];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar5 == false) {
    _swift_bridgeObjectRetain(uVar20);
    FUN_10080a6bc(local_f0,puVar19,local_cc,local_e4);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_100813f90(puVar7,uVar20,uVar21,0);
    _swift_errorRelease(puVar23);
  }
  else {
    local_90[0] = puVar7;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar6 & 1) != 0) {
      puVar12 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar12,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_f0,puVar19,local_cc,local_e4);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_100813f90(puVar7,uVar20,uVar21,1);
    _swift_errorRelease(puVar23);
  }
  auVar24._8_8_ = uVar20;
  auVar24._0_8_ = puVar7;
  return auVar24;
}



/* Address: 0x10082615c | FUN_10082615c */

undefined1  [16]
FUN_10082615c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 **ppuVar10;
  long lVar11;
  Date DVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  short sVar19;
  undefined *puVar20;
  code *pcVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 *apuStack_120 [2];
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined *local_f8 [5];
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f8[0] = param_4;
  local_f8[1] = param_5;
  local_f8[2] = (undefined *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 1;
  local_f8[4] = (undefined *)param_2;
  local_c8 = param_1;
  FUN_10082f764();
  puVar13 = param_1;
  uVar15 = param_2;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  local_f8[3] = (undefined *)param_3;
  FUN_1007fb2c4(param_2,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  local_d0 = uVar15;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar13;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar20 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar16 >> 0x10);
    puVar20 = (undefined *)0x0;
  }
  else {
    if ((uVar16 & 0xff) == 1) {
      uVar22 = uVar16 >> 8 & 1;
      FUN_1007fb28c(puVar13,uVar15,uVar18);
      puVar20 = (undefined *)0x0;
      puVar8 = puVar13;
      goto LAB_100826318;
    }
    puVar8 = puVar13;
    FUN_1000f4a4c(puVar13,uVar15,uVar18);
    puVar9 = puVar8;
    FUN_10080b43c();
    puVar20 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar9,0,0);
    *puVar9 = (char)puVar8;
    puVar9[1] = 1;
    _swift_willThrow();
  }
  uVar22 = 2;
  puVar8 = (undefined1 *)0x0;
LAB_100826318:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(puVar13,local_d0,uVar18,uVar16 >> 0x10);
    _swift_bridgeObjectRelease(local_f8[4]);
    _swift_bridgeObjectRelease(local_c8);
    _swift_bridgeObjectRelease(local_f8[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    uStack_100._4_4_ = uVar16 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar10 = local_90;
    FUN_100004640(ppuVar10,local_78);
    lVar11 = 0;
    local_110 = ppuVar10;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar9 = (undefined1 *)((long)apuStack_120 + lVar3);
    apuStack_120[1] = puVar13;
    local_108 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar4 = local_f8[1];
    DVar12.unknown = local_f8[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar12);
    *puVar9 = 0;
    puVar6 = local_f8[4];
    puVar5 = local_f8[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = local_c8;
    *(undefined **)((long)&local_110 + lVar3) = puVar6;
    *(undefined1 *)((long)&local_108 + lVar3) = 1;
    *(undefined **)((long)&uStack_100 + lVar3) = local_f8[0];
    *(undefined **)((long)local_f8 + lVar3) = puVar4;
    *(undefined **)((long)local_f8 + lVar3 + 8) = local_f8[2];
    puVar13 = (undefined1 *)0x0;
    if (uVar22 != 2) {
      puVar13 = puVar8;
    }
    sVar19 = 0x200;
    if (uVar22 != 2) {
      sVar19 = ((ushort)uVar22 & 1) * 0x100 + 1;
    }
    iVar2 = *(int *)(lVar11 + 0x18);
    *(undefined **)(puVar9 + *(int *)(lVar11 + 0x14)) = puVar5;
    *(undefined **)(puVar9 + iVar2) = puVar20;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar11 + 0x1c));
    *puVar1 = puVar13;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = sVar19;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar21 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar20);
    (*pcVar21)(puVar9,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_d0,uVar18,uStack_100._4_4_);
    _swift_errorRelease(puVar20);
    FUN_10080a754(puVar9);
    FUN_100004594(local_90);
  }
  puVar13 = (undefined1 *)0x0;
  if (uVar22 != 2) {
    puVar13 = puVar8;
  }
  auVar23[8] = uVar22 == 2;
  auVar23._0_8_ = puVar13;
  auVar23._9_7_ = 0;
  return auVar23;
}



/* Address: 0x1008264d8 | FUN_1008264d8 */

undefined1 *
FUN_1008264d8(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  Date DVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined1 *local_110 [2];
  undefined8 local_100;
  undefined1 auStack_fe [6];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *local_e8 [6];
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100 = param_7;
  uStack_f8 = param_5;
  local_e8[3] = param_4;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar13 = *(ulong *)(param_10 + 0x10);
  uVar10 = 1;
  local_e8[1] = (undefined1 *)param_2;
  local_e8[2] = param_1;
  FUN_10082f764();
  uStack_f0._4_4_ = (uint)param_3;
  puVar9 = param_1;
  uVar11 = param_2;
  uVar14 = uVar10;
  FUN_100804a74();
  uVar12 = (uint)uVar14;
  local_e8[0] = param_3;
  local_e8[4] = (undefined1 *)uVar11;
  FUN_1007fb2c4(param_2,uVar10,uVar13,uVar13 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar12 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar9;
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar4 & 1) != 0) {
      puVar17 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar17,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar17 = (undefined *)0x0;
  }
  else if ((uVar12 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar9,local_e8[4],uVar14,uVar12 >> 0x10);
    puVar17 = (undefined *)0x0;
  }
  else if ((uVar12 & 0xff) == 1) {
    uStack_f0._4_4_ = uVar12 >> 8 & 1;
    FUN_1007fb28c(puVar9,local_e8[4],uVar14);
    puVar17 = (undefined *)0x0;
    local_e8[3] = puVar9;
  }
  else {
    puVar5 = puVar9;
    FUN_1000f4a4c(puVar9,local_e8[4],uVar14);
    puVar6 = puVar5;
    FUN_10080b43c();
    puVar17 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar6,0,0);
    *puVar6 = (char)puVar5;
    puVar6[1] = 1;
    _swift_willThrow();
  }
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar17);
    FUN_1007fb2c4(puVar9,local_e8[4],uVar14,uVar12 >> 0x10);
    _swift_bridgeObjectRelease(local_e8[1]);
    _swift_bridgeObjectRelease(local_e8[2]);
    _swift_bridgeObjectRelease(local_e8[0]);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_110[1] = puVar9;
    FUN_100004640(local_90,local_78);
    lVar7 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = (undefined1 *)((long)local_110 + lVar3);
    local_110[0] = (undefined1 *)local_110;
    FUN_1007fb128();
    DVar8.unknown = param_6;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar8);
    *puVar5 = 0;
    puVar9 = local_e8[1];
    *(undefined1 **)((long)local_110 + lVar3 + 8) = local_e8[2];
    *(undefined1 **)((long)&stack0xffffffffffffff00 + lVar3) = puVar9;
    *(undefined1 *)((long)&uStack_f8 + lVar3) = 1;
    *(undefined8 *)((long)&uStack_f0 + lVar3) = uStack_f8;
    *(undefined **)((long)local_e8 + lVar3) = param_6;
    *(undefined8 *)((long)local_e8 + lVar3 + 8) = local_100;
    uVar15 = 0x101;
    if ((uStack_f0._4_4_ & 1) == 0) {
      uVar15 = 1;
    }
    iVar2 = *(int *)(lVar7 + 0x18);
    *(undefined1 **)(puVar5 + *(int *)(lVar7 + 0x14)) = local_e8[0];
    *(undefined **)(puVar5 + iVar2) = puVar17;
    puVar9 = local_e8[3];
    puVar1 = (undefined8 *)(puVar5 + *(int *)(lVar7 + 0x1c));
    *puVar1 = local_e8[3];
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar17);
    (*pcVar16)(puVar5,local_78,lStack_70);
    FUN_1007fb2c4(local_110[1],local_e8[4],uVar14,uVar12 >> 0x10);
    _swift_errorRelease(puVar17);
    FUN_10080a754(puVar5);
    FUN_100004594(local_90);
    local_e8[3] = puVar9;
  }
  return local_e8[3];
}



/* Address: 0x10082681c | FUN_10082681c */

undefined8 *
FUN_10082681c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  ushort uVar21;
  uint uVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined1 auStack_118 [4];
  uint local_114;
  undefined *local_110 [4];
  uint local_e4;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_110[1] = (undefined *)param_4;
  local_110[2] = param_5;
  local_110[3] = (undefined *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 1;
  puVar20 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar20;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar6 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar22 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) == 1;
      bVar1 = !bVar4;
      if (bVar4) {
        puVar20 = (undefined8 *)0x0;
        local_e4 = uVar16 >> 8 & 1;
      }
      else {
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar20 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 1;
        _swift_willThrow();
        _swift_errorRetain(puVar20);
        local_e4 = 0;
        puVar6 = puVar20;
      }
      FUN_1007fb28c(puVar13,uVar15,uVar18);
      local_d8 = 0;
      uVar12 = uVar15;
      local_e0 = puVar13;
      goto LAB_1008269fc;
    }
    FUN_10080a3bc();
    puVar6 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar20,0,0);
    *puVar20 = param_1;
    puVar20[1] = param_2;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *(undefined1 *)(puVar20 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar6);
  local_e4 = 0;
  puVar20 = (undefined8 *)0x0;
  uVar22 = 0;
  bVar1 = true;
  local_d8 = 1;
  uVar12 = 0;
  local_e0 = puVar6;
LAB_1008269fc:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_120 = uVar12;
    local_114 = uVar22;
    local_110[0] = (undefined *)puVar13;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar11 = local_110[2];
    DVar10.unknown = local_110[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar19 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)(auStack_118 + lVar3 + -8) = param_2;
    auStack_118[lVar3] = 1;
    *(undefined **)((long)local_110 + lVar3) = local_110[1];
    *(undefined **)((long)local_110 + lVar3 + 8) = puVar11;
    *(undefined **)((long)local_110 + lVar3 + 0x10) = local_110[3];
    if (!bVar1) {
      uVar21 = (ushort)(local_e4 << 8) | 1;
    }
    else {
      _swift_errorRetain(puVar6);
      uVar21 = 0;
    }
    _swift_errorRetain(puVar20);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar19 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar19 + iVar2) = puVar20;
    puVar13 = (undefined8 *)(puVar19 + *(int *)(lVar9 + 0x1c));
    *puVar13 = puVar6;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar21;
    *(bool *)((long)puVar13 + 0x12) = bVar1;
    (**(code **)(lStack_70 + 8))(puVar19,local_78,lStack_70);
    FUN_10080a754(puVar19);
    FUN_100004594(local_90);
    puVar13 = (undefined8 *)local_110[0];
    uVar12 = local_120;
    uVar22 = local_114;
  }
  if (bVar1) {
    local_90[0] = puVar6;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar6);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e0,uVar12,uVar22,local_d8);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    FUN_10080d5a4(puVar6,local_e4,1);
    _swift_errorRelease(puVar20);
  }
  else {
    FUN_10080a6bc(local_e0,uVar12,uVar22,local_d8);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    _swift_errorRelease(puVar20);
  }
  return puVar6;
}



/* Address: 0x100826c9c | FUN_100826c9c */

undefined1  [16]
FUN_100826c9c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  code *pcVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  undefined1 **appuStack_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  undefined1 *local_100 [6];
  undefined8 uStack_d0;
  undefined1 *local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_4;
  local_100[1] = param_5;
  local_100[2] = (undefined1 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar15 = *(ulong *)(param_9 + 0x10);
  uVar12 = 2;
  local_100[4] = (undefined1 *)param_2;
  local_c8 = param_1;
  FUN_10082f764();
  puVar20 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_100[3] = (undefined1 *)param_3;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  local_100[5] = puVar20;
  uStack_d0 = uVar13;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar20;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar17 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar17,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 2) {
        uVar21 = uVar14 >> 8 & 1;
        FUN_1007fb28c(puVar20,uVar13,uVar16);
        puVar17 = (undefined *)0x0;
      }
      else {
        FUN_1000f4a4c(puVar20,uVar13,uVar16);
        puVar11 = puVar20;
        FUN_10080b43c();
        puVar17 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar20;
        uVar21 = 2;
        puVar11[1] = 2;
        _swift_willThrow();
        puVar20 = (undefined1 *)0x0;
      }
      goto LAB_100826dd0;
    }
    FUN_1007fb2c4(puVar20,uVar13,uVar16,uVar14 >> 0x10);
  }
  puVar17 = (undefined *)0x0;
  puVar20 = (undefined1 *)0x0;
  uVar21 = 2;
LAB_100826dd0:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar17);
    FUN_1007fb2c4(local_100[5],uStack_d0,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_100[4]);
    _swift_bridgeObjectRelease(local_c8);
    _swift_bridgeObjectRelease(local_100[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    appuStack_120[1] = ppuVar8;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined1 *)((long)appuStack_120 + lVar4);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar11 = local_100[1];
    DVar10.unknown = local_100[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar19 = 0;
    puVar6 = local_100[4];
    puVar5 = local_100[3];
    *(undefined1 **)((long)appuStack_120 + lVar4 + 8) = local_c8;
    *(undefined1 **)(auStack_108 + lVar4 + -8) = puVar6;
    auStack_108[lVar4] = 2;
    *(undefined1 **)((long)local_100 + lVar4) = local_100[0];
    *(undefined1 **)((long)local_100 + lVar4 + 8) = puVar11;
    *(undefined1 **)((long)local_100 + lVar4 + 0x10) = local_100[2];
    uVar2 = 0x200;
    if (uVar21 != 2) {
      uVar2 = (ushort)((uVar21 & 1) << 8) | 2;
    }
    puVar11 = (undefined1 *)0x0;
    if (uVar21 != 2) {
      puVar11 = puVar20;
    }
    iVar3 = *(int *)(lVar9 + 0x18);
    *(undefined1 **)(puVar19 + *(int *)(lVar9 + 0x14)) = puVar5;
    *(undefined **)(puVar19 + iVar3) = puVar17;
    puVar1 = (undefined8 *)(puVar19 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar11;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar18 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar17);
    (*pcVar18)(puVar19,local_78,lStack_70);
    FUN_1007fb2c4(local_100[5],uStack_d0,uVar16,local_104);
    _swift_errorRelease(puVar17);
    FUN_10080a754(puVar19);
    FUN_100004594(local_90);
  }
  puVar11 = (undefined1 *)0x0;
  if (uVar21 != 2) {
    puVar11 = puVar20;
  }
  auVar22[8] = uVar21 == 2;
  auVar22._0_8_ = puVar11;
  auVar22._9_7_ = 0;
  return auVar22;
}



/* Address: 0x100827004 | FUN_100827004 */

undefined1 *
FUN_100827004(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  Date DVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined1 *apuStack_120 [2];
  undefined1 **local_110;
  undefined1 auStack_10e [6];
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f4;
  undefined1 *local_f0 [5];
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined1 *local_a0 [3];
  undefined8 local_88;
  long lStack_80;
  
  local_108 = param_7;
  uStack_100 = param_5;
  FUN_1007ffcdc(param_2,param_3,param_8,param_9);
  uVar13 = *(ulong *)(param_10 + 0x10);
  uVar10 = 2;
  local_f0[1] = (undefined1 *)param_3;
  local_f0[2] = param_2;
  FUN_10082f764();
  local_f4 = (uint)param_4;
  puVar9 = param_2;
  uVar11 = param_3;
  uVar14 = uVar10;
  FUN_100804a74();
  uVar12 = (uint)uVar14;
  local_f0[0] = param_4;
  local_f0[3] = (undefined1 *)uVar11;
  FUN_1007fb2c4(param_3,uVar10,uVar13,uVar13 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_2);
  if ((uVar12 >> 0x10 & 0xff) == 1) {
    local_a0[0] = puVar9;
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar4 & 1) != 0) {
      puVar17 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_a0,puVar17,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar17 = (undefined *)0x0;
  }
  else if ((uVar12 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar9,local_f0[3],uVar14,uVar12 >> 0x10);
    puVar17 = (undefined *)0x0;
  }
  else if ((uVar12 & 0xff) == 2) {
    local_f4 = uVar12 >> 8 & 1;
    FUN_1007fb28c(puVar9,local_f0[3],uVar14);
    puVar17 = (undefined *)0x0;
    param_1 = puVar9;
  }
  else {
    puVar5 = puVar9;
    FUN_1000f4a4c(puVar9,local_f0[3],uVar14);
    puVar6 = puVar5;
    FUN_10080b43c();
    puVar17 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar6,0,0);
    *puVar6 = (char)puVar5;
    puVar6[1] = 2;
    _swift_willThrow();
  }
  FUN_10080b3ec(param_10 + 0x18,auStack_c8);
  if (local_b0 == 0) {
    _swift_errorRelease(puVar17);
    FUN_1007fb2c4(puVar9,local_f0[3],uVar14,uVar12 >> 0x10);
    _swift_bridgeObjectRelease(local_f0[1]);
    _swift_bridgeObjectRelease(local_f0[2]);
    _swift_bridgeObjectRelease(local_f0[0]);
    FUN_10080a674(auStack_c8);
  }
  else {
    FUN_100076508(auStack_c8,local_a0);
    FUN_100004640(local_a0,local_88);
    lVar7 = 0;
    apuStack_120[1] = puVar9;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar5 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_110 = apuStack_120;
    FUN_1007fb128();
    DVar8.unknown = param_6;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar8);
    *puVar5 = 0;
    puVar9 = local_f0[1];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = local_f0[2];
    *(undefined1 **)((long)&stack0xfffffffffffffef0 + lVar3) = puVar9;
    *(undefined1 *)((long)&local_108 + lVar3) = 2;
    *(undefined8 *)((long)&uStack_100 + lVar3) = uStack_100;
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = param_6;
    *(undefined8 *)((long)local_f0 + lVar3) = local_108;
    uVar15 = 0x102;
    if ((local_f4 & 1) == 0) {
      uVar15 = 2;
    }
    iVar2 = *(int *)(lVar7 + 0x18);
    *(undefined1 **)(puVar5 + *(int *)(lVar7 + 0x14)) = local_f0[0];
    *(undefined **)(puVar5 + iVar2) = puVar17;
    puVar1 = (undefined8 *)(puVar5 + *(int *)(lVar7 + 0x1c));
    *puVar1 = param_1;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_80 + 8);
    _swift_errorRetain(puVar17);
    (*pcVar16)(puVar5,local_88,lStack_80);
    FUN_1007fb2c4(apuStack_120[1],local_f0[3],uVar14,uVar12 >> 0x10);
    _swift_errorRelease(puVar17);
    FUN_10080a754(puVar5);
    FUN_100004594(local_a0);
  }
  return param_1;
}



/* Address: 0x100827364 | FUN_100827364 */

void FUN_100827364(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  ushort uVar21;
  uint uVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined1 auStack_118 [4];
  uint local_114;
  undefined *local_110 [4];
  uint local_e4;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_110[1] = (undefined *)param_4;
  local_110[2] = param_5;
  local_110[3] = (undefined *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 2;
  puVar20 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar20;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar6 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar22 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) == 2;
      bVar1 = !bVar4;
      if (bVar4) {
        puVar20 = (undefined8 *)0x0;
        local_e4 = uVar16 >> 8 & 1;
      }
      else {
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar20 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 2;
        _swift_willThrow();
        _swift_errorRetain(puVar20);
        local_e4 = 0;
        puVar6 = puVar20;
      }
      FUN_1007fb28c(puVar13,uVar15,uVar18);
      local_d8 = 0;
      uVar12 = uVar15;
      local_e0 = puVar13;
      goto LAB_100827544;
    }
    FUN_10080a3bc();
    puVar6 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar20,0,0);
    *puVar20 = param_1;
    puVar20[1] = param_2;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *(undefined1 *)(puVar20 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar6);
  local_e4 = 0;
  puVar20 = (undefined8 *)0x0;
  uVar22 = 0;
  bVar1 = true;
  local_d8 = 1;
  uVar12 = 0;
  local_e0 = puVar6;
LAB_100827544:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_120 = uVar12;
    local_114 = uVar22;
    local_110[0] = (undefined *)puVar13;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar11 = local_110[2];
    DVar10.unknown = local_110[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar19 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)(auStack_118 + lVar3 + -8) = param_2;
    auStack_118[lVar3] = 2;
    *(undefined **)((long)local_110 + lVar3) = local_110[1];
    *(undefined **)((long)local_110 + lVar3 + 8) = puVar11;
    *(undefined **)((long)local_110 + lVar3 + 0x10) = local_110[3];
    if (!bVar1) {
      uVar21 = (ushort)(local_e4 << 8) | 2;
    }
    else {
      _swift_errorRetain(puVar6);
      uVar21 = 0;
    }
    _swift_errorRetain(puVar20);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar19 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar19 + iVar2) = puVar20;
    puVar13 = (undefined8 *)(puVar19 + *(int *)(lVar9 + 0x1c));
    *puVar13 = puVar6;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar21;
    *(bool *)((long)puVar13 + 0x12) = bVar1;
    (**(code **)(lStack_70 + 8))(puVar19,local_78,lStack_70);
    FUN_10080a754(puVar19);
    FUN_100004594(local_90);
    puVar13 = (undefined8 *)local_110[0];
    uVar12 = local_120;
    uVar22 = local_114;
  }
  if (bVar1) {
    local_90[0] = puVar6;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar6);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e0,uVar12,uVar22,local_d8);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    FUN_10080d5a4(puVar6,local_e4,1);
    _swift_errorRelease(puVar20);
  }
  else {
    FUN_10080a6bc(local_e0,uVar12,uVar22,local_d8);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    _swift_errorRelease(puVar20);
  }
  return;
}



/* Address: 0x1008277e4 | FUN_1008277e4 */

uint FUN_1008277e4(undefined1 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  ulong *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  Date DVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  uint uVar18;
  undefined *puVar19;
  ulong local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined *local_f0 [3];
  ulong local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f8 = param_4;
  local_f0[0] = param_5;
  local_f0[1] = (undefined *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar15 = *(ulong *)(param_9 + 0x10);
  uVar12 = 3;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  puVar8 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_f0[2] = (undefined *)param_3;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  local_c8 = puVar8;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar8;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar19 = (undefined *)0x0;
  }
  else if ((uVar14 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar8,uVar13,uVar16,uVar14 >> 0x10);
    puVar19 = (undefined *)0x0;
  }
  else {
    if ((uVar14 & 0xff) == 3) {
      uVar18 = uVar14 & 0x100 | (uint)puVar8 & 1;
      FUN_1007fb28c(puVar8,uVar13,uVar16);
      puVar19 = (undefined *)0x0;
      goto LAB_100827988;
    }
    FUN_1000f4a4c(puVar8,uVar13,uVar16);
    puVar9 = puVar8;
    FUN_10080b43c();
    puVar19 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar9,0,0);
    *puVar9 = (char)puVar8;
    puVar9[1] = 3;
    _swift_willThrow();
  }
  uVar18 = 2;
LAB_100827988:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(local_c8,uVar13,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_f0[2]);
    FUN_10080a674(auStack_b8);
  }
  else {
    uStack_100._4_4_ = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar10 = 0;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)&local_110 + lVar4);
    local_110 = uVar13;
    local_108 = (undefined1 *)&local_110;
    FUN_1007fb128();
    puVar5 = local_f0[0];
    DVar11.unknown = local_f0[0];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar8 = 0;
    uVar13 = local_d8;
    *(undefined1 **)((long)&local_108 + lVar4) = local_d0;
    *(ulong *)((long)&uStack_100 + lVar4) = uVar13;
    *(undefined1 *)((long)&local_f8 + lVar4) = 3;
    *(undefined8 *)((long)local_f0 + lVar4) = local_f8;
    *(undefined **)((long)local_f0 + lVar4 + 8) = puVar5;
    puVar5 = local_f0[2];
    *(undefined **)((long)local_f0 + lVar4 + 0x10) = local_f0[1];
    bVar6 = (uVar18 & 0xff) != 2;
    uVar14 = 0;
    if (bVar6) {
      uVar14 = uVar18 & 1;
    }
    uVar2 = 0x200;
    if (bVar6) {
      uVar2 = (ushort)uVar18 & 0x100 | 3;
    }
    iVar3 = *(int *)(lVar10 + 0x18);
    *(undefined **)(puVar8 + *(int *)(lVar10 + 0x14)) = puVar5;
    *(undefined **)(puVar8 + iVar3) = puVar19;
    puVar1 = (ulong *)(puVar8 + *(int *)(lVar10 + 0x1c));
    *puVar1 = (ulong)uVar14;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    (*pcVar17)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_c8,local_110,uVar16,uStack_100._4_4_);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  uVar14 = uVar18 & 0xff;
  if ((uVar18 & 0xff) != 2) {
    uVar14 = uVar18 & 1;
  }
  return uVar14;
}



/* Address: 0x100827b3c | FUN_100827b3c */

uint FUN_100827b3c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 **ppuVar9;
  long lVar10;
  Date DVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  code *pcVar19;
  undefined *puVar20;
  ulong uStack_120;
  undefined1 **local_118;
  ulong *local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 3;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar20 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    puVar20 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff) == 3) {
    local_e4 = uVar15 >> 8 & 1;
    FUN_1007fb28c(puVar12,local_c8,uVar17);
    puVar20 = (undefined *)0x0;
    param_4 = puVar12;
  }
  else {
    puVar7 = puVar12;
    FUN_1000f4a4c(puVar12,local_c8,uVar17);
    puVar8 = puVar7;
    FUN_10080b43c();
    puVar20 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar8,0,0);
    *puVar8 = (char)puVar7;
    puVar8[1] = 3;
    _swift_willThrow();
  }
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar9 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar9,local_78);
    lVar10 = 0;
    local_118 = ppuVar9;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)&uStack_120 + lVar3);
    local_110 = &uStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar11.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)&local_118 + lVar3) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 3;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x103;
    if ((local_e4 & 1) == 0) {
      uVar18 = 3;
    }
    iVar2 = *(int *)(lVar10 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar10 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar20;
    puVar1 = (ulong *)(puVar12 + *(int *)(lVar10 + 0x1c));
    *puVar1 = (ulong)param_4 & 1;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar19 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar20);
    (*pcVar19)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar20);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return (uint)param_4 & 1;
}



/* Address: 0x100827e98 | FUN_100827e98 */

uint FUN_100827e98(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  undefined8 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined *puVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ushort uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined *local_110 [4];
  undefined8 *local_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_110[1] = (undefined *)param_4;
  local_110[2] = param_5;
  local_110[3] = (undefined *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 3;
  puVar21 = param_1;
  puVar11 = param_2;
  FUN_10082f764();
  puVar12 = puVar21;
  puVar14 = puVar11;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  FUN_1007fb2c4(puVar11,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    puVar20 = puVar12;
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      uVar23 = uVar15 & 0x1ff;
      bVar5 = (uVar15 & 0xff) == 3;
      bVar1 = !bVar5;
      if (bVar5) {
        puVar21 = (undefined8 *)0x0;
        puVar20 = (undefined8 *)(uVar17 & 0x100 | (ulong)puVar12 & 1);
      }
      else {
        puVar21 = puVar12;
        FUN_1000f4a4c(puVar12,puVar14,uVar17);
        puVar18 = puVar21;
        FUN_10080b43c();
        puVar20 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar18,0,0);
        *(char *)puVar18 = (char)puVar21;
        *(undefined1 *)((long)puVar18 + 1) = 3;
        _swift_willThrow();
        _swift_errorRetain(puVar20);
        puVar21 = puVar20;
      }
      FUN_1007fb28c(puVar12,puVar14,uVar17);
      uVar24 = 0;
      puVar11 = puVar14;
      local_e0 = puVar12;
      goto LAB_100828088;
    }
    FUN_10080a3bc();
    puVar20 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar20);
  puVar21 = (undefined8 *)0x0;
  uVar23 = 0;
  bVar1 = true;
  uVar24 = 1;
  puVar11 = (undefined *)0x0;
  local_e0 = puVar20;
LAB_100828088:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_114 = uVar24;
    local_110[0] = puVar11;
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_130[1] = ppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar19 = (undefined1 *)((long)appuStack_130 + lVar4);
    local_120 = appuStack_130;
    FUN_1007fb128();
    puVar11 = local_110[2];
    DVar9.unknown = local_110[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar19 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar4 + 8) = param_1;
    *(undefined **)(auStack_118 + lVar4 + -8) = param_2;
    auStack_118[lVar4] = 3;
    *(undefined **)((long)local_110 + lVar4) = local_110[1];
    *(undefined **)((long)local_110 + lVar4 + 8) = puVar11;
    *(undefined **)((long)local_110 + lVar4 + 0x10) = local_110[3];
    if (!bVar1) {
      puVar18 = (undefined8 *)((ulong)puVar20 & 1);
      uVar22 = (ushort)puVar20 & 0x100 | 3;
    }
    else {
      _swift_errorRetain(puVar20);
      uVar22 = 0;
      puVar18 = puVar20;
    }
    _swift_errorRetain(puVar21);
    _swift_errorRelease(0);
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar19 + *(int *)(lVar8 + 0x14)) = param_3;
    *(undefined8 **)(puVar19 + iVar3) = puVar21;
    puVar2 = (undefined8 *)(puVar19 + *(int *)(lVar8 + 0x1c));
    *puVar2 = puVar18;
    puVar2[1] = 0;
    *(ushort *)(puVar2 + 2) = uVar22;
    *(bool *)((long)puVar2 + 0x12) = bVar1;
    (**(code **)(lStack_70 + 8))(puVar19,local_78,lStack_70);
    FUN_10080a754(puVar19);
    FUN_100004594(local_90);
    puVar11 = local_110[0];
    uVar24 = local_114;
  }
  if (bVar1) {
    local_90[0] = puVar20;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar20);
    if ((bVar6 & 1) != 0) {
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e0,puVar11,uVar23,uVar24);
    FUN_1007fb2c4(puVar12,puVar14,uVar17,uVar17 >> 0x10 & 0xffff);
    FUN_1002ec258(puVar20,1);
    _swift_errorRelease(puVar21);
  }
  else {
    FUN_10080a6bc(local_e0,puVar11,uVar23,uVar24);
    FUN_1007fb2c4(puVar12,puVar14,uVar17,uVar17 >> 0x10 & 0xffff);
    _swift_errorRelease(puVar21);
  }
  return (uint)puVar20 & 1;
}



/* Address: 0x100828334 | FUN_100828334 */

undefined1 *
FUN_100828334(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 *apuStack_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined1 **local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 4;
  puVar19 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar12 = puVar19;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f0[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar19);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 4) {
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar21 = (undefined *)0x0;
        uVar18 = uVar15 & 0x104;
        puVar19 = puVar12;
      }
      else {
        puVar19 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar19;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar19;
        uVar18 = 4;
        puVar11[1] = 4;
        _swift_willThrow();
        puVar19 = (undefined1 *)0x0;
      }
      goto LAB_10082846c;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  puVar21 = (undefined *)0x0;
  uVar18 = 4;
  puVar19 = (undefined1 *)0x0;
LAB_10082846c:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_10c = uVar18;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_108 = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_100 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar5 = local_f0[2];
    DVar10.unknown = local_f0[2];
    apuStack_120[1] = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar11 = 0;
    uVar14 = local_d0;
    puVar6 = local_f0[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 4;
    puVar4 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar3) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = puVar5;
    *(undefined **)((long)local_f0 + lVar3) = puVar4;
    uVar15 = 0x200;
    if (puVar19 != (undefined1 *)0x0) {
      uVar15 = local_10c;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar9 + 0x14)) = puVar6;
    *(undefined **)(puVar11 + iVar2) = puVar21;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = (short)uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(puVar19);
    _swift_errorRetain(puVar21);
    (*pcVar20)(puVar11,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_c8,uVar17,local_f4);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  return puVar19;
}



/* Address: 0x1008286a0 | FUN_1008286a0 */

undefined1 *
FUN_1008286a0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 **appuStack_120 [2];
  undefined1 ***local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 4;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 4) {
        local_e4 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar19 = (undefined *)0x0;
        param_4 = puVar12;
      }
      else {
        puVar10 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar10;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar10;
        puVar11[1] = 4;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_1008287d0;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar19 = (undefined *)0x0;
LAB_1008287d0:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_120[1] = ppuVar7;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)appuStack_120 + lVar3);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar9.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)appuStack_120 + lVar3 + 8) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 4;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x104;
    if ((local_e4 & 1) == 0) {
      uVar18 = 4;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar19;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar20)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return param_4;
}



/* Address: 0x100828a08 | FUN_100828a08 */

undefined8 *
FUN_100828a08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108 [3];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  local_108[0] = param_4;
  local_108[1] = (undefined8 *)param_5;
  local_108[2] = (undefined8 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 4;
  puVar21 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 4;
      if (bVar4) {
        puVar21 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar6 = puVar21;
        FUN_10080b43c();
        puVar7 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar6,0,0);
        *(char *)puVar6 = (char)puVar21;
        *(undefined1 *)((long)puVar6 + 1) = 4;
        _swift_willThrow();
        _swift_errorRetain(puVar7);
        local_54 = 0;
        puVar21 = puVar7;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_e8 = puVar13;
      uStack_e0 = uVar15;
      goto LAB_100828c10;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  puVar21 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  local_e8 = puVar7;
LAB_100828c10:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    uStack_110._4_4_ = uVar16;
    FUN_1007fb128();
    puVar6 = local_108[1];
    DVar10.unknown = (undefined *)local_108[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar20 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 4;
    *(undefined8 **)((long)&uStack_110 + lVar3) = local_108[0];
    *(undefined8 **)((long)local_108 + lVar3) = puVar6;
    *(undefined8 **)((long)local_108 + lVar3 + 8) = local_108[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 4;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(puVar7,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar20 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar20 + iVar2) = puVar21;
    uVar18 = (ulong)uStack_110._4_4_;
    puVar6 = (undefined8 *)(puVar20 + *(int *)(lVar9 + 0x1c));
    *puVar6 = puVar7;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_70 + 8))(puVar20,local_118,local_70);
    FUN_10080a754(puVar20);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(puVar7);
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,0);
    _swift_errorRelease(puVar21);
  }
  else {
    local_90[0] = puVar7;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,1);
    _swift_errorRelease(puVar21);
  }
  return puVar7;
}



/* Address: 0x100828eb0 | FUN_100828eb0 */

undefined1 *
FUN_100828eb0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 *apuStack_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined1 **local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 5;
  puVar19 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar12 = puVar19;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f0[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar19);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 5) {
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar21 = (undefined *)0x0;
        uVar18 = uVar15 & 0x105;
        puVar19 = puVar12;
      }
      else {
        puVar19 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar19;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar19;
        uVar18 = 5;
        puVar11[1] = 5;
        _swift_willThrow();
        puVar19 = (undefined1 *)0x0;
      }
      goto LAB_100828fe8;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  puVar21 = (undefined *)0x0;
  uVar18 = 5;
  puVar19 = (undefined1 *)0x0;
LAB_100828fe8:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_10c = uVar18;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_108 = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_100 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar5 = local_f0[2];
    DVar10.unknown = local_f0[2];
    apuStack_120[1] = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar11 = 0;
    uVar14 = local_d0;
    puVar6 = local_f0[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 5;
    puVar4 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar3) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = puVar5;
    *(undefined **)((long)local_f0 + lVar3) = puVar4;
    uVar15 = 0x200;
    if (puVar19 != (undefined1 *)0x0) {
      uVar15 = local_10c;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar9 + 0x14)) = puVar6;
    *(undefined **)(puVar11 + iVar2) = puVar21;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = (short)uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(puVar19);
    _swift_errorRetain(puVar21);
    (*pcVar20)(puVar11,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_c8,uVar17,local_f4);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  return puVar19;
}



/* Address: 0x10082921c | FUN_10082921c */

undefined1 *
FUN_10082921c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 **appuStack_120 [2];
  undefined1 ***local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 5;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 5) {
        local_e4 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar19 = (undefined *)0x0;
        param_4 = puVar12;
      }
      else {
        puVar10 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar10;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar10;
        puVar11[1] = 5;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10082934c;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar19 = (undefined *)0x0;
LAB_10082934c:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_120[1] = ppuVar7;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)appuStack_120 + lVar3);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar9.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)appuStack_120 + lVar3 + 8) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 5;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x105;
    if ((local_e4 & 1) == 0) {
      uVar18 = 5;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar19;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar20)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return param_4;
}



/* Address: 0x100829584 | FUN_100829584 */

undefined8 *
FUN_100829584(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108 [3];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  local_108[0] = param_4;
  local_108[1] = (undefined8 *)param_5;
  local_108[2] = (undefined8 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 5;
  puVar21 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 5;
      if (bVar4) {
        puVar21 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar6 = puVar21;
        FUN_10080b43c();
        puVar7 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar6,0,0);
        *(char *)puVar6 = (char)puVar21;
        *(undefined1 *)((long)puVar6 + 1) = 5;
        _swift_willThrow();
        _swift_errorRetain(puVar7);
        local_54 = 0;
        puVar21 = puVar7;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_e8 = puVar13;
      uStack_e0 = uVar15;
      goto LAB_10082978c;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  puVar21 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  local_e8 = puVar7;
LAB_10082978c:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    uStack_110._4_4_ = uVar16;
    FUN_1007fb128();
    puVar6 = local_108[1];
    DVar10.unknown = (undefined *)local_108[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar20 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 5;
    *(undefined8 **)((long)&uStack_110 + lVar3) = local_108[0];
    *(undefined8 **)((long)local_108 + lVar3) = puVar6;
    *(undefined8 **)((long)local_108 + lVar3 + 8) = local_108[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 5;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(puVar7,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar20 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar20 + iVar2) = puVar21;
    uVar18 = (ulong)uStack_110._4_4_;
    puVar6 = (undefined8 *)(puVar20 + *(int *)(lVar9 + 0x1c));
    *puVar6 = puVar7;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_70 + 8))(puVar20,local_118,local_70);
    FUN_10080a754(puVar20);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(puVar7);
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,0);
    _swift_errorRelease(puVar21);
  }
  else {
    local_90[0] = puVar7;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,1);
    _swift_errorRelease(puVar21);
  }
  return puVar7;
}



/* Address: 0x100829a2c | FUN_100829a2c */

undefined1 *
FUN_100829a2c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 *apuStack_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined1 **local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 6;
  puVar19 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar12 = puVar19;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f0[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar19);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 6) {
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar21 = (undefined *)0x0;
        uVar18 = uVar15 & 0x106;
        puVar19 = puVar12;
      }
      else {
        puVar19 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar19;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar19;
        uVar18 = 6;
        puVar11[1] = 6;
        _swift_willThrow();
        puVar19 = (undefined1 *)0x0;
      }
      goto LAB_100829b64;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  puVar21 = (undefined *)0x0;
  uVar18 = 6;
  puVar19 = (undefined1 *)0x0;
LAB_100829b64:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_10c = uVar18;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_108 = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_100 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar5 = local_f0[2];
    DVar10.unknown = local_f0[2];
    apuStack_120[1] = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar11 = 0;
    uVar14 = local_d0;
    puVar6 = local_f0[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 6;
    puVar4 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar3) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = puVar5;
    *(undefined **)((long)local_f0 + lVar3) = puVar4;
    uVar15 = 0x200;
    if (puVar19 != (undefined1 *)0x0) {
      uVar15 = local_10c;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar9 + 0x14)) = puVar6;
    *(undefined **)(puVar11 + iVar2) = puVar21;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = (short)uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(puVar19);
    _swift_errorRetain(puVar21);
    (*pcVar20)(puVar11,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_c8,uVar17,local_f4);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  return puVar19;
}



/* Address: 0x100829d98 | FUN_100829d98 */

undefined1 *
FUN_100829d98(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 **appuStack_120 [2];
  undefined1 ***local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 6;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 6) {
        local_e4 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar19 = (undefined *)0x0;
        param_4 = puVar12;
      }
      else {
        puVar10 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar10;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar10;
        puVar11[1] = 6;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_100829ec8;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar19 = (undefined *)0x0;
LAB_100829ec8:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_120[1] = ppuVar7;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)appuStack_120 + lVar3);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar9.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)appuStack_120 + lVar3 + 8) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 6;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x106;
    if ((local_e4 & 1) == 0) {
      uVar18 = 6;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar19;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar20)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return param_4;
}



/* Address: 0x10082a100 | FUN_10082a100 */

undefined8 *
FUN_10082a100(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108 [3];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  local_108[0] = param_4;
  local_108[1] = (undefined8 *)param_5;
  local_108[2] = (undefined8 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 6;
  puVar21 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 6;
      if (bVar4) {
        puVar21 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar6 = puVar21;
        FUN_10080b43c();
        puVar7 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar6,0,0);
        *(char *)puVar6 = (char)puVar21;
        *(undefined1 *)((long)puVar6 + 1) = 6;
        _swift_willThrow();
        _swift_errorRetain(puVar7);
        local_54 = 0;
        puVar21 = puVar7;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_e8 = puVar13;
      uStack_e0 = uVar15;
      goto LAB_10082a308;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  puVar21 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  local_e8 = puVar7;
LAB_10082a308:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    uStack_110._4_4_ = uVar16;
    FUN_1007fb128();
    puVar6 = local_108[1];
    DVar10.unknown = (undefined *)local_108[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar20 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 6;
    *(undefined8 **)((long)&uStack_110 + lVar3) = local_108[0];
    *(undefined8 **)((long)local_108 + lVar3) = puVar6;
    *(undefined8 **)((long)local_108 + lVar3 + 8) = local_108[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 6;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(puVar7,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar20 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar20 + iVar2) = puVar21;
    uVar18 = (ulong)uStack_110._4_4_;
    puVar6 = (undefined8 *)(puVar20 + *(int *)(lVar9 + 0x1c));
    *puVar6 = puVar7;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_70 + 8))(puVar20,local_118,local_70);
    FUN_10080a754(puVar20);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(puVar7);
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,0);
    _swift_errorRelease(puVar21);
  }
  else {
    local_90[0] = puVar7;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,1);
    _swift_errorRelease(puVar21);
  }
  return puVar7;
}



/* Address: 0x10082a5a8 | FUN_10082a5a8 */

undefined1 *
FUN_10082a5a8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 *apuStack_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined1 **local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 7;
  puVar19 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar12 = puVar19;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f0[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar19);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 7) {
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar21 = (undefined *)0x0;
        uVar18 = uVar15 & 0x107;
        puVar19 = puVar12;
      }
      else {
        puVar19 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar19;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar19;
        uVar18 = 7;
        puVar11[1] = 7;
        _swift_willThrow();
        puVar19 = (undefined1 *)0x0;
      }
      goto LAB_10082a6e0;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  puVar21 = (undefined *)0x0;
  uVar18 = 7;
  puVar19 = (undefined1 *)0x0;
LAB_10082a6e0:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_10c = uVar18;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_108 = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_100 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar5 = local_f0[2];
    DVar10.unknown = local_f0[2];
    apuStack_120[1] = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar11 = 0;
    uVar14 = local_d0;
    puVar6 = local_f0[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 7;
    puVar4 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar3) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = puVar5;
    *(undefined **)((long)local_f0 + lVar3) = puVar4;
    uVar15 = 0x200;
    if (puVar19 != (undefined1 *)0x0) {
      uVar15 = local_10c;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar9 + 0x14)) = puVar6;
    *(undefined **)(puVar11 + iVar2) = puVar21;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = (short)uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(puVar19);
    _swift_errorRetain(puVar21);
    (*pcVar20)(puVar11,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_c8,uVar17,local_f4);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  return puVar19;
}



/* Address: 0x10082a914 | FUN_10082a914 */

undefined1 *
FUN_10082a914(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 **appuStack_120 [2];
  undefined1 ***local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 7;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 7) {
        local_e4 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar19 = (undefined *)0x0;
        param_4 = puVar12;
      }
      else {
        puVar10 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar10;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar10;
        puVar11[1] = 7;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10082aa44;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar19 = (undefined *)0x0;
LAB_10082aa44:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_120[1] = ppuVar7;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)appuStack_120 + lVar3);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar9.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)appuStack_120 + lVar3 + 8) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 7;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x107;
    if ((local_e4 & 1) == 0) {
      uVar18 = 7;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar19;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar20)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return param_4;
}



/* Address: 0x10082ac7c | FUN_10082ac7c */

undefined8 *
FUN_10082ac7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108 [3];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  local_108[0] = param_4;
  local_108[1] = (undefined8 *)param_5;
  local_108[2] = (undefined8 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 7;
  puVar21 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 7;
      if (bVar4) {
        puVar21 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar6 = puVar21;
        FUN_10080b43c();
        puVar7 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar6,0,0);
        *(char *)puVar6 = (char)puVar21;
        *(undefined1 *)((long)puVar6 + 1) = 7;
        _swift_willThrow();
        _swift_errorRetain(puVar7);
        local_54 = 0;
        puVar21 = puVar7;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_e8 = puVar13;
      uStack_e0 = uVar15;
      goto LAB_10082ae84;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  puVar21 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  local_e8 = puVar7;
LAB_10082ae84:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    uStack_110._4_4_ = uVar16;
    FUN_1007fb128();
    puVar6 = local_108[1];
    DVar10.unknown = (undefined *)local_108[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar20 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 7;
    *(undefined8 **)((long)&uStack_110 + lVar3) = local_108[0];
    *(undefined8 **)((long)local_108 + lVar3) = puVar6;
    *(undefined8 **)((long)local_108 + lVar3 + 8) = local_108[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 7;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(puVar7,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar20 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar20 + iVar2) = puVar21;
    uVar18 = (ulong)uStack_110._4_4_;
    puVar6 = (undefined8 *)(puVar20 + *(int *)(lVar9 + 0x1c));
    *puVar6 = puVar7;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_70 + 8))(puVar20,local_118,local_70);
    FUN_10080a754(puVar20);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(puVar7);
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,0);
    _swift_errorRelease(puVar21);
  }
  else {
    local_90[0] = puVar7;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,1);
    _swift_errorRelease(puVar21);
  }
  return puVar7;
}



/* Address: 0x10082b124 | FUN_10082b124 */

undefined1 *
FUN_10082b124(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 *apuStack_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined1 **local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 8;
  puVar19 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar12 = puVar19;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f0[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar19);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 8) {
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar21 = (undefined *)0x0;
        uVar18 = uVar15 & 0x108;
        puVar19 = puVar12;
      }
      else {
        puVar19 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar19;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar19;
        uVar18 = 8;
        puVar11[1] = 8;
        _swift_willThrow();
        puVar19 = (undefined1 *)0x0;
      }
      goto LAB_10082b25c;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  puVar21 = (undefined *)0x0;
  uVar18 = 8;
  puVar19 = (undefined1 *)0x0;
LAB_10082b25c:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_10c = uVar18;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_108 = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_100 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar5 = local_f0[2];
    DVar10.unknown = local_f0[2];
    apuStack_120[1] = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar11 = 0;
    uVar14 = local_d0;
    puVar6 = local_f0[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 8;
    puVar4 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar3) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = puVar5;
    *(undefined **)((long)local_f0 + lVar3) = puVar4;
    uVar15 = 0x200;
    if (puVar19 != (undefined1 *)0x0) {
      uVar15 = local_10c;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar9 + 0x14)) = puVar6;
    *(undefined **)(puVar11 + iVar2) = puVar21;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = (short)uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(puVar19);
    _swift_errorRetain(puVar21);
    (*pcVar20)(puVar11,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_c8,uVar17,local_f4);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  return puVar19;
}



/* Address: 0x10082b490 | FUN_10082b490 */

undefined1 *
FUN_10082b490(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined2 uVar18;
  undefined *puVar19;
  code *pcVar20;
  undefined1 **appuStack_120 [2];
  undefined1 ***local_110;
  undefined1 auStack_10e [6];
  undefined1 *local_108;
  undefined *local_100 [3];
  uint local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_100[0] = param_7;
  local_100[1] = (undefined *)param_5;
  local_100[2] = param_6;
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar16 = *(ulong *)(param_10 + 0x10);
  uVar13 = 8;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082f764();
  local_e4 = (uint)param_3;
  puVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_e0 = param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 8) {
        local_e4 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar19 = (undefined *)0x0;
        param_4 = puVar12;
      }
      else {
        puVar10 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar10;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar10;
        puVar11[1] = 8;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10082b5c0;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar19 = (undefined *)0x0;
LAB_10082b5c0:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    local_108 = puVar12;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    appuStack_120[1] = ppuVar7;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)appuStack_120 + lVar3);
    local_110 = appuStack_120;
    FUN_1007fb128();
    puVar5 = local_100[2];
    DVar9.unknown = local_100[2];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar12 = 0;
    uVar14 = local_d8;
    *(undefined1 **)((long)appuStack_120 + lVar3 + 8) = local_d0;
    *(undefined8 *)((long)&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 8;
    puVar4 = local_100[0];
    *(undefined **)((long)local_100 + lVar3) = local_100[1];
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar5;
    *(undefined **)((long)local_100 + lVar3 + 0x10) = puVar4;
    uVar18 = 0x108;
    if ((local_e4 & 1) == 0) {
      uVar18 = 8;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar12 + iVar2) = puVar19;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar20)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_108,local_c8,uVar17,uVar15 >> 0x10);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  return param_4;
}



/* Address: 0x10082b7f8 | FUN_10082b7f8 */

undefined8 *
FUN_10082b7f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined8 **appuStack_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 *local_108 [3];
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  local_108[0] = param_4;
  local_108[1] = (undefined8 *)param_5;
  local_108[2] = (undefined8 *)param_6;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar17 = *(ulong *)(param_9 + 0x10);
  uVar14 = 8;
  puVar21 = param_1;
  uVar12 = param_2;
  FUN_10082f764();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 8;
      if (bVar4) {
        puVar21 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar6 = puVar21;
        FUN_10080b43c();
        puVar7 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar6,0,0);
        *(char *)puVar6 = (char)puVar21;
        *(undefined1 *)((long)puVar6 + 1) = 8;
        _swift_willThrow();
        _swift_errorRetain(puVar7);
        local_54 = 0;
        puVar21 = puVar7;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_e8 = puVar13;
      uStack_e0 = uVar15;
      goto LAB_10082ba00;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  puVar21 = (undefined8 *)0x0;
  uStack_e0 = 0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  local_e8 = puVar7;
LAB_10082ba00:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    appuStack_130[1] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar20 = (undefined1 *)((long)appuStack_130 + lVar3);
    local_120 = appuStack_130;
    uStack_110._4_4_ = uVar16;
    FUN_1007fb128();
    puVar6 = local_108[1];
    DVar10.unknown = (undefined *)local_108[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar20 = 0;
    *(undefined8 **)((long)appuStack_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 8;
    *(undefined8 **)((long)&uStack_110 + lVar3) = local_108[0];
    *(undefined8 **)((long)local_108 + lVar3) = puVar6;
    *(undefined8 **)((long)local_108 + lVar3 + 8) = local_108[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 8;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(puVar7,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar20 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar20 + iVar2) = puVar21;
    uVar18 = (ulong)uStack_110._4_4_;
    puVar6 = (undefined8 *)(puVar20 + *(int *)(lVar9 + 0x1c));
    *puVar6 = puVar7;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_70 + 8))(puVar20,local_118,local_70);
    FUN_10080a754(puVar20);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(puVar7);
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,0);
    _swift_errorRelease(puVar21);
  }
  else {
    local_90[0] = puVar7;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uStack_e0,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar7,local_54,1);
    _swift_errorRelease(puVar21);
  }
  return puVar7;
}



/* Address: 0x10082bca0 | FUN_10082bca0 */

undefined1 *
FUN_10082bca0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined *puVar21;
  undefined1 *apuStack_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined1 **local_108;
  undefined1 *local_100;
  uint local_f4;
  undefined *local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0[0] = param_4;
  local_f0[1] = (undefined *)param_6;
  local_f0[2] = param_5;
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar16 = *(ulong *)(param_9 + 0x10);
  uVar13 = 9;
  puVar19 = param_1;
  local_d0 = param_2;
  FUN_10082f764();
  puVar12 = puVar19;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f0[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar19);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 9) {
        FUN_1007fb28c(puVar12,local_c8,uVar17);
        puVar21 = (undefined *)0x0;
        uVar18 = uVar15 & 0x109;
        puVar19 = puVar12;
      }
      else {
        puVar19 = puVar12;
        FUN_1000f4a4c(puVar12,local_c8,uVar17);
        puVar11 = puVar19;
        FUN_10080b43c();
        puVar21 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar19;
        uVar18 = 9;
        puVar11[1] = 9;
        _swift_willThrow();
        puVar19 = (undefined1 *)0x0;
      }
      goto LAB_10082bdd8;
    }
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
  }
  puVar21 = (undefined *)0x0;
  uVar18 = 9;
  puVar19 = (undefined1 *)0x0;
LAB_10082bdd8:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_f0[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_f4 = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_10c = uVar18;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_108 = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar11 = (undefined1 *)((long)apuStack_120 + lVar3);
    local_100 = (undefined1 *)apuStack_120;
    FUN_1007fb128();
    puVar5 = local_f0[2];
    DVar10.unknown = local_f0[2];
    apuStack_120[1] = puVar12;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar11 = 0;
    uVar14 = local_d0;
    puVar6 = local_f0[3];
    *(undefined1 **)((long)apuStack_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar14;
    *(undefined1 *)((long)&local_108 + lVar3) = 9;
    puVar4 = local_f0[1];
    *(undefined **)((long)&local_100 + lVar3) = local_f0[0];
    *(undefined **)(&stack0xffffffffffffff08 + lVar3) = puVar5;
    *(undefined **)((long)local_f0 + lVar3) = puVar4;
    uVar15 = 0x200;
    if (puVar19 != (undefined1 *)0x0) {
      uVar15 = local_10c;
    }
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar11 + *(int *)(lVar9 + 0x14)) = puVar6;
    *(undefined **)(puVar11 + iVar2) = puVar21;
    puVar1 = (undefined8 *)(puVar11 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar19;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = (short)uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar20 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(puVar19);
    _swift_errorRetain(puVar21);
    (*pcVar20)(puVar11,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_120[1],local_c8,uVar17,local_f4);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar11);
    FUN_100004594(local_90);
  }
  return puVar19;
}


