/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100384aac | FUN_100384aac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100384aac(void)

{
  QoSClass QVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  undefined *puVar8;
  void *aBlock;
  DispatchQoS DVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long extraout_x8_00;
  DispatchWorkItemFlags qos;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar14;
  long extraout_x12;
  long lVar15;
  undefined8 unaff_x20;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  code *local_e0;
  OS_dispatch_queue *local_d8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  long lVar4;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  qos.unknown = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,QVar1.value);
  lVar22 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar15 = (long)qos.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar15 - extraout_x8_02;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar6.unknown + -8);
  lVar23 = *(long *)(lVar20 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar17 - (lVar23 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar19 - extraout_x12;
  FUN_100384824(lVar17);
  lVar7 = lVar17;
  (**(code **)(lVar20 + 0x30))(lVar17,1,UVar6.unknown);
  if ((int)lVar7 == 1) {
    FUN_100005808(lVar17,&DAT_100fc1a40,&DAT_100c40660);
  }
  else {
    local_e0 = *(code **)(lVar20 + 0x20);
    (*local_e0)(lVar21,lVar17,UVar6.unknown);
    FUN_1003855b8(0);
    (**(code **)(lVar22 + 0x68))
              (lVar15,*(undefined4 *)
                       PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_background_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae688
               ,lVar4);
    local_d8 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)lVar15);
    (**(code **)(lVar22 + 8))(lVar15,lVar4);
    puVar5 = &DAT_100ecd8f0;
    _swift_allocObject(&DAT_100ecd8f0,0x18,7);
    _swift_weakInit(puVar5 + 0x10,unaff_x20);
    (**(code **)(lVar20 + 0x10))(lVar19,lVar21,UVar6.unknown);
    uVar14 = (ulong)*(byte *)(lVar20 + 0x50);
    uVar16 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
    uVar18 = lVar23 + uVar16 + 7 & 0xfffffffffffffff8;
    puVar8 = &DAT_100ecd918;
    _swift_allocObject(&DAT_100ecd918,uVar18 + 8,uVar14 | 7);
    (*local_e0)(puVar8 + uVar16,lVar19,UVar6.unknown);
    *(undefined **)(puVar8 + uVar18) = puVar5;
    local_70 = FUN_10038568c;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100ecd930;
    local_68 = puVar8;
    aBlock = __Block_copy(&local_90);
    DVar9.unknown = puVar5;
    _swift_retain();
    DVar9 = Dispatch::DispatchQoS::get_unspecified(DVar9);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10030ce20();
    puVar8 = &DAT_100fbea18;
    FUN_1000037f0(&DAT_100fbea18,&DAT_100c43ca0);
    puVar10 = puVar8;
    FUN_1003856e8();
    Swift::SetAlgebra::_init(lVar12,&local_98,puVar8,puVar10,DVar2.unknown,DVar9.unknown);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(lVar12,DVar2.unknown);
    (**(code **)(lVar13 + 8))(qos.unknown,DVar3.unknown);
    (**(code **)(lVar20 + 8))(lVar21,UVar6.unknown);
    puVar8 = local_68;
    _swift_release(puVar5);
    _swift_release(puVar8);
  }
  return;
}



/* Address: 0x100384e6c | FUN_100384e6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100385130) */

void FUN_100384e6c(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  Date DVar5;
  Date DVar6;
  URL UVar7;
  NSURL *pNVar8;
  ID IVar9;
  URLResourceValues forKeys;
  _StringGuts _Var10;
  Date DVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_180 [8];
  long local_178;
  undefined *local_170;
  Date local_168;
  code *local_160;
  Date local_158;
  long local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_130;
  ulong local_128;
  long local_120;
  long local_118;
  undefined1 *local_110;
  ID local_108;
  undefined *local_100;
  char local_f8 [24];
  undefined1 auStack_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [40];
  undefined8 local_98 [3];
  undefined *local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_178 = param_2;
  local_148 = (undefined *)Foundation::URLResourceValues::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_150 + 0x40));
  puVar16 = &DAT_100fbe6e8;
  local_110 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)(auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar20 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar21 = lVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_118 = lVar21 - extraout_x12;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar16 = (undefined *)((lVar21 - extraout_x12) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar6 = Foundation::Date::init();
  local_158.unknown = (undefined *)(lVar14 - extraout_x12_01);
  Foundation::Date::addingTimeInterval(-86400.0,DVar6);
  local_160 = *(code **)(lVar18 + 8);
  local_120 = lVar18;
  (*local_160)(lVar14,DVar5.unknown);
  local_170 = &_OBJC_CLASS___NSFileManager;
  UVar7.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
  local_98[0] = 0;
  puVar13 = (undefined8 *)0x0;
  IVar9 = NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    ((ID)UVar7.unknown,pNVar8,0,0,local_98);
  local_100 = DVar5.unknown;
  if (IVar9 == 0) {
    uVar19 = local_98[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
LAB_1003853d8:
    lVar14 = local_178 + 0x10;
    _swift_weakLoadStrong();
    if (lVar14 == 0) {
      (*local_160)(local_158.unknown,local_100);
      _swift_errorRelease(uVar19);
    }
    else {
      uVar15 = *(undefined8 *)(lVar14 + 0x10);
      _swift_retain(uVar15);
      _swift_release(lVar14);
      FUN_1000d468c(local_98);
      _swift_release(uVar15);
      _Var10.unknown = local_80;
      FUN_100004640(local_98);
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x2f,_Var10);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = 0xd00000000000002d;
      local_d0 = 0x8000000100da3d60;
      pcVar12 = local_f8;
      _swift_getErrorValue(uVar19,auStack_e0);
      SVar23 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar24.bridgeObject = puVar13;
      SVar24.str = pcVar12;
      Swift::String::append(SVar23,SVar24);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      uVar15 = local_d0;
      FUN_1000d4e0c(local_d8,local_d0,local_80,uStack_78);
      _swift_bridgeObjectRelease(uVar15);
      _swift_errorRelease(uVar19);
      (*local_160)(local_158.unknown,local_100);
      FUN_100004594(local_98);
    }
  }
  else {
    local_168.unknown = puVar16;
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    local_128 = *(ulong *)(IVar9 + 0x10);
    local_108 = IVar9;
    if (local_128 != 0) {
      uVar17 = 0;
      uVar19 = *(undefined8 *)PTR__NSURLCreationDateKey_100ea9ad8;
      local_130 = IVar9 + ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
      uStack_138 = 2;
      local_140 = 1;
      do {
        lVar14 = local_118;
        if (*(ulong *)(local_108 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100385594);
          (*pcVar2)();
        }
        (**(code **)(lVar20 + 0x10))
                  (local_118,local_130 + *(long *)(lVar20 + 0x48) * uVar17,UVar4.unknown);
        (**(code **)(lVar20 + 0x20))(lVar21,lVar14,UVar4.unknown);
        puVar16 = &DAT_100fbf508;
        FUN_1000037f0(&DAT_100fbf508,&DAT_100c40b90);
        UVar7.unknown = auStack_c0;
        _swift_initStackObject();
        *(undefined8 *)(puVar16 + 0x18) = uStack_138;
        *(undefined8 *)(puVar16 + 0x10) = local_140;
        *(undefined8 *)(puVar16 + 0x20) = uVar19;
        forKeys.unknown = puVar16;
        FUN_1002fca9c();
        _swift_setDeallocating(puVar16);
        FUN_100313308(puVar16 + 0x20);
        puVar1 = local_110;
        Foundation::URL::_resourceValues((Set<NSURLResourceKey>)forKeys.unknown,UVar7);
        _swift_bridgeObjectRelease();
        Foundation::URLResourceValues::_get_creationDate(forKeys);
        (**(code **)(local_150 + 8))(puVar1,local_148);
        DVar5.unknown = local_100;
        lVar14 = local_120;
        lVar18 = lVar22;
        (**(code **)(local_120 + 0x30))(lVar22,1,local_100);
        DVar6.unknown = local_168.unknown;
        if ((int)lVar18 == 1) {
          (**(code **)(lVar20 + 8))(lVar21,UVar4.unknown);
          FUN_100005808(lVar22,&DAT_100fbe6e8,&DAT_100c43250);
        }
        else {
          DVar11.unknown = DVar5.unknown;
          (**(code **)(lVar14 + 0x20))(local_168.unknown,lVar22);
          bVar3 = Foundation::Date::<_infix(DVar6,local_158,DVar11);
          if (bVar3) {
            UVar7.unknown = (undefined *)objc_stub::defaultManager(local_170);
            pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar7);
            local_98[0] = 0;
            puVar13 = local_98;
            IVar9 = objc_stub::removeItemAtURL_error_((ID)UVar7.unknown,pNVar8);
            DVar6.unknown = local_168.unknown;
            DVar5.unknown = local_100;
            if ((int)IVar9 == 0) {
              uVar19 = local_98[0];
              Foundation::__convertNSErrorToError();
              _swift_willThrow(0);
              _swift_bridgeObjectRelease(local_108);
              (*local_160)(local_168.unknown,local_100);
              (**(code **)(lVar20 + 8))(lVar21,UVar4.unknown);
              goto LAB_1003853d8;
            }
          }
          (*local_160)(DVar6.unknown,DVar5.unknown);
          (**(code **)(lVar20 + 8))(lVar21,UVar4.unknown);
        }
        uVar17 = uVar17 + 1;
      } while (local_128 != uVar17);
    }
    _swift_bridgeObjectRelease(local_108);
    (*local_160)(local_158.unknown,DVar5.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100385598 | FUN_100385598 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100385598(void)

{
  return ZEXT816(0x100fc1de0);
}



/* Address: 0x1003855b8 | FUN_1003855b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003855b8(void)

{
  undefined *puVar1;
  
  if (DAT_100fbea08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fbea08 = puVar1;
  return;
}



/* Address: 0x1003855fc | FUN_1003855fc */

void FUN_1003855fc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100385620 | FUN_100385620 */

void FUN_100385620(void)

{
  URL UVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,UVar1.unknown);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10038568c | FUN_10038568c */

void FUN_10038568c(void)

{
  URL UVar1;
  ulong uVar2;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  FUN_100384e6c(unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(UVar1.unknown + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8))
               );
  return;
}



/* Address: 0x1003856cc | FUN_1003856cc */

void FUN_1003856cc(long param_1,long param_2)

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



/* Address: 0x1003856e0 | FUN_1003856e0 */

void FUN_1003856e0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003856e8 | FUN_1003856e8 */

void FUN_1003856e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbea20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbea18;
  FUN_100005c24(&DAT_100fbea18,&DAT_100c43ca0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fbea20 = puVar2;
  return;
}



/* Address: 0x100385738 | FUN_100385738 */

undefined8 * FUN_100385738(void)

{
  if (DAT_100fc1e40 != -1) {
    _swift_once(&DAT_100fc1e40,FUN_1003857fc);
  }
  return &DAT_1010579c0;
}



/* Address: 0x100385778 | FUN_100385778 */

undefined * FUN_100385778(void)

{
  return &DAT_100ecd958;
}



/* Address: 0x100385784 | FUN_100385784 */

undefined * FUN_100385784(void)

{
  return &DAT_100ecd988;
}



/* Address: 0x100385790 | FUN_100385790 */

undefined * FUN_100385790(void)

{
  return &DAT_100ecd968;
}



/* Address: 0x10038579c | FUN_10038579c */

undefined1  [16] FUN_10038579c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da1950;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Address: 0x1003857b8 | FUN_1003857b8 */

undefined * FUN_1003857b8(void)

{
  return &DAT_100ecd978;
}



/* Address: 0x1003857c4 | FUN_1003857c4 */

undefined1  [16] FUN_1003857c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da1980;
  auVar1._0_8_ = 0xd00000000000001e;
  return auVar1;
}



/* Address: 0x1003857e0 | FUN_1003857e0 */

undefined1  [16] FUN_1003857e0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da3ce0;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x1003857fc | FUN_1003857fc */

void FUN_1003857fc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  DAT_1010579c0 = puVar1;
  return;
}



/* Address: 0x100385834 | FUN_100385834 */

void FUN_100385834(void)

