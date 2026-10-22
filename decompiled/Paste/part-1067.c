/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b6f968 | FUN_100b6f968 */

void FUN_100b6f968(undefined8 param_1,_StringGuts param_2)

{
  Swift::_StringGuts::grow(0x55,param_2);
  return;
}



/* Address: 0x100b6f970 | FUN_100b6f970 */

void FUN_100b6f970(void)

{
  FUN_10003bf2c();
  return;
}



/* Address: 0x100b6f978 | FUN_100b6f978 */

void FUN_100b6f978(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100b6f980 | FUN_100b6f980 */

void FUN_100b6f980(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b6f988 | FUN_100b6f988 */

void FUN_100b6f988(ulong param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.str = (char *)(param_1 & 0xffffffffffff | 0xd000000000000000);
  SVar1.bridgeObject = param_2;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b6f990 | FUN_100b6f990 */

undefined1  [16] FUN_100b6f990(void)

{
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = unaff_x29 + -0x128;
  auVar1._8_8_ = unaff_x29 + -0xd0;
  return auVar1;
}



/* Address: 0x100b6f99c | FUN_100b6f99c */

void FUN_100b6f99c(ulong param_1,char *param_2,undefined8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)(param_1 | 0x8000000000000000);
  SVar1.str = param_2;
  SVar2.bridgeObject = param_5;
  SVar2.str = param_4;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b6f9a4 | FUN_100b6f9a4 */

void FUN_100b6f9a4(void)

{
  return;
}



/* Address: 0x100b6f9b4 | FUN_100b6f9b4 */

void FUN_100b6f9b4(void)

{
  return;
}



/* Address: 0x100b6f9c4 | FUN_100b6f9c4 */

void FUN_100b6f9c4(void)

{
  return;
}



/* Address: 0x100b6f9d4 | FUN_100b6f9d4 */

void FUN_100b6f9d4(void)

{
  long unaff_x20;
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100b6f9e0 | FUN_100b6f9e0 */

void FUN_100b6f9e0(void)

{
  return;
}



/* Address: 0x100b6f9f0 | FUN_100b6f9f0 */

void FUN_100b6f9f0(void)

{
  return;
}



/* Address: 0x100b6f9fc | FUN_100b6f9fc */

void FUN_100b6f9fc(void)

{
  return;
}



/* Address: 0x100b6fa08 | FUN_100b6fa08 */

void FUN_100b6fa08(void)

{
  long unaff_x25;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x25 + 0x18) = 0;
  *(undefined8 *)(unaff_x25 + 0x10) = 0;
  *(undefined8 *)(unaff_x29 + -0xa8) = 0;
  *(undefined8 *)(unaff_x29 + -0xb0) = 0;
  return;
}



/* Address: 0x100b6fa18 | FUN_100b6fa18 */

void FUN_100b6fa18(undefined8 param_1)

{
  _swift_dynamicCastObjCProtocolConditional(param_1,1);
  return;
}



/* Address: 0x100b6fa20 | FUN_100b6fa20 */

void FUN_100b6fa20(void)

{
  _swift_dynamicCastClass();
  return;
}



/* Address: 0x100b6fa2c | FUN_100b6fa2c */

void FUN_100b6fa2c(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b6fa34 | FUN_100b6fa34 */

void FUN_100b6fa34(void)

{
  return;
}



/* Address: 0x100b6fa40 | FUN_100b6fa40 */

void FUN_100b6fa40(void)

{
  return;
}



/* Address: 0x100b6fa4c | FUN_100b6fa4c */

void FUN_100b6fa4c(void)

{
  return;
}



/* Address: 0x100b6fa60 | FUN_100b6fa60 */

void FUN_100b6fa60(void)

{
  undefined8 in_x4;
  
  FUN_100b6730c(in_x4);
  return;
}



/* Address: 0x100b6fa68 | FUN_100b6fa68 */

void FUN_100b6fa68(void)

{
  FUN_100b84df8();
  return;
}



/* Address: 0x100b6fa70 | FUN_100b6fa70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6fa70(void)

{
  return 0;
}



/* Address: 0x100b6fa78 | FUN_100b6fa78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6fa78(void)

{
  return 0;
}



/* Address: 0x100b6fa80 | FUN_100b6fa80 */

void FUN_100b6fa80(void)

{
  long unaff_x19;
  long unaff_x24;
  
  _swift_arrayInitWithCopy(unaff_x24 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Address: 0x100b6fa94 | FUN_100b6fa94 */

void FUN_100b6fa94(void)

{
  _swift_arrayInitWithCopy();
  return;
}



/* Address: 0x100b6faa8 | FUN_100b6faa8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6faa8(void)

{
  return 0;
}



/* Address: 0x100b6fab0 | FUN_100b6fab0 */

void FUN_100b6fab0(void)

{
  long unaff_x29;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x29 + -400),*(undefined8 *)(unaff_x29 + -0x180));
  return;
}



/* Address: 0x100b6fac4 | FUN_100b6fac4 */

void FUN_100b6fac4(void)

{
  ulong unaff_x19;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b6fad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((unaff_x19 & 0xffffffffffffff8) + 0x20);
  return;
}



/* Address: 0x100b6fad8 | FUN_100b6fad8 */

void FUN_100b6fad8(void)

{
  return;
}



/* Address: 0x100b6fae4 | FUN_100b6fae4 */

void FUN_100b6fae4(void)

{
  return;
}



/* Address: 0x100b6faf0 | FUN_100b6faf0 */

void FUN_100b6faf0(void)

{
  return;
}



/* Address: 0x100b6fafc | FUN_100b6fafc */

void FUN_100b6fafc(void)

{
  return;
}



/* Address: 0x100b6fb08 | FUN_100b6fb08 */

void FUN_100b6fb08(void)

{
  return;
}



/* Address: 0x100b6fb14 | FUN_100b6fb14 */

void FUN_100b6fb14(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b6fb1c | FUN_100b6fb1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6fb1c(void)

{
  return 0;
}



/* Address: 0x100b6fb24 | FUN_100b6fb24 */

void FUN_100b6fb24(long param_1)

{
  long unaff_x23;
  long unaff_x29;
  
  FUN_10000cbfc(*(long *)(unaff_x23 + 0x38) + param_1 * 0x20,unaff_x29 + -0xb0);
  return;
}



/* Address: 0x100b6fb34 | FUN_100b6fb34 */

void FUN_100b6fb34(void)

{
  FUN_100b6cbac();
  return;
}



/* Address: 0x100b6fb3c | FUN_100b6fb3c */

void FUN_100b6fb3c(void)

{
  long unaff_x19;
  long unaff_x22;
  
  _swift_arrayInitWithCopy(unaff_x22 + 0x20,unaff_x19 + 0x20);
  return;
}



/* Address: 0x100b6fb4c | FUN_100b6fb4c */

void FUN_100b6fb4c(void)

{
  return;
}



/* Address: 0x100b6fb68 | FUN_100b6fb68 */

void FUN_100b6fb68(void)

{
  long unaff_x19;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b6fb74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x19 + 0x20);
  return;
}



/* Address: 0x100b6fb78 | FUN_100b6fb78 */

String FUN_100b6fb78(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x100b6fb88 | FUN_100b6fb88 */

void FUN_100b6fb88(void)

{
  return;
}



/* Address: 0x100b6fba4 | FUN_100b6fba4 */

void FUN_100b6fba4(void)

{
  _swift_willThrow();
  return;
}



/* Address: 0x100b6fbac | FUN_100b6fbac */

void FUN_100b6fbac(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b6fbb4 | FUN_100b6fbb4 */

void FUN_100b6fbb4(Hasher param_1)

{
  Swift::Hasher::_finalize(param_1);
  return;
}



/* Address: 0x100b6fbbc | FUN_100b6fbbc */

void FUN_100b6fbbc(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b6fbc4 | FUN_100b6fbc4 */

void FUN_100b6fbc4(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b6fbcc | FUN_100b6fbcc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6fbcc(void)

{
  return 0;
}



/* Address: 0x100b6fbd4 | FUN_100b6fbd4 */

void FUN_100b6fbd4(void)

{
  _swift_errorRelease();
  return;
}



/* Address: 0x100b6fbdc | FUN_100b6fbdc */

void FUN_100b6fbdc(void)

{
  return;
}



/* Address: 0x100b6fbe8 | FUN_100b6fbe8 */

void FUN_100b6fbe8(void)

{
  return;
}



/* Address: 0x100b6fbf4 | FUN_100b6fbf4 */

void FUN_100b6fbf4(void)

{
  long unaff_x29;
  
  FUN_100b6f69c(unaff_x29 + -0xd0);
  return;
}



/* Address: 0x100b6fbfc | FUN_100b6fbfc */

void FUN_100b6fbfc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b6fc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b6fc0c | FUN_100b6fc0c */

void FUN_100b6fc0c(void)

{
  _malloc_size();
  return;
}



/* Address: 0x100b6fc14 | FUN_100b6fc14 */

void FUN_100b6fc14(void)

{
  long unaff_x29;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x29 + -0x100),*(undefined8 *)(unaff_x29 + -0x108));
  return;
}



/* Address: 0x100b6fc24 | FUN_100b6fc24 */

void FUN_100b6fc24(void)

{
  return;
}



/* Address: 0x100b6fc34 | FUN_100b6fc34 */

void FUN_100b6fc34(void)

{
  return;
}



/* Address: 0x100b6fc44 | FUN_100b6fc44 */

void FUN_100b6fc44(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -200) = 0xe000000000000000;
  return;
}



/* Address: 0x100b6fc54 | FUN_100b6fc54 */

void FUN_100b6fc54(void)

{
  return;
}



/* Address: 0x100b6fc64 | FUN_100b6fc64 */

undefined8 FUN_100b6fc64(void)

{
  return 0;
}



/* Address: 0x100b6fc7c | FUN_100b6fc7c */

undefined8 FUN_100b6fc7c(void)

{
  long unaff_x29;
  
  return *(undefined8 *)(unaff_x29 + -0x148);
}



/* Address: 0x100b6fc88 | FUN_100b6fc88 */

undefined1  [16] FUN_100b6fc88(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_1 - 0x20U | 0x8000000000000000;
  auVar1._0_8_ = 0xd000000000000046;
  return auVar1;
}


