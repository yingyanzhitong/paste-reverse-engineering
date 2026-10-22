/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003f29d0 | FUN_1003f29d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f29d0(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  code *pcVar5;
  
  uVar2 = param_1;
  _swift_endAccess();
  puVar1 = PTR__swift_isaMask_100eae3b0;
  if ((param_2 & 1) == 0) {
    puVar4 = *(ulong **)
              ((long)*(ulong **)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionView);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(param_1 + 0x18)) +
                       0xa8);
    (*pcVar5)();
    if (((uVar2 & 1) == 0) ||
       ((**(code **)((*(ulong *)puVar1 & **(ulong **)(param_1 + 0x18)) + 0xc0))(), (uVar2 & 1) == 0)
       ) {
      (*pcVar5)();
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)
                 (*(long *)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionColor);
      }
    }
    else {
      uVar3 = *(undefined8 *)
               (*(long *)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionColor);
      FUN_100218b08(uVar3);
    }
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x60))(uVar3);
  }
  return;
}



/* Address: 0x1003f2acc | FUN_1003f2acc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f2acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  ID IVar5;
  ID self;
  ulong *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_f0 [16];
  ID local_e0;
  
  lVar2 = _TtC11PasteCoreUI8BaseCell::selectionColor;
  IVar5 = objc_stub::controlAccentColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar2) = IVar5;
  self = 0;
  FUN_100236364();
  IVar5 = self;
  _objc_allocWithZone();
  puVar6 = (ulong *)objc_stub::init(IVar5);
  puVar7 = PTR__swift_isaMask_100eae3b0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x60))(0);
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  lVar2 = _TtC11PasteCoreUI8BaseCell::selectionView;
  bVar3 = (bVar4 & 1) == 0;
  uVar9 = 0x4034000000000000;
  puVar1 = (undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0;
  if (bVar3) {
    uVar9 = 0x402c000000000000;
    puVar1 = (undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  }
  uVar8 = *puVar1;
  uVar10 = 0x4030000000000000;
  if (bVar3) {
    uVar10 = 0x4024000000000000;
  }
  objc_stub::setCornerRadius_curve_((ID)puVar6,uVar9,uVar8);
  *(ulong **)(unaff_x20 + lVar2) = puVar6;
  _objc_allocWithZone();
  puVar6 = (ulong *)objc_stub::init(self);
  IVar5 = objc_stub::textBackgroundColor((ID)&_OBJC_CLASS___NSColor);
  (**(code **)((*(ulong *)puVar7 & *puVar6) + 0x60))(IVar5);
  lVar2 = _TtC11PasteCoreUI8BaseCell::contentView;
  objc_stub::setCornerRadius_curve_((ID)puVar6,uVar10,uVar8);
  *(ulong **)(unaff_x20 + lVar2) = puVar6;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isSelected) = 0;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isDimmed) = 0;
  FUN_1003f2d68();
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar7 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 5;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  *(undefined8 *)(puVar7 + 0x20) =
       *(undefined8 *)(IVar5 + _TtC11PasteCoreUI8BaseCell::selectionView);
  *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(IVar5 + _TtC11PasteCoreUI8BaseCell::contentView);
  local_e0 = IVar5;
  FUN_1001fa150(puVar7,FUN_1003f2f04,auStack_f0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar7);
  _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  FUN_1003f26c4();
  return IVar5;
}



/* Address: 0x1003f2d68 | FUN_1003f2d68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003f2d68(void)

{
  return ZEXT816(0x100f9b5b0);
}



/* Address: 0x1003f2d88 | FUN_1003f2d88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003f2d88(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *local_68 [3];
  undefined8 *local_50;
  undefined **ppuStack_48;
  
  puVar1 = param_1;
  FUN_1003f2d68();
  ppuStack_48 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_68[0] = param_1;
  local_50 = puVar1;
  FUN_100236364(0);
  ppuVar3 = local_68;
  FUN_1001f97b4(0xc010000000000000,0xc010000000000000,0xc010000000000000,0xc010000000000000,ppuVar3,
                uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_68);
  ppuStack_48 = &PTR_PTR_100ec00e8;
  local_68[0] = param_1;
  local_50 = puVar1;
  FUN_1001f9774();
  ppuVar4 = local_68;
  FUN_1001f97b4(*param_1,param_1[1],param_1[2],param_1[3],ppuVar4,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_68);
  puVar5 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar6 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined ***)(puVar5 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar5 + 0x20) = ppuVar3;
  *(undefined **)(puVar5 + 0x60) = puVar6;
  *(undefined ***)(puVar5 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar5 + 0x48) = ppuVar4;
  puVar7 = puVar5;
  FUN_1001f8d60(puVar5);
  _swift_setDeallocating(puVar5);
  uVar2 = *(undefined8 *)(puVar5 + 0x10);
  puVar6 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar5 + 0x20,uVar2,puVar6);
  return puVar7;
}



/* Address: 0x1003f2f04 | FUN_1003f2f04 */

void FUN_1003f2f04(void)

{
  long unaff_x20;
  
  FUN_1003f2d88(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003f2f0c | _TtC11PasteCoreUI8BaseCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC11PasteCoreUI8BaseCell::initWithFrame_
          (_TtC11PasteCoreUI8BaseCell *this,ID param_1,SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/BaseCell.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/BaseCell.macOS.swift",0x20,1,0x1a,UVar3.unknown,pMVar1);
  }
  FUN_1003f2acc();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003f2fd4 | _TtC11PasteCoreUI8BaseCell::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC11PasteCoreUI8BaseCell::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("PasteCoreUI/BaseCell.macOS.swift",0x20,1,0x26,UVar3.unknown,pMVar1);
  }
  FUN_1003f3254();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x1003f3080 | FUN_1003f3080 */

void FUN_1003f3080(void)

{
  FUN_1003f2d68();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003f30b0 | _TtC11PasteCoreUI8BaseCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC11PasteCoreUI8BaseCell::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003f30f8 | FUN_1003f30f8 */

void FUN_1003f30f8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f3110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xa8))();
  return;
}



/* Address: 0x1003f3114 | FUN_1003f3114 */

void FUN_1003f3114(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f312c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xb0))();
  return;
}



