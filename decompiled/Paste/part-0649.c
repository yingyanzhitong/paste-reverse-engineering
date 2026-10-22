/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006dfbfc | FUN_1006dfbfc */

uint FUN_1006dfbfc(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = (uint)*(byte *)(param_1 + 2);
  }
  return uVar1;
}



/* Address: 0x1006dfc14 | FUN_1006dfc14 */

void FUN_1006dfc14(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_2 = 2;
  }
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}



/* Address: 0x1006dfc2c | FUN_1006dfc2c */

void FUN_1006dfc2c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006dfc38 | FUN_1006dfc38 */

void FUN_1006dfc38(long param_1,uint param_2,long *param_3,void *param_4)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  void *pvVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    puVar19 = (undefined8 *)(param_1 + 0x38);
    plVar13 = param_3;
    do {
      uVar4 = puVar19[-3];
      uVar7 = puVar19[-2];
      pcVar5 = (char *)puVar19[-1];
      pvVar8 = (void *)*puVar19;
      lVar17 = *param_3;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar8);
      uVar11 = uVar4;
      uVar12 = uVar7;
      FUN_10046483c();
      lVar15 = *(long *)(lVar17 + 0x10);
      uVar16 = (ulong)~(uint)uVar12 & 1;
      lVar18 = lVar15 + uVar16;
      if (SCARRY8(lVar15,uVar16)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006dfe14);
        (*pcVar9)();
      }
      if (*(long *)(lVar17 + 0x18) < lVar18) {
        FUN_1006babdc(lVar18,param_2 & 1);
        uVar11 = uVar4;
        uVar16 = uVar7;
        FUN_10046483c();
        if (((uint)uVar12 & 1) != ((uint)uVar16 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006dfe28);
          (*pcVar9)();
        }
      }
      else if ((param_2 & 1) == 0) {
        FUN_1006ba224();
      }
      lVar15 = *param_3;
      lVar18 = uVar11 * 0x10;
      if ((uVar12 & 1) == 0) {
        lVar17 = lVar15 + (uVar11 >> 6) * 8;
        *(ulong *)(lVar17 + 0x40) = *(ulong *)(lVar17 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + lVar18);
        *puVar1 = uVar4;
        puVar1[1] = uVar7;
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar18);
        *puVar2 = pcVar5;
        puVar2[1] = pvVar8;
        if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006dfe18);
          (*pcVar9)();
        }
        *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
      }
      else {
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar18);
        uVar3 = *puVar2;
        uVar6 = puVar2[1];
        _swift_bridgeObjectRetain_n(uVar6,2);
        SVar20.bridgeObject = &SUB_e200000000000000;
        SVar20.str = (char *)0x202c;
        SVar22.bridgeObject = param_4;
        SVar22.str = (char *)plVar13;
        Swift::String::append(SVar20,SVar22);
        SVar21.bridgeObject = pvVar8;
        SVar21.str = pcVar5;
        SVar23.bridgeObject = param_4;
        SVar23.str = (char *)plVar13;
        Swift::String::append(SVar21,SVar23);
        _swift_bridgeObjectRelease(pvVar8);
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(uVar7);
        puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar18);
        uVar10 = puVar2[1];
        *puVar2 = uVar3;
        puVar2[1] = uVar6;
        _swift_bridgeObjectRelease(uVar10);
      }
      puVar19 = puVar19 + 4;
      param_2 = 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



/* Address: 0x1006dfe28 | thunk_FUN_1006dfbb8 */

void thunk_FUN_1006dfbb8(void)

{
  FUN_1006dfbb8();
  return;
}



/* Address: 0x1006dfe2c | thunk_FUN_1002d7300 */

void thunk_FUN_1002d7300(void)

{
  FUN_1002d7300();
  return;
}



/* Address: 0x1006dfe30 | thunk_FUN_1006dfb54 */

void thunk_FUN_1006dfb54(undefined8 *param_1)

{
  FUN_1006df838(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1006dfe34 | thunk_FUN_1006dfb68 */

void thunk_FUN_1006dfb68(void)

{
  thunk_FUN_1006dfb68();
  return;
}



/* Address: 0x1006dfe38 | thunk_FUN_1002d72b8 */

void thunk_FUN_1002d72b8(void)

{
  FUN_1002d72b8();
  return;
}



/* Address: 0x1006dfe3c | thunk_FUN_1006dfb04 */

void thunk_FUN_1006dfb04(void)

{
  FUN_1006dfb04();
  return;
}



/* Address: 0x1006dfe40 | FUN_1006dfe40 */

long FUN_1006dfe40(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  pthread_mutexattr_t local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1006dff84();
  _swift_allocObject();
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c2bd4();
  puVar4 = &DAT_100fdd628;
  FUN_1000f7830(&DAT_100fdd628,&DAT_100c71f30);
  _swift_allocObject();
  *(undefined **)(puVar4 + 0x10) = puVar3;
  local_48.__sig = 0;
  local_48.__opaque[0] = '\0';
  local_48.__opaque[1] = '\0';
  local_48.__opaque[2] = '\0';
  local_48.__opaque[3] = '\0';
  local_48.__opaque[4] = '\0';
  local_48.__opaque[5] = '\0';
  local_48.__opaque[6] = '\0';
  local_48.__opaque[7] = '\0';
  _swift_bridgeObjectRetain(puVar3);
  _pthread_mutexattr_init(&local_48);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x18),&local_48);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dff7c);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(puVar3);
  *(undefined **)(param_1 + 0x10) = puVar4;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c2cd0();
  puVar4 = &DAT_100fdd630;
  FUN_1000f7830(&DAT_100fdd630,&DAT_100c71f38);
  _swift_allocObject();
  *(undefined **)(puVar4 + 0x10) = puVar3;
  local_48.__sig = 0;
  local_48.__opaque[0] = '\0';
  local_48.__opaque[1] = '\0';
  local_48.__opaque[2] = '\0';
  local_48.__opaque[3] = '\0';
  local_48.__opaque[4] = '\0';
  local_48.__opaque[5] = '\0';
  local_48.__opaque[6] = '\0';
  local_48.__opaque[7] = '\0';
  _swift_bridgeObjectRetain(puVar3);
  _pthread_mutexattr_init(&local_48);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x18),&local_48);
  if (iVar2 == 0) {
    _swift_bridgeObjectRelease(puVar3);
    *(undefined **)(param_1 + 0x18) = puVar4;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dff80);
  (*pcVar1)();
}



