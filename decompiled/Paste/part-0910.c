/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009c6378 | FUN_1009c6378 */

void FUN_1009c6378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c5674(plVar1,param_1,0,0,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x1009c6408 | FUN_1009c6408 */

void FUN_1009c6408(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x160;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009c6468;
  FUN_1009c880c();
  return;
}



/* Address: 0x1009c6468 | FUN_1009c6468 */

void FUN_1009c6468(undefined1 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x10));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = param_1;
  _swift_task_switch(FUN_1009c64e4,0,0);
  return;
}



/* Address: 0x1009c64e4 | FUN_1009c64e4 */

void FUN_1009c64e4(void)

{
  CancellationError CVar1;
  CancellationError CVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x22;
  String SVar3;
  
  if (*(char *)(unaff_x22 + 0x18) == '\x01') {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    if (*(char *)(unaff_x22 + 0x18) == '\x02') {
      SVar3.bridgeObject = (void *)0x2;
      SVar3.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar3,(StaticString)0x0,0xe000000000000000,0xdb7250);
      return;
    }
    CVar1 = Swift::CancellationError::typeMetadataAccessor();
    CVar2 = CVar1;
    FUN_1009c9374();
    _swift_allocError(CVar1.unknown,CVar2.unknown,0,0);
    Swift::CancellationError::init();
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009c65bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1009c65c0 | FUN_1009c65c0 */

void FUN_1009c65c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  _swift_task_switch(FUN_1009c65dc,0,0);
  return;
}



/* Address: 0x1009c65dc | FUN_1009c65dc */

void FUN_1009c65dc(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = 0;
  FUN_1009c93b8(0,uVar3);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10081d37c;
  FUN_1009c7340(*(undefined8 *)(unaff_x22 + 0x38),uVar1,*(undefined8 *)(unaff_x22 + 0x50),0,0,
                &DAT_100c8c538,unaff_x22 + 0x10,uVar1,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1009c668c | FUN_1009c668c */

void FUN_1009c668c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar2 = 0xff;
  FUN_1009c93b8(0xff,param_5);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x40) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x48) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar4;
  _swift_task_switch(FUN_1009c6728,0,0);
  return;
}



/* Address: 0x1009c6728 | FUN_1009c6728 */

