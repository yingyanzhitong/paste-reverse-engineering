/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004dc274 | FUN_1004dc274 */

void FUN_1004dc274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Address: 0x1004dc284 | FUN_1004dc284 */

void FUN_1004dc284(void)

{
  return;
}



/* Address: 0x1004dc290 | FUN_1004dc290 */

void FUN_1004dc290(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Address: 0x1004dc2a4 | FUN_1004dc2a4 */

String FUN_1004dc2a4(char *param_1,void *param_2,char param_3)

{
  String SVar1;
  
  if (param_3 == '\x01') {
    SVar1 = Swift::CustomStringConvertible::get_description();
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    SVar1.bridgeObject = param_2;
    SVar1.str = param_1;
  }
  return SVar1;
}



/* Address: 0x1004dc308 | FUN_1004dc308 */

String FUN_1004dc308(void)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 *unaff_x20;
  String SVar3;
  
  pcVar2 = (char *)*unaff_x20;
  if (*(char *)(unaff_x20 + 2) == '\x01') {
    SVar3 = Swift::CustomStringConvertible::get_description();
  }
  else {
    pvVar1 = (void *)unaff_x20[1];
    _swift_bridgeObjectRetain(pvVar1);
    SVar3.bridgeObject = pvVar1;
    SVar3.str = pcVar2;
  }
  return SVar3;
}



/* Address: 0x1004dc36c | FUN_1004dc36c */

undefined1  [16] FUN_1004dc36c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_1004dc564();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1004dc38c | FUN_1004dc38c */

void FUN_1004dc38c(long param_1,char *param_2,void *param_3,char param_4)

{
  String SVar1;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  if (param_4 == '\x01') {
    FUN_10007d048(auStack_78,local_60);
    Swift::SingleValueEncodingContainer::_encode((__int64)param_2);
  }
  else {
    FUN_10007d048(auStack_78,local_60);
    SVar1.bridgeObject = param_3;
    SVar1.str = param_2;
    Swift::SingleValueEncodingContainer::_encode(SVar1);
  }
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1004dc464 | FUN_1004dc464 */

void FUN_1004dc464(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_1004dc564();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Address: 0x1004dc490 | FUN_1004dc490 */

void FUN_1004dc490(long param_1)

{
  char *pcVar1;
  char cVar2;
  String SVar3;
  String *unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  
  pcVar1 = unaff_x20->str;
  SVar3 = *unaff_x20;
  cVar2 = *(char *)&unaff_x20[1].str;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  if (cVar2 == '\x01') {
    FUN_10007d048(auStack_78,local_60);
    Swift::SingleValueEncodingContainer::_encode((__int64)pcVar1);
  }
  else {
    FUN_10007d048(auStack_78,local_60);
    Swift::SingleValueEncodingContainer::_encode(SVar3);
  }
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1004dc564 | FUN_1004dc564 */

/* WARNING: Removing unreachable block (ram,0x0001004dc61c) */
/* WARNING: Removing unreachable block (ram,0x0001004dc6b0) */
/* WARNING: Removing unreachable block (ram,0x0001004dc648) */
/* WARNING: Removing unreachable block (ram,0x0001004dc5e8) */

char * FUN_1004dc564(char *param_1)

{
  char *pcVar1;
  long unaff_x21;
  String SVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  pcVar1 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_68,local_50);
    SVar2 = Swift::SingleValueDecodingContainer::_decode();
    pcVar1 = SVar2.str;
    FUN_100004594(auStack_68);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar1;
}



/* Address: 0x1004dc708 | thunk_FUN_1004dc70c */

void thunk_FUN_1004dc70c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc498 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51f48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51f48,&DAT_100edaca0);
  DAT_100fcc498 = pTVar1;
  return;
}



/* Address: 0x1004dc70c | FUN_1004dc70c */

void FUN_1004dc70c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc498 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51f48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51f48,&DAT_100edaca0);
  DAT_100fcc498 = pTVar1;
  return;
}



/* Address: 0x1004dc74c | thunk_FUN_1004dc750 */

void thunk_FUN_1004dc750(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc4a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51fb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51fb0,&DAT_100edaca0);
  DAT_100fcc4a0 = pTVar1;
  return;
}



/* Address: 0x1004dc750 | FUN_1004dc750 */

void FUN_1004dc750(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc4a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51fb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51fb0,&DAT_100edaca0);
  DAT_100fcc4a0 = pTVar1;
  return;
}



/* Address: 0x1004dc790 | FUN_1004dc790 */

undefined * FUN_1004dc790(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_String___Swift__ExpressibleByBuiltinStringLiteral_in_Swift_100eac278
  ;
}



