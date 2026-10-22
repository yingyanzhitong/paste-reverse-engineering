/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003a2730 | FUN_1003a2730 */

void FUN_1003a2730(void)

{
  long unaff_x20;
  
  FUN_100393e78(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003a2738 | thunk_FUN_1003a2408 */

void thunk_FUN_1003a2408(void)

{
  FUN_1003a2408();
  return;
}



/* Address: 0x1003a273c | thunk_FUN_1003a2320 */

void thunk_FUN_1003a2320(void)

{
  FUN_1003a2320();
  return;
}



/* Address: 0x1003a2740 | thunk_FUN_1003a2320 */

void thunk_FUN_1003a2320(void)

{
  FUN_1003a2320();
  return;
}



/* Address: 0x1003a2744 | thunk_FUN_1003a2320 */

void thunk_FUN_1003a2320(void)

{
  FUN_1003a2320();
  return;
}



/* Address: 0x1003a2748 | thunk_FUN_1003a2320 */

void thunk_FUN_1003a2320(void)

{
  FUN_1003a2320();
  return;
}



/* Address: 0x1003a274c | thunk_FUN_100398580 */

void thunk_FUN_100398580(void)

{
  FUN_100398580();
  return;
}



/* Address: 0x1003a2750 | thunk_FUN_1003a2334 */

void thunk_FUN_1003a2334(void)

{
  FUN_1003a2334();
  return;
}



/* Address: 0x1003a2754 | thunk_FUN_1003a2334 */

void thunk_FUN_1003a2334(void)

{
  FUN_1003a2334();
  return;
}



/* Address: 0x1003a2758 | thunk_FUN_1003a2334 */

void thunk_FUN_1003a2334(void)

{
  FUN_1003a2334();
  return;
}



/* Address: 0x1003a275c | thunk_FUN_1003a2334 */

void thunk_FUN_1003a2334(void)

{
  FUN_1003a2334();
  return;
}



/* Address: 0x1003a2760 | thunk_FUN_1003a2480 */

void thunk_FUN_1003a2480(void)

{
  FUN_1003a2480();
  return;
}



/* Address: 0x1003a2764 | thunk_FUN_1003a23dc */

void thunk_FUN_1003a23dc(void)

{
  FUN_1003a23dc();
  return;
}



/* Address: 0x1003a2768 | thunk_FUN_1003a23dc */

void thunk_FUN_1003a23dc(void)

{
  FUN_1003a23dc();
  return;
}



/* Address: 0x1003a276c | thunk_FUN_1003a23dc */

void thunk_FUN_1003a23dc(void)

{
  FUN_1003a23dc();
  return;
}



/* Address: 0x1003a2770 | thunk_FUN_1003a23dc */

void thunk_FUN_1003a23dc(void)

{
  FUN_1003a23dc();
  return;
}



/* Address: 0x1003a2774 | FUN_1003a2774 */

void FUN_1003a2774(void)

{
  FUN_1003a27ec(FUN_1001bbe08);
  return;
}



/* Address: 0x1003a2780 | FUN_1003a2780 */

void FUN_1003a2780(void)

{
  FUN_1003a27ec(FUN_1001bbc88);
  return;
}



/* Address: 0x1003a278c | FUN_1003a278c */

void FUN_1003a278c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003a2934(param_1,param_2,FUN_1001bbe08);
  return;
}



/* Address: 0x1003a2798 | FUN_1003a2798 */

void FUN_1003a2798(undefined8 param_1,undefined8 param_2)

{
  FUN_1003a2934(param_1,param_2,FUN_1001bbc88);
  return;
}



/* Address: 0x1003a27a4 | FUN_1003a27a4 */

void FUN_1003a27a4(void)

{
  FUN_1003a27ec(FUN_1001bd308);
  return;
}



/* Address: 0x1003a27b0 | FUN_1003a27b0 */

void FUN_1003a27b0(void)

{
  FUN_1003a27ec(FUN_1001bd188);
  return;
}



/* Address: 0x1003a27bc | FUN_1003a27bc */

void FUN_1003a27bc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003a2934(param_1,param_2,FUN_1001bd308);
  return;
}



/* Address: 0x1003a27c8 | FUN_1003a27c8 */

void FUN_1003a27c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1003a2934(param_1,param_2,FUN_1001bd188);
  return;
}



/* Address: 0x1003a27d4 | FUN_1003a27d4 */

void FUN_1003a27d4(void)

{
  FUN_1003a27ec(FUN_1001bd608);
  return;
}



/* Address: 0x1003a27e0 | FUN_1003a27e0 */

void FUN_1003a27e0(void)

{
  FUN_1003a27ec(FUN_1001bd488);
  return;
}



/* Address: 0x1003a27ec | FUN_1003a27ec */

String FUN_1003a27ec(code *param_1)

{
  LocalizedStringResource LVar1;
  long extraout_x8;
  String SVar2;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  (*param_1)(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar2 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  return SVar2;
}



/* Address: 0x1003a2850 | thunk_FUN_1003a2854 */

void thunk_FUN_1003a2854(void)

{
  FUN_1003a2854();
  return;
}



/* Address: 0x1003a2854 | FUN_1003a2854 */

void FUN_1003a2854(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2288 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c440b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c440b0,&DAT_100ece138);
  DAT_100fc2288 = pTVar1;
  return;
}



/* Address: 0x1003a2894 | thunk_FUN_1003a2898 */

void thunk_FUN_1003a2898(void)

{
  FUN_1003a2898();
  return;
}



/* Address: 0x1003a2898 | FUN_1003a2898 */

void FUN_1003a2898(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c440f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c440f0,&DAT_100ece158);
  DAT_100fc2290 = pTVar1;
  return;
}



/* Address: 0x1003a28d8 | thunk_FUN_1003a28dc */

void thunk_FUN_1003a28dc(void)

{
  FUN_1003a28dc();
  return;
}



/* Address: 0x1003a28dc | FUN_1003a28dc */

void FUN_1003a28dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2298 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c44130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c44130,&DAT_100ece178);
  DAT_100fc2298 = pTVar1;
  return;
}



/* Address: 0x1003a291c | FUN_1003a291c */

void FUN_1003a291c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003a2934(param_1,param_2,FUN_1001bd608);
  return;
}



/* Address: 0x1003a2928 | FUN_1003a2928 */

void FUN_1003a2928(undefined8 param_1,undefined8 param_2)

{
  FUN_1003a2934(param_1,param_2,FUN_1001bd488);
  return;
}



/* Address: 0x1003a2934 | FUN_1003a2934 */

String FUN_1003a2934(undefined8 param_1,undefined8 param_2,code *param_3)

