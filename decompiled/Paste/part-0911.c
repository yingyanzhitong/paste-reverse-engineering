/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009c8ee8 | FUN_1009c8ee8 */

void FUN_1009c8ee8(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  String function;
  
  lVar1 = *(long *)(unaff_x22 + 0x100);
  pcVar3 = *(code **)(unaff_x22 + 0x108);
  lVar2 = *(long *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x158;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009c9030;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  uVar5 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  function.bridgeObject = &DAT_e600000000000000;
  function.str = (char *)0x292874696177;
  Swift::CheckedContinuation::init(continuation,function);
  puVar6 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  uVar7 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar1 + 0x20))();
  (*pcVar3)(uVar7,0,1,uVar4);
  _swift_beginAccess(lVar8 + lVar2,unaff_x22 + 0xb0,0x21,0);
  FUN_1009c53a4(uVar7,lVar8 + lVar2);
  _swift_endAccess(unaff_x22 + 0xb0);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009c9030 | FUN_1009c9030 */

void FUN_1009c9030(void)

{
  long *unaff_x22;
  
  _swift_task_switch(FUN_1009c9074,*(undefined8 *)(*unaff_x22 + 0x138),
                     *(undefined8 *)(*unaff_x22 + 0x140));
  return;
}



/* Address: 0x1009c9074 | FUN_1009c9074 */

void FUN_1009c9074(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  _swift_task_switch(FUN_1009c9328,*(undefined8 *)(unaff_x22 + 0x120),
                     *(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Address: 0x1009c90bc | FUN_1009c90bc */

void FUN_1009c90bc(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long unaff_x22;
  long lVar8;
  String function;
  
  lVar1 = *(long *)(unaff_x22 + 0x100);
  pcVar3 = *(code **)(unaff_x22 + 0x108);
  lVar2 = *(long *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x158;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1009c9204;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,0);
  uVar5 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  function.bridgeObject = &DAT_e600000000000000;
  function.str = (char *)0x292874696177;
  Swift::CheckedContinuation::init(continuation,function);
  puVar6 = &DAT_100ff2f88;
  FUN_1000f7830(&DAT_100ff2f88,&DAT_100c8c660);
  uVar7 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (**(code **)(lVar1 + 0x20))();
  (*pcVar3)(uVar7,0,1,uVar4);
  _swift_beginAccess(lVar8 + lVar2,unaff_x22 + 200,0x21,0);
  FUN_1009c53a4(uVar7,lVar8 + lVar2);
  _swift_endAccess(unaff_x22 + 200);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1009c9204 | FUN_1009c9204 */

void FUN_1009c9204(void)

{
  long *unaff_x22;
  
  _swift_task_switch(FUN_1009c9248,*(undefined8 *)(*unaff_x22 + 0x138),
                     *(undefined8 *)(*unaff_x22 + 0x140));
  return;
}



/* Address: 0x1009c9248 | FUN_1009c9248 */

void FUN_1009c9248(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x15b) & 1) == 0) {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x148) + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c9324);
      (*pcVar1)();
    }
    lVar5 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
    if (lVar5 != 0) {
      lVar4 = 0;
      plVar6 = (long *)(*(long *)(lVar7 + 0x10) + 0x20);
      do {
        if (*plVar6 == *(long *)(unaff_x22 + 0x150)) {
          FUN_1009c78b0();
          _swift_release(param_3);
          break;
        }
        lVar4 = lVar4 + 1;
        plVar6 = plVar6 + 3;
      } while (lVar5 != lVar4);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x30));
    _swift_release_n(uVar3,2);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c9328);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  }
  _swift_release(uVar3);
  _swift_task_switch(FUN_1009c9328,*(undefined8 *)(unaff_x22 + 0x120),
                     *(undefined8 *)(unaff_x22 + 0x128));
  return;
}



/* Address: 0x1009c9328 | FUN_1009c9328 */

void FUN_1009c9328(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x130));
  *(undefined1 *)(unaff_x22 + 0x15a) = *(undefined1 *)(unaff_x22 + 0x158);
  _swift_task_switch(FUN_1009c8ea8,*(undefined8 *)(unaff_x22 + 0xe8),0);
  return;
}



/* Address: 0x1009c9374 | FUN_1009c9374 */

