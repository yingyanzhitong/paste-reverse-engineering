/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008ff6bc | thunk_FUN_1005dbf20 */

void thunk_FUN_1005dbf20(void)

{
  FUN_1005dbf20();
  return;
}



/* Address: 0x1008ff6c0 | thunk_FUN_1008fa3dc */

void thunk_FUN_1008fa3dc(void)

{
  long unaff_x20;
  
  FUN_10064c1b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008ff6c4 | thunk_FUN_1008fd8bc */

void thunk_FUN_1008fd8bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))
            (*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),&PTR_PTR_100f0f5c8)
  ;
  return;
}



/* Address: 0x1008ff6c8 | thunk_FUN_1008fa090 */

void thunk_FUN_1008fa090(void)

{
  long unaff_x20;
  
  FUN_1008f1f44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008ff6cc | thunk_FUN_1008fcb60 */

void thunk_FUN_1008fcb60(void)

{
  long unaff_x20;
  
  thunk_FUN_10092b7e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008ff6d0 | thunk_FUN_1008fa6c8 */

void thunk_FUN_1008fa6c8(void)

{
  long unaff_x20;
  
  FUN_1008ede54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008ff6d4 | thunk_FUN_1008fdfd4 */

void thunk_FUN_1008fdfd4(void)

{
  long unaff_x20;
  
  FUN_100906f34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008ff6d8 | FUN_1008ff6d8 */

void FUN_1008ff6d8(void)

{
  FUN_100134584(&DAT_100fec4e0,&DAT_100fec4e8,&DAT_100c83ba0,
                PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0);
  return;
}



/* Address: 0x1008ff70c | FUN_1008ff70c */

void FUN_1008ff70c(long *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar4 = 0;
  if (unaff_x20[1] != 0) {
    lVar4 = unaff_x20[2] - unaff_x20[1];
  }
  if (lVar1 != 0) {
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar4 / lVar1;
    }
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ff730);
  (*pcVar3)();
}



/* Address: 0x1008ff730 | FUN_1008ff730 */

undefined1  [16] FUN_1008ff730(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  
  lVar3 = *param_2;
  lVar5 = *unaff_x20;
  lVar2 = lVar3 * lVar5;
  if (SUB168(SEXT816(lVar3) * SEXT816(lVar5),8) != lVar2 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ff7a0);
    (*pcVar1)();
  }
  if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ff7a4);
    (*pcVar1)();
  }
  lVar4 = (lVar3 + 1) * lVar5;
  if (SUB168(SEXT816(lVar3 + 1) * SEXT816(lVar5),8) != lVar4 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ff7a8);
    (*pcVar1)();
  }
  if (lVar2 <= lVar4) {
    lVar3 = unaff_x20[1];
    if (lVar3 == 0) {
      lVar3 = 0;
      lVar2 = 0;
    }
    else {
      lVar2 = lVar3 + lVar2;
      lVar3 = lVar3 + lVar4;
    }
    *param_1 = lVar2;
    param_1[1] = lVar3;
    auVar6._8_8_ = param_1;
    auVar6._0_8_ = FUN_100004520;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ff7ac);
  (*pcVar1)();
}



/* Address: 0x1008ff7ac | FUN_1008ff7ac */

void FUN_1008ff7ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1008ff7fc(&local_50,*param_2,param_2[1],*unaff_x20,unaff_x20[1],unaff_x20[2],
                *(undefined1 *)(unaff_x20 + 3));
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x1008ff7fc | FUN_1008ff7fc */

void FUN_1008ff7fc(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  byte param_7)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if (param_4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ff83c);
    (*pcVar3)();
  }
  lVar1 = 0;
  if (param_5 != 0) {
    lVar1 = param_6 - param_5;
  }
  lVar2 = 0;
  if (param_4 != 0) {
    lVar2 = lVar1 / param_4;
  }
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ff840);
    (*pcVar3)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ff844);
    (*pcVar3)();
  }
  if (param_3 <= lVar2) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[4] = param_6;
    *(byte *)(param_1 + 5) = param_7 & 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ff848);
  (*pcVar3)();
}



