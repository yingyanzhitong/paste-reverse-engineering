/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100207054 | FUN_100207054 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100207054(double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *self;
  ID self_00;
  ID IVar9;
  ID unaff_x20;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  undefined8 extraout_var;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 local_d0;
  undefined8 uStack_c8;
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
  
  auVar12 = ZEXT816(0x4066800000000000);
  objc_stub::size(unaff_x20);
  uVar10 = auVar12._0_8_;
  objc_stub::size(unaff_x20);
  objc_stub::size(unaff_x20);
  self = &_OBJC_CLASS___NSImage;
  uVar16 = extraout_var;
  _objc_allocWithZone();
  auVar13._8_8_ = uVar16;
  auVar13._0_8_ = extraout_d0_00;
  self_00 = objc_stub::initWithSize_((ID)self,auVar12._0_8_,auVar13);
  objc_stub::lockFocus(self_00);
  IVar9 = NSGraphicsContext::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  if (IVar9 != 0) {
    NSGraphicsContext::setImageInterpolation_(IVar9,3);
  }
  local_a0 = 0x3ff0000000000000;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0x3ff0000000000000;
  local_80 = 0;
  uStack_78 = 0;
  _CGAffineTransformTranslate(&local_d0,auVar12._0_8_ * 0.5,extraout_d0_00 * 0.5,&local_a0);
  uStack_98 = uStack_c8;
  local_a0 = local_d0;
  uStack_88 = uStack_b8;
  local_90 = local_c0;
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  _CGAffineTransformRotate(&local_d0,(param_1 * 3.141592653589793) / 180.0,&local_a0);
  uVar8 = uStack_a8;
  uVar7 = local_b0;
  uVar6 = uStack_b8;
  uVar16 = local_c0;
  auVar12._8_8_ = uStack_c8;
  auVar12._0_8_ = local_d0;
  uVar14 = uStack_c8;
  uVar11 = local_d0;
  objc_stub::size(unaff_x20);
  objc_stub::size(unaff_x20);
  uStack_88 = uVar6;
  local_90 = uVar16;
  uStack_78 = uVar8;
  local_80 = uVar7;
  local_a0 = uVar11;
  uStack_98 = uVar14;
  _CGAffineTransformTranslate(&local_d0,extraout_d0_01 * -0.5,auVar12._0_8_ * -0.5,&local_a0);
  IVar9 = NSGraphicsContext::currentContext((ID)&_OBJC_CLASS___NSGraphicsContext);
  if (IVar9 != 0) {
    auVar1._8_8_ = uStack_a8;
    auVar1._0_8_ = local_b0;
    auVar15._8_8_ = uStack_a8;
    auVar15._0_8_ = local_b0;
    auVar15 = NEON_ext(auVar15,auVar1,8,1);
    auVar3._8_8_ = uStack_c8;
    auVar3._0_8_ = local_d0;
    auVar2._8_8_ = uStack_c8;
    auVar2._0_8_ = local_d0;
    auVar5._8_8_ = uStack_b8;
    auVar5._0_8_ = local_c0;
    auVar4._8_8_ = uStack_b8;
    auVar4._0_8_ = local_c0;
    auVar12 = NEON_ext(auVar4,auVar5,8,1);
    auVar13 = NEON_ext(auVar2,auVar3,8,1);
    IVar9 = NSGraphicsContext::CGContext(IVar9);
    local_a0 = local_d0;
    local_90 = local_c0;
    uStack_98 = auVar13._0_8_;
    uStack_88 = auVar12._0_8_;
    local_80 = local_b0;
    uStack_78 = auVar15._0_8_;
    _CGContextConcatCTM(IVar9,&local_a0);
  }
  objc_stub::drawAtPoint_fromRect_operation_fraction_
            (unaff_x20,0,ZEXT816(0),ZEXT816(0),0,extraout_d0,uVar10,0x3ff0000000000000,1);
  objc_stub::unlockFocus(self_00);
  return self_00;
}



