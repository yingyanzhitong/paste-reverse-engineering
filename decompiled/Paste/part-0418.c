/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10052a144 | FUN_10052a144 */

void FUN_10052a144(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x10052a178 | FUN_10052a178 */

uint FUN_10052a178(uint param_1)

{
  return param_1 >> 8 & 0xff;
}



/* Address: 0x10052a180 | FUN_10052a180 */

uint FUN_10052a180(uint param_1,int param_2)

{
  return param_1 & 0xff | param_2 << 8;
}



/* Address: 0x10052a188 | thunk_FUN_10052a18c */

undefined8 thunk_FUN_10052a18c(uint param_1,uint param_2)

{
  if ((param_1 & 0xff) == 1) {
    if ((param_2 & 0xff) != 1) {
      return 0;
    }
  }
  else if ((param_2 & 0xff) == 1) {
    return 0;
  }
  if ((param_1 & 0xff00) == 0x100) {
    if ((param_2 & 0xff00) == 0x100) {
      return 1;
    }
  }
  else if ((param_2 & 0xff00) != 0x100) {
    return 1;
  }
  return 0;
}



/* Address: 0x10052a18c | FUN_10052a18c */

undefined8 FUN_10052a18c(uint param_1,uint param_2)

{
  if ((param_1 & 0xff) == 1) {
    if ((param_2 & 0xff) != 1) {
      return 0;
    }
  }
  else if ((param_2 & 0xff) == 1) {
    return 0;
  }
  if ((param_1 & 0xff00) == 0x100) {
    if ((param_2 & 0xff00) == 0x100) {
      return 1;
    }
  }
  else if ((param_2 & 0xff00) != 0x100) {
    return 1;
  }
  return 0;
}



/* Address: 0x10052a1e8 | thunk_FUN_10052a1ec */

void thunk_FUN_10052a1ec(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar2 = (uint)param_2.unknown;
  uVar3 = uVar2;
  Swift::Hasher::_combine((uVar2 & 0xff) != 1,param_2);
  HVar1.unknown._4_4_ = uVar4;
  HVar1.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine((uVar2 & 0xff00) != 0x100,HVar1);
  return;
}



/* Address: 0x10052a1ec | FUN_10052a1ec */

void FUN_10052a1ec(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar2 = (uint)param_2.unknown;
  uVar3 = uVar2;
  Swift::Hasher::_combine((uVar2 & 0xff) != 1,param_2);
  HVar1.unknown._4_4_ = uVar4;
  HVar1.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine((uVar2 & 0xff00) != 0x100,HVar1);
  return;
}



/* Address: 0x10052a22c | thunk_FUN_10052a230 */

void thunk_FUN_10052a230(uint param_1,Hasher param_2)

{
  bool bVar1;
  Hasher HVar2;
  
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((param_1 & 0xff) != 1,param_2);
  bVar1 = (param_1 & 0xff00) != 0x100;
  HVar2.unknown = (undefined *)(ulong)bVar1;
  Swift::Hasher::_combine(bVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10052a230 | FUN_10052a230 */

void FUN_10052a230(uint param_1,Hasher param_2)

{
  bool bVar1;
  Hasher HVar2;
  
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((param_1 & 0xff) != 1,param_2);
  bVar1 = (param_1 & 0xff00) != 0x100;
  HVar2.unknown = (undefined *)(ulong)bVar1;
  Swift::Hasher::_combine(bVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10052a290 | thunk_FUN_10052a294 */

void thunk_FUN_10052a294(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  
  cVar1 = *unaff_x20;
  cVar2 = unaff_x20[1];
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(cVar1 != '\x01',param_2);
  HVar3.unknown = (undefined *)(ulong)(cVar2 != '\x01');
  Swift::Hasher::_combine(cVar2 != '\x01',param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10052a294 | FUN_10052a294 */

void FUN_10052a294(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  
  cVar1 = *unaff_x20;
  cVar2 = unaff_x20[1];
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(cVar1 != '\x01',param_2);
  HVar3.unknown = (undefined *)(ulong)(cVar2 != '\x01');
  Swift::Hasher::_combine(cVar2 != '\x01',param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10052a2f8 | thunk_FUN_10052a2fc */

void thunk_FUN_10052a2fc(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  char *unaff_x20;
  
  cVar1 = unaff_x20[1];
  Swift::Hasher::_combine(*unaff_x20 != '\x01',param_2);
  Swift::Hasher::_combine(cVar1 != '\x01',param_2);
  return;
}



/* Address: 0x10052a2fc | FUN_10052a2fc */

void FUN_10052a2fc(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  char *unaff_x20;
  
  cVar1 = unaff_x20[1];
  Swift::Hasher::_combine(*unaff_x20 != '\x01',param_2);
  Swift::Hasher::_combine(cVar1 != '\x01',param_2);
  return;
}



/* Address: 0x10052a344 | thunk_FUN_10052a348 */

void thunk_FUN_10052a348(__int64 param_1,Hasher param_2)

{
  char cVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  
  cVar1 = *unaff_x20;
  cVar2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(cVar1 != '\x01',param_2);
  HVar3.unknown = (undefined *)(ulong)(cVar2 != '\x01');
  Swift::Hasher::_combine(cVar2 != '\x01',param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10052a348 | FUN_10052a348 */

void FUN_10052a348(__int64 param_1,Hasher param_2)

{
  char cVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  
  cVar1 = *unaff_x20;
  cVar2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(cVar1 != '\x01',param_2);
  HVar3.unknown = (undefined *)(ulong)(cVar2 != '\x01');
  Swift::Hasher::_combine(cVar2 != '\x01',param_2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10052a3a8 | thunk_FUN_10052a3ac */

undefined8 thunk_FUN_10052a3ac(char *param_1,char *param_2)

{
  if (*param_1 == '\x01') {
    if (*param_2 != '\x01') {
      return 0;
    }
  }
  else if (*param_2 == '\x01') {
    return 0;
  }
  if (param_1[1] == '\x01') {
    if (param_2[1] != '\x01') {
      return 0;
    }
  }
  else if (param_2[1] == '\x01') {
    return 0;
  }
  return 1;
}



/* Address: 0x10052a3ac | FUN_10052a3ac */

undefined8 FUN_10052a3ac(char *param_1,char *param_2)

{
  if (*param_1 == '\x01') {
    if (*param_2 != '\x01') {
      return 0;
    }
  }
  else if (*param_2 == '\x01') {
    return 0;
  }
  if (param_1[1] == '\x01') {
    if (param_2[1] != '\x01') {
      return 0;
    }
  }
  else if (param_2[1] == '\x01') {
    return 0;
  }
  return 1;
}



/* Address: 0x10052a40c | FUN_10052a40c */

uint FUN_10052a40c(uint param_1)

{
  return param_1 & 0xffffff;
}



/* Address: 0x10052a414 | FUN_10052a414 */

void FUN_10052a414(undefined4 param_1)

{
  undefined2 *unaff_x20;
  
  *unaff_x20 = (short)param_1;
  *(char *)(unaff_x20 + 1) = (char)((uint)param_1 >> 0x10);
  return;
}



/* Address: 0x10052a424 | FUN_10052a424 */

ulong FUN_10052a424(ulong param_1)

{
  return param_1 >> 0x18 & 0xffffff;
}



/* Address: 0x10052a42c | FUN_10052a42c */

void FUN_10052a42c(undefined4 param_1)

{
  long unaff_x20;
  
  *(short *)(unaff_x20 + 3) = (short)param_1;
  *(char *)(unaff_x20 + 5) = (char)((uint)param_1 >> 0x10);
  return;
}



/* Address: 0x10052a43c | FUN_10052a43c */

undefined1  [16] FUN_10052a43c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 3;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10052a44c | FUN_10052a44c */

undefined1  [16] FUN_10052a44c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xec0000006c61746e;
  uVar4 = 0x656d697265707865;
  if (bVar3 != 2) {
    puVar5 = &DAT_e500000000000000;
    uVar4 = 0x73746f6f72;
  }
  uVar1 = 0x676e696c706d6173;
  if (bVar3 != 0) {
    uVar1 = 0x7461746963696c65;
  }
  puVar2 = &DAT_e800000000000000;
  if (bVar3 != 0) {
    puVar2 = &DAT_eb000000006e6f69;
  }
  if (bVar3 < 2) {
    puVar5 = puVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x10052a4d4 | FUN_10052a4d4 */

void FUN_10052a4d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100544e20();
  *param_1 = param_2;
  return;
}



/* Address: 0x10052a4f8 | FUN_10052a4f8 */

String FUN_10052a4f8(void)

{
  String SVar1;
  
  FUN_100544d20();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10052a520 | FUN_10052a520 */

String FUN_10052a520(void)

{
  String SVar1;
  
  FUN_100544d20();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10052a548 | FUN_10052a548 */

void FUN_10052a548(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  FUN_100544280(param_1 & 0xffffffffffff,param_2,param_3,param_4 & 0xffffffffffff);
  return;
}



/* Address: 0x10052a554 | FUN_10052a554 */

void FUN_10052a554(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedEncodingContainer<undefined> KVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_51;
  
  puVar2 = &DAT_100fce890;
  local_70 = param_3;
  FUN_1000f7830(&DAT_100fce890,&DAT_100c557c8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100544d20();
  KVar3 = Swift::Encoder::_container();
  local_68._0_3_ = (undefined3)param_2;
  local_51 = 0;
  FUN_100544d60();
  puVar4 = &local_68;
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (puVar4,&local_51,puVar2,&DAT_100edd6b8,KVar3.unknown);
  uVar1 = local_70;
  if (unaff_x21 == 0) {
    local_68._0_3_ = (undefined3)((ulong)param_2 >> 0x18);
    local_51 = 1;
    FUN_100544da0();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_68,&local_51,puVar2,&DAT_100edd778,puVar4);
    local_68 = uVar1;
    local_51 = 2;
    puVar5 = &DAT_100fcc360;
    FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
    puVar4 = &DAT_100fcc368;
    FUN_10054d580(&DAT_100fcc368,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    puVar6 = &local_68;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar6,&local_51,puVar2,puVar5,puVar4);
    local_68 = CONCAT71(local_68._1_7_,param_4);
    local_51 = 3;
    FUN_100544de0();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_68,&local_51,puVar2,&DAT_100edd638,puVar6);
  }
  (**(code **)(lVar7 + 8))((long)&local_70 - extraout_x8,puVar2);
  return;
}



/* Address: 0x10052a764 | FUN_10052a764 */

void FUN_10052a764(undefined8 param_1,Hasher param_2,undefined *param_3,byte param_4)

{
  bool bVar1;
  Hasher HVar2;
  
  bVar1 = ((ulong)param_2.unknown & 0xff0000) != 0x10000;
  HVar2.unknown = param_2.unknown;
  if (bVar1) {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(((ulong)param_2.unknown & 0xff) != 1,HVar2);
  }
  Swift::Hasher::_combine(bVar1 && ((ulong)param_2.unknown & 0xff00) != 0x100,HVar2);
  if (((ulong)param_2.unknown & 0xff0000000000) == 0x10000000000) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    Swift::Hasher::_combine(((ulong)param_2.unknown & 0xff000000) != 0x1000000,HVar2);
    Swift::Hasher::_combine(((ulong)param_2.unknown & 0xff00000000) != 0x100000000,HVar2);
  }
  if (param_3 == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004df90c(param_1);
    HVar2.unknown = param_3;
  }
  if ((param_4 == 3) || (Swift::Hasher::_combine(1,HVar2), param_4 == 2)) {
    param_4 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    param_4 = param_4 & 1;
  }
  Swift::Hasher::_combine(param_4,HVar2);
  return;
}



/* Address: 0x10052a874 | FUN_10052a874 */

void FUN_10052a874(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_10052a764(HVar1.unknown,param_1 & 0xffffffffffff,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10052a8d0 | FUN_10052a8d0 */

undefined1  [16] FUN_10052a8d0(ulong param_1,ulong param_2)

{
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_100544f84();
  if (unaff_x21 != 0) {
    param_2 = param_1 & 0xffffffffffff;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1 & 0xffffffffffff;
  return auVar1;
}



/* Address: 0x10052a8f4 | FUN_10052a8f4 */

void FUN_10052a8f4(void)

{
  uint6 uVar1;
  uint6 uVar2;
  Hasher HVar3;
  undefined8 uVar4;
  uint6 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + 1);
  uVar2 = unaff_x20[2];
  Swift::Hasher::init(0);
  HVar3.unknown = auStack_88;
  FUN_10052a764(HVar3.unknown,(ulong)uVar1,uVar4,(char)uVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10052a96c | FUN_10052a96c */

void FUN_10052a96c(undefined8 param_1)

{
  uint6 *unaff_x20;
  
  FUN_10052a764(param_1,(ulong)*unaff_x20,*(undefined8 *)(unaff_x20 + 1),(char)unaff_x20[2]);
  return;
}



/* Address: 0x10052a994 | FUN_10052a994 */

void FUN_10052a994(__int64 param_1)

{
  uint6 uVar1;
  uint6 uVar2;
  Hasher HVar3;
  undefined8 uVar4;
  uint6 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = *(undefined8 *)(unaff_x20 + 1);
  uVar2 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_88;
  FUN_10052a764(HVar3.unknown,(ulong)uVar1,uVar4,(char)uVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10052aa08 | FUN_10052aa08 */

void FUN_10052aa08(undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  FUN_100544f84();
  if (unaff_x21 == 0) {
    *param_1 = (short)uVar1;
    *(char *)(param_1 + 1) = (char)((uint)uVar1 >> 0x10);
    *(short *)((long)param_1 + 3) = (short)(CONCAT44(uVar2,uVar1) >> 0x18);
    *(char *)((long)param_1 + 5) = (char)((uint)uVar2 >> 8);
    *(undefined8 *)(param_1 + 4) = param_3;
    *(undefined1 *)(param_1 + 8) = param_4;
  }
  return;
}



/* Address: 0x10052aa50 | FUN_10052aa50 */

void FUN_10052aa50(undefined8 param_1)

{
  uint6 *unaff_x20;
  
  FUN_10052a554(param_1,(ulong)*unaff_x20,*(undefined8 *)(unaff_x20 + 1),(char)unaff_x20[2]);
  return;
}



/* Address: 0x10052aa88 | FUN_10052aa88 */

void FUN_10052aa88(uint6 *param_1,uint6 *param_2)

{
  FUN_100544280((ulong)*param_1,*(undefined8 *)(param_1 + 1),(char)param_1[2],(ulong)*param_2,
                *(undefined8 *)(param_2 + 1),(char)param_2[2]);
  return;
}



/* Address: 0x10052aadc | FUN_10052aadc */

undefined1  [16] FUN_10052aadc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x80);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x88));
  return auVar1;
}



/* Address: 0x10052ab08 | FUN_10052ab08 */

undefined1  [16] FUN_10052ab08(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x90);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x98));
  return auVar1;
}



/* Address: 0x10052ab34 | FUN_10052ab34 */

undefined1  [16] FUN_10052ab34(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xa0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0xa8));
  return auVar1;
}



/* Address: 0x10052ab60 | FUN_10052ab60 */

ulong FUN_10052ab60(void)

{
  uint6 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0xd8,auStack_48,0,0);
  uVar1 = *(uint6 *)(unaff_x20 + 0xd8);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0xe0));
  return (ulong)uVar1;
}



/* Address: 0x10052abd4 | FUN_10052abd4 */

void FUN_10052abd4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0xd8,auStack_68,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
  *(short *)(unaff_x20 + 0xd8) = (short)param_1;
  *(char *)(unaff_x20 + 0xda) = (char)((ulong)param_1 >> 0x10);
  *(short *)(unaff_x20 + 0xdb) = (short)((ulong)param_1 >> 0x18);
  *(char *)(unaff_x20 + 0xdd) = (char)((ulong)param_1 >> 0x28);
  *(undefined8 *)(unaff_x20 + 0xe0) = param_2;
  *(undefined1 *)(unaff_x20 + 0xe8) = param_3;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10052ac58 | FUN_10052ac58 */

undefined1  [16] FUN_10052ac58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xd8,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xd8;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10052ac88 | FUN_10052ac88 */

undefined1 FUN_10052ac88(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0xe9,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0xe9);
}



/* Address: 0x10052acb8 | FUN_10052acb8 */

void FUN_10052acb8(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xe9,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0xe9) = param_1;
  return;
}



/* Address: 0x10052acf4 | FUN_10052acf4 */

undefined1  [16] FUN_10052acf4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xe9,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xe9;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10052ad24 | FUN_10052ad24 */

long FUN_10052ad24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  JSONEncoder *pJVar3;
  JSONDecoder *pJVar4;
  long unaff_x20;
  undefined1 auStack_170 [88];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined2 *)(unaff_x20 + 0xee) = 0;
  *(undefined4 *)(unaff_x20 + 0xea) = 0x40000;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a6ff4();
  *(undefined **)(unaff_x20 + 0x110) = puVar1;
  puVar1 = puVar2;
  FUN_1004a7008();
  *(undefined **)(unaff_x20 + 0x118) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  FUN_1004a7104();
  *(undefined **)(unaff_x20 + 0x128) = puVar2;
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  *(JSONEncoder **)(unaff_x20 + 0x130) = pJVar3;
  pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
  pJVar4 = Foundation::JSONDecoder::init(pJVar4);
  *(JSONDecoder **)(unaff_x20 + 0x138) = pJVar4;
  local_d8 = param_9;
  uStack_d0 = param_10;
  local_c8 = param_11;
  local_80 = param_9;
  uStack_78 = param_10;
  local_70 = param_11;
  local_118 = param_1;
  uStack_110 = param_2;
  local_108 = param_5;
  uStack_100 = param_6;
  local_f8 = param_3;
  uStack_f0 = param_4;
  local_e8 = param_7;
  uStack_e0 = param_8;
  local_c0 = param_1;
  uStack_b8 = param_2;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_7;
  uStack_88 = param_8;
  FUN_1004ddb74(&local_118,auStack_170);
  FUN_1004e00e8(&local_c0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0xa0) = local_f8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0xb0) = local_e8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0xc0) = local_d8;
  *(undefined8 *)(unaff_x20 + 0xd0) = local_c8;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x80) = local_118;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x90) = local_108;
  *(short *)(unaff_x20 + 0xd8) = (short)param_12;
  *(char *)(unaff_x20 + 0xda) = (char)((ulong)param_12 >> 0x10);
  *(short *)(unaff_x20 + 0xdb) = (short)((ulong)param_12 >> 0x18);
  *(char *)(unaff_x20 + 0xdd) = (char)((ulong)param_12 >> 0x28);
  *(undefined8 *)(unaff_x20 + 0xe0) = param_13;
  *(undefined1 *)(unaff_x20 + 0xe8) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + 0xe9) = param_14._1_1_;
  return unaff_x20;
}



