/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a525e4 | FUN_100a525e4 */

void FUN_100a525e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_7;
  *(undefined8 *)(unaff_x22 + 0x98) = param_8;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  _swift_task_switch(FUN_100a52614,0,0);
  return;
}



/* Address: 0x100a52614 | FUN_100a52614 */

void FUN_100a52614(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xa8);
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a526b4;
  FUN_100a84ca8(plVar2,unaff_x22 + 0x58,*(undefined8 *)(unaff_x22 + 0x60),uVar1 & 0x101ffffffff00ff,
                &DAT_100c90c58,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x88),
                PTR___type_metadata_for_Swift_Int64_100eadc00,*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x100a526b4 | FUN_100a526b4 */

void FUN_100a526b4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a52718;
  }
  else {
    pcVar1 = FUN_100a52728;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a52718 | FUN_100a52718 */

void FUN_100a52718(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a52724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a52728 | FUN_100a52728 */

void FUN_100a52728(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a52730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a52734 | FUN_100a52734 */

void FUN_100a52734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_9;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccaf90);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccafa0);
  _swift_getAssociatedConformanceWitness
            (param_8,param_6,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  _swift_getAssociatedConformanceWitness();
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  lVar3 = 0;
  FUN_100a50100(0,uVar1,param_8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  _swift_task_switch(FUN_100a52854,0,0);
  return;
}



/* Address: 0x100a52854 | FUN_100a52854 */

void FUN_100a52854(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_100a4f9d4(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x38),0x80000,
                *(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a528cc;
  FUN_100a4eb6c(*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                *(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a528cc | FUN_100a528cc */

void FUN_100a528cc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a52a3c,0,0);
    return;
  }
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x98) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100a5296c;
  FUN_100a4e6f4(*(undefined8 *)(lVar2 + 0x70));
  return;
}



/* Address: 0x100a5296c | FUN_100a5296c */

void FUN_100a5296c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa8) = *(undefined8 *)(lVar2 + 0x18);
    pcVar1 = FUN_100a529d8;
  }
  else {
    pcVar1 = FUN_100a52a8c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a529d8 | FUN_100a529d8 */

void FUN_100a529d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x70));
  *puVar3 = uVar2;
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a52a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a52a3c | FUN_100a52a3c */

void FUN_100a52a3c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a52a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a52a8c | FUN_100a52a8c */

void FUN_100a52a8c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a52ad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a52adc | FUN_100a52adc */

void FUN_100a52adc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a52b00,0,0);
  return;
}



/* Address: 0x100a52b00 | FUN_100a52b00 */

void FUN_100a52b00(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar2 = *(ulong *)(unaff_x22 + 0x20);
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a52bb0;
  FUN_100a525e4(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                uVar2 & 0x101ffffffff00ff,&DAT_100ff6da0,*(undefined8 *)(unaff_x22 + 0x28),
                &DAT_100f2d740,*(undefined8 *)(unaff_x22 + 0x30),&PTR_PTR_100ff6dd8,
                *(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x100a52bb0 | FUN_100a52bb0 */

void FUN_100a52bb0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100a52bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a52c00 | FUN_100a52c00 */

void FUN_100a52c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_8;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_100a52c28,0,0);
  return;
}



/* Address: 0x100a52c28 | FUN_100a52c28 */

void FUN_100a52c28(void)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x98);
  plVar2 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a52cc8;
  FUN_100a84ca8(plVar2,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x58),uVar1 & 0x101ffffffff00ff,
                &DAT_100c90c78,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x80),
                PTR___type_metadata_for_Swift_Int64_100eadc00,*(undefined8 *)(unaff_x22 + 0x90));
  return;
}



/* Address: 0x100a52cc8 | FUN_100a52cc8 */

void FUN_100a52cc8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a51f04;
  }
  else {
    pcVar1 = thunk_FUN_1006e19e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a52d2c | FUN_100a52d2c */

void FUN_100a52d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccaf90);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100ccaf78,&TargetProtocolRequirement_100ccafa0);
  _swift_getAssociatedConformanceWitness
            (param_8,param_6,uVar2,0x100ccaf78,&TargetProtocolRequirement_100ccaf80);
  _swift_getAssociatedConformanceWitness();
  *(undefined8 *)(unaff_x22 + 0x60) = param_8;
  lVar3 = 0;
  FUN_100a50100(0,uVar1,param_8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  _swift_task_switch(FUN_100a52e44,0,0);
  return;
}



/* Address: 0x100a52e44 | FUN_100a52e44 */