/* Address: 0x1002072a0 | FUN_1002072a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002072a0(undefined8 param_1,ID param_2,long param_3,char param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  ID IVar3;
  Dictionary<undefined,undefined> DVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  NSDictionary *pNVar9;
  long extraout_x1;
  ID unaff_x20;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  if (param_4 == '\x01') {
    param_2 = objc_stub::selectedRange(unaff_x20);
    param_3 = extraout_x1;
  }
  uVar1 = (undefined1)param_1;
  if (param_3 < 1) {
    objc_stub::typingAttributes(unaff_x20);
    FUN_1001f3e68(0);
    FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
    DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    FUN_100207648(param_1,0,DVar8.unknown);
    _swift_bridgeObjectRelease(DVar8.unknown);
    pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
    objc_stub::setTypingAttributes_(unaff_x20,pNVar9);
  }
  else {
    IVar3 = objc_stub::textStorage(unaff_x20);
    if (IVar3 != 0) {
      objc_stub::attributesAtIndex_effectiveRange_(IVar3,param_2,0);
      FUN_1001f3e68(0);
      FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
      DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      DVar8 = DVar4;
      FUN_100207db8(DVar4.unknown);
      _swift_bridgeObjectRelease(DVar4.unknown);
      FUN_100208290(param_1,DVar8.unknown);
      _swift_bridgeObjectRelease(DVar8.unknown);
      objc_stub::beginEditing(IVar3);
      puVar5 = &DAT_100ec0d08;
      _swift_allocObject(&DAT_100ec0d08,0x1a,7);
      *(ID *)(puVar5 + 0x10) = IVar3;
      puVar5[0x18] = uVar1;
      puVar5[0x19] = (byte)param_1 & 1;
      puVar6 = &DAT_100ec0d30;
      _swift_allocObject(&DAT_100ec0d30,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1002085a4;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      local_70 = FUN_1000386a0;
      local_90 = PTR___NSConcreteStackBlock_100ea82a0;
      local_88 = 0x42000000;
      local_80 = FUN_1002081f0;
      puStack_78 = &DAT_100ec0d48;
      local_68 = puVar6;
      aBlock = __Block_copy(&local_90);
      puVar7 = local_68;
      _swift_retain(puVar6);
      _swift_release(puVar7);
      objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar3,param_2,param_3,0,aBlock);
      __Block_release(aBlock);
      puVar7 = puVar6;
      _swift_isEscapingClosureAtFileLocation(puVar6,"",0x8a,0x31,0x28,1);
      _swift_release(puVar6);
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100207648);
        (*pcVar2)();
      }
      objc_stub::endEditing(IVar3);
      _swift_release(puVar5);
    }
  }
  IVar3 = objc_stub::undoManager(unaff_x20);
  if (IVar3 != 0) {
    puVar5 = &DAT_100ec0cb8;
    _swift_allocObject(&DAT_100ec0cb8,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar6 = &DAT_100ec0ce0;
    _swift_allocObject(&DAT_100ec0ce0,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    puVar6[0x18] = uVar1;
    *(ID *)(puVar6 + 0x20) = param_2;
    *(long *)(puVar6 + 0x28) = param_3;
    FUN_10000ec2c(0,&DAT_100fb6648,&PTR__OBJC_CLASS___NSTextView_100f8da30);
    (extension_Foundation)::__C::NSUndoManager::_registerUndo();
    _swift_release(puVar6);
  }
  return;
}



/* Address: 0x100207648 | FUN_100207648 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ulong FUN_100207648(ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ID *pIVar4;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_d0;
  ID local_b8 [3];
  undefined *puStack_a0;
  undefined1 auStack_98 [32];
  ulong local_78;
  
  uVar7 = param_2;
  local_78 = param_3;
  _swift_bridgeObjectRetain(param_3);
  if ((param_2 & 1) == 0) {
    uVar2 = param_3;
    FUN_100207db8();
    uVar11 = param_1;
    uVar7 = uVar2;
    FUN_100208290();
    _swift_bridgeObjectRelease(uVar2);
  }
  else {
    uVar11 = 1;
  }
  uVar8 = (uint)param_1 & 0xff;
  if (1 < uVar8) {
    if (uVar8 == 2) {
      uVar10 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_100ea9130;
      puStack_a0 = (undefined *)0x0;
      if ((uVar11 & 1) == 0) {
        puStack_a0 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      }
    }
    else {
      uVar10 = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_100ea9128;
      puStack_a0 = (undefined *)0x0;
      if ((uVar11 & 1) == 0) {
        puStack_a0 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      }
    }
    local_b8[0] = (ulong)~(uint)uVar11 & 1;
    if ((uVar11 & 1) == 0) {
      local_b8[2] = 0;
      local_b8[1] = 0;
      FUN_100011080(local_b8,auStack_98);
      uVar7 = param_3;
      _swift_isUniquelyReferenced_nonNull_native(param_3);
      local_b8[0] = param_3;
      FUN_100202ec0(auStack_98,uVar10,uVar7);
      return local_b8[0];
    }
    local_b8[2] = 0;
    local_b8[1] = 0;
    FUN_100201adc(local_b8);
    FUN_1001f56fc(auStack_98,uVar10);
    FUN_100201adc(auStack_98);
    return local_78;
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    return local_78;
  }
  lVar9 = *(long *)PTR__NSFontAttributeName_100ea9048;
  _swift_bridgeObjectRetain(param_3);
  lVar3 = lVar9;
  thunk_FUN_1001f5454(lVar9);
  if ((uVar7 & 1) == 0) {
    _swift_bridgeObjectRelease(param_3);
    return local_78;
  }
  FUN_10000cbfc(*(long *)(param_3 + 0x38) + lVar3 * 0x20,auStack_98);
  _swift_bridgeObjectRelease(param_3);
  lVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fb64e8,&PTR__OBJC_CLASS___NSFont_100f8d678);
  pIVar4 = local_b8;
  _swift_dynamicCast(pIVar4,auStack_98,PTR___type_metadata_for_Any_100eae0c0 + 8,lVar3,6);
  if (((ulong)pIVar4 & 1) == 0) {
    return local_78;
  }
  IVar5 = objc_stub::fontDescriptor(local_b8[0]);
  IVar5 = objc_stub::symbolicTraits(IVar5);
  IVar6 = objc_stub::fontDescriptor(local_b8[0]);
  IVar6 = objc_stub::fontDescriptorWithSymbolicTraits_(IVar6,0);
  if (IVar6 != 0) {
    uVar8 = 1;
    if ((param_1 & 0xff) == 0) {
      uVar8 = 2;
    }
    uVar1 = (uint)IVar5 & (uVar8 ^ 0xffffffff);
    if ((uVar11 & 1) == 0) {
      uVar1 = (uint)IVar5 | uVar8;
    }
    IVar5 = objc_stub::fontDescriptorWithSymbolicTraits_(IVar6,(ulong)uVar1);
    if (IVar5 != 0) goto LAB_10020791c;
  }
  IVar5 = objc_stub::fontDescriptor(local_b8[0]);
LAB_10020791c:
  objc_stub::pointSize(local_b8[0]);
  local_b8[0] = NSFont::fontWithDescriptor_size_((ID)&_OBJC_CLASS___NSFont,extraout_d0,IVar5);
  puStack_a0 = (undefined *)0;
  if (local_b8[0] != 0) {
    puStack_a0 = (undefined *)lVar3;
  }
  local_b8[1] = 0;
  local_b8[2] = 0;
  if (puStack_a0 != (undefined *)0x0) {
    FUN_100011080(local_b8,auStack_98);
    uVar7 = param_3;
    _swift_isUniquelyReferenced_nonNull_native(param_3);
    local_b8[0] = param_3;
    FUN_100202ec0(auStack_98,lVar9,uVar7);
    return local_b8[0];
  }
  FUN_100201adc(local_b8);
  FUN_1001f56fc(auStack_98,lVar9);
  FUN_100201adc(auStack_98);
  return local_78;
}



/* Address: 0x1002079f8 | FUN_1002079f8 */

