/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000af6f4 | FUN_1000af6f4 */

undefined8 FUN_1000af6f4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa92b0;
  FUN_1000037f0(&DAT_100fa92b0,&DAT_100c26138);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000af73c | thunk_FUN_1000af740 */

void thunk_FUN_1000af740(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000af740 | FUN_1000af740 */

void FUN_1000af740(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000af774 | FUN_1000af774 */

void FUN_1000af774(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c29a48;
  _swift_getKeyPath(&DAT_100c29a48);
  puVar2 = &DAT_100c29a70;
  _swift_getKeyPath(&DAT_100c29a70);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000af7dc | FUN_1000af7dc */

void FUN_1000af7dc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *pPVar3;
  undefined1 auStack_58 [40];
  
  pPVar3 = (Published *)*param_2;
  puVar1 = &DAT_100c29a48;
  _swift_getKeyPath(&DAT_100c29a48);
  puVar2 = &DAT_100c29a70;
  _swift_getKeyPath(&DAT_100c29a70);
  FUN_1000594f4(param_1,auStack_58);
  _swift_retain(pPVar3);
  Combine::Published::_set_subscript(pPVar3,auStack_58,pPVar3,puVar1,puVar2);
  return;
}



/* Address: 0x1000af854 | FUN_1000af854 */

void FUN_1000af854(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000af878 | FUN_1000af878 */

void FUN_1000af878(void)

{
  FUN_1000af0c0();
  return;
}



/* Address: 0x1000af880 | FUN_1000af880 */

void FUN_1000af880(void)

{
  FUN_1000af314();
  return;
}



/* Address: 0x1000af888 | thunk_FUN_1000ae500 */

void thunk_FUN_1000ae500(void)

{
  FUN_1000ae500();
  return;
}



/* Address: 0x1000af88c | thunk_FUN_1000ae568 */

void thunk_FUN_1000ae568(void)

{
  FUN_1000ae568();
  return;
}



/* Address: 0x1000af890 | thunk_FUN_1000af774 */

void thunk_FUN_1000af774(void)

{
  FUN_1000af774();
  return;
}



/* Address: 0x1000af894 | thunk_FUN_1000af7dc */

void thunk_FUN_1000af7dc(void)

{
  FUN_1000af7dc();
  return;
}



/* Address: 0x1000af898 | thunk_FUN_1000af740 */

void thunk_FUN_1000af740(void)

{
  thunk_FUN_1000af740();
  return;
}



/* Address: 0x1000af89c | thunk_FUN_1000af740 */

void thunk_FUN_1000af740(void)

{
  thunk_FUN_1000af740();
  return;
}



/* Address: 0x1000af8a0 | FUN_1000af8a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000af8a0(void)

{
  ID self;
  ID IVar1;
  
  _swift_getObjectType();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,
                             "initWithContentRect:styleMask:backing:defer:",0,0,0,0,0x801b,2,1);
  IVar1 = objc_stub::setAnimationBehavior_(self,2);
  FUN_10021d7a4();
  if (IVar1 != 0) {
    objc_stub::setBlendingMode_(IVar1,0);
  }
  IVar1 = 0;
  FUN_10021d7a4();
  if (IVar1 != 0) {
    objc_stub::setMaterial_(IVar1,6);
  }
  IVar1 = objc_stub::standardWindowButton_(self,1);
  if (IVar1 != 0) {
    objc_stub::setHidden_(IVar1,1);
  }
  IVar1 = objc_stub::standardWindowButton_(self,0);
  if (IVar1 != 0) {
    objc_stub::setHidden_(IVar1,1);
  }
  IVar1 = objc_stub::standardWindowButton_(self,2);
  if (IVar1 != 0) {
    objc_stub::setHidden_(IVar1,1);
  }
  objc_stub::setTitlebarAppearsTransparent_(self,1);
  objc_stub::setMovableByWindowBackground_(self,1);
  objc_stub::setHidesOnDeactivate_(self,0);
  objc_stub::setLevel_(self,3);
  return self;
}



/* Address: 0x1000afa10 | _TtC5Paste17ItemPreviewWindow::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste17ItemPreviewWindow::init(ID param_1,SEL param_2)

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
    pcVar4 = "Paste/ItemPreviewWindow.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewWindow.swift",0x1d,1,5,UVar3.unknown,pMVar1);
  }
  FUN_1000af8a0();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x1000afaa8 | _TtC5Paste17ItemPreviewWindow::becomeKeyWindow */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste17ItemPreviewWindow::becomeKeyWindow(ID param_1,SEL param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewWindow.swift",0x1d,1,0x1e,UVar5.unknown,pMVar3);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    local_50.receiver = param_1;
    local_50.super_class = pcVar2;
    _objc_msgSendSuper2(&local_50,"becomeKeyWindow");
    _swift_release(pMVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000afb8c);
  (*pcVar1)();
}



/* Address: 0x1000afb8c | _TtC5Paste17ItemPreviewWindow::initWithContentRect:styleMask:backing:defer: */

/* Function Stack Size: 0x44 bytes */

ID _TtC5Paste17ItemPreviewWindow::initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,bool param_6)

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
              ("Paste/ItemPreviewWindow.swift",0x1d,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.ItemPreviewWindow",0x17,"init(contentRect:styleMask:backing:defer:)",0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000afc14);
  (*pcVar1)();
}



/* Address: 0x1000afc14 | FUN_1000afc14 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000afc14(void)

{
  return ZEXT816(0x100f92bc8);
}



/* Address: 0x1000afc34 | FUN_1000afc34 */

void FUN_1000afc34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(&local_48,0xd000000000000012,0x8000000100d8f4d0,&local_60,puVar1);
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x1000afcb8 | FUN_1000afcb8 */

undefined8 FUN_1000afcb8(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd000000000000015,0x8000000100d8ecb0,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1000afd0c | FUN_1000afd0c */

undefined8 FUN_1000afd0c(void)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  local_40 = 0x20000;
  uVar1 = 0;
  FUN_1000038c0(0);
  FUN_1002ccc34(local_38,0xd000000000000016,0x8000000100d8ec90,&local_40,uVar1);
  return local_38[0];
}



/* Address: 0x1000afd6c | FUN_1000afd6c */

undefined8 FUN_1000afd6c(void)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 local_38 [3];
  
  local_40 = 0x100000;
  uVar1 = 0;
  FUN_1000038c0(0);
  FUN_1002ccc34(local_38,0xd000000000000017,0x8000000100d8ec70,&local_40,uVar1);
  return local_38[0];
}



/* Address: 0x1000afdcc | FUN_1000afdcc */

undefined8 FUN_1000afdcc(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0xd000000000000024,0x8000000100d8f150,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1000afe1c | FUN_1000afe1c */

void FUN_1000afe1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(&local_48,0xd000000000000012,0x8000000100d8f4b0,&local_60,puVar1);
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x1000afea0 | FUN_1000afea0 */

void FUN_1000afea0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(&local_48,0xd000000000000014,0x8000000100d8f230,&local_60,puVar1);
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x1000aff24 | FUN_1000aff24 */

void FUN_1000aff24(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(&local_48,0xd000000000000018,0x8000000100d8f250,&local_60,puVar1);
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x1000affa8 | FUN_1000affa8 */

void FUN_1000affa8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x76;
  FUN_1001e94d4(0x76,0xe100000000000000);
  DAT_101057068 = uVar1;
  DAT_101057070 = 0x120000;
  return;
}



/* Address: 0x1000affd4 | FUN_1000affd4 */

void FUN_1000affd4(void)

{
  undefined8 uVar1;
  
  uVar1 = 99;
  FUN_1001e94d4(99,0xe100000000000000);
  DAT_101057058 = uVar1;
  DAT_101057060 = 0x120000;
  return;
}



/* Address: 0x1000b0000 | FUN_1000b0000 */

void FUN_1000b0000(undefined8 *param_1)

{
  FUN_1001e9640();
  DAT_101057048 = *param_1;
  DAT_101057050 = 0x100000;
  return;
}



/* Address: 0x1000b0028 | FUN_1000b0028 */

void FUN_1000b0028(undefined8 *param_1)

{
  FUN_1001e962c();
  DAT_101057038 = *param_1;
  DAT_101057040 = 0x100000;
  return;
}



/* Address: 0x1000b0050 | FUN_1000b0050 */

undefined8 FUN_1000b0050(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd000000000000014,0x8000000100d8f070,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1000b00a4 | FUN_1000b00a4 */

undefined8 FUN_1000b00a4(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0xd000000000000019,0x8000000100d8ecf0,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1000b00f4 | FUN_1000b00f4 */

undefined8 FUN_1000b00f4(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd000000000000015,0x8000000100d8ed30,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1000b0148 | FUN_1000b0148 */

undefined8 FUN_1000b0148(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd000000000000013,0x8000000100d8e160,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x1000b019c | FUN_1000b019c */

void FUN_1000b019c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 1;
  puVar1 = &DAT_100faa858;
  FUN_1000037f0(&DAT_100faa858,&DAT_100c28000);
  FUN_1002ccc34(&local_50,0xd000000000000013,0x8000000100d8f090,&local_70,puVar1);
  *param_1 = local_50;
  param_1[1] = uStack_48;
  param_1[3] = uStack_38;
  param_1[2] = local_40;
  param_1[4] = local_30;
  *(undefined1 *)(param_1 + 5) = local_28;
  return;
}



/* Address: 0x1000b022c | FUN_1000b022c */

undefined8 FUN_1000b022c(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0xd000000000000013,0x8000000100d8ef50,&local_29,&DAT_100eb3228);
  return local_28[0];
}



/* Address: 0x1000b027c | FUN_1000b027c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000b027c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ID IVar5;
  long ***self;
  undefined8 uVar6;
  long ***ppplVar7;
  undefined8 uVar8;
  long ****pppplVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  long *unaff_x20;
  code *pcVar15;
  long ***local_b8;
  long ***local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined **local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100c29b70;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100faa840,&DAT_100c22d38);
  _swift_allocObject();
  FUN_1000da6e0();
  IVar5 = 0;
  FUN_1000afc14();
  _objc_allocWithZone();
  self = (long ***)objc_stub::init(IVar5);
  objc_stub::setAnimationBehavior_((ID)self,3);
  FUN_1000da768(&local_b0);
  FUN_100086c10(self,param_1,param_3);
  uVar6 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  ppplVar7 = self;
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar7 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar14 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100004444;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar14,uVar2);
  local_90 = &PTR_PTR_100ebe110;
  uVar8 = 0;
  local_b0 = ppplVar7;
  local_98 = uVar6;
  FUN_1001adc9c();
  _swift_allocObject();
  pppplVar9 = &local_b0;
  FUN_1001ad514();
  local_90 = &PTR_PTR_100eafe88;
  ppuStack_88 = &PTR_PTR_100ebe100;
  local_80 = &PTR_PTR_100ec6cd0;
  local_b0 = (long ***)pppplVar9;
  local_98 = uVar8;
  FUN_1003c41f0();
  _swift_allocObject();
  _swift_retain(pppplVar9);
  FUN_10000444c(param_2);
  lVar10 = param_1;
  FUN_1003c25dc(param_1,param_2,&local_b0);
  FUN_10007c86c(0);
  _objc_allocWithZone();
  lVar11 = lVar10;
  FUN_10007c994();
  puVar12 = &DAT_100eb4330;
  _swift_allocObject(&DAT_100eb4330,0x18,7);
  *(long ****)(puVar12 + 0x10) = self;
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste15ItemPreviewView::onEndEditing);
  uVar14 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_1000b25f8;
  puVar1[1] = puVar12;
  FUN_100004550(uVar14,uVar2);
  puVar12 = &DAT_100eb4358;
  _swift_allocObject(&DAT_100eb4358,0x20,7);
  *(undefined **)(puVar12 + 0x10) = puVar4;
  *(long *)(puVar12 + 0x18) = param_1;
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
  uVar14 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10000458c;
  puVar1[1] = puVar12;
  _swift_retain(puVar4);
  FUN_100004550(uVar14,uVar2);
  if ((param_3 & 1) != 0) {
    FUN_10007be8c();
  }
  puVar12 = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar12);
  objc_stub::setView_(IVar5,lVar11);
  (*(code *)(*pppplVar9)[0xd])(IVar5);
  local_90 = &PTR_PTR_100ebe0e8;
  pcVar15 = *(code **)(*unaff_x20 + 0x88);
  local_b0 = (long ***)pppplVar9;
  local_98 = uVar8;
  _swift_retain(pppplVar9);
  (*pcVar15)(&local_b0,0,0);
  pppplVar13 = &local_b0;
  FUN_100004594();
  if ((param_3 & 1) == 0) {
    _swift_release(lVar10);
    _swift_release(pppplVar9);
    _swift_release(puVar4);
  }
  else {
    FUN_10007ac34();
    uVar14 = 0;
    local_b8 = (long ***)pppplVar13;
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    puVar12 = &DAT_100fa6550;
    FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
    pppplVar13 = &local_b0;
    _swift_dynamicCast(pppplVar13,&local_b8,uVar14,puVar12,6);
    ppuVar3 = local_90;
    uVar14 = local_98;
    if (((ulong)pppplVar13 & 1) == 0) {
      _swift_release(puVar4);
      _swift_release(pppplVar9);
      _swift_release(lVar10);
      local_90 = (undefined **)0x0;
      uStack_a8 = 0;
      local_b0 = (long ***)0x0;
      local_98 = 0;
      uStack_a0 = 0;
      FUN_100005808(&local_b0,&DAT_100fa6558,&DAT_100c22d48);
    }
    else {
      FUN_100004640(&local_b0,local_98);
      (*(code *)ppuVar3[0xb])(uVar14,ppuVar3);
      _swift_release(puVar4);
      _swift_release(pppplVar9);
      _swift_release(lVar10);
      FUN_100004594(&local_b0);
    }
  }
  return;
}



/* Address: 0x1000b0718 | FUN_1000b0718 */

void FUN_1000b0718(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  puVar1 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  FUN_1002ccc34(param_1,0xd000000000000016,0x8000000100d8e530,&local_30,puVar1);
  return;
}



/* Address: 0x1000b077c | FUN_1000b077c */

void FUN_1000b077c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1000f318c();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000b07a0 | FUN_1000b07a0 */

undefined8 FUN_1000b07a0(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_1000b1e44();
  FUN_1000d80e0(&local_18,"Paste/AppDelegate+Handoff.swift",0x1f,2,0x7d,0x13,FUN_1000b1e64,0,param_1
               );
  return local_18;
}



/* Address: 0x1000b07f0 | FUN_1000b07f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000b07f0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long local_48;
  
  uVar2 = 0;
  FUN_1000aaf34();
  _swift_allocObject();
  FUN_1000aa7ac();
  uVar5 = *(undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::handoffWiring);
  *(undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::handoffWiring) = uVar2;
  _swift_release(uVar5);
  lVar6 = *(long *)(unaff_x20 + _TtC5Paste11AppDelegate::appCoordinator);
  puVar4 = &DAT_100eb42b8;
  puVar3 = puVar4;
  _swift_allocObject(&DAT_100eb42b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 0x78);
  uVar5 = *(undefined8 *)(lVar6 + 0x80);
  *(code **)(lVar6 + 0x78) = FUN_1000b2630;
  *(undefined **)(lVar6 + 0x80) = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar2,uVar5);
  _swift_release(puVar3);
  puVar3 = puVar4;
  _swift_allocObject(&DAT_100eb42b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar6 + 0x88);
  uVar5 = *(undefined8 *)(lVar6 + 0x90);
  *(code **)(lVar6 + 0x88) = FUN_1000b2638;
  *(undefined **)(lVar6 + 0x90) = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar2,uVar5);
  _swift_release(puVar3);
  FUN_1000da768(&local_48);
  _swift_allocObject(&DAT_100eb42b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  puVar1 = (undefined8 *)(local_48 + _TtC5Paste24ItemPreviewWindowManager::onAllPreviewsClosed);
  uVar2 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = FUN_1000b2640;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar5);
  _swift_release(puVar4);
  return 0;
}



/* Address: 0x1000b098c | FUN_1000b098c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000b098c(long param_1)

{
  code *pcVar1;
  int iVar2;
  ID IVar3;
  undefined8 uVar5;
  undefined8 local_48;
  ID IVar4;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _TtC5Paste11AppDelegate::isMainPanelOpen) = 1;
    IVar3 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    IVar3 = NSWorkspace::frontmostApplication(IVar3);
    if (IVar3 == 0) {
      iVar2 = 0;
    }
    else {
      IVar4 = NSWorkspace::processIdentifier(IVar3);
      iVar2 = (int)IVar4;
    }
    IVar4 = NSRunningApplication::currentApplication((ID)&_OBJC_CLASS___NSRunningApplication);
    IVar4 = NSRunningApplication::processIdentifier(IVar4);
    if (IVar3 == 0 || iVar2 != (int)IVar4) {
      *(ID *)(param_1 + _TtC5Paste11AppDelegate::handoffPreviousApp) = IVar3;
    }
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000b0b20);
      (*pcVar1)();
    }
    objc_stub::activate(*(ID *)PTR__NSApp_100ea8fa0);
    uVar5 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffController);
    _swift_retain(uVar5);
    FUN_1000da768(&local_48);
    _swift_release(uVar5);
    uVar5 = local_48;
    FUN_100af2958();
    _swift_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffSnapshotBuilder);
    _swift_retain(uVar5);
    FUN_1000da768(&local_48);
    _swift_release(uVar5);
    FUN_1000b0b20();
    _swift_release(local_48);
  }
  return;
}



/* Address: 0x1000b0b20 | FUN_1000b0b20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b0fa8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b0b20(void)

{
  __CocoaSet _Var1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  Published PVar11;
  undefined *puVar12;
  AnyCancellable *this;
  long lVar13;
  long extraout_x8;
  undefined1 *puVar14;
  long lVar15;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long lVar17;
  long extraout_x8_02;
  long lVar18;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar19;
  long unaff_x20;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined *local_e0 [3];
  long local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fab9c0;
  FUN_1000037f0(&DAT_100fab9c0,&DAT_100c29bd8);
  lVar13 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = &stack0xfffffffffffffea0 + -extraout_x8;
  puVar4 = &DAT_100fab9c8;
  FUN_1000037f0(&DAT_100fab9c8,&DAT_100c29be0);
  lVar15 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)puVar14 - extraout_x8_00;
  puVar5 = &DAT_100fab9d0;
  FUN_1000037f0(&DAT_100fab9d0,&DAT_100c29be8);
  lVar16 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fab9d8;
  FUN_1000037f0(&DAT_100fab9d8,&DAT_100c29bf0);
  lVar17 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (lVar23 - extraout_x8_01) - extraout_x8_02;
  puVar7 = &DAT_100fab9e0;
  FUN_1000037f0(&DAT_100fab9e0,&DAT_100c29bf8);
  lVar18 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fab9e8;
  FUN_1000037f0(&DAT_100fab9e8,&DAT_100c29c00);
  lVar20 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x60,auStack_b8,0,0);
  puVar21 = *(undefined **)(unaff_x20 + 0x60);
  if (((ulong)puVar21 & 0xc000000000000001) == 0) {
    lVar9 = *(long *)(puVar21 + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar21) {
      _Var1.unknown = puVar21;
    }
    _swift_bridgeObjectRetain(puVar21);
    lVar9 = Swift::__CocoaSet::get_count(_Var1);
    _swift_bridgeObjectRelease(puVar21);
  }
  if (lVar9 == 0) {
    uVar26 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar24 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar27 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar25 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar22 = *(undefined8 *)(unaff_x20 + 0x58);
    local_a0 = uVar24;
    uStack_98 = uVar26;
    local_90 = uVar27;
    local_80 = uVar25;
    local_70 = uVar22;
    _swift_retain(uVar24);
    _swift_retain(uVar26);
    _swift_retain(uVar27);
    _swift_retain(uVar25);
    _swift_retain(uVar22);
    puVar21 = &DAT_100fa8320;
    FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
    FUN_1002cb1ec();
    _swift_release(uVar22);
    _swift_release(uVar25);
    _swift_release(uVar27);
    _swift_release(uVar26);
    _swift_release(uVar24);
    puVar10 = &DAT_100c29c08;
    local_e0[0] = puVar21;
    _swift_getKeyPath(&DAT_100c29c08);
    FUN_1000037f0(&DAT_100fa8388,&DAT_100c25470);
    FUN_100016eac(&DAT_100fa8390,&DAT_100fa8388,&DAT_100c25470,
                  PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                 );
    (extension_Combine)::Combine::Publisher::_map();
    _swift_release(puVar21);
    _swift_release(puVar10);
    FUN_1000da768(&local_c0);
    FUN_1000f2c14(lVar23);
    _swift_release(local_c0);
    FUN_1000da768(&local_c8);
    _swift_beginAccess(local_c8 + _TtC5Paste24ItemPreviewWindowManager::_topmost,local_e0,0x21,0);
    PVar11.unknown = &DAT_100faa550;
    FUN_1000037f0(&DAT_100faa550,&DAT_100c29c30);
    Combine::Published::_get_projectedValue(PVar11);
    _swift_endAccess(local_e0);
    puVar21 = &DAT_100fab9f0;
    FUN_100016eac(&DAT_100fab9f0,&DAT_100fab9d0,&DAT_100c29be8,
                  PTR_Combine__Combine__Publishers__MapKeyPath<undefined,undefined>_>Combine__Publisher_100ea9638
                 );
    puVar2 = PTR__Combine__Publisher_>Combine__Publisher_100ea98d0;
    puVar10 = &DAT_100fab9f8;
    FUN_100016eac(&DAT_100fab9f8,&DAT_100fab9c8,&DAT_100c29be0,
                  PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
    puVar12 = &DAT_100faba00;
    FUN_100016eac(&DAT_100faba00,&DAT_100fab9c0,&DAT_100c29bd8,puVar2);
    (extension_Combine)::Combine::Publisher::_combineLatest
              (lVar19,puVar12,puVar14,puVar5,puVar4,puVar3,puVar21,puVar10,puVar12);
    (**(code **)(lVar13 + 8))(puVar14,puVar3);
    (**(code **)(lVar15 + 8))(lVar23,puVar4);
    (**(code **)(lVar16 + 8))(lVar23 - extraout_x8_01,puVar5);
    FUN_100016eac(&DAT_100faba08,&DAT_100fab9d8,&DAT_100c29bf0,
                  PTR_Combine__Combine__Publishers__CombineLatest3<undefined,undefined,undefined>_>Combine__Publisher_100ea9618
                 );
    (extension_Combine)::Combine::Publisher::_compactMap();
    (**(code **)(lVar17 + 8))(lVar19,puVar6);
    FUN_100016eac(&DAT_100faba10,&DAT_100fab9e0,&DAT_100c29bf8,
                  PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
                 );
    FUN_1000b2648();
    (extension_Combine)::Combine::Publisher::_removeDuplicates();
    (**(code **)(lVar18 + 8))(lVar19 - extraout_x8_03,puVar7);
    puVar3 = &DAT_100eb4380;
    _swift_allocObject(&DAT_100eb4380,0x18,7);
    _swift_weakInit(puVar3 + 0x10,unaff_x20);
    FUN_100016eac(&DAT_100faba20,&DAT_100fab9e8,&DAT_100c29c00,
                  PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
                 );
    this = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar3);
    (**(code **)(lVar20 + 8))((lVar19 - extraout_x8_03) - extraout_x8_04,puVar8);
    _swift_beginAccess(unaff_x20 + 0x60,local_e0,0x21,0);
    Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x60));
    _swift_endAccess(local_e0);
    _swift_release(this);
  }
  return;
}



/* Address: 0x1000b11ac | FUN_1000b11ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b11ac(long param_1)

{
  long lVar1;
  __int64 _Var2;
  undefined *puVar3;
  undefined8 uVar4;
  long local_68 [3];
  long local_50;
  undefined1 auStack_48 [24];
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _TtC5Paste11AppDelegate::isMainPanelOpen) = 0;
    uVar4 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::itemPreviewWindowManager);
    _swift_retain(uVar4);
    FUN_1000da768(local_68);
    _swift_release(uVar4);
    lVar1 = _TtC5Paste24ItemPreviewWindowManager::entries;
    _swift_beginAccess(local_68[0] + _TtC5Paste24ItemPreviewWindowManager::entries,auStack_48,0,0);
    if (*(long *)(*(long *)(local_68[0] + lVar1) + 0x10) == 0) {
      uVar4 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffSnapshotBuilder);
      _swift_retain(uVar4);
      FUN_1000da768(&local_50);
      _swift_release(uVar4);
      lVar1 = local_50;
      puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
      if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
         (_Var2 = Swift::_CocoaArrayWrapper::get_endIndex
                            ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
         puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var2 != 0)) {
        puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_10001a4b0();
      }
      _swift_beginAccess(lVar1 + 0x60,local_68,1,0);
      uVar4 = *(undefined8 *)(lVar1 + 0x60);
      *(undefined **)(lVar1 + 0x60) = puVar3;
      _swift_release(lVar1);
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffController);
      _swift_retain(uVar4);
      FUN_1000da768(&local_50);
      _swift_release(uVar4);
      FUN_100af2c8c();
      _swift_release(local_50);
      lVar1 = _TtC5Paste11AppDelegate::handoffPreviousApp;
      if (*(ID *)(param_1 + _TtC5Paste11AppDelegate::handoffPreviousApp) != 0) {
        objc_stub::activateWithOptions_
                  (*(ID *)(param_1 + _TtC5Paste11AppDelegate::handoffPreviousApp),2);
      }
      *(undefined8 *)(param_1 + lVar1) = 0;
    }
    else {
      *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffPreviousApp) = 0;
    }
  }
  return;
}



/* Address: 0x1000b1370 | FUN_1000b1370 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000b1370(long param_1)

{
  long lVar1;
  __int64 _Var2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    if ((*(byte *)(param_1 + _TtC5Paste11AppDelegate::isMainPanelOpen) & 1) != 0) {
      return 0;
    }
    uVar4 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffSnapshotBuilder);
    _swift_retain(uVar4);
    FUN_1000da768(&local_38);
    _swift_release(uVar4);
    lVar1 = local_38;
    puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
    if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
       (_Var2 = Swift::_CocoaArrayWrapper::get_endIndex
                          ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
       puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var2 != 0)) {
      puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10001a4b0();
    }
    _swift_beginAccess(lVar1 + 0x60,auStack_50,1,0);
    uVar4 = *(undefined8 *)(lVar1 + 0x60);
    *(undefined **)(lVar1 + 0x60) = puVar3;
    _swift_release(lVar1);
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _TtC5Paste11AppDelegate::handoffController);
    _swift_retain(uVar4);
    FUN_1000da768(&local_38);
    _swift_release(uVar4);
    FUN_100af2c8c();
    _swift_release(local_38);
  }
  return 0;
}



/* Address: 0x1000b14a4 | FUN_1000b14a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b14a4(undefined8 param_1)

{
  undefined8 uVar1;
  URL UVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_170 [8];
  undefined8 local_168;
  uint local_15c;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long lStack_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 local_70;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar8 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_130);
  uVar3 = local_130;
  FUN_100af312c(&local_d0,param_1);
  _swift_release(uVar3);
  if (local_c8 == 0) {
    FUN_1001ac7f0();
    (**(code **)(lVar7 + 0x10))(puVar8,uVar3,UVar2.unknown);
    FUN_1000a1cb0(puVar8);
    (**(code **)(lVar7 + 8))(puVar8,UVar2.unknown);
  }
  else {
    local_158 = local_b8;
    local_148 = lStack_b0;
    local_15c = (uint)local_a8;
    puVar4 = &DAT_100c29af8;
    _swift_getKeyPath(&DAT_100c29af8);
    puVar5 = &DAT_100fa9938;
    FUN_1000037f0(&DAT_100fa9938,&DAT_100c26f10);
    _swift_initStackObject();
    FUN_1000da6e0(puVar4,puVar5);
    FUN_1000da768(&local_130);
    _swift_release(puVar4);
    local_140 = local_c0;
    FUN_1000f2fc0(local_d0,local_c8,local_c0);
    _swift_release(local_130);
    puVar4 = &DAT_100c29b30;
    _swift_getKeyPath(&DAT_100c29b30);
    puVar5 = puVar4;
    FUN_100009bac();
    FUN_1002cb7e0(&local_a0,puVar4,puVar5);
    local_150 = local_a0;
    local_130 = local_d0;
    local_128 = local_c8;
    _swift_bridgeObjectRetain(local_c8);
    puVar4 = &DAT_100fa8320;
    FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
    puVar6 = &local_130;
    FUN_1002cac1c(puVar6,puVar4);
    FUN_1001ac7f0();
    (**(code **)(lVar7 + 0x10))(puVar8,puVar6,UVar2.unknown);
    FUN_1000a1cb0(puVar8);
    (**(code **)(lVar7 + 8))(puVar8,UVar2.unknown);
    uVar1 = local_140;
    lVar7 = local_148;
    uVar3 = local_150;
    if (local_148 == 0) {
      _swift_release(local_70);
      _swift_release(local_80);
      _swift_release(uStack_90);
      _swift_release(local_98);
      _swift_release(local_150);
      _swift_bridgeObjectRelease(local_140);
      _swift_bridgeObjectRelease(local_c8);
    }
    else {
      local_168 = local_80;
      local_120 = local_158;
      local_118 = local_148;
      _swift_bridgeObjectRetain(local_148);
      puVar4 = &DAT_100fab9b8;
      FUN_1000037f0(&DAT_100fab9b8,&DAT_100c29b60);
      FUN_100357f60(&local_110,FUN_1000b2544,&local_130,puVar4);
      _swift_bridgeObjectRelease(lVar7);
      if (local_110 == 0) {
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(local_c8);
      }
      else {
        FUN_10000444c(local_108);
        FUN_1000b1e9c(local_110,local_108,local_15c & 1);
        FUN_100021e40(local_108);
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(local_c8);
        FUN_100021e40(local_108);
      }
      _swift_release(local_70);
      _swift_release(local_168);
      _swift_release(uStack_90);
      _swift_release(local_98);
      _swift_release(uVar3);
    }
  }
  return;
}



/* Address: 0x1000b188c | _TtC5Paste11AppDelegate::application:continueUserActivity:restorationHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool _TtC5Paste11AppDelegate::application_continueUserActivity_restorationHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  void *aBlock;
  uint uVar6;
  
  uVar6 = (uint)param_4;
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
              ("Paste/AppDelegate+Handoff.swift",0x1f,1,0x3e,UVar4.unknown,puVar3);
  }
  aBlock = __Block_copy((void *)param_5);
  FUN_1000b22e4();
  __Block_release(aBlock);
  _swift_release(pMVar2);
  return uVar6 & 1;
}



/* Address: 0x1000b19ac | FUN_1000b19ac */

void FUN_1000b19ac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  __int64 _Var3;
  long unaff_x20;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = &DAT_100c29ba0;
  _swift_getKeyPath();
  puVar2 = &DAT_100faa880;
  FUN_1000037f0(&DAT_100faa880,&DAT_100c29bd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  puVar1 = &DAT_100c29b70;
  _swift_getKeyPath();
  puVar2 = &DAT_100faa840;
  FUN_1000037f0(&DAT_100faa840,&DAT_100c22d38);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = &DAT_100c29af8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fa9938;
  FUN_1000037f0(&DAT_100fa9938,&DAT_100c26f10);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  puVar1 = &DAT_100c29b30;
  _swift_getKeyPath(&DAT_100c29b30);
  puVar2 = puVar1;
  FUN_100009bac();
  FUN_1002cb7e0(&local_58,puVar1,puVar2);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x28) = local_58;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0x38) = local_48;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_30;
  *(undefined8 *)(unaff_x20 + 0x48) = local_38;
  *(undefined8 *)(unaff_x20 + 0x58) = local_28;
  puVar1 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar1 = PTR___swiftEmptySetSingleton_100eae0e8, _Var3 != 0)) {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + 0x60) = puVar1;
  return;
}