void FUN_100a52e44(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_100a4f9d4(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x38),0x80000,
                *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a52ebc;
  FUN_100a4f740(*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x68),
                *(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x100a52ebc | FUN_100a52ebc */

void FUN_100a52ebc(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(long *)(lVar2 + 0x20) = unaff_x20;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a5302c,0,0);
    return;
  }
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(lVar2 + 0x90) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100a52f5c;
  FUN_100a4e6f4(*(undefined8 *)(lVar2 + 0x68));
  return;
}



/* Address: 0x100a52f5c | FUN_100a52f5c */

void FUN_100a52f5c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0x18);
    pcVar1 = FUN_100a52fc8;
  }
  else {
    pcVar1 = FUN_100a5307c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a52fc8 | FUN_100a52fc8 */

void FUN_100a52fc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x68));
  *puVar3 = uVar2;
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a53028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5302c | FUN_100a5302c */

void FUN_100a5302c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a53078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a5307c | FUN_100a5307c */

void FUN_100a5307c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a530c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a530cc | FUN_100a530cc */

void FUN_100a530cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100a530ec,0,0);
  return;
}



/* Address: 0x100a530ec | FUN_100a530ec */

void FUN_100a530ec(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar2 = *(ulong *)(unaff_x22 + 0x20);
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100a52594;
  FUN_100a52c00(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                uVar2 & 0x101ffffffff00ff,&DAT_100ff6da0,*(undefined8 *)(unaff_x22 + 0x28),
                &DAT_100f2d740,*(undefined8 *)(unaff_x22 + 0x30),&PTR_PTR_100ff6dd8);
  return;
}



/* Address: 0x100a53198 | FUN_100a53198 */

void FUN_100a53198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  _swift_task_switch(FUN_100a531b4,0,0);
  return;
}



/* Address: 0x100a531b4 | FUN_100a531b4 */

void FUN_100a531b4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  puVar6 = *(undefined8 **)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(lVar2 + 0x31);
  uVar5 = *(undefined8 *)(lVar2 + 0x29);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar3 = &DAT_100f2b628;
  _swift_allocObject(&DAT_100f2b628,0x70,7);
  *(undefined **)(unaff_x22 + 0xb8) = puVar3;
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  uVar10 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar10;
  *(undefined8 *)(puVar3 + 0x18) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  uVar9 = *puVar6;
  uVar8 = puVar6[3];
  uVar7 = puVar6[2];
  uVar5 = puVar6[4];
  *(undefined8 *)(puVar3 + 0x48) = puVar6[1];
  *(undefined8 *)(puVar3 + 0x40) = uVar9;
  *(undefined8 *)(puVar3 + 0x58) = uVar8;
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x60) = uVar5;
  *(undefined8 *)(puVar3 + 0x68) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  FUN_1006100e8(puVar6,unaff_x22 + 0x70);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100a532a0;
  FUN_100912dec(plVar4,unaff_x22 + 0x98,FUN_100a54298,puVar3,
                PTR___type_metadata_for_Swift_Int64_100eadc00);
  return;
}



/* Address: 0x100a532a0 | FUN_100a532a0 */

void FUN_100a532a0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb8);
  *(long *)(lVar3 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xc0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a5330c;
  }
  else {
    pcVar2 = FUN_100a5331c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a5330c | FUN_100a5330c */

void FUN_100a5330c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a53318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x100a5331c | FUN_100a5331c */

void FUN_100a5331c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a53324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a53328 | FUN_100a53328 */

void FUN_100a53328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  _swift_task_switch(FUN_100a53344,0,0);
  return;
}



/* Address: 0x100a53344 | FUN_100a53344 */

void FUN_100a53344(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x22;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(lVar3 + 0x31);
  uVar7 = *(undefined8 *)(lVar3 + 0x29);
  uVar11 = *(undefined8 *)(lVar3 + 0x10);
  uVar10 = *(undefined8 *)(lVar3 + 0x28);
  uVar9 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar7;
  puVar5 = &DAT_100f2b600;
  _swift_allocObject(&DAT_100f2b600,0x58,7);
  *(undefined **)(unaff_x22 + 0x98) = puVar5;
  uVar10 = *(undefined8 *)(lVar3 + 0x18);
  uVar9 = *(undefined8 *)(lVar3 + 0x10);
  uVar8 = *(undefined8 *)(lVar3 + 0x28);
  uVar7 = *(undefined8 *)(lVar3 + 0x20);
  uVar11 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar5 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar5 + 0x29) = uVar11;
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x20) = uVar7;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  *(undefined8 *)(puVar5 + 0x48) = uVar4;
  *(undefined8 *)(puVar5 + 0x50) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar6 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a53428;
  FUN_100912dec(plVar6,unaff_x22 + 0x70,FUN_100a541d4,puVar5,
                PTR___type_metadata_for_Swift_Int64_100eadc00);
  return;
}



