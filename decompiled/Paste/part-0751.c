/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100842dc0 | FUN_100842dc0 */

void FUN_100842dc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100832348(param_2,param_3,uVar1);
  FUN_100847830(&local_78);
  FUN_1007fb2d8(param_2,param_3,uVar1);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[3] = uStack_60;
    param_1[2] = local_68;
    *(undefined2 *)(param_1 + 4) = local_58;
  }
  return;
}



/* Address: 0x100842e68 | FUN_100842e68 */

void FUN_100842e68(void)

{
  long unaff_x20;
  
  FUN_1008415b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100842e70 | FUN_100842e70 */

void FUN_100842e70(long *param_1,long *param_2,ulong param_3,ulong param_4)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (*(long *)(lVar7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar7);
    plVar3 = param_2;
    uVar2 = param_3;
    FUN_1008350fc();
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)(*(long *)(lVar7 + 0x38) + (long)plVar3 * 0x18);
      lVar6 = *plVar3;
      lVar4 = plVar3[1];
      uVar5 = 0x100;
      if (*(char *)((long)plVar3 + 0x11) == '\0') {
        uVar5 = 0;
      }
      bVar1 = *(byte *)(plVar3 + 2);
      uVar5 = uVar5 | bVar1;
      FUN_1007fb2a0(lVar6,lVar4,bVar1);
      _swift_bridgeObjectRelease(lVar7);
      plVar3 = param_2;
      uVar2 = param_3;
      thunk_FUN_1007ff8e4();
      lVar7 = lVar6;
      FUN_1000f4a4c(lVar6,lVar4,bVar1);
      FUN_1007fb2a0(lVar6,lVar4,bVar1);
      FUN_1007fb2d8(lVar6,lVar4,uVar5);
      if (((uint)lVar7 & 0xff) != ((uint)param_4 & 0xff)) {
        thunk_FUN_1007ff8e4();
        plVar3 = param_2;
        FUN_10080a3bc();
        _swift_allocError(&DAT_100f05368,plVar3,0,0);
        *plVar3 = (long)param_2;
        plVar3[1] = param_3;
        plVar3[2] = param_4 & 0xff;
        plVar3[3] = 0;
        *(undefined1 *)(plVar3 + 4) = 1;
        _swift_willThrow();
        _swift_bridgeObjectRelease(uVar2);
        FUN_1007fb2d8(lVar6,lVar4,uVar5);
        _os_unfair_lock_unlock(unaff_x20 + 0x20);
        return;
      }
      goto LAB_100842fb0;
    }
    _swift_bridgeObjectRelease(lVar7);
  }
  thunk_FUN_1007ff8e4();
  lVar4 = 0;
  lVar6 = 0;
  uVar5 = 0x200;
  uVar2 = param_3;
  plVar3 = param_2;
LAB_100842fb0:
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  *param_1 = (long)plVar3;
  param_1[1] = uVar2;
  param_1[2] = lVar6;
  param_1[3] = lVar4;
  *(ushort *)(param_1 + 4) = uVar5;
  return;
}



/* Address: 0x10084305c | FUN_10084305c */

