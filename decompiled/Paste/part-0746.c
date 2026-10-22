/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008301c0 | FUN_1008301c0 */

void FUN_1008301c0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = *param_2;
  _swift_task_switch(FUN_1008301e0,0,0);
  return;
}



/* Address: 0x1008301e0 | FUN_1008301e0 */

void FUN_1008301e0(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  ulong uVar15;
  ushort uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char *pcVar19;
  
  lVar11 = *(long *)(unaff_x22 + 0x20);
  uVar9 = *(ulong *)(lVar11 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar9 != 0) {
    uVar15 = 0;
    lVar10 = *(long *)(unaff_x22 + 0x18);
    puVar12 = (undefined8 *)(lVar10 + 0x28);
    pcVar19 = (char *)(lVar11 + 0x42);
    do {
      if (*(ulong *)(lVar11 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100830470);
        (*pcVar5)();
      }
      if (*(ulong *)(lVar10 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100830474);
        (*pcVar5)();
      }
      uVar13 = *(undefined8 *)(pcVar19 + -0x22);
      uVar18 = *(undefined8 *)(pcVar19 + -0x1a);
      uVar17 = *(undefined8 *)(pcVar19 + -0x12);
      uVar14 = *(undefined8 *)(pcVar19 + -10);
      uVar16 = *(ushort *)(pcVar19 + -2);
      cVar4 = *pcVar19;
      uVar1 = puVar12[-1];
      uVar3 = *puVar12;
      FUN_1007fc0c4(uVar13,uVar18,uVar17,uVar14,uVar16,cVar4);
      FUN_1007fc0c4(uVar13,uVar18,uVar17,uVar14,uVar16,cVar4);
      _swift_bridgeObjectRetain(uVar3);
      puVar6 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_1008368f4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
        puVar7 = puVar6;
      }
      uVar2 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1008368f4(puVar7,uVar2 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar7 + uVar2 * 0x38 + 0x20) = uVar1;
      *(undefined8 *)(puVar7 + uVar2 * 0x38 + 0x28) = uVar3;
      *(undefined8 *)(puVar7 + uVar2 * 0x38 + 0x30) = uVar13;
      *(undefined8 *)(puVar7 + uVar2 * 0x38 + 0x38) = uVar18;
      *(undefined8 *)(puVar7 + uVar2 * 0x38 + 0x40) = uVar17;
      *(undefined8 *)(puVar7 + uVar2 * 0x38 + 0x48) = uVar14;
      *(ushort *)(puVar7 + uVar2 * 0x38 + 0x50) = uVar16;
      puVar7[uVar2 * 0x38 + 0x52] = cVar4;
      if (cVar4 == '\x01') {
        uVar16 = 0;
        puVar12 = *(undefined8 **)(unaff_x22 + 0x10);
        *puVar12 = puVar7;
        puVar12[1] = uVar13;
        puVar12[2] = 0;
        uVar8 = 1;
        goto LAB_10083043c;
      }
      if ((uVar16 & 0xff00) != 0x200) {
        puVar12 = *(undefined8 **)(unaff_x22 + 0x10);
        *puVar12 = puVar7;
        FUN_1007fb28c(uVar17,uVar14,uVar16);
        FUN_1007fc148(uVar13,uVar18,uVar17,uVar14,uVar16,cVar4);
        uVar8 = 0;
        puVar12[1] = uVar17;
        puVar12[2] = uVar14;
        goto LAB_10083043c;
      }
      uVar15 = uVar15 + 1;
      FUN_1007fc148(uVar13,uVar18,uVar17,uVar14,uVar16,cVar4);
      puVar12 = puVar12 + 2;
      pcVar19 = pcVar19 + 0x28;
    } while (uVar9 != uVar15);
  }
  uVar8 = 0;
  puVar12 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar12[1] = 0;
  puVar12[2] = 0;
  *puVar12 = puVar7;
  uVar16 = 0x200;
LAB_10083043c:
  lVar11 = *(long *)(unaff_x22 + 0x10);
  *(ushort *)(lVar11 + 0x18) = uVar16;
  *(undefined1 *)(lVar11 + 0x1a) = uVar8;
                    /* WARNING: Could not recover jumptable at 0x000100830468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100830474 | FUN_100830474 */

void FUN_100830474(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  long param_5,ulong param_6,ulong param_7,undefined8 *param_8,undefined8 param_9,
                  undefined8 param_10,undefined1 param_11,undefined4 param_12,int *param_13,
                  undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  if (param_6 == param_7 >> 1) {
    uVar6 = *param_8;
    iVar1 = *param_13;
    plVar4 = (long *)(ulong)(uint)param_13[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100830684;
                    /* WARNING: Could not recover jumptable at 0x000100830524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)param_13))
              (plVar4,param_1,param_2,param_3 & 0xcfffffffffffffff,uVar6);
    return;
  }
  if ((long)param_6 < (long)(param_7 >> 1)) {
    FUN_100076688(param_5 + param_6 * 0x28,unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x98);
    FUN_100004640(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x90));
    *(undefined8 *)(unaff_x22 + 0x20) = param_15;
    *(undefined8 **)(unaff_x22 + 0x28) = param_8;
    *(undefined8 *)(unaff_x22 + 0x30) = param_4;
    *(long *)(unaff_x22 + 0x38) = param_5;
    *(ulong *)(unaff_x22 + 0x40) = param_6;
    *(ulong *)(unaff_x22 + 0x48) = param_7;
    *(undefined8 *)(unaff_x22 + 0x50) = param_9;
    *(undefined8 *)(unaff_x22 + 0x58) = param_10;
    *(undefined1 *)(unaff_x22 + 0x60) = param_11;
    *(int **)(unaff_x22 + 0x68) = param_13;
    *(undefined8 *)(unaff_x22 + 0x70) = param_14;
    piVar5 = *(int **)(lVar2 + 0x20);
    iVar1 = *piVar5;
    plVar4 = (long *)(ulong)(uint)piVar5[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100830638;
                    /* WARNING: Could not recover jumptable at 0x000100830630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar5))
              (param_1,param_2,param_3 & 0xcfffffffffffffff,param_9,param_10,param_11,&UNK_100c7c460
               ,unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100830638);
  (*pcVar3)();
}



/* Address: 0x100830638 | FUN_100830638 */

void FUN_100830638(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa0));
  FUN_100004594(lVar1 + 0x78);
                    /* WARNING: Could not recover jumptable at 0x000100830680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100830684 | FUN_100830684 */

void FUN_100830684(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001008306c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1008306c8 | FUN_1008306c8 */

void FUN_1008306c8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong *param_5,undefined8 param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x22;
  long *plVar5;
  ulong uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  FUN_1000f8cac(param_4,unaff_x22 + 0x10,&DAT_100fe7178,&DAT_100c7cce0);
  uVar6 = *param_5;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_5 = uVar6;
  uVar3 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_100836a2c(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *param_5 = uVar3;
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar6 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_100836a2c(uVar6,uVar4 + 1,1,uVar3);
    *param_5 = uVar6;
  }
  puVar2 = &DAT_100fe7178;
  FUN_1000f7830(&DAT_100fe7178,&DAT_100c7cce0);
  *(undefined **)(unaff_x22 + 0x50) = puVar2;
  puVar2 = &DAT_100fe7468;
  FUN_100134584(&DAT_100fe7468,&DAT_100fe7178,&DAT_100c7cce0,
                &TargetProtocolConformanceDescriptor_100c7d4e0);
  *(undefined **)(unaff_x22 + 0x58) = puVar2;
  puVar2 = &DAT_100f05670;
  _swift_allocObject(&DAT_100f05670,0x38,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  FUN_1000f8cac(unaff_x22 + 0x10,puVar2 + 0x10,&DAT_100fe7178,&DAT_100c7cce0);
  *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
  FUN_100076508(unaff_x22 + 0x38,uVar6 + uVar4 * 0x28 + 0x20);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fe7178,&DAT_100c7cce0);
  uVar4 = param_9 >> 1;
  if (SBORROW8(uVar4,param_8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100830938);
    (*pcVar1)();
  }
  uVar3 = param_8;
  if (uVar4 != param_8) {
    uVar3 = param_8 + 1;
    if (SCARRY8(param_8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100830948);
      (*pcVar1)();
    }
    if ((long)uVar4 < (long)uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10083093c);
      (*pcVar1)();
    }
    if ((long)uVar3 < (long)param_8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100830940);
      (*pcVar1)();
    }
  }
  if ((long)param_8 <= (long)uVar4) {
    plVar5 = (long *)0xb0;
    _swift_unknownObjectRetain(param_6);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100830948;
    FUN_100830474(plVar5,param_1,param_2,param_3 & 0xcfffffffffffffff,param_6,param_7,uVar3,param_9,
                  param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100830944);
  (*pcVar1)();
}



/* Address: 0x100830948 | FUN_100830948 */

void FUN_100830948(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x60);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100830990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100830994 | FUN_100830994 */

void FUN_100830994(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong *param_5,undefined8 param_6,undefined8 param_7,ulong param_8,ulong param_9)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x22;
  long *plVar6;
  ulong uVar7;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  FUN_1000f8cac(param_4,unaff_x22 + 0x10,&DAT_100fe71b0,&DAT_100c7bac0);
  uVar7 = *param_5;
  uVar5 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_5 = uVar7;
  uVar4 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    FUN_100836a50(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *param_5 = uVar4;
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100836a50(uVar7,uVar5 + 1,1,uVar4);
    *param_5 = uVar7;
  }
  puVar2 = &DAT_100fe71b0;
  FUN_1000f7830(&DAT_100fe71b0,&DAT_100c7bac0);
  *(undefined **)(unaff_x22 + 0x50) = puVar2;
  puVar3 = &DAT_100fe7440;
  FUN_100134584(&DAT_100fe7440,&DAT_100fe71b0,&DAT_100c7bac0,
                &TargetProtocolConformanceDescriptor_100c7d4e0);
  *(undefined8 **)(unaff_x22 + 0x58) = puVar3;
  puVar2 = &DAT_100f05648;
  _swift_allocObject(&DAT_100f05648,0x38,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar2;
  FUN_1000f8cac(unaff_x22 + 0x10,puVar2 + 0x10,&DAT_100fe71b0,&DAT_100c7bac0);
  *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
  FUN_100076508(unaff_x22 + 0x38,uVar7 + uVar5 * 0x28 + 0x20);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fe71b0,&DAT_100c7bac0);
  uVar5 = param_9 >> 1;
  if (SBORROW8(uVar5,param_8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100830bd8);
    (*pcVar1)();
  }
  uVar4 = param_8;
  if (uVar5 != param_8) {
    uVar4 = param_8 + 1;
    if (SCARRY8(param_8,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100830be8);
      (*pcVar1)();
    }
    if ((long)uVar5 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100830bdc);
      (*pcVar1)();
    }
    if ((long)uVar4 < (long)param_8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100830be0);
      (*pcVar1)();
    }
  }
  if ((long)param_8 <= (long)uVar5) {
    plVar6 = (long *)0xa0;
    _swift_unknownObjectRetain(param_6);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)thunk_FUN_100830948;
    FUN_10082fe00(plVar6,param_1,param_2,param_3 & 0xcfffffffffffffff,param_6,param_7,uVar4,param_9,
                  param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100830be4);
  (*pcVar1)();
}



/* Address: 0x100830be8 | FUN_100830be8 */

void FUN_100830be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_10082fbe8(plVar3,param_1,param_2,param_3,param_4,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x100830c84 | FUN_100830c84 */

void FUN_100830c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_100830994(plVar5,param_1,param_2,param_3,param_4,uVar3,uVar2,uVar4,uVar7,uVar8,uVar9,uVar6,
                uVar1);
  return;
}



/* Address: 0x100830d48 | FUN_100830d48 */

void FUN_100830d48(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100830d6c | FUN_100830d6c */

void FUN_100830d6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_10082ffcc(plVar5,param_1,param_2,param_3,param_4,uVar3,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x100830e0c | FUN_100830e0c */

void FUN_100830e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x50);
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1008306c8(plVar5,param_1,param_2,param_3,param_4,uVar2,uVar1,uVar3,uVar7,uVar8,uVar9,uVar6,
                uVar4);
  return;
}



/* Address: 0x100830ee0 | FUN_100830ee0 */

void FUN_100830ee0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100830f04 | FUN_100830f04 */

void FUN_100830f04(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1008301c0(plVar1,param_1,param_2,uVar2);
  return;
}



/* Address: 0x100830f74 | FUN_100830f74 */

void FUN_100830f74(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_1000f8b08(param_2,param_3);
    puVar1 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
    ;
    _swift_getWitnessTable
              (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
               ,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x100830fb8 | FUN_100830fb8 */

undefined1  [16] FUN_100830fb8(void)

{
  return ZEXT816(0x100f056c0);
}



/* Address: 0x100830fc8 | thunk_FUN_100830d48 */

void thunk_FUN_100830d48(void)

{
  FUN_100830d48();
  return;
}



/* Address: 0x100830fcc | thunk_FUN_100830948 */

void thunk_FUN_100830948(void)

{
  FUN_100830948();
  return;
}



/* Address: 0x100830fd0 | FUN_100830fd0 */

uint FUN_100830fd0(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  __uint8 _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar4 = 0;
    iVar5 = 1;
  }
  else {
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar3 = Swift::_StringObject::get_sharedUTF8(param_1);
        }
        else {
          UVar3.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        }
        iVar5 = 0;
        uVar4 = (uint)(byte)*UVar3.unknown;
        goto LAB_100831030;
      }
    }
    else {
      _Var2 = Swift::String::UTF8View::_foreignSubscript((Index)0xf,(UTF8View)param_1.unknown);
      param_1.unknown = (undefined *)(ulong)_Var2;
    }
    uVar4 = (uint)param_1.unknown;
    iVar5 = 0;
  }
LAB_100831030:
  return uVar4 & 0xff | iVar5 << 8;
}



/* Address: 0x100831050 | FUN_100831050 */

