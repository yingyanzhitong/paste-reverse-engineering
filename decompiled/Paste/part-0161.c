/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001f2b28 | FUN_1001f2b28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f2b28(void)

{
  ID IVar1;
  
  IVar1 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  return IVar1;
}



/* Address: 0x1001f2b4c | FUN_1001f2b4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f2b4c(void)

{
  ID IVar1;
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  return IVar1;
}



/* Address: 0x1001f2b70 | FUN_1001f2b70 */

void FUN_1001f2b70(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___CAGradientLayer;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x1001f2b8c | FUN_1001f2b8c */

undefined1  [16] FUN_1001f2b8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9de20;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x1001f2ba8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::UUID::init */

UUID Foundation::UUID::init(void)

{
  UUID UVar1;
  
  UVar1 = init();
  return (UUID)UVar1.unknown;
}



/* Address: 0x1001f2bac | FUN_1001f2bac */

undefined8 FUN_1001f2bac(void)

{
  return 0;
}



/* Address: 0x1001f2bc0 | FUN_1001f2bc0 */

void FUN_1001f2bc0(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  return;
}



/* Address: 0x1001f2bdc | FUN_1001f2bdc */

void FUN_1001f2bdc(void)

{
  FUN_1001f3988(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1001f2be8 | FUN_1001f2be8 */

void FUN_1001f2be8(void)

{
  FUN_1001f3a9c(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1001f2bf4 | FUN_1001f2bf4 */

void FUN_1001f2bf4(void)

{
  ID self;
  
  self = 0;
  FUN_10022a2dc();
  _objc_allocWithZone();
  objc_stub::initWithFrame_(self,0,0,0,0);
  return;
}



/* Address: 0x1001f2c20 | FUN_1001f2c20 */

undefined8 FUN_1001f2c20(void)

{
  return 0;
}



/* Address: 0x1001f2c30 | FUN_1001f2c30 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1001f2c30(void)

{
  code *pcVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  
  lVar4 = 0x2e6e6f7276656863;
  FUN_1001f25e4(0);
  lVar2 = lVar4;
  FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
  if (lVar2 == 0) {
    lVar4 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001f2d38);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(0x2e6e6f7276656863,0xec0000006e776f64);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001f2c90);
      (*pcVar1)();
    }
  }
  IVar3 = NSImageView::imageViewWithImage_((ID)&_OBJC_CLASS___NSImageView,lVar4);
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  FUN_1000f65ec(DAT_1010577c8);
  return IVar3;
}



/* Address: 0x1001f2d38 | FUN_1001f2d38 */

ID FUN_1001f2d38(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSStackView;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  FUN_1000f668c(0);
  objc_stub::setSpacing_(self_00,0x4010000000000000);
  objc_stub::setDistribution_(self_00,2);
  objc_stub::setAlignment_(self_00,10);
  return self_00;
}



/* Address: 0x1001f2d94 | FUN_1001f2d94 */

void FUN_1001f2d94(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c34c44,param_1);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::get_hashValue();
  return;
}



/* Address: 0x1001f2dd0 | FUN_1001f2dd0 */

void FUN_1001f2dd0(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c34c44);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(param_1);
  return;
}



/* Address: 0x1001f2e18 | FUN_1001f2e18 */

void FUN_1001f2e18(__int64 param_1,undefined8 param_2)

{
  Hasher into;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c34c44,param_2);
  into.unknown = auStack_68;
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1001f2e70 | FUN_1001f2e70 */

void FUN_1001f2e70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c34c44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c34c44,param_3);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix(uVar2,uVar3,param_3,pTVar1);
  return;
}



/* Address: 0x1001f2ebc | FUN_1001f2ebc */

void FUN_1001f2ebc(void)

{
  FUN_100003a00(&DAT_100fb5e88,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c347e0);
  FUN_100003a00(&DAT_100fb5e90,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c34320);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1001f2f40 | FUN_1001f2f40 */

void FUN_1001f2f40(void)

{
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  FUN_100003a00(&DAT_100fb5e80,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c34440);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1001f2fc4 | FUN_1001f2fc4 */

void FUN_1001f2fc4(void)

{
  FUN_100003a00(&DAT_100fb5f48,FUN_1001f40b4,&TargetProtocolConformanceDescriptor_100c34bb4);
  FUN_100003a00(&DAT_100fb5f50,FUN_1001f40b4,&TargetProtocolConformanceDescriptor_100c34b54);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1001f3048 | FUN_1001f3048 */

void FUN_1001f3048(void)

{
  FUN_100003a00(&DAT_100fb5e58,FUN_1001f3de4,&TargetProtocolConformanceDescriptor_100c3470c);
  FUN_100003a00(&DAT_100fb5e60,FUN_1001f3de4,&TargetProtocolConformanceDescriptor_100c346ac);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1001f30dc | FUN_1001f30dc */

void FUN_1001f30dc(void)

{
  FUN_100003a00(&DAT_100fb5e68,FUN_1001f3e0c,&TargetProtocolConformanceDescriptor_100c345b4);
  FUN_100003a00(&DAT_100fb5e70,FUN_1001f3e0c,&TargetProtocolConformanceDescriptor_100c34554);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1001f3160 | FUN_1001f3160 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001f3240 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001f3160(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  Display DVar4;
  undefined *puVar5;
  Display DVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  DVar4 = (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar4.unknown + -8) + 0x40));
  puVar8 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fb5d38;
  FUN_1000037f0(&DAT_100fb5d38,&DAT_100c340d8);
  lVar10 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC7PasteUI24AdaptiveScalingImageView::_scaleToFillRatio;
  lVar9 = (long)puVar8 - extraout_x8_00;
  local_58 = 0x3fe999999999999a;
  DVar6 = (extension_AppKit)::__C::NSView::Invalidations::Display::init();
  FUN_1001f1fb4();
  puVar1 = 
  PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
  ;
  Invalidating::_init(lVar9,DVar6.unknown,puVar8,
                      PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528,DVar4.unknown,
                      DVar6.unknown,
                      PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
                     );
  (**(code **)(lVar10 + 0x20))(unaff_x20 + lVar2,lVar9,puVar5);
  lVar2 = _TtC7PasteUI24AdaptiveScalingImageView::_image;
  local_58 = 0;
  (extension_AppKit)::__C::NSView::Invalidations::Display::init();
  puVar5 = &DAT_100fb5d18;
  FUN_1000037f0(&DAT_100fb5d18,&DAT_100c340d0);
  puVar7 = puVar5;
  FUN_1001f255c();
  Invalidating::_init(unaff_x20 + lVar2,puVar7,puVar8,puVar5,DVar4.unknown,puVar7,puVar1);
  *(undefined4 *)(lVar9 + -8) = 0;
  *(undefined8 *)(lVar9 + -0x10) = 0x29;
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9de60);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f32fc);
  (*pcVar3)();
}



/* Address: 0x1001f32fc | FUN_1001f32fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f32fc(undefined8 param_1,double param_2)

{
  double self;
  undefined *puVar1;
  undefined *puVar2;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double dVar3;
  double extraout_d0_01;
  double extraout_d0_02;
  double extraout_d0_03;
  double extraout_d0_04;
  double extraout_d0_05;
  double extraout_d0_06;
  undefined8 extraout_d0_07;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_58;
  
  puVar1 = &DAT_100c34088;
  _swift_getKeyPath(&DAT_100c34088);
  puVar2 = &DAT_100c340b0;
  _swift_getKeyPath(&DAT_100c340b0);
  Invalidating::_get_subscript(&local_58);
  _swift_release(puVar1);
  _swift_release(puVar2);
  self = local_58;
  if (local_58 == 0.0) {
    return;
  }
  objc_stub::bounds(unaff_x20);
  dVar7 = extraout_d0;
  _CGRectGetWidth();
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0_00;
  _CGRectGetHeight();
  dVar7 = dVar7 / dVar3;
  objc_stub::size((ID)self);
  objc_stub::size((ID)self);
  param_2 = extraout_d0_01 / param_2;
  dVar3 = param_2;
  if (param_2 < dVar7) {
    dVar3 = dVar7;
  }
  dVar4 = 1.0;
  puVar1 = &DAT_100c34040;
  _swift_getKeyPath(&DAT_100c34040);
  puVar2 = &DAT_100c34068;
  _swift_getKeyPath(&DAT_100c34068);
  Invalidating::_get_subscript(&local_58);
  _swift_release(puVar1);
  _swift_release(puVar2);
  objc_stub::bounds(unaff_x20);
  if (local_58 <= 1.0 - ABS(param_2 - dVar7) / dVar3) {
    if (param_2 < dVar7) goto LAB_1001f3414;
  }
  else if (dVar7 <= param_2) {
LAB_1001f3414:
    dVar7 = extraout_d0_02;
    _CGRectGetWidth();
    objc_stub::size((ID)self);
    dVar7 = dVar7 / extraout_d0_03;
    goto LAB_1001f3448;
  }
  dVar7 = extraout_d0_02;
  _CGRectGetHeight();
  objc_stub::size((ID)self);
  dVar7 = dVar7 / dVar4;
LAB_1001f3448:
  objc_stub::size((ID)self);
  dVar6 = dVar7 * extraout_d0_04;
  objc_stub::size((ID)self);
  dVar7 = dVar7 * dVar4;
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0_05;
  _CGRectGetWidth();
  dVar4 = (dVar3 - dVar6) * 0.5;
  objc_stub::bounds(unaff_x20);
  dVar3 = extraout_d0_06;
  _CGRectGetHeight();
  dVar5 = (dVar3 - dVar7) * 0.5;
  _CGRectIntegral(dVar4,dVar5,dVar6,dVar7);
  dVar3 = dVar5;
  objc_stub::size((ID)self);
  objc_stub::drawInRect_fromRect_operation_fraction_
            ((ID)self,dVar4,dVar5,dVar6,dVar7,0,0,extraout_d0_07,dVar3,1);
  return;
}



/* Address: 0x1001f350c | FUN_1001f350c */

undefined * FUN_1001f350c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb5ed0;
    FUN_1000037f0(&DAT_100fb5ed0,&DAT_100c34868);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100fb5ed8,&DAT_100c34870);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001f3638);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100076508(auStack_88,*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001f363c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1001f363c | FUN_1001f363c */

undefined * FUN_1001f363c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb5ec0;
    FUN_1000037f0(&DAT_100fb5ec0,&DAT_100c34858);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fb5ec8,&DAT_100c34860);
      uVar1 = local_88;
      uVar4 = local_88;
      thunk_FUN_1001f5454();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f375c);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f3760);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1001f3760 | FUN_1001f3760 */

