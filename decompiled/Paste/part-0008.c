/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100013404 | FUN_100013404 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100013404(undefined8 *param_1)

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
  FUN_100013084();
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
  FUN_10023c8b4(0);
  ppuVar4 = local_80;
  FUN_1001f97b4(uVar8,uVar9,uVar10,uVar11,ppuVar4,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  puVar5 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar6 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar5 + 0x20) = ppuVar4;
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_setDeallocating(puVar5);
  uVar3 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar5 + 0x20,uVar3,puVar6);
  return puVar7;
}



/* Address: 0x10001354c | _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::
   init(ID param_1,SEL param_2)

{
  FUN_10001355c(param_1,param_2,0x9d,FUN_10001333c);
  return param_1;
}



/* Address: 0x10001355c | FUN_10001355c */

char * FUN_10001355c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/ItemPreviewView.PreviewHeader.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,param_3,UVar3.unknown,pMVar1);
  }
  (*param_4)();
  _swift_release(pMVar2);
  return pcVar4;
}



/* Address: 0x100013604 | _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::
   initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,0xa6,UVar4.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + onCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + ___lazy_storage___textField) = 0;
  puVar1 = (undefined8 *)(param_1 + originalText);
  *puVar1 = 0;
  puVar1[1] = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8ddd0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000136ec);
  (*pcVar2)();
}



/* Address: 0x1000136ec | _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::
     mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,0xaa,UVar4.unknown,pMVar2);
  }
  IVar6 = param_1;
  FUN_100013084();
  FUN_10023b3e0();
  if ((IVar6 & 1) == 0) {
    FUN_100011c78(0);
  }
  else {
    local_50.receiver = param_1;
    local_50.super_class = pcVar1;
    _objc_msgSendSuper2(&local_50,"mouseDown:",param_3);
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000137fc | _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::
   initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_100013810(param_1,param_2,0x82,"Paste.TitleLabel",0x10,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x100013810 | FUN_100013810 */

void FUN_100013810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,param_3,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer(param_4,param_5,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000138a8);
  (*pcVar1)();
}



/* Address: 0x1000138a8 | _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::
     _cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onCommitEditing),
                ((undefined8 *)(param_1 + onCommitEditing))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + originalText + 8));
  return;
}



/* Address: 0x1000138f8 | FUN_1000138f8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000138f8(void)

{
  return ZEXT816(0x100f8f4f0);
}



/* Address: 0x100013918 | FUN_100013918 */

void FUN_100013918(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10001393c | FUN_10001393c */

void FUN_10001393c(void)

{
  FUN_100013204();
  return;
}



/* Address: 0x100013944 | FUN_100013944 */

void FUN_100013944(void)

{
  FUN_1000122ac();
  return;
}



/* Address: 0x10001394c | FUN_10001394c */

void FUN_10001394c(void)

{
  long unaff_x20;
  
  FUN_100013404(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100013954 | FUN_100013954 */

undefined8 FUN_100013954(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa8810;
  FUN_1000037f0(&DAT_100fa8810,&DAT_100c23ce0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10001399c | FUN_10001399c */

void FUN_10001399c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onClose);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onRename);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onShare);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onPin);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onEdit);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___titleLabel) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___closeButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___editButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___shareButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___pinButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___actionsStack) = 0;
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8ddd0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100013a8c);
  (*pcVar2)();
}



/* Address: 0x100013a8c | FUN_100013a8c */

void FUN_100013a8c(void)