/* Address: 0x10052aef0 | FUN_10052aef0 */

void FUN_10052aef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined4 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  JSONEncoder *pJVar3;
  JSONDecoder *pJVar4;
  long unaff_x20;
  undefined1 auStack_170 [88];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined2 *)(unaff_x20 + 0xee) = 0;
  *(undefined4 *)(unaff_x20 + 0xea) = 0x40000;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a6ff4();
  *(undefined **)(unaff_x20 + 0x110) = puVar1;
  puVar1 = puVar2;
  FUN_1004a7008();
  *(undefined **)(unaff_x20 + 0x118) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  FUN_1004a7104();
  *(undefined **)(unaff_x20 + 0x128) = puVar2;
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  *(JSONEncoder **)(unaff_x20 + 0x130) = pJVar3;
  pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
  pJVar4 = Foundation::JSONDecoder::init(pJVar4);
  *(JSONDecoder **)(unaff_x20 + 0x138) = pJVar4;
  local_d8 = param_9;
  uStack_d0 = param_10;
  local_c8 = param_11;
  local_80 = param_9;
  uStack_78 = param_10;
  local_70 = param_11;
  local_118 = param_1;
  uStack_110 = param_2;
  local_108 = param_5;
  uStack_100 = param_6;
  local_f8 = param_3;
  uStack_f0 = param_4;
  local_e8 = param_7;
  uStack_e0 = param_8;
  local_c0 = param_1;
  uStack_b8 = param_2;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_7;
  uStack_88 = param_8;
  FUN_1004ddb74(&local_118,auStack_170);
  FUN_1004e00e8(&local_c0);
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0xa0) = local_f8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0xb0) = local_e8;
  *(undefined8 *)(unaff_x20 + 200) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0xc0) = local_d8;
  *(undefined8 *)(unaff_x20 + 0xd0) = local_c8;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x80) = local_118;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x90) = local_108;
  *(short *)(unaff_x20 + 0xd8) = (short)param_12;
  *(char *)(unaff_x20 + 0xda) = (char)((ulong)param_12 >> 0x10);
  *(short *)(unaff_x20 + 0xdb) = (short)((ulong)param_12 >> 0x18);
  *(char *)(unaff_x20 + 0xdd) = (char)((ulong)param_12 >> 0x28);
  *(undefined8 *)(unaff_x20 + 0xe0) = param_13;
  *(undefined1 *)(unaff_x20 + 0xe8) = (undefined1)param_14;
  *(undefined1 *)(unaff_x20 + 0xe9) = param_14._1_1_;
  return;
}



