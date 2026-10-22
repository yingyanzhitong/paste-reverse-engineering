/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007c0da0 | FUN_1007c0da0 */

void FUN_1007c0da0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1007b0d1c(unaff_x20[1],*unaff_x20);
  return;
}



/* Address: 0x1007c0dc4 | FUN_1007c0dc4 */

void FUN_1007c0dc4(void)

{
  undefined8 *unaff_x20;
  
  FUN_10063f8b0(*unaff_x20);
  return;
}



/* Address: 0x1007c0dcc | FUN_1007c0dcc */

void FUN_1007c0dcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10063f88c(param_1,*unaff_x20);
  return;
}



/* Address: 0x1007c0dd4 | FUN_1007c0dd4 */

void FUN_1007c0dd4(__int64 param_1)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10063f88c(HVar1.unknown,*unaff_x20);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1007c0e10 | FUN_1007c0e10 */

void FUN_1007c0e10(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10075161c(*param_1,param_2,*param_2);
  return;
}



/* Address: 0x1007c0e1c | FUN_1007c0e1c */

void FUN_1007c0e1c(undefined8 param_1)

{
  FUN_1007ae2a8();
  _swift_release(param_1);
  return;
}



/* Address: 0x1007c0e40 | FUN_1007c0e40 */

void FUN_1007c0e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1007abfc8(param_4,param_1,param_2);
  return;
}



/* Address: 0x1007c0e6c | FUN_1007c0e6c */

undefined1  [16] FUN_1007c0e6c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  _swift_retain_n(uVar2,2);
  FUN_1007ae058();
  _swift_release(uVar2);
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x1007c0eac | FUN_1007c0eac */

void FUN_1007c0eac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1007aed54(param_1,param_3,param_4);
  return;
}



/* Address: 0x1007c0ed4 | FUN_1007c0ed4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007c0f30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1007c0ed4(undefined8 param_1,long param_2)

{
  CollectionOfOne CVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *extraout_x8;
  long unaff_x21;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  CVar1 = Swift::CollectionOfOne::typeMetadataAccessor();
  puVar3 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(CVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Swift::CollectionOfOne::init(puVar3,CVar1.unknown,uVar4);
  puVar2 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040;
  _swift_getWitnessTable
            (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040,CVar1.unknown);
  FUN_1007aed54(puVar3,CVar1.unknown,puVar2);
  if (unaff_x21 != 0) {
    CVar1.unknown = extraout_x8;
    puVar3 = extraout_x8;
  }
  auVar5._8_8_ = CVar1.unknown;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Address: 0x1007c0f7c | FUN_1007c0f7c */

/* WARNING: Removing unreachable block (ram,0x0001007c0fb0) */

void FUN_1007c0f7c(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1007aed54(param_1,param_5,param_6);
  if (param_5 == 0) {
    (*param_2)(0,0);
    return;
  }
  _swift_retain_n(param_3,2);
  FUN_1007b056c(param_1,param_2,param_3);
  _swift_release(param_5);
  _swift_release(param_3);
  return;
}



/* Address: 0x1007c1054 | FUN_1007c1054 */

/* WARNING: Removing unreachable block (ram,0x0001007c1080) */

void FUN_1007c1054(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  FUN_1007c0ed4();
  if (param_4 == 0) {
    (*param_2)(0,0);
    return;
  }
  _swift_retain_n(param_3,2);
  FUN_1007b056c(param_1,param_2,param_3);
  _swift_release(param_4);
  _swift_release(param_3);
  return;
}



/* Address: 0x1007c1124 | FUN_1007c1124 */

/* WARNING: Removing unreachable block (ram,0x0001007c1200) */

