/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005aa9e8 | thunk_FUN_1005aa9ec */

void thunk_FUN_1005aa9ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60a28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60a28,&DAT_100ee41a8);
  DAT_100fd29b8 = pTVar1;
  return;
}



/* Address: 0x1005aa9ec | FUN_1005aa9ec */

void FUN_1005aa9ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd29b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60a28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60a28,&DAT_100ee41a8);
  DAT_100fd29b8 = pTVar1;
  return;
}



/* Address: 0x1005aaa2c | FUN_1005aaa2c */

void FUN_1005aaa2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd2e00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd2730;
  FUN_1000f8b08(&DAT_100fd2730,&BYTE_100c60358);
  puVar2 = puVar1;
  FUN_1005aaa9c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_100fd2e00 = puVar3;
  return;
}



/* Address: 0x1005aaa9c | FUN_1005aaa9c */

void FUN_1005aaa9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2e08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60488;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60488,&DAT_100ee3b20);
  DAT_100fd2e08 = pTVar1;
  return;
}



/* Address: 0x1005aaadc | FUN_1005aaadc */

void FUN_1005aaadc(void)

{
  undefined *puVar1;
  
  if (DAT_100fd2e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c603a8;
  _swift_getWitnessTable(&DAT_100c603a8,&DAT_100ee3a78);
  DAT_100fd2e28 = puVar1;
  return;
}



/* Address: 0x1005aab1c | thunk_FUN_1005a1940 */

void thunk_FUN_1005a1940(void)

{
  FUN_1005a1940();
  return;
}



/* Address: 0x1005aab20 | thunk_FUN_1005a194c */

void thunk_FUN_1005a194c(void)

{
  FUN_1005a194c();
  return;
}



/* Address: 0x1005aab24 | thunk_FUN_1005a18b0 */

void thunk_FUN_1005a18b0(void)

{
  thunk_FUN_1005a18b0();
  return;
}



/* Address: 0x1005aab28 | thunk_FUN_1005a9570 */

void thunk_FUN_1005a9570(void)

{
  thunk_FUN_1005a9570();
  return;
}



/* Address: 0x1005aab2c | FUN_1005aab2c */

undefined1  [16] FUN_1005aab2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dae090;
  auVar1._0_8_ = 0xd000000000000012;
  return auVar1;
}



/* Address: 0x1005aab48 | FUN_1005aab48 */

long FUN_1005aab48(void)

{
  int *unaff_x20;
  
  return (long)*unaff_x20;
}



/* Address: 0x1005aab50 | FUN_1005aab50 */

long FUN_1005aab50(int param_1)

{
  return (long)param_1;
}



/* Address: 0x1005aab58 | FUN_1005aab58 */

void FUN_1005aab58(undefined8 param_1,Hasher param_2)

{
  uint uVar1;
  Hasher HVar2;
  uint *unaff_x20;
  
  uVar1 = *unaff_x20;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1005aab9c | FUN_1005aab9c */

void FUN_1005aab9c(undefined8 param_1,Hasher param_2)

{
  __uint32 *unaff_x20;
  
  Swift::Hasher::_combine(*unaff_x20,param_2);
  return;
}



/* Address: 0x1005aabc4 | FUN_1005aabc4 */

void FUN_1005aabc4(__int64 param_1,Hasher param_2)

{
  uint uVar1;
  Hasher HVar2;
  uint *unaff_x20;
  
  uVar1 = *unaff_x20;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1005aac04 | FUN_1005aac04 */

void FUN_1005aac04(void)

{
  FUN_1005aae04();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005aac60 | FUN_1005aac60 */

void FUN_1005aac60(void)

{
  FUN_1005aae04();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005aacac | FUN_1005aacac */

String FUN_1005aacac(int param_1)

{
  UnsafePointer<__int8> cString;
  String SVar1;
  
  cString.unknown = _strerror(param_1);
  if (cString.unknown != (undefined *)0x0) {
    SVar1 = Swift::String::init(cString);
    return SVar1;
  }
  SVar1.bridgeObject = (void *)0xed0000726f727265;
  SVar1.str = (char *)0x206e776f6e6b6e75;
  return SVar1;
}



/* Address: 0x1005aacf0 | thunk_FUN_1005aacac */

void thunk_FUN_1005aacac(void)

{
  FUN_1005aacac();
  return;
}



/* Address: 0x1005aacf4 | thunk_FUN_1005aacf8 */

void thunk_FUN_1005aacf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c614f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c614f8,&DAT_100ee42f8);
  DAT_100fd2e48 = pTVar1;
  return;
}



/* Address: 0x1005aacf8 | FUN_1005aacf8 */

void FUN_1005aacf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2e48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c614f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c614f8,&DAT_100ee42f8);
  DAT_100fd2e48 = pTVar1;
  return;
}



