/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002e6dc4 | FUN_1002e6dc4 */

void FUN_1002e6dc4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  lVar11 = *(long *)(*(long *)(unaff_x22 + 0x50) + 0x10);
  *(long *)(unaff_x22 + 0x80) = lVar11;
  if (lVar11 != 0) {
    lVar17 = 0;
    uVar18 = 0;
    lVar11 = 0x20;
    uVar16 = 100;
    do {
      bVar7 = SCARRY8(uVar18,100);
      uVar1 = uVar18 + 100;
      *(ulong *)(unaff_x22 + 0x88) = uVar1;
      *(bool *)(unaff_x22 + 0xc9) = bVar7;
      if (0x7fffffffffffff9b < uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e7030);
        (*pcVar6)();
      }
      uVar12 = *(ulong *)(unaff_x22 + 0x80);
      uVar3 = uVar12;
      if ((long)uVar1 <= (long)uVar12) {
        uVar3 = uVar1;
      }
      if ((long)uVar3 < (long)uVar18) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e7034);
        (*pcVar6)();
      }
      uVar2 = uVar12;
      if ((long)uVar16 <= (long)uVar12) {
        uVar2 = uVar16;
      }
      uVar2 = uVar2 + lVar17;
      if (uVar2 == uVar12) {
        puVar14 = *(undefined **)(unaff_x22 + 0x50);
        _swift_bridgeObjectRetain(puVar14);
      }
      else {
        puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (uVar18 != uVar3) {
          lVar15 = *(long *)(unaff_x22 + 0x50);
          if ((long)uVar2 < 1) {
            _swift_bridgeObjectRetain(lVar15);
            puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            puVar14 = &DAT_100fbd038;
            FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
            _swift_allocObject();
            _swift_bridgeObjectRetain(lVar15);
            puVar9 = puVar14;
            _malloc_size();
            puVar10 = puVar9 + -0x11;
            if (0x1f < (long)puVar9) {
              puVar10 = puVar9 + -0x20;
            }
            *(ulong *)(puVar14 + 0x10) = uVar2;
            *(long *)(puVar14 + 0x18) = ((long)puVar10 >> 4) << 1;
            lVar15 = *(long *)(unaff_x22 + 0x50);
          }
          _swift_arrayInitWithCopy
                    (puVar14 + 0x20,lVar15 + lVar11,uVar2,
                     PTR___type_metadata_for_Swift_String_100eac208);
          _swift_bridgeObjectRelease(lVar15);
        }
      }
      *(undefined **)(unaff_x22 + 0x90) = puVar14;
      plVar8 = (long *)(*(long *)(unaff_x22 + 0x58) + 0x70);
      FUN_100004640(plVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x88));
      if (*(long *)(puVar14 + 0x10) != 0) {
        lVar11 = *plVar8;
        uVar13 = *(undefined8 *)(lVar11 + 0x18);
        *(undefined8 *)(unaff_x22 + 0x98) = uVar13;
        puVar10 = &DAT_100ec8b28;
        _swift_allocObject(&DAT_100ec8b28,0x18,7);
        _swift_weakInit(puVar10 + 0x10,lVar11);
        puVar9 = &DAT_100ec8b50;
        _swift_allocObject(&DAT_100ec8b50,0x20,7);
        *(undefined **)(unaff_x22 + 0xa0) = puVar9;
        *(undefined **)(puVar9 + 0x10) = puVar10;
        *(undefined **)(puVar9 + 0x18) = puVar14;
        _swift_retain(puVar14);
        _swift_task_switch(FUN_1002e7034,uVar13,0);
        return;
      }
      lVar15 = *(long *)(unaff_x22 + 0x80);
      _swift_release(puVar14);
      lVar11 = lVar11 + 0x640;
      uVar18 = uVar18 + 100;
      lVar17 = lVar17 + -100;
      uVar16 = uVar16 + 100;
    } while ((long)uVar1 < lVar15 && !bVar7);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001002e6fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e7034 | FUN_1002e7034 */

void FUN_1002e7034(void)

{
  long lVar1;
  undefined8 uVar2;
  __uint8 _Var3;
  TaskPriority TVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x22;
  TaskPriority TVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  code *pcVar19;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar14;
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  lVar17 = *(long *)(TVar4.unknown + -8);
  pcVar19 = *(code **)(lVar17 + 0x38);
  (*pcVar19)(uVar2,1,1,TVar4.unknown);
  puVar5 = &DAT_100ec8b78;
  _swift_allocObject(&DAT_100ec8b78,0x38,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined8 *)(puVar5 + 0x20) = uVar14;
  *(undefined **)(puVar5 + 0x28) = &DAT_100c3e910;
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  FUN_100011090(uVar2,uVar8,&DAT_100fbd5a0,&DAT_100c3de10);
  pcVar18 = *(code **)(lVar17 + 0x30);
  (*pcVar18)(uVar8,1,TVar4.unknown);
  _swift_retain_n(uVar14,2);
  _swift_retain(uVar12);
  TVar13.unknown = puVar5;
  _swift_retain();
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  if ((int)uVar8 == 1) {
    FUN_100005808(uVar12,&DAT_100fbd5a0,&DAT_100c3de10);
    TVar13.unknown = (undefined *)0x1c00;
  }
  else {
    _Var3 = Swift::TaskPriority::get_rawValue(TVar13);
    (**(code **)(lVar17 + 8))(uVar12,TVar4.unknown);
    TVar13.unknown = (undefined *)((ulong)_Var3 | 0x1c00);
  }
  lVar16 = *(long *)(puVar5 + 0x10);
  lVar15 = *(long *)(puVar5 + 0x18);
  _swift_unknownObjectRetain(lVar16);
  _swift_release(puVar5);
  if (lVar16 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar15 = 0;
  }
  else {
    _swift_getObjectType(lVar16);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar16);
  }
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x78),&DAT_100fbd5a0,&DAT_100c3de10);
  puVar7 = &DAT_100fbcf50;
  FUN_1000037f0(&DAT_100fbcf50,&DAT_100c3ebe0);
  if (lVar15 == 0 && UVar6.unknown == (undefined *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar10 = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined **)(unaff_x22 + 0x20) = UVar6.unknown;
    *(long *)(unaff_x22 + 0x28) = lVar15;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_create(TVar13.unknown,puVar10,puVar7,&DAT_100c3e920,puVar5);
  *(undefined **)(unaff_x22 + 0xb0) = TVar13.unknown;
  (*pcVar19)(uVar12,1,1,TVar4.unknown);
  puVar5 = &DAT_100ec8ba0;
  _swift_allocObject(&DAT_100ec8ba0,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  *(undefined **)(puVar5 + 0x20) = TVar13.unknown;
  FUN_100011090(uVar12,uVar8,&DAT_100fbd5a0,&DAT_100c3de10);
  (*pcVar18)(uVar8,1,TVar4.unknown);
  _swift_retain_n(puVar5,2);
  _swift_retain();
  uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
  if ((int)uVar8 == 1) {
    FUN_100005808(uVar12,&DAT_100fbd5a0,&DAT_100c3de10);
    uVar11 = 0x1c00;
  }
  else {
    _Var3 = Swift::TaskPriority::get_rawValue(TVar13);
    (**(code **)(lVar17 + 8))(uVar12,TVar4.unknown);
    uVar11 = (ulong)_Var3 | 0x1c00;
  }
  lVar17 = *(long *)(puVar5 + 0x10);
  lVar16 = *(long *)(puVar5 + 0x18);
  _swift_unknownObjectRetain(lVar17);
  _swift_release(puVar5);
  if (lVar17 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar16 = 0;
  }
  else {
    _swift_getObjectType(lVar17);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar17);
  }
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x68),&DAT_100fbd5a0,&DAT_100c3de10);
  puVar7 = &DAT_100ec8bc8;
  _swift_allocObject(&DAT_100ec8bc8,0x20,7);
  *(undefined **)(puVar7 + 0x10) = &DAT_100c3e930;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  if (lVar16 == 0 && UVar6.unknown == (undefined *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)(unaff_x22 + 0x30);
    *puVar10 = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined **)(unaff_x22 + 0x40) = UVar6.unknown;
    *(long *)(unaff_x22 + 0x48) = lVar16;
  }
  _swift_task_create(uVar11,puVar10,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c3e940,puVar7);
  _swift_release(puVar5);
  uVar8 = *(undefined8 *)(lVar1 + 0x70);
  *(ulong *)(lVar1 + 0x70) = uVar11;
  _swift_release(uVar8);
  plVar9 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar9;
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1002e7424;
  Swift::Task::get_value((undefined *)(unaff_x22 + 200));
  return;
}



/* Address: 0x1002e7424 | FUN_1002e7424 */

void FUN_1002e7424(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002e7480;
  }
  else {
    pcVar1 = FUN_1002e7770;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x98),0);
  return;
}



/* Address: 0x1002e7480 | FUN_1002e7480 */

void FUN_1002e7480(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1002e74e4,uVar1,uVar2);
  return;
}



/* Address: 0x1002e74e4 | FUN_1002e74e4 */

void FUN_1002e74e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x22;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  lVar14 = *(long *)(unaff_x22 + 0x88);
  lVar3 = 0x7fffffffffffffff;
  if (*(char *)(unaff_x22 + 0xc9) == '\0') {
    lVar3 = lVar14;
  }
  if (lVar3 < *(long *)(unaff_x22 + 0x80)) {
    lVar18 = lVar14 * 0x10 + 0x20;
    lVar17 = -lVar14;
    lVar13 = lVar14;
    do {
      lVar13 = lVar13 + 100;
      bVar7 = SCARRY8(lVar14,100);
      lVar1 = lVar14 + 100;
      *(long *)(unaff_x22 + 0x88) = lVar1;
      *(bool *)(unaff_x22 + 0xc9) = bVar7;
      if (0x7fffffffffffff9b < lVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e7768);
        (*pcVar6)();
      }
      lVar11 = *(long *)(unaff_x22 + 0x80);
      lVar16 = lVar11;
      if (lVar1 <= lVar11) {
        lVar16 = lVar1;
      }
      if (lVar16 < lVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e776c);
        (*pcVar6)();
      }
      if (lVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002e7770);
        (*pcVar6)();
      }
      lVar2 = lVar11;
      if (lVar13 <= lVar11) {
        lVar2 = lVar13;
      }
      lVar2 = lVar2 + lVar17;
      if (lVar2 == lVar11) {
        puVar15 = *(undefined **)(unaff_x22 + 0x50);
        _swift_bridgeObjectRetain(puVar15);
      }
      else {
        puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar14 != lVar16) {
          lVar16 = *(long *)(unaff_x22 + 0x50);
          if (lVar2 < 1) {
            _swift_bridgeObjectRetain(lVar16);
            puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            puVar15 = &DAT_100fbd038;
            FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
            _swift_allocObject();
            _swift_bridgeObjectRetain(lVar16);
            puVar9 = puVar15;
            _malloc_size();
            puVar10 = puVar9 + -0x11;
            if (0x1f < (long)puVar9) {
              puVar10 = puVar9 + -0x20;
            }
            *(long *)(puVar15 + 0x10) = lVar2;
            *(long *)(puVar15 + 0x18) = ((long)puVar10 >> 4) << 1;
            lVar16 = *(long *)(unaff_x22 + 0x50);
          }
          _swift_arrayInitWithCopy
                    (puVar15 + 0x20,lVar16 + lVar18,lVar2,
                     PTR___type_metadata_for_Swift_String_100eac208);
          _swift_bridgeObjectRelease(lVar16);
        }
      }
      *(undefined **)(unaff_x22 + 0x90) = puVar15;
      plVar8 = (long *)(*(long *)(unaff_x22 + 0x58) + 0x70);
      FUN_100004640(plVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x88));
      if (*(long *)(puVar15 + 0x10) != 0) {
        lVar14 = *plVar8;
        uVar12 = *(undefined8 *)(lVar14 + 0x18);
        *(undefined8 *)(unaff_x22 + 0x98) = uVar12;
        puVar10 = &DAT_100ec8b28;
        _swift_allocObject(&DAT_100ec8b28,0x18,7);
        _swift_weakInit(puVar10 + 0x10,lVar14);
        puVar9 = &DAT_100ec8b50;
        _swift_allocObject(&DAT_100ec8b50,0x20,7);
        *(undefined **)(unaff_x22 + 0xa0) = puVar9;
        *(undefined **)(puVar9 + 0x10) = puVar10;
        *(undefined **)(puVar9 + 0x18) = puVar15;
        _swift_retain(puVar15);
        _swift_task_switch(FUN_1002e7034,uVar12,0);
        return;
      }
      lVar16 = *(long *)(unaff_x22 + 0x80);
      _swift_release(puVar15);
      lVar18 = lVar18 + 0x640;
      lVar14 = lVar14 + 100;
      lVar17 = lVar17 + -100;
    } while (lVar1 < lVar16 && !bVar7);
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001002e76dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e7770 | FUN_1002e7770 */

void FUN_1002e7770(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1002e77d4,uVar1,uVar2);
  return;
}



/* Address: 0x1002e77d4 | FUN_1002e77d4 */

void FUN_1002e77d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001002e7834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e7838 | FUN_1002e7838 */

