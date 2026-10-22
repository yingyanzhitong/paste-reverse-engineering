/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009907f8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009907fc | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990800 | thunk_FUN_100990338 */

void thunk_FUN_100990338(void)

{
  FUN_100990338();
  return;
}



/* Address: 0x100990804 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100990808 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x10099080c | thunk_FUN_100990338 */

void thunk_FUN_100990338(void)

{
  FUN_100990338();
  return;
}



/* Address: 0x100990810 | thunk_FUN_10099047c */

void thunk_FUN_10099047c(void)

{
  FUN_10099047c();
  return;
}



/* Address: 0x100990814 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990818 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x10099081c | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100990820 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990824 | thunk_FUN_100990338 */

void thunk_FUN_100990338(void)

{
  FUN_100990338();
  return;
}



/* Address: 0x100990828 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10099082c | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990830 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990834 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990838 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10099083c | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x100990840 | thunk_FUN_100990338 */

void thunk_FUN_100990338(void)

{
  FUN_100990338();
  return;
}



/* Address: 0x100990844 | thunk_FUN_10098e068 */

void thunk_FUN_10098e068(void)

{
  FUN_10098e068();
  return;
}



/* Address: 0x100990848 | FUN_100990848 */

undefined8 FUN_100990848(byte *param_1,long param_2)

{
  byte *pbVar1;
  undefined8 *unaff_x20;
  byte bVar2;
  code *pcVar3;
  
  pcVar3 = *(code **)(*(long *)*unaff_x20 + 0x88);
  pbVar1 = param_1;
  (*pcVar3)();
  bVar2 = *pbVar1;
  unaff_x20[2] = param_1;
  unaff_x20[3] = param_2;
  if ((bVar2 & 1) == 0) {
    if ((long)param_1 <= (long)unaff_x20[1]) {
      return 0;
    }
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
    if ((long)unaff_x20[1] <= param_2) {
      return 0;
    }
  }
  (*pcVar3)();
  *pbVar1 = bVar2;
  return 1;
}



/* Address: 0x1009908cc | FUN_1009908cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009908cc(void)

{
  undefined8 uVar1;
  long lVar2;
  MultipathServiceType MVar3;
  undefined7 extraout_var;
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd0));
  lVar2 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
  MVar3 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,MVar3.value) + -8) + 8))
            (unaff_x20 + lVar2,CONCAT71(extraout_var,MVar3.value));
  uVar1 = ((undefined8 *)
          (unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache))[1];
  FUN_1005d8534(*(undefined8 *)
                 (unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache));
  FUN_1005d8534(uVar1);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock
                  ));
  FUN_1008db52c(unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPool);
  return;
}



/* Address: 0x1009909b0 | FUN_1009909b0 */

void FUN_1009909b0(void)

{
  FUN_1009908cc();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009909d4 | FUN_1009909d4 */

void FUN_1009909d4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x90);
  _swift_retain();
  return;
}



/* Address: 0x1009909e0 | FUN_1009909e0 */

undefined8 FUN_1009909e0(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x60);
}



/* Address: 0x1009909e8 | FUN_1009909e8 */

void FUN_1009909e8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  return;
}



/* Address: 0x1009909f0 | FUN_1009909f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1009909f0(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x70);
}



/* Address: 0x1009909f8 | FUN_1009909f8 */

uint FUN_1009909f8(void)

{
  uint uVar1;
  uint uVar2;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0xb2,auStack_28,0,0);
  uVar1 = 0x10000;
  if (*(char *)(unaff_x20 + 0xb4) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100;
  if (*(char *)(unaff_x20 + 0xb3) == '\0') {
    uVar2 = 0;
  }
  return uVar2 | *(byte *)(unaff_x20 + 0xb2) | uVar1;
}



/* Address: 0x100990a50 | FUN_100990a50 */

undefined1  [16] FUN_100990a50(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xb2,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xb2;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x100990a80 | FUN_100990a80 */

void FUN_100990a80(void)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_48,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0xd0));
  return;
}



/* Address: 0x100990ad4 | FUN_100990ad4 */

undefined1  [16] FUN_100990ad4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xd0,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xd0;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x100990b04 | FUN_100990b04 */

undefined1 FUN_100990b04(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xf0);
}



