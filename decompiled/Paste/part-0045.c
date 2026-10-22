/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100086c08 | thunk_FUN_100005df8 */

void thunk_FUN_100005df8(void)

{
  FUN_100005df8();
  return;
}



/* Address: 0x100086c0c | thunk_FUN_100025040 */

void thunk_FUN_100025040(void)

{
  FUN_100025040();
  return;
}



/* Address: 0x100086c10 | FUN_100086c10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100086df8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100086c10(undefined8 param_1,ID param_2,byte param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  URL UVar9;
  undefined *puVar10;
  undefined1 *self;
  ID IVar11;
  undefined8 *puVar12;
  AnyHashable AVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  undefined1 auStack_110 [72];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  String SStack_a0;
  undefined8 uStack_90;
  byte local_88;
  undefined1 auStack_80 [32];
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  IVar11 = param_2;
  FUN_10008747c();
  objc_stub::close(IVar11);
  lVar1 = _TtC5Paste24ItemPreviewWindowManager::entries;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::entries,auStack_80,0x21,0);
  uVar17 = *(ulong *)(unaff_x20 + lVar1);
  puVar19 = (ulong *)(uVar17 + 0x10);
  uVar14 = *puVar19;
  if (uVar14 == 0) {
    uVar16 = 0;
    uVar15 = 0;
  }
  else {
    this = Swift::MainActor::typeMetadataAccessor();
    lVar18 = 0x68;
    pMVar5 = this;
    uVar16 = 0;
    do {
      pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
      puVar6 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar12 = puVar6;
      UVar7 = Swift::Actor::get_unownedExecutor();
      pcVar8 = (char *)UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)pcVar8 & 1) == 0) {
        pcVar8 = "Paste/ItemPreviewWindowManager.swift";
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemPreviewWindowManager.swift",0x24,1,0x32,UVar7.unknown,puVar12);
      }
      FUN_1003541f4();
      UVar9.unknown = (undefined *)objc_stub::URIRepresentation((ID)pcVar8);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
      puVar10 = &DAT_100faa520;
      FUN_100003a00(&DAT_100faa520,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Hashable_100ea71c0);
      AVar13.unknown = puVar10;
      Swift::AnyHashable::_init(&local_c8,puVar10,UVar4.unknown);
      bVar3 = Swift::AnyHashable::___infix
                        ((undefined *)(uVar17 + lVar18 + -0x48),(AnyHashable)&local_c8,AVar13);
      FUN_100089674(&local_c8);
      _swift_release();
      uVar15 = uVar16 + 1;
      if (bVar3) {
        uVar14 = *puVar19;
        if (uVar14 - 1 != uVar16) {
          do {
            if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10008721c);
              (*pcVar2)();
            }
            pMVar5 = (MainActor *)(uVar17 + lVar18);
            FUN_100088604(pMVar5,&local_c8);
            pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
            puVar12 = puVar6;
            UVar7 = Swift::Actor::get_unownedExecutor();
            pcVar8 = (char *)UVar7;
            _swift_task_isCurrentExecutor();
            if (((ulong)pcVar8 & 1) == 0) {
              pcVar8 = "Paste/ItemPreviewWindowManager.swift";
              _swift_task_reportUnexpectedExecutor
                        ("Paste/ItemPreviewWindowManager.swift",0x24,1,0x32,UVar7.unknown,puVar12);
            }
            FUN_1003541f4();
            UVar9.unknown = (undefined *)objc_stub::URIRepresentation((ID)pcVar8);
            Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
            AVar13.unknown = puVar10;
            Swift::AnyHashable::_init(auStack_110,UVar9.unknown,UVar4.unknown);
            bVar3 = Swift::AnyHashable::___infix
                              ((AnyHashable)&local_c8,(AnyHashable)auStack_110,AVar13);
            FUN_100089674(auStack_110);
            _swift_release(pMVar5);
            FUN_100088638(&local_c8);
            if (!bVar3) {
              if (uVar15 != uVar16) {
                if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100087224);
                  (*pcVar2)();
                }
                uVar14 = *puVar19;
                if (uVar14 <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100087228);
                  (*pcVar2)();
                }
                FUN_100088604(uVar17 + 0x20 + uVar16 * 0x48,&local_c8);
                if ((long)uVar14 <= (long)uVar15) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10008722c);
                  (*pcVar2)();
                }
                FUN_100088604(uVar17 + lVar18,auStack_110);
                uVar14 = uVar17;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(unaff_x20 + lVar1) = uVar17;
                if ((uVar14 & 1) == 0) {
                  FUN_100089658();
                  *(ulong *)(unaff_x20 + lVar1) = uVar17;
                }
                if (*(ulong *)(uVar17 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100087230);
                  (*pcVar2)();
                }
                FUN_1000896ec(auStack_110,uVar17 + uVar16 * 0x48 + 0x20);
                *(ulong *)(unaff_x20 + lVar1) = uVar17;
                if (*(long *)(uVar17 + 0x10) <= (long)uVar15) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100087234);
                  (*pcVar2)();
                }
                FUN_1000896ec(&local_c8,uVar17 + lVar18);
                *(ulong *)(unaff_x20 + lVar1) = uVar17;
              }
              bVar3 = SCARRY8(uVar16,1);
              uVar16 = uVar16 + 1;
              if (bVar3) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100087220);
                (*pcVar2)();
              }
            }
            uVar15 = uVar15 + 1;
            puVar19 = (ulong *)(uVar17 + 0x10);
            uVar14 = *puVar19;
            lVar18 = lVar18 + 0x48;
          } while (uVar15 != uVar14);
        }
        if ((long)uVar15 < (long)uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100087238);
          (*pcVar2)();
        }
        goto LAB_100086e8c;
      }
      lVar18 = lVar18 + 0x48;
      uVar16 = uVar15;
    } while (uVar14 != uVar15);
    uVar16 = *puVar19;
    uVar15 = uVar16;
  }
LAB_100086e8c:
  FUN_100089840(uVar16,uVar15);
  self = auStack_80;
  _swift_endAccess();
  FUN_1003541f4();
  UVar9.unknown = (undefined *)objc_stub::URIRepresentation((ID)self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
  puVar10 = &DAT_100faa520;
  FUN_100003a00(&DAT_100faa520,PTR_typeMetadataAccessor_100ea71a8,
                PTR_Foundation__Foundation__URL_>Swift__Hashable_100ea71c0);
  Swift::AnyHashable::_init(&local_c8,puVar10,UVar4.unknown,puVar10);
  objc_stub::identifier(param_2);
  SStack_a0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_88 = param_3 & 1;
  uStack_90 = param_1;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_110,0x21,0);
  uVar15 = *(ulong *)(unaff_x20 + lVar1);
  uVar17 = uVar15;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar1) = uVar15;
  uVar14 = uVar15;
  if ((uVar17 & 1) == 0) {
    uVar14 = 0;
    FUN_100088754(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
    *(ulong *)(unaff_x20 + lVar1) = uVar14;
  }
  uVar17 = *(ulong *)(uVar14 + 0x10);
  uVar15 = uVar14;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar17) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    FUN_100088754(uVar15,uVar17 + 1,1,uVar14);
  }
  *(ulong *)(uVar15 + 0x10) = uVar17 + 1;
  lVar18 = uVar15 + uVar17 * 0x48;
  *(undefined8 *)(lVar18 + 0x28) = uStack_c0;
  *(undefined8 *)(lVar18 + 0x20) = local_c8;
  *(byte *)(lVar18 + 0x60) = local_88;
  *(char **)(lVar18 + 0x48) = SStack_a0.str;
  *(undefined8 *)(lVar18 + 0x40) = local_a8;
  *(undefined8 *)(lVar18 + 0x58) = uStack_90;
  *(void **)(lVar18 + 0x50) = SStack_a0.bridgeObject;
  *(undefined8 *)(lVar18 + 0x38) = uStack_b0;
  *(undefined8 *)(lVar18 + 0x30) = local_b8;
  *(ulong *)(unaff_x20 + lVar1) = uVar15;
  _swift_endAccess(auStack_110);
  IVar11 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_
            (IVar11,unaff_x20,"handleWindowWillClose:",
             *(undefined8 *)PTR__NSWindowWillCloseNotification_100ea9160,param_1);
  FUN_100087864(0);
  return;
}



/* Address: 0x10008727c | FUN_10008727c */

