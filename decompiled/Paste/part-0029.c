/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000518d8 | FUN_1000518d8 */

void FUN_1000518d8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  __int64 _Var3;
  undefined *puVar4;
  long unaff_x20;
  String SVar5;
  
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___documentContainerView)
       = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___leadingShadowOverlay)
       = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___trailingShadowOverlay)
       = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::contentInset);
  puVar1[1] = 0x401c000000000000;
  *puVar1 = 0x4018000000000000;
  puVar1[3] = 0x401c000000000000;
  puVar1[2] = 0x4018000000000000;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var3 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste16TabBarScrollView::cancellables) = puVar4;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e9e0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000519bc);
  (*pcVar2)();
}



/* Address: 0x1000519bc | FUN_1000519bc */

void FUN_1000519bc(void)

{
  long unaff_x20;
  
  FUN_1000506e0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000519c4 | FUN_1000519c4 */

void FUN_1000519c4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000519e8 | FUN_1000519e8 */

void FUN_1000519e8(void)

{
  FUN_100050bb4();
  return;
}



/* Address: 0x1000519f0 | FUN_1000519f0 */

void FUN_1000519f0(void)

{
  FUN_100050cac();
  return;
}



/* Address: 0x1000519f8 | FUN_1000519f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000519f8(undefined8 param_1)

{
  ID IVar1;
  undefined8 uVar2;
  NSString *pNVar3;
  undefined8 extraout_x1;
  ID unaff_x20;
  
  IVar1 = objc_stub::imageView(unaff_x20);
  if (IVar1 != 0) {
    uVar2 = param_1;
    FUN_100051d2c(param_1);
    objc_stub::setImage_(IVar1,uVar2);
  }
  IVar1 = objc_stub::textField(unaff_x20);
  if (IVar1 != 0) {
    objc_stub::setMaximumNumberOfLines_(IVar1,2);
  }
  IVar1 = objc_stub::textField(unaff_x20);
  if (IVar1 != 0) {
    uVar2 = extraout_x1;
    FUN_100051ec8(param_1);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar2);
    objc_stub::setStringValue_(IVar1,pNVar3);
    return 0;
  }
  return 0;
}



/* Address: 0x100051ae0 | _TtC5Paste21PasteStackSnippetCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste21PasteStackSnippetCell::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  ID IVar6;
  objc_super local_60;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/PasteStackSnippetCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackSnippetCell.swift",0x21,1,4,UVar4.unknown,puVar3);
  }
  FUN_100051d0c();
  local_60.receiver = param_1;
  local_60.super_class = (class_t *)pcVar5;
  IVar6 = _objc_msgSendSuper2(&local_60,"initWithFrame:");
  _swift_release(pMVar2);
  return IVar6;
}



/* Address: 0x100051bd8 | _TtC5Paste21PasteStackSnippetCell::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste21PasteStackSnippetCell::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  ID IVar6;
  objc_super local_50;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/PasteStackSnippetCell.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackSnippetCell.swift",0x21,1,4,UVar4.unknown,puVar3);
  }
  FUN_100051d0c();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar5;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar2);
  return IVar6;
}



/* Address: 0x100051cdc | FUN_100051cdc */

void FUN_100051cdc(void)

{
  FUN_100051d0c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100051d0c | FUN_100051d0c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100051d0c(void)

{
  return ZEXT816(0x100f90f90);
}



/* Address: 0x100051d2c | FUN_100051d2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100051d2c(uint param_1)

{
  code *pcVar1;
  NSString *pNVar2;
  ID IVar3;
  
  FUN_10031eba8();
  param_1 = param_1 & 0xff;
  if (param_1 < 4) {
    if (param_1 == 2) {
LAB_100051dbc:
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar3 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar2);
      if (IVar3 != 0) {
        return IVar3;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100051e10);
      (*pcVar1)();
    }
    if (param_1 == 3) {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar3 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar2);
      if (IVar3 != 0) {
        return IVar3;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100051dac);
      (*pcVar1)();
    }
  }
  else {
    if (param_1 == 4) {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar3 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar2);
      if (IVar3 != 0) {
        return IVar3;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100051ec8);
      (*pcVar1)();
    }
    if (param_1 == 5) goto LAB_100051dbc;
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSImage::imageNamed_((ID)&_OBJC_CLASS___NSImage,pNVar2);
  if (IVar3 != 0) {
    return IVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100051e64);
  (*pcVar1)();
}



/* Address: 0x100051ec8 | FUN_100051ec8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100051ec8(void)

{
  Slice<CharacterView> SVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  CharacterView CVar7;
  void *pvVar8;
  long *plVar9;
  char *pcVar10;
  Index IVar11;
  URL UVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long lVar13;
  long lVar14;
  AttributedString AVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  long alStack_90 [3];
  undefined *puStack_78;
  long local_70;
  Slice<CharacterView> local_68;
  
  puStack_78 = (undefined *)Foundation::URL::typeMetadataAccessor();
  alStack_90[2] = *(long *)(puStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(alStack_90[2] + 0x40));
  lVar14 = (long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  alStack_90[1] = lVar14;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fa8c58;
  FUN_1000037f0(&DAT_100fa8c58,&DAT_100c25a28);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar14 - extraout_x8_01;
  puVar6 = &DAT_100fa8c60;
  FUN_1000037f0(&DAT_100fa8c60,&DAT_100c25a30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68.unknown = (undefined *)(lVar16 - extraout_x8_02);
  CVar7 = Foundation::AttributedString::CharacterView::typeMetadataAccessor();
  local_70 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  lVar17 = (lVar16 - extraout_x8_02) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_10031a030();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar18 = lVar17 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fa8c68;
  FUN_1000037f0(&DAT_100fa8c68,&DAT_100c25ae0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  AVar15.unknown = (undefined *)(lVar18 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)AVar15.unknown - extraout_x12;
  FUN_10031ebc8(lVar13);
  pvVar8 = (void *)0x0;
  FUN_100317b10();
  lVar5 = lVar13;
  (**(code **)(*(long *)((long)pvVar8 + -8) + 0x30))(lVar13,1,pvVar8);
  if ((int)lVar5 != 1) {
    FUN_100052388(lVar13,AVar15.unknown);
    plVar9 = (long *)AVar15.unknown;
    _swift_getEnumCaseMultiPayload(AVar15.unknown,pvVar8);
    iVar4 = (int)plVar9;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        FUN_1000523d8(AVar15.unknown,lVar18,FUN_10031a030);
        Foundation::AttributedString::get_characters(AVar15);
        FUN_100003a00(&DAT_100fa6c90,PTR_typeMetadataAccessor_100ea6e40,
                      PTR_Foundation__Foundation__AttributedString__CharacterView_>Swift__Collection_100ea6e58
                     );
        Swift::Collection::_get_startIndex();
        IVar11 = Foundation::AttributedString::Index::typeMetadataAccessor();
        puVar6 = &DAT_100fa8c70;
        FUN_100003a00(&DAT_100fa8c70,PTR_typeMetadataAccessor_100ea6e60,
                      PTR_Foundation__Foundation__AttributedString__Index_>Swift__Equatable_100ea6e78
                     );
        bVar3 = Swift::Equatable::___infix(lVar16,lVar16,IVar11.cmsgPointer.unknown,puVar6);
        SVar1.unknown = local_68.unknown;
        if (!bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100052388);
          (*pcVar2)();
        }
        FUN_1000102f8(local_68.unknown,lVar16);
        FUN_100005808(lVar16,&DAT_100fa8c58,&DAT_100c25a28);
        (**(code **)(local_70 + 8))(lVar17,CVar7.unknown);
        SVar19 = (extension_Foundation)::Swift::String::init(SVar1);
        FUN_10005241c(lVar18,FUN_10031a030);
      }
      else {
        FUN_1000523d8(AVar15.unknown,lVar14,FUN_1003187b8);
        SVar19 = Foundation::URL::get_absoluteString((URL)AVar15.unknown);
        FUN_10005241c(lVar14,FUN_1003187b8);
      }
      goto LAB_1000520f0;
    }
    if (iVar4 == 2) {
      FUN_10005241c(AVar15.unknown,FUN_100317b10);
    }
    else {
      if (iVar4 == 3) {
        pcVar10 = *(char **)AVar15.unknown;
        FUN_100312538(pcVar10);
        FUN_100206b5c();
        SVar19.bridgeObject = pvVar8;
        SVar19.str = pcVar10;
        goto LAB_1000520f0;
      }
      lVar16 = *(long *)AVar15.unknown;
      lVar5 = *(long *)((long)AVar15.unknown + 0x10);
      lVar14 = *(long *)((long)AVar15.unknown + 0x18);
      if (1 < *(ulong *)(lVar16 + 0x10)) {
        FUN_100308f88();
        SVar19.bridgeObject = pvVar8;
        SVar19.str = (char *)plVar9;
        _swift_bridgeObjectRelease(lVar16);
        FUN_10003bf18(lVar5,lVar14);
        goto LAB_1000520f0;
      }
      if (*(ulong *)(lVar16 + 0x10) != 0) {
        UVar12.unknown = *(undefined **)(lVar16 + 0x28);
        _swift_bridgeObjectRetain(UVar12.unknown);
        lVar17 = alStack_90[1];
        Foundation::URL::_init();
        _swift_bridgeObjectRelease();
        SVar19 = Foundation::URL::get_lastPathComponent(UVar12);
        _swift_bridgeObjectRelease(lVar16);
        FUN_10003bf18(lVar5,lVar14);
        (**(code **)(alStack_90[2] + 8))(lVar17,puStack_78);
        goto LAB_1000520f0;
      }
      _swift_bridgeObjectRelease(lVar16);
      FUN_10003bf18(lVar5,lVar14);
    }
  }
  SVar19.bridgeObject = &DAT_e700000000000000;
  SVar19.str = (char *)0x6e776f6e6b6e55;
LAB_1000520f0:
  FUN_100005808(lVar13,&DAT_100fa8c68,&DAT_100c25ae0);
  return SVar19;
}



/* Address: 0x100052388 | FUN_100052388 */

undefined8 FUN_100052388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa8c68;
  FUN_1000037f0(&DAT_100fa8c68,&DAT_100c25ae0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000523d8 | FUN_1000523d8 */

undefined8 FUN_1000523d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10005241c | FUN_10005241c */

undefined8 FUN_10005241c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100052458 | FUN_100052458 */

undefined8 FUN_100052458(char *param_1,undefined *param_2,long param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  String SVar7;
  undefined1 auStack_88 [72];
  
  if (*(long *)(param_3 + 0x10) == 0) {
    return 0;
  }
  Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
  into.unknown = auStack_88;
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  Swift::String::hash(into,SVar7);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_3 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        return 1;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(param_3 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Address: 0x100052540 | FUN_100052540 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100052540(__CocoaSet param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_10000ec2c(0,&DAT_100fa8f48,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
      uVar2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(param_2 + 0x28));
      uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
        do {
          bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix
                            (*(NSObject **)(*(long *)(param_2 + 0x30) + uVar2 * 8),
                             (NSObject *)param_1.unknown);
          if (bVar1) {
            return true;
          }
          uVar2 = uVar2 + 1 & ~uVar3;
        } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
        return false;
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = Swift::__CocoaSet::_contains(param_1);
  }
  return bVar1;
}



/* Address: 0x100052658 | FUN_100052658 */

undefined1 FUN_100052658(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x110,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x110);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x120);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x140);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x100052734 | FUN_100052734 */

undefined8 FUN_100052734(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  undefined **ppuStack_e8;
  undefined1 auStack_e0 [48];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = &DAT_100c25b48;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa8f60;
  FUN_1000037f0(&DAT_100fa8f60,&DAT_100c28a40);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0xb8) = puVar1;
  puVar1 = &DAT_100c25b80;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa6690;
  FUN_1000037f0(&DAT_100fa6690,&DAT_100c22ee0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0xc0) = puVar1;
  puVar1 = &DAT_100c25bb0;
  puVar3 = puVar1;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  puVar4 = puVar2;
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 200) = puVar3;
  puVar3 = &DAT_100c25be0;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0xd0) = puVar3;
  _swift_getKeyPath(&DAT_100c25c18);
  FUN_1002cb7e0(&local_b0);
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0xd8) = local_b0;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0xf8) = local_90;
  *(undefined8 *)(unaff_x20 + 0x108) = local_80;
  _swift_getKeyPath(&DAT_100c25c40);
  FUN_1002cb7e0(&local_78);
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x110) = local_78;
  *(undefined8 *)(unaff_x20 + 0x128) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x120) = local_68;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x130) = local_58;
  *(undefined8 *)(unaff_x20 + 0x140) = local_48;
  _swift_getKeyPath(&DAT_100c25bb0);
  _swift_initStackObject(puVar2,auStack_e0);
  FUN_1000da6e0(puVar1,puVar2);
  uVar5 = 0;
  FUN_1001adc9c();
  ppuStack_e8 = &PTR_PTR_100eafe58;
  local_f0 = uVar5;
  FUN_1000da768(auStack_108);
  FUN_1003b9234(param_1,auStack_108);
  _swift_release(puVar1);
  return param_1;
}



