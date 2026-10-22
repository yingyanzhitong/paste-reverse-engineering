/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009df740 | FUN_1009df740 */

Set<undefined> FUN_1009df740(long param_1)

{
  long minimumCapacity;
  undefined1 *puVar1;
  undefined1 uStack_39;
  undefined *local_38;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  FUN_1009e13ec();
  local_38 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x20);
    do {
      FUN_1009dee78(&uStack_39,*puVar1);
      minimumCapacity = minimumCapacity + -1;
      puVar1 = puVar1 + 1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_38;
}



/* Address: 0x1009df7b0 | FUN_1009df7b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009df7b0(void)

{
  return ZEXT816(0x100ff37e8);
}



/* Address: 0x1009df7d0 | FUN_1009df7d0 */

void FUN_1009df7d0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3768,&TargetStructDescriptor_100cc8bc8);
  return;
}



/* Address: 0x1009df7e4 | FUN_1009df7e4 */

void FUN_1009df7e4(void)

{
  FUN_100003a00(&DAT_100ff3708,FUN_1009df7d0,&TargetProtocolConformanceDescriptor_100c8d018);
  return;
}



/* Address: 0x1009df810 | FUN_1009df810 */

undefined1  [16] FUN_1009df810(void)

{
  return ZEXT816(0x100f26c88);
}



/* Address: 0x1009df820 | FUN_1009df820 */

long * FUN_1009df820(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = &DAT_100ff3700;
    FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
    (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,param_2,puVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Address: 0x1009df8b4 | FUN_1009df8b4 */

void FUN_1009df8b4(long param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Address: 0x1009df904 | FUN_1009df904 */

long FUN_1009df904(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_1,param_2,puVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  _swift_retain();
  return param_1;
}



/* Address: 0x1009df970 | FUN_1009df970 */

long FUN_1009df970(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_1,param_2,puVar1);
  lVar2 = (long)*(int *)(param_3 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
  _swift_retain();
  _swift_release(uVar3);
  return param_1;
}



/* Address: 0x1009df9e8 | FUN_1009df9e8 */

long FUN_1009df9e8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_1,param_2,puVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1009dfa50 | FUN_1009dfa50 */

long FUN_1009dfa50(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_1,param_2,puVar1);
  lVar3 = (long)*(int *)(param_3 + 0x14);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1009dfac0 | FUN_1009dfac0 */

void FUN_1009dfac0(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009dfacc | FUN_1009dfacc */

ulong FUN_1009dfacc(ulong param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  if ((int)param_2 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001009dfb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x1009dfb54 | FUN_1009dfb54 */

void FUN_1009dfb54(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009dfb60 | FUN_1009dfb60 */

void FUN_1009dfb60(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3700;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  if (param_3 == *(int *)(*(long *)(puVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001009dfbc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x1009dfbe4 | FUN_1009dfbe4 */

void FUN_1009dfbe4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_30;
  undefined *puStack_28;
  
  puVar2 = &DAT_100ff3778;
  lVar1 = 0x13f;
  FUN_1009e10e4(0x13f,&DAT_100ff3778,PTR_typeMetadataAccessor_100eaecd0);
  if (puVar2 < (undefined *)0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1009dfc68 | FUN_1009dfc68 */

long * FUN_1009dfc68(long *param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  lVar3 = 0;
  FUN_1009dfe84();
  uVar1 = *(uint *)(*(long *)(lVar3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar3);
    iVar2 = (int)plVar4;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100ff3848;
        FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
        iVar2 = *(int *)(puVar6 + 0x30);
        puVar6 = &DAT_100ff3850;
        FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
        (**(code **)(*(long *)(puVar6 + -8) + 0x10))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar6);
        uVar7 = 0;
      }
      else {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100ff3858;
        FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
        iVar2 = *(int *)(puVar6 + 0x30);
        puVar5 = &DAT_100ff3850;
        FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
        (**(code **)(*(long *)(puVar5 + -8) + 0x10))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar5);
        iVar2 = *(int *)(puVar6 + 0x40);
        puVar6 = &DAT_100ff3860;
        FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
        (**(code **)(*(long *)(puVar6 + -8) + 0x10))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar6);
        uVar7 = 1;
      }
    }
    else if (iVar2 == 2) {
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      puVar6 = &DAT_100ff3848;
      FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
      iVar2 = *(int *)(puVar6 + 0x30);
      puVar6 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar6);
      uVar7 = 2;
    }
    else {
      puVar6 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
      uVar7 = 3;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar3,uVar7);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009dfe84 | FUN_1009dfe84 */

void FUN_1009dfe84(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3968,&TargetEnumDescriptor_100cc8c88);
  return;
}



/* Address: 0x1009dfe98 | FUN_1009dfe98 */

void FUN_1009dfe98(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 0;
  FUN_1009dfe84(0);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009dff70;
    if (iVar1 != 1) {
      return;
    }
    _swift_bridgeObjectRelease(*param_1);
    puVar5 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar4 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar4 + -8) + 8))((long)param_1 + (long)iVar1,puVar4);
    iVar1 = *(int *)(puVar5 + 0x40);
    puVar5 = &DAT_100ff3860;
    puVar4 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      puVar5 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar5 + -8) + 8);
      goto LAB_1009dffb4;
    }
LAB_1009dff70:
    _swift_bridgeObjectRelease(*param_1);
    puVar5 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar5 = &DAT_100ff3850;
    puVar4 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar5,puVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar5 + -8) + 8);
  param_1 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009dffb4:
                    /* WARNING: Could not recover jumptable at 0x0001009dffc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,puVar5);
  return;
}



/* Address: 0x1009dffd4 | FUN_1009dffd4 */

