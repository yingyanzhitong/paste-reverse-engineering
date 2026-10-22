/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b86d20 | FUN_100b86d20 */

void FUN_100b86d20(void)

{
  FUN_100b6d4e0();
  return;
}



/* Address: 0x100b86d2c | FUN_100b86d2c */

void FUN_100b86d2c(void)

{
  (extension_Foundation)::Swift::StringProtocol::_contains(&stack0x00000020);
  return;
}



/* Address: 0x100b86d48 | FUN_100b86d48 */

void FUN_100b86d48(void)

{
  return;
}



/* Address: 0x100b86d54 | FUN_100b86d54 */

void FUN_100b86d54(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b86d5c | FUN_100b86d5c */

void FUN_100b86d5c(void)

{
  long unaff_x22;
  long unaff_x26;
  
  *(long *)(unaff_x26 + 8) = unaff_x22 + 1;
  return;
}



/* Address: 0x100b86d78 | FUN_100b86d78 */

void FUN_100b86d78(undefined8 param_1)

{
  FUN_1000c9ff0(param_1,1);
  return;
}



/* Address: 0x100b86d84 | FUN_100b86d84 */

void FUN_100b86d84(void)

{
  long unaff_x26;
  long unaff_x29;
  
  *(undefined1 *)(unaff_x26 + *(long *)(unaff_x29 + -0x78)) = 3;
  return;
}



/* Address: 0x100b86d98 | FUN_100b86d98 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b86e44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b86d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar3 + 0x20) = SVar5;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  _swift_bridgeObjectRetain(param_3);
  DVar2 = Swift::Dictionary::_init
                    (puVar3,puVar1,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  puVar3 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone(&_OBJC_CLASS___NSError);
  FUN_100bbb94c(SVar4.str,SVar4.bridgeObject,param_1,DVar2.unknown,puVar3);
  return;
}



/* Address: 0x100b86e90 | SentryDsn::url */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::url(ID param_1,SEL param_2)

{
  URL UVar1;
  URL UVar2;
  NSURL *pNVar3;
  long lVar4;
  long lVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  UVar2 = UVar1;
  FUN_100b86f08(&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  pNVar3 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100b86f08 | FUN_100b86f08 */

void FUN_100b86f08(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryDsn::url;
  FUN_100b7c984();
                    /* WARNING: Could not recover jumptable at 0x000100b86f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,param_2);
  return;
}



/* Address: 0x100b86f4c | FUN_100b86f4c */

void FUN_100b86f4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_100b86f8c(param_1,param_2,param_3);
  FUN_100b56e60();
  return;
}



/* Address: 0x100b86f8c | FUN_100b86f8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b86f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long lVar5;
  ID IVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  FUN_100b7c984();
  lVar4 = *(long *)(lVar2 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = extraout_x9 - extraout_x8;
  puVar3 = &DAT_1010458b0;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar1 = SentryDsn::envelopeEndpoint;
  lVar9 = extraout_x9_00 - extraout_x8_00;
  lVar8 = lVar9 - extraout_x8_00;
  lVar5 = lVar8 - extraout_x8_00;
  FUN_1000c9ffc(lVar5,1,1,lVar2);
  FUN_10001830c(lVar5,lVar8);
  FUN_100b6730c();
  _swift_allocObject();
  FUN_100b88690(lVar8,&DAT_1010458b0);
  FUN_100054698(lVar5);
  *(long *)(unaff_x20 + lVar1) = lVar8;
  FUN_100b87198(lVar9,param_1,param_2,param_3);
  _swift_bridgeObjectRelease(param_2);
  lVar8 = lVar9;
  FUN_1000c9ff0(lVar9,1,lVar2);
  if ((int)lVar8 == 1) {
    FUN_100054698(lVar9);
    _swift_release(*(undefined8 *)(unaff_x20 + lVar1));
    _swift_deallocPartialClassInstance();
    IVar6 = 0;
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar7,lVar9,lVar2);
    (**(code **)(lVar4 + 0x10))(unaff_x20 + SentryDsn::url,lVar7,lVar2);
    IVar6 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
    (**(code **)(lVar4 + 8))(lVar7,lVar2);
  }
  return IVar6;
}



/* Address: 0x100b87198 | FUN_100b87198 */

void FUN_100b87198(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  URL UVar2;
  CharacterSet CVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  CharacterSet in;
  String SVar11;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  
  puVar1 = &DAT_1010458b0;
  FUN_100b6730c();
  puVar5 = auStack_a0 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  lVar10 = (long)puVar5 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar3.unknown + -8);
  in.unknown = (undefined *)(lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (param_3 == 0) {
    FUN_100b883a8(param_4,0xd000000000000011,0x8000000100dcb3b0);
    FUN_1000c9ffc(param_1,1,1,UVar2.unknown);
    return;
  }
  local_98 = param_4;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar3);
  FUN_100008378();
  SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  (**(code **)(lVar8 + 8))(in.unknown,CVar3.unknown);
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  puVar4 = puVar5;
  FUN_1000c9ff0(puVar5,1,UVar2.unknown);
  if ((int)puVar4 == 1) {
    FUN_100054698(puVar5);
    FUN_100b883a8(local_98,0x2064696c61766e49,0xef4c5255204e5344);
  }
  else {
    pcVar9 = *(code **)(lVar7 + 0x20);
    (*pcVar9)(lVar10,puVar5,UVar2.unknown);
    lVar8 = lVar10;
    FUN_100b883d8(lVar10);
    if (puVar5 == (undefined1 *)0x0) {
      (*pcVar9)(param_1,lVar10,UVar2.unknown);
      uVar6 = 0;
      goto LAB_100b873b8;
    }
    FUN_100b883a8(local_98,lVar8,puVar5);
    _swift_bridgeObjectRelease(puVar5);
    (**(code **)(lVar7 + 8))(lVar10,UVar2.unknown);
  }
  uVar6 = 1;
LAB_100b873b8:
  FUN_1000c9ffc(param_1,uVar6,1,UVar2.unknown);
  return;
}



/* Address: 0x100b87400 | SentryDsn::initWithString:didFailWithError: */

/* Function Stack Size: 0x20 bytes */

ID SentryDsn::initWithString_didFailWithError_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  char *pcVar1;
  String SVar2;
  
  if (param_3 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pcVar1 = SVar2.str;
  FUN_100b86f8c(pcVar1,SVar2.bridgeObject,param_4);
  return (ID)pcVar1;
}



/* Address: 0x100b87440 | FUN_100b87440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b87440(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  URL UVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_1010458b0;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar5 = extraout_x9 - extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = extraout_x9_00 - extraout_x8_00;
  lVar6 = lVar7 - extraout_x8_00;
  local_70 = 0;
  FUN_100b87198(lVar5,param_1,param_2,&local_70);
  _swift_bridgeObjectRelease(param_2);
  lVar1 = local_70;
  lVar4 = lVar5;
  FUN_1000c9ff0(lVar5,1,UVar3.unknown);
  if ((int)lVar4 == 1) {
    FUN_100054698(lVar5);
    if (lVar1 == 0) {
      FUN_100b86d98(100,0x2064696c61766e49,0xeb000000004e5344);
    }
    _swift_willThrow();
    lVar7 = unaff_x20;
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar5,UVar3.unknown);
    (**(code **)(lVar8 + 0x10))(lVar7,lVar6,UVar3.unknown);
    _objc_allocWithZone();
    FUN_100b87608(lVar7);
    (**(code **)(lVar8 + 8))(lVar6,UVar3.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b87608 | FUN_100b87608 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b87608(undefined8 param_1)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  ID IVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  _swift_getObjectType();
  puVar1 = &DAT_1010458b0;
  FUN_100b6730c();
  lVar6 = SentryDsn::envelopeEndpoint;
  uVar5 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar3 = &stack0xffffffffffffff90 + -uVar5;
  lVar7 = (long)puVar3 - uVar5;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  FUN_1000c9ffc(lVar7,1,1,UVar2.unknown);
  FUN_10001830c(lVar7,puVar3);
  FUN_100b6730c();
  _swift_allocObject();
  FUN_100b88690(puVar3,&DAT_1010458b0);
  FUN_100054698(lVar7);
  *(undefined1 **)(unaff_x20 + lVar6) = puVar3;
  lVar6 = *(long *)(UVar2.unknown + -8);
  (**(code **)(lVar6 + 0x10))(unaff_x20 + SentryDsn::url,param_1,UVar2.unknown);
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  (**(code **)(lVar6 + 8))(param_1,UVar2.unknown);
  return IVar4;
}



/* Address: 0x100b87764 | FUN_100b87764 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b87828 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b87764(void)

{
  ulong uVar1;
  Encoding EVar2;
  Encoding EVar3;
  _ArrayBuffer<undefined> _Var4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x9;
  long lVar6;
  String SVar7;
  
  EVar2 = Encoding::_typeMetadataAccessor();
  lVar6 = *(long *)(EVar2.unknown + -8);
  EVar3 = EVar2;
  FUN_100b6f9e0(*(undefined8 *)(lVar6 + 0x40));
  SVar7 = Foundation::URL::get_absoluteString((URL)EVar3.unknown);
  Encoding::_get_utf8((Encoding)SVar7.str);
  FUN_100008378();
  uVar5 = 0;
  (extension_Foundation)::Swift::StringProtocol::_data
            ((undefined *)(extraout_x9 - extraout_x8),false);
  (**(code **)(lVar6 + 8))((undefined *)(extraout_x9 - extraout_x8),EVar2.unknown);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  uVar1 = 0xc000000000000000;
  if (uVar5 >> 0x3c < 0xf) {
    uVar1 = uVar5;
  }
  _Var4 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (SVar7.str,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var4.unknown + 0x10) = 0x14;
  *(undefined8 *)(_Var4.unknown + 0x20) = 0;
  *(undefined8 *)(_Var4.unknown + 0x28) = 0;
  *(undefined4 *)(_Var4.unknown + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100b87864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)(int)(&DAT_100b87ac0)[uVar1 >> 0x3e] + 0x100b87858))();
  return;
}



/* Address: 0x100b87ad0 | FUN_100b87ad0 */

void FUN_100b87ad0(void *param_1,undefined8 param_2,Data param_3,undefined8 param_4,long *param_5)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = Foundation::Data::get_count(param_3);
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b87b3c);
    (*pcVar1)();
  }
  if (uVar2 >> 0x20 == 0) {
    FUN_100b885d0(0);
    _CC_SHA1(param_1,(CC_LONG)uVar2,(uchar *)(*param_5 + 0x20));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b87b40);
  (*pcVar1)();
}