{
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100385860 | FUN_100385860 */

undefined1  [16] FUN_100385860(void)

{
  return ZEXT816(0x100ecd9a8);
}



/* Address: 0x100385870 | FUN_100385870 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long FUN_100385870(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  void *aBlock;
  ID IVar2;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  _swift_allocObject();
  puVar1 = &DAT_100ecd9c8;
  _swift_allocObject(&DAT_100ecd9c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  local_60 = FUN_1000386a0;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100136224;
  puStack_68 = &DAT_100ecd9e0;
  local_58 = puVar1;
  aBlock = __Block_copy(&local_80);
  puVar1 = local_58;
  _swift_retain(param_4);
  _swift_release(puVar1);
  IVar2 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,param_1,(ulong)(param_2 & 1),aBlock);
  _swift_release(param_4);
  __Block_release(aBlock);
  *(ID *)(unaff_x20 + 0x10) = IVar2;
  return unaff_x20;
}



/* Address: 0x100385984 | FUN_100385984 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100385984(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  void *aBlock;
  ID IVar2;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  puVar1 = &DAT_100ecda18;
  _swift_allocObject(&DAT_100ecda18,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  local_60 = thunk_FUN_1000386a0;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100136224;
  puStack_68 = &DAT_100ecda30;
  local_58 = puVar1;
  aBlock = __Block_copy(&local_80);
  puVar1 = local_58;
  _swift_retain(param_4);
  _swift_release(puVar1);
  IVar2 = objc_stub::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,param_1,(ulong)(param_2 & 1),aBlock);
  _swift_release(param_4);
  __Block_release(aBlock);
  *(ID *)(unaff_x20 + 0x10) = IVar2;
  return;
}



/* Address: 0x100385a84 | FUN_100385a84 */

void FUN_100385a84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100385aa8 | FUN_100385aa8 */

void FUN_100385aa8(long param_1,long param_2)

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



/* Address: 0x100385abc | FUN_100385abc */

void FUN_100385abc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100385ac4 | FUN_100385ac4 */

void FUN_100385ac4(void)

{
  long unaff_x20;
  
  objc_stub::invalidate(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100385acc | FUN_100385acc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100385acc(void)

{
  long unaff_x20;
  
  objc_stub::invalidate(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100385af0 | FUN_100385af0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100385af0(void)

{
  long unaff_x20;
  
  objc_stub::invalidate(*(ID *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100385b1c | FUN_100385b1c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100385b1c(void)

{
  return ZEXT816(0x100fc1ee0);
}



/* Address: 0x100385b3c | thunk_FUN_100385a84 */

void thunk_FUN_100385a84(void)

{
  FUN_100385a84();
  return;
}



/* Address: 0x100385b40 | thunk_FUN_100385aa8 */

void thunk_FUN_100385aa8(void)

{
  FUN_100385aa8();
  return;
}



/* Address: 0x100385b44 | thunk_FUN_100385abc */

void thunk_FUN_100385abc(void)

{
  FUN_100385abc();
  return;
}



/* Address: 0x100385b48 | FUN_100385b48 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100385b48(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100385b74 | FUN_100385b74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100385b74(void)

{
  return ZEXT816(0x100fc1f88);
}



/* Address: 0x100385b94 | FUN_100385b94 */

void FUN_100385b94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100385c20(param_2);
    _swift_beginAccess(param_4 + 0x10,auStack_58,0x21,0);
    FUN_10038666c(param_3,param_4 + 0x10);
    _swift_endAccess(auStack_58);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100385c20 | FUN_100385c20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100385c20(_ArrayBuffer param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined **ppuVar9;
  CKRecord *pCVar10;
  undefined **self;
  CKRecord *pCVar11;
  ID IVar12;
  ID self_00;
  char *pcVar13;
  void *pvVar15;
  void *pvVar16;
  long unaff_x20;
  CKRecord *pCVar17;
  CKRecord *pCVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  long local_1f8;
  long local_198;
  undefined *local_110 [3];
  char *local_f8;
  void *pvStack_f0;
  _StringGuts _Var14;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    pCVar17 = *(CKRecord **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    pCVar17 = (CKRecord *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pCVar17 != (CKRecord *)0x0) {
    if ((long)pCVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10038666c);
      (*pcVar3)();
    }
    local_1f8 = 0;
    pCVar18 = (CKRecord *)0x0;
    pcVar2 = *(char **)(unaff_x20 + 0x18);
    local_198 = 0;
    do {
      pvVar15 = (void *)0xee0065726168732e;
      SVar21.bridgeObject = (void *)0xee0065726168732e;
      SVar21.str = (char *)0x74696b64756f6c63;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        pCVar11 = *(CKRecord **)(param_1.unknown + (long)pCVar18 * 8 + 0x20);
      }
      else {
        pCVar11 = pCVar18;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pCVar18,param_1);
      }
      SVar19 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar11);
      _Var14.unknown = SVar19.bridgeObject;
      if (SVar19 == SVar21) {
        _swift_bridgeObjectRelease(_Var14.unknown);
        pvVar15 = param_4;
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar19.str,_Var14,(_StringComparisonResult)0x63);
        _swift_bridgeObjectRelease(_Var14.unknown);
        if (!bVar4) {
          FUN_10038fef4();
          IVar12 = objc_stub::recordID((ID)pCVar11);
          objc_stub::recordName(IVar12);
          SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          IVar12 = objc_stub::zoneID(IVar12);
          puVar5 = &DAT_100fbef68;
          FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
          _swift_initStackObject();
          *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000012;
          *(undefined8 *)(puVar5 + 0x18) = 6;
          *(undefined8 *)(puVar5 + 0x10) = 3;
          *(undefined8 *)(puVar5 + 0x28) = 0x8000000100da2b30;
          *(String *)(puVar5 + 0x30) = SVar21;
          *(undefined8 *)(puVar5 + 0x40) = 0xd000000000000010;
          *(undefined8 *)(puVar5 + 0x48) = 0x8000000100da2b50;
          _swift_bridgeObjectRetain(SVar21.bridgeObject);
          objc_stub::zoneName(IVar12);
          SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar5 + 0x50) = SVar19;
          *(undefined8 *)(puVar5 + 0x60) = 0xd000000000000015;
          *(undefined8 *)(puVar5 + 0x68) = 0x8000000100da2b70;
          objc_stub::ownerName(IVar12);
          SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar5 + 0x70) = SVar19;
          puVar6 = puVar5;
          FUN_1003c92b8();
          _swift_setDeallocating(puVar5);
          puVar7 = &DAT_100fbef70;
          FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
          _swift_arrayDestroy(puVar5 + 0x20,3,puVar7);
          pcVar8 = &DAT_100fbef78;
          FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
          ppuVar9 = local_110;
          pcVar13 = pcVar2;
          local_110[0] = puVar6;
          local_f8 = pcVar8;
          FUN_100328974(ppuVar9,0);
          _swift_bridgeObjectRelease(SVar21.bridgeObject);
          FUN_100004594(local_110);
          if (ppuVar9 == (undefined **)0x0) {
            bVar4 = SCARRY8(local_1f8,1);
            local_1f8 = local_1f8 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10038664c);
              (*pcVar3)();
            }
          }
          else {
            FUN_1000d468c(local_110);
            pvVar16 = pvStack_f0;
            pcVar8 = local_f8;
            _Var14.unknown = local_f8;
            FUN_100004640(local_110);
            Swift::_StringGuts::grow(0x20,_Var14);
            pCVar10 = (CKRecord *)0xe000000000000000;
            _swift_bridgeObjectRelease();
            SVar21 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar10);
            SVar24.bridgeObject = pvVar15;
            SVar24.str = pcVar13;
            Swift::String::append(SVar21,SVar24);
            _swift_bridgeObjectRelease(SVar21.bridgeObject);
            SVar19.bridgeObject = (void *)0xe100000000000000;
            SVar19.str = (char *)0x2f;
            SVar25.bridgeObject = pvVar15;
            SVar25.str = pcVar13;
            Swift::String::append(SVar19,SVar25);
            IVar12 = objc_stub::recordID((ID)pCVar11);
            objc_stub::recordName(IVar12);
            SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            SVar26.bridgeObject = pvVar15;
            SVar26.str = pcVar13;
            Swift::String::append(SVar21,SVar26);
            _swift_bridgeObjectRelease(SVar21.bridgeObject);
            SVar20.bridgeObject = &DAT_e500000000000000;
            SVar20.str = (char *)0x3d69727520;
            SVar27.bridgeObject = pvVar15;
            SVar27.str = pcVar13;
            Swift::String::append(SVar20,SVar27);
            objc_stub::FUN_100c07540((ID)ppuVar9);
            SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            SVar28.bridgeObject = pvVar15;
            SVar28.str = pcVar13;
            Swift::String::append(SVar21,SVar28);
            _swift_bridgeObjectRelease(SVar21.bridgeObject);
            FUN_1000d4db8(0xd000000000000014,0x8000000100da4000,pcVar8);
            _swift_bridgeObjectRelease(0x8000000100da4000);
            self = local_110;
            FUN_100004594();
            FUN_10038f124();
            if (self != (undefined **)0x0) {
              IVar12 = objc_stub::managedObjectContext((ID)self);
              objc_stub::deleteObject_(IVar12,self);
            }
            IVar12 = objc_stub::managedObjectContext((ID)ppuVar9);
            objc_stub::deleteObject_(IVar12,ppuVar9);
            bVar4 = SCARRY8(local_198,1);
            local_198 = local_198 + 1;
            pvVar15 = pvVar16;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100386648);
              (*pcVar3)();
            }
          }
        }
      }
      pCVar18 = pCVar18 + 1;
      param_4 = pvVar15;
    } while (pCVar17 != pCVar18);
    pCVar18 = (CKRecord *)0x0;
    do {
      pcVar8 = (char *)0x74696b64756f6c63;
      pvVar16 = (void *)0xee0065726168732e;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        pCVar11 = *(CKRecord **)(param_1.unknown + (long)pCVar18 * 8 + 0x20);
      }
      else {
        pCVar11 = pCVar18;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pCVar18,param_1);
      }
      SVar21 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar11);
      _Var14.unknown = SVar21.bridgeObject;
      if ((SVar21.str == (undefined *)0x74696b64756f6c63) &&
         (_Var14.unknown == (undefined *)0xee0065726168732e)) {
        _swift_bridgeObjectRelease(0xee0065726168732e);
        pvVar16 = pvVar15;
LAB_100386260:
        FUN_100394ee8(0);
        IVar12 = objc_stub::recordID((ID)pCVar11);
        puVar5 = &DAT_100fbef68;
        FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
        _swift_initStackObject();
        *(undefined8 *)(puVar5 + 0x18) = 4;
        *(undefined8 *)(puVar5 + 0x10) = 2;
        *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000010;
        *(undefined8 *)(puVar5 + 0x28) = 0x8000000100da2ca0;
        self_00 = objc_stub::zoneID(IVar12);
        objc_stub::ownerName(self_00);
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar5 + 0x30) = SVar21;
        *(undefined8 *)(puVar5 + 0x40) = 0x6365526572616873;
        *(undefined8 *)(puVar5 + 0x48) = 0xef656d614e64726f;
        objc_stub::recordName(IVar12);
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar5 + 0x50) = SVar21;
        puVar6 = puVar5;
        FUN_1003c92b8();
        _swift_setDeallocating(puVar5);
        puVar7 = &DAT_100fbef70;
        FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
        _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
        pcVar13 = &DAT_100fbef78;
        FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
        ppuVar9 = local_110;
        pcVar8 = pcVar2;
        local_110[0] = puVar6;
        local_f8 = pcVar13;
        FUN_100328ba8(ppuVar9,0);
        FUN_100004594(local_110);
        pvVar15 = pvVar16;
        if (ppuVar9 != (undefined **)0x0) {
          IVar12 = objc_stub::managedObjectContext((ID)ppuVar9);
          objc_stub::deleteObject_(IVar12);
          FUN_1000d468c(local_110,0);
          pvVar15 = pvStack_f0;
          pcVar8 = local_f8;
          _Var14.unknown = local_f8;
          FUN_100004640(local_110);
          Swift::_StringGuts::grow(0x1c,_Var14);
          _swift_bridgeObjectRelease(0xe000000000000000);
          IVar12 = objc_stub::recordID((ID)pCVar11);
          objc_stub::recordName(IVar12);
          SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar29.bridgeObject = pvVar16;
          SVar29.str = (char *)ppuVar9;
          Swift::String::append(SVar21,SVar29);
          _swift_bridgeObjectRelease(SVar21.bridgeObject);
          FUN_1000d4db8(0xd00000000000001a,0x8000000100da4020);
          _swift_bridgeObjectRelease(0x8000000100da4020);
          FUN_100004594(local_110);
          bVar4 = SCARRY8(local_198,1);
          local_198 = local_198 + 1;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100386644);
            (*pcVar3)();
          }
        }
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar21.str,_Var14,(_StringComparisonResult)0x63);
        _swift_bridgeObjectRelease(_Var14.unknown);
        pvVar15 = pvVar16;
        if (bVar4) goto LAB_100386260;
      }
      pCVar18 = pCVar18 + 1;
    } while (pCVar17 != pCVar18);
    if (0 < local_1f8) {
      FUN_1000d468c(local_110);
      pcVar2 = local_f8;
      _Var14.unknown = local_f8;
      FUN_100004640(local_110);
      Swift::_StringGuts::grow(0x2a,_Var14);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar21 = Swift::CustomStringConvertible::get_description();
      SVar30.bridgeObject = pvVar15;
      SVar30.str = pcVar8;
      Swift::String::append(SVar21,SVar30);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar22.bridgeObject = (void *)0xea0000000000202c;
      SVar22.str = (char *)0x6465696c70706120;
      SVar31.bridgeObject = pvVar15;
      SVar31.str = pcVar8;
      Swift::String::append(SVar22,SVar31);
      SVar21 = Swift::CustomStringConvertible::get_description();
      SVar32.bridgeObject = pvVar15;
      SVar32.str = pcVar8;
      Swift::String::append(SVar21,SVar32);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      SVar23.bridgeObject = &DAT_e800000000000000;
      SVar23.str = (char *)0x64657070696b7320;
      SVar33.bridgeObject = pvVar15;
      SVar33.str = pcVar8;
      Swift::String::append(SVar23,SVar33);
      FUN_1000d4db8(0xd000000000000014,0x8000000100da4000,pcVar2,pvStack_f0);
      _swift_bridgeObjectRelease(0x8000000100da4000);
      FUN_100004594(local_110);
    }
  }
  return;
}