/* Address: 0x100a53428 | FUN_100a53428 */

void FUN_100a53428(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a53494;
  }
  else {
    pcVar2 = FUN_1006e19e8;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a53494 | FUN_100a53494 */

void FUN_100a53494(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a534a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100a534a4 | FUN_100a534a4 */

void FUN_100a534a4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = *param_1;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a53594);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100ab0038(&local_98);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,param_1,0,0);
      param_1[5] = lStack_70;
      param_1[4] = local_78;
      param_1[7] = lStack_60;
      param_1[6] = local_68;
      param_1[8] = local_58;
      param_1[1] = lStack_90;
      *param_1 = local_98;
      param_1[3] = lStack_80;
      param_1[2] = local_88;
      _swift_willThrow();
    }
    else {
      FUN_100a53694(uVar1,param_2,param_3,param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a53598);
  (*pcVar3)();
}



/* Address: 0x100a53598 | FUN_100a53598 */

void FUN_100a53598(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = *param_1;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a53690);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100ab0038(&local_98);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,param_1,0,0);
      param_1[5] = lStack_70;
      param_1[4] = local_78;
      param_1[7] = lStack_60;
      param_1[6] = local_68;
      param_1[8] = local_58;
      param_1[1] = lStack_90;
      *param_1 = local_98;
      param_1[3] = lStack_80;
      param_1[2] = local_88;
      _swift_willThrow();
    }
    else {
      FUN_100a53a9c(uVar1,param_2,param_3,param_4,param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a53694);
  (*pcVar3)();
}



/* Address: 0x100a53694 | FUN_100a53694 */

