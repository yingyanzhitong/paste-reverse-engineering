/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001063f0 | thunk_FUN_1000fba84 */

void thunk_FUN_1000fba84(void)

{
  FUN_1000fba84();
  return;
}



/* Address: 0x1001063f4 | FUN_1001063f4 */

undefined1  [16] FUN_1001063f4(char *param_1,void *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  ulong uVar2;
  Character CVar3;
  bool bVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  uint uVar7;
  Index before;
  Character CVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  
  CVar3.bridgeObject = param_2;
  CVar3.str = param_1;
  pcVar1 = param_3;
  if (((ulong)param_4 & 0x2000000000000000) != 0) {
    pcVar1 = (char *)((ulong)param_4 >> 0x38 & 0xf);
  }
  uVar7 = (uint)((ulong)param_3 >> 0x3b) & 1;
  if (((ulong)param_4 & 0x1000000000000000) == 0) {
    uVar7 = 1;
  }
  uVar2 = 7;
  if (uVar7 == 0) {
    uVar2 = 0xb;
  }
  before.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar1 << 0x10);
  while( true ) {
    if ((ulong)before.cmsgPointer.unknown < (undefined *)0x4000) {
      before.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
      uVar6 = 1;
      goto LAB_1001064c4;
    }
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    before = Swift::String::index(before,SVar10);
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    CVar8 = Swift::String::get_subscript(before,SVar11);
    _Var5.unknown = CVar8.bridgeObject;
    if (CVar8 == CVar3) break;
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)CVar8.str,_Var5,(_StringComparisonResult)(__int8)param_1);
    _swift_bridgeObjectRelease(_Var5.unknown);
    if (bVar4) {
LAB_1001064b4:
      uVar6 = 0;
LAB_1001064c4:
      auVar9._8_8_ = uVar6;
      auVar9._0_8_ = before.cmsgPointer.unknown;
      return auVar9;
    }
  }
  _swift_bridgeObjectRelease(_Var5.unknown);
  goto LAB_1001064b4;
}



/* Address: 0x1001064e0 | FUN_1001064e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1001064e0(ID param_1)

{
  undefined *puVar1;
  Dictionary<undefined,undefined> DVar2;
  ulong uVar3;
  char *pcVar5;
  undefined *puVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  char *local_70;
  void *pvStack_68;
  String local_60;
  undefined8 uStack_50;
  long local_48;
  void *pvVar4;
  
  uVar3 = 0;
  objc_stub::userInfo(param_1);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  pcVar5 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  puVar6 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar4 = SVar7.bridgeObject;
  if (*(long *)(DVar2.unknown + 0x10) == 0) {
LAB_1001065f4:
    local_60 = (String)ZEXT816(0);
    local_48 = 0;
    uStack_50 = 0;
    _swift_bridgeObjectRelease(pvVar4);
    _swift_bridgeObjectRelease(DVar2.unknown);
LAB_10010660c:
    FUN_1000faea8(&local_60);
  }
  else {
    _swift_bridgeObjectRetain(DVar2.unknown);
    FUN_100071370(SVar7.str);
    if (((ulong)SVar7.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(DVar2.unknown);
      goto LAB_1001065f4;
    }
    FUN_10000cbfc(*(long *)(DVar2.unknown + 0x38) + (long)SVar7.str * 0x20,&local_60);
    _swift_bridgeObjectRelease(pvVar4);
    _swift_bridgeObjectRelease_n(DVar2.unknown,2);
    if (local_48 == 0) goto LAB_10010660c;
    pcVar5 = puVar1 + 8;
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    _swift_dynamicCast(&local_70,&local_60,pcVar5,PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((uVar3 & 1) != 0) {
      uVar3 = (ulong)local_70 & 0xffffffffffff;
      if (((ulong)pvStack_68 & 0x2000000000000000) != 0) {
        uVar3 = (ulong)pvStack_68 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        local_60.bridgeObject = pvStack_68;
        local_60.str = local_70;
        SVar7 = local_60;
        goto LAB_10010666c;
      }
      _swift_bridgeObjectRelease();
    }
  }
  objc_stub::localizedDescription(param_1);
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar4 = SVar7.bridgeObject;
  uVar3 = (ulong)SVar7.str & 0xffffffffffff;
  if (((ulong)pvVar4 & 0x2000000000000000) != 0) {
    uVar3 = (ulong)pvVar4 >> 0x38 & 0xf;
  }
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(pvVar4);
    SVar7.bridgeObject = &DAT_e500000000000000;
    SVar7.str = (char *)0x726f727245;
  }
LAB_10010666c:
  local_60 = SVar7;
  SVar8.bridgeObject = &DAT_e800000000000000;
  SVar8.str = (char *)0x203a65646f432820;
  SVar10.bridgeObject = puVar6;
  SVar10.str = pcVar5;
  Swift::String::append(SVar8,SVar10);
  local_70 = (char *)objc_stub::code(param_1);
  SVar7 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = puVar6;
  SVar11.str = pcVar5;
  Swift::String::append(SVar7,SVar11);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x29;
  SVar12.bridgeObject = puVar6;
  SVar12.str = pcVar5;
  Swift::String::append(SVar9,SVar12);
  return local_60;
}



/* Address: 0x1001066e8 | FUN_1001066e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1001066e8(ID param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar6;
  String SVar7;
  String SVar8;
  void *pvVar5;
  
  objc_stub::domain(param_1);
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar5 = SVar7.bridgeObject;
  pcVar2 = SVar7.str;
  uVar1 = (ulong)pcVar2 & 0xffffffffffff;
  if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    pcVar3 = (char *)0x2e;
    uVar4 = 0;
    FUN_1001063f4(0x2e,0xe100000000000000,pcVar2,pvVar5);
    if ((uVar4 & 0xff) != 1) {
      SVar8.bridgeObject = pcVar2;
      SVar8.str = pcVar3;
      pvVar6 = pvVar5;
      SVar7.str = Swift::String::get_subscript((Range<Index>)0xf,SVar8);
      _swift_bridgeObjectRelease(pvVar5);
      SVar7.bridgeObject = pcVar3;
      SVar7 = Swift::String::__fromSubstring(SVar7);
      pvVar5 = SVar7.bridgeObject;
      _swift_bridgeObjectRelease(pvVar6);
      uVar1 = (ulong)SVar7.str & 0xffffffffffff;
      if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        return SVar7;
      }
    }
  }
  _swift_bridgeObjectRelease(pvVar5);
  return (String)ZEXT816(0);
}



/* Address: 0x1001067ec | FUN_1001067ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001067ec(undefined8 param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_118 [88];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar3 = (undefined *)NSThread::callStackReturnAddresses((ID)&_OBJC_CLASS___NSThread);
  FUN_10000ec2c(0,&DAT_100faeef0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar4 = puVar3;
  FUN_10010a918(puVar3,param_1,1);
  _swift_bridgeObjectRelease(puVar3);
  lVar8 = *(long *)(puVar4 + 0x10);
  puVar3 = puVar4;
  if (lVar8 != 0) {
    lVar9 = lVar8 * 0x58 + -0x38;
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(long *)(puVar4 + 0x10) < lVar8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100106a4c);
        (*pcVar2)();
      }
      puVar5 = (undefined8 *)(puVar4 + lVar9);
      uStack_b8 = puVar5[1];
      local_c0 = *puVar5;
      uStack_a8 = puVar5[3];
      uStack_b0 = puVar5[2];
      uStack_98 = puVar5[5];
      local_a0 = puVar5[4];
      uStack_88 = puVar5[7];
      local_90 = puVar5[6];
      uStack_78 = puVar5[9];
      uStack_80 = puVar5[8];
      local_70 = *(undefined1 *)(puVar5 + 10);
      puVar5 = &local_c0;
      FUN_1001012f8(puVar5,auStack_118);
      FUN_1000fc3a0();
      FUN_100101334(&local_c0);
      puVar6 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar3;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100105864(0,*(long *)(puVar3 + 0x10) + 1,1,puVar3);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar3 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100105864(puVar3,uVar1 + 1,1,puVar7);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 **)(puVar3 + uVar1 * 8 + 0x20) = puVar5;
      lVar9 = lVar9 + -0x58;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    _swift_bridgeObjectRelease(puVar4);
    if (*(long *)(puVar3 + 0x10) != 0) {
      puVar4 = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 4;
      *(undefined8 *)(puVar4 + 0x10) = 2;
      *(undefined8 *)(puVar4 + 0x20) = 0x73656d617266;
      *(undefined1 **)(puVar4 + 0x28) = &DAT_e600000000000000;
      puVar6 = &DAT_100fae868;
      FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
      *(undefined **)(puVar4 + 0x30) = puVar3;
      *(undefined **)(puVar4 + 0x48) = puVar6;
      *(undefined1 **)(puVar4 + 0x50) = &DAT_65707974;
      *(undefined **)(puVar4 + 0x78) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(puVar4 + 0x58) = &DAT_e400000000000000;
      *(undefined8 *)(puVar4 + 0x60) = 0x776172;
      *(undefined8 *)(puVar4 + 0x68) = 0xe300000000000000;
      puVar6 = puVar4;
      FUN_1000f8154(puVar4);
      _swift_setDeallocating(puVar4);
      puVar3 = &DAT_100fae490;
      FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
      _swift_arrayDestroy(puVar4 + 0x20,2,puVar3);
      return puVar6;
    }
  }
  _swift_bridgeObjectRelease(puVar3);
  return (undefined *)0x0;
}



/* Address: 0x100106a78 | FUN_100106a78 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

char * FUN_100106a78(char *param_1,byte param_2,undefined8 param_3,undefined8 param_4,char *param_5)

{
  bool bVar1;
  mach_port_t mVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  pthread_t p_Var6;
  char *pcVar7;
  _StringGuts _Var8;
  undefined1 *puVar9;
  String local_d0;
  undefined *local_b8;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  char *local_70;
  
  pcVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  _swift_getErrorValue(param_1,auStack_78,&local_90);
  _swift_getDynamicType(local_90,uStack_88,1);
  uStack_a8 = local_80;
  puVar4 = &DAT_100faf660;
  FUN_1000f7830(&DAT_100faf660,&DAT_100c2e3e8);
  local_d0 = Swift::String::_init(local_b0,puVar4);
  _Var8.unknown = local_d0.bridgeObject;
  if (((local_d0.str == (undefined *)0x726f727245534e) && (_Var8.unknown == &DAT_e700000000000000))
     || (bVar1 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)local_d0.str,_Var8,(_StringComparisonResult)0x4e), bVar1))
  {
    _swift_bridgeObjectRelease(_Var8.unknown);
    objc_stub::domain((ID)param_1);
    local_d0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  local_b8 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_100011080(&local_d0,local_b0);
  pcVar5 = pcVar3;
  _swift_isUniquelyReferenced_nonNull_native(pcVar3);
  puVar9 = &DAT_65707974;
  local_d0.str = pcVar3;
  FUN_10016fe74(local_b0,&DAT_65707974,&DAT_e400000000000000,pcVar5);
  pcVar3 = local_d0.str;
  local_70 = local_d0.str;
  pcVar5 = param_1;
  FUN_1001064e0();
  if (puVar9 != (undefined1 *)0x0) {
    local_b8 = puVar4;
    local_d0.str = pcVar5;
    local_d0.bridgeObject = puVar9;
    FUN_100011080(&local_d0,local_b0);
    pcVar5 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    puVar9 = &DAT_65756c6176;
    local_d0.str = pcVar3;
    FUN_10016fe74(local_b0,&DAT_65756c6176,&DAT_e500000000000000,pcVar5);
    local_70 = local_d0.str;
    pcVar3 = local_d0.str;
  }
  FUN_1001066e8();
  if (puVar9 != (undefined1 *)0x0) {
    local_b8 = puVar4;
    local_d0.str = param_1;
    local_d0.bridgeObject = puVar9;
    FUN_100011080(&local_d0,local_b0);
    pcVar5 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    local_d0.str = pcVar3;
    FUN_10016fe74(local_b0,0x656c75646f6d,&DAT_e600000000000000,pcVar5);
    local_70 = local_d0.str;
    pcVar3 = local_d0.str;
  }
  NSThread::currentThread((ID)&_OBJC_CLASS___NSThread);
  p_Var6 = _pthread_self();
  mVar2 = _pthread_mach_thread_np(p_Var6);
  local_d0.str = (char *)(ulong)mVar2;
  local_b8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100011080(&local_d0,local_b0);
  pcVar5 = pcVar3;
  _swift_isUniquelyReferenced_nonNull_native(pcVar3);
  local_d0.str = pcVar3;
  FUN_10016fe74(local_b0,0x695f646165726874,0xe900000000000064,pcVar5);
  pcVar5 = local_d0.str;
  local_70 = local_d0.str;
  pcVar3 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  pcVar3[0x18] = '\x06';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x10] = '\x03';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  *(undefined1 **)(pcVar3 + 0x20) = &DAT_65707974;
  *(undefined1 **)(pcVar3 + 0x28) = &DAT_e400000000000000;
  *(undefined8 *)(pcVar3 + 0x30) = param_3;
  *(undefined8 *)(pcVar3 + 0x38) = param_4;
  *(undefined **)(pcVar3 + 0x48) = puVar4;
  pcVar3[0x50] = 'h';
  pcVar3[0x51] = 'a';
  pcVar3[0x52] = 'n';
  pcVar3[0x53] = 'd';
  pcVar3[0x54] = 'l';
  pcVar3[0x55] = 'e';
  pcVar3[0x56] = 'd';
  pcVar3[0x57] = '\0';
  *(undefined1 **)(pcVar3 + 0x58) = &DAT_e700000000000000;
  puVar4 = PTR___type_metadata_for_Swift_Bool_100eac570;
  pcVar3[0x60] = param_2 & 1;
  *(undefined **)(pcVar3 + 0x78) = puVar4;
  pcVar3[0x80] = 's';
  pcVar3[0x81] = 'y';
  pcVar3[0x82] = 'n';
  pcVar3[0x83] = 't';
  pcVar3[0x84] = 'h';
  pcVar3[0x85] = 'e';
  pcVar3[0x86] = 't';
  pcVar3[0x87] = 'i';
  pcVar3[0x88] = 'c';
  pcVar3[0x89] = '\0';
  pcVar3[0x8a] = '\0';
  pcVar3[0x8b] = '\0';
  pcVar3[0x8c] = '\0';
  pcVar3[0x8d] = '\0';
  pcVar3[0x8e] = '\0';
  pcVar3[0x8f] = -0x17;
  *(undefined **)(pcVar3 + 0xa8) = puVar4;
  pcVar3[0x90] = '\x01';
  _swift_bridgeObjectRetain(param_4);
  pcVar7 = pcVar3;
  FUN_1000f8154();
  _swift_setDeallocating(pcVar3);
  puVar4 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(pcVar3 + 0x20,3,puVar4);
  puVar4 = &DAT_100fae898;
  FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
  local_b8 = puVar4;
  local_d0.str = pcVar7;
  if (puVar4 == (undefined *)0x0) {
    FUN_1000faea8(&local_d0);
    FUN_10016fcc4(local_b0,0x73696e616863656d,0xe90000000000006d);
    FUN_1000faea8(local_b0);
  }
  else {
    FUN_100011080(&local_d0,local_b0);
    pcVar3 = pcVar5;
    _swift_isUniquelyReferenced_nonNull_native(pcVar5);
    local_d0.str = pcVar5;
    FUN_10016fe74(local_b0,0x73696e616863656d,0xe90000000000006d,pcVar3);
    local_70 = local_d0.str;
  }
  FUN_1001067ec();
  if (param_5 != (char *)0x0) {
    local_d0.str = param_5;
    if (puVar4 == (undefined *)0x0) {
      local_b8 = puVar4;
      FUN_1000faea8(&local_d0);
      FUN_10016fcc4(local_b0,0x6172746b63617473,0xea00000000006563);
      FUN_1000faea8(local_b0);
    }
    else {
      local_b8 = puVar4;
      FUN_100011080(&local_d0,local_b0);
      pcVar3 = local_70;
      pcVar5 = local_70;
      _swift_isUniquelyReferenced_nonNull_native(local_70);
      local_d0.str = pcVar3;
      FUN_10016fe74(local_b0,0x6172746b63617473,0xea00000000006563,pcVar5);
      local_70 = local_d0.str;
    }
  }
  return local_70;
}



/* Address: 0x100106f28 | FUN_100106f28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100106f28(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  ID self;
  code *pcVar3;
  NSError *self_00;
  long lVar4;
  undefined *puVar5;
  Dictionary<undefined,undefined> DVar6;
  undefined8 uVar7;
  ID *pIVar8;
  undefined1 *puVar9;
  __int64 _Var10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  void *pvVar15;
  ulong uVar16;
  long lVar17;
  String SVar18;
  ID local_b8;
  undefined1 auStack_b0 [72];
  undefined *local_68;
  
  self_00 = Foundation::__convertErrorToNSError();
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8)
    ;
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_100eae0d8) {
      _Var1.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar5 = (undefined *)0x0;
  FUN_100105ac4(0,lVar4 + 1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar16 + 0x10);
  puVar12 = puVar5;
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar2) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
    FUN_100105ac4(puVar12,uVar2 + 1,1,puVar5);
    uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar16 + 0x10) = uVar2 + 1;
  *(NSError **)(uVar16 + uVar2 * 8 + 0x20) = self_00;
  puVar5 = &DAT_100faf658;
  FUN_1000f7830(&DAT_100faf658,&DAT_100c2e3e0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(NSError **)(puVar5 + 0x20) = self_00;
  puVar11 = puVar5;
  FUN_1001013f8();
  _swift_setDeallocating(puVar5);
  local_68 = puVar11;
  objc_stub::userInfo((ID)self_00);
  puVar5 = PTR___type_metadata_for_Any_100eae0c0;
  DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar15 = SVar18.bridgeObject;
  lVar4 = *(long *)(DVar6.unknown + 0x10);
  while (lVar4 != 0) {
    pvVar15 = SVar18.bridgeObject;
    FUN_100071370(SVar18.str);
    if (((ulong)SVar18.bridgeObject & 1) == 0) break;
    FUN_10000cbfc(*(long *)(DVar6.unknown + 0x38) + (long)SVar18.str * 0x20,auStack_b0);
    _swift_bridgeObjectRelease(DVar6.unknown);
    _swift_bridgeObjectRelease(pvVar15);
    uVar7 = 0;
    FUN_10000ec2c(0,&DAT_100faf650,&PTR__OBJC_CLASS___NSError_100f8d818);
    pIVar8 = &local_b8;
    _swift_dynamicCast(pIVar8,auStack_b0,puVar5 + 8,uVar7,6);
    self = local_b8;
    if (((ulong)pIVar8 & 1) == 0) goto joined_r0x0001001072dc;
    puVar9 = auStack_b0;
    FUN_1001656b4(puVar9,local_b8);
    if (((ulong)puVar9 & 1) == 0) goto joined_r0x0001001072dc;
    puVar11 = puVar12;
    if ((ulong)puVar12 >> 0x3e != 0) {
      _Var1.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        _Var1.unknown = puVar12;
      }
      _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      puVar11 = (undefined *)0x0;
      FUN_100105ac4(0,_Var10 + 1,1,puVar12);
    }
    uVar16 = (ulong)puVar11 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar16 + 0x10);
    puVar12 = puVar11;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar2) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
      FUN_100105ac4(puVar12,uVar2 + 1,1,puVar11);
      uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar16 + 0x10) = uVar2 + 1;
    *(ID *)(uVar16 + uVar2 * 8 + 0x20) = self;
    objc_stub::userInfo(self);
    DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar15 = SVar18.bridgeObject;
    lVar4 = *(long *)(DVar6.unknown + 0x10);
  }
  _swift_bridgeObjectRelease(DVar6.unknown);
  _swift_bridgeObjectRelease(pvVar15);
joined_r0x0001001072dc:
  if ((ulong)puVar12 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar12) {
      _Var1.unknown = puVar12;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar5;
  if (lVar4 != 0) {
    if (lVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100107384);
      (*pcVar3)();
    }
    lVar17 = 0;
    do {
      if (((ulong)puVar12 & 0xc000000000000001) == 0) {
        lVar13 = *(long *)(puVar12 + lVar17 * 8 + 0x20);
      }
      else {
        lVar13 = lVar17;
        FUN_10010ed40(lVar17,puVar12);
      }
      FUN_100106a78();
      if (lVar13 != 0) {
        puVar11 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar14 = puVar5;
        if (((ulong)puVar11 & 1) == 0) {
          puVar14 = (undefined *)0x0;
          FUN_100105864(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar2 = *(ulong *)(puVar14 + 0x10);
        puVar5 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          FUN_100105864(puVar5,uVar2 + 1,1,puVar14);
        }
        *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
        *(long *)(puVar5 + uVar2 * 8 + 0x20) = lVar13;
      }
      lVar17 = lVar17 + 1;
    } while (lVar4 != lVar17);
  }
  puVar11 = local_68;
  _swift_bridgeObjectRelease(puVar12);
  _swift_bridgeObjectRelease(puVar11);
  return puVar5;
}



/* Address: 0x100107384 | FUN_100107384 */

