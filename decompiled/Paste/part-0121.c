/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100174b7c | PHURLSessionTaskSafeAccess::currentRequestFromTask: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID PHURLSessionTaskSafeAccess::currentRequestFromTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::currentRequest(param_3);
  return IVar1;
}



/* Address: 0x100174bd0 | PHURLSessionTaskSafeAccess::setCurrentRequest:onTask:key: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool PHURLSessionTaskSafeAccess::setCurrentRequest_onTask_key_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  objc_stub::setValue_forKey_(param_4,param_3,param_5);
  return 1;
}



/* Address: 0x100174c54 | FUN_100174c54 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_100174c54(void)

{
  ID IVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *self;
  ID self_00;
  ID IVar5;
  long lVar6;
  undefined8 local_150;
  long lStack_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_108 [128];
  ID local_88;
  ID local_80;
  ID local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  local_88 = NSBundle::resourceURL(IVar1);
  pcVar2 = &objc::class_t::PostHog_PHPLCrashReporter_SWIFTPM_MODULE_BUNDLER_FINDER;
  _objc_opt_class(&objc::class_t::PostHog_PHPLCrashReporter_SWIFTPM_MODULE_BUNDLER_FINDER);
  IVar1 = NSBundle::bundleForClass_((ID)&_OBJC_CLASS___NSBundle,pcVar2);
  local_80 = NSBundle::resourceURL(IVar1);
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  local_78 = NSBundle::bundleURL(IVar1);
  IVar1 = NSArray::arrayWithObjects_count_((ID)&_OBJC_CLASS___NSArray,&local_88,3);
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  local_140 = (long *)0x0;
  IVar3 = NSArray::countByEnumeratingWithState_objects_count_(IVar1,&local_150,auStack_108,0x10);
  if (IVar3 != 0) {
    lVar6 = *local_140;
    do {
      IVar5 = 0;
      do {
        if (*local_140 != lVar6) {
          _objc_enumerationMutation(IVar1);
        }
        self_00 = *(ID *)(lStack_148 + IVar5 * 8);
        IVar4 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf____bundle);
        IVar4 = objc_stub::URLByAppendingPathComponent_(self_00,IVar4);
        IVar4 = NSBundle::bundleWithURL_((ID)&_OBJC_CLASS___NSBundle,IVar4);
        if (IVar4 != 0) {
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
            return IVar4;
          }
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail(0);
        }
        IVar5 = IVar5 + 1;
      } while (IVar3 != IVar5);
      IVar3 = NSArray::countByEnumeratingWithState_objects_count_(IVar1,&local_150,auStack_108,0x10)
      ;
    } while (IVar3 != 0);
  }
  self = &_OBJC_CLASS___NSException;
  _objc_alloc();
  IVar1 = NSString::stringWithFormat_((ID)&_OBJC_CLASS___NSString,&cf_unabletofindbundlenamed__);
  IVar1 = objc_stub::initWithName_reason_userInfo_((ID)self,&cf_SwiftPMResourcesAccessor,IVar1,0);
                    /* WARNING: Subroutine does not return */
  _objc_exception_throw(IVar1);
}



/* Address: 0x100174f18 | FUN_100174f18 */

uint FUN_100174f18(uint param_1)

{
  return (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
}



/* Address: 0x100174f20 | FUN_100174f20 */

uint FUN_100174f20(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  return uVar1 >> 0x10 | uVar1 << 0x10;
}



/* Address: 0x100174f28 | FUN_100174f28 */

ulong FUN_100174f28(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return uVar1 >> 0x20 | uVar1 << 0x20;
}



/* Address: 0x100174f30 | FUN_100174f30 */

void FUN_100174f30(void)

{
  return;
}



/* Address: 0x100174f34 | FUN_100174f34 */

void FUN_100174f34(void)

{
  return;
}



/* Address: 0x100174f38 | FUN_100174f38 */

void FUN_100174f38(void)

{
  return;
}



/* Address: 0x100174f3c | FUN_100174f3c */

undefined ** FUN_100174f3c(void)

{
  return &PTR_FUN_100eba1a0;
}



/* Address: 0x100174f48 | FUN_100174f48 */

undefined ** FUN_100174f48(void)

{
  return &PTR_FUN_100eba188;
}



/* Address: 0x100174f54 | FUN_100174f54 */

char * FUN_100174f54(uint param_1)

{
  if (param_1 < 10) {
    return (&PTR_s_No_error_100eba1b8)[param_1];
  }
  return "Unhandled error code";
}



/* Address: 0x100174f78 | FUN_100174f78 */

undefined8 FUN_100174f78(ulong param_1,ulong param_2,long *param_3)

{
  if ((((long)param_2 < 1) || (!CARRY8(param_2,param_1))) &&
     ((-1 < (long)param_2 || (-param_2 <= param_1)))) {
    if (param_3 != (long *)0x0) {
      *param_3 = param_2 + param_1;
    }
    return 1;
  }
  return 0;
}



/* Address: 0x100174fb8 | FUN_100174fb8 */

mach_port_t FUN_100174fb8(void)

{
  mach_port_t name;
  
  name = _mach_thread_self();
  _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name);
  return name;
}



/* Address: 0x100174ff0 | FUN_100174ff0 */

undefined4
FUN_100174ff0(vm_map_t param_1,ulong param_2,ulong param_3,mach_vm_address_t param_4,
             mach_vm_size_t param_5)

{
  uint uVar1;
  mach_vm_size_t local_18;
  
  if ((((long)param_3 < 1) || (!CARRY8(param_3,param_2))) &&
     ((-1 < (long)param_3 || (-param_3 <= param_2)))) {
    local_18 = param_5;
    uVar1 = _mach_vm_read_overwrite(param_1,param_3 + param_2,param_5,param_4,&local_18);
    if (uVar1 < 3) {
      return *(undefined4 *)(&DAT_100c3035c + (ulong)uVar1 * 4);
    }
    return 1;
  }
  return 3;
}



/* Address: 0x100175068 | FUN_100175068 */

void FUN_100175068(void)

{
  FUN_100174ff0();
  return;
}



/* Address: 0x100175070 | FUN_100175070 */

undefined8
FUN_100175070(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined2 *param_5)

