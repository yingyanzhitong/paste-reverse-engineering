/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10058cf00 | FUN_10058cf00 */

void FUN_10058cf00(void)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  Task TVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long unaff_x22;
  ulong uVar15;
  
  lVar12 = *(long *)(unaff_x22 + 0x50);
  puVar14 = *(undefined **)(lVar12 + 0x1a0);
  if (puVar14 == (undefined *)0x0) {
    uVar5 = 0;
    lVar10 = lVar12;
  }
  else {
    TVar4.unknown = puVar14;
    _swift_retain();
    Swift::Task::cancel(TVar4);
    _swift_release(puVar14);
    uVar5 = *(undefined8 *)(lVar12 + 0x1a0);
    lVar10 = *(long *)(unaff_x22 + 0x50);
  }
  *(undefined8 *)(lVar12 + 0x1a0) = 0;
  _swift_release(uVar5);
  _swift_beginAccess(lVar10 + 0x108,unaff_x22 + 0x38,1,0);
  lVar13 = *(long *)(lVar10 + 0x108);
  _swift_bridgeObjectRetain(lVar13);
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a7104();
  puVar8 = *(undefined8 **)(lVar10 + 0x108);
  *(undefined **)(lVar10 + 0x108) = puVar14;
  _swift_bridgeObjectRelease();
  lVar12 = 0;
  lVar10 = -1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar11 = -lVar10;
  uVar15 = 0xffffffffffffffff;
  if (uVar11 < 0x40) {
    uVar15 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(lVar13 + 0x40);
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      puVar6 = (undefined8 *)
               (*(long *)(lVar13 + 0x38) + LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) * 0x10 +
               lVar12 * 0x400);
      pcVar2 = (code *)*puVar6;
      uVar5 = puVar6[1];
      FUN_1004db3ac();
      puVar6 = (undefined8 *)&DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar8,0,0);
      *puVar8 = 0xd000000000000013;
      puVar8[1] = 0x8000000100dadc90;
      puVar8[2] = 0;
      *(undefined1 *)(puVar8 + 3) = 4;
      *(undefined8 **)(unaff_x22 + 0x10) = puVar6;
      *(undefined1 *)(unaff_x22 + 0x30) = 1;
      _swift_retain(uVar5);
      _swift_errorRetain(puVar6);
      (*pcVar2)(unaff_x22 + 0x10);
      _swift_release(uVar5);
      FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fcd0b8,&DAT_100c53690);
      _swift_errorRelease();
      puVar8 = puVar6;
    }
    bVar3 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar3) break;
    if ((long)(0x3fU - lVar10 >> 6) <= lVar12) {
      lVar12 = *(long *)(unaff_x22 + 0x50);
      _swift_release(lVar13);
      lVar10 = *(long *)(lVar12 + 200);
      *(long *)(unaff_x22 + 0x58) = lVar10;
      lVar12 = *(long *)(unaff_x22 + 0x50);
      if (lVar10 != 0) {
        lVar13 = *(long *)(lVar12 + 0xd0);
        lVar12 = lVar10;
        _swift_getObjectType(lVar10);
        piVar9 = *(int **)(lVar13 + 0x20);
        iVar1 = *piVar9;
        plVar7 = (long *)(ulong)(uint)piVar9[1];
        _swift_unknownObjectRetain(lVar10);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x60) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_10058d194;
                    /* WARNING: Could not recover jumptable at 0x00010058d164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar9))(lVar12,lVar13);
        return;
      }
      *(undefined8 *)(lVar12 + 200) = 0;
      *(undefined8 *)(lVar12 + 0xd0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010058d18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar15 = ((ulong *)(lVar13 + 0x40))[lVar12];
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10058d194);
  (*pcVar2)();
}



/* Address: 0x10058d194 | FUN_10058d194 */

void FUN_10058d194(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x60));
  _swift_task_switch(FUN_10058d1e0,uVar1,0);
  return;
}



/* Address: 0x10058d1e0 | FUN_10058d1e0 */

void FUN_10058d1e0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x58));
  uVar1 = *(undefined8 *)(lVar2 + 200);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010058d21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058d220 | FUN_10058d220 */

void FUN_10058d220(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_10058d238);
  return;
}



/* Address: 0x10058d238 | FUN_10058d238 */

void FUN_10058d238(void)

{
  Task TVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0x1a0);
  *(long *)(unaff_x22 + 0x18) = lVar2;
  if (lVar2 != 0) {
    TVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
    _swift_retain(lVar2);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x20) = TVar1.unknown;
    *(long *)TVar1.unknown = unaff_x22;
    *(code **)(TVar1.unknown + 8) = FUN_10058d2c0;
    (extension_Swift)::Swift::Task::_get_value(TVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010058d2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058d2c0 | FUN_10058d2c0 */

void FUN_10058d2c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1002e1208,uVar3,0);
  return;
}



/* Address: 0x10058d314 | FUN_10058d314 */

void FUN_10058d314(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000f8cac(unaff_x20 + 0x18,param_1,&DAT_100fd1ff0,&DAT_100c5ef80);
  return;
}



/* Address: 0x10058d340 | FUN_10058d340 */

void FUN_10058d340(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_31 = (undefined1)param_5[1];
  uStack_30 = (undefined7)((ulong)param_5[1] >> 8);
  local_39 = (undefined1)*param_5;
  uStack_38 = (undefined7)((ulong)*param_5 >> 8);
  uStack_21 = (undefined1)param_5[3];
  uStack_20 = (undefined7)((ulong)param_5[3] >> 8);
  local_29 = (undefined1)param_5[2];
  uStack_28 = (undefined7)((ulong)param_5[2] >> 8);
  uVar2 = param_5[5];
  uStack_11 = (undefined1)uVar2;
  local_19 = (undefined1)param_5[4];
  uStack_18 = (undefined7)((ulong)param_5[4] >> 8);
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)((long)param_1 + 0x11) = CONCAT17(local_39,uStack_40);
  uVar1 = param_5[6];
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_21,uStack_28);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_29,uStack_30);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(local_19,uStack_20);
  param_1[9] = uVar1;
  param_1[8] = uVar2;
  return;
}



/* Address: 0x10058d38c | FUN_10058d38c */

void FUN_10058d38c(void)

{
  TaskLocal *pTVar1;
  undefined8 *puVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar2 = &local_70;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_50 = 1;
  uStack_40 = 0;
  local_48 = 0;
  uStack_30 = 0;
  local_38 = 0;
  local_28 = 0;
  pTVar1 = (TaskLocal *)&DAT_100fd2590;
  FUN_1000f7830(&DAT_100fd2590,&DAT_100c60100);
  _swift_allocObject();
  Swift::TaskLocal::_init(pTVar1);
  DAT_101057b40 = (undefined1 *)puVar2;
  return;
}



/* Address: 0x10058d3fc | FUN_10058d3fc */

undefined8 * FUN_10058d3fc(void)

{
  if (DAT_100fd1ff8 != -1) {
    _swift_once(&DAT_100fd1ff8,FUN_10058d38c);
  }
  return &DAT_101057b40;
}



/* Address: 0x10058d43c | FUN_10058d43c */

void FUN_10058d43c(void)

{
  if (DAT_100fd1ff8 != -1) {
    _swift_once(&DAT_100fd1ff8,FUN_10058d38c);
  }
  _swift_retain(DAT_101057b40);
  return;
}



/* Address: 0x10058d47c | FUN_10058d47c */

void FUN_10058d47c(undefined8 *param_1)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_100fd1ff8 != -1) {
    _swift_once(&DAT_100fd1ff8,FUN_10058d38c);
  }
  Swift::TaskLocal::get(DAT_101057b40);
  param_1[5] = uStack_48;
  param_1[4] = local_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  param_1[9] = uStack_28;
  param_1[8] = local_30;
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Address: 0x10058d4f0 | FUN_10058d4f0 */

