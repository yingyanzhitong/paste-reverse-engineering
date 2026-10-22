/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006f4d08 | FUN_1006f4d08 */

void FUN_1006f4d08(void)

{
  FUN_1006f4cd4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006f4d28 | FUN_1006f4d28 */

bool FUN_1006f4d28(ulong param_1,byte param_2,ulong param_3,char param_4)

{
  if (param_2 < 3) {
    if (param_2 == 0) {
      if (param_4 == '\0') {
LAB_1006f4dc8:
        return (int)param_1 == (int)param_3;
      }
    }
    else if (param_2 == 1) {
      if (param_4 == '\x01') goto LAB_1006f4dc8;
    }
    else if (param_4 == '\x02') goto LAB_1006f4da0;
  }
  else if (param_2 < 5) {
    if (param_2 == 3) {
      if (param_4 == '\x03') {
LAB_1006f4da0:
        return (int)param_1 == (int)param_3 && (param_3 ^ param_1) >> 0x20 == 0;
      }
    }
    else if (param_4 == '\x04') goto LAB_1006f4dc8;
  }
  else if (param_2 == 5) {
    if (param_4 == '\x05') goto LAB_1006f4dc8;
  }
  else if ((long)param_1 < 2) {
    if (param_1 == 0) {
      if ((param_4 == '\x06') && (param_3 == 0)) {
        return true;
      }
    }
    else if ((param_4 == '\x06') && (param_3 == 1)) {
      return true;
    }
  }
  else if (param_1 == 2) {
    if ((param_4 == '\x06') && (param_3 == 2)) {
      return true;
    }
  }
  else if ((param_4 == '\x06') && (param_3 == 3)) {
    return true;
  }
  return false;
}



/* Address: 0x1006f4e4c | FUN_1006f4e4c */

void FUN_1006f4e4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  Optional OVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  tuple2_conflict3 tVar6;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  tVar6 = Swift::Array<undefined>::_allocateUninitialized(0,OVar3.value);
  _swift_retain(param_1,tVar6._.unknown.unknown);
  FUN_1006f7a98();
  _swift_release(param_1);
  puVar5 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar4 = puVar2;
  if (((ulong)puVar5 & 1) == 0) {
    puVar4 = (undefined *)0x0;
    FUN_1006a2848(0,*(long *)(puVar2 + 0x10) + 1,1,puVar2);
  }
  uVar1 = *(ulong *)(puVar4 + 0x10);
  puVar5 = puVar4;
  if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
    puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
    FUN_1006a2848(puVar5,uVar1 + 1,1,puVar4);
  }
  *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puVar5 + uVar1 * 0x20 + 0x28) = 3;
  *(undefined8 *)(puVar5 + uVar1 * 0x20 + 0x20) = 0;
  puVar5[uVar1 * 0x20 + 0x30] = 6;
  *(undefined8 *)(puVar5 + uVar1 * 0x20 + 0x38) = 0x7fffffffffffffff;
  *(undefined **)(unaff_x20 + 0x10) = puVar5;
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  *(long *)(unaff_x20 + 0x20) = tVar6._0_8_;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Address: 0x1006f4f68 | FUN_1006f4f68 */

void FUN_1006f4f68(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_1006f4e4c(param_1,param_2);
  return;
}



/* Address: 0x1006f4fb0 | FUN_1006f4fb0 */

void FUN_1006f4fb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006f4fc4 | FUN_1006f4fc4 */

int FUN_1006f4fc4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006f500c | FUN_1006f500c */

void FUN_1006f500c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0xfa);
    if (0xf9 < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x1006f5050 | FUN_1006f5050 */

uint FUN_1006f5050(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 6;
  if (*(byte *)(param_1 + 2) < 6) {
    uVar1 = (uint)*(byte *)(param_1 + 2);
  }
  return uVar1;
}



/* Address: 0x1006f5068 | FUN_1006f5068 */

void FUN_1006f5068(ulong *param_1,uint param_2)

{
  if (5 < param_2) {
    *param_1 = (ulong)(param_2 - 6);
    param_2 = 6;
  }
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}



/* Address: 0x1006f5080 | FUN_1006f5080 */

undefined1  [16] FUN_1006f5080(void)

{
  return ZEXT816(0x100efaa40);
}



/* Address: 0x1006f5090 | FUN_1006f5090 */

int FUN_1006f5090(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf9 < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xfa;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 7) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006f50d8 | FUN_1006f50d8 */

void FUN_1006f50d8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfa) {
    if (0xf9 < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xfa);
    param_1[1] = 0;
    if (0xf9 < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1006f511c | FUN_1006f511c */

undefined1  [16] FUN_1006f511c(void)

{
  return ZEXT816(0x100efaab8);
}



/* Address: 0x1006f512c | FUN_1006f512c */

undefined1  [16] FUN_1006f512c(void)

{
  return ZEXT816(0x100efab40);
}



/* Address: 0x1006f513c | FUN_1006f513c */

void FUN_1006f513c(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  puStack_20 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_28 = &DAT_100c73328;
  local_18 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x58);
  return;
}



/* Address: 0x1006f5198 | FUN_1006f5198 */

void FUN_1006f5198(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006f51a4 | thunk_FUN_1001b6868 */

void thunk_FUN_1001b6868(void)

{
  thunk_FUN_1001b6868();
  return;
}



/* Address: 0x1006f51a8 | FUN_1006f51a8 */

void FUN_1006f51a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  undefined *puStack_68;
  undefined *local_60;
  byte local_58;
  
  lVar4 = unaff_x20[4];
  bVar1 = *(byte *)(unaff_x20 + 5);
  uVar5 = *(undefined8 *)(*unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(param_3);
  lVar6 = unaff_x20[3];
  lVar8 = unaff_x20[3];
  lVar7 = unaff_x20[2];
  _swift_bridgeObjectRetain(lVar7);
  _swift_bridgeObjectRetain(lVar6);
  _swift_bridgeObjectRetain(lVar4);
  puVar2 = PTR___type_metadata_for_Swift_Substring_100eaca98;
  puVar3 = PTR___type_metadata_for_Swift_Substring_100eaca98;
  FUN_100a2fc0c(PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  lVar6 = 0;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = lVar7;
  lStack_78 = lVar8;
  local_70 = lVar4;
  puStack_68 = puVar2;
  local_60 = puVar3;
  local_58 = bVar1 & 1;
  FUN_1006f590c(0,uVar5);
  FUN_1006f5304(param_1);
  (**(code **)(*(long *)(lVar6 + -8) + 8))(&local_90,lVar6);
  return;
}



/* Address: 0x1006f528c | FUN_1006f528c */

void FUN_1006f528c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR___type_metadata_for_Swift_Substring_100eaca98;
  puVar2 = PTR___type_metadata_for_Swift_Substring_100eaca98;
  FUN_100a2fc0c(PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = puVar1;
  param_1[6] = puVar2;
  *(undefined1 *)(param_1 + 7) = param_7;
  return;
}



/* Address: 0x1006f5304 | FUN_1006f5304 */

void FUN_1006f5304(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  Character CVar3;
  Optional OVar4;
  bool bVar5;
  undefined7 extraout_var;
  Index after;
  undefined1 *puVar6;
  undefined *puVar7;
  Substring SVar8;
  long lVar9;
  long lVar10;
  _StringGuts _Var11;
  UnsafeMutablePointer UVar12;
  void *pvVar14;
  long lVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  long extraout_x8_00;
  code *pcVar18;
  long extraout_x12;
  long extraout_x12_00;
  long lVar19;
  undefined8 *unaff_x20;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  long lVar25;
  undefined8 uVar26;
  Character CVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 auStack_140 [8];
  char *local_138;
  Range<Index> local_130;
  undefined8 local_d0;
  char *local_c8;
  void *local_c0;
  ulong uStack_b8;
  UnsafeMutablePointer local_b0;
  char *local_a8;
  void *local_a0;
  char *local_98;
  void *pvStack_90;
  ulong local_88;
  UnsafeMutablePointer UStack_80;
  char *local_78;
  void *pvStack_70;
  char *pcVar13;
  
  lVar25 = *(long *)(param_2 + 0x10);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,OVar4.value);
  lVar15 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar24 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar24 - extraout_x12;
  lVar17 = *(long *)(lVar25 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar19 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar21 = *unaff_x20;
  uVar26 = unaff_x20[1];
  _swift_bridgeObjectRetain(uVar26);
  FUN_1006f78f0(&local_c8,uVar21,uVar26,0x2f,0xe100000000000000);
  _swift_bridgeObjectRelease(uVar26);
  uVar22 = (ulong)local_b0.unknown >> 0xe;
  uVar20 = uStack_b8 >> 0xe;
  if (uVar22 < uVar20) {
    CVar3.bridgeObject = local_a0;
    CVar3.str = local_a8;
    local_130.unknown = local_b0.unknown;
    uVar23 = uVar22;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)local_b0.unknown;
    do {
      SVar28.bridgeObject = local_c0;
      SVar28.str = local_c8;
      CVar27 = Swift::String::get_subscript(after,SVar28);
      _Var11.unknown = CVar27.bridgeObject;
      if (CVar27 == CVar3) {
        _swift_bridgeObjectRelease(_Var11.unknown);
        break;
      }
      bVar5 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar27.str,_Var11,(_StringComparisonResult)(__int8)local_a8);
      _swift_bridgeObjectRelease(_Var11.unknown);
      if (bVar5) break;
      SVar29.bridgeObject = local_c0;
      SVar29.str = local_c8;
      after = Swift::String::index(after,SVar29);
      uVar23 = (ulong)after.cmsgPointer.unknown >> 0xe;
    } while (uVar23 < uVar20);
    if (uVar23 < uVar22) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1006f590c);
      (*pcVar18)();
    }
    SVar30.bridgeObject = local_c8;
    SVar30.str = (char *)after.cmsgPointer.unknown;
    UVar12 = after.cmsgPointer.unknown;
    pcVar13 = local_c8;
    pvVar14 = local_c0;
    SVar8 = Swift::String::get_subscript(local_130,SVar30);
    local_130.unknown = UVar12.unknown;
    local_138 = pcVar13;
    for (; (ulong)after.cmsgPointer.unknown >> 0xe < uVar20;
        after = Swift::String::index(after,SVar31)) {
      SVar32.bridgeObject = local_c0;
      SVar32.str = local_c8;
      CVar27 = Swift::String::get_subscript(after,SVar32);
      _Var11.unknown = CVar27.bridgeObject;
      if (CVar27 == CVar3) {
        _swift_bridgeObjectRelease(_Var11.unknown);
      }
      else {
        bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar27.str,_Var11,(_StringComparisonResult)(__int8)local_a8)
        ;
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar5) break;
      }
      SVar31.bridgeObject = local_c0;
      SVar31.str = local_c8;
    }
    local_d0 = 1;
    local_98 = local_c8;
    pvStack_90 = local_c0;
    local_88 = uStack_b8;
    local_78 = local_a8;
    pvStack_70 = local_a0;
    pcVar13 = local_138;
    UStack_80 = after.cmsgPointer.unknown;
    FUN_1006f5988(SVar8.unknown,local_130.unknown,local_138,pvVar14,&local_98,&local_d0,param_2);
    _swift_bridgeObjectRelease(pvVar14);
    if (pcVar13 == (char *)0xff) {
      _swift_bridgeObjectRelease(local_a0);
      _swift_bridgeObjectRelease(local_c0);
      puVar7 = &DAT_100fdddf8;
      FUN_1000f8b08(&DAT_100fdddf8,&DAT_100c72780);
      lVar9 = 0;
      _swift_getTupleTypeMetadata2(0,lVar25,puVar7,"value parameters ",0);
      pcVar18 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
    }
    else {
      Swift::Array<undefined>::get_subscript(lVar16,SVar8.unknown,unaff_x20[4],lVar9);
      _swift_bridgeObjectRelease(local_a0);
      _swift_bridgeObjectRelease(local_c0);
      lVar10 = lVar16;
      (**(code **)(lVar17 + 0x30))(lVar16,1,lVar25);
      if ((int)lVar10 != 1) {
        pcVar18 = *(code **)(lVar17 + 0x20);
        (*pcVar18)(lVar19 - extraout_x12_00,lVar16,lVar25);
        puVar7 = &DAT_100fdddf8;
        FUN_1000f8b08(&DAT_100fdddf8,&DAT_100c72780);
        lVar9 = 0;
        _swift_getTupleTypeMetadata2(0,lVar25,puVar7,"value parameters ",0);
        iVar1 = *(int *)(lVar9 + 0x30);
        (*pcVar18)(param_1,lVar19 - extraout_x12_00,lVar25);
        uVar21 = unaff_x20[6];
        uVar26 = unaff_x20[5];
        puVar2 = (undefined8 *)(param_1 + iVar1);
        puVar2[1] = unaff_x20[6];
        *puVar2 = uVar26;
        (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
        _swift_bridgeObjectRetain(uVar26);
        _swift_bridgeObjectRetain(uVar21);
        return;
      }
      (**(code **)(lVar15 + 8))(lVar16,lVar9);
      puVar7 = &DAT_100fdddf8;
      FUN_1000f8b08(&DAT_100fdddf8,&DAT_100c72780);
      lVar9 = 0;
      _swift_getTupleTypeMetadata2(0,lVar25,puVar7,"value parameters ",0);
      pcVar18 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
    }
  }
  else {
    if (*(long *)(unaff_x20[2] + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1006f5908);
      (*pcVar18)();
    }
    Swift::Array<undefined>::get_subscript
              (puVar24,*(undefined8 *)(unaff_x20[2] + 0x20),unaff_x20[4],lVar9);
    _swift_bridgeObjectRelease(local_a0);
    _swift_bridgeObjectRelease(local_c0);
    puVar6 = puVar24;
    (**(code **)(lVar17 + 0x30))(puVar24,1,lVar25);
    if ((int)puVar6 != 1) {
      pcVar18 = *(code **)(lVar17 + 0x20);
      (*pcVar18)(lVar19,puVar24,lVar25);
      puVar7 = &DAT_100fdddf8;
      FUN_1000f8b08(&DAT_100fdddf8,&DAT_100c72780);
      lVar9 = 0;
      _swift_getTupleTypeMetadata2(0,lVar25,puVar7,"value parameters ",0);
      iVar1 = *(int *)(lVar9 + 0x30);
      (*pcVar18)(param_1,lVar19,lVar25);
      uVar21 = unaff_x20[6];
      uVar26 = unaff_x20[5];
      puVar2 = (undefined8 *)(param_1 + iVar1);
      puVar2[1] = unaff_x20[6];
      *puVar2 = uVar26;
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
      _swift_bridgeObjectRetain(uVar26);
      _swift_bridgeObjectRetain(uVar21);
      return;
    }
    (**(code **)(lVar15 + 8))(puVar24,lVar9);
    puVar7 = &DAT_100fdddf8;
    FUN_1000f8b08(&DAT_100fdddf8,&DAT_100c72780);
    lVar9 = 0;
    _swift_getTupleTypeMetadata2(0,lVar25,puVar7,"value parameters ",0);
    pcVar18 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  }
  (*pcVar18)(param_1,1,1,lVar9);
  return;
}



