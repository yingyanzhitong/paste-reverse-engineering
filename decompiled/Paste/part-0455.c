/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005751fc | FUN_1005751fc */

void FUN_1005751fc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1005761f4(*param_1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2]);
  return;
}



/* Address: 0x100575218 | FUN_100575218 */

void FUN_100575218(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x736567617373656d;
  if (cVar3 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar3 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  HVar5.unknown = &DAT_eb000000006e6f69;
  pcVar4 = (char *)0x7470697263736564;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005752bc | FUN_1005752bc */

void FUN_1005752bc(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar4 = *unaff_x20;
  pcVar1 = (char *)0x736567617373656d;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  puVar3 = &DAT_eb000000006e6f69;
  pcVar5 = (char *)0x7470697263736564;
  if (cVar4 != '\0') {
    puVar3 = puVar2;
    pcVar5 = pcVar1;
  }
  SVar6.bridgeObject = puVar3;
  SVar6.str = pcVar5;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x10057533c | FUN_10057533c */

void FUN_10057533c(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x736567617373656d;
  if (cVar3 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar3 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  HVar5.unknown = &DAT_eb000000006e6f69;
  pcVar4 = (char *)0x7470697263736564;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005753dc | FUN_1005753dc */

void FUN_1005753dc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd12c0);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100575410 | FUN_100575410 */

void FUN_100575410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x736567617373656d;
  if (cVar4 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  puVar3 = &DAT_eb000000006e6f69;
  uVar5 = 0x7470697263736564;
  if (cVar4 != '\0') {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = puVar3;
  return;
}



/* Address: 0x100575474 | FUN_100575474 */

undefined1  [16] FUN_100575474(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  uVar1 = 0x736567617373656d;
  if (cVar4 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  puVar3 = &DAT_eb000000006e6f69;
  uVar5 = 0x7470697263736564;
  if (cVar4 != '\0') {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Address: 0x1005754d4 | FUN_1005754d4 */

void FUN_1005754d4(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd12c0);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x100575500 | FUN_100575500 */

void FUN_100575500(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd1358;
  FUN_1000f7830(&DAT_100fd1358,&DAT_100c5cf10);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x100575540 | FUN_100575540 */

String FUN_100575540(void)

{
  String SVar1;
  
  FUN_100578098();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100575568 | FUN_100575568 */

String FUN_100575568(void)

{
  String SVar1;
  
  FUN_100578098();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100575590 | FUN_100575590 */

void FUN_100575590(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_80 [8];
  ulong local_78;
  ulong uStack_70;
  undefined1 local_61;
  ulong local_58;
  
  puVar2 = &DAT_100fd0ce0;
  local_78 = param_5;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fd0ce0,&BYTE_100c5b960);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100578098();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3,&local_58,puVar2);
  uVar1 = local_78;
  if (unaff_x21 == 0) {
    local_58 = uStack_70;
    local_61 = 1;
    puVar3 = &DAT_100fd0cf0;
    FUN_1000f7830(&DAT_100fd0cf0,&BYTE_100c5b968);
    puVar4 = puVar3;
    FUN_1005780d8();
    puVar5 = &local_58;
    Swift::KeyedEncodingContainer::_encode(puVar5,&local_61,puVar2,puVar3,puVar4);
    local_58 = uVar1;
    local_61 = 2;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_58,&local_61,puVar2,&DAT_100edcda0,puVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x100575724 | FUN_100575724 */

void FUN_100575724(undefined8 param_1)

{
  FUN_100575740(param_1,FUN_100578188);
  return;
}



/* Address: 0x100575740 | FUN_100575740 */

undefined8 FUN_100575740(undefined8 param_1,code *param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  (*param_2)();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x100575768 | thunk_FUN_10057627c */

void thunk_FUN_10057627c(void)

{
  FUN_10057627c();
  return;
}



/* Address: 0x10057576c | FUN_10057576c */

void FUN_10057576c(Hasher param_1,Hasher param_2,void *param_3,Hasher param_4,long param_5)

{
  String SVar1;
  
  if (param_3 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    SVar1.bridgeObject = param_3;
    SVar1.str = param_2.unknown;
    Swift::String::hash(param_1,SVar1);
  }
  FUN_1004d7818(param_1.unknown);
  if (param_5 != 0) {
    Swift::Hasher::_combine(1,param_4);
    FUN_1004df778(param_1.unknown,param_5);
    return;
  }
  Swift::Hasher::_combine(0,param_4);
  return;
}



/* Address: 0x10057580c | FUN_10057580c */

void FUN_10057580c(char *param_1,undefined *param_2,Hasher param_3,long param_4)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_88 [72];
  
  HVar1.unknown = param_2;
  Swift::Hasher::init(0);
  if (param_2 == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
  }
  else {
    Swift::Hasher::_combine(1,HVar1);
    SVar2.bridgeObject = param_2;
    SVar2.str = param_1;
    Swift::String::hash((Hasher)auStack_88,SVar2);
  }
  FUN_1004d7818(auStack_88);
  if (param_4 == 0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_3);
  }
  else {
    Swift::Hasher::_combine(1,param_3);
    HVar1.unknown = auStack_88;
    FUN_1004df778(HVar1.unknown,param_4);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005758c0 | FUN_1005758c0 */

void FUN_1005758c0(void)

{
  undefined8 *unaff_x20;
  
  FUN_10057580c(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005758cc | FUN_1005758cc */

void FUN_1005758cc(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  Hasher HVar2;
  long lVar3;
  undefined8 *unaff_x20;
  char *pcVar4;
  String SVar5;
  
  pvVar1 = (void *)unaff_x20[1];
  HVar2.unknown = (undefined *)unaff_x20[2];
  lVar3 = unaff_x20[3];
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    pcVar4 = (char *)*unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    SVar5.bridgeObject = pvVar1;
    SVar5.str = pcVar4;
    Swift::String::hash(param_1,SVar5);
  }
  FUN_1004d7818(param_1.unknown);
  if (lVar3 != 0) {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004df778(param_1.unknown,lVar3);
    return;
  }
  Swift::Hasher::_combine(0,HVar2);
  return;
}



/* Address: 0x100575978 | FUN_100575978 */

void FUN_100575978(__int64 param_1,Hasher param_2)

{
  void *pvVar1;
  void *pvVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  pvVar1 = unaff_x20->bridgeObject;
  SVar3 = *unaff_x20;
  HVar5.unknown = unaff_x20[1].str;
  pvVar2 = unaff_x20[1].bridgeObject;
  Swift::Hasher::init(param_1);
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    Swift::String::hash((Hasher)auStack_88,SVar3);
  }
  FUN_1004d7818(auStack_88);
  if (pvVar2 == (void *)0x0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_88;
    FUN_1004df778(HVar4.unknown,pvVar2);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100575a20 | FUN_100575a20 */

void FUN_100575a20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100578188();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x100575a4c | FUN_100575a4c */

void FUN_100575a4c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100575590(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x100575a68 | FUN_100575a68 */

void FUN_100575a68(void)

{
  FUN_100575a74();
  return;
}



/* Address: 0x100575a74 | FUN_100575a74 */

void FUN_100575a74(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100575a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*param_1,param_1[1],param_1[2],param_1[3],*param_2,param_2[1],param_2[2],param_2[3]);
  return;
}



/* Address: 0x100575a94 | FUN_100575a94 */

undefined * FUN_100575a94(void)

{
  return &DAT_100ee0e70;
}



/* Address: 0x100575aa0 | FUN_100575aa0 */

undefined1  [16] FUN_100575aa0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dadae0;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Address: 0x100575abc | FUN_100575abc */

String FUN_100575abc(void)

{
  String SVar1;
  
  FUN_100578398();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100575ae4 | FUN_100575ae4 */

String FUN_100575ae4(void)

{
  String SVar1;
  
  FUN_100578398();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100575b0c | FUN_100575b0c */

void FUN_100575b0c(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd0d08;
  FUN_1000f7830(&DAT_100fd0d08,&BYTE_100c5b970);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100578398();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100575bd4 | FUN_100575bd4 */

undefined8 FUN_100575bd4(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  long lVar6;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  _Var4.unknown = (undefined *)param_1[3];
  puVar5 = (undefined *)param_2[3];
  if (_Var4.unknown == (undefined *)0x0) {
    if (puVar5 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var4.unknown != puVar5) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var4,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  _Var4.unknown = (undefined *)param_1[5];
  puVar5 = (undefined *)param_2[5];
  if (_Var4.unknown == (undefined *)0x0) {
    if (puVar5 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar5 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var4.unknown != puVar5)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[4],_Var4,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar1)) {
      return 0;
    }
  }
  uVar2 = param_1[6];
  if (uVar2 == 0) {
    if (param_2[6] != 0) {
      return 0;
    }
  }
  else {
    if (param_2[6] == 0) {
      return 0;
    }
    FUN_1005552a0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = param_1[7];
  lVar6 = param_2[7];
  if (uVar2 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar6);
    uVar3 = uVar2;
    _swift_bridgeObjectRetain();
    FUN_100554f9c();
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(lVar6);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  uVar2 = param_1[8];
  lVar6 = param_2[8];
  if (uVar2 == 0) {
    if (lVar6 == 0) {
      return 1;
    }
  }
  else if (lVar6 != 0) {
    _swift_bridgeObjectRetain(lVar6);
    uVar3 = uVar2;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(lVar6);
    if ((uVar3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100575d54 | FUN_100575d54 */

undefined8
FUN_100575d54(long param_1,_StringGuts param_2,_StringGuts param_3,ulong param_4,long param_5,
             undefined *param_6,undefined *param_7,long param_8)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_158 [72];
  undefined *local_110;
  undefined *puStack_108;
  _StringGuts local_100;
  _StringGuts local_f8;
  _StringGuts local_f0;
  _StringGuts _Stack_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  long local_80;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != *(long *)(param_5 + 0x10)) {
    return 0;
  }
  if (lVar5 == 0 || param_1 == param_5) {
LAB_100575da4:
    if (param_3.unknown == (undefined *)0x0) {
      if (param_7 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (param_7 == (undefined *)0x0) {
        return 0;
      }
      if (((param_2.unknown != param_6) || (param_3.unknown != param_7)) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            (param_2,param_3,(_StringComparisonResult)(__int8)param_6), !bVar2)) {
        return 0;
      }
    }
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      _swift_bridgeObjectRetain(param_8);
      uVar3 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_8);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
    return 0;
  }
  puVar6 = (undefined8 *)(param_1 + 0x20);
  puVar7 = (undefined8 *)(param_5 + 0x20);
  do {
    lVar5 = lVar5 + -1;
    _Stack_e8.unknown = (undefined *)puVar6[5];
    local_f0.unknown = (undefined *)puVar6[4];
    local_d8 = puVar6[7];
    local_e0 = puVar6[6];
    local_d0 = puVar6[8];
    puStack_108 = (undefined *)puVar6[1];
    local_110 = (undefined *)*puVar6;
    local_f8.unknown = (undefined *)puVar6[3];
    local_100.unknown = (undefined *)puVar6[2];
    puStack_98 = (undefined *)puVar7[5];
    local_a0 = (undefined *)puVar7[4];
    local_88 = puVar7[7];
    local_90 = puVar7[6];
    local_80 = puVar7[8];
    puStack_b8 = (undefined *)puVar7[1];
    local_c0 = (undefined *)*puVar7;
    local_a8 = (undefined *)puVar7[3];
    local_b0 = (undefined *)puVar7[2];
    if (((local_110 != local_c0) || (puStack_108 != puStack_b8)) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)local_110,(_StringGuts)puStack_108,
                           (_StringComparisonResult)(__int8)local_c0), !bVar2)) {
      return 0;
    }
    if (local_f8.unknown == (undefined *)0x0) {
      if (local_a8 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (local_a8 == (undefined *)0x0) {
        return 0;
      }
      if (((local_100.unknown != local_b0) || (local_f8.unknown != local_a8)) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            (local_100,local_f8,(_StringComparisonResult)(__int8)local_b0), !bVar2))
      {
        return 0;
      }
    }
    if (_Stack_e8.unknown == (undefined *)0x0) {
      if (puStack_98 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (puStack_98 == (undefined *)0x0) {
        return 0;
      }
      if (((local_f0.unknown != local_a0) || (_Stack_e8.unknown != puStack_98)) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            (local_f0,_Stack_e8,(_StringComparisonResult)(__int8)local_a0), !bVar2))
      {
        return 0;
      }
    }
    if (local_e0 == 0) {
      if (local_90 != 0) {
        return 0;
      }
    }
    else {
      if (local_90 == 0) {
        return 0;
      }
      uVar3 = local_e0;
      FUN_1005552a0();
      if ((uVar3 & 1) == 0) {
        return 0;
      }
    }
    lVar1 = local_88;
    uVar3 = local_d8;
    if (local_d8 == 0) {
      if (local_88 != 0) {
        return 0;
      }
      FUN_100576534(&local_110,auStack_158);
      FUN_100576534(&local_c0,auStack_158);
    }
    else {
      if (local_88 == 0) {
        return 0;
      }
      FUN_100576534(&local_110,auStack_158);
      FUN_100576534(&local_c0,auStack_158);
      _swift_bridgeObjectRetain(lVar1);
      uVar4 = uVar3;
      _swift_bridgeObjectRetain();
      FUN_100554f9c();
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(lVar1);
      if ((uVar4 & 1) == 0) goto LAB_100576030;
    }
    lVar1 = local_80;
    uVar3 = local_d0;
    if (local_d0 == 0) {
      FUN_100576568(&local_c0);
      FUN_100576568(&local_110);
      if (lVar1 != 0) {
        return 0;
      }
    }
    else {
      if (local_80 == 0) {
LAB_100576030:
        FUN_100576568(&local_c0);
        FUN_100576568(&local_110);
        return 0;
      }
      _swift_bridgeObjectRetain(local_80);
      uVar4 = uVar3;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(lVar1);
      FUN_100576568(&local_c0);
      FUN_100576568(&local_110);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    if (lVar5 == 0) goto LAB_100575da4;
    puVar6 = puVar6 + 9;
    puVar7 = puVar7 + 9;
  } while( true );
}



/* Address: 0x100576064 | FUN_100576064 */

undefined8 FUN_100576064(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar2 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar2)) {
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
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar2)) {
      return 0;
    }
  }
  _Var3.unknown = (undefined *)param_1[5];
  puVar4 = (undefined *)param_2[5];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var3.unknown != puVar4)) &&
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[4],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar2)) {
      return 0;
    }
  }
  bVar1 = *(byte *)(param_2 + 6);
  if (*(byte *)(param_1 + 6) == 2) {
    if (bVar1 == 2) {
      return 1;
    }
  }
  else if ((bVar1 != 2) && (((*(byte *)(param_1 + 6) ^ bVar1) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Address: 0x100576154 | FUN_100576154 */

undefined8
FUN_100576154(_StringGuts param_1,_StringGuts param_2,_StringGuts param_3,_StringGuts param_4,
             undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  bool bVar1;
  
  if (((param_1.unknown != param_5) || (param_2.unknown != param_6)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_5), !bVar1)) {
    return 0;
  }
  if (param_4.unknown == (undefined *)0x0) {
    if (param_8 != (undefined *)0x0) {
      return 0;
    }
  }
  else if ((param_8 == (undefined *)0x0) ||
          (((param_3.unknown != param_7 || (param_4.unknown != param_8)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              (param_3,param_4,(_StringComparisonResult)(__int8)param_7), !bVar1))))
  {
    return 0;
  }
  return 1;
}



/* Address: 0x1005761f4 | FUN_1005761f4 */

undefined8
FUN_1005761f4(_StringGuts param_1,_StringGuts param_2,ulong param_3,undefined *param_4,
             undefined *param_5,long param_6)

{
  bool bVar1;
  
  if (((param_1.unknown != param_4) || (param_2.unknown != param_5)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_4), !bVar1)) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_6 == 0) {
      return 1;
    }
  }
  else if (param_6 != 0) {
    _swift_bridgeObjectRetain(param_6);
    FUN_100524400(param_3,param_6);
    _swift_bridgeObjectRelease(param_6);
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10057627c | FUN_10057627c */

undefined8
FUN_10057627c(_StringGuts param_1,_StringGuts param_2,ulong param_3,ulong param_4,undefined *param_5
             ,undefined *param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  ulong uVar2;
  
  if (param_2.unknown == (undefined *)0x0) {
    if (param_6 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (param_6 == (undefined *)0x0) {
      return 0;
    }
    if (((param_1.unknown != param_5) || (param_2.unknown != param_6)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          (param_1,param_2,(_StringComparisonResult)(__int8)param_5), !bVar1)) {
      return 0;
    }
  }
  FUN_10055462c(param_3,param_7);
  if ((param_3 & 1) != 0) {
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      _swift_bridgeObjectRetain(param_8);
      uVar2 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_8);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x100576340 | FUN_100576340 */

/* WARNING: Removing unreachable block (ram,0x0001005764ac) */
/* WARNING: Removing unreachable block (ram,0x000100576434) */

char * FUN_100576340(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd1420;
  FUN_1000f7830(&DAT_100fd1420,&DAT_100c5cf60);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005764f4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
    local_52 = 1;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar1);
    pcVar2 = SVar4.str;
    local_53 = 2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_53,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x1005764f4 | FUN_1005764f4 */

void FUN_1005764f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0bc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cec0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cec0,&DAT_100ee1958);
  DAT_100fd0bc8 = pTVar1;
  return;
}



/* Address: 0x100576534 | FUN_100576534 */

undefined8 FUN_100576534(undefined8 param_1,undefined8 param_2)

{
  FUN_100578bfc(param_2,param_1,&DAT_100ee0ef8);
  return param_2;
}



/* Address: 0x100576568 | FUN_100576568 */

undefined8 FUN_100576568(undefined8 param_1)

{
  FUN_100578bb4(param_1,&DAT_100ee0ef8);
  return param_1;
}



/* Address: 0x100576594 | FUN_100576594 */

void FUN_100576594(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0bd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ce70;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ce70,&DAT_100ee18c8);
  DAT_100fd0bd8 = pTVar1;
  return;
}



/* Address: 0x1005765d4 | FUN_1005765d4 */

void FUN_1005765d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd0be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd0be0;
  FUN_1000f8b08(&DAT_100fd0be0,&BYTE_100c5b900);
  puVar2 = puVar1;
  FUN_100576644();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd0be8 = puVar3;
  return;
}



/* Address: 0x100576644 | FUN_100576644 */

void FUN_100576644(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0bf0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5b9e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5b9e0,&DAT_100ee0f88);
  DAT_100fd0bf0 = pTVar1;
  return;
}



/* Address: 0x100576684 | FUN_100576684 */

void FUN_100576684(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fce828 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fce820;
  FUN_1000f8b08(&DAT_100fce820,&DAT_100c5cfa0);
  puVar2 = puVar1;
  FUN_1005445e0();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fce828 = puVar3;
  return;
}



/* Address: 0x1005766f4 | FUN_1005766f4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100576730 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005766f4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100576758 | FUN_100576758 */

/* WARNING: Removing unreachable block (ram,0x000100576a0c) */
/* WARNING: Removing unreachable block (ram,0x0001005768e8) */
/* WARNING: Removing unreachable block (ram,0x000100576894) */
/* WARNING: Removing unreachable block (ram,0x00010057697c) */
/* WARNING: Removing unreachable block (ram,0x000100576a70) */
/* WARNING: Removing unreachable block (ram,0x000100576a88) */
/* WARNING: Removing unreachable block (ram,0x000100576a9c) */
/* WARNING: Removing unreachable block (ram,0x000100576abc) */
/* WARNING: Removing unreachable block (ram,0x000100576ab4) */
/* WARNING: Removing unreachable block (ram,0x000100576ab8) */
/* WARNING: Removing unreachable block (ram,0x000100576acc) */
/* WARNING: Removing unreachable block (ram,0x000100576824) */

void FUN_100576758(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_170 [8];
  char *local_168;
  undefined1 local_148 [72];
  char *local_100;
  void *pvStack_f8;
  char **ppcStack_f0;
  undefined *puStack_e8;
  char **local_e0;
  undefined *puStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  undefined8 local_c0;
  undefined1 local_b1;
  String local_b0;
  char **local_a0;
  undefined *puStack_98;
  char **local_90;
  undefined *puStack_88;
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd1408;
  FUN_1000f7830(&DAT_100fd1408,&DAT_100c5cf58);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100576594();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_100 = (char *)((ulong)local_100 & 0xffffffffffffff00);
    local_b0 = Swift::KeyedDecodingContainer::_decode(&local_100,puVar1);
    local_100._0_1_ = 1;
    ppcVar2 = &local_100;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_100 = (char *)CONCAT71(local_100._1_7_,2);
    ppcVar3 = &local_100;
    puVar5 = puVar1;
    local_a0 = ppcVar2;
    puStack_98 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar4 = &DAT_100fd0be0;
    local_90 = ppcVar3;
    puStack_88 = puVar5;
    FUN_1000f7830(&DAT_100fd0be0,&BYTE_100c5b900);
    local_148[0] = 3;
    puVar5 = puVar4;
    FUN_10057a148();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_100,puVar4,local_148,puVar1,puVar4,puVar5);
    local_168 = local_100;
    local_80 = local_100;
    puVar4 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    local_148[0] = 4;
    puVar5 = puVar4;
    FUN_10057a1f8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_100,puVar4,local_148,puVar1,puVar4,puVar5);
    local_78 = local_100;
    local_b1 = 5;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_b1,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))(auStack_170 + -extraout_x8,puVar1);
    local_70 = local_58;
    puStack_d8 = puStack_88;
    local_e0 = local_90;
    pcStack_c8 = local_78;
    pcStack_d0 = local_80;
    local_c0 = local_58;
    pvStack_f8 = local_b0.bridgeObject;
    local_100 = local_b0.str;
    puStack_e8 = puStack_98;
    ppcStack_f0 = local_a0;
    FUN_100576534(&local_100,local_148);
    FUN_100004594(param_2);
    FUN_100576568(&local_b0);
    param_1[5] = puStack_d8;
    param_1[4] = local_e0;
    param_1[7] = pcStack_c8;
    param_1[6] = pcStack_d0;
    param_1[8] = local_c0;
    param_1[1] = pvStack_f8;
    *param_1 = local_100;
    param_1[3] = puStack_e8;
    param_1[2] = ppcStack_f0;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x100576b40 | FUN_100576b40 */

void FUN_100576b40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0c00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ce20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ce20,&DAT_100ee1838);
  DAT_100fd0c00 = pTVar1;
  return;
}



/* Address: 0x100576b80 | FUN_100576b80 */

undefined4 FUN_100576b80(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x656d616e || param_2 != &DAT_e400000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x656c746974) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x7470697263736564) || (param_2 != &DAT_eb000000006e6f69)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7470697263736564,(_StringGuts)0xeb000000006e6f69,
                             expecting), !bVar1)) {
        if ((param_1 == 0x6465726975716572) && (param_2 == &DAT_e800000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e800000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6465726975716572,(_StringGuts)0xe800000000000000,expecting
                          );
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



/* Address: 0x100576ce0 | FUN_100576ce0 */

/* WARNING: Removing unreachable block (ram,0x000100576ea4) */
/* WARNING: Removing unreachable block (ram,0x000100576e18) */
/* WARNING: Removing unreachable block (ram,0x000100576e60) */
/* WARNING: Removing unreachable block (ram,0x000100576eb8) */
/* WARNING: Removing unreachable block (ram,0x000100576ecc) */
/* WARNING: Removing unreachable block (ram,0x000100576ed4) */
/* WARNING: Removing unreachable block (ram,0x000100576ed8) */
/* WARNING: Removing unreachable block (ram,0x000100576db0) */

void FUN_100576ce0(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  String SVar8;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80;
  undefined *local_78;
  undefined *local_70;
  void *local_68;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fd1400;
  FUN_1000f7830(&DAT_100fd1400,&DAT_100c5cf50);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100576b40();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar8 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar2);
    local_68 = SVar8.bridgeObject;
    local_52 = 1;
    puVar3 = &local_52;
    puVar5 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    puVar4 = &local_53;
    puVar6 = puVar2;
    local_80 = puVar3;
    local_70 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_54 = 3;
    puVar3 = &local_54;
    local_88 = puVar4;
    local_78 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar3,puVar2);
    (**(code **)(lVar7 + 8))(auStack_90 + -extraout_x8,puVar2);
    puVar2 = local_78;
    _swift_bridgeObjectRetain(local_78);
    pvVar1 = local_68;
    _swift_bridgeObjectRetain(local_68);
    puVar5 = local_70;
    _swift_bridgeObjectRetain(local_70);
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(pvVar1);
    *param_1 = SVar8.str;
    param_1[1] = pvVar1;
    param_1[2] = local_80;
    param_1[3] = puVar5;
    param_1[4] = local_88;
    param_1[5] = puVar2;
    *(char *)(param_1 + 6) = (char)puVar3;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100576f54 | FUN_100576f54 */

undefined8 FUN_100576f54(undefined8 param_1,undefined8 param_2)

{
  FUN_100566084(param_2,param_1,&DAT_100ee1138);
  return param_2;
}



/* Address: 0x100576f88 | FUN_100576f88 */

void FUN_100576f88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0c68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cdd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cdd0,&DAT_100ee17a8);
  DAT_100fd0c68 = pTVar1;
  return;
}



