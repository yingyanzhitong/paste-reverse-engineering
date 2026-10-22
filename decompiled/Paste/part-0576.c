/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100662860 | FUN_100662860 */

void FUN_100662860(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Address: 0x100662878 | FUN_100662878 */

void FUN_100662878(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  
  lVar1 = unaff_x20[1];
  _swift_getObjectType(*unaff_x20);
  (**(code **)(lVar1 + 0x90))();
  return;
}



/* Address: 0x1006628bc | FUN_1006628bc */

undefined1  [16] FUN_1006628bc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    auVar1._0_8_ = *(ulong *)(unaff_x20 + 0x10);
    auVar1._8_8_ = 0;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1006628e0 | FUN_1006628e0 */

void FUN_1006628e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 unaff_x20;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined8 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined *local_b8;
  code *pcStack_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar13 = *(long *)(param_5 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  uVar5 = lVar9 + 0xfU & 0xfffffffffffffff0;
  local_a0 = auStack_f0 + -uVar5;
  lStack_c0 = (long)local_a0 - uVar5;
  lVar11 = lStack_c0 - uVar5;
  local_d0 = *(code **)(lVar13 + 0x10);
  local_e0 = param_1;
  local_c8 = param_3;
  local_a8 = param_2;
  local_98 = param_7;
  (*local_d0)(lVar11,param_3,param_5);
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar5 = uVar14 + 0x30 & (uVar14 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100ef1f30;
  _swift_allocObject(&DAT_100ef1f30,uVar10 + 8,uVar14 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(long *)(puVar1 + 0x18) = param_5;
  *(long *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = local_98;
  local_d8 = *(code **)(lVar13 + 0x20);
  local_e8 = lVar13;
  (*local_d8)(puVar1 + uVar5,lVar11,param_5);
  *(undefined8 *)(puVar1 + uVar10) = unaff_x20;
  pcVar12 = *(code **)(param_6 + 0x30);
  _swift_unknownObjectRetain();
  pcVar6 = FUN_100662cb0;
  lVar11 = local_a8;
  puVar2 = puVar1;
  (*pcVar12)();
  local_b8 = puVar2;
  pcStack_b0 = pcVar6;
  _swift_release(puVar1);
  lVar9 = lStack_c0;
  pcVar6 = local_d0;
  (*local_d0)(lStack_c0,local_c8,param_5);
  (*pcVar6)(local_a0,lVar9,param_5);
  puVar1 = &DAT_100ef1f58;
  _swift_allocObject(&DAT_100ef1f58,uVar10 + 8,uVar14 | 7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(long *)(puVar1 + 0x18) = param_5;
  *(long *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = local_98;
  local_c8 = param_4;
  local_a8 = param_6;
  (*local_d8)(puVar1 + uVar5,lVar9,param_5);
  *(undefined8 *)(puVar1 + uVar10) = unaff_x20;
  puVar2 = &DAT_100ef1f80;
  _swift_allocObject(&DAT_100ef1f80,0x28,7);
  *(long *)(puVar2 + 0x10) = lVar11;
  *(code **)(puVar2 + 0x18) = FUN_100662e1c;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  uVar5 = *(ulong *)(lVar11 + 0x20);
  lVar9 = *(long *)(lVar11 + 0x28);
  _swift_getObjectType();
  pcVar6 = *(code **)(lVar9 + 0x10);
  _swift_retain_n(lVar11,3);
  _swift_unknownObjectRetain_n();
  _swift_retain_n(puVar1,2);
  uVar10 = uVar5;
  (*pcVar6)(uVar5,lVar9);
  if ((uVar10 & 1) == 0) {
    puVar3 = &DAT_100ef1fa8;
    _swift_allocObject(&DAT_100ef1fa8,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar11;
    *(code **)(puVar3 + 0x18) = FUN_100625bd8;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    pcVar6 = *(code **)(lVar9 + 0x18);
    _swift_retain(lVar11);
    _swift_retain(puVar2);
    (*pcVar6)(FUN_1005dfe64,puVar3,uVar5,lVar9);
    _swift_release(puVar3);
    _swift_release_n(puVar1,2);
    _swift_release(lVar11);
    _swift_release(puVar2);
    puVar7 = local_e0;
    lVar9 = local_e8;
    lVar13 = local_a8;
    puVar15 = local_a0;
    goto LAB_100662c50;
  }
  _swift_beginAccess(lVar11 + 0x10,auStack_78,0,0);
  puVar15 = local_a0;
  lVar13 = local_a8;
  uVar8 = *(undefined8 *)(lVar11 + 0x10);
  cVar4 = *(char *)(lVar11 + 0x18);
  if (cVar4 == '\x01') {
    _swift_errorRetain(uVar8);
    puVar15 = local_a0;
    lVar13 = local_a8;
    FUN_100662d08(uVar8,local_a0);
    cVar4 = '\x01';
LAB_100662c08:
    FUN_100308538(uVar8,cVar4);
  }
  else {
    if (cVar4 != -1) goto LAB_100662c08;
    _swift_beginAccess(lVar11 + 0x30,auStack_90,0x21,0);
    FUN_10064967c(FUN_100625bd8,puVar2);
    _swift_endAccess(auStack_90);
  }
  puVar7 = local_e0;
  lVar9 = local_e8;
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release_n(puVar1,2);
  _swift_release(lVar11);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(0);
LAB_100662c50:
  (**(code **)(lVar9 + 8))(puVar15,param_5);
  _swift_release(lVar11);
  _swift_unknownObjectRelease();
  _swift_unknownObjectRetain();
  *puVar7 = unaff_x20;
  puVar7[1] = lVar13;
  puVar7[2] = lVar11;
  puVar7[3] = pcStack_b0;
  puVar7[4] = local_b8;
  *(undefined1 *)(puVar7 + 5) = 0;
  return;
}



/* Address: 0x100662cac | thunk_FUN_100662db8 */

void thunk_FUN_100662db8(void)

{
  FUN_100662db8();
  return;
}



/* Address: 0x100662cb0 | FUN_100662cb0 */

void FUN_100662cb0(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(*(long *)(unaff_x20 + 0x28) + 8))
            (*(undefined8 *)
              (unaff_x20 +
              (*(long *)(lVar1 + 0x40) + (uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff)) + 7 &
              0xfffffffffffffff8)),*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100662d08 | FUN_100662d08 */

void FUN_100662d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  char *pcVar2;
  char local_49;
  undefined8 local_48;
  
  local_48 = param_1;
  _swift_errorRetain();
  puVar1 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  pcVar2 = &local_49;
  _swift_dynamicCast(pcVar2,&local_48,puVar1,&DAT_100eef640,6);
  if (((int)pcVar2 != 0) && (local_49 == '\x01')) {
    (**(code **)(param_7 + 0x10))(param_3,param_4,param_6,param_5,param_7);
  }
  return;
}



/* Address: 0x100662db8 | FUN_100662db8 */

void FUN_100662db8(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x30 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8)))
  ;
  _swift_deallocObject();
  return;
}



/* Address: 0x100662e1c | FUN_100662e1c */

void FUN_100662e1c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  uVar2 = uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff);
  FUN_100662d08(param_1,unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 + (*(long *)(lVar1 + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)),
                *(undefined8 *)(unaff_x20 + 0x10),*(long *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100662e50 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100662e54 | FUN_100662e54 */

void FUN_100662e54(undefined8 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1006628e0(&local_50);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x100662e90 | FUN_100662e90 */

void FUN_100662e90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  ulong uVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  local_a8 = param_1;
  local_a0 = param_7;
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  DVar3 = Dispatch::DispatchTime::now(DVar2);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  (**(code **)(lVar6 + 8))(auStack_b0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  if (0x7ffffffffffffffe < _Var4) {
    _Var4 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(_Var4,param_2)) {
    uVar1 = _Var4 + param_2 & ((long)(_Var4 + param_2) >> 0x3f ^ 0xffffffffffffffffU);
  }
  (**(code **)(param_6 + 0x80))(&local_90,uVar1,param_3,param_5,local_a0,param_4,param_6);
  if (unaff_x21 == 0) {
    local_a8[1] = uStack_88;
    *local_a8 = local_90;
    local_a8[3] = CONCAT71(local_77,uStack_78);
    local_a8[2] = uStack_80;
    *(undefined8 *)((long)local_a8 + 0x21) = uStack_6f;
    *(ulong *)((long)local_a8 + 0x19) = CONCAT17(uStack_70,local_77);
  }
  return;
}



/* Address: 0x100662f8c | FUN_100662f8c */

void FUN_100662f8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _swift_retain(uVar4);
    _swift_retain(uVar2);
    FUN_1006202e0(uVar4,uVar1,uVar2);
    _swift_release(uVar2);
    _swift_release(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100662ff0);
  (*pcVar3)();
}



/* Address: 0x100662ff0 | FUN_100662ff0 */

void FUN_100662ff0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  lVar1 = *(long *)(lVar3 + 0x40);
  FUN_100660698(0,lVar2);
  FUN_10065ffac(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(param_2 + 0x18) + 8))(param_1,param_3,param_4,lVar2);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Address: 0x100663098 | FUN_100663098 */

void FUN_100663098(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  lVar1 = *(long *)(lVar3 + 0x40);
  FUN_100660698(0,lVar2);
  FUN_10065ffac(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(param_2 + 0x18) + 0x10))(param_1,param_3,param_4,lVar2);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Address: 0x100663140 | FUN_100663140 */

void FUN_100663140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100662ff0(param_1,param_4,param_2,param_3);
  return;
}



/* Address: 0x100663154 | FUN_100663154 */

void FUN_100663154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100663098(param_1,param_4,param_2,param_3);
  return;
}



/* Address: 0x100663168 | FUN_100663168 */

void FUN_100663168(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  FUN_100662830(param_1[2],param_1[3],param_1[4],*(undefined1 *)(param_1 + 5));
  return;
}



/* Address: 0x100663198 | FUN_100663198 */

undefined8 * FUN_100663198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  _swift_unknownObjectRetain(uVar5);
  FUN_1006627ac(uVar1,uVar2,uVar4,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 5) = uVar3;
  return param_1;
}