void FUN_1002e7838(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002e7890;
                    /* WARNING: Could not recover jumptable at 0x0001002e788c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))();
  return;
}



/* Address: 0x1002e7890 | FUN_1002e7890 */

void FUN_1002e7890(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x20));
  FUN_1000da368(uVar4,uVar2);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    pcVar1 = FUN_1002e7908;
  }
  _swift_task_switch(pcVar1,uVar4,uVar2);
  return;
}



/* Address: 0x1002e7908 | FUN_1002e7908 */

void FUN_1002e7908(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002e7910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e7914 | FUN_1002e7914 */

void FUN_1002e7914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ContinuousClock CVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_5;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x120) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x128) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
  _swift_task_switch(FUN_1002e797c);
  return;
}



/* Address: 0x1002e797c | FUN_1002e797c */

void FUN_1002e797c(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x118);
  piVar4 = *(int **)(unaff_x22 + 0x108);
  puVar2 = &DAT_100fbd610;
  FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,&TargetProtocolConformanceDescriptor_100c3eac0);
  *(undefined8 **)(unaff_x22 + 0x138) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(lVar5 + 0x198);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x148) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1002e7a14;
                    /* WARNING: Could not recover jumptable at 0x0001002e7a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))((code *)((long)iVar1 + (long)piVar4),lVar5,puVar2);
  return;
}



/* Address: 0x1002e7a14 | FUN_1002e7a14 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e7b0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e7a14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  Duration DVar5;
  long *plVar6;
  _StringGuts _Var7;
  undefined *puVar8;
  long unaff_x20;
  long *unaff_x22;
  long lVar9;
  ID IVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  
  lVar11 = *unaff_x22;
  lVar9 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar11 + 0x148));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar11 + 0x130);
    *(undefined8 *)(*(long *)(lVar11 + 0x118) + 0x110) = 0;
  }
  else {
    *(undefined8 *)(lVar11 + 0x150) = 1;
    *(long *)(lVar11 + 0xc0) = unaff_x20;
    _swift_errorRetain();
    puVar2 = &DAT_100fbd498;
    FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
    uVar3 = 0;
    FUN_1002eb884(0);
    uVar4 = lVar11 + 200;
    _swift_dynamicCast(uVar4,lVar11 + 0xc0,puVar2,uVar3,0);
    if ((uVar4 & 1) != 0) {
      IVar10 = *(ID *)(lVar11 + 200);
      *(ID *)(lVar11 + 0x158) = IVar10;
      FUN_1002e39b4();
      if ((uVar4 & 1) != 0) {
        _swift_errorRelease();
        uVar3 = *(undefined8 *)(*(long *)(lVar11 + 0x118) + 0xe8);
        pcVar12 = (char *)(lVar11 + 0xd0);
        pcVar12[0] = '\x01';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12[4] = '\0';
        pcVar12[5] = '\0';
        pcVar12[6] = '\0';
        pcVar12[7] = '\0';
        FUN_1002eb8c8();
        puVar8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
        DVar5 = Swift::Duration::___infix
                          (unaff_x20,uVar3,pcVar12,PTR___type_metadata_for_Swift_Int_100eac6f8,
                           unaff_x20);
        FUN_1000d468c(lVar11 + 0x10);
        puVar2 = *(undefined **)(lVar11 + 0x28);
        uVar1 = *(undefined8 *)(lVar11 + 0x30);
        _Var7.unknown = puVar2;
        FUN_100004640();
        *(undefined8 *)(lVar11 + 0xb0) = 0;
        *(undefined8 *)(lVar11 + 0xb8) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x3c,_Var7);
        *(undefined8 *)(lVar11 + 0xa0) = *(undefined8 *)(lVar11 + 0xb0);
        *(undefined8 *)(lVar11 + 0xa8) = *(undefined8 *)(lVar11 + 0xb8);
        SVar14.bridgeObject = (void *)0x8000000100da1180;
        SVar14.str = (char *)0xd000000000000023;
        SVar18.bridgeObject = puVar8;
        SVar18.str = pcVar12;
        Swift::String::append(SVar14,SVar18);
        IVar10 = objc_stub::code(IVar10);
        *(ID *)(lVar11 + 0xd8) = IVar10;
        SVar14 = Swift::CustomStringConvertible::get_description();
        SVar19.bridgeObject = puVar8;
        SVar19.str = pcVar12;
        Swift::String::append(SVar14,SVar19);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        SVar15.bridgeObject = (void *)0xe900000000000020;
        SVar15.str = (char *)0x7972746572202c29;
        SVar20.bridgeObject = puVar8;
        SVar20.str = pcVar12;
        Swift::String::append(SVar15,SVar20);
        *(undefined8 *)(lVar11 + 0xe0) = 1;
        SVar14 = Swift::CustomStringConvertible::get_description();
        SVar21.bridgeObject = puVar8;
        SVar21.str = pcVar12;
        Swift::String::append(SVar14,SVar21);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        SVar16.bridgeObject = (void *)0xe100000000000000;
        SVar16.str = (char *)0x2f;
        SVar22.bridgeObject = puVar8;
        SVar22.str = pcVar12;
        Swift::String::append(SVar16,SVar22);
        *(undefined8 *)(lVar11 + 0xe8) = 3;
        SVar14 = Swift::CustomStringConvertible::get_description();
        SVar23.bridgeObject = puVar8;
        SVar23.str = pcVar12;
        Swift::String::append(SVar14,SVar23);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        SVar17.bridgeObject = &DAT_e700000000000000;
        SVar17.str = (char *)0x20726574666120;
        SVar24.bridgeObject = puVar8;
        SVar24.str = pcVar12;
        Swift::String::append(SVar17,SVar24);
        SVar14 = Swift::Duration::get_description(DVar5);
        SVar25.bridgeObject = puVar8;
        SVar25.str = pcVar12;
        Swift::String::append(SVar14,SVar25);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        uVar13 = *(undefined8 *)(lVar11 + 0xa8);
        FUN_1000d4df0(*(undefined8 *)(lVar11 + 0xa0),uVar13,puVar2,uVar1);
        _swift_bridgeObjectRelease(uVar13);
        FUN_100004594(lVar11 + 0x10);
        (extension_Swift)::Swift::Clock::_get_continuous();
        plVar6 = (long *)0x80;
        _swift_task_alloc();
        *(long **)(lVar11 + 0x160) = plVar6;
        *plVar6 = lVar9;
        plVar6[1] = (long)FUN_1002e7d5c;
        FUN_1002eb1f0(DVar5.unknown,uVar3,0,0,1,FUN_1002eb1f0);
        return;
      }
    }
    uVar3 = *(undefined8 *)(lVar11 + 0x130);
    _swift_errorRelease(*(undefined8 *)(lVar11 + 0xc0));
  }
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001002e7d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))();
  return;
}



/* Address: 0x1002e7d5c | FUN_1002e7d5c */

void FUN_1002e7d5c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x160));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x118);
    (**(code **)(*(long *)(lVar3 + 0x128) + 8))
              (*(undefined8 *)(lVar3 + 0x130),*(undefined8 *)(lVar3 + 0x120));
    pcVar1 = FUN_1002e7dcc;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x118);
    pcVar1 = FUN_1002e82a4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1002e7dcc | FUN_1002e7dcc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e7dcc(void)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  piVar4 = *(int **)(unaff_x22 + 0x108);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xc0));
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002e7e4c;
                    /* WARNING: Could not recover jumptable at 0x0001002e7e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))((code *)((long)iVar1 + (long)piVar4),uVar3,uVar5);
  return;
}



/* Address: 0x1002e7e4c | FUN_1002e7e4c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e7e4c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  Duration DVar6;
  _StringGuts _Var7;
  undefined *puVar8;
  ID IVar9;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  
  lVar13 = *unaff_x22;
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0x170));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar13 + 0x130);
    *(undefined8 *)(*(long *)(lVar13 + 0x118) + 0x110) = 0;
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
  }
  else {
    uVar14 = *(ulong *)(lVar13 + 0x150);
    lVar1 = uVar14 + 1;
    *(long *)(lVar13 + 0x150) = lVar1;
    *(long *)(lVar13 + 0xc0) = unaff_x20;
    _swift_errorRetain();
    puVar2 = &DAT_100fbd498;
    FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
    uVar3 = 0;
    FUN_1002eb884(0);
    uVar4 = lVar13 + 200;
    _swift_dynamicCast(uVar4,lVar13 + 0xc0,puVar2,uVar3,0);
    if ((uVar4 & 1) != 0) {
      IVar9 = *(ID *)(lVar13 + 200);
      *(ID *)(lVar13 + 0x158) = IVar9;
      FUN_1002e39b4();
      if ((uVar4 & 1) != 0) {
        _swift_errorRelease();
        if (lVar1 != 3) {
          uVar3 = *(undefined8 *)(*(long *)(lVar13 + 0x118) + 0xe8);
          plVar15 = (long *)(lVar13 + 0xd0);
          *plVar15 = 1L << (uVar14 & 0x3f);
          FUN_1002eb8c8();
          puVar8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
          DVar6 = Swift::Duration::___infix();
          FUN_1000d468c(lVar13 + 0x10);
          puVar2 = *(undefined **)(lVar13 + 0x28);
          uVar5 = *(undefined8 *)(lVar13 + 0x30);
          _Var7.unknown = puVar2;
          FUN_100004640();
          *(undefined8 *)(lVar13 + 0xb0) = 0;
          *(undefined8 *)(lVar13 + 0xb8) = 0xe000000000000000;
          Swift::_StringGuts::grow(0x3c,_Var7);
          *(undefined8 *)(lVar13 + 0xa0) = *(undefined8 *)(lVar13 + 0xb0);
          *(undefined8 *)(lVar13 + 0xa8) = *(undefined8 *)(lVar13 + 0xb8);
          SVar16.bridgeObject = (void *)0x8000000100da1180;
          SVar16.str = (char *)0xd000000000000023;
          SVar20.bridgeObject = puVar8;
          SVar20.str = (char *)plVar15;
          Swift::String::append(SVar16,SVar20);
          IVar9 = objc_stub::code(IVar9);
          *(ID *)(lVar13 + 0xd8) = IVar9;
          SVar16 = Swift::CustomStringConvertible::get_description();
          SVar21.bridgeObject = puVar8;
          SVar21.str = (char *)plVar15;
          Swift::String::append(SVar16,SVar21);
          _swift_bridgeObjectRelease(SVar16.bridgeObject);
          SVar17.bridgeObject = (void *)0xe900000000000020;
          SVar17.str = (char *)0x7972746572202c29;
          SVar22.bridgeObject = puVar8;
          SVar22.str = (char *)plVar15;
          Swift::String::append(SVar17,SVar22);
          *(long *)(lVar13 + 0xe0) = lVar1;
          SVar16 = Swift::CustomStringConvertible::get_description();
          SVar23.bridgeObject = puVar8;
          SVar23.str = (char *)plVar15;
          Swift::String::append(SVar16,SVar23);
          _swift_bridgeObjectRelease(SVar16.bridgeObject);
          SVar18.bridgeObject = (void *)0xe100000000000000;
          SVar18.str = (char *)0x2f;
          SVar24.bridgeObject = puVar8;
          SVar24.str = (char *)plVar15;
          Swift::String::append(SVar18,SVar24);
          *(undefined8 *)(lVar13 + 0xe8) = 3;
          SVar16 = Swift::CustomStringConvertible::get_description();
          SVar25.bridgeObject = puVar8;
          SVar25.str = (char *)plVar15;
          Swift::String::append(SVar16,SVar25);
          _swift_bridgeObjectRelease(SVar16.bridgeObject);
          SVar19.bridgeObject = &DAT_e700000000000000;
          SVar19.str = (char *)0x20726574666120;
          SVar26.bridgeObject = puVar8;
          SVar26.str = (char *)plVar15;
          Swift::String::append(SVar19,SVar26);
          SVar16 = Swift::Duration::get_description(DVar6);
          SVar27.bridgeObject = puVar8;
          SVar27.str = (char *)plVar15;
          Swift::String::append(SVar16,SVar27);
          _swift_bridgeObjectRelease(SVar16.bridgeObject);
          uVar11 = *(undefined8 *)(lVar13 + 0xa8);
          FUN_1000d4df0(*(undefined8 *)(lVar13 + 0xa0),uVar11,puVar2,uVar5);
          _swift_bridgeObjectRelease(uVar11);
          FUN_100004594(lVar13 + 0x10);
          (extension_Swift)::Swift::Clock::_get_continuous();
          plVar15 = (long *)0x80;
          _swift_task_alloc();
          *(long **)(lVar13 + 0x160) = plVar15;
          *plVar15 = lVar12;
          plVar15[1] = (long)FUN_1002e7d5c;
          FUN_1002eb1f0(DVar6.unknown,uVar3,0,0,1);
          return;
        }
        lVar10 = *(long *)(lVar13 + 0x118);
        lVar1 = *(long *)(lVar10 + 0x110) + 1;
        if (SCARRY8(*(long *)(lVar10 + 0x110),1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002e82a4);
          (*UNRECOVERED_JUMPTABLE)();
        }
        *(long *)(lVar10 + 0x110) = lVar1;
        if (lVar1 == 5) {
          uVar5 = *(undefined8 *)(lVar13 + 0xf0);
          FUN_1002eb908(uVar5,*(undefined8 *)(lVar13 + 0xf8),*(undefined8 *)(lVar13 + 0x100));
          *(undefined8 *)(lVar13 + 0x80) = *(undefined8 *)(lVar10 + 0x110);
          *(undefined **)(lVar13 + 0x98) = PTR___type_metadata_for_Swift_Int_100eac6f8;
          FUN_100011080(lVar13 + 0x80,lVar13 + 0x60);
          uVar3 = uVar5;
          _swift_isUniquelyReferenced_nonNull_native(uVar5);
          FUN_1002e0c08(lVar13 + 0x60,0xd000000000000013,0x8000000100da11b0,uVar3);
          FUN_1000da768(lVar13 + 0x38);
          uVar3 = *(undefined8 *)(lVar13 + 0x50);
          lVar1 = *(long *)(lVar13 + 0x58);
          FUN_100004640(lVar13 + 0x38,uVar3);
          (**(code **)(lVar1 + 0x28))(IVar9,uVar5,uVar3,lVar1);
          _swift_bridgeObjectRelease(uVar5);
          FUN_100004594(lVar13 + 0x38);
        }
        _swift_willThrow();
      }
    }
    uVar3 = *(undefined8 *)(lVar13 + 0x130);
    _swift_errorRelease(*(undefined8 *)(lVar13 + 0xc0));
    _swift_task_dealloc(uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002e8054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002e82a4 | FUN_1002e82a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e82a4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))
            (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x120));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002e8308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e830c | FUN_1002e830c */