/* Address: 0x10038666c | FUN_10038666c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10038666c(_ArrayBuffer param_1,ulong *param_2,CKRecord *param_3,CKRecord *param_4)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  CKRecord *self;
  String SVar3;
  void *pvVar4;
  undefined1 *puVar5;
  long lVar6;
  bool bVar7;
  CKRecord *pCVar8;
  CKRecord *pCVar9;
  CKRecord *pCVar10;
  Data DVar11;
  NSData *pNVar12;
  undefined *puVar13;
  CKRecord *pCVar14;
  undefined *puVar15;
  Date DVar16;
  undefined1 *puVar17;
  char *pcVar18;
  Set<undefined> SVar19;
  CKRecord *pCVar20;
  long *plVar21;
  CKRecord *pCVar22;
  CKRecord *pCVar23;
  ID IVar24;
  uint uVar25;
  undefined8 extraout_x1;
  undefined8 uVar27;
  Date DVar28;
  long extraout_x8;
  long lVar29;
  long extraout_x8_00;
  ulong uVar30;
  undefined *puVar31;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  code *pcVar32;
  long lVar33;
  char *pcVar34;
  code *pcVar35;
  CKRecord *pCVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
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
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  undefined1 auStack_170 [8];
  long *local_168;
  void *local_160;
  CKRecord *local_158;
  CKRecord *local_150;
  CKRecord *local_148;
  Date local_140;
  undefined8 local_138;
  undefined1 *local_130;
  long local_128;
  undefined *local_120;
  undefined8 local_118;
  long local_110;
  Date local_108;
  long local_100;
  undefined *local_f8;
  char *local_f0;
  char *local_e8;
  CKRecord *local_e0;
  ulong *local_d8;
  long local_90 [3];
  CKRecord *local_78;
  CKRecord *local_70;
  _StringGuts _Var26;
  
  puVar31 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar31 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar33 = (long)(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar31 = (undefined *)(lVar33 - extraout_x12_00);
  local_120 = puVar31;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar29 = (long)puVar31 - extraout_x12_01;
  local_128 = lVar29;
  local_f8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_100 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  puVar31 = (undefined *)(lVar29 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_108.unknown = puVar31 + -extraout_x12_02;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    pCVar8 = *(CKRecord **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    pCVar8 = (CKRecord *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pCVar8 != (CKRecord *)0x0) {
    if ((long)pCVar8 < 1) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x1003878c0);
      (*pcVar32)();
    }
    pCVar36 = (CKRecord *)0x0;
    self = *(CKRecord **)(unaff_x20 + 0x18);
    local_138 = 0x8000000100da3e90;
    local_118 = 0x8000000100da3eb0;
    local_160 = (void *)0x8000000100da3ed0;
    local_f0 = "[SYNC:FETCH] ERROR ";
    local_e8 = "[SYNC:FETCH] share/";
    local_140.unknown = puVar31;
    local_130 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_110 = lVar33;
    local_d8 = param_2;
    do {
      pCVar10 = (CKRecord *)0x74696b64756f6c63;
      pCVar22 = (CKRecord *)0xee0065726168732e;
      SVar51.bridgeObject = (void *)0xee0065726168732e;
      SVar51.str = (char *)0x74696b64756f6c63;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        pCVar9 = *(CKRecord **)(param_1.unknown + (long)pCVar36 * 8 + 0x20);
      }
      else {
        pCVar9 = pCVar36;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pCVar36,param_1);
      }
      SVar37 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar9);
      _Var26.unknown = SVar37.bridgeObject;
      if (SVar37 == SVar51) {
        _swift_bridgeObjectRelease(_Var26.unknown);
        pCVar22 = param_4;
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar37.str,_Var26,(_StringComparisonResult)0x63);
        _swift_bridgeObjectRelease(_Var26.unknown);
        param_3 = pCVar10;
        if ((!bVar7) &&
           (pCVar23 = pCVar9, FUN_1003878c0(pCVar9,param_2), param_3 = pCVar10,
           ((ulong)pCVar23 & 1) != 0)) {
          FUN_10038fef4(0);
          IVar24 = objc_stub::recordID((ID)pCVar9);
          objc_stub::recordName(IVar24);
          SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pcVar18 = SVar51.str;
          pCVar23 = (CKRecord *)objc_stub::zoneID(IVar24);
          pCVar20 = self;
          FUN_1003905c0(pcVar18,SVar51.bridgeObject);
          _swift_bridgeObjectRelease(SVar51.bridgeObject);
          pCVar22 = pCVar9;
          FUN_10038f400(pCVar9,self);
          pCVar10 = pCVar22;
          if (pCVar22 == (CKRecord *)0x0) {
LAB_100386e14:
            FUN_1000d468c(local_90);
            pCVar22 = local_70;
            param_3 = local_78;
            pCVar14 = (CKRecord *)local_90;
            _Var26.unknown = local_78;
            FUN_100004640();
            local_e0 = pCVar14;
            Swift::_StringGuts::grow(0x34,_Var26);
            SVar40.bridgeObject = (void *)((ulong)local_e8 | 0x8000000000000000);
            pCVar14 = (CKRecord *)0xd000000000000013;
            SVar40.str = (char *)0xd000000000000013;
            SVar58.bridgeObject = pCVar20;
            SVar58.str = (char *)pCVar23;
            Swift::String::append(SVar40,SVar58);
            SVar51 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar14);
            SVar59.bridgeObject = pCVar20;
            SVar59.str = (char *)pCVar23;
            Swift::String::append(SVar51,SVar59);
            _swift_bridgeObjectRelease(SVar51.bridgeObject);
            SVar41.bridgeObject = (void *)0xe100000000000000;
            SVar41.str = (char *)0x2f;
            SVar60.bridgeObject = pCVar20;
            SVar60.str = (char *)pCVar23;
            Swift::String::append(SVar41,SVar60);
            IVar24 = objc_stub::recordID((ID)pCVar9);
            objc_stub::recordName(IVar24);
            SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            SVar61.bridgeObject = pCVar20;
            SVar61.str = (char *)pCVar23;
            Swift::String::append(SVar51,SVar61);
            _swift_bridgeObjectRelease(SVar51.bridgeObject);
            SVar42.bridgeObject = (void *)((ulong)local_f0 | 0x8000000000000000);
            SVar42.str = (char *)0x100000000000001c;
            SVar62.bridgeObject = pCVar20;
            SVar62.str = (char *)pCVar23;
            Swift::String::append(SVar42,SVar62);
            FUN_1000d4e0c(0,0xe000000000000000);
            _swift_bridgeObjectRelease(0xe000000000000000);
            FUN_100004594(local_90);
            param_2 = local_d8;
            if (pCVar10 != (CKRecord *)0x0) {
              IVar24 = objc_stub::managedObjectContext((ID)pCVar10);
              objc_stub::deleteObject_(IVar24);
              param_3 = pCVar10;
              param_2 = local_d8;
            }
          }
          else {
            IVar24 = objc_stub::FUN_100c05b40((ID)pCVar22);
            if ((int)IVar24 == 0) {
              pCVar14 = pCVar22;
              FUN_10038f124();
              if (pCVar14 == (CKRecord *)0x0) {
                FUN_1000d468c(local_90);
                pCVar10 = local_78;
                local_e0 = local_70;
                pCVar14 = (CKRecord *)local_90;
                _Var26.unknown = local_78;
                FUN_100004640();
                local_148 = pCVar14;
                Swift::_StringGuts::grow(0x2d,_Var26);
                _swift_bridgeObjectRelease(0xe000000000000000);
                uVar27 = local_138;
                IVar24 = objc_stub::recordID((ID)pCVar9);
                objc_stub::recordName(IVar24);
                SVar51 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                SVar56.bridgeObject = pCVar20;
                SVar56.str = (char *)pCVar23;
                Swift::String::append(SVar51,SVar56);
                _swift_bridgeObjectRelease(SVar51.bridgeObject);
                SVar37.bridgeObject = (void *)0xec000000676e6974;
                SVar37.str = (char *)0x616572636572202c;
                SVar57.bridgeObject = pCVar20;
                SVar57.str = (char *)pCVar23;
                Swift::String::append(SVar37,SVar57);
                pCVar20 = local_e0;
                FUN_1000d4db8(0xd00000000000001f,uVar27,pCVar10);
                _swift_bridgeObjectRelease(uVar27);
                FUN_100004594(local_90);
                IVar24 = objc_stub::managedObjectContext((ID)pCVar22);
                objc_stub::deleteObject_(IVar24);
                pCVar10 = pCVar9;
                FUN_10038f400(pCVar9,self);
                pCVar23 = pCVar22;
                if (pCVar10 == (CKRecord *)0x0) goto LAB_100386e14;
                pcVar34 = (char *)0x545245534e49;
              }
              else {
                pcVar34 = (char *)0x545245534e49;
                if (pcVar18 != (char *)0x0) {
                  pcVar34 = (char *)0x455441445055;
                }
              }
              param_3 = (CKRecord *)&DAT_100c43250;
              pCVar22 = pCVar10;
              FUN_10038f124();
              local_e0 = pCVar22;
              if (pCVar22 == (CKRecord *)0x0) goto LAB_100386e14;
              puVar31 = &_OBJC_CLASS___NSKeyedArchiver;
              local_150 = (CKRecord *)pcVar34;
              _objc_allocWithZone();
              IVar24 = objc_stub::FUN_100c039c0((ID)puVar31,1);
              objc_stub::FUN_100c019c0((ID)pCVar9,IVar24);
              objc_stub::FUN_100c02680(IVar24);
              DVar11.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar24);
              uVar27 = extraout_x1;
              DVar11 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar11);
              pNVar12 = Foundation::Data::_bridgeToObjectiveC(DVar11);
              FUN_10003bf2c(DVar11.unknown,uVar27);
              local_148 = pCVar10;
              objc_stub::FUN_100c0ae60((ID)pCVar10,pNVar12);
              lVar29 = 0x4164657461647075;
              ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                        (0x4164657461647075,0xe900000000000074);
              if (lVar29 == 0) {
                pcVar32 = *(code **)(local_100 + 0x38);
                uVar25 = 1;
                lVar29 = local_128;
                puVar31 = local_f8;
              }
              else {
                puVar13 = &DAT_100fbee30;
                local_90[0] = lVar29;
                FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
                puVar31 = local_f8;
                lVar29 = local_128;
                lVar33 = local_128;
                _swift_dynamicCast(local_128,local_90,puVar13,local_f8,6);
                pcVar32 = *(code **)(local_100 + 0x38);
                uVar25 = (uint)lVar33 ^ 1;
              }
              lVar6 = local_100;
              (*pcVar32)(lVar29,uVar25,1,puVar31);
              lVar33 = local_110;
              puVar13 = local_120;
              puVar5 = local_130;
              FUN_100354148(lVar29,local_120);
              pcVar35 = *(code **)(lVar6 + 0x30);
              DVar16.unknown = puVar13;
              (*pcVar35)(puVar13,1,puVar31);
              if ((int)DVar16.unknown == 1) {
                Foundation::Date::get_distantPast(DVar16);
                puVar15 = puVar13;
                (*pcVar35)(puVar13,1,puVar31);
                if ((int)puVar15 != 1) {
                  FUN_100005808(puVar13,&DAT_100fbe6e8,&DAT_100c43250);
                }
              }
              else {
                (**(code **)(lVar6 + 0x20))(local_108.unknown,puVar13,puVar31);
              }
              DVar16.unknown = (undefined *)objc_stub::FUN_100c10f80((ID)local_e0);
              if (DVar16.unknown != (undefined *)0x0) {
                Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar16);
              }
              puVar13 = puVar31;
              (*pcVar32)(lVar33,DVar16.unknown == (undefined *)0x0,1);
              FUN_100364a64(lVar33,puVar5);
              puVar17 = puVar5;
              (*pcVar35)(puVar5,1,puVar31);
              DVar16.unknown = local_140.unknown;
              if ((int)puVar17 == 1) {
                FUN_100005808(puVar5,&DAT_100fbe6e8,&DAT_100c43250);
              }
              else {
                DVar28.unknown = puVar31;
                (**(code **)(lVar6 + 0x20))(local_140.unknown,puVar5);
                bVar7 = Foundation::Date::>_infix(DVar16,local_108,DVar28);
                if (bVar7) {
                  objc_stub::insertedObjects((ID)self);
                  pcVar18 = (char *)0x0;
                  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
                  FUN_1003084a8();
                  SVar19 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC
                                     ();
                  pCVar22 = local_e0;
                  FUN_1003546dc(local_e0,SVar19.unknown);
                  _swift_bridgeObjectRelease(SVar19.unknown);
                  if (((ulong)pCVar22 & 1) == 0) {
                    FUN_1000d468c(local_90);
                    local_158 = local_78;
                    local_150 = local_70;
                    plVar21 = local_90;
                    _Var26.unknown = local_78;
                    FUN_100004640();
                    local_168 = plVar21;
                    Swift::_StringGuts::grow(0x18,_Var26);
                    pCVar22 = (CKRecord *)0xe000000000000000;
                    _swift_bridgeObjectRelease();
                    uVar27 = local_118;
                    SVar51 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar22);
                    SVar70.bridgeObject = puVar13;
                    SVar70.str = pcVar18;
                    Swift::String::append(SVar51,SVar70);
                    _swift_bridgeObjectRelease(SVar51.bridgeObject);
                    SVar47.bridgeObject = (void *)0xe100000000000000;
                    SVar47.str = (char *)0x2f;
                    SVar71.bridgeObject = puVar13;
                    SVar71.str = pcVar18;
                    Swift::String::append(SVar47,SVar71);
                    IVar24 = objc_stub::recordID((ID)pCVar9);
                    objc_stub::recordName(IVar24);
                    SVar51 = (extension_Foundation)::Swift::String::
                             __unconditionallyBridgeFromObjectiveC();
                    SVar72.bridgeObject = puVar13;
                    SVar72.str = pcVar18;
                    Swift::String::append(SVar51,SVar72);
                    _swift_bridgeObjectRelease(SVar51.bridgeObject);
                    SVar48.bridgeObject = (void *)0xe100000000000000;
                    SVar48.str = (char *)0x20;
                    _Var26.unknown = (undefined *)0xe100000000000000;
                    SVar73.bridgeObject = puVar13;
                    SVar73.str = pcVar18;
                    Swift::String::append(SVar48,SVar73);
                    Swift::_StringGuts::grow(0x20,_Var26);
                    _swift_bridgeObjectRelease(0xe000000000000000);
                    puVar31 = local_f8;
                    pvVar4 = local_160;
                    pcVar18 = 
                    PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8;
                    FUN_100003a00(&DAT_100fc14d0,PTR_typeMetadataAccessor_100ea7480);
                    SVar51 = Swift::CustomStringConvertible::get_description();
                    SVar74.bridgeObject = puVar13;
                    SVar74.str = pcVar18;
                    Swift::String::append(SVar51,SVar74);
                    _swift_bridgeObjectRelease(SVar51.bridgeObject);
                    SVar49.bridgeObject = &DAT_e800000000000000;
                    SVar49.str = (char *)0x3d72657672657320;
                    SVar75.bridgeObject = puVar13;
                    SVar75.str = pcVar18;
                    Swift::String::append(SVar49,SVar75);
                    DVar16.unknown = local_108.unknown;
                    SVar51 = Swift::CustomStringConvertible::get_description();
                    SVar76.bridgeObject = puVar13;
                    SVar76.str = pcVar18;
                    Swift::String::append(SVar51,SVar76);
                    _swift_bridgeObjectRelease(SVar51.bridgeObject);
                    SVar50.bridgeObject = (void *)0xe100000000000000;
                    SVar50.str = (char *)0x29;
                    SVar77.bridgeObject = puVar13;
                    SVar77.str = pcVar18;
                    Swift::String::append(SVar50,SVar77);
                    SVar3.bridgeObject = pvVar4;
                    SVar3.str = (char *)0xd000000000000013;
                    _swift_bridgeObjectRetain(uVar27);
                    SVar78.bridgeObject = puVar13;
                    SVar78.str = pcVar18;
                    Swift::String::append(SVar3,SVar78);
                    _swift_bridgeObjectRelease(uVar27);
                    _swift_bridgeObjectRelease(pvVar4);
                    pCVar22 = local_150;
                    FUN_1000d4db8(0xd000000000000012,uVar27,local_158);
                    _swift_bridgeObjectRelease(uVar27);
                    FUN_100004594(local_90);
                    IVar24 = objc_stub::recordID((ID)pCVar9);
                    param_2 = local_d8;
                    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
                    uVar30 = *param_2 & 0xffffffffffffff8;
                    uVar2 = *(ulong *)(uVar30 + 0x10);
                    uVar30 = *(ulong *)(uVar30 + 0x18);
                    if (uVar30 >> 1 <= uVar2) {
                      Swift::Array<undefined>::__createNewBuffer(1 < uVar30,uVar2 + 1,1);
                    }
                    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar2,IVar24);
                    pcVar32 = *(code **)(local_100 + 8);
                    (*pcVar32)(local_140.unknown,puVar31);
                    FUN_100005808(local_110,&DAT_100fbe6e8);
                    (*pcVar32)(DVar16.unknown,puVar31);
                    goto LAB_100386878;
                  }
                }
                (**(code **)(lVar6 + 8))(DVar16.unknown,puVar31);
              }
              pCVar10 = local_e0;
              pCVar22 = local_150;
              FUN_10038b9c8(local_e0,pCVar9);
              pCVar23 = self;
              FUN_100393910(pCVar9,pCVar10);
              FUN_1000d468c(local_90);
              pCVar10 = local_78;
              local_150 = local_70;
              pCVar20 = (CKRecord *)local_90;
              _Var26.unknown = local_78;
              FUN_100004640();
              local_158 = pCVar20;
              Swift::_StringGuts::grow(0x1c,_Var26);
              _swift_bridgeObjectRelease(0xe000000000000000);
              SVar43.bridgeObject = &DAT_e600000000000000;
              SVar43.str = (char *)pCVar22;
              SVar63.bridgeObject = puVar13;
              SVar63.str = (char *)pCVar23;
              Swift::String::append(SVar43,SVar63);
              _swift_bridgeObjectRelease(&DAT_e600000000000000);
              SVar44.bridgeObject = (void *)0xe100000000000000;
              SVar44.str = (char *)0x20;
              pCVar22 = (CKRecord *)0x20;
              SVar64.bridgeObject = puVar13;
              SVar64.str = (char *)pCVar23;
              Swift::String::append(SVar44,SVar64);
              SVar51 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar22);
              SVar65.bridgeObject = puVar13;
              SVar65.str = (char *)pCVar23;
              Swift::String::append(SVar51,SVar65);
              _swift_bridgeObjectRelease(SVar51.bridgeObject);
              SVar45.bridgeObject = (void *)0xe100000000000000;
              SVar45.str = (char *)0x2f;
              SVar66.bridgeObject = puVar13;
              SVar66.str = (char *)pCVar23;
              Swift::String::append(SVar45,SVar66);
              IVar24 = objc_stub::recordID((ID)pCVar9);
              objc_stub::recordName(IVar24);
              SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              SVar67.bridgeObject = puVar13;
              SVar67.str = (char *)pCVar23;
              Swift::String::append(SVar51,SVar67);
              _swift_bridgeObjectRelease(SVar51.bridgeObject);
              SVar46.bridgeObject = &DAT_e500000000000000;
              SVar46.str = (char *)0x3d69727520;
              SVar68.bridgeObject = puVar13;
              SVar68.str = (char *)pCVar23;
              Swift::String::append(SVar46,SVar68);
              objc_stub::FUN_100c07540((ID)local_148);
              SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              SVar69.bridgeObject = puVar13;
              SVar69.str = (char *)pCVar23;
              Swift::String::append(SVar51,SVar69);
              _swift_bridgeObjectRelease(SVar51.bridgeObject);
              pCVar22 = local_150;
              FUN_1000d4db8(0x45463a434e59535b,0xed0000205d484354,pCVar10);
              _swift_bridgeObjectRelease(0xed0000205d484354);
              param_3 = (CKRecord *)&DAT_100c43250;
              FUN_100005808(local_110,&DAT_100fbe6e8);
              (**(code **)(local_100 + 8))(local_108.unknown,local_f8);
            }
            else {
              FUN_1000d468c(local_90);
              pCVar22 = local_70;
              param_3 = local_78;
              pCVar10 = (CKRecord *)local_90;
              _Var26.unknown = local_78;
              FUN_100004640();
              local_e0 = pCVar10;
              Swift::_StringGuts::grow(0x26,_Var26);
              pCVar10 = (CKRecord *)0xe000000000000000;
              _swift_bridgeObjectRelease();
              uVar27 = local_118;
              SVar51 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar10);
              SVar52.bridgeObject = pCVar20;
              SVar52.str = (char *)pCVar23;
              Swift::String::append(SVar51,SVar52);
              _swift_bridgeObjectRelease(SVar51.bridgeObject);
              SVar38.bridgeObject = (void *)0xe100000000000000;
              SVar38.str = (char *)0x2f;
              SVar53.bridgeObject = pCVar20;
              SVar53.str = (char *)pCVar23;
              Swift::String::append(SVar38,SVar53);
              IVar24 = objc_stub::recordID((ID)pCVar9);
              objc_stub::recordName(IVar24);
              SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              SVar54.bridgeObject = pCVar20;
              SVar54.str = (char *)pCVar23;
              Swift::String::append(SVar51,SVar54);
              _swift_bridgeObjectRelease(SVar51.bridgeObject);
              SVar39.bridgeObject = (void *)0xef676e69646e6570;
              SVar39.str = (char *)0x206574656c656420;
              SVar55.bridgeObject = pCVar20;
              SVar55.str = (char *)pCVar23;
              Swift::String::append(SVar39,SVar55);
              FUN_1000d4db8(0xd000000000000012,uVar27);
              _swift_bridgeObjectRelease(uVar27);
            }
            FUN_100004594(local_90);
            param_2 = local_d8;
          }
        }
      }
LAB_100386878:
      pCVar36 = pCVar36 + 1;
      param_4 = pCVar22;
    } while (pCVar8 != pCVar36);
    pCVar36 = (CKRecord *)0x0;
    do {
      pCVar10 = (CKRecord *)0x74696b64756f6c63;
      pCVar9 = (CKRecord *)0xee0065726168732e;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        pCVar23 = *(CKRecord **)(param_1.unknown + (long)pCVar36 * 8 + 0x20);
      }
      else {
        pCVar23 = pCVar36;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pCVar36,param_1);
      }
      SVar51 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar23);
      _Var26.unknown = SVar51.bridgeObject;
      if ((SVar51.str == (undefined *)0x74696b64756f6c63) &&
         (_Var26.unknown == (undefined *)0xee0065726168732e)) {
        _swift_bridgeObjectRelease(0xee0065726168732e);
        pCVar10 = param_3;
        pCVar9 = pCVar22;
LAB_100387748:
        pCVar22 = pCVar23;
        _swift_dynamicCastObjCClass(pCVar23,&_OBJC_CLASS___CKShare);
        if (pCVar22 != (CKRecord *)0x0) {
          FUN_100394ee8(0);
          FUN_1003942e0(pCVar22,self);
          FUN_1000d468c(local_90);
          pCVar20 = local_70;
          pCVar22 = local_78;
          _Var26.unknown = local_78;
          FUN_100004640(local_90);
          Swift::_StringGuts::grow(0x15,_Var26);
          _swift_bridgeObjectRelease(0xe000000000000000);
          IVar24 = objc_stub::recordID((ID)pCVar23);
          objc_stub::recordName(IVar24);
          SVar51 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar79.bridgeObject = pCVar9;
          SVar79.str = (char *)pCVar10;
          Swift::String::append(SVar51,SVar79);
          _swift_bridgeObjectRelease(SVar51.bridgeObject);
          FUN_1000d4db8(0xd000000000000013,0x8000000100da3e30);
          _swift_bridgeObjectRelease(0x8000000100da3e30);
          FUN_100004594(local_90);
          pCVar10 = pCVar22;
          pCVar9 = pCVar20;
        }
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar51.str,_Var26,(_StringComparisonResult)0x63);
        _swift_bridgeObjectRelease(_Var26.unknown);
        if (bVar7) goto LAB_100387748;
      }
      pCVar36 = pCVar36 + 1;
      param_3 = pCVar10;
      pCVar22 = pCVar9;
    } while (pCVar8 != pCVar36);
  }
  return;
}



/* Address: 0x1003878c0 | FUN_1003878c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100387c88) */
/* WARNING: Removing unreachable block (ram,0x0001003884d8) */
/* WARNING: Removing unreachable block (ram,0x000100387c98) */