/* Address: 0x1006f590c | FUN_1006f590c */

void FUN_1006f590c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006f5918 | FUN_1006f5918 */

undefined1  [16] FUN_1006f5918(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28));
  _swift_bridgeObjectRetain(uVar1);
  return auVar2;
}



/* Address: 0x1006f594c | FUN_1006f594c */

void FUN_1006f594c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Address: 0x1006f5988 | FUN_1006f5988 */

/* WARNING: Type propagation algorithm not settling */

undefined *
FUN_1006f5988(Range<Index> param_1,char *param_2,uint param_3,undefined8 param_4,String *param_5,
             ulong *param_6,undefined8 param_7)

{
  String *pSVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  code *pcVar14;
  bool bVar15;
  Index IVar16;
  Substring SVar17;
  Substring SVar18;
  char *pcVar19;
  undefined *puVar20;
  _StringGuts _Var21;
  _StringComparisonResult expecting;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  ulong *unaff_x20;
  Range<Index> RVar26;
  UnsafeMutablePointer UVar27;
  ulong uVar28;
  ulong uVar29;
  Index IVar30;
  ulong uVar31;
  Character CVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  char *local_120;
  undefined *local_110;
  uint local_d8;
  UnsafeMutablePointer local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  void *pvStack_70;
  char *pcVar22;
  
  local_110 = param_1.unknown;
  pcVar25 = param_2;
  FUN_1006f6050();
  pcVar23 = param_5->str;
  pcVar19 = param_5->bridgeObject;
  SVar11 = *param_5;
  SVar10 = *param_5;
  SVar9 = *param_5;
  SVar8 = *param_5;
  SVar7 = *param_5;
  SVar35 = *param_5;
  SVar6 = *param_5;
  SVar34 = *param_5;
  pSVar1 = param_5 + 2;
  pcVar3 = pSVar1->str;
  pvVar5 = param_5[2].bridgeObject;
  SVar13 = *pSVar1;
  SVar12 = *pSVar1;
  pcVar4 = param_5[1].str;
  local_d0.unknown = param_5[1].bridgeObject;
  expecting.value = (__int8)pcVar3;
  IVar30.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)local_d0.unknown;
  if ((param_3 & 0xff) < 6 || pcVar25 < (char *)0x2) {
    _swift_bridgeObjectRetain(pcVar19);
    _swift_bridgeObjectRetain(pvVar5);
  }
  else {
    if (pcVar25 != (char *)0x2) {
      return (undefined *)0x0;
    }
    if ((ulong)param_2 >> 0xe < (ulong)param_1.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f6038);
      (*pcVar14)();
    }
    uVar31 = (ulong)pcVar4 >> 0xe;
    uVar28 = (ulong)local_d0.unknown >> 0xe;
    if (uVar28 < uVar31) {
      pcVar25 = (char *)*param_6;
      _swift_bridgeObjectRetain(pcVar19);
      _swift_bridgeObjectRetain(pvVar5);
      local_120 = param_2;
      RVar26.unknown = local_d0.unknown;
joined_r0x0001006f5b44:
      do {
        if ((ulong)local_d0.unknown >> 0xe < uVar31) {
          CVar32 = Swift::String::get_subscript((Index)local_d0.unknown,SVar35);
          _Var21.unknown = CVar32.bridgeObject;
          if (CVar32 == (Character)SVar13) {
            _swift_bridgeObjectRelease(_Var21.unknown);
          }
          else {
            bVar15 = Swift::_stringCompareWithSmolCheck((_StringGuts)CVar32.str,_Var21,expecting);
            _swift_bridgeObjectRelease(_Var21.unknown);
            if (!bVar15) {
              local_d0.unknown = (undefined *)Swift::String::index(local_d0.unknown,SVar7);
              IVar30 = (Index)local_d0.unknown;
              goto joined_r0x0001006f5b44;
            }
          }
        }
        if ((ulong)local_d0.unknown >> 0xe < uVar28) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f602c);
          (*pcVar14)();
        }
        SVar33.bridgeObject = pcVar23;
        SVar33.str = local_d0.unknown;
        IVar16.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)local_d0.unknown;
        pcVar22 = pcVar23;
        pcVar24 = pcVar19;
        SVar17 = Swift::String::get_subscript(RVar26,SVar33);
        local_d8 = (uint)pcVar22;
        uVar28 = (ulong)local_d0.unknown >> 0xe;
        if (uVar28 < uVar31) {
          do {
            CVar32 = Swift::String::get_subscript((Index)local_d0.unknown,SVar9);
            _Var21.unknown = CVar32.bridgeObject;
            if (CVar32 == (Character)SVar12) {
              _swift_bridgeObjectRelease(_Var21.unknown);
            }
            else {
              bVar15 = Swift::_stringCompareWithSmolCheck((_StringGuts)CVar32.str,_Var21,expecting);
              _swift_bridgeObjectRelease(_Var21.unknown);
              if (!bVar15) {
                bVar15 = true;
                goto LAB_1006f5ca0;
              }
            }
            local_d0.unknown = (undefined *)Swift::String::index(local_d0.unknown,SVar8);
            uVar28 = (ulong)local_d0.unknown >> 0xe;
            IVar30 = (Index)local_d0.unknown;
          } while (uVar28 < uVar31);
          bVar15 = false;
        }
        else {
          bVar15 = false;
        }
LAB_1006f5ca0:
        UVar27 = IVar16.cmsgPointer.unknown;
        local_98 = pcVar25;
        FUN_1006f6050();
        _swift_bridgeObjectRelease(pcVar24);
        if (((local_d8 & 0xff) < 6) || (UVar27.unknown < (undefined *)0x3)) {
          *param_6 = (ulong)local_98;
          local_110 = SVar17.unknown;
          goto LAB_1006f5f28;
        }
        if ((ulong)IVar16.cmsgPointer.unknown >> 0xe < (ulong)param_1.unknown >> 0xe) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f6030);
          (*pcVar14)();
        }
        local_120 = (char *)IVar16.cmsgPointer.unknown;
        RVar26.unknown = local_d0.unknown;
      } while (bVar15);
      local_d8 = 6;
      UVar27.unknown = (undefined *)0x2;
    }
    else {
      _swift_bridgeObjectRetain(pcVar19);
      _swift_bridgeObjectRetain(pvVar5);
      local_d8 = 6;
      UVar27.unknown = (undefined *)0x2;
      local_120 = param_2;
    }
