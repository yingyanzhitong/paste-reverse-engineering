/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a889a0 | FUN_100a889a0 */

void FUN_100a889a0(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  FUN_100a88848(unaff_x20 + (uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff)),
                *(undefined8 *)(unaff_x20 + 0x10),*(long *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100a889c0 | FUN_100a889c0 */

void FUN_100a889c0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a889cc | FUN_100a889cc */

void FUN_100a889cc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a889d8 | FUN_100a889d8 */

void FUN_100a889d8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  FUN_100a889c0(0xff,*param_1);
  _swift_getFunctionTypeMetadata0(0x44000000,uVar1);
  return;
}



/* Address: 0x100a889fc | FUN_100a889fc */

void FUN_100a889fc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a884c4(plVar1,param_1,param_2);
  return;
}



/* Address: 0x100a88a64 | FUN_100a88a64 */

void FUN_100a88a64(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92b40,param_1);
  return;
}



/* Address: 0x100a88a74 | FUN_100a88a74 */

void FUN_100a88a74(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  FUN_10009df20(*unaff_x20,uVar1);
  _swift_release(uVar1);
  return;
}



/* Address: 0x100a88a9c | thunk_FUN_1005e8174 */

void thunk_FUN_1005e8174(void)

{
  FUN_1005e8174();
  return;
}



/* Address: 0x100a88aa0 | FUN_100a88aa0 */

void FUN_100a88aa0(void)