undefined8 ******
FUN_100a53694(undefined8 param_1,undefined8 *param_2,undefined8 ******param_3,long param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 ******ppppppuVar3;
  undefined7 extraout_var;
  int *piVar5;
  undefined8 ******ppppppuVar6;
  undefined *puVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined1 uVar16;
  int iVar17;
  undefined1 auStack_220 [72];
  int local_1d8 [2];
  undefined8 *****local_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****local_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined8 ****local_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 ****local_1a0;
  undefined8 ****ppppuStack_198;
  undefined8 *****local_190;
  undefined8 *****pppppuStack_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****local_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****local_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****local_158;
  undefined8 ****ppppuStack_150;
  undefined1 local_148 [8];
  undefined8 *****local_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****local_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****local_120;
  undefined8 ****ppppuStack_118;
  undefined8 ****local_110;
  undefined8 ****ppppuStack_108;
  undefined1 local_100 [8];
  undefined8 *****local_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****local_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****local_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****local_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int *piVar4;
  
  pppppuStack_188 = (undefined8 *****)param_2[1];
  local_190 = (undefined8 *****)*param_2;
  local_178 = (undefined8 ****)param_2[3];
  ppppuStack_180 = (undefined8 ****)param_2[2];
  ppppuStack_170 = (undefined8 ****)param_2[4];
  uVar2 = param_1;
  FUN_100a50010();
  ppppppuVar6 = &local_190;
  ppppppuVar3 = param_3;
  FUN_1005ac040(param_3,ppppppuVar6,param_1,&DAT_100eeb2d0,uVar2);
  if (((uint)ppppppuVar6 & 0xff) == 1) {
    local_1d8[0] = (int)ppppppuVar3;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    piVar4 = (int *)CONCAT71(extraout_var,bVar1);
    piVar5 = piVar4;
    if ((bVar1 & 1) != 0) {
      FUN_100a54208();
      piVar5 = local_1d8;
      _swift_willThrowTypedImpl(piVar5,&DAT_100ee42f8,piVar4);
    }
    FUN_100a54208();
    ppppppuVar6 = (undefined8 ******)&DAT_100ee42f8;
    piVar4 = piVar5;
    _swift_allocError(&DAT_100ee42f8,piVar5,0,0);
    *piVar4 = (int)ppppppuVar3;
    local_190 = ppppppuVar6;
    _swift_errorRetain();
    puVar7 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    piVar4 = local_1d8;
    _swift_dynamicCast(piVar4,&local_190,puVar7,&DAT_100ee42f8,6);
    if (((int)piVar4 == 0) || (local_1d8[0] != 0x1d)) {
      local_90 = 0xd000000000000023;
      uStack_88 = 0x8000000100db85c0;
      local_80 = 0xd000000000000025;
      uStack_78 = 0x8000000100db85f0;
      local_70 = 0x473;
      FUN_100a82d5c(local_100,1,ppppppuVar6,*(undefined8 *)(param_4 + 0x10),&local_90);
      _swift_errorRelease();
      pppppuVar9 = (undefined8 *****)local_d8;
      pppppuVar10 = (undefined8 *****)ppppuStack_d0;
      pppppuVar11 = (undefined8 *****)local_c8;
      pppppuVar12 = (undefined8 *****)ppppuStack_c0;
      pppppuVar13 = (undefined8 *****)ppppuStack_e0;
      pppppuVar14 = (undefined8 *****)local_e8;
      ppppppuVar3 = (undefined8 ******)local_f8;
      pppppuVar15 = (undefined8 *****)ppppuStack_f0;
      uVar16 = local_100[0];
    }
    else if (param_3 == (undefined8 ******)0x0) {
      pppppuStack_188 = (undefined8 *****)param_2[1];
      local_190 = (undefined8 *****)*param_2;
      local_178 = (undefined8 ****)param_2[3];
      ppppuStack_180 = (undefined8 ****)param_2[2];
      ppppuStack_170 = (undefined8 ****)param_2[4];
      ppppppuVar3 = &local_190;
      FUN_1005abf00(ppppppuVar3,param_1,&DAT_100eeb2d0,uVar2);
      if (((uint)param_1 & 0xff) != 1) {
        _swift_errorRelease(ppppppuVar6);
        return ppppppuVar3;
      }
      iVar17 = (int)ppppppuVar3;
      local_1d8[0] = iVar17;
      if ((bVar1 & 1) != 0) {
        _swift_willThrowTypedImpl(local_1d8,&DAT_100ee42f8,piVar5);
      }
      puVar7 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,piVar5,0,0);
      *piVar5 = iVar17;
      local_b8 = 0xd000000000000023;
      uStack_b0 = 0x8000000100db85c0;
      local_a8 = 0xd000000000000025;
      uStack_a0 = 0x8000000100db85f0;
      local_98 = 0x46a;
      FUN_100a82d5c(local_148,0,puVar7,*(undefined8 *)(param_4 + 0x10),&local_b8);
      _swift_errorRelease(puVar7);
      _swift_errorRelease();
      pppppuVar9 = (undefined8 *****)local_120;
      pppppuVar10 = (undefined8 *****)ppppuStack_118;
      pppppuVar11 = (undefined8 *****)local_110;
      pppppuVar12 = (undefined8 *****)ppppuStack_108;
      pppppuVar13 = (undefined8 *****)ppppuStack_128;
      pppppuVar14 = (undefined8 *****)local_130;
      ppppppuVar3 = (undefined8 ******)local_140;
      pppppuVar15 = (undefined8 *****)ppppuStack_138;
      uVar16 = local_148[0];
    }
    else {
      local_1d8[0] = 9;
      local_1d0 = (undefined8 ******)0xd000000000000013;
      ppppuStack_1c8 = (undefined8 *****)0x8000000100db8620;
      ppppuStack_1b8 = (undefined8 *****)0xd000000000000023;
      local_1c0 = (undefined8 *****)0x0;
      local_1b0 = (undefined8 *****)0x8000000100db85c0;
      ppppuStack_1a8 = (undefined8 *****)0xd000000000000025;
      local_1a0 = (undefined8 *****)0x8000000100db85f0;
      ppppuStack_198 = (undefined8 *****)0x45f;
      local_190 = (undefined8 *****)CONCAT71(local_190._1_7_,9);
      pppppuStack_188 = (undefined8 *****)0xd000000000000013;
      ppppuStack_180 = (undefined8 ****)0x8000000100db8620;
      ppppuStack_170 = (undefined8 ****)0xd000000000000023;
      local_178 = (undefined8 ****)0x0;
      local_168 = (undefined8 ****)0x8000000100db85c0;
      ppppuStack_160 = (undefined8 ****)0xd000000000000025;
      local_158 = (undefined8 ****)0x8000000100db85f0;
      ppppuStack_150 = (undefined8 ****)0x45f;
      FUN_100a50050(local_1d8,auStack_220);
      FUN_100a5008c(&local_190);
      _swift_errorRelease();
      pppppuVar9 = (undefined8 *****)local_1b0;
      pppppuVar10 = (undefined8 *****)ppppuStack_1a8;
      pppppuVar11 = (undefined8 *****)local_1a0;
      pppppuVar12 = (undefined8 *****)ppppuStack_198;
      pppppuVar13 = (undefined8 *****)ppppuStack_1b8;
      pppppuVar14 = (undefined8 *****)local_1c0;
      ppppppuVar3 = (undefined8 ******)local_1d0;
      pppppuVar15 = (undefined8 *****)ppppuStack_1c8;
      uVar16 = (undefined1)local_1d8[0];
    }
    local_190 = (undefined8 *****)CONCAT71(local_190._1_7_,uVar16);
    ppppppuVar8 = ppppppuVar6;
    pppppuStack_188 = ppppppuVar3;
    ppppuStack_180 = pppppuVar15;
    local_178 = pppppuVar14;
    ppppuStack_170 = pppppuVar13;
    local_168 = pppppuVar9;
    ppppuStack_160 = pppppuVar10;
    local_158 = pppppuVar11;
    ppppuStack_150 = pppppuVar12;
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      ppppppuVar8 = &local_190;
      _swift_willThrowTypedImpl(ppppppuVar8,&DAT_100f2de38,ppppppuVar6);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,ppppppuVar8,0,0);
    *(undefined1 *)ppppppuVar8 = uVar16;
    ppppppuVar8[1] = ppppppuVar3;
    ppppppuVar8[2] = pppppuVar15;
    ppppppuVar8[3] = pppppuVar14;
    ppppppuVar8[4] = pppppuVar13;
    ppppppuVar8[5] = pppppuVar9;
    ppppppuVar8[6] = pppppuVar10;
    ppppppuVar8[7] = pppppuVar11;
    ppppppuVar8[8] = pppppuVar12;
  }
  return ppppppuVar3;
}