void FUN_100831050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  String SVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  local_f0 = 0x3d;
  uStack_e8 = 0xe100000000000000;
  local_b0 = &local_f0;
  _swift_bridgeObjectRetain(uVar3);
  lVar7 = 1;
  FUN_1008362e0(1,1,FUN_1008319c0,&local_c0,uVar1,uVar3);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar12 = *(long *)(lVar7 + 0x10);
  if (lVar12 == 0) {
    _swift_bridgeObjectRelease(lVar7);
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10083547c(0,lVar12,0);
    FUN_100831980();
    puVar13 = (undefined8 *)(lVar7 + 0x38);
    do {
      local_80 = puVar13[-1];
      uVar1 = *puVar13;
      uStack_88 = puVar13[-2];
      local_90 = puVar13[-3];
      uStack_78 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      uVar3 = uStack_d8;
      uStack_b8 = uStack_e8;
      local_c0 = local_f0;
      local_b0 = local_e0;
      uStack_a8 = uStack_d8;
      FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
      FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      _swift_bridgeObjectRelease(uVar3);
      uStack_b8 = uStack_e8;
      local_c0 = local_f0;
      uStack_a8 = uStack_d8;
      local_b0 = local_e0;
      local_a0 = local_d0;
      uStack_98 = uStack_c8;
      puVar8 = &DAT_100fe74a8;
      FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
      puVar9 = &DAT_100fe74b0;
      FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398);
      SVar14 = Swift::String::_init(&local_c0,puVar8,puVar9);
      _swift_bridgeObjectRelease(uVar1);
      uVar2 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
        FUN_10083547c(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
      }
      puVar13 = puVar13 + 4;
      *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
      *(String *)(puVar11 + uVar2 * 0x10 + 0x20) = SVar14;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    _swift_bridgeObjectRelease(lVar7);
  }
  if (*(long *)(puVar11 + 0x10) == 2) {
    uVar10 = *(ulong *)(puVar11 + 0x20);
    uVar2 = uVar10 & 0xffffffffffff;
    if ((*(ulong *)(puVar11 + 0x28) & 0x2000000000000000) != 0) {
      uVar2 = *(ulong *)(puVar11 + 0x28) >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      FUN_100830fd0();
      if ((((uint)uVar10 & 0xff00) == 0x100) || (((uint)uVar10 & 0xff) != 0x23)) {
        if (1 < *(ulong *)(puVar11 + 0x10)) {
          uVar1 = *(undefined8 *)(puVar11 + 0x20);
          uVar4 = *(undefined8 *)(puVar11 + 0x28);
          uVar3 = *(undefined8 *)(puVar11 + 0x30);
          uVar5 = *(undefined8 *)(puVar11 + 0x38);
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRelease(puVar11);
          *param_1 = uVar1;
          param_1[1] = uVar4;
          param_1[2] = uVar3;
          param_1[3] = uVar5;
          return;
        }
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100831348);
        (*pcVar6)();
      }
    }
  }
  _swift_bridgeObjectRelease(puVar11);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100831348 | FUN_100831348 */

void FUN_100831348(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  lVar14 = *param_3;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  uVar8 = uVar3;
  uVar10 = uVar5;
  FUN_100071370();
  lVar11 = *(long *)(lVar14 + 0x10);
  uVar12 = (ulong)~(uint)uVar10 & 1;
  lVar15 = lVar11 + uVar12;
  if (SCARRY8(lVar11,uVar12)) {
LAB_1008315d8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008315dc);
    (*pcVar7)();
  }
  if (*(long *)(lVar14 + 0x18) < lVar15) {
    FUN_100845884(lVar15,param_2 & 1);
    uVar8 = uVar3;
    uVar12 = uVar5;
    FUN_100071370();
    if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) {
LAB_1008313fc:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10083140c);
      (*pcVar7)();
    }
  }
  else if ((param_2 & 1) == 0) {
    FUN_100844a28();
    lVar15 = *param_3;
    goto joined_r0x00010083145c;
  }
  lVar15 = *param_3;
joined_r0x00010083145c:
  if ((uVar10 & 1) == 0) {
    lVar11 = lVar15 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar5;
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
    *puVar16 = uVar4;
    puVar16[1] = uVar6;
    if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
LAB_1008315dc:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008315e0);
      (*pcVar7)();
    }
    *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
  }
  else {
    _swift_bridgeObjectRelease(uVar5);
    puVar16 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
    uVar9 = puVar16[1];
    *puVar16 = uVar4;
    puVar16[1] = uVar6;
    _swift_bridgeObjectRelease(uVar9);
  }
  if (lVar13 != 1) {
    lVar13 = lVar13 + -1;
    puVar16 = (undefined8 *)(param_1 + 0x58);
    do {
      uVar3 = puVar16[-3];
      uVar5 = puVar16[-2];
      uVar4 = puVar16[-1];
      uVar6 = *puVar16;
      lVar14 = *param_3;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar8 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      lVar11 = *(long *)(lVar14 + 0x10);
      uVar12 = (ulong)~(uint)uVar10 & 1;
      lVar15 = lVar11 + uVar12;
      if (SCARRY8(lVar11,uVar12)) goto LAB_1008315d8;
      if (*(long *)(lVar14 + 0x18) < lVar15) {
        FUN_100845884(lVar15,1);
        uVar8 = uVar3;
        uVar12 = uVar5;
        FUN_100071370();
        if (((uint)uVar10 & 1) != ((uint)uVar12 & 1)) goto LAB_1008313fc;
      }
      lVar15 = *param_3;
      if ((uVar10 & 1) == 0) {
        lVar11 = lVar15 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar11 + 0x40) = *(ulong *)(lVar11 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) goto LAB_1008315dc;
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar5);
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar8 * 0x10);
        uVar9 = puVar2[1];
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        _swift_bridgeObjectRelease(uVar9);
      }
      puVar16 = puVar16 + 4;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



/* Address: 0x1008315e0 | FUN_1008315e0 */

/* WARNING: Removing unreachable block (ram,0x000100831970) */

undefined * FUN_1008315e0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  _DictionaryStorage *this;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  String SVar17;
  undefined *local_100;
  long lStack_f8;
  undefined **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  long lStack_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_78;
  
  local_100 = (undefined *)0xa;
  lStack_f8 = -0x1f00000000000000;
  local_c0 = &local_100;
  _swift_bridgeObjectRetain(param_2);
  lVar6 = 0x7fffffffffffffff;
  FUN_1008362e0(0x7fffffffffffffff,1,FUN_1002dee10,&local_d0,param_1,param_2);
  lVar13 = *(long *)(lVar6 + 0x10);
  if (lVar13 == 0) {
    _swift_bridgeObjectRelease(lVar6);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,lVar13,0);
    puVar10 = local_78;
    FUN_100831980();
    puVar16 = (undefined8 *)(lVar6 + 0x38);
    do {
      local_90 = puVar16[-1];
      uVar2 = *puVar16;
      uStack_98 = puVar16[-2];
      local_a0 = puVar16[-3];
      uStack_88 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      uVar3 = uStack_e8;
      lStack_c8 = lStack_f8;
      local_d0 = local_100;
      local_c0 = local_f0;
      uStack_b8 = uStack_e8;
      FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
      FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      _swift_bridgeObjectRelease(uVar3);
      lStack_c8 = lStack_f8;
      local_d0 = local_100;
      uStack_b8 = uStack_e8;
      local_c0 = local_f0;
      local_b0 = local_e0;
      uStack_a8 = uStack_d8;
      puVar8 = &DAT_100fe74a8;
      FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
      puVar12 = &DAT_100fe74b0;
      FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398);
      SVar17 = Swift::String::_init(&local_d0,puVar8,puVar12);
      _swift_bridgeObjectRelease(uVar2);
      uVar11 = *(ulong *)(puVar10 + 0x10);
      local_78 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar11) {
        FUN_10083547c(1 < *(ulong *)(puVar10 + 0x18),uVar11 + 1,1);
      }
      puVar10 = local_78;
      puVar16 = puVar16 + 4;
      *(ulong *)(local_78 + 0x10) = uVar11 + 1;
      *(String *)(local_78 + uVar11 * 0x10 + 0x20) = SVar17;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    _swift_bridgeObjectRelease(lVar6);
  }
  uVar11 = *(ulong *)(puVar10 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar11 != 0) {
    uVar14 = 0;
    plVar15 = (long *)(puVar10 + 0x28);
    do {
      if (*(ulong *)(puVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100831970);
        (*pcVar5)();
      }
      local_100 = (undefined *)plVar15[-1];
      lStack_f8 = *plVar15;
      FUN_100831050(&local_d0,&local_100);
      uVar2 = uStack_b8;
      ppuVar4 = local_c0;
      lVar13 = lStack_c8;
      puVar12 = local_d0;
      if (lStack_c8 != 0) {
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_100836a74(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar1 = *(ulong *)(puVar9 + 0x10);
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_100836a74(puVar8,uVar1 + 1,1,puVar9);
        }
        *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar8 + uVar1 * 0x20 + 0x20) = puVar12;
        *(long *)(puVar8 + uVar1 * 0x20 + 0x28) = lVar13;
        *(undefined ***)(puVar8 + uVar1 * 0x20 + 0x30) = ppuVar4;
        *(undefined8 *)(puVar8 + uVar1 * 0x20 + 0x38) = uVar2;
      }
      uVar14 = uVar14 + 1;
      plVar15 = plVar15 + 2;
    } while (uVar11 != uVar14);
  }
  _swift_bridgeObjectRelease(puVar10);
  puVar12 = *(undefined **)(puVar8 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar12 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe74b8;
    FUN_1000f7830(&DAT_100fe74b8,&DAT_100c7ce20);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar12);
    puVar10 = puVar12;
  }
  local_d0 = puVar10;
  FUN_100831348(puVar8,1,&local_d0);
  _swift_bridgeObjectRelease(puVar8);
  return local_d0;
}



/* Address: 0x100831980 | FUN_100831980 */

void FUN_100831980(void)

