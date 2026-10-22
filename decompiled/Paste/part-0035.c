/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000645b0 | FUN_1000645b0 */

void FUN_1000645b0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100faa890,&DAT_100c22f68);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100faa890,&DAT_100c22f68);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100faa890,&DAT_100c22f68);
    puVar2 = &DAT_100eb27d0;
    _swift_allocObject(&DAT_100eb27d0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c26d78,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100eb27f8;
    _swift_allocObject(&DAT_100eb27f8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c26d80,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100faa890,&DAT_100c22f68);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x10006484c | FUN_10006484c */

void FUN_10006484c(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar10,&DAT_100faa890,&DAT_100c22f68);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar10,&DAT_100faa890,&DAT_100c22f68);
    uVar11 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1c00;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100faa890,&DAT_100c22f68);
    puVar2 = &DAT_100eb2ac8;
    _swift_allocObject(&DAT_100eb2ac8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fa8308;
    FUN_1000037f0(&DAT_100fa8308,&DAT_100c25370);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar9 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c26e10,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100eb2af0;
    _swift_allocObject(&DAT_100eb2af0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fa8308;
    FUN_1000037f0(&DAT_100fa8308,&DAT_100c25370);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar12;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_b8,puVar8,&DAT_100c26e20,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100faa890,&DAT_100c22f68);
  }
  return;
}



/* Address: 0x100064afc | FUN_100064afc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long **** FUN_100064afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  long ***ppplVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long *unaff_x20;
  long ***local_b8 [3];
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100064da0);
    (*pcVar3)();
  }
  objc_stub::activate(*(ID *)PTR__NSApp_100ea8fa0);
  if (DAT_100fa6f40 != -1) {
    _swift_once(&DAT_100fa6f40,FUN_1000177ac);
  }
  puVar4 = &DAT_100fa6f48;
  _swift_unknownObjectWeakLoadStrong();
  if (puVar4 != (undefined *)0x0) {
    FUN_1001adce8();
    return (long ****)0x0;
  }
  FUN_10000ec2c();
  ppplVar5 = (long ***)0x1;
  FUN_10021d6dc(1,5,puVar4);
  uVar6 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar5 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100017ab8;
  puVar1[1] = 0;
  FUN_100004550(uVar7,uVar2);
  puVar4 = &DAT_100eb27a8;
  _swift_allocObject(&DAT_100eb27a8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  puVar1 = (undefined8 *)((long)ppplVar5 + _TtC12PasteRouting16WindowTransition::onDismissed);
  _swift_beginAccess(puVar1,auStack_90,1,0);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100017ba8;
  puVar1[1] = puVar4;
  FUN_100011128(param_2,param_3);
  FUN_100004550(uVar7,uVar2);
  ppuStack_98 = &PTR_PTR_100ebe110;
  uVar7 = 0;
  local_b8[0] = ppplVar5;
  local_a0 = uVar6;
  FUN_1001adc9c();
  _swift_allocObject();
  pppplVar8 = local_b8;
  FUN_1001ad514();
  FUN_100017bb0(0);
  _objc_allocWithZone();
  pppplVar9 = pppplVar8;
  _swift_retain(pppplVar8);
  FUN_10001809c();
  (*(code *)(*pppplVar8)[0xd])(pppplVar9);
  ppuStack_98 = &PTR_PTR_100ebe0e8;
  local_b8[0] = (long ***)pppplVar8;
  local_a0 = uVar7;
  (**(code **)(*unaff_x20 + 0x88))(local_b8,FUN_100004520,0);
  pppplVar8 = local_b8;
  FUN_100004594(pppplVar8);
  return pppplVar8;
}



/* Address: 0x100064da0 | FUN_100064da0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100064da0(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  MainActor *this;
  ContiguousArray CVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  long *plVar12;
  undefined7 extraout_var;
  NSString *pNVar13;
  ID IVar14;
  long lVar15;
  long lVar16;
  NSURL *pNVar17;
  URL UVar18;
  _ArrayBuffer _Var19;
  ContiguousArray CVar20;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar21;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  ID IVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long lStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  ID local_d8 [4];
  undefined *local_b8;
  long local_b0;
  long *local_a8;
  long *local_a0;
  long local_98;
  long local_90;
  undefined8 *puStack_88;
  ulong local_80;
  ulong local_78;
  undefined *local_70;
  undefined *local_68;
  
  lVar5 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  plVar24 = (long *)((long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a8 = plVar24;
  puStack_88 = (undefined8 *)Foundation::URL::typeMetadataAccessor();
  local_90 = *(long *)((long)puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  lVar5 = (long)plVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar21 = (undefined *)(lVar5 - extraout_x12);
  puVar6 = &DAT_100fa8c68;
  local_b8 = puVar21;
  FUN_1000037f0(&DAT_100fa8c68,&DAT_100c25ae0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  plVar24 = (long *)(puVar21 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_98 = (long)plVar24 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  plVar28 = (long *)(((long)plVar24 - extraout_x12_00) - extraout_x12_01);
  puVar6 = &DAT_100fa8310;
  local_68 = param_1.unknown;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar21 = &DAT_100fa8318;
  FUN_100016eac(&DAT_100fa8318,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  FUN_10031c4c4(puVar6,puVar21);
  if (((ulong)puVar6 & 1) == 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((ulong)param_1.unknown >> 0x3e == 0) {
      IVar25 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
        _Var1.unknown = param_1.unknown;
      }
      IVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    _swift_bridgeObjectRetain(param_1.unknown);
    _Var19.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_a0 = plVar24;
    if (IVar25 != 0) {
      uVar22 = 0;
      local_78 = (ulong)param_1.unknown & 0xc000000000000001;
      local_80 = (ulong)param_1.unknown & 0xffffffffffffff8;
      local_e8 = param_1.unknown;
      local_d8[3] = IVar25;
      do {
        if (local_78 == 0) {
          if (*(ulong *)(local_80 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10006556c);
            (*pcVar3)();
          }
          uVar7 = *(ulong *)(param_1.unknown + uVar22 * 8 + 0x20);
        }
        else {
          uVar7 = uVar22;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar22,param_1);
        }
        lVar5 = uVar22 + 1;
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100065568);
          (*pcVar3)();
        }
        this = Swift::MainActor::typeMetadataAccessor();
        CVar8.unknown = Swift::MainActor::get_shared(this,this);
        puVar9 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar10 = Swift::Actor::get_unownedExecutor();
        UVar11 = UVar10;
        CVar20.unknown = (undefined *)puVar9;
        _swift_task_isCurrentExecutor();
        uVar4 = (uint)UVar11.unknown;
        if (((ulong)UVar11.unknown & 1) == 0) {
          uVar4 = 0xd8ea30;
          CVar20.unknown = (undefined *)0x23;
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ItemCollectionViewModel.swift",0x23,1,0x49,UVar10.unknown,puVar9);
        }
        FUN_10031eba8();
        if ((uVar4 & 0xff) == 4) {
          _swift_release();
LAB_100065090:
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar8);
                    /* WARNING: Load size is inaccurate */
          CVar8.unknown = local_70[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar8.unknown,CVar20);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar8.unknown,uVar7);
          Swift::ContiguousArray::__endMutation(CVar8);
        }
        else {
          FUN_10031ebc8(plVar28);
          lVar27 = 0;
          FUN_100317b10();
          plVar12 = plVar28;
          (**(code **)(*(long *)(lVar27 + -8) + 0x30))(plVar28,1,lVar27);
          if ((int)plVar12 == 1) {
            FUN_100005808(plVar28,&DAT_100fa8c68,&DAT_100c25ae0);
          }
          else {
            plVar12 = plVar28;
            _swift_getEnumCaseMultiPayload(plVar28,lVar27);
            if ((int)plVar12 == 4) {
              lVar26 = *plVar28;
              lVar27 = plVar28[2];
              lVar23 = plVar28[3];
              if (*(long *)(lVar26 + 0x10) == 0) {
                _swift_bridgeObjectRelease(lVar26);
                FUN_10003bf18(lVar27,lVar23);
                _swift_release(CVar8.unknown);
                IVar25 = local_d8[3];
              }
              else {
                uVar2 = *(undefined8 *)(lVar26 + 0x28);
                local_d8[1] = lVar27;
                local_d8[2] = lVar23;
                _swift_bridgeObjectRetain(uVar2);
                local_d8[0] = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
                puVar6 = local_b8;
                UVar18 = Foundation::URL::_init();
                UVar18.unknown._0_1_ = Foundation::URL::startAccessingSecurityScopedResource(UVar18)
                ;
                UVar18.unknown._1_7_ = extraout_var;
                uStack_e0._4_4_ = (uint)UVar18.unknown;
                Foundation::URL::stopAccessingSecurityScopedResource(UVar18);
                pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(uVar2);
                IVar14 = objc_stub::fileExistsAtPath_(local_d8[0],pNVar13);
                _swift_bridgeObjectRelease(lVar26);
                FUN_10003bf18(local_d8[1],local_d8[2]);
                CVar20.unknown = (undefined *)puStack_88;
                (**(code **)(local_90 + 8))(puVar6);
                _swift_release();
                param_1.unknown = local_e8;
                plVar24 = local_a0;
                IVar25 = local_d8[3];
                if (((IVar14 & 1) != 0) && ((uStack_e0._4_4_ & 1) != 0)) goto LAB_100065090;
              }
              goto LAB_100064fc4;
            }
            FUN_10005241c(plVar28,FUN_100317b10);
          }
          _swift_release(CVar8.unknown);
        }
LAB_100064fc4:
        uVar22 = uVar22 + 1;
        _Var19.unknown = local_70;
      } while (lVar5 != IVar25);
    }
    _swift_bridgeObjectRelease(param_1.unknown);
    lVar5 = local_98;
    if (((long)_Var19.unknown < 0) || (((ulong)_Var19.unknown >> 0x3e & 1) != 0)) {
      lVar27 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var19.unknown);
    }
    else {
      lVar27 = *(long *)(_Var19.unknown + 0x10);
    }
    if (lVar27 == 0) {
      _swift_release(_Var19.unknown);
      FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
      (extension_AppKit)::__C::NSSound::beep();
      return;
    }
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000655cc);
      (*pcVar3)();
    }
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
    uVar22 = (ulong)_Var19.unknown & 0xc000000000000001;
    lVar23 = 4;
    local_b8 = _Var19.unknown;
    local_78 = uVar22;
    do {
      uVar7 = lVar23 - 4;
      if (uVar22 == 0) {
        if (*(ulong *)(_Var19.unknown + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100065574);
          (*pcVar3)();
        }
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(uVar7,_Var19);
      }
      lVar26 = lVar23 + -3;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100065570);
        (*pcVar3)();
      }
      FUN_10031ebc8(lVar5);
      lVar15 = 0;
      FUN_100317b10();
      lVar16 = lVar5;
      (**(code **)(*(long *)(lVar15 + -8) + 0x30))(lVar5,1,lVar15);
      if ((int)lVar16 != 1) {
        FUN_100011090(lVar5,plVar24,&DAT_100fa8c68,&DAT_100c25ae0);
        plVar12 = plVar24;
        _swift_getEnumCaseMultiPayload(plVar24,lVar15);
        plVar28 = local_a8;
        if ((int)plVar12 == 1) {
          FUN_1000523d8(plVar24,local_a8,FUN_1003187b8);
          UVar18.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
          pNVar17 = Foundation::URL::_bridgeToObjectiveC(UVar18);
          NSWorkspace::openURL_((ID)UVar18.unknown,pNVar17);
          pcVar3 = FUN_1003187b8;
          uVar22 = local_78;
        }
        else {
          if ((int)plVar12 == 4) {
            lVar15 = *plVar24;
            uVar22 = plVar24[2];
            lVar16 = plVar24[3];
            if (*(long *)(lVar15 + 0x10) == 0) {
              _swift_bridgeObjectRelease(lVar15);
              _swift_release(_Var19.unknown);
              FUN_10003bf18(uVar22,lVar16);
              FUN_100005808(lVar5,&DAT_100fa8c68,&DAT_100c25ae0);
              return;
            }
            UVar18.unknown = *(undefined **)(lVar15 + 0x28);
            _swift_bridgeObjectRetain(UVar18.unknown);
            IVar25 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
            lVar5 = local_b0;
            local_80 = uVar22;
            Foundation::URL::_init();
            _swift_bridgeObjectRelease();
            pNVar17 = Foundation::URL::_bridgeToObjectiveC(UVar18);
            (**(code **)(local_90 + 8))(lVar5,puStack_88);
            NSWorkspace::openURL_(IVar25,pNVar17);
            _swift_bridgeObjectRelease(lVar15);
            lVar5 = local_98;
            _Var19.unknown = local_b8;
            FUN_10003bf18(local_80,lVar16);
            uVar22 = local_78;
            plVar24 = local_a0;
            goto LAB_1000652d0;
          }
          pcVar3 = FUN_100317b10;
          plVar28 = plVar24;
        }
        FUN_10005241c(plVar28,pcVar3);
      }
LAB_1000652d0:
      FUN_100005808(lVar5,&DAT_100fa8c68,&DAT_100c25ae0);
      lVar23 = lVar23 + 1;
    } while (lVar26 != lVar27);
  }
  else {
    FUN_1000da768(&local_70);
    _Var19.unknown = local_70;
    FUN_100064afc(1,0,0);
  }
  _swift_release(_Var19.unknown);
  return;
}



/* Address: 0x1000655cc | FUN_1000655cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000655cc(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  _ArrayBuffer _Var4;
  code *pcVar5;
  ulong uVar6;
  MainActor *pMVar7;
  ContiguousArray CVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  ContiguousArray CVar12;
  long lVar13;
  ulong uVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar13 != 0) {
    uVar14 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100065748);
          (*pcVar5)();
        }
        uVar6 = *(ulong *)(param_1.unknown + uVar14 * 8 + 0x20);
      }
      else {
        uVar6 = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,param_1);
      }
      lVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100065744);
        (*pcVar5)();
      }
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      CVar8.unknown = Swift::MainActor::get_shared(pMVar7,pMVar7);
      puVar9 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      CVar12.unknown = (undefined *)puVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        UVar11.unknown = (undefined *)0x0;
        CVar12.unknown = (undefined *)0x23;
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionViewModel.swift",0x23,1,0x60,UVar10.unknown,puVar9);
      }
      FUN_10031c2ec();
      _swift_release();
      if (((ulong)UVar11.unknown & 1) != 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar8);
                    /* WARNING: Load size is inaccurate */
        CVar8.unknown = puVar3[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar8.unknown,CVar12)
        ;
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar8.unknown,uVar6);
        Swift::ContiguousArray::__endMutation(CVar8);
      }
      uVar14 = uVar14 + 1;
      _Var4.unknown = puVar3;
    } while (lVar1 != lVar13);
  }
  if (((long)_Var4.unknown < 0) || (((ulong)_Var4.unknown >> 0x3e & 1) != 0)) {
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var4.unknown);
    puVar3 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  }
  else {
    lVar13 = *(long *)(_Var4.unknown + 0x10);
    puVar3 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  }
  PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18 = puVar3;
  if (lVar13 == 0) {
    _swift_release(_Var4.unknown);
    FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
    (extension_AppKit)::__C::NSSound::beep();
    return;
  }
  uVar14 = 0;
  while( true ) {
    if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(_Var4.unknown + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10006588c);
        (*pcVar5)();
      }
      uVar6 = *(ulong *)(_Var4.unknown + uVar14 * 8 + 0x20);
    }
    else {
      uVar6 = uVar14;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar14,_Var4);
    }
    lVar1 = uVar14 + 1;
    if (SCARRY8(uVar14,1)) break;
    pMVar7 = Swift::MainActor::typeMetadataAccessor();
    pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
    puVar9 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,puVar3);
    UVar10 = Swift::Actor::get_unownedExecutor();
    UVar11 = UVar10;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar11.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/ItemCollectionViewModel.swift",0x23,1,0x67,UVar10.unknown,puVar9);
    }
    FUN_1003bb280(uVar6);
    _swift_release(pMVar7);
    uVar14 = uVar14 + 1;
    if (lVar1 == lVar13) {
      _swift_release(_Var4.unknown);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100065888);
  (*pcVar5)();
}



