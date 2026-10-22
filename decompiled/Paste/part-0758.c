/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100859fac | FUN_100859fac */

void FUN_100859fac(Hasher param_1,undefined8 param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  
  SVar1.bridgeObject = param_5;
  SVar1.str = param_4;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x100859fb8 | FUN_100859fb8 */

void FUN_100859fb8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = param_4;
  SVar1.str = param_3;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10085a004 | FUN_10085a004 */

void FUN_10085a004(void)

{
  String SVar1;
  Hasher into;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  SVar1 = *(String *)(unaff_x20 + 0x10);
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10085a04c | FUN_10085a04c */

void FUN_10085a04c(Hasher param_1)

{
  long unaff_x20;
  
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10085a054 | FUN_10085a054 */

void FUN_10085a054(__int64 param_1)

{
  String SVar1;
  Hasher into;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  SVar1 = *(String *)(unaff_x20 + 0x10);
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10085a098 | FUN_10085a098 */

void FUN_10085a098(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10085af9c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Address: 0x10085a0c0 | FUN_10085a0c0 */

void FUN_10085a0c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
  *param_1 = param_2;
  param_1[1] = param_3;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x10085a0d8 | FUN_10085a0d8 */

void FUN_10085a0d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x10085a0f0 | FUN_10085a0f0 */

undefined8 FUN_10085a0f0(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_10085b028();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x10085a118 | FUN_10085a118 */

void FUN_10085a118(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10085b028();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x10085a144 | FUN_10085a144 */

undefined8 FUN_10085a144(void)

{
  return 0x747065636341;
}



/* Address: 0x10085a168 | FUN_10085a168 */

undefined8 FUN_10085a168(void)

{
  return 0x452d747065636341;
}



/* Address: 0x10085a1a0 | FUN_10085a1a0 */

undefined8 FUN_10085a1a0(void)

{
  return 0x4c2d747065636341;
}



/* Address: 0x10085a1d8 | FUN_10085a1d8 */

undefined8 FUN_10085a1d8(void)

{
  return 0x522d747065636341;
}



/* Address: 0x10085a210 | FUN_10085a210 */

undefined8 FUN_10085a210(void)

{
  return 0xd000000000000020;
}



/* Address: 0x10085a244 | FUN_10085a244 */

undefined8 FUN_10085a244(void)

{
  return 0xd00000000000001c;
}



/* Address: 0x10085a278 | FUN_10085a278 */

undefined8 FUN_10085a278(void)

{
  return 0xd00000000000001c;
}



/* Address: 0x10085a2ac | FUN_10085a2ac */

undefined8 FUN_10085a2ac(void)

{
  return 0xd00000000000001b;
}



/* Address: 0x10085a2e0 | FUN_10085a2e0 */

undefined8 FUN_10085a2e0(void)

{
  return 0xd00000000000001d;
}



/* Address: 0x10085a314 | FUN_10085a314 */

undefined8 FUN_10085a314(void)

{
  return 0xd000000000000016;
}



/* Address: 0x10085a348 | FUN_10085a348 */

undefined8 FUN_10085a348(void)

{
  return 0xd00000000000001e;
}



/* Address: 0x10085a37c | FUN_10085a37c */

undefined8 FUN_10085a37c(void)

{
  return 0xd00000000000001d;
}



/* Address: 0x10085a3b0 | FUN_10085a3b0 */

undefined8 FUN_10085a3b0(void)

{
  return 0x656741;
}



/* Address: 0x10085a3cc | FUN_10085a3cc */

undefined8 FUN_10085a3cc(void)

{
  return 0x776f6c6c41;
}



/* Address: 0x10085a3f0 | FUN_10085a3f0 */

undefined8 FUN_10085a3f0(void)

{
  return 0xd000000000000013;
}



/* Address: 0x10085a424 | FUN_10085a424 */

undefined8 FUN_10085a424(void)

{
  return 0x7a69726f68747541;
}



/* Address: 0x10085a45c | FUN_10085a45c */

undefined8 FUN_10085a45c(void)

{
  return 0xd000000000000014;
}



/* Address: 0x10085a490 | FUN_10085a490 */

undefined8 FUN_10085a490(void)

{
  return 0x6f432d6568636143;
}



/* Address: 0x10085a4c8 | FUN_10085a4c8 */

undefined8 FUN_10085a4c8(void)

{
  return 0x697463656e6e6f43;
}



/* Address: 0x10085a4fc | FUN_10085a4fc */

undefined8 FUN_10085a4fc(void)

{
  return 0xd000000000000013;
}



/* Address: 0x10085a530 | FUN_10085a530 */

undefined8 FUN_10085a530(void)

{
  return 0xd000000000000010;
}



/* Address: 0x10085a564 | FUN_10085a564 */

undefined8 FUN_10085a564(void)

{
  return 0xd000000000000010;
}



/* Address: 0x10085a598 | FUN_10085a598 */

undefined8 FUN_10085a598(void)

{
  return 0x2d746e65746e6f43;
}



/* Address: 0x10085a5dc | FUN_10085a5dc */

undefined8 FUN_10085a5dc(void)

{
  return 0xd000000000000010;
}



/* Address: 0x10085a610 | FUN_10085a610 */

undefined8 FUN_10085a610(void)

{
  return 0x2d746e65746e6f43;
}



/* Address: 0x10085a654 | FUN_10085a654 */

undefined8 FUN_10085a654(void)

{
  return 0xd000000000000017;
}



/* Address: 0x10085a688 | FUN_10085a688 */

undefined8 FUN_10085a688(void)

{
  return 0xd000000000000023;
}



/* Address: 0x10085a6bc | FUN_10085a6bc */

undefined8 FUN_10085a6bc(void)

{
  return 0x2d746e65746e6f43;
}



/* Address: 0x10085a6f8 | FUN_10085a6f8 */

undefined8 FUN_10085a6f8(void)

{
  return 0x65696b6f6f43;
}



/* Address: 0x10085a71c | FUN_10085a71c */

undefined8 FUN_10085a71c(void)

{
  return 0xd00000000000001c;
}



/* Address: 0x10085a750 | FUN_10085a750 */

undefined8 FUN_10085a750(void)

{
  return 0x65746144;
}



/* Address: 0x10085a76c | FUN_10085a76c */

undefined8 FUN_10085a76c(void)

{
  return 0x616e6f6974636944;
}



/* Address: 0x10085a7b0 | FUN_10085a7b0 */

undefined8 FUN_10085a7b0(void)

{
  return 0x61442d796c726145;
}



/* Address: 0x10085a7e4 | FUN_10085a7e4 */

undefined8 FUN_10085a7e4(void)

{
  return 0x67615445;
}



/* Address: 0x10085a800 | FUN_10085a800 */

undefined8 FUN_10085a800(void)

{
  return 0x746365707845;
}



/* Address: 0x10085a824 | FUN_10085a824 */

undefined8 FUN_10085a824(void)

{
  return 0x73657269707845;
}



/* Address: 0x10085a850 | FUN_10085a850 */

undefined8 FUN_10085a850(void)

{
  return 0x6d6f7246;
}



/* Address: 0x10085a86c | FUN_10085a86c */

undefined8 FUN_10085a86c(void)

{
  return 0x74736f48;
}



/* Address: 0x10085a888 | FUN_10085a888 */

undefined8 FUN_10085a888(void)

{
  return 0x686374614d2d6649;
}



/* Address: 0x10085a8b4 | FUN_10085a8b4 */

undefined8 FUN_10085a8b4(void)

{
  return 0xd000000000000011;
}



/* Address: 0x10085a8e8 | FUN_10085a8e8 */

undefined8 FUN_10085a8e8(void)

{
  return 0x2d656e6f4e2d6649;
}



/* Address: 0x10085a92c | FUN_10085a92c */

undefined8 FUN_10085a92c(void)

{
  return 0x65676e61522d6649;
}



/* Address: 0x10085a958 | FUN_10085a958 */

undefined8 FUN_10085a958(void)

{
  return 0xd000000000000013;
}



/* Address: 0x10085a98c | FUN_10085a98c */

undefined8 FUN_10085a98c(void)

{
  return 0x646f4d2d7473614c;
}



/* Address: 0x10085a9c4 | FUN_10085a9c4 */

undefined8 FUN_10085a9c4(void)

{
  return 0x6e6f697461636f4c;
}



/* Address: 0x10085a9f0 | FUN_10085a9f0 */

undefined8 FUN_10085a9f0(void)

{
  return 0x77726f462d78614d;
}



/* Address: 0x10085aa24 | FUN_10085aa24 */

undefined8 FUN_10085aa24(void)

{
  return 0x6e696769724f;
}



/* Address: 0x10085aa48 | FUN_10085aa48 */

undefined8 FUN_10085aa48(void)

{
  return 0x797469726f697250;
}



/* Address: 0x10085aa74 | FUN_10085aa74 */

undefined8 FUN_10085aa74(void)

{
  return 0xd000000000000012;
}



/* Address: 0x10085aaa8 | FUN_10085aaa8 */

undefined8 FUN_10085aaa8(void)

{
  return 0xd000000000000019;
}



/* Address: 0x10085aadc | FUN_10085aadc */

undefined8 FUN_10085aadc(void)

{
  return 0xd000000000000013;
}



/* Address: 0x10085ab10 | FUN_10085ab10 */

undefined8 FUN_10085ab10(void)

{
  return 0x74532d79786f7250;
}



/* Address: 0x10085ab44 | FUN_10085ab44 */

undefined8 FUN_10085ab44(void)

{
  return 0x65676e6152;
}



/* Address: 0x10085ab68 | FUN_10085ab68 */

undefined8 FUN_10085ab68(void)

{
  return 0x72657265666552;
}


