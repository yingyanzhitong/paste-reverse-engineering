/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10058931c | FUN_10058931c */

ulong FUN_10058931c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,uint param_5)

{
  return (param_4 & 0xffff) << 0x18 | (ulong)(param_5 & 0xff) << 0x28 | (param_3 & 0xff) << 0x10 |
         (param_2 & 0xff) << 8 | param_1 & 0xff;
}



/* Address: 0x10058933c | FUN_10058933c */

undefined1  [16] FUN_10058933c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  puVar5 = (undefined1 *)0xeb00000000736e6f;
  bVar3 = *unaff_x20;
  puVar6 = (undefined1 *)0xe900000000000073;
  uVar4 = 0x656372756f736572;
  if (bVar3 != 3) {
    puVar6 = &DAT_e500000000000000;
    uVar4 = 0x736c6f6f74;
  }
  uVar1 = 0x7374706d6f7270;
  if (bVar3 != 2) {
    uVar1 = uVar4;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 2) {
    puVar2 = puVar6;
  }
  uVar4 = 0x6974656c706d6f63;
  if (bVar3 != 0) {
    puVar5 = &DAT_e700000000000000;
    uVar4 = 0x676e6967676f6c;
  }
  if (bVar3 < 2) {
    puVar2 = puVar5;
    uVar1 = uVar4;
  }
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Address: 0x1005893e0 | FUN_1005893e0 */

void FUN_1005893e0(undefined1 *param_1,undefined1 param_2)

{
  FUN_10059c62c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100589404 | FUN_100589404 */

String FUN_100589404(void)

{
  String SVar1;
  
  FUN_10059c4ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10058942c | FUN_10058942c */

String FUN_10058942c(void)

{
  String SVar1;
  
  FUN_10059c4ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100589454 | FUN_100589454 */

void FUN_100589454(ulong param_1,ulong param_2)

{
  FUN_10059bc30(param_1 & 0xffffffffffff,param_2 & 0xffffffffffff);
  return;
}



/* Address: 0x100589460 | FUN_100589460 */

void FUN_100589460(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [5];
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd1fb0;
  FUN_1000f7830(&DAT_100fd1fb0,&DAT_100c5ef40);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10059c4ac();
  KVar2 = Swift::Encoder::_container();
  local_51 = (undefined1)param_2;
  local_52 = 0;
  FUN_10059c4ec();
  puVar3 = &local_51;
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (puVar3,&local_52,puVar1,&DAT_100ee3028,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_53 = (undefined1)((ulong)param_2 >> 8);
    local_54 = 1;
    FUN_10059c52c();
    puVar4 = &local_53;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,&local_54,puVar1,&DAT_100ee3008,puVar3);
    local_55 = (undefined1)((ulong)param_2 >> 0x10);
    local_56 = 2;
    FUN_10059c56c();
    puVar3 = &local_55;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar3,&local_56,puVar1,&DAT_100ee2fe0,puVar4);
    local_58 = (undefined2)((ulong)param_2 >> 0x18);
    local_59 = 3;
    FUN_10059c5ac();
    puVar5 = &local_58;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar5,&local_59,puVar1,&DAT_100ee2ee0,puVar3);
    local_5a = (undefined1)((ulong)param_2 >> 0x28);
    local_5b = 4;
    FUN_10059c5ec();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_5a,&local_5b,puVar1,&DAT_100ee2f60,puVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100589664 | FUN_100589664 */

void FUN_100589664(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  uint uVar3;
  
  HVar2.unknown = param_2.unknown;
  Swift::Hasher::_combine(((ulong)param_2.unknown & 0xff) != 1,param_2);
  Swift::Hasher::_combine(((ulong)param_2.unknown & 0xff00) != 0x100,HVar2);
  if ((((uint)param_2.unknown >> 0x10 & 0xff) == 3) ||
     (Swift::Hasher::_combine(1,HVar2), ((uint)param_2.unknown >> 0x10 & 0xff) == 2)) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    bVar1 = (byte)((ulong)param_2.unknown >> 0x10) & 1;
  }
  Swift::Hasher::_combine(bVar1,HVar2);
  if (((ulong)param_2.unknown & 0xff000000) != 0x3000000) {
    Swift::Hasher::_combine(1,HVar2);
    if (((ulong)param_2.unknown & 0xff000000) == 0x2000000) {
      bVar1 = 0;
    }
    else {
      Swift::Hasher::_combine(1,HVar2);
      bVar1 = (byte)((ulong)param_2.unknown >> 0x18) & 1;
    }
    Swift::Hasher::_combine(bVar1,HVar2);
    if (((ulong)param_2.unknown & 0xff00000000) != 0x200000000) {
      Swift::Hasher::_combine(1,HVar2);
      bVar1 = (byte)((ulong)param_2.unknown >> 0x20) & 1;
      goto LAB_100589734;
    }
  }
  bVar1 = 0;
LAB_100589734:
  uVar3 = (uint)((ulong)param_2.unknown >> 0x28) & 0xff;
  Swift::Hasher::_combine(bVar1,HVar2);
  if ((uVar3 == 3) || (Swift::Hasher::_combine(1,HVar2), uVar3 == 2)) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    bVar1 = (byte)((ulong)param_2.unknown >> 0x28) & 1;
  }
  Swift::Hasher::_combine(bVar1,HVar2);
  return;
}



/* Address: 0x10058977c | FUN_10058977c */

void FUN_10058977c(ulong param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100589664(HVar1.unknown,param_1 & 0xffffffffffff);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005897c0 | FUN_1005897c0 */

ulong FUN_1005897c0(ulong param_1)

{
  FUN_10059c7e0();
  return param_1 & 0xffffffffffff;
}



/* Address: 0x1005897d8 | FUN_1005897d8 */

void FUN_1005897d8(void)

{
  uint6 uVar1;
  Hasher HVar2;
  uint6 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar2.unknown = auStack_68;
  FUN_100589664(HVar2.unknown,(ulong)uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100589820 | FUN_100589820 */

void FUN_100589820(undefined8 param_1)

{
  uint6 *unaff_x20;
  
  FUN_100589664(param_1,(ulong)*unaff_x20);
  return;
}



/* Address: 0x100589830 | FUN_100589830 */

void FUN_100589830(__int64 param_1)

{
  uint6 uVar1;
  Hasher HVar2;
  uint6 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar2.unknown = auStack_68;
  FUN_100589664(HVar2.unknown,(ulong)uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100589874 | FUN_100589874 */

void FUN_100589874(undefined1 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  
  uVar2 = (undefined4)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  FUN_10059c7e0();
  if (unaff_x21 == 0) {
    *param_1 = (char)uVar1;
    param_1[1] = (char)((uint)uVar1 >> 8);
    param_1[2] = (char)((uint)uVar1 >> 0x10);
    *(short *)(param_1 + 3) = (short)(CONCAT44(uVar2,uVar1) >> 0x18);
    param_1[5] = (char)((uint)uVar2 >> 8);
  }
  return;
}



/* Address: 0x1005898bc | FUN_1005898bc */

void FUN_1005898bc(undefined8 param_1)

{
  uint6 *unaff_x20;
  
  FUN_100589460(param_1,(ulong)*unaff_x20);
  return;
}



/* Address: 0x1005898dc | FUN_1005898dc */

void FUN_1005898dc(uint6 *param_1,uint6 *param_2)

{
  FUN_10059bc30((ulong)*param_1,(ulong)*param_2);
  return;
}



/* Address: 0x1005898f8 | FUN_1005898f8 */

undefined1  [16] FUN_1005898f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0xd8);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0xe0));
  return auVar1;
}



/* Address: 0x100589924 | FUN_100589924 */

ulong FUN_100589924(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0xe8,auStack_28,0,0);
  return (ulong)*(uint6 *)(unaff_x20 + 0xe8);
}



