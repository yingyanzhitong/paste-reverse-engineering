/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b93fc4 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fc8 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fcc | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fd0 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fd4 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fd8 | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fdc | thunk_FUN_100b93d08 */

void thunk_FUN_100b93d08(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b93fe0 | thunk_FUN_100b93d74 */

void thunk_FUN_100b93d74(void)

{
  FUN_100b93d74();
  return;
}



/* Address: 0x100b93fe4 | thunk_FUN_100b90b48 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_100b90b48(undefined8 param_1)

{
  code *unaff_x21;
  
  FUN_100b940b0();
  FUN_100b78d78();
  (*unaff_x21)();
  _swift_release();
  FUN_100b6faa8();
  return param_1;
}



/* Address: 0x100b93fe8 | thunk_FUN_100b91658 */

void thunk_FUN_100b91658(undefined8 param_1)

{
  code *unaff_x21;
  
  FUN_100b940b0();
  FUN_100b78d78();
  (*unaff_x21)();
  _swift_release();
  FUN_100b78d38(param_1);
  return;
}



/* Address: 0x100b93fec | thunk_FUN_100b93e28 */

undefined1 thunk_FUN_100b93e28(undefined8 param_1)

{
  long unaff_x20;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_29,&uStack_28);
  return uStack_29;
}



/* Address: 0x100b93ff0 | thunk_FUN_100b93d94 */

void thunk_FUN_100b93d94(void)

{
  undefined8 uStack_30;
  
  FUN_100b94048();
  FUN_100b6f9f0(uStack_30);
  return;
}



/* Address: 0x100b93ff4 | thunk_FUN_100b93e60 */

void thunk_FUN_100b93e60(void)

{
  FUN_100b93e60();
  return;
}



/* Address: 0x100b93ff8 | thunk_FUN_100405dac */

void thunk_FUN_100405dac(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100405db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x100b93ffc | thunk_FUN_100b93d2c */

void thunk_FUN_100b93d2c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x100b94000 | thunk_FUN_100b93d10 */

void thunk_FUN_100b93d10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b8ecf0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b94004 | FUN_100b94004 */

void FUN_100b94004(void)

{
  Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  return;
}



/* Address: 0x100b94020 | FUN_100b94020 */

void FUN_100b94020(undefined8 param_1)

{
  _swift_beginAccess(param_1,&stack0x00000008,1,0);
  return;
}



/* Address: 0x100b94030 | FUN_100b94030 */

void FUN_100b94030(long param_1)

{
  long unaff_x19;
  
  FUN_100004550(*(undefined8 *)(unaff_x19 + param_1),((undefined8 *)(unaff_x19 + param_1))[1]);
  return;
}



/* Address: 0x100b9403c | FUN_100b9403c */

void FUN_100b9403c(long param_1)

{
  long unaff_x19;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x19 + param_1 + 8));
  return;
}



/* Address: 0x100b94048 | FUN_100b94048 */

void FUN_100b94048(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000100b94058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x10))(&stack0x00000008);
  return;
}



/* Address: 0x100b9405c | FUN_100b9405c */

void FUN_100b9405c(long param_1)

{
  long unaff_x21;
  
  *(undefined8 *)(unaff_x21 + param_1) = 0;
  ((undefined8 *)(unaff_x21 + param_1))[1] = 0;
  return;
}



/* Address: 0x100b94068 | FUN_100b94068 */

void FUN_100b94068(void)

{
  FUN_100b6730c();
  return;
}



/* Address: 0x100b94070 | FUN_100b94070 */

undefined1  [16] FUN_100b94070(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &stack0x00000008;
  auVar1._0_8_ = unaff_x20 + param_1;
  return auVar1;
}



/* Address: 0x100b94080 | FUN_100b94080 */

void FUN_100b94080(void)

{
  FUN_100b673ec(0);
  return;
}



/* Address: 0x100b94088 | FUN_100b94088 */

void FUN_100b94088(long param_1)

