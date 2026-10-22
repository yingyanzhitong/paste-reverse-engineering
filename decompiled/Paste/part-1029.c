/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b1ea28 | SentryCrashReportFilterCombine::initWithFiltersAndKeys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterCombine::initWithFiltersAndKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar3 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  IVar4 = objc_stub::class(param_1);
  IVar4 = objc_stub::FUN_100bfdf60(IVar4,IVar2,IVar3);
  pIVar1 = (ID *)register0x00000008;
  while (param_3 != 0) {
    (**(code **)(IVar4 + 0x10))(IVar4,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  IVar2 = objc_stub::FUN_100c041e0(param_1,IVar2,IVar3);
  return IVar2;
}



/* Address: 0x100b1eb48 | SentryCrashReportFilterCombine::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterCombine::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_190;
  undefined8 local_188;
  code *local_180;
  undefined *puStack_178;
  ID local_170;
  ID local_168;
  ID local_160;
  ID local_158;
  ID local_150;
  ID local_148;
  ID local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  ID local_128;
  undefined *local_120;
  undefined8 local_118;
  code *local_110;
  undefined *puStack_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  code *local_e0;
  code *pcStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  code *local_b0;
  code *pcStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  IVar2 = objc_stub::FUN_100c025c0(param_1,param_3,param_4,(ulong)param_5);
  IVar3 = objc_stub::FUN_100c05fc0(param_1);
  IVar4 = objc_stub::count(IVar2);
  if (IVar4 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    }
  }
  else {
    IVar5 = objc_stub::count(IVar3);
    if (IVar4 == IVar5) {
      IVar5 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar4);
      puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
      local_90 = &local_98;
      local_98 = 0;
      local_88 = 0x2020000000;
      local_80 = 0;
      local_100 = &local_c8;
      local_c8 = 0;
      local_b8 = 0x3032000000;
      local_b0 = FUN_100b1ef10;
      pcStack_a8 = FUN_100b1ef38;
      local_a0 = 0;
      local_f8 = 0;
      local_e8 = 0x3042000000;
      local_e0 = FUN_100b1ef40;
      pcStack_d8 = FUN_100b1ef4c;
      local_d0 = 0;
      local_120 = PTR___NSConcreteStackBlock_100ea82a0;
      local_118 = 0xc2000000;
      local_110 = FUN_100b1ef54;
      puStack_108 = &DAT_100f34528;
      local_f0 = &local_f8;
      local_c0 = local_100;
      local_140 = objc_stub::copy((ID)&local_120);
      local_190 = puVar1;
      local_188 = 0xc2000000;
      local_180 = FUN_100b1efe0;
      puStack_178 = &DAT_100f34558;
      local_138 = &local_98;
      local_170 = param_1;
      local_168 = IVar5;
      local_160 = IVar2;
      local_158 = param_3;
      local_150 = IVar3;
      local_148 = param_4;
      local_130 = &local_f8;
      local_128 = IVar4;
      IVar3 = objc_stub::copy((ID)&local_190);
      local_c0[5] = IVar3;
      local_f0[5] = local_c0[5];
      IVar2 = objc_stub::objectAtIndex_(IVar2,local_90[3]);
      objc_stub::filterReports_onCompletion_(IVar2,param_3,local_c0[5]);
      __Block_object_dispose(&local_f8,8);
      _objc_destroyWeak(&local_d0);
      __Block_object_dispose(&local_c8,8);
      __Block_object_dispose(&local_98,8);
    }
    else {
      IVar2 = objc_stub::class(param_1);
      IVar2 = objc_stub::description(IVar2);
      objc_stub::count(IVar3);
      FUN_100b52f54(IVar2,0,&cf_Key_filtermismatch__dkeys__dfilters);
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))(param_4,param_3,0,IVar2);
      }
    }
  }
  return;
}



/* Address: 0x100b1ef10 | FUN_100b1ef10 */

/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */

void FUN_100b1ef10(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return;
}



/* Address: 0x100b1ef38 | FUN_100b1ef38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1ef38(void)

{
  return 0;
}



/* Address: 0x100b1ef40 | FUN_100b1ef40 */

void FUN_100b1ef40(long param_1,long param_2)

{
  _objc_moveWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Address: 0x100b1ef4c | FUN_100b1ef4c */

void FUN_100b1ef4c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  return;
}



/* Address: 0x100b1ef54 | FUN_100b1ef54 */

void FUN_100b1ef54(long param_1)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  undefined8 local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100ea82a0;
  local_30 = 0xc2000000;
  local_28 = FUN_100b1efb0;
  puStack_20 = &DAT_100f34528;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_async(PTR___dispatch_main_q_100ea8310,&local_38);
  return;
}