void FUN_1007c1124(long param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  UnownedSerialExecutor UVar4;
  undefined8 *puVar5;
  undefined8 *unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_6;
  *(undefined8 **)(unaff_x22 + 0xa8) = unaff_x20;
  *(ulong *)(unaff_x22 + 0x90) = param_2;
  *(long *)(unaff_x22 + 0x98) = param_5;
  *(long *)(unaff_x22 + 0x58) = param_1;
  lVar8 = *(long *)(param_5 + -8);
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  (**(code **)(lVar8 + 0x20))();
  uVar9 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar9;
  uVar10 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
  uVar11 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(unaff_x22 + 200) = uVar11;
  uVar3 = uVar2;
  puVar5 = unaff_x20;
  FUN_1007c162c();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  *(undefined8 **)(unaff_x22 + 0xd8) = puVar5;
  (**(code **)(lVar8 + 8))(uVar2,param_5);
  if (puVar5 == (undefined8 *)0x0) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001007c122c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(long *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 **)(unaff_x22 + 0x48) = unaff_x20;
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  *(long *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar7;
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) == 0) {
    _swift_retain(uVar7);
    if (param_1 == 0) {
      UVar4.unknown = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_getObjectType(param_1);
      param_2 = param_2 & 0xcfffffffffffffff;
      UVar4 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(unaff_x22 + 0xf0) = UVar4.unknown;
    *(ulong *)(unaff_x22 + 0xf8) = param_2;
    _swift_task_switch(FUN_1007c13f8,UVar4.unknown);
    return;
  }
  plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
  _swift_retain(uVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1007c136c;
  Swift::_withTaskCancellationHandler();
  return;
}



/* Address: 0x1007c136c | FUN_1007c136c */

void FUN_1007c136c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xe8));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
    uVar1 = *(undefined8 *)(lVar4 + 0x58);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1007c14dc;
  }
  else {
    *(long *)(lVar4 + 0x118) = unaff_x20;
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
    uVar1 = *(undefined8 *)(lVar4 + 0x58);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1007c1528;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1007c13f8 | FUN_1007c13f8 */

void FUN_1007c13f8(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  pcVar1 = FUN_1007c2a58;
  _swift_task_addCancellationHandler(FUN_1007c2a58,unaff_x22 + 0x60);
  *(code **)(unaff_x22 + 0x100) = pcVar1;
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007c147c;
  FUN_1007c16bc(FUN_1007c16bc,*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0xd0),
                *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0),
                *(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 200),
                *(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Address: 0x1007c147c | FUN_1007c147c */

void FUN_1007c147c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007c1574;
  }
  else {
    pcVar1 = FUN_1007c15cc;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0xf0),*(undefined8 *)(lVar2 + 0xf8));
  return;
}



/* Address: 0x1007c14dc | FUN_1007c14dc */

void FUN_1007c14dc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe0));
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001007c1524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c1528 | FUN_1007c1528 */

void FUN_1007c1528(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe0));
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x0001007c1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c1574 | FUN_1007c1574 */

void FUN_1007c1574(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x100));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1007c14dc,uVar1,uVar2);
  return;
}



/* Address: 0x1007c15cc | FUN_1007c15cc */

void FUN_1007c15cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x100));
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1007c1528,uVar1,uVar2);
  return;
}



/* Address: 0x1007c162c | FUN_1007c162c */

undefined1  [16] FUN_1007c162c(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 *in_x4;
  undefined8 in_x6;
  undefined1 *extraout_x8;
  long unaff_x21;
  undefined1 auVar2 [16];
  
  puVar1 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(in_x4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(in_x4 + -8) + 0x10))(puVar1,param_1,in_x4);
  FUN_1007aed54(puVar1,in_x4,in_x6);
  if (unaff_x21 != 0) {
    in_x4 = extraout_x8;
    puVar1 = extraout_x8;
  }
  auVar2._8_8_ = in_x4;
  auVar2._0_8_ = puVar1;
  return auVar2;
}



/* Address: 0x1007c16bc | FUN_1007c16bc */

void FUN_1007c16bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  _swift_task_switch(FUN_1007c16d4,0,0);
  return;
}



/* Address: 0x1007c16d4 | FUN_1007c16d4 */