LAB_1006f5f28:
    pcVar25 = (char *)*unaff_x20;
    puVar20 = (undefined *)unaff_x20[1];
    SVar35.bridgeObject = pcVar25;
    SVar35.str = local_120;
    SVar17 = Swift::String::get_subscript(param_1,SVar35);
    uVar31 = unaff_x20[5];
    uVar28 = unaff_x20[6];
    if (DAT_100fdddf0 != -1) {
      _swift_once(&DAT_100fdddf0,FUN_1006ead0c);
    }
    uVar29 = 0;
    FUN_100a30b80(&DAT_101058120,uVar31,uVar28,PTR___type_metadata_for_Swift_Substring_100eaca98,
                  PTR___type_metadata_for_Swift_Substring_100eaca98,
                  PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
                 );
    if ((uVar29 & 1) == 0) {
      uStack_b8 = DAT_101058128;
      local_c0 = DAT_101058120;
      local_b0 = DAT_101058130;
      uStack_a8 = DAT_101058138;
      local_98 = (char *)SVar17;
      pcStack_90 = local_120;
      local_88 = pcVar25;
      local_80 = puVar20;
      _swift_bridgeObjectRetain();
      puVar20 = &DAT_100fdddf8;
      FUN_1000f7830(&DAT_100fdddf8,&DAT_100c72780);
      FUN_100a3017c(&local_98,&local_c0,puVar20);
    }
    else {
      _swift_bridgeObjectRelease(puVar20);
    }
    if ((5 < (local_d8 & 0xff)) && ((undefined *)0x2 < UVar27.unknown)) {
      _swift_bridgeObjectRelease(pvVar5);
      goto LAB_1006f5eb8;
    }
  }
  uVar29 = (ulong)local_d0.unknown >> 0xe;
  uVar28 = (ulong)pcVar4 >> 0xe;
  IVar16.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)local_d0.unknown;
  uVar31 = uVar29;
  if (uVar28 <= uVar29) {
    _swift_bridgeObjectRelease(pvVar5);
    _swift_bridgeObjectRelease(pcVar19);
    return local_110;
  }
  do {
    CVar32 = Swift::String::get_subscript(IVar16,SVar34);
    _Var21.unknown = CVar32.bridgeObject;
    if (CVar32 == (Character)SVar13) {
      _swift_bridgeObjectRelease(_Var21.unknown);
      break;
    }
    bVar15 = Swift::_stringCompareWithSmolCheck((_StringGuts)CVar32.str,_Var21,expecting);
    _swift_bridgeObjectRelease(_Var21.unknown);
    if (bVar15) break;
    IVar16 = Swift::String::index(IVar16,SVar6);
    uVar31 = (ulong)IVar16.cmsgPointer.unknown >> 0xe;
    IVar30 = IVar16;
  } while (uVar31 < uVar28);
  if (uVar31 < uVar29) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f6034);
    (*pcVar14)();
  }
  SVar34.bridgeObject = pcVar23;
  SVar34.str = (char *)IVar16.cmsgPointer.unknown;
  UVar27 = IVar16.cmsgPointer.unknown;
  pcVar25 = pcVar23;
  pcVar22 = pcVar19;
  SVar17 = Swift::String::get_subscript(local_d0.unknown,SVar34);
  while ((ulong)IVar16.cmsgPointer.unknown >> 0xe < uVar28) {
    CVar32 = Swift::String::get_subscript(IVar16,SVar11);
    _Var21.unknown = CVar32.bridgeObject;
    if (CVar32 == (Character)SVar13) {
      _swift_bridgeObjectRelease(_Var21.unknown);
    }
    else {
      bVar15 = Swift::_stringCompareWithSmolCheck((_StringGuts)CVar32.str,_Var21,expecting);
      _swift_bridgeObjectRelease(_Var21.unknown);
      if (!bVar15) break;
    }
    IVar16 = Swift::String::index(IVar16,SVar10);
    IVar30 = IVar16;
  }
  uVar31 = *param_6;
  local_98 = pcVar23;
  pcStack_90 = pcVar19;
  local_78 = pcVar3;
  pvStack_70 = pvVar5;
  local_88 = pcVar4;
  local_80 = (undefined *)IVar30.cmsgPointer.unknown;
  while( true ) {
    if ((long)uVar31 < 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f5df8);
      (*pcVar14)();
    }
    if (*(ulong *)(unaff_x20[2] + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f6024);
      (*pcVar14)();
    }
    lVar2 = unaff_x20[2] + uVar31 * 0x20;
    if ((5 < *(byte *)(lVar2 + 0x30)) && (2 < *(ulong *)(lVar2 + 0x28))) break;
    SVar18 = SVar17;
    pcVar23 = pcVar25;
    FUN_1006f5988(SVar17.unknown,UVar27.unknown,pcVar25,pcVar22,&local_98,param_6,param_7);
    if (pcVar23 != (char *)0xff) {
      _swift_bridgeObjectRelease(pvVar5);
      _swift_bridgeObjectRelease(pcVar19);
      _swift_bridgeObjectRelease(pcVar22);
      return SVar18.unknown;
    }
    if (*(ulong *)(unaff_x20[2] + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x1006f6028);
      (*pcVar14)();
    }
    uVar31 = *(ulong *)(unaff_x20[2] + uVar31 * 0x20 + 0x38);
    *param_6 = uVar31;
  }
  _swift_bridgeObjectRelease(pvVar5);
  _swift_bridgeObjectRelease(pcVar19);
  pcVar19 = pcVar22;
LAB_1006f5eb8:
  _swift_bridgeObjectRelease(pcVar19);
  return (undefined *)0x0;
}



/* Address: 0x1006f6050 | FUN_1006f6050 */

undefined8
FUN_1006f6050(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(lVar6 + 0x10);
  if ((long)*param_5 < lVar7) {
    uVar5 = *param_5;
    do {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006f6144);
        (*pcVar3)();
      }
      if (*(ulong *)(lVar6 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006f6148);
        (*pcVar3)();
      }
      puVar1 = (undefined8 *)(lVar6 + 0x20 + uVar5 * 0x20);
      uVar2 = *puVar1;
      uVar8 = puVar1[3];
      uVar4 = param_1;
      FUN_1006f6148(param_1,param_2,param_3,param_4);
      if (((uint)uVar4 & 0xff) == 3 || (uVar4 & 0xff) == 0) {
        *param_5 = uVar5 + 1;
        return uVar2;
      }
      *param_5 = uVar8;
      uVar5 = uVar8;
    } while ((long)uVar8 < lVar7);
  }
  return 0;
}



/* Address: 0x1006f6148 | FUN_1006f6148 */

/* WARNING: Type propagation algorithm not settling */

uint FUN_1006f6148(Index param_1,Index param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,byte param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  __int64 _Var4;
  Index IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  Index IVar8;
  Index IVar9;
  UnsafeMutablePointer *pUVar10;
  long lVar11;
  UnsafeMutablePointer *pUVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  UnsafeMutablePointer local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  UnsafeMutablePointer local_c0;
  UnsafeMutablePointer UStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  UnsafeMutablePointer local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  if (param_7 < 3) {
    if (param_7 == 0) {
      uStack_98 = unaff_x20[1];
      local_a0.unknown = (undefined *)*unaff_x20;
      local_88 = unaff_x20[3];
      local_90 = unaff_x20[2];
      local_80 = unaff_x20[4];
      uStack_78 = (undefined1)unaff_x20[5];
      uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x31);
      uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x29) >> 0x38);
      if (*(ulong *)(local_88 + 0x10) <= (param_6 & 0xffffffff)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6610);
        (*pcVar2)();
      }
      lVar11 = local_88 + (param_6 & 0xffffffff) * 0x20;
      uVar7 = *(undefined8 *)(lVar11 + 0x20);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      uVar13 = *(undefined8 *)(lVar11 + 0x30);
      uVar14 = *(undefined8 *)(lVar11 + 0x38);
      _swift_bridgeObjectRetain(uVar14);
      FUN_1006f663c(uVar7,uVar1,uVar13,uVar14,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3,param_4);
      uVar3 = (uint)uVar7;
      goto LAB_1006f65b4;
    }
    if (param_7 == 1) {
      if (*(ulong *)(unaff_x20[3] + 0x10) <= (param_6 & 0xffffffff)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6614);
        (*pcVar2)();
      }
      lVar11 = unaff_x20[3] + (param_6 & 0xffffffff) * 0x20;
      local_90 = *(undefined8 *)(lVar11 + 0x30);
      local_88 = *(long *)(lVar11 + 0x38);
      uStack_98 = *(undefined8 *)(lVar11 + 0x28);
      local_a0.unknown = *(undefined **)(lVar11 + 0x20);
      local_c0 = param_1.cmsgPointer.unknown;
      UStack_b8 = param_2.cmsgPointer.unknown;
      local_b0 = param_3;
      uStack_a8 = param_4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(param_4);
      puVar6 = &DAT_100fdddf8;
      FUN_1000f7830(&DAT_100fdddf8,&DAT_100c72780);
      pUVar10 = &local_c0;
      pUVar12 = &local_a0;
      goto LAB_1006f6540;
    }
    if (*(ulong *)(unaff_x20[3] + 0x10) <= param_6 >> 0x20) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6618);
      (*pcVar2)();
    }
    lVar11 = unaff_x20[3] + (param_6 >> 0x20) * 0x20;
    IVar5.cmsgPointer.unknown =
         (UnsafeMutablePointer)((UnsafeMutablePointer *)(lVar11 + 0x20))->unknown;
    IVar9.cmsgPointer.unknown =
         (UnsafeMutablePointer)((UnsafeMutablePointer *)(lVar11 + 0x28))->unknown;
    uVar7 = *(undefined8 *)(lVar11 + 0x30);
    uVar13 = *(undefined8 *)(lVar11 + 0x38);
    uStack_98 = unaff_x20[1];
    local_a0.unknown = (undefined *)*unaff_x20;
    local_88 = unaff_x20[3];
    local_90 = unaff_x20[2];
    local_80 = unaff_x20[4];
    uStack_78 = (undefined1)unaff_x20[5];
    uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x31);
    uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
    uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x29) >> 0x38);
    _swift_bridgeObjectRetain(uVar13);
    IVar8.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    FUN_1006f6e10(param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,param_3,param_4,
                  IVar5.cmsgPointer.unknown,IVar9.cmsgPointer.unknown,uVar7,uVar13);
    if (((ulong)IVar8.cmsgPointer.unknown & 1) == 0) goto LAB_1006f65e0;
    if (*(ulong *)(local_88 + 0x10) <= (param_6 & 0xffffffff)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6628);
      (*pcVar2)();
    }
    lVar11 = local_88 + (param_6 & 0xffffffff) * 0x20;
    local_b0 = *(undefined8 *)(lVar11 + 0x30);
    uStack_a8 = *(undefined8 *)(lVar11 + 0x38);
    UStack_b8.unknown = *(undefined **)(lVar11 + 0x28);
    local_c0.unknown = *(undefined **)(lVar11 + 0x20);
    _swift_bridgeObjectRetain();
    _Var4 = Swift::Substring::distance(IVar5,IVar9,(Substring)IVar5.cmsgPointer.unknown);
    _swift_bridgeObjectRelease(uVar13);
    if (_Var4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6630);
      (*pcVar2)();
    }
    lVar11 = -_Var4;
    IVar9.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    Swift::Substring::_index(param_2,lVar11,param_1,(Substring)param_1.cmsgPointer.unknown);
    IVar5.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    if (((uint)lVar11 & 0xff) != 1) {
      IVar5.cmsgPointer.unknown = IVar9.cmsgPointer.unknown;
    }
    IVar9.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    if ((ulong)IVar5.cmsgPointer.unknown >> 0xe < (ulong)param_1.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6638);
      (*pcVar2)();
    }
  }
  else {
    if (4 < param_7) {
      if (param_7 != 5) {
        return 0x3000002 >> (ulong)(((uint)param_6 & 3) << 3);
      }
      uStack_98 = unaff_x20[1];
      local_a0.unknown = (undefined *)*unaff_x20;
      local_88 = unaff_x20[3];
      local_90 = unaff_x20[2];
      local_80 = unaff_x20[4];
      uStack_78 = (undefined1)unaff_x20[5];
      uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x31);
      uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x29) >> 0x38);
      if (*(ulong *)(local_88 + 0x10) <= (param_6 & 0xffffffff)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6620);
        (*pcVar2)();
      }
      lVar11 = local_88 + (param_6 & 0xffffffff) * 0x20;
      uVar7 = *(undefined8 *)(lVar11 + 0x20);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      uVar13 = *(undefined8 *)(lVar11 + 0x30);
      uVar14 = *(undefined8 *)(lVar11 + 0x38);
      _swift_bridgeObjectRetain(uVar14);
      FUN_1006f6cc4(param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,param_3,param_4,uVar7,
                    uVar1,uVar13,uVar14);
      uVar3 = SUB84(param_1.cmsgPointer.unknown,0);