undefined * FUN_1001f3760(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb5eb8;
    FUN_1000037f0(&DAT_100fb5eb8,&DAT_100c34848);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fb7030,&DAT_100c34850);
      uVar1 = local_88;
      uVar4 = local_88;
      thunk_FUN_1001f5454();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f3880);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f3884);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1001f3884 | FUN_1001f3884 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001f3884(long param_1)

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
  this = (_DictionaryStorage *)&DAT_100fb5ea8;
  uVar5 = 0;
  FUN_1000037f0();
  puVar2 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  FUN_100071340();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar7 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar7 + 0x40) = *(ulong *)(puVar2 + uVar7 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar4;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001f3988);
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
      FUN_100071340();
      puVar6 = puVar6 + 2;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001f3958);
  (*pcVar1)();
}



/* Address: 0x1001f3988 | FUN_1001f3988 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001f3988(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *capacity;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100fb5ea0;
  uVar5 = 0;
  FUN_1000037f0();
  puVar3 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = uVar8;
  FUN_100071340();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar8;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f3a9c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        return puVar3;
      }
      uVar8 = puVar6[-1];
      uVar10 = puVar6[1];
      uVar9 = *puVar6;
      uVar4 = uVar8;
      FUN_100071340();
      puVar6 = puVar6 + 3;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f3a68);
  (*pcVar2)();
}



/* Address: 0x1001f3a9c | FUN_1001f3a9c */