/* Address: 0x1000658e4 | FUN_1000658e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000658e4(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  long *plVar12;
  NSString *pNVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ID IVar17;
  NSArray *pNVar18;
  undefined8 uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  long local_d0;
  undefined *local_c8;
  long local_c0 [5];
  ulong local_98;
  long local_90;
  long local_88;
  _ArrayBuffer local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  
  puVar16 = &DAT_100fa8c68;
  FUN_1000037f0(&DAT_100fa8c68,&DAT_100c25ae0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = -extraout_x8;
  plVar23 = (long *)((long)&local_d0 + lVar4);
  puVar16 = &DAT_100fa6f98;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)plVar23 - extraout_x8_00;
  local_c8 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_88 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  local_90 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar16 = &DAT_100fa8310;
  local_80.unknown = param_1;
  local_68 = param_1;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar5 = &DAT_100fa8318;
  FUN_100016eac(&DAT_100fa8318,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  FUN_10031c4c4(puVar16,puVar5);
  if (((ulong)puVar16 & 1) == 0) {
    if ((ulong)local_80.unknown >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)local_80.unknown & 0xffffffffffffff8) + 0x10);
      puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar5 = local_c8;
    }
    else {
      _Var1.unknown = local_80.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < local_80.unknown) {
        _Var1.unknown = local_80.unknown;
      }
      lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar5 = local_c8;
    }
    PTR___swiftEmptyArrayStorage_100eae0d8 = puVar16;
    local_c8 = puVar5;
    if (lVar6 != 0) {
      uVar24 = 0;
      local_98 = (ulong)local_80.unknown & 0xc000000000000001;
      local_c0[4] = (ulong)local_80.unknown & 0xffffffffffffff8;
      local_c0[2] = lVar22;
      local_c0[3] = lVar6;
      do {
        if (local_98 == 0) {
          if (*(ulong *)(local_c0[4] + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100065df8);
            (*pcVar21)();
          }
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath(uVar24,local_80);
        }
        lVar6 = uVar24 + 1;
        if (SCARRY8(uVar24,1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100065df4);
          (*pcVar21)();
        }
        local_78 = puVar16;
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
                    ("Paste/ItemCollectionViewModel.swift",0x23,1,0x70,UVar9.unknown,puVar8);
        }
        FUN_10031ebc8(plVar23);
        lVar11 = 0;
        FUN_100317b10();
        plVar12 = plVar23;
        (**(code **)(*(long *)(lVar11 + -8) + 0x30))(plVar23,1,lVar11);
        if ((int)plVar12 == 1) {
          FUN_100005808(plVar23,&DAT_100fa8c68,&DAT_100c25ae0);
LAB_100065ccc:
          uVar19 = 1;
        }
        else {
          plVar12 = plVar23;
          _swift_getEnumCaseMultiPayload(plVar23,lVar11);
          if ((int)plVar12 != 4) {
            FUN_10005241c(plVar23,FUN_100317b10);
            goto LAB_100065ccc;
          }
          lVar20 = *plVar23;
          lVar11 = *(long *)((long)local_c0 + lVar4);
          uVar19 = *(undefined8 *)((long)local_c0 + lVar4 + 8);
          if (*(long *)(lVar20 + 0x10) == 0) {
            _swift_bridgeObjectRelease(lVar20);
            FUN_10003bf18(lVar11,uVar19);
            goto LAB_100065ccc;
          }
          lVar22 = *(long *)(lVar20 + 0x20);
          uVar3 = *(undefined8 *)(lVar20 + 0x28);
          local_c0[0] = lVar11;
          local_c0[1] = uVar19;
          _swift_bridgeObjectRetain(uVar3);
          IVar17 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
          local_d0 = lVar22;
          pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar17 = NSFileManager::fileExistsAtPath_(IVar17,pNVar13);
          lVar22 = local_c0[2];
          if ((IVar17 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar20);
            _swift_bridgeObjectRelease(uVar3);
            FUN_10003bf18(local_c0[0],local_c0[1]);
            uVar19 = 1;
            lVar22 = local_c0[2];
            puVar5 = local_c8;
          }
          else {
            Foundation::URL::_init();
            _swift_bridgeObjectRelease(lVar20);
            FUN_10003bf18(local_c0[0],local_c0[1]);
            _swift_bridgeObjectRelease(uVar3);
            uVar19 = 0;
            puVar5 = local_c8;
          }
        }
        lVar11 = local_88;
        (**(code **)(local_88 + 0x38))(lVar22,uVar19,1,puVar5);
        _swift_release(pMVar7);
        lVar20 = lVar22;
        (**(code **)(lVar11 + 0x30))(lVar22,1,puVar5);
        if ((int)lVar20 == 1) {
          FUN_100005808(lVar22,&DAT_100fa6f98,&DAT_100c23be0);
          puVar16 = local_78;
        }
        else {
          pcVar21 = *(code **)(lVar11 + 0x20);
          (*pcVar21)(local_90,lVar22,puVar5);
          puVar16 = local_78;
          puVar14 = local_78;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar15 = puVar16;
          if (((ulong)puVar14 & 1) == 0) {
            puVar15 = (undefined *)0x0;
            FUN_100089390(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
          }
          uVar2 = *(ulong *)(puVar15 + 0x10);
          puVar16 = puVar15;
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
            puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
            FUN_100089390(puVar16,uVar2 + 1,1,puVar15);
          }
          *(ulong *)(puVar16 + 0x10) = uVar2 + 1;
          (*pcVar21)(puVar16 + *(long *)(lVar11 + 0x48) * uVar2 +
                               ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)),local_90,
                     puVar5);
          lVar22 = local_c0[2];
        }
        uVar24 = uVar24 + 1;
      } while (lVar6 != local_c0[3]);
    }
    if (*(long *)(puVar16 + 0x10) == 0) {
      _swift_bridgeObjectRelease(puVar16);
      FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
      (extension_AppKit)::__C::NSSound::beep();
    }
    else {
      if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100065ed8);
        (*pcVar21)();
      }
      objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
      IVar17 = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
      pNVar18 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar16);
      NSWorkspace::activateFileViewerSelectingURLs_(IVar17,pNVar18);
    }
  }
  else {
    FUN_1000da768(&local_70);
    FUN_100064afc(1,0,0);
    _swift_release(local_70);
  }
  return;
}



/* Address: 0x100065ed8 | FUN_100065ed8 */

uint FUN_100065ed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  String SVar9;
  undefined8 local_50;
  undefined8 local_48;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fa8310;
  local_48 = param_1;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar6 = &DAT_100fa9830;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  puVar7 = &local_48;
  FUN_1003b936c(puVar7,param_2,puVar5,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
    (extension_AppKit)::__C::NSSound::beep();
  }
  else {
    puVar8 = &local_48;
    FUN_1003b9490(puVar8,1,puVar5,puVar6);
    FUN_1000da768(&local_50);
    FUN_10020c980();
    uVar1 = *puVar8;
    uVar2 = puVar8[1];
    _swift_bridgeObjectRetain(uVar2);
    FUN_1001c482c(LVar4.unknown);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar4);
    FUN_10020b084(uVar1,uVar2,SVar9.str,SVar9.bridgeObject,0,0,0,0);
    _swift_release(local_50);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100066068);
      (*pcVar3)();
    }
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
  }
  return (uint)puVar7 & 1;
}



/* Address: 0x100066068 | FUN_100066068 */

void FUN_100066068(undefined8 param_1,ulong param_2,uint param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  long extraout_x8;
  MainActor *unaff_x20;
  undefined8 uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_130 [8];
  undefined1 *local_128;
  uint local_11c;
  ulong local_118;
  undefined8 local_110;
  byte local_108;
  undefined7 uStack_107;
  undefined1 auStack_100 [24];
  undefined8 local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa8310;
  local_e8 = param_1;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar4 = &DAT_100fa8318;
  FUN_100016eac(&DAT_100fa8318,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  puVar5 = puVar3;
  FUN_10031c4c4(puVar3,puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    uVar13 = *(undefined8 *)(unaff_x20 + 0xe0);
    puVar10 = *(ulong **)(unaff_x20 + 0xd8);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0xf0);
    uVar14 = *(undefined8 *)(unaff_x20 + 0xe8);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x100);
    uVar11 = *(undefined8 *)(unaff_x20 + 0xf8);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x108);
    local_128 = auStack_130 + -extraout_x8;
    local_11c = param_3;
    local_118 = param_2;
    local_a0 = puVar10;
    uStack_98 = uVar13;
    local_90 = uVar14;
    local_80 = uVar11;
    local_70 = uVar9;
    _swift_retain(puVar10);
    _swift_retain(uVar13);
    _swift_retain(uVar14);
    _swift_retain(uVar11);
    _swift_retain(uVar9);
    puVar4 = &DAT_100faa2f0;
    FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
    FUN_1002ca7e0(&local_e0);
    _swift_release(uVar9);
    _swift_release(uVar11);
    _swift_release(uVar14);
    _swift_release(uVar13);
    _swift_release();
    if (((byte)local_e0 & 1) != 0) {
      FUN_10037aa04();
      local_118 = *puVar10 | local_118;
    }
    _swift_beginAccess(unaff_x20 + 0x110,auStack_100,0,0);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x118);
    uVar12 = *(ulong *)(unaff_x20 + 0x110);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x128);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x120);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x138);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x130);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x140);
    local_e0 = uVar12;
    uStack_d8 = uVar13;
    local_d0 = uVar14;
    local_c0 = uVar11;
    local_b0 = uVar9;
    _swift_retain(uVar12);
    _swift_retain(uVar13);
    _swift_retain(uVar14);
    _swift_retain(uVar11);
    _swift_retain(uVar9);
    FUN_1002ca7e0(&local_108,puVar4);
    _swift_release(uVar9);
    _swift_release(uVar11);
    _swift_release(uVar14);
    _swift_release(uVar13);
    _swift_release();
    if (((local_108 & 1) != 0) || ((local_11c & 1) != 0)) {
      FUN_1000da768(&local_108);
      uVar9 = CONCAT71(uStack_107,local_108);
      FUN_100ae5e74();
      _swift_release(uVar9);
      if ((uVar12 & 1) != 0) {
        puVar4 = &DAT_100fa9830;
        FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                      PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
        puVar8 = &local_e8;
        FUN_1003b936c(puVar8,local_118,puVar3,puVar4);
        if (((ulong)puVar8 & 1) != 0) {
          FUN_1003b9490(&local_e8,0,puVar3,puVar4);
          TVar6 = Swift::TaskPriority::typeMetadataAccessor();
          puVar1 = local_128;
          (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(local_128,1,1,TVar6.unknown);
          this = Swift::MainActor::typeMetadataAccessor();
          puVar3 = PTR_typeMetadataAccessor_100eaec10;
          pMVar7 = unaff_x20;
          _swift_retain();
          pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
          puVar8 = &DAT_100fa6bb0;
          FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
          puVar3 = &DAT_100eb2780;
          _swift_allocObject(&DAT_100eb2780,0x28,7);
          *(MainActor **)(puVar3 + 0x10) = pMVar7;
          *(undefined8 **)(puVar3 + 0x18) = puVar8;
          *(MainActor **)(puVar3 + 0x20) = unaff_x20;
          FUN_1000645b0(0,0,puVar1,&DAT_100c26d68,puVar3);
          _swift_release();
        }
        if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
          objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100066568);
        (*pcVar2)();
      }
      FUN_1000da768(&local_108);
      puVar3 = PTR__NSApp_100ea8fa0;
      if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10006656c);
        (*pcVar2)();
      }
      puVar8 = (undefined8 *)objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
      if (DAT_100fa7760 != -1) {
        puVar8 = &DAT_100fa7760;
        _swift_once(&DAT_100fa7760,FUN_100024fb0);
      }
      FUN_1000da768(&local_110);
      uVar9 = local_110;
      FUN_100ae4f8c();
      _swift_release(uVar9);
      _swift_release(CONCAT71(uStack_107,local_108));
      if (((uint)puVar8 & 0xff) == 2) {
        if (*(ID *)puVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100066570);
          (*pcVar2)();
        }
        objc_stub::deactivate(*(ID *)puVar3);
        FUN_1000da768(&local_108);
        FUN_1000da768(&local_110);
        FUN_100ae5248();
        _swift_release(local_110);
        puVar10 = (ulong *)CONCAT71(uStack_107,local_108);
        goto LAB_10006614c;
      }
      if (((ulong)puVar8 & 1) != 0) {
        _swift_getKeyPath(&DAT_100c26d20);
        _swift_getKeyPath(&DAT_100c26d48);
        local_108 = 0;
        _swift_retain();
        FUN_1002cb5a0(&local_108);
      }
    }
    FUN_100066570(param_1,local_118);
  }
  else {
    FUN_1000da768(&local_a0);
    puVar10 = local_a0;
    FUN_100064afc(1,0,0);
LAB_10006614c:
    _swift_release(puVar10);
  }
  return;
}



/* Address: 0x100066570 | FUN_100066570 */

void FUN_100066570(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  String SVar8;
  String SVar9;
  undefined8 local_60;
  undefined8 local_58;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fa8310;
  local_58 = param_1;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar6 = &DAT_100fa9830;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  puVar7 = &local_58;
  FUN_1003b936c(puVar7,param_2,puVar5,puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
    (extension_AppKit)::__C::NSSound::beep();
  }
  else {
    FUN_1000da768(&local_60);
    FUN_10020c980();
    uVar1 = *puVar7;
    uVar2 = puVar7[1];
    _swift_bridgeObjectRetain(uVar2);
    FUN_1001c482c(LVar4.unknown);
    SVar8 = (extension_Foundation)::Swift::String::init(LVar4);
    FUN_1001c4b50(LVar4.unknown);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar4);
    _swift_retain();
    FUN_10020b084(uVar1,uVar2,SVar8.str,SVar8.bridgeObject,SVar9.str,SVar9.bridgeObject,
                  FUN_100076120);
    _swift_release(local_60);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    _swift_release();
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100066728);
      (*pcVar3)();
    }
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
  }
  return;
}



/* Address: 0x100066728 | FUN_100066728 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100066728(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _TtC5Paste18ItemCollectionView::___lazy_storage___sidecarView;
  pcVar2 = *(code **)(unaff_x20 + _TtC5Paste18ItemCollectionView::___lazy_storage___sidecarView);
  if (pcVar2 == (code *)0x0) {
    puVar3 = &DAT_100eb2730;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    uVar4 = 0;
    FUN_1003f9ac8(0);
    _objc_allocWithZone();
    pcVar2 = FUN_100076670;
    FUN_1003f7640(FUN_100076670,puVar3,uVar4);
    FUN_100066894();
    *(code **)(unaff_x20 + lVar1) = pcVar2;
  }
  return pcVar2;
}



/* Address: 0x1000667e0 | FUN_1000667e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000667e0(double param_1,long param_2)

{
  ID self;
  undefined1 auVar1 [16];
  undefined8 local_68;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  self = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    FUN_100066728();
    objc_stub::setFrame_(self,ZEXT816(0),0x4038000000000000);
    local_60 = param_1 + 24.0;
    local_68 = 0x4020000000000000;
    auVar1 = NEON_fmov(0x4038000000000000,8);
    uStack_50 = auVar1._8_8_;
    local_58 = auVar1._0_8_;
    local_48 = 0x4038000000000000;
    FUN_10022ce5c(&local_68);
    return 0;
  }
  return 0;
}



/* Address: 0x100066894 | FUN_100066894 */

void FUN_100066894(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar5 = &DAT_100eb2730;
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onCloseClick);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_100076678;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtCO11PasteCoreUI7Sidecar14CollectionView::onActionClick);
  _swift_beginAccess(puVar1,auStack_80,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_100076680;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar5);
  return;
}