{
  FUN_100a88b50(FUN_100a8fbb8,FUN_100a8fb40,thunk_FUN_100a8fb20);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a88ad8 | FUN_100a88ad8 */

void FUN_100a88ad8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a88ae4 | thunk_FUN_100671a4c */

void thunk_FUN_100671a4c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Address: 0x100a88ae8 | FUN_100a88ae8 */

void FUN_100a88ae8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  lVar2 = unaff_x20[2];
  local_40 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar1 = 0;
  FUN_100a8d984(0);
  FUN_10066ed6c(FUN_100a8fa2c,auStack_50,lVar2,uVar1,PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x100a88b50 | FUN_100a88b50 */

void FUN_100a88b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_100a88bb8(param_1,param_2,param_3);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a88bb8 | FUN_100a88bb8 */

void FUN_100a88bb8(code *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  Optional OVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  char local_68;
  
  lVar7 = unaff_x20[2];
  uVar8 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar5 = 0;
  local_90 = uVar8;
  FUN_100a8d984(0,uVar8);
  (*param_1)(0xff,uVar8);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  FUN_10066ed6c(&local_80,param_2,auStack_a0,lVar7,uVar5,OVar4.value);
  pcVar3 = local_80;
  if (local_68 != -1) {
    pcVar2 = (code *)CONCAT71(uStack_77,local_78);
    if (local_68 == '\x01') {
      lVar7 = *(long *)(local_80 + 0x10);
      if (lVar7 != 0) {
        FUN_100a8f3d0();
        pcVar9 = pcVar3 + 0x28;
        do {
          pcVar1 = *(code **)(pcVar9 + -8);
          uVar5 = *(undefined8 *)pcVar9;
          pcVar6 = (code *)&DAT_100f2ed28;
          _swift_allocError(&DAT_100f2ed28,param_2,0,0);
          local_78 = 1;
          local_80 = pcVar6;
          _swift_retain(uVar5);
          (*pcVar1)(&local_80);
          _swift_release(uVar5);
          _swift_errorRelease(pcVar6);
          pcVar9 = pcVar9 + 0x10;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (pcVar2 == (code *)0x0) {
        (*param_3)(pcVar3,0,local_70,1);
      }
      else {
        _swift_retain(local_70);
        (*pcVar2)();
        (*param_3)(pcVar3,pcVar2,local_70,1);
        FUN_100004550(pcVar2,local_70);
      }
    }
    else {
      if (local_80 == (code *)0x0) {
        local_80 = (code *)0x0;
      }
      else {
        _swift_retain(pcVar2);
        (*local_80)();
        (*param_3)(local_80,pcVar2,local_70,local_68);
      }
      (*param_3)(local_80,pcVar2,local_70,local_68);
    }
  }
  return;
}



/* Address: 0x100a88d84 | FUN_100a88d84 */

void FUN_100a88d84(void)

{
  FUN_100a88b50(FUN_100a8fb14,FUN_100a8faf8,thunk_FUN_100a8fb20);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a88dbc | FUN_100a88dbc */

void FUN_100a88dbc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a88dc8 | FUN_100a88dc8 */

void FUN_100a88dc8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_100a88de0,0,0);
  return;
}



/* Address: 0x100a88de0 | FUN_100a88de0 */

void FUN_100a88de0(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = **(long **)(unaff_x22 + 0x18);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
  plVar2 = (long *)0x70;
  _swift_retain();
  _swift_retain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a88e58;
  FUN_100a88f3c(plVar2,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100a88e58 | FUN_100a88e58 */

void FUN_100a88e58(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_100a88ec4;
  }
  else {
    pcVar2 = FUN_100a88f00;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a88ec4 | FUN_100a88ec4 */

void FUN_100a88ec4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100a88efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a88f00 | FUN_100a88f00 */

void FUN_100a88f00(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100a88f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a88f3c | FUN_100a88f3c */

void FUN_100a88f3c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(long **)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_100a8f1e0();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  _swift_task_switch(FUN_100a88fbc,0,0);
  return;
}



/* Address: 0x100a88fbc | FUN_100a88fbc */

void FUN_100a88fbc(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_60;
  undefined1 local_58;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar12 = *(long *)(unaff_x22 + 0x48);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = 0;
  FUN_100a8d984(0);
  FUN_10066ed6c(uVar7,FUN_100a8f1ec,unaff_x22 + 0x10,uVar10,uVar2,uVar6);
  (**(code **)(lVar12 + 0x10))(uVar5,uVar7,uVar6);
  _swift_getEnumCaseMultiPayload(uVar5,uVar6);
  iVar1 = (int)uVar5;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
      lVar8 = *(long *)(unaff_x22 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
                (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
      lVar12 = *(long *)(lVar8 + -8);
      (**(code **)(lVar12 + 0x20))(uVar6,uVar5,lVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x38);
      uVar5 = 0;
    }
    else {
      lVar8 = *(long *)(unaff_x22 + 0x50);
      lVar11 = *(long *)(unaff_x22 + 0x38);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
      puVar4 = &DAT_100ff7700;
      FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
      lVar12 = 0;
      _swift_getTupleTypeMetadata2(0,lVar11,puVar4,0,0);
      lVar9 = *(long *)(lVar8 + *(int *)(lVar12 + 0x30));
      lVar14 = *(long *)(lVar11 + -8);
      (**(code **)(lVar14 + 0x20))(uVar5,lVar8,lVar11);
      lVar12 = *(long *)(lVar9 + 0x10);
      if (lVar12 != 0) {
        puVar13 = (undefined8 *)(lVar9 + 0x28);
        do {
          UNRECOVERED_JUMPTABLE = (code *)puVar13[-1];
          uVar5 = *puVar13;
          local_60 = 0;
          local_58 = 0;
          _swift_retain(uVar5);
          (*UNRECOVERED_JUMPTABLE)(&local_60);
          _swift_release(uVar5);
          puVar13 = puVar13 + 2;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
      lVar12 = *(long *)(unaff_x22 + 0x48);
      lVar8 = *(long *)(unaff_x22 + 0x38);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      _swift_bridgeObjectRelease(lVar9);
      (**(code **)(lVar12 + 8))(uVar7,uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x38);
      uVar5 = 0;
    }
  }
  else if (iVar1 == 2) {
    plVar3 = *(long **)(unaff_x22 + 0x50);
    lVar12 = *plVar3;
    UNRECOVERED_JUMPTABLE = (code *)plVar3[1];
    lVar9 = plVar3[2];
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      _swift_retain(lVar9);
      (*UNRECOVERED_JUMPTABLE)();
      FUN_100004550(UNRECOVERED_JUMPTABLE,lVar9);
    }
    if (lVar12 != 0) {
      _swift_willThrow();
      FUN_100004550(UNRECOVERED_JUMPTABLE,lVar9);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
      (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x40));
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100a892c4;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    lVar12 = *(long *)(unaff_x22 + 0x48);
    lVar8 = *(long *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    FUN_100004550(UNRECOVERED_JUMPTABLE,lVar9);
    (**(code **)(lVar12 + 8))(uVar7,uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    uVar5 = 1;
  }
  else {
    if (iVar1 != 3) {
      plVar3 = (long *)&DAT_00000030;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_100a892e0;
      FUN_100a8b1d8(plVar3,*(undefined8 *)(unaff_x22 + 0x28));
      return;
    }
    lVar8 = *(long *)(unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar8 + -8) + 0x38);
    uVar5 = 1;
  }
  (*UNRECOVERED_JUMPTABLE)(uVar6,uVar5,1,lVar8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar5);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100a892c4:
                    /* WARNING: Could not recover jumptable at 0x000100a892dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100a892e0 | FUN_100a892e0 */

void FUN_100a892e0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a89344;
  }
  else {
    pcVar1 = FUN_100a89398;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a89344 | FUN_100a89344 */

void FUN_100a89344(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
            (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a89394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a89398 | FUN_100a89398 */

void FUN_100a89398(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a893f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a893f8 | FUN_100a893f8 */

void FUN_100a893f8(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a88dc8(plVar1,param_1);
  return;
}



/* Address: 0x100a89450 | FUN_100a89450 */

undefined8 FUN_100a89450(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100a88dbc(0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = uVar2;
  _swift_retain(uVar2);
  FUN_100a8f9dc();
  _swift_release(uVar2);
  return uVar1;
}



/* Address: 0x100a89498 | FUN_100a89498 */

void FUN_100a89498(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_100a89450(uVar2,*(undefined8 *)(param_2 + 0x10));
  _swift_release(uVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a894dc | FUN_100a894dc */

void FUN_100a894dc(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_100a8951c();
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100a8951c | FUN_100a8951c */

void FUN_100a8951c(void)

{
  code *pcVar1;
  Optional OVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 local_70;
  byte local_68;
  
  lVar8 = unaff_x20[2];
  uVar9 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar3 = 0;
  local_90 = uVar9;
  FUN_100a8d984(0,uVar9);
  FUN_100a8fa88(0xff,uVar9);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  pcVar4 = FUN_100a8fa6c;
  FUN_10066ed6c(&local_80,FUN_100a8fa6c,auStack_a0,lVar8,uVar3,OVar2.value);
  pcVar6 = local_80;
  pcVar7 = (code *)CONCAT71(uStack_77,local_78);
  if (local_68 < 2) {
    if (local_68 == 0) {
      if (local_80 == (code *)0x0) {
        pcVar6 = (code *)0x0;
      }
      else {
        _swift_retain(pcVar7);
        (*pcVar6)();
        FUN_100a8fa94(pcVar6,pcVar7,local_70,0);
      }
      uVar3 = 0;
    }
    else {
      lVar8 = *(long *)(local_80 + 0x10);
      if (lVar8 != 0) {
        FUN_100a8f3d0();
        pcVar10 = pcVar6 + 0x28;
        do {
          pcVar1 = *(code **)(pcVar10 + -8);
          uVar3 = *(undefined8 *)pcVar10;
          pcVar5 = (code *)&DAT_100f2ed28;
          _swift_allocError(&DAT_100f2ed28,pcVar4,0,0);
          local_78 = 1;
          local_80 = pcVar5;
          _swift_retain(uVar3);
          (*pcVar1)(&local_80);
          _swift_release(uVar3);
          _swift_errorRelease(pcVar5);
          pcVar10 = pcVar10 + 0x10;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      if (pcVar7 != (code *)0x0) {
        _swift_retain(local_70);
        (*pcVar7)();
        FUN_100a8fa94(pcVar6,pcVar7,local_70,1);
        FUN_100004550(pcVar7,local_70);
        return;
      }
      pcVar7 = (code *)0x0;
      uVar3 = 1;
    }
  }
  else {
    if (local_68 != 2) {
      return;
    }
    lVar8 = *(long *)(local_80 + 0x10);
    if (lVar8 != 0) {
      FUN_100a8f3d0();
      pcVar10 = pcVar6 + 0x28;
      do {
        pcVar1 = *(code **)(pcVar10 + -8);
        uVar3 = *(undefined8 *)pcVar10;
        pcVar5 = (code *)&DAT_100f2ed28;
        _swift_allocError(&DAT_100f2ed28,pcVar4,0,0);
        local_78 = 1;
        local_80 = pcVar5;
        _swift_retain(uVar3);
        (*pcVar1)(&local_80);
        _swift_release(uVar3);
        _swift_errorRelease(pcVar5);
        pcVar10 = pcVar10 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar3 = 2;
  }
  FUN_100a8fa94(pcVar6,pcVar7,local_70,uVar3);
  return;
}



/* Address: 0x100a89774 | FUN_100a89774 */

void FUN_100a89774(void)

{
  FUN_100a894dc();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a89794 | FUN_100a89794 */

void FUN_100a89794(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a897a0 | FUN_100a897a0 */

void FUN_100a897a0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  String isolation;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_1005cd444;
    isolation.bridgeObject = param_2;
    isolation.str = param_1;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_100a8f410(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a898e8 | FUN_100a898e8 */

void FUN_100a898e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::_withTaskCancellationHandler();
    return;
  }
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1005f4884(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a89a30 | FUN_100a89a30 */

undefined * FUN_100a89a30(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *unaff_x20;
  char *pcVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  String SVar20;
  char acStack_a0 [8];
  char acStack_98 [8];
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char acStack_70 [8];
  undefined *local_68;
  
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  lVar7 = 0;
  FUN_100a8cf3c(0,uVar11);
  lVar16 = *(long *)(lVar7 + -8);
  lVar4 = -(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&local_90 + lVar4;
  lVar8 = 0;
  FUN_100a8cf30(0,uVar11);
  lVar17 = *(long *)(lVar8 + -8);
  pcVar13 = (char *)(lVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar17 + 0x10))(pcVar13);
  pcVar9 = pcVar13;
  _swift_getEnumCaseMultiPayload(pcVar13,lVar8);
  iVar6 = (int)pcVar9;
  if (iVar6 < 2) {
    if (iVar6 != 0) {
      (**(code **)(lVar16 + 0x20))(lVar15,pcVar13,lVar7);
      if (*(char *)((long)&local_80 + lVar4) == '\x01') {
        (**(code **)(lVar16 + 8))(lVar15,lVar7);
        return (undefined *)0x0;
      }
      (**(code **)(lVar17 + 8))();
      *unaff_x20 = 0;
      _swift_storeEnumTagMultiPayload();
      lVar8 = *(long *)(lVar15 + *(int *)(lVar7 + 0x2c));
      uVar18 = *(ulong *)(lVar8 + 0x18);
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar18 != 0) {
        local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
        local_90 = lVar16;
        lStack_88 = lVar7;
        FUN_100a8f628(0,uVar18 & ((long)uVar18 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a89d50);
          (*pcVar5)();
        }
        uVar19 = 0;
        puVar12 = local_68;
        do {
          if (*(long *)(lVar8 + 0x18) <= (long)uVar19) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100a89d4c);
            (*pcVar5)();
          }
          lVar7 = 0;
          if (*(long *)(lVar8 + 0x10) <= (long)(uVar19 + *(long *)(lVar8 + 0x20))) {
            lVar7 = *(long *)(lVar8 + 0x10);
          }
          puVar10 = (undefined8 *)
                    (lVar8 + 0x30 + (uVar19 + (*(long *)(lVar8 + 0x20) - lVar7)) * 0x18);
          uStack_78 = puVar10[1];
          local_80 = *puVar10;
          uVar1 = *(ulong *)(puVar12 + 0x10);
          uVar3 = *(ulong *)(puVar12 + 0x18);
          local_68 = puVar12;
          _swift_retain(puVar10[1]);
          if (uVar3 >> 1 <= uVar1) {
            FUN_100a8f628(1 < uVar3,uVar1 + 1,1);
            puVar12 = local_68;
          }
          uVar19 = uVar19 + 1;
          *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar12 + uVar1 * 0x10 + 0x28) = uStack_78;
          *(undefined8 *)(puVar12 + uVar1 * 0x10 + 0x20) = local_80;
          lVar7 = lStack_88;
          lVar16 = local_90;
        } while (uVar18 != uVar19);
      }
      FUN_100011128(*(undefined8 *)(acStack_70 + lVar4 + -8),*(undefined8 *)(acStack_70 + lVar4));
      (**(code **)(lVar16 + 8))(lVar15,lVar7);
      return puVar12;
    }
    puVar12 = *(undefined **)(pcVar13 + 0x18);
    uVar14 = *(undefined8 *)(pcVar13 + 0x20);
    if (pcVar13[0x10] != '\x01') {
      (**(code **)(lVar17 + 8))();
      *unaff_x20 = 0;
      _swift_storeEnumTagMultiPayload();
      return puVar12;
    }
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        return (undefined *)0x0;
      }
      pcVar13[-8] = '\0';
      pcVar13[-7] = '\0';
      pcVar13[-6] = '\0';
      pcVar13[-5] = '\0';
      pcVar13[-0x10] = '\x13';
      pcVar13[-0xf] = '\x04';
      pcVar13[-0xe] = '\0';
      pcVar13[-0xd] = '\0';
      pcVar13[-0xc] = '\0';
      pcVar13[-0xb] = '\0';
      pcVar13[-10] = '\0';
      pcVar13[-9] = '\0';
      SVar20.bridgeObject = (void *)0x2;
      SVar20.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar20,(StaticString)0xd000000000000022,
                 0x8000000100dbac90,0xdbac80);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a89da4);
      (*pcVar5)();
    }
    uVar11 = *(undefined8 *)(pcVar13 + 8);
    uVar2 = *(undefined8 *)(pcVar13 + 0x10);
    puVar12 = *(undefined **)(pcVar13 + 0x18);
    uVar14 = *(undefined8 *)(pcVar13 + 0x20);
    if (*pcVar13 != '\x01') {
      (**(code **)(lVar17 + 8))();
      *unaff_x20 = 0;
      _swift_storeEnumTagMultiPayload();
      FUN_100011128(puVar12,uVar14);
      _swift_release(uVar11);
      _swift_errorRelease(uVar2);
      FUN_100004550(puVar12,uVar14);
      return puVar12;
    }
    _swift_release(uVar11);
    _swift_errorRelease(uVar2);
  }
  FUN_100004550(puVar12,uVar14);
  return (undefined *)0x0;
}



/* Address: 0x100a89da4 | FUN_100a89da4 */

void FUN_100a89da4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  StaticString file;
  char *pcVar8;
  undefined8 uVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  char *pcVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  char acStack_70 [8];
  char acStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  lVar6 = 0;
  FUN_100a8cf3c(0,uVar9);
  lVar13 = *(long *)(lVar6 + -8);
  lVar3 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_100a8cf30(0,uVar9);
  lVar12 = *(long *)(lVar7 + -8);
  pcVar11 = (char *)(((long)&local_60 + lVar3) -
                    (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar12 + 0x10))(pcVar11);
  pcVar8 = pcVar11;
  _swift_getEnumCaseMultiPayload(pcVar11,lVar7);
  iVar5 = (int)pcVar8;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      if (pcVar11[0x10] != '\x01') {
        uVar9 = *(undefined8 *)(pcVar11 + 0x18);
        uVar10 = *(undefined8 *)(pcVar11 + 0x20);
        uVar1 = *(undefined8 *)pcVar11;
        uVar2 = *(undefined8 *)(pcVar11 + 8);
        (**(code **)(lVar12 + 8))();
        *unaff_x20 = uVar1;
        unaff_x20[1] = uVar2;
        *(undefined1 *)(unaff_x20 + 2) = 1;
LAB_100a89ec0:
        unaff_x20[3] = uVar9;
        unaff_x20[4] = uVar10;
LAB_100a89f40:
        _swift_storeEnumTagMultiPayload();
        return;
      }
      pcVar11[-8] = '\0';
      pcVar11[-7] = '\0';
      pcVar11[-6] = '\0';
      pcVar11[-5] = '\0';
      uVar9 = 0x41c;
    }
    else {
      pcVar4 = *(code **)(lVar13 + 0x20);
      (*pcVar4)((long)&local_60 + lVar3,pcVar11,lVar6);
      if ((&stack0xffffffffffffffb0)[lVar3] != '\x01') {
        (&stack0xffffffffffffffb0)[lVar3] = 1;
        (**(code **)(lVar12 + 8))();
        (*pcVar4)();
        goto LAB_100a89f40;
      }
      pcVar11[-8] = '\0';
      pcVar11[-7] = '\0';
      pcVar11[-6] = '\0';
      pcVar11[-5] = '\0';
      uVar9 = 0x426;
    }
  }
  else if (iVar5 == 2) {
    if (*pcVar11 != '\x01') {
      uVar9 = *(undefined8 *)(pcVar11 + 0x18);
      uVar10 = *(undefined8 *)(pcVar11 + 0x20);
      uStack_58 = *(undefined8 *)(pcVar11 + 0x10);
      local_60 = *(undefined8 *)(pcVar11 + 8);
      (**(code **)(lVar12 + 8))();
      *(undefined1 *)unaff_x20 = 1;
      unaff_x20[2] = uStack_58;
      unaff_x20[1] = local_60;
      goto LAB_100a89ec0;
    }
    pcVar11[-8] = '\0';
    pcVar11[-7] = '\0';
    pcVar11[-6] = '\0';
    pcVar11[-5] = '\0';
    uVar9 = 0x430;
  }
  else {
    if (iVar5 != 3) {
      pcVar8 = "ufferedStream.swift";
      file.unknown = (undefined *)0xd000000000000022;
      pcVar11[-8] = '\0';
      pcVar11[-7] = '\0';
      pcVar11[-6] = '\0';
      pcVar11[-5] = '\0';
      pcVar11[-0x10] = 'B';
      pcVar11[-0xf] = '\x04';
      pcVar11[-0xe] = '\0';
      pcVar11[-0xd] = '\0';
      pcVar11[-0xc] = '\0';
      pcVar11[-0xb] = '\0';
      pcVar11[-10] = '\0';
      pcVar11[-9] = '\0';
      goto LAB_100a8a048;
    }
    if (*pcVar11 != '\x01') {
      (**(code **)(lVar12 + 8))();
      *(undefined1 *)unaff_x20 = 1;
      goto LAB_100a89f40;
    }
    pcVar11[-8] = '\0';
    pcVar11[-7] = '\0';
    pcVar11[-6] = '\0';
    pcVar11[-5] = '\0';
    uVar9 = 0x439;
  }
  pcVar8 = "Channel+Internal.swift";
  *(undefined8 *)(pcVar11 + -0x10) = uVar9;
  file.unknown = (undefined *)0xd00000000000002a;
LAB_100a8a048:
  SVar14.bridgeObject = (void *)0x2;
  SVar14.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar14,file,(ulong)pcVar8 | 0x8000000000000000,0xdbac80);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a05c);
  (*pcVar4)();
}



/* Address: 0x100a8a05c | FUN_100a8a05c */

undefined * FUN_100a8a05c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 *puVar11;
  undefined1 *unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  char acStack_a0 [8];
  char acStack_98 [8];
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char acStack_70 [8];
  undefined *local_68;
  
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = 0;
  FUN_100a8cf3c(0,uVar12);
  lVar18 = *(long *)(lVar8 + -8);
  lVar5 = -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_90 + lVar5;
  lVar9 = 0;
  FUN_100a8cf30(0,uVar12);
  lVar19 = *(long *)(lVar9 + -8);
  pcVar16 = (char *)(lVar14 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar19 + 0x10))(pcVar16);
  pcVar10 = pcVar16;
  _swift_getEnumCaseMultiPayload(pcVar16,lVar9);
  iVar7 = (int)pcVar10;
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      if (pcVar16[0x10] != '\x01') {
        pcVar16[-8] = '\0';
        pcVar16[-7] = '\0';
        pcVar16[-6] = '\0';
        pcVar16[-5] = '\0';
        uVar12 = 0x45b;
LAB_100a8a3c0:
        *(undefined8 *)(pcVar16 + -0x10) = uVar12;
        SVar20.bridgeObject = (void *)0x2;
        SVar20.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar20,(StaticString)0xd000000000000022,
                   0x8000000100dbac90,0xdbac80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8a3fc);
        (*pcVar6)();
      }
      puVar13 = *(undefined **)(pcVar16 + 0x18);
      (**(code **)(lVar19 + 8))();
      *unaff_x20 = 1;
      _swift_storeEnumTagMultiPayload();
    }
    else {
      (**(code **)(lVar18 + 0x20))(lVar14,pcVar16,lVar8);
      if (*(char *)((long)&local_80 + lVar5) != '\x01') {
        pcVar16[-8] = '\0';
        pcVar16[-7] = '\0';
        pcVar16[-6] = '\0';
        pcVar16[-5] = '\0';
        uVar12 = 0x46a;
        goto LAB_100a8a3c0;
      }
      (**(code **)(lVar19 + 8))();
      *unaff_x20 = 1;
      _swift_storeEnumTagMultiPayload();
      lVar9 = *(long *)(lVar14 + *(int *)(lVar8 + 0x2c));
      uVar15 = *(ulong *)(lVar9 + 0x18);
      puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar15 != 0) {
        local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
        local_90 = lVar18;
        lStack_88 = lVar8;
        FUN_100a8f628(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8a354);
          (*pcVar6)();
        }
        uVar17 = 0;
        puVar13 = local_68;
        do {
          if (*(long *)(lVar9 + 0x18) <= (long)uVar17) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8a350);
            (*pcVar6)();
          }
          lVar8 = 0;
          if (*(long *)(lVar9 + 0x10) <= (long)(uVar17 + *(long *)(lVar9 + 0x20))) {
            lVar8 = *(long *)(lVar9 + 0x10);
          }
          puVar11 = (undefined8 *)
                    (lVar9 + 0x30 + (uVar17 + (*(long *)(lVar9 + 0x20) - lVar8)) * 0x18);
          uStack_78 = puVar11[1];
          local_80 = *puVar11;
          uVar1 = *(ulong *)(puVar13 + 0x10);
          uVar4 = *(ulong *)(puVar13 + 0x18);
          local_68 = puVar13;
          _swift_retain(puVar11[1]);
          if (uVar4 >> 1 <= uVar1) {
            FUN_100a8f628(1 < uVar4,uVar1 + 1,1);
            puVar13 = local_68;
          }
          uVar17 = uVar17 + 1;
          *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar13 + uVar1 * 0x10 + 0x28) = uStack_78;
          *(undefined8 *)(puVar13 + uVar1 * 0x10 + 0x20) = local_80;
          lVar8 = lStack_88;
          lVar18 = local_90;
        } while (uVar15 != uVar17);
      }
      FUN_100011128(*(undefined8 *)(acStack_70 + lVar5 + -8),*(undefined8 *)(acStack_70 + lVar5));
      (**(code **)(lVar18 + 8))(lVar14,lVar8);
    }
  }
  else if (iVar7 == 2) {
    if (*pcVar16 != '\x01') {
      pcVar16[-8] = '\0';
      pcVar16[-7] = '\0';
      pcVar16[-6] = '\0';
      pcVar16[-5] = '\0';
      uVar12 = 0x475;
      goto LAB_100a8a3c0;
    }
    puVar13 = *(undefined **)(pcVar16 + 0x18);
    uVar2 = *(undefined8 *)(pcVar16 + 0x20);
    uVar12 = *(undefined8 *)(pcVar16 + 8);
    uVar3 = *(undefined8 *)(pcVar16 + 0x10);
    (**(code **)(lVar19 + 8))();
    *unaff_x20 = 1;
    _swift_storeEnumTagMultiPayload();
    FUN_100011128(puVar13,uVar2);
    _swift_release(uVar12);
    _swift_errorRelease(uVar3);
    FUN_100004550(puVar13,uVar2);
  }
  else {
    if (iVar7 != 3) {
      pcVar16[-8] = '\0';
      pcVar16[-7] = '\0';
      pcVar16[-6] = '\0';
      pcVar16[-5] = '\0';
      uVar12 = 0x47e;
      goto LAB_100a8a3c0;
    }
    puVar13 = (undefined *)0x0;
  }
  return puVar13;
}



