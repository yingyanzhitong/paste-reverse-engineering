/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10002b020 | FUN_10002b020 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10002b020(void)

{
  return ZEXT816(0x100f8fcc8);
}



/* Address: 0x10002b040 | FUN_10002b040 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002b040(void)

{
  long lVar1;
  ID self;
  NSString *pNVar2;
  ID IVar3;
  long unaff_x20;
  
  lVar1 = _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::___lazy_storage___titleLabel;
  self = *(ID *)(unaff_x20 +
                _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::
                ___lazy_storage___titleLabel);
  if (self == 0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar2);
    FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
    IVar3 = self;
    FUN_1001ff904();
    FUN_1001ffa24();
    NSTextField::setFont_(self,IVar3);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10002b13c | FUN_10002b13c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002b13c(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  long unaff_x20;
  
  lVar1 = _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::___lazy_storage___backgroundView
  ;
  self = *(ID *)(unaff_x20 +
                _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::
                ___lazy_storage___backgroundView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSVisualEffectView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setMaterial_(self,0xc);
    objc_stub::setState_(self,0);
    objc_stub::setBlendingMode_(self,1);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10002b1d0 | FUN_10002b1d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002b1d0(void)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  long unaff_x20;
  undefined1 auStack_90 [16];
  ID local_80;
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 +
   _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::___lazy_storage___titleLabel) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::___lazy_storage___backgroundView) = 0;
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  puVar2 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  IVar3 = IVar1;
  FUN_10002b13c();
  *(ID *)(puVar2 + 0x20) = IVar3;
  FUN_10002b040();
  *(ID *)(puVar2 + 0x28) = IVar3;
  local_80 = IVar1;
  FUN_1001fa150(puVar2,FUN_10002b7d0,auStack_90);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar1;
}



/* Address: 0x10002b2c4 | FUN_10002b2c4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10002b2c4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *self;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *local_a0 [3];
  undefined8 *local_88;
  undefined **ppuStack_80;
  ID local_78;
  
  puVar1 = param_1;
  _swift_getObjectType();
  self = puVar1;
  FUN_10002b040();
  IVar2 = objc_stub::centerYAnchor((ID)self);
  IVar3 = objc_stub::centerYAnchor((ID)param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_(IVar2,IVar3);
  IVar2 = objc_stub::leadingAnchor
                    (*(ID *)((long)param_1 +
                            _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::
                            ___lazy_storage___titleLabel));
  IVar4 = objc_stub::leadingAnchor((ID)param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x403e000000000000,IVar4);
  IVar2 = IVar4;
  FUN_10002b13c();
  ppuStack_80 = &PTR_PTR_100ec00e8;
  local_a0[0] = param_1;
  local_88 = puVar1;
  local_78 = IVar2;
  FUN_1001f9774();
  uVar10 = *param_1;
  uVar11 = param_1[1];
  uVar12 = param_1[2];
  uVar13 = param_1[3];
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fa7b58,&PTR__OBJC_CLASS___NSVisualEffectView_100f8d708);
  ppuVar6 = local_a0;
  FUN_1001f97b4(uVar10,uVar11,uVar12,uVar13,ppuVar6,uVar5,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a0);
  puVar7 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 6;
  *(undefined8 *)(puVar7 + 0x10) = 3;
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar7 + 0x38) = uVar5;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x20) = IVar3;
  *(undefined8 *)(puVar7 + 0x60) = uVar5;
  *(undefined ***)(puVar7 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x48) = IVar4;
  puVar8 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar7 + 0x88) = puVar8;
  *(undefined ***)(puVar7 + 0x90) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar7 + 0x70) = ppuVar6;
  puVar9 = puVar7;
  FUN_1001f8d60(puVar7);
  _swift_setDeallocating(puVar7);
  uVar5 = *(undefined8 *)(puVar7 + 0x10);
  puVar8 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar7 + 0x20,uVar5,puVar8);
  return puVar9;
}



/* Address: 0x10002b540 | _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::init(ID param_1,SEL param_2)

{
  FUN_10002b550(param_1,param_2,0x48,FUN_10002b1d0);
  return param_1;
}



/* Address: 0x10002b550 | FUN_10002b550 */

char * FUN_10002b550(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

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
    pcVar4 = "Paste/PaneContainerViewController.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PaneContainerViewController.swift",0x27,1,param_3,UVar3.unknown,pMVar1);
  }
  (*param_4)();
  _swift_release(pMVar2);
  return pcVar4;
}