/* Address: 0x1006dff84 | FUN_1006dff84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006dff84(void)

{
  return ZEXT816(0x100fdd740);
}



/* Address: 0x1006dffa4 | FUN_1006dffa4 */

void FUN_1006dffa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  DispatchTime DVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_8;
  *(long *)(unaff_x22 + 0x2b0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x298) = param_4;
  *(undefined8 *)(unaff_x22 + 0x290) = param_3;
  *(undefined8 *)(unaff_x22 + 0x288) = param_2;
  *(undefined8 *)(unaff_x22 + 0x280) = param_1;
  lVar1 = 0;
  FUN_1009e1f14();
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x2c0) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x2c8) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2d0) = uVar2;
  lVar1 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0x2d8) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x2e0) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2e8) = uVar2;
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x2f0) = DVar3.unknown;
  lVar1 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x2f8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x300) = uVar2;
  _swift_task_switch(FUN_1006e0074,0,0);
  return;
}



/* Address: 0x1006e0074 | FUN_1006e0074 */

void FUN_1006e0074(DispatchTime param_1)

{
  code *pcVar1;
  int iVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x300);
  lVar10 = *(long *)(unaff_x22 + 0x2f8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2f0);
  lVar12 = *(long *)(unaff_x22 + 0x2a8);
  lVar14 = *(long *)(unaff_x22 + 0x288);
  DVar3 = Dispatch::DispatchTime::now(param_1);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  *(__uint64 *)(unaff_x22 + 0x308) = _Var4;
  (**(code **)(lVar10 + 8))(uVar9,uVar8);
  lVar10 = *(long *)(lVar14 + 0xb0);
  *(long *)(unaff_x22 + 0x310) = lVar10;
  uVar6 = *(ulong *)(lVar14 + 0xb8);
  *(ulong *)(unaff_x22 + 0x318) = uVar6;
  FUN_100867ea8();
  lVar12 = *(long *)(lVar12 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x18));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e0244);
    (*pcVar1)();
  }
  lVar14 = *(long *)(lVar12 + 0x10);
  if (*(long *)(lVar14 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar14);
    lVar13 = lVar10;
    uVar7 = uVar6;
    FUN_10046483c();
    if ((uVar7 & 1) != 0) {
      lVar13 = *(long *)(*(long *)(lVar14 + 0x38) + lVar13 * 8);
      _swift_retain(lVar13);
      goto LAB_1006e01a8;
    }
    _swift_bridgeObjectRelease(lVar14);
  }
  _swift_bridgeObjectRetain(uVar6);
  lVar13 = lVar10;
  FUN_1006e0cf0(lVar10,uVar6);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(lVar13);
  uVar8 = *(undefined8 *)(lVar12 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  uVar9 = *(undefined8 *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 0x10) = 0x8000000000000000;
  FUN_1006b9f34(lVar13,lVar10,uVar6,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  lVar14 = *(long *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 0x10) = uVar9;
LAB_1006e01a8:
  _swift_bridgeObjectRelease(lVar14);
  *(long *)(unaff_x22 + 800) = lVar13;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x18));
  _swift_bridgeObjectRelease(uVar6);
  if (iVar2 == 0) {
    piVar11 = *(int **)(unaff_x22 + 0x298);
    lVar10 = *(long *)(lVar13 + 0x18);
    _swift_getObjectType(*(undefined8 *)(lVar13 + 0x10));
    (**(code **)(lVar10 + 0x20))(0x3ff0000000000000);
    iVar2 = *piVar11;
    plVar5 = (long *)(ulong)(uint)piVar11[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x328) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1006e0248;
                    /* WARNING: Could not recover jumptable at 0x0001006e023c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar11))
              (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x288),
               *(undefined8 *)(unaff_x22 + 0x290));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e0248);
  (*pcVar1)();
}



/* Address: 0x1006e0248 | FUN_1006e0248 */

void FUN_1006e0248(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x330) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x328));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006e02ac;
  }
  else {
    pcVar1 = FUN_1006e0540;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e02ac | FUN_1006e02ac */

void FUN_1006e02ac(void)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  uVar10 = *(undefined8 *)(unaff_x22 + 800);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2e8);
  lVar17 = *(long *)(unaff_x22 + 0x2e0);
  lVar11 = *(long *)(unaff_x22 + 0x2d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x2d0);
  lVar18 = *(long *)(unaff_x22 + 0x2c8);
  lVar12 = *(long *)(unaff_x22 + 0x2c0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x288);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x280);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined1 *)(unaff_x22 + 0x220) = *(undefined1 *)(unaff_x22 + 0x50);
  *(undefined1 *)(unaff_x22 + 0x98) = *(undefined1 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2b0);
  (**(code **)(lVar11 + 0x10))(uVar4,*(undefined8 *)(unaff_x22 + 0x290),uVar21);
  FUN_1006e1254(uVar20,uVar14);
  bVar2 = *(byte *)(lVar11 + 0x50);
  uVar15 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar12 + 0x50);
  uVar13 = lVar17 + (ulong)bVar3 + uVar15 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  uVar19 = lVar18 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100ef9708;
  _swift_allocObject(&DAT_100ef9708,uVar19 + 0x28,bVar2 | bVar3 | 7);
  *(undefined8 *)(puVar5 + 0x18) = uVar23;
  *(undefined8 *)(puVar5 + 0x10) = uVar21;
  *(undefined8 *)(puVar5 + 0x20) = uVar16;
  (**(code **)(lVar11 + 0x20))(puVar5 + uVar15,uVar4,uVar21);
  FUN_1006e1514(uVar14,puVar5 + uVar13);
  puVar1 = (undefined8 *)(puVar5 + uVar19);
  *puVar1 = uVar22;
  puVar1[1] = uVar24;
  puVar1[2] = uVar9;
  *(undefined8 *)(puVar5 + uVar19 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + uVar19 + 0x20) = uVar10;
  _swift_bridgeObjectRetain();
  FUN_1006e1660(unaff_x22 + 0x200,unaff_x22 + 0x250);
  _swift_retain(uVar16);
  _swift_retain(uVar10);
  FUN_100a017e8(unaff_x22 + 0x228,&DAT_100c71f78,puVar5);
  _swift_release(puVar5);
  FUN_1006e169c(unaff_x22 + 0x200);
  FUN_1009ffcfc(unaff_x22 + 0x228);
  _swift_release(uVar10);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined1 *)(unaff_x22 + 0x128) = *(undefined1 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined1 *)(unaff_x22 + 0xe0) = *(undefined1 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1006be04c(unaff_x22 + 0xe8,unaff_x22 + 0x130);
  FUN_1006a4e98(unaff_x22 + 0xa0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xe8);
  puVar8[1] = *(undefined8 *)(unaff_x22 + 0xf0);
  *puVar8 = uVar22;
  uVar24 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(unaff_x22 + 0x128);
  puVar8[5] = uVar24;
  puVar8[4] = uVar22;
  puVar8[7] = uVar9;
  puVar8[6] = uVar6;
  puVar8[3] = uVar16;
  puVar8[2] = uVar10;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001006e053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e0540 | FUN_1006e0540 */

void FUN_1006e0540(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long unaff_x22;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  
  puVar1 = (undefined8 *)(unaff_x22 + 0x1d8);
  *(undefined8 *)(unaff_x22 + 0x278) = *(undefined8 *)(unaff_x22 + 0x330);
  _swift_errorRetain();
  puVar5 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar15 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  puVar6 = puVar1;
  _swift_dynamicCast(puVar1,unaff_x22 + 0x278,puVar5,puVar15,0xe);
  if ((int)puVar6 == 0) {
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
    *puVar1 = 0;
    *(undefined8 *)(unaff_x22 + 0x1f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
    FUN_1006bd670(puVar1);
    puVar14 = (undefined *)0x8000000100da87f0;
    lVar16 = -0x2fffffffffffffeb;
    uVar9 = 500;
    puVar15 = puVar5;
  }
  else {
    FUN_100076508(puVar1,unaff_x22 + 0x1b0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
    lVar16 = *(long *)(unaff_x22 + 0x1d0);
    FUN_100004640(unaff_x22 + 0x1b0,uVar9);
    (**(code **)(lVar16 + 0x18))();
    puVar15 = puVar5;
    FUN_100004594(unaff_x22 + 0x1b0);
    puVar14 = puVar5;
  }
  uVar17 = *(ulong *)(unaff_x22 + 0x318);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x310);
  puVar10 = *(undefined1 **)(unaff_x22 + 0x2b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2b0);
  lVar19 = *(long *)(unaff_x22 + 0x2a8);
  FUN_1006fb2a4();
  uVar13 = 0x646e756f46746f4e;
  if (puVar10 != (undefined1 *)0x0) {
    uVar13 = uVar7;
  }
  puVar2 = &DAT_e800000000000000;
  if (puVar10 != (undefined1 *)0x0) {
    puVar2 = puVar10;
  }
  FUN_100867ea8();
  *(undefined8 *)(unaff_x22 + 0x178) = uVar13;
  *(undefined1 **)(unaff_x22 + 0x180) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x188) = uVar18;
  *(ulong *)(unaff_x22 + 400) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x198) = uVar9;
  *(long *)(unaff_x22 + 0x1a0) = lVar16;
  *(undefined **)(unaff_x22 + 0x1a8) = puVar14;
  lVar16 = *(long *)(lVar19 + 0x18);
  uVar11 = uVar17;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006e08c0);
    (*pcVar3)();
  }
  lVar19 = *(long *)(lVar16 + 0x10);
  if (*(long *)(lVar19 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar19);
    lVar8 = unaff_x22 + 0x178;
    FUN_1006a32d4();
    if ((uVar11 & 1) != 0) {
      plVar12 = (long *)(*(long *)(lVar19 + 0x38) + lVar8 * 0x18);
      lVar8 = *plVar12;
      uVar11 = plVar12[1];
      puVar15 = (undefined *)plVar12[2];
      _swift_retain(lVar8);
      _swift_retain(uVar11);
      _swift_retain(puVar15);
      goto LAB_1006e07b8;
    }
    _swift_bridgeObjectRelease(lVar19);
  }
  _swift_bridgeObjectRetain(puVar2);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(puVar14);
  lVar8 = unaff_x22 + 0x178;
  FUN_1006e0e04();
  _swift_bridgeObjectRetain(puVar2);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(puVar14);
  _swift_retain(lVar8);
  _swift_retain(uVar11);
  _swift_retain(puVar15);
  uVar9 = *(undefined8 *)(lVar16 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar16 + 0x10);
  *(undefined8 *)(lVar16 + 0x10) = 0x8000000000000000;
  FUN_1006ba084(lVar8,uVar11,puVar15,unaff_x22 + 0x178,uVar9);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(puVar14);
  lVar19 = *(long *)(lVar16 + 0x10);
  *(undefined8 *)(lVar16 + 0x10) = uVar13;