/* Address: 0x100a8a3fc | FUN_100a8a3fc */

undefined * FUN_100a8a3fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  Optional OVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  CheckedContinuation CVar11;
  undefined7 extraout_var;
  long *plVar12;
  undefined1 *unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  String SVar24;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  long local_90 [2];
  long local_80;
  long alStack_78 [2];
  undefined *local_68;
  
  uVar20 = *(undefined8 *)(param_1 + 0x10);
  lVar8 = 0;
  FUN_100a8cf3c(0,uVar20);
  lVar13 = *(long *)(lVar8 + -8);
  lVar16 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)local_90 + lVar16;
  lVar9 = 0;
  FUN_100a8cf30(0,uVar20);
  lVar23 = *(long *)(lVar9 + -8);
  lVar17 = lVar14 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar23 + 0x10))(lVar17);
  lVar15 = lVar17;
  _swift_getEnumCaseMultiPayload(lVar17,lVar9);
  iVar7 = (int)lVar15;
  if (iVar7 < 2) {
    if (iVar7 == 0) {
      uVar3 = *(undefined1 *)(lVar17 + 0x10);
      puVar18 = *(undefined **)(lVar17 + 0x18);
      (**(code **)(lVar23 + 8))();
      *unaff_x20 = uVar3;
      _swift_storeEnumTagMultiPayload();
    }
    else {
      local_90[1] = lVar13;
      (**(code **)(lVar13 + 0x20))(lVar14,lVar17,lVar8);
      puVar18 = *(undefined **)((long)&local_68 + lVar16);
      uVar10 = 0;
      local_68 = puVar18;
      FUN_1006883a0(0,uVar20);
      _swift_getWitnessTable(0x100c6d780,uVar10);
      bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
      if (bVar5) {
        (**(code **)(lVar23 + 8))();
        *unaff_x20 = *(undefined1 *)((long)&local_80 + lVar16);
        _swift_storeEnumTagMultiPayload();
        lVar15 = *(long *)(lVar14 + *(int *)(lVar8 + 0x2c));
        uVar19 = *(ulong *)(lVar15 + 0x18);
        puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (uVar19 != 0) {
          local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
          local_90[0] = lVar8;
          FUN_100a8f628(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a908);
            (*pcVar4)();
          }
          uVar21 = 0;
          puVar18 = local_68;
          do {
            if (*(long *)(lVar15 + 0x18) <= (long)uVar21) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a8fc);
              (*pcVar4)();
            }
            lVar8 = 0;
            if (*(long *)(lVar15 + 0x10) <= (long)(uVar21 + *(long *)(lVar15 + 0x20))) {
              lVar8 = *(long *)(lVar15 + 0x10);
            }
            plVar12 = (long *)(lVar15 + 0x30 + (uVar21 + (*(long *)(lVar15 + 0x20) - lVar8)) * 0x18)
            ;
            alStack_78[0] = plVar12[1];
            local_80 = *plVar12;
            uVar1 = *(ulong *)(puVar18 + 0x10);
            uVar2 = *(ulong *)(puVar18 + 0x18);
            local_68 = puVar18;
            _swift_retain(plVar12[1]);
            if (uVar2 >> 1 <= uVar1) {
              FUN_100a8f628(1 < uVar2,uVar1 + 1,1);
              puVar18 = local_68;
            }
            uVar21 = uVar21 + 1;
            *(ulong *)(puVar18 + 0x10) = uVar1 + 1;
            *(long *)(puVar18 + uVar1 * 0x10 + 0x28) = alStack_78[0];
            *(long *)(puVar18 + uVar1 * 0x10 + 0x20) = local_80;
            lVar8 = local_90[0];
          } while (uVar19 != uVar21);
        }
        FUN_100011128(*(undefined8 *)((long)alStack_78 + lVar16),
                      *(undefined8 *)((long)alStack_78 + lVar16 + 8));
        (**(code **)(local_90[1] + 8))(lVar14,lVar8);
      }
      else {
        local_80 = (long)*(int *)(lVar8 + 0x28);
        Swift::Optional::typeMetadataAccessor();
        FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
        CVar11 = Swift::CheckedContinuation::typeMetadataAccessor();
        OVar6 = Swift::Optional::typeMetadataAccessor();
        lVar9 = CONCAT71(extraout_var,OVar6.value);
        lVar13 = *(long *)(lVar9 + -8);
        lVar22 = lVar17 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
        local_90[0] = lVar17;
        (**(code **)(lVar13 + 0x10))(lVar22,lVar14 + local_80,lVar9);
        lVar15 = lVar22;
        (**(code **)(*(long *)(CVar11.unknown + -8) + 0x30))(lVar22,1,CVar11.unknown);
        (**(code **)(lVar13 + 8))(lVar22,lVar9);
        if ((int)lVar15 != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a904);
          (*pcVar4)();
        }
        (**(code **)(lVar23 + 8))();
        uVar20 = *(undefined8 *)((long)alStack_78 + lVar16);
        uVar10 = *(undefined8 *)((long)alStack_78 + lVar16 + 8);
        *unaff_x20 = *(undefined1 *)((long)&local_80 + lVar16);
        *(undefined **)(unaff_x20 + 8) = puVar18;
        *(undefined8 *)(unaff_x20 + 0x10) = 0;
        *(undefined8 *)(unaff_x20 + 0x18) = uVar20;
        *(undefined8 *)(unaff_x20 + 0x20) = uVar10;
        _swift_storeEnumTagMultiPayload();
        local_90[0] = lVar8;
        lVar16 = *(long *)(lVar14 + *(int *)(lVar8 + 0x2c));
        uVar19 = *(ulong *)(lVar16 + 0x18);
        if (uVar19 == 0) {
          _swift_retain(puVar18);
          FUN_100011128(uVar20,uVar10);
          puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          _swift_retain(puVar18);
          FUN_100011128(uVar20,uVar10);
          local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_100a8f628(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a90c);
            (*pcVar4)();
          }
          uVar21 = 0;
          puVar18 = local_68;
          do {
            if (*(long *)(lVar16 + 0x18) <= (long)uVar21) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a900);
              (*pcVar4)();
            }
            lVar15 = 0;
            if (*(long *)(lVar16 + 0x10) <= (long)(uVar21 + *(long *)(lVar16 + 0x20))) {
              lVar15 = *(long *)(lVar16 + 0x10);
            }
            plVar12 = (long *)(lVar16 + 0x30 + (uVar21 + (*(long *)(lVar16 + 0x20) - lVar15)) * 0x18
                              );
            alStack_78[0] = plVar12[1];
            local_80 = *plVar12;
            uVar1 = *(ulong *)(puVar18 + 0x10);
            uVar2 = *(ulong *)(puVar18 + 0x18);
            local_68 = puVar18;
            _swift_retain(plVar12[1]);
            if (uVar2 >> 1 <= uVar1) {
              FUN_100a8f628(1 < uVar2,uVar1 + 1,1);
              puVar18 = local_68;
            }
            uVar21 = uVar21 + 1;
            *(ulong *)(puVar18 + 0x10) = uVar1 + 1;
            *(long *)(puVar18 + uVar1 * 0x10 + 0x28) = alStack_78[0];
            *(long *)(puVar18 + uVar1 * 0x10 + 0x20) = local_80;
          } while (uVar19 != uVar21);
        }
        (**(code **)(local_90[1] + 8))(lVar14,local_90[0]);
      }
    }
  }
  else {
    if (iVar7 == 2) {
      (**(code **)(lVar23 + 8))(lVar17,lVar9);
    }
    else if (iVar7 != 3) {
      *(undefined4 *)(lVar17 + -8) = 0;
      *(undefined8 *)(lVar17 + -0x10) = 0x4b6;
      SVar24.bridgeObject = (void *)0x2;
      SVar24.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar24,(StaticString)0xd000000000000022,
                 0x8000000100dbac90,0xdbac80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100a8a960);
      (*pcVar4)();
    }
    puVar18 = (undefined *)0x0;
  }
  return puVar18;
}