void FUN_1009c9374(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  
  if (DAT_100ff3098 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40;
  _swift_getWitnessTable(PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40,CVar1.unknown);
  DAT_100ff3098 = puVar2;
  return;
}



/* Address: 0x1009c93b8 | FUN_1009c93b8 */

void FUN_1009c93b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009c93c4 | FUN_1009c93c4 */

void FUN_1009c93c4(undefined8 param_1,undefined8 param_2)

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
  plVar3 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c668c(plVar3,param_1,param_2,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x1009c9448 | FUN_1009c9448 */

undefined1  [16] FUN_1009c9448(void)

{
  return ZEXT816(0x100f25e78);
}



/* Address: 0x1009c9458 | FUN_1009c9458 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009c9458(void)

{
  return ZEXT816(0x100ff30e0);
}



/* Address: 0x1009c9478 | FUN_1009c9478 */

undefined8 * FUN_1009c9478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1009c94bc | FUN_1009c94bc */

undefined8 * FUN_1009c94bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009c9528 | FUN_1009c9528 */

void FUN_1009c9528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1009c9534 | FUN_1009c9534 */

undefined8 * FUN_1009c9534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009c9588 | FUN_1009c9588 */

undefined1  [16] FUN_1009c9588(void)

{
  return ZEXT816(0x100f25ef0);
}



/* Address: 0x1009c9598 | FUN_1009c9598 */

void FUN_1009c9598(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Address: 0x1009c95f0 | FUN_1009c95f0 */

long * FUN_1009c95f0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar8 + -8);
  uVar1 = *(uint *)(lVar9 + 0x54);
  sVar7 = *(ulong *)(lVar9 + 0x40);
  uVar6 = (uint)sVar7;
  uVar4 = sVar7;
  if (uVar1 < 2) {
    if (uVar6 < 4) {
      uVar2 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
      uVar4 = 2;
      if (0xfffe < uVar2) {
        uVar4 = 4;
      }
      if (uVar2 < 0xff) {
        uVar4 = (ulong)(uVar2 != 0);
      }
    }
    else {
      uVar4 = 1;
    }
    uVar4 = uVar4 + sVar7;
  }
  uVar5 = (ulong)*(uint *)(lVar9 + 0x50) & 0xff;
  if (((uint)uVar5 < 8 && uVar4 < 0x19) && (*(uint *)(lVar9 + 0x50) & 0x100000) == 0) {
    plVar3 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,2,lVar8);
    if ((int)plVar3 != 0) {
      if (uVar1 < 2) {
        if (uVar6 < 4) {
          uVar1 = (~(-1 << (ulong)(uVar6 << 3 & 0x1f)) - uVar1) + 2 >> (ulong)(uVar6 << 3 & 0x1f);
          uVar4 = 2;
          if (0xfffe < uVar1) {
            uVar4 = 4;
          }
          if (uVar1 < 0xff) {
            uVar4 = (ulong)(uVar1 != 0);
          }
        }
        else {
          uVar4 = 1;
        }
        sVar7 = uVar4 + sVar7;
      }
      plVar3 = _memcpy(param_1,param_2,sVar7);
      return plVar3;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar8);
    (**(code **)(lVar9 + 0x38))(param_1,0,2,lVar8);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009c978c | FUN_1009c978c */

void FUN_1009c978c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  uVar1 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,2,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009c97e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,lVar2);
  return;
}



/* Address: 0x1009c97e8 | FUN_1009c97e8 */

void * FUN_1009c97e8(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar5 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,2,lVar5);
  if ((int)pvVar2 != 0) {
    sVar3 = *(size_t *)(lVar6 + 0x40);
    if (*(uint *)(lVar6 + 0x54) < 2) {
      if ((uint)sVar3 < 4) {
        uVar1 = (uint)sVar3 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar6 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar4 = 2;
        if (0xfffe < uVar1) {
          uVar4 = 4;
        }
        if (uVar1 < 0xff) {
          uVar4 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar4 = 1;
      }
      sVar3 = uVar4 + sVar3;
    }
    pvVar2 = _memcpy(param_1,param_2,sVar3);
    return pvVar2;
  }
  (**(code **)(lVar6 + 0x10))(param_1,param_2,lVar5);
  (**(code **)(lVar6 + 0x38))(param_1,0,2,lVar5);
  return param_1;
}