/* Address: 0x100052960 | FUN_100052960 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100052960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar8;
  long unaff_x20;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  ulong local_88 [3];
  undefined8 local_70;
  undefined **ppuStack_68;
  
  puVar1 = &DAT_100fa8ef8;
  FUN_1000037f0(&DAT_100fa8ef8,&DAT_100c25af8);
  lVar13 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa8f00;
  puVar7 = &DAT_100c25b00;
  FUN_1000037f0(&DAT_100fa8f00,&DAT_100c25b00);
  lVar14 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_f0 + -extraout_x8 + -extraout_x8_00;
  uVar10 = *(ulong *)(unaff_x20 + 0x40);
  AVar12.unknown = (undefined *)(uVar10 >> 0x3e);
  uVar11 = (uint)(uVar10 >> 0x3e);
  if (uVar11 != 0) {
    if (uVar11 == 1) {
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1003fc824();
      uVar3 = 0;
      FUN_1001adc9c();
      ppuStack_68 = &PTR_PTR_100ec6cd0;
      local_70 = uVar3;
      FUN_1000da768(local_88);
      FUN_100400328(0);
      _swift_initStackObject();
      FUN_100400184(puVar2,puVar7,local_88);
      puVar7 = puVar2;
      FUN_1003ffeac();
      puVar4 = puVar7;
      FUN_1001aeb1c();
      local_e8 = puVar4;
      _swift_retain(puVar7);
      FUN_1000037f0(&DAT_100fa8f08,&DAT_100c25b08);
      FUN_1000037f0(&DAT_100fa8f10,&DAT_100c25b10);
      FUN_100016eac(&DAT_100fa8f18,&DAT_100fa8f08,&DAT_100c25b08,
                    PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                   );
      (extension_Combine)::Combine::Publisher::_map();
      _swift_release(puVar4);
      _swift_release(puVar7);
      FUN_100016eac(&DAT_100fa8f20,&DAT_100fa8ef8,&DAT_100c25af8,
                    PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
                   );
      AVar12 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
      _swift_release(puVar7);
      _swift_release(puVar2);
      pcVar8 = *(code **)(lVar13 + 8);
      puVar9 = auStack_f0 + -extraout_x8;
      puVar2 = puVar1;
    }
    else {
      uVar5 = uVar10 & 0x3fffffffffffffff;
      FUN_1003b8c94();
      uVar6 = uVar5;
      FUN_1001aeb1c();
      _swift_release(uVar5);
      puVar1 = &DAT_100eb1db8;
      local_88[0] = uVar6;
      _swift_allocObject(&DAT_100eb1db8,0x18,7);
      _swift_weakInit(puVar1 + 0x10);
      puVar7 = &DAT_100eb1de0;
      _swift_allocObject(&DAT_100eb1de0,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar1;
      *(ulong *)(puVar7 + 0x18) = uVar10 & 0x3fffffffffffffff;
      FUN_1000037f0(&DAT_100fa8370,&DAT_100c25468);
      FUN_1000037f0(&DAT_100fa8f10,&DAT_100c25b10);
      FUN_100016eac(&DAT_100fa8378,&DAT_100fa8370,&DAT_100c25468,
                    PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                   );
      (extension_Combine)::Combine::Publisher::_map();
      _swift_release(uVar6);
      _swift_release(puVar7);
      FUN_100016eac(&DAT_100fa8f28,&DAT_100fa8f00,&DAT_100c25b00,
                    PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
                   );
      AVar12 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
      FUN_100021e40(uVar10);
      pcVar8 = *(code **)(lVar14 + 8);
    }
    (*pcVar8)(puVar9,puVar2);
  }
  return AVar12.unknown;
}



/* Address: 0x100052ce4 | FUN_100052ce4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100052ce4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  MainActor *pMVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined1 auStack_1d8 [88];
  undefined *local_180;
  long lStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *local_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(this,this);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar13 = puVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionViewModel.swift",0x23,1,0x24,UVar7.unknown,puVar13);
  }
  pMVar9 = (MainActor *)(param_3 + 0x10);
  _swift_weakLoadStrong();
  puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (pMVar9 != (MainActor *)0x0) {
    FUN_100052fdc(&local_c8,param_4);
    _swift_release();
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lStack_c0 != 0) {
      uStack_148 = uStack_90;
      local_150 = local_98;
      uStack_138 = uStack_80;
      uStack_140 = local_88;
      local_130 = local_78;
      lStack_178 = lStack_c0;
      local_180 = local_c8;
      uStack_168 = uStack_b0;
      local_170 = local_b8;
      uStack_158 = uStack_a0;
      local_160 = local_a8;
      uStack_f8 = uStack_a0;
      local_100 = local_a8;
      uStack_e8 = uStack_90;
      uStack_f0 = local_98;
      uStack_d8 = uStack_80;
      local_e0 = local_88;
      local_d0 = local_78;
      lStack_118 = lStack_c0;
      local_120 = local_c8;
      uStack_108 = uStack_b0;
      uStack_110 = local_b8;
      pMVar9 = (MainActor *)&local_120;
      FUN_100054220(pMVar9,auStack_1d8);
      pMVar9 = Swift::MainActor::get_shared(this,pMVar9);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionViewModel.swift",0x23,1,0x25,UVar7.unknown,puVar6);
      }
      FUN_100005808(&local_c8,&DAT_100fa8f30,&DAT_100c25b20);
      puVar10 = &DAT_100fa8f38;
      FUN_1000037f0(&DAT_100fa8f38,&DAT_100c25b28);
      _swift_allocObject();
      *(undefined8 *)(puVar10 + 0x58) = uStack_148;
      *(undefined8 *)(puVar10 + 0x50) = local_150;
      *(undefined8 *)(puVar10 + 0x68) = uStack_138;
      *(undefined8 *)(puVar10 + 0x60) = uStack_140;
      *(undefined8 *)(puVar10 + 0x18) = 2;
      *(undefined8 *)(puVar10 + 0x10) = 1;
      *(long *)(puVar10 + 0x28) = lStack_178;
      *(undefined **)(puVar10 + 0x20) = local_180;
      *(undefined8 *)(puVar10 + 0x70) = local_130;
      *(undefined8 *)(puVar10 + 0x38) = uStack_168;
      *(undefined8 *)(puVar10 + 0x30) = local_170;
      *(undefined8 *)(puVar10 + 0x48) = uStack_158;
      *(undefined8 *)(puVar10 + 0x40) = local_160;
      _swift_release();
    }
  }
  FUN_1003541f4();
  FUN_100052540();
  puVar11 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)pMVar9 & 1) != 0) {
    lVar14 = *(long *)(puVar10 + 0x10);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar14 != 0) {
      local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100071750(0,lVar14,0);
      puVar6 = (undefined8 *)(puVar10 + 0x28);
      puVar12 = local_120;
      do {
        uVar1 = puVar6[-1];
        uVar3 = *puVar6;
        uVar2 = *(ulong *)(puVar12 + 0x10);
        uVar4 = *(ulong *)(puVar12 + 0x18);
        local_120 = puVar12;
        _swift_bridgeObjectRetain(uVar3);
        if (uVar4 >> 1 <= uVar2) {
          FUN_100071750(1 < uVar4,uVar2 + 1,1);
          puVar12 = local_120;
        }
        puVar6 = puVar6 + 0xb;
        *(ulong *)(puVar12 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar12 + uVar2 * 0x10 + 0x20) = uVar1;
        *(undefined8 *)(puVar12 + uVar2 * 0x10 + 0x28) = uVar3;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
    }
    puVar11 = puVar12;
    FUN_100074aa8();
    _swift_bridgeObjectRelease(puVar12);
  }
  puVar12 = puVar10;
  FUN_100089e8c();
  _swift_release(pMVar5);
  _swift_bridgeObjectRelease(puVar10);
  *param_1 = puVar12;
  param_1[1] = puVar11;
  return;
}



/* Address: 0x100052fdc | FUN_100052fdc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100052fdc(undefined8 *param_1,undefined8 param_2)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  long *plVar15;
  String SVar16;
  char *local_70 [2];
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100fa8f40;
  FUN_1000037f0(&DAT_100fa8f40,&DAT_100c25b30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)LVar1.unknown - extraout_x8_00;
  lVar3 = 0;
  FUN_100325588();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  plVar15 = (long *)(lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100329fe0(lVar8);
  lVar9 = lVar8;
  (**(code **)(lVar12 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar9 == 1) {
    FUN_100005808(lVar8,&DAT_100fa8f40,&DAT_100c25b30);
    uVar6 = 0;
    local_70[1] = (char *)0x0;
    local_70[0] = (char *)0x0;
    pvVar13 = (void *)0x0;
    SVar16 = (String)ZEXT816(0);
    uVar10 = 0;
    uVar14 = 0;
    lVar9 = 0;
    pcVar5 = (code *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    FUN_10005425c(lVar8,plVar15);
    lVar9 = *plVar15;
    uVar11 = *(ulong *)(lVar9 + 0x10);
    if (uVar11 >> 0x1f != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100053240);
      (*pcVar5)();
    }
    local_70[1] = (char *)0x8000000100d8ea40;
    _swift_bridgeObjectRetain(lVar9);
    thunk_FUN_1001e6ee8(LVar1.unknown,uVar11);
    SVar16 = (extension_Foundation)::Swift::String::init(LVar1);
    pvVar13 = SVar16.bridgeObject;
    local_70[0] = SVar16.str;
    FUN_1001e4ff8(LVar1.unknown);
    SVar16 = (extension_Foundation)::Swift::String::init(LVar1);
    pcVar4 = SVar16.str;
    FUN_10020cc18();
    uVar10 = *(undefined8 *)pcVar4;
    uVar14 = *(undefined8 *)(pcVar4 + 8);
    _swift_bridgeObjectRetain(uVar14);
    FUN_10005241c(plVar15,FUN_100325588);
    puVar2 = &DAT_100eb1db8;
    _swift_allocObject(&DAT_100eb1db8,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    puVar7 = &DAT_100eb1e08;
    _swift_allocObject(&DAT_100eb1e08,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar2;
    *(undefined8 *)(puVar7 + 0x18) = param_2;
    pcVar5 = FUN_1000542a0;
    uVar6 = 0xd000000000000011;
  }
  *param_1 = uVar6;
  param_1[1] = local_70[1];
  param_1[2] = local_70[0];
  param_1[3] = pvVar13;
  *(String *)(param_1 + 4) = SVar16;
  param_1[6] = uVar10;
  param_1[7] = uVar14;
  param_1[8] = lVar9;
  param_1[9] = pcVar5;
  param_1[10] = puVar7;
  return;
}



/* Address: 0x100053240 | FUN_100053240 */