void FUN_1002079f8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100207a1c | FUN_100207a1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor *
FUN_100207a1c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/XXTextView+TextTraits.swift",0x23,1,0x15,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_1002072a0(param_3,param_4,param_5,0);
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100207b20 | FUN_100207b20 */

void FUN_100207b20(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100207b44 | FUN_100207b44 */

void FUN_100207b44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100207a1c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100207b54 | FUN_100207b54 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100207b54(void)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  Dictionary<undefined,undefined> DVar9;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 extraout_x1_01;
  ID unaff_x20;
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  
  IVar2 = objc_stub::selectedRange(unaff_x20);
  IVar3 = objc_stub::attributedText(unaff_x20);
  IVar4 = objc_stub::length(IVar3);
  if ((long)IVar2 <= (long)IVar4) {
    if (SCARRY8(IVar2,extraout_x1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100207db4);
      (*pcVar1)();
    }
    IVar3 = objc_stub::length(IVar3);
    if (((long)(IVar2 + extraout_x1) <= (long)IVar3) &&
       (objc_stub::selectedRange(unaff_x20), extraout_x1_00 != 0)) {
      local_58 = PTR___swiftEmptySetSingleton_100eae0e8;
      IVar2 = objc_stub::attributedText(unaff_x20);
      IVar3 = objc_stub::selectedRange(unaff_x20);
      puVar5 = &DAT_100ec0d80;
      _swift_allocObject(&DAT_100ec0d80,0x18,7);
      *(undefined ***)(puVar5 + 0x10) = &local_58;
      puVar6 = &DAT_100ec0da8;
      _swift_allocObject(&DAT_100ec0da8,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1002085e0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      local_68 = thunk_FUN_1000386a0;
      local_88 = PTR___NSConcreteStackBlock_100ea82a0;
      local_80 = 0x42000000;
      local_78 = FUN_1002081f0;
      puStack_70 = &DAT_100ec0dc0;
      local_60 = puVar6;
      aBlock = __Block_copy(&local_88);
      puVar7 = local_60;
      _swift_retain(puVar6);
      _swift_release(puVar7);
      objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar2,IVar3,extraout_x1_01,0,aBlock)
      ;
      __Block_release(aBlock);
      puVar7 = puVar6;
      _swift_isEscapingClosureAtFileLocation(puVar6,"",0x8a,0x21,0x3f,1);
      _swift_release(puVar6);
      puVar6 = local_58;
      if (((ulong)puVar7 & 1) == 0) {
        _swift_release(puVar5);
        return puVar6;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100207db8);
      (*pcVar1)();
    }
  }
  objc_stub::typingAttributes(unaff_x20);
  FUN_1001f3e68(0);
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  DVar9 = DVar8;
  FUN_100207db8(DVar8.unknown);
  _swift_bridgeObjectRelease(DVar8.unknown);
  return DVar9.unknown;
}