/* Address: 0x1009c98dc | FUN_1009c98dc */

void * FUN_1009c98dc(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar3 = param_1;
  (*pcVar9)(param_1,2,lVar7);
  pvVar2 = param_2;
  (*pcVar9)(param_2,2,lVar7);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar7);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar7);
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar5) goto LAB_1009c99bc;
    if (3 < (uint)sVar4) goto LAB_1009c9944;
LAB_1009c9978:
    uVar1 = (int)sVar4 << 3;
    uVar5 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar5) {
      uVar6 = 4;
    }
    if (uVar5 < 0xff) {
      uVar6 = (ulong)(uVar5 != 0);
    }
  }
  else {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar7);
      (**(code **)(lVar8 + 0x38))(param_1,0,2,lVar7);
      return param_1;
    }
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar5) goto LAB_1009c99bc;
    if ((uint)sVar4 < 4) goto LAB_1009c9978;
LAB_1009c9944:
    uVar6 = 1;
  }
  sVar4 = uVar6 + sVar4;
LAB_1009c99bc:
  pvVar3 = _memcpy(param_1,param_2,sVar4);
  return pvVar3;
}



/* Address: 0x1009c9a34 | FUN_1009c9a34 */

void * FUN_1009c9a34(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar5 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,2,lVar5);
  if ((int)pvVar2 != 0) {
    sVar3 = *(size_t *)(lVar6 + 0x40);
    if (*(uint *)(lVar6 + 0x54) < 2) {
      if ((uint)sVar3 < 4) {
        uVar1 = (uint)sVar3 << 3;
        uVar1 = (~(-1 << (ulong)(uVar1 & 0x1f)) - *(uint *)(lVar6 + 0x54)) + 2 >>
                (ulong)(uVar1 & 0x1f);
        uVar4 = 2;
        if (0xfffe < uVar1) {
          uVar4 = 4;
        }
        if (uVar1 < 0xff) {
          uVar4 = (ulong)(uVar1 != 0);
        }
      }
      else {
        uVar4 = 1;
      }
      sVar3 = uVar4 + sVar3;
    }
    pvVar2 = _memcpy(param_1,param_2,sVar3);
    return pvVar2;
  }
  (**(code **)(lVar6 + 0x20))(param_1,param_2,lVar5);
  (**(code **)(lVar6 + 0x38))(param_1,0,2,lVar5);
  return param_1;
}



/* Address: 0x1009c9b28 | FUN_1009c9b28 */

void * FUN_1009c9b28(void *param_1,void *param_2,long param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  lVar7 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar3 = param_1;
  (*pcVar9)(param_1,2,lVar7);
  pvVar2 = param_2;
  (*pcVar9)(param_2,2,lVar7);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x28))(param_1,param_2,lVar7);
      return param_1;
    }
    (**(code **)(lVar8 + 8))(param_1,lVar7);
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar5) goto LAB_1009c9c08;
    if (3 < (uint)sVar4) goto LAB_1009c9b90;
LAB_1009c9bc4:
    uVar1 = (int)sVar4 << 3;
    uVar5 = (~(-1 << (ulong)(uVar1 & 0x1f)) - uVar5) + 2 >> (ulong)(uVar1 & 0x1f);
    uVar6 = 2;
    if (0xfffe < uVar5) {
      uVar6 = 4;
    }
    if (uVar5 < 0xff) {
      uVar6 = (ulong)(uVar5 != 0);
    }
  }
  else {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar7);
      (**(code **)(lVar8 + 0x38))(param_1,0,2,lVar7);
      return param_1;
    }
    uVar5 = *(uint *)(lVar8 + 0x54);
    sVar4 = *(size_t *)(lVar8 + 0x40);
    if (1 < uVar5) goto LAB_1009c9c08;
    if ((uint)sVar4 < 4) goto LAB_1009c9bc4;
LAB_1009c9b90:
    uVar6 = 1;
  }
  sVar4 = uVar6 + sVar4;
LAB_1009c9c08:
  pvVar3 = _memcpy(param_1,param_2,sVar4);
  return pvVar3;
}



/* Address: 0x1009c9c80 | FUN_1009c9c80 */