/* Address: 0x1000669bc | FUN_1000669bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000669bc(long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long extraout_x12;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [32];
  long alStack_b0 [7];
  undefined8 local_78 [3];
  undefined8 local_60;
  undefined **ppuStack_58;
  
  puVar3 = &DAT_100fa9910;
  FUN_1000037f0(&DAT_100fa9910,&DAT_100c26ec0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_d0 + -extraout_x8;
  lVar4 = 0;
  FUN_1003efa8c();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar12 - extraout_x12;
  FUN_100076688(param_1,local_78);
  puVar3 = &DAT_100fa9908;
  FUN_1000037f0(&DAT_100fa9908,&DAT_100c26eb8);
  puVar5 = puVar11;
  _swift_dynamicCast(puVar11,local_78,puVar3,lVar4,6);
  pcVar9 = *(code **)(lVar13 + 0x38);
  if (((ulong)puVar5 & 1) == 0) {
    (*pcVar9)(puVar11,1,1,lVar4);
    FUN_100005808(puVar11,&DAT_100fa9910,&DAT_100c26ec0);
    return;
  }
  (*pcVar9)(puVar11,0,1,lVar4);
  lVar13 = lVar10;
  FUN_1000523d8(puVar11,lVar10,FUN_1003efa8c);
  lVar4 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + _TtC5Paste18ItemCollectionView::viewModel);
    _swift_retain(lVar4);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (*(ulong *)(lVar4 + 0x40) >> 0x3e == 1) {
      FUN_1003fc824();
    }
    else {
      FUN_1003fc990(PTR___swiftEmptyArrayStorage_100eae0d8);
    }
    uVar6 = 0;
    FUN_1001adc9c();
    ppuStack_58 = &PTR_PTR_100ec6cd0;
    local_60 = uVar6;
    FUN_1000da768(local_78);
    FUN_100400328(0);
    _swift_initStackObject();
    FUN_100400184(puVar3,lVar13,local_78);
    _swift_release(lVar4);
    FUN_10040021c(lVar10);
    _swift_release(puVar3);
  }
  _Var7.unknown = *(undefined **)(param_1 + 0x18);
  _Var8.unknown = *(undefined **)(param_1 + 0x20);
  FUN_100004640(param_1,_Var7.unknown);
  (**(code **)(_Var8.unknown + 0x10))();
  FUN_100af4c6c(lVar12);
  puVar3 = *(undefined **)(lVar12 + 0x20);
  puVar1 = *(undefined **)(lVar12 + 0x28);
  _swift_bridgeObjectRetain(puVar1);
  FUN_10005241c(lVar12,FUN_1003efa8c);
  if (_Var7.unknown == puVar3 && _Var8.unknown == puVar1) {
    _swift_bridgeObjectRelease(_Var8.unknown);
    _swift_bridgeObjectRelease(puVar1);
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck(_Var7,_Var8,(_StringComparisonResult)(__int8)puVar3);
    _swift_bridgeObjectRelease(_Var8.unknown);
    _swift_bridgeObjectRelease(puVar1);
    if (!bVar2) goto LAB_100066cac;
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + _TtC5Paste18ItemCollectionView::feedbackManager);
    _swift_retain(uVar6);
    FUN_1000da768(local_78,0);
    _swift_release(uVar6);
    FUN_100af50e4();
    _swift_release(local_78[0]);
  }
LAB_100066cac:
  FUN_10005241c(lVar10,FUN_1003efa8c);
  return;
}



/* Address: 0x100066cd8 | FUN_100066cd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100066cd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  URL UVar8;
  undefined8 uVar9;
  code *pcVar10;
  long extraout_x8;
  undefined8 *puVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long local_130 [2];
  undefined8 *local_120;
  long local_118 [4];
  undefined8 uStack_f8;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined **ppuStack_70;
  
  lVar4 = 0;
  local_118[0] = param_3;
  local_118[1] = param_1;
  local_118[3] = param_2;
  FUN_1003efaa0();
  local_130[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fa9910;
  local_120 = puVar11;
  FUN_1000037f0(&DAT_100fa9910,&DAT_100c26ec0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar18 = (long)puVar11 - extraout_x8_00;
  lVar4 = 0;
  FUN_1003efa8c();
  lVar14 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = uVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa9918;
  local_130[0] = lVar12;
  FUN_1000037f0(&DAT_100fa9918,&DAT_100c26ec8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar17 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar13 - extraout_x12_02;
  FUN_100076688(local_118[1],lVar15);
  FUN_1000766cc(local_118[3],lVar15 + *(int *)(puVar5 + 0x30));
  FUN_100011090(lVar15,lVar13,&DAT_100fa9918,&DAT_100c26ec8);
  iVar1 = *(int *)(puVar5 + 0x30);
  puVar6 = &DAT_100fa9908;
  FUN_1000037f0(&DAT_100fa9908,&DAT_100c26eb8);
  uVar7 = uVar18;
  _swift_dynamicCast(uVar18,lVar13,puVar6,lVar4,6);
  if ((uVar7 & 1) == 0) {
    FUN_100005808(lVar15,&DAT_100fa9918,&DAT_100c26ec8);
    (**(code **)(lVar14 + 0x38))(uVar18,1,1,lVar4);
    FUN_100005808(uVar18,&DAT_100fa9910,&DAT_100c26ec0);
    FUN_10005241c(lVar13 + iVar1,FUN_1003efaa0);
  }
  else {
    (**(code **)(lVar14 + 0x38))(uVar18,0,1,lVar4);
    lVar14 = local_130[0];
    FUN_1000523d8(uVar18,local_130[0],FUN_1003efa8c);
    pcVar10 = FUN_1003efaa0;
    FUN_10005241c(lVar13 + iVar1,FUN_1003efaa0);
    FUN_100011090(lVar15,lVar17,&DAT_100fa9918,&DAT_100c26ec8);
    puVar11 = (undefined8 *)(lVar17 + *(int *)(puVar5 + 0x30));
    uStack_f8 = puVar11[1];
    local_118[3] = *puVar11;
    _swift_bridgeObjectRetain(puVar11[1]);
    FUN_10005241c(puVar11,FUN_1003efaa0);
    FUN_100011090(lVar15,lVar16,&DAT_100fa9918,&DAT_100c26ec8);
    lVar4 = lVar16 + *(int *)(puVar5 + 0x30);
    local_118[2] = *(undefined8 *)(lVar4 + 0x18);
    local_118[1] = *(undefined8 *)(lVar4 + 0x10);
    _swift_bridgeObjectRetain(*(undefined8 *)(lVar4 + 0x18));
    FUN_10005241c(lVar4,FUN_1003efaa0);
    FUN_100011090(lVar15,lVar12,&DAT_100fa9918,&DAT_100c26ec8);
    iVar1 = *(int *)(puVar5 + 0x30);
    iVar2 = *(int *)(local_130[1] + 0x18);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    puVar11 = local_120;
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
              ((long)local_120 + (long)iVar2,lVar12 + iVar1 + (long)iVar2,UVar8.unknown);
    FUN_10005241c(lVar12 + iVar1,FUN_1003efaa0);
    lVar3 = local_118[3];
    lVar13 = local_118[2];
    lVar4 = local_118[1];
    puVar11[1] = uStack_f8;
    *puVar11 = lVar3;
    puVar11[3] = lVar13;
    puVar11[2] = lVar4;
    FUN_100004594(lVar12);
    FUN_100004594(lVar16);
    FUN_100004594(lVar17);
    lVar4 = local_118[0] + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + _TtC5Paste18ItemCollectionView::viewModel);
      _swift_retain(lVar4);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (*(ulong *)(lVar4 + 0x40) >> 0x3e == 1) {
        FUN_1003fc824();
      }
      else {
        FUN_1003fc990(PTR___swiftEmptyArrayStorage_100eae0d8);
      }
      uVar9 = 0;
      FUN_1001adc9c();
      ppuStack_70 = &PTR_PTR_100ec6cd0;
      local_78 = uVar9;
      FUN_1000da768(auStack_90);
      FUN_100400328(0);
      _swift_initStackObject();
      FUN_100400184(puVar5,pcVar10,auStack_90);
      _swift_release(lVar4);
      FUN_100400260(lVar14,puVar11);
      _swift_release(puVar5);
    }
    FUN_10005241c(puVar11,FUN_1003efaa0);
    FUN_10005241c(lVar14,FUN_1003efa8c);
    FUN_100005808(lVar15,&DAT_100fa9918,&DAT_100c26ec8);
  }
  return;
}



/* Address: 0x1000671a8 | FUN_1000671a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong * FUN_1000671a8(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *self;
  ulong *puVar5;
  NSArray *pNVar6;
  __int64 _Var7;
  long unaff_x20;
  undefined1 auVar8 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::onSelectList);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingFocus);
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingHandoffSelection);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingNeighborSelectionID);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC5Paste18ItemCollectionView::activeSelection;
  puVar3 = &DAT_100c26ee0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa9938;
  FUN_1000037f0(&DAT_100fa9938,&DAT_100c26f10);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC5Paste18ItemCollectionView::feedbackManager;
  puVar3 = &DAT_100c26f18;
  _swift_getKeyPath();
  puVar4 = &DAT_100fa9940;
  FUN_1000037f0(&DAT_100fa9940,&DAT_100c26f40);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var7 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar3 = PTR___swiftEmptySetSingleton_100eae0e8, _Var7 != 0)) {
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste18ItemCollectionView::cancellables) = puVar3;
  *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::previewPopover) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::layoutConfiguration);
  auVar8 = NEON_fmov(0x4038000000000000,8);
  uStack_68 = 0x4038000000000000;
  local_70 = 0x4020000000000000;
  uStack_58 = auVar8._8_8_;
  uStack_60 = auVar8._0_8_;
  local_50 = 0x4038000000000000;
  puVar1[1] = 0x4038000000000000;
  *puVar1 = 0x4020000000000000;
  puVar1[3] = uStack_58;
  puVar1[2] = uStack_60;
  puVar1[4] = 0x4038000000000000;
  *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::___lazy_storage___sidecarView) = 0;
  *(undefined8 *)
   (unaff_x20 + _TtC5Paste18ItemCollectionView::___lazy_storage___sizeClassTransitionManager) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::_isLinkPreviewsEnabled);
  _swift_getKeyPath();
  FUN_1002cb7e0(&local_a8);
  puVar1[1] = uStack_a0;
  *puVar1 = local_a8;
  puVar1[3] = uStack_90;
  puVar1[2] = local_98;
  puVar1[5] = uStack_80;
  puVar1[4] = local_88;
  puVar1[6] = local_78;
  *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel) = param_1;
  FUN_10006db74();
  _swift_retain(param_1);
  self = (ulong *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff48,"initWithFrame:",0,0,0,
                                      0);
  puVar3 = &DAT_100fa9948;
  FUN_1000037f0(&DAT_100fa9948,&DAT_100c26f48);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar5 = self;
  FUN_1003ca14c();
  *(ulong *)(puVar3 + 0x20) = *puVar5;
  FUN_100003b30(0);
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar3);
  objc_stub::registerForDraggedTypes_((ID)self,pNVar6);
  puVar3 = PTR__swift_isaMask_100eae3b0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self) + 0xe0))(self,&PTR_PTR_100eb2708);
  (**(code **)((*(ulong *)puVar3 & *self) + 0xf8))(self,&PTR_PTR_100eb26c8);
  FUN_100067c84(0);
  FUN_10006d2ec();
  (**(code **)((*(ulong *)puVar3 & *self) + 0x2a8))(&local_70);
  FUN_100066728();
  (**(code **)((*(ulong *)puVar3 & *self) + 0x288))();
  _swift_release(param_1);
  return self;
}



/* Address: 0x10006753c | FUN_10006753c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006753c(void)

{
  String *pSVar1;
  ulong uVar2;
  void *pvVar3;
  MainActor *pMVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  long lVar12;
  undefined *puVar13;
  long *plVar14;
  undefined *puVar15;
  uint uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  _StringGuts _Var24;
  ulong uVar25;
  char *pcVar26;
  char *pcVar27;
  String SVar28;
  undefined *local_b8;
  undefined8 local_90 [2];
  undefined8 local_80;
  MainActor *pMStack_78;
  long local_68;
  
  lVar22 = _TtC5Paste18ItemCollectionView::viewModel;
  uVar18 = *(ulong *)(*(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel) + 0x40);
  if (uVar18 >> 0x3e == 0) {
    return;
  }
  objc_stub::identifier(uVar18 & 0x3fffffffffffffff);
  SVar28 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_b8 = SVar28.bridgeObject;
  pcVar27 = SVar28.str;
  pSVar1 = (String *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingHandoffSelection);
  _Var24.unknown = pSVar1->bridgeObject;
  if (_Var24.unknown == (undefined *)0x0) {
    FUN_1000da768(local_90,0);
    FUN_1000f301c(pcVar27,local_b8);
    _swift_release(local_90[0]);
    if (pcVar27 != (char *)0x0) {
      pcVar17 = pSVar1->str;
      pvVar3 = pSVar1->bridgeObject;
      pcVar26 = pSVar1[1].str;
      *pSVar1 = SVar28;
      pSVar1[1].str = pcVar27;
      _swift_bridgeObjectRetain(local_b8);
      FUN_1000764c8(pcVar17,pvVar3,pcVar26);
    }
    _Var24.unknown = pSVar1->bridgeObject;
    if (_Var24.unknown != (undefined *)0x0) goto LAB_100067620;
LAB_100067938:
    _swift_bridgeObjectRelease(local_b8);
  }
  else {
LAB_100067620:
    SVar5.bridgeObject = _Var24.unknown;
    SVar5.str = pSVar1->str;
    pcVar27 = pSVar1[1].str;
    if (SVar28 == SVar5) {
      _swift_bridgeObjectRetain(_Var24.unknown);
      _swift_bridgeObjectRetain(pcVar27);
      _swift_bridgeObjectRelease(local_b8);
    }
    else {
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)pSVar1->str,_Var24,(_StringComparisonResult)(__int8)SVar28.str
                        );
      _swift_bridgeObjectRetain(_Var24.unknown);
      _swift_bridgeObjectRetain(pcVar27);
      _swift_bridgeObjectRelease(local_b8);
      if (!bVar7) {
        _swift_bridgeObjectRelease(pcVar27);
        local_b8 = _Var24.unknown;
        goto LAB_100067938;
      }
    }
    lVar23 = _TtC5Paste18ItemCollectionView::applier;
    uVar18 = *(ulong *)(pcVar27 + 0x10);
    if (uVar18 != 0) {
      uVar25 = 0;
      local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        pcVar17 = pcVar27 + uVar25 * 0x10 + 0x28;
        do {
          if (uVar18 == uVar25) {
            _swift_bridgeObjectRelease(pcVar27);
            _swift_bridgeObjectRelease(_Var24.unknown);
            uVar18 = *(ulong *)(local_b8 + 0x10);
            if (uVar18 != 0) {
              uVar19 = *(undefined8 *)(local_b8 + 0x20);
              pcVar27 = pSVar1->str;
              pvVar3 = pSVar1->bridgeObject;
              pcVar17 = pSVar1[1].str;
              pSVar1->str = (char *)0x0;
              pSVar1->bridgeObject = (void *)0x0;
              pSVar1[1].str = (char *)0x0;
              FUN_1000764c8(pcVar27,pvVar3,pcVar17);
              FUN_100228c78(uVar19,0,0);
              if (*(ulong *)(local_b8 + 0x10) < uVar18) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x1000679a8);
                (*pcVar6)();
              }
              lVar22 = uVar18 - 1;
              if (lVar22 != 0) {
                lVar23 = 0x28;
                do {
                  FUN_100228c78(*(undefined8 *)(local_b8 + lVar23),1,0);
                  lVar23 = lVar23 + 8;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
              }
            }
            goto LAB_100067938;
          }
          if (*(ulong *)(pcVar27 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000679a4);
            (*pcVar6)();
          }
          uVar19 = *(undefined8 *)(pcVar17 + -8);
          pMVar4 = *(MainActor **)pcVar17;
          this = Swift::MainActor::typeMetadataAccessor();
          pMVar8 = pMVar4;
          _swift_bridgeObjectRetain();
          pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
          puVar9 = &DAT_100fa6bb0;
          FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                        PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
          UVar10 = Swift::Actor::get_unownedExecutor();
          UVar11 = UVar10;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar11.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("Paste/ItemCollectionView.swift",0x1e,1,100,UVar10.unknown,puVar9);
          }
          lVar21 = *(long *)(unaff_x20 + lVar23);
          if (lVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1000679ac);
            (*pcVar6)();
          }
          pcVar17 = pcVar17 + 0x10;
          uVar25 = uVar25 + 1;
          uVar20 = *(undefined8 *)(unaff_x20 + lVar22);
          _swift_retain(uVar20);
          lVar12 = lVar21;
          _swift_retain();
          FUN_1003b8bfc();
          _swift_release(uVar20);
          puVar13 = &DAT_100faa390;
          local_80 = uVar19;
          pMStack_78 = pMVar4;
          local_68 = lVar12;
          FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
          puVar15 = &DAT_100fa9820;
          FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                        &TargetProtocolConformanceDescriptor_100c32ac0);
          plVar14 = &local_68;
          uVar16 = 0x76864;
          FUN_1001b9830(plVar14,thunk_FUN_1000765b0,local_90,puVar13,puVar15);
          _swift_release(pMVar8);
          _swift_release(lVar12);
          _swift_release(lVar21);
          _swift_bridgeObjectRelease(pMVar4);
        } while ((uVar16 & 0xff) == 1);
        puVar13 = local_b8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar15 = local_b8;
        if (((ulong)puVar13 & 1) == 0) {
          puVar15 = (undefined *)0x0;
          FUN_100088cf8(0,*(long *)(local_b8 + 0x10) + 1,1,local_b8);
        }
        uVar2 = *(ulong *)(puVar15 + 0x10);
        local_b8 = puVar15;
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
          local_b8 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
          FUN_100088cf8(local_b8,uVar2 + 1,1,puVar15);
        }
        *(ulong *)(local_b8 + 0x10) = uVar2 + 1;
        *(long **)(local_b8 + uVar2 * 8 + 0x20) = plVar14;
      } while( true );
    }
    _swift_bridgeObjectRelease(pcVar27);
    _swift_bridgeObjectRelease(_Var24.unknown);
    pcVar27 = pSVar1->str;
    pvVar3 = pSVar1->bridgeObject;
    pcVar17 = pSVar1[1].str;
    pSVar1->bridgeObject = (void *)0x0;
    pSVar1[1].str = (char *)0x0;
    pSVar1->str = (char *)0x0;
    FUN_1000764c8(pcVar27,pvVar3,pcVar17);
    FUN_100228c78(0,0,0);
  }
  return;
}



/* Address: 0x1000679ac | FUN_1000679ac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000679ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  MainActor *pMVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  String SVar18;
  long local_70;
  ID local_68;
  
  thunk_FUN_10022b1cc();
  lVar3 = _TtC5Paste18ItemCollectionView::applier;
  lVar2 = _TtC5Paste18ItemCollectionView::viewModel;
  uVar12 = *(ulong *)(param_1 + 0x10);
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease(param_1);
    pMVar14 = (MainActor *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    this = Swift::MainActor::typeMetadataAccessor();
    uVar17 = 0;
    pMVar5 = this;
    pMVar14 = (MainActor *)PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100067c80);
        (*pcVar4)();
      }
      uVar15 = *(undefined8 *)(param_1 + uVar17 * 8 + 0x20);
      pMVar5 = Swift::MainActor::get_shared(this,pMVar5);
      puVar6 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x71,UVar7.unknown,puVar6);
      }
      lVar16 = *(long *)(unaff_x20 + lVar3);
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100067c84);
        (*pcVar4)();
      }
      uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
      _swift_retain(uVar13);
      lVar9 = lVar16;
      _swift_retain();
      FUN_1003b8bfc();
      _swift_release(uVar13);
      puVar10 = &DAT_100faa390;
      local_70 = lVar9;
      FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
      puVar11 = &DAT_100fa9820;
      FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                    &TargetProtocolConformanceDescriptor_100c32ac0);
      FUN_1001b9698(&local_68,uVar15,&local_70,puVar10,puVar11);
      _swift_release(lVar9);
      _swift_release(lVar16);
      if (local_68 == 0) {
        _swift_release();
      }
      else {
        objc_stub::identifier(local_68);
        SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _swift_release(pMVar5);
        pMVar5 = pMVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pMVar5 & 1) == 0) {
          pMVar5 = (MainActor *)0x0;
          FUN_100089044(0,*(long *)(pMVar14 + 0x10) + 1,1,pMVar14);
          pMVar14 = pMVar5;
        }
        uVar1 = *(ulong *)(pMVar14 + 0x10);
        if (*(ulong *)(pMVar14 + 0x18) >> 1 <= uVar1) {
          pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(pMVar14 + 0x18));
          FUN_100089044(pMVar5,uVar1 + 1,1,pMVar14);
          pMVar14 = pMVar5;
        }
        *(ulong *)(pMVar14 + 0x10) = uVar1 + 1;
        *(String *)(pMVar14 + uVar1 * 0x10 + 0x20) = SVar18;
      }
      uVar17 = uVar17 + 1;
    } while (uVar12 != uVar17);
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_1000da768(&local_68);
  FUN_1000f2b18(pMVar14);
  _swift_release(local_68);
  return;
}



/* Address: 0x100067c84 | FUN_100067c84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100067c84(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  AnyCancellable *pAVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  undefined1 uVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  String SVar18;
  long local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [24];
  long local_d0 [2];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar3 = &DAT_100fa9890;
  FUN_1000037f0(&DAT_100fa9890,&DAT_100c26e70);
  local_f8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa9898;
  local_100 = (long)&local_120 - extraout_x8;
  FUN_1000037f0(&DAT_100fa9898,&DAT_100c26e78);
  local_118 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = ((long)&local_120 - extraout_x8) - extraout_x8_00;
  local_120 = lVar13;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  lVar11 = _TtC5Paste18ItemCollectionView::viewModel;
  LVar5.unknown = (undefined *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar13 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  uVar17 = *(ulong *)(lVar13 + 0x40);
  if ((long)uVar17 < -0x4000000000000000) {
    _swift_retain(lVar13);
    uVar6 = uVar17;
    FUN_10000444c();
    FUN_100328f38();
    _swift_release(lVar13);
    FUN_100021e40(uVar17);
    if ((uVar6 & 1) != 0) {
      uVar14 = 1;
      goto LAB_100067dcc;
    }
  }
  uVar14 = 0;
LAB_100067dcc:
  lVar13 = _TtC7PasteUI14CollectionView::isReorderingEnabled;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::isReorderingEnabled,auStack_80,1,0);
  *(undefined1 *)(unaff_x20 + lVar13) = uVar14;
  uVar17 = *(ulong *)(*(long *)(unaff_x20 + lVar11) + 0x40);
  uVar12 = (uint)(uVar17 >> 0x3e);
  local_110 = puVar4;
  local_f0 = puVar3;
  if (uVar12 == 0) {
    _swift_retain(uVar17);
    FUN_1001bfd08(LVar5.unknown);
  }
  else if (uVar12 == 1) {
    FUN_1001bfa08(LVar5.unknown,uVar17 & 0x3fffffffffffffff);
  }
  else {
    FUN_1001bfb88(LVar5.unknown,uVar17 & 0x3fffffffffffffff);
  }
  SVar18 = (extension_Foundation)::Swift::String::init(LVar5);
  FUN_100021e40(uVar17);
  FUN_100038ea0(0);
  _objc_allocWithZone();
  FUN_100038a88(SVar18.str,SVar18.bridgeObject);
  FUN_10022ac3c();
  lVar1 = _TtC5Paste18ItemCollectionView::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC5Paste18ItemCollectionView::cancellables,auStack_98,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptySetSingleton_100eae0e8;
  _swift_bridgeObjectRelease(uVar7);
  FUN_1000037f0(&DAT_100fa98a0,&DAT_100c26e80);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar11);
  uVar7 = uVar15;
  _swift_retain(uVar15);
  FUN_1003b8bfc();
  _swift_release(uVar15);
  FUN_1001aeb1c();
  _swift_release(uVar7);
  lVar16 = unaff_x20;
  FUN_10022338c();
  lVar13 = _TtC5Paste18ItemCollectionView::applier;
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier) = lVar16;
  _swift_retain();
  _swift_release(uVar7);
  puVar3 = &DAT_100eb2730;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  _swift_beginAccess(lVar16 + 0x18,auStack_b0,1,0);
  uVar7 = *(undefined8 *)(lVar16 + 0x18);
  uVar15 = *(undefined8 *)(lVar16 + 0x20);
  *(code **)(lVar16 + 0x18) = FUN_1000765b8;
  *(undefined **)(lVar16 + 0x20) = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar7,uVar15);
  _swift_release(puVar3);
  _swift_release(lVar16);
  lVar16 = *(long *)(unaff_x20 + lVar11);
  if (*(ulong *)(lVar16 + 0x40) >> 0x3e == 0) {
    lVar13 = *(long *)(unaff_x20 + lVar13);
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000684f8);
      (*pcVar2)();
    }
    _swift_beginAccess(lVar13 + 0x28,auStack_e8,1,0);
    *(undefined1 *)(lVar13 + 0x28) = 0;
  }
  puVar3 = &DAT_100eb2b68;
  _swift_allocObject(&DAT_100eb2b68,0x11,7);
  puVar3[0x10] = 1;
  lVar13 = lVar16;
  _swift_retain();
  FUN_100052960();
  _swift_release(lVar16);
  if (lVar13 != 0) {
    puVar4 = &DAT_100eb2730;
    local_d0[0] = lVar13;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    puVar8 = &DAT_100eb2bb8;
    _swift_allocObject(&DAT_100eb2bb8,0x20,7);
    *(undefined **)(puVar8 + 0x10) = puVar4;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    puVar4 = &DAT_100eb2be0;
    _swift_allocObject(&DAT_100eb2be0,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_100076640;
    *(undefined **)(puVar4 + 0x18) = puVar8;
    _swift_retain(puVar3);
    FUN_1000037f0(&DAT_100fa98e8,&DAT_100c26ea0);
    FUN_100016eac(&DAT_100fa98f0,&DAT_100fa98e8,&DAT_100c26ea0,
                  PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                 );
    pAVar9 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(lVar13);
    _swift_release(puVar4);
    _swift_beginAccess(unaff_x20 + lVar1,local_d0,0x21,0);
    Combine::AnyCancellable::store(pAVar9,(undefined *)(unaff_x20 + lVar1));
    _swift_endAccess(local_d0);
    _swift_release(pAVar9);
  }
  lVar16 = *(long *)(unaff_x20 + lVar11);
  lVar13 = lVar16;
  local_108 = puVar3;
  _swift_retain();
  FUN_1003b8ffc();
  _swift_release(lVar16);
  if (lVar13 != 0) {
    local_d0[0] = lVar13;
    FUN_1000037f0(&DAT_100fa98d0,&DAT_100c26e98);
    FUN_100016eac(&DAT_100fa98d8,&DAT_100fa98d0,&DAT_100c26e98,
                  PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                 );
    lVar16 = local_120;
    (extension_Combine)::Combine::Publisher::dropFirst(1);
    _swift_release(lVar13);
    puVar3 = &DAT_100eb2730;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    FUN_100016eac(&DAT_100fa98e0,&DAT_100fa9898,&DAT_100c26e78,
                  PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
    puVar4 = local_110;
    pAVar9 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar3);
    (**(code **)(local_118 + 8))(lVar16,puVar4);
    _swift_beginAccess(unaff_x20 + lVar1,local_d0,0x21,0);
    Combine::AnyCancellable::store(pAVar9,(undefined *)(unaff_x20 + lVar1));
    _swift_endAccess(local_d0);
    _swift_release(pAVar9);
  }
  lVar13 = *(long *)(unaff_x20 + lVar11);
  lVar16 = lVar13;
  _swift_retain();
  FUN_1003b8de4();
  _swift_release(lVar13);
  local_d0[0] = lVar16;
  FUN_1000037f0(&DAT_100fa98a8,&DAT_100c26e88);
  puVar8 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  FUN_100016eac(&DAT_100fa98b0,&DAT_100fa98a8,&DAT_100c26e88,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  lVar13 = local_100;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(lVar16);
  puVar3 = &DAT_100eb2730;
  puVar10 = puVar3;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10);
  FUN_100016eac(&DAT_100fa98b8,&DAT_100fa9890,&DAT_100c26e70,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  puVar4 = local_f0;
  pAVar9 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar10);
  (**(code **)(local_f8 + 8))(lVar13,puVar4);
  _swift_beginAccess(unaff_x20 + lVar1,local_d0,0x21,0);
  Combine::AnyCancellable::store(pAVar9,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_d0);
  _swift_release(pAVar9);
  lVar13 = *(long *)(unaff_x20 + lVar11);
  lVar11 = lVar13;
  _swift_retain();
  FUN_100053374();
  _swift_release(lVar13);
  local_d0[0] = lVar11;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &DAT_100eb2b90;
  _swift_allocObject(&DAT_100eb2b90,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1000765d8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  FUN_1000037f0(&DAT_100fa98c0,&DAT_100c26e90);
  FUN_100016eac(&DAT_100fa98c8,&DAT_100fa98c0,&DAT_100c26e90,puVar8);
  pAVar9 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(lVar11);
  _swift_release(puVar4);
  _swift_beginAccess(unaff_x20 + lVar1,local_d0,0x21,0);
  Combine::AnyCancellable::store(pAVar9,(undefined *)(unaff_x20 + lVar1));
  _swift_endAccess(local_d0);
  _swift_release(pAVar9);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  FUN_1000f7598(FUN_100076604,local_d0);
  FUN_100068b0c();
  FUN_10006753c();
  _swift_release(local_108);
  return;
}



/* Address: 0x1000684f8 | FUN_1000684f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000684f8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lStack_68;
  long local_58;
  
  lVar8 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 != 0) {
    FUN_10006d620();
  }
  lVar8 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar8 != 0) {
    FUN_10006753c();
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _TtC5Paste18ItemCollectionView::pendingNeighborSelectionID);
    lVar8 = puVar1[1];
    if (lVar8 == 0) {
      return 0;
    }
    uVar11 = *puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar10 = *(long *)(param_1 + _TtC5Paste18ItemCollectionView::applier);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10006869c);
      (*pcVar2)();
    }
    uVar9 = *(undefined8 *)(param_1 + _TtC5Paste18ItemCollectionView::viewModel);
    _swift_retain(uVar9);
    lVar3 = lVar10;
    _swift_retain();
    FUN_1003b8bfc();
    _swift_release(uVar9);
    puVar4 = &DAT_100faa390;
    local_70 = uVar11;
    lStack_68 = lVar8;
    local_58 = lVar3;
    FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
    puVar5 = &DAT_100fa9820;
    FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    uVar7 = 0x76864;
    plVar6 = &local_58;
    FUN_1001b9830(plVar6,thunk_FUN_1000765b0,auStack_80,puVar4,puVar5);
    _swift_release(lVar3);
    _swift_release(lVar10);
    _swift_bridgeObjectRelease(lVar8);
    if ((uVar7 & 0xff) != 1) {
      FUN_100228c78(plVar6,0,0);
    }
  }
  return 0;
}



/* Address: 0x10006869c | FUN_10006869c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006869c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x8c,UVar4.unknown,puVar3);
  }
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    FUN_100066728();
    _swift_beginAccess(param_4 + 0x10,auStack_80,0,0);
    FUN_1003f7818(param_1,param_2,(*(byte *)(param_4 + 0x10) ^ 0xff) & 1);
  }
  _swift_beginAccess(param_4 + 0x10,auStack_68,1,0);
  *(undefined1 *)(param_4 + 0x10) = 0;
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000687d4 | FUN_1000687d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_1000687d4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong *puVar6;
  
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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x94,UVar4.unknown,puVar3);
  }
  puVar6 = (ulong *)(param_2 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar6 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x278))();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x1000688c8 | FUN_1000688c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_1000688c8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong *puVar6;
  
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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x9b,UVar4.unknown,puVar3);
  }
  puVar6 = (ulong *)(param_2 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar6 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x270))();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x1000689bc | FUN_1000689bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_1000689bc(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.swift",0x1e,1,0x9f,UVar5.unknown,puVar4);
  }
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar7 = *(long *)(param_1 + _TtC5Paste18ItemCollectionView::applier);
    if (lVar7 != 0) {
      _swift_retain(lVar7);
      thunk_FUN_1001b95bc();
      _swift_release(lVar7);
      FUN_100228c78(0,0,1);
      _swift_release(pMVar3);
      return (MainActor *)0x0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100068ad0);
    (*pcVar2)();
  }
  _swift_release(pMVar3);
  return pMVar3;
}



/* Address: 0x100068ad0 | FUN_100068ad0 */