LAB_1006f65b4:
      _swift_bridgeObjectRelease(uVar14);
      return (uVar3 ^ 0xffffffff) & 1;
    }
    if (param_7 != 3) {
      uStack_98 = unaff_x20[1];
      local_a0.unknown = (undefined *)*unaff_x20;
      local_88 = unaff_x20[3];
      local_90 = unaff_x20[2];
      local_80 = unaff_x20[4];
      uStack_78 = (undefined1)unaff_x20[5];
      uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x31);
      uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x29) >> 0x38);
      if (*(ulong *)(local_88 + 0x10) <= (param_6 & 0xffffffff)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6624);
        (*pcVar2)();
      }
      lVar11 = local_88 + (param_6 & 0xffffffff) * 0x20;
      uVar7 = *(undefined8 *)(lVar11 + 0x20);
      uVar1 = *(undefined8 *)(lVar11 + 0x28);
      uVar13 = *(undefined8 *)(lVar11 + 0x30);
      uVar14 = *(undefined8 *)(lVar11 + 0x38);
      _swift_bridgeObjectRetain(uVar14);
      FUN_1006f6e10(param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,param_3,param_4,uVar7,
                    uVar1,uVar13,uVar14);
      uVar3 = SUB84(param_1.cmsgPointer.unknown,0);
      goto LAB_1006f65b4;
    }
    if (*(ulong *)(unaff_x20[3] + 0x10) <= (param_6 & 0xffffffff)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f661c);
      (*pcVar2)();
    }
    lVar11 = unaff_x20[3] + (param_6 & 0xffffffff) * 0x20;
    IVar5.cmsgPointer.unknown =
         (UnsafeMutablePointer)((UnsafeMutablePointer *)(lVar11 + 0x20))->unknown;
    IVar9.cmsgPointer.unknown =
         (UnsafeMutablePointer)((UnsafeMutablePointer *)(lVar11 + 0x28))->unknown;
    uVar7 = *(undefined8 *)(lVar11 + 0x30);
    uVar13 = *(undefined8 *)(lVar11 + 0x38);
    uStack_98 = unaff_x20[1];
    local_a0.unknown = (undefined *)*unaff_x20;
    local_88 = unaff_x20[3];
    local_90 = unaff_x20[2];
    local_80 = unaff_x20[4];
    uStack_78 = (undefined1)unaff_x20[5];
    uStack_6f = *(undefined8 *)((long)unaff_x20 + 0x31);
    uStack_77 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x29);
    uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x29) >> 0x38);
    _swift_bridgeObjectRetain(uVar13);
    IVar8.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    FUN_1006f6cc4(param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,param_3,param_4,
                  IVar5.cmsgPointer.unknown,IVar9.cmsgPointer.unknown,uVar7,uVar13);
    if (((ulong)IVar8.cmsgPointer.unknown & 1) == 0) {
LAB_1006f65e0:
      _swift_bridgeObjectRelease(uVar13);
      return 1;
    }
    if (*(ulong *)(local_88 + 0x10) <= param_6 >> 0x20) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f662c);
      (*pcVar2)();
    }
    lVar11 = local_88 + (param_6 >> 0x20) * 0x20;
    local_b0 = *(undefined8 *)(lVar11 + 0x30);
    uStack_a8 = *(undefined8 *)(lVar11 + 0x38);
    UStack_b8.unknown = *(undefined **)(lVar11 + 0x28);
    local_c0.unknown = *(undefined **)(lVar11 + 0x20);
    _swift_bridgeObjectRetain();
    _Var4 = Swift::Substring::distance(IVar5,IVar9,(Substring)IVar5.cmsgPointer.unknown);
    _swift_bridgeObjectRelease(uVar13);
    if (_Var4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6634);
      (*pcVar2)();
    }
    IVar5.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    Swift::Substring::_index(param_1,_Var4,param_2,(Substring)param_1.cmsgPointer.unknown);
    IVar9.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    if (((uint)_Var4 & 0xff) != 1) {
      IVar9.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
    }
    IVar5.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    if ((ulong)param_2.cmsgPointer.unknown >> 0xe < (ulong)IVar9.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f663c);
      (*pcVar2)();
    }
  }
  local_e0.unknown =
       (undefined *)
       Swift::Substring::get_subscript(IVar9.cmsgPointer.unknown,IVar5.cmsgPointer.unknown);
  puVar6 = &DAT_100fdddf8;
  puStack_d8 = (undefined *)IVar5.cmsgPointer.unknown;
  local_d0 = (undefined *)param_1.cmsgPointer.unknown;
  puStack_c8 = (undefined *)param_2.cmsgPointer.unknown;
  FUN_1000f7830(&DAT_100fdddf8,&DAT_100c72780);
  pUVar10 = &local_e0;
  pUVar12 = &local_c0;
LAB_1006f6540:
  FUN_100a3017c(pUVar10,pUVar12,puVar6);
  return 0;
}



/* Address: 0x1006f663c | FUN_1006f663c */

ulong FUN_1006f663c(ulong param_1,ulong param_2,_StringGuts param_3,Range<__int64> param_4,
                   ulong param_5,ulong param_6,undefined *param_7,undefined *param_8)

{
  bool bVar1;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) != 0) {
    FUN_1006f66d0(param_5,param_6,param_7,param_8,param_1,param_2,param_3.unknown,param_4.unknown);
    return param_5;
  }
  if ((((param_3.unknown == param_7) && (param_4.unknown == param_8)) &&
      ((undefined *)(param_1 >> 0x10) == (undefined *)(param_5 >> 0x10))) &&
     ((undefined *)(param_2 >> 0x10) == (undefined *)(param_6 >> 0x10))) {
    return 1;
  }
  bVar1 = Swift::_stringCompareInternal
                    (param_3,param_4,(undefined *)(param_1 >> 0x10),(undefined *)(param_2 >> 0x10),
                     (_StringComparisonResult)(__int8)param_7);
  return (ulong)bVar1;
}



/* Address: 0x1006f66d0 | FUN_1006f66d0 */

undefined8
FUN_1006f66d0(Index param_1,Index param_2,undefined8 param_3,undefined8 param_4,Index param_5,
             Index param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  bool bVar2;
  __int64 _Var3;
  __int64 _Var4;
  Index after;
  Index after_00;
  _StringGuts _Var5;
  undefined8 uVar6;
  Character CVar7;
  Character CVar8;
  String SVar9;
  String SVar10;
  
  _Var3 = Swift::Substring::distance(param_5,param_6,(Substring)param_5.cmsgPointer.unknown);
  _Var4 = Swift::Substring::distance(param_1,param_2,(Substring)param_1.cmsgPointer.unknown);
  if (_Var3 == _Var4) {
    _swift_bridgeObjectRetain(param_8);
    _swift_bridgeObjectRetain(param_4);
    after.cmsgPointer.unknown = param_5.cmsgPointer.unknown;
    after_00.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    do {
      while( true ) {
        if (((ulong)after.cmsgPointer.unknown ^ (ulong)param_6.cmsgPointer.unknown) < 0x4000) {
          uVar6 = 1;
          goto LAB_1006f677c;
        }
        CVar7 = Swift::Substring::get_subscript(after,(Substring)param_5.cmsgPointer.unknown);
        after = Swift::Substring::index(after,(Substring)param_5.cmsgPointer.unknown);
        if (((ulong)after_00.cmsgPointer.unknown ^ (ulong)param_2.cmsgPointer.unknown) < 0x4000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f6928);
          (*pcVar1)();
        }
        CVar8 = Swift::Substring::get_subscript(after_00,(Substring)param_1.cmsgPointer.unknown);
        after_00 = Swift::Substring::index(after_00,(Substring)param_1.cmsgPointer.unknown);
        SVar9 = Swift::Character::lowercased(CVar7);
        _Var5.unknown = SVar9.bridgeObject;
        _swift_bridgeObjectRelease(CVar7.bridgeObject);
        SVar10 = Swift::Character::lowercased(CVar8);
        _swift_bridgeObjectRelease(CVar8.bridgeObject);
        if (SVar9 != SVar10) break;
        _swift_bridgeObjectRelease(_Var5.unknown);
        _swift_bridgeObjectRelease(SVar10.bridgeObject);
      }
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar9.str,_Var5,(_StringComparisonResult)(__int8)SVar10.str);
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
    } while (bVar2);
    uVar6 = 0;
LAB_1006f677c:
    _swift_bridgeObjectRelease(param_8);
    _swift_bridgeObjectRelease(param_4);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



/* Address: 0x1006f6928 | FUN_1006f6928 */