void FUN_1009c6728(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  TaskPriority TVar4;
  undefined *puVar5;
  ThrowingTaskGroup TVar6;
  ulong uVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar2 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  uVar7 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar10 = *(code **)(*(long *)(TVar4.unknown + -8) + 0x38);
  (*pcVar10)(uVar3,1,1,TVar4.unknown);
  puVar2 = &DAT_100f25f90;
  _swift_allocObject(&DAT_100f25f90,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar12;
  *(undefined8 *)(puVar2 + 0x28) = uVar11;
  _swift_retain(uVar9);
  puVar5 = &DAT_100ff3200;
  FUN_1000f8b08(&DAT_100ff3200,&DAT_100c8c610);
  *(undefined **)(unaff_x22 + 0x68) = puVar5;
  TVar6 = Swift::ThrowingTaskGroup::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = TVar6.unknown;
  FUN_1009c6f48(uVar3,&DAT_100c8c628,puVar2,TVar6.unknown);
  FUN_1009ca0f4(uVar3);
  _swift_task_dealloc(uVar3);
  uVar7 = uVar7 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (*pcVar10)();
  puVar2 = &DAT_100f25fb8;
  _swift_allocObject(&DAT_100f25fb8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  FUN_1009c6f48(uVar7,&DAT_100c8c638,puVar2,TVar6.unknown);
  FUN_1009ca0f4(uVar7);
  _swift_task_dealloc(uVar7);
  plVar8 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1009c6918;
  FUN_1009c723c(plVar8,*(undefined8 *)(unaff_x22 + 0x60),0,0,TVar6.unknown);
  return;
}



/* Address: 0x1009c6918 | FUN_1009c6918 */

void FUN_1009c6918(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c697c;
  }
  else {
    pcVar1 = FUN_1009c6d18;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009c697c | FUN_1009c697c */

void FUN_1009c697c(void)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  String SVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x38);
  Swift::ThrowingTaskGroup::cancelAll((undefined *)**(undefined8 **)(unaff_x22 + 0x18));
  (**(code **)(lVar5 + 0x10))(uVar4,uVar1,uVar6);
  pcVar3 = *(code **)(*(long *)(lVar7 + -8) + 0x30);
  *(code **)(unaff_x22 + 0x88) = pcVar3;
  (*pcVar3)(uVar4,1,lVar7);
  if ((int)uVar4 == 1) {
    SVar9.bridgeObject = (void *)0x2;
    SVar9.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar9,(StaticString)0xd000000000000026,0x8000000100db7260,
               0xdb7250);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar7 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar7;
  pcVar3 = *(code **)(lVar7 + 0x30);
  *(code **)(unaff_x22 + 0x98) = pcVar3;
  uVar1 = uVar6;
  (*pcVar3)(uVar6,2,lVar5);
  if ((int)uVar1 != 0) {
    plVar2 = (long *)0x20;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009c6b64;
    FUN_1009c723c(plVar2,*(undefined8 *)(unaff_x22 + 0x50),0,0,*(undefined8 *)(unaff_x22 + 0x70));
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x40));
  (**(code **)(lVar7 + 0x20))(uVar8,uVar6,lVar5);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009c6b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c6b64 | FUN_1009c6b64 */

void FUN_1009c6b64(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c6bc8;
  }
  else {
    pcVar1 = FUN_1009c6d70;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009c6bc8 | FUN_1009c6bc8 */

void FUN_1009c6bc8(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  StaticString file;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  String SVar8;
  
  file.unknown = (undefined *)0xd000000000000026;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = uVar4;
  (**(code **)(unaff_x22 + 0x88))(uVar4,1,*(undefined8 *)(unaff_x22 + 0x38));
  if ((int)uVar3 == 1) {
    pcVar1 = "Unexpectedly got nil from group.next()";
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = uVar4;
    (**(code **)(unaff_x22 + 0x98))(uVar4,2,uVar5);
    if ((int)uVar3 == 0) {
      lVar7 = *(long *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x40));
      (**(code **)(lVar7 + 0x20))(uVar6,uVar4,uVar5);
      _swift_task_dealloc(uVar2);
      _swift_task_dealloc(uVar3);
      _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001009c6d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    pcVar1 = "Unexpectedly got gracefulShutdown from group.next()";
    file.unknown = (undefined *)0xd000000000000033;
  }
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
             0xdb7250);
  return;
}



/* Address: 0x1009c6d18 | FUN_1009c6d18 */

void FUN_1009c6d18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009c6d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c6d70 | FUN_1009c6d70 */

void FUN_1009c6d70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009c6dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c6dd8 | FUN_1009c6dd8 */

void FUN_1009c6dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_6;
  lVar4 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009c6e6c;
                    /* WARNING: Could not recover jumptable at 0x0001009c6e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar3,uVar2);
  return;
}



/* Address: 0x1009c6e6c | FUN_1009c6e6c */

void FUN_1009c6e6c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009c6ed0;
  }
  else {
    pcVar1 = FUN_10073a1a4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009c6ed0 | FUN_1009c6ed0 */

void FUN_1009c6ed0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  (**(code **)(lVar1 + 0x20))(uVar2,uVar3,uVar4);
  (**(code **)(lVar1 + 0x38))(uVar2,0,2,uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001009c6f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c6f48 | FUN_1009c6f48 */

void FUN_1009c6f48(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

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
  undefined auStack_a0 [8];
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  puVar2 = auStack_a0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1009ca1d4(param_1,puVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_1009ca0f4(puVar2);
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
  local_88 = *unaff_x20;
  puStack_90 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_80 = 0;
    uStack_78 = 0;
    puStack_90 = &local_80;
    local_70 = UVar5.unknown;
    lStack_68 = lVar7;
  }
  local_98 = 1;
  _swift_task_create(uVar6,&local_98,*(undefined8 *)(param_4 + 0x10),param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x1009c70c4 | FUN_1009c70c4 */

void FUN_1009c70c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1009c70dc,0,0);
  return;
}



/* Address: 0x1009c70dc | FUN_1009c70dc */

void FUN_1009c70dc(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_1009c4f0c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x20) = lVar2;
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar3 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar2 + lVar1,1,1,puVar3);
  plVar4 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009c7184;
  FUN_1009c3f40();
  return;
}



