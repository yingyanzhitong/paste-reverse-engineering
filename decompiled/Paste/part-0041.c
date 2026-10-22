/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10007bb3c | _TtC5Paste15ItemPreviewView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste15ItemPreviewView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/ItemPreviewView.swift",0x1b,1,0x68,UVar3.unknown,pMVar1);
  }
  FUN_10007cf44();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10007bbe8 | FUN_10007bbe8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10007bbe8(ulong *param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  objc_super *super;
  ID IVar4;
  ID unaff_x20;
  
  super = (objc_super *)&stack0xffffffffffffffa0;
  puVar1 = param_1;
  FUN_1001e7d18();
  uVar2 = 0x72;
  FUN_1001e94d4(0x72,0xe100000000000000);
  if (((ulong *)uVar2 == puVar1) && (param_2 == 0x100000)) {
    FUN_10007aa60();
    FUN_100208658();
    if ((uVar2 & 1) == 0) {
      FUN_10007a614();
      FUN_100011ba4();
      FUN_100011c78();
      return 1;
    }
    FUN_10007c86c();
  }
  else {
    puVar3 = (ulong *)0x65;
    FUN_1001e94d4(0x65,0xe100000000000000);
    if ((puVar3 == puVar1) && (param_2 == 0x100000)) {
      FUN_10007aa60();
      FUN_100208658();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_10007be8c();
        return 1;
      }
      FUN_10007c86c();
      super = (objc_super *)&stack0xffffffffffffffb0;
    }
    else {
      FUN_1001e95f0();
      if ((ulong *)*puVar3 == puVar1 && param_2 == 0) {
        FUN_10007aa60();
        FUN_100208658();
        if (((ulong)puVar3 & 1) != 0) {
          FUN_10007c1fc();
          return 1;
        }
        FUN_10007a614(0);
        FUN_100011ba4();
        FUN_100011d28();
        IVar4 = objc_stub::window(unaff_x20);
        if (IVar4 == 0) {
          return 1;
        }
        objc_stub::performClose_(IVar4,0);
        return 1;
      }
      FUN_10007c86c();
      super = (objc_super *)&stack0xffffffffffffffc0;
    }
  }
  IVar4 = _objc_msgSendSuper2(super,"performKeyEquivalent:",param_1);
  return IVar4;
}