void FUN_100068ad0(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    thunk_FUN_1001b95bc();
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100068b0c);
  (*pcVar1)();
}



/* Address: 0x100068b0c | FUN_100068b0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100068b0c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  uint uVar13;
  _StringGuts _Var14;
  ulong uVar15;
  long lVar16;
  long unaff_x20;
  undefined8 uVar17;
  ID self;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  long lStack_88;
  long local_78;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingFocus);
  lVar16 = puVar1[1];
  if (lVar16 != 0) {
    uVar19 = *puVar1;
    uVar20 = puVar1[3];
    cVar5 = *(char *)(puVar1 + 4);
    self = puVar1[2];
    _swift_bridgeObjectRetain(lVar16);
    objc_stub::identifier(self);
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    lVar9 = _TtC5Paste18ItemCollectionView::viewModel;
    _Var14.unknown = SVar21.bridgeObject;
    uVar15 = *(ulong *)(*(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel) + 0x40);
    if (uVar15 >> 0x3e == 0) {
      _swift_bridgeObjectRelease(_Var14.unknown);
LAB_100068bac:
      _swift_bridgeObjectRelease(lVar16);
      return;
    }
    objc_stub::identifier(uVar15 & 0x3fffffffffffffff);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar21 == SVar22) {
      _swift_bridgeObjectRelease(_Var14.unknown);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
    }
    else {
      bVar8 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar21.str,_Var14,(_StringComparisonResult)(__int8)SVar22.str)
      ;
      _swift_bridgeObjectRelease(_Var14.unknown);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      if (!bVar8) goto LAB_100068bac;
    }
    uVar17 = *puVar1;
    uVar3 = puVar1[1];
    uVar2 = puVar1[2];
    uVar4 = puVar1[3];
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    uVar6 = *(undefined1 *)(puVar1 + 4);
    *(undefined1 *)(puVar1 + 4) = 0;
    FUN_100076498(uVar17,uVar3,uVar2,uVar4,uVar6);
    lVar18 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
    if (lVar18 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100068db8);
      (*pcVar7)();
    }
    uVar17 = *(undefined8 *)(unaff_x20 + lVar9);
    _swift_retain(uVar17);
    lVar9 = lVar18;
    _swift_retain();
    FUN_1003b8bfc();
    _swift_release(uVar17);
    puVar10 = &DAT_100faa390;
    local_90 = uVar19;
    lStack_88 = lVar16;
    local_78 = lVar9;
    FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
    puVar11 = &DAT_100fa9820;
    FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    uVar13 = 0x765b0;
    plVar12 = &local_78;
    FUN_1001b9830(plVar12,FUN_1000765b0,auStack_a0,puVar10,puVar11);
    _swift_release(lVar9);
    _swift_release(lVar18);
    if ((uVar13 & 0xff) != 1) {
      FUN_100228c78(plVar12,0,0);
      if (cVar5 == '\x01') {
        FUN_10022c9c4(plVar12,0,0,0);
      }
      else {
        FUN_10022cce0(uVar20,plVar12);
      }
    }
    _swift_bridgeObjectRelease(lVar16);
  }
  return;
}



/* Address: 0x100068db8 | FUN_100068db8 */

void FUN_100068db8(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  MainActor *this;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  MainActor *pMVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  MainActor *pMVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined *local_98;
  MainActor *local_78;
  long local_70;
  undefined *local_68;
  
  thunk_FUN_10022b1cc();
  lVar2 = _TtC5Paste18ItemCollectionView::applier;
  lVar13 = _TtC5Paste18ItemCollectionView::viewModel;
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == 0) {
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    this = Swift::MainActor::typeMetadataAccessor();
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pMVar19 = this;
    puVar20 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar21 = *puVar20;
      pMVar5 = Swift::MainActor::get_shared(this,pMVar19);
      puVar6 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar7.unknown,puVar6);
      }
      pMVar19 = *(MainActor **)(unaff_x20 + lVar2);
      if (pMVar19 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100069158);
        (*pcVar4)();
      }
      uVar17 = *(undefined8 *)(unaff_x20 + lVar13);
      _swift_retain(uVar17);
      pMVar9 = pMVar19;
      _swift_retain();
      FUN_1003b8bfc();
      _swift_release(uVar17);
      puVar10 = &DAT_100faa390;
      local_78 = pMVar9;
      FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
      puVar11 = &DAT_100fa9820;
      FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                    &TargetProtocolConformanceDescriptor_100c32ac0);
      FUN_1001b9698(&local_70,uVar21,&local_78,puVar10,puVar11);
      _swift_release(pMVar5);
      _swift_release(pMVar9);
      _swift_release();
      lVar3 = local_70;
      if (local_70 != 0) {
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        pMVar19 = *(MainActor **)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
        uVar1 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
        if ((MainActor *)(uVar1 >> 1) <= pMVar19) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar1,pMVar19 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar19,lVar3);
        local_98 = local_68;
      }
      lVar18 = lVar18 + -1;
      puVar20 = puVar20 + 1;
    } while (lVar18 != 0);
  }
  lVar18 = _TtC5Paste18ItemCollectionView::viewModel;
  uVar21 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  local_68 = local_98;
  _swift_retain(uVar21);
  puVar11 = &DAT_100fa8310;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar10 = &DAT_100fa9830;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  ppuVar12 = &local_68;
  puVar16 = puVar11;
  FUN_1003ba464(ppuVar12,puVar11,puVar10);
  _swift_release(uVar21);
  if (((ulong)ppuVar12 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_98);
    FUN_10000ec2c(0,&DAT_100faa2e0,&PTR__OBJC_CLASS___NSSound_100f8d7b0);
    (extension_AppKit)::__C::NSSound::beep();
  }
  else {
    lVar13 = param_1;
    FUN_1000691c8();
    _swift_bridgeObjectRelease(param_1);
    uVar21 = *(undefined8 *)(unaff_x20 + lVar18);
    local_68 = local_98;
    puVar14 = &DAT_100eb2730;
    _swift_allocObject(&DAT_100eb2730,0x18,7);
    _swift_unknownObjectWeakInit(puVar14 + 0x10,unaff_x20);
    puVar15 = &DAT_100eb2b40;
    _swift_allocObject(&DAT_100eb2b40,0x28,7);
    *(undefined **)(puVar15 + 0x10) = puVar14;
    *(long *)(puVar15 + 0x18) = lVar13;
    *(undefined **)(puVar15 + 0x20) = puVar16;
    _swift_retain(uVar21);
    _swift_retain(puVar14);
    FUN_1003ba5c4(&local_68,FUN_100022ad0,0,FUN_1000765a4,puVar15,puVar11,puVar10);
    _swift_bridgeObjectRelease(local_98);
    _swift_release(puVar14);
    _swift_release(uVar21);
    _swift_release(puVar15);
  }
  return;
}



/* Address: 0x100069158 | FUN_100069158 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100069158(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _TtC5Paste18ItemCollectionView::pendingNeighborSelectionID);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(uVar2);
    return;
  }
  return;
}



/* Address: 0x1000691c8 | FUN_1000691c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000691c8(long param_1,uint param_2)

{
  _CocoaArrayWrapper _Var1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  Hasher HVar13;
  bool bVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  String SVar21;
  long local_b8;
  ID local_b0;
  undefined1 auStack_a8 [56];
  ulong local_70 [2];
  
  lVar20 = param_1;
  _swift_bridgeObjectRetain();
  FUN_100074b3c();
  _swift_bridgeObjectRelease(param_1);
  lVar16 = lVar20;
  FUN_100069558();
  if (((param_2 & 0xff) != 1) &&
     (lVar5 = lVar20, FUN_100069668(), lVar3 = _TtC5Paste18ItemCollectionView::applier,
     (param_2 & 0xff) != 1)) {
    local_70[0] = lVar5 + 1;
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10006954c);
      (*pcVar4)();
    }
    local_70[1] = lVar16 + -1;
    if (SBORROW8(lVar16,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100069550);
      (*pcVar4)();
    }
    this = Swift::MainActor::typeMetadataAccessor();
    lVar16 = 0;
    pMVar6 = this;
    bVar14 = false;
    do {
      uVar19 = local_70[lVar16];
      pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
      puVar7 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      puVar12 = puVar7;
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0xde,UVar8.unknown,puVar12);
      }
      lVar16 = *(long *)(unaff_x20 + lVar3);
      if (lVar16 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100069554);
        (*pcVar4)();
      }
      HVar13.unknown = (undefined *)0x0;
      _swift_beginAccess(lVar16 + 0x10,auStack_a8,0,0);
      puVar15 = *(undefined **)(lVar16 + 0x10);
      if ((ulong)puVar15 >> 0x3e == 0) {
        uVar10 = *(ulong *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar15) {
          _Var1.unknown = puVar15;
        }
        uVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000693ec);
          (*pcVar4)();
        }
      }
      if ((-1 < (long)uVar19) && (uVar19 < uVar10)) {
        if (*(long *)(lVar20 + 0x10) != 0) {
          uVar10 = Swift::Hasher::_hash(*(__int64 *)(lVar20 + 0x28),uVar19,HVar13);
          uVar17 = -1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
          uVar10 = uVar10 & (uVar17 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar20 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
            while (*(ulong *)(*(long *)(lVar20 + 0x30) + uVar10 * 8) != uVar19) {
              uVar10 = uVar10 + 1 & ~uVar17;
              if ((*(ulong *)(lVar20 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) == 0)
              goto LAB_1000693ec;
            }
            goto LAB_1000692a8;
          }
        }
LAB_1000693ec:
        _swift_bridgeObjectRelease(lVar20);
        _swift_release();
        pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
        UVar8 = Swift::Actor::get_unownedExecutor();
        UVar9 = UVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar9.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ItemCollectionView.swift",0x1e,1,0xe2,UVar8.unknown,puVar7);
        }
        lVar20 = *(long *)(unaff_x20 + lVar3);
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100069558);
          (*pcVar4)();
        }
        uVar18 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
        _swift_retain(uVar18);
        lVar16 = lVar20;
        _swift_retain();
        FUN_1003b8bfc();
        _swift_release(uVar18);
        puVar15 = &DAT_100faa390;
        local_b8 = lVar16;
        FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
        puVar11 = &DAT_100fa9820;
        FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                      &TargetProtocolConformanceDescriptor_100c32ac0);
        FUN_1001b9698(&local_b0,uVar19,&local_b8,puVar15,puVar11);
        _swift_release(lVar16);
        _swift_release(lVar20);
        if (local_b0 != 0) {
          objc_stub::identifier(local_b0);
          SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          _swift_release(pMVar6);
          return SVar21;
        }
        _swift_release(pMVar6);
        goto LAB_100069238;
      }
LAB_1000692a8:
      _swift_release();
      lVar16 = 1;
      bVar2 = !bVar14;
      bVar14 = true;
    } while (bVar2);
  }
  _swift_bridgeObjectRelease(lVar20);
LAB_100069238:
  return (String)ZEXT816(0);
}



/* Address: 0x100069558 | FUN_100069558 */