undefined8 * FUN_1009dffd4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  
  uVar2 = 0;
  FUN_1009dfe84(0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e008c;
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar5 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar4 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar4);
    iVar1 = *(int *)(puVar5 + 0x40);
    puVar5 = &DAT_100ff3860;
    puVar4 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar5 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x10);
      puVar6 = param_1;
      goto LAB_1009e0104;
    }
LAB_1009e008c:
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar5 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar5 = &DAT_100ff3850;
    puVar4 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar5,puVar4);
  pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x10);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar6 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0104:
  (*pcVar7)(puVar6,param_2,puVar5);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar3);
  return param_1;
}



/* Address: 0x1009e0130 | FUN_1009e0130 */

undefined8 * FUN_1009e0130(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009dfe84);
  uVar2 = 0;
  FUN_1009dfe84(0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0200;
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar5 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar4 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar4 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar4);
    iVar1 = *(int *)(puVar5 + 0x40);
    puVar5 = &DAT_100ff3860;
    puVar4 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar5 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x10);
      puVar6 = param_1;
      goto LAB_1009e0278;
    }
LAB_1009e0200:
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar5 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar5 = &DAT_100ff3850;
    puVar4 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar5,puVar4);
  pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x10);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar6 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0278:
  (*pcVar7)(puVar6,param_2,puVar5);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar3);
  return param_1;
}



/* Address: 0x1009e02a4 | FUN_1009e02a4 */

undefined8 * FUN_1009e02a4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  
  uVar2 = 0;
  FUN_1009dfe84(0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0358;
    *param_1 = *param_2;
    puVar5 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar4 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar4 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar4);
    iVar1 = *(int *)(puVar5 + 0x40);
    puVar5 = &DAT_100ff3860;
    puVar4 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar5 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x20);
      puVar6 = param_1;
      goto LAB_1009e03cc;
    }
LAB_1009e0358:
    *param_1 = *param_2;
    puVar5 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar5 = &DAT_100ff3850;
    puVar4 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar5,puVar4);
  pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x20);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar6 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e03cc:
  (*pcVar7)(puVar6,param_2,puVar5);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar3);
  return param_1;
}



/* Address: 0x1009e03f8 | FUN_1009e03f8 */