undefined * FUN_100107384(undefined *param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_118 [88];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar8 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar8 != 0) {
    FUN_10010a918(param_1,param_2,0);
    lVar8 = *(long *)(param_1 + 0x10);
    puVar7 = param_1;
    if (lVar8 != 0) {
      lVar9 = lVar8 * 0x58 + -0x38;
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (*(long *)(param_1 + 0x10) < lVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100107598);
          (*pcVar3)();
        }
        puVar4 = (undefined8 *)(param_1 + lVar9);
        uStack_b8 = puVar4[1];
        local_c0 = *puVar4;
        uStack_a8 = puVar4[3];
        uStack_b0 = puVar4[2];
        uStack_98 = puVar4[5];
        local_a0 = puVar4[4];
        uStack_88 = puVar4[7];
        local_90 = puVar4[6];
        uStack_78 = puVar4[9];
        uStack_80 = puVar4[8];
        local_70 = *(undefined1 *)(puVar4 + 10);
        puVar4 = &local_c0;
        FUN_1001012f8(puVar4,auStack_118);
        FUN_1000fc3a0();
        FUN_100101334(&local_c0);
        puVar5 = puVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar7;
        if (((ulong)puVar5 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_100105864(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        }
        uVar2 = *(ulong *)(puVar6 + 0x10);
        puVar7 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
          FUN_100105864(puVar7,uVar2 + 1,1,puVar6);
        }
        *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
        *(undefined8 **)(puVar7 + uVar2 * 8 + 0x20) = puVar4;
        lVar9 = lVar9 + -0x58;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      _swift_bridgeObjectRelease(param_1);
      if (*(long *)(puVar7 + 0x10) != 0) {
        puVar5 = &DAT_100fae678;
        FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
        _swift_initStackObject();
        *(undefined8 *)(puVar5 + 0x18) = 4;
        *(undefined8 *)(puVar5 + 0x10) = 2;
        *(undefined8 *)(puVar5 + 0x20) = 0x73656d617266;
        *(undefined1 **)(puVar5 + 0x28) = &DAT_e600000000000000;
        puVar6 = &DAT_100fae868;
        FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
        *(undefined **)(puVar5 + 0x30) = puVar7;
        *(undefined **)(puVar5 + 0x48) = puVar6;
        *(undefined1 **)(puVar5 + 0x50) = &DAT_65707974;
        *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_Swift_String_100eac208;
        *(undefined1 **)(puVar5 + 0x58) = &DAT_e400000000000000;
        *(undefined8 *)(puVar5 + 0x60) = 0x776172;
        *(undefined8 *)(puVar5 + 0x68) = 0xe300000000000000;
        puVar6 = puVar5;
        FUN_1000f8154(puVar5);
        _swift_setDeallocating(puVar5);
        puVar7 = &DAT_100fae490;
        FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
        _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
        return puVar6;
      }
    }
    _swift_bridgeObjectRelease(puVar7);
  }
  return (undefined *)0x0;
}