/* Address: 0x1009c7184 | FUN_1009c7184 */

void FUN_1009c7184(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x30) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1009c71e4,0,0);
  return;
}



/* Address: 0x1009c71e4 | FUN_1009c71e4 */

void FUN_1009c71e4(void)

{
  undefined4 uVar1;
  long unaff_x22;
  
  uVar1 = 1;
  if (*(char *)(unaff_x22 + 0x30) != '\x01') {
    uVar1 = 2;
  }
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x18) + -8) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1,2);
                    /* WARNING: Could not recover jumptable at 0x0001009c7238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c723c | FUN_1009c723c */

void FUN_1009c723c(ThrowingTaskGroup param_1,undefined8 param_2,undefined8 param_3,
                  undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::ThrowingTaskGroup::_next(param_1);
    return;
  }
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1009c7ee8(plVar2,param_1.unknown,param_2,param_3,param_4);
  return;
}



/* Address: 0x1009c7340 | FUN_1009c7340 */

void FUN_1009c7340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_1005cd444;
    Swift::_withThrowingTaskGroup();
    return;
  }
  plVar2 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c7b48(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1009c7498 | FUN_1009c7498 */

void FUN_1009c7498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009c7514;
  FUN_1009c65c0(plVar1,param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1009c7514 | FUN_1009c7514 */

void FUN_1009c7514(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009c7558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_1009c757c,0,0);
  return;
}



/* Address: 0x1009c757c | FUN_1009c757c */

void FUN_1009c757c(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x18) + -8) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),0,1);
                    /* WARNING: Could not recover jumptable at 0x0001009c75c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c75c8 | FUN_1009c75c8 */

undefined1 FUN_1009c75c8(void)

{
  code *pcVar1;
  int iVar2;
  undefined1 uVar3;
  long lVar4;
  long local_38;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  if (local_38 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(local_38 + 0x10);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c7668);
      (*pcVar1)();
    }
    uVar3 = *(undefined1 *)(lVar4 + 0x20);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x30));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c766c);
      (*pcVar1)();
    }
    _swift_release(local_38);
  }
  return uVar3;
}



/* Address: 0x1009c766c | FUN_1009c766c */

void FUN_1009c766c(void)

{
  TaskLocal *pTVar1;
  undefined8 *puVar2;
  undefined8 local_28;
  
  local_28 = 0;
  pTVar1 = (TaskLocal *)&DAT_100ff3210;
  FUN_1000f7830(&DAT_100ff3210,&DAT_100c8c688);
  _swift_allocObject();
  puVar2 = &local_28;
  Swift::TaskLocal::_init(pTVar1);
  DAT_101058298 = puVar2;
  return;
}



/* Address: 0x1009c76c4 | FUN_1009c76c4 */

undefined8 * FUN_1009c76c4(void)

{
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  return &DAT_101058298;
}



/* Address: 0x1009c7704 | FUN_1009c7704 */

void FUN_1009c7704(void)

{
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  _swift_retain(DAT_101058298);
  return;
}



/* Address: 0x1009c7744 | FUN_1009c7744 */