/* Address: 0x10007bdc0 | _TtC5Paste15ItemPreviewView::performKeyEquivalent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste15ItemPreviewView::performKeyEquivalent_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.swift",0x1b,1,0x6c,UVar3.unknown,pMVar1);
  }
  FUN_10007bbe8();
  _swift_release(pMVar2);
  return uVar5 & 1;
}



/* Address: 0x10007be8c | FUN_10007be8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007be8c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ID self;
  long unaff_x20;
  code *pcVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  ID local_40;
  long lStack_38;
  undefined1 *puVar7;
  
  iVar2 = (int)&local_90;
  puVar6 = &local_90;
  FUN_10007ac34();
  uVar4 = 0;
  local_60 = param_1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar5 = &DAT_100fa6550;
  FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
  _swift_dynamicCast(&local_90,&local_60,uVar4,puVar5,6);
  if (iVar2 == 0) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_100005808(&local_90,&DAT_100fa6558,&DAT_100c22d48);
  }
  else {
    FUN_100076508(&local_90,auStack_58);
    FUN_10007aa60();
    puVar7 = (undefined1 *)puVar6;
    (**(code **)(**(long **)(unaff_x20 + _TtC5Paste15ItemPreviewView::viewModel) + 0x70))();
    uVar3 = (uint)puVar7;
    FUN_10031eba8();
    lVar1 = _TtCC5Paste15ItemPreviewView12EditorHeader::shouldShowWritingTools;
    self = 0;
    *(bool *)((long)puVar6 + _TtCC5Paste15ItemPreviewView12EditorHeader::shouldShowWritingTools) =
         (uVar3 & 0xff) == 5;
    FUN_100013c64();
    if (self != 0) {
      objc_stub::setHidden_(self,(ulong)((*(byte *)((long)puVar6 + lVar1) ^ 0xffffffff) & 1));
    }
    FUN_100004640(auStack_58,local_40);
    (**(code **)(lStack_38 + 0x40))(local_40,lStack_38);
    FUN_10007a614();
    objc_stub::setHidden_(local_40,1);
    objc_stub::setHidden_
              (*(ID *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___editorHeader),0);
    pcVar8 = *(code **)(unaff_x20 + _TtC5Paste15ItemPreviewView::onBeginEditing);
    if (pcVar8 != (code *)0x0) {
      uVar4 = ((undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onBeginEditing))[1];
      _swift_retain(uVar4);
      (*pcVar8)();
      FUN_100004550(pcVar8,uVar4);
    }
    pcVar8 = *(code **)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
    if (pcVar8 != (code *)0x0) {
      uVar4 = ((undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged))[1];
      _swift_retain(uVar4);
      (*pcVar8)(1);
      FUN_100004550(pcVar8,uVar4);
    }
    FUN_100004594(auStack_58);
  }
  return;
}



/* Address: 0x10007c080 | FUN_10007c080 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007c080(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID self;
  long unaff_x20;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  ID local_40;
  long lStack_38;
  
  iVar1 = (int)&local_90;
  FUN_10007ac34();
  uVar2 = 0;
  local_60 = param_1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar3 = &DAT_100fa6550;
  FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
  _swift_dynamicCast(&local_90,&local_60,uVar2,puVar3,6);
  if (iVar1 == 0) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_100005808(&local_90,&DAT_100fa6558,&DAT_100c22d48);
  }
  else {
    FUN_100076508(&local_90,auStack_58);
    FUN_100004640(auStack_58,local_40);
    (**(code **)(lStack_38 + 0x50))(local_40,lStack_38);
    FUN_10007a614();
    objc_stub::setHidden_(local_40,0);
    self = 0;
    FUN_10007aa60();
    objc_stub::setHidden_(self,1);
    pcVar4 = *(code **)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
    if (pcVar4 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged))[1];
      _swift_retain(uVar2);
      (*pcVar4)(0);
      FUN_100004550(pcVar4,uVar2);
    }
    pcVar4 = *(code **)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEndEditing);
    if (pcVar4 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEndEditing))[1];
      _swift_retain(uVar2);
      (*pcVar4)();
      FUN_100004550(pcVar4,uVar2);
    }
    FUN_100004594(auStack_58);
  }
  return;
}



/* Address: 0x10007c1fc | FUN_10007c1fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007c1fc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID self;
  long unaff_x20;
  code *pcVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  ID local_40;
  long lStack_38;
  
  iVar1 = (int)&local_90;
  FUN_10007ac34();
  uVar2 = 0;
  local_60 = param_1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar3 = &DAT_100fa6550;
  FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
  _swift_dynamicCast(&local_90,&local_60,uVar2,puVar3,6);
  if (iVar1 == 0) {
    local_70 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    FUN_100005808(&local_90,&DAT_100fa6558,&DAT_100c22d48);
  }
  else {
    FUN_100076508(&local_90,auStack_58);
    FUN_100004640(auStack_58,local_40);
    (**(code **)(lStack_38 + 0x48))(local_40,lStack_38);
    FUN_10007a614();
    objc_stub::setHidden_(local_40,0);
    self = 0;
    FUN_10007aa60();
    objc_stub::setHidden_(self,1);
    pcVar4 = *(code **)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
    if (pcVar4 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged))[1];
      _swift_retain(uVar2);
      (*pcVar4)(0);
      FUN_100004550(pcVar4,uVar2);
    }
    pcVar4 = *(code **)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEndEditing);
    if (pcVar4 != (code *)0x0) {
      uVar2 = ((undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEndEditing))[1];
      _swift_retain(uVar2);
      (*pcVar4)();
      FUN_100004550(pcVar4,uVar2);
    }
    FUN_100004594(auStack_58);
  }
  return;
}



/* Address: 0x10007c378 | FUN_10007c378 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10007c378(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plVar8;
  code *pcVar9;
  undefined *puVar5;
  
  puVar2 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  plVar8 = *(long **)(unaff_x20 + _TtC5Paste15ItemPreviewView::viewModel);
  puVar3 = puVar2;
  (**(code **)(*plVar8 + 0x70))();
  *(undefined **)(puVar2 + 0x20) = puVar3;
  puVar3 = &DAT_100eb2e58;
  puVar4 = puVar3;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  pcVar9 = *(code **)(*plVar8 + 0xf8);
  puVar5 = puVar4;
  _swift_retain();
  bVar1 = (byte)puVar5;
  (*pcVar9)();
  puVar6 = puVar3;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar7 = puVar3;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  FUN_10009efd8(0);
  _objc_allocWithZone();
  puVar5 = &DAT_100eb2e80;
  _swift_allocObject(&DAT_100eb2e80,0x60,7);
  *(code **)(puVar5 + 0x10) = FUN_10007c8b0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  *(code **)(puVar5 + 0x28) = FUN_10007c8b8;
  *(undefined **)(puVar5 + 0x30) = puVar6;
  *(code **)(puVar5 + 0x38) = FUN_10007c8c0;
  *(undefined **)(puVar5 + 0x40) = puVar7;
  puVar5[0x48] = bVar1 & 1;
  *(code **)(puVar5 + 0x50) = FUN_10007c8c8;
  *(undefined **)(puVar5 + 0x58) = puVar3;
  pcVar9 = FUN_10007637c;
  FUN_1002364ac(FUN_10007637c,puVar5);
  _swift_release(puVar4);
  objc_stub::popUpMenuPositioningItem_atLocation_inView_((ID)pcVar9,0,0xc024000000000000,0,param_1);
  return 0;
}



/* Address: 0x10007c538 | FUN_10007c538 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10007c538(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + _TtC5Paste15ItemPreviewView::viewModel);
    _swift_retain(plVar2);
    puVar1 = (undefined *)0x0;
    (**(code **)(*plVar2 + 0xa0))(0);
    _swift_release(plVar2);
  }
  return puVar1;
}



/* Address: 0x10007c5a4 | FUN_10007c5a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007c5a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    plVar1 = *(long **)(param_3 + _TtC5Paste15ItemPreviewView::viewModel);
    _swift_retain(plVar1);
    (**(code **)(*plVar1 + 0xe0))(param_2,thunk_FUN_100022ad0,0,0,0);
    _swift_release(plVar1);
    return;
  }
  return;
}



/* Address: 0x10007c62c | FUN_10007c62c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007c62c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + _TtC5Paste15ItemPreviewView::viewModel);
    _swift_retain(plVar1);
    (**(code **)(*plVar1 + 0xe8))(thunk_FUN_100022ad0,0,0,0);
    _swift_release(plVar1);
    return;
  }
  return;
}



/* Address: 0x10007c6a0 | FUN_10007c6a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007c6a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + _TtC5Paste15ItemPreviewView::viewModel);
    _swift_retain(plVar1);
    (**(code **)(*plVar1 + 0xf0))(0);
    _swift_release(plVar1);
    return;
  }
  return;
}



/* Address: 0x10007c700 | _TtC5Paste15ItemPreviewView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste15ItemPreviewView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.swift",0x1b,1,9,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.ItemPreviewView",0x15,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10007c788);
  (*pcVar1)();
}



/* Address: 0x10007c788 | FUN_10007c788 */

void FUN_10007c788(void)