/* Address: 0x100990b0c | FUN_100990b0c */

void FUN_100990b0c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf0) = param_1;
  return;
}



/* Address: 0x100990b14 | FUN_100990b14 */

undefined1 FUN_100990b14(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xf1);
}



/* Address: 0x100990b1c | FUN_100990b1c */

void FUN_100990b1c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf1) = param_1;
  return;
}



/* Address: 0x100990b24 | FUN_100990b24 */

undefined1 FUN_100990b24(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xf3);
}



/* Address: 0x100990b2c | FUN_100990b2c */

void FUN_100990b2c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf3) = param_1;
  return;
}



/* Address: 0x100990b34 | FUN_100990b34 */

undefined1 FUN_100990b34(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xf2);
}



/* Address: 0x100990b3c | FUN_100990b3c */

void FUN_100990b3c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xf2) = param_1;
  return;
}



/* Address: 0x100990b44 | FUN_100990b44 */

void FUN_100990b44(void)

{
  FUN_100990b58();
  return;
}



/* Address: 0x100990b58 | FUN_100990b58 */

void FUN_100990b58(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  StaticString file;
  __uint64 line;
  code *pcVar1;
  MultipathServiceType MVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined7 extraout_var;
  undefined8 uVar8;
  _StringGuts _Var9;
  char *pcVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  StaticString local_90;
  __uint64 _Stack_88;
  undefined1 auStack_78 [24];
  long lVar7;
  
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar13 = *(long *)(uVar3 - 8);
  puVar16 = &stack0xffffffffffffff60 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_3 + -8);
  puVar15 = puVar16 + -(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar3;
  FUN_100992670();
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100990d60);
    (*pcVar1)();
  }
  puVar5 = (undefined8 *)(unaff_x20 + 0xa0);
  _swift_beginAccess(puVar5,auStack_78,0,0);
  if (*(char *)(unaff_x20 + 0xa0) == '\a') {
    FUN_100980638();
    _swift_allocError(&DAT_100eeb710,puVar5,0,0);
    *puVar5 = 2;
    *(undefined1 *)(puVar5 + 1) = 3;
    _swift_willThrow();
  }
  else {
    puVar6 = puVar15;
    (**(code **)(lVar17 + 0x10))(puVar15,param_1,param_3);
    puVar11 = &DAT_100f20880;
    _Var9.unknown = puVar15;
    pcVar10 = param_3;
    _swift_dynamicCast();
    if (((ulong)puVar6 & 1) == 0) {
      local_90.unknown = (undefined *)0x0;
      _Stack_88 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1a,_Var9);
      SVar18.bridgeObject = &DAT_e700000000000000;
      SVar18.str = (char *)0x206e6f6974706f;
      SVar22.bridgeObject = puVar11;
      SVar22.str = pcVar10;
      Swift::String::append(SVar18,SVar22);
      pcVar10 = (char *)0x0;
      uVar8 = param_1;
      _swift_getDynamicType(param_1,param_3);
      SVar18 = Swift::__typeName(SUB81(uVar8,0));
      SVar23.bridgeObject = puVar11;
      SVar23.str = pcVar10;
      Swift::String::append(SVar18,SVar23);
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
      SVar19.bridgeObject = (void *)0xe100000000000000;
      SVar19.str = (char *)0x2e;
      SVar24.bridgeObject = puVar11;
      SVar24.str = pcVar10;
      Swift::String::append(SVar19,SVar24);
      Swift::DefaultStringInterpolation::_appendInterpolation(param_1,param_3);
      SVar20.bridgeObject = (void *)0xee00646574726f70;
      SVar20.str = (char *)0x70757320746f6e20;
      SVar25.bridgeObject = puVar11;
      SVar25.str = pcVar10;
      Swift::String::append(SVar20,SVar25);
      line = _Stack_88;
      file.unknown = local_90.unknown;
      *(undefined4 *)(puVar15 + -8) = 0;
      *(undefined8 *)(puVar15 + -0x10) = 0x152;
      SVar21.bridgeObject = (void *)0x2;
      SVar21.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdb6fa0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100990e3c);
      (*pcVar1)();
    }
    (**(code **)(lVar13 + 0x10))(puVar16,param_2,uVar3);
    MVar2 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    lVar7 = CONCAT71(extraout_var,MVar2.value);
    lVar12 = *(long *)(lVar7 + -8);
    lVar14 = (long)puVar15 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_dynamicCast(lVar14,puVar16,uVar3,lVar7,7);
    lVar13 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
    _swift_beginAccess(unaff_x20 +
                       _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType,
                       &local_90,0x21,0);
    (**(code **)(lVar12 + 0x28))(unaff_x20 + lVar13,lVar14,lVar7);
    _swift_endAccess(&local_90);
    (**(code **)(lVar17 + 8))(puVar15,param_3);
  }
  return;
}



