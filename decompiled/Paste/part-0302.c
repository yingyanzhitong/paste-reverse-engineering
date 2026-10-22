/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003cd5ac | FUN_1003cd5ac */

void FUN_1003cd5ac(void)

{
  FUN_1000f7a78(FUN_1003d7578);
  return;
}



/* Address: 0x1003cd5b8 | FUN_1003cd5b8 */

void FUN_1003cd5b8(void)

{
  FUN_1003cd5c4(FUN_1003d4f80);
  return;
}



/* Address: 0x1003cd5c4 | FUN_1003cd5c4 */

void FUN_1003cd5c4(code *param_1)

{
  ID self;
  
  self = 0;
  (*param_1)();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  objc_stub::init(self);
  return;
}



/* Address: 0x1003cd5e8 | FUN_1003cd5e8 */

void FUN_1003cd5e8(void)

{
  FUN_1000f7a78(FUN_1003d5a98);
  return;
}



/* Address: 0x1003cd5f4 | FUN_1003cd5f4 */

undefined8 FUN_1003cd5f4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc3120;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003cd63c | FUN_1003cd63c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003cd63c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    return 0;
  }
  return param_1;
}



/* Address: 0x1003cd650 | FUN_1003cd650 */

void FUN_1003cd650(void)

{
  FUN_1003cd668(FUN_1003db774);
  return;
}



/* Address: 0x1003cd65c | FUN_1003cd65c */

void FUN_1003cd65c(void)

{
  FUN_1003cd668(FUN_1003db794);
  return;
}



/* Address: 0x1003cd668 | FUN_1003cd668 */

void FUN_1003cd668(code *param_1)

{
  ID self;
  
  self = 0;
  (*param_1)();
  _objc_allocWithZone();
  objc_stub::initWithFrame_(self,0,0,0,0);
  return;
}



/* Address: 0x1003cd698 | FUN_1003cd698 */

ID FUN_1003cd698(void)

{
  ID IVar1;
  
  IVar1 = 0;
  FUN_1003dda70();
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithFrame_(IVar1,0,0,0,0);
  objc_stub::setContentHuggingPriority_forOrientation_(IVar1,0x443b8000,1);
  return IVar1;
}



/* Address: 0x1003cd6ec | FUN_1003cd6ec */

ID FUN_1003cd6ec(void)

{
  undefined *self;
  ID IVar1;
  
  self = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  FUN_1003ddca4();
  return IVar1;
}



/* Address: 0x1003cd720 | FUN_1003cd720 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003cd720(void)

{
  LocalizedStringResource LVar1;
  NSString *pNVar2;
  ID self;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001daf54(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar5 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar2);
  puVar3 = (undefined8 *)NSTextField::setTextAlignment_(self,1);
  FUN_1001fe19c();
  NSTextField::setTextColor_(self,*puVar3);
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  NSTextField::setFont_(self,uVar4);
  return self;
}



/* Address: 0x1003cd814 | FUN_1003cd814 */

