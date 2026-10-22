/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003690b0 | FUN_1003690b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010036920c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100369204 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003690b0(code *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *self;
  JSONEncoder *pJVar3;
  JSONEncoder *pJVar4;
  Data DVar5;
  NSData *pNVar6;
  TaskPriority TVar7;
  uint uVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_90 [16];
  char local_80 [16];
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  puVar1 = &DAT_100fbe478;
  uVar8 = 0xc40940;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100368250();
  FUN_1003293c4();
  if (((uVar8 & 0xff) != 1) && ((uVar8 & 0xff) != 0xff)) {
    puVar2 = &DAT_100eccd18;
    _swift_allocObject(&DAT_100eccd18,0x18,7);
    puVar10 = (undefined8 *)(puVar2 + 0x10);
    *puVar10 = puVar1;
    self = puVar10;
    (*param_1)();
    if (puVar1 == (undefined *)*puVar10) {
      _swift_release(puVar2);
      return;
    }
    FUN_100368250();
    uVar9 = *puVar10;
    pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    pJVar4 = Foundation::JSONEncoder::init(pJVar3);
    builtin_strncpy(local_80,"clipboard",10);
    local_80[10] = '\0';
    local_80[0xb] = '\0';
    local_80[0xc] = '\0';
    local_80[0xd] = '\0';
    local_80[0xe] = '\0';
    local_80[0xf] = -0x17;
    local_68 = 0;
    local_60 = 0;
    local_58 = 1;
    pJVar3 = pJVar4;
    local_70 = uVar9;
    FUN_10032b230();
    puVar1 = &DAT_100eca9e8;
    DVar5 = Foundation::JSONEncoder::_encode(pJVar4,pJVar3,&DAT_100eca9e8,pJVar3);
    _swift_release(pJVar4);
    pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar5);
    FUN_10003bf2c(DVar5.unknown,puVar1);
    objc_stub::setRawAttributes_((ID)self,pNVar6);
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(auStack_90 + -extraout_x8,1,1,TVar7.unknown)
    ;
    puVar1 = &DAT_100eccd40;
    _swift_allocObject(&DAT_100eccd40,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined **)(puVar1 + 0x20) = puVar2;
    _swift_retain(puVar2);
    uVar9 = 0;
    FUN_1003651d8(0,0,auStack_90 + -extraout_x8,&DAT_100c42f18,puVar1);
    _swift_release(puVar2);
    _swift_release(uVar9);
  }
  return;
}



/* Address: 0x100369304 | thunk_FUN_10036c614 */

void thunk_FUN_10036c614(void)

{
  FUN_10036c614();
  return;
}



/* Address: 0x100369308 | FUN_100369308 */

void FUN_100369308(void)

{
  FUN_100369328();
  return;
}



/* Address: 0x100369328 | FUN_100369328 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003693c0) */