void FUN_10058d4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  uVar1 = param_4;
  lVar5 = param_5;
  (**(code **)(param_5 + 0x48))(param_4,param_5);
  FUN_1004e6798(0,param_4,param_5);
  puVar2 = &DAT_100ee2cc0;
  _swift_allocObject(&DAT_100ee2cc0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(long *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  puVar3 = &DAT_100c5ef90;
  FUN_1004e3220(&DAT_100c5ef90,puVar2);
  _swift_beginAccess(unaff_x20 + 0xf0,auStack_68,0x21,0);
  _swift_retain(param_3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0x8000000000000000;
  FUN_1004b59f0(puVar3,uVar1,lVar5,uVar4);
  _swift_bridgeObjectRelease(lVar5);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar6;
  _swift_endAccess(auStack_68);
  _swift_retain();
  return;
}



/* Address: 0x10058d608 | FUN_10058d608 */

void FUN_10058d608(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *local_b8 [8];
  undefined1 auStack_78 [24];
  
  pcVar9 = *(code **)(param_5 + 0x40);
  lVar1 = param_4;
  uVar4 = param_5;
  (*pcVar9)();
  _swift_beginAccess(unaff_x20 + 0xf8,auStack_78,0,0);
  uVar7 = *(ulong *)(unaff_x20 + 0xf8);
  if (*(long *)(uVar7 + 0x10) == 0) {
    _swift_bridgeObjectRetain(uVar7);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _swift_bridgeObjectRetain_n(uVar7,2);
    uVar5 = uVar4;
    FUN_100071370();
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar7);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      puVar8 = *(undefined **)(*(long *)(uVar7 + 0x38) + lVar1 * 8);
      _swift_bridgeObjectRetain(puVar8);
      _swift_bridgeObjectRelease(uVar4);
      uVar4 = uVar7;
    }
  }
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar4);
  lVar1 = param_4;
  uVar4 = param_5;
  (*pcVar9)(param_4,param_5);
  puVar2 = &DAT_100fcb6d8;
  FUN_1000f7830(&DAT_100fcb6d8,&DAT_100c50488);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  FUN_1004e8048(0,param_4,param_5);
  thunk_FUN_1004e3220(param_2,param_3);
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  local_b8[0] = puVar8;
  _swift_retain(param_3);
  FUN_1005428b0(puVar2);
  puVar8 = local_b8[0];
  _swift_beginAccess(unaff_x20 + 0xf8,local_b8,0x21,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0x8000000000000000;
  FUN_1004b578c(puVar8,lVar1,uVar4,uVar3);
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar6;
  _swift_endAccess(local_b8);
  _swift_retain();
  return;
}



/* Address: 0x10058d7e8 | FUN_10058d7e8 */

void FUN_10058d7e8(undefined8 *param_1)

{
  OutputFormatting OVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x60) = OVar1.unknown;
  lVar3 = *(long *)(OVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar4 = param_1[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)((long)param_1 + 0x2a);
  *(undefined8 *)(unaff_x22 + 0x42) = *(undefined8 *)((long)param_1 + 0x32);
  *(undefined8 *)(unaff_x22 + 0x3a) = uVar4;
  _swift_task_switch(FUN_10058d864);
  return;
}



/* Address: 0x10058d864 | FUN_10058d864 */

/* WARNING: Removing unreachable block (ram,0x00010058da18) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058da0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10058d864(undefined8 *param_1)

{
  int iVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Data DVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x58) + 200);
  *(long *)(unaff_x22 + 0x78) = lVar13;
  if (lVar13 != 0) {
    OVar2.unknown = *(undefined **)(unaff_x22 + 0x70);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x58) + 0xd0);
    pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    _swift_unknownObjectRetain(lVar13);
    pJVar3 = Foundation::JSONEncoder::init(pJVar3);
    *(JSONEncoder **)(unaff_x22 + 0x80) = pJVar3;
    OVar4.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar4.unknown + 0x18) = 4;
    *(undefined8 *)(OVar4.unknown + 0x10) = 2;
    OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar5);
    *(undefined8 *)(unaff_x22 + 0x50) = OVar4.unknown;
    puVar6 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar7 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar8 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (OVar2.unknown,(undefined8 *)(unaff_x22 + 0x50),puVar7,puVar8,uVar14,puVar6);
    Foundation::JSONEncoder::set_outputFormatting(pJVar3,OVar2);
    puVar6 = &DAT_100fcb3e0;
    FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
    puVar7 = &DAT_100fcef28;
    FUN_100134584(&DAT_100fcef28,&DAT_100fcb3e0,&DAT_100c50230,
                  &TargetProtocolConformanceDescriptor_100c52ca8);
    DVar9 = Foundation::JSONEncoder::_encode(pJVar3,puVar7,puVar6,puVar7);
    *(undefined **)(unaff_x22 + 0x88) = DVar9.unknown;
    *(undefined **)(unaff_x22 + 0x90) = puVar6;
    _swift_getObjectType(lVar13);
    piVar12 = *(int **)(lVar11 + 0x28);
    iVar1 = *piVar12;
    plVar10 = (long *)(ulong)(uint)piVar12[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x98) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_10058db28;
                    /* WARNING: Could not recover jumptable at 0x00010058db24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(DVar9.unknown,puVar6,lVar13,lVar11);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010058daa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058db28 | FUN_10058db28 */

void FUN_10058db28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10058db84;
  }
  else {
    pcVar1 = FUN_10058dbe0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x58),0);
  return;
}



/* Address: 0x10058db84 | FUN_10058db84 */

void FUN_10058db84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010058dbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058dbe0 | FUN_10058dbe0 */

void FUN_10058dbe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010058dc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058dc30 | FUN_10058dc30 */

void FUN_10058dc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  OutputFormatting OVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = OVar1.unknown;
  lVar3 = *(long *)(OVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  _swift_task_switch(FUN_10058dc94);
  return;
}



/* Address: 0x10058dc94 | FUN_10058dc94 */

/* WARNING: Removing unreachable block (ram,0x00010058de3c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058de30 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10058dc94(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  OutputFormatting OVar3;
  undefined8 uVar4;
  JSONEncoder *pJVar5;
  OutputFormatting OVar6;
  OutputFormatting OVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  TargetProtocolConformanceDescriptor *pTVar11;
  Data DVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  
  lVar16 = *(long *)(*(long *)(unaff_x22 + 0x30) + 200);
  *(long *)(unaff_x22 + 0x50) = lVar16;
  if (lVar16 != 0) {
    OVar3.unknown = *(undefined **)(unaff_x22 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0xd0);
    pJVar5 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    _swift_unknownObjectRetain(lVar16);
    pJVar5 = Foundation::JSONEncoder::init(pJVar5);
    *(JSONEncoder **)(unaff_x22 + 0x58) = pJVar5;
    OVar6.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar6.unknown + 0x18) = 4;
    *(undefined8 *)(OVar6.unknown + 0x10) = 2;
    OVar7 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar6);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar7);
    *(undefined8 *)(unaff_x22 + 0x10) = OVar6.unknown;
    puVar8 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar9 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar10 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (OVar3.unknown,(undefined8 *)(unaff_x22 + 0x10),puVar9,puVar10,uVar17,puVar8);
    Foundation::JSONEncoder::set_outputFormatting(pJVar5,OVar3);
    uVar17 = 0;
    FUN_1004e3b80(0,uVar2,uVar4);
    pTVar11 = &TargetProtocolConformanceDescriptor_100c52ca8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52ca8,uVar17);
    DVar12 = Foundation::JSONEncoder::_encode(pJVar5,pTVar11,uVar17,pTVar11);
    *(undefined **)(unaff_x22 + 0x60) = DVar12.unknown;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar17;
    _swift_getObjectType(lVar16);
    piVar15 = *(int **)(lVar14 + 0x28);
    iVar1 = *piVar15;
    plVar13 = (long *)(ulong)(uint)piVar15[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar13;
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_10058df4c;
                    /* WARNING: Could not recover jumptable at 0x00010058df48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar15))(DVar12.unknown,uVar17,lVar16,lVar14);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010058decc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058df4c | FUN_10058df4c */

void FUN_10058df4c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10058dfa8;
  }
  else {
    pcVar1 = FUN_10058e004;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x30),0);
  return;
}



/* Address: 0x10058dfa8 | FUN_10058dfa8 */

void FUN_10058dfa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010058e000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e004 | FUN_10058e004 */

