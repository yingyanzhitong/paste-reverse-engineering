/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001f63e0 | FUN_1001f63e0 */

void FUN_1001f63e0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001001f63fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x28))
            (unaff_x20 + *(int *)(param_2 + 0x24),param_1);
  return;
}



/* Address: 0x1001f6400 | FUN_1001f6400 */

undefined1  [16] FUN_1001f6400(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x24);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001f6414 | FUN_1001f6414 */

undefined8 FUN_1001f6414(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x28));
}



/* Address: 0x1001f6420 | FUN_1001f6420 */

void FUN_1001f6420(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28)) = param_1;
  return;
}



/* Address: 0x1001f642c | FUN_1001f642c */

undefined1  [16] FUN_1001f642c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x28);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001f6440 | FUN_1001f6440 */

undefined8 FUN_1001f6440(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x2c));
}



/* Address: 0x1001f644c | FUN_1001f644c */

void FUN_1001f644c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x2c)) = param_1;
  return;
}



/* Address: 0x1001f6458 | FUN_1001f6458 */

undefined1  [16] FUN_1001f6458(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x2c);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001f646c | FUN_1001f646c */

undefined1  [16] FUN_1001f646c(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x30));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1001f64a0 | FUN_1001f64a0 */

void FUN_1001f64a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x30));
  _swift_release(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1001f64dc | FUN_1001f64dc */

undefined1  [16] FUN_1001f64dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x30);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001f64f0 | FUN_1001f64f0 */

undefined1  [16] FUN_1001f64f0(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x34));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1001f6524 | FUN_1001f6524 */

void FUN_1001f6524(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x34));
  _swift_release(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1001f6560 | FUN_1001f6560 */

undefined1  [16] FUN_1001f6560(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x34);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001f6574 | FUN_1001f6574 */

undefined1  [16] FUN_1001f6574(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x38));
  auVar2 = *pauVar1;
  _swift_retain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1001f65a8 | FUN_1001f65a8 */

void FUN_1001f65a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_3 + 0x38));
  _swift_release(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1001f65e4 | FUN_1001f65e4 */

undefined1  [16] FUN_1001f65e4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x38);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1001f65f8 | FUN_1001f65f8 */

void FUN_1001f65f8(long param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  
  lVar5 = *(long *)(param_10 + -8);
  pcVar4 = *(code **)(lVar5 + 0x10);
  (*pcVar4)(param_1,param_3,param_10);
  lVar2 = 0;
  FUN_1001f6890(0,param_10,param_11);
  (*pcVar4)(param_1 + *(int *)(lVar2 + 0x24),param_4,param_10);
  *(double *)(param_1 + *(int *)(lVar2 + 0x28)) = param_2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x38));
  *puVar1 = param_6;
  puVar1[1] = param_7;
  if (param_8 == 0) {
    puVar6 = (undefined *)0x0;
    pcVar4 = FUN_1001f67e4;
  }
  else {
    puVar6 = &DAT_100ebfd68;
    _swift_allocObject(&DAT_100ebfd68,0x20,7);
    *(long *)(puVar6 + 0x10) = param_8;
    *(undefined8 *)(puVar6 + 0x18) = param_9;
    pcVar4 = FUN_1001f690c;
  }
  puVar3 = &DAT_100ebfd18;
  _swift_allocObject(&DAT_100ebfd18,0x20,7);
  *(code **)(puVar3 + 0x10) = pcVar4;
  *(undefined **)(puVar3 + 0x18) = puVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  *puVar1 = FUN_1001f68c0;
  puVar1[1] = puVar3;
  dVar10 = param_2 * 0.005;
  if (param_2 * 0.005 <= 0.0001) {
    dVar10 = 0.0001;
  }
  puVar6 = &DAT_100ebfd40;
  _swift_allocObject(&DAT_100ebfd40,0x48,7);
  uVar7 = *param_5;
  uVar9 = param_5[3];
  uVar8 = param_5[2];
  *(undefined8 *)(puVar6 + 0x18) = param_5[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  uVar7 = param_5[4];
  *(undefined8 *)(puVar6 + 0x38) = param_5[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar7;
  *(double *)(puVar6 + 0x40) = dVar10;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x30));
  *puVar1 = FUN_1001f6900;
  puVar1[1] = puVar6;
  _CACurrentMediaTime();
  pcVar4 = *(code **)(lVar5 + 8);
  (*pcVar4)(param_4,param_10);
  (*pcVar4)(param_3,param_10);
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x2c)) = uVar7;
  return;
}