/* Address: 0x100990e3c | FUN_100990e3c */

void FUN_100990e3c(void)

{
  FUN_100990e50();
  return;
}



/* Address: 0x100990e50 | FUN_100990e50 */

void FUN_100990e50(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4)

{
  StaticString file;
  __uint64 line;
  byte bVar1;
  MultipathServiceType MVar2;
  int iVar3;
  undefined *puVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  _StringGuts _Var8;
  char *pcVar9;
  long unaff_x20;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [8];
  StaticString local_78;
  __uint64 _Stack_70;
  undefined1 *puVar4;
  long lVar7;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xe,0,0);
  lVar15 = *(long *)(param_3 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  if ((bVar1 & 1) == 0) {
    pcVar10 = *(code **)(lVar15 + 0x10);
  }
  else {
    puVar12 = auStack_90 + -(lVar13 + 0xfU & 0xfffffffffffffff0);
    pcVar10 = *(code **)(lVar15 + 0x10);
    puVar4 = puVar12;
    (*pcVar10)(puVar12,param_2,param_3);
    iVar3 = (int)puVar4;
    _swift_dynamicCast();
    if (iVar3 != 0) {
      local_78.unknown = *(undefined **)(unaff_x20 + 0x58);
      _swift_retain();
      puVar5 = &DAT_100ff0d50;
      FUN_1000f7830(&DAT_100ff0d50,&DAT_100c897f0);
      uVar6 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      _swift_dynamicCast(param_1,&local_78,puVar5,uVar6,7);
      (**(code **)(lVar15 + 8))(puVar12,param_3);
      return;
    }
    (**(code **)(lVar15 + 8))(puVar12,param_3);
  }
  lVar13 = -(lVar13 + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_90 + lVar13;
  puVar4 = puVar12;
  (*pcVar10)(puVar12,param_2,param_3);
  iVar3 = (int)puVar4;
  puVar5 = &DAT_100f20880;
  _Var8.unknown = puVar12;
  pcVar9 = param_3;
  _swift_dynamicCast();
  if (iVar3 != 0) {
    MVar2 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    lVar13 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
    lVar7 = CONCAT71(extraout_var,MVar2.value);
    lVar11 = *(long *)(lVar7 + -8);
    lVar14 = (long)puVar12 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_beginAccess(unaff_x20 +
                       _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType,
                       &local_78,0,0);
    (**(code **)(lVar11 + 0x10))(lVar14,unaff_x20 + lVar13,lVar7);
    uVar6 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
    _swift_dynamicCast(param_1,lVar14,lVar7,uVar6,7);
    (**(code **)(lVar15 + 8))(puVar12,param_3);
    return;
  }
  local_78.unknown = (undefined *)0x0;
  _Stack_70 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1a,_Var8);
  SVar16.bridgeObject = &DAT_e700000000000000;
  SVar16.str = (char *)0x206e6f6974706f;
  SVar20.bridgeObject = puVar5;
  SVar20.str = pcVar9;
  Swift::String::append(SVar16,SVar20);
  pcVar9 = (char *)0x0;
  uVar6 = param_2;
  _swift_getDynamicType(param_2,param_3);
  SVar16 = Swift::__typeName(SUB81(uVar6,0));
  SVar21.bridgeObject = puVar5;
  SVar21.str = pcVar9;
  Swift::String::append(SVar16,SVar21);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  SVar17.bridgeObject = (void *)0xe100000000000000;
  SVar17.str = (char *)0x2e;
  SVar22.bridgeObject = puVar5;
  SVar22.str = pcVar9;
  Swift::String::append(SVar17,SVar22);
  Swift::DefaultStringInterpolation::_appendInterpolation(param_2,param_3);
  SVar18.bridgeObject = (void *)0xee00646574726f70;
  SVar18.str = (char *)0x70757320746f6e20;
  SVar23.bridgeObject = puVar5;
  SVar23.str = pcVar9;
  Swift::String::append(SVar18,SVar23);
  line = _Stack_70;
  file.unknown = local_78.unknown;
  *(undefined4 *)((long)auStack_98 + lVar13) = 0;
  *(undefined8 *)((long)&uStack_a0 + lVar13) = 0x143;
  SVar19.bridgeObject = (void *)0x2;
  SVar19.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar19,file,line,0xdb6fa0);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100991160);
  (*pcVar10)();
}