/* Address: 0x1008ff848 | FUN_1008ff848 */

void FUN_1008ff848(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long *unaff_x20;
  
  lVar6 = *unaff_x20;
  if (lVar6 != 0) {
    lVar2 = unaff_x20[1];
    lVar3 = unaff_x20[2];
    lVar1 = 0;
    if (lVar2 != 0) {
      lVar1 = lVar3 - lVar2;
    }
    lVar4 = unaff_x20[3];
    *param_1 = lVar6;
    param_1[1] = lVar2;
    param_1[2] = lVar3;
    *(char *)(param_1 + 3) = (char)lVar4;
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar1 / lVar6;
    }
    param_1[4] = 0;
    param_1[5] = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1008ff880);
  (*pcVar5)();
}



/* Address: 0x1008ff880 | FUN_1008ff880 */

bool FUN_1008ff880(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar4 = 0;
  if (unaff_x20[1] != 0) {
    lVar4 = unaff_x20[2] - unaff_x20[1];
  }
  if (lVar1 != 0) {
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar4 / lVar1;
    }
    return lVar2 == 0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ff8a8);
  (*pcVar3)();
}



/* Address: 0x1008ff8a8 | FUN_1008ff8a8 */

void FUN_1008ff8a8(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100901d3c(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x1008ff8d8 | FUN_1008ff8d8 */

undefined1 * FUN_1008ff8d8(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ff98c);
    (*pcVar1)();
  }
  do {
    if (param_2 == 0) {
LAB_1008ff958:
      if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return param_1;
    }
    if (param_1 == (undefined1 *)0x0) {
      if (param_3 != (undefined1 *)0x0) {
        uStack_68 = unaff_x20[1];
        local_70 = *unaff_x20;
        uStack_58 = unaff_x20[3];
        uStack_60 = unaff_x20[2];
        uStack_48 = unaff_x20[5];
        local_50 = unaff_x20[4];
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ff9a4);
        (*pcVar1)();
      }
LAB_1008ff950:
      param_1 = (undefined1 *)0x0;
      goto LAB_1008ff958;
    }
    if (param_1 == param_3) goto LAB_1008ff950;
    uStack_68 = unaff_x20[1];
    local_70 = *unaff_x20;
    uStack_58 = unaff_x20[3];
    uStack_60 = unaff_x20[2];
    uStack_48 = unaff_x20[5];
    local_50 = unaff_x20[4];
    puVar2 = &local_70;
    FUN_1006734d0(&local_70,param_1);
    param_2 = param_2 + -1;
    param_1 = (undefined1 *)puVar2;
  } while( true );
}



/* Address: 0x1008ff9a4 | FUN_1008ff9a4 */

long FUN_1008ff9a4(undefined8 *param_1,undefined1 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_1 != (undefined8 *)0x0) goto LAB_1008ffa20;
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ffa80);
      (*pcVar1)();
    }
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ffa74);
      (*pcVar1)();
    }
    if (param_1 != (undefined8 *)param_2) {
LAB_1008ffa20:
      lVar3 = 1;
      do {
        uStack_68 = unaff_x20[1];
        local_70 = *unaff_x20;
        uStack_58 = unaff_x20[3];
        uStack_60 = unaff_x20[2];
        uStack_48 = unaff_x20[5];
        local_50 = unaff_x20[4];
        if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ffa78);
          (*pcVar1)();
        }
        param_1 = &local_70;
        FUN_1006734d0();
        if (param_1 == (undefined8 *)0x0) {
          if (param_2 == (undefined1 *)0x0) goto LAB_1008ff9ec;
          param_1 = (undefined8 *)0x0;
        }
        else if (param_1 == (undefined8 *)param_2) goto LAB_1008ff9ec;
        bVar2 = SCARRY8(lVar3,1);
        lVar3 = lVar3 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ffa70);
          (*pcVar1)();
        }
      } while( true );
    }
  }
  lVar3 = 0;
LAB_1008ff9ec:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008ffa80 | FUN_1008ffa80 */