/* Address: 0x1001f67c0 | FUN_1001f67c0 */

void FUN_1001f67c0(undefined1 *param_1,code *param_2)

{
  (*param_2)(*param_1);
  return;
}



/* Address: 0x1001f67e4 | FUN_1001f67e4 */

void FUN_1001f67e4(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/BasicAnimation.swift",0x1c,1,0x1a,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001f6860 | FUN_1001f6860 */

void FUN_1001f6860(undefined1 param_1,code *param_2)

{
  undefined1 local_21;
  
  local_21 = param_1;
  (*param_2)(&local_21);
  return;
}



/* Address: 0x1001f6890 | FUN_1001f6890 */

void FUN_1001f6890(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001f689c | FUN_1001f689c */

void FUN_1001f689c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f68c0 | FUN_1001f68c0 */

void FUN_1001f68c0(undefined1 param_1)

{
  long unaff_x20;
  undefined1 local_21;
  
  local_21 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&local_21);
  return;
}



/* Address: 0x1001f68f0 | FUN_1001f68f0 */

void FUN_1001f68f0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f6900 | FUN_1001f6900 */

void FUN_1001f6900(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1001f8858(param_1,*(undefined8 *)(unaff_x20 + 0x40),unaff_x20 + 0x10);
  return;
}



/* Address: 0x1001f690c | FUN_1001f690c */

void FUN_1001f690c(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Address: 0x1001f6930 | FUN_1001f6930 */

undefined8 FUN_1001f6930(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x18);
}



/* Address: 0x1001f6938 | FUN_1001f6938 */

void FUN_1001f6938(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x1001f6940 | FUN_1001f6940 */

void FUN_1001f6940(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_58;
  long lStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_58 = *(long *)(lVar1 + -8) + 0x40;
    local_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    lStack_50 = local_58;
    puStack_40 = local_48;
    puStack_30 = local_38;
    local_28 = local_38;
    _swift_initStructMetadata(param_1,0,7,&local_58,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1001f69d0 | FUN_1001f69d0 */

long * FUN_1001f69d0(long *param_1,long *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar6 + -8);
  uVar2 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  uVar8 = *(long *)(lVar4 + 0x40) + uVar2;
  lVar7 = *(long *)(lVar4 + 0x40) + 7;
  if (((uint)uVar2 < 8 && (*(uint *)(lVar4 + 0x50) & 0x100000) == 0) &&
      (lVar7 + (uVar8 & (uVar2 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x40 < 0x19) {
    pcVar11 = *(code **)(lVar4 + 0x10);
    (*pcVar11)(param_1,param_2,lVar6);
    uVar10 = uVar8 + (long)param_1 & ~uVar2;
    uVar8 = uVar8 + (long)param_2 & ~uVar2;
    (*pcVar11)(uVar10,uVar8,lVar6);
    puVar3 = (undefined8 *)(lVar7 + uVar10 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)(lVar7 + uVar8 & 0xfffffffffffffff8);
    *puVar3 = *puVar5;
    puVar3[1] = puVar5[1];
    uVar1 = puVar5[3];
    uVar9 = puVar5[2];
    puVar3[3] = puVar5[3];
    puVar3[2] = uVar9;
    uVar9 = puVar5[5];
    uVar12 = puVar5[4];
    puVar3[5] = puVar5[5];
    puVar3[4] = uVar12;
    lVar7 = puVar5[7];
    uVar12 = puVar5[6];
    puVar3[7] = puVar5[7];
    puVar3[6] = uVar12;
    _swift_retain(uVar1);
    _swift_retain(uVar9);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    param_1 = (long *)(lVar7 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
  }
  _swift_retain(lVar7);
  return param_1;
}



/* Address: 0x1001f6b38 | FUN_1001f6b38 */

void FUN_1001f6b38(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(lVar2 + -8);
  pcVar4 = *(code **)(lVar3 + 8);
  (*pcVar4)(param_1,lVar2);
  lVar5 = *(long *)(lVar3 + 0x40);
  uVar1 = lVar5 + param_1 + (ulong)*(byte *)(lVar3 + 0x50) &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  (*pcVar4)(uVar1,lVar2);
  uVar1 = lVar5 + uVar1 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar1 + 0x18));
  _swift_release(*(undefined8 *)(uVar1 + 0x28));
  _swift_release(*(undefined8 *)(uVar1 + 0x38));
  return;
}



/* Address: 0x1001f6bd8 | FUN_1001f6bd8 */

long FUN_1001f6bd8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  pcVar10 = *(code **)(lVar8 + 0x10);
  (*pcVar10)(param_1,param_2,lVar6);
  lVar11 = *(long *)(lVar8 + 0x40);
  uVar2 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar8 = lVar11 + uVar2;
  uVar9 = lVar8 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar8 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (*pcVar10)(uVar9,uVar2,lVar6);
  lVar11 = lVar11 + 7;
  puVar4 = (undefined8 *)(lVar11 + uVar9 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar11 + uVar2 & 0xfffffffffffffff8);
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  uVar1 = puVar3[3];
  uVar5 = puVar3[2];
  puVar4[3] = puVar3[3];
  puVar4[2] = uVar5;
  uVar5 = puVar3[5];
  uVar7 = puVar3[4];
  puVar4[5] = puVar3[5];
  puVar4[4] = uVar7;
  uVar7 = puVar3[7];
  uVar12 = puVar3[6];
  puVar4[7] = puVar3[7];
  puVar4[6] = uVar12;
  _swift_retain(uVar1);
  _swift_retain(uVar5);
  _swift_retain(uVar7);
  return param_1;
}



/* Address: 0x1001f6cc8 | FUN_1001f6cc8 */

long FUN_1001f6cc8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar6 + -8);
  pcVar9 = *(code **)(lVar7 + 0x18);
  (*pcVar9)(param_1,param_2,lVar6);
  lVar10 = *(long *)(lVar7 + 0x40);
  uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
  lVar7 = lVar10 + uVar2;
  uVar8 = lVar7 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar7 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (*pcVar9)(uVar8,uVar2,lVar6);
  lVar10 = lVar10 + 7;
  puVar4 = (undefined8 *)(lVar10 + uVar8 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar10 + uVar2 & 0xfffffffffffffff8);
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  uVar5 = puVar4[3];
  uVar1 = puVar3[3];
  uVar11 = puVar3[2];
  puVar4[3] = puVar3[3];
  puVar4[2] = uVar11;
  _swift_retain(uVar1);
  _swift_release(uVar5);
  uVar5 = puVar4[5];
  uVar1 = puVar3[5];
  uVar11 = puVar3[4];
  puVar4[5] = puVar3[5];
  puVar4[4] = uVar11;
  _swift_retain(uVar1);
  _swift_release(uVar5);
  uVar5 = puVar4[7];
  uVar1 = puVar3[7];
  uVar11 = puVar3[6];
  puVar4[7] = puVar3[7];
  puVar4[6] = uVar11;
  _swift_retain(uVar1);
  _swift_release(uVar5);
  return param_1;
}



/* Address: 0x1001f6de4 | FUN_1001f6de4 */

long FUN_1001f6de4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar5 + 0x20);
  (*pcVar7)(param_1,param_2,lVar4);
  lVar8 = *(long *)(lVar5 + 0x40);
  uVar1 = (ulong)*(byte *)(lVar5 + 0x50);
  lVar5 = lVar8 + uVar1;
  uVar6 = lVar5 + param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = lVar5 + param_2 & (uVar1 ^ 0xffffffffffffffff);
  (*pcVar7)(uVar6,uVar1,lVar4);
  lVar8 = lVar8 + 7;
  puVar3 = (undefined8 *)(lVar8 + uVar6 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar8 + uVar1 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  uVar9 = puVar2[2];
  puVar3[3] = puVar2[3];
  puVar3[2] = uVar9;
  uVar9 = puVar2[4];
  puVar3[5] = puVar2[5];
  puVar3[4] = uVar9;
  uVar9 = puVar2[6];
  puVar3[7] = puVar2[7];
  puVar3[6] = uVar9;
  return param_1;
}



/* Address: 0x1001f6eb4 | FUN_1001f6eb4 */

long FUN_1001f6eb4(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar5 + -8);
  pcVar8 = *(code **)(lVar6 + 0x28);
  (*pcVar8)(param_1,param_2,lVar5);
  lVar9 = *(long *)(lVar6 + 0x40);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  lVar6 = lVar9 + uVar2;
  uVar7 = lVar6 + param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = lVar6 + param_2 & (uVar2 ^ 0xffffffffffffffff);
  (*pcVar8)(uVar7,uVar2,lVar5);
  lVar9 = lVar9 + 7;
  puVar4 = (undefined8 *)(lVar9 + uVar7 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar9 + uVar2 & 0xfffffffffffffff8);
  *puVar4 = *puVar3;
  puVar4[1] = puVar3[1];
  uVar1 = puVar4[3];
  uVar10 = puVar3[2];
  puVar4[3] = puVar3[3];
  puVar4[2] = uVar10;
  _swift_release(uVar1);
  uVar1 = puVar4[5];
  uVar10 = puVar3[4];
  puVar4[5] = puVar3[5];
  puVar4[4] = uVar10;
  _swift_release(uVar1);
  uVar1 = puVar4[7];
  uVar10 = puVar3[6];
  puVar4[7] = puVar3[7];
  puVar4[6] = uVar10;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1001f6fa4 | FUN_1001f6fa4 */

uint * FUN_1001f6fa4(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  
  lVar10 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(uint *)(lVar10 + 0x54);
  uVar4 = uVar7;
  if (uVar7 < 0x80000000) {
    uVar4 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar11 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = *(long *)(lVar10 + 0x40) + uVar11;
  lVar1 = *(long *)(lVar10 + 0x40) + 7;
  if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
    uVar2 = (lVar1 + (uVar9 & (uVar11 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x40;
    uVar3 = uVar2 & 0xfffffff8;
    uVar8 = (uint)uVar3;
    uVar12 = 2;
    uVar6 = uVar12;
    if (uVar3 == 0) {
      uVar6 = (param_2 - uVar4) + 1;
    }
    if (0xffff < uVar6) {
      uVar12 = 4;
    }
    if (uVar6 < 0x100) {
      uVar12 = 1;
    }
    uVar5 = 0;
    if (1 < uVar6) {
      uVar5 = uVar12;
    }
    if (uVar5 < 2) {
      if ((uVar5 != 0) &&
         (uVar12 = (uint)*(byte *)((long)param_1 + uVar2), *(byte *)((long)param_1 + uVar2) != 0))
      goto LAB_1001f7064;
    }
    else if (uVar5 == 2) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar2);
      if (*(ushort *)((long)param_1 + uVar2) != 0) {
LAB_1001f7064:
        uVar12 = uVar12 - 1;
        if (uVar3 != 0) {
          uVar12 = 0;
          uVar8 = *param_1;
        }
        return (uint *)(ulong)(uVar4 + (uVar8 | uVar12) + 1);
      }
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar2);
      if (uVar12 != 0) goto LAB_1001f7064;
    }
  }
  if (0x7ffffffe < uVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001001f70a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar10 + 0x30))();
    return param_1;
  }
  uVar9 = *(ulong *)((lVar1 + (uVar9 + (long)param_1 & ~uVar11) & 0xfffffffffffffff8) + 0x10);
  if (0xfffffffe < uVar9) {
    uVar9 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar9 + 1);
}