{
  undefined2 uVar1;
  
  FUN_100174ff0(param_1,param_3,param_4,param_5,2);
  uVar1 = *param_5;
  (*(code *)*param_2)();
  *param_5 = uVar1;
  return param_1;
}



/* Address: 0x1001750c4 | FUN_1001750c4 */

undefined8
FUN_1001750c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  
  FUN_100174ff0(param_1,param_3,param_4,param_5,4);
  uVar1 = *param_5;
  (**(code **)(param_2 + 8))();
  *param_5 = uVar1;
  return param_1;
}



/* Address: 0x100175118 | FUN_100175118 */

undefined8
FUN_100175118(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  
  FUN_100174ff0(param_1,param_3,param_4,param_5,8);
  uVar1 = *param_5;
  (**(code **)(param_2 + 0x10))();
  *param_5 = uVar1;
  return param_1;
}



/* Address: 0x10017516c | FUN_10017516c */

int FUN_10017516c(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  do {
    bVar1 = *param_1;
    iVar2 = (uint)bVar1 - (uint)*param_2;
    if (iVar2 != 0) {
      return iVar2;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (bVar1 != 0);
  return 0;
}



/* Address: 0x10017518c | FUN_10017518c */

int FUN_10017518c(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  param_3 = -param_3;
  while( true ) {
    bVar1 = *param_1;
    if (bVar1 != *param_2) break;
    param_3 = param_3 + 1;
    bVar2 = bVar1;
    if (param_3 == 1) goto LAB_1001751c4;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    if (bVar1 == 0) {
      return 0;
    }
  }
  bVar2 = *param_2;
  if (param_3 == 0) {
    return 0;
  }
LAB_1001751c4:
  return (uint)bVar1 - (uint)bVar2;
}



/* Address: 0x1001751cc | FUN_1001751cc */

undefined1 * FUN_1001751cc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *puVar1;
    param_1 = param_1 + 1;
    puVar1 = puVar1 + 1;
  }
  return param_2;
}



/* Address: 0x1001751ec | FUN_1001751ec */

void FUN_1001751ec(void *param_1,int param_2,size_t param_3)

{
  if (param_3 != 0) {
    _memset(param_1,param_2,param_3);
    return;
  }
  return;
}



/* Address: 0x1001751f8 | FUN_1001751f8 */

long FUN_1001751f8(long param_1,long param_2,long param_3)

{
  int *piVar1;
  long lVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    lVar2 = param_1;
    _write(param_1,param_2,param_3);
    if (lVar2 < 1) {
      piVar1 = ___error();
      if (*piVar1 != 4) {
        return -1;
      }
      lVar2 = 0;
    }
    param_2 = param_2 + lVar2;
    param_3 = param_3 - lVar2;
  } while (param_3 != 0);
  return lVar2;
}



/* Address: 0x100175270 | FUN_100175270 */

void FUN_100175270(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = param_3;
  return;
}



/* Address: 0x100175280 | FUN_100175280 */

uint FUN_100175280(uint *param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  
  if (*(ulong *)(param_1 + 2) == 0) {
LAB_1001752b8:
    lVar3 = *(long *)(param_1 + 6);
    if (0x100 < (ulong)(lVar3 + param_3)) {
      uVar2 = (ulong)*param_1;
      FUN_1001751f8(uVar2,param_1 + 8);
      if ((long)uVar2 < 0) goto LAB_100175320;
      lVar3 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    uVar2 = lVar3 + param_3;
    if (uVar2 < 0x101) {
      if (param_3 != 0) {
        puVar4 = (undefined1 *)((long)param_1 + lVar3 + 0x20);
        lVar3 = param_3;
        do {
          *puVar4 = *param_2;
          lVar3 = lVar3 + -1;
          puVar4 = puVar4 + 1;
          param_2 = param_2 + 1;
        } while (lVar3 != 0);
        uVar2 = *(long *)(param_1 + 6) + param_3;
      }
      *(ulong *)(param_1 + 6) = uVar2;
      uVar1 = 1;
    }
    else {
      uVar2 = (ulong)*param_1;
      FUN_1001751f8(uVar2,param_2,param_3);
      uVar1 = (uint)(uVar2 >> 0x3f) ^ 1;
    }
  }
  else {
    if ((ulong)(*(long *)(param_1 + 4) + param_3) <= *(ulong *)(param_1 + 2)) {
      *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + param_3;
      goto LAB_1001752b8;
    }
LAB_100175320:
    uVar1 = 0;
  }
  return uVar1;
}



/* Address: 0x100175350 | FUN_100175350 */

bool FUN_100175350(uint *param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 6) == 0) {
    return true;
  }
  uVar1 = (ulong)*param_1;
  FUN_1001751f8(uVar1,param_1 + 8);
  if (-1 < (long)uVar1) {
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return -1 < (long)uVar1;
}



/* Address: 0x10017539c | FUN_10017539c */

bool FUN_10017539c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 6) != 0) {
    uVar2 = (ulong)*param_1;
    FUN_1001751f8(uVar2,param_1 + 8);
    if ((long)uVar2 < 0) {
      return false;
    }
    param_1[6] = 0;
    param_1[7] = 0;
  }
  uVar1 = *param_1;
  _close(uVar1);
  return uVar1 == 0;
}



/* Address: 0x1001753ec | FUN_1001753ec */

undefined8 FUN_1001753ec(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = param_2;
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 7) || (param_3 == 0x100000c)) || (param_3 == 0x1000007)) {
    puVar2 = param_1;
    FUN_100174f3c();
    param_1[5] = puVar2;
    piVar3 = param_2;
    FUN_10017c740(param_2);
    FUN_10017c7bc(param_2,piVar3,0,0x1c);
    if (param_2 == (int *)0x0) {
      return 5;
    }
    iVar1 = *param_2;
    (**(code **)(param_1[5] + 8))();
    if (iVar1 == 1) {
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 3);
      param_1[4] = *(undefined8 *)(param_2 + 5);
      param_1[3] = uVar6;
      *(undefined8 *)((long)param_1 + 0x14) = uVar5;
      *(undefined8 *)((long)param_1 + 0xc) = uVar4;
      return 0;
    }
  }
  return 4;
}



/* Address: 0x1001754a4 | FUN_1001754a4 */