long FUN_1009c7744(void)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long unaff_x20;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_allocObject();
  puVar4 = &DAT_100ff2c60;
  FUN_1000f7830(&DAT_100ff2c60,&DAT_100c8bfe0);
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0;
  *(undefined **)(puVar4 + 0x28) = puVar1;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x30),&local_38);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c7800);
    (*pcVar2)();
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009c7804 | FUN_1009c7804 */

void FUN_1009c7804(void)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long unaff_x20;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &DAT_100ff2c60;
  FUN_1000f7830(&DAT_100ff2c60,&DAT_100c8bfe0);
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(puVar4 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0;
  *(undefined **)(puVar4 + 0x28) = puVar1;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x30),&local_38);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c78ac);
    (*pcVar2)();
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009c78b0 | FUN_1009c78b0 */

undefined8 FUN_1009c78b0(ulong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_1009d6744();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar4 = uVar6 + param_1 * 0x18;
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    uVar1 = *puVar5;
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    _memmove(puVar5,(void *)(lVar4 + 0x38),(lVar7 - param_1) * 0x18);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c7950);
  (*pcVar2)();
}



/* Address: 0x1009c7950 | FUN_1009c7950 */

/* WARNING: Removing unreachable block (ram,0x0001009c79ac) */

void FUN_1009c7950(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x30));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c79a8);
    (*pcVar1)();
  }
  FUN_1009c79b0(lVar3 + 0x10);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x30));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c79ac);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x1009c79b0 | FUN_1009c79b0 */

void FUN_1009c79b0(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *local_80;
  long local_78;
  long *local_70;
  
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
    lVar7 = *param_1;
    lVar4 = *(long *)(lVar7 + 0x10);
    if (lVar4 != 0) {
      puVar9 = (undefined8 *)(lVar7 + 0x30);
      do {
        pcVar5 = (code *)puVar9[-1];
        uVar1 = *puVar9;
        _swift_retain(uVar1);
        (*pcVar5)();
        _swift_release(uVar1);
        puVar9 = puVar9 + 3;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    _swift_bridgeObjectRelease(lVar7);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    *param_1 = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar7 = param_1[3];
    puVar2 = &DAT_100ff31f8;
    FUN_1000f7830(&DAT_100ff31f8,&DAT_100c8c600);
    lVar12 = *(long *)(puVar2 + -8);
    uVar3 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    lVar10 = (long)&local_80 - uVar3;
    lVar4 = *(long *)(lVar7 + 0x10);
    local_70 = param_1;
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease(lVar7);
    }
    else {
      lVar11 = lVar7 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
      lVar8 = *(long *)(lVar12 + 0x48);
      pcVar5 = *(code **)(lVar12 + 0x10);
      local_80 = (undefined1 *)&local_80;
      local_78 = lVar7;
      do {
        (*pcVar5)(lVar10,lVar11,puVar2);
        lVar7 = lVar10 - uVar3;
        (**(code **)(lVar12 + 0x20))(lVar7,lVar10,puVar2);
        Swift::CheckedContinuation::resume();
        (**(code **)(lVar12 + 8))(lVar7,puVar2);
        lVar11 = lVar11 + lVar8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      _swift_bridgeObjectRelease(local_78);
      puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    local_70[3] = (long)puVar6;
  }
  return;
}



/* Address: 0x1009c7b48 | FUN_1009c7b48 */

void FUN_1009c7b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  if (param_4 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_5 = 0;
  }
  else {
    _swift_getObjectType(param_4);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x138) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  _swift_task_switch(FUN_1009c7bc0,UVar1.unknown);
  return;
}



/* Address: 0x1009c7bc0 | FUN_1009c7bc0 */

void FUN_1009c7bc0(void)

{
  int iVar1;
  undefined *puVar2;
  ThrowingTaskGroup<undefined,undefined> TVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  piVar5 = *(int **)(unaff_x22 + 0x120);
  _swift_taskGroup_initialize(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x130));
  puVar2 = &DAT_100ff3200;
  FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
  *(undefined **)(unaff_x22 + 0x148) = puVar2;
  TVar3 = Swift::ThrowingTaskGroup::init((void *)(unaff_x22 + 0x10));
  *(undefined **)(unaff_x22 + 0x110) = TVar3.unknown;
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009c7c74;
                    /* WARNING: Could not recover jumptable at 0x0001009c7c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0x118),unaff_x22 + 0x110);
  return;
}



/* Address: 0x1009c7c74 | FUN_1009c7c74 */

void FUN_1009c7c74(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar4 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x150));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1009c7d30,*(undefined8 *)(lVar4 + 0x138),*(undefined8 *)(lVar4 + 0x140));
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x168) = plVar1;
  TVar2 = Swift::ThrowingTaskGroup::typeMetadataAccessor();
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_1009c7e60;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1009c7d30 | FUN_1009c7d30 */