void FUN_1003cd814(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSView;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x1003cd830 | FUN_1003cd830 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003cd830(void)

{
  ID IVar1;
  
  IVar1 = NSColor::controlAccentColor((ID)&_OBJC_CLASS___NSColor);
  return IVar1;
}



/* Address: 0x1003cd854 | FUN_1003cd854 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong * FUN_1003cd854(void)

{
  undefined8 *puVar1;
  byte bVar2;
  ID self;
  ulong *self_00;
  undefined8 uVar3;
  
  self = 0;
  FUN_100236364();
  _objc_allocWithZone();
  self_00 = (ulong *)objc_stub::init(self);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self_00) + 0x60))(0);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar3 = 0x4034000000000000;
  puVar1 = (undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0;
  if ((bVar2 & 1) == 0) {
    uVar3 = 0x402c000000000000;
    puVar1 = (undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  }
  objc_stub::setCornerRadius_curve_((ID)self_00,uVar3,*puVar1);
  return self_00;
}



/* Address: 0x1003cd904 | FUN_1003cd904 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong * FUN_1003cd904(void)

{
  undefined8 *puVar1;
  byte bVar2;
  ID IVar3;
  ulong *self;
  undefined8 uVar4;
  
  IVar3 = 0;
  FUN_100236364();
  _objc_allocWithZone();
  self = (ulong *)objc_stub::init(IVar3);
  IVar3 = NSColor::textBackgroundColor((ID)&_OBJC_CLASS___NSColor);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self) + 0x60))(IVar3);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar4 = 0x4030000000000000;
  puVar1 = (undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0;
  if ((bVar2 & 1) == 0) {
    uVar4 = 0x4024000000000000;
    puVar1 = (undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  }
  objc_stub::setCornerRadius_curve_((ID)self,uVar4,*puVar1);
  return self;
}



/* Address: 0x1003cd9c8 | FUN_1003cd9c8 */

void FUN_1003cd9c8(void)

{
  FUN_1001f6328(0);
  _swift_allocObject();
  FUN_1001f46dc();
  return;
}



/* Address: 0x1003cd9fc | FUN_1003cd9fc */

void FUN_1003cd9fc(void)

{
  FUN_1003cdd00(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1003cda08 | FUN_1003cda08 */

void FUN_1003cda08(undefined8 *param_1)

{
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



/* Address: 0x1003cda24 | FUN_1003cda24 */

void FUN_1003cda24(void)

{
  FUN_100003a00(&DAT_100fc3230,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c45954);
  FUN_100003a00(&DAT_100fc3238,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c458a8);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1003cdaa8 | FUN_1003cdaa8 */

void FUN_1003cdaa8(void)

{
  FUN_100003a00(&DAT_100fc3240,FUN_1003cdfe0,&TargetProtocolConformanceDescriptor_100c457a4);
  FUN_100003a00(&DAT_100fc3248,FUN_1003cdfe0,&TargetProtocolConformanceDescriptor_100c45744);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1003cdb3c | FUN_1003cdb3c */

undefined * FUN_1003cdb3c(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *capacity;
  ulong local_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc31c0;
    FUN_1000037f0(&DAT_100fc31c0,&DAT_100c455b0);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      uVar4 = 0;
      FUN_1003cdf54(param_1);
      uVar3 = local_78;
      FUN_1000712c0();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cdc3c);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = local_78;
      FUN_100011080(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cdc40);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x1003cdc40 | FUN_1003cdc40 */

undefined * FUN_1003cdc40(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *capacity;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc31a0;
    uVar4 = 0;
    FUN_1000037f0();
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar3 = puVar2;
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar7 = *puVar6;
      FUN_1003dec78();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cdcfc);
        (*pcVar1)();
      }
      uVar5 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) =
           *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = uVar7;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cdd00);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      capacity = capacity + -1;
      puVar6 = puVar6 + 1;
    } while (capacity != (undefined *)0x0);
  }
  return puVar2;
}



/* Address: 0x1003cdd00 | FUN_1003cdd00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003cdd00(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *capacity;
  ulong uVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100fc31b8;
  uVar5 = 0;
  FUN_1000037f0();
  puVar2 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  thunk_FUN_10016f9fc();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cde04);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        return puVar2;
      }
      uVar8 = puVar6[-1];
      uVar4 = *puVar6;
      uVar3 = uVar8;
      thunk_FUN_10016f9fc();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003cddd4);
  (*pcVar1)();
}



/* Address: 0x1003cde04 | FUN_1003cde04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003cde04(void)

{
  return ZEXT816(0x100f98b00);
}



/* Address: 0x1003cde24 | FUN_1003cde24 */

void FUN_1003cde24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003cde30 | FUN_1003cde30 */

void FUN_1003cde30(void)

{
  return;
}



/* Address: 0x1003cde34 | FUN_1003cde34 */

void FUN_1003cde34(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc3160,&DAT_100ecf750);
  return;
}



/* Address: 0x1003cde48 | FUN_1003cde48 */

void FUN_1003cde48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1003cde54 | FUN_1003cde54 */

void FUN_1003cde54(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc3168,&DAT_100ecf7d0);
  return;
}



/* Address: 0x1003cde68 | FUN_1003cde68 */

void FUN_1003cde68(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc3170,&DAT_100ecf858);
  return;
}



/* Address: 0x1003cde7c | FUN_1003cde7c */

void FUN_1003cde7c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc3178,&DAT_100ecf880);
  return;
}



/* Address: 0x1003cde90 | FUN_1003cde90 */

void FUN_1003cde90(void)

{
  FUN_100003a00(&DAT_100fc3180,FUN_1003cde7c,&TargetProtocolConformanceDescriptor_100c45410);
  return;
}