void FUN_1002e830c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  CancellationError CVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x138) = param_4;
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x31) = param_2;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x148) = CVar1.unknown;
  lVar4 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x150) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar3;
  _swift_task_switch(FUN_1002e8380);
  return;
}



/* Address: 0x1002e8380 | FUN_1002e8380 */

void FUN_1002e8380(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x31);
  lVar2 = *(long *)(unaff_x22 + 0x128);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
  puVar5 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(undefined8 *)(puVar5 + 0x20) = 0x795465676e616863;
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar5 + 0x28) = 0xea00000000006570;
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(undefined8 *)(puVar5 + 0x38) = uVar1;
  *(undefined **)(puVar5 + 0x48) = puVar7;
  *(undefined8 *)(puVar5 + 0x50) = 0x6e756f436d657469;
  *(undefined8 *)(puVar5 + 0x58) = 0xe900000000000074;
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar5 + 0x60) = uVar9;
  _swift_bridgeObjectRetain(uVar1);
  puVar6 = puVar5;
  FUN_1002e0e24();
  *(undefined **)(unaff_x22 + 0x168) = puVar6;
  _swift_setDeallocating(puVar5);
  puVar7 = &DAT_100fbd188;
  FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
  _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(long *)(unaff_x22 + 0x28) = lVar2;
  *(undefined1 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined **)(unaff_x22 + 0xf0) = &DAT_100c3e8f8;
  *(long *)(unaff_x22 + 0xf8) = unaff_x22 + 0x10;
  plVar8 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1002e851c;
  FUN_1002e7914(FUN_1002e7914,0xd000000000000014,0x8000000100da1240,puVar6,&DAT_100c3e900,
                unaff_x22 + 0xe0);
  return;
}



/* Address: 0x1002e851c | FUN_1002e851c */

void FUN_1002e851c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x168);
  *(long *)(lVar3 + 0x178) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x170));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x140);
    pcVar1 = FUN_1002e858c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x140);
    pcVar1 = FUN_1002e85c8;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1002e858c | FUN_1002e858c */

void FUN_1002e858c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002e85c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e85c8 | FUN_1002e85c8 */

void FUN_1002e85c8(void)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  pvVar6 = *(void **)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_errorRetain();
  pcVar3 = &DAT_100fbd498;
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  _swift_dynamicCast(uVar7,unaff_x22 + 0x118,pcVar3,pvVar6,0);
  if ((int)uVar7 == 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
    SVar9 = *(String *)(unaff_x22 + 0x130);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x118));
    FUN_1000d468c(unaff_x22 + 0xb8);
    puVar4 = *(undefined **)(unaff_x22 + 0xd0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    _Var5.unknown = puVar4;
    FUN_100004640(unaff_x22 + 0xb8);
    Swift::_StringGuts::grow(0x26,_Var5);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar10.bridgeObject = pvVar6;
    SVar10.str = pcVar3;
    Swift::String::append(SVar9,SVar10);
    SVar9.bridgeObject = &DAT_e800000000000000;
    SVar9.str = (char *)0x203a736d65746920;
    SVar11.bridgeObject = pvVar6;
    SVar11.str = pcVar3;
    Swift::String::append(SVar9,SVar11);
    pcVar3 = (char *)(unaff_x22 + 0x100);
    _swift_getErrorValue(uVar8,unaff_x22 + 0x120);
    SVar9 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar12.bridgeObject = pvVar6;
    SVar12.str = pcVar3;
    Swift::String::append(SVar9,SVar12);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    FUN_1000d4e0c(0xd00000000000001a,0x8000000100da1260,puVar4,uVar7);
    _swift_bridgeObjectRelease(0x8000000100da1260);
    FUN_100004594(unaff_x22 + 0xb8);
    _swift_willThrow();
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar2 = *(long *)(unaff_x22 + 0x150);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x178));
    (**(code **)(lVar2 + 0x20))(uVar7,uVar1,uVar8);
    puVar4 = &DAT_100fbd650;
    FUN_100003a00(&DAT_100fbd650,PTR_typeMetadataAccessor_100eaeb38,
                  PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
    _swift_allocError(uVar8,puVar4,0,0);
    (**(code **)(lVar2 + 0x10))(puVar4,uVar7,uVar8);
    _swift_willThrow();
    (**(code **)(lVar2 + 8))(uVar7,uVar8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x118));
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x158);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x160));
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001002e87e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e87e4 | FUN_1002e87e4 */

void FUN_1002e87e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  CancellationError CVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  Date DVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x390) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x388) = param_3;
  *(undefined8 *)(unaff_x22 + 0x380) = param_2;
  *(undefined8 *)(unaff_x22 + 0x378) = param_1;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x398) = CVar1.unknown;
  lVar6 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x3a0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3a8) = uVar2;
  puVar3 = &DAT_100fbcf60;
  FUN_1000037f0(&DAT_100fbcf60,&DAT_100c3e020);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3b0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3b8) = uVar2;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x3c0) = DVar5.unknown;
  lVar6 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x3c8) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3d0) = uVar2;
  lVar6 = 0;
  FUN_1002e35d4();
  *(long *)(unaff_x22 + 0x3d8) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x3e0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 1000) = uVar2;
  puVar3 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3f0) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3f8) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x400) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x408) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x410) = uVar2;
  _swift_task_switch(FUN_1002e8934);
  return;
}



/* Address: 0x1002e8934 | FUN_1002e8934 */