/* Address: 0x100b87b40 | SentryDsn::getHash */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::getHash(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100b87764(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100b87b98 | FUN_100b87b98 */

void FUN_100b87b98(undefined8 param_1)

{
  long unaff_x20;
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  plVar1 = *(long **)(unaff_x20 + SentryDsn::envelopeEndpoint);
  lVar2 = plVar1[2];
  _os_unfair_lock_lock(lVar2);
  lVar3 = *(long *)(*plVar1 + 0x60);
  _swift_beginAccess((long)plVar1 + lVar3,auStack_58,0x21,0);
  FUN_100b87c24(param_1,(long)plVar1 + lVar3);
  _swift_endAccess(auStack_58);
  _os_unfair_lock_unlock(lVar2);
  return;
}



/* Address: 0x100b87c24 | FUN_100b87c24 */

void FUN_100b87c24(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  undefined *puVar2;
  long lVar3;
  URL UVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  String SVar8;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  puVar5 = &stack0xffffffffffffffb0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_1010458b0;
  FUN_100b6730c();
  lVar6 = (long)puVar5 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10001830c(param_2,lVar6);
  lVar3 = lVar6;
  UVar4 = UVar1;
  FUN_1000c9ff0(lVar6,1);
  if ((int)lVar3 == 1) {
    FUN_100054698(param_2);
    FUN_100054698(lVar6);
    FUN_100b87d6c(puVar5);
    SVar8.bridgeObject = (void *)0xe90000000000002f;
    SVar8.str = (char *)0x65706f6c65766e65;
    Foundation::URL::appendingPathComponent(SVar8,UVar4);
    (**(code **)(lVar7 + 8))(puVar5,UVar1.unknown);
    (**(code **)(lVar7 + 0x10))(param_2,param_1,UVar1.unknown);
    FUN_1000c9ffc(param_2,0,1,UVar1.unknown);
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,lVar6,UVar1.unknown);
  }
  return;
}



/* Address: 0x100b87d6c | FUN_100b87d6c */

void FUN_100b87d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  undefined8 *param_5)