/* Address: 0x100a8a960 | FUN_100a8a960 */

void FUN_100a8a960(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  Optional OVar3;
  int iVar4;
  undefined7 extraout_var;
  long lVar6;
  byte *pbVar7;
  CheckedContinuation CVar8;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  undefined8 *puVar17;
  undefined1 *unaff_x20;
  undefined *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  code *pcVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  ulong uVar29;
  String SVar30;
  byte abStack_f0 [8];
  byte abStack_e8 [8];
  byte abStack_e0 [8];
  byte abStack_d8 [8];
  byte abStack_d0 [8];
  code *local_c8;
  long local_c0;
  long local_b8;
  code *local_b0;
  long *local_a8;
  code *local_a0;
  long local_98;
  undefined *local_68;
  long lVar5;
  
  lVar21 = *(long *)(param_2 + 0x10);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar3.value);
  local_b0 = *(code **)(lVar5 + -8);
  uVar12 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pbVar16 = abStack_d0 + -uVar12;
  lVar28 = (long)pbVar16 - uVar12;
  local_a0 = *(code **)(lVar21 + -8);
  uVar12 = *(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar23 = lVar28 - uVar12;
  lVar13 = lVar23 - uVar12;
  lVar6 = 0;
  local_b8 = lVar13;
  FUN_100a8cf3c(0,lVar21);
  lVar19 = *(long *)(lVar6 + -8);
  plVar14 = (long *)(lVar13 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar13 = 0;
  local_a8 = plVar14;
  local_98 = lVar6;
  FUN_100a8cf30(0,lVar21);
  lVar26 = *(long *)(lVar13 + -8);
  uVar12 = *(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar22 = (long)plVar14 - uVar12;
  pbVar24 = (byte *)(lVar22 - uVar12);
  (**(code **)(lVar26 + 0x10))(pbVar24);
  pbVar7 = pbVar24;
  _swift_getEnumCaseMultiPayload(pbVar24,lVar13);
  lVar6 = local_98;
  plVar14 = local_a8;
  iVar4 = (int)pbVar7;
  if (iVar4 < 2) {
    if (iVar4 == 0) {
      local_a0 = *(code **)(pbVar24 + 8);
      local_98 = *(long *)pbVar24;
      local_a8 = (long *)CONCAT44(local_a8._4_4_,(uint)pbVar24[0x10]);
      uVar9 = *(undefined8 *)(pbVar24 + 0x18);
      uVar11 = *(undefined8 *)(pbVar24 + 0x20);
      FUN_100011128(uVar9,uVar11);
      lVar6 = lVar21;
      thunk_FUN_100683d64(lVar21);
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar8 = Swift::CheckedContinuation::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      pbVar24 = pbVar24 + -(*(long *)(*(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8) + 0x40)
                            + 0xfU & 0xfffffffffffffff0);
      pbVar7 = pbVar24;
      (**(code **)(*(long *)(CVar8.unknown + -8) + 0x38))(pbVar24,1,1,CVar8.unknown);
      FUN_1006883ac();
      uVar20 = *(undefined8 *)pbVar7;
      _swift_retain_n(uVar20,2);
      FUN_100004550(uVar9,uVar11);
      *(long *)(pbVar24 + -0x10) = lVar21;
      pbVar24[-0x18] = 0;
      *(undefined8 *)(pbVar24 + -0x20) = uVar20;
      FUN_100a8f298(lVar22,local_98,local_a0,(ulong)local_a8 & 0xffffffff,uVar9,uVar11,lVar6,pbVar24
                    ,uVar20);
      _swift_storeEnumTagMultiPayload(lVar22,lVar13,1);
      (**(code **)(lVar26 + 0x28))(unaff_x20,lVar22,lVar13);
    }
    else {
      local_c8 = *(code **)(lVar19 + 0x20);
      (*local_c8)(local_a8,pbVar24,local_98);
      local_c0 = (long)*(int *)(lVar6 + 0x28);
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar8 = Swift::CheckedContinuation::typeMetadataAccessor();
      OVar3 = Swift::Optional::typeMetadataAccessor();
      lVar19 = CONCAT71(extraout_var_01,OVar3.value);
      lVar22 = *(long *)(lVar19 + -8);
      lVar23 = (long)pbVar24 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar22 + 0x10))(lVar23,(long)plVar14 + local_c0,lVar19);
      lVar6 = lVar23;
      (**(code **)(*(long *)(CVar8.unknown + -8) + 0x30))(lVar23,1,CVar8.unknown);
      (**(code **)(lVar22 + 8))(lVar23,lVar19);
      if ((int)lVar6 != 1) {
        pbVar24[-8] = 0;
        pbVar24[-7] = 0;
        pbVar24[-6] = 0;
        pbVar24[-5] = 0;
        uVar9 = 0x5fd;
LAB_100a8b19c:
        *(undefined8 *)(pbVar24 + -0x10) = uVar9;
        SVar30.bridgeObject = (void *)0x2;
        SVar30.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar30,(StaticString)0xd000000000000022,
                   0x8000000100dbac90,0xdbac80);
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x100a8b1d8);
        (*pcVar25)();
      }
      pcVar27 = *(code **)(lVar26 + 8);
      (*pcVar27)(unaff_x20,lVar13);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,4);
      FUN_1006883a0(0,lVar21);
      FUN_100681318(lVar28);
      pcVar25 = local_a0;
      lVar19 = lVar28;
      (**(code **)(local_a0 + 0x30))(lVar28,1,lVar21);
      lVar6 = local_b8;
      if ((int)lVar19 != 1) {
        pcVar25 = *(code **)(pcVar25 + 0x20);
        (*pcVar25)(local_b8,lVar28,lVar21);
        FUN_1006035b0(&local_68,FUN_1006035a4,0,plVar14[5],&DAT_100ef5140,lVar21,
                      PTR___type_metadata_for_Swift_Never_100eadc38,
                      PTR___type_metadata_for_Swift_Int_100eac6f8,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        lVar5 = local_98;
        lVar19 = *plVar14;
        *(bool *)((long)plVar14 + (long)*(int *)(local_98 + 0x34)) = (long)local_68 < lVar19;
        if ((long)local_68 < lVar19) {
          lVar6 = (long)*(int *)(local_98 + 0x2c);
          puVar17 = *(undefined8 **)((long)plVar14 + lVar6);
          uVar12 = puVar17[3];
          local_a0 = pcVar27;
          if (uVar12 == 0) {
            _swift_release();
            puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
            local_c0 = lVar6;
            local_b0 = pcVar25;
            FUN_100a8f628(0,uVar12 & ((long)uVar12 >> 0x3f ^ 0xffffffffffffffffU),0);
            if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x100a8b168);
              (*pcVar25)();
            }
            uVar29 = 0;
            puVar18 = local_68;
            do {
              if ((long)puVar17[3] <= (long)uVar29) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x100a8b164);
                (*pcVar25)();
              }
              lVar6 = 0;
              if ((long)puVar17[2] <= (long)(uVar29 + puVar17[4])) {
                lVar6 = puVar17[2];
              }
              puVar15 = puVar17 + (uVar29 + (puVar17[4] - lVar6)) * 3 + 6;
              uVar11 = puVar15[1];
              uVar9 = *puVar15;
              uVar1 = *(ulong *)(puVar18 + 0x10);
              uVar2 = *(ulong *)(puVar18 + 0x18);
              local_68 = puVar18;
              _swift_retain(puVar15[1]);
              if (uVar2 >> 1 <= uVar1) {
                FUN_100a8f628(1 < uVar2,uVar1 + 1,1);
                puVar18 = local_68;
              }
              uVar29 = uVar29 + 1;
              *(ulong *)(puVar18 + 0x10) = uVar1 + 1;
              *(undefined8 *)(puVar18 + uVar1 * 0x10 + 0x28) = uVar11;
              *(undefined8 *)(puVar18 + uVar1 * 0x10 + 0x20) = uVar9;
            } while (uVar12 != uVar29);
            _swift_release();
            lVar5 = local_98;
            plVar14 = local_a8;
            pcVar25 = local_b0;
            lVar6 = local_c0;
          }
          FUN_1006883ac();
          *(undefined8 *)((long)plVar14 + lVar6) = *puVar17;
          _swift_retain();
          (*local_a0)(unaff_x20,lVar13);
          (*local_c8)(unaff_x20,plVar14,lVar5);
          _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,1);
          puVar10 = &DAT_100ff7700;
          FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
          lVar6 = 0;
          _swift_getTupleTypeMetadata2(0,lVar21,puVar10,0,0);
          iVar4 = *(int *)(lVar6 + 0x30);
          (*pcVar25)(param_1,local_b8,lVar21);
          *(undefined **)((long)param_1 + (long)iVar4) = puVar18;
          uVar9 = 0;
          FUN_100a8f1e0(0,lVar21);
          uVar11 = 1;
          goto LAB_100a8b13c;
        }
        (*pcVar27)(unaff_x20,lVar13);
        (*local_c8)(unaff_x20,plVar14,lVar5);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,1);
        (*pcVar25)(param_1,lVar6,lVar21);
        goto LAB_100a8b054;
      }
      (**(code **)(local_b0 + 8))(lVar28,lVar5);
      (*pcVar27)(unaff_x20,lVar13);
      (*local_c8)(unaff_x20,plVar14,local_98);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,1);
    }
    uVar9 = 0;
    FUN_100a8f1e0(0,lVar21);
    uVar11 = 4;
  }
  else {
    if (iVar4 != 2) {
      if (iVar4 != 3) {
        pbVar24[-8] = 0;
        pbVar24[-7] = 0;
        pbVar24[-6] = 0;
        pbVar24[-5] = 0;
        uVar9 = 0x633;
        goto LAB_100a8b19c;
      }
      uVar9 = 0;
      FUN_100a8f1e0(0,lVar21);
      uVar11 = 3;
      goto LAB_100a8b13c;
    }
    local_98 = CONCAT44(local_98._4_4_,(uint)*pbVar24);
    local_68 = *(undefined **)(pbVar24 + 8);
    uVar9 = *(undefined8 *)(pbVar24 + 0x10);
    lVar6 = *(long *)(pbVar24 + 0x18);
    uVar11 = *(undefined8 *)(pbVar24 + 0x20);
    pcVar27 = *(code **)(lVar26 + 8);
    (*pcVar27)(unaff_x20,lVar13);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,4);
    FUN_1006883a0(0,lVar21);
    FUN_100681318(pbVar16);
    pcVar25 = local_a0;
    pbVar7 = pbVar16;
    (**(code **)(local_a0 + 0x30))(pbVar16,1,lVar21);
    if ((int)pbVar7 == 1) {
      _swift_release(local_68);
      (**(code **)(local_b0 + 8))(pbVar16,lVar5);
      (*pcVar27)(unaff_x20,lVar13);
      *unaff_x20 = (char)local_98;
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,3);
      uVar20 = 0;
      if (lVar6 != 0) {
        uVar20 = uVar11;
      }
      *param_1 = uVar9;
      param_1[1] = lVar6;
      param_1[2] = uVar20;
      uVar9 = 0;
      FUN_100a8f1e0(0,lVar21);
      uVar11 = 2;
      goto LAB_100a8b13c;
    }
    pcVar25 = *(code **)(pcVar25 + 0x20);
    (*pcVar25)(lVar23,pbVar16,lVar21);
    (*pcVar27)(unaff_x20,lVar13);
    *unaff_x20 = (char)local_98;
    *(undefined **)(unaff_x20 + 8) = local_68;
    *(undefined8 *)(unaff_x20 + 0x10) = uVar9;
    *(long *)(unaff_x20 + 0x18) = lVar6;
    *(undefined8 *)(unaff_x20 + 0x20) = uVar11;
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar13,2);
    (*pcVar25)(param_1,lVar23,lVar21);