undefined8 FUN_1003878c0(ID param_1,ulong *param_2)

{
  uint uVar1;
  NSDataReadingOptions contentsOf;
  ulong *puVar2;
  bool bVar3;
  URL UVar4;
  ID IVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ID IVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  URL UVar12;
  undefined *puVar13;
  void *pvVar14;
  char *pcVar16;
  uint uVar17;
  long extraout_x8;
  ulong uVar18;
  ulong uVar19;
  long extraout_x12;
  long unaff_x20;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  ulong uVar23;
  Data DVar24;
  undefined1 *puVar25;
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
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
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
  undefined1 auStack_140 [24];
  undefined1 *local_128;
  NSDataReadingOptions local_120;
  char *local_118;
  long local_110;
  ulong *local_108;
  undefined8 local_100;
  ulong local_f8;
  ulong local_f0;
  char *local_e8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  ulong uStack_88;
  char *local_78;
  undefined *local_70;
  _StringGuts _Var15;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar4.unknown + -8);
  UVar12 = UVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  puVar25 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar26 = (extension_CloudKit)::__C::CKRecord::get_recordType((CKRecord *)UVar12.unknown);
  _Var15.unknown = SVar26.bridgeObject;
  bVar3 = false;
  FUN_1003214a8();
  SVar27 = Swift::__typeName(bVar3);
  if (SVar26 == SVar27) {
    _swift_bridgeObjectRelease(_Var15.unknown);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
  }
  else {
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar26.str,_Var15,(_StringComparisonResult)(__int8)SVar27.str);
    _swift_bridgeObjectRelease(_Var15.unknown);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    if (!bVar3) {
      return 1;
    }
  }
  lVar20 = 0x6d75736b63656863;
  IVar5 = 0x61746164;
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x61746164,&DAT_e400000000000000);
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x6d75736b63656863,&DAT_e800000000000000);
  local_128 = puVar25;
  local_120.unknown = puVar25 + -extraout_x12;
  local_118 = (char *)UVar4;
  local_110 = lVar22;
  local_108 = param_2;
  if (lVar20 == 0) {
LAB_100387a8c:
    local_f8 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,1);
  }
  else {
    puVar6 = &DAT_100fbee30;
    local_a0 = lVar20;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    ppuVar7 = &local_90;
    _swift_dynamicCast(ppuVar7,&local_a0,puVar6,PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)ppuVar7 & 1) == 0) goto LAB_100387a8c;
    uVar23 = (ulong)local_90 & 0xffffffffffff;
    if ((uStack_88 & 0x2000000000000000) != 0) {
      uVar23 = uStack_88 >> 0x38 & 0xf;
    }
    if (uVar23 == 0) {
      _swift_bridgeObjectRelease();
      goto LAB_100387a8c;
    }
    if ((IVar5 != 0) && (uStack_88 != 0)) {
      _swift_bridgeObjectRelease();
      goto LAB_100387bb8;
    }
    local_f0 = CONCAT44(local_f0._4_4_,(uint)(uStack_88 == 0));
    local_f8 = uStack_88;
  }
  IVar8 = objc_stub::recordID(param_1);
  objc_stub::recordName(IVar8);
  SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar27.bridgeObject = SVar26.bridgeObject;
  local_e8 = SVar26.str;
  uVar9 = 0;
  FUN_10038fef4();
  IVar8 = objc_stub::recordID(param_1);
  puVar21 = *(undefined **)(unaff_x20 + 0x18);
  objc_stub::recordName(IVar8);
  SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar10 = SVar26.str;
  pcVar11 = (char *)objc_stub::zoneID(IVar8);
  puVar6 = puVar21;
  local_100 = uVar9;
  FUN_1003905c0(pcVar10,SVar26.bridgeObject);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  if ((pcVar10 != (char *)0x0) && (IVar8 = objc_stub::FUN_100c05b40((ID)pcVar10), (int)IVar8 != 0))
  {
    _swift_bridgeObjectRelease(local_f8);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
LAB_100387bb8:
    _swift_unknownObjectRelease(IVar5);
    return 1;
  }
  if (IVar5 != 0) {
    IVar8 = IVar5;
    _swift_dynamicCastObjCClass(IVar5,&_OBJC_CLASS___CKAsset);
    if (IVar8 == 0) {
LAB_100387df0:
      DVar24.unknown = (undefined *)0x0;
      uVar23 = 0xf000000000000000;
    }
    else {
      _swift_unknownObjectRetain(IVar5);
      UVar12.unknown = (undefined *)objc_stub::fileURL(IVar8);
      puVar25 = local_128;
      if (UVar12.unknown == (undefined *)0x0) {
        _swift_unknownObjectRelease(IVar5);
        goto LAB_100387df0;
      }
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar12);
      lVar22 = local_110;
      pcVar16 = local_118;
      contentsOf.unknown = local_120.unknown;
      pcVar11 = local_118;
      (**(code **)(local_110 + 0x20))(local_120.unknown,puVar25);
      uVar23 = 0;
      DVar24 = Foundation::Data::_init(contentsOf);
      _swift_unknownObjectRelease(IVar5);
      (**(code **)(lVar22 + 8))(contentsOf.unknown,pcVar16);
    }
    if ((int)local_f0 == 0) goto LAB_100387e6c;
LAB_100387e00:
    if (uVar23 >> 0x3c < 0xf) {
      uVar1 = (uint)(uVar23 >> 0x20);
      uVar17 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar17 == 0) {
          if ((uVar23 & 0xff000000000000) == 0) goto LAB_100388318;
        }
        else {
          lVar22 = (long)(int)DVar24.unknown;
          lVar20 = (long)DVar24.unknown >> 0x20;
LAB_1003881c4:
          if (lVar22 == lVar20) goto LAB_100387e74;
          FUN_10011da54(DVar24.unknown,uVar23);
        }
        puVar13 = DVar24.unknown;
        uVar18 = uVar23;
        FUN_1003215dc();
        if (uVar18 != 0) {
          local_78 = PTR___type_metadata_for_Swift_String_100eac208;
          local_70 = 
          PTR___protocol_witness_table_for_Swift_String___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea94b0
          ;
          pvVar14 = (void *)0x0;
          local_90 = puVar13;
          uStack_88 = uVar18;
          FUN_10000ec2c(0,&DAT_100fc0458,&PTR__OBJC_CLASS___CKRecord_100f8dbc8);
          pcVar16 = &DAT_e800000000000000;
          ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
                    (&local_90,0x6d75736b63656863);
          FUN_1000d468c(&local_90);
          puVar6 = local_70;
          pcVar11 = local_78;
          _Var15.unknown = local_78;
          local_f0 = uVar23;
          FUN_100004640(&local_90);
          local_a0 = 0;
          local_98 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x2f,_Var15);
          _swift_bridgeObjectRelease(local_98);
          local_a0 = -0x2fffffffffffffec;
          local_98 = 0x8000000100da3fc0;
          SVar26.bridgeObject = SVar27.bridgeObject;
          SVar26.str = local_e8;
          SVar49.bridgeObject = pvVar14;
          SVar49.str = pcVar16;
          Swift::String::append(SVar26,SVar49);
          SVar36.bridgeObject = (void *)0x8000000100da3fe0;
          SVar36.str = (char *)0xd000000000000019;
          SVar50.bridgeObject = pvVar14;
          SVar50.str = pcVar16;
          Swift::String::append(SVar36,SVar50);
          uVar9 = local_98;
          uVar23 = local_f0;
          FUN_1000d4dd4(local_a0,local_98);
          FUN_10003bf18(DVar24.unknown,uVar23);
          _swift_bridgeObjectRelease(uVar9);
          FUN_100004594(&local_90);
          goto LAB_100387e74;
        }
      }
      else if (uVar17 == 2) {
        lVar22 = *(long *)(DVar24.unknown + 0x10);
        lVar20 = *(long *)(DVar24.unknown + 0x18);
        goto LAB_1003881c4;
      }
LAB_100388318:
      FUN_10003bf18(DVar24.unknown,uVar23);
    }
  }
  else {
    DVar24.unknown = (undefined *)0x0;
    uVar23 = 0xf000000000000000;
    if ((int)local_f0 != 0) goto LAB_100387e00;
LAB_100387e6c:
    _swift_bridgeObjectRelease(local_f8);
  }
LAB_100387e74:
  if (((pcVar10 != (char *)0x0) && (FUN_10038f124(), pcVar10 != (char *)0x0)) ||
     (IVar8 = param_1, FUN_100392bc4(param_1,puVar21), IVar8 != 0)) {
    IVar8 = param_1;
    local_f0 = uVar23;
    FUN_10038f400(param_1,puVar21);
    if (IVar8 != 0) {
      FUN_1000d468c(&local_90,0);
      puVar21 = local_70;
      pcVar10 = local_78;
      _Var15.unknown = local_78;
      FUN_100004640(&local_90);
      local_a0 = 0;
      local_98 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x43,_Var15);
      SVar28.bridgeObject = (void *)0x8000000100da3f40;
      SVar28.str = (char *)0xd000000000000012;
      SVar40.bridgeObject = puVar6;
      SVar40.str = pcVar11;
      Swift::String::append(SVar28,SVar40);
      SVar27.str = local_e8;
      SVar41.bridgeObject = puVar6;
      SVar41.str = pcVar11;
      Swift::String::append(SVar27,SVar41);
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      SVar29.bridgeObject = (void *)0x8000000100da3f90;
      SVar29.str = (char *)0xd00000000000002f;
      SVar42.bridgeObject = puVar6;
      SVar42.str = pcVar11;
      Swift::String::append(SVar29,SVar42);
      uVar9 = local_98;
      FUN_1000d4dd4(local_a0,local_98,pcVar10,puVar21);
      _swift_bridgeObjectRelease(uVar9);
      FUN_100004594(&local_90);
      IVar8 = objc_stub::recordID(param_1);
      puVar2 = local_108;
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar23 = *(ulong *)((*puVar2 & 0xffffffffffffff8) + 0x10);
      uVar18 = *(ulong *)((*puVar2 & 0xffffffffffffff8) + 0x18);
      if (uVar18 >> 1 <= uVar23) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar18,uVar23 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar23,IVar8);
      FUN_10003bf18(DVar24.unknown,local_f0);
      _swift_unknownObjectRelease(IVar5);
      return 0;
    }
    FUN_1000d468c(&local_90);
    puVar21 = local_70;
    pcVar10 = local_78;
    _Var15.unknown = local_78;
    FUN_100004640(&local_90);
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x41,_Var15);
    SVar30.bridgeObject = (void *)0x8000000100da3f40;
    SVar30.str = (char *)0xd000000000000012;
    SVar43.bridgeObject = puVar6;
    SVar43.str = pcVar11;
    Swift::String::append(SVar30,SVar43);
    SVar31.bridgeObject = SVar27.bridgeObject;
    SVar31.str = local_e8;
    SVar44.bridgeObject = puVar6;
    SVar44.str = pcVar11;
    Swift::String::append(SVar31,SVar44);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    SVar32.bridgeObject = (void *)0x8000000100da3f60;
    SVar32.str = (char *)0xd00000000000002d;
    SVar45.bridgeObject = puVar6;
    SVar45.str = pcVar11;
    Swift::String::append(SVar32,SVar45);
    uVar9 = local_98;
    FUN_1000d4e0c(local_a0,local_98,pcVar10,puVar21);
    _swift_unknownObjectRelease(IVar5);
    uVar23 = local_f0;
    goto LAB_10038847c;
  }
  if (IVar5 == 0) {
    FUN_1000d468c(&local_90);
    puVar21 = local_70;
    pcVar10 = local_78;
    _Var15.unknown = local_78;
    FUN_100004640(&local_90);
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x33,_Var15);
    SVar33.bridgeObject = (void *)0x8000000100da3eb0;
    SVar33.str = (char *)0xd000000000000012;
    SVar46.bridgeObject = puVar6;
    SVar46.str = pcVar11;
    Swift::String::append(SVar33,SVar46);
    SVar34.bridgeObject = SVar27.bridgeObject;
    SVar34.str = local_e8;
    SVar47.bridgeObject = puVar6;
    SVar47.str = pcVar11;
    Swift::String::append(SVar34,SVar47);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    SVar35.bridgeObject = (void *)0x8000000100da3ef0;
    SVar35.str = (char *)0xd00000000000001f;
    SVar48.bridgeObject = puVar6;
    SVar48.str = pcVar11;
    Swift::String::append(SVar35,SVar48);
    uVar9 = local_98;
    FUN_1000d4df0(local_a0,local_98,pcVar10,puVar21);
    goto LAB_10038847c;
  }
  lVar22 = 0x6d75736b63656863;
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x6d75736b63656863,&DAT_e800000000000000);
  if ((lVar22 != 0) && (_swift_unknownObjectRelease(), uVar23 >> 0x3c < 0xf)) {
    uVar1 = (uint)(uVar23 >> 0x20);
    uVar17 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar17 == 0) {
        FUN_10003bf18(DVar24.unknown,uVar23);
        uVar18 = 0;
        uVar19 = uVar23 >> 0x30 & 0xff;
      }
      else {
        uVar18 = (ulong)(int)DVar24.unknown;
        uVar19 = (long)DVar24.unknown >> 0x20;
      }
    }
    else {
      if (uVar17 != 2) {
        FUN_10003bf18(DVar24.unknown,uVar23);
        goto LAB_1003883b8;
      }
      uVar18 = *(ulong *)(DVar24.unknown + 0x10);
      uVar19 = *(ulong *)(DVar24.unknown + 0x18);
    }
    if (uVar18 != uVar19) {
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      IVar8 = objc_stub::recordID(param_1);
      puVar2 = local_108;
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar18 = *(ulong *)((*puVar2 & 0xffffffffffffff8) + 0x10);
      uVar19 = *(ulong *)((*puVar2 & 0xffffffffffffff8) + 0x18);
      if (uVar19 >> 1 <= uVar18) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar19,uVar18 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar18,IVar8);
      FUN_10003bf18(DVar24.unknown,uVar23);
      _swift_unknownObjectRelease(IVar5);
      return 1;
    }
  }