/* Address: 0x10052b0b0 | FUN_10052b0b0 */

void FUN_10052b0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2d8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_1;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2e0) = uVar2;
  _swift_task_switch(FUN_10052b120);
  return;
}



/* Address: 0x10052b120 | FUN_10052b120 */

void FUN_10052b120(void)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x2d8);
  uVar5 = *(undefined8 *)(lVar3 + 0x70);
  lVar6 = *(long *)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  *(undefined8 *)(lVar3 + 0x78) = *(undefined8 *)(unaff_x22 + 0x2d0);
  *(undefined8 *)(lVar3 + 0x70) = uVar7;
  _swift_unknownObjectRetain(uVar7);
  _swift_unknownObjectRelease(uVar5);
  _swift_getObjectType(uVar7);
  piVar4 = *(int **)(lVar6 + 0x18);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2e8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10052b1c0;
                    /* WARNING: Could not recover jumptable at 0x00010052b1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(uVar7,*(undefined8 *)(unaff_x22 + 0x2d0));
  return;
}



/* Address: 0x10052b1c0 | FUN_10052b1c0 */

void FUN_10052b1c0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x2e8));
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x2e0));
                    /* WARNING: Could not recover jumptable at 0x00010052b204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  _swift_task_switch(FUN_10052b228,*(undefined8 *)(lVar1 + 0x2d8),0);
  return;
}



/* Address: 0x10052b228 | FUN_10052b228 */