void FUN_100053240(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_3;
  uVar6 = *param_2;
  uVar7 = param_2[1];
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionViewModel.swift",0x23,1,0x32,UVar3.unknown,puVar2);
  }
  puVar5 = &DAT_100fa8f50;
  FUN_100016eac(&DAT_100fa8f50,&DAT_100fa8f58,&DAT_100c25b40,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b87d8(uVar6,uVar7,uVar8,puVar5);
  uVar7 = uVar6;
  FUN_100089fe0();
  _swift_bridgeObjectRelease(uVar6);
  *param_1 = uVar7;
  _swift_release(pMVar1);
  param_1[1] = PTR___swiftEmptySetSingleton_100eae0e8;
  return;
}



/* Address: 0x100053374 | FUN_100053374 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100053488 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100053374(void)

{
  Publisher PVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  undefined8 unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  
  PVar1 = Publisher::_typeMetadataAccessor();
  lVar9 = *(long *)(PVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa8ed8;
  FUN_1000037f0(&DAT_100fa8ed8,&DAT_100c25ae8);
  lVar8 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa8ee0;
  FUN_1000037f0(&DAT_100fa8ee0,&DAT_100c25af0);
  lVar6 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a6cc();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar7,puVar3,0);
  puVar4 = &DAT_100eb1db8;
  _swift_allocObject(&DAT_100eb1db8,0x18,7);
  _swift_weakInit(puVar4 + 0x10,unaff_x20);
  FUN_100003a00(&DAT_100fa6698,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  (extension_Combine)::Combine::Publisher::_filter();
  _swift_release(puVar4);
  (**(code **)(lVar9 + 8))(puVar7,PVar1.unknown);
  FUN_100016eac(&DAT_100fa8ee8,&DAT_100fa8ed8,&DAT_100c25ae8,
                PTR_Combine__Combine__Publishers__Filter<undefined>_>Combine__Publisher_100ea96f0);
  (extension_Combine)::Combine::Publisher::_map();
  (**(code **)(lVar8 + 8))((long)puVar7 - extraout_x8_00,puVar2);
  FUN_100016eac(&DAT_100fa8ef0,&DAT_100fa8ee0,&DAT_100c25af0,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  AVar5 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(lVar6 + 8))(((long)puVar7 - extraout_x8_00) - extraout_x8_01,puVar3);
  return AVar5.unknown;
}



/* Address: 0x1000535e4 | FUN_1000535e4 */