undefined8 FUN_1006f6928(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  __int64 _Var8;
  __int64 _Var9;
  undefined8 uVar10;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  undefined8 unaff_x20;
  long lVar15;
  long lVar16;
  Character CVar18;
  Character CVar20;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  char *local_70;
  void *local_68;
  _StringGuts _Var11;
  String SVar17;
  String SVar19;
  
  lVar12 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  puVar1 = PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18;
  uVar10 = *(undefined8 *)(*(long *)(*(long *)(param_5 + 8) + 8) + 8);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness();
  local_c0 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  local_b8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b8 + 0x40));
  lVar16 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = *(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 8) + 8);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,local_b0,param_2,puVar2,puVar1);
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar16 - extraout_x8_02;
  _Var8 = Swift::Collection::get_count();
  _Var9 = Swift::Collection::get_count();
  if (_Var8 == _Var9) {
    local_c8 = lVar15;
    (**(code **)(local_b8 + 0x10))(lVar16,unaff_x20,param_2);
    uVar3 = local_b0;
    Swift::Sequence::_makeIterator();
    (**(code **)(lVar12 + 0x10))
              (auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uVar3,param_2,lVar7,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    if (local_68 != (void *)0x0) {
      _swift_getAssociatedConformanceWitness
                (uVar10,param_3,lVar6,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      do {
        Swift::IteratorProtocol::_next();
        if (local_68 == (void *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1006f6cc4);
          (*pcVar4)();
        }
        CVar18.bridgeObject = local_68;
        CVar18.str = local_70;
        SVar17 = Swift::Character::lowercased(CVar18);
        _Var11.unknown = SVar17.bridgeObject;
        _swift_bridgeObjectRelease(local_68);
        CVar20.bridgeObject = local_68;
        CVar20.str = local_70;
        SVar19 = Swift::Character::lowercased(CVar20);
        _swift_bridgeObjectRelease(local_68);
        if (SVar17 == SVar19) {
          _swift_bridgeObjectRelease(_Var11.unknown);
          _swift_bridgeObjectRelease(SVar19.bridgeObject);
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar17.str,_Var11,
                             (_StringComparisonResult)(__int8)SVar19.str);
          _swift_bridgeObjectRelease(_Var11.unknown);
          _swift_bridgeObjectRelease(SVar19.bridgeObject);
          if (!bVar5) {
            (**(code **)(local_c0 + 8))(lVar13,lVar6);
            (**(code **)(local_c8 + 8))(lVar14,lVar7);
            goto LAB_1006f6c6c;
          }
        }
        Swift::IteratorProtocol::_next();
      } while (local_68 != (void *)0x0);
    }
    (**(code **)(local_c0 + 8))(lVar13,lVar6);
    (**(code **)(local_c8 + 8))(lVar14,lVar7);
    uVar10 = 1;
  }
  else {
LAB_1006f6c6c:
    uVar10 = 0;
  }
  return uVar10;
}



/* Address: 0x1006f6cc4 | FUN_1006f6cc4 */

UnsafeMutablePointer
FUN_1006f6cc4(Index param_1,Index param_2,undefined8 param_3,undefined8 param_4,Index param_5,
             Index param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  __int64 offsetBy;
  Index IVar2;
  Substring SVar3;
  UnsafeMutablePointer UVar4;
  Index IVar5;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    FUN_1006f7120(param_5.cmsgPointer.unknown,param_6.cmsgPointer.unknown,param_7,param_8,
                  param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,param_3,param_4);
    return param_5.cmsgPointer.unknown;
  }
  offsetBy = Swift::Substring::distance(param_5,param_6,(Substring)param_5.cmsgPointer.unknown);
  if (-1 < offsetBy) {
    IVar2.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    Swift::Substring::_index(param_1,offsetBy,param_2,(Substring)param_1.cmsgPointer.unknown);
    IVar5.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    if (((uint)offsetBy & 0xff) != 1) {
      IVar5.cmsgPointer.unknown = IVar2.cmsgPointer.unknown;
    }
    if ((ulong)param_1.cmsgPointer.unknown >> 0xe <= (ulong)IVar5.cmsgPointer.unknown >> 0xe) {
      SVar3 = Swift::Substring::get_subscript
                        ((Range<Index>)param_1.cmsgPointer.unknown,
                         (Substring)IVar5.cmsgPointer.unknown);
      FUN_1006f66d0(param_5.cmsgPointer.unknown,param_6.cmsgPointer.unknown,param_7,param_8,
                    SVar3.unknown,IVar5.cmsgPointer.unknown,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown);
      _swift_bridgeObjectRelease(param_2.cmsgPointer.unknown);
      UVar4.unknown._4_4_ = 0;
      UVar4.unknown._0_4_ = SUB84(param_5.cmsgPointer.unknown,0) & 1;
      return (UnsafeMutablePointer)UVar4.unknown;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f6e10);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006f6e0c);
  (*pcVar1)();
}



/* Address: 0x1006f6e10 | FUN_1006f6e10 */

UnsafeMutablePointer
FUN_1006f6e10(Index param_1,Index param_2,undefined8 param_3,undefined8 param_4,Index param_5,
             Index param_6,undefined8 param_7,undefined8 param_8)

{
  Index IVar1;
  code *pcVar2;
  __int64 _Var3;
  Index IVar4;
  Substring SVar5;
  UnsafeMutablePointer UVar6;
  long offsetBy;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) == 0) {
    FUN_1006f6f5c(param_5.cmsgPointer.unknown,param_6.cmsgPointer.unknown,param_7,param_8,
                  param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,param_3,param_4);
    return param_5.cmsgPointer.unknown;
  }
  _Var3 = Swift::Substring::distance(param_5,param_6,(Substring)param_5.cmsgPointer.unknown);
  if (-1 < _Var3) {
    offsetBy = -_Var3;
    IVar4.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
    Swift::Substring::_index(param_2,offsetBy,param_1,(Substring)param_1.cmsgPointer.unknown);
    IVar1.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    if (((uint)offsetBy & 0xff) != 1) {
      IVar1.cmsgPointer.unknown = IVar4.cmsgPointer.unknown;
    }
    if ((ulong)IVar1.cmsgPointer.unknown >> 0xe <= (ulong)param_2.cmsgPointer.unknown >> 0xe) {
      IVar4.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
      SVar5 = Swift::Substring::get_subscript
                        ((Range<Index>)IVar1.cmsgPointer.unknown,
                         (Substring)param_2.cmsgPointer.unknown);
      FUN_1006f66d0(param_5.cmsgPointer.unknown,param_6.cmsgPointer.unknown,param_7,param_8,
                    SVar5.unknown,param_2.cmsgPointer.unknown,param_1.cmsgPointer.unknown,
                    IVar4.cmsgPointer.unknown);
      _swift_bridgeObjectRelease(IVar4.cmsgPointer.unknown);
      UVar6.unknown._4_4_ = 0;
      UVar6.unknown._0_4_ = SUB84(param_5.cmsgPointer.unknown,0) & 1;
      return (UnsafeMutablePointer)UVar6.unknown;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6f5c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f6f58);
  (*pcVar2)();
}



/* Address: 0x1006f6f5c | FUN_1006f6f5c */

undefined8
FUN_1006f6f5c(Substring param_1,Index param_2,undefined8 param_3,undefined8 param_4,
             Substring param_5,Index param_6)

{
  bool bVar1;
  Index IVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  Character CVar5;
  Character CVar6;
  
  do {
    if (((ulong)param_6.cmsgPointer.unknown ^ (ulong)param_5.unknown) < 0x4000) {
      if (((ulong)param_2.cmsgPointer.unknown ^ (ulong)param_1.unknown) < 0x4000) {
        return 1;
      }
      IVar2 = Swift::Substring::index(param_2,param_1);
      CVar5 = Swift::Substring::get_subscript(IVar2,param_1);
      _Var3.unknown = CVar5.bridgeObject;
      uVar4 = 0;
LAB_1006f7108:
      _swift_bridgeObjectRelease(_Var3.unknown);
      return uVar4;
    }
    param_6 = Swift::Substring::index(param_6,param_5);
    CVar5 = Swift::Substring::get_subscript(param_6,param_5);
    _Var3.unknown = CVar5.bridgeObject;
    if (((ulong)param_2.cmsgPointer.unknown ^ (ulong)param_1.unknown) < 0x4000) {
      uVar4 = 1;
      goto LAB_1006f7108;
    }
    param_2 = Swift::Substring::index(param_2,param_1);
    CVar6 = Swift::Substring::get_subscript(param_2,param_1);
    if (CVar5 == CVar6) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(CVar6.bridgeObject);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar5.str,_Var3,(_StringComparisonResult)(__int8)CVar6.str);
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(CVar6.bridgeObject);
      if (!bVar1) {
        return 0;
      }
    }
  } while( true );
}



/* Address: 0x1006f7120 | FUN_1006f7120 */

undefined8
FUN_1006f7120(Substring param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             Substring param_5,ulong param_6)

{
  bool bVar1;
  Index after;
  Index after_00;
  _StringGuts _Var2;
  undefined8 uVar3;
  Character CVar4;
  Character CVar5;
  
  after_00.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_1.unknown;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_5.unknown;
  do {
    if (((ulong)after.cmsgPointer.unknown ^ param_6) < 0x4000) {
      if (((ulong)after_00.cmsgPointer.unknown ^ param_2) < 0x4000) {
        return 1;
      }
      CVar5 = Swift::Substring::get_subscript(after_00,param_1);
      _Var2.unknown = CVar5.bridgeObject;
      Swift::Substring::index(after_00,param_1);
      uVar3 = 0;
LAB_1006f72c8:
      _swift_bridgeObjectRelease(_Var2.unknown);
      return uVar3;
    }
    CVar5 = Swift::Substring::get_subscript(after,param_5);
    _Var2.unknown = CVar5.bridgeObject;
    after = Swift::Substring::index(after,param_5);
    if (((ulong)after_00.cmsgPointer.unknown ^ param_2) < 0x4000) {
      uVar3 = 1;
      goto LAB_1006f72c8;
    }
    CVar4 = Swift::Substring::get_subscript(after_00,param_1);
    after_00 = Swift::Substring::index(after_00,param_1);
    if (CVar5 == CVar4) {
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(CVar4.bridgeObject);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar5.str,_Var2,(_StringComparisonResult)(__int8)CVar4.str);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(CVar4.bridgeObject);
      if (!bVar1) {
        return 0;
      }
    }
  } while( true );
}



/* Address: 0x1006f72fc | FUN_1006f72fc */