void FUN_10008727c(byte param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_c0 [40];
  _StringGuts local_98;
  _StringGuts _Stack_90;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC5Paste24ItemPreviewWindowManager::entries;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::entries,auStack_78,0,0);
  lVar11 = *(long *)(unaff_x20 + lVar2);
  lVar12 = *(long *)(lVar11 + 0x10);
  if (lVar12 != 0) {
    this = Swift::MainActor::typeMetadataAccessor();
    _swift_bridgeObjectRetain(lVar11);
    puVar1 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
    lVar13 = lVar12 * 0x48 + 0x18;
    do {
      if (*(long *)(lVar11 + 0x10) < lVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100087468);
        (*pcVar3)();
      }
      pMVar5 = (MainActor *)(lVar11 + lVar13 + -0x40);
      FUN_100088604(pMVar5,auStack_c0);
      pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
      puVar6 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,puVar1);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemPreviewWindowManager.swift",0x24,1,0x46,UVar7.unknown,puVar6);
      }
      if ((local_98.unknown == param_2) && (_Stack_90.unknown == param_3)) {
        _swift_release(pMVar5);
        FUN_100088638(auStack_c0);
LAB_1000873e0:
        _swift_bridgeObjectRelease(lVar11);
        _swift_beginAccess(unaff_x20 + lVar2,auStack_c0,0x21,0);
        uVar10 = *(ulong *)(unaff_x20 + lVar2);
        uVar9 = uVar10;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + lVar2) = uVar10;
        if ((uVar9 & 1) == 0) {
          FUN_100089658();
        }
        lVar11 = *(long *)(uVar10 + 0x10);
        if (lVar12 <= lVar11) {
          *(byte *)(uVar10 + lVar13) = param_1 & 1;
          *(ulong *)(unaff_x20 + lVar2) = uVar10;
          _swift_endAccess(auStack_c0);
          if (lVar11 != lVar12) {
            return;
          }
          FUN_100087864();
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10008747c);
        (*pcVar3)();
      }
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (local_98,_Stack_90,(_StringComparisonResult)(__int8)param_2);
      _swift_release(pMVar5);
      FUN_100088638(auStack_c0);
      if (bVar4) goto LAB_1000873e0;
      lVar13 = lVar13 + -0x48;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    _swift_bridgeObjectRelease(lVar11);
  }
  return;
}