void FUN_10084305c(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,ulong param_5,
                  ulong param_6)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  long lVar5;
  ushort uVar6;
  long lVar7;
  
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (*(long *)(lVar7 + 0x10) == 0) {
LAB_10084317c:
    thunk_FUN_1007ff8e4();
    lVar4 = 0;
    lVar5 = 0;
    uVar6 = 0x200;
    plVar3 = param_4;
    uVar2 = param_5;
  }
  else {
    _swift_bridgeObjectRetain(lVar7);
    plVar3 = param_4;
    uVar2 = param_5;
    FUN_1008350fc();
    if ((uVar2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_10084317c;
    }
    plVar3 = (long *)(*(long *)(lVar7 + 0x38) + (long)plVar3 * 0x18);
    lVar5 = *plVar3;
    lVar4 = plVar3[1];
    uVar6 = 0x100;
    if (*(char *)((long)plVar3 + 0x11) == '\0') {
      uVar6 = 0;
    }
    bVar1 = *(byte *)(plVar3 + 2);
    uVar6 = uVar6 | bVar1;
    FUN_1007fb2a0(lVar5,lVar4,bVar1);
    _swift_bridgeObjectRelease(lVar7);
    plVar3 = param_4;
    uVar2 = param_5;
    thunk_FUN_1007ff8e4();
    lVar7 = lVar5;
    FUN_1000f4a4c(lVar5,lVar4,bVar1);
    FUN_1007fb2a0(lVar5,lVar4,bVar1);
    FUN_1007fb2d8(lVar5,lVar4,uVar6);
    if (((uint)lVar7 & 0xff) != ((uint)param_6 & 0xff)) {
      thunk_FUN_1007ff8e4();
      plVar3 = param_4;
      FUN_10080a3bc();
      _swift_allocError(&DAT_100f05368,plVar3,0,0);
      *plVar3 = (long)param_4;
      plVar3[1] = param_5;
      plVar3[2] = param_6 & 0xff;
      plVar3[3] = 0;
      *(undefined1 *)(plVar3 + 4) = 1;
      _swift_willThrow();
      _swift_bridgeObjectRelease(uVar2);
      FUN_1007fb2d8(lVar5,lVar4,uVar6);
      _os_unfair_lock_unlock(unaff_x20 + 0x20);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1008431b8;
    }
  }
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  *param_1 = (long)plVar3;
  param_1[1] = uVar2;
  param_1[2] = lVar5;
  param_1[3] = lVar4;
  *(ushort *)(param_1 + 4) = uVar6;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1008431b8:
                    /* WARNING: Could not recover jumptable at 0x0001008431d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100843260 | FUN_100843260 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100843550 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100843260(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,int *param_7)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  AsyncStream bufferingPolicy;
  undefined8 *puVar6;
  UUID UVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar15;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_5;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  puVar3 = &DAT_100fe71e0;
  FUN_1000f7830(&DAT_100fe71e0,&DAT_100c7ccb0);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  lVar15 = *(long *)(puVar3 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar15;
  uVar9 = *(long *)(lVar15 + 0x40) + 0xf;
  uVar4 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  puVar5 = &DAT_100fe6fb8;
  FUN_1000f7830(&DAT_100fe6fb8,&DAT_100c7cc90);
  *(undefined **)(unaff_x22 + 0xa8) = puVar5;
  lVar14 = *(long *)(puVar5 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar14;
  bufferingPolicy.unknown = (undefined *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xb8) = bufferingPolicy.unknown;
  puVar5 = &DAT_100fe71e8;
  FUN_1000f7830(&DAT_100fe71e8,&DAT_100c7bae0);
  lVar14 = *(long *)(puVar5 + -8);
  puVar6 = (undefined8 *)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *puVar6 = 1;
  (**(code **)(lVar14 + 0x68))();
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
  if ((bVar2 & 1) == 0) {
    FUN_10080453c(uVar4,bufferingPolicy.unknown,puVar6);
  }
  else {
    FUN_1000f7830(&DAT_100fe7180,&DAT_100c7ccf0);
    Swift::AsyncStream::_makeStream((BufferingPolicy)(__int8)uVar4,bufferingPolicy);
  }
  (**(code **)(lVar14 + 8))(puVar6,puVar5);
  _swift_task_dealloc(puVar6);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xc0) = UVar7.unknown;
  lVar14 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 200) = lVar14;
  lVar14 = *(long *)(lVar14 + 0x40);
  *(long *)(unaff_x22 + 0xd0) = lVar14;
  uVar4 = lVar14 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar4;
  Foundation::UUID::init();
  FUN_100842870(bufferingPolicy.unknown,uVar4,param_4,param_5);
  uVar8 = param_4;
  uVar13 = param_5;
  thunk_FUN_1007ff8e4();
  uVar9 = uVar9 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  (**(code **)(lVar15 + 0x10))();
  puVar5 = &DAT_100f06108;
  _swift_allocObject(&DAT_100f06108,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar8;
  *(undefined8 *)(puVar5 + 0x18) = uVar13;
  puVar5[0x20] = param_6;
  *(undefined8 *)(puVar5 + 0x28) = param_4;
  *(undefined8 *)(puVar5 + 0x30) = param_5;
  puVar10 = &DAT_100fe76a0;
  FUN_1000f7830(&DAT_100fe76a0,&DAT_100c7ccd0);
  *(undefined **)(unaff_x22 + 0x28) = puVar10;
  puVar10 = &DAT_100fe76a8;
  FUN_100134584(&DAT_100fe76a8,&DAT_100fe76a0,&DAT_100c7ccd0,
                PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
               );
  *(undefined **)(unaff_x22 + 0x30) = puVar10;
  lVar14 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar14);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  puVar10 = &DAT_100fe6c10;
  FUN_1000f7830(&DAT_100fe6c10,&DAT_100c7a880);
  puVar11 = &DAT_100fe76b0;
  FUN_100134584(&DAT_100fe76b0,&DAT_100fe71e0,&DAT_100c7ccb0,
                PTR_Swift__Swift__AsyncStream<undefined>_>Swift__AsyncSequence_100eaed00);
  Swift::AsyncMapSequence::_init(lVar14,puVar11,&DAT_100c7ccc8,puVar5,puVar3,puVar10,puVar11);
  _swift_task_dealloc(uVar9);
  iVar1 = *param_7;
  plVar12 = (long *)(ulong)(uint)param_7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1008435c0;
                    /* WARNING: Could not recover jumptable at 0x0001008435bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_7))
            (plVar12,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008435c0 | FUN_1008435c0 */

void FUN_1008435c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long lVar14;
  long lVar15;
  
  lVar15 = *unaff_x22;
  lVar12 = *(long *)(lVar15 + 0x88);
  lVar14 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar15 + 0xe0));
  FUN_1000fb4c4(lVar15 + 0x10,&DAT_100fe7178,&DAT_100c7cce0);
  _os_unfair_lock_lock(lVar12 + 0x20);
  plVar11 = *(long **)(lVar15 + 0x78);
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = (code *)(lVar15 + 0x58);
    FUN_100842bb8(UNRECOVERED_JUMPTABLE,plVar11,*(undefined8 *)(lVar15 + 0x80));
    if (*plVar11 == 0) {
      (*UNRECOVERED_JUMPTABLE)(lVar15 + 0x58,0);
    }
    else {
      lVar4 = *(long *)(lVar15 + 200);
      lVar5 = *(long *)(lVar15 + 0xb0);
      uVar8 = *(long *)(lVar15 + 0xd0) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar8);
      (**(code **)(lVar4 + 0x10))();
      puVar10 = &DAT_100fe71d8;
      FUN_1000f7830(&DAT_100fe71d8,&DAT_100c7bad8);
      uVar9 = *(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      (**(code **)(lVar5 + 0x38))();
      FUN_10084109c(uVar9,uVar8);
      _swift_task_dealloc(uVar9);
      (*UNRECOVERED_JUMPTABLE)(lVar15 + 0x58,0);
      _swift_task_dealloc(uVar8);
    }
    uVar13 = *(undefined8 *)(lVar15 + 0xd8);
    uVar1 = *(undefined8 *)(lVar15 + 0xc0);
    lVar5 = *(long *)(lVar15 + 200);
    lVar4 = *(long *)(lVar15 + 0xb0);
    uVar6 = *(undefined8 *)(lVar15 + 0xb8);
    uVar2 = *(undefined8 *)(lVar15 + 0xa0);
    uVar7 = *(undefined8 *)(lVar15 + 0xa8);
    uVar3 = *(undefined8 *)(lVar15 + 0x90);
    lVar15 = *(long *)(lVar15 + 0x98);
    _os_unfair_lock_unlock(lVar12 + 0x20);
    (**(code **)(lVar5 + 8))(uVar13,uVar1);
    (**(code **)(lVar4 + 8))(uVar6,uVar7);
    (**(code **)(lVar15 + 8))(uVar2,uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = (code *)(lVar15 + 0x38);
    FUN_100842bb8(UNRECOVERED_JUMPTABLE,plVar11,*(undefined8 *)(lVar15 + 0x80));
    if (*plVar11 == 0) {
      (*UNRECOVERED_JUMPTABLE)(lVar15 + 0x38,0);
    }
    else {
      lVar4 = *(long *)(lVar15 + 200);
      lVar5 = *(long *)(lVar15 + 0xb0);
      uVar8 = *(long *)(lVar15 + 0xd0) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar8);
      (**(code **)(lVar4 + 0x10))();
      puVar10 = &DAT_100fe71d8;
      FUN_1000f7830(&DAT_100fe71d8,&DAT_100c7bad8);
      uVar9 = *(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc(uVar9);
      (**(code **)(lVar5 + 0x38))();
      FUN_10084109c(uVar9,uVar8);
      _swift_task_dealloc(uVar9);
      (*UNRECOVERED_JUMPTABLE)(lVar15 + 0x38,0);
      _swift_task_dealloc(uVar8);
    }
    uVar13 = *(undefined8 *)(lVar15 + 0xd8);
    uVar1 = *(undefined8 *)(lVar15 + 0xc0);
    lVar5 = *(long *)(lVar15 + 200);
    lVar4 = *(long *)(lVar15 + 0xb0);
    uVar6 = *(undefined8 *)(lVar15 + 0xb8);
    uVar2 = *(undefined8 *)(lVar15 + 0xa0);
    uVar7 = *(undefined8 *)(lVar15 + 0xa8);
    uVar3 = *(undefined8 *)(lVar15 + 0x90);
    lVar15 = *(long *)(lVar15 + 0x98);
    _os_unfair_lock_unlock(lVar12 + 0x20);
    (**(code **)(lVar5 + 8))(uVar13,uVar1);
    (**(code **)(lVar4 + 8))(uVar6,uVar7);
    (**(code **)(lVar15 + 8))(uVar2,uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001008438bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1008438c0 | FUN_1008438c0 */

void FUN_1008438c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_7;
  *(undefined1 *)(unaff_x22 + 0x4a) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined2 *)(unaff_x22 + 0x48) = *(undefined2 *)(param_2 + 2);
  _swift_task_switch(FUN_1008438f4,0,0);
  return;
}



/* Address: 0x1008438f4 | FUN_1008438f4 */