void FUN_100369328(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  ID self;
  undefined *local_a0 [3];
  undefined *local_88;
  undefined8 *local_80;
  
  self = *(ID *)(unaff_x20 + 0x20);
  lVar1 = 0;
  FUN_100363c68();
  _swift_initStackObject();
  *(ID *)(lVar1 + 0x10) = self;
  FUN_100368250();
  local_a0[0] = (undefined *)objc_stub::managedObjectContext(self);
  if (local_a0[0] == (undefined *)0x0) {
    puVar2 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar3 = &DAT_100fbfdb0;
    local_88 = puVar2;
    FUN_100016eac(&DAT_100fbfdb0,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
    local_a0[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100329088();
    FUN_1003214a8(0);
    (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
    puVar2 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar3 = &DAT_100fbfdb0;
    local_88 = puVar2;
    FUN_100016eac(&DAT_100fbfdb0,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  }
  ppuVar4 = local_a0;
  local_80 = puVar3;
  FUN_100004640(ppuVar4,puVar2);
  ppuVar5 = ppuVar4;
  FUN_100368250();
  FUN_100363004(ppuVar4,ppuVar5,puVar2,puVar3[1]);
  FUN_100004594(local_a0);
  return;
}



/* Address: 0x100369500 | FUN_100369500 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100369500(ID param_1,ID param_2)

{
  ID IVar1;
  NSString *pNVar2;
  
  IVar1 = objc_stub::objectID(param_2);
  IVar1 = objc_stub::objectWithID_(param_1,IVar1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::willChangeValueForKey_(IVar1,pNVar2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::didChangeValueForKey_(IVar1,pNVar2);
  return 0;
}



/* Address: 0x1003695b4 | FUN_1003695b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003695b4(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_release(*(undefined8 *)(param_2 + 0x20),param_2);
    FUN_1000037f0(&DAT_100fbe6c8,&DAT_100c43090);
    (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  }
  return;
}



/* Address: 0x10036964c | FUN_10036964c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036964c(undefined8 param_1,long param_2,void *param_3,char *param_4,void *param_5)

{
  bool bVar1;
  char *pcVar2;
  NSNotification *pNVar3;
  ID self;
  Notification NVar4;
  
  pcVar2 = (char *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  bVar1 = pcVar2 == (char *)0x0;
  if (!bVar1) {
    self = *(ID *)(pcVar2 + 0x20);
    _swift_release();
    NVar4.pastePaused.bridgeObject = param_3;
    NVar4.pastePaused.str = pcVar2;
    NVar4.syncInProgress.bridgeObject = param_5;
    NVar4.syncInProgress.str = param_4;
    pNVar3 = Foundation::Notification::_bridgeToObjectiveC(NVar4);
    objc_stub::mergeChangesFromContextDidSaveNotification_(self,pNVar3);
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Address: 0x1003696e0 | FUN_1003696e0 */

void FUN_1003696e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1003696f8,0,0);
  return;
}



/* Address: 0x1003696f8 | FUN_1003696f8 */

void FUN_1003696f8(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar1 = &DAT_100eccf60;
  _swift_allocObject(&DAT_100eccf60,0x20,7);
  *(undefined **)(unaff_x22 + 0x20) = puVar1;
  *(code **)(puVar1 + 0x10) = FUN_10036caec;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  plVar2 = (long *)0xf0;
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1003697a4;
  FUN_10036735c(0,0,FUN_10003c9f0,puVar1);
  return;
}



/* Address: 0x1003697a4 | FUN_1003697a4 */

void FUN_1003697a4(undefined1 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x28));
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    param_1 = 1;
  }
  _swift_release(uVar1);
  **(undefined1 **)(lVar3 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010036980c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100369810 | FUN_100369810 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100369810(undefined8 param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  long lStack_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357cf0(auStack_88);
  lVar3 = lStack_68;
  uVar4 = local_70;
  FUN_100004640(auStack_88,local_70);
  _swift_beginAccess(param_2 + 0x10,auStack_a0,0,0);
  puVar2 = *(undefined **)(param_2 + 0x10);
  (**(code **)(*(long *)(lVar3 + 8) + 0x28))(puVar2,uVar4);
  FUN_100004594(auStack_88);
  if ((ulong)puVar2 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      _Var1.unknown = puVar2;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(puVar2);
  }
  else {
    FUN_100357cf0(auStack_88);
    FUN_100004640(auStack_88,local_70);
    local_a8 = puVar2;
    FUN_100357e58(auStack_d0);
    FUN_100004640(auStack_d0,local_b8);
    uVar4 = local_b8;
    (**(code **)(*(long *)(lStack_b0 + 8) + 0x28))(local_b8);
    lVar3 = *(long *)(lStack_68 + 0x10);
    pcVar7 = *(code **)(lVar3 + 0x38);
    puVar5 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar6 = &DAT_100fbe928;
    FUN_100016eac(&DAT_100fbe928,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    (*pcVar7)(&local_a8,uVar4,puVar5,puVar6,local_70,lVar3);
    FUN_100004594(auStack_d0);
    _swift_bridgeObjectRelease(puVar2);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x1003699b8 | FUN_1003699b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

bool FUN_1003699b8(_ArrayBuffer param_1,_ArrayBuffer param_2)

{
  undefined *puVar1;
  _ArrayBuffer _Var2;
  undefined *puVar3;
  _CocoaArrayWrapper _Var4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  NSObject *pNVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  NSObject *pNVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar11 = *(long *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var4.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var4.unknown = param_1.unknown;
    }
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
  }
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    lVar7 = *(long *)((param_2.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var4.unknown = param_2.unknown & 0xffffffffffffff8U;
    if (((ulong)param_2.unknown & 0x8000000000000000) != 0) {
      _Var4.unknown = param_2.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
  }
  if (lVar11 == lVar7) {
    if (lVar11 != 0) {
      puVar9 = param_1.unknown & 0xffffffffffffff8;
      _Var2.unknown = puVar9;
      if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
        _Var2.unknown = param_1.unknown;
      }
      puVar1 = puVar9 + 0x20;
      if ((ulong)param_1.unknown >> 0x3e != 0) {
        puVar1 = _Var2.unknown;
      }
      puVar10 = param_2.unknown & 0xffffffffffffff8;
      _Var2.unknown = puVar10;
      if (((ulong)param_2.unknown & 0x8000000000000000) != 0) {
        _Var2.unknown = param_2.unknown;
      }
      puVar3 = puVar10 + 0x20;
      if ((ulong)param_2.unknown >> 0x3e != 0) {
        puVar3 = _Var2.unknown;
      }
      if (puVar1 != puVar3) {
        if (lVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100369c0c);
          (*pcVar5)();
        }
        FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
        if ((((ulong)param_2.unknown | (ulong)param_1.unknown) & 0xc000000000000001) == 0) {
          lVar7 = *(long *)(puVar9 + 0x10);
          lVar15 = *(long *)(puVar10 + 0x10);
          puVar13 = (undefined8 *)(param_1.unknown + 0x20);
          puVar14 = (undefined8 *)(param_2.unknown + 0x20);
          do {
            lVar11 = lVar11 + -1;
            if (lVar7 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100369bac);
              (*pcVar5)();
            }
            if (lVar15 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100369bb0);
              (*pcVar5)();
            }
            bVar6 = (extension_ObjectiveC)::__C::NSObject::___infix
                              ((NSObject *)*puVar13,(NSObject *)*puVar14);
            if (!bVar6) {
              return bVar6;
            }
            lVar15 = lVar15 + -1;
            lVar7 = lVar7 + -1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar11 != 0);
          return bVar6;
        }
        lVar7 = 4;
        do {
          lVar11 = lVar11 + -1;
          pNVar12 = (NSObject *)(lVar7 + -4);
          if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
            if (*(long *)(puVar9 + 0x10) <= (long)pNVar12) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100369bb4);
              (*pcVar5)();
            }
            pNVar8 = *(NSObject **)(param_1.unknown + lVar7 * 8);
            if (((ulong)param_2.unknown & 0xc000000000000001) != 0) goto LAB_100369aa4;
LAB_100369ad4:
            if (*(long *)(puVar10 + 0x10) <= (long)pNVar12) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100369bb8);
              (*pcVar5)();
            }
            pNVar12 = *(NSObject **)(param_2.unknown + lVar7 * 8);
          }
          else {
            pNVar8 = pNVar12;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar12,param_1);
            if (((ulong)param_2.unknown & 0xc000000000000001) == 0) goto LAB_100369ad4;
LAB_100369aa4:
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar12,param_2);
          }
          bVar6 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar8,pNVar12);
          if (!bVar6) {
            return false;
          }
          lVar7 = lVar7 + 1;
          if (lVar11 == 0) {
            return true;
          }
        } while( true );
      }
    }
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}



