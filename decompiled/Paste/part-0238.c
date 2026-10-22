/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002de518 | FUN_1002de518 */

void FUN_1002de518(byte param_1,char *param_2,void *param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  Hasher into;
  String SVar7;
  String SVar8;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x656369766564;
  if (param_1 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (param_1 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (param_1 != 3) {
    puVar6 = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (param_1 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_1 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (param_1 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar5 = puVar1;
  }
  if (param_1 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar7.bridgeObject = puVar6;
  SVar7.str = pcVar2;
  Swift::String::hash((Hasher)auStack_78,SVar7);
  _swift_bridgeObjectRelease(puVar6);
  into.unknown = auStack_78;
  SVar8.bridgeObject = param_3;
  SVar8.str = param_2;
  Swift::String::hash(into,SVar8);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1002de61c | FUN_1002de61c */

void FUN_1002de61c(void)

{
  undefined1 *unaff_x20;
  
  FUN_1002de518(*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1002de628 | FUN_1002de628 */

void FUN_1002de628(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  String SVar8;
  byte *unaff_x20;
  String SVar9;
  
  bVar7 = *unaff_x20;
  SVar8 = *(String *)(unaff_x20 + 8);
  pcVar3 = (char *)0x656369766564;
  if (bVar7 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar7 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (bVar7 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (bVar7 != 3) {
    puVar6 = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (bVar7 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar7 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (bVar7 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar7 != 0) {
    puVar5 = puVar1;
  }
  if (bVar7 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar9.bridgeObject = puVar6;
  SVar9.str = pcVar2;
  Swift::String::hash(param_1,SVar9);
  _swift_bridgeObjectRelease(puVar6);
  Swift::String::hash(param_1,SVar8);
  return;
}



/* Address: 0x1002de704 | FUN_1002de704 */

void FUN_1002de704(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  String SVar8;
  Hasher into;
  byte *unaff_x20;
  String SVar9;
  undefined1 auStack_78 [72];
  
  bVar7 = *unaff_x20;
  SVar8 = *(String *)(unaff_x20 + 8);
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x656369766564;
  if (bVar7 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar7 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (bVar7 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (bVar7 != 3) {
    puVar6 = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (bVar7 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar7 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (bVar7 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar7 != 0) {
    puVar5 = puVar1;
  }
  if (bVar7 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar9.bridgeObject = puVar6;
  SVar9.str = pcVar2;
  Swift::String::hash((Hasher)auStack_78,SVar9);
  _swift_bridgeObjectRelease(puVar6);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar8);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1002de7fc | FUN_1002de7fc */

void FUN_1002de7fc(undefined1 *param_1,undefined1 *param_2)

{
  FUN_1002dee2c(*param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*param_2,
                *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x1002de814 | thunk_FUN_1002def18 */

void thunk_FUN_1002def18(void)

{
  FUN_1002def18();
  return;
}



/* Address: 0x1002de818 | FUN_1002de818 */

void FUN_1002de818(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1002def18(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1002de844 | FUN_1002de844 */

void FUN_1002de844(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte bVar6;
  byte *unaff_x20;
  
  bVar6 = *unaff_x20;
  puVar5 = (undefined1 *)0x656369766564;
  if (bVar6 != 4) {
    puVar5 = (undefined1 *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar6 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  puVar2 = (undefined1 *)0x65746164;
  if (bVar6 != 3) {
    puVar2 = puVar5;
  }
  puVar5 = &DAT_e400000000000000;
  if (bVar6 != 3) {
    puVar5 = puVar1;
  }
  puVar1 = &DAT_65707974;
  if (bVar6 != 1) {
    puVar1 = (undefined1 *)0x656c746974;
  }
  puVar3 = &DAT_e400000000000000;
  if (bVar6 != 1) {
    puVar3 = &DAT_e500000000000000;
  }
  puVar4 = (undefined1 *)0x707061;
  if (bVar6 != 0) {
    puVar4 = puVar1;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar6 != 0) {
    puVar1 = puVar3;
  }
  if (bVar6 < 3) {
    puVar5 = puVar1;
    puVar2 = puVar4;
  }
  *param_1 = puVar2;
  param_1[1] = puVar5;
  return;
}



/* Address: 0x1002de8e4 | FUN_1002de8e4 */

void FUN_1002de8e4(void)

{
  undefined1 *unaff_x20;
  
  FUN_1002de8ec(*unaff_x20);
  return;
}



/* Address: 0x1002de8ec | FUN_1002de8ec */

void FUN_1002de8ec(byte param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x656369766564;
  if (param_1 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (param_1 != 3) {
    pcVar2 = pcVar3;
  }
  HVar6.unknown = &DAT_e400000000000000;
  if (param_1 != 3) {
    HVar6.unknown = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (param_1 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_1 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (param_1 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar5 = puVar1;
  }
  if (param_1 < 3) {
    HVar6.unknown = puVar5;
    pcVar2 = pcVar4;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1002de9d0 | FUN_1002de9d0 */

void FUN_1002de9d0(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar7 = *unaff_x20;
  pcVar3 = (char *)0x656369766564;
  if (bVar7 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar7 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (bVar7 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (bVar7 != 3) {
    puVar6 = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (bVar7 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar7 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (bVar7 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (bVar7 != 0) {
    puVar5 = puVar1;
  }
  if (bVar7 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar8.bridgeObject = puVar6;
  SVar8.str = pcVar2;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1002dea8c | FUN_1002dea8c */

void FUN_1002dea8c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1002dea94(param_1,*unaff_x20);
  return;
}



/* Address: 0x1002dea94 | FUN_1002dea94 */

void FUN_1002dea94(__int64 param_1,byte param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  Hasher HVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x656369766564;
  if (param_2 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_2 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (param_2 != 3) {
    pcVar2 = pcVar3;
  }
  HVar6.unknown = &DAT_e400000000000000;
  if (param_2 != 3) {
    HVar6.unknown = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (param_2 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_2 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (param_2 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (param_2 != 0) {
    puVar5 = puVar1;
  }
  if (param_2 < 3) {
    HVar6.unknown = puVar5;
    pcVar2 = pcVar4;
  }
  SVar7.bridgeObject = HVar6.unknown;
  SVar7.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x1002deb74 | FUN_1002deb74 */

undefined8 * FUN_1002deb74(void)

{
  return &DAT_101057920;
}



/* Address: 0x1002deb80 | FUN_1002deb80 */

undefined1  [16] FUN_1002deb80(void)

{
  undefined1 auVar1 [16];
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(&DAT_101057920,auStack_38,0,0);
  auVar1._8_8_ = DAT_101057928;
  auVar1._0_8_ = DAT_101057920;
  FUN_100011128(DAT_101057920,DAT_101057928);
  return auVar1;
}



/* Address: 0x1002debd4 | FUN_1002debd4 */

void FUN_1002debd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(&DAT_101057920,auStack_48,1,0);
  uVar2 = DAT_101057928;
  uVar1 = DAT_101057920;
  DAT_101057920 = param_1;
  DAT_101057928 = param_2;
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x1002dec2c | FUN_1002dec2c */

undefined1  [16] FUN_1002dec2c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(&DAT_101057920,param_1,0x21,0);
  auVar1._8_8_ = &DAT_101057920;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1002dec6c | FUN_1002dec6c */

undefined1  [16]
FUN_1002dec6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_4 == '\x01') {
    _swift_bridgeObjectRetain(param_2);
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  FUN_1002decfc();
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x1002decac | FUN_1002decac */

undefined1  [16] FUN_1002decac(void)

{
  undefined8 uVar1;
  undefined1 (*unaff_x20) [16];
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)*unaff_x20;
  uVar2 = *(undefined8 *)(*unaff_x20 + 8);
  auVar3 = *unaff_x20;
  if (unaff_x20[1][8] == '\x01') {
    _swift_bridgeObjectRetain(uVar2);
    return auVar3;
  }
  FUN_1002decfc(uVar1,uVar2,*(undefined8 *)unaff_x20[1]);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1002decfc | FUN_1002decfc */

undefined1  [16] FUN_1002decfc(byte param_1,char *param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  pcVar6 = (char *)0x656369766564;
  if (param_1 != 4) {
    pcVar6 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (param_1 != 3) {
    pcVar2 = pcVar6;
  }
  puVar5 = &DAT_e400000000000000;
  if (param_1 != 3) {
    puVar5 = puVar1;
  }
  pcVar6 = &DAT_65707974;
  if (param_1 != 1) {
    pcVar6 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_1 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x707061;
  if (param_1 != 0) {
    pcVar3 = pcVar6;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar4 = puVar1;
  }
  if (param_1 < 3) {
    puVar5 = puVar4;
    pcVar2 = pcVar3;
  }
  SVar7.bridgeObject = puVar5;
  SVar7.str = pcVar2;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  pcVar6 = param_3;
  Swift::String::append(SVar7,SVar10);
  _swift_bridgeObjectRelease(puVar5);
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = &DAT_0000003a;
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar6;
  Swift::String::append(SVar8,SVar11);
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar6;
  Swift::String::append(SVar9,SVar12);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1002dee04 | FUN_1002dee04 */

void FUN_1002dee04(void)

{
  undefined1 *unaff_x20;
  
  FUN_1002decfc(*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1002dee10 | FUN_1002dee10 */

uint FUN_1002dee10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1002d9cd8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x1002dee2c | FUN_1002dee2c */

bool FUN_1002dee2c(char param_1,_StringGuts param_2,_StringGuts param_3,char param_4,
                  undefined *param_5,undefined *param_6)

{
  bool bVar1;
  
  if (param_1 != param_4) {
    return false;
  }
  if ((param_2.unknown == param_5) && (param_3.unknown == param_6)) {
    return true;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    (param_2,param_3,(_StringComparisonResult)(__int8)param_5);
  return bVar1;
}



/* Address: 0x1002dee70 | FUN_1002dee70 */

bool FUN_1002dee70(_StringGuts param_1,_StringGuts param_2,_StringGuts param_3,char param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,char param_8)

{
  bool bVar1;
  
  if (param_4 == '\x01') {
    if (param_8 == '\x01') {
      if ((param_1.unknown == param_5) && (param_2.unknown == param_6)) {
        return true;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_5);
      return bVar1;
    }
  }
  else if ((param_8 != '\x01') && ((((uint)param_5 ^ (uint)param_1.unknown) & 0xff) == 0)) {
    if ((param_2.unknown == param_6) && (param_3.unknown == param_7)) {
      return true;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_2,param_3,(_StringComparisonResult)(__int8)param_6);
    if (bVar1) {
      return true;
    }
  }
  return false;
}



/* Address: 0x1002def18 | FUN_1002def18 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002def54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1002def18(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fbd170,&DAT_100c3e470);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x1002def7c | thunk_FUN_1002def80 */

void thunk_FUN_1002def80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e320;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e320,&DAT_100ec8580);
  DAT_100fbd0a8 = pTVar1;
  return;
}



/* Address: 0x1002def80 | FUN_1002def80 */

void FUN_1002def80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e320;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e320,&DAT_100ec8580);
  DAT_100fbd0a8 = pTVar1;
  return;
}



/* Address: 0x1002defc0 | thunk_FUN_1002defc4 */

void thunk_FUN_1002defc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd0b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e348,&DAT_100ec8618);
  DAT_100fbd0b0 = pTVar1;
  return;
}



/* Address: 0x1002defc4 | FUN_1002defc4 */

void FUN_1002defc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd0b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e348,&DAT_100ec8618);
  DAT_100fbd0b0 = pTVar1;
  return;
}



/* Address: 0x1002df004 | FUN_1002df004 */

undefined1  [16] FUN_1002df004(void)

{
  return ZEXT816(0x100ec8470);
}



/* Address: 0x1002df014 | FUN_1002df014 */

void FUN_1002df014(undefined8 *param_1)

{
  FUN_100008320(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x1002df028 | FUN_1002df028 */

undefined8 * FUN_1002df028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_100008310(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x1002df084 | FUN_1002df084 */

undefined8 * FUN_1002df084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = *(undefined1 *)(param_2 + 3);
  FUN_100008310(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_100008320(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x1002df0f0 | FUN_1002df0f0 */

undefined8 * FUN_1002df0f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_100008320(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x1002df13c | FUN_1002df13c */

undefined1  [16] FUN_1002df13c(void)

{
  return ZEXT816(0x100ec8508);
}



/* Address: 0x1002df14c | FUN_1002df14c */

void FUN_1002df14c(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1002df160 | FUN_1002df160 */

undefined1  [16] FUN_1002df160(void)

{
  return ZEXT816(0x100ec8580);
}



/* Address: 0x1002df170 | FUN_1002df170 */

void FUN_1002df170(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1002df17c | FUN_1002df17c */

undefined1  [16] FUN_1002df17c(void)

{
  return ZEXT816(0x100ec8618);
}



/* Address: 0x1002df18c | thunk_FUN_1000df608 */

void thunk_FUN_1000df608(void)

{
  thunk_FUN_1000df608();
  return;
}



/* Address: 0x1002df190 | FUN_1002df190 */

undefined *
FUN_1002df190(undefined *param_1,undefined *param_2,undefined8 param_3,char param_4,long param_5)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  CharacterSet CVar7;
  CharacterSet CVar8;
  undefined *puVar9;
  undefined *puVar10;
  code **ppcVar11;
  char *pcVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  void *pvVar16;
  undefined8 uVar17;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar18;
  long extraout_x8_01;
  long lVar19;
  undefined8 unaff_x20;
  code *pcVar20;
  code *pcVar21;
  ulong uVar22;
  code *pcVar23;
  code *pcVar24;
  long lVar25;
  CharacterSet in;
  _StringGuts _Var26;
  ulong uVar27;
  String SVar28;
  char *local_1e0;
  void *local_1d8;
  undefined8 *local_1d0;
  long local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  code **local_1b0;
  long local_1a8;
  long local_1a0;
  undefined8 *local_198;
  undefined *local_190;
  code *local_188;
  code *local_180;
  code *local_178;
  undefined *local_170;
  ulong local_168;
  undefined8 local_160;
  undefined *local_158;
  ulong local_150;
  long local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined *local_120;
  code *local_f0;
  undefined *puStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined *puStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  
  puVar15 = &DAT_100fbcfc8;
  FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_100fbcfe0;
  local_1b8 = (long)&local_1e0 - extraout_x8;
  FUN_1000037f0(&DAT_100fbcfe0,&DAT_100c3e180);
  local_1c8 = *(long *)(puVar15 + -8);
  local_1c0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar18 = (undefined8 *)(((long)&local_1e0 - extraout_x8) - extraout_x8_00);
  local_1d0 = puVar18;
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar19 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  in.unknown = (undefined *)((long)puVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_1002dde30();
  local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((param_4 == '\x01') &&
     (CVar8.unknown = param_1, local_148 = param_5, FUN_1002dda20(param_1,param_2,param_3,1),
     ((ulong)CVar8.unknown & 1) == 0)) {
    local_140 = param_1;
    local_138 = param_2;
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
    FUN_1002da77c();
    SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar19 + 8))(in.unknown,CVar7.unknown);
    local_1b0 = &local_f0;
    puVar15 = &DAT_100ec86a0;
    _swift_allocObject(&DAT_100ec86a0,0x28,7);
    *(undefined8 *)(puVar15 + 0x10) = unaff_x20;
    *(String *)(puVar15 + 0x18) = SVar28;
    puVar9 = &DAT_100ec86c8;
    _swift_allocObject(&DAT_100ec86c8,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_1002dfbe8;
    *(undefined **)(puVar9 + 0x18) = puVar15;
    local_f0 = FUN_1002dfc04;
    local_e0 = FUN_1002dfc18;
    uStack_d8 = 0;
    puVar15 = &DAT_100ec86f0;
    puStack_e8 = puVar9;
    _swift_allocObject(&DAT_100ec86f0,0x28,7);
    *(undefined8 *)(puVar15 + 0x10) = unaff_x20;
    *(String *)(puVar15 + 0x18) = SVar28;
    puVar9 = &DAT_100ec8718;
    _swift_allocObject(&DAT_100ec8718,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_1002dfd30;
    *(undefined **)(puVar9 + 0x18) = puVar15;
    local_d0 = FUN_1002e0f5c;
    local_c0 = FUN_1002dfc28;
    uStack_b8 = 0;
    puVar15 = &DAT_100ec8740;
    puStack_c8 = puVar9;
    _swift_allocObject(&DAT_100ec8740,0x28,7);
    *(undefined8 *)(puVar15 + 0x10) = unaff_x20;
    *(String *)(puVar15 + 0x18) = SVar28;
    puVar9 = &DAT_100ec8768;
    _swift_allocObject(&DAT_100ec8768,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_1002dfe18;
    *(undefined **)(puVar9 + 0x18) = puVar15;
    local_b0 = FUN_1002e0f5c;
    local_a0 = FUN_1002dfc3c;
    uStack_98 = 0;
    puVar15 = &DAT_100ec8790;
    puStack_a8 = puVar9;
    _swift_allocObject(&DAT_100ec8790,0x28,7);
    *(undefined8 *)(puVar15 + 0x10) = unaff_x20;
    *(String *)(puVar15 + 0x18) = SVar28;
    puVar9 = &DAT_100ec87b8;
    local_1e0 = SVar28.str;
    _swift_allocObject(&DAT_100ec87b8,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_1002e0008;
    *(undefined **)(puVar9 + 0x18) = puVar15;
    local_90 = FUN_1002e0f5c;
    local_80 = FUN_1002dfc50;
    uStack_78 = 0;
    puStack_88 = puVar9;
    _swift_retain_n();
    local_1d8 = SVar28.bridgeObject;
    _swift_bridgeObjectRetain_n(SVar28.bridgeObject,4);
    lVar19 = 0;
    local_1a0 = 0;
    local_198 = (undefined8 *)(local_148 + 0x30);
    lVar25 = local_148;
    do {
      ppcVar11 = local_1b0 + lVar19 * 4;
      pcVar20 = ppcVar11[2];
      pcVar21 = ppcVar11[3];
      pcVar24 = *ppcVar11;
      pcVar23 = ppcVar11[1];
      local_1a8 = lVar19;
      _swift_retain(pcVar23);
      _swift_retain(pcVar21);
      lVar19 = local_1a0;
      (*pcVar24)(&local_140);
      if (lVar19 == 0) {
        local_168 = *(ulong *)(local_140 + 0x10);
        local_1a0 = lVar19;
        if (local_168 == 0) {
          local_158 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          local_170 = local_140 + 0x20;
          local_158 = PTR___swiftEmptyArrayStorage_100eae0d8;
          local_190 = local_140;
          puVar15 = local_140;
          uVar27 = 0;
          local_188 = pcVar23;
          local_180 = pcVar20;
          local_178 = pcVar21;
LAB_1002df648:
          do {
            if (*(ulong *)(puVar15 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x1002dfb14);
              (*pcVar20)();
            }
            local_160 = *(undefined8 *)(local_170 + uVar27 * 0x10);
            _Var26.unknown = *(undefined **)((long)(local_170 + uVar27 * 0x10) + 8);
            local_150 = uVar27 + 1;
            local_128 = local_160;
            local_120 = _Var26.unknown;
            _swift_bridgeObjectRetain(_Var26.unknown);
            (*pcVar20)(&local_140,&local_128);
            puVar9 = local_130;
            puVar15 = local_138;
            uVar27 = *(ulong *)(lVar25 + 0x10);
            if (uVar27 != 0) {
              uVar22 = 0;
              cVar5 = (char)local_140;
              puVar18 = local_198;
              do {
                if (*(ulong *)(lVar25 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)SoftwareBreakpoint(1,0x1002df8e4);
                  (*pcVar20)();
                }
                _Var1.unknown = (undefined *)puVar18[-1];
                _Var2.unknown = (undefined *)*puVar18;
                cVar4 = *(char *)(puVar18 + -2);
                _swift_bridgeObjectRetain(_Var2.unknown);
                if (cVar4 == cVar5) {
                  if (_Var1.unknown == puVar15 && _Var2.unknown == puVar9) {
                    _swift_bridgeObjectRelease(puVar9);
                    puVar9 = _Var26.unknown;
                    _Var26.unknown = _Var2.unknown;
                  }
                  else {
                    bVar6 = Swift::_stringCompareWithSmolCheck
                                      (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar15);
                    _swift_bridgeObjectRelease(_Var2.unknown);
                    if (!bVar6) goto LAB_1002df6d8;
                  }
                  _swift_bridgeObjectRelease(puVar9);
                  _swift_bridgeObjectRelease(_Var26.unknown);
                  puVar15 = local_190;
                  uVar27 = local_150;
                  pcVar21 = local_178;
                  pcVar23 = local_188;
                  lVar25 = local_148;
                  pcVar20 = local_180;
                  if (local_150 != local_168) goto LAB_1002df648;
                  goto LAB_1002df88c;
                }
                _swift_bridgeObjectRelease(_Var2.unknown);
LAB_1002df6d8:
                uVar22 = uVar22 + 1;
                puVar18 = puVar18 + 3;
                lVar25 = local_148;
              } while (uVar27 != uVar22);
            }
            _swift_bridgeObjectRelease(puVar9);
            pcVar21 = local_178;
            pcVar20 = local_180;
            local_128 = local_160;
            local_120 = _Var26.unknown;
            (*local_180)(&local_140,&local_128);
            _swift_bridgeObjectRelease(_Var26.unknown);
            puVar14 = local_130;
            puVar9 = local_138;
            uVar27 = (ulong)local_140 & 0xff;
            puVar15 = local_158;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar15 & 1) == 0) {
              puVar15 = (undefined *)0x0;
              FUN_1002daef0(0,*(long *)(local_158 + 0x10) + 1,1);
              local_158 = puVar15;
            }
            pcVar23 = local_188;
            puVar15 = local_190;
            uVar22 = *(ulong *)(local_158 + 0x10);
            if (*(ulong *)(local_158 + 0x18) >> 1 <= uVar22) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(local_158 + 0x18));
              FUN_1002daef0(puVar10,uVar22 + 1,1,local_158);
              local_158 = puVar10;
            }
            *(ulong *)(local_158 + 0x10) = uVar22 + 1;
            *(ulong *)(local_158 + uVar22 * 0x20 + 0x20) = uVar27;
            *(undefined **)(local_158 + uVar22 * 0x20 + 0x28) = puVar9;
            *(undefined **)(local_158 + uVar22 * 0x20 + 0x30) = puVar14;
            local_158[uVar22 * 0x20 + 0x38] = 1;
            uVar27 = local_150;
          } while (local_150 != local_168);
        }
LAB_1002df88c:
        _swift_bridgeObjectRelease();
        puVar15 = local_158;
        uVar27 = *(ulong *)(local_158 + 0x10);
        if (0x1d < uVar27) {
          uVar27 = 0x1e;
        }
        FUN_1002dc874(local_158,local_158 + 0x20,0,uVar27 << 1 | 1);
        _swift_release(pcVar21);
        _swift_release(pcVar23);
        _swift_bridgeObjectRelease(puVar15);
      }
      else {
        _swift_errorRelease(lVar19);
        _swift_release(pcVar23);
        _swift_release(pcVar21);
        local_1a0 = 0;
      }
      lVar19 = local_1a8 + 1;
    } while (lVar19 != 4);
    puVar15 = &DAT_100fbd178;
    FUN_1000037f0(&DAT_100fbd178,&DAT_100c3e490);
    ppcVar11 = local_1b0;
    _swift_arrayDestroy(local_1b0,4,puVar15);
    FUN_1002d8ce0();
    pcVar20 = ppcVar11[2];
    if (pcVar20 != (code *)0x0) {
      pcVar24 = (code *)0x0;
      do {
        puVar18 = local_1d0;
        if (ppcVar11[2] <= pcVar24) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1002dfb18);
          (*pcVar20)();
        }
        FUN_100011090((long)ppcVar11 +
                      *(long *)(local_1c8 + 0x48) * (long)pcVar24 +
                      ((ulong)*(byte *)(local_1c8 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(local_1c8 + 0x50) ^ 0xffffffffffffffff)),local_1d0,
                      &DAT_100fbcfe0,&DAT_100c3e180);
        uVar27 = local_1b8;
        uVar17 = *puVar18;
        uVar3 = puVar18[1];
        FUN_1002e0050((long)puVar18 + (long)*(int *)(local_1c0 + 0x30),local_1b8);
        pcVar12 = local_1e0;
        pvVar16 = local_1d8;
        FUN_1002f5748();
        _swift_bridgeObjectRelease(uVar3);
        lVar19 = *(long *)(pcVar12 + 0x10);
        _swift_bridgeObjectRelease(pcVar12);
        if (lVar19 == 0) {
          FUN_100005808(uVar27,&DAT_100fbcfc8,&DAT_100c3e480);
        }
        else {
          uVar22 = uVar27;
          FUN_1002d9d2c();
          uVar13 = uVar22;
          FUN_100006db8();
          puVar15 = local_70;
          if ((uVar13 & 1) == 0) {
            puVar9 = local_70;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar14 = puVar15;
            if (((ulong)puVar9 & 1) == 0) {
              puVar14 = (undefined *)0x0;
              FUN_1002daef0(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
            }
            uVar27 = *(ulong *)(puVar14 + 0x10);
            puVar15 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar27) {
              puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
              FUN_1002daef0(puVar15,uVar27 + 1,1,puVar14);
            }
            *(ulong *)(puVar15 + 0x10) = uVar27 + 1;
            *(ulong *)(puVar15 + uVar27 * 0x20 + 0x20) = uVar22 & 0xff;
            *(void **)(puVar15 + uVar27 * 0x20 + 0x28) = pvVar16;
            *(undefined8 *)(puVar15 + uVar27 * 0x20 + 0x30) = uVar17;
            puVar15[uVar27 * 0x20 + 0x38] = 1;
            FUN_100005808(local_1b8,&DAT_100fbcfc8,&DAT_100c3e480);
            local_70 = puVar15;
          }
          else {
            FUN_100005808(uVar27,&DAT_100fbcfc8,&DAT_100c3e480);
            _swift_bridgeObjectRelease(uVar17);
          }
        }
        pcVar24 = pcVar24 + 1;
      } while (pcVar20 != pcVar24);
    }
    _swift_bridgeObjectRelease(local_148);
    _swift_bridgeObjectRelease(local_1d8);
    _swift_bridgeObjectRelease(ppcVar11);
  }
  else {
    _swift_bridgeObjectRelease();
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  return local_70;
}



/* Address: 0x1002dfb18 | FUN_1002dfb18 */

undefined * FUN_1002dfb18(long param_1,undefined *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)(param_1 + 0x10);
  FUN_100004640(plVar1,*(undefined8 *)(param_1 + 0x28));
  lVar3 = *plVar1;
  _swift_beginAccess(lVar3 + 0x28,auStack_58,0,0);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar3 + 0x40) != 0) {
    FUN_100076688(lVar3 + 0x28,auStack_80);
    FUN_100004640(auStack_80,local_68);
    (**(code **)(lStack_60 + 8))(param_2,param_3,local_68,lStack_60);
    FUN_100004594(auStack_80);
    puVar2 = param_2;
  }
  return puVar2;
}



/* Address: 0x1002dfbe4 | thunk_FUN_1002dffdc */

void thunk_FUN_1002dffdc(void)

{
  FUN_1002dffdc();
  return;
}



/* Address: 0x1002dfbe8 | FUN_1002dfbe8 */

void FUN_1002dfbe8(void)

{
  long unaff_x20;
  
  FUN_1002dfb18(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002dfc04 | FUN_1002dfc04 */

void FUN_1002dfc04(void)

{
  FUN_1002e0024();
  return;
}



/* Address: 0x1002dfc18 | FUN_1002dfc18 */

void FUN_1002dfc18(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1002dfc28 | FUN_1002dfc28 */

void FUN_1002dfc28(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 1;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1002dfc3c | FUN_1002dfc3c */

void FUN_1002dfc3c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 4;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1002dfc50 | FUN_1002dfc50 */

void FUN_1002dfc50(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 5;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1002dfc64 | FUN_1002dfc64 */

undefined * FUN_1002dfc64(long param_1,undefined *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)(param_1 + 0x10);
  FUN_100004640(plVar1,*(undefined8 *)(param_1 + 0x28));
  lVar3 = *plVar1;
  _swift_beginAccess(lVar3 + 0x28,auStack_58,0,0);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar3 + 0x40) != 0) {
    FUN_100076688(lVar3 + 0x28,auStack_80);
    FUN_100004640(auStack_80,local_68);
    (**(code **)(lStack_60 + 0x10))(param_2,param_3,local_68,lStack_60);
    FUN_100004594(auStack_80);
    puVar2 = param_2;
  }
  return puVar2;
}



/* Address: 0x1002dfd30 | FUN_1002dfd30 */

void FUN_1002dfd30(void)

{
  long unaff_x20;
  
  FUN_1002dfc64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002dfd4c | FUN_1002dfd4c */

undefined * FUN_1002dfd4c(long param_1,undefined *param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  plVar1 = (long *)(param_1 + 0x10);
  FUN_100004640(plVar1,*(undefined8 *)(param_1 + 0x28));
  lVar3 = *plVar1;
  _swift_beginAccess(lVar3 + 0x28,auStack_58,0,0);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar3 + 0x40) != 0) {
    FUN_100076688(lVar3 + 0x28,auStack_80);
    FUN_100004640(auStack_80,local_68);
    (**(code **)(lStack_60 + 0x18))(param_2,param_3,local_68,lStack_60);
    FUN_100004594(auStack_80);
    puVar2 = param_2;
  }
  return puVar2;
}



/* Address: 0x1002dfe18 | FUN_1002dfe18 */

void FUN_1002dfe18(void)

{
  long unaff_x20;
  
  FUN_1002dfd4c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002dfe34 | FUN_1002dfe34 */

void FUN_1002dfe34(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002dfe58 | FUN_1002dfe58 */

undefined * FUN_1002dfe58(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long unaff_x21;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_a0 [3];
  undefined8 local_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  ppuVar6 = local_a0;
  plVar5 = (long *)(param_1 + 0x10);
  FUN_100004640(plVar5,*(undefined8 *)(param_1 + 0x28));
  lVar9 = *plVar5;
  _swift_beginAccess(lVar9 + 0x28,auStack_78,0,0);
  local_a0[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar9 + 0x40) != 0) {
    FUN_100076688(lVar9 + 0x28,local_a0);
    FUN_100004640(local_a0,local_88);
    (**(code **)(lStack_80 + 0x20))(param_2,param_3,local_88,lStack_80);
    FUN_100004594(local_a0);
    puVar8 = param_2;
    if (unaff_x21 != 0) {
      return (undefined *)ppuVar6;
    }
  }
  lVar9 = *(long *)(puVar8 + 0x10);
  if (lVar9 == 0) {
    _swift_bridgeObjectRelease(puVar8);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1002dd1f8(0,lVar9,0);
    puVar10 = (undefined8 *)(puVar8 + 0x28);
    puVar7 = local_a0[0];
    do {
      uVar1 = puVar10[-1];
      uVar3 = *puVar10;
      uVar2 = *(ulong *)(puVar7 + 0x10);
      uVar4 = *(ulong *)(puVar7 + 0x18);
      local_a0[0] = puVar7;
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_1002dd1f8(1 < uVar4,uVar2 + 1,1);
        puVar7 = local_a0[0];
      }
      puVar10 = puVar10 + 4;
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    _swift_bridgeObjectRelease(puVar8);
  }
  return puVar7;
}



/* Address: 0x1002dffdc | FUN_1002dffdc */

void FUN_1002dffdc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e0008 | FUN_1002e0008 */

void FUN_1002e0008(void)

{
  long unaff_x20;
  
  FUN_1002dfe58(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002e0024 | FUN_1002e0024 */

void FUN_1002e0024(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1002e0050 | FUN_1002e0050 */

undefined8 FUN_1002e0050(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbcfc8;
  FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002e00a0 | FUN_1002e00a0 */

/* WARNING: Removing unreachable block (ram,0x0001002e01b4) */
/* WARNING: Removing unreachable block (ram,0x0001002e04ac) */
/* WARNING: Removing unreachable block (ram,0x0001002e0334) */
/* WARNING: Removing unreachable block (ram,0x0001002e08cc) */

char * FUN_1002e00a0(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  void *pvVar5;
  code *pcVar6;
  char *pcVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  Date DVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long unaff_x20;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auStack_150 [8];
  String local_110;
  undefined8 local_f8;
  long lStack_f0;
  undefined *local_e8 [3];
  long local_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  char *local_80;
  
  puVar9 = &DAT_100fbcfe0;
  FUN_1000037f0(&DAT_100fbcfe0,&DAT_100c3e180);
  lVar13 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  pcVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002e0d40(PTR___swiftEmptyArrayStorage_100eae0d8,&DAT_100fbd198,&DAT_100c3e4d0);
  plVar8 = (long *)(unaff_x20 + 0x10);
  local_80 = pcVar7;
  FUN_100004640(plVar8,*(undefined8 *)(unaff_x20 + 0x28));
  lVar14 = *plVar8;
  _swift_beginAccess(lVar14 + 0x28,auStack_98,0,0);
  if (*(long *)(lVar14 + 0x40) == 0) {
    lVar14 = *(long *)(pcVar11 + 0x10);
    puVar9 = pcVar11;
  }
  else {
    FUN_100076688(lVar14 + 0x28,&local_110);
    lVar14 = lStack_f0;
    uVar2 = local_f8;
    FUN_100004640(&local_110,local_f8);
    puVar9 = (undefined *)0x0;
    (**(code **)(lVar14 + 0x10))(0,0xe000000000000000,uVar2,lVar14);
    FUN_100004594(&local_110);
    lVar14 = *(long *)(puVar9 + 0x10);
  }
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(puVar9);
  }
  else {
    local_110.str = pcVar11;
    FUN_1002dd230(0,lVar14,0);
    puVar15 = (undefined8 *)(puVar9 + 0x28);
    pcVar11 = local_110.str;
    do {
      uVar2 = puVar15[-1];
      uVar3 = *puVar15;
      local_110.str = pcVar11;
      uVar17 = *(ulong *)(pcVar11 + 0x10);
      uVar16 = *(ulong *)(pcVar11 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar16 >> 1 <= uVar17) {
        FUN_1002dd230(1 < uVar16,uVar17 + 1,1);
        pcVar11 = local_110.str;
      }
      *(ulong *)(pcVar11 + 0x10) = uVar17 + 1;
      pcVar11[uVar17 * 0x18 + 0x20] = '\x01';
      puVar15 = puVar15 + 2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x28) = uVar2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x30) = uVar3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(puVar9);
  }
  FUN_1002e0a08(pcVar11,1);
  plVar8 = (long *)(unaff_x20 + 0x10);
  FUN_100004640(plVar8,*(undefined8 *)(unaff_x20 + 0x28));
  lVar14 = *plVar8;
  _swift_beginAccess(lVar14 + 0x28,auStack_b0,0,0);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar14 + 0x40) == 0) {
    lVar14 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100076688(lVar14 + 0x28,&local_110);
    lVar14 = lStack_f0;
    uVar2 = local_f8;
    FUN_100004640(&local_110,local_f8);
    puVar10 = (undefined *)0x0;
    (**(code **)(lVar14 + 8))(0,0xe000000000000000,uVar2,lVar14);
    FUN_100004594(&local_110);
    lVar14 = *(long *)(puVar10 + 0x10);
  }
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(puVar10);
    pcVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_110.str = puVar9;
    FUN_1002dd230(0,lVar14,0);
    puVar15 = (undefined8 *)(puVar10 + 0x28);
    pcVar11 = local_110.str;
    do {
      uVar2 = puVar15[-1];
      uVar3 = *puVar15;
      local_110.str = pcVar11;
      uVar17 = *(ulong *)(pcVar11 + 0x10);
      uVar16 = *(ulong *)(pcVar11 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar16 >> 1 <= uVar17) {
        FUN_1002dd230(1 < uVar16,uVar17 + 1,1);
        pcVar11 = local_110.str;
      }
      *(ulong *)(pcVar11 + 0x10) = uVar17 + 1;
      pcVar11[uVar17 * 0x18 + 0x20] = '\0';
      puVar15 = puVar15 + 2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x28) = uVar2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x30) = uVar3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(puVar10);
  }
  FUN_1002e0a08(pcVar11,0);
  plVar8 = (long *)(unaff_x20 + 0x10);
  FUN_100004640(plVar8,*(undefined8 *)(unaff_x20 + 0x28));
  lVar14 = *plVar8;
  _swift_beginAccess(lVar14 + 0x28,auStack_c8,0,0);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar14 + 0x40) == 0) {
    lVar14 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100076688(lVar14 + 0x28,&local_110);
    lVar14 = lStack_f0;
    uVar2 = local_f8;
    FUN_100004640(&local_110,local_f8);
    puVar10 = (undefined *)0x0;
    (**(code **)(lVar14 + 0x18))(0,0xe000000000000000,uVar2,lVar14);
    FUN_100004594(&local_110);
    lVar14 = *(long *)(puVar10 + 0x10);
  }
  if (lVar14 == 0) {
    _swift_bridgeObjectRelease(puVar10);
    pcVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_110.str = puVar9;
    FUN_1002dd230(0,lVar14,0);
    puVar15 = (undefined8 *)(puVar10 + 0x28);
    pcVar11 = local_110.str;
    do {
      uVar2 = puVar15[-1];
      uVar3 = *puVar15;
      local_110.str = pcVar11;
      uVar17 = *(ulong *)(pcVar11 + 0x10);
      uVar16 = *(ulong *)(pcVar11 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar16 >> 1 <= uVar17) {
        FUN_1002dd230(1 < uVar16,uVar17 + 1,1);
        pcVar11 = local_110.str;
      }
      *(ulong *)(pcVar11 + 0x10) = uVar17 + 1;
      pcVar11[uVar17 * 0x18 + 0x20] = '\x04';
      puVar15 = puVar15 + 2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x28) = uVar2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x30) = uVar3;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(puVar10);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  FUN_1002e0a08(pcVar11,4);
  FUN_1002d8ce0();
  uVar17 = *(ulong *)(pcVar11 + 0x10);
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease(pcVar11);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_e8[0] = puVar9;
    FUN_1002dd230(0,uVar17,0);
    uVar16 = 0;
    bVar4 = *(byte *)(lVar13 + 0x50);
    do {
      puVar9 = local_e8[0];
      if (*(ulong *)(pcVar11 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e09f0);
        (*pcVar6)();
      }
      DVar12.unknown =
           pcVar11 + *(long *)(lVar13 + 0x48) * uVar16 +
                     ((ulong)bVar4 + 0x20 & ((ulong)bVar4 ^ 0xffffffffffffffff));
      pcVar7 = &DAT_100fbcfe0;
      puVar10 = &DAT_100c3e180;
      FUN_100011090(DVar12.unknown,auStack_150 + -extraout_x8);
      dVar18 = Foundation::Date::get_timeIntervalSince1970(DVar12);
      dVar18 = (double)(long)dVar18;
      if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e09f4);
        (*pcVar6)();
      }
      if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e09f8);
        (*pcVar6)();
      }
      if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e09fc);
        (*pcVar6)();
      }
      DVar12.unknown = &DAT_100fbcfc8;
      FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
      dVar19 = Foundation::Date::get_timeIntervalSince1970(DVar12);
      dVar19 = (double)(long)dVar19;
      if (0x7fefffffffffffff < (ulong)ABS(dVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e0a00);
        (*pcVar6)();
      }
      if (dVar19 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e0a04);
        (*pcVar6)();
      }
      if (9.223372036854776e+18 <= dVar19) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e0a08);
        (*pcVar6)();
      }
      local_d0 = (long)dVar18;
      local_110 = Swift::CustomStringConvertible::get_description();
      SVar20.bridgeObject = (void *)0xe100000000000000;
      SVar20.str = (char *)0x20;
      SVar21.bridgeObject = puVar10;
      SVar21.str = pcVar7;
      Swift::String::append(SVar20,SVar21);
      local_d0 = (long)dVar19;
      SVar20 = Swift::CustomStringConvertible::get_description();
      SVar22.bridgeObject = puVar10;
      SVar22.str = pcVar7;
      Swift::String::append(SVar20,SVar22);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      pcVar7 = local_110.str;
      pvVar5 = local_110.bridgeObject;
      FUN_100005808(auStack_150 + -extraout_x8,&DAT_100fbcfe0,&DAT_100c3e180);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      local_e8[0] = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_1002dd230(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      puVar9 = local_e8[0];
      *(ulong *)(local_e8[0] + 0x10) = uVar1 + 1;
      local_e8[0][uVar1 * 0x18 + 0x20] = 3;
      uVar16 = uVar16 + 1;
      *(char **)(local_e8[0] + uVar1 * 0x18 + 0x28) = pcVar7;
      *(void **)(local_e8[0] + uVar1 * 0x18 + 0x30) = pvVar5;
    } while (uVar17 != uVar16);
    _swift_bridgeObjectRelease(pcVar11);
  }
  pcVar11 = local_80;
  pcVar7 = local_80;
  _swift_isUniquelyReferenced_nonNull_native(local_80);
  local_110.str = pcVar11;
  FUN_1002e0ad8(puVar9,3,pcVar7);
  local_80 = local_110.str;
  plVar8 = (long *)(unaff_x20 + 0x10);
  FUN_100004640(plVar8,*(undefined8 *)(unaff_x20 + 0x28));
  lVar13 = *plVar8;
  _swift_beginAccess(lVar13 + 0x28,local_e8,0,0);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(lVar13 + 0x40) == 0) {
    lVar13 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100076688(lVar13 + 0x28,&local_110);
    FUN_100004640(&local_110,local_f8);
    puVar10 = (undefined *)0x0;
    (**(code **)(lStack_f0 + 0x20))(0,0xe000000000000000,local_f8,lStack_f0);
    FUN_100004594(&local_110);
    lVar13 = *(long *)(puVar10 + 0x10);
  }
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(puVar10);
    pcVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_110.str = puVar9;
    FUN_1002dd230(0,lVar13,0);
    puVar15 = (undefined8 *)(puVar10 + 0x28);
    pcVar11 = local_110.str;
    do {
      uVar2 = puVar15[-1];
      uVar3 = *puVar15;
      local_110.str = pcVar11;
      uVar17 = *(ulong *)(pcVar11 + 0x10);
      uVar16 = *(ulong *)(pcVar11 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar16 >> 1 <= uVar17) {
        FUN_1002dd230(1 < uVar16,uVar17 + 1,1);
        pcVar11 = local_110.str;
      }
      *(ulong *)(pcVar11 + 0x10) = uVar17 + 1;
      pcVar11[uVar17 * 0x18 + 0x20] = '\x05';
      puVar15 = puVar15 + 4;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x28) = uVar2;
      *(undefined8 *)(pcVar11 + uVar17 * 0x18 + 0x30) = uVar3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_bridgeObjectRelease(puVar10);
  }
  FUN_1002e0a08(pcVar11,5);
  return local_80;
}



/* Address: 0x1002e0a08 | FUN_1002e0a08 */

void FUN_1002e0a08(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    lVar2 = *unaff_x20;
    uVar3 = param_2;
    _swift_bridgeObjectRetain(lVar2);
    FUN_1002f9310();
    _swift_bridgeObjectRelease(lVar2);
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_1002f944c();
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      FUN_1002fa178(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(lVar2);
    lVar4 = *unaff_x20;
    FUN_1002e0ad8(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Address: 0x1002e0ad8 | FUN_1002e0ad8 */

void FUN_1002e0ad8(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1002f9310();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e0b9c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_1002f98e8(lVar5);
    uVar2 = param_2;
    FUN_1002f9310();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e0b68);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1002f944c();
    lVar5 = *unaff_x20;
    goto joined_r0x0001002e0bb0;
  }
  lVar5 = *unaff_x20;
joined_r0x0001002e0bb0:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(char *)(*(long *)(lVar5 + 0x30) + uVar2) = (char)param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e0c08);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Address: 0x1002e0c08 | FUN_1002e0c08 */

void FUN_1002e0c08(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e0ce8);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1002f9a98(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e0ca8);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1002f95c0();
    lVar4 = *unaff_x20;
    goto joined_r0x0001002e0cfc;
  }
  lVar4 = *unaff_x20;
joined_r0x0001002e0cfc:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1002e0d2c | FUN_1002e0d2c */

void FUN_1002e0d2c(undefined8 param_1)

{
  FUN_1002e0d40(param_1,&DAT_100fbd190,&DAT_100c3e4c8);
  return;
}