void FUN_10058e004(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010058e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e054 | FUN_10058e054 */

void FUN_10058e054(undefined8 *param_1)

{
  OutputFormatting OVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = OVar1.unknown;
  lVar3 = *(long *)(OVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar4 = param_1[4];
  uVar6 = param_1[7];
  uVar5 = param_1[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  uVar4 = *(undefined8 *)((long)param_1 + 0x39);
  *(undefined8 *)(unaff_x22 + 0x51) = *(undefined8 *)((long)param_1 + 0x41);
  *(undefined8 *)(unaff_x22 + 0x49) = uVar4;
  uVar6 = *param_1;
  uVar5 = param_1[3];
  uVar4 = param_1[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  _swift_task_switch(FUN_10058e0d0);
  return;
}



/* Address: 0x10058e0d0 | FUN_10058e0d0 */

/* WARNING: Removing unreachable block (ram,0x00010058e284) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058e278 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10058e0d0(undefined8 *param_1)

{
  int iVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Data DVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x68) + 200);
  *(long *)(unaff_x22 + 0x88) = lVar13;
  if (lVar13 != 0) {
    OVar2.unknown = *(undefined **)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x68) + 0xd0);
    pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    _swift_unknownObjectRetain(lVar13);
    pJVar3 = Foundation::JSONEncoder::init(pJVar3);
    *(JSONEncoder **)(unaff_x22 + 0x90) = pJVar3;
    OVar4.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar4.unknown + 0x18) = 4;
    *(undefined8 *)(OVar4.unknown + 0x10) = 2;
    OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar5);
    *(undefined8 *)(unaff_x22 + 0x60) = OVar4.unknown;
    puVar6 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar7 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar8 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (OVar2.unknown,(undefined8 *)(unaff_x22 + 0x60),puVar7,puVar8,uVar14,puVar6);
    Foundation::JSONEncoder::set_outputFormatting(pJVar3,OVar2);
    puVar6 = &DAT_100fd2030;
    FUN_1000f7830(&DAT_100fd2030,&DAT_100c5f030);
    puVar7 = &DAT_100fd2550;
    FUN_100134584(&DAT_100fd2550,&DAT_100fd2030,&DAT_100c5f030,
                  &TargetProtocolConformanceDescriptor_100c52d60);
    DVar9 = Foundation::JSONEncoder::_encode(pJVar3,puVar7,puVar6,puVar7);
    *(undefined **)(unaff_x22 + 0x98) = DVar9.unknown;
    *(undefined **)(unaff_x22 + 0xa0) = puVar6;
    _swift_getObjectType(lVar13);
    piVar12 = *(int **)(lVar11 + 0x28);
    iVar1 = *piVar12;
    plVar10 = (long *)(ulong)(uint)piVar12[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_10058e394;
                    /* WARNING: Could not recover jumptable at 0x00010058e390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(DVar9.unknown,puVar6,lVar13,lVar11);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010058e314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e394 | FUN_10058e394 */

void FUN_10058e394(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10058e3f0;
  }
  else {
    pcVar1 = FUN_10058e44c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x68),0);
  return;
}



/* Address: 0x10058e3f0 | FUN_10058e3f0 */

void FUN_10058e3f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010058e448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e44c | FUN_10058e44c */

void FUN_10058e44c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010058e498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e49c | FUN_10058e49c */

void FUN_10058e49c(undefined8 *param_1)

{
  OutputFormatting OVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = OVar1.unknown;
  lVar3 = *(long *)(OVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar5 = param_1[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_1[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar4 = param_1[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1[6];
  _swift_task_switch(FUN_10058e518);
  return;
}



/* Address: 0x10058e518 | FUN_10058e518 */

/* WARNING: Removing unreachable block (ram,0x00010058e6cc) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058e6c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10058e518(undefined8 *param_1)

{
  int iVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  Data DVar9;
  long *plVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar13 = *(long *)(*(long *)(unaff_x22 + 0x50) + 200);
  *(long *)(unaff_x22 + 0x70) = lVar13;
  if (lVar13 != 0) {
    OVar2.unknown = *(undefined **)(unaff_x22 + 0x68);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0xd0);
    pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    _swift_unknownObjectRetain(lVar13);
    pJVar3 = Foundation::JSONEncoder::init(pJVar3);
    *(JSONEncoder **)(unaff_x22 + 0x78) = pJVar3;
    OVar4.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar4.unknown + 0x18) = 4;
    *(undefined8 *)(OVar4.unknown + 0x10) = 2;
    OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar4);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar5);
    *(undefined8 *)(unaff_x22 + 0x48) = OVar4.unknown;
    puVar6 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar7 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar8 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (OVar2.unknown,(undefined8 *)(unaff_x22 + 0x48),puVar7,puVar8,uVar14,puVar6);
    Foundation::JSONEncoder::set_outputFormatting(pJVar3,OVar2);
    puVar6 = &DAT_100fcf0a8;
    FUN_1000f7830(&DAT_100fcf0a8,&DAT_100c56fa8);
    puVar7 = &DAT_100fcf0b0;
    FUN_100134584(&DAT_100fcf0b0,&DAT_100fcf0a8,&DAT_100c56fa8,
                  &TargetProtocolConformanceDescriptor_100c52d60);
    DVar9 = Foundation::JSONEncoder::_encode(pJVar3,puVar7,puVar6,puVar7);
    *(undefined **)(unaff_x22 + 0x80) = DVar9.unknown;
    *(undefined **)(unaff_x22 + 0x88) = puVar6;
    _swift_getObjectType(lVar13);
    piVar12 = *(int **)(lVar11 + 0x28);
    iVar1 = *piVar12;
    plVar10 = (long *)(ulong)(uint)piVar12[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_10058e7dc;
                    /* WARNING: Could not recover jumptable at 0x00010058e7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(DVar9.unknown,puVar6,lVar13,lVar11);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010058e75c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e7dc | FUN_10058e7dc */

void FUN_10058e7dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10058e838;
  }
  else {
    pcVar1 = FUN_10058e894;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x50),0);
  return;
}



/* Address: 0x10058e838 | FUN_10058e838 */

void FUN_10058e838(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010058e890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e894 | FUN_10058e894 */

void FUN_10058e894(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010058e8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058e8e4 | FUN_10058e8e4 */

void FUN_10058e8e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  OutputFormatting OVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x38) = OVar1.unknown;
  lVar3 = *(long *)(OVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  _swift_task_switch(FUN_10058e948);
  return;
}



/* Address: 0x10058e948 | FUN_10058e948 */

/* WARNING: Removing unreachable block (ram,0x00010058eaf0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058eae4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10058e948(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  OutputFormatting OVar3;
  undefined8 uVar4;
  JSONEncoder *pJVar5;
  OutputFormatting OVar6;
  OutputFormatting OVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  TargetProtocolConformanceDescriptor *pTVar11;
  Data DVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  long unaff_x22;
  undefined8 uVar17;
  
  lVar16 = *(long *)(*(long *)(unaff_x22 + 0x30) + 200);
  *(long *)(unaff_x22 + 0x50) = lVar16;
  if (lVar16 != 0) {
    OVar3.unknown = *(undefined **)(unaff_x22 + 0x48);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar14 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0xd0);
    pJVar5 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    _swift_unknownObjectRetain(lVar16);
    pJVar5 = Foundation::JSONEncoder::init(pJVar5);
    *(JSONEncoder **)(unaff_x22 + 0x58) = pJVar5;
    OVar6.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar6.unknown + 0x18) = 4;
    *(undefined8 *)(OVar6.unknown + 0x10) = 2;
    OVar7 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar6);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar7);
    *(undefined8 *)(unaff_x22 + 0x10) = OVar6.unknown;
    puVar8 = &DAT_100fd2008;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar9 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar10 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (OVar3.unknown,(undefined8 *)(unaff_x22 + 0x10),puVar9,puVar10,uVar17,puVar8);
    Foundation::JSONEncoder::set_outputFormatting(pJVar5,OVar3);
    uVar17 = 0;
    FUN_1004e4dd4(0,uVar2,uVar4);
    pTVar11 = &TargetProtocolConformanceDescriptor_100c52d60;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52d60,uVar17);
    DVar12 = Foundation::JSONEncoder::_encode(pJVar5,pTVar11,uVar17,pTVar11);
    *(undefined **)(unaff_x22 + 0x60) = DVar12.unknown;
    *(undefined8 *)(unaff_x22 + 0x68) = uVar17;
    _swift_getObjectType(lVar16);
    piVar15 = *(int **)(lVar14 + 0x28);
    iVar1 = *piVar15;
    plVar13 = (long *)(ulong)(uint)piVar15[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar13;
    *plVar13 = unaff_x22;
    plVar13[1] = (long)FUN_10058ec00;
                    /* WARNING: Could not recover jumptable at 0x00010058ebfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar15))(DVar12.unknown,uVar17,lVar16,lVar14);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010058eb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058ec00 | FUN_10058ec00 */

void FUN_10058ec00(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_10058dfa8;
  }
  else {
    pcVar1 = thunk_FUN_10058e004;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x30),0);
  return;
}



/* Address: 0x10058ec5c | FUN_10058ec5c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058eea0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_10058ec5c(undefined8 *param_1)

{
  OutputFormatting OVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  undefined *puVar5;
  undefined *puVar6;
  Data DVar7;
  TaskPriority TVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_2d0 [8];
  undefined8 local_2c8;
  undefined1 auStack_2b0 [192];
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar9 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_2d0 + -extraout_x8;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  OVar2 = OVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar1.unknown + -8) + 0x40));
  uStack_a8 = param_1[0x11];
  local_b0 = param_1[0x10];
  uStack_98 = param_1[0x13];
  uStack_a0 = param_1[0x12];
  uStack_88 = param_1[0x15];
  local_90 = param_1[0x14];
  uStack_78 = param_1[0x17];
  uStack_80 = param_1[0x16];
  uStack_e8 = param_1[9];
  local_f0 = param_1[8];
  uStack_d8 = param_1[0xb];
  uStack_e0 = param_1[10];
  uStack_c8 = param_1[0xd];
  local_d0 = param_1[0xc];
  uStack_b8 = param_1[0xf];
  uStack_c0 = param_1[0xe];
  uStack_128 = param_1[1];
  local_130 = (undefined *)*param_1;
  uStack_118 = param_1[3];
  uStack_120 = param_1[2];
  uStack_108 = param_1[5];
  local_110 = param_1[4];
  uStack_f8 = param_1[7];
  uStack_100 = param_1[6];
  lVar10 = *(long *)(unaff_x20 + 200);
  if (lVar10 == 0) {
    puVar9 = (undefined *)0x8000000100dadcb0;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,OVar2.unknown,0,0);
    *(undefined8 *)OVar2.unknown = 0xd000000000000021;
    *(undefined8 *)((long)OVar2.unknown + 8) = 0x8000000100dadcb0;
    *(undefined8 *)((long)OVar2.unknown + 0x10) = 0;
    *(undefined1 *)((long)OVar2.unknown + 0x18) = 4;
    _swift_willThrow();
  }
  else {
    local_2c8 = *(undefined8 *)(unaff_x20 + 0xd0);
    pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    _swift_unknownObjectRetain(lVar10);
    pJVar3 = Foundation::JSONEncoder::init(pJVar3);
    OVar2.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar2.unknown + 0x18) = 4;
    *(undefined8 *)(OVar2.unknown + 0x10) = 2;
    OVar4 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar2);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar4);
    puVar9 = &DAT_100fd2008;
    local_1f0 = OVar2.unknown;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar5 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar6 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_1f0,puVar5,puVar6,
               OVar1.unknown,puVar9);
    Foundation::JSONEncoder::set_outputFormatting
              (pJVar3,(OutputFormatting)(puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    puVar5 = &DAT_100fd2020;
    puVar9 = &DAT_100c5efe0;
    FUN_1000f7830(&DAT_100fd2020,&DAT_100c5efe0);
    puVar6 = &DAT_100fd2570;
    FUN_100134584(&DAT_100fd2570,&DAT_100fd2020,&DAT_100c5efe0,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    DVar7 = Foundation::JSONEncoder::_encode(pJVar3,puVar6,puVar5,puVar6);
    if (unaff_x21 == 0) {
      TVar8 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(puVar11,1,1,TVar8.unknown);
      uStack_168 = uStack_a8;
      local_170 = local_b0;
      uStack_158 = uStack_98;
      uStack_160 = uStack_a0;
      uStack_148 = uStack_88;
      local_150 = local_90;
      uStack_138 = uStack_78;
      uStack_140 = uStack_80;
      uStack_1a8 = uStack_e8;
      local_1b0 = local_f0;
      uStack_198 = uStack_d8;
      uStack_1a0 = uStack_e0;
      uStack_188 = uStack_c8;
      local_190 = local_d0;
      uStack_178 = uStack_b8;
      uStack_180 = uStack_c0;
      uStack_1e8 = uStack_128;
      local_1f0 = local_130;
      uStack_1d8 = uStack_118;
      uStack_1e0 = uStack_120;
      uStack_1c8 = uStack_108;
      local_1d0 = local_110;
      uStack_1b8 = uStack_f8;
      uStack_1c0 = uStack_100;
      puVar9 = &DAT_100fd1fe8;
      FUN_1003b6598();
      puVar6 = &DAT_100ee35f8;
      _swift_allocObject(&DAT_100ee35f8,0x108,7);
      *(undefined8 *)(puVar6 + 0xb0) = uStack_a8;
      *(undefined8 *)(puVar6 + 0xa8) = local_b0;
      *(undefined8 *)(puVar6 + 0xc0) = uStack_98;
      *(undefined8 *)(puVar6 + 0xb8) = uStack_a0;
      *(undefined8 *)(puVar6 + 0xd0) = uStack_88;
      *(undefined8 *)(puVar6 + 200) = local_90;
      *(undefined8 *)(puVar6 + 0xe0) = uStack_78;
      *(undefined8 *)(puVar6 + 0xd8) = uStack_80;
      *(undefined8 *)(puVar6 + 0x70) = uStack_e8;
      *(undefined8 *)(puVar6 + 0x68) = local_f0;
      *(undefined8 *)(puVar6 + 0x80) = uStack_d8;
      *(undefined8 *)(puVar6 + 0x78) = uStack_e0;
      *(undefined8 *)(puVar6 + 0x90) = uStack_c8;
      *(undefined8 *)(puVar6 + 0x88) = local_d0;
      *(undefined8 *)(puVar6 + 0xa0) = uStack_b8;
      *(undefined8 *)(puVar6 + 0x98) = uStack_c0;
      *(undefined8 *)(puVar6 + 0x30) = uStack_128;
      *(undefined **)(puVar6 + 0x28) = local_130;
      *(undefined8 *)(puVar6 + 0x40) = uStack_118;
      *(undefined8 *)(puVar6 + 0x38) = uStack_120;
      *(undefined8 *)(puVar6 + 0x50) = uStack_108;
      *(undefined8 *)(puVar6 + 0x48) = local_110;
      *(long *)(puVar6 + 0x10) = unaff_x20;
      *(undefined **)(puVar6 + 0x18) = puVar9;
      *(long *)(puVar6 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar6 + 0x60) = uStack_f8;
      *(undefined8 *)(puVar6 + 0x58) = uStack_100;
      *(long *)(puVar6 + 0xe8) = lVar10;
      *(undefined8 *)(puVar6 + 0xf0) = local_2c8;
      *(undefined **)(puVar6 + 0xf8) = DVar7.unknown;
      *(undefined **)(puVar6 + 0x100) = puVar5;
      _swift_retain_n(unaff_x20,2);
      FUN_1000f8cac(&local_1f0,auStack_2b0,&DAT_100fd2020,&DAT_100c5efe0);
      puVar9 = (undefined *)0x0;
      FUN_10058792c(0,0,puVar11,&DAT_100c600b8,puVar6,&DAT_100edfa80);
      _swift_release(pJVar3);
    }
    else {
      _swift_unknownObjectRelease(lVar10);
      _swift_release(pJVar3);
    }
  }
  return puVar9;
}



/* Address: 0x10058f08c | FUN_10058f08c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058f2d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined ** FUN_10058f08c(undefined8 *param_1)

{
  undefined *puVar1;
  OutputFormatting OVar2;
  OutputFormatting OVar3;
  JSONEncoder *pJVar4;
  OutputFormatting OVar5;
  undefined *puVar6;
  undefined *puVar7;
  Data DVar8;
  TaskPriority TVar9;
  undefined **ppuVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_210 [8];
  undefined8 local_208;
  undefined1 *local_200;
  undefined1 auStack_1e8 [120];
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  ppuVar10 = &local_170;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_210 + -extraout_x8;
  OVar2 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  OVar3 = OVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar2.unknown + -8) + 0x40));
  uStack_a8 = param_1[9];
  local_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  local_90 = param_1[0xc];
  local_80 = param_1[0xe];
  uStack_e8 = param_1[1];
  local_f0 = (undefined *)*param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  local_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  lVar11 = *(long *)(unaff_x20 + 200);
  if (lVar11 == 0) {
    ppuVar10 = (undefined **)0x8000000100dadcb0;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,OVar3.unknown,0,0);
    *(undefined8 *)OVar3.unknown = 0xd000000000000021;
    *(undefined8 *)((long)OVar3.unknown + 8) = 0x8000000100dadcb0;
    *(undefined8 *)((long)OVar3.unknown + 0x10) = 0;
    *(undefined1 *)((long)OVar3.unknown + 0x18) = 4;
    _swift_willThrow();
  }
  else {
    local_208 = *(undefined8 *)(unaff_x20 + 0xd0);
    local_200 = puVar12;
    pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
    _swift_unknownObjectRetain(lVar11);
    pJVar4 = Foundation::JSONEncoder::init(pJVar4);
    OVar3.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar3.unknown + 0x18) = 4;
    *(undefined8 *)(OVar3.unknown + 0x10) = 2;
    OVar5 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar3);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar5);
    puVar1 = &DAT_100fd2008;
    local_170 = OVar3.unknown;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar6 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar7 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init
              (puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),&local_170,puVar6,puVar7,
               OVar2.unknown,puVar1);
    Foundation::JSONEncoder::set_outputFormatting
              (pJVar4,(OutputFormatting)(puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    puVar1 = &DAT_100fd2028;
    FUN_1000f7830(&DAT_100fd2028,&DAT_100c5f010);
    puVar6 = &DAT_100fd2558;
    FUN_100134584(&DAT_100fd2558,&DAT_100fd2028,&DAT_100c5f010,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    DVar8 = Foundation::JSONEncoder::_encode(pJVar4,puVar6,puVar1,puVar6);
    if (unaff_x21 == 0) {
      TVar9 = Swift::TaskPriority::typeMetadataAccessor();
      puVar12 = local_200;
      (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(local_200,1,1,TVar9.unknown);
      uStack_118 = uStack_98;
      local_120 = uStack_a0;
      uStack_108 = uStack_88;
      uStack_110 = local_90;
      uStack_168 = uStack_e8;
      local_170 = local_f0;
      uStack_158 = uStack_d8;
      local_160 = uStack_e0;
      uStack_148 = uStack_c8;
      uStack_150 = local_d0;
      local_100 = local_80;
      uStack_138 = uStack_b8;
      local_140 = uStack_c0;
      uStack_128 = uStack_a8;
      uStack_130 = local_b0;
      puVar6 = &DAT_100fd1fe8;
      FUN_1003b6598();
      puVar7 = &DAT_100ee3558;
      _swift_allocObject(&DAT_100ee3558,0xc0,7);
      *(undefined8 *)(puVar7 + 0x70) = uStack_a8;
      *(undefined8 *)(puVar7 + 0x68) = local_b0;
      *(undefined8 *)(puVar7 + 0x80) = uStack_98;
      *(undefined8 *)(puVar7 + 0x78) = uStack_a0;
      *(undefined8 *)(puVar7 + 0x90) = uStack_88;
      *(undefined8 *)(puVar7 + 0x88) = local_90;
      *(undefined8 *)(puVar7 + 0x30) = uStack_e8;
      *(undefined **)(puVar7 + 0x28) = local_f0;
      *(undefined8 *)(puVar7 + 0x40) = uStack_d8;
      *(undefined8 *)(puVar7 + 0x38) = uStack_e0;
      *(undefined8 *)(puVar7 + 0x50) = uStack_c8;
      *(undefined8 *)(puVar7 + 0x48) = local_d0;
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      *(long *)(puVar7 + 0x20) = unaff_x20;
      *(undefined8 *)(puVar7 + 0x60) = uStack_b8;
      *(undefined8 *)(puVar7 + 0x58) = uStack_c0;
      *(undefined8 *)(puVar7 + 0x98) = local_80;
      *(long *)(puVar7 + 0xa0) = lVar11;
      *(undefined8 *)(puVar7 + 0xa8) = local_208;
      *(undefined **)(puVar7 + 0xb0) = DVar8.unknown;
      *(undefined **)(puVar7 + 0xb8) = puVar1;
      _swift_retain_n(unaff_x20,2);
      FUN_1000f8cac(&local_170,auStack_1e8,&DAT_100fd2028,&DAT_100c5f010);
      ppuVar10 = (undefined **)0x0;
      FUN_10058792c(0,0,puVar12,&DAT_100c60070,puVar7,&DAT_100ede8b0);
      _swift_release(pJVar4);
    }
    else {
      _swift_unknownObjectRelease(lVar11);
      _swift_release(pJVar4);
    }
  }
  return ppuVar10;
}



/* Address: 0x10058f4a0 | FUN_10058f4a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010058f6c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_10058f4a0(undefined8 *param_1)

{
  OutputFormatting OVar1;
  OutputFormatting OVar2;
  JSONEncoder *pJVar3;
  OutputFormatting OVar4;
  undefined *puVar5;
  undefined *puVar6;
  Data DVar7;
  TaskPriority TVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  OutputFormatting OVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_f0;
  undefined *local_d8 [3];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar9 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_f0 - extraout_x8;
  OVar1 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  OVar2 = OVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar1.unknown + -8) + 0x40));
  OVar12.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uStack_b8 = param_1[1];
  local_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  local_a0 = param_1[4];
  lVar11 = *(long *)(unaff_x20 + 200);
  if (lVar11 == 0) {
    puVar9 = (undefined *)0x8000000100dadcb0;
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,OVar2.unknown,0,0);
    *(undefined8 *)OVar2.unknown = 0xd000000000000021;
    *(undefined8 *)((long)OVar2.unknown + 8) = 0x8000000100dadcb0;
    *(undefined8 *)((long)OVar2.unknown + 0x10) = 0;
    *(undefined1 *)((long)OVar2.unknown + 0x18) = 4;
    _swift_willThrow();
  }
  else {
    local_f0 = *(undefined8 *)(unaff_x20 + 0xd0);
    pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    _swift_unknownObjectRetain(lVar11);
    pJVar3 = Foundation::JSONEncoder::init(pJVar3);
    OVar2.unknown = &DAT_100fd2000;
    FUN_1000f7830(&DAT_100fd2000,&DAT_100c5efa0);
    _swift_allocObject();
    *(undefined8 *)(OVar2.unknown + 0x18) = 4;
    *(undefined8 *)(OVar2.unknown + 0x10) = 2;
    OVar4 = Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar2);
    Foundation::JSONEncoder::OutputFormatting::get_withoutEscapingSlashes(OVar4);
    puVar9 = &DAT_100fd2008;
    local_d8[0] = OVar2.unknown;
    FUN_1003b6598(&DAT_100fd2008,0xff,PTR_typeMetadataAccessor_100ea6a88,
                  PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
                 );
    puVar5 = &DAT_100fd2010;
    FUN_1000f7830(&DAT_100fd2010,&DAT_100c5efa8);
    puVar6 = &DAT_100fd2018;
    FUN_100134584(&DAT_100fd2018,&DAT_100fd2010,&DAT_100c5efa8,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(OVar12.unknown,local_d8,puVar5,puVar6,OVar1.unknown,puVar9);
    Foundation::JSONEncoder::set_outputFormatting(pJVar3,OVar12);
    puVar9 = &DAT_100fd2530;
    puVar6 = puVar9;
    FUN_1000f7830(&DAT_100fd2530,&DAT_100c60018);
    puVar5 = &DAT_100fd2538;
    FUN_100134584(&DAT_100fd2538,&DAT_100fd2530,&DAT_100c60018,
                  &TargetProtocolConformanceDescriptor_100c52bb8);
    DVar7 = Foundation::JSONEncoder::_encode(pJVar3,puVar5,puVar6,puVar5);
    if (unaff_x21 == 0) {
      TVar8 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(lVar10,1,1,TVar8.unknown);
      uStack_78 = param_1[1];
      uStack_80 = *param_1;
      local_70 = *(undefined1 *)(param_1 + 2);
      uStack_88 = param_1[4];
      local_90 = param_1[3];
      puVar9 = &DAT_100fd1fe8;
      FUN_1003b6598();
      puVar5 = &DAT_100ee34b8;
      _swift_allocObject(&DAT_100ee34b8,0x70,7);
      *(long *)(puVar5 + 0x10) = unaff_x20;
      *(undefined **)(puVar5 + 0x18) = puVar9;
      *(long *)(puVar5 + 0x20) = unaff_x20;
      uVar13 = *param_1;
      uVar15 = param_1[3];
      uVar14 = param_1[2];
      *(undefined8 *)(puVar5 + 0x30) = param_1[1];
      *(undefined8 *)(puVar5 + 0x28) = uVar13;
      *(undefined8 *)(puVar5 + 0x40) = uVar15;
      *(undefined8 *)(puVar5 + 0x38) = uVar14;
      *(undefined8 *)(puVar5 + 0x48) = param_1[4];
      *(long *)(puVar5 + 0x50) = lVar11;
      *(undefined8 *)(puVar5 + 0x58) = local_f0;
      *(undefined **)(puVar5 + 0x60) = DVar7.unknown;
      *(undefined **)(puVar5 + 0x68) = puVar6;
      _swift_retain_n(unaff_x20,2);
      FUN_10054a890(&uStack_80,local_d8);
      FUN_10000ca28(&local_90,local_d8);
      puVar9 = (undefined *)0x0;
      FUN_10058792c(0,0,lVar10,&DAT_100c60028,puVar5,&DAT_100edefa0);
      _swift_release(pJVar3);
    }
    else {
      _swift_unknownObjectRelease(lVar11);
      _swift_release(pJVar3);
    }
  }
  return puVar9;
}



/* Address: 0x10058f854 | FUN_10058f854 */

void FUN_10058f854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x360) = param_9;
  *(undefined8 *)(unaff_x22 + 0x358) = param_8;
  *(undefined8 *)(unaff_x22 + 0x350) = param_7;
  *(undefined8 *)(unaff_x22 + 0x348) = param_6;
  *(undefined8 *)(unaff_x22 + 0x340) = param_4;
  *(undefined8 *)(unaff_x22 + 0x338) = param_1;
  uVar1 = param_5[0x10];
  uVar3 = param_5[0x13];
  uVar2 = param_5[0x12];
  *(undefined8 *)(unaff_x22 + 0x118) = param_5[0x11];
  *(undefined8 *)(unaff_x22 + 0x110) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar2;
  uVar1 = param_5[0x14];
  uVar3 = param_5[0x17];
  uVar2 = param_5[0x16];
  *(undefined8 *)(unaff_x22 + 0x138) = param_5[0x15];
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar2;
  uVar1 = param_5[8];
  uVar3 = param_5[0xb];
  uVar2 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  uVar1 = param_5[0xc];
  uVar3 = param_5[0xf];
  uVar2 = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0xf8) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
  uVar1 = *param_5;
  uVar3 = param_5[3];
  uVar2 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_5[4];
  uVar3 = param_5[7];
  uVar2 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_10058f8b8,param_4,0);
  return;
}