/* Address: 0x1003f3130 | FUN_1003f3130 */

code * FUN_1003f3130(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong *unaff_x20;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x4761);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xb8))();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10026c674;
}



/* Address: 0x1003f31a4 | thunk_FUN_10026c674 */

void thunk_FUN_10026c674(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x1003f31a8 | FUN_1003f31a8 */

void FUN_1003f31a8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xc0))();
  return;
}



/* Address: 0x1003f31c4 | FUN_1003f31c4 */

void FUN_1003f31c4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001003f31dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 200))();
  return;
}



/* Address: 0x1003f31e0 | FUN_1003f31e0 */

code * FUN_1003f31e0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  ulong *unaff_x20;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xe154);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xd0))();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10026c674;
}



/* Address: 0x1003f3254 | FUN_1003f3254 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f3254(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  ID IVar7;
  ID self;
  ulong *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  String SVar12;
  
  lVar3 = _TtC11PasteCoreUI8BaseCell::selectionColor;
  IVar7 = objc_stub::controlAccentColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(unaff_x20 + lVar3) = IVar7;
  self = 0;
  FUN_100236364();
  IVar7 = self;
  _objc_allocWithZone();
  puVar8 = (ulong *)objc_stub::init(IVar7);
  puVar2 = PTR__swift_isaMask_100eae3b0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar8) + 0x60))(0);
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  lVar3 = _TtC11PasteCoreUI8BaseCell::selectionView;
  bVar5 = (bVar6 & 1) == 0;
  uVar10 = 0x4034000000000000;
  puVar1 = (undefined8 *)PTR__kCACornerCurveContinuous_100eaa3a0;
  if (bVar5) {
    uVar10 = 0x402c000000000000;
    puVar1 = (undefined8 *)PTR__kCACornerCurveCircular_100eaa398;
  }
  uVar9 = *puVar1;
  uVar11 = 0x4030000000000000;
  if (bVar5) {
    uVar11 = 0x4024000000000000;
  }
  objc_stub::setCornerRadius_curve_((ID)puVar8,uVar10,uVar9);
  *(ulong **)(unaff_x20 + lVar3) = puVar8;
  _objc_allocWithZone();
  puVar8 = (ulong *)objc_stub::init(self);
  IVar7 = objc_stub::textBackgroundColor((ID)&_OBJC_CLASS___NSColor);
  (**(code **)((*(ulong *)puVar2 & *puVar8) + 0x60))(IVar7);
  lVar3 = _TtC11PasteCoreUI8BaseCell::contentView;
  objc_stub::setCornerRadius_curve_((ID)puVar8,uVar11,uVar9);
  *(ulong **)(unaff_x20 + lVar3) = puVar8;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isSelected) = 0;
  *(undefined1 *)(unaff_x20 + _TtC11PasteCoreUI8BaseCell::isDimmed) = 0;
  SVar12.bridgeObject = (void *)0x2;
  SVar12.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar12,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xda58f0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1003f3414);
  (*pcVar4)();
}



/* Address: 0x1003f3414 | thunk_FUN_1003f29d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1003f29d0(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  code *pcVar5;
  
  uVar2 = param_1;
  _swift_endAccess();
  puVar1 = PTR__swift_isaMask_100eae3b0;
  if ((param_2 & 1) == 0) {
    puVar4 = *(ulong **)
              ((long)*(ulong **)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionView);
    pcVar5 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & **(ulong **)(param_1 + 0x18)) +
                       0xa8);
    (*pcVar5)();
    if (((uVar2 & 1) == 0) ||
       ((**(code **)((*(ulong *)puVar1 & **(ulong **)(param_1 + 0x18)) + 0xc0))(), (uVar2 & 1) == 0)
       ) {
      (*pcVar5)();
      if ((uVar2 & 1) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)
                 (*(long *)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionColor);
      }
    }
    else {
      uVar3 = *(undefined8 *)
               (*(long *)(param_1 + 0x18) + _TtC11PasteCoreUI8BaseCell::selectionColor);
      FUN_100218b08(uVar3);
    }
    (**(code **)((*(ulong *)puVar1 & *puVar4) + 0x60))(uVar3);
  }
  return;
}



/* Address: 0x1003f3418 | thunk_FUN_10026c674 */