LAB_100a8b054:
    uVar9 = 0;
    FUN_100a8f1e0(0,lVar21);
    uVar11 = 0;
  }
LAB_100a8b13c:
  _swift_storeEnumTagMultiPayload(param_1,uVar9,uVar11);
  return;
}



/* Address: 0x100a8b1d8 | FUN_100a8b1d8 */

void FUN_100a8b1d8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  _swift_task_switch(FUN_100a8b1f8,0,0);
  return;
}



/* Address: 0x100a8b1f8 | FUN_100a8b1f8 */

void FUN_100a8b1f8(void)

{
  Optional OVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005fc418;
  FUN_100a898e8(*(undefined8 *)(unaff_x22 + 0x10),&DAT_100c92ed8,*(undefined8 *)(unaff_x22 + 0x18),
                FUN_100a8f290,*(undefined8 *)(unaff_x22 + 0x18),0,0,OVar1.value);
  return;
}



/* Address: 0x100a8b294 | FUN_100a8b294 */

void FUN_100a8b294(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 **)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = *param_2;
  _swift_task_switch(FUN_100a8b2b4,0,0);
  return;
}



/* Address: 0x100a8b2b4 | FUN_100a8b2b4 */

void FUN_100a8b2b4(void)

{
  Optional OVar1;
  long *plVar2;
  long unaff_x22;
  
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc418;
  FUN_100a897a0(*(undefined8 *)(unaff_x22 + 0x10),0,0,0x4e646e6570737573,0xed00002928747865,
                FUN_100a8f96c,*(undefined8 *)(unaff_x22 + 0x18),OVar1.value);
  return;
}



/* Address: 0x100a8b364 | FUN_100a8b364 */

void FUN_100a8b364(undefined8 param_1,long *param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  CheckedContinuation CVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long alStack_c0 [5];
  long local_98;
  long local_90;
  long local_80;
  undefined1 local_78;
  long local_70;
  undefined8 uStack_68;
  undefined7 extraout_var_00;
  
  lVar13 = *(long *)(*param_2 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_98 = (long)alStack_c0 -
             (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0);
  local_90 = *(long *)(lVar13 + -8);
  uVar8 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  alStack_c0[4] = local_98 - uVar8;
  lVar16 = alStack_c0[4] - uVar8;
  lVar2 = 0xff;
  FUN_100a8f974(0xff,lVar13);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var_00,OVar1.value);
  lVar11 = *(long *)(lVar3 + -8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar16 - uVar8;
  lVar12 = lVar14 - uVar8;
  lVar15 = param_2[2];
  uVar4 = 0;
  local_70 = lVar13;
  uStack_68 = param_1;
  FUN_100a8d984(0,lVar13);
  FUN_10066ed6c(lVar12,FUN_100a8f980,&local_80,lVar15,uVar4,lVar3);
  (**(code **)(lVar11 + 0x10))(lVar14,lVar12,lVar3);
  lVar15 = lVar14;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar14,1,lVar2);
  if ((int)lVar15 == 1) {
    (**(code **)(lVar11 + 8))(lVar12,lVar3);
    return;
  }
  lVar15 = lVar14;
  alStack_c0[3] = lVar11;
  _swift_getEnumCaseMultiPayload(lVar14,lVar2);
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  iVar10 = (int)lVar15;
  if (iVar10 < 2) {
    if (iVar10 != 0) {
      CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
      puVar6 = &DAT_100ff7700;
      FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
      lVar15 = 0;
      _swift_getTupleTypeMetadata3(0,CVar5.unknown,lVar13,puVar6,0,0);
      alStack_c0[2] = lVar12;
      iVar10 = *(int *)(lVar15 + 0x30);
      lVar16 = *(long *)(lVar14 + *(int *)(lVar15 + 0x40));
      alStack_c0[1] = *(long *)(CVar5.unknown + -8);
      lVar18 = lVar12 - (*(long *)(alStack_c0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(alStack_c0[1] + 0x20))(lVar18,lVar14,CVar5.unknown);
      lVar11 = local_90;
      lVar15 = alStack_c0[4];
      (**(code **)(local_90 + 0x20))(alStack_c0[4],lVar14 + iVar10,lVar13);
      lVar2 = local_98;
      (**(code **)(lVar11 + 0x10))(local_98,lVar15,lVar13);
      (**(code **)(lVar11 + 0x38))(lVar2,0,1,lVar13);
      Swift::CheckedContinuation::resume(lVar2,CVar5.unknown);
      lVar15 = *(long *)(lVar16 + 0x10);
      local_98 = lVar16;
      if (lVar15 != 0) {
        puVar17 = (undefined8 *)(lVar16 + 0x28);
        do {
          pcVar9 = (code *)puVar17[-1];
          uVar4 = *puVar17;
          local_80 = 0;
          local_78 = 0;
          _swift_retain(uVar4);
          (*pcVar9)(&local_80);
          _swift_release(uVar4);
          puVar17 = puVar17 + 2;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      _swift_bridgeObjectRelease(local_98);
      (**(code **)(lVar11 + 8))(alStack_c0[4],lVar13);
      (**(code **)(alStack_c0[1] + 8))(lVar18,CVar5.unknown);
      (**(code **)(alStack_c0[3] + 8))(lVar12,lVar3);
      return;
    }
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar15 = 0;
    _swift_getTupleTypeMetadata2(0,CVar5.unknown,lVar13,0,0);
    iVar10 = *(int *)(lVar15 + 0x30);
    lVar18 = *(long *)(CVar5.unknown + -8);
    lVar2 = lVar12 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
    alStack_c0[4] = lVar12;
    (**(code **)(lVar18 + 0x20))(lVar2,lVar14,CVar5.unknown);
    lVar11 = local_90;
    (**(code **)(local_90 + 0x20))(lVar16,lVar14 + iVar10,lVar13);
    lVar15 = local_98;
    (**(code **)(lVar11 + 0x10))(local_98,lVar16,lVar13);
    (**(code **)(lVar11 + 0x38))(lVar15,0,1,lVar13);
    Swift::CheckedContinuation::resume(lVar15,CVar5.unknown);
    (**(code **)(lVar11 + 8))(lVar16,lVar13);
    pcVar9 = *(code **)(lVar18 + 8);
    goto LAB_100a8b918;
  }
  if (iVar10 != 2) {
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar11 = *(long *)(CVar5.unknown + -8);
    lVar2 = lVar12 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar11 + 0x20))(lVar2,lVar14,CVar5.unknown);
    lVar15 = local_98;
    (**(code **)(local_90 + 0x38))(local_98,1,1,lVar13);
    Swift::CheckedContinuation::resume(lVar15,CVar5.unknown);
    (**(code **)(lVar11 + 8))(lVar2,CVar5.unknown);
    (**(code **)(alStack_c0[3] + 8))(lVar12,lVar3);
    return;
  }
  CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
  puVar6 = &DAT_100ff6ed8;
  FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
  puVar7 = &DAT_100ff7710;
  FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
  lVar15 = 0;
  _swift_getTupleTypeMetadata3(0,CVar5.unknown,puVar6,puVar7,0,0);
  alStack_c0[4] = lVar12;
  lVar11 = *(long *)(lVar14 + *(int *)(lVar15 + 0x30));
  puVar17 = (undefined8 *)(lVar14 + *(int *)(lVar15 + 0x40));
  pcVar9 = (code *)*puVar17;
  alStack_c0[2] = puVar17[1];
  lVar16 = *(long *)(CVar5.unknown + -8);
  lVar2 = lVar12 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar16 + 0x20))(lVar2,lVar14,CVar5.unknown);
  lVar15 = local_98;
  if (lVar11 == 0) {
    (**(code **)(local_90 + 0x38))(local_98,1,1,lVar13);
    Swift::CheckedContinuation::resume(lVar15,CVar5.unknown);
    if (pcVar9 == (code *)0x0) goto LAB_100a8b908;
LAB_100a8b6a4:
    lVar15 = alStack_c0[2];
    _swift_retain(alStack_c0[2]);
    (*pcVar9)();
    FUN_100004550(pcVar9,lVar15);
    _swift_errorRelease(lVar11);
    FUN_100004550(pcVar9,lVar15);
  }
  else {
    local_80 = lVar11;
    _swift_errorRetain(lVar11);
    Swift::CheckedContinuation::resume(&local_80,CVar5.unknown);
    if (pcVar9 != (code *)0x0) goto LAB_100a8b6a4;
LAB_100a8b908:
    _swift_errorRelease(lVar11);
  }
  pcVar9 = *(code **)(lVar16 + 8);
LAB_100a8b918:
  (*pcVar9)(lVar2,CVar5.unknown);
  (**(code **)(alStack_c0[3] + 8))(lVar12,lVar3);
  return;
}



/* Address: 0x100a8b95c | FUN_100a8b95c */