undefined1  [16] FUN_100069558(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_1 + 0x38);
  if (uVar8 == 0) {
    lVar9 = 0;
    uVar6 = uVar6 + 0x3f >> 6;
    lVar10 = 0;
    do {
      if (uVar6 - 1 == lVar10) {
        return ZEXT816(1) << 0x40;
      }
      lVar7 = lVar10 + 1;
      uVar8 = *(ulong *)(param_1 + 0x40 + lVar10 * 8);
      lVar9 = lVar9 + -0x40;
      lVar10 = lVar7;
    } while (uVar8 == 0);
    uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 - 1 & uVar8;
    lVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) - lVar9;
  }
  else {
    lVar7 = 0;
    uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    uVar8 = uVar8 - 1 & uVar8;
    uVar6 = uVar6 + 0x3f >> 6;
  }
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar9 * 8);
  uVar1 = uVar4;
  while( true ) {
    while (uVar5 = uVar1, uVar11 = uVar4, uVar8 != 0) {
      uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                        lVar7 * 0x200);
      uVar1 = uVar4;
      if ((long)uVar11 <= (long)uVar4) {
        uVar4 = uVar11;
        uVar1 = uVar5;
      }
    }
    bVar3 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar3) break;
    if ((long)uVar6 <= lVar7) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar5;
      return auVar12;
    }
    uVar8 = ((ulong *)(param_1 + 0x38))[lVar7];
    uVar4 = uVar11;
    uVar1 = uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100069668);
  (*pcVar2)();
}



/* Address: 0x100069668 | FUN_100069668 */

undefined1  [16] FUN_100069668(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar6 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_1 + 0x38);
  if (uVar8 == 0) {
    lVar9 = 0;
    uVar6 = uVar6 + 0x3f >> 6;
    lVar10 = 0;
    do {
      if (uVar6 - 1 == lVar10) {
        return ZEXT816(1) << 0x40;
      }
      lVar7 = lVar10 + 1;
      uVar8 = *(ulong *)(param_1 + 0x40 + lVar10 * 8);
      lVar9 = lVar9 + -0x40;
      lVar10 = lVar7;
    } while (uVar8 == 0);
    uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar8 = uVar8 - 1 & uVar8;
    lVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) - lVar9;
  }
  else {
    lVar7 = 0;
    uVar4 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    lVar9 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    uVar8 = uVar8 - 1 & uVar8;
    uVar6 = uVar6 + 0x3f >> 6;
  }
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar9 * 8);
  uVar5 = uVar4;
  while( true ) {
    while (uVar8 != 0) {
      uVar1 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      uVar11 = *(ulong *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                         lVar7 * 0x200);
      uVar1 = uVar11;
      if ((long)uVar11 <= (long)uVar4) {
        uVar1 = uVar5;
      }
      uVar5 = uVar1;
      if ((long)uVar4 <= (long)uVar11) {
        uVar4 = uVar11;
      }
    }
    bVar3 = SCARRY8(lVar7,1);
    lVar7 = lVar7 + 1;
    if (bVar3) break;
    if ((long)uVar6 <= lVar7) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar5;
      return auVar12;
    }
    uVar8 = ((ulong *)(param_1 + 0x38))[lVar7];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100069778);
  (*pcVar2)();
}



/* Address: 0x100069778 | FUN_100069778 */

void FUN_100069778(ID param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  SpecialKey SVar4;
  SpecialKey SVar5;
  undefined *puVar6;
  undefined *puVar7;
  class_t *pcVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  MainActor *pMVar14;
  ID IVar15;
  long extraout_x8;
  long extraout_x8_00;
  class_rw_t *pcVar16;
  undefined *puVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined8 uVar18;
  class_t *pcVar19;
  ulong uVar20;
  long unaff_x20;
  code *pcVar21;
  long lVar22;
  undefined *puVar23;
  Cache CVar24;
  long lVar25;
  long lVar26;
  class_rw_t **ppcVar27;
  code *pcVar28;
  undefined *puVar29;
  class_t local_100;
  undefined *local_d8;
  ID local_d0;
  MainActor *local_c0;
  ulong local_b8;
  objc_super local_b0;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  ulong *local_70;
  
  puVar17 = &DAT_100fa8080;
  FUN_1000037f0(&DAT_100fa8080,&DAT_100c250f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar17 + -8) + 0x40));
  puVar7 = (undefined *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar4 = SpecialKey::_typeMetadataAccessor();
  lVar22 = *(long *)(SVar4.unknown + -8);
  SVar5 = SVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  pcVar16 = (class_rw_t *)
            (((long)puVar7 - extraout_x12) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_100.data = pcVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined *)((long)pcVar16 - extraout_x12_00);
  local_d8 = puVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = puVar17 + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar29 = puVar17 + -extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = (long)puVar29 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar23 = (undefined *)(lVar26 - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = (long)puVar23 - extraout_x12_05;
  local_d0 = param_1;
  FUN_100219ddc();
  uVar1 = (uint)SVar5.unknown & 0xff;
  if (uVar1 == 3) {
    SVar5.unknown = (NSEvent *)0x0;
    if (*(ID *)(unaff_x20 + _TtC5Paste18ItemCollectionView::previewPopover) != 0) {
      objc_stub::close(*(ID *)(unaff_x20 + _TtC5Paste18ItemCollectionView::previewPopover));
      return;
    }
  }
  else if (uVar1 == 2) {
    thunk_FUN_10022b1cc();
    if (*(long *)(SVar5.unknown + 0x10) != 0) {
      uVar18 = *(undefined8 *)(SVar5.unknown + *(long *)(SVar5.unknown + 0x10) * 8 + 0x18);
      _swift_bridgeObjectRelease();
      FUN_10006bb3c(uVar18);
      return;
    }
    _swift_bridgeObjectRelease();
  }
  (extension_AppKit)::__C::NSEvent::_get_specialKey((NSEvent *)SVar5.unknown);
  FUN_100076788((long)puVar7 - extraout_x12,puVar7);
  pcVar21 = *(code **)(lVar22 + 0x30);
  SVar5.unknown = puVar7;
  (*pcVar21)(puVar7,1,SVar4.unknown);
  if ((int)SVar5.unknown == 1) {
    SpecialKey::_get_system(SVar5);
    puVar6 = puVar7;
    (*pcVar21)(puVar7,1,SVar4.unknown);
    if ((int)puVar6 != 1) {
      FUN_100005808(puVar7,&DAT_100fa8080,&DAT_100c250f0);
    }
  }
  else {
    (**(code **)(lVar22 + 0x20))(lVar25,puVar7,SVar4.unknown);
  }
  pcVar28 = *(code **)(lVar22 + 0x10);
  SVar5.unknown = puVar23;
  (*pcVar28)(puVar23,lVar25,SVar4.unknown);
  SpecialKey::_get_backspace(SVar5);
  puVar7 = &DAT_100fa8090;
  FUN_100003a00(&DAT_100fa8090,PTR__typeMetadataAccessor_100ea8f78,
                PTR__AppKit__SpecialKey_>Swift__Equatable_100ea8f88);
  bVar3 = Swift::Equatable::___infix(lVar26,puVar23,SVar4.unknown,puVar7);
  pcVar21 = *(code **)(lVar22 + 8);
  (*pcVar21)(lVar26,SVar4.unknown);
  (*pcVar21)(puVar23,SVar4.unknown);
  if (!bVar3) {
    SVar5.unknown = puVar29;
    (*pcVar28)(puVar29,lVar25,SVar4.unknown);
    SpecialKey::_get_delete(SVar5);
    bVar3 = Swift::Equatable::___infix(lVar26,puVar29,SVar4.unknown,puVar7);
    (*pcVar21)(lVar26,SVar4.unknown);
    (*pcVar21)(puVar29,SVar4.unknown);
    if (!bVar3) {
      SVar5.unknown = puVar17;
      (*pcVar28)(puVar17,lVar25,SVar4.unknown);
      SpecialKey::_get_deleteForward(SVar5);
      bVar3 = Swift::Equatable::___infix(lVar26,puVar17,SVar4.unknown,puVar7);
      (*pcVar21)(lVar26,SVar4.unknown);
      (*pcVar21)(puVar17,SVar4.unknown);
      puVar17 = local_d8;
      if (!bVar3) {
        SVar5.unknown = local_d8;
        (*pcVar28)(local_d8,lVar25,SVar4.unknown);
        SpecialKey::_get_carriageReturn(SVar5);
        bVar3 = Swift::Equatable::___infix(lVar26,puVar17,SVar4.unknown,puVar7);
        (*pcVar21)(lVar26,SVar4.unknown);
        (*pcVar21)(puVar17,SVar4.unknown);
        pcVar16 = local_100.data;
        if (!bVar3) {
          SVar5.unknown = (undefined *)local_100.data;
          (*pcVar28)(local_100.data,lVar25,SVar4.unknown);
          SpecialKey::_get_enter(SVar5);
          bVar3 = Swift::Equatable::___infix(lVar26,pcVar16,SVar4.unknown,puVar7);
          (*pcVar21)(lVar26,SVar4.unknown);
          (*pcVar21)(pcVar16,SVar4.unknown);
          if (!bVar3) {
            FUN_10006db74();
            local_b0.super_class = (class_t *)pcVar16;
            _objc_msgSendSuper2(&local_b0,"keyDown:",local_d0);
            (*pcVar21)(lVar25,SVar4.unknown);
            return;
          }
        }
        (*pcVar21)(lVar25,SVar4.unknown);
        local_d8 = (undefined *)_TtC5Paste18ItemCollectionView::viewModel;
        pcVar19 = *(class_t **)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
        pcVar8 = pcVar19;
        _swift_retain();
        thunk_FUN_10022b1cc();
        local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
        CVar24 = pcVar8->cache;
        local_100.isa = pcVar8;
        local_100.superclass = pcVar19;
        if (CVar24 == 0) {
          local_100.cache = (Cache)PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          local_100.data = _TtC5Paste18ItemCollectionView::applier;
          pMVar9 = Swift::MainActor::typeMetadataAccessor();
          local_100.cache = (Cache)PTR___swiftEmptyArrayStorage_100eae0d8;
          ppcVar27 = &pcVar8->data;
          local_100.vtable = (Implementation)pMVar9;
          do {
            pcVar16 = *ppcVar27;
            pMVar10 = Swift::MainActor::get_shared((MainActor *)local_100.vtable,pMVar9);
            puVar11 = &DAT_100fa6bb0;
            FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                          PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
            UVar12 = Swift::Actor::get_unownedExecutor();
            UVar13 = UVar12;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar13.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar12.unknown,puVar11);
            }
            pMVar9 = *(MainActor **)((long)&(local_100.data)->flags + unaff_x20);
            if (pMVar9 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100069f04);
              (*pcVar21)();
            }
            uVar18 = *(undefined8 *)(unaff_x20 + (long)local_d8);
            _swift_retain(uVar18);
            pMVar14 = pMVar9;
            _swift_retain();
            FUN_1003b8bfc();
            _swift_release(uVar18);
            puVar17 = &DAT_100faa390;
            local_c0 = pMVar14;
            FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
            puVar7 = &DAT_100fa9820;
            FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                          &TargetProtocolConformanceDescriptor_100c32ac0);
            FUN_1001b9698(&local_b8,pcVar16,&local_c0,puVar17,puVar7);
            _swift_release(pMVar10);
            _swift_release(pMVar14);
            _swift_release();
            uVar20 = local_b8;
            if (local_b8 != 0) {
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
              pMVar9 = *(MainActor **)(((ulong)local_a0 & 0xffffffffffffff8) + 0x10);
              uVar2 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x18);
              if ((MainActor *)(uVar2 >> 1) <= pMVar9) {
                Swift::Array<undefined>::__createNewBuffer(1 < uVar2,pMVar9 + 1,1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar9,uVar20);
              local_100.cache = (Cache)local_a0;
            }
            CVar24 = CVar24 - 1;
            ppcVar27 = ppcVar27 + 1;
          } while (CVar24 != 0);
        }
        _swift_bridgeObjectRelease(local_100.isa);
        IVar15 = objc_stub::modifierFlags(local_d0);
        puVar17 = &DAT_100c26ca8;
        _swift_getKeyPath(&DAT_100c26ca8);
        puVar11 = &DAT_100fa64a0;
        FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
        FUN_1002cbe78(&local_a0,puVar17,puVar11);
        FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
        FUN_1002ca7e0(&local_b8);
        _swift_release(local_a0);
        _swift_release(local_98);
        _swift_release(local_90);
        _swift_release(local_80);
        _swift_release();
        if ((local_b8 & (IVar15 ^ 0xffffffffffffffff)) == 0) {
          FUN_10037a9f8();
          uVar20 = *local_70;
          FUN_10037aa04();
          uVar20 = *local_70 | uVar20;
        }
        else {
          uVar20 = 0;
        }
        CVar24 = local_100.cache;
        pcVar8 = local_100.superclass;
        FUN_100066068(local_100.cache,uVar20,0);
        _swift_bridgeObjectRelease(CVar24);
        _swift_release(pcVar8);
        return;
      }
    }
  }
  (*pcVar21)(lVar25,SVar4.unknown);
  FUN_100068db8();
  return;
}