undefined * FUN_1001f3a9c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb5eb0;
    FUN_1000037f0(&DAT_100fb5eb0,&DAT_100c34840);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001f3b94);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001f3b98);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1001f3b98 | FUN_1001f3b98 */

void FUN_1001f3b98(void)

{
  FUN_1001f3ba0(0);
  return;
}



/* Address: 0x1001f3ba0 | FUN_1001f3ba0 */

void FUN_1001f3ba0(undefined8 param_1)

{
  if (DAT_100fb5d68 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca7570);
  return;
}



/* Address: 0x1001f3bd8 | FUN_1001f3bd8 */

void FUN_1001f3bd8(long param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_1001f3c60();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1001f3cdc();
    if (param_2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,2,&local_30,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x1001f3c60 | FUN_1001f3c60 */

void FUN_1001f3c60(void)

{
  Display DVar1;
  Display DVar2;
  Invalidating_conflict IVar3;
  undefined **ppuVar4;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  ppuVar4 = &local_40;
  if (DAT_100fb5d78.unknown == (undefined *)0x0) {
    DVar1 = (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor();
    DVar2 = DVar1;
    FUN_1001f1fb4();
    local_40 = PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528;
    puStack_28 = 
    PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
    ;
    puStack_38 = DVar1.unknown;
    local_30 = DVar2.unknown;
    IVar3 = Invalidating::_typeMetadataAccessor();
    if (ppuVar4 == (undefined **)0x0) {
      DAT_100fb5d78 = IVar3;
    }
  }
  return;
}



/* Address: 0x1001f3cdc | FUN_1001f3cdc */

void FUN_1001f3cdc(void)

{
  undefined *puVar1;
  Display DVar2;
  Display DVar3;
  Invalidating_conflict IVar4;
  undefined **ppuVar5;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  ppuVar5 = &local_50;
  if (DAT_100fb5d80.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fb5d18;
    FUN_100005c24(&DAT_100fb5d18,&DAT_100c340d0);
    DVar2 = (extension_AppKit)::__C::NSView::Invalidations::Display::typeMetadataAccessor();
    DVar3 = DVar2;
    FUN_1001f255c();
    puStack_38 = 
    PTR___protocol_witness_table_for__extension_in_AppKit____C_NSView_Invalidations_Display___AppKit_NSViewInvalidating_in_AppKit_100ea8ef8
    ;
    local_50 = puVar1;
    puStack_48 = DVar2.unknown;
    local_40 = DVar3.unknown;
    IVar4 = Invalidating::_typeMetadataAccessor();
    if (ppuVar5 == (undefined **)0x0) {
      DAT_100fb5d80 = IVar4;
    }
  }
  return;
}



/* Address: 0x1001f3d70 | FUN_1001f3d70 */

void FUN_1001f3d70(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5d88,&DAT_100ebf6b0);
  return;
}



/* Address: 0x1001f3d84 | FUN_1001f3d84 */

void FUN_1001f3d84(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5d90,&DAT_100ebf6d0);
  return;
}



/* Address: 0x1001f3d98 | FUN_1001f3d98 */

void FUN_1001f3d98(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5d98,&DAT_100ebf6f0);
  return;
}