/* Address: 0x100369c0c | FUN_100369c0c */

undefined8 FUN_100369c0c(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_10036a700(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x100369d50 | FUN_100369d50 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100369d50(undefined8 *param_1,__CocoaSet param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  __CocoaSet _Var4;
  undefined8 uVar5;
  ulong uVar6;
  __int64 _Var7;
  __CocoaSet _Var8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined *puVar10;
  undefined *local_68;
  
  puVar10 = (undefined *)*unaff_x20;
  if (((ulong)puVar10 & 0xc000000000000001) == 0) {
    FUN_1003b4868(0);
    uVar6 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar10 + 0x28));
    uVar9 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0) {
      do {
        bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(puVar10 + 0x30) + uVar6 * 8),
                           (NSObject *)param_2.unknown);
        if (bVar3) {
          *param_1 = *(undefined8 *)(*(long *)(puVar10 + 0x30) + uVar6 * 8);
          return 0;
        }
        uVar6 = uVar6 + 1 & ~uVar9;
      } while ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0);
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = (undefined *)*unaff_x20;
    FUN_10036a864(param_2.unknown,uVar6,uVar5);
    *unaff_x20 = local_68;
  }
  else {
    _Var8.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var8.unknown = puVar10;
    }
    _swift_bridgeObjectRetain(puVar10);
    _Var4.unknown = param_2.unknown;
    Swift::__CocoaSet::_member(param_2);
    if (_Var4.unknown != (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar10);
      uVar5 = 0;
      local_68 = _Var4.unknown;
      FUN_1003b4868(0);
      _swift_dynamicCast(param_1,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar5,7);
      return 0;
    }
    _Var7 = Swift::__CocoaSet::get_count(_Var8);
    if (SCARRY8(_Var7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100369f88);
      (*pcVar2)();
    }
    FUN_10036a2f8(_Var8.unknown,_Var7 + 1);
    local_68 = _Var8.unknown;
    if (*(ulong *)(_Var8.unknown + 0x18) <= *(ulong *)(_Var8.unknown + 0x10)) {
      FUN_10036b910(*(ulong *)(_Var8.unknown + 0x10) + 1,&DAT_100fc1310,&DAT_100c43058);
    }
    puVar1 = local_68;
    FUN_10036bd88(param_2.unknown,local_68);
    _swift_bridgeObjectRelease(puVar10);
    *unaff_x20 = puVar1;
  }
  *param_1 = param_2.unknown;
  return 1;
}



/* Address: 0x100369f88 | FUN_100369f88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100369f88(undefined8 *param_1,__CocoaSet param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  __CocoaSet _Var4;
  undefined8 uVar5;
  ulong uVar6;
  __int64 _Var7;
  __CocoaSet _Var8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined *puVar10;
  undefined *local_68;
  
  puVar10 = (undefined *)*unaff_x20;
  if (((ulong)puVar10 & 0xc000000000000001) == 0) {
    FUN_10000ec2c(0,param_3,param_4);
    uVar6 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar10 + 0x28));
    uVar9 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0) {
      do {
        bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(puVar10 + 0x30) + uVar6 * 8),
                           (NSObject *)param_2.unknown);
        if (bVar3) {
          *param_1 = *(undefined8 *)(*(long *)(puVar10 + 0x30) + uVar6 * 8);
          return 0;
        }
        uVar6 = uVar6 + 1 & ~uVar9;
      } while ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0);
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = (undefined *)*unaff_x20;
    FUN_10036a9dc(param_2.unknown,uVar6,uVar5,param_5,param_6,param_3,param_4);
    *unaff_x20 = local_68;
    *param_1 = param_2.unknown;
  }
  else {
    _Var8.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var8.unknown = puVar10;
    }
    _swift_bridgeObjectRetain(puVar10);
    _Var4.unknown = param_2.unknown;
    Swift::__CocoaSet::_member(param_2);
    if (_Var4.unknown != (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar10);
      uVar5 = 0;
      local_68 = _Var4.unknown;
      FUN_10000ec2c(0,param_3,param_4);
      _swift_dynamicCast(param_1,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar5,7);
      return 0;
    }
    _Var7 = Swift::__CocoaSet::get_count(_Var8);
    if (SCARRY8(_Var7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10036a20c);
      (*pcVar2)();
    }
    FUN_10036a4fc(_Var8.unknown,_Var7 + 1,param_5,param_6,param_3,param_4);
    local_68 = _Var8.unknown;
    if (*(ulong *)(_Var8.unknown + 0x18) <= *(ulong *)(_Var8.unknown + 0x10)) {
      FUN_10036b910(*(ulong *)(_Var8.unknown + 0x10) + 1,param_5,param_6);
    }
    puVar1 = local_68;
    FUN_10036bd88(param_2.unknown,local_68);
    _swift_bridgeObjectRelease(puVar10);
    *unaff_x20 = puVar1;
    *param_1 = param_2.unknown;
  }
  return 1;
}



/* Address: 0x10036a20c | FUN_10036a20c */