/* Address: 0x1001f70e0 | FUN_1001f70e0 */

void FUN_1001f70e0(int *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar9 + 0x54);
  uVar3 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  uVar10 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = *(long *)(lVar9 + 0x40) + uVar10;
  lVar1 = *(long *)(lVar9 + 0x40) + 7;
  sVar2 = (lVar1 + (uVar7 & (uVar10 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x40;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar12 = 0;
    iVar6 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar6 != 0) goto LAB_1001f71ac;
  }
  else {
    uVar11 = 2;
    uVar4 = uVar11;
    if ((int)sVar2 == 0) {
      uVar4 = (param_3 - uVar3) + 1;
    }
    if (0xffff < uVar4) {
      uVar11 = 4;
    }
    if (uVar4 < 0x100) {
      uVar11 = 1;
    }
    uVar12 = 0;
    if (1 < uVar4) {
      uVar12 = uVar11;
    }
    iVar6 = param_2 - uVar3;
    if (uVar3 <= param_2 && iVar6 != 0) {
LAB_1001f71ac:
      if ((int)sVar2 != 0) {
        iVar6 = 1;
        _bzero(param_1,sVar2);
        *param_1 = param_2 + ~uVar3;
      }
      if (uVar12 < 2) {
        if (uVar12 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar2) = (char)iVar6;
        return;
      }
      if (uVar12 == 2) {
        *(short *)((long)param_1 + sVar2) = (short)iVar6;
        return;
      }
      *(int *)((long)param_1 + sVar2) = iVar6;
      return;
    }
  }
  if (uVar12 < 2) {
    if (uVar12 != 0) {
      *(undefined1 *)((long)param_1 + sVar2) = 0;
    }
  }
  else if (uVar12 == 2) {
    *(undefined2 *)((long)param_1 + sVar2) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar2) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001001f7218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x38))();
      return;
    }
    uVar7 = lVar1 + (uVar7 + (long)param_1 & ~uVar10) & 0xfffffffffffffff8;
    puVar8 = (ulong *)(uVar7 + 0x10);
    if ((int)param_2 < 0) {
      *puVar8 = (ulong)(param_2 & 0x7fffffff);
      *(undefined8 *)(uVar7 + 0x18) = 0;
    }
    else {
      *puVar8 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x1001f7290 | FUN_1001f7290 */

void FUN_1001f7290(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fb6f30 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fb6f30 = puVar2;
  return;
}



/* Address: 0x1001f72d4 | thunk_FUN_1001f689c */

void thunk_FUN_1001f689c(void)

{
  FUN_1001f689c();
  return;
}



/* Address: 0x1001f72d8 | FUN_1001f72d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1001f72d8(void)

{
  long lVar1;
  undefined *puVar2;
  void *aBlock;
  long unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(code **)(unaff_x20 + 0x10) = FUN_100004520;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  local_40 = 0;
  _CVDisplayLinkCreateWithActiveCGDisplays(&local_40);
  lVar1 = local_40;
  if (local_40 == 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    *(long *)(unaff_x20 + 0x20) = local_40;
    puVar2 = &DAT_100ebfea8;
    _swift_allocObject(&DAT_100ebfea8,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    local_50 = FUN_1001f7e08;
    local_70 = PTR___NSConcreteStackBlock_100ea82a0;
    local_68 = 0x42000000;
    local_60 = FUN_1001f7688;
    puStack_58 = &DAT_100ebfec0;
    local_48 = puVar2;
    aBlock = __Block_copy(&local_70);
    puVar2 = local_48;
    _swift_retain();
    _swift_release(puVar2);
    _CVDisplayLinkSetOutputHandler(lVar1,aBlock);
    __Block_release(aBlock);
    _CGMainDisplayID();
    _CVDisplayLinkSetCurrentCGDisplay(lVar1,aBlock);
    _swift_release();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1001f7444 | FUN_1001f7444 */

undefined8 FUN_1001f7444(undefined8 param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  long in_x5;
  long extraout_x8;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _CACurrentMediaTime();
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar2.unknown);
  pMVar3 = (MainActor *)&DAT_100ebfea8;
  _swift_allocObject(&DAT_100ebfea8,0x18,7);
  in_x5 = in_x5 + 0x10;
  _swift_weakLoadStrong(in_x5);
  _swift_weakInit(pMVar3 + 0x10,in_x5);
  _swift_release(in_x5);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = pMVar3;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar5);
  pMVar5 = pMVar4;
  FUN_1001f7290();
  puVar1 = &DAT_100ebfef8;
  _swift_allocObject(&DAT_100ebfef8,0x30,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar4;
  *(MainActor **)(puVar1 + 0x18) = pMVar5;
  *(MainActor **)(puVar1 + 0x20) = pMVar3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  _swift_release(pMVar3);
  FUN_10020aba8(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100c34dc0,puVar1);
  _swift_release();
  return 0;
}