/* Address: 0x10058995c | FUN_10058995c */

void FUN_10058995c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0xe8,auStack_58,1,0);
  *(char *)(unaff_x20 + 0xe8) = (char)param_1;
  *(char *)(unaff_x20 + 0xe9) = (char)((ulong)param_1 >> 8);
  *(char *)(unaff_x20 + 0xea) = (char)((ulong)param_1 >> 0x10);
  *(short *)(unaff_x20 + 0xeb) = (short)((ulong)param_1 >> 0x18);
  *(char *)(unaff_x20 + 0xed) = (char)((ulong)param_1 >> 0x28);
  return;
}



/* Address: 0x1005899c8 | FUN_1005899c8 */

undefined1  [16] FUN_1005899c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xe8,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xe8;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1005899f8 | FUN_1005899f8 */

undefined1 FUN_1005899f8(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0xee,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0xee);
}



/* Address: 0x100589a28 | FUN_100589a28 */

void FUN_100589a28(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xee,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0xee) = param_1;
  return;
}



/* Address: 0x100589a64 | FUN_100589a64 */

undefined1  [16] FUN_100589a64(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0xee,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0xee;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x100589a94 | FUN_100589a94 */

long FUN_100589a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a7008();
  *(undefined **)(unaff_x20 + 0xf0) = puVar1;
  puVar1 = puVar2;
  FUN_1004a6ff4();
  *(undefined **)(unaff_x20 + 0xf8) = puVar1;
  puVar1 = puVar2;
  FUN_1004a7238();
  *(undefined **)(unaff_x20 + 0x100) = puVar1;
  puVar1 = puVar2;
  FUN_1004a7104();
  *(undefined **)(unaff_x20 + 0x108) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 1;
  *(undefined1 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  FUN_1004a7354();
  *(undefined **)(unaff_x20 + 0x198) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_5;
  *(undefined8 *)(unaff_x20 + 0x88) = param_6;
  *(undefined8 *)(unaff_x20 + 0x90) = param_3;
  *(undefined8 *)(unaff_x20 + 0x98) = param_4;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(char *)(unaff_x20 + 0xe8) = (char)param_9;
  *(char *)(unaff_x20 + 0xe9) = (char)((ulong)param_9 >> 8);
  *(char *)(unaff_x20 + 0xea) = (char)((ulong)param_9 >> 0x10);
  *(short *)(unaff_x20 + 0xeb) = (short)((ulong)param_9 >> 0x18);
  *(char *)(unaff_x20 + 0xed) = (char)((ulong)param_9 >> 0x28);
  *(undefined1 *)(unaff_x20 + 0xee) = param_10;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_8;
  return unaff_x20;
}



/* Address: 0x100589bec | FUN_100589bec */

void FUN_100589bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0xd0) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a7008();
  *(undefined **)(unaff_x20 + 0xf0) = puVar1;
  puVar1 = puVar2;
  FUN_1004a6ff4();
  *(undefined **)(unaff_x20 + 0xf8) = puVar1;
  puVar1 = puVar2;
  FUN_1004a7238();
  *(undefined **)(unaff_x20 + 0x100) = puVar1;
  puVar1 = puVar2;
  FUN_1004a7104();
  *(undefined **)(unaff_x20 + 0x108) = puVar1;
  *(undefined1 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 1;
  *(undefined1 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  FUN_1004a7354();
  *(undefined **)(unaff_x20 + 0x198) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_5;
  *(undefined8 *)(unaff_x20 + 0x88) = param_6;
  *(undefined8 *)(unaff_x20 + 0x90) = param_3;
  *(undefined8 *)(unaff_x20 + 0x98) = param_4;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  *(char *)(unaff_x20 + 0xe8) = (char)param_9;
  *(char *)(unaff_x20 + 0xe9) = (char)((ulong)param_9 >> 8);
  *(char *)(unaff_x20 + 0xea) = (char)((ulong)param_9 >> 0x10);
  *(short *)(unaff_x20 + 0xeb) = (short)((ulong)param_9 >> 0x18);
  *(char *)(unaff_x20 + 0xed) = (char)((ulong)param_9 >> 0x28);
  *(undefined1 *)(unaff_x20 + 0xee) = param_10;
  *(undefined8 *)(unaff_x20 + 0xd8) = param_7;
  *(undefined8 *)(unaff_x20 + 0xe0) = param_8;
  return;
}



/* Address: 0x100589d30 | FUN_100589d30 */

void FUN_100589d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 600) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x250) = param_4;
  *(undefined8 *)(unaff_x22 + 0x248) = param_3;
  *(undefined8 *)(unaff_x22 + 0x240) = param_2;
  *(undefined8 *)(unaff_x22 + 0x238) = param_1;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar2;
  _swift_task_switch(FUN_100589da4);
  return;
}



/* Address: 0x100589da4 | FUN_100589da4 */

void FUN_100589da4(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(unaff_x22 + 600);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar8 = *(undefined8 *)(lVar6 + 200);
  lVar9 = *(long *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
  *(undefined8 *)(lVar6 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(lVar6 + 200) = uVar10;
  _swift_unknownObjectRetain(uVar10);
  _swift_unknownObjectRelease(uVar8);
  FUN_100598f80(uVar7,uVar5);
  puVar2 = &DAT_100ee2c70;
  _swift_allocObject(&DAT_100ee2c70,0x18,7);
  _swift_weakInit(puVar2 + 0x10,lVar6);
  FUN_10059caac(&DAT_100c5ef58,puVar2);
  _swift_release(puVar2);
  _swift_getObjectType(uVar10);
  piVar4 = *(int **)(lVar9 + 0x18);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x268) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100589ea0;
                    /* WARNING: Could not recover jumptable at 0x000100589e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(uVar10,*(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x100589ea0 | FUN_100589ea0 */

void FUN_100589ea0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x268));
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x000100589ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  _swift_task_switch(FUN_100589f08,*(undefined8 *)(lVar1 + 600),0);
  return;
}



/* Address: 0x100589f08 | FUN_100589f08 */

void FUN_100589f08(void)

{
  UnownedSerialExecutor UVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  lVar8 = *(long *)(unaff_x22 + 600);
  lVar6 = *(long *)(lVar8 + 200);
  *(long *)(unaff_x22 + 0x270) = lVar6;
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar8 + 0xd0);
    *(long *)(unaff_x22 + 0x278) = lVar9;
    lVar8 = lVar6;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x280) = lVar8;
    *(undefined8 *)(unaff_x22 + 0x288) = *(undefined8 *)(lVar9 + 0x10);
    uVar10 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar6);
    UVar1 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10058a088,UVar1.unknown,uVar10);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar7,1,1,TVar2.unknown);
  puVar3 = &DAT_100fd1fe8;
  FUN_1003b6598();
  puVar4 = &DAT_100ee2c98;
  _swift_allocObject(&DAT_100ee2c98,0x38,7);
  *(long *)(puVar4 + 0x10) = lVar8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(undefined8 *)(puVar4 + 0x28) = uVar5;
  *(undefined8 *)(puVar4 + 0x20) = uVar10;
  *(long *)(puVar4 + 0x30) = lVar8;
  _swift_retain_n(lVar8,2);
  _swift_unknownObjectRetain(uVar10);
  uVar10 = 0;
  FUN_1004e9c98(0,0,uVar7,&DAT_100c5ef68,puVar4);
  uVar5 = *(undefined8 *)(lVar8 + 0x1a0);
  *(undefined8 *)(lVar8 + 0x1a0) = uVar10;
  _swift_release(uVar5);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010058a084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058a088 | FUN_10058a088 */