undefined8 FUN_10036a20c(undefined8 *param_1,undefined *param_2)

{
  Hasher HVar1;
  ulong uVar2;
  undefined8 uVar3;
  Hasher HVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  HVar4.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar7 + 0x28));
  HVar1.unknown = param_2;
  Swift::Hasher::_combine((__uint64)param_2,HVar4);
  uVar2 = Swift::Hasher::_finalize(HVar1);
  uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if (*(undefined **)(*(long *)(lVar7 + 0x30) + uVar2 * 8) == param_2) {
        uVar3 = 0;
        goto LAB_10036a2dc;
      }
      uVar2 = uVar2 + 1 & ~uVar6;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  lVar5 = *unaff_x20;
  FUN_10036ab48(param_2,uVar2,lVar7);
  *unaff_x20 = lVar5;
  uVar3 = 1;
LAB_10036a2dc:
  *param_1 = param_2;
  return uVar3;
}



/* Address: 0x10036a2f8 | FUN_10036a2f8 */

undefined * FUN_10036a2f8(__CocoaSet param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  _SetStorage *this;
  __CocoaSet _Var5;
  Iterator *this_00;
  undefined8 uVar6;
  Iterator *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  Iterator *local_78;
  undefined8 local_70;
  undefined *local_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    _Var5.unknown = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    this = (_SetStorage *)&DAT_100fc1310;
    FUN_1000037f0(&DAT_100fc1310,&DAT_100c43058);
    _Var5.unknown = param_1.unknown;
    Swift::_SetStorage::_convert(this,param_1,param_2);
    local_68 = _Var5.unknown;
    this_00 = Swift::__CocoaSet::makeIterator(param_1);
    pIVar7 = this_00;
    Swift::__CocoaSet::Iterator::_next(this_00);
    if (pIVar7 != (Iterator *)0x0) {
      uVar6 = 0;
      FUN_1003b4868(0);
      puVar2 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
      do {
        local_78 = pIVar7;
        _swift_dynamicCast(&local_70,&local_78,puVar2 + 8,uVar6,7);
        uVar3 = local_70;
        if (*(ulong *)(_Var5.unknown + 0x18) <= *(ulong *)(_Var5.unknown + 0x10)) {
          FUN_10036b910(*(ulong *)(_Var5.unknown + 0x10) + 1,&DAT_100fc1310,&DAT_100c43058);
          _Var5.unknown = local_68;
        }
        pIVar7 = (Iterator *)
                 (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                           (*(__int64 *)(_Var5.unknown + 0x28));
        uVar11 = -1L << ((ulong)(byte)_Var5.unknown[0x20] & 0x3f);
        uVar10 = (ulong)pIVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10036a4fc);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(_Var5.unknown + uVar8 + 0x38) =
             1L << (uVar9 & 0x3f) | *(ulong *)(_Var5.unknown + uVar8 + 0x38);
        *(undefined8 *)(*(long *)(_Var5.unknown + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(_Var5.unknown + 0x10) = *(long *)(_Var5.unknown + 0x10) + 1;
        Swift::__CocoaSet::Iterator::_next(this_00);
      } while (pIVar7 != (Iterator *)0x0);
    }
    _swift_release(this_00);
  }
  return _Var5.unknown;
}



/* Address: 0x10036a4fc | FUN_10036a4fc */

undefined *
FUN_10036a4fc(__CocoaSet param_1,long param_2,_SetStorage *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  _SetStorage *this;
  __CocoaSet _Var5;
  Iterator *this_00;
  undefined8 uVar6;
  Iterator *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  Iterator *local_78;
  undefined8 local_70;
  undefined *local_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    _Var5.unknown = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    this = param_3;
    FUN_1000037f0(param_3,param_4);
    _Var5.unknown = param_1.unknown;
    Swift::_SetStorage::_convert(this,param_1,param_2);
    local_68 = _Var5.unknown;
    this_00 = Swift::__CocoaSet::makeIterator(param_1);
    pIVar7 = this_00;
    Swift::__CocoaSet::Iterator::_next(this_00);
    if (pIVar7 != (Iterator *)0x0) {
      uVar6 = 0;
      FUN_10000ec2c(0,param_5,param_6);
      puVar2 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
      do {
        local_78 = pIVar7;
        _swift_dynamicCast(&local_70,&local_78,puVar2 + 8,uVar6,7);
        uVar3 = local_70;
        if (*(ulong *)(_Var5.unknown + 0x18) <= *(ulong *)(_Var5.unknown + 0x10)) {
          FUN_10036b910(*(ulong *)(_Var5.unknown + 0x10) + 1,param_3,param_4);
          _Var5.unknown = local_68;
        }
        pIVar7 = (Iterator *)
                 (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                           (*(__int64 *)(_Var5.unknown + 0x28));
        uVar11 = -1L << ((ulong)(byte)_Var5.unknown[0x20] & 0x3f);
        uVar10 = (ulong)pIVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10036a700);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(_Var5.unknown + uVar8 + 0x38) =
             1L << (uVar9 & 0x3f) | *(ulong *)(_Var5.unknown + uVar8 + 0x38);
        *(undefined8 *)(*(long *)(_Var5.unknown + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(_Var5.unknown + 0x10) = *(long *)(_Var5.unknown + 0x10) + 1;
        Swift::__CocoaSet::Iterator::_next(this_00);
      } while (pIVar7 != (Iterator *)0x0);
    }
    _swift_release(this_00);
  }
  return _Var5.unknown;
}



/* Address: 0x10036a700 | FUN_10036a700 */

void FUN_10036a700(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_10036b2bc();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_10036ac88(uVar6 + 1);
    }
    else {
      FUN_10036b698();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10036a864);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10036a854);
  (*pcVar4)();
}