undefined8 FUN_1001754a4(long *param_1,ulong param_2,ulong *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  
  puVar15 = (undefined8 *)param_1[5];
  lVar4 = *param_1;
  FUN_10017c740();
  uVar5 = (ulong)*(uint *)((long)param_1 + 0x14);
  (*(code *)puVar15[1])();
  uVar6 = (ulong)*(uint *)(param_1 + 2);
  (*(code *)puVar15[1])(uVar6);
  lVar8 = *param_1;
  FUN_10017c7bc(lVar8,lVar4,uVar6 & 0xffffffff,(uVar5 & 0xffffffff) << 2);
  if (lVar8 == 0) {
    return 5;
  }
  uVar6 = (ulong)*(uint *)(param_1 + 4);
  (*(code *)puVar15[1])(uVar6);
  iVar2 = *(int *)((long)param_1 + 0x24);
  (*(code *)puVar15[1])();
  if (iVar2 == 0) {
    return 8;
  }
  lVar7 = *param_1;
  FUN_10017c7bc(lVar7,lVar4,uVar6 & 0xffffffff,(ulong)(iVar2 - 1) * 0xc);
  if (lVar7 == 0) {
    return 5;
  }
  uVar11 = 0;
  uVar12 = iVar2 - 2;
  while( true ) {
    uVar10 = uVar11 + uVar12 >> 1;
    puVar14 = (uint *)(lVar7 + (ulong)uVar10 * 0xc);
    uVar6 = (ulong)*puVar14;
    (*(code *)puVar15[1])();
    if ((uVar6 & 0xffffffff) < param_2) break;
    if ((uVar6 & 0xffffffff) <= param_2) goto LAB_1001755f0;
    if (uVar11 + uVar12 < 2) {
      return 8;
    }
    uVar12 = uVar10 - 1;
LAB_1001755e0:
    if (uVar12 < uVar11) {
      return 8;
    }
  }
  if (uVar10 != uVar12) {
    uVar11 = uVar10 + 1;
    uVar6 = (ulong)*(uint *)(lVar7 + (ulong)uVar11 * 0xc);
    (*(code *)puVar15[1])();
    if ((uVar6 & 0xffffffff) <= param_2) goto LAB_1001755e0;
  }
LAB_1001755f0:
  uVar6 = (ulong)puVar14[1];
  (*(code *)puVar15[1])(uVar6);
  piVar9 = (int *)*param_1;
  uVar6 = uVar6 & 0xffffffff;
  FUN_10017c7bc(piVar9,lVar4,uVar6,4);
  iVar2 = *piVar9;
  (*(code *)puVar15[1])();
  if (iVar2 == 3) {
    lVar7 = *param_1;
    FUN_10017c7bc(lVar7,lVar4,uVar6,0xc);
    if (lVar7 == 0) {
      return 5;
    }
    uVar11 = *puVar14;
    (*(code *)puVar15[1])();
    uVar6 = (ulong)*(ushort *)(lVar7 + 4);
    (*(code *)*puVar15)();
    uVar13 = (ulong)*(ushort *)(lVar7 + 6);
    (*(code *)*puVar15)();
    lVar4 = *param_1;
    FUN_10017c758(lVar4,lVar7,uVar6 & 0xffffffff,(uVar13 & 0xffffffff) << 2);
    if ((int)lVar4 == 0) {
      return 5;
    }
    uVar12 = 0;
    lVar4 = (uVar6 & 0xffffffff) + lVar7;
    uVar10 = (int)uVar13 - 1;
    do {
      uVar1 = uVar10 + uVar12 >> 1;
      uVar3 = *(uint *)(lVar4 + (ulong)uVar1 * 4);
      (*(code *)puVar15[1])();
      uVar6 = (ulong)((uVar3 & 0xffffff) + uVar11);
      if (uVar6 < param_2) {
        if (uVar1 == uVar10) {
LAB_10017582c:
          uVar6 = (ulong)*(uint *)(lVar4 + (ulong)uVar1 * 4);
          (*(code *)puVar15[1])();
          uVar12 = (uint)uVar6;
          uVar6 = uVar6 >> 0x18 & 0xff;
          (*(code *)puVar15[1])();
          *param_3 = (ulong)((uVar12 & 0xffffff) + uVar11);
          uVar11 = (uint)uVar6;
          if (uVar11 < (uint)uVar5) {
            uVar11 = *(uint *)(lVar8 + uVar6 * 4);
            (*(code *)puVar15[1])();
          }
          else {
            uVar6 = (ulong)*(ushort *)(lVar7 + 8);
            (*(code *)*puVar15)();
            uVar13 = (ulong)*(ushort *)(lVar7 + 10);
            (*(code *)*puVar15)();
            lVar4 = *param_1;
            FUN_10017c758(lVar4,lVar7,uVar6 & 0xffffffff,(uVar13 & 0xffffffff) << 2);
            if ((int)lVar4 == 0) {
              return 5;
            }
            uVar11 = uVar11 - (uint)uVar5 & 0xff;
            if ((uint)uVar13 <= uVar11) {
              return 5;
            }
            uVar11 = *(uint *)((uVar6 & 0xffffffff) + lVar7 + (ulong)uVar11 * 4);
            (*(code *)puVar15[1])();
          }
          *param_4 = uVar11;
          return 0;
        }
        uVar12 = uVar1 + 1;
        uVar3 = *(uint *)(lVar4 + (ulong)uVar12 * 4);
        (*(code *)puVar15[1])();
        if (param_2 < (uVar3 & 0xffffff) + uVar11) goto LAB_10017582c;
      }
      else {
        if (uVar6 <= param_2) goto LAB_10017582c;
        if (uVar10 + uVar12 < 2) {
          return 8;
        }
        uVar10 = uVar1 - 1;
      }
      if (uVar10 < uVar12) {
        return 8;
      }
    } while( true );
  }
  if (iVar2 != 2) {
    return 5;
  }
  lVar8 = *param_1;
  FUN_10017c7bc(lVar8,lVar4,uVar6,8);
  if (lVar8 == 0) {
    return 5;
  }
  uVar5 = (ulong)*(ushort *)(lVar8 + 4);
  (*(code *)*puVar15)();
  uVar6 = (ulong)*(ushort *)(lVar8 + 6);
  (*(code *)*puVar15)();
  lVar4 = *param_1;
  FUN_10017c758(lVar4,lVar8,uVar5 & 0xffffffff,(uVar6 & 0xffffffff) << 3);
  if ((int)lVar4 == 0) {
    return 5;
  }
  uVar13 = 0;
  lVar8 = (uVar5 & 0xffffffff) + lVar8;
  uVar11 = (int)uVar6 - 1;
  do {
    uVar12 = (int)uVar13 + uVar11;
    uVar10 = uVar12 >> 1;
    uVar5 = (ulong)*(uint *)(lVar8 + (ulong)uVar10 * 8);
    (*(code *)puVar15[1])();
    if ((uVar5 & 0xffffffff) < param_2) {
      if (uVar10 == uVar11) {
LAB_1001757f0:
        puVar14 = (uint *)(lVar8 + (ulong)uVar10 * 8);
        uVar11 = puVar14[1];
        (*(code *)puVar15[1])();
        *param_4 = uVar11;
        uVar5 = (ulong)*puVar14;
        (*(code *)puVar15[1])();
        *param_3 = uVar5 & 0xffffffff;
        return 0;
      }
      uVar13 = (ulong)(uVar10 + 1);
      uVar5 = (ulong)*(uint *)(lVar8 + uVar13 * 8);
      (*(code *)puVar15[1])();
      if (param_2 < (uVar5 & 0xffffffff)) goto LAB_1001757f0;
    }
    else {
      if ((uVar5 & 0xffffffff) <= param_2) goto LAB_1001757f0;
      if (uVar12 < 2) {
        return 8;
      }
      uVar11 = uVar10 - 1;
    }
    if (uVar11 < (uint)uVar13) {
      return 8;
    }
  } while( true );
}