{
  undefined *puVar1;
  
  if (DAT_100fe7490 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Collection_100eacab0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Collection_100eacab0,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fe7490 = puVar1;
  return;
}



/* Address: 0x1008319c0 | FUN_1008319c0 */

uint FUN_1008319c0(uint param_1)

{
  FUN_1002dee10();
  return param_1 & 1;
}



/* Address: 0x1008319d8 | thunk_FUN_1008319dc */

void thunk_FUN_1008319dc(void)

{
  FUN_1008319dc();
  return;
}



/* Address: 0x1008319dc | FUN_1008319dc */

String FUN_1008319dc(long param_1)

{
  String *pSVar1;
  char *pcVar2;
  ulong uVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  __int64 _Var7;
  Index IVar8;
  Scalar SVar10;
  _StringObject _Var11;
  Properties PVar12;
  UnsafeBufferPointer<__int8> UVar13;
  undefined *puVar14;
  void *pvVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  void *pvVar21;
  ulong uVar22;
  long lVar23;
  char *pcVar24;
  undefined *puVar25;
  Index IVar26;
  Character CVar27;
  Character CVar28;
  String SVar29;
  String separator;
  String SVar30;
  String SVar31;
  String SVar32;
  long local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong local_b8;
  undefined *local_b0;
  Index local_a8;
  void *local_a0;
  ulong local_98;
  char *local_90;
  undefined *local_88;
  undefined8 local_80;
  char *local_78;
  void *pvStack_70;
  undefined *local_68;
  Scalar SVar9;
  void *pvVar15;
  
  local_90 = (char *)Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  local_98 = *(ulong *)(local_90 + -8);
  local_a0 = (void *)((long)&local_d0 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (uVar20 == 0) {
    uVar17 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pcVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar17 == 0) goto LAB_100832254;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,uVar20,0);
    uVar22 = 0;
    param_1 = param_1 + 0x20;
    local_d0 = param_1;
    uStack_c8 = uVar20;
    do {
      puVar14 = local_68;
      pSVar1 = (String *)(param_1 + uVar22 * 0x10);
      pcVar24 = pSVar1->str;
      pvVar21 = pSVar1->bridgeObject;
      SVar29 = *pSVar1;
      _swift_bridgeObjectRetain(pvVar21);
      _Var7 = Swift::String::get_count(SVar29);
      if (1 < _Var7) {
        local_b8 = uVar22;
        local_b0 = puVar14;
        local_78 = pcVar24;
        pvStack_70 = pvVar21;
        _swift_bridgeObjectRetain(pvVar21);
        IVar26.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
        local_c0 = pvVar21;
        do {
          pcVar2 = pcVar24;
          if (((ulong)pvVar21 & 0x2000000000000000) != 0) {
            pcVar2 = (char *)((ulong)pvVar21 >> 0x38 & 0xf);
          }
          uVar19 = (uint)((ulong)pcVar24 >> 0x3b) & 1;
          if (((ulong)pvVar21 & 0x1000000000000000) == 0) {
            uVar19 = 1;
          }
          uVar20 = 7;
          if (uVar19 == 0) {
            uVar20 = 0xb;
          }
          local_a8.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar20 | (long)pcVar2 << 0x10);
          do {
            while( true ) {
              SVar29.bridgeObject = pvVar21;
              SVar29.str = pcVar24;
              IVar8 = Swift::String::index(local_a8,SVar29);
              if ((ulong)IVar8.cmsgPointer.unknown >> 0xe <=
                  (ulong)IVar26.cmsgPointer.unknown >> 0xe) {
                _swift_bridgeObjectRelease(local_c0);
                uVar20 = uStack_c8;
                uVar22 = local_b8;
                puVar14 = local_b0;
                param_1 = local_d0;
                goto LAB_100831fdc;
              }
              SVar30.bridgeObject = pvVar21;
              SVar30.str = pcVar24;
              CVar27 = Swift::String::get_subscript(IVar26,SVar30);
              pvVar15 = CVar27.bridgeObject;
              SVar9.unknown = CVar27.str;
              SVar31.bridgeObject = pvVar21;
              SVar31.str = pcVar24;
              IVar26 = Swift::String::index(IVar26,SVar31);
              SVar32.bridgeObject = pvVar21;
              SVar32.str = pcVar24;
              CVar28 = Swift::String::get_subscript(IVar26,SVar32);
              pvVar16 = CVar28.bridgeObject;
              SVar10.unknown = CVar28.str;
              uVar20 = (ulong)SVar9.unknown & 0xffffffffffff;
              if (((ulong)pvVar15 & 0x2000000000000000) != 0) {
                uVar20 = (ulong)pvVar15 >> 0x38 & 0xf;
              }
              if (uVar20 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322dc);
                (*pcVar5)();
              }
              uVar19 = (uint)CVar27.str;
              if (((ulong)pvVar15 >> 0x3c & 1) == 0) {
                uVar18 = uVar19;
                if (((ulong)pvVar15 >> 0x3d & 1) == 0) {
                  if (((ulong)SVar9.unknown >> 0x3c & 1) == 0) {
                    UVar13 = Swift::_StringObject::get_sharedUTF8(SVar9.unknown);
                    uVar18 = (uint)(byte)*UVar13.unknown;
                  }
                  else {
                    uVar18 = (uint)*(byte *)(((ulong)pvVar15 & 0xfffffffffffffff) + 0x20);
                  }
                }
                IVar8.cmsgPointer.unknown =
                     (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x10000;
                if (0x7fffffff < (uint)(int)(char)uVar18) {
                  IVar8.cmsgPointer.unknown =
                       (UnsafeMutablePointer)
                       (undefined *)(LZCOUNT(uVar18 << 0x18 ^ 0xffffffff) << 0x10);
                }
              }
              else {
                IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                  ((Index)0xf,(UnicodeScalarView)SVar9.unknown);
              }
              lVar23 = uVar20 * 4;
              if (lVar23 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) break;
              _swift_bridgeObjectRetain(pvVar15);
LAB_100831bfc:
              bVar6 = Swift::Character::get__isLowercased(CVar27);
              if (bVar6) {
                if (((ulong)pvVar15 >> 0x3c & 1) == 0) {
                  if (((ulong)pvVar15 >> 0x3d & 1) == 0) {
                    if (((ulong)SVar9.unknown >> 0x3c & 1) == 0) {
                      UVar13 = Swift::_StringObject::get_sharedUTF8(SVar9.unknown);
                      uVar19 = (uint)(byte)*UVar13.unknown;
                    }
                    else {
                      uVar19 = (uint)*(byte *)(((ulong)pvVar15 & 0xfffffffffffffff) + 0x20);
                    }
                  }
                  uVar20 = 0x10000;
                  if (0x7fffffff < (uint)(int)(char)uVar19) {
                    uVar20 = LZCOUNT(uVar19 << 0x18 ^ 0xffffffff) << 0x10;
                  }
                  if (lVar23 - (uVar20 >> 0xe) != 0) goto LAB_100831c50;
LAB_100831cc4:
                  FUN_1000482c8(SVar9.unknown,pvVar15);
                  _swift_bridgeObjectRelease(pvVar15);
                  pvVar4 = local_a0;
                  if (((ulong)SVar9.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322f4);
                    (*pcVar5)();
                  }
                  PVar12 = Swift::Unicode::Scalar::get_properties(SVar9);
                  bVar6 = Swift::Unicode::Scalar::Properties::get_isCased(PVar12);
                  (**(code **)(local_98 + 8))(pvVar4,local_90);
                  if (bVar6) goto LAB_100831d1c;
                }
                else {
                  IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                    ((Index)0xf,(UnicodeScalarView)SVar9.unknown);
                  if (lVar23 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) goto LAB_100831cc4;
LAB_100831c50:
                  _swift_bridgeObjectRelease(pvVar15);
                }
                bVar6 = Swift::Character::get__isUppercased(CVar27);
                if (!bVar6) goto LAB_100831d1c;
                bVar6 = Swift::Character::get__isLowercased(CVar27);
                _swift_bridgeObjectRelease(pvVar15);
                if (!bVar6) goto LAB_100831d24;
                _swift_bridgeObjectRelease(pvVar16);
              }
              else {
                _swift_bridgeObjectRelease(pvVar16);
                pvVar16 = pvVar15;
LAB_100831e1c:
                _swift_bridgeObjectRelease_n(pvVar16,2);
              }
            }
            _Var11.unknown = SVar9.unknown;
            FUN_1000482c8(SVar9.unknown,pvVar15);
            if (((ulong)_Var11.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322ec);
              (*pcVar5)();
            }
            _swift_bridgeObjectRetain(pvVar15);
            pvVar4 = local_a0;
            PVar12 = Swift::Unicode::Scalar::get_properties(_Var11.unknown);
            bVar6 = Swift::Unicode::Scalar::Properties::get_isLowercase(PVar12);
            (**(code **)(local_98 + 8))(pvVar4,local_90);
            if (!bVar6) goto LAB_100831bfc;
            _swift_bridgeObjectRelease(pvVar15);
LAB_100831d1c:
            _swift_bridgeObjectRelease(pvVar15);
LAB_100831d24:
            uVar20 = (ulong)SVar10.unknown & 0xffffffffffff;
            if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
              uVar20 = (ulong)pvVar16 >> 0x38 & 0xf;
            }
            if (uVar20 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322e0);
              (*pcVar5)();
            }
            uVar19 = (uint)CVar28.str;
            if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
              uVar18 = uVar19;
              if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
                if (((ulong)SVar10.unknown >> 0x3c & 1) == 0) {
                  UVar13 = Swift::_StringObject::get_sharedUTF8(SVar10.unknown);
                  uVar18 = (uint)(byte)*UVar13.unknown;
                }
                else {
                  uVar18 = (uint)*(byte *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
                }
              }
              IVar8.cmsgPointer.unknown =
                   (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar18) {
                IVar8.cmsgPointer.unknown =
                     (UnsafeMutablePointer)
                     (undefined *)(LZCOUNT(uVar18 << 0x18 ^ 0xffffffff) << 0x10);
              }
            }
            else {
              IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                ((Index)0xf,(UnicodeScalarView)SVar10.unknown);
            }
            lVar23 = uVar20 * 4;
            if (lVar23 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) {
              _Var11.unknown = SVar10.unknown;
              FUN_1000482c8(SVar10.unknown,pvVar16);
              if (((ulong)_Var11.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322f0);
                (*pcVar5)();
              }
              _swift_bridgeObjectRetain(pvVar16);
              pvVar15 = local_a0;
              PVar12 = Swift::Unicode::Scalar::get_properties(_Var11.unknown);
              bVar6 = Swift::Unicode::Scalar::Properties::get_isUppercase(PVar12);
              (**(code **)(local_98 + 8))(pvVar15,local_90);
              if (!bVar6) goto LAB_100831dec;
              _swift_bridgeObjectRelease(pvVar16);
LAB_100831f8c:
              _swift_bridgeObjectRelease(pvVar16);
              break;
            }
            _swift_bridgeObjectRetain(pvVar16);
LAB_100831dec:
            bVar6 = Swift::Character::get__isUppercased(CVar28);
            if (!bVar6) goto LAB_100831e1c;
            if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
              if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
                if (((ulong)SVar10.unknown >> 0x3c & 1) == 0) {
                  UVar13 = Swift::_StringObject::get_sharedUTF8(SVar10.unknown);
                  uVar19 = (uint)(byte)*UVar13.unknown;
                }
                else {
                  uVar19 = (uint)*(byte *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
                }
              }
              uVar20 = 0x10000;
              if (0x7fffffff < (uint)(int)(char)uVar19) {
                uVar20 = LZCOUNT(uVar19 << 0x18 ^ 0xffffffff) << 0x10;
              }
              if (lVar23 - (uVar20 >> 0xe) != 0) goto LAB_100831e44;
LAB_100831eb0:
              FUN_1000482c8(SVar10.unknown,pvVar16);
              _swift_bridgeObjectRelease(pvVar16);
              pvVar15 = local_a0;
              if (((ulong)SVar10.unknown & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322f8);
                (*pcVar5)();
              }
              PVar12 = Swift::Unicode::Scalar::get_properties(SVar10);
              bVar6 = Swift::Unicode::Scalar::Properties::get_isCased(PVar12);
              (**(code **)(local_98 + 8))(pvVar15,local_90);
              if (bVar6) goto LAB_100831f8c;
            }
            else {
              IVar8 = Swift::String::UnicodeScalarView::_foreignIndex
                                ((Index)0xf,(UnicodeScalarView)SVar10.unknown);
              if (lVar23 - ((ulong)IVar8.cmsgPointer.unknown >> 0xe) == 0) goto LAB_100831eb0;
LAB_100831e44:
              _swift_bridgeObjectRelease(pvVar16);
            }
            bVar6 = Swift::Character::get__isUppercased(CVar28);
            if (!bVar6) goto LAB_100831f8c;
            bVar6 = Swift::Character::get__isLowercased(CVar28);
            _swift_bridgeObjectRelease(pvVar16);
          } while (bVar6);
          local_88 = (undefined *)0x5f;
          local_80 = 0xe100000000000000;
          FUN_1008322f8();
          Swift::String::_insert
                    (&local_88,IVar26.cmsgPointer.unknown,
                     PTR___type_metadata_for_Swift_String_100eac208,pvVar16);
          pcVar24 = local_78;
          pvVar21 = pvStack_70;
        } while( true );
      }
LAB_100831fdc:
      uVar3 = *(ulong *)(puVar14 + 0x10);
      uVar17 = uVar3 + 1;
      local_68 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar3) {
        FUN_10083547c(1 < *(ulong *)(puVar14 + 0x18),uVar17,1);
      }
      uVar22 = uVar22 + 1;
      *(ulong *)(local_68 + 0x10) = uVar17;
      *(char **)(local_68 + uVar3 * 0x10 + 0x20) = pcVar24;
      *(void **)(local_68 + uVar3 * 0x10 + 0x28) = pvVar21;
      puVar14 = local_68;
    } while (uVar22 != uVar20);
  }
  puVar25 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_b8 = uVar17;
  FUN_10083547c(0,uVar17,0);
  uVar20 = 0;
  local_a8.cmsgPointer.unknown = (UnsafeMutablePointer)(puVar14 + 0x20);
  local_b0 = puVar14;
  do {
    if (*(ulong *)(puVar14 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322e4);
      (*pcVar5)();
    }
    pvVar21 = ((String *)((long)local_a8.cmsgPointer.unknown + uVar20 * 0x10))->bridgeObject;
    local_98 = uVar20;
    local_90 = local_78;
    SVar29 = Swift::String::uppercased
                       (*(String *)((long)local_a8.cmsgPointer.unknown + uVar20 * 0x10));
    _swift_bridgeObjectRetain(pvVar21);
    uVar20 = Swift::String::get_count(SVar29);
    if (uVar20 == 0) {
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
    }
    else {
      local_88 = puVar25;
      FUN_10083547c(0,uVar20 & ((long)uVar20 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar20 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008322e8);
        (*pcVar5)();
      }
      IVar26.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      puVar25 = local_88;
      local_a0 = pvVar21;
      do {
        CVar27 = Swift::String::get_subscript(IVar26,SVar29);
        bVar6 = Swift::Character::get_isLetter(CVar27);
        if ((!bVar6) && (bVar6 = Swift::Character::get_isNumber(CVar27), !bVar6)) {
          _swift_bridgeObjectRelease(CVar27.bridgeObject);
          CVar27.bridgeObject = (void *)0xe100000000000000;
          CVar27.str = (char *)0x5f;
        }
        uVar17 = *(ulong *)(puVar25 + 0x10);
        local_88 = puVar25;
        if (*(ulong *)(puVar25 + 0x18) >> 1 <= uVar17) {
          FUN_10083547c(1 < *(ulong *)(puVar25 + 0x18),uVar17 + 1,1);
        }
        puVar25 = local_88;
        *(ulong *)(local_88 + 0x10) = uVar17 + 1;
        *(Character *)(local_88 + uVar17 * 0x10 + 0x20) = CVar27;
        IVar26 = Swift::String::index(IVar26,SVar29);
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      pvVar21 = local_a0;
    }
    local_88 = puVar25;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    FUN_1007ff838();
    SVar29 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                       ((String)(ZEXT816(0xe000000000000000) << 0x40));
    _swift_bridgeObjectRelease(puVar25);
    _swift_bridgeObjectRelease(pvVar21);
    puVar14 = local_b0;
    local_78 = local_90;
    uVar17 = *(ulong *)(local_90 + 0x10);
    if (*(ulong *)(local_90 + 0x18) >> 1 <= uVar17) {
      FUN_10083547c(1 < *(ulong *)(local_90 + 0x18),uVar17 + 1,1);
    }
    uVar20 = local_98 + 1;
    *(ulong *)(local_78 + 0x10) = uVar17 + 1;
    *(String *)(local_78 + uVar17 * 0x10 + 0x20) = SVar29;
    pcVar24 = local_78;
    puVar25 = PTR___swiftEmptyArrayStorage_100eae0d8;
  } while (uVar20 != local_b8);
LAB_100832254:
  _swift_bridgeObjectRelease(puVar14);
  local_78 = pcVar24;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  FUN_1007ff838();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x5f;
  SVar29 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(pcVar24);
  return SVar29;
}



/* Address: 0x1008322f8 | FUN_1008322f8 */

void FUN_1008322f8(void)

{
  undefined *puVar1;
  
  if (DAT_100fe74c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__Collection_100eac248;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__Collection_100eac248,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fe74c0 = puVar1;
  return;
}



/* Address: 0x100832338 | FUN_100832338 */

undefined1  [16] FUN_100832338(void)

{
  return ZEXT816(0x100f05708);
}



/* Address: 0x100832348 | FUN_100832348 */

undefined8 FUN_100832348(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    FUN_1008350fc();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x18);
      uVar2 = *puVar1;
      FUN_1007fb2a0(uVar2,puVar1[1]);
    }
    _swift_bridgeObjectRelease(param_3);
  }
  return uVar2;
}



/* Address: 0x1008323fc | FUN_1008323fc */

undefined8 FUN_1008323fc(long param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    FUN_100071370();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 0x18);
      uVar2 = *puVar1;
      _swift_bridgeObjectRetain(puVar1[1]);
    }
    _swift_bridgeObjectRelease(param_3);
  }
  return uVar2;
}



/* Address: 0x100832498 | FUN_100832498 */