/* Address: 0x10008747c | FUN_10008747c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000875a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_10008747c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  ID self;
  URL UVar5;
  AnyHashable AVar6;
  long unaff_x20;
  long lVar7;
  ID IVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(UVar4.unknown + -8) + 0x40));
  lVar7 = _TtC5Paste24ItemPreviewWindowManager::entries;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::entries,auStack_c8,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar7);
  uVar9 = *(ulong *)(lVar7 + 0x10);
  _swift_bridgeObjectRetain(lVar7);
  if (uVar9 != 0) {
    uVar10 = 0;
    IVar8 = lVar7 + 0x20;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10008764c);
        (*pcVar2)();
      }
      self = IVar8;
      FUN_100088604(IVar8,&local_110);
      uStack_138 = uStack_e8;
      local_140 = local_f0;
      uStack_128 = uStack_d8;
      uStack_130 = uStack_e0;
      local_120 = local_d0;
      uStack_158 = uStack_108;
      local_160 = local_110;
      uStack_148 = uStack_f8;
      uStack_150 = uStack_100;
      FUN_1003541f4();
      UVar5.unknown = (undefined *)objc_stub::URIRepresentation(self);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
      AVar6.unknown = &DAT_100faa520;
      FUN_100003a00(&DAT_100faa520,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Hashable_100ea71c0);
      Swift::AnyHashable::_init(&local_b0,AVar6.unknown,UVar4.unknown);
      bVar3 = Swift::AnyHashable::___infix((AnyHashable)&local_160,(AnyHashable)&local_b0,AVar6);
      FUN_100089674(&local_b0);
      if (bVar3) {
        _swift_bridgeObjectRelease(lVar7);
        uVar1 = uStack_128;
        uStack_88 = uStack_138;
        local_90 = local_140;
        local_78 = uStack_128;
        uStack_80 = uStack_130;
        local_70 = local_120;
        uStack_a8 = uStack_158;
        local_b0 = local_160;
        uStack_98 = uStack_148;
        uStack_a0 = uStack_150;
        FUN_100088638(&local_b0);
        return uVar1;
      }
      uVar10 = uVar10 + 1;
      FUN_100088638(&local_160);
      IVar8 = IVar8 + 0x48;
    } while (uVar9 != uVar10);
  }
  _swift_bridgeObjectRelease(lVar7);
  return 0;
}



/* Address: 0x10008764c | FUN_10008764c */