void FUN_1008438f4(void)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long unaff_x22;
  undefined8 *puVar9;
  
  uVar3 = *(ushort *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  if ((uVar3 & 0xff00) == 0x200) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar8 = *(undefined8 **)(unaff_x22 + 0x10);
    *puVar8 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar8[1] = uVar4;
    puVar8[2] = uVar7;
    puVar8[3] = uVar1;
    *(ushort *)(puVar8 + 4) = uVar3;
    *(undefined1 *)((long)puVar8 + 0x22) = 0;
    _swift_bridgeObjectRetain();
  }
  else {
    bVar2 = *(byte *)(unaff_x22 + 0x4a);
    uVar4 = uVar7;
    FUN_1000f4a4c(uVar7,uVar1,uVar3);
    FUN_1007fb2a0(uVar7,uVar1,uVar3);
    uVar3 = *(ushort *)(unaff_x22 + 0x48);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    if ((uint)bVar2 == ((uint)uVar4 & 0xff)) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
      puVar8 = *(undefined8 **)(unaff_x22 + 0x10);
      *puVar8 = *(undefined8 *)(unaff_x22 + 0x18);
      puVar8[1] = uVar4;
      puVar8[2] = uVar7;
      puVar8[3] = uVar1;
      *(ushort *)(puVar8 + 4) = uVar3 & 0x1ff;
      *(undefined1 *)((long)puVar8 + 0x22) = 0;
      _swift_bridgeObjectRetain(uVar4);
    }
    else {
      puVar8 = *(undefined8 **)(unaff_x22 + 0x28);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
      bVar2 = *(byte *)(unaff_x22 + 0x4a);
      puVar9 = *(undefined8 **)(unaff_x22 + 0x10);
      FUN_1007fb2d8();
      thunk_FUN_1007ff8e4();
      puVar5 = puVar8;
      FUN_10080a3bc();
      puVar6 = &DAT_100f05368;
      _swift_allocError(&DAT_100f05368,puVar5,0,0);
      *puVar5 = puVar8;
      puVar5[1] = uVar7;
      puVar5[2] = (ulong)bVar2;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 1;
      _swift_willThrow();
      *puVar9 = puVar6;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *(undefined2 *)(puVar9 + 4) = 0;
      *(undefined1 *)((long)puVar9 + 0x22) = 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100843a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100843a34 | FUN_100843a34 */

void FUN_100843a34(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[3] = &DAT_100f061c0;
  param_1[4] = &PTR_PTR_100f06260;
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  param_1[2] = *(undefined8 *)(unaff_x20 + 0x38);
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  return;
}



/* Address: 0x100843a9c | FUN_100843a9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100843d0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100843a9c(undefined8 param_1,undefined8 param_2,ulong param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  AsyncStream bufferingPolicy;
  undefined8 *puVar6;
  UUID UVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar12;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  puVar3 = &DAT_100fe71c8;
  FUN_1000f7830(&DAT_100fe71c8,&DAT_100c7cd00);
  *(undefined **)(unaff_x22 + 0x40) = puVar3;
  lVar12 = *(long *)(puVar3 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar12;
  uVar8 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar4 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  puVar5 = &DAT_100fe6fd0;
  FUN_1000f7830(&DAT_100fe6fd0,&DAT_100c7b480);
  *(undefined **)(unaff_x22 + 0x58) = puVar5;
  lVar11 = *(long *)(puVar5 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar11;
  bufferingPolicy.unknown = (undefined *)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x68) = bufferingPolicy.unknown;
  puVar5 = &DAT_100fe71d0;
  FUN_1000f7830(&DAT_100fe71d0,&DAT_100c7bad0);
  lVar11 = *(long *)(puVar5 + -8);
  puVar6 = (undefined8 *)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *puVar6 = 1;
  (**(code **)(lVar11 + 0x68))();
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
  if ((bVar2 & 1) == 0) {
    FUN_100804730(uVar4,bufferingPolicy.unknown,puVar6);
  }
  else {
    Swift::AsyncStream::_makeStream((BufferingPolicy)(__int8)uVar4,bufferingPolicy);
  }
  (**(code **)(lVar11 + 8))(puVar6,puVar5);
  _swift_task_dealloc(puVar6);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = UVar7.unknown;
  lVar11 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar11;
  lVar11 = *(long *)(lVar11 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar11;
  uVar4 = lVar11 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  Foundation::UUID::init();
  FUN_100842c2c(bufferingPolicy.unknown,uVar4);
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar12 + 0x10))();
  puVar5 = &DAT_100fe76b8;
  FUN_1000f7830(&DAT_100fe76b8,&DAT_100c7cd18);
  *(undefined **)(unaff_x22 + 0x28) = puVar5;
  puVar5 = &DAT_100fe76c0;
  FUN_100134584(&DAT_100fe76c0,&DAT_100fe76b8,&DAT_100c7cd18,
                PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
               );
  *(undefined **)(unaff_x22 + 0x30) = puVar5;
  lVar11 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar11);
  puVar5 = &DAT_100fe71b8;
  FUN_1000f7830(&DAT_100fe71b8,&DAT_100c7c6d0);
  puVar9 = &DAT_100fe76c8;
  FUN_100134584(&DAT_100fe76c8,&DAT_100fe71c8,&DAT_100c7cd00,
                PTR_Swift__Swift__AsyncStream<undefined>_>Swift__AsyncSequence_100eaed00);
  Swift::AsyncMapSequence::_init(lVar11,puVar9,&DAT_100c7cd10,0,puVar3,puVar5,puVar9);
  _swift_task_dealloc(uVar8);
  iVar1 = *param_4;
  plVar10 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_100843d7c;
                    /* WARNING: Could not recover jumptable at 0x000100843d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))
            (plVar10,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100843d7c | FUN_100843d7c */

void FUN_100843d7c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long *unaff_x22;
  long lVar16;
  
  lVar15 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar15 + 0x88);
  lVar2 = *(long *)(lVar15 + 0x78);
  lVar7 = *(long *)(lVar15 + 0x80);
  uVar3 = *(undefined8 *)(lVar15 + 0x68);
  uVar8 = *(undefined8 *)(lVar15 + 0x70);
  uVar4 = *(undefined8 *)(lVar15 + 0x58);
  lVar9 = *(long *)(lVar15 + 0x60);
  lVar5 = *(long *)(lVar15 + 0x48);
  uVar10 = *(undefined8 *)(lVar15 + 0x50);
  lVar6 = *(long *)(lVar15 + 0x38);
  uVar11 = *(undefined8 *)(lVar15 + 0x40);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar15 + 0x90));
  FUN_1000fb4c4(lVar15 + 0x10,&DAT_100fe71b0,&DAT_100c7bac0);
  _os_unfair_lock_lock(lVar6 + 0x20);
  uVar12 = lVar7 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  (**(code **)(lVar2 + 0x10))();
  puVar13 = &DAT_100fe71c0;
  FUN_1000f7830(&DAT_100fe71c0,&DAT_100c7cd20);
  uVar14 = *(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar14);
  (**(code **)(lVar9 + 0x38))();
  FUN_100841290(uVar14,uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
  _os_unfair_lock_unlock(lVar6 + 0x20);
  (**(code **)(lVar2 + 8))(uVar1,uVar8);
  (**(code **)(lVar9 + 8))(uVar3,uVar4);
  (**(code **)(lVar5 + 8))(uVar10,uVar11);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100843ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))();
  return;
}



/* Address: 0x100843efc | FUN_100843efc */

void FUN_100843efc(undefined8 *param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[3] = &DAT_100f061c0;
  param_1[4] = &PTR_PTR_100f06260;
  *param_1 = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100843f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100843f6c | FUN_100843f6c */

void FUN_100843f6c(void)

{
  long *unaff_x20;
  
  FUN_1008415b0(*(undefined8 *)(*unaff_x20 + 0x10),*(undefined8 *)(*unaff_x20 + 0x18));
  return;
}



/* Address: 0x100843f78 | FUN_100843f78 */

void FUN_100843f78(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  FUN_100842e70(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    *(undefined2 *)(param_1 + 4) = local_28;
  }
  return;
}



/* Address: 0x100843fc0 | FUN_100843fc0 */

void FUN_100843fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100834cd8;
  FUN_10084305c(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x10084403c | FUN_10084403c */

void FUN_10084403c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100843260(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x1008440f0 | FUN_1008440f0 */

void FUN_1008440f0(undefined8 *param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  param_1[3] = &DAT_100f061c0;
  param_1[4] = &PTR_PTR_100f06260;
  _os_unfair_lock_lock(lVar2 + 0x20);
  *param_1 = *(undefined8 *)(lVar2 + 0x28);
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  param_1[2] = *(undefined8 *)(lVar2 + 0x38);
  param_1[1] = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _os_unfair_lock_unlock(lVar2 + 0x20);
  return;
}



/* Address: 0x10084415c | FUN_10084415c */

void FUN_10084415c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100843a9c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5);
  return;
}



/* Address: 0x1008441e8 | FUN_1008441e8 */

undefined * FUN_1008441e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008442e8);
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
    puVar3 = &DAT_100fe7780;
    FUN_1000f7830(&DAT_100fe7780,&DAT_100c7ce08);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008442e8 | FUN_1008442e8 */

undefined1  [16] FUN_1008442e8(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100844370();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100844370);
  (*pcVar3)();
}



/* Address: 0x100844370 | FUN_100844370 */

void FUN_100844370(long param_1)

{
  FUN_1008441e8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100844384 | FUN_100844384 */

void FUN_100844384(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  UUID UVar2;
  long lVar3;
  
  lVar3 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  lVar3 = *(long *)(param_4 + 0x30);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_1,param_2,UVar2.unknown
            );
  lVar3 = *(long *)(param_4 + 0x38);
  FUN_1000f7830(param_5,param_6);
  (**(code **)(*(long *)(param_5 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(param_5 + -8) + 0x48) * param_1,param_3,param_5);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100844450);
  (*pcVar1)();
}



/* Address: 0x100844450 | FUN_100844450 */

void FUN_100844450(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_7 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x38) + param_1 * 0x18);
  *puVar3 = param_4;
  puVar3[1] = param_5;
  *(char *)(puVar3 + 2) = (char)param_6;
  *(byte *)((long)puVar3 + 0x11) = (byte)((uint)param_6 >> 8) & 1;
  if (!SCARRY8(*(long *)(param_7 + 0x10),1)) {
    *(long *)(param_7 + 0x10) = *(long *)(param_7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008444ac);
  (*pcVar2)();
}



/* Address: 0x1008444ac | FUN_1008444ac */

void FUN_1008444ac(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar16;
  
  this = (_DictionaryStorage *)&DAT_100fe6fe8;
  FUN_1000f7830(&DAT_100fe6fe8,&DAT_100c7ce30);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var10 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar11 = (1L << ((ulong)(byte)p_Var10[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var10 != original || p_Var1 + uVar11 * 8 <= p_Var10 + 0x40) {
      _memmove(p_Var10 + 0x40,p_Var1,uVar11 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(p_Var10 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(original + 0x40);
    if (uVar11 == 0) goto LAB_10084458c;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar16 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar14);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + lVar15);
        uVar8 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + lVar14);
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        *(undefined1 *)(puVar2 + 2) = uVar8;
        _swift_bridgeObjectRetain();
        FUN_1004a7398(uVar5,uVar7,uVar8);
        if (uVar11 != 0) break;
LAB_10084458c:
        do {
          lVar14 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100844644);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_100844618;
          uVar11 = *(ulong *)(p_Var1 + lVar14 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar16 = lVar14;
      }
    } while( true );
  }
LAB_100844618:
  _swift_release(original);
  *unaff_x20 = (long)p_Var10;
  return;
}



