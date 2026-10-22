/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100096430 | FUN_100096430 */

void FUN_100096430(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Published PVar6;
  AnyCancellable *pAVar7;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined *local_78 [3];
  
  puVar1 = &DAT_100fa6b78;
  FUN_1000037f0(&DAT_100fa6b78,&DAT_100c236a0);
  lVar12 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100faad28;
  FUN_1000037f0(&DAT_100faad28,&DAT_100c28618);
  lVar11 = *(long *)(puVar2 + -8);
  puVar3 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(unaff_x20 + _TtC5Paste6TabBar::viewModel);
  FUN_1003c473c();
  puVar4 = puVar3;
  FUN_1001aeb1c();
  _swift_release(puVar3);
  puVar3 = &DAT_100eb3850;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar5 = &DAT_100fa98a0;
  FUN_1000037f0(&DAT_100fa98a0,&DAT_100c26e80);
  _swift_allocObject();
  FUN_1001b8ddc(puVar4,FUN_10009aa88,puVar3,puVar5);
  uVar10 = *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::applier);
  *(undefined **)(unaff_x20 + _TtC5Paste6TabBar::applier) = puVar4;
  _swift_retain();
  _swift_release(uVar10);
  thunk_FUN_1001b95bc();
  _swift_release(puVar4);
  _swift_beginAccess(lVar9 + _TtC5Paste15TabBarViewModel::_selectedList,local_78,0x21,0);
  PVar6.unknown = &DAT_100fa6ba0;
  FUN_1000037f0(&DAT_100fa6ba0,&DAT_100c236a8);
  Combine::Published::_get_projectedValue(PVar6);
  _swift_endAccess(local_78);
  FUN_10032b0c8(0);
  FUN_100016eac(&DAT_100fa6ba8,&DAT_100fa6b78,&DAT_100c236a0,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  (extension_Combine)::Combine::Publisher::_compactMap();
  (**(code **)(lVar12 + 8))(auStack_80 + -extraout_x8,puVar1);
  puVar1 = &DAT_100eb3850;
  puVar3 = puVar1;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  FUN_100016eac(&DAT_100faad30,&DAT_100faad28,&DAT_100c28618,
                PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
               );
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(lVar11 + 8))((long)(auStack_80 + -extraout_x8) - extraout_x8_00,puVar2);
  lVar9 = _TtC5Paste6TabBar::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC5Paste6TabBar::cancellables,local_78,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + lVar9));
  _swift_endAccess(local_78);
  _swift_release(pAVar7);
  FUN_1000037f0(&DAT_100fa8350,&DAT_100c253d8);
  FUN_100016eac(&DAT_100faad38,&DAT_100fa8350,&DAT_100c253d8,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_PassthroughSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9800
               );
  AVar8 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  local_78[0] = AVar8.unknown;
  _swift_allocObject(&DAT_100eb3850,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  FUN_1000037f0(&DAT_100faad40,&DAT_100c28620);
  FUN_100016eac(&DAT_100faad48,&DAT_100faad40,&DAT_100c28620,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(AVar8.unknown);
  _swift_release(puVar1);
  _swift_beginAccess(unaff_x20 + lVar9,local_78,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(unaff_x20 + lVar9));
  _swift_endAccess(local_78);
  _swift_release(pAVar7);
  return;
}



/* Address: 0x10009681c | FUN_10009681c */

undefined8 FUN_10009681c(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *local_108;
  char *local_100;
  char local_f8;
  code *local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _swift_getObjectType();
  pcVar5 = "performKeyEquivalent:";
  pcVar2 = (code *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff10,
                                       "performKeyEquivalent:",param_1);
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar6 = *(code **)(unaff_x20 + _TtC5Paste6TabBar::isSearchActive);
    if (pcVar6 != (code *)0x0) {
      pcVar5 = (char *)((undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::isSearchActive))[1];
      pcVar3 = pcVar5;
      _swift_retain();
      (*pcVar6)();
      FUN_100004550();
      pcVar2 = pcVar6;
      if (((ulong)pcVar3 & 1) != 0) {
        return 0;
      }
    }
    FUN_1001e7d18();
    puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_previousPinboardShortcut);
    uVar10 = puVar1[1];
    uVar8 = *puVar1;
    uStack_88 = puVar1[3];
    uVar11 = puVar1[2];
    uStack_78 = puVar1[5];
    uVar9 = puVar1[4];
    uVar7 = puVar1[6];
    local_a0 = uVar8;
    uStack_98 = uVar10;
    local_90 = uVar11;
    local_80 = uVar9;
    local_70 = uVar7;
    _swift_retain(uVar8);
    _swift_retain(uVar10);
    _swift_retain(uVar11);
    _swift_retain(uVar9);
    _swift_retain(uVar7);
    puVar4 = &DAT_100faa910;
    FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
    FUN_1002ca7e0(&local_e0);
    _swift_release(uVar7);
    _swift_release(uVar9);
    _swift_release(uVar11);
    _swift_release(uVar10);
    _swift_release(uVar8);
    if ((((char)local_d0 == '\x01') || (local_e0 != pcVar2)) || (pcStack_d8 != pcVar5)) {
      puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_nextPinboardShortcut);
      uVar9 = puVar1[1];
      pcVar6 = (code *)*puVar1;
      uStack_c8 = puVar1[3];
      uVar10 = puVar1[2];
      uStack_b8 = puVar1[5];
      uVar8 = puVar1[4];
      uVar7 = puVar1[6];
      local_e0 = pcVar6;
      pcStack_d8 = (char *)uVar9;
      local_d0 = uVar10;
      local_c0 = uVar8;
      local_b0 = uVar7;
      _swift_retain(pcVar6);
      _swift_retain(uVar9);
      _swift_retain(uVar10);
      _swift_retain(uVar8);
      _swift_retain(uVar7);
      FUN_1002ca7e0(&local_108,puVar4);
      _swift_release(uVar7);
      _swift_release(uVar8);
      _swift_release(uVar10);
      _swift_release(uVar9);
      _swift_release(pcVar6);
      if (local_f8 == '\x01') {
        return 0;
      }
      if (local_108 != pcVar2) {
        return 0;
      }
      if (local_100 != pcVar5) {
        return 0;
      }
      FUN_10003b308(0);
    }
    else {
      FUN_10003b0f4();
    }
  }
  return 1;
}



/* Address: 0x100096a80 | _TtC5Paste6TabBar::performKeyEquivalent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste6TabBar::performKeyEquivalent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  uint uVar6;
  
  uVar6 = (uint)param_3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0x37,UVar4.unknown,puVar3);
  }
  FUN_10009681c();
  _swift_release(pMVar2);
  return uVar6 & 1;
}



/* Address: 0x100096b68 | _TtC5Paste6TabBar::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste6TabBar::init(ID param_1,SEL param_2)

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
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0xb,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBar",0xc,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100096c10);
  (*pcVar2)();
}



/* Address: 0x100096c10 | _TtC5Paste6TabBar::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste6TabBar::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0xb,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBar",0xc,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100096cb8);
  (*pcVar2)();
}



/* Address: 0x100096cb8 | FUN_100096cb8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100096cb8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::cancellables));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::applier));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_previousPinboardShortcut);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_nextPinboardShortcut);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::isSearchActive),
                ((undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::isSearchActive))[1]);
  return;
}



/* Address: 0x100096dc0 | _TtC5Paste6TabBar::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste6TabBar::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_release(*(undefined8 *)(param_1 + applier));
  puVar1 = (undefined8 *)(param_1 + _previousPinboardShortcut);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  puVar1 = (undefined8 *)(param_1 + _nextPinboardShortcut);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  FUN_100004550(*(undefined8 *)(param_1 + isSearchActive),
                ((undefined8 *)(param_1 + isSearchActive))[1]);
  return;
}



/* Address: 0x100096ecc | FUN_100096ecc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100096ecc(void)

{
  return ZEXT816(0x100f92658);
}



/* Address: 0x100096eec | FUN_100096eec */

void FUN_100096eec(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100096f10 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  FUN_10002a438();
  return;
}



/* Address: 0x100096f14 | FUN_100096f14 */

void FUN_100096f14(void)