void FUN_1008ffa80(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar2 = unaff_x20[2];
  uVar1 = *(undefined1 *)(unaff_x20 + 3);
  uVar3 = *unaff_x20;
  param_1[1] = unaff_x20[1];
  *param_1 = uVar3;
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = uVar1;
  param_1[4] = 0;
  return;
}



/* Address: 0x1008ffaa0 | FUN_1008ffaa0 */

void FUN_1008ffaa0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008ffac0(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1008ffac0 | FUN_1008ffac0 */

void FUN_1008ffac0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ffae0);
    (*pcVar3)();
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 - param_2;
  }
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = lVar1 / param_1;
  }
  if (-1 < lVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ffae4);
  (*pcVar3)();
}



/* Address: 0x1008ffae4 | FUN_1008ffae4 */

undefined * FUN_1008ffae4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined auStack_68 [40];
  
  puVar1 = (undefined *)*unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  uVar3 = *(undefined1 *)(unaff_x20 + 3);
  puVar5 = puVar1;
  FUN_1008ffac0(puVar1,uVar2,uVar8,uVar3);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    FUN_100900944();
    puVar7 = auStack_68;
    FUN_1009011d4(puVar7,puVar6 + 0x20,puVar5,puVar1,uVar2,uVar8,uVar3);
    if (puVar7 != puVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008ffb5c);
      (*pcVar4)();
    }
  }
  return puVar6;
}



/* Address: 0x1008ffb80 | FUN_1008ffb80 */

void FUN_1008ffb80(void)

{
  FUN_1009011d4();
  return;
}



/* Address: 0x1008ffb90 | FUN_1008ffb90 */

undefined8 FUN_1008ffb90(long *param_1,long *param_2)

{
  if (*param_1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
  }
  else if (*param_1 != *param_2) {
    return 0;
  }
  return 1;
}



/* Address: 0x1008ffbb8 | FUN_1008ffbb8 */

bool FUN_1008ffbb8(ulong *param_1,long *param_2)

{
  if (*param_1 != 0) {
    return *param_1 <= *param_2 - 1U;
  }
  return false;
}



/* Address: 0x1008ffbdc | FUN_1008ffbdc */

bool FUN_1008ffbdc(long *param_1,ulong *param_2)

{
  if (*param_2 != 0) {
    return *param_1 - 1U < *param_2;
  }
  return true;
}



/* Address: 0x1008ffc00 | FUN_1008ffc00 */

bool FUN_1008ffc00(ulong *param_1,long *param_2)

{
  if (*param_1 != 0) {
    return *param_2 - 1U < *param_1;
  }
  return true;
}



/* Address: 0x1008ffc24 | FUN_1008ffc24 */

bool FUN_1008ffc24(long *param_1,ulong *param_2)

{
  if (*param_2 != 0) {
    return *param_2 <= *param_1 - 1U;
  }
  return false;
}



/* Address: 0x1008ffc48 | FUN_1008ffc48 */

void FUN_1008ffc48(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = *unaff_x20;
  local_50 = *(undefined4 *)(unaff_x20 + 1);
  local_48 = unaff_x20[2];
  local_40 = *(undefined4 *)(unaff_x20 + 3);
  local_38 = unaff_x20[4];
  local_30 = unaff_x20[5];
  puVar1 = &local_58;
  FUN_1006734a4();
  *param_1 = (long)puVar1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008ffcd4 | FUN_1008ffcd4 */

undefined1  [16]
FUN_1008ffcd4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  puVar2 = (undefined8 *)0x78;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x78);
  }
  else {
    _swift_coroFrameAlloc(0x78,0x1a4a);
  }
  *param_1 = puVar2;
  uVar4 = *param_2;
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  puVar2[1] = unaff_x20[1];
  *puVar2 = uVar5;
  puVar2[3] = uVar7;
  puVar2[2] = uVar6;
  uVar5 = unaff_x20[4];
  puVar2[5] = unaff_x20[5];
  puVar2[4] = uVar5;
  puVar3 = puVar2 + 6;
  FUN_1008ffd98();
  puVar2[0xe] = puVar3;
  uVar5 = *param_4;
  uVar1 = *(undefined1 *)(param_4 + 1);
  *(int *)(puVar2 + 10) = (int)uVar4;
  *(int *)((long)puVar2 + 0x54) = (int)((ulong)uVar4 >> 0x20);
  puVar2[0xb] = param_3;
  puVar2[0xc] = uVar5;
  *(undefined1 *)(puVar2 + 0xd) = uVar1;
  auVar8._8_8_ = puVar2 + 10;
  auVar8._0_8_ = FUN_1008ffd6c;
  return auVar8;
}



