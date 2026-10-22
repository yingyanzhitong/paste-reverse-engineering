/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003eab64 | FUN_1003eab64 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003eab64(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003eaba0 | FUN_1003eaba0 */

void FUN_1003eaba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_1003ea474(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003eac18 | FUN_1003eac18 */

void FUN_1003eac18(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_100008284;
                    /* WARNING: Could not recover jumptable at 0x0001003eac68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))();
  return;
}



/* Address: 0x1003eac6c | FUN_1003eac6c */

void FUN_1003eac6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1003eac18(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003eace4 | FUN_1003eace4 */

void FUN_1003eace4(void)

{
  int iVar1;
  long *plVar2;
  int *in_x3;
  long unaff_x22;
  
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100008284;
                    /* WARNING: Could not recover jumptable at 0x0001003ead34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))();
  return;
}



/* Address: 0x1003ead38 | thunk_FUN_100330fd4 */

void thunk_FUN_100330fd4(void)

{
  FUN_100330fd4();
  return;
}



/* Address: 0x1003ead3c | FUN_1003ead3c */

void FUN_1003ead3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1003eace4(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003eadc0 | FUN_1003eadc0 */

void FUN_1003eadc0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  ContiguousArray<__int8> CVar6;
  undefined8 *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fc3610;
  FUN_1000037f0(&DAT_100fc3610,&DAT_100c45d70);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar2,&DAT_100fc3610,&DAT_100c45d70);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar10 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_100005808(puVar2,&DAT_100fc3610,&DAT_100c45d70);
    uVar8 = 0x1c00;
    lVar10 = *(long *)(param_5 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar10 + 8))(puVar2,TVar3.unknown);
    uVar8 = (ulong)_Var1 | 0x1c00;
    lVar10 = *(long *)(param_5 + 0x10);
  }
  if (lVar10 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(param_5 + 0x18);
    _swift_getObjectType(lVar10);
    _swift_unknownObjectRetain(lVar10);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar10);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100fc3610,&DAT_100c45d70);
    puVar2 = &DAT_100ed0858;
    _swift_allocObject(&DAT_100ed0858,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(long *)(puVar2 + 0x18) = param_5;
    if (lVar9 == 0 && UVar5.unknown == (undefined *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar7 = &local_80;
      local_70 = UVar5.unknown;
      lStack_68 = lVar9;
    }
    _swift_task_create(uVar8,puVar7,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c46318,puVar2);
  }
  else {
    SVar11.bridgeObject = param_2;
    SVar11.str = param_1;
    CVar6 = Swift::String::get_utf8CString(SVar11);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ed0880;
    _swift_allocObject(&DAT_100ed0880,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(long *)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar9 == 0 && UVar5.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar5.unknown;
      lStack_88 = lVar9;
    }
    local_b8 = 7;
    local_a8 = CVar6.unknown + 0x20;
    _swift_task_create(uVar8,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c46320,
                       puVar2);
    _swift_release(CVar6.unknown);
    FUN_100005808(param_3,&DAT_100fc3610,&DAT_100c45d70);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1003eb058 | FUN_1003eb058 */

void FUN_1003eb058(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003eb07c | FUN_1003eb07c */

void FUN_1003eb07c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1003eb0ec | FUN_1003eb0ec */

void FUN_1003eb0ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *self;
  ID self_00;
  long unaff_x20;
  String SVar5;
  
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::editToolbar) = 0;
  lVar2 = _TtC11PasteCoreUI19LinkItemContentView::footer;
  uVar4 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC11PasteCoreUI19LinkItemContentView::loaderView;
  self = &_OBJC_CLASS___NSProgressIndicator;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setStyle_(self_00,1);
  *(ID *)(unaff_x20 + lVar2) = self_00;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___webView) = 0
  ;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19LinkItemContentView::___lazy_storage___textView) =
       0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5770);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003eb1cc);
  (*pcVar3)();
}