{
  String SVar1;
  String SVar2;
  code *pcVar3;
  undefined *puVar4;
  URLComponents UVar5;
  undefined *puVar6;
  undefined8 uVar7;
  URL UVar8;
  URLComponents UVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  char *pcVar13;
  URLComponents *this;
  URLComponents UVar14;
  void *pvVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  URLComponents local_90;
  char *local_88;
  void *local_80;
  char *local_78;
  void *local_70;
  undefined *local_68;
  
  puVar4 = &DAT_1010458b0;
  FUN_100b6730c();
  lVar12 = (long)&local_90 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar5 = Foundation::URLComponents::typeMetadataAccessor();
  lVar10 = SentryDsn::url;
                    /* WARNING: Load size is inaccurate */
  UVar14.unknown = UVar5.unknown[-8];
  this = (URLComponents *)(lVar12 - (*(long *)(UVar14.unknown + 0x40) + 0xfU & 0xfffffffffffffff0));
  SVar16 = Foundation::URL::get_lastPathComponent((URL)UVar5.unknown);
  UVar8.unknown = SVar16.str;
  local_88 = UVar8.unknown;
  Foundation::URL::get_pathComponents(UVar8);
  local_80 = SVar16.bridgeObject;
  local_68 = UVar8.unknown;
  if (*(ulong *)(UVar8.unknown + 0x10) < 3) {
    _swift_bridgeObjectRelease();
    pcVar13 = (char *)0x0;
    pvVar15 = (void *)0xe000000000000000;
  }
  else {
    FUN_100bb71f0(0,1);
    puVar4 = local_68;
    if (*(long *)(local_68 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b88030);
      (*pcVar3)();
    }
    puVar6 = local_68;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100baff24();
    }
    if (*(long *)(puVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b88044);
      (*pcVar3)();
    }
    lVar11 = *(long *)(puVar4 + 0x10) + -1;
    uVar7 = *(undefined8 *)(puVar4 + lVar11 * 0x10 + 0x28);
    *(long *)(puVar4 + 0x10) = lVar11;
    _swift_bridgeObjectRelease(uVar7);
    param_4 = &DAT_101044808;
    local_78 = puVar4;
    FUN_100b6730c();
    param_5 = &DAT_100faaa00;
    local_90.unknown = UVar14.unknown;
    FUN_100b88a30(&DAT_100faaa00,&DAT_101044808,
                  PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
    SVar16.bridgeObject = (void *)0xe100000000000000;
    SVar16.str = (char *)0x2f;
    SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
    _swift_bridgeObjectRelease(puVar4);
    UVar14.unknown = local_90.unknown;
    local_78 = (char *)0x2f;
    local_70 = (void *)0xe100000000000000;
    SVar19.bridgeObject = param_5;
    SVar19.str = param_4;
    Swift::String::append(SVar16,SVar19);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    pcVar13 = local_78;
    pvVar15 = local_70;
  }
  UVar8.unknown = (undefined *)Foundation::URLComponents::init();
  Foundation::URL::_get_scheme(UVar8);
  Foundation::URLComponents::_set_scheme(this);
  Foundation::URL::_get_host(UVar8);
  Foundation::URLComponents::_set_host(this);
  Foundation::URL::_get_port(UVar8);
  Foundation::URLComponents::_set_port(this);
  SVar17.bridgeObject = &DAT_e500000000000000;
  SVar17.str = (char *)0x2f6970612f;
  SVar20.bridgeObject = param_5;
  SVar20.str = param_4;
  local_78 = pcVar13;
  local_70 = pvVar15;
  Swift::String::append(SVar17,SVar20);
  pvVar15 = local_80;
  SVar1.bridgeObject = local_80;
  SVar1.str = local_88;
  SVar21.bridgeObject = param_5;
  SVar21.str = param_4;
  Swift::String::append(SVar1,SVar21);
  _swift_bridgeObjectRelease(pvVar15);
  SVar18.bridgeObject = (void *)0xe100000000000000;
  SVar18.str = (char *)0x2f;
  SVar22.bridgeObject = param_5;
  SVar22.str = param_4;
  Swift::String::append(SVar18,SVar22);
  SVar2.bridgeObject = local_70;
  SVar2.str = local_78;
  UVar9.unknown = local_78;
  Foundation::URLComponents::set_path(this,SVar2);
  Foundation::URLComponents::_get_url(UVar9);
  (**(code **)(UVar14.unknown + 8))(this,UVar5.unknown);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar11 = lVar12;
  FUN_1000c9ff0(lVar12,1,UVar8.unknown);
  if ((int)lVar11 == 1) {
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))(param_1,unaff_x20 + lVar10,UVar8.unknown);
    lVar10 = lVar12;
    FUN_1000c9ff0(lVar12,1,UVar8.unknown);
    if ((int)lVar10 != 1) {
      FUN_100054698(lVar12);
    }
  }
  else {
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x20))(param_1,lVar12,UVar8.unknown);
  }
  return;
}