/* Address: 0x100207db8 | FUN_100207db8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100207db8(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *extraout_x1;
  long lVar7;
  ID local_60;
  undefined1 auStack_58 [32];
  undefined *local_38;
  
  uVar2 = 0;
  uVar5 = 0;
  uVar6 = 0;
  local_38 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = *(long *)PTR__NSFontAttributeName_100ea9048;
    _swift_bridgeObjectRetain(param_1);
    thunk_FUN_1001f5454(lVar7);
    if (((ulong)param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar7 * 0x20,auStack_58);
      _swift_bridgeObjectRelease(param_1);
      uVar1 = 0;
      FUN_10000ec2c(0,&DAT_100fb64e8,&PTR__OBJC_CLASS___NSFont_100f8d678);
      param_2 = auStack_58;
      _swift_dynamicCast(&local_60,param_2,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar1,6);
      IVar4 = local_60;
      if ((uVar2 & 1) != 0) {
        IVar3 = objc_stub::fontDescriptor(local_60);
        IVar3 = objc_stub::symbolicTraits(IVar3);
        if (((uint)IVar3 >> 1 & 1) != 0) {
          FUN_100233964(auStack_58,0);
        }
        IVar4 = objc_stub::fontDescriptor(IVar4);
        IVar4 = objc_stub::symbolicTraits(IVar4);
        param_2 = extraout_x1;
        if ((IVar4 & 1) != 0) {
          param_2 = &DAT_00000001;
          FUN_100233964(auStack_58);
        }
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = *(long *)PTR__NSUnderlineStyleAttributeName_100ea9130;
    _swift_bridgeObjectRetain(param_1);
    thunk_FUN_1001f5454(lVar7);
    if (((ulong)param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar7 * 0x20,auStack_58);
      _swift_bridgeObjectRelease(param_1);
      param_2 = auStack_58;
      _swift_dynamicCast(&local_60,param_2,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_Int_100eac6f8,6);
      if (((uVar5 & 1) != 0) && (local_60 == 1)) {
        param_2 = (undefined1 *)0x0;
        FUN_100233964(auStack_58);
      }
    }
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar7 = *(long *)PTR__NSStrikethroughStyleAttributeName_100ea9128;
    _swift_bridgeObjectRetain(param_1);
    thunk_FUN_1001f5454(lVar7);
    if (((ulong)param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar7 * 0x20,auStack_58);
      _swift_bridgeObjectRelease(param_1);
      _swift_dynamicCast(&local_60,auStack_58,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_Int_100eac6f8,6);
      if (((uVar6 & 1) != 0) && (local_60 == 1)) {
        FUN_100233964(auStack_58,3);
      }
    }
  }
  return local_38;
}



/* Address: 0x100208024 | FUN_100208024 */