/* Address: 0x1005aad38 | FUN_1005aad38 */

void FUN_1005aad38(void)

{
  undefined4 *unaff_x20;
  
  FUN_1005aacac(*unaff_x20);
  return;
}



/* Address: 0x1005aad40 | FUN_1005aad40 */

undefined1  [16] FUN_1005aad40(void)

{
  return ZEXT816(0x100ee42f8);
}



/* Address: 0x1005aad50 | FUN_1005aad50 */

void FUN_1005aad50(void)

{
  return;
}



/* Address: 0x1005aad54 | FUN_1005aad54 */

void FUN_1005aad54(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  return;
}



/* Address: 0x1005aad80 | FUN_1005aad80 */

int FUN_1005aad80(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005aada0 | FUN_1005aada0 */

void FUN_1005aada0(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  return;
}



/* Address: 0x1005aadf0 | FUN_1005aadf0 */

void FUN_1005aadf0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd2e50,&DAT_100ee4378);
  return;
}



/* Address: 0x1005aae04 | FUN_1005aae04 */

void FUN_1005aae04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2e58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c613f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c613f0,&DAT_100ee42f8);
  DAT_100fd2e58 = pTVar1;
  return;
}



/* Address: 0x1005aae44 | FUN_1005aae44 */

void FUN_1005aae44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005aae50 | FUN_1005aae50 */

void FUN_1005aae50(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd2e60,&DAT_100ee4438);
  return;
}



/* Address: 0x1005aae64 | thunk_FUN_1005aad38 */

void thunk_FUN_1005aad38(void)

{
  FUN_1005aad38();
  return;
}



/* Address: 0x1005aae68 | FUN_1005aae68 */

void FUN_1005aae68(void)