/* Address: 0x100b88044 | SentryDsn::getEnvelopeEndpoint */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::getEnvelopeEndpoint(ID param_1,SEL param_2)

{
  URL UVar1;
  NSURL *pNVar2;
  long lVar3;
  long lVar4;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_100b87b98(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1);
  pNVar2 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return (ID)pNVar2;
}



/* Address: 0x100b880d8 | FUN_100b880d8 */

/* WARNING: Removing unreachable block (ram,0x000100b88124) */

void FUN_100b880d8(void)

{
  undefined8 uVar1;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  uVar1 = 0x5c292b645c286f5e;
  FUN_100b935e4(0x5c292b645c286f5e,0xe90000000000002e,0);
  DAT_1010458a8 = uVar1;
  return;
}



/* Address: 0x100b8814c | SentryDsn::orgId */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::orgId(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100b881b4(param_1);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b881b4 | FUN_100b881b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100b881b4(URL param_1,long param_2)

{
  NSString *pNVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ID IVar5;
  char *pcVar6;
  _NSRange _Var7;
  String SVar8;
  String SVar9;
  undefined *local_68;
  long local_60;
  undefined8 uStack_58;
  
  Foundation::URL::_get_host(param_1);
  if (param_2 != 0) {
    if (DAT_101042dc8 != -1) {
      _swift_once(&DAT_101042dc8,FUN_100b880d8);
    }
    IVar5 = DAT_1010458a8;
    if (DAT_1010458a8 == 0) {
      FUN_100b6f838();
    }
    else {
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      uStack_58 = 0xf;
      local_68 = param_1.unknown;
      local_60 = param_2;
      _swift_bridgeObjectRetain(param_2);
      puVar2 = &DAT_1010458d0;
      FUN_100b6730c(&DAT_1010458d0);
      puVar3 = &DAT_1010458d8;
      FUN_100b88a30(&DAT_1010458d8,&DAT_1010458d0,
                    PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200)
      ;
      puVar4 = puVar3;
      FUN_100008378();
      _Var7 = (extension_Foundation)::__C::_NSRange::_init
                        (&uStack_58,&local_68,puVar2,PTR___type_metadata_for_Swift_String_100eac208,
                         puVar3,puVar4);
      IVar5 = _objc_msgSend(IVar5,"firstMatchInString:options:range:",pNVar1,0,_Var7.location,
                            _Var7.length);
      if (IVar5 == 0) {
        FUN_100b6f838(0);
      }
      else {
        pcVar6 = "rangeAtIndex:";
        _Var7.location = (undefined *)_objc_msgSend(IVar5,"rangeAtIndex:",1);
        _Var7.length = (__int64)pcVar6;
        puVar2 = param_1.unknown;
        (extension_Foundation)::Swift::Range::_init(_Var7);
        if (((ulong)puVar2 & 1) == 0) {
          SVar9.bridgeObject = param_1.unknown;
          SVar9.str = pcVar6;
          SVar8.str = Swift::String::get_subscript(_Var7.location,SVar9);
          FUN_100b6f838();
          SVar8.bridgeObject = pcVar6;
          SVar8 = Swift::String::__fromSubstring(SVar8);
          _swift_bridgeObjectRelease(param_2);
          return SVar8;
        }
        FUN_100b6f838();
      }
    }
  }
  return (String)ZEXT816(0);
}



/* Address: 0x100b883a8 | FUN_100b883a8 */

/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

void FUN_100b883a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = 100;
    FUN_100b86d98();
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100b883d8 | FUN_100b883d8 */

undefined1  [16] FUN_100b883d8(void)

{
  URL UVar1;
  URL UVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar7 = 0xd000000000000020;
  UVar1.unknown = &DAT_101044958;
  FUN_100b6730c();
  puVar3 = &DAT_101042fa8;
  _swift_initStaticObject();
  FUN_100b8870c();
  Foundation::URL::_get_scheme(UVar1);
  UVar2.unknown = puVar3;
  puVar4 = puVar3;
  _swift_bridgeObjectRelease();
  if (puVar3 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(UVar1.unknown);
    uVar5 = 0x8000000100dcb480;
    uVar7 = 0xd00000000000001c;
    goto LAB_100b88538;
  }
  Foundation::URL::_get_scheme(UVar2);
  if (puVar4 == (undefined *)0x0) {
    _swift_bridgeObjectRelease();
  }
  else {
    puVar3 = puVar4;
    FUN_100052458();
    _swift_bridgeObjectRelease(puVar4);
    _swift_bridgeObjectRelease();
    puVar4 = puVar3;
    if (((ulong)UVar2.unknown & 1) == 0) {
      uVar5 = 0x8000000100dcb460;
      uVar7 = 0xd00000000000001e;
      goto LAB_100b88538;
    }
  }
  Foundation::URL::_get_host(UVar1);
  UVar1.unknown = puVar4;
  puVar3 = puVar4;
  _swift_bridgeObjectRelease();
  if (puVar4 == (undefined *)0x0) {
LAB_100b8851c:
    pcVar6 = "Host component of DSN is missing";
  }
  else {
    Foundation::URL::_get_host(UVar1);
    UVar2.unknown = UVar1.unknown;
    puVar4 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      UVar2.unknown = puVar3;
      _swift_bridgeObjectRelease();
      uVar5 = (ulong)UVar1.unknown & 0xffffffffffff;
      if (((ulong)puVar3 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar3 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) goto LAB_100b8851c;
    }
    Foundation::URL::_get_user(UVar2);
    UVar1.unknown = puVar4;
    _swift_bridgeObjectRelease();
    if (puVar4 != (undefined *)0x0) {
      Foundation::URL::get_pathComponents(UVar1);
      uVar8 = *(ulong *)(UVar1.unknown + 0x10);
      _swift_bridgeObjectRelease();
      uVar5 = 0x8000000100dcb3d0;
      uVar7 = 0xd00000000000002b;
      if (1 < uVar8) {
        uVar7 = 0;
        uVar5 = 0;
      }
      goto LAB_100b88538;
    }
    pcVar6 = "User component of DSN is missing";
  }
  uVar5 = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
LAB_100b88538:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Address: 0x100b88550 | FUN_100b88550 */

void FUN_100b88550(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryDsn",0x10,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8857c);
  (*pcVar1)();
}



/* Address: 0x100b8857c | SentryDsn::init */

/* Function Stack Size: 0x10 bytes */

ID SentryDsn::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  FUN_100b88550();
  lVar1 = url;
  IVar2 = param_1;
  FUN_100b7c984();
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  IVar2 = *(ID *)(param_1 + envelopeEndpoint);
  _swift_release();
  return IVar2;
}



/* Address: 0x100b88588 | SentryDsn::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void SentryDsn::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = url;
  IVar2 = param_1;
  FUN_100b7c984();
  (**(code **)(*(long *)(IVar2 - 8) + 8))(param_1 + lVar1,IVar2);
  _swift_release(*(undefined8 *)(param_1 + envelopeEndpoint));
  return;
}



/* Address: 0x100b885d0 | FUN_100b885d0 */

void FUN_100b885d0(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar1 = lVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar1 == 0) || ((long)(*(ulong *)(lVar2 + 0x18) >> 1) < param_1)) {
    FUN_100b6e934();
    lVar2 = lVar1;
  }
  *unaff_x20 = lVar2;
  return;
}