/* Address: 0x10036a864 | FUN_10036a864 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036a864(NSObject *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10036b418(&DAT_100fc1310,&DAT_100c43058);
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_10036aeb0(uVar3 + 1,&DAT_100fc1310,&DAT_100c43058);
    }
    else {
      FUN_10036b910(uVar3 + 1,&DAT_100fc1310,&DAT_100c43058);
    }
    lVar5 = *unaff_x20;
    param_2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(lVar5 + 0x28));
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      FUN_1003b4868(0);
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(lVar5 + 0x30) + param_2 * 8),param_1);
        if (bVar2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10036a9dc);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar4 = *unaff_x20;
  lVar5 = lVar4 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(NSObject **)(*(long *)(lVar4 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10036a9d0);
  (*pcVar1)();
}



/* Address: 0x10036a9dc | FUN_10036a9dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036a9dc(NSObject *param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10036b418(param_4,param_5);
    }
  }
  else {
    lVar5 = uVar3 + 1;
    if ((param_3 & 1) == 0) {
      FUN_10036aeb0(lVar5,param_4,param_5);
    }
    else {
      FUN_10036b910(lVar5,param_4,param_5);
    }
    lVar5 = *unaff_x20;
    param_2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(lVar5 + 0x28));
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      FUN_10000ec2c(0,param_6,param_7);
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(lVar5 + 0x30) + param_2 * 8),param_1);
        if (bVar2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10036ab48);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar4 = *unaff_x20;
  lVar5 = lVar4 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(NSObject **)(*(long *)(lVar4 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10036ab3c);
  (*pcVar1)();
}



/* Address: 0x10036ab48 | FUN_10036ab48 */

void FUN_10036ab48(undefined *param_1,Hasher param_2,uint param_3)

{
  code *pcVar1;
  Hasher HVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10036b558();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_10036b0ac(uVar3 + 1);
    }
    else {
      FUN_10036bb34();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    HVar2.unknown = param_1;
    Swift::Hasher::_combine((__uint64)param_1,param_2);
    uVar3 = Swift::Hasher::_finalize(HVar2);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2.unknown = (undefined *)(uVar3 & (uVar4 ^ 0xffffffffffffffff));
    if ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
         ((ulong)param_2.unknown & 0x3f) & 1) != 0) {
      FUN_1002fbb6c(0);
      do {
        if (*(undefined **)(*(long *)(lVar6 + 0x30) + (long)param_2.unknown * 8) == param_1) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10036ac88);
          (*pcVar1)();
        }
        param_2.unknown = param_2.unknown + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
                ((ulong)param_2.unknown & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar6 = lVar5 + ((ulong)param_2.unknown >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << ((ulong)param_2.unknown & 0x3f);
  *(undefined **)(*(long *)(lVar5 + 0x30) + (long)param_2.unknown * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10036ac80);
  (*pcVar1)();
}



/* Address: 0x10036ac88 | FUN_10036ac88 */

void FUN_10036ac88(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbe468;
  FUN_1000037f0(&DAT_100fbe468,&DAT_100c40460);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_10036ae78:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10036aeac);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_10036ae78;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10036aeb0);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x10036aeb0 | FUN_10036aeb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036aeb0(long param_1,_SetStorage *param_2,undefined8 param_3)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  __RawSetStorage *p_Var3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar12;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_1000037f0(param_2,param_3);
  p_Var3 = original;
  Swift::_SetStorage::_resize(param_2,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_10036b074:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036b0a8);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_10036b074;
        uVar11 = *(ulong *)(original + 0x38 + lVar12 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar12 = lVar7;
    }
    uVar4 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar12 << 6) * 8);
    uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036b0ac);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = uVar4;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar12;
  } while( true );
}



