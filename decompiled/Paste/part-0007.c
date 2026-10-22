/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10001063c | thunk_FUN_1000105cc */

void thunk_FUN_1000105cc(void)

{
  FUN_1000105cc();
  return;
}



/* Address: 0x100010640 | FUN_100010640 */

undefined * FUN_100010640(long param_1)

{
  byte bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *capacity;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fa6c70;
    uVar4 = 0;
    FUN_1000037f0();
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar8 + -1);
      uVar7 = (ulong)bVar1;
      uVar6 = *puVar8;
      _swift_bridgeObjectRetain(uVar6);
      FUN_1000711bc();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100010728);
        (*pcVar2)();
      }
      uVar5 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar5 + 0x40) = *(ulong *)(puVar3 + uVar5 + 0x40) | 1L << (uVar7 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar7) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar7 * 8) = uVar6;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001072c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      puVar8 = puVar8 + 2;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x10001072c | FUN_10001072c */

undefined * FUN_10001072c(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fa6c60;
    FUN_1000037f0(&DAT_100fa6c60,&DAT_100c237c0);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fa6c58,&DAT_100c255f0);
      uVar1 = local_88;
      uVar4 = local_88;
      FUN_1000712c0();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10001084c);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100010850);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x100010850 | FUN_100010850 */

undefined * FUN_100010850(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fa6c78;
    FUN_1000037f0(&DAT_100fa6c78,&DAT_100c237e8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100faa8c0,&DAT_100c237f0);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100010980);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      puVar8[4] = local_68;
      puVar8[1] = uStack_80;
      *puVar8 = local_88;
      puVar8[3] = uStack_70;
      puVar8[2] = uStack_78;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100010984);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x100010984 | FUN_100010984 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100010984(undefined8 param_1,undefined8 param_2,void *param_3,ulong param_4,ulong param_5,
                ulong param_6)