/* Address: 0x100844644 | FUN_100844644 */

void FUN_100844644(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  this = (_DictionaryStorage *)&DAT_100fe6fd8;
  FUN_1000f7830(&DAT_100fe6fd8,&DAT_100c7ce00);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_100844724;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar9 * 0x10);
        uVar10 = *(undefined8 *)(*(long *)(original + 0x38) + uVar9 * 8);
        uVar11 = puVar3[1];
        uVar13 = *puVar3;
        puVar4 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + uVar9 * 0x10);
        puVar4[1] = puVar3[1];
        *puVar4 = uVar13;
        *(undefined8 *)(*(long *)(p_Var6 + 0x38) + uVar9 * 8) = uVar10;
        _swift_bridgeObjectRetain(uVar13);
        _swift_bridgeObjectRetain(uVar11);
        _swift_bridgeObjectRetain(uVar10);
        if (uVar7 != 0) break;
LAB_100844724:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1008447c8);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar2) goto LAB_10084479c;
          uVar7 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_10084479c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1008447c8 | FUN_1008447c8 */

void FUN_1008447c8(_DictionaryStorage *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  __RawDictionaryStorage *p_Var1;
  code *pcVar2;
  UUID UVar3;
  __RawDictionaryStorage *p_Var4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  __RawDictionaryStorage *original;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  puVar7 = &stack0xffffffffffffff40 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f7830(param_1,param_2);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(param_1,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100844a00:
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var1 = original + 0x40;
  uVar8 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var4 != original || p_Var1 + uVar8 * 8 <= p_Var4 + 0x40) {
    _memmove(p_Var4 + 0x40,p_Var1,uVar8 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar8 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_1008448f0;
  do {
    uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar10 = *(long *)(lVar6 + 0x48) * uVar9;
      (**(code **)(lVar6 + 0x10))(puVar7,*(long *)(original + 0x30) + lVar10,UVar3.unknown);
      lVar5 = param_3;
      FUN_1000f7830(param_3,param_4);
      lVar13 = *(long *)(lVar5 + -8);
      lVar14 = (long)puVar7 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar12 = *(long *)(lVar13 + 0x48) * uVar9;
      (**(code **)(lVar13 + 0x10))(lVar14,*(long *)(original + 0x38) + lVar12,lVar5);
      (**(code **)(lVar6 + 0x20))(*(long *)(p_Var4 + 0x30) + lVar10,puVar7,UVar3.unknown);
      (**(code **)(lVar13 + 0x20))(*(long *)(p_Var4 + 0x38) + lVar12,lVar14,lVar5);
      if (local_68 != 0) break;
LAB_1008448f0:
      do {
        lVar5 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100844a28);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar5) {
          _swift_release(original);
          goto LAB_100844a00;
        }
        local_68 = *(ulong *)(p_Var1 + lVar5 * 8);
        lVar11 = lVar11 + 1;
      } while (local_68 == 0);
      uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar11 = lVar5;
    }
  } while( true );
}



/* Address: 0x100844a28 | FUN_100844a28 */

void FUN_100844a28(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fe74b8;
  FUN_1000f7830(&DAT_100fe74b8,&DAT_100c7ce20);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_100844b04;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_100844b04:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100844ba0);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_100844b78;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_100844b78:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x100844ba0 | FUN_100844ba0 */

void FUN_100844ba0(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar15;
  
  this = (_DictionaryStorage *)&DAT_100fe74c8;
  FUN_1000f7830(&DAT_100fe74c8,&DAT_100c7c4e0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var9 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar10 = (1L << ((ulong)(byte)p_Var9[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var9 != original || p_Var1 + uVar10 * 8 <= p_Var9 + 0x40) {
      _memmove(p_Var9 + 0x40,p_Var1,uVar10 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(p_Var9 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(original + 0x40);
    if (uVar10 == 0) goto LAB_100844c7c;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar15 << 6;
        lVar14 = uVar12 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar5 = puVar2[1];
        lVar13 = uVar12 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar7 = *(undefined1 *)(puVar3 + 2);
        puVar3 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + lVar14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(p_Var9 + 0x38) + lVar13);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        *(undefined1 *)(puVar2 + 2) = uVar7;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar6);
        if (uVar10 != 0) break;
LAB_100844c7c:
        do {
          lVar13 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100844d28);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_100844d00;
          uVar10 = *(ulong *)(p_Var1 + lVar13 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar15 = lVar13;
      }
    } while( true );
  }
LAB_100844d00:
  _swift_release(original);
  *unaff_x20 = (long)p_Var9;
  return;
}



/* Address: 0x100844d28 | FUN_100844d28 */

void FUN_100844d28(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar15;
  
  this = (_DictionaryStorage *)&DAT_100fe6fe0;
  FUN_1000f7830(&DAT_100fe6fe0,&DAT_100c7b490);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var9 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar10 = (1L << ((ulong)(byte)p_Var9[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var9 != original || p_Var1 + uVar10 * 8 <= p_Var9 + 0x40) {
      _memmove(p_Var9 + 0x40,p_Var1,uVar10 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(p_Var9 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(original + 0x40);
    if (uVar10 == 0) goto LAB_100844e08;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar15 << 6;
        lVar14 = uVar12 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar5 = puVar2[1];
        lVar13 = uVar12 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        uVar7 = *(undefined1 *)(puVar3 + 2);
        puVar3 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + lVar14);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(p_Var9 + 0x38) + lVar13);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        *(undefined1 *)(puVar2 + 2) = uVar7;
        _swift_bridgeObjectRetain();
        FUN_1001037b4(uVar4,uVar6);
        if (uVar10 != 0) break;
LAB_100844e08:
        do {
          lVar13 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100844ebc);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_100844e90;
          uVar10 = *(ulong *)(p_Var1 + lVar13 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar15 = lVar13;
      }
    } while( true );
  }
LAB_100844e90:
  _swift_release(original);
  *unaff_x20 = (long)p_Var9;
  return;
}



/* Address: 0x100844ebc | FUN_100844ebc */

void FUN_100844ebc(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  
  this = (_DictionaryStorage *)&DAT_100fe7788;
  FUN_1000f7830(&DAT_100fe7788,&DAT_100c7ce10);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var9 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar10 = (1L << ((ulong)(byte)p_Var9[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var9 != original || p_Var1 + uVar10 * 8 <= p_Var9 + 0x40) {
      _memmove(p_Var9 + 0x40,p_Var1,uVar10 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(p_Var9 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(original + 0x40);
    if (uVar10 == 0) goto LAB_100844fa4;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar16 << 6;
        lVar14 = uVar12 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        lVar13 = uVar12 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
        uVar4 = *puVar3;
        uVar5 = puVar3[1];
        uVar6 = *(undefined1 *)((long)puVar3 + 0x11);
        uVar15 = puVar2[1];
        uVar17 = *puVar2;
        uVar7 = *(undefined1 *)(puVar3 + 2);
        puVar3 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + lVar14);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar17;
        puVar2 = (undefined8 *)(*(long *)(p_Var9 + 0x38) + lVar13);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        *(undefined1 *)(puVar2 + 2) = uVar7;
        *(undefined1 *)((long)puVar2 + 0x11) = uVar6;
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar15);
        FUN_1007fb2a0(uVar4,uVar5,uVar7);
        if (uVar10 != 0) break;
LAB_100844fa4:
        do {
          lVar13 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100845078);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_100845044;
          uVar10 = *(ulong *)(p_Var1 + lVar13 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar16 = lVar13;
      }
    } while( true );
  }
LAB_100845044:
  _swift_release(original);
  *unaff_x20 = (long)p_Var9;
  return;
}



/* Address: 0x100845078 | FUN_100845078 */

void FUN_100845078(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  __RawDictionaryStorage *p_Var19;
  __RawDictionaryStorage *original;
  ulong local_b8;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe6fe8;
  FUN_1000f7830(&DAT_100fe6fe8,&DAT_100c7ce30);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100845318:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var19 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_b8 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_b8 = ~(-1L << (uVar16 & 0x3f));
  }
  local_b8 = local_b8 & *(ulong *)p_Var19;
  lVar13 = 0;
  do {
    if (local_b8 == 0) {
      do {
        lVar18 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100845348);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var19 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(p_Var19,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100845318;
        }
        local_b8 = *(ulong *)(p_Var19 + lVar18 * 8);
        lVar13 = lVar13 + 1;
      } while (local_b8 == 0);
      uVar12 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_b8 = local_b8 - 1 & local_b8;
    }
    else {
      uVar12 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_b8 = local_b8 - 1 & local_b8;
      lVar18 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar18 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar12 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar14 = (undefined8 *)(*(long *)(original + 0x38) + uVar12 * 0x18);
    uVar3 = *puVar14;
    uVar5 = puVar14[1];
    uVar6 = *(undefined1 *)(puVar14 + 2);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      FUN_1004a7398(uVar3,uVar5,uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar17 >> 6;
      do {
        uVar11 = uVar15 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10084534c);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar11 != uVar12) {
          uVar15 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar15 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar15 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar15 + 0x40);
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar14 = pcVar2;
    puVar14[1] = pvVar4;
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x18);
    *puVar14 = uVar3;
    puVar14[1] = uVar5;
    *(undefined1 *)(puVar14 + 2) = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar18;
  } while( true );
}



/* Address: 0x10084534c | FUN_10084534c */

void FUN_10084534c(long param_1,bool param_2)

{
  undefined8 *puVar1;
  __int64 capacity;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var10;
  undefined8 uVar11;
  long lVar12;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe6fd8;
  FUN_1000f7830(&DAT_100fe6fd8,&DAT_100c7ce00);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1008454d4:
    _swift_release(original);
    *unaff_x20 = p_Var5;
    return;
  }
  p_Var10 = original + 0x40;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)p_Var10;
  lVar7 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100845504);
          (*pcVar4)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar12) {
          if ((param_2 & 1U) != 0) {
            uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var10 = -1L << (uVar9 & 0x3f);
            }
            else {
              _bzero(p_Var10,uVar9 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1008454d4;
        }
        uVar9 = *(ulong *)(p_Var10 + lVar12 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar9 == 0);
      uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar12 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar12 << 6;
    puVar1 = (undefined8 *)(*(long *)(original + 0x30) + uVar6 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar6 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar11);
    }
    FUN_1008462c0(uVar2,uVar3,uVar11,p_Var5);
    lVar7 = lVar12;
  } while( true );
}