/* Address: 0x100069f04 | _TtC5Paste18ItemCollectionView::keyDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste18ItemCollectionView::keyDown_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/ItemCollectionView.swift",0x1e,1,0xe5,UVar4.unknown,puVar3);
  }
  FUN_100069778(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100069fe0 | FUN_100069fe0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint FUN_100069fe0(undefined8 param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  bool bVar3;
  uint uVar4;
  DispatchWorkItemFlags DVar5;
  DispatchQoS DVar6;
  DispatchTime DVar7;
  ID IVar8;
  NSObject *pNVar9;
  class_t *pcVar10;
  class_t *pcVar11;
  OS_dispatch_queue *pOVar12;
  DispatchTime DVar13;
  void *pvVar14;
  class_rw_t *pcVar15;
  undefined8 *puVar16;
  MainActor *pMVar17;
  MainActor *pMVar18;
  UnownedSerialExecutor UVar19;
  undefined *puVar20;
  undefined *puVar21;
  MainActor *pMVar22;
  MainActor *pMVar23;
  Implementation IVar24;
  MainActor *pMVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  UnownedSerialExecutor UVar29;
  undefined *puVar30;
  _ArrayBuffer _Var31;
  class_t *extraout_x1;
  DispatchQoS DVar32;
  undefined **ppuVar33;
  long lVar34;
  long extraout_x8;
  DispatchWorkItemFlags flags;
  long lVar35;
  long extraout_x8_00;
  DispatchQoS qos;
  long extraout_x8_01;
  code *pcVar36;
  Cache CVar37;
  long extraout_x12;
  ulong uVar38;
  DispatchQoS unaff_x20;
  undefined8 uVar39;
  ulong *puVar40;
  MainActor *pMVar41;
  undefined8 uVar42;
  Implementation IVar43;
  MainActor *pMVar44;
  long lVar45;
  undefined *puVar46;
  DispatchTime deadline;
  DispatchTime DVar47;
  class_t *local_178;
  undefined *local_170;
  undefined *local_130;
  undefined8 local_128;
  code *local_120;
  undefined *local_118;
  code *local_110;
  undefined *local_108;
  MainActor *local_100;
  undefined *local_f8;
  objc_super local_f0 [3];
  ulong local_c0;
  ulong uStack_b8;
  class_t *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  objc_super *super;
  
  DVar5 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar34 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar34 + 0x40));
  flags.unknown = &stack0xfffffffffffffe60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar35 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar35 + 0x40));
  qos.unknown = flags.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar7 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar45 = *(long *)(DVar7.unknown + -8);
  DVar13 = DVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar45 + 0x40));
  DVar47.unknown = qos.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  deadline.unknown = DVar47.unknown + -extraout_x12;
  FUN_100074bac();
  FUN_100074dcc();
  local_a0 = (class_t *)DVar13.unknown;
  FUN_10008be54();
  pcVar10 = local_a0;
  IVar8 = objc_stub::window((ID)unaff_x20.unknown);
  pNVar9 = (NSObject *)objc_stub::firstResponder(IVar8);
  DVar32.unknown = (undefined *)extraout_x1;
  if (pNVar9 == (NSObject *)0x0) {
LAB_10006a420:
    pcVar15 = (class_rw_t *)0x0;
    FUN_1001e7d18();
    CVar37 = pcVar10->cache;
    if (CVar37 != 0) {
      pcVar11 = pcVar10 + 1;
      do {
        if (pcVar11[-1].data == pcVar15 && pcVar11->isa == (class_t *)DVar32.unknown)
        goto LAB_10006a1a8;
        pcVar11 = (class_t *)&pcVar11->cache;
        CVar37 = CVar37 - 1;
      } while (CVar37 != 0);
    }
    _swift_bridgeObjectRelease();
    FUN_10006db74();
    super = (objc_super *)&stack0xffffffffffffff50;
  }
  else {
    FUN_10000ec2c(0,&DAT_100fa8820,&PTR__OBJC_CLASS___NSResponder_100f8d730);
    DVar32.unknown = unaff_x20.unknown;
    bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar9,(NSObject *)unaff_x20.unknown);
    if (!bVar3) goto LAB_10006a420;
LAB_10006a1a8:
    _swift_bridgeObjectRelease();
    FUN_1001e7d18();
    pcVar11 = (class_t *)0x63;
    FUN_1001e94d4(99,0xe100000000000000);
    lVar27 = _TtC5Paste18ItemCollectionView::viewModel;
    if ((pcVar11 != pcVar10) || ((class_t *)DVar32.unknown != (class_t *)0x100000)) {
      pcVar11 = (class_t *)0x63;
      FUN_1001e94d4(99,0xe100000000000000);
      local_c0 = 0x100000;
      puVar46 = &DAT_100c26ca8;
      _swift_getKeyPath(&DAT_100c26ca8);
      puVar16 = &DAT_100fa64a0;
      FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
      FUN_1002cbe78(&local_a0,puVar46,puVar16);
      FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
      FUN_1002ca7e0(&uStack_b8);
      _swift_release(local_a0);
      _swift_release(local_98);
      _swift_release(local_90);
      _swift_release(local_80);
      _swift_release(local_70);
      lVar27 = _TtC5Paste18ItemCollectionView::viewModel;
      if ((pcVar11 == pcVar10) && ((class_t *)(uStack_b8 | local_c0) == (class_t *)DVar32.unknown))
      {
        if (*(long *)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::previewPopover) != 0) {
          pOVar12 = (OS_dispatch_queue *)0x0;
          FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
          DVar13.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
          Dispatch::DispatchTime::now(DVar13);
          Dispatch::__infix(DVar47,0.1);
          pcVar36 = *(code **)(lVar45 + 8);
          (*pcVar36)(DVar47.unknown,DVar7.unknown);
          puVar46 = &DAT_100eb2c08;
          _swift_allocObject(&DAT_100eb2c08,0x18,7);
          *(undefined **)(puVar46 + 0x10) = unaff_x20.unknown;
          local_110 = FUN_100076734;
          local_130 = PTR___NSConcreteStackBlock_100ea82a0;
          local_128 = 0x42000000;
          local_120 = FUN_100030410;
          local_118 = &DAT_100eb2c20;
          local_108 = puVar46;
          pvVar14 = __Block_copy(&local_130);
          Dispatch::DispatchQoS::get_unspecified(unaff_x20);
          local_f8 = PTR___swiftEmptyArrayStorage_100eae0d8;
          puVar16 = &DAT_100fa82c0;
          FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                        PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
          puVar46 = &DAT_100fa7850;
          FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
          puVar28 = &DAT_100fa82d0;
          FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
          Swift::SetAlgebra::_init(flags.unknown,&local_f8,puVar46,puVar28,DVar5.unknown,puVar16);
          (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
          __Block_release(pvVar14);
          (**(code **)(lVar34 + 8))(flags.unknown,DVar5.unknown);
          (**(code **)(lVar35 + 8))(qos.unknown,DVar6.unknown);
          (*pcVar36)(deadline.unknown,DVar7.unknown);
          _swift_release();
          FUN_10006db74();
          lVar34 = -0x130;
          goto LAB_10006a77c;
        }
        pMVar41 = *(MainActor **)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::viewModel);
        pMVar44 = pMVar41;
        _swift_retain();
        thunk_FUN_10022b1cc();
        lVar35 = _TtC5Paste18ItemCollectionView::applier;
        local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
        lVar34 = *(long *)(pMVar44 + 0x10);
        if (lVar34 == 0) {
          local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          pMVar22 = Swift::MainActor::typeMetadataAccessor();
          local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pMVar17 = pMVar22;
          pMVar18 = pMVar44 + 0x20;
          do {
            uVar42 = *(undefined8 *)pMVar18;
            pMVar23 = Swift::MainActor::get_shared(pMVar22,pMVar17);
            puVar16 = &DAT_100fa6bb0;
            FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                          PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
            UVar19 = Swift::Actor::get_unownedExecutor();
            UVar29 = UVar19;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar29.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar19.unknown,puVar16);
            }
            pMVar17 = *(MainActor **)(unaff_x20.unknown + lVar35);
            if (pMVar17 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
              pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b85c);
              (*pcVar36)();
            }
            uVar39 = *(undefined8 *)(unaff_x20.unknown + lVar27);
            _swift_retain(uVar39);
            pMVar25 = pMVar17;
            _swift_retain();
            FUN_1003b8bfc();
            _swift_release(uVar39);
            puVar30 = &DAT_100faa390;
            local_100 = pMVar25;
            FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
            puVar46 = &DAT_100fa9820;
            FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                          &TargetProtocolConformanceDescriptor_100c32ac0);
            FUN_1001b9698(&local_f8,uVar42,&local_100,puVar30,puVar46);
            _swift_release(pMVar23);
            _swift_release(pMVar25);
            _swift_release();
            puVar46 = local_f8;
            if (local_f8 != (undefined *)0x0) {
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
              pMVar17 = *(MainActor **)(((ulong)local_130 & 0xffffffffffffff8) + 0x10);
              uVar38 = *(ulong *)(((ulong)local_130 & 0xffffffffffffff8) + 0x18);
              if ((MainActor *)(uVar38 >> 1) <= pMVar17) {
                Swift::Array<undefined>::__createNewBuffer(1 < uVar38,pMVar17 + 1,1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar17,puVar46);
              local_170 = local_130;
            }
            lVar34 = lVar34 + -1;
            pMVar18 = pMVar18 + 8;
          } while (lVar34 != 0);
        }
        _swift_bridgeObjectRelease();
        FUN_10037a9f8();
        uVar38 = *(ulong *)pMVar44;
        FUN_10037aa04();
        FUN_100065ed8(local_170,*(ulong *)pMVar44 | uVar38);
LAB_10006b44c:
        _swift_bridgeObjectRelease(local_170);
        goto LAB_10006b458;
      }
      pcVar11 = (class_t *)0x65;
      FUN_1001e94d4(0x65,0xe100000000000000);
      lVar34 = _TtC5Paste18ItemCollectionView::viewModel;
      if ((pcVar11 == pcVar10) && ((class_t *)DVar32.unknown == (class_t *)0x100000)) {
        pMVar41 = *(MainActor **)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::viewModel);
        pMVar44 = pMVar41;
        _swift_retain();
        thunk_FUN_10022b1cc();
        lVar45 = _TtC5Paste18ItemCollectionView::applier;
        local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
        lVar35 = *(long *)(pMVar44 + 0x10);
        if (lVar35 == 0) {
          local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          pMVar22 = Swift::MainActor::typeMetadataAccessor();
          local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pMVar17 = pMVar22;
          pMVar18 = pMVar44 + 0x20;
          do {
            uVar42 = *(undefined8 *)pMVar18;
            pMVar23 = Swift::MainActor::get_shared(pMVar22,pMVar17);
            puVar16 = &DAT_100fa6bb0;
            FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                          PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
            UVar19 = Swift::Actor::get_unownedExecutor();
            UVar29 = UVar19;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar29.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar19.unknown,puVar16);
            }
            pMVar17 = *(MainActor **)(unaff_x20.unknown + lVar45);
            if (pMVar17 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
              pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b844);
              (*pcVar36)();
            }
            uVar39 = *(undefined8 *)(unaff_x20.unknown + lVar34);
            _swift_retain(uVar39);
            pMVar25 = pMVar17;
            _swift_retain();
            FUN_1003b8bfc();
            _swift_release(uVar39);
            puVar30 = &DAT_100faa390;
            local_100 = pMVar25;
            FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
            puVar46 = &DAT_100fa9820;
            FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                          &TargetProtocolConformanceDescriptor_100c32ac0);
            FUN_1001b9698(&local_f8,uVar42,&local_100,puVar30,puVar46);
            _swift_release(pMVar23);
            _swift_release(pMVar25);
            _swift_release();
            puVar46 = local_f8;
            if (local_f8 != (undefined *)0x0) {
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
              pMVar17 = *(MainActor **)(((ulong)local_130 & 0xffffffffffffff8) + 0x10);
              uVar38 = *(ulong *)(((ulong)local_130 & 0xffffffffffffff8) + 0x18);
              if ((MainActor *)(uVar38 >> 1) <= pMVar17) {
                Swift::Array<undefined>::__createNewBuffer(1 < uVar38,pMVar17 + 1,1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar17,puVar46);
              local_170 = local_130;
            }
            lVar35 = lVar35 + -1;
            pMVar18 = pMVar18 + 8;
          } while (lVar35 != 0);
        }
        _swift_bridgeObjectRelease(pMVar44);
        FUN_1000655cc(local_170);
        goto LAB_10006b44c;
      }
      pcVar11 = (class_t *)0x65;
      FUN_1001e94d4(0x65,0xe100000000000000);
      if ((pcVar11 == pcVar10) && ((class_t *)DVar32.unknown == (class_t *)0x120000)) {
        FUN_10006bed8();
        uVar4 = (uint)pcVar11;
        goto LAB_10006b460;
      }
      pcVar11 = (class_t *)0x6f;
      FUN_1001e94d4(0x6f,0xe100000000000000);
      lVar34 = _TtC5Paste18ItemCollectionView::viewModel;
      if ((pcVar11 == pcVar10) && ((class_t *)DVar32.unknown == (class_t *)0x100000)) {
        pMVar41 = *(MainActor **)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::viewModel);
        pMVar44 = pMVar41;
        _swift_retain();
        thunk_FUN_10022b1cc();
        lVar45 = _TtC5Paste18ItemCollectionView::applier;
        local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
        lVar35 = *(long *)(pMVar44 + 0x10);
        if (lVar35 == 0) {
          local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          pMVar22 = Swift::MainActor::typeMetadataAccessor();
          local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
          pMVar17 = pMVar22;
          pMVar18 = pMVar44 + 0x20;
          do {
            uVar42 = *(undefined8 *)pMVar18;
            pMVar23 = Swift::MainActor::get_shared(pMVar22,pMVar17);
            puVar16 = &DAT_100fa6bb0;
            FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                          PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
            UVar19 = Swift::Actor::get_unownedExecutor();
            UVar29 = UVar19;
            _swift_task_isCurrentExecutor();
            if (((ulong)UVar29.unknown & 1) == 0) {
              _swift_task_reportUnexpectedExecutor
                        ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar19.unknown,puVar16);
            }
            pMVar17 = *(MainActor **)(unaff_x20.unknown + lVar45);
            if (pMVar17 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
              pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b874);
              (*pcVar36)();
            }
            uVar39 = *(undefined8 *)(unaff_x20.unknown + lVar34);
            _swift_retain(uVar39);
            pMVar25 = pMVar17;
            _swift_retain();
            FUN_1003b8bfc();
            _swift_release(uVar39);
            puVar30 = &DAT_100faa390;
            local_100 = pMVar25;
            FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
            puVar46 = &DAT_100fa9820;
            FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                          &TargetProtocolConformanceDescriptor_100c32ac0);
            FUN_1001b9698(&local_f8,uVar42,&local_100,puVar30,puVar46);
            _swift_release(pMVar23);
            _swift_release(pMVar25);
            _swift_release();
            puVar46 = local_f8;
            if (local_f8 != (undefined *)0x0) {
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
              pMVar17 = *(MainActor **)(((ulong)local_130 & 0xffffffffffffff8) + 0x10);
              uVar38 = *(ulong *)(((ulong)local_130 & 0xffffffffffffff8) + 0x18);
              if ((MainActor *)(uVar38 >> 1) <= pMVar17) {
                Swift::Array<undefined>::__createNewBuffer(1 < uVar38,pMVar17 + 1,1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar17,puVar46);
              local_170 = local_130;
            }
            lVar35 = lVar35 + -1;
            pMVar18 = pMVar18 + 8;
          } while (lVar35 != 0);
        }
        _swift_bridgeObjectRelease(pMVar44);
        FUN_100064da0(local_170);
        goto LAB_10006b44c;
      }
      pcVar11 = (class_t *)0x72;
      FUN_1001e94d4(0x72,0xe100000000000000);
      if ((pcVar11 == pcVar10) && ((class_t *)DVar32.unknown == (class_t *)0x100000)) {
        thunk_FUN_10022b1cc();
        if (pcVar11->cache == 0) {
LAB_10006b81c:
          _swift_bridgeObjectRelease();
          uVar4 = 0;
          goto LAB_10006b460;
        }
        IVar43 = (&pcVar11->vtable)[pcVar11->cache];
        _swift_bridgeObjectRelease();
        lVar34 = _TtC7PasteUI14CollectionView::visibleCells;
        ppuVar33 = &local_130;
        _swift_beginAccess(unaff_x20.unknown + _TtC7PasteUI14CollectionView::visibleCells,ppuVar33,0
                           ,0);
        lVar34 = *(long *)(unaff_x20.unknown + lVar34);
        if ((*(long *)(lVar34 + 0x10) != 0) &&
           (IVar24 = IVar43, FUN_100071340(), ((ulong)ppuVar33 & 1) != 0)) {
          puVar40 = *(ulong **)(*(long *)(lVar34 + 0x38) + IVar24 * 0x10);
          uVar42 = 0;
          FUN_1003d9138(0);
          _swift_dynamicCastClass(puVar40,uVar42);
          if (puVar40 != (ulong *)0x0) {
            FUN_100228c78(IVar43,0,1);
            (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar40) + 0x238))();
          }
        }
      }
      else {
        pcVar11 = (class_t *)0x76;
        FUN_1001e94d4(0x76,0xe100000000000000);
        lVar34 = _TtC5Paste18ItemCollectionView::viewModel;
        if ((pcVar11 == pcVar10) && ((class_t *)DVar32.unknown == (class_t *)0x100000)) {
          pMVar41 = *(MainActor **)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::viewModel);
          pMVar44 = pMVar41;
          _swift_retain();
          thunk_FUN_10022b1cc();
          lVar45 = _TtC5Paste18ItemCollectionView::applier;
          local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
          lVar35 = *(long *)(pMVar44 + 0x10);
          if (lVar35 == 0) {
            local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            pMVar22 = Swift::MainActor::typeMetadataAccessor();
            local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
            pMVar17 = pMVar22;
            pMVar18 = pMVar44 + 0x20;
            do {
              uVar42 = *(undefined8 *)pMVar18;
              pMVar23 = Swift::MainActor::get_shared(pMVar22,pMVar17);
              puVar16 = &DAT_100fa6bb0;
              FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                            PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
              UVar19 = Swift::Actor::get_unownedExecutor();
              UVar29 = UVar19;
              _swift_task_isCurrentExecutor();
              if (((ulong)UVar29.unknown & 1) == 0) {
                _swift_task_reportUnexpectedExecutor
                          ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar19.unknown,puVar16);
              }
              pMVar17 = *(MainActor **)(unaff_x20.unknown + lVar45);
              if (pMVar17 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
                pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b878);
                (*pcVar36)();
              }
              uVar39 = *(undefined8 *)(unaff_x20.unknown + lVar34);
              _swift_retain(uVar39);
              pMVar25 = pMVar17;
              _swift_retain();
              FUN_1003b8bfc();
              _swift_release(uVar39);
              puVar30 = &DAT_100faa390;
              local_100 = pMVar25;
              FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
              puVar46 = &DAT_100fa9820;
              FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                            &TargetProtocolConformanceDescriptor_100c32ac0);
              FUN_1001b9698(&local_f8,uVar42,&local_100,puVar30,puVar46);
              _swift_release(pMVar23);
              _swift_release(pMVar25);
              _swift_release();
              puVar46 = local_f8;
              if (local_f8 != (undefined *)0x0) {
                Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
                pMVar17 = *(MainActor **)(((ulong)local_130 & 0xffffffffffffff8) + 0x10);
                uVar38 = *(ulong *)(((ulong)local_130 & 0xffffffffffffff8) + 0x18);
                if ((MainActor *)(uVar38 >> 1) <= pMVar17) {
                  Swift::Array<undefined>::__createNewBuffer(1 < uVar38,pMVar17 + 1,1);
                }
                Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar17,puVar46);
                local_170 = local_130;
              }
              lVar35 = lVar35 + -1;
              pMVar18 = pMVar18 + 8;
            } while (lVar35 != 0);
          }
          _swift_bridgeObjectRelease(pMVar44);
          FUN_100066068(local_170,0,1);
          goto LAB_10006b44c;
        }
        pcVar11 = (class_t *)0x67;
        FUN_1001e94d4(0x67,0xe100000000000000);
        lVar34 = _TtC5Paste18ItemCollectionView::viewModel;
        if ((pcVar11 == pcVar10) && ((class_t *)DVar32.unknown == (class_t *)0x100000)) {
          lVar26 = *(long *)(*(long *)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::viewModel
                                      ) + 0x40);
          lVar27 = lVar26;
          FUN_10000444c();
          thunk_FUN_10022b1cc();
          lVar45 = _TtC5Paste18ItemCollectionView::applier;
          local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
          lVar35 = *(long *)(lVar27 + 0x10);
          if (lVar35 == 0) {
            local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            pMVar41 = Swift::MainActor::typeMetadataAccessor();
            local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
            pMVar44 = pMVar41;
            puVar16 = (undefined8 *)(lVar27 + 0x20);
            do {
              uVar42 = *puVar16;
              pMVar17 = Swift::MainActor::get_shared(pMVar41,pMVar44);
              puVar28 = &DAT_100fa6bb0;
              FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                            PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
              UVar19 = Swift::Actor::get_unownedExecutor();
              UVar29 = UVar19;
              _swift_task_isCurrentExecutor();
              if (((ulong)UVar29.unknown & 1) == 0) {
                _swift_task_reportUnexpectedExecutor
                          ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar19.unknown,puVar28);
              }
              pMVar44 = *(MainActor **)(unaff_x20.unknown + lVar45);
              if (pMVar44 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
                pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b87c);
                (*pcVar36)();
              }
              uVar39 = *(undefined8 *)(unaff_x20.unknown + lVar34);
              _swift_retain(uVar39);
              pMVar18 = pMVar44;
              _swift_retain();
              FUN_1003b8bfc();
              _swift_release(uVar39);
              puVar30 = &DAT_100faa390;
              local_100 = pMVar18;
              FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
              puVar46 = &DAT_100fa9820;
              FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                            &TargetProtocolConformanceDescriptor_100c32ac0);
              FUN_1001b9698(&local_f8,uVar42,&local_100,puVar30,puVar46);
              _swift_release(pMVar17);
              _swift_release(pMVar18);
              _swift_release();
              puVar46 = local_f8;
              if (local_f8 != (undefined *)0x0) {
                Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
                pMVar44 = *(MainActor **)(((ulong)local_130 & 0xffffffffffffff8) + 0x10);
                uVar38 = *(ulong *)(((ulong)local_130 & 0xffffffffffffff8) + 0x18);
                if ((MainActor *)(uVar38 >> 1) <= pMVar44) {
                  Swift::Array<undefined>::__createNewBuffer(1 < uVar38,pMVar44 + 1,1);
                }
                Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar44,puVar46);
                local_170 = local_130;
              }
              lVar35 = lVar35 + -1;
              puVar16 = puVar16 + 1;
            } while (lVar35 != 0);
          }
          _swift_bridgeObjectRelease(lVar27);
          local_130 = local_170;
          puVar46 = &DAT_100fa8310;
          FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
          puVar30 = &DAT_100fa9830;
          FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                        PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
          _Var31.unknown = (undefined *)&local_130;
          FUN_1003b83c4(_Var31.unknown,lVar26,puVar46,puVar30);
          FUN_100021e40(lVar26);
          _swift_bridgeObjectRelease(local_170);
          if ((ulong)_Var31.unknown >> 0x3e == 0) {
            lVar34 = *(long *)(((ulong)_Var31.unknown & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var1.unknown = _Var31.unknown & 0xffffffffffffff8;
            if ((undefined *)0x7fffffffffffffff < _Var31.unknown) {
              _Var1.unknown = _Var31.unknown;
            }
            lVar34 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          }
          if (lVar34 == 0) goto LAB_10006b81c;
          if (((ulong)_Var31.unknown & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)_Var31.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b870);
              (*pcVar36)();
            }
            uVar42 = *(undefined8 *)(_Var31.unknown + 0x20);
          }
          else {
            uVar42 = 0;
            Swift::_ArrayBuffer::__getElementSlowPath(0,_Var31);
          }
          _swift_bridgeObjectRelease();
          thunk_FUN_10022b1cc();
          if (*(long *)(_Var31.unknown + 0x10) == 0) {
            _swift_bridgeObjectRelease();
            uVar4 = 0;
            goto LAB_10006b460;
          }
          uVar39 = *(undefined8 *)(_Var31.unknown + 0x20);
          _swift_bridgeObjectRelease();
          FUN_10006c338(uVar39,uVar42);
        }
        else {
          FUN_1001e7d18();
          FUN_10006c60c();
          if (((ulong)pcVar11 & 1) == 0) {
            FUN_10006db74();
            super = local_f0;
            local_f0[0].super_class = pcVar11;
            goto LAB_10006a784;
          }
        }
      }
LAB_10006b45c:
      uVar4 = 1;
      goto LAB_10006b460;
    }
    if (*(long *)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::previewPopover) == 0) {
      pMVar41 = *(MainActor **)(unaff_x20.unknown + _TtC5Paste18ItemCollectionView::viewModel);
      pMVar44 = pMVar41;
      _swift_retain();
      thunk_FUN_10022b1cc();
      lVar35 = _TtC5Paste18ItemCollectionView::applier;
      local_a0 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar34 = *(long *)(pMVar44 + 0x10);
      if (lVar34 == 0) {
        _swift_bridgeObjectRelease();
        local_178 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        pMVar17 = Swift::MainActor::typeMetadataAccessor();
        local_178 = (class_t *)PTR___swiftEmptyArrayStorage_100eae0d8;
        lVar45 = 0x20;
        do {
          uVar42 = *(undefined8 *)(pMVar44 + lVar45);
          pMVar18 = Swift::MainActor::get_shared(pMVar17,pMVar44);
          puVar16 = &DAT_100fa6bb0;
          FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                        PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
          UVar19 = Swift::Actor::get_unownedExecutor();
          UVar29 = UVar19;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar29.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar19.unknown,puVar16);
          }
          puVar46 = *(undefined **)(unaff_x20.unknown + lVar35);
          if (puVar46 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar36 = (code *)SoftwareBreakpoint(1,0x10006b840);
            (*pcVar36)();
          }
          uVar39 = *(undefined8 *)(unaff_x20.unknown + lVar27);
          _swift_retain(uVar39);
          puVar20 = puVar46;
          _swift_retain();
          FUN_1003b8bfc();
          _swift_release(uVar39);
          puVar21 = &DAT_100faa390;
          local_f8 = puVar20;
          FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
          puVar30 = &DAT_100fa9820;
          FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                        &TargetProtocolConformanceDescriptor_100c32ac0);
          FUN_1001b9698(&local_130,uVar42,&local_f8,puVar21,puVar30);
          _swift_release(pMVar18);
          _swift_release(puVar20);
          _swift_release(puVar46);
          puVar46 = local_130;
          if (local_130 != (undefined *)0x0) {
            Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
            uVar38 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x10);
            uVar2 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x18);
            if (uVar2 >> 1 <= uVar38) {
              Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar38 + 1,1);
            }
            Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar38,puVar46);
            local_178 = local_a0;
          }
          lVar45 = lVar45 + 8;
          lVar34 = lVar34 + -1;
        } while (lVar34 != 0);
        _swift_bridgeObjectRelease();
      }
      FUN_100065ed8(local_178,0);
      _swift_bridgeObjectRelease(local_178);
LAB_10006b458:
      _swift_release(pMVar41);
      goto LAB_10006b45c;
    }
    pOVar12 = (OS_dispatch_queue *)0x0;
    FUN_10000ec2c(0,&DAT_100fa7528,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
    DVar13.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar12);
    Dispatch::DispatchTime::now(DVar13);
    Dispatch::__infix(DVar47,0.1);
    pcVar36 = *(code **)(lVar45 + 8);
    (*pcVar36)(DVar47.unknown,DVar7.unknown);
    puVar46 = &DAT_100eb2c58;
    _swift_allocObject(&DAT_100eb2c58,0x18,7);
    *(undefined **)(puVar46 + 0x10) = unaff_x20.unknown;
    local_80 = FUN_10007676c;
    local_a0 = (class_t *)PTR___NSConcreteStackBlock_100ea82a0;
    local_98 = 0x42000000;
    local_90 = FUN_100030410;
    puStack_88 = &DAT_100eb2c70;
    local_78 = puVar46;
    pvVar14 = __Block_copy(&local_a0);
    Dispatch::DispatchQoS::get_unspecified(unaff_x20);
    local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar16 = &DAT_100fa82c0;
    FUN_100003a00(&DAT_100fa82c0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar46 = &DAT_100fa7850;
    FUN_1000037f0(&DAT_100fa7850,&DAT_100c24cf0);
    puVar28 = &DAT_100fa82d0;
    FUN_100016eac(&DAT_100fa82d0,&DAT_100fa7850,&DAT_100c24cf0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(flags.unknown,&local_130,puVar46,puVar28,DVar5.unknown,puVar16);
    (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(deadline,qos,flags);
    __Block_release(pvVar14);
    (**(code **)(lVar34 + 8))(flags.unknown,DVar5.unknown);
    (**(code **)(lVar35 + 8))(qos.unknown,DVar6.unknown);
    (*pcVar36)(deadline.unknown,DVar7.unknown);
    _swift_release();
    FUN_10006db74();
    lVar34 = -0x140;
LAB_10006a77c:
    super = (objc_super *)(&stack0xfffffffffffffff0 + lVar34);
  }
LAB_10006a784:
  IVar8 = _objc_msgSendSuper2(super,"performKeyEquivalent:",param_1);
  uVar4 = (uint)IVar8;
LAB_10006b460:
  return uVar4 & 1;
}



/* Address: 0x10006b87c | FUN_10006b87c */