byte FUN_10008764c(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_2 + 2);
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar3)) {
    return 0;
  }
  return bVar1 ^ bVar2 ^ 1;
}



/* Address: 0x1000876a8 | FUN_1000876a8 */

undefined8 FUN_1000876a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48 [3];
  
  puVar1 = &DAT_100c27d00;
  _swift_getKeyPath(&DAT_100c27d00);
  puVar2 = &DAT_100c27d28;
  _swift_getKeyPath(&DAT_100c27d28);
  Combine::Published::_get_subscript(local_48);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_48[0];
}



/* Address: 0x10008771c | _TtC5Paste24ItemPreviewWindowManager::dealloc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste24ItemPreviewWindowManager::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_1);
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x1000877a4 | _TtC5Paste24ItemPreviewWindowManager::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste24ItemPreviewWindowManager::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + entries));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + popoverItemIdentifier + 8));
  lVar1 = _topmost;
  puVar2 = &DAT_100faa550;
  FUN_1000037f0(&DAT_100faa550,&DAT_100c29c30);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(param_1 + lVar1,puVar2);
  FUN_100004550(*(undefined8 *)(param_1 + onAllPreviewsClosed),
                ((undefined8 *)(param_1 + onAllPreviewsClosed))[1]);
  return;
}



/* Address: 0x100087824 | FUN_100087824 */

void FUN_100087824(void)

{
  FUN_10008782c(0);
  return;
}



/* Address: 0x10008782c | FUN_10008782c */

void FUN_10008782c(undefined8 param_1)

{
  if (DAT_100faa4f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca1c2c);
  return;
}



/* Address: 0x100087864 | FUN_100087864 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100087864(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  Published *unaff_x20;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  long lStack_80;
  undefined1 local_78;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_48;
  
  lVar2 = _TtC5Paste24ItemPreviewWindowManager::entries;
  _swift_beginAccess((long)&unaff_x20->unknown + _TtC5Paste24ItemPreviewWindowManager::entries,
                     auStack_a0,0,0);
  lVar2 = *(long *)((long)&unaff_x20->unknown + lVar2);
  lVar3 = *(long *)(lVar2 + 0x10);
  if (lVar3 == 0) {
    puVar1 = (undefined8 *)
             ((long)&unaff_x20->unknown +
             _TtC5Paste24ItemPreviewWindowManager::popoverItemIdentifier);
    lVar2 = puVar1[1];
    if (lVar2 == 0) {
      _swift_getKeyPath(&DAT_100c27d00);
      _swift_getKeyPath(&DAT_100c27d28);
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
    }
    else {
      uVar4 = *puVar1;
      _swift_getKeyPath(&DAT_100c27d00);
      _swift_getKeyPath(&DAT_100c27d28);
      local_78 = 0;
      local_88 = uVar4;
      lStack_80 = lVar2;
      _swift_bridgeObjectRetain(lVar2);
    }
    Combine::Published::_set_subscript();
  }
  else {
    FUN_100088604(lVar2 + lVar3 * 0x48 + -0x28,&local_88);
    _swift_getKeyPath(&DAT_100c27d00);
    _swift_getKeyPath(&DAT_100c27d28);
    local_b8 = local_60;
    uStack_b0 = uStack_58;
    local_a8 = local_48;
    _swift_bridgeObjectRetain(uStack_58);
    Combine::Published::_set_subscript(unaff_x20,&local_b8);
    FUN_100088638(&local_88);
  }
  return;
}



/* Address: 0x1000879dc | FUN_1000879dc */