void FUN_100208024(undefined8 param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/XXTextView+TextTraits.swift",0x23,1,0x21,UVar4.unknown,puVar3);
  }
  FUN_100207db8(param_1);
  FUN_1002080e0();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002080e0 | FUN_1002080e0 */

void FUN_1002080e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uStack_51;
  
  lVar6 = 0;
  puVar5 = (ulong *)(param_1 + 0x38);
  uVar7 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar8 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar8 = uVar8 & *puVar5;
  lVar1 = lVar6;
  while( true ) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      FUN_100233964(&uStack_51,
                    *(undefined1 *)
                     (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) +
                     lVar1 * 0x40));
      lVar6 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar7 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar5,~uVar7,lVar6,0);
      return;
    }
    uVar8 = puVar5[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002081d0);
  (*pcVar3)();
}



/* Address: 0x1002081d0 | FUN_1002081d0 */

void FUN_1002081d0(void)

{
  code *in_x4;
  
  (*in_x4)();
  return;
}



/* Address: 0x1002081f0 | FUN_1002081f0 */

void FUN_1002081f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  Dictionary<undefined,undefined> DVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  FUN_1001f3e68(0);
  FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  (*pcVar1)(DVar2.unknown,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(DVar2.unknown);
  return;
}



/* Address: 0x100208290 | FUN_100208290 */

undefined1 FUN_100208290(uint param_1,undefined *param_2)

{
  ulong uVar1;
  Hasher HVar2;
  ulong uVar3;
  Hasher HVar4;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  HVar4.unknown = (undefined *)(ulong)(param_1 & 0xff);
  HVar2.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
  Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar2);
  uVar1 = Swift::Hasher::_finalize(HVar4);
  uVar3 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar1 = uVar1 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + (uVar1 >> 6) * 8 + 0x38) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar1) == (param_1 & 0xff)) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar3;
    } while ((*(ulong *)(param_2 + (uVar1 >> 6) * 8 + 0x38) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Address: 0x10020834c | FUN_10020834c */

undefined1 FUN_10020834c(__uint64 param_1,long param_2,Hasher param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar1 = Swift::Hasher::_hash(*(__int64 *)(param_2 + 0x28),param_1,param_3);
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint64 *)(*(long *)(param_2 + 0x30) + uVar1 * 8) == param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Address: 0x1002083e4 | FUN_1002083e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1002083e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5,
             undefined8 param_6,uint param_7)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  NSDictionary *pNVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  
  puVar7 = (ulong *)(param_1 + 0x40);
  uVar9 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar9 < 0x40) {
    uVar6 = ~(-1L << (-uVar9 & 0x3f));
  }
  uVar6 = uVar6 & *puVar7;
  _swift_bridgeObjectRetain();
  lVar8 = 0;
  lVar1 = lVar8;
  while( true ) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar2 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      objc_stub::removeAttribute_range_
                (param_5,*(undefined8 *)
                          (*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                          lVar1 * 0x200),param_2,param_3);
      lVar8 = lVar1;
    }
    bVar4 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar4) break;
    if ((long)(0x3f - uVar9 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar7,~uVar9,lVar8,0);
      FUN_100207648(param_6,param_7 & 1,param_1);
      FUN_1001f3e68(0);
      FUN_100003a00(&DAT_100fb5e78,FUN_1001f3e68,&TargetProtocolConformanceDescriptor_100c3479c);
      pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(param_6);
      objc_stub::addAttributes_range_(param_5,pNVar5,param_2,param_3);
      return 0;
    }
    uVar6 = puVar7[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100208580);
  (*pcVar3)();
}