/* Address: 0x1003eb1cc | FUN_1003eb1cc */

void FUN_1003eb1cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003eb1f8 | FUN_1003eb1f8 */

void FUN_1003eb1f8(void)

{
  long unaff_x20;
  
  FUN_1003e8640(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003eb200 | thunk_FUN_1003eb058 */

void thunk_FUN_1003eb058(void)

{
  FUN_1003eb058();
  return;
}



/* Address: 0x1003eb204 | thunk_FUN_100330fd4 */

void thunk_FUN_100330fd4(void)

{
  thunk_FUN_100330fd4();
  return;
}



/* Address: 0x1003eb208 | FUN_1003eb208 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003eb208(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView);
  if (self == 0) {
    FUN_100215e84();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    puVar5 = &DAT_100ed0970;
    _swift_allocObject(&DAT_100ed0970,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar6 = &DAT_100ed0998;
    _swift_allocObject(&DAT_100ed0998,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(ID *)(puVar6 + 0x18) = self;
    puVar1 = (undefined8 *)(self + _TtC7PasteUI10TextEditor::onAttributedTextChange);
    _swift_beginAccess(puVar1,auStack_68,1,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_1003ec380;
    puVar1[1] = puVar6;
    _swift_retain(puVar5);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar5);
    *(ID *)(unaff_x20 + lVar4) = self;
  }
  return self;
}



/* Address: 0x1003eb330 | FUN_1003eb330 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_1003eb330(ulong param_1)

{
  ID self;
  undefined *self_00;
  ID IVar1;
  long unaff_x20;
  ID *pIVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_1003eb208();
  FUN_100213188();
  lVar4 = *(long *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::viewModel);
  if ((param_1 & 1) == 0) {
    pIVar2 = (ID *)(lVar4 + 0x20);
  }
  else {
    pIVar2 = (ID *)(lVar4 + 0x28);
  }
  _swift_beginAccess(pIVar2,auStack_58,0,0);
  self = *pIVar2;
  uVar3 = *(ulong *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView)
  ;
  FUN_100213188();
  if ((uVar3 & 1) == 0) {
    _swift_beginAccess(lVar4 + 0x20,auStack_70,0,0);
    uVar3 = *(ulong *)(lVar4 + 0x20);
    FUN_1003095bc();
    if ((uVar3 & 1) != 0) {
      self_00 = &_OBJC_CLASS___NSMutableAttributedString;
      _objc_allocWithZone();
      self = objc_stub::initWithAttributedString_((ID)self_00,self);
      IVar1 = objc_stub::length(self);
      objc_stub::removeAttribute_range_
                (self,*(undefined8 *)PTR__NSForegroundColorAttributeName_100ea90c8,0,IVar1);
      objc_stub::removeAttribute_range_
                (self,*(undefined8 *)PTR__NSBackgroundColorAttributeName_100ea9008,0,IVar1);
    }
  }
  FUN_100212e78(self);
  return 0;
}



/* Address: 0x1003eb4a8 | FUN_1003eb4a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003eb4a8(void)

{
  ulong *puVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::viewModel);
  _swift_beginAccess(lVar5 + 0x20,auStack_68,0,0);
  puVar1 = *(ulong **)(lVar5 + 0x20);
  FUN_1003095bc();
  if (((ulong)puVar1 & 1) == 0) {
    puVar3 = puVar1;
    FUN_1001ffc58();
    plVar2 = (long *)puVar3;
    FUN_1001ffac0();
    if (((ulong)plVar2 & 1) == 0) {
      lVar5 = 0;
      goto LAB_1003eb544;
    }
  }
  else {
    puVar3 = puVar1;
    FUN_100219bc4();
    plVar2 = (long *)*puVar3;
    puVar3 = (ulong *)plVar2;
  }
  FUN_1001fe15c();
  lVar5 = *plVar2;
LAB_1003eb544:
  FUN_1003eb208();
  FUN_1002134d4(puVar3);
  if (lVar5 != 0) {
    FUN_1003eb208(lVar5);
    FUN_100213390(lVar5);
  }
  uVar4 = 0;
  if (((ulong)puVar1 & 1) != 0) {
    FUN_1003eb208();
    FUN_100213188();
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)
               (unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView);
      FUN_1003e2ca0(0);
      FUN_1000f3e48(uVar6);
      FUN_100213290();
    }
  }
  return 0;
}



/* Address: 0x1003eb64c | FUN_1003eb64c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003eb64c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_2 + _TtC11PasteCoreUI19TextItemContentView::onCanCommitEditing);
    _swift_beginAccess(puVar1,auStack_58,0,0);
    pcVar2 = (code *)*puVar1;
    if (pcVar2 != (code *)0x0) {
      uVar3 = puVar1[1];
      uVar4 = *(undefined8 *)(param_2 + _TtC11PasteCoreUI19TextItemContentView::viewModel);
      thunk_FUN_100011128(pcVar2,uVar3);
      _swift_retain(uVar4);
      FUN_1003c0be0(param_1);
      _swift_release(uVar4);
      (*pcVar2)((uint)param_1 & 1);
      FUN_100004550(pcVar2,uVar3);
    }
    FUN_100211dec(*(undefined8 *)(param_2 + _TtC11PasteCoreUI19TextItemContentView::footer));
    FUN_1003df0b0();
  }
  return;
}



/* Address: 0x1003eb750 | FUN_1003eb750 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003eb750(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  _swift_getObjectType();
  lVar3 = _TtC11PasteCoreUI19TextItemContentView::footer;
  uVar4 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView) =
       0;
  *(long *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  puVar6 = &DAT_100ed0970;
  _swift_allocObject(&DAT_100ed0970,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10,IVar5);
  _swift_beginAccess(param_1 + 0x10,auStack_68,1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(code **)(param_1 + 0x10) = FUN_1003ec3e0;
  *(undefined **)(param_1 + 0x18) = puVar6;
  _swift_retain(puVar6);
  FUN_100004550(uVar4,uVar2);
  _swift_release(puVar6);
  FUN_1003eb208();
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(puVar6);
  FUN_1003eb330();
  FUN_1003eb4a8();
  _swift_release(param_1);
  return IVar5;
}



/* Address: 0x1003eb8cc | FUN_1003eb8cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003eb8cc(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar1 != 0) {
    FUN_1003eb208();
    FUN_100213188();
    if ((uVar1 & 1) == 0) {
      FUN_1003eb330(0);
      FUN_1003eb4a8();
    }
    return 0;
  }
  return 0;
}



/* Address: 0x1003eb93c | FUN_1003eb93c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003eb93c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *local_80 [3];
  undefined8 *local_68;
  undefined **ppuStack_60;
  undefined8 *local_58;
  
  puVar1 = param_1;
  _swift_getObjectType();
  puVar2 = puVar1;
  FUN_1003eb208();
  ppuStack_60 = &PTR_PTR_100ec00e8;
  local_80[0] = param_1;
  local_68 = puVar1;
  local_58 = puVar2;
  FUN_1001f9774();
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar3 = 0;
  FUN_100215e84(0);
  ppuVar4 = local_80;
  FUN_1001f97b4(uVar8,uVar9,uVar10,uVar11,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  puVar5 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar6 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar5 + 0x20) = ppuVar4;
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_setDeallocating(puVar5);
  uVar3 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar5 + 0x20,uVar3,puVar6);
  return puVar7;
}



/* Address: 0x1003eba84 | _TtC11PasteCoreUI19TextItemContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI19TextItemContentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined8 uVar7;
  String SVar8;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  FUN_1003d0b5c();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/TextItemContentView.swift",0x25,1,0x60,UVar5.unknown,pMVar4);
  }
  lVar2 = footer;
  uVar7 = 0;
  FUN_1003df434();
  _objc_allocWithZone();
  FUN_1003df4b8();
  *(undefined8 *)(param_1 + lVar2) = uVar7;
  puVar1 = (undefined8 *)(param_1 + onCanCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___textView) = 0;
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda57c0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ebb7c);
  (*pcVar3)();
}



/* Address: 0x1003ebb7c | FUN_1003ebb7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ebb7c(void)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ID unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"viewDidChangeEffectiveAppearance");
  self = objc_stub::effectiveAppearance(unaff_x20);
  puVar2 = &DAT_100ed09c0;
  _swift_allocObject(&DAT_100ed09c0,0x18,7);
  *(ID *)(puVar2 + 0x10) = unaff_x20;
  puVar3 = &DAT_100ed09e8;
  _swift_allocObject(&DAT_100ed09e8,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1003ec3ac;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_60 = FUN_100209b34;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100ed0a00;
  local_58 = puVar3;
  aBlock = __Block_copy(&local_80);
  puVar4 = local_58;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performAsCurrentDrawingAppearance_(self,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x93,0x86,0x3f,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ebcd4);
  (*pcVar1)();
}



/* Address: 0x1003ebcd4 | FUN_1003ebcd4 */

void FUN_1003ebcd4(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/TextItemContentView.swift",0x25,1,0x86,UVar3.unknown,pMVar1);
  }
  FUN_1003eb4a8();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003ebd60 | _TtC11PasteCoreUI19TextItemContentView::viewDidChangeEffectiveAppearance */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI19TextItemContentView::viewDidChangeEffectiveAppearance
               (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/TextItemContentView.swift",0x25,1,0x84,UVar3.unknown,pMVar1);
  }
  FUN_1003ebb7c(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1003ebdfc | _TtC11PasteCoreUI19TextItemContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI19TextItemContentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/TextItemContentView.swift",0x25,1,0xc,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.TextItemContentView",0x1f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ebe84);
  (*pcVar1)();
}



/* Address: 0x1003ebe84 | _TtC11PasteCoreUI19TextItemContentView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI19TextItemContentView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCanCommitEditing),
                ((undefined8 *)(param_1 + onCanCommitEditing))[1]);
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x1003ebee0 | FUN_1003ebee0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003ebee0(void)

{
  return ZEXT816(0x100f9b338);
}



/* Address: 0x1003ebf00 | FUN_1003ebf00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003ebf00(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::footer);
}



/* Address: 0x1003ebf14 | FUN_1003ebf14 */

undefined1  [16] FUN_1003ebf14(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])
            (*unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::onCanCommitEditing);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  thunk_FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003ebf70 | FUN_1003ebf70 */