void FUN_1000879dc(NSObject *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auStack_128 [72];
  undefined1 auStack_e0 [56];
  NSObject *local_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar3 = _TtC5Paste24ItemPreviewWindowManager::entries;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::entries,auStack_80,0,0);
  uVar18 = *(ulong *)(unaff_x20 + lVar3);
  puVar14 = (ulong *)(uVar18 + 0x10);
  uVar13 = *puVar14;
  _swift_beginAccess(unaff_x20 + lVar3,auStack_98,0x21,0);
  if (uVar13 != 0) {
    this = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
    puVar1 = PTR_typeMetadataAccessor_100eaec10;
    lVar16 = 0x58;
    pMVar5 = this;
    uVar15 = 0;
    do {
      pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
      puVar6 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,puVar1,puVar2);
      puVar9 = puVar6;
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemPreviewWindowManager.swift",0x24,1,0x5f,UVar7.unknown,puVar9);
      }
      FUN_1000896a8(0);
      bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                        (*(NSObject **)(uVar18 + lVar16),param_1);
      _swift_release();
      uVar17 = uVar15 + 1;
      if (bVar4) {
        uVar10 = *puVar14;
        if (uVar10 - 1 != uVar15) {
          lVar16 = lVar16 + 0x10;
          do {
            if (uVar10 <= uVar17) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d20);
              (*pcVar11)();
            }
            pMVar5 = (MainActor *)(uVar18 + lVar16);
            FUN_100088604(pMVar5,auStack_e0);
            pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
            puVar9 = puVar6;
            UVar7 = Swift::Actor::get_unownedExecutor();
            UVar8 = UVar7;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar8.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/ItemPreviewWindowManager.swift",0x24,1,0x5f,UVar7.unknown,puVar9);
            }
            bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix(local_a8,param_1);
            _swift_release(pMVar5);
            FUN_100088638(auStack_e0);
            if (!bVar4) {
              if (uVar17 != uVar15) {
                if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d28);
                  (*pcVar11)();
                }
                uVar10 = *puVar14;
                if (uVar10 <= uVar15) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d2c);
                  (*pcVar11)();
                }
                FUN_100088604(uVar18 + 0x20 + uVar15 * 0x48,auStack_e0);
                if ((long)uVar10 <= (long)uVar17) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d30);
                  (*pcVar11)();
                }
                FUN_100088604(uVar18 + lVar16,auStack_128);
                uVar10 = uVar18;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(unaff_x20 + lVar3) = uVar18;
                if ((uVar10 & 1) == 0) {
                  FUN_100089658();
                  *(ulong *)(unaff_x20 + lVar3) = uVar18;
                }
                if (*(ulong *)(uVar18 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d34);
                  (*pcVar11)();
                }
                FUN_1000896ec(auStack_128,uVar18 + uVar15 * 0x48 + 0x20);
                *(ulong *)(unaff_x20 + lVar3) = uVar18;
                if (*(long *)(uVar18 + 0x10) <= (long)uVar17) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d38);
                  (*pcVar11)();
                }
                FUN_1000896ec(auStack_e0,uVar18 + lVar16);
                *(ulong *)(unaff_x20 + lVar3) = uVar18;
              }
              bVar4 = SCARRY8(uVar15,1);
              uVar15 = uVar15 + 1;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d24);
                (*pcVar11)();
              }
            }
            uVar17 = uVar17 + 1;
            puVar14 = (ulong *)(uVar18 + 0x10);
            uVar10 = *puVar14;
            lVar16 = lVar16 + 0x48;
          } while (uVar17 != uVar10);
        }
        if ((long)uVar17 < (long)uVar15) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100087d3c);
          (*pcVar11)();
        }
        goto LAB_100087b38;
      }
      lVar16 = lVar16 + 0x48;
      uVar15 = uVar17;
    } while (uVar13 != uVar17);
  }
  uVar15 = *puVar14;
  uVar17 = uVar15;
LAB_100087b38:
  FUN_100089840(uVar15,uVar17);
  _swift_endAccess(auStack_98);
  FUN_100087864();
  if ((uVar13 != 0) && (*(long *)(*(long *)(unaff_x20 + lVar3) + 0x10) == 0)) {
    pcVar11 = *(code **)(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::onAllPreviewsClosed);
    if (pcVar11 != (code *)0x0) {
      uVar12 = ((undefined8 *)
               (unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::onAllPreviewsClosed))[1];
      _swift_retain(uVar12);
      (*pcVar11)();
      FUN_100004550(pcVar11,uVar12);
    }
  }
  return;
}