{
  long unaff_x20;
  
  FUN_1000128d8(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100013a94 | FUN_100013a94 */

void FUN_100013a94(void)

{
  FUN_1000124f4();
  return;
}



/* Address: 0x100013a9c | FUN_100013a9c */

void FUN_100013a9c(void)

{
  FUN_100012578();
  return;
}



/* Address: 0x100013ac4 | FUN_100013ac4 */

void FUN_100013ac4(void)

{
  FUN_100012578();
  return;
}



/* Address: 0x100013aec | thunk_FUN_100013918 */

void thunk_FUN_100013918(void)

{
  FUN_100013918();
  return;
}



/* Address: 0x100013af0 | thunk_FUN_10000e980 */

void thunk_FUN_10000e980(void)

{
  thunk_FUN_10000e980();
  return;
}



/* Address: 0x100013af4 | FUN_100013af4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100013af4(void)

{
  long lVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  String SVar8;
  String SVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar2 = _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___saveButton;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar3.unknown = &stack0xffffffffffffffb0 + lVar1;
  lVar4 = *(long *)(unaff_x20 +
                   _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___saveButton);
  if (lVar4 == 0) {
    FUN_1001c3908(LVar3.unknown);
    SVar8 = (extension_Foundation)::Swift::String::init(LVar3);
    uVar5 = 0x73;
    FUN_1001e94d4(0x73,0xe100000000000000);
    FUN_1001bf108(LVar3.unknown);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
    puVar6 = &DAT_100eb03e0;
    _swift_allocObject(&DAT_100eb03e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    uVar7 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar1) = FUN_10001484c;
    *(undefined **)((long)auStack_60 + lVar1 + 8) = puVar6;
    auStack_68[lVar1] = 0;
    *(void **)((long)&uStack_70 + lVar1) = SVar9.bridgeObject;
    lVar4 = 0;
    FUN_10023e034(uVar7,0,0,SVar8.str,SVar8.bridgeObject,uVar5,0x100000,0,SVar9.str);
    FUN_10023da08(1);
    *(long *)(unaff_x20 + lVar2) = lVar4;
  }
  return lVar4;
}



/* Address: 0x100013c64 | FUN_100013c64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

code * FUN_100013c64(void)

{
  long lVar1;
  code *self;
  code *pcVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___writingToolsButton;
  pcVar2 = *(code **)(unaff_x20 +
                     _TtCC5Paste15ItemPreviewView12EditorHeader::
                     ___lazy_storage___writingToolsButton);
  self = pcVar2;
  if (pcVar2 == (code *)0x1) {
    self = FUN_100013e44;
    FUN_10021662c(FUN_100013e44,0);
    if (self != (code *)0x0) {
      objc_stub::setHidden_((ID)self,1);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = self;
    FUN_10001486c(uVar3);
  }
  FUN_10001487c(pcVar2);
  return self;
}



/* Address: 0x100013cec | FUN_100013cec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100013cec(void)

{
  long lVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  String SVar9;
  String SVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar2 = _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___cancelButton;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar3.unknown = &stack0xffffffffffffffb0 + lVar1;
  lVar4 = *(long *)(unaff_x20 +
                   _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___cancelButton);
  if (lVar4 == 0) {
    FUN_1001c0788(LVar3.unknown);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
    pcVar5 = SVar9.str;
    FUN_1001e95f0();
    uVar8 = *(undefined8 *)pcVar5;
    FUN_1001be988(LVar3.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
    puVar6 = &DAT_100eb03e0;
    _swift_allocObject(&DAT_100eb03e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    uVar7 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar1) = FUN_10001488c;
    *(undefined **)((long)auStack_60 + lVar1 + 8) = puVar6;
    auStack_68[lVar1] = 0;
    *(void **)((long)&uStack_70 + lVar1) = SVar10.bridgeObject;
    lVar4 = 0;
    FUN_10023e034(uVar7,0,0,SVar9.str,SVar9.bridgeObject,uVar8,0,0,SVar10.str);
    *(long *)(unaff_x20 + lVar2) = lVar4;
  }
  return lVar4;
}



/* Address: 0x100013e44 | FUN_100013e44 */

void FUN_100013e44(void)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  local_30 = 0;
  uStack_18 = 0;
  uStack_20 = 0;
  FUN_1002160fc(&local_30);
  FUN_100013954(&local_30);
  return;
}



/* Address: 0x100013e74 | FUN_100013e74 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100013e74(long param_1,long *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return (code *)0x0;
  }
  pcVar1 = *(code **)(param_1 + *param_2);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + *param_2))[1];
    FUN_100011128(pcVar1,uVar2);
    (*pcVar1)(0);
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x100013efc | FUN_100013efc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100013efc(void)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *self;
  ID IVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  ID local_80;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::onSave);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::onCancel);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::shouldShowWritingTools) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___cancelButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___writingToolsButton) =
       1;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___saveButton) = 0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  puVar3 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 7;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  IVar4 = IVar2;
  FUN_100013cec();
  *(ID *)(puVar3 + 0x20) = IVar4;
  FUN_100013c64();
  if (IVar4 == 0) {
    self = &_OBJC_CLASS___NSView;
    _objc_allocWithZone();
    IVar4 = objc_stub::init((ID)self);
  }
  *(ID *)(puVar3 + 0x28) = IVar4;
  FUN_100013af4();
  *(ID *)(puVar3 + 0x30) = IVar4;
  local_80 = IVar2;
  FUN_1001fa150(puVar3,FUN_1000147dc,auStack_90);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar2;
}



/* Address: 0x100014058 | FUN_100014058 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100014058(ID param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  IVar2 = param_1;
  FUN_100013cec();
  IVar2 = objc_stub::leadingAnchor(IVar2);
  IVar3 = objc_stub::leadingAnchor(param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x4020000000000000,IVar3);
  IVar2 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste15ItemPreviewView12EditorHeader::
                            ___lazy_storage___cancelButton));
  IVar4 = objc_stub::centerYAnchor(param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar2,IVar4);
  IVar2 = IVar4;
  FUN_100013af4();
  IVar2 = objc_stub::trailingAnchor(IVar2);
  IVar5 = objc_stub::trailingAnchor(param_1);
  IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0xc020000000000000,IVar5);
  lVar1 = _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___saveButton;
  IVar5 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___saveButton
                            ));
  IVar6 = objc_stub::centerYAnchor(param_1);
  puVar7 = (undefined *)objc_stub::constraintEqualToAnchor_(IVar5,IVar6);
  puVar8 = puVar7;
  FUN_100013c64();
  if (puVar8 == (undefined *)0x0) {
    FUN_1001f8d74();
  }
  else {
    IVar5 = objc_stub::trailingAnchor((ID)puVar8);
    IVar6 = objc_stub::leadingAnchor(*(ID *)(param_1 + lVar1));
    IVar5 = objc_stub::constraintEqualToAnchor_constant_(IVar5,0xc020000000000000,IVar6);
    IVar6 = objc_stub::centerYAnchor((ID)puVar8);
    IVar9 = objc_stub::centerYAnchor(param_1);
    IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar9);
    puVar8 = &DAT_100fa8830;
    FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
    _swift_initStackObject();
    *(undefined8 *)(puVar8 + 0x18) = 4;
    *(undefined8 *)(puVar8 + 0x10) = 2;
    uVar10 = 0;
    FUN_1000147e4();
    *(undefined8 *)(puVar8 + 0x38) = uVar10;
    *(undefined ***)(puVar8 + 0x40) = &PTR_PTR_100ec00a8;
    *(ID *)(puVar8 + 0x20) = IVar5;
    *(undefined8 *)(puVar8 + 0x60) = uVar10;
    *(undefined ***)(puVar8 + 0x68) = &PTR_PTR_100ec00a8;
    *(ID *)(puVar8 + 0x48) = IVar6;
    puVar11 = puVar8;
    FUN_1001f8d60();
    _swift_setDeallocating(puVar8);
    uVar10 = *(undefined8 *)(puVar8 + 0x10);
    puVar12 = &DAT_100fa6bc0;
    FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
    _swift_arrayDestroy(puVar8 + 0x20,uVar10,puVar12);
    puVar12 = puVar11;
    FUN_100089cb4();
    puVar8 = puVar12;
    FUN_1001f8d74();
    _swift_bridgeObjectRelease(puVar12);
    _swift_bridgeObjectRelease(puVar11);
  }
  puVar12 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar12 + 0x18) = 10;
  *(undefined8 *)(puVar12 + 0x10) = 5;
  uVar10 = 0;
  FUN_1000147e4();
  *(undefined8 *)(puVar12 + 0x38) = uVar10;
  *(undefined ***)(puVar12 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x20) = IVar3;
  *(undefined8 *)(puVar12 + 0x60) = uVar10;
  *(undefined ***)(puVar12 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x48) = IVar4;
  *(undefined8 *)(puVar12 + 0x88) = uVar10;
  *(undefined ***)(puVar12 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar12 + 0x70) = IVar2;
  *(undefined8 *)(puVar12 + 0xb0) = uVar10;
  *(undefined ***)(puVar12 + 0xb8) = &PTR_PTR_100ec00a8;
  *(undefined **)(puVar12 + 0x98) = puVar7;
  puVar7 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar12 + 0xd8) = puVar7;
  *(undefined ***)(puVar12 + 0xe0) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar12 + 0xc0) = puVar8;
  puVar7 = puVar12;
  FUN_1001f8d60(puVar12);
  _swift_setDeallocating(puVar12);
  uVar10 = *(undefined8 *)(puVar12 + 0x10);
  puVar8 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar12 + 0x20,uVar10,puVar8);
  return puVar7;
}



/* Address: 0x1000144d4 | _TtCC5Paste15ItemPreviewView12EditorHeader::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC5Paste15ItemPreviewView12EditorHeader::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/ItemPreviewView.EditorHeader.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.EditorHeader.swift",0x28,1,0x30,UVar3.unknown,pMVar1);
  }
  FUN_100013efc();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10001456c | _TtCC5Paste15ItemPreviewView12EditorHeader::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste15ItemPreviewView12EditorHeader::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/ItemPreviewView.EditorHeader.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.EditorHeader.swift",0x28,1,0x42,UVar3.unknown,pMVar1);
  }
  FUN_100014730();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x100014618 | _TtCC5Paste15ItemPreviewView12EditorHeader::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste15ItemPreviewView12EditorHeader::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("Paste/ItemPreviewView.EditorHeader.swift",0x28,1,7,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.EditorHeader",0x12,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000146a0);
  (*pcVar1)();
}



/* Address: 0x1000146a0 | _TtCC5Paste15ItemPreviewView12EditorHeader::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste15ItemPreviewView12EditorHeader::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onSave),((undefined8 *)(param_1 + onSave))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCancel),((undefined8 *)(param_1 + onCancel))[1]);
  FUN_10001486c(*(undefined8 *)(param_1 + ___lazy_storage___writingToolsButton));
  return;
}



/* Address: 0x100014710 | FUN_100014710 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100014710(void)

{
  return ZEXT816(0x100f8f5b8);
}



/* Address: 0x100014730 | FUN_100014730 */

void FUN_100014730(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::onSave);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::onCancel);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::shouldShowWritingTools) =
       0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___cancelButton) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___writingToolsButton) =
       1;
  *(undefined8 *)
   (unaff_x20 + _TtCC5Paste15ItemPreviewView12EditorHeader::___lazy_storage___saveButton) = 0;
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8de60);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000147dc);
  (*pcVar2)();
}



