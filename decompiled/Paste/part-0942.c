/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a2df40 | FUN_100a2df40 */

void FUN_100a2df40(long param_1,ulong param_2)

{
  long lVar1;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_100a0de2c();
  if (param_2 < 0x40) {
    local_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &DAT_100c8e838;
    local_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_38 = &DAT_100c8e850;
    local_30 = &DAT_100c8e868;
    puStack_28 = &DAT_100c8e880;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100a2dfdc | FUN_100a2dfdc */

void FUN_100a2dfdc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  long unaff_x20;
  long lVar7;
  String SVar8;
  String SVar9;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [96];
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1d8 [8];
  char acStack_1d0 [96];
  undefined1 auStack_170 [24];
  undefined8 local_158;
  long lStack_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_d0 = param_2;
  _swift_errorRetain(param_2);
  iVar1 = 0xff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  _swift_dynamicCast();
  if (iVar1 == 0) {
    _swift_errorRelease(local_d0);
    lVar7 = *(long *)(unaff_x20 + 0x10);
    pvVar6 = (void *)0x0;
    _swift_beginAccess(lVar7 + 0x20,auStack_e8,0,0);
    FUN_100076688(lVar7 + 0x20,&local_c8);
    puVar3 = puStack_a8;
    uVar2 = local_b0;
    FUN_100004640(&local_c8,local_b0);
    (**(code **)(puVar3 + 0x70))(uVar2,puVar3);
    FUN_100004594(&local_c8);
    if (((uint)uVar2 & 0xff) < 6) {
      FUN_100076688(lVar7 + 0x20,auStack_170);
      FUN_100004640(auStack_170,local_158);
      puVar3 = &DAT_100ff46f0;
      FUN_1000f7830(&DAT_100ff46f0,&DAT_100c8dd80);
      pcVar5 = acStack_1d0;
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x726f727265;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined1 **)(puVar3 + 0x28) = &DAT_e500000000000000;
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      SVar9.bridgeObject = pvVar6;
      SVar9.str = pcVar5;
      Swift::String::reserveCapacity(2,SVar9);
      local_b0 = 0;
      puStack_a8 = (undefined *)0x0;
      local_b8 = 0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      _swift_getErrorValue(param_2,auStack_1d8,&local_1f0);
      FUN_1005c4024(local_1f0,uStack_1e8);
      *(undefined8 *)(puVar3 + 0x30) = local_c8;
      *(undefined8 *)(puVar3 + 0x38) = local_c0;
      puVar3[0x58] = 0;
      puVar4 = puVar3;
      FUN_100a0d8bc();
      _swift_setDeallocating(puVar3);
      FUN_100a0d9ec(puVar3 + 0x20);
      local_c8 = CONCAT71(local_c8._1_7_,5);
      local_c0 = 0xd000000000000014;
      local_b8 = 0x8000000100db82e0;
      local_b0 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0xd000000000000028;
      uStack_88 = 0x8000000100db8290;
      local_80 = 0xd00000000000001b;
      uStack_78 = 0x8000000100db82c0;
      local_70 = 0x1e;
      local_148[0] = 5;
      local_140 = 0xd000000000000014;
      uStack_138 = 0x8000000100db82e0;
      local_130 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0xd000000000000028;
      uStack_108 = 0x8000000100db8290;
      local_100 = 0xd00000000000001b;
      uStack_f8 = 0x8000000100db82c0;
      local_f0 = 0x1e;
      puStack_128 = puVar4;
      puStack_a8 = puVar4;
      FUN_1005bf638(&local_c8,auStack_250);
      FUN_1004eaa3c(local_148);
      (**(code **)(lStack_150 + 0x28))(&local_c8,local_158,lStack_150);
      FUN_1004eaa3c(&local_c8);
      FUN_100004594(auStack_170);
    }
    FUN_100626c9c(param_2);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x10);
    _swift_beginAccess(lVar7 + 0x20,auStack_e8,0,0);
    FUN_100076688(lVar7 + 0x20,&local_c8);
    puVar3 = puStack_a8;
    uVar2 = local_b0;
    FUN_100004640(&local_c8,local_b0);
    (**(code **)(puVar3 + 0x70))(uVar2,puVar3);
    FUN_100004594(&local_c8);
    if (((uint)uVar2 & 0xff) < 2) {
      FUN_100076688(lVar7 + 0x20,auStack_170);
      FUN_100004640(auStack_170,local_158);
      puVar3 = &DAT_100ff46f0;
      FUN_1000f7830(&DAT_100ff46f0,&DAT_100c8dd80);
      pcVar5 = (char *)0x60;
      pvVar6 = (void *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x726f727265;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined1 **)(puVar3 + 0x28) = &DAT_e500000000000000;
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      SVar8.bridgeObject = pvVar6;
      SVar8.str = pcVar5;
      Swift::String::reserveCapacity(2,SVar8);
      local_b0 = 0;
      puStack_a8 = (undefined *)0x0;
      local_b8 = 0;
      local_a0 = local_a0 & 0xffffffffffffff00;
      _swift_getErrorValue(param_2,auStack_258,&local_270);
      FUN_1005c4024(local_270,uStack_268);
      *(undefined8 *)(puVar3 + 0x30) = local_c8;
      *(undefined8 *)(puVar3 + 0x38) = local_c0;
      puVar3[0x58] = 0;
      puVar4 = puVar3;
      FUN_100a0d8bc();
      _swift_setDeallocating(puVar3);
      FUN_100a0d9ec(puVar3 + 0x20);
      _swift_deallocClassInstance(puVar3,0x20,7);
      local_c8 = CONCAT71(local_c8._1_7_,1);
      local_c0 = 0xd000000000000014;
      local_b8 = 0x8000000100db82e0;
      local_b0 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0xd000000000000028;
      uStack_88 = 0x8000000100db8290;
      local_80 = 0xd00000000000001b;
      uStack_78 = 0x8000000100db82c0;
      local_70 = 0x1c;
      local_148[0] = 1;
      local_140 = 0xd000000000000014;
      uStack_138 = 0x8000000100db82e0;
      local_130 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0xd000000000000028;
      uStack_108 = 0x8000000100db8290;
      local_100 = 0xd00000000000001b;
      uStack_f8 = 0x8000000100db82c0;
      local_f0 = 0x1c;
      puStack_128 = puVar4;
      puStack_a8 = puVar4;
      FUN_1005bf638(&local_c8,auStack_250);
      FUN_1004eaa3c(local_148);
      (**(code **)(lStack_150 + 0x28))(&local_c8,local_158,lStack_150);
      FUN_1004eaa3c(&local_c8);
      FUN_100004594(auStack_170);
    }
    _swift_errorRelease(local_d0);
  }
  return;
}