/* Address: 0x1003cdebc | FUN_1003cdebc */

void FUN_1003cdebc(void)

{
  FUN_100003a00(&DAT_100fc3188,FUN_1003cde7c,&TargetProtocolConformanceDescriptor_100c453dc);
  return;
}



/* Address: 0x1003cdee8 | FUN_1003cdee8 */

void FUN_1003cdee8(void)

{
  FUN_100003a00(&DAT_100fc3190,FUN_1003cde7c,&TargetProtocolConformanceDescriptor_100c45508);
  return;
}



/* Address: 0x1003cdf14 | FUN_1003cdf14 */

void FUN_1003cdf14(void)

{
  FUN_100003a00(&DAT_100fc3198,FUN_1003cde7c,&TargetProtocolConformanceDescriptor_100c4543c);
  return;
}



/* Address: 0x1003cdf40 | FUN_1003cdf40 */

void FUN_1003cdf40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003ccd20(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003cdf48 | FUN_1003cdf48 */

void FUN_1003cdf48(void)

{
  long unaff_x20;
  
  FUN_1003d9018(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003cdf54 | FUN_1003cdf54 */

undefined8 FUN_1003cdf54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc31c8;
  FUN_1000037f0(&DAT_100fc31c8,&DAT_100c45b00);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003cdfa4 | FUN_1003cdfa4 */

void FUN_1003cdfa4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc31d0,&DAT_100ecf8a8);
  return;
}



/* Address: 0x1003cdfb8 | FUN_1003cdfb8 */

void FUN_1003cdfb8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc31d8,&DAT_100ecf8d0);
  return;
}



/* Address: 0x1003cdfcc | FUN_1003cdfcc */

void FUN_1003cdfcc(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc31e0,&DAT_100ecf900);
  return;
}



/* Address: 0x1003cdfe0 | FUN_1003cdfe0 */

void FUN_1003cdfe0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc31e8,&DAT_100ecf920);
  return;
}



/* Address: 0x1003cdff4 | FUN_1003cdff4 */

void FUN_1003cdff4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc31f0,&DAT_100ecf9a0);
  return;
}



/* Address: 0x1003ce008 | FUN_1003ce008 */

void FUN_1003ce008(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc31f8,&DAT_100ecf9c8);
  return;
}



/* Address: 0x1003ce01c | FUN_1003ce01c */

void FUN_1003ce01c(void)

{
  FUN_100003a00(&DAT_100fc3200,FUN_1003cdfe0,&TargetProtocolConformanceDescriptor_100c45708);
  return;
}



/* Address: 0x1003ce048 | FUN_1003ce048 */

void FUN_1003ce048(void)

{
  FUN_100003a00(&DAT_100fc3208,FUN_1003cdfe0,&TargetProtocolConformanceDescriptor_100c456dc);
  return;
}



/* Address: 0x1003ce074 | FUN_1003ce074 */

void FUN_1003ce074(void)

{
  FUN_100003a00(&DAT_100fc3210,FUN_1003cdfe0,&TargetProtocolConformanceDescriptor_100c45778);
  return;
}



/* Address: 0x1003ce0a0 | FUN_1003ce0a0 */

void FUN_1003ce0a0(void)

{
  FUN_100003a00(&DAT_100fc3218,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c4586c);
  return;
}



/* Address: 0x1003ce0cc | FUN_1003ce0cc */

void FUN_1003ce0cc(void)

{
  FUN_100003a00(&DAT_100fc3220,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c45840);
  return;
}



/* Address: 0x1003ce0f8 | FUN_1003ce0f8 */

void FUN_1003ce0f8(void)

{
  FUN_100003a00(&DAT_100fc3228,FUN_1003cdfa4,&TargetProtocolConformanceDescriptor_100c458dc);
  return;
}



/* Address: 0x1003ce124 | FUN_1003ce124 */

void FUN_1003ce124(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc3250,&DAT_100ecf9e8);
  return;
}



/* Address: 0x1003ce138 | FUN_1003ce138 */

void FUN_1003ce138(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc3258,&DAT_100ecfa08);
  return;
}



/* Address: 0x1003ce14c | thunk_FUN_1003cd814 */

void thunk_FUN_1003cd814(void)

{
  FUN_1003cd814();
  return;
}



