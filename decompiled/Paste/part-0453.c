/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100571d98 | FUN_100571d98 */

String FUN_100571d98(void)

{
  String SVar1;
  
  FUN_100576594();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100571dc0 | FUN_100571dc0 */

/* WARNING: Removing unreachable block (ram,0x000100571fa0) */

void FUN_100571dc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_60 [7];
  undefined1 local_59;
  ulong local_58;
  
  puVar1 = &DAT_100fd0bd0;
  FUN_1000f7830(&DAT_100fd0bd0,&BYTE_100c5b8f8);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100576594();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_58,puVar1);
  if (unaff_x21 == 0) {
    local_58._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_58,puVar1);
    local_58 = CONCAT71(local_58._1_7_,2);
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_58,puVar1);
    local_58 = unaff_x20[6];
    local_59 = 3;
    puVar2 = &DAT_100fd0be0;
    FUN_1000f7830(&DAT_100fd0be0,&BYTE_100c5b900);
    puVar3 = puVar2;
    FUN_1005765d4();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[7];
    local_59 = 4;
    puVar2 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    puVar3 = puVar2;
    FUN_100576684();
    puVar4 = &local_58;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,&local_59,puVar1,puVar2,puVar3);
    local_58 = unaff_x20[8];
    local_59 = 5;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_58,&local_59,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10057200c | FUN_10057200c */

void FUN_10057200c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100576758(&local_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    param_1[8] = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x10057205c | FUN_10057205c */

undefined1 FUN_10057205c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x30);
}



/* Address: 0x100572064 | FUN_100572064 */

void FUN_100572064(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = param_8;
  return;
}



/* Address: 0x100572078 | FUN_100572078 */