bool FUN_1000535e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ulong uVar7;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionViewModel.swift",0x23,1,0x3e,UVar5.unknown,puVar4);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    bVar2 = false;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x40);
    FUN_10000444c(uVar7);
    _swift_release(param_2);
    bVar2 = uVar7 >> 0x3e == 1;
    FUN_100021e40(uVar7);
  }
  _swift_release(pMVar3);
  return bVar2;
}



/* Address: 0x1000536c8 | FUN_1000536c8 */

void FUN_1000536c8(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionViewModel.swift",0x23,1,0x3f,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100053760 | FUN_100053760 */

uint FUN_100053760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  LocalizedStringResource LVar4;
  undefined8 *puVar5;
  long extraout_x8;
  String SVar6;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  puVar5 = param_1;
  FUN_1003b936c(param_1,param_2,param_3,param_4);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
    (extension_AppKit)::__C::NSSound::beep();
  }
  else {
    FUN_1003b9490(param_1,1,param_3,param_4);
    FUN_1000da768(&local_48);
    FUN_10020c980();
    uVar1 = *param_1;
    uVar2 = param_1[1];
    _swift_bridgeObjectRetain(uVar2);
    FUN_1001c482c(auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SVar6 = (extension_Foundation)::Swift::String::init
                      ((LocalizedStringResource)
                       (auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    FUN_10020b084(uVar1,uVar2,SVar6.str,SVar6.bridgeObject,0,0,0,0);
    _swift_release(local_48);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000538b4);
      (*pcVar3)();
    }
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
  }
  return (uint)puVar5 & 1;
}