void FUN_10006b87c(long param_1,undefined8 param_2)

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
              ("Paste/ItemCollectionView.swift",0x1e,1,param_2,UVar4.unknown,puVar3);
  }
  if (*(ID *)(param_1 + _TtC5Paste18ItemCollectionView::previewPopover) != 0) {
    objc_stub::performClose_
              (*(ID *)(param_1 + _TtC5Paste18ItemCollectionView::previewPopover),param_1);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10006b93c | _TtC5Paste18ItemCollectionView::performKeyEquivalent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste18ItemCollectionView::performKeyEquivalent_(ID param_1,SEL param_2,ID param_3)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.swift",0x1e,1,0xff,UVar4.unknown,puVar3);
  }
  FUN_100069fe0();
  _swift_release(pMVar2);
  return uVar6 & 1;
}



/* Address: 0x10006ba24 | _TtC5Paste18ItemCollectionView::selectAll: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste18ItemCollectionView::selectAll_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x147,UVar4.unknown,puVar3);
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
  FUN_100228ee8();
  FUN_100005808(&local_60,&DAT_100fa8810,&DAT_100c23ce0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10006bb3c | FUN_10006bb3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006bb3c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uVar10;
  ID self;
  long lVar11;
  long lVar12;
  long local_80 [3];
  long local_68;
  
  lVar11 = _TtC5Paste18ItemCollectionView::viewModel;
  uVar9 = 0;
  lVar12 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10006be48);
    (*pcVar4)();
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  _swift_retain(uVar10);
  lVar5 = lVar12;
  _swift_retain();
  FUN_1003b8bfc();
  _swift_release(uVar10);
  puVar6 = &DAT_100faa390;
  local_68 = lVar5;
  FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
  puVar7 = &DAT_100fa9820;
  FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b9698(local_80,param_1,&local_68,puVar6,puVar7);
  _swift_release(lVar5);
  _swift_release(lVar12);
  lVar12 = _TtC7PasteUI14CollectionView::visibleCells;
  if (local_80[0] != 0) {
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,local_80,0,0);
    lVar12 = *(long *)(unaff_x20 + lVar12);
    if ((*(long *)(lVar12 + 0x10) != 0) &&
       (lVar8 = param_1, FUN_100071340(), lVar5 = _TtC5Paste18ItemCollectionView::previewPopover,
       (uVar9 & 1) != 0)) {
      uVar10 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + lVar8 * 0x10);
      self = *(ID *)(unaff_x20 + _TtC5Paste18ItemCollectionView::previewPopover);
      if (self == 0) {
        lVar11 = *(long *)(*(long *)(unaff_x20 + lVar11) + 0x40);
        FUN_100029d88(0);
        _objc_allocWithZone();
        FUN_10000444c(lVar11);
        FUN_100028f70();
        *(long *)(unaff_x20 + lVar5) = lVar11;
        puVar6 = &DAT_100eb2730;
        _swift_allocObject(&DAT_100eb2730,0x18,7);
        _swift_unknownObjectWeakInit(puVar6 + 0x10);
        puVar1 = (undefined8 *)
                 (lVar11 + _TtCC5Paste18ItemCollectionView14PreviewPopover::onWillClose);
        uVar2 = *puVar1;
        uVar3 = puVar1[1];
        *puVar1 = FUN_10007654c;
        puVar1[1] = puVar6;
        _swift_retain(puVar6);
        FUN_100004550(uVar2,uVar3);
        _swift_release(puVar6);
        self = *(ID *)(unaff_x20 + lVar5);
        if (self == 0) {
          return;
        }
      }
      if (*(char *)(self + _TtCC5Paste18ItemCollectionView14PreviewPopover::isDisplayed) == '\x01')
      {
        objc_stub::close(self);
        return;
      }
      FUN_10002964c(local_80[0],uVar10);
      return;
    }
  }
  puVar6 = &DAT_100eb2730;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar7 = &DAT_100eb2b18;
  _swift_allocObject(&DAT_100eb2b18,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar6;
  *(long *)(puVar7 + 0x18) = param_1;
  _swift_retain(puVar6);
  FUN_10022c9c4(param_1,1,FUN_100076544,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  return;
}



/* Address: 0x10006be48 | FUN_10006be48 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10006be48(ulong param_1,long param_2,undefined8 param_3)

{
  if ((param_1 & 1) != 0) {
    param_2 = param_2 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    param_1 = 0;
    if (param_2 != 0) {
      FUN_10006bb3c(param_3);
      return 0;
    }
  }
  return param_1;
}



/* Address: 0x10006be90 | FUN_10006be90 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10006be90(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + _TtC5Paste18ItemCollectionView::previewPopover) = 0;
    return 0;
  }
  return 0;
}



/* Address: 0x10006bed8 | FUN_10006bed8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10006bed8(MainActor *param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ContiguousArray CVar14;
  UnownedSerialExecutor UVar15;
  char *pcVar16;
  ContiguousArray CVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  undefined *local_b8;
  _CocoaArrayWrapper local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  long local_68;
  
  thunk_FUN_1002171cc();
  if (((ulong)param_1 & 1) != 0) {
    thunk_FUN_10022b1cc();
    lVar3 = _TtC5Paste18ItemCollectionView::applier;
    lVar1 = _TtC5Paste18ItemCollectionView::viewModel;
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_90.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar19 = *(long *)(param_1 + 0x10);
    if (lVar19 == 0) {
      _swift_bridgeObjectRelease();
      local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      pMVar6 = Swift::MainActor::typeMetadataAccessor();
      local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar20 = 0x20;
      do {
        uVar22 = *(undefined8 *)(param_1 + lVar20);
        pMVar7 = Swift::MainActor::get_shared(pMVar6,param_1);
        puVar8 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar9 = Swift::Actor::get_unownedExecutor();
        UVar15 = UVar9;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar15.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar9.unknown,puVar8);
        }
        lVar23 = *(long *)(unaff_x20 + lVar3);
        if (lVar23 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10006c338);
          (*pcVar4)();
        }
        uVar18 = *(undefined8 *)(unaff_x20 + lVar1);
        _swift_retain(uVar18);
        lVar10 = lVar23;
        _swift_retain();
        FUN_1003b8bfc();
        _swift_release(uVar18);
        puVar11 = &DAT_100faa390;
        local_70 = lVar10;
        FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
        puVar12 = &DAT_100fa9820;
        FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                      &TargetProtocolConformanceDescriptor_100c32ac0);
        FUN_1001b9698(&local_68,uVar22,&local_70,puVar11,puVar12);
        _swift_release(pMVar7);
        _swift_release(lVar10);
        _swift_release(lVar23);
        lVar23 = local_68;
        if (local_68 != 0) {
          Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
          uVar21 = *(ulong *)(((ulong)local_90.unknown & 0xffffffffffffff8) + 0x10);
          uVar13 = *(ulong *)(((ulong)local_90.unknown & 0xffffffffffffff8) + 0x18);
          if (uVar13 >> 1 <= uVar21) {
            Swift::Array<undefined>::__createNewBuffer(1 < uVar13,uVar21 + 1,1);
          }
          Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar21,lVar23);
          local_b8 = local_90.unknown;
        }
        lVar20 = lVar20 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      _swift_bridgeObjectRelease();
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    local_90.unknown = puVar12;
    if ((ulong)local_b8 >> 0x3e == 0) {
      lVar19 = *(long *)(((ulong)local_b8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)local_b8 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < local_b8) {
        _Var2.unknown = local_b8;
      }
      lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar19 != 0) {
      uVar21 = 0;
      do {
        if (((ulong)local_b8 & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)local_b8 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10006c268);
            (*pcVar4)();
          }
          uVar13 = *(ulong *)(local_b8 + uVar21 * 8 + 0x20);
        }
        else {
          uVar13 = uVar21;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar21,(_ArrayBuffer)local_b8);
        }
        lVar1 = uVar21 + 1;
        if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10006c264);
          (*pcVar4)();
        }
        pMVar6 = Swift::MainActor::typeMetadataAccessor();
        CVar14.unknown = Swift::MainActor::get_shared(pMVar6,pMVar6);
        puVar8 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar15 = Swift::Actor::get_unownedExecutor();
        pcVar16 = (char *)UVar15;
        CVar17.unknown = (undefined *)puVar8;
        _swift_task_isCurrentExecutor();
        if (((ulong)pcVar16 & 1) == 0) {
          pcVar16 = "Paste/ItemCollectionView.swift";
          CVar17.unknown = (undefined *)0x1e;
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ItemCollectionView.swift",0x1e,1,0x16b,UVar15.unknown,puVar8);
        }
        FUN_10031c2ec();
        uVar5 = (uint)pcVar16;
        if (((ulong)pcVar16 & 1) == 0) {
          _swift_release(CVar14.unknown);
        }
        else {
          FUN_10031eba8();
          _swift_release();
          if ((uVar5 & 0xff) == 5) {
            Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar14);
                    /* WARNING: Load size is inaccurate */
            CVar14.unknown = local_90.unknown[0x10];
            Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                      ((__int64)CVar14.unknown,CVar17);
            Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar14.unknown,uVar13);
            Swift::ContiguousArray::__endMutation(CVar14);
          }
        }
        uVar21 = uVar21 + 1;
      } while (lVar1 != lVar19);
    }
    _swift_bridgeObjectRelease(local_b8);
    _Var2.unknown = local_90.unknown;
    if (((long)local_90.unknown < 0) || (((ulong)local_90.unknown >> 0x3e & 1) != 0)) {
      lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(local_90);
    }
    else {
      lVar19 = *(long *)(local_90.unknown + 0x10);
    }
    if (lVar19 != 0) {
      uVar22 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
      _swift_retain(uVar22);
      FUN_1000655cc(_Var2.unknown);
      _swift_release(_Var2.unknown);
      _swift_release(uVar22);
      uStack_88 = 0;
      local_90.unknown = (undefined *)0x0;
      uStack_78 = 0;
      uStack_80 = 0;
      FUN_1002160fc(&local_90);
      FUN_100005808(&local_90,&DAT_100fa8810,&DAT_100c23ce0);
      return 1;
    }
    _swift_release(_Var2.unknown);
  }
  return 0;
}



/* Address: 0x10006c338 | FUN_10006c338 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10006c338(long param_1,char *param_2)

{
  String *pSVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  undefined1 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  ID *pIVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  MainActor *self;
  undefined1 uVar17;
  long lVar18;
  double extraout_d0;
  double dVar19;
  double dVar20;
  void *pvVar21;
  String SVar22;
  ID local_90 [3];
  long local_78;
  
  lVar18 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10006c60c);
    (*pcVar15)();
  }
  uVar16 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  _swift_retain(uVar16);
  lVar7 = lVar18;
  _swift_retain();
  FUN_1003b8bfc();
  _swift_release(uVar16);
  puVar8 = &DAT_100faa390;
  local_78 = lVar7;
  FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
  puVar9 = &DAT_100fa9820;
  FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b9698(local_90,param_1,&local_78,puVar8,puVar9);
  _swift_release(lVar7);
  _swift_release(lVar18);
  lVar18 = _TtC7PasteUI14CollectionView::visibleCells;
  if (local_90[0] != 0) {
    pIVar14 = local_90;
    _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,pIVar14,0,0);
    lVar18 = *(long *)(unaff_x20 + lVar18);
    pvVar21 = (void *)0x0;
    if ((*(long *)(lVar18 + 0x10) == 0) || (FUN_100071340(), ((ulong)pIVar14 & 1) == 0)) {
      uVar17 = 1;
    }
    else {
      self = *(MainActor **)(*(long *)(lVar18 + 0x38) + param_1 * 0x10);
      pMVar10 = Swift::MainActor::typeMetadataAccessor();
      puVar8 = PTR_typeMetadataAccessor_100eaec10;
      pMVar10 = Swift::MainActor::get_shared(pMVar10,self);
      puVar11 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar12 = Swift::Actor::get_unownedExecutor();
      UVar13 = UVar12;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar13.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x175,UVar12.unknown,puVar11);
      }
      objc_stub::frame((ID)self);
      dVar19 = extraout_d0;
      _CGRectGetMinX();
      dVar20 = dVar19;
      FUN_10022b598();
      _swift_release(pMVar10);
      uVar17 = 0;
      pvVar21 = (void *)(dVar19 - dVar20);
    }
    objc_stub::identifier(local_90[0]);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pSVar1 = (String *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingFocus);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    pcVar3 = pSVar1[1].str;
    pvVar5 = pSVar1[1].bridgeObject;
    *pSVar1 = SVar22;
    pSVar1[1].str = param_2;
    pSVar1[1].bridgeObject = pvVar21;
    uVar6 = *(undefined1 *)&pSVar1[2].str;
    *(undefined1 *)&pSVar1[2].str = uVar17;
    FUN_100076498(pcVar2,pvVar4,pcVar3,pvVar5,uVar6);
    pcVar15 = *(code **)(unaff_x20 + _TtC5Paste18ItemCollectionView::onSelectList);
    if (pcVar15 != (code *)0x0) {
      uVar16 = ((undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::onSelectList))[1];
      _swift_retain(uVar16);
      (*pcVar15)(param_2);
      FUN_100004550(pcVar15,uVar16);
    }
  }
  return;
}



/* Address: 0x10006c60c | FUN_10006c60c */