undefined8 FUN_100832498(long param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  undefined8 uVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  double *pdVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong local_68;
  
  if (param_1 == param_2) {
    uVar8 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      local_68 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        local_68 = ~(-1L << (uVar16 & 0x3f));
      }
      local_68 = local_68 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar5 = 0;
LAB_100832534:
      do {
        if (local_68 == 0) {
          do {
            lVar17 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1008327b8);
              (*pcVar3)();
            }
            if ((long)(uVar16 + 0x3f >> 6) <= lVar17) {
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease_n(param_1,2);
              return 1;
            }
            local_68 = ((ulong *)(param_1 + 0x40))[lVar17];
            lVar5 = lVar5 + 1;
          } while (local_68 == 0);
          uVar12 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
          local_68 = local_68 - 1 & local_68;
        }
        else {
          uVar12 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
          local_68 = local_68 - 1 & local_68;
          lVar17 = lVar5;
        }
        uVar13 = LZCOUNT(uVar12) | lVar17 << 6;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar13 * 0x10);
        lVar5 = *plVar1;
        uVar12 = plVar1[1];
        pdVar14 = (double *)(*(long *)(param_1 + 0x38) + uVar13 * 0x18);
        _Var7.unknown = (undefined *)*pdVar14;
        _Var10.unknown = (undefined *)pdVar14[1];
        cVar11 = *(char *)(pdVar14 + 2);
        _swift_bridgeObjectRetain(uVar12);
        FUN_1004a7398(_Var7.unknown,_Var10.unknown,cVar11);
        uVar13 = uVar12;
        FUN_100071370();
        _swift_bridgeObjectRelease(uVar12);
        if ((uVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
LAB_100832730:
          _swift_bridgeObjectRelease_n(param_1,2);
LAB_100832744:
          FUN_1004dc818(_Var7.unknown,_Var10.unknown,cVar11);
          goto LAB_100832748;
        }
        puVar15 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar5 * 0x18);
        _Var6.unknown = (undefined *)*puVar15;
        bVar2 = *(byte *)(puVar15 + 2);
        lVar5 = lVar17;
        if (1 < bVar2) {
          if (bVar2 == 2) {
            if (cVar11 == '\x02') {
              if ((double)_Var6.unknown != (double)_Var7.unknown) break;
              goto LAB_100832534;
            }
          }
          else if (cVar11 == '\x03') {
            if ((((uint)_Var6.unknown ^ (uint)_Var7.unknown) & 1) != 0) break;
            goto LAB_100832534;
          }
LAB_100832724:
          _swift_bridgeObjectRelease(param_2);
          goto LAB_100832730;
        }
        if (bVar2 != 0) {
          if (cVar11 != '\x01') goto LAB_100832724;
          if (_Var6.unknown != _Var7.unknown) break;
          goto LAB_100832534;
        }
        _Var9.unknown = (undefined *)puVar15[1];
        if (cVar11 != '\0') {
          _swift_bridgeObjectRetain(_Var9.unknown);
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_1004dc818(_Var7.unknown,_Var10.unknown,cVar11);
          cVar11 = '\0';
          _Var7.unknown = _Var6.unknown;
          _Var10.unknown = _Var9.unknown;
          goto LAB_100832744;
        }
        if (_Var6.unknown == _Var7.unknown && _Var9.unknown == _Var10.unknown) {
          FUN_1004dc818(_Var7.unknown,_Var10.unknown,0);
          goto LAB_100832534;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var6,_Var9,(_StringComparisonResult)(__int8)_Var7.unknown);
        FUN_1004dc818(_Var7.unknown,_Var10.unknown,0);
      } while (bVar4);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_100832748:
    uVar8 = 0;
  }
  return uVar8;
}



/* Address: 0x1008327b8 | FUN_1008327b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1008327b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  long lVar1;
  ID self;
  Dictionary<undefined,undefined> DVar2;
  long lVar3;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [12];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_8 + -8);
  lVar1 = -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_74 = param_4;
  local_70 = param_6;
  uStack_68 = param_7;
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::environment(self);
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  (**(code **)(lVar3 + 0x10))(auStack_80 + lVar1,param_5,param_8);
  *(undefined8 *)((long)auStack_90 + lVar1) = param_9;
  FUN_1008328e0(param_1,DVar2.unknown,param_2,param_3,local_74,auStack_80 + lVar1,local_70,uStack_68
                ,param_8);
  (**(code **)(lVar3 + 8))(param_5,param_8);
  return;
}



/* Address: 0x1008328e0 | FUN_1008328e0 */

/* WARNING: Removing unreachable block (ram,0x000100832a38) */

void FUN_1008328e0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  _DictionaryStorage *this;
  undefined *puVar1;
  long lVar2;
  undefined *local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_70 = (undefined1)param_5;
  lVar2 = param_2;
  local_80 = param_3;
  uStack_78 = param_4;
  FUN_100837ca8(param_2,FUN_100832b04,local_90);
  _swift_bridgeObjectRelease(param_2);
  puVar1 = *(undefined **)(lVar2 + 0x10);
  local_90[0] = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar1 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe74c8;
    FUN_1000f7830(&DAT_100fe74c8,&DAT_100c7c4e0);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar1);
    local_90[0] = puVar1;
  }
  _swift_bridgeObjectRetain(lVar2);
  FUN_100836db4();
  _swift_bridgeObjectRelease(lVar2);
  puVar1 = local_90[0];
  param_1[6] = param_9;
  param_1[7] = param_10;
  FUN_10000cbb0(param_1 + 3);
  lVar2 = *(long *)(param_9 + -8);
  (**(code **)(lVar2 + 0x10))();
  FUN_100837f50(param_3,param_4,param_5);
  (**(code **)(lVar2 + 8))(param_6,param_9);
  *param_1 = 0xd00000000000001c;
  param_1[1] = 0x8000000100c7c4d0;
  param_1[2] = puVar1;
  param_1[8] = param_7;
  param_1[9] = param_8;
  return;
}



/* Address: 0x100832a58 | FUN_100832a58 */

void FUN_100832a58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,long param_7,char param_8)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_2;
  uStack_48 = param_3;
  if (param_8 == '\0') {
    uVar3 = param_2;
    FUN_100052458(param_2,param_3,param_6);
    bVar1 = (byte)uVar3;
  }
  else if (param_8 == '\x01') {
    puVar2 = &local_50;
    (*param_6)(puVar2,&local_60);
    bVar1 = (byte)puVar2;
  }
  else {
    bVar1 = param_7 == 0 && param_6 == (code *)0x0;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(byte *)(param_1 + 4) = bVar1 & 1;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100832b04 | FUN_100832b04 */

void FUN_100832b04(void)

{
  FUN_100832a58();
  return;
}



/* Address: 0x100832b10 | FUN_100832b10 */

void FUN_100832b10(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined4 param_5)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  undefined8 in_stack_00000000;
  long in_stack_00000018;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(long *)(unaff_x22 + 0x70) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  lVar3 = *(long *)(in_stack_00000018 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
  (**(code **)(lVar3 + 0x10))();
  plVar2 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100832c10;
  FUN_100832ca4(plVar2,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5);
  return;
}



/* Address: 0x100832c10 | FUN_100832c10 */

void FUN_100832c10(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar6 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar6 + 0x70);
  lVar1 = *(long *)(lVar6 + 0x78);
  uVar4 = *(undefined8 *)(lVar6 + 0x68);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x88));
  (**(code **)(lVar1 + 8))(uVar4,uVar2);
  uVar2 = *(undefined8 *)(lVar6 + 0x80);
  if (unaff_x20 == 0) {
    puVar3 = *(undefined8 **)(lVar6 + 0x60);
    uVar4 = *(undefined8 *)(lVar6 + 0x10);
    puVar3[1] = *(undefined8 *)(lVar6 + 0x18);
    *puVar3 = uVar4;
    uVar7 = *(undefined8 *)(lVar6 + 0x28);
    uVar4 = *(undefined8 *)(lVar6 + 0x20);
    uVar9 = *(undefined8 *)(lVar6 + 0x38);
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    uVar10 = *(undefined8 *)(lVar6 + 0x40);
    uVar12 = *(undefined8 *)(lVar6 + 0x58);
    uVar11 = *(undefined8 *)(lVar6 + 0x50);
    puVar3[7] = *(undefined8 *)(lVar6 + 0x48);
    puVar3[6] = uVar10;
    puVar3[9] = uVar12;
    puVar3[8] = uVar11;
    puVar3[3] = uVar7;
    puVar3[2] = uVar4;
    puVar3[5] = uVar9;
    puVar3[4] = uVar8;
  }
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100832ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x100832ca4 | FUN_100832ca4 */

void FUN_100832ca4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15,long param_16,
                  undefined8 param_17)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  int *piVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(long *)(unaff_x22 + 200) = param_15;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_17;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_13;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_14;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_12;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_11;
  *(undefined1 *)(unaff_x22 + 0x10d) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_7;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_6;
  *(undefined1 *)(unaff_x22 + 0x10c) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  lVar4 = *(long *)(param_15 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  piVar6 = *(int **)(param_16 + 8);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100832db8;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    (*(code *)((long)iVar1 + (long)piVar6))
              (param_2,param_3 & 0xcfffffffffffffff,param_4,param_14,param_16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100832db8 | FUN_100832db8 */

void FUN_100832db8(char *param_1,void *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  bool bVar10;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar11;
  undefined8 *puVar12;
  __DataStorage *p_Var13;
  __DataStorage *p_Var14;
  char *pcVar15;
  UnsafeBufferPointer<__int8> UVar16;
  undefined *puVar17;
  ulong uVar18;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long unaff_x20;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long *unaff_x22;
  long lVar28;
  long lVar29;
  String SVar30;
  String SVar31;
  tuple2_conflict1 tVar32;
  char *local_80;
  void *pvStack_78;
  void *pvVar19;
  
  lVar21 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar29 = *unaff_x22;
  lVar28 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar29 + 0xe8));
  if (unaff_x20 == 0) {
    if ((ulong)param_2 >> 0x3c < 0xf) {
      uVar24 = *(undefined8 *)(lVar29 + 0x88);
      FUN_1001037b4(param_1,param_2);
      _swift_bridgeObjectRelease(uVar24);
      uVar8 = (uint)((ulong)param_2 >> 0x20);
      uVar20 = uVar8 >> 0x1e;
      pvStack_78 = param_2;
      local_80 = param_1;
      if (uVar8 >> 0x1e < 2) {
        if (uVar20 == 0) {
          *(char *)(lVar29 + 0xf0) = (char)param_1;
          *(char *)(lVar29 + 0xf1) = (char)((ulong)param_1 >> 8);
          *(char *)(lVar29 + 0xf2) = (char)((ulong)param_1 >> 0x10);
          *(char *)(lVar29 + 0xf3) = (char)((ulong)param_1 >> 0x18);
          *(char *)(lVar29 + 0xf4) = (char)((ulong)param_1 >> 0x20);
          *(char *)(lVar29 + 0xf5) = (char)((ulong)param_1 >> 0x28);
          *(char *)(lVar29 + 0xf6) = (char)((ulong)param_1 >> 0x30);
          *(char *)(lVar29 + 0xf7) = (char)((ulong)param_1 >> 0x38);
          *(char *)(lVar29 + 0xf8) = (char)param_2;
          *(char *)(lVar29 + 0xf9) = (char)((ulong)param_2 >> 8);
          *(char *)(lVar29 + 0xfa) = (char)((ulong)param_2 >> 0x10);
          *(char *)(lVar29 + 0xfb) = (char)((ulong)param_2 >> 0x18);
          *(char *)(lVar29 + 0xfc) = (char)((ulong)param_2 >> 0x20);
          SVar30.str = (char *)((ulong)param_2 >> 0x30 & 0xff);
          *(char *)(lVar29 + 0xfd) = (char)((ulong)param_2 >> 0x28);
          SVar30.bridgeObject = param_3;
          tVar32 = Swift::String::_fromUTF8Repairing((undefined *)(lVar29 + 0xf0),SVar30);
          pvVar19 = tVar32.result.bridgeObject;
          pcVar11 = tVar32.result.str;
          FUN_10003bf2c(param_1,param_2,tVar32._16_8_);
          goto LAB_100833204;
        }
        lVar23 = (long)(int)param_1;
        pcVar11 = (char *)(((long)param_1 >> 0x20) - lVar23);
        if ((long)param_1 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100833308);
          (*UNRECOVERED_JUMPTABLE)();
        }
        p_Var13 = (__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff);
        _swift_retain();
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),p_Var13);
        if (p_Var13 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var14 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),p_Var13);
          if (SBORROW8(lVar23,(long)p_Var14)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100833314);
            (*UNRECOVERED_JUMPTABLE)();
          }
          UVar16.unknown = p_Var13 + (lVar23 - (long)p_Var14);
          pcVar15 = (char *)Foundation::__DataStorage::get__length
                                      ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),
                                       p_Var14);
          if ((__DataStorage *)UVar16.unknown != (__DataStorage *)0x0) {
            if ((long)pcVar11 <= (long)pcVar15) {
              pcVar15 = pcVar11;
            }
            goto LAB_1008330dc;
          }
        }
LAB_1008330d4:
        UVar16.unknown = (undefined *)0x0;
        pcVar15 = (char *)0x0;
      }
      else {
        if (uVar20 != 2) goto LAB_10083303c;
        lVar23 = *(long *)(param_1 + 0x10);
        lVar4 = *(long *)(param_1 + 0x18);
        _swift_retain(param_1);
        UVar16.unknown = (undefined *)((ulong)param_2 & 0x3fffffffffffffff);
        _swift_retain();
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),
                   (__DataStorage *)UVar16.unknown);
        p_Var13 = (__DataStorage *)0x0;
        if ((__DataStorage *)UVar16.unknown != (__DataStorage *)0x0) {
          p_Var13 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),
                               (__DataStorage *)UVar16.unknown);
          if (SBORROW8(lVar23,(long)p_Var13)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100833310);
            (*UNRECOVERED_JUMPTABLE)();
          }
          UVar16.unknown = UVar16.unknown + (lVar23 - (long)p_Var13);
        }
        pcVar11 = (char *)(lVar4 - lVar23);
        if (SBORROW8(lVar4,lVar23)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10083330c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        pcVar15 = (char *)Foundation::__DataStorage::get__length
                                    ((__DataStorage *)((ulong)param_2 & 0x3fffffffffffffff),p_Var13)
        ;
        if ((__DataStorage *)UVar16.unknown == (__DataStorage *)0x0) goto LAB_1008330d4;
        if ((long)pcVar11 <= (long)pcVar15) {
          pcVar15 = pcVar11;
        }
      }