/* Address: 0x1000147dc | FUN_1000147dc */

void FUN_1000147dc(void)

{
  long unaff_x20;
  
  FUN_100014058(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000147e4 | FUN_1000147e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000147e4(void)

{
  undefined *puVar1;
  
  if (DAT_100fa86a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSLayoutConstraint;
  _swift_getObjCClassMetadata();
  DAT_100fa86a0 = puVar1;
  return;
}



/* Address: 0x100014828 | FUN_100014828 */

void FUN_100014828(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10001484c | FUN_10001484c */

void FUN_10001484c(void)

{
  FUN_100013e74();
  return;
}



/* Address: 0x10001486c | FUN_10001486c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10001486c(long param_1)

{
  if (param_1 == 1) {
    return 1;
  }
  return 0;
}



/* Address: 0x10001487c | FUN_10001487c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_10001487c(long param_1)

{
  if (param_1 == 1) {
    return 1;
  }
  return param_1;
}



/* Address: 0x10001488c | FUN_10001488c */

void FUN_10001488c(void)

{
  FUN_100013e74();
  return;
}



/* Address: 0x1000148ac | FUN_1000148ac */

void FUN_1000148ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1000148d4 | FUN_1000148d4 */

undefined8 * FUN_1000148d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100014918 | FUN_100014918 */

undefined8 * FUN_100014918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100014984 | FUN_100014984 */

undefined8 * FUN_100014984(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1000149d0 | FUN_1000149d0 */

int FUN_1000149d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100014a18 | FUN_100014a18 */

void FUN_100014a18(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100014a58 | FUN_100014a58 */

undefined1  [16] FUN_100014a58(void)

{
  return ZEXT816(0x100eb0468);
}



/* Address: 0x100014a68 | FUN_100014a68 */

void FUN_100014a68(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0350,1);
  return;
}



/* Address: 0x100014a78 | FUN_100014a78 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100014a78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  VerticalAlignment VVar7;
  long extraout_x8;
  long lVar8;
  long extraout_x12;
  undefined8 *puVar9;
  MainActor *local_630;
  long local_628;
  undefined8 auStack_620 [14];
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  
  puVar2 = &DAT_100fa6e30;
  FUN_1000037f0(&DAT_100fa6e30,&DAT_100c23960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar8 = (long)&local_630 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_628 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)(lVar8 - extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_630 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0xc,UVar5.unknown,puVar4);
  }
  local_e0 = 0;
  FUN_100014f1c(&uStack_d8,param_2,param_3,param_4 & 1,param_5);
  uStack_418 = uStack_98;
  local_420 = local_a0;
  uStack_408 = uStack_88;
  uStack_410 = local_90;
  uStack_458 = uStack_d8;
  local_460 = local_e0;
  uStack_448 = uStack_c8;
  uStack_450 = uStack_d0;
  uStack_438 = uStack_b8;
  local_440 = local_c0;
  uStack_428 = uStack_a8;
  uStack_430 = local_b0;
  uStack_3d8 = uStack_c8;
  local_3e0 = uStack_d0;
  uStack_3c8 = uStack_b8;
  uStack_3d0 = local_c0;
  uStack_3f8 = uStack_78;
  local_400 = local_80;
  uStack_3e8 = uStack_d8;
  uStack_3f0 = local_e0;
  uStack_3b8 = uStack_a8;
  local_3c0 = local_b0;
  uStack_3a8 = uStack_98;
  uStack_3b0 = local_a0;
  uStack_398 = uStack_88;
  local_3a0 = local_90;
  uStack_388 = uStack_78;
  uStack_390 = local_80;
  FUN_100016b88(&local_460,&local_150);
  FUN_100016bd8(&uStack_3f0);
  local_e0 = 0;
  FUN_100015164(&uStack_d8,param_2,param_3,param_4 & 1,param_5);
  uStack_338 = uStack_98;
  local_340 = local_a0;
  uStack_328 = uStack_88;
  uStack_330 = local_90;
  uStack_378 = uStack_d8;
  local_380 = local_e0;
  uStack_368 = uStack_c8;
  uStack_370 = uStack_d0;
  uStack_358 = uStack_b8;
  local_360 = local_c0;
  uStack_348 = uStack_a8;
  uStack_350 = local_b0;
  uStack_2f8 = uStack_c8;
  local_300 = uStack_d0;
  uStack_2e8 = uStack_b8;
  uStack_2f0 = local_c0;
  uStack_318 = uStack_78;
  local_320 = local_80;
  uStack_308 = uStack_d8;
  uStack_310 = local_e0;
  uStack_2d8 = uStack_a8;
  local_2e0 = local_b0;
  uStack_2c8 = uStack_98;
  uStack_2d0 = local_a0;
  uStack_2b8 = uStack_88;
  local_2c0 = local_90;
  uStack_2a8 = uStack_78;
  uStack_2b0 = local_80;
  FUN_100016b88(&local_380,&local_150);
  FUN_100016bd8(&uStack_310);
  local_e0 = 0;
  FUN_1000152c4(&uStack_d8,param_2,param_3,param_4 & 1,param_5);
  uStack_258 = uStack_98;
  local_260 = local_a0;
  uStack_248 = uStack_88;
  uStack_250 = local_90;
  uStack_298 = uStack_d8;
  local_2a0 = local_e0;
  uStack_288 = uStack_c8;
  uStack_290 = uStack_d0;
  uStack_278 = uStack_b8;
  local_280 = local_c0;
  uStack_268 = uStack_a8;
  uStack_270 = local_b0;
  uStack_218 = uStack_c8;
  local_220 = uStack_d0;
  uStack_238 = uStack_78;
  local_240 = local_80;
  uStack_228 = uStack_d8;
  uStack_230 = local_e0;
  uStack_208 = uStack_b8;
  local_210 = local_c0;
  uStack_1f8 = uStack_a8;
  local_200 = local_b0;
  uStack_1e8 = uStack_98;
  local_1f0 = local_a0;
  uStack_1d8 = uStack_88;
  local_1e0 = local_90;
  uStack_1c8 = uStack_78;
  local_1d0 = local_80;
  FUN_100016c20(&local_2a0,&local_150);
  VVar7.unknown = (undefined *)&uStack_230;
  FUN_100005808(VVar7.unknown,&DAT_100fa6e40,&DAT_100c23970);
  VVar7 = SwiftUI::VerticalAlignment::get_center(VVar7);
  *puVar9 = VVar7.unknown;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 2) = 1;
  puVar2 = &DAT_100fa6e48;
  FUN_1000037f0(&DAT_100fa6e48,&DAT_100c23978);
  FUN_10001612c((long)puVar9 + (long)*(int *)(puVar2 + 0x2c),param_2,param_3,param_4 & 1,param_5);
  lVar8 = local_628;
  uStack_488 = uStack_418;
  local_490 = local_420;
  uStack_478 = uStack_408;
  uStack_480 = uStack_410;
  uStack_468 = uStack_3f8;
  local_470 = local_400;
  uStack_4c8 = uStack_458;
  local_4d0 = local_460;
  uStack_4b8 = uStack_448;
  uStack_4c0 = uStack_450;
  uStack_4a8 = uStack_438;
  local_4b0 = local_440;
  uStack_498 = uStack_428;
  uStack_4a0 = uStack_430;
  uStack_4f8 = uStack_338;
  local_500 = local_340;
  uStack_4e8 = uStack_328;
  local_4f0 = uStack_330;
  uStack_4d8 = uStack_318;
  local_4e0 = local_320;
  uStack_538 = uStack_378;
  local_540 = local_380;
  uStack_528 = uStack_368;
  uStack_530 = uStack_370;
  uStack_518 = uStack_358;
  local_520 = local_360;
  uStack_508 = uStack_348;
  local_510 = uStack_350;
  uStack_568 = uStack_258;
  local_570 = local_260;
  uStack_558 = uStack_248;
  local_560 = uStack_250;
  uStack_548 = uStack_238;
  local_550 = local_240;
  uStack_5a8 = uStack_298;
  local_5b0 = local_2a0;
  uStack_598 = uStack_288;
  uStack_5a0 = uStack_290;
  uStack_588 = uStack_278;
  local_590 = local_280;
  uStack_578 = uStack_268;
  local_580 = uStack_270;
  FUN_100011090(puVar9,local_628,&DAT_100fa6e30,&DAT_100c23960);
  uStack_178 = uStack_488;
  local_180 = local_490;
  uStack_168 = uStack_478;
  local_170 = uStack_480;
  uStack_158 = uStack_468;
  local_160 = local_470;
  uStack_1b8 = uStack_4c8;
  local_1c0 = local_4d0;
  uStack_1a8 = uStack_4b8;
  local_1b0 = uStack_4c0;
  uStack_188 = uStack_498;
  local_190 = uStack_4a0;
  uStack_198 = uStack_4a8;
  local_1a0 = local_4b0;
  param_1[1] = uStack_4c8;
  *param_1 = local_4d0;
  param_1[3] = uStack_4b8;
  param_1[2] = uStack_4c0;
  param_1[5] = uStack_4a8;
  param_1[4] = local_4b0;
  param_1[7] = uStack_498;
  param_1[6] = uStack_4a0;
  param_1[9] = uStack_488;
  param_1[8] = local_490;
  param_1[0xb] = uStack_478;
  param_1[10] = uStack_480;
  uStack_148 = uStack_538;
  local_150 = local_540;
  uStack_138 = uStack_528;
  local_140 = uStack_530;
  uStack_e8 = uStack_4d8;
  local_f0 = local_4e0;
  uStack_f8 = uStack_4e8;
  local_100 = local_4f0;
  uStack_108 = uStack_4f8;
  local_110 = local_500;
  uStack_118 = uStack_508;
  local_120 = local_510;
  uStack_128 = uStack_518;
  local_130 = local_520;
  param_1[0x15] = uStack_508;
  param_1[0x14] = local_510;
  param_1[0x17] = uStack_4f8;
  param_1[0x16] = local_500;
  param_1[0x19] = uStack_4e8;
  param_1[0x18] = local_4f0;
  param_1[0x1b] = uStack_4d8;
  param_1[0x1a] = local_4e0;
  param_1[0xd] = uStack_468;
  param_1[0xc] = local_470;
  param_1[0xf] = uStack_538;
  param_1[0xe] = local_540;
  param_1[0x11] = uStack_528;
  param_1[0x10] = uStack_530;
  param_1[0x13] = uStack_518;
  param_1[0x12] = local_520;
  uStack_d8 = uStack_5a8;
  local_e0 = local_5b0;
  uStack_c8 = uStack_598;
  uStack_d0 = uStack_5a0;
  uStack_88 = uStack_558;
  local_90 = local_560;
  uStack_78 = uStack_548;
  local_80 = local_550;
  uStack_a8 = uStack_578;
  local_b0 = local_580;
  uStack_98 = uStack_568;
  local_a0 = local_570;
  uStack_b8 = uStack_588;
  local_c0 = local_590;
  param_1[0x1d] = uStack_5a8;
  param_1[0x1c] = local_5b0;
  param_1[0x1f] = uStack_598;
  param_1[0x1e] = uStack_5a0;
  param_1[0x27] = uStack_558;
  param_1[0x26] = local_560;
  param_1[0x29] = uStack_548;
  param_1[0x28] = local_550;
  param_1[0x23] = uStack_578;
  param_1[0x22] = local_580;
  param_1[0x25] = uStack_568;
  param_1[0x24] = local_570;
  param_1[0x21] = uStack_588;
  param_1[0x20] = local_590;
  puVar2 = &DAT_100fa6e50;
  FUN_1000037f0(&DAT_100fa6e50,&DAT_100c23980);
  FUN_100011090(lVar8,(long)param_1 + (long)*(int *)(puVar2 + 0x50),&DAT_100fa6e30,&DAT_100c23960);
  iVar1 = *(int *)(puVar2 + 0x60);
  *(undefined8 *)((long)param_1 + (long)iVar1) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar1) + 1) = 1;
  FUN_100016b88(&local_1c0,auStack_620);
  FUN_100016b88(&local_150,auStack_620);
  FUN_100016c20(&local_e0,auStack_620);
  FUN_100005808(puVar9,&DAT_100fa6e30,&DAT_100c23960);
  FUN_100005808(lVar8,&DAT_100fa6e30,&DAT_100c23960);
  FUN_100005808(&local_5b0,&DAT_100fa6e40,&DAT_100c23970);
  FUN_100016bd8(&local_540);
  FUN_100016bd8(&local_4d0);
  _swift_release(local_630);
  return;
}



/* Address: 0x100014f1c | FUN_100014f1c */

void FUN_100014f1c(String *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  char *pcVar3;
  long extraout_x8;
  String SVar4;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1001e1e54(LVar1.unknown);
  SVar4 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar2 = &DAT_100eb0580;
  _swift_allocObject(&DAT_100eb0580,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _swift_retain(param_5);
  _swift_retain(param_3);
  FUN_1001e1cd4(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar3 = "";
  _swift_allocObject(&DAT_100eb05a8,0x30,7);
  *(undefined8 *)(pcVar3 + 0x10) = param_2;
  *(undefined8 *)(pcVar3 + 0x18) = param_3;
  pcVar3[0x20] = param_4;
  *(undefined8 *)(pcVar3 + 0x28) = param_5;
  *param_1 = SVar4;
  param_1[1].str = (char *)0x0;
  param_1[1].bridgeObject = (void *)0x0;
  param_1[2].str = (char *)FUN_100016dec;
  param_1[2].bridgeObject = puVar2;
  param_1[3].str = (char *)0x3fe0000000000000;
  *(String *)&param_1[3].bridgeObject = SVar5;
  param_1[4].bridgeObject = (void *)0x0;
  param_1[5].str = (char *)0x0;
  param_1[5].bridgeObject = FUN_100016e40;
  param_1[6].str = pcVar3;
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(SVar4.bridgeObject);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease_n(0,2);
  return;
}



/* Address: 0x10001507c | FUN_10001507c */

void FUN_10001507c(undefined8 *param_1,ObservedObject param_2)

{
  Wrapper WVar1;
  Wrapper in_x4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 local_70 [48];
  
  FUN_100064238(0);
  FUN_100003a00(&DAT_100fa6ea8,FUN_100064238,&TargetProtocolConformanceDescriptor_100c2691c);
  WVar1 = SwiftUI::ObservedObject::_get_projectedValue(param_2);
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(in_x4);
  _swift_release(WVar1.unknown);
  _swift_release(in_x4.unknown);
  FUN_1001ec9ec(&local_b0,local_70);
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = CONCAT71(uStack_87,uStack_88);
  param_1[4] = local_90;
  *(undefined8 *)((long)param_1 + 0x31) = uStack_7f;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_80,uStack_87);
  return;
}



/* Address: 0x100015164 | FUN_100015164 */

void FUN_100015164(String *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  char *pcVar3;
  long extraout_x8;
  String SVar4;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1001e1fd4(LVar1.unknown);
  SVar4 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar2 = &DAT_100eb0530;
  _swift_allocObject(&DAT_100eb0530,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _swift_retain(param_5);
  _swift_retain(param_3);
  FUN_1001e22d4(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar3 = "";
  _swift_allocObject(&DAT_100eb0558,0x30,7);
  *(undefined8 *)(pcVar3 + 0x10) = param_2;
  *(undefined8 *)(pcVar3 + 0x18) = param_3;
  pcVar3[0x20] = param_4;
  *(undefined8 *)(pcVar3 + 0x28) = param_5;
  *param_1 = SVar4;
  param_1[1].str = (char *)0x0;
  param_1[1].bridgeObject = (void *)0x0;
  param_1[2].str = (char *)FUN_100016d8c;
  param_1[2].bridgeObject = puVar2;
  param_1[3].str = (char *)0x3fe0000000000000;
  *(String *)&param_1[3].bridgeObject = SVar5;
  param_1[4].bridgeObject = (void *)0x0;
  param_1[5].str = (char *)0x0;
  param_1[5].bridgeObject = FUN_100016db4;
  param_1[6].str = pcVar3;
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(SVar4.bridgeObject);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease_n(0,2);
  return;
}



/* Address: 0x1000152c4 | FUN_1000152c4 */

void FUN_1000152c4(String *param_1,undefined8 param_2,undefined8 param_3,char param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  char *pcVar3;
  long extraout_x8;
  String SVar4;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1001e2454(LVar1.unknown);
  SVar4 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar2 = &DAT_100eb04e0;
  _swift_allocObject(&DAT_100eb04e0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar2[0x20] = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  _swift_retain(param_5);
  _swift_retain(param_3);
  FUN_1001e2154(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar3 = "";
  _swift_allocObject(&DAT_100eb0508,0x30,7);
  *(undefined8 *)(pcVar3 + 0x10) = param_2;
  *(undefined8 *)(pcVar3 + 0x18) = param_3;
  pcVar3[0x20] = param_4;
  *(undefined8 *)(pcVar3 + 0x28) = param_5;
  *param_1 = SVar4;
  param_1[1].str = (char *)0x0;
  param_1[1].bridgeObject = (void *)0x0;
  param_1[2].str = (char *)FUN_100016ca4;
  param_1[2].bridgeObject = puVar2;
  param_1[3].str = (char *)0x3fe0000000000000;
  *(String *)&param_1[3].bridgeObject = SVar5;
  param_1[4].bridgeObject = (void *)0x0;
  param_1[5].str = (char *)0x0;
  param_1[5].bridgeObject = FUN_100016cb4;
  param_1[6].str = pcVar3;
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_bridgeObjectRetain(SVar4.bridgeObject);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease_n(0,2);
  return;
}



/* Address: 0x100015424 | FUN_100015424 */

void FUN_100015424(undefined8 *param_1,VerticalAlignment param_2,undefined8 param_3,
                  undefined8 param_4,undefined8 param_5)

{
  VerticalAlignment VVar1;
  undefined *puVar2;
  
  VVar1 = SwiftUI::VerticalAlignment::get_center(param_2);
  *param_1 = VVar1.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  puVar2 = &DAT_100fa6ef0;
  FUN_1000037f0(&DAT_100fa6ef0,&DAT_100c23a28);
  FUN_1000154a0((long)param_1 + (long)*(int *)(puVar2 + 0x2c),param_2.unknown,param_3,param_4,
                param_5);
  return;
}



/* Address: 0x1000154a0 | FUN_1000154a0 */

void FUN_1000154a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ObservedObject param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  Wrapper WVar10;
  Wrapper dynamicMember;
  undefined *puVar11;
  LocalizedStringKey LVar12;
  Text TVar13;
  undefined8 *puVar14;
  uint uVar16;
  undefined *puVar17;
  ulong uVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  long extraout_x12;
  Set SVar20;
  undefined8 uVar21;
  String stringLiteral;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined *local_110 [2];
  long local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  MainActor *local_e0;
  long local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  MainActor *pMStack_c0;
  undefined8 local_b8;
  undefined *local_a0;
  undefined8 uStack_98;
  byte local_90;
  undefined8 local_88;
  undefined8 local_80;
  MainActor *pMStack_78;
  undefined8 local_70;
  undefined1 *puVar15;
  
  uStack_118._4_4_ = param_8;
  local_110[0] = (undefined *)param_9;
  local_d0 = param_1;
  local_e8 = (undefined *)SwiftUI::BorderlessButtonStyle::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  puVar15 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa6ea0;
  FUN_1000037f0(&DAT_100fa6ea0,&DAT_100c239c0);
  local_100 = *(long *)(puVar4 + -8);
  local_f8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  SVar20.unknown = puVar15 + -extraout_x8_00;
  puVar4 = &DAT_100fa6ed8;
  FUN_1000037f0(&DAT_100fa6ed8,&DAT_100c239f8);
  local_110[1] = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar19 = (long)SVar20.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar14 = puVar7;
  local_e0 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x35,UVar8.unknown,puVar14);
  }
  FUN_100064238(0);
  FUN_100003a00(&DAT_100fa6ea8,FUN_100064238,&TargetProtocolConformanceDescriptor_100c2691c);
  WVar10 = SwiftUI::ObservedObject::_get_projectedValue(param_6);
  dynamicMember.unknown = &DAT_100c23a30;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar10.unknown);
  _swift_release(dynamicMember.unknown);
  local_90 = (byte)uStack_118._4_4_ & 1;
  local_88 = local_110[0];
  local_c8 = local_80;
  pMStack_c0 = pMStack_78;
  local_b8 = local_70;
  local_a0 = param_6.unknown;
  uStack_98 = param_7;
  _swift_retain(local_80);
  pMVar6 = pMStack_78;
  _swift_retain();
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar6);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x3c,UVar8.unknown,puVar7);
  }
  _swift_release(pMVar5);
  FUN_1000038c0(0);
  FUN_1000037f0(&DAT_100fa6eb0,&DAT_100c239f0);
  puVar4 = &DAT_100fa6eb8;
  FUN_100003a00(&DAT_100fa6eb8,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c33368);
  puVar11 = puVar4;
  FUN_100016cdc();
  *(undefined **)(lVar19 + -0x10) = puVar4;
  *(undefined **)(lVar19 + -8) = puVar11;
  SwiftUI::Picker::_init(SVar20.unknown);
  _swift_release(pMStack_78);
  _swift_release(local_80);
  SwiftUI::BorderlessButtonStyle::init();
  puVar4 = &DAT_100fa6ec8;
  FUN_100016eac(&DAT_100fa6ec8,&DAT_100fa6ea0,&DAT_100c239c0,
                PTR_SwiftUI__SwiftUI__Picker<undefined,undefined,undefined>_>SwiftUI__View_100eab8e0
               );
  puVar11 = &DAT_100fa6ed0;
  FUN_100003a00(&DAT_100fa6ed0,PTR_typeMetadataAccessor_100eaae40,
                PTR_SwiftUI__SwiftUI__BorderlessButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaae30
               );
  puVar2 = local_e8;
  puVar1 = local_f8;
  puVar17 = local_e8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar19,puVar15,local_f8,local_e8,puVar4,puVar11);
  uVar16 = (uint)puVar17;
  (**(code **)(local_f0 + 8))(puVar15,puVar2);
  (**(code **)(local_100 + 8))(SVar20.unknown,puVar1);
  SVar20 = SwiftUI::Edge::Set::get_vertical(SVar20);
  uVar21 = 0x4000000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar20.unknown);
  puVar15 = (undefined1 *)(lVar19 + *(int *)(local_110[1] + 0x24));
  *puVar15 = (char)SVar20.unknown;
  *(undefined8 *)(puVar15 + 8) = uVar21;
  *(undefined8 *)(puVar15 + 0x10) = param_3;
  *(undefined8 *)(puVar15 + 0x18) = param_4;
  *(undefined8 *)(puVar15 + 0x20) = param_5;
  puVar15[0x28] = 0;
  stringLiteral.bridgeObject = &DAT_e700000000000000;
  stringLiteral.str = (char *)0x392e2e2e31202b;
  puVar15 = &DAT_e700000000000000;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)(lVar19 + -8) = 0x100;
  *(undefined8 *)(lVar19 + -0x10) = 0;
  uVar18 = (ulong)(uVar16 & 1);
  TVar13 = SwiftUI::Text::_init(LVar12);
  lVar3 = local_d8;
  FUN_100011090(lVar19,local_d8,&DAT_100fa6ed8,&DAT_100c239f8);
  puVar7 = local_d0;
  *local_d0 = 0;
  *(undefined1 *)(local_d0 + 1) = 1;
  puVar11 = &DAT_100fa6ef8;
  FUN_1000037f0(&DAT_100fa6ef8,&DAT_100c23a58);
  FUN_100011090(lVar3,(long)puVar7 + (long)*(int *)(puVar11 + 0x30),&DAT_100fa6ed8,&DAT_100c239f8);
  puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(puVar11 + 0x40));
  FUN_100016d5c(TVar13.unknown,puVar15,uVar18);
  _swift_bridgeObjectRetain(puVar4);
  FUN_100005808(lVar19,&DAT_100fa6ed8,&DAT_100c239f8);
  *puVar7 = TVar13.unknown;
  puVar7[1] = puVar15;
  *(char *)(puVar7 + 2) = (char)uVar18;
  puVar7[3] = puVar4;
  FUN_100016d74(TVar13.unknown,puVar15,uVar18);
  _swift_bridgeObjectRelease(puVar4);
  FUN_100005808(lVar3,&DAT_100fa6ed8,&DAT_100c239f8);
  _swift_release(local_e0);
  return;
}