/* Address: 0x100845504 | FUN_100845504 */

void FUN_100845504(long param_1,uint param_2,_DictionaryStorage *param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  UUID UVar4;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  __RawDictionaryStorage *p_Var11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long *unaff_x20;
  __int64 _Var15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  __RawDictionaryStorage *original;
  long lVar20;
  undefined1 auStack_f0 [12];
  uint local_e4;
  ulong local_88;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  puVar8 = auStack_f0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var15 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var15 = param_1;
  }
  FUN_1000f7830(param_3,param_4);
  p_Var5 = original;
  Swift::_DictionaryStorage::_resize(param_3,original,_Var15,SUB41(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_100845850:
    _swift_release(original);
LAB_100845858:
    *unaff_x20 = (long)p_Var5;
    return;
  }
  lVar18 = 0;
  p_Var11 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_88 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_88 = ~(-1L << (uVar12 & 0x3f));
  }
  local_88 = local_88 & *(ulong *)p_Var11;
  lVar1 = 0x20;
  local_e4 = param_2;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x10;
  }
  do {
    if (local_88 == 0) {
      do {
        lVar19 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100845880);
          (*pcVar3)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((local_e4 & 1) == 0) {
            _swift_release(original);
            goto LAB_100845858;
          }
          uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var11 = -1L << (uVar12 & 0x3f);
          }
          else {
            _bzero(p_Var11,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100845850;
        }
        local_88 = *(ulong *)(p_Var11 + lVar19 * 8);
        lVar18 = lVar18 + 1;
      } while (local_88 == 0);
      uVar9 = (local_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_88 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_88 = local_88 - 1 & local_88;
    }
    else {
      uVar9 = (local_88 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_88 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_88 = local_88 - 1 & local_88;
      lVar19 = lVar18;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    lVar18 = param_5;
    FUN_1000f7830(param_5,param_6);
    lVar16 = *(long *)(lVar18 + -8);
    lVar17 = (long)puVar8 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar13 = *(long *)(lVar7 + 0x48);
    (**(code **)(lVar7 + lVar1))(puVar8,*(long *)(original + 0x30) + lVar13 * uVar9,UVar4.unknown);
    lVar20 = *(long *)(lVar16 + 0x48);
    (**(code **)(lVar16 + lVar1))(lVar17,*(long *)(original + 0x38) + lVar20 * uVar9,lVar18);
    _Var15 = *(__int64 *)(p_Var5 + 0x28);
    FUN_100847968();
    uVar6 = Swift::Hashable::_rawHashValue(_Var15);
    uVar14 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar14 ^ 0xffffffffffffffff);
    uVar10 = uVar6 >> 6;
    uVar9 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar2 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar6 = uVar10 + 1;
        if ((uVar6 == uVar9) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100845884);
          (*pcVar3)();
        }
        uVar10 = 0;
        if (uVar6 != uVar9) {
          uVar10 = uVar6;
        }
        bVar2 = (bool)(uVar6 == uVar9 | bVar2);
      } while (*(ulong *)(p_Var5 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var5 + uVar10 * 8 + 0x40);
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar10 + 0x40) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var5 + uVar10 + 0x40);
    (**(code **)(lVar7 + 0x20))(*(long *)(p_Var5 + 0x30) + lVar13 * uVar9,puVar8,UVar4.unknown);
    (**(code **)(lVar16 + 0x20))(*(long *)(p_Var5 + 0x38) + lVar20 * uVar9,lVar17,lVar18);
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar18 = lVar19;
  } while( true );
}



/* Address: 0x100845884 | FUN_100845884 */

void FUN_100845884(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe74b8;
  FUN_1000f7830(&DAT_100fe74b8,&DAT_100c7ce20);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100845b04:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100845b34);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100845b04;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100845b38);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x100845b38 | FUN_100845b38 */

void FUN_100845b38(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  ulong uVar18;
  __RawDictionaryStorage *p_Var19;
  __RawDictionaryStorage *original;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe74c8;
  FUN_1000f7830(&DAT_100fe74c8,&DAT_100c7c4e0);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100845dc8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var19 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var19;
  lVar13 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100845df8);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) != 0) {
            uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var19 = -1L << (uVar18 & 0x3f);
            }
            else {
              _bzero(p_Var19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100845dc8;
        }
        uVar18 = *(ulong *)(p_Var19 + lVar20 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar18 == 0);
      uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar12 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar20 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar12 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar14 = (undefined8 *)(*(long *)(original + 0x38) + uVar12 * 0x18);
    uVar3 = *puVar14;
    uVar5 = puVar14[1];
    uVar6 = *(undefined1 *)(puVar14 + 2);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(uVar5);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar17 >> 6;
      do {
        uVar11 = uVar15 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100845dfc);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar11 != uVar12) {
          uVar15 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar15 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar15 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar15 + 0x40);
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar14 = pcVar2;
    puVar14[1] = pvVar4;
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x18);
    *puVar14 = uVar3;
    puVar14[1] = uVar5;
    *(undefined1 *)(puVar14 + 2) = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar20;
  } while( true );
}



/* Address: 0x100845dfc | FUN_100845dfc */

void FUN_100845dfc(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *unaff_x20;
  __RawDictionaryStorage *p_Var19;
  ulong uVar20;
  __RawDictionaryStorage *original;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe6fe0;
  FUN_1000f7830(&DAT_100fe6fe0,&DAT_100c7b490);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100846094:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var19 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar20 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar20 = uVar20 & *(ulong *)p_Var19;
  lVar13 = 0;
  do {
    if (uVar20 == 0) {
      do {
        lVar18 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1008460c4);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar20 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var19 = -1L << (uVar20 & 0x3f);
            }
            else {
              _bzero(p_Var19,uVar20 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100846094;
        }
        uVar20 = *(ulong *)(p_Var19 + lVar18 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar20 == 0);
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
    }
    else {
      uVar12 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar20 = uVar20 - 1 & uVar20;
      lVar18 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar18 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar12 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar14 = (undefined8 *)(*(long *)(original + 0x38) + uVar12 * 0x18);
    uVar3 = *puVar14;
    uVar5 = puVar14[1];
    uVar6 = *(undefined1 *)(puVar14 + 2);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      FUN_1001037b4(uVar3,uVar5);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar17 >> 6;
      do {
        uVar11 = uVar15 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1008460c8);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar11 != uVar12) {
          uVar15 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar15 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar15 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar15 + 0x40);
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar14 = pcVar2;
    puVar14[1] = pvVar4;
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x18);
    *puVar14 = uVar3;
    puVar14[1] = uVar5;
    *(undefined1 *)(puVar14 + 2) = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar18;
  } while( true );
}