LAB_1003883b8:
  FUN_1000d468c(&local_90);
  puVar21 = local_70;
  pcVar10 = local_78;
  _Var15.unknown = local_78;
  FUN_100004640(&local_90);
  local_a0 = 0;
  local_98 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x37,_Var15);
  SVar37.bridgeObject = (void *)0x8000000100da3eb0;
  SVar37.str = (char *)0xd000000000000012;
  SVar51.bridgeObject = puVar6;
  SVar51.str = pcVar11;
  Swift::String::append(SVar37,SVar51);
  SVar38.bridgeObject = SVar27.bridgeObject;
  SVar38.str = local_e8;
  SVar52.bridgeObject = puVar6;
  SVar52.str = pcVar11;
  Swift::String::append(SVar38,SVar52);
  _swift_bridgeObjectRelease(SVar27.bridgeObject);
  SVar39.bridgeObject = (void *)0x8000000100da3f10;
  SVar39.str = (char *)0xd000000000000023;
  SVar53.bridgeObject = puVar6;
  SVar53.str = pcVar11;
  Swift::String::append(SVar39,SVar53);
  uVar9 = local_98;
  FUN_1000d4df0(local_a0,local_98,pcVar10,puVar21);
  _swift_unknownObjectRelease(IVar5);
LAB_10038847c:
  FUN_10003bf18(DVar24.unknown,uVar23);
  _swift_bridgeObjectRelease(uVar9);
  FUN_100004594(&local_90);
  return 0;
}



/* Address: 0x100388514 | FUN_100388514 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100388514(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long unaff_x22;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar2;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar2 = CONCAT71(extraout_var,SVar1.value);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  lVar8 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &DAT_100ecda68;
  _swift_allocObject(&DAT_100ecda68,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &DAT_100ecdab8;
  _swift_allocObject(&DAT_100ecdab8,0x28,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  (**(code **)(lVar8 + 0x68))
            (uVar3,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,lVar2);
  plVar6 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100388650;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar6);
  return;
}



/* Address: 0x100388650 | FUN_100388650 */

void FUN_100388650(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  if (unaff_x20 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
    _swift_errorRelease();
    _swift_release(uVar4);
    return;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  (**(code **)(*(long *)(lVar3 + 0x28) + 8))
            (*(undefined8 *)(lVar3 + 0x30),*(undefined8 *)(lVar3 + 0x20));
  _swift_release(uVar1);
  FUN_1000da368(uVar4,uVar2);
  _swift_task_switch(FUN_1003886f8,uVar4,uVar2);
  return;
}



/* Address: 0x1003886f8 | FUN_1003886f8 */

void FUN_1003886f8(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x000100388724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100388728 | FUN_100388728 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100388728(undefined *param_1,undefined8 param_2,long param_3,void *param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  NSPredicate *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSPredicate *self;
  long lVar7;
  undefined **ppuVar8;
  ID IVar9;
  ID self_00;
  ID IVar10;
  ID IVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  undefined1 *puVar14;
  void *pvVar15;
  undefined8 uVar16;
  long unaff_x21;
  NSPredicate *pNVar17;
  ID IVar18;
  NSPredicate *pNVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_d0 [64];
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  void *pvStack_70;
  
  _Var3.unknown = param_1;
  FUN_100329880();
  pNVar4 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar5 = &DAT_100fbeb40;
  FUN_1000037f0("%K == %@ AND %K == %@",&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 8;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = puVar5;
  FUN_10030d9e0();
  *(undefined **)(puVar5 + 0x40) = puVar6;
  *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000015;
  *(undefined8 *)(puVar5 + 0x28) = 0x8000000100da2b70;
  objc_stub::ownerName((ID)param_1);
  SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar5 + 0x60) = puVar12;
  *(undefined **)(puVar5 + 0x68) = puVar6;
  *(String *)(puVar5 + 0x48) = SVar20;
  *(undefined **)(puVar5 + 0x88) = puVar12;
  *(undefined **)(puVar5 + 0x90) = puVar6;
  *(undefined8 *)(puVar5 + 0x70) = 0xd000000000000010;
  *(undefined8 *)(puVar5 + 0x78) = 0x8000000100da2b50;
  objc_stub::zoneName((ID)param_1);
  SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar5 + 0xb0) = puVar12;
  *(undefined **)(puVar5 + 0xb8) = puVar6;
  *(String *)(puVar5 + 0x98) = SVar20;
  pNVar4 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar4);
  objc_stub::setPredicate_((ID)_Var3.unknown);
  FUN_10038fef4(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 != 0) {
    _swift_errorRelease(unaff_x21);
    return;
  }
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    pNVar17 = *(NSPredicate **)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    pNVar17 = (NSPredicate *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pNVar17 == (NSPredicate *)0x0) {
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  else {
    if ((long)pNVar17 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100388e2c);
      (*pcVar2)();
    }
    pNVar19 = (NSPredicate *)0x0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        self = *(NSPredicate **)(_Var3.unknown + (long)pNVar19 * 8 + 0x20);
        pvVar15 = param_4;
      }
      else {
        self = pNVar19;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar19,_Var3);
        pvVar15 = param_4;
      }
      lVar7 = param_3 + 0x10;
      _swift_weakLoadStrong();
      ppuVar8 = (undefined **)0x0;
      param_4 = pvVar15;
      if (lVar7 != 0) {
        uVar16 = *(undefined8 *)(lVar7 + 0x10);
        _swift_retain(uVar16);
        _swift_release(lVar7);
        FUN_1000d468c(&local_90);
        _swift_release(uVar16);
        param_4 = pvStack_70;
        puVar5 = local_78;
        _Var13.unknown = local_78;
        FUN_100004640(&local_90);
        Swift::_StringGuts::grow(0x1d,_Var13);
        _swift_bridgeObjectRelease(0xe000000000000000);
        objc_stub::cloudKitRecordName((ID)self);
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar21.bridgeObject = pvVar15;
        SVar21.str = (char *)pNVar4;
        Swift::String::append(SVar20,SVar21);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        SVar20.bridgeObject = &DAT_e500000000000000;
        SVar20.str = (char *)0x3d69727520;
        SVar22.bridgeObject = pvVar15;
        SVar22.str = (char *)pNVar4;
        Swift::String::append(SVar20,SVar22);
        objc_stub::FUN_100c07540((ID)self);
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar23.bridgeObject = pvVar15;
        SVar23.str = (char *)pNVar4;
        Swift::String::append(SVar20,SVar23);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        FUN_1000d4db8(0xd000000000000014,0x8000000100da4000,puVar5);
        _swift_bridgeObjectRelease(0x8000000100da4000);
        ppuVar8 = &local_90;
        FUN_100004594();
      }
      FUN_10038f124();
      if (ppuVar8 != (undefined **)0x0) {
        IVar9 = objc_stub::managedObjectContext((ID)ppuVar8);
        objc_stub::deleteObject_(IVar9,ppuVar8);
      }
      pNVar19 = pNVar19 + 1;
      IVar9 = objc_stub::managedObjectContext((ID)self);
      objc_stub::deleteObject_(IVar9);
      pNVar4 = self;
    } while (pNVar17 != pNVar19);
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  uStack_88 = 0;
  local_90 = (undefined *)0x0;
  local_78 = (undefined *)0x0;
  uStack_80 = 0;
  _Var3.unknown = (undefined *)&local_90;
  FUN_10035f4e0(_Var3.unknown,param_2);
  FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    IVar9 = *(ID *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    IVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar9 != 0) {
    if ((long)IVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100388e30);
      (*pcVar2)();
    }
    IVar18 = 0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        self_00 = *(ID *)(_Var3.unknown + IVar18 * 8 + 0x20);
      }
      else {
        self_00 = IVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar18,_Var3);
      }
      IVar10 = objc_stub::managedObjectContext(self_00);
      if (IVar10 == 0) {
LAB_100388bcc:
        IVar10 = objc_stub::managedObjectContext(self_00);
        objc_stub::deleteObject_(IVar10,self_00);
      }
      else {
        IVar11 = objc_stub::FUN_100c09720(self_00);
        IVar11 = objc_stub::FUN_100c01c00((ID)&_OBJC_CLASS___NSEntityDescription,IVar11,IVar10);
        if (IVar11 == 0) goto LAB_100388bcc;
        IVar11 = objc_stub::FUN_100c06920(IVar11);
        if (IVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100388e34);
          (*pcVar2)();
        }
        _NSClassFromString();
        if (IVar11 == 0) goto LAB_100388bcc;
        _swift_getObjCClassMetadata();
        uVar16 = 0;
        FUN_1003b4868(0);
        _swift_dynamicCastMetatype(IVar11,uVar16);
        if (IVar11 == 0) goto LAB_100388bcc;
        puVar5 = &DAT_100fbef68;
        FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
        puVar14 = auStack_d0;
        _swift_initStackObject();
        *(undefined8 *)(puVar5 + 0x18) = 2;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        puVar12 = puVar5;
        (**(code **)(IVar11 + 0x78))();
        *(undefined **)(puVar5 + 0x20) = puVar12;
        *(undefined1 **)(puVar5 + 0x28) = puVar14;
        objc_stub::FUN_100c09700(self_00);
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar5 + 0x30) = SVar20;
        puVar12 = puVar5;
        FUN_1003c92b8();
        _swift_setDeallocating(puVar5);
        FUN_100005808(puVar5 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
        puVar5 = &DAT_100fbef78;
        FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
        ppuVar8 = &local_90;
        local_90 = puVar12;
        local_78 = puVar5;
        FUN_100328e0c(ppuVar8,0,IVar10);
        FUN_100004594(&local_90);
        if (ppuVar8 == (undefined **)0x0) goto LAB_100388bcc;
      }
      IVar18 = IVar18 + 1;
    } while (IVar9 != IVar18);
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  return;
}



/* Address: 0x100388e34 | FUN_100388e34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100388e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long unaff_x22;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar2;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar2 = CONCAT71(extraout_var,SVar1.value);
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar8 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &DAT_100ecda68;
  _swift_allocObject(&DAT_100ecda68,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  puVar5 = &DAT_100ecda90;
  _swift_allocObject(&DAT_100ecda90,0x28,7);
  *(undefined **)(unaff_x22 + 0x40) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = uVar7;
  *(undefined **)(puVar5 + 0x20) = puVar4;
  (**(code **)(lVar8 + 0x68))
            (uVar3,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,lVar2);
  plVar6 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar6;
  FUN_1000037f0(&DAT_100fc1ff0,&DAT_100c43d38);
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100388f84;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + 0x10));
  return;
}



/* Address: 0x100388f84 | FUN_100388f84 */

void FUN_100388f84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  uVar2 = *(undefined8 *)(lVar3 + 0x40);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar2);
    return;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  (**(code **)(*(long *)(lVar3 + 0x30) + 8))
            (*(undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x28));
  _swift_release(uVar2);
  FUN_1000da368(uVar4,uVar1);
  _swift_task_switch(FUN_10036dbc8,uVar4,uVar1);
  return;
}



