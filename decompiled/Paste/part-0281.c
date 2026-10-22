/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100378590 | FUN_100378590 */

void FUN_100378590(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc1660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc1650;
  FUN_100005c24(&DAT_100fc1650,&DAT_100c43680);
  puVar2 = &DAT_100fc1668;
  FUN_1000e8c70(&DAT_100fc1668,PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  local_30 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar3 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,puVar1,
             &local_30);
  DAT_100fc1660 = puVar3;
  return;
}



/* Address: 0x100378618 | FUN_100378618 */

undefined8 FUN_100378618(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100378660 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x100378664 | FUN_100378664 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100378664(long param_1)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  IVar1 = objc_stub::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  *(ID *)(unaff_x20 + 0x10) = IVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x18,0);
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000d4ca4(0);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  _swift_allocObject();
  uVar2 = 0x616f626574736150;
  FUN_1000d4624(0x616f626574736150,0xea00000000006472);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  puVar3 = &DAT_100c43730;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar3;
  *(long *)(unaff_x20 + 0x30) = param_1;
  if (param_1 == 0) {
    IVar1 = objc_stub::changeCount(*(ID *)(unaff_x20 + 0x10));
    *(ID *)(unaff_x20 + 0x30) = IVar1;
  }
  return;
}



/* Address: 0x10037875c | FUN_10037875c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10037875c(_ArrayBuffer param_1,ContiguousArray param_2)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  Data DVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  __int64 _Var7;
  undefined *self;
  ID IVar8;
  ContiguousArray CVar9;
  long lVar10;
  NSData *pNVar11;
  NSString *pNVar12;
  NSArray *pNVar13;
  __ContiguousArrayStorageBase *p_Var14;
  ContiguousArray CVar15;
  long unaff_x20;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  __ContiguousArrayStorageBase *p_Var20;
  __int64 _Var21;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  __ContiguousArrayStorageBase *local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    _Var21 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    _Var21 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  p_Var20 = (__ContiguousArrayStorageBase *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (_Var21 != 0) {
    local_68 = (__ContiguousArrayStorageBase *)PTR___swiftEmptyArrayStorage_100eae0d8;
    Swift::ContiguousArray::_reserveCapacity(_Var21,param_2);
    if (_Var21 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100378ac0);
      (*pcVar6)();
    }
    lVar18 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= lVar18) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100378a60);
          (*pcVar6)();
        }
        _Var7 = *(__int64 *)(param_1.unknown + lVar18 * 8 + 0x20);
      }
      else {
        _Var7 = lVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(lVar18,param_1);
      }
      self = &_OBJC_CLASS___NSPasteboardItem;
      _objc_allocWithZone();
      IVar8 = objc_stub::init((ID)self);
      lVar17 = _TtC9PasteCore14PasteboardItem::types;
      CVar15.unknown = auStack_80;
      _swift_beginAccess(_Var7 + _TtC9PasteCore14PasteboardItem::types,CVar15.unknown,0,0);
      lVar5 = _TtC9PasteCore14PasteboardItem::dataByType;
      CVar9.unknown = *(undefined **)(_Var7 + lVar17);
      lVar17 = *(long *)(CVar9.unknown + 0x10);
      if (lVar17 == 0) {
        CVar9.unknown = (undefined *)0x0;
      }
      else {
        _swift_bridgeObjectRetain();
        puVar19 = (undefined8 *)(CVar9.unknown + 0x28);
        do {
          lVar10 = puVar19[-1];
          puVar4 = (undefined1 *)*puVar19;
          CVar15.unknown = auStack_98;
          _swift_beginAccess(_Var7 + lVar5,CVar15.unknown,0x20,0);
          lVar16 = *(long *)(_Var7 + lVar5);
          if (*(long *)(lVar16 + 0x10) == 0) {
            _swift_endAccess(auStack_98);
          }
          else {
            _swift_bridgeObjectRetain(puVar4);
            _swift_bridgeObjectRetain(lVar16);
            CVar15.unknown = puVar4;
            FUN_100071370();
            if (((ulong)CVar15.unknown & 1) == 0) {
              _swift_endAccess(auStack_98);
              _swift_bridgeObjectRelease(puVar4);
              _swift_bridgeObjectRelease(lVar16);
            }
            else {
              puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar10 * 0x10);
              DVar3.unknown = (undefined *)*puVar1;
              CVar15.unknown = (undefined *)puVar1[1];
              FUN_1001037b4(DVar3.unknown,CVar15.unknown);
              _swift_endAccess(auStack_98);
              _swift_bridgeObjectRelease(lVar16);
              pNVar11 = Foundation::Data::_bridgeToObjectiveC(DVar3);
              pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(puVar4);
              objc_stub::FUN_100c0b380(IVar8,pNVar11,pNVar12);
              FUN_10003bf2c(DVar3.unknown);
            }
          }
          puVar19 = puVar19 + 2;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        _swift_bridgeObjectRelease();
      }
      lVar18 = lVar18 + 1;
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar9);
      CVar9.unknown = *(undefined **)(local_68 + 0x10);
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar9.unknown,CVar15);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar9.unknown,IVar8);
      Swift::ContiguousArray::__endMutation(CVar9);
      p_Var20 = local_68;
    } while (lVar18 != _Var21);
  }
  IVar8 = *(ID *)(unaff_x20 + 0x10);
  objc_stub::clearContents(IVar8);
  if ((ulong)p_Var20 >> 0x3e == 0) {
    p_Var14 = p_Var20;
    _swift_bridgeObjectRetain();
    Swift::__ContiguousArrayStorageBase::_get_staticElementType
              ((__ContiguousArrayStorageBase *)((ulong)p_Var20 & 0xffffffffffffff8),p_Var14);
    p_Var14 = p_Var20;
  }
  else {
    p_Var14 = (__ContiguousArrayStorageBase *)((ulong)p_Var20 & 0xffffffffffffff8);
    if ((__ContiguousArrayStorageBase *)0x7fffffffffffffff < p_Var20) {
      p_Var14 = p_Var20;
    }
    _swift_bridgeObjectRetain
              ((__ContiguousArrayStorageBase *)((ulong)p_Var20 & 0xffffffffffffff8),p_Var20);
    FUN_1000037f0(&DAT_100fc17b0,&DAT_100c43728);
    Swift::__bridgeCocoaArray();
    _swift_bridgeObjectRelease(p_Var20);
  }
  _swift_bridgeObjectRelease(p_Var20);
  FUN_1000037f0(&DAT_100fc17b0,&DAT_100c43728);
  pNVar13 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(p_Var14);
  objc_stub::FUN_100c11600(IVar8,pNVar13);
  IVar8 = objc_stub::changeCount(IVar8);
  *(ID *)(unaff_x20 + 0x30) = IVar8;
  return;
}



/* Address: 0x100378ac0 | FUN_100378ac0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100378ac0(void)

{
  ID IVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_1000da768(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x30))
            (0xd000000000000015,0x8000000100da3700,0xd00000000000001b,0x8000000100da3990,local_40,
             lStack_38);
  FUN_100004594(auStack_58);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    IVar1 = objc_stub::changeCount(*(ID *)(unaff_x20 + 0x10));
    *(ID *)(unaff_x20 + 0x30) = IVar1;
    IVar1 = NSTimer::scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
                      ((ID)&_OBJC_CLASS___NSTimer,0x3fd0000000000000);
    *(ID *)(unaff_x20 + 0x38) = IVar1;
    if (*(ID *)(unaff_x20 + 0x38) != 0) {
      objc_stub::setTolerance_(*(ID *)(unaff_x20 + 0x38),0x3f9999999999999a);
    }
  }
  return;
}



/* Address: 0x100378bc8 | FUN_100378bc8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100378bc8(void)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_1000da768(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x30))
            (0xd000000000000015,0x8000000100da3700,0xd00000000000001a,0x8000000100da39b0,local_40,
             lStack_38);
  FUN_100004594(auStack_58);
  if (*(ID *)(unaff_x20 + 0x38) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x38));
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  if (*(ID *)(unaff_x20 + 0x40) != 0) {
    objc_stub::invalidate(*(ID *)(unaff_x20 + 0x40));
  }
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  return 0;
}



/* Address: 0x100378c90 | _TtC9PasteCore10Pasteboard::handlePollTimer: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCore10Pasteboard::handlePollTimer_(ID param_1,SEL param_2,ID param_3)

{
  _swift_retain(param_1);
  FUN_10037a028();
  _swift_release(param_1);
  return;
}



/* Address: 0x100378cd0 | _TtC9PasteCore10Pasteboard::handleSyncTimer: */

/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCore10Pasteboard::handleSyncTimer_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  _swift_retain();
  FUN_1000da768(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x30))
            (0xd000000000000015,0x8000000100da3700,0xd000000000000010,0x8000000100da3720,local_40,
             lStack_38);
  FUN_100004594(auStack_58);
  FUN_100378df4();
  _swift_release(param_1);
  return;
}