undefined8 FUN_1006f72fc(Substring param_1,undefined *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  Index after;
  undefined8 uVar3;
  _StringGuts _Var4;
  Iterator IVar5;
  Substring SVar6;
  undefined *in_x5;
  Character CVar7;
  Character CVar8;
  
  _Var2.unknown = in_x5;
  _Var4.unknown = param_2;
  _swift_bridgeObjectRetain();
  Swift::String::Iterator::_next((Iterator)_Var2.unknown);
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_1.unknown;
  while (_Var4.unknown != (undefined *)0x0) {
    CVar8.bridgeObject = _Var4.unknown;
    CVar8.str = _Var2.unknown;
    if (((ulong)after.cmsgPointer.unknown ^ (ulong)param_2) < 0x4000) {
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_bridgeObjectRelease(in_x5);
      return 1;
    }
    CVar7 = Swift::Substring::get_subscript(after,param_1);
    IVar5.unknown = CVar7.bridgeObject;
    SVar6.unknown = param_1.unknown;
    after = Swift::Substring::index(after,param_1);
    if (CVar7 == CVar8) {
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_bridgeObjectRelease();
    }
    else {
      SVar6.unknown = _Var4.unknown;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var4,(_StringComparisonResult)(__int8)CVar7.str);
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_bridgeObjectRelease();
      if (!bVar1) goto LAB_1006f7490;
    }
    Swift::String::Iterator::_next(IVar5);
    _Var2.unknown = IVar5.unknown;
    _Var4.unknown = SVar6.unknown;
  }
  _swift_bridgeObjectRelease(in_x5);
  if (((ulong)after.cmsgPointer.unknown ^ (ulong)param_2) < 0x4000) {
    uVar3 = 1;
  }
  else {
    CVar8 = Swift::Substring::get_subscript(after,param_1);
    in_x5 = CVar8.bridgeObject;
    Swift::Substring::index(after,param_1);
LAB_1006f7490:
    _swift_bridgeObjectRelease(in_x5);
    uVar3 = 0;
  }
  return uVar3;
}



/* Address: 0x1006f74b8 | FUN_1006f74b8 */

undefined8
FUN_1006f74b8(Substring param_1,Index param_2,undefined8 param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  _StringGuts _Var4;
  uint uVar5;
  undefined8 uVar6;
  Index IVar7;
  Character CVar8;
  Character CVar9;
  String SVar10;
  String SVar11;
  
  uVar1 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_6 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_5 >> 0x3b) & 1;
    if (((ulong)param_6 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar2 = 7;
    if (uVar5 == 0) {
      uVar2 = 0xb;
    }
    IVar7.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | uVar1 << 0x10);
    do {
      SVar10.bridgeObject = param_6;
      SVar10.str = param_5;
      IVar7 = Swift::String::index(IVar7,SVar10);
      SVar11.bridgeObject = param_6;
      SVar11.str = param_5;
      CVar8 = Swift::String::get_subscript(IVar7,SVar11);
      _Var4.unknown = CVar8.bridgeObject;
      if (((ulong)param_2.cmsgPointer.unknown ^ (ulong)param_1.unknown) < 0x4000) {
        uVar6 = 1;
        goto LAB_1006f7668;
      }
      param_2 = Swift::Substring::index(param_2,param_1);
      CVar9 = Swift::Substring::get_subscript(param_2,param_1);
      if (CVar8 == CVar9) {
        _swift_bridgeObjectRelease(_Var4.unknown);
        _swift_bridgeObjectRelease(CVar9.bridgeObject);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar8.str,_Var4,(_StringComparisonResult)(__int8)CVar9.str);
        _swift_bridgeObjectRelease(_Var4.unknown);
        _swift_bridgeObjectRelease(CVar9.bridgeObject);
        if (!bVar3) {
          return 0;
        }
      }
    } while ((undefined *)0x3fff < (ulong)IVar7.cmsgPointer.unknown);
  }
  if (((ulong)param_2.cmsgPointer.unknown ^ (ulong)param_1.unknown) < 0x4000) {
    uVar6 = 1;
  }
  else {
    IVar7 = Swift::Substring::index(param_2,param_1);
    CVar8 = Swift::Substring::get_subscript(IVar7,param_1);
    _Var4.unknown = CVar8.bridgeObject;
    uVar6 = 0;
LAB_1006f7668:
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  return uVar6;
}



/* Address: 0x1006f7680 | FUN_1006f7680 */

void FUN_1006f7680(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73340,param_1);
  return;
}



/* Address: 0x1006f7690 | FUN_1006f7690 */

void FUN_1006f7690(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x1006f76d8 | FUN_1006f76d8 */

undefined8 * FUN_1006f76d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar2 = param_2[4];
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar3 = param_2[6];
  uVar7 = param_2[6];
  uVar6 = param_2[5];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar7;
  param_1[5] = uVar6;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x1006f777c | FUN_1006f777c */

undefined8 * FUN_1006f777c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x1006f7848 | FUN_1006f7848 */

void FUN_1006f7848(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006f7864 | FUN_1006f7864 */

undefined8 * FUN_1006f7864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[5]);
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x1006f78e0 | FUN_1006f78e0 */

void FUN_1006f78e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006f78ec | thunk_FUN_1006f78f0 */

void thunk_FUN_1006f78f0(ulong *param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Character CVar3;
  bool bVar4;
  _StringGuts _Var5;
  uint uVar6;
  Index after;
  Character CVar7;
  String SVar8;
  String SVar9;
  
  CVar3.bridgeObject = param_5;
  CVar3.str = param_4;
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_3);
  if (uVar1 == 0) {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  }
  else {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      SVar9.bridgeObject = param_3;
      SVar9.str = param_2;
      CVar7 = Swift::String::get_subscript(after,SVar9);
      _Var5.unknown = CVar7.bridgeObject;
      if (CVar7 == CVar3) {
        _swift_bridgeObjectRelease(_Var5.unknown);
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar7.str,_Var5,(_StringComparisonResult)(__int8)param_4);
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (!bVar4) break;
      }
      SVar8.bridgeObject = param_3;
      SVar8.str = param_2;
      after = Swift::String::index(after,SVar8);
    } while ((ulong)after.cmsgPointer.unknown >> 0xe <= uVar1 * 4 &&
             uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  uVar6 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if (((ulong)param_3 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar2 = 7;
  if (uVar6 == 0) {
    uVar2 = 0xb;
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)param_3;
  param_1[2] = uVar2 | uVar1 << 0x10;
  param_1[3] = (ulong)after.cmsgPointer.unknown;
  param_1[4] = (ulong)param_4;
  param_1[5] = (ulong)param_5;
  return;
}



/* Address: 0x1006f78f0 | FUN_1006f78f0 */

void FUN_1006f78f0(ulong *param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  ulong uVar2;
  Character CVar3;
  bool bVar4;
  _StringGuts _Var5;
  uint uVar6;
  Index after;
  Character CVar7;
  String SVar8;
  String SVar9;
  
  CVar3.bridgeObject = param_5;
  CVar3.str = param_4;
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_3);
  if (uVar1 == 0) {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  }
  else {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      SVar9.bridgeObject = param_3;
      SVar9.str = param_2;
      CVar7 = Swift::String::get_subscript(after,SVar9);
      _Var5.unknown = CVar7.bridgeObject;
      if (CVar7 == CVar3) {
        _swift_bridgeObjectRelease(_Var5.unknown);
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar7.str,_Var5,(_StringComparisonResult)(__int8)param_4);
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (!bVar4) break;
      }
      SVar8.bridgeObject = param_3;
      SVar8.str = param_2;
      after = Swift::String::index(after,SVar8);
    } while ((ulong)after.cmsgPointer.unknown >> 0xe <= uVar1 * 4 &&
             uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  uVar6 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if (((ulong)param_3 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar2 = 7;
  if (uVar6 == 0) {
    uVar2 = 0xb;
  }
  *param_1 = (ulong)param_2;
  param_1[1] = (ulong)param_3;
  param_1[2] = uVar2 | uVar1 << 0x10;
  param_1[3] = (ulong)after.cmsgPointer.unknown;
  param_1[4] = (ulong)param_4;
  param_1[5] = (ulong)param_5;
  return;
}



/* Address: 0x1006f7a00 | FUN_1006f7a00 */

ulong FUN_1006f7a00(void)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long *unaff_x20;
  
  bVar2 = *(byte *)(unaff_x20 + 8);
  uVar4 = (ulong)bVar2;
  uVar3 = (uint)bVar2;
  if (bVar2 < 4) {
    if (uVar3 != 0) {
      uVar4 = 0xfffffffffffffffd;
    }
    uVar1 = 0xffffffffffffffff;
    if (1 < uVar3 - 2) {
      uVar1 = uVar4;
    }
    return uVar1;
  }
  if (uVar3 - 4 < 2) {
    return 0xfffffffffffffffe;
  }
  uVar4 = 0xfffffffffffffffb;
  if (((((unaff_x20[6] != 0 || unaff_x20[7] != 0) || unaff_x20[5] != 0) ||
       ((unaff_x20[4] != 0 || unaff_x20[3] != 0) || unaff_x20[2] != 0)) || unaff_x20[1] != 0) ||
      *unaff_x20 != 1) {
    uVar4 = 0;
  }
  uVar1 = 0xfffffffffffffffc;
  if ((((unaff_x20[6] != 0 || unaff_x20[7] != 0) || (*unaff_x20 != 0 || unaff_x20[5] != 0)) ||
      ((unaff_x20[4] != 0 || unaff_x20[3] != 0) || unaff_x20[2] != 0)) || unaff_x20[1] != 0) {
    uVar1 = uVar4;
  }
  return uVar1;
}



/* Address: 0x1006f7a98 | FUN_1006f7a98 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006f7b08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006f7a98(long *param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  code *pcVar5;
  Optional OVar6;
  undefined8 uVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  __int64 local_80;
  undefined1 auStack_78 [24];
  long lVar7;
  
  OVar6 = Swift::Optional::typeMetadataAccessor();
  lVar7 = CONCAT71((int7)((ulong)param_1 >> 8),OVar6.value);
  lVar11 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = Swift::Array<undefined>::get_count(lVar7,lVar7);
  lVar13 = *(long *)(*param_1 + 0x68);
  _swift_beginAccess((long)param_1 + lVar13,auStack_78,0,0);
  (**(code **)(lVar11 + 0x10))(auStack_78 + (-8 - extraout_x8),(long)param_1 + lVar13,lVar7);
  uVar8 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(auStack_78 + (-8 - extraout_x8),uVar8);
  uVar9 = param_1[2];
  lVar13 = param_1[3];
  lVar7 = param_1[4];
  lVar1 = param_1[5];
  uVar10 = param_1[6];
  lVar2 = param_1[7];
  lVar11 = param_1[8];
  lVar3 = param_1[9];
  bVar4 = *(byte *)(param_1 + 10);
  if (bVar4 < 3) {
    if ((bVar4 != 0) && (bVar4 != 1)) {
      FUN_1006f7d60(uVar10,lVar2,lVar11,lVar3,param_2);
      FUN_1006f7d60(uVar9,lVar13,lVar7,lVar1,param_2);
      uVar15 = uVar10 & 0xffffffff | uVar9 << 0x20;
      goto LAB_1006f7c24;
    }
  }
  else if (bVar4 < 5) {
    if (bVar4 == 3) {
      FUN_1006f7d60();
      FUN_1006f7d60(uVar10,lVar2,lVar11,lVar3,param_2);
      uVar15 = uVar9 & 0xffffffff | uVar10 << 0x20;
      goto LAB_1006f7c24;
    }
  }
  else if (bVar4 != 5) {
    uVar12 = 2;
    if (((((lVar7 != 0 || lVar13 != 0) || uVar10 != 0) ||
         ((lVar2 != 0 || lVar11 != 0) || lVar3 != 0)) || lVar1 != 0) || uVar9 != 1) {
      uVar12 = 0;
    }
    uVar15 = 1;
    if ((((lVar7 != 0 || lVar13 != 0) || (uVar9 != 0 || uVar10 != 0)) ||
        ((lVar2 != 0 || lVar11 != 0) || lVar3 != 0)) || lVar1 != 0) {
      uVar15 = uVar12;
    }
    goto LAB_1006f7c24;
  }
  FUN_1006f7d60();
  uVar15 = uVar9 & 0xffffffff;
LAB_1006f7c24:
  uVar12 = *param_2;
  uVar14 = *(ulong *)(uVar12 + 0x10);
  uVar9 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar12;
  if ((uVar9 & 1) == 0) {
    uVar10 = 0;
    FUN_1006a2848(0,uVar14 + 1,1,uVar12);
  }
  uVar9 = *(ulong *)(uVar10 + 0x10);
  uVar12 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_1006a2848(uVar12,uVar9 + 1,1,uVar10);
  }
  *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
  lVar7 = uVar12 + uVar9 * 0x20;
  *(__int64 *)(lVar7 + 0x20) = local_80;
  *(ulong *)(lVar7 + 0x28) = uVar15;
  *(byte *)(lVar7 + 0x30) = bVar4;
  *(undefined8 *)(lVar7 + 0x38) = 0x7fffffffffffffff;
  *param_2 = uVar12;
  FUN_1006f7ed0(param_1,param_2,param_3);
  uVar10 = *param_2;
  uVar8 = *(undefined8 *)(uVar10 + 0x10);
  uVar9 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar9 & 1) == 0) {
    FUN_1006f81d4();
  }
  if (uVar14 < *(ulong *)(uVar10 + 0x10)) {
    *(undefined8 *)(uVar10 + uVar14 * 0x20 + 0x38) = uVar8;
    *param_2 = uVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006f7d60);
  (*pcVar5)();
}



/* Address: 0x1006f7d60 | FUN_1006f7d60 */

ulong FUN_1006f7d60(ulong param_1,ulong param_2,undefined *param_3,undefined *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *(ulong *)(param_5 + 8);
  uVar8 = *(ulong *)(uVar7 + 0x10);
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar5 = 0;
    puVar6 = (undefined8 *)(uVar7 + 0x38);
    do {
      if (((((undefined *)puVar6[-1] == param_3 && (undefined *)*puVar6 == param_4) &&
           (undefined *)((ulong)puVar6[-3] >> 0x10) == (undefined *)(param_1 >> 0x10)) &&
           (undefined *)((ulong)puVar6[-2] >> 0x10) == (undefined *)(param_2 >> 0x10)) ||
         (bVar3 = Swift::_stringCompareInternal
                            ((undefined *)puVar6[-1],(undefined *)*puVar6,
                             (undefined *)((ulong)puVar6[-3] >> 0x10),
                             (undefined *)((ulong)puVar6[-2] >> 0x10),
                             (_StringComparisonResult)(__int8)param_3), bVar3)) {
        if (uVar5 >> 0x20 == 0) {
          return uVar5;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f7e1c);
        (*pcVar2)();
      }
      puVar6 = puVar6 + 4;
      uVar5 = uVar5 + 1;
    } while (uVar8 != uVar5);
    uVar8 = *(ulong *)(uVar7 + 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  uVar5 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_5 + 8) = uVar7;
  uVar4 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    FUN_1006a2740(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(param_5 + 8) = uVar4;
  }
  uVar7 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar7) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1006a2740(uVar5,uVar7 + 1,1,uVar4);
    *(ulong *)(param_5 + 8) = uVar5;
  }
  *(ulong *)(uVar5 + 0x10) = uVar7 + 1;
  lVar1 = uVar5 + uVar7 * 0x20;
  *(ulong *)(lVar1 + 0x20) = param_1;
  *(ulong *)(lVar1 + 0x28) = param_2;
  *(undefined **)(lVar1 + 0x30) = param_3;
  *(undefined **)(lVar1 + 0x38) = param_4;
  if (uVar8 >> 0x20 == 0) {
    return uVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f7ed0);
  (*pcVar2)();
}