/* Address: 0x10036b0ac | FUN_10036b0ac */

void FUN_10036b0ac(undefined *param_1)

{
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  Hasher HVar4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  undefined *puVar12;
  long lVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fc1318;
  FUN_1000037f0(&DAT_100fc1318,&DAT_100c43078);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_10036b284:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036b2b8);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_10036b284;
        uVar11 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar7;
    }
    puVar12 = *(undefined **)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 8);
    Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
    HVar4.unknown = puVar12;
    Swift::Hasher::_combine((__uint64)puVar12,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar4);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036b2bc);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(undefined **)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = puVar12;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Address: 0x10036b2bc | FUN_10036b2bc */

void FUN_10036b2bc(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100fbe468;
  FUN_1000037f0(&DAT_100fbe468,&DAT_100c40460);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_10036b398;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_10036b398:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10036b418);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_10036b3f0;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar10;
      }
    } while( true );
  }
LAB_10036b3f0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x10036b418 | FUN_10036b418 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10036b418(_SetStorage *param_1)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar8;
  
  FUN_1000037f0();
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(param_1,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    lVar7 = 0;
    do {
      if (uVar4 == 0) {
        do {
          lVar8 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10036b558);
            (*pcVar2)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_10036b530;
          uVar4 = *(ulong *)(p_Var1 + lVar8 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
      }
      else {
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
        lVar8 = lVar7;
      }
      uVar6 = LZCOUNT(uVar6) | lVar8 << 6;
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
      lVar7 = lVar8;
    } while( true );
  }
LAB_10036b530:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x10036b558 | FUN_10036b558 */

void FUN_10036b558(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100fc1318;
  FUN_1000037f0(&DAT_100fc1318,&DAT_100c43078);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10036b698);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10036b678;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_10036b678:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x10036b698 | FUN_10036b698 */

void FUN_10036b698(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fbe468;
  FUN_1000037f0(&DAT_100fbe468,&DAT_100c40460);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_10036b8c8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var15 = original + 0x38;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var15;
  lVar11 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10036b8f8);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var15 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var15,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10036b8c8;
        }
        uVar17 = *(ulong *)(p_Var15 + lVar16 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar17 == 0);
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar16 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10036b8fc);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar16;
  } while( true );
}



/* Address: 0x10036b8fc | FUN_10036b8fc */

void FUN_10036b8fc(undefined8 param_1)

{
  FUN_10036b910(param_1,&DAT_100fbe430,&DAT_100c43050);
  return;
}



/* Address: 0x10036b910 | FUN_10036b910 */

void FUN_10036b910(long param_1,_SetStorage *param_2,undefined8 param_3)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  undefined8 uVar10;
  __RawSetStorage *original;
  __RawSetStorage *p_Var11;
  long lVar12;
  ulong uVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  FUN_1000037f0(param_2,param_3);
  p_Var3 = original;
  Swift::_SetStorage::_resize(param_2,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_10036bb04:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x38;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)p_Var11;
  lVar6 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar12 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036bb30);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar12) {
          uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var11 = -1L << (uVar13 & 0x3f);
          }
          else {
            _bzero(p_Var11,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10036bb04;
        }
        uVar13 = *(ulong *)(p_Var11 + lVar12 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar13 == 0);
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar6;
    }
    uVar10 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar5) | lVar12 << 6) * 8);
    uVar4 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036bb34);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x38);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar10;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar12;
  } while( true );
}



/* Address: 0x10036bb34 | FUN_10036bb34 */

void FUN_10036bb34(undefined *param_1)

{
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  Hasher HVar4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var12;
  undefined *puVar13;
  long lVar14;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fc1318;
  FUN_1000037f0(&DAT_100fc1318,&DAT_100c43078);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_10036bd54:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var12 = original + 0x38;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036bd84);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10036bd54;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    puVar13 = *(undefined **)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 8);
    Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
    HVar4.unknown = puVar13;
    Swift::Hasher::_combine((__uint64)puVar13,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar4);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10036bd88);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(undefined **)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = puVar13;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x10036bd88 | FUN_10036bd88 */

void FUN_10036bd88(undefined8 param_1,long param_2)

{
  _HashTable _Var1;
  ulong uVar2;
  Bucket BVar3;
  
  uVar2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(param_2 + 0x28));
  _Var1.unknown = (undefined *)(param_2 + 0x38);
  BVar3 = Swift::_HashTable::nextHole
                    ((Bucket)(uVar2 & (-1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f) ^
                                      0xffffffffffffffffU)),_Var1);
  uVar2 = (ulong)BVar3.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar2) =
       1L << (BVar3.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar2);
  *(undefined8 *)(*(long *)(param_2 + 0x30) + BVar3.offset * 8) = param_1;
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + 1;
  return;
}