{
  LocalizedStringResource LVar1;
  long extraout_x8;
  String SVar2;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  (*param_3)(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar2 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  return SVar2;
}



/* Address: 0x1003a2998 | FUN_1003a2998 */

undefined1  [16] FUN_1003a2998(void)

{
  return ZEXT816(0x100ece138);
}



/* Address: 0x1003a29a8 | FUN_1003a29a8 */

undefined1  [16] FUN_1003a29a8(void)

{
  return ZEXT816(0x100ece158);
}



/* Address: 0x1003a29b8 | FUN_1003a29b8 */

undefined1  [16] FUN_1003a29b8(void)

{
  return ZEXT816(0x100ece178);
}



/* Address: 0x1003a29c8 | FUN_1003a29c8 */

undefined1  [16] FUN_1003a29c8(void)

{
  return ZEXT816(0x100ece1f0);
}



/* Address: 0x1003a29d8 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::LocalizedError::$get_failureReason */

void (extension_Foundation)::Foundation::LocalizedError::_get_failureReason(void)

{
  _get_failureReason();
  return;
}



/* Address: 0x1003a29dc | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::LocalizedError::$get_helpAnchor */

void (extension_Foundation)::Foundation::LocalizedError::_get_helpAnchor(void)

{
  _get_helpAnchor();
  return;
}



/* Address: 0x1003a29e0 | FUN_1003a29e0 */

void FUN_1003a29e0(undefined8 param_1)

{
  FUN_1003a2a08(param_1,FUN_100329880,FUN_10032a700);
  return;
}



/* Address: 0x1003a29f4 | FUN_1003a29f4 */

void FUN_1003a29f4(undefined8 param_1)

{
  FUN_1003a2a08(param_1,FUN_100329890,FUN_10032a850);
  return;
}



/* Address: 0x1003a2a08 | FUN_1003a2a08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003a2a08(undefined *param_1,code *param_2,code *param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer self;
  ID self_00;
  ID self_01;
  ID IVar3;
  ID IVar4;
  
  self.unknown = param_1;
  (*param_2)();
  objc_stub::FUN_100c0d7a0((ID)self.unknown,1);
  objc_stub::FUN_100c0c2e0((ID)self.unknown,0);
  (*param_3)(self.unknown,param_1);
  if ((ulong)self.unknown >> 0x3e == 0) {
    IVar3 = *(ID *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var1.unknown = self.unknown;
    }
    IVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar3 != 0) {
    if ((long)IVar3 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003a2b14);
      (*pcVar2)();
    }
    IVar4 = 0;
    do {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        self_01 = *(ID *)(self.unknown + IVar4 * 8 + 0x20);
      }
      else {
        self_01 = IVar4;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar4,self);
      }
      IVar4 = IVar4 + 1;
      self_00 = objc_stub::managedObjectContext(self_01);
      objc_stub::deleteObject_(self_00,self_01);
    } while (IVar3 != IVar4);
  }
  _swift_bridgeObjectRelease(self.unknown);
  return 0;
}



/* Address: 0x1003a2b14 | FUN_1003a2b14 */

void FUN_1003a2b14(void)

{
  undefined *puVar1;
  ulong uVar2;
  Configuration_conflict CVar3;
  ulong uVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  CVar3 = CloudKit::CKSyncEngine::Configuration::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = CVar3.unknown;
  lVar8 = *(long *)(CVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  puVar1 = &DAT_100fc22a0;
  FUN_1000037f0(&DAT_100fc22a0,&DAT_100c442f8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  lVar8 = 0;
  FUN_1003b2fc0();
  *(long *)(unaff_x22 + 0x80) = lVar8;
  uVar2 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x98) = pMVar5;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0xa0) = pMVar5;
  puVar6 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0xa8) = puVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1003a2c80,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1003a2c80 | FUN_1003a2c80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a2c80(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  Published *pPVar3;
  Configuration_conflict CVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  PendingDatabaseChange PVar8;
  int iVar9;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar10;
  Serialization SVar11;
  ID IVar12;
  CKDatabase *pCVar13;
  ID self;
  CKSyncEngine *pCVar14;
  CKSyncEngine *pCVar15;
  State *pSVar16;
  undefined7 extraout_var;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar17;
  undefined *puVar18;
  long *plVar19;
  undefined *puVar20;
  TaskPriority TVar21;
  MainActor *pMVar22;
  _StringGuts _Var23;
  Configuration *this_00;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  Configuration *this_01;
  Configuration *pCVar30;
  undefined8 uVar31;
  long lVar32;
  long unaff_x22;
  undefined8 uVar33;
  long lVar34;
  MainActor *pMVar35;
  undefined8 uVar36;
  ulong uVar37;
  MainActor *this_02;
  String SVar38;
  String SVar39;
  String SVar40;
  String zoneName;
  String SVar41;
  
  lVar34 = *(long *)(unaff_x22 + 0x38) + _TtC9PasteCore10SyncEngine::persistentStack;
  lVar27 = *(long *)(lVar34 + 0x18);
  lVar5 = *(long *)(lVar34 + 0x20);
  FUN_100004640(lVar34,lVar27);
  (**(code **)(lVar5 + 8))(lVar27,lVar5);
  if (lVar27 == 0) {
    pPVar3 = *(Published **)(unaff_x22 + 0x88);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_storeEnumTagMultiPayload(uVar29,*(undefined8 *)(unaff_x22 + 0x80),3);
    puVar10 = &DAT_100c44300;
    _swift_getKeyPath(&DAT_100c44300);
    puVar18 = &DAT_100c44328;
    _swift_getKeyPath(&DAT_100c44328);
    FUN_10006313c(uVar29,pPVar3);
    _swift_retain(uVar31);
    Combine::Published::_set_subscript(pPVar3,pPVar3,uVar31,puVar10,puVar18);
    FUN_1003b2054();
    FUN_1000629fc(uVar29);
    puVar10 = &DAT_100c44348;
    _swift_getKeyPath(&DAT_100c44348);
    puVar18 = &DAT_100c44370;
    _swift_getKeyPath(&DAT_100c44370);
    Combine::Published::_get_subscript(unaff_x22 + 0xb8,uVar31,puVar10,puVar18);
    _swift_release(puVar18);
    _swift_release(puVar10);
    if ((*(byte *)(unaff_x22 + 0xb8) & 1) == 0) {
      uVar29 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar31 = *(undefined8 *)(unaff_x22 + 0xa8);
      plVar19 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xb0) = plVar19;
      *plVar19 = unaff_x22;
      plVar19[1] = (long)FUN_1003a36e0;
      FUN_1003b29d4(uVar29,uVar31);
      return;
    }
    _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
    uVar29 = *(undefined8 *)(unaff_x22 + 0x38);
    puVar10 = &DAT_100c44348;
    _swift_getKeyPath(&DAT_100c44348);
    puVar18 = &DAT_100c44370;
    _swift_getKeyPath(&DAT_100c44370);
    Combine::Published::_get_subscript(unaff_x22 + 0xba,uVar29,puVar10,puVar18);
    _swift_release(puVar18);
    _swift_release(puVar10);
    if (*(char *)(unaff_x22 + 0xba) != '\x01') {
      pPVar3 = *(Published **)(unaff_x22 + 0x88);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x38);
      _swift_storeEnumTagMultiPayload(uVar29,*(undefined8 *)(unaff_x22 + 0x80),5);
      puVar10 = &DAT_100c44300;
      puVar20 = puVar10;
      _swift_getKeyPath(&DAT_100c44300);
      puVar18 = &DAT_100c44328;
      _swift_getKeyPath(&DAT_100c44328);
      FUN_10006313c(uVar29,pPVar3);
      _swift_retain(uVar31);
      Combine::Published::_set_subscript(pPVar3,pPVar3,uVar31,puVar20,puVar18);
      FUN_1003b2054();
      FUN_1000629fc(uVar29);
      FUN_1003a2854();
      _swift_allocError(&DAT_100ece138,uVar29,0,0);
      _swift_willThrow();
      uVar29 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar36 = *(undefined8 *)(unaff_x22 + 0x60);
      pPVar3 = *(Published **)(unaff_x22 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
      _swift_storeEnumTagMultiPayload(uVar25,*(undefined8 *)(unaff_x22 + 0x80),5);
      _swift_getKeyPath(&DAT_100c44300);
      puVar18 = &DAT_100c44328;
      _swift_getKeyPath(&DAT_100c44328);
      FUN_10006313c(uVar25,uVar29);
      _swift_retain(pPVar3);
      Combine::Published::_set_subscript(pPVar3,uVar29,pPVar3,puVar10,puVar18);
      FUN_1003b2054();
      FUN_1000629fc(uVar25);
      _swift_willThrow();
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar29);
      _swift_task_dealloc(uVar31);
      _swift_task_dealloc(uVar33);
      _swift_task_dealloc(uVar24);
      _swift_task_dealloc(uVar36);
      _swift_task_dealloc(uVar28);
      _swift_task_dealloc(uVar6);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1003a2d44;
    }
    lVar27 = *(long *)(unaff_x22 + 0x38);
    puVar10 = &DAT_100c44390;
    _swift_getKeyPath(&DAT_100c44390);
    puVar18 = &DAT_100c443b8;
    _swift_getKeyPath();
    *(undefined1 *)(unaff_x22 + 0xbb) = 1;
    _swift_retain(lVar27);
    FUN_1002cb5a0(unaff_x22 + 0xbb,lVar27,puVar10);
    FUN_1003b1940();
    lVar34 = _TtC9PasteCore10SyncEngine::privateSyncEngine;
    if (*(long *)(lVar27 + _TtC9PasteCore10SyncEngine::privateSyncEngine) == 0) {
      uVar29 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x78);
      CVar4.unknown = *(undefined **)(unaff_x22 + 0x60);
      pCVar30 = *(Configuration **)(unaff_x22 + 0x68);
      this_00 = *(Configuration **)(unaff_x22 + 0x58);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x48);
      lVar5 = *(long *)(unaff_x22 + 0x50);
      lVar32 = *(long *)(unaff_x22 + 0x38);
      FUN_1003b1290(uVar24,2);
      SVar11 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
      uVar28 = uVar24;
      (**(code **)(*(long *)(SVar11.unknown + -8) + 0x30))(uVar24,1);
      iVar9 = (int)uVar28;
      FUN_1000d468c(unaff_x22 + 0x10);
      puVar10 = *(undefined **)(unaff_x22 + 0x28);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x30);
      _Var23.unknown = puVar10;
      FUN_100004640(unaff_x22 + 0x10);
      Swift::_StringGuts::grow(0x2a,_Var23);
      _swift_bridgeObjectRelease(0xe000000000000000);
      pcVar1 = (char *)0x65736c6166;
      if (iVar9 != 1) {
        pcVar1 = (char *)0x65757274;
      }
      puVar2 = &DAT_e500000000000000;
      if (iVar9 != 1) {
        puVar2 = &DAT_e400000000000000;
      }
      SVar38.bridgeObject = puVar2;
      SVar38.str = pcVar1;
      SVar41.bridgeObject = puVar18;
      SVar41.str = SVar11.unknown;
      Swift::String::append(SVar38,SVar41);
      _swift_bridgeObjectRelease(puVar2);
      FUN_1000d4db8(0xd000000000000028,0x8000000100da4a60,puVar10,uVar28);
      _swift_bridgeObjectRelease(0x8000000100da4a60);
      FUN_100004594(unaff_x22 + 0x10);
      IVar12 = *(ID *)(lVar32 + _TtC9PasteCore10SyncEngine::container);
      pCVar13 = (CKDatabase *)objc_stub::privateCloudDatabase(IVar12);
      FUN_1003a9b84(uVar24,uVar29);
      FUN_100003a00(&DAT_100fc22a8,FUN_1003b2628,&TargetProtocolConformanceDescriptor_100c43fe8);
      _swift_unknownObjectRetain(lVar32);
      CloudKit::CKSyncEngine::Configuration::_init(pCVar13);
      self = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      NSBundle::bundlePath(self);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar39.bridgeObject = &DAT_e600000000000000;
      SVar39.str = (char *)0x78657070612e;
      bVar7 = Swift::String::hasSuffix(SVar39,SVar38);
      _swift_bridgeObjectRelease(SVar38.bridgeObject);
      this_01 = pCVar30;
      CloudKit::CKSyncEngine::Configuration::set_automaticallySync
                (pCVar30,(bool)((bVar7 ^ 0xffU) & 1));
      CloudKit::CKSyncEngine::Configuration::_set_subscriptionID(this_01);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 0x10);
      (*UNRECOVERED_JUMPTABLE)(CVar4.unknown,pCVar30,uVar31);
      pCVar14 = CloudKit::CKSyncEngine::typeMetadataAccessor();
      pCVar15 = pCVar14;
      _swift_allocObject(pCVar14,*(undefined4 *)(pCVar14 + 0x30),*(undefined2 *)(pCVar14 + 0x34));
      pCVar15 = CloudKit::CKSyncEngine::init(pCVar15,CVar4);
      uVar24 = *(undefined8 *)(lVar27 + lVar34);
      *(CKSyncEngine **)(lVar27 + lVar34) = pCVar15;
      _swift_release(uVar24);
      pCVar13 = (CKDatabase *)objc_stub::sharedCloudDatabase(IVar12);
      FUN_1003b1290(uVar29,3);
      _swift_unknownObjectRetain(lVar32);
      CloudKit::CKSyncEngine::Configuration::_init(pCVar13);
      IVar12 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
      NSBundle::bundlePath(IVar12);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar40.bridgeObject = &DAT_e600000000000000;
      SVar40.str = (char *)0x78657070612e;
      bVar7 = Swift::String::hasSuffix(SVar40,SVar38);
      _swift_bridgeObjectRelease(SVar38.bridgeObject);
      pCVar30 = this_00;
      CloudKit::CKSyncEngine::Configuration::set_automaticallySync
                (this_00,(bool)((bVar7 ^ 0xffU) & 1));
      CloudKit::CKSyncEngine::Configuration::_set_subscriptionID(pCVar30);
      (*UNRECOVERED_JUMPTABLE)(CVar4.unknown,this_00,uVar31);
      _swift_allocObject(pCVar14,*(undefined4 *)(pCVar14 + 0x30),*(undefined2 *)(pCVar14 + 0x34));
      pCVar15 = CloudKit::CKSyncEngine::init(pCVar14,CVar4);
      uVar29 = *(undefined8 *)(lVar32 + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
      *(CKSyncEngine **)(lVar32 + _TtC9PasteCore10SyncEngine::sharedSyncEngine) = pCVar15;
      _swift_release(uVar29);
      if (iVar9 == 1) {
        pCVar15 = *(CKSyncEngine **)(lVar27 + lVar34);
        if (pCVar15 != (CKSyncEngine *)0x0) {
          pCVar14 = pCVar15;
          _swift_retain();
          pSVar16 = CloudKit::CKSyncEngine::get_state(pCVar15,pCVar14);
          _swift_release(pCVar15);
          puVar10 = &DAT_100fc1b80;
          FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
          PVar8 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
          lVar34 = *(long *)(CONCAT71(extraout_var,PVar8.value) + -8);
          uVar26 = (ulong)*(byte *)(lVar34 + 0x50);
          uVar37 = uVar26 + 0x20 & (uVar26 ^ 0xffffffffffffffff);
          _swift_allocObject(puVar10,uVar37 + *(long *)(lVar34 + 0x48),uVar26 | 7);
          *(undefined8 *)(puVar10 + 0x18) = 2;
          *(undefined8 *)(puVar10 + 0x10) = 1;
          this = (CKRecordZoneID *)0x0;
          FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
          SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          zoneName.bridgeObject = &DAT_e500000000000000;
          zoneName.str = (char *)0x6574736150;
          pCVar17 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                              (this,zoneName,SVar38);
          puVar18 = &_OBJC_CLASS___CKRecordZone;
          _objc_allocWithZone();
          IVar12 = objc_stub::initWithZoneID_((ID)puVar18,pCVar17);
          *(ID *)(puVar10 + uVar37) = IVar12;
          (**(code **)(lVar34 + 0x68))
                    (puVar10 + uVar37,
                     *(undefined4 *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_PendingDatabaseChange_saveZone_CloudKit_CKSyncEngine_PendingDatabaseChange_Type___>____C_CKRecordZone___>_CloudKit_CKSyncEngine_PendingDatabaseChange_100ea9290
                     ,CONCAT71(extraout_var,PVar8.value));
          CloudKit::CKSyncEngine::State::add(pSVar16,puVar10);
          _swift_release(puVar10);
          _swift_release(pSVar16);
        }
        lVar34 = *(long *)(unaff_x22 + 0x38);
        IVar12 = *(ID *)(lVar34 + _TtC9PasteCore10SyncEngine::syncLock);
        objc_stub::lock(IVar12);
        *(undefined1 *)(lVar34 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 1;
        objc_stub::unlock(IVar12);
      }
      else {
        FUN_1003a4068();
      }
      uVar28 = *(undefined8 *)(unaff_x22 + 0xa8);
      this_02 = *(MainActor **)(unaff_x22 + 0x98);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar33 = *(undefined8 *)(unaff_x22 + 0x68);
      lVar34 = *(long *)(unaff_x22 + 0x50);
      uVar31 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x48);
      pMVar35 = *(MainActor **)(unaff_x22 + 0x38);
      FUN_1003a4478();
      TVar21 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar21.unknown + -8) + 0x38))(uVar29,1,1,TVar21.unknown);
      pMVar22 = pMVar35;
      _swift_retain();
      pMVar22 = Swift::MainActor::get_shared(this_02,pMVar22);
      puVar10 = &DAT_100ece270;
      _swift_allocObject(&DAT_100ece270,0x28,7);
      *(MainActor **)(puVar10 + 0x10) = pMVar22;
      *(undefined8 *)(puVar10 + 0x18) = uVar28;
      *(MainActor **)(puVar10 + 0x20) = pMVar35;
      uVar28 = 0;
      FUN_100364f4c(0,0,uVar29,&DAT_100c443e0,puVar10);
      uVar29 = *(undefined8 *)(pMVar35 + _TtC9PasteCore10SyncEngine::contextChangesTask);
      *(undefined8 *)(pMVar35 + _TtC9PasteCore10SyncEngine::contextChangesTask) = uVar28;
      _swift_release(uVar29);
      FUN_1003a4c78(0,0);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar34 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar31,uVar24);
      (*UNRECOVERED_JUMPTABLE)(uVar33,uVar24);
      FUN_100005808(uVar25,&DAT_100fc22a0,&DAT_100c442f8);
    }
  }
  else {
    uVar29 = *(undefined8 *)(unaff_x22 + 0xa0);
    _swift_errorRelease();
    _swift_release(uVar29);
  }
  uVar29 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar36);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1003a2d44:
                    /* WARNING: Could not recover jumptable at 0x0001003a2d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1003a36e0 | FUN_1003a36e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a36e0(Published *param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  Configuration_conflict CVar3;
  long lVar4;
  Published *pPVar5;
  Configuration *this;
  undefined8 uVar6;
  bool bVar7;
  PendingDatabaseChange PVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  Serialization SVar13;
  undefined8 uVar14;
  ID IVar15;
  CKDatabase *pCVar16;
  ID self;
  CKSyncEngine *pCVar17;
  CKSyncEngine *pCVar18;
  State *pSVar19;
  undefined7 extraout_var;
  CKRecordZoneID *this_00;
  CKRecordZoneID *pCVar20;
  undefined *puVar21;
  code *UNRECOVERED_JUMPTABLE;
  TaskPriority TVar22;
  MainActor *pMVar23;
  _StringGuts _Var24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  long lVar29;
  long unaff_x20;
  Configuration *this_01;
  Configuration *pCVar30;
  long lVar31;
  undefined8 uVar32;
  long *unaff_x22;
  long lVar33;
  MainActor *this_02;
  long lVar34;
  ulong uVar35;
  MainActor *pMVar36;
  undefined8 uVar37;
  long lVar38;
  undefined8 uVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String zoneName;
  String SVar43;
  
  lVar38 = *unaff_x22;
  lVar33 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar38 + 0xb0));
  if (unaff_x20 == 0) {
    uVar39 = *(undefined8 *)(lVar38 + 0x38);
    _swift_release(*(undefined8 *)(lVar38 + 0xa0));
    puVar12 = &DAT_100c44348;
    puVar10 = puVar12;
    _swift_getKeyPath(&DAT_100c44348);
    puVar21 = &DAT_100c44370;
    puVar11 = puVar21;
    _swift_getKeyPath(&DAT_100c44370);
    *(byte *)(lVar38 + 0xb9) = (byte)param_1 & 1;
    _swift_retain(uVar39);
    Combine::Published::_set_subscript(param_1,(byte *)(lVar38 + 0xb9),uVar39,puVar10,puVar11);
    FUN_1003b15e8();
    uVar39 = *(undefined8 *)(lVar38 + 0x38);
    _swift_getKeyPath(&DAT_100c44348);
    _swift_getKeyPath(&DAT_100c44370);
    Combine::Published::_get_subscript(lVar38 + 0xba,uVar39,puVar12,puVar21);
    _swift_release(puVar21);
    _swift_release(puVar12);
    if ((*(byte *)(lVar38 + 0xba) & 1) != 0) {
      lVar29 = *(long *)(lVar38 + 0x38);
      puVar12 = &DAT_100c44390;
      _swift_getKeyPath(&DAT_100c44390);
      puVar21 = &DAT_100c443b8;
      _swift_getKeyPath();
      *(undefined1 *)(lVar38 + 0xbb) = 1;
      _swift_retain(lVar29);
      FUN_1002cb5a0(lVar38 + 0xbb,lVar29,puVar12);
      FUN_1003b1940();
      lVar34 = _TtC9PasteCore10SyncEngine::privateSyncEngine;
      if (*(long *)(lVar29 + _TtC9PasteCore10SyncEngine::privateSyncEngine) == 0) {
        uVar39 = *(undefined8 *)(lVar38 + 0x70);
        uVar26 = *(undefined8 *)(lVar38 + 0x78);
        CVar3.unknown = *(undefined **)(lVar38 + 0x60);
        pCVar30 = *(Configuration **)(lVar38 + 0x68);
        lVar4 = *(long *)(lVar38 + 0x50);
        this = *(Configuration **)(lVar38 + 0x58);
        uVar25 = *(undefined8 *)(lVar38 + 0x48);
        lVar31 = *(long *)(lVar38 + 0x38);
        FUN_1003b1290(uVar26,2);
        SVar13 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
        uVar14 = uVar26;
        (**(code **)(*(long *)(SVar13.unknown + -8) + 0x30))(uVar26,1);
        iVar9 = (int)uVar14;
        FUN_1000d468c(lVar38 + 0x10);
        puVar12 = *(undefined **)(lVar38 + 0x28);
        uVar14 = *(undefined8 *)(lVar38 + 0x30);
        _Var24.unknown = puVar12;
        FUN_100004640(lVar38 + 0x10);
        Swift::_StringGuts::grow(0x2a,_Var24);
        _swift_bridgeObjectRelease(0xe000000000000000);
        pcVar1 = (char *)0x65736c6166;
        if (iVar9 != 1) {
          pcVar1 = (char *)0x65757274;
        }
        puVar2 = &DAT_e500000000000000;
        if (iVar9 != 1) {
          puVar2 = &DAT_e400000000000000;
        }
        SVar40.bridgeObject = puVar2;
        SVar40.str = pcVar1;
        SVar43.bridgeObject = puVar21;
        SVar43.str = SVar13.unknown;
        Swift::String::append(SVar40,SVar43);
        _swift_bridgeObjectRelease(puVar2);
        FUN_1000d4db8(0xd000000000000028,0x8000000100da4a60,puVar12,uVar14);
        _swift_bridgeObjectRelease(0x8000000100da4a60);
        FUN_100004594(lVar38 + 0x10);
        IVar15 = *(ID *)(lVar31 + _TtC9PasteCore10SyncEngine::container);
        pCVar16 = (CKDatabase *)objc_stub::privateCloudDatabase(IVar15);
        FUN_1003a9b84(uVar26,uVar39);
        FUN_100003a00(&DAT_100fc22a8,FUN_1003b2628,&TargetProtocolConformanceDescriptor_100c43fe8);
        _swift_unknownObjectRetain(lVar31);
        CloudKit::CKSyncEngine::Configuration::_init(pCVar16);
        self = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
        NSBundle::bundlePath(self);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar41.bridgeObject = &DAT_e600000000000000;
        SVar41.str = (char *)0x78657070612e;
        bVar7 = Swift::String::hasSuffix(SVar41,SVar40);
        _swift_bridgeObjectRelease(SVar40.bridgeObject);
        this_01 = pCVar30;
        CloudKit::CKSyncEngine::Configuration::set_automaticallySync
                  (pCVar30,(bool)((bVar7 ^ 0xffU) & 1));
        CloudKit::CKSyncEngine::Configuration::_set_subscriptionID(this_01);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 0x10);
        (*UNRECOVERED_JUMPTABLE)(CVar3.unknown,pCVar30,uVar25);
        pCVar17 = CloudKit::CKSyncEngine::typeMetadataAccessor();
        pCVar18 = pCVar17;
        _swift_allocObject(pCVar17,*(undefined4 *)(pCVar17 + 0x30),*(undefined2 *)(pCVar17 + 0x34));
        pCVar18 = CloudKit::CKSyncEngine::init(pCVar18,CVar3);
        uVar26 = *(undefined8 *)(lVar29 + lVar34);
        *(CKSyncEngine **)(lVar29 + lVar34) = pCVar18;
        _swift_release(uVar26);
        pCVar16 = (CKDatabase *)objc_stub::sharedCloudDatabase(IVar15);
        FUN_1003b1290(uVar39,3);
        _swift_unknownObjectRetain(lVar31);
        CloudKit::CKSyncEngine::Configuration::_init(pCVar16);
        IVar15 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
        NSBundle::bundlePath(IVar15);
        SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar42.bridgeObject = &DAT_e600000000000000;
        SVar42.str = (char *)0x78657070612e;
        bVar7 = Swift::String::hasSuffix(SVar42,SVar40);
        _swift_bridgeObjectRelease(SVar40.bridgeObject);
        pCVar30 = this;
        CloudKit::CKSyncEngine::Configuration::set_automaticallySync
                  (this,(bool)((bVar7 ^ 0xffU) & 1));
        CloudKit::CKSyncEngine::Configuration::_set_subscriptionID(pCVar30);
        (*UNRECOVERED_JUMPTABLE)(CVar3.unknown,this,uVar25);
        _swift_allocObject(pCVar17,*(undefined4 *)(pCVar17 + 0x30),*(undefined2 *)(pCVar17 + 0x34));
        pCVar18 = CloudKit::CKSyncEngine::init(pCVar17,CVar3);
        uVar39 = *(undefined8 *)(lVar31 + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
        *(CKSyncEngine **)(lVar31 + _TtC9PasteCore10SyncEngine::sharedSyncEngine) = pCVar18;
        _swift_release(uVar39);
        if (iVar9 == 1) {
          pCVar18 = *(CKSyncEngine **)(lVar29 + lVar34);
          if (pCVar18 != (CKSyncEngine *)0x0) {
            pCVar17 = pCVar18;
            _swift_retain();
            pSVar19 = CloudKit::CKSyncEngine::get_state(pCVar18,pCVar17);
            _swift_release(pCVar18);
            puVar12 = &DAT_100fc1b80;
            FUN_1000037f0(&DAT_100fc1b80,&DAT_100c43be0);
            PVar8 = CloudKit::CKSyncEngine::PendingDatabaseChange::typeMetadataAccessor();
            lVar34 = *(long *)(CONCAT71(extraout_var,PVar8.value) + -8);
            uVar28 = (ulong)*(byte *)(lVar34 + 0x50);
            uVar35 = uVar28 + 0x20 & (uVar28 ^ 0xffffffffffffffff);
            _swift_allocObject(puVar12,uVar35 + *(long *)(lVar34 + 0x48),uVar28 | 7);
            *(undefined8 *)(puVar12 + 0x18) = 2;
            *(undefined8 *)(puVar12 + 0x10) = 1;
            this_00 = (CKRecordZoneID *)0x0;
            FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
            SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            zoneName.bridgeObject = &DAT_e500000000000000;
            zoneName.str = (char *)0x6574736150;
            pCVar20 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                                (this_00,zoneName,SVar40);
            puVar21 = &_OBJC_CLASS___CKRecordZone;
            _objc_allocWithZone();
            IVar15 = objc_stub::initWithZoneID_((ID)puVar21,pCVar20);
            *(ID *)(puVar12 + uVar35) = IVar15;
            (**(code **)(lVar34 + 0x68))
                      (puVar12 + uVar35,
                       *(undefined4 *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_PendingDatabaseChange_saveZone_CloudKit_CKSyncEngine_PendingDatabaseChange_Type___>____C_CKRecordZone___>_CloudKit_CKSyncEngine_PendingDatabaseChange_100ea9290
                       ,CONCAT71(extraout_var,PVar8.value));
            CloudKit::CKSyncEngine::State::add(pSVar19,puVar12);
            _swift_release(puVar12);
            _swift_release(pSVar19);
          }
          lVar34 = *(long *)(lVar38 + 0x38);
          IVar15 = *(ID *)(lVar34 + _TtC9PasteCore10SyncEngine::syncLock);
          objc_stub::lock(IVar15);
          *(undefined1 *)(lVar34 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 1;
          objc_stub::unlock(IVar15);
        }
        else {
          FUN_1003a4068();
        }
        uVar25 = *(undefined8 *)(lVar38 + 0xa8);
        this_02 = *(MainActor **)(lVar38 + 0x98);
        uVar27 = *(undefined8 *)(lVar38 + 0x78);
        uVar32 = *(undefined8 *)(lVar38 + 0x68);
        lVar34 = *(long *)(lVar38 + 0x50);
        uVar26 = *(undefined8 *)(lVar38 + 0x58);
        uVar39 = *(undefined8 *)(lVar38 + 0x40);
        uVar14 = *(undefined8 *)(lVar38 + 0x48);
        pMVar36 = *(MainActor **)(lVar38 + 0x38);
        FUN_1003a4478();
        TVar22 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar22.unknown + -8) + 0x38))(uVar39,1,1,TVar22.unknown);
        pMVar23 = pMVar36;
        _swift_retain();
        pMVar23 = Swift::MainActor::get_shared(this_02,pMVar23);
        puVar12 = &DAT_100ece270;
        _swift_allocObject(&DAT_100ece270,0x28,7);
        *(MainActor **)(puVar12 + 0x10) = pMVar23;
        *(undefined8 *)(puVar12 + 0x18) = uVar25;
        *(MainActor **)(puVar12 + 0x20) = pMVar36;
        uVar25 = 0;
        FUN_100364f4c(0,0,uVar39,&DAT_100c443e0,puVar12);
        uVar39 = *(undefined8 *)(pMVar36 + _TtC9PasteCore10SyncEngine::contextChangesTask);
        *(undefined8 *)(pMVar36 + _TtC9PasteCore10SyncEngine::contextChangesTask) = uVar25;
        _swift_release(uVar39);
        FUN_1003a4c78(0,0);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar34 + 8);
        (*UNRECOVERED_JUMPTABLE)(uVar26,uVar14);
        (*UNRECOVERED_JUMPTABLE)(uVar32,uVar14);
        FUN_100005808(uVar27,&DAT_100fc22a0,&DAT_100c442f8);
      }
      uVar39 = *(undefined8 *)(lVar38 + 0x88);
      uVar26 = *(undefined8 *)(lVar38 + 0x70);
      uVar25 = *(undefined8 *)(lVar38 + 0x78);
      uVar14 = *(undefined8 *)(lVar38 + 0x60);
      uVar27 = *(undefined8 *)(lVar38 + 0x68);
      uVar32 = *(undefined8 *)(lVar38 + 0x58);
      uVar37 = *(undefined8 *)(lVar38 + 0x40);
      _swift_task_dealloc(*(undefined8 *)(lVar38 + 0x90));
      _swift_task_dealloc(uVar39);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(uVar26);
      _swift_task_dealloc(uVar27);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar32);
      _swift_task_dealloc(uVar37);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar33 + 8);
      goto LAB_1003a3ee8;
    }
    pPVar5 = *(Published **)(lVar38 + 0x88);
    uVar39 = *(undefined8 *)(lVar38 + 0x90);
    uVar26 = *(undefined8 *)(lVar38 + 0x38);
    _swift_storeEnumTagMultiPayload(uVar39,*(undefined8 *)(lVar38 + 0x80),5);
    puVar12 = &DAT_100c44300;
    _swift_getKeyPath(&DAT_100c44300);
    puVar21 = &DAT_100c44328;
    _swift_getKeyPath(&DAT_100c44328);
    FUN_10006313c(uVar39,pPVar5);
    _swift_retain(uVar26);
    Combine::Published::_set_subscript(pPVar5,pPVar5,uVar26,puVar12,puVar21);
    FUN_1003b2054();
    FUN_1000629fc(uVar39);
    FUN_1003a2854();
    _swift_allocError(&DAT_100ece138,uVar39,0,0);
    _swift_willThrow();
  }
  else {
    _swift_release(*(undefined8 *)(lVar38 + 0xa0));
  }
  uVar39 = *(undefined8 *)(lVar38 + 0x88);
  uVar27 = *(undefined8 *)(lVar38 + 0x90);
  uVar26 = *(undefined8 *)(lVar38 + 0x78);
  uVar14 = *(undefined8 *)(lVar38 + 0x68);
  uVar32 = *(undefined8 *)(lVar38 + 0x70);
  uVar25 = *(undefined8 *)(lVar38 + 0x58);
  uVar37 = *(undefined8 *)(lVar38 + 0x60);
  pPVar5 = *(Published **)(lVar38 + 0x38);
  uVar6 = *(undefined8 *)(lVar38 + 0x40);
  _swift_storeEnumTagMultiPayload(uVar27,*(undefined8 *)(lVar38 + 0x80),5);
  puVar12 = &DAT_100c44300;
  _swift_getKeyPath(&DAT_100c44300);
  puVar21 = &DAT_100c44328;
  _swift_getKeyPath(&DAT_100c44328);
  FUN_10006313c(uVar27,uVar39);
  _swift_retain(pPVar5);
  Combine::Published::_set_subscript(pPVar5,uVar39,pPVar5,puVar12,puVar21);
  FUN_1003b2054();
  FUN_1000629fc(uVar27);
  _swift_willThrow();
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar33 + 8);
LAB_1003a3ee8:
                    /* WARNING: Could not recover jumptable at 0x0001003a3f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1003a4068 | FUN_1003a4068 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003a4068(void)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  undefined4 uVar3;
  code *pcVar4;
  PendingRecordZoneChange PVar5;
  undefined7 extraout_var;
  char *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  _StringGuts _Var12;
  char *pcVar13;
  void *pvVar14;
  long extraout_x8;
  long unaff_x20;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  ulong uStack_110;
  char *local_108;
  undefined *puStack_100;
  _ArrayBuffer local_d0;
  undefined *local_c0 [2];
  char *local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  long lVar6;
  
  PVar5 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,PVar5.value);
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar15 = (ulong *)((long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar10 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  pcVar7 = *(char **)(lVar10 + 0x18);
  lVar2 = *(long *)(lVar10 + 0x20);
  FUN_100004640(lVar10,pcVar7);
  (**(code **)(lVar2 + 0x18))(pcVar7,lVar2);
  puVar8 = (undefined *)0x0;
  FUN_100385b74();
  _swift_initStackObject();
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar9 = 0x725065676e616843;
  FUN_1000d4624(0x725065676e616843,0xef726f737365636f);
  *(undefined8 *)(puVar8 + 0x10) = uVar9;
  *(char **)(puVar8 + 0x18) = pcVar7;
  local_b0 = pcVar7;
  local_a8 = puVar8;
  FUN_1000037f0(&DAT_100fc1ff0,&DAT_100c43d38);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  pvVar14 = (void *)0x0;
  pcVar13 = pcVar7;
  FUN_100395ff8(0xd000000000000014,0x8000000100da4b80);
  if ((ulong)local_d0.unknown >> 0x3e == 0) {
    lVar10 = *(long *)((local_d0.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = local_d0.unknown & 0xffffffffffffff8U;
    if (((ulong)local_d0.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = local_d0.unknown;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar10 != 0) {
    local_108 = pcVar7;
    puStack_100 = puVar8;
    FUN_1000d468c(local_c0);
    puVar8 = local_a8;
    _Var12.unknown = local_a8;
    FUN_100004640(local_c0);
    Swift::_StringGuts::grow(0x36,_Var12);
    SVar19.bridgeObject = (void *)0x8000000100da4ba0;
    SVar19.str = (char *)0xd000000000000023;
    SVar21.bridgeObject = pvVar14;
    SVar21.str = pcVar13;
    Swift::String::append(SVar19,SVar21);
    if ((ulong)local_d0.unknown >> 0x3e == 0) {
      uVar17 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = local_d0.unknown & 0xffffffffffffff8;
      if (((ulong)local_d0.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = local_d0.unknown;
      }
      uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    SVar19 = Swift::CustomStringConvertible::get_description();
    SVar22.bridgeObject = pvVar14;
    SVar22.str = pcVar13;
    Swift::String::append(SVar19,SVar22);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0x8000000100da4bd0;
    SVar20.str = (char *)0xd000000000000011;
    SVar23.bridgeObject = pvVar14;
    SVar23.str = pcVar13;
    Swift::String::append(SVar20,SVar23);
    FUN_1000d4dd4(0,0xe000000000000000,puVar8,uStack_a0);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(local_c0);
    if (uVar17 == 0) {
      _swift_bridgeObjectRelease(local_d0.unknown);
      local_d0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_c0[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1003077f8(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003a4478);
        (*pcVar4)();
      }
      uVar18 = 0;
      uVar3 = *(undefined4 *)
               PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
      ;
      puVar8 = local_c0[0];
      do {
        if (((ulong)local_d0.unknown & 0xc000000000000001) == 0) {
          if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003a445c);
            (*pcVar4)();
          }
          if (*(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003a4460);
            (*pcVar4)();
          }
          uVar11 = *(ulong *)(local_d0.unknown + uVar18 * 8 + 0x20);
        }
        else {
          uVar11 = uVar18;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar18,local_d0);
        }
        *puVar15 = uVar11;
        (**(code **)(lVar16 + 0x68))(puVar15,uVar3,lVar6);
        uVar11 = *(ulong *)(puVar8 + 0x10);
        local_c0[0] = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
          FUN_1003077f8(1 < *(ulong *)(puVar8 + 0x18),uVar11 + 1,1);
        }
        puVar8 = local_c0[0];
        uVar18 = uVar18 + 1;
        *(ulong *)(local_c0[0] + 0x10) = uVar11 + 1;
        (**(code **)(lVar16 + 0x20))
                  (local_c0[0] +
                   *(long *)(lVar16 + 0x48) * uVar11 +
                   ((ulong)*(byte *)(lVar16 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar16 + 0x50) ^ 0xffffffffffffffff)),puVar15,lVar6);
      } while (uVar17 != uVar18);
      _swift_bridgeObjectRelease(local_d0.unknown);
      local_d0.unknown = puVar8;
    }
    FUN_1003aa368(local_d0.unknown);
    puVar8 = puStack_100;
  }
  _swift_release(puVar8);
  _swift_bridgeObjectRelease(local_d0.unknown);
  return 0;
}



/* Address: 0x1003a4478 | FUN_1003a4478 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a4478(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ID self;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,self);
  (**(code **)(lVar2 + 0x18))(self,lVar2);
  puVar4 = &DAT_100ece540;
  _swift_allocObject(&DAT_100ece540,0x20,7);
  *(ID *)(puVar4 + 0x10) = self;
  *(long *)(puVar4 + 0x18) = unaff_x20;
  puVar5 = &DAT_100ece568;
  _swift_allocObject(&DAT_100ece568,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003aa094;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_50 = thunk_FUN_100209b34;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000d5218;
  puStack_58 = &DAT_100ece580;
  local_48 = puVar5;
  aBlock = __Block_copy(&local_70);
  puVar6 = local_48;
  _swift_retain();
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x9a,0x6b,0x20,1);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003a45e4);
  (*pcVar3)();
}



/* Address: 0x1003a45e4 | FUN_1003a45e4 */