/* Address: 0x1001075f4 | FUN_1001075f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_1001075f4(ID param_1,byte param_2,undefined8 param_3,undefined8 param_4,char *param_5)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  mach_port_t mVar3;
  char *pcVar4;
  pthread_t p_Var5;
  ID IVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  void *pvVar10;
  long lVar11;
  String SVar12;
  String local_b0;
  undefined *local_98;
  undefined1 auStack_90 [32];
  char *local_70;
  
  pcVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  NSThread::currentThread((ID)&_OBJC_CLASS___NSThread);
  p_Var5 = _pthread_self();
  mVar3 = _pthread_mach_thread_np(p_Var5);
  local_98 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  local_b0.str = (char *)(ulong)mVar3;
  FUN_100011080(&local_b0,auStack_90);
  pcVar7 = pcVar4;
  _swift_isUniquelyReferenced_nonNull_native(pcVar4);
  local_b0.str = pcVar4;
  FUN_10016fe74(auStack_90,0x695f646165726874,0xe900000000000064,pcVar7);
  pcVar4 = local_b0.str;
  local_70 = local_b0.str;
  objc_stub::name(param_1);
  SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  pvVar10 = SVar12.bridgeObject;
  uVar1 = (ulong)SVar12.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar10);
  }
  else {
    local_98 = PTR___type_metadata_for_Swift_String_100eac208;
    local_b0 = SVar12;
    FUN_100011080(&local_b0,auStack_90);
    pcVar7 = pcVar4;
    _swift_isUniquelyReferenced_nonNull_native(pcVar4);
    local_b0 = (String)CONCAT88(local_b0.bridgeObject,pcVar4);
    FUN_10016fe74(auStack_90,&DAT_65707974,&DAT_e400000000000000,pcVar7);
    local_70 = local_b0.str;
    pcVar4 = local_b0.str;
  }
  IVar6 = objc_stub::reason(param_1);
  if (IVar6 != 0) {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar10 = SVar12.bridgeObject;
    uVar1 = (ulong)SVar12.str & 0xffffffffffff;
    if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar10 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar10);
    }
    else {
      local_98 = puVar9;
      local_b0 = SVar12;
      FUN_100011080(&local_b0,auStack_90);
      pcVar7 = pcVar4;
      _swift_isUniquelyReferenced_nonNull_native(pcVar4);
      local_b0.str = pcVar4;
      FUN_10016fe74(auStack_90,&DAT_65756c6176,&DAT_e500000000000000,pcVar7);
      local_70 = local_b0.str;
      pcVar4 = local_b0.str;
    }
  }
  pcVar7 = (char *)objc_stub::callStackReturnAddresses(param_1);
  FUN_10000ec2c(0,&DAT_100faeef0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)pcVar7 >> 0x3e == 0) {
    lVar11 = *(long *)(((ulong)pcVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)pcVar7 & 0xffffffffffffff8);
    if ((char *)0x7fffffffffffffff < pcVar7) {
      _Var2.unknown = pcVar7;
    }
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar11 == 0) {
    _swift_bridgeObjectRelease(pcVar7);
    FUN_1001067ec();
  }
  else {
    pcVar8 = pcVar7;
    FUN_100107384(pcVar7,param_5);
    _swift_bridgeObjectRelease(pcVar7);
    param_5 = pcVar8;
  }
  pcVar7 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  pcVar7[0x18] = '\x06';
  pcVar7[0x19] = '\0';
  pcVar7[0x1a] = '\0';
  pcVar7[0x1b] = '\0';
  pcVar7[0x1c] = '\0';
  pcVar7[0x1d] = '\0';
  pcVar7[0x1e] = '\0';
  pcVar7[0x1f] = '\0';
  pcVar7[0x10] = '\x03';
  pcVar7[0x11] = '\0';
  pcVar7[0x12] = '\0';
  pcVar7[0x13] = '\0';
  pcVar7[0x14] = '\0';
  pcVar7[0x15] = '\0';
  pcVar7[0x16] = '\0';
  pcVar7[0x17] = '\0';
  *(undefined1 **)(pcVar7 + 0x20) = &DAT_65707974;
  *(undefined1 **)(pcVar7 + 0x28) = &DAT_e400000000000000;
  *(undefined8 *)(pcVar7 + 0x30) = param_3;
  *(undefined8 *)(pcVar7 + 0x38) = param_4;
  *(undefined **)(pcVar7 + 0x48) = puVar9;
  pcVar7[0x50] = 'h';
  pcVar7[0x51] = 'a';
  pcVar7[0x52] = 'n';
  pcVar7[0x53] = 'd';
  pcVar7[0x54] = 'l';
  pcVar7[0x55] = 'e';
  pcVar7[0x56] = 'd';
  pcVar7[0x57] = '\0';
  *(undefined1 **)(pcVar7 + 0x58) = &DAT_e700000000000000;
  puVar9 = PTR___type_metadata_for_Swift_Bool_100eac570;
  pcVar7[0x60] = param_2 & 1;
  *(undefined **)(pcVar7 + 0x78) = puVar9;
  pcVar7[0x80] = 's';
  pcVar7[0x81] = 'y';
  pcVar7[0x82] = 'n';
  pcVar7[0x83] = 't';
  pcVar7[0x84] = 'h';
  pcVar7[0x85] = 'e';
  pcVar7[0x86] = 't';
  pcVar7[0x87] = 'i';
  pcVar7[0x88] = 'c';
  pcVar7[0x89] = '\0';
  pcVar7[0x8a] = '\0';
  pcVar7[0x8b] = '\0';
  pcVar7[0x8c] = '\0';
  pcVar7[0x8d] = '\0';
  pcVar7[0x8e] = '\0';
  pcVar7[0x8f] = -0x17;
  *(undefined **)(pcVar7 + 0xa8) = puVar9;
  pcVar7[0x90] = lVar11 == 0;
  _swift_bridgeObjectRetain(param_4);
  pcVar8 = pcVar7;
  FUN_1000f8154();
  _swift_setDeallocating(pcVar7);
  puVar9 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(pcVar7 + 0x20,3,puVar9);
  puVar9 = &DAT_100fae898;
  FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
  local_98 = puVar9;
  local_b0.str = pcVar8;
  if (puVar9 == (undefined *)0x0) {
    FUN_1000faea8(&local_b0);
    FUN_10016fcc4(auStack_90,0x73696e616863656d,0xe90000000000006d);
    FUN_1000faea8(auStack_90);
    if (param_5 != (char *)0x0) {
      local_b0.str = param_5;
      local_98 = (undefined *)0x0;
      FUN_1000faea8(&local_b0);
      FUN_10016fcc4(auStack_90,0x6172746b63617473,0xea00000000006563);
      FUN_1000faea8(auStack_90);
    }
  }
  else {
    FUN_100011080(&local_b0,auStack_90);
    pcVar7 = pcVar4;
    _swift_isUniquelyReferenced_nonNull_native(pcVar4);
    local_b0.str = pcVar4;
    FUN_10016fe74(auStack_90,0x73696e616863656d,0xe90000000000006d,pcVar7);
    pcVar4 = local_b0.str;
    local_70 = local_b0.str;
    if (param_5 != (char *)0x0) {
      local_98 = puVar9;
      local_b0.str = param_5;
      FUN_100011080(&local_b0,auStack_90);
      pcVar7 = pcVar4;
      _swift_isUniquelyReferenced_nonNull_native(pcVar4);
      local_b0 = (String)CONCAT88(local_b0.bridgeObject,pcVar4);
      FUN_10016fe74(auStack_90,0x6172746b63617473,0xea00000000006563,pcVar7);
      local_70 = local_b0.str;
    }
  }
  return local_70;
}



/* Address: 0x100107ac8 | FUN_100107ac8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100107c2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100107ac8(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  Dictionary<undefined,undefined> DVar8;
  ID *pIVar9;
  undefined8 uVar10;
  __int64 _Var11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  void *pvVar15;
  ulong uVar16;
  long lVar17;
  String SVar18;
  ID local_e8 [5];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined *local_70;
  
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8)
    ;
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_100eae0d8) {
      _Var1.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar5 = (undefined *)0x0;
  FUN_100105c24(0,lVar4 + 1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar16 = (ulong)puVar5 & 0xffffffffffffff8;
  uVar2 = *(ulong *)(uVar16 + 0x10);
  puVar12 = puVar5;
  if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar2) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
    FUN_100105c24(puVar12,uVar2 + 1,1,puVar5);
    uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar16 + 0x10) = uVar2 + 1;
  *(ID *)(uVar16 + uVar2 * 8 + 0x20) = param_1;
  puVar5 = &DAT_100faf658;
  FUN_1000f7830(&DAT_100faf658,&DAT_100c2e3e0);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(ID *)(puVar5 + 0x20) = param_1;
  puVar6 = puVar5;
  FUN_1001013f8();
  _swift_setDeallocating(puVar5);
  local_70 = puVar6;
  IVar7 = objc_stub::userInfo(param_1);
  puVar6 = PTR___type_metadata_for_Any_100eae0c0;
  puVar5 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  do {
    if (IVar7 == 0) {
      uStack_b8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
LAB_100107d9c:
      FUN_1000faea8(&local_c0);
LAB_100107da4:
      if ((ulong)puVar12 >> 0x3e == 0) {
        lVar4 = *(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar12) {
          _Var1.unknown = puVar12;
        }
        lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      PTR___swiftEmptyArrayStorage_100eae0d8 = puVar5;
      if (lVar4 != 0) {
        if (lVar4 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100107f38);
          (*pcVar3)();
        }
        lVar17 = 0;
        do {
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            lVar13 = *(long *)(puVar12 + lVar17 * 8 + 0x20);
          }
          else {
            lVar13 = lVar17;
            FUN_10010ef54(lVar17,puVar12);
          }
          FUN_1001075f4();
          if (lVar13 != 0) {
            puVar6 = puVar5;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar14 = puVar5;
            if (((ulong)puVar6 & 1) == 0) {
              puVar14 = (undefined *)0x0;
              FUN_100105864(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
            }
            uVar2 = *(ulong *)(puVar14 + 0x10);
            puVar5 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar2) {
              puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
              FUN_100105864(puVar5,uVar2 + 1,1,puVar14);
            }
            *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
            *(long *)(puVar5 + uVar2 * 8 + 0x20) = lVar13;
          }
          lVar17 = lVar17 + 1;
        } while (lVar4 != lVar17);
      }
      puVar6 = local_70;
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar6);
      return puVar5;
    }
    DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar15 = SVar18.bridgeObject;
    _swift_bridgeObjectRetain(pvVar15);
    puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (local_e8,DVar8.unknown,PTR___type_metadata_for_Swift_String_100eac208,puVar5);
    if (*(long *)(DVar8.unknown + 0x10) == 0) {
LAB_100107d7c:
      _swift_bridgeObjectRelease(pvVar15);
      _swift_bridgeObjectRelease(DVar8.unknown);
      FUN_100089674(local_e8);
      uStack_b8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
      goto LAB_100107d9c;
    }
    pIVar9 = local_e8;
    FUN_1000f1290(pIVar9);
    if (((ulong)puVar14 & 1) == 0) goto LAB_100107d7c;
    FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + (long)pIVar9 * 0x20,&local_c0);
    _swift_bridgeObjectRelease(pvVar15);
    FUN_100089674(local_e8);
    _swift_bridgeObjectRelease(DVar8.unknown);
    if (local_a8 == 0) goto LAB_100107d9c;
    uVar10 = 0;
    FUN_10000ec2c(0,&DAT_100faf648,&PTR__OBJC_CLASS___NSException_100f8d8c0);
    pIVar9 = local_e8;
    _swift_dynamicCast(pIVar9,&local_c0,puVar6 + 8,uVar10,6);
    IVar7 = local_e8[0];
    if (((ulong)pIVar9 & 1) == 0) goto LAB_100107da4;
    pIVar9 = local_e8;
    FUN_1001656b4(pIVar9,local_e8[0]);
    if (((ulong)pIVar9 & 1) == 0) goto LAB_100107da4;
    puVar14 = puVar12;
    if ((ulong)puVar12 >> 0x3e != 0) {
      _Var1.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        _Var1.unknown = puVar12;
      }
      _Var11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      puVar14 = (undefined *)0x0;
      FUN_100105c24(0,_Var11 + 1,1,puVar12);
    }
    uVar16 = (ulong)puVar14 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar16 + 0x10);
    puVar12 = puVar14;
    if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar2) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
      FUN_100105c24(puVar12,uVar2 + 1,1,puVar14);
      uVar16 = (ulong)puVar12 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar16 + 0x10) = uVar2 + 1;
    *(ID *)(uVar16 + uVar2 * 8 + 0x20) = IVar7;
    IVar7 = objc_stub::userInfo(IVar7);
  } while( true );
}



/* Address: 0x100107f38 | FUN_100107f38 */

void FUN_100107f38(long param_1)

{
  undefined *puVar1;
  long local_50 [3];
  undefined *local_38;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar1 = &DAT_100fae868;
    FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
    local_50[0] = param_1;
    local_38 = puVar1;
    _swift_bridgeObjectRetain(param_1);
    FUN_10016e6ec(local_50,0x6974706563786524,0xef7473696c5f6e6f);
    FUN_100109e8c();
    if (*(long *)(param_1 + 0x10) == 0) {
      _swift_bridgeObjectRelease();
      return;
    }
    local_50[0] = param_1;
    local_38 = puVar1;
    FUN_10016e6ec(local_50,0x695f677562656424,0xed0000736567616d);
  }
  return;
}



/* Address: 0x100108014 | FUN_100108014 */

void FUN_100108014(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ID IVar2;
  long unaff_x20;
  
  puVar1 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(ID *)(unaff_x20 + 0x10) = IVar2;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar1 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(undefined1 *)(unaff_x20 + 0x48) = 0;
  *(ulong *)(unaff_x20 + 0x28) = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(ID *)(unaff_x20 + 0x40) = IVar2;
  return;
}



/* Address: 0x100108088 | FUN_100108088 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100108088(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  NSDictionary *pNVar8;
  Data DVar9;
  ulong uVar10;
  ulong extraout_x1;
  uint uVar11;
  int iVar12;
  long unaff_x20;
  ulong uVar13;
  ID self;
  ID self_00;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  ulong local_a0;
  ulong uStack_98;
  long local_88;
  ulong local_80 [5];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10016ead0();
  if (param_1 == 0) goto LAB_1001081b8;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar4 = 0x6567617373656d24;
    uVar10 = 0;
    FUN_100071370(0x6567617373656d24);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar4 * 0x20,local_80);
      _swift_bridgeObjectRelease(param_1);
      puVar2 = PTR___type_metadata_for_Any_100eae0c0;
      puVar5 = &local_a0;
      _swift_dynamicCast(puVar5,local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      uVar10 = local_a0;
      if (((ulong)puVar5 & 1) != 0) {
        _swift_bridgeObjectRelease(uStack_98);
        uVar10 = uVar10 & 0xffffffffffff;
        if ((uStack_98 & 0x2000000000000000) != 0) {
          uVar10 = uStack_98 >> 0x38 & 0xf;
        }
        if (uVar10 != 0) {
          if (*(long *)(param_1 + 0x10) == 0) {
LAB_1001081f4:
            local_80[1] = 0;
            local_80[0] = 0;
            local_80[3] = 0;
            local_80[2] = 0;
          }
          else {
            _swift_bridgeObjectRetain(param_1);
            lVar4 = 0x617473656d697424;
            uVar10 = 0xea0000000000706d;
            FUN_100071370(0x617473656d697424);
            if ((uVar10 & 1) == 0) {
              _swift_bridgeObjectRelease(param_1);
              goto LAB_1001081f4;
            }
            FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar4 * 0x20,local_80);
            _swift_bridgeObjectRelease(param_1);
          }
          FUN_100108d58(local_80,&local_a0);
          if (local_88 == 0) {
            FUN_1000faea8(&local_a0);
LAB_100108248:
            FUN_100108d58(local_80,&local_a0);
            if (local_88 != 0) {
              uVar7 = 0;
              FUN_100108da8(0);
              puVar6 = local_b8;
              _swift_dynamicCast(puVar6,&local_a0,puVar2 + 8,uVar7,6);
              if (((ulong)puVar6 & 1) == 0) {
                FUN_1000faea8(local_80);
                goto LAB_1001081ac;
              }
              goto LAB_100108288;
            }
            FUN_1000faea8(local_80);
            _swift_bridgeObjectRelease(param_1);
            puVar5 = &local_a0;
          }
          else {
            puVar6 = local_b8;
            _swift_dynamicCast(puVar6,&local_a0,puVar2 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            if ((int)puVar6 == 0) goto LAB_100108248;
            _swift_bridgeObjectRelease(local_b0);
LAB_100108288:
            pNVar8 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
            local_a0 = 0;
            DVar9.unknown =
                 (undefined *)
                 NSJSONSerialization::dataWithJSONObject_options_error_
                           (&_OBJC_CLASS___NSJSONSerialization,pNVar8,0,&local_a0);
            if (DVar9.unknown != (undefined *)0x0) {
              uVar10 = extraout_x1;
              DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
              uVar1 = (uint)(uVar10 >> 0x20);
              uVar11 = uVar1 >> 0x1e;
              if (uVar1 >> 0x1e < 2) {
                if (uVar11 == 0) {
                  uVar13 = uVar10 >> 0x30 & 0xff;
                }
                else {
                  iVar12 = (int)((ulong)DVar9.unknown >> 0x20);
                  if (SBORROW4(iVar12,(int)DVar9.unknown)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100108464);
                    (*pcVar3)();
                  }
                  uVar13 = (ulong)(iVar12 - (int)DVar9.unknown);
                }
              }
              else if (uVar11 == 2) {
                uVar13 = *(long *)(DVar9.unknown + 0x18) - *(long *)(DVar9.unknown + 0x10);
                if (SBORROW8(*(long *)(DVar9.unknown + 0x18),*(long *)(DVar9.unknown + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100108394);
                  (*pcVar3)();
                }
              }
              else {
                uVar13 = 0;
              }
              if ((long)uVar13 <= *(long *)(unaff_x20 + 0x28)) {
                self = *(ID *)(unaff_x20 + 0x40);
                objc_stub::lock(self);
                self_00 = *(ID *)(unaff_x20 + 0x10);
                objc_stub::lock(self_00);
                FUN_100108468(&local_a0);
                objc_stub::unlock(self_00);
                uVar13 = local_a0;
                if (local_a0 != 0) {
                  if (*(code **)(unaff_x20 + 0x30) != (code *)0x0) {
                    (**(code **)(unaff_x20 + 0x30))(local_a0);
                  }
                  _swift_bridgeObjectRelease(uVar13);
                }
                objc_stub::unlock(self);
                _swift_bridgeObjectRelease(param_1);
                FUN_10003bf2c(DVar9.unknown,uVar10);
                FUN_1000faea8(local_80);
                goto LAB_1001081b8;
              }
              FUN_1000faea8(local_80);
              FUN_10003bf2c(DVar9.unknown,uVar10);
              goto LAB_1001081ac;
            }
            uVar10 = local_a0;
            Foundation::__convertNSErrorToError();
            _swift_willThrow(0);
            _swift_bridgeObjectRelease(param_1);
            _swift_errorRelease(uVar10);
            puVar5 = local_80;
          }
          FUN_1000faea8(puVar5);
          goto LAB_1001081b8;
        }
      }
    }
  }
LAB_1001081ac:
  _swift_bridgeObjectRelease(param_1);
LAB_1001081b8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100108468 | FUN_100108468 */