/* Address: 0x100208580 | FUN_100208580 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100208580(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002085a4 | FUN_1002085a4 */

void FUN_1002085a4(void)

{
  FUN_1002083e4();
  return;
}



/* Address: 0x1002085b4 | FUN_1002085b4 */

void FUN_1002085b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x1002085c8 | FUN_1002085c8 */

void FUN_1002085c8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002085d0 | FUN_1002085d0 */

void FUN_1002085d0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002085e0 | FUN_1002085e0 */

void FUN_1002085e0(void)

{
  FUN_100208024();
  return;
}



/* Address: 0x1002085e8 | FUN_1002085e8 */

void FUN_1002085e8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002085f8 | thunk_FUN_1002085fc */

void thunk_FUN_1002085fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35758;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35758,&DAT_100ec0e68);
  DAT_100fb6650 = pTVar1;
  return;
}



/* Address: 0x1002085fc | FUN_1002085fc */

void FUN_1002085fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35758;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35758,&DAT_100ec0e68);
  DAT_100fb6650 = pTVar1;
  return;
}



/* Address: 0x10020863c | FUN_10020863c */

undefined1  [16] FUN_10020863c(void)

{
  return ZEXT816(0x100ec0e68);
}



/* Address: 0x10020864c | thunk_FUN_1002085b4 */

void thunk_FUN_1002085b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100208650 | thunk_FUN_1002085c8 */

void thunk_FUN_1002085c8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100208654 | thunk_FUN_1002085e8 */

void thunk_FUN_1002085e8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100208658 | FUN_100208658 */

uint FUN_100208658(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::isHidden(unaff_x20);
  return (uint)IVar1 ^ 1;
}



/* Address: 0x100208674 | FUN_100208674 */

void FUN_100208674(uint param_1)

{
  ID unaff_x20;
  
  objc_stub::setHidden_(unaff_x20,(ulong)((param_1 ^ 0xffffffff) & 1));
  return;
}



/* Address: 0x100208684 | FUN_100208684 */

undefined1  [16] FUN_100208684(ID *param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  IVar1 = objc_stub::isHidden(unaff_x20);
  *(byte *)(param_1 + 1) = (byte)IVar1 ^ 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_1002086c0;
  return auVar2;
}



/* Address: 0x1002086c0 | FUN_1002086c0 */

void FUN_1002086c0(ID *param_1)

{
  objc_stub::setHidden_(*param_1,(ulong)(((byte)param_1[1] ^ 0xffffffff) & 1));
  return;
}