LAB_1006e07b8:
  _swift_bridgeObjectRelease(lVar19);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x18));
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(puVar14);
  if (iVar4 == 0) {
    lVar19 = *(long *)(unaff_x22 + 800);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2e8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x2d0);
    uVar9 = *(undefined8 *)(lVar8 + 0x10);
    lVar16 = *(long *)(lVar8 + 0x18);
    _swift_getObjectType(uVar9);
    (**(code **)(lVar16 + 0x10))(1,uVar9,lVar16);
    uVar9 = *(undefined8 *)(puVar15 + 0x10);
    lVar16 = *(long *)(puVar15 + 0x18);
    _swift_getObjectType(uVar9);
    (**(code **)(lVar16 + 0x10))(1,uVar9,lVar16);
    lVar16 = *(long *)(lVar19 + 0x18);
    _swift_getObjectType(*(undefined8 *)(lVar19 + 0x10));
    (**(code **)(lVar16 + 0x28))(0x3ff0000000000000);
    _swift_willThrow();
    _swift_release(lVar19);
    _swift_release(lVar8);
    _swift_release(uVar11);
    _swift_release(puVar15);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001006e08b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006e08c4);
  (*pcVar3)();
}



/* Address: 0x1006e08c4 | FUN_1006e08c4 */

void FUN_1006e08c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  DispatchTime DVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_9;
  *(undefined8 *)(unaff_x22 + 0x90) = param_10;
  *(undefined8 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x80) = param_8;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = DVar1.unknown;
  lVar3 = *(long *)(DVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  _swift_task_switch(FUN_1006e0940,0,0);
  return;
}