/* Address: 0x1008ffd6c | FUN_1008ffd6c */

void FUN_1008ffd6c(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x70))((long)pvVar1 + 0x30);
  _free(pvVar1);
  return;
}



/* Address: 0x1008ffd98 | FUN_1008ffd98 */

code * FUN_1008ffd98(long *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  uint *puVar4;
  long lVar5;
  
  if (param_2 == (uint *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ffe18);
    (*pcVar3)();
  }
  puVar4 = param_2;
  FUN_100673518();
  uVar2 = *param_2;
  lVar5 = 0;
  FUN_100673548();
  if (!SBORROW8((ulong)uVar2,lVar5)) {
    lVar1 = 0;
    if (puVar4 != (uint *)0x0) {
      lVar1 = (long)puVar4 + ((ulong)uVar2 - lVar5);
    }
    *param_1 = lVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    return FUN_100004520;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ffe14);
  (*pcVar3)();
}



/* Address: 0x1008ffe18 | FUN_1008ffe18 */

void FUN_1008ffe18(ulong *param_1,ulong *param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong local_98;
  undefined4 local_90;
  ulong local_88;
  undefined4 local_80;
  ulong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = (ulong *)*param_2;
  uVar3 = param_2[1];
  uVar9 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar10 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  uVar1 = *(undefined4 *)((long)unaff_x20 + 0x2c);
  puVar8 = &local_98;
  local_98 = uVar9;
  local_90 = (int)uVar4;
  local_88 = uVar10;
  local_80 = (int)uVar5;
  local_78 = uVar11;
  local_70 = (int)uVar6;
  uStack_6c = uVar1;
  FUN_1006734a4();
  if (puVar2 != (ulong *)0x0) {
    if (puVar8 == (ulong *)0x0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ffef8);
      (*pcVar7)();
    }
    if (puVar2 < puVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ffef0);
      (*pcVar7)();
    }
  }
  param_1[1] = uVar3;
  param_1[2] = uVar9;
  *(int *)(param_1 + 3) = (int)uVar4;
  param_1[4] = uVar10;
  *(int *)(param_1 + 5) = (int)uVar5;
  param_1[6] = uVar11;
  *(int *)(param_1 + 7) = (int)uVar6;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar1;
  *param_1 = (ulong)puVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008ffef8 | FUN_1008ffef8 */

void FUN_1008ffef8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = *unaff_x20;
  local_50 = *(undefined4 *)(unaff_x20 + 1);
  local_48 = unaff_x20[2];
  local_40 = *(undefined4 *)(unaff_x20 + 3);
  local_38 = unaff_x20[4];
  local_30 = *(undefined4 *)(unaff_x20 + 5);
  uStack_2c = *(undefined4 *)((long)unaff_x20 + 0x2c);
  *param_1 = local_58;
  *(undefined4 *)(param_1 + 1) = local_50;
  param_1[2] = local_48;
  *(undefined4 *)(param_1 + 3) = local_40;
  param_1[4] = local_38;
  *(undefined4 *)(param_1 + 5) = local_30;
  *(undefined4 *)((long)param_1 + 0x2c) = uStack_2c;
  puVar1 = &local_58;
  FUN_1006734a4();
  param_1[6] = puVar1;
  param_1[7] = 0;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008fff9c | FUN_1008fff9c */