/* Address: 0x10058f8b8 | FUN_10058f8b8 */

void FUN_10058f8b8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  String isolation;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x340);
  puVar4 = &DAT_100fd1fe8;
  FUN_1003b6598(&DAT_100fd1fe8,param_2,FUN_10059cc40,&TargetProtocolConformanceDescriptor_100c5f638)
  ;
  *(undefined **)(unaff_x22 + 0x368) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x350);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x348);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(unaff_x22 + 0x340);
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x370) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10058fa04;
    isolation.str = *(char **)(unaff_x22 + 0x338);
    isolation.bridgeObject = pvVar5;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x340) == 0) {
    UVar3.unknown = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x340));
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_10058fa64,UVar3.unknown,puVar4);
  return;
}



/* Address: 0x10058fa04 | FUN_10058fa04 */

void FUN_10058fa04(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x370));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x340);
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar3 + 0x378) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x340);
    pcVar1 = FUN_10058fe20;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10058fa64 | FUN_10058fa64 */

void FUN_10058fa64(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  TaskPriority TVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String function;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x340);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x2d0;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_10058fd84;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar1 = &DAT_100fd2578;
  FUN_1000f7830(&DAT_100fd2578,&DAT_100c600c8);
  lVar15 = *(long *)(puVar1 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  uVar5 = lVar14 + 0xf;
  uVar2 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  *(undefined8 *)(unaff_x22 + 0x1d8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x1f0) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_isCurrentExecutor(uVar12,0);
  if ((uVar12 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Server.swift",0x10,1,0x192,*(undefined8 *)(unaff_x22 + 0x340),0);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x340);
  puVar3 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar12 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  uVar18 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x348);
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(uVar12,1,1,TVar4.unknown);
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar15 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar11 = uVar8 + 0xe8 & (uVar8 ^ 0xffffffffffffffff);
  uVar10 = lVar14 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100ee3620;
  _swift_allocObject(&DAT_100ee3620,uVar10 + 0x20,uVar8 | 7);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(undefined8 *)(puVar3 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(puVar3 + 0xa8) = uVar17;
  *(undefined8 *)(puVar3 + 0xc0) = uVar20;
  *(undefined8 *)(puVar3 + 0xb8) = uVar19;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(puVar3 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1f8);
  *(undefined8 *)(puVar3 + 200) = uVar17;
  *(undefined8 *)(puVar3 + 0xe0) = uVar20;
  *(undefined8 *)(puVar3 + 0xd8) = uVar19;
  uVar17 = *(undefined8 *)(unaff_x22 + 400);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(puVar3 + 0x70) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(puVar3 + 0x68) = uVar17;
  *(undefined8 *)(puVar3 + 0x80) = uVar20;
  *(undefined8 *)(puVar3 + 0x78) = uVar19;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(puVar3 + 0x90) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(puVar3 + 0x88) = uVar17;
  *(undefined8 *)(puVar3 + 0xa0) = uVar20;
  *(undefined8 *)(puVar3 + 0x98) = uVar19;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(puVar3 + 0x28) = uVar17;
  *(undefined8 *)(puVar3 + 0x40) = uVar20;
  *(undefined8 *)(puVar3 + 0x38) = uVar19;
  uVar17 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(puVar3 + 0x48) = uVar17;
  *(undefined8 *)(puVar3 + 0x10) = uVar13;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar13;
  *(undefined8 *)(puVar3 + 0x60) = uVar20;
  *(undefined8 *)(puVar3 + 0x58) = uVar19;
  (**(code **)(lVar15 + 0x20))(puVar3 + uVar11,uVar5,puVar1);
  *(undefined8 *)((long)(puVar3 + uVar10) + 8) = uVar18;
  *(undefined8 *)(puVar3 + uVar10) = uVar16;
  *(undefined8 *)(puVar3 + uVar10 + 0x10) = uVar7;
  *(undefined8 *)((long)(puVar3 + uVar10 + 0x10) + 8) = uVar9;
  _swift_task_dealloc(uVar5);
  _swift_retain_n(uVar13,2);
  FUN_1000f8cac(unaff_x22 + 0x150,unaff_x22 + 0x210,&DAT_100fd2020,&DAT_100c5efe0);
  _swift_unknownObjectRetain(uVar16);
  FUN_1001037b4(uVar7,uVar9);
  FUN_1004e9c98(0,0,uVar12,&DAT_100c600d8,puVar3);
  _swift_release();
  _swift_task_dealloc(uVar12);
  (**(code **)(lVar15 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x10058fd84 | FUN_10058fd84 */

void FUN_10058fd84(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x70);
  if (lVar5 == 0) {
    puVar3 = *(undefined8 **)(lVar4 + 0x338);
    uVar6 = *(undefined8 *)(lVar4 + 0x2d8);
    uVar2 = *(undefined8 *)(lVar4 + 0x2d0);
    uVar7 = *(undefined8 *)(lVar4 + 0x2e0);
    uVar9 = *(undefined8 *)(lVar4 + 0x2f8);
    uVar8 = *(undefined8 *)(lVar4 + 0x2f0);
    puVar3[3] = *(undefined8 *)(lVar4 + 0x2e8);
    puVar3[2] = uVar7;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
    puVar3[1] = uVar6;
    *puVar3 = uVar2;
    uVar6 = *(undefined8 *)(lVar4 + 0x308);
    uVar2 = *(undefined8 *)(lVar4 + 0x300);
    uVar8 = *(undefined8 *)(lVar4 + 0x318);
    uVar7 = *(undefined8 *)(lVar4 + 0x310);
    uVar10 = *(undefined8 *)(lVar4 + 0x328);
    uVar9 = *(undefined8 *)(lVar4 + 800);
    puVar3[0xc] = *(undefined8 *)(lVar4 + 0x330);
    puVar3[9] = uVar8;
    puVar3[8] = uVar7;
    puVar3[0xb] = uVar10;
    puVar3[10] = uVar9;
    puVar3[7] = uVar6;
    puVar3[6] = uVar2;
    uVar2 = *(undefined8 *)(lVar4 + 0x340);
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0x378) = lVar5;
    uVar2 = *(undefined8 *)(lVar4 + 0x340);
    pcVar1 = FUN_10058fe20;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10058fe20 | FUN_10058fe20 */

void FUN_10058fe20(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010058fe28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10058fe2c | FUN_10058fe2c */

void FUN_10058fe2c(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 auStack_128 [200];
  
  puVar1 = &DAT_100fd2578;
  local_148 = param_5;
  local_140 = param_4;
  local_138 = param_6;
  local_130 = param_7;
  FUN_1000f7830(&DAT_100fd2578,&DAT_100c600c8);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_150 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Server.swift",0x10,1,0x192,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar8 - extraout_x8_00,1,1,TVar3.unknown);
  (**(code **)(lVar6 + 0x10))(lVar8,param_1,puVar1);
  puVar2 = &DAT_100fd1fe8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0xe8 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ee3670;
  local_150 = lVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100ee3670,uVar10 + 0x20,uVar5 | 7);
  uVar11 = param_3[0x10];
  uVar13 = param_3[0x13];
  uVar12 = param_3[0x12];
  *(undefined8 *)(puVar4 + 0xb0) = param_3[0x11];
  *(undefined8 *)(puVar4 + 0xa8) = uVar11;
  *(undefined8 *)(puVar4 + 0xc0) = uVar13;
  *(undefined8 *)(puVar4 + 0xb8) = uVar12;
  uVar11 = param_3[0x14];
  uVar13 = param_3[0x17];
  uVar12 = param_3[0x16];
  *(undefined8 *)(puVar4 + 0xd0) = param_3[0x15];
  *(undefined8 *)(puVar4 + 200) = uVar11;
  *(undefined8 *)(puVar4 + 0xe0) = uVar13;
  *(undefined8 *)(puVar4 + 0xd8) = uVar12;
  uVar11 = param_3[8];
  uVar13 = param_3[0xb];
  uVar12 = param_3[10];
  *(undefined8 *)(puVar4 + 0x70) = param_3[9];
  *(undefined8 *)(puVar4 + 0x68) = uVar11;
  *(undefined8 *)(puVar4 + 0x80) = uVar13;
  *(undefined8 *)(puVar4 + 0x78) = uVar12;
  uVar11 = param_3[0xc];
  uVar13 = param_3[0xf];
  uVar12 = param_3[0xe];
  *(undefined8 *)(puVar4 + 0x90) = param_3[0xd];
  *(undefined8 *)(puVar4 + 0x88) = uVar11;
  *(undefined8 *)(puVar4 + 0xa0) = uVar13;
  *(undefined8 *)(puVar4 + 0x98) = uVar12;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  uVar13 = param_3[7];
  uVar12 = param_3[6];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  *(undefined8 *)(puVar4 + 0x58) = uVar12;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar8,puVar1);
  uVar13 = local_130;
  uVar12 = local_138;
  uVar11 = local_140;
  *(undefined8 *)(puVar4 + uVar10) = local_140;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_148;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_138;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = local_130;
  _swift_retain_n(param_2,2);
  FUN_1000f8cac(param_3,auStack_128,&DAT_100fd2020,&DAT_100c5efe0);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_150,&DAT_100c600f8,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1005900d4 | FUN_1005900d4 */

void FUN_1005900d4(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_110 [8];
  long local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [128];
  
  puVar1 = &DAT_100fd2560;
  local_100 = param_5;
  uStack_f8 = param_4;
  local_f0 = param_6;
  uStack_e8 = param_7;
  FUN_1000f7830(&DAT_100fd2560,&DAT_100c60080);
  lVar6 = *(long *)(puVar1 + -8);
  lVar9 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_110 + -extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Server.swift",0x10,1,0x192,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            ((long)puVar8 - extraout_x8_00,1,1,TVar3.unknown);
  (**(code **)(lVar6 + 0x10))(puVar8,param_1,puVar1);
  puVar2 = &DAT_100fd1fe8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0xa0 & (uVar5 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ee35d0;
  local_108 = (long)puVar8 - extraout_x8_00;
  _swift_allocObject(&DAT_100ee35d0,uVar10 + 0x20,uVar5 | 7);
  uVar11 = param_3[8];
  uVar13 = param_3[0xb];
  uVar12 = param_3[10];
  *(undefined8 *)(puVar4 + 0x70) = param_3[9];
  *(undefined8 *)(puVar4 + 0x68) = uVar11;
  *(undefined8 *)(puVar4 + 0x80) = uVar13;
  *(undefined8 *)(puVar4 + 0x78) = uVar12;
  uVar11 = param_3[0xc];
  *(undefined8 *)(puVar4 + 0x90) = param_3[0xd];
  *(undefined8 *)(puVar4 + 0x88) = uVar11;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  uVar11 = param_3[4];
  uVar13 = param_3[7];
  uVar12 = param_3[6];
  *(undefined8 *)(puVar4 + 0x50) = param_3[5];
  *(undefined8 *)(puVar4 + 0x48) = uVar11;
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x98) = param_3[0xe];
  *(undefined8 *)(puVar4 + 0x60) = uVar13;
  *(undefined8 *)(puVar4 + 0x58) = uVar12;
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,puVar8,puVar1);
  uVar13 = uStack_e8;
  uVar12 = local_f0;
  uVar11 = uStack_f8;
  *(undefined8 *)(puVar4 + uVar10) = uStack_f8;
  *(undefined8 *)((long)(puVar4 + uVar10) + 8) = local_100;
  *(undefined8 *)(puVar4 + uVar10 + 0x10) = local_f0;
  *(undefined8 *)((long)(puVar4 + uVar10 + 0x10) + 8) = uStack_e8;
  _swift_retain_n(param_2,2);
  FUN_1000f8cac(param_3,auStack_e0,&DAT_100fd2028,&DAT_100c5f010);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_108,&DAT_100c600a8,puVar4);
  _swift_release();
  return;
}



/* Address: 0x100590330 | FUN_100590330 */

void FUN_100590330(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fd2540;
  local_c8 = param_5;
  uStack_c0 = param_4;
  local_b8 = param_6;
  uStack_b0 = param_7;
  FUN_1000f7830(&DAT_100fd2540,&DAT_100c60038);
  lVar6 = *(long *)(puVar1 + -8);
  lVar10 = *(long *)(lVar6 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_d0 - extraout_x8;
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar5 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Server.swift",0x10,1,0x192,param_2,0);
  }
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(lVar9 - extraout_x8_00,1,1,TVar3.unknown);
  uStack_78 = param_3[1];
  uStack_80 = *param_3;
  local_70 = *(undefined1 *)(param_3 + 2);
  uStack_88 = param_3[4];
  local_90 = param_3[3];
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,puVar1);
  puVar2 = &DAT_100fd1fe8;
  FUN_1003b6598();
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar7 = uVar5 + 0x50 & (uVar5 ^ 0xffffffffffffffff);
  uVar8 = lVar10 + uVar7 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ee3530;
  local_d0 = lVar9 - extraout_x8_00;
  _swift_allocObject(&DAT_100ee3530,uVar8 + 0x20,uVar5 | 7);
  *(ulong *)(puVar4 + 0x10) = param_2;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(ulong *)(puVar4 + 0x20) = param_2;
  uVar11 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  *(undefined8 *)(puVar4 + 0x30) = param_3[1];
  *(undefined8 *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x40) = uVar13;
  *(undefined8 *)(puVar4 + 0x38) = uVar12;
  *(undefined8 *)(puVar4 + 0x48) = param_3[4];
  (**(code **)(lVar6 + 0x20))(puVar4 + uVar7,lVar9,puVar1);
  uVar13 = uStack_b0;
  uVar12 = local_b8;
  uVar11 = uStack_c0;
  *(undefined8 *)(puVar4 + uVar8) = uStack_c0;
  *(undefined8 *)((long)(puVar4 + uVar8) + 8) = local_c8;
  *(undefined8 *)(puVar4 + uVar8 + 0x10) = local_b8;
  *(undefined8 *)((long)(puVar4 + uVar8 + 0x10) + 8) = uStack_b0;
  _swift_retain_n(param_2,2);
  FUN_10054a890(&uStack_80,auStack_a8);
  FUN_10000ca28(&local_90,auStack_a8);
  _swift_unknownObjectRetain(uVar11);
  FUN_1001037b4(uVar12,uVar13);
  FUN_1004e9c98(0,0,local_d0,&DAT_100c60060,puVar4);
  _swift_release();
  return;
}



/* Address: 0x10059057c | FUN_10059057c */

void FUN_10059057c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_100fd2580;
  FUN_1000f7830(&DAT_100fd2580,&DAT_100c600e8);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_10059060c,in_x3,0);
  return;
}



