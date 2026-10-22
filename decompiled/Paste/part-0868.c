/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10096a268 | FUN_10096a268 */

void FUN_10096a268(void)

{
  code *pcVar1;
  
  FUN_10096afa4(PTR___type_metadata_for_Swift_Never_100eadc38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10096a288);
  (*pcVar1)();
}



/* Address: 0x10096a288 | thunk_FUN_100968b08 */

void thunk_FUN_100968b08(void)

{
  FUN_100968b08();
  return;
}



/* Address: 0x10096a28c | thunk_FUN_100969880 */

void thunk_FUN_100969880(void)

{
  FUN_100969880();
  return;
}



/* Address: 0x10096a290 | thunk_FUN_100969ad4 */

void thunk_FUN_100969ad4(void)

{
  FUN_100969ad4();
  return;
}



/* Address: 0x10096a294 | FUN_10096a294 */

void FUN_10096a294(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  undefined *puVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  puVar8 = &DAT_100fef408;
  FUN_1000f7830(&DAT_100fef408,&DAT_100c87d30);
  param_1[3] = puVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_10087792c(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x10096a32c | thunk_FUN_10096970c */

void thunk_FUN_10096970c(void)

{
  FUN_10096970c();
  return;
}



/* Address: 0x10096a330 | FUN_10096a330 */

bool FUN_10096a330(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(ulong *)(param_1 + 0x10) < 7) {
    lVar1 = *(long *)(&DAT_100c87d60 + *(ulong *)(param_1 + 0x10) * 8);
  }
  else {
    lVar1 = 1;
  }
  if (*(ulong *)(param_2 + 0x10) < 7) {
    lVar2 = *(long *)(&DAT_100c87d60 + *(ulong *)(param_2 + 0x10) * 8);
  }
  else {
    lVar2 = 1;
  }
  return lVar1 == lVar2;
}



/* Address: 0x10096a374 | FUN_10096a374 */

void FUN_10096a374(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  
  if (*(ulong *)(param_2.unknown + 0x10) < 7) {
    _Var1 = *(__uint64 *)(&DAT_100c87d60 + *(ulong *)(param_2.unknown + 0x10) * 8);
  }
  else {
    _Var1 = 1;
  }
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x10096a3b4 | FUN_10096a3b4 */

void FUN_10096a3b4(long param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  if (*(ulong *)(param_1 + 0x10) < 7) {
                    /* WARNING: Load size is inaccurate */
    HVar1.unknown = (&DAT_100c87d60)[*(ulong *)(param_1 + 0x10) * 8];
  }
  else {
    HVar1.unknown = &DAT_00000001;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10096a414 | FUN_10096a414 */

void FUN_10096a414(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  if (*(ulong *)(lVar2 + 0x10) < 7) {
                    /* WARNING: Load size is inaccurate */
    HVar1.unknown = (&DAT_100c87d60)[*(ulong *)(lVar2 + 0x10) * 8];
  }
  else {
    HVar1.unknown = &DAT_00000001;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10096a474 | FUN_10096a474 */

void FUN_10096a474(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  long *unaff_x20;
  
  if (*(ulong *)(*unaff_x20 + 0x10) < 7) {
    _Var1 = *(__uint64 *)(&DAT_100c87d60 + *(ulong *)(*unaff_x20 + 0x10) * 8);
  }
  else {
    _Var1 = 1;
  }
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x10096a4bc | FUN_10096a4bc */

void FUN_10096a4bc(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  if (*(ulong *)(lVar2 + 0x10) < 7) {
                    /* WARNING: Load size is inaccurate */
    HVar1.unknown = (&DAT_100c87d60)[*(ulong *)(lVar2 + 0x10) * 8];
  }
  else {
    HVar1.unknown = &DAT_00000001;
  }
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10096a518 | FUN_10096a518 */

bool FUN_10096a518(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(ulong *)(*param_1 + 0x10) < 7) {
    lVar1 = *(long *)(&DAT_100c87d60 + *(ulong *)(*param_1 + 0x10) * 8);
  }
  else {
    lVar1 = 1;
  }
  if (*(ulong *)(*param_2 + 0x10) < 7) {
    lVar2 = *(long *)(&DAT_100c87d60 + *(ulong *)(*param_2 + 0x10) * 8);
  }
  else {
    lVar2 = 1;
  }
  return lVar1 == lVar2;
}



/* Address: 0x10096a564 | FUN_10096a564 */

undefined1  [16] FUN_10096a564(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  pcVar4 = (char *)(ulong)*(byte *)(param_1 + 0x20);
  FUN_10096a608();
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x2820;
  SVar8.bridgeObject = param_4;
  SVar8.str = pcVar4;
  Swift::String::append(SVar6,SVar8);
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar4;
  Swift::String::append(*(String *)(param_1 + 0x28),SVar9);
  SVar5.bridgeObject = &SUB_e200000000000000;
  SVar5.str = (char *)0x203a;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar4;
  Swift::String::append(SVar5,SVar10);
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar4;
  Swift::String::append(SVar6,SVar11);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x29;
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar4;
  Swift::String::append(SVar7,SVar12);
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Address: 0x10096a608 | FUN_10096a608 */

undefined1  [16] FUN_10096a608(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  String SVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  String SVar10;
  
  if ((long)param_1 < 3) {
    if (param_1 == (char *)0x0) {
      pcVar2 = "Proxy Authentication Required";
LAB_10096a780:
      auVar8._8_8_ = (ulong)(pcVar2 + -0x20) | 0x8000000000000000;
      auVar8._0_8_ = 0xd00000000000001d;
      return auVar8;
    }
    if (param_1 == &DAT_00000001) {
      auVar9._8_8_ = 0x8000000100db6c50;
      auVar9._0_8_ = 0xd000000000000016;
      return auVar9;
    }
    if (param_1 == (char *)0x2) {
      auVar4._8_8_ = 0x8000000100db6c30;
      auVar4._0_8_ = 0xd000000000000018;
      return auVar4;
    }
  }
  else if ((long)param_1 < 5) {
    if (param_1 == (char *)0x3) {
      auVar7._8_8_ = 0x8000000100db6c10;
      auVar7._0_8_ = 0xd00000000000001c;
      return auVar7;
    }
    if (param_1 == (char *)0x4) {
      auVar3._8_8_ = 0xe900000000000074;
      auVar3._0_8_ = 0x6c75736552206f4e;
      return auVar3;
    }
  }
  else {
    if (param_1 == (char *)0x5) {
      pcVar2 = "Channel Unexpectedly Inactive";
      goto LAB_10096a780;
    }
    if (param_1 == (char *)0x6) {
      auVar5._8_8_ = 0x8000000100db6bb0;
      auVar5._0_8_ = &DAT_d000000000000032;
      return auVar5;
    }
  }
  Swift::_StringGuts::grow(0x1f,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_1008a0d44();
  SVar6.bridgeObject = param_2.unknown;
  SVar6.str = param_1;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar6,SVar10);
  _swift_bridgeObjectRelease(param_2.unknown);
  auVar1._8_8_ = 0x8000000100db6c70;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Address: 0x10096a7ac | FUN_10096a7ac */

void FUN_10096a7ac(void)

{
  undefined8 *unaff_x20;
  
  FUN_10096a564(*unaff_x20);
  return;
}



/* Address: 0x10096a7b4 | FUN_10096a7b4 */

void FUN_10096a7b4(void)

{
  undefined8 *unaff_x20;
  
  FUN_10096a608(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x10096a7c0 | FUN_10096a7c0 */

void FUN_10096a7c0(undefined8 param_1)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  code *pcVar2;
  bool bVar3;
  Mirror MVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  _StringGuts _Var12;
  char *pcVar13;
  undefined *in_x3;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
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
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  code *local_140;
  void *local_138;
  StaticString local_130;
  __uint64 _Stack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined *local_e0;
  __uint64 _Stack_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined1 uStack_c9;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  char local_9f;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  MVar4 = Swift::Mirror::typeMetadataAccessor();
  lVar18 = *(long *)(MVar4.unknown + -8);
  uVar15 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = (long)&local_140 - uVar15;
  lVar16 = lVar17 - uVar15;
  FUN_100877858();
  if (local_9f == '\0') {
    _Stack_128 = _Stack_d8;
    local_130.unknown = local_e0;
    local_120 = CONCAT44(CONCAT22(CONCAT11(local_120._7_1_,local_ca),local_cc),local_d0);
    puVar5 = &DAT_100ef13d8;
  }
  else {
    if (local_9f != '\x01') {
      FUN_100011080(&local_e0,&local_90);
      goto LAB_10096a8f8;
    }
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    local_f0 = local_a0;
    local_120 = CONCAT17(uStack_c9,CONCAT16(local_ca,CONCAT24(local_cc,local_d0)));
    uStack_118 = local_c8;
    _Stack_128 = _Stack_d8;
    local_130.unknown = local_e0;
    puVar5 = &DAT_100fef0f0;
    FUN_1000f7830(&DAT_100fef0f0,&DAT_100c88790);
  }
  puVar6 = &local_90;
  in_x3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  _swift_dynamicCast(puVar6,&local_130,puVar5,in_x3,6);
  if (((ulong)puVar6 & 1) == 0) {
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
LAB_10096a8f8:
  if (local_78 != 0) {
    FUN_100011080(&local_90,param_1);
    return;
  }
  _Var12.unknown = &DAT_100fef410;
  pcVar13 = ">}\b";
  FUN_1000fb4c4(&local_90);
  local_e0 = (undefined *)0x0;
  _Stack_d8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_130.unknown = local_e0;
  _Stack_128 = _Stack_d8;
  SVar21.bridgeObject = (void *)0x8000000100daf900;
  SVar21.str = (char *)0xd000000000000018;
  SVar24.bridgeObject = in_x3;
  SVar24.str = pcVar13;
  Swift::String::append(SVar21,SVar24);
  SVar19.bridgeObject = (void *)0xe300000000000000;
  SVar19.str = (char *)0x796e41;
  SVar25.bridgeObject = in_x3;
  SVar25.str = pcVar13;
  Swift::String::append(SVar19,SVar25);
  SVar20.bridgeObject = (void *)0xeb0000000020646e;
  SVar20.str = (char *)0x756f662074756220;
  SVar26.bridgeObject = in_x3;
  SVar26.str = pcVar13;
  Swift::String::append(SVar20,SVar26);
  local_c8 = &DAT_100ef1ad8;
  puVar5 = &DAT_100f1ca78;
  _swift_allocObject(&DAT_100f1ca78,0x52,7);
  local_e0 = puVar5;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_140 = *(code **)(lVar18 + 8);
  (*local_140)(lVar17,MVar4.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_138 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar14 = local_138;
    bVar3 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar1);
    if (bVar3) {
      _swift_unknownObjectRelease(pcVar13);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10096aab8);
      (*pcVar2)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(_Stack_d8);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_140)(lVar16,MVar4.unknown);
    SVar21 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar27.bridgeObject = pvVar14;
    SVar27.str = pcVar9;
    Swift::String::append(SVar21,SVar27);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar22.bridgeObject = (void *)0xef2073746e65746e;
    SVar22.str = (char *)0x6f63206874697720;
    SVar28.bridgeObject = pvVar14;
    SVar28.str = pcVar9;
    Swift::String::append(SVar22,SVar28);
    Swift::__print_unlocked();
    line = _Stack_128;
    file.unknown = local_130.unknown;
    *(undefined4 *)(lVar16 + -8) = 0;
    *(undefined8 *)(lVar16 + -0x10) = 0xd0;
    SVar23.bridgeObject = (void *)0x2;
    SVar23.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar23,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10096abd0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10096aabc);
  (*pcVar2)();
}



/* Address: 0x10096abd0 | FUN_10096abd0 */

undefined1  [16]
FUN_10096abd0(bool param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  _StringGuts _Var12;
  char *pcVar13;
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
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  void *local_110;
  undefined1 auStack_108 [32];
  StaticString local_e8;
  __uint64 _Stack_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined3 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  char *local_98;
  undefined *puStack_90;
  char local_87;
  undefined1 local_80 [16];
  char *local_70;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar5.unknown + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_120 + -uVar15) - uVar15;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    param_4 = &DAT_100fef1f0;
    FUN_1000f7830(&DAT_100fef1f0,&DAT_100c87b00);
    iVar4 = (int)local_80;
    _Var12.unknown = auStack_108;
    pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    local_98 = pcVar13;
    if ((iVar4 != 0) && (local_98 = local_70, (ulong)local_70 >> 0x38 < 0xff)) {
      return local_80;
    }
  }
  else if (local_87 == '\0') {
    local_98 = (char *)(ulong)CONCAT34(local_b4,local_b8);
    FUN_10000c650(local_c8);
    _Var12.unknown = local_c0;
  }
  else {
    local_110 = (void *)local_a8;
    local_118 = (code *)puStack_a0;
    _swift_release(local_c0);
    _swift_release((ulong)local_c8 & 0x3fffffffffffffff);
    _Var12.unknown = local_118;
    FUN_1005d8fac(local_110);
    param_4 = puStack_90;
  }
  local_c8 = (undefined *)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_e8.unknown = local_c8;
  _Stack_e0 = (__uint64)local_c0;
  SVar18.bridgeObject = (void *)0x8000000100daf900;
  SVar18.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = local_98;
  Swift::String::append(SVar18,SVar22);
  SVar18 = Swift::__typeName(param_1);
  SVar23.bridgeObject = param_4;
  SVar23.str = local_98;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = local_98;
  Swift::String::append(SVar19,SVar24);
  local_b0 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f1ca78;
  _swift_allocObject(&DAT_100f1ca78,0x52,7);
  local_c8 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_118 = *(code **)(lVar17 + 8);
  (*local_118)(auStack_120 + -uVar15,MVar5.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_110 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown != OVar11.unknown) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10096aea0);
    (*pcVar2)();
  }
  pvVar14 = local_110;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10096ae9c);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar13);
  _swift_release(AVar8.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar7 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar7);
  (*local_118)(lVar16,MVar5.unknown);
  SVar18 = Swift::__typeName(SUB81(MVar7.unknown,0));
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar9;
  Swift::String::append(SVar18,SVar25);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar20.bridgeObject = (void *)0xef2073746e65746e;
  SVar20.str = (char *)0x6f63206874697720;
  SVar26.bridgeObject = pvVar14;
  SVar26.str = pcVar9;
  Swift::String::append(SVar20,SVar26);
  Swift::__print_unlocked();
  line = _Stack_e0;
  file.unknown = local_e8.unknown;
  *(undefined4 *)(lVar16 + -8) = 0;
  *(undefined8 *)(lVar16 + -0x10) = 0xd0;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10096afa4);
  (*pcVar2)();
}



/* Address: 0x10096afa4 | FUN_10096afa4 */

void FUN_10096afa4(bool param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

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
  _StringGuts _Var12;
  char *pcVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  code *local_100;
  void *local_f8;
  undefined1 auStack_f0 [32];
  StaticString local_d0;
  __uint64 _Stack_c8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined3 local_9c;
  undefined *local_98;
  undefined8 local_90;
  code *pcStack_88;
  char *local_80;
  undefined *puStack_78;
  char local_6f;
  undefined1 auStack_69 [9];
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar18 = *(long *)(MVar5.unknown + -8);
  uVar15 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = (long)&local_100 - uVar15;
  lVar16 = lVar17 - uVar15;
  FUN_100877858();
  if (local_6f == '\x02') {
    FUN_100011080(&local_b0,&local_d0);
    FUN_100011080(&local_d0,auStack_f0);
    iVar4 = (int)auStack_69;
    _Var12.unknown = auStack_f0;
    pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    param_4 = PTR___type_metadata_for_Swift_Never_100eadc38;
    _swift_dynamicCast();
    local_80 = pcVar13;
    if (iVar4 != 0) {
      return;
    }
  }
  else if (local_6f == '\0') {
    pcVar13 = (char *)(ulong)CONCAT34(local_9c,local_a0);
    FUN_10000c650(local_b0);
    _Var12.unknown = local_a8;
    local_80 = pcVar13;
  }
  else {
    local_100 = pcStack_88;
    local_f8 = (void *)local_90;
    _swift_release(local_a8);
    _swift_release((ulong)local_b0 & 0x3fffffffffffffff);
    _Var12.unknown = local_100;
    FUN_1005d8fac(local_f8);
    param_4 = puStack_78;
  }
  local_b0 = (undefined *)0x0;
  local_a8 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_d0.unknown = local_b0;
  _Stack_c8 = (__uint64)local_a8;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar23.bridgeObject = param_4;
  SVar23.str = local_80;
  Swift::String::append(SVar19,SVar23);
  SVar19 = Swift::__typeName(param_1);
  SVar24.bridgeObject = param_4;
  SVar24.str = local_80;
  Swift::String::append(SVar19,SVar24);
  _swift_bridgeObjectRelease(SVar19.bridgeObject);
  SVar20.bridgeObject = (void *)0xeb0000000020646e;
  SVar20.str = (char *)0x756f662074756220;
  SVar25.bridgeObject = param_4;
  SVar25.str = local_80;
  Swift::String::append(SVar20,SVar25);
  local_98 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f1ca78;
  _swift_allocObject(&DAT_100f1ca78,0x52,7);
  local_b0 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_100 = *(code **)(lVar18 + 8);
  (*local_100)(lVar17,MVar5.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_f8 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar14 = local_f8;
    bVar3 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar1);
    if (bVar3) {
      _swift_unknownObjectRelease(pcVar13);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10096b238);
      (*pcVar2)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(local_a8);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_100)(lVar16,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar26.bridgeObject = pvVar14;
    SVar26.str = pcVar9;
    Swift::String::append(SVar19,SVar26);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar21.bridgeObject = (void *)0xef2073746e65746e;
    SVar21.str = (char *)0x6f63206874697720;
    SVar27.bridgeObject = pvVar14;
    SVar27.str = pcVar9;
    Swift::String::append(SVar21,SVar27);
    Swift::__print_unlocked();
    line = _Stack_c8;
    file.unknown = local_d0.unknown;
    *(undefined4 *)(lVar16 + -8) = 0;
    *(undefined8 *)(lVar16 + -0x10) = 0xd0;
    SVar22.bridgeObject = (void *)0x2;
    SVar22.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar22,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10096b33c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10096b23c);
  (*pcVar2)();
}



/* Address: 0x10096b33c | FUN_10096b33c */

undefined1  [16] FUN_10096b33c(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  char local_3f;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar4 = &local_f0;
  FUN_100877858();
  if (local_3f == '\0') {
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    local_e0 = CONCAT44(CONCAT22(CONCAT11(local_e0._7_1_,local_6a),local_6c),local_70);
    puVar2 = &DAT_100fef400;
    FUN_1000f7830(&DAT_100fef400,&DAT_100c87d20);
    puVar5 = &DAT_100ef13d8;
  }
  else if (local_3f == '\x01') {
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    uStack_b8 = uStack_48;
    uStack_c0 = uStack_50;
    local_b0 = local_40;
    local_e0 = CONCAT17(uStack_69,CONCAT16(local_6a,CONCAT24(local_6c,local_70)));
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    uStack_d8 = uStack_68;
    puVar5 = &DAT_100fef0f0;
    FUN_1000f7830(&DAT_100fef0f0,&DAT_100c88790);
    puVar2 = &DAT_100fef400;
    FUN_1000f7830(&DAT_100fef400,&DAT_100c87d20);
    puVar4 = &local_f0;
  }
  else {
    FUN_100011080(&local_80,&local_f0);
    FUN_100011080(&local_f0,auStack_a0);
    puVar2 = &DAT_100fef400;
    FUN_1000f7830(&DAT_100fef400,&DAT_100c87d20);
    puVar4 = (undefined8 *)auStack_a0;
    puVar5 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  }
  puVar3 = &local_30;
  _swift_dynamicCast(puVar3,puVar4,puVar5,puVar2,6);
  if (((ulong)puVar3 & 1) == 0) {
    local_30 = 0;
    uStack_28 = 0;
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x10096b47c | FUN_10096b47c */

undefined * FUN_10096b47c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096b51c);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    CVar2.unknown = &DAT_100fef1e0;
    FUN_1000f7830(&DAT_100fef1e0,&DAT_100c87af0);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_2,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_2;
    puVar4 = _Var3.unknown + 0x20;
    do {
      FUN_10096b9ec(param_1,puVar4);
      puVar4 = puVar4 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_1000fb4c4(param_1,&DAT_100fef1e0,&DAT_100c87af0);
  return _Var3.unknown;
}



/* Address: 0x10096b51c | FUN_10096b51c */

void FUN_10096b51c(long param_1)

{
  FUN_10096b544(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10096b530 | FUN_10096b530 */

void FUN_10096b530(long param_1)

{
  FUN_10096b688(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10096b544 | FUN_10096b544 */

undefined * FUN_10096b544(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10096b688);
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
    puVar3 = &DAT_100fef430;
    FUN_1000f7830(&DAT_100fef430,&DAT_100c87d50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fef1e0;
    FUN_1000f7830(&DAT_100fef1e0,&DAT_100c87af0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x50 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10096b688 | FUN_10096b688 */

undefined * FUN_10096b688(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10096b7c8);
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
    puVar3 = &DAT_100fef418;
    FUN_1000f7830(&DAT_100fef418,&DAT_100c87d40);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fef420;
    FUN_1000f7830(&DAT_100fef420,&DAT_100c885e0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10096b7c8 | FUN_10096b7c8 */

void FUN_10096b7c8(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long unaff_x20;
  code *pcVar11;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [72];
  long local_68;
  
  uVar10 = *(ulong *)(unaff_x20 + 0x40);
  if ((uint)(uVar10 >> 0x3e) == 2) {
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      FUN_10096c9c8();
      puVar4 = &DAT_100f1c8b0;
      _swift_allocError(&DAT_100f1c8b0,param_1,0,0);
      *param_1 = uVar10 & 0x3fffffffffffffff;
      uVar5 = *(ulong *)(param_2 + 0x20);
      lVar3 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      pcVar11 = *(code **)(lVar3 + 0x10);
      uVar9 = uVar2;
      FUN_10096bb0c(uVar10,uVar1,uVar2);
      _swift_retain(uVar10 & 0x3fffffffffffffff);
      uVar6 = uVar5;
      lVar8 = lVar3;
      (*pcVar11)(uVar5,lVar3);
      if ((uVar6 & 1) == 0) {
        puVar7 = &DAT_100f1cb40;
        _swift_allocObject(&DAT_100f1cb40,0x20,7);
        *(long *)(puVar7 + 0x10) = param_2;
        *(undefined **)(puVar7 + 0x18) = puVar4;
        pcVar11 = *(code **)(lVar3 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar4);
        (*pcVar11)(thunk_FUN_1008d678c,puVar7,uVar5,lVar3);
        FUN_10096bb60(uVar10,uVar1,uVar2);
        _swift_release(puVar7);
      }
      else {
        puVar7 = puVar4;
        thunk_FUN_1005de8f4(puVar4);
        FUN_1006486f8();
        FUN_10096bb60(uVar10,uVar1,uVar2);
        FUN_100004550(puVar7,lVar8);
        _swift_bridgeObjectRelease(uVar9);
      }
      _swift_errorRelease(puVar4);
      return;
    }
  }
  else {
    FUN_1005e650c(param_1,auStack_b0);
    local_68 = param_2;
    _swift_beginAccess(unaff_x20 + 0x18,auStack_c8,0x21,0);
    _swift_retain(param_2);
    FUN_100970c3c(auStack_b0);
    _swift_endAccess(auStack_c8);
    FUN_10096ba3c(auStack_b0);
  }
  return;
}



/* Address: 0x10096b998 | FUN_10096b998 */

void FUN_10096b998(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_28,1,0);
  lVar1 = *(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x20 + 0x20);
  if (*(long *)(unaff_x20 + 0x28) < *(long *)(unaff_x20 + 0x20)) {
    lVar1 = lVar1 + *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  }
  if (0 < lVar1) {
    *(long *)(unaff_x20 + 0x30) = lVar1 + -1;
    *(undefined1 *)(unaff_x20 + 0x38) = 0;
  }
  return;
}



/* Address: 0x10096b9ec | FUN_10096b9ec */

undefined8 FUN_10096b9ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fef1e0;
  FUN_1000f7830(&DAT_100fef1e0,&DAT_100c87af0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10096ba3c | FUN_10096ba3c */

undefined8 FUN_10096ba3c(undefined8 param_1)

{
  FUN_10096c108(param_1,&DAT_100f1ca50);
  return param_1;
}



/* Address: 0x10096ba68 | FUN_10096ba68 */

undefined8 FUN_10096ba68(undefined8 param_1,undefined8 param_2)

{
  FUN_10096c1a4(param_2,param_1,&DAT_100f1ca50);
  return param_2;
}



/* Address: 0x10096ba9c | FUN_10096ba9c */

undefined8 FUN_10096ba9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fef1e0;
  FUN_1000f7830(&DAT_100fef1e0,&DAT_100c87af0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10096baec | FUN_10096baec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10096baec(void)

{
  return ZEXT816(0x100fef390);
}



/* Address: 0x10096bb0c | FUN_10096bb0c */

void FUN_10096bb0c(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      param_1 = param_1 & 0x3fffffffffffffff;
    }
    _swift_retain(param_1);
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    param_3 = param_1 & 0x3fffffffffffffff;
  }
  _swift_retain(param_3);
  return;
}



/* Address: 0x10096bb60 | FUN_10096bb60 */

void FUN_10096bb60(ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      param_1 = param_1 & 0x3fffffffffffffff;
    }
    _swift_release(param_1);
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    param_3 = param_1 & 0x3fffffffffffffff;
  }
  _swift_release(param_3);
  return;
}



/* Address: 0x10096bbb4 | thunk_FUN_10096bbb8 */

void thunk_FUN_10096bbb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87bf8,&DAT_100f1c8b0);
  DAT_100fef270 = pTVar1;
  return;
}



/* Address: 0x10096bbb8 | FUN_10096bbb8 */

void FUN_10096bbb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef270 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87bf8,&DAT_100f1c8b0);
  DAT_100fef270 = pTVar1;
  return;
}



/* Address: 0x10096bbf8 | FUN_10096bbf8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10096bbf8(void)

{
  return ZEXT816(0x100fef2b8);
}



/* Address: 0x10096bc18 | FUN_10096bc18 */

undefined1  [16] FUN_10096bc18(void)

{
  return ZEXT816(0x100f1c8b0);
}



/* Address: 0x10096bc28 | thunk_FUN_10096bc2c */

ulong * thunk_FUN_10096bc2c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    uVar2 = param_2[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(char *)(param_1 + 2) = (char)param_2[2];
    _swift_retain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



/* Address: 0x10096bc2c | FUN_10096bc2c */

ulong * FUN_10096bc2c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    uVar2 = param_2[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(char *)(param_1 + 2) = (char)param_2[2];
    _swift_retain(uVar1);
    _swift_bridgeObjectRetain(uVar2);
    return param_1;
  }
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



/* Address: 0x10096bc90 | FUN_10096bc90 */

ulong * FUN_10096bc90(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      *(char *)(param_1 + 2) = (char)param_2[2];
      _swift_retain();
      _swift_bridgeObjectRetain(uVar1);
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar1) {
      *param_1 = uVar1;
      _swift_retain();
      _swift_release(uVar2);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      *(char *)(param_1 + 2) = (char)param_2[2];
      return param_1;
    }
    _swift_release(uVar2);
    _swift_bridgeObjectRelease(param_1[1]);
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x10096bd60 | FUN_10096bd60 */

void FUN_10096bd60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10096bd74 | FUN_10096bd74 */

ulong * FUN_10096bd74(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (uVar1 < 0xffffffff) {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    *(char *)(param_1 + 2) = (char)param_2[2];
  }
  else {
    if (*param_2 < 0xffffffff) {
      _swift_release(uVar1);
      _swift_bridgeObjectRelease(param_1[1]);
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
    }
    else {
      *param_1 = *param_2;
      _swift_release(uVar1);
      uVar1 = param_1[1];
      param_1[1] = param_2[1];
      _swift_bridgeObjectRelease(uVar1);
    }
    *(char *)(param_1 + 2) = (char)param_2[2];
  }
  return param_1;
}



/* Address: 0x10096be10 | FUN_10096be10 */

int FUN_10096be10(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff8 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + 0x7ffffff9;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (7 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -6;
  }
  return iVar1;
}



/* Address: 0x10096be6c | FUN_10096be6c */

void FUN_10096be6c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffff9) {
    if (0x7ffffff8 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 + 6);
      return;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *(uint *)param_1 = param_2 + 0x80000007;
    if (0x7ffffff8 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x10096bec0 | FUN_10096bec0 */

void FUN_10096bec0(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    param_2 = param_2 & 0x7fffffff;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = 0;
  }
  else {
    if (param_2 == 0) {
      return;
    }
    param_2 = param_2 - 1;
  }
  *param_1 = (ulong)param_2;
  return;
}



/* Address: 0x10096bee4 | FUN_10096bee4 */

undefined1  [16] FUN_10096bee4(void)

{
  return ZEXT816(0x100f1c948);
}



/* Address: 0x10096bef4 | thunk_FUN_10096bf08 */

void thunk_FUN_10096bf08(void)

{
  FUN_10096bf08();
  return;
}



/* Address: 0x10096bef8 | FUN_10096bef8 */

void FUN_10096bef8(undefined8 *param_1)

{
  FUN_10096bb60(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x10096bf08 | FUN_10096bf08 */

undefined8 * FUN_10096bf08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  FUN_10096bb0c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x10096bf50 | FUN_10096bf50 */

undefined8 * FUN_10096bf50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar6 = param_2[2];
  FUN_10096bb0c(uVar1,uVar3,uVar6);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar6;
  FUN_10096bb60(uVar2,uVar4,uVar5);
  return param_1;
}



/* Address: 0x10096bfa4 | FUN_10096bfa4 */

void FUN_10096bfa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10096bfb8 | FUN_10096bfb8 */

undefined8 * FUN_10096bfb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_10096bb60(uVar3,uVar1,uVar2);
  return param_1;
}



/* Address: 0x10096bff8 | FUN_10096bff8 */

int FUN_10096bff8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7c < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7d;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)param_1 & 7) << 2) ^ 0x7f;
  if (0x7b < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10096c054 | FUN_10096c054 */

void FUN_10096c054(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7d) {
    if (0x7c < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 2 & 0x1f | (-param_2 & 0x7f) << 5);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7d);
    if (0x7c < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x10096c0ac | FUN_10096c0ac */

uint FUN_10096c0ac(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (int)(uVar1 >> 3) + 3;
  if (uVar1 >> 0x3e != 3) {
    uVar2 = (uint)(uVar1 >> 0x3e);
  }
  return uVar2;
}



/* Address: 0x10096c0c8 | FUN_10096c0c8 */

void FUN_10096c0c8(ulong *param_1,uint param_2)

{
  if (2 < param_2) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 3) << 3 | 0xc000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x10096c0f8 | FUN_10096c0f8 */

undefined1  [16] FUN_10096c0f8(void)

{
  return ZEXT816(0x100f1c9d8);
}



/* Address: 0x10096c108 | FUN_10096c108 */

void FUN_10096c108(ulong *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((long)param_1 + 0x41);
  if (cVar1 == '\x02') {
    FUN_100004594(param_1);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*param_1 & 0x3fffffffffffffff);
    _swift_release(param_1[1]);
    if (((char)param_1[4] != '\x04') &&
       (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(param_1[5] & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
  }
  _swift_release(param_1[9]);
  return;
}



/* Address: 0x10096c1a4 | FUN_10096c1a4 */

ulong * FUN_10096c1a4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  cVar2 = *(char *)((long)param_2 + 0x41);
  if (cVar2 == '\x02') {
    uVar5 = param_2[3];
    param_1[3] = uVar5;
    (*(code *)**(undefined8 **)(uVar5 - 8))(param_1,param_2);
  }
  else if (cVar2 == '\x01') {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    *param_1 = uVar5;
    param_1[1] = uVar6;
    param_1[2] = param_2[2];
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
    cVar1 = (char)param_2[4];
    _swift_retain(uVar5 & 0x3fffffffffffffff);
    _swift_retain(uVar6);
    if (cVar1 == '\x04') {
      uVar5 = param_2[4];
      uVar7 = param_2[7];
      uVar6 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar5;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      *(char *)(param_1 + 8) = (char)param_2[8];
    }
    else {
      *(char *)(param_1 + 4) = cVar1;
      uVar5 = param_2[5];
      if (((uVar5 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        uVar5 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = uVar5;
      }
      else {
        uVar6 = param_2[6];
        param_1[5] = uVar5;
        param_1[6] = uVar6;
        _swift_retain(uVar5 & 0x3fffffffffffffff);
      }
      param_1[7] = param_2[7];
      *(char *)(param_1 + 8) = (char)param_2[8];
    }
  }
  else {
    uVar7 = param_2[2];
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar3 = *(undefined1 *)((long)param_2 + 0x16);
    uVar4 = *(undefined3 *)((long)param_2 + 0x14);
    FUN_100656200(uVar5,uVar6,(ulong)(uint7)param_2[2]);
    *param_1 = uVar5;
    param_1[1] = uVar6;
    *(undefined1 *)((long)param_1 + 0x16) = uVar3;
    *(short *)((long)param_1 + 0x14) = (short)uVar4;
    *(int *)(param_1 + 2) = (int)uVar7;
  }
  *(char *)((long)param_1 + 0x41) = cVar2;
  param_1[9] = param_2[9];
  _swift_retain();
  return param_1;
}



/* Address: 0x10096c2f8 | FUN_10096c2f8 */

ulong * FUN_10096c2f8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 != param_2) {
    FUN_1008b78fc(param_1);
    cVar2 = *(char *)((long)param_2 + 0x41);
    if (cVar2 == '\x02') {
      uVar7 = param_2[3];
      param_1[3] = uVar7;
      (*(code *)**(undefined8 **)(uVar7 - 8))(param_1,param_2);
    }
    else if (cVar2 == '\x01') {
      uVar5 = *param_2;
      *param_1 = uVar5;
      uVar6 = param_2[1];
      param_1[1] = uVar6;
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
      uVar7 = param_2[3];
      *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
      *(int *)(param_1 + 3) = (int)uVar7;
      cVar1 = (char)param_2[4];
      _swift_retain(uVar5 & 0x3fffffffffffffff);
      _swift_retain(uVar6);
      if (cVar1 == '\x04') {
        uVar5 = param_2[5];
        uVar7 = param_2[4];
        uVar8 = param_2[7];
        uVar6 = param_2[6];
        *(char *)(param_1 + 8) = (char)param_2[8];
        param_1[5] = uVar5;
        param_1[4] = uVar7;
        param_1[7] = uVar8;
        param_1[6] = uVar6;
      }
      else {
        *(char *)(param_1 + 4) = cVar1;
        uVar7 = param_2[5];
        if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          uVar7 = param_2[5];
          param_1[6] = param_2[6];
          param_1[5] = uVar7;
        }
        else {
          param_1[5] = uVar7;
          param_1[6] = param_2[6];
          _swift_retain(uVar7 & 0x3fffffffffffffff);
        }
        uVar7 = param_2[7];
        *(char *)(param_1 + 8) = (char)param_2[8];
        param_1[7] = uVar7;
      }
    }
    else {
      uVar6 = param_2[2];
      uVar7 = *param_2;
      uVar5 = param_2[1];
      uVar3 = *(undefined1 *)((long)param_2 + 0x16);
      uVar4 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_100656200(uVar7,uVar5,(ulong)(uint7)param_2[2]);
      *param_1 = uVar7;
      param_1[1] = uVar5;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      *(short *)((long)param_1 + 0x14) = (short)uVar4;
      *(int *)(param_1 + 2) = (int)uVar6;
    }
    *(char *)((long)param_1 + 0x41) = cVar2;
  }
  uVar7 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar7);
  return param_1;
}



/* Address: 0x10096c47c | FUN_10096c47c */

void FUN_10096c47c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x10096c498 | FUN_10096c498 */

undefined8 * FUN_10096c498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_1008b78fc(param_1);
    uVar1 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
    uVar3 = *param_2;
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_release(uVar1);
  return param_1;
}