void FUN_1003ebf70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(*unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::onCanCommitEditing);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  return;
}



/* Address: 0x1003ebfd0 | FUN_1003ebfd0 */

undefined1  [16] FUN_1003ebfd0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = _TtC11PasteCoreUI19TextItemContentView::onCanCommitEditing;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + _TtC11PasteCoreUI19TextItemContentView::onCanCommitEditing,param_1,0x21
                     ,0);
  auVar3._8_8_ = lVar2 + lVar1;
  auVar3._0_8_ = _swift_endAccess;
  return auVar3;
}



/* Address: 0x1003ec014 | FUN_1003ec014 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ec014(undefined8 param_1)

{
  FUN_1003eb208();
  thunk_FUN_10021359c();
  return param_1;
}



/* Address: 0x1003ec04c | FUN_1003ec04c */

void FUN_1003ec04c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003ec05c(param_1,param_2,1);
  return;
}



/* Address: 0x1003ec054 | FUN_1003ec054 */

void FUN_1003ec054(undefined8 param_1,undefined8 param_2)

{
  FUN_1003ec05c(param_1,param_2,0);
  return;
}



/* Address: 0x1003ec05c | FUN_1003ec05c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ec05c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1003eb208();
  FUN_1002131bc(param_3);
  FUN_1003eb330(0);
  FUN_1003eb4a8();
  return;
}



/* Address: 0x1003ec0ac | FUN_1003ec0ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ec0ac(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  FUN_1003eb208();
  FUN_1002131bc(0);
  uVar1 = *(undefined8 *)
           (lVar2 + _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView);
  FUN_100212ccc(uVar1);
  FUN_1003c0e08(uVar1);
  FUN_1003eb330(0);
  FUN_1003eb4a8();
  return;
}



/* Address: 0x1003ec13c | FUN_1003ec13c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ec13c(void)

{
  FUN_1003eb208();
  FUN_100214474();
  return 0;
}



/* Address: 0x1003ec168 | FUN_1003ec168 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003ec168(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  ID IVar1;
  long unaff_x20;
  long lVar2;
  ID self;
  double dVar3;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::viewModel);
  _swift_beginAccess(lVar2 + 0x20,auStack_78,0,0);
  self = *(ID *)(lVar2 + 0x20);
  IVar1 = objc_stub::mainScreen((ID)&_OBJC_CLASS___NSScreen);
  if (IVar1 == 0) {
    param_3 = 1000.0;
    dVar3 = param_3;
  }
  else {
    objc_stub::frame(IVar1);
    param_3 = param_3 * 0.5;
    dVar3 = param_4 * 0.5;
  }
  IVar1 = objc_stub::length(self);
  if (2000 < (long)IVar1) {
    self = objc_stub::FUN_100bfe260(self,0,2000);
  }
  objc_stub::FUN_100bfe860(self,param_3,dVar3,3,0);
  FUN_1003eb208();
  FUN_100213454();
  FUN_100213454(*(undefined8 *)
                 (unaff_x20 + _TtC11PasteCoreUI19TextItemContentView::___lazy_storage___textView));
  return 0;
}



/* Address: 0x1003ec310 | FUN_1003ec310 */