undefined8 * FUN_1009e03f8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009dfe84);
  uVar2 = 0;
  FUN_1009dfe84(0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e04c4;
    *param_1 = *param_2;
    puVar5 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar4 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar4 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar4);
    iVar1 = *(int *)(puVar5 + 0x40);
    puVar5 = &DAT_100ff3860;
    puVar4 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar5 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x20);
      puVar6 = param_1;
      goto LAB_1009e0538;
    }
LAB_1009e04c4:
    *param_1 = *param_2;
    puVar5 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar5 + 0x30);
    puVar5 = &DAT_100ff3850;
    puVar4 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar5,puVar4);
  pcVar7 = *(code **)(*(long *)(puVar5 + -8) + 0x20);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar6 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0538:
  (*pcVar7)(puVar6,param_2,puVar5);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar3);
  return param_1;
}



/* Address: 0x1009e0564 | FUN_1009e0564 */

void FUN_1009e0564(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e0570 | FUN_1009e0570 */

void FUN_1009e0570(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009dfe84();
                    /* WARNING: Could not recover jumptable at 0x0001009e05a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x1009e05ac | FUN_1009e05ac */

void FUN_1009e05ac(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e05b8 | FUN_1009e05b8 */

void FUN_1009e05b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009dfe84();
                    /* WARNING: Could not recover jumptable at 0x0001009e05f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Address: 0x1009e05f8 | FUN_1009e05f8 */

void FUN_1009e05f8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff38c0,&TargetStructDescriptor_100cc8c3c);
  return;
}



/* Address: 0x1009e060c | FUN_1009e060c */

void FUN_1009e060c(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_1009dfe84();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1009e0674 | FUN_1009e0674 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1009e0674(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1009e06a8 | FUN_1009e06a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1009e06a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1009e06f4 | FUN_1009e06f4 */

void FUN_1009e06f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009e0708 | FUN_1009e0708 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1009e0708(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1009e0744 | FUN_1009e0744 */

undefined1  [16] FUN_1009e0744(void)

{
  return ZEXT816(0x100f26d08);
}



/* Address: 0x1009e0754 | FUN_1009e0754 */

long * FUN_1009e0754(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100ff3848;
        FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
        iVar2 = *(int *)(puVar6 + 0x30);
        puVar6 = &DAT_100ff3850;
        FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
        (**(code **)(*(long *)(puVar6 + -8) + 0x10))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar6);
        uVar7 = 0;
      }
      else {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100ff3858;
        FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
        iVar2 = *(int *)(puVar6 + 0x30);
        puVar5 = &DAT_100ff3850;
        FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
        (**(code **)(*(long *)(puVar5 + -8) + 0x10))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar5);
        iVar2 = *(int *)(puVar6 + 0x40);
        puVar6 = &DAT_100ff3860;
        FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
        (**(code **)(*(long *)(puVar6 + -8) + 0x10))
                  ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar6);
        uVar7 = 1;
      }
    }
    else if (iVar2 == 2) {
      *param_1 = *param_2;
      _swift_bridgeObjectRetain();
      puVar6 = &DAT_100ff3848;
      FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
      iVar2 = *(int *)(puVar6 + 0x30);
      puVar6 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,puVar6);
      uVar7 = 2;
    }
    else {
      puVar6 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
      uVar7 = 3;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009e0968 | FUN_1009e0968 */

void FUN_1009e0968(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0a30;
    if (iVar1 != 1) {
      return;
    }
    _swift_bridgeObjectRelease(*param_1);
    puVar4 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar3 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar3 + -8) + 8))((long)param_1 + (long)iVar1,puVar3);
    iVar1 = *(int *)(puVar4 + 0x40);
    puVar4 = &DAT_100ff3860;
    puVar3 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      puVar4 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar4 + -8) + 8);
      goto LAB_1009e0a74;
    }
LAB_1009e0a30:
    _swift_bridgeObjectRelease(*param_1);
    puVar4 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar4 = &DAT_100ff3850;
    puVar3 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar4,puVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(puVar4 + -8) + 8);
  param_1 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0a74:
                    /* WARNING: Could not recover jumptable at 0x0001009e0a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,puVar4);
  return;
}



/* Address: 0x1009e0a94 | FUN_1009e0a94 */