void FUN_10052b228(void)

{
  UnownedSerialExecutor UVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x2d8);
  lVar6 = *(long *)(lVar8 + 0x70);
  *(long *)(unaff_x22 + 0x2f0) = lVar6;
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar8 + 0x78);
    *(long *)(unaff_x22 + 0x2f8) = lVar9;
    lVar8 = lVar6;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x300) = lVar8;
    *(undefined8 *)(unaff_x22 + 0x308) = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar6);
    UVar1 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10052b3e4,UVar1.unknown,uVar10);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2e0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar7,1,1,TVar2.unknown);
  puVar3 = &DAT_100fce8b8;
  FUN_1003b6598();
  puVar4 = &DAT_100edd290;
  _swift_allocObject(&DAT_100edd290,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = lVar8;
  _swift_retain_n(lVar8,2);
  uVar10 = 0;
  FUN_1004e9c98(0,0,uVar7,&DAT_100c557e0,puVar4);
  uVar7 = *(undefined8 *)(lVar8 + 0x120);
  *(undefined8 *)(lVar8 + 0x120) = uVar10;
  _swift_release(uVar7);
  puVar3 = &DAT_100edd2b8;
  _swift_allocObject(&DAT_100edd2b8,0x18,7);
  *(undefined **)(unaff_x22 + 0x318) = puVar3;
  _swift_weakInit(puVar3 + 0x10,lVar8);
  plVar5 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 800) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10052b7e4;
  FUN_100545310(&DAT_100c557f0,puVar3);
  return;
}