/* Address: 0x100b1efb0 | FUN_100b1efb0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1efb0(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = 0;
  return 0;
}



/* Address: 0x100b1efc4 | FUN_100b1efc4 */

void FUN_100b1efc4(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),8);
  return;
}



/* Address: 0x100b1efd4 | FUN_100b1efd4 */

void FUN_100b1efd4(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x20),8);
  return;
}



/* Address: 0x100b1efe0 | FUN_100b1efe0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1efe0(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  ulong uVar6;
  
  if ((param_2 == 0) || ((param_3 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,param_2,0,param_4);
      }
    }
    else if (param_2 == 0) {
      lVar4 = *(long *)(param_1 + 0x48);
      IVar1 = objc_stub::class(*(ID *)(param_1 + 0x20));
      IVar1 = objc_stub::description(IVar1);
      FUN_100b52f54(IVar1,0,&cf_filteredReportswasnil);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,0,0,IVar1);
      }
    }
    (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
  }
  else {
    objc_stub::addObject_(*(ID *)(param_1 + 0x28),param_2);
    lVar4 = *(long *)(*(long *)(param_1 + 0x58) + 8);
    uVar6 = *(long *)(lVar4 + 0x18) + 1;
    *(ulong *)(lVar4 + 0x18) = uVar6;
    if (uVar6 < *(ulong *)(param_1 + 0x68)) {
      IVar1 = objc_stub::objectAtIndex_
                        (*(ID *)(param_1 + 0x30),
                         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x18));
      objc_stub::filterReports_onCompletion_
                (IVar1,*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x60) + 8) + 0x28));
    }
    else {
      IVar1 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x28),0);
      IVar1 = objc_stub::count(IVar1);
      self = NSMutableArray::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
      if (IVar1 != 0) {
        IVar5 = 0;
        do {
          self_00 = NSMutableDictionary::dictionaryWithCapacity_
                              ((ID)&_OBJC_CLASS___NSMutableDictionary,
                               *(undefined8 *)(param_1 + 0x68));
          if (*(long *)(param_1 + 0x68) != 0) {
            uVar6 = 0;
            do {
              IVar2 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x28),uVar6);
              IVar3 = objc_stub::count(IVar2);
              if (IVar5 < IVar3) {
                IVar2 = objc_stub::objectAtIndex_(IVar2,IVar5);
                IVar3 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x40),uVar6);
                NSMutableDictionary::setObject_forKey_(self_00,IVar2,IVar3);
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < *(ulong *)(param_1 + 0x68));
          }
          NSMutableArray::addObject_(self,self_00);
          IVar5 = IVar5 + 1;
        } while (IVar5 != IVar1);
      }
      lVar4 = *(long *)(param_1 + 0x48);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,self,1,param_4);
      }
      (**(code **)(*(long *)(param_1 + 0x50) + 0x10))();
    }
  }
  return 0;
}



/* Address: 0x100b1f2d8 | FUN_100b1f2d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b1f2d8(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x48),*(void **)(param_2 + 0x48),7);
  __Block_object_assign((void *)(param_1 + 0x50),*(void **)(param_2 + 0x50),7);
  __Block_object_assign((void *)(param_1 + 0x58),*(void **)(param_2 + 0x58),8);
  __Block_object_assign((void *)(param_1 + 0x60),*(void **)(param_2 + 0x60),8);
  return;
}



/* Address: 0x100b1f35c | FUN_100b1f35c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1f35c(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x60),8);
  __Block_object_dispose(*(void **)(param_1 + 0x58),8);
  return 0;
}



/* Address: 0x100b1f3c4 | SentryCrashReportFilterCombine::filters */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterCombine::filters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b1f3cc | SentryCrashReportFilterCombine::setFilters: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterCombine::setFilters_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b1f3d8 | SentryCrashReportFilterCombine::keys */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterCombine::keys(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b1f3e0 | SentryCrashReportFilterCombine::setKeys: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterCombine::setKeys_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b1f3ec | SentryCrashReportFilterCombine::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportFilterCombine::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1f41c | SentryCrashReportFilterPipeline::filterWithFilters: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterPipeline::filterWithFilters_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_60 = 0xc2000000;
  local_58 = FUN_100b1f540;
  puStack_50 = &DAT_100f34588;
  local_48 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  while (param_3 != 0) {
    (*local_58)(&local_68,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04200(param_1,IVar2);
  return IVar2;
}



/* Address: 0x100b1f540 | FUN_100b1f540 */

void FUN_100b1f540(long param_1,undefined8 param_2)

{
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_2);
  return;
}



/* Address: 0x100b1f54c | SentryCrashReportFilterPipeline::initWithFilters: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterPipeline::initWithFilters_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_60 = 0xc2000000;
  local_58 = FUN_100b1f66c;
  puStack_50 = &DAT_100f34588;
  local_48 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  while (param_3 != 0) {
    (*local_58)(&local_68,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  IVar2 = objc_stub::FUN_100c04200(param_1,IVar2);
  return IVar2;
}



/* Address: 0x100b1f66c | FUN_100b1f66c */

void FUN_100b1f66c(long param_1,undefined8 param_2)

{
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_2);
  return;
}