void FUN_1002e8934(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  Task TVar8;
  long *plVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *pvVar12;
  int *piVar13;
  ulong *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  code *pcVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  
  lVar18 = *(long *)(unaff_x22 + 0x378);
  pcVar22 = *(code **)(*(long *)(unaff_x22 + 0x3c8) + 0x38);
  *(code **)(unaff_x22 + 0x418) = pcVar22;
  (*pcVar22)(*(undefined8 *)(unaff_x22 + 0x410),1,1,*(undefined8 *)(unaff_x22 + 0x3c0));
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar27 = 0;
  uVar24 = *(ulong *)(lVar18 + 0x10);
  do {
    *(undefined **)(unaff_x22 + 0x420) = puVar16;
    uVar3 = uVar27;
    if (uVar27 <= uVar24) {
      uVar3 = uVar24;
    }
    puVar14 = (ulong *)(lVar18 + 0x28 + uVar27 * 0x10);
    do {
      if (uVar24 == uVar27) {
        lVar18 = *(long *)(unaff_x22 + 0x380);
        lVar28 = *(long *)(puVar16 + 0x10);
        *(long *)(unaff_x22 + 0x428) = lVar28;
        if (DAT_100fbd4e8 != -1) {
          _swift_once(&DAT_100fbd4e8,FUN_1002e1234);
        }
        uVar20 = DAT_101057930;
        lVar25 = uVar24 - lVar28;
        lVar15 = *(long *)(unaff_x22 + 0x388);
        if ((lVar18 < 1) && (bVar6 = SBORROW8(lVar15,lVar25), lVar15 = lVar15 - lVar25, bVar6)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1002e8da4);
          (*pcVar22)();
        }
        *(long *)(unaff_x22 + 0x430) = lVar15;
        puVar19 = *(undefined8 **)(unaff_x22 + 1000);
        lVar18 = *(long *)(unaff_x22 + 0x3d8);
        pvVar12 = *(void **)(unaff_x22 + 0x3c0);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x380);
        iVar5 = *(int *)(lVar18 + 0x1c);
        *(int *)(unaff_x22 + 0x498) = iVar5;
        TVar8.unknown = (undefined *)((long)puVar19 + (long)iVar5);
        pcVar11 = &DAT_00000001;
        (*pcVar22)(TVar8.unknown,1);
        *puVar19 = uVar20;
        puVar19[1] = lVar15;
        puVar19[2] = uVar31;
        *(long *)((long)puVar19 + (long)*(int *)(lVar18 + 0x20)) = lVar25;
        if (0 < lVar25) {
          FUN_1000d468c(unaff_x22 + 0x2d0);
          puVar16 = *(undefined **)(unaff_x22 + 0x2e8);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x2f0);
          _Var10.unknown = puVar16;
          FUN_100004640(unaff_x22 + 0x2d0);
          Swift::_StringGuts::grow(0x28,_Var10);
          _swift_bridgeObjectRelease(0xe000000000000000);
          *(long *)(unaff_x22 + 0x370) = lVar25;
          SVar34 = Swift::CustomStringConvertible::get_description();
          SVar35.bridgeObject = pvVar12;
          SVar35.str = pcVar11;
          Swift::String::append(SVar34,SVar35);
          _swift_bridgeObjectRelease(SVar34.bridgeObject);
          SVar34.bridgeObject = (void *)0x8000000100da1160;
          SVar34.str = (char *)0xd00000000000001d;
          SVar36.bridgeObject = pvVar12;
          SVar36.str = pcVar11;
          Swift::String::append(SVar34,SVar36);
          FUN_1000d4df0(0x64657265746c6946,0xe900000000000020,puVar16,uVar20);
          _swift_bridgeObjectRelease(0xe900000000000020);
          TVar8.unknown = (undefined *)(unaff_x22 + 0x2d0);
          FUN_100004594();
        }
        if (lVar28 != 0) {
          *(undefined8 *)(unaff_x22 + 0x440) = 0;
          *(undefined8 *)(unaff_x22 + 0x438) = *(undefined8 *)(unaff_x22 + 0x380);
          if ((*(char *)(*(long *)(unaff_x22 + 0x390) + 0xf0) == '\x01') &&
             (bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar8), !bVar6)) {
            *(undefined8 *)(unaff_x22 + 0x448) = 100;
            lVar28 = *(long *)(unaff_x22 + 0x428);
            lVar18 = lVar28;
            if (99 < lVar28) {
              lVar18 = 100;
            }
            if (-1 < lVar28) {
              lVar28 = *(long *)(unaff_x22 + 0x420);
              if (lVar18 <= *(long *)(lVar28 + 0x10)) {
                lVar15 = lVar28;
                if (*(long *)(lVar28 + 0x10) == lVar18) {
                  _swift_retain(lVar28);
                }
                else {
                  _swift_retain();
                  FUN_1002eb4d0();
                  _swift_release(lVar28);
                }
                *(long *)(unaff_x22 + 0x450) = lVar15;
                lVar28 = *(long *)(unaff_x22 + 0x390);
                uVar20 = *(undefined8 *)(lVar28 + 0xb0);
                lVar18 = *(long *)(lVar28 + 0xb8);
                FUN_100004640(lVar28 + 0x98,uVar20);
                puVar19 = &DAT_100fbd610;
                FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,
                              &TargetProtocolConformanceDescriptor_100c3eac0);
                piVar13 = *(int **)(lVar18 + 0x10);
                iVar5 = *piVar13;
                plVar9 = (long *)(ulong)(uint)piVar13[1];
                _swift_task_alloc();
                *(long **)(unaff_x22 + 0x458) = plVar9;
                *plVar9 = unaff_x22;
                plVar9[1] = (long)FUN_1002e8de0;
                    /* WARNING: Could not recover jumptable at 0x0001002e8d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((long)iVar5 + (long)piVar13))(lVar28,puVar19,lVar15,uVar20,lVar18);
                return;
              }
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x1002e8dac);
              (*pcVar22)();
            }
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1002e8da8);
            (*pcVar22)();
          }
        }
        _swift_release(*(undefined8 *)(unaff_x22 + 0x420));
        uVar23 = *(undefined8 *)(unaff_x22 + 0x410);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x408);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x400);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x3f8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x3f0);
        uVar33 = *(undefined8 *)(unaff_x22 + 1000);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x3d0);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x3b8);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x3b0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x3a8);
        FUN_1002ea410(uVar33,uVar23,0);
        FUN_1002ec520();
        FUN_100005808(uVar23,&DAT_100fbcfb8,&DAT_100c3e5d0);
        FUN_1002e450c(uVar33);
        _swift_task_dealloc(uVar23);
        _swift_task_dealloc(uVar26);
        _swift_task_dealloc(uVar29);
        _swift_task_dealloc(uVar30);
        _swift_task_dealloc(uVar32);
        _swift_task_dealloc(uVar33);
        _swift_task_dealloc(uVar17);
        _swift_task_dealloc(uVar21);
        _swift_task_dealloc(uVar31);
        _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001002e8ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(1);
        return;
      }
      uVar27 = uVar27 + 1;
      if (uVar3 + 1 == uVar27) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1002e8d88);
        (*pcVar22)();
      }
      uVar2 = puVar14[-1];
      uVar4 = *puVar14;
      puVar14 = puVar14 + 2;
      uVar1 = uVar2 & 0xffffffffffff;
      if ((uVar4 & 0x2000000000000000) != 0) {
        uVar1 = uVar4 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
    _swift_bridgeObjectRetain(uVar4);
    puVar7 = puVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar7 & 1) == 0) {
      FUN_1002dd1f8(0,*(long *)(puVar16 + 0x10) + 1,1);
    }
    uVar3 = *(ulong *)(puVar16 + 0x10);
    if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar3) {
      FUN_1002dd1f8(1 < *(ulong *)(puVar16 + 0x18),uVar3 + 1,1);
    }
    *(ulong *)(puVar16 + 0x10) = uVar3 + 1;
    *(ulong *)(puVar16 + uVar3 * 0x10 + 0x20) = uVar2;
    *(ulong *)(puVar16 + uVar3 * 0x10 + 0x28) = uVar4;
  } while( true );
}



/* Address: 0x1002e8de0 | FUN_1002e8de0 */

void FUN_1002e8de0(long param_1)

{
  ulong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  Task TVar6;
  undefined8 *puVar7;
  long *plVar8;
  _StringGuts _Var9;
  char *pcVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x22;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  ulong uVar31;
  undefined8 uVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  
  lVar29 = *unaff_x22;
  uVar14 = *(undefined8 *)(lVar29 + 0x450);
  lVar11 = *unaff_x22;
  *(long *)(lVar29 + 0x460) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar29 + 0x458));
  _swift_release();
  __objc_autoreleasePoolPush();
  uVar12 = *(ulong *)(param_1 + 0x10);
  *(ulong *)(lVar29 + 0x468) = uVar12;
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar12 != 0) {
    uVar31 = 0;
    puVar7 = (undefined8 *)(lVar29 + 0x330);
    lVar22 = param_1 + 0x20;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e95e4);
        (*pcVar3)();
      }
      FUN_100076688(lVar22,lVar29 + 0x1e0);
      lVar15 = *(long *)(lVar29 + 0x1f8);
      lVar18 = *(long *)(lVar29 + 0x200);
      FUN_100004640(lVar29 + 0x1e0,lVar15);
      (**(code **)(lVar18 + 0x48))(lVar15,lVar18);
      if (lVar15 == 0) {
        FUN_100004594(lVar29 + 0x1e0);
      }
      else {
        FUN_100004550();
        puVar26 = puVar20;
        _swift_isUniquelyReferenced_nonNull_native();
        *puVar7 = puVar20;
        if (((ulong)puVar26 & 1) == 0) {
          FUN_1002dd24c(0,*(long *)(puVar20 + 0x10) + 1,1);
          puVar20 = (undefined *)*puVar7;
        }
        uVar1 = *(ulong *)(puVar20 + 0x10);
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar1) {
          FUN_1002dd24c(1 < *(ulong *)(puVar20 + 0x18),uVar1 + 1,1);
          puVar20 = (undefined *)*puVar7;
        }
        *(ulong *)(puVar20 + 0x10) = uVar1 + 1;
        FUN_100076508(lVar29 + 0x1e0,puVar20 + uVar1 * 0x28 + 0x20);
      }
      uVar31 = uVar31 + 1;
      lVar22 = lVar22 + 0x28;
    } while (uVar12 != uVar31);
  }
  lVar22 = *(long *)(puVar20 + 0x10);
  if (lVar22 == 0) {
    _swift_release(puVar20);
    puVar26 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    *(undefined **)(lVar29 + 0x338) = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002dd1f8(0,lVar22,0);
    puVar26 = *(undefined **)(lVar29 + 0x338);
    puVar5 = puVar20 + 0x20;
    do {
      FUN_100076688(puVar5,lVar29 + 0x208);
      uVar17 = *(undefined8 *)(lVar29 + 0x220);
      lVar15 = *(long *)(lVar29 + 0x228);
      FUN_100004640(lVar29 + 0x208,uVar17);
      (**(code **)(lVar15 + 8))();
      FUN_100004594(lVar29 + 0x208);
      *(undefined **)(lVar29 + 0x338) = puVar26;
      uVar31 = *(ulong *)(puVar26 + 0x10);
      if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar31) {
        FUN_1002dd1f8(1 < *(ulong *)(puVar26 + 0x18),uVar31 + 1,1);
        puVar26 = *(undefined **)(lVar29 + 0x338);
      }
      *(ulong *)(puVar26 + 0x10) = uVar31 + 1;
      *(undefined8 *)(puVar26 + uVar31 * 0x10 + 0x20) = uVar17;
      *(long *)(puVar26 + uVar31 * 0x10 + 0x28) = lVar15;
      puVar5 = puVar5 + 0x28;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    _swift_release(puVar20);
  }
  __objc_autoreleasePoolPop(uVar14);
  FUN_1002ec26c(puVar26);
  _swift_bridgeObjectRelease(puVar26);
  if (uVar12 != 0) {
    uVar14 = *(undefined8 *)(lVar29 + 0x440);
    uVar23 = *(undefined8 *)(lVar29 + 0x438);
    uVar27 = *(undefined8 *)(lVar29 + 0x430);
    uVar17 = *(undefined8 *)(lVar29 + 0x390);
    puVar20 = &DAT_100fbd618;
    FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
    *(undefined **)(lVar29 + 0x470) = puVar20;
    _swift_initStackObject();
    *(undefined8 *)(puVar20 + 0x18) = 6;
    *(undefined8 *)(puVar20 + 0x10) = 3;
    *(undefined8 *)(puVar20 + 0x20) = 0x6574496c61746f74;
    puVar26 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined8 *)(puVar20 + 0x28) = 0xea0000000000736d;
    *(undefined8 *)(puVar20 + 0x30) = uVar27;
    *(undefined **)(puVar20 + 0x48) = puVar26;
    *(undefined8 *)(puVar20 + 0x50) = 0x4964657865646e69;
    *(undefined8 *)(puVar20 + 0x58) = 0xec000000736d6574;
    *(undefined8 *)(puVar20 + 0x60) = uVar23;
    *(undefined **)(puVar20 + 0x78) = puVar26;
    *(undefined8 *)(puVar20 + 0x80) = 0x6174536863746162;
    *(undefined **)(puVar20 + 0xa8) = puVar26;
    *(undefined8 *)(puVar20 + 0x88) = 0xea00000000007472;
    *(undefined8 *)(puVar20 + 0x90) = uVar14;
    puVar5 = puVar20;
    FUN_1002e0e24();
    *(undefined **)(lVar29 + 0x478) = puVar5;
    _swift_setDeallocating(puVar20);
    puVar26 = &DAT_100fbd188;
    FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
    *(undefined **)(lVar29 + 0x480) = puVar26;
    _swift_arrayDestroy(puVar20 + 0x20,3,puVar26);
    *(undefined8 *)(lVar29 + 0x20) = uVar17;
    *(long *)(lVar29 + 0x28) = param_1;
    *(undefined **)(lVar29 + 0x40) = &DAT_100c3e850;
    *(long *)(lVar29 + 0x48) = lVar29 + 0x10;
    plVar8 = (long *)0x180;
    _swift_task_alloc();
    *(long **)(lVar29 + 0x488) = plVar8;
    *plVar8 = lVar11;
    plVar8[1] = (long)FUN_1002e9628;
    FUN_1002e7914(FUN_1002e7914,0xd000000000000016,0x8000000100da1100,puVar5,&DAT_100c3e860,
                  lVar29 + 0x30);
    return;
  }
  lVar15 = *(long *)(lVar29 + 0x438);
  lVar18 = *(long *)(*(long *)(lVar29 + 0x460) + 0x10);
  _swift_bridgeObjectRelease();
  lVar22 = lVar15 + lVar18;
  if (SCARRY8(lVar15,lVar18)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e95e8);
    (*pcVar3)();
  }
  lVar18 = *(long *)(lVar29 + 0x448);
  iVar2 = *(int *)(lVar29 + 0x498);
  uVar17 = *(undefined8 *)(lVar29 + 0x430);
  lVar15 = *(long *)(lVar29 + 0x428);
  uVar14 = *(undefined8 *)(lVar29 + 0x410);
  lVar19 = *(long *)(lVar29 + 1000);
  lVar24 = *(long *)(lVar29 + 0x3e0);
  uVar16 = *(undefined8 *)(lVar29 + 0x3d8);
  uVar23 = *(undefined8 *)(lVar29 + 0x3b8);
  uVar21 = *(undefined8 *)(lVar29 + 0x3b0);
  uVar27 = *(undefined8 *)(lVar29 + 0x390);
  *(long *)(lVar19 + 0x10) = lVar22;
  FUN_1002eb82c(uVar14,lVar19 + iVar2);
  FUN_1002e44c8(lVar19,uVar23);
  (**(code **)(lVar24 + 0x38))(uVar23,0,1,uVar16);
  puVar20 = &DAT_100c3e870;
  _swift_getKeyPath(&DAT_100c3e870);
  puVar26 = &DAT_100c3e898;
  _swift_getKeyPath();
  pcVar10 = "d|\v";
  FUN_100011090(uVar23,uVar21,&DAT_100fbcf60,&DAT_100c3e020);
  _swift_retain(uVar27);
  FUN_1002cb5a0(uVar21,uVar27,puVar20);
  FUN_100005808(uVar23,&DAT_100fbcf60);
  FUN_1000d468c(lVar29 + 0x2a8);
  puVar20 = *(undefined **)(lVar29 + 0x2c0);
  uVar14 = *(undefined8 *)(lVar29 + 0x2c8);
  _Var9.unknown = puVar20;
  FUN_100004640(lVar29 + 0x2a8);
  *(undefined8 *)(lVar29 + 800) = 0;
  *(undefined8 *)(lVar29 + 0x328) = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1d,_Var9);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar29 + 0x328));
  *(undefined8 *)(lVar29 + 0x310) = 0xd000000000000012;
  *(undefined8 *)(lVar29 + 0x318) = 0x8000000100da1140;
  *(long *)(lVar29 + 0x360) = lVar22;
  SVar33 = Swift::CustomStringConvertible::get_description();
  SVar35.bridgeObject = puVar26;
  SVar35.str = pcVar10;
  Swift::String::append(SVar33,SVar35);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar33.bridgeObject = (void *)0xe100000000000000;
  SVar33.str = (char *)0x2f;
  SVar36.bridgeObject = puVar26;
  SVar36.str = pcVar10;
  Swift::String::append(SVar33,SVar36);
  *(undefined8 *)(lVar29 + 0x368) = uVar17;
  SVar33 = Swift::CustomStringConvertible::get_description();
  SVar37.bridgeObject = puVar26;
  SVar37.str = pcVar10;
  Swift::String::append(SVar33,SVar37);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  SVar34.bridgeObject = &DAT_e600000000000000;
  SVar34.str = (char *)0x736d65746920;
  SVar38.bridgeObject = puVar26;
  SVar38.str = pcVar10;
  Swift::String::append(SVar34,SVar38);
  uVar17 = *(undefined8 *)(lVar29 + 0x318);
  FUN_1000d4dd4(*(undefined8 *)(lVar29 + 0x310),uVar17,puVar20,uVar14);
  _swift_bridgeObjectRelease(uVar17);
  TVar6.unknown = (undefined *)(lVar29 + 0x2a8);
  FUN_100004594();
  if (lVar18 < lVar15) {
    uVar12 = *(ulong *)(lVar29 + 0x448);
    *(ulong *)(lVar29 + 0x440) = uVar12;
    *(long *)(lVar29 + 0x438) = lVar22;
    if (((*(byte *)(*(long *)(lVar29 + 0x390) + 0xf0) & 1) != 0) &&
       (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6), !bVar4)) {
      lVar22 = uVar12 + 100;
      *(long *)(lVar29 + 0x448) = lVar22;
      if (SCARRY8(uVar12,100)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e95ec);
        (*pcVar3)();
      }
      lVar15 = *(long *)(lVar29 + 0x428);
      if (lVar22 <= *(long *)(lVar29 + 0x428)) {
        lVar15 = lVar22;
      }
      if ((long)uVar12 <= lVar15) {
        lVar22 = *(long *)(lVar29 + 0x420);
        uVar31 = *(ulong *)(lVar22 + 0x10);
        if ((uVar12 <= uVar31) && (lVar15 <= (long)uVar31)) {
          lVar18 = lVar22;
          if (uVar31 == lVar15 - uVar12) {
            _swift_retain(lVar22);
          }
          else {
            _swift_retain();
            FUN_1002eb4d0();
            _swift_release(lVar22);
          }
          *(long *)(lVar29 + 0x450) = lVar18;
          lVar15 = *(long *)(lVar29 + 0x390);
          uVar14 = *(undefined8 *)(lVar15 + 0xb0);
          lVar22 = *(long *)(lVar15 + 0xb8);
          FUN_100004640(lVar15 + 0x98,uVar14);
          puVar7 = &DAT_100fbd610;
          FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,&TargetProtocolConformanceDescriptor_100c3eac0)
          ;
          piVar13 = *(int **)(lVar22 + 0x10);
          iVar2 = *piVar13;
          plVar8 = (long *)(ulong)(uint)piVar13[1];
          _swift_task_alloc();
          *(long **)(lVar29 + 0x458) = plVar8;
          *plVar8 = lVar11;
          plVar8[1] = (long)FUN_1002e8de0;
                    /* WARNING: Could not recover jumptable at 0x0001002e95dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar13))(lVar15,puVar7,lVar18,uVar14,lVar22);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e95f4);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e95f0);
      (*pcVar3)();
    }
  }
  _swift_release(*(undefined8 *)(lVar29 + 0x420));
  uVar16 = *(undefined8 *)(lVar29 + 0x410);
  uVar21 = *(undefined8 *)(lVar29 + 0x408);
  uVar25 = *(undefined8 *)(lVar29 + 0x400);
  uVar28 = *(undefined8 *)(lVar29 + 0x3f8);
  uVar27 = *(undefined8 *)(lVar29 + 0x3f0);
  uVar30 = *(undefined8 *)(lVar29 + 1000);
  uVar32 = *(undefined8 *)(lVar29 + 0x3d0);
  uVar23 = *(undefined8 *)(lVar29 + 0x3b8);
  uVar17 = *(undefined8 *)(lVar29 + 0x3b0);
  uVar14 = *(undefined8 *)(lVar29 + 0x3a8);
  FUN_1002ea410(uVar30,uVar16,0);
  FUN_1002ec520();
  FUN_100005808(uVar16,&DAT_100fbcfb8,&DAT_100c3e5d0);
  FUN_1002e450c(uVar30);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001002e94ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))(1);
  return;
}



/* Address: 0x1002e9628 | FUN_1002e9628 */

void FUN_1002e9628(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x490) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x488));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x390);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x478));
    pcVar1 = FUN_1002e96ac;
  }
  else {
    uVar4 = *(undefined8 *)(lVar2 + 0x420);
    uVar3 = *(undefined8 *)(lVar2 + 0x390);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x478));
    _swift_release(uVar4);
    pcVar1 = FUN_1002e9d54;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x1002e96ac | FUN_1002e96ac */