void FUN_1003a45e4(void)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 in_x3;
  long lVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = in_x3;
  puVar1 = &DAT_100fc22c0;
  FUN_1000037f0(&DAT_100fc22c0,&DAT_100c44428);
  *(undefined **)(unaff_x22 + 200) = puVar1;
  lVar6 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  puVar1 = &DAT_100fc22c8;
  FUN_1000037f0(&DAT_100fc22c8,&DAT_100c44430);
  *(undefined **)(unaff_x22 + 0xe0) = puVar1;
  lVar6 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar2;
  puVar1 = &DAT_100fc22d0;
  FUN_1000037f0(&DAT_100fc22d0,&DAT_100c44438);
  *(undefined **)(unaff_x22 + 0xf8) = puVar1;
  lVar6 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x110) = pMVar3;
  puVar4 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x118) = UVar5.unknown;
  *(undefined8 **)(unaff_x22 + 0x120) = puVar4;
  _swift_task_switch(FUN_1003a4710,UVar5.unknown,puVar4);
  return;
}



/* Address: 0x1003a4710 | FUN_1003a4710 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a4710(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  AsyncStream AVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x22;
  long lVar11;
  
  lVar1 = _TtC9PasteCore10SyncEngine::persistentStack;
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  AVar6.unknown = *(undefined **)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  lVar7 = *(long *)(unaff_x22 + 0xd0);
  lVar11 = *(long *)(unaff_x22 + 0xc0);
  *(long *)(unaff_x22 + 0x128) = _TtC9PasteCore10SyncEngine::persistentStack;
  lVar1 = lVar11 + lVar1;
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  lVar8 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,uVar9);
  (**(code **)(lVar8 + 0x10))(uVar9,lVar8);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  (**(code **)(lVar7 + 0x68))
            (uVar3,*(undefined4 *)
                    PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,uVar4);
  Swift::AsyncStream::_init((BufferingPolicy)0x38);
  Swift::AsyncStream::_makeAsyncIterator(AVar6);
  (**(code **)(lVar2 + 8))(uVar5,AVar6.unknown);
  *(undefined8 *)(unaff_x22 + 0x130) = _TtC9PasteCore10SyncEngine::privateSyncEngine;
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(lVar11 + _TtC9PasteCore10SyncEngine::logger);
  plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x140) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1003a486c;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x1003a486c | FUN_1003a486c */