/* Address: 0x10038902c | FUN_10038902c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_10038902c(ulong *param_1,NSPredicate *param_2,undefined8 param_3,long param_4,void *param_5)

{
  String *pSVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  _ArrayBuffer _Var6;
  NSPredicate *pNVar7;
  undefined *puVar8;
  ID IVar9;
  long lVar10;
  undefined *puVar11;
  ID self;
  CKRecordID *this;
  CKRecordID *pCVar12;
  ulong self_00;
  Hasher into;
  ulong uVar13;
  void *pvVar14;
  _StringGuts _Var15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long unaff_x21;
  ID IVar19;
  ID IVar20;
  ulong uVar21;
  ID *pIVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  void *pvStack_90;
  
  _Var6.unknown = param_2;
  FUN_100329880();
  pNVar7 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar11 = &DAT_100fbeb40;
  FUN_1000037f0("%K == %@ AND %K == %@",&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar11 + 0x18) = 8;
  *(undefined8 *)(puVar11 + 0x10) = 4;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar8 = puVar11;
  FUN_10030d9e0();
  *(undefined **)(puVar11 + 0x40) = puVar8;
  *(undefined8 *)(puVar11 + 0x20) = 0xd000000000000015;
  *(undefined8 *)(puVar11 + 0x28) = 0x8000000100da2b70;
  objc_stub::ownerName((ID)param_2);
  SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar11 + 0x60) = puVar3;
  *(undefined **)(puVar11 + 0x68) = puVar8;
  *(String *)(puVar11 + 0x48) = SVar23;
  *(undefined **)(puVar11 + 0x88) = puVar3;
  *(undefined **)(puVar11 + 0x90) = puVar8;
  *(undefined8 *)(puVar11 + 0x70) = 0xd000000000000010;
  *(undefined8 *)(puVar11 + 0x78) = 0x8000000100da2b50;
  objc_stub::zoneName((ID)param_2);
  SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar11 + 0xb0) = puVar3;
  *(undefined **)(puVar11 + 0xb8) = puVar8;
  *(String *)(puVar11 + 0x98) = SVar23;
  pNVar7 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar7);
  objc_stub::setPredicate_((ID)_Var6.unknown);
  FUN_10038fef4(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 != 0) {
    _swift_errorRelease(unaff_x21);
    *param_1 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    return 0;
  }
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    uVar17 = *(ulong *)((_Var6.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8U;
    if (((ulong)_Var6.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = _Var6.unknown;
    }
    uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar17 != 0) {
    local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pNVar7 = (NSPredicate *)0x0;
    FUN_1003075b8(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU));
    if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003899d4);
      (*pcVar4)();
    }
    if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
      pIVar22 = (ID *)(_Var6.unknown + 0x20);
      do {
        puVar11 = local_b0;
        objc_stub::cloudKitRecordName(*pIVar22);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        uVar21 = *(ulong *)(puVar11 + 0x10);
        local_b0 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar21) {
          pNVar7 = (NSPredicate *)&DAT_00000001;
          FUN_1003075b8(1 < *(ulong *)(puVar11 + 0x18),uVar21 + 1);
        }
        *(ulong *)(local_b0 + 0x10) = uVar21 + 1;
        *(String *)(local_b0 + uVar21 * 0x10 + 0x20) = SVar23;
        uVar17 = uVar17 - 1;
        puVar11 = local_b0;
        pIVar22 = pIVar22 + 1;
      } while (uVar17 != 0);
    }
    else {
      IVar19 = 0;
      do {
        puVar11 = local_b0;
        IVar20 = IVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar19,_Var6);
        IVar9 = IVar20;
        _swift_unknownObjectRetain();
        objc_stub::cloudKitRecordName(IVar9);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _swift_unknownObjectRelease_n(IVar20,2);
        uVar21 = *(ulong *)(puVar11 + 0x10);
        local_b0 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar21) {
          pNVar7 = (NSPredicate *)&DAT_00000001;
          FUN_1003075b8(1 < *(ulong *)(puVar11 + 0x18),uVar21 + 1);
        }
        IVar19 = IVar19 + 1;
        *(ulong *)(local_b0 + 0x10) = uVar21 + 1;
        *(String *)(local_b0 + uVar21 * 0x10 + 0x20) = SVar23;
        puVar11 = local_b0;
      } while (uVar17 != IVar19);
    }
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar8 = puVar11;
  FUN_10036be78();
  _swift_bridgeObjectRelease(puVar11);
  *param_1 = (ulong)puVar3;
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    IVar19 = *(ID *)((_Var6.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8U;
    if (((ulong)_Var6.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = _Var6.unknown;
    }
    IVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (IVar19 == 0) {
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  else {
    if ((long)IVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003899d8);
      (*pcVar4)();
    }
    IVar20 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        IVar9 = *(ID *)(_Var6.unknown + IVar20 * 8 + 0x20);
        pvVar14 = param_5;
      }
      else {
        IVar9 = IVar20;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar20,_Var6);
        pvVar14 = param_5;
      }
      lVar10 = param_4 + 0x10;
      _swift_weakLoadStrong();
      param_5 = pvVar14;
      if (lVar10 != 0) {
        uVar18 = *(undefined8 *)(lVar10 + 0x10);
        _swift_retain(uVar18);
        _swift_release(lVar10);
        FUN_1000d468c(&local_b0);
        _swift_release(uVar18);
        param_5 = pvStack_90;
        puVar11 = local_98;
        _Var15.unknown = local_98;
        FUN_100004640(&local_b0);
        Swift::_StringGuts::grow(0x20,_Var15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        objc_stub::cloudKitRecordName(IVar9);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar24.bridgeObject = pvVar14;
        SVar24.str = (char *)pNVar7;
        Swift::String::append(SVar23,SVar24);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        SVar23.bridgeObject = &DAT_e500000000000000;
        SVar23.str = (char *)0x3d69727520;
        SVar25.bridgeObject = pvVar14;
        SVar25.str = (char *)pNVar7;
        Swift::String::append(SVar23,SVar25);
        objc_stub::FUN_100c07540(IVar9);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar26.bridgeObject = pvVar14;
        SVar26.str = (char *)pNVar7;
        Swift::String::append(SVar23,SVar26);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        FUN_1000d4db8(0xd000000000000017,0x8000000100da40e0,puVar11);
        _swift_bridgeObjectRelease(0x8000000100da40e0);
        FUN_100004594(&local_b0);
      }
      objc_stub::FUN_100c0ae60(IVar9,0);
      puVar11 = &_OBJC_CLASS___CKRecordZone;
      _objc_allocWithZone();
      pNVar7 = param_2;
      self = objc_stub::initWithZoneID_((ID)puVar11);
      objc_stub::cloudKitRecordName(IVar9);
      SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar14 = SVar23.bridgeObject;
      _swift_bridgeObjectRelease(pvVar14);
      uVar17 = (ulong)SVar23.str & 0xffffffffffff;
      if (((ulong)pvVar14 & 0x2000000000000000) != 0) {
        uVar17 = (ulong)pvVar14 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        this = (CKRecordID *)0x0;
        FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
        objc_stub::cloudKitRecordName(IVar9);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar7 = (NSPredicate *)objc_stub::zoneID(self);
        pCVar12 = (extension_CloudKit)::__C::CKRecordID::__allocating_init
                            (this,SVar23,(CKRecordZoneID *)pNVar7);
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        uVar17 = *(ulong *)((*param_1 & 0xffffffffffffff8) + 0x10);
        uVar21 = *(ulong *)((*param_1 & 0xffffffffffffff8) + 0x18);
        if (uVar21 >> 1 <= uVar17) {
          pNVar7 = (NSPredicate *)&DAT_00000001;
          Swift::Array<undefined>::__createNewBuffer(1 < uVar21,uVar17 + 1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,pCVar12);
      }
      IVar20 = IVar20 + 1;
    } while (IVar19 != IVar20);
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  uStack_a8 = 0;
  local_b0 = (undefined *)0x0;
  local_98 = (undefined *)0x0;
  uStack_a0 = 0;
  _Var6.unknown = (undefined *)&local_b0;
  FUN_10035f4e0(_Var6.unknown,param_3);
  FUN_100005808(&local_b0,&DAT_100fbe6f0,&DAT_100c42750);
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    uVar17 = *(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var2.unknown = _Var6.unknown;
    }
    uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (uVar17 == 0) {
    _swift_bridgeObjectRelease();
  }
  else {
    uVar21 = 0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10038995c);
          (*pcVar4)();
        }
        self_00 = *(ulong *)(_Var6.unknown + uVar21 * 8 + 0x20);
      }
      else {
        self_00 = uVar21;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar21,_Var6);
      }
      bVar5 = SCARRY8(uVar21,1);
      uVar21 = uVar21 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100389958);
        (*pcVar4)();
      }
      objc_stub::FUN_100c0eac0(self_00);
      SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var15.unknown = SVar23.bridgeObject;
      objc_stub::ownerName((ID)param_2);
      SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar23 == SVar24) {
        _swift_bridgeObjectRelease(_Var15.unknown);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
LAB_100389850:
        objc_stub::FUN_100c09700(self_00);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (*(long *)(puVar8 + 0x10) != 0) {
          Swift::Hasher::init(*(__int64 *)(puVar8 + 0x28));
          into.unknown = (undefined *)&local_b0;
          Swift::String::hash(into,SVar23);
          uVar13 = Swift::Hasher::_finalize(into);
          uVar16 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
          uVar13 = uVar13 & (uVar16 ^ 0xffffffffffffffff);
          if ((*(ulong *)(puVar8 + (uVar13 >> 6) * 8 + 0x38) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              pSVar1 = (String *)(*(long *)(puVar8 + 0x30) + uVar13 * 0x10);
              if ((SVar23 == *pSVar1) ||
                 (bVar5 = Swift::_stringCompareWithSmolCheck
                                    ((_StringGuts)pSVar1->str,(_StringGuts)pSVar1->bridgeObject,
                                     (_StringComparisonResult)(__int8)SVar23.str), bVar5)) {
                _swift_bridgeObjectRelease(SVar23.bridgeObject);
                IVar19 = objc_stub::managedObjectContext(self_00);
                objc_stub::deleteObject_(IVar19,self_00);
                goto LAB_100389750;
              }
              uVar13 = uVar13 + 1 & ~uVar16;
            } while ((*(ulong *)(puVar8 + (uVar13 >> 6) * 8 + 0x38) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
      }
      else {
        bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar23.str,_Var15,
                           (_StringComparisonResult)(__int8)SVar24.str);
        _swift_bridgeObjectRelease(_Var15.unknown);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        if (bVar5) goto LAB_100389850;
      }
LAB_100389750:
    } while (uVar21 != uVar17);
    _swift_bridgeObjectRelease(puVar8);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
  return 0;
}



/* Address: 0x1003899d8 | FUN_1003899d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003899d8(byte *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar2;
  undefined *self;
  ID IVar3;
  char *pcVar4;
  _StringGuts _Var6;
  byte bVar7;
  long unaff_x21;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 uStack_68;
  void *pvVar5;
  
  puVar1 = param_2;
  FUN_10038f124();
  if (puVar1 == (ulong *)0x0) {
    bVar7 = 1;
  }
  else {
    this = (CKRecordZoneID *)0x0;
    FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
    objc_stub::cloudKitZoneName((ID)param_2);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    objc_stub::cloudKitZoneOwnerName((ID)param_2);
    SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar5 = SVar9.bridgeObject;
    pCVar2 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(this,SVar8,SVar9);
    self = &_OBJC_CLASS___CKRecordZone;
    _objc_allocWithZone();
    IVar3 = objc_stub::initWithZoneID_((ID)self);
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar1) + 0xa8))();
    if (unaff_x21 == 0) {
      if (IVar3 == 0) {
        bVar7 = 1;
      }
      else {
        IVar3 = objc_stub::recordID(IVar3);
        objc_stub::recordName(IVar3);
        SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pcVar4 = SVar8.str;
        FUN_100052458(pcVar4,SVar8.bridgeObject,param_4);
        _swift_bridgeObjectRelease(SVar8.bridgeObject);
        bVar7 = (byte)pcVar4 & 1;
      }
    }
    else {
      FUN_1000d468c(auStack_88);
      _Var6.unknown = local_70;
      FUN_100004640(auStack_88);
      Swift::_StringGuts::grow(0x35,_Var6);
      SVar8.bridgeObject = (void *)0x8000000100da4060;
      SVar8.str = (char *)0xd000000000000012;
      SVar10.bridgeObject = pvVar5;
      SVar10.str = (char *)pCVar2;
      Swift::String::append(SVar8,SVar10);
      objc_stub::cloudKitRecordName((ID)param_2);
      SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar11.bridgeObject = pvVar5;
      SVar11.str = (char *)pCVar2;
      Swift::String::append(SVar8,SVar11);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      SVar9.bridgeObject = (void *)0x8000000100da4080;
      SVar9.str = (char *)0xd00000000000001f;
      SVar12.bridgeObject = pvVar5;
      SVar12.str = (char *)pCVar2;
      Swift::String::append(SVar9,SVar12);
      _swift_getErrorValue();
      Swift::DefaultStringInterpolation::_appendInterpolation(local_b0,uStack_a8);
      FUN_1000d4df0(0,0xe000000000000000,local_70,uStack_68);
      _swift_errorRelease();
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100004594(auStack_88);
      bVar7 = 0;
    }
  }
  *param_1 = bVar7;
  return;
}



/* Address: 0x100389d04 | FUN_100389d04 */

undefined8 FUN_100389d04(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  bool bVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  undefined8 local_48;
  
  bVar1 = false;
  FUN_10032b0c8();
  SVar2 = Swift::__typeName(bVar1);
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2f;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  FUN_1000037f0(&DAT_100fbdbc8,&DAT_100c3f078);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_bridgeObjectRelease(0xe100000000000000);
  return local_48;
}



