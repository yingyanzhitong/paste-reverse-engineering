/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100587f90 | FUN_100587f90 */

void FUN_100587f90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1f30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ff40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ff40,&DAT_100ee3448);
  DAT_100fd1f30 = pTVar1;
  return;
}



/* Address: 0x100587fd0 | FUN_100587fd0 */

uint FUN_100587fd0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  uint uVar5;
  long unaff_x21;
  long lVar6;
  
  puVar2 = &DAT_100fd1f38;
  FUN_1000f7830(&DAT_100fd1f38,&DAT_100c5eef8);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  uVar5 = (uint)lVar3;
  FUN_100587f90();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    bVar1 = Swift::KeyedDecodingContainer::_decode(KVar4.unknown,puVar2);
    uVar5 = (uint)bVar1;
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5 & 1;
}



/* Address: 0x1005880d8 | FUN_1005880d8 */

void FUN_1005880d8(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  
  puVar2 = &DAT_100fd1f38;
  FUN_1000f7830(&DAT_100fd1f38,&DAT_100c5eef8);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100587f90();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    bVar1 = Swift::KeyedDecodingContainer::_decode(KVar3.unknown,puVar2);
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
    FUN_100004594(param_2);
    *(bool *)param_1 = bVar1;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1005881f0 | FUN_1005881f0 */

void FUN_1005881f0(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar3;
  
  puVar2 = &DAT_100fd1f28;
  FUN_1000f7830(&DAT_100fd1f28,&DAT_100c5eef0);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100587f90();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x1005882dc | FUN_1005882dc */

void FUN_1005882dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = param_4;
  param_1[5] = param_5;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[9] = param_11;
  param_1[8] = param_10;
  param_1[10] = param_12;
  return;
}



/* Address: 0x100588300 | FUN_100588300 */

String FUN_100588300(void)

{
  String SVar1;
  
  FUN_10059bdb4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100588328 | FUN_100588328 */

String FUN_100588328(void)

{
  String SVar1;
  
  FUN_10059bdb4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100588350 | FUN_100588350 */

/* WARNING: Removing unreachable block (ram,0x0001005884c8) */

void FUN_100588350(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd1f40;
  FUN_1000f7830(&DAT_100fd1f40,&DAT_100c5ef00);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10059bdb4();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_54,puVar1);
    local_55 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[8],unaff_x20[9],&local_55,puVar1);
    local_60 = unaff_x20[10];
    local_61 = 5;
    puVar2 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    puVar3 = &DAT_100fce828;
    FUN_10054d628(&DAT_100fce828,FUN_1005445e0,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_60,&local_61,puVar1,puVar2,puVar3);
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x100588560 | FUN_100588560 */

void FUN_100588560(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_10059be6c(&local_78);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_50;
    param_1[4] = local_58;
    param_1[7] = uStack_40;
    param_1[6] = local_48;
    param_1[9] = uStack_30;
    param_1[8] = local_38;
    param_1[10] = local_28;
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[3] = uStack_60;
    param_1[2] = local_68;
  }
  return;
}



/* Address: 0x1005885b8 | FUN_1005885b8 */

void FUN_1005885b8(void)

{
  FUN_100588350();
  return;
}



/* Address: 0x1005885cc | FUN_1005885cc */

undefined1  [16] FUN_1005885cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6e6168437473696c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6269726373627573;
  }
  uVar2 = 0xeb00000000646567;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000065;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100588614 | FUN_100588614 */

void FUN_100588614(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6269726373627573 || param_3 != -0x16ffffffffffff9b) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6269726373627573,(_StringGuts)0xe900000000000065,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6e6168437473696c) && (param_3 == -0x14ffffffff9b9a99)) {
        _swift_bridgeObjectRelease(0xeb00000000646567);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6e6168437473696c,(_StringGuts)0xeb00000000646567,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10058867c;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10058867c:
  *param_1 = uVar2;
  return;
}



/* Address: 0x1005886f8 | FUN_1005886f8 */

String FUN_1005886f8(void)