{
  FUN_10007c86c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10007c7b8 | _TtC5Paste15ItemPreviewView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste15ItemPreviewView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onBeginEditing),
                ((undefined8 *)(param_1 + onBeginEditing))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onEndEditing),((undefined8 *)(param_1 + onEndEditing))[1])
  ;
  FUN_100004550(*(undefined8 *)(param_1 + onEditingStateChanged),
                ((undefined8 *)(param_1 + onEditingStateChanged))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x10007c86c | FUN_10007c86c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10007c86c(void)

{
  return ZEXT816(0x100f91c78);
}



/* Address: 0x10007c88c | FUN_10007c88c */

void FUN_10007c88c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10007c8b0 | FUN_10007c8b0 */

void FUN_10007c8b0(void)

{
  FUN_10007c538();
  return;
}



/* Address: 0x10007c8b8 | FUN_10007c8b8 */

void FUN_10007c8b8(void)

{
  FUN_10007c5a4();
  return;
}



/* Address: 0x10007c8c0 | FUN_10007c8c0 */

void FUN_10007c8c0(void)

{
  FUN_10007c62c();
  return;
}



/* Address: 0x10007c8c8 | FUN_10007c8c8 */

void FUN_10007c8c8(void)

{
  FUN_10007c6a0();
  return;
}



/* Address: 0x10007c8d0 | FUN_10007c8d0 */

void FUN_10007c8d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x10007c914 | FUN_10007c914 */

void FUN_10007c914(void)

{
  FUN_10007abf4();
  return;
}



/* Address: 0x10007c934 | FUN_10007c934 */

void FUN_10007c934(void)

{
  FUN_10007abf4();
  return;
}



/* Address: 0x10007c954 | FUN_10007c954 */

void FUN_10007c954(void)

{
  FUN_10007a830();
  return;
}



/* Address: 0x10007c95c | FUN_10007c95c */

void FUN_10007c95c(void)

{
  FUN_10007a8c8();
  return;
}



/* Address: 0x10007c964 | FUN_10007c964 */

void FUN_10007c964(void)

{
  FUN_10007abf4();
  return;
}



/* Address: 0x10007c984 | FUN_10007c984 */

void FUN_10007c984(void)

{
  FUN_10007a948();
  return;
}



/* Address: 0x10007c98c | FUN_10007c98c */

void FUN_10007c98c(void)

{
  FUN_10007aa1c();
  return;
}



/* Address: 0x10007c994 | FUN_10007c994 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10007c994(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ID self;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ID IVar7;
  AnyCancellable *this;
  __int64 _Var8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ID local_e0;
  ID local_d8;
  long local_d0;
  
  puVar3 = &DAT_100fa9c30;
  FUN_1000037f0(&DAT_100fa9c30,&DAT_100c270a8);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onBeginEditing);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6 = (undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEndEditing);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6 = (undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___previewHeader) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___editorHeader) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___contentView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___footer) = 0;
  puVar9 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var8 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar9 = PTR___swiftEmptySetSingleton_100eae0e8, _Var8 != 0)) {
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste15ItemPreviewView::cancellables) = puVar9;
  *(long **)(unaff_x20 + _TtC5Paste15ItemPreviewView::viewModel) = param_1;
  FUN_10007c86c();
  _swift_retain(param_1);
  dVar11 = 0.0;
  dVar12 = 0.0;
  dVar13 = 0.0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"initWithFrame:",0,0,0,0);
  puVar9 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  dVar14 = 1.97626258336499e-323;
  *(undefined8 *)(puVar9 + 0x18) = 9;
  *(undefined8 *)(puVar9 + 0x10) = 4;
  IVar7 = self;
  FUN_10007a614();
  *(ID *)(puVar9 + 0x20) = IVar7;
  FUN_10007aa60();
  *(ID *)(puVar9 + 0x28) = IVar7;
  FUN_10007ac34();
  *(ID *)(puVar9 + 0x30) = IVar7;
  FUN_10007af7c();
  *(ID *)(puVar9 + 0x38) = IVar7;
  puVar4 = puVar9;
  local_e0 = self;
  FUN_1001fa150(puVar9,FUN_10007d070,&local_f0);
  _swift_bridgeObjectRelease(puVar4);
  _swift_setDeallocating(puVar9);
  _swift_arrayDestroy(puVar9 + 0x20,*(undefined8 *)(puVar9 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  lVar1 = _TtC5Paste15ItemPreviewView::___lazy_storage___contentView;
  local_f8 = *(undefined8 *)(self + _TtC5Paste15ItemPreviewView::___lazy_storage___contentView);
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar9 = &DAT_100fa6550;
  FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
  puVar6 = &local_f0;
  _swift_dynamicCast(puVar6,&local_f8,uVar5,puVar9,6);
  lVar2 = local_d0;
  IVar7 = local_d8;
  if (((ulong)puVar6 & 1) == 0) {
    local_d0 = 0;
    dVar14 = 0.0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    FUN_100005808(&local_f0,&DAT_100fa6558,&DAT_100c22d48);
  }
  else {
    FUN_100004640(&local_f0,local_d8);
    (**(code **)(lVar2 + 0x38))(IVar7,lVar2);
    FUN_100004594(&local_f0);
    if (IVar7 != 0) {
      local_e0 = IVar7;
      local_d8 = self;
      FUN_1001fa09c(IVar7,FUN_10007d0d8,&local_f0);
      _swift_bridgeObjectRelease(IVar7);
    }
  }
  local_f8 = *(undefined8 *)(self + lVar1);
  puVar9 = &DAT_100fa9c38;
  FUN_1000037f0(&DAT_100fa9c38,&DAT_100c270b0);
  puVar6 = &local_f0;
  _swift_dynamicCast(puVar6,&local_f8,uVar5,puVar9,6);
  lVar2 = local_d0;
  IVar7 = local_d8;
  if (((ulong)puVar6 & 1) == 0) {
    local_d0 = 0;
    dVar14 = 0.0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    FUN_100005808(&local_f0,&DAT_100fa9c40,&DAT_100c270b8);
  }
  else {
    FUN_100004640(&local_f0,local_d8);
    (**(code **)(lVar2 + 8))(IVar7,lVar2);
    FUN_100004594(&local_f0);
    local_e0 = IVar7;
    local_d8 = self;
    FUN_1001fa09c(IVar7,FUN_10007d0d0,&local_f0);
    _swift_bridgeObjectRelease(IVar7);
  }
  local_f8 = *(undefined8 *)(self + lVar1);
  puVar9 = &DAT_100fa9c48;
  FUN_1000037f0(&DAT_100fa9c48,&DAT_100c270c0);
  puVar6 = &local_f0;
  _swift_dynamicCast(puVar6,&local_f8,uVar5,puVar9,6);
  lVar1 = local_d0;
  IVar7 = local_d8;
  if (((ulong)puVar6 & 1) == 0) {
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    FUN_100005808(&local_f0,&DAT_100fa9c50,&DAT_100c270c8);
    IVar7 = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen);
    if (IVar7 == 0) {
      dVar14 = 0.0;
      dVar11 = 0.0;
    }
    else {
      NSScreen::frame(IVar7);
      dVar14 = dVar12 * 0.25;
      dVar11 = dVar13 * 0.25;
    }
  }
  else {
    FUN_100004640(&local_f0,local_d8);
    (**(code **)(lVar1 + 8))(IVar7,lVar1);
    FUN_100004594(&local_f0);
  }
  objc_stub::setFrameSize_(self,dVar14 + 10.0,dVar11 + 76.0);
  (**(code **)(*param_1 + 0x88))(auStack_100 + -extraout_x8);
  puVar9 = &DAT_100eb2e58;
  _swift_allocObject(&DAT_100eb2e58,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10,self);
  FUN_10007d080();
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar9);
  (**(code **)(lVar10 + 8))(auStack_100 + -extraout_x8,puVar3);
  lVar10 = _TtC5Paste15ItemPreviewView::cancellables;
  _swift_beginAccess(self + _TtC5Paste15ItemPreviewView::cancellables,&local_f0,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(self + lVar10));
  _swift_endAccess(&local_f0);
  _swift_release(this);
  return self;
}



/* Address: 0x10007cf44 | FUN_10007cf44 */

void FUN_10007cf44(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  __int64 _Var3;
  undefined *puVar4;
  long unaff_x20;
  String SVar5;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onBeginEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEndEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___previewHeader) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___editorHeader) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___contentView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15ItemPreviewView::___lazy_storage___footer) = 0;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var3 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste15ItemPreviewView::cancellables) = puVar4;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8ee40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10007d040);
  (*pcVar2)();
}