void thunk_FUN_10026c674(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x1003f341c | FUN_1003f341c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f341c(ID param_1)

{
  ID self;
  undefined8 *puVar1;
  undefined8 uVar2;
  
  self = objc_stub::FUN_100bff140(param_1);
  if (self != 0) {
    objc_stub::FUN_100c0e5c0(self,1);
  }
  puVar1 = (undefined8 *)0x0;
  FUN_1001fe19c();
  objc_stub::setTextColor_(param_1,*puVar1);
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff904();
  FUN_1001ffa24();
  objc_stub::setFont_(param_1,uVar2);
  objc_stub::setSelectable_(param_1,0);
  return;
}



/* Address: 0x1003f34c4 | FUN_1003f34c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1 * FUN_1003f34c4(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
          ___lazy_storage___backgroundViewConstraints;
  puVar2 = *(undefined1 **)
            ((long)unaff_x20 +
            _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
            ___lazy_storage___backgroundViewConstraints);
  puVar5 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_1003f4108();
    puVar3 = unaff_x20;
    FUN_1001f9774();
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    uVar4 = 0;
    FUN_10000ec2c(0,&DAT_100fc3560,&PTR__OBJC_CLASS___NSVisualEffectView_100f8d708);
    puVar5 = &stack0xffffffffffffff78;
    FUN_1001f97b4(uVar6,uVar7,uVar8,uVar9,puVar5,uVar4,&PTR_PTR_100ec00e8);
    FUN_100004594(&stack0xffffffffffffff78);
    uVar4 = *(undefined8 *)((long)unaff_x20 + lVar1);
    *(undefined1 **)((long)unaff_x20 + lVar1) = puVar5;
    _swift_bridgeObjectRetain(puVar5);
    _swift_bridgeObjectRelease(uVar4);
    puVar2 = (undefined1 *)0x0;
  }
  _swift_bridgeObjectRetain(puVar2);
  return puVar5;
}



/* Address: 0x1003f35bc | FUN_1003f35bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f35bc(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
          ___lazy_storage___iconTopConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
                 ___lazy_storage___iconTopConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::topAnchor
                      (*(ID *)(unaff_x20 +
                              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                              ));
    IVar3 = objc_stub::topAnchor(unaff_x20);
    IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x4020000000000000,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003f3680 | FUN_1003f3680 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f3680(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
          ___lazy_storage___iconLeadingConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
                 ___lazy_storage___iconLeadingConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::leadingAnchor
                      (*(ID *)(unaff_x20 +
                              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                              ));
    IVar3 = objc_stub::leadingAnchor(unaff_x20);
    IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x4020000000000000,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003f3744 | FUN_1003f3744 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f3744(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
          ___lazy_storage___iconWidthConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
                 ___lazy_storage___iconWidthConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::widthAnchor
                      (*(ID *)(unaff_x20 +
                              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                              ));
    IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x4042000000000000);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003f37e8 | FUN_1003f37e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f37e8(void)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
          ___lazy_storage___iconHeightConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
                 ___lazy_storage___iconHeightConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::heightAnchor
                      (*(ID *)(unaff_x20 +
                              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                              ));
    IVar2 = objc_stub::constraintEqualToConstant_(IVar2,0x4042000000000000);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003f388c | FUN_1003f388c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f388c(void)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
          ___lazy_storage___titleTopConstraint;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
                 ___lazy_storage___titleTopConstraint);
  if (IVar2 == 0) {
    IVar2 = objc_stub::topAnchor
                      (*(ID *)(unaff_x20 +
                              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
                              titleLabel));
    IVar3 = objc_stub::bottomAnchor
                      (*(ID *)(unaff_x20 +
                              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                              ));
    IVar2 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x4020000000000000,IVar3);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1003f3958 | FUN_1003f3958 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong * FUN_1003f3958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *self;
  NSString *pNVar4;
  ID IVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *self_00;
  ulong *puVar8;
  long unaff_x20;
  
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView;
  puVar3 = &_OBJC_CLASS___NSImageView;
  _objc_allocWithZone();
  self = (undefined8 *)objc_stub::init((ID)puVar3);
  puVar6 = self;
  FUN_1001fe19c();
  objc_stub::setContentTintColor_((ID)self,*puVar6);
  objc_stub::setImageScaling_((ID)self,2);
  *(undefined8 **)(unaff_x20 + lVar1) = self;
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar4);
  puVar6 = (undefined8 *)objc_stub::setLineBreakMode_(IVar5,0);
  FUN_1001fe15c();
  objc_stub::setTextColor_(IVar5,*puVar6);
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff904();
  FUN_1001ffa18();
  objc_stub::setFont_(IVar5,uVar7);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::FUN_100c11580((ID)&_OBJC_CLASS___NSTextField,pNVar4);
  FUN_1003f341c(IVar5);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  puVar3 = &_OBJC_CLASS___NSVisualEffectView;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar3);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::backgroundView;
  objc_stub::setHidden_(IVar5,(ulong)((bVar2 ^ 0xffffffff) & 1));
  objc_stub::setMaterial_(IVar5,5);
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
   ___lazy_storage___backgroundViewConstraints) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::___lazy_storage___iconTopConstraint
   ) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
   ___lazy_storage___iconLeadingConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
   ___lazy_storage___iconWidthConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
   ___lazy_storage___iconHeightConstraint) = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
   ___lazy_storage___titleTopConstraint) = 0;
  FUN_1003f4108();
  self_00 = (ulong *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithFrame:",
                                         param_1,param_2,param_3,param_4);
  puVar8 = self_00;
  FUN_1001ff0d0();
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self_00) + 0x60))(*puVar8);
  uVar7 = 0x4030000000000000;
  if ((bVar2 & 1) == 0) {
    uVar7 = 0x4024000000000000;
  }
  objc_stub::setCornerRadius_curve_
            ((ID)self_00,uVar7,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  return self_00;
}



/* Address: 0x1003f3c04 | _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::initWithFrame_
          (_TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell *this,ID param_1,SEL param_2
          ,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/Sidecar.BaseCell.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.BaseCell.macOS.swift",0x28,1,0x29,UVar3.unknown,pMVar1);
  }
  FUN_1003f3958();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003f3ccc | FUN_1003f3ccc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f3ccc(ID param_1)

{
  bool bVar1;
  uint uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = (uint)param_1;
  FUN_1003f35bc();
  bVar1 = (uVar2 & 0xff) != 3;
  uVar4 = 0x4024000000000000;
  if (bVar1) {
    uVar4 = 0x4028000000000000;
  }
  uVar5 = 0x4034000000000000;
  if (bVar1) {
    uVar5 = 0x403c000000000000;
  }
  uVar6 = 0x4010000000000000;
  if (bVar1) {
    uVar6 = 0x4020000000000000;
  }
  objc_stub::setConstant_(param_1,uVar4);
  IVar3 = 0;
  FUN_1003f3680();
  objc_stub::setConstant_(IVar3,uVar4);
  IVar3 = 0;
  FUN_1003f3744();
  objc_stub::setConstant_(IVar3,uVar5);
  IVar3 = 0;
  FUN_1003f37e8();
  objc_stub::setConstant_(IVar3,uVar5);
  IVar3 = 0;
  FUN_1003f388c();
  objc_stub::setConstant_(IVar3,uVar6);
  return 0;
}



/* Address: 0x1003f3d9c | FUN_1003f3d9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f3d9c(char param_1)

{
  ID IVar1;
  long unaff_x20;
  ID IVar2;
  undefined8 uVar3;
  
  IVar2 = *(ID *)(unaff_x20 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                 );
  uVar3 = 0x402e000000000000;
  if (param_1 != '\x03') {
    uVar3 = 0x4036000000000000;
  }
  IVar1 = objc_stub::configurationWithPointSize_weight_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar3,
                     *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8);
  objc_stub::FUN_100c0df80(IVar2,IVar1);
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel);
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  if (param_1 == '\x03') {
    FUN_1001ff928();
  }
  else {
    FUN_1001ff904();
  }
  FUN_1001ffa24();
  objc_stub::setFont_(IVar2,uVar3);
  uVar3 = 0;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel);
  if (param_1 == '\x03') {
    FUN_1001ff928();
  }
  else {
    FUN_1001ff904(0);
  }
  FUN_1001ffa18();
  objc_stub::setFont_(IVar2,uVar3);
  return 0;
}



/* Address: 0x1003f3eec | _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::init(ID param_1,SEL param_2)

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
              ("PasteCoreUI/Sidecar.BaseCell.macOS.swift",0x28,1,7,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("PasteCoreUI.SidecarBaseCell",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f3f74);
  (*pcVar1)();
}



/* Address: 0x1003f3f74 | FUN_1003f3f74 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f3f74(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 +
              _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::
              ___lazy_storage___backgroundViewConstraints));
  return 0;
}



/* Address: 0x1003f4020 | FUN_1003f4020 */

void FUN_1003f4020(void)

{
  FUN_1003f4108();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003f4050 | _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::_cxx_destruct
               (ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ___lazy_storage___backgroundViewConstraints))
  ;
  return;
}