/* Address: 0x10059060c | FUN_10059060c */

void FUN_10059060c(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar15 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  uVar18 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar7;
  puVar8 = &DAT_100fd2578;
  FUN_1000f7830(&DAT_100fd2578,&DAT_100c600c8);
  *(undefined **)(unaff_x22 + 0xb0) = puVar8;
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))(uVar13,uVar6,puVar8);
  FUN_10011532c(uVar13,uVar9,&DAT_100fd2580,&DAT_100c600e8);
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar16 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ee3648;
  _swift_allocObject(&DAT_100ee3648,uVar16 + lVar4,uVar12 | 7);
  FUN_10011532c(uVar9,puVar8 + uVar16,&DAT_100fd2580,&DAT_100c600e8);
  _swift_beginAccess(lVar15 + 0x108,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar17,uVar18,uVar7);
  uVar9 = *(undefined8 *)(lVar15 + 0x108);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar15 + 0x108);
  *(undefined8 *)(lVar15 + 0x108) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10059fd98,puVar8,uVar17,uVar18,uVar7,uVar9);
  FUN_1004dc818(uVar17,uVar18,uVar7);
  *(undefined8 *)(lVar15 + 0x108) = uVar13;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar10);
  piVar14 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar14;
  plVar11 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_1005907e4;
                    /* WARNING: Could not recover jumptable at 0x0001005907e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar10,
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1005907e4 | FUN_1005907e4 */