/* Address: 0x100b88630 | FUN_100b88630 */

void FUN_100b88630(undefined8 param_1)

{
  FUN_100b88690(param_1,&DAT_101044980);
  return;
}



/* Address: 0x100b8863c | FUN_100b8863c */

void FUN_100b8863c(undefined4 *param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = param_1;
  FUN_100b88b94();
  *(undefined4 **)(unaff_x20 + 0x10) = puVar1;
  *puVar1 = 0;
  *(char *)(unaff_x20 + 0x18) = (char)param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b88668 | FUN_100b88668 */

void FUN_100b88668(undefined4 *param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = param_1;
  FUN_100b88b94();
  *puVar1 = 0;
  *(undefined4 **)(unaff_x20 + 0x10) = puVar1;
  *(undefined4 **)(unaff_x20 + 0x18) = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b88690 | FUN_100b88690 */

void FUN_100b88690(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long *unaff_x20;
  
  puVar1 = param_1;
  FUN_100b88b94();
  unaff_x20[2] = (long)puVar1;
  *puVar1 = 0;
  FUN_100b88b38(param_1,(long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100b886d8 | FUN_100b886d8 */

void FUN_100b886d8(undefined4 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = param_1;
  FUN_100b88b94();
  *puVar1 = 0;
  *(undefined4 **)(unaff_x20 + 0x10) = puVar1;
  *(undefined4 **)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  FUN_100b56e60();
  return;
}



/* Address: 0x100b8870c | FUN_100b8870c */

undefined * FUN_100b8870c(long param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *capacity;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_101044b58;
    FUN_100b6730c();
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    uVar12 = *(ulong *)(param_1 + 0x10);
    puVar16 = capacity;
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100b888d4);
          (*pcVar9)();
        }
        pSVar1 = (String *)(param_1 + 0x20 + uVar18 * 0x10);
        pcVar4 = pSVar1->str;
        puVar6 = pSVar1->bridgeObject;
        SVar8 = *pSVar1;
        Swift::Hasher::init(*(__int64 *)(capacity + 0x28));
        _swift_bridgeObjectRetain(puVar6);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar8);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar17 = -1L << ((ulong)(byte)capacity[0x20] & 0x3f);
        uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
        uVar13 = uVar11 >> 6;
        uVar14 = *(ulong *)(capacity + uVar13 * 8 + 0x38);
        uVar15 = 1L << (uVar11 & 0x3f);
        if ((uVar15 & uVar14) == 0) {
LAB_100b88864:
          *(ulong *)(capacity + uVar13 * 8 + 0x38) = uVar15 | uVar14;
          plVar3 = (long *)(*(long *)(capacity + 0x30) + uVar11 * 0x10);
          *plVar3 = (long)pcVar4;
          plVar3[1] = (long)puVar6;
          if (SCARRY8(*(long *)(capacity + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100b888d8);
            (*pcVar9)();
          }
          *(long *)(capacity + 0x10) = *(long *)(capacity + 0x10) + 1;
        }
        else {
          lVar19 = *(long *)(capacity + 0x30);
          puVar2 = (undefined8 *)(lVar19 + uVar11 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var7.unknown = (undefined *)puVar2[1];
          if (_Var5.unknown != pcVar4 || _Var7.unknown != puVar6) {
            bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4);
            if (!bVar10) {
              do {
                uVar11 = uVar11 + 1 & ~uVar17;
                uVar13 = uVar11 >> 6;
                uVar14 = *(ulong *)(capacity + uVar13 * 8 + 0x38);
                uVar15 = 1L << (uVar11 & 0x3f);
                if ((uVar14 & uVar15) == 0) goto LAB_100b88864;
                puVar2 = (undefined8 *)(lVar19 + uVar11 * 0x10);
                _Var5.unknown = (undefined *)*puVar2;
                _Var7.unknown = (undefined *)puVar2[1];
              } while ((_Var5.unknown != pcVar4 || _Var7.unknown != puVar6) &&
                      (bVar10 = Swift::_stringCompareWithSmolCheck
                                          (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4),
                      !bVar10));
            }
          }
          _swift_bridgeObjectRelease(puVar6);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar12);
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return puVar16;
}



/* Address: 0x100b888d8 | FUN_100b888d8 */

void FUN_100b888d8(undefined8 param_1,__DataStorage *param_2,long param_3,__DataStorage *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  __DataStorage *p_Var2;
  __DataStorage *p_Var3;
  long lVar4;
  
  p_Var2 = param_2;
  Foundation::__DataStorage::_get__bytes(param_4,param_2);
  p_Var3 = (__DataStorage *)0x0;
  if (p_Var2 != (__DataStorage *)0x0) {
    p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(param_4,p_Var2);
    if (SBORROW8((long)param_2,(long)p_Var3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b889a4);
      (*pcVar1)();
    }
    p_Var2 = p_Var2 + ((long)param_2 - (long)p_Var3);
  }
  if (!SBORROW8(param_3,(long)param_2)) {
    lVar4 = Foundation::__DataStorage::get__length(param_4,p_Var3);
    if (param_3 - (long)param_2 <= lVar4) {
      lVar4 = param_3 - (long)param_2;
    }
    p_Var3 = (__DataStorage *)0x0;
    if (p_Var2 != (__DataStorage *)0x0) {
      p_Var3 = p_Var2 + lVar4;
    }
    FUN_100b87ad0(param_1,p_Var2,p_Var3,param_5,param_6,param_7);
    FUN_10003bf2c(param_5,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b889a0);
  (*pcVar1)();
}



/* Address: 0x100b889a4 | FUN_100b889a4 */

void FUN_100b889a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b87ad0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100b889c0 | FUN_100b889c0 */

void FUN_100b889c0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_2c = (undefined2)((ulong)param_2 >> 0x20);
  local_30 = (undefined4)param_2;
  local_38 = param_1;
  (*param_3)(&local_38,(long)&local_38 + param_5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b88a30 | FUN_100b88a30 */

void FUN_100b88a30(long *param_1,undefined8 param_2,long param_3)

{
  if (*param_1 == 0) {
    FUN_100b6734c(param_2);
    _swift_getWitnessTable(param_3,param_2);
    *param_1 = param_3;
  }
  FUN_100b56e88();
  return;
}



/* Address: 0x100b88a6c | FUN_100b88a6c */

void FUN_100b88a6c(void)

{
  FUN_100b88a74(0);
  return;
}



/* Address: 0x100b88a74 | FUN_100b88a74 */

void FUN_100b88a74(undefined8 param_1)

{
  if (DAT_101045908 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccdf90);
  return;
}



/* Address: 0x100b88aac | FUN_100b88aac */

undefined1  [16] FUN_100b88aac(URL param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,2,&local_30,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = UVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100b88b24 | FUN_100b88b24 */

void FUN_100b88b24(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccdf90);
  return;
}



/* Address: 0x100b88b30 | FUN_100b88b30 */

void FUN_100b88b30(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b88b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Address: 0x100b88b38 | FUN_100b88b38 */

void FUN_100b88b38(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100b6730c();
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  FUN_100b56e88(param_2);
  return;
}



/* Address: 0x100b88b78 | thunk_FUN_100b88668 */

void thunk_FUN_100b88668(undefined4 *param_1)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = param_1;
  FUN_100b88b94();
  *puVar1 = 0;
  *(undefined4 **)(unaff_x20 + 0x10) = puVar1;
  *(undefined4 **)(unaff_x20 + 0x18) = param_1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b88b7c | FUN_100b88b7c */

void FUN_100b88b7c(void)

{
  FUN_10003bf2c();
  return;
}



/* Address: 0x100b88b88 | FUN_100b88b88 */

void FUN_100b88b88(void)

{
  FUN_100b6d4e0();
  return;
}



/* Address: 0x100b88b94 | FUN_100b88b94 */

void FUN_100b88b94(void)

{
  _swift_slowAlloc(4,0xffffffffffffffff);
  return;
}



/* Address: 0x100b88ba0 | FUN_100b88ba0 */

void FUN_100b88ba0(void)

{
  FUN_100b888d8();
  return;
}



/* Address: 0x100b88bc0 | FUN_100b88bc0 */

void FUN_100b88bc0(void)

{
  JSONDecoder *pJVar1;
  
  pJVar1 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar1,*(undefined4 *)(pJVar1 + 0x30),*(undefined2 *)(pJVar1 + 0x34));
  pJVar1 = Foundation::JSONDecoder::init(pJVar1);
  FUN_100b88c60();
  Foundation::JSONDecoder::_decode(pJVar1,(Data)0x100f37bc8);
  _swift_release(pJVar1);
  return;
}



/* Address: 0x100b88c60 | FUN_100b88c60 */

void FUN_100b88c60(void)

{
  undefined *puVar1;
  
  if (DAT_101045918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9aa68;
  _swift_getWitnessTable(&DAT_100c9aa68,&DAT_100f37bc8);
  DAT_101045918 = puVar1;
  return;
}



/* Address: 0x100b88ca0 | FUN_100b88ca0 */

void FUN_100b88ca0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b88cb4 | FUN_100b88cb4 */

int FUN_100b88cb4(ulong *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    iVar1 = (int)*param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100b88cf4 | FUN_100b88cf4 */

void FUN_100b88cf4(void)

{
  FUN_10063ee28(&DAT_100f37bc8);
  return;
}



/* Address: 0x100b88d00 | FUN_100b88d00 */

long * FUN_100b88d00(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  UUID UVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    iVar3 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    iVar3 = *(int *)(param_3 + 0x20);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar8 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar8;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar8);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100b88dd4 | FUN_100b88dd4 */

void FUN_100b88dd4(long param_1,long param_2)

{
  UUID UVar1;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))(param_1,UVar1.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20)));
  return;
}



/* Address: 0x100b88e28 | FUN_100b88e28 */

long FUN_100b88e28(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  undefined8 uVar5;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar5 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + iVar3) = uVar5;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x100b88ed0 | FUN_100b88ed0 */

long FUN_100b88ed0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  UUID UVar3;
  long lVar4;
  undefined8 uVar5;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x18))(param_1,param_2,UVar3.unknown);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  lVar4 = (long)*(int *)(param_3 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar5 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar5;
  return param_1;
}



/* Address: 0x100b88f9c | FUN_100b88f9c */

long FUN_100b88f9c(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UUID UVar4;
  undefined8 uVar5;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))(param_1,param_2,UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  puVar2 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar3 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  return param_1;
}



/* Address: 0x100b89030 | FUN_100b89030 */

long FUN_100b89030(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  UUID UVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar5.unknown + -8) + 0x28))(param_1,param_2,UVar5.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar7 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar6);
  lVar4 = (long)*(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar7 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = *(undefined8 *)(param_2 + lVar4);
  _swift_bridgeObjectRelease(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  return param_1;
}