int FUN_1009c9c80(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (1 < uVar3) {
    uVar1 = uVar3 - 2;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 < 2) {
    if ((uint)lVar7 < 4) {
      uVar4 = (uint)lVar7 << 3;
      uVar4 = (~(-1 << (ulong)(uVar4 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar4 & 0x1f);
      uVar9 = 2;
      if (0xfffe < uVar4) {
        uVar9 = 4;
      }
      if (uVar4 < 0xff) {
        uVar9 = (ulong)(uVar4 != 0);
      }
    }
    else {
      uVar9 = 1;
    }
    lVar7 = uVar9 + lVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1009c9d78;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1009c9d78;
      goto LAB_1009c9d10;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_1009c9d10:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_1009c9d78:
  if (uVar3 < 3) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if (1 < (uint)param_1) {
    iVar2 = (uint)param_1 - 2;
  }
  return iVar2;
}



/* Address: 0x1009c9dfc | FUN_1009c9dfc */

void FUN_1009c9dfc(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  uint uVar9;
  size_t sVar10;
  int iVar11;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar6 + 0x54);
  uVar2 = 0;
  if (1 < uVar3) {
    uVar2 = uVar3 - 2;
  }
  sVar10 = *(size_t *)(lVar6 + 0x40);
  if (uVar3 < 2) {
    if ((uint)sVar10 < 4) {
      uVar9 = (uint)sVar10 << 3;
      uVar9 = (~(-1 << (ulong)(uVar9 & 0x1f)) - uVar3) + 2 >> (ulong)(uVar9 & 0x1f);
      uVar7 = 2;
      if (0xfffe < uVar9) {
        uVar7 = 4;
      }
      if (uVar9 < 0xff) {
        uVar7 = (ulong)(uVar9 != 0);
      }
    }
    else {
      uVar7 = 1;
    }
    sVar10 = uVar7 + sVar10;
  }
  uVar9 = (uint)sVar10;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar5 = 0;
  }
  else {
    uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    bVar8 = 2;
    if (0xffff < uVar1) {
      bVar8 = 4;
    }
    if (uVar1 < 0x100) {
      bVar8 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar9 < 4) {
      bVar5 = bVar8;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar10);
        uVar4 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar10);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar10) = (char)iVar11;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar10) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar10) = iVar11;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar10) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar10) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar10) = 0;
    }
    if ((param_2 != 0) && (2 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x0001009c9f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))(param_1,param_2 + 2);
      return;
    }
  }
  return;
}



/* Address: 0x1009ca018 | FUN_1009ca018 */

void FUN_1009ca018(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001009ca028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x30))(param_1,2);
  return;
}



/* Address: 0x1009ca02c | FUN_1009ca02c */

void FUN_1009ca02c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001009ca03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x38))(param_1,param_2,2);
  return;
}



/* Address: 0x1009ca040 | FUN_1009ca040 */

void FUN_1009ca040(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ca06c | FUN_1009ca06c */

void FUN_1009ca06c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c6dd8(plVar5,param_1,uVar1,uVar3,uVar4,uVar6,uVar2);
  return;
}



/* Address: 0x1009ca0f4 | FUN_1009ca0f4 */

undefined8 FUN_1009ca0f4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1009ca13c | FUN_1009ca13c */

void FUN_1009ca13c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ca160 | FUN_1009ca160 */

void FUN_1009ca160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c70c4(plVar3,param_1,uVar4,uVar1,uVar2);
  return;
}



/* Address: 0x1009ca1d4 | FUN_1009ca1d4 */

undefined8 FUN_1009ca1d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009ca224 | FUN_1009ca224 */

void FUN_1009ca224(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009c4268(plVar1,param_1);
  return;
}



/* Address: 0x1009ca280 | FUN_1009ca280 */

void FUN_1009ca280(void)

{
  FUN_1009c4dc8();
  return;
}



/* Address: 0x1009ca288 | FUN_1009ca288 */

void FUN_1009ca288(void)

{
  FUN_1009c4788();
  return;
}



/* Address: 0x1009ca290 | FUN_1009ca290 */