/* Address: 0x100576fc8 | FUN_100576fc8 */

void FUN_100576fc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0c70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5baf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5baf8,&DAT_100ee10a8);
  DAT_100fd0c70 = pTVar1;
  return;
}



/* Address: 0x100577008 | FUN_100577008 */

void FUN_100577008(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0c78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bdd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bdd8,&DAT_100ee1138);
  DAT_100fd0c78 = pTVar1;
  return;
}



/* Address: 0x100577048 | FUN_100577048 */

undefined8 FUN_100577048(undefined8 param_1)

{
  FUN_100565ed8(param_1,&DAT_100ee1138);
  return param_1;
}



/* Address: 0x100577074 | FUN_100577074 */

/* WARNING: Removing unreachable block (ram,0x000100577164) */

void FUN_100577074(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_170 [8];
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined8 uStack_f7;
  undefined1 local_e9;
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 local_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 local_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  puVar2 = &DAT_100fd13e8;
  FUN_1000f7830(&DAT_100fd13e8,&DAT_100c5cf40);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100576f88();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_e9 = 0;
    FUN_10057a0c8();
    puVar4 = &DAT_100ee10a8;
    Swift::KeyedDecodingContainer::_decode
              (&local_168,&DAT_100ee10a8,&local_e9,puVar2,&DAT_100ee10a8,KVar3.unknown);
    uVar1 = local_168;
    local_e9 = 1;
    FUN_10057a108();
    Swift::KeyedDecodingContainer::_decode
              (&local_168,&DAT_100ee1138,&local_e9,puVar2,&DAT_100ee1138,puVar4);
    (**(code **)(lVar5 + 8))(auStack_170 + -extraout_x8,puVar2);
    uStack_99 = (undefined1)uStack_120;
    uStack_98 = (undefined7)((ulong)uStack_120 >> 8);
    local_a1 = (undefined1)local_128;
    uStack_a0 = (undefined7)((ulong)local_128 >> 8);
    uStack_89 = (undefined1)uStack_110;
    uStack_88 = (undefined7)((ulong)uStack_110 >> 8);
    local_91 = (undefined1)local_118;
    uStack_90 = (undefined7)((ulong)local_118 >> 8);
    uStack_79 = uStack_100;
    local_81 = (undefined1)local_108;
    uStack_80 = (undefined7)((ulong)local_108 >> 8);
    uStack_70 = uStack_f7;
    uStack_78 = uStack_ff;
    uStack_71 = uStack_f8;
    uStack_d9 = (undefined1)uStack_160;
    uStack_d8 = (undefined7)((ulong)uStack_160 >> 8);
    local_e1 = local_168;
    uStack_e0 = uStack_167;
    uStack_c9 = (undefined1)uStack_150;
    uStack_c8 = (undefined7)((ulong)uStack_150 >> 8);
    local_d1 = (undefined1)local_158;
    uStack_d0 = (undefined7)((ulong)local_158 >> 8);
    uStack_b9 = (undefined1)uStack_140;
    uStack_b8 = (undefined7)((ulong)uStack_140 >> 8);
    local_c1 = (undefined1)local_148;
    uStack_c0 = (undefined7)((ulong)local_148 >> 8);
    uStack_a9 = (undefined1)uStack_130;
    uStack_a8 = (undefined7)((ulong)uStack_130 >> 8);
    local_b1 = (undefined1)local_138;
    uStack_b0 = (undefined7)((ulong)local_138 >> 8);
    FUN_100004594(param_2);
    *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_99,uStack_a0);
    *(ulong *)(param_1 + 0x41) = CONCAT17(local_a1,uStack_a8);
    *(ulong *)(param_1 + 0x59) = CONCAT17(uStack_89,uStack_90);
    *(ulong *)(param_1 + 0x51) = CONCAT17(local_91,uStack_98);
    *(ulong *)(param_1 + 0x69) = CONCAT17(uStack_79,uStack_80);
    *(ulong *)(param_1 + 0x61) = CONCAT17(local_81,uStack_88);
    *(undefined8 *)(param_1 + 0x79) = uStack_70;
    *(ulong *)(param_1 + 0x71) = CONCAT17(uStack_71,uStack_78);
    *(ulong *)(param_1 + 9) = CONCAT17(uStack_d9,uStack_e0);
    *(ulong *)(param_1 + 1) = CONCAT17(local_e1,uStack_e8);
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_c9,uStack_d0);
    *(ulong *)(param_1 + 0x11) = CONCAT17(local_d1,uStack_d8);
    *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_b9,uStack_c0);
    *(ulong *)(param_1 + 0x21) = CONCAT17(local_c1,uStack_c8);
    *param_1 = uVar1;
    *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_a9,uStack_b0);
    *(ulong *)(param_1 + 0x31) = CONCAT17(local_b1,uStack_b8);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100577288 | FUN_100577288 */