/* Address: 0x10036be08 | FUN_10036be08 */

bool FUN_10036be08(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = 0;
  FUN_10032b0c8(0);
  _swift_dynamicCastClass(lVar2,uVar1);
  return lVar2 != 0;
}



/* Address: 0x10036be40 | FUN_10036be40 */

bool FUN_10036be40(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  uVar1 = 0;
  FUN_1003214a8(0);
  _swift_dynamicCastClass(lVar2,uVar1);
  return lVar2 != 0;
}



/* Address: 0x10036be78 | FUN_10036be78 */

Set<undefined> FUN_10036be78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long minimumCapacity;
  undefined8 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_48 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      _swift_bridgeObjectRetain(uVar2);
      FUN_100369c0c(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x10036bf0c | FUN_10036bf0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

Set<undefined> FUN_10036bf0c(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  Set<undefined> SVar3;
  code *pcVar4;
  Set<undefined> SVar5;
  ulong uVar6;
  __int64 minimumCapacity;
  long lVar7;
  ulong uVar8;
  undefined1 local_70 [8];
  undefined *local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    minimumCapacity = *(__int64 *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1.unknown;
    }
    minimumCapacity = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  FUN_10036c8f4(&DAT_100fc04c0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  SVar5 = Swift::Set::init(minimumCapacity);
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar7 = *(long *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
    SVar3 = SVar5;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1.unknown;
    }
    local_68 = SVar5.unknown;
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    SVar3.unknown = local_68;
  }
  local_68 = SVar5.unknown;
  if (lVar7 != 0) {
    uVar8 = 0;
    local_68 = SVar3.unknown;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10036c080);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_1.unknown + uVar8 * 8 + 0x20);
      }
      else {
        uVar6 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
      }
      lVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10036c07c);
        (*pcVar4)();
      }
      FUN_100369f88(local_70,uVar6,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8,
                    &DAT_100fbe418,&DAT_100c40440);
      uVar8 = uVar8 + 1;
    } while (lVar1 != lVar7);
  }
  return (Set<undefined>)local_68;
}



/* Address: 0x10036c094 | FUN_10036c094 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID * FUN_10036c094(ID param_1)

{
  NSPredicate *pNVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID *pIVar4;
  ID local_48;
  
  FUN_100329764();
  pNVar1 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar2 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar3 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  *(undefined **)(puVar2 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar2 + 0x40) = puVar3;
  *(undefined8 *)(puVar2 + 0x20) = 2;
  pNVar1 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar1);
  objc_stub::setPredicate_(param_1,pNVar1);
  puVar2 = &DAT_100fc1220;
  FUN_1000037f0(&DAT_100fc1220,&DAT_100c42ee8);
  _swift_allocObject();
  FUN_100365e18(param_1,FUN_10032b0c8,&DAT_100ecd000,FUN_10036cbec,FUN_10036cc14);
  local_48 = param_1;
  FUN_1000037f0(&DAT_100fc0d10,&DAT_100c42ef0);
  _swift_allocObject();
  puVar3 = &DAT_100fc1228;
  FUN_100016eac(&DAT_100fc1228,&DAT_100fc1220,&DAT_100c42ee8,
                &TargetProtocolConformanceDescriptor_100c424d0);
  pIVar4 = &local_48;
  FUN_1001ae768(pIVar4,puVar2,puVar3);
  return pIVar4;
}



/* Address: 0x10036c230 | FUN_10036c230 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036c230(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10036c25c | FUN_10036c25c */

void FUN_10036c25c(void)

{
  long unaff_x20;
  
  FUN_100369500(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10036c264 | FUN_10036c264 */

void FUN_10036c264(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10036c274 | FUN_10036c274 */

void FUN_10036c274(long param_1,long param_2)

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



/* Address: 0x10036c288 | FUN_10036c288 */

void FUN_10036c288(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10036c290 | FUN_10036c290 */

void FUN_10036c290(void)

{
  FUN_1003695b4();
  return;
}



/* Address: 0x10036c298 | FUN_10036c298 */

void FUN_10036c298(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      _swift_bridgeObjectRetain(uVar2);
      FUN_100369c0c(auStack_50,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_48);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x10036c304 | FUN_10036c304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

Set<undefined> FUN_10036c304(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  Set<undefined> SVar3;
  code *pcVar4;
  Set<undefined> SVar5;
  ulong uVar6;
  __int64 minimumCapacity;
  long lVar7;
  ulong uVar8;
  undefined1 local_60 [8];
  undefined *local_58;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    minimumCapacity = *(__int64 *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1.unknown;
    }
    minimumCapacity = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  FUN_1003b4868(0);
  FUN_100003a00(&DAT_100fc1308,FUN_1003b4868,
                PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0);
  SVar5 = Swift::Set::init(minimumCapacity);
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar7 = *(long *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
    SVar3 = SVar5;
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = param_1.unknown;
    }
    local_58 = SVar5.unknown;
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    SVar3.unknown = local_58;
  }
  local_58 = SVar5.unknown;
  if (lVar7 != 0) {
    uVar8 = 0;
    local_58 = SVar3.unknown;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10036c434);
          (*pcVar4)();
        }
        uVar6 = *(ulong *)(param_1.unknown + uVar8 * 8 + 0x20);
      }
      else {
        uVar6 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
      }
      lVar1 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10036c430);
        (*pcVar4)();
      }
      FUN_100369d50(local_60,uVar6);
      uVar8 = uVar8 + 1;
    } while (lVar1 != lVar7);
  }
  return (Set<undefined>)local_58;
}