/* Address: 0x100378d80 | FUN_100378d80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100378d80(void)

{
  long unaff_x20;
  
  FUN_1001683a4(unaff_x20 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100378dd4 | FUN_100378dd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100378dd4(void)

{
  return ZEXT816(0x100fc16b8);
}



/* Address: 0x100378df4 | FUN_100378df4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100378df4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  ID IVar6;
  undefined8 uVar7;
  _ArrayBuffer _Var8;
  ulong uVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  Data DVar14;
  ulong uVar15;
  void *extraout_x1;
  void *extraout_x1_00;
  _StringGuts _Var16;
  void *pvVar17;
  ulong extraout_x1_01;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  void *pvVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  ID IVar28;
  long unaff_x20;
  char *pcVar29;
  ulong uVar30;
  int iVar31;
  undefined1 *puVar32;
  ulong uVar33;
  uint uVar34;
  uint uVar35;
  long lVar36;
  long lVar37;
  undefined *puVar38;
  ulong uVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String separator;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  void *local_168;
  void *local_120;
  long local_118;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_90 [3];
  char *local_78;
  void *pvStack_70;
  
  IVar6 = objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar6 = objc_stub::frontmostApplication(IVar6);
  pvVar17 = extraout_x1;
  if ((IVar6 == 0) ||
     (IVar6 = objc_stub::bundleIdentifier(IVar6), pvVar17 = extraout_x1_00, IVar6 == 0)) {
    SVar40.bridgeObject = pvVar17;
    SVar40.str = (char *)0x6e776f6e6b6e75;
    puVar32 = &DAT_e700000000000000;
  }
  else {
    SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar32 = SVar40.bridgeObject;
  }
  FUN_1000da768(local_90,0);
  pvVar17 = pvStack_70;
  pcVar18 = local_78;
  _Var16.unknown = local_78;
  FUN_100004640(local_90);
  local_a8 = 0;
  local_a0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x20,_Var16);
  _swift_bridgeObjectRelease(local_a0);
  local_a8 = 0xd00000000000001e;
  local_a0 = 0x8000000100da3760;
  SVar41.bridgeObject = puVar32;
  SVar41.str = SVar40.str;
  SVar48.bridgeObject = param_4;
  SVar48.str = param_3;
  Swift::String::append(SVar41,SVar48);
  _swift_bridgeObjectRelease(puVar32);
  uVar7 = local_a0;
  (**(code **)((long)pvVar17 + 0x30))
            (0xd000000000000015,0x8000000100da3740,local_a8,local_a0,pcVar18,pvVar17);
  _swift_bridgeObjectRelease(uVar7);
  FUN_100004594(local_90);
  IVar28 = *(ID *)(unaff_x20 + 0x10);
  IVar6 = objc_stub::changeCount(IVar28);
  *(ID *)(unaff_x20 + 0x30) = IVar6;
  pcVar20 = (char *)0x0;
  _swift_beginAccess(unaff_x20 + 0x28,&local_a8,1);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(uVar7);
  objc_stub::FUN_100c10cc0(IVar28);
  pcVar18 = (char *)0x0;
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0xf,4,0);
  if (((bVar5 & 1) != 0) && (IVar6 = objc_stub::FUN_100bfd260(IVar28), IVar6 != 2)) {
    lVar36 = unaff_x20 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar36 == 0) {
      return;
    }
    IVar6 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100fc1818 != -1) {
      _swift_once(&DAT_100fc1818,FUN_10037a968);
    }
    objc_stub::postNotificationName_object_(IVar6,DAT_1010579b8,lVar36);
    _swift_unknownObjectRelease(lVar36);
    return;
  }
  _Var8.unknown = (undefined *)objc_stub::pasteboardItems(IVar28);
  if (_Var8.unknown == (undefined *)0x0) {
    FUN_1000da768(local_90);
    pvVar17 = pvStack_70;
    pcVar18 = local_78;
    FUN_100004640(local_90,local_78);
    (**(code **)((long)pvVar17 + 0x30))
              (0xd000000000000015,0x8000000100da3740,0xd00000000000001d,0x8000000100da3780,pcVar18,
               pvVar17);
    FUN_100004594(local_90);
    FUN_1000d468c(local_90);
    ppuVar11 = local_90;
    FUN_100004640(ppuVar11,local_78);
    FUN_1000d4e0c(0xd000000000000025,0x8000000100da37a0,local_78,pvStack_70,ppuVar11);
  }
  else {
    FUN_100379fe4(0);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var8.unknown >> 0x3e == 0) {
      uVar39 = *(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var8.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
        _Var1.unknown = _Var8.unknown;
      }
      uVar39 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    pcVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar39 != 0) {
      uVar33 = 0;
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f7c);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(_Var8.unknown + uVar33 * 8 + 0x20);
        }
        else {
          uVar9 = uVar33;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar33,_Var8);
        }
        bVar4 = SCARRY8(uVar33,1);
        uVar33 = uVar33 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f78);
          (*pcVar3)();
        }
        IVar6 = objc_stub::FUN_100c10cc0(uVar9);
        FUN_1002fc214(0);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        lVar36 = *(long *)(IVar6 + 0x10);
        if (lVar36 == 0) {
          _swift_bridgeObjectRelease(IVar6);
          puVar38 = puVar12;
        }
        else {
          pcVar18 = (char *)0x0;
          local_90[0] = puVar12;
          FUN_1003075b8(0,lVar36);
          do {
            puVar12 = local_90[0];
            SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            uVar9 = *(ulong *)(puVar12 + 0x10);
            local_90[0] = puVar12;
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar9) {
              pcVar18 = &DAT_00000001;
              FUN_1003075b8(1 < *(ulong *)(puVar12 + 0x18),uVar9 + 1);
            }
            puVar12 = local_90[0];
            *(ulong *)(local_90[0] + 0x10) = uVar9 + 1;
            *(String *)(local_90[0] + uVar9 * 0x10 + 0x20) = SVar40;
            lVar36 = lVar36 + -1;
          } while (lVar36 != 0);
          _swift_bridgeObjectRelease(IVar6);
          puVar38 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        pcVar29 = *(char **)(puVar12 + 0x10);
        lVar36 = *(long *)(pcVar21 + 0x10);
        if (SCARRY8(lVar36,(long)pcVar29)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f80);
          (*pcVar3)();
        }
        pcVar10 = pcVar21;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((int)pcVar10 == 0) ||
           (uVar9 = *(ulong *)(pcVar21 + 0x18) >> 1, (long)uVar9 < (long)(pcVar29 + lVar36))) {
          pcVar18 = &DAT_00000001;
          FUN_10037f834();
          uVar9 = *(ulong *)(pcVar10 + 0x18) >> 1;
          pcVar20 = pcVar21;
          pcVar21 = pcVar10;
        }
        if (*(long *)(puVar12 + 0x10) == 0) {
          _swift_bridgeObjectRelease(puVar12);
          if (pcVar29 != (char *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f84);
            (*pcVar3)();
          }
        }
        else {
          if ((char *)(uVar9 - *(long *)(pcVar21 + 0x10)) < pcVar29) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f90);
            (*pcVar3)();
          }
          pcVar18 = pcVar29;
          pcVar20 = PTR___type_metadata_for_Swift_String_100eac208;
          _swift_arrayInitWithCopy(pcVar21 + *(long *)(pcVar21 + 0x10) * 0x10 + 0x20,puVar12 + 0x20)
          ;
          _swift_bridgeObjectRelease(puVar12);
          if (pcVar29 != (char *)0x0) {
            if (SCARRY8(*(long *)(pcVar21 + 0x10),(long)pcVar29)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100379fb0);
              (*pcVar3)();
            }
            *(char **)(pcVar21 + 0x10) = pcVar29 + *(long *)(pcVar21 + 0x10);
          }
        }
        puVar12 = puVar38;
      } while (uVar33 != uVar39);
    }
    FUN_1000da768(local_90);
    pvVar17 = pvStack_70;
    pcVar29 = local_78;
    _Var16.unknown = local_78;
    FUN_100004640(local_90);
    local_c0 = 0;
    local_b8 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x16,_Var16);
    _swift_bridgeObjectRelease(local_b8);
    local_c0 = 0x6576656972746552;
    local_b8 = 0xea00000000002064;
    SVar40 = Swift::CustomStringConvertible::get_description();
    SVar49.bridgeObject = pcVar20;
    SVar49.str = pcVar18;
    Swift::String::append(SVar40,SVar49);
    _swift_bridgeObjectRelease(SVar40.bridgeObject);
    SVar42.bridgeObject = &DAT_e800000000000000;
    SVar42.str = (char *)0x203a736570797420;
    SVar50.bridgeObject = pcVar20;
    SVar50.str = pcVar18;
    Swift::String::append(SVar42,SVar50);
    pcVar18 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    pcVar20 = pcVar18;
    FUN_100310704();
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x202c;
    SVar40 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    SVar51.bridgeObject = pcVar20;
    SVar51.str = pcVar18;
    Swift::String::append(SVar40,SVar51);
    _swift_bridgeObjectRelease(SVar40.bridgeObject);
    uVar7 = local_b8;
    (**(code **)((long)pvVar17 + 0x30))
              (0xd000000000000015,0x8000000100da3740,local_c0,local_b8,pcVar29,pvVar17);
    _swift_bridgeObjectRelease(uVar7);
    FUN_100004594(local_90);
    lVar36 = unaff_x20 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar36 != 0) {
      pcVar18 = pcVar21;
      FUN_10037ba14();
      _swift_unknownObjectRelease(lVar36);
      if (((ulong)pcVar18 & 1) == 0) {
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(pcVar21);
        FUN_1000da768(local_90);
        FUN_100004640(local_90,local_78);
        (**(code **)((long)pvStack_70 + 0x30))
                  (0xd000000000000015,0x8000000100da3740,0xd000000000000026,0x8000000100da3930,
                   local_78,pvStack_70);
        goto LAB_100379f44;
      }
    }
    FUN_1000da768(local_90);
    pvVar17 = pvStack_70;
    pcVar20 = local_78;
    FUN_100004640(local_90,local_78);
    pcVar18 = (char *)0xd000000000000021;
    pvVar22 = (void *)0x8000000100da37d0;
    (**(code **)((long)pvVar17 + 0x30))
              (0xd000000000000015,0x8000000100da3740,0xd000000000000021,0x8000000100da37d0,pcVar20,
               pvVar17);
    FUN_100004594(local_90);
    if (uVar39 != 0) {
      uVar33 = 0;
      local_120 = (void *)0x8000000100da3880;
      local_118 = 0;
      local_168 = (void *)0x8000000100da38f0;
      do {
        if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100379fb4);
            (*pcVar3)();
          }
          uVar9 = *(ulong *)(_Var8.unknown + uVar33 * 8 + 0x20);
        }
        else {
          uVar9 = uVar33;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar33,_Var8);
        }
        bVar4 = SCARRY8(uVar33,1);
        uVar33 = uVar33 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f94);
          (*pcVar3)();
        }
        IVar6 = 0;
        FUN_100381740();
        _objc_allocWithZone();
        IVar6 = objc_stub::init(IVar6);
        IVar28 = objc_stub::FUN_100c10cc0(uVar9);
        FUN_1002fc214(0);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        lVar2 = _TtC9PasteCore14PasteboardItem::dataByType;
        lVar36 = _TtC9PasteCore14PasteboardItem::types;
        SVar46.bridgeObject = pvVar22;
        SVar46.str = pcVar18;
        lVar24 = *(long *)(IVar28 + 0x10);
        if (lVar24 != 0) {
          lVar37 = 0;
          do {
            pcVar29 = *(char **)(IVar28 + 0x20 + lVar37 * 8);
            lVar37 = lVar37 + 1;
            SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pvVar17 = SVar40.bridgeObject;
            pcVar20 = SVar40.str;
            lVar13 = *(long *)(pcVar21 + 0x10) + 1;
            pcVar18 = pcVar21 + 0x28;
            do {
              pvVar22 = SVar46.bridgeObject;
              lVar13 = lVar13 + -1;
              if (lVar13 == 0) goto LAB_100379798;
              pcVar10 = pcVar18 + -8;
              _Var16.unknown = *(undefined **)pcVar18;
              pcVar19 = (char *)0xd00000000000001d;
              if (*(undefined **)pcVar10 == (undefined *)0xd00000000000001d &&
                  _Var16.unknown == (undefined *)0x8000000100da3800) break;
              pcVar18 = pcVar18 + 0x10;
              pvVar22 = (void *)0x8000000100da3800;
              bVar4 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)*(undefined **)pcVar10,_Var16,
                                 (_StringComparisonResult)0x1d);
              SVar46.bridgeObject = pvVar22;
              SVar46.str = pcVar19;
            } while (!bVar4);
            puVar12 = &DAT_100fc1bf0;
            FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
            _swift_initStaticObject();
            pcVar18 = pcVar20;
            FUN_10012eef0(pcVar20,pvVar17,puVar12);
            pcVar10 = PTR___type_metadata_for_Swift_String_100eac208;
            _swift_arrayDestroy(puVar12 + 0x20,3);
            SVar46.bridgeObject = pvVar22;
            SVar46.str = pcVar10;
            if (((ulong)pcVar18 & 1) == 0) {
              _swift_bridgeObjectRelease(pvVar17);
LAB_1003796b8:
              SVar46.bridgeObject = pvVar22;
              SVar46.str = pcVar10;
            }
            else {
LAB_100379798:
              lVar13 = unaff_x20 + 0x18;
              _swift_unknownObjectWeakLoadStrong();
              pvVar22 = SVar46.bridgeObject;
              if (lVar13 == 0) {
                _swift_bridgeObjectRelease(pvVar17);
              }
              else {
                pcVar10 = pcVar21;
                FUN_10037c22c(pcVar20,pvVar17);
                _swift_unknownObjectRelease(lVar13);
                _swift_bridgeObjectRelease(pvVar17);
                SVar46.bridgeObject = pvVar22;
                SVar46.str = pcVar10;
                if (((ulong)pcVar20 & 1) == 0) goto LAB_1003796b8;
              }
              FUN_1000da768(local_90);
              pvVar17 = pvStack_70;
              pcVar18 = local_78;
              _Var16.unknown = local_78;
              FUN_100004640(local_90);
              Swift::_StringGuts::grow(0x18,_Var16);
              _swift_bridgeObjectRelease(0xe000000000000000);
              SVar40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              Swift::String::append(SVar40,SVar46);
              _swift_bridgeObjectRelease(SVar40.bridgeObject);
              pvVar22 = local_120;
              (**(code **)((long)pvVar17 + 0x30))
                        (0xd000000000000015,0x8000000100da3740,0xd000000000000016,0x8000000100da3880
                         ,pcVar18,pvVar17);
              _swift_bridgeObjectRelease(0x8000000100da3880);
              FUN_100004594(local_90);
              DVar14.unknown = (undefined *)objc_stub::FUN_100c008a0(uVar9);
              pcVar10 = pcVar29;
              if (DVar14.unknown == (undefined *)0x0) goto LAB_1003796b8;
              uVar27 = extraout_x1_01;
              DVar14 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar14);
              uVar35 = (uint)(uVar27 >> 0x20);
              uVar34 = uVar35 >> 0x1e;
              iVar31 = (int)DVar14.unknown;
              iVar23 = (int)((ulong)DVar14.unknown >> 0x20);
              if (uVar35 >> 0x1e < 2) {
                if (uVar34 == 0) {
                  uVar25 = uVar27 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar23,iVar31)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f88);
                    (*pcVar3)();
                  }
                  uVar25 = (ulong)(iVar23 - iVar31);
                }
              }
              else if (uVar34 == 2) {
                uVar25 = *(long *)(DVar14.unknown + 0x18) - *(long *)(DVar14.unknown + 0x10);
                if (SBORROW8(*(long *)(DVar14.unknown + 0x18),*(long *)(DVar14.unknown + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f8c);
                  (*pcVar3)();
                }
              }
              else {
                uVar25 = 0;
              }
              if (SCARRY8(local_118,uVar25)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f70);
                (*pcVar3)();
              }
              uVar35 = uVar35 >> 0x1e;
              if ((long)(local_118 + uVar25) < 0x40000001) {
                if (uVar35 < 2) {
                  if (uVar34 == 0) {
                    uVar25 = uVar27 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar23,iVar31)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f9c);
                      (*pcVar3)();
                    }
                    uVar25 = (ulong)(iVar23 - iVar31);
                  }
                }
                else if (uVar34 == 2) {
                  uVar25 = *(long *)(DVar14.unknown + 0x18) - *(long *)(DVar14.unknown + 0x10);
                  if (SBORROW8(*(long *)(DVar14.unknown + 0x18),*(long *)(DVar14.unknown + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100379fa0);
                    (*pcVar3)();
                  }
                }
                else {
                  uVar25 = 0;
                }
                bVar4 = SCARRY8(local_118,uVar25);
                local_118 = local_118 + uVar25;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f74);
                  (*pcVar3)();
                }
                SVar46 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                pvVar17 = SVar46.bridgeObject;
                _swift_beginAccess(IVar6 + lVar36,local_90,0x21,0);
                uVar30 = *(ulong *)(IVar6 + lVar36);
                FUN_1001037b4(DVar14.unknown,uVar27);
                _swift_bridgeObjectRetain(pvVar17);
                uVar25 = uVar30;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(IVar6 + lVar36) = uVar30;
                uVar15 = uVar30;
                if ((uVar25 & 1) == 0) {
                  uVar15 = 0;
                  FUN_10037f834(0,*(long *)(uVar30 + 0x10) + 1,1,uVar30);
                  *(ulong *)(IVar6 + lVar36) = uVar15;
                }
                uVar25 = *(ulong *)(uVar15 + 0x10);
                uVar30 = uVar15;
                if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar25) {
                  uVar30 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
                  FUN_10037f834(uVar30,uVar25 + 1,1,uVar15);
                }
                *(ulong *)(uVar30 + 0x10) = uVar25 + 1;
                *(String *)(uVar30 + uVar25 * 0x10 + 0x20) = SVar46;
                *(ulong *)(IVar6 + lVar36) = uVar30;
                _swift_endAccess(local_90);
                _swift_beginAccess(IVar6 + lVar2,local_90,0x21,0);
                FUN_1001037b4(DVar14.unknown,uVar27);
                uVar7 = *(undefined8 *)(IVar6 + lVar2);
                _swift_isUniquelyReferenced_nonNull_native(uVar7);
                uVar26 = *(undefined8 *)(IVar6 + lVar2);
                *(undefined8 *)(IVar6 + lVar2) = 0x8000000000000000;
                FUN_100380ebc(DVar14.unknown,uVar27,SVar46.str,pvVar17,uVar7);
                _swift_bridgeObjectRelease(pvVar17);
                *(undefined8 *)(IVar6 + lVar2) = uVar26;
                _swift_endAccess(local_90);
                FUN_10003bf2c(DVar14.unknown,uVar27);
                FUN_10003bf2c(DVar14.unknown,uVar27);
              }
              else {
                FUN_1000d468c(local_90,0);
                pvVar17 = pvStack_70;
                pcVar18 = local_78;
                _Var16.unknown = local_78;
                FUN_100004640(local_90);
                Swift::_StringGuts::grow(0x44,_Var16);
                SVar43.bridgeObject = (void *)0x8000000100da38a0;
                SVar43.str = (char *)0xd000000000000019;
                SVar52.bridgeObject = pvVar22;
                SVar52.str = pcVar29;
                Swift::String::append(SVar43,SVar52);
                SVar40 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                SVar53.bridgeObject = pvVar22;
                SVar53.str = pcVar29;
                Swift::String::append(SVar40,SVar53);
                _swift_bridgeObjectRelease(SVar40.bridgeObject);
                SVar44.bridgeObject = &SUB_e200000000000000;
                SVar44.str = (char *)0x203a;
                SVar54.bridgeObject = pvVar22;
                SVar54.str = pcVar29;
                Swift::String::append(SVar44,SVar54);
                if (uVar35 < 2) {
                  if ((uVar35 != 0) && (SBORROW4(iVar23,iVar31))) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100379fa4);
                    (*pcVar3)();
                  }
                }
                else if ((uVar35 == 2) &&
                        (SBORROW8(*(long *)(DVar14.unknown + 0x18),*(long *)(DVar14.unknown + 0x10))
                        )) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100379f98);
                  (*pcVar3)();
                }
                SVar40 = Swift::CustomStringConvertible::get_description();
                SVar55.bridgeObject = pvVar22;
                SVar55.str = pcVar29;
                Swift::String::append(SVar40,SVar55);
                _swift_bridgeObjectRelease(SVar40.bridgeObject);
                SVar45.bridgeObject = (void *)0x8000000100da38c0;
                SVar45.str = (char *)0xd000000000000025;
                SVar56.bridgeObject = pvVar22;
                SVar56.str = pcVar29;
                Swift::String::append(SVar45,SVar56);
                FUN_1000d4df0(0,0xe000000000000000);
                _swift_bridgeObjectRelease(0xe000000000000000);
                FUN_100004594(local_90);
                FUN_1000da768(local_90);
                pvVar22 = pvStack_70;
                pcVar20 = local_78;
                _Var16.unknown = local_78;
                FUN_100004640();
                Swift::_StringGuts::grow(0x2d,_Var16);
                _swift_bridgeObjectRelease(0xe000000000000000);
                if (uVar34 < 2) {
                  if ((uVar35 != 0) && (SBORROW4(iVar23,iVar31))) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x100379fa8);
                    (*pcVar3)();
                  }
                }
                else if ((uVar35 == 2) &&
                        (SBORROW8(*(long *)(DVar14.unknown + 0x18),*(long *)(DVar14.unknown + 0x10))
                        )) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100379fac);
                  (*pcVar3)();
                }
                SVar40 = Swift::CustomStringConvertible::get_description();
                SVar57.bridgeObject = pvVar17;
                SVar57.str = pcVar18;
                Swift::String::append(SVar40,SVar57);
                _swift_bridgeObjectRelease(SVar40.bridgeObject);
                SVar47.bridgeObject = (void *)0x8000000100da3910;
                SVar47.str = (char *)0xd000000000000011;
                SVar58.bridgeObject = pvVar17;
                SVar58.str = pcVar18;
                Swift::String::append(SVar47,SVar58);
                SVar40 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                SVar59.bridgeObject = pvVar17;
                SVar59.str = pcVar18;
                Swift::String::append(SVar40,SVar59);
                _swift_bridgeObjectRelease(SVar40.bridgeObject);
                pcVar18 = (char *)0xd000000000000018;
                pvVar17 = local_168;
                (**(code **)((long)pvVar22 + 0x30))
                          (0xd000000000000015,0x8000000100da3740,0xd000000000000018,
                           0x8000000100da38f0,pcVar20,pvVar22);
                FUN_10003bf2c(DVar14.unknown,uVar27);
                _swift_bridgeObjectRelease(0x8000000100da38f0);
                FUN_100004594(local_90);
                SVar46.bridgeObject = pvVar17;
                SVar46.str = pcVar18;
              }
            }
          } while (lVar37 != lVar24);
        }
        _swift_bridgeObjectRelease(IVar28);
        lVar36 = _TtC9PasteCore14PasteboardItem::types;
        pcVar18 = (char *)0x0;
        pvVar22 = (void *)0x0;
        _swift_beginAccess(IVar6 + _TtC9PasteCore14PasteboardItem::types,&local_c0);
        if (*(long *)(*(long *)(IVar6 + lVar36) + 0x10) != 0) {
          pcVar18 = (char *)0x21;
          pvVar22 = (void *)0x0;
          _swift_beginAccess(unaff_x20 + 0x28,local_90);
          Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
          uVar27 = *(ulong *)(unaff_x20 + 0x28) & 0xffffffffffffff8;
          uVar9 = *(ulong *)(uVar27 + 0x10);
          uVar27 = *(ulong *)(uVar27 + 0x18);
          if (uVar27 >> 1 <= uVar9) {
            pcVar18 = &DAT_00000001;
            Swift::Array<undefined>::__createNewBuffer(1 < uVar27,uVar9 + 1);
          }
          Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar9,IVar6);
          _swift_endAccess(local_90);
        }
      } while (uVar33 != uVar39);
    }
    _swift_bridgeObjectRelease(pcVar21);
    _swift_bridgeObjectRelease(_Var8.unknown);
    FUN_1000da768(local_90);
    pvVar17 = pvStack_70;
    pcVar18 = local_78;
    FUN_100004640(local_90,local_78);
    (**(code **)((long)pvVar17 + 0x30))
              (0xd000000000000015,0x8000000100da3740,0xd000000000000034,0x8000000100da3840,pcVar18,
               pvVar17);
    FUN_100004594(local_90);
    lVar36 = unaff_x20 + 0x18;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar36 != 0) {
      FUN_10037b428(unaff_x20);
      _swift_unknownObjectRelease(lVar36);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined **)(unaff_x20 + 0x28) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRelease(uVar7);
    FUN_1000da768(local_90);
    FUN_100004640(local_90,local_78);
    (**(code **)((long)pvStack_70 + 0x30))
              (0xd000000000000015,0x8000000100da3740,0x656e6f64206c6c41,&DAT_e800000000000000,
               local_78,pvStack_70);
  }
LAB_100379f44:
  FUN_100004594(local_90);
  return;
}



/* Address: 0x100379fe4 | FUN_100379fe4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100379fe4(void)

{
  undefined *puVar1;
  
  if (DAT_100fc1750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSPasteboardItem;
  _swift_getObjCClassMetadata();
  DAT_100fc1750 = puVar1;
  return;
}



/* Address: 0x10037a028 | FUN_10037a028 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037a028(void)

{
  ID IVar1;
  long unaff_x20;
  ID self;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  self = *(ID *)(unaff_x20 + 0x10);
  IVar1 = objc_stub::changeCount(self);
  if (IVar1 != *(ID *)(unaff_x20 + 0x30)) {
    FUN_1000da768(auStack_68);
    FUN_100004640(auStack_68,local_50);
    (**(code **)(lStack_48 + 0x30))
              (0xd000000000000015,0x8000000100da3700,0xd00000000000002f,0x8000000100da3960,local_50,
               lStack_48);
    FUN_100004594(auStack_68);
    IVar1 = objc_stub::changeCount(self);
    *(ID *)(unaff_x20 + 0x30) = IVar1;
    if (*(ID *)(unaff_x20 + 0x40) != 0) {
      objc_stub::invalidate(*(ID *)(unaff_x20 + 0x40));
    }
    IVar1 = objc_stub::scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
                      ((ID)&_OBJC_CLASS___NSTimer,0x3fd3333333333333);
    *(ID *)(unaff_x20 + 0x40) = IVar1;
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x10037a140 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10037a144 | FUN_10037a144 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010037a5b4) */