/* Address: 0x1003f4108 | FUN_1003f4108 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003f4108(void)

{
  return ZEXT816(0x100f9b6f8);
}



/* Address: 0x1003f4128 | FUN_1003f4128 */

void FUN_1003f4128(undefined8 param_1,undefined8 param_2)

{
  FUN_1003f3ccc(param_2);
  FUN_1003f3d9c(param_2);
  return;
}



/* Address: 0x1003f4158 | FUN_1003f4158 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1003f4158(undefined8 param_1,undefined8 param_2,double param_3,double param_4,class_t *param_5)

{
  undefined8 *puVar1;
  ID *pIVar2;
  double *pdVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  class_t *pcVar8;
  LocalizedStringResource LVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  ID IVar16;
  ulong uVar17;
  ID IVar18;
  long lVar19;
  double extraout_d0;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  String SVar24;
  objc_super local_90;
  
  pcVar8 = param_5;
  _swift_getObjectType();
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1001c1e08(LVar9.unknown);
  SVar24 = (extension_Foundation)::Swift::String::init(LVar9);
  puVar10 = &DAT_100fc32e8;
  FUN_1000037f0(&DAT_100fc32e8,&DAT_100c45b08);
  lVar11 = 0;
  FUN_100202fc8();
  lVar19 = *(long *)(*(long *)(lVar11 + -8) + 0x48);
  uVar15 = (ulong)*(byte *)(*(long *)(lVar11 + -8) + 0x50);
  uVar17 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar10,uVar17 + lVar19 * 3,uVar15 | 7);
  *(undefined8 *)(puVar10 + 0x18) = 6;
  *(undefined8 *)(puVar10 + 0x10) = 3;
  puVar1 = (undefined8 *)(puVar10 + uVar17);
  FUN_10000ec2c(0,&DAT_100fc4360,&PTR__OBJC_CLASS___NSParagraphStyle_100f8da08);
  uVar12 = 4;
  FUN_1002024b8();
  *puVar1 = uVar12;
  puVar13 = puVar1;
  _swift_storeEnumTagMultiPayload(puVar1,lVar11,4);
  FUN_1001fe15c();
  uVar12 = *puVar13;
  *(undefined8 *)((long)puVar1 + lVar19) = uVar12;
  _swift_storeEnumTagMultiPayload((undefined *)((long)puVar1 + lVar19),lVar11,1);
  FUN_10000ec2c(0,&DAT_100fc3e90,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff928();
  FUN_1001ffa18();
  *(undefined8 *)((long)puVar1 + lVar19 * 2) = uVar12;
  _swift_storeEnumTagMultiPayload((undefined *)((long)puVar1 + lVar19 * 2),lVar11,0);
  puVar14 = puVar10;
  FUN_100201eb0(puVar10,SVar24.str,SVar24.bridgeObject);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  _swift_setDeallocating(puVar10);
  _swift_arrayDestroy(puVar1,*(undefined8 *)(puVar10 + 0x10),lVar11);
  _swift_deallocClassInstance(puVar10,0x20,7);
  pIVar2 = (ID *)((long)&param_5->isa +
                 _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::content);
  IVar4 = *pIVar2;
  IVar16 = pIVar2[1];
  IVar5 = pIVar2[2];
  IVar6 = pIVar2[3];
  IVar18 = pIVar2[4];
  *pIVar2 = (ID)puVar14;
  pIVar2[2] = 0;
  pIVar2[1] = 0;
  pIVar2[4] = 0;
  pIVar2[3] = 0;
  IVar7 = pIVar2[5];
  *(undefined1 *)(pIVar2 + 5) = 1;
  FUN_1003f4e54(IVar4,IVar16,IVar5,IVar6,IVar18,(char)IVar7);
  local_90.receiver = (ID)param_5;
  local_90.super_class = pcVar8;
  _objc_msgSendSuper2(&local_90,"invalidateIntrinsicContentSize");
  dVar20 = (double)pIVar2[1];
  dVar21 = (double)pIVar2[2];
  if ((char)pIVar2[5] == '\x01') {
    IVar4 = pIVar2[3];
    IVar5 = pIVar2[4];
    IVar16 = *pIVar2;
    FUN_1003f4ebc(IVar16,dVar20,dVar21,IVar4,IVar5,1);
    dVar23 = 1.7976931348623157e+308;
    objc_stub::FUN_100bfe840(IVar16,3);
    dVar22 = extraout_d0;
    FUN_1001ff668();
    FUN_1003f4e54(IVar16,dVar20,dVar21,IVar4,IVar5,1);
  }
  else {
    dVar22 = 0.0;
    if ((char)pIVar2[5] == -1) {
      dVar23 = 0.0;
      param_3 = 0.0;
      param_4 = 0.0;
    }
    else {
      dVar23 = 0.0;
      param_3 = dVar20;
      param_4 = dVar21;
    }
  }
  pdVar3 = (double *)
           ((long)&param_5->isa +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentRect);
  *pdVar3 = dVar22;
  pdVar3[1] = dVar23;
  pdVar3[2] = param_3;
  pdVar3[3] = param_4;
  pdVar3 = (double *)
           ((long)&param_5->isa +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::
           preferredContentInsets);
  dVar22 = dVar22 - pdVar3[1];
  dVar23 = dVar23 - *pdVar3;
  dVar20 = param_3 + pdVar3[1] + pdVar3[3];
  dVar21 = param_4 + *pdVar3 + pdVar3[2];
  FUN_1001ff668();
  pdVar3 = (double *)
           ((long)&param_5->isa +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::preferredRect);
  *pdVar3 = dVar22;
  pdVar3[1] = dVar23;
  pdVar3[2] = dVar20;
  pdVar3[3] = dVar21;
  return 0;
}



/* Address: 0x1003f44e0 | FUN_1003f44e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003f44e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_f0 [16];
  ID local_e0;
  
  _swift_getObjectType();
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::manageButton;
  IVar2 = 0;
  FUN_1003f6c58();
  _objc_allocWithZone();
  IVar2 = objc_stub::init(IVar2);
  FUN_1003f4158();
  *(ID *)(unaff_x20 + lVar1) = IVar2;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar3 = &DAT_100fc3e80;
  FUN_1000037f0(&DAT_100fc3e80,&DAT_100c45d50);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 0xb;
  *(undefined8 *)(puVar3 + 0x10) = 5;
  *(undefined8 *)(puVar3 + 0x20) =
       *(undefined8 *)
        (IVar2 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::backgroundView);
  *(undefined8 *)(puVar3 + 0x28) =
       *(undefined8 *)
        (IVar2 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView);
  *(undefined8 *)(puVar3 + 0x30) =
       *(undefined8 *)
        (IVar2 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel);
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel;
  *(undefined8 *)(puVar3 + 0x38) =
       *(undefined8 *)
        (IVar2 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel);
  *(undefined8 *)(puVar3 + 0x40) =
       *(undefined8 *)
        (IVar2 + _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::manageButton);
  local_e0 = IVar2;
  FUN_1001fa150(puVar3,FUN_1003f4e4c,auStack_f0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  objc_stub::setContentCompressionResistancePriority_forOrientation_
            (*(ID *)(IVar2 + lVar1),0x437a0000,1);
  return IVar2;
}



/* Address: 0x1003f46d4 | FUN_1003f46d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1003f46d4(ID param_1)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  ID *pIVar9;
  ID *pIVar10;
  ID *pIVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ID IVar18;
  ID IVar19;
  ID local_90 [3];
  ID local_78;
  undefined **ppuStack_70;
  
  IVar12 = param_1;
  _swift_getObjectType();
  IVar3 = IVar12;
  FUN_1003f34c4();
  IVar4 = IVar3;
  FUN_1003f35bc();
  IVar5 = IVar4;
  FUN_1003f3680();
  IVar6 = IVar5;
  FUN_1003f3744();
  IVar7 = IVar6;
  FUN_1003f37e8();
  lVar1 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel;
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar8 = 0;
  local_90[0] = param_1;
  local_78 = IVar12;
  FUN_10000ec2c(0,&DAT_100fc31b0,&PTR__OBJC_CLASS___NSTextField_100f8d670);
  pIVar9 = local_90;
  FUN_1001f9b74(0x4028000000000000,pIVar9,uVar8,&PTR_PTR_100ec00e8);
  pIVar10 = local_90;
  FUN_100004594();
  FUN_1003f388c();
  lVar2 = _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel;
  ppuStack_70 = &PTR_PTR_100ec00e8;
  pIVar11 = local_90;
  local_90[0] = param_1;
  local_78 = IVar12;
  FUN_1001f9b74(0x4028000000000000,pIVar11,uVar8,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar18 = *(ID *)(param_1 + lVar2);
  IVar12 = objc_stub::topAnchor(IVar18);
  IVar13 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar12 = objc_stub::constraintEqualToAnchor_constant_(IVar12,0x4010000000000000,IVar13);
  IVar13 = objc_stub::bottomAnchor(IVar18);
  IVar18 = objc_stub::bottomAnchor(param_1);
  IVar13 = objc_stub::constraintLessThanOrEqualToAnchor_constant_(IVar13,0xc020000000000000,IVar18);
  IVar19 = *(ID *)(param_1 +
                  _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::manageButton);
  IVar18 = objc_stub::leadingAnchor(IVar19);
  IVar14 = objc_stub::leadingAnchor(param_1);
  IVar18 = objc_stub::constraintEqualToAnchor_constant_(IVar18,0x4028000000000000,IVar14);
  IVar14 = objc_stub::bottomAnchor(IVar19);
  IVar19 = objc_stub::bottomAnchor(param_1);
  IVar14 = objc_stub::constraintEqualToAnchor_constant_(IVar14,0xc028000000000000,IVar19);
  puVar15 = &DAT_100fc3b00;
  FUN_1000037f0(&DAT_100fc3b00,&DAT_100c45590);
  _swift_initStackObject();
  *(undefined8 *)(puVar15 + 0x18) = 0x18;
  *(undefined8 *)(puVar15 + 0x10) = 0xc;
  puVar16 = &DAT_100fc3e70;
  FUN_1000037f0(&DAT_100fc3e70,&DAT_100c45d60);
  *(undefined **)(puVar15 + 0x38) = puVar16;
  *(undefined ***)(puVar15 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar15 + 0x20) = IVar3;
  uVar8 = 0;
  FUN_10000ec2c(0,&DAT_100fc32d0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar15 + 0x60) = uVar8;
  *(undefined ***)(puVar15 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x48) = IVar4;
  *(undefined8 *)(puVar15 + 0x88) = uVar8;
  *(undefined ***)(puVar15 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x70) = IVar5;
  *(undefined8 *)(puVar15 + 0xb0) = uVar8;
  *(undefined ***)(puVar15 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x98) = IVar6;
  *(undefined8 *)(puVar15 + 0xd8) = uVar8;
  *(undefined ***)(puVar15 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0xc0) = IVar7;
  *(undefined **)(puVar15 + 0x100) = puVar16;
  *(undefined ***)(puVar15 + 0x108) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar15 + 0xe8) = pIVar9;
  *(undefined8 *)(puVar15 + 0x128) = uVar8;
  *(undefined ***)(puVar15 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID **)(puVar15 + 0x110) = pIVar10;
  *(undefined **)(puVar15 + 0x150) = puVar16;
  *(undefined ***)(puVar15 + 0x158) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar15 + 0x138) = pIVar11;
  *(undefined8 *)(puVar15 + 0x178) = uVar8;
  *(undefined ***)(puVar15 + 0x180) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x160) = IVar12;
  *(undefined8 *)(puVar15 + 0x1a0) = uVar8;
  *(undefined ***)(puVar15 + 0x1a8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x188) = IVar13;
  *(undefined8 *)(puVar15 + 0x1c8) = uVar8;
  *(undefined ***)(puVar15 + 0x1d0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x1b0) = IVar18;
  *(undefined8 *)(puVar15 + 0x1f0) = uVar8;
  *(undefined ***)(puVar15 + 0x1f8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar15 + 0x1d8) = IVar14;
  _swift_bridgeObjectRetain(IVar3);
  _swift_bridgeObjectRetain(pIVar9);
  _swift_bridgeObjectRetain(pIVar11);
  puVar17 = puVar15;
  FUN_1001f8d60(puVar15);
  _swift_bridgeObjectRelease(IVar3);
  _swift_bridgeObjectRelease(pIVar9);
  _swift_bridgeObjectRelease(pIVar11);
  _swift_setDeallocating(puVar15);
  uVar8 = *(undefined8 *)(puVar15 + 0x10);
  puVar16 = &DAT_100fc3b10;
  FUN_1000037f0(&DAT_100fc3b10,&DAT_100c455a0);
  _swift_arrayDestroy(puVar15 + 0x20,uVar8,puVar16);
  return puVar17;
}



/* Address: 0x1003f4b5c | _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::initWithFrame_
          (_TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell *this,ID param_1,
          SEL param_2,CGRect param_3)

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
    pcVar4 = "PasteCoreUI/Sidecar.CollaborationCell.macOS.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteCoreUI/Sidecar.CollaborationCell.macOS.swift",0x31,1,0x11,UVar3.unknown,pMVar1)
    ;
  }
  FUN_1003f44e0();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1003f4c24 | FUN_1003f4c24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f4c24(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  NSString *pNVar6;
  undefined8 uVar7;
  long unaff_x20;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long local_60;
  undefined8 uStack_58;
  
  IVar8 = *(ID *)(unaff_x20 + _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::iconView
                 );
  FUN_10000ec2c(0,&DAT_100fc3558,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  lVar5 = *(long *)(param_1 + 0x30);
  local_60 = lVar5;
  uStack_58 = uVar10;
  _swift_bridgeObjectRetain_n(uVar10,2);
  lVar4 = lVar5;
  FUN_1000f653c(lVar5,uVar10);
  if (lVar4 == 0) {
    FUN_10002b79c(&local_60);
    lVar5 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f4e0c);
      (*pcVar3)();
    }
  }
  else {
    FUN_1000f653c(lVar5,uVar10);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003f4cb8);
      (*pcVar3)();
    }
  }
  objc_stub::setImage_(IVar8,lVar5);
  IVar8 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::titleLabel);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setText_(IVar8,pNVar6);
  IVar8 = *(ID *)(unaff_x20 +
                 _TtCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell::subtitleLabel);
  if (*(long *)(param_1 + 0x28) == 0) {
    objc_stub::setText_(IVar8,0);
    pNVar6 = (NSString *)0x0;
  }
  else {
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setText_(IVar8,pNVar6);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  objc_stub::setToolTip_(IVar8,pNVar6);
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x20 +
                     _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::manageButton) +
           _TtCCCO11PasteCoreUI7Sidecar14CollectionView15SidecarBaseCell6Button::clickHandler);
  uVar10 = *puVar1;
  uVar2 = puVar1[1];
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  puVar1[1] = *(undefined8 *)(param_1 + 0x50);
  *puVar1 = uVar9;
  _swift_retain(uVar7);
  FUN_100004550(uVar10,uVar2);
  FUN_1003f3ccc(param_2);
  FUN_1003f3d9c(param_2);
  return;
}



/* Address: 0x1003f4e0c | FUN_1003f4e0c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f4e0c(void)

{
  return 0;
}



/* Address: 0x1003f4e1c | _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCCO11PasteCoreUI7Sidecar14CollectionView17CollaborationCell::_cxx_destruct
               (ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003f4e2c | FUN_1003f4e2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003f4e2c(void)

{
  return ZEXT816(0x100f9b8d8);
}



/* Address: 0x1003f4e4c | FUN_1003f4e4c */