LAB_1008330dc:
      SVar31.bridgeObject = param_3;
      SVar31.str = pcVar15;
      tVar32 = Swift::String::_fromUTF8Repairing(UVar16,SVar31);
      pvVar19 = tVar32.result.bridgeObject;
      pcVar11 = tVar32.result.str;
      if (pvVar19 == (void *)0x0) {
        *(char **)(lVar29 + 0x70) = param_1;
        *(void **)(lVar29 + 0x78) = param_2;
        FUN_1001037b4(param_1,param_2,tVar32._16_8_);
        puVar17 = &DAT_100fe7560;
        FUN_1000f7830(&DAT_100fe7560,&DAT_100c7c680);
        uVar18 = lVar29 + 0x38;
        _swift_dynamicCast(uVar18,lVar29 + 0x70,PTR___type_metadata_for_Foundation_Data_100ea7300,
                           puVar17,6);
        if ((uVar18 & 1) == 0) {
          *(undefined8 *)(lVar29 + 0x58) = 0;
          *(undefined8 *)(lVar29 + 0x50) = 0;
          *(undefined8 *)(lVar29 + 0x48) = 0;
          *(undefined8 *)(lVar29 + 0x40) = 0;
          *(undefined8 *)(lVar29 + 0x38) = 0;
          FUN_100838698(lVar29 + 0x38);
        }
        else {
          FUN_100076508(lVar29 + 0x38,lVar29 + 0x10);
          FUN_100004640(lVar29 + 0x10,*(undefined8 *)(lVar29 + 0x28));
          bVar10 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
          if (bVar10) {
            FUN_100004640(lVar29 + 0x10,*(undefined8 *)(lVar29 + 0x28));
            Swift::_HasContiguousBytes::_withUnsafeBytes();
            FUN_10003bf2c(param_1,param_2);
            FUN_100004594(lVar29 + 0x10);
            pcVar11 = *(char **)(lVar29 + 0x60);
            pvVar19 = *(void **)(lVar29 + 0x68);
            goto LAB_100833204;
          }
          FUN_100004594(lVar29 + 0x10);
        }
        pcVar11 = param_1;
        pvVar19 = param_2;
        FUN_10083c5f8(param_1,param_2);
      }
      FUN_10003bf2c(param_1,param_2);
    }
    else {
      if (*(char *)(lVar29 + 0x10c) != '\x01') {
        puVar12 = *(undefined8 **)(lVar29 + 0xb8);
        uVar24 = *(undefined8 *)(lVar29 + 0x98);
        uVar26 = *(undefined8 *)(lVar29 + 0xa0);
        uVar25 = *(undefined8 *)(lVar29 + 0x88);
        uVar7 = *(undefined1 *)(lVar29 + 0x10d);
        _swift_bridgeObjectRelease();
        FUN_100838658();
        _swift_allocError(&DAT_100f05a78,puVar12,0,0);
        *puVar12 = uVar25;
        puVar12[1] = 0x2000000000000000;
        _swift_willThrow();
        FUN_100837f50(uVar24,uVar26,uVar7);
        goto LAB_100832e40;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar29 + 0x88));
      pvStack_78 = (void *)0xc000000000000000;
      local_80 = (char *)0x0;
LAB_10083303c:
      *(undefined8 *)(lVar29 + 0x104) = 0;
      *(undefined8 *)(lVar29 + 0xfe) = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = param_3;
      tVar32 = Swift::String::_fromUTF8Repairing
                         ((undefined *)(lVar29 + 0xfe),(String)(auVar9 << 0x40));
      pvVar19 = tVar32.result.bridgeObject;
      pcVar11 = tVar32.result.str;
      FUN_10003bf2c(local_80,pvStack_78,tVar32._16_8_);
    }
LAB_100833204:
    lVar23 = *(long *)(lVar29 + 0xd8);
    uVar2 = *(undefined8 *)(lVar29 + 0xe0);
    uVar24 = *(undefined8 *)(lVar29 + 200);
    uVar3 = *(undefined8 *)(lVar29 + 0xd0);
    uVar26 = *(undefined8 *)(lVar29 + 0xb8);
    lVar4 = *(long *)(lVar29 + 0xc0);
    uVar25 = *(undefined8 *)(lVar29 + 0xa8);
    uVar5 = *(undefined8 *)(lVar29 + 0xb0);
    uVar1 = *(undefined8 *)(lVar29 + 0x98);
    uVar6 = *(undefined8 *)(lVar29 + 0xa0);
    uVar22 = *(undefined8 *)(lVar29 + 0x90);
    uVar27 = *(undefined8 *)(lVar29 + 0x80);
    uVar7 = *(undefined1 *)(lVar29 + 0x10d);
    FUN_1008315e0(pcVar11,pvVar19);
    _swift_bridgeObjectRelease(pvVar19);
    (**(code **)(lVar23 + 0x10))(uVar2,uVar25,uVar24);
    FUN_1008328e0(uVar27,pcVar11,uVar1,uVar6,uVar7,uVar2,uVar5,uVar26,uVar24,uVar3);
    FUN_10003bf18(param_1,param_2);
    FUN_10003bf2c(local_80,pvStack_78);
    (**(code **)(lVar23 + 8))(uVar25,uVar24);
    (**(code **)(*(long *)(lVar4 + -8) + 8))(uVar22);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar28 + 8);
    lVar28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    uVar24 = *(undefined8 *)(lVar29 + 0x98);
    uVar26 = *(undefined8 *)(lVar29 + 0xa0);
    uVar25 = *(undefined8 *)(lVar29 + 0x88);
    uVar7 = *(undefined1 *)(lVar29 + 0x10d);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar29 + 0xb8));
    FUN_100837f50(uVar24,uVar26,uVar7);
    _swift_bridgeObjectRelease(uVar25);
LAB_100832e40:
    uVar24 = *(undefined8 *)(lVar29 + 0xe0);
    lVar23 = *(long *)(lVar29 + 0xc0);
    uVar26 = *(undefined8 *)(lVar29 + 0x90);
    (**(code **)(*(long *)(lVar29 + 0xd8) + 8))
              (*(undefined8 *)(lVar29 + 0xa8),*(undefined8 *)(lVar29 + 200));
    (**(code **)(*(long *)(lVar23 + -8) + 8))(uVar26,lVar23);
    _swift_task_dealloc(uVar24);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar28 + 8);
    lVar28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar28 != lVar21) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000100833300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100833318 | FUN_100833318 */

undefined1  [16] FUN_100833318(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar4);
    FUN_100071370();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar4);
      uVar1 = 0;
      uVar2 = 0;
    }
    else {
      puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 0x18);
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRelease(lVar4);
    }
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Address: 0x1008333b4 | FUN_1008333b4 */

undefined *
FUN_1008333b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  String SVar10;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_78;
  
  local_c0 = &local_100;
  local_100 = param_3;
  uStack_f8 = param_4;
  _swift_bridgeObjectRetain(param_2);
  lVar4 = 0x7fffffffffffffff;
  FUN_1008362e0(0x7fffffffffffffff,0,FUN_1000f64a4,&local_d0,param_1,param_2);
  lVar7 = *(long *)(lVar4 + 0x10);
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(lVar4);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083547c(0,lVar7,0);
    puVar8 = local_78;
    FUN_100831980();
    puVar9 = (undefined8 *)(lVar4 + 0x38);
    do {
      local_90 = puVar9[-1];
      uVar2 = *puVar9;
      uStack_98 = puVar9[-2];
      local_a0 = puVar9[-3];
      uStack_88 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      uVar3 = uStack_e8;
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      local_c0 = local_f0;
      uStack_b8 = uStack_e8;
      FUN_1000f7830(&DAT_100fe7498,&DAT_100c7c980);
      FUN_100134584(&DAT_100fe74a0,&DAT_100fe7498,&DAT_100c7c980,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Collection_100ead3a0);
      (extension__StringProcessing)::Swift::Collection::_trimmingPrefix();
      _swift_bridgeObjectRelease(uVar3);
      uStack_c8 = uStack_f8;
      local_d0 = local_100;
      uStack_b8 = uStack_e8;
      local_c0 = local_f0;
      local_b0 = local_e0;
      uStack_a8 = uStack_d8;
      puVar5 = &DAT_100fe74a8;
      FUN_1000f7830(&DAT_100fe74a8,&DAT_100c7c630);
      puVar6 = &DAT_100fe74b0;
      FUN_100134584(&DAT_100fe74b0,&DAT_100fe74a8,&DAT_100c7c630,
                    PTR_Swift__Swift__ReversedCollection<undefined>_>Swift__Sequence_100ead398);
      SVar10 = Swift::String::_init(&local_d0,puVar5,puVar6);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      local_78 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_10083547c(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar8 = local_78;
      puVar9 = puVar9 + 4;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(String *)(local_78 + uVar1 * 0x10 + 0x20) = SVar10;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    _swift_bridgeObjectRelease(lVar4);
  }
  return puVar8;
}



/* Address: 0x1008335fc | FUN_1008335fc */

undefined1  [16] FUN_1008335fc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x27,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &DAT_e800000000000000;
  SVar2.str = (char *)0x5d7365756c617620;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0x8000000100db1e50;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Address: 0x1008336b0 | thunk_FUN_1008335fc */

void thunk_FUN_1008335fc(void)

{
  FUN_1008335fc();
  return;
}



/* Address: 0x1008336b4 | FUN_1008336b4 */

/* WARNING: Removing unreachable block (ram,0x0001008339c8) */

undefined1  [16] FUN_1008336b4(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *in_x3;
  long unaff_x20;
  undefined8 ****ppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined8 ***local_88;
  undefined8 **local_80;
  undefined8 local_78;
  void *pvStack_70;
  undefined8 local_68;
  String separator;
  
  lVar16 = *(long *)(unaff_x20 + 0x10);
  ppppuVar12 = *(undefined8 *****)(lVar16 + 0x10);
  _swift_bridgeObjectRetain(lVar16);
  pppuVar13 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  ppppuVar7 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar12 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(lVar16);
    ppppuVar7 = ppppuVar12;
    FUN_100835c14(ppppuVar12,0,&DAT_100fe7550,&DAT_100c7c678);
    ppppuVar8 = &local_88;
    FUN_1008377a4(ppppuVar8,ppppuVar7 + 4,ppppuVar12,lVar16);
    FUN_10000c650(local_88,local_80,local_78,pvStack_70,local_68);
    in_x3 = pvStack_70;
    if (ppppuVar8 != ppppuVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10083374c);
      (*pcVar6)();
    }
  }
  local_88 = ppppuVar7;
  FUN_100835c98(&local_88);
  pppuVar4 = local_88;
  pppuVar14 = (undefined8 ***)local_88[2];
  if (pppuVar14 == (undefined8 ***)0x0) {
    _swift_release(local_88);
    pppuVar13 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    pcVar11 = (char *)0x0;
    FUN_10083547c(0,pppuVar14);
    pppuVar18 = (undefined8 ***)0x0;
    ppppuVar7 = (undefined8 ****)(pppuVar4 + 8);
    do {
      if (pppuVar4[2] <= pppuVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1008339c8);
        (*pcVar6)();
      }
      local_88 = ppppuVar7[-4];
      local_80 = ppppuVar7[-3];
      pppuVar17 = ppppuVar7[-2];
      pppuVar15 = ppppuVar7[-1];
      pppuVar3 = *ppppuVar7;
      _swift_bridgeObjectRetain();
      SVar20.bridgeObject = (void *)0xe100000000000000;
      SVar20.str = (char *)0x3d;
      SVar21.bridgeObject = in_x3;
      SVar21.str = pcVar11;
      Swift::String::append(SVar20,SVar21);
      if (((ulong)pppuVar3 & 1) == 0) {
        _swift_bridgeObjectRetain(pppuVar15);
      }
      else {
        pppuVar15 = (undefined8 ***)0xea00000000003e44;
        pppuVar17 = (undefined8 ***)0x455443414445523c;
      }
      SVar19.bridgeObject = pppuVar15;
      SVar19.str = (char *)pppuVar17;
      SVar24.bridgeObject = in_x3;
      SVar24.str = pcVar11;
      Swift::String::append(SVar19,SVar24);
      _swift_bridgeObjectRelease(pppuVar15);
      ppuVar5 = local_80;
      pppuVar17 = local_88;
      uVar1 = *(ulong *)((long)pppuVar13 + 0x10);
      if (*(ulong *)((long)pppuVar13 + 0x18) >> 1 <= uVar1) {
        pcVar11 = &DAT_00000001;
        FUN_10083547c(1 < *(ulong *)((long)pppuVar13 + 0x18),uVar1 + 1);
      }
      pppuVar18 = (undefined8 ***)((long)pppuVar18 + 1);
      *(ulong *)((long)pppuVar13 + 0x10) = uVar1 + 1;
      *(undefined8 ****)((long)pppuVar13 + uVar1 * 0x10 + 0x20) = pppuVar17;
      *(undefined8 ***)((long)pppuVar13 + uVar1 * 0x10 + 0x28) = ppuVar5;
      ppppuVar7 = ppppuVar7 + 5;
    } while (pppuVar14 != pppuVar18);
    _swift_release(pppuVar4);
  }
  pcVar11 = &DAT_100fe6f38;
  local_88 = pppuVar13;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  puVar9 = &DAT_100fe6f40;
  FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x202c;
  SVar20 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _Var10.unknown = SVar20.bridgeObject;
  _swift_bridgeObjectRelease(pppuVar13);
  local_88 = (undefined8 ***)0x0;
  local_80 = (undefined8 **)0xe000000000000000;
  Swift::_StringGuts::grow(0x2b,_Var10);
  _swift_bridgeObjectRelease(local_80);
  local_88 = (undefined8 ***)0xd00000000000001d;
  local_80 = (undefined8 **)0x8000000100db1e50;
  _swift_bridgeObjectRelease(lVar16);
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar25.bridgeObject = puVar9;
  SVar25.str = pcVar11;
  Swift::String::append(SVar21,SVar25);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar22.bridgeObject = (void *)0xe900000000000020;
  SVar22.str = (char *)0x3a7365756c617620;
  SVar26.bridgeObject = puVar9;
  SVar26.str = pcVar11;
  Swift::String::append(SVar22,SVar26);
  SVar27.bridgeObject = puVar9;
  SVar27.str = pcVar11;
  Swift::String::append(SVar20,SVar27);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x5d;
  SVar28.bridgeObject = puVar9;
  SVar28.str = pcVar11;
  Swift::String::append(SVar23,SVar28);
  auVar2._8_8_ = local_80;
  auVar2._0_8_ = local_88;
  return auVar2;
}



/* Address: 0x1008339d4 | thunk_FUN_1008336b4 */

/* WARNING: Removing unreachable block (ram,0x0001008339c8) */