/* Address: 0x1003ce150 | FUN_1003ce150 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ce150(ID param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  objc_stub::setContentCompressionResistancePriority_forOrientation_(param_1,0x447a0000,1);
  objc_stub::setContentHuggingPriority_forOrientation_(param_1,0x447a0000,1);
  objc_stub::setNumberOfLines_(param_1,2);
  puVar1 = (undefined8 *)objc_stub::setTextAlignment_(param_1,1);
  FUN_1001fe19c();
  objc_stub::setTextColor_(param_1,*puVar1);
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  objc_stub::setFont_(param_1,uVar2);
  return 0;
}



/* Address: 0x1003ce1f4 | FUN_1003ce1f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003ce1f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  ID self;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_100 [16];
  code *local_f0;
  undefined1 *puStack_e8;
  ID local_e0;
  undefined1 auStack_d0 [16];
  ID local_c0;
  
  _swift_getObjectType();
  lVar1 = _TtC11PasteCoreUI13FilesItemCell::imageView;
  puVar2 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  objc_stub::setImageAlignment_(IVar3,5);
  objc_stub::setImageScaling_(IVar3,3);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  lVar1 = _TtC11PasteCoreUI13FilesItemCell::pathLabel;
  self = 0;
  FUN_1003cf964();
  puVar2 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  _swift_getObjCClassFromMetadata();
  IVar3 = objc_stub::labelWithAttributedString_(self,IVar3);
  FUN_1003ce150(IVar3);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar2 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) =
       *(undefined8 *)(IVar3 + _TtC11PasteCoreUI13FilesItemCell::imageView);
  *(undefined8 *)(puVar2 + 0x28) =
       *(undefined8 *)(IVar3 + _TtC11PasteCoreUI13FilesItemCell::pathLabel);
  puStack_e8 = auStack_d0;
  local_f0 = FUN_1003cf9a4;
  puVar4 = puVar2;
  local_e0 = IVar3;
  local_c0 = IVar3;
  FUN_1001fa150(puVar2,FUN_1003cdf48,auStack_100);
  _swift_bridgeObjectRelease(puVar4);
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar3;
}



/* Address: 0x1003ce3e0 | FUN_1003ce3e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003ce3e0(long param_1,long param_2)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  ID IVar9;
  
  IVar8 = *(ID *)(param_2 + _TtC11PasteCoreUI13FilesItemCell::imageView);
  IVar1 = objc_stub::topAnchor(IVar8);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  IVar1 = objc_stub::constraintEqualToAnchor_constant_(IVar1,0x4024000000000000,uVar2);
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc32c8,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  lVar3 = param_1;
  FUN_1001f9b74(0x4028000000000000,param_1,uVar2,&PTR_PTR_100ec00e8);
  IVar9 = *(ID *)(param_2 + _TtC11PasteCoreUI13FilesItemCell::pathLabel);
  IVar4 = objc_stub::topAnchor(IVar9);
  IVar8 = objc_stub::bottomAnchor(IVar8);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,0x4028000000000000,IVar8);
  uVar2 = 0;
  FUN_1003cf964(0);
  FUN_1001f9b74(0x4028000000000000,param_1,uVar2,&PTR_PTR_100ec00e8);
  IVar8 = objc_stub::bottomAnchor(IVar9);
  IVar9 = objc_stub::bottomAnchor(*(ID *)(param_2 + _TtC11PasteCoreUI8ItemCell::shortcutView));
  IVar8 = objc_stub::constraintEqualToAnchor_constant_(IVar8,0xc000000000000000,IVar9);
  puVar5 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 10;
  *(undefined8 *)(puVar5 + 0x10) = 5;
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar5 + 0x38) = uVar2;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar5 + 0x20) = IVar1;
  puVar6 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar5 + 0x60) = puVar6;
  *(undefined ***)(puVar5 + 0x68) = &PTR_PTR_100ec00b8;
  *(long *)(puVar5 + 0x48) = lVar3;
  *(undefined8 *)(puVar5 + 0x88) = uVar2;
  *(undefined ***)(puVar5 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar5 + 0x70) = IVar4;
  *(undefined **)(puVar5 + 0xb0) = puVar6;
  *(undefined ***)(puVar5 + 0xb8) = &PTR_PTR_100ec00b8;
  *(long *)(puVar5 + 0x98) = param_1;
  *(undefined8 *)(puVar5 + 0xd8) = uVar2;
  *(undefined ***)(puVar5 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar5 + 0xc0) = IVar8;
  _swift_bridgeObjectRetain(lVar3);
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_bridgeObjectRelease(lVar3);
  _swift_setDeallocating(puVar5);
  uVar2 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar5 + 0x20,uVar2,puVar6);
  return puVar7;
}



/* Address: 0x1003ce6d8 | _TtC11PasteCoreUI13FilesItemCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC11PasteCoreUI13FilesItemCell::initWithFrame_
          (_TtC11PasteCoreUI13FilesItemCell *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteCoreUI/FilesItemCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FilesItemCell.swift",0x1f,1,0x23,UVar4.unknown,puVar3);
  }
  FUN_1003ce1f4();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x1003ce7c4 | FUN_1003ce7c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003ce7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  Data DVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  LocalizedStringResource LVar8;
  long lVar9;
  long *plVar10;
  NSString *pNVar11;
  undefined *puVar12;
  NSData *pNVar13;
  class_t *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar15;
  long unaff_x20;
  ID IVar16;
  ID IVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  String SVar20;
  ulong local_d0 [2];
  undefined *local_c0;
  objc_super local_b8;
  objc_super local_a8;
  undefined1 auStack_98 [24];
  
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = (undefined *)((long)local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_100fc3120;
  FUN_1000037f0(&DAT_100fc3120,&DAT_100c45360);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar18 = (long *)(LVar8.unknown + -extraout_x8_00);
  FUN_10031ebc8(plVar18);
  lVar9 = 0;
  FUN_100317b10();
  plVar10 = plVar18;
  (**(code **)(*(long *)(lVar9 + -8) + 0x30))(plVar18,1,lVar9);
  if ((int)plVar10 == 1) {
    FUN_100005808(plVar18,&DAT_100fc3120,&DAT_100c45360);
  }
  else {
    plVar10 = plVar18;
    _swift_getEnumCaseMultiPayload(plVar18,lVar9);
    if ((int)plVar10 == 4) {
      local_d0[1] = *plVar18;
      DVar4.unknown = (undefined *)plVar18[2];
      uVar19 = plVar18[3];
      IVar16 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI13FilesItemCell::imageView);
      local_c0 = DVar4.unknown;
      if (*(long *)(local_d0[1] + 0x10) == 1) {
        if (uVar19 >> 0x3c < 0xf) {
          puVar12 = &_OBJC_CLASS___NSImage;
          _objc_allocWithZone();
          FUN_1001037b4(DVar4.unknown,uVar19);
          pNVar13 = Foundation::Data::_bridgeToObjectiveC(DVar4);
          local_d0[0] = uVar19;
          IVar17 = objc_stub::initWithData_((ID)puVar12,pNVar13);
          uVar19 = local_d0[0];
          FUN_10003bf18(DVar4.unknown,local_d0[0]);
        }
        else {
          IVar17 = 0;
        }
        objc_stub::setImage_(IVar16,IVar17);
        uVar15 = 0;
        IVar17 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI13FilesItemCell::pathLabel);
        param_1 = extraout_d0_00;
        FUN_1003cec24(0);
        pcVar14 = (class_t *)0x0;
        FUN_1003cf964();
        local_a8.receiver = IVar17;
        local_a8.super_class = pcVar14;
        _objc_msgSendSuper2(&local_a8,"setAttributedText:",uVar15);
        local_b8.receiver = IVar17;
        local_b8.super_class = pcVar14;
        IVar16 = _objc_msgSendSuper2(&local_b8,"attributedText");
        uVar15 = *(undefined8 *)
                  (IVar17 + _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel
                            ::storedAttributedText);
        *(ID *)(IVar17 + _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::
                         storedAttributedText) = IVar16;
        FUN_1003cf000(uVar15,0);
        _swift_bridgeObjectRelease(local_d0[1]);
        FUN_10003bf18(local_c0,uVar19);
      }
      else {
        IVar17 = NSImage::imageNamed_
                           ((ID)&_OBJC_CLASS___NSImage,
                            *(undefined8 *)PTR__NSImageNameMultipleDocuments_100ea90e0);
        if (IVar17 != 0) {
          param_2 = 0x4070000000000000;
          NSImage::setSize_(IVar17,0x4070000000000000,0x4070000000000000);
        }
        objc_stub::setImage_(IVar16,IVar17);
        IVar16 = *(ID *)(unaff_x20 + _TtC11PasteCoreUI13FilesItemCell::pathLabel);
        FUN_1001c6fb0(LVar8.unknown,0);
        SVar20 = (extension_Foundation)::Swift::String::init(LVar8);
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        objc_stub::setText_(IVar16,pNVar11);
        param_1 = extraout_d0;
        _swift_bridgeObjectRelease(local_d0[1]);
        FUN_10003bf18(local_c0,uVar19);
      }
    }
    else {
      FUN_10009eff8(plVar18);
    }
  }
  lVar9 = *(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::headerView);
  pcVar1 = (char *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::preferredCompactHeaderStyle);
  _swift_beginAccess(pcVar1,auStack_98,0,0);
  cVar5 = *pcVar1;
  cVar3 = '\0';
  if (cVar5 != '\x02') {
    cVar3 = cVar5;
  }
  *(char *)(lVar9 + _TtCC11PasteCoreUI8ItemCell10HeaderView::compactStyle) = cVar3;
  FUN_1003d41b4(param_4,param_5,param_6);
  uVar7 = (uint)param_4;
  puVar2 = (undefined8 *)
           (*(long *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::shortcutView) +
           _TtCC11PasteCoreUI8ItemCell21ShortcutIndicatorView::quickPasteIndex);
  *puVar2 = param_7;
  *(undefined1 *)(puVar2 + 1) = param_8;
  FUN_1003d6444();
  FUN_10031c38c();
  FUN_100208674(uVar7 & 1);
  FUN_1003d8588();
  FUN_1003d8230();
  objc_stub::setConstant_(param_5,param_1);
  IVar16 = 0;
  FUN_1003d83c4();
  objc_stub::setConstant_(IVar16,param_2);
  IVar16 = 0;
  FUN_1003d82fc();
  objc_stub::setConstant_(IVar16,param_3);
  bVar6 = 0;
  FUN_10031f040();
  *(byte *)(unaff_x20 + _TtC11PasteCoreUI8ItemCell::isEditable) = bVar6 & 1;
  return;
}



/* Address: 0x1003cec24 | FUN_1003cec24 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003cec24(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  ulong uVar7;
  long lVar8;
  
  FUN_1003cf830();
  puVar2 = (undefined8 *)0x0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff934();
  puVar3 = &DAT_100fc32e8;
  FUN_1000037f0(&DAT_100fc32e8,&DAT_100c45b08);
  lVar4 = 0;
  FUN_100202fc8();
  lVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar7 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar3,uVar7 + lVar8 * 2,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar1 = (undefined8 *)(puVar3 + uVar7);
  *puVar1 = puVar2;
  _swift_storeEnumTagMultiPayload(puVar1,lVar4,0);
  FUN_1001fe19c();
  *(undefined8 *)((long)puVar1 + lVar8) = *puVar2;
  _swift_storeEnumTagMultiPayload((undefined *)((long)puVar1 + lVar8),lVar4,1);
  puVar5 = puVar3;
  FUN_100201eb0(puVar3,unaff_x20,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar1,*(undefined8 *)(puVar3 + 0x10),lVar4);
  _swift_deallocClassInstance(puVar3,0x20,7);
  return puVar5;
}



/* Address: 0x1003ced78 | FUN_1003ced78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ced78(void)

{
  return 0;
}



/* Address: 0x1003ceda4 | _TtC11PasteCoreUI13FilesItemCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI13FilesItemCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003ceddc | _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::attributedText */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::attributedText
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FilesItemCell.swift",0x1f,1,0x4f,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"attributedText");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1003ceeb8 | _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::setAttributedText: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC11PasteCoreUIP33_A767B84F7DFF3D98218543197143AD0B18HeadTruncatedLabel::setAttributedText_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  undefined8 uVar8;
  objc_super local_70;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fc31a8;
  FUN_100003a00(&DAT_100fc31a8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/FilesItemCell.swift",0x1f,1,0x4f,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"setAttributedText:",param_3);
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"attributedText");
  uVar8 = *(undefined8 *)(param_1 + storedAttributedText);
  *(ID *)(param_1 + storedAttributedText) = IVar7;
  FUN_1003cf000(uVar8,0);
  _swift_release(pMVar3);
  return;
}