undefined8 FUN_10037a144(undefined *param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  __int64 _Var9;
  NSString *pNVar10;
  ID IVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  _ArrayBuffer _Var19;
  __int64 _Var20;
  undefined8 *puVar21;
  long lVar22;
  undefined *local_a0 [2];
  undefined *local_90;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar5 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar5 != 0) {
    lVar5 = 0;
    FUN_100383d70();
    _swift_initStackObject();
    puVar6 = &DAT_100fc1bf0;
    FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
    _swift_initStaticObject();
    *(undefined **)(lVar5 + 0x10) = param_1;
    *(undefined **)(lVar5 + 0x18) = puVar6;
    _swift_bridgeObjectRetain(param_1);
    FUN_10038222c();
    uVar12 = *(ulong *)(param_2 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar12 != 0) {
      uVar18 = 0;
      do {
        if (*(ulong *)(param_2 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a650);
          (*pcVar3)();
        }
        _Var19.unknown = *(undefined **)(param_2 + 0x20 + uVar18 * 8);
        if ((ulong)_Var19.unknown >> 0x3e == 0) {
          _Var20 = *(__int64 *)((_Var19.unknown & 0xffffffffffffff8U) + 0x10);
        }
        else {
          _Var1.unknown = _Var19.unknown & 0xffffffffffffff8U;
          if (((ulong)_Var19.unknown & 0x8000000000000000) != 0) {
            _Var1.unknown = _Var19.unknown;
          }
          _Var20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        uVar15 = (ulong)puVar6 >> 0x3e;
        if (uVar15 == 0) {
          lVar5 = *(long *)((undefined *)((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if (((ulong)puVar6 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar6;
          }
          lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (SCARRY8(lVar5,_Var20)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a654);
          (*pcVar3)();
        }
        lVar5 = lVar5 + _Var20;
        _swift_bridgeObjectRetain(_Var19.unknown);
        puVar7 = puVar6;
        _swift_isUniquelyReferenced_nonNull_bridgeObject();
        iVar4 = 0;
        if (uVar15 == 0) {
          iVar4 = (int)puVar7;
        }
        local_a0[0] = puVar6;
        if ((iVar4 != 1) ||
           (uVar13 = (ulong)puVar6 & 0xffffffffffffff8,
           (long)(*(ulong *)(uVar13 + 0x18) >> 1) < lVar5)) {
          if (uVar15 == 0) {
            lVar22 = *(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if (((ulong)puVar6 & 0x8000000000000000) != 0) {
              _Var1.unknown = puVar6;
            }
            lVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          }
          if (lVar22 <= lVar5) {
            lVar22 = lVar5;
          }
          Swift::Array<undefined>::__createNewBuffer(iVar4,lVar22,1);
          uVar13 = (ulong)local_a0[0] & 0xffffffffffffff8;
        }
        puVar6 = local_a0[0];
        lVar5 = *(long *)(uVar13 + 0x10);
        uVar15 = (*(ulong *)(uVar13 + 0x18) >> 1) - lVar5;
        if ((ulong)_Var19.unknown >> 0x3e == 0) {
          uVar14 = *(ulong *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10);
          if (uVar14 == 0) goto LAB_10037a200;
          if (uVar15 < uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a664);
            (*pcVar3)();
          }
          uVar8 = 0;
          FUN_100381740(0);
          _swift_arrayInitWithCopy
                    (uVar13 + lVar5 * 8 + 0x20,((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x20,
                     uVar14,uVar8);
LAB_10037a4a0:
          _swift_bridgeObjectRelease(_Var19.unknown);
          if ((long)uVar14 < _Var20) goto LAB_10037a654;
          if (0 < (long)uVar14) {
            if (SCARRY8(*(long *)(uVar13 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a65c);
              (*pcVar3)();
            }
            *(ulong *)(uVar13 + 0x10) = *(long *)(uVar13 + 0x10) + uVar14;
          }
        }
        else {
          _Var1.unknown = _Var19.unknown & 0xffffffffffffff8;
          if (((ulong)_Var19.unknown & 0x8000000000000000) != 0) {
            _Var1.unknown = _Var19.unknown;
          }
          _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          if (_Var9 != 0) {
            uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
            if ((long)uVar15 < (long)uVar14) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a660);
              (*pcVar3)();
            }
            if (_Var9 < 1) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a668);
              (*pcVar3)();
            }
            lVar5 = uVar13 + lVar5 * 8;
            puVar17 = (undefined8 *)(lVar5 + 0x20);
            if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
              *puVar17 = *(undefined8 *)(_Var19.unknown + 0x20);
              uVar15 = _Var9 - 1;
              if (uVar15 != 0) {
                if (_Var9 - 2U < 7) {
                  lVar22 = 1;
                }
                else {
                  uVar16 = uVar15 & 0xfffffffffffffff8;
                  puVar21 = (undefined8 *)(_Var19.unknown + 0x30);
                  lVar22 = 1;
                  puVar2 = (undefined8 *)(lVar5 + 0x60);
                  do {
                    puVar17 = puVar2;
                    puVar17[-7] = puVar21[-1];
                    puVar17[-6] = *puVar21;
                    puVar17[-5] = puVar21[1];
                    puVar17[-4] = puVar21[2];
                    puVar17[-3] = puVar21[3];
                    puVar17[-2] = puVar21[4];
                    puVar17[-1] = puVar21[5];
                    lVar22 = lVar22 + 8;
                    *puVar17 = puVar21[6];
                    puVar21 = puVar21 + 8;
                    uVar16 = uVar16 - 8;
                    puVar2 = puVar17 + 8;
                  } while (uVar16 != 0);
                }
                uVar15 = uVar15 & 7;
                if (uVar15 != 0) {
                  puVar21 = (undefined8 *)(_Var19.unknown + lVar22 * 8 + 0x20);
                  do {
                    puVar17 = puVar17 + 1;
                    *puVar17 = *puVar21;
                    uVar15 = uVar15 - 1;
                    puVar21 = puVar21 + 1;
                  } while (uVar15 != 0);
                }
              }
            }
            else {
              lVar5 = 0;
              do {
                lVar22 = lVar5;
                Swift::_ArrayBuffer::__getElementSlowPath(lVar5,_Var19);
                puVar17[lVar5] = lVar22;
                lVar5 = lVar5 + 1;
              } while (_Var9 != lVar5);
            }
            goto LAB_10037a4a0;
          }
LAB_10037a200:
          _swift_bridgeObjectRelease(_Var19.unknown);
          if (0 < _Var20) {
LAB_10037a654:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10037a658);
            (*pcVar3)();
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar12);
    }
    _swift_bridgeObjectRelease(param_2);
    FUN_10037aa3c();
    FUN_10037875c(puVar6);
    _swift_bridgeObjectRelease(puVar6);
    _swift_release(param_2);
    IVar11 = *(ID *)(unaff_x20 + 0x90);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x88) + 0x30);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::FUN_100c0c3e0(IVar11,uVar8,pNVar10);
    local_90 = param_1;
    FUN_1002ff310(FUN_10037b620,local_a0);
    FUN_1000da768(local_a0);
    objc_stub::removeAllActions((ID)local_a0[0]);
    IVar11 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100fc17f0 != -1) {
      _swift_once(&DAT_100fc17f0,FUN_10037a7b8);
    }
    objc_stub::postNotificationName_object_(IVar11,DAT_1010579a0,unaff_x20);
    _swift_bridgeObjectRelease(param_1);
  }
  return 0;
}