void FUN_1009c7d30(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  Swift::ThrowingTaskGroup::cancelAll((ThrowingTaskGroup)*(undefined **)(unaff_x22 + 0x110));
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar1;
  TVar2 = Swift::ThrowingTaskGroup::typeMetadataAccessor();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009c7dc8;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1009c7dc8 | FUN_1009c7dc8 */

void FUN_1009c7dc8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x160));
  _swift_task_switch(FUN_1009c7e14,*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(lVar1 + 0x140));
  return;
}



/* Address: 0x1009c7e14 | FUN_1009c7e14 */

void FUN_1009c7e14(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001009c7e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c7e60 | FUN_1009c7e60 */

void FUN_1009c7e60(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x168));
  _swift_task_switch(FUN_1009c7eac,*(undefined8 *)(lVar1 + 0x138),*(undefined8 *)(lVar1 + 0x140));
  return;
}



/* Address: 0x1009c7eac | FUN_1009c7eac */

void FUN_1009c7eac(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001009c7ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009c7ee8 | FUN_1009c7ee8 */

void FUN_1009c7ee8(undefined8 param_1,long param_2,undefined8 param_3)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1009c7f54,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1009c7f54 | FUN_1009c7f54 */

void FUN_1009c7f54(void)

{
  long unaff_x22;
  
  _swift_taskGroup_wait_next_throwing
            (*(undefined8 *)(unaff_x22 + 0x38),**(undefined8 **)(unaff_x22 + 0x40),FUN_1002e1208,
             unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009c7f6c | FUN_1009c7f6c */

undefined * FUN_1009c7f6c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c8088);
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
    puVar3 = &DAT_100ff3208;
    FUN_1000f7830(&DAT_100ff3208,&DAT_100c8c680);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f26088);
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



/* Address: 0x1009c8088 | FUN_1009c8088 */

void FUN_1009c8088(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c61c8(plVar7,param_1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar1);
  return;
}



/* Address: 0x1009c8124 | FUN_1009c8124 */

void FUN_1009c8124(undefined8 param_1)

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
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009c6378(plVar5,param_1,uVar3,uVar2,uVar4,uVar6,uVar1);
  return;
}



/* Address: 0x1009c81ac | FUN_1009c81ac */

undefined * FUN_1009c81ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c82b4);
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
    puVar3 = &DAT_100ff31f0;
    FUN_1000f7830(&DAT_100ff31f0,&DAT_100c8c5f8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f26610);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009c82b4 | FUN_1009c82b4 */