void FUN_1008fff9c(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_48 = *unaff_x20;
  local_40 = *(undefined4 *)(unaff_x20 + 1);
  local_38 = unaff_x20[2];
  local_30 = *(undefined4 *)(unaff_x20 + 3);
  local_28 = unaff_x20[4];
  local_20 = unaff_x20[5];
  puVar1 = &local_48;
  FUN_1006734a4(puVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(puVar1 == (undefined8 *)0x0);
}



/* Address: 0x100900020 | FUN_100900020 */

void FUN_100900020(long *param_1,long *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009000ec);
    (*pcVar3)();
  }
  puVar4 = (undefined8 *)*param_2;
  if (param_3 != 0) {
    uVar5 = *unaff_x20;
    uVar1 = *(undefined4 *)(unaff_x20 + 1);
    uVar6 = unaff_x20[2];
    uVar2 = *(undefined4 *)(unaff_x20 + 3);
    uVar7 = unaff_x20[4];
    uVar8 = unaff_x20[5];
    do {
      local_98 = uVar5;
      local_90 = uVar1;
      local_88 = uVar6;
      local_80 = uVar2;
      local_78 = uVar7;
      local_70 = uVar8;
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009000f0);
        (*pcVar3)();
      }
      puVar4 = &local_98;
      FUN_1006734d0();
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *param_1 = (long)puVar4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009000f4 | FUN_1009000f4 */

void FUN_1009000f4(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1008ff8d8(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x100900140 | FUN_100900140 */

void FUN_100900140(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1008ff9a4(*param_1,*param_2);
  return;
}



/* Address: 0x100900180 | FUN_100900180 */

void FUN_100900180(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001b8);
    (*pcVar1)();
  }
  if (*param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001bc);
    (*pcVar1)();
  }
  if (uVar2 < *param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001b0);
    (*pcVar1)();
  }
  if (uVar2 <= param_2[1] - 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001b4);
  (*pcVar1)();
}



/* Address: 0x1009001bc | FUN_1009001bc */

void FUN_1009001bc(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar2 = param_2[1];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001fc);
      (*pcVar1)();
    }
  }
  else {
    if (*param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001f8);
      (*pcVar1)();
    }
    if (uVar3 < *param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001f4);
      (*pcVar1)();
    }
    if ((uVar2 != 0) && (uVar2 < uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009001e8);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1009001fc | FUN_1009001fc */

void FUN_1009001fc(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_1 != 0) {
    if (*param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100900238);
      (*pcVar1)();
    }
    if (*param_1 < *param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100900230);
      (*pcVar1)();
    }
  }
  if (param_2[1] != 0) {
    if (param_1[1] == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10090023c);
      (*pcVar1)();
    }
    if (param_2[1] < param_1[1]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100900234);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x10090023c | FUN_10090023c */

void FUN_10090023c(long *param_1,long *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = *unaff_x20;
  local_50 = *(undefined4 *)(unaff_x20 + 1);
  local_48 = unaff_x20[2];
  local_40 = *(undefined4 *)(unaff_x20 + 3);
  local_38 = unaff_x20[4];
  local_30 = unaff_x20[5];
  if (*param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009002d0);
    (*pcVar1)();
  }
  puVar2 = &local_58;
  FUN_1006734d0();
  *param_1 = (long)puVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009002d4 | FUN_1009002d4 */

void FUN_1009002d4(long *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = *unaff_x20;
  local_50 = *(undefined4 *)(unaff_x20 + 1);
  local_48 = unaff_x20[2];
  local_40 = *(undefined4 *)(unaff_x20 + 3);
  local_38 = unaff_x20[4];
  local_30 = unaff_x20[5];
  if (*param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100900368);
    (*pcVar1)();
  }
  puVar2 = &local_58;
  FUN_1006734d0();
  *param_1 = (long)puVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10090036c | FUN_10090036c */

void FUN_10090036c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_58 = *unaff_x20;
  local_50 = *(undefined4 *)(unaff_x20 + 1);
  local_48 = unaff_x20[2];
  local_40 = *(undefined4 *)(unaff_x20 + 3);
  local_38 = unaff_x20[4];
  local_30 = *(undefined4 *)(unaff_x20 + 5);
  uStack_2c = *(undefined4 *)((long)unaff_x20 + 0x2c);
  *param_1 = local_58;
  *(undefined4 *)(param_1 + 1) = local_50;
  param_1[2] = local_48;
  *(undefined4 *)(param_1 + 3) = local_40;
  param_1[4] = local_38;
  *(undefined4 *)(param_1 + 5) = local_30;
  *(undefined4 *)((long)param_1 + 0x2c) = uStack_2c;
  puVar1 = &local_58;
  FUN_1006734a4();
  param_1[6] = puVar1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100900410 | FUN_100900410 */