/* Address: 0x10037a698 | FUN_10037a698 */

void FUN_10037a698(void)

{
  DAT_101057990 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10037a6cc | FUN_10037a6cc */

undefined8 * FUN_10037a6cc(void)

{
  if (DAT_100fc17f8 != -1) {
    _swift_once(&DAT_100fc17f8,FUN_10037a698);
  }
  return &DAT_101057990;
}



/* Address: 0x10037a70c | FUN_10037a70c */

void FUN_10037a70c(void)

{
  FUN_100126a6c(&DAT_100fc17f8,&DAT_101057990,FUN_10037a698);
  return;
}



/* Address: 0x10037a728 | FUN_10037a728 */

void FUN_10037a728(void)

{
  DAT_101057998 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10037a75c | FUN_10037a75c */

undefined8 * FUN_10037a75c(void)

{
  if (DAT_100fc1800 != -1) {
    _swift_once(&DAT_100fc1800,FUN_10037a728);
  }
  return &DAT_101057998;
}



/* Address: 0x10037a79c | FUN_10037a79c */

void FUN_10037a79c(void)

{
  FUN_100126a6c(&DAT_100fc1800,&DAT_101057998,FUN_10037a728);
  return;
}



/* Address: 0x10037a7b8 | FUN_10037a7b8 */

void FUN_10037a7b8(void)

{
  DAT_1010579a0 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10037a7ec | FUN_10037a7ec */

undefined8 * FUN_10037a7ec(void)

{
  if (DAT_100fc17f0 != -1) {
    _swift_once(&DAT_100fc17f0,FUN_10037a7b8);
  }
  return &DAT_1010579a0;
}



/* Address: 0x10037a82c | FUN_10037a82c */

void FUN_10037a82c(void)

{
  FUN_100126a6c(&DAT_100fc17f0,&DAT_1010579a0,FUN_10037a7b8);
  return;
}



/* Address: 0x10037a848 | FUN_10037a848 */

void FUN_10037a848(void)

{
  DAT_1010579a8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10037a87c | FUN_10037a87c */

undefined8 * FUN_10037a87c(void)

{
  if (DAT_100fc1808 != -1) {
    _swift_once(&DAT_100fc1808,FUN_10037a848);
  }
  return &DAT_1010579a8;
}



/* Address: 0x10037a8bc | FUN_10037a8bc */

void FUN_10037a8bc(void)

{
  FUN_100126a6c(&DAT_100fc1808,&DAT_1010579a8,FUN_10037a848);
  return;
}



/* Address: 0x10037a8d8 | FUN_10037a8d8 */

void FUN_10037a8d8(void)

{
  DAT_1010579b0 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10037a90c | FUN_10037a90c */

undefined8 * FUN_10037a90c(void)

{
  if (DAT_100fc1810 != -1) {
    _swift_once(&DAT_100fc1810,FUN_10037a8d8);
  }
  return &DAT_1010579b0;
}



/* Address: 0x10037a94c | FUN_10037a94c */

void FUN_10037a94c(void)

{
  FUN_100126a6c(&DAT_100fc1810,&DAT_1010579b0,FUN_10037a8d8);
  return;
}



/* Address: 0x10037a968 | FUN_10037a968 */

void FUN_10037a968(void)

{
  DAT_1010579b8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x10037a99c | FUN_10037a99c */

undefined8 * FUN_10037a99c(void)

{
  if (DAT_100fc1818 != -1) {
    _swift_once(&DAT_100fc1818,FUN_10037a968);
  }
  return &DAT_1010579b8;
}



/* Address: 0x10037a9dc | FUN_10037a9dc */

void FUN_10037a9dc(void)

{
  FUN_100126a6c(&DAT_100fc1818,&DAT_1010579b8,FUN_10037a968);
  return;
}



/* Address: 0x10037a9f8 | FUN_10037a9f8 */

undefined * FUN_10037a9f8(void)

{
  return &DAT_100c43760;
}



/* Address: 0x10037aa04 | FUN_10037aa04 */

undefined * FUN_10037aa04(void)

{
  return &DAT_100c43768;
}



/* Address: 0x10037aa10 | FUN_10037aa10 */

bool FUN_10037aa10(long param_1)

{
  long lVar1;
  
  FUN_10037aa3c();
  lVar1 = *(long *)(param_1 + 0x38);
  _swift_release();
  return lVar1 != 0;
}



/* Address: 0x10037aa3c | FUN_10037aa3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037aa3c(void)

{
  ID IVar1;
  NSString *pNVar2;
  undefined8 uVar3;
  ID IVar4;
  long unaff_x20;
  
  IVar1 = *(ID *)(unaff_x20 + 0x88);
  IVar4 = IVar1;
  if (IVar1 == 0) {
    IVar4 = *(ID *)(unaff_x20 + 0x90);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = objc_stub::integerForKey_(IVar4,pNVar2);
    uVar3 = 0;
    FUN_100378dd4(0);
    _swift_allocObject();
    FUN_100378664(IVar4,uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
    *(ID *)(unaff_x20 + 0x88) = IVar4;
    _swift_retain();
    _swift_release(uVar3);
    IVar1 = 0;
  }
  _swift_retain(IVar1);
  return IVar4;
}



/* Address: 0x10037aaf4 | FUN_10037aaf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037aaf4(void)

{
  NSString *pNVar1;
  ID IVar2;
  long unaff_x20;
  
  IVar2 = *(ID *)(unaff_x20 + 0x90);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::integerForKey_(IVar2,pNVar1);
  return IVar2;
}



/* Address: 0x10037ab4c | FUN_10037ab4c */

void FUN_10037ab4c(undefined8 *param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_100357e58(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(*(long *)(lStack_38 + 8) + 0x28))();
  *param_1 = local_40;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x10037abbc | FUN_10037abbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10037abbc(long param_1)

{
  undefined8 uVar1;
  ID self;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_10037aa3c();
  *(undefined8 *)(param_1 + 0x20) = 0;
  _swift_unknownObjectWeakAssign(param_1 + 0x18,0);
  _swift_release(param_1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  _swift_retain(uVar2);
  FUN_100378bc8();
  _swift_release(uVar2);
  self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100fc1808 != -1) {
    _swift_once(&DAT_100fc1808,FUN_10037a848);
  }
  objc_stub::postNotificationName_object_(self,DAT_1010579a8);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar1);
  _swift_release(uVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x98));
  return;
}



/* Address: 0x10037ad14 | FUN_10037ad14 */

void FUN_10037ad14(void)

{
  FUN_10037ad4c(FUN_100378bc8);
  return;
}



/* Address: 0x10037ad20 | FUN_10037ad20 */

void FUN_10037ad20(void)

{
  FUN_10037abbc();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10037ad40 | FUN_10037ad40 */

void FUN_10037ad40(void)

{
  FUN_10037ad4c(FUN_100378ac0);
  return;
}



/* Address: 0x10037ad4c | FUN_10037ad4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10037ad4c(code *param_1)

{
  code *pcVar1;
  ID self;
  
  pcVar1 = param_1;
  FUN_10037aa3c();
  (*param_1)();
  _swift_release(pcVar1);
  self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100fc1808 != -1) {
    _swift_once(&DAT_100fc1808,FUN_10037a848);
  }
  objc_stub::postNotificationName_object_(self,DAT_1010579a8);
  return 0;
}



/* Address: 0x10037ade4 | FUN_10037ade4 */

void FUN_10037ade4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  undefined8 local_48;
  
  FUN_100357cf0(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar3 = *(undefined8 *)(param_3 + 0xa0);
  lVar4 = *(long *)(lStack_58 + 0x10);
  pcVar5 = *(code **)(lVar4 + 0x28);
  puVar1 = &DAT_100fbe920;
  local_48 = param_2;
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  puVar2 = puVar1;
  FUN_10030b508();
  (*pcVar5)(&local_48,uVar3,puVar1,puVar2,local_60,lVar4);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x10037ae9c | FUN_10037ae9c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010037aecc) */

void FUN_10037ae9c(undefined8 param_1)

{
  code *pcVar1;
  ID *pIVar2;
  ID IVar3;
  undefined8 unaff_x20;
  ID local_60 [2];
  undefined8 local_50;
  undefined8 uStack_40;
  
  pIVar2 = local_60;
  pcVar1 = FUN_10037c47c;
  local_50 = param_1;
  FUN_1002ff5d4(FUN_10037c47c,local_60);
  if (((uint)pcVar1 & 0xff) == 2) {
    FUN_1000d468c(local_60);
    FUN_100004640(local_60,unaff_x20);
    FUN_1000d4df0(0xd00000000000002a,0x8000000100da3b40,unaff_x20,uStack_40,pIVar2);
    FUN_100004594(local_60);
  }
  else {
    FUN_1000da768(local_60);
    objc_stub::removeAllActions(local_60[0]);
    if (((ulong)pcVar1 & 1) != 0) {
      IVar3 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
      if (DAT_100fc17f8 != -1) {
        _swift_once(&DAT_100fc17f8,FUN_10037a698);
      }
      objc_stub::postNotificationName_object_(IVar3,DAT_101057990);
    }
    IVar3 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100fc1800 != -1) {
      _swift_once(&DAT_100fc1800,FUN_10037a728);
    }
    objc_stub::postNotificationName_object_(IVar3,DAT_101057998);
  }
  return;
}



/* Address: 0x10037b034 | FUN_10037b034 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10037b034(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  
  FUN_100357cf0(auStack_88);
  lVar7 = lStack_68;
  uVar4 = local_70;
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lVar7 + 0x10) + 0x10))();
  if (unaff_x21 == 0) {
    FUN_100004594(auStack_88);
    FUN_100357cf0(auStack_88);
    lVar7 = lStack_68;
    uVar6 = local_70;
    FUN_100004640(auStack_88,local_70);
    (**(code **)(*(long *)(lVar7 + 0x10) + 0x20))(param_3,FUN_10037c494,param_2,uVar6);
    FUN_100004594(auStack_88);
    FUN_100357cf0(auStack_88);
    FUN_100004640(auStack_88,local_70);
    puVar1 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    *(undefined8 *)(puVar1 + 0x18) = 3;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    uVar6 = *(undefined8 *)(param_4 + 0xa0);
    lVar7 = *(long *)(lStack_68 + 0x10);
    pcVar5 = *(code **)(lVar7 + 0x28);
    puVar2 = &DAT_100fbe920;
    local_58 = puVar1;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar3 = puVar2;
    FUN_10030b508();
    (*pcVar5)(&local_58,uVar6,puVar2,puVar3,local_70,lVar7);
    _swift_release(puVar1);
    FUN_100004594(auStack_88);
    *param_1 = (byte)uVar4 & 1;
  }
  else {
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x10037b204 | FUN_10037b204 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10037b204(long param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_100357e7c(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(*(long *)(lStack_38 + 0x10) + 0x10))();
  *(undefined8 *)(param_1 + 0x10) = local_40;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x10037b278 | FUN_10037b278 */

undefined8 FUN_10037b278(long param_1,long param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  Hasher into;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  if (param_1 == param_2) {
LAB_10037b400:
    uVar10 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar16 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar16 = ~(-1L << (uVar14 & 0x3f));
      }
      uVar16 = uVar16 & *(ulong *)(param_1 + 0x38);
      lVar12 = 0;
      while( true ) {
        if (uVar16 == 0) {
          do {
            lVar15 = lVar12 + 1;
            if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10037b428);
              (*pcVar8)();
            }
            if ((long)(uVar14 + 0x3f >> 6) <= lVar15) goto LAB_10037b400;
            uVar16 = ((ulong *)(param_1 + 0x38))[lVar15];
            lVar12 = lVar12 + 1;
          } while (uVar16 == 0);
          uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar16 = uVar16 - 1 & uVar16;
        }
        else {
          uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          uVar16 = uVar16 - 1 & uVar16;
          lVar15 = lVar12;
        }
        pSVar1 = (String *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar11) | lVar15 << 6) * 0x10);
        pcVar3 = pSVar1->str;
        puVar5 = pSVar1->bridgeObject;
        SVar7 = *pSVar1;
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        _swift_bridgeObjectRetain(puVar5);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar7);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar11 = uVar11 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) break;
        while( true ) {
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
          _Var4.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var4.unknown == pcVar3 && _Var6.unknown == puVar5) ||
             (bVar9 = Swift::_stringCompareWithSmolCheck
                                (_Var4,_Var6,(_StringComparisonResult)(__int8)pcVar3), bVar9))
          break;
          uVar11 = uVar11 + 1 & ~uVar13;
          if ((*(ulong *)(param_2 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0)
          goto LAB_10037b3f0;
        }
        _swift_bridgeObjectRelease(puVar5);
        lVar12 = lVar15;
      }