void FUN_100577288(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0c88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cd80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cd80,&DAT_100ee1718);
  DAT_100fd0c88 = pTVar1;
  return;
}



/* Address: 0x1005772c8 | FUN_1005772c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100577304 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005772c8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (10 < uVar1) {
    uVar1 = 0xb;
  }
  return uVar1;
}



/* Address: 0x10057732c | FUN_10057732c */

/* WARNING: Removing unreachable block (ram,0x0001005777c0) */
/* WARNING: Removing unreachable block (ram,0x000100577adc) */
/* WARNING: Removing unreachable block (ram,0x000100577a38) */
/* WARNING: Removing unreachable block (ram,0x0001005775c4) */
/* WARNING: Removing unreachable block (ram,0x000100577924) */
/* WARNING: Removing unreachable block (ram,0x000100577a80) */
/* WARNING: Removing unreachable block (ram,0x000100577b00) */
/* WARNING: Removing unreachable block (ram,0x000100577b08) */
/* WARNING: Removing unreachable block (ram,0x0001005775d8) */
/* WARNING: Removing unreachable block (ram,0x000100577994) */
/* WARNING: Removing unreachable block (ram,0x0001005779b4) */
/* WARNING: Removing unreachable block (ram,0x00010057755c) */

void FUN_10057732c(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [8];
  bool bVar3;
  DecodingError DVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  _StringComparisonResult expecting;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 *puVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_270 [8];
  undefined1 *local_268;
  undefined *local_260;
  undefined1 *local_258;
  undefined *local_250;
  char *local_248;
  undefined *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  undefined1 local_219;
  undefined1 local_218;
  undefined7 uStack_217;
  char *local_210;
  char *pcStack_208;
  char *pcStack_200;
  void *pvStack_1f8;
  char *local_1f0;
  undefined *puStack_1e8;
  undefined1 *puStack_1e0;
  undefined *puStack_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c1;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  char *pcStack_1b8;
  char *local_1b0;
  void *pvStack_1a8;
  char *local_1a0;
  undefined *puStack_198;
  undefined1 *local_190;
  undefined *puStack_188;
  undefined1 *local_180;
  undefined1 local_170 [8];
  char *pcStack_168;
  String local_160;
  char *local_150;
  undefined *puStack_148;
  undefined1 *local_140;
  undefined *puStack_138;
  undefined1 *local_130;
  undefined *puStack_128;
  undefined *local_120;
  char *pcStack_118;
  char *local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  char *local_f0;
  void *pvStack_e8;
  char *pcStack_e0;
  void *pvStack_d8;
  char *local_d0;
  undefined *puStack_c8;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *local_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  char *pcStack_98;
  char *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 local_71 [17];
  
  puVar5 = &DAT_100fd13d8;
  FUN_1000f7830(&DAT_100fd13d8,&DAT_100c5cf38);
  lVar11 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_270 + -extraout_x8;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100577288();
  Swift::Decoder::_container();
  if (unaff_x21 != 0) {
LAB_100577570:
    FUN_100004594(param_2);
    return;
  }
  local_71[0] = 0;
  SVar13 = Swift::KeyedDecodingContainer::_decode(local_71,puVar5);
  puVar10 = SVar13.bridgeObject;
  pcVar6 = SVar13.str;
  if (pcVar6 != (char *)0x74786574 || puVar10 != &DAT_e400000000000000) {
    expecting.value = SVar13.str._0_1_;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x74786574,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar3) {
      if ((pcVar6 == (char *)0x6567616d69 && puVar10 == &DAT_e500000000000000) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6567616d69,(_StringGuts)0xe500000000000000,expecting),
         bVar3)) {
        _swift_bridgeObjectRelease(puVar10);
        local_170[0] = 2;
        SVar13 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_228 = SVar13.str;
        local_1c0 = 3;
        SVar14 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar5);
        (**(code **)(lVar11 + 8))(puVar12,puVar5);
        pcStack_168 = SVar13.bridgeObject;
        local_170 = (undefined1  [8])local_228;
        local_160 = SVar14;
        FUN_10049c188(local_170);
      }
      else if ((pcVar6 == (char *)0x6f69647561 && puVar10 == &DAT_e500000000000000) ||
              (bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x6f69647561,(_StringGuts)0xe500000000000000,
                                  expecting), bVar3)) {
        _swift_bridgeObjectRelease(puVar10);
        local_170[0] = 2;
        SVar13 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_228 = SVar13.str;
        local_1c0 = 3;
        SVar14 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar5);
        (**(code **)(lVar11 + 8))(puVar12,puVar5);
        pcStack_168 = SVar13.bridgeObject;
        local_170 = (undefined1  [8])local_228;
        local_160 = SVar14;
        FUN_100567ac0(local_170);
      }
      else if ((pcVar6 == (char *)0x656372756f736572 && puVar10 == &DAT_e800000000000000) ||
              (bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x656372756f736572,(_StringGuts)0xe800000000000000,
                                  expecting), bVar3)) {
        _swift_bridgeObjectRelease(puVar10);
        local_1c1 = 4;
        FUN_100567a74();
        puVar8 = &DAT_100ee1c80;
        Swift::KeyedDecodingContainer::_decode
                  (&local_1c0,&DAT_100ee1c80,&local_1c1,puVar5,&DAT_100ee1c80,puVar10);
        puStack_1e8 = puStack_198;
        local_1f0 = local_1a0;
        puStack_1d8 = puStack_188;
        puStack_1e0 = local_190;
        local_1d0 = local_180;
        local_210 = (char *)CONCAT71(uStack_1bf,local_1c0);
        pcStack_208 = pcStack_1b8;
        pvStack_1f8 = pvStack_1a8;
        pcStack_200 = local_1b0;
        local_218 = 5;
        FUN_100567a28();
        puVar7 = &DAT_100ee1da8;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (local_170,&DAT_100ee1da8,&local_218,puVar5,&DAT_100ee1da8,puVar8);
        auVar2 = local_170;
        local_240 = pcStack_168;
        local_238 = local_160.str;
        local_230 = local_160.bridgeObject;
        local_228 = local_150;
        local_219 = 6;
        FUN_1004e16ac();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_218,&DAT_100edcda0,&local_219,puVar5,&DAT_100edcda0,puVar7);
        (**(code **)(lVar11 + 8))(puVar12,puVar5);
        puStack_148 = puStack_1e8;
        local_150 = local_1f0;
        puStack_138 = puStack_1d8;
        local_140 = puStack_1e0;
        pcStack_168 = pcStack_208;
        local_170 = (undefined1  [8])local_210;
        local_160.bridgeObject = pvStack_1f8;
        local_160.str = pcStack_200;
        local_130 = local_1d0;
        puStack_128 = (undefined *)auVar2;
        local_120 = local_240;
        pcStack_118 = local_238;
        local_110 = local_230;
        uStack_108 = SUB81(local_228,0);
        uStack_107 = (undefined7)((ulong)local_228 >> 8);
        local_100 = local_218;
        uStack_ff = uStack_217;
        FUN_100567ab4(local_170);
      }
      else {
        if (pcVar6 == (char *)0x656372756f736572 && puVar10 == (undefined1 *)0xed00006b6e696c5f) {
          _swift_bridgeObjectRelease(puVar10);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656372756f736572,(_StringGuts)0xed00006b6e696c5f,
                             expecting);
          _swift_bridgeObjectRelease(puVar10);
          if (!bVar3) {
            auVar1[0xf] = 0;
            auVar1._0_15_ = stack0xfffffffffffffe91;
            _local_170 = (String)(auVar1 << 8);
            DVar4 = Swift::DecodingError::typeMetadataAccessor();
            puVar7 = 
            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
            _swift_allocError(DVar4.value,
                              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                              ,0,0);
            puVar8 = &DAT_100fd13e0;
            FUN_100134584(&DAT_100fd13e0,&DAT_100fd13d8,&DAT_100c5cf38,
                          PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                         );
            Swift::DecodingError::_dataCorruptedError
                      (puVar7,local_170,puVar12,0xd000000000000014,0x8000000100dadb60,puVar5,puVar8)
            ;
            _swift_willThrow();
            (**(code **)(lVar11 + 8))(puVar12,puVar5);
            goto LAB_100577570;
          }
        }
        local_170[0] = '\a';
        SVar13 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_230 = SVar13.str;
        local_170[0] = '\b';
        SVar14 = Swift::KeyedDecodingContainer::_decode(local_170,puVar5);
        local_228 = SVar14.bridgeObject;
        local_238 = SVar14.str;
        local_170[0] = '\t';
        pcVar6 = local_170;
        local_240 = puVar5;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        local_170[0] = '\n';
        puVar10 = local_170;
        puVar8 = local_240;
        local_248 = pcVar6;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        local_170[0] = 3;
        puVar9 = local_170;
        puVar7 = local_240;
        local_258 = puVar10;
        local_250 = puVar8;
        Swift::KeyedDecodingContainer::_decodeIfPresent();
        local_210 = (char *)CONCAT71(local_210._1_7_,5);
        local_268 = puVar9;
        local_260 = puVar7;
        FUN_100567a28();
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (&local_1c0,&DAT_100ee1da8,&local_210,local_240,&DAT_100ee1da8,puVar9);
        (**(code **)(lVar11 + 8))(puVar12,local_240);
        pcStack_168 = SVar13.bridgeObject;
        local_170 = (undefined1  [8])local_230;
        local_160.bridgeObject = local_228;
        local_160.str = local_238;
        local_150 = local_248;
        local_140 = local_258;
        puStack_138 = local_250;
        local_130 = local_268;
        puStack_128 = local_260;
        local_120 = (undefined *)CONCAT71(uStack_1bf,local_1c0);
        pcStack_118 = pcStack_1b8;
        uStack_108 = SUB81(pvStack_1a8,0);
        uStack_107 = (undefined7)((ulong)pvStack_1a8 >> 8);
        local_110 = local_1b0;
        local_100 = SUB81(local_1a0,0);
        uStack_ff = (undefined7)((ulong)local_1a0 >> 8);
        puStack_148 = puVar5;
        FUN_100567a68(local_170);
      }
      uStack_7f = CONCAT17(uStack_f8,uStack_ff);
      goto LAB_1005774b8;
    }
  }
  _swift_bridgeObjectRelease(puVar10);
  local_1c0 = 1;
  SVar13 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar5);
  (**(code **)(lVar11 + 8))(puVar12,puVar5);
  _local_170 = SVar13;
  FUN_10049a544(local_170);
  uStack_7f = CONCAT17(uStack_f8,uStack_ff);