void FUN_100900410(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100900454();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100900454 | FUN_100900454 */

long FUN_100900454(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar9 = *unaff_x20;
  uVar3 = *(undefined4 *)(unaff_x20 + 1);
  uVar10 = unaff_x20[2];
  uVar4 = *(undefined4 *)(unaff_x20 + 3);
  uVar11 = unaff_x20[4];
  uVar1 = *(undefined4 *)(unaff_x20 + 5);
  uVar2 = *(undefined4 *)((long)unaff_x20 + 0x2c);
  puVar6 = &local_98;
  local_98 = uVar9;
  local_90 = uVar3;
  local_88 = uVar10;
  local_80 = uVar4;
  local_78 = uVar11;
  local_70 = uVar1;
  uStack_6c = uVar2;
  FUN_1006734a4();
  if (puVar6 == (undefined8 *)0x0) {
    lVar8 = 0;
  }
  else {
    lVar12 = 0;
    do {
      lVar8 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100900544);
        (*pcVar5)();
      }
      puVar7 = &local_98;
      local_98 = uVar9;
      local_90 = uVar3;
      local_88 = uVar10;
      local_80 = uVar4;
      local_78 = uVar11;
      local_70 = uVar1;
      uStack_6c = uVar2;
      FUN_1006734d0(puVar7,puVar6);
      lVar12 = lVar12 + 1;
      puVar6 = puVar7;
    } while (puVar7 != (undefined8 *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar8;
}



/* Address: 0x100900548 | FUN_100900548 */

void FUN_100900548(void)

{
  undefined8 *unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_38 = unaff_x20[1];
  local_40 = *unaff_x20;
  uStack_28 = unaff_x20[3];
  uStack_30 = unaff_x20[2];
  uStack_18 = unaff_x20[5];
  local_20 = unaff_x20[4];
  FUN_100900c64(&local_40);
  return;
}



/* Address: 0x100900578 | FUN_100900578 */

void FUN_100900578(void)

{
  FUN_1009012b8();
  return;
}



/* Address: 0x1009005b0 | thunk_FUN_1009005b4 */

void thunk_FUN_1009005b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec4f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83ba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83ba8,&DAT_100f14038);
  DAT_100fec4f0 = pTVar1;
  return;
}



/* Address: 0x1009005b4 | FUN_1009005b4 */

void FUN_1009005b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec4f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83ba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83ba8,&DAT_100f14038);
  DAT_100fec4f0 = pTVar1;
  return;
}



/* Address: 0x1009005f4 | thunk_FUN_1009005f8 */

void thunk_FUN_1009005f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83d00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83d00,&DAT_100f13f30);
  DAT_100fec4f8 = pTVar1;
  return;
}



/* Address: 0x1009005f8 | FUN_1009005f8 */

void FUN_1009005f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83d00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83d00,&DAT_100f13f30);
  DAT_100fec4f8 = pTVar1;
  return;
}



/* Address: 0x100900638 | FUN_100900638 */

void FUN_100900638(void)

{
  FUN_100134584(&DAT_100fec500,&DAT_100fec508,&DAT_100c83c10,
                PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0);
  return;
}



/* Address: 0x10090066c | FUN_10090066c */

void FUN_10090066c(void)

{
  FUN_100134584(&DAT_100fec510,&DAT_100fec518,&DAT_100c83c18,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}



/* Address: 0x1009006a0 | thunk_FUN_1009006a4 */

void thunk_FUN_1009006a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83d48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83d48,&DAT_100f13f30);
  DAT_100fec520 = pTVar1;
  return;
}



/* Address: 0x1009006a4 | FUN_1009006a4 */