void FUN_100108468(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *local_78 [3];
  
  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
    _swift_beginAccess(param_2 + 0x18,local_78,0x21,0);
    uVar7 = *(ulong *)(param_2 + 0x18);
    _swift_bridgeObjectRetain(param_3);
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_2 + 0x18) = uVar7;
    uVar3 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_100105c40(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *(ulong *)(param_2 + 0x18) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar7 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100105c40(uVar7,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    lVar6 = uVar7 + uVar2 * 0x10;
    *(undefined8 *)(lVar6 + 0x20) = param_3;
    *(long *)(lVar6 + 0x28) = param_4;
    *(ulong *)(param_2 + 0x18) = uVar7;
    _swift_endAccess(local_78);
    if (SCARRY8(*(long *)(param_2 + 0x20),param_4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100108628);
      (*pcVar1)();
    }
    *(long *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) + param_4;
    FUN_100108628();
    lVar5 = *(long *)(param_2 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar6 != 0) {
      local_78[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_bridgeObjectRetain(lVar5);
      FUN_10010f9b0(0,lVar6,0);
      lVar9 = 0x20;
      puVar4 = local_78[0];
      do {
        uVar8 = *(undefined8 *)(lVar5 + lVar9);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        uVar3 = *(ulong *)(puVar4 + 0x18);
        local_78[0] = puVar4;
        _swift_bridgeObjectRetain(uVar8);
        if (uVar3 >> 1 <= uVar2) {
          FUN_10010f9b0(1 < uVar3,uVar2 + 1,1);
          puVar4 = local_78[0];
        }
        *(ulong *)(puVar4 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar4 + uVar2 * 8 + 0x20) = uVar8;
        lVar9 = lVar9 + 0x10;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      _swift_bridgeObjectRelease(lVar5);
    }
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  *param_1 = puVar4;
  return;
}



/* Address: 0x100108628 | FUN_100108628 */

void FUN_100108628(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_58,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  while( true ) {
    if (lVar5 <= lVar7) {
      return;
    }
    lVar5 = *(long *)(unaff_x20 + 0x18);
    lVar6 = *(long *)(lVar5 + 0x10);
    if (lVar6 == 0) break;
    _swift_beginAccess(unaff_x20 + 0x18,auStack_70,0x21,0);
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    lVar2 = *(long *)(lVar5 + 0x28);
    _swift_bridgeObjectRetain(uVar1);
    lVar4 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(long *)(unaff_x20 + 0x18) = lVar5;
    if (((int)lVar4 == 0) || (*(ulong *)(lVar5 + 0x18) >> 1 < lVar6 - 1U)) {
      FUN_100105c40();
      *(long *)(unaff_x20 + 0x18) = lVar4;
      lVar5 = lVar4;
    }
    FUN_100108dec(lVar5 + 0x20);
    lVar6 = *(long *)(lVar5 + 0x10);
    _memmove((void *)(lVar5 + 0x20),(void *)(lVar5 + 0x30),lVar6 * 0x10 - 0x10);
    *(long *)(lVar5 + 0x10) = lVar6 + -1;
    *(long *)(unaff_x20 + 0x18) = lVar5;
    _swift_endAccess(auStack_70);
    _swift_bridgeObjectRelease(uVar1);
    lVar5 = *(long *)(unaff_x20 + 0x20) - lVar2;
    if (SBORROW8(*(long *)(unaff_x20 + 0x20),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100108738);
      (*pcVar3)();
    }
    *(long *)(unaff_x20 + 0x20) = lVar5;
  }
  return;
}



/* Address: 0x100108738 | FUN_100108738 */

undefined * FUN_100108738(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ID self;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  self = *(ID *)(unaff_x20 + 0x10);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_78,0,0);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar4);
    FUN_10010f9b0(0,lVar5,0);
    lVar7 = 0x20;
    do {
      uVar6 = *(undefined8 *)(lVar4 + lVar7);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      uVar2 = *(ulong *)(puVar3 + 0x18);
      _swift_bridgeObjectRetain(uVar6);
      if (uVar2 >> 1 <= uVar1) {
        FUN_10010f9b0(1 < uVar2,uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar3 + uVar1 * 8 + 0x20) = uVar6;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(lVar4);
  }
  objc_stub::unlock(self);
  return puVar3;
}



/* Address: 0x100108844 | FUN_100108844 */

void FUN_100108844(void)

{
  undefined8 uVar1;
  ID self;
  long unaff_x20;
  ID self_00;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + 0x40);
  objc_stub::lock(self);
  self_00 = *(ID *)(unaff_x20 + 0x10);
  objc_stub::lock(self_00);
  *(undefined1 *)(unaff_x20 + 0x48) = 1;
  _swift_beginAccess(unaff_x20 + 0x18,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  objc_stub::unlock(self_00);
  if (*(code **)(unaff_x20 + 0x30) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x30))(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  objc_stub::unlock(self);
  return;
}



/* Address: 0x1001088e0 | FUN_1001088e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001088e0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10010891c | FUN_10010891c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10010891c(void)

{
  return ZEXT816(0x100faf6a8);
}



/* Address: 0x10010893c | FUN_10010893c */

void FUN_10010893c(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  DAT_100faf7f8 = objc_stub::init((ID)self);
  return;
}



/* Address: 0x100108964 | FUN_100108964 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100108964(void)

{
  ID self;
  undefined *puVar1;
  NSDictionary *pNVar2;
  Data DVar3;
  char *pcVar4;
  undefined8 extraout_x1;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  String separator;
  undefined8 local_98 [3];
  undefined *local_80;
  undefined8 local_78 [4];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = &DAT_100fae868;
  FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
  local_98[0] = uVar6;
  local_80 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    FUN_1000faea8(local_98);
    FUN_10016fcc4(local_78,0xd000000000000010,0x8000000100d914f0);
    FUN_1000faea8(local_78);
  }
  else {
    FUN_100011080(local_98,local_78);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    uVar6 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_98[0] = uVar5;
    FUN_10016fe74(local_78,0xd000000000000010,0x8000000100d914f0,uVar6);
    uVar5 = local_98[0];
  }
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  local_78[0] = 0;
  DVar3.unknown =
       (undefined *)
       NSJSONSerialization::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar2,0,local_78);
  if (DVar3.unknown == (undefined *)0x0) {
    uVar6 = local_78[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
    if (DAT_101057340 == '\x01') {
      pcVar4 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar4[0x18] = '\x02';
      pcVar4[0x19] = '\0';
      pcVar4[0x1a] = '\0';
      pcVar4[0x1b] = '\0';
      pcVar4[0x1c] = '\0';
      pcVar4[0x1d] = '\0';
      pcVar4[0x1e] = '\0';
      pcVar4[0x1f] = '\0';
      pcVar4[0x10] = '\x01';
      pcVar4[0x11] = '\0';
      pcVar4[0x12] = '\0';
      pcVar4[0x13] = '\0';
      pcVar4[0x14] = '\0';
      pcVar4[0x15] = '\0';
      pcVar4[0x16] = '\0';
      pcVar4[0x17] = '\0';
      *(undefined **)(pcVar4 + 0x38) = puVar1;
      pcVar4[0x20] = '8';
      pcVar4[0x21] = '\0';
      pcVar4[0x22] = '\0';
      pcVar4[0x23] = '\0';
      pcVar4[0x24] = '\0';
      pcVar4[0x25] = '\0';
      pcVar4[0x26] = '\0';
      pcVar4[0x27] = -0x30;
      pcVar4[0x28] = 'p';
      pcVar4[0x29] = '\x18';
      pcVar4[0x2a] = -0x27;
      pcVar4[0x2b] = '\0';
      pcVar4[0x2c] = '\x01';
      pcVar4[0x2d] = '\0';
      pcVar4[0x2e] = '\0';
      pcVar4[0x2f] = -0x80;
      SVar7.bridgeObject = (void *)0x20;
      SVar7.str = pcVar4;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar7,separator);
      _swift_bridgeObjectRelease(uVar5);
      _swift_release(pcVar4);
      goto LAB_100108be0;
    }
  }
  else {
    uVar6 = extraout_x1;
    DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
    if (DAT_100faf7f0 != -1) {
      _swift_once(&DAT_100faf7f0,FUN_10010893c);
    }
    self = DAT_100faf7f8;
    objc_stub::lock(DAT_100faf7f8);
    (**(code **)(unaff_x20 + 0x18))(DVar3.unknown,uVar6);
    objc_stub::unlock(self);
    FUN_10003bf2c(DVar3.unknown,uVar6);
  }
  _swift_bridgeObjectRelease(uVar5);
LAB_100108be0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100108c30 | FUN_100108c30 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100108c30(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100108c6c | FUN_100108c6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100108c6c(void)

{
  return ZEXT816(0x100faf778);
}



/* Address: 0x100108c8c | FUN_100108c8c */

undefined8 * FUN_100108c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100108cb8 | FUN_100108cb8 */

void FUN_100108cb8(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  return;
}



/* Address: 0x100108cc0 | FUN_100108cc0 */

undefined8 * FUN_100108cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Address: 0x100108d0c | FUN_100108d0c */

undefined8 * FUN_100108d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  return param_1;
}



/* Address: 0x100108d48 | FUN_100108d48 */

undefined1  [16] FUN_100108d48(void)

{
  return ZEXT816(0x100eb7c28);
}



/* Address: 0x100108d58 | FUN_100108d58 */

undefined8 FUN_100108d58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae668;
  FUN_1000f7830(&DAT_100fae668,&DAT_100c2e4a0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100108da8 | FUN_100108da8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100108da8(void)

{
  undefined *puVar1;
  
  if (DAT_100faeef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSNumber;
  _swift_getObjCClassMetadata();
  DAT_100faeef0 = puVar1;
  return;
}



/* Address: 0x100108dec | FUN_100108dec */

undefined8 * FUN_100108dec(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  return param_1;
}



/* Address: 0x100108e14 | thunk_FUN_100108c8c */

void thunk_FUN_100108c8c(void)

{
  FUN_100108c8c();
  return;
}



/* Address: 0x100108e18 | FUN_100108e18 */

void FUN_100108e18(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar7 = *param_2;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar7 + 0x10) == 0) goto LAB_100108f84;
  _swift_bridgeObjectRetain(lVar7);
  lVar3 = 0x6172746b63617473;
  uVar6 = 0xea00000000006563;
  FUN_100071370(0x6172746b63617473);
  if ((uVar6 & 1) == 0) {
    _swift_bridgeObjectRelease(lVar7);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    goto LAB_100108f84;
  }
  FUN_10000cbfc(*(long *)(lVar7 + 0x38) + lVar3 * 0x20,&local_50);
  _swift_bridgeObjectRelease(lVar7);
  puVar4 = &DAT_100fae898;
  FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  ppuVar5 = &local_58;
  _swift_dynamicCast(ppuVar5,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6);
  puVar2 = local_58;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (((ulong)ppuVar5 & 1) == 0) goto LAB_100108f84;
  if (*(long *)(local_58 + 0x10) == 0) {
LAB_100108f20:
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    _swift_bridgeObjectRetain(local_58);
    lVar7 = 0x73656d617266;
    uVar6 = 0;
    FUN_100071370(0x73656d617266);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar2);
      goto LAB_100108f20;
    }
    FUN_10000cbfc(*(long *)(puVar2 + 0x38) + lVar7 * 0x20,&local_50);
    _swift_bridgeObjectRelease(puVar2);
  }
  _swift_bridgeObjectRelease(puVar2);
  if (local_38 == 0) {
    FUN_1000faea8(&local_50);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar4 = &DAT_100fae868;
    FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
    ppuVar5 = &local_58;
    _swift_dynamicCast(ppuVar5,&local_50,puVar1 + 8,puVar4,6);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((int)ppuVar5 != 0) {
      puVar4 = local_58;
    }
  }
LAB_100108f84:
  *param_1 = puVar4;
  return;
}



/* Address: 0x100108f9c | FUN_100108f9c */

void FUN_100108f9c(long param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  ulong uVar2;
  Index IVar3;
  code *pcVar4;
  undefined *puVar5;
  uint uVar6;
  Index limitedBy;
  String SVar7;
  String SVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100109038);
    (*pcVar4)();
  }
  uVar1 = (ulong)param_2 & 0xffffffffffff;
  if (((ulong)param_3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_3 >> 0x38 & 0xf;
  }
  uVar6 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if (((ulong)param_3 & 0x1000000000000000) == 0) {
    uVar6 = 1;
  }
  uVar2 = 7;
  if (uVar6 == 0) {
    uVar2 = 0xb;
  }
  limitedBy.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | uVar1 << 0x10);
  puVar5 = (undefined *)0xf;
  SVar8.bridgeObject = param_3;
  SVar8.str = param_2;
  Swift::String::_index((Index)0xf,param_1,limitedBy,SVar8);
  IVar3.cmsgPointer.unknown = limitedBy.cmsgPointer.unknown;
  if (((uint)param_1 & 0xff) != 1) {
    IVar3.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)puVar5;
  }
  if ((ulong)IVar3.cmsgPointer.unknown >> 0xe <= uVar1 << 2) {
    SVar7.bridgeObject = param_2;
    SVar7.str = (char *)limitedBy.cmsgPointer.unknown;
    Swift::String::get_subscript((Range<Index>)IVar3.cmsgPointer.unknown,SVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10010903c);
  (*pcVar4)();
}



/* Address: 0x10010903c | FUN_10010903c */

undefined * FUN_10010903c(long param_1)