/* Address: 0x1001f7590 | FUN_1001f7590 */

void FUN_1001f7590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x28) = pMVar1;
  FUN_1001f7290();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f7600,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1001f7600 | FUN_1001f7600 */

void FUN_1001f7600(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  lVar3 = lVar3 + 0x10;
  _swift_weakLoadStrong();
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    pcVar1 = *(code **)(lVar3 + 0x10);
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    _swift_retain(uVar2);
    _swift_release(lVar3);
    (*pcVar1)(uVar4);
    _swift_release(uVar2);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x10) = lVar3 == 0;
                    /* WARNING: Could not recover jumptable at 0x0001001f7684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001f7688 | FUN_1001f7688 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1001f7688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3,param_4,param_5,param_6);
  _swift_release(uVar2);
  return param_2;
}



/* Address: 0x1001f7714 | FUN_1001f7714 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f7714(long param_1)

{
  int iVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("PasteUI/Clock.swift",0x13,1,0x3a,UVar4.unknown,pMVar2);
  }
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  _CVDisplayLinkIsRunning();
  if (iVar1 != 0) {
    _CVDisplayLinkStop(*(undefined8 *)(param_1 + 0x20));
  }
  _swift_release(pMVar3);
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_deallocClassInstance(param_1,0x28,7);
  return;
}



/* Address: 0x1001f77c8 | FUN_1001f77c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f77c8(void)

{
  byte bVar1;
  __uint8 _Var2;
  int iVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  undefined4 extraout_var;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  TaskPriority TVar8;
  MainActor *pMVar9;
  TaskPriority TVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long unaff_x20;
  undefined1 *puVar15;
  MainActor *pMVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  undefined1 *local_90;
  MainActor *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  MainActor *pMStack_68;
  
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar16 = pMVar5;
  FUN_1001f7290();
  Swift::Actor::get_unownedExecutor();
  _swift_release(pMVar5);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,4,0,0x12,4,0);
  if ((bVar1 & 1) == 0) {
    iVar3 = _pthread_main_np();
    if (iVar3 == 1) {
      pMVar4 = Swift::MainActor::get_shared(pMVar4,(MainActor *)CONCAT44(extraout_var,iVar3));
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/Clock.swift",0x13,1,0x3a,UVar6.unknown,pMVar16);
      }
      iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x20);
      _CVDisplayLinkIsRunning();
      if (iVar3 != 0) {
        _CVDisplayLinkStop(*(undefined8 *)(unaff_x20 + 0x20));
      }
      _swift_release(pMVar4);
      _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
      _swift_deallocClassInstance();
      return;
    }
    pMVar5 = (MainActor *)&DAT_100ebfe30;
    _swift_allocObject(&DAT_100ebfe30,0x18,7);
    *(long *)(pMVar5 + 0x10) = unaff_x20;
    puVar7 = &DAT_100fb6228;
    FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
    lVar18 = *(long *)(*(long *)(puVar7 + -8) + 0x40);
    local_90 = auStack_a0;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar14 = lVar18 + 0xfU & 0xfffffffffffffff0;
    puVar17 = auStack_a0 + -uVar14;
    TVar8 = Swift::TaskPriority::typeMetadataAccessor();
    lVar18 = *(long *)(TVar8.unknown + -8);
    (**(code **)(lVar18 + 0x38))(puVar17,1,1,TVar8.unknown);
    pMVar9 = pMVar5;
    _swift_retain();
    pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar9);
    puVar7 = &DAT_100ebfe58;
    _swift_allocObject(&DAT_100ebfe58,0x30,7);
    *(MainActor **)(puVar7 + 0x10) = pMVar4;
    *(MainActor **)(puVar7 + 0x18) = pMVar16;
    *(code **)(puVar7 + 0x20) = FUN_1001f7714;
    *(MainActor **)(puVar7 + 0x28) = pMVar5;
    local_98 = puVar17;
    local_88 = pMVar5;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    puVar15 = puVar17 + -uVar14;
    FUN_1001f7cb8(puVar17,puVar15);
    TVar10.unknown = puVar15;
    (**(code **)(lVar18 + 0x30))(puVar15,1,TVar8.unknown);
    if ((int)TVar10.unknown == 1) {
      FUN_1001f7d08(puVar15);
      uVar14 = 0x1000;
    }
    else {
      _Var2 = Swift::TaskPriority::get_rawValue(TVar10);
      (**(code **)(lVar18 + 8))(puVar15,TVar8.unknown);
      uVar14 = (ulong)_Var2 | 0x1000;
    }
    if (pMVar4 == (MainActor *)0x0) {
      UVar11.unknown = (undefined *)0x0;
      pMVar16 = (MainActor *)0x0;
    }
    else {
      _swift_getObjectType(pMVar4);
      _swift_unknownObjectRetain(pMVar4);
      UVar11 = Swift::Actor::get_unownedExecutor();
      _swift_unknownObjectRelease(pMVar4);
    }
    puVar12 = &DAT_100ebfe80;
    _swift_allocObject(&DAT_100ebfe80,0x20,7);
    *(undefined **)(puVar12 + 0x10) = &DAT_100c34da0;
    *(undefined **)(puVar12 + 0x18) = puVar7;
    if (pMVar16 == (MainActor *)0x0 && UVar11.unknown == (undefined *)0x0) {
      puVar13 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar13 = &local_80;
      local_70 = UVar11.unknown;
      pMStack_68 = pMVar16;
    }
    _swift_task_create(uVar14,puVar13,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c34db0,
                       puVar12);
    _swift_release();
    FUN_1001f7d08(puVar17);
    _swift_release(local_88);
  }
  else {
    _swift_task_deinitOnExecutor();
  }
  return;
}



/* Address: 0x1001f7b44 | FUN_1001f7b44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001f7b44(void)

{
  return ZEXT816(0x100fb61c0);
}



/* Address: 0x1001f7b64 | FUN_1001f7b64 */