LAB_1005774b8:
  pvStack_e8 = pcStack_168;
  local_f0 = (char *)local_170;
  pvStack_d8 = local_160.bridgeObject;
  pcStack_e0 = local_160.str;
  puStack_c8 = puStack_148;
  local_d0 = local_150;
  puStack_b8 = puStack_138;
  puStack_c0 = local_140;
  local_b0 = local_130;
  puStack_a8 = puStack_128;
  puStack_a0 = local_120;
  pcStack_98 = pcStack_118;
  local_90 = local_110;
  uStack_88 = uStack_108;
  uStack_87 = uStack_107;
  uStack_80 = local_100;
  FUN_100004594(param_2);
  param_1[9] = puStack_a8;
  param_1[8] = local_b0;
  param_1[0xb] = pcStack_98;
  param_1[10] = puStack_a0;
  param_1[0xd] = CONCAT71(uStack_87,uStack_88);
  param_1[0xc] = local_90;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_7f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_80,uStack_87);
  param_1[1] = pvStack_e8;
  *param_1 = local_f0;
  param_1[3] = pvStack_d8;
  param_1[2] = pcStack_e0;
  param_1[5] = puStack_c8;
  param_1[4] = local_d0;
  param_1[7] = puStack_b8;
  param_1[6] = puStack_c0;
  return;
}