/* Address: 0x1002086d8 | FUN_1002086d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002086d8(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong uVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ID unaff_x20;
  long lVar9;
  ulong uVar10;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002087e8);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1.unknown + uVar10 * 8 + 0x20);
      }
      else {
        uVar4 = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,param_1);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002087e4);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      pMVar5 = pMVar6;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/XXView+Extensions.swift",0x1f,1,10,UVar7.unknown,pMVar5);
      }
      objc_stub::addSubview_(unaff_x20,uVar4);
      _swift_release(pMVar6);
      uVar10 = uVar10 + 1;
    } while (lVar1 != lVar9);
  }
  return;
}



/* Address: 0x100208820 | FUN_100208820 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100208820(uint param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  void *aBlock_00;
  ID unaff_x20;
  undefined8 uVar8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [16];
  
  IVar3 = objc_stub::isHidden(unaff_x20);
  if ((param_1 & 1) != (uint)IVar3) {
    if ((param_1 & 1) == 0) {
      objc_stub::setHidden_(unaff_x20,0);
      FUN_1000f7548(0);
    }
    puVar4 = &DAT_100ec0ec0;
    _swift_allocObject(&DAT_100ec0ec0,0x19,7);
    *(ID *)(puVar4 + 0x10) = unaff_x20;
    puVar4[0x18] = (byte)param_1 & 1;
    IVar3 = CAMediaTimingFunction::functionWithName_
                      ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                       *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100eaa3c0);
    if ((param_2 & 1) == 0) {
      uVar8 = 0;
      if ((param_1 & 1) == 0) {
        uVar8 = 0x3ff0000000000000;
      }
      FUN_1000f7548(uVar8);
      objc_stub::setHidden_(unaff_x20,(ulong)(param_1 & 1));
      _swift_release(puVar4);
    }
    else {
      puVar5 = &DAT_100ec0ee8;
      _swift_allocObject(&DAT_100ec0ee8,0x38,7);
      *(undefined8 *)(puVar5 + 0x10) = 0x3fd0000000000000;
      puVar5[0x18] = 0;
      *(ID *)(puVar5 + 0x20) = IVar3;
      *(code **)(puVar5 + 0x28) = FUN_100208aec;
      *(undefined1 **)(puVar5 + 0x30) = auStack_80;
      puVar6 = &DAT_100ec0f10;
      _swift_allocObject(&DAT_100ec0f10,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_100208b84;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
      local_90 = FUN_1000386a0;
      local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000f7788;
      puStack_98 = &DAT_100ec0f28;
      local_88 = puVar6;
      aBlock = __Block_copy(&local_b0);
      puVar7 = local_88;
      _swift_retain(puVar6);
      _swift_release(puVar7);
      puVar7 = &DAT_100ec0f60;
      _swift_allocObject(&DAT_100ec0f60,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_100208b48;
      *(undefined **)(puVar7 + 0x18) = puVar4;
      local_90 = FUN_100208bf0;
      local_b0 = puVar1;
      local_a8 = 0x42000000;
      local_a0 = FUN_100030410;
      puStack_98 = &DAT_100ec0f78;
      local_88 = puVar7;
      aBlock_00 = __Block_copy(&local_b0);
      puVar7 = local_88;
      _swift_retain(puVar4);
      _swift_release(puVar7);
      NSAnimationContext::runAnimationGroup_completionHandler_
                ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
      _swift_release(puVar4);
      __Block_release(aBlock_00);
      __Block_release(aBlock);
      puVar4 = puVar6;
      _swift_isEscapingClosureAtFileLocation(puVar6,"",0x84,0x1c,0x2e,1);
      _swift_release(puVar6);
      _swift_release(puVar5);
      if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100208a94);
        (*pcVar2)();
      }
    }
  }
  return;
}



/* Address: 0x100208aec | FUN_100208aec */

void FUN_100208aec(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
  FUN_1000f7548(*(undefined8 *)(unaff_x20 + 0x10),uVar1);
  return;
}



/* Address: 0x100208b24 | FUN_100208b24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100208b24(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100208b48 | FUN_100208b48 */

void FUN_100208b48(void)