{
  long lVar1;
  Range<Index> RVar2;
  code *pcVar3;
  undefined *puVar4;
  ID IVar5;
  _DictionaryStorage *this;
  Range<Index> RVar6;
  undefined8 uVar7;
  NSString *pNVar8;
  NSDictionary *pNVar9;
  ID IVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined *puVar14;
  Range<Index> RVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong *puVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  ulong local_120;
  undefined1 auStack_118 [64];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  
  if (param_6 != 0) {
    uVar18 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar18 = param_6 >> 0x38 & 0xf;
    }
    if (uVar18 != 0) {
      thunk_FUN_1002f5748(param_5,param_6,param_3,param_4);
      lVar20 = *(long *)(param_5 + 0x10);
      if (lVar20 != 0) {
        puVar4 = &_OBJC_CLASS___NSMutableAttributedString;
        _objc_allocWithZone();
        IVar5 = objc_stub::init((ID)puVar4);
        uVar19 = *(undefined8 *)PTR__NSForegroundColorAttributeName_100ea90c8;
        this = (_DictionaryStorage *)&DAT_100fa6c60;
        FUN_1000037f0(&DAT_100fa6c60,&DAT_100c237c0);
        puVar21 = (ulong *)(param_5 + 0x28);
        RVar6.unknown = (undefined *)0xf;
        do {
          RVar2.unknown = (undefined *)puVar21[-1];
          pcVar13 = (char *)*puVar21;
          if ((ulong)RVar6.unknown >> 0xe < (ulong)RVar2.unknown >> 0xe) {
            SVar25.bridgeObject = param_3;
            SVar25.str = RVar2.unknown;
            RVar15.unknown = RVar2.unknown;
            uVar18 = param_4;
            SVar22.str = Swift::String::get_subscript(RVar6,SVar25);
            SVar22.bridgeObject = RVar15.unknown;
            SVar22 = Swift::String::__fromSubstring(SVar22);
            _swift_bridgeObjectRelease(uVar18);
            puVar4 = &DAT_100fa6c50;
            FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
            _swift_initStackObject();
            *(undefined8 *)(puVar4 + 0x18) = 2;
            *(undefined8 *)(puVar4 + 0x10) = 1;
            *(undefined8 *)(puVar4 + 0x20) = uVar19;
            uVar7 = 0;
            FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
            *(undefined8 *)(puVar4 + 0x40) = uVar7;
            *(undefined8 *)(puVar4 + 0x28) = param_2;
            puVar14 = puVar4;
            FUN_10001072c(puVar4);
            _swift_setDeallocating(puVar4);
            FUN_100005808(puVar4 + 0x20,&DAT_100fa6c58,&DAT_100c255f0);
            puVar4 = &_OBJC_CLASS___NSAttributedString;
            _objc_allocWithZone();
            pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar22.bridgeObject);
            FUN_100003980(0);
            FUN_100003a00(&DAT_100fa8660,FUN_100003980,
                          &TargetProtocolConformanceDescriptor_100c2262c);
            pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(puVar14);
            IVar10 = objc_stub::initWithString_attributes_((ID)puVar4,pNVar8,pNVar9);
            objc_stub::appendAttributedString_(IVar5,IVar10);
          }
          SVar26.bridgeObject = param_3;
          SVar26.str = pcVar13;
          pcVar16 = pcVar13;
          uVar18 = param_4;
          SVar23.str = Swift::String::get_subscript(RVar2,SVar26);
          SVar23.bridgeObject = pcVar16;
          SVar22 = Swift::String::__fromSubstring(SVar23);
          _swift_bridgeObjectRelease(uVar18);
          uVar7 = 0;
          local_d8 = uVar19;
          FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
          lVar11 = 1;
          local_d0 = param_1;
          local_b8 = uVar7;
          Swift::_DictionaryStorage::_allocate(this,1);
          puVar17 = &local_120;
          FUN_100011090(&local_d8,puVar17,&DAT_100fa6c58,&DAT_100c255f0);
          uVar18 = local_120;
          uVar12 = local_120;
          FUN_1000712c0();
          if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10001107c);
            (*pcVar3)();
          }
          lVar1 = lVar11 + (uVar12 >> 6) * 8;
          *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar12 & 0x3f);
          *(ulong *)(*(long *)(lVar11 + 0x30) + uVar12 * 8) = uVar18;
          FUN_100011080(auStack_118,*(long *)(lVar11 + 0x38) + uVar12 * 0x20);
          if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100011080);
            (*pcVar3)();
          }
          puVar21 = puVar21 + 2;
          *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
          FUN_100005808(&local_d8,&DAT_100fa6c58,&DAT_100c255f0);
          puVar4 = &_OBJC_CLASS___NSAttributedString;
          _objc_allocWithZone();
          pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar22.bridgeObject);
          FUN_100003980(0);
          FUN_100003a00(&DAT_100fa8660,FUN_100003980,&TargetProtocolConformanceDescriptor_100c2262c)
          ;
          pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          _swift_release(lVar11);
          IVar10 = objc_stub::initWithString_attributes_((ID)puVar4,pNVar8,pNVar9);
          objc_stub::appendAttributedString_(IVar5,IVar10);
          lVar20 = lVar20 + -1;
          RVar6.unknown = pcVar13;
        } while (lVar20 != 0);
        _swift_bridgeObjectRelease(param_5);
        uVar18 = (ulong)param_3 & 0xffffffffffff;
        if ((param_4 & 0x2000000000000000) != 0) {
          uVar18 = param_4 >> 0x38 & 0xf;
        }
        if (uVar18 << 2 <= (ulong)pcVar13 >> 0xe) {
          return IVar5;
        }
        FUN_1000102ac(pcVar13,param_3,param_4);
        SVar24.bridgeObject = param_3;
        SVar24.str = pcVar13;
        SVar22 = Swift::String::__fromSubstring(SVar24);
        _swift_bridgeObjectRelease(pNVar9);
        puVar4 = &DAT_100fa6c50;
        FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined8 *)(puVar4 + 0x20) = uVar19;
        *(undefined8 *)(puVar4 + 0x40) = uVar7;
        *(undefined8 *)(puVar4 + 0x28) = param_2;
        puVar14 = puVar4;
        FUN_10001072c(puVar4);
        _swift_setDeallocating(puVar4);
        FUN_100005808(puVar4 + 0x20,&DAT_100fa6c58,&DAT_100c255f0);
        puVar4 = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar14);
        IVar10 = objc_stub::initWithString_attributes_((ID)puVar4,pNVar8,pNVar9);
        objc_stub::appendAttributedString_(IVar5,IVar10);
        return IVar5;
      }
      _swift_bridgeObjectRelease(param_5);
      puVar4 = &DAT_100fa6c50;
      FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
      goto LAB_100010f18;
    }
  }
  puVar4 = &DAT_100fa6c50;
  FUN_1000037f0(&DAT_100fa6c50,&DAT_100c237b0);