undefined1  [16] FUN_100572078(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  puVar5 = &DAT_eb000000006e6f69;
  uVar4 = 0x7470697263736564;
  if (bVar3 != 2) {
    puVar5 = &DAT_e800000000000000;
    uVar4 = 0x6465726975716572;
  }
  uVar1 = 0x656d616e;
  if (bVar3 != 0) {
    uVar1 = 0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar3 != 0) {
    puVar2 = &DAT_e500000000000000;
  }
  if (bVar3 < 2) {
    puVar5 = puVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1005720f0 | FUN_1005720f0 */

void FUN_1005720f0(undefined1 *param_1,undefined1 param_2)

{
  FUN_100576b80();
  *param_1 = param_2;
  return;
}



/* Address: 0x100572114 | FUN_100572114 */

String FUN_100572114(void)

{
  String SVar1;
  
  FUN_100576b40();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057213c | FUN_10057213c */

String FUN_10057213c(void)

{
  String SVar1;
  
  FUN_100576b40();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100572164 | thunk_FUN_100576064 */

void thunk_FUN_100576064(void)

{
  FUN_100576064();
  return;
}



/* Address: 0x100572168 | FUN_100572168 */

void FUN_100572168(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0bf8;
  FUN_1000f7830(&DAT_100fd0bf8,&BYTE_100c5b910);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100576b40();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(*(undefined1 *)(unaff_x20 + 6),&local_54,puVar1)
    ;
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1005722d4 | FUN_1005722d4 */

void FUN_1005722d4(Hasher param_1)

{
  byte bVar1;
  Hasher HVar2;
  String *unaff_x20;
  void *pvVar3;
  Hasher HVar4;
  char *pcVar5;
  String SVar6;
  String SVar7;
  
  HVar2.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar3 = unaff_x20[1].bridgeObject;
  if (pvVar3 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    pvVar3 = unaff_x20[2].bridgeObject;
    HVar4.unknown = HVar2.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar2);
    SVar6.bridgeObject = pvVar3;
    SVar6.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar6);
    pvVar3 = unaff_x20[2].bridgeObject;
  }
  if (pvVar3 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    pcVar5 = unaff_x20[2].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar7.bridgeObject = pvVar3;
    SVar7.str = pcVar5;
    Swift::String::hash(param_1,SVar7);
    HVar4.unknown = pcVar5;
  }
  bVar1 = *(byte *)&unaff_x20[3].str;
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    bVar1 = bVar1 & 1;
  }
  Swift::Hasher::_combine(bVar1,HVar4);
  return;
}



/* Address: 0x10057238c | FUN_10057238c */

void FUN_10057238c(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005722d4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005723c8 | FUN_1005723c8 */

void FUN_1005723c8(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_100576ce0(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    *(undefined1 *)(param_1 + 6) = local_28;
  }
  return;
}



/* Address: 0x100572414 | thunk_FUN_1005722d4 */

void thunk_FUN_1005722d4(void)

{
  FUN_1005722d4();
  return;
}



/* Address: 0x100572418 | FUN_100572418 */

void FUN_100572418(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005722d4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100572450 | FUN_100572450 */

void FUN_100572450(void)

{
  FUN_100572168();
  return;
}



/* Address: 0x100572464 | FUN_100572464 */

uint FUN_100572464(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  local_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  local_20 = *(undefined1 *)(param_2 + 6);
  FUN_100576064(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x1005724bc | FUN_1005724bc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005724f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_1005724bc(undefined8 param_1,undefined8 param_2)

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



/* Address: 0x100572528 | FUN_100572528 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100572568 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100572528(undefined1 *param_1,undefined8 *param_2)

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



/* Address: 0x1005725a0 | FUN_1005725a0 */

void FUN_1005725a0(void)

{
  FUN_100579f28();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1005725fc | FUN_1005725fc */

void FUN_1005725fc(void)

{
  FUN_100579f28();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x100572648 | FUN_100572648 */

void FUN_100572648(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100576f54(unaff_x20 + 8,param_1);
  return;
}



/* Address: 0x100572654 | FUN_100572654 */

void FUN_100572654(undefined1 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_51 = (undefined1)param_3[5];
  uStack_50 = (undefined7)((ulong)param_3[5] >> 8);
  local_59 = (undefined1)param_3[4];
  uStack_58 = (undefined7)((ulong)param_3[4] >> 8);
  uStack_61 = (undefined1)param_3[3];
  uStack_60 = (undefined7)((ulong)param_3[3] >> 8);
  local_69 = (undefined1)param_3[2];
  uStack_68 = (undefined7)((ulong)param_3[2] >> 8);
  uStack_71 = (undefined1)param_3[1];
  uStack_70 = (undefined7)((ulong)param_3[1] >> 8);
  local_79 = (undefined1)*param_3;
  uStack_78 = (undefined7)((ulong)*param_3 >> 8);
  uStack_11 = (undefined1)param_3[0xd];
  local_19 = (undefined1)param_3[0xc];
  uStack_18 = (undefined7)((ulong)param_3[0xc] >> 8);
  uStack_21 = (undefined1)param_3[0xb];
  uStack_20 = (undefined7)((ulong)param_3[0xb] >> 8);
  local_29 = (undefined1)param_3[10];
  uStack_28 = (undefined7)((ulong)param_3[10] >> 8);
  uStack_31 = (undefined1)param_3[9];
  uStack_30 = (undefined7)((ulong)param_3[9] >> 8);
  local_39 = (undefined1)param_3[8];
  uStack_38 = (undefined7)((ulong)param_3[8] >> 8);
  uVar2 = *(undefined8 *)((long)param_3 + 0x71);
  uVar1 = *(undefined8 *)((long)param_3 + 0x69);
  uStack_41 = (undefined1)param_3[7];
  uStack_40 = (undefined7)((ulong)param_3[7] >> 8);
  local_49 = (undefined1)param_3[6];
  uStack_48 = (undefined7)((ulong)param_3[6] >> 8);
  *param_1 = param_2;
  *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_41,uStack_48);
  *(ulong *)(param_1 + 0x31) = CONCAT17(local_49,uStack_50);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_51,uStack_58);
  *(ulong *)(param_1 + 0x21) = CONCAT17(local_59,uStack_60);
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_61,uStack_68);
  *(ulong *)(param_1 + 0x11) = CONCAT17(local_69,uStack_70);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_71,uStack_78);
  *(ulong *)(param_1 + 1) = CONCAT17(local_79,uStack_80);
  *(undefined8 *)(param_1 + 0x79) = uVar2;
  *(undefined8 *)(param_1 + 0x71) = uVar1;
  *(ulong *)(param_1 + 0x69) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)(param_1 + 0x61) = CONCAT17(local_19,uStack_20);
  *(ulong *)(param_1 + 0x59) = CONCAT17(uStack_21,uStack_28);
  *(ulong *)(param_1 + 0x51) = CONCAT17(local_29,uStack_30);
  *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)(param_1 + 0x41) = CONCAT17(local_39,uStack_40);
  return;
}



/* Address: 0x1005726c8 | FUN_1005726c8 */

void FUN_1005726c8(undefined8 param_1)

{
  FUN_1005726d8(param_1,0);
  return;
}



/* Address: 0x1005726d0 | FUN_1005726d0 */

void FUN_1005726d0(undefined8 param_1)

{
  FUN_1005726d8(param_1,1);
  return;
}



/* Address: 0x1005726d8 | FUN_1005726d8 */

void FUN_1005726d8(undefined1 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined1 auStack_130 [128];
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_61 = (undefined1)param_2[9];
  uStack_60 = (undefined7)((ulong)param_2[9] >> 8);
  local_69 = (undefined1)param_2[8];
  uStack_68 = (undefined7)((ulong)param_2[8] >> 8);
  uStack_51 = (undefined1)param_2[0xb];
  uStack_50 = (undefined7)((ulong)param_2[0xb] >> 8);
  local_59 = (undefined1)param_2[10];
  uStack_58 = (undefined7)((ulong)param_2[10] >> 8);
  uStack_41 = (undefined1)param_2[0xd];
  local_49 = (undefined1)param_2[0xc];
  uStack_48 = (undefined7)((ulong)param_2[0xc] >> 8);
  uStack_38 = *(undefined8 *)((long)param_2 + 0x71);
  uStack_40 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
  uStack_39 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_a1 = (undefined1)param_2[1];
  uStack_a0 = (undefined7)((ulong)param_2[1] >> 8);
  local_a9 = (undefined1)*param_2;
  uStack_a8 = (undefined7)((ulong)*param_2 >> 8);
  uStack_91 = (undefined1)param_2[3];
  uStack_90 = (undefined7)((ulong)param_2[3] >> 8);
  local_99 = (undefined1)param_2[2];
  uStack_98 = (undefined7)((ulong)param_2[2] >> 8);
  uStack_81 = (undefined1)param_2[5];
  uStack_80 = (undefined7)((ulong)param_2[5] >> 8);
  local_89 = (undefined1)param_2[4];
  uStack_88 = (undefined7)((ulong)param_2[4] >> 8);
  uStack_71 = (undefined1)param_2[7];
  uStack_70 = (undefined7)((ulong)param_2[7] >> 8);
  local_79 = (undefined1)param_2[6];
  uStack_78 = (undefined7)((ulong)param_2[6] >> 8);
  FUN_100576f54(param_2,auStack_130);
  *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_61,uStack_68);
  *(ulong *)(param_1 + 0x41) = CONCAT17(local_69,uStack_70);
  *(ulong *)(param_1 + 0x59) = CONCAT17(uStack_51,uStack_58);
  *(ulong *)(param_1 + 0x51) = CONCAT17(local_59,uStack_60);
  *(ulong *)(param_1 + 0x69) = CONCAT17(uStack_41,uStack_48);
  *(ulong *)(param_1 + 0x61) = CONCAT17(local_49,uStack_50);
  *(undefined8 *)(param_1 + 0x79) = uStack_38;
  *(ulong *)(param_1 + 0x71) = CONCAT17(uStack_39,uStack_40);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_a1,uStack_a8);
  *(ulong *)(param_1 + 1) = CONCAT17(local_a9,uStack_b0);
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_91,uStack_98);
  *(ulong *)(param_1 + 0x11) = CONCAT17(local_99,uStack_a0);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_81,uStack_88);
  *(ulong *)(param_1 + 0x21) = CONCAT17(local_89,uStack_90);
  *param_1 = param_3;
  *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_71,uStack_78);
  *(ulong *)(param_1 + 0x31) = CONCAT17(local_79,uStack_80);
  return;
}



/* Address: 0x10057277c | FUN_10057277c */

undefined1  [16] FUN_10057277c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x746e65746e6f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x656c6f72;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1005727b0 | FUN_1005727b0 */