LAB_10037b3f0:
      _swift_bridgeObjectRelease(puVar5);
    }
    uVar10 = 0;
  }
  return uVar10;
}



/* Address: 0x10037b428 | FUN_10037b428 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10037b428(long param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  NSString *pNVar3;
  ID IVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long unaff_x20;
  ID self;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_90;
  self = *(ID *)(unaff_x20 + 0x90);
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::FUN_100c0c3e0(self,uVar8,pNVar3);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = objc_stub::integerForKey_(self,pNVar3);
  if (!SCARRY8(IVar4,1)) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::FUN_100c0c3e0(self,IVar4 + 1,pNVar3);
    IVar4 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    if (DAT_100fc1810 != -1) {
      _swift_once(&DAT_100fc1810,FUN_10037a8d8);
    }
    objc_stub::postNotificationName_object_(IVar4,DAT_1010579b0);
    _swift_beginAccess(param_1 + 0x28,auStack_68,0,0);
    puVar7 = *(undefined **)(param_1 + 0x28);
    if ((ulong)puVar7 >> 0x3e == 0) {
      lVar5 = *(long *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar7) {
        _Var1.unknown = puVar7;
      }
      lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar5 == 0) {
      FUN_1000d468c(auStack_90);
      FUN_100004640(auStack_90,local_78);
      FUN_1000d4db8(0xd000000000000018,0x8000000100da3b20,local_78,uStack_70,puVar6);
      FUN_100004594(auStack_90);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      _swift_bridgeObjectRetain(uVar8);
      FUN_10037ae9c();
      _swift_bridgeObjectRelease(uVar8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10037b58c);
  (*pcVar2)();
}



/* Address: 0x10037b620 | FUN_10037b620 */

