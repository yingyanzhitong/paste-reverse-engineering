/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10095b788 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b78c | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b790 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b794 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b798 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b79c | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7a0 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7a4 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7a8 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7ac | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7b0 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7b4 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7b8 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7bc | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7c0 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7c4 | thunk_FUN_10095b4cc */

void thunk_FUN_10095b4cc(void)

{
  FUN_10095b4cc();
  return;
}



/* Address: 0x10095b7c8 | FUN_10095b7c8 */

void FUN_10095b7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(long *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar4 = *(long *)(param_8 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  iVar1 = *param_4;
  plVar3 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10095b864;
  (*(code *)((long)iVar1 + (long)param_4))(plVar3,uVar2);
  return;
}



/* Address: 0x10095b864 | FUN_10095b864 */

void FUN_10095b864(void)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x50));
  lVar3 = *(long *)(lVar5 + 0x18);
  if (unaff_x20 == 0) {
    if (lVar3 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      _swift_getObjectType(lVar3);
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(lVar5 + 0x60) = UVar1.unknown;
    *(undefined8 *)(lVar5 + 0x68) = uVar4;
    pcVar2 = FUN_10095b938;
  }
  else {
    if (lVar3 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + 0x20);
      _swift_getObjectType(lVar3);
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(lVar5 + 0x88) = UVar1.unknown;
    *(undefined8 *)(lVar5 + 0x90) = uVar4;
    pcVar2 = FUN_10095bb40;
  }
  _swift_task_switch(pcVar2,UVar1.unknown);
  return;
}



/* Address: 0x10095b938 | FUN_10095b938 */

void FUN_10095b938(void)

{
  undefined *puVar1;
  ulong uVar2;
  TaskPriority TVar3;
  undefined8 uVar4;
  long *plVar5;
  Task TVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x48),
             *(undefined8 *)(unaff_x22 + 0x38));
  puVar1 = &DAT_100feeb98;
  FUN_1000f7830(&DAT_100feeb98,&DAT_100c86190);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(uVar2,1,1,TVar3.unknown);
  puVar1 = &DAT_100f1bb80;
  _swift_allocObject(&DAT_100f1bb80,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x20) = uVar7;
  _swift_retain(uVar4);
  uVar4 = 0;
  FUN_10095bf50(0,0,uVar2,&DAT_100c861b0,puVar1);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  _swift_task_dealloc(uVar2);
  plVar5 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  TVar6.unknown = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10095ba88;
  Swift::Task::get_value(TVar6);
  return;
}



/* Address: 0x10095ba88 | FUN_10095ba88 */

void FUN_10095ba88(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x70);
  *(long *)(lVar3 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x78));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10095baf8;
  }
  else {
    pcVar2 = FUN_10095bdb0;
  }
  _swift_task_switch(pcVar2,*(undefined8 *)(lVar3 + 0x60),*(undefined8 *)(lVar3 + 0x68));
  return;
}



/* Address: 0x10095baf8 | FUN_10095baf8 */

void FUN_10095baf8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010095bb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10095bb40 | FUN_10095bb40 */

void FUN_10095bb40(void)

{
  undefined *puVar1;
  ulong uVar2;
  TaskPriority TVar3;
  long *plVar4;
  Task TVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1 = &DAT_100feeb98;
  FUN_1000f7830(&DAT_100feeb98,&DAT_100c86190);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(uVar2,1,1,TVar3.unknown);
  puVar1 = &DAT_100f1bb58;
  _swift_allocObject(&DAT_100f1bb58,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x28) = uVar9;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  *(undefined8 *)(puVar1 + 0x30) = uVar6;
  _swift_retain(uVar7);
  _swift_errorRetain(uVar6);
  uVar6 = 0;
  FUN_10095bf50(0,0,uVar2,&DAT_100c861a0,puVar1);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
  _swift_task_dealloc(uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar4;
  TVar5.unknown = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10095bc98;
  Swift::Task::get_value(TVar5);
  return;
}



/* Address: 0x10095bc98 | FUN_10095bc98 */

void FUN_10095bc98(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_10095bd08;
  }
  else {
    pcVar2 = FUN_10095bd60;
  }
  _swift_task_switch(pcVar2,*(undefined8 *)(lVar3 + 0x88),*(undefined8 *)(lVar3 + 0x90));
  return;
}



/* Address: 0x10095bd08 | FUN_10095bd08 */

void FUN_10095bd08(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_willThrow();
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010095bd5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10095bd60 | FUN_10095bd60 */

void FUN_10095bd60(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  _swift_errorRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010095bdac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10095bdb0 | FUN_10095bdb0 */

void FUN_10095bdb0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar2 + 8))(uVar3,uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010095be10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10095be14 | FUN_10095be14 */

void FUN_10095be14(void)

{
  int iVar1;
  long *plVar2;
  int *in_x3;
  undefined8 in_x5;
  long unaff_x22;
  
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x00010095be7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))(in_x5);
  return;
}



/* Address: 0x10095be80 | FUN_10095be80 */