undefined1  [16] thunk_FUN_1008336b4(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 **ppuVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *in_x3;
  undefined8 ****ppppuVar12;
  long unaff_x20;
  undefined8 ***pppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  long lVar16;
  undefined8 ***pppuVar17;
  undefined8 ***pppuVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined8 ***pppuStack_88;
  undefined8 **ppuStack_80;
  undefined8 uStack_78;
  void *pvStack_70;
  undefined8 uStack_68;
  String separator;
  
  lVar16 = *(long *)(unaff_x20 + 0x10);
  ppppuVar12 = *(undefined8 *****)(lVar16 + 0x10);
  _swift_bridgeObjectRetain(lVar16);
  pppuVar13 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  ppppuVar7 = (undefined8 ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppuVar12 != (undefined8 ****)0x0) {
    _swift_bridgeObjectRetain(lVar16);
    ppppuVar7 = ppppuVar12;
    FUN_100835c14(ppppuVar12,0,&DAT_100fe7550,&DAT_100c7c678);
    ppppuVar8 = &pppuStack_88;
    FUN_1008377a4(ppppuVar8,ppppuVar7 + 4,ppppuVar12,lVar16);
    FUN_10000c650(pppuStack_88,ppuStack_80,uStack_78,pvStack_70,uStack_68);
    in_x3 = pvStack_70;
    if (ppppuVar8 != ppppuVar12) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10083374c);
      (*pcVar6)();
    }
  }
  pppuStack_88 = ppppuVar7;
  FUN_100835c98(&pppuStack_88);
  pppuVar4 = pppuStack_88;
  pppuVar14 = (undefined8 ***)pppuStack_88[2];
  if (pppuVar14 == (undefined8 ***)0x0) {
    _swift_release(pppuStack_88);
    pppuVar13 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    pcVar11 = (char *)0x0;
    FUN_10083547c(0,pppuVar14);
    pppuVar18 = (undefined8 ***)0x0;
    ppppuVar7 = (undefined8 ****)(pppuVar4 + 8);
    do {
      if (pppuVar4[2] <= pppuVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1008339c8);
        (*pcVar6)();
      }
      pppuStack_88 = ppppuVar7[-4];
      ppuStack_80 = ppppuVar7[-3];
      pppuVar17 = ppppuVar7[-2];
      pppuVar15 = ppppuVar7[-1];
      pppuVar3 = *ppppuVar7;
      _swift_bridgeObjectRetain();
      SVar20.bridgeObject = (void *)0xe100000000000000;
      SVar20.str = (char *)0x3d;
      SVar21.bridgeObject = in_x3;
      SVar21.str = pcVar11;
      Swift::String::append(SVar20,SVar21);
      if (((ulong)pppuVar3 & 1) == 0) {
        _swift_bridgeObjectRetain(pppuVar15);
      }
      else {
        pppuVar15 = (undefined8 ***)0xea00000000003e44;
        pppuVar17 = (undefined8 ***)0x455443414445523c;
      }
      SVar19.bridgeObject = pppuVar15;
      SVar19.str = (char *)pppuVar17;
      SVar24.bridgeObject = in_x3;
      SVar24.str = pcVar11;
      Swift::String::append(SVar19,SVar24);
      _swift_bridgeObjectRelease(pppuVar15);
      ppuVar5 = ppuStack_80;
      pppuVar17 = pppuStack_88;
      uVar1 = *(ulong *)((long)pppuVar13 + 0x10);
      if (*(ulong *)((long)pppuVar13 + 0x18) >> 1 <= uVar1) {
        pcVar11 = &DAT_00000001;
        FUN_10083547c(1 < *(ulong *)((long)pppuVar13 + 0x18),uVar1 + 1);
      }
      pppuVar18 = (undefined8 ***)((long)pppuVar18 + 1);
      *(ulong *)((long)pppuVar13 + 0x10) = uVar1 + 1;
      *(undefined8 ****)((long)pppuVar13 + uVar1 * 0x10 + 0x20) = pppuVar17;
      *(undefined8 ***)((long)pppuVar13 + uVar1 * 0x10 + 0x28) = ppuVar5;
      ppppuVar7 = ppppuVar7 + 5;
    } while (pppuVar14 != pppuVar18);
    _swift_release(pppuVar4);
  }
  pcVar11 = &DAT_100fe6f38;
  pppuStack_88 = pppuVar13;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  puVar9 = &DAT_100fe6f40;
  FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x202c;
  SVar20 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _Var10.unknown = SVar20.bridgeObject;
  _swift_bridgeObjectRelease(pppuVar13);
  pppuStack_88 = (undefined8 ***)0x0;
  ppuStack_80 = (undefined8 **)0xe000000000000000;
  Swift::_StringGuts::grow(0x2b,_Var10);
  _swift_bridgeObjectRelease(ppuStack_80);
  pppuStack_88 = (undefined8 ***)0xd00000000000001d;
  ppuStack_80 = (undefined8 **)0x8000000100db1e50;
  _swift_bridgeObjectRelease(lVar16);
  SVar21 = Swift::CustomStringConvertible::get_description();
  SVar25.bridgeObject = puVar9;
  SVar25.str = pcVar11;
  Swift::String::append(SVar21,SVar25);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar22.bridgeObject = (void *)0xe900000000000020;
  SVar22.str = (char *)0x3a7365756c617620;
  SVar26.bridgeObject = puVar9;
  SVar26.str = pcVar11;
  Swift::String::append(SVar22,SVar26);
  SVar27.bridgeObject = puVar9;
  SVar27.str = pcVar11;
  Swift::String::append(SVar20,SVar27);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x5d;
  SVar28.bridgeObject = puVar9;
  SVar28.str = pcVar11;
  Swift::String::append(SVar23,SVar28);
  auVar2._8_8_ = ppuStack_80;
  auVar2._0_8_ = pppuStack_88;
  return auVar2;
}



/* Address: 0x1008339d8 | FUN_1008339d8 */

