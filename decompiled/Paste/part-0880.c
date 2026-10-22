/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100983148 | thunk_FUN_100982c4c */

void thunk_FUN_100982c4c(void)

{
  thunk_FUN_100982c4c();
  return;
}



/* Address: 0x10098314c | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  thunk_FUN_100982b98();
  return;
}



/* Address: 0x100983150 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x100983154 | thunk_FUN_100982f5c */

void thunk_FUN_100982f5c(void)

{
  FUN_100982f5c();
  return;
}



/* Address: 0x100983158 | thunk_FUN_100982f5c */

void thunk_FUN_100982f5c(void)

{
  FUN_100982f5c();
  return;
}



/* Address: 0x10098315c | thunk_FUN_100982f5c */

void thunk_FUN_100982f5c(void)

{
  FUN_100982f5c();
  return;
}



/* Address: 0x100983160 | thunk_FUN_100982f5c */

void thunk_FUN_100982f5c(void)

{
  FUN_100982f5c();
  return;
}



/* Address: 0x100983164 | thunk_FUN_100982fb8 */

void thunk_FUN_100982fb8(void)

{
  FUN_100982fb8();
  return;
}



/* Address: 0x100983168 | thunk_FUN_100982f5c */

void thunk_FUN_100982f5c(void)

{
  FUN_100982f5c();
  return;
}



/* Address: 0x10098316c | thunk_FUN_100982fc8 */

void thunk_FUN_100982fc8(void)

{
  FUN_100982fc8();
  return;
}



/* Address: 0x100983170 | thunk_FUN_1009806c8 */

void thunk_FUN_1009806c8(void)

{
  long unaff_x20;
  
  FUN_1008f1f44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100983174 | FUN_100983174 */

void FUN_100983174(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined *param_5)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar5;
  undefined8 uVar6;
  _StringGuts _Var7;
  char *pcVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  StaticString local_70;
  __uint64 _Stack_68;
  long lVar4;
  
  _Var7.unknown = (undefined *)0x0;
  pcVar8 = (char *)0x0;
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xe,0,0);
  if ((bVar2 & 1) != 0) {
    lVar10 = *(long *)(param_3 + -8);
    lVar9 = (long)&local_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar4 = lVar9;
    (**(code **)(lVar10 + 0x10))(lVar9,param_2,param_3);
    iVar3 = (int)lVar4;
    param_5 = &DAT_100f208a0;
    pcVar8 = param_3;
    _swift_dynamicCast();
    if (iVar3 != 0) {
      local_70.unknown = *(undefined **)(unaff_x20 + 0x60);
      _swift_retain();
      puVar5 = &DAT_100ff0d50;
      FUN_1000f7830(&DAT_100ff0d50,&DAT_100c897f0);
      uVar6 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      _swift_dynamicCast(param_1,&local_70,puVar5,uVar6,7);
      (**(code **)(lVar10 + 8))(lVar9,param_3);
      return;
    }
    _Var7.unknown = param_3;
    (**(code **)(lVar10 + 8))(lVar9);
  }
  local_70.unknown = (undefined *)0x0;
  _Stack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1a,_Var7);
  SVar11.bridgeObject = &DAT_e700000000000000;
  SVar11.str = (char *)0x206e6f6974706f;
  SVar15.bridgeObject = param_5;
  SVar15.str = pcVar8;
  Swift::String::append(SVar11,SVar15);
  pcVar8 = (char *)0x0;
  uVar6 = param_2;
  _swift_getDynamicType(param_2,param_3);
  SVar11 = Swift::__typeName(SUB81(uVar6,0));
  SVar16.bridgeObject = param_5;
  SVar16.str = pcVar8;
  Swift::String::append(SVar11,SVar16);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = (void *)0xe100000000000000;
  SVar12.str = (char *)0x2e;
  SVar17.bridgeObject = param_5;
  SVar17.str = pcVar8;
  Swift::String::append(SVar12,SVar17);
  Swift::DefaultStringInterpolation::_appendInterpolation(param_2,param_3);
  SVar13.bridgeObject = (void *)0xee00646574726f70;
  SVar13.str = (char *)0x70757320746f6e20;
  SVar18.bridgeObject = param_5;
  SVar18.str = pcVar8;
  Swift::String::append(SVar13,SVar18);
  SVar14.bridgeObject = (void *)0x2;
  SVar14.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar14,local_70,_Stack_68,0xdb6e30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100983388);
  (*pcVar1)();
}



/* Address: 0x100983388 | FUN_100983388 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100983388(void)

{
  undefined8 uVar1;
  long lVar2;
  MultipathServiceType MVar3;
  undefined7 extraout_var;
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(*(undefined8 *)(unaff_x20 + 200));
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf8);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0xf0));
  FUN_1005d8534(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x100));
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::multipathServiceType;
  MVar3 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,MVar3.value) + -8) + 8))
            (unaff_x20 + lVar2,CONCAT71(extraout_var,MVar3.value));
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::
                 nwParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::nwParametersConfigurator
                ))[1]);
  return;
}



/* Address: 0x100983454 | FUN_100983454 */