/* Address: 0x100577b68 | FUN_100577b68 */

void FUN_100577b68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0c98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cd30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cd30,&DAT_100ee1688);
  DAT_100fd0c98 = pTVar1;
  return;
}



/* Address: 0x100577ba8 | FUN_100577ba8 */

void FUN_100577ba8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cce0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cce0,&DAT_100ee15f8);
  DAT_100fd0cb0 = pTVar1;
  return;
}



/* Address: 0x100577be8 | FUN_100577be8 */

void FUN_100577be8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd0cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd0cb8;
  FUN_1000f8b08(&DAT_100fd0cb8,&BYTE_100c5b948);
  puVar2 = puVar1;
  FUN_100577c58();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd0cc0 = puVar3;
  return;
}



/* Address: 0x100577c58 | FUN_100577c58 */

void FUN_100577c58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0cc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5bd60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5bd60,&DAT_100ee0ef8);
  DAT_100fd0cc8 = pTVar1;
  return;
}



/* Address: 0x100577c98 | FUN_100577c98 */

/* WARNING: Removing unreachable block (ram,0x000100577e04) */
/* WARNING: Removing unreachable block (ram,0x000100577e74) */
/* WARNING: Removing unreachable block (ram,0x000100577e78) */
/* WARNING: Removing unreachable block (ram,0x000100577e8c) */
/* WARNING: Removing unreachable block (ram,0x000100577d90) */