void FUN_10037b620(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10037ade4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10037b638 | thunk_FUN_10037b63c */

void thunk_FUN_10037b63c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c437b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c437b0,&DAT_100ecd578);
  DAT_100fc1820 = pTVar1;
  return;
}



/* Address: 0x10037b63c | FUN_10037b63c */

void FUN_10037b63c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c437b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c437b0,&DAT_100ecd578);
  DAT_100fc1820 = pTVar1;
  return;
}



/* Address: 0x10037b67c | thunk_FUN_10037b680 */

void thunk_FUN_10037b680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1828 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c437e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c437e8,&DAT_100ecd578);
  DAT_100fc1828 = pTVar1;
  return;
}



/* Address: 0x10037b680 | FUN_10037b680 */

void FUN_10037b680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1828 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c437e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c437e8,&DAT_100ecd578);
  DAT_100fc1828 = pTVar1;
  return;
}



/* Address: 0x10037b6c0 | thunk_FUN_10037b6c4 */

void thunk_FUN_10037b6c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1830 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c438b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c438b0,&DAT_100ecd578);
  DAT_100fc1830 = pTVar1;
  return;
}



/* Address: 0x10037b6c4 | FUN_10037b6c4 */

void FUN_10037b6c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1830 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c438b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c438b0,&DAT_100ecd578);
  DAT_100fc1830 = pTVar1;
  return;
}