/* Address: 0x100175904 | FUN_100175904 */

void FUN_100175904(void)

{
  return;
}



/* Address: 0x100175908 | FUN_100175908 */

void FUN_100175908(uint *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int local_30 [4];
  int local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
    do {
      if (uVar2 == 0) {
        uVar3 = *param_1;
        uVar4 = 0xffffffff;
      }
      else {
        uVar5 = 0;
        uVar4 = 0;
        uVar3 = param_1[uVar2];
        do {
          if (param_1[uVar5] < uVar3) {
            uVar4 = uVar4 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
        uVar4 = ~uVar4;
      }
      local_30[uVar2] = uVar3 + uVar4;
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
    if ((int)param_2 < 4) {
      iVar1 = local_30[0];
      if (param_2 == 1) goto LAB_100175a40;
      if (param_2 == 2) {
        iVar1 = local_30[0] * 5;
        local_30[2] = local_30[1];
      }
      else {
        iVar1 = 0;
        if (param_2 != 3) goto LAB_100175a40;
        iVar1 = local_30[0] * 0x14 + local_30[1] * 4;
      }
    }
    else if (param_2 == 4) {
      iVar1 = local_30[0] * 0x3c + local_30[1] * 0xc;
      local_30[2] = local_30[2] * 3 + local_30[3];
    }
    else {
      if ((param_2 != 5) && (iVar1 = 0, param_2 != 6)) goto LAB_100175a40;
      iVar1 = local_30[0] * 0x78 + local_30[1] * 0x18 + local_30[2] * 6 + local_30[3] * 2;
      local_30[2] = local_20;
    }
    iVar1 = iVar1 + local_30[2];
  }
LAB_100175a40:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(iVar1);
  }
  return;
}



/* Address: 0x100175a68 | FUN_100175a68 */

void FUN_100175a68(uint param_1,uint param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  byte local_40 [16];
  uint local_30 [4];
  uint local_20;
  undefined4 uStack_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (6 < param_2) {
    uVar1 = 5;
    goto LAB_100175c7c;
  }
  if ((int)param_2 < 4) {
    if (param_2 == 1) {
      local_30[0] = param_1;
      goto LAB_100175c18;
    }
    if (param_2 == 2) {
      local_30[0] = param_1 / 5;
      local_30[1] = param_1 % 5;
      goto LAB_100175c18;
    }
    if (param_2 == 3) {
      local_30[0] = param_1 / 0x14;
      local_30[1] = param_1 % 0x14 >> 2;
      local_30[2] = param_1 & 3;
      goto LAB_100175c18;
    }
  }
  else {
    if (param_2 == 4) {
      local_30[0] = param_1 / 0x3c;
      local_30[1] = (param_1 % 0x3c) / 0xc;
      uVar3 = (param_1 % 0x3c) % 0xc;
      local_30[2] = uVar3 / 3;
      local_30[3] = uVar3 % 3;
    }
    else if (param_2 == 5) {
      local_30[0] = param_1 / 0x78;
      local_30[1] = (param_1 % 0x78) / 0x18;
      uVar3 = (param_1 % 0x78) % 0x18;
      local_30[2] = uVar3 / 6;
      local_30[3] = uVar3 % 6 >> 1;
      local_20 = param_1 & 1;
    }
    else {
      if (param_2 != 6) goto LAB_100175c78;
      local_30[0] = param_1 / 0x78;
      local_30[1] = (param_1 % 0x78) / 0x18;
      uVar3 = (param_1 % 0x78) % 0x18;
      local_30[2] = uVar3 / 6;
      local_30[3] = uVar3 % 6 >> 1;
      local_20 = param_1 & 1;
      uStack_1c = 0;
    }
LAB_100175c18:
    uVar2 = 0;
    local_40[0] = 0;
    local_40[1] = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = 0;
    local_40[6] = 0;
    local_40[7] = 0;
    local_40[8] = 0;
    local_40[9] = 0;
    local_40[10] = 0;
    do {
      uVar3 = 0;
      lVar4 = 1;
      do {
        if ((local_40[lVar4] & 1) == 0) {
          if (uVar3 == local_30[uVar2]) {
            *(int *)(param_3 + uVar2 * 4) = (int)lVar4;
            local_40[lVar4] = 1;
            break;
          }
          uVar3 = uVar3 + 1;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != 7);
      uVar2 = uVar2 + 1;
    } while (uVar2 != param_2);
  }
LAB_100175c78:
  uVar1 = 0;
LAB_100175c7c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar1);
  }
  return;
}



/* Address: 0x100175ca4 | FUN_100175ca4 */