void FUN_100a8b95c(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  int iVar5;
  long *plVar6;
  Optional OVar7;
  int iVar8;
  undefined7 extraout_var;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  CheckedContinuation CVar12;
  undefined *puVar13;
  long lVar14;
  undefined7 extraout_var_00;
  undefined *puVar15;
  StaticString file;
  ulong uVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined1 *unaff_x20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  code *pcVar26;
  long lVar27;
  long lVar28;
  code *pcVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  String SVar33;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long alStack_f0 [4];
  long *local_d0 [2];
  long local_c0;
  long local_b8;
  code *local_b0;
  code *local_a8;
  undefined *local_68;
  
  lVar21 = *(long *)(param_3 + 0x10);
  OVar7 = Swift::Optional::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var,OVar7.value);
  local_b0 = *(code **)(lVar14 + -8);
  uVar16 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar23 = (long)alStack_f0 - uVar16;
  lVar19 = lVar23 - uVar16;
  local_a8 = *(code **)(lVar21 + -8);
  uVar16 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b8 = lVar19 - uVar16;
  lVar27 = local_b8 - uVar16;
  lVar9 = 0;
  FUN_100a8cf3c(0,lVar21);
  lVar24 = *(long *)(lVar9 + -8);
  plVar25 = (long *)(lVar27 - (*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = 0;
  FUN_100a8cf30(0,lVar21);
  lVar28 = *(long *)(lVar10 + -8);
  puVar22 = (undefined1 *)((long)plVar25 - (*(long *)(lVar28 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar28 + 0x10))(puVar22);
  puVar11 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,lVar10);
  iVar8 = (int)puVar11;
  if (iVar8 < 2) {
    alStack_f0[2] = lVar27;
    local_d0[1] = plVar25;
    local_c0 = lVar24;
    local_b8 = lVar9;
    if (iVar8 != 1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100a8c320);
      (*pcVar17)();
    }
    (**(code **)(lVar24 + 0x20))(plVar25,puVar22,lVar9);
    iVar8 = *(int *)(lVar9 + 0x28);
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar12 = Swift::CheckedContinuation::typeMetadataAccessor();
    OVar7 = Swift::Optional::typeMetadataAccessor();
    lVar24 = CONCAT71(extraout_var_00,OVar7.value);
    lVar23 = *(long *)(lVar24 + -8);
    lVar27 = (long)puVar22 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
    alStack_f0[1] = (long)iVar8;
    (**(code **)(lVar23 + 0x10))(lVar27,(long)plVar25 + (long)iVar8,lVar24);
    alStack_f0[3] = *(long *)(CVar12.unknown + -8);
    lVar9 = lVar27;
    local_d0[0] = (long *)CVar12;
    (**(code **)(alStack_f0[3] + 0x30))(lVar27,1,CVar12.unknown);
    pcVar17 = *(code **)(lVar23 + 8);
    (*pcVar17)(lVar27,lVar24);
    if ((int)lVar9 != 1) {
      pcVar1 = "This should never happen since we only allow a single Iterator to be created";
      *(undefined4 *)(puVar22 + -8) = 0;
      *(undefined8 *)(puVar22 + -0x10) = 0x656;
      file.unknown = (undefined *)0xd00000000000004c;
LAB_100a8c3a8:
      SVar33.bridgeObject = (void *)0x2;
      SVar33.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar33,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                 0xdbac80);
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100a8c3bc);
      (*pcVar17)();
    }
    pcVar26 = *(code **)(lVar28 + 8);
    (*pcVar26)(unaff_x20,lVar10);
    _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,4);
    FUN_1006883a0(0,lVar21);
    FUN_100681318(lVar19);
    pcVar29 = local_a8;
    lVar27 = lVar19;
    (**(code **)(local_a8 + 0x30))(lVar19,1,lVar21);
    lVar9 = alStack_f0[2];
    if ((int)lVar27 == 1) {
      (**(code **)(local_b0 + 8))(lVar19,lVar14);
      lVar14 = alStack_f0[1];
      (*pcVar17)((long)plVar25 + alStack_f0[1],lVar24);
      plVar6 = local_d0[0];
      lVar9 = alStack_f0[3];
      (**(code **)(alStack_f0[3] + 0x10))((long)plVar25 + lVar14,param_2,local_d0[0]);
      (**(code **)(lVar9 + 0x38))((long)plVar25 + lVar14,0,1,plVar6);
      (*pcVar26)(unaff_x20,lVar10);
      lVar19 = local_b8;
      lVar14 = local_c0;
      (**(code **)(local_c0 + 0x10))(unaff_x20,plVar25,local_b8);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,1);
      lVar9 = 0;
      FUN_100a8f974(0,lVar21);
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,1,1,lVar9);
      pcVar17 = *(code **)(lVar14 + 8);
    }
    else {
      pcVar17 = *(code **)(pcVar29 + 0x20);
      local_b0 = pcVar26;
      (*pcVar17)(alStack_f0[2],lVar19,lVar21);
      FUN_1006035b0(&local_68,FUN_1006035a4,0,plVar25[5],&DAT_100ef5140,lVar21,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      lVar19 = local_b8;
      lVar14 = local_c0;
      lVar24 = *plVar25;
      *(bool *)((long)plVar25 + (long)*(int *)(local_b8 + 0x34)) = (long)local_68 < lVar24;
      if ((long)local_68 < lVar24) {
        alStack_f0[1] = (long)*(int *)(local_b8 + 0x2c);
        puVar20 = *(undefined8 **)((long)plVar25 + alStack_f0[1]);
        uVar16 = puVar20[3];
        local_a8 = pcVar17;
        if (uVar16 == 0) {
          _swift_release();
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_100a8f628(0,uVar16 & ((long)uVar16 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100a8c31c);
            (*pcVar17)();
          }
          uVar30 = 0;
          puVar13 = local_68;
          do {
            if ((long)puVar20[3] <= (long)uVar30) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100a8c318);
              (*pcVar17)();
            }
            lVar14 = 0;
            if ((long)puVar20[2] <= (long)(uVar30 + puVar20[4])) {
              lVar14 = puVar20[2];
            }
            puVar18 = puVar20 + (uVar30 + (puVar20[4] - lVar14)) * 3 + 6;
            uVar32 = puVar18[1];
            uVar31 = *puVar18;
            uVar2 = *(ulong *)(puVar13 + 0x10);
            uVar3 = *(ulong *)(puVar13 + 0x18);
            local_68 = puVar13;
            _swift_retain(puVar18[1]);
            if (uVar3 >> 1 <= uVar2) {
              FUN_100a8f628(1 < uVar3,uVar2 + 1,1);
              puVar13 = local_68;
            }
            uVar30 = uVar30 + 1;
            *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
            *(undefined8 *)(puVar13 + uVar2 * 0x10 + 0x28) = uVar32;
            *(undefined8 *)(puVar13 + uVar2 * 0x10 + 0x20) = uVar31;
          } while (uVar16 != uVar30);
          _swift_release();
          lVar19 = local_b8;
          lVar14 = local_c0;
          plVar25 = local_d0[1];
        }
        FUN_1006883ac();
        *(undefined8 *)((long)plVar25 + alStack_f0[1]) = *puVar20;
        _swift_retain();
        (*local_b0)(unaff_x20,lVar10);
        (**(code **)(lVar14 + 0x10))(unaff_x20,plVar25,lVar19);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,1);
        puVar15 = &DAT_100ff7700;
        FUN_1000f8b08(&DAT_100ff7700,&DAT_100c92ec8);
        plVar6 = local_d0[0];
        lVar10 = 0;
        _swift_getTupleTypeMetadata3(0,local_d0[0],lVar21,puVar15,0,0);
        iVar8 = *(int *)(lVar10 + 0x30);
        iVar5 = *(int *)(lVar10 + 0x40);
        (**(code **)(alStack_f0[3] + 0x10))(param_1,param_2,plVar6);
        (*local_a8)(param_1 + iVar8,lVar9,lVar21);
        *(undefined **)(param_1 + iVar5) = puVar13;
        lVar9 = 0;
        FUN_100a8f974(0,lVar21);
        _swift_storeEnumTagMultiPayload(param_1,lVar9,1);
        (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
        pcVar17 = *(code **)(lVar14 + 8);
      }
      else {
        (*local_b0)(unaff_x20,lVar10);
        lVar14 = local_c0;
        (**(code **)(local_c0 + 0x10))(unaff_x20,plVar25,lVar19);
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,1);
        plVar6 = local_d0[0];
        lVar10 = 0;
        _swift_getTupleTypeMetadata2(0,local_d0[0],lVar21,0,0);
        iVar8 = *(int *)(lVar10 + 0x30);
        (**(code **)(alStack_f0[3] + 0x10))(param_1,param_2,plVar6);
        (*pcVar17)(param_1 + iVar8,lVar9,lVar21);
        lVar9 = 0;
        FUN_100a8f974(0,lVar21);
        _swift_storeEnumTagMultiPayload(param_1,lVar9,0);
        (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
        pcVar17 = *(code **)(lVar14 + 8);
      }
    }
    (*pcVar17)(plVar25,lVar19);
  }
  else {
    if (iVar8 == 2) {
      uVar4 = *puVar22;
      local_68 = *(undefined **)(puVar22 + 8);
      local_c0 = *(long *)(puVar22 + 0x10);
      lVar9 = *(long *)(puVar22 + 0x18);
      lVar19 = *(long *)(puVar22 + 0x20);
      pcVar29 = *(code **)(lVar28 + 8);
      (*pcVar29)(unaff_x20,lVar10);
      _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,4);
      FUN_1006883a0(0,lVar21);
      FUN_100681318(lVar23);
      pcVar17 = local_a8;
      lVar27 = lVar23;
      (**(code **)(local_a8 + 0x30))(lVar23,1,lVar21);
      lVar24 = local_b8;
      if ((int)lVar27 == 1) {
        _swift_release(local_68);
        (**(code **)(local_b0 + 8))(lVar23,lVar14);
        (*pcVar29)(unaff_x20,lVar10);
        *unaff_x20 = uVar4;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,3);
        FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
        CVar12 = Swift::CheckedContinuation::typeMetadataAccessor();
        puVar13 = &DAT_100ff6ed8;
        FUN_1000f8b08(&DAT_100ff6ed8,&DAT_100c91fd8);
        puVar15 = &DAT_100ff7710;
        FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
        lVar14 = 0;
        _swift_getTupleTypeMetadata3(0,CVar12.unknown,puVar13,puVar15,0,0);
        iVar8 = *(int *)(lVar14 + 0x30);
        plVar25 = (long *)(param_1 + *(int *)(lVar14 + 0x40));
        (**(code **)(*(long *)(CVar12.unknown + -8) + 0x10))(param_1,param_2,CVar12.unknown);
        *(long *)(param_1 + iVar8) = local_c0;
        lVar14 = 0;
        if (lVar9 != 0) {
          lVar14 = lVar19;
        }
        *plVar25 = lVar9;
        plVar25[1] = lVar14;
        lVar14 = 0;
        FUN_100a8f974(0,lVar21);
        _swift_storeEnumTagMultiPayload(param_1,lVar14,2);
        pcVar17 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
      }
      else {
        pcVar17 = *(code **)(pcVar17 + 0x20);
        (*pcVar17)(local_b8,lVar23,lVar21);
        (*pcVar29)(unaff_x20,lVar10);
        *unaff_x20 = uVar4;
        *(undefined **)(unaff_x20 + 8) = local_68;
        *(long *)(unaff_x20 + 0x10) = local_c0;
        *(long *)(unaff_x20 + 0x18) = lVar9;
        *(long *)(unaff_x20 + 0x20) = lVar19;
        _swift_storeEnumTagMultiPayload(unaff_x20,lVar10,2);
        FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
        CVar12 = Swift::CheckedContinuation::typeMetadataAccessor();
        lVar14 = 0;
        _swift_getTupleTypeMetadata2(0,CVar12.unknown,lVar21,0,0);
        iVar8 = *(int *)(lVar14 + 0x30);
        (**(code **)(*(long *)(CVar12.unknown + -8) + 0x10))(param_1,param_2,CVar12.unknown);
        (*pcVar17)(param_1 + iVar8,lVar24,lVar21);
        lVar14 = 0;
        FUN_100a8f974(0,lVar21);
        _swift_storeEnumTagMultiPayload(param_1,lVar14,0);
        pcVar17 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
      }
    }
    else {
      if (iVar8 != 3) {
        pcVar1 = "AsyncStream internal inconsistency";
        *(undefined4 *)(puVar22 + -8) = 0;
        *(undefined8 *)(puVar22 + -0x10) = 0x694;
        file.unknown = (undefined *)0xd000000000000022;
        goto LAB_100a8c3a8;
      }
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar12 = Swift::CheckedContinuation::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar12.unknown + -8) + 0x10))(param_1,param_2,CVar12.unknown);
      lVar14 = 0;
      FUN_100a8f974(0,lVar21);
      _swift_storeEnumTagMultiPayload(param_1,lVar14,3);
      pcVar17 = *(code **)(*(long *)(lVar14 + -8) + 0x38);
    }
    (*pcVar17)(param_1,0,1,lVar14);
  }
  return;
}



/* Address: 0x100a8c3bc | FUN_100a8c3bc */