/* Address: 0x100389de0 | FUN_100389de0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100389de0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  NSString *pNVar7;
  ID self;
  NSPredicate *pNVar8;
  undefined *puVar9;
  NSArray *pNVar10;
  ID IVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long unaff_x21;
  ulong uVar17;
  String SVar18;
  undefined *local_98;
  undefined1 auStack_90 [32];
  undefined8 local_70;
  long local_68;
  
  bVar5 = false;
  FUN_10038fef4();
  SVar18 = Swift::__typeName(bVar5);
  puVar6 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  self = objc_stub::initWithEntityName_((ID)puVar6,pNVar7);
  pNVar8 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar6 = &DAT_100fbeb40;
  FUN_1000037f0("%K != nil AND %K CONTAINS %@",&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 6;
  *(undefined8 *)(puVar6 + 0x10) = 3;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar9 = puVar6;
  FUN_10030d9e0();
  *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar6 + 0x28) = 0x8000000100da2b90;
  *(undefined **)(puVar6 + 0x60) = puVar2;
  *(undefined **)(puVar6 + 0x68) = puVar9;
  *(undefined **)(puVar6 + 0x40) = puVar9;
  *(undefined8 *)(puVar6 + 0x48) = 0x52557463656a626f;
  *(undefined8 *)(puVar6 + 0x50) = 0xe900000000000049;
  *(undefined **)(puVar6 + 0x88) = puVar2;
  *(undefined **)(puVar6 + 0x90) = puVar9;
  *(undefined8 *)(puVar6 + 0x70) = param_2;
  *(undefined8 *)(puVar6 + 0x78) = param_3;
  _swift_bridgeObjectRetain(param_3);
  pNVar8 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar8);
  objc_stub::setPredicate_(self,pNVar8);
  objc_stub::FUN_100c0d760(self,2);
  puVar6 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(long *)(puVar6 + 0x20) = param_4;
  *(ulong *)(puVar6 + 0x28) = param_5;
  _swift_bridgeObjectRetain(param_5);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar6);
  objc_stub::FUN_100c0d3e0(self,pNVar10);
  objc_stub::FUN_100c0d780(self,1);
  FUN_1000037f0(&DAT_100fc0698,&DAT_100c42518);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    IVar11 = self;
    FUN_100354de0();
    _swift_bridgeObjectRelease(self);
    puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
    if (IVar11 != 0) {
      uVar15 = *(ulong *)(IVar11 + 0x10);
      local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar15 != 0) {
        uVar17 = 0;
        do {
          while( true ) {
            if (*(ulong *)(IVar11 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10038a218);
              (*pcVar4)();
            }
            lVar16 = *(long *)(IVar11 + 0x20 + uVar17 * 8);
            if (*(long *)(lVar16 + 0x10) != 0) break;
LAB_10038a088:
            uVar17 = uVar17 + 1;
            if (uVar15 == uVar17) goto LAB_10038a1c4;
          }
          _swift_bridgeObjectRetain(lVar16);
          lVar12 = param_4;
          uVar14 = param_5;
          FUN_100071370(param_4);
          if ((uVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar16);
            goto LAB_10038a088;
          }
          FUN_10000cbfc(*(long *)(lVar16 + 0x38) + lVar12 * 0x20,auStack_90);
          _swift_bridgeObjectRelease(lVar16);
          puVar13 = &local_70;
          _swift_dynamicCast(puVar13,auStack_90,puVar2 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          lVar16 = local_68;
          uVar3 = local_70;
          if ((((ulong)puVar13 & 1) == 0) || (local_68 == 0)) goto LAB_10038a088;
          puVar6 = local_98;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar6 & 1) == 0) {
            plVar1 = (long *)(local_98 + 0x10);
            local_98 = (undefined *)0x0;
            FUN_10037f834(0,*plVar1 + 1,1);
          }
          uVar14 = *(ulong *)(local_98 + 0x10);
          if (*(ulong *)(local_98 + 0x18) >> 1 <= uVar14) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_98 + 0x18));
            FUN_10037f834(puVar6,uVar14 + 1,1,local_98);
            local_98 = puVar6;
          }
          *(ulong *)(local_98 + 0x10) = uVar14 + 1;
          *(undefined8 *)(local_98 + uVar14 * 0x10 + 0x20) = uVar3;
          *(long *)(local_98 + uVar14 * 0x10 + 0x28) = lVar16;
          bVar5 = uVar15 - 1 != uVar17;
          uVar17 = uVar17 + 1;
        } while (bVar5);
      }
LAB_10038a1c4:
      _swift_bridgeObjectRelease(IVar11);
      puVar6 = local_98;
      FUN_10036be78();
      _swift_bridgeObjectRelease(local_98);
    }
  }
  else {
    _swift_errorRelease(unaff_x21);
    puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  *param_1 = puVar6;
  return;
}



/* Address: 0x10038a218 | FUN_10038a218 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10038a218(ulong *param_1,_ArrayBuffer param_2,undefined8 param_3,undefined8 param_4,
                  void *param_5)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  NSPredicate *pNVar6;
  undefined *puVar7;
  NSPredicate *self;
  Data DVar8;
  CKRecordZoneID *this;
  undefined *puVar9;
  ID IVar10;
  CKRecordID *this_00;
  CKRecordID *pCVar11;
  ulong extraout_x1;
  void *pvVar12;
  _StringGuts _Var13;
  long unaff_x21;
  ulong uVar14;
  NSPredicate *pNVar15;
  NSPredicate *pNVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  long local_c8;
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100329880();
  pNVar6 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar9 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 4;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar7 = puVar9;
  FUN_10030d9e0();
  *(undefined **)(puVar9 + 0x40) = puVar7;
  *(undefined8 *)(puVar9 + 0x20) = 0xd000000000000015;
  *(undefined8 *)(puVar9 + 0x28) = 0x8000000100da2b70;
  SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar9 + 0x60) = puVar3;
  *(undefined **)(puVar9 + 0x68) = puVar7;
  *(String *)(puVar9 + 0x48) = SVar17;
  pNVar6 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar6);
  objc_stub::setPredicate_((ID)param_2.unknown);
  FUN_10038fef4(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    *param_1 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((ulong)param_2.unknown >> 0x3e == 0) {
      pNVar15 = *(NSPredicate **)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
        _Var1.unknown = param_2.unknown;
      }
      pNVar15 = (NSPredicate *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (pNVar15 == (NSPredicate *)0x0) {
      _swift_bridgeObjectRelease(param_2.unknown);
    }
    else {
      if ((long)pNVar15 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10038a81c);
        (*pcVar4)();
      }
      local_c8 = 0;
      pNVar16 = (NSPredicate *)0x0;
      do {
        if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
          self = *(NSPredicate **)(param_2.unknown + (long)pNVar16 * 8 + 0x20);
        }
        else {
          self = pNVar16;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar16,param_2);
        }
        DVar8.unknown = (undefined *)objc_stub::cloudKitRecordData((ID)self);
        if (DVar8.unknown == (undefined *)0x0) {
          DVar8.unknown = (undefined *)0x0;
          uVar14 = 0xf000000000000000;
LAB_10038a45c:
          FUN_10003bf18(DVar8.unknown,uVar14);
          FUN_10038f124();
          if (DVar8.unknown == (undefined *)0x0) {
            IVar10 = objc_stub::FUN_100c05b40((ID)self);
            if ((IVar10 & 1) == 0) {
              IVar10 = objc_stub::managedObjectContext((ID)self);
              objc_stub::deleteObject_(IVar10);
              bVar5 = SCARRY8(local_c8,1);
              local_c8 = local_c8 + 1;
              pNVar6 = self;
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10038a800);
                (*pcVar4)();
              }
            }
          }
          else {
            this = (CKRecordZoneID *)0x0;
            FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
            objc_stub::cloudKitZoneName((ID)self);
            SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            objc_stub::cloudKitZoneOwnerName((ID)self);
            SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            param_5 = SVar18.bridgeObject;
            pNVar6 = (NSPredicate *)
                     (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                               (this,SVar17,SVar18);
            puVar9 = &_OBJC_CLASS___CKRecordZone;
            _objc_allocWithZone();
            IVar10 = objc_stub::initWithZoneID_((ID)puVar9);
            objc_stub::cloudKitRecordName((ID)self);
            SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pvVar12 = SVar17.bridgeObject;
            _swift_bridgeObjectRelease(pvVar12);
            uVar14 = (ulong)SVar17.str & 0xffffffffffff;
            if (((ulong)pvVar12 & 0x2000000000000000) != 0) {
              uVar14 = (ulong)pvVar12 >> 0x38 & 0xf;
            }
            if (uVar14 != 0) {
              this_00 = (CKRecordID *)0x0;
              FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
              objc_stub::cloudKitRecordName((ID)self);
              SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              pNVar6 = (NSPredicate *)objc_stub::zoneID(IVar10);
              pCVar11 = (extension_CloudKit)::__C::CKRecordID::__allocating_init
                                  (this_00,SVar17,(CKRecordZoneID *)pNVar6);
              Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
              uVar14 = *(ulong *)((*param_1 & 0xffffffffffffff8) + 0x10);
              uVar2 = *(ulong *)((*param_1 & 0xffffffffffffff8) + 0x18);
              if (uVar2 >> 1 <= uVar14) {
                pNVar6 = (NSPredicate *)&DAT_00000001;
                Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar14 + 1);
              }
              Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar14,pCVar11);
            }
          }
        }
        else {
          uVar14 = extraout_x1;
          DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
          if (0xe < uVar14 >> 0x3c) goto LAB_10038a45c;
          FUN_10003bf18(DVar8.unknown,uVar14);
          FUN_10003bf18(0,0xf000000000000000);
        }
        pNVar16 = pNVar16 + 1;
      } while (pNVar15 != pNVar16);
      _swift_bridgeObjectRelease(param_2.unknown);
      if (0 < local_c8) {
        FUN_1000d468c(auStack_90);
        _Var13.unknown = local_78;
        FUN_100004640(auStack_90);
        Swift::_StringGuts::grow(0x29,_Var13);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar17 = Swift::CustomStringConvertible::get_description();
        SVar18.bridgeObject = param_5;
        SVar18.str = (char *)pNVar6;
        Swift::String::append(SVar17,SVar18);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        SVar17.bridgeObject = (void *)0xea00000000002973;
        SVar17.str = (char *)0x286e616870726f20;
        SVar19.bridgeObject = param_5;
        SVar19.str = (char *)pNVar6;
        Swift::String::append(SVar17,SVar19);
        FUN_1000d4dd4(0xd00000000000001d,0x8000000100da4040,local_78,uStack_70);
        _swift_bridgeObjectRelease(0x8000000100da4040);
        FUN_100004594(auStack_90);
      }
    }
  }
  else {
    _swift_errorRelease();
    *param_1 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10038a820 | FUN_10038a820 */

void FUN_10038a820(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long *unaff_x20;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar9 = (ulong *)(param_1 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar12 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *puVar9;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      _swift_bridgeObjectRetain(uVar4);
      uVar8 = uVar4;
      FUN_100370984(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar8);
      lVar10 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar9,~uVar11,lVar10,0);
      return;
    }
    uVar12 = puVar9[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10038a95c);
  (*pcVar6)();
}



/* Address: 0x10038a95c | FUN_10038a95c */

/* WARNING: Removing unreachable block (ram,0x00010038ac98) */
/* WARNING: Removing unreachable block (ram,0x00010038aca8) */

undefined * FUN_10038a95c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  String *pSVar3;
  undefined8 *puVar4;
  char *pcVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  String SVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  bool bVar12;
  byte bVar13;
  Hasher into;
  ulong uVar14;
  undefined *puVar15;
  void *pvVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong local_100;
  long local_f8;
  undefined *local_e8;
  undefined1 auStack_e0 [16];
  undefined *local_d0;
  ulong uStack_c8;
  long *local_c0;
  long local_98;
  ulong *puStack_90;
  ulong local_88;
  long lStack_80;
  ulong local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_release(param_2);
    param_2 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    puVar20 = (ulong *)(param_1 + 0x38);
    uVar19 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar21 = 0xffffffffffffffff;
    if (-uVar19 < 0x40) {
      uVar21 = ~(-1L << (-uVar19 & 0x3f));
    }
    uVar21 = uVar21 & *puVar20;
    puVar1 = param_2 + 0x38;
    _swift_bridgeObjectRetain();
    lVar10 = 0;
    local_100 = ~uVar19;
    lVar9 = 0;
    while( true ) {
      while (uVar21 != 0) {
        uVar14 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar21 = uVar21 - 1 & uVar21;
        pSVar3 = (String *)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) * 0x10 +
                 lVar10 * 0x400);
        pcVar5 = pSVar3->str;
        puVar15 = pSVar3->bridgeObject;
        SVar8 = *pSVar3;
        local_f8 = lVar10;
        local_98 = param_1;
        puStack_90 = puVar20;
        local_88 = local_100;
        lStack_80 = lVar10;
        local_78 = uVar21;
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        _swift_bridgeObjectRetain(puVar15);
        into.unknown = auStack_e0;
        Swift::String::hash(into,SVar8);
        uVar14 = Swift::Hasher::_finalize(into);
        uVar18 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar14 = uVar14 & (uVar18 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
          do {
            puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar14 * 0x10);
            _Var6.unknown = (undefined *)*puVar4;
            _Var7.unknown = (undefined *)puVar4[1];
            if ((_Var6.unknown == pcVar5 && _Var7.unknown == puVar15) ||
               (bVar12 = Swift::_stringCompareWithSmolCheck
                                   (_Var6,_Var7,(_StringComparisonResult)(__int8)pcVar5), bVar12)) {
              _swift_bridgeObjectRelease(puVar15);
              uVar21 = (1L << ((ulong)(byte)param_2[0x20] & 0x3f)) + 0x3fU >> 6;
              local_c0 = &local_98;
              pvVar17 = (void *)(uVar21 << 3);
              local_d0 = param_2;
              uStack_c8 = uVar14;
              if (((param_2[0x20] & 0x3f) < 0xe) ||
                 ((bVar13 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast
                                      (0xc,3,0,0xf,4,0), (bVar13 & 1) != 0 &&
                  (pvVar16 = pvVar17, _swift_stdlib_isStackAllocationSafe(pvVar17,8),
                  ((ulong)pvVar16 & 1) != 0)))) {
                (*(code *)PTR____chkstk_darwin_100ea82c0)();
                puVar15 = (undefined *)
                          ((long)&local_100 - ((long)pvVar17 + 0xfU & 0x1ffffffffffffff0));
                _memcpy(puVar15,puVar1,(size_t)pvVar17);
                FUN_10038b008(puVar15,uVar21,param_2,uVar14,&local_98);
              }
              else {
                pvVar16 = pvVar17;
                _swift_slowAlloc(pvVar17,0xffffffffffffffff);
                if (pvVar16 == (void *)0x0) {
                    /* WARNING: Does not return */
                  pcVar11 = (code *)SoftwareBreakpoint(1,0x10038ac98);
                  (*pcVar11)();
                }
                _memcpy(pvVar16,puVar1,(size_t)pvVar17);
                FUN_10038bbf4(&local_e8,pvVar16,uVar21);
                _swift_slowDealloc(pvVar16,0xffffffffffffffff,0xffffffffffffffff);
                puVar15 = local_e8;
              }
              _swift_release(param_2);
              FUN_10000c650(local_98,puStack_90,local_88,lStack_80,local_78);
              param_2 = puVar15;
              goto LAB_10038abc0;
            }
            uVar14 = uVar14 + 1 & ~uVar18;
          } while ((*(ulong *)(puVar1 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
        }
        _swift_bridgeObjectRelease(puVar15);
        lVar10 = local_f8;
        lVar9 = local_f8;
      }
      lVar2 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10038ac00);
        (*pcVar11)();
      }
      if ((long)(0x3f - uVar19 >> 6) <= lVar2) break;
      uVar21 = puVar20[lVar2];
      lVar10 = lVar2;
    }
    FUN_10000c650(param_1,puVar20,local_100,lVar9,0);
  }
LAB_10038abc0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10038acf4 | FUN_10038acf4 */

/* WARNING: Removing unreachable block (ram,0x00010038afac) */
/* WARNING: Removing unreachable block (ram,0x00010038afbc) */

undefined * FUN_10038acf4(long param_1,undefined *param_2)

{
  undefined *puVar1;
  String *pSVar2;
  undefined8 *puVar3;
  char *pcVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  byte bVar10;
  Hasher into;
  ulong uVar11;
  undefined *puVar12;
  void *pvVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [16];
  undefined *local_a0;
  ulong uStack_98;
  long *local_90;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(long *)(param_2 + 0x10) == 0) {
    _swift_release(param_2);
    puVar12 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    lVar16 = *(long *)(param_1 + 0x10);
    local_c8 = param_1;
    _swift_bridgeObjectRetain();
    if (lVar16 != 0) {
      lVar17 = 0;
      puVar1 = param_2 + 0x38;
      do {
        pSVar2 = (String *)(param_1 + 0x20 + lVar17 * 0x10);
        pcVar4 = pSVar2->str;
        puVar12 = pSVar2->bridgeObject;
        SVar7 = *pSVar2;
        lVar17 = lVar17 + 1;
        local_c0 = lVar17;
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        _swift_bridgeObjectRetain(puVar12);
        into.unknown = auStack_b0;
        Swift::String::hash(into,SVar7);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar15 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar11 = uVar11 & (uVar15 ^ 0xffffffffffffffff);
        if ((*(ulong *)(puVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
          do {
            puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
            _Var5.unknown = (undefined *)*puVar3;
            _Var6.unknown = (undefined *)puVar3[1];
            if ((_Var5.unknown == pcVar4 && _Var6.unknown == puVar12) ||
               (bVar9 = Swift::_stringCompareWithSmolCheck
                                  (_Var5,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar9)) {
              _swift_bridgeObjectRelease(puVar12);
              uVar15 = (1L << ((ulong)(byte)param_2[0x20] & 0x3f)) + 0x3fU >> 6;
              local_90 = &local_c8;
              pvVar14 = (void *)(uVar15 << 3);
              local_a0 = param_2;
              uStack_98 = uVar11;
              if (((param_2[0x20] & 0x3f) < 0xe) ||
                 ((bVar10 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast
                                      (0xc,3,0,0xf,4,0), (bVar10 & 1) != 0 &&
                  (pvVar13 = pvVar14, _swift_stdlib_isStackAllocationSafe(pvVar14,8),
                  ((ulong)pvVar13 & 1) != 0)))) {
                (*(code *)PTR____chkstk_darwin_100ea82c0)();
                puVar12 = auStack_d0 + -((long)pvVar14 + 0xfU & 0x1ffffffffffffff0);
                _memcpy(puVar12,puVar1,(size_t)pvVar14);
                FUN_10038b238(puVar12,uVar15,param_2,uVar11,&local_c8);
              }
              else {
                pvVar13 = pvVar14;
                _swift_slowAlloc(pvVar14,0xffffffffffffffff);
                if (pvVar13 == (void *)0x0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10038afac);
                  (*pcVar8)();
                }
                _memcpy(pvVar13,puVar1,(size_t)pvVar14);
                FUN_10038bc24(&local_b8,pvVar13,uVar15);
                _swift_slowDealloc(pvVar13,0xffffffffffffffff,0xffffffffffffffff);
                puVar12 = local_b8;
              }
              _swift_release(param_2);
              _swift_bridgeObjectRelease(local_c8);
              goto LAB_10038aed8;
            }
            uVar11 = uVar11 + 1 & ~uVar15;
          } while ((*(ulong *)(puVar1 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
        }
        _swift_bridgeObjectRelease(puVar12);
      } while (lVar17 != lVar16);
    }
    _swift_bridgeObjectRelease(param_1);
    puVar12 = param_2;
  }
LAB_10038aed8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return puVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10038b008 | FUN_10038b008 */

void FUN_10038b008(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  String *pSVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  String SVar6;
  code *pcVar7;
  bool bVar8;
  Hasher into;
  _StringGuts _Var9;
  _StringGuts _Var10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  lVar11 = *(long *)(param_3 + 0x10);
  uVar13 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar13) = *(ulong *)(param_1 + uVar13) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar11 = lVar11 + -1;
  do {
    while( true ) {
      lVar3 = param_5[3];
      uVar13 = param_5[4];
      lVar14 = lVar3;
      if (uVar13 == 0) {
        uVar12 = param_5[2] + 0x40U >> 6;
        lVar15 = lVar3;
        do {
          lVar14 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b234);
            (*pcVar7)();
          }
          if ((long)uVar12 <= lVar14) {
            if ((long)uVar12 <= lVar3 + 1) {
              uVar12 = lVar3 + 1;
            }
            param_5[3] = uVar12 - 1;
            param_5[4] = 0;
            _swift_retain(param_3);
            FUN_10038dd2c(param_1,param_2,lVar11,param_3);
            return;
          }
          uVar13 = *(ulong *)(param_5[1] + lVar14 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar13 == 0);
      }
      uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      pSVar1 = (String *)
               (*(long *)(*param_5 + 0x30) + LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) * 0x10 +
               lVar14 * 0x400);
      pcVar4 = pSVar1->str;
      puVar5 = pSVar1->bridgeObject;
      SVar6 = *pSVar1;
      param_5[3] = lVar14;
      param_5[4] = uVar13 - 1 & uVar13;
      Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
      _swift_bridgeObjectRetain(puVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar13 = Swift::Hasher::_finalize(into);
      uVar12 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar13 = uVar13 & (uVar12 ^ 0xffffffffffffffff);
      uVar17 = uVar13 >> 6;
      uVar16 = 1L << (uVar13 & 0x3f);
      if ((uVar16 & *(ulong *)(param_3 + 0x38 + uVar17 * 8)) != 0) break;
LAB_10038b1b4:
      _swift_bridgeObjectRelease(puVar5);
    }
    plVar2 = (long *)(*(long *)(param_3 + 0x30) + uVar13 * 0x10);
    _Var9.unknown = (undefined *)*plVar2;
    _Var10.unknown = (undefined *)plVar2[1];
    if (_Var9.unknown != pcVar4 || _Var10.unknown != puVar5) {
      do {
        bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var9,_Var10,(_StringComparisonResult)(__int8)pcVar4);
        if (bVar8) break;
        uVar13 = uVar13 + 1 & ~uVar12;
        uVar17 = uVar13 >> 6;
        uVar16 = 1L << (uVar13 & 0x3f);
        if ((uVar16 & *(ulong *)(param_3 + 0x38 + uVar17 * 8)) == 0) goto LAB_10038b1b4;
        plVar2 = (long *)(*(long *)(param_3 + 0x30) + uVar13 * 0x10);
        _Var9.unknown = (undefined *)*plVar2;
        _Var10.unknown = (undefined *)plVar2[1];
      } while ((_Var9.unknown != pcVar4) || (_Var10.unknown != puVar5));
    }
    _swift_bridgeObjectRelease(puVar5);
    uVar13 = *(ulong *)(param_1 + uVar17 * 8);
    *(ulong *)(param_1 + uVar17 * 8) = uVar13 & (uVar16 ^ 0xffffffffffffffff);
    if ((uVar13 & uVar16) != 0) {
      bVar8 = SBORROW8(lVar11,1);
      lVar11 = lVar11 + -1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b238);
        (*pcVar7)();
      }
      if (lVar11 == 0) {
        return;
      }
    }
  } while( true );
}