void FUN_1005907e4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_100590b34,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100590854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100590858 | FUN_100590858 */

void FUN_100590858(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_100fd2568;
  FUN_1000f7830(&DAT_100fd2568,&DAT_100c600a0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_1005908e8,in_x3,0);
  return;
}



/* Address: 0x1005908e8 | FUN_1005908e8 */

void FUN_1005908e8(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar15 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  uVar18 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar7;
  puVar8 = &DAT_100fd2560;
  FUN_1000f7830(&DAT_100fd2560,&DAT_100c60080);
  *(undefined **)(unaff_x22 + 0xb0) = puVar8;
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))(uVar13,uVar6,puVar8);
  FUN_10011532c(uVar13,uVar9,&DAT_100fd2568,&DAT_100c600a0);
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar16 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ee35a8;
  _swift_allocObject(&DAT_100ee35a8,uVar16 + lVar4,uVar12 | 7);
  FUN_10011532c(uVar9,puVar8 + uVar16,&DAT_100fd2568,&DAT_100c600a0);
  _swift_beginAccess(lVar15 + 0x108,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar17,uVar18,uVar7);
  uVar9 = *(undefined8 *)(lVar15 + 0x108);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar15 + 0x108);
  *(undefined8 *)(lVar15 + 0x108) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10059f8ec,puVar8,uVar17,uVar18,uVar7,uVar9);
  FUN_1004dc818(uVar17,uVar18,uVar7);
  *(undefined8 *)(lVar15 + 0x108) = uVar13;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar10);
  piVar14 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar14;
  plVar11 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100590ac0;
                    /* WARNING: Could not recover jumptable at 0x000100590abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar10,
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100590ac0 | FUN_100590ac0 */