/* Address: 0x100663204 | FUN_100663204 */

undefined8 * FUN_100663204(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = param_2[1];
  uVar7 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar7);
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar8 = param_2[4];
  uVar4 = *(undefined1 *)(param_2 + 5);
  FUN_1006627ac(uVar1,uVar2,uVar8,uVar4);
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar6 = param_1[4];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[4] = uVar8;
  uVar5 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar4;
  FUN_100662830(uVar7,uVar3,uVar6,uVar5);
  return param_1;
}



/* Address: 0x100663290 | FUN_100663290 */

void FUN_100663290(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1006632a4 | FUN_1006632a4 */

undefined8 * FUN_1006632a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _swift_unknownObjectRelease(*param_1);
  uVar6 = param_2[4];
  uVar3 = *(undefined1 *)(param_2 + 5);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  param_1[4] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = uVar3;
  FUN_100662830(uVar1,uVar2,uVar5,uVar4);
  return param_1;
}



/* Address: 0x1006632f8 | FUN_1006632f8 */

int FUN_1006632f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100663340 | FUN_100663340 */

void FUN_100663340(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10066338c | FUN_10066338c */

undefined1  [16] FUN_10066338c(void)

{
  return ZEXT816(0x100ef2040);
}



/* Address: 0x10066339c | FUN_10066339c */

void FUN_10066339c(undefined8 *param_1)

{
  FUN_100662830(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
  return;
}



/* Address: 0x1006633b0 | FUN_1006633b0 */

undefined8 * FUN_1006633b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  FUN_1006627ac(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Address: 0x10066340c | FUN_10066340c */

undefined8 * FUN_10066340c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = param_2[2];
  uVar5 = *(undefined1 *)(param_2 + 3);
  FUN_1006627ac(uVar1,uVar3,uVar8,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = param_1[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar8;
  uVar6 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar5;
  FUN_100662830(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x100663478 | FUN_100663478 */

void FUN_100663478(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10066348c | FUN_10066348c */

undefined8 * FUN_10066348c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_100662830(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Address: 0x1006634d8 | FUN_1006634d8 */

undefined1  [16] FUN_1006634d8(void)

{
  return ZEXT816(0x100ef20d8);
}



/* Address: 0x1006634e8 | FUN_1006634e8 */

void FUN_1006634e8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100660698();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100663554 | FUN_100663554 */

void FUN_100663554(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100663560 | thunk_FUN_100662db8 */

void thunk_FUN_100662db8(void)

{
  FUN_100662db8();
  return;
}



/* Address: 0x100663564 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100663568 | FUN_100663568 */

long * FUN_100663568(undefined8 param_1)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),param_1);
  return unaff_x20;
}



/* Address: 0x1006635b8 | FUN_1006635b8 */

bool FUN_1006635b8(void)

{
  bool bVar1;
  
  bVar1 = Swift::Equatable::___infix();
  return bVar1;
}



/* Address: 0x1006635dc | FUN_1006635dc */

void FUN_1006635dc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  FUN_1006635b8(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  return;
}



/* Address: 0x1006635e8 | FUN_1006635e8 */

void FUN_1006635e8(Hasher param_1)

{
  Swift::Hashable::hash(param_1);
  return;
}



/* Address: 0x1006635f0 | FUN_1006635f0 */

void FUN_1006635f0(void)

{
  Hasher into;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_78;
  Swift::Hashable::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100663644 | FUN_100663644 */

void FUN_100663644(undefined8 param_1,long param_2)

{
  FUN_1006635f0(param_1,*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x10066364c | FUN_10066364c */

void FUN_10066364c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1006635e8(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100663654 | FUN_100663654 */

void FUN_100663654(__int64 param_1,undefined8 param_2,long param_3)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_1006635e8(HVar1.unknown,param_2,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006636a4 | FUN_1006636a4 */

void FUN_1006636a4(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 0x10))(param_1,(long)unaff_x20 + lVar2);
  return;
}



/* Address: 0x100663704 | FUN_100663704 */

void FUN_100663704(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  lVar2 = *(long *)(lVar1 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 0x28))((long)unaff_x20 + lVar2,param_1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x10066376c | FUN_10066376c */

undefined1  [16] FUN_10066376c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar1,param_1,0x21,0);
  auVar2._8_8_ = (long)unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1006637ac | FUN_1006637ac */

void FUN_1006637ac(undefined8 param_1)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),param_1);
  return;
}



/* Address: 0x1006637dc | FUN_1006637dc */

void FUN_1006637dc(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
  return;
}



/* Address: 0x100663808 | FUN_100663808 */

void FUN_100663808(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100663840 | FUN_100663840 */

void FUN_100663840(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6bd40,param_1,&local_18);
  return;
}



/* Address: 0x100663878 | FUN_100663878 */

void FUN_100663878(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1006638e4 | FUN_1006638e4 */

void FUN_1006638e4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006638f0 | FUN_1006638f0 */

void FUN_1006638f0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&local_28,param_1 + 0x58);
  }
  return;
}



/* Address: 0x100663960 | FUN_100663960 */

void FUN_100663960(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10066396c | FUN_10066396c */

void FUN_10066396c(undefined1 param_1)

{
  undefined1 local_40 [8];
  code *local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_38 = FUN_100663f2c;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_40[0] = param_1;
  FUN_10065d6f8(local_40);
  return;
}



/* Address: 0x1006639bc | FUN_1006639bc */

void FUN_1006639bc(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  *(code **)(param_1 + 8) = FUN_100663f2c;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x28] = 0;
  return;
}



/* Address: 0x1006639dc | FUN_1006639dc */

void FUN_1006639dc(undefined1 param_1)

{
  undefined1 local_40 [8];
  code *local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_38 = FUN_100663f2c;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_40[0] = param_1;
  FUN_10065d6f8(local_40);
  return;
}



/* Address: 0x100663a2c | FUN_100663a2c */

undefined1  [16] FUN_100663a2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Address: 0x100663a58 | FUN_100663a58 */

void FUN_100663a58(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Address: 0x100663a60 | FUN_100663a60 */

void FUN_100663a60(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  param_1[0x18] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Address: 0x100663a74 | FUN_100663a74 */

void FUN_100663a74(long *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *unaff_x20;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auStack_a0 [24];
  long local_88;
  uint local_80;
  uint uStack_7c;
  int local_78;
  ushort local_74;
  byte local_72;
  ulong local_70;
  ulong uStack_68;
  
  if ((unaff_x20[0x18] & 1U) != 0) {
    return;
  }
  uVar2 = *(uint *)((long)param_1 + 0xc);
  uVar3 = (ulong)uVar2;
  lVar7 = param_1[2];
  uVar5 = *(ushort *)((long)param_1 + 0x14);
  bVar4 = *(byte *)((long)param_1 + 0x16);
  uVar6 = (uint)CONCAT21(uVar5,bVar4);
  if ((int)lVar7 - uVar6 < uVar2) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100663da8);
    (*pcVar8)();
  }
  uVar18 = (ulong)*(uint *)(param_1 + 1);
  uVar12 = uVar18 + *(long *)(unaff_x20 + 0x20);
  if (!SCARRY8(uVar18,*(long *)(unaff_x20 + 0x20))) {
    pcVar8 = *(code **)(unaff_x20 + 8);
    lVar14 = *param_1;
    do {
      uVar17 = (uint)uVar18;
      uVar13 = (ulong)(uVar2 - uVar17);
      if ((uVar2 < uVar17) || ((long)uVar3 < (long)uVar12)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663d9c);
        (*pcVar8)();
      }
      if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663da0);
        (*pcVar8)();
      }
      local_88 = lVar14;
      local_80 = uVar17;
      uStack_7c = uVar2;
      local_78 = (int)lVar7;
      local_74 = uVar5;
      local_72 = bVar4;
      local_70 = uVar12;
      uStack_68 = uVar3;
      _swift_beginAccess(lVar14 + 0x18,auStack_a0,0,0);
      uVar10 = uStack_68;
      uVar12 = local_70;
      lVar11 = uStack_68 - local_70;
      if (SBORROW8(uStack_68,local_70)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663da4);
        (*pcVar8)();
      }
      lVar15 = *(long *)(lVar14 + 0x18);
      _swift_retain();
      if (uVar10 == uVar12) {
LAB_100663cac:
        FUN_10060fd58(&local_88);
        if ((param_2 & 1) == 0) {
          *(ulong *)(unaff_x20 + 0x20) = uVar13;
          return;
        }
        unaff_x20[0x18] = '\x01';
        if ((*unaff_x20 == '\x01') && (uVar2 == uVar17)) {
          return;
        }
        FUN_10060c6b4();
        if (uVar13 != 0) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663dc4);
        (*pcVar8)();
      }
      lVar16 = 0;
      while( true ) {
        uVar10 = (ulong)*(byte *)(lVar15 + (ulong)uVar5 * 0x100 + (ulong)bVar4 + uVar12 + lVar16);
        (*pcVar8)();
        if ((uVar10 & 1) != 0) break;
        lVar16 = lVar16 + 1;
        if (lVar11 == lVar16) goto LAB_100663cac;
      }
      FUN_10060fd58(&local_88);
      if (SCARRY8(lVar16,uVar12)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663dac);
        (*pcVar8)();
      }
      uVar13 = (lVar16 + uVar12) - uVar18;
      if (SBORROW8(lVar16 + uVar12,uVar18)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663db0);
        (*pcVar8)();
      }
      if ((uVar3 < uVar13) || ((long)(uVar3 - uVar13) < (long)uVar18)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663db4);
        (*pcVar8)();
      }
      if (CARRY4(uVar6,uVar17)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663db8);
        (*pcVar8)();
      }
      if (uVar6 + uVar17 >> 0x18 == 0) {
        lVar11 = lVar14;
        _swift_retain();
        uVar9 = (uint)lVar11;
        uVar12 = 0;
        uVar18 = uVar13;
      }
      else {
        uVar12 = uVar13;
        FUN_1006135c8();
        uVar9 = (uint)uVar18;
        uVar18 = uVar12 >> 0x20;
      }
      uVar1 = uVar17 + (uint)uVar13;
      if (CARRY4(uVar17,(uint)uVar13)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663dbc);
        (*pcVar8)();
      }
      *(uint *)(param_1 + 1) = uVar1;
      unaff_x20[0x20] = '\0';
      unaff_x20[0x21] = '\0';
      unaff_x20[0x22] = '\0';
      unaff_x20[0x23] = '\0';
      unaff_x20[0x24] = '\0';
      unaff_x20[0x25] = '\0';
      unaff_x20[0x26] = '\0';
      unaff_x20[0x27] = '\0';
      if ((*unaff_x20 != '\x01') || ((int)uVar18 != (int)uVar12)) {
        FUN_10066431c();
        if ((uVar9 >> 8 & 0xff) != 1) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663dc8);
        (*pcVar8)();
      }
      _swift_release();
      uVar18 = (ulong)(uVar1 + 1);
      if (0xfffffffe < uVar1) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100663dc0);
        (*pcVar8)();
      }
      *(uint *)(param_1 + 1) = uVar1 + 1;
      uVar12 = uVar18 + *(long *)(unaff_x20 + 0x20);
    } while (!SCARRY8(uVar18,*(long *)(unaff_x20 + 0x20)));
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100663cac);
  (*pcVar8)();
}



/* Address: 0x100663dc8 | FUN_100663dc8 */

ulong FUN_100663dc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long unaff_x21;
  
  FUN_100663a74(param_1,0);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_3 & 0xffffffffffffff;
  }
  if (unaff_x21 == 0) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Address: 0x100663e00 | FUN_100663e00 */

ulong FUN_100663e00(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long unaff_x21;
  
  FUN_100663a74(param_1,1);
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = param_3 & 0xffffffffffffff;
  }
  if (unaff_x21 == 0) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Address: 0x100663e38 | FUN_100663e38 */

void FUN_100663e38(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  
  lVar3 = 0;
  FUN_100663a74();
  if (unaff_x21 == 0) {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = lVar3;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_4;
    }
    *param_1 = param_2;
    param_1[1] = lVar1;
    *(int *)(param_1 + 2) = (int)uVar2;
    *(char *)((long)param_1 + 0x16) = (char)((ulong)uVar2 >> 0x30);
    *(short *)((long)param_1 + 0x14) = (short)((ulong)uVar2 >> 0x20);
  }
  return;
}