/* Address: 0x10037b704 | thunk_FUN_10037b708 */

void thunk_FUN_10037b708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1838 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c438d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c438d8,&DAT_100ecd578);
  DAT_100fc1838 = pTVar1;
  return;
}



/* Address: 0x10037b708 | FUN_10037b708 */

void FUN_10037b708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1838 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c438d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c438d8,&DAT_100ecd578);
  DAT_100fc1838 = pTVar1;
  return;
}



/* Address: 0x10037b748 | FUN_10037b748 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10037b748(void)

{
  return ZEXT816(0x100fc1880);
}



/* Address: 0x10037b768 | FUN_10037b768 */

undefined1  [16] FUN_10037b768(void)

{
  return ZEXT816(0x100ecd578);
}



/* Address: 0x10037b778 | FUN_10037b778 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010037b9c4) */

void FUN_10037b778(ID param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  NSString *pNVar5;
  ID IVar6;
  long unaff_x20;
  undefined8 uVar7;
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
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar7 = 0xd000000000000018;
  FUN_1000d4624(0xd000000000000018,0x8000000100c43940);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar7;
  puVar1 = &DAT_100c43990;
  _swift_getKeyPath(&DAT_100c43990);
  puVar2 = &DAT_100fbdbc0;
  FUN_1002faee8(&DAT_100fbdbc0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240,
                PTR__Swift__Swift__Set<undefined>_>Swift__Decodable_100eac6d8);
  puVar3 = &DAT_100fbdbd0;
  FUN_1002faee8(&DAT_100fbdbd0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Set<undefined>_>Swift__Encodable_100eac6c8);
  FUN_1002cb88c(&local_b0,puVar1,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x18) = local_b0;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x38) = local_90;
  *(undefined8 *)(unaff_x20 + 0x48) = local_80;
  _swift_getKeyPath(&DAT_100c439c0);
  FUN_1002cb88c(&local_78);
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x50) = local_78;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x60) = local_68;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x70) = local_58;
  *(undefined8 *)(unaff_x20 + 0x80) = local_48;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  puVar1 = &DAT_100c439e8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fbdbd8;
  FUN_1000037f0(&DAT_100fbdbd8,&DAT_100c3f0d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(ID *)(unaff_x20 + 0x90) = param_1;
  *(undefined **)(unaff_x20 + 0x98) = puVar1;
  pcVar4 = FUN_10037ab4c;
  FUN_1002ff2ec(FUN_10037ab4c,0);
  *(code **)(unaff_x20 + 0xa0) = pcVar4;
  FUN_10037aa3c();
  *(undefined ***)(pcVar4 + 0x20) = &PTR_PTR_100ecd540;
  _swift_unknownObjectWeakAssign(pcVar4 + 0x18);
  _swift_release(pcVar4);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::integerForKey_(param_1,pNVar5);
  if (IVar6 == 0) {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x88) + 0x30);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::FUN_100c0c3e0(param_1,uVar7,pNVar5);
  }
  return;
}