/* Address: 0x1006e0940 | FUN_1006e0940 */

void FUN_1006e0940(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  DispatchTime DVar8;
  __uint64 _Var9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar10 = *(undefined1 **)(unaff_x22 + 0x90);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar18 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar14 = *(long *)(unaff_x22 + 0x48);
  FUN_1006fb2a4();
  uVar6 = *(undefined8 *)(lVar18 + 0xb0);
  uVar11 = *(ulong *)(lVar18 + 0xb8);
  FUN_100867ea8();
  uVar15 = 0x6e776f6e6b6e55;
  if (puVar10 != (undefined1 *)0x0) {
    uVar15 = uVar13;
  }
  puVar1 = &DAT_e700000000000000;
  if (puVar10 != (undefined1 *)0x0) {
    puVar1 = puVar10;
  }
  puVar17 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar17 = uVar15;
  *(undefined1 **)(unaff_x22 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(ulong *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  lVar18 = *(long *)(lVar14 + 0x18);
  uVar12 = uVar11;
  _swift_bridgeObjectRetain(uVar2);
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar18 + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006e0c14);
    (*pcVar4)();
  }
  lVar14 = *(long *)(lVar18 + 0x10);
  if (*(long *)(lVar14 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar14);
    puVar7 = puVar17;
    FUN_1006a32d4();
    if ((uVar12 & 1) != 0) {
      puVar17 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)puVar7 * 0x18);
      puVar7 = (undefined8 *)*puVar17;
      uVar12 = puVar17[1];
      param_3 = puVar17[2];
      _swift_retain(puVar7);
      _swift_retain(uVar12);
      _swift_retain(param_3);
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_1006e0af4;
    }
    _swift_bridgeObjectRelease(lVar14);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_bridgeObjectRetain(puVar1);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar16);
  puVar7 = puVar17;
  FUN_1006e0e04();
  _swift_bridgeObjectRetain(puVar1);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(puVar7);
  _swift_retain(uVar12);
  _swift_retain(param_3);
  uVar15 = *(undefined8 *)(lVar18 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar15);
  uVar13 = *(undefined8 *)(lVar18 + 0x10);
  *(undefined8 *)(lVar18 + 0x10) = 0x8000000000000000;
  FUN_1006ba084(puVar7,uVar12,param_3,puVar17,uVar15);
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar16);
  *(undefined8 *)(lVar18 + 0x10) = uVar13;
LAB_1006e0af4:
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar18 + 0x18));
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(uVar11);
  _swift_bridgeObjectRelease(uVar15);
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006e0c18);
    (*pcVar4)();
  }
  lVar18 = *(long *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar19 = *(ulong *)(unaff_x22 + 0x78);
  uVar15 = puVar7[2];
  lVar14 = puVar7[3];
  _swift_getObjectType(uVar15);
  DVar8.unknown = &DAT_00000001;
  (**(code **)(lVar14 + 0x10))(1,uVar15,lVar14);
  DVar8 = Dispatch::DispatchTime::now(DVar8);
  _Var9 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar8);
  (**(code **)(lVar18 + 8))(uVar13,uVar16);
  uVar11 = _Var9 - uVar19;
  if (uVar19 <= _Var9) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar18 = *(long *)(unaff_x22 + 0x80);
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar13 = *(undefined8 *)(uVar12 + 0x10);
    lVar14 = *(long *)(uVar12 + 0x18);
    _swift_getObjectType(uVar13);
    (**(code **)(lVar14 + 0x10))(uVar11,uVar13,lVar14);
    lVar14 = *(long *)(lVar18 + 0x18);
    _swift_getObjectType(*(undefined8 *)(lVar18 + 0x10));
    (**(code **)(lVar14 + 0x28))(0x3ff0000000000000);
    _swift_release(puVar7);
    _swift_release(uVar12);
    _swift_release(param_3);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001006e0c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006e0c1c);
  (*pcVar4)();
}