/* Address: 0x1006f7ed0 | FUN_1006f7ed0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006f7f8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006f7ed0(long param_1,ulong *param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  __int64 _Var5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_a0 [2];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x58,auStack_78,0,0);
  uVar9 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = 0xff;
  FUN_1006f879c(0xff,*(undefined8 *)(unaff_x20 + 0x50));
  uVar4 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar9);
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar4);
  pcVar2 = FUN_1006f81e8;
  (extension_Swift)::Swift::Sequence::_sorted();
  _swift_bridgeObjectRelease(uVar9);
  _Var5 = Swift::Array<undefined>::get_endIndex(pcVar2,uVar3);
  if (_Var5 != 0) {
    lVar10 = 0;
    do {
      Swift::Array<undefined>::get_subscript(local_a0,lVar10,pcVar2,uVar3);
      uVar4 = local_a0[0];
      lVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f8060);
        (*pcVar2)();
      }
      FUN_1006f7a98(local_a0[0],param_2,param_3);
      _swift_release(uVar4);
      _Var5 = Swift::Array<undefined>::get_endIndex(_Var5,uVar3);
      lVar10 = lVar10 + 1;
    } while (lVar1 != _Var5);
  }
  _swift_bridgeObjectRelease(pcVar2);
  uVar8 = *param_2;
  uVar6 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar7 = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar7 = 0;
    FUN_1006a2848(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
  }
  uVar6 = *(ulong *)(uVar7 + 0x10);
  uVar8 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_1006a2848(uVar8,uVar6 + 1,1,uVar7);
  }
  *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
  lVar10 = uVar8 + uVar6 * 0x20;
  *(undefined8 *)(lVar10 + 0x28) = 3;
  *(undefined8 *)(lVar10 + 0x20) = 0xffffffffffffffff;
  *(undefined1 *)(lVar10 + 0x30) = 6;
  *(undefined8 *)(lVar10 + 0x38) = 0x7fffffffffffffff;
  *param_2 = uVar8;
  return;
}



/* Address: 0x1006f80a0 | FUN_1006f80a0 */

bool FUN_1006f80a0(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  bVar1 = *(byte *)(param_1 + 0x50);
  uVar3 = (ulong)bVar1;
  uVar2 = (uint)bVar1;
  if (bVar1 < 4) {
    if (uVar2 != 0) {
      uVar3 = 0xfffffffffffffffd;
    }
    uVar4 = 0xffffffffffffffff;
    if (1 < uVar2 - 2) {
      uVar4 = uVar3;
    }
  }
  else if (uVar2 - 4 < 2) {
    uVar4 = 0xfffffffffffffffe;
  }
  else {
    uVar3 = 0xfffffffffffffffb;
    if (((((*(long *)(param_1 + 0x40) != 0 || *(long *)(param_1 + 0x48) != 0) ||
          *(long *)(param_1 + 0x38) != 0) ||
         ((*(long *)(param_1 + 0x30) != 0 || *(long *)(param_1 + 0x28) != 0) ||
         *(long *)(param_1 + 0x20) != 0)) || *(long *)(param_1 + 0x18) != 0) ||
        *(long *)(param_1 + 0x10) != 1) {
      uVar3 = 0;
    }
    uVar4 = 0xfffffffffffffffc;
    if ((((*(long *)(param_1 + 0x40) != 0 || *(long *)(param_1 + 0x48) != 0) ||
         (*(long *)(param_1 + 0x10) != 0 || *(long *)(param_1 + 0x38) != 0)) ||
        ((*(long *)(param_1 + 0x30) != 0 || *(long *)(param_1 + 0x28) != 0) ||
        *(long *)(param_1 + 0x20) != 0)) || *(long *)(param_1 + 0x18) != 0) {
      uVar4 = uVar3;
    }
  }
  bVar1 = *(byte *)(param_2 + 0x50);
  uVar3 = (ulong)bVar1;
  uVar2 = (uint)bVar1;
  if (bVar1 < 4) {
    if (uVar2 != 0) {
      uVar3 = 0xfffffffffffffffd;
    }
    uVar5 = 0xffffffffffffffff;
    if (1 < uVar2 - 2) {
      uVar5 = uVar3;
    }
  }
  else if (uVar2 - 4 < 2) {
    uVar5 = 0xfffffffffffffffe;
  }
  else {
    uVar3 = 0xfffffffffffffffb;
    if (((((*(long *)(param_2 + 0x40) != 0 || *(long *)(param_2 + 0x48) != 0) ||
          *(long *)(param_2 + 0x38) != 0) ||
         ((*(long *)(param_2 + 0x30) != 0 || *(long *)(param_2 + 0x28) != 0) ||
         *(long *)(param_2 + 0x20) != 0)) || *(long *)(param_2 + 0x18) != 0) ||
        *(long *)(param_2 + 0x10) != 1) {
      uVar3 = 0;
    }
    uVar5 = 0xfffffffffffffffc;
    if ((((*(long *)(param_2 + 0x40) != 0 || *(long *)(param_2 + 0x48) != 0) ||
         (*(long *)(param_2 + 0x10) != 0 || *(long *)(param_2 + 0x38) != 0)) ||
        ((*(long *)(param_2 + 0x30) != 0 || *(long *)(param_2 + 0x28) != 0) ||
        *(long *)(param_2 + 0x20) != 0)) || *(long *)(param_2 + 0x18) != 0) {
      uVar5 = uVar3;
    }
  }
  return (long)uVar5 < (long)uVar4;
}



/* Address: 0x1006f81d4 | FUN_1006f81d4 */

void FUN_1006f81d4(long param_1)