void FUN_100175ca4(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  int local_60 [10];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  param_1[1] = param_2;
  *(undefined8 *)(param_1 + 4) = 0x7ff8000000000000;
  if (param_2 == 0x100000c) {
    uVar2 = param_3 >> 0x18 & 0xf;
    if (uVar2 < 3) {
      if (uVar2 == 0) goto LAB_100175eb8;
      if (uVar2 != 2) goto LAB_1001760ec;
LAB_100175db4:
      if ((param_3 & 0xf000000) == 0x4000000) {
        uVar3 = 1;
      }
      else {
        *(ulong *)(param_1 + 2) = (ulong)(param_3 >> 8 & 0xfff0);
        param_1[5] = 0x20;
        uVar3 = 2;
      }
      *param_1 = uVar3;
      param_1[6] = 0;
      if ((param_3 >> 4 & 1) == 0) {
        uVar2 = 0;
        lVar5 = 0;
      }
      else {
        param_1[8] = 0x1e;
        *(undefined8 *)(param_1 + 6) = 0x1f00000002;
        uVar2 = 2;
        lVar5 = 2;
      }
      if ((param_3 >> 3 & 1) != 0) {
        *(undefined8 *)(param_1 + lVar5 + 7) = 0x1c0000001d;
        uVar2 = uVar2 + 2;
        param_1[6] = uVar2;
        lVar5 = lVar5 + 2;
      }
      if ((param_3 >> 2 & 1) != 0) {
        *(undefined8 *)(param_1 + lVar5 + 7) = 0x1a0000001b;
        uVar2 = uVar2 + 2;
        param_1[6] = uVar2;
        lVar5 = lVar5 + 2;
      }
      if ((param_3 >> 1 & 1) != 0) {
        *(undefined8 *)(param_1 + lVar5 + 7) = 0x1800000019;
        uVar2 = uVar2 + 2;
        param_1[6] = uVar2;
        lVar5 = lVar5 + 2;
      }
      if ((param_3 & 1) != 0) {
        *(undefined8 *)(param_1 + lVar5 + 7) = 0x1600000017;
        uVar2 = uVar2 + 2;
        param_1[6] = uVar2;
      }
      if ((param_3 & 0xf000000) == 0x4000000) {
        *(ulong *)(param_1 + 2) = (ulong)uVar2 * -8;
      }
      goto LAB_1001760ec;
    }
    if (uVar2 != 3) {
      if (uVar2 != 4) goto LAB_1001760ec;
      goto LAB_100175db4;
    }
LAB_100175fcc:
    *param_1 = 4;
    *(ulong *)(param_1 + 2) = (ulong)(param_3 & 0xffffff);
  }
  else {
    if (param_2 != 0x1000007) {
      if (param_2 != 7) goto LAB_1001760ec;
      uVar2 = param_3 >> 0x18 & 0xf;
      if (uVar2 < 2) {
        if (uVar2 != 0) {
          if (uVar2 == 1) {
            lVar5 = 0;
            *param_1 = 1;
            *(ulong *)(param_1 + 2) = -(ulong)(param_3 >> 0xe & 0x3fc);
            param_1[6] = 0;
            puVar4 = param_1 + 7;
            do {
              uVar2 = (param_3 & 0x7fff) >> (ulong)((uint)lVar5 & 0x1f);
              if (uVar2 == 0) break;
              uVar2 = uVar2 & 7;
              FUN_10017611c(uVar2,puVar4,7);
              if (uVar2 != 0) break;
              param_1[6] = param_1[6] + 1;
              lVar5 = lVar5 + 3;
              puVar4 = puVar4 + 1;
            } while (lVar5 != 0x1e);
          }
          goto LAB_1001760ec;
        }
        goto LAB_100175eb8;
      }
      if (uVar2 - 2 < 2) {
        if ((param_3 & 0xf000000) == 0x2000000) {
          uVar2 = param_3 >> 0xe & 0x3fc;
          uVar3 = 2;
        }
        else {
          uVar2 = param_3 >> 0x10 & 0xff;
          param_1[4] = param_3 >> 0xb & 0x1c;
          uVar3 = 3;
        }
        *param_1 = uVar3;
        *(ulong *)(param_1 + 2) = (ulong)uVar2;
        uVar2 = param_3 >> 10 & 7;
        param_1[6] = uVar2;
        local_60[8] = 0;
        local_60[9] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[6] = 0;
        local_60[7] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        param_3 = param_3 & 0x3ff;
        FUN_100175a68(param_3,uVar2,local_60);
        if ((param_3 == 0) && (uVar2 != 0)) {
          uVar6 = 0;
          puVar4 = param_1 + 7;
          do {
            iVar1 = local_60[uVar6];
            FUN_10017611c(iVar1,puVar4,7);
            if (iVar1 != 0) break;
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 < (uint)param_1[6]);
        }
        goto LAB_1001760ec;
      }
LAB_100175dcc:
      if (uVar2 != 4) goto LAB_1001760ec;
      goto LAB_100175fcc;
    }
    uVar2 = param_3 >> 0x18 & 0xf;
    if (1 < uVar2) {
      if (uVar2 - 2 < 2) {
        if ((param_3 & 0xf000000) == 0x2000000) {
          uVar2 = param_3 >> 0xd & 0x7f8;
          uVar3 = 2;
        }
        else {
          uVar2 = param_3 >> 0x10 & 0xff;
          param_1[4] = param_3 >> 10 & 0x38;
          uVar3 = 3;
        }
        *param_1 = uVar3;
        *(ulong *)(param_1 + 2) = (ulong)uVar2;
        uVar2 = param_3 >> 10 & 7;
        param_1[6] = uVar2;
        local_60[8] = 0;
        local_60[9] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[6] = 0;
        local_60[7] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        param_3 = param_3 & 0x3ff;
        FUN_100175a68(param_3,uVar2,local_60);
        if ((param_3 == 0) && (uVar2 != 0)) {
          uVar6 = 0;
          puVar4 = param_1 + 7;
          do {
            iVar1 = local_60[uVar6];
            FUN_10017611c(iVar1,puVar4,0x1000007);
            if (iVar1 != 0) break;
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 1;
          } while (uVar6 < (uint)param_1[6]);
        }
        goto LAB_1001760ec;
      }
      goto LAB_100175dcc;
    }
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        lVar5 = 0;
        *param_1 = 1;
        *(ulong *)(param_1 + 2) = -(ulong)(param_3 >> 0xd & 0x7f8);
        param_1[6] = 0;
        puVar4 = param_1 + 7;
        do {
          uVar2 = (param_3 & 0x7fff) >> (ulong)((uint)lVar5 & 0x1f);
          if (uVar2 == 0) break;
          uVar2 = uVar2 & 7;
          FUN_10017611c(uVar2,puVar4,0x1000007);
          if (uVar2 != 0) break;
          param_1[6] = param_1[6] + 1;
          lVar5 = lVar5 + 3;
          puVar4 = puVar4 + 1;
        } while (lVar5 != 0x1e);
      }
      goto LAB_1001760ec;
    }