/* Address: 0x1006e0c1c | FUN_1006e0c1c */

void FUN_1006e0c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar3 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = *(undefined8 *)(param_6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x340;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006d6040;
  FUN_1006dffa4(plVar1,unaff_x22 + 0x40,param_2,param_3,&DAT_100c72110,unaff_x22 + 0x10,uVar2,uVar3,
                uVar4);
  return;
}



/* Address: 0x1006e0cc4 | FUN_1006e0cc4 */

void FUN_1006e0cc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006e0cf0 | FUN_1006e0cf0 */

long FUN_1006e0cf0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  uVar4 = 0x8000000100db0db0;
  puVar1 = &DAT_100fdc558;
  FUN_1000f7830(&DAT_100fdc558,&DAT_100c70c48);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(puVar1 + 0x28) = 0x8000000100db0d30;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  FUN_100a36fb8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  uVar2 = 0xd00000000000001b;
  (**(code **)(lStack_48 + 0x20))(0xd00000000000001b,0x8000000100db0db0,puVar1,local_50,lStack_48);
  lVar3 = 0;
  FUN_100a3d71c();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x48) = 0xd00000000000001b;
  *(undefined8 *)(lVar3 + 0x50) = 0x8000000100db0db0;
  *(undefined **)(lVar3 + 0x58) = puVar1;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  FUN_100076508(auStack_68,lVar3 + 0x20);
  return lVar3;
}



/* Address: 0x1006e0e04 | FUN_1006e0e04 */

long FUN_1006e0e04(undefined8 *param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  String SVar13;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar2 = &DAT_100fdc558;
  FUN_1000f7830(&DAT_100fdc558,&DAT_100c70c48);
  puVar3 = puVar2;
  _swift_allocObject();
  uStack_78 = param_1[1];
  local_80 = *param_1;
  uStack_98 = param_1[3];
  local_a0 = param_1[2];
  *(undefined8 *)(puVar3 + 0x38) = uStack_78;
  *(undefined8 *)(puVar3 + 0x30) = local_80;
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined8 *)(puVar3 + 0x20) = 0x756f722e70747468;
  *(undefined8 *)(puVar3 + 0x28) = 0xea00000000006574;
  *(undefined8 *)(puVar3 + 0x40) = 0xd000000000000013;
  *(undefined8 *)(puVar3 + 0x48) = 0x8000000100db0d30;
  *(undefined8 *)(puVar3 + 0x58) = uStack_98;
  *(undefined8 *)(puVar3 + 0x50) = local_a0;
  *(undefined8 *)(puVar3 + 0x60) = 0xd000000000000019;
  *(undefined8 *)(puVar3 + 0x68) = 0x8000000100db0d50;
  uVar8 = param_1[4];
  local_a8 = uVar8;
  local_90 = local_a0;
  uStack_88 = uStack_98;
  FUN_10000ca28(&local_80,auStack_d0);
  FUN_1006e17d0(&local_a0,auStack_d0);
  FUN_1006cb580();
  SVar13 = (extension_Swift)::Swift::BinaryInteger::get_description();
  *(String *)(puVar3 + 0x70) = SVar13;
  FUN_100a36fb8(auStack_d0);
  lVar7 = lStack_b0;
  uVar9 = local_b8;
  FUN_100004640(auStack_d0,local_b8);
  uVar10 = 0x65757165722e6268;
  uVar12 = 0xeb00000000737473;
  (**(code **)(lVar7 + 0x10))(0x65757165722e6268,0xeb00000000737473,puVar3,uVar9,lVar7);
  lVar4 = 0;
  FUN_100a3d6bc();
  lVar5 = lVar4;
  _swift_allocObject();
  *(undefined8 *)(lVar5 + 0x48) = 0x65757165722e6268;
  *(undefined8 *)(lVar5 + 0x50) = 0xeb00000000737473;
  *(undefined **)(lVar5 + 0x58) = puVar3;
  *(undefined8 *)(lVar5 + 0x10) = uVar10;
  *(undefined8 *)(lVar5 + 0x18) = uVar12;
  FUN_100076508(auStack_d0,lVar5 + 0x20);
  lVar11 = -0x7ffffffeff24f290;
  puVar3 = puVar2;
  _swift_allocObject(puVar2,0x80,7);
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined8 *)(puVar3 + 0x20) = 0x756f722e70747468;
  *(undefined8 *)(puVar3 + 0x28) = 0xea00000000006574;
  *(undefined8 *)(puVar3 + 0x38) = uStack_78;
  *(undefined8 *)(puVar3 + 0x30) = local_80;
  *(undefined8 *)(puVar3 + 0x40) = 0xd000000000000013;
  *(undefined8 *)(puVar3 + 0x48) = 0x8000000100db0d30;
  *(undefined8 *)(puVar3 + 0x58) = uStack_88;
  *(undefined8 *)(puVar3 + 0x50) = local_90;
  *(undefined8 *)(puVar3 + 0x60) = 0xd000000000000019;
  *(undefined8 *)(puVar3 + 0x68) = 0x8000000100db0d50;
  local_a8 = uVar8;
  FUN_10000ca28(&local_80,auStack_d0);
  FUN_1006e17d0(&local_a0,auStack_d0);
  SVar13 = (extension_Swift)::Swift::BinaryInteger::get_description();
  pcVar6 = SVar13.str;
  *(String *)(puVar3 + 0x70) = SVar13;
  FUN_100a38790();
  uVar12 = *(undefined8 *)(pcVar6 + 8);
  cVar1 = *pcVar6;
  FUN_100a36fb8(auStack_d0);
  lVar7 = lStack_b0;
  uVar10 = local_b8;
  FUN_100004640(auStack_d0,local_b8);
  uVar9 = 0xd00000000000001c;
  (**(code **)(lVar7 + 0x30))(0xd00000000000001c,0x8000000100db0d70,puVar3,uVar10,lVar7);
  uVar10 = uVar9;
  _swift_getObjectType();
  (**(code **)(lVar11 + 0x18))(cVar1,uVar12,uVar10,lVar11);
  lVar7 = 0;
  FUN_100a3d7fc();
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x48) = 0xd00000000000001c;
  *(undefined8 *)(lVar7 + 0x50) = 0x8000000100db0d70;
  *(undefined **)(lVar7 + 0x58) = puVar3;
  *(undefined8 *)(lVar7 + 0x10) = uVar9;
  *(long *)(lVar7 + 0x18) = lVar11;
  FUN_100076508(auStack_d0,lVar7 + 0x20);
  uVar10 = 0x8000000100db0d90;
  _swift_allocObject(puVar2,0x80,7);
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined8 *)(puVar2 + 0x20) = 0x756f722e70747468;
  *(undefined8 *)(puVar2 + 0x28) = 0xea00000000006574;
  *(undefined8 *)(puVar2 + 0x38) = uStack_78;
  *(undefined8 *)(puVar2 + 0x30) = local_80;
  *(undefined8 *)(puVar2 + 0x40) = 0xd000000000000013;
  *(undefined8 *)(puVar2 + 0x48) = 0x8000000100db0d30;
  *(undefined8 *)(puVar2 + 0x58) = uStack_88;
  *(undefined8 *)(puVar2 + 0x50) = local_90;
  *(undefined8 *)(puVar2 + 0x60) = 0x79742e726f727265;
  *(undefined8 *)(puVar2 + 0x68) = 0xea00000000006570;
  local_a8 = uVar8;
  FUN_10000ca28(&local_80,auStack_d0);
  FUN_1006e17d0(&local_a0,auStack_d0);
  SVar13 = (extension_Swift)::Swift::BinaryInteger::get_description();
  FUN_1006e180c(param_1);
  *(String *)(puVar2 + 0x70) = SVar13;
  FUN_100a36fb8(auStack_d0);
  FUN_100004640(auStack_d0,local_b8);
  uVar9 = 0xd000000000000011;
  (**(code **)(lStack_b0 + 0x10))(0xd000000000000011,0x8000000100db0d90,puVar2,local_b8,lStack_b0);
  _swift_allocObject(lVar4,0x60,7);
  *(undefined8 *)(lVar4 + 0x48) = 0xd000000000000011;
  *(undefined8 *)(lVar4 + 0x50) = 0x8000000100db0d90;
  *(undefined **)(lVar4 + 0x58) = puVar2;
  *(undefined8 *)(lVar4 + 0x10) = uVar9;
  *(undefined8 *)(lVar4 + 0x18) = uVar10;
  FUN_100076508(auStack_d0,lVar4 + 0x20);
  return lVar5;
}