/* Address: 0x1000538b4 | FUN_1000538b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000538b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  LocalizedStringResource LVar1;
  char *pcVar2;
  char *pcVar3;
  long extraout_x8;
  String SVar4;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001c6aa4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar4 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pcVar2 = SVar4.str;
  pcVar3 = pcVar2;
  FUN_100324a80();
  FUN_1003bb08c(pcVar2,SVar4.bridgeObject,pcVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  FUN_1003b9a78(param_1,pcVar2,FUN_100022ad0,0,0,0,param_2,param_3);
  return 0;
}



/* Address: 0x100053988 | FUN_100053988 */

void FUN_100053988(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100053a18,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100053a18 | FUN_100053a18 */

void FUN_100053a18(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  FUN_1000da768(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_100ae641c();
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100053a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100053a64 | FUN_100053a64 */

void FUN_100053a64(undefined8 param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 local_31;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionViewModel.swift",0x23,1,0xc5,UVar3.unknown,puVar2);
  }
  puVar5 = &DAT_100c25a98;
  _swift_getKeyPath(&DAT_100c25a98);
  puVar6 = &DAT_100c25ac0;
  _swift_getKeyPath(&DAT_100c25ac0);
  local_31 = 1;
  _swift_retain(param_1);
  FUN_1002cb5a0(&local_31,param_1,puVar5,puVar6);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100053b50 | FUN_100053b50 */

void FUN_100053b50(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100053b94(param_2);
    _swift_release(param_1);
    return;
  }
  return;
}



/* Address: 0x100053b94 | FUN_100053b94 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100053c04) */

void FUN_100053b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  NSArray *pNVar5;
  ID IVar6;
  undefined8 local_68;
  
  uVar4 = param_1;
  FUN_1003decbc();
  FUN_1000da768(&local_68);
  FUN_1003aeb84(param_1,uVar4,param_2,param_3,param_4);
  _swift_release(local_68);
  self = NSSharingService::sharingServiceNamed_
                   ((ID)&_OBJC_CLASS___NSSharingService,
                    *(undefined8 *)PTR__NSSharingServiceNameCloudSharing_100ea9118);
  if (self == 0) {
    _swift_bridgeObjectRelease(param_2);
    FUN_10003bf18(param_3,param_4);
  }
  else {
    puVar2 = &DAT_100fa82e0;
    FUN_1000037f0(&DAT_100fa82e0,&DAT_100c25360);
    puVar3 = puVar2;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    uVar4 = 0;
    FUN_10000ec2c(0,&DAT_100fa82e8,&PTR__OBJC_CLASS___NSItemProvider_100f8d720);
    *(undefined8 *)(puVar3 + 0x38) = uVar4;
    *(undefined8 *)(puVar3 + 0x20) = param_1;
    pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar3);
    IVar6 = NSSharingService::canPerformWithItems_(self,pNVar5);
    if ((IVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      FUN_10003bf18(param_3,param_4);
    }
    else {
      if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100053e0c);
        (*pcVar1)();
      }
      objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
      _swift_allocObject(puVar2,0x40,7);
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x38) = uVar4;
      *(undefined8 *)(puVar2 + 0x20) = param_1;
      pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar2);
      NSSharingService::performWithItems_(self,pNVar5);
      _swift_bridgeObjectRelease(param_2);
      FUN_10003bf18(param_3,param_4);
    }
  }
  return;
}