void FUN_1003a486c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x140));
  _swift_task_switch(FUN_1003a48b0,*(undefined8 *)(lVar1 + 0x118),*(undefined8 *)(lVar1 + 0x120));
  return;
}



/* Address: 0x1003a48b0 | FUN_1003a48b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a48b0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  ID self;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  __int64 _Var9;
  long *plVar10;
  _StringGuts _Var11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  lVar15 = *(long *)(unaff_x22 + 0x80);
  if (lVar15 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar15 = *(long *)(unaff_x22 + 0x100);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
    (**(code **)(lVar15 + 8))(uVar3,uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001003a4ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar8 = *(undefined **)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar16 = *(long *)(unaff_x22 + 0xc0);
  if (*(long *)(lVar16 + *(long *)(unaff_x22 + 0x130)) == 0) {
    if ((ulong)puVar8 >> 0x3e == 0) {
      lVar16 = *(long *)((undefined *)((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if (((ulong)puVar8 & 0x8000000000000000) != 0) {
        _Var2.unknown = puVar8;
      }
      lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar16 == 0) {
      _swift_bridgeObjectRelease(lVar15);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(uVar3);
    }
    else {
      FUN_1000d468c(unaff_x22 + 0x58);
      puVar6 = *(undefined **)(unaff_x22 + 0x70);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
      _Var11.unknown = puVar6;
      FUN_100004640();
      *(undefined8 *)(unaff_x22 + 0xa8) = 0;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x3c,_Var11);
      *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xb0);
      SVar17.bridgeObject = (void *)0xed0000205d4c4143;
      SVar17.str = (char *)0x4f4c3a434e59535b;
      SVar19.bridgeObject = param_4;
      SVar19.str = param_3;
      Swift::String::append(SVar17,SVar19);
      if ((ulong)puVar8 >> 0x3e == 0) {
        _Var9 = *(__int64 *)((undefined *)((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if (((ulong)puVar8 & 0x8000000000000000) != 0) {
          _Var2.unknown = puVar8;
        }
        _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      *(__int64 *)(unaff_x22 + 0xb8) = _Var9;
      SVar17 = Swift::CustomStringConvertible::get_description();
      SVar20.bridgeObject = param_4;
      SVar20.str = param_3;
      Swift::String::append(SVar17,SVar20);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      SVar18.bridgeObject = (void *)0x8000000100da4bf0;
      SVar18.str = (char *)0x100000000000002d;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar18,SVar21);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
      FUN_1000d4df0(*(undefined8 *)(unaff_x22 + 0x98),uVar13,puVar6,uVar12);
      _swift_bridgeObjectRelease(lVar15);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar13);
      FUN_100004594(unaff_x22 + 0x58);
    }
  }
  else {
    lVar1 = lVar16 + *(long *)(unaff_x22 + 0x128);
    self = *(ID *)(lVar1 + 0x18);
    lVar4 = *(long *)(lVar1 + 0x20);
    FUN_100004640(lVar1,self);
    (**(code **)(lVar4 + 0x18))(self,lVar4);
    puVar6 = &DAT_100ece4c8;
    _swift_allocObject(&DAT_100ece4c8,0x38,7);
    *(long *)(puVar6 + 0x10) = lVar15;
    *(undefined **)(puVar6 + 0x18) = puVar8;
    *(undefined8 *)(puVar6 + 0x20) = uVar3;
    *(ID *)(puVar6 + 0x28) = self;
    *(long *)(puVar6 + 0x30) = lVar16;
    puVar7 = &DAT_100ece4f0;
    _swift_allocObject(&DAT_100ece4f0,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_1003aa058;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    *(code **)(unaff_x22 + 0x48) = thunk_FUN_100209b34;
    *(undefined **)(unaff_x22 + 0x50) = puVar7;
    *(undefined **)(unaff_x22 + 0x28) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x42000000;
    *(code **)(unaff_x22 + 0x38) = FUN_1000d5218;
    *(undefined **)(unaff_x22 + 0x40) = &DAT_100ece508;
    aBlock = __Block_copy((void *)(unaff_x22 + 0x28));
    uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(puVar8);
    _swift_bridgeObjectRetain(uVar3);
    _swift_retain(lVar16);
    _swift_retain(puVar7);
    _swift_release(uVar12);
    objc_stub::performBlockAndWait_(self,aBlock);
    _swift_bridgeObjectRelease(lVar15);
    _swift_bridgeObjectRelease(puVar8);
    _swift_bridgeObjectRelease(uVar3);
    __Block_release(aBlock);
    puVar8 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0x9d,0x66,0x20,1);
    _swift_release(puVar7);
    _swift_release(puVar6);
    if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a4a68);
      (*pcVar5)();
    }
  }
  plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x140) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1003a486c;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x1003a4c78 | FUN_1003a4c78 */