LAB_100175eb8:
    *param_1 = 5;
    *(undefined8 *)(param_1 + 2) = 0;
  }
  param_1[6] = 0;
LAB_1001760ec:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10017611c | FUN_10017611c */

undefined8 FUN_10017611c(uint param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0x1000007) {
    if (6 < param_1) {
      return 5;
    }
    puVar1 = &DAT_100c30384;
  }
  else {
    if (param_3 != 7) {
      return 4;
    }
    if (6 < param_1) {
      return 5;
    }
    puVar1 = &DAT_100c30368;
  }
  *param_2 = *(undefined4 *)(puVar1 + (ulong)param_1 * 4);
  return 0;
}



/* Address: 0x10017617c | FUN_10017617c */

undefined4 FUN_10017617c(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x100176184 | FUN_100176184 */

undefined8 FUN_100176184(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Address: 0x10017618c | FUN_10017618c */

undefined4 FUN_10017618c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Address: 0x100176194 | FUN_100176194 */

undefined4 FUN_100176194(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Address: 0x10017619c | FUN_10017619c */

undefined4 FUN_10017619c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Address: 0x1001761a4 | FUN_1001761a4 */

void FUN_1001761a4(long param_1,void *param_2)

{
  _memcpy(param_2,(void *)(param_1 + 0x1c),(ulong)*(uint *)(param_1 + 0x18) << 2);
  return;
}



/* Address: 0x1001761bc | FUN_1001761bc */

void FUN_1001761bc(undefined8 param_1,undefined8 param_2,void *param_3,int *param_4,void *param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  uint local_d0;
  uint uStack_cc;
  ulong local_c8;
  undefined8 local_80 [5];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pvVar4 = param_3;
  FUN_10017f71c();
  _memcpy(param_5,param_3,0x130);
  FUN_10017fd3c(param_5);
  iVar2 = *param_4;
  if (iVar2 - 2U < 2) {
    pvVar5 = param_3;
    FUN_10017f6ec(param_3,2);
    if ((int)pvVar5 == 0) goto LAB_100176450;
    uVar8 = *(ulong *)(param_4 + 2);
    if (iVar2 == 3) {
      uVar6 = param_1;
      FUN_100174ff0(param_1,param_2,uVar8,&local_d0,4);
      if ((int)uVar6 != 0) goto LAB_100176450;
      uVar8 = (ulong)(param_4[4] + local_d0);
    }
    pvVar5 = param_3;
    FUN_10017f724(param_3,2);
    lVar9 = (long)pvVar5 + uVar8;
    FUN_10017f888(param_5,2,lVar9);
    if (param_4[5] == 0x7fffffff) {
      uVar3 = param_4[6];
      FUN_10017f888(param_5,2,lVar9);
      uVar6 = param_1;
      FUN_100174ff0(param_1,lVar9 - (long)pvVar4,0,&local_d0,pvVar4);
      if ((int)uVar6 != 0) goto LAB_100176450;
      lVar9 = (lVar9 - (long)pvVar4) - (long)pvVar4 * (ulong)uVar3;
      if (pvVar4 == (void *)0x8) {
        local_c8 = CONCAT44(uStack_cc,local_d0);
      }
      else {
        local_c8 = (ulong)local_d0;
      }
      goto LAB_1001764a8;
    }
    pvVar5 = param_3;
    FUN_10017f6ec();
    if ((int)pvVar5 == 0) goto LAB_100176450;
    FUN_10017f724(param_3,param_4[5]);
    FUN_10017f888(param_5,0,param_3);
    lVar9 = lVar9 - (long)pvVar4 * (ulong)(uint)param_4[6];
  }
  else {
    if (iVar2 - 4U < 2) goto LAB_100176450;
    if (iVar2 == 1) {
      pvVar5 = param_3;
      FUN_10017f6ec(param_3,1);
      if ((int)pvVar5 == 0) goto LAB_100176450;
      FUN_10017f724(param_3,1);
      lVar9 = *(long *)(param_4 + 2);
      pvVar5 = param_3;
      FUN_100174f78();
      if ((int)pvVar5 == 0) goto LAB_100176450;
      FUN_10017f888(param_5,2,local_80[0]);
      uVar6 = param_1;
      FUN_100174ff0(param_1,param_3,0,&local_d0,(long)pvVar4 << 1);
      if ((int)uVar6 != 0) goto LAB_100176450;
      lVar9 = lVar9 + (long)param_3;
      if (pvVar4 == (void *)0x8) {
        FUN_10017f888(param_5,1,CONCAT44(uStack_cc,local_d0));
      }
      else {
        FUN_10017f888(param_5,1,local_d0);
        local_c8 = (ulong)uStack_cc;
      }
LAB_1001764a8:
      FUN_10017f888(param_5,0,local_c8);
    }
    else {
      lVar9 = 0;
    }
  }
  uVar3 = param_4[6];
  uVar8 = (ulong)uVar3;
  ___memcpy_chk(local_80,param_4 + 7,uVar8 << 2,0x28);
  if (uVar3 != 0) {
    lVar7 = 0;
    piVar10 = (int *)local_80;
    do {
      if (*piVar10 != 0x7fffffff) {
        uVar6 = param_1;
        FUN_100174ff0(param_1,lVar9,lVar7,&local_d0,pvVar4);
        if ((int)uVar6 != 0) break;
        uVar1 = CONCAT44(uStack_cc,local_d0);
        if (pvVar4 != (void *)0x8) {
          uVar1 = (ulong)local_d0;
        }
        FUN_10017f888(param_5,*piVar10,uVar1);
      }
      piVar10 = piVar10 + 1;
      lVar7 = lVar7 + (long)pvVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
LAB_100176450:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1001764bc | FUN_1001764bc */

void FUN_1001764bc(void)

{
  return;
}



/* Address: 0x1001764c0 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC2Ev */

undefined4 * __ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC2Ev(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 1;
  puVar1 = param_1 + 0x40;
  do {
    *(char *)puVar1 = (char)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x65);
  *(undefined1 *)(param_1 + 0x292) = 0xff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0xea) = 0;
  FUN_1001751ec((long)param_1 + 0x96,0xff,0xe);
  *param_1 = 0;
  return param_1;
}



/* Address: 0x10017651c | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC1Ev */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC1Ev(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC2Ev_100eaf720)();
  return;
}



/* Address: 0x100176520 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj */

undefined8
__ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj
          (long param_1,uint param_2,undefined4 param_3,uint param_4)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong *puVar4;
  long lVar5;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xea);
  pbVar3 = (byte *)(param_1 + uVar2 * 0xe + (ulong)(param_2 % 0xe) + 0x96);
  bVar1 = *pbVar3;
  if (bVar1 == 0xff) {
    puVar4 = (ulong *)0x0;
  }
  else {
    do {
      puVar4 = (ulong *)(param_1 + 0xf0 + (ulong)bVar1 * 0x18);
      if ((uint)puVar4[1] == param_2) {
        *puVar4 = (ulong)param_4;
        *(undefined4 *)((long)puVar4 + 0xc) = param_3;
        return 1;
      }
      bVar1 = (byte)puVar4[2];
    } while (bVar1 != 0xff);
  }
  bVar1 = *(byte *)(param_1 + 0xeb);
  if ((ulong)bVar1 != 0xff) {
    lVar5 = param_1 + (ulong)bVar1 * 0x18;
    *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(lVar5 + 0x100);
    *(uint *)(lVar5 + 0xf8) = param_2;
    *(undefined4 *)(lVar5 + 0xfc) = param_3;
    *(ulong *)(lVar5 + 0xf0) = (ulong)param_4;
    *(undefined1 *)(lVar5 + 0x100) = 0xff;
    if (puVar4 == (ulong *)0x0) {
      *pbVar3 = bVar1;
      uVar2 = (ulong)*(byte *)(param_1 + 0xea);
    }
    else {
      *(byte *)(puVar4 + 2) = bVar1;
    }
    *(char *)(param_1 + uVar2 + 0x90) = *(char *)(param_1 + uVar2 + 0x90) + '\x01';
    return 1;
  }
  return 0;
}



/* Address: 0x1001765f4 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPj */

undefined8
__ZN7plcrash2PH5async15dwarf_cfa_stateIjiE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPj
          (long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0xe + (ulong)(param_2 % 0xe)
                         + 0x96);
  while( true ) {
    if (uVar1 == 0xff) {
      return 0;
    }
    puVar2 = (undefined8 *)(param_1 + 0xf0 + (ulong)uVar1 * 0x18);
    if (*(uint *)(puVar2 + 1) == param_2) break;
    uVar1 = (uint)*(byte *)(puVar2 + 2);
    if (uVar1 == 0xff) {
      return 0;
    }
  }
  *param_4 = (int)*puVar2;
  *param_3 = *(undefined4 *)((long)puVar2 + 0xc);
  return 1;
}



/* Address: 0x10017666c | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE15remove_registerEj */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE15remove_registerEj(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x96 + (ulong)*(byte *)(param_1 + 0xea) * 0xe + (ulong)(param_2 % 0xe)
                   );
  if (bVar1 != 0xff) {
    lVar3 = 0;
    do {
      lVar2 = param_1 + 0xf0 + (ulong)bVar1 * 0x18;
      if (*(uint *)(lVar2 + 8) == param_2) {
        if (lVar3 == 0) {
          *(undefined1 *)
           (param_1 + 0x96 + (ulong)*(byte *)(param_1 + 0xea) * 0xe + (ulong)(param_2 % 0xe)) =
               *(undefined1 *)(lVar2 + 0x10);
        }
        else {
          *(undefined1 *)(lVar3 + 0x10) = *(undefined1 *)(lVar2 + 0x10);
        }
        *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(param_1 + 0xeb);
        *(byte *)(param_1 + 0xeb) = bVar1;
        *(char *)(param_1 + 0x90 + (ulong)*(byte *)(param_1 + 0xea)) =
             *(char *)(param_1 + 0x90 + (ulong)*(byte *)(param_1 + 0xea)) + -1;
      }
      bVar1 = *(byte *)(lVar2 + 0x10);
      lVar3 = lVar2;
    } while (bVar1 != 0xff);
  }
  return;
}