/* Address: 0x100991160 | FUN_100991160 */

void FUN_100991160(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &DAT_100f21878;
  param_1[4] = &PTR_PTR_100f21890;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x100991180 | FUN_100991180 */

void FUN_100991180(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d4f8(param_1,param_2,&PTR_PTR_100f217d0);
  return;
}



/* Address: 0x1009911a8 | FUN_1009911a8 */

void FUN_1009911a8(void)

{
  FUN_10061d040();
  return;
}



/* Address: 0x1009911d0 | FUN_1009911d0 */

void FUN_1009911d0(void)

{
  FUN_10061d154();
  return;
}



/* Address: 0x1009911f8 | FUN_1009911f8 */

void FUN_1009911f8(void)

{
  FUN_10099121c();
  return;
}



/* Address: 0x100991204 | FUN_100991204 */

void FUN_100991204(undefined8 param_1,undefined8 param_2)

{
  FUN_10099127c(param_1,param_2,FUN_10062714c);
  return;
}



/* Address: 0x100991210 | FUN_100991210 */

void FUN_100991210(void)

{
  FUN_10099121c();
  return;
}



/* Address: 0x10099121c | FUN_10099121c */

void FUN_10099121c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x48);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    (*param_5)(param_1,param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100991270);
  (*pcVar1)();
}



/* Address: 0x100991270 | FUN_100991270 */

void FUN_100991270(undefined8 param_1,undefined8 param_2)

{
  FUN_10099127c(param_1,param_2,FUN_100627440);
  return;
}



/* Address: 0x10099127c | FUN_10099127c */

void FUN_10099127c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x48);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    (*param_3)();
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009912b8);
  (*pcVar1)();
}



/* Address: 0x1009912b8 | FUN_1009912b8 */

void FUN_1009912b8(void)

{
  FUN_10061cf14();
  return;
}



/* Address: 0x1009912e0 | FUN_1009912e0 */

void FUN_1009912e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x48);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1006276a0(param_1,param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100991330);
  (*pcVar1)();
}



/* Address: 0x100991330 | FUN_100991330 */

void FUN_100991330(undefined1 *param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xa0,auStack_38,0,0);
  *param_1 = *(undefined1 *)(unaff_x20 + 0xa0);
  return;
}



/* Address: 0x100991370 | FUN_100991370 */

undefined1  [16] FUN_100991370(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xa0,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xa0;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1009913a0 | FUN_1009913a0 */

void FUN_1009913a0(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0xa8));
  return;
}



/* Address: 0x1009913a8 | FUN_1009913a8 */

void FUN_1009913a8(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1009913b0 | FUN_1009913b0 */

undefined1 FUN_1009913b0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0xb0);
}



/* Address: 0x1009913b8 | FUN_1009913b8 */

void FUN_1009913b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100991a3c(0);
  FUN_1009b00c8(param_1,param_2,uVar1,param_4,&PTR_PTR_100ff18f0,param_5);
  return;
}



/* Address: 0x100991428 | FUN_100991428 */

void FUN_100991428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100991a3c(0);
  FUN_1009b0b04(param_1,param_2,uVar1,param_4,&PTR_PTR_100ff18f0,param_5);
  return;
}



/* Address: 0x100991498 | FUN_100991498 */

void FUN_100991498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_1009913b8(param_1,param_2,*unaff_x20,param_3,param_4);
  return;
}



/* Address: 0x1009914b8 | FUN_1009914b8 */

void FUN_1009914b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100991428(param_1,*unaff_x20,param_2,param_3);
  return;
}