/* Address: 0x100087d3c | _TtC5Paste24ItemPreviewWindowManager::handleWindowWillClose: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste24ItemPreviewWindowManager::handleWindowWillClose_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar9;
  Notification NVar10;
  Notification NVar11;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  NVar10 = Foundation::Notification::typeMetadataAccessor();
  pvVar8 = NVar10.syncInProgress.bridgeObject;
  pcVar2 = NVar10.pastePaused.str;
  lVar9 = *(long *)(pcVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar9 + 0x40),pcVar2,NVar10.pastePaused.bridgeObject,
             NVar10.syncInProgress.str);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar6 = &DAT_100fa6bb0;
  pcVar7 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar1);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar6 = (undefined8 *)&DAT_00000024;
    pcVar7 = &DAT_00000001;
    pvVar8 = (void *)0x67;
    _swift_task_reportUnexpectedExecutor("Paste/ItemPreviewWindowManager.swift");
  }
  NVar10.pastePaused.bridgeObject = puVar6;
  NVar10.pastePaused.str = (char *)param_3;
  NVar10.syncInProgress.bridgeObject = pvVar8;
  NVar10.syncInProgress.str = pcVar7;
  NVar10 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar10);
  NVar11.pastePaused.bridgeObject = NVar10.pastePaused.bridgeObject;
  NVar11.pastePaused.str = (char *)param_1;
  NVar11.syncInProgress = NVar10.syncInProgress;
  Foundation::Notification::_get_object(NVar11);
  if (local_68 == 0) {
    (**(code **)(lVar9 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
    FUN_100013954(auStack_80);
  }
  else {
    uVar5 = 0;
    FUN_1000afc14(0);
    puVar6 = &local_88;
    _swift_dynamicCast(puVar6,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar5,6);
    if (((ulong)puVar6 & 1) != 0) {
      FUN_1000879dc(local_88);
    }
    (**(code **)(lVar9 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar2);
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100087ef0 | FUN_100087ef0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100087fa8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100087ef0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  _swift_getObjectType();
  puVar3 = &DAT_100faa550;
  FUN_1000037f0(&DAT_100faa550,&DAT_100c29c30);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined **)(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::entries) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::popoverItemIdentifier);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC5Paste24ItemPreviewWindowManager::_topmost;
  puVar4 = &DAT_100faa510;
  FUN_1000037f0(&DAT_100faa510,&DAT_100c27cb8);
  Combine::Published::init(auStack_70 + -extraout_x8,puVar4,puVar4);
  (**(code **)(lVar5 + 0x20))(unaff_x20 + lVar2,auStack_70 + -extraout_x8,puVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24ItemPreviewWindowManager::onAllPreviewsClosed);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff98,"init");
  return;
}



/* Address: 0x100087ffc | _TtC5Paste24ItemPreviewWindowManager::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste24ItemPreviewWindowManager::init(ID param_1,SEL param_2)

{
  FUN_100087ef0();
  return param_1;
}



/* Address: 0x10008801c | FUN_10008801c */

void FUN_10008801c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  undefined *puStack_28;
  
  local_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_38 = &DAT_100c27ca0;
  lVar1 = 0x13f;
  FUN_1000880a0();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c27ca0;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000880a0 | FUN_1000880a0 */

void FUN_1000880a0(void)

{
  undefined *puVar1;
  Published PVar2;
  
  if (DAT_100faa508.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100faa510;
    FUN_100005c24(&DAT_100faa510,&DAT_100c27cb8);
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100faa508 = PVar2;
    }
  }
  return;
}



/* Address: 0x100088100 | FUN_100088100 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100088100(long param_1)

{
  FUN_100004594();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  return 0;
}



/* Address: 0x10008812c | FUN_10008812c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_10008812c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x10008819c | FUN_10008819c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10008819c(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10008820c();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



/* Address: 0x10008820c | FUN_10008820c */