void FUN_1003a4c78(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  ID self;
  undefined8 uVar4;
  undefined1 auStack_60 [14];
  char local_52;
  char local_51;
  
  uVar4 = *unaff_x20;
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(long *)((long)unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine) != 0) {
    puVar1 = &DAT_100c44348;
    _swift_getKeyPath(&DAT_100c44348);
    puVar2 = &DAT_100c44370;
    _swift_getKeyPath(&DAT_100c44370);
    Combine::Published::_get_subscript(&local_51);
    _swift_release(puVar1);
    _swift_release(puVar2);
    if (local_51 == '\x01') {
      self = *(ID *)((long)unaff_x20 + _TtC9PasteCore10SyncEngine::syncLock);
      objc_stub::lock(self);
      FUN_1003a68b8(&local_52);
      objc_stub::unlock(self);
      if (local_52 != '\x01') {
        return;
      }
      TVar3 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
                (auStack_60 + -extraout_x8,1,1,TVar3.unknown);
      puVar1 = &DAT_100ece298;
      _swift_allocObject(&DAT_100ece298,0x18,7);
      _swift_weakInit(puVar1 + 0x10);
      puVar2 = &DAT_100ece2c0;
      _swift_allocObject(&DAT_100ece2c0,0x30,7);
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)(puVar2 + 0x18) = 0;
      *(undefined **)(puVar2 + 0x20) = puVar1;
      *(undefined8 *)(puVar2 + 0x28) = uVar4;
      FUN_100364f4c(0,0,auStack_60 + -extraout_x8,&DAT_100c443f0,puVar2);
      _swift_release();
      return;
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)(0);
  }
  return;
}