{
  long *plVar1;
  String *pSVar2;
  __uint64 _Var3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  code *pcVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  char *pcVar25;
  undefined *puVar26;
  int *piVar27;
  int *piVar28;
  undefined *puVar29;
  void *pvVar30;
  Hasher HVar32;
  void *pvVar33;
  int iVar34;
  void *pvVar35;
  long lVar36;
  UnsafeBufferPointer<__int8> UVar37;
  byte *pbVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  ulong uVar42;
  ulong *puVar43;
  void *pvVar44;
  ulong uVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined *puVar49;
  int iVar50;
  void *pvVar51;
  UnsafePointer<__int8> cString;
  _StringObject _Var52;
  char *pcVar53;
  int iVar54;
  ulong uVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  undefined *local_158;
  String local_150;
  ulong local_128;
  undefined *local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  String local_b0;
  ulong local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  __uint64 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  _StringGuts _Var31;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar43 = (ulong *)(param_1 + 0x38);
    uVar42 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar55 = 0xffffffffffffffff;
    if (-uVar42 < 0x40) {
      uVar55 = ~(-1L << (-uVar42 & 0x3f));
    }
    uVar55 = uVar55 & *puVar43;
    _swift_bridgeObjectRetain();
    lVar46 = 0;
    local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar47 = lVar46;
    do {
      while (uVar55 != 0) {
        uVar41 = (uVar55 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar55 & 0x5555555555555555) << 1;
        uVar41 = (uVar41 & 0xcccccccccccccccc) >> 2 | (uVar41 & 0x3333333333333333) << 2;
        uVar41 = (uVar41 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar41 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar41 = (uVar41 & 0xff00ff00ff00ff00) >> 8 | (uVar41 & 0xff00ff00ff00ff) << 8;
        uVar41 = (uVar41 & 0xffff0000ffff0000) >> 0x10 | (uVar41 & 0xffff0000ffff) << 0x10;
        pSVar2 = (String *)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar41 >> 0x20 | uVar41 << 0x20) * 0x10 +
                 lVar46 * 0x400);
        pcVar53 = pSVar2->str;
        pvVar44 = pSVar2->bridgeObject;
        SVar57 = *pSVar2;
        SVar59 = *pSVar2;
        SVar58 = *pSVar2;
        _swift_bridgeObjectRetain_n(pvVar44,2);
        SVar56.bridgeObject = &SUB_e200000000000000;
        SVar56.str = (char *)0x7830;
        pvVar33 = pvVar44;
        bVar22 = Swift::String::hasPrefix(SVar56,SVar58);
        if ((bVar22) ||
           (SVar58.bridgeObject = &SUB_e200000000000000, SVar58.str = (char *)0x5830,
           pvVar33 = pvVar44, bVar22 = Swift::String::hasPrefix(SVar58,SVar59), bVar22)) {
          _swift_bridgeObjectRetain(pvVar44);
          pcVar25 = (char *)0x2;
          FUN_100108f9c(2,pcVar53,pvVar44);
          _swift_bridgeObjectRelease(pvVar44);
          SVar59.bridgeObject = pcVar53;
          SVar59.str = pcVar25;
          SVar57 = Swift::String::__fromSubstring(SVar59);
          _swift_bridgeObjectRelease(pvVar33);
          _swift_bridgeObjectRelease(pvVar44);
        }
        pvVar51 = SVar57.bridgeObject;
        _Var52.unknown = SVar57.str;
        uVar55 = uVar55 - 1 & uVar55;
        pvVar30 = (void *)((ulong)_Var52.unknown & 0xffffffffffff);
        pvVar35 = (void *)((ulong)pvVar51 >> 0x38 & 0xf);
        pvVar33 = pvVar30;
        if (((ulong)pvVar51 & 0x2000000000000000) != 0) {
          pvVar33 = pvVar35;
        }
        lVar47 = lVar46;
        if (pvVar33 == (void *)0x0) {
          _swift_bridgeObjectRelease(pvVar51);
          _swift_bridgeObjectRelease(pvVar44);
        }
        else {
          if (((ulong)pvVar51 >> 0x3c & 1) == 0) {
            if (((ulong)pvVar51 >> 0x3d & 1) != 0) {
              local_c0 = _Var52.unknown;
              uStack_b8 = (void *)((ulong)pvVar51 & 0xffffffffffffff);
              uVar39 = (uint)SVar57.str & 0xff;
              if (uVar39 == 0x2b) {
                if (pvVar35 == (void *)0x0) {
                    /* WARNING: Does not return */
                  pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bcc);
                  (*pcVar21)();
                }
                lVar36 = (long)pvVar35 + -1;
                if (lVar36 != 0) {
                  pcVar53 = (char *)0x0;
                  pbVar38 = (byte *)((ulong)&local_c0 | 1);
                  do {
                    bVar4 = *pbVar38;
                    uVar39 = bVar4 - 0x30;
                    if (9 < uVar39) {
                      uVar39 = (uint)bVar4;
                      if (bVar4 - 0x41 < 6) {
                        uVar39 = uVar39 - 0x37;
                      }
                      else {
                        if (5 < uVar39 - 0x61) goto LAB_100109490;
                        uVar39 = uVar39 - 0x57;
                      }
                    }
                    if ((ulong)pcVar53 >> 0x3c != 0) goto LAB_100109490;
                    pcVar53 = (char *)((long)pcVar53 * 0x10 + (ulong)(byte)uVar39);
                    pbVar38 = pbVar38 + 1;
                    lVar36 = lVar36 + -1;
                  } while (lVar36 != 0);
                  goto LAB_100109488;
                }
              }
              else if (uVar39 == 0x2d) {
                if (pvVar35 == (void *)0x0) {
                    /* WARNING: Does not return */
                  pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bc4);
                  (*pcVar21)();
                }
                lVar36 = (long)pvVar35 + -1;
                if (lVar36 != 0) {
                  pcVar53 = (char *)0x0;
                  pbVar38 = (byte *)((ulong)&local_c0 | 1);
                  do {
                    bVar4 = *pbVar38;
                    uVar39 = bVar4 - 0x30;
                    if (9 < uVar39) {
                      uVar39 = (uint)bVar4;
                      if (bVar4 - 0x41 < 6) {
                        uVar39 = uVar39 - 0x37;
                      }
                      else {
                        if (5 < uVar39 - 0x61) goto LAB_100109490;
                        uVar39 = uVar39 - 0x57;
                      }
                    }
                    if (((ulong)pcVar53 >> 0x3c != 0) ||
                       (uVar41 = (long)pcVar53 * 0x10, pcVar53 = (char *)(uVar41 - (byte)uVar39),
                       uVar41 < (byte)uVar39)) goto LAB_100109490;
                    pbVar38 = pbVar38 + 1;
                    lVar36 = lVar36 + -1;
                  } while (lVar36 != 0);
LAB_100109488:
                  uVar39 = 0;
                  goto LAB_100109498;
                }
              }
              else if (pvVar35 != (void *)0x0) {
                pcVar53 = (char *)0x0;
                pbVar38 = (byte *)&local_c0;
                do {
                  bVar4 = *pbVar38;
                  uVar39 = bVar4 - 0x30;
                  if (9 < uVar39) {
                    uVar39 = (uint)bVar4;
                    if (bVar4 - 0x41 < 6) {
                      uVar39 = uVar39 - 0x37;
                    }
                    else {
                      if (5 < uVar39 - 0x61) goto LAB_100109490;
                      uVar39 = uVar39 - 0x57;
                    }
                  }
                  if ((ulong)pcVar53 >> 0x3c != 0) goto LAB_100109490;
                  pcVar53 = (char *)((long)pcVar53 * 0x10 + (ulong)(byte)uVar39);
                  pbVar38 = pbVar38 + 1;
                  pvVar35 = (void *)((long)pvVar35 + -1);
                } while (pvVar35 != (void *)0x0);
                goto LAB_100109488;
              }
              goto LAB_100109490;
            }
            if (((ulong)_Var52.unknown >> 0x3c & 1) == 0) {
              pvVar30 = pvVar51;
              UVar37 = Swift::_StringObject::get_sharedUTF8(_Var52);
            }
            else {
              UVar37.unknown = (undefined *)(((ulong)pvVar51 & 0xfffffffffffffff) + 0x20);
            }
            if (*UVar37.unknown == 0x2b) {
              if ((long)pvVar30 < 1) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bd0);
                (*pcVar21)();
              }
              lVar36 = (long)pvVar30 + -1;
              if (lVar36 == 0) goto LAB_100109490;
              pcVar53 = (char *)0x0;
              do {
                UVar37.unknown = UVar37.unknown + 1;
                bVar4 = *UVar37.unknown;
                uVar40 = bVar4 - 0x30;
                if (9 < uVar40) {
                  uVar40 = (uint)bVar4;
                  if (bVar4 - 0x41 < 6) {
                    uVar40 = uVar40 - 0x37;
                  }
                  else {
                    if (5 < uVar40 - 0x61) goto LAB_100109490;
                    uVar40 = uVar40 - 0x57;
                  }
                }
                if ((ulong)pcVar53 >> 0x3c != 0) goto LAB_100109490;
                uVar39 = 0;
                pcVar53 = (char *)((long)pcVar53 * 0x10 + (ulong)(byte)uVar40);
                lVar36 = lVar36 + -1;
              } while (lVar36 != 0);
            }
            else if (*UVar37.unknown == 0x2d) {
              if ((long)pvVar30 < 1) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bc8);
                (*pcVar21)();
              }
              lVar36 = (long)pvVar30 + -1;
              if (lVar36 == 0) {
LAB_100109490:
                pcVar53 = (char *)0x0;
                uVar39 = 1;
              }
              else {
                pcVar53 = (char *)0x0;
                do {
                  UVar37.unknown = UVar37.unknown + 1;
                  bVar4 = *UVar37.unknown;
                  uVar39 = bVar4 - 0x30;
                  if (9 < uVar39) {
                    uVar39 = (uint)bVar4;
                    if (bVar4 - 0x41 < 6) {
                      uVar39 = uVar39 - 0x37;
                    }
                    else {
                      if (5 < uVar39 - 0x61) goto LAB_100109490;
                      uVar39 = uVar39 - 0x57;
                    }
                  }
                  if (((ulong)pcVar53 >> 0x3c != 0) ||
                     (uVar41 = (long)pcVar53 * 0x10, pcVar53 = (char *)(uVar41 - (byte)uVar39),
                     uVar41 < (byte)uVar39)) goto LAB_100109490;
                  uVar39 = 0;
                  lVar36 = lVar36 + -1;
                } while (lVar36 != 0);
              }
            }
            else {
              if (pvVar30 == (void *)0x0) goto LAB_100109490;
              pcVar53 = (char *)0x0;
              if (UVar37.unknown == (byte *)0x0) goto LAB_100109488;
              do {
                bVar4 = *UVar37.unknown;
                uVar40 = bVar4 - 0x30;
                if (9 < uVar40) {
                  uVar40 = (uint)bVar4;
                  if (bVar4 - 0x41 < 6) {
                    uVar40 = uVar40 - 0x37;
                  }
                  else {
                    if (5 < uVar40 - 0x61) goto LAB_100109490;
                    uVar40 = uVar40 - 0x57;
                  }
                }
                if ((ulong)pcVar53 >> 0x3c != 0) goto LAB_100109490;
                uVar39 = 0;
                pcVar53 = (char *)((long)pcVar53 * 0x10 + (ulong)(byte)uVar40);
                UVar37.unknown = UVar37.unknown + 1;
                pvVar30 = (void *)((long)pvVar30 + -1);
              } while (pvVar30 != (void *)0x0);
            }
          }
          else {
            FUN_10016c7c8(_Var52.unknown,pvVar51,0x10);
            pcVar53 = SVar57.str;
            uVar39 = (uint)SVar57.bridgeObject;
          }