void FUN_10058a088(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar2 = *(undefined8 *)(unaff_x22 + 600);
  (**(code **)(unaff_x22 + 0x288))(uVar1,*(undefined8 *)(unaff_x22 + 0x278));
  *(undefined8 *)(unaff_x22 + 0x290) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10058a0e0,uVar2,0);
  return;
}



/* Address: 0x10058a0e0 | FUN_10058a0e0 */

void FUN_10058a0e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  TaskPriority TVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar12 = *(long *)(unaff_x22 + 0x290);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0x220);
  FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e8);
  lVar10 = *(long *)(unaff_x22 + 0x1f0);
  FUN_100004640(unaff_x22 + 0x1d0,uVar5);
  (**(code **)(lVar10 + 0x70))(uVar5,lVar10);
  FUN_100004594(unaff_x22 + 0x1d0);
  if (((uint)uVar5 & 0xff) < 2) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x290);
    lVar10 = *(long *)(unaff_x22 + 600);
    FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x1f8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
    lVar12 = *(long *)(unaff_x22 + 0x218);
    FUN_100004640(unaff_x22 + 0x1f8,uVar9);
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar6 = (char *)(unaff_x22 + 0x10);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x20) = 0x656d616e;
    *(undefined8 *)(puVar1 + 0x18) = 4;
    *(undefined8 *)(puVar1 + 0x10) = 2;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e400000000000000;
    SVar13.bridgeObject = pcVar7;
    SVar13.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar13);
    pcVar6 = *(char **)(lVar10 + 0x78);
    SVar15.bridgeObject = pvVar8;
    SVar15.str = pcVar7;
    Swift::String::write(*(String *)(lVar10 + 0x70),SVar15);
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    *(undefined8 *)(puVar1 + 0x60) = 0x6e6f6973726576;
    *(undefined1 **)(puVar1 + 0x68) = &DAT_e700000000000000;
    SVar14.bridgeObject = pcVar7;
    SVar14.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar14);
    SVar16.bridgeObject = pvVar8;
    SVar16.str = pcVar7;
    Swift::String::write(*(String *)(lVar10 + 0x90),SVar16);
    *(undefined8 *)(puVar1 + 0x70) = 0;
    *(undefined8 *)(puVar1 + 0x78) = 0xe000000000000000;
    puVar1[0x98] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    puVar3 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar1 + 0x20,2,puVar3);
    *(undefined1 *)(unaff_x22 + 0xb0) = 1;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x7320726576726553;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xee00646574726174;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined **)(unaff_x22 + 0xd0) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd6;
    *(undefined1 *)(unaff_x22 + 0x110) = 1;
    *(undefined8 *)(unaff_x22 + 0x118) = 0x7320726576726553;
    *(undefined8 *)(unaff_x22 + 0x120) = 0xee00646574726174;
    *(undefined8 *)(unaff_x22 + 0x128) = 0;
    *(undefined **)(unaff_x22 + 0x130) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x138) = 0;
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x158) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x160) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd6;
    FUN_1004eaa00(unaff_x22 + 0xb0,unaff_x22 + 0x170);
    FUN_1004eaa3c(unaff_x22 + 0x110);
    (**(code **)(lVar12 + 0x28))(unaff_x22 + 0xb0,uVar9,lVar12);
    _swift_release(uVar5);
    FUN_1004eaa3c(unaff_x22 + 0xb0);
    FUN_100004594(unaff_x22 + 0x1f8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x290));
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x260);
  lVar10 = *(long *)(unaff_x22 + 600);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(uVar11,1,1,TVar4.unknown);
  puVar1 = &DAT_100fd1fe8;
  FUN_1003b6598();
  puVar3 = &DAT_100ee2c98;
  _swift_allocObject(&DAT_100ee2c98,0x38,7);
  *(long *)(puVar3 + 0x10) = lVar10;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  *(long *)(puVar3 + 0x30) = lVar10;
  _swift_retain_n(lVar10,2);
  _swift_unknownObjectRetain(uVar5);
  uVar5 = 0;
  FUN_1004e9c98(0,0,uVar11,&DAT_100c5ef68,puVar3);
  uVar9 = *(undefined8 *)(lVar10 + 0x1a0);
  *(undefined8 *)(lVar10 + 0x1a0) = uVar5;
  _swift_release(uVar9);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010058a454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058a458 | FUN_10058a458 */

void FUN_10058a458(void)

{
  UUID UVar1;
  ulong uVar2;
  Instant IVar3;
  ulong uVar4;
  ContinuousClock CVar5;
  undefined *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 uVar8;
  undefined8 in_x3;
  long in_x4;
  undefined8 in_x5;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x920) = in_x5;
  *(long *)(unaff_x22 + 0x918) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x910) = in_x3;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x928) = UVar1.unknown;
  lVar9 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x930) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x938) = uVar2;
  IVar3 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x940) = IVar3.unknown;
  lVar9 = *(long *)(IVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x948) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x950) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x958) = uVar2;
  CVar5 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x960) = CVar5.unknown;
  lVar9 = *(long *)(CVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x968) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x970) = uVar2;
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x978) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x980) = uVar2;
  puVar6 = &DAT_100fcf0f0;
  FUN_1000f7830(&DAT_100fcf0f0,&DAT_100c57028);
  *(undefined **)(unaff_x22 + 0x988) = puVar6;
  lVar9 = *(long *)(puVar6 + -8);
  *(long *)(unaff_x22 + 0x990) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x998) = uVar2;
  puVar6 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  *(undefined **)(unaff_x22 + 0x9a0) = puVar6;
  lVar9 = *(long *)(puVar6 + -8);
  *(long *)(unaff_x22 + 0x9a8) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9b0) = uVar2;
  _swift_getObjectType();
  *(undefined8 *)(unaff_x22 + 0x9b8) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x9c0) = *(undefined8 *)(in_x4 + 0x30);
  uVar8 = *(undefined8 *)(in_x4 + 8);
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10058a5f0,UVar7.unknown,uVar8);
  return;
}



/* Address: 0x10058a5f0 | FUN_10058a5f0 */

void FUN_10058a5f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x920);
  (**(code **)(unaff_x22 + 0x9c0))
            (*(undefined8 *)(unaff_x22 + 0x9b0),*(undefined8 *)(unaff_x22 + 0x9b8),
             *(undefined8 *)(unaff_x22 + 0x918));
  _swift_task_switch(FUN_10058a640,uVar1,0);
  return;
}



/* Address: 0x10058a640 | FUN_10058a640 */

void FUN_10058a640(void)