/* Address: 0x100b1f678 | SentryCrashReportFilterPipeline::initWithFiltersArray: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterPipeline::initWithFiltersArray_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID self_01;
  long lVar3;
  ID IVar4;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  objc_super local_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_f8.super_class = &objc::class_t::SentryCrashReportFilterPipeline;
  local_f8.receiver = param_1;
  self = _objc_msgSendSuper2(&local_f8,"init");
  if (self != 0) {
    self_00 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_140,auStack_e8,0x10);
    if (IVar1 != 0) {
      lVar3 = *local_130;
      do {
        IVar4 = 0;
        do {
          if (*local_130 != lVar3) {
            _objc_enumerationMutation(param_3);
          }
          self_01 = *(ID *)(lStack_138 + IVar4 * 8);
          IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
          IVar2 = objc_stub::isKindOfClass_(self_01,IVar2);
          if ((int)IVar2 == 0) {
            objc_stub::addObject_(self_00,self_01);
          }
          else {
            objc_stub::FUN_100bfd740(self_00,self_01);
          }
          IVar4 = IVar4 + 1;
        } while (IVar1 != IVar4);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_140,auStack_e8,0x10);
      } while (IVar1 != 0);
    }
    objc_stub::FUN_100c0bc40(self,self_00);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b1f814 | SentryCrashReportFilterPipeline::addFilter: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterPipeline::addFilter_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = objc_stub::FUN_100c025c0(param_1);
  objc_stub::FUN_100c05300(self,param_3,0);
  return;
}



/* Address: 0x100b1f868 | SentryCrashReportFilterPipeline::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_storeWeak replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterPipeline::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_170;
  undefined8 local_168;
  code *local_160;
  undefined *puStack_158;
  ID local_150;
  ID local_148;
  ID local_140;
  ID local_138;
  undefined8 *puStack_130;
  undefined8 *local_128;
  ID local_120;
  undefined *local_118;
  undefined8 local_110;
  code *local_108;
  undefined *puStack_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 local_e0;
  code *local_d8;
  code *pcStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  code *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  IVar2 = objc_stub::FUN_100c025c0(param_1,param_3,param_4,(ulong)param_5);
  IVar3 = objc_stub::count(IVar2);
  puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
  if (IVar3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,param_3,1,0);
    }
  }
  else {
    local_90 = 0;
    local_80 = 0x2020000000;
    local_78 = 0;
    local_f8 = &local_c0;
    local_c0 = 0;
    local_b0 = 0x3032000000;
    local_a8 = FUN_100b1ef10;
    pcStack_a0 = FUN_100b1ef38;
    local_98 = 0;
    local_f0 = 0;
    local_e0 = 0x3042000000;
    local_d8 = FUN_100b1ef40;
    pcStack_d0 = FUN_100b1ef4c;
    local_c8 = 0;
    local_118 = PTR___NSConcreteStackBlock_100ea82a0;
    local_110 = 0xc2000000;
    local_108 = FUN_100b1fb1c;
    puStack_100 = &DAT_100f34528;
    local_e8 = &local_f0;
    local_b8 = local_f8;
    local_88 = &local_90;
    local_138 = objc_stub::copy((ID)&local_118);
    local_170 = puVar1;
    local_168 = 0xc2000000;
    local_160 = FUN_100b1fb8c;
    puStack_158 = &DAT_100f345b8;
    local_150 = param_1;
    local_148 = IVar2;
    local_140 = param_4;
    puStack_130 = &local_90;
    local_128 = &local_f0;
    local_120 = IVar3;
    IVar3 = objc_stub::copy((ID)&local_170);
    local_b8[5] = IVar3;
    local_e8[5] = local_b8[5];
    IVar2 = objc_stub::objectAtIndex_(IVar2,local_88[3]);
    objc_stub::filterReports_onCompletion_(IVar2,param_3,local_b8[5]);
    __Block_object_dispose(&local_f0,8);
    _objc_destroyWeak(&local_c8);
    __Block_object_dispose(&local_c0,8);
    __Block_object_dispose(&local_90,8);
  }
  return;
}



/* Address: 0x100b1fb1c | FUN_100b1fb1c */