/* Address: 0x100176710 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE18get_register_countEv */

undefined1 __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE18get_register_countEv(long param_1)

{
  return *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) + 0x90);
}



/* Address: 0x100176720 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE16set_cfa_registerEjj */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE16set_cfa_registerEjj
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0x18);
  *puVar1 = 2;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  return;
}



/* Address: 0x10017673c | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE23set_cfa_register_signedEji */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE23set_cfa_register_signedEji
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0x18);
  *puVar1 = 3;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  return;
}



/* Address: 0x100176758 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE18set_cfa_expressionEyy */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE18set_cfa_expressionEyy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0x18);
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return;
}



/* Address: 0x100176774 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0xea) * 0x18);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Address: 0x100176794 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE10push_stateEv */

bool __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE10push_stateEv(long param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 0xea);
  if (cVar1 != '\x05') {
    *(byte *)(param_1 + 0xea) = cVar1 + 1U;
    *(undefined1 *)(param_1 + (ulong)(byte)(cVar1 + 1U) + 0x90) = 0;
    bVar2 = *(byte *)(param_1 + 0xea);
    *(undefined4 *)(param_1 + (ulong)bVar2 * 0x18) = 0;
    FUN_1001751ec(param_1 + (ulong)bVar2 * 0xe + 0x96,0xff,0xe);
  }
  return cVar1 != '\x05';
}



/* Address: 0x1001767f8 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE9pop_stateEv */

bool __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE9pop_stateEv(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xea);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xea) = cVar1 + -1;
  }
  return cVar1 != '\0';
}



/* Address: 0x100176814 | __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiEC2EPNS1_15dwarf_cfa_stateIjiEE */

void __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiEC2EPNS1_15dwarf_cfa_stateIjiEE
               (undefined2 *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 0xff00;
  return;
}



/* Address: 0x100176824 | __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiEC1EPNS1_15dwarf_cfa_stateIjiEE */