/* Address: 0x10052b3e4 | FUN_10052b3e4 */

void FUN_10052b3e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d8);
  (**(code **)(unaff_x22 + 0x308))(uVar1,*(undefined8 *)(unaff_x22 + 0x2f8));
  *(undefined8 *)(unaff_x22 + 0x310) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10052b43c,uVar2,0);
  return;
}



/* Address: 0x10052b43c | FUN_10052b43c */

void FUN_10052b43c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  TaskPriority TVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  lVar12 = *(long *)(unaff_x22 + 0x310);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0x2a8);
  FUN_100076688(lVar12 + 0x20,unaff_x22 + 600);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar11 = *(long *)(unaff_x22 + 0x278);
  FUN_100004640(unaff_x22 + 600,uVar9);
  (**(code **)(lVar11 + 0x70))(uVar9,lVar11);
  FUN_100004594(unaff_x22 + 600);
  if (((uint)uVar9 & 0xff) < 2) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x310);
    lVar13 = *(long *)(unaff_x22 + 0x2d8);
    FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x280);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x298);
    lVar11 = *(long *)(unaff_x22 + 0x2a0);
    FUN_100004640();
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar6 = (char *)(unaff_x22 + 0x10);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x20) = 0x656d616e;
    *(undefined8 *)(puVar1 + 0x18) = 4;
    *(undefined8 *)(puVar1 + 0x10) = 2;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e400000000000000;
    SVar14.bridgeObject = pcVar7;
    SVar14.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar14);
    pcVar6 = *(char **)(lVar13 + 0x88);
    SVar16.bridgeObject = pvVar8;
    SVar16.str = pcVar7;
    Swift::String::write(*(String *)(lVar13 + 0x80),SVar16);
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    *(undefined8 *)(puVar1 + 0x60) = 0x6e6f6973726576;
    *(undefined1 **)(puVar1 + 0x68) = &DAT_e700000000000000;
    SVar15.bridgeObject = pcVar7;
    SVar15.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar15);
    SVar17.bridgeObject = pvVar8;
    SVar17.str = pcVar7;
    Swift::String::write(*(String *)(lVar13 + 0xa0),SVar17);
    *(undefined8 *)(puVar1 + 0x70) = 0;
    *(undefined8 *)(puVar1 + 0x78) = 0xe000000000000000;
    puVar1[0x98] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    puVar3 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar1 + 0x20,2,puVar3);
    *(undefined1 *)(unaff_x22 + 0x138) = 1;
    *(undefined8 *)(unaff_x22 + 0x140) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x148) = 0x8000000100dad1e0;
    *(undefined8 *)(unaff_x22 + 0x150) = 0;
    *(undefined **)(unaff_x22 + 0x158) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0;
    *(undefined8 *)(unaff_x22 + 0x170) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x178) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x180) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 400) = 0xd3;
    *(undefined1 *)(unaff_x22 + 0x198) = 1;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0x8000000100dad1e0;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
    *(undefined **)(unaff_x22 + 0x1b8) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x8000000100dad1c0;
    *(undefined8 *)(unaff_x22 + 0x1f0) = 0xd3;
    FUN_1004eaa00(unaff_x22 + 0x138,unaff_x22 + 0x1f8);
    FUN_1004eaa3c(unaff_x22 + 0x198);
    (**(code **)(lVar11 + 0x28))(unaff_x22 + 0x138,uVar9,lVar11);
    _swift_release(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x138);
    FUN_100004594(unaff_x22 + 0x280);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x310));
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2e0);
  lVar11 = *(long *)(unaff_x22 + 0x2d8);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(uVar10,1,1,TVar4.unknown);
  puVar1 = &DAT_100fce8b8;
  FUN_1003b6598();
  puVar3 = &DAT_100edd290;
  _swift_allocObject(&DAT_100edd290,0x28,7);
  *(long *)(puVar3 + 0x10) = lVar11;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(long *)(puVar3 + 0x20) = lVar11;
  _swift_retain_n(lVar11,2);
  uVar9 = 0;
  FUN_1004e9c98(0,0,uVar10,&DAT_100c557e0,puVar3);
  uVar10 = *(undefined8 *)(lVar11 + 0x120);
  *(undefined8 *)(lVar11 + 0x120) = uVar9;
  _swift_release(uVar10);
  puVar1 = &DAT_100edd2b8;
  _swift_allocObject(&DAT_100edd2b8,0x18,7);
  *(undefined **)(unaff_x22 + 0x318) = puVar1;
  _swift_weakInit(puVar1 + 0x10,lVar11);
  plVar5 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 800) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10052b7e4;
  FUN_100545310(&DAT_100c557f0,puVar1);
  return;
}