/* Address: 0x100053e0c | FUN_100053e0c */

void FUN_100053e0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_release(*(undefined8 *)(unaff_x20 + 200));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd0));
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x140));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x100053eb8 | FUN_100053eb8 */

void FUN_100053eb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_1003bb49c();
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  _swift_retain();
  _swift_release(uVar2);
  _swift_release(*(undefined8 *)(param_1 + 0xc0));
  _swift_release(*(undefined8 *)(param_1 + 200));
  _swift_release(*(undefined8 *)(param_1 + 0xd0));
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  uVar4 = *(undefined8 *)(param_1 + 0xf8);
  _swift_release(*(undefined8 *)(param_1 + 0x108));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x110);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  uVar3 = *(undefined8 *)(param_1 + 0x120);
  uVar4 = *(undefined8 *)(param_1 + 0x130);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  _swift_release(param_1);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar1);
  _swift_release(uVar2);
  _swift_deallocClassInstance(param_1,0x148,7);
  return;
}



/* Address: 0x100053f90 | FUN_100053f90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100053f90(void)

{
  return ZEXT816(0x100fa8cb8);
}



/* Address: 0x100053fb0 | thunk_FUN_100070efc */

void thunk_FUN_100070efc(void)

{
  FUN_100070efc();
  return;
}



/* Address: 0x100053fb4 | thunk_FUN_100070fe4 */

void thunk_FUN_100070fe4(void)