{
  long *plVar1;
  long unaff_x22;
  
  Swift::AsyncThrowingStream::_makeAsyncIterator
            ((AsyncThrowingStream)*(undefined **)(unaff_x22 + 0x9a0));
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x9c8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058a6a8;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058a6a8 | FUN_10058a6a8 */

void FUN_10058a6a8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x9c8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    *(undefined8 *)(lVar3 + 0x9d0) = 0;
    pcVar1 = FUN_10058a70c;
  }
  else {
    *(long *)(lVar3 + 0xa48) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    pcVar1 = FUN_10058b788;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10058a70c | FUN_10058a70c */

/* WARNING: Removing unreachable block (ram,0x00010058aa38) */
/* WARNING: Removing unreachable block (ram,0x00010058ad88) */
/* WARNING: Removing unreachable block (ram,0x00010058ad9c) */
/* WARNING: Removing unreachable block (ram,0x00010058af10) */
/* WARNING: Removing unreachable block (ram,0x00010058adb0) */
/* WARNING: Removing unreachable block (ram,0x00010058b244) */
/* WARNING: Removing unreachable block (ram,0x00010058adfc) */
/* WARNING: Removing unreachable block (ram,0x00010058b250) */
/* WARNING: Removing unreachable block (ram,0x00010058ae04) */
/* WARNING: Removing unreachable block (ram,0x00010058a958) */
/* WARNING: Removing unreachable block (ram,0x00010058ab6c) */
/* WARNING: Removing unreachable block (ram,0x00010058ad14) */
/* WARNING: Removing unreachable block (ram,0x00010058ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010058ad48) */
/* WARNING: Removing unreachable block (ram,0x00010058ae0c) */
/* WARNING: Removing unreachable block (ram,0x00010058ad60) */
/* WARNING: Removing unreachable block (ram,0x00010058ae14) */
/* WARNING: Removing unreachable block (ram,0x00010058ae6c) */
/* WARNING: Removing unreachable block (ram,0x00010058ae58) */
/* WARNING: Removing unreachable block (ram,0x00010058ae70) */
/* WARNING: Removing unreachable block (ram,0x00010058a9c8) */
/* WARNING: Removing unreachable block (ram,0x00010058acb0) */
/* WARNING: Removing unreachable block (ram,0x00010058aaa4) */
/* WARNING: Removing unreachable block (ram,0x00010058af18) */
/* WARNING: Removing unreachable block (ram,0x00010058af24) */
/* WARNING: Removing unreachable block (ram,0x00010058b028) */
/* WARNING: Removing unreachable block (ram,0x00010058afd4) */
/* WARNING: Removing unreachable block (ram,0x00010058afe8) */
/* WARNING: Removing unreachable block (ram,0x00010058b030) */
/* WARNING: Removing unreachable block (ram,0x00010058b08c) */
/* WARNING: Removing unreachable block (ram,0x00010058b0b0) */
/* WARNING: Removing unreachable block (ram,0x00010058b098) */
/* WARNING: Removing unreachable block (ram,0x00010058b0f0) */
/* WARNING: Removing unreachable block (ram,0x00010058b19c) */
/* WARNING: Removing unreachable block (ram,0x00010058b130) */
/* WARNING: Removing unreachable block (ram,0x00010058b21c) */
/* WARNING: Removing unreachable block (ram,0x00010058b040) */

void FUN_10058a70c(Task param_1)

{
  bool bVar1;
  long lVar2;
  UnownedSerialExecutor UVar3;
  JSONDecoder *pJVar4;
  Data DVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x8b8);
  *(undefined8 *)(unaff_x22 + 0x9d8) = uVar13;
  uVar11 = *(ulong *)(unaff_x22 + 0x8c0);
  *(ulong *)(unaff_x22 + 0x9e0) = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
    if (!bVar1) {
      lVar8 = *(long *)(unaff_x22 + 0x9d0);
      pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
      pJVar4 = Foundation::JSONDecoder::init(pJVar4);
      *(JSONDecoder **)(unaff_x22 + 0x9e8) = pJVar4;
      FUN_10059feb8();
      Foundation::JSONDecoder::_decode(pJVar4,(Data)0x100ee37c8);
      if (lVar8 != 0) {
        _swift_errorRelease(lVar8);
        DVar5.unknown = &DAT_100fcb3e0;
        FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
        FUN_100134584(&DAT_100fcf108,&DAT_100fcb3e0,&DAT_100c50230,
                      &TargetProtocolConformanceDescriptor_100c52c80);
        Foundation::JSONDecoder::_decode(pJVar4,DVar5);
        *(undefined8 *)(unaff_x22 + 0x5f8) = *(undefined8 *)(unaff_x22 + 0x5b8);
        *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x5b0);
        *(undefined8 *)(unaff_x22 + 0x608) = *(undefined8 *)(unaff_x22 + 0x5c8);
        *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x5c0);
        *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(unaff_x22 + 0x5d8);
        *(undefined8 *)(unaff_x22 + 0x610) = *(undefined8 *)(unaff_x22 + 0x5d0);
        *(undefined8 *)(unaff_x22 + 0x622) = *(undefined8 *)(unaff_x22 + 0x5e2);
        *(undefined8 *)(unaff_x22 + 0x61a) = *(undefined8 *)(unaff_x22 + 0x5da);
        plVar6 = (long *)0x2d0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa08) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_10058b344;
        FUN_1005986cc((undefined8 *)(unaff_x22 + 0x5f0));
        return;
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x8f8);
      *(undefined8 *)(unaff_x22 + 0x9f0) = uVar13;
      plVar6 = (long *)0x560;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x9f8) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10058b26c;
      FUN_100592470(uVar13);
      return;
    }
    FUN_10003bf18(uVar13,uVar11);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x9b0);
  lVar8 = *(long *)(unaff_x22 + 0x9a8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x9a0);
  (**(code **)(*(long *)(unaff_x22 + 0x990) + 8))
            (*(undefined8 *)(unaff_x22 + 0x998),*(undefined8 *)(unaff_x22 + 0x988));
  (**(code **)(lVar8 + 8))(uVar7,uVar13);
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x920) + 200);
  *(long *)(unaff_x22 + 0xa20) = lVar8;
  if (lVar8 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x920) + 0xd0);
    *(long *)(unaff_x22 + 0xa28) = lVar9;
    lVar2 = lVar8;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xa30) = lVar2;
    *(undefined8 *)(unaff_x22 + 0xa38) = *(undefined8 *)(lVar9 + 0x10);
    uVar13 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar8);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10058b4fc,UVar3.unknown,uVar13);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x998);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x978);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x970);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x958);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x950);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x938);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x9b0));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010058a88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058b26c | FUN_10058b26c */

void FUN_10058b26c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa00) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x9f8));
  uVar3 = *(undefined8 *)(lVar2 + 0x920);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x9f0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10058b2d4;
  }
  else {
    pcVar1 = FUN_10058c6c4;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10058b2d4 | FUN_10058b2d4 */

void FUN_10058b2d4(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9e8);
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x9d8),*(undefined8 *)(unaff_x22 + 0x9e0));
  _swift_release(uVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058b344 | FUN_10058b344 */

void FUN_10058b344(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x920);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa08));
  _swift_task_switch(FUN_10058b390,uVar1,0);
  return;
}



/* Address: 0x10058b390 | FUN_10058b390 */

void FUN_10058b390(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9e8);
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x9d8),*(undefined8 *)(unaff_x22 + 0x9e0));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0x5f0,&DAT_100fcb3e0,&DAT_100c50230);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058b418 | FUN_10058b418 */

void FUN_10058b418(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa18) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa10));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10058b474;
  }
  else {
    pcVar1 = FUN_10058c9e0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x920),0);
  return;
}



/* Address: 0x10058b474 | FUN_10058b474 */

void FUN_10058b474(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9e8);
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x9d8),*(undefined8 *)(unaff_x22 + 0x9e0));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0x630,&DAT_100fcd010,&DAT_100c534d0);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058b4fc | FUN_10058b4fc */

void FUN_10058b4fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x920);
  (**(code **)(unaff_x22 + 0xa38))(uVar1,*(undefined8 *)(unaff_x22 + 0xa28));
  *(undefined8 *)(unaff_x22 + 0xa40) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10058b554,uVar2,0);
  return;
}