{
  FUN_1005abce8();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005aaec4 | FUN_1005aaec4 */

void FUN_1005aaec4(void)

{
  FUN_1005abce8();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005aaf10 | thunk_FUN_1005aab58 */

void thunk_FUN_1005aab58(void)

{
  FUN_1005aab58();
  return;
}



/* Address: 0x1005aaf14 | thunk_FUN_1005aabc4 */

void thunk_FUN_1005aabc4(void)

{
  FUN_1005aabc4();
  return;
}



/* Address: 0x1005aaf18 | FUN_1005aaf18 */

void FUN_1005aaf18(void)

{
  FUN_1005abca8();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005aaf74 | FUN_1005aaf74 */

void FUN_1005aaf74(void)

{
  FUN_1005abca8();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005aafc0 | FUN_1005aafc0 */

void FUN_1005aafc0(void)

{
  FUN_1005ab890();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005ab01c | FUN_1005ab01c */

void FUN_1005ab01c(void)

{
  FUN_1005ab890();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005ab068 | thunk_FUN_1000f7f80 */

void thunk_FUN_1000f7f80(void)

{
  FUN_1000f7f80();
  return;
}



/* Address: 0x1005ab06c | FUN_1005ab06c */

void FUN_1005ab06c(void)

{
  FUN_1005ab9a0();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005ab0c8 | FUN_1005ab0c8 */

void FUN_1005ab0c8(void)

{
  FUN_1005ab9a0();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005ab114 | FUN_1005ab114 */

void FUN_1005ab114(void)

{
  FUN_1005abab0();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005ab170 | FUN_1005ab170 */

void FUN_1005ab170(void)

{
  FUN_1005abab0();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005ab1bc | FUN_1005ab1bc */

void FUN_1005ab1bc(void)

{
  FUN_1005abc68();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005ab218 | FUN_1005ab218 */

void FUN_1005ab218(void)

{
  FUN_1005abc68();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005ab264 | FUN_1005ab264 */

undefined1  [16] FUN_1005ab264(int param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  String SVar5;
  String SVar6;
  String SVar7;
  
  if (param_1 == 0) {
    auVar4._8_8_ = &DAT_e800000000000000;
    auVar4._0_8_ = 0x796c6e4f64616572;
    return auVar4;
  }
  if (param_1 != 2) {
    if (param_1 == 1) {
      auVar2._8_8_ = 0xe900000000000079;
      auVar2._0_8_ = 0x6c6e4f6574697277;
      return auVar2;
    }
    Swift::_StringGuts::grow(0x10,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar5,SVar6);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x29;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    auVar1._8_8_ = 0x8000000100dae0b0;
    auVar1._0_8_ = 0xd000000000000015;
    return auVar1;
  }
  auVar3._8_8_ = 0xe900000000000065;
  auVar3._0_8_ = 0x7469725764616572;
  return auVar3;
}



/* Address: 0x1005ab36c | thunk_FUN_1005ab264 */

void thunk_FUN_1005ab264(void)

{
  FUN_1005ab264();
  return;
}



/* Address: 0x1005ab370 | FUN_1005ab370 */

void FUN_1005ab370(void)

{
  undefined4 *unaff_x20;
  
  FUN_1005ab264(*unaff_x20);
  return;
}



/* Address: 0x1005ab378 | FUN_1005ab378 */

undefined1  [16] FUN_1005ab378(int param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  String SVar7;
  String SVar8;
  String SVar9;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      auVar6._8_8_ = &DAT_e500000000000000;
      auVar6._0_8_ = 0x7472617473;
      return auVar6;
    }
    if (param_1 == 1) {
      auVar3._8_8_ = &DAT_e700000000000000;
      auVar3._0_8_ = 0x746e6572727563;
      return auVar3;
    }
  }
  else {
    if (param_1 == 2) {
      auVar4._8_8_ = 0xe300000000000000;
      auVar4._0_8_ = 0x646e65;
      return auVar4;
    }
    if (param_1 == 3) {
      auVar5._8_8_ = &DAT_e800000000000000;
      auVar5._0_8_ = 0x656c6f487478656e;
      return auVar5;
    }
    if (param_1 == 4) {
      auVar2._8_8_ = &DAT_e800000000000000;
      auVar2._0_8_ = 0x617461447478656e;
      return auVar2;
    }
  }
  Swift::_StringGuts::grow(0x10,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar7 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar7,SVar8);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x29;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar7,SVar9);
  auVar1._8_8_ = 0x8000000100dae0d0;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x1005ab4b0 | thunk_FUN_1005ab378 */

void thunk_FUN_1005ab378(void)

{
  FUN_1005ab378();
  return;
}



/* Address: 0x1005ab4b4 | FUN_1005ab4b4 */

void FUN_1005ab4b4(void)

{
  undefined4 *unaff_x20;
  
  FUN_1005ab378(*unaff_x20);
  return;
}



/* Address: 0x1005ab4bc | FUN_1005ab4bc */

void FUN_1005ab4bc(void)

{
  FUN_1000f7830(&DAT_100fd2ff0,&DAT_100c615a0);
  _swift_initStaticObject();
  FUN_1005ab4fc();
  return;
}



/* Address: 0x1005ab4fc | FUN_1005ab4fc */

undefined1  [16] FUN_1005ab4fc(long param_1,_StringGuts param_2,char *param_3,undefined *param_4)

{
  uint uVar1;
  String SVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  long lVar5;
  byte *pbVar6;
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
  int local_64;
  char *local_60;
  void *pvStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0x5b;
  uStack_48 = 0xe100000000000000;
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    pbVar6 = (byte *)(param_1 + 0x38);
    do {
      uVar1 = *(uint *)(pbVar6 + -0x18);
      if ((uVar1 & ((uint)param_2.unknown ^ 0xffffffff)) == 0) {
        param_3 = (char *)(ulong)*pbVar6;
        SVar7 = Swift::StaticString::get_description((StaticString)*(undefined **)(pbVar6 + -0x10));
        SVar12.bridgeObject = param_4;
        SVar12.str = param_3;
        Swift::String::append(SVar7,SVar12);
        _swift_bridgeObjectRelease(SVar7.bridgeObject);
        uVar1 = (uint)param_2.unknown & (uVar1 ^ 0xffffffff);
        param_2.unknown = (undefined *)(ulong)uVar1;
        if (uVar1 == 0) {
          param_2.unknown = (undefined *)0x0;
        }
        else {
          SVar7.bridgeObject = &SUB_e200000000000000;
          SVar7.str = (char *)0x202c;
          SVar13.bridgeObject = param_4;
          SVar13.str = param_3;
          Swift::String::append(SVar7,SVar13);
        }
      }
      pbVar6 = pbVar6 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if ((int)param_2.unknown != 0) {
    local_60 = (char *)0x0;
    pvStack_58 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x10,param_2);
    SVar9.bridgeObject = (void *)0xeb00000000736e6f;
    SVar9.str = (char *)0x6974704f6e65704f;
    SVar15.bridgeObject = param_4;
    SVar15.str = param_3;
    Swift::String::append(SVar9,SVar15);
    SVar10.bridgeObject = (void *)0xeb00000000203a65;
    SVar10.str = (char *)0x756c615677617228;
    SVar16.bridgeObject = param_4;
    SVar16.str = param_3;
    Swift::String::append(SVar10,SVar16);
    param_3 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    param_4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    local_64 = (int)param_2.unknown;
    Swift::__print_unlocked
              (&local_64,&local_60,PTR___type_metadata_for_Swift_Int32_100eadbd0,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar11.bridgeObject = (void *)0xe100000000000000;
    SVar11.str = (char *)0x29;
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(SVar11,SVar17);
    pvVar4 = pvStack_58;
    SVar2.bridgeObject = pvStack_58;
    SVar2.str = local_60;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar2,SVar18);
    _swift_bridgeObjectRelease(pvVar4);
  }
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x5d;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar8,SVar14);
  auVar3._8_8_ = uStack_48;
  auVar3._0_8_ = local_50;
  return auVar3;
}



/* Address: 0x1005ab684 | FUN_1005ab684 */

undefined1  [16] FUN_1005ab684(long param_1,_StringGuts param_2,char *param_3,undefined *param_4)

{
  ushort uVar1;
  String SVar2;
  undefined1 auVar3 [16];
  void *pvVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
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
  undefined2 local_62;
  char *local_60;
  void *pvStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar5 = (uint)param_2.unknown & 0xffff;
  local_50 = 0x5b;
  uStack_48 = 0xe100000000000000;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    pbVar7 = (byte *)(param_1 + 0x38);
    do {
      uVar1 = *(ushort *)(pbVar7 + -0x18);
      if (((uint)uVar1 & (uVar5 ^ 0xffffffff)) == 0) {
        param_3 = (char *)(ulong)*pbVar7;
        SVar8 = Swift::StaticString::get_description((StaticString)*(undefined **)(pbVar7 + -0x10));
        SVar13.bridgeObject = param_4;
        SVar13.str = param_3;
        param_2.unknown = SVar8.bridgeObject;
        Swift::String::append(SVar8,SVar13);
        _swift_bridgeObjectRelease(SVar8.bridgeObject);
        uVar5 = uVar5 & (uVar1 ^ 0xffff);
        if (uVar5 != 0) {
          SVar8.bridgeObject = &SUB_e200000000000000;
          SVar8.str = (char *)0x202c;
          param_2.unknown = &SUB_e200000000000000;
          SVar14.bridgeObject = param_4;
          SVar14.str = param_3;
          Swift::String::append(SVar8,SVar14);
        }
      }
      pbVar7 = pbVar7 + 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (uVar5 != 0) {
    local_60 = (char *)0x0;
    pvStack_58 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x10,param_2);
    SVar10.bridgeObject = (void *)0xef736e6f69737369;
    SVar10.str = (char *)0x6d726550656c6946;
    SVar16.bridgeObject = param_4;
    SVar16.str = param_3;
    Swift::String::append(SVar10,SVar16);
    SVar11.bridgeObject = (void *)0xeb00000000203a65;
    SVar11.str = (char *)0x756c615677617228;
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(SVar11,SVar17);
    local_62 = (undefined2)uVar5;
    param_3 = PTR___type_metadata_for_Swift_UInt16_100eade18;
    param_4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_62,&local_60,PTR___type_metadata_for_Swift_UInt16_100eade18,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x29;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar12,SVar18);
    pvVar4 = pvStack_58;
    SVar2.bridgeObject = pvStack_58;
    SVar2.str = local_60;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar2,SVar19);
    _swift_bridgeObjectRelease(pvVar4);
  }
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x5d;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar9,SVar15);
  auVar3._8_8_ = uStack_48;
  auVar3._0_8_ = local_50;
  return auVar3;
}



/* Address: 0x1005ab800 | thunk_FUN_1005ab4bc */

void thunk_FUN_1005ab4bc(void)

{
  FUN_1005ab4bc();
  return;
}



/* Address: 0x1005ab804 | thunk_FUN_1005ab808 */

void thunk_FUN_1005ab808(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61670;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61670,&DAT_100ee4520);
  DAT_100fd2ff8 = pTVar1;
  return;
}



/* Address: 0x1005ab808 | FUN_1005ab808 */

void FUN_1005ab808(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2ff8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61670;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61670,&DAT_100ee4520);
  DAT_100fd2ff8 = pTVar1;
  return;
}



/* Address: 0x1005ab848 | thunk_FUN_1005ab84c */

void thunk_FUN_1005ab84c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61760;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61760,&DAT_100ee4548);
  DAT_100fd3000 = pTVar1;
  return;
}



/* Address: 0x1005ab84c | FUN_1005ab84c */

void FUN_1005ab84c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61760;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61760,&DAT_100ee4548);
  DAT_100fd3000 = pTVar1;
  return;
}



/* Address: 0x1005ab88c | thunk_FUN_1005ab890 */

void thunk_FUN_1005ab890(void)

{
  FUN_1005ab890();
  return;
}



/* Address: 0x1005ab890 | FUN_1005ab890 */

void FUN_1005ab890(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61850;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61850,&DAT_100ee4570);
  DAT_100fd3008 = pTVar1;
  return;
}



/* Address: 0x1005ab8d0 | thunk_FUN_1005ab8d4 */

void thunk_FUN_1005ab8d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61888;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61888,&DAT_100ee4570);
  DAT_100fd3010 = pTVar1;
  return;
}