/* Address: 0x10037ba14 | FUN_10037ba14 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10037ba14(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ID IVar5;
  char *pcVar6;
  undefined *puVar7;
  String *pSVar8;
  char *pcVar9;
  undefined7 extraout_var;
  _StringGuts _Var11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  void *pvVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String local_138;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  char *pcStack_108;
  char *local_100;
  void *local_f8;
  String local_f0;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  String local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  void *pvVar10;
  
  IVar5 = objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar5 = objc_stub::frontmostApplication(IVar5);
  if ((IVar5 == 0) || (IVar5 = objc_stub::bundleIdentifier(IVar5), IVar5 == 0)) {
    FUN_1000d468c(&local_b0,0);
    uVar22 = local_90;
    uVar19 = local_98;
    pSVar8 = &local_b0;
    FUN_100004640(pSVar8,local_98);
    FUN_1000d4db8(0xd00000000000003b,0x8000000100da3a10,uVar19,uVar22,pSVar8);
    pSVar8 = &local_b0;
  }
  else {
    SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar10 = SVar26.bridgeObject;
    pcVar6 = SVar26.str;
    puVar7 = &DAT_100fc1bf0;
    FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
    _swift_initStaticObject();
    pcVar21 = pcVar6;
    FUN_10012eef0(pcVar6,pvVar10,puVar7);
    FUN_10000caac(puVar7 + 0x20);
    if (((ulong)pcVar21 & 1) == 0) {
      pvVar23 = *(void **)(unaff_x20 + 0x20);
      pcVar6 = *(char **)(unaff_x20 + 0x18);
      local_98 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x28);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar22 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
      local_b0.str = pcVar6;
      local_b0.bridgeObject = pvVar23;
      local_a0 = uVar24;
      local_90 = uVar22;
      local_80 = uVar19;
      _swift_retain(pcVar6);
      _swift_retain(pvVar23);
      _swift_retain(uVar24);
      _swift_retain(uVar22);
      _swift_retain(uVar19);
      FUN_1000037f0(&DAT_100fc1948,&DAT_100c43988);
      FUN_1002ca7e0(&local_f0);
      _swift_release(uVar19);
      _swift_release(uVar22);
      _swift_release(uVar24);
      _swift_release(pvVar23);
      _swift_release();
      puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
      lVar14 = 0;
      pcVar21 = local_f0.str;
      puVar20 = (ulong *)(local_f0.str + 0x38);
      uVar16 = 1L << ((ulong)(byte)local_f0.str[0x20] & 0x3f);
      uVar18 = 0xffffffffffffffff;
      if ((local_f0.str[0x20] & 0x3fU) < 6) {
        uVar18 = ~(-1L << (uVar16 & 0x3f));
      }
      uVar18 = uVar18 & *puVar20;
      local_f0 = SVar26;
      do {
        while (pcVar9 = pcVar6, uVar18 == 0) {
          bVar4 = SCARRY8(lVar14,1);
          lVar14 = lVar14 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10037c22c);
            (*pcVar3)();
          }
          if ((long)(uVar16 + 0x3f >> 6) <= lVar14) {
            _swift_release(pcVar21);
            _swift_bridgeObjectRelease(pvVar10);
            goto LAB_10037bf40;
          }
          pcVar6 = pcVar9;
          uVar18 = puVar20[lVar14];
        }
        uVar2 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
        uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
        uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
        uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
        puVar1 = (undefined8 *)
                 (*(long *)(pcVar21 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                 lVar14 * 0x400);
        local_138.str = (char *)*puVar1;
        local_138.bridgeObject = (void *)puVar1[1];
        uVar18 = uVar18 - 1 & uVar18;
        FUN_10030cce0();
        pcVar12 = puVar7;
        bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_138,puVar7,puVar7,pcVar9,pcVar9);
        pcVar6 = (char *)CONCAT71(extraout_var,bVar4);
      } while (!bVar4);
      FUN_1000d468c(&local_f0);
      uVar19 = local_d0;
      puVar7 = local_d8;
      _Var11.unknown = local_d8;
      FUN_100004640(&local_f0);
      local_138.str = (char *)0x0;
      local_138.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x32,_Var11);
      _swift_bridgeObjectRelease(local_138.bridgeObject);
      local_138.str = (char *)0xd000000000000014;
      local_138.bridgeObject = (void *)0x8000000100da3ac0;
      SVar32.bridgeObject = pcVar9;
      SVar32.str = pcVar12;
      Swift::String::append(SVar26,SVar32);
      _swift_bridgeObjectRelease(pvVar10);
      SVar26.bridgeObject = (void *)0x8000000100da3aa0;
      SVar26.str = (char *)0xd00000000000001c;
      SVar33.bridgeObject = pcVar9;
      SVar33.str = pcVar12;
      Swift::String::append(SVar26,SVar33);
      pvVar10 = local_138.bridgeObject;
      FUN_1000d4db8(local_138.str,local_138.bridgeObject,puVar7,uVar19);
      _swift_bridgeObjectRelease(pvVar10);
      _swift_release(pcVar21);
      pSVar8 = &local_f0;
    }
    else {
      pvVar23 = *(void **)(unaff_x20 + 0x20);
      pcVar21 = *(char **)(unaff_x20 + 0x18);
      local_98 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar24 = *(undefined8 *)(unaff_x20 + 0x28);
      uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar22 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
      local_b0.str = pcVar21;
      local_b0.bridgeObject = pvVar23;
      local_a0 = uVar24;
      local_90 = uVar22;
      local_80 = uVar19;
      _swift_retain(pcVar21);
      _swift_retain(pvVar23);
      _swift_retain(uVar24);
      _swift_retain(uVar22);
      _swift_retain(uVar19);
      FUN_1000037f0(&DAT_100fc1948,&DAT_100c43988);
      FUN_1002ca7e0(&local_f0);
      _swift_release(uVar19);
      _swift_release(uVar22);
      _swift_release(uVar24);
      _swift_release(pvVar23);
      _swift_release(pcVar21);
      pcVar21 = local_f0.str;
      pcVar9 = local_f0.str;
      FUN_100052458(pcVar6,pvVar10);
      _swift_bridgeObjectRelease(pcVar21);
      if (((ulong)pcVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(pvVar10);
LAB_10037bf40:
        lVar14 = *(long *)(param_1 + 0x10);
        if (lVar14 != 0) {
          lVar15 = 0;
          do {
            pSVar8 = (String *)(param_1 + 0x20 + lVar15 * 0x10);
            pcVar21 = pSVar8->str;
            pvVar10 = pSVar8->bridgeObject;
            SVar26 = *pSVar8;
            lVar15 = lVar15 + 1;
            uVar24 = *(undefined8 *)(unaff_x20 + 0x58);
            pcVar6 = ((String *)(unaff_x20 + 0x50))->str;
            local_f0 = *(String *)(unaff_x20 + 0x50);
            local_d8 = *(undefined **)(unaff_x20 + 0x68);
            uVar25 = *(undefined8 *)(unaff_x20 + 0x60);
            uStack_c8 = *(undefined8 *)(unaff_x20 + 0x78);
            uVar22 = *(undefined8 *)(unaff_x20 + 0x70);
            uVar19 = *(undefined8 *)(unaff_x20 + 0x80);
            local_e0 = uVar25;
            local_d0 = uVar22;
            local_c0 = uVar19;
            _swift_bridgeObjectRetain(pvVar10);
            _swift_retain(pcVar6);
            _swift_retain(uVar24);
            _swift_retain(uVar25);
            _swift_retain(uVar22);
            _swift_retain(uVar19);
            FUN_1000037f0(&DAT_100fc1948,&DAT_100c43988);
            FUN_1002ca7e0(&local_138);
            _swift_release(uVar19);
            _swift_release(uVar22);
            _swift_release(uVar25);
            _swift_release(uVar24);
            _swift_release();
            pcVar9 = local_138.str;
            puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
            lVar17 = 0;
            puVar20 = (ulong *)(local_138.str + 0x38);
            uVar16 = 1L << ((ulong)(byte)local_138.str[0x20] & 0x3f);
            uVar18 = 0xffffffffffffffff;
            if ((local_138.str[0x20] & 0x3fU) < 6) {
              uVar18 = ~(-1L << (uVar16 & 0x3f));
            }
            uVar18 = uVar18 & *puVar20;
            local_f8 = pvVar10;
            local_100 = pcVar21;
            local_138.bridgeObject = pvVar10;
            local_138.str = pcVar21;
joined_r0x00010037c088:
            while( true ) {
              pcVar21 = pcVar6;
              if (uVar18 != 0) {
                uVar2 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
                uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
                uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
                uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
                puVar1 = (undefined8 *)
                         (*(long *)(pcVar9 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
                         lVar17 * 0x400);
                uVar19 = *puVar1;
                pcVar6 = (char *)puVar1[1];
                local_110 = uVar19;
                pcStack_108 = pcVar6;
                FUN_10030cce0();
                _swift_bridgeObjectRetain(pcVar6);
                pcVar12 = puVar7;
                pcVar13 = pcVar21;
                bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                                  (&local_110,puVar7,puVar7,pcVar21,pcVar21);
                if (!bVar4) goto code_r0x00010037c0f8;
                _swift_bridgeObjectRelease(pcVar6);
                pcVar21 = pcVar13;
                goto LAB_10037c14c;
              }
              bVar4 = SCARRY8(lVar17,1);
              lVar17 = lVar17 + 1;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10037c228);
                (*pcVar3)();
              }
              if ((long)(uVar16 + 0x3f >> 6) <= lVar17) break;
              uVar18 = puVar20[lVar17];
              pcVar6 = pcVar21;
            }
            _swift_release(pcVar9);
            _swift_bridgeObjectRelease(pvVar10);
          } while (lVar15 != lVar14);
        }
        return 1;
      }
      FUN_1000d468c(&local_f0);
      uVar19 = local_d0;
      puVar7 = local_d8;
      _Var11.unknown = local_d8;
      FUN_100004640(&local_f0);
      local_138.str = (char *)0x0;
      local_138.bridgeObject = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x32,_Var11);
      _swift_bridgeObjectRelease(local_138.bridgeObject);
      local_138.str = (char *)0xd000000000000014;
      local_138.bridgeObject = (void *)0x8000000100da3ac0;
      SVar30.bridgeObject = param_4;
      SVar30.str = pcVar9;
      Swift::String::append(SVar26,SVar30);
      _swift_bridgeObjectRelease(pvVar10);
      SVar27.bridgeObject = (void *)0x8000000100da3aa0;
      SVar27.str = (char *)0xd00000000000001c;
      SVar31.bridgeObject = param_4;
      SVar31.str = pcVar9;
      Swift::String::append(SVar27,SVar31);
      pvVar10 = local_138.bridgeObject;
      FUN_1000d4db8(local_138.str,local_138.bridgeObject,puVar7,uVar19);
      _swift_bridgeObjectRelease(pvVar10);
      pSVar8 = &local_f0;
    }
  }
LAB_10037bcd0:
  FUN_100004594(pSVar8);
  return 0;
code_r0x00010037c0f8:
  uVar18 = uVar18 - 1 & uVar18;
  pcVar12 = puVar7;
  local_110 = uVar19;
  pcStack_108 = pcVar6;
  bVar4 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_100,puVar7,puVar7,pcVar21,pcVar21);
  _swift_bridgeObjectRelease();
  if (bVar4) {
LAB_10037c14c:
    FUN_1000d468c(&local_138);
    _Var11.unknown = local_120;
    FUN_100004640(&local_138);
    local_100 = (char *)0x0;
    local_f8 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x36,_Var11);
    SVar28.bridgeObject = (void *)0x8000000100da3a80;
    SVar28.str = (char *)0xd000000000000018;
    SVar34.bridgeObject = pcVar21;
    SVar34.str = pcVar12;
    Swift::String::append(SVar28,SVar34);
    SVar35.bridgeObject = pcVar21;
    SVar35.str = pcVar12;
    Swift::String::append(SVar26,SVar35);
    _swift_bridgeObjectRelease(pvVar10);
    SVar29.bridgeObject = (void *)0x8000000100da3aa0;
    SVar29.str = (char *)0xd00000000000001c;
    SVar36.bridgeObject = pcVar21;
    SVar36.str = pcVar12;
    Swift::String::append(SVar29,SVar36);
    pvVar10 = local_f8;
    FUN_1000d4dd4(local_100,local_f8,local_120,uStack_118);
    _swift_bridgeObjectRelease(pvVar10);
    _swift_release(pcVar9);
    pSVar8 = &local_138;
    goto LAB_10037bcd0;
  }
  goto joined_r0x00010037c088;
}