void FUN_1002e96ac(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  Task TVar5;
  undefined8 *puVar6;
  long *plVar7;
  _StringGuts _Var8;
  char *pcVar9;
  int *piVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  
  lVar16 = 0;
  lVar15 = *(long *)(unaff_x22 + 0x460) + 0x20;
  puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3f0);
    lVar18 = *(long *)(unaff_x22 + 0x3c8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3c0);
    FUN_100076688(lVar15,unaff_x22 + 0x280);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x298);
    lVar29 = *(long *)(unaff_x22 + 0x2a0);
    FUN_100004640(unaff_x22 + 0x280,uVar26);
    (**(code **)(lVar29 + 0x18))(uVar20,uVar26,lVar29);
    FUN_100004594(unaff_x22 + 0x280);
    pcVar27 = *(code **)(lVar18 + 0x30);
    (*pcVar27)(uVar20,1,uVar24);
    if ((int)uVar20 == 1) {
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x3f0),&DAT_100fbcfb8,&DAT_100c3e5d0);
    }
    else {
      pcVar21 = *(code **)(*(long *)(unaff_x22 + 0x3c8) + 0x20);
      (*pcVar21)(*(undefined8 *)(unaff_x22 + 0x3d0),*(undefined8 *)(unaff_x22 + 0x3f0),
                 *(undefined8 *)(unaff_x22 + 0x3c0));
      puVar3 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar12;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_1002db11c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar13 = *(ulong *)(puVar4 + 0x10);
      puVar12 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar13) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_1002db11c(puVar12,uVar13 + 1,1,puVar4);
      }
      uVar20 = *(undefined8 *)(unaff_x22 + 0x3d0);
      lVar18 = *(long *)(unaff_x22 + 0x3c8);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x3c0);
      *(ulong *)(puVar12 + 0x10) = uVar13 + 1;
      uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
      (*pcVar21)(puVar12 + *(long *)(lVar18 + 0x48) * uVar13 +
                           (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff)),uVar20,uVar24);
    }
    lVar16 = lVar16 + 1;
    lVar15 = lVar15 + 0x28;
  } while (lVar16 != *(long *)(unaff_x22 + 0x468));
  uVar24 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x3c0);
  FUN_1002ea240(uVar24,puVar12);
  _swift_bridgeObjectRelease(puVar12);
  FUN_1002eb7dc(uVar24,uVar20);
  (*pcVar27)(uVar20,1,uVar26);
  if ((int)uVar20 == 1) {
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3f8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x3c0);
    FUN_1002eb7dc(*(undefined8 *)(unaff_x22 + 0x410),*(undefined8 *)(unaff_x22 + 0x408));
    (*pcVar27)(uVar20,1,uVar24);
    if ((int)uVar20 != 1) {
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x3f8),&DAT_100fbcfb8,&DAT_100c3e5d0);
    }
  }
  else {
    pcVar27 = *(code **)(unaff_x22 + 0x418);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x408);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x3f8);
    lVar15 = *(long *)(unaff_x22 + 0x3c8);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x3c0);
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0x410),&DAT_100fbcfb8,&DAT_100c3e5d0);
    (**(code **)(lVar15 + 0x20))(uVar24,uVar20,uVar26);
    (*pcVar27)(uVar24,0,1,uVar26);
  }
  FUN_1002eb7dc(*(undefined8 *)(unaff_x22 + 0x408),*(undefined8 *)(unaff_x22 + 0x410));
  lVar18 = *(long *)(unaff_x22 + 0x438);
  lVar16 = *(long *)(*(long *)(unaff_x22 + 0x460) + 0x10);
  _swift_bridgeObjectRelease();
  lVar15 = lVar18 + lVar16;
  if (SCARRY8(lVar18,lVar16)) {
                    /* WARNING: Does not return */
    pcVar27 = (code *)SoftwareBreakpoint(1,0x1002e9d14);
    (*pcVar27)();
  }
  lVar18 = *(long *)(unaff_x22 + 0x448);
  iVar1 = *(int *)(unaff_x22 + 0x498);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x430);
  lVar16 = *(long *)(unaff_x22 + 0x428);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x410);
  lVar29 = *(long *)(unaff_x22 + 1000);
  lVar22 = *(long *)(unaff_x22 + 0x3e0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x390);
  *(long *)(lVar29 + 0x10) = lVar15;
  FUN_1002eb82c(uVar20,lVar29 + iVar1);
  FUN_1002e44c8(lVar29,uVar26);
  (**(code **)(lVar22 + 0x38))(uVar26,0,1,uVar17);
  puVar12 = &DAT_100c3e870;
  _swift_getKeyPath(&DAT_100c3e870);
  puVar3 = &DAT_100c3e898;
  _swift_getKeyPath();
  pcVar9 = "d|\v";
  FUN_100011090(uVar26,uVar19,&DAT_100fbcf60,&DAT_100c3e020);
  _swift_retain(uVar14);
  FUN_1002cb5a0(uVar19,uVar14,puVar12);
  FUN_100005808(uVar26,&DAT_100fbcf60);
  FUN_1000d468c(unaff_x22 + 0x2a8);
  puVar12 = *(undefined **)(unaff_x22 + 0x2c0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2c8);
  _Var8.unknown = puVar12;
  FUN_100004640(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 800) = 0;
  *(undefined8 *)(unaff_x22 + 0x328) = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1d,_Var8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x328));
  *(undefined8 *)(unaff_x22 + 0x310) = 0xd000000000000012;
  *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100da1140;
  *(long *)(unaff_x22 + 0x360) = lVar15;
  SVar31 = Swift::CustomStringConvertible::get_description();
  SVar33.bridgeObject = puVar3;
  SVar33.str = pcVar9;
  Swift::String::append(SVar31,SVar33);
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  SVar31.bridgeObject = (void *)0xe100000000000000;
  SVar31.str = (char *)0x2f;
  SVar34.bridgeObject = puVar3;
  SVar34.str = pcVar9;
  Swift::String::append(SVar31,SVar34);
  *(undefined8 *)(unaff_x22 + 0x368) = uVar24;
  SVar31 = Swift::CustomStringConvertible::get_description();
  SVar35.bridgeObject = puVar3;
  SVar35.str = pcVar9;
  Swift::String::append(SVar31,SVar35);
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  SVar32.bridgeObject = &DAT_e600000000000000;
  SVar32.str = (char *)0x736d65746920;
  SVar36.bridgeObject = puVar3;
  SVar36.str = pcVar9;
  Swift::String::append(SVar32,SVar36);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x318);
  FUN_1000d4dd4(*(undefined8 *)(unaff_x22 + 0x310),uVar24,puVar12,uVar20);
  _swift_bridgeObjectRelease(uVar24);
  TVar5.unknown = (undefined *)(unaff_x22 + 0x2a8);
  FUN_100004594();
  if (lVar18 < lVar16) {
    uVar13 = *(ulong *)(unaff_x22 + 0x448);
    *(ulong *)(unaff_x22 + 0x440) = uVar13;
    *(long *)(unaff_x22 + 0x438) = lVar15;
    if (((*(byte *)(*(long *)(unaff_x22 + 0x390) + 0xf0) & 1) != 0) &&
       (bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5), !bVar2)) {
      lVar15 = uVar13 + 100;
      *(long *)(unaff_x22 + 0x448) = lVar15;
      if (SCARRY8(uVar13,100)) {
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x1002e9d18);
        (*pcVar27)();
      }
      lVar16 = *(long *)(unaff_x22 + 0x428);
      if (lVar15 <= *(long *)(unaff_x22 + 0x428)) {
        lVar16 = lVar15;
      }
      if ((long)uVar13 <= lVar16) {
        lVar15 = *(long *)(unaff_x22 + 0x420);
        uVar11 = *(ulong *)(lVar15 + 0x10);
        if ((uVar13 <= uVar11) && (lVar16 <= (long)uVar11)) {
          lVar18 = lVar15;
          if (uVar11 == lVar16 - uVar13) {
            _swift_retain(lVar15);
          }
          else {
            _swift_retain();
            FUN_1002eb4d0();
            _swift_release(lVar15);
          }
          *(long *)(unaff_x22 + 0x450) = lVar18;
          lVar16 = *(long *)(unaff_x22 + 0x390);
          uVar20 = *(undefined8 *)(lVar16 + 0xb0);
          lVar15 = *(long *)(lVar16 + 0xb8);
          FUN_100004640(lVar16 + 0x98,uVar20);
          puVar6 = &DAT_100fbd610;
          FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,&TargetProtocolConformanceDescriptor_100c3eac0)
          ;
          piVar10 = *(int **)(lVar15 + 0x10);
          iVar1 = *piVar10;
          plVar7 = (long *)(ulong)(uint)piVar10[1];
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x458) = plVar7;
          *plVar7 = unaff_x22;
          plVar7[1] = (long)FUN_1002e8de0;
                    /* WARNING: Could not recover jumptable at 0x0001002e9d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar10))(lVar16,puVar6,lVar18,uVar20,lVar15);
          return;
        }
                    /* WARNING: Does not return */
        pcVar27 = (code *)SoftwareBreakpoint(1,0x1002e9d20);
        (*pcVar27)();
      }
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x1002e9d1c);
      (*pcVar27)();
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x420));
  uVar17 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar30 = *(undefined8 *)(unaff_x22 + 1000);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x3a8);
  FUN_1002ea410(uVar30,uVar17,0);
  FUN_1002ec520();
  FUN_100005808(uVar17,&DAT_100fbcfb8,&DAT_100c3e5d0);
  FUN_1002e450c(uVar30);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001002e9c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(1);
  return;
}