void FUN_1003f4e4c(void)

{
  long unaff_x20;
  
  FUN_1003f46d4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003f4e54 | FUN_1003f4e54 */

void FUN_1003f4e54(void)

{
  char in_w5;
  
  if (in_w5 != -1) {
    FUN_1003f4e68();
    return;
  }
  return;
}



/* Address: 0x1003f4e68 | FUN_1003f4e68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003f4e68(void)

{
  char in_w5;
  
  if (in_w5 == '\x01') {
    return 0;
  }
  return 0;
}



/* Address: 0x1003f4ebc | FUN_1003f4ebc */

void FUN_1003f4ebc(void)

{
  char in_w5;
  
  if (in_w5 != -1) {
    FUN_1003f4ed0();
    return;
  }
  return;
}



/* Address: 0x1003f4ed0 | FUN_1003f4ed0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_1003f4ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,char param_6)

{
  if (param_6 != '\x01') {
    param_1 = param_4;
  }
  return param_1;
}



/* Address: 0x1003f4f10 | FUN_1003f4f10 */

void FUN_1003f4f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003f4f2c | FUN_1003f4f2c */

int FUN_1003f4f2c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1003f4f4c | FUN_1003f4f4c */

void FUN_1003f4f4c(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 7) = uVar1;
  return;
}