/* Address: 0x10002b5f8 | _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

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
              ("Paste/PaneContainerViewController.swift",0x27,1,0x37,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TitleView",0xf,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10002b680);
  (*pcVar1)();
}



/* Address: 0x10002b680 | FUN_10002b680 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10002b680(void)

{
  return 0;
}



/* Address: 0x10002b6ac | _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5PasteP33_C8067A41E76F827CDFBEE7DC7D00B0189TitleView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x10002b6e4 | FUN_10002b6e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10002b6e4(void)

{
  return ZEXT816(0x100f8fd88);
}



/* Address: 0x10002b704 | FUN_10002b704 */

undefined8 FUN_10002b704(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7b48;
  FUN_1000037f0(&DAT_100fa7b48,&DAT_100c24a08);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10002b754 | FUN_10002b754 */

undefined8 FUN_10002b754(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7b48;
  FUN_1000037f0(&DAT_100fa7b48,&DAT_100c24a08);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10002b79c | FUN_10002b79c */

undefined8 FUN_10002b79c(undefined8 param_1)

{
  FUN_1000884a0();
  return param_1;
}



/* Address: 0x10002b7d0 | FUN_10002b7d0 */

void FUN_10002b7d0(void)

{
  long unaff_x20;
  
  FUN_10002b2c4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10002b7d8 | FUN_10002b7d8 */

void FUN_10002b7d8(void)

{
  long unaff_x20;
  
  FUN_10002a890(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10002b7e0 | thunk_FUN_10002baa4 */

void thunk_FUN_10002baa4(void)

{
  FUN_10002baa4();
  return;
}



/* Address: 0x10002b7e4 | FUN_10002b7e4 */

bool FUN_10002b7e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Address: 0x10002b7f8 | FUN_10002b7f8 */

void FUN_10002b7f8(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  byte *unaff_x20;
  
  HVar1.unknown = (undefined *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10002b83c | FUN_10002b83c */

void FUN_10002b83c(undefined8 param_1,Hasher param_2)

{
  byte *unaff_x20;
  
  Swift::Hasher::_combine((ulong)*unaff_x20,param_2);
  return;
}



/* Address: 0x10002b864 | FUN_10002b864 */

void FUN_10002b864(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10002b870 | FUN_10002b870 */

int FUN_10002b870(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10002b8ec;
        goto LAB_10002b8d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10002b8d0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_10002b8ec:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x10002b900 | FUN_10002b900 */

void FUN_10002b900(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar3 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfa < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfb) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10002b980;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10002b980:
      *param_1 = (char)param_2 + '\x05';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfb >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfb);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x10002b9b0 | FUN_10002b9b0 */

undefined1 FUN_10002b9b0(undefined1 *param_1)

{
  return *param_1;
}



/* Address: 0x10002b9b8 | FUN_10002b9b8 */

void FUN_10002b9b8(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}



/* Address: 0x10002b9c0 | FUN_10002b9c0 */

undefined1  [16] FUN_10002b9c0(void)

{
  return ZEXT816(0x100eb10a8);
}



/* Address: 0x10002b9d0 | thunk_FUN_10002b9d4 */

void thunk_FUN_10002b9d4(void)

{
  FUN_10002b9d4();
  return;
}



/* Address: 0x10002b9d4 | FUN_10002b9d4 */

void FUN_10002b9d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7b68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c24a9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c24a9c,&DAT_100eb10a8);
  DAT_100fa7b68 = pTVar1;
  return;
}



/* Address: 0x10002ba14 | FUN_10002ba14 */

void FUN_10002ba14(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  byte *unaff_x20;
  
  HVar1.unknown = (undefined *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10002ba54 | FUN_10002ba54 */

void FUN_10002ba54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa7b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7b70;
  FUN_100005c24(&DAT_100fa7b70,&DAT_100c24ac8);
  puVar2 = PTR_Combine__Combine__Empty<undefined,undefined>_>Combine__Publisher_100ea9888;
  _swift_getWitnessTable
            (PTR_Combine__Combine__Empty<undefined,undefined>_>Combine__Publisher_100ea9888,puVar1);
  DAT_100fa7b78 = puVar2;
  return;
}



/* Address: 0x10002baa4 | FUN_10002baa4 */

undefined * FUN_10002baa4(void)

{
  undefined *puVar1;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar2;
  long extraout_x8;
  long lVar3;
  
  puVar1 = &DAT_100fa7b70;
  FUN_1000037f0(&DAT_100fa7b70,&DAT_100c24ac8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Combine::Empty::init(true);
  FUN_10002ba54();
  AVar2 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffd0 + -extraout_x8,puVar1);
  return AVar2.unknown;
}



/* Address: 0x10002bb54 | thunk_FUN_10002baa4 */

void thunk_FUN_10002baa4(void)

{
  thunk_FUN_10002baa4();
  return;
}



/* Address: 0x10002bb58 | FUN_10002bb58 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002bb58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  ID IVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  lVar2 = _TtC5Paste14SyncStatusItem::iconView;
  puVar3 = (undefined8 *)0x0;
  FUN_10002c014();
  FUN_10020c794();
  uVar5 = *puVar3;
  uVar1 = puVar3[1];
  _swift_bridgeObjectRetain(uVar1);
  IVar4 = NSImageSymbolConfiguration::configurationWithScale_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,3);
  FUN_10020dce0(uVar5,uVar1,IVar4);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  FUN_10002bff4();
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  uVar5 = *(undefined8 *)(IVar4 + _TtC5Paste14SyncStatusItem::iconView);
  local_90 = IVar4;
  FUN_1001fa09c(uVar5,FUN_10002c058,auStack_a0);
  _swift_bridgeObjectRelease(uVar5);
  return IVar4;
}



/* Address: 0x10002bc88 | FUN_10002bc88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10002bc88(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_78 [3];
  undefined8 *local_60;
  undefined **ppuStack_58;
  
  puVar1 = param_1;
  FUN_10002bff4();
  ppuStack_58 = &PTR_PTR_100ec00e8;
  local_78[0] = param_1;
  local_60 = puVar1;
  FUN_1001f9774();
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar2 = 0;
  FUN_10002c014(0);
  ppuVar3 = local_78;
  FUN_1001f97b4(uVar7,uVar8,uVar9,uVar10,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_78);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar2 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar2,puVar5);
  return puVar6;
}



/* Address: 0x10002bdc0 | _TtC5Paste14SyncStatusItem::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC5Paste14SyncStatusItem::initWithFrame_
          (_TtC5Paste14SyncStatusItem *this,ID param_1,SEL param_2,CGRect param_3)

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
    pcVar4 = "Paste/SyncStatusItem.swift";
    _swift_task_reportUnexpectedExecutor("Paste/SyncStatusItem.swift",0x1a,1,8,UVar3.unknown,pMVar1)
    ;
  }
  FUN_10002bb58();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10002be88 | _TtC5Paste14SyncStatusItem::initWithCoder: */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste14SyncStatusItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined8 *puVar7;
  ID IVar8;
  undefined8 uVar9;
  String SVar10;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SyncStatusItem.swift",0x1a,1,0x11,UVar5.unknown,pMVar4);
  }
  lVar2 = iconView;
  puVar7 = (undefined8 *)0x0;
  FUN_10002c014();
  FUN_10020c794();
  uVar9 = *puVar7;
  uVar1 = puVar7[1];
  _swift_bridgeObjectRetain(uVar1);
  IVar8 = NSImageSymbolConfiguration::configurationWithScale_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,3);
  FUN_10020dce0(uVar9,uVar1,IVar8);
  *(undefined8 *)(param_1 + lVar2) = uVar9;
  SVar10.bridgeObject = (void *)0x2;
  SVar10.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar10,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e330);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10002bfa4);
  (*pcVar3)();
}



/* Address: 0x10002bfa4 | FUN_10002bfa4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10002bfa4(void)

{
  return 0;
}



/* Address: 0x10002bfb4 | FUN_10002bfb4 */

void FUN_10002bfb4(void)

{
  FUN_10002bff4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10002bfe4 | _TtC5Paste14SyncStatusItem::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste14SyncStatusItem::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x10002bff4 | FUN_10002bff4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10002bff4(void)

{
  return ZEXT816(0x100f8fe70);
}



/* Address: 0x10002c014 | FUN_10002c014 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10002c014(void)

{
  undefined *puVar1;
  
  if (DAT_100fa8850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSImageView;
  _swift_getObjCClassMetadata();
  DAT_100fa8850 = puVar1;
  return;
}



/* Address: 0x10002c058 | FUN_10002c058 */

void FUN_10002c058(void)

{
  long unaff_x20;
  
  FUN_10002bc88(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10002c060 | FUN_10002c060 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10002c060(void)

{
  long lVar1;
  undefined *self;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = _TtC5Paste15NotificationBar::___lazy_storage___stackView;
  self = *(undefined **)(unaff_x20 + _TtC5Paste15NotificationBar::___lazy_storage___stackView);
  if (self == (undefined *)0x0) {
    FUN_10002ccec();
    self = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_allocObject();
    *(undefined8 *)(self + 0x18) = 5;
    *(undefined8 *)(self + 0x10) = 2;
    uVar2 = *(undefined8 *)(unaff_x20 + _TtC5Paste15NotificationBar::syncItem);
    *(undefined8 *)(self + 0x20) =
         *(undefined8 *)(unaff_x20 + _TtC5Paste15NotificationBar::pauseItem);
    *(undefined8 *)(self + 0x28) = uVar2;
    FUN_1000f66dc();
    objc_stub::setOrientation_((ID)self,0);
    objc_stub::setSpacing_((ID)self,0x4020000000000000);
    *(undefined **)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10002c150 | FUN_10002c150 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10002c150(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  SymbolEffectOptions SVar3;
  ID IVar4;
  SymbolEffectOptions SVar5;
  SymbolEffectOptions options;
  __int64 _Var6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_90 [16];
  ID local_80;
  
  _swift_getObjectType();
  SVar3 = Symbols::SymbolEffectOptions::typeMetadataAccessor();
  lVar8 = *(long *)(SVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar2 = _TtC5Paste15NotificationBar::pauseItem;
  options.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  IVar4 = 0;
  FUN_1000395c0();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC5Paste15NotificationBar::syncItem;
  IVar4 = 0;
  FUN_10002bff4();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15NotificationBar::___lazy_storage___stackView) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar7 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var6 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar7 = PTR___swiftEmptySetSingleton_100eae0e8, _Var6 != 0)) {
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste15NotificationBar::cancellables) = puVar7;
  *(undefined **)(unaff_x20 + _TtC5Paste15NotificationBar::notificationItems) = puVar1;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15NotificationBar::viewModel) = param_1;
  _swift_retain(param_1);
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",0,0,0,0);
  FUN_100208674(0);
  SVar5.unknown = (undefined *)0x0;
  FUN_100208674();
  Symbols::SymbolEffectOptions::get_default(SVar5);
  (extension_AppKit)::__C::NSImageView::removeAllSymbolEffects(options,true);
  (**(code **)(lVar8 + 8))(options.unknown,SVar3.unknown);
  FUN_10002c060();
  local_80 = IVar4;
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(options.unknown);
  FUN_10002c35c();
  _swift_release(param_1);
  return IVar4;
}



/* Address: 0x10002c35c | FUN_10002c35c */

void FUN_10002c35c(void)

{
  undefined *puVar1;
  Published PVar2;
  undefined *puVar3;
  AnyCancellable *this;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100fa7c08;
  FUN_1000037f0(&DAT_100fa7c08,&DAT_100c24b00);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(*(long *)(unaff_x20 + _TtC5Paste15NotificationBar::viewModel) +
                     _TtC5Paste24NotificationBarViewModel::_notifications,auStack_58,0x21,0);
  PVar2.unknown = &DAT_100fa7c10;
  FUN_1000037f0(&DAT_100fa7c10,&DAT_100c28360);
  Combine::Published::_get_projectedValue(PVar2);
  _swift_endAccess(auStack_58);
  puVar3 = &DAT_100eb1100;
  _swift_allocObject(&DAT_100eb1100,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  FUN_10002cc50();
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  lVar4 = _TtC5Paste15NotificationBar::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC5Paste15NotificationBar::cancellables,auStack_58,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar4));
  _swift_endAccess(auStack_58);
  _swift_release(this);
  return;
}



/* Address: 0x10002c4b4 | _TtC5Paste15NotificationBar::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste15NotificationBar::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/NotificationBar.swift",0x1b,1,0x1e,UVar4.unknown,puVar3);
  }
  FUN_10002cd30();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10002c57c | _TtC5Paste15NotificationBar::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste15NotificationBar::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationBar.swift",0x1b,1,7,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.NotificationBar",0x15,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10002c624);
  (*pcVar2)();
}



/* Address: 0x10002c624 | _TtC5Paste15NotificationBar::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste15NotificationBar::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + notificationItems));
  return;
}



/* Address: 0x10002c69c | FUN_10002c69c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10002c69c(void)

{
  return ZEXT816(0x100f8ff28);
}



/* Address: 0x10002c6bc | FUN_10002c6bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10002c6bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  
  uVar7 = param_1;
  _swift_getObjectType();
  uVar1 = uVar7;
  FUN_10002c060();
  ppuStack_40 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_60[0] = param_1;
  local_48 = uVar7;
  local_38 = uVar1;
  FUN_10002ccec(0);
  puVar3 = local_60;
  FUN_1001f97b4(0x4024000000000000,0,0x4024000000000000,0,puVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_60);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar4 + 0x20) = puVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar7 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar7,puVar5);
  return puVar6;
}



/* Address: 0x10002c7ec | FUN_10002c7ec */

void FUN_10002c7ec(void)

{
  long unaff_x20;
  
  FUN_10002c6bc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10002c7f4 | FUN_10002c7f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_10002c7f4(long *param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  MainActor **ppMVar4;
  byte bVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  SymbolEffectOptions SVar10;
  SymbolEffectOptions options;
  NSString *pNVar11;
  RotateSymbolEffect RVar12;
  SymbolEffectOptions SVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ID IVar14;
  long lVar15;
  char *pcVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  MainActor *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined *local_78;
  long local_70;
  long local_68;
  
  ppMVar4 = &local_a0;
  lVar17 = *param_1;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationBar.swift",0x1b,1,0x2e,UVar8.unknown,puVar7);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    local_68 = _TtC5Paste15NotificationBar::pauseItem;
    local_a0 = pMVar6;
    FUN_100208674(0);
    lVar15 = _TtC5Paste15NotificationBar::syncItem;
    FUN_100208674(0);
    local_70 = lVar15;
    SVar10 = Symbols::SymbolEffectOptions::typeMetadataAccessor();
    lVar15 = *(long *)(SVar10.unknown + -8);
    SVar13 = SVar10;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    options.unknown = (undefined *)((long)&local_a0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0));
    Symbols::SymbolEffectOptions::get_default(SVar13);
    (extension_AppKit)::__C::NSImageView::removeAllSymbolEffects(options,true);
    local_88 = *(code **)(lVar15 + 8);
    local_78 = SVar10.unknown;
    (*local_88)(options.unknown,SVar10.unknown);
    lVar15 = *(long *)(lVar17 + 0x10);
    if (lVar15 != 0) {
      pcVar16 = (char *)(lVar17 + 0x30);
      do {
        options.unknown = *(undefined **)(pcVar16 + -0x10);
        uVar1 = *(undefined8 *)(pcVar16 + -8);
        cVar2 = *pcVar16;
        if (cVar2 == '\x01') {
          IVar14 = *(ID *)(param_2 + local_70);
          _swift_bridgeObjectRetain(uVar1);
          pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setToolTip_(IVar14,pNVar11);
          FUN_100208674(1);
          bVar5 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
          if ((bVar5 & 1) == 0) {
            RVar12.unknown = (undefined *)Symbols::PulseSymbolEffect::typeMetadataAccessor();
            lVar17 = *(long *)(RVar12.unknown + -8);
            local_90 = (undefined1 *)ppMVar4;
            (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
            puVar18 = (undefined1 *)((long)ppMVar4 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
            SVar13.unknown = (undefined *)Symbols::PulseSymbolEffect::init();
            local_98 = puVar18;
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            lVar19 = (long)puVar18 - (extraout_x12_01 + 0xfU & 0xfffffffffffffff0);
            Symbols::SymbolEffectOptions::get_repeating(SVar13);
            SVar13.unknown = &DAT_100fa7c20;
            FUN_100003a00(&DAT_100fa7c20,PTR_typeMetadataAccessor_100eabb98,
                          PTR_Symbols__Symbols__PulseSymbolEffect_>Symbols__SymbolEffect_100eabb88);
          }
          else {
            RVar12 = Symbols::RotateSymbolEffect::typeMetadataAccessor();
            lVar17 = *(long *)(RVar12.unknown + -8);
            local_90 = (undefined1 *)ppMVar4;
            (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
            puVar18 = (undefined1 *)((long)ppMVar4 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            SVar13.unknown = (undefined *)Symbols::RotateSymbolEffect::init();
            local_98 = puVar18;
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            lVar19 = (long)puVar18 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
            SVar13 = Symbols::SymbolEffectOptions::get_repeating(SVar13);
            FUN_10002cca8();
          }
          (extension_AppKit)::__C::NSImageView::_addSymbolEffect
                    (puVar18,lVar19,1,RVar12.unknown,SVar13.unknown);
          FUN_10002cca0(options.unknown,uVar1,1);
          (*local_88)(lVar19,local_78);
          (**(code **)(lVar17 + 8))(puVar18,RVar12.unknown);
          ppMVar4 = (MainActor **)local_90;
          options.unknown = puVar18;
        }
        else {
          IVar14 = *(ID *)(param_2 + local_68);
          _swift_bridgeObjectRetain(uVar1);
          pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setToolTip_(IVar14,pNVar11);
          FUN_100208674(1);
          FUN_10002cca0(options.unknown,uVar1,cVar2);
        }
        pcVar16 = pcVar16 + 0x18;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    FUN_10002c060();
    objc_stub::layoutSubtreeIfNeeded((ID)options.unknown);
    _swift_release(local_a0);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar6);
  return pMVar6;
}



/* Address: 0x10002cc24 | FUN_10002cc24 */

void FUN_10002cc24(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10002cc48 | FUN_10002cc48 */

void FUN_10002cc48(void)

{
  FUN_10002c7f4();
  return;
}



/* Address: 0x10002cc50 | FUN_10002cc50 */

void FUN_10002cc50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa7c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7c08;
  FUN_100005c24(&DAT_100fa7c08,&DAT_100c24b00);
  puVar2 = PTR__Combine__Publisher_>Combine__Publisher_100ea98d0;
  _swift_getWitnessTable(PTR__Combine__Publisher_>Combine__Publisher_100ea98d0,puVar1);
  DAT_100fa7c18 = puVar2;
  return;
}



/* Address: 0x10002cca0 | FUN_10002cca0 */

void FUN_10002cca0(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x10002cca8 | FUN_10002cca8 */

void FUN_10002cca8(void)

{
  RotateSymbolEffect RVar1;
  undefined *puVar2;
  
  if (DAT_100fa7c28 != (undefined *)0x0) {
    return;
  }
  RVar1 = Symbols::RotateSymbolEffect::typeMetadataAccessor();
  puVar2 = PTR_Symbols__Symbols__RotateSymbolEffect_>Symbols__SymbolEffect_100eabba0;
  _swift_getWitnessTable
            (PTR_Symbols__Symbols__RotateSymbolEffect_>Symbols__SymbolEffect_100eabba0,RVar1.unknown
            );
  DAT_100fa7c28 = puVar2;
  return;
}



/* Address: 0x10002ccec | FUN_10002ccec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10002ccec(void)

{
  undefined *puVar1;
  
  if (DAT_100fa6c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSStackView;
  _swift_getObjCClassMetadata();
  DAT_100fa6c68 = puVar1;
  return;
}



/* Address: 0x10002cd30 | FUN_10002cd30 */

void FUN_10002cd30(void)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ID IVar4;
  __int64 _Var5;
  undefined *puVar6;
  long unaff_x20;
  String SVar7;
  
  lVar2 = _TtC5Paste15NotificationBar::pauseItem;
  IVar4 = 0;
  FUN_1000395c0();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC5Paste15NotificationBar::syncItem;
  IVar4 = 0;
  FUN_10002bff4();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15NotificationBar::___lazy_storage___stackView) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var5 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar6 = PTR___swiftEmptySetSingleton_100eae0e8, _Var5 != 0)) {
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste15NotificationBar::cancellables) = puVar6;
  *(undefined **)(unaff_x20 + _TtC5Paste15NotificationBar::notificationItems) = puVar1;
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e350);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10002ce28);
  (*pcVar3)();
}



/* Address: 0x10002ce28 | FUN_10002ce28 */

int FUN_10002ce28(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10002cea4;
        goto LAB_10002ce88;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10002ce88:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10002cea4:
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10002cec8 | FUN_10002cec8 */

void FUN_10002cec8(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar3 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10002cf48;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10002cf48:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 8) + 1;
    *param_1 = (char)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x10002cf78 | FUN_10002cf78 */

undefined1  [16] FUN_10002cf78(void)

{
  return ZEXT816(0x100eb1180);
}



/* Address: 0x10002cf88 | FUN_10002cf88 */

void FUN_10002cf88(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10002cfb0 | FUN_10002cfb0 */

undefined1 * FUN_10002cfb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x18] = param_2[0x18];
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar1);
  return param_1;
}