undefined8 FUN_10006c60c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  MainActor *pMVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  
  puVar2 = (ulong *)&DAT_100fa9880;
  FUN_1000037f0(&DAT_100fa9880,&DAT_100c26e58);
  _swift_initStackObject();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  FUN_100074dcc();
  puVar16 = puVar2 + 4;
  *puVar16 = (ulong)puVar3;
  FUN_10037a9f8();
  uVar17 = *puVar3;
  FUN_10037aa04();
  puVar2[5] = *puVar3 | uVar17;
  FUN_100074bac();
  puVar2[6] = (ulong)puVar3;
  puVar2[7] = 0;
  lVar19 = _TtC5Paste18ItemCollectionView::applier;
  lVar8 = _TtC5Paste18ItemCollectionView::viewModel;
  uVar17 = *(ulong *)(*puVar16 + 0x10);
  if (uVar17 != 0) {
    uVar18 = 0;
    puVar12 = (ulong *)(*puVar16 + 0x28);
    do {
      if (puVar12[-1] == param_1 && *puVar12 == param_2) {
        lVar11 = 0;
        goto LAB_10006c704;
      }
      puVar12 = puVar12 + 2;
      uVar18 = uVar18 + 1;
    } while (uVar17 != uVar18);
  }
  if (puVar3[2] != 0) {
    uVar18 = 0;
    puVar12 = puVar3 + 5;
    lVar11 = 0x10;
    do {
      if (puVar12[-1] == param_1 && *puVar12 == param_2) goto LAB_10006c704;
      puVar12 = puVar12 + 2;
      uVar18 = uVar18 + 1;
    } while (puVar3[2] != uVar18);
  }
  uVar14 = 0;
LAB_10006c8cc:
  _swift_release(puVar2);
  return uVar14;
LAB_10006c704:
  pMVar15 = *(MainActor **)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  uVar14 = *(undefined8 *)((long)puVar16 + lVar11 + 8);
  local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  this = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = pMVar15;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar6.unknown,puVar5);
  }
  lVar19 = *(long *)(unaff_x20 + lVar19);
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10006c924);
    (*pcVar1)();
  }
  uVar13 = *(undefined8 *)(unaff_x20 + lVar8);
  _swift_retain(uVar13);
  lVar8 = lVar19;
  _swift_retain();
  FUN_1003b8bfc();
  _swift_release(uVar13);
  puVar9 = &DAT_100faa390;
  local_b8 = lVar8;
  FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
  puVar10 = &DAT_100fa9820;
  FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b9698(&local_b0,uVar18,&local_b8,puVar9,puVar10);
  _swift_release(pMVar4);
  _swift_release(lVar8);
  _swift_release(lVar19);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_b0 != 0) {
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar17 = *(ulong *)(((ulong)local_a8 & 0xffffffffffffff8) + 0x10);
    uVar18 = *(ulong *)(((ulong)local_a8 & 0xffffffffffffff8) + 0x18);
    if (uVar18 >> 1 <= uVar17) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar18,uVar17 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,local_b0);
    puVar9 = local_a8;
  }
  FUN_100066068(puVar9,uVar14,0);
  _swift_bridgeObjectRelease(puVar9);
  _swift_release(pMVar15);
  uVar14 = 1;
  FUN_100228c78(0,0,1);
  goto LAB_10006c8cc;
}



/* Address: 0x10006c924 | FUN_10006c924 */

undefined * FUN_10006c924(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  MainActor *pMVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  MainActor *pMVar17;
  undefined *local_98;
  MainActor *local_78;
  long local_70;
  undefined *local_68;
  
  lVar3 = _TtC5Paste18ItemCollectionView::applier;
  lVar2 = _TtC5Paste18ItemCollectionView::viewModel;
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == 0) {
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    this = Swift::MainActor::typeMetadataAccessor();
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pMVar17 = this;
    puVar14 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar16 = *puVar14;
      pMVar6 = Swift::MainActor::get_shared(this,pMVar17);
      puVar7 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar8 = Swift::Actor::get_unownedExecutor();
      UVar9 = UVar8;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar9.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar8.unknown,puVar7);
      }
      pMVar17 = *(MainActor **)(unaff_x20 + lVar3);
      if (pMVar17 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10006cb4c);
        (*pcVar5)();
      }
      uVar13 = *(undefined8 *)(unaff_x20 + lVar2);
      _swift_retain(uVar13);
      pMVar10 = pMVar17;
      _swift_retain();
      FUN_1003b8bfc();
      _swift_release(uVar13);
      puVar11 = &DAT_100faa390;
      local_78 = pMVar10;
      FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
      puVar12 = &DAT_100fa9820;
      FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                    &TargetProtocolConformanceDescriptor_100c32ac0);
      FUN_1001b9698(&local_70,uVar16,&local_78,puVar11,puVar12);
      _swift_release(pMVar6);
      _swift_release(pMVar10);
      _swift_release();
      lVar4 = local_70;
      if (local_70 != 0) {
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        pMVar17 = *(MainActor **)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
        uVar1 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
        if ((MainActor *)(uVar1 >> 1) <= pMVar17) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar1,pMVar17 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar17,lVar4);
        local_98 = local_68;
      }
      lVar15 = lVar15 + -1;
      puVar14 = puVar14 + 1;
    } while (lVar15 != 0);
  }
  return local_98;
}



/* Address: 0x10006cb4c | FUN_10006cb4c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10006cb4c(ID *param_1,char *param_2,void *param_3)

{
  String SVar1;
  bool bVar2;
  String SVar3;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2;
  objc_stub::identifier(*param_1);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar3 == SVar1) {
    bVar2 = true;
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar3.str,(_StringGuts)SVar3.bridgeObject,
                       (_StringComparisonResult)(__int8)param_2);
  }
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return bVar2;
}



/* Address: 0x10006cbe0 | _TtC5Paste18ItemCollectionView::canBecomeKeyView */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste18ItemCollectionView::canBecomeKeyView(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_10006cbf0(bVar1,param_2,0x198);
  return bVar1;
}



/* Address: 0x10006cbe8 | _TtC5Paste18ItemCollectionView::acceptsFirstResponder */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste18ItemCollectionView::acceptsFirstResponder(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_10006cbf0(bVar1,param_2,0x199);
  return bVar1;
}



/* Address: 0x10006cbf0 | FUN_10006cbf0 */

undefined8 FUN_10006cbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
              ("Paste/ItemCollectionView.swift",0x1e,1,param_3,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x10006cc94 | FUN_10006cc94 */

long FUN_10006cc94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC5Paste18ItemCollectionView::___lazy_storage___sizeClassTransitionManager;
  lVar2 = *(long *)(unaff_x20 +
                   _TtC5Paste18ItemCollectionView::___lazy_storage___sizeClassTransitionManager);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10006ccf8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_retain();
    _swift_release(uVar4);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}



/* Address: 0x10006ccf8 | FUN_10006ccf8 */

void FUN_10006ccf8(ID param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  double extraout_d0;
  double dVar5;
  
  objc_stub::bounds(param_1);
  dVar5 = extraout_d0;
  _CGRectGetHeight();
  dVar5 = dVar5 + -32.0;
  uVar4 = 2;
  if (dVar5 < 200.0) {
    uVar4 = 3;
  }
  if (240.0 <= dVar5) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (dVar5 < 280.0) {
    uVar1 = uVar4;
  }
  puVar2 = &DAT_100eb2730;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar2 + 0x10,param_1);
  uVar3 = 0;
  FUN_10020bf64(0);
  _swift_allocObject();
  FUN_10020bb64(uVar1,FUN_100076500,puVar2,uVar3);
  return;
}



/* Address: 0x10006cdc4 | FUN_10006cdc4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10006cdc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b0 [10];
  
  puVar5 = (ulong *)(param_1 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar5 == (ulong *)0x0) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar5) + 0x1c8))();
  puVar10 = puVar5 + 8;
  uVar12 = -1L << ((ulong)(byte)puVar5[4] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar13 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *puVar10;
  _swift_bridgeObjectRetain(puVar5);
  lVar11 = 0;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10006ce6c:
  lVar2 = lVar11;
joined_r0x00010006ce78:
  while (uVar13 == 0) {
    bVar4 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10006d0a0);
      (*pcVar3)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar11) {
      _swift_bridgeObjectRelease(puVar5);
      FUN_10000c650(puVar5,puVar10,~uVar12,lVar2,0);
      puVar9 = &DAT_100fa6b80;
      FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
      _swift_initStackObject();
      *(undefined8 *)(puVar9 + 0x18) = 3;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      puVar7 = puVar9;
      FUN_100066728();
      *(undefined **)(puVar9 + 0x20) = puVar7;
      puVar7 = puVar9;
      FUN_10008a130(puVar9);
      _swift_setDeallocating(puVar9);
      _swift_arrayDestroy(puVar9 + 0x20,*(undefined8 *)(puVar9 + 0x10),
                          PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
      local_b0[0] = puVar8;
      FUN_10008bf44(puVar7);
      return local_b0[0];
    }
    uVar13 = puVar10[lVar11];
  }
  uVar1 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
  uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  uVar13 = uVar13 - 1 & uVar13;
  puVar6 = (undefined8 *)
           (puVar5[7] + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x10 + lVar11 * 0x400);
  uStack_e8 = puVar6[1];
  local_f0 = *puVar6;
  puVar7 = &DAT_100fa9860;
  FUN_1000037f0(&DAT_100fa9860,&DAT_100c26e38);
  puVar9 = &DAT_100fa9868;
  FUN_1000037f0(&DAT_100fa9868,&DAT_100c26e40);
  puVar6 = &local_e0;
  _swift_dynamicCast(puVar6,&local_f0,puVar7,puVar9,6);
  if (((ulong)puVar6 & 1) == 0) {
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    local_c8 = 0;
    uStack_d0 = 0;
  }
  else if (local_c8 != 0) goto LAB_10006cf48;
  FUN_100005808(&local_e0,&DAT_100fa9870,&DAT_100c26e48);
  lVar2 = lVar11;
  goto joined_r0x00010006ce78;
LAB_10006cf48:
  FUN_100076508(&local_e0,local_b0);
  puVar9 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar8;
  if (((ulong)puVar9 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_10008924c(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
  }
  uVar1 = *(ulong *)(puVar7 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_10008924c(puVar8,uVar1 + 1,1,puVar7);
  }
  *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
  FUN_100076508(local_b0,puVar8 + uVar1 * 0x28 + 0x20);
  goto LAB_10006ce6c;
}



/* Address: 0x10006d0a0 | FUN_10006d0a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10006d0a0(undefined8 param_1,double param_2)

{
  undefined4 uVar1;
  long lVar2;
  ID IVar3;
  undefined4 uVar4;
  long unaff_x20;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 local_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  FUN_10006db74();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"layout");
  FUN_10022b18c();
  uVar4 = 2;
  if (param_2 < 200.0) {
    uVar4 = 3;
  }
  if (240.0 <= param_2) {
    uVar4 = 1;
  }
  uVar1 = 0;
  if (param_2 < 280.0) {
    uVar1 = uVar4;
  }
  FUN_10006cc94();
  FUN_10020bc00(uVar1);
  _swift_release(IVar3);
  FUN_100066728();
  FUN_10022b18c();
  FUN_1003f81d4(param_2);
  lVar2 = _TtC5Paste18ItemCollectionView::___lazy_storage___sidecarView;
  dVar5 = (double)FUN_1003f8c64(*(undefined8 *)
                                 (unaff_x20 +
                                 _TtC5Paste18ItemCollectionView::___lazy_storage___sidecarView));
  objc_stub::setFrame_(*(ID *)(unaff_x20 + lVar2),ZEXT816(0),0x4038000000000000,dVar5,param_2);
  local_70 = dVar5 + 24.0;
  local_78 = 0x4020000000000000;
  auVar6 = NEON_fmov(0x4038000000000000,8);
  uStack_60 = auVar6._8_8_;
  local_68 = auVar6._0_8_;
  local_58 = 0x4038000000000000;
  FUN_10022ce5c(&local_78);
  return;
}



/* Address: 0x10006d1e4 | _TtC5Paste18ItemCollectionView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste18ItemCollectionView::layout(ID param_1,SEL param_2)

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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x1a8,UVar4.unknown,puVar3);
  }
  FUN_10006d0a0(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10006d2a4 | FUN_10006d2a4 */

void FUN_10006d2a4(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000015,0x8000000100d8ecb0,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x10006d2ec | FUN_10006d2ec */

void FUN_10006d2ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnyCancellable *this;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_c0;
  undefined *local_b8 [3];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fa9850;
  FUN_1000037f0(&DAT_100fa9850,&DAT_100c26e28);
  local_c0 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::_isLinkPreviewsEnabled);
  uVar8 = puVar1[1];
  uVar6 = *puVar1;
  uStack_88 = puVar1[3];
  uVar9 = puVar1[2];
  uStack_78 = puVar1[5];
  uVar7 = puVar1[4];
  uVar5 = puVar1[6];
  local_a0 = uVar6;
  uStack_98 = uVar8;
  local_90 = uVar9;
  local_80 = uVar7;
  local_70 = uVar5;
  _swift_retain(uVar6);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  puVar4 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar8);
  _swift_release(uVar6);
  local_b8[0] = puVar4;
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_100016eac(&DAT_100faa8e0,&DAT_100fa7ab0,&DAT_100c26e30,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  _swift_release(puVar4);
  puVar4 = &DAT_100eb2730;
  _swift_allocObject(&DAT_100eb2730,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  FUN_100016eac(&DAT_100fa9858,&DAT_100fa9850,&DAT_100c26e28,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (**(code **)(local_c0 + 8))((long)local_b8 + (-8 - extraout_x8),puVar3);
  lVar2 = _TtC5Paste18ItemCollectionView::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC5Paste18ItemCollectionView::cancellables,local_b8,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar2));
  _swift_endAccess(local_b8);
  _swift_release(this);
  return;
}



/* Address: 0x10006d52c | FUN_10006d52c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_10006d52c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong *puVar6;
  
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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x1c2,UVar4.unknown,puVar3);
  }
  puVar6 = (ulong *)(param_2 + 0x10);
  _swift_unknownObjectWeakLoadStrong();
  if (puVar6 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x278))();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x10006d620 | FUN_10006d620 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006d620(void)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined8 uVar8;
  MainActor *pMVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  MainActor *pMVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_78 [24];
  
  lVar12 = _TtC7PasteUI14CollectionView::visibleCells;
  _swift_beginAccess(unaff_x20 + _TtC7PasteUI14CollectionView::visibleCells,auStack_78,0,0);
  lVar12 = *(long *)(unaff_x20 + lVar12);
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar17 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *puVar14;
  _swift_bridgeObjectRetain_n(lVar12,2);
  lVar15 = 0;
  lVar16 = lVar15;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar15 << 6;
      lVar16 = *(long *)(*(long *)(lVar12 + 0x30) + uVar10 * 8);
      pMVar13 = *(MainActor **)(*(long *)(lVar12 + 0x38) + uVar10 * 0x10);
      pMVar4 = Swift::MainActor::typeMetadataAccessor();
      pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar13);
      puVar5 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x1c8,UVar6.unknown,puVar5);
      }
      uVar8 = 0;
      FUN_1003d9138(0);
      _swift_dynamicCastClass(pMVar13,uVar8);
      if (pMVar13 != (MainActor *)0x0) {
        pMVar9 = pMVar13;
        FUN_100074bac();
        uVar10 = *(ulong *)(pMVar9 + 0x10);
        _swift_bridgeObjectRelease();
        lVar1 = 0;
        if (lVar16 < (long)uVar10) {
          lVar1 = lVar16 + 1;
        }
        (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *(ulong *)pMVar13) + 0x210))
                  (lVar1,(long)uVar10 <= lVar16);
      }
      _swift_release(pMVar4);
      lVar16 = lVar15;
    }
    bVar3 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar3) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar15) {
      _swift_bridgeObjectRelease(lVar12);
      FUN_10000c650(lVar12,puVar14,~uVar11,lVar16,0);
      return;
    }
    uVar17 = puVar14[lVar15];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006d828);
  (*pcVar2)();
}



/* Address: 0x10006d828 | _TtC5Paste18ItemCollectionView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste18ItemCollectionView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("Paste/ItemCollectionView.swift",0x1e,1,0x12,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.ItemCollectionView",0x18,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006d8d0);
  (*pcVar2)();
}



/* Address: 0x10006d8d0 | FUN_10006d8d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006d8d0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel));
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::onSelectList),
                ((undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::onSelectList))[1]);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingFocus);
  FUN_100076498(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::pendingHandoffSelection);
  FUN_1000764c8(*puVar1,puVar1[1],puVar1[2]);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC5Paste18ItemCollectionView::pendingNeighborSelectionID + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::activeSelection));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::feedbackManager));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::cancellables));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC5Paste18ItemCollectionView::___lazy_storage___sizeClassTransitionManager));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::_isLinkPreviewsEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10006da08 | FUN_10006da08 */

void FUN_10006da08(void)

{
  FUN_10006db74();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10006da38 | _TtC5Paste18ItemCollectionView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste18ItemCollectionView::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  FUN_100004550(*(undefined8 *)(param_1 + onSelectList),((undefined8 *)(param_1 + onSelectList))[1])
  ;
  _swift_release(*(undefined8 *)(param_1 + applier));
  puVar1 = (undefined8 *)(param_1 + pendingFocus);
  FUN_100076498(*puVar1,puVar1[1],puVar1[2],puVar1[3],*(undefined1 *)(puVar1 + 4));
  puVar1 = (undefined8 *)(param_1 + pendingHandoffSelection);
  FUN_1000764c8(*puVar1,puVar1[1],puVar1[2]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + pendingNeighborSelectionID + 8));
  _swift_release(*(undefined8 *)(param_1 + activeSelection));
  _swift_release(*(undefined8 *)(param_1 + feedbackManager));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  _swift_release(*(undefined8 *)(param_1 + ___lazy_storage___sizeClassTransitionManager));
  puVar1 = (undefined8 *)(param_1 + _isLinkPreviewsEnabled);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[4];
  _swift_release(puVar1[6]);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10006db74 | FUN_10006db74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10006db74(void)

{
  return ZEXT816(0x100f91308);
}



/* Address: 0x10006db94 | FUN_10006db94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10006db94(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  return 0;
}



/* Address: 0x10006dbbc | FUN_10006dbbc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10006dbbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10006dc0c | FUN_10006dc0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10006dc0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  return param_1;
}