/* Address: 0x1006e1254 | FUN_1006e1254 */

undefined8 FUN_1006e1254(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009e1f14();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006e1298 | FUN_1006e1298 */

void FUN_1006e1298(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar12 = *(long *)(lVar8 + -8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50) + 0x28 &
           ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff);
  lVar11 = *(long *)(lVar12 + 0x40);
  lVar2 = 0;
  FUN_1009e1f14();
  lVar10 = *(long *)(lVar2 + -8);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar13 + lVar11 + uVar9 & (uVar9 ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar12 + 8))(unaff_x20 + uVar13,lVar8);
  lVar8 = unaff_x20 + uVar9;
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 0x90));
  _swift_release(*(undefined8 *)(lVar8 + 0xb0));
  _swift_release(*(undefined8 *)(lVar8 + 0xb8));
  puVar7 = (undefined8 *)(lVar8 + *(int *)(lVar2 + 0x18));
  uVar3 = 0;
  FUN_1009e8f94(0);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,uVar3);
  iVar1 = (int)puVar4;
  if (iVar1 == 2) {
    _swift_release(puVar7[1]);
    puVar5 = &DAT_100fdd650;
    puVar6 = &DAT_100c71f70;
LAB_1006e13e0:
    FUN_1000f7830(puVar5,puVar6);
    puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(puVar5 + 0x30));
    lVar8 = 0;
    FUN_1009e908c();
    puVar4 = puVar7;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(puVar7,1,lVar8);
    if ((int)puVar4 != 0) goto LAB_1006e14b4;
    puVar5 = &DAT_100fdd640;
    FUN_1000f7830(&DAT_100fdd640,&DAT_100c71f60);
    puVar4 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,puVar5);
    if ((int)puVar4 == 1) {
      _swift_release(*puVar7);
    }
    else {
      puVar5 = &DAT_100fdd648;
      FUN_1000f7830(&DAT_100fdd648,&DAT_100c71f68);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(puVar7,puVar5);
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_1006e14b4;
      _swift_release(*puVar7);
      puVar5 = &DAT_100fdd638;
      puVar6 = &DAT_100c71f58;
      goto LAB_1006e13e0;
    }
    puVar5 = &DAT_100fdd640;
    FUN_1000f7830(&DAT_100fdd640,&DAT_100c71f60);
    puVar4 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,puVar5);
    if ((int)puVar4 == 1) {
      _swift_release(*puVar7);
    }
    else {
      puVar5 = &DAT_100fdd648;
      FUN_1000f7830(&DAT_100fdd648,&DAT_100c71f68);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(puVar7,puVar5);
    }
    lVar8 = 0;
    FUN_1009e908c();
  }
  _swift_release(*(undefined8 *)((long)puVar7 + (long)*(int *)(lVar8 + 0x14)));