void FUN_1003ec310(void)

{
  FUN_1003ec168();
  return;
}



/* Address: 0x1003ec330 | FUN_1003ec330 */

void FUN_1003ec330(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003ec354 | FUN_1003ec354 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ec354(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003ec380 | FUN_1003ec380 */

void FUN_1003ec380(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003eb64c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003ec388 | FUN_1003ec388 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ec388(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003ec3ac | FUN_1003ec3ac */

void FUN_1003ec3ac(void)

{
  long unaff_x20;
  
  FUN_1003ebcd4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ec3b4 | FUN_1003ec3b4 */

void FUN_1003ec3b4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003ec3c4 | FUN_1003ec3c4 */

void FUN_1003ec3c4(long param_1,long param_2)

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



/* Address: 0x1003ec3d8 | FUN_1003ec3d8 */

void FUN_1003ec3d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003ec3e0 | FUN_1003ec3e0 */

void FUN_1003ec3e0(void)

{
  FUN_1003eb8cc();
  return;
}



/* Address: 0x1003ec3e8 | FUN_1003ec3e8 */

void FUN_1003ec3e8(void)

{
  long unaff_x20;
  
  FUN_1003eb93c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003ec3f0 | FUN_1003ec3f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ec3f0(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ID self;
  undefined *self_00;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x20;
  
  lVar2 = _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___imageView;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___imageView)
  ;
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSImageView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    plVar4 = (long *)0x0;
    FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    FUN_10020cf18();
    lVar6 = *plVar4;
    lVar1 = plVar4[1];
    _swift_bridgeObjectRetain_n(lVar1,2);
    lVar5 = lVar6;
    FUN_1000f653c(lVar6,lVar1);
    if (lVar5 == 0) {
      _swift_bridgeObjectRelease(lVar1);
      lVar6 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ec534);
        (*pcVar3)();
      }
    }
    else {
      FUN_1000f653c(lVar6,lVar1);
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ec48c);
        (*pcVar3)();
      }
    }
    objc_stub::setImage_(self,lVar6);
    puVar7 = (undefined8 *)0x0;
    FUN_1002199e8();
    FUN_1000f65ec(*puVar7);
    objc_stub::setImageScaling_(self,3);
    *(ID *)(unaff_x20 + lVar2) = self;
  }
  return self;
}