undefined * FUN_1009c82b4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c83e4);
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
    puVar3 = &DAT_100ff31c0;
    FUN_1000f7830(&DAT_100ff31c0,&DAT_100c8c5c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff31c8;
    FUN_1000f7830(&DAT_100ff31c8,&DAT_100c8c5d0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009c83e4 | FUN_1009c83e4 */

undefined * FUN_1009c83e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c8514);
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
    puVar3 = &DAT_100ff31d0;
    FUN_1000f7830(&DAT_100ff31d0,&DAT_100c8c5d8);
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
    puVar5 = &DAT_100ff31d8;
    FUN_1000f7830(&DAT_100ff31d8,&DAT_100c8c5e0);
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



/* Address: 0x1009c8514 | FUN_1009c8514 */

ulong FUN_1009c8514(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar5 = param_2;
  if (((param_3 & 1) != 0) && (uVar5 = uVar3, (long)uVar3 < (long)param_2)) {
    if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c863c);
      (*pcVar2)();
    }
    uVar5 = uVar3 * 2;
    if (uVar5 - param_2 == 0 || (long)uVar5 < (long)param_2) {
      uVar5 = param_2;
    }
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = uVar3;
  FUN_1009c863c(uVar3,uVar5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c8638);
      (*pcVar2)();
    }
    FUN_1009c86bc(0,uVar3,uVar4 + 0x20,param_4);
  }
  else {
    uVar5 = (ulong)param_4 & 0xffffffffffffff8;
    if ((uVar4 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar3 * 8) <= (void *)(uVar4 + 0x20)))
    {
      _memmove((void *)(uVar4 + 0x20),(void *)(uVar5 + 0x20),uVar3 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar4;
}



/* Address: 0x1009c863c | FUN_1009c863c */

undefined * FUN_1009c863c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1009c87ac();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x1009c86bc | FUN_1009c86bc */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 FUN_1009c86bc(Range<__int64> param_1,
              UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              param_2,_CocoaArrayWrapper param_3,_ArrayBuffer param_4)

{
  code *pcVar1;
  Range<__int64> RVar2;
  Range<__int64> RVar3;
  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
  UVar4;
  
  RVar3.unknown = param_1.unknown;
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if ((long)param_2.unknown < (long)param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c87a8);
      (*pcVar1)();
    }
    if (param_1.unknown != param_2.unknown) {
      if ((long)param_2.unknown <= (long)param_1.unknown) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c87ac);
        (*pcVar1)();
      }
      FUN_1009c9458();
      RVar2.unknown = param_1.unknown;
      do {
        RVar3.unknown = RVar2.unknown + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar2.unknown,param_4);
        RVar2.unknown = RVar3.unknown;
      } while (param_2.unknown != RVar3.unknown);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8((long)param_2.unknown,(long)param_1.unknown)) {
      FUN_1009c9458();
      _swift_arrayInitWithCopy
                (param_3.unknown,
                 ((ulong)param_4.unknown & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20,
                 (long)param_2.unknown - (long)param_1.unknown,RVar3.unknown);
      _swift_bridgeObjectRelease(param_4.unknown);
      return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              )(param_3.unknown + ((long)param_2.unknown - (long)param_1.unknown) * 8);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009c87a4);
    (*pcVar1)();
  }
  UVar4 = Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )UVar4.unknown;
}



/* Address: 0x1009c87ac | FUN_1009c87ac */

void FUN_1009c87ac(void)

{
  byte bVar1;
  undefined7 extraout_var;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  lVar2 = CONCAT71(extraout_var,bVar1);
  if (((bVar1 & 1) != 0) && (FUN_1009c9458(), lVar2 != 0)) {
    FUN_1000f7830(&DAT_100ff31e8,&DAT_100c8c5f0);
    return;
  }
  FUN_1000f7830(&DAT_100ff31e0,&DAT_100c8c5e8);
  return;
}



/* Address: 0x1009c880c | FUN_1009c880c */

void FUN_1009c880c(void)

{
  _swift_task_switch(FUN_1009c8820,0,0);
  return;
}



/* Address: 0x1009c8820 | FUN_1009c8820 */