/* Address: 0x1000159d4 | FUN_1000159d4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100015b1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000159d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
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
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x38,UVar3.unknown,puVar2);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x160);
  puVar5 = &DAT_100c23a08;
  _swift_getKeyPath(&DAT_100c23a08);
  _swift_bridgeObjectRetain(uVar9);
  puVar6 = &DAT_100fa6ee0;
  FUN_1000037f0(&DAT_100fa6ee0,&DAT_100c23a20);
  puVar7 = &DAT_100fa6ee8;
  FUN_100016eac(&DAT_100fa6ee8,&DAT_100fa6ee0,&DAT_100c23a20,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar8 = &DAT_100fa6eb8;
  FUN_100003a00(&DAT_100fa6eb8,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c33368);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar8,puVar5,FUN_100015b40,0,puVar6,
             PTR___type_metadata_for_SwiftUI_Text_100eab358,puVar7,puVar8);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100015b40 | FUN_100015b40 */

void FUN_100015b40(undefined8 param_1)

{
  FUN_100016030(param_1,0x39);
  return;
}



/* Address: 0x100015b48 | FUN_100015b48 */

void FUN_100015b48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ObservedObject param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  Wrapper WVar4;
  Wrapper dynamicMember;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar11;
  Set SVar12;
  undefined8 uVar13;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  undefined8 local_e8;
  MainActor *pMStack_e0;
  undefined8 local_d8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  MainActor *pMStack_98;
  undefined8 local_90;
  
  local_f0 = param_1;
  local_f8 = (undefined *)SwiftUI::BorderlessButtonStyle::typeMetadataAccessor();
  local_100 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  puVar11 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa6ea0;
  FUN_1000037f0(&DAT_100fa6ea0,&DAT_100c239c0);
  local_108 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  SVar12.unknown = puVar11 + -extraout_x8_00;
  FUN_100064238(0);
  FUN_100003a00(&DAT_100fa6ea8,FUN_100064238,&TargetProtocolConformanceDescriptor_100c2691c);
  WVar4 = SwiftUI::ObservedObject::_get_projectedValue(param_6);
  dynamicMember.unknown = &DAT_100c239c8;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar4.unknown);
  _swift_release(dynamicMember.unknown);
  local_e8 = local_a0;
  pMStack_e0 = pMStack_98;
  local_d8 = local_90;
  local_c0 = param_6.unknown;
  uStack_b8 = param_7;
  local_b0 = param_8;
  local_a8 = param_9;
  this = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  _swift_retain(local_a0);
  pMVar5 = pMStack_98;
  _swift_retain();
  pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x4d,UVar7.unknown,puVar6);
  }
  _swift_release(pMVar5);
  FUN_1000038c0(0);
  FUN_1000037f0(&DAT_100fa6eb0,&DAT_100c239f0);
  puVar9 = &DAT_100fa6eb8;
  FUN_100003a00(&DAT_100fa6eb8,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c33368);
  puVar10 = puVar9;
  FUN_100016cdc();
  *(undefined **)(SVar12.unknown + -0x10) = puVar9;
  *(undefined **)(SVar12.unknown + -8) = puVar10;
  SwiftUI::Picker::_init(SVar12.unknown);
  _swift_release(pMStack_98);
  _swift_release(local_a0);
  SwiftUI::BorderlessButtonStyle::init();
  puVar9 = &DAT_100fa6ec8;
  FUN_100016eac(&DAT_100fa6ec8,&DAT_100fa6ea0,&DAT_100c239c0,
                PTR_SwiftUI__SwiftUI__Picker<undefined,undefined,undefined>_>SwiftUI__View_100eab8e0
               );
  puVar10 = &DAT_100fa6ed0;
  FUN_100003a00(&DAT_100fa6ed0,PTR_typeMetadataAccessor_100eaae40,
                PTR_SwiftUI__SwiftUI__BorderlessButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaae30
               );
  lVar2 = local_f0;
  puVar1 = local_f8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_f0,puVar11,puVar3,local_f8,puVar9,puVar10);
  (**(code **)(local_100 + 8))(puVar11,puVar1);
  (**(code **)(local_108 + 8))(SVar12.unknown,puVar3);
  SVar12 = SwiftUI::Edge::Set::get_vertical(SVar12);
  uVar13 = 0x4000000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar12.unknown);
  puVar3 = &DAT_100fa6ed8;
  FUN_1000037f0(&DAT_100fa6ed8,&DAT_100c239f8);
  puVar11 = (undefined1 *)(lVar2 + *(int *)(puVar3 + 0x24));
  *puVar11 = (char)SVar12.unknown;
  *(undefined8 *)(puVar11 + 8) = uVar13;
  *(undefined8 *)(puVar11 + 0x10) = param_3;
  *(undefined8 *)(puVar11 + 0x18) = param_4;
  *(undefined8 *)(puVar11 + 0x20) = param_5;
  puVar11[0x28] = 0;
  return;
}