undefined8 * FUN_1009e0a94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0b44;
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar4 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar3 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar3);
    iVar1 = *(int *)(puVar4 + 0x40);
    puVar4 = &DAT_100ff3860;
    puVar3 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar4 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x10);
      puVar5 = param_1;
      goto LAB_1009e0bbc;
    }
LAB_1009e0b44:
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar4 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar4 = &DAT_100ff3850;
    puVar3 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar4,puVar3);
  pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x10);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0bbc:
  (*pcVar6)(puVar5,param_2,puVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1009e0be8 | FUN_1009e0be8 */

undefined8 * FUN_1009e0be8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009dfe84);
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0cb0;
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar4 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar3 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar3);
    iVar1 = *(int *)(puVar4 + 0x40);
    puVar4 = &DAT_100ff3860;
    puVar3 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar4 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x10);
      puVar5 = param_1;
      goto LAB_1009e0d28;
    }
LAB_1009e0cb0:
    *param_1 = *param_2;
    _swift_bridgeObjectRetain();
    puVar4 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar4 = &DAT_100ff3850;
    puVar3 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar4,puVar3);
  pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x10);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0d28:
  (*pcVar6)(puVar5,param_2,puVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1009e0d54 | FUN_1009e0d54 */

undefined8 * FUN_1009e0d54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0e00;
    *param_1 = *param_2;
    puVar4 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar3 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar3 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar3);
    iVar1 = *(int *)(puVar4 + 0x40);
    puVar4 = &DAT_100ff3860;
    puVar3 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar4 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x20);
      puVar5 = param_1;
      goto LAB_1009e0e74;
    }
LAB_1009e0e00:
    *param_1 = *param_2;
    puVar4 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar4 = &DAT_100ff3850;
    puVar3 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar4,puVar3);
  pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x20);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0e74:
  (*pcVar6)(puVar5,param_2,puVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1009e0ea0 | FUN_1009e0ea0 */

undefined8 * FUN_1009e0ea0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009dfe84);
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) goto LAB_1009e0f64;
    *param_1 = *param_2;
    puVar4 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar3 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar3 + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,puVar3);
    iVar1 = *(int *)(puVar4 + 0x40);
    puVar4 = &DAT_100ff3860;
    puVar3 = &DAT_100c8d100;
  }
  else {
    if (iVar1 != 2) {
      puVar4 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x20);
      puVar5 = param_1;
      goto LAB_1009e0fd8;
    }
LAB_1009e0f64:
    *param_1 = *param_2;
    puVar4 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar1 = *(int *)(puVar4 + 0x30);
    puVar4 = &DAT_100ff3850;
    puVar3 = &DAT_100c8d0f0;
  }
  FUN_1000f7830(puVar4,puVar3);
  pcVar6 = *(code **)(*(long *)(puVar4 + -8) + 0x20);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar1);
LAB_1009e0fd8:
  (*pcVar6)(puVar5,param_2,puVar4);
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1009e1004 | FUN_1009e1004 */

void FUN_1009e1004(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  long lStack_38;
  
  puVar4 = &DAT_100ff3978;
  lVar2 = 0x13f;
  FUN_1009e10e4(0x13f,&DAT_100ff3978,PTR_typeMetadataAccessor_100eaece8);
  puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38;
  if (puVar4 < (undefined *)0x40) {
    lVar2 = *(long *)(lVar2 + -8) + 0x40;
    puVar4 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    _swift_getTupleTypeLayout2(auStack_70,puVar4,lVar2);
    lVar3 = 0x13f;
    local_50 = auStack_70;
    FUN_1009e112c();
    if (puVar4 < (undefined *)0x40) {
      _swift_getTupleTypeLayout3(auStack_90,puVar1 + 0x40,lVar2,*(long *)(lVar3 + -8) + 0x40);
      local_48 = auStack_90;
      _swift_getTupleTypeLayout2(auStack_b0,puVar1 + 0x40,lVar2);
      local_40 = auStack_b0;
      lStack_38 = lVar2;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,4,&local_50);
    }
  }
  return;
}