/* Address: 0x10058b554 | FUN_10058b554 */

void FUN_10058b554(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0xa40);
  _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 0x848,0,0);
  FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x720);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x738);
  lVar4 = *(long *)(unaff_x22 + 0x740);
  FUN_100004640(unaff_x22 + 0x720,uVar2);
  (**(code **)(lVar4 + 0x70))(uVar2,lVar4);
  FUN_100004594(unaff_x22 + 0x720);
  if (((uint)uVar2 & 0xff) < 2) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xa40);
    FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x748);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x760);
    lVar4 = *(long *)(unaff_x22 + 0x768);
    FUN_100004640(unaff_x22 + 0x748,uVar3);
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a6a1c();
    *(undefined1 *)(unaff_x22 + 0x2b0) = 1;
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0x6620726576726553;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0xef64656873696e69;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined **)(unaff_x22 + 0x2d0) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x300) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x111;
    *(undefined1 *)(unaff_x22 + 0x250) = 1;
    *(undefined8 *)(unaff_x22 + 600) = 0x6620726576726553;
    *(undefined8 *)(unaff_x22 + 0x260) = 0xef64656873696e69;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined **)(unaff_x22 + 0x270) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x298) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x111;
    FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0x1f0);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    (**(code **)(lVar4 + 0x28))(unaff_x22 + 0x2b0,uVar3,lVar4);
    _swift_release(uVar2);
    FUN_1004eaa3c(unaff_x22 + 0x2b0);
    FUN_100004594(unaff_x22 + 0x748);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xa40));
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x998);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x978);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x970);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x958);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x950);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x938);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x9b0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010058b784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058b788 | FUN_10058b788 */

void FUN_10058b788(void)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x9b0);
  lVar5 = *(long *)(unaff_x22 + 0x9a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x9a0);
  lVar8 = *(long *)(unaff_x22 + 0x920);
  (**(code **)(*(long *)(unaff_x22 + 0x990) + 8))
            (*(undefined8 *)(unaff_x22 + 0x998),*(undefined8 *)(unaff_x22 + 0x988));
  (**(code **)(lVar5 + 8))(uVar4,uVar3);
  lVar5 = *(long *)(lVar8 + 200);
  *(long *)(unaff_x22 + 0xa50) = lVar5;
  if (lVar5 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xa48));
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x920) + 200);
    *(long *)(unaff_x22 + 0xa20) = lVar5;
    if (lVar5 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x998);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x980);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x978);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x970);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x958);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x950);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x938);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x9b0));
      _swift_task_dealloc(uVar4);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar9);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(uVar11);
      _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010058b934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x920) + 0xd0);
    *(long *)(unaff_x22 + 0xa28) = lVar6;
    lVar8 = lVar5;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xa30) = lVar8;
    *(undefined8 *)(unaff_x22 + 0xa38) = *(undefined8 *)(lVar6 + 0x10);
    uVar3 = *(undefined8 *)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_10058b4fc;
  }
  else {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x920) + 0xd0);
    *(long *)(unaff_x22 + 0xa58) = lVar6;
    lVar8 = lVar5;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xa60) = lVar8;
    *(undefined8 *)(unaff_x22 + 0xa68) = *(undefined8 *)(lVar6 + 0x10);
    uVar3 = *(undefined8 *)(lVar6 + 8);
    _swift_unknownObjectRetain(lVar5);
    UVar1 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_10058b938;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar3);
  return;
}



/* Address: 0x10058b938 | FUN_10058b938 */

void FUN_10058b938(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x920);
  (**(code **)(unaff_x22 + 0xa68))(uVar1,*(undefined8 *)(unaff_x22 + 0xa58));
  *(undefined8 *)(unaff_x22 + 0xa70) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10058b990,uVar2,0);
  return;
}



/* Address: 0x10058b990 | FUN_10058b990 */

void FUN_10058b990(void)

{
  undefined *puVar1;
  undefined *puVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  
  lVar11 = *(long *)(unaff_x22 + 0xa70);
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x878,0,0);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x6d0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x6e8);
  lVar8 = *(long *)(unaff_x22 + 0x6f0);
  FUN_100004640(unaff_x22 + 0x6d0,uVar6);
  (**(code **)(lVar8 + 0x70))(uVar6,lVar8);
  FUN_100004594(unaff_x22 + 0x6d0);
  if (((uint)uVar6 & 0xff) < 6) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa70);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xa48);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x6f8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x710);
    lVar8 = *(long *)(unaff_x22 + 0x718);
    FUN_100004640(unaff_x22 + 0x6f8,uVar10);
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar4 = (char *)0x60;
    pvVar5 = (void *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x20) = 0x726f727265;
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e500000000000000;
    SVar16.bridgeObject = pvVar5;
    SVar16.str = pcVar4;
    Swift::String::reserveCapacity(2,SVar16);
    _swift_getErrorValue(uVar7,unaff_x22 + 0x908,unaff_x22 + 0x860);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x860),*(undefined8 *)(unaff_x22 + 0x868));
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    FUN_1000fb4c4(puVar1 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar1,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x10) = 5;
    *(undefined1 *)(unaff_x22 + 0x130) = 5;
    *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000024;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dade60;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined **)(unaff_x22 + 0x150) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x10e;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000024;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dade60;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x10e;
    FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x310);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x10));
    (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x130,uVar10,lVar8);
    _swift_errorRelease(uVar7);
    _swift_release(uVar6);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    FUN_100004594(unaff_x22 + 0x6f8);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa70);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xa48));
    _swift_release(uVar6);
  }
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0x920) + 200);
  *(long *)(unaff_x22 + 0xa20) = lVar8;
  if (lVar8 != 0) {
    lVar9 = *(long *)(*(long *)(unaff_x22 + 0x920) + 0xd0);
    *(long *)(unaff_x22 + 0xa28) = lVar9;
    lVar11 = lVar8;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0xa30) = lVar11;
    *(undefined8 *)(unaff_x22 + 0xa38) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = *(undefined8 *)(lVar9 + 8);
    _swift_unknownObjectRetain(lVar8);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10058b4fc,UVar3.unknown,uVar6);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x998);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x980);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x978);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x970);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x958);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x950);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x938);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x9b0));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010058bd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058bd04 | FUN_10058bd04 */

void FUN_10058bd04(void)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x950);
  lVar5 = *(long *)(unaff_x22 + 0x948);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x940);
  FUN_1003b6598(&DAT_100fcd4b8,0xff,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_1003b6598(&DAT_100fcd4c0,0xff,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar2 = *(code **)(lVar5 + 8);
  *(code **)(unaff_x22 + 0xa98) = pcVar2;
  (*pcVar2)(uVar3,uVar4);
  plVar1 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xaa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058be14;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x10058be14 | FUN_10058be14 */

void FUN_10058be14(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  code *pcVar5;
  long lVar6;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xaa0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x970);
    lVar6 = *(long *)(lVar3 + 0x968);
    uVar4 = *(undefined8 *)(lVar3 + 0x960);
    uVar1 = *(undefined8 *)(lVar3 + 0x920);
    (**(code **)(lVar3 + 0xa98))(*(undefined8 *)(lVar3 + 0x958),*(undefined8 *)(lVar3 + 0x940));
    (**(code **)(lVar6 + 8))(uVar2,uVar4);
    pcVar5 = FUN_10058bec8;
  }
  else {
    pcVar5 = *(code **)(lVar3 + 0xa98);
    uVar1 = *(undefined8 *)(lVar3 + 0x958);
    uVar4 = *(undefined8 *)(lVar3 + 0x940);
    _swift_errorRelease();
    (*pcVar5)(uVar1,uVar4);
    pcVar5 = FUN_10058bf58;
    uVar1 = 0;
  }
  _swift_task_switch(pcVar5,uVar1,0);
  return;
}