LAB_100010f18:
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)PTR__NSForegroundColorAttributeName_100ea90c8;
  uVar19 = 0;
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  *(undefined8 *)(puVar4 + 0x40) = uVar19;
  *(undefined8 *)(puVar4 + 0x28) = param_1;
  puVar14 = puVar4;
  FUN_10001072c(puVar4);
  _swift_setDeallocating(puVar4);
  FUN_100005808(puVar4 + 0x20,&DAT_100fa6c58,&DAT_100c255f0);
  puVar4 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100003980(0);
  FUN_100003a00(&DAT_100fa8660,FUN_100003980,&TargetProtocolConformanceDescriptor_100c2262c);
  pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar14);
  IVar5 = objc_stub::initWithString_attributes_((ID)puVar4,pNVar8,pNVar9);
  return IVar5;
}



/* Address: 0x100011080 | FUN_100011080 */

undefined8 * FUN_100011080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  param_2[3] = uVar3;
  param_2[2] = uVar2;
  return param_2;
}



/* Address: 0x100011090 | FUN_100011090 */

undefined8 FUN_100011090(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000037f0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x1000110d8 | FUN_1000110d8 */

undefined8 FUN_1000110d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6c80;
  FUN_1000037f0(&DAT_100fa6c80,&DAT_100c237f8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100011128 | FUN_100011128 */

void FUN_100011128(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_retain(param_2);
    return;
  }
  return;
}



/* Address: 0x100011138 | FUN_100011138 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100011138(void)

{
  ID IVar1;
  NSString *pNVar2;
  ID unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"windowDidLoad");
  IVar1 = objc_stub::window(unaff_x20);
  if (IVar1 != 0) {
    objc_stub::setLevel_(IVar1,0x19);
  }
  IVar1 = objc_stub::window(unaff_x20);
  if (IVar1 != 0) {
    objc_stub::setCollectionBehavior_(IVar1,0x101);
  }
  IVar1 = objc_stub::window(unaff_x20);
  if (IVar1 != 0) {
    objc_stub::setMovableByWindowBackground_(IVar1,1);
  }
  IVar1 = objc_stub::window(unaff_x20);
  if (IVar1 != 0) {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setFrameAutosaveName_(IVar1,pNVar2);
  }
  return 0;
}



/* Address: 0x100011240 | _TtC5Paste26PasteStackWindowController::windowDidLoad */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste26PasteStackWindowController::windowDidLoad(ID param_1,SEL param_2)

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
              ("Paste/PasteStackWindowController.swift",0x26,1,8,UVar3.unknown,pMVar1);
  }
  FUN_100011138(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000112dc | _TtC5Paste26PasteStackWindowController::initWithWindow: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste26PasteStackWindowController::initWithWindow_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/PasteStackWindowController.swift",0x26,1,4,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithWindow:",param_3);
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x10001139c | _TtC5Paste26PasteStackWindowController::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste26PasteStackWindowController::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/PasteStackWindowController.swift",0x26,1,4,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x100011488 | _TtC5Paste26PasteStackWindowController::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste26PasteStackWindowController::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x10001148c | FUN_10001148c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10001148c(void)

{
  return ZEXT816(0x100f8f1c0);
}



/* Address: 0x1000114ac | FUN_1000114ac */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1000114ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = ram0x000100fa6cf8;
  auVar1._0_8_ = s_PasteStack_100fa6cf0._0_8_;
  _swift_bridgeObjectRetain(ram0x000100fa6cf8);
  return auVar1;
}



/* Address: 0x1000114e0 | FUN_1000114e0 */

undefined1  [16] FUN_1000114e0(void)

{
  return ZEXT816(0);
}



/* Address: 0x1000114ec | _TtC5Paste16PasteStackWindow::canBecomeMainWindow */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste16PasteStackWindow::canBecomeMainWindow(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_1000114fc(bVar1,param_2,0x13);
  return bVar1;
}



/* Address: 0x1000114f4 | _TtC5Paste16PasteStackWindow::canBecomeKeyWindow */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste16PasteStackWindow::canBecomeKeyWindow(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_1000114fc(bVar1,param_2,0x17);
  return bVar1;
}



/* Address: 0x1000114fc | FUN_1000114fc */

undefined8 FUN_1000114fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
              ("Paste/PasteStackWindowController.swift",0x26,1,param_3,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100011584 | _TtC5Paste16PasteStackWindow::initWithContentRect:styleMask:backing:defer: */

/* Function Stack Size: 0x44 bytes */

ID _TtC5Paste16PasteStackWindow::initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,bool param_6)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID IVar5;
  objc_super local_80;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/PasteStackWindowController.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackWindowController.swift",0x26,1,0x12,UVar3.unknown,pMVar1);
  }
  FUN_1000116b8();
  local_80.receiver = param_1;
  local_80.super_class = (class_t *)pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_80,"initWithContentRect:styleMask:backing:defer:",
                              param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                              param_3.field1_0x10.field0_0x0);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x100011688 | FUN_100011688 */