void FUN_10008820c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000882c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      param_1[4] = param_2[4];
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
        _swift_release(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Address: 0x10008836c | FUN_10008836c */

void FUN_10008836c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100088390 | FUN_100088390 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100088390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Address: 0x1000883f0 | FUN_1000883f0 */

int FUN_1000883f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100088438 | FUN_100088438 */

void FUN_100088438(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x41) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10008848c | FUN_10008848c */

undefined1  [16] FUN_10008848c(void)

{
  return ZEXT816(0x100eb3478);
}



/* Address: 0x10008849c | thunk_FUN_1000884a8 */

void thunk_FUN_1000884a8(void)

{
  FUN_1000884a8();
  return;
}



/* Address: 0x1000884a0 | FUN_1000884a0 */

void FUN_1000884a0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x1000884a8 | FUN_1000884a8 */

undefined8 * FUN_1000884a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1000884dc | FUN_1000884dc */

undefined8 * FUN_1000884dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x100088530 | FUN_100088530 */

undefined8 * FUN_100088530(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x10008856c | FUN_10008856c */

int FUN_10008856c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000885b4 | FUN_1000885b4 */

void FUN_1000885b4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1000885f4 | FUN_1000885f4 */

undefined1  [16] FUN_1000885f4(void)

{
  return ZEXT816(0x100eb3500);
}



/* Address: 0x100088604 | FUN_100088604 */

undefined8 FUN_100088604(undefined8 param_1,undefined8 param_2)

{
  FUN_10008812c(param_2,param_1,&DAT_100eb3478);
  return param_2;
}



/* Address: 0x100088638 | FUN_100088638 */

undefined8 FUN_100088638(undefined8 param_1)

{
  FUN_100088100(param_1,&DAT_100eb3478);
  return param_1;
}



/* Address: 0x100088664 | FUN_100088664 */

void FUN_100088664(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c27d00;
  _swift_getKeyPath(&DAT_100c27d00);
  puVar2 = &DAT_100c27d28;
  _swift_getKeyPath(&DAT_100c27d28);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000886cc | FUN_1000886cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000886cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  Published *pPVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  pPVar6 = (Published *)*param_2;
  puVar4 = &DAT_100c27d00;
  _swift_getKeyPath(&DAT_100c27d00);
  puVar5 = &DAT_100c27d28;
  _swift_getKeyPath(&DAT_100c27d28);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  Combine::Published::_set_subscript(pPVar6,&local_58,pPVar6,puVar4,puVar5);
  return;
}



/* Address: 0x100088754 | FUN_100088754 */

undefined * FUN_100088754(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088874);
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
    puVar3 = &DAT_100faa518;
    FUN_1000037f0(&DAT_100faa518,&DAT_100c27d48);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb3478);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100088874 | FUN_100088874 */

undefined * FUN_100088874(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088990);
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
    puVar3 = &DAT_100faa570;
    FUN_1000037f0(&DAT_100faa570,&DAT_100c27da8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb0008);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100088990 | FUN_100088990 */

void FUN_100088990(void)

{
  FUN_1000889c8();
  return;
}



/* Address: 0x1000889ac | FUN_1000889ac */

void FUN_1000889ac(void)

{
  FUN_1000889c8();
  return;
}



/* Address: 0x1000889c8 | FUN_1000889c8 */

undefined *
FUN_1000889c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088ad0);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    FUN_1000037f0(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar5 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 5) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar6,param_7);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 0x20 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 * 0x20);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Address: 0x100088ad0 | FUN_100088ad0 */

undefined * FUN_100088ad0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088bec);
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
    puVar3 = &DAT_100faa560;
    FUN_1000037f0(&DAT_100faa560,&DAT_100c27d88);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb0108);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100088bec | FUN_100088bec */

undefined * FUN_100088bec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088cf8);
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
    puVar3 = &DAT_100fa82e0;
    FUN_1000037f0(&DAT_100fa82e0,&DAT_100c25360);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Any_100eae0c0 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100088cf8 | FUN_100088cf8 */

undefined * FUN_100088cf8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088df8);
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
    puVar3 = &DAT_100fa9848;
    FUN_1000037f0(&DAT_100fa9848,&DAT_100c26df8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100088df8 | FUN_100088df8 */

undefined * FUN_100088df8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100088f28);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100faa540;
    FUN_1000037f0(&DAT_100faa540,&DAT_100c27d68);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100faa548;
    FUN_1000037f0(&DAT_100faa548,&DAT_100c27d70);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100088f28 | FUN_100088f28 */