/* Address: 0x1009e10e4 | FUN_1009e10e4 */

void FUN_1009e10e4(long param_1,long *param_2,code *param_3)

{
  undefined *puVar1;
  
  if (*param_2 != 0) {
    return;
  }
  puVar1 = &DAT_100f26b88;
  (*param_3)();
  if (puVar1 == (undefined *)0x0) {
    *param_2 = param_1;
  }
  return;
}



/* Address: 0x1009e112c | FUN_1009e112c */

void FUN_1009e112c(void)

{
  CheckedContinuation CVar1;
  undefined *puVar2;
  
  if (DAT_100ff3980 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for____100eae0c8 + 8;
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100ff3980 = CVar1.unknown;
  return;
}



/* Address: 0x1009e1190 | FUN_1009e1190 */

void FUN_1009e1190(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009dc754(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009e1198 | FUN_1009e1198 */

void FUN_1009e1198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1009dcc88(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1009e1204 | FUN_1009e1204 */

void FUN_1009e1204(void)

{
  long unaff_x20;
  
  FUN_1009de600(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009e120c | FUN_1009e120c */

void FUN_1009e120c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3bb8,&TargetEnumDescriptor_100cc8d00);
  return;
}



/* Address: 0x1009e1220 | FUN_1009e1220 */

void FUN_1009e1220(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009ddb84(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009e122c | FUN_1009e122c */

void FUN_1009e122c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3b38,&TargetEnumDescriptor_100cc8cd8);
  return;
}



/* Address: 0x1009e1240 | FUN_1009e1240 */

void FUN_1009e1240(void)

{
  FUN_1009de190();
  return;
}



/* Address: 0x1009e1248 | FUN_1009e1248 */

void FUN_1009e1248(long param_1,long param_2)

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



/* Address: 0x1009e125c | FUN_1009e125c */

void FUN_1009e125c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1009e1264 | FUN_1009e1264 */

void FUN_1009e1264(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3ab8,&TargetEnumDescriptor_100cc8cb0);
  return;
}



/* Address: 0x1009e1278 | FUN_1009e1278 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009e1278(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100ff3a28;
  FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e12f0 | FUN_1009e12f0 */

void FUN_1009e12f0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long unaff_x20;
  
  puVar2 = &DAT_100ff3a28;
  FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
  uVar3 = (ulong)*(byte *)(*(long *)(puVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(puVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8))
  ;
  FUN_1009dcbe4(unaff_x20 + uVar3,*puVar1,*(undefined1 *)(puVar1 + 1));
  return;
}



/* Address: 0x1009e1344 | FUN_1009e1344 */

void FUN_1009e1344(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100ff3a28;
  FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e13a8 | FUN_1009e13a8 */

void FUN_1009e13a8(void)

{
  Continuation_conflict CVar1;
  
  CVar1.unknown = &DAT_100ff3a28;
  FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
  Swift::AsyncStream::Continuation::finish(CVar1);
  return;
}



/* Address: 0x1009e13ec | FUN_1009e13ec */

void FUN_1009e13ec(void)

{
  undefined *puVar1;
  
  if (DAT_100ff3a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8ce5c;
  _swift_getWitnessTable(&DAT_100c8ce5c,&DAT_100f26b88);
  DAT_100ff3a38 = puVar1;
  return;
}



/* Address: 0x1009e142c | FUN_1009e142c */

long * FUN_1009e142c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,param_2,puVar2);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009e14ac | FUN_1009e14ac */

void FUN_1009e14ac(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e14e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return;
}



/* Address: 0x1009e14ec | FUN_1009e14ec */

undefined8 FUN_1009e14ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_1,param_2,puVar1);
  return param_1;
}



/* Address: 0x1009e153c | FUN_1009e153c */

undefined8 FUN_1009e153c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_1,param_2,puVar1);
  return param_1;
}



/* Address: 0x1009e158c | FUN_1009e158c */

undefined8 FUN_1009e158c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_1,param_2,puVar1);
  return param_1;
}



/* Address: 0x1009e15dc | FUN_1009e15dc */

undefined8 FUN_1009e15dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_1,param_2,puVar1);
  return param_1;
}