/* Address: 0x1008460c8 | FUN_1008460c8 */

void FUN_1008460c8(long param_1,bool param_2)

{
  __int64 capacity;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe7788;
  FUN_1000f7830(&DAT_100fe7788,&DAT_100c7ce10);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10084628c:
    _swift_release(original);
    *unaff_x20 = p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008462c0);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10084628c;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar14 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
    puVar12 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    uVar1 = *puVar12;
    uVar3 = puVar12[1];
    puVar12 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x18);
    uVar2 = *puVar12;
    uVar4 = puVar12[1];
    bVar5 = *(byte *)(puVar12 + 2);
    cVar6 = *(char *)((long)puVar12 + 0x11);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar3);
      FUN_1007fb2a0(uVar2,uVar4,bVar5);
    }
    uVar9 = 0x100;
    if (cVar6 == '\0') {
      uVar9 = 0;
    }
    FUN_1008463cc(uVar1,uVar3,uVar2,uVar4,uVar9 | bVar5,p_Var8);
    lVar11 = lVar14;
  } while( true );
}



/* Address: 0x1008462c0 | FUN_1008462c0 */

void FUN_1008462c0(long param_1,undefined *param_2,undefined8 param_3,long param_4)

{
  _HashTable _Var1;
  long *plVar2;
  char *pcVar3;
  void *pvVar4;
  Hasher HVar5;
  ulong uVar6;
  Bucket BVar7;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined1 auStack_98 [72];
  
  HVar5.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(param_4 + 0x28));
  Swift::Hasher::_combine(*(__uint64 *)(param_1 + 0x10),HVar5);
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar3 = (char *)puVar9[-1];
      pvVar4 = (void *)*puVar9;
      _swift_bridgeObjectRetain(pvVar4);
      SVar10.bridgeObject = pvVar4;
      SVar10.str = pcVar3;
      Swift::String::hash((Hasher)auStack_98,SVar10);
      _swift_bridgeObjectRelease(pvVar4);
      puVar9 = puVar9 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  HVar5.unknown = auStack_98;
  FUN_10080009c(HVar5.unknown,param_2);
  uVar6 = Swift::Hasher::_finalize(HVar5);
  _Var1.unknown = (undefined *)(param_4 + 0x40);
  BVar7 = Swift::_HashTable::nextHole
                    ((Bucket)(uVar6 & (-1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) ^
                                      0xffffffffffffffffU)),_Var1);
  uVar6 = (ulong)BVar7.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar6) =
       1L << (BVar7.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar6);
  plVar2 = (long *)(*(long *)(param_4 + 0x30) + BVar7.offset * 0x10);
  *plVar2 = param_1;
  plVar2[1] = (long)param_2;
  *(undefined8 *)(*(long *)(param_4 + 0x38) + BVar7.offset * 8) = param_3;
  *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
  return;
}



/* Address: 0x1008463cc | FUN_1008463cc */

void FUN_1008463cc(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,long param_6)

{
  _HashTable _Var1;
  long *plVar2;
  char *pcVar3;
  void *pvVar4;
  Hasher HVar5;
  ulong uVar6;
  Bucket BVar7;
  undefined8 *puVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_a8 [72];
  
  HVar5.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(param_6 + 0x28));
  Swift::Hasher::_combine(*(__uint64 *)(param_1 + 0x10),HVar5);
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar3 = (char *)puVar8[-1];
      pvVar4 = (void *)*puVar8;
      _swift_bridgeObjectRetain(pvVar4);
      SVar10.bridgeObject = pvVar4;
      SVar10.str = pcVar3;
      Swift::String::hash((Hasher)auStack_a8,SVar10);
      _swift_bridgeObjectRelease(pvVar4);
      puVar8 = puVar8 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  HVar5.unknown = auStack_a8;
  FUN_10080009c(HVar5.unknown,param_2);
  uVar6 = Swift::Hasher::_finalize(HVar5);
  _Var1.unknown = (undefined *)(param_6 + 0x40);
  BVar7 = Swift::_HashTable::nextHole
                    ((Bucket)(uVar6 & (-1L << ((ulong)*(byte *)(param_6 + 0x20) & 0x3f) ^
                                      0xffffffffffffffffU)),_Var1);
  uVar6 = (ulong)BVar7.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar6) =
       1L << (BVar7.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar6);
  plVar2 = (long *)(*(long *)(param_6 + 0x30) + BVar7.offset * 0x10);
  *plVar2 = param_1;
  plVar2[1] = (long)param_2;
  puVar8 = (undefined8 *)(*(long *)(param_6 + 0x38) + BVar7.offset * 0x18);
  *puVar8 = param_3;
  puVar8[1] = param_4;
  *(char *)(puVar8 + 2) = (char)param_5;
  *(byte *)((long)puVar8 + 0x11) = (byte)((uint)param_5 >> 8) & 1;
  *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
  return;
}



/* Address: 0x1008464fc | FUN_1008464fc */

void FUN_1008464fc(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  UUID UVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *unaff_x20;
  uVar3 = param_3;
  _swift_bridgeObjectRetain(lVar6);
  FUN_1008351b4(param_2);
  _swift_bridgeObjectRelease(lVar6);
  if ((uVar3 & 1) == 0) {
    FUN_1000f7830(param_3,param_4);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_3 - 8) + 0x38);
    uVar4 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1008447c8(param_5,param_6,param_3,param_4);
    }
    lVar5 = *(long *)(lVar6 + 0x30);
    UVar2 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar2.unknown + -8) + 8))
              (lVar5 + *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * param_2,UVar2.unknown);
    lVar5 = *(long *)(lVar6 + 0x38);
    uVar3 = param_3;
    FUN_1000f7830(param_3,param_4);
    lVar7 = *(long *)(uVar3 - 8);
    (**(code **)(lVar7 + 0x20))(param_1,lVar5 + *(long *)(lVar7 + 0x48) * param_2,uVar3);
    FUN_100846c98(param_2,lVar6,param_3,param_4);
    *unaff_x20 = lVar6;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x38);
    uVar4 = 0;
    param_3 = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010084663c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar4,1,param_3);
  return;
}



/* Address: 0x100846660 | FUN_100846660 */

undefined8 FUN_100846660(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_1008350fc();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_100844ebc();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10);
    uVar4 = *puVar1;
    _swift_bridgeObjectRelease(puVar1[1]);
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x18);
    FUN_100846f08(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  return uVar4;
}



/* Address: 0x100846760 | FUN_100846760 */