LAB_1006e14b4:
  uVar9 = uVar9 + *(long *)(lVar10 + 0x40) + 7 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar9 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar9 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006e1514 | FUN_1006e1514 */

undefined8 FUN_1006e1514(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009e1f14();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006e1558 | FUN_1006e1558 */

void FUN_1006e1558(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(lVar2 + -8);
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar15 = uVar8 + 0x28 & (uVar8 ^ 0xffffffffffffffff);
  lVar10 = *(long *)(lVar7 + 0x40);
  lVar7 = 0;
  FUN_1009e1f14();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar11 = uVar15 + lVar10 + uVar8 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar8);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = *(undefined8 *)(unaff_x20 + uVar8 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + uVar8 + 0x20);
  plVar6 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005c804c;
  FUN_1006e08c4(uVar9,unaff_x20 + uVar15,unaff_x20 + uVar11,uVar3,uVar5,uVar12,uVar13,uVar14,lVar2,
                uVar4);
  return;
}



/* Address: 0x1006e1660 | FUN_1006e1660 */

undefined8 FUN_1006e1660(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100a01c8c(param_2,param_1);
  return param_2;
}



/* Address: 0x1006e169c | FUN_1006e169c */

undefined8 FUN_1006e169c(undefined8 param_1)

{
  thunk_FUN_100a01c74();
  return param_1;
}



/* Address: 0x1006e16d0 | FUN_1006e16d0 */

void FUN_1006e16d0(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71fa8;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006e16fc | FUN_1006e16fc */

void FUN_1006e16fc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e1708 | FUN_1006e1708 */

undefined1  [16] FUN_1006e1708(void)

{
  return ZEXT816(0x100ef9798);
}



/* Address: 0x1006e1718 | FUN_1006e1718 */

undefined1  [16] FUN_1006e1718(void)

{
  return ZEXT816(0x100ef9820);
}



/* Address: 0x1006e1728 | FUN_1006e1728 */

undefined1  [16] FUN_1006e1728(void)

{
  return ZEXT816(0x100ef9850);
}



/* Address: 0x1006e1738 | FUN_1006e1738 */

undefined1  [16] FUN_1006e1738(void)

{
  return ZEXT816(0x100ef98d0);
}



/* Address: 0x1006e1748 | thunk_FUN_1006e174c */

void thunk_FUN_1006e174c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdd7a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72040,&DAT_100ef98d0);
  DAT_100fdd7a8 = pTVar1;
  return;
}



/* Address: 0x1006e174c | FUN_1006e174c */

void FUN_1006e174c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdd7a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72040,&DAT_100ef98d0);
  DAT_100fdd7a8 = pTVar1;
  return;
}



/* Address: 0x1006e178c | thunk_FUN_1006e1790 */

void thunk_FUN_1006e1790(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdd7b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c720a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c720a8,&DAT_100ef9820);
  DAT_100fdd7b0 = pTVar1;
  return;
}



/* Address: 0x1006e1790 | FUN_1006e1790 */

void FUN_1006e1790(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdd7b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c720a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c720a8,&DAT_100ef9820);
  DAT_100fdd7b0 = pTVar1;
  return;
}



/* Address: 0x1006e17d0 | FUN_1006e17d0 */

undefined8 FUN_1006e17d0(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x1006e180c | FUN_1006e180c */

undefined8 FUN_1006e180c(undefined8 param_1)

{
  FUN_1002aa0fc(param_1,&DAT_100ef9820);
  return param_1;
}



/* Address: 0x1006e1838 | thunk_FUN_1002d1568 */

void thunk_FUN_1002d1568(void)

{
  thunk_FUN_1002d1568();
  return;
}



/* Address: 0x1006e183c | FUN_1006e183c */

void FUN_1006e183c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006e1848 | FUN_1006e1848 */

void FUN_1006e1848(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = 0xff;
  FUN_1009e1f14(0xff);
  _swift_getFunctionTypeMetadata2(0x65000002,uVar1,uVar2,&DAT_100f277d8);
  return;
}



/* Address: 0x1006e1884 | FUN_1006e1884 */

void FUN_1006e1884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_1006e18a4,0,0);
  return;
}



/* Address: 0x1006e18a4 | FUN_1006e18a4 */

void FUN_1006e18a4(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,uVar3);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(lVar2 + 0x10);
  *(long *)(unaff_x22 + 0x28) = lVar4;
  piVar7 = *(int **)(lVar5 + 0x20);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1006e1954;
                    /* WARNING: Could not recover jumptable at 0x0001006e1950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar6,unaff_x22 + 0x30,*(undefined8 *)(unaff_x22 + 0x80),
             *(undefined8 *)(unaff_x22 + 0x88),&UNK_100c72238,unaff_x22 + 0x10,uVar3,lVar5);
  return;
}



/* Address: 0x1006e1954 | FUN_1006e1954 */

void FUN_1006e1954(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006e19b8;
  }
  else {
    pcVar1 = FUN_1006e19e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006e19b8 | FUN_1006e19b8 */

void FUN_1006e19b8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x38);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x22 + 0x70);
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001006e19e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e19e8 | FUN_1006e19e8 */

void FUN_1006e19e8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001006e19f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e19f4 | FUN_1006e19f4 */

void FUN_1006e19f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  _swift_task_switch(FUN_1006e1a10,0,0);
  return;
}



/* Address: 0x1006e1a10 | FUN_1006e1a10 */

void FUN_1006e1a10(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x70) + 0x28);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006e1a7c;
                    /* WARNING: Could not recover jumptable at 0x0001006e1a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))
            (plVar3,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1006e1a7c | FUN_1006e1a7c */