void FUN_100a8c3bc(long *param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  undefined8 uVar4;
  long *plVar5;
  CheckedContinuation CVar6;
  undefined *puVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  ulong uVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long alStack_b0 [2];
  code *local_a0;
  long local_98;
  long local_90;
  undefined *local_80;
  undefined1 local_78;
  undefined8 local_70;
  long lVar3;
  
  uVar16 = *(undefined8 *)(*param_1 + 0x50);
  lVar2 = 0xff;
  FUN_100a8f37c(0xff,uVar16);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  lVar18 = *(long *)(lVar3 + -8);
  uVar10 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = -uVar10;
  plVar12 = (long *)((long)alStack_b0 + lVar17);
  lVar15 = (long)plVar12 - uVar10;
  lVar13 = param_1[2];
  uVar4 = 0;
  local_70 = uVar16;
  FUN_100a8d984(0,uVar16);
  FUN_10066ed6c(lVar15,FUN_100a8f388,&local_80,lVar13,uVar4,lVar3);
  (**(code **)(lVar18 + 0x10))(plVar12,lVar15,lVar3);
  plVar5 = plVar12;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(plVar12,1,lVar2);
  if ((int)plVar5 == 1) {
    pcVar11 = *(code **)(lVar18 + 8);
  }
  else {
    plVar5 = plVar12;
    _swift_getEnumCaseMultiPayload(plVar12,lVar2);
    if ((int)plVar5 != 1) {
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar6 = Swift::CheckedContinuation::typeMetadataAccessor();
      puVar7 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,CVar6.unknown,puVar7,0,0);
      puVar14 = (undefined8 *)((long)plVar12 + (long)*(int *)(lVar17 + 0x30));
      pcVar11 = (code *)*puVar14;
      uVar4 = puVar14[1];
      lVar2 = *(long *)(CVar6.unknown + -8);
      lVar17 = lVar15 - (*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar2 + 0x20))(lVar17,plVar12,CVar6.unknown);
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      CVar9 = CVar8;
      FUN_100a5784c();
      _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
      Swift::CancellationError::init();
      local_80 = CVar8.unknown;
      Swift::CheckedContinuation::resume(&local_80,CVar6.unknown);
      if (pcVar11 != (code *)0x0) {
        _swift_retain(uVar4);
        (*pcVar11)();
        FUN_100004550(pcVar11,uVar4);
        FUN_100004550(pcVar11,uVar4);
      }
      (**(code **)(lVar2 + 8))(lVar17,CVar6.unknown);
      (**(code **)(lVar18 + 8))(lVar15,lVar3);
      return;
    }
    local_90 = *plVar12;
    local_a0 = *(code **)((long)alStack_b0 + lVar17 + 8);
    local_98 = lVar18;
    alStack_b0[1] = *(undefined8 *)((long)&local_a0 + lVar17);
    lVar17 = *(long *)(local_90 + 0x10);
    if (lVar17 != 0) {
      FUN_100a8f3d0();
      puVar14 = (undefined8 *)(local_90 + 0x28);
      do {
        pcVar11 = (code *)puVar14[-1];
        uVar4 = *puVar14;
        puVar7 = &DAT_100f2ed28;
        _swift_allocError(&DAT_100f2ed28,plVar5,0,0);
        local_78 = 1;
        local_80 = puVar7;
        _swift_retain(uVar4);
        (*pcVar11)(&local_80);
        _swift_release(uVar4);
        _swift_errorRelease(puVar7);
        puVar14 = puVar14 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    _swift_bridgeObjectRelease(local_90);
    pcVar11 = local_a0;
    lVar17 = alStack_b0[1];
    if (local_a0 != (code *)0x0) {
      _swift_retain(alStack_b0[1]);
      (*pcVar11)();
      FUN_100004550(pcVar11,lVar17);
      FUN_100004550(pcVar11,lVar17);
    }
    pcVar11 = *(code **)(local_98 + 8);
  }
  (*pcVar11)(lVar15,lVar3);
  return;
}



/* Address: 0x100a8c6f0 | FUN_100a8c6f0 */

void FUN_100a8c6f0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  Optional OVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  CheckedContinuation CVar11;
  undefined7 extraout_var;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  undefined1 *unaff_x20;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  String SVar24;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  long local_a0 [2];
  undefined8 *local_90;
  long local_88 [4];
  undefined *local_68;
  
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  lVar9 = 0;
  FUN_100a8cf3c(0,uVar19);
  lVar17 = *(long *)(lVar9 + -8);
  lVar12 = -(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)local_a0 + lVar12;
  lVar10 = 0;
  FUN_100a8cf30(0,uVar19);
  lVar16 = *(long *)(lVar10 + -8);
  lVar20 = lVar18 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar16 + 0x10))(lVar20);
  lVar14 = lVar20;
  _swift_getEnumCaseMultiPayload(lVar20,lVar10);
  iVar8 = (int)lVar14;
  if (iVar8 < 2) {
    local_90 = param_1;
    if (iVar8 != 1) {
      *(undefined4 *)(lVar20 + -8) = 0;
      uVar19 = 0x6a7;
LAB_100a8cbd0:
      *(undefined8 *)(lVar20 + -0x10) = uVar19;
      SVar24.bridgeObject = (void *)0x2;
      SVar24.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar24,(StaticString)0xd000000000000022,
                 0x8000000100dbac90,0xdbac80);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8cc0c);
      (*pcVar6)();
    }
    local_a0[1] = lVar17;
    (**(code **)(lVar17 + 0x20))(lVar18,lVar20,lVar9);
    (**(code **)(lVar16 + 8))();
    *unaff_x20 = *(undefined1 *)((long)&local_90 + lVar12);
    _swift_storeEnumTagMultiPayload();
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar11 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar16 = *(long *)(CVar11.unknown + -8);
    lVar17 = lVar20 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
    iVar8 = *(int *)(lVar9 + 0x28);
    local_88[1] = lVar20;
    OVar7 = Swift::Optional::typeMetadataAccessor();
    lVar10 = CONCAT71(extraout_var,OVar7.value);
    lVar22 = *(long *)(lVar10 + -8);
    lVar20 = lVar17 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
    local_88[0] = lVar17;
    (**(code **)(lVar22 + 0x10))(lVar20,lVar18 + iVar8,lVar10);
    lVar14 = lVar20;
    (**(code **)(lVar16 + 0x30))(lVar20,1,CVar11.unknown);
    if ((int)lVar14 == 1) {
      (**(code **)(lVar22 + 8))(lVar20,lVar10);
      lVar12 = *(long *)(lVar18 + *(int *)(lVar9 + 0x2c));
      uVar21 = *(ulong *)(lVar12 + 0x18);
      puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar21 != 0) {
        local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
        local_a0[0] = lVar18;
        local_88[0] = lVar9;
        FUN_100a8f628(0,uVar21 & ((long)uVar21 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8cb9c);
          (*pcVar6)();
        }
        uVar23 = 0;
        puVar13 = local_68;
        do {
          if (*(long *)(lVar12 + 0x18) <= (long)uVar23) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8cb94);
            (*pcVar6)();
          }
          lVar14 = 0;
          if (*(long *)(lVar12 + 0x10) <= (long)(uVar23 + *(long *)(lVar12 + 0x20))) {
            lVar14 = *(long *)(lVar12 + 0x10);
          }
          plVar15 = (long *)(lVar12 + 0x30 + (uVar23 + (*(long *)(lVar12 + 0x20) - lVar14)) * 0x18);
          local_88[2] = plVar15[1];
          local_88[1] = *plVar15;
          uVar2 = *(ulong *)(puVar13 + 0x10);
          uVar3 = *(ulong *)(puVar13 + 0x18);
          local_68 = puVar13;
          _swift_retain(plVar15[1]);
          if (uVar3 >> 1 <= uVar2) {
            FUN_100a8f628(1 < uVar3,uVar2 + 1,1);
            puVar13 = local_68;
          }
          uVar23 = uVar23 + 1;
          *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
          *(long *)(puVar13 + uVar2 * 0x10 + 0x28) = local_88[2];
          *(long *)(puVar13 + uVar2 * 0x10 + 0x20) = local_88[1];
          lVar9 = local_88[0];
          lVar18 = local_a0[0];
        } while (uVar21 != uVar23);
      }
      puVar5 = local_90;
      lVar12 = *(long *)(lVar18 + 0x18);
      uVar4 = *(undefined8 *)(lVar18 + 0x20);
      uVar1 = 0;
      if (lVar12 != 0) {
        uVar1 = uVar4;
      }
      *local_90 = puVar13;
      local_90[1] = lVar12;
      local_90[2] = uVar1;
      lVar14 = 0;
      FUN_100a8f37c(0,uVar19);
      _swift_storeEnumTagMultiPayload(puVar5,lVar14,1);
      (**(code **)(*(long *)(lVar14 + -8) + 0x38))(puVar5,0,1,lVar14);
      FUN_100011128(lVar12,uVar4);
      (**(code **)(local_a0[1] + 8))(lVar18,lVar9);
    }
    else {
      pcVar6 = *(code **)(lVar16 + 0x20);
      (*pcVar6)(lVar17,lVar20,CVar11.unknown);
      if (*(long *)(*(long *)(lVar18 + *(int *)(lVar9 + 0x2c)) + 0x18) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100a8cb98);
        (*pcVar6)();
      }
      puVar13 = &DAT_100ff7710;
      FUN_1000f8b08(&DAT_100ff7710,&DAT_100c92ef0);
      lVar14 = 0;
      _swift_getTupleTypeMetadata2(0,CVar11.unknown,puVar13,0,0);
      puVar5 = local_90;
      plVar15 = (long *)((long)local_90 + (long)*(int *)(lVar14 + 0x30));
      (*pcVar6)(local_90,lVar17,CVar11.unknown);
      lVar14 = *(long *)((long)local_88 + lVar12);
      lVar10 = *(long *)((long)local_88 + lVar12 + 8);
      lVar12 = 0;
      if (lVar14 != 0) {
        lVar12 = lVar10;
      }
      *plVar15 = lVar14;
      plVar15[1] = lVar12;
      lVar12 = 0;
      FUN_100a8f37c(0,uVar19);
      _swift_storeEnumTagMultiPayload(puVar5,lVar12,0);
      (**(code **)(*(long *)(lVar12 + -8) + 0x38))(puVar5,0,1,lVar12);
      FUN_100011128(lVar14,lVar10);
      (**(code **)(local_a0[1] + 8))(lVar18,lVar9);
    }
  }
  else {
    if (iVar8 == 2) {
      (**(code **)(lVar16 + 8))(lVar20,lVar10);
    }
    else if (iVar8 != 3) {
      *(undefined4 *)(lVar20 + -8) = 0;
      uVar19 = 0x6c0;
      goto LAB_100a8cbd0;
    }
    lVar12 = 0;
    FUN_100a8f37c(0,uVar19);
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(param_1,1,1,lVar12);
  }
  return;
}



/* Address: 0x100a8cc0c | FUN_100a8cc0c */

void FUN_100a8cc0c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8cc18 | FUN_100a8cc18 */

void FUN_100a8cc18(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100a8cf30();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
  }
  return;
}



/* Address: 0x100a8cc90 | FUN_100a8cc90 */

long * FUN_100a8cc90(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  CheckedContinuation CVar7;
  undefined1 *puVar8;
  undefined7 extraout_var;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar10 = (ulong)uVar1 & 0xff;
    _swift_retain();
    return (long *)(lVar4 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
  }
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  lVar4 = 0;
  FUN_100a8cf30(0,uVar11);
  plVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar4);
  iVar3 = (int)plVar5;
  if (iVar3 == 2) {
    *(char *)param_1 = (char)*param_2;
    lVar9 = param_2[2];
    param_1[1] = param_2[1];
    _swift_retain();
    _swift_errorRetain(lVar9);
    param_1[2] = lVar9;
    lVar9 = param_2[3];
    if (lVar9 == 0) {
      lVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar9;
    }
    else {
      lVar6 = param_2[4];
      param_1[3] = lVar9;
      param_1[4] = lVar6;
      _swift_retain();
    }
    uVar11 = 2;
  }
  else if (iVar3 == 1) {
    lVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar9;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar9 = param_2[3];
    if (lVar9 == 0) {
      lVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar9;
    }
    else {
      lVar6 = param_2[4];
      param_1[3] = lVar9;
      param_1[4] = lVar6;
      _swift_retain();
    }
    lVar6 = param_2[5];
    param_1[5] = lVar6;
    lVar9 = 0;
    FUN_100a8cf3c(0,uVar11);
    lVar12 = (long)*(int *)(lVar9 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    _swift_retain(lVar6);
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar7 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar6 = *(long *)(CVar7.unknown + -8);
    puVar8 = (undefined1 *)((long)param_2 + lVar12);
    (**(code **)(lVar6 + 0x30))(puVar8,1,CVar7.unknown);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar6 + 0x10))
                ((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                 CVar7.unknown);
      (**(code **)(lVar6 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,CVar7.unknown);
    }
    else {
      OVar2 = Swift::Optional::typeMetadataAccessor();
      _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x2c));
    uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30)) = uVar11;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar9 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar9 + 0x34));
    _swift_retain();
    _swift_retain(uVar11);
    uVar11 = 1;
  }
  else {
    if (iVar3 != 0) {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar4 + -8) + 0x40));
      goto LAB_100a8cf08;
    }
    lVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar9;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar9 = param_2[3];
    if (lVar9 == 0) {
      lVar9 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar9;
    }
    else {
      lVar6 = param_2[4];
      param_1[3] = lVar9;
      param_1[4] = lVar6;
      _swift_retain();
    }
    uVar11 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,lVar4,uVar11);