void FUN_100846760(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  UUID UVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  uVar4 = param_2;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_1;
  local_68 = param_6;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  lVar10 = (long)&local_80 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  FUN_1008351b4(param_2);
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar6 = (ulong)~(uint)uVar4 & 1;
  lVar7 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100846898);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar7) {
    param_3 = param_3 & 1;
    FUN_100845504(lVar7,param_3,local_80,uStack_78,local_68,param_7);
    uVar3 = param_2;
    FUN_1008351b4(param_2);
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100846910);
      (*pcVar1)();
    }
    lVar7 = *unaff_x20;
    lVar5 = local_68;
  }
  else if ((param_3 & 1) == 0) {
    FUN_1008447c8(local_80,uStack_78,local_68,param_7);
    lVar7 = *unaff_x20;
    lVar5 = local_68;
  }
  else {
    lVar7 = *unaff_x20;
    lVar5 = local_68;
  }
  local_68 = lVar5;
  if ((uVar4 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x38);
    FUN_1000f7830(lVar5,param_7);
                    /* WARNING: Could not recover jumptable at 0x000100846890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar5 + -8) + 0x28))
              (lVar7 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar3,local_70,lVar5);
    return;
  }
  (**(code **)(lVar9 + 0x10))(lVar10,param_2,UVar2.unknown);
  FUN_100844384(uVar3,lVar10,local_70,lVar7,local_68,param_7);
  return;
}



/* Address: 0x100846910 | FUN_100846910 */

void FUN_100846910(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  
  lVar11 = *unaff_x20;
  lVar5 = param_4;
  uVar6 = param_5;
  FUN_1008350fc();
  lVar8 = *(long *)(lVar11 + 0x10);
  uVar10 = (ulong)~(uint)uVar6 & 1;
  lVar7 = lVar8 + uVar10;
  if (SCARRY8(lVar8,uVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100846a0c);
    (*pcVar4)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar7) {
    FUN_1008460c8(lVar7,param_6 & 1);
    lVar5 = param_4;
    uVar10 = param_5;
    FUN_1008350fc();
    if (((uint)uVar6 & 1) != ((uint)uVar10 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008469bc);
      (*pcVar4)();
    }
  }
  else if ((param_6 & 1) == 0) {
    FUN_100844ebc();
    lVar7 = *unaff_x20;
    goto joined_r0x000100846a20;
  }
  lVar7 = *unaff_x20;
joined_r0x000100846a20:
  if ((uVar6 & 1) != 0) {
    puVar9 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar5 * 0x18);
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    *puVar9 = param_1;
    puVar9[1] = param_2;
    uVar3 = *(undefined1 *)(puVar9 + 2);
    *(char *)(puVar9 + 2) = (char)param_3;
    *(byte *)((long)puVar9 + 0x11) = (byte)((ulong)param_3 >> 8) & 1;
    FUN_1007fb2ec(uVar1,uVar2,uVar3);
    return;
  }
  FUN_100844450();
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_5);
  return;
}



/* Address: 0x100846a64 | FUN_100846a64 */

void FUN_100846a64(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  void *pvVar7;
  code *pcVar8;
  Bucket BVar9;
  Hasher HVar10;
  ulong uVar11;
  _HashTable _Var12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  String SVar19;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar17 = param_1.offset + 1U & (uVar13 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0) {
    uVar13 = ~uVar13;
    _Var12.unknown = _Var1.unknown;
    BVar9 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar16 = BVar9.offset + 1U & uVar13;
    do {
      plVar2 = (long *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
      lVar4 = *plVar2;
      puVar6 = (undefined *)plVar2[1];
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      Swift::Hasher::_combine(*(__uint64 *)(lVar4 + 0x10),(Hasher)_Var12.unknown);
      lVar14 = *(long *)(lVar4 + 0x10);
      if (lVar14 == 0) {
        _swift_bridgeObjectRetain(lVar4);
        _swift_bridgeObjectRetain(puVar6);
      }
      else {
        _swift_bridgeObjectRetain(lVar4);
        _swift_bridgeObjectRetain(puVar6);
        puVar15 = (undefined8 *)(lVar4 + 0x28);
        do {
          pcVar5 = (char *)puVar15[-1];
          pvVar7 = (void *)*puVar15;
          _swift_bridgeObjectRetain(pvVar7);
          SVar19.bridgeObject = pvVar7;
          SVar19.str = pcVar5;
          Swift::String::hash((Hasher)auStack_a8,SVar19);
          _swift_bridgeObjectRelease(pvVar7);
          puVar15 = puVar15 + 2;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      HVar10.unknown = auStack_a8;
      _Var12.unknown = puVar6;
      FUN_10080009c();
      uVar11 = Swift::Hasher::_finalize(HVar10);
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(lVar4);
      uVar11 = uVar11 & uVar13;
      if (param_1.offset < (long)uVar16) {
        if (uVar11 < uVar16) {
LAB_100846bd4:
          if (param_1.offset < (long)uVar11) goto LAB_100846ae4;
        }
        puVar15 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
        if (((param_1.offset < (long)uVar17) || (puVar3 + 2 <= puVar15)) ||
           (param_1.offset != uVar17)) {
          uVar18 = *puVar3;
          puVar15[1] = puVar3[1];
          *puVar15 = uVar18;
        }
        puVar15 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar17 * 8);
        if (((param_1.offset < (long)uVar17) || (puVar3 + 1 <= puVar15)) ||
           (param_1.offset != uVar17)) {
          *puVar15 = *puVar3;
          param_1.offset = uVar17;
        }
      }
      else if (uVar16 <= uVar11) goto LAB_100846bd4;
LAB_100846ae4:
      uVar17 = uVar17 + 1 & uVar13;
    } while ((*(ulong *)(_Var1.unknown + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0);
  }
  uVar13 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar13) =
       *(ulong *)(_Var1.unknown + uVar13) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100846c98);
    (*pcVar8)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Address: 0x100846c98 | FUN_100846c98 */

void FUN_100846c98(Bucket param_1,long param_2,long param_3,undefined8 param_4)

{
  _HashTable _Var1;
  code *pcVar2;
  UUID UVar3;
  Bucket BVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  __int64 seed;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 uStack_80;
  code *local_78;
  ulong local_70;
  long local_68;
  
  local_88 = param_3;
  uStack_80 = param_4;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  lVar7 = *(long *)(lVar14 + 0x40);
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar13 = param_1.offset + 1U & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    BVar4 = Swift::_HashTable::previousHole(param_1,_Var1);
    local_70 = BVar4.offset + 1U & uVar8;
    lVar9 = *(long *)(lVar14 + 0x48);
    local_78 = *(code **)(lVar14 + 0x10);
    local_68 = lVar14;
    do {
      lVar14 = lVar9 * uVar13;
      (*local_78)(auStack_90 + -(lVar7 + 0xfU & 0xfffffffffffffff0),
                  *(long *)(param_2 + 0x30) + lVar14,UVar3.unknown);
      seed = *(__int64 *)(param_2 + 0x28);
      FUN_100847968();
      uVar5 = Swift::Hashable::_rawHashValue(seed);
      (**(code **)(local_68 + 8))(auStack_90 + -(lVar7 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
      uVar5 = uVar5 & uVar8;
      if (param_1.offset < (long)local_70) {
        if (local_70 <= uVar5 || (long)uVar5 <= param_1.offset) {
LAB_100846dec:
          lVar10 = lVar9 * param_1.offset;
          uVar5 = *(long *)(param_2 + 0x30) + lVar10;
          lVar6 = *(long *)(param_2 + 0x30) + lVar14;
          if ((lVar10 < lVar14) || ((ulong)(lVar6 + lVar9) <= uVar5)) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar6,1,UVar3.unknown);
          }
          else if (lVar10 - lVar14 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar6,1,UVar3.unknown);
          }
          lVar14 = *(long *)(param_2 + 0x38);
          lVar6 = local_88;
          FUN_1000f7830(local_88,uStack_80);
          lVar12 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
          lVar10 = lVar12 * param_1.offset;
          uVar5 = lVar14 + lVar10;
          lVar11 = lVar12 * uVar13;
          lVar14 = lVar14 + lVar11;
          param_1.offset = uVar13;
          if (lVar10 < lVar11 || (ulong)(lVar14 + lVar12) <= uVar5) {
            _swift_arrayInitWithTakeFrontToBack(uVar5,lVar14,1);
          }
          else if (lVar10 - lVar11 != 0) {
            _swift_arrayInitWithTakeBackToFront(uVar5,lVar14,1,lVar6);
          }
        }
      }
      else if (local_70 <= uVar5 && (long)uVar5 <= param_1.offset) goto LAB_100846dec;
      uVar13 = uVar13 + 1 & uVar8;
    } while ((*(ulong *)(_Var1.unknown + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
  }
  uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar8) =
       *(ulong *)(_Var1.unknown + uVar8) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100846f08);
  (*pcVar2)();
}



/* Address: 0x100846f08 | FUN_100846f08 */

void FUN_100846f08(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  void *pvVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher HVar9;
  ulong uVar10;
  _HashTable _Var11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar17 = param_1.offset + 1U & (uVar12 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0) {
    uVar12 = ~uVar12;
    _Var11.unknown = _Var1.unknown;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar16 = BVar8.offset + 1U & uVar12;
    do {
      plVar2 = (long *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
      lVar3 = *plVar2;
      puVar5 = (undefined *)plVar2[1];
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      Swift::Hasher::_combine(*(__uint64 *)(lVar3 + 0x10),(Hasher)_Var11.unknown);
      lVar15 = *(long *)(lVar3 + 0x10);
      if (lVar15 == 0) {
        _swift_bridgeObjectRetain(lVar3);
        _swift_bridgeObjectRetain(puVar5);
      }
      else {
        _swift_bridgeObjectRetain(lVar3);
        _swift_bridgeObjectRetain(puVar5);
        puVar13 = (undefined8 *)(lVar3 + 0x28);
        do {
          pcVar4 = (char *)puVar13[-1];
          pvVar6 = (void *)*puVar13;
          _swift_bridgeObjectRetain(pvVar6);
          SVar20.bridgeObject = pvVar6;
          SVar20.str = pcVar4;
          Swift::String::hash((Hasher)auStack_a8,SVar20);
          _swift_bridgeObjectRelease(pvVar6);
          puVar13 = puVar13 + 2;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      HVar9.unknown = auStack_a8;
      _Var11.unknown = puVar5;
      FUN_10080009c();
      uVar10 = Swift::Hasher::_finalize(HVar9);
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(lVar3);
      uVar10 = uVar10 & uVar12;
      if (param_1.offset < (long)uVar16) {
        if (uVar10 < uVar16) {
LAB_100847080:
          if (param_1.offset < (long)uVar10) goto LAB_100846f90;
        }
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar14 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
        if (((param_1.offset < (long)uVar17) || (puVar14 + 2 <= puVar13)) ||
           (param_1.offset != uVar17)) {
          uVar18 = *puVar14;
          puVar13[1] = puVar14[1];
          *puVar13 = uVar18;
        }
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x18);
        puVar14 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar17 * 0x18);
        if (((param_1.offset < (long)uVar17) || (puVar14 + 3 <= puVar13)) ||
           (param_1.offset != uVar17)) {
          uVar19 = puVar14[1];
          uVar18 = *puVar14;
          puVar13[2] = puVar14[2];
          puVar13[1] = uVar19;
          *puVar13 = uVar18;
          param_1.offset = uVar17;
        }
      }
      else if (uVar16 <= uVar10) goto LAB_100847080;
LAB_100846f90:
      uVar17 = uVar17 + 1 & uVar12;
    } while ((*(ulong *)(_Var1.unknown + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0);
  }
  uVar12 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar12) =
       *(ulong *)(_Var1.unknown + uVar12) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100847148);
    (*pcVar7)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Address: 0x100847148 | FUN_100847148 */

code * FUN_100847148(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  pvVar1 = (void *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0x993c);
  }
  *param_1 = pvVar1;
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  pvVar3 = pvVar1;
  FUN_10022daa4();
  *(void **)((long)pvVar1 + 0x40) = pvVar3;
  lVar4 = (long)pvVar1 + 0x20;
  FUN_1008471e0(lVar4,param_2,param_3,uVar2);
  *(long *)((long)pvVar1 + 0x48) = lVar4;
  return FUN_10022d88c;
}



/* Address: 0x1008471e0 | FUN_1008471e0 */

undefined1  [16] FUN_1008471e0(undefined8 *param_1,long param_2,ulong param_3,uint param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  puVar3 = (undefined8 *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar3 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x65cf);
  }
  *param_1 = puVar3;
  puVar3[2] = param_3;
  puVar3[3] = unaff_x20;
  puVar3[1] = param_2;
  lVar9 = *unaff_x20;
  lVar4 = param_2;
  uVar5 = param_3;
  FUN_1008350fc();
  *(byte *)(puVar3 + 5) = (byte)uVar5 & 1;
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar1 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008472d8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar1) {
    FUN_10084534c(lVar1,param_4 & 1);
    FUN_1008350fc();
    lVar4 = param_2;
    if (((uint)uVar5 & 1) != ((uint)param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008472b8);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100844644();
    puVar3[4] = lVar4;
    goto joined_r0x0001008472ec;
  }
  puVar3[4] = lVar4;
joined_r0x0001008472ec:
  if ((uVar5 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x38) + lVar4 * 8);
  }
  *puVar3 = uVar7;
  auVar10._8_8_ = puVar3;
  auVar10._0_8_ = FUN_10084731c;
  return auVar10;
}



/* Address: 0x10084731c | FUN_10084731c */

void FUN_10084731c(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  plVar8 = (long *)*param_1;
  lVar9 = *plVar8;
  bVar1 = *(byte *)(plVar8 + 5);
  if ((param_2 & 1) == 0) {
    if (lVar9 == 0) goto LAB_1008473a8;
    uVar6 = plVar8[4];
    lVar4 = *(long *)plVar8[3];
    if ((bVar1 & 1) != 0) goto LAB_10084739c;
    lVar5 = lVar4 + (uVar6 >> 6) * 8;
    lVar7 = *(long *)(lVar4 + 0x30);
    lVar11 = plVar8[2];
    lVar10 = plVar8[1];
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar6 & 0x3f);
    plVar2 = (long *)(lVar7 + uVar6 * 0x10);
    plVar2[1] = lVar11;
    *plVar2 = lVar10;
    *(long *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = lVar9;
    lVar5 = *(long *)(lVar4 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10084744c);
      (*pcVar3)();
    }
  }
  else {
    if (lVar9 == 0) {
LAB_1008473a8:
      if ((bVar1 & 1) != 0) {
        lVar4 = plVar8[4];
        lVar5 = *(long *)plVar8[3];
        FUN_1008252a8(*(long *)(lVar5 + 0x30) + lVar4 * 0x10);
        FUN_100846a64(lVar4,lVar5);
      }
      goto LAB_100847420;
    }
    uVar6 = plVar8[4];
    lVar4 = *(long *)plVar8[3];
    if ((bVar1 & 1) != 0) {
LAB_10084739c:
      *(long *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = lVar9;
      goto LAB_100847420;
    }
    lVar5 = lVar4 + (uVar6 >> 6) * 8;
    lVar7 = *(long *)(lVar4 + 0x30);
    lVar11 = plVar8[2];
    lVar10 = plVar8[1];
    *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar6 & 0x3f);
    plVar2 = (long *)(lVar7 + uVar6 * 0x10);
    plVar2[1] = lVar11;
    *plVar2 = lVar10;
    *(long *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = lVar9;
    lVar5 = *(long *)(lVar4 + 0x10);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10084738c);
      (*pcVar3)();
    }
  }
  lVar7 = plVar8[1];
  lVar10 = plVar8[2];
  *(long *)(lVar4 + 0x10) = lVar5 + 1;
  _swift_bridgeObjectRetain(lVar7);
  _swift_bridgeObjectRetain(lVar10);