void FUN_10095be80(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10095beb4 | FUN_10095beb4 */

void FUN_10095beb4(undefined8 param_1)

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
  FUN_10095be14(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x10095bf50 | FUN_10095bf50 */

void FUN_10095bf50(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar2 = &DAT_100feeb98;
  FUN_1000f7830(&DAT_100feeb98,&DAT_100c86190);
  puVar9 = auStack_c0 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10095c27c(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_10095c2cc(puVar9);
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
    FUN_10095c2cc(param_3);
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
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
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
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
    _swift_release(CVar7.unknown);
    FUN_10095c2cc(param_3);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x10095c164 | FUN_10095c164 */

void FUN_10095c164(void)

{
  int iVar1;
  long *plVar2;
  int *in_x3;
  long unaff_x22;
  
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x00010095c1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))(0);
  return;
}



/* Address: 0x10095c1c4 | FUN_10095c1c4 */

void FUN_10095c1c4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10095c1f0 | FUN_10095c1f0 */

void FUN_10095c1f0(undefined8 param_1)

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
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_10095c164(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x10095c27c | FUN_10095c27c */

undefined8 FUN_10095c27c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feeb98;
  FUN_1000f7830(&DAT_100feeb98,&DAT_100c86190);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10095c2cc | FUN_10095c2cc */

undefined8 FUN_10095c2cc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feeb98;
  FUN_1000f7830(&DAT_100feeb98,&DAT_100c86190);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10095c314 | FUN_10095c314 */

undefined * FUN_10095c314(void)

{
  return &DAT_100c861c8;
}



/* Address: 0x10095c320 | FUN_10095c320 */

undefined * FUN_10095c320(void)

{
  return &DAT_100c861cc;
}



/* Address: 0x10095c32c | FUN_10095c32c */

undefined * FUN_10095c32c(void)

{
  return &DAT_100c861d0;
}



/* Address: 0x10095c338 | FUN_10095c338 */

ulong FUN_10095c338(ulong param_1)

{
  FUN_10095d7a0();
  return param_1 & 0xffffffffff;
}



/* Address: 0x10095c350 | FUN_10095c350 */

void FUN_10095c350(void)

{
  FUN_10095d884();
  return;
}



/* Address: 0x10095c364 | FUN_10095c364 */

void FUN_10095c364(void)

{
  FUN_10095d958();
  return;
}



/* Address: 0x10095c378 | FUN_10095c378 */

uint FUN_10095c378(uint param_1)

{
  FUN_10095d9e8();
  return param_1 & 1;
}



/* Address: 0x10095c390 | FUN_10095c390 */

void FUN_10095c390(void)

{
  FUN_10095db6c();
  return;
}



/* Address: 0x10095c3a4 | FUN_10095c3a4 */

void FUN_10095c3a4(void)

{
  FUN_10095dc2c();
  return;
}



/* Address: 0x10095c3b8 | FUN_10095c3b8 */

void FUN_10095c3b8(void)

{
  FUN_10095dcec();
  return;
}



/* Address: 0x10095c3cc | FUN_10095c3cc */

void FUN_10095c3cc(void)

{
  FUN_10095ddc4();
  return;
}



/* Address: 0x10095c3e0 | FUN_10095c3e0 */

void FUN_10095c3e0(void)

{
  FUN_10095de74();
  return;
}



/* Address: 0x10095c3f4 | FUN_10095c3f4 */

void FUN_10095c3f4(void)

{
  FUN_10095df60();
  return;
}



/* Address: 0x10095c408 | FUN_10095c408 */

void FUN_10095c408(void)

{
  FUN_10095e03c();
  return;
}



/* Address: 0x10095c41c | FUN_10095c41c */

void FUN_10095c41c(void)

{
  FUN_10095e118();
  return;
}



/* Address: 0x10095c430 | FUN_10095c430 */

void FUN_10095c430(void)

{
  FUN_10095e1f4();
  return;
}



/* Address: 0x10095c444 | FUN_10095c444 */

void FUN_10095c444(void)

{
  FUN_10095e2f8();
  return;
}



/* Address: 0x10095c458 | FUN_10095c458 */

void FUN_10095c458(void)

{
  FUN_10095e3d0();
  return;
}



/* Address: 0x10095c46c | FUN_10095c46c */

void FUN_10095c46c(void)

{
  FUN_10095e480();
  return;
}



/* Address: 0x10095c480 | FUN_10095c480 */

void FUN_10095c480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    uVar3 = param_1;
    FUN_100bf2bc0(param_1,param_2,param_3,param_4,param_5);
    if ((int)uVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0x23) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c578);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000002b;
    puVar4[1] = 0x8000000100db56b0;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095c578 | FUN_10095c578 */

void FUN_10095c578(void)

{
  FUN_10095e548();
  return;
}



/* Address: 0x10095c58c | FUN_10095c58c */

void FUN_10095c58c(void)

{
  FUN_10095e630();
  return;
}



/* Address: 0x10095c5a0 | FUN_10095c5a0 */

void FUN_10095c5a0(void)

{
  FUN_10095e724();
  return;
}



/* Address: 0x10095c5b4 | FUN_10095c5b4 */

undefined8 FUN_10095c5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    uVar3 = param_1;
    _poll(param_1,param_2,param_3);
    if ((int)uVar3 != -1) {
      return uVar3;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000017;
    puVar4[1] = 0x8000000100db56e0;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c67c);
  (*pcVar1)();
}



/* Address: 0x10095c67c | FUN_10095c67c */

void FUN_10095c67c(void)

{
  FUN_10095e808();
  return;
}



/* Address: 0x10095c690 | FUN_10095c690 */

void FUN_10095c690(void)

{
  FUN_10095ea98();
  return;
}



/* Address: 0x10095c6a4 | FUN_10095c6a4 */

void FUN_10095c6a4(void)

{
  FUN_10095d5f0();
  return;
}



/* Address: 0x10095c6b8 | FUN_10095c6b8 */

void FUN_10095c6b8(void)

{
  FUN_10095d6d0();
  return;
}



/* Address: 0x10095c6cc | FUN_10095c6cc */

void FUN_10095c6cc(void)

{
  FUN_10095ed74();
  return;
}