/* Address: 0x1003f4f84 | FUN_1003f4f84 */

undefined1  [16] FUN_1003f4f84(void)

{
  return ZEXT816(0x100ed0ec0);
}



/* Address: 0x1003f4f94 | FUN_1003f4f94 */

Set<undefined> FUN_1003f4f94(long param_1,long param_2)

{
  code *pcVar1;
  undefined1 auStack_40 [8];
  undefined *local_38;
  
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f5028);
    (*pcVar1)();
  }
  local_38 = (undefined *)Swift::Set::init(param_2 - param_1);
  if (param_1 != param_2) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f502c);
      (*pcVar1)();
    }
    if (param_2 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f5030);
      (*pcVar1)();
    }
    do {
      param_1 = param_1 + 1;
      FUN_1003f5838(auStack_40);
    } while (param_2 != param_1);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x1003f5030 | FUN_1003f5030 */

undefined1  [16] FUN_1003f5030(void)

{
  bool bVar1;
  double *unaff_x20;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  if ((long)unaff_x20[6] < 1) {
    dVar6 = unaff_x20[5];
    dVar7 = 0.0;
  }
  else {
    dVar7 = unaff_x20[4];
    dVar6 = unaff_x20[5];
    dVar3 = 80.0;
    if (6400.0 <= dVar6 * dVar6) {
      dVar3 = dVar6;
    }
    bVar1 = 6400.0 <= dVar6 * 200.0;
    dVar2 = 80.0;
    if (bVar1) {
      dVar2 = 200.0;
    }
    dVar4 = 80.0;
    if (bVar1) {
      dVar4 = dVar6;
    }
    dVar5 = dVar3;
    if (200.0 < dVar6) {
      dVar3 = dVar2;
      dVar5 = dVar4;
    }
    dVar2 = unaff_x20[2] + (dVar3 + *unaff_x20) * (double)((long)unaff_x20[6] - 1);
    if (dVar3 * dVar5 <= 6400.0) {
      dVar3 = 80.0;
      dVar5 = 80.0;
    }
    _CGRectGetMaxX(dVar2,0,dVar3,dVar5);
    dVar7 = dVar7 + dVar2;
  }
  auVar8._8_8_ = dVar6;
  auVar8._0_8_ = dVar7;
  return auVar8;
}