void FUN_1009c8820(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x22;
  
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x159) = bVar2 & 1;
  lVar3 = 0;
  FUN_1009c4f0c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  *(long *)(unaff_x22 + 0xf0) = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar4 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  *(undefined **)(unaff_x22 + 0xf8) = puVar4;
  lVar5 = *(long *)(puVar4 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar5;
  pcVar6 = *(code **)(lVar5 + 0x38);
  *(code **)(unaff_x22 + 0x108) = pcVar6;
  (*pcVar6)(lVar3 + lVar1,1,1,puVar4);
  _swift_task_switch(FUN_1009c88e8,lVar3,0);
  return;
}



/* Address: 0x1009c88e8 | FUN_1009c88e8 */

void FUN_1009c88e8(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x159);
  FUN_1009c4ec8();
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  if (cVar1 == '\x01') {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009c89d8;
    Swift::_withTaskCancellationHandler();
    return;
  }
  if (*(long *)(unaff_x22 + 0xe8) == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_1 = 0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0xe8));
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x120) = UVar3.unknown;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  _swift_task_switch(FUN_1009c8a48,UVar3.unknown);
  return;
}



/* Address: 0x1009c89d8 | FUN_1009c89d8 */

void FUN_1009c89d8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x118));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    return;
  }
  *(undefined1 *)(lVar1 + 0x15a) = *(undefined1 *)(lVar1 + 0x158);
  _swift_task_switch(FUN_1009c8ea8,*(undefined8 *)(lVar1 + 0xe8),0);
  return;
}



/* Address: 0x1009c8a48 | FUN_1009c8a48 */

void FUN_1009c8a48(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  pcVar1 = FUN_1009ca280;
  _swift_task_addCancellationHandler(FUN_1009ca280,uVar2);
  *(code **)(unaff_x22 + 0x130) = pcVar1;
  _swift_task_switch(FUN_1009c8a9c,uVar2,0);
  return;
}



/* Address: 0x1009c8a9c | FUN_1009c8a9c */

void FUN_1009c8a9c(void)

{
  UnownedSerialExecutor UVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  _swift_retain_n(lVar3,2);
  if (lVar3 == 0) {
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
    _swift_getObjectType(lVar3);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x138) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar2;
  _swift_task_switch(FUN_1009c8b14,UVar1.unknown);
  return;
}



/* Address: 0x1009c8b14 | FUN_1009c8b14 */

void FUN_1009c8b14(void)