void FUN_100b1fb1c(long param_1)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  undefined8 local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100ea82a0;
  local_30 = 0xc2000000;
  local_28 = FUN_100b1fb78;
  puStack_20 = &DAT_100f34528;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  _dispatch_async(PTR___dispatch_main_q_100ea8310,&local_38);
  return;
}



/* Address: 0x100b1fb78 | FUN_100b1fb78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1fb78(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) = 0;
  return 0;
}



/* Address: 0x100b1fb8c | FUN_100b1fb8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_loadWeakRetained replaced with injection: _objc_load_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1fb8c(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  if ((param_2 == 0) || ((param_3 & 1) == 0)) {
    if ((param_3 & 1) != 0) {
      if (param_2 == 0) {
        lVar4 = *(long *)(param_1 + 0x30);
        IVar2 = objc_stub::class(*(ID *)(param_1 + 0x20));
        IVar2 = objc_stub::description(IVar2);
        FUN_100b52f54(IVar2,0,&cf_filteredReportswasnil);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x10))(lVar4,0,0,IVar2);
        }
      }
      goto LAB_100b1fce8;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) goto LAB_100b1fce8;
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar1 = *(long *)(lVar4 + 0x18) + 1;
    *(ulong *)(lVar4 + 0x18) = uVar1;
    if (uVar1 < *(ulong *)(param_1 + 0x50)) {
      IVar2 = objc_stub::objectAtIndex_
                        (*(ID *)(param_1 + 0x28),
                         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18));
      objc_stub::filterReports_onCompletion_
                (IVar2,param_2,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28));
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) goto LAB_100b1fce8;
    pcVar5 = *(code **)(lVar4 + 0x10);
    uVar3 = 1;
  }
  (*pcVar5)(lVar4,param_2,uVar3,param_4);
LAB_100b1fce8:
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return 0;
}



/* Address: 0x100b1fd14 | FUN_100b1fd14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b1fd14(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x30),*(void **)(param_2 + 0x30),7);
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),7);
  __Block_object_assign((void *)(param_1 + 0x40),*(void **)(param_2 + 0x40),8);
  __Block_object_assign((void *)(param_1 + 0x48),*(void **)(param_2 + 0x48),8);
  return;
}



/* Address: 0x100b1fd80 | FUN_100b1fd80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b1fd80(long param_1)

{
  __Block_object_dispose(*(void **)(param_1 + 0x48),8);
  __Block_object_dispose(*(void **)(param_1 + 0x40),8);
  return 0;
}



/* Address: 0x100b1fdd0 | SentryCrashReportFilterPipeline::filters */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterPipeline::filters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b1fdd8 | SentryCrashReportFilterPipeline::setFilters: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterPipeline::setFilters_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b1fde4 | SentryCrashReportFilterPipeline::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportFilterPipeline::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b1fdf0 | SentryCrashReportFilterObjectForKey::filterWithKey:allowNotFound: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentryCrashReportFilterObjectForKey::filterWithKey_allowNotFound_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c04420(param_1,param_3,(ulong)param_4);
  return IVar1;
}