/* Address: 0x10007d040 | FUN_10007d040 */

void FUN_10007d040(void)

{
  FUN_10007af08();
  return;
}



/* Address: 0x10007d048 | FUN_10007d048 */

long FUN_10007d048(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    _swift_makeBoxUnique(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Address: 0x10007d070 | FUN_10007d070 */

void FUN_10007d070(void)

{
  long unaff_x20;
  
  FUN_10007afe8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10007d078 | FUN_10007d078 */

void FUN_10007d078(void)

{
  FUN_10007b8cc();
  return;
}



/* Address: 0x10007d080 | FUN_10007d080 */

void FUN_10007d080(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa9c58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9c30;
  FUN_100005c24(&DAT_100fa9c30,&DAT_100c270a8);
  puVar2 = PTR__Combine__Publisher_>Combine__Publisher_100ea98d0;
  _swift_getWitnessTable(PTR__Combine__Publisher_>Combine__Publisher_100ea98d0,puVar1);
  DAT_100fa9c58 = puVar2;
  return;
}



/* Address: 0x10007d0d0 | FUN_10007d0d0 */

void FUN_10007d0d0(void)

{
  long unaff_x20;
  
  FUN_10007b784(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10007d0d8 | FUN_10007d0d8 */

void FUN_10007d0d8(void)

{
  long unaff_x20;
  
  FUN_10007b660(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10007d0e0 | FUN_10007d0e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007d0e0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  URL UVar8;
  undefined *puVar9;
  undefined *puVar10;
  AnyCancellable *pAVar11;
  undefined *puVar12;
  ID self;
  char *pcVar13;
  _StringGuts _Var14;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  ID IStack_1f0;
  long local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8 [3];
  undefined *local_190;
  long lStack_188;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &DAT_100fa9c60;
  FUN_1000037f0(&DAT_100fa9c60,&DAT_100c270d0);
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = (long)&IStack_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar15 - extraout_x12;
  iVar1 = *(int *)(puVar5 + 0x30);
  iVar2 = *(int *)(puVar5 + 0x40);
  iVar3 = *(int *)(puVar5 + 0x50);
  FUN_10009f578(lVar19);
  *(undefined8 *)(lVar19 + iVar1) = 0xd000000000000025;
  ((undefined8 *)(lVar19 + iVar1))[1] = 0x8000000100d8ee60;
  puVar6 = (undefined8 *)NSUserDefaults::standardUserDefaults((ID)&_OBJC_CLASS___NSUserDefaults);
  *(undefined8 **)(lVar19 + iVar2) = puVar6;
  *(undefined8 *)(lVar19 + iVar3) = 0x69746375646f7270;
  ((undefined8 *)(lVar19 + iVar3))[1] = 0xea00000000006e6f;
  puVar7 = puVar6;
  FUN_1002fd2bc();
  plVar18 = (long *)*puVar7;
  iVar1 = *(int *)(puVar4 + 0x30);
  iVar2 = *(int *)(puVar4 + 0x40);
  iVar3 = *(int *)(puVar4 + 0x50);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))(lVar15,lVar19,UVar8.unknown);
  *(undefined8 *)(lVar15 + iVar1) = 0xd000000000000025;
  ((undefined8 *)(lVar15 + iVar1))[1] = 0x8000000100d8ee60;
  *(undefined8 **)(lVar15 + iVar2) = puVar6;
  *(undefined8 *)(lVar15 + iVar3) = 0x69746375646f7270;
  ((undefined8 *)(lVar15 + iVar3))[1] = 0xea00000000006e6f;
  pcVar16 = *(code **)(*plVar18 + 0x88);
  _swift_retain(plVar18);
  (*pcVar16)(lVar15);
  _swift_release(plVar18);
  FUN_10007d6d0(lVar15);
  puVar4 = &DAT_100c270d8;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa9c68;
  FUN_1000037f0(&DAT_100fa9c68,&DAT_100c27108);
  _swift_initStackObject();
  FUN_1000da6e0(puVar4,puVar5);
  puVar5 = &DAT_100c27110;
  _swift_getKeyPath();
  puVar9 = &DAT_100fa9c70;
  FUN_1000037f0(&DAT_100fa9c70,&DAT_100c27140);
  _swift_initStackObject();
  FUN_1000da6e0(puVar5,puVar9);
  FUN_1000da768(local_1a8);
  FUN_1000da768(&local_b0);
  FUN_1002e1b54(&local_b0);
  _swift_release(local_1a8[0]);
  FUN_100004594(&local_b0);
  uVar20 = DAT_101057928;
  uVar17 = DAT_101057920;
  DAT_101057920 = FUN_10007d740;
  DAT_101057928 = 0;
  FUN_100004550(uVar17,uVar20);
  puVar9 = &DAT_100c27148;
  _swift_getKeyPath(&DAT_100c27148);
  puVar10 = &DAT_100fa9c78;
  FUN_1000037f0(&DAT_100fa9c78,&DAT_100c27178);
  _swift_allocObject();
  FUN_1000da6e0(puVar9,puVar10);
  puVar7 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_isLinkPreviewsEnabled);
  uVar22 = puVar7[1];
  uVar20 = *puVar7;
  uStack_98 = puVar7[3];
  uVar23 = puVar7[2];
  uStack_88 = puVar7[5];
  uVar21 = puVar7[4];
  uVar17 = puVar7[6];
  local_b0 = uVar20;
  uStack_a8 = uVar22;
  local_a0 = uVar23;
  local_90 = uVar21;
  local_80 = uVar17;
  _swift_retain(uVar20);
  _swift_retain(uVar22);
  _swift_retain(uVar23);
  _swift_retain(uVar21);
  _swift_retain(uVar17);
  puVar10 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar17);
  _swift_release(uVar21);
  _swift_release(uVar23);
  _swift_release(uVar22);
  _swift_release(uVar20);
  local_1a8[0] = puVar10;
  _swift_retain(puVar9);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_10004ff44();
  pAVar11 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar10);
  _swift_release(puVar9);
  uVar17 = DAT_100fa9c80;
  DAT_100fa9c80 = pAVar11;
  _swift_release(uVar17);
  puVar10 = &DAT_100c27180;
  _swift_getKeyPath(&DAT_100c27180);
  puVar12 = &DAT_100faa830;
  FUN_1000037f0(&DAT_100faa830,&DAT_100c271b0);
  _swift_initStackObject();
  FUN_1000da6e0(puVar10,puVar12);
  FUN_1000da768(local_1a8);
  lVar15 = lStack_188;
  puVar12 = local_190;
  FUN_100004640(local_1a8,local_190);
  (**(code **)(lVar15 + 0x10))(puVar12,lVar15);
  self = 0;
  FUN_1003214a8();
  _swift_getObjCClassFromMetadata();
  pcVar13 = (char *)objc_stub::fetchRequest(self);
  local_1b8 = 0;
  plVar18 = &local_1b8;
  objc_stub::countForFetchRequest_error_((ID)puVar12);
  lVar15 = local_1b8;
  FUN_100004594(local_1a8);
  if (lVar15 != 0) {
    _swift_willThrow();
  }
  FUN_1000d468c(local_1a8);
  _Var14.unknown = local_190;
  FUN_100004640(local_1a8);
  local_1b8 = 0;
  local_1b0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1a,_Var14);
  _swift_bridgeObjectRelease(local_1b0);
  local_1b8 = -0x2fffffffffffffee;
  local_1b0 = 0x8000000100d8ee90;
  SVar24 = Swift::CustomStringConvertible::get_description();
  SVar25.bridgeObject = plVar18;
  SVar25.str = pcVar13;
  Swift::String::append(SVar24,SVar25);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar24.bridgeObject = &DAT_e600000000000000;
  SVar24.str = (char *)0x736d65746920;
  SVar26.bridgeObject = plVar18;
  SVar26.str = pcVar13;
  Swift::String::append(SVar24,SVar26);
  uVar17 = local_1b0;
  FUN_1000d4db8(local_1b8,local_1b0,local_190,lStack_188);
  _swift_release(puVar9);
  _swift_bridgeObjectRelease(uVar17);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(puVar10);
  FUN_10007d6d0(lVar19);
  FUN_100004594(local_1a8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10007d6d0 | FUN_10007d6d0 */

undefined8 FUN_10007d6d0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa9c60;
  FUN_1000037f0(&DAT_100fa9c60,&DAT_100c270d0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10007d718 | FUN_10007d718 */

void FUN_10007d718(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002d60b0();
  *param_1 = param_2;
  return;
}



/* Address: 0x10007d73c | thunk_FUN_1002fd914 */

void thunk_FUN_1002fd914(void)

{
  FUN_1002fd914();
  return;
}



/* Address: 0x10007d740 | FUN_10007d740 */

undefined1  [16] FUN_10007d740(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20 [16];
  
  puVar1 = &DAT_100fa8170;
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  FUN_100357f60(local_20,FUN_10007d950,auStack_40,puVar1);
  return local_20;
}



/* Address: 0x10007d78c | FUN_10007d78c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007d78c(String *param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  String SVar1;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003595f8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x20))(param_3,param_4,local_50,lStack_48);
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    objc_stub::name(param_3);
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100004594(auStack_68);
  *param_1 = SVar1;
  return;
}



/* Address: 0x10007d850 | FUN_10007d850 */

void FUN_10007d850(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1002fd2fc();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10007d874 | FUN_10007d874 */

void FUN_10007d874(long param_1)

{
  undefined1 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long lStack_48;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppDelegate+Core.swift",0x1c,1,0x21,UVar4.unknown,pMVar2);
  }
  FUN_1000da768(&local_50);
  uVar6 = local_50;
  _swift_getObjectType(local_50);
  (**(code **)(lStack_48 + 0x10))(uVar1,uVar6,lStack_48);
  _swift_release(pMVar3);
  _swift_unknownObjectRelease(local_50);
  return;
}



/* Address: 0x10007d944 | FUN_10007d944 */

void FUN_10007d944(void)

{
  FUN_10007d874();
  return;
}



/* Address: 0x10007d94c | thunk_FUN_1002fd448 */

void thunk_FUN_1002fd448(void)

{
  thunk_FUN_1002fd448();
  return;
}



/* Address: 0x10007d950 | FUN_10007d950 */

void FUN_10007d950(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10007d78c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10007d958 | FUN_10007d958 */

undefined8 FUN_10007d958(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c27218;
  _swift_getKeyPath(&DAT_100c27218);
  puVar2 = &DAT_100c27240;
  _swift_getKeyPath(&DAT_100c27240);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x10007d9c8 | FUN_10007d9c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007d9c8(ID param_1)

{
  Published *pPVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  Published *pPVar4;
  undefined *puVar5;
  String SVar6;
  undefined *local_48;
  
  pPVar4 = *(Published **)(*(long *)(unaff_x20 + 0x10) + 0x10);
  pPVar1 = pPVar4;
  _swift_retain();
  FUN_1002ddf60();
  puVar5 = pPVar1->unknown;
  puVar2 = &DAT_100c27260;
  _swift_getKeyPath(&DAT_100c27260);
  puVar3 = &DAT_100c27288;
  _swift_getKeyPath(&DAT_100c27288);
  local_48 = puVar5;
  _swift_bridgeObjectRetain(puVar5);
  Combine::Published::_set_subscript(pPVar4,&local_48,pPVar4,puVar2,puVar3);
  objc_stub::identifier(param_1);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100039c50(SVar6.str,SVar6.bridgeObject,1);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  return;
}



/* Address: 0x10007daa8 | FUN_10007daa8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010007dd78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10007daa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  Published PVar4;
  SchedulerOptions SVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Stride SVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long lVar13;
  long extraout_x8_03;
  long lVar14;
  long extraout_x8_04;
  long unaff_x20;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ID local_78 [3];
  
  puVar1 = &DAT_100fa9d88;
  FUN_1000037f0(&DAT_100fa9d88,&DAT_100c294f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = auStack_e0 + -extraout_x8;
  local_c0 = (undefined *)SchedulerTimeType::Stride::_typeMetadataAccessor();
  local_d0 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  lVar15 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fa84e8;
  FUN_1000037f0(&DAT_100fa84e8,&DAT_100c25538);
  local_d8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar15 - extraout_x8_01;
  puVar2 = &DAT_100fa9d90;
  FUN_1000037f0(&DAT_100fa9d90,&DAT_100c272c8);
  lVar12 = *(long *)(puVar2 + -8);
  local_b8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar16 - extraout_x8_02;
  puVar2 = &DAT_100fa9de8;
  FUN_1000037f0(&DAT_100fa9de8,&DAT_100c272d8);
  lVar13 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa9df0;
  FUN_1000037f0(&DAT_100fa9df0,&DAT_100c272e0);
  lVar14 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = (lVar18 - extraout_x8_03) - extraout_x8_04;
  lVar19 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  _swift_beginAccess(lVar19 + _TtC5Paste18SearchBarViewModel::_searchQuery,local_78,0x21,0);
  _swift_retain(lVar19);
  PVar4.unknown = &DAT_100fa67f8;
  SVar11.unknown = &DAT_100c23010;
  FUN_1000037f0();
  Combine::Published::_get_projectedValue(PVar4);
  _swift_endAccess(local_78);
  _swift_release(lVar19);
  SchedulerTimeType::Stride::_milliseconds(0x78,SVar11);
  local_78[0] = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  SVar5 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar5.unknown + -8) + 0x38))(puVar17,1,1,SVar5.unknown);
  uVar6 = 0;
  FUN_10007ed28(0);
  puVar7 = &DAT_100fa84f8;
  FUN_100016eac(&DAT_100fa84f8,&DAT_100fa84e8,&DAT_100c25538,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar8 = &DAT_100fa9da8;
  FUN_100003a00(&DAT_100fa9da8,FUN_10007ed28,
                PTR_Foundation____C__NSRunLoop_>Combine__Scheduler_100ea7ac8);
  (extension_Combine)::Combine::Publisher::_debounce
            (lVar18,puVar8,local_78,puVar17,puVar1,uVar6,puVar7,puVar8);
  FUN_10007ed6c(puVar17);
  (**(code **)(local_d0 + 8))(lVar15,local_c0);
  (**(code **)(local_d8 + 8))(lVar16,puVar1);
  puVar9 = (undefined8 *)&DAT_100fa9df8;
  FUN_1000037f0(&DAT_100fa9df8,&DAT_100c272e8);
  _swift_allocObject();
  puVar9[3] = 2;
  puVar9[2] = 1;
  puVar10 = puVar9;
  FUN_1002ddf60();
  uVar6 = *puVar10;
  puVar9[4] = uVar6;
  FUN_100016eac(&DAT_100fa9db0,&DAT_100fa9d90,&DAT_100c272c8,
                PTR_Combine__Combine__Publishers__Debounce<undefined,undefined>_>Combine__Publisher_100ea9700
               );
  _swift_bridgeObjectRetain(uVar6);
  puVar1 = local_b8;
  (extension_Combine)::Combine::Publisher::_prepend();
  _swift_release(puVar9);
  (**(code **)(lVar12 + 8))(lVar18,puVar1);
  FUN_100016eac(&DAT_100fa9e00,&DAT_100fa9de8,&DAT_100c272d8,
                PTR_Combine__Combine__Publishers__Concatenate<undefined,undefined>_>Combine__Publisher_100ea9658
               );
  FUN_10007edb4();
  lVar12 = local_c8;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(lVar13 + 8))(lVar18 - extraout_x8_03,puVar2);
  puVar1 = &DAT_100eb2ec8;
  _swift_allocObject(&DAT_100eb2ec8,0x18,7);
  _swift_weakInit(puVar1 + 0x10,unaff_x20);
  FUN_1000037f0(&DAT_100fa9cd8,&DAT_100c271d8);
  FUN_100016eac(&DAT_100fa9e08,&DAT_100fa9df0,&DAT_100c272e0,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar1);
  (**(code **)(lVar14 + 8))(lVar12,puVar3);
  return;
}



/* Address: 0x10007df7c | FUN_10007df7c */

void FUN_10007df7c(undefined8 *param_1,ulong *param_2,long param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  MainActor *pMVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar7 = *param_2;
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
              ("Paste/MainViewModel.swift",0x19,1,0x13,UVar4.unknown,puVar3);
  }
  pMVar6 = (MainActor *)(param_3 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar6 != (MainActor *)0x0) {
    FUN_1002ddcf0();
    if ((uVar7 & 1) == 0) {
      uVar8 = *(undefined8 *)(pMVar6 + _TtC5Paste13MainViewModel::searchViewModel);
      _swift_retain(uVar8);
      _swift_release(pMVar2);
      _swift_release(pMVar6);
      goto LAB_10007e070;
    }
    _swift_release(pMVar2);
    pMVar2 = pMVar6;
  }
  _swift_release(pMVar2);
  uVar8 = 0;
LAB_10007e070:
  *param_1 = uVar8;
  return;
}



/* Address: 0x10007e088 | FUN_10007e088 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007e088(long *param_1,long *param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *param_2;
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
              ("Paste/MainViewModel.swift",0x19,1,0x1d,UVar4.unknown,puVar3);
  }
  if (lVar7 == 0) {
    _swift_release(pMVar2);
    lVar7 = 0;
  }
  else {
    FUN_1003b80f0();
    uVar6 = 0;
    FUN_100053f90(0);
    _swift_allocObject();
    FUN_100052734(lVar7,uVar6);
    _swift_release(pMVar2);
  }
  *param_1 = lVar7;
  return;
}



/* Address: 0x10007e194 | FUN_10007e194 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010007e578 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10007e194(void)

{
  undefined *puVar1;
  Publisher to;
  Publisher PVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  Published PVar6;
  SchedulerOptions SVar7;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar8;
  Stride SVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined auStack_160 [8];
  undefined *local_158;
  long local_150;
  undefined *local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined *local_120;
  undefined *local_118;
  Published local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  Publisher local_a0;
  Publisher local_98;
  long local_90;
  undefined *local_88;
  ID local_80 [4];
  
  puVar3 = &DAT_100fa8098;
  FUN_1000037f0(&DAT_100fa8098,&DAT_100c250f8);
  local_90 = *(long *)(puVar3 + -8);
  local_88 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  puVar5 = auStack_160 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar3 = &DAT_100fa6b78;
  local_a0.unknown = puVar5 + -extraout_x12;
  FUN_1000037f0(&DAT_100fa6b78,&DAT_100c236a0);
  local_c0 = *(long *)(puVar3 + -8);
  local_d0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(puVar5 + -extraout_x12) - extraout_x8_00;
  puVar3 = &DAT_100fa9d68;
  local_100 = lVar10;
  FUN_1000037f0(&DAT_100fa9d68,&DAT_100c272a8);
  local_b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_01;
  puVar3 = &DAT_100fa9d70;
  local_f0 = lVar10;
  FUN_1000037f0(&DAT_100fa9d70,&DAT_100c272b0);
  local_e0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_02;
  puVar3 = &DAT_100fa9d78;
  local_108 = lVar10;
  FUN_1000037f0(&DAT_100fa9d78,&DAT_100c272b8);
  local_c8 = *(long *)(puVar3 + -8);
  local_d8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_03;
  puVar3 = &DAT_100fa9d80;
  local_f8 = lVar10;
  FUN_1000037f0(&DAT_100fa9d80,&DAT_100c272c0);
  local_a8 = *(long *)(puVar3 + -8);
  local_b0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_04;
  puVar3 = &DAT_100fa9d88;
  local_e8 = lVar10;
  FUN_1000037f0(&DAT_100fa9d88,&DAT_100c294f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_05;
  local_120 = (undefined *)SchedulerTimeType::Stride::_typeMetadataAccessor();
  local_128 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  lVar11 = lVar10 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa84e8;
  FUN_1000037f0(&DAT_100fa84e8,&DAT_100c25538);
  local_150 = *(long *)(puVar3 + -8);
  local_158 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar15 = lVar11 - extraout_x8_07;
  puVar3 = &DAT_100fa9d90;
  FUN_1000037f0(&DAT_100fa9d90,&DAT_100c272c8);
  local_138 = *(long *)(puVar3 + -8);
  local_148 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = lVar15 - extraout_x8_08;
  puVar3 = &DAT_100fa9d98;
  FUN_1000037f0(&DAT_100fa9d98,&DAT_100c272d0);
  local_130 = *(long *)(puVar3 + -8);
  local_140 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar3 = &DAT_100fa80b0;
  FUN_1000037f0(&DAT_100fa80b0,&DAT_100c25110);
  lVar12 = *(long *)(puVar3 + -8);
  local_110.unknown = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (lVar16 - extraout_x8_09) - extraout_x8_10;
  uVar4 = 0;
  FUN_100086aac();
  _swift_allocObject();
  FUN_100086acc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar4;
  lVar14 = _TtC5Paste13MainViewModel::_currentCollectionViewModel;
  local_80[0] = 0;
  puVar5 = &DAT_100fa9cd8;
  FUN_1000037f0(&DAT_100fa9cd8,&DAT_100c271d8);
  local_118 = puVar5;
  Combine::Published::init(lVar13,puVar5,puVar5);
  (**(code **)(lVar12 + 0x20))(unaff_x20 + lVar14,lVar13,puVar3);
  lVar14 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  _swift_beginAccess(lVar14 + _TtC5Paste18SearchBarViewModel::_searchQuery,local_80,0x21,0);
  _swift_retain(lVar14);
  PVar6.unknown = &DAT_100fa67f8;
  SVar9.unknown = &DAT_100c23010;
  FUN_1000037f0();
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  _swift_release(lVar14);
  SchedulerTimeType::Stride::_milliseconds(0x78,SVar9);
  local_80[0] = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  SVar7 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar7.unknown + -8) + 0x38))(lVar10,1,1,SVar7.unknown);
  uVar4 = 0;
  FUN_10007ed28(0);
  puVar3 = &DAT_100fa84f8;
  FUN_100016eac(&DAT_100fa84f8,&DAT_100fa84e8,&DAT_100c25538,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar5 = &DAT_100fa9da8;
  FUN_100003a00(&DAT_100fa9da8,FUN_10007ed28,
                PTR_Foundation____C__NSRunLoop_>Combine__Scheduler_100ea7ac8);
  puVar1 = local_158;
  (extension_Combine)::Combine::Publisher::_debounce
            (lVar16,puVar5,local_80,lVar10,local_158,uVar4,puVar3,puVar5);
  FUN_10007ed6c(lVar10);
  (**(code **)(local_128 + 8))(lVar11,local_120);
  (**(code **)(local_150 + 8))(lVar15,puVar1);
  FUN_100016eac(&DAT_100fa9db0,&DAT_100fa9d90,&DAT_100c272c8,
                PTR_Combine__Combine__Publishers__Debounce<undefined,undefined>_>Combine__Publisher_100ea9700
               );
  FUN_10007edb4();
  puVar3 = local_148;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_138 + 8))(lVar16,puVar3);
  FUN_100016eac(&DAT_100fa9dc0,&DAT_100fa9d98,&DAT_100c272d0,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  puVar3 = local_140;
  AVar8 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_130 + 8))(lVar16 - extraout_x8_09,puVar3);
  FUN_100053f90(0);
  _swift_allocObject();
  local_120 = AVar8.unknown;
  _swift_retain();
  FUN_100052734();
  *(undefined **)(unaff_x20 + _TtC5Paste13MainViewModel::searchViewModel) = AVar8.unknown;
  FUN_10007daa8(local_108);
  _swift_beginAccess(*(long *)(*(long *)(unaff_x20 + 0x10) + 0x18) +
                     _TtC5Paste15TabBarViewModel::_selectedList,local_80,0x21,0);
  PVar6.unknown = &DAT_100fa6ba0;
  FUN_1000037f0(&DAT_100fa6ba0,&DAT_100c236a8);
  lVar14 = local_100;
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_80);
  FUN_100016eac(&DAT_100fa6ba8,&DAT_100fa6b78,&DAT_100c236a0,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar3 = local_d0;
  lVar10 = local_f0;
  (extension_Combine)::Combine::Publisher::_compactMap();
  (**(code **)(local_c0 + 8))(lVar14,puVar3);
  puVar1 = PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698;
  puVar3 = &DAT_100fa9dc8;
  FUN_100016eac(&DAT_100fa9dc8,&DAT_100fa9d70,&DAT_100c272b0,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  puVar5 = &DAT_100fa9dd0;
  FUN_100016eac(&DAT_100fa9dd0,&DAT_100fa9d68,&DAT_100c272a8,
                PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
               );
  lVar14 = local_f8;
  Combine::Publishers::CombineLatest::init(local_f8,puVar5,lVar10,local_e0,local_b8,puVar3,puVar5);
  FUN_100016eac(&DAT_100fa9dd8,&DAT_100fa9d78,&DAT_100c272b8,
                PTR_Combine__Combine__Publishers__CombineLatest<undefined,undefined>_>Combine__Publisher_100ea9608
               );
  puVar3 = local_d8;
  lVar10 = local_e8;
  (extension_Combine)::Combine::Publisher::_map();
  (**(code **)(local_c8 + 8))(lVar14,puVar3);
  lVar14 = _TtC5Paste13MainViewModel::_currentCollectionViewModel;
  _swift_beginAccess(unaff_x20 + _TtC5Paste13MainViewModel::_currentCollectionViewModel,local_80,
                     0x21,0);
  to.unknown = local_a0.unknown;
  Combine::Published::_get_projectedValue(local_110);
  _swift_endAccess(local_80);
  FUN_100016eac(&DAT_100fa9de0,&DAT_100fa9d80,&DAT_100c272c0,puVar1);
  puVar3 = local_b0;
  (extension_Combine)::Combine::Publisher::_assign(to);
  puVar5 = local_88;
  lVar11 = local_90;
  PVar2.unknown = local_98.unknown;
  (**(code **)(local_90 + 0x10))(local_98.unknown,to.unknown,local_88);
  _swift_beginAccess(unaff_x20 + lVar14,local_80,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar14),PVar2);
  _swift_endAccess(local_80);
  _swift_release(local_120);
  (**(code **)(lVar11 + 8))(to.unknown,puVar5);
  (**(code **)(local_a8 + 8))(lVar10,puVar3);
  return;
}



/* Address: 0x10007eac0 | FUN_10007eac0 */

void FUN_10007eac0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainViewModel.swift",0x19,1,0x2c,UVar6.unknown,puVar5);
  }
  lVar8 = lVar1;
  if (lVar1 == 0) {
    _swift_retain(lVar2);
    lVar8 = lVar2;
  }
  _swift_retain(lVar1);
  _swift_release(pMVar4);
  *param_1 = lVar8;
  return;
}



/* Address: 0x10007eb8c | FUN_10007eb8c */

void FUN_10007eb8c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = _TtC5Paste13MainViewModel::_currentCollectionViewModel;
  puVar2 = &DAT_100fa80b0;
  FUN_1000037f0(&DAT_100fa80b0,&DAT_100c25110);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste13MainViewModel::searchViewModel));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10007ebfc | FUN_10007ebfc */