/* Address: 0x100a2e464 | FUN_100a2e464 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a2e464(void)

{
  return ZEXT816(0x100ff5328);
}



/* Address: 0x100a2e484 | FUN_100a2e484 */

void FUN_100a2e484(void)

{
  FUN_100a1f064(&DAT_100ef1a40);
  return;
}



/* Address: 0x100a2e4ac | FUN_100a2e4ac */

void FUN_100a2e4ac(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1[3] = &DAT_100ef1a40;
  puVar1 = &DAT_100f29288;
  _swift_allocObject(&DAT_100f29288,0x52,7);
  *param_1 = puVar1;
  FUN_1005e650c(param_2,puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  return;
}



/* Address: 0x100a2e504 | thunk_FUN_100a2dfdc */

void thunk_FUN_100a2dfdc(void)

{
  FUN_100a2dfdc();
  return;
}



/* Address: 0x100a2e508 | FUN_100a2e508 */

void FUN_100a2e508(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2e5a0 | _objc_retain */

/* WARNING: This is an inlined function */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 _objc_retain(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100a2e5a4 | FUN_100a2e5a4 */

void FUN_100a2e5a4(undefined1 *param_1)

{
  long unaff_x21;
  
  FUN_100a2efb0();
  if ((unaff_x21 == 0) && (param_1 == (undefined1 *)0x0)) {
    FUN_100a2f380();
    _swift_allocError(&DAT_100f293f8,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100a2e600 | FUN_100a2e600 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100a2e600(void)

{
  URL UVar1;
  Data DVar2;
  NSData *pNVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  Foundation::URL::_init();
  uVar5 = 0;
  DVar2 = Foundation::Data::_init
                    ((NSDataReadingOptions)
                     (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  if (unaff_x21 == 0) {
    pNVar3 = Foundation::Data::_bridgeToObjectiveC(DVar2);
    lVar6 = 0;
    _SecCertificateCreateWithData(0,pNVar3);
    puVar4 = (undefined1 *)0x0;
    if (lVar6 == 0) {
      FUN_100a2f380();
      _swift_allocError(&DAT_100f293f8,puVar4,0,0);
      *puVar4 = 0;
      _swift_willThrow();
      FUN_10003bf2c(DVar2.unknown,uVar5);
    }
    else {
      FUN_100a2ef4c();
      FUN_10003bf2c(DVar2.unknown,uVar5);
      _swift_allocObject(puVar4,((ulong)*(uint *)(puVar4 + 0x30) + 7 & 0x1fffffff8) + 8,
                         *(ushort *)(puVar4 + 0x34) | 7);
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(long *)(puVar4 + 0x20) = lVar6;
    }
  }
  return;
}



/* Address: 0x100a2e764 | FUN_100a2e764 */

Options * FUN_100a2e764(Options *param_1)

{
  Options *pOVar1;
  Options *pOVar2;
  
  pOVar1 = Network::NWProtocolTLS::Options::typeMetadataAccessor();
  _swift_allocObject(pOVar1,*(undefined4 *)(pOVar1 + 0x30),*(undefined2 *)(pOVar1 + 0x34));
  pOVar1 = Network::NWProtocolTLS::Options::init(pOVar1);
  _sec_identity_create();
  if (param_1 == (Options *)0x0) {
    _swift_release(pOVar1);
    pOVar1 = (Options *)&DAT_00000001;
  }
  else {
    pOVar2 = param_1;
    Network::NWProtocolTLS::Options::_get_securityProtocolOptions(pOVar1,param_1);
    _sec_protocol_options_set_local_identity();
    _swift_unknownObjectRelease(pOVar2);
    _swift_unknownObjectRelease(param_1);
  }
  return pOVar1;
}



/* Address: 0x100a2e7ec | FUN_100a2e7ec */

Options * FUN_100a2e7ec(Options *param_1,undefined *param_2,char *param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  Options *pOVar2;
  ContiguousArray<__int8> CVar3;
  Options *pOVar4;
  undefined *puVar5;
  void *aBlock;
  String SVar6;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  pOVar2 = Network::NWProtocolTLS::Options::typeMetadataAccessor();
  _swift_allocObject(pOVar2,*(undefined4 *)(pOVar2 + 0x30),*(undefined2 *)(pOVar2 + 0x34));
  pOVar2 = Network::NWProtocolTLS::Options::init(pOVar2);
  _sec_identity_create();
  if (param_1 == (Options *)0x0) {
    _swift_release(pOVar2);
    pOVar2 = (Options *)&DAT_00000001;
  }
  else {
    pOVar4 = param_1;
    Network::NWProtocolTLS::Options::_get_securityProtocolOptions(pOVar2,param_1);
    _sec_protocol_options_set_local_identity();
    _swift_unknownObjectRelease();
    if (param_4 != (void *)0x0) {
      Network::NWProtocolTLS::Options::_get_securityProtocolOptions(pOVar2,pOVar4);
      SVar6.bridgeObject = param_4;
      SVar6.str = param_3;
      CVar3 = Swift::String::get_utf8CString(SVar6);
      _sec_protocol_options_set_tls_server_name(pOVar4,CVar3.unknown + 0x20);
      _swift_release(CVar3.unknown);
      _swift_unknownObjectRelease();
    }
    Network::NWProtocolTLS::Options::_get_securityProtocolOptions(pOVar2,pOVar4);
    _sec_protocol_options_set_local_identity();
    _swift_unknownObjectRelease(pOVar4);
    if ((ulong)param_2 >> 0x3e == 0) {
      pOVar4 = *(Options **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_2) {
        _Var1.unknown = param_2;
      }
      pOVar4 = (Options *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (0 < (long)pOVar4) {
      Network::NWProtocolTLS::Options::_get_securityProtocolOptions(pOVar2,pOVar4);
      puVar5 = &DAT_100f292d0;
      _swift_allocObject(&DAT_100f292d0,0x18,7);
      *(undefined **)(puVar5 + 0x10) = param_2;
      local_50 = FUN_100a2f3e4;
      local_70 = PTR___NSConcreteStackBlock_100ea82a0;
      local_68 = 0x42000000;
      local_60 = FUN_100a2ecf0;
      puStack_58 = &DAT_100f292e8;
      local_48 = puVar5;
      aBlock = __Block_copy(&local_70);
      puVar5 = local_48;
      _swift_bridgeObjectRetain(param_2);
      _swift_release(puVar5);
      if (DAT_100ff53e0 != -1) {
        _swift_once(&DAT_100ff53e0,FUN_100a2ed98);
      }
      _sec_protocol_options_set_verify_block(pOVar4,aBlock,DAT_1010582b8);
      _swift_unknownObjectRelease(param_1);
      __Block_release(aBlock);
      param_1 = pOVar4;
    }
    _swift_unknownObjectRelease(param_1);
  }
  return pOVar2;
}



/* Address: 0x100a2e9dc | FUN_100a2e9dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100a2e9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  NSArray *pNVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  _sec_trust_copy_ref(param_2);
  FUN_1009e1e4c(0);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _SecTrustSetAnchorCertificates(param_2,pNVar2);
  if (DAT_100ff53e0 != -1) {
    _swift_once(&DAT_100ff53e0,FUN_100a2ed98);
  }
  uVar1 = DAT_1010582b8;
  puVar3 = &DAT_100f295b8;
  _swift_allocObject(&DAT_100f295b8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  local_50 = FUN_100a2f5a8;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100a2ec70;
  puStack_58 = &DAT_100f295d0;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  puVar3 = local_48;
  _swift_retain(param_4);
  _swift_release(puVar3);
  _SecTrustEvaluateAsyncWithError(param_2,uVar1,aBlock);
  __Block_release(aBlock);
  return 0;
}



/* Address: 0x100a2eb10 | FUN_100a2eb10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100a2eb10(undefined8 param_1,uint param_2,long param_3,code *param_4)

{
  char *pcVar1;
  _StringGuts _Var2;
  char *pcVar3;
  code *pcVar4;
  String SVar5;
  String SVar6;
  String separator;
  
  if (param_3 != 0) {
    pcVar1 = &DAT_100ff5410;
    pcVar4 = param_4;
    FUN_1000f7830(&DAT_100ff5410,&DAT_100c8ea20);
    _Var2.unknown = (undefined *)0x40;
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    Swift::_StringGuts::grow(0x10,_Var2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1009e1e74(0);
    pcVar3 = PTR_Foundation____C__CFErrorRef_>Swift__Error_100ea78f8;
    FUN_100003a00(&DAT_100ff5418,FUN_1009e1e74);
    SVar5 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar6.bridgeObject = pcVar4;
    SVar6.str = pcVar3;
    Swift::String::append(SVar5,SVar6);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'T';
    pcVar1[0x21] = 'r';
    pcVar1[0x22] = 'u';
    pcVar1[0x23] = 's';
    pcVar1[0x24] = 't';
    pcVar1[0x25] = ' ';
    pcVar1[0x26] = 'f';
    pcVar1[0x27] = 'a';
    pcVar1[0x28] = 'i';
    pcVar1[0x29] = 'l';
    pcVar1[0x2a] = 'e';
    pcVar1[0x2b] = 'd';
    pcVar1[0x2c] = ':';
    pcVar1[0x2d] = ' ';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x12;
    SVar5.bridgeObject = (void *)0x20;
    SVar5.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar5,separator);
    _swift_release(pcVar1);
  }
  (*param_4)(param_2 & 1);
  return;
}



/* Address: 0x100a2ec70 | FUN_100a2ec70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100a2ec70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3,param_4);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x100a2ecf0 | FUN_100a2ecf0 */

void FUN_100a2ecf0(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined *puVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  pvVar3 = __Block_copy(param_4);
  puVar4 = &DAT_100f29590;
  _swift_allocObject(&DAT_100f29590,0x18,7);
  *(void **)(puVar4 + 0x10) = pvVar3;
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  _swift_unknownObjectRetain(param_3);
  (*pcVar1)(param_2,param_3,FUN_100a2f570,puVar4);
  _swift_release(uVar2);
  _swift_unknownObjectRelease(param_2);
  _swift_unknownObjectRelease(param_3);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100a2ed98 | FUN_100a2ed98 */

void FUN_100a2ed98(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  Attributes attributes;
  long lVar8;
  String label;
  undefined1 auStack_70 [8];
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar8 = *(long *)(CONCAT71(extraout_var,AVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar5 = PTR__typeMetadataAccessor_100eae788;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar2.unknown + -8) + 0x40));
  attributes.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  DVar3.unknown = (undefined *)0x0;
  FUN_100a2f4b8();
  Dispatch::DispatchQoS::get_unspecified(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = &DAT_100ff53f8;
  FUN_100003a00(&DAT_100ff53f8,puVar5,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar5 = &DAT_100ff5400;
  FUN_1000f7830(&DAT_100ff5400,&DAT_100c8ea18);
  puVar6 = puVar5;
  FUN_100a2f4fc();
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar5,puVar6,AVar2.unknown,puVar4);
  (**(code **)(lVar8 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,CONCAT71(extraout_var,AVar1.value));
  label.bridgeObject = (void *)0x8000000100db8300;
  label.str = (char *)0xd000000000000012;
  DAT_1010582b8 =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 ((OS_dispatch_queue *)DVar3.unknown,label,
                  (DispatchQoS)(attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                  attributes,(AutoreleaseFrequency)(__int8)puVar7);
  return;
}



/* Address: 0x100a2ef4c | FUN_100a2ef4c */

void FUN_100a2ef4c(void)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_1009e1e4c();
    if (lVar2 != 0) {
      FUN_1000f7830(&DAT_100ff5428,&DAT_100c8ea30);
      return;
    }
  }
  FUN_1000f7830(&DAT_100ff5420,&DAT_100c8ea28);
  return;
}



/* Address: 0x100a2efb0 | FUN_100a2efb0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_100a2efb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  URL UVar2;
  Data DVar3;
  undefined *puVar4;
  undefined *puVar5;
  NSData *pNVar6;
  NSDictionary *pNVar7;
  undefined1 *puVar8;
  NSArray *pNVar9;
  undefined8 uVar10;
  void *pvVar11;
  long extraout_x8;
  int iVar12;
  long lVar13;
  long unaff_x21;
  long lVar14;
  String SVar15;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long local_c8;
  long local_c0 [4];
  NSArray *local_a0 [9];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  Foundation::URL::_init();
  uVar10 = 0;
  DVar3 = Foundation::Data::_init
                    ((NSDataReadingOptions)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
                    );
  (**(code **)(lVar14 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  if (unaff_x21 != 0) goto LAB_100a2f29c;
  puVar4 = &DAT_100ff5430;
  FUN_1000f7830(&DAT_100ff5430,&DAT_100c8ea38);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar4 + 0x20) = SVar15;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  _swift_bridgeObjectRetain(param_4);
  puVar5 = puVar4;
  FUN_100a0dc04(puVar4);
  _swift_setDeallocating(puVar4);
  FUN_1000fb4c4((String *)(puVar4 + 0x20),&DAT_100ff5438,&DAT_100c8ea40);
  local_a0[0] = (NSArray *)0x0;
  pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar3);
  pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  _SecPKCS12Import(pNVar6,pNVar7,local_a0);
  puVar8 = (undefined1 *)0x0;
  iVar12 = (int)pNVar6;
  if (iVar12 == -0x62dc) {
    param_4 = 1;
  }
  else {
    if (iVar12 == 0) {
      if (local_a0[0] == (NSArray *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a2f37c);
        (*pcVar1)();
      }
      pNVar9 = local_a0[0];
      _swift_dynamicCastObjCClassUnconditional(local_a0[0],&_OBJC_CLASS___NSArray,0,0,0);
      local_c0[0] = 0;
      FUN_1000f7830(&DAT_100ff5440,&DAT_100c8ea48);
      (extension_Foundation)::Swift::Array<undefined>::__forceBridgeFromObjectiveC(pNVar9);
      lVar14 = local_c0[0];
      if (local_c0[0] == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a2f380);
        (*pcVar1)();
      }
      if (*(long *)(local_c0[0] + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a2f374);
        (*pcVar1)();
      }
      lVar13 = *(long *)(local_c0[0] + 0x20);
      _swift_bridgeObjectRetain(lVar13);
      _swift_bridgeObjectRelease(lVar14);
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar11 = SVar15.bridgeObject;
      if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100a2f2e0:
        uStack_d8 = 0;
        local_e0 = 0;
        local_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar13);
        FUN_100071370(SVar15.str);
        if (((ulong)SVar15.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(lVar13);
          goto LAB_100a2f2e0;
        }
        FUN_10000cbfc(*(long *)(lVar13 + 0x38) + (long)SVar15.str * 0x20,&local_e0);
        _swift_bridgeObjectRelease(lVar13);
      }
      FUN_10003bf2c(DVar3.unknown,uVar10);
      _swift_bridgeObjectRelease(lVar13);
      _swift_bridgeObjectRelease(pvVar11);
      if (local_c8 == 0) {
        FUN_1000fb4c4(&local_e0,&DAT_100ff5448,&DAT_100c8ea50);
        param_4 = 0;
      }
      else {
        FUN_100011080(&local_e0,local_c0);
        uVar10 = 0;
        FUN_1009e1e60(0);
        _swift_dynamicCast(&local_e8,local_c0,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar10,7);
        param_4 = local_e8;
      }
      goto LAB_100a2f29c;
    }
    if (iVar12 == -0x62b0) {
      param_4 = 2;
    }
    else {
      param_4 = 0;
    }
  }
  FUN_100a2f380();
  _swift_allocError(&DAT_100f293f8,puVar8,0,0);
  *puVar8 = (char)param_4;
  _swift_willThrow();
  FUN_10003bf2c(DVar3.unknown,uVar10);
LAB_100a2f29c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_4;
}



/* Address: 0x100a2f380 | FUN_100a2f380 */

void FUN_100a2f380(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff53d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8e908;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e908,&DAT_100f293f8);
  DAT_100ff53d8 = pTVar1;
  return;
}



/* Address: 0x100a2f3c0 | FUN_100a2f3c0 */

void FUN_100a2f3c0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2f3e4 | FUN_100a2f3e4 */

void FUN_100a2f3e4(void)

{
  FUN_100a2e9dc();
  return;
}



/* Address: 0x100a2f3ec | FUN_100a2f3ec */

void FUN_100a2f3ec(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100a2f400 | FUN_100a2f400 */

void FUN_100a2f400(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100a2f408 | FUN_100a2f408 */

void FUN_100a2f408(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100a2f414 | FUN_100a2f414 */

undefined1  [16] FUN_100a2f414(void)

{
  return ZEXT816(0x100f29378);
}



/* Address: 0x100a2f424 | FUN_100a2f424 */

undefined1  [16] FUN_100a2f424(void)

{
  return ZEXT816(0x100f293f8);
}



/* Address: 0x100a2f434 | FUN_100a2f434 */

undefined1  [16] FUN_100a2f434(void)

{
  return ZEXT816(0x100f29420);
}



/* Address: 0x100a2f444 | FUN_100a2f444 */

undefined1  [16] FUN_100a2f444(void)

{
  return ZEXT816(0x100f29448);
}



/* Address: 0x100a2f454 | FUN_100a2f454 */

undefined1  [16] FUN_100a2f454(void)

{
  return ZEXT816(0x100f294e0);
}



/* Address: 0x100a2f464 | FUN_100a2f464 */

undefined1  [16] FUN_100a2f464(void)

{
  return ZEXT816(0x100f29570);
}



/* Address: 0x100a2f474 | thunk_FUN_100a2f478 */

void thunk_FUN_100a2f478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff53e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8e9b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e9b0,&DAT_100f294e0);
  DAT_100ff53e8 = pTVar1;
  return;
}



/* Address: 0x100a2f478 | FUN_100a2f478 */

void FUN_100a2f478(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff53e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8e9b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e9b0,&DAT_100f294e0);
  DAT_100ff53e8 = pTVar1;
  return;
}



/* Address: 0x100a2f4b8 | FUN_100a2f4b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100a2f4b8(void)

{
  undefined *puVar1;
  
  if (DAT_100ff53f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100ff53f0 = puVar1;
  return;
}



/* Address: 0x100a2f4fc | FUN_100a2f4fc */

void FUN_100a2f4fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff5408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff5400;
  FUN_1000f8b08(&DAT_100ff5400,&DAT_100c8ea18);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100ff5408 = puVar2;
  return;
}



/* Address: 0x100a2f54c | FUN_100a2f54c */

void FUN_100a2f54c(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2f570 | FUN_100a2f570 */

void FUN_100a2f570(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100a2f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Address: 0x100a2f584 | FUN_100a2f584 */

void FUN_100a2f584(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2f5a8 | FUN_100a2f5a8 */

void FUN_100a2f5a8(void)

{
  FUN_100a2eb10();
  return;
}



/* Address: 0x100a2f5b0 | thunk_FUN_100a2f3ec */

void thunk_FUN_100a2f3ec(void)

{
  FUN_100a2f3ec();
  return;
}



/* Address: 0x100a2f5b4 | thunk_FUN_100a2f400 */

void thunk_FUN_100a2f400(void)

{
  FUN_100a2f400();
  return;
}



/* Address: 0x100a2f5b8 | thunk_FUN_10044b95c */

void thunk_FUN_10044b95c(void)

{
  FUN_10044b95c();
  return;
}



/* Address: 0x100a2f5bc | FUN_100a2f5bc */

undefined1  [16]
FUN_100a2f5bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  pcVar6 = *(code **)(lVar4 + 0x20);
  (*pcVar6)(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100f29668;
  _swift_allocObject(&DAT_100f29668,uVar5 + lVar3,uVar2 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(long *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  (*pcVar6)(puVar1 + uVar5,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3);
  auVar7._8_8_ = puVar1;
  auVar7._0_8_ = FUN_100a2f824;
  return auVar7;
}



/* Address: 0x100a2f680 | FUN_100a2f680 */

void FUN_100a2f680(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a2f6e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x100a2f6ec | FUN_100a2f6ec */

undefined1  [16]
FUN_100a2f6ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  uVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_4);
  _swift_allocBox();
  (**(code **)(lVar3 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar2 = &DAT_100f29740;
  _swift_allocObject(&DAT_100f29740,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(long *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = uVar1;
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = &DAT_100c8eb88;
  return auVar4;
}



/* Address: 0x100a2f7d4 | FUN_100a2f7d4 */

void FUN_100a2f7d4(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2f824 | FUN_100a2f824 */

void FUN_100a2f824(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  FUN_100a2f6ec(unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)),
                *(undefined8 *)(unaff_x20 + 0x10),*(long *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100a2f844 | FUN_100a2f844 */

void FUN_100a2f844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  _swift_projectBox();
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  _swift_task_switch(FUN_100a2f8c0,0,0);
  return;
}



/* Address: 0x100a2f8c0 | FUN_100a2f8c0 */

void FUN_100a2f8c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_beginAccess(*(undefined8 *)(unaff_x22 + 0x48),unaff_x22 + 0x10,0x21,0);
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a2f964;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a2f964 | FUN_100a2f964 */

void FUN_100a2f964(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a2f9d8,0,0);
    return;
  }
  _swift_endAccess(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a2f9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a2f9d8 | FUN_100a2f9d8 */

void FUN_100a2f9d8(void)

{
  long unaff_x22;
  
  _swift_endAccess(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a2fa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a2fa14 | FUN_100a2fa14 */

void FUN_100a2fa14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a2f680(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100a2fa80 | FUN_100a2fa80 */

void FUN_100a2fa80(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ea78,param_1);
  return;
}



/* Address: 0x100a2fa90 | FUN_100a2fa90 */

void FUN_100a2fa90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar1;
  FUN_10009df20();
  _swift_release(uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Address: 0x100a2fad4 | FUN_100a2fad4 */

void FUN_100a2fad4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a2fae0 | FUN_100a2fae0 */

void FUN_100a2fae0(void)

{
  Optional OVar1;
  undefined8 uVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar2 = 0x25000000;
  _swift_getFunctionTypeMetadata0(0x25000000,OVar1.value);
  _swift_getFunctionTypeMetadata0(0x44000000,uVar2);
  return;
}



/* Address: 0x100a2fb10 | thunk_FUN_1000da61c */

void thunk_FUN_1000da61c(void)

{
  FUN_1000da61c();
  return;
}



/* Address: 0x100a2fb14 | FUN_100a2fb14 */

void FUN_100a2fb14(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a2fb20 | FUN_100a2fb20 */

void FUN_100a2fb20(void)

{
  Optional OVar1;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  _swift_getFunctionTypeMetadata0(0x25000000,OVar1.value);
  return;
}



/* Address: 0x100a2fb44 | FUN_100a2fb44 */

void FUN_100a2fb44(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2fb68 | FUN_100a2fb68 */

void FUN_100a2fb68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a2f844(plVar5,param_1,uVar4,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x100a2fbf4 | thunk_FUN_1003fc7f4 */

void thunk_FUN_1003fc7f4(void)

{
  FUN_1003fc7f4();
  return;
}



/* Address: 0x100a2fbf8 | thunk_FUN_1000d0d74 */

void thunk_FUN_1000d0d74(void)

{
  thunk_FUN_1000d0d74();
  return;
}



/* Address: 0x100a2fbfc | thunk_FUN_1000da61c */

void thunk_FUN_1000da61c(void)

{
  thunk_FUN_1000da61c();
  return;
}