/* Address: 0x1003ec534 | FUN_1003ec534 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ec534(ID param_1)

{
  LocalizedStringResource LVar1;
  NSString *pNVar2;
  undefined8 uVar3;
  long extraout_x8;
  String SVar4;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001daf54(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar4 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  objc_stub::setText_(param_1,pNVar2);
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff8f8();
  FUN_1001ffa24();
  objc_stub::setFont_(param_1,uVar3);
  objc_stub::setTextAlignment_(param_1,1);
  objc_stub::setEditable_(param_1,0);
  objc_stub::setSelectable_(param_1,0);
  objc_stub::setBordered_(param_1,0);
  objc_stub::setDrawsBackground_(param_1,0);
  return;
}



/* Address: 0x1003ec64c | FUN_1003ec64c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ec64c(long *param_1,code *param_2)

{
  ID IVar1;
  undefined *self;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *param_1;
  IVar1 = *(ID *)(unaff_x20 + lVar2);
  if (IVar1 == 0) {
    self = &_OBJC_CLASS___NSTextField;
    _objc_allocWithZone();
    IVar1 = objc_stub::init((ID)self);
    (*param_2)();
    *(ID *)(unaff_x20 + lVar2) = IVar1;
  }
  return IVar1;
}



/* Address: 0x1003ec6cc | FUN_1003ec6cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ec6cc(ID param_1)

{
  LocalizedStringResource LVar1;
  NSString *pNVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  FUN_1001dadd4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar5 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  objc_stub::setText_(param_1,pNVar2);
  puVar3 = (undefined8 *)0x0;
  FUN_1001fe19c();
  objc_stub::setTextColor_(param_1,*puVar3);
  objc_stub::setNumberOfLines_(param_1,0);
  objc_stub::setTextAlignment_(param_1,1);
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  objc_stub::setFont_(param_1,uVar4);
  objc_stub::setEditable_(param_1,0);
  objc_stub::setSelectable_(param_1,0);
  objc_stub::setBordered_(param_1,0);
  objc_stub::setDrawsBackground_(param_1,0);
  objc_stub::setContentCompressionResistancePriority_forOrientation_(param_1,0x437a0000,0);
  return;
}



/* Address: 0x1003ec804 | FUN_1003ec804 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ec804(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___infoStack;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___infoStack)
  ;
  if (self == 0) {
    puVar2 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar2);
    puVar2 = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 5;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    puVar3 = &_TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___titleLabel;
    FUN_1003ec64c(&_TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___titleLabel,
                  FUN_1003ec534);
    *(undefined8 **)(puVar2 + 0x20) = puVar3;
    puVar3 = &_TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___subtitleLabel;
    FUN_1003ec64c(&_TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___subtitleLabel,
                  FUN_1003ec6cc);
    *(undefined8 **)(puVar2 + 0x28) = puVar3;
    FUN_100201b9c(puVar2);
    _swift_setDeallocating(puVar2);
    _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    FUN_1000f668c(1);
    objc_stub::setSpacing_(self,0x4010000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003ec92c | FUN_1003ec92c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003ec92c(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___stack;
  self = *(ID *)(unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___stack);
  if (self == 0) {
    puVar2 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar2);
    puVar2 = &DAT_100fc3e80;
    FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 5;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    puVar3 = puVar2;
    FUN_1003ec3f0();
    *(undefined **)(puVar2 + 0x20) = puVar3;
    FUN_1003ec804();
    *(undefined **)(puVar2 + 0x28) = puVar3;
    FUN_100201b9c(puVar2);
    _swift_setDeallocating(puVar2);
    _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    FUN_1000f668c(1);
    objc_stub::setSpacing_(self,0x4030000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1003eca34 | FUN_1003eca34 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003eca34(void)

{
  ID IVar1;
  ID IVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___imageView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___titleLabel) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___subtitleLabel) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___infoStack) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___stack) =
       0;
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  IVar2 = IVar1;
  FUN_1003ec92c();
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(IVar2);
  return IVar1;
}



/* Address: 0x1003ecb0c | FUN_1003ecb0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_1003ecb0c(ID param_1)

{
  undefined8 uVar1;
  ID *pIVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ID local_80 [3];
  ID local_68;
  undefined **ppuStack_60;
  ID local_58;
  
  IVar3 = param_1;
  _swift_getObjectType();
  IVar4 = IVar3;
  FUN_1003ec92c();
  ppuStack_60 = &PTR_PTR_100ec00e8;
  uVar1 = 0;
  local_80[0] = param_1;
  local_68 = IVar3;
  local_58 = IVar4;
  FUN_10000ec2c(0,&DAT_100fc3500,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  pIVar2 = local_80;
  FUN_1001f9b74(0x4048000000000000,pIVar2,uVar1,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  IVar3 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 +
                            _TtC11PasteCoreUI22UnknownItemContentView::___lazy_storage___stack));
  IVar4 = objc_stub::centerYAnchor(param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar3,IVar4);
  IVar3 = IVar4;
  FUN_1003ec3f0();
  uVar1 = 0;
  local_80[0] = IVar3;
  FUN_10000ec2c(0,&DAT_100fc32c8,&PTR__OBJC_CLASS___NSImageView_100f8d6a0);
  FUN_1001f9e3c(0x404e000000000000,0x404e000000000000);
  puVar5 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  puVar6 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar5 + 0x20) = pIVar2;
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar5 + 0x60) = uVar7;
  *(undefined ***)(puVar5 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar5 + 0x48) = IVar4;
  *(undefined **)(puVar5 + 0x88) = puVar6;
  *(undefined ***)(puVar5 + 0x90) = &PTR_PTR_100ec00b8;
  *(undefined8 *)(puVar5 + 0x70) = uVar1;
  _swift_bridgeObjectRetain(pIVar2);
  puVar8 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_bridgeObjectRelease(pIVar2);
  _swift_setDeallocating(puVar5);
  uVar1 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar5 + 0x20,uVar1,puVar6);
  return puVar8;
}



/* Address: 0x1003ecd54 | _TtC11PasteCoreUI22UnknownItemContentView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC11PasteCoreUI22UnknownItemContentView::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteCoreUI/UnknownItemContentView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/UnknownItemContentView.swift",0x28,1,0x3c,UVar3.unknown,pMVar1);
  }
  FUN_1003eca34();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003ecdec | _TtC11PasteCoreUI22UnknownItemContentView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI22UnknownItemContentView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/UnknownItemContentView.swift",0x28,1,0x47,UVar3.unknown,pMVar2);
  }
  *(undefined8 *)(param_1 + ___lazy_storage___imageView) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___titleLabel) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___subtitleLabel) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___infoStack) = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___stack) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda5840);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ecee4);
  (*pcVar1)();
}



/* Address: 0x1003ecee4 | _TtC11PasteCoreUI22UnknownItemContentView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC11PasteCoreUI22UnknownItemContentView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1003d0b5c();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/UnknownItemContentView.swift",0x28,1,10,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCoreUI.UnknownItemContentView",0x22,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003ecf6c);
  (*pcVar1)();
}



/* Address: 0x1003ecf6c | _TtC11PasteCoreUI22UnknownItemContentView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI22UnknownItemContentView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003ecfd4 | FUN_1003ecfd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003ecfd4(void)

{
  return ZEXT816(0x100f9b410);
}