/* Address: 0x100a53a9c | FUN_100a53a9c */

undefined8 ******
FUN_100a53a9c(undefined8 param_1,undefined8 ******param_2,undefined8 param_3,
             undefined8 ******param_4,long param_5)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 ******ppppppuVar3;
  undefined7 extraout_var;
  int *piVar5;
  undefined8 ******ppppppuVar6;
  undefined *puVar7;
  undefined8 ******ppppppuVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined1 uVar16;
  int iVar17;
  undefined1 auStack_220 [72];
  int local_1d8 [2];
  undefined8 *****local_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 ****local_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined8 ****local_1b0;
  undefined8 ****ppppuStack_1a8;
  undefined8 ****local_1a0;
  undefined8 ****ppppuStack_198;
  undefined8 *****local_190;
  undefined8 *****local_188;
  undefined8 ****ppppuStack_180;
  undefined8 ****local_178;
  undefined8 ****ppppuStack_170;
  undefined8 ****local_168;
  undefined8 ****ppppuStack_160;
  undefined8 ****local_158;
  undefined8 ****ppppuStack_150;
  undefined1 local_148 [8];
  undefined8 *****local_140;
  undefined8 ****ppppuStack_138;
  undefined8 ****local_130;
  undefined8 ****ppppuStack_128;
  undefined8 ****local_120;
  undefined8 ****ppppuStack_118;
  undefined8 ****local_110;
  undefined8 ****ppppuStack_108;
  undefined1 local_100 [8];
  undefined8 *****local_f8;
  undefined8 ****ppppuStack_f0;
  undefined8 ****local_e8;
  undefined8 ****ppppuStack_e0;
  undefined8 ****local_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****local_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  int *piVar4;
  
  uVar2 = param_1;
  local_190 = param_2;
  local_188 = (undefined8 *****)param_3;
  FUN_100a52488();
  ppppppuVar6 = &local_190;
  ppppppuVar3 = param_4;
  FUN_1005ac040(param_4,ppppppuVar6,param_1,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,
                uVar2);
  if (((uint)ppppppuVar6 & 0xff) == 1) {
    local_1d8[0] = (int)ppppppuVar3;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    piVar4 = (int *)CONCAT71(extraout_var,bVar1);
    piVar5 = piVar4;
    if ((bVar1 & 1) != 0) {
      FUN_100a54208();
      piVar5 = local_1d8;
      _swift_willThrowTypedImpl(piVar5,&DAT_100ee42f8,piVar4);
    }
    FUN_100a54208();
    ppppppuVar6 = (undefined8 ******)&DAT_100ee42f8;
    piVar4 = piVar5;
    _swift_allocError(&DAT_100ee42f8,piVar5,0,0);
    *piVar4 = (int)ppppppuVar3;
    local_190 = ppppppuVar6;
    _swift_errorRetain();
    puVar7 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    piVar4 = local_1d8;
    _swift_dynamicCast(piVar4,&local_190,puVar7,&DAT_100ee42f8,6);
    if (((int)piVar4 == 0) || (local_1d8[0] != 0x1d)) {
      local_90 = 0xd000000000000023;
      uStack_88 = 0x8000000100db85c0;
      local_80 = 0xd000000000000025;
      uStack_78 = 0x8000000100db85f0;
      local_70 = 0x473;
      FUN_100a82d5c(local_100,1,ppppppuVar6,*(undefined8 *)(param_5 + 0x10),&local_90);
      _swift_errorRelease();
      pppppuVar9 = (undefined8 *****)local_d8;
      pppppuVar10 = (undefined8 *****)ppppuStack_d0;
      pppppuVar11 = (undefined8 *****)local_c8;
      pppppuVar12 = (undefined8 *****)ppppuStack_c0;
      pppppuVar13 = (undefined8 *****)ppppuStack_e0;
      pppppuVar14 = (undefined8 *****)local_e8;
      ppppppuVar3 = (undefined8 ******)local_f8;
      pppppuVar15 = (undefined8 *****)ppppuStack_f0;
      uVar16 = local_100[0];
    }
    else if (param_4 == (undefined8 ******)0x0) {
      ppppppuVar3 = &local_190;
      local_190 = param_2;
      local_188 = (undefined8 *****)param_3;
      FUN_1005abf00(ppppppuVar3,param_1,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,
                    uVar2);
      if (((uint)param_1 & 0xff) != 1) {
        _swift_errorRelease(ppppppuVar6);
        return ppppppuVar3;
      }
      iVar17 = (int)ppppppuVar3;
      local_1d8[0] = iVar17;
      if ((bVar1 & 1) != 0) {
        _swift_willThrowTypedImpl(local_1d8,&DAT_100ee42f8,piVar5);
      }
      puVar7 = &DAT_100ee42f8;
      _swift_allocError(&DAT_100ee42f8,piVar5,0,0);
      *piVar5 = iVar17;
      local_b8 = 0xd000000000000023;
      uStack_b0 = 0x8000000100db85c0;
      local_a8 = 0xd000000000000025;
      uStack_a0 = 0x8000000100db85f0;
      local_98 = 0x46a;
      FUN_100a82d5c(local_148,0,puVar7,*(undefined8 *)(param_5 + 0x10),&local_b8);
      _swift_errorRelease(puVar7);
      _swift_errorRelease();
      pppppuVar9 = (undefined8 *****)local_120;
      pppppuVar10 = (undefined8 *****)ppppuStack_118;
      pppppuVar11 = (undefined8 *****)local_110;
      pppppuVar12 = (undefined8 *****)ppppuStack_108;
      pppppuVar13 = (undefined8 *****)ppppuStack_128;
      pppppuVar14 = (undefined8 *****)local_130;
      ppppppuVar3 = (undefined8 ******)local_140;
      pppppuVar15 = (undefined8 *****)ppppuStack_138;
      uVar16 = local_148[0];
    }
    else {
      local_1d8[0] = 9;
      local_1d0 = (undefined8 ******)0xd000000000000013;
      ppppuStack_1c8 = (undefined8 *****)0x8000000100db8620;
      ppppuStack_1b8 = (undefined8 *****)0xd000000000000023;
      local_1c0 = (undefined8 *****)0x0;
      local_1b0 = (undefined8 *****)0x8000000100db85c0;
      ppppuStack_1a8 = (undefined8 *****)0xd000000000000025;
      local_1a0 = (undefined8 *****)0x8000000100db85f0;
      ppppuStack_198 = (undefined8 *****)0x45f;
      local_190 = (undefined8 *****)CONCAT71(local_190._1_7_,9);
      local_188 = (undefined8 *****)0xd000000000000013;
      ppppuStack_180 = (undefined8 ****)0x8000000100db8620;
      ppppuStack_170 = (undefined8 ****)0xd000000000000023;
      local_178 = (undefined8 ****)0x0;
      local_168 = (undefined8 ****)0x8000000100db85c0;
      ppppuStack_160 = (undefined8 ****)0xd000000000000025;
      local_158 = (undefined8 ****)0x8000000100db85f0;
      ppppuStack_150 = (undefined8 ****)0x45f;
      FUN_100a50050(local_1d8,auStack_220);
      FUN_100a5008c(&local_190);
      _swift_errorRelease();
      pppppuVar9 = (undefined8 *****)local_1b0;
      pppppuVar10 = (undefined8 *****)ppppuStack_1a8;
      pppppuVar11 = (undefined8 *****)local_1a0;
      pppppuVar12 = (undefined8 *****)ppppuStack_198;
      pppppuVar13 = (undefined8 *****)ppppuStack_1b8;
      pppppuVar14 = (undefined8 *****)local_1c0;
      ppppppuVar3 = (undefined8 ******)local_1d0;
      pppppuVar15 = (undefined8 *****)ppppuStack_1c8;
      uVar16 = (undefined1)local_1d8[0];
    }
    local_190 = (undefined8 *****)CONCAT71(local_190._1_7_,uVar16);
    ppppppuVar8 = ppppppuVar6;
    local_188 = ppppppuVar3;
    ppppuStack_180 = pppppuVar15;
    local_178 = pppppuVar14;
    ppppuStack_170 = pppppuVar13;
    local_168 = pppppuVar9;
    ppppuStack_160 = pppppuVar10;
    local_158 = pppppuVar11;
    ppppuStack_150 = pppppuVar12;
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      ppppppuVar8 = &local_190;
      _swift_willThrowTypedImpl(ppppppuVar8,&DAT_100f2de38,ppppppuVar6);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,ppppppuVar8,0,0);
    *(undefined1 *)ppppppuVar8 = uVar16;
    ppppppuVar8[1] = ppppppuVar3;
    ppppppuVar8[2] = pppppuVar15;
    ppppppuVar8[3] = pppppuVar14;
    ppppppuVar8[4] = pppppuVar13;
    ppppppuVar8[5] = pppppuVar9;
    ppppppuVar8[6] = pppppuVar10;
    ppppppuVar8[7] = pppppuVar11;
    ppppppuVar8[8] = pppppuVar12;
  }
  return ppppppuVar3;
}