/* Address: 0x10036c448 | FUN_10036c448 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

_StringGuts FUN_10036c448(ID param_1,code *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  NSString *pNVar3;
  _StringGuts _Var4;
  String SVar5;
  String local_50;
  
  objc_stub::name(param_1);
  local_50 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (*param_2)(&local_50);
  objc_stub::name(param_1);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var4.unknown = SVar5.bridgeObject;
  _Var2.unknown = local_50.bridgeObject;
  if (SVar5 == local_50) {
    _swift_bridgeObjectRelease(local_50.bridgeObject);
    _Var2.unknown = _Var4.unknown;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar5.str,_Var4,(_StringComparisonResult)(__int8)local_50.str);
    _swift_bridgeObjectRelease(_Var4.unknown);
    if (!bVar1) {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setName_(param_1,pNVar3);
      _swift_bridgeObjectRelease(_Var2.unknown);
      return (_StringGuts)(undefined *)0x0;
    }
  }
  _swift_bridgeObjectRelease(_Var2.unknown);
  return (_StringGuts)_Var2.unknown;
}



/* Address: 0x10036c56c | FUN_10036c56c */

void FUN_10036c56c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10036c57c | FUN_10036c57c */

void FUN_10036c57c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10036c5a8 | FUN_10036c5a8 */

void FUN_10036c5a8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1003696e0(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10036c614 | FUN_10036c614 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010036c79c) */
/* WARNING: Removing unreachable block (ram,0x00010036c6b0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036c794 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10036c614(ID param_1,code *param_2)

{
  Data DVar1;
  JSONDecoder *pJVar2;
  undefined1 *puVar3;
  JSONEncoder *pJVar4;
  JSONEncoder *pJVar5;
  NSData *pNVar6;
  uint extraout_w1;
  uint uVar7;
  undefined *puVar8;
  undefined1 *local_90 [2];
  undefined1 local_80 [48];
  
  DVar1.unknown = (undefined *)objc_stub::rawAttributes(param_1);
  if (DVar1.unknown != (undefined *)0x0) {
    uVar7 = extraout_w1;
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    pJVar2 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
    pJVar2 = Foundation::JSONDecoder::init(pJVar2);
    FUN_1003254cc();
    Foundation::JSONDecoder::_decode(pJVar2,(Data)0x100eca9e8);
    FUN_10003bf2c(DVar1.unknown);
    _swift_release(pJVar2);
    puVar3 = local_80;
    FUN_1003245fc();
    if (((uVar7 & 0xff) == 1) && (local_90[0] = puVar3, (*param_2)(local_90), puVar3 != local_90[0])
       ) {
      pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
      _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
      pJVar5 = Foundation::JSONEncoder::init(pJVar4);
      pJVar4 = pJVar5;
      FUN_10032b230();
      puVar8 = &DAT_100eca9e8;
      DVar1 = Foundation::JSONEncoder::_encode(pJVar5,pJVar4,&DAT_100eca9e8,pJVar4);
      _swift_release(pJVar5);
      pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar1);
      FUN_10003bf2c(DVar1.unknown,puVar8);
      objc_stub::setRawAttributes_(param_1,pNVar6);
    }
  }
  return;
}



/* Address: 0x10036c810 | FUN_10036c810 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10036c810(void)

{
  return ZEXT816(0x100fc1290);
}



/* Address: 0x10036c830 | FUN_10036c830 */

undefined1  [16] FUN_10036c830(void)

{
  return ZEXT816(0x100ecce48);
}



/* Address: 0x10036c840 | thunk_FUN_10037631c */

void thunk_FUN_10037631c(void)

{
  FUN_10037631c();
  return;
}



/* Address: 0x10036c844 | FUN_10036c844 */

void FUN_10036c844(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &DAT_100ecc180;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ecc190;
  return;
}



/* Address: 0x10036c85c | FUN_10036c85c */

void FUN_10036c85c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10036c880 | FUN_10036c880 */

void FUN_10036c880(void)

{
  FUN_100366988();
  return;
}



/* Address: 0x10036c8a8 | FUN_10036c8a8 */

void FUN_10036c8a8(void)

{
  FUN_100366c14();
  return;
}



/* Address: 0x10036c8c8 | FUN_10036c8c8 */

void FUN_10036c8c8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10036c8ec | FUN_10036c8ec */

void FUN_10036c8ec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003546b0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10036c8f4 | FUN_10036c8f4 */

void FUN_10036c8f4(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_10000ec2c(0xff);
    puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
    _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Address: 0x10036c934 | FUN_10036c934 */

void FUN_10036c934(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x10036c960 | FUN_10036c960 */

void FUN_10036c960(void)

{
  FUN_100366f04();
  return;
}



/* Address: 0x10036c978 | FUN_10036c978 */

void FUN_10036c978(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