void FUN_1007c16d4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005da450;
  lVar3 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar3,1);
  uVar4 = *puVar1;
  _swift_retain(uVar4);
  FUN_1007affe0(uVar2,lVar3);
  _swift_release(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1007c1750 | FUN_1007c1750 */

/* WARNING: Removing unreachable block (ram,0x0001007c17ec) */

void FUN_1007c1750(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined8 uVar2;
  UnownedSerialExecutor UVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *(ulong *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 **)(unaff_x22 + 0x78) = unaff_x20;
  *(long *)(unaff_x22 + 0x48) = param_1;
  lVar7 = *(long *)(param_4 + 0x10);
  *(long *)(unaff_x22 + 0x80) = lVar7;
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
  uVar9 = *(undefined8 *)(param_4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar9;
  uVar2 = param_3;
  puVar4 = unaff_x20;
  FUN_1007c2a7c();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 **)(unaff_x22 + 0xa0) = puVar4;
  (**(code **)(*(long *)(lVar7 + -8) + 8))(param_3,lVar7);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001007c1810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  *(long *)(unaff_x22 + 0x20) = lVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar9;
  *(undefined8 **)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) == 0) {
    _swift_retain(uVar6);
    if (param_1 == 0) {
      UVar3.unknown = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_getObjectType(param_1);
      param_2 = param_2 & 0xcfffffffffffffff;
      UVar3 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(unaff_x22 + 0xb8) = UVar3.unknown;
    *(ulong *)(unaff_x22 + 0xc0) = param_2;
    _swift_task_switch(FUN_1007c19d4,UVar3.unknown);
    return;
  }
  plVar5 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
  _swift_retain(uVar6);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1007c1948;
  Swift::_withTaskCancellationHandler();
  return;
}



/* Address: 0x1007c1948 | FUN_1007c1948 */

void FUN_1007c1948(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xb0));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    uVar1 = *(undefined8 *)(lVar4 + 0x48);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1007c1ab4;
  }
  else {
    *(long *)(lVar4 + 0xe0) = unaff_x20;
    uVar3 = *(undefined8 *)(lVar4 + 0x70);
    uVar1 = *(undefined8 *)(lVar4 + 0x48);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1007c1af8;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1007c19d4 | FUN_1007c19d4 */

void FUN_1007c19d4(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  pcVar1 = FUN_1007c2c0c;
  _swift_task_addCancellationHandler(FUN_1007c2c0c,unaff_x22 + 0x50);
  *(code **)(unaff_x22 + 200) = pcVar1;
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1007c1a54;
  FUN_1007c1bf4(FUN_1007c1bf4,*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x98),
                *(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                *(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x1007c1a54 | FUN_1007c1a54 */

void FUN_1007c1a54(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1007c1b3c;
  }
  else {
    pcVar1 = FUN_1007c1b94;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0xb8),*(undefined8 *)(lVar2 + 0xc0));
  return;
}



/* Address: 0x1007c1ab4 | FUN_1007c1ab4 */

void FUN_1007c1ab4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001007c1af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c1af8 | FUN_1007c1af8 */

void FUN_1007c1af8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001007c1b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c1b3c | FUN_1007c1b3c */

void FUN_1007c1b3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 200));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1007c1ab4,uVar1,uVar2);
  return;
}



/* Address: 0x1007c1b94 | FUN_1007c1b94 */

void FUN_1007c1b94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 200));
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1007c1af8,uVar1,uVar2);
  return;
}



/* Address: 0x1007c1bf4 | FUN_1007c1bf4 */

void FUN_1007c1bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  _swift_task_switch(FUN_1007c1c0c,0,0);
  return;
}



/* Address: 0x1007c1c0c | FUN_1007c1c0c */

void FUN_1007c1c0c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = thunk_FUN_1005da450;
  lVar3 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar3,1);
  uVar4 = *puVar1;
  _swift_retain(uVar4);
  FUN_1007affe0(uVar2,lVar3);
  _swift_release(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1007c1c88 | FUN_1007c1c88 */

void FUN_1007c1c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  Optional OVar2;
  CollectionOfOne CVar3;
  ulong uVar4;
  ulong uVar5;
  undefined7 extraout_var;
  undefined8 uVar6;
  long *plVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar8;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(long *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar8 = *(long *)(param_4 + 0x10);
  *(long *)(unaff_x22 + 0x40) = lVar8;
  CVar3 = Swift::CollectionOfOne::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = CVar3.unknown;
  uVar4 = *(long *)(*(long *)(CVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x70) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x90) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  Swift::AsyncSequence::_makeAsyncIterator();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_getAssociatedConformanceWitness
            (uVar6,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x90),puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1007c1e50;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007c1e50 | FUN_1007c1e50 */

void FUN_1007c1e50(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xb0));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1007c1ebc;
  }
  else {
    pcVar2 = FUN_1007c2188;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1007c1ebc | FUN_1007c1ebc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007c1fc0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007c1ebc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar10 = *(long *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar3 = uVar7;
  (**(code **)(lVar10 + 0x30))(uVar7,1,uVar6);
  if ((int)uVar3 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x90));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001007c1f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar11 = *(ulong *)(unaff_x22 + 0x18);
  (**(code **)(lVar10 + 0x20))(uVar9,uVar7,uVar6);
  (**(code **)(lVar10 + 0x10))(uVar1,uVar9,uVar6);
  Swift::CollectionOfOne::init(uVar2,uVar3,uVar6);
  plVar4 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  puVar5 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040;
  _swift_getWitnessTable
            (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Sequence_100ead040,uVar8);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1007c202c;
  FUN_1007c1124(*(undefined8 *)(unaff_x22 + 0x10),uVar11 & 0xcfffffffffffffff,
                *(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x48),puVar5);
  return;
}