/* Address: 0x10052b7e4 | FUN_10052b7e4 */

void FUN_10052b7e4(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x318);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 800));
  _swift_release(uVar3);
  plVar1 = (long *)0x330;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x328) = plVar1;
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_10052b858;
  FUN_100539828(lVar2 + 0xb0);
  return;
}



/* Address: 0x10052b858 | FUN_10052b858 */

void FUN_10052b858(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x328));
  uVar1 = *(undefined8 *)(lVar3 + 0x2e0);
  if (unaff_x20 == 0) {
    puVar2 = *(undefined8 **)(lVar3 + 0x2c0);
    uVar5 = *(undefined8 *)(lVar3 + 0xb0);
    puVar2[1] = *(undefined8 *)(lVar3 + 0xb8);
    *puVar2 = uVar5;
    uVar6 = *(undefined8 *)(lVar3 + 200);
    uVar5 = *(undefined8 *)(lVar3 + 0xc0);
    uVar8 = *(undefined8 *)(lVar3 + 0xd8);
    uVar7 = *(undefined8 *)(lVar3 + 0xd0);
    uVar9 = *(undefined8 *)(lVar3 + 0xe0);
    uVar11 = *(undefined8 *)(lVar3 + 0xf8);
    uVar10 = *(undefined8 *)(lVar3 + 0xf0);
    puVar2[7] = *(undefined8 *)(lVar3 + 0xe8);
    puVar2[6] = uVar9;
    puVar2[9] = uVar11;
    puVar2[8] = uVar10;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    puVar2[5] = uVar8;
    puVar2[4] = uVar7;
    uVar6 = *(undefined8 *)(lVar3 + 0x108);
    uVar5 = *(undefined8 *)(lVar3 + 0x100);
    uVar8 = *(undefined8 *)(lVar3 + 0x118);
    uVar7 = *(undefined8 *)(lVar3 + 0x110);
    uVar10 = *(undefined8 *)(lVar3 + 0x128);
    uVar9 = *(undefined8 *)(lVar3 + 0x120);
    puVar2[0x10] = *(undefined8 *)(lVar3 + 0x130);
    puVar2[0xd] = uVar8;
    puVar2[0xc] = uVar7;
    puVar2[0xf] = uVar10;
    puVar2[0xe] = uVar9;
    puVar2[0xb] = uVar6;
    puVar2[10] = uVar5;
  }
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010052b8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x10052b8d4 | FUN_10052b8d4 */