void FUN_1009ca290(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ca2bc | FUN_1009ca2bc */

void FUN_1009ca2bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ca2e0 | FUN_1009ca2e0 */

void FUN_1009ca2e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1005dfa74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1009ca358 | FUN_1009ca358 */

undefined8 * FUN_1009ca358(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1009ca390 | FUN_1009ca390 */

undefined8 * FUN_1009ca390(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1009ca3d4 | FUN_1009ca3d4 */

void FUN_1009ca3d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009ca3e8 | FUN_1009ca3e8 */

undefined8 * FUN_1009ca3e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1009ca420 | FUN_1009ca420 */

undefined1  [16] FUN_1009ca420(void)

{
  return ZEXT816(0x100f26088);
}



/* Address: 0x1009ca430 | thunk_FUN_1009ca358 */

void thunk_FUN_1009ca358(void)

{
  FUN_1009ca358();
  return;
}



/* Address: 0x1009ca434 | FUN_1009ca434 */

void FUN_1009ca434(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar2 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  puVar9 = auStack_c0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_3,puVar9,&DAT_100ff3080,&DAT_100c8c470);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100ff3080,&DAT_100c8c470);
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
    FUN_1000fb4c4(param_3,&DAT_100ff3080,&DAT_100c8c470);
    puVar2 = &DAT_100f260e8;
    _swift_allocObject(&DAT_100f260e8,0x20,7);
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
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c8c810,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100f26110;
    _swift_allocObject(&DAT_100f26110,0x20,7);
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
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c8c818,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100ff3080,&DAT_100c8c470);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1009ca6c4 | FUN_1009ca6c4 */

void FUN_1009ca6c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_90 [8];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  puVar2 = auStack_90 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,puVar2,&DAT_100ff3080,&DAT_100c8c470);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_1000fb4c4(puVar2,&DAT_100ff3080,&DAT_100c8c470);
    uVar6 = 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar8 + 8))(puVar2,TVar3.unknown);
    uVar6 = (ulong)_Var1 | 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  if (lVar8 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar8);
    _swift_unknownObjectRetain(lVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar8);
  }
  local_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    puStack_80 = &local_70;
    local_60 = UVar5.unknown;
    lStack_58 = lVar7;
  }
  local_88 = 1;
  _swift_task_create(uVar6,&local_88,&DAT_100f263d8,param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x1009ca858 | FUN_1009ca858 */

undefined8 FUN_1009ca858(undefined8 param_1)

{
  undefined8 uVar1;
  
  _swift_allocObject();
  uVar1 = param_1;
  FUN_1009d77e8(param_1);
  FUN_1009d7988(param_1);
  return uVar1;
}



/* Address: 0x1009ca8a0 | FUN_1009ca8a0 */

undefined8 FUN_1009ca8a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1009d77e8();
  FUN_1009d7988(param_1);
  return uVar1;
}



/* Address: 0x1009ca8d0 | FUN_1009ca8d0 */