/* Address: 0x1001f3dac | FUN_1001f3dac */

void FUN_1001f3dac(void)

{
  return;
}



/* Address: 0x1001f3db0 | FUN_1001f3db0 */

void FUN_1001f3db0(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1001f3dbc | FUN_1001f3dbc */

void FUN_1001f3dbc(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5da0,&DAT_100ebf768);
  return;
}



/* Address: 0x1001f3dd0 | FUN_1001f3dd0 */

void FUN_1001f3dd0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5da8,&DAT_100ebf798);
  return;
}



/* Address: 0x1001f3de4 | FUN_1001f3de4 */

void FUN_1001f3de4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5db0,&DAT_100ebf7c0);
  return;
}



/* Address: 0x1001f3df8 | FUN_1001f3df8 */

void FUN_1001f3df8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5db8,&DAT_100ebf7e8);
  return;
}



/* Address: 0x1001f3e0c | FUN_1001f3e0c */

void FUN_1001f3e0c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5dc0,&DAT_100ebf818);
  return;
}



/* Address: 0x1001f3e20 | FUN_1001f3e20 */

void FUN_1001f3e20(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5dc8,&DAT_100ebf898);
  return;
}



/* Address: 0x1001f3e34 | FUN_1001f3e34 */

void FUN_1001f3e34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001f3e40 | FUN_1001f3e40 */