{
  long unaff_x20;
  
  FUN_100095ae8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100096f1c | FUN_100096f1c */

void FUN_100096f1c(long param_1,long param_2)

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



/* Address: 0x100096f30 | FUN_100096f30 */

void FUN_100096f30(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100096f38 | FUN_100096f38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100096f38(undefined8 param_1)

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
  FUN_100095a7c();
  ppuStack_40 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_60[0] = param_1;
  local_48 = uVar7;
  local_38 = uVar1;
  FUN_10005142c(0);
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



/* Address: 0x100097068 | FUN_100097068 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100097068(long param_1,long param_2)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID self;
  _ArrayBuffer _Var4;
  ulong self_00;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  ulong uVar10;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if ((param_2 != 0) && (FUN_10009727c(), param_1 != 0)) {
    FUN_1002356a8();
    FUN_10021d644();
    FUN_10007a078();
    self = 0;
    FUN_1000959e4();
    _Var4.unknown = (undefined *)objc_stub::arrangedSubviews(self);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var4.unknown >> 0x3e == 0) {
      lVar9 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
        _Var2.unknown = _Var4.unknown;
      }
      lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar9 != 0) {
      uVar10 = 0;
      do {
        if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100097230);
            (*pcVar3)();
          }
          self_00 = *(ulong *)(_Var4.unknown + uVar10 * 8 + 0x20);
        }
        else {
          self_00 = uVar10;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var4);
        }
        lVar1 = uVar10 + 1;
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10009722c);
          (*pcVar3)();
        }
        pMVar5 = Swift::MainActor::typeMetadataAccessor();
        pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
        puVar6 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar7 = Swift::Actor::get_unownedExecutor();
        UVar8 = UVar7;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar8.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBar.swift",0x12,1,0x58,UVar7.unknown,puVar6);
        }
        objc_stub::removeAllToolTips(self_00);
        _swift_release(pMVar5);
        uVar10 = uVar10 + 1;
      } while (lVar1 != lVar9);
    }
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  return;
}



/* Address: 0x10009727c | FUN_10009727c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10009727c(ulong param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  _ArrayBuffer _Var4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar6 = param_1;
  FUN_1000959e4();
  puVar3 = (undefined *)objc_stub::arrangedSubviews(uVar6);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    uVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _swift_bridgeObjectRelease(puVar3);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000973c4);
      (*pcVar2)();
    }
  }
  if (param_1 < uVar6) {
    _Var4.unknown =
         (undefined *)
         objc_stub::arrangedSubviews
                   (*(ID *)(unaff_x20 + _TtC5Paste6TabBar::___lazy_storage___stackView));
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000973d8);
        (*pcVar2)();
      }
      param_1 = *(ulong *)(_Var4.unknown + param_1 * 8 + 0x20);
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(param_1,_Var4);
    }
    _swift_bridgeObjectRelease(_Var4.unknown);
    uVar5 = 0;
    FUN_10007a448(0);
    _swift_dynamicCastClass(param_1,uVar5);
  }
  return;
}



/* Address: 0x1000973d8 | FUN_1000973d8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000973d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ID param_6,long param_7)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID self;
  ID IVar4;
  undefined *puVar5;
  _ArrayBuffer _Var6;
  ulong self_00;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  ID IVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long local_b0 [2];
  ID local_a0;
  ID local_98;
  ID local_90;
  long local_88;
  undefined8 uStack_80;
  ID local_78 [3];
  
  self = param_7 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar13 = _TtC5Paste6TabBar::applier;
  if (self != 0) {
    IVar14 = *(ID *)(self + _TtC5Paste6TabBar::applier);
    if (IVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100097814);
      (*pcVar3)();
    }
    IVar4 = IVar14;
    _swift_retain();
    FUN_1003c473c();
    puVar12 = &DAT_100fa8328;
    local_78[0] = IVar4;
    FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
    puVar5 = &DAT_100fa8330;
    FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b9698(local_b0,param_5,local_78,puVar12,puVar5);
    _swift_release(IVar4);
    _swift_release();
    if (local_b0[0] != 0) {
      IVar14 = *(ID *)(self + lVar13);
      if (IVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10009781c);
        (*pcVar3)();
      }
      local_88 = local_b0[0];
      local_a0 = param_5;
      local_98 = param_6;
      local_90 = self;
      _swift_retain(IVar14);
      FUN_1001b91e4(FUN_10009ac7c,local_b0);
      _swift_release();
    }
    FUN_1000959e4();
    _Var6.unknown = (undefined *)objc_stub::arrangedSubviews(IVar14);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var6.unknown >> 0x3e == 0) {
      lVar16 = *(long *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
        _Var2.unknown = _Var6.unknown;
      }
      lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar16 != 0) {
      uVar17 = 0;
      do {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100097644);
            (*pcVar3)();
          }
          self_00 = *(ulong *)(_Var6.unknown + uVar17 * 8 + 0x20);
        }
        else {
          self_00 = uVar17;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var6);
        }
        lVar15 = uVar17 + 1;
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100097640);
          (*pcVar3)();
        }
        pMVar7 = Swift::MainActor::typeMetadataAccessor();
        pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
        puVar8 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar9 = Swift::Actor::get_unownedExecutor();
        UVar10 = UVar9;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar10.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBar.swift",0x12,1,0xcc,UVar9.unknown,puVar8);
        }
        objc_stub::removeFromSuperview(self_00);
        _swift_release(pMVar7);
        uVar17 = uVar17 + 1;
      } while (lVar15 != lVar16);
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
    lVar13 = *(long *)(self + lVar13);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100097818);
      (*pcVar3)();
    }
    _swift_beginAccess(lVar13 + 0x10,local_78,0,0);
    puVar12 = *(undefined **)(lVar13 + 0x10);
    if ((ulong)puVar12 >> 0x3e == 0) {
      lVar13 = *(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
      lVar16 = _TtC5Paste6TabBar::___lazy_storage___stackView;
    }
    else {
      _Var2.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        _Var2.unknown = puVar12;
      }
      lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      lVar16 = _TtC5Paste6TabBar::___lazy_storage___stackView;
      if (lVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100097810);
        (*pcVar3)();
      }
    }
    _TtC5Paste6TabBar::___lazy_storage___stackView = lVar16;
    if (lVar13 != 0) {
      uVar11 = 0;
      FUN_10007a448(0);
      lVar15 = 0;
      do {
        lVar1 = lVar15 + 1;
        _objc_allocWithZone(uVar11);
        IVar14 = 0;
        FUN_100078b60(0,0xe000000000000000,0x200);
        objc_stub::insertArrangedSubview_atIndex_(*(ID *)(self + lVar16),IVar14,lVar15);
        objc_stub::layoutSubtreeIfNeeded(IVar14);
        FUN_100098900(lVar15);
        lVar15 = lVar1;
      } while (lVar13 != lVar1);
    }
    objc_stub::layoutSubtreeIfNeeded(self);
    FUN_10009727c();
    if ((param_6 != 0) && ((*(byte *)(param_6 + _TtC5Paste10TabBarCell::isSelected) & 1) != 0)) {
      objc_stub::frame(param_6);
      _CGRectInset();
      uVar11 = 0;
      local_a0 = self;
      local_90 = param_2;
      local_88 = param_3;
      uStack_80 = param_4;
      FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
      FUN_10021ccd4();
      FUN_10021cadc(0x3fc3333333333333,0,uVar11,1,thunk_FUN_10009ac24,local_b0,0,0);
    }
  }
  return;
}



/* Address: 0x100097828 | FUN_100097828 */

void FUN_100097828(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_2;
  if ((param_1 < param_2) && (lVar2 = param_2 + 1, SCARRY8(param_2,1))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000978a4);
    (*pcVar1)();
  }
  FUN_1003c4cdc(param_4,lVar2);
  lVar2 = *(long *)(param_3 + _TtC5Paste6TabBar::applier);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1001b9460(param_1,param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000978a8);
  (*pcVar1)();
}



/* Address: 0x1000978a8 | FUN_1000978a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000978a8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  code *pcVar4;
  ID self;
  _ArrayBuffer _Var5;
  ulong self_00;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_78 [24];
  
  self = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    IVar11 = self;
    FUN_1000959e4();
    _Var5.unknown = (undefined *)objc_stub::arrangedSubviews(IVar11);
    FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var5.unknown >> 0x3e == 0) {
      lVar13 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var3.unknown = _Var5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
        _Var3.unknown = _Var5.unknown;
      }
      lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (lVar13 != 0) {
      uVar14 = 0;
      do {
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100097a38);
            (*pcVar4)();
          }
          self_00 = *(ulong *)(_Var5.unknown + uVar14 * 8 + 0x20);
        }
        else {
          self_00 = uVar14;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var5);
        }
        lVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100097a34);
          (*pcVar4)();
        }
        pMVar6 = Swift::MainActor::typeMetadataAccessor();
        pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
        puVar7 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar8 = Swift::Actor::get_unownedExecutor();
        UVar9 = UVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar9.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBar.swift",0x12,1,0xcc,UVar8.unknown,puVar7);
        }
        objc_stub::removeFromSuperview(self_00);
        _swift_release(pMVar6);
        uVar14 = uVar14 + 1;
      } while (lVar1 != lVar13);
    }
    _swift_bridgeObjectRelease(_Var5.unknown);
    lVar13 = *(long *)(self + _TtC5Paste6TabBar::applier);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100097b54);
      (*pcVar4)();
    }
    _swift_beginAccess(lVar13 + 0x10,auStack_78,0,0);
    puVar12 = *(undefined **)(lVar13 + 0x10);
    if ((ulong)puVar12 >> 0x3e == 0) {
      lVar13 = *(long *)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
      lVar1 = _TtC5Paste6TabBar::___lazy_storage___stackView;
    }
    else {
      _Var3.unknown = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar12) {
        _Var3.unknown = puVar12;
      }
      lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      lVar1 = _TtC5Paste6TabBar::___lazy_storage___stackView;
      if (lVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100097b50);
        (*pcVar4)();
      }
    }
    _TtC5Paste6TabBar::___lazy_storage___stackView = lVar1;
    if (lVar13 != 0) {
      uVar10 = 0;
      FUN_10007a448(0);
      lVar15 = 0;
      do {
        lVar2 = lVar15 + 1;
        _objc_allocWithZone(uVar10);
        IVar11 = 0;
        FUN_100078b60(0,0xe000000000000000,0x200);
        objc_stub::insertArrangedSubview_atIndex_(*(ID *)(self + lVar1),IVar11,lVar15);
        objc_stub::layoutSubtreeIfNeeded(IVar11);
        FUN_100098900(lVar15);
        lVar15 = lVar2;
      } while (lVar13 != lVar2);
    }
    objc_stub::layoutSubtreeIfNeeded(self);
  }
  return;
}



/* Address: 0x100097b60 | FUN_100097b60 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

MainActor * FUN_100097b60(undefined8 param_1,long param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  long lVar4;
  code *pcVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  ID self;
  _ArrayBuffer _Var10;
  MainActor *self_00;
  MainActor *pMVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  MainActor *pMVar16;
  long lVar17;
  long lVar18;
  MainActor *pMVar19;
  undefined1 auStack_78 [24];
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(this,this);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar14 = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,param_3,UVar8.unknown,puVar14);
  }
  self = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self == 0) {
    _swift_release(pMVar6);
    return pMVar6;
  }
  IVar13 = self;
  FUN_1000959e4();
  _Var10.unknown = (undefined *)objc_stub::arrangedSubviews(IVar13);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var10.unknown >> 0x3e == 0) {
    pMVar16 = *(MainActor **)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = _Var10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
      _Var3.unknown = _Var10.unknown;
    }
    pMVar16 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (pMVar16 != (MainActor *)0x0) {
    pMVar19 = (MainActor *)0x0;
    do {
      if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
        if (*(MainActor **)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) <= pMVar19) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100097d7c);
          (*pcVar5)();
        }
        self_00 = *(MainActor **)(_Var10.unknown + (long)pMVar19 * 8 + 0x20);
      }
      else {
        self_00 = pMVar19;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar19,_Var10);
      }
      pMVar1 = pMVar19 + 1;
      if (SCARRY8((long)pMVar19,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100097d78);
        (*pcVar5)();
      }
      pMVar11 = Swift::MainActor::get_shared(this,self_00);
      puVar14 = puVar7;
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0xcc,UVar8.unknown,puVar14)
        ;
      }
      objc_stub::removeFromSuperview((ID)self_00);
      _swift_release(pMVar11);
      pMVar19 = pMVar19 + 1;
    } while (pMVar1 != pMVar16);
  }
  _swift_bridgeObjectRelease(_Var10.unknown);
  lVar17 = *(long *)(self + _TtC5Paste6TabBar::applier);
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100097ea4);
    (*pcVar5)();
  }
  _swift_beginAccess(lVar17 + 0x10,auStack_78,0,0);
  puVar15 = *(undefined **)(lVar17 + 0x10);
  if ((ulong)puVar15 >> 0x3e == 0) {
    lVar17 = *(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
    lVar4 = _TtC5Paste6TabBar::___lazy_storage___stackView;
  }
  else {
    _Var3.unknown = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      _Var3.unknown = puVar15;
    }
    lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    lVar4 = _TtC5Paste6TabBar::___lazy_storage___stackView;
    if (lVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100097ea0);
      (*pcVar5)();
    }
  }
  _TtC5Paste6TabBar::___lazy_storage___stackView = lVar4;
  if (lVar17 != 0) {
    uVar12 = 0;
    FUN_10007a448(0);
    lVar18 = 0;
    do {
      lVar2 = lVar18 + 1;
      _objc_allocWithZone(uVar12);
      IVar13 = 0;
      FUN_100078b60(0,0xe000000000000000,0x200);
      objc_stub::insertArrangedSubview_atIndex_(*(ID *)(self + lVar4),IVar13,lVar18);
      objc_stub::layoutSubtreeIfNeeded(IVar13);
      FUN_100098900(lVar18);
      lVar18 = lVar2;
    } while (lVar17 != lVar2);
  }
  objc_stub::layoutSubtreeIfNeeded(self);
  _swift_release(pMVar6);
  return (MainActor *)0x0;
}



/* Address: 0x100097eb0 | FUN_100097eb0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100098848) */
/* WARNING: Removing unreachable block (ram,0x00010009884c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100097eb0(long param_1,undefined8 ******param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID self;
  _ArrayBuffer _Var4;
  ulong uVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  MainActor *pMVar12;
  undefined *puVar13;
  ID self_00;
  undefined8 uVar14;
  ID IVar15;
  undefined *puVar16;
  long lVar17;
  undefined8 *******pppppppuVar18;
  undefined8 ******self_01;
  ulong uVar19;
  long lVar20;
  undefined8 ******ppppppuVar21;
  undefined8 *****pppppuVar22;
  undefined8 *****pppppuVar23;
  long lVar24;
  undefined1 auStack_b0 [16];
  ID local_a0;
  undefined8 *******local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  self = param_8 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    IVar15 = self;
    (*param_6)();
    if (param_1 == 0) {
      FUN_1000959e4();
      _Var4.unknown = (undefined *)objc_stub::arrangedSubviews(IVar15);
      FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var4.unknown >> 0x3e == 0) {
        lVar17 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
          _Var2.unknown = _Var4.unknown;
        }
        lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar17 != 0) {
        uVar19 = 0;
        do {
          if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100098604);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(_Var4.unknown + uVar19 * 8 + 0x20);
          }
          else {
            uVar5 = uVar19;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var4);
          }
          lVar24 = uVar19 + 1;
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100098600);
            (*pcVar3)();
          }
          pMVar6 = Swift::MainActor::typeMetadataAccessor();
          pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
          puVar8 = &DAT_100fa6bb0;
          FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                        PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
          UVar7 = Swift::Actor::get_unownedExecutor();
          UVar9 = UVar7;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar9.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("Paste/TabBar.swift",0x12,1,0xcc,UVar7.unknown,puVar8);
          }
          objc_stub::removeFromSuperview(uVar5);
          _swift_release(pMVar6);
          uVar19 = uVar19 + 1;
        } while (lVar24 != lVar17);
      }
      _swift_bridgeObjectRelease(_Var4.unknown);
      lVar17 = *(long *)(self + _TtC5Paste6TabBar::applier);
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100098844);
        (*pcVar3)();
      }
      _swift_beginAccess(lVar17 + 0x10,&local_88,0,0);
      puVar16 = *(undefined **)(lVar17 + 0x10);
      if ((ulong)puVar16 >> 0x3e == 0) {
        lVar17 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        lVar24 = _TtC5Paste6TabBar::___lazy_storage___stackView;
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar16) {
          _Var2.unknown = puVar16;
        }
        lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        lVar24 = _TtC5Paste6TabBar::___lazy_storage___stackView;
        if (lVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100098818);
          (*pcVar3)();
        }
      }
      _TtC5Paste6TabBar::___lazy_storage___stackView = lVar24;
      if (lVar17 != 0) {
        uVar14 = 0;
        FUN_10007a448(0);
        lVar20 = 0;
        do {
          lVar1 = lVar20 + 1;
          _objc_allocWithZone(uVar14);
          IVar15 = 0;
          FUN_100078b60(0,0xe000000000000000,0x200);
          objc_stub::insertArrangedSubview_atIndex_(*(ID *)(self + lVar24),IVar15,lVar20);
          objc_stub::layoutSubtreeIfNeeded(IVar15);
          FUN_100098900(lVar20);
          lVar20 = lVar1;
        } while (lVar17 != lVar1);
      }
    }
    else {
      if (*(long *)(param_3 + 0x10) == 0) {
        pppppppuVar18 = *(undefined8 ********)(param_1 + 0x10);
        pppppppuVar10 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100eae0d8;
        if (pppppppuVar18 != (undefined8 *******)0x0) {
          _swift_bridgeObjectRetain(param_1);
          pppppppuVar10 = pppppppuVar18;
          FUN_1000710b8(pppppppuVar18,0);
          pppppppuVar11 = &local_88;
          FUN_10009a96c(pppppppuVar11,pppppppuVar10 + 4,pppppppuVar18,param_1);
          FUN_10000c650(local_88,uStack_80,local_78,uStack_70,local_68);
          if (pppppppuVar11 != pppppppuVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100098204);
            (*pcVar3)();
          }
        }
        local_88 = pppppppuVar10;
        FUN_100099ebc(&local_88);
        pppppppuVar10 = local_88;
        ppppppuVar21 = local_88[2];
        if (ppppppuVar21 == (undefined8 ******)0x0) {
          _swift_release(local_88);
        }
        else {
          pMVar12 = Swift::MainActor::typeMetadataAccessor();
          lVar17 = _TtC5Paste6TabBar::viewModel;
          pMVar6 = pMVar12;
          puVar16 = PTR_typeMetadataAccessor_100eaec10;
          do {
            if ((long)pppppppuVar10[2] < (long)ppppppuVar21) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000983c8);
              (*pcVar3)();
            }
            self_01 = pppppppuVar10[(long)ppppppuVar21 + 3];
            pMVar6 = Swift::MainActor::get_shared(pMVar12,pMVar6);
            puVar8 = &DAT_100fa6bb0;
            FUN_100003a00(&DAT_100fa6bb0,puVar16,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18
                         );
            UVar7 = Swift::Actor::get_unownedExecutor();
            UVar9 = UVar7;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar9.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/TabBar.swift",0x12,1,0x8e,UVar7.unknown,puVar8);
            }
            FUN_10009727c();
            if (self_01 == (undefined8 ******)0x0) {
              _swift_release();
            }
            else {
              objc_stub::removeFromSuperview((ID)self_01);
              if ((*(byte *)((long)self_01 + _TtC5Paste10TabBarCell::isSelected) & 1) == 0) {
                _swift_release(pMVar6);
                pMVar6 = (MainActor *)0x0;
              }
              else {
                uVar14 = *(undefined8 *)(self + lVar17);
                puVar16 = &DAT_100c28628;
                _swift_getKeyPath(&DAT_100c28628);
                puVar13 = &DAT_100c28650;
                _swift_getKeyPath(&DAT_100c28650);
                Combine::Published::_get_subscript(&local_88,uVar14,puVar16,puVar13);
                _swift_release(puVar16);
                _swift_release(puVar13);
                if (local_88 == (undefined8 *******)0x0) {
                  _swift_release(pMVar6);
                }
                else {
                  FUN_100099218(local_88);
                  _swift_release(pMVar6);
                }
                pMVar6 = (MainActor *)0x0;
                puVar16 = PTR_typeMetadataAccessor_100eaec10;
              }
            }
            ppppppuVar21 = (undefined8 ******)((long)ppppppuVar21 + -1);
          } while (ppppppuVar21 != (undefined8 ******)0x0);
          _swift_release(pppppppuVar10);
        }
        _swift_bridgeObjectRetain();
        FUN_100099e30();
        local_88 = (undefined8 *******)param_2;
        FUN_100099ebc(&local_88);
        pppppppuVar10 = local_88;
        pppppuVar22 = local_88[2];
        if (pppppuVar22 != (undefined8 *****)0x0) {
          pMVar12 = Swift::MainActor::typeMetadataAccessor();
          puVar13 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
          puVar16 = PTR_typeMetadataAccessor_100eaec10;
          pMVar6 = pMVar12;
          ppppppuVar21 = pppppppuVar10 + 4;
          do {
            pppppuVar23 = *ppppppuVar21;
            pMVar6 = Swift::MainActor::get_shared(pMVar12,pMVar6);
            puVar8 = &DAT_100fa6bb0;
            FUN_100003a00(&DAT_100fa6bb0,puVar16,puVar13);
            UVar7 = Swift::Actor::get_unownedExecutor();
            UVar9 = UVar7;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar9.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/TabBar.swift",0x12,1,0x8f,UVar7.unknown,puVar8);
            }
            FUN_10007a448(0);
            _objc_allocWithZone();
            self_00 = 0;
            FUN_100078b60(0,0xe000000000000000,0x200);
            IVar15 = self_00;
            FUN_1000959e4();
            objc_stub::insertArrangedSubview_atIndex_(IVar15,self_00,pppppuVar23);
            objc_stub::layoutSubtreeIfNeeded(self_00);
            FUN_100098900(pppppuVar23);
            _swift_release(pMVar6);
            pMVar6 = (MainActor *)0x0;
            pppppuVar22 = (undefined8 *****)((long)pppppuVar22 + -1);
            ppppppuVar21 = ppppppuVar21 + 1;
          } while (pppppuVar22 != (undefined8 *****)0x0);
        }
        _swift_release(pppppppuVar10);
        lVar17 = *(long *)(self + _TtC5Paste6TabBar::applier);
        if (lVar17 != 0) {
          _swift_beginAccess(lVar17 + 0x10,&local_88,0,0);
          puVar16 = *(undefined **)(lVar17 + 0x10);
          if ((ulong)puVar16 >> 0x3e == 0) {
            lVar17 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var2.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar16) {
              _Var2.unknown = puVar16;
            }
            lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
            if (lVar17 < 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10009883c);
              (*pcVar3)();
            }
          }
          if (lVar17 != 0) {
            pMVar12 = Swift::MainActor::typeMetadataAccessor();
            puVar13 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
            puVar16 = PTR_typeMetadataAccessor_100eaec10;
            pMVar6 = pMVar12;
            lVar24 = 0;
            do {
              pMVar6 = Swift::MainActor::get_shared(pMVar12,pMVar6);
              puVar8 = &DAT_100fa6bb0;
              FUN_100003a00(&DAT_100fa6bb0,puVar16,puVar13);
              UVar7 = Swift::Actor::get_unownedExecutor();
              UVar9 = UVar7;
              _swift_task_isCurrentExecutor();
              if (((ulong)UVar9.unknown & 1) == 0) {
                _swift_task_reportUnexpectedExecutor
                          ("Paste/TabBar.swift",0x12,1,0x93,UVar7.unknown,puVar8);
              }
              lVar20 = lVar24 + 1;
              FUN_100098900(lVar24);
              _swift_release();
              lVar24 = lVar20;
            } while (lVar17 != lVar20);
          }
          FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
          uVar14 = 0;
          local_a0 = self;
          FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
          FUN_10021ccd4();
          FUN_10021cadc(0,1,uVar14,1,FUN_10009ab28,auStack_b0,0,0);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100098848);
        (*pcVar3)();
      }
      FUN_1000959e4();
      _Var4.unknown = (undefined *)objc_stub::arrangedSubviews(IVar15);
      FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var4.unknown >> 0x3e == 0) {
        lVar17 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
          _Var2.unknown = _Var4.unknown;
        }
        lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar17 != 0) {
        uVar19 = 0;
        do {
          if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000985fc);
              (*pcVar3)();
            }
            uVar5 = *(ulong *)(_Var4.unknown + uVar19 * 8 + 0x20);
          }
          else {
            uVar5 = uVar19;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var4);
          }
          lVar24 = uVar19 + 1;
          if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1000985f8);
            (*pcVar3)();
          }
          pMVar6 = Swift::MainActor::typeMetadataAccessor();
          pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
          puVar8 = &DAT_100fa6bb0;
          FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                        PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
          UVar7 = Swift::Actor::get_unownedExecutor();
          UVar9 = UVar7;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar9.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("Paste/TabBar.swift",0x12,1,0xcc,UVar7.unknown,puVar8);
          }
          objc_stub::removeFromSuperview(uVar5);
          _swift_release(pMVar6);
          uVar19 = uVar19 + 1;
        } while (lVar24 != lVar17);
      }
      _swift_bridgeObjectRelease(_Var4.unknown);
      lVar17 = *(long *)(self + _TtC5Paste6TabBar::applier);
      if (lVar17 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100098840);
        (*pcVar3)();
      }
      _swift_beginAccess(lVar17 + 0x10,&local_88,0,0);
      puVar16 = *(undefined **)(lVar17 + 0x10);
      if ((ulong)puVar16 >> 0x3e == 0) {
        lVar17 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        lVar24 = _TtC5Paste6TabBar::___lazy_storage___stackView;
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar16) {
          _Var2.unknown = puVar16;
        }
        lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        lVar24 = _TtC5Paste6TabBar::___lazy_storage___stackView;
        if (lVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000986f8);
          (*pcVar3)();
        }
      }
      _TtC5Paste6TabBar::___lazy_storage___stackView = lVar24;
      if (lVar17 != 0) {
        uVar14 = 0;
        FUN_10007a448(0);
        lVar20 = 0;
        do {
          lVar1 = lVar20 + 1;
          _objc_allocWithZone(uVar14);
          IVar15 = 0;
          FUN_100078b60(0,0xe000000000000000,0x200);
          objc_stub::insertArrangedSubview_atIndex_(*(ID *)(self + lVar24),IVar15,lVar20);
          objc_stub::layoutSubtreeIfNeeded(IVar15);
          FUN_100098900(lVar20);
          lVar20 = lVar1;
        } while (lVar17 != lVar1);
      }
    }
    objc_stub::layoutSubtreeIfNeeded(self);
  }
  return;
}



/* Address: 0x100098900 | FUN_100098900 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100098900(ID param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  long *plVar3;
  NSObject *pNVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  LocalizedStringResource LVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong self;
  ulong uVar11;
  char *pcVar12;
  NSString *pNVar13;
  undefined *puVar14;
  uint uVar15;
  _StringGuts _Var16;
  void *pvVar17;
  ushort uVar18;
  long extraout_x8;
  long unaff_x20;
  char *pcVar19;
  undefined8 uVar20;
  long lVar21;
  NSObject *pNVar22;
  undefined8 uVar23;
  char *pcVar24;
  long lVar25;
  undefined8 uVar26;
  void *pvVar27;
  undefined8 uVar28;
  long lVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined auStack_120 [8];
  void *local_118;
  char *local_110;
  LocalizedStringResource local_108;
  undefined8 local_100;
  String local_f8;
  char local_e8;
  char *local_e0;
  void *pvStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  NSObject *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  pcVar19 = *(char **)(unaff_x20 + _TtC5Paste6TabBar::applier);
  if (pcVar19 == (char *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100099160);
    (*pcVar5)();
  }
  uVar20 = *(undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::viewModel);
  pcVar24 = pcVar19;
  _swift_retain();
  FUN_1003c473c();
  puVar9 = &DAT_100fa8328;
  local_e0 = pcVar24;
  FUN_1000037f0(&DAT_100fa8328,&DAT_100c253c8);
  puVar10 = &DAT_100fa8330;
  FUN_100016eac(&DAT_100fa8330,&DAT_100fa8328,&DAT_100c253c8,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b9698(&local_a0,param_1,&local_e0,puVar9);
  _swift_release(pcVar24);
  _swift_release(pcVar19);
  pNVar4 = local_a0;
  if ((local_a0 != (NSObject *)0x0) && (FUN_10009727c(), param_1 != 0)) {
    local_100 = uVar20;
    objc_stub::name((ID)local_a0);
    SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pSVar1 = (String *)(param_1 + _TtC5Paste10TabBarCell::title);
    *pSVar1 = SVar30;
    _swift_bridgeObjectRelease(pSVar1->bridgeObject);
    FUN_100078734();
    pcVar19 = pSVar1->str;
    pvVar27 = pSVar1->bridgeObject;
    _swift_bridgeObjectRetain(pvVar27);
    FUN_10008c2c0(pcVar19);
    uVar15 = (uint)pvVar27;
    self = 0;
    FUN_1003293c4();
    local_108.unknown = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    if ((uVar15 & 0xff) == 1) {
      thunk_FUN_100324cb0();
      uVar11 = self;
      FUN_100328e60();
      uVar18 = 0x100;
      if ((uVar11 & 1) == 0) {
        uVar18 = 0;
      }
      uVar18 = uVar18 | (ushort)self & 0xff;
      self = uVar11;
    }
    else {
      uVar18 = 0x200;
    }
    lVar21 = _TtC5Paste10TabBarCell::iconType;
    *(ushort *)(param_1 + _TtC5Paste10TabBarCell::iconType) = uVar18;
    FUN_100078684();
    *(undefined2 *)(self + _TtC5Paste14TabBarCellIcon::type) = *(undefined2 *)(param_1 + lVar21);
    pcVar19 = &DAT_00000001;
    objc_stub::setNeedsDisplay_(self);
    objc_stub::invalidateIntrinsicContentSize(self);
    puVar2 = (undefined8 *)(unaff_x20 + _TtC5Paste6TabBar::_previousPinboardShortcut);
    uVar26 = puVar2[1];
    pNVar22 = (NSObject *)*puVar2;
    uStack_88 = puVar2[3];
    uVar28 = puVar2[2];
    uStack_78 = puVar2[5];
    uVar23 = puVar2[4];
    uVar20 = puVar2[6];
    local_a0 = pNVar22;
    uStack_98 = uVar26;
    local_90 = uVar28;
    local_80 = uVar23;
    local_70 = uVar20;
    _swift_retain(pNVar22);
    _swift_retain(uVar26);
    _swift_retain(uVar28);
    _swift_retain(uVar23);
    _swift_retain(uVar20);
    puVar9 = &DAT_100faa910;
    _Var16.unknown = &DAT_100c25220;
    FUN_1000037f0(&DAT_100faa910);
    FUN_1002ca7e0(&local_e0);
    _swift_release(uVar20);
    _swift_release(uVar23);
    _swift_release(uVar28);
    _swift_release(uVar26);
    _swift_release(pNVar22);
    if ((char)local_d0 != '\x01') {
      local_110 = local_e0;
      local_118 = pvStack_d8;
      plVar3 = (long *)(unaff_x20 + _TtC5Paste6TabBar::_nextPinboardShortcut);
      pvVar27 = (void *)plVar3[1];
      pcVar24 = (char *)*plVar3;
      lStack_c8 = plVar3[3];
      lVar29 = plVar3[2];
      lStack_b8 = plVar3[5];
      lVar25 = plVar3[4];
      lVar21 = plVar3[6];
      local_e0 = pcVar24;
      pvStack_d8 = pvVar27;
      local_d0 = lVar29;
      local_c0 = lVar25;
      local_b0 = lVar21;
      _swift_retain(pcVar24);
      _swift_retain(pvVar27);
      _swift_retain(lVar29);
      _swift_retain(lVar25);
      _swift_retain(lVar21);
      FUN_1002ca7e0(&local_f8,puVar9);
      _swift_release(lVar21);
      _swift_release(lVar25);
      _swift_release(lVar29);
      _swift_release(pvVar27);
      _swift_release(pcVar24);
      if (local_e8 != '\x01') {
        pcVar24 = local_f8.str;
        pvVar27 = local_f8.bridgeObject;
        local_f8.str = (char *)0x0;
        local_f8.bridgeObject = (void *)0xe000000000000000;
        lVar21 = 0x17;
        Swift::_StringGuts::grow(0x17,_Var16);
        pvVar17 = local_f8.bridgeObject;
        FUN_1003251d4();
        LVar8.unknown = local_108.unknown;
        if (lVar21 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100099158);
          (*pcVar5)();
        }
        if (0x7fffffff < lVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10009915c);
          (*pcVar5)();
        }
        thunk_FUN_1001e6be8(local_108.unknown);
        SVar30 = (extension_Foundation)::Swift::String::init(LVar8);
        _swift_bridgeObjectRelease(pvVar17);
        SVar31.bridgeObject = &SUB_e200000000000000;
        SVar31.str = (char *)0x2820;
        SVar35.bridgeObject = puVar10;
        SVar35.str = pcVar19;
        local_f8 = SVar30;
        Swift::String::append(SVar31,SVar35);
        pcVar12 = local_110;
        pvVar17 = local_118;
        FUN_1001e9cc8();
        SVar30.bridgeObject = pvVar17;
        SVar30.str = pcVar12;
        SVar36.bridgeObject = puVar10;
        SVar36.str = pcVar19;
        Swift::String::append(SVar30,SVar36);
        _swift_bridgeObjectRelease(pvVar17);
        SVar32.bridgeObject = &SUB_e200000000000000;
        SVar32.str = (char *)0x202c;
        SVar37.bridgeObject = puVar10;
        SVar37.str = pcVar19;
        Swift::String::append(SVar32,SVar37);
        FUN_1001e9cc8();
        SVar33.bridgeObject = pvVar27;
        SVar33.str = pcVar24;
        SVar38.bridgeObject = puVar10;
        SVar38.str = pcVar19;
        Swift::String::append(SVar33,SVar38);
        _swift_bridgeObjectRelease(pvVar27);
        SVar34.bridgeObject = (void *)0xed00002965746167;
        SVar34.str = (char *)0x6976616e206f7420;
        SVar39.bridgeObject = puVar10;
        SVar39.str = pcVar19;
        Swift::String::append(SVar34,SVar39);
        pvVar27 = local_f8.bridgeObject;
        pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(pvVar27);
        objc_stub::setToolTip_(param_1,pNVar13);
      }
    }
    puVar9 = &DAT_100c28628;
    _swift_getKeyPath(&DAT_100c28628);
    puVar10 = &DAT_100c28650;
    _swift_getKeyPath(&DAT_100c28650);
    Combine::Published::_get_subscript(&local_f8,local_100,puVar9,puVar10);
    _swift_release(puVar9);
    _swift_release(puVar10);
    pcVar19 = local_f8.str;
    bVar6 = false;
    if ((NSObject *)local_f8.str != (NSObject *)0x0) {
      FUN_10032b0c8(0);
      bVar6 = (extension_ObjectiveC)::__C::NSObject::___infix((NSObject *)pcVar19,pNVar4);
    }
    *(bool *)(param_1 + _TtC5Paste10TabBarCell::isSelected) = bVar6;
    FUN_10007a078();
    puVar9 = &DAT_100eb3850;
    puVar14 = puVar9;
    _swift_allocObject(&DAT_100eb3850,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10);
    puVar10 = &DAT_100eb38f0;
    _swift_allocObject(&DAT_100eb38f0,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(NSObject **)(puVar10 + 0x18) = pNVar4;
    puVar2 = (undefined8 *)(param_1 + _TtC5Paste10TabBarCell::onSelect);
    uVar20 = *puVar2;
    uVar23 = puVar2[1];
    *puVar2 = FUN_10009ab64;
    puVar2[1] = puVar10;
    _swift_retain(puVar14);
    FUN_100004550(uVar20,uVar23);
    _swift_release(puVar14);
    puVar14 = puVar9;
    _swift_allocObject(&DAT_100eb3850,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10);
    puVar10 = &DAT_100eb3918;
    _swift_allocObject(&DAT_100eb3918,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(NSObject **)(puVar10 + 0x18) = pNVar4;
    puVar2 = (undefined8 *)(param_1 + _TtC5Paste10TabBarCell::onCommitEditing);
    uVar20 = *puVar2;
    uVar23 = puVar2[1];
    *puVar2 = FUN_10009ab6c;
    puVar2[1] = puVar10;
    _swift_retain(puVar14);
    FUN_100004550(uVar20,uVar23);
    _swift_release(puVar14);
    puVar14 = puVar9;
    _swift_allocObject(&DAT_100eb3850,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10);
    puVar10 = &DAT_100eb3940;
    _swift_allocObject(&DAT_100eb3940,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(NSObject **)(puVar10 + 0x18) = pNVar4;
    puVar2 = (undefined8 *)(param_1 + _TtC5Paste10TabBarCell::onPerformDragOperation);
    uVar20 = *puVar2;
    uVar23 = puVar2[1];
    *puVar2 = FUN_10009ab74;
    puVar2[1] = puVar10;
    _swift_retain(puVar14);
    FUN_100004550(uVar20,uVar23);
    _swift_release(puVar14);
    puVar14 = puVar9;
    _swift_allocObject(&DAT_100eb3850,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10);
    puVar10 = &DAT_100eb3968;
    _swift_allocObject(&DAT_100eb3968,0x20,7);
    *(undefined **)(puVar10 + 0x10) = puVar14;
    *(NSObject **)(puVar10 + 0x18) = pNVar4;
    puVar2 = (undefined8 *)(param_1 + _TtC5Paste10TabBarCell::onCanPerformDragOperation);
    uVar20 = *puVar2;
    uVar23 = puVar2[1];
    *puVar2 = FUN_10009ab7c;
    puVar2[1] = puVar10;
    _swift_retain(puVar14);
    FUN_100004550(uVar20,uVar23);
    _swift_release(puVar14);
    _swift_allocObject(&DAT_100eb3850,0x18,7);
    _swift_unknownObjectWeakInit(puVar9 + 0x10);
    puVar10 = &DAT_100eb3990;
    _swift_allocObject(&DAT_100eb3990,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(NSObject **)(puVar10 + 0x18) = pNVar4;
    *(ID *)(puVar10 + 0x20) = param_1;
    puVar2 = (undefined8 *)(param_1 + _TtC5Paste10TabBarCell::menuProvider);
    uVar20 = *puVar2;
    uVar23 = puVar2[1];
    *puVar2 = FUN_10009abb8;
    puVar2[1] = puVar10;
    _swift_retain(puVar9);
    FUN_100004550(uVar20,uVar23);
    _swift_release(puVar9);
    bVar7 = *(byte *)(unaff_x20 + _TtC5Paste6TabBar::isCollapsed);
    FUN_1000785e0();
    FUN_100328f38();
    *(byte *)(param_1 + _TtC5Paste10TabBarCell::isEnabled) = bVar7 & 1;
    objc_stub::setEnabled_
              (*(ID *)(*(long *)(param_1 + _TtC5Paste10TabBarCell::___lazy_storage___label) +
                      _TtC5Paste15TabBarCellLabel::textField));
  }
  return;
}



/* Address: 0x100099160 | FUN_100099160 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100099160(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0x9f,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  *param_1 = uVar6;
  return;
}



/* Address: 0x100099218 | FUN_100099218 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100099218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5)

{
  ulong uVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  code *pcVar5;
  _ArrayBuffer _Var6;
  ulong uVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  undefined8 uVar11;
  ulong uVar12;
  UnownedSerialExecutor UVar13;
  char *pcVar14;
  ID IVar15;
  long unaff_x20;
  ID IVar16;
  ID IVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  _ArrayBuffer local_b8;
  undefined *local_b0 [4];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  FUN_1000959e4();
  _Var6.unknown = (undefined *)objc_stub::arrangedSubviews(param_5);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  local_b0[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar20 = _Var6.unknown & 0xffffffffffffff8;
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    uVar18 = *(ulong *)(puVar20 + 0x10);
  }
  else {
    _Var3.unknown = puVar20;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var3.unknown = _Var6.unknown;
    }
    uVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  local_b8.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar18 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar20 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100099418);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(_Var6.unknown + uVar12 * 8 + 0x20);
        }
        else {
          uVar7 = uVar12;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar12,_Var6);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100099414);
          (*pcVar5)();
        }
        pMVar8 = Swift::MainActor::typeMetadataAccessor();
        pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
        puVar9 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar10 = Swift::Actor::get_unownedExecutor();
        UVar13 = UVar10;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar13.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBar.swift",0x12,1,0xb7,UVar10.unknown,puVar9);
        }
        uVar11 = 0;
        FUN_10007a448(0);
        _swift_dynamicCastClass(uVar7,uVar11);
        _swift_release(pMVar8);
        if (uVar7 != 0) break;
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar18) goto LAB_100099438;
      }
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar12 = *(ulong *)(((ulong)local_b0[0] & 0xffffffffffffff8) + 0x10);
      uVar4 = *(ulong *)(((ulong)local_b0[0] & 0xffffffffffffff8) + 0x18);
      if (uVar4 >> 1 <= uVar12) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar4,uVar12 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar12,uVar7);
      local_b8.unknown = local_b0[0];
      uVar12 = uVar1;
    } while (uVar1 != uVar18);
  }
LAB_100099438:
  _swift_bridgeObjectRelease(_Var6.unknown);
  if ((ulong)local_b8.unknown >> 0x3e == 0) {
    lVar19 = *(long *)(((ulong)local_b8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = local_b8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_b8.unknown) {
      _Var3.unknown = local_b8.unknown;
    }
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (lVar19 != 0) {
    uVar18 = 0;
    do {
      if (((ulong)local_b8.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)local_b8.unknown & 0xffffffffffffff8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000995e0);
          (*pcVar5)();
        }
        uVar12 = *(ulong *)(local_b8.unknown + uVar18 * 8 + 0x20);
      }
      else {
        uVar12 = uVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar18,local_b8);
      }
      lVar2 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000995dc);
        (*pcVar5)();
      }
      pMVar8 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
      puVar9 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar13 = Swift::Actor::get_unownedExecutor();
      pcVar14 = (char *)UVar13;
      _swift_task_isCurrentExecutor();
      if (((ulong)pcVar14 & 1) == 0) {
        pcVar14 = "Paste/TabBar.swift";
        _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,0xb8,UVar13.unknown,puVar9)
        ;
      }
      *(undefined1 *)(uVar12 + _TtC5Paste10TabBarCell::isSelected) = 0;
      if (*(char *)(uVar12 + _TtC5Paste10TabBarCell::isEditing) == '\x01') {
LAB_100099574:
        FUN_1001fe1dc();
LAB_100099578:
        IVar16 = *(ID *)pcVar14;
      }
      else if ((*(byte *)(uVar12 + _TtC5Paste10TabBarCell::isPressed) & 1) == 0) {
        if ((*(byte *)(uVar12 + _TtC5Paste10TabBarCell::isDragDestination) & 1) != 0) {
          FUN_1001ff0d0();
          goto LAB_100099578;
        }
        if ((*(byte *)(uVar12 + _TtC5Paste10TabBarCell::isHovered) & 1) != 0) goto LAB_100099574;
        IVar16 = 0;
      }
      else {
        FUN_1001ff0d0();
        IVar16 = objc_stub::colorWithAlphaComponent_(*(ID *)pcVar14,0x3fc3333333333333);
      }
      FUN_1002356a8(IVar16);
      _swift_release(pMVar8);
      uVar18 = uVar18 + 1;
    } while (lVar2 != lVar19);
  }
  _swift_bridgeObjectRelease(local_b8.unknown);
  lVar19 = *(long *)(unaff_x20 + _TtC5Paste6TabBar::applier);
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100099740);
    (*pcVar5)();
  }
  _swift_beginAccess(lVar19 + 0x10,auStack_78,0,0);
  IVar17 = *(ID *)(lVar19 + 0x10);
  IVar16 = IVar17;
  _swift_bridgeObjectRetain();
  FUN_1003541f4();
  IVar15 = IVar17;
  FUN_100095040();
  _swift_bridgeObjectRelease(IVar17);
  if ((((uint)IVar15 & 0xff) != 1) && (FUN_10009727c(), IVar16 != 0)) {
    *(undefined1 *)(IVar16 + _TtC5Paste10TabBarCell::isSelected) = 1;
    FUN_10007a078();
    objc_stub::frame(IVar16);
    _CGRectInset();
    uVar11 = 0;
    uStack_90 = param_2;
    local_88 = param_3;
    uStack_80 = param_4;
    FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
    FUN_10021ccd4();
    FUN_10021cadc(0x3fc3333333333333,0,uVar11,1,thunk_FUN_10009ac24,local_b0,0,0);
  }
  return;
}



/* Address: 0x100099740 | FUN_100099740 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100099740(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/TabBar.swift",0x12,1,param_3,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    (*param_4)(uVar6);
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100099838 | FUN_100099838 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100099838(void)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID unaff_x20;
  long lVar5;
  ID IVar6;
  undefined1 auStack_b0 [16];
  undefined1 auStack_78 [24];
  
  lVar5 = *(long *)(unaff_x20 + _TtC5Paste6TabBar::applier);
  if (lVar5 != 0) {
    _swift_beginAccess(lVar5 + 0x10,auStack_78,0,0);
    IVar6 = *(ID *)(lVar5 + 0x10);
    self = IVar6;
    _swift_bridgeObjectRetain();
    FUN_1003541f4();
    IVar2 = IVar6;
    FUN_100095040();
    _swift_bridgeObjectRelease(IVar6);
    if ((((uint)IVar2 & 0xff) != 1) && (FUN_10009727c(), self != 0)) {
      IVar2 = objc_stub::window(unaff_x20);
      if (IVar2 != 0) {
        objc_stub::makeFirstResponder_(IVar2,0);
      }
      puVar3 = &DAT_100eb38c8;
      _swift_allocObject(&DAT_100eb38c8,0x18,7);
      *(ID *)(puVar3 + 0x10) = self;
      objc_stub::frame(self);
      _CGRectInset();
      FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
      uVar4 = 0;
      FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
      FUN_10021ccd4();
      FUN_10021cadc(0x3fc3333333333333,0,uVar4,1,thunk_FUN_10009ac24,auStack_b0,FUN_10009aafc,puVar3
                   );
      _swift_release(puVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100099a00);
  (*pcVar1)();
}



/* Address: 0x100099a00 | thunk_FUN_10009ac24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 thunk_FUN_10009ac24(ID param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_100095a7c(*(undefined8 *)(unaff_x20 + 0x10));
  objc_stub::scrollRectToVisible_(param_1,uVar1,uVar2,uVar3,uVar4);
  return 0;
}



/* Address: 0x100099a04 | FUN_100099a04 */

void FUN_100099a04(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(param_1,0xd000000000000018,0x8000000100d8f250,&local_38,puVar1);
  return;
}



/* Address: 0x100099a70 | FUN_100099a70 */

void FUN_100099a70(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(param_1,0xd000000000000014,0x8000000100d8f230,&local_38,puVar1);
  return;
}



/* Address: 0x100099adc | FUN_100099adc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100099adc(long param_1,ID param_2)

{
  String SVar1;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    objc_stub::identifier(param_2,*(undefined8 *)(param_1 + _TtC5Paste6TabBar::viewModel));
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100039c50(SVar1.str,SVar1.bridgeObject,1);
    _swift_bridgeObjectRelease(SVar1.bridgeObject);
    return;
  }
  return;
}



/* Address: 0x100099b88 | FUN_100099b88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100099b88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    FUN_1003c4a30(*(undefined8 *)(param_3 + _TtC5Paste6TabBar::viewModel),param_1,param_2,param_4);
    return 0;
  }
  return 0;
}



/* Address: 0x100099c18 | FUN_100099c18 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100099c18(undefined8 param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10003c3b0(*(undefined8 *)(param_2 + _TtC5Paste6TabBar::viewModel),param_1,param_3);
    return 0;
  }
  return 0;
}



/* Address: 0x100099c90 | FUN_100099c90 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100099c90(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100328f38(0);
  }
  return;
}



/* Address: 0x100099cc4 | FUN_100099cc4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100099cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _TtC5Paste6TabBar::viewModel);
    FUN_100022be0(0);
    _objc_allocWithZone();
    FUN_100021f00(param_2,uVar1,param_3);
  }
  return;
}



/* Address: 0x100099d50 | FUN_100099d50 */

void FUN_100099d50(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c28628;
  _swift_getKeyPath(&DAT_100c28628);
  puVar2 = &DAT_100c28650;
  _swift_getKeyPath(&DAT_100c28650);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100099db8 | FUN_100099db8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100099db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c28628;
  _swift_getKeyPath(&DAT_100c28628);
  puVar2 = &DAT_100c28650;
  _swift_getKeyPath(&DAT_100c28650);
  local_38 = uVar3;
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x100099e30 | FUN_100099e30 */

undefined8 * FUN_100099e30(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(param_1);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar2 = puVar4;
    FUN_1000710b8(puVar4,0);
    puVar3 = &local_58;
    FUN_10009a96c(puVar3,puVar2 + 4,puVar4,param_1);
    FUN_10000c650(local_58,uStack_50,local_48,uStack_40,local_38);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100099e94);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Address: 0x100099ebc | FUN_100099ebc */

void FUN_100099ebc(ulong *param_1)

{
  long *plVar1;
  bool bVar2;
  __int64 _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long *local_50;
  ulong uStack_48;
  
  uVar11 = *param_1;
  uVar12 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar12 & 1) == 0) {
    FUN_10009aa60();
  }
  uVar12 = *(ulong *)(uVar11 + 0x10);
  plVar1 = (long *)(uVar11 + 0x20);
  local_50 = plVar1;
  uStack_48 = uVar12;
  _Var3 = Swift::_minimumMergeRunLength(uVar12);
  if (_Var3 < (long)uVar12) {
    uVar13 = uVar12 >> 1;
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar12) {
      _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (uVar13,PTR___type_metadata_for_Swift_Int_100eac6f8);
      *(ulong *)(_Var4.unknown + 0x10) = uVar13;
    }
    local_68 = _Var4.unknown + 0x20;
    uStack_60 = uVar13;
    FUN_100099ff0(&local_68,auStack_58,&local_50,_Var3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0;
    _swift_release(_Var4.unknown);
  }
  else if ((uVar12 != 0) && (uVar12 != 1)) {
    lVar5 = -1;
    uVar13 = 1;
    plVar6 = plVar1;
    do {
      lVar7 = plVar1[uVar13];
      lVar8 = lVar5;
      plVar9 = plVar6;
      do {
        lVar10 = *plVar9;
        if (lVar10 <= lVar7) break;
        *plVar9 = lVar7;
        plVar9[1] = lVar10;
        bVar2 = lVar8 != -1;
        lVar8 = lVar8 + 1;
        plVar9 = plVar9 + -1;
      } while (bVar2);
      uVar13 = uVar13 + 1;
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -1;
    } while (uVar13 != uVar12);
  }
  *param_1 = uVar11;
  return;
}