void FUN_10007ebfc(void)

{
  FUN_10007ec04(0);
  return;
}



/* Address: 0x10007ec04 | FUN_10007ec04 */

void FUN_10007ec04(undefined8 param_1)

{
  if (DAT_100fa9cc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca19f0);
  return;
}



/* Address: 0x10007ec3c | FUN_10007ec3c */

void FUN_10007ec3c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  lVar2 = 0x13f;
  local_38 = puVar1;
  FUN_10007ecb8();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10007ecb8 | FUN_10007ecb8 */

void FUN_10007ecb8(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100fa9cd0.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100fa9cd8;
    FUN_100005c24(&DAT_100fa9cd8,&DAT_100c271d8);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fa9cd0 = PVar2;
    }
  }
  return;
}



/* Address: 0x10007ed18 | thunk_FUN_100021d58 */

void thunk_FUN_100021d58(void)

{
  FUN_100021d58();
  return;
}



/* Address: 0x10007ed1c | thunk_FUN_100021dc4 */

void thunk_FUN_100021dc4(void)

{
  FUN_100021dc4();
  return;
}



/* Address: 0x10007ed20 | thunk_FUN_100041a74 */

void thunk_FUN_100041a74(void)

{
  FUN_100041a74();
  return;
}



/* Address: 0x10007ed24 | thunk_FUN_100041adc */

void thunk_FUN_100041adc(void)

{
  FUN_100041adc();
  return;
}