void FUN_100983454(void)

{
  FUN_100983388();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100983478 | FUN_100983478 */

void FUN_100983478(void)

{
  FUN_100983480(0);
  return;
}



/* Address: 0x100983480 | FUN_100983480 */

void FUN_100983480(undefined8 param_1)

{
  if (DAT_100ff09a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc7444);
  return;
}



/* Address: 0x1009834b8 | FUN_1009834b8 */

void FUN_1009834b8(long param_1,ulong param_2)

{
  MultipathServiceType MVar1;
  undefined7 extraout_var;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  undefined *puStack_38;
  
  local_108 = &DAT_100c89620;
  puStack_100 = &DAT_100c89638;
  puStack_f0 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_f8 = &DAT_100c89650;
  local_e8 = &DAT_100c89668;
  puStack_d0 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_d8 = &DAT_100c89668;
  puStack_c0 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_b8 = &DAT_100c89668;
  local_a8 = &DAT_100c89668;
  puStack_a0 = &DAT_100c89680;
  puStack_90 = &DAT_100c89620;
  local_88 = &DAT_100c89698;
  puStack_80 = &DAT_100c896b0;
  local_78 = &DAT_100c896c8;
  puStack_70 = &DAT_100c89620;
  local_68 = &DAT_100c89620;
  puStack_60 = &DAT_100c89620;
  local_58 = &DAT_100c896e0;
  local_48 = &DAT_100c89620;
  puStack_e0 = puStack_f0;
  local_c8 = puStack_d0;
  puStack_b0 = puStack_f0;
  local_98 = puStack_f0;
  puStack_50 = puStack_f0;
  MVar1 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(CONCAT71(extraout_var,MVar1.value) + -8) + 0x40;
    puStack_38 = &DAT_100c89650;
    _swift_updateClassMetadata2(param_1,0x100,0x1b,&local_108,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1009835c8 | FUN_1009835c8 */

void FUN_1009835c8(void)

{
  FUN_1009835d0(0);
  return;
}



/* Address: 0x1009835d0 | FUN_1009835d0 */

void FUN_1009835d0(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff0950 == 0) {
    lVar2 = 0xff;
    FUN_100982e04();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100ff0950 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100983624 | FUN_100983624 */

void FUN_100983624(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100983630 | FUN_100983630 */

void FUN_100983630(void)

{
  return;
}



/* Address: 0x100983634 | FUN_100983634 */

undefined1  [16] FUN_100983634(void)

{
  return ZEXT816(0x100f1fb48);
}



/* Address: 0x100983644 | thunk_FUN_100983648 */

void thunk_FUN_100983648(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0b00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89764;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89764,&DAT_100f1fb48);
  DAT_100ff0b00 = pTVar1;
  return;
}



/* Address: 0x100983648 | FUN_100983648 */

void FUN_100983648(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0b00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89764;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89764,&DAT_100f1fb48);
  DAT_100ff0b00 = pTVar1;
  return;
}



/* Address: 0x100983688 | FUN_100983688 */

void FUN_100983688(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x88);
  _swift_retain();
  return;
}



/* Address: 0x100983694 | FUN_100983694 */

void FUN_100983694(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  return;
}



/* Address: 0x10098369c | FUN_10098369c */

undefined8 FUN_10098369c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x70);
}



/* Address: 0x1009836a4 | FUN_1009836a4 */

void FUN_1009836a4(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  return;
}



/* Address: 0x1009836ac | FUN_1009836ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1009836ac(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x78);
}



/* Address: 0x1009836b4 | FUN_1009836b4 */

uint FUN_1009836b4(void)

{
  uint uVar1;
  uint uVar2;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0xa9,auStack_28,0,0);
  uVar1 = 0x10000;
  if (*(char *)(unaff_x20 + 0xab) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if (*(char *)(unaff_x20 + 0xaa) == '\0') {
    uVar2 = 0;
  }
  return uVar2 | *(byte *)(unaff_x20 + 0xa9) | uVar1;
}



/* Address: 0x10098370c | FUN_10098370c */

undefined1  [16] FUN_10098370c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xa9,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xa9;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10098373c | FUN_10098373c */

void FUN_10098373c(void)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 200,auStack_48,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 200));
  return;
}



/* Address: 0x100983790 | FUN_100983790 */

undefined1  [16] FUN_100983790(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 200,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 200;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1009837c0 | FUN_1009837c0 */

undefined1 FUN_1009837c0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xe8);
}



/* Address: 0x1009837c8 | FUN_1009837c8 */

void FUN_1009837c8(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xe8) = param_1;
  return;
}



/* Address: 0x1009837d0 | FUN_1009837d0 */

undefined1 FUN_1009837d0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xe9);
}



/* Address: 0x1009837d8 | FUN_1009837d8 */

void FUN_1009837d8(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xe9) = param_1;
  return;
}



/* Address: 0x1009837e0 | FUN_1009837e0 */