{
  FUN_1006a2848(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1006f81e8 | FUN_1006f81e8 */

uint FUN_1006f81e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1006f80a0(uVar1,*param_2);
  return (uint)uVar1 & 1;
}



/* Address: 0x1006f8218 | FUN_1006f8218 */

void FUN_1006f8218(long param_1)

{
  FUN_1006a2628(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1006f822c | FUN_1006f822c */

void FUN_1006f822c(long param_1)

{
  FUN_1006a2b94(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1006f8240 | FUN_1006f8240 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006f8454 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1006f8240(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  Optional OVar4;
  long lVar5;
  __int64 _Var6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  tuple2_conflict3 tVar24;
  undefined1 auStack_1e0 [8];
  undefined1 *local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0 [22];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  local_1a8 = *unaff_x20;
  lVar16 = *(long *)(local_1a8 + 0x50);
  lVar5 = 0;
  local_1d0 = param_2;
  local_1b8 = param_3;
  local_1b0 = param_1;
  _swift_getTupleTypeMetadata2(0,lVar16,&DAT_100efa4e0,0,0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1d8 = auStack_1e0 + -extraout_x8;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar13 = CONCAT71((int7)((ulong)lVar5 >> 8),OVar4.value);
  lVar14 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_1e0 + -extraout_x8) - extraout_x8_00;
  lVar12 = *(long *)(lVar16 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar17 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  tVar24 = Swift::Array<undefined>::_allocateUninitialized(0,lVar5);
  local_70 = tVar24._0_8_;
  lVar15 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar15,auStack_88,0,0);
  (**(code **)(lVar14 + 0x10))(lVar11,(long)unaff_x20 + lVar15,lVar13);
  lVar15 = lVar11;
  (**(code **)(lVar12 + 0x30))(lVar11,1,lVar16);
  if ((int)lVar15 == 1) {
    (**(code **)(lVar14 + 8))(lVar11,lVar13);
    lVar11 = local_1b0;
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar17,lVar11,lVar16);
    puVar1 = local_1d8;
    plVar10 = (long *)(local_1d8 + *(int *)(lVar5 + 0x30));
    (**(code **)(lVar12 + 0x10))(local_1d8,lVar17,lVar16);
    lVar11 = local_1b0;
    lVar13 = local_1b8;
    *plVar10 = local_1b0;
    plVar10[1] = local_1d0;
    plVar10[2] = local_1b8;
    lVar15 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_bridgeObjectRetain(lVar11);
    _swift_bridgeObjectRetain(lVar13);
    Swift::Array<undefined>::append(puVar1,lVar15);
    (**(code **)(lVar12 + 8))(lVar17,lVar16);
  }
  _swift_beginAccess(unaff_x20 + 0xb,auStack_a0,0,0);
  lVar13 = unaff_x20[0xb];
  _swift_bridgeObjectRetain(lVar13);
  lVar12 = local_1a8;
  _Var6 = Swift::Array<undefined>::get_endIndex(lVar15,local_1a8);
  if (_Var6 != 0) {
    Swift::Array<undefined>::get_subscript(local_1a0,0,lVar13,lVar12);
    lVar15 = 1;
    uStack_1c8 = 2;
    local_1d0 = 1;
    local_1b8 = lVar13;
    while( true ) {
      lVar14 = local_1a0[0];
      puVar7 = &DAT_100fdbc90;
      FUN_1000f7830(&DAT_100fdbc90,&DAT_100c70c40);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = uStack_1c8;
      *(long *)(puVar7 + 0x10) = local_1d0;
      uStack_d8 = *(undefined8 *)(lVar14 + 0x28);
      local_e0 = *(undefined8 *)(lVar14 + 0x20);
      uStack_c8 = *(undefined8 *)(lVar14 + 0x38);
      local_d0 = *(undefined8 *)(lVar14 + 0x30);
      uStack_b8 = *(undefined8 *)(lVar14 + 0x48);
      uStack_c0 = *(undefined8 *)(lVar14 + 0x40);
      local_b0 = *(undefined1 *)(lVar14 + 0x50);
      uStack_e8 = *(undefined8 *)(lVar14 + 0x18);
      local_f0 = *(undefined8 *)(lVar14 + 0x10);
      uVar21 = *(undefined8 *)(lVar14 + 0x28);
      uVar20 = *(undefined8 *)(lVar14 + 0x20);
      uVar19 = *(undefined8 *)(lVar14 + 0x38);
      uVar9 = *(undefined8 *)(lVar14 + 0x30);
      uVar18 = *(undefined8 *)(lVar14 + 0x48);
      uVar8 = *(undefined8 *)(lVar14 + 0x40);
      uVar23 = *(undefined8 *)(lVar14 + 0x18);
      uVar22 = *(undefined8 *)(lVar14 + 0x10);
      puVar7[0x60] = local_b0;
      *(undefined8 *)(puVar7 + 0x28) = uVar23;
      *(undefined8 *)(puVar7 + 0x20) = uVar22;
      *(undefined8 *)(puVar7 + 0x38) = uVar21;
      *(undefined8 *)(puVar7 + 0x30) = uVar20;
      *(undefined8 *)(puVar7 + 0x48) = uVar19;
      *(undefined8 *)(puVar7 + 0x40) = uVar9;
      *(undefined8 *)(puVar7 + 0x58) = uVar18;
      *(undefined8 *)(puVar7 + 0x50) = uVar8;
      plVar10 = local_1a0;
      FUN_1006ee820(&local_f0,plVar10);
      FUN_1006f1c2c(puVar7);
      lVar17 = lVar12;
      local_1a0[0] = lVar11;
      _swift_bridgeObjectRetain(lVar11);
      _swift_bridgeObjectRetain(puVar7);
      FUN_1006a1c64();
      lVar13 = local_1a0[0];
      FUN_1006f1c2c();
      _swift_bridgeObjectRelease(lVar12);
      _swift_bridgeObjectRelease(puVar7);
      lVar11 = lVar13;
      FUN_1006f8240(lVar13,plVar10,lVar17);
      _swift_bridgeObjectRelease(lVar17);
      _swift_bridgeObjectRelease(lVar13);
      uVar8 = 0;
      _swift_getTupleTypeMetadata2(0,lVar16,&DAT_100efa4e0,"value path ",0);
      lVar13 = lVar11;
      Swift::__arrayForceCast(lVar11,uVar8,lVar5);
      _swift_bridgeObjectRelease(lVar11);
      uVar8 = 0;
      local_1a0[0] = lVar13;
      Swift::Array<undefined>::typeMetadataAccessor();
      puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar8);
      lVar13 = local_1b8;
      Swift::Array<undefined>::_append(local_1a0,uVar8,uVar8,puVar7);
      lVar12 = local_1a8;
      _swift_release(lVar14);
      _Var6 = Swift::Array<undefined>::get_endIndex(puVar7,lVar12);
      if (lVar15 == _Var6) break;
      Swift::Array<undefined>::get_subscript(local_1a0,lVar15,lVar13);
      bVar3 = SCARRY8(lVar15,1);
      lVar15 = lVar15 + 1;
      lVar11 = local_1b0;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006f8640);
        (*pcVar2)();
      }
    }
  }
  _swift_bridgeObjectRelease(lVar13);
  uVar8 = local_70;
  uVar9 = 0;
  _swift_getTupleTypeMetadata2(0,lVar16,&DAT_100efa4e0,"value path ",0);
  uVar18 = uVar8;
  Swift::__arrayForceCast(uVar8,lVar5,uVar9);
  _swift_bridgeObjectRelease(uVar8);
  return uVar18;
}



/* Address: 0x1006f86ac | FUN_1006f86ac */

undefined8 * FUN_1006f86ac(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  FUN_1006f879c(0,param_1);
  local_88 = 2;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 6;
  (**(code **)(*(long *)(param_1 + -8) + 0x38))(puVar4,1,1,param_1);
  _swift_allocObject(lVar2,*(undefined4 *)(lVar2 + 0x30),*(undefined2 *)(lVar2 + 0x34));
  puVar3 = &local_88;
  FUN_1006f8b48(puVar3,puVar4);
  (**(code **)(lVar5 + 8))(puVar4,CONCAT71(extraout_var,OVar1.value));
  return puVar3;
}



/* Address: 0x1006f879c | FUN_1006f879c */

void FUN_1006f879c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006f87a8 | FUN_1006f87a8 */

void FUN_1006f87a8(void)

{
  FUN_1006f88f4();
  return;
}



/* Address: 0x1006f87c8 | FUN_1006f87c8 */

void FUN_1006f87c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  FUN_1006f8c1c(param_1,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x1006f87e8 | FUN_1006f87e8 */

void FUN_1006f87e8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long local_90;
  undefined1 auStack_88 [72];
  
  lVar3 = *unaff_x20;
  lVar1 = param_1;
  FUN_1006f89fc();
  if (lVar1 == 0) {
    FUN_1006ee820(param_1,auStack_88);
    _swift_allocObject(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
    FUN_1006f8b48(param_1,param_2);
    local_90 = param_1;
    _swift_beginAccess(unaff_x20 + 0xb,auStack_88,0x21,0);
    uVar2 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_retain(param_1);
    Swift::Array<undefined>::append(&local_90,uVar2);
    _swift_endAccess(auStack_88);
  }
  return;
}



/* Address: 0x1006f88ac | FUN_1006f88ac */

undefined8 FUN_1006f88ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1006f5198(0);
  uVar1 = param_1;
  _swift_retain(param_1);
  FUN_1006f4f68();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1006f88f4 | FUN_1006f88f4 */

/* WARNING: Removing unreachable block (ram,0x0001006f89c8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006f8958 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006f88f4(code *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  __int64 _Var4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  uVar5 = *unaff_x20;
  (*param_1)();
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + 0xb,auStack_68,0,0);
    uVar6 = unaff_x20[0xb];
    _swift_bridgeObjectRetain(uVar6);
    _Var4 = Swift::Array<undefined>::get_endIndex(param_1,uVar5);
    if (_Var4 != 0) {
      lVar7 = 0;
      do {
        Swift::Array<undefined>::get_subscript(&local_70,lVar7,uVar6,uVar5);
        uVar2 = local_70;
        lVar1 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006f89fc);
          (*pcVar3)();
        }
        FUN_1006f88f4(param_1,param_2);
        _swift_release(uVar2);
        _Var4 = Swift::Array<undefined>::get_endIndex(_Var4,uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar1 != _Var4);
    }
    _swift_bridgeObjectRelease(uVar6);
  }
  return;
}



/* Address: 0x1006f89fc | FUN_1006f89fc */

undefined8 FUN_1006f89fc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_50,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar2);
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar1);
  (extension_Swift)::Swift::Sequence::_first();
  _swift_bridgeObjectRelease(uVar2);
  return local_38;
}



/* Address: 0x1006f8aa8 | FUN_1006f8aa8 */

void FUN_1006f8aa8(void)

{
  Optional OVar1;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar2;
  
  FUN_1006f30d0(unaff_x20[2],unaff_x20[3],unaff_x20[4],unaff_x20[5],unaff_x20[6],unaff_x20[7],
                unaff_x20[8],unaff_x20[9],(char)unaff_x20[10]);
  _swift_bridgeObjectRelease(unaff_x20[0xb]);
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            ((long)unaff_x20 + lVar2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x1006f8b24 | FUN_1006f8b24 */

void FUN_1006f8b24(void)

{
  FUN_1006f8aa8();
  _swift_deallocClassInstance();
  return;
}