/* Address: 0x100b1fe48 | SentryCrashReportFilterObjectForKey::initWithKey:allowNotFound: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x1c bytes */

ID SentryCrashReportFilterObjectForKey::initWithKey_allowNotFound_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID self;
  objc_super local_40;
  
  local_40.super_class = &objc::class_t::SentryCrashReportFilterObjectForKey;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,"init");
  if (self != 0) {
    objc_stub::FUN_100c0c540(self,param_3);
    objc_stub::FUN_100c0a4a0(self,(ulong)param_4);
  }
  return self;
}



/* Address: 0x100b1fecc | SentryCrashReportFilterObjectForKey::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterObjectForKey::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID self;
  long lVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_f0,0x10);
  if (IVar2 != 0) {
    lVar6 = *local_120;
    do {
      IVar5 = 0;
      do {
        if (*local_120 != lVar6) {
          _objc_enumerationMutation(param_3);
        }
        self = *(ID *)(lStack_128 + IVar5 * 8);
        IVar3 = objc_stub::FUN_100c05ee0(param_1);
        IVar4 = objc_stub::class((ID)&_OBJC_CLASS___NSString);
        IVar3 = objc_stub::isKindOfClass_(IVar3,IVar4);
        IVar4 = objc_stub::FUN_100c05ee0(param_1);
        if ((int)IVar3 == 0) {
          self = objc_stub::objectForKey_(self,IVar4);
        }
        else {
          FUN_100b5c474(self,IVar4);
        }
        if (self == 0) {
          IVar3 = objc_stub::FUN_100bfdb60(param_1);
          if ((IVar3 & 1) == 0) {
            IVar2 = objc_stub::class(param_1);
            IVar2 = objc_stub::description(IVar2);
            objc_stub::FUN_100c05ee0(param_1);
            FUN_100b52f54(IVar2,0,&cf_Keynotfound___);
            if (param_4 != 0) {
              (**(code **)(param_4 + 0x10))(param_4,IVar1,0,IVar2);
            }
            goto LAB_100b2015c;
          }
          IVar3 = objc_stub::dictionary((ID)&_OBJC_CLASS___NSDictionary);
          objc_stub::addObject_(IVar1,IVar3);
        }
        else {
          objc_stub::addObject_(IVar1,self);
        }
        IVar5 = IVar5 + 1;
      } while (IVar2 != IVar5);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_f0,0x10);
    } while (IVar2 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
LAB_100b2015c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b201b0 | SentryCrashReportFilterObjectForKey::key */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterObjectForKey::key(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b201b8 | SentryCrashReportFilterObjectForKey::setKey: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterObjectForKey::setKey_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b201c4 | SentryCrashReportFilterObjectForKey::allowNotFound */

/* Function Stack Size: 0x10 bytes */

bool SentryCrashReportFilterObjectForKey::allowNotFound(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



/* Address: 0x100b201cc | SentryCrashReportFilterObjectForKey::setAllowNotFound: */

/* Function Stack Size: 0x14 bytes */

void SentryCrashReportFilterObjectForKey::setAllowNotFound_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



/* Address: 0x100b201d4 | SentryCrashReportFilterObjectForKey::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportFilterObjectForKey::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x100b201e0 | SentryCrashReportFilterConcatenate::filterWithSeparatorFmt:keys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterConcatenate::filterWithSeparatorFmt_keys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_70 = 0xc2000000;
  local_68 = FUN_100b20328;
  puStack_60 = &DAT_100f34588;
  local_58 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  while (param_4 != 0) {
    (*local_68)(&local_78,param_4);
    param_4 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04b00(param_1,param_3,IVar2);
  return IVar2;
}



/* Address: 0x100b20328 | FUN_100b20328 */

void FUN_100b20328(long param_1,undefined8 param_2)

{
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_2);
  return;
}



/* Address: 0x100b20334 | SentryCrashReportFilterConcatenate::initWithSeparatorFmt:keys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterConcatenate::initWithSeparatorFmt_keys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_70 = 0xc2000000;
  local_68 = FUN_100b20478;
  puStack_60 = &DAT_100f34588;
  local_58 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  while (param_4 != 0) {
    (*local_68)(&local_78,param_4);
    param_4 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  IVar2 = objc_stub::FUN_100c04b00(param_1,param_3,IVar2);
  return IVar2;
}



/* Address: 0x100b20478 | FUN_100b20478 */

void FUN_100b20478(long param_1,undefined8 param_2)

{
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_2);
  return;
}