/* Address: 0x1003a4e38 | FUN_1003a4e38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003a4f80) */

void FUN_1003a4e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  PendingRecordZoneChange PVar6;
  undefined7 extraout_var;
  NSPredicate *pNVar8;
  undefined *puVar9;
  ulong uVar10;
  CKRecordZoneID *this;
  undefined *puVar11;
  ID self;
  CKRecordID *this_00;
  CKRecordID *pCVar12;
  ulong uVar13;
  void *pvVar14;
  _StringGuts _Var15;
  long extraout_x8;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  ulong local_100;
  undefined *local_f8;
  ulong *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  _ArrayBuffer local_d0;
  _ArrayBuffer local_c8;
  ulong local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98 [3];
  undefined *local_80;
  undefined8 uStack_78;
  _ArrayBuffer _Var7;
  
  PVar6 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  _Var7.unknown = (undefined *)CONCAT71(extraout_var,PVar6.value);
  lVar19 = *(long *)(_Var7.unknown + -8);
  local_f8 = _Var7.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  puVar20 = (ulong *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_100329880();
  pNVar8 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar11 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  *(undefined **)(puVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar9 = puVar11;
  FUN_10030d9e0();
  *(undefined **)(puVar11 + 0x40) = puVar9;
  *(undefined8 *)(puVar11 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(puVar11 + 0x28) = 0x8000000100da4c20;
  pNVar8 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar8);
  objc_stub::setPredicate_((ID)_Var7.unknown);
  FUN_10038fef4(0);
  local_e8 = _Var7.unknown;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_98[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    local_b8 = _Var7.unknown & 0xffffffffffffff8;
    uVar18 = *(ulong *)(local_b8 + 0x10);
  }
  else {
    local_b8 = _Var7.unknown & 0xffffffffffffff8;
    _Var2.unknown = local_b8;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var2.unknown = _Var7.unknown;
    }
    uVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  local_e0 = lVar19;
  local_d8 = param_2;
  if (uVar18 == 0) {
    local_d0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_100 = 0;
    local_d0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_c0 = (ulong)_Var7.unknown & 0xc000000000000001;
    uVar17 = 0;
    local_f0 = puVar20;
    local_c8.unknown = _Var7.unknown;
    do {
      while( true ) {
        if (local_c0 == 0) {
          if (*(ulong *)(local_b8 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a54b8);
            (*pcVar5)();
          }
          uVar10 = *(ulong *)(local_c8.unknown + uVar17 * 8 + 0x20);
        }
        else {
          uVar10 = uVar17;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar17,local_c8);
        }
        uVar13 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a54b4);
          (*pcVar5)();
        }
        this = (CKRecordZoneID *)0x0;
        FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
        objc_stub::cloudKitZoneName(uVar10);
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        objc_stub::cloudKitZoneOwnerName(uVar10);
        SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        param_4 = SVar22.bridgeObject;
        pNVar8 = (NSPredicate *)
                 (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(this,SVar21,SVar22);
        puVar11 = &_OBJC_CLASS___CKRecordZone;
        _objc_allocWithZone();
        self = objc_stub::initWithZoneID_((ID)puVar11);
        objc_stub::cloudKitRecordName(uVar10);
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar14 = SVar21.bridgeObject;
        _swift_bridgeObjectRelease(pvVar14);
        uVar1 = (ulong)SVar21.str & 0xffffffffffff;
        if (((ulong)pvVar14 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar14 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) break;
        _Var7.unknown = local_c8.unknown;
        puVar20 = local_f0;
        uVar17 = uVar17 + 1;
        if (uVar13 == uVar18) goto LAB_1003a5214;
      }
      this_00 = (CKRecordID *)0x0;
      FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
      objc_stub::cloudKitRecordName(uVar10);
      SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pNVar8 = (NSPredicate *)objc_stub::zoneID(self);
      pCVar12 = (extension_CloudKit)::__C::CKRecordID::__allocating_init
                          (this_00,SVar21,(CKRecordZoneID *)pNVar8);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique(0);
      uVar17 = *(ulong *)(((ulong)local_98[0] & 0xffffffffffffff8) + 0x10);
      uVar10 = *(ulong *)(((ulong)local_98[0] & 0xffffffffffffff8) + 0x18);
      if (uVar10 >> 1 <= uVar17) {
        pNVar8 = (NSPredicate *)&DAT_00000001;
        Swift::Array<undefined>::__createNewBuffer(1 < uVar10,uVar17 + 1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,pCVar12);
      local_d0.unknown = local_98[0];
      _Var7.unknown = local_c8.unknown;
      puVar20 = local_f0;
      uVar17 = uVar13;
    } while (uVar13 != uVar18);
  }
LAB_1003a5214:
  _swift_bridgeObjectRelease(_Var7.unknown);
  _Var7.unknown = local_d0.unknown;
  uVar18 = (ulong)local_d0.unknown >> 0x3e;
  if (uVar18 == 0) {
    lVar16 = *(long *)((local_d0.unknown & 0xffffffffffffff8U) + 0x10);
    lVar19 = local_e0;
  }
  else {
    _Var2.unknown = local_d0.unknown & 0xffffffffffffff8U;
    if (((ulong)local_d0.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = local_d0.unknown;
    }
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    lVar19 = local_e0;
  }
  local_e0 = lVar19;
  if (lVar16 == 0) {
    _swift_bridgeObjectRelease(_Var7.unknown);
    return;
  }
  FUN_1000d468c(local_98);
  _Var15.unknown = local_80;
  FUN_100004640(local_98);
  local_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x39,_Var15);
  SVar21.bridgeObject = (void *)0x8000000100da4ba0;
  SVar21.str = (char *)0xd000000000000023;
  SVar22.bridgeObject = param_4;
  SVar22.str = (char *)pNVar8;
  Swift::String::append(SVar21,SVar22);
  if (uVar18 == 0) {
    uVar18 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = local_d0.unknown & 0xffffffffffffff8;
    if (((ulong)local_d0.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = local_d0.unknown;
    }
    uVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  local_b0 = uVar18;
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar24.bridgeObject = param_4;
  SVar24.str = (char *)pNVar8;
  Swift::String::append(SVar21,SVar24);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar23.bridgeObject = (void *)0x8000000100da4c40;
  SVar23.str = (char *)0xd000000000000014;
  SVar25.bridgeObject = param_4;
  SVar25.str = (char *)pNVar8;
  Swift::String::append(SVar23,SVar25);
  uVar4 = uStack_a0;
  FUN_1000d4dd4(local_a8,uStack_a0,local_80,uStack_78);
  _swift_bridgeObjectRelease(uVar4);
  FUN_100004594(local_98);
  if (uVar18 == 0) {
    _swift_bridgeObjectRelease(local_d0.unknown);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_98[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003077f8(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a5520);
      (*pcVar5)();
    }
    uVar17 = 0;
    uVar10 = (ulong)local_d0.unknown & 0xc000000000000001;
    local_b8 = local_d0.unknown & 0xffffffffffffff8;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_deleteRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92c0
    ;
    puVar9 = local_f8;
    puVar11 = local_98[0];
    do {
      if (uVar10 == 0) {
        if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a54bc);
          (*pcVar5)();
        }
        if (*(ulong *)(local_b8 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003a54c0);
          (*pcVar5)();
        }
        uVar13 = *(ulong *)(local_d0.unknown + uVar17 * 8 + 0x20);
      }
      else {
        uVar13 = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,local_d0);
      }
      *puVar20 = uVar13;
      (**(code **)(lVar19 + 0x68))(puVar20,uVar3,puVar9);
      uVar13 = *(ulong *)(puVar11 + 0x10);
      local_98[0] = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
        FUN_1003077f8(1 < *(ulong *)(puVar11 + 0x18),uVar13 + 1,1);
        puVar9 = local_f8;
      }
      puVar11 = local_98[0];
      uVar17 = uVar17 + 1;
      *(ulong *)(local_98[0] + 0x10) = uVar13 + 1;
      (**(code **)(lVar19 + 0x20))
                (local_98[0] +
                 *(long *)(lVar19 + 0x48) * uVar13 +
                 ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff)),puVar20,puVar9);
    } while (uVar18 != uVar17);
    _swift_bridgeObjectRelease(local_d0.unknown);
  }
  FUN_1003aa368(puVar11);
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x1003a5520 | FUN_1003a5520 */