void FUN_1005727b0(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x656c6f72 || param_3 != &DAT_e400000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656c6f72,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x746e65746e6f63) && (param_3 == &DAT_e700000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e700000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x746e65746e6f63,(_StringGuts)0xe700000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100572810;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100572810:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100572888 | FUN_100572888 */

String FUN_100572888(void)

{
  String SVar1;
  
  FUN_100576f88();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005728b0 | FUN_1005728b0 */

String FUN_1005728b0(void)

{
  String SVar1;
  
  FUN_100576f88();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005728d8 | FUN_1005728d8 */

uint FUN_1005728d8(char *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  if (*param_1 == *param_2) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    local_60 = *(undefined8 *)(param_1 + 0x48);
    uStack_48 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    local_40 = *(undefined8 *)(param_1 + 0x68);
    uStack_38 = (undefined1)*(undefined8 *)(param_1 + 0x70);
    uStack_2f = *(undefined8 *)(param_1 + 0x79);
    uStack_37 = (undefined7)*(undefined8 *)(param_1 + 0x71);
    uStack_30 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x10);
    local_a0 = *(undefined8 *)(param_1 + 8);
    uStack_88 = *(undefined8 *)(param_1 + 0x20);
    uStack_90 = *(undefined8 *)(param_1 + 0x18);
    uStack_78 = *(undefined8 *)(param_1 + 0x30);
    local_80 = *(undefined8 *)(param_1 + 0x28);
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_118 = *(undefined8 *)(param_2 + 0x10);
    local_120 = *(undefined8 *)(param_2 + 8);
    uStack_108 = *(undefined8 *)(param_2 + 0x20);
    uStack_110 = *(undefined8 *)(param_2 + 0x18);
    uStack_f8 = *(undefined8 *)(param_2 + 0x30);
    local_100 = *(undefined8 *)(param_2 + 0x28);
    uStack_e8 = *(undefined8 *)(param_2 + 0x40);
    uStack_f0 = *(undefined8 *)(param_2 + 0x38);
    uStack_d8 = *(undefined8 *)(param_2 + 0x50);
    local_e0 = *(undefined8 *)(param_2 + 0x48);
    uStack_c8 = *(undefined8 *)(param_2 + 0x60);
    local_d0 = *(undefined8 *)(param_2 + 0x58);
    uStack_c0 = *(undefined8 *)(param_2 + 0x68);
    uStack_af = *(undefined8 *)(param_2 + 0x79);
    uStack_b0 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x71) >> 0x38);
    uStack_b8 = (undefined1)*(undefined8 *)(param_2 + 0x70);
    local_b7 = (undefined7)((ulong)*(undefined8 *)(param_2 + 0x70) >> 8);
    puVar1 = &local_a0;
    FUN_100560020(puVar1,&local_120);
    return (uint)puVar1 & 1;
  }
  return 0;
}



/* Address: 0x100572988 | FUN_100572988 */