/* Address: 0x100015ebc | FUN_100015ebc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100016004 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100015ebc(undefined8 param_1,undefined8 param_2,long param_3)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
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
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x49,UVar3.unknown,puVar2);
  }
  uVar9 = *(undefined8 *)(param_3 + 0x168);
  puVar5 = &DAT_100c23a08;
  _swift_getKeyPath(&DAT_100c23a08);
  _swift_bridgeObjectRetain(uVar9);
  puVar6 = &DAT_100fa6ee0;
  FUN_1000037f0(&DAT_100fa6ee0,&DAT_100c23a20);
  puVar7 = &DAT_100fa6ee8;
  FUN_100016eac(&DAT_100fa6ee8,&DAT_100fa6ee0,&DAT_100c23a20,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar8 = &DAT_100fa6eb8;
  FUN_100003a00(&DAT_100fa6eb8,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c33368);
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar8,puVar5,FUN_100016028,0,puVar6,
             PTR___type_metadata_for_SwiftUI_Text_100eab358,puVar7,puVar8);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100016028 | FUN_100016028 */

void FUN_100016028(undefined8 param_1)

{
  FUN_100016030(param_1,0x4a);
  return;
}



/* Address: 0x100016030 | FUN_100016030 */

void FUN_100016030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  Text TVar5;
  undefined *puVar6;
  undefined1 uVar7;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,param_3,UVar3.unknown,puVar2);
    param_5 = param_3;
  }
  uVar7 = 1;
  FUN_1001e9774();
  FUN_100008378();
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar5 = SwiftUI::Text::_init();
  _swift_release(pMVar1);
  *param_1 = TVar5.unknown;
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = uVar7;
  param_1[3] = param_5;
  return;
}