LAB_100109498:
          _swift_bridgeObjectRelease(pvVar51);
          _swift_bridgeObjectRelease(pvVar44);
          if ((uVar39 & 0xff) != 1) {
            puVar26 = local_d0;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar26 & 1) == 0) {
              plVar1 = (long *)(local_d0 + 0x10);
              local_d0 = (undefined *)0x0;
              FUN_100105764(0,*plVar1 + 1,1);
            }
            uVar41 = *(ulong *)(local_d0 + 0x10);
            if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar41) {
              puVar26 = (undefined *)(ulong)(1 < *(ulong *)(local_d0 + 0x18));
              FUN_100105764(puVar26,uVar41 + 1,1,local_d0);
              local_d0 = puVar26;
            }
            *(ulong *)(local_d0 + 0x10) = uVar41 + 1;
            *(char **)(local_d0 + uVar41 * 8 + 0x20) = pcVar53;
          }
        }
      }
      bVar22 = SCARRY8(lVar46,1);
      lVar46 = lVar46 + 1;
      if (bVar22) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bb4);
        (*pcVar21)();
      }
      if ((long)(0x3f - uVar42 >> 6) <= lVar46) goto LAB_100109568;
      uVar55 = puVar43[lVar46];
    } while( true );
  }
  local_158 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100109b74:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return local_158;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100109568:
  HVar32.unknown = (undefined *)~uVar42;
  FUN_10000c650(param_1,puVar43,HVar32.unknown,lVar47,0);
  puVar26 = local_d0;
  FUN_100100968();
  _swift_bridgeObjectRelease();
  if ((*(long *)(puVar26 + 0x10) == 0) || (__dyld_image_count(), (int)local_d0 == 0)) {
    local_158 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    cString.unknown = (undefined *)0x0;
    local_158 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar49 = local_d0;
    do {
      piVar27 = (int *)cString.unknown;
      __dyld_get_image_header();
      iVar50 = (int)cString.unknown;
      if (piVar27 != (int *)0x0) {
        piVar28 = (int *)cString.unknown;
        __dyld_get_image_vmaddr_slide();
        __dyld_get_image_name();
        if (cString.unknown == (undefined *)0x0) {
          local_150.bridgeObject = &DAT_e700000000000000;
          local_150.str = (char *)0x6e776f6e6b6e75;
        }
        else {
          local_150 = Swift::String::init(cString);
        }
        bVar22 = *piVar27 != -0x1120531;
        bVar23 = *piVar27 == -0x30051202;
        iVar34 = 1;
        if (!bVar22 || bVar23) {
          iVar34 = 0x19;
        }
        lVar46 = 0x1c;
        if (!bVar22 || bVar23) {
          lVar46 = 0x20;
        }
        iVar54 = piVar27[4];
        if (iVar54 == 0) {
          SVar58 = (String)ZEXT816(0);
          local_128 = 0;
          uVar55 = 0;
        }
        else {
          local_128 = 0;
          SVar58 = (String)ZEXT816(0);
          piVar27 = (int *)((long)piVar27 + lVar46);
          uVar55 = 0;
          do {
            pvVar44 = SVar58.bridgeObject;
            uVar39 = piVar27[1];
            if (*piVar27 == 0x1b) {
              iVar17 = piVar27[2];
              uVar5 = *(undefined1 *)((long)piVar27 + 9);
              uVar6 = *(undefined1 *)((long)piVar27 + 10);
              uVar7 = *(undefined1 *)((long)piVar27 + 0xb);
              iVar18 = piVar27[3];
              uVar8 = *(undefined1 *)((long)piVar27 + 0xd);
              uVar9 = *(undefined1 *)((long)piVar27 + 0xe);
              uVar10 = *(undefined1 *)((long)piVar27 + 0xf);
              iVar19 = piVar27[4];
              uVar11 = *(undefined1 *)((long)piVar27 + 0x11);
              uVar12 = *(undefined1 *)((long)piVar27 + 0x12);
              uVar13 = *(undefined1 *)((long)piVar27 + 0x13);
              iVar20 = piVar27[5];
              uVar14 = *(undefined1 *)((long)piVar27 + 0x15);
              uVar15 = *(undefined1 *)((long)piVar27 + 0x16);
              uVar16 = *(undefined1 *)((long)piVar27 + 0x17);
              HVar32.unknown = &DAT_100fae860;
              FUN_1000f7830(&DAT_100fae860,&DAT_100c2e1c0);
              _swift_allocObject();
              *(undefined8 *)(HVar32.unknown + 0x18) = 0x20;
              *(undefined8 *)(HVar32.unknown + 0x10) = 0x10;
              puVar49 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
              *(undefined **)(HVar32.unknown + 0x38) = PTR___type_metadata_for_Swift_UInt8_100eadcd0
              ;
              puVar29 = 
              PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100eadd00;
              *(undefined **)(HVar32.unknown + 0x40) =
                   PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100eadd00;
              HVar32.unknown[0x20] = (char)iVar17;
              *(undefined **)(HVar32.unknown + 0x60) = puVar49;
              *(undefined **)(HVar32.unknown + 0x68) = puVar29;
              HVar32.unknown[0x48] = uVar5;
              *(undefined **)(HVar32.unknown + 0x88) = puVar49;
              *(undefined **)(HVar32.unknown + 0x90) = puVar29;
              HVar32.unknown[0x70] = uVar6;
              *(undefined **)(HVar32.unknown + 0xb0) = puVar49;
              *(undefined **)(HVar32.unknown + 0xb8) = puVar29;
              HVar32.unknown[0x98] = uVar7;
              *(undefined **)(HVar32.unknown + 0xd8) = puVar49;
              *(undefined **)(HVar32.unknown + 0xe0) = puVar29;
              HVar32.unknown[0xc0] = (char)iVar18;
              *(undefined **)(HVar32.unknown + 0x100) = puVar49;
              *(undefined **)(HVar32.unknown + 0x108) = puVar29;
              HVar32.unknown[0xe8] = uVar8;
              *(undefined **)(HVar32.unknown + 0x128) = puVar49;
              *(undefined **)(HVar32.unknown + 0x130) = puVar29;
              HVar32.unknown[0x110] = uVar9;
              *(undefined **)(HVar32.unknown + 0x150) = puVar49;
              *(undefined **)(HVar32.unknown + 0x158) = puVar29;
              HVar32.unknown[0x138] = uVar10;
              *(undefined **)(HVar32.unknown + 0x178) = puVar49;
              *(undefined **)(HVar32.unknown + 0x180) = puVar29;
              HVar32.unknown[0x160] = (char)iVar19;
              *(undefined **)(HVar32.unknown + 0x1a0) = puVar49;
              *(undefined **)(HVar32.unknown + 0x1a8) = puVar29;
              HVar32.unknown[0x188] = uVar11;
              *(undefined **)(HVar32.unknown + 0x1c8) = puVar49;
              *(undefined **)(HVar32.unknown + 0x1d0) = puVar29;
              HVar32.unknown[0x1b0] = uVar12;
              *(undefined **)(HVar32.unknown + 0x1f0) = puVar49;
              *(undefined **)(HVar32.unknown + 0x1f8) = puVar29;
              HVar32.unknown[0x1d8] = uVar13;
              *(undefined **)(HVar32.unknown + 0x218) = puVar49;
              *(undefined **)(HVar32.unknown + 0x220) = puVar29;
              HVar32.unknown[0x200] = (char)iVar20;
              *(undefined **)(HVar32.unknown + 0x240) = puVar49;
              *(undefined **)(HVar32.unknown + 0x248) = puVar29;
              HVar32.unknown[0x228] = uVar14;
              *(undefined **)(HVar32.unknown + 0x268) = puVar49;
              *(undefined **)(HVar32.unknown + 0x270) = puVar29;
              HVar32.unknown[0x250] = uVar15;
              *(undefined **)(HVar32.unknown + 0x290) = puVar49;
              *(undefined **)(HVar32.unknown + 0x298) = puVar29;
              HVar32.unknown[0x278] = uVar16;
              SVar58 = (extension_Foundation)::Swift::String::_init();
              _swift_bridgeObjectRelease(pvVar44);
LAB_100109824:
              uVar42 = uVar55;
              if (uVar55 != 0) break;
            }
            else {
              uVar42 = uVar55;
              uVar41 = local_128;
              if (iVar34 == *piVar27) {
                bVar4 = *(byte *)((long)piVar27 + 10);
                HVar32.unknown = (undefined *)(ulong)bVar4;
                if (bVar22 && !bVar23) {
                  uVar48 = (ulong)(uint)piVar27[6];
                  uVar45 = (ulong)(uint)piVar27[7];
                  local_c0._0_2_ = CONCAT11(*(undefined1 *)((long)piVar27 + 9),(char)piVar27[2]);
                  local_c0._0_3_ = CONCAT12(bVar4,(undefined2)local_c0);
                  local_c0._0_4_ =
                       CONCAT13(*(undefined1 *)((long)piVar27 + 0xb),(undefined3)local_c0);
                  local_c0._0_5_ = CONCAT14((char)piVar27[3],(undefined4)local_c0);
                  local_c0._0_6_ =
                       CONCAT15(*(undefined1 *)((long)piVar27 + 0xd),(undefined5)local_c0);
                  local_c0._0_7_ =
                       CONCAT16(*(undefined1 *)((long)piVar27 + 0xe),(undefined6)local_c0);
                  local_c0 = (char *)CONCAT17(*(undefined1 *)((long)piVar27 + 0xf),
                                              (undefined7)local_c0);
                  uStack_b8._0_2_ = CONCAT11(*(undefined1 *)((long)piVar27 + 0x11),(char)piVar27[4])
                  ;
                  uStack_b8._0_3_ =
                       CONCAT12(*(undefined1 *)((long)piVar27 + 0x12),(undefined2)uStack_b8);
                  uStack_b8._0_4_ =
                       CONCAT13(*(undefined1 *)((long)piVar27 + 0x13),(undefined3)uStack_b8);
                  uStack_b8._0_5_ = CONCAT14((char)piVar27[5],(undefined4)uStack_b8);
                  uStack_b8._0_6_ =
                       CONCAT15(*(undefined1 *)((long)piVar27 + 0x15),(undefined5)uStack_b8);
                  uStack_b8._0_7_ =
                       CONCAT16(*(undefined1 *)((long)piVar27 + 0x16),(undefined6)uStack_b8);
                  uStack_b8 = (void *)CONCAT17(*(undefined1 *)((long)piVar27 + 0x17),
                                               (undefined7)uStack_b8);
                  SVar59 = Swift::String::init((UnsafePointer<__int8>)&local_c0);
                  _Var31.unknown = SVar59.bridgeObject;
                  if ((SVar59.str == (undefined *)0x545845545f5f) &&
                     (_Var31.unknown == &DAT_e600000000000000)) goto LAB_1001099bc;
                  HVar32.unknown = (undefined1 *)0x545845545f5f;
                  bVar24 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)SVar59.str,_Var31,(_StringComparisonResult)0x5f);
                  _swift_bridgeObjectRelease(_Var31.unknown);
                  if (!bVar24) goto LAB_1001099cc;
                }
                else {
                  uVar48 = *(ulong *)(piVar27 + 6);
                  uVar45 = *(ulong *)(piVar27 + 8);
                  local_c0._0_2_ = CONCAT11(*(undefined1 *)((long)piVar27 + 9),(char)piVar27[2]);
                  local_c0._0_3_ = CONCAT12(bVar4,(undefined2)local_c0);
                  local_c0._0_4_ =
                       CONCAT13(*(undefined1 *)((long)piVar27 + 0xb),(undefined3)local_c0);
                  local_c0._0_5_ = CONCAT14((char)piVar27[3],(undefined4)local_c0);
                  local_c0._0_6_ =
                       CONCAT15(*(undefined1 *)((long)piVar27 + 0xd),(undefined5)local_c0);
                  local_c0._0_7_ =
                       CONCAT16(*(undefined1 *)((long)piVar27 + 0xe),(undefined6)local_c0);
                  local_c0 = (char *)CONCAT17(*(undefined1 *)((long)piVar27 + 0xf),
                                              (undefined7)local_c0);
                  uStack_b8._0_2_ = CONCAT11(*(undefined1 *)((long)piVar27 + 0x11),(char)piVar27[4])
                  ;
                  uStack_b8._0_3_ =
                       CONCAT12(*(undefined1 *)((long)piVar27 + 0x12),(undefined2)uStack_b8);
                  uStack_b8._0_4_ =
                       CONCAT13(*(undefined1 *)((long)piVar27 + 0x13),(undefined3)uStack_b8);
                  uStack_b8._0_5_ = CONCAT14((char)piVar27[5],(undefined4)uStack_b8);
                  uStack_b8._0_6_ =
                       CONCAT15(*(undefined1 *)((long)piVar27 + 0x15),(undefined5)uStack_b8);
                  uStack_b8._0_7_ =
                       CONCAT16(*(undefined1 *)((long)piVar27 + 0x16),(undefined6)uStack_b8);
                  uStack_b8 = (void *)CONCAT17(*(undefined1 *)((long)piVar27 + 0x17),
                                               (undefined7)uStack_b8);
                  SVar59 = Swift::String::init((UnsafePointer<__int8>)&local_c0);
                  _Var31.unknown = SVar59.bridgeObject;
                  if ((SVar59.str != (undefined *)0x545845545f5f) ||
                     (_Var31.unknown != &DAT_e600000000000000)) {
                    HVar32.unknown = (undefined1 *)0x545845545f5f;
                    bVar24 = Swift::_stringCompareWithSmolCheck
                                       ((_StringGuts)SVar59.str,_Var31,(_StringComparisonResult)0x5f
                                       );
                    _swift_bridgeObjectRelease(_Var31.unknown);
                    uVar42 = uVar45;
                    uVar41 = uVar48;
                    if (!bVar24) {
                      uVar42 = uVar55;
                      uVar41 = local_128;
                    }
                    goto LAB_1001099cc;
                  }
LAB_1001099bc:
                  _swift_bridgeObjectRelease(_Var31.unknown);
                }
                uVar42 = uVar45;
                uVar41 = uVar48;
              }
LAB_1001099cc:
              local_128 = uVar41;
              uVar55 = uVar42;
              if (pvVar44 != (void *)0x0) goto LAB_100109824;
            }
            piVar27 = (int *)((long)piVar27 + (ulong)uVar39);
            iVar54 = iVar54 + -1;
            uVar55 = uVar42;
          } while (iVar54 != 0);
          puVar49 = (undefined *)((ulong)local_d0 & 0xffffffff);
          if ((long)local_128 < 0) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bb8);
            (*pcVar21)();
          }
        }
        _Var3 = local_128 + (long)piVar28;
        if (SCARRY8(local_128,(long)piVar28)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bbc);
          (*pcVar21)();
        }
        if ((long)_Var3 < 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100109bc0);
          (*pcVar21)();
        }
        local_c0 = local_150.str;
        uStack_b8 = local_150.bridgeObject;
        local_98 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_b0 = SVar58;
        local_a0 = local_128;
        local_90 = _Var3;
        uStack_88 = uVar55;
        if (*(long *)(puVar26 + 0x10) != 0) {
          uVar55 = Swift::Hasher::_hash(*(__int64 *)(puVar26 + 0x28),_Var3,HVar32);
          uVar42 = -1L << ((ulong)(byte)puVar26[0x20] & 0x3f);
          uVar55 = uVar55 & (uVar42 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar26 + (uVar55 >> 6) * 8 + 0x38) >> (uVar55 & 0x3f) & 1) != 0) {
            do {
              if (*(__uint64 *)(*(long *)(puVar26 + 0x30) + uVar55 * 8) == _Var3) {
                puVar29 = local_158;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)puVar29 & 1) == 0) {
                  plVar1 = (long *)(local_158 + 0x10);
                  local_158 = (undefined *)0x0;
                  HVar32.unknown = &DAT_00000001;
                  FUN_100105648(0,*plVar1 + 1);
                }
                uVar55 = *(ulong *)(local_158 + 0x10);
                if (*(ulong *)(local_158 + 0x18) >> 1 <= uVar55) {
                  puVar29 = (undefined *)(ulong)(1 < *(ulong *)(local_158 + 0x18));
                  HVar32.unknown = &DAT_00000001;
                  FUN_100105648(puVar29,uVar55 + 1,1,local_158);
                  local_158 = puVar29;
                }
                *(ulong *)(local_158 + 0x10) = uVar55 + 1;
                *(void **)(local_158 + uVar55 * 0x50 + 0x28) = uStack_b8;
                *(char **)(local_158 + uVar55 * 0x50 + 0x20) = local_c0;
                *(ulong *)(local_158 + uVar55 * 0x50 + 0x58) = uStack_88;
                *(__uint64 *)(local_158 + uVar55 * 0x50 + 0x50) = local_90;
                *(undefined8 *)(local_158 + uVar55 * 0x50 + 0x68) = uStack_78;
                *(undefined8 *)(local_158 + uVar55 * 0x50 + 0x60) = local_80;
                *(void **)(local_158 + uVar55 * 0x50 + 0x38) = local_b0.bridgeObject;
                *(char **)(local_158 + uVar55 * 0x50 + 0x30) = local_b0.str;
                *(ulong *)(local_158 + uVar55 * 0x50 + 0x48) = CONCAT71(uStack_97,local_98);
                *(ulong *)(local_158 + uVar55 * 0x50 + 0x40) = local_a0;
                goto LAB_1001095fc;
              }
              uVar55 = uVar55 + 1 & ~uVar42;
            } while ((*(ulong *)(puVar26 + (uVar55 >> 6) * 8 + 0x38) >> (uVar55 & 0x3f) & 1) != 0);
          }
        }
        FUN_1001012c4(&local_c0);
      }
LAB_1001095fc:
      uVar39 = iVar50 + 1;
      cString.unknown = (undefined *)(ulong)uVar39;
    } while (uVar39 != (uint)puVar49);
  }
  _swift_bridgeObjectRelease(puVar26);
  goto LAB_100109b74;
}