{
  long unaff_x20;
  
  objc_stub::setHidden_(*(ID *)(unaff_x20 + 0x10),(ulong)*(byte *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100208b54 | FUN_100208b54 */

void FUN_100208b54(uint param_1)

{
  FUN_100208820((param_1 ^ 0xffffffff) & 1);
  return;
}



/* Address: 0x100208b60 | FUN_100208b60 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100208b60(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100208b84 | FUN_100208b84 */

void FUN_100208b84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10021cd10(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100208b98 | FUN_100208b98 */

void FUN_100208b98(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100208ba8 | FUN_100208ba8 */

void FUN_100208ba8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100208bbc | FUN_100208bbc */

void FUN_100208bbc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100208bc4 | FUN_100208bc4 */

void FUN_100208bc4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100208bf0 | FUN_100208bf0 */

void FUN_100208bf0(void)

{
  long unaff_x20;
  
  FUN_10021ce48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100208bf8 | thunk_FUN_100208ba8 */

void thunk_FUN_100208ba8(void)

{
  FUN_100208ba8();
  return;
}



/* Address: 0x100208bfc | thunk_FUN_100208bbc */

void thunk_FUN_100208bbc(void)

{
  FUN_100208bbc();
  return;
}



/* Address: 0x100208c00 | FUN_100208c00 */

void FUN_100208c00(void)

{
  FUN_100208d64(0x402a000000000000,PTR_get_medium_100eab220);
  return;
}



/* Address: 0x100208c10 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Font::get_body */

Font SwiftUI::Font::get_body(Font param_1)

{
  Font FVar1;
  
  FVar1 = get_body(param_1);
  return (Font)FVar1.unknown;
}



/* Address: 0x100208c14 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Font::get_callout */

Font SwiftUI::Font::get_callout(Font param_1)

{
  Font FVar1;
  
  FVar1 = get_callout(param_1);
  return (Font)FVar1.unknown;
}



/* Address: 0x100208c18 | FUN_100208c18 */

void FUN_100208c18(void)

{
  FUN_100208c30(
               PTR___enum_case_for_SwiftUI_Font_TextStyle_subheadline_SwiftUI_Font_TextStyle_Type___>_SwiftUI_Font_TextStyle_100eab288
               );
  return;
}



/* Address: 0x100208c24 | FUN_100208c24 */

void FUN_100208c24(void)

{
  FUN_100208c30(
               PTR___enum_case_for_SwiftUI_Font_TextStyle_caption_SwiftUI_Font_TextStyle_Type___>_SwiftUI_Font_TextStyle_100eab298
               );
  return;
}



/* Address: 0x100208c30 | FUN_100208c30 */

undefined * FUN_100208c30(undefined4 *param_1)

{
  TextStyle TVar1;
  Design DVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  Font FVar5;
  long extraout_x8;
  long extraout_x8_00;
  Font design;
  long lVar6;
  long lVar7;
  long lVar4;
  
  puVar3 = &DAT_100fb6248;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  design.unknown = &stack0xffffffffffffffc0 + -extraout_x8;
  TVar1 = SwiftUI::Font::TextStyle::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,TVar1.value);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)design.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x68))(lVar6,*param_1,lVar4);
  DVar2 = SwiftUI::Font::Design::typeMetadataAccessor();
  FVar5.unknown = design.unknown;
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,DVar2.value) + -8) + 0x38))
            (design.unknown,1,1,CONCAT71(extraout_var_00,DVar2.value));
  SwiftUI::Font::Weight::get_medium((Weight)FVar5.unknown);
  FVar5 = SwiftUI::Font::_system((TextStyle)(__int8)lVar6,design);
  FUN_1001fab44(design.unknown);
  (**(code **)(lVar7 + 8))(lVar6,lVar4);
  return FVar5.unknown;
}



/* Address: 0x100208d44 | FUN_100208d44 */

void FUN_100208d44(void)

{
  FUN_100208d64(0x4036000000000000,PTR_get_bold_100eab210);
  return;
}



/* Address: 0x100208d54 | FUN_100208d54 */

void FUN_100208d54(void)

{
  FUN_100208d64(0x402a000000000000,PTR_get_regular_100eab228);
  return;
}



/* Address: 0x100208d64 | FUN_100208d64 */

undefined * FUN_100208d64(CGFloat param_1,code *param_2)

{
  Design DVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  Font FVar3;
  long extraout_x8;
  
  puVar2 = &DAT_100fb6248;
  FUN_1000037f0(&DAT_100fb6248,&DAT_100c35100);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_2)();
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar3 = SwiftUI::Font::_system(param_1,(Font)0x0);
  FUN_1001fab44(&stack0xffffffffffffffd0 + -extraout_x8);
  return FVar3.unknown;
}



/* Address: 0x100208e1c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::SwiftUI::Font::get_callout */

Font SwiftUI::Font::get_callout(Font param_1)

{
  Font FVar1;
  
  FVar1 = get_callout(param_1);
  return (Font)FVar1.unknown;
}



/* Address: 0x100208e20 | FUN_100208e20 */

undefined8 FUN_100208e20(void)

{
  return 0x4034000000000000;
}



/* Address: 0x100208e28 | FUN_100208e28 */

undefined8 FUN_100208e28(void)

{
  return 0x4018000000000000;
}



/* Address: 0x100208e30 | FUN_100208e30 */

undefined8 FUN_100208e30(void)

{
  return 0x4028000000000000;
}



/* Address: 0x100208e38 | FUN_100208e38 */

undefined8 FUN_100208e38(void)

{
  return 0x402c000000000000;
}



/* Address: 0x100208e40 | FUN_100208e40 */

undefined8 FUN_100208e40(void)

{
  return 0x4030000000000000;
}



/* Address: 0x100208e48 | FUN_100208e48 */

undefined8 FUN_100208e48(void)

{
  return 0x4032000000000000;
}