/* Address: 0x1004dc79c | thunk_FUN_1004dc7a0 */

void thunk_FUN_1004dc7a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51ff0,&DAT_100edaca0);
  DAT_100fcc4a8 = pTVar1;
  return;
}



/* Address: 0x1004dc7a0 | FUN_1004dc7a0 */

void FUN_1004dc7a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc4a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51ff0,&DAT_100edaca0);
  DAT_100fcc4a8 = pTVar1;
  return;
}



/* Address: 0x1004dc7e0 | FUN_1004dc7e0 */

undefined * FUN_1004dc7e0(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_String___Swift__ExpressibleByBuiltinExtendedGraphemeClusterLiteral_in_Swift_100eac288
  ;
}



/* Address: 0x1004dc7ec | FUN_1004dc7ec */

undefined * FUN_1004dc7ec(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_String___Swift__ExpressibleByBuiltinUnicodeScalarLiteral_in_Swift_100eac280
  ;
}



/* Address: 0x1004dc7f8 | FUN_1004dc7f8 */

undefined * FUN_1004dc7f8(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_Int___Swift__ExpressibleByBuiltinIntegerLiteral_in_Swift_100eac758
  ;
}



/* Address: 0x1004dc804 | thunk_FUN_1004dc82c */

undefined8 * thunk_FUN_1004dc82c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1004dc808 | FUN_1004dc808 */

void FUN_1004dc808(undefined8 *param_1)