undefined ** FUN_1009ca8d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined *local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    local_1d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1009d705c(0,lVar6,0);
    lVar7 = param_1 + 0x20;
    do {
      puVar4 = local_120;
      FUN_100076688(lVar7,&local_1d0);
      FUN_100076688(&local_1d0,&local_118);
      uStack_f0 = uStack_f0 & 0xffffffffffff0000;
      local_280 = 0;
      uStack_278 = 0xe000000000000000;
      FUN_100004640(&local_1d0,local_1b8);
      Swift::DefaultStringInterpolation::_appendInterpolation();
      uVar3 = uStack_278;
      uVar2 = local_280;
      FUN_100004594(&local_1d0);
      local_e8 = uVar2;
      uStack_e0 = uVar3;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_120 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1009d705c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_120;
      *(ulong *)(local_120 + 0x10) = uVar1 + 1;
      *(ulong *)(local_120 + uVar1 * 0x40 + 0x48) = uStack_f0;
      *(undefined8 *)(local_120 + uVar1 * 0x40 + 0x40) = local_f8;
      *(undefined8 *)(local_120 + uVar1 * 0x40 + 0x58) = uStack_e0;
      *(undefined8 *)(local_120 + uVar1 * 0x40 + 0x50) = local_e8;
      *(undefined8 *)(local_120 + uVar1 * 0x40 + 0x28) = uStack_110;
      *(undefined **)(local_120 + uVar1 * 0x40 + 0x20) = local_118;
      *(undefined8 *)(local_120 + uVar1 * 0x40 + 0x38) = uStack_100;
      *(undefined8 *)(local_120 + uVar1 * 0x40 + 0x30) = local_108;
      lVar7 = lVar7 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    _swift_bridgeObjectRelease(param_1);
    local_1d0 = puVar4;
  }
  local_f8 = 0x616e6769732d6c73;
  uStack_f0 = 0xe90000000000006c;
  local_e8 = 0xd00000000000001a;
  uStack_e0 = 0x8000000100db71f0;
  local_d8 = 0xd000000000000016;
  uStack_d0 = 0x8000000100db7210;
  local_c8 = 0x69767265732d6c73;
  uStack_c0 = 0xea00000000006563;
  local_b8 = 0x69767265732d6c73;
  uStack_b0 = 0xeb00000000736563;
  local_a8 = 0x726f7272652d6c73;
  puStack_a0 = &DAT_e800000000000000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_78 = 0;
  local_80 = 0;
  local_70 = 1;
  local_1b0 = 0x616e6769732d6c73;
  uStack_1a8 = 0xe90000000000006c;
  local_1a0 = 0xd00000000000001a;
  uStack_198 = 0x8000000100db71f0;
  local_190 = 0xd000000000000016;
  uStack_188 = 0x8000000100db7210;
  local_180 = 0x69767265732d6c73;
  uStack_178 = 0xea00000000006563;
  local_170 = 0x69767265732d6c73;
  uStack_168 = 0xeb00000000736563;
  local_160 = 0x726f7272652d6c73;
  puStack_158 = &DAT_e800000000000000;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 1;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 1;
  uStack_1c8 = param_2;
  local_1c0 = param_3;
  local_1b8 = param_4;
  local_118 = local_1d0;
  uStack_110 = param_2;
  local_108 = param_3;
  uStack_100 = param_4;
  _swift_retain(param_4);
  FUN_1009d79bc(&local_118,&local_280);
  FUN_1009d7988(&local_1d0);
  FUN_1009d79f8();
  _swift_allocObject();
  ppuVar5 = &local_118;
  FUN_1009d77e8(ppuVar5);
  FUN_1009d7988(&local_118);
  _swift_release(param_4);
  return ppuVar5;
}



/* Address: 0x1009cab5c | FUN_1009cab5c */

undefined8 FUN_1009cab5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_1009d7a0c(param_1,param_2,param_3);
  FUN_1009d7988(param_2);
  return param_1;
}



/* Address: 0x1009cabbc | FUN_1009cabbc */

undefined8 FUN_1009cabbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1009d7a0c();
  FUN_1009d7988(param_2);
  return param_1;
}



/* Address: 0x1009cabec | FUN_1009cabec */

void FUN_1009cabec(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  lVar1 = 0;
  FUN_1009d7ca4();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  _swift_task_switch(FUN_1009cac5c);
  return;
}



/* Address: 0x1009cac5c | FUN_1009cac5c */