/* Address: 0x10058bec8 | FUN_10058bec8 */

void FUN_10058bec8(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x9d8);
  FUN_1005232a0(*(undefined8 *)(unaff_x22 + 0xa80),*(undefined8 *)(unaff_x22 + 0xa88),
                *(undefined1 *)(unaff_x22 + 0x3b9));
  FUN_10003bf18(uVar4,uVar2);
  _swift_errorRelease(uVar3);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058bf58 | FUN_10058bf58 */

void FUN_10058bf58(void)

{
  long unaff_x22;
  
  _swift_task_switch(FUN_10058bf6c,*(undefined8 *)(unaff_x22 + 0x920),0);
  return;
}



/* Address: 0x10058bf6c | FUN_10058bf6c */

void FUN_10058bf6c(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa78);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x970);
  lVar8 = *(long *)(unaff_x22 + 0x968);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x960);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x3b9);
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x9d8),*(undefined8 *)(unaff_x22 + 0x9e0));
  FUN_1005232a0(uVar3,uVar4,uVar1);
  _swift_errorRelease(uVar5);
  (**(code **)(lVar8 + 8))(uVar6,uVar7);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058c02c | FUN_10058c02c */

void FUN_10058c02c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xab8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xaa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x920);
  (**(code **)(unaff_x22 + 0xac0))(uVar1,*(undefined8 *)(unaff_x22 + 0xab0));
  *(undefined8 *)(unaff_x22 + 0xac8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_10058c084,uVar2,0);
  return;
}



/* Address: 0x10058c084 | FUN_10058c084 */

void FUN_10058c084(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  UUID UVar4;
  ulong uVar5;
  long *plVar6;
  void *pvVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  char cVar14;
  String SVar15;
  String SVar16;
  
  lVar11 = *(long *)(unaff_x22 + 0xac8);
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x800,0,0);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x798);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x7b0);
  lVar9 = *(long *)(unaff_x22 + 0x7b8);
  FUN_100004640(unaff_x22 + 0x798,uVar8);
  (**(code **)(lVar9 + 0x70))(uVar8,lVar9);
  FUN_100004594(unaff_x22 + 0x798);
  if (((uint)uVar8 & 0xff) < 6) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xac8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa78);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x770);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x788);
    lVar9 = *(long *)(unaff_x22 + 0x790);
    FUN_100004640(unaff_x22 + 0x770,uVar10);
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar12 = (char *)0x60;
    pvVar7 = (void *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x726f727265;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0x8a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x8b0) = 0xe000000000000000;
    SVar15.bridgeObject = pvVar7;
    SVar15.str = pcVar12;
    Swift::String::reserveCapacity(2,SVar15);
    *(undefined8 *)(unaff_x22 + 0x6a0) = *(undefined8 *)(unaff_x22 + 0x8a8);
    *(undefined8 *)(unaff_x22 + 0x6a8) = *(undefined8 *)(unaff_x22 + 0x8b0);
    *(undefined8 *)(unaff_x22 + 0x6b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x6c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x6b8) = 0;
    *(undefined1 *)(unaff_x22 + 0x6c8) = 0;
    _swift_getErrorValue(uVar8,unaff_x22 + 0x8e0,unaff_x22 + 0x818);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x818),*(undefined8 *)(unaff_x22 + 0x820));
    uVar8 = *(undefined8 *)(unaff_x22 + 0x6a8);
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x22 + 0x6a0);
    *(undefined8 *)(puVar2 + 0x38) = uVar8;
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0xd0) = 5;
    *(undefined1 *)(unaff_x22 + 400) = 5;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dadeb0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined **)(unaff_x22 + 0x1b0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x103;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000018;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dadeb0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000020;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dadc60;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x103;
    FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x70);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar9 + 0x28))(unaff_x22 + 400,uVar10,lVar9);
    _swift_release(uVar13);
    FUN_1004eaa3c(unaff_x22 + 400);
    FUN_100004594(unaff_x22 + 0x770);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xac8));
  }
  cVar14 = *(char *)(unaff_x22 + 0x3b9);
  if (cVar14 == -1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x938);
    lVar9 = *(long *)(unaff_x22 + 0x930);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x928);
    UVar4 = Foundation::UUID::init();
    SVar15 = Foundation::UUID::get_uuidString(UVar4);
    (**(code **)(lVar9 + 8))(uVar8,uVar13);
    cVar14 = '\0';
    cVar1 = *(char *)(unaff_x22 + 0x3b9);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa88);
    pcVar12 = *(char **)(unaff_x22 + 0xa80);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa88);
    pcVar12 = ((String *)(unaff_x22 + 0xa80))->str;
    SVar15 = *(String *)(unaff_x22 + 0xa80);
    cVar1 = cVar14;
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa90);
  *(undefined8 *)(unaff_x22 + 0x8f0) = *(undefined8 *)(unaff_x22 + 0xa78);
  _swift_errorRetain();
  FUN_1005221e8(pcVar12,uVar8,cVar1);
  uVar5 = unaff_x22 + 0x7e0;
  _swift_dynamicCast(uVar5,unaff_x22 + 0x8f0,uVar13,&DAT_100eda9c8,6);
  if ((uVar5 & 1) == 0) {
    _swift_getErrorValue(*(undefined8 *)(unaff_x22 + 0xa78),unaff_x22 + 0x900,unaff_x22 + 0x830);
    SVar16 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    *(String *)(unaff_x22 + 0x570) = SVar15;
    *(char *)(unaff_x22 + 0x580) = cVar14;
    *(String *)(unaff_x22 + 0x588) = SVar16;
    *(undefined8 *)(unaff_x22 + 0x598) = 0;
    *(undefined8 *)(unaff_x22 + 0x5a0) = 4;
    *(undefined2 *)(unaff_x22 + 0x5a8) = 0x100;
    plVar6 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xad0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10058c4ac;
    lVar9 = unaff_x22 + 0x570;
  }
  else {
    *(String *)(unaff_x22 + 0x530) = SVar15;
    *(char *)(unaff_x22 + 0x540) = cVar14;
    *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x7e8);
    *(undefined8 *)(unaff_x22 + 0x548) = *(undefined8 *)(unaff_x22 + 0x7e0);
    *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x7f0);
    *(ulong *)(unaff_x22 + 0x560) = (ulong)*(byte *)(unaff_x22 + 0x7f8);
    *(undefined2 *)(unaff_x22 + 0x568) = 0x100;
    plVar6 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xad8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10058c564;
    lVar9 = unaff_x22 + 0x530;
  }
  FUN_10058d7e8(plVar6,lVar9);
  return;
}



/* Address: 0x10058c4ac | FUN_10058c4ac */