void FUN_100572988(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_180 [8];
  undefined1 local_178 [135];
  undefined1 local_f1;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar1 = &DAT_100fd0c60;
  FUN_1000f7830(&DAT_100fd0c60,&BYTE_100c5b920);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100576f88();
  KVar2 = Swift::Encoder::_container();
  local_178[0] = *unaff_x20;
  local_f0 = local_f0 & 0xffffffffffffff00;
  FUN_100576fc8();
  Swift::KeyedEncodingContainer::_encode(local_178,&local_f0,puVar1,&DAT_100ee10a8,KVar2.unknown);
  if (unaff_x21 == 0) {
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x50);
    local_b0 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_a0 = *(undefined8 *)(unaff_x20 + 0x58);
    local_90 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_88 = (undefined1)*(undefined8 *)(unaff_x20 + 0x70);
    uStack_7f = *(undefined8 *)(unaff_x20 + 0x79);
    uStack_87 = (undefined7)*(undefined8 *)(unaff_x20 + 0x71);
    uStack_80 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x71) >> 0x38);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x10);
    local_f0 = *(ulong *)(unaff_x20 + 8);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x30);
    local_d0 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0x38);
    local_f1 = 1;
    FUN_1004dbaa8();
    FUN_100577008();
    Swift::KeyedEncodingContainer::_encode(&local_f0,&local_f1,puVar1,&DAT_100ee1138,unaff_x20);
    FUN_100577048(&local_f0);
  }
  (**(code **)(lVar3 + 8))(auStack_180 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100572b20 | FUN_100572b20 */

void FUN_100572b20(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6e61747369737361;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  puVar2 = (undefined1 *)0xe900000000000074;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  FUN_10055b730(param_1.unknown);
  return;
}



/* Address: 0x100572b90 | FUN_100572b90 */

void FUN_100572b90(void)

{
  char *pcVar1;
  Hasher HVar2;
  undefined1 *puVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6e61747369737361;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  puVar3 = (undefined1 *)0xe900000000000074;
  if (*unaff_x20 != '\x01') {
    puVar3 = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = puVar3;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease(puVar3);
  HVar2.unknown = auStack_68;
  FUN_10055b730();
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100572c14 | FUN_100572c14 */

void FUN_100572c14(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
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
  undefined1 local_28;
  
  FUN_100577074(&local_a8);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_40;
    param_1[0xc] = local_48;
    param_1[0xf] = uStack_30;
    param_1[0xe] = local_38;
    *(undefined1 *)(param_1 + 0x10) = local_28;
    param_1[5] = uStack_80;
    param_1[4] = local_88;
    param_1[7] = uStack_70;
    param_1[6] = local_78;
    param_1[9] = uStack_60;
    param_1[8] = local_68;
    param_1[0xb] = uStack_50;
    param_1[10] = local_58;
    param_1[1] = uStack_a0;
    *param_1 = local_a8;
    param_1[3] = uStack_90;
    param_1[2] = local_98;
  }
  return;
}



/* Address: 0x100572c7c | FUN_100572c7c */

void FUN_100572c7c(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6e61747369737361;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  puVar4 = (undefined1 *)0xe900000000000074;
  if (cVar2 != '\x01') {
    puVar4 = &DAT_e400000000000000;
  }
  SVar5.bridgeObject = puVar4;
  SVar5.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  _swift_bridgeObjectRelease(puVar4);
  HVar3.unknown = auStack_68;
  FUN_10055b730();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100572d00 | FUN_100572d00 */

void FUN_100572d00(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6e61747369737361;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  puVar4 = (undefined1 *)0xe900000000000074;
  if (cVar2 != '\x01') {
    puVar4 = &DAT_e400000000000000;
  }
  SVar5.bridgeObject = puVar4;
  SVar5.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  _swift_bridgeObjectRelease(puVar4);
  HVar3.unknown = auStack_68;
  FUN_10055b730();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100572d80 | FUN_100572d80 */

void FUN_100572d80(void)

{
  FUN_100572988();
  return;
}



/* Address: 0x100572dd0 | FUN_100572dd0 */

uint FUN_100572dd0(char *param_1,char *param_2)

{
  uint uVar1;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  local_e0 = *(undefined8 *)(param_1 + 0x48);
  uStack_c8 = *(undefined8 *)(param_1 + 0x60);
  uStack_d0 = *(undefined8 *)(param_1 + 0x58);
  local_c0 = *(undefined8 *)(param_1 + 0x68);
  uStack_b8 = (undefined1)*(undefined8 *)(param_1 + 0x70);
  uStack_af = *(undefined8 *)(param_1 + 0x79);
  uStack_b7 = (undefined7)*(undefined8 *)(param_1 + 0x71);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x71) >> 0x38);
  uStack_118 = *(undefined8 *)(param_1 + 0x10);
  local_120 = *(undefined8 *)(param_1 + 8);
  uStack_108 = *(undefined8 *)(param_1 + 0x20);
  uStack_110 = *(undefined8 *)(param_1 + 0x18);
  uStack_f8 = *(undefined8 *)(param_1 + 0x30);
  local_100 = *(undefined8 *)(param_1 + 0x28);
  uStack_e8 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = *(undefined8 *)(param_1 + 0x38);
  uStack_58 = *(undefined8 *)(param_2 + 0x50);
  local_60 = *(undefined8 *)(param_2 + 0x48);
  uStack_48 = *(undefined8 *)(param_2 + 0x60);
  uStack_50 = *(undefined8 *)(param_2 + 0x58);
  local_40 = *(undefined8 *)(param_2 + 0x68);
  uStack_38 = (undefined1)*(undefined8 *)(param_2 + 0x70);
  uStack_2f = *(undefined8 *)(param_2 + 0x79);
  uStack_37 = (undefined7)*(undefined8 *)(param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)(param_2 + 0x71) >> 0x38);
  uStack_98 = *(undefined8 *)(param_2 + 0x10);
  local_a0 = *(undefined8 *)(param_2 + 8);
  uStack_88 = *(undefined8 *)(param_2 + 0x20);
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  uStack_78 = *(undefined8 *)(param_2 + 0x30);
  local_80 = *(undefined8 *)(param_2 + 0x28);
  uStack_68 = *(undefined8 *)(param_2 + 0x40);
  uStack_70 = *(undefined8 *)(param_2 + 0x38);
  if (*param_1 == *param_2) {
    FUN_100560020(&local_120,&local_a0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Address: 0x100572e80 | FUN_100572e80 */

void FUN_100572e80(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x656d616e;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = &DAT_65707974;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100572f0c | FUN_100572f0c */

void FUN_100572f0c(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x656d616e;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = &DAT_65707974;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x100572f74 | FUN_100572f74 */

void FUN_100572f74(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x656d616e;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = &DAT_65707974;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100572ffc | FUN_100572ffc */

void FUN_100572ffc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd0ff8);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100573030 | FUN_100573030 */

void FUN_100573030(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0x656d616e;
  if (cVar4 != '\x01') {
    puVar3 = (undefined1 *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar1 = &DAT_e500000000000000;
  }
  puVar2 = &DAT_65707974;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  *param_1 = puVar2;
  param_1[1] = puVar3;
  return;
}



/* Address: 0x10057307c | FUN_10057307c */

undefined1  [16] FUN_10057307c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0x656d616e;
  if (cVar4 != '\x01') {
    puVar3 = (undefined1 *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar1 = &DAT_e500000000000000;
  }
  puVar2 = &DAT_65707974;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x1005730c4 | FUN_1005730c4 */

void FUN_1005730c4(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd0ff8);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1005730f0 | FUN_1005730f0 */

String FUN_1005730f0(void)

{
  String SVar1;
  
  FUN_1005764f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100573118 | FUN_100573118 */

String FUN_100573118(void)

{
  String SVar1;
  
  FUN_1005764f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100573140 | thunk_FUN_100576154 */

void thunk_FUN_100576154(void)

{
  FUN_100576154();
  return;
}



/* Address: 0x100573144 | FUN_100573144 */

void FUN_100573144(Hasher param_1,Hasher param_2,void *param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2.unknown;
  Swift::String::hash(param_1,SVar1);
  if (param_5 != (void *)0x0) {
    Swift::Hasher::_combine(1,param_2);
    SVar2.bridgeObject = param_5;
    SVar2.str = param_4;
    Swift::String::hash(param_1,SVar2);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x1005731a4 | FUN_1005731a4 */

void FUN_1005731a4(Hasher param_1,void *param_2,char *param_3,void *param_4)

{
  Hasher into;
  String SVar1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1.unknown;
  Swift::String::hash((Hasher)auStack_78,SVar1);
  if (param_4 == (void *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_1);
  }
  else {
    Swift::Hasher::_combine(1,param_1);
    into.unknown = auStack_78;
    SVar2.bridgeObject = param_4;
    SVar2.str = param_3;
    Swift::String::hash(into,SVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10057322c | FUN_10057322c */

void FUN_10057322c(void)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  Hasher into;
  Hasher HVar4;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  pvVar1 = unaff_x20[1].bridgeObject;
  SVar3 = unaff_x20[1];
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  if (pvVar1 == (void *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    into.unknown = auStack_88;
    Swift::String::hash(into,SVar3);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1005732b4 | FUN_1005732b4 */

void FUN_1005732b4(Hasher param_1)

{
  void *pvVar1;
  String SVar2;
  Hasher HVar3;
  String *unaff_x20;
  
  HVar3.unknown = unaff_x20->str;
  pvVar1 = unaff_x20[1].bridgeObject;
  SVar2 = unaff_x20[1];
  Swift::String::hash(param_1,*unaff_x20);
  if (pvVar1 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar3);
    Swift::String::hash(param_1,SVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar3);
  return;
}



/* Address: 0x10057331c | FUN_10057331c */

void FUN_10057331c(__int64 param_1)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  Hasher into;
  Hasher HVar4;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = unaff_x20->str;
  SVar2 = *unaff_x20;
  pvVar1 = unaff_x20[1].bridgeObject;
  SVar3 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  if (pvVar1 == (void *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    into.unknown = auStack_88;
    Swift::String::hash(into,SVar3);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1005733a0 | FUN_1005733a0 */

void FUN_1005733a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100576340();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x1005733cc | FUN_1005733cc */

void FUN_1005733cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005718e0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005733e8 | FUN_1005733e8 */

void FUN_1005733e8(void)

{
  FUN_100575a74();
  return;
}



/* Address: 0x1005733f4 | thunk_FUN_100575bd4 */

void thunk_FUN_100575bd4(void)

{
  FUN_100575bd4();
  return;
}



/* Address: 0x1005733f8 | FUN_1005733f8 */

void FUN_1005733f8(Hasher param_1)

{
  String *unaff_x20;
  void *pvVar1;
  Hasher HVar2;
  Hasher HVar3;
  Hasher HVar4;
  char *pcVar5;
  String SVar6;
  String SVar7;
  
  HVar2.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar1 = unaff_x20[1].bridgeObject;
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    pvVar1 = unaff_x20[2].bridgeObject;
    HVar4.unknown = HVar2.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar2);
    SVar6.bridgeObject = pvVar1;
    SVar6.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar6);
    pvVar1 = unaff_x20[2].bridgeObject;
  }
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar2.unknown = unaff_x20[3].str;
  }
  else {
    pcVar5 = unaff_x20[2].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar7.bridgeObject = pvVar1;
    SVar7.str = pcVar5;
    Swift::String::hash(param_1,SVar7);
    HVar2.unknown = unaff_x20[3].str;
    HVar4.unknown = pcVar5;
  }
  if (HVar2.unknown == (char *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar3.unknown = unaff_x20[3].bridgeObject;
    HVar2.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004d88ac(param_1.unknown);
    HVar3.unknown = unaff_x20[3].bridgeObject;
  }
  if (HVar3.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    pcVar5 = unaff_x20[4].str;
    HVar3.unknown = HVar2.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004d7564(param_1.unknown);
    pcVar5 = unaff_x20[4].str;
  }
  if (pcVar5 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar3);
    FUN_1004df778(param_1.unknown,pcVar5);
    return;
  }
  Swift::Hasher::_combine(0,HVar3);
  return;
}



/* Address: 0x100573518 | FUN_100573518 */

void FUN_100573518(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005733f8();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100573554 | FUN_100573554 */

/* WARNING: Removing unreachable block (ram,0x000100573c88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100573554(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  Hasher into;
  undefined1 *puVar6;
  Hasher into_00;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  long lVar14;
  long extraout_x8;
  code *pcVar15;
  Hasher unaff_x19;
  byte *unaff_x20;
  byte *pbVar16;
  long unaff_x21;
  byte *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 uVar17;
  undefined1 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  String SVar38;
  String SVar39;
  String SVar40;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 *in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 auStack_1c0 [28];
  undefined1 auStack_e0 [112];
  undefined1 auStack_70 [80];
  
  pbVar11 = &DAT_e400000000000000;
  uVar4 = 0x65707974;
  into.unknown = &DAT_65707974;
  param_3 = param_3 & 0xff;
  puVar3 = (undefined8 *)register0x00000008;
  pbVar7 = into.unknown;
  into_00.unknown = into.unknown;
  pbVar2 = param_5;
  pbVar16 = unaff_x20;
  puVar12 = unaff_x29;
  switch(param_3) {
  default:
    uVar4 = 0x6574;
  case 0xee:
    auVar21._4_4_ = 0;
    auVar21._0_4_ = uVar4 & 0xffff | 0x74780000;
    auVar21._8_8_ = &DAT_e400000000000000;
    return auVar21;
  case 2:
    auVar24._8_8_ = &DAT_e400000000000000;
    auVar24._0_8_ = 0x61746164;
    return auVar24;
  case 3:
    auVar25._8_8_ = &DAT_e800000000000000;
    auVar25._0_8_ = 0x65707954656d696d;
    return auVar25;
  case 4:
  case 0xc6:
    pbVar11 = &DAT_e800000000000000;
  case 200:
  case 0xfc:
    into.unknown = (byte *)0x6572;
  case 0xbe:
  case 0xfe:
    auVar22._0_8_ = (ulong)into.unknown & 0xffffffff0000ffff | 0x656372756f730000;
    auVar22._8_8_ = pbVar11;
    return auVar22;
  case 5:
    pbVar11 = (byte *)0x6e6f;
  case 0x60:
    pbVar11 = (byte *)((ulong)pbVar11 & 0xffffffffffff | 0xeb00000000730000);
  case 0x38:
  case 0x50:
    into.unknown = (byte *)0x697461746f6e6e61;
  case 0x68:
    auVar27._8_8_ = pbVar11;
    auVar27._0_8_ = into.unknown;
    return auVar27;
  case 6:
    pbVar11 = &DAT_e500000000000000;
  case 0x40:
    auVar28._8_8_ = pbVar11;
    auVar28._0_8_ = 0x6174656d5f;
    return auVar28;
  case 7:
    pbVar11 = (byte *)0xe300000000000000;
  case 0x30:
    auVar26._8_8_ = pbVar11;
    auVar26._0_8_ = 0x697275;
    return auVar26;
  case 8:
    uVar4 = 0x616e;
  case 0xd0:
    auVar30._4_4_ = 0;
    auVar30._0_4_ = uVar4 & 0xffff | 0x656d0000;
    auVar30._8_8_ = &DAT_e400000000000000;
    return auVar30;
  case 9:
  case 0x44:
  case 0x8c:
  case 0xac:
    pbVar11 = &DAT_e500000000000000;
  case 0x32:
  case 0x3a:
  case 0x42:
  case 0x52:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x7a:
  case 0x82:
  case 0x8a:
  case 0x92:
  case 0xa2:
  case 0xaa:
  case 0xb2:
  case 0xd2:
    into.unknown = (byte *)0x6c746974;
  case 0x34:
  case 0x3c:
  case 0x54:
  case 100:
  case 0x6c:
  case 0x74:
  case 0x7c:
  case 0x84:
  case 0x94:
  case 0xa4:
  case 0xb4:
    auVar23._0_8_ = (ulong)into.unknown | 0x6500000000;
    auVar23._8_8_ = pbVar11;
    return auVar23;
  case 10:
  case 0x70:
  case 0xba:
  case 0xce:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xfa:
    pbVar11 = &DAT_eb000000006e6f69;
    into.unknown = (byte *)0x697263736564;
  case 0x78:
    into.unknown = into.unknown | 0x7470000000000000;
  case 0:
  case 0x17:
  case 0x27:
    auVar29._8_8_ = pbVar11;
    auVar29._0_8_ = into.unknown;
    return auVar29;
  case 0x31:
  case 0x39:
  case 0x41:
  case 0x51:
  case 0x61:
  case 0x69:
  case 0x71:
  case 0x79:
  case 0x81:
  case 0x89:
  case 0x91:
  case 0xa1:
  case 0xa9:
  case 0xb1:
  case 0xd1:
    in_stack_00000058 = uRame400000000000008;
    in_stack_00000050 = (undefined8 *)_DAT_e400000000000000;
    in_stack_00000068 = uRame400000000000018;
    in_stack_00000060 = (undefined8 *)_DAT_e400000000000010;
    puVar12 = &stack0x00000050;
    in_stack_00000000 = param_2;
    in_stack_00000010 = param_1;
    FUN_100575bd4();
    auVar33._4_4_ = 0;
    auVar33._0_4_ = (uint)register0x00000008 & 1;
    auVar33._8_8_ = puVar12;
    return auVar33;
  case 0x80:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    Swift::Hasher::init(0x65707974);
  case 0x88:
  case 0xa0:
    into.unknown = (undefined *)((long)register0x00000008 + 8);
    FUN_1005733f8();
  case 0x90:
    into.unknown = (undefined *)Swift::Hasher::_finalize(into);
  case 0xa8:
    auVar31._8_8_ = pbVar11;
    auVar31._0_8_ = into.unknown;
    return auVar31;
  case 0xb0:
  case 0xf6:
  case 0xbc:
    FUN_100571dc0();
    auVar32._8_8_ = pbVar11;
    auVar32._0_8_ = into.unknown;
    return auVar32;
  case 0xb9:
  case 0xcd:
  case 0xd5:
  case 0xdd:
  case 0xe5:
  case 0xf9:
    bVar1 = *unaff_x20;
    in_stack_00000060 = unaff_x29;
    in_stack_00000068 = unaff_x30;
    Swift::Hasher::init(0);
    unaff_x19.unknown = (byte *)(ulong)bVar1;
  case 0x29:
    into.unknown = unaff_x19.unknown;
    FUN_100573554();
  case 0x28:
    param_5 = into.unknown;
    unaff_x19.unknown = pbVar11;
  case 0x19:
  case 0xd9:
    into.unknown = (undefined *)&stack0x00000008;
    pbVar2 = param_5;
  case 0xe1:
  case 0xe9:
    param_5 = unaff_x19.unknown;
    pbVar11 = pbVar2;
    unaff_x19.unknown = param_5;
  case 0x18:
    SVar38.bridgeObject = param_5;
    SVar38.str = (char *)pbVar11;
    Swift::String::hash(into,SVar38);
  case 0x13:
  case 0x23:
    into.unknown = unaff_x19.unknown;
    _swift_bridgeObjectRelease();
  case 0x12:
  case 0x22:
  case 0x10:
  case 0x14:
  case 0x20:
  case 0x24:
  case 0xe8:
    into.unknown = (undefined *)Swift::Hasher::_finalize(into);
  case 0x11:
  case 0x21:
  case 0x16:
  case 0x1a:
  case 0x26:
  case 0x15:
  case 0x1b:
  case 0x25:
  case 0x2a:
  case 0xe0:
    auVar34._8_8_ = pbVar11;
    auVar34._0_8_ = into.unknown;
    return auVar34;
  case 0xbd:
  case 0xfd:
    unaff_x19.unknown = &DAT_e400000000000000;
    into_00.unknown = (undefined *)&stack0x00000008;
    param_5 = into.unknown;
  case 0xda:
  case 0xe2:
  case 0xea:
    SVar40.bridgeObject = unaff_x19.unknown;
    SVar40.str = (char *)param_5;
    Swift::String::hash(into_00,SVar40);
    _swift_bridgeObjectRelease();
    auVar36._0_8_ = Swift::Hasher::_finalize(unaff_x19);
    auVar36._8_8_ = param_5;
    return auVar36;
  case 0xd8:
    break;
  case 0xdb:
  case 0xe3:
  case 0xeb:
    goto switchD_10057357c_caseD_db;
  case 0xf4:
    SVar39.bridgeObject = &DAT_e400000000000000;
    SVar39.str = (char *)param_5;
    Swift::String::hash(unaff_x19,SVar39);
    puVar6 = &DAT_e400000000000000;
    _swift_bridgeObjectRelease(&DAT_e400000000000000);
    auVar35._8_8_ = param_5;
    auVar35._0_8_ = puVar6;
    return auVar35;
  case 0xf5:
  case 0xf8:
    puVar12 = &stack0x00000050;
    puVar3 = auStack_1c0;
    unaff_x19.unknown = (undefined *)auStack_1c0;
    unaff_x28 = auStack_e0;
    pbVar7 = &DAT_100fd0c80;
    pbVar11 = &BYTE_100c5b928;
    pbVar16 = into.unknown;
    unaff_x24 = unaff_x21;
    unaff_x25 = unaff_x20;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
  case 0xcc:
  case 0xd4:
  case 0xdc:
  case 0xe4:
    FUN_1000f7830(pbVar7,pbVar11);
    lVar14 = *(long *)(pbVar7 + -8);
    puVar12[-9] = lVar14;
    param_3 = *(long *)(lVar14 + 0x40) + 0xf;
    unaff_x22 = pbVar7;
  case 0x2f:
    param_3 = param_3 & 0xfffffffffffffff0;
  case 0x1f:
    (*(code *)PTR____chkstk_darwin_100ea82c0)(param_3);
    unaff_x23 = (long)puVar3 - extraout_x8;
    unaff_x20 = pbVar16;
  case 0xb8:
    into.unknown = unaff_x20;
    unaff_x26 = *(undefined8 *)(into.unknown + 0x18);
  }
  FUN_100004640(into.unknown,unaff_x26);
  FUN_100577288();
switchD_10057357c_caseD_db:
  Swift::Encoder::_container();
  uVar18 = *(undefined8 *)(unaff_x25 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x25 + 0x58);
  uVar19 = *(undefined8 *)(unaff_x25 + 0x50);
  *(undefined8 *)(unaff_x28 + 0x98) = *(undefined8 *)(unaff_x25 + 0x48);
  *(undefined8 *)(unaff_x28 + 0x90) = uVar18;
  *(undefined8 *)(unaff_x28 + 0xa8) = uVar8;
  *(undefined8 *)(unaff_x28 + 0xa0) = uVar19;
  uVar18 = *(undefined8 *)(unaff_x25 + 0x60);
  *(undefined8 *)(unaff_x28 + 0xb8) = *(undefined8 *)(unaff_x25 + 0x68);
  *(undefined8 *)(unaff_x28 + 0xb0) = uVar18;
  uVar18 = *(undefined8 *)(unaff_x25 + 0x69);
  *(undefined8 *)(unaff_x28 + 0xc1) = *(undefined8 *)(unaff_x25 + 0x71);
  *(undefined8 *)(unaff_x28 + 0xb9) = uVar18;
  uVar18 = *(undefined8 *)unaff_x25;
  uVar8 = *(undefined8 *)(unaff_x25 + 0x18);
  uVar19 = *(undefined8 *)(unaff_x25 + 0x10);
  *(undefined8 *)(unaff_x28 + 0x58) = *(undefined8 *)(unaff_x25 + 8);
  *(undefined8 *)(unaff_x28 + 0x50) = uVar18;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar8;
  *(undefined8 *)(unaff_x28 + 0x60) = uVar19;
  uVar18 = *(undefined8 *)(unaff_x25 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x25 + 0x38);
  uVar19 = *(undefined8 *)(unaff_x25 + 0x30);
  *(undefined8 *)(unaff_x28 + 0x78) = *(undefined8 *)(unaff_x25 + 0x28);
  *(undefined8 *)(unaff_x28 + 0x70) = uVar18;
  *(undefined8 *)(unaff_x28 + 0x88) = uVar8;
  *(undefined8 *)(unaff_x28 + 0x80) = uVar19;
  iVar5 = (int)puVar12 + -0xe0;
  FUN_1004dbae4();
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      puVar3 = puVar12 + -0x1c;
      FUN_100004520();
      uVar18 = *puVar3;
      uVar8 = puVar3[1];
      uVar19 = puVar3[2];
      uVar17 = puVar3[3];
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 0;
      uVar10 = 0x6567616d69;
      goto LAB_100573cc4;
    }
    puVar3 = puVar12 + -0x1c;
    FUN_100004520();
    uVar19 = *puVar3;
    uVar17 = puVar3[1];
    *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 0;
    Swift::KeyedEncodingContainer::_encode
              (0x74786574,&DAT_e400000000000000,(undefined8 *)((long)unaff_x19.unknown + 0xe0),
               unaff_x22);
    if (unaff_x24 == 0) {
      uVar13 = 1;
      goto LAB_100573d44;
    }
LAB_100573d04:
    pcVar15 = *(code **)(puVar12[-9] + 8);
  }
  else {
    if (iVar5 == 2) {
      puVar3 = puVar12 + -0x1c;
      FUN_100004520();
      uVar18 = *puVar3;
      uVar8 = puVar3[1];
      uVar19 = puVar3[2];
      uVar17 = puVar3[3];
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 0;
      uVar10 = 0x6f69647561;
LAB_100573cc4:
      Swift::KeyedEncodingContainer::_encode
                (uVar10,&DAT_e500000000000000,(undefined8 *)((long)unaff_x19.unknown + 0xe0),
                 unaff_x22);
      if (unaff_x24 != 0) goto LAB_100573d04;
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 2;
      Swift::KeyedEncodingContainer::_encode
                (uVar18,uVar8,(undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      uVar13 = 3;
LAB_100573d44:
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = uVar13;
      Swift::KeyedEncodingContainer::_encode
                (uVar19,uVar17,(undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
    }
    else if (iVar5 == 3) {
      puVar3 = puVar12 + -0x1c;
      FUN_100004520();
      uVar18 = puVar3[2];
      *(undefined8 *)((long)unaff_x19.unknown + 0xf8) = puVar3[3];
      *(undefined8 *)((long)unaff_x19.unknown + 0xf0) = uVar18;
      uVar18 = puVar3[4];
      *(undefined8 *)((long)unaff_x19.unknown + 0x108) = puVar3[5];
      *(undefined8 *)((long)unaff_x19.unknown + 0x100) = uVar18;
      uVar18 = puVar3[6];
      *(undefined8 *)(unaff_x28 + 0x38) = puVar3[7];
      *(undefined8 *)(unaff_x28 + 0x30) = uVar18;
      *(undefined8 *)(unaff_x28 + 0x40) = puVar3[8];
      uVar18 = *puVar3;
      *(undefined8 *)((long)unaff_x19.unknown + 0xe8) = puVar3[1];
      *(undefined8 *)((long)unaff_x19.unknown + 0xe0) = uVar18;
      uVar8 = puVar3[0xb];
      uVar19 = puVar3[10];
      uVar18 = puVar3[9];
      *(undefined8 *)((long)unaff_x19.unknown + 0x68) = puVar3[0xc];
      *(undefined8 *)((long)unaff_x19.unknown + 0x60) = uVar8;
      *(undefined8 *)((long)unaff_x19.unknown + 0x78) = uVar19;
      *(undefined8 *)((long)unaff_x19.unknown + 0x70) = uVar18;
      uVar18 = puVar3[0xd];
      uVar19 = puVar3[0xe];
      *(undefined1 *)((long)unaff_x19.unknown + 0x90) = 0;
      uVar8 = 0x656372756f736572;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,&DAT_e800000000000000,
                 (undefined8 *)((long)unaff_x19.unknown + 0x90),unaff_x22);
      if (unaff_x24 != 0) {
        (**(code **)(puVar12[-9] + 8))(unaff_x23,unaff_x22);
        goto LAB_100573d20;
      }
      uVar10 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar17 = *(undefined8 *)(unaff_x28 + 0x30);
      *(undefined8 *)((long)unaff_x19.unknown + 0xb8) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x108);
      *(undefined8 *)((long)unaff_x19.unknown + 0xb0) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x100);
      *(undefined8 *)((long)unaff_x19.unknown + 200) = uVar10;
      *(undefined8 *)((long)unaff_x19.unknown + 0xc0) = uVar17;
      *(undefined8 *)((long)unaff_x19.unknown + 0xd0) = *(undefined8 *)(unaff_x28 + 0x40);
      *(undefined8 *)((long)unaff_x19.unknown + 0x98) =
           *(undefined8 *)((long)unaff_x19.unknown + 0xe8);
      *(undefined8 *)((long)unaff_x19.unknown + 0x90) =
           *(undefined8 *)((long)unaff_x19.unknown + 0xe0);
      *(undefined8 *)((long)unaff_x19.unknown + 0xa8) =
           *(undefined8 *)((long)unaff_x19.unknown + 0xf8);
      *(undefined8 *)((long)unaff_x19.unknown + 0xa0) =
           *(undefined8 *)((long)unaff_x19.unknown + 0xf0);
      *(undefined1 *)((long)unaff_x19.unknown + 0x8f) = 4;
      FUN_10056386c();
      puVar3 = (undefined8 *)((long)unaff_x19.unknown + 0x90);
      Swift::KeyedEncodingContainer::_encode
                (puVar3,(long)unaff_x19.unknown + 0x8f,unaff_x22,&DAT_100ee1c80,uVar8);
      *(undefined8 *)((long)unaff_x19.unknown + 0x98) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x78);
      *(undefined8 *)((long)unaff_x19.unknown + 0x90) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x70);
      *(undefined8 *)((long)unaff_x19.unknown + 0xa8) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x68);
      *(undefined8 *)((long)unaff_x19.unknown + 0xa0) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x60);
      *(undefined8 *)((long)unaff_x19.unknown + 0xb0) = uVar18;
      *(undefined1 *)((long)unaff_x19.unknown + 0x8f) = 5;
      FUN_10056382c();
      puVar9 = (undefined8 *)((long)unaff_x19.unknown + 0x90);
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (puVar9,(long)unaff_x19.unknown + 0x8f,unaff_x22,&DAT_100ee1da8,puVar3);
      *(undefined8 *)((long)unaff_x19.unknown + 0x90) = uVar19;
      *(undefined1 *)((long)unaff_x19.unknown + 0x8f) = 6;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                ((undefined8 *)((long)unaff_x19.unknown + 0x90),(long)unaff_x19.unknown + 0x8f,
                 unaff_x22,&DAT_100edcda0,puVar9);
    }
    else {
      puVar3 = puVar12 + -0x1c;
      FUN_100004520();
      uVar18 = puVar3[1];
      *(undefined8 *)((long)unaff_x19.unknown + 0x70) = *puVar3;
      uVar19 = puVar3[3];
      *(undefined8 *)((long)unaff_x19.unknown + 0x58) = puVar3[2];
      *(undefined8 *)((long)unaff_x19.unknown + 0x60) = uVar18;
      uVar18 = puVar3[5];
      *(undefined8 *)((long)unaff_x19.unknown + 0x38) = puVar3[4];
      *(undefined8 *)((long)unaff_x19.unknown + 0x40) = uVar18;
      *(undefined8 *)((long)unaff_x19.unknown + 0x48) = uVar19;
      uVar19 = puVar3[7];
      *(undefined8 *)((long)unaff_x19.unknown + 0x50) = puVar3[6];
      uVar18 = puVar3[8];
      uVar8 = puVar3[9];
      uVar10 = puVar3[0xb];
      uVar17 = puVar3[10];
      uVar20 = puVar3[0xc];
      *(undefined8 *)((long)unaff_x19.unknown + 0x18) = puVar3[0xd];
      *(undefined8 *)((long)unaff_x19.unknown + 0x10) = uVar20;
      *(undefined8 *)((long)unaff_x19.unknown + 0x28) = uVar10;
      *(undefined8 *)((long)unaff_x19.unknown + 0x20) = uVar17;
      uVar17 = puVar3[0xe];
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 0;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,0xed00006b6e696c5f,
                 (undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      if (unaff_x24 != 0) goto LAB_100573d04;
      *(undefined8 *)unaff_x19.unknown = uVar8;
      *(undefined8 *)((long)unaff_x19.unknown + 8) = uVar19;
      uVar19 = *(undefined8 *)((long)unaff_x19.unknown + 0x50);
      uVar8 = *(undefined8 *)((long)unaff_x19.unknown + 0x58);
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 7;
      Swift::KeyedEncodingContainer::_encode
                (*(undefined8 *)((long)unaff_x19.unknown + 0x70),
                 *(undefined8 *)((long)unaff_x19.unknown + 0x60),
                 (undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 8;
      Swift::KeyedEncodingContainer::_encode
                (uVar8,*(undefined8 *)((long)unaff_x19.unknown + 0x48),
                 (undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 9;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (*(undefined8 *)((long)unaff_x19.unknown + 0x38),
                 *(undefined8 *)((long)unaff_x19.unknown + 0x40),
                 (undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 10;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (uVar19,*(undefined8 *)((long)unaff_x19.unknown + 8),
                 (undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      *(undefined1 *)((long)unaff_x19.unknown + 0xe0) = 3;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (uVar18,*(undefined8 *)unaff_x19.unknown,
                 (undefined8 *)((long)unaff_x19.unknown + 0xe0),unaff_x22);
      *(undefined8 *)((long)unaff_x19.unknown + 0xe8) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x28);
      *(undefined8 *)((long)unaff_x19.unknown + 0xe0) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x20);
      *(undefined8 *)((long)unaff_x19.unknown + 0xf8) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x18);
      *(undefined8 *)((long)unaff_x19.unknown + 0xf0) =
           *(undefined8 *)((long)unaff_x19.unknown + 0x10);
      *(undefined8 *)((long)unaff_x19.unknown + 0x100) = uVar17;
      *(undefined1 *)((long)unaff_x19.unknown + 0x90) = 5;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                ((undefined8 *)((long)unaff_x19.unknown + 0xe0),
                 (undefined8 *)((long)unaff_x19.unknown + 0x90),unaff_x22,&DAT_100ee1da8,uVar18);
    }
    pcVar15 = *(code **)(puVar12[-9] + 8);
  }
  (*pcVar15)(unaff_x23,unaff_x22);
LAB_100573d20:
  auVar37._8_8_ = unaff_x22;
  auVar37._0_8_ = unaff_x23;
  return auVar37;
}



/* Address: 0x10057364c | thunk_FUN_1005733f8 */

void thunk_FUN_1005733f8(void)

{
  FUN_1005733f8();
  return;
}



/* Address: 0x100573650 | switchD_10057357c::caseD_80 */

void switchD_10057357c::caseD_80(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005733f8();
  Swift::Hasher::_finalize(HVar1);
  return;
}