/* Address: 0x1003f5104 | FUN_1003f5104 */

double FUN_1003f5104(long param_1)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = unaff_x20[5];
  dVar2 = 80.0;
  if (6400.0 <= dVar1 * dVar1) {
    dVar2 = dVar1;
  }
  dVar3 = 80.0;
  if (6400.0 <= dVar1 * 200.0) {
    dVar3 = 200.0;
  }
  if (200.0 < dVar1) {
    dVar2 = dVar3;
  }
  return unaff_x20[2] + (dVar2 + *unaff_x20) * (double)param_1;
}



/* Address: 0x1003f51a0 | thunk_FUN_1003f5030 */

void thunk_FUN_1003f5030(void)

{
  FUN_1003f5030();
  return;
}



/* Address: 0x1003f51a4 | FUN_1003f51a4 */

void FUN_1003f51a4(void)

{
  FUN_1003f5104();
  return;
}



/* Address: 0x1003f51bc | FUN_1003f51bc */

void FUN_1003f51bc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (-1 < *(long *)(unaff_x20 + 0x30)) {
    FUN_1003f4f94(0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003f51d0);
  (*pcVar1)();
}



/* Address: 0x1003f51d0 | FUN_1003f51d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1003f51d0(long param_1,char param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  double *unaff_x20;
  ulong uVar14;
  undefined8 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  double local_c8;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar12 = 0;
  uVar14 = *(ulong *)(param_1 + 0x10);
  do {
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar10 = uVar14 - uVar12;
    lVar11 = 0;
    if (uVar12 <= uVar14) {
      lVar11 = lVar10;
    }
    lVar11 = lVar11 + 1;
    uVar2 = ~uVar12;
    puVar15 = (undefined8 *)(param_1 + 0x38 + uVar12 * 0x20);
    do {
      puVar13 = puVar15;
      uVar12 = uVar2;
      if (lVar10 == 0) {
        lVar11 = *(long *)(puVar5 + 0x10);
        if (lVar11 == 0) {
          _swift_release(puVar5);
          puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
          goto LAB_1003f5514;
        }
        FUN_1003f94a8(0,lVar11,0);
        dVar21 = unaff_x20[5];
        dVar25 = 80.0;
        if (6400.0 <= dVar21 * dVar21) {
          dVar25 = dVar21;
        }
        local_c8 = 80.0;
        bVar7 = 6400.0 <= dVar21 * 200.0;
        dVar17 = 80.0;
        if (bVar7) {
          dVar17 = 200.0;
        }
        dVar16 = 80.0;
        if (bVar7) {
          dVar16 = dVar21;
        }
        puVar15 = (undefined8 *)(puVar5 + 0x38);
        goto LAB_1003f537c;
      }
      lVar11 = lVar11 + -1;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003f5554);
        (*pcVar6)();
      }
      bVar4 = *(byte *)(puVar13 + -3);
      lVar1 = puVar13[-2];
      lVar3 = puVar13[-1];
      if (bVar4 - 1 < 2) break;
      lVar10 = lVar10 + -1;
      if (SBORROW8(lVar1,lVar3)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003f5558);
        (*pcVar6)();
      }
      uVar2 = uVar12 - 1;
      puVar15 = puVar13 + 4;
    } while (lVar1 == lVar3);
    uVar8 = *puVar13;
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar9 & 1) == 0) {
      FUN_1003f94c4(0,*(long *)(puVar5 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
      FUN_1003f94c4(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
    puVar5[uVar2 * 0x20 + 0x20] = bVar4;
    uVar12 = -uVar12;
    *(long *)(puVar5 + uVar2 * 0x20 + 0x28) = lVar1;
    *(long *)(puVar5 + uVar2 * 0x20 + 0x30) = lVar3;
    *(undefined8 *)(puVar5 + uVar2 * 0x20 + 0x38) = uVar8;
  } while( true );
LAB_1003f537c:
  uVar8 = *puVar15;
  dVar22 = *unaff_x20;
  dVar19 = dVar17;
  dVar20 = dVar16;
  if (param_2 == '\0') {
    if (dVar21 <= 200.0) {
      dVar19 = dVar25;
      dVar20 = dVar25;
    }
    dVar18 = unaff_x20[2] + (dVar19 + dVar22) * (double)(long)puVar15[-2];
    if (dVar19 * dVar20 <= 6400.0) {
      dVar20 = local_c8;
      dVar19 = local_c8;
    }
    if (*(char *)(puVar15 + -3) == '\x02') goto LAB_1003f53e8;
LAB_1003f5448:
    dVar23 = dVar18;
    _CGRectGetWidth(dVar18,0,dVar19,dVar20,uVar8);
    dVar23 = dVar23 + dVar22;
    uVar24 = 0x3ff0000000000000;
  }
  else {
    if (dVar21 <= 200.0) {
      dVar19 = dVar25;
      dVar20 = dVar25;
    }
    dVar18 = unaff_x20[2] + (dVar19 + dVar22) * (double)(long)puVar15[-1];
    if (dVar19 * dVar20 <= 6400.0) {
      dVar19 = 80.0;
      dVar20 = 80.0;
    }
    if (*(char *)(puVar15 + -3) != '\x01') goto LAB_1003f5448;
LAB_1003f53e8:
    dVar23 = 0.0;
    uVar24 = 0;
  }
  dVar22 = dVar18;
  _CGRectGetHeight(dVar18,0,dVar19,dVar20);
  uVar12 = *(ulong *)(puVar9 + 0x10);
  if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
    FUN_1003f94a8(1 < *(ulong *)(puVar9 + 0x18),uVar12 + 1,1);
  }
  *(ulong *)(puVar9 + 0x10) = uVar12 + 1;
  *(double *)(puVar9 + uVar12 * 0x50 + 0x20) = dVar18;
  puVar15 = puVar15 + 4;
  *(undefined8 *)(puVar9 + uVar12 * 0x50 + 0x28) = 0;
  *(double *)(puVar9 + uVar12 * 0x50 + 0x30) = dVar19;
  *(double *)(puVar9 + uVar12 * 0x50 + 0x38) = dVar20;
  *(undefined8 *)(puVar9 + uVar12 * 0x50 + 0x40) = uVar24;
  *(undefined8 *)(puVar9 + uVar12 * 0x50 + 0x48) = 0;
  *(undefined8 *)(puVar9 + uVar12 * 0x50 + 0x50) = 0;
  *(double *)(puVar9 + uVar12 * 0x50 + 0x58) = dVar23;
  *(double *)(puVar9 + uVar12 * 0x50 + 0x60) = dVar22;
  *(undefined8 *)(puVar9 + uVar12 * 0x50 + 0x68) = uVar8;
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    _swift_release(puVar5);
LAB_1003f5514:
    FUN_1003f5030();
    return puVar9;
  }
  goto LAB_1003f537c;
}



/* Address: 0x1003f5558 | FUN_1003f5558 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003f5558(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  undefined *self_00;
  ID self_01;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  ID self_02;
  undefined1 auStack_110 [80];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ID local_78;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_88 = puVar7[7];
      local_90 = puVar7[6];
      self_02 = puVar7[9];
      uStack_80 = puVar7[8];
      uStack_a8 = puVar7[3];
      local_b0 = puVar7[2];
      local_98 = puVar7[5];
      local_a0 = puVar7[4];
      uStack_b8 = puVar7[1];
      local_c0 = *puVar7;
      local_78 = self_02;
      FUN_1003f5f68(&local_c0,auStack_110);
      self = objc_stub::layer(self_02);
      uVar4 = uStack_80;
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar1 = local_98;
      if (self != 0) {
        self_00 = &_OBJC_CLASS___CALayer;
        _objc_allocWithZone();
        self_01 = objc_stub::init((ID)self_00);
        uVar5 = 0;
        FUN_1003cdfb8(0);
        static_(extension_in_CoreGraphics):__C.CGColorRef.black.getter_:___C.CGColorRef::_get_black
                  ();
        objc_stub::setBackgroundColor_(self_01,uVar5);
        objc_stub::setFrame_(self_01,uVar1,uVar2,uVar3,uVar4);
        objc_stub::setMask_(self,self_01);
      }
      uVar4 = uStack_a8;
      uVar3 = local_b0;
      uVar2 = uStack_b8;
      uVar1 = local_c0;
      objc_stub::setAlphaValue_(self_02,local_a0);
      objc_stub::setFrame_(self_02,uVar1,uVar2,uVar3,uVar4);
      FUN_1003f5fb4(&local_c0);
      puVar7 = puVar7 + 10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Address: 0x1003f56ac | FUN_1003f56ac */