void FUN_100011688(void)

{
  FUN_1000116b8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1000116b8 | FUN_1000116b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000116b8(void)

{
  return ZEXT816(0x100f8f338);
}



/* Address: 0x1000116d8 | FUN_1000116d8 */

void FUN_1000116d8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Address: 0x100011708 | FUN_100011708 */

undefined1 * FUN_100011708(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[8] = param_2[8];
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  param_1[0x30] = param_2[0x30];
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x100011774 | FUN_100011774 */

undefined1 * FUN_100011774(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[8] = param_2[8];
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x30] = param_2[0x30];
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100011810 | FUN_100011810 */

void FUN_100011810(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100011824 | FUN_100011824 */

undefined1 * FUN_100011824(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[8] = param_2[8];
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x30] = param_2[0x30];
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100011890 | FUN_100011890 */

int FUN_100011890(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000118d8 | FUN_1000118d8 */

void FUN_1000118d8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100011928 | FUN_100011928 */

undefined1  [16] FUN_100011928(void)

{
  return ZEXT816(0x100eb0328);
}



/* Address: 0x100011938 | FUN_100011938 */

undefined1 FUN_100011938(void)

{
  undefined1 *unaff_x20;
  
  return *unaff_x20;
}



/* Address: 0x100011940 | FUN_100011940 */

void FUN_100011940(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x30);
  *param_1 = *(undefined1 *)(unaff_x20 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  param_1[0x28] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar4);
  return;
}



/* Address: 0x100011980 | FUN_100011980 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000119bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100011980(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ObservedObject<undefined> OVar3;
  ObservedObject<undefined> OVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = 0;
  FUN_10000c0ec();
  uVar2 = uVar1;
  FUN_1000119f0();
  _swift_retain(uVar5);
  OVar3 = SwiftUI::ObservedObject::init(uVar2,uVar1,uVar2);
  param_1[3] = &DAT_100eb2f70;
  OVar4 = OVar3;
  FUN_100011a34();
  param_1[4] = OVar4.unknown;
  *param_1 = OVar3.unknown;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x1000119f0 | FUN_1000119f0 */

void FUN_1000119f0(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fa6d00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000c0ec(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c233c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c233c4,uVar1);
  DAT_100fa6d00 = pTVar2;
  return;
}



/* Address: 0x100011a34 | FUN_100011a34 */

void FUN_100011a34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa6d08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c27304;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c27304,&DAT_100eb2f70);
  DAT_100fa6d08 = pTVar1;
  return;
}



/* Address: 0x100011a74 | FUN_100011a74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100011a74(void)

{
  long lVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  String SVar7;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 auStack_50 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar2 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___editButton;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 +
                   _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___editButton);
  if (lVar4 == 0) {
    FUN_1001c1688(&stack0xffffffffffffffc0 + lVar1);
    SVar7 = (extension_Foundation)::Swift::String::init
                      ((LocalizedStringResource)(&stack0xffffffffffffffc0 + lVar1));
    puVar5 = &DAT_100eb03b0;
    _swift_allocObject(&DAT_100eb03b0,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    uVar6 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_50 + lVar1) = FUN_100013a94;
    *(undefined **)((long)auStack_50 + lVar1 + 8) = puVar5;
    auStack_58[lVar1] = 0;
    *(undefined8 *)((long)&uStack_60 + lVar1) = 0;
    lVar4 = 0;
    FUN_10023e034(uVar6,0,0,SVar7.str,SVar7.bridgeObject,0,0,1,0);
    *(long *)(unaff_x20 + lVar2) = lVar4;
  }
  return lVar4;
}



/* Address: 0x100011ba4 | FUN_100011ba4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100011ba4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  long unaff_x20;
  
  lVar4 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___titleLabel;
  self = *(ID *)(unaff_x20 +
                _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___titleLabel);
  if (self == 0) {
    FUN_1000138f8();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    puVar5 = &DAT_100eb03b0;
    _swift_allocObject(&DAT_100eb03b0,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10);
    puVar1 = (undefined8 *)
             (self + _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
                     ::onCommitEditing);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    *puVar1 = FUN_100013944;
    puVar1[1] = puVar5;
    _swift_retain(puVar5);
    FUN_100004550(uVar2,uVar3);
    _swift_release(puVar5);
    *(ID *)(unaff_x20 + lVar4) = self;
  }
  return self;
}



/* Address: 0x100011c78 | FUN_100011c78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100011c78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ID self;
  long unaff_x20;
  
  FUN_100013084();
  FUN_10023b1a4();
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
           ::originalText);
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar3);
  lVar2 = _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
          ::___lazy_storage___textField;
  FUN_10023b414(1);
  self = objc_stub::window(*(ID *)(unaff_x20 + lVar2));
  if (self != 0) {
    objc_stub::makeFirstResponder_(self,*(undefined8 *)(unaff_x20 + lVar2));
    return 0;
  }
  return 0;
}



/* Address: 0x100011d28 | FUN_100011d28 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100011d28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID self;
  long unaff_x20;
  
  FUN_100013084();
  FUN_10023b414(0);
  lVar3 = _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
          ::___lazy_storage___textField;
  uVar1 = *(undefined8 *)
           (unaff_x20 +
           _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
           ::originalText);
  uVar2 = ((undefined8 *)
          (unaff_x20 +
          _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
          ::originalText))[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_10023b214(uVar1,uVar2);
  FUN_10023bfdc(*(undefined8 *)(unaff_x20 + lVar3));
  self = objc_stub::window(*(ID *)(unaff_x20 + lVar3));
  if (self != 0) {
    objc_stub::makeFirstResponder_(self,0);
    return 0;
  }
  return 0;
}



/* Address: 0x100011e00 | FUN_100011e00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100011e00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ID self;
  ID IVar4;
  uint uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  FUN_100011ba4();
  FUN_100309008();
  FUN_100013084();
  FUN_10023b600(param_1,param_2);
  lVar3 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___titleLabel;
  uVar1 = *(undefined8 *)
           (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___titleLabel);
  FUN_100308f88(uVar1);
  FUN_100013084();
  FUN_10023b214(uVar1,param_2);
  uVar1 = *(undefined8 *)(unaff_x20 + lVar3);
  FUN_10031f040(uVar1);
  FUN_100013084();
  FUN_10023b4e0((uint)uVar1 & 1);
  puVar2 = (undefined8 *)0x0;
  FUN_10001200c();
  FUN_10031bc94();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_10020ccf4();
  }
  else {
    puVar2 = (undefined8 *)0x0;
    FUN_10020cc48();
  }
  uVar1 = *puVar2;
  uVar6 = puVar2[1];
  _swift_bridgeObjectRetain(uVar6);
  FUN_10023d1b8(uVar1);
  uVar5 = (uint)uVar6;
  lVar3 = *(long *)(unaff_x20 +
                   _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___pinButton);
  FUN_10031bc94();
  if ((lVar3 != 0) && (FUN_1003293c4(), (uVar5 & 0xff) == 1)) {
    thunk_FUN_100324cb0();
    FUN_1003de9a0();
  }
  FUN_10023cbf4();
  uVar5 = 0;
  FUN_100012164(0);
  FUN_100320cc0();
  FUN_10023dd84(uVar5 & 1);
  self = 0;
  FUN_100011a74();
  IVar4 = self;
  FUN_10031f040();
  objc_stub::setHidden_(self,(ulong)(((uint)IVar4 ^ 0xffffffff) & 1));
  return 0;
}



/* Address: 0x10001200c | FUN_10001200c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10001200c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long unaff_x20;
  String SVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar3 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___pinButton;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = *(undefined8 **)
            (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___pinButton);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_10020ccf4();
    puVar8 = (undefined8 *)*puVar5;
    uVar1 = puVar5[1];
    _swift_bridgeObjectRetain(uVar1);
    FUN_1001c2a08(&stack0xffffffffffffffb0 + lVar2);
    SVar9 = (extension_Foundation)::Swift::String::init
                      ((LocalizedStringResource)(&stack0xffffffffffffffb0 + lVar2));
    puVar6 = &DAT_100eb03b0;
    _swift_allocObject(&DAT_100eb03b0,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    uVar7 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar2) = FUN_100013ac4;
    *(undefined **)((long)auStack_60 + lVar2 + 8) = puVar6;
    auStack_68[lVar2] = 0;
    *(void **)((long)&uStack_70 + lVar2) = SVar9.bridgeObject;
    FUN_10023e034(uVar7,puVar8,uVar1,0,0xe000000000000000,0,0,1,SVar9.str);
    FUN_10023d720(1);
    *(undefined8 **)(unaff_x20 + lVar3) = puVar8;
    puVar5 = puVar8;
  }
  return puVar5;
}



/* Address: 0x100012164 | FUN_100012164 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100012164(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long unaff_x20;
  String SVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar3 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___shareButton;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = *(undefined8 **)
            (unaff_x20 + _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___shareButton)
  ;
  if (puVar5 == (undefined8 *)0x0) {
    FUN_10020d8f8();
    puVar8 = (undefined8 *)*puVar5;
    uVar1 = puVar5[1];
    _swift_bridgeObjectRetain(uVar1);
    FUN_1001c3f08(&stack0xffffffffffffffb0 + lVar2);
    SVar9 = (extension_Foundation)::Swift::String::init
                      ((LocalizedStringResource)(&stack0xffffffffffffffb0 + lVar2));
    puVar6 = &DAT_100eb03b0;
    _swift_allocObject(&DAT_100eb03b0,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    uVar7 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar2) = FUN_100013a9c;
    *(undefined **)((long)auStack_60 + lVar2 + 8) = puVar6;
    auStack_68[lVar2] = 0;
    *(void **)((long)&uStack_70 + lVar2) = SVar9.bridgeObject;
    FUN_10023e034(uVar7,puVar8,uVar1,0,0xe000000000000000,0,0,1,SVar9.str);
    *(undefined8 **)(unaff_x20 + lVar3) = puVar8;
    puVar5 = puVar8;
  }
  return puVar5;
}



/* Address: 0x1000122ac | FUN_1000122ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1000122ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 == 0) {
    return (code *)0x0;
  }
  pcVar1 = *(code **)(param_3 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onRename);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_3 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onRename))[1];
    FUN_100011128(pcVar1,uVar2);
    (*pcVar1)(param_1,param_2);
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x100012358 | FUN_100012358 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100012358(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___closeButton;
  IVar2 = *(ID *)(unaff_x20 +
                 _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___closeButton);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSButton;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    FUN_1000123d4();
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x1000123d4 | FUN_1000123d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000123d4(ID param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  plVar3 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  FUN_10020db28();
  lVar5 = *plVar3;
  lVar1 = plVar3[1];
  _swift_bridgeObjectRetain_n(lVar1,2);
  lVar4 = lVar5;
  FUN_1000f653c(lVar5,lVar1);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(lVar1);
    lVar5 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000124f4);
      (*pcVar2)();
    }
  }
  else {
    FUN_1000f653c(lVar5,lVar1);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100012448);
      (*pcVar2)();
    }
  }
  objc_stub::setImage_(param_1,lVar5);
  puVar6 = (undefined8 *)objc_stub::setImagePosition_(param_1,1);
  FUN_1001fe15c();
  objc_stub::setContentTintColor_(param_1,*puVar6);
  objc_stub::setBordered_(param_1,0);
  objc_stub::setAlphaValue_(param_1,0x3fe3333333333333);
  objc_stub::setAction_(param_1,"didClickCloseButton");
  objc_stub::setTarget_(param_1,param_2);
  return;
}



/* Address: 0x1000124f4 | FUN_1000124f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1000124f4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return (code *)0x0;
  }
  pcVar1 = *(code **)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onEdit);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + _TtCC5Paste15ItemPreviewView13PreviewHeader::onEdit))[1];
    _swift_retain(uVar2);
    (*pcVar1)();
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x100012578 | FUN_100012578 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100012578(long param_1,long *param_2,code *param_3)

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
    _swift_retain(uVar2);
    (*param_3)();
    (*pcVar1)();
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x100012628 | FUN_100012628 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100012628(void)

{
  long lVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___actionsStack;
  self = *(ID *)(unaff_x20 +
                _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___actionsStack);
  if (self == 0) {
    puVar2 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar2);
    FUN_1000f668c(0);
    objc_stub::setSpacing_(self,0x4020000000000000);
    objc_stub::setAlignment_(self,10);
    puVar2 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 7;
    *(undefined8 *)(puVar2 + 0x10) = 3;
    puVar3 = puVar2;
    FUN_10001200c();
    *(undefined **)(puVar2 + 0x20) = puVar3;
    FUN_100012164();
    *(undefined **)(puVar2 + 0x28) = puVar3;
    FUN_100011a74();
    *(undefined **)(puVar2 + 0x30) = puVar3;
    FUN_100201b9c(puVar2);
    _swift_setDeallocating(puVar2);
    _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10001274c | FUN_10001274c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10001274c(void)

{
  undefined8 *puVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long unaff_x20;
  undefined1 auStack_90 [16];
  ID local_80;
  
  _swift_getObjectType();
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
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  puVar3 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 7;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  IVar4 = IVar2;
  FUN_100012358();
  *(ID *)(puVar3 + 0x20) = IVar4;
  FUN_100011ba4();
  *(ID *)(puVar3 + 0x28) = IVar4;
  FUN_100012628();
  *(ID *)(puVar3 + 0x30) = IVar4;
  local_80 = IVar2;
  FUN_1001fa150(puVar3,FUN_100013a8c,auStack_90);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar2;
}



/* Address: 0x1000128d8 | FUN_1000128d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000128d8(ID param_1)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  IVar2 = param_1;
  FUN_100012358();
  IVar2 = objc_stub::leadingAnchor(IVar2);
  IVar3 = objc_stub::leadingAnchor(param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x4024000000000000,IVar3);
  lVar1 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___closeButton;
  IVar2 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste15ItemPreviewView13PreviewHeader::
                            ___lazy_storage___closeButton));
  IVar4 = objc_stub::centerYAnchor(param_1);
  IVar4 = objc_stub::constraintEqualToAnchor_(IVar2,IVar4);
  IVar2 = IVar4;
  FUN_100011ba4();
  IVar2 = objc_stub::leadingAnchor(IVar2);
  IVar5 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar5 = objc_stub::constraintEqualToAnchor_constant_(IVar2,0x4020000000000000,IVar5);
  lVar1 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___titleLabel;
  IVar6 = objc_stub::trailingAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste15ItemPreviewView13PreviewHeader::
                            ___lazy_storage___titleLabel));
  IVar2 = IVar6;
  FUN_100012628();
  IVar2 = objc_stub::leadingAnchor(IVar2);
  IVar2 = objc_stub::constraintLessThanOrEqualToAnchor_constant_(IVar6,0xc020000000000000,IVar2);
  IVar6 = objc_stub::centerYAnchor(*(ID *)(param_1 + lVar1));
  IVar7 = objc_stub::centerYAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  lVar1 = _TtCC5Paste15ItemPreviewView13PreviewHeader::___lazy_storage___actionsStack;
  IVar7 = objc_stub::trailingAnchor
                    (*(ID *)(param_1 +
                            _TtCC5Paste15ItemPreviewView13PreviewHeader::
                            ___lazy_storage___actionsStack));
  IVar8 = objc_stub::trailingAnchor(param_1);
  IVar7 = objc_stub::constraintEqualToAnchor_constant_(IVar7,0xc020000000000000,IVar8);
  IVar8 = objc_stub::centerYAnchor(*(ID *)(param_1 + lVar1));
  IVar9 = objc_stub::centerYAnchor(param_1);
  IVar8 = objc_stub::constraintEqualToAnchor_(IVar8,IVar9);
  puVar10 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 0xe;
  *(undefined8 *)(puVar10 + 0x10) = 7;
  uVar11 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar10 + 0x38) = uVar11;
  *(undefined ***)(puVar10 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x20) = IVar3;
  *(undefined8 *)(puVar10 + 0x60) = uVar11;
  *(undefined ***)(puVar10 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x48) = IVar4;
  *(undefined8 *)(puVar10 + 0x88) = uVar11;
  *(undefined ***)(puVar10 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x70) = IVar5;
  *(undefined8 *)(puVar10 + 0xb0) = uVar11;
  *(undefined ***)(puVar10 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x98) = IVar2;
  *(undefined8 *)(puVar10 + 0xd8) = uVar11;
  *(undefined ***)(puVar10 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0xc0) = IVar6;
  *(undefined8 *)(puVar10 + 0x100) = uVar11;
  *(undefined ***)(puVar10 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0xe8) = IVar7;
  *(undefined8 *)(puVar10 + 0x128) = uVar11;
  *(undefined ***)(puVar10 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x110) = IVar8;
  puVar12 = puVar10;
  FUN_1001f8d60(puVar10);
  _swift_setDeallocating(puVar10);
  uVar11 = *(undefined8 *)(puVar10 + 0x10);
  puVar13 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar10 + 0x20,uVar11,puVar13);
  return puVar12;
}



/* Address: 0x100012cec | _TtCC5Paste15ItemPreviewView13PreviewHeader::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC5Paste15ItemPreviewView13PreviewHeader::init(ID param_1,SEL param_2)

{
  FUN_10001355c(param_1,param_2,0x56,FUN_10001274c);
  return param_1;
}



/* Address: 0x100012cfc | _TtCC5Paste15ItemPreviewView13PreviewHeader::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste15ItemPreviewView13PreviewHeader::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,0x67,UVar3.unknown,pMVar1);
  }
  FUN_10001399c();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x100012da8 | _TtCC5Paste15ItemPreviewView13PreviewHeader::cancelOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCC5Paste15ItemPreviewView13PreviewHeader::cancelOperation_
               (ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,0x6b,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  FUN_100011ba4();
  FUN_100011d28();
  FUN_100013954(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100012ea4 | _TtCC5Paste15ItemPreviewView13PreviewHeader::didClickCloseButton */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste15ItemPreviewView13PreviewHeader::didClickCloseButton(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemPreviewView.PreviewHeader.swift",0x29,1,0x6f,UVar3.unknown,pMVar1);
  }
  pcVar6 = *(code **)(param_1 + onClose);
  if (pcVar6 != (code *)0x0) {
    uVar5 = ((undefined8 *)(param_1 + onClose))[1];
    FUN_100011128(pcVar6,uVar5);
    (*pcVar6)();
    FUN_100004550(pcVar6,uVar5);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100012f70 | _TtCC5Paste15ItemPreviewView13PreviewHeader::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste15ItemPreviewView13PreviewHeader::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  FUN_100013810(param_1,param_2,9,"Paste.PreviewHeader",0x13,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x100012f84 | thunk_FUN_10000e980 */

void thunk_FUN_10000e980(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100012f88 | _TtCC5Paste15ItemPreviewView13PreviewHeader::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste15ItemPreviewView13PreviewHeader::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onClose),((undefined8 *)(param_1 + onClose))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onRename),((undefined8 *)(param_1 + onRename))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onShare),((undefined8 *)(param_1 + onShare))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onPin),((undefined8 *)(param_1 + onPin))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onEdit),((undefined8 *)(param_1 + onEdit))[1]);
  return;
}