/* Address: 0x100099ff0 | FUN_100099ff0 */

void FUN_100099ff0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = local_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a32c);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a34c);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a328);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a330);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a334);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a338);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a318);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_10009a5c8(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_10009a5c8(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      local_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a350);
        (*pcVar2)();
      }
      FUN_10009a358(&local_58,*param_1,param_3);
      puVar6 = local_58;
      if (unaff_x21 != 0) goto LAB_10009a2e8;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = local_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a358);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_10009a958();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a354);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_10009a6c8(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a31c);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a320);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a324);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_10009a2e8:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x10009a358 | FUN_10009a358 */

undefined8 FUN_10009a358(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_10009a958();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_10009a430;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a5a8);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_10009a490:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a598);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a5a0);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a580);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a584);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a58c);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a594);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10009a430:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a588);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a590);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a59c);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a5a4);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_10009a490;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a5ac);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a570);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a5c8);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_10009a6c8(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a574);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a578);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10009a57c);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Address: 0x10009a5c8 | FUN_10009a5c8 */

undefined * FUN_10009a5c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10009a6c8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faad50;
    FUN_1000037f0(&DAT_100faad50,&DAT_100c28670);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10009a6c8 | FUN_10009a6c8 */

undefined8 FUN_10009a6c8(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar5;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 7;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 3;
  lVar11 = (long)param_3 - (long)param_2;
  lVar6 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar6 = lVar11;
  }
  lVar6 = lVar6 >> 3;
  if (lVar2 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 3);
    }
    plVar5 = param_4 + lVar2;
    plVar8 = param_1;
    if (7 < lVar10) {
      do {
        if (param_3 <= param_2) break;
        lVar2 = *param_2;
        if (lVar2 < *param_4) {
          plVar9 = param_4;
          plVar7 = param_2 + 1;
          plVar3 = param_2;
        }
        else {
          lVar2 = *param_4;
          plVar9 = param_4 + 1;
          plVar7 = param_2;
          plVar3 = param_4;
        }
        param_2 = plVar7;
        param_4 = plVar9;
        if (plVar8 != plVar3) {
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar5);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar6 << 3);
    }
    plVar3 = param_4 + lVar6;
    plVar5 = plVar3;
    plVar8 = param_2;
    if ((param_1 < param_2) && (7 < lVar11)) {
      do {
        plVar7 = param_2 + -1;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -1;
          plVar5 = plVar3 + -1;
          if (*plVar5 < *plVar7) break;
          if (plVar9 != plVar3) {
            *param_3 = *plVar5;
          }
          plVar3 = plVar5;
          plVar8 = param_2;
          plVar9 = param_3;
          if (plVar5 <= param_4) goto LAB_10009a874;
        }
        if (plVar9 != param_2) {
          *param_3 = *plVar7;
        }
        plVar5 = plVar3;
        plVar8 = plVar7;
      } while ((param_1 < plVar7) && (param_2 = plVar7, param_4 < plVar3));
    }
  }