undefined1  [16]
FUN_1008339d8(undefined8 **param_1,undefined8 *param_2,_StringObject param_3,undefined8 **param_4,
             undefined8 param_5,undefined1 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  _StringGuts _Var6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  _StringComparisonResult expecting;
  code *pcVar12;
  undefined8 *puVar13;
  UnsafeBufferPointer<__int8> UVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined8 **ppuVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 uVar21;
  ulong uVar22;
  undefined8 **ppuVar23;
  _StringObject _Var24;
  code *pcVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  String SVar28;
  undefined1 auVar29 [16];
  undefined8 *local_98;
  ulong uStack_90;
  char local_81;
  undefined8 *local_80;
  ulong uStack_78;
  undefined8 **local_70;
  undefined8 *local_68;
  undefined8 *local_58;
  _StringGuts _Var11;
  
  _Var24.unknown = param_3.unknown;
  pcVar25 = (code *)param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_6) {
  case 0:
    _swift_bridgeObjectRetain(param_4);
    goto LAB_100834978;
  case 1:
    ppuVar8 = (undefined8 **)((ulong)param_3.unknown & 0xffffffffffff);
    ppuVar18 = (undefined8 **)((ulong)param_4 >> 0x38 & 0xf);
    ppuVar23 = ppuVar8;
    if (((ulong)param_4 & 0x2000000000000000) != 0) {
      ppuVar23 = ppuVar18;
    }
    if (ppuVar23 == (undefined8 **)0x0) goto LAB_10083486c;
    if (((ulong)param_4 >> 0x3c & 1) == 0) {
      if (((ulong)param_4 >> 0x3d & 1) != 0) {
        local_80 = (undefined8 *)param_3.unknown;
        uStack_78 = (ulong)param_4 & 0xffffffffffffff;
        uVar20 = (uint)param_3.unknown & 0xff;
        if (uVar20 == 0x2b) {
          if (ppuVar18 == (undefined8 **)0x0) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x100834afc);
            (*pcVar25)();
          }
          pcVar12 = (code *)((long)ppuVar18 + -1);
          if (pcVar12 == (code *)0x0) goto LAB_100834858;
          param_3.unknown = (undefined *)0x0;
          pbVar15 = (byte *)((ulong)&local_80 | 1);
          do {
            if (((9 < *pbVar15 - 0x30) ||
                (lVar16 = (long)param_3.unknown * 10,
                SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
               (uVar22 = (ulong)(byte)(*pbVar15 - 0x30),
               param_3.unknown = (undefined *)(lVar16 + uVar22), SCARRY8(lVar16,uVar22)))
            goto LAB_100834858;
            uVar20 = 0;
            pcVar12 = pcVar12 + -1;
            pbVar15 = pbVar15 + 1;
          } while (pcVar12 != (code *)0x0);
        }
        else if (uVar20 == 0x2d) {
          if (ppuVar18 == (undefined8 **)0x0) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x100834af4);
            (*pcVar25)();
          }
          pcVar12 = (code *)((long)ppuVar18 + -1);
          if (pcVar12 == (code *)0x0) {
LAB_100834858:
            param_3.unknown = (undefined *)0x0;
            uVar20 = 1;
          }
          else {
            param_3.unknown = (undefined *)0x0;
            pbVar15 = (byte *)((ulong)&local_80 | 1);
            do {
              if (((9 < *pbVar15 - 0x30) ||
                  (lVar16 = (long)param_3.unknown * 10,
                  SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar22 = (ulong)(byte)(*pbVar15 - 0x30),
                 param_3.unknown = (undefined *)(lVar16 - uVar22), SBORROW8(lVar16,uVar22)))
              goto LAB_100834858;
              uVar20 = 0;
              pcVar12 = pcVar12 + -1;
              pbVar15 = pbVar15 + 1;
            } while (pcVar12 != (code *)0x0);
          }
        }
        else {
          if (ppuVar18 == (undefined8 **)0x0) goto LAB_100834858;
          param_3.unknown = (undefined *)0x0;
          ppuVar23 = &local_80;
          do {
            if (((9 < *(byte *)ppuVar23 - 0x30) ||
                (lVar16 = (long)param_3.unknown * 10,
                SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
               (uVar22 = (ulong)(byte)(*(byte *)ppuVar23 - 0x30),
               param_3.unknown = (undefined *)(lVar16 + uVar22), SCARRY8(lVar16,uVar22)))
            goto LAB_100834858;
            uVar20 = 0;
            ppuVar18 = (undefined8 **)((long)ppuVar18 + -1);
            ppuVar23 = (undefined8 **)((long)ppuVar23 + 1);
          } while (ppuVar18 != (undefined8 **)0x0);
        }
        goto LAB_100834860;
      }
      if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
        ppuVar8 = param_4;
        pcVar25 = (code *)Swift::_StringObject::get_sharedUTF8(param_3);
      }
      else {
        pcVar25 = (code *)(((ulong)param_4 & 0xfffffffffffffff) + 0x20);
      }
      if (*pcVar25 != (code)0x2b) {
        if (*pcVar25 == (code)0x2d) {
          pcVar12 = (code *)((long)ppuVar8 + -1);
          if ((long)ppuVar8 < 1) {
                    /* WARNING: Does not return */
            pcVar25 = (code *)SoftwareBreakpoint(1,0x100834af0);
            (*pcVar25)();
          }
          if (pcVar12 != (code *)0x0) {
            param_3.unknown = (undefined *)0x0;
            ppuVar23 = (undefined8 **)pcVar25;
            do {
              ppuVar23 = (undefined8 **)((long)ppuVar23 + 1);
              if (((9 < (byte)*(code *)ppuVar23 - 0x30) ||
                  (lVar16 = (long)param_3.unknown * 10,
                  SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                 (uVar22 = (ulong)(byte)((byte)*(code *)ppuVar23 - 0x30),
                 param_3.unknown = (undefined *)(lVar16 - uVar22), SBORROW8(lVar16,uVar22)))
              goto LAB_10083486c;
              param_4 = (undefined8 **)0x0;
              pcVar12 = pcVar12 + -1;
            } while (pcVar12 != (code *)0x0);
            goto LAB_100834978;
          }
          goto LAB_10083486c;
        }
        if (ppuVar8 == (undefined8 **)0x0) goto LAB_10083486c;
        param_3.unknown = (undefined *)0x0;
        ppuVar23 = (undefined8 **)pcVar25;
        if ((undefined8 **)pcVar25 != (undefined8 **)0x0) {
          do {
            pcVar25 = (code *)((long)ppuVar23 + 1);
            if (((9 < (byte)*(code *)ppuVar23 - 0x30) ||
                (lVar16 = (long)param_3.unknown * 10,
                SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
               (uVar22 = (ulong)(byte)((byte)*(code *)ppuVar23 - 0x30),
               param_3.unknown = (undefined *)(lVar16 + uVar22), SCARRY8(lVar16,uVar22)))
            goto LAB_10083486c;
            param_4 = (undefined8 **)0x0;
            ppuVar8 = (undefined8 **)((long)ppuVar8 + -1);
            ppuVar23 = (undefined8 **)pcVar25;
          } while (ppuVar8 != (undefined8 **)0x0);
          goto LAB_100834978;
        }
        goto LAB_1008348bc;
      }
      pcVar12 = (code *)((long)ppuVar8 + -1);
      if ((long)ppuVar8 < 1) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x100834af8);
        (*pcVar25)();
      }
      if (pcVar12 != (code *)0x0) {
        param_3.unknown = (undefined *)0x0;
        ppuVar23 = (undefined8 **)pcVar25;
        do {
          ppuVar23 = (undefined8 **)((long)ppuVar23 + 1);
          if (((9 < (byte)*(code *)ppuVar23 - 0x30) ||
              (lVar16 = (long)param_3.unknown * 10,
              SUB168(SEXT816((long)param_3.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
             (uVar22 = (ulong)(byte)((byte)*(code *)ppuVar23 - 0x30),
             param_3.unknown = (undefined *)(lVar16 + uVar22), SCARRY8(lVar16,uVar22)))
          goto LAB_10083486c;
          param_4 = (undefined8 **)0x0;
          pcVar12 = pcVar12 + -1;
        } while (pcVar12 != (code *)0x0);
        goto LAB_100834978;
      }
    }
    else {
      _swift_bridgeObjectRetain(param_4);
      ppuVar23 = param_4;
      FUN_100837280(param_3.unknown,param_4,10);
      uVar20 = (uint)ppuVar23;
      pcVar25 = (code *)param_4;
      _swift_bridgeObjectRelease();
LAB_100834860:
      if ((uVar20 & 0xff) != 1) {
LAB_1008348bc:
        param_4 = (undefined8 **)0x0;
        goto LAB_100834978;
      }
    }
LAB_10083486c:
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,pcVar25,0,0);
    *(undefined8 ***)pcVar25 = param_1;
    *(undefined8 **)((long)pcVar25 + 8) = param_2;
    puVar27 = (undefined8 *)0x1;
    goto LAB_10083489c;
  case 2:
    local_58 = (undefined8 *)0x0;
    local_70 = &local_58;
    if (((ulong)param_4 >> 0x3c & 1) == 0) {
      if (((ulong)param_4 >> 0x3d & 1) == 0) {
        if (((ulong)param_3.unknown >> 0x3c & 1) == 0) goto LAB_1008349b8;
        pcVar25 = (code *)(((ulong)param_4 & 0xfffffffffffffff) + 0x20);
        if (0x20 < (byte)*pcVar25 || (1L << ((ulong)(byte)*pcVar25 & 0x3f) & 0x100003e01U) == 0)
        goto LAB_1008348c8;
      }
      else {
        uStack_90 = (ulong)param_4 & 0xffffffffffffff;
        local_98 = (undefined8 *)param_3.unknown;
        if ((0x20 < ((uint)param_3.unknown & 0xff)) ||
           ((1L << ((ulong)param_3.unknown & 0x3f) & 0x100003e01U) == 0)) {
          pcVar25 = (code *)&local_98;
LAB_1008348c8:
          __swift_stdlib_strtod_clocale(pcVar25,&local_58);
          if (((undefined8 **)pcVar25 != (undefined8 **)0x0) && (*pcVar25 == (code)0x0))
          goto LAB_1008348ec;
        }
      }
    }
    else {
LAB_1008349b8:
      pcVar25 = FUN_10041a320;
      Swift::_StringGuts::__slowWithCString((_StringGuts)0x10041a320);
      if ((char)local_68 == '\x01') {
LAB_1008348ec:
        param_4 = (undefined8 **)0x0;
        param_3.unknown = (undefined *)local_58;
        goto LAB_100834978;
      }
    }
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,pcVar25,0,0);
    *(undefined8 ***)pcVar25 = param_1;
    *(undefined8 **)((long)pcVar25 + 8) = param_2;
    puVar27 = (undefined8 *)0x2;
LAB_10083489c:
    *(undefined8 **)((long)pcVar25 + 0x18) = (undefined8 *)0x0;
    *(undefined8 **)((long)pcVar25 + 0x10) = puVar27;
    *(code *)((long)pcVar25 + 0x20) = (code)0x1;
    _swift_willThrow();
LAB_1008348b4:
    _swift_bridgeObjectRetain(param_2);
    goto LAB_100834978;
  case 3:
    FUN_100837f70(param_3.unknown,param_4);
    if (((uint)_Var24.unknown & 0xff) != 2) {
      param_4 = (undefined8 **)0x0;
      param_3.unknown = _Var24.unknown & 1;
      goto LAB_100834978;
    }
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,_Var24.unknown,0,0);
    *(undefined8 ***)_Var24.unknown = param_1;
    *(undefined8 **)((long)_Var24.unknown + 8) = param_2;
    uVar26 = 3;
    goto LAB_10083461c;
  case 4:
    uVar26 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar16 = *(long *)(unaff_x20 + 0x38);
    FUN_100004640(unaff_x20 + 0x18,uVar26);
    (**(code **)(lVar16 + 8))(param_3.unknown,param_4,uVar26,lVar16);
    if ((undefined8 *)_Var24.unknown != (undefined8 *)0x0) {
      param_4 = (undefined8 **)0x0;
      param_3.unknown = _Var24.unknown;
      goto LAB_100834978;
    }
    FUN_10080a3bc();
    _swift_allocError(&DAT_100f05368,_Var24.unknown,0,0);
    *(undefined8 ***)_Var24.unknown = param_1;
    *(undefined8 **)((long)_Var24.unknown + 8) = param_2;
    uVar26 = 4;
LAB_10083461c:
    *(undefined8 *)((long)_Var24.unknown + 0x18) = 0;
    *(undefined8 *)((long)_Var24.unknown + 0x10) = uVar26;
    *(undefined1 *)((long)_Var24.unknown + 0x20) = 1;
    _swift_willThrow();
    goto LAB_1008348b4;
  case 5:
    FUN_1008333b4(param_3.unknown,param_4,*(undefined8 *)(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
    param_4 = (undefined8 **)0x0;
    goto LAB_100834978;
  case 6:
    FUN_1008333b4(param_3.unknown,param_4,*(undefined8 *)(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
    ppuVar23 = *(undefined8 ***)((long)param_3.unknown + 0x10);
    if (ppuVar23 == (undefined8 **)0x0) {
      _swift_bridgeObjectRelease(param_3.unknown);
      puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_98 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100835570(0,ppuVar23,0);
      param_4 = (undefined8 **)0x0;
      do {
        puVar27 = local_98;
        if (*(undefined8 ***)((long)param_3.unknown + 0x10) <= param_4) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x10083490c);
          (*pcVar25)();
        }
        _Var24.unknown = *(undefined **)((long)param_3.unknown + ((long)param_4 * 2 + 4) * 8);
        puVar5 = (undefined8 *)
                 ((undefined8 *)((long)param_3.unknown + ((long)param_4 * 2 + 4) * 8))[1];
        puVar9 = (undefined8 *)((ulong)_Var24.unknown & 0xffffffffffff);
        puVar13 = (undefined8 *)((ulong)puVar5 >> 0x38 & 0xf);
        puVar10 = puVar9;
        if (((ulong)puVar5 & 0x2000000000000000) != 0) {
          puVar10 = puVar13;
        }
        puVar7 = puVar5;
        if (puVar10 == (undefined8 *)0x0) {
          _swift_bridgeObjectRetain();
LAB_100834914:
          FUN_10080a3bc();
          _swift_allocError(&DAT_100f05368,puVar7,0,0);
          *puVar7 = param_1;
          puVar7[1] = param_2;
          puVar7[3] = 0;
          puVar7[2] = 6;
          *(undefined1 *)(puVar7 + 4) = 1;
          _swift_willThrow();
          _swift_bridgeObjectRetain(param_2);
          _swift_release(puVar27);
          _swift_bridgeObjectRelease(puVar5);
LAB_100834974:
          _swift_bridgeObjectRelease(param_3.unknown);
          param_3.unknown = (undefined *)puVar27;
          goto LAB_100834978;
        }
        if (((ulong)puVar5 >> 0x3c & 1) == 0) {
          if (((ulong)puVar5 >> 0x3d & 1) == 0) {
            if (((ulong)_Var24.unknown >> 0x3c & 1) == 0) {
              puVar9 = puVar5;
              UVar14 = Swift::_StringObject::get_sharedUTF8(_Var24);
            }
            else {
              UVar14.unknown = (undefined *)(((ulong)puVar5 & 0xfffffffffffffff) + 0x20);
            }
            if (*UVar14.unknown == 0x2b) {
              if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1008349ac);
                (*pcVar25)();
              }
              lVar16 = (long)puVar9 + -1;
              if (lVar16 == 0) goto LAB_100834188;
              _Var24.unknown = (undefined *)0x0;
              do {
                UVar14.unknown = UVar14.unknown + 1;
                if (((9 < (byte)*UVar14.unknown - 0x30) ||
                    (lVar17 = (long)_Var24.unknown * 10,
                    SUB168(SEXT816((long)_Var24.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar22 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                   _Var24.unknown = (undefined *)(lVar17 + uVar22), SCARRY8(lVar17,uVar22)))
                goto LAB_100834188;
                uVar20 = 0;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            else if (*UVar14.unknown == 0x2d) {
              if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1008349b0);
                (*pcVar25)();
              }
              lVar16 = (long)puVar9 + -1;
              if (lVar16 == 0) {
LAB_100834188:
                _Var24.unknown = (undefined *)0x0;
                uVar20 = 1;
              }
              else {
                _Var24.unknown = (undefined *)0x0;
                do {
                  UVar14.unknown = UVar14.unknown + 1;
                  if (((9 < (byte)*UVar14.unknown - 0x30) ||
                      (lVar17 = (long)_Var24.unknown * 10,
                      SUB168(SEXT816((long)_Var24.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                     (uVar22 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                     _Var24.unknown = (undefined *)(lVar17 - uVar22), SBORROW8(lVar17,uVar22)))
                  goto LAB_100834188;
                  uVar20 = 0;
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
              }
            }
            else {
              if (puVar9 == (undefined8 *)0x0) goto LAB_100834188;
              _Var24.unknown = (undefined *)0x0;
              if (UVar14.unknown == (byte *)0x0) {
                uVar20 = 0;
              }
              else {
                do {
                  if (((9 < (byte)*UVar14.unknown - 0x30) ||
                      (lVar16 = (long)_Var24.unknown * 10,
                      SUB168(SEXT816((long)_Var24.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                     (uVar22 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                     _Var24.unknown = (undefined *)(lVar16 + uVar22), SCARRY8(lVar16,uVar22)))
                  goto LAB_100834188;
                  uVar20 = 0;
                  puVar9 = (undefined8 *)((long)puVar9 + -1);
                  UVar14.unknown = UVar14.unknown + 1;
                } while (puVar9 != (undefined8 *)0x0);
              }
            }
          }
          else {
            local_80 = (undefined8 *)_Var24.unknown;
            uStack_78 = (ulong)puVar5 & 0xffffffffffffff;
            uVar20 = (uint)_Var24.unknown & 0xff;
            if (uVar20 == 0x2b) {
              if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1008349b8);
                (*pcVar25)();
              }
              lVar16 = (long)puVar13 + -1;
              if (lVar16 == 0) goto LAB_100834188;
              _Var24.unknown = (undefined *)0x0;
              pbVar15 = (byte *)((ulong)&local_80 | 1);
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)_Var24.unknown * 10,
                    SUB168(SEXT816((long)_Var24.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar22 = (ulong)(byte)(*pbVar15 - 0x30),
                   _Var24.unknown = (undefined *)(lVar17 + uVar22), SCARRY8(lVar17,uVar22)))
                goto LAB_100834188;
                uVar20 = 0;
                lVar16 = lVar16 + -1;
                pbVar15 = pbVar15 + 1;
              } while (lVar16 != 0);
            }
            else if (uVar20 == 0x2d) {
              if (puVar13 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1008349b4);
                (*pcVar25)();
              }
              lVar16 = (long)puVar13 + -1;
              if (lVar16 == 0) goto LAB_100834188;
              _Var24.unknown = (undefined *)0x0;
              pbVar15 = (byte *)((ulong)&local_80 | 1);
              do {
                if (((9 < *pbVar15 - 0x30) ||
                    (lVar17 = (long)_Var24.unknown * 10,
                    SUB168(SEXT816((long)_Var24.unknown) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
                   (uVar22 = (ulong)(byte)(*pbVar15 - 0x30),
                   _Var24.unknown = (undefined *)(lVar17 - uVar22), SBORROW8(lVar17,uVar22)))
                goto LAB_100834188;
                uVar20 = 0;
                lVar16 = lVar16 + -1;
                pbVar15 = pbVar15 + 1;
              } while (lVar16 != 0);
            }
            else {
              if (puVar13 == (undefined8 *)0x0) goto LAB_100834188;
              _Var24.unknown = (undefined *)0x0;
              ppuVar8 = &local_80;
              do {
                if (((9 < *(byte *)ppuVar8 - 0x30) ||
                    (lVar16 = (long)_Var24.unknown * 10,
                    SUB168(SEXT816((long)_Var24.unknown) * SEXT816(10),8) != lVar16 >> 0x3f)) ||
                   (uVar22 = (ulong)(byte)(*(byte *)ppuVar8 - 0x30),
                   _Var24.unknown = (undefined *)(lVar16 + uVar22), SCARRY8(lVar16,uVar22)))
                goto LAB_100834188;
                uVar20 = 0;
                puVar13 = (undefined8 *)((long)puVar13 + -1);
                ppuVar8 = (undefined8 **)((long)ppuVar8 + 1);
              } while (puVar13 != (undefined8 *)0x0);
            }
          }
          _swift_bridgeObjectRetain();
        }
        else {
          _swift_bridgeObjectRetain_n(puVar5,2);
          puVar10 = puVar5;
          FUN_100837280(_Var24.unknown,puVar5,10);
          uVar20 = (uint)puVar10;
          _swift_bridgeObjectRelease();
        }
        if ((uVar20 & 0xff) == 1) goto LAB_100834914;
        _swift_bridgeObjectRelease(puVar5);
        local_98 = puVar27;
        uVar22 = puVar27[2];
        if ((ulong)puVar27[3] >> 1 <= uVar22) {
          FUN_100835570(1 < (ulong)puVar27[3],uVar22 + 1,1);
        }
        param_4 = (undefined8 **)((long)param_4 + 1);
        local_98[2] = uVar22 + 1;
        local_98[uVar22 + 4] = _Var24.unknown;
        puVar10 = local_98;
      } while (param_4 != ppuVar23);
LAB_1008346ec:
      _swift_bridgeObjectRelease(param_3.unknown);
    }
    break;
  case 7:
    FUN_1008333b4(param_3.unknown,param_4,*(undefined8 *)(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
    ppuVar23 = *(undefined8 ***)((long)param_3.unknown + 0x10);
    if (ppuVar23 != (undefined8 **)0x0) {
      local_58 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100835554(0,ppuVar23,0);
      param_4 = (undefined8 **)0x0;
      puVar5 = (undefined8 *)((long)param_3.unknown + 0x28);
      do {
        puVar27 = local_58;
        if (*(undefined8 ***)((long)param_3.unknown + 0x10) <= param_4) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1008349a8);
          (*pcVar25)();
        }
        puVar10 = (undefined8 *)puVar5[-1];
        ppuVar8 = (undefined8 **)*puVar5;
        local_68 = (undefined8 *)0x0;
        local_70 = &local_68;
        if (((ulong)ppuVar8 >> 0x3c & 1) == 0) {
          pcVar25 = (code *)ppuVar8;
          if (((ulong)ppuVar8 >> 0x3d & 1) == 0) {
            if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_100833d98;
            _swift_bridgeObjectRetain();
            ppuVar18 = (undefined8 **)(((ulong)ppuVar8 & 0xfffffffffffffff) + 0x20);
            if (0x20 < (byte)*(code *)ppuVar18 ||
                (1L << ((ulong)(byte)*(code *)ppuVar18 & 0x3f) & 0x100003e01U) == 0)
            goto LAB_100833d48;
          }
          else {
            uStack_90 = (ulong)ppuVar8 & 0xffffffffffffff;
            local_98 = puVar10;
            _swift_bridgeObjectRetain();
            if (0x20 < ((uint)puVar10 & 0xff) || (1L << ((ulong)puVar10 & 0x3f) & 0x100003e01U) == 0
               ) {
              ppuVar18 = &local_98;
LAB_100833d48:
              __swift_stdlib_strtod_clocale(ppuVar18,&local_68);
              pcVar25 = (code *)ppuVar18;
              if ((ppuVar18 != (undefined8 **)0x0) && (*(code *)ppuVar18 == (code)0x0))
              goto LAB_100833d58;
            }
          }
LAB_10083449c:
          FUN_10080a3bc();
          _swift_allocError(&DAT_100f05368,pcVar25,0,0);
          *(undefined8 ***)pcVar25 = param_1;
          *(undefined8 **)((long)pcVar25 + 8) = param_2;
          *(undefined8 **)((long)pcVar25 + 0x18) = (undefined8 *)0x0;
          *(undefined8 **)((long)pcVar25 + 0x10) = (undefined8 *)0x7;
          *(code *)((long)pcVar25 + 0x20) = (code)0x1;
          _swift_willThrow();
          _swift_bridgeObjectRetain(param_2);
          _swift_release(puVar27);
          _swift_bridgeObjectRelease(ppuVar8);
          goto LAB_100834974;
        }
LAB_100833d98:
        _swift_bridgeObjectRetain(ppuVar8);
        pcVar25 = FUN_10041821c;
        Swift::_StringGuts::__slowWithCString((_StringGuts)0x10041821c);
        if (local_81 != '\x01') goto LAB_10083449c;
LAB_100833d58:
        _swift_bridgeObjectRelease(ppuVar8);
        puVar10 = local_68;
        uVar22 = puVar27[2];
        local_58 = puVar27;
        if ((ulong)puVar27[3] >> 1 <= uVar22) {
          FUN_100835554(1 < (ulong)puVar27[3],uVar22 + 1,1);
        }
        param_4 = (undefined8 **)((long)param_4 + 1);
        local_58[2] = uVar22 + 1;
        local_58[uVar22 + 4] = puVar10;
        puVar5 = puVar5 + 2;
        puVar10 = local_58;
      } while (ppuVar23 != param_4);
      goto LAB_1008346ec;
    }
    goto LAB_100834644;
  case 8:
    FUN_1008333b4(param_3.unknown,param_4,*(undefined8 *)(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
    uVar22 = *(ulong *)((long)param_3.unknown + 0x10);
    if (uVar22 != 0) {
      local_80 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100835538(0,uVar22,0);
      uVar19 = 0;
      puVar5 = (undefined8 *)((long)param_3.unknown + 0x28);
LAB_1008342a4:
      puVar27 = local_80;
      if (*(ulong *)((long)param_3.unknown + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x100834904);
        (*pcVar25)();
      }
      puVar3 = (undefined *)*puVar5;
      SVar28.bridgeObject = puVar3;
      SVar28.str = (char *)puVar5[-1];
      SVar28 = Swift::String::lowercased(SVar28);
      _Var11.unknown = SVar28.bridgeObject;
      _Var6.unknown = SVar28.str;
      if (_Var6.unknown == (undefined *)0x736579 &&
          _Var11.unknown == (undefined *)0xe300000000000000) {
LAB_100834328:
        uVar21 = 1;
      }
      else {
        expecting.value = SVar28.str._0_1_;
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x736579,(_StringGuts)0xe300000000000000,expecting);
        if (((bVar4) ||
            (_Var6.unknown == (undefined *)0x31 && _Var11.unknown == (undefined *)0xe100000000000000
            )) || (bVar4 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)0x31,(_StringGuts)0xe100000000000000,expecting),
                  bVar4)) goto LAB_100834328;
        if ((_Var6.unknown != (undefined *)0x6f6e) || (_Var11.unknown != &SUB_e200000000000000)) {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6f6e,(_StringGuts)0xe200000000000000,expecting);
          uVar21 = 0;
          if ((bVar4) ||
             (_Var6.unknown == &DAT_00000030 && _Var11.unknown == (undefined *)0xe100000000000000))
          goto LAB_10083432c;
          bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x30,(_StringGuts)0xe100000000000000,expecting);
          if (bVar4) goto LAB_100834384;
          if (((_Var6.unknown == (undefined *)0x65757274) &&
              (_Var11.unknown == &DAT_e400000000000000)) ||
             (bVar4 = Swift::_stringCompareWithSmolCheck(_Var6,_Var11,(_StringComparisonResult)0x74)
             , bVar4)) goto LAB_100834328;
          if ((_Var6.unknown != (undefined *)0x65736c6166) ||
             (_Var11.unknown != &DAT_e500000000000000)) {
            bVar4 = Swift::_stringCompareWithSmolCheck(_Var6,_Var11,(_StringComparisonResult)0x66);
            _swift_bridgeObjectRetain(puVar3);
            _swift_bridgeObjectRelease();
            if (bVar4) {
              uVar21 = 0;
              _Var11.unknown = puVar3;
              goto LAB_10083432c;
            }
            FUN_10080a3bc();
            param_4 = (undefined8 **)&DAT_100f05368;
            _swift_allocError(&DAT_100f05368,_Var11.unknown,0,0);
            *(undefined8 ***)_Var11.unknown = param_1;
            *(undefined8 **)((long)_Var11.unknown + 8) = param_2;
            *(undefined8 *)((long)_Var11.unknown + 0x18) = 0;
            *(undefined8 *)((long)_Var11.unknown + 0x10) = 8;
            *(undefined1 *)((long)_Var11.unknown + 0x20) = 1;
            _swift_willThrow();
            _swift_bridgeObjectRetain(param_2);
            _swift_release(puVar27);
            _swift_bridgeObjectRelease(puVar3);
            goto LAB_100834974;
          }
        }
LAB_100834384:
        uVar21 = 0;
      }
LAB_10083432c:
      _swift_bridgeObjectRelease(_Var11.unknown);
      uVar1 = puVar27[2];
      local_80 = puVar27;
      if ((ulong)puVar27[3] >> 1 <= uVar1) {
        FUN_100835538(1 < (ulong)puVar27[3],uVar1 + 1,1);
      }
      uVar19 = uVar19 + 1;
      local_80[2] = uVar1 + 1;
      *(undefined1 *)((long)local_80 + uVar1 + 0x20) = uVar21;
      puVar5 = puVar5 + 2;
      puVar10 = local_80;
      if (uVar22 == uVar19) goto LAB_1008346ec;
      goto LAB_1008342a4;
    }
LAB_100834644:
    _swift_bridgeObjectRelease();
    puVar10 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    break;
  case 9:
    FUN_1008333b4(param_3.unknown,param_4,*(undefined8 *)(unaff_x20 + 0x40),
                  *(undefined8 *)(unaff_x20 + 0x48));
    uVar22 = *(ulong *)((long)param_3.unknown + 0x10);
    if (uVar22 == 0) goto LAB_100834644;
    local_80 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10083551c(0,uVar22,0);
    uVar19 = 0;
    puVar27 = (undefined8 *)((long)param_3.unknown + 0x28);
    do {
      puVar10 = local_80;
      if (*(ulong *)((long)param_3.unknown + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x100834908);
        (*pcVar25)();
      }
      puVar5 = (undefined8 *)puVar27[-1];
      uVar2 = *puVar27;
      uVar26 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar16 = *(long *)(unaff_x20 + 0x38);
      FUN_100004640(unaff_x20 + 0x18,uVar26);
      pcVar25 = *(code **)(lVar16 + 8);
      _swift_bridgeObjectRetain(uVar2);
      (*pcVar25)(puVar5,uVar2,uVar26,lVar16);
      if (puVar5 == (undefined8 *)0x0) {
        FUN_10080a3bc();
        param_4 = (undefined8 **)&DAT_100f05368;
        _swift_allocError(&DAT_100f05368,puVar5,0,0);
        *puVar5 = param_1;
        puVar5[1] = param_2;
        puVar5[3] = 0;
        puVar5[2] = 9;
        *(undefined1 *)(puVar5 + 4) = 1;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_2);
        _swift_release(puVar10);
        _swift_bridgeObjectRelease(uVar2);
        puVar27 = (undefined8 *)param_3.unknown;
        goto LAB_100834974;
      }
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = puVar10[2];
      local_80 = puVar10;
      if ((ulong)puVar10[3] >> 1 <= uVar1) {
        FUN_10083551c(1 < (ulong)puVar10[3],uVar1 + 1,1);
      }
      puVar10 = local_80;
      uVar19 = uVar19 + 1;
      local_80[2] = uVar1 + 1;
      local_80[uVar1 + 4] = puVar5;
      puVar27 = puVar27 + 2;
    } while (uVar22 != uVar19);
    _swift_bridgeObjectRelease(param_3.unknown);
  }
  param_4 = (undefined8 **)0x0;
  param_3.unknown = (undefined *)puVar10;
LAB_100834978:
  auVar29._8_8_ = param_4;
  auVar29._0_8_ = param_3.unknown;
  return auVar29;
}



/* Address: 0x100834b24 | FUN_100834b24 */

void FUN_100834b24(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  
  FUN_1008319dc();
  uVar3 = param_2;
  lVar1 = param_3;
  FUN_1008323fc();
  uVar2 = (ushort)uVar3;
  if (lVar1 == 0) {
    uVar3 = 0;
    lVar4 = 0;
    uVar2 = 0x200;
  }
  else {
    uVar3 = param_2;
    lVar4 = param_3;
    FUN_1008339d8();
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(param_3);
      _swift_bridgeObjectRelease(lVar1);
      return;
    }
    _swift_bridgeObjectRelease(lVar1);
    uVar2 = uVar2 & 0x1ff;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar3;
  param_1[3] = lVar4;
  *(ushort *)(param_1 + 4) = uVar2;
  return;
}



/* Address: 0x100834bf4 | FUN_100834bf4 */

void FUN_100834bf4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  FUN_100838130(&local_48,param_2,param_4);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    *(undefined2 *)(param_1 + 4) = local_28;
  }
  return;
}



/* Address: 0x100834c3c | FUN_100834c3c */

void FUN_100834c3c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
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
  FUN_100838250(plVar1,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,param_6);
  return;
}



/* Address: 0x100834cd8 | FUN_100834cd8 */

void FUN_100834cd8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(lVar2 + 0x30);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000100834d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100834d34 | FUN_100834d34 */

void FUN_100834d34(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100803754(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8,&DAT_100f057e8,param_9);
  return;
}



/* Address: 0x100834e0c | FUN_100834e0c */

void FUN_100834e0c(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[3] = &DAT_100f05868;
  param_1[4] = &PTR_PTR_100f05908;
  puVar1 = &DAT_100f05730;
  _swift_allocObject(&DAT_100f05730,0x60,7);
  *param_1 = puVar1;
  FUN_1008383bc();
  return;
}



/* Address: 0x100834e5c | FUN_100834e5c */

void FUN_100834e5c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100803b8c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,&DAT_100f057e8,
                param_6,&PTR_PTR_100f05748);
  return;
}



/* Address: 0x100834f08 | FUN_100834f08 */

void FUN_100834f08(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100834cd8;
  FUN_100838250(plVar1,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,param_6);
  return;
}



/* Address: 0x100834fa4 | FUN_100834fa4 */

void FUN_100834fa4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100834d34(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x100835064 | FUN_100835064 */

void FUN_100835064(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100834e5c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6);
  return;
}



/* Address: 0x1008350fc | FUN_1008350fc */

void FUN_1008350fc(long param_1,undefined *param_2)

{
  char *pcVar1;
  void *pvVar2;
  Hasher HVar3;
  __int64 _Var4;
  long unaff_x20;
  __uint64 _Var5;
  undefined8 *puVar6;
  String SVar7;
  undefined1 auStack_98 [72];
  
  HVar3.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  _Var5 = *(__uint64 *)(param_1 + 0x10);
  Swift::Hasher::_combine(_Var5,HVar3);
  if (_Var5 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x28);
    do {
      pcVar1 = (char *)puVar6[-1];
      pvVar2 = (void *)*puVar6;
      _swift_bridgeObjectRetain(pvVar2);
      SVar7.bridgeObject = pvVar2;
      SVar7.str = pcVar1;
      Swift::String::hash((Hasher)auStack_98,SVar7);
      _swift_bridgeObjectRelease(pvVar2);
      puVar6 = puVar6 + 2;
      _Var5 = _Var5 - 1;
    } while (_Var5 != 0);
  }
  HVar3.unknown = auStack_98;
  FUN_10080009c(HVar3.unknown,param_2);
  _Var4 = Swift::Hasher::_finalize(HVar3);
  FUN_100835218(param_1,param_2,_Var4);
  return;
}



/* Address: 0x1008351b4 | FUN_1008351b4 */

void FUN_1008351b4(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  Foundation::UUID::typeMetadataAccessor();
  FUN_100171ed4(&DAT_100fe7510,PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_10083535c(param_1,_Var1);
  return;
}



/* Address: 0x100835218 | FUN_100835218 */

undefined1  [16] FUN_100835218(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0x10);
    do {
      plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      lVar8 = *plVar1;
      if (*(long *)(lVar8 + 0x10) == lVar6) {
        uVar9 = plVar1[1];
        if ((lVar6 != 0) && (lVar8 != param_1)) {
          puVar10 = (undefined8 *)(lVar8 + 0x28);
          puVar7 = (undefined8 *)(param_1 + 0x28);
          lVar11 = lVar6;
          do {
            if (((undefined *)puVar10[-1] != (undefined *)puVar7[-1] ||
                 (undefined *)*puVar10 != (undefined *)*puVar7) &&
               (bVar2 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)puVar10[-1],(undefined *)*puVar10,
                                   (_StringComparisonResult)(__int8)(undefined *)puVar7[-1]), !bVar2
               )) goto LAB_1008352a4;
            puVar7 = puVar7 + 2;
            puVar10 = puVar10 + 2;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        _swift_bridgeObjectRetain(lVar8);
        uVar3 = uVar9;
        _swift_bridgeObjectRetain();
        FUN_100832498();
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(lVar8);
        if ((uVar3 & 1) != 0) {
          uVar4 = 1;
          goto LAB_100835330;
        }
      }
LAB_1008352a4:
      param_3 = param_3 + 1 & ~uVar5;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar4 = 0;
LAB_100835330:
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = param_3;
  return auVar12;
}



/* Address: 0x10083535c | FUN_10083535c */

undefined1  [16] FUN_10083535c(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  UUID UVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar8 = 0;
  }
  else {
    lVar7 = *(long *)(lVar9 + 0x48);
    pcVar5 = *(code **)(lVar9 + 0x10);
    do {
      (*pcVar5)(puVar6,*(long *)(unaff_x20 + 0x30) + lVar7 * param_2,UVar2.unknown);
      puVar3 = &DAT_100fe7518;
      FUN_100171ed4(&DAT_100fe7518,PTR_Foundation__Foundation__UUID_>Swift__Equatable_100ea7520);
      bVar1 = Swift::Equatable::___infix(puVar6,local_68,UVar2.unknown,puVar3);
      uVar8 = (ulong)bVar1;
      (**(code **)(lVar9 + 8))(puVar6,UVar2.unknown);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = param_2;
  return auVar10;
}



/* Address: 0x10083547c | FUN_10083547c */

void FUN_10083547c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008367e0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008354a0 | FUN_1008354a0 */

void FUN_1008354a0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100836900();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008354c4 | FUN_1008354c4 */

void FUN_1008354c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008355c8();
  *unaff_x20 = param_1;
  return;
}