{
  long unaff_x19;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x19 + param_1));
  return;
}



/* Address: 0x100b94090 | FUN_100b94090 */

void FUN_100b94090(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9409c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,param_2,1);
  return;
}



/* Address: 0x100b940a0 | FUN_100b940a0 */

void FUN_100b940a0(undefined8 *param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b940ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Address: 0x100b940b0 | FUN_100b940b0 */

void FUN_100b940b0(long param_1)

{
  _swift_retain(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b940c0 | FUN_100b940c0 */

void FUN_100b940c0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b940cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b940d0 | FUN_100b940d0 */

void FUN_100b940d0(void)

{
  return;
}



/* Address: 0x100b940e0 | FUN_100b940e0 */

void FUN_100b940e0(void)

{
  long unaff_x19;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x19 + 8));
  return;
}



/* Address: 0x100b940ec | FUN_100b940ec */

void FUN_100b940ec(void)

{
  long unaff_x19;
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,*(SEL *)(unaff_x19 + 400));
  return;
}



/* Address: 0x100b940f8 | FUN_100b940f8 */

void FUN_100b940f8(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b94100 | FUN_100b94100 */

void FUN_100b94100(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100b94104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b94108 | FUN_100b94108 */

void FUN_100b94108(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b94114 | FUN_100b94114 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b94114(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x100b9411c | FUN_100b9411c */

void FUN_100b9411c(void)

{
  _swift_bridgeObjectRelease_n();
  return;
}



/* Address: 0x100b94128 | FUN_100b94128 */

undefined1 * FUN_100b94128(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100b94184(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100b94184 | FUN_100b94184 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b94778) */
/* WARNING: Removing unreachable block (ram,0x000100b94780) */
/* WARNING: Removing unreachable block (ram,0x000100b94584) */
/* WARNING: Removing unreachable block (ram,0x000100b946e8) */
/* WARNING: Removing unreachable block (ram,0x000100b94598) */
/* WARNING: Removing unreachable block (ram,0x000100b9491c) */
/* WARNING: Removing unreachable block (ram,0x000100b94290) */
/* WARNING: Removing unreachable block (ram,0x000100b945a0) */

ID FUN_100b94184(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ID self;
  NSString *pNVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  NSArray *pNVar9;
  code *pcVar10;
  NSDictionary *pNVar11;
  ID unaff_x20;
  long unaff_x21;
  long lVar12;
  undefined1 auStack_a0 [16];
  long alStack_90 [2];
  undefined *local_80;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar4 = &DAT_101045f60;
  FUN_100b6730c();
  lVar12 = *(long *)(puVar4 + -8);
  lVar2 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _objc_allocWithZone();
  self = _objc_msgSend(unaff_x20,"init");
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100b94f00();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58 = 0;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setSymbolAddress:",pNVar5);
    local_58 = 1;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setFileName:",pNVar5);
    local_58 = 2;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setFunction:",pNVar5);
    local_58 = 3;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setModule:",pNVar5);
    local_58 = 4;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setPackage:",pNVar5);
    local_58 = 5;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setImageAddress:",pNVar5);
    local_58 = 6;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setPlatform:",pNVar5);
    local_58 = 7;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setInstructionAddress:",pNVar5);
    uVar6 = 0;
    local_61 = 8;
    FUN_100b7e4f0(0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,uVar6);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setLineNumber:",lVar1);
    FUN_10001486c(lVar3);
    local_61 = 9;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,uVar6);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setColumnNumber:",lVar1);
    FUN_10001486c(lVar3);
    local_58 = 10;
    puVar7 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58);
    if (puVar7 == (undefined *)0x0) {
      pNVar5 = (NSString *)0x0;
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar7);
    }
    _objc_msgSend(self,"setContextLine:",pNVar5);
    puVar7 = &DAT_101044808;
    FUN_100b6730c();
    local_61 = 0xb;
    puVar8 = puVar7;
    FUN_100b79e64();
    local_80 = puVar8;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar7,&local_61,puVar4,puVar7,puVar8)
    ;
    lVar1 = CONCAT71(uStack_57,local_58);
    if (lVar1 == 0) {
      pNVar9 = (NSArray *)0x0;
    }
    else {
      pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar1);
    }
    _objc_msgSend(self,"setPreContext:",pNVar9);
    local_61 = 0xc;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,puVar7,&local_61,puVar4,puVar7,local_80);
    lVar1 = CONCAT71(uStack_57,local_58);
    if (lVar1 == 0) {
      pNVar9 = (NSArray *)0x0;
    }
    else {
      pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar1);
    }
    _objc_msgSend(self,"setPostContext:",pNVar9);
    *(long *)((long)alStack_90 + lVar2) = (long)&local_80 + lVar2;
    pcVar10 = FUN_100b94f40;
    FUN_100bd03e0(FUN_100b94f40,auStack_a0 + lVar2);
    if (pcVar10 == (code *)0x0) {
      pNVar11 = (NSDictionary *)0x0;
    }
    else {
      pNVar11 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pcVar10);
    }
    _objc_msgSend(self,"setVars:",pNVar11);
    local_61 = 0xe;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,uVar6);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setInApp:",lVar1);
    FUN_10001486c(lVar3);
    local_61 = 0xf;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100f3d290,&local_61,puVar4,&DAT_100f3d290,uVar6);
    lVar3 = CONCAT71(uStack_57,local_58);
    lVar1 = 0;
    if (lVar3 != 1) {
      lVar1 = lVar3;
    }
    _objc_msgSend(self,"setStackStart:",lVar1);
    FUN_10001486c(lVar3);
    (**(code **)(lVar12 + 8))((long)&local_80 + lVar2,puVar4);
  }
  FUN_100004594(param_1);
  return self;
}