void FUN_1003a5520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x90) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x98) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0xa0) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0xa8) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0xb0) = puVar3;
  _swift_task_switch(FUN_1003a55bc,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1003a55bc | FUN_1003a55bc */

void FUN_1003a55bc(MainActor *param_1)

{
  byte bVar1;
  MainActor *pMVar2;
  long *plVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  String isolation;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x90),param_1);
  *(MainActor **)(unaff_x22 + 0xb8) = pMVar2;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xc0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1003a56d8;
    isolation.bridgeObject = pMVar2;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (pMVar2 == (MainActor *)0x0) {
    UVar4.unknown = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    _swift_getObjectType(pMVar2);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1003a5744,UVar4.unknown,uVar5);
  return;
}



/* Address: 0x1003a56d8 | FUN_1003a56d8 */

void FUN_1003a56d8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar4 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xc0));
  _swift_release(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_1003a58d8;
  }
  else {
    *(long *)(lVar4 + 200) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0xa8);
    uVar3 = *(undefined8 *)(lVar4 + 0xb0);
    pcVar1 = FUN_1003a590c;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1003a5744 | FUN_1003a5744 */

void FUN_1003a5744(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  String function;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1003a5854;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  lVar6 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  function.bridgeObject = (void *)0x8000000100da4a90;
  function.str = (char *)0xd000000000000015;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_1003a5940(uVar4,uVar2,uVar5,uVar1);
  (**(code **)(lVar6 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1003a5854 | FUN_1003a5854 */

void FUN_1003a5854(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  lVar4 = *(long *)(lVar5 + 0x30);
  uVar3 = *(undefined8 *)(lVar5 + 0xb8);
  if (lVar4 == 0) {
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(lVar5 + 0xa8);
    uVar2 = *(undefined8 *)(lVar5 + 0xb0);
    pcVar1 = FUN_1003a58d8;
  }
  else {
    _swift_willThrow();
    _swift_release(uVar3);
    *(long *)(lVar5 + 200) = lVar4;
    uVar3 = *(undefined8 *)(lVar5 + 0xa8);
    uVar2 = *(undefined8 *)(lVar5 + 0xb0);
    pcVar1 = FUN_1003a590c;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1003a58d8 | FUN_1003a58d8 */

void FUN_1003a58d8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001003a5908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a590c | FUN_1003a590c */

void FUN_1003a590c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x0001003a593c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003a5940 | FUN_1003a5940 */

void FUN_1003a5940(undefined8 param_1,undefined8 param_2,code *param_3,void *param_4)

{
  long lVar1;
  LocalizedStringResource LVar2;
  char *pcVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puVar10;
  char *pcVar12;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined *local_1f0;
  char *local_1e8;
  void *local_1e0;
  char *pcStack_1d8;
  ulong local_1d0;
  code *local_1c8;
  code *local_1c0;
  MainActor *local_1b8;
  void *local_1b0;
  code *pcStack_1a8;
  char *local_1a0;
  long local_198;
  long local_190;
  undefined1 auStack_188 [96];
  char *local_128;
  void *pvStack_120;
  char *local_118;
  void *pvStack_110;
  String local_108;
  code *local_f8;
  undefined *puStack_f0;
  String local_e8;
  code *local_d8;
  undefined *puStack_d0;
  char *local_c8;
  void *pvStack_c0;
  char *local_b8;
  void *pvStack_b0;
  String local_a8;
  code *local_98;
  undefined *puStack_90;
  String local_88;
  code *local_78;
  undefined *puStack_70;
  void *pvVar11;
  
  local_1b0 = param_4;
  pcStack_1a8 = param_3;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = (undefined *)((long)&local_1f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pcVar3 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  lVar14 = *(long *)(pcVar3 + -8);
  local_198 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(local_198 + 0xfU & 0xfffffffffffffff0);
  local_190 = (long)LVar2.unknown - extraout_x8_00;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1b8 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    param_4 = (void *)0x7d;
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/SyncEngine+Lifecycle.swift",0x24,1,0x7d,UVar6.unknown,puVar5);
  }
  lVar1 = local_190;
  local_1c0 = *(code **)(lVar14 + 0x10);
  (*local_1c0)(local_190,param_1,pcVar3);
  uVar15 = (ulong)*(byte *)(lVar14 + 0x50);
  local_1d0 = ~uVar15;
  uVar13 = uVar15 + 0x18 & (uVar15 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ece360;
  _swift_allocObject(&DAT_100ece360,uVar13 + local_198,uVar15 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_2;
  local_1c8 = *(code **)(lVar14 + 0x20);
  pcVar12 = pcVar3;
  (*local_1c8)(puVar8 + uVar13,lVar1);
  _swift_retain(param_2);
  FUN_1001e31d4(LVar2.unknown);
  SVar16 = (extension_Foundation)::Swift::String::init(LVar2);
  pvVar11 = SVar16.bridgeObject;
  local_1a0 = SVar16.str;
  FUN_1001e3354(LVar2.unknown);
  SVar16 = (extension_Foundation)::Swift::String::init(LVar2);
  SVar17.bridgeObject = SVar16.bridgeObject;
  local_1e8 = SVar16.str;
  FUN_1001e34d4(LVar2.unknown);
  SVar16 = (extension_Foundation)::Swift::String::init(LVar2);
  local_1e0 = SVar16.bridgeObject;
  pcVar9 = SVar16.str;
  pcStack_1d8 = pcVar9;
  FUN_1003acfa8();
  if (((ulong)pcVar9 & 1) == 0) {
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    local_1e8 = pvVar11;
  }
  else {
    local_c8 = local_1a0;
    pvStack_c0 = pvVar11;
    _swift_bridgeObjectRetain(pvVar11);
    SVar16.bridgeObject = &SUB_e200000000000000;
    SVar16.str = (char *)0xa0a;
    SVar18.bridgeObject = param_4;
    SVar18.str = pcVar12;
    Swift::String::append(SVar16,SVar18);
    _swift_bridgeObjectRelease(pvVar11);
    pvVar11 = pvStack_c0;
    _swift_bridgeObjectRetain(pvStack_c0);
    SVar17.str = local_1e8;
    SVar19.bridgeObject = param_4;
    SVar19.str = pcVar12;
    Swift::String::append(SVar17,SVar19);
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    _swift_bridgeObjectRelease(pvVar11);
    local_1a0 = local_c8;
    local_1e8 = pvStack_c0;
  }
  FUN_1001e3054(LVar2.unknown);
  SVar16 = (extension_Foundation)::Swift::String::init(LVar2);
  puVar10 = &DAT_100ece388;
  _swift_allocObject(&DAT_100ece388,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_1003a9da0;
  *(undefined **)(puVar10 + 0x18) = puVar8;
  _swift_retain(puVar8);
  FUN_1001e2ed4(LVar2.unknown);
  SVar17 = (extension_Foundation)::Swift::String::init(LVar2);
  lVar14 = local_190;
  local_1f0 = puVar8;
  (*local_1c0)(local_190,param_1,pcVar3);
  uVar13 = uVar15 + 0x10 & local_1d0;
  puVar8 = &DAT_100ece3b0;
  _swift_allocObject(&DAT_100ece3b0,uVar13 + local_198,uVar15 | 7);
  (*local_1c8)(puVar8 + uVar13,lVar14,pcVar3);
  local_c8 = pcStack_1d8;
  pvStack_c0 = local_1e0;
  local_b8 = local_1a0;
  pvStack_b0 = local_1e8;
  local_98 = FUN_1000386a0;
  local_78 = FUN_1003a9e64;
  local_128 = pcStack_1d8;
  pvStack_120 = local_1e0;
  local_118 = local_1a0;
  pvStack_110 = local_1e8;
  local_f8 = FUN_1000386a0;
  local_d8 = FUN_1003a9e64;
  local_108 = SVar16;
  puStack_f0 = puVar10;
  local_e8 = SVar17;
  puStack_d0 = puVar8;
  local_a8 = SVar16;
  puStack_90 = puVar10;
  local_88 = SVar17;
  puStack_70 = puVar8;
  FUN_10003c978(&local_c8,auStack_188);
  FUN_10003c9b4(&local_128);
  (*pcStack_1a8)(&local_c8);
  FUN_10003c9b4(&local_c8);
  _swift_release(local_1b8);
  _swift_release(local_1f0);
  return;
}