/* Address: 0x100013064 | FUN_100013064 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100013064(void)

{
  return ZEXT816(0x100f8f3e8);
}



/* Address: 0x100013084 | FUN_100013084 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100013084(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
          ::___lazy_storage___textField;
  self = *(ID *)(unaff_x20 +
                _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
                ::___lazy_storage___textField);
  if (self == 0) {
    FUN_10023c8b4();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    FUN_1000130fc();
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1000130fc | FUN_1000130fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000130fc(ID param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [24];
  
  puVar4 = (undefined8 *)&DAT_100eb0388;
  _swift_allocObject(&DAT_100eb0388,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 2,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtC7PasteUI9TextField::onDidEndEditing);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10001393c;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release();
  FUN_1001fe15c();
  FUN_10023af6c(*puVar4);
  objc_stub::setAlphaValue_(param_1,0x3fe999999999999a);
  FUN_10000ec2c(0,&DAT_100fa6c38,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1001ff910();
  FUN_10023ae6c();
  return;
}



/* Address: 0x100013204 | FUN_100013204 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100013204(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100013240();
    return 0;
  }
  return 0;
}



/* Address: 0x100013240 | FUN_100013240 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

code * FUN_100013240(void)

{
  ID self;
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  long lVar4;
  
  FUN_100013084();
  FUN_10023b414(0);
  lVar1 = _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
          ::___lazy_storage___textField;
  self = objc_stub::window(*(ID *)(unaff_x20 +
                                  _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
                                  ::___lazy_storage___textField));
  if (self != 0) {
    objc_stub::makeFirstResponder_(self,0);
  }
  pcVar3 = *(code **)(unaff_x20 +
                     _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
                     ::onCommitEditing);
  if (pcVar3 != (code *)0x0) {
    lVar4 = ((undefined8 *)
            (unaff_x20 +
            _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
            ::onCommitEditing))[1];
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    lVar1 = lVar4;
    FUN_100011128(pcVar3);
    FUN_10023b1a4(uVar2);
    if (lVar1 != 0) {
      (*pcVar3)(uVar2,lVar1);
      _swift_bridgeObjectRelease(lVar1);
      FUN_100004550(pcVar3,lVar4);
      return pcVar3;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10001333c);
    (*pcVar3)();
  }
  return (code *)0x0;
}



/* Address: 0x10001333c | FUN_10001333c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10001333c(void)

{
  undefined8 *puVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
           ::onCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)
   (unaff_x20 +
   _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel::
   ___lazy_storage___textField) = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCCC5Paste15ItemPreviewView13PreviewHeaderP33_A72CB0B1B9A220F7DF1AC8954FD1EEF410TitleLabel
           ::originalText);
  *puVar1 = 0;
  puVar1[1] = 0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  IVar3 = IVar2;
  FUN_100013084();
  FUN_1001fa09c();
  _swift_bridgeObjectRelease(IVar3);
  return IVar2;
}