LAB_10009a874:
  uVar4 = (long)plVar5 - (long)param_4;
  uVar1 = uVar4 + 7;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    _memmove(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Address: 0x10009a8d0 | FUN_10009a8d0 */

undefined1  [16] FUN_10009a8d0(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_10009a958();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10009a958);
  (*pcVar3)();
}



/* Address: 0x10009a958 | FUN_10009a958 */

void FUN_10009a958(long param_1)

{
  FUN_10009a5c8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10009a96c | FUN_10009a96c */

long FUN_10009a96c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  puVar4 = (ulong *)(param_4 + 0x38);
  uVar5 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if (-uVar5 < 0x40) {
    uVar6 = ~(-1L << (-uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *puVar4;
  if (param_2 == (undefined8 *)0x0) {
    lVar7 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar7 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10009aa60);
      (*pcVar2)();
    }
    lVar7 = 0;
    lVar9 = 0;
    uVar10 = 0x3f - uVar5 >> 6;
    lVar8 = lVar7;
    do {
      while (uVar6 == 0) {
        bVar3 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10009aa5c);
          (*pcVar2)();
        }
        if ((long)uVar10 <= lVar7) {
          uVar6 = 0;
          if ((long)uVar10 <= lVar8 + 1) {
            uVar10 = lVar8 + 1;
          }
          lVar7 = uVar10 - 1;
          param_3 = lVar9;
          goto LAB_10009aa40;
        }
        uVar6 = puVar4[lVar7];
      }
      lVar9 = lVar9 + 1;
      uVar1 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      *param_2 = *(undefined8 *)
                  (*(long *)(param_4 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                  lVar7 * 0x200);
      lVar8 = lVar7;
      param_2 = param_2 + 1;
    } while (lVar9 != param_3);
  }
LAB_10009aa40:
  *param_1 = param_4;
  param_1[1] = (long)puVar4;
  param_1[2] = ~uVar5;
  param_1[3] = lVar7;
  param_1[4] = uVar6;
  return param_3;
}