void FUN_1006e1a7c(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x78));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006e1ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_1006e1ae4,0,0);
  return;
}



/* Address: 0x1006e1ae4 | FUN_1006e1ae4 */

void FUN_1006e1ae4(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x22 + 0x50);
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  puVar1[7] = uVar7;
  puVar1[6] = uVar6;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001006e1b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006e1b14 | FUN_1006e1b14 */

void FUN_1006e1b14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100076508(param_2,param_1);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  return;
}



/* Address: 0x1006e1b4c | FUN_1006e1b4c */

void FUN_1006e1b4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006da9d8;
  FUN_1006e1884(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4);
  return;
}



/* Address: 0x1006e1bc4 | FUN_1006e1bc4 */

void FUN_1006e1bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1006e19f4(plVar3,param_1,param_2,param_3,uVar2,uVar1);
  return;
}



/* Address: 0x1006e1c48 | FUN_1006e1c48 */

void FUN_1006e1c48(void)

{
  FUN_1006e1f74();
  _swift_retain();
  return;
}



/* Address: 0x1006e1c5c | FUN_1006e1c5c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006e1ce4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006e1c5c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  __int64 _Var4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  __int64 _Var11;
  undefined *local_c8 [3];
  undefined8 local_b0;
  TargetProtocolConformanceDescriptor *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  lVar8 = *unaff_x20;
  FUN_100076688(param_2,param_1);
  _swift_beginAccess(unaff_x20 + 2,auStack_68,0,0);
  lVar10 = unaff_x20[2];
  uVar2 = 0xff;
  FUN_1009e1f14();
  uVar9 = *(undefined8 *)(lVar8 + 0x50);
  _swift_bridgeObjectRetain(lVar10);
  puStack_98 = &DAT_100f277d8;
  puVar3 = &DAT_100c721b0;
  local_a0 = uVar2;
  local_90 = uVar9;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c721b0,&local_a0);
  _Var4 = Swift::Array<undefined>::get_count(puVar3,puVar3);
  _swift_bridgeObjectRelease(lVar10);
  if (_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e1e00);
    (*pcVar1)();
  }
  if (_Var4 != 0) {
    _Var11 = _Var4;
    do {
      if (_Var4 < _Var11) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006e1dfc);
        (*pcVar1)();
      }
      _Var11 = _Var11 + -1;
      _swift_beginAccess(unaff_x20 + 2,&local_a0,0x20,0);
      Swift::Array<undefined>::get_subscript(local_c8,_Var11,unaff_x20[2],puVar3);
      _swift_endAccess(&local_a0);
      uVar2 = param_1;
      uVar7 = uVar9;
      FUN_1006e1e00(param_1,uVar9);
      FUN_1006e1b14(&local_a0,local_c8,uVar2,uVar7,uVar9);
      uVar2 = 0;
      FUN_1006e183c(0,uVar9);
      pTVar5 = &TargetProtocolConformanceDescriptor_100c72208;
      local_b0 = uVar2;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72208,uVar2);
      puVar6 = &DAT_100ef99b0;
      local_a8 = pTVar5;
      _swift_allocObject(&DAT_100ef99b0,0x48,7);
      *(undefined **)(puVar6 + 0x18) = puStack_98;
      *(undefined8 *)(puVar6 + 0x10) = local_a0;
      *(undefined8 *)(puVar6 + 0x28) = uStack_88;
      *(undefined8 *)(puVar6 + 0x20) = local_90;
      *(undefined8 *)(puVar6 + 0x38) = uStack_78;
      *(undefined8 *)(puVar6 + 0x30) = local_80;
      *(undefined8 *)(puVar6 + 0x40) = local_70;
      local_c8[0] = puVar6;
      FUN_100004594(param_1);
      FUN_100076508(local_c8,param_1);
    } while (_Var11 != 0);
  }
  return;
}



/* Address: 0x1006e1e00 | FUN_1006e1e00 */

undefined1  [16] FUN_1006e1e00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_48 [40];
  
  FUN_100076688(param_1,auStack_48);
  puVar1 = &DAT_100ef9ab8;
  _swift_allocObject(&DAT_100ef9ab8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  FUN_100076508(auStack_48,puVar1 + 0x18);
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = &DAT_100c72270;
  return auVar2;
}



/* Address: 0x1006e1e60 | FUN_1006e1e60 */

void FUN_1006e1e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  _swift_task_switch(FUN_1006e1e7c,0,0);
  return;
}



/* Address: 0x1006e1e7c | FUN_1006e1e7c */

void FUN_1006e1e7c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  FUN_100004640(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1006e1f08;
                    /* WARNING: Could not recover jumptable at 0x0001006e1f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x60),
             *(undefined8 *)(unaff_x22 + 0x68),uVar2,lVar3);
  return;
}



/* Address: 0x1006e1f08 | FUN_1006e1f08 */

void FUN_1006e1f08(void)

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
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x58);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x50);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006e1f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006e1f74 | FUN_1006e1f74 */

void FUN_1006e1f74(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [40];
  
  lVar2 = *unaff_x20;
  FUN_100076688(param_1,auStack_58);
  _swift_beginAccess(unaff_x20 + 2,auStack_70,0x21,0);
  uVar1 = 0xff;
  FUN_1009e1f14();
  local_78 = *(undefined8 *)(lVar2 + 0x50);
  puStack_80 = &DAT_100f277d8;
  local_88 = uVar1;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c721b0,&local_88);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(auStack_58,uVar1);
  _swift_endAccess(auStack_70);
  return;
}



/* Address: 0x1006e2010 | FUN_1006e2010 */

void FUN_1006e2010(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}