{
  byte bVar1;
  code *pcVar2;
  __uint8 _Var3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  TaskPriority TVar7;
  ulong uVar8;
  TaskPriority TVar9;
  UnownedSerialExecutor UVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  ulong uVar16;
  long lVar17;
  long lVar18;
  
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  lVar14 = *(long *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0x148) = lVar14;
  if (lVar14 == 0) {
    if (*(long *)(unaff_x22 + 0xe8) == 0) {
      UVar10.unknown = (undefined *)0x0;
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
      _swift_getObjectType(*(long *)(unaff_x22 + 0xe8));
      UVar10 = Swift::Actor::get_unownedExecutor();
    }
    pcVar2 = FUN_1009c8ee8;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x10);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c8e5c);
      (*pcVar2)();
    }
    bVar1 = *(byte *)(lVar14 + 0x20);
    *(byte *)(unaff_x22 + 0x15b) = bVar1;
    uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
    if ((bVar1 & 1) == 0) {
      uVar8 = *(ulong *)(lVar14 + 0x10);
      uVar16 = *(ulong *)(lVar14 + 0x18);
      _swift_retain(uVar15);
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar14 + 0x10) = uVar8;
      uVar12 = uVar8;
      if ((uVar6 & 1) == 0) {
        uVar12 = 0;
        FUN_1009c7f6c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
        *(ulong *)(lVar14 + 0x10) = uVar12;
      }
      uVar8 = *(ulong *)(uVar12 + 0x10);
      uVar6 = uVar12;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar8) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_1009c7f6c(uVar6,uVar8 + 1,1,uVar12);
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
      *(ulong *)(uVar6 + 0x10) = uVar8 + 1;
      lVar18 = uVar6 + uVar8 * 0x18;
      *(ulong *)(lVar18 + 0x20) = uVar16;
      *(code **)(lVar18 + 0x28) = FUN_1009ca288;
      *(undefined8 *)(lVar18 + 0x30) = uVar15;
      *(ulong *)(lVar14 + 0x10) = uVar6;
      if (0xfffffffffffffffe < uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c8ea8);
        (*pcVar2)();
      }
      *(ulong *)(lVar14 + 0x18) = uVar16 + 1;
    }
    else {
      puVar5 = &DAT_100ff3080;
      FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
      uVar8 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
      uVar6 = uVar8 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar6);
      TVar7 = Swift::TaskPriority::typeMetadataAccessor();
      lVar18 = *(long *)(TVar7.unknown + -8);
      (**(code **)(lVar18 + 0x38))(uVar6,1,1,TVar7.unknown);
      puVar5 = &DAT_100f25fe0;
      _swift_allocObject(&DAT_100f25fe0,0x28,7);
      *(undefined8 *)(puVar5 + 0x10) = 0;
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 0x20) = uVar15;
      uVar8 = uVar8 & 0xfffffffffffffff0;
      _swift_task_alloc();
      FUN_1009ca1d4(uVar6,uVar8);
      uVar16 = uVar8;
      (**(code **)(lVar18 + 0x30))(uVar8,1,TVar7.unknown);
      _swift_retain(uVar15);
      TVar9.unknown = puVar5;
      _swift_retain();
      if ((int)uVar16 == 1) {
        FUN_1009ca0f4(uVar8);
        uVar16 = 0x1c00;
      }
      else {
        _Var3 = Swift::TaskPriority::get_rawValue(TVar9);
        (**(code **)(lVar18 + 8))(uVar8,TVar7.unknown);
        uVar16 = (ulong)_Var3 | 0x1c00;
      }
      _swift_task_dealloc(uVar8);
      lVar18 = *(long *)(puVar5 + 0x10);
      lVar17 = *(long *)(puVar5 + 0x18);
      _swift_unknownObjectRetain(lVar18);
      _swift_release(puVar5);
      if (lVar18 == 0) {
        UVar10.unknown = (undefined *)0x0;
        lVar17 = 0;
      }
      else {
        _swift_getObjectType(lVar18);
        UVar10 = Swift::Actor::get_unownedExecutor();
        _swift_unknownObjectRelease(lVar18);
      }
      FUN_1009ca0f4(uVar6);
      puVar11 = &DAT_100f26008;
      _swift_allocObject(&DAT_100f26008,0x20,7);
      *(undefined **)(puVar11 + 0x10) = &DAT_100c8c668;
      *(undefined **)(puVar11 + 0x18) = puVar5;
      if (lVar17 == 0 && UVar10.unknown == (undefined *)0x0) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        puVar13 = (undefined8 *)(unaff_x22 + 0x90);
        *puVar13 = 0;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(undefined **)(unaff_x22 + 0xa0) = UVar10.unknown;
        *(long *)(unaff_x22 + 0xa8) = lVar17;
      }
      _swift_task_create(uVar16,puVar13,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c8c670,
                         puVar11);
      _swift_release();
      _swift_task_dealloc(uVar6);
      uVar16 = 0;
    }
    *(ulong *)(unaff_x22 + 0x150) = uVar16;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x30));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009c8e60);
      (*pcVar2)();
    }
    if (*(long *)(unaff_x22 + 0xe8) == 0) {
      UVar10.unknown = (undefined *)0x0;
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
      _swift_getObjectType(*(long *)(unaff_x22 + 0xe8));
      UVar10 = Swift::Actor::get_unownedExecutor();
    }
    pcVar2 = FUN_1009c90bc;
  }
  _swift_task_switch(pcVar2,UVar10.unknown,uVar15);
  return;
}



/* Address: 0x1009c8ea8 | FUN_1009c8ea8 */

void FUN_1009c8ea8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x0001009c8ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x15a));
  return;
}