void FUN_10058c4ac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xad0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    *(undefined8 *)(lVar3 + 0x4b8) = *(undefined8 *)(lVar3 + 0x578);
    *(undefined8 *)(lVar3 + 0x4b0) = *(undefined8 *)(lVar3 + 0x570);
    *(undefined1 *)(lVar3 + 0x4c0) = *(undefined1 *)(lVar3 + 0x580);
    *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x590);
    *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x588);
    *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x5a0);
    *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x598);
    *(undefined2 *)(lVar3 + 0x4e8) = *(undefined2 *)(lVar3 + 0x5a8);
    pcVar1 = FUN_10058c61c;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x578);
    *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x570);
    *(undefined1 *)(lVar3 + 0x500) = *(undefined1 *)(lVar3 + 0x580);
    *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x588);
    *(undefined8 *)(lVar3 + 0x518) = *(undefined8 *)(lVar3 + 0x598);
    *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x590);
    *(undefined8 *)(lVar3 + 0x520) = *(undefined8 *)(lVar3 + 0x5a0);
    *(undefined2 *)(lVar3 + 0x528) = *(undefined2 *)(lVar3 + 0x5a8);
    pcVar1 = FUN_10058cd18;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10058c564 | FUN_10058c564 */

void FUN_10058c564(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xad8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    *(undefined8 *)(lVar3 + 0x4b8) = *(undefined8 *)(lVar3 + 0x538);
    *(undefined8 *)(lVar3 + 0x4b0) = *(undefined8 *)(lVar3 + 0x530);
    *(undefined1 *)(lVar3 + 0x4c0) = *(undefined1 *)(lVar3 + 0x540);
    *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x550);
    *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x548);
    *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x560);
    *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x558);
    *(undefined2 *)(lVar3 + 0x4e8) = *(undefined2 *)(lVar3 + 0x568);
    pcVar1 = FUN_10058c61c;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x538);
    *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x530);
    *(undefined1 *)(lVar3 + 0x500) = *(undefined1 *)(lVar3 + 0x540);
    *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x548);
    *(undefined8 *)(lVar3 + 0x518) = *(undefined8 *)(lVar3 + 0x558);
    *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x550);
    *(undefined8 *)(lVar3 + 0x520) = *(undefined8 *)(lVar3 + 0x560);
    *(undefined2 *)(lVar3 + 0x528) = *(undefined2 *)(lVar3 + 0x568);
    pcVar1 = FUN_10058cd18;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10058c61c | FUN_10058c61c */

void FUN_10058c61c(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x9d8);
  FUN_1005232a0(*(undefined8 *)(unaff_x22 + 0xa80),*(undefined8 *)(unaff_x22 + 0xa88),
                *(undefined1 *)(unaff_x22 + 0x3b9));
  FUN_10003bf18(uVar4,uVar2);
  _swift_errorRelease(uVar3);
  FUN_1000fb4c4(unaff_x22 + 0x4b0,&DAT_100fcb3e0,&DAT_100c50230);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058c6c4 | FUN_10058c6c4 */

void FUN_10058c6c4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  code *pcVar7;
  UUID UVar8;
  ulong uVar9;
  long *plVar10;
  UnownedSerialExecutor UVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  char *pcVar15;
  undefined8 uVar16;
  char cVar17;
  String SVar18;
  String SVar19;
  
  piVar1 = (int *)(unaff_x22 + 0x3bc);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x9e8));
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa00);
  *(undefined1 *)(unaff_x22 + 0x3b9) = 0xff;
  *(undefined8 *)(unaff_x22 + 0xa88) = 0;
  *(undefined8 *)(unaff_x22 + 0xa80) = 0;
  *(undefined8 *)(unaff_x22 + 0xa78) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x8d8) = uVar12;
  _swift_errorRetain(uVar12);
  _swift_errorRetain(uVar12);
  puVar4 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *(undefined **)(unaff_x22 + 0xa90) = puVar4;
  piVar5 = piVar1;
  _swift_dynamicCast(piVar1,unaff_x22 + 0x8d8,puVar4,PTR___type_metadata_for_System_Errno_100eae9c8,
                     6);
  if ((int)piVar5 == 0) {
    _swift_errorRelease(uVar12);
  }
  else {
    iVar2 = *piVar1;
    _swift_errorRelease(uVar12);
    if (iVar2 == 0x23) {
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(undefined8 *)(unaff_x22 + 0x8c8) = 10000000000000000;
      *(undefined8 *)(unaff_x22 + 0x8d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x898) = 0;
      *(undefined8 *)(unaff_x22 + 0x890) = 0;
      *(undefined1 *)(unaff_x22 + 0x8a0) = 1;
      pcVar7 = FUN_10058bd04;
      UVar11.unknown = (undefined *)0x0;
      uVar12 = 0;
      goto LAB_10058c810;
    }
  }
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x920) + 200);
  *(long *)(unaff_x22 + 0xaa8) = lVar13;
  if (lVar13 == 0) {
    cVar17 = *(char *)(unaff_x22 + 0x3b9);
    if (cVar17 == -1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x938);
      lVar13 = *(long *)(unaff_x22 + 0x930);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x928);
      UVar8 = Foundation::UUID::init();
      SVar18 = Foundation::UUID::get_uuidString(UVar8);
      (**(code **)(lVar13 + 8))(uVar12,uVar16);
      cVar17 = '\0';
      cVar3 = *(char *)(unaff_x22 + 0x3b9);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa88);
      pcVar15 = *(char **)(unaff_x22 + 0xa80);
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa88);
      pcVar15 = ((String *)(unaff_x22 + 0xa80))->str;
      SVar18 = *(String *)(unaff_x22 + 0xa80);
      cVar3 = cVar17;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa90);
    *(undefined8 *)(unaff_x22 + 0x8f0) = *(undefined8 *)(unaff_x22 + 0xa78);
    _swift_errorRetain();
    FUN_1005221e8(pcVar15,uVar12,cVar3);
    uVar9 = unaff_x22 + 0x7e0;
    _swift_dynamicCast(uVar9,unaff_x22 + 0x8f0,uVar16,&DAT_100eda9c8,6);
    if ((uVar9 & 1) == 0) {
      _swift_getErrorValue(*(undefined8 *)(unaff_x22 + 0xa78),unaff_x22 + 0x900,unaff_x22 + 0x830);
      SVar19 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      *(String *)(unaff_x22 + 0x570) = SVar18;
      *(char *)(unaff_x22 + 0x580) = cVar17;
      *(String *)(unaff_x22 + 0x588) = SVar19;
      *(undefined8 *)(unaff_x22 + 0x598) = 0;
      *(undefined8 *)(unaff_x22 + 0x5a0) = 4;
      *(undefined2 *)(unaff_x22 + 0x5a8) = 0x100;
      plVar10 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xad0) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10058c4ac;
      lVar13 = unaff_x22 + 0x570;
    }
    else {
      *(String *)(unaff_x22 + 0x530) = SVar18;
      *(char *)(unaff_x22 + 0x540) = cVar17;
      *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x7e8);
      *(undefined8 *)(unaff_x22 + 0x548) = *(undefined8 *)(unaff_x22 + 0x7e0);
      *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x7f0);
      *(ulong *)(unaff_x22 + 0x560) = (ulong)*(byte *)(unaff_x22 + 0x7f8);
      *(undefined2 *)(unaff_x22 + 0x568) = 0x100;
      plVar10 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xad8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10058c564;
      lVar13 = unaff_x22 + 0x530;
    }
    FUN_10058d7e8(plVar10,lVar13);
    return;
  }
  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x920) + 0xd0);
  *(long *)(unaff_x22 + 0xab0) = lVar14;
  lVar6 = lVar13;
  _swift_getObjectType();
  *(long *)(unaff_x22 + 0xab8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xac0) = *(undefined8 *)(lVar14 + 0x10);
  uVar12 = *(undefined8 *)(lVar14 + 8);
  _swift_unknownObjectRetain(lVar13);
  UVar11 = Swift::Actor::get_unownedExecutor();
  pcVar7 = FUN_10058c02c;