{
  String SVar1;
  
  FUN_10059c218();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100588720 | FUN_100588720 */

String FUN_100588720(void)

{
  String SVar1;
  
  FUN_10059c218();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100588748 | thunk_FUN_10059bdf4 */

void thunk_FUN_10059bdf4(void)

{
  FUN_10059bdf4();
  return;
}



/* Address: 0x10058874c | FUN_10058874c */

void FUN_10058874c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd1f50;
  FUN_1000f7830(&DAT_100fd1f50,&DAT_100c5ef08);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10059c218();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent((uint)param_2 >> 8 & 0xff,&local_52,puVar1);
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x100588878 | FUN_100588878 */

void FUN_100588878(undefined8 param_1,Hasher param_2)

{
  uint uVar1;
  Hasher HVar2;
  Hasher HVar3;
  Hasher HVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar6 = (uint)param_2.unknown;
  uVar1 = uVar6 >> 8;
  if ((uVar6 & 0xff) == 2) {
    bVar5 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar5 = (byte)param_2.unknown & 1;
  }
  HVar2.unknown._4_4_ = uVar7;
  HVar2.unknown._0_4_ = uVar6;
  Swift::Hasher::_combine(bVar5,HVar2);
  if ((uVar1 & 0xff) == 2) {
    bVar5 = 0;
  }
  else {
    HVar3.unknown._4_4_ = uVar7;
    HVar3.unknown._0_4_ = uVar6;
    Swift::Hasher::_combine(1,HVar3);
    bVar5 = (byte)((ulong)param_2.unknown >> 8) & 1;
  }
  HVar4.unknown._4_4_ = uVar7;
  HVar4.unknown._0_4_ = uVar6;
  Swift::Hasher::_combine(bVar5,HVar4);
  return;
}



/* Address: 0x1005888e8 | FUN_1005888e8 */

void FUN_1005888e8(uint param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  
  Swift::Hasher::init(0);
  if ((param_1 & 0xff) == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = (byte)param_1 & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  if ((param_1 >> 8 & 0xff) == 2) {
    HVar2.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar2.unknown = (undefined *)(ulong)(param_1 >> 8 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100588980 | FUN_100588980 */

void FUN_100588980(void)

{
  FUN_10059c258();
  return;
}



/* Address: 0x100588994 | FUN_100588994 */

void FUN_100588994(void)

{
  undefined2 *unaff_x20;
  
  FUN_1005888e8(*unaff_x20);
  return;
}



/* Address: 0x10058899c | FUN_10058899c */

void FUN_10058899c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  byte bVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  bVar2 = unaff_x20[1];
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = bVar1 & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar2 = bVar2 & 1;
  }
  Swift::Hasher::_combine(bVar2,param_2);
  return;
}



/* Address: 0x100588a0c | FUN_100588a0c */

void FUN_100588a0c(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  byte bVar2;
  Hasher HVar3;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  bVar1 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  if (bVar2 == 2) {
    bVar2 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar2 = bVar2 & 1;
  }
  Swift::Hasher::_combine(bVar2,param_2);
  if (bVar1 == 2) {
    HVar3.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar3.unknown = (undefined *)(ulong)(bVar1 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar3.unknown,param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100588a9c | FUN_100588a9c */

void FUN_100588a9c(undefined2 *param_1,undefined2 param_2)

{
  long unaff_x21;
  
  FUN_10059c258();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100588ac4 | FUN_100588ac4 */

void FUN_100588ac4(undefined8 param_1)

{
  undefined2 *unaff_x20;
  
  FUN_10058874c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100588adc | FUN_100588adc */

void FUN_100588adc(undefined2 *param_1,undefined2 *param_2)

{
  FUN_10059bdf4(*param_1,*param_2);
  return;
}



/* Address: 0x100588ae8 | thunk_FUN_1005296dc */

void thunk_FUN_1005296dc(void)

{
  FUN_1005296dc();
  return;
}



/* Address: 0x100588aec | FUN_100588aec */

String FUN_100588aec(void)

{
  String SVar1;
  
  FUN_10059c3ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100588b14 | FUN_100588b14 */

String FUN_100588b14(void)

{
  String SVar1;
  
  FUN_10059c3ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100588b3c | FUN_100588b3c */

void FUN_100588b3c(undefined8 param_1,undefined8 param_2)

{
  FUN_100588ca4(param_1,param_2,&DAT_100fd1f60,&DAT_100c5ef10,FUN_10059c3ac,&DAT_100ee3298);
  return;
}



/* Address: 0x100588b70 | thunk_FUN_1005298dc */

void thunk_FUN_1005298dc(void)

{
  FUN_1005298dc();
  return;
}



/* Address: 0x100588b74 | thunk_FUN_100529920 */

void thunk_FUN_100529920(void)

{
  FUN_100529920();
  return;
}



/* Address: 0x100588b78 | FUN_100588b78 */

void FUN_100588b78(undefined8 param_1)

{
  FUN_100588dc4(param_1,&DAT_100fd1f70,&DAT_100c5ef18,FUN_10059c3ac,&DAT_100ee3298);
  return;
}



/* Address: 0x100588bac | thunk_FUN_100529a8c */

void thunk_FUN_100529a8c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  if (bVar1 == 2) {
    HVar2.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar2.unknown = (undefined *)(ulong)(bVar1 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100588bb0 | thunk_FUN_100529aec */

void thunk_FUN_100529aec(void)

{
  FUN_100529aec();
  return;
}



/* Address: 0x100588bb4 | thunk_FUN_100529b30 */

void thunk_FUN_100529b30(void)

{
  FUN_100529b30();
  return;
}



/* Address: 0x100588bb8 | FUN_100588bb8 */

void FUN_100588bb8(void)

{
  FUN_100588f10();
  return;
}



/* Address: 0x100588bec | FUN_100588bec */

void FUN_100588bec(void)

{
  FUN_100589064();
  return;
}



/* Address: 0x100588c20 | FUN_100588c20 */

String FUN_100588c20(void)

{
  String SVar1;
  
  FUN_10059c3ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100588c48 | FUN_100588c48 */

String FUN_100588c48(void)

{
  String SVar1;
  
  FUN_10059c3ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100588c70 | FUN_100588c70 */

void FUN_100588c70(undefined8 param_1,undefined8 param_2)

{
  FUN_100588ca4(param_1,param_2,&DAT_100fd1f78,&DAT_100c5ef20,FUN_10059c3ec,&DAT_100ee3208);
  return;
}



/* Address: 0x100588ca4 | FUN_100588ca4 */

void FUN_100588ca4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  long extraout_x8;
  long lVar1;
  
  FUN_1000f7830(param_3,param_4);
  lVar1 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  (*param_5)();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2);
  (**(code **)(lVar1 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,param_3);
  return;
}



/* Address: 0x100588d90 | FUN_100588d90 */

void FUN_100588d90(undefined8 param_1)

{
  FUN_100588dc4(param_1,&DAT_100fd1f88,&DAT_100c5ef28,FUN_10059c3ec,&DAT_100ee3208);
  return;
}



/* Address: 0x100588dc4 | FUN_100588dc4 */

undefined * FUN_100588dc4(undefined *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  
  FUN_1000f7830(param_2,param_3);
  lVar3 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  (*param_4)();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar2.unknown,param_2);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,param_2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    KVar2.unknown = puVar1;
  }
  return KVar2.unknown;
}



/* Address: 0x100588edc | FUN_100588edc */

void FUN_100588edc(void)

{
  FUN_100588f10();
  return;
}



/* Address: 0x100588f10 | FUN_100588f10 */

void FUN_100588f10(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  undefined1 *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  local_68 = param_1;
  FUN_1000f7830(param_5,param_6);
  lVar3 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  (*param_7)();
  KVar2 = Swift::Decoder::_container();
  puVar1 = local_68;
  if (unaff_x21 == 0) {
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar2.unknown,param_5);
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,param_5);
    FUN_100004594(param_2);
    *puVar1 = (char)KVar2.unknown;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100589030 | FUN_100589030 */

void FUN_100589030(void)

{
  FUN_100589064();
  return;
}



/* Address: 0x100589064 | FUN_100589064 */

void FUN_100589064(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined1 uVar1;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar2;
  undefined1 auStack_70 [8];
  code *local_68;
  
  local_68 = param_6;
  FUN_1000f7830(param_4,param_5);
  lVar2 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  (*local_68)();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1);
  (**(code **)(lVar2 + 8))(auStack_70 + -extraout_x8,param_4);
  return;
}



/* Address: 0x100589154 | FUN_100589154 */

String FUN_100589154(void)

{
  String SVar1;
  
  FUN_10059c42c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10058917c | FUN_10058917c */

String FUN_10058917c(void)

{
  String SVar1;
  
  FUN_10059c42c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005891a4 | FUN_1005891a4 */

void FUN_1005891a4(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fd1f90,&DAT_100c5ef30,FUN_10059c42c,&DAT_100ee3178);
  return;
}



/* Address: 0x1005891d8 | FUN_1005891d8 */

void FUN_1005891d8(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x10058920c | FUN_10058920c */

String FUN_10058920c(void)

{
  String SVar1;
  
  FUN_10059c46c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100589234 | FUN_100589234 */

String FUN_100589234(void)

{
  String SVar1;
  
  FUN_10059c46c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10058925c | FUN_10058925c */

void FUN_10058925c(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fd1fa0,&DAT_100c5ef38,FUN_10059c46c,&DAT_100ee3158);
  return;
}



/* Address: 0x100589290 | FUN_100589290 */

void FUN_100589290(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x1005892c4 | FUN_1005892c4 */

ulong FUN_1005892c4(ulong param_1)

{
  return param_1 >> 8;
}



/* Address: 0x1005892cc | FUN_1005892cc */

ulong FUN_1005892cc(ulong param_1)

{
  return param_1 >> 0x10;
}



/* Address: 0x1005892d4 | FUN_1005892d4 */

void FUN_1005892d4(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 2) = param_1;
  return;
}



/* Address: 0x1005892dc | FUN_1005892dc */

undefined1  [16] FUN_1005892dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 2;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005892ec | FUN_1005892ec */

ulong FUN_1005892ec(ulong param_1)

{
  return param_1 >> 0x18;
}



/* Address: 0x1005892f4 | FUN_1005892f4 */

void FUN_1005892f4(undefined2 param_1)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 3) = param_1;
  return;
}



/* Address: 0x1005892fc | FUN_1005892fc */

ulong FUN_1005892fc(ulong param_1)

{
  return param_1 >> 0x28;
}



/* Address: 0x100589304 | FUN_100589304 */

void FUN_100589304(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 5) = param_1;
  return;
}



/* Address: 0x10058930c | FUN_10058930c */

undefined1  [16] FUN_10058930c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 5;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}


