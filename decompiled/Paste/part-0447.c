/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10056a8a8 | FUN_10056a8a8 */

void FUN_10056a8a8(void)

{
  FUN_1005422ec();
  return;
}



/* Address: 0x10056a8b4 | FUN_10056a8b4 */

String FUN_10056a8b4(void)

{
  String SVar1;
  
  FUN_10056aa54();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056a8dc | FUN_10056a8dc */

String FUN_10056a8dc(void)

{
  String SVar1;
  
  FUN_10056aa54();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056a904 | FUN_10056a904 */

void FUN_10056a904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0530;
  FUN_1000f7830(&DAT_100fd0530,&DAT_100c5a3a0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056aa54();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(0x6f7365722f666572,0xec00000065637275,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(param_2,param_3,&local_52,puVar1);
    (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10056aa54 | FUN_10056aa54 */

void FUN_10056aa54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b018,&DAT_100ee08a0);
  DAT_100fd0538 = pTVar1;
  return;
}



/* Address: 0x10056aa94 | FUN_10056aa94 */

void FUN_10056aa94(void)

{
  FUN_10056ced0();
  return;
}



/* Address: 0x10056aaa8 | FUN_10056aaa8 */

void FUN_10056aaa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10056ced0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10056aad0 | FUN_10056aad0 */

void FUN_10056aad0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056a904(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10056aae8 | FUN_10056aae8 */

void FUN_10056aae8(void)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e400000000000000;
  SVar1.str = &DAT_65707974;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056ab30 | FUN_10056ab30 */

void FUN_10056ab30(Hasher param_1)

{
  String SVar1;
  
  SVar1.bridgeObject = &DAT_e400000000000000;
  SVar1.str = &DAT_65707974;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x10056ab40 | FUN_10056ab40 */

void FUN_10056ab40(__int64 param_1)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e400000000000000;
  SVar1.str = &DAT_65707974;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056ab84 | FUN_10056ab84 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010056abc4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10056ab84(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __int64 _Var3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var3 = Swift::_findStringSwitchCase(param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(bool *)param_1 = _Var3 != 0;
  return;
}



/* Address: 0x10056abf0 | FUN_10056abf0 */

void FUN_10056abf0(undefined8 *param_1)

{
  *param_1 = &DAT_65707974;
  param_1[1] = &DAT_e400000000000000;
  return;
}



/* Address: 0x10056ac04 | FUN_10056ac04 */

undefined1  [16] FUN_10056ac04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = &DAT_65707974;
  return auVar1;
}



/* Address: 0x10056ac14 | FUN_10056ac14 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010056ac58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10056ac14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __int64 _Var1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var1 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  *(bool *)param_1 = _Var1 != 0;
  return;
}



/* Address: 0x10056ac84 | FUN_10056ac84 */

String FUN_10056ac84(void)

{
  String SVar1;
  
  FUN_10056f388();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056acac | FUN_10056acac */

String FUN_10056acac(void)

{
  String SVar1;
  
  FUN_10056f388();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056acd4 | FUN_10056acd4 */

void FUN_10056acd4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_10056d0f4(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    *(undefined1 *)(param_1 + 4) = local_28;
  }
  return;
}



/* Address: 0x10056ad18 | FUN_10056ad18 */

void FUN_10056ad18(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  if (*(char *)(unaff_x20 + 4) == '\x01') {
    FUN_10056a904();
    return;
  }
  FUN_1005718e0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10056ad4c | thunk_FUN_10056cb7c */

void thunk_FUN_10056cb7c(void)

{
  FUN_10056cb7c();
  return;
}



/* Address: 0x10056ad50 | FUN_10056ad50 */

void FUN_10056ad50(Hasher param_1,Hasher param_2)

{
  Hasher HVar1;
  char *pcVar2;
  void *pvVar3;
  String *unaff_x20;
  String SVar4;
  
  HVar1.unknown = unaff_x20->str;
  pvVar3 = unaff_x20->bridgeObject;
  SVar4 = *unaff_x20;
  if (*(char *)&unaff_x20[2].str == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    pcVar2 = HVar1.unknown;
  }
  else {
    pcVar2 = unaff_x20[1].str;
    pvVar3 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash(param_1,SVar4);
    if (pvVar3 == (void *)0x0) {
      Swift::Hasher::_combine(0,HVar1);
      return;
    }
    Swift::Hasher::_combine(1,HVar1);
  }
  SVar4.bridgeObject = pvVar3;
  SVar4.str = pcVar2;
  Swift::String::hash(param_1,SVar4);
  return;
}



/* Address: 0x10056ae04 | FUN_10056ae04 */

void FUN_10056ae04(undefined8 param_1,Hasher param_2)

{
  Hasher into;
  Hasher HVar1;
  char *pcVar2;
  String *unaff_x20;
  String SVar4;
  undefined1 auStack_88 [72];
  void *pvVar3;
  
  Swift::Hasher::init(0);
  HVar1.unknown = unaff_x20->str;
  pvVar3 = unaff_x20->bridgeObject;
  SVar4 = *unaff_x20;
  if (*(char *)&unaff_x20[2].str == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    pcVar2 = HVar1.unknown;
  }
  else {
    pcVar2 = unaff_x20[1].str;
    pvVar3 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash((Hasher)auStack_88,SVar4);
    if (pvVar3 == (void *)0x0) {
      into.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar1);
      goto LAB_10056ae94;
    }
    Swift::Hasher::_combine(1,HVar1);
  }
  into.unknown = auStack_88;
  SVar4.bridgeObject = pvVar3;
  SVar4.str = pcVar2;
  Swift::String::hash(into,SVar4);
LAB_10056ae94:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056aec0 | FUN_10056aec0 */

void FUN_10056aec0(undefined8 param_1,Hasher param_2)

{
  void *pvVar1;
  char cVar2;
  Hasher into;
  Hasher HVar3;
  char *pcVar4;
  String *unaff_x20;
  String SVar6;
  undefined1 auStack_88 [72];
  void *pvVar5;
  
  HVar3.unknown = unaff_x20->str;
  pvVar1 = unaff_x20->bridgeObject;
  SVar6 = *unaff_x20;
  pcVar4 = unaff_x20[1].str;
  pvVar5 = unaff_x20[1].bridgeObject;
  cVar2 = *(char *)&unaff_x20[2].str;
  Swift::Hasher::init(0);
  if (cVar2 == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    pcVar4 = HVar3.unknown;
    pvVar5 = pvVar1;
  }
  else {
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash((Hasher)auStack_88,SVar6);
    if (pvVar5 == (void *)0x0) {
      into.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar3);
      goto LAB_10056af50;
    }
    Swift::Hasher::_combine(1,HVar3);
  }
  into.unknown = auStack_88;
  SVar6.bridgeObject = pvVar5;
  SVar6.str = pcVar4;
  Swift::String::hash(into,SVar6);
LAB_10056af50:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056af7c | FUN_10056af7c */

void FUN_10056af7c(__int64 param_1,Hasher param_2)

{
  void *pvVar1;
  char cVar2;
  Hasher into;
  Hasher HVar3;
  char *pcVar4;
  String *unaff_x20;
  String SVar6;
  undefined1 auStack_88 [72];
  void *pvVar5;
  
  HVar3.unknown = unaff_x20->str;
  pvVar1 = unaff_x20->bridgeObject;
  SVar6 = *unaff_x20;
  pcVar4 = unaff_x20[1].str;
  pvVar5 = unaff_x20[1].bridgeObject;
  cVar2 = *(char *)&unaff_x20[2].str;
  Swift::Hasher::init(param_1);
  if (cVar2 == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    pcVar4 = HVar3.unknown;
    pvVar5 = pvVar1;
  }
  else {
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash((Hasher)auStack_88,SVar6);
    if (pvVar5 == (void *)0x0) {
      into.unknown = (undefined *)0x0;
      Swift::Hasher::_combine(0,HVar3);
      goto LAB_10056b008;
    }
    Swift::Hasher::_combine(1,HVar3);
  }
  into.unknown = auStack_88;
  SVar6.bridgeObject = pvVar5;
  SVar6.str = pcVar4;
  Swift::String::hash(into,SVar6);
LAB_10056b008:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056b034 | FUN_10056b034 */

uint FUN_10056b034(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10056cb7c(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x10056b07c | FUN_10056b07c */

undefined * FUN_10056b07c(void)

{
  return &DAT_100ee01d8;
}



/* Address: 0x10056b088 | FUN_10056b088 */

undefined1  [16] FUN_10056b088(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad4c0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Address: 0x10056b0a4 | FUN_10056b0a4 */

void FUN_10056b0a4(void)

{
  FUN_10056d3fc();
  return;
}



/* Address: 0x10056b0b0 | FUN_10056b0b0 */

undefined8 FUN_10056b0b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRetain(uVar2);
  return uVar1;
}



/* Address: 0x10056b0f8 | FUN_10056b0f8 */

undefined1  [16] FUN_10056b0f8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar1 = &DAT_65756c6176;
  if (*unaff_x20 != '\x01') {
    puVar1 = (undefined1 *)0x656d616e;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = puVar1;
  return auVar3;
}



/* Address: 0x10056b128 | FUN_10056b128 */

void FUN_10056b128(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != (undefined1 *)0x656d616e || param_3 != &DAT_e400000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == &DAT_65756c6176) && (param_3 == &DAT_e500000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e500000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x65756c6176,(_StringGuts)0xe500000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10056b188;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10056b188:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10056b1fc | FUN_10056b1fc */

String FUN_10056b1fc(void)

{
  String SVar1;
  
  FUN_10056d45c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056b224 | FUN_10056b224 */

String FUN_10056b224(void)

{
  String SVar1;
  
  FUN_10056d45c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056b24c | FUN_10056b24c */

bool FUN_10056b24c(_StringGuts param_1,_StringGuts param_2,_StringGuts param_3,_StringGuts param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  bool bVar1;
  
  if (((param_1.unknown != param_5) || (param_2.unknown != param_6)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_5), !bVar1)) {
    return false;
  }
  if ((param_3.unknown == param_7) && (param_4.unknown == param_8)) {
    return true;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    (param_3,param_4,(_StringComparisonResult)(__int8)param_7);
  return bVar1;
}



/* Address: 0x10056b2e0 | FUN_10056b2e0 */

void FUN_10056b2e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0540;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_1000f7830(&DAT_100fd0540,&DAT_100c5a3a8);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056d45c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(param_2,param_3,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(local_70,uStack_68,&local_52,puVar1);
    (**(code **)(lVar2 + 8))((long)&local_70 - extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))((long)&local_70 - extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10056b420 | FUN_10056b420 */

void FUN_10056b420(Hasher param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2;
  Swift::String::hash(param_1,SVar1);
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::hash(param_1,SVar2);
  return;
}



/* Address: 0x10056b45c | FUN_10056b45c */

void FUN_10056b45c(char *param_1,void *param_2,char *param_3,void *param_4)

{
  Hasher into;
  String SVar1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  Swift::String::hash((Hasher)auStack_78,SVar1);
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::hash(into,SVar2);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056b4c8 | FUN_10056b4c8 */

undefined8 FUN_10056b4c8(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_10056d49c();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x10056b4f0 | FUN_10056b4f0 */

void FUN_10056b4f0(void)

{
  String SVar1;
  String SVar2;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  SVar1 = *unaff_x20;
  SVar2 = unaff_x20[1];
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_78,SVar1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056b554 | FUN_10056b554 */

void FUN_10056b554(Hasher param_1)

{
  String SVar1;
  String *unaff_x20;
  
  SVar1 = unaff_x20[1];
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x10056b590 | FUN_10056b590 */

void FUN_10056b590(__int64 param_1)

{
  String SVar1;
  String SVar2;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  SVar1 = *unaff_x20;
  SVar2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_78,SVar1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10056b5f0 | FUN_10056b5f0 */

void FUN_10056b5f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10056d49c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x10056b61c | FUN_10056b61c */

void FUN_10056b61c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056b2e0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10056b638 | FUN_10056b638 */

bool FUN_10056b638(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  bool bVar4;
  _StringGuts _Var5;
  
  _Var2.unknown = (undefined *)param_1[2];
  _Var5.unknown = (undefined *)param_1[3];
  puVar1 = (undefined *)param_2[2];
  puVar3 = (undefined *)param_2[3];
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar4 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar4)) {
    return false;
  }
  if (_Var2.unknown == puVar1 && _Var5.unknown == puVar3) {
    return true;
  }
  bVar4 = Swift::_stringCompareWithSmolCheck(_Var2,_Var5,(_StringComparisonResult)(__int8)puVar1);
  return bVar4;
}



/* Address: 0x10056b6c8 | FUN_10056b6c8 */

undefined1  [16] FUN_10056b6c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000073;
  auVar1._0_8_ = 0x746e656d75677261;
  return auVar1;
}



/* Address: 0x10056b6e4 | FUN_10056b6e4 */

void FUN_10056b6e4(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x746e656d75677261 && param_3 == -0x16ffffffffffff8d) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x746e656d75677261,(_StringGuts)0xe900000000000073,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x10056b770 | FUN_10056b770 */

String FUN_10056b770(void)

{
  String SVar1;
  
  FUN_10056d624();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056b798 | FUN_10056b798 */

String FUN_10056b798(void)

{
  String SVar1;
  
  FUN_10056d624();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056b7c0 | thunk_FUN_100524400 */

void thunk_FUN_100524400(void)

{
  FUN_100524400();
  return;
}



/* Address: 0x10056b7c4 | FUN_10056b7c4 */

void FUN_10056b7c4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = &DAT_100fd0550;
  FUN_1000f7830(&DAT_100fd0550,&DAT_100c5a3b0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056d624();
  Swift::Encoder::_container();
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
  FUN_10054d580(&DAT_100fcc368,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
  Swift::KeyedEncodingContainer::_encode(&local_58);
  (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10056b8ec | thunk_FUN_1004df90c */

void thunk_FUN_1004df90c(void)

{
  FUN_1004df90c();
  return;
}



/* Address: 0x10056b8f0 | FUN_10056b8f0 */

void FUN_10056b8f0(undefined8 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1004df90c(HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056b934 | FUN_10056b934 */

void FUN_10056b934(void)

{
  FUN_10056d664();
  return;
}



/* Address: 0x10056b948 | FUN_10056b948 */

void FUN_10056b948(void)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1004df90c(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056b98c | FUN_10056b98c */

void FUN_10056b98c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004df90c(param_1,*unaff_x20);
  return;
}



/* Address: 0x10056b994 | FUN_10056b994 */

void FUN_10056b994(__int64 param_1)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1004df90c(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056b9d4 | FUN_10056b9d4 */

void FUN_10056b9d4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10056d664();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10056b9fc | FUN_10056b9fc */

void FUN_10056b9fc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056b7c4(param_1,*unaff_x20);
  return;
}



/* Address: 0x10056ba14 | FUN_10056ba14 */

void FUN_10056ba14(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100524400(*param_1,*param_2);
  return;
}



/* Address: 0x10056ba20 | FUN_10056ba20 */

undefined1  [16] FUN_10056ba20(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x746e656d75677261;
  if (cVar5 != '\x01') {
    uVar1 = 0x747865746e6f63;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x666572;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = (undefined1 *)0xe300000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x10056ba74 | FUN_10056ba74 */

void FUN_10056ba74(undefined1 *param_1,undefined1 param_2)

{
  FUN_10056d8b4();
  *param_1 = param_2;
  return;
}



/* Address: 0x10056ba98 | FUN_10056ba98 */

String FUN_10056ba98(void)

{
  String SVar1;
  
  FUN_10056d7b4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056bac0 | FUN_10056bac0 */

String FUN_10056bac0(void)

{
  String SVar1;
  
  FUN_10056d7b4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056bae8 | thunk_FUN_10056cc5c */

void thunk_FUN_10056cc5c(void)

{
  FUN_10056cc5c();
  return;
}