/* Address: 0x100109bd4 | FUN_100109bd4 */

undefined * FUN_100109bd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_118;
  long local_110;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar9 = PTR___type_metadata_for_Any_100eae0c0;
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar13 = *(ulong *)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar13 == 0) {
LAB_100109d58:
    puVar8 = puVar7;
    FUN_1000fe2b8();
    _swift_bridgeObjectRelease(puVar7);
    puVar9 = puVar8;
    if (*(long *)(puVar8 + 0x10) != 0) {
      FUN_10010903c();
      _swift_bridgeObjectRelease(puVar8);
      lVar12 = *(long *)(puVar9 + 0x10);
      if (lVar12 != 0) {
        local_c8 = puVar1;
        FUN_10010f9b0(0,lVar12,0);
        lVar14 = 0x20;
        do {
          puVar8 = local_c8;
          puVar4 = (undefined8 *)(puVar9 + lVar14);
          uStack_b8 = puVar4[1];
          local_c0 = *puVar4;
          uStack_a8 = puVar4[3];
          local_b0 = puVar4[2];
          uStack_98 = puVar4[5];
          uStack_a0 = puVar4[4];
          uStack_88 = puVar4[7];
          local_90 = puVar4[6];
          uStack_78 = puVar4[9];
          uStack_80 = puVar4[8];
          puVar4 = &local_c0;
          FUN_100101288(puVar4,&local_118);
          FUN_1000fbe9c();
          FUN_1001012c4(&local_c0);
          uVar13 = *(ulong *)(puVar8 + 0x10);
          local_c8 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar13) {
            FUN_10010f9b0(1 < *(ulong *)(puVar8 + 0x18),uVar13 + 1,1);
          }
          puVar8 = local_c8;
          *(ulong *)(local_c8 + 0x10) = uVar13 + 1;
          *(undefined8 **)(local_c8 + uVar13 * 8 + 0x20) = puVar4;
          lVar14 = lVar14 + 0x50;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        _swift_bridgeObjectRelease(puVar9);
        return puVar8;
      }
    }
    _swift_bridgeObjectRelease(puVar9);
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar11 = 0;
LAB_100109c38:
  uVar15 = uVar11;
  if (uVar11 <= uVar13) {
    uVar11 = uVar13;
  }
  do {
    if (uVar11 == uVar15) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100109e8c);
      (*pcVar3)();
    }
    lVar12 = *(long *)(param_1 + 0x20 + uVar15 * 8);
    if (*(long *)(lVar12 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar12);
      uVar10 = 0;
      lVar14 = 0x64615f6567616d69;
      FUN_100071370(0x64615f6567616d69);
      if ((uVar10 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar12);
      }
      else {
        FUN_10000cbfc(*(long *)(lVar12 + 0x38) + lVar14 * 0x20,&local_c0);
        _swift_bridgeObjectRelease(lVar12);
        puVar4 = &local_118;
        _swift_dynamicCast(puVar4,&local_c0,puVar9 + 8,puVar8,6);
        lVar12 = local_110;
        uVar2 = local_118;
        if ((((ulong)puVar4 & 1) != 0) && (local_110 != 0)) break;
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar13 == uVar15) goto LAB_100109d58;
  } while( true );
  puVar5 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar5 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_10010540c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
  }
  uVar10 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_10010540c(puVar7,uVar10 + 1,1,puVar6);
  }
  uVar11 = uVar15 + 1;
  *(ulong *)(puVar7 + 0x10) = uVar10 + 1;
  *(undefined8 *)(puVar7 + uVar10 * 0x10 + 0x20) = uVar2;
  *(long *)(puVar7 + uVar10 * 0x10 + 0x28) = lVar12;
  if (uVar13 - 1 == uVar15) goto LAB_100109d58;
  goto LAB_100109c38;
}



/* Address: 0x100109e8c | FUN_100109e8c */

undefined * FUN_100109e8c(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_70;
  undefined8 local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      local_68 = *puVar8;
      FUN_100108e18(&local_70,&local_68);
      lVar1 = local_70;
      uVar6 = *(ulong *)(local_70 + 0x10);
      lVar9 = *(long *)(puVar4 + 0x10);
      if (SCARRY8(lVar9,uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100109ffc);
        (*pcVar2)();
      }
      puVar3 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar3 == 0) ||
         (uVar5 = *(ulong *)(puVar4 + 0x18) >> 1, (long)uVar5 < (long)(lVar9 + uVar6))) {
        FUN_100105864();
        uVar5 = *(ulong *)(puVar3 + 0x18) >> 1;
        puVar4 = puVar3;
        if (*(long *)(lVar1 + 0x10) != 0) goto LAB_100109f64;
LAB_100109ed8:
        _swift_bridgeObjectRelease(lVar1);
        puVar3 = puVar4;
        if (uVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a000);
          (*pcVar2)();
        }
      }
      else {
        puVar3 = puVar4;
        if (*(long *)(lVar1 + 0x10) == 0) goto LAB_100109ed8;
LAB_100109f64:
        lVar9 = *(long *)(puVar3 + 0x10);
        if (uVar5 - lVar9 < uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a004);
          (*pcVar2)();
        }
        puVar4 = &DAT_100fae898;
        FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
        _swift_arrayInitWithCopy(puVar3 + lVar9 * 8 + 0x20,lVar1 + 0x20,uVar6,puVar4);
        _swift_bridgeObjectRelease(lVar1);
        if (uVar6 != 0) {
          if (SCARRY8(*(long *)(puVar3 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a008);
            (*pcVar2)();
          }
          *(ulong *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + uVar6;
        }
      }
      lVar7 = lVar7 + -1;
      puVar4 = puVar3;
      puVar8 = puVar8 + 1;
    } while (lVar7 != 0);
  }
  puVar4 = puVar3;
  FUN_100109bd4(puVar3);
  _swift_bridgeObjectRelease(puVar3);
  return puVar4;
}



/* Address: 0x10010a008 | FUN_10010a008 */

undefined1  [16] FUN_10010a008(char *param_1,void *param_2)

{
  String SVar1;
  code *pcVar2;
  char *pcVar3;
  __int64 _Var4;
  Index IVar5;
  Substring SVar6;
  Index IVar7;
  Index IVar8;
  Index IVar9;
  Index IVar10;
  Index IVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
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
  undefined1 auVar28 [16];
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  String local_78;
  
  local_78.bridgeObject = param_2;
  local_78.str = param_1;
  local_88 = 0x2d;
  uStack_80 = 0xe100000000000000;
  local_98 = 0;
  uStack_90 = 0xe000000000000000;
  pcVar3 = param_1;
  FUN_1001013b8();
  SVar18 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_88,&local_98,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3,pcVar3);
  SVar19 = Swift::String::uppercased(SVar18);
  pvVar12 = SVar19.bridgeObject;
  pcVar3 = SVar19.str;
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  _Var4 = Swift::String::get_count(SVar19);
  if (_Var4 == 0x20) {
    IVar5 = Swift::String::index((Index)0xf,8,SVar19);
    SVar29.bridgeObject = pcVar3;
    SVar29.str = (char *)IVar5.cmsgPointer.unknown;
    SVar18 = SVar19;
    SVar6 = Swift::String::get_subscript((Range<Index>)0xf,SVar29);
    pvVar13 = SVar18.bridgeObject;
    IVar7 = Swift::String::index((Index)0xf,8,SVar19);
    IVar8 = Swift::String::index((Index)0xf,0xc,SVar19);
    if ((ulong)IVar8.cmsgPointer.unknown >> 0xe < (ulong)IVar7.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a390);
      (*pcVar2)();
    }
    SVar30.bridgeObject = pcVar3;
    SVar30.str = (char *)IVar8.cmsgPointer.unknown;
    SVar29 = SVar19;
    SVar22.str = Swift::String::get_subscript((Range<Index>)IVar7.cmsgPointer.unknown,SVar30);
    pvVar14 = SVar29.bridgeObject;
    IVar7 = Swift::String::index((Index)0xf,0xc,SVar19);
    IVar9 = Swift::String::index((Index)0xf,0x10,SVar19);
    if ((ulong)IVar9.cmsgPointer.unknown >> 0xe < (ulong)IVar7.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a394);
      (*pcVar2)();
    }
    SVar31.bridgeObject = pcVar3;
    SVar31.str = (char *)IVar9.cmsgPointer.unknown;
    SVar30 = SVar19;
    SVar23.str = Swift::String::get_subscript((Range<Index>)IVar7.cmsgPointer.unknown,SVar31);
    pvVar15 = SVar30.bridgeObject;
    IVar7 = Swift::String::index((Index)0xf,0x10,SVar19);
    IVar10 = Swift::String::index((Index)0xf,0x14,SVar19);
    if ((ulong)IVar10.cmsgPointer.unknown >> 0xe < (ulong)IVar7.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a398);
      (*pcVar2)();
    }
    SVar20.bridgeObject = pcVar3;
    SVar20.str = (char *)IVar10.cmsgPointer.unknown;
    SVar31 = SVar19;
    SVar25.str = Swift::String::get_subscript((Range<Index>)IVar7.cmsgPointer.unknown,SVar20);
    pvVar16 = SVar31.bridgeObject;
    IVar7 = Swift::String::index((Index)0xf,0x14,SVar19);
    IVar11 = Swift::String::index((Index)0xf,0x20,SVar19);
    if ((ulong)IVar11.cmsgPointer.unknown >> 0xe < (ulong)IVar7.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10010a39c);
      (*pcVar2)();
    }
    SVar32.bridgeObject = pcVar3;
    SVar32.str = (char *)IVar11.cmsgPointer.unknown;
    SVar27.str = Swift::String::get_subscript((Range<Index>)IVar7.cmsgPointer.unknown,SVar32);
    pvVar17 = SVar19.bridgeObject;
    _swift_bridgeObjectRelease(pvVar12);
    SVar1.bridgeObject = (void *)IVar5.cmsgPointer.unknown;
    SVar1.str = SVar6.unknown;
    SVar20 = Swift::String::__fromSubstring(SVar1);
    _swift_bridgeObjectRelease(pvVar13);
    SVar21.bridgeObject = (void *)0xe100000000000000;
    SVar21.str = (char *)0x2d;
    local_78 = SVar20;
    Swift::String::append(SVar21,SVar18);
    SVar22.bridgeObject = (void *)IVar8.cmsgPointer.unknown;
    SVar18 = Swift::String::__fromSubstring(SVar22);
    Swift::String::append(SVar18,SVar29);
    _swift_bridgeObjectRelease(pvVar14);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x2d;
    Swift::String::append(SVar18,SVar29);
    SVar23.bridgeObject = (void *)IVar9.cmsgPointer.unknown;
    SVar18 = Swift::String::__fromSubstring(SVar23);
    Swift::String::append(SVar18,SVar30);
    _swift_bridgeObjectRelease(pvVar15);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    SVar24.bridgeObject = (void *)0xe100000000000000;
    SVar24.str = (char *)0x2d;
    Swift::String::append(SVar24,SVar30);
    SVar25.bridgeObject = (void *)IVar10.cmsgPointer.unknown;
    SVar18 = Swift::String::__fromSubstring(SVar25);
    Swift::String::append(SVar18,SVar31);
    _swift_bridgeObjectRelease(pvVar16);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    SVar26.bridgeObject = (void *)0xe100000000000000;
    SVar26.str = (char *)0x2d;
    Swift::String::append(SVar26,SVar31);
    SVar27.bridgeObject = (void *)IVar11.cmsgPointer.unknown;
    SVar18 = Swift::String::__fromSubstring(SVar27);
    Swift::String::append(SVar18,SVar19);
    _swift_bridgeObjectRelease(pvVar17);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
  }
  else {
    _swift_bridgeObjectRelease(pvVar12);
    _swift_bridgeObjectRetain(param_2);
  }
  auVar28._8_8_ = local_78.bridgeObject;
  auVar28._0_8_ = local_78.str;
  return auVar28;
}



/* Address: 0x10010a39c | FUN_10010a39c */

void FUN_10010a39c(void)

{
  pid_t pVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  _StringGuts _Var6;
  char *pcVar7;
  size_t *psVar8;
  int *piVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String separator;
  size_t local_2d8;
  char acStack_2d0 [32];
  uint local_2b0;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _bzero(acStack_2d0,0x288);
  pcVar4 = &DAT_100faf800;
  FUN_1000f7830(&DAT_100faf800,&DAT_100c2e4a8);
  _swift_allocObject();
  pcVar4[0x18] = '\b';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x10] = '\x04';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  piVar9 = (int *)(pcVar4 + 0x20);
  piVar9[0] = 1;
  piVar9[1] = 0xe;
  pcVar4[0x28] = '\x01';
  pcVar4[0x29] = '\0';
  pcVar4[0x2a] = '\0';
  pcVar4[0x2b] = '\0';
  pVar1 = _getpid();
  *(pid_t *)(pcVar4 + 0x2c) = pVar1;
  local_2d8 = 0x288;
  pcVar5 = acStack_2d0;
  psVar8 = &local_2d8;
  _Var6.unknown = (undefined *)0x4;
  iVar2 = _sysctl(piVar9,4,pcVar5,psVar8,(void *)0x0,0);
  if (iVar2 == 0) {
    _swift_release(pcVar4);
    uVar3 = local_2b0 >> 0xb & 1;
  }
  else {
    Swift::_StringGuts::grow(0x3f,_Var6);
    SVar10.bridgeObject = (void *)0x8000000100d91900;
    SVar10.str = (char *)0xd00000000000003d;
    SVar12.bridgeObject = psVar8;
    SVar12.str = pcVar5;
    Swift::String::append(SVar10,SVar12);
    SVar10 = Swift::CustomStringConvertible::get_description();
    SVar13.bridgeObject = psVar8;
    SVar13.str = pcVar5;
    Swift::String::append(SVar10,SVar13);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar7 = (char *)0x7;
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      SVar14.bridgeObject = psVar8;
      SVar14.str = pcVar7;
      Swift::String::append((String)(ZEXT816(0xe000000000000000) << 0x40),SVar14);
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = '[';
      pcVar5[0x21] = 'P';
      pcVar5[0x22] = 'o';
      pcVar5[0x23] = 's';
      pcVar5[0x24] = 't';
      pcVar5[0x25] = 'H';
      pcVar5[0x26] = 'o';
      pcVar5[0x27] = 'g';
      pcVar5[0x28] = ']';
      pcVar5[0x29] = ' ';
      pcVar5[0x2a] = '\0';
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\0';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x16;
      SVar11.bridgeObject = (void *)0x20;
      SVar11.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar11,separator);
      _swift_release(pcVar4);
      pcVar4 = pcVar5;
    }
    _swift_release(pcVar4);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}