void FUN_1001f7b64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1001f7b78 | FUN_1001f7b78 */

void FUN_1001f7b78(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f7b9c | FUN_1001f7b9c */

void FUN_1001f7b9c(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  FUN_1001f7290();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001f1a6c,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x1001f7c08 | FUN_1001f7c08 */

void FUN_1001f7c08(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f7c34 | FUN_1001f7c34 */

void FUN_1001f7c34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1001f7b9c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1001f7cb8 | FUN_1001f7cb8 */

undefined8 FUN_1001f7cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001f7d08 | FUN_1001f7d08 */

undefined8 FUN_1001f7d08(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1001f7d50 | FUN_1001f7d50 */

void FUN_1001f7d50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f7d74 | FUN_1001f7d74 */

void FUN_1001f7d74(undefined8 param_1)

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
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1001f7de4 | FUN_1001f7de4 */

void FUN_1001f7de4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f7e08 | FUN_1001f7e08 */

void FUN_1001f7e08(void)

{
  FUN_1001f7444();
  return;
}



/* Address: 0x1001f7e10 | FUN_1001f7e10 */

void FUN_1001f7e10(long param_1,long param_2)

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



/* Address: 0x1001f7e24 | FUN_1001f7e24 */

void FUN_1001f7e24(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001f7e2c | FUN_1001f7e2c */

void FUN_1001f7e2c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f7e58 | FUN_1001f7e58 */

void FUN_1001f7e58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1001f7590(plVar3,uVar5,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1001f7ed4 | FUN_1001f7ed4 */

void FUN_1001f7ed4(double *param_1,double param_2,double *param_3)

{
  double *unaff_x20;
  
  *param_1 = param_2 * *param_3 + (1.0 - param_2) * *unaff_x20;
  return;
}