void __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiEC1EPNS1_15dwarf_cfa_stateIjiEE
               (undefined2 *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 0xff00;
  return;
}



/* Address: 0x100176834 | __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tES4_ */

undefined8
__ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tES4_
          (byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  
  if ((ulong)param_1[1] == 0xff) {
    bVar4 = *param_1;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    bVar2 = *(byte *)(lVar3 + (ulong)param_1[1] * 0x18 + 0x100);
    param_1[1] = bVar2;
    if (bVar2 != 0xff) {
LAB_1001768cc:
      lVar3 = lVar3 + (ulong)bVar2 * 0x18;
      uVar1 = *(undefined4 *)(lVar3 + 0xfc);
      *param_2 = *(undefined4 *)(lVar3 + 0xf8);
      *param_4 = (int)*(undefined8 *)(lVar3 + 0xf0);
      *param_3 = uVar1;
      return 1;
    }
    bVar4 = *param_1 + 1;
    *param_1 = bVar4;
  }
  if (bVar4 < 0xe) {
    lVar3 = *(long *)(param_1 + 8);
    lVar5 = (ulong)*(byte *)(lVar3 + 0xea) * 0xe + (ulong)bVar4 + 0x96;
    do {
      bVar4 = bVar4 + 1;
      bVar2 = *(byte *)(lVar3 + lVar5);
      if (bVar2 != 0xff) {
        param_1[1] = bVar2;
        goto LAB_1001768cc;
      }
      *param_1 = bVar4;
      lVar5 = lVar5 + 1;
    } while (bVar4 != 0xe);
  }
  return 0;
}



/* Address: 0x1001768f0 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC2Ev */

undefined4 * __ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC2Ev(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 1;
  puVar1 = param_1 + 0x40;
  do {
    *(char *)puVar1 = (char)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x65);
  *(undefined1 *)(param_1 + 0x292) = 0xff;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0xea) = 0;
  FUN_1001751ec((long)param_1 + 0x96,0xff,0xe);
  *param_1 = 0;
  return param_1;
}



/* Address: 0x10017694c | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC1Ev */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC1Ev(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfb39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC2Ev_100eaf788)();
  return;
}



/* Address: 0x100176950 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy */

undefined8
__ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy
          (long param_1,uint param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  long lVar5;
  
  uVar2 = (ulong)*(byte *)(param_1 + 0xea);
  pbVar3 = (byte *)(param_1 + uVar2 * 0xe + (ulong)(param_2 % 0xe) + 0x96);
  bVar1 = *pbVar3;
  if (bVar1 == 0xff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar4 = (undefined8 *)(param_1 + 0xf0 + (ulong)bVar1 * 0x18);
      if (*(uint *)(puVar4 + 1) == param_2) {
        *puVar4 = param_4;
        *(undefined4 *)((long)puVar4 + 0xc) = param_3;
        return 1;
      }
      bVar1 = *(byte *)(puVar4 + 2);
    } while (bVar1 != 0xff);
  }
  bVar1 = *(byte *)(param_1 + 0xeb);
  if ((ulong)bVar1 != 0xff) {
    lVar5 = param_1 + (ulong)bVar1 * 0x18;
    *(undefined1 *)(param_1 + 0xeb) = *(undefined1 *)(lVar5 + 0x100);
    *(uint *)(lVar5 + 0xf8) = param_2;
    *(undefined4 *)(lVar5 + 0xfc) = param_3;
    *(undefined8 *)(lVar5 + 0xf0) = param_4;
    *(undefined1 *)(lVar5 + 0x100) = 0xff;
    if (puVar4 == (undefined8 *)0x0) {
      *pbVar3 = bVar1;
      uVar2 = (ulong)*(byte *)(param_1 + 0xea);
    }
    else {
      *(byte *)(puVar4 + 2) = bVar1;
    }
    *(char *)(param_1 + uVar2 + 0x90) = *(char *)(param_1 + uVar2 + 0x90) + '\x01';
    return 1;
  }
  return 0;
}



/* Address: 0x100176a1c | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy */

undefined8
__ZN7plcrash2PH5async15dwarf_cfa_stateIyxE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
          (long param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = (uint)*(byte *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0xe + (ulong)(param_2 % 0xe)
                         + 0x96);
  while( true ) {
    if (uVar1 == 0xff) {
      return 0;
    }
    puVar2 = (undefined8 *)(param_1 + 0xf0 + (ulong)uVar1 * 0x18);
    if (*(uint *)(puVar2 + 1) == param_2) break;
    uVar1 = (uint)*(byte *)(puVar2 + 2);
    if (uVar1 == 0xff) {
      return 0;
    }
  }
  *param_4 = *puVar2;
  *param_3 = *(undefined4 *)((long)puVar2 + 0xc);
  return 1;
}



/* Address: 0x100176a94 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE15remove_registerEj */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE15remove_registerEj(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x96 + (ulong)*(byte *)(param_1 + 0xea) * 0xe + (ulong)(param_2 % 0xe)
                   );
  if (bVar1 != 0xff) {
    lVar3 = 0;
    do {
      lVar2 = param_1 + 0xf0 + (ulong)bVar1 * 0x18;
      if (*(uint *)(lVar2 + 8) == param_2) {
        if (lVar3 == 0) {
          *(undefined1 *)
           (param_1 + 0x96 + (ulong)*(byte *)(param_1 + 0xea) * 0xe + (ulong)(param_2 % 0xe)) =
               *(undefined1 *)(lVar2 + 0x10);
        }
        else {
          *(undefined1 *)(lVar3 + 0x10) = *(undefined1 *)(lVar2 + 0x10);
        }
        *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(param_1 + 0xeb);
        *(byte *)(param_1 + 0xeb) = bVar1;
        *(char *)(param_1 + 0x90 + (ulong)*(byte *)(param_1 + 0xea)) =
             *(char *)(param_1 + 0x90 + (ulong)*(byte *)(param_1 + 0xea)) + -1;
      }
      bVar1 = *(byte *)(lVar2 + 0x10);
      lVar3 = lVar2;
    } while (bVar1 != 0xff);
  }
  return;
}



/* Address: 0x100176b38 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE18get_register_countEv */

undefined1 __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE18get_register_countEv(long param_1)

{
  return *(undefined1 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) + 0x90);
}