void FUN_100590ac0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100590b34,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100590b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100590b34 | FUN_100590b34 */

void FUN_100590b34(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined1 *)(unaff_x22 + 200);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x48) + 0x108,unaff_x22 + 0x28,0x21,0);
  FUN_1005064d4(lVar2,uVar3,uVar1);
  _swift_endAccess(unaff_x22 + 0x28);
  if (lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xc0));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
    FUN_100004550(lVar2,uVar3);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    Swift::CheckedContinuation::resume((undefined8 *)(unaff_x22 + 0x40),uVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100590bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100590bf0 | FUN_100590bf0 */

void FUN_100590bf0(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fd2548;
  FUN_1000f7830(&DAT_100fd2548,&DAT_100c60058);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100590c94,in_x3,0);
  return;
}



/* Address: 0x100590c94 | FUN_100590c94 */

void FUN_100590c94(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fd2540;
  FUN_1000f7830(&DAT_100fd2540,&DAT_100c60038);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fd2548,&DAT_100c60058);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ee3508;
  _swift_allocObject(&DAT_100ee3508,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fd2548,&DAT_100c60058);
  _swift_beginAccess(lVar4 + 0x108,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x108);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x108);
  *(undefined8 *)(lVar4 + 0x108) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10059f530,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x108) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100590e50;
                    /* WARNING: Could not recover jumptable at 0x000100590e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x100590e50 | FUN_100590e50 */