/* Address: 0x10001612c | FUN_10001612c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001635c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001612c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  void *param_5)

{
  long lVar1;
  LocalizedStringResource LVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  State SVar9;
  undefined *puVar10;
  undefined *puVar11;
  void *pvVar12;
  char *pcVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long extraout_x12;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  String SVar19;
  String SVar20;
  undefined8 auStack_120 [6];
  MainActor *local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  long local_c0;
  undefined8 *local_b8;
  String local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  byte local_90;
  void *local_88;
  byte local_80;
  void *local_78;
  String local_70;
  
  pvVar14 = param_5;
  local_b8 = param_1;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)((long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_d8 = *(long *)(puVar3 + -8);
  local_d0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)LVar2.unknown - extraout_x8_00;
  puVar3 = &DAT_100fa6e60;
  FUN_1000037f0(&DAT_100fa6e60,&DAT_100c23990);
  local_c0 = *(long *)(puVar3 + -8);
  local_e8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar15 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  local_e0 = lVar15;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  pcVar13 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar3);
  local_f0 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    pcVar13 = &DAT_00000001;
    pvVar14 = (void *)0x57;
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x57,UVar6.unknown,puVar5);
  }
  FUN_1001e19d4(LVar2.unknown);
  local_b0 = (extension_Foundation)::Swift::String::init(LVar2);
  pvVar12 = local_b0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar12);
  SVar19.bridgeObject = (void *)0xe300000000000000;
  SVar19.str = (char *)0x2e2e2e;
  SVar20.bridgeObject = pvVar14;
  SVar20.str = pcVar13;
  Swift::String::append(SVar19,SVar20);
  _swift_bridgeObjectRelease(pvVar12);
  puVar3 = &DAT_100eb0490;
  _swift_allocObject(&DAT_100eb0490,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  param_4 = param_4 & 1;
  puVar3[0x20] = param_4;
  *(void **)(puVar3 + 0x28) = param_5;
  puVar8 = puVar3;
  FUN_100008378();
  _swift_retain(param_3);
  _swift_retain(param_5);
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar18,puVar8,FUN_100016c74,puVar3,PTR___type_metadata_for_Swift_String_100eac208,
             puVar8);
  FUN_1001e1b54(LVar2.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar2);
  pvVar12 = local_70.bridgeObject;
  SVar9.unknown = &DAT_100fa6e68;
  local_80 = param_4;
  local_78 = param_5;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_projectedValue(SVar9);
  pcVar13 = local_b0.str;
  pvVar14 = local_b0.bridgeObject;
  uVar17 = local_a0 & 0xff;
  puVar3 = &DAT_100fa6e70;
  local_a0 = param_2;
  uStack_98 = param_3;
  local_90 = param_4;
  local_88 = param_5;
  FUN_1000037f0(&DAT_100fa6e70,&DAT_100c239a0);
  puVar10 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar11 = &DAT_100fa6e80;
  FUN_100016eac(&DAT_100fa6e80,&DAT_100fa6e70,&DAT_100c239a0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  *(undefined **)(lVar15 + -0x18) = puVar8;
  *(undefined **)(lVar15 + -0x10) = puVar11;
  *(undefined **)(lVar15 + -0x28) = puVar3;
  *(undefined **)(lVar15 + -0x20) = puVar10;
  *(undefined **)(lVar15 + -0x30) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar3 = local_d0;
  lVar15 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_confirmationDialog
            (local_e0,&local_70,pcVar13,pvVar14,uVar17,0,FUN_100016c84,&local_b0,local_d0);
  _swift_bridgeObjectRelease(pvVar12);
  _swift_release(pvVar14);
  _swift_release(pcVar13);
  (**(code **)(local_d8 + 8))(lVar18,puVar3);
  lVar1 = local_c0;
  lVar18 = local_c8;
  puVar10 = local_e8;
  pcVar16 = *(code **)(local_c0 + 0x10);
  (*pcVar16)(local_c8,lVar15,local_e8);
  puVar5 = local_b8;
  *local_b8 = 0;
  *(undefined1 *)(local_b8 + 1) = 1;
  puVar3 = &DAT_100fa6e88;
  FUN_1000037f0(&DAT_100fa6e88,&DAT_100c239a8);
  (*pcVar16)((long)puVar5 + (long)*(int *)(puVar3 + 0x30),lVar18,puVar10);
  pcVar16 = *(code **)(lVar1 + 8);
  (*pcVar16)(lVar15,puVar10);
  (*pcVar16)(lVar18,puVar10);
  _swift_release(local_f0);
  return;
}



/* Address: 0x100016534 | FUN_100016534 */

void FUN_100016534(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  State SVar6;
  byte local_69;
  State local_68;
  undefined8 local_60;
  byte local_58;
  undefined8 local_50;
  byte local_41;
  
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
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x5a,UVar4.unknown,puVar3);
  }
  local_58 = param_3 & 1;
  local_50 = param_4;
  _swift_retain(param_4);
  SVar6.unknown = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_wrappedValue(SVar6);
  local_69 = (local_41 ^ 0xff) & 1;
  local_68.unknown._0_1_ = param_3 & 1;
  local_60 = param_4;
  SwiftUI::State::set_wrappedValue(&local_68,&local_69,SVar6.unknown);
  _swift_release(pMVar2);
  _swift_release(param_4);
  return;
}