/* Address: 0x10009aa60 | FUN_10009aa60 */

void FUN_10009aa60(long param_1)

{
  FUN_100071c10(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10009aa74 | FUN_10009aa74 */

void FUN_10009aa74(long param_1)

{
  FUN_10007229c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10009aa88 | FUN_10009aa88 */

void FUN_10009aa88(void)

{
  FUN_100097eb0();
  return;
}



/* Address: 0x10009aa90 | FUN_10009aa90 */

void FUN_10009aa90(void)

{
  FUN_100099740();
  return;
}



/* Address: 0x10009aab4 | FUN_10009aab4 */

void FUN_10009aab4(void)

{
  FUN_100099740();
  return;
}



/* Address: 0x10009aad8 | FUN_10009aad8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009aad8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10009aafc | FUN_10009aafc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009aafc(void)

{
  FUN_100078734();
  FUN_10008c35c();
  return 0;
}



/* Address: 0x10009ab28 | FUN_10009ab28 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009ab28(void)

{
  ID self;
  long unaff_x20;
  
  self = objc_stub::superview(*(ID *)(unaff_x20 + 0x10));
  objc_stub::layoutIfNeeded(self);
  return 0;
}



/* Address: 0x10009ab5c | thunk_FUN_100099d50 */

void thunk_FUN_100099d50(void)

{
  FUN_100099d50();
  return;
}



/* Address: 0x10009ab60 | thunk_FUN_100099db8 */

void thunk_FUN_100099db8(void)

{
  FUN_100099db8();
  return;
}



/* Address: 0x10009ab64 | FUN_10009ab64 */

void FUN_10009ab64(void)

{
  long unaff_x20;
  
  FUN_100099adc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10009ab6c | FUN_10009ab6c */

void FUN_10009ab6c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100099b88(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x10009ab74 | FUN_10009ab74 */

void FUN_10009ab74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100099c18(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10009ab7c | FUN_10009ab7c */

void FUN_10009ab7c(void)

{
  long unaff_x20;
  
  FUN_100099c90(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10009ab84 | FUN_10009ab84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009ab84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10009abb8 | FUN_10009abb8 */

void FUN_10009abb8(void)

{
  long unaff_x20;
  
  FUN_100099cc4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10009abc4 | FUN_10009abc4 */

void FUN_10009abc4(void)

{
  long unaff_x20;
  
  FUN_100050f3c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10009abcc | FUN_10009abcc */

void FUN_10009abcc(void)

{
  long unaff_x20;
  
  FUN_100096f38(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10009abd4 | FUN_10009abd4 */

void FUN_10009abd4(void)

{
  FUN_100097068();
  return;
}