/* Address: 0x1007c202c | FUN_1007c202c */

void FUN_1007c202c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar8 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0xb8));
  if (unaff_x20 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x58) + 8))
              (*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x40));
    uVar2 = *(undefined8 *)(lVar8 + 0xa0);
    uVar4 = *(undefined8 *)(lVar8 + 0x88);
    uVar7 = *(undefined8 *)(lVar8 + 0x80);
    uVar1 = *(undefined8 *)(lVar8 + 0x60);
    uVar3 = *(undefined8 *)(lVar8 + 0x68);
    uVar9 = *(undefined8 *)(lVar8 + 0x50);
    (**(code **)(*(long *)(lVar8 + 0x98) + 8))(uVar2,*(undefined8 *)(lVar8 + 0x90));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001007c20ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))();
    return;
  }
  (**(code **)(*(long *)(lVar8 + 0x58) + 8))
            (*(undefined8 *)(lVar8 + 0x68),*(undefined8 *)(lVar8 + 0x40));
  uVar4 = *(undefined8 *)(lVar8 + 0x30);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(lVar8 + 0x28),*(undefined8 *)(lVar8 + 0x90),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(undefined8 *)(lVar8 + 0xa8) = uVar4;
  plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar8 + 0xb0) = plVar5;
  *plVar5 = lVar6;
  plVar5[1] = (long)FUN_1007c1e50;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007c2188 | FUN_1007c2188 */