/* Address: 0x1000b1b20 | FUN_1000b1b20 */

void FUN_1000b1b20(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,byte param_7)

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
              ("Paste/AppDelegate+Handoff.swift",0x1f,1,0x66,UVar4.unknown,puVar3);
  }
  if (param_3 == 0) {
    param_2 = 0;
    param_4 = 0;
    param_5 = 0;
    param_6 = 0;
    param_7 = 0;
  }
  else {
    if (param_6 == 0) {
      param_5 = 0;
    }
    param_7 = param_6 != 0 & param_7;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_6);
    _swift_bridgeObjectRetain(param_4);
  }
  _swift_release(pMVar2);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  *(byte *)(param_1 + 5) = param_7;
  return;
}



/* Address: 0x1000b1c44 | FUN_1000b1c44 */

void FUN_1000b1c44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1000b1b20(&local_50,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],
                *(undefined1 *)(param_2 + 5));
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x1000b1c94 | FUN_1000b1c94 */

void FUN_1000b1c94(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_60 = param_1[2];
  uStack_58 = (undefined1)param_1[3];
  uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
  local_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
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
              ("Paste/AppDelegate+Handoff.swift",0x1f,1,0x70,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    _swift_retain(uVar6);
    _swift_release(param_2);
    FUN_1000da768(&local_78);
    _swift_release(uVar6);
    FUN_100af2cd0(&local_70);
    _swift_release(pMVar2);
    _swift_release(local_78);
    return;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000b1dbc | FUN_1000b1dbc */

void FUN_1000b1dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000b1e44 | FUN_1000b1e44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000b1e44(void)

{
  return ZEXT816(0x100fab938);
}



/* Address: 0x1000b1e64 | FUN_1000b1e64 */

void FUN_1000b1e64(undefined8 *param_1,undefined8 param_2)

{
  FUN_1000b1e44();
  _swift_allocObject();
  FUN_1000b19ac();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000b1e9c | FUN_1000b1e9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b1e9c(undefined8 param_1,DispatchQoS param_2,undefined1 param_3)

{
  DispatchWorkItemFlags DVar1;
  OS_dispatch_queue *pOVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  DispatchWorkItemFlags qos;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar7 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pOVar2 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar2);
  puVar3 = &DAT_100eb42b8;
  _swift_allocObject(&DAT_100eb42b8,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &DAT_100eb42e0;
  _swift_allocObject(&DAT_100eb42e0,0x29,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined **)(puVar4 + 0x20) = param_2.unknown;
  puVar4[0x28] = param_3;
  local_70 = FUN_1000b25a4;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eb42f8;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_retain(puVar3);
  FUN_10000444c();
  Dispatch::DispatchQoS::get_unspecified(param_2);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fa82c0;
  FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100fa7850;
  FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
  puVar6 = &DAT_100fa82d0;
  FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar4,puVar6,DVar1.unknown,puVar5);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  puVar4 = local_68;
  _swift_release(puVar3);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1000b2114 | FUN_1000b2114 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_1000b2114(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long local_88 [3];
  long local_70;
  undefined **ppuStack_68;
  
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
              ("Paste/AppDelegate+Handoff.swift",0x1f,1,0x98,UVar3.unknown,puVar2);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + _TtC5Paste11AppDelegate::appCoordinator) + 0xd0);
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + _TtC5Paste20MainWindowController::pendingResignKeyCloseSuppression) =
           1;
    }
    puVar5 = &_OBJC_CLASS___NSViewController;
    _objc_allocWithZone();
    IVar6 = objc_stub::init((ID)puVar5);
    lVar7 = 0;
    FUN_1001ad0b8();
    lVar9 = lVar7;
    _swift_allocObject();
    *(undefined1 *)(lVar9 + 0x10) = 0;
    ppuStack_68 = &PTR_PTR_100ebe088;
    local_88[0] = lVar9;
    local_70 = lVar7;
    FUN_1001adc9c(0);
    _swift_allocObject();
    plVar8 = local_88;
    FUN_1001ad514();
    (**(code **)(*plVar8 + 0x68))(IVar6);
    FUN_1000b027c(param_2,param_3,param_4 & 1);
    _swift_release(pMVar1);
    _swift_release(plVar8);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar1);
  return pMVar1;
}