void FUN_1009006a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83d48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83d48,&DAT_100f13f30);
  DAT_100fec520 = pTVar1;
  return;
}



/* Address: 0x1009006e4 | FUN_1009006e4 */

void FUN_1009006e4(byte *param_1,ulong param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  bVar2 = *param_1;
  if (bVar2 == 4 || (param_2 & 0xff00000000) == 0x100000000) {
    return;
  }
  if ((int)param_2 == 0x1e) {
    FUN_1005d84e8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        if (DAT_100feebb8 != -1) {
          _swift_once(&DAT_100feebb8,FUN_10095d2dc);
        }
        puVar5 = &DAT_10105820c;
      }
      else {
        if (DAT_100feebc0 != -1) {
          _swift_once(&DAT_100feebc0,FUN_10095d30c);
        }
        puVar5 = &DAT_101058210;
      }
    }
    else if (bVar2 == 2) {
      if (DAT_100feebc8 != -1) {
        _swift_once(&DAT_100feebc8,FUN_10095d324);
      }
      puVar5 = &DAT_101058214;
    }
    else {
      if (DAT_100feebd0 != -1) {
        _swift_once(&DAT_100feebd0,FUN_10095d33c);
      }
      puVar5 = &DAT_101058218;
    }
    uVar1 = *puVar5;
    uVar3 = 0x29;
    uVar4 = 0x24;
  }
  else {
    if ((int)param_2 != 2) {
      return;
    }
    FUN_1005d84e8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        if (DAT_100feebb8 != -1) {
          _swift_once(&DAT_100feebb8,FUN_10095d2dc);
        }
        puVar5 = &DAT_10105820c;
      }
      else {
        if (DAT_100feebc0 != -1) {
          _swift_once(&DAT_100feebc0,FUN_10095d30c);
        }
        puVar5 = &DAT_101058210;
      }
    }
    else if (bVar2 == 2) {
      if (DAT_100feebc8 != -1) {
        _swift_once(&DAT_100feebc8,FUN_10095d324);
      }
      puVar5 = &DAT_101058214;
    }
    else {
      if (DAT_100feebd0 != -1) {
        _swift_once(&DAT_100feebd0,FUN_10095d33c);
      }
      puVar5 = &DAT_101058218;
    }
    uVar1 = *puVar5;
    uVar3 = 0;
    uVar4 = 3;
  }
  FUN_10092d6d0(uVar3,uVar4,uVar1);
  FUN_100901470(param_1);
  return;
}



/* Address: 0x100900944 | FUN_100900944 */

undefined * FUN_100900944(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fec590;
    FUN_1000f7830(&DAT_100fec590,&DAT_100c83f70);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x1009009c4 | FUN_1009009c4 */

undefined * FUN_1009009c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fec528;
    FUN_1000f7830(&DAT_100fec528,&DAT_100c83d70);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Address: 0x100900a44 | FUN_100900a44 */

void FUN_100900a44(undefined8 param_1,undefined8 param_2)

{
  FUN_100900b74(param_1,param_2,FUN_100932038);
  return;
}



/* Address: 0x100900a50 | FUN_100900a50 */

void FUN_100900a50(undefined8 param_1,undefined8 param_2)

{
  FUN_100900b74(param_1,param_2,FUN_10093205c);
  return;
}



/* Address: 0x100900a5c | FUN_100900a5c */

undefined * FUN_100900a5c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fec550;
    FUN_1000f7830(&DAT_100fec550,&DAT_100c84f80);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x30) * 2;
  }
  return puVar1;
}



/* Address: 0x100900ae8 | FUN_100900ae8 */

undefined * FUN_100900ae8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fec540;
    FUN_1000f7830(&DAT_100fec540,&DAT_100c84060);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + 0x1f;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  return puVar2;
}



/* Address: 0x100900b68 | FUN_100900b68 */

void FUN_100900b68(undefined8 param_1,undefined8 param_2)

{
  FUN_100900b74(param_1,param_2,FUN_100932078);
  return;
}



/* Address: 0x100900b74 | FUN_100900b74 */

undefined * FUN_100900b74(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}