undefined8 FUN_100577c98(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar1 = &DAT_100fd13c0;
  FUN_1000f7830(&DAT_100fd13c0,&DAT_100c5cf30);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_100577ba8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fd0cb8;
    FUN_1000f7830(&DAT_100fd0cb8,&BYTE_100c5b948);
    local_61 = 0;
    puVar3 = puVar2;
    FUN_10057a018();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar2,&local_61,puVar1,puVar2,puVar3);
    uVar5 = CONCAT71(uStack_57,local_58);
    local_58 = 1;
    puVar4 = &local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar4,puVar1);
    local_61 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5;
}



/* Address: 0x100577ea8 | FUN_100577ea8 */

void FUN_100577ea8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0cd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5cc90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5cc90,&DAT_100ee1568);
  DAT_100fd0cd8 = pTVar1;
  return;
}



/* Address: 0x100577ee8 | FUN_100577ee8 */

/* WARNING: Removing unreachable block (ram,0x000100578074) */
/* WARNING: Removing unreachable block (ram,0x000100577fb0) */

char * FUN_100577ee8(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_60 [15];
  undefined1 local_51;
  
  puVar1 = &DAT_100fd13b8;
  FUN_1000f7830(&DAT_100fd13b8,&DAT_100c5cf28);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100577ea8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar6 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar6.str;
    puVar3 = &DAT_100fcc360;
    FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
    local_61 = 1;
    puVar4 = &DAT_100fcf130;
    FUN_10054d580(&DAT_100fcf130,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_60,puVar3,&local_61,puVar1,puVar3,puVar4);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}