LAB_10058c810:
  _swift_task_switch(pcVar7,UVar11.unknown,uVar12);
  return;
}



/* Address: 0x10058c9e0 | FUN_10058c9e0 */

void FUN_10058c9e0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  int *piVar5;
  long lVar6;
  code *pcVar7;
  UUID UVar8;
  ulong uVar9;
  long *plVar10;
  UnownedSerialExecutor UVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  char *pcVar15;
  undefined8 uVar16;
  char cVar17;
  String SVar18;
  String SVar19;
  
  piVar1 = (int *)(unaff_x22 + 0x3bc);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x9e8);
  FUN_1000fb4c4(unaff_x22 + 0x630,&DAT_100fcd010,&DAT_100c534d0);
  _swift_release(uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa18);
  *(undefined1 *)(unaff_x22 + 0x3b9) = 0xff;
  *(undefined8 *)(unaff_x22 + 0xa88) = 0;
  *(undefined8 *)(unaff_x22 + 0xa80) = 0;
  *(undefined8 *)(unaff_x22 + 0xa78) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x8d8) = uVar12;
  _swift_errorRetain(uVar12);
  _swift_errorRetain(uVar12);
  puVar4 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *(undefined **)(unaff_x22 + 0xa90) = puVar4;
  piVar5 = piVar1;
  _swift_dynamicCast(piVar1,unaff_x22 + 0x8d8,puVar4,PTR___type_metadata_for_System_Errno_100eae9c8,
                     6);
  if ((int)piVar5 == 0) {
    _swift_errorRelease(uVar12);
  }
  else {
    iVar2 = *piVar1;
    _swift_errorRelease(uVar12);
    if (iVar2 == 0x23) {
      (extension_Swift)::Swift::Clock::_get_continuous();
      *(undefined8 *)(unaff_x22 + 0x8c8) = 10000000000000000;
      *(undefined8 *)(unaff_x22 + 0x8d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x898) = 0;
      *(undefined8 *)(unaff_x22 + 0x890) = 0;
      *(undefined1 *)(unaff_x22 + 0x8a0) = 1;
      pcVar7 = FUN_10058bd04;
      UVar11.unknown = (undefined *)0x0;
      uVar12 = 0;
      goto LAB_10058cb48;
    }
  }
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x920) + 200);
  *(long *)(unaff_x22 + 0xaa8) = lVar13;
  if (lVar13 == 0) {
    cVar17 = *(char *)(unaff_x22 + 0x3b9);
    if (cVar17 == -1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x938);
      lVar13 = *(long *)(unaff_x22 + 0x930);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x928);
      UVar8 = Foundation::UUID::init();
      SVar18 = Foundation::UUID::get_uuidString(UVar8);
      (**(code **)(lVar13 + 8))(uVar12,uVar16);
      cVar17 = '\0';
      cVar3 = *(char *)(unaff_x22 + 0x3b9);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa88);
      pcVar15 = *(char **)(unaff_x22 + 0xa80);
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa88);
      pcVar15 = ((String *)(unaff_x22 + 0xa80))->str;
      SVar18 = *(String *)(unaff_x22 + 0xa80);
      cVar3 = cVar17;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa90);
    *(undefined8 *)(unaff_x22 + 0x8f0) = *(undefined8 *)(unaff_x22 + 0xa78);
    _swift_errorRetain();
    FUN_1005221e8(pcVar15,uVar12,cVar3);
    uVar9 = unaff_x22 + 0x7e0;
    _swift_dynamicCast(uVar9,unaff_x22 + 0x8f0,uVar16,&DAT_100eda9c8,6);
    if ((uVar9 & 1) == 0) {
      _swift_getErrorValue(*(undefined8 *)(unaff_x22 + 0xa78),unaff_x22 + 0x900,unaff_x22 + 0x830);
      SVar19 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      *(String *)(unaff_x22 + 0x570) = SVar18;
      *(char *)(unaff_x22 + 0x580) = cVar17;
      *(String *)(unaff_x22 + 0x588) = SVar19;
      *(undefined8 *)(unaff_x22 + 0x598) = 0;
      *(undefined8 *)(unaff_x22 + 0x5a0) = 4;
      *(undefined2 *)(unaff_x22 + 0x5a8) = 0x100;
      plVar10 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xad0) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10058c4ac;
      lVar13 = unaff_x22 + 0x570;
    }
    else {
      *(String *)(unaff_x22 + 0x530) = SVar18;
      *(char *)(unaff_x22 + 0x540) = cVar17;
      *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x7e8);
      *(undefined8 *)(unaff_x22 + 0x548) = *(undefined8 *)(unaff_x22 + 0x7e0);
      *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x7f0);
      *(ulong *)(unaff_x22 + 0x560) = (ulong)*(byte *)(unaff_x22 + 0x7f8);
      *(undefined2 *)(unaff_x22 + 0x568) = 0x100;
      plVar10 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xad8) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10058c564;
      lVar13 = unaff_x22 + 0x530;
    }
    FUN_10058d7e8(plVar10,lVar13);
    return;
  }
  lVar14 = *(long *)(*(long *)(unaff_x22 + 0x920) + 0xd0);
  *(long *)(unaff_x22 + 0xab0) = lVar14;
  lVar6 = lVar13;
  _swift_getObjectType();
  *(long *)(unaff_x22 + 0xab8) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xac0) = *(undefined8 *)(lVar14 + 0x10);
  uVar12 = *(undefined8 *)(lVar14 + 8);
  _swift_unknownObjectRetain(lVar13);
  UVar11 = Swift::Actor::get_unownedExecutor();
  pcVar7 = FUN_10058c02c;
LAB_10058cb48:
  _swift_task_switch(pcVar7,UVar11.unknown,uVar12);
  return;
}



/* Address: 0x10058cd18 | FUN_10058cd18 */

void FUN_10058cd18(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x9e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x9d8);
  FUN_1005232a0(*(undefined8 *)(unaff_x22 + 0xa80),*(undefined8 *)(unaff_x22 + 0xa88),
                *(undefined1 *)(unaff_x22 + 0x3b9));
  FUN_10003bf18(uVar4,uVar2);
  _swift_errorRelease(uVar3);
  FUN_1000fb4c4(unaff_x22 + 0x4f0,&DAT_100fcb3e0,&DAT_100c50230);
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xae0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058cdc0;
  Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x8b8));
  return;
}



/* Address: 0x10058cdc0 | FUN_10058cdc0 */

void FUN_10058cdc0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xae0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x9d0) = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    pcVar1 = FUN_10058a70c;
  }
  else {
    *(long *)(lVar3 + 0xa48) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x920);
    pcVar1 = FUN_10058b788;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10058ce24 | FUN_10058ce24 */

void FUN_10058ce24(void)

{
  long *plVar1;
  undefined8 in_x4;
  long unaff_x22;
  
  plVar1 = (long *)0x7d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10058ce84;
  FUN_100594580(plVar1,unaff_x22 + 0x10,in_x4,1);
  return;
}



/* Address: 0x10058ce84 | FUN_10058ce84 */

void FUN_10058ce84(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  if (unaff_x20 == 0) {
    FUN_1000fb4c4(lVar1 + 0x10,&DAT_100fd2528,&DAT_100c60010);
  }
  else {
    _swift_errorRelease();
  }
                    /* WARNING: Could not recover jumptable at 0x00010058cee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10058cee8 | FUN_10058cee8 */

void FUN_10058cee8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  _swift_task_switch(FUN_10058cf00);
  return;
}