void FUN_10052b8d4(void)

{
  ContinuousClock CVar1;
  ulong uVar2;
  Encoding EVar3;
  undefined *puVar4;
  undefined8 in_x3;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x6b0) = in_x3;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x6b8) = CVar1.unknown;
  lVar5 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x6c0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x6c8) = uVar2;
  EVar3 = Encoding::_typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(EVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x6d0) = uVar2;
  puVar4 = &DAT_100fcf0f0;
  FUN_1000f7830(&DAT_100fcf0f0,&DAT_100c57028);
  *(undefined **)(unaff_x22 + 0x6d8) = puVar4;
  lVar5 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x6e0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x6e8) = uVar2;
  puVar4 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  *(undefined **)(unaff_x22 + 0x6f0) = puVar4;
  lVar5 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x6f8) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x700) = uVar2;
  _swift_task_switch(FUN_10052b9c0,in_x3,0);
  return;
}



/* Address: 0x10052b9c0 | FUN_10052b9c0 */

void FUN_10052b9c0(void)

{
  bool bVar1;
  Task TVar2;
  long lVar3;
  UnownedSerialExecutor UVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  puVar7 = *(undefined **)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
  *(undefined **)(unaff_x22 + 0x708) = puVar7;
  if (puVar7 == (undefined *)0x0) {
LAB_10052bac0:
    uVar8 = *(undefined8 *)(unaff_x22 + 0x6e8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x6d0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x6c8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010052bb00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
  *(long *)(unaff_x22 + 0x710) = lVar6;
  TVar2.unknown = puVar7;
  _swift_unknownObjectRetain();
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  if (bVar1) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
    *(long *)(unaff_x22 + 0x7b8) = lVar6;
    if (lVar6 == 0) {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x708));
      goto LAB_10052bac0;
    }
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7c0) = lVar9;
    lVar3 = lVar6;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7c8) = lVar3;
    *(undefined8 *)(unaff_x22 + 2000) = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar6);
    UVar4 = Swift::Actor::get_unownedExecutor();
    pcVar5 = FUN_10052c8bc;
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x718) = *(undefined8 *)(*(long *)(unaff_x22 + 0x6b0) + 0x138);
    _swift_getObjectType();
    *(undefined **)(unaff_x22 + 0x720) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x728) = *(undefined8 *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 8);
    *(undefined8 *)(unaff_x22 + 0x730) = uVar10;
    UVar4 = Swift::Actor::get_unownedExecutor();
    pcVar5 = FUN_10052bb04;
  }
  _swift_task_switch(pcVar5,UVar4.unknown,uVar10);
  return;
}



/* Address: 0x10052bb04 | FUN_10052bb04 */

void FUN_10052bb04(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x6b0);
  (**(code **)(unaff_x22 + 0x728))
            (*(undefined8 *)(unaff_x22 + 0x700),*(undefined8 *)(unaff_x22 + 0x720),
             *(undefined8 *)(unaff_x22 + 0x710));
  _swift_task_switch(FUN_10052bb54,uVar1,0);
  return;
}



/* Address: 0x10052bb54 | FUN_10052bb54 */

void FUN_10052bb54(void)

{
  long *plVar1;
  long unaff_x22;
  
  Swift::AsyncThrowingStream::_makeAsyncIterator
            ((AsyncThrowingStream)*(undefined **)(unaff_x22 + 0x6f0));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x738) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10052bbbc;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x680));
  return;
}



/* Address: 0x10052bbbc | FUN_10052bbbc */

void FUN_10052bbbc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x738));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x740) = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0x6b0);
    pcVar1 = FUN_10052bc20;
  }
  else {
    *(long *)(lVar3 + 0x810) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x6b0);
    pcVar1 = FUN_10052d170;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10052bc20 | FUN_10052bc20 */

/* WARNING: Removing unreachable block (ram,0x00010052be6c) */
/* WARNING: Removing unreachable block (ram,0x00010052c120) */
/* WARNING: Removing unreachable block (ram,0x00010052bdfc) */
/* WARNING: Removing unreachable block (ram,0x00010052c0c0) */
/* WARNING: Removing unreachable block (ram,0x00010052bedc) */
/* WARNING: Removing unreachable block (ram,0x00010052bf0c) */
/* WARNING: Removing unreachable block (ram,0x00010052c2c8) */
/* WARNING: Removing unreachable block (ram,0x00010052bf58) */
/* WARNING: Removing unreachable block (ram,0x00010052c180) */
/* WARNING: Removing unreachable block (ram,0x00010052c2cc) */
/* WARNING: Removing unreachable block (ram,0x00010052bf6c) */
/* WARNING: Removing unreachable block (ram,0x00010052bf9c) */
/* WARNING: Removing unreachable block (ram,0x00010052c184) */
/* WARNING: Removing unreachable block (ram,0x00010052c1a8) */
/* WARNING: Removing unreachable block (ram,0x00010052c2e0) */
/* WARNING: Removing unreachable block (ram,0x00010052c1fc) */
/* WARNING: Removing unreachable block (ram,0x00010052c190) */
/* WARNING: Removing unreachable block (ram,0x00010052c200) */
/* WARNING: Removing unreachable block (ram,0x00010052c264) */
/* WARNING: Removing unreachable block (ram,0x00010052c214) */