void FUN_100590e50(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100590ec4,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100590ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100590ec4 | FUN_100590ec4 */

void FUN_100590ec4(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xc0);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x48) + 0x108,unaff_x22 + 0x28,0x21,0);
  FUN_1005064d4(lVar2,uVar3,uVar1);
  _swift_endAccess(unaff_x22 + 0x28);
  if (lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    FUN_100004550(lVar2,uVar3);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    Swift::CheckedContinuation::resume((undefined8 *)(unaff_x22 + 0x40),uVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100590f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100590f80 | FUN_100590f80 */

void FUN_100590f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x380) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x378) = param_11;
  *(undefined8 *)(unaff_x22 + 0x370) = param_10;
  *(undefined8 *)(unaff_x22 + 0x368) = param_9;
  *(undefined1 *)(unaff_x22 + 0x332) = param_8;
  *(undefined8 *)(unaff_x22 + 0x360) = param_7;
  *(undefined1 *)(unaff_x22 + 0x331) = param_6;
  *(undefined8 *)(unaff_x22 + 0x358) = param_5;
  *(undefined8 *)(unaff_x22 + 0x350) = param_4;
  *(undefined8 *)(unaff_x22 + 0x348) = param_3;
  *(undefined8 *)(unaff_x22 + 0x340) = param_2;
  *(undefined8 *)(unaff_x22 + 0x338) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x388) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x390) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x398) = uVar2;
  _swift_task_switch(FUN_100591014);
  return;
}



/* Address: 0x100591014 | FUN_100591014 */

/* WARNING: Removing unreachable block (ram,0x0001005912bc) */
/* WARNING: Removing unreachable block (ram,0x000100591074) */

void FUN_100591014(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  UUID UVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String SVar23;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x380) + 200) != 0) {
    puVar3 = &DAT_100c5efc0;
    _swift_getKeyPath(&DAT_100c5efc0);
    FUN_100598c88();
    uVar9 = *(undefined8 *)(unaff_x22 + 0x398);
    lVar6 = *(long *)(unaff_x22 + 0x390);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x378);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x332);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x360);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x331);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x350);
    puVar12 = *(undefined8 **)(unaff_x22 + 0x348);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x340);
    _swift_release(puVar3);
    uVar18 = puVar12[1];
    uVar17 = *puVar12;
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    uVar22 = puVar12[5];
    uVar21 = puVar12[4];
    *(undefined1 *)(unaff_x22 + 0x108) = *(undefined1 *)(puVar12 + 6);
    *(undefined8 *)(unaff_x22 + 0x100) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xe8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xe0) = uVar18;
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x168) = uVar14;
    uVar18 = puVar12[1];
    uVar17 = *puVar12;
    uVar20 = puVar12[3];
    uVar19 = puVar12[2];
    uVar22 = puVar12[5];
    uVar21 = puVar12[4];
    *(undefined1 *)(unaff_x22 + 0x1a0) = *(undefined1 *)(puVar12 + 6);
    *(undefined8 *)(unaff_x22 + 0x188) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x180) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x198) = uVar22;
    *(undefined8 *)(unaff_x22 + 400) = uVar21;
    *(undefined8 *)(unaff_x22 + 0x178) = uVar18;
    *(undefined8 *)(unaff_x22 + 0x170) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar16;
    *(undefined1 *)(unaff_x22 + 0x1b8) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x1c0) = uVar13;
    *(undefined1 *)(unaff_x22 + 0x1c8) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x1e0) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
    *(undefined1 *)(unaff_x22 + 0x1f0) = 4;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x110) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x118) = uVar16;
    *(undefined1 *)(unaff_x22 + 0x120) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x128) = uVar13;
    *(undefined1 *)(unaff_x22 + 0x130) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x138) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x140) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x148) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x150) = 0;
    *(undefined1 *)(unaff_x22 + 0x158) = 4;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    _swift_bridgeObjectRetain(uVar14);
    FUN_1000f8cac(puVar12,unaff_x22 + 0x300,&DAT_100fcfb80,&BYTE_100c58880);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar16);
    _swift_bridgeObjectRetain(uVar7);
    FUN_100563a5c((undefined8 *)(unaff_x22 + 0x168),unaff_x22 + 0x200);
    FUN_100563a90(unaff_x22 + 0xd0);
    UVar4 = Foundation::UUID::init();
    SVar23 = Foundation::UUID::get_uuidString(UVar4);
    (**(code **)(lVar6 + 8))(uVar9,uVar10);
    *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x1d0);
    *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x1c8);
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x1e0);
    *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x1d8);
    *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x1f0);
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 400);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x188);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1a0);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x198);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x1a8);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x1c0);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1f8);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x180);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x178);
    *(String *)(unaff_x22 + 0x10) = SVar23;
    *(undefined1 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x30) = 0x8000000100dad430;
    lVar6 = unaff_x22 + 0x10;
    FUN_10058ec5c();
    *(long *)(unaff_x22 + 0x3a0) = lVar6;
    plVar5 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3a8) = plVar5;
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100591380;
    Swift::Task::get_value((undefined *)(unaff_x22 + 0x298));
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dadcb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x398));
                    /* WARNING: Could not recover jumptable at 0x000100591300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100591380 | FUN_100591380 */

void FUN_100591380(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x3b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3a8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005913dc;
  }
  else {
    pcVar1 = FUN_10059146c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x380),0);
  return;
}



/* Address: 0x1005913dc | FUN_1005913dc */

void FUN_1005913dc(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x398);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x338);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x3a0));
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd2020,&DAT_100c5efe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x298);
  puVar2[1] = *(undefined8 *)(unaff_x22 + 0x2a0);
  *puVar2 = uVar7;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2c8);
  puVar2[0xc] = *(undefined8 *)(unaff_x22 + 0x2f8);
  puVar2[9] = uVar6;
  puVar2[8] = uVar5;
  puVar2[0xb] = uVar4;
  puVar2[10] = uVar3;
  puVar2[7] = uVar8;
  puVar2[6] = uVar7;
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100591468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