/* Address: 0x1000b22e4 | FUN_1000b22e4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000b22e4(ID param_1)

{
  bool bVar1;
  URL UVar2;
  String *pSVar3;
  _StringGuts _Var4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  String SVar7;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_68;
  undefined1 local_60 [8];
  undefined8 uStack_58;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  objc_stub::activityType(param_1);
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var4.unknown = SVar7.bridgeObject;
  pSVar3 = (String *)0x0;
  FUN_100af3770();
  if (SVar7 == *pSVar3) {
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar7.str,_Var4,(_StringComparisonResult)(__int8)pSVar3->str);
    _swift_bridgeObjectRelease(_Var4.unknown);
    if (!bVar1) {
      return 0;
    }
  }
  FUN_1000da768(&local_b0);
  FUN_100af2ff8(&local_e0,param_1);
  _swift_release(local_b0);
  if (local_d8 == 0) {
    FUN_1001ac7f0();
    (**(code **)(lVar6 + 0x10))(lVar5,local_b0,UVar2.unknown);
    FUN_1000a1cb0(lVar5);
    (**(code **)(lVar6 + 8))(lVar5,UVar2.unknown);
  }
  else {
    local_b0 = local_e0;
    lStack_a8 = local_d8;
    local_a0 = local_d0;
    uStack_8f = (undefined7)uStack_bf;
    uStack_88 = (undefined1)((ulong)uStack_bf >> 0x38);
    uStack_90 = uStack_c0;
    FUN_1000b14a4(&local_b0);
    lStack_78 = lStack_a8;
    local_80 = local_b0;
    FUN_10000caac(&local_80);
    local_68 = local_a0;
    FUN_100005808(&local_68,&DAT_100fa9400,&DAT_100c263c0);
    uStack_58 = CONCAT71(uStack_8f,uStack_90);
    FUN_100005808(local_60,&DAT_100fa8170,&DAT_100c24ca0);
  }
  return 1;
}



/* Address: 0x1000b24bc | FUN_1000b24bc */

void FUN_1000b24bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1000f318c();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000b24e0 | FUN_1000b24e0 */

void FUN_1000b24e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  puVar1 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  FUN_1002ccc34(param_1,0xd000000000000016,0x8000000100d8e530,&local_30,puVar1);
  return;
}



/* Address: 0x1000b2544 | FUN_1000b2544 */

void FUN_1000b2544(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000aadcc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000b254c | FUN_1000b254c */

void FUN_1000b254c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000b2570 | FUN_1000b2570 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b2570(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100021e40(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000b25a4 | FUN_1000b25a4 */

void FUN_1000b25a4(void)

{
  long unaff_x20;
  
  FUN_1000b2114(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}