/* Address: 0x100b94af8 | _TtC6Sentry14FrameDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry14FrameDecodable::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b94b18 | FUN_100b94b18 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b94b18(void)

{
  return ZEXT816(0x100fa1458);
}



/* Address: 0x100b94b38 | FUN_100b94b38 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b94b6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100b94b38(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (0xf < uVar1) {
    uVar1 = 0x10;
  }
  return uVar1;
}



/* Address: 0x100b94b94 | thunk_FUN_100b94b38 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b94b6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100b94b38(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (0xf < uVar1) {
    uVar1 = 0x10;
  }
  return uVar1;
}



/* Address: 0x100b94b98 | FUN_100b94b98 */

/* WARNING: Removing unreachable block (ram,0x000100b94f10) */
/* WARNING: Removing unreachable block (ram,0x000100b94fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100b94b98(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *in_x4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *unaff_x19;
  byte *unaff_x20;
  char *unaff_x21;
  char *unaff_x22;
  undefined *unaff_x23;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined4 in_stack_00000004;
  char *in_stack_00000008;
  
  pcVar4 = (char *)0xeb00000000726464;
  pcVar1 = &DAT_615f6c6f626d7973;
  pcVar7 = (char *)(param_1 & 0xff);
  pcVar3 = pcVar1;
  switch(pcVar7) {
  case (char *)0x0:
    goto switchD_100b94bd0_caseD_0;
  default:
    pcVar4 = &DAT_e800000000000000;
  case (char *)0x3c:
  case (char *)0x4a:
  case (char *)0x70:
  case (char *)0x7e:
  case (char *)0x98:
  case (char *)0xa6:
  case (char *)0xde:
    pcVar1 = (char *)0x656c6966;
    goto switchD_100b94bd0_caseD_32;
  case (char *)0x2:
    pcVar4 = &DAT_e800000000000000;
    pcVar1 = (char *)0x7566;
  case (char *)0x64:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x636e0000);
    goto switchD_100b94bd0_caseD_2e;
  case (char *)0x3:
    SVar15.bridgeObject = &DAT_e600000000000000;
    SVar15.str = (char *)0x656c75646f6d;
    return SVar15;
  case (char *)0x4:
  case (char *)0x19:
  case (char *)0xac:
    pcVar4 = &DAT_e700000000000000;
  case (char *)0x2c:
    SVar11.bridgeObject = pcVar4;
    SVar11.str = (char *)0x6567616b636170;
    return SVar11;
  case (char *)0x5:
    pcVar4 = (char *)0xea00000000007264;
    pcVar1 = (char *)0x6d69;
  case (char *)0x54:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x67610000);
    goto switchD_100b94bd0_caseD_22;
  case (char *)0x6:
  case (char *)0x5a:
    SVar19.bridgeObject = &DAT_e800000000000000;
    SVar19.str = (char *)0x6d726f6674616c70;
    return SVar19;
  case (char *)0x7:
    SVar16.bridgeObject = (void *)0x8000000100d90b50;
    SVar16.str = (char *)0xd000000000000010;
    return SVar16;
  case (char *)0x8:
    pcVar4 = &DAT_e600000000000000;
    pcVar1 = (char *)0x656e696c;
  case (char *)0xe4:
    SVar21.str = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x6f6e00000000);
    SVar21.bridgeObject = pcVar4;
    return SVar21;
  case (char *)0x9:
    SVar12.bridgeObject = &DAT_e500000000000000;
    SVar12.str = (char *)0x6f6e6c6f63;
    return SVar12;
  case (char *)0xa:
    pcVar4 = (char *)0xec000000656e696c;
  case (char *)0xd0:
    SVar20.bridgeObject = pcVar4;
    SVar20.str = (char *)0x5f747865746e6f63;
    return SVar20;
  case (char *)0xb:
    pcVar7 = (char *)0x7261;
  case (char *)0x12:
    pcVar7 = (char *)((ulong)pcVar7 | 0xeb00000000740000);
    goto switchD_100b94bd0_caseD_13;
  case (char *)0xc:
    pcVar4 = (char *)0x6574;
  case (char *)0x18:
    pcVar4 = (char *)((ulong)pcVar4 & 0xffff0000ffff | 0xec00000074780000);
    uVar2 = 0x635f74736f70;
    break;
  case (char *)0xd:
    SVar18.bridgeObject = &DAT_e400000000000000;
    SVar18.str = (char *)0x73726176;
    return SVar18;
  case (char *)0xe:
    pcVar4 = &DAT_e600000000000000;
  case (char *)0xca:
    pcVar1 = (char *)0x615f6e69;
    goto switchD_100b94bd0_caseD_10;
  case (char *)0xf:
    pcVar1 = (char *)0x74735f6b63617473;
  case (char *)0x30:
  case (char *)0xb5:
  case (char *)0xed:
    pcVar4 = (char *)0x7261;
    goto switchD_100b94bd0_caseD_31;
  case (char *)0x10:
  case (char *)0x40:
  case (char *)0xc8:
    goto switchD_100b94bd0_caseD_10;
  case (char *)0x13:
    goto switchD_100b94bd0_caseD_13;
  case (char *)0x14:
    goto switchD_100b94bd0_caseD_14;
  case (char *)0x15:
  case (char *)0xa0:
    goto switchD_100b94bd0_caseD_15;
  case (char *)0x17:
    goto switchD_100b94bd0_caseD_17;
  case (char *)0x1d:
    goto switchD_100b94bd0_caseD_1d;
  case (char *)0x1e:
    goto switchD_100b94bd0_caseD_1e;
  case (char *)0x1f:
  case (char *)0x27:
    goto switchD_100b94bd0_caseD_1f;
  case (char *)0x20:
    goto switchD_100b94bd0_caseD_20;
  case (char *)0x21:
  case (char *)0x23:
  case (char *)0x2a:
  case (char *)0x5b:
    goto switchD_100b94bd0_caseD_21;
  case (char *)0x22:
  case (char *)0x44:
  case (char *)0x52:
  case (char *)0x86:
  case (char *)0xae:
  case (char *)0xe6:
    goto switchD_100b94bd0_caseD_22;
  case (char *)0x24:
    goto switchD_100b94bd0_caseD_24;
  case (char *)0x25:
  case (char *)0x55:
    goto switchD_100b94bd0_caseD_25;
  case (char *)0x26:
  case (char *)0x56:
    pcVar4 = (char *)(ulong)*unaff_x20;
    goto switchD_100b94bd0_caseD_21;
  case (char *)0x28:
    pcVar1 = (char *)(ulong)*unaff_x20;
    goto switchD_100b94bd0_caseD_24;
  case (char *)0x2e:
  case (char *)0x42:
  case (char *)0x62:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xb2:
  case (char *)0xc6:
  case (char *)0xce:
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    goto switchD_100b94bd0_caseD_2e;
  case (char *)0x31:
  case (char *)0x65:
  case (char *)0x8d:
    goto switchD_100b94bd0_caseD_31;
  case (char *)0x32:
  case (char *)0x3a:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x8e:
  case (char *)0x96:
  case (char *)0xb6:
  case (char *)0xbe:
  case (char *)0xc0:
  case (char *)0xee:
  case (char *)0xf6:
    goto switchD_100b94bd0_caseD_32;
  case (char *)0x45:
  case (char *)0xfc:
    goto switchD_100b94bd0_caseD_45;
  case (char *)0x46:
  case (char *)0x7a:
  case (char *)0xa2:
  case (char *)0xd2:
  case (char *)0xda:
    goto switchD_100b94bd0_caseD_46;
  case (char *)0x47:
  case (char *)0x7b:
  case (char *)0xa3:
  case (char *)0xd3:
  case (char *)0xdb:
    goto switchD_100b94bd0_caseD_47;
  case (char *)0x50:
    goto switchD_100b94bd0_caseD_50;
  case (char *)0x57:
    unaff_x19 = pcVar7;
  case (char *)0x29:
    pcVar4 = _DAT_615f6c6f626d797b;
    pcVar7 = (char *)CONCAT35(uRam615f6c6f626d7978,
                              CONCAT23(uRam615f6c6f626d7976,
                                       CONCAT12(uRam615f6c6f626d7975,
                                                CONCAT11(DAT_615f6c6f626d7974,DAT_615f6c6f626d7973))
                                      ));
    goto switchD_100b94bd0_caseD_20;
  case (char *)0x58:
    goto switchD_100b94bd0_caseD_58;
  case (char *)0x59:
    FUN_100bed588();
    SVar25.bridgeObject = pcVar4;
    SVar25.str = pcVar1;
    return SVar25;
  case (char *)0x5c:
    goto switchD_100b94bd0_caseD_5c;
  case (char *)0x5d:
    pcVar1 = (char *)(ulong)*unaff_x20;
    unaff_x19 = pcVar7;
  case (char *)0xd8:
    FUN_100b94b98();
switchD_100b94bd0_caseD_5c:
    *(char **)unaff_x19 = pcVar1;
    *(char **)(unaff_x19 + 8) = pcVar4;
    SVar27.bridgeObject = pcVar4;
    SVar27.str = pcVar1;
    return SVar27;
  case (char *)0x60:
    goto switchD_100b94bd0_caseD_60;
  case (char *)0x61:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xb1:
  case (char *)0xb4:
  case (char *)0xc5:
  case (char *)0xcd:
  case (char *)0xd5:
  case (char *)0xe9:
  case (char *)0xfd:
    *(undefined1 **)pcVar7 = &DAT_615f6c6f626d7973;
  case (char *)0x2d:
  case (char *)0x41:
  case (char *)0x51:
  case (char *)0x85:
  case (char *)0x88:
switchD_100b94bd0_caseD_ad:
    SVar31.bridgeObject = (void *)0xeb00000000726464;
    SVar31.str = &DAT_615f6c6f626d7973;
    return SVar31;
  case (char *)0x74:
    goto switchD_100b94bd0_caseD_74;
  case (char *)0x78:
    pcVar1 = (char *)(ulong)DAT_615f6c6f626d7973;
    goto switchD_100b94bd0_caseD_1f;
  case (char *)0x79:
  case (char *)0xa1:
    goto switchD_100b94bd0_caseD_79;
  case (char *)0x84:
    goto switchD_100b94bd0_caseD_84;
  case (char *)0x9c:
    SVar30.bridgeObject = (void *)0xeb00000000726464;
    SVar30.str = &DAT_615f6c6f626d7973;
    return SVar30;
  case (char *)0xad:
  case (char *)0xe5:
    goto switchD_100b94bd0_caseD_ad;
  case (char *)0xb0:
    FUN_100b94128();
    if (unaff_x21 == (char *)0x0) {
      *(char **)pcVar7 = pcVar1;
    }
    SVar28.bridgeObject = pcVar4;
    SVar28.str = pcVar1;
    return SVar28;
  case (char *)0xc4:
  case (char *)0xcc:
  case (char *)0xd4:
    goto switchD_100b94bd0_caseD_c4;
  case (char *)0xc9:
    pcVar7 = (char *)0x726473;
switchD_100b94bd0_caseD_74:
    uVar5 = 2;
    if (0xfffeff < (uint)pcVar7) {
      uVar5 = 4;
    }
    if ((uint)pcVar7 >> 8 < 0xff) {
      uVar5 = 1;
    }
    pcVar7 = (char *)(ulong)uVar5;
    if (uVar5 == 4) {
      uVar5 = CONCAT22(uRam615f6c6f626d7976,CONCAT11(uRam615f6c6f626d7975,DAT_615f6c6f626d7974));
joined_r0x000100b94fb0:
      if (uVar5 != 0) {
LAB_100b94fb4:
        iVar6 = ((uint)DAT_615f6c6f626d7973 | uVar5 << 8) - 0x10;
        goto LAB_100b94fd8;
      }
    }
    else {
switchD_100b94bd0_caseD_46:
      if ((int)pcVar7 != 2) {
        uVar5 = (uint)DAT_615f6c6f626d7974;
        goto joined_r0x000100b94fb0;
      }
switchD_100b94bd0_caseD_60:
      uVar5 = (uint)CONCAT11(uRam615f6c6f626d7975,DAT_615f6c6f626d7974);
      if (CONCAT11(uRam615f6c6f626d7975,DAT_615f6c6f626d7974) != 0) goto LAB_100b94fb4;
    }
    pcVar7 = (char *)(ulong)DAT_615f6c6f626d7973;
switchD_100b94bd0_caseD_47:
    iVar6 = (uint)pcVar7 - 0x10;
    if ((uint)pcVar7 < 0x10) {
      iVar6 = -1;
    }
LAB_100b94fd8:
    SVar32.str = (char *)(ulong)(iVar6 + 1);
    SVar32.bridgeObject = (void *)0xeb00000000726464;
    return SVar32;
  case (char *)0xd1:
  case (char *)0xd9:
    goto switchD_100b94bd0_caseD_79;
  case (char *)0xe8:
    goto switchD_100b94bd0_caseD_e8;
  case (char *)0xec:
    pcVar1 = &DAT_101045580;
    FUN_100b6730c(&DAT_101045580);
    unaff_x19 = unaff_x21;
    goto switchD_100b94bd0_caseD_e8;
  case (char *)0xf8:
    goto switchD_100b94bd0_caseD_f8;
  }
  goto LAB_100b94c7c;
switchD_100b94bd0_caseD_20:
  pcVar1 = pcVar7;
switchD_100b94bd0_caseD_58:
  FUN_100b94b38(pcVar1,pcVar4);
switchD_100b94bd0_caseD_25:
  *unaff_x19 = (char)pcVar1;
  goto switchD_100b94bd0_caseD_50;
switchD_100b94bd0_caseD_13:
  pcVar4 = pcVar7 + 0x604;
  goto switchD_100b94bd0_caseD_17;
switchD_100b94bd0_caseD_24:
  FUN_100bec824(pcVar1);
  SVar23.bridgeObject = pcVar4;
  SVar23.str = pcVar1;
  return SVar23;
switchD_100b94bd0_caseD_21:
  switchD_100becca8::caseD_b(&DAT_615f6c6f626d7973,pcVar4);
  SVar24.bridgeObject = pcVar4;
  SVar24.str = pcVar1;
  return SVar24;
switchD_100b94bd0_caseD_1f:
  FUN_100bebbcc(pcVar1);
  SVar22.bridgeObject = pcVar4;
  SVar22.str = pcVar1;
  return SVar22;
switchD_100b94bd0_caseD_79:
switchD_100b94bd0_caseD_45:
  SVar28 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar28;
switchD_100b94bd0_caseD_50:
switchD_100b94bd0_caseD_1e:
  SVar26.bridgeObject = pcVar4;
  SVar26.str = pcVar1;
  return SVar26;
switchD_100b94bd0_caseD_10:
  pcVar1 = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x707000000000);
switchD_100b94bd0_caseD_14:
  SVar9.bridgeObject = pcVar4;
  SVar9.str = pcVar1;
  return SVar9;
switchD_100b94bd0_caseD_17:
  pcVar1 = (char *)0x7270;
switchD_100b94bd0_caseD_15:
  SVar10.str = (char *)((ulong)pcVar1 & 0xffff | 0x746e6f635f650000);
  SVar10.bridgeObject = pcVar4;
  return SVar10;
switchD_100b94bd0_caseD_22:
  pcVar1 = (char *)((ulong)pcVar1 & 0xffffffff | 0x64615f6500000000);
switchD_100b94bd0_caseD_1d:
  SVar17.bridgeObject = pcVar4;
  SVar17.str = pcVar1;
  return SVar17;
switchD_100b94bd0_caseD_32:
  pcVar1 = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x616e00000000);
switchD_100b94bd0_caseD_f8:
  SVar8.str = (char *)((ulong)pcVar1 & 0xffffffffffff | 0x656d000000000000);
  SVar8.bridgeObject = pcVar4;
  return SVar8;
switchD_100b94bd0_caseD_31:
  pcVar4 = (char *)((ulong)pcVar4 & 0xffff0000ffff | 0xeb00000000740000);
switchD_100b94bd0_caseD_0:
  SVar14.bridgeObject = pcVar4;
  SVar14.str = pcVar1;
  return SVar14;
switchD_100b94bd0_caseD_e8:
  in_stack_00000004._3_1_ = 0xd;
  unaff_x23 = &DAT_101045f60;
  FUN_100b6730c(&DAT_101045f60);
  in_x4 = unaff_x23;
  switchD_100b81688::caseD_d8();
  pcVar7 = (char *)&stack0x00000008;
  pcVar4 = (char *)((long)&stack0x00000004 + 3);
  unaff_x22 = pcVar1;
switchD_100b94bd0_caseD_c4:
  Swift::KeyedDecodingContainer::_decodeIfPresent(pcVar7,pcVar1,pcVar4,unaff_x23,unaff_x22,in_x4);
  pcVar3 = in_stack_00000008;
  if (unaff_x19 != (char *)0x0) {
    pcVar3 = pcVar1;
  }
switchD_100b94bd0_caseD_84:
  SVar29.bridgeObject = pcVar4;
  SVar29.str = pcVar3;
  return SVar29;
switchD_100b94bd0_caseD_2e:
  uVar2 = (ulong)pcVar1 & 0xffff0000ffffffff | 0x697400000000;
LAB_100b94c7c:
  SVar13.str = (char *)(uVar2 & 0xffffffffffff | 0x6e6f000000000000);
  SVar13.bridgeObject = pcVar4;
  return SVar13;
}



/* Address: 0x100b94d4c | thunk_FUN_100b94b98 */