LAB_100a8cf08:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100a8cf30 | FUN_100a8cf30 */

void FUN_100a8cf30(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8cf3c | FUN_100a8cf3c */

void FUN_100a8cf3c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8cf48 | FUN_100a8cf48 */

void FUN_100a8cf48(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  CheckedContinuation CVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = 0;
  FUN_100a8cf30(0,uVar6);
  lVar5 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  iVar1 = (int)lVar5;
  if (iVar1 == 2) {
    _swift_release(*(undefined8 *)(param_1 + 8));
    _swift_errorRelease(*(undefined8 *)(param_1 + 0x10));
    lVar5 = *(long *)(param_1 + 0x18);
  }
  else {
    if (iVar1 == 1) {
      if (*(long *)(param_1 + 0x18) != 0) {
        _swift_release(*(undefined8 *)(param_1 + 0x20));
      }
      _swift_release(*(undefined8 *)(param_1 + 0x28));
      lVar3 = 0;
      FUN_100a8cf3c(0,uVar6);
      iVar1 = *(int *)(lVar3 + 0x28);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar4 = Swift::CheckedContinuation::typeMetadataAccessor();
      lVar7 = *(long *)(CVar4.unknown + -8);
      lVar5 = param_1 + iVar1;
      (**(code **)(lVar7 + 0x30))(lVar5,1,CVar4.unknown);
      if ((int)lVar5 == 0) {
        (**(code **)(lVar7 + 8))(param_1 + iVar1,CVar4.unknown);
      }
      _swift_release(*(undefined8 *)(param_1 + *(int *)(lVar3 + 0x2c)));
      lVar5 = (long)*(int *)(lVar3 + 0x30);
      goto LAB_100a8d048;
    }
    if (iVar1 != 0) {
      return;
    }
    lVar5 = *(long *)(param_1 + 0x18);
  }
  if (lVar5 == 0) {
    return;
  }
  lVar5 = 0x20;
LAB_100a8d048:
  _swift_release(*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Address: 0x100a8d08c | FUN_100a8d08c */

undefined8 * FUN_100a8d08c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  CheckedContinuation CVar6;
  undefined1 *puVar7;
  undefined7 extraout_var;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  uVar9 = *(undefined8 *)(param_3 + 0x10);
  lVar3 = 0;
  FUN_100a8cf30(0,uVar9);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 == 2) {
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    uVar9 = param_2[2];
    param_1[1] = param_2[1];
    _swift_retain();
    _swift_errorRetain(uVar9);
    param_1[2] = uVar9;
    lVar8 = param_2[3];
    if (lVar8 == 0) {
      lVar8 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar8;
    }
    else {
      uVar9 = param_2[4];
      param_1[3] = lVar8;
      param_1[4] = uVar9;
      _swift_retain();
    }
    uVar9 = 2;
  }
  else if (iVar2 == 1) {
    uVar5 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    lVar8 = param_2[3];
    if (lVar8 == 0) {
      lVar8 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar8;
    }
    else {
      uVar5 = param_2[4];
      param_1[3] = lVar8;
      param_1[4] = uVar5;
      _swift_retain();
    }
    uVar5 = param_2[5];
    param_1[5] = uVar5;
    lVar8 = 0;
    FUN_100a8cf3c(0,uVar9);
    lVar11 = (long)*(int *)(lVar8 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    _swift_retain(uVar5);
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar6 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar10 = *(long *)(CVar6.unknown + -8);
    puVar7 = (undefined1 *)((long)param_2 + lVar11);
    (**(code **)(lVar10 + 0x30))(puVar7,1,CVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar10 + 0x10))
                ((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                 CVar6.unknown);
      (**(code **)(lVar10 + 0x38))((undefined1 *)((long)param_1 + lVar11),0,1,CVar6.unknown);
    }
    else {
      OVar1 = Swift::Optional::typeMetadataAccessor();
      _memcpy((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
    uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) = uVar9;
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
    _swift_retain();
    _swift_retain(uVar9);
    uVar9 = 1;
  }
  else {
    if (iVar2 != 0) {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar3 + -8) + 0x40));
      goto LAB_100a8d2d8;
    }
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    lVar8 = param_2[3];
    if (lVar8 == 0) {
      lVar8 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar8;
    }
    else {
      uVar9 = param_2[4];
      param_1[3] = lVar8;
      param_1[4] = uVar9;
      _swift_retain();
    }
    uVar9 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,lVar3,uVar9);
LAB_100a8d2d8:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100a8d300 | FUN_100a8d300 */

undefined8 * FUN_100a8d300(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  CheckedContinuation CVar6;
  undefined1 *puVar7;
  undefined7 extraout_var;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  if (param_1 != param_2) {
    uVar9 = *(undefined8 *)(param_3 + 0x10);
    lVar3 = 0;
    FUN_100a8cf30(0,uVar9);
    lVar8 = *(long *)(lVar3 + -8);
    (**(code **)(lVar8 + 8))(param_1,lVar3);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar3);
    iVar2 = (int)puVar4;
    if (iVar2 == 2) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      uVar9 = param_2[2];
      _swift_retain();
      _swift_errorRetain(uVar9);
      param_1[2] = uVar9;
      lVar8 = param_2[3];
      if (lVar8 == 0) {
        lVar8 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar8;
      }
      else {
        uVar9 = param_2[4];
        param_1[3] = lVar8;
        param_1[4] = uVar9;
        _swift_retain();
      }
      uVar9 = 2;
    }
    else if (iVar2 == 1) {
      uVar5 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      lVar8 = param_2[3];
      if (lVar8 == 0) {
        lVar8 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar8;
      }
      else {
        uVar5 = param_2[4];
        param_1[3] = lVar8;
        param_1[4] = uVar5;
        _swift_retain();
      }
      uVar5 = param_2[5];
      param_1[5] = uVar5;
      lVar8 = 0;
      FUN_100a8cf3c(0,uVar9);
      lVar11 = (long)*(int *)(lVar8 + 0x28);
      Swift::Optional::typeMetadataAccessor();
      _swift_retain(uVar5);
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar6 = Swift::CheckedContinuation::typeMetadataAccessor();
      lVar10 = *(long *)(CVar6.unknown + -8);
      puVar7 = (undefined1 *)((long)param_2 + lVar11);
      (**(code **)(lVar10 + 0x30))(puVar7,1,CVar6.unknown);
      if ((int)puVar7 == 0) {
        (**(code **)(lVar10 + 0x10))
                  ((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                   CVar6.unknown);
        (**(code **)(lVar10 + 0x38))((undefined1 *)((long)param_1 + lVar11),0,1,CVar6.unknown);
      }
      else {
        OVar1 = Swift::Optional::typeMetadataAccessor();
        _memcpy((undefined1 *)((long)param_1 + lVar11),(undefined1 *)((long)param_2 + lVar11),
                *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x2c)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x2c));
      uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) = uVar9;
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x34));
      _swift_retain();
      _swift_retain(uVar9);
      uVar9 = 1;
    }
    else {
      if (iVar2 != 0) {
        _memcpy(param_1,param_2,*(size_t *)(lVar8 + 0x40));
        goto LAB_100a8d568;
      }
      uVar9 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      lVar8 = param_2[3];
      if (lVar8 == 0) {
        lVar8 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = lVar8;
      }
      else {
        uVar9 = param_2[4];
        param_1[3] = lVar8;
        param_1[4] = uVar9;
        _swift_retain();
      }
      uVar9 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar3,uVar9);
  }
LAB_100a8d568:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100a8d590 | FUN_100a8d590 */

undefined8 * FUN_100a8d590(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  CheckedContinuation CVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  lVar2 = 0;
  FUN_100a8cf30(0,uVar7);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar2);
  if ((int)puVar3 == 1) {
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    uVar10 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar10;
    param_1[5] = param_2[5];
    lVar4 = 0;
    FUN_100a8cf3c(0,uVar7);
    lVar8 = (long)*(int *)(lVar4 + 0x28);
    Swift::Optional::typeMetadataAccessor();
    FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    lVar9 = *(long *)(CVar5.unknown + -8);
    lVar6 = (long)param_2 + lVar8;
    (**(code **)(lVar9 + 0x30))(lVar6,1,CVar5.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,CVar5.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,CVar5.unknown);
    }
    else {
      OVar1 = Swift::Optional::typeMetadataAccessor();
      _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
    _swift_storeEnumTagMultiPayload(param_1,lVar2,1);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar2 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100a8d730 | FUN_100a8d730 */

undefined8 * FUN_100a8d730(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Optional OVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  CheckedContinuation CVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    lVar2 = 0;
    FUN_100a8cf30(0,uVar7);
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 8))(param_1,lVar2);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar2);
    if ((int)puVar3 == 1) {
      uVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
      uVar10 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = uVar10;
      param_1[5] = param_2[5];
      lVar4 = 0;
      FUN_100a8cf3c(0,uVar7);
      lVar8 = (long)*(int *)(lVar4 + 0x28);
      Swift::Optional::typeMetadataAccessor();
      FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
      CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
      lVar9 = *(long *)(CVar5.unknown + -8);
      lVar6 = (long)param_2 + lVar8;
      (**(code **)(lVar9 + 0x30))(lVar6,1,CVar5.unknown);
      if ((int)lVar6 == 0) {
        (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,CVar5.unknown);
        (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,CVar5.unknown);
      }
      else {
        OVar1 = Swift::Optional::typeMetadataAccessor();
        _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
                *(size_t *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40));
      }
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x2c)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x2c));
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar4 + 0x30));
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar4 + 0x34));
      _swift_storeEnumTagMultiPayload(param_1,lVar2,1);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
    }
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  return param_1;
}



/* Address: 0x100a8d8e8 | FUN_100a8d8e8 */

void FUN_100a8d8e8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a8d8f4 | FUN_100a8d8f4 */

void FUN_100a8d8f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a8cf30(0,*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100a8d930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x100a8d934 | FUN_100a8d934 */

void FUN_100a8d934(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a8d940 | FUN_100a8d940 */

void FUN_100a8d940(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a8cf30(0,*(undefined8 *)(param_4 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100a8d980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Address: 0x100a8d984 | FUN_100a8d984 */

void FUN_100a8d984(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a8d990 | FUN_100a8d990 */

undefined1  [16] FUN_100a8d990(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  CheckedContinuation CVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  local_70 = &DAT_100c92cf8;
  puStack_68 = &DAT_100c92d10;
  puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_60 = &DAT_100c92d28;
  puStack_58 = puVar1;
  Swift::Optional::typeMetadataAccessor();
  FUN_1000f8b08(&DAT_100ff69f8,&DAT_100c910f0);
  CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar2.value);
  if (CVar3.unknown < (undefined *)0x40) {
    local_50 = *(long *)(lVar4 + -8) + 0x40;
    puStack_38 = &DAT_100c92d10;
    puStack_48 = puVar1;
    local_40 = puVar1;
    _swift_initStructMetadata(param_1,0,8,&local_70,param_1 + 0x18);
    lVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = 0x3f;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}