LAB_100847420:
  lVar4 = *plVar8;
  _swift_bridgeObjectRetain(lVar9);
  _swift_bridgeObjectRelease(lVar4);
  _free(plVar8);
  return;
}



/* Address: 0x10084744c | FUN_10084744c */

void FUN_10084744c(long param_1)

{
  FUN_1008355a4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100847460 | FUN_100847460 */

void FUN_100847460(long param_1)

{
  FUN_10083570c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100847474 | FUN_100847474 */

void FUN_100847474(long param_1)

{
  FUN_100835a50(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100847488 | FUN_100847488 */

void FUN_100847488(long param_1)

{
  FUN_100835a74(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10084749c | FUN_10084749c */

undefined8 FUN_10084749c(undefined8 param_1)

{
  FUN_100847680(param_1,&DAT_100f06240);
  return param_1;
}



/* Address: 0x1008474c8 | FUN_1008474c8 */

void FUN_1008474c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  return;
}



/* Address: 0x100847500 | FUN_100847500 */

void FUN_100847500(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100847534 | FUN_100847534 */

void FUN_100847534(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x50;
  uVar5 = *(undefined1 *)(unaff_x20 + 0x20);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005c804c;
  FUN_1008438c0(plVar6,param_1,param_2,uVar1,uVar3,uVar5,uVar2,uVar4);
  return;
}



/* Address: 0x1008475cc | FUN_1008475cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008475cc(void)

{
  return ZEXT816(0x100fe7710);
}



/* Address: 0x1008475ec | FUN_1008475ec */

undefined * FUN_1008475ec(void)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_100847620(0);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1008475f8 | FUN_1008475f8 */

void FUN_1008475f8(void)

{
  FUN_100847620(0);
  return;
}



/* Address: 0x100847620 | FUN_100847620 */

void FUN_100847620(void)

{
  Mutex MVar1;
  undefined *puVar2;
  
  if (DAT_100fe7778 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100f06240;
  MVar1 = Synchronization::Mutex::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fe7778 = MVar1.unknown;
  return;
}



/* Address: 0x100847670 | FUN_100847670 */

undefined1  [16] FUN_100847670(void)

{
  return ZEXT816(0x100f061c0);
}



/* Address: 0x100847680 | FUN_100847680 */

void FUN_100847680(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1008476b8 | FUN_1008476b8 */

undefined8 * FUN_1008476b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar2 = param_2[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}