/* Address: 0x1002e9d54 | FUN_1002e9d54 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e9d54(void)

{
  char *pcVar1;
  NSError *pNVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar5 = *(ulong *)(unaff_x22 + 0x3a8);
  pvVar10 = *(void **)(unaff_x22 + 0x398);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x460));
  *(undefined8 *)(unaff_x22 + 0x340) = uVar8;
  _swift_errorRetain(uVar8);
  pcVar1 = &DAT_100fbd498;
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  _swift_dynamicCast(uVar5,unaff_x22 + 0x340,pcVar1,pvVar10,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x490);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x438);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x430);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x340));
    FUN_1000d468c(unaff_x22 + 0x230);
    puVar13 = *(undefined **)(unaff_x22 + 0x248);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
    _Var3.unknown = puVar13;
    FUN_100004640(unaff_x22 + 0x230);
    Swift::_StringGuts::grow(0x26,_Var3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x348) = uVar8;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar22.bridgeObject = pvVar10;
    SVar22.str = pcVar1;
    Swift::String::append(SVar20,SVar22);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar20.bridgeObject = (void *)0xe100000000000000;
    SVar20.str = (char *)0x2f;
    SVar23.bridgeObject = pvVar10;
    SVar23.str = pcVar1;
    Swift::String::append(SVar20,SVar23);
    *(undefined8 *)(unaff_x22 + 0x350) = uVar7;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = pvVar10;
    SVar24.str = pcVar1;
    Swift::String::append(SVar20,SVar24);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar21.bridgeObject = &SUB_e200000000000000;
    SVar21.str = (char *)0x203a;
    SVar25.bridgeObject = pvVar10;
    SVar25.str = pcVar1;
    Swift::String::append(SVar21,SVar25);
    pcVar1 = (char *)(unaff_x22 + 0x2f8);
    _swift_getErrorValue(uVar9,unaff_x22 + 0x358);
    SVar20 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar26.bridgeObject = pvVar10;
    SVar26.str = pcVar1;
    Swift::String::append(SVar20,SVar26);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    FUN_1000d4e0c(0xd00000000000001d,0x8000000100da1120,puVar13,uVar4);
    _swift_bridgeObjectRelease(0x8000000100da1120);
    FUN_100004594(unaff_x22 + 0x230);
    pNVar2 = Foundation::__convertErrorToNSError();
    FUN_1002e39b4();
    uVar8 = *(undefined8 *)(unaff_x22 + 0x490);
    if (((ulong)pNVar2 & 1) == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x480);
      lVar6 = *(long *)(unaff_x22 + 0x470);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x440);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x438);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x430);
      FUN_1000da768(unaff_x22 + 600,0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x270);
      lVar16 = *(long *)(unaff_x22 + 0x278);
      FUN_100004640(unaff_x22 + 600,uVar14);
      _swift_initStackObject(lVar6,unaff_x22 + 0x50);
      *(undefined8 *)(lVar6 + 0x18) = 8;
      *(undefined8 *)(lVar6 + 0x10) = 4;
      *(undefined8 *)(lVar6 + 0x20) = 0x656372756f73;
      puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(lVar6 + 0x28) = &DAT_e600000000000000;
      *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000016;
      *(undefined8 *)(lVar6 + 0x38) = 0x8000000100da1100;
      *(undefined **)(lVar6 + 0x48) = puVar13;
      *(undefined8 *)(lVar6 + 0x50) = 0x6574496c61746f74;
      *(undefined8 *)(lVar6 + 0x58) = 0xea0000000000736d;
      *(undefined8 *)(lVar6 + 0x60) = uVar7;
      puVar13 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined **)(lVar6 + 0x78) = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined8 *)(lVar6 + 0x80) = 0x4964657865646e69;
      *(undefined8 *)(lVar6 + 0x88) = 0xec000000736d6574;
      *(undefined8 *)(lVar6 + 0x90) = uVar12;
      *(undefined **)(lVar6 + 0xa8) = puVar13;
      *(undefined8 *)(lVar6 + 0xb0) = 0x6174536863746162;
      *(undefined **)(lVar6 + 0xd8) = puVar13;
      *(undefined8 *)(lVar6 + 0xb8) = 0xea00000000007472;
      *(undefined8 *)(lVar6 + 0xc0) = uVar9;
      lVar11 = lVar6;
      FUN_1002e0e24();
      _swift_setDeallocating(lVar6);
      _swift_arrayDestroy((undefined8 *)(lVar6 + 0x20),4,uVar4);
      (**(code **)(lVar16 + 0x28))(uVar8,lVar11,uVar14,lVar16);
      _swift_errorRelease(uVar8);
      _swift_bridgeObjectRelease(lVar11);
      FUN_100004594(unaff_x22 + 600);
    }
    else {
      _swift_errorRelease(uVar8);
    }
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x3a8);
    lVar11 = *(long *)(unaff_x22 + 0x3a0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x398);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x490));
    (**(code **)(lVar11 + 8))(uVar9,uVar8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x340));
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 1000);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x3a8);
  FUN_1002ea410(uVar7,uVar14,(uint)uVar5 ^ 1);
  FUN_1002ec520();
  FUN_100005808(uVar14,&DAT_100fbcfb8,&DAT_100c3e5d0);
  FUN_1002e450c(uVar7);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001002ea1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar5 & 0xffffffff);
  return;
}



/* Address: 0x1002ea1c0 | FUN_1002ea1c0 */

void FUN_1002ea1c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1002ea1d8,0,0);
  return;
}



/* Address: 0x1002ea1d8 | FUN_1002ea1d8 */

void FUN_1002ea1d8(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_100004640(*(long *)(unaff_x22 + 0x10) + 0x70,
                *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x88));
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000d8d44;
  FUN_1002e1bac(0,0,*(undefined8 *)(unaff_x22 + 0x18),0);
  return;
}



/* Address: 0x1002ea240 | FUN_1002ea240 */

void FUN_1002ea240(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  bool bVar4;
  Date DVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar8 - extraout_x12;
  lVar7 = *(long *)(param_2 + 0x10);
  if (lVar7 != 0) {
    uVar12 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
    pcVar14 = *(code **)(lVar13 + 0x10);
    local_68 = param_1;
    (*pcVar14)(lVar9,param_2 + uVar12,DVar5.unknown);
    puVar2 = PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498;
    puVar1 = PTR_typeMetadataAccessor_100ea7480;
    lVar7 = lVar7 + -1;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar13 + 0x48);
      lVar10 = param_2 + lVar11 + uVar12;
      do {
        (*pcVar14)(puVar8,lVar10,DVar5.unknown);
        puVar6 = &DAT_100fbcfc0;
        FUN_100003a00(&DAT_100fbcfc0,puVar1,puVar2);
        bVar4 = Swift::Comparable::<_infix(puVar8,lVar9,DVar5.unknown,puVar6);
        if (bVar4) {
          (**(code **)(lVar13 + 8))(lVar9,DVar5.unknown);
          (**(code **)(lVar13 + 0x20))(lVar9,puVar8,DVar5.unknown);
        }
        else {
          (**(code **)(lVar13 + 8))(puVar8,DVar5.unknown);
        }
        lVar10 = lVar10 + lVar11;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar3 = local_68;
    (**(code **)(lVar13 + 0x20))(local_68,lVar9,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(uVar3,0,1,DVar5.unknown);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ea370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 0x38))(param_1,1,1,DVar5.unknown);
  return;
}



/* Address: 0x1002ea410 | FUN_1002ea410 */

void FUN_1002ea410(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  Task TVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 auStack_170 [16];
  undefined8 auStack_160 [26];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  puVar2 = &DAT_100fbcf60;
  FUN_1000037f0(&DAT_100fbcf60,&DAT_100c3e020);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar4 = auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar4 - extraout_x12;
  puVar2 = (undefined *)0x0;
  FUN_1002e35d4();
  lVar9 = *(long *)(puVar2 + -8);
  TVar3.unknown = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if ((param_3 & 1) == 0) {
    if (*(char *)(unaff_x20 + 0xf0) == '\x01') {
      bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
      TVar3.unknown = (undefined *)CONCAT71(extraout_var,bVar1);
      if (!bVar1) {
        FUN_1002e44c8(param_1,puVar8);
        *(undefined8 *)(puVar8 + 0x10) = *(undefined8 *)(param_1 + 8);
        FUN_1002eb82c(param_2,puVar8 + *(int *)(puVar2 + 0x1c));
        FUN_1002e44c8(puVar8,lVar7);
        (**(code **)(lVar9 + 0x38))(lVar7,0,1,puVar2);
        _swift_getKeyPath(&DAT_100c3e870);
        _swift_getKeyPath(&DAT_100c3e898);
        FUN_100011090(lVar7,puVar4,&DAT_100fbcf60,&DAT_100c3e020);
        _swift_retain();
        FUN_1002cb5a0(puVar4);
        FUN_100005808(lVar7,&DAT_100fbcf60,&DAT_100c3e020);
        FUN_1002e450c();
        TVar3.unknown = puVar8;
      }
    }
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    if ((!bVar1) && (lVar7 = *(long *)(param_1 + *(int *)(puVar2 + 0x20)), 0 < lVar7)) {
      FUN_1000da768(auStack_90);
      puVar4 = auStack_90;
      FUN_100004640(puVar4,local_78);
      FUN_1002ebf18();
      puVar2 = &DAT_100ec8df0;
      _swift_allocError(&DAT_100ec8df0,puVar4,0,0);
      *puVar4 = 0;
      puVar8 = &DAT_100fbd618;
      FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
      _swift_initStackObject();
      *(undefined8 *)(puVar8 + 0x18) = 8;
      *(undefined8 *)(puVar8 + 0x10) = 4;
      *(undefined8 *)(puVar8 + 0x20) = 0x656372756f73;
      *(undefined1 **)(puVar8 + 0x28) = &DAT_e600000000000000;
      *(undefined8 *)(puVar8 + 0x30) = 0xd000000000000016;
      puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(puVar8 + 0x38) = 0x8000000100da1100;
      *(undefined **)(puVar8 + 0x48) = puVar6;
      *(undefined8 *)(puVar8 + 0x50) = 0x6574496c61746f74;
      *(undefined8 *)(puVar8 + 0x58) = 0xea0000000000736d;
      puVar6 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined8 *)(puVar8 + 0x60) = *(undefined8 *)(param_1 + 8);
      *(undefined **)(puVar8 + 0x78) = puVar6;
      *(undefined8 *)(puVar8 + 0x80) = 0x4964657865646e69;
      *(undefined8 *)(puVar8 + 0x88) = 0xec000000736d6574;
      *(undefined8 *)(puVar8 + 0x90) = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(puVar8 + 0xa8) = puVar6;
      *(undefined8 *)(puVar8 + 0xb0) = 0x4964696c61766e69;
      *(undefined **)(puVar8 + 0xd8) = puVar6;
      *(undefined8 *)(puVar8 + 0xb8) = 0xec000000736d6574;
      *(long *)(puVar8 + 0xc0) = lVar7;
      puVar5 = puVar8;
      FUN_1002e0e24();
      _swift_setDeallocating(puVar8);
      puVar6 = &DAT_100fbd188;
      FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
      _swift_arrayDestroy(puVar8 + 0x20,4,puVar6);
      (**(code **)(lStack_70 + 0x28))(puVar2,puVar5,local_78,lStack_70);
      _swift_bridgeObjectRelease(puVar5);
      _swift_errorRelease(puVar2);
      FUN_100004594(auStack_90);
    }
  }
  return;
}



/* Address: 0x1002ea770 | FUN_1002ea770 */

void FUN_1002ea770(undefined8 param_1,undefined1 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x118) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  _swift_task_switch(FUN_1002ea78c);
  return;
}



/* Address: 0x1002ea78c | FUN_1002ea78c */