/* Address: 0x100a53e94 | FUN_100a53e94 */

void FUN_100a53e94(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar4 = *param_2;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  plVar3 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a53f20;
  FUN_100a53328(uVar1,uVar2,param_4,uVar4);
  return;
}



/* Address: 0x100a53f20 | FUN_100a53f20 */

void FUN_100a53f20(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a53f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  _swift_task_switch(FUN_100a53f9c,0,0);
  return;
}



/* Address: 0x100a53f9c | FUN_100a53f9c */

void FUN_100a53f9c(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000100a53fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a53fb4 | FUN_100a53fb4 */

void FUN_100a53fb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100a53e94(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100a5403c | FUN_100a5403c */

void FUN_100a5403c(undefined8 param_1,undefined8 param_2)

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
  plVar7 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a52734(plVar7,param_1,param_2,uVar6,uVar8,uVar1,uVar4,uVar2,uVar5,uVar3);
  return;
}



/* Address: 0x100a540e8 | FUN_100a540e8 */

void FUN_100a540e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_100a52d2c(plVar7,param_1,param_2,uVar3,uVar6,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x100a54184 | FUN_100a54184 */

void FUN_100a54184(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a541d4 | FUN_100a541d4 */

void FUN_100a541d4(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = unaff_x20 + 0x10;
  FUN_100a53598(lVar1,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  if (unaff_x21 == 0) {
    *param_1 = lVar1;
  }
  return;
}



/* Address: 0x100a54208 | FUN_100a54208 */

void FUN_100a54208(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61428;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61428,&DAT_100ee42f8);
  DAT_100ff6ac8 = pTVar1;
  return;
}



/* Address: 0x100a54248 | FUN_100a54248 */

void FUN_100a54248(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a54298 | FUN_100a54298 */

void FUN_100a54298(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
  local_50 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x50);
  local_30 = *(undefined8 *)(unaff_x20 + 0x60);
  lVar1 = unaff_x20 + 0x10;
  FUN_100a534a4(lVar1,&local_50,*(undefined8 *)(unaff_x20 + 0x68));
  if (unaff_x21 == 0) {
    *param_1 = lVar1;
  }
  return;
}



/* Address: 0x100a542e0 | thunk_FUN_1006e19e8 */

void thunk_FUN_1006e19e8(void)

{
  FUN_1006e19e8();
  return;
}



/* Address: 0x100a542e4 | thunk_FUN_100a52594 */

void thunk_FUN_100a52594(void)

{
  FUN_100a52594();
  return;
}



/* Address: 0x100a542e8 | thunk_FUN_100a51f04 */

void thunk_FUN_100a51f04(void)

{
  FUN_100a51f04();
  return;
}



/* Address: 0x100a542ec | thunk_FUN_100a53f9c */

void thunk_FUN_100a53f9c(void)

{
  FUN_100a53f9c();
  return;
}



/* Address: 0x100a542f0 | thunk_FUN_100a542f4 */

void thunk_FUN_100a542f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100ff6ad0;
  FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
  uVar2 = 0;
  FUN_100a54a6c(0);
  FUN_100a87eb0(param_1,puVar1,uVar2,param_2,&PTR_PTR_100f2b8c8,param_3);
  return;
}



/* Address: 0x100a542f4 | FUN_100a542f4 */

void FUN_100a542f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100ff6ad0;
  FUN_1000f7830(&DAT_100ff6ad0,&DAT_100c90ca0);
  uVar2 = 0;
  FUN_100a54a6c(0);
  FUN_100a87eb0(param_1,puVar1,uVar2,param_2,&PTR_PTR_100f2b8c8,param_3);
  return;
}



/* Address: 0x100a5435c | FUN_100a5435c */

void FUN_100a5435c(undefined8 *param_1,code *param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  
  if (param_4 == '\x01') {
    (*param_2)(param_1);
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x10);
    puVar3 = &DAT_100ff6ad8;
    FUN_1000f7830(&DAT_100ff6ad8,&DAT_100c90ca8);
    _swift_allocObject();
    *(long *)(puVar3 + 0x10) = lVar5;
    _swift_retain(lVar5);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x58));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a54420);
      (*pcVar1)();
    }
    FUN_100a1c99c();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x58));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a54424);
      (*pcVar1)();
    }
    uVar4 = 0;
    *param_1 = puVar3;
  }
  *(undefined1 *)(param_1 + 5) = uVar4;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20;
  param_1[6] = PTR___swiftEmptyArrayStorage_100eae0d8;
  param_1[7] = puVar3;
  param_1[9] = 1;
  param_1[8] = 0;
  return;
}