void FUN_10052bc20(Task param_1)

{
  bool bVar1;
  long lVar2;
  UnownedSerialExecutor UVar3;
  code *pcVar4;
  Data DVar5;
  long *plVar6;
  undefined8 uVar7;
  Task TVar8;
  JSONDecoder *pJVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  ulong uVar14;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x680);
  *(undefined8 *)(unaff_x22 + 0x748) = uVar7;
  uVar14 = *(ulong *)(unaff_x22 + 0x688);
  *(ulong *)(unaff_x22 + 0x750) = uVar14;
  if (uVar14 >> 0x3c < 0xf) {
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
    if (!bVar1) {
      lVar11 = *(long *)(unaff_x22 + 0x740);
      pJVar9 = *(JSONDecoder **)(unaff_x22 + 0x718);
      DVar5.unknown = &DAT_100fcf0f8;
      FUN_1000f7830(&DAT_100fcf0f8,&DAT_100c57030);
      FUN_10054d434();
      Foundation::JSONDecoder::_decode(pJVar9,DVar5);
      if (lVar11 != 0) {
        pJVar9 = *(JSONDecoder **)(unaff_x22 + 0x718);
        _swift_errorRelease(lVar11);
        DVar5.unknown = &DAT_100fcb3e0;
        FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
        FUN_100134584(&DAT_100fcf108,&DAT_100fcb3e0,&DAT_100c50230,
                      &TargetProtocolConformanceDescriptor_100c52c80);
        Foundation::JSONDecoder::_decode(pJVar9,DVar5);
        *(undefined8 *)(unaff_x22 + 0x418) = *(undefined8 *)(unaff_x22 + 0x458);
        *(undefined8 *)(unaff_x22 + 0x410) = *(undefined8 *)(unaff_x22 + 0x450);
        *(undefined8 *)(unaff_x22 + 0x428) = *(undefined8 *)(unaff_x22 + 0x468);
        *(undefined8 *)(unaff_x22 + 0x420) = *(undefined8 *)(unaff_x22 + 0x460);
        *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x478);
        *(undefined8 *)(unaff_x22 + 0x430) = *(undefined8 *)(unaff_x22 + 0x470);
        *(undefined8 *)(unaff_x22 + 0x442) = *(undefined8 *)(unaff_x22 + 0x482);
        *(undefined8 *)(unaff_x22 + 0x43a) = *(undefined8 *)(unaff_x22 + 0x47a);
        plVar6 = (long *)0x490;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x768) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_10052c3a0;
        FUN_10053d220((undefined8 *)(unaff_x22 + 0x410));
        return;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x698);
      *(undefined8 *)(unaff_x22 + 0x758) = uVar7;
      plVar6 = (long *)0x2c0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x760) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10052c2e4;
      FUN_100540a20(uVar7);
      return;
    }
    FUN_10003bf18(uVar7,uVar14);
  }
  TVar8.unknown = *(undefined **)(unaff_x22 + 0x700);
  lVar11 = *(long *)(unaff_x22 + 0x6f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x6f0);
  (**(code **)(*(long *)(unaff_x22 + 0x6e0) + 8))
            (*(undefined8 *)(unaff_x22 + 0x6e8),*(undefined8 *)(unaff_x22 + 0x6d8));
  (**(code **)(lVar11 + 8))(TVar8.unknown,uVar7);
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8);
  if (bVar1) {
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x70);
    *(long *)(unaff_x22 + 0x7b8) = lVar11;
    if (lVar11 == 0) {
      _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x708));
      uVar10 = *(undefined8 *)(unaff_x22 + 0x6e8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x6d0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x6c8);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x700));
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010052c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar12 = *(long *)(*(long *)(unaff_x22 + 0x6b0) + 0x78);
    *(long *)(unaff_x22 + 0x7c0) = lVar12;
    lVar2 = lVar11;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x7c8) = lVar2;
    *(undefined8 *)(unaff_x22 + 2000) = *(undefined8 *)(lVar12 + 0x10);
    uVar7 = *(undefined8 *)(lVar12 + 8);
    _swift_unknownObjectRetain(lVar11);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar4 = FUN_10052c8bc;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x730);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar4 = FUN_10052bb04;
  }
  _swift_task_switch(pcVar4,UVar3.unknown,uVar7);
  return;
}



/* Address: 0x10052c2e4 | FUN_10052c2e4 */

void FUN_10052c2e4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0x758);
  uVar2 = *(undefined8 *)(lVar1 + 0x6b0);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x760));
  _swift_bridgeObjectRelease(uVar3);
  _swift_task_switch(FUN_10052c33c,uVar2,0);
  return;
}



/* Address: 0x10052c33c | FUN_10052c33c */

void FUN_10052c33c(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x7b0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10052c858;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x680));
  return;
}