void FUN_1002ea78c(Task param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  ulong *puVar14;
  long lVar15;
  undefined *puVar16;
  long unaff_x22;
  ulong uVar17;
  ulong uVar18;
  
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar17 = 0;
  lVar12 = *(long *)(unaff_x22 + 0xc0);
  uVar18 = *(ulong *)(lVar12 + 0x10);
  do {
    *(undefined **)(unaff_x22 + 0xd0) = puVar16;
    uVar4 = uVar17;
    if (uVar17 <= uVar18) {
      uVar4 = uVar18;
    }
    puVar14 = (ulong *)(lVar12 + 0x28 + uVar17 * 0x10);
    do {
      if (uVar18 == uVar17) {
        lVar12 = *(long *)(puVar16 + 0x10);
        *(long *)(unaff_x22 + 0xd8) = lVar12;
        if (lVar12 == 0) {
          _swift_release(puVar16);
        }
        else {
          *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(*(long *)(unaff_x22 + 200) + 0x198);
          *(undefined8 *)(unaff_x22 + 0xe8) = 100;
          *(undefined1 *)(unaff_x22 + 0x119) = 0;
          if (*(char *)(*(long *)(unaff_x22 + 200) + 0xf0) == '\x01') {
            bVar8 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
            if (!bVar8) {
              lVar15 = *(long *)(unaff_x22 + 0xd8);
              lVar12 = lVar15;
              if (99 < lVar15) {
                lVar12 = 100;
              }
              if (-1 < lVar15) {
                lVar15 = *(long *)(unaff_x22 + 0xd0);
                if (lVar12 <= *(long *)(lVar15 + 0x10)) {
                  lVar11 = lVar15;
                  if (*(long *)(lVar15 + 0x10) == lVar12) {
                    _swift_retain(lVar15);
                  }
                  else {
                    _swift_retain();
                    FUN_1002eb4d0();
                    _swift_release(lVar15);
                  }
                  *(long *)(unaff_x22 + 0xf0) = lVar11;
                  lVar15 = *(long *)(unaff_x22 + 200);
                  uVar5 = *(undefined8 *)(lVar15 + 0xb0);
                  lVar12 = *(long *)(lVar15 + 0xb8);
                  FUN_100004640(lVar15 + 0x98,uVar5);
                  puVar9 = &DAT_100fbd610;
                  FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,
                                &TargetProtocolConformanceDescriptor_100c3eac0);
                  *(undefined8 **)(unaff_x22 + 0xf8) = puVar9;
                  piVar13 = *(int **)(lVar12 + 0x10);
                  iVar2 = *piVar13;
                  plVar10 = (long *)(ulong)(uint)piVar13[1];
                  _swift_task_alloc();
                  *(long **)(unaff_x22 + 0x100) = plVar10;
                  *plVar10 = unaff_x22;
                  plVar10[1] = (long)FUN_1002eaa10;
                    /* WARNING: Could not recover jumptable at 0x0001002ea9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)((long)iVar2 + (long)piVar13))(lVar15,puVar9,lVar11,uVar5,lVar12);
                  return;
                }
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ea9dc);
                (*pcVar7)();
              }
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ea9d8);
              (*pcVar7)();
            }
            puVar16 = *(undefined **)(unaff_x22 + 0xd0);
          }
          _swift_release(puVar16);
          FUN_1002ec520();
        }
                    /* WARNING: Could not recover jumptable at 0x0001002ea8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      uVar17 = uVar17 + 1;
      if (uVar4 + 1 == uVar17) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002ea9d4);
        (*pcVar7)();
      }
      uVar3 = puVar14[-1];
      uVar6 = *puVar14;
      puVar14 = puVar14 + 2;
      uVar1 = uVar3 & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar6 >> 0x38 & 0xf;
      }
    } while (uVar1 == 0);
    _swift_bridgeObjectRetain(uVar6);
    param_1.unknown = puVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)param_1.unknown & 1) == 0) {
      param_1.unknown = (undefined *)0x0;
      FUN_1002dd1f8(0,*(long *)(puVar16 + 0x10) + 1,1);
    }
    uVar4 = *(ulong *)(puVar16 + 0x10);
    if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar4) {
      param_1.unknown = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
      FUN_1002dd1f8(param_1.unknown,uVar4 + 1,1);
    }
    *(ulong *)(puVar16 + 0x10) = uVar4 + 1;
    *(ulong *)(puVar16 + uVar4 * 0x10 + 0x20) = uVar3;
    *(ulong *)(puVar16 + uVar4 * 0x10 + 0x28) = uVar6;
  } while( true );
}



/* Address: 0x1002eaa10 | FUN_1002eaa10 */

void FUN_1002eaa10(Task param_1)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x22;
  undefined *puVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  
  lVar13 = *unaff_x22;
  uVar14 = *(undefined8 *)(lVar13 + 0xf0);
  lVar10 = *unaff_x22;
  *(undefined **)(lVar13 + 0x108) = param_1.unknown;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0x100));
  _swift_release();
  __objc_autoreleasePoolPush();
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar11 = *(ulong *)(param_1.unknown + 0x10);
  puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar11 != 0) {
    uVar20 = 0;
    puVar16 = param_1.unknown + 0x20;
    do {
      if (*(ulong *)(param_1.unknown + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eae60);
        (*pcVar3)();
      }
      FUN_100076688(puVar16,lVar13 + 0x10);
      lVar17 = *(long *)(lVar13 + 0x28);
      lVar19 = *(long *)(lVar13 + 0x30);
      FUN_100004640(lVar13 + 0x10,lVar17);
      (**(code **)(lVar19 + 0x48))(lVar17,lVar19);
      if (lVar17 == 0) {
        FUN_100004594(lVar13 + 0x10);
      }
      else {
        FUN_100004550();
        puVar5 = puVar15;
        _swift_isUniquelyReferenced_nonNull_native();
        *(undefined **)(lVar13 + 0xa8) = puVar15;
        if (((ulong)puVar5 & 1) == 0) {
          FUN_1002dd24c(0,*(long *)(puVar15 + 0x10) + 1,1);
          puVar15 = *(undefined **)(lVar13 + 0xa8);
        }
        uVar2 = *(ulong *)(puVar15 + 0x10);
        if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar2) {
          FUN_1002dd24c(1 < *(ulong *)(puVar15 + 0x18),uVar2 + 1,1);
          puVar15 = *(undefined **)(lVar13 + 0xa8);
        }
        *(ulong *)(puVar15 + 0x10) = uVar2 + 1;
        FUN_100076508(lVar13 + 0x10,puVar15 + uVar2 * 0x28 + 0x20);
      }
      uVar20 = uVar20 + 1;
      puVar16 = puVar16 + 0x28;
    } while (uVar11 != uVar20);
  }
  lVar17 = *(long *)(puVar15 + 0x10);
  if (lVar17 == 0) {
    _swift_release(puVar15);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    *(undefined **)(lVar13 + 0xb0) = puVar18;
    FUN_1002dd1f8(0,lVar17,0);
    puVar18 = *(undefined **)(lVar13 + 0xb0);
    puVar16 = puVar15 + 0x20;
    do {
      FUN_100076688(puVar16,lVar13 + 0x38);
      uVar6 = *(undefined8 *)(lVar13 + 0x50);
      lVar19 = *(long *)(lVar13 + 0x58);
      FUN_100004640(lVar13 + 0x38,uVar6);
      (**(code **)(lVar19 + 8))();
      FUN_100004594(lVar13 + 0x38);
      *(undefined **)(lVar13 + 0xb0) = puVar18;
      uVar20 = *(ulong *)(puVar18 + 0x10);
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar20) {
        FUN_1002dd1f8(1 < *(ulong *)(puVar18 + 0x18),uVar20 + 1,1);
        puVar18 = *(undefined **)(lVar13 + 0xb0);
      }
      *(ulong *)(puVar18 + 0x10) = uVar20 + 1;
      *(undefined8 *)(puVar18 + uVar20 * 0x10 + 0x20) = uVar6;
      *(long *)(puVar18 + uVar20 * 0x10 + 0x28) = lVar19;
      puVar16 = puVar16 + 0x28;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    _swift_release(puVar15);
  }
  __objc_autoreleasePoolPop(uVar14);
  FUN_1002ec26c(puVar18);
  _swift_bridgeObjectRelease(puVar18);
  if (uVar11 != 0) {
    uVar14 = *(undefined8 *)(lVar13 + 0xf8);
    lVar17 = *(long *)(lVar13 + 200);
    FUN_100004640(lVar17 + 0x70,*(undefined8 *)(lVar17 + 0x88));
    plVar7 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(lVar13 + 0x110) = plVar7;
    *plVar7 = lVar10;
    plVar7[1] = (long)FUN_1002eaea4;
    FUN_1002e1bac(lVar17,uVar14,param_1.unknown,*(undefined1 *)(lVar13 + 0x118));
    return;
  }
  _swift_bridgeObjectRelease();
  if (((*(byte *)(lVar13 + 0x119) & 1) == 0) &&
     (uVar11 = *(ulong *)(lVar13 + 0xe8), (long)uVar11 < *(long *)(lVar13 + 0xd8))) {
    lVar17 = uVar11 + 100;
    *(long *)(lVar13 + 0xe8) = lVar17;
    *(bool *)(lVar13 + 0x119) = SCARRY8(uVar11,100);
    if ((*(char *)(*(long *)(lVar13 + 200) + 0xf0) == '\x01') &&
       (bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1), !bVar4)) {
      if (0x7fffffffffffff9b < (long)uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eae64);
        (*pcVar3)();
      }
      lVar19 = *(long *)(lVar13 + 0xd8);
      if (lVar17 <= *(long *)(lVar13 + 0xd8)) {
        lVar19 = lVar17;
      }
      if (lVar19 < (long)uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eae68);
        (*pcVar3)();
      }
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eae6c);
        (*pcVar3)();
      }
      lVar17 = *(long *)(lVar13 + 0xd0);
      uVar20 = *(ulong *)(lVar17 + 0x10);
      if ((uVar11 <= uVar20) && (lVar19 <= (long)uVar20)) {
        lVar9 = lVar17;
        if (uVar20 == lVar19 - uVar11) {
          _swift_retain(lVar17);
        }
        else {
          _swift_retain();
          FUN_1002eb4d0();
          _swift_release(lVar17);
        }
        *(long *)(lVar13 + 0xf0) = lVar9;
        lVar19 = *(long *)(lVar13 + 200);
        uVar14 = *(undefined8 *)(lVar19 + 0xb0);
        lVar17 = *(long *)(lVar19 + 0xb8);
        FUN_100004640(lVar19 + 0x98,uVar14);
        puVar8 = &DAT_100fbd610;
        FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,&TargetProtocolConformanceDescriptor_100c3eac0);
        *(undefined8 **)(lVar13 + 0xf8) = puVar8;
        piVar12 = *(int **)(lVar17 + 0x10);
        iVar1 = *piVar12;
        plVar7 = (long *)(ulong)(uint)piVar12[1];
        _swift_task_alloc();
        *(long **)(lVar13 + 0x100) = plVar7;
        *plVar7 = lVar10;
        plVar7[1] = (long)FUN_1002eaa10;
                    /* WARNING: Could not recover jumptable at 0x0001002eae58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar12))(lVar19,puVar8,lVar9,uVar14,lVar17);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eae70);
      (*pcVar3)();
    }
  }
  _swift_release(*(undefined8 *)(lVar13 + 0xd0));
  FUN_1002ec520();
                    /* WARNING: Could not recover jumptable at 0x0001002ead5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))();
  return;
}



/* Address: 0x1002eaea4 | FUN_1002eaea4 */

void FUN_1002eaea4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  code *UNRECOVERED_JUMPTABLE;
  Task TVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  _StringGuts _Var8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long *unaff_x22;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  lVar17 = *unaff_x22;
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar17 + 0x110));
  if (unaff_x20 == 0) {
    lVar16 = *(long *)(lVar17 + 0x108);
    FUN_1000d468c(lVar17 + 0x60);
    puVar2 = *(undefined **)(lVar17 + 0x78);
    uVar11 = *(undefined8 *)(lVar17 + 0x80);
    _Var8.unknown = puVar2;
    FUN_100004640(lVar17 + 0x60);
    *(undefined8 *)(lVar17 + 0x98) = 0;
    *(undefined8 *)(lVar17 + 0xa0) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1a,_Var8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar17 + 0xa0));
    *(undefined8 *)(lVar17 + 0x88) = 0xd000000000000012;
    *(undefined8 *)(lVar17 + 0x90) = 0x8000000100da1140;
    uVar14 = *(undefined8 *)(lVar16 + 0x10);
    _swift_bridgeObjectRelease(lVar16);
    *(undefined8 *)(lVar17 + 0xb8) = uVar14;
    SVar18 = Swift::CustomStringConvertible::get_description();
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar18,SVar19);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    SVar18.bridgeObject = &DAT_e600000000000000;
    SVar18.str = (char *)0x736d65746920;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar18,SVar20);
    uVar14 = *(undefined8 *)(lVar17 + 0x90);
    FUN_1000d4dd4(*(undefined8 *)(lVar17 + 0x88),uVar14,puVar2,uVar11);
    _swift_bridgeObjectRelease(uVar14);
    TVar4.unknown = (undefined *)(lVar17 + 0x60);
    FUN_100004594();
    if (((*(byte *)(lVar17 + 0x119) & 1) == 0) &&
       (uVar12 = *(ulong *)(lVar17 + 0xe8), (long)uVar12 < *(long *)(lVar17 + 0xd8))) {
      lVar16 = uVar12 + 100;
      *(long *)(lVar17 + 0xe8) = lVar16;
      *(bool *)(lVar17 + 0x119) = SCARRY8(uVar12,100);
      if ((*(char *)(*(long *)(lVar17 + 200) + 0xf0) == '\x01') &&
         (bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar4), !bVar3)) {
        if (0x7fffffffffffff9b < (long)uVar12) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002eb14c);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar13 = *(long *)(lVar17 + 0xd8);
        if (lVar16 <= *(long *)(lVar17 + 0xd8)) {
          lVar13 = lVar16;
        }
        if (lVar13 < (long)uVar12) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002eb150);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002eb154);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar16 = *(long *)(lVar17 + 0xd0);
        uVar10 = *(ulong *)(lVar16 + 0x10);
        if (uVar12 <= uVar10 && lVar13 <= (long)uVar10) {
          lVar7 = lVar16;
          if (uVar10 == lVar13 - uVar12) {
            _swift_retain(lVar16);
          }
          else {
            _swift_retain();
            FUN_1002eb4d0();
            _swift_release(lVar16);
          }
          *(long *)(lVar17 + 0xf0) = lVar7;
          lVar13 = *(long *)(lVar17 + 200);
          uVar11 = *(undefined8 *)(lVar13 + 0xb0);
          lVar16 = *(long *)(lVar13 + 0xb8);
          FUN_100004640(lVar13 + 0x98,uVar11);
          puVar5 = &DAT_100fbd610;
          FUN_100003a00(&DAT_100fbd610,FUN_1002f2f88,&TargetProtocolConformanceDescriptor_100c3eac0)
          ;
          *(undefined8 **)(lVar17 + 0xf8) = puVar5;
          piVar9 = *(int **)(lVar16 + 0x10);
          iVar1 = *piVar9;
          plVar6 = (long *)(ulong)(uint)piVar9[1];
          _swift_task_alloc();
          *(long **)(lVar17 + 0x100) = plVar6;
          *plVar6 = lVar15;
          plVar6[1] = (long)FUN_1002eaa10;
                    /* WARNING: Could not recover jumptable at 0x0001002eb144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar9))(lVar13,puVar5,lVar7,uVar11,lVar16);
          return;
        }
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002eb158);
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    _swift_release(*(undefined8 *)(lVar17 + 0xd0));
    FUN_1002ec520();
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
  }
  else {
    uVar11 = *(undefined8 *)(lVar17 + 0xd0);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar17 + 0x108));
    _swift_release(uVar11);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eb054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002eb18c | FUN_1002eb18c */

void FUN_1002eb18c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1002ea770(param_2,param_3);
  return;
}