undefined * FUN_100088f28(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100089044);
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
    puVar3 = &DAT_100faa538;
    FUN_1000037f0(&DAT_100faa538,&DAT_100c27d60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f33738);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100089044 | FUN_100089044 */

undefined * FUN_100089044(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10008914c);
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
    puVar3 = &DAT_100fa8ac8;
    FUN_1000037f0(&DAT_100fa8ac8,&DAT_100c26e00);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
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



/* Address: 0x10008914c | FUN_10008914c */

undefined * FUN_10008914c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10008924c);
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
    puVar3 = &DAT_100fa9828;
    FUN_1000037f0(&DAT_100fa9828,&DAT_100c27d80);
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



/* Address: 0x10008924c | FUN_10008924c */

undefined * FUN_10008924c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100089390);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fa9878;
    FUN_1000037f0(&DAT_100fa9878,&DAT_100c26e50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fa9868;
    FUN_1000037f0(&DAT_100fa9868,&DAT_100c26e40);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100089390 | FUN_100089390 */

void FUN_100089390(void)

{
  FUN_1000893c8();
  return;
}



/* Address: 0x1000893ac | FUN_1000893ac */

void FUN_1000893ac(void)

{
  FUN_1000893c8();
  return;
}



/* Address: 0x1000893c8 | FUN_1000893c8 */

undefined *
FUN_1000893c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100089540);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    FUN_1000037f0(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100089538);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10008953c);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar6;
}



/* Address: 0x100089540 | FUN_100089540 */

undefined * FUN_100089540(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100089658);
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
    puVar3 = &DAT_100faa568;
    FUN_1000037f0(&DAT_100faa568,&DAT_100c27d90);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eb37c0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100089658 | FUN_100089658 */

void FUN_100089658(long param_1)

{
  FUN_100088754(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10008966c | thunk_FUN_100088664 */

void thunk_FUN_100088664(void)

{
  FUN_100088664();
  return;
}



/* Address: 0x100089670 | thunk_FUN_1000886cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void thunk_FUN_1000886cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  Published *pPVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  pPVar6 = (Published *)*param_2;
  puVar4 = &DAT_100c27d00;
  _swift_getKeyPath(&DAT_100c27d00);
  puVar5 = &DAT_100c27d28;
  _swift_getKeyPath(&DAT_100c27d28);
  uStack_58 = uVar1;
  uStack_50 = uVar2;
  uStack_48 = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  Combine::Published::_set_subscript(pPVar6,&uStack_58,pPVar6,puVar4,puVar5);
  return;
}



/* Address: 0x100089674 | FUN_100089674 */

undefined8 FUN_100089674(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Swift_AnyHashable_100eacdb0 + -8) + 8))();
  return param_1;
}



/* Address: 0x1000896a8 | FUN_1000896a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000896a8(void)

{
  undefined *puVar1;
  
  if (DAT_100faa558 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSObject;
  _swift_getObjCClassMetadata();
  DAT_100faa558 = puVar1;
  return;
}



/* Address: 0x1000896ec | FUN_1000896ec */

undefined8 FUN_1000896ec(undefined8 param_1,undefined8 param_2)

{
  FUN_100088390(param_2,param_1,&DAT_100eb3478);
  return param_2;
}



/* Address: 0x100089720 | FUN_100089720 */

void FUN_100089720(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  __int64 minimumCapacity;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    minimumCapacity = *(__int64 *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    minimumCapacity = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  Swift::_ArrayBuffer::__consumeAndCreateNew(false,minimumCapacity,false,param_1);
  return;
}



/* Address: 0x100089770 | FUN_100089770 */

void FUN_100089770(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100089830);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + 0x20 + param_1 * 0x48;
  _swift_arrayDestroy(lVar8,lVar1,&DAT_100eb3478);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100089834);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100089838);
      (*pcVar3)();
    }
    pvVar4 = (void *)(lVar8 + param_3 * 0x48);
    pvVar5 = (void *)(lVar7 + 0x20 + param_2 * 0x48);
    sVar6 = (*(long *)(lVar7 + 0x10) - param_2) * 0x48;
    if (pvVar4 != pvVar5 || (void *)((long)pvVar5 + sVar6) <= pvVar4) {
      _memmove(pvVar4,pvVar5,sVar6);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10008983c);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100089840);
  (*pcVar3)();
}