undefined1 FUN_1009837e0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xea);
}



/* Address: 0x1009837e8 | FUN_1009837e8 */

void FUN_1009837e8(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xea) = param_1;
  return;
}



/* Address: 0x1009837f0 | FUN_1009837f0 */

undefined1 FUN_1009837f0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x108);
}



/* Address: 0x1009837f8 | FUN_1009837f8 */

void FUN_1009837f8(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x108) = param_1;
  return;
}



/* Address: 0x100983800 | FUN_100983800 */

void FUN_100983800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100983ac0(param_1,param_3,param_4);
  return;
}



/* Address: 0x10098381c | FUN_10098381c */

void FUN_10098381c(void)

{
  FUN_100983174();
  return;
}



/* Address: 0x100983830 | FUN_100983830 */

void FUN_100983830(undefined1 *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x98,auStack_38,0,0);
  *param_1 = *(undefined1 *)(unaff_x20 + 0x98);
  return;
}



/* Address: 0x100983870 | FUN_100983870 */

undefined1  [16] FUN_100983870(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x98,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x98;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1009838a0 | FUN_1009838a0 */

void FUN_1009838a0(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Address: 0x1009838a8 | FUN_1009838a8 */

void FUN_1009838a8(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1009838b0 | FUN_1009838b0 */

undefined8 FUN_1009838b0(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x18);
}



/* Address: 0x1009838bc | FUN_1009838bc */

void FUN_1009838bc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &DAT_100f1fd00;
  param_1[4] = &PTR_PTR_100f1fd18;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1009838dc | FUN_1009838dc */

void FUN_1009838dc(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d4f8(param_1,param_2,&PTR_PTR_100f1fc58);
  return;
}



/* Address: 0x100983904 | FUN_100983904 */

void FUN_100983904(void)

{
  FUN_10061d040();
  return;
}



/* Address: 0x10098392c | FUN_10098392c */

void FUN_10098392c(void)

{
  FUN_10061d154();
  return;
}



/* Address: 0x100983954 | FUN_100983954 */

void FUN_100983954(void)

{
  FUN_10061cf14();
  return;
}



/* Address: 0x10098397c | FUN_10098397c */

undefined ** FUN_10098397c(void)

{
  return &PTR_PTR_100f1fb58;
}



/* Address: 0x100983988 | FUN_100983988 */

undefined ** FUN_100983988(void)

{
  return &PTR_PTR_100f1fb68;
}



/* Address: 0x100983994 | FUN_100983994 */

undefined ** FUN_100983994(void)

{
  return &PTR_PTR_100f24b98;
}



/* Address: 0x1009839a0 | FUN_1009839a0 */

void FUN_1009839a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100983480(0);
  FUN_1009b00c8(param_1,param_2,uVar1,param_4,&PTR_PTR_100ff0b98,param_5);
  return;
}



/* Address: 0x100983a10 | FUN_100983a10 */

void FUN_100983a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100983480(0);
  FUN_1009b0b04(param_1,param_2,uVar1,param_4,&PTR_PTR_100ff0b98,param_5);
  return;
}



/* Address: 0x100983a80 | FUN_100983a80 */

void FUN_100983a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_1009839a0(param_1,param_2,*unaff_x20,param_3,param_4);
  return;
}



/* Address: 0x100983aa0 | FUN_100983aa0 */

void FUN_100983aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100983a10(param_1,*unaff_x20,param_2,param_3);
  return;
}



/* Address: 0x100983ac0 | FUN_100983ac0 */

void FUN_100983ac0(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  Swift::_StringGuts::grow(0x1a,param_2);
  SVar4.bridgeObject = &DAT_e700000000000000;
  SVar4.str = (char *)0x206e6f6974706f;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  pcVar3 = (char *)0x0;
  uVar2 = param_1;
  _swift_getDynamicType(param_1,param_2.unknown);
  SVar4 = Swift::__typeName(SUB81(uVar2,0));
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar3;
  Swift::String::append(SVar4,SVar9);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x2e;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar3;
  Swift::String::append(SVar5,SVar10);
  Swift::DefaultStringInterpolation::_appendInterpolation(param_1,param_2.unknown);
  SVar6.bridgeObject = (void *)0xee00646574726f70;
  SVar6.str = (char *)0x70757320746f6e20;
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar3;
  Swift::String::append(SVar6,SVar11);
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0x0,0xe000000000000000,0xdb6e30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100983bc0);
  (*pcVar1)();
}



/* Address: 0x100983bc0 | FUN_100983bc0 */

undefined1  [16] FUN_100983bc0(void)

{
  return ZEXT816(0x100f1fd00);
}



/* Address: 0x100983bd0 | thunk_FUN_1008b8218 */

void thunk_FUN_1008b8218(void)

{
  FUN_1008b8218();
  return;
}



/* Address: 0x100983bd4 | FUN_100983bd4 */

undefined8 FUN_100983bd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  uVar1 = param_1;
  FUN_100986b90(param_1);
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}