/* Address: 0x100a54424 | FUN_100a54424 */

void FUN_100a54424(undefined8 *param_1,code *param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  
  if (param_4 == '\x01') {
    (*param_2)(param_1);
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x10);
    puVar3 = &DAT_100ff6ad8;
    FUN_1000f7830(&DAT_100ff6ad8,&DAT_100c90ca8);
    _swift_allocObject();
    *(long *)(puVar3 + 0x10) = lVar5;
    _swift_retain(lVar5);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x58));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a544cc);
      (*pcVar1)();
    }
    FUN_100a1c99c();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x58));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a544d0);
      (*pcVar1)();
    }
    uVar4 = 0;
    *param_1 = puVar3;
  }
  *(undefined1 *)(param_1 + 5) = uVar4;
  return;
}



/* Address: 0x100a544d0 | FUN_100a544d0 */

undefined8 FUN_100a544d0(undefined8 param_1)

{
  FUN_1002654f8();
  return param_1;
}



/* Address: 0x100a5450c | FUN_100a5450c */

void FUN_100a5450c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_100a54524,0,0);
  return;
}



/* Address: 0x100a54524 | FUN_100a54524 */

void FUN_100a54524(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar1 = *(ulong *)(lVar4 + 0x40);
  uVar5 = *(ulong *)(lVar4 + 0x48) >> 1;
  if (uVar1 == uVar5) {
    plVar2 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100a545e4;
    FUN_100a66914();
    return;
  }
  if ((long)uVar1 < (long)uVar5) {
    uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar1 * 0x10);
    *(ulong *)(lVar4 + 0x40) = uVar1 + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    _swift_bridgeObjectRetain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a545dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Does not return */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a545e4);
  (*UNRECOVERED_JUMPTABLE)();
}



/* Address: 0x100a545e4 | FUN_100a545e4 */

void FUN_100a545e4(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a54634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  _swift_task_switch(FUN_100a54660,0,0);
  return;
}



/* Address: 0x100a54660 | FUN_100a54660 */

void FUN_100a54660(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(undefined **)(unaff_x22 + 0x20) != (undefined *)0x0) {
    puVar1 = *(undefined **)(unaff_x22 + 0x20);
  }
  lVar5 = *(long *)(puVar1 + 0x10);
  uVar3 = lVar5 << 1 | 1;
  _swift_unknownObjectRelease(*(undefined8 *)(lVar4 + 0x30));
  *(undefined **)(lVar4 + 0x30) = puVar1;
  *(undefined **)(lVar4 + 0x38) = puVar1 + 0x20;
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(ulong *)(lVar4 + 0x48) = uVar3;
  if (lVar5 != 0) {
    lVar4 = *(long *)(unaff_x22 + 0x10);
    uVar2 = **(undefined8 **)(lVar4 + 0x38);
    *(undefined8 *)(lVar4 + 0x40) = 1;
    *(ulong *)(lVar4 + 0x48) = uVar3;
    _swift_bridgeObjectRetain(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000100a54708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