void thunk_FUN_100b94b98(void)

{
  FUN_100b94b98();
  return;
}



/* Address: 0x100b94d50 | FUN_100b94d50 */

void FUN_100b94d50(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bebbcc(*param_1,*param_2);
  return;
}



/* Address: 0x100b94d5c | switchD_100b94bd0::caseD_28 */

void switchD_100b94bd0::caseD_28(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec824(*unaff_x20);
  return;
}



/* Address: 0x100b94d64 | switchD_100b94bd0::caseD_26 */

void switchD_100b94bd0::caseD_26(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becca8::caseD_b(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b94d6c | FUN_100b94d6c */

void FUN_100b94d6c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed588(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b94d74 | FUN_100b94d74 */

void FUN_100b94d74(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b94b38(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100b94da0 | switchD_100b94bd0::caseD_5d */

void switchD_100b94bd0::caseD_5d(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b94b98();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b94dc8 | FUN_100b94dc8 */

void FUN_100b94dc8(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_100b94b98(*unaff_x20);
  return;
}



/* Address: 0x100b94dd0 | FUN_100b94dd0 */

void FUN_100b94dd0(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100b94b38();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b94df4 | FUN_100b94df4 */

void FUN_100b94df4(undefined1 *param_1)

{
  *param_1 = 0x10;
  return;
}



/* Address: 0x100b94e00 | FUN_100b94e00 */

String FUN_100b94e00(void)

{
  String SVar1;
  
  FUN_100b94f00();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b94e28 | FUN_100b94e28 */

String FUN_100b94e28(void)

{
  String SVar1;
  
  FUN_100b94f00();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b94e50 | FUN_100b94e50 */

void FUN_100b94e50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_39;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101045580;
  FUN_100b6730c(&DAT_101045580);
  local_39 = 0xd;
  puVar2 = &DAT_101045f60;
  FUN_100b6730c(&DAT_101045f60);
  puVar3 = puVar2;
  switchD_100b81688::caseD_d8();
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_39,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100b94ed8 | switchD_100b94bd0::caseD_b0 */

void switchD_100b94bd0::caseD_b0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100b94128();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100b94f00 | FUN_100b94f00 */

void FUN_100b94f00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045f68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b2a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b2a0,&DAT_100f38a80);
  DAT_101045f68 = pTVar1;
  return;
}



/* Address: 0x100b94f40 | FUN_100b94f40 */

void FUN_100b94f40(void)

{
  long unaff_x20;
  
  FUN_100b94e50(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b94f58 | switchD_100b94bd0::caseD_c9 */

int switchD_100b94bd0::caseD_c9(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b94fd8;
  }
  if (param_2 < 0xf1) {
LAB_100b94fcc:
    iVar2 = *param_1 - 0x10;
    if (*param_1 < 0x10) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xf) {
      iVar2 = 4;
    }
    if (param_2 + 0xf >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b94fb0:
      if (uVar1 == 0) goto LAB_100b94fcc;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b94fb0;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b94fcc;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 0x10;
  }
LAB_100b94fd8:
  return iVar2 + 1;
}



/* Address: 0x100b94fe0 | FUN_100b94fe0 */

void FUN_100b94fe0(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 0xf) {
    uVar2 = 4;
  }
  if (param_3 + 0xf >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xf0 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xf1) {
                    /* WARNING: Could not recover jumptable at 0x000100b95028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b9502c + (ulong)(&BYTE_100c9b165)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x0f';
                    /* WARNING: Could not recover jumptable at 0x000100b9505c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b95060 + (ulong)(&BYTE_100c9b160)[uVar1] * 4))();
  return;
}



/* Address: 0x100b9509c | FUN_100b9509c */

undefined1  [16] FUN_100b9509c(void)

{
  return ZEXT816(0x100f38a80);
}