{
  FUN_100070fe4();
  return;
}



/* Address: 0x100053fb8 | FUN_100053fb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100053fb8(void)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  URL UVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ID IVar8;
  URL UVar9;
  undefined7 extraout_var;
  NSString *pNVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long *plVar12;
  long lVar13;
  long alStack_70 [2];
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)alStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa8c68;
  FUN_1000037f0(&DAT_100fa8c68,&DAT_100c25ae0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = (uint)puVar5;
  plVar12 = (long *)(lVar11 - extraout_x8_00);
  FUN_10031eba8();
  if ((uVar3 & 0xff) == 4) {
    uVar3 = 1;
  }
  else {
    FUN_10031ebc8(plVar12);
    lVar6 = 0;
    FUN_100317b10();
    plVar7 = plVar12;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(plVar12,1,lVar6);
    if ((int)plVar7 == 1) {
      FUN_100005808(plVar12,&DAT_100fa8c68,&DAT_100c25ae0);
    }
    else {
      plVar7 = plVar12;
      _swift_getEnumCaseMultiPayload(plVar12,lVar6);
      if ((int)plVar7 == 4) {
        alStack_70[1] = *plVar12;
        lVar6 = plVar12[2];
        lVar1 = plVar12[3];
        if (*(long *)(alStack_70[1] + 0x10) != 0) {
          uVar2 = *(undefined8 *)(alStack_70[1] + 0x28);
          _swift_bridgeObjectRetain(uVar2);
          IVar8 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
          UVar9 = Foundation::URL::_init();
          UVar9.unknown._0_1_ = Foundation::URL::startAccessingSecurityScopedResource(UVar9);
          UVar9.unknown._1_7_ = extraout_var;
          Foundation::URL::stopAccessingSecurityScopedResource(UVar9);
          pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar2);
          IVar8 = NSFileManager::fileExistsAtPath_(IVar8,pNVar10);
          _swift_bridgeObjectRelease(alStack_70[1]);
          FUN_10003bf18(lVar6,lVar1);
          (**(code **)(lVar13 + 8))(lVar11,UVar4.unknown);
          return (uint)IVar8 & (uint)UVar9.unknown;
        }
        _swift_bridgeObjectRelease();
        FUN_10003bf18(lVar6,lVar1);
      }
      else {
        FUN_10005241c(plVar12,FUN_100317b10);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Address: 0x1000541e0 | FUN_1000541e0 */

void FUN_1000541e0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100054204 | FUN_100054204 */

void FUN_100054204(void)

{
  FUN_1000535e4();
  return;
}



/* Address: 0x10005420c | FUN_10005420c */

void FUN_10005420c(void)

{
  FUN_100053240();
  return;
}



/* Address: 0x100054214 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  FUN_10002a438();
  return;
}



/* Address: 0x100054218 | FUN_100054218 */

void FUN_100054218(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100052ce4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100054220 | FUN_100054220 */

undefined8 FUN_100054220(undefined8 param_1,undefined8 param_2)

{
  FUN_1003f0b64(param_2,param_1);
  return param_2;
}



/* Address: 0x10005425c | FUN_10005425c */

undefined8 FUN_10005425c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100325588();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1000542a0 | FUN_1000542a0 */

void FUN_1000542a0(void)

{
  long unaff_x20;
  
  FUN_100053b50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000542a8 | thunk_FUN_10009db64 */

void thunk_FUN_10009db64(void)

{
  FUN_10009db64();
  return;
}



/* Address: 0x1000542ac | thunk_FUN_1000a0da0 */

void thunk_FUN_1000a0da0(void)

{
  FUN_1000a0da0();
  return;
}



/* Address: 0x1000542b0 | thunk_FUN_1000a10c4 */

void thunk_FUN_1000a10c4(void)

{
  FUN_1000a10c4();
  return;
}



/* Address: 0x1000542b4 | thunk_FUN_10008d74c */

void thunk_FUN_10008d74c(void)

{
  FUN_10008d74c();
  return;
}



/* Address: 0x1000542b8 | thunk_FUN_100070eb8 */

void thunk_FUN_100070eb8(void)

{
  FUN_100070eb8();
  return;
}



/* Address: 0x1000542bc | thunk_FUN_100091254 */

void thunk_FUN_100091254(void)

{
  FUN_100091254();
  return;
}



/* Address: 0x1000542c0 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  FUN_10002a438();
  return;
}



/* Address: 0x1000542c4 | FUN_1000542c4 */

undefined1  [16] FUN_1000542c4(void)

{
  return ZEXT816(0x100eb1eb0);
}



/* Address: 0x1000542d4 | FUN_1000542d4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100054318 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000542d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ObservedObject<undefined> OVar3;
  State<undefined> SVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 local_50 [8];
  undefined8 local_48;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = 0;
  FUN_100064238();
  uVar2 = uVar1;
  FUN_100054394();
  _swift_retain(uVar6);
  OVar3 = SwiftUI::ObservedObject::init(uVar2,uVar1,uVar2);
  SVar4 = SwiftUI::State::init(local_50,OVar3.unknown,PTR___type_metadata_for_Swift_Bool_100eac570);
  param_1[3] = &DAT_100eb0468;
  FUN_1000543d8();
  param_1[4] = SVar4.unknown;
  puVar5 = &DAT_100eb1f08;
  _swift_allocObject(&DAT_100eb1f08,0x30,7);
  *param_1 = puVar5;
  *(undefined **)(puVar5 + 0x10) = OVar3.unknown;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  puVar5[0x20] = local_50[0];
  *(undefined8 *)(puVar5 + 0x28) = local_48;
  return;
}



/* Address: 0x100054394 | FUN_100054394 */

void FUN_100054394(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fa6ea8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100064238(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c2691c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2691c,uVar1);
  DAT_100fa6ea8 = pTVar2;
  return;
}



/* Address: 0x1000543d8 | FUN_1000543d8 */

void FUN_1000543d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa8f68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c23908;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c23908,&DAT_100eb0468);
  DAT_100fa8f68 = pTVar1;
  return;
}