void FUN_1007c2188(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_getAssociatedConformanceWitness
            (uVar4,*(undefined8 *)(unaff_x22 + 0x90),uVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_conformance_descriptor_for_Swift_AsyncIteratorProtocol_Swift_AsyncIteratorProtocol_Failure__Swift_Error_100eaebb8
            );
  _swift_allocError(uVar5,uVar4,0,0);
  (**(code **)(lVar1 + 0x20))(uVar4,uVar2,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001007c2274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c2278 | FUN_1007c2278 */

void FUN_1007c2278(undefined8 param_1,undefined8 param_2)

{
  FUN_1007b1254();
  FUN_1007ae2a8();
  _swift_release(param_2);
  return;
}



/* Address: 0x1007c22a0 | FUN_1007c22a0 */

void FUN_1007c22a0(void)

{
  FUN_1007c23a4(FUN_1007ad050);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007c22c8 | FUN_1007c22c8 */

undefined8 FUN_1007c22c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = uVar2;
  _swift_retain(uVar2);
  FUN_1007c2904();
  _swift_release(uVar2);
  return uVar1;
}



/* Address: 0x1007c2300 | FUN_1007c2300 */

void FUN_1007c2300(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_1007c22c8();
  _swift_release(uVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007c2340 | FUN_1007c2340 */

void FUN_1007c2340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1007c2c30(0);
  uVar1 = param_2;
  _swift_retain();
  FUN_1007c2b1c();
  _swift_release(param_2);
  *param_1 = uVar1;
  FUN_1007acb10();
  _swift_release(param_2);
  return;
}



/* Address: 0x1007c23a4 | FUN_1007c23a4 */

void FUN_1007c23a4(code *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  (*param_1)();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1007c23f0 | FUN_1007c23f0 */

void FUN_1007c23f0(void)

{
  FUN_1007c23a4(FUN_1007adc9c);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007c2418 | FUN_1007c2418 */

void FUN_1007c2418(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_1007c2434,0,0);
  return;
}



/* Address: 0x1007c2434 | FUN_1007c2434 */

void FUN_1007c2434(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(**(long **)(unaff_x22 + 0x28) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  plVar1 = (long *)0xf0;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007c24b0;
  FUN_1007b1fac(plVar1,*(undefined8 *)(unaff_x22 + 0x18),0,0);
  return;
}



/* Address: 0x1007c24b0 | FUN_1007c24b0 */

void FUN_1007c24b0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x38));
  _swift_release(uVar1);
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1007c2524,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007c2520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1007c2524 | FUN_1007c2524 */

void FUN_1007c2524(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x20);
  _swift_allocError(uVar1,uVar3,0,0);
  _swift_errorRetain(uVar4);
  puVar2 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  _swift_dynamicCast(uVar3,(undefined8 *)(unaff_x22 + 0x10),puVar2,uVar1,7);
  _swift_willThrow();
  _swift_errorRelease(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001007c25d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c25d8 | FUN_1007c25d8 */

void FUN_1007c25d8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(long *)(unaff_x22 + 0x20) = param_2;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x48) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_1007c2650,UVar1.unknown);
  return;
}



/* Address: 0x1007c2650 | FUN_1007c2650 */

void FUN_1007c2650(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(**(long **)(unaff_x22 + 0x38) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  plVar1 = (long *)0xf0;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007c26c8;
  FUN_1007b1fac(plVar1,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1007c26c8 | FUN_1007c26c8 */

void FUN_1007c26c8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x58);
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  _swift_release(uVar1);
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1007c2744,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007c2740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1007c2744 | FUN_1007c2744 */

void FUN_1007c2744(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  _swift_errorRetain(uVar3);
  puVar1 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  _swift_dynamicCast(uVar2,(undefined8 *)(unaff_x22 + 0x10),puVar1,uVar4,7);
  FUN_1005c64f0(uVar2,uVar4,*(undefined8 *)(lVar5 + 0x20));
  _swift_errorRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007c27e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c27ec | FUN_1007c27ec */

void FUN_1007c27ec(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1007c2418(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1007c2854 | FUN_1007c2854 */

void FUN_1007c2854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar3 = *(long *)(param_5 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100708dfc;
  FUN_1007c25d8(plVar2,param_1,param_2,param_3,param_5,uVar1);
  return;
}



/* Address: 0x1007c2904 | FUN_1007c2904 */

void FUN_1007c2904(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1007c2f38(0,*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x58),
                *(undefined8 *)(lVar1 + 0x60));
  FUN_1007c2b1c(param_1,FUN_1007ad9bc);
  return;
}



/* Address: 0x1007c2948 | FUN_1007c2948 */

void FUN_1007c2948(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c2954 | FUN_1007c2954 */

void FUN_1007c2954(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  _swift_retain(param_2);
  FUN_1007b056c(uVar1,param_1,param_2);
  return;
}



/* Address: 0x1007c299c | FUN_1007c299c */

void FUN_1007c299c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c29a8 | FUN_1007c29a8 */

void FUN_1007c29a8(undefined8 param_1)

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
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1007c16bc(plVar7,param_1,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x1007c2a58 | FUN_1007c2a58 */

void FUN_1007c2a58(void)

{
  long unaff_x20;
  
  FUN_1007b0d1c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007c2a7c | FUN_1007c2a7c */

undefined1  [16]
FUN_1007c2a7c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *extraout_x8;
  long unaff_x21;
  undefined1 auVar3 [16];
  
  puVar2 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar2,param_1);
  puVar1 = (undefined1 *)0x0;
  FUN_1007c2e24(0,param_3,param_4,param_5);
  FUN_1007c0ed4(puVar2,puVar1);
  if (unaff_x21 != 0) {
    puVar1 = extraout_x8;
    puVar2 = extraout_x8;
  }
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Address: 0x1007c2b1c | FUN_1007c2b1c */

long FUN_1007c2b1c(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_retain(param_1);
  (*param_2)();
  return unaff_x20;
}



/* Address: 0x1007c2b70 | FUN_1007c2b70 */

void FUN_1007c2b70(undefined8 param_1)

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
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1007c1bf4(plVar5,param_1,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}