void FUN_1001f3e40(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5dd0,&DAT_100ebf918);
  return;
}



/* Address: 0x1001f3e54 | FUN_1001f3e54 */

void FUN_1001f3e54(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5dd8,&DAT_100ebf998);
  return;
}



/* Address: 0x1001f3e68 | FUN_1001f3e68 */

void FUN_1001f3e68(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5de0,&DAT_100ebf9c0);
  return;
}



/* Address: 0x1001f3e7c | FUN_1001f3e7c */

void FUN_1001f3e7c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5de8,&DAT_100ebfa40);
  return;
}



/* Address: 0x1001f3e90 | FUN_1001f3e90 */

void FUN_1001f3e90(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb5df0,&DAT_100ebfa68);
  return;
}



/* Address: 0x1001f3ea4 | FUN_1001f3ea4 */

void FUN_1001f3ea4(void)

{
  FUN_100003a00(&DAT_100fb5df8,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c342e4);
  return;
}



/* Address: 0x1001f3ed0 | FUN_1001f3ed0 */

void FUN_1001f3ed0(void)

{
  FUN_100003a00(&DAT_100fb5e00,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c342b8);
  return;
}



/* Address: 0x1001f3efc | FUN_1001f3efc */

void FUN_1001f3efc(void)

{
  FUN_100003a00(&DAT_100fb5e08,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c34404);
  return;
}



/* Address: 0x1001f3f28 | FUN_1001f3f28 */

void FUN_1001f3f28(void)

{
  FUN_100003a00(&DAT_100fb5e10,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c343d8);
  return;
}



/* Address: 0x1001f3f54 | FUN_1001f3f54 */

void FUN_1001f3f54(void)

{
  FUN_100003a00(&DAT_100fb5e18,FUN_1001f3e0c,&TargetProtocolConformanceDescriptor_100c34518);
  return;
}



/* Address: 0x1001f3f80 | FUN_1001f3f80 */

void FUN_1001f3f80(void)

{
  FUN_100003a00(&DAT_100fb5e20,FUN_1001f3e0c,&TargetProtocolConformanceDescriptor_100c344ec);
  return;
}



/* Address: 0x1001f3fac | FUN_1001f3fac */

void FUN_1001f3fac(void)

{
  FUN_100003a00(&DAT_100fb5e28,FUN_1001f3e0c,&TargetProtocolConformanceDescriptor_100c34588);
  return;
}



/* Address: 0x1001f3fd8 | FUN_1001f3fd8 */

void FUN_1001f3fd8(void)

{
  FUN_100003a00(&DAT_100fb5e30,FUN_1001f3de4,&TargetProtocolConformanceDescriptor_100c34670);
  return;
}



/* Address: 0x1001f4004 | FUN_1001f4004 */

void FUN_1001f4004(void)

{
  FUN_100003a00(&DAT_100fb5e38,FUN_1001f3de4,&TargetProtocolConformanceDescriptor_100c34644);
  return;
}



/* Address: 0x1001f4030 | FUN_1001f4030 */

void FUN_1001f4030(void)

{
  FUN_100003a00(&DAT_100fb5e40,FUN_1001f3de4,&TargetProtocolConformanceDescriptor_100c346e0);
  return;
}



/* Address: 0x1001f405c | FUN_1001f405c */

void FUN_1001f405c(void)

{
  FUN_100003a00(&DAT_100fb5e48,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c34474);
  return;
}



/* Address: 0x1001f4088 | FUN_1001f4088 */

void FUN_1001f4088(void)

{
  FUN_100003a00(&DAT_100fb5e50,FUN_1001f3e90,&TargetProtocolConformanceDescriptor_100c34354);
  return;
}