/* Address: 0x100054418 | FUN_100054418 */

void FUN_100054418(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100054444 | _TtC5Paste11AppDelegate::handleEvent:with: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC5Paste11AppDelegate::handleEvent_with_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppDelegate+URLScheme.swift",0x21,1,0xe,UVar3.unknown,pMVar1);
  }
  FUN_10005451c(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10005451c | FUN_10005451c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10005451c(ID param_1)

{
  undefined *puVar1;
  URL UVar2;
  ID IVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  String SVar8;
  
  puVar1 = &DAT_100fa6f98;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffb0 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar3 = objc_stub::paramDescriptorForKeyword_(param_1,0x2d2d2d2d);
  if ((IVar3 != 0) && (IVar3 = objc_stub::stringValue(IVar3), IVar3 != 0)) {
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    puVar4 = puVar5;
    (**(code **)(lVar7 + 0x30))(puVar5,1,UVar2.unknown);
    if ((int)puVar4 == 1) {
      FUN_100054698(puVar5);
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar6,puVar5,UVar2.unknown);
      FUN_1000a1cb0(lVar6);
      (**(code **)(lVar7 + 8))(lVar6,UVar2.unknown);
    }
  }
  return;
}



/* Address: 0x100054698 | FUN_100054698 */

undefined8 FUN_100054698(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6f98;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000546e0 | FUN_1000546e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1000546e0(ulong param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 auStack_70 [16];
  undefined1 local_60;
  long local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  uVar8 = (uint)auStack_70;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 == 5) {
    puVar4 = &DAT_100fa81f0;
    local_60 = (char)param_1;
    local_58 = param_2;
    uStack_50 = param_3;
    FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
    pcVar3 = FUN_100054da0;
    FUN_100357f60(&local_48,FUN_100054da0,auStack_70,puVar4);
    if ((local_48 != 0) && (FUN_1003293c4(), (uVar8 & 0xff) == 1)) {
      thunk_FUN_100324cb0();
      FUN_1003de9a0();
      pcVar5 = pcVar3;
      FUN_100328e60();
      uVar7 = (ulong)((uint)pcVar5 & 1);
      thunk_FUN_1003ed158(0x4028000000000000,uVar7,pcVar3);
      return uVar7;
    }
  }
  else if (uVar1 == 4) {
    puVar4 = &DAT_100fa8f70;
    local_60 = (char)param_1;
    local_58 = param_2;
    uStack_50 = param_3;
    FUN_1000037f0(&DAT_100fa8f70,&DAT_100c25c98);
    pcVar3 = FUN_100054dac;
    FUN_100357f60(&local_48,FUN_100054dac,auStack_70,puVar4);
    if (local_48 != 0) {
      FUN_10031212c();
      if (((ulong)pcVar3 & 0xff) == 0) {
        FUN_10020d244();
      }
      else if (((uint)pcVar3 & 0xff) == 1) {
        FUN_10020d228();
      }
      else {
        FUN_10020d410();
      }
      uVar7 = *(ulong *)pcVar3;
      uVar2 = *(undefined8 *)(pcVar3 + 8);
      _swift_bridgeObjectRetain_n(uVar2,2);
      FUN_100017740(0);
      uVar6 = uVar7;
      FUN_1000f653c(uVar7,uVar2);
      if (uVar6 != 0) {
        FUN_1000f653c(uVar7,uVar2);
        if (uVar7 != 0) {
          return uVar7;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100054930);
        (*pcVar3)();
      }
      _swift_bridgeObjectRelease(uVar2);
      uVar7 = 0xd000000000000013;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (uVar7 != 0) {
        return uVar7;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100054988);
      (*pcVar3)();
    }
  }
  else if ((param_1 & 0xff) == 0) {
    local_60 = 0;
    puVar4 = &DAT_100fa6c48;
    local_58 = param_2;
    uStack_50 = param_3;
    FUN_1000037f0(&DAT_100fa6c48,&DAT_100c23750);
    FUN_100357f60(&local_48,FUN_100054db8,auStack_70,puVar4);
    if (local_48 != 0) {
      return local_48;
    }
  }
  FUN_100054b2c(param_1,param_2,param_3);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    FUN_100017740(0);
    _swift_bridgeObjectRetain_n(param_2,2);
    uVar7 = param_1;
    FUN_1000f653c(param_1,param_2);
    if (uVar7 == 0) {
      _swift_bridgeObjectRelease(param_2);
      param_1 = 0xd000000000000013;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100054984);
        (*pcVar3)();
      }
    }
    else {
      FUN_1000f653c(param_1,param_2);
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10005486c);
        (*pcVar3)();
      }
    }
    _swift_bridgeObjectRelease(param_2);
  }
  return param_1;
}



/* Address: 0x100054988 | FUN_100054988 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100054988(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003597c8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 8))(param_4,param_5,local_50,lStack_48);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    FUN_100310dd0();
  }
  FUN_100004594(auStack_68);
  *param_1 = param_4;
  return;
}