/* Address: 0x10038b238 | FUN_10038b238 */

void FUN_10038b238(long param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  String *pSVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  String SVar6;
  code *pcVar7;
  bool bVar8;
  Hasher into;
  _StringGuts _Var9;
  _StringGuts _Var10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_a8 [72];
  
  lVar11 = *(long *)(param_3 + 0x10);
  uVar12 = param_4 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) & (-1L << (param_4 & 0x3f)) - 1U;
  lVar11 = lVar11 + -1;
  do {
    while( true ) {
      uVar12 = param_5[1];
      uVar13 = *(ulong *)(*param_5 + 0x10);
      if (uVar12 == uVar13) {
        _swift_retain(param_3);
        FUN_10038dd2c(param_1,param_2,lVar11,param_3);
        return;
      }
      if (uVar13 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b414);
        (*pcVar7)();
      }
      lVar2 = *param_5 + uVar12 * 0x10;
      pSVar1 = (String *)(lVar2 + 0x20);
      pcVar4 = pSVar1->str;
      puVar5 = *(undefined **)(lVar2 + 0x28);
      SVar6 = *pSVar1;
      param_5[1] = uVar12 + 1;
      Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
      _swift_bridgeObjectRetain(puVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar12 = Swift::Hasher::_finalize(into);
      uVar13 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
      uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
      uVar15 = uVar12 >> 6;
      uVar14 = 1L << (uVar12 & 0x3f);
      if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) != 0) break;
LAB_10038b3a8:
      _swift_bridgeObjectRelease(puVar5);
    }
    plVar3 = (long *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    _Var9.unknown = (undefined *)*plVar3;
    _Var10.unknown = (undefined *)plVar3[1];
    if (_Var9.unknown != pcVar4 || _Var10.unknown != puVar5) {
      do {
        bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var9,_Var10,(_StringComparisonResult)(__int8)pcVar4);
        if (bVar8) break;
        uVar12 = uVar12 + 1 & ~uVar13;
        uVar15 = uVar12 >> 6;
        uVar14 = 1L << (uVar12 & 0x3f);
        if ((uVar14 & *(ulong *)(param_3 + 0x38 + uVar15 * 8)) == 0) goto LAB_10038b3a8;
        plVar3 = (long *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
        _Var9.unknown = (undefined *)*plVar3;
        _Var10.unknown = (undefined *)plVar3[1];
      } while ((_Var9.unknown != pcVar4) || (_Var10.unknown != puVar5));
    }
    _swift_bridgeObjectRelease(puVar5);
    uVar12 = *(ulong *)(param_1 + uVar15 * 8);
    *(ulong *)(param_1 + uVar15 * 8) = uVar12 & (uVar14 ^ 0xffffffffffffffff);
    if ((uVar12 & uVar14) != 0) {
      bVar8 = SBORROW8(lVar11,1);
      lVar11 = lVar11 + -1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b418);
        (*pcVar7)();
      }
      if (lVar11 == 0) {
        return;
      }
    }
  } while( true );
}



/* Address: 0x10038b418 | FUN_10038b418 */

/* WARNING: Removing unreachable block (ram,0x00010038b594) */
/* WARNING: Removing unreachable block (ram,0x00010038b5a4) */

undefined1 * FUN_10038b418(undefined8 param_1,long param_2)

{
  code *pcVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulong uVar6;
  undefined1 auStack_80 [8];
  undefined1 *local_78 [3];
  long local_60;
  undefined8 uStack_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar6 = (1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f)) + 0x3fU >> 6;
  pvVar5 = (void *)(uVar6 << 3);
  local_60 = param_2;
  uStack_58 = param_1;
  if (((*(byte *)(param_2 + 0x20) & 0x3f) < 0xe) ||
     ((bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
      (bVar2 & 1) != 0 &&
      (pvVar4 = pvVar5, _swift_stdlib_isStackAllocationSafe(pvVar5,8), ((ulong)pvVar4 & 1) != 0))))
  {
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    puVar3 = auStack_80 + -((long)pvVar5 + 0xfU & 0x1ffffffffffffff0);
    _bzero(puVar3,(size_t)pvVar5);
    FUN_10038b5f0(puVar3,uVar6,param_2,param_1);
  }
  else {
    pvVar4 = pvVar5;
    _swift_slowAlloc(pvVar5,0xffffffffffffffff);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10038b594);
      (*pcVar1)();
    }
    _bzero(pvVar4,(size_t)pvVar5);
    FUN_10038bc54(local_78,pvVar4,uVar6);
    _swift_slowDealloc(pvVar4,0xffffffffffffffff,0xffffffffffffffff);
    puVar3 = local_78[0];
  }
  _swift_release(param_2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10038b5f0 | FUN_10038b5f0 */

void FUN_10038b5f0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  String *pSVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  String SVar6;
  code *pcVar7;
  bool bVar8;
  Hasher HVar9;
  _StringGuts _Var10;
  _StringGuts _Var11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong local_c0;
  long local_b8;
  undefined1 auStack_a8 [72];
  
  if (*(ulong *)(param_3 + 0x10) <= *(ulong *)(param_4 + 0x10)) {
    local_b8 = 0;
    uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
      uVar15 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(param_3 + 0x38);
    lVar13 = 0;
LAB_10038b6d0:
    do {
      if (uVar15 == 0) {
        do {
          lVar18 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b9c4);
            (*pcVar7)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar18) goto LAB_10038b810;
          uVar15 = ((ulong *)(param_3 + 0x38))[lVar18];
          lVar13 = lVar13 + 1;
        } while (uVar15 == 0);
        uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
      }
      else {
        uVar14 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
        uVar15 = uVar15 - 1 & uVar15;
        lVar18 = lVar13;
      }
      uVar16 = LZCOUNT(uVar14);
      pSVar2 = (String *)(*(long *)(param_3 + 0x30) + (uVar16 | lVar18 << 6) * 0x10);
      pcVar4 = pSVar2->str;
      puVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_4 + 0x28));
      _swift_bridgeObjectRetain(puVar5);
      HVar9.unknown = auStack_a8;
      Swift::String::hash(HVar9,SVar6);
      uVar14 = Swift::Hasher::_finalize(HVar9);
      uVar17 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
      uVar14 = uVar14 & (uVar17 ^ 0xffffffffffffffff);
      lVar13 = lVar18;
      if ((*(ulong *)(param_4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0) {
        do {
          puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar14 * 0x10);
          _Var10.unknown = (undefined *)*puVar1;
          _Var11.unknown = (undefined *)puVar1[1];
          if ((_Var10.unknown == pcVar4 && _Var11.unknown == puVar5) ||
             (bVar8 = Swift::_stringCompareWithSmolCheck
                                (_Var10,_Var11,(_StringComparisonResult)(__int8)pcVar4), bVar8)) {
            _swift_bridgeObjectRelease(puVar5);
            uVar14 = (uVar16 & 0xffffffffffffffc0 | lVar18 << 6) >> 3;
            *(ulong *)(param_1 + uVar14) = *(ulong *)(param_1 + uVar14) | 1L << (uVar16 & 0x3f);
            bVar8 = SCARRY8(local_b8,1);
            local_b8 = local_b8 + 1;
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b80c);
              (*pcVar7)();
            }
            goto LAB_10038b6d0;
          }
          uVar14 = uVar14 + 1 & ~uVar17;
        } while ((*(ulong *)(param_4 + 0x38 + (uVar14 >> 6) * 8) >> (uVar14 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar5);
    } while( true );
  }
  local_b8 = 0;
  uVar15 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  local_c0 = 0xffffffffffffffff;
  if ((*(byte *)(param_4 + 0x20) & 0x3f) < 6) {
    local_c0 = ~(-1L << (uVar15 & 0x3f));
  }
  local_c0 = local_c0 & *(ulong *)(param_4 + 0x38);
  lVar13 = 0;
LAB_10038b868:
  do {
    if (local_c0 == 0) {
      do {
        lVar18 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b9c8);
          (*pcVar7)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar18) {
LAB_10038b810:
          _swift_retain(param_3);
          FUN_10038dd2c(param_1,param_2,local_b8,param_3);
          return;
        }
        local_c0 = ((ulong *)(param_4 + 0x38))[lVar18];
        lVar13 = lVar13 + 1;
      } while (local_c0 == 0);
      uVar12 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
    }
    else {
      uVar12 = (local_c0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c0 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_c0 = local_c0 - 1 & local_c0;
      lVar18 = lVar13;
    }
    pSVar2 = (String *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar12) | lVar18 << 6) * 0x10);
    pcVar4 = pSVar2->str;
    puVar5 = pSVar2->bridgeObject;
    SVar6 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(param_3 + 0x28));
    _swift_bridgeObjectRetain(puVar5);
    HVar9.unknown = auStack_a8;
    Swift::String::hash(HVar9,SVar6);
    uVar12 = Swift::Hasher::_finalize(HVar9);
    uVar14 = -1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar14 ^ 0xffffffffffffffff);
    uVar16 = uVar12 >> 6;
    uVar17 = 1L << (uVar12 & 0x3f);
    lVar13 = lVar18;
    if ((uVar17 & *(ulong *)(param_3 + 0x38 + uVar16 * 8)) == 0) {
LAB_10038b854:
      _swift_bridgeObjectRelease(puVar5);
      goto LAB_10038b868;
    }
    plVar3 = (long *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    _Var10.unknown = (undefined *)*plVar3;
    _Var11.unknown = (undefined *)plVar3[1];
    if (_Var10.unknown != pcVar4 || _Var11.unknown != puVar5) {
      do {
        bVar8 = Swift::_stringCompareWithSmolCheck
                          (_Var10,_Var11,(_StringComparisonResult)(__int8)pcVar4);
        if (bVar8) break;
        uVar12 = uVar12 + 1 & ~uVar14;
        uVar16 = uVar12 >> 6;
        uVar17 = 1L << (uVar12 & 0x3f);
        if ((uVar17 & *(ulong *)(param_3 + 0x38 + uVar16 * 8)) == 0) goto LAB_10038b854;
        plVar3 = (long *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
        _Var10.unknown = (undefined *)*plVar3;
        _Var11.unknown = (undefined *)plVar3[1];
      } while ((_Var10.unknown != pcVar4) || (_Var11.unknown != puVar5));
    }
    _swift_bridgeObjectRelease(puVar5);
    *(ulong *)(param_1 + uVar16 * 8) = *(ulong *)(param_1 + uVar16 * 8) | uVar17;
    bVar8 = SCARRY8(local_b8,1);
    local_b8 = local_b8 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10038b9c0);
      (*pcVar7)();
    }
  } while( true );
}



/* Address: 0x10038b9c8 | FUN_10038b9c8 */

void FUN_10038b9c8(ulong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  undefined1 auStack_90 [48];
  
  puVar7 = param_1;
  _swift_getObjectType();
  puVar8 = puVar7;
  (extension_CloudKit)::__C::CKRecord::allKeys();
  puVar9 = puVar8;
  FUN_10036be78();
  _swift_bridgeObjectRelease(puVar8);
  puVar5 = PTR__swift_isaMask_100eae3b0;
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x68))();
  (*(code *)puVar7[0xc])();
  puVar10 = puVar8;
  FUN_10038b418();
  _swift_bridgeObjectRelease(puVar8);
  puVar8 = (ulong *)&DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar12 = auStack_90;
  _swift_initStackObject();
  puVar8[3] = 2;
  puVar8[2] = 1;
  puVar11 = puVar8;
  (*(code *)puVar7[0xf])();
  puVar8[4] = (ulong)puVar11;
  puVar8[5] = (ulong)puVar12;
  puVar7 = puVar8;
  FUN_10038acf4(puVar8,puVar10);
  _swift_setDeallocating(puVar8);
  _swift_arrayDestroy(puVar8 + 4,puVar8[2],PTR___type_metadata_for_Swift_String_100eac208);
  if (puVar7[2] >> 3 < puVar9[2]) {
    puVar8 = puVar9;
    FUN_10038a95c(puVar9,puVar7);
    _swift_bridgeObjectRelease(puVar9);
    puVar7 = puVar8;
  }
  else {
    FUN_10038a820(puVar9);
    _swift_bridgeObjectRelease(puVar9);
  }
  lVar14 = 0;
  uVar13 = 1L << ((ulong)(byte)puVar7[4] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)puVar7[4] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & puVar7[7];
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar4 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (puVar7[6] + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 + lVar14 * 0x400);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      pcVar16 = *(code **)((*(ulong *)puVar5 & *param_1) + 0xb8);
      _swift_bridgeObjectRetain(uVar3);
      (*pcVar16)(0,uVar2,uVar3);
      _swift_bridgeObjectRelease(uVar3);
    }
    bVar6 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar6) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar14) {
      _swift_release(puVar7);
      return;
    }
    uVar15 = (puVar7 + 7)[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x10038bbf4);
  (*pcVar16)();
}



/* Address: 0x10038bbf4 | FUN_10038bbf4 */

void FUN_10038bbf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_10038b008(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10038bc24 | FUN_10038bc24 */

void FUN_10038bc24(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_10038b238(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10038bc54 | FUN_10038bc54 */

void FUN_10038bc54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_10038b5f0(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10038bc80 | FUN_10038bc80 */

void FUN_10038bc80(void)

{
  long unaff_x20;
  
  FUN_100389de0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10038bca0 | FUN_10038bca0 */

void FUN_10038bca0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10038bcc4 | thunk_FUN_10038bce4 */

void thunk_FUN_10038bce4(void)

{
  FUN_10038bce4();
  return;
}