void FUN_1009cac5c(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar4 = _TtC16ServiceLifecycle12ServiceGroup::state;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar11 = *(long *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_beginAccess(lVar11 + _TtC16ServiceLifecycle12ServiceGroup::state,unaff_x22 + 0x50,0,0);
  FUN_1009d7cb8(lVar11 + lVar4,uVar10);
  _swift_getEnumCaseMultiPayload(uVar10,uVar9);
  if ((int)uVar10 == 0) {
    puVar2 = *(undefined8 **)(unaff_x22 + 0xb0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar12 = **(ulong **)(unaff_x22 + 0xb8);
    *puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_storeEnumTagMultiPayload(puVar2,uVar9,0);
    _swift_beginAccess(lVar11 + lVar4,unaff_x22 + 0x68,0x21,0);
    FUN_1009d7cfc(puVar2,lVar11 + lVar4);
    _swift_endAccess(unaff_x22 + 0x68);
    FUN_1009d7d40(uVar10,unaff_x22 + 0x10);
    uVar7 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = uVar12;
    if ((uVar7 & 1) == 0) {
      uVar8 = 0;
      FUN_1009c81ac(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    }
    uVar7 = *(ulong *)(uVar8 + 0x10);
    uVar12 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_1009c81ac(uVar12,uVar7 + 1,1,uVar8);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar3 = *(ulong **)(unaff_x22 + 0xb0);
    *(ulong *)(uVar12 + 0x10) = uVar7 + 1;
    lVar1 = uVar12 + uVar7 * 0x40;
    uVar13 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(lVar1 + 0x40) = uVar16;
    *(undefined8 *)(lVar1 + 0x58) = uVar18;
    *(undefined8 *)(lVar1 + 0x50) = uVar17;
    *(undefined8 *)(lVar1 + 0x28) = uVar13;
    *(undefined8 *)(lVar1 + 0x20) = uVar10;
    *(undefined8 *)(lVar1 + 0x38) = uVar15;
    *(undefined8 *)(lVar1 + 0x30) = uVar14;
    *puVar3 = uVar12;
    _swift_storeEnumTagMultiPayload(puVar3,uVar9,0);
    _swift_beginAccess(lVar11 + lVar4,unaff_x22 + 0x80,0x21,0);
    FUN_1009d7cfc(puVar3,lVar11 + lVar4);
    _swift_endAccess(unaff_x22 + 0x80);
  }
  else if ((int)uVar10 == 1) {
    lVar11 = *(long *)(unaff_x22 + 0xb8);
    puVar5 = &DAT_100ff3220;
    FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(lVar11 + *(int *)(puVar5 + 0x30));
    plVar6 = (long *)&DAT_00000030;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 200) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_1009cae68;
    FUN_100750da8(*(undefined8 *)(unaff_x22 + 0x98));
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001009cae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009cae68 | FUN_1009cae68 */

void FUN_1009cae68(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 200));
  _swift_task_switch(FUN_1009caebc,uVar1,0);
  return;
}



/* Address: 0x1009caebc | FUN_1009caebc */

void FUN_1009caebc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xc0));
  puVar2 = &DAT_100ff3228;
  FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(uVar1,puVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009caf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009caf2c | FUN_1009caf2c */

void FUN_1009caf2c(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  _swift_task_switch(FUN_1009caf44);
  return;
}



/* Address: 0x1009caf44 | FUN_1009caf44 */

void FUN_1009caf44(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x50);
  FUN_100076688(lVar2,unaff_x22 + 0x10);
  *(undefined2 *)(unaff_x22 + 0x38) = 0;
  FUN_100004640(lVar2,*(undefined8 *)(lVar2 + 0x18));
  Swift::DefaultStringInterpolation::_appendInterpolation();
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0xe000000000000000;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009cafe4;
  FUN_1009cabec(plVar1,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009cafe4 | FUN_1009cafe4 */

void FUN_1009cafe4(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  FUN_1009d7d7c(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001009cb02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1009cb030 | FUN_1009cb030 */

void FUN_1009cb030(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009cb098(0xd000000000000023,0x8000000100db72d0,0x9d);
  return;
}



/* Address: 0x1009cb098 | FUN_1009cb098 */

void FUN_1009cb098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  lVar1 = 0;
  FUN_1009d7ca4();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar3;
  _swift_task_switch(FUN_1009cb118);
  return;
}



/* Address: 0x1009cb118 | FUN_1009cb118 */

void FUN_1009cb118(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  
  lVar2 = _TtC16ServiceLifecycle12ServiceGroup::state;
  uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  *(long *)(unaff_x22 + 200) = _TtC16ServiceLifecycle12ServiceGroup::state;
  _swift_beginAccess(lVar1 + lVar2,unaff_x22 + 0x10,0,0);
  FUN_1009d7cb8(lVar1 + lVar2,uVar12);
  _swift_getEnumCaseMultiPayload(uVar12,uVar14);
  if ((int)uVar12 == 0) {
    lVar13 = *(long *)(unaff_x22 + 0xb8);
    lVar16 = **(long **)(unaff_x22 + 0xc0);
    *(long *)(unaff_x22 + 0xd0) = lVar16;
    *(long *)(unaff_x22 + 0x80) = lVar16;
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    if (*(long *)(lVar16 + 0x10) != 0) {
      puVar5 = &DAT_100ff3238;
      FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
      *(undefined **)(unaff_x22 + 0xd8) = puVar5;
      lVar16 = *(long *)(puVar5 + -8);
      *(long *)(unaff_x22 + 0xe0) = lVar16;
      uVar6 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0xe8) = uVar6;
      puVar5 = &DAT_100ff3228;
      FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
      *(undefined **)(unaff_x22 + 0xf0) = puVar5;
      lVar15 = *(long *)(puVar5 + -8);
      *(long *)(unaff_x22 + 0xf8) = lVar15;
      uVar7 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x100) = uVar7;
      puVar8 = &DAT_100ff3240;
      FUN_1000f7830(&DAT_100ff3240,&DAT_100c8c6e8);
      lVar16 = *(long *)(puVar8 + -8);
      uVar9 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      (**(code **)(lVar16 + 0x68))();
      FUN_1009cbac0(uVar6,uVar7,uVar9);
      (**(code **)(lVar16 + 8))(uVar9,puVar8);
      _swift_task_dealloc(uVar9);
      puVar8 = &DAT_100ff3248;
      FUN_1000f7830(&DAT_100ff3248,&DAT_100c8c6f0);
      _swift_allocObject();
      FUN_100750d74();
      *(undefined **)(unaff_x22 + 0x108) = puVar8;
      puVar10 = &DAT_100ff3220;
      FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
      *(undefined **)(unaff_x22 + 0x110) = puVar10;
      iVar3 = *(int *)(puVar10 + 0x30);
      (**(code **)(lVar15 + 0x10))(lVar13,uVar7,puVar5);
      *(undefined **)(lVar13 + iVar3) = puVar8;
      _swift_storeEnumTagMultiPayload(lVar13,uVar14,1);
      _swift_beginAccess(lVar1 + lVar2,unaff_x22 + 0x28,0x21,0);
      _swift_retain(puVar8);
      FUN_1009d7cfc(lVar13,lVar1 + lVar2);
      _swift_endAccess(unaff_x22 + 0x28);
      plVar11 = (long *)0x4f0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x118) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_1009cb560;
      FUN_1009cbee4(plVar11,unaff_x22 + 0x80,uVar6,puVar8);
      return;
    }
    _swift_bridgeObjectRelease();
    _swift_storeEnumTagMultiPayload(lVar13,uVar14,2);
    _swift_beginAccess(lVar1 + lVar2,unaff_x22 + 0x58,0x21,0);
    FUN_1009d7cfc(lVar13,lVar1 + lVar2);
    _swift_endAccess(unaff_x22 + 0x58);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if ((int)uVar12 == 1) {
      lVar13 = *(long *)(unaff_x22 + 0xc0);
      lVar1 = *(long *)(unaff_x22 + 0x90);
      lVar2 = *(long *)(unaff_x22 + 0x98);
      lVar16 = *(long *)(unaff_x22 + 0x88);
      puVar5 = &DAT_100ff3220;
      FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
      _swift_release(*(undefined8 *)(lVar13 + *(int *)(puVar5 + 0x30)));
      plVar4 = (long *)0x0;
      FUN_1009dad00();
      _swift_allocObject();
      *(undefined1 *)(plVar4 + 4) = 0;
      plVar4[5] = lVar16;
      plVar4[6] = lVar1;
      plVar4[7] = lVar2;
      plVar4[3] = -0x2000000000000000;
      plVar4[2] = 0;
      plVar11 = plVar4;
      FUN_1009d7db0();
      _swift_allocError(&DAT_100f26798,plVar11,0,0);
      *plVar11 = (long)plVar4;
      _swift_willThrow();
      _swift_bridgeObjectRetain(lVar1);
      puVar5 = &DAT_100ff3228;
      FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(lVar13,puVar5);
    }
    else {
      lVar1 = *(long *)(unaff_x22 + 0x90);
      lVar2 = *(long *)(unaff_x22 + 0x98);
      lVar13 = *(long *)(unaff_x22 + 0x88);
      plVar4 = (long *)0x0;
      FUN_1009dad00();
      _swift_allocObject();
      *(undefined1 *)(plVar4 + 4) = 1;
      plVar4[5] = lVar13;
      plVar4[6] = lVar1;
      plVar4[7] = lVar2;
      plVar4[3] = -0x2000000000000000;
      plVar4[2] = 0;
      plVar11 = plVar4;
      FUN_1009d7db0();
      _swift_allocError(&DAT_100f26798,plVar11,0,0);
      *plVar11 = (long)plVar4;
      _swift_willThrow();
      _swift_bridgeObjectRetain(lVar1);
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009cb4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1009cb560 | FUN_1009cb560 */

void FUN_1009cb560(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009cb5c4;
  }
  else {
    pcVar1 = FUN_1009cb7fc;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0xa0),0);
  return;
}