/* Address: 0x10010a5c4 | FUN_10010a5c4 */

bool FUN_10010a5c4(char *param_1,void *param_2)

{
  bool bVar1;
  ulong uVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  char *local_50;
  void *pvStack_48;
  
  if (param_2 == (void *)0x0) {
    return false;
  }
  SVar3.bridgeObject = &DAT_e800000000000000;
  SVar3.str = (char *)0x2f6d65747379532f;
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  bVar1 = Swift::String::hasPrefix(SVar3,SVar5);
  if (!bVar1) {
    SVar4.bridgeObject = (void *)0xe90000000000002f;
    SVar4.str = (char *)0x62696c2f7273752f;
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    bVar1 = Swift::String::hasPrefix(SVar4,SVar6);
    uVar2 = (ulong)bVar1;
    if (!bVar1) {
      local_60 = 0xd000000000000010;
      uStack_58 = 0x8000000100d91940;
      local_50 = param_1;
      pvStack_48 = param_2;
      FUN_1001013b8();
      bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,uVar2,uVar2);
      if (!bVar1) {
        local_60 = 0x62696c2f7273752f;
        uStack_58 = 0xe90000000000002f;
        local_50 = param_1;
        pvStack_48 = param_2;
        bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                           PTR___type_metadata_for_Swift_String_100eac208,uVar2,uVar2);
        return bVar1;
      }
    }
  }
  return true;
}



/* Address: 0x10010a6e0 | FUN_10010a6e0 */

/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_10010a6e0(char *param_1,void *param_2,ulong param_3,undefined8 param_4,long param_5)

{
  char *pcVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar7 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes;
  _swift_beginAccess(param_5 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppIncludes,auStack_78,0,
                     0);
  lVar7 = *(long *)(param_5 + lVar7);
  lVar8 = *(long *)(lVar7 + 0x10);
  _swift_bridgeObjectRetain(lVar7);
  uVar9 = 0xffffffffffffffff;
  puVar5 = (undefined8 *)(lVar7 + 0x28);
  do {
    if (uVar9 - lVar8 == -1) {
      _swift_bridgeObjectRelease(lVar7);
      lVar7 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes;
      _swift_beginAccess(param_5 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppExcludes,
                         auStack_90,0,0);
      lVar8 = *(long *)(param_5 + lVar7);
      lVar7 = *(long *)(lVar8 + 0x10);
      _swift_bridgeObjectRetain(lVar8);
      uVar9 = 0xffffffffffffffff;
      puVar5 = (undefined8 *)(lVar8 + 0x28);
      do {
        if (uVar9 - lVar7 == -1) {
          _swift_bridgeObjectRelease(lVar8);
          lVar7 = 0x2c;
          pcVar6 = s_Foundation_100faf0a0 + 8;
          do {
            lVar7 = lVar7 + -1;
            if (lVar7 == 0) {
              FUN_10010a5c4(param_3,param_4);
              lVar7 = _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault;
              if ((param_3 & 1) != 0) {
                return 0;
              }
              _swift_beginAccess(param_5 + _TtC7PostHog26PostHogErrorTrackingConfig::inAppByDefault,
                                 auStack_a8,0,0);
              return *(undefined1 *)(param_5 + lVar7);
            }
            pcVar1 = *(char **)(pcVar6 + -8);
            pvVar2 = *(void **)pcVar6;
            _swift_bridgeObjectRetain(pvVar2);
            SVar12.bridgeObject = pvVar2;
            SVar12.str = pcVar1;
            SVar15.bridgeObject = param_2;
            SVar15.str = param_1;
            bVar4 = Swift::String::hasPrefix(SVar12,SVar15);
            _swift_bridgeObjectRelease(pvVar2);
            pcVar6 = pcVar6 + 0x10;
          } while (!bVar4);
          return 0;
        }
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10010a918);
          (*pcVar3)();
        }
        pcVar6 = (char *)puVar5[-1];
        pvVar2 = (void *)*puVar5;
        _swift_bridgeObjectRetain(pvVar2);
        SVar11.bridgeObject = pvVar2;
        SVar11.str = pcVar6;
        SVar14.bridgeObject = param_2;
        SVar14.str = param_1;
        bVar4 = Swift::String::hasPrefix(SVar11,SVar14);
        _swift_bridgeObjectRelease(pvVar2);
        puVar5 = puVar5 + 2;
      } while (!bVar4);
      _swift_bridgeObjectRelease(lVar8);
      return 0;
    }
    uVar9 = uVar9 + 1;
    if (*(ulong *)(lVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010a914);
      (*pcVar3)();
    }
    pcVar6 = (char *)puVar5[-1];
    pvVar2 = (void *)*puVar5;
    _swift_bridgeObjectRetain(pvVar2);
    SVar10.bridgeObject = pvVar2;
    SVar10.str = pcVar6;
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    bVar4 = Swift::String::hasPrefix(SVar10,SVar13);
    _swift_bridgeObjectRelease(pvVar2);
    puVar5 = puVar5 + 2;
  } while (!bVar4);
  _swift_bridgeObjectRelease(lVar7);
  return 1;
}



/* Address: 0x10010a918 | FUN_10010a918 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10010a918(undefined *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  ulong uVar7;
  ID IVar8;
  NSString *self;
  _StringGuts _Var9;
  undefined *puVar11;
  _StringGuts _Var12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined8 local_e0;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined *local_a8;
  void *local_98;
  UnsafePointer<__int8> local_90;
  undefined8 uStack_88;
  UnsafePointer<__int8> local_80;
  undefined8 local_78;
  long local_68;
  _StringGuts _Var10;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var3.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var3.unknown = param_1;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = local_a8;
  if (uVar14 != 0) {
    param_3 = param_3 ^ 1;
    uVar13 = 0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10010ac88);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(param_1 + uVar13 * 8 + 0x20);
        }
        else {
          uVar7 = uVar13;
          FUN_10010eb70(uVar13,param_1);
        }
        uVar2 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10010ac84);
          (*pcVar4)();
        }
        IVar8 = objc_stub::unsignedIntegerValue(uVar7);
        uVar15 = IVar8 & 0xfffffffff;
        uStack_88 = 0;
        local_90.unknown = (undefined *)0x0;
        local_78 = 0;
        local_80.unknown = (undefined *)0x0;
        uVar7 = uVar15;
        _dladdr(uVar15,&local_90);
        if ((int)uVar7 != 0) break;
        uVar13 = uVar13 + 1;
        if (uVar2 == uVar14) goto LAB_10010acb0;
      }
      if (local_90.unknown == (undefined *)0x0) {
        local_c0 = 0;
        SVar17 = (String)ZEXT816(0);
        SVar16 = (String)ZEXT816(0);
        bVar5 = 0;
        local_c4 = 1;
LAB_10010ab4c:
        local_98 = SVar16.bridgeObject;
        bVar6 = local_80.unknown == (undefined *)0x0;
        if (bVar6) {
          local_e0 = 0;
          SVar18 = (String)ZEXT816(0);
        }
        else {
          SVar18 = Swift::String::init(local_80);
          local_e0 = local_78;
        }
        _swift_bridgeObjectRetain(SVar18.bridgeObject);
        _swift_bridgeObjectRetain(SVar17.bridgeObject);
        _swift_bridgeObjectRetain(local_98);
        puVar11 = local_a8;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar11 & 1) == 0) {
          plVar1 = (long *)(local_a8 + 0x10);
          local_a8 = (undefined *)0x0;
          FUN_100105528(0,*plVar1 + 1,1);
        }
        uVar13 = *(ulong *)(local_a8 + 0x10);
        if (*(ulong *)(local_a8 + 0x18) >> 1 <= uVar13) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(local_a8 + 0x18));
          FUN_100105528(puVar11,uVar13 + 1,1,local_a8);
          local_a8 = puVar11;
        }
        *(ulong *)(local_a8 + 0x10) = uVar13 + 1;
        *(ulong *)(local_a8 + uVar13 * 0x58 + 0x20) = uVar15;
        *(String *)(local_a8 + uVar13 * 0x58 + 0x28) = SVar17;
        *(String *)(local_a8 + uVar13 * 0x58 + 0x38) = SVar16;
        *(undefined8 *)(local_a8 + uVar13 * 0x58 + 0x48) = local_c0;
        local_a8[uVar13 * 0x58 + 0x50] = local_c4;
        local_a8[uVar13 * 0x58 + 0x51] = bVar5 & 1;
        *(String *)(local_a8 + uVar13 * 0x58 + 0x58) = SVar18;
        *(undefined8 *)(local_a8 + uVar13 * 0x58 + 0x68) = local_e0;
        local_a8[uVar13 * 0x58 + 0x70] = bVar6;
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        _swift_bridgeObjectRelease(local_98);
        _swift_bridgeObjectRelease(SVar18.bridgeObject);
        param_3 = 1;
      }
      else {
        SVar16 = Swift::String::init(local_90);
        self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::lastPathComponent((ID)self);
        SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var12.unknown = SVar17.bridgeObject;
        _Var9.unknown = SVar17.str;
        local_c0 = uStack_88;
        _Var10.unknown = _Var9.unknown;
        FUN_10010a6e0(_Var9.unknown,_Var12.unknown,SVar16.str,SVar16.bridgeObject,param_2);
        bVar5 = (byte)_Var10.unknown;
        if (((param_3 & 1) != 0 || _Var12.unknown == (undefined *)0x0) ||
           ((((_Var9.unknown != (undefined *)0x676f4874736f50 ||
              (_Var12.unknown != &DAT_e700000000000000)) &&
             (bVar6 = Swift::_stringCompareWithSmolCheck(_Var9,_Var12,(_StringComparisonResult)0x50)
             , !bVar6)) &&
            (SVar18.bridgeObject = &DAT_e800000000000000, SVar18.str = (char *)0x2e676f4874736f50,
            bVar6 = Swift::String::hasPrefix(SVar18,SVar17), !bVar6)))) {
          local_c4 = 0;
          goto LAB_10010ab4c;
        }
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        _swift_bridgeObjectRelease(_Var12.unknown);
        param_3 = 0;
      }
      uVar13 = uVar2;
    } while (uVar2 != uVar14);
  }
LAB_10010acb0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return local_a8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10010acf0 | _TtC7PostHog16PostHogLogRecord::body */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::body(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  NSString *pNVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = param_1 + body;
  _swift_beginAccess(lVar1,auStack_38,0,0);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  _swift_bridgeObjectRetain(uVar2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar2);
  return (ID)pNVar3;
}



/* Address: 0x10010ad58 | FUN_10010ad58 */

undefined1  [16] FUN_10010ad58(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC7PostHog16PostHogLogRecord::body);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10010adac | _TtC7PostHog16PostHogLogRecord::setBody: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setBody_(ID param_1,SEL param_2,ID param_3)

{
  String *pSVar1;
  String SVar2;
  undefined1 auStack_48 [24];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(param_1 + body);
  _swift_beginAccess(pSVar1,auStack_48,1,0);
  *pSVar1 = SVar2;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  return;
}



/* Address: 0x10010ae14 | FUN_10010ae14 */

void FUN_10010ae14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog16PostHogLogRecord::body);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10010ae70 | FUN_10010ae70 */

undefined1  [16] FUN_10010ae70(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::body;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::body,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010aeb0 | _TtC7PostHog16PostHogLogRecord::level */

/* Function Stack Size: 0x10 bytes */

long_long _TtC7PostHog16PostHogLogRecord::level(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = level;
  _swift_beginAccess(param_1 + level,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x10010aef4 | FUN_10010aef4 */

undefined8 FUN_10010aef4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::level;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::level,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010af34 | _TtC7PostHog16PostHogLogRecord::setLevel: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setLevel_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = level;
  _swift_beginAccess(param_1 + level,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010af84 | FUN_10010af84 */

void FUN_10010af84(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::level;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::level,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010afd0 | FUN_10010afd0 */

undefined1  [16] FUN_10010afd0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::level;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::level,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b010 | _TtC7PostHog16PostHogLogRecord::attributes */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::attributes(ID param_1,SEL param_2)

{
  long lVar1;
  NSDictionary *pNVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = attributes;
  _swift_beginAccess(param_1 + attributes,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar3);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  return (ID)pNVar2;
}



/* Address: 0x10010b08c | FUN_10010b08c */

void FUN_10010b08c(void)

{
  FUN_100104af0(&_TtC7PostHog16PostHogLogRecord::attributes);
  return;
}



/* Address: 0x10010b098 | _TtC7PostHog16PostHogLogRecord::setAttributes: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setAttributes_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar1 = attributes;
  _swift_beginAccess(param_1 + attributes,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = DVar2.unknown;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10010b118 | FUN_10010b118 */

void FUN_10010b118(undefined8 param_1)

{
  FUN_100104bb0(param_1,&_TtC7PostHog16PostHogLogRecord::attributes);
  return;
}



/* Address: 0x10010b124 | FUN_10010b124 */

undefined1  [16] FUN_10010b124(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::attributes;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::attributes,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b164 | _TtC7PostHog16PostHogLogRecord::traceId */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::traceId(ID param_1,SEL param_2)

{
  FUN_10010b4bc(param_1,param_2,&traceId);
  return param_1;
}



/* Address: 0x10010b170 | FUN_10010b170 */

void FUN_10010b170(void)

{
  FUN_10010b53c(&_TtC7PostHog16PostHogLogRecord::traceId);
  return;
}



/* Address: 0x10010b17c | _TtC7PostHog16PostHogLogRecord::setTraceId: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog16PostHogLogRecord::setTraceId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010b598();
  return;
}



/* Address: 0x10010b188 | FUN_10010b188 */

void FUN_10010b188(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&_TtC7PostHog16PostHogLogRecord::traceId);
  return;
}



/* Address: 0x10010b194 | FUN_10010b194 */

undefined1  [16] FUN_10010b194(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog16PostHogLogRecord::traceId;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog16PostHogLogRecord::traceId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010b1d4 | _TtC7PostHog16PostHogLogRecord::spanId */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog16PostHogLogRecord::spanId(ID param_1,SEL param_2)

{
  FUN_10010b4bc(param_1,param_2,&spanId);
  return param_1;
}



/* Address: 0x10010b1e0 | FUN_10010b1e0 */

void FUN_10010b1e0(void)

{
  FUN_10010b53c(&_TtC7PostHog16PostHogLogRecord::spanId);
  return;
}