{
  FUN_1004dc818(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1004dc818 | FUN_1004dc818 */

void FUN_1004dc818(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1004dc82c | FUN_1004dc82c */

undefined8 * FUN_1004dc82c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1004dc874 | FUN_1004dc874 */

undefined8 * FUN_1004dc874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1004dc818(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1004dc8c8 | FUN_1004dc8c8 */

void FUN_1004dc8c8(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1004dc8dc | FUN_1004dc8dc */

undefined8 * FUN_1004dc8dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1004dc818(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1004dc920 | FUN_1004dc920 */

undefined1  [16] FUN_1004dc920(void)

{
  return ZEXT816(0x100edaca0);
}



/* Address: 0x1004dc930 | thunk_FUN_1004dc274 */

void thunk_FUN_1004dc274(void)

{
  FUN_1004dc274();
  return;
}



/* Address: 0x1004dc934 | thunk_FUN_1004dc82c */

void thunk_FUN_1004dc82c(void)

{
  thunk_FUN_1004dc82c();
  return;
}



/* Address: 0x1004dc938 | FUN_1004dc938 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004dc974 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_1004dc938(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x1004dc9a4 | FUN_1004dc9a4 */

undefined1  [16] FUN_1004dc9a4(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6b726164;
  if (param_1 != '\x01') {
    uVar1 = 0x746867696c;
  }
  puVar2 = &DAT_e400000000000000;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1004dc9d4 | FUN_1004dc9d4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004dca14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004dc9d4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004dca4c | FUN_1004dca4c */

void FUN_1004dca4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x6b726164;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x746867696c;
  }
  puVar2 = &DAT_e400000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1004dca80 | FUN_1004dca80 */

void FUN_1004dca80(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6b726164;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x746867696c;
  }
  HVar3.unknown = &DAT_e400000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1004dcaf4 | FUN_1004dcaf4 */

void FUN_1004dcaf4(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6b726164;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x746867696c;
  }
  puVar2 = &DAT_e400000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1004dcb44 | FUN_1004dcb44 */

void FUN_1004dcb44(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6b726164;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x746867696c;
  }
  HVar3.unknown = &DAT_e400000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1004dcbb4 | FUN_1004dcbb4 */

void FUN_1004dcbb4(void)

{
  FUN_1004dda68();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1004dcc10 | FUN_1004dcc10 */

void FUN_1004dcc10(void)

{
  FUN_1004dda68();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1004dcc5c | FUN_1004dcc5c */

undefined1 FUN_1004dcc5c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x28);
}



/* Address: 0x1004dcc64 | FUN_1004dcc64 */

void FUN_1004dcc64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(undefined1 *)(param_1 + 5) = param_7;
  return;
}



/* Address: 0x1004dcc78 | FUN_1004dcc78 */

undefined1  [16] FUN_1004dcc78(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar5 = 0x73657a6973;
  if (bVar4 != 2) {
    uVar5 = 0x656d656874;
  }
  uVar1 = 0x637273;
  if (bVar4 != 0) {
    uVar1 = 0x65707954656d696d;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (bVar4 != 0) {
    puVar2 = &DAT_e800000000000000;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4 < 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Address: 0x1004dcce4 | FUN_1004dcce4 */

void FUN_1004dcce4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004dd2dc();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004dcd08 | FUN_1004dcd08 */

String FUN_1004dcd08(void)

{
  String SVar1;
  
  FUN_1004dd25c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004dcd30 | FUN_1004dcd30 */

String FUN_1004dcd30(void)

{
  String SVar1;
  
  FUN_1004dd25c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004dcd58 | thunk_FUN_1004dd194 */

void thunk_FUN_1004dd194(void)

{
  FUN_1004dd194();
  return;
}



/* Address: 0x1004dcd5c | FUN_1004dcd5c */

/* WARNING: Removing unreachable block (ram,0x0001004dcec8) */

void FUN_1004dcd5c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [13];
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcc508;
  FUN_1000f7830(&DAT_100fcc508,&DAT_100c520e8);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004dd25c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_60 = unaff_x20[4];
    local_61 = 2;
    puVar2 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    puVar3 = &DAT_100fcbbc0;
    FUN_1004cb1cc(&DAT_100fcbbc0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    puVar4 = &local_60;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,&local_61,puVar1,puVar2,puVar3);
    local_62 = *(undefined1 *)(unaff_x20 + 5);
    local_63 = 3;
    FUN_1004dd29c();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_62,&local_63,puVar1,&DAT_100edaeb0,puVar4);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1004dcf4c | FUN_1004dcf4c */

void FUN_1004dcf4c(Hasher param_1)

{
  undefined1 *puVar1;
  char cVar2;
  Hasher HVar3;
  String *unaff_x20;
  void *pvVar4;
  __uint64 _Var5;
  Hasher HVar6;
  char *pcVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  HVar3.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar4 = unaff_x20[1].bridgeObject;
  if (pvVar4 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    pcVar7 = unaff_x20[2].str;
    HVar6.unknown = HVar3.unknown;
  }
  else {
    HVar6.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar3);
    SVar8.bridgeObject = pvVar4;
    SVar8.str = HVar6.unknown;
    Swift::String::hash(param_1,SVar8);
    pcVar7 = unaff_x20[2].str;
  }
  if (pcVar7 == (char *)0x0) {
    Swift::Hasher::_combine(0,HVar6);
  }
  else {
    Swift::Hasher::_combine(1,HVar6);
    _Var5 = *(__uint64 *)(pcVar7 + 0x10);
    Swift::Hasher::_combine(_Var5,HVar6);
    if (_Var5 != 0) {
      pcVar7 = pcVar7 + 0x28;
      do {
        HVar6.unknown = *(undefined **)(pcVar7 + -8);
        pvVar4 = *(void **)pcVar7;
        _swift_bridgeObjectRetain(pvVar4);
        SVar9.bridgeObject = pvVar4;
        SVar9.str = HVar6.unknown;
        Swift::String::hash(param_1,SVar9);
        _swift_bridgeObjectRelease(pvVar4);
        pcVar7 = pcVar7 + 0x10;
        _Var5 = _Var5 - 1;
      } while (_Var5 != 0);
    }
  }
  cVar2 = *(char *)&unaff_x20[2].bridgeObject;
  if (cVar2 == '\x02') {
    Swift::Hasher::_combine(0,HVar6);
    return;
  }
  Swift::Hasher::_combine(1,HVar6);
  pcVar7 = (char *)0x6b726164;
  if (cVar2 != '\x01') {
    pcVar7 = (char *)0x746867696c;
  }
  puVar1 = &DAT_e400000000000000;
  if (cVar2 != '\x01') {
    puVar1 = &DAT_e500000000000000;
  }
  SVar10.bridgeObject = puVar1;
  SVar10.str = pcVar7;
  Swift::String::hash(param_1,SVar10);
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x1004dd080 | FUN_1004dd080 */

void FUN_1004dd080(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1004dcf4c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004dd0bc | FUN_1004dd0bc */

void FUN_1004dd0bc(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1004dd434(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}



/* Address: 0x1004dd0fc | thunk_FUN_1004dcf4c */

void thunk_FUN_1004dcf4c(void)

{
  FUN_1004dcf4c();
  return;
}



/* Address: 0x1004dd100 | FUN_1004dd100 */

void FUN_1004dd100(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1004dcf4c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004dd138 | FUN_1004dd138 */

void FUN_1004dd138(void)

{
  FUN_1004dcd5c();
  return;
}



/* Address: 0x1004dd14c | FUN_1004dd14c */

uint FUN_1004dd14c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  undefined7 local_27;
  undefined1 uStack_20;
  undefined8 uStack_1f;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  local_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_30 = param_2[2];
  uStack_28 = (undefined1)param_2[3];
  uStack_1f = *(undefined8 *)((long)param_2 + 0x21);
  local_27 = (undefined7)*(undefined8 *)((long)param_2 + 0x19);
  uStack_20 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x19) >> 0x38);
  FUN_1004dd194(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x1004dd194 | FUN_1004dd194 */

undefined8 FUN_1004dd194(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  _Var3.unknown = (undefined *)param_1[3];
  puVar4 = (undefined *)param_2[3];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var3.unknown != puVar4) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  uVar2 = param_1[4];
  if (uVar2 == 0) {
    if (param_2[4] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[4] == 0) {
      return 0;
    }
    FUN_1004827e8();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 5) == '\x02') {
    if ((char)param_2[5] == '\x02') {
      return 1;
    }
  }
  else if (*(char *)(param_1 + 5) == (char)param_2[5]) {
    return 1;
  }
  return 0;
}



/* Address: 0x1004dd25c | FUN_1004dd25c */

void FUN_1004dd25c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52370,&DAT_100edaf40);
  DAT_100fcc510 = pTVar1;
  return;
}



/* Address: 0x1004dd29c | FUN_1004dd29c */

void FUN_1004dd29c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc518 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c521b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c521b8,&DAT_100edaeb0);
  DAT_100fcc518 = pTVar1;
  return;
}



/* Address: 0x1004dd2dc | FUN_1004dd2dc */

undefined4 FUN_1004dd2dc(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x637273 || param_2 != (undefined1 *)0xe300000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x637273,(_StringGuts)0xe300000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x65707954656d696d) && (param_2 == &DAT_e800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65707954656d696d,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x73657a6973) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x73657a6973,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x656d656874) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x656d656874,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004dd434 | FUN_1004dd434 */

/* WARNING: Removing unreachable block (ram,0x0001004dd650) */
/* WARNING: Removing unreachable block (ram,0x0001004dd56c) */
/* WARNING: Removing unreachable block (ram,0x0001004dd5f4) */
/* WARNING: Removing unreachable block (ram,0x0001004dd668) */
/* WARNING: Removing unreachable block (ram,0x0001004dd67c) */
/* WARNING: Removing unreachable block (ram,0x0001004dd684) */
/* WARNING: Removing unreachable block (ram,0x0001004dd688) */
/* WARNING: Removing unreachable block (ram,0x0001004dd504) */

void FUN_1004dd434(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 *local_80;
  undefined *local_78;
  void *local_70;
  undefined8 local_68;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcc550;
  FUN_1000f7830(&DAT_100fcc550,&DAT_100c523c0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004dd25c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar6 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    local_70 = SVar6.bridgeObject;
    local_52 = 1;
    puVar2 = &local_52;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar3 = &DAT_100fcb568;
    local_80 = puVar2;
    local_78 = puVar4;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_53 = 2;
    puVar4 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_68,puVar3,&local_53,puVar1,puVar3,puVar4)
    ;
    local_88 = local_68;
    local_55 = 3;
    FUN_1004ddaa8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_54,&DAT_100edaeb0,&local_55,puVar1,&DAT_100edaeb0,puVar3);
    (**(code **)(lVar5 + 8))(auStack_90 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = SVar6.str;
    param_1[1] = local_70;
    param_1[2] = local_80;
    param_1[3] = local_78;
    param_1[4] = local_88;
    *(undefined1 *)(param_1 + 5) = local_54;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004dd6d0 | thunk_FUN_1004dd6d4 */

void thunk_FUN_1004dd6d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c520f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c520f0,&DAT_100edaeb0);
  DAT_100fcc520 = pTVar1;
  return;
}



/* Address: 0x1004dd6d4 | FUN_1004dd6d4 */

void FUN_1004dd6d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c520f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c520f0,&DAT_100edaeb0);
  DAT_100fcc520 = pTVar1;
  return;
}



/* Address: 0x1004dd714 | thunk_FUN_1004dd718 */

void thunk_FUN_1004dd718(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52270;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52270,&DAT_100edae10);
  DAT_100fcc528 = pTVar1;
  return;
}



/* Address: 0x1004dd718 | FUN_1004dd718 */

void FUN_1004dd718(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52270;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52270,&DAT_100edae10);
  DAT_100fcc528 = pTVar1;
  return;
}



/* Address: 0x1004dd758 | FUN_1004dd758 */

void FUN_1004dd758(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  return;
}