/* Address: 0x1002eb1f0 | FUN_1002eb1f0 */

void FUN_1002eb1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = IVar1.unknown;
  lVar4 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_1002eb28c,0,0);
  return;
}



/* Address: 0x1002eb28c | FUN_1002eb28c */

void FUN_1002eb28c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fbd638,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fbd640,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100091908;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x1002eb394 | FUN_1002eb394 */

void FUN_1002eb394(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  long *unaff_x20;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (*(long *)(*unaff_x20 + 0x10) == 0) {
    return;
  }
  puVar9 = (ulong *)(param_1 + 0x38);
  uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar12 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar12 = uVar12 & *puVar9;
  _swift_bridgeObjectRetain();
  lVar10 = 0;
  lVar1 = lVar10;
  while( true ) {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      _swift_bridgeObjectRetain(uVar4);
      uVar8 = uVar4;
      FUN_1002ee560(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar8);
      lVar10 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar11 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar9,~uVar11,lVar10,0);
      return;
    }
    uVar12 = puVar9[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1002eb4d0);
  (*pcVar6)();
}



/* Address: 0x1002eb4d0 | FUN_1002eb4d0 */

undefined * FUN_1002eb4d0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eb5a4);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_100fbd038;
      FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x11;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002eb5a0);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy
              (puVar4 + 0x20,param_2 + param_3 * 0x10,lVar2,
               PTR___type_metadata_for_Swift_String_100eac208);
  }
  return puVar4;
}



/* Address: 0x1002eb5a4 | FUN_1002eb5a4 */

void FUN_1002eb5a4(undefined8 param_1)

{
  Task TVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  TVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x28) = TVar1.unknown;
  *(long *)TVar1.unknown = unaff_x22;
  *(code **)(TVar1.unknown + 8) = FUN_1002eb608;
  (extension_Swift)::Swift::Task::_get_value(TVar1);
  return;
}



/* Address: 0x1002eb608 | FUN_1002eb608 */

void FUN_1002eb608(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
  _swift_task_switch(FUN_1002eb650,0,0);
  return;
}



/* Address: 0x1002eb650 | FUN_1002eb650 */

void FUN_1002eb650(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002eb6b8;
                    /* WARNING: Could not recover jumptable at 0x0001002eb6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x38,0,0);
  return;
}



/* Address: 0x1002eb6b8 | FUN_1002eb6b8 */

void FUN_1002eb6b8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 == 0) {
    **(undefined1 **)(lVar1 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002eb700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1002eb704 | FUN_1002eb704 */

void FUN_1002eb704(void)

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
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002ea1c0(uVar1,uVar2);
  return;
}



/* Address: 0x1002eb754 | FUN_1002eb754 */

void FUN_1002eb754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002e7838(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x1002eb7dc | FUN_1002eb7dc */

undefined8 FUN_1002eb7dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002eb82c | FUN_1002eb82c */

undefined8 FUN_1002eb82c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002eb87c | thunk_FUN_1002f36d4 */

void thunk_FUN_1002f36d4(void)

{
  FUN_1002f36d4();
  return;
}



/* Address: 0x1002eb880 | thunk_FUN_1002f37c0 */

void thunk_FUN_1002f37c0(void)

{
  FUN_1002f37c0();
  return;
}



/* Address: 0x1002eb884 | FUN_1002eb884 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002eb884(void)

{
  undefined *puVar1;
  
  if (DAT_100fbd620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSError;
  _swift_getObjCClassMetadata();
  DAT_100fbd620 = puVar1;
  return;
}



/* Address: 0x1002eb8c8 | FUN_1002eb8c8 */

void FUN_1002eb8c8(void)

{
  undefined *puVar1;
  
  if (DAT_100fbd628 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fbd628 = puVar1;
  return;
}



/* Address: 0x1002eb908 | FUN_1002eb908 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1002eb908(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 extraout_d0;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined *local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined *local_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  
  puVar4 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  *(undefined8 *)(puVar4 + 0x20) = 0x656372756f73;
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar4 + 0x28) = &DAT_e600000000000000;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(undefined8 *)(puVar4 + 0x38) = param_2;
  *(undefined **)(puVar4 + 0x48) = puVar7;
  *(undefined8 *)(puVar4 + 0x50) = 0x656d69747075;
  *(undefined1 **)(puVar4 + 0x58) = &DAT_e600000000000000;
  _swift_bridgeObjectRetain(param_2);
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::systemUptime(IVar5);
  *(undefined **)(puVar4 + 0x78) = PTR___type_metadata_for_Swift_Double_100eac5d0;
  *(undefined8 *)(puVar4 + 0x60) = extraout_d0;
  puVar6 = puVar4;
  FUN_1002e0e24();
  _swift_setDeallocating(puVar4);
  puVar7 = &DAT_100fbd188;
  FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar7);
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  local_160 = (undefined *)NSProcessInfo::thermalState(IVar5);
  puStack_148 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100011080(&local_160,&local_130);
  puVar4 = puVar6;
  _swift_isUniquelyReferenced_nonNull_native(puVar6);
  local_160 = puVar6;
  FUN_1002e0c08(&local_130,0x536c616d72656874,0xec00000065746174,puVar4);
  puVar4 = local_160;
  IVar5 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar5 = NSProcessInfo::isLowPowerModeEnabled(IVar5);
  local_160 = (undefined *)CONCAT71(local_160._1_7_,(char)IVar5);
  puStack_148 = PTR___type_metadata_for_Swift_Bool_100eac570;
  FUN_100011080(&local_160,&local_130);
  puVar7 = puVar4;
  _swift_isUniquelyReferenced_nonNull_native(puVar4);
  local_160 = puVar4;
  FUN_1002e0c08(&local_130,0x776f50776f4c7369,0xee0065646f4d7265,puVar7);
  puVar4 = local_160;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_3 + 0x40);
  uVar10 = uVar10 + 0x3f >> 6;
  _swift_bridgeObjectRetain(param_3);
  lVar14 = 0;
LAB_1002ebb90:
  do {
    if (uVar15 == 0) {
      uVar15 = uVar10;
      if ((long)uVar10 <= lVar14 + 1) {
        uVar15 = lVar14 + 1;
      }
      lVar11 = uVar15 - 1;
      lVar13 = lVar14;
      do {
        lVar14 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ebe6c);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar14) {
          uVar15 = 0;
          puStack_148 = (undefined *)0x0;
          local_150 = 0;
          uStack_138 = 0;
          local_140 = 0;
          uStack_158 = 0;
          local_160 = (undefined *)0x0;
          goto LAB_1002ebc08;
        }
        uVar15 = ((ulong *)(param_3 + 0x40))[lVar14];
        lVar13 = lVar13 + 1;
      } while (uVar15 == 0);
    }
    uVar2 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar15 - 1 & uVar15;
    uVar9 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar14 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
    local_160 = (undefined *)*puVar1;
    uVar2 = puVar1[1];
    uStack_158 = uVar2;
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar9 * 0x20,&local_150);
    _swift_bridgeObjectRetain(uVar2);
    lVar11 = lVar14;
LAB_1002ebc08:
    uVar2 = uStack_158;
    puVar7 = local_160;
    uStack_128 = uStack_158;
    local_130 = local_160;
    puStack_118 = puStack_148;
    uStack_120 = local_150;
    uStack_108 = uStack_138;
    local_110 = local_140;
    if (uStack_158 == 0) {
      _swift_release(param_3);
      return puVar4;
    }
    FUN_100011080(&uStack_120,&local_160);
    FUN_10000cbfc(&local_160,&local_180);
    uStack_1b8 = uStack_178;
    local_1c0 = local_180;
    local_1a8 = lStack_168;
    uStack_1b0 = uStack_170;
    lVar14 = lVar11;
    if (lStack_168 == 0) {
      FUN_100005808(&local_1c0,&DAT_100fbd630,&DAT_100c3e8c0);
      _swift_bridgeObjectRetain(puVar4);
      uVar9 = uVar2;
      FUN_100071370();
      _swift_bridgeObjectRelease(puVar4);
      if ((uVar9 & 1) == 0) {
        FUN_100004594(&local_160);
        _swift_bridgeObjectRelease(uVar2);
        uStack_198 = 0;
        local_1a0 = 0;
        uStack_188 = 0;
        uStack_190 = 0;
      }
      else {
        puVar6 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        local_1c0 = puVar4;
        if ((int)puVar6 == 0) {
          FUN_1002f95c0();
        }
        puVar4 = local_1c0;
        _swift_bridgeObjectRelease
                  (*(undefined8 *)(*(long *)(local_1c0 + 0x30) + (long)puVar7 * 0x10 + 8));
        FUN_100011080(*(long *)(puVar4 + 0x38) + (long)puVar7 * 0x20,&local_1a0);
        FUN_1000d9d9c(puVar7,puVar4);
        _swift_bridgeObjectRelease(uVar2);
        FUN_100004594(&local_160);
      }
      FUN_100005808(&local_1a0,&DAT_100fbd630,&DAT_100c3e8c0);
      goto LAB_1002ebb90;
    }
    FUN_100011080(&local_1c0,&local_1a0);
    puVar6 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar7;
    uVar9 = uVar2;
    local_1c0 = puVar4;
    FUN_100071370();
    uVar12 = (ulong)~(uint)uVar9 & 1;
    lVar13 = *(long *)(puVar4 + 0x10) + uVar12;
    if (SCARRY8(*(long *)(puVar4 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ebe70);
      (*pcVar3)();
    }
    if (*(long *)(puVar4 + 0x18) < lVar13) {
      FUN_1002f9a98(lVar13,puVar6);
      puVar8 = puVar7;
      uVar12 = uVar2;
      FUN_100071370();
      if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ebe84);
        (*pcVar3)();
      }
LAB_1002ebd64:
      if ((uVar9 & 1) == 0) goto LAB_1002ebd6c;
LAB_1002ebb64:
      puVar4 = local_1c0;
      lVar13 = *(long *)(local_1c0 + 0x38) + (long)puVar8 * 0x20;
      FUN_100004594(lVar13);
      FUN_100011080(&local_1a0,lVar13);
      _swift_bridgeObjectRelease(uVar2);
      FUN_100004594(&local_160);
    }
    else {
      if (((ulong)puVar6 & 1) != 0) goto LAB_1002ebd64;
      FUN_1002f95c0();
      if ((uVar9 & 1) != 0) goto LAB_1002ebb64;
LAB_1002ebd6c:
      puVar4 = local_1c0;
      *(ulong *)(local_1c0 + ((ulong)puVar8 >> 6) * 8 + 0x40) =
           *(ulong *)(local_1c0 + ((ulong)puVar8 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar8 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(local_1c0 + 0x30) + (long)puVar8 * 0x10);
      *puVar1 = puVar7;
      puVar1[1] = uVar2;
      FUN_100011080(&local_1a0,*(long *)(local_1c0 + 0x38) + (long)puVar8 * 0x20);
      FUN_100004594(&local_160);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002ebe74);
        (*pcVar3)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
    }
  } while( true );
}



/* Address: 0x1002ebe84 | FUN_1002ebe84 */

Set<undefined> FUN_1002ebe84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long minimumCapacity;
  undefined8 *puVar3;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined *local_48;
  
  minimumCapacity = *(long *)(param_1 + 0x10);
  local_48 = (undefined *)Swift::Set::init(minimumCapacity);
  if (minimumCapacity != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar3[-1];
      uVar2 = *puVar3;
      _swift_bridgeObjectRetain(uVar2);
      FUN_1002db610(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar3 = puVar3 + 2;
      minimumCapacity = minimumCapacity + -1;
    } while (minimumCapacity != 0);
  }
  return (Set<undefined>)local_48;
}



/* Address: 0x1002ebf18 | FUN_1002ebf18 */

void FUN_1002ebf18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd648 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3ecb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3ecb0,&DAT_100ec8df0);
  DAT_100fbd648 = pTVar1;
  return;
}



/* Address: 0x1002ebf58 | FUN_1002ebf58 */

void FUN_1002ebf58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002e6d3c(uVar1,uVar2);
  return;
}



/* Address: 0x1002ebfa8 | FUN_1002ebfa8 */

void FUN_1002ebfa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_1002eb18c(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1002ec008 | FUN_1002ec008 */

void FUN_1002ec008(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002ec02c | FUN_1002ec02c */

void FUN_1002ec02c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002ec058 | FUN_1002ec058 */

void FUN_1002ec058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002e243c(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x1002ec0d4 | FUN_1002ec0d4 */

void FUN_1002ec0d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002ec108 | FUN_1002ec108 */

void FUN_1002ec108(undefined8 param_1)

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
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_1002eb5a4(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1002ec19c | FUN_1002ec19c */

void FUN_1002ec19c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}