/* Address: 0x100b20484 | SentryCrashReportFilterConcatenate::initWithSeparatorFmt:keysArray: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterConcatenate::initWithSeparatorFmt_keysArray_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID self_01;
  long lVar3;
  ID IVar4;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  objc_super local_100;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_100.super_class = &objc::class_t::SentryCrashReportFilterConcatenate;
  local_100.receiver = param_1;
  self = _objc_msgSendSuper2(&local_100,"init");
  if (self != 0) {
    self_00 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_4,&local_140,auStack_f0,0x10);
    if (IVar1 != 0) {
      lVar3 = *local_130;
      do {
        IVar4 = 0;
        do {
          if (*local_130 != lVar3) {
            _objc_enumerationMutation(param_4);
          }
          self_01 = *(ID *)(lStack_138 + IVar4 * 8);
          IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
          IVar2 = objc_stub::isKindOfClass_(self_01,IVar2);
          if ((int)IVar2 == 0) {
            objc_stub::addObject_(self_00,self_01);
          }
          else {
            objc_stub::FUN_100bfd740(self_00,self_01);
          }
          IVar4 = IVar4 + 1;
        } while (IVar1 != IVar4);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_4,&local_140,auStack_f0,0x10);
      } while (IVar1 != 0);
    }
    objc_stub::FUN_100c0d980(self,param_3);
    objc_stub::FUN_100c0c5e0(self,self_00);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b20644 | SentryCrashReportFilterConcatenate::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterConcatenate::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  ID IVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  ID local_200;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_200 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_1b0,auStack_f0,0x10);
  if (local_200 != 0) {
    lVar4 = *local_1a0;
    do {
      IVar5 = 0;
      do {
        if (*local_1a0 != lVar4) {
          _objc_enumerationMutation(param_3);
        }
        uVar10 = *(undefined8 *)(lStack_1a8 + IVar5 * 8);
        self = objc_stub::string((ID)&_OBJC_CLASS___NSMutableString);
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        self_00 = objc_stub::FUN_100c05fc0(param_1);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self_00,&local_1f0,auStack_170,0x10);
        if (IVar2 != 0) {
          lVar9 = *local_1e0;
          bVar8 = true;
          do {
            IVar7 = 0;
            do {
              if (*local_1e0 != lVar9) {
                _objc_enumerationMutation(self_00);
              }
              uVar6 = *(undefined8 *)(lStack_1e8 + IVar7 * 8);
              if (!bVar8) {
                IVar3 = objc_stub::FUN_100c0a100(param_1);
                objc_stub::appendFormat_(self,IVar3);
              }
              FUN_100b5c474(uVar10,uVar6);
              objc_stub::appendFormat_(self,&cf___);
              bVar8 = false;
              IVar7 = IVar7 + 1;
            } while (IVar2 != IVar7);
            IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                              (self_00,&local_1f0,auStack_170,0x10);
            bVar8 = false;
          } while (IVar2 != 0);
        }
        objc_stub::addObject_(IVar1,self);
        IVar5 = IVar5 + 1;
      } while (IVar5 != local_200);
      local_200 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_3,&local_1b0,auStack_f0,0x10);
    } while (local_200 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b20904 | SentryCrashReportFilterConcatenate::separatorFmt */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterConcatenate::separatorFmt(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b2090c | SentryCrashReportFilterConcatenate::setSeparatorFmt: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterConcatenate::setSeparatorFmt_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b20918 | SentryCrashReportFilterConcatenate::keys */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterConcatenate::keys(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b20920 | SentryCrashReportFilterConcatenate::setKeys: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterConcatenate::setKeys_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x100b2092c | SentryCrashReportFilterConcatenate::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportFilterConcatenate::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b2095c | SentryCrashReportFilterSubset::filterWithKeys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterSubset::filterWithKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_60 = 0xc2000000;
  local_58 = FUN_100b20a80;
  puStack_50 = &DAT_100f34588;
  local_48 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  while (param_3 != 0) {
    (*local_58)(&local_68,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  _objc_alloc();
  IVar2 = objc_stub::FUN_100c04480(param_1,IVar2);
  return IVar2;
}



/* Address: 0x100b20a80 | FUN_100b20a80 */

void FUN_100b20a80(long param_1,undefined8 param_2)

{
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_2);
  return;
}



/* Address: 0x100b20a8c | SentryCrashReportFilterSubset::initWithKeys: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterSubset::initWithKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_60 = 0xc2000000;
  local_58 = FUN_100b20bac;
  puStack_50 = &DAT_100f34588;
  local_48 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_68 = PTR___NSConcreteStackBlock_100ea82a0;
  while (param_3 != 0) {
    (*local_58)(&local_68,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  IVar2 = objc_stub::FUN_100c04480(param_1,IVar2);
  return IVar2;
}



/* Address: 0x100b20bac | FUN_100b20bac */

void FUN_100b20bac(long param_1,undefined8 param_2)

{
  objc_stub::addObject_(*(ID *)(param_1 + 0x20),param_2);
  return;
}



/* Address: 0x100b20bb8 | SentryCrashReportFilterSubset::initWithKeysArray: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterSubset::initWithKeysArray_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  ID self_00;
  ID IVar1;
  ID IVar2;
  ID self_01;
  long lVar3;
  ID IVar4;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  objc_super local_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_f8.super_class = &objc::class_t::SentryCrashReportFilterSubset;
  local_f8.receiver = param_1;
  self = _objc_msgSendSuper2(&local_f8,"init");
  if (self != 0) {
    self_00 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
    lStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = (long *)0x0;
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                      (param_3,&local_140,auStack_e8,0x10);
    if (IVar1 != 0) {
      lVar3 = *local_130;
      do {
        IVar4 = 0;
        do {
          if (*local_130 != lVar3) {
            _objc_enumerationMutation(param_3);
          }
          self_01 = *(ID *)(lStack_138 + IVar4 * 8);
          IVar2 = objc_stub::class((ID)&_OBJC_CLASS___NSArray);
          IVar2 = objc_stub::isKindOfClass_(self_01,IVar2);
          if ((int)IVar2 == 0) {
            objc_stub::addObject_(self_00,self_01);
          }
          else {
            objc_stub::FUN_100bfd740(self_00,self_01);
          }
          IVar4 = IVar4 + 1;
        } while (IVar1 != IVar4);
        IVar1 = objc_stub::countByEnumeratingWithState_objects_count_
                          (param_3,&local_140,auStack_e8,0x10);
      } while (IVar1 != 0);
    }
    objc_stub::FUN_100c0c5a0(self,self_00);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return self;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b20d54 | SentryCrashReportFilterSubset::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterSubset::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID self;
  ID self_00;
  ID IVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  ID IVar9;
  ID local_210;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_210 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_1b0,auStack_f0,0x10);
  if (local_210 != 0) {
    lVar5 = *local_1a0;
    do {
      IVar6 = 0;
      do {
        if (*local_1a0 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        lVar8 = *(long *)(lStack_1a8 + IVar6 * 8);
        self = objc_stub::dictionary((ID)&_OBJC_CLASS___NSMutableDictionary);
        lStack_1e8 = 0;
        local_1f0 = 0;
        uStack_1d8 = 0;
        local_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        self_00 = objc_stub::FUN_100c05f60(param_1);
        IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                          (self_00,&local_1f0,auStack_170,0x10);
        if (IVar2 != 0) {
          lVar7 = *local_1e0;
          do {
            IVar4 = 0;
            do {
              if (*local_1e0 != lVar7) {
                _objc_enumerationMutation(self_00);
              }
              IVar9 = *(ID *)(lStack_1e8 + IVar4 * 8);
              lVar3 = lVar8;
              FUN_100b5c474(lVar8,IVar9);
              if (lVar3 == 0) {
                IVar6 = objc_stub::class(param_1);
                IVar6 = objc_stub::description(IVar6);
                FUN_100b52f54(IVar6,0,&cf_Reportdidnothavekeypath__);
                if (param_4 != 0) {
                  (**(code **)(param_4 + 0x10))(param_4,IVar1,0,IVar6);
                }
                goto LAB_100b21028;
              }
              IVar9 = objc_stub::lastPathComponent(IVar9);
              objc_stub::setObject_forKey_(self,lVar3,IVar9);
              IVar4 = IVar4 + 1;
            } while (IVar2 != IVar4);
            IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                              (self_00,&local_1f0,auStack_170,0x10);
          } while (IVar2 != 0);
        }
        objc_stub::addObject_(IVar1,self);
        IVar6 = IVar6 + 1;
      } while (IVar6 != local_210);
      local_210 = objc_stub::countByEnumeratingWithState_objects_count_
                            (param_3,&local_1b0,auStack_f0,0x10);
    } while (local_210 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
LAB_100b21028:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x100b2107c | SentryCrashReportFilterSubset::keyPaths */

/* Function Stack Size: 0x10 bytes */

ID SentryCrashReportFilterSubset::keyPaths(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b21084 | SentryCrashReportFilterSubset::setKeyPaths: */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCrashReportFilterSubset::setKeyPaths_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + 8) = param_3;
  return;
}



/* Address: 0x100b21090 | SentryCrashReportFilterSubset::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryCrashReportFilterSubset::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b2109c | SentryCrashReportFilterDataToString::filter */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void __thiscall
SentryCrashReportFilterDataToString::filter(SentryCrashReportFilterDataToString *this)

{
  ID in_x0;
  
  _objc_alloc();
  objc_stub::init(in_x0);
  return;
}



/* Address: 0x100b210b4 | SentryCrashReportFilterDataToString::filterReports:onCompletion: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashReportFilterDataToString::filterReports_onCompletion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,uint param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *self;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = objc_stub::count(param_3,param_3,param_4,(ulong)param_5);
  IVar1 = objc_stub::arrayWithCapacity_((ID)&_OBJC_CLASS___NSMutableArray,IVar1);
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  IVar2 = objc_stub::countByEnumeratingWithState_objects_count_(param_3,&local_130,auStack_e8,0x10);
  if (IVar2 != 0) {
    lVar5 = *local_120;
    do {
      IVar6 = 0;
      do {
        if (*local_120 != lVar5) {
          _objc_enumerationMutation(param_3);
        }
        uVar4 = *(undefined8 *)(lStack_128 + IVar6 * 8);
        self = &_OBJC_CLASS___NSString;
        _objc_alloc();
        IVar3 = objc_stub::initWithData_encoding_((ID)self,uVar4,4);
        objc_stub::addObject_(IVar1,IVar3);
        IVar6 = IVar6 + 1;
      } while (IVar2 != IVar6);
      IVar2 = objc_stub::countByEnumeratingWithState_objects_count_
                        (param_3,&local_130,auStack_e8,0x10);
    } while (IVar2 != 0);
  }
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,IVar1,1,0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x100b21254 | SentryCrashReportFilterStringToData::filter */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void __thiscall
SentryCrashReportFilterStringToData::filter(SentryCrashReportFilterStringToData *this)

{
  ID in_x0;
  
  _objc_alloc();
  objc_stub::init(in_x0);
  return;
}