void FUN_1003f56ac(undefined8 *param_1,double param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  double dVar2;
  double dVar3;
  
  uVar1 = *param_3;
  FUN_1001f7fc8(uVar1,*unaff_x20,&DAT_100ed10a0,&PTR_PTR_100ed0ee0);
  *param_1 = uVar1;
  dVar2 = (double)param_3[1];
  dVar3 = (double)unaff_x20[1];
  param_1[2] = (double)param_3[2] * param_2 + (double)unaff_x20[2] * (1.0 - param_2);
  param_1[1] = dVar2 * param_2 + dVar3 * (1.0 - param_2);
  return;
}



/* Address: 0x1003f5724 | FUN_1003f5724 */

void FUN_1003f5724(double *param_1,double param_2,double *param_3)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = 1.0 - param_2;
  dVar2 = unaff_x20[8];
  dVar3 = param_3[8];
  dVar4 = *param_3;
  dVar6 = param_3[3];
  dVar5 = param_3[2];
  dVar7 = *unaff_x20;
  dVar9 = unaff_x20[3];
  dVar8 = unaff_x20[2];
  param_1[1] = unaff_x20[1] * dVar1 + param_3[1] * param_2;
  *param_1 = dVar7 * dVar1 + dVar4 * param_2;
  param_1[3] = dVar9 * dVar1 + dVar6 * param_2;
  param_1[2] = dVar8 * dVar1 + dVar5 * param_2;
  dVar4 = param_3[4];
  dVar6 = param_3[7];
  dVar5 = param_3[6];
  dVar7 = unaff_x20[4];
  dVar9 = unaff_x20[7];
  dVar8 = unaff_x20[6];
  param_1[5] = unaff_x20[5] * dVar1 + param_3[5] * param_2;
  param_1[4] = dVar7 * dVar1 + dVar4 * param_2;
  param_1[7] = dVar9 * dVar1 + dVar6 * param_2;
  param_1[6] = dVar8 * dVar1 + dVar5 * param_2;
  param_1[8] = dVar1 * dVar2 + param_2 * dVar3;
  return;
}



/* Address: 0x1003f5790 | FUN_1003f5790 */

void FUN_1003f5790(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1003f5724(&local_68);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  param_1[8] = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}


