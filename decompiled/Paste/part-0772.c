/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10087b6b4 | FUN_10087b6b4 */

void FUN_10087b6b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x10087b6d0 | FUN_10087b6d0 */

int FUN_10087b6d0(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x10087b6f0 | FUN_10087b6f0 */

void FUN_10087b6f0(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar1;
  return;
}



/* Address: 0x10087b734 | FUN_10087b734 */

void FUN_10087b734(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fe90f0,&DAT_100f08ad8);
  return;
}



/* Address: 0x10087b748 | thunk_FUN_10087b3d4 */

void thunk_FUN_10087b3d4(void)

{
  FUN_10087b3d4();
  return;
}



/* Address: 0x10087b74c | FUN_10087b74c */

void FUN_10087b74c(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_130;
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
  char local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined1 *)(unaff_x20 + 0xb0) = 0;
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0xcafbabe;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0xcafbabe;
  *(undefined4 *)(unaff_x20 + 0x108) = 0;
  *(undefined1 *)(unaff_x20 + 0x10c) = 1;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  uVar2 = 1;
  FUN_100884f1c(1);
  uVar3 = 0;
  FUN_100893c9c(0,0,0,uVar2 & 0xffffffff);
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar3;
  *(char *)(unaff_x20 + 0x118) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  uVar3 = 200;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(undefined8 *)(unaff_x20 + 0xb8) = uVar3;
  FUN_100960c7c();
  puVar4 = *(undefined8 **)(unaff_x20 + 0xb8);
  puVar4[6] = FUN_10087ba50;
  puVar4[7] = FUN_10087ba5c;
  puVar4[2] = FUN_10087ba84;
  puVar4[3] = FUN_10087ba68;
  puVar4[0x16] = thunk_FUN_10087bb00;
  puVar4[0x17] = thunk_FUN_10087bb00;
  *puVar4 = thunk_FUN_10087bb1c;
  puVar4[10] = thunk_FUN_10087bb70;
  puVar4[0xb] = thunk_FUN_10087b988;
  puVar4[0xc] = FUN_10087bc40;
  uVar6 = 1;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_60 = 1;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x58);
  local_130 = *puVar5;
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x78);
  local_110 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x98);
  local_f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_d0 = *(char *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *puVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0xb0) = 1;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  if (local_d0 == '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087b984);
    (*pcVar1)();
  }
  if (param_1 == '\x01') {
    uVar6 = 2;
  }
  FUN_100960c3c(&local_130,uVar6,*(undefined8 *)(unaff_x20 + 0xb8));
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x90) = local_f0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_e0;
  *(char *)(unaff_x20 + 0xb0) = local_d0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_128;
  *puVar5 = local_130;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_120;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x70) = local_110;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_100;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10087b988 | FUN_10087b988 */

undefined8 FUN_10087b988(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087ba44);
    (*pcVar2)();
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    _swift_beginAccess(lVar3 + 0x28,auStack_58,0x21,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      lVar1 = 0;
      if (param_2 != 0) {
        lVar1 = param_3 + param_2;
      }
      lVar5 = *(long *)(lVar3 + 0x48);
      FUN_10007d048(lVar3 + 0x28,lVar4);
      (**(code **)(lVar5 + 8))(param_2,lVar1,lVar4,lVar5);
      _swift_endAccess(auStack_58);
      _swift_release(lVar3);
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087ba4c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087ba48);
  (*pcVar2)();
}



/* Address: 0x10087ba4c | thunk_FUN_10087b988 */

undefined8 thunk_FUN_10087b988(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087ba44);
    (*pcVar2)();
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    _swift_beginAccess(lVar3 + 0x28,auStack_58,0x21,0);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (lVar4 != 0) {
      lVar1 = 0;
      if (param_2 != 0) {
        lVar1 = param_3 + param_2;
      }
      lVar5 = *(long *)(lVar3 + 0x48);
      FUN_10007d048(lVar3 + 0x28,lVar4);
      (**(code **)(lVar5 + 8))(param_2,lVar1,lVar4,lVar5);
      _swift_endAccess(auStack_58);
      _swift_release(lVar3);
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087ba4c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087ba48);
  (*pcVar2)();
}



/* Address: 0x10087ba50 | FUN_10087ba50 */

void FUN_10087ba50(void)

{
  FUN_10087ba90();
  return;
}



/* Address: 0x10087ba5c | FUN_10087ba5c */

void FUN_10087ba5c(void)

{
  FUN_10087ba90();
  return;
}



/* Address: 0x10087ba68 | FUN_10087ba68 */

undefined8 FUN_10087ba68(long param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ba80);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087ba84);
  (*pcVar1)();
}



/* Address: 0x10087ba84 | FUN_10087ba84 */

void FUN_10087ba84(void)

{
  FUN_10087ba90();
  return;
}



/* Address: 0x10087ba90 | FUN_10087ba90 */

long FUN_10087ba90(long param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087baf8);
    (*pcVar2)();
  }
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = param_2 + param_3;
    }
    lVar3 = 0;
    if (param_2 != 0) {
      lVar3 = param_2;
    }
    (*param_4)(lVar3,lVar1);
    _swift_release(lVar4);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bafc);
  (*pcVar2)();
}



/* Address: 0x10087bafc | thunk_FUN_10087bb00 */

undefined8 thunk_FUN_10087bb00(long param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb18);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb1c);
  (*pcVar1)();
}



/* Address: 0x10087bb00 | FUN_10087bb00 */

undefined8 FUN_10087bb00(long param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb18);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb1c);
  (*pcVar1)();
}



/* Address: 0x10087bb1c | FUN_10087bb1c */

undefined8 FUN_10087bb1c(long param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bb64);
    (*pcVar2)();
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 0xc0);
    _swift_retain();
    if (cVar1 == '\0') {
      *(undefined8 *)(lVar3 + 0xe0) = 0;
      *(undefined8 *)(lVar3 + 0xe8) = 0;
      *(undefined1 *)(lVar3 + 0xc0) = 1;
      _swift_release();
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bb6c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bb68);
  (*pcVar2)();
}



/* Address: 0x10087bb6c | thunk_FUN_10087bb1c */

undefined8 thunk_FUN_10087bb1c(long param_1)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bb64);
    (*pcVar2)();
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 0xc0);
    _swift_retain();
    if (cVar1 == '\0') {
      *(undefined8 *)(lVar3 + 0xe0) = 0;
      *(undefined8 *)(lVar3 + 0xe8) = 0;
      *(undefined1 *)(lVar3 + 0xc0) = 1;
      _swift_release();
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bb6c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087bb68);
  (*pcVar2)();
}



/* Address: 0x10087bb70 | FUN_10087bb70 */

ulong FUN_10087bb70(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10087bc38);
    (*pcVar5)();
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 != 0) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x4a);
    uVar1 = *(undefined1 *)(param_1 + 0x4b);
    uVar4 = *(undefined2 *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x50);
    uVar3 = *(undefined1 *)(param_1 + 0x49);
    _swift_retain(lVar7);
    FUN_100961478(param_1);
    FUN_10087c594(uVar6,uVar1,uVar4,cVar2 != '\0',uVar3,(int)param_1 == 0);
    if ((uVar6 & 0xff00000000) == 0x100000000) {
      _swift_release(lVar7);
      uVar6 = (ulong)((int)uVar6 != 0);
    }
    else {
      *(int *)(lVar7 + 0x108) = (int)uVar6;
      *(undefined1 *)(lVar7 + 0x10c) = 0;
      _swift_release(lVar7);
      uVar6 = 0xffffffff;
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10087bc3c);
  (*pcVar5)();
}



/* Address: 0x10087bc3c | thunk_FUN_10087bb70 */

ulong thunk_FUN_10087bb70(long param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10087bc38);
    (*pcVar5)();
  }
  lVar7 = *(long *)(param_1 + 0x30);
  if (lVar7 != 0) {
    uVar6 = (ulong)*(byte *)(param_1 + 0x4a);
    uVar1 = *(undefined1 *)(param_1 + 0x4b);
    uVar4 = *(undefined2 *)(param_1 + 0x54);
    cVar2 = *(char *)(param_1 + 0x50);
    uVar3 = *(undefined1 *)(param_1 + 0x49);
    _swift_retain(lVar7);
    FUN_100961478(param_1);
    FUN_10087c594(uVar6,uVar1,uVar4,cVar2 != '\0',uVar3,(int)param_1 == 0);
    if ((uVar6 & 0xff00000000) == 0x100000000) {
      _swift_release(lVar7);
      uVar6 = (ulong)((int)uVar6 != 0);
    }
    else {
      *(int *)(lVar7 + 0x108) = (int)uVar6;
      *(undefined1 *)(lVar7 + 0x10c) = 0;
      _swift_release(lVar7);
      uVar6 = 0xffffffff;
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10087bc3c);
  (*pcVar5)();
}



/* Address: 0x10087bc40 | FUN_10087bc40 */

undefined8 FUN_10087bc40(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bc88);
    (*pcVar1)();
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_10087c41c();
    _swift_release(lVar2);
    *(undefined8 *)(param_1 + 0x40) = 0;
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bc8c);
  (*pcVar1)();
}



/* Address: 0x10087bc8c | FUN_10087bc8c */

void FUN_10087bc8c(void)

{
  long unaff_x20;
  
  _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0xb8),0xffffffffffffffff,0xffffffffffffffff);
  FUN_1000fb4c4(unaff_x20 + 0x28,&DAT_100fe9528,&DAT_100c7fc90);
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x110));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x120));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10087bce0 | FUN_10087bce0 */

void FUN_10087bce0(undefined1 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined1 auStack_68 [24];
  
  bVar3 = *(byte *)(unaff_x20 + 0xc0);
  puVar5 = param_1;
  if (bVar3 < 4) {
    if (bVar3 < 2) {
      if (bVar3 != 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0bc);
        (*pcVar4)();
      }
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0d0);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0d8);
        (*pcVar4)();
      }
    }
    else {
      if (bVar3 != 2) goto LAB_10087c034;
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      *(undefined8 *)(unaff_x20 + 0xd8) = 0;
      if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0cc);
        (*pcVar4)();
      }
      lVar11 = *(long *)(unaff_x20 + 200);
      lVar1 = lVar11 + lVar8;
      if (SCARRY8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0a0);
        (*pcVar4)();
      }
      *(undefined8 *)(unaff_x20 + 200) = 0;
      *(undefined1 *)(unaff_x20 + 0xd0) = 1;
      if (lVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0ac);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
        if (0 < lVar1) goto LAB_10087c08c;
      }
      else if (*(long *)(unaff_x20 + 0x100) - lVar8 < lVar1) {
LAB_10087c08c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c090);
        (*pcVar4)();
      }
      if (lVar1 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0b8);
        (*pcVar4)();
      }
      _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0x21,0);
      lVar10 = *(long *)(unaff_x20 + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0e4);
        (*pcVar4)();
      }
      lVar2 = 0;
      if (lVar8 != 0) {
        lVar2 = lVar8 + lVar11;
      }
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + lVar1;
      }
      lVar8 = *(long *)(unaff_x20 + 0x48);
      FUN_10007d048(unaff_x20 + 0x28,lVar10);
      (**(code **)(lVar8 + 0x30))(lVar2,lVar11,lVar10,lVar8);
      puVar5 = auStack_68;
      _swift_endAccess();
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0f0);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0f8);
        (*pcVar4)();
      }
    }
LAB_10087bfa8:
    *(long *)(unaff_x20 + 200) = (long)param_1 - lVar8;
    *(undefined1 *)(unaff_x20 + 0xd0) = 0;
    uVar7 = 3;
  }
  else {
    if (bVar3 < 6) {
      if (bVar3 != 4) goto LAB_10087c034;
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      *(undefined8 *)(unaff_x20 + 0xd8) = 0;
      if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0c0);
        (*pcVar4)();
      }
      lVar11 = *(long *)(unaff_x20 + 200);
      lVar1 = lVar11 + lVar8;
      if (SCARRY8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c098);
        (*pcVar4)();
      }
      *(undefined8 *)(unaff_x20 + 200) = 0;
      *(undefined1 *)(unaff_x20 + 0xd0) = 1;
      if (lVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0a4);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
        if (0 < lVar1) goto LAB_10087c06c;
      }
      else if (*(long *)(unaff_x20 + 0x100) - lVar8 < lVar1) {
LAB_10087c06c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c070);
        (*pcVar4)();
      }
      if (lVar1 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0b0);
        (*pcVar4)();
      }
      _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0x21,0);
      lVar10 = *(long *)(unaff_x20 + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0dc);
        (*pcVar4)();
      }
      lVar2 = 0;
      if (lVar8 != 0) {
        lVar2 = lVar8 + lVar11;
      }
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + lVar1;
      }
      lVar8 = *(long *)(unaff_x20 + 0x48);
      FUN_10007d048(unaff_x20 + 0x28,lVar10);
      (**(code **)(lVar8 + 0x18))(lVar2,lVar11,lVar10,lVar8);
      puVar5 = auStack_68;
      _swift_endAccess();
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0e8);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087bde8);
        (*pcVar4)();
      }
      goto LAB_10087bfa8;
    }
    if (bVar3 == 6) {
      lVar8 = *(long *)(unaff_x20 + 0xd8);
      *(undefined8 *)(unaff_x20 + 0xd8) = 0;
      if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0c4);
        (*pcVar4)();
      }
      lVar11 = *(long *)(unaff_x20 + 200);
      lVar1 = lVar11 + lVar8;
      if (SCARRY8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c09c);
        (*pcVar4)();
      }
      *(undefined8 *)(unaff_x20 + 200) = 0;
      *(undefined1 *)(unaff_x20 + 0xd0) = 1;
      if (lVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0a8);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
        if (0 < lVar1) goto LAB_10087c07c;
      }
      else if (*(long *)(unaff_x20 + 0x100) - lVar8 < lVar1) {
LAB_10087c07c:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c080);
        (*pcVar4)();
      }
      if (lVar1 < lVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0b4);
        (*pcVar4)();
      }
      _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0x21,0);
      lVar10 = *(long *)(unaff_x20 + 0x40);
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0e0);
        (*pcVar4)();
      }
      lVar2 = 0;
      if (lVar8 != 0) {
        lVar2 = lVar8 + lVar11;
      }
      lVar11 = 0;
      if (lVar8 != 0) {
        lVar11 = lVar8 + lVar1;
      }
      lVar8 = *(long *)(unaff_x20 + 0x48);
      FUN_10007d048(unaff_x20 + 0x28,lVar10);
      (**(code **)(lVar8 + 0x28))(lVar2,lVar11,lVar10,lVar8);
      puVar5 = auStack_68;
      _swift_endAccess();
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0ec);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0f4);
        (*pcVar4)();
      }
    }
    else {
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0c8);
        (*pcVar4)();
      }
      lVar8 = *(long *)(unaff_x20 + 0xf8);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c0d4);
        (*pcVar4)();
      }
    }
    *(long *)(unaff_x20 + 200) = (long)param_1 - lVar8;
    *(undefined1 *)(unaff_x20 + 0xd0) = 0;
    uVar7 = 5;
  }
  *(undefined1 *)(unaff_x20 + 0xc0) = uVar7;
  lVar8 = *(long *)(unaff_x20 + 0xe8) + 1;
  if (SCARRY8(*(long *)(unaff_x20 + 0xe8),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c094);
    (*pcVar4)();
  }
  *(long *)(unaff_x20 + 0xe8) = lVar8;
  if (*(long *)(unaff_x20 + 0x20) < lVar8) {
    FUN_100881fac();
    puVar6 = &DAT_100f0ace8;
    _swift_allocError(&DAT_100f0ace8,puVar5,0,0);
    *puVar5 = 3;
    uVar9 = *(undefined8 *)(unaff_x20 + 0x110);
    *(undefined **)(unaff_x20 + 0x110) = puVar6;
    _swift_errorRelease(uVar9);
    return;
  }
LAB_10087c034:
  lVar8 = 0;
  if (param_1 != (undefined1 *)0x0) {
    lVar8 = param_2 - (long)param_1;
  }
  FUN_10087ca48(lVar8);
  return;
}



/* Address: 0x10087c0f8 | FUN_10087c0f8 */

/* WARNING: Removing unreachable block (ram,0x00010087c304) */

void FUN_10087c0f8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  bVar3 = *(byte *)(unaff_x20 + 0xc0);
  if (bVar3 < 5) {
    if (bVar3 != 3) {
      if (bVar3 != 4) {
LAB_10087c144:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c148);
        (*pcVar4)();
      }
      goto LAB_10087c364;
    }
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3b0);
      (*pcVar4)();
    }
    lVar8 = *(long *)(unaff_x20 + 200);
    lVar1 = lVar8 + lVar6;
    if (SCARRY8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c398);
      (*pcVar4)();
    }
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined1 *)(unaff_x20 + 0xd0) = 1;
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3a0);
      (*pcVar4)();
    }
    lVar6 = *(long *)(unaff_x20 + 0xf8);
    if (lVar6 == 0) {
      if (0 < lVar1) goto LAB_10087c334;
    }
    else if (*(long *)(unaff_x20 + 0x100) - lVar6 < lVar1) {
LAB_10087c334:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c338);
      (*pcVar4)();
    }
    if (lVar1 < lVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3a8);
      (*pcVar4)();
    }
    _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0x21,0);
    lVar7 = *(long *)(unaff_x20 + 0x40);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3b8);
      (*pcVar4)();
    }
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar6 + lVar8;
    }
    lVar8 = 0;
    if (lVar6 != 0) {
      lVar8 = lVar6 + lVar1;
    }
    lVar6 = *(long *)(unaff_x20 + 0x48);
    FUN_10007d048(unaff_x20 + 0x28,lVar7);
    (**(code **)(lVar6 + 0x10))(lVar2,lVar8,lVar7,lVar6);
    _swift_endAccess(auStack_68);
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3c0);
      (*pcVar4)();
    }
    if (*(long *)(unaff_x20 + 0xf8) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3c8);
      (*pcVar4)();
    }
    *(long *)(unaff_x20 + 200) = param_1 - *(long *)(unaff_x20 + 0xf8);
    *(undefined1 *)(unaff_x20 + 0xd0) = 0;
    uVar5 = 4;
  }
  else {
    if (bVar3 != 5) {
      if (bVar3 != 6) goto LAB_10087c144;
      goto LAB_10087c364;
    }
    lVar6 = *(long *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3ac);
      (*pcVar4)();
    }
    lVar8 = *(long *)(unaff_x20 + 200);
    lVar1 = lVar8 + lVar6;
    if (SCARRY8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c394);
      (*pcVar4)();
    }
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined1 *)(unaff_x20 + 0xd0) = 1;
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c39c);
      (*pcVar4)();
    }
    lVar6 = *(long *)(unaff_x20 + 0xf8);
    if (lVar6 == 0) {
      if (0 < lVar1) goto LAB_10087c324;
    }
    else if (*(long *)(unaff_x20 + 0x100) - lVar6 < lVar1) {
LAB_10087c324:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c328);
      (*pcVar4)();
    }
    if (lVar1 < lVar8) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3a4);
      (*pcVar4)();
    }
    _swift_beginAccess(unaff_x20 + 0x28,auStack_68,0x21,0);
    lVar7 = *(long *)(unaff_x20 + 0x40);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3b4);
      (*pcVar4)();
    }
    lVar2 = 0;
    if (lVar6 != 0) {
      lVar2 = lVar6 + lVar8;
    }
    lVar8 = 0;
    if (lVar6 != 0) {
      lVar8 = lVar6 + lVar1;
    }
    lVar6 = *(long *)(unaff_x20 + 0x48);
    FUN_10007d048(unaff_x20 + 0x28,lVar7);
    (**(code **)(lVar6 + 0x20))(lVar2,lVar8,lVar7,lVar6);
    _swift_endAccess(auStack_68);
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3bc);
      (*pcVar4)();
    }
    if (*(long *)(unaff_x20 + 0xf8) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087c3c4);
      (*pcVar4)();
    }
    *(long *)(unaff_x20 + 200) = param_1 - *(long *)(unaff_x20 + 0xf8);
    *(undefined1 *)(unaff_x20 + 0xd0) = 0;
    uVar5 = 6;
  }
  *(undefined1 *)(unaff_x20 + 0xc0) = uVar5;
LAB_10087c364:
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_2 - param_1;
  }
  FUN_10087ca48(lVar6);
  return;
}



/* Address: 0x10087c3c8 | FUN_10087c3c8 */

void FUN_10087c3c8(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long unaff_x20;
  
  bVar2 = *(byte *)(unaff_x20 + 0xc0);
  if (bVar2 < 2) {
    if (bVar2 == 1) {
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10087c418);
        (*pcVar3)();
      }
      if (*(long *)(unaff_x20 + 0xf8) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10087c41c);
        (*pcVar3)();
      }
      *(long *)(unaff_x20 + 200) = param_1 - *(long *)(unaff_x20 + 0xf8);
      *(undefined1 *)(unaff_x20 + 0xd0) = 0;
      *(undefined1 *)(unaff_x20 + 0xc0) = 2;
      goto LAB_10087c404;
    }
  }
  else if (bVar2 == 2) {
LAB_10087c404:
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_2 - param_1;
    }
    FUN_10087ca48(lVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10087c3e0);
  (*pcVar3)();
}



/* Address: 0x10087c41c | FUN_10087c41c */

void FUN_10087c41c(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  if (*(char *)(unaff_x20 + 0xc0) == '\x06') {
    lVar5 = *(long *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c590);
      (*pcVar2)();
    }
    lVar3 = *(long *)(unaff_x20 + 200);
    lVar6 = lVar3 + lVar5;
    if (SCARRY8(lVar3,lVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c580);
      (*pcVar2)();
    }
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined1 *)(unaff_x20 + 0xd0) = 1;
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c584);
      (*pcVar2)();
    }
    lVar5 = *(long *)(unaff_x20 + 0xf8);
    if (lVar5 == 0) {
      if (0 < lVar6) goto LAB_10087c578;
    }
    else if (*(long *)(unaff_x20 + 0x100) - lVar5 < lVar6) {
LAB_10087c578:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c57c);
      (*pcVar2)();
    }
    if (lVar6 < lVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c588);
      (*pcVar2)();
    }
    _swift_beginAccess(unaff_x20 + 0x28,auStack_58,0x21,0);
    lVar4 = *(long *)(unaff_x20 + 0x40);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c594);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar5 != 0) {
      lVar1 = lVar5 + lVar3;
    }
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + lVar6;
    }
    lVar5 = *(long *)(unaff_x20 + 0x48);
    FUN_10007d048(unaff_x20 + 0x28,lVar4);
    (**(code **)(lVar5 + 0x28))(lVar1,lVar3,lVar4,lVar5);
    _swift_endAccess(auStack_58);
  }
  else if (*(char *)(unaff_x20 + 0xc0) != '\a') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c450);
    (*pcVar2)();
  }
  *(undefined1 *)(unaff_x20 + 0xc0) = 0;
  _swift_beginAccess(unaff_x20 + 0x28,auStack_58,0x21,0);
  lVar5 = *(long *)(unaff_x20 + 0x40);
  if (lVar5 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x48);
    FUN_10007d048(unaff_x20 + 0x28,lVar5);
    (**(code **)(lVar6 + 0x40))(lVar5,lVar6);
    _swift_endAccess(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087c58c);
  (*pcVar2)();
}



/* Address: 0x10087c594 | FUN_10087c594 */

undefined8
FUN_10087c594(ulong param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
             undefined4 param_6)

{
  undefined *puVar1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  bVar2 = *(byte *)(unaff_x20 + 0xc0);
  if (bVar2 < 3) {
    if (bVar2 != 1) {
      if (bVar2 != 2) goto LAB_10087ca2c;
      lVar7 = *(long *)(unaff_x20 + 0xd8);
      *(undefined8 *)(unaff_x20 + 0xd8) = 0;
      if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca38);
        (*pcVar8)();
      }
      lVar10 = *(long *)(unaff_x20 + 200);
      lVar13 = lVar10 + lVar7;
      if (SCARRY8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca18);
        (*pcVar8)();
      }
      *(undefined8 *)(unaff_x20 + 200) = 0;
      *(undefined1 *)(unaff_x20 + 0xd0) = 1;
      if (lVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca20);
        (*pcVar8)();
      }
      lVar7 = *(long *)(unaff_x20 + 0xf8);
      if (lVar7 == 0) {
        if (0 < lVar13) goto LAB_10087c89c;
      }
      else if (*(long *)(unaff_x20 + 0x100) - lVar7 < lVar13) {
LAB_10087c89c:
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10087c8a0);
        (*pcVar8)();
      }
      if (lVar13 < lVar10) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca28);
        (*pcVar8)();
      }
      _swift_beginAccess(unaff_x20 + 0x28,auStack_78,0x21,0);
      lVar12 = *(long *)(unaff_x20 + 0x40);
      if (lVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca40);
        (*pcVar8)();
      }
      lVar11 = 0;
      if (lVar7 != 0) {
        lVar11 = lVar7 + lVar10;
      }
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = lVar7 + lVar13;
      }
      lVar7 = *(long *)(unaff_x20 + 0x48);
      FUN_10007d048(unaff_x20 + 0x28,lVar12);
      pcVar8 = *(code **)(lVar7 + 0x30);
      goto LAB_10087c738;
    }
    if (*(char *)(unaff_x20 + 0x118) != '\x01') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca14);
      (*pcVar8)();
    }
  }
  else {
    if (bVar2 != 4) {
LAB_10087ca2c:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca30);
      (*pcVar8)();
    }
    lVar7 = *(long *)(unaff_x20 + 0xd8);
    *(undefined8 *)(unaff_x20 + 0xd8) = 0;
    if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca3c);
      (*pcVar8)();
    }
    lVar10 = *(long *)(unaff_x20 + 200);
    lVar13 = lVar10 + lVar7;
    if (SCARRY8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca1c);
      (*pcVar8)();
    }
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined1 *)(unaff_x20 + 0xd0) = 1;
    if (lVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca24);
      (*pcVar8)();
    }
    lVar7 = *(long *)(unaff_x20 + 0xf8);
    if (lVar7 == 0) {
      if (0 < lVar13) goto LAB_10087c8ac;
    }
    else if (*(long *)(unaff_x20 + 0x100) - lVar7 < lVar13) {
LAB_10087c8ac:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087c8b0);
      (*pcVar8)();
    }
    if (lVar13 < lVar10) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca2c);
      (*pcVar8)();
    }
    _swift_beginAccess(unaff_x20 + 0x28,auStack_78,0x21,0);
    lVar12 = *(long *)(unaff_x20 + 0x40);
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca44);
      (*pcVar8)();
    }
    lVar11 = 0;
    if (lVar7 != 0) {
      lVar11 = lVar7 + lVar10;
    }
    lVar10 = 0;
    if (lVar7 != 0) {
      lVar10 = lVar7 + lVar13;
    }
    lVar7 = *(long *)(unaff_x20 + 0x48);
    FUN_10007d048(unaff_x20 + 0x28,lVar12);
    pcVar8 = *(code **)(lVar7 + 0x18);
LAB_10087c738:
    (*pcVar8)(lVar11,lVar10,lVar12,lVar7);
    _swift_endAccess(auStack_78);
  }
  *(undefined1 *)(unaff_x20 + 0xc0) = 7;
  if (*(char *)(unaff_x20 + 0x118) != '\x01') {
    uVar9 = 0x100000000;
    goto LAB_10087c7e4;
  }
  lVar7 = unaff_x20 + 0x120;
  _swift_beginAccess(lVar7,auStack_90,0,0);
  lVar13 = *(long *)(unaff_x20 + 0x128);
  lVar10 = *(long *)(unaff_x20 + 0x130);
  if (lVar13 == lVar10) {
    FUN_100882000();
    puVar4 = &DAT_100f08f60;
    _swift_allocError(&DAT_100f08f60,lVar7,0,0);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x110);
    *(undefined **)(unaff_x20 + 0x110) = puVar4;
    _swift_errorRelease(uVar9);
    return 1;
  }
  if ((param_3 != 0x65) && (param_3 - 100U < 100)) {
    uVar9 = 0x100000001;
    goto LAB_10087c7e4;
  }
  _swift_beginAccess(unaff_x20 + 0x120,auStack_78,0x21,0);
  lVar7 = *(long *)(unaff_x20 + 0x120);
  FUN_10087e584(lVar7,lVar13,lVar10);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca48);
    (*pcVar8)();
  }
  FUN_1008927ec(1);
  _swift_endAccess(auStack_78);
  puVar4 = *(undefined **)(lVar7 + 0x10);
  puVar1 = *(undefined **)(lVar7 + 0x18);
  FUN_100881fec(puVar4,puVar1);
  _swift_bridgeObjectRelease(lVar13);
  _swift_release(lVar7);
  _Var5.unknown = puVar4;
  _Var6.unknown = puVar1;
  FUN_1008a1014();
  if ((_Var5.unknown == (undefined *)0x44414548) && (_Var6.unknown == &DAT_e400000000000000)) {
LAB_10087c940:
    _swift_bridgeObjectRelease(_Var6.unknown);
  }
  else {
    bVar3 = Swift::_stringCompareWithSmolCheck(_Var5,_Var6,(_StringComparisonResult)0x48);
    _swift_bridgeObjectRelease(_Var6.unknown);
    if (!bVar3) {
      _Var5.unknown = puVar4;
      _Var6.unknown = puVar1;
      FUN_1008a1014();
      if ((_Var5.unknown != (undefined *)0x5443454e4e4f43) ||
         (_Var6.unknown != &DAT_e700000000000000)) {
        bVar3 = Swift::_stringCompareWithSmolCheck(_Var5,_Var6,(_StringComparisonResult)0x43);
        _swift_bridgeObjectRelease(_Var6.unknown);
        FUN_10087b1c4(puVar4,puVar1);
        uVar9 = 0x100000001;
        if ((99 < param_3 - 100U) &&
           ((!bVar3 && (uVar9 = 0x100000000, param_3 == 0xcc || param_3 == 0x130)))) {
          uVar9 = 0x100000001;
        }
        goto LAB_10087c7e4;
      }
      goto LAB_10087c940;
    }
  }
  FUN_10087b1c4(puVar4,puVar1);
  uVar9 = 0x100000001;
LAB_10087c7e4:
  _swift_beginAccess(unaff_x20 + 0x28,auStack_78,0x21,0);
  lVar7 = *(long *)(unaff_x20 + 0x40);
  if (lVar7 != 0) {
    lVar13 = *(long *)(unaff_x20 + 0x48);
    FUN_10007d048(unaff_x20 + 0x28,lVar7);
    (**(code **)(lVar13 + 0x38))(param_1,param_2,param_4 & 1,param_5,param_3,param_6,lVar7,lVar13);
    _swift_endAccess(auStack_78);
    if ((param_1 & 1) == 0) {
      uVar9 = 9;
    }
    return uVar9;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10087ca34);
  (*pcVar8)();
}



/* Address: 0x10087ca48 | FUN_10087ca48 */

undefined8 FUN_10087ca48(undefined1 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0xd8);
  if (SCARRY8(lVar3,(long)param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087cad8);
    (*pcVar1)();
  }
  *(undefined1 **)(unaff_x20 + 0xd8) = param_1 + lVar3;
  if ((long)(param_1 + lVar3) <= *(long *)(unaff_x20 + 0x10)) {
    lVar3 = *(long *)(unaff_x20 + 0xe0);
    if (SCARRY8(lVar3,(long)param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087cadc);
      (*pcVar1)();
    }
    *(undefined1 **)(unaff_x20 + 0xe0) = param_1 + lVar3;
    if ((long)(param_1 + lVar3) <= *(long *)(unaff_x20 + 0x18)) {
      return 0;
    }
  }
  FUN_100881fac();
  puVar2 = &DAT_100f0ace8;
  _swift_allocError(&DAT_100f0ace8,param_1,0,0);
  *param_1 = 3;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined **)(unaff_x20 + 0x110) = puVar2;
  _swift_errorRelease(uVar4);
  return 0xffffffff;
}



/* Address: 0x10087cadc | FUN_10087cadc */

void FUN_10087cadc(long param_1,long param_2,char param_3)

{
  undefined1 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50 = 1;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x58);
  local_120 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x78);
  local_100 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0x98);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_c0 = *(char *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0xb0) = 1;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  if (local_c0 == '\x01') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd6c);
    (*pcVar2)();
  }
  if (param_3 == '\x01') {
    uVar3 = (uint)&local_120;
    FUN_100960ca0();
    lVar8 = 0;
  }
  else {
    *(long *)(unaff_x20 + 0xf8) = param_1;
    *(long *)(unaff_x20 + 0x100) = param_2;
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd74);
      (*pcVar2)();
    }
    lVar7 = *(long *)(unaff_x20 + 0xf0);
    lVar8 = (param_2 - param_1) - lVar7;
    if (SBORROW8(param_2 - param_1,lVar7)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd5c);
      (*pcVar2)();
    }
    puVar4 = &local_120;
    FUN_100960c74(puVar4,param_1 + lVar7,lVar8);
    uVar3 = (uint)puVar4;
    if (uVar3 == 0x16) {
      puVar4 = &local_120;
      FUN_100960d1c();
      if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd7c);
        (*pcVar2)();
      }
      lVar8 = (long)puVar4 - (param_1 + lVar7);
      FUN_100960d08(&local_120);
      uVar3 = 0;
    }
    *(undefined8 *)(unaff_x20 + 0x100) = 0xdafbabe;
    *(undefined8 *)(unaff_x20 + 0xf8) = 0xdafbabe;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar20 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar19 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined1 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x50) = local_120;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_110;
  *(char *)(unaff_x20 + 0xb0) = local_c0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0x90) = local_e0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_c8;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0x70) = local_100;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_e8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_f0;
  local_120 = uVar9;
  uStack_118 = uVar11;
  uStack_110 = uVar13;
  uStack_108 = uVar15;
  local_100 = uVar10;
  uStack_f8 = uVar12;
  uStack_f0 = uVar14;
  uStack_e8 = uVar16;
  local_e0 = uVar17;
  uStack_d8 = uVar18;
  uStack_d0 = uVar19;
  uStack_c8 = uVar20;
  local_c0 = uVar1;
  if (uVar3 == 0) {
    if (*(char *)(unaff_x20 + 0xd0) == '\x01') {
      if (SCARRY8(*(long *)(unaff_x20 + 0xf0),lVar8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd60);
        (*pcVar2)();
      }
      *(undefined8 *)(unaff_x20 + 0xf0) = 0;
    }
    else {
      lVar7 = lVar8 - *(long *)(unaff_x20 + 200);
      if (SBORROW8(lVar8,*(long *)(unaff_x20 + 200))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd64);
        (*pcVar2)();
      }
      if (SCARRY8(*(long *)(unaff_x20 + 0xf0),lVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd68);
        (*pcVar2)();
      }
      *(long *)(unaff_x20 + 0xf0) = *(long *)(unaff_x20 + 0xf0) + lVar7;
      *(undefined8 *)(unaff_x20 + 200) = 0;
      *(undefined1 *)(unaff_x20 + 0xd0) = 0;
    }
  }
  else {
    if (*(char *)(unaff_x20 + 0x10c) != '\x01') {
      uVar3 = *(uint *)(unaff_x20 + 0x108);
    }
    puVar5 = (undefined1 *)(ulong)uVar3;
    if (((uVar3 == 0x18) || (uVar3 == 1)) && (*(long *)(unaff_x20 + 0x110) != 0)) {
      _swift_errorRetain(*(long *)(unaff_x20 + 0x110));
    }
    else {
      FUN_1008815e4();
      if (((uint)puVar5 & 0xff) == 0x18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087cd78);
        (*pcVar2)();
      }
      puVar6 = puVar5;
      FUN_100881fac();
      _swift_allocError(&DAT_100f0ace8,puVar6,0,0);
      *puVar6 = (char)puVar5;
    }
    _swift_willThrow();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10087cd7c | FUN_10087cd7c */

void FUN_10087cd7c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  if (param_3 >> 0x38 == 0) {
    _swift_beginAccess(*(long *)(unaff_x20 + 0x68) + 0x120,auStack_48,0x21,0);
    _swift_retain(param_1);
    _swift_bridgeObjectRetain(param_2);
    FUN_10087cec4(param_1,param_2,param_3);
    _swift_endAccess(auStack_48);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x10087ce0c | FUN_10087ce0c */

void FUN_10087ce0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  uVar7 = unaff_x20[2];
  uVar6 = *unaff_x20;
  FUN_100881fec();
  uVar5 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_1008986f0();
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087cec0);
    (*pcVar4)();
  }
  if (*(ulong *)(uVar6 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087cec4);
    (*pcVar4)();
  }
  lVar1 = uVar6 + uVar7 * 0x10;
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  FUN_100882040(uVar2,uVar3);
  *unaff_x20 = uVar6;
  uVar5 = *(long *)(uVar6 + 0x10) + 0x7fffffffffffffffU & uVar7 + 1;
  unaff_x20[2] = uVar5;
  if (unaff_x20[1] == uVar5) {
    FUN_10087e754();
    return;
  }
  return;
}



/* Address: 0x10087cec4 | FUN_10087cec4 */

void FUN_10087cec4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  
  uVar8 = unaff_x20[2];
  uVar7 = *unaff_x20;
  _swift_retain();
  _swift_bridgeObjectRetain(param_2);
  uVar6 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_100898704();
  }
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087cf90);
    (*pcVar4)();
  }
  if (*(ulong *)(uVar7 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087cf94);
    (*pcVar4)();
  }
  lVar5 = uVar7 + uVar8 * 0x18;
  uVar1 = *(undefined8 *)(lVar5 + 0x20);
  uVar2 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  uVar3 = *(undefined1 *)(lVar5 + 0x30);
  *(undefined1 *)(lVar5 + 0x30) = param_3;
  FUN_100774094(uVar1,uVar2,uVar3);
  *unaff_x20 = uVar7;
  uVar6 = *(long *)(uVar7 + 0x10) + 0x7fffffffffffffffU & uVar8 + 1;
  unaff_x20[2] = uVar6;
  if (unaff_x20[1] == uVar6) {
    FUN_10087e888();
    return;
  }
  return;
}



/* Address: 0x10087cf94 | FUN_10087cf94 */

void FUN_10087cf94(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [72];
  
  uVar4 = unaff_x20[2];
  FUN_100882060(param_1,auStack_78);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_100898718();
  }
  if (-1 < (long)uVar4) {
    if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
      FUN_1004375f4(auStack_78,uVar3 + uVar4 * 0x48 + 0x20,&DAT_100fe90d0,&DAT_100c7f500);
      *unaff_x20 = uVar3;
      uVar2 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar4 + 1;
      unaff_x20[2] = uVar2;
      if (unaff_x20[1] == uVar2) {
        FUN_10087e9c0();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087d04c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087d048);
  (*pcVar1)();
}



/* Address: 0x10087d04c | FUN_10087d04c */

void FUN_10087d04c(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  undefined1 auStack_78 [72];
  
  uVar4 = unaff_x20[2];
  FUN_1005e650c(param_1,auStack_78);
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_10089875c();
  }
  if (-1 < (long)uVar4) {
    if (uVar4 < *(ulong *)(uVar3 + 0x10)) {
      FUN_1004375f4(auStack_78,uVar3 + uVar4 * 0x48 + 0x20,&DAT_100fe90d8,&DAT_100c81b10);
      *unaff_x20 = uVar3;
      uVar2 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar4 + 1;
      unaff_x20[2] = uVar2;
      if (unaff_x20[1] == uVar2) {
        FUN_10087eaf0();
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087d104);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087d100);
  (*pcVar1)();
}



/* Address: 0x10087d104 | FUN_10087d104 */

void FUN_10087d104(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  if (*(char *)((long)param_1 + 0x17) != '\0') {
    return;
  }
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  _swift_beginAccess(*(long *)(*unaff_x20 + 0x68) + 0x120,auStack_48,0x21,0);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  FUN_10087cec4(uVar1,uVar2,uVar3);
  _swift_endAccess(auStack_48);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x10087d198 | FUN_10087d198 */

undefined8 FUN_10087d198(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10087d2b8(param_1,0,0x14000,0x14000,0xfffe);
  return unaff_x20;
}



/* Address: 0x10087d1ec | FUN_10087d1ec */

undefined8 FUN_10087d1ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10087d2b8(param_1,param_2,0x14000,0x14000,0xfffe);
  return unaff_x20;
}



/* Address: 0x10087d24c | FUN_10087d24c */

undefined8
FUN_10087d24c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10087d2b8(param_1,param_2,param_3,param_4,param_5);
  return unaff_x20;
}



/* Address: 0x10087d2b8 | FUN_10087d2b8 */

void FUN_10087d2b8(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *unaff_x20;
  plVar6 = unaff_x20 + 2;
  *plVar6 = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
  unaff_x20[4] = 0;
  unaff_x20[3] = 0;
  unaff_x20[6] = 0;
  unaff_x20[5] = 0;
  unaff_x20[7] = 0;
  *(undefined1 *)(unaff_x20 + 8) = 2;
  unaff_x20[0xc] = 0;
  *(undefined2 *)((long)unaff_x20 + 0x73) = 0;
  unaff_x20[0xf] = 0;
  unaff_x20[9] = 0;
  unaff_x20[10] = 0;
  *(undefined8 *)((long)unaff_x20 + 0x57) = 0;
  _swift_beginAccess(plVar6,auStack_78,0x21,0);
  *plVar6 = (long)puVar3;
  lVar2 = 0;
  FUN_100880a88(0,0x10,0,puVar3);
  *plVar6 = lVar2;
  _swift_endAccess(auStack_78);
  puVar5 = *(undefined **)(lVar7 + 0x50);
  puVar3 = &DAT_100fe90f8;
  FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
  if (puVar5 == puVar3) {
    lVar2 = 0;
  }
  else {
    puVar3 = &DAT_100fe9100;
    FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
    if (puVar5 != puVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087d418);
      (*pcVar1)();
    }
    lVar2 = 1;
  }
  *(char *)((long)unaff_x20 + 0x72) = (char)lVar2;
  uVar4 = 0;
  FUN_100880830(0);
  _swift_allocObject();
  FUN_10087b74c(lVar2,param_3,param_4,param_5,uVar4);
  unaff_x20[0xd] = lVar2;
  *(undefined1 *)(unaff_x20 + 0xe) = param_1;
  *(undefined1 *)((long)unaff_x20 + 0x71) = param_2;
  return;
}



/* Address: 0x10087d418 | FUN_10087d418 */

void FUN_10087d418(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint3 uVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x20;
  long local_c8;
  long *plStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined *local_b0;
  undefined1 local_87;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_68,1,0);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d61c);
    (*pcVar4)();
  }
  uVar3 = *(uint3 *)(unaff_x20 + 0x5c);
  uVar1 = *(uint *)(unaff_x20 + 0x50);
  _swift_beginAccess(lVar9 + 0x18,auStack_80,0,0);
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d620);
    (*pcVar4)();
  }
  uVar2 = (param_1 - (*(long *)(lVar9 + 0x18) + (ulong)uVar1)) -
          (((ulong)uVar3 & 0xffff) << 8 | (ulong)(uVar3 >> 0x10));
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d60c);
    (*pcVar4)();
  }
  if (uVar2 >> 0x20 == 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x50) + (uint)uVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0x50),(uint)uVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d614);
      (*pcVar4)();
    }
    if (*(uint *)(unaff_x20 + 0x54) < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d618);
      (*pcVar4)();
    }
    *(uint *)(unaff_x20 + 0x50) = uVar1;
    lVar9 = *(long *)(unaff_x20 + 0x60);
    if (*(char *)(unaff_x20 + 0x72) == '\x01') {
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d624);
        (*pcVar4)();
      }
      plVar6 = &local_c8;
      uVar8 = 0x21;
      _swift_beginAccess(unaff_x20 + 0x48,plVar6,0x21,0);
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d62c);
        (*pcVar4)();
      }
      param_2 = param_2 - param_1;
      _swift_retain(lVar9);
      FUN_10060c6b4();
      _swift_endAccess(&local_c8);
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d634);
        (*pcVar4)();
      }
      puVar5 = &DAT_100fe9100;
      puVar7 = &DAT_100c803a0;
    }
    else {
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d628);
        (*pcVar4)();
      }
      plVar6 = &local_c8;
      uVar8 = 0x21;
      _swift_beginAccess(unaff_x20 + 0x48,plVar6,0x21,0);
      if (*(long *)(unaff_x20 + 0x48) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d630);
        (*pcVar4)();
      }
      param_2 = param_2 - param_1;
      _swift_retain(lVar9);
      FUN_10060c6b4();
      _swift_endAccess(&local_c8);
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d638);
        (*pcVar4)();
      }
      puVar5 = &DAT_100fe90f8;
      puVar7 = &DAT_100c7f5d0;
    }
    FUN_1000f7830(puVar5,puVar7);
    local_b8 = (undefined4)uVar8;
    local_b2 = (undefined1)((ulong)uVar8 >> 0x30);
    local_b4 = (undefined2)((ulong)uVar8 >> 0x20);
    local_b1 = 1;
    local_87 = 2;
    local_c8 = param_2;
    plStack_c0 = plVar6;
    local_b0 = puVar5;
    FUN_100626ce0(&local_c8);
    _swift_release(lVar9);
    FUN_1005e70f4(&local_c8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10087d610);
  (*pcVar4)();
}



/* Address: 0x10087d638 | FUN_10087d638 */

void FUN_10087d638(undefined *param_1,long param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long unaff_x20;
  char *pcVar11;
  ulong uVar12;
  String SVar13;
  String SVar14;
  tuple2_conflict1 tVar15;
  undefined *local_88;
  long lStack_80;
  undefined *local_70;
  undefined *puStack_68;
  void *pvVar10;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    if (param_1 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(lVar2);
      UVar5.unknown = (undefined *)0x0;
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)(param_2 - (long)param_1);
      _swift_bridgeObjectRetain(lVar2);
      UVar5.unknown = param_1;
    }
    SVar13.bridgeObject = param_3;
    SVar13.str = pcVar11;
    tVar15 = Swift::String::_fromUTF8Repairing(UVar5,SVar13);
    pvVar10 = tVar15._16_8_;
    pvVar9 = tVar15.result.bridgeObject;
    pcVar11 = tVar15.result.str;
    if (pvVar9 == (void *)0x0) {
      local_70 = PTR___type_metadata_for_Swift_UnsafeRawBufferPointer_100eac370;
      puStack_68 = 
      PTR___protocol_witness_table_for_Swift_UnsafeRawBufferPointer___Swift__HasContiguousBytes_in_Swift_100eac378
      ;
      ppuVar4 = &local_88;
      local_88 = param_1;
      lStack_80 = param_2;
      FUN_100004640();
      UVar5.unknown = *ppuVar4;
      if (UVar5.unknown == (undefined *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = ppuVar4[1] + -(long)UVar5.unknown;
      }
      SVar14.bridgeObject = pvVar10;
      SVar14.str = pcVar11;
      tVar15 = Swift::String::_fromUTF8Repairing(UVar5,SVar14);
      pvVar9 = tVar15.result.bridgeObject;
      pcVar11 = tVar15.result.str;
      FUN_100004594(&local_88,pvVar9,tVar15._16_8_);
    }
    _swift_beginAccess(unaff_x20 + 0x10,&local_88,0x21,0);
    uVar12 = *(ulong *)(unaff_x20 + 0x10);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar12;
    uVar8 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
      FUN_100880a88(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(unaff_x20 + 0x10) = uVar8;
    }
    uVar6 = *(ulong *)(uVar8 + 0x10);
    uVar12 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_100880a88(uVar12,uVar6 + 1,1,uVar8);
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    lVar1 = uVar12 + uVar6 * 0x20;
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    *(long *)(lVar1 + 0x28) = lVar2;
    *(char **)(lVar1 + 0x30) = pcVar11;
    *(void **)(lVar1 + 0x38) = pvVar9;
    *(ulong *)(unaff_x20 + 0x10) = uVar12;
    _swift_endAccess(&local_88);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    _swift_bridgeObjectRelease(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10087d7c0);
  (*pcVar3)();
}



/* Address: 0x10087d7c0 | FUN_10087d7c0 */

void FUN_10087d7c0(UnsafeBufferPointer<__int8> param_1,long param_2,void *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  String SVar2;
  tuple2_conflict1 tVar3;
  
  if ((param_1.unknown == (undefined *)0x0) ||
     ((char *)(param_2 - (long)param_1.unknown) == (char *)0x0)) {
    FUN_100881fac();
    _swift_allocError(&DAT_100f0ace8,param_1.unknown,0,0);
    *param_1.unknown = 0xf;
    _swift_willThrow();
  }
  else {
    SVar2.bridgeObject = param_3;
    SVar2.str = (char *)(param_2 - (long)param_1.unknown);
    tVar3 = Swift::String::_fromUTF8Repairing(param_1,SVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    *(char **)(unaff_x20 + 0x20) = tVar3.result.str;
    *(void **)(unaff_x20 + 0x28) = tVar3.result.bridgeObject;
    _swift_bridgeObjectRelease(uVar1,tVar3.result.bridgeObject,tVar3._16_8_);
  }
  return;
}



/* Address: 0x10087d834 | FUN_10087d834 */

void FUN_10087d834(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  void *pvVar9;
  long unaff_x20;
  char *pcVar11;
  ulong uVar12;
  String SVar13;
  String SVar14;
  tuple2_conflict1 tVar15;
  undefined *local_b8;
  long lStack_b0;
  undefined *local_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  void *pvVar10;
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_78,1,0);
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  pvVar9 = (void *)0x21;
  _swift_beginAccess(unaff_x20 + 0x18,auStack_90,0x21,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  if (lVar2 != 0) {
    if (param_1 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(lVar2);
      UVar5.unknown = (undefined *)0x0;
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)(param_2 - (long)param_1);
      _swift_bridgeObjectRetain(lVar2);
      UVar5.unknown = param_1;
    }
    SVar13.bridgeObject = pvVar9;
    SVar13.str = pcVar11;
    tVar15 = Swift::String::_fromUTF8Repairing(UVar5,SVar13);
    pvVar10 = tVar15._16_8_;
    pvVar9 = tVar15.result.bridgeObject;
    pcVar11 = tVar15.result.str;
    if (pvVar9 == (void *)0x0) {
      local_a0 = PTR___type_metadata_for_Swift_UnsafeRawBufferPointer_100eac370;
      puStack_98 = 
      PTR___protocol_witness_table_for_Swift_UnsafeRawBufferPointer___Swift__HasContiguousBytes_in_Swift_100eac378
      ;
      ppuVar4 = &local_b8;
      local_b8 = param_1;
      lStack_b0 = param_2;
      FUN_100004640();
      UVar5.unknown = *ppuVar4;
      if (UVar5.unknown == (undefined *)0x0) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = ppuVar4[1] + -(long)UVar5.unknown;
      }
      SVar14.bridgeObject = pvVar10;
      SVar14.str = pcVar11;
      tVar15 = Swift::String::_fromUTF8Repairing(UVar5,SVar14);
      pvVar9 = tVar15.result.bridgeObject;
      pcVar11 = tVar15.result.str;
      FUN_100004594(&local_b8,pvVar9,tVar15._16_8_);
    }
    uVar12 = *(ulong *)(unaff_x20 + 0x18);
    uVar6 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x18) = uVar12;
    uVar8 = uVar12;
    if ((uVar6 & 1) == 0) {
      uVar8 = 0;
      FUN_100880a88(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(unaff_x20 + 0x18) = uVar8;
    }
    uVar6 = *(ulong *)(uVar8 + 0x10);
    uVar12 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      FUN_100880a88(uVar12,uVar6 + 1,1,uVar8);
    }
    *(ulong *)(uVar12 + 0x10) = uVar6 + 1;
    lVar1 = uVar12 + uVar6 * 0x20;
    *(undefined8 *)(lVar1 + 0x20) = uVar7;
    *(long *)(lVar1 + 0x28) = lVar2;
    *(char **)(lVar1 + 0x30) = pcVar11;
    *(void **)(lVar1 + 0x38) = pvVar9;
    *(ulong *)(unaff_x20 + 0x18) = uVar12;
    _swift_endAccess(auStack_90);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    _swift_bridgeObjectRelease(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10087d9e4);
  (*pcVar3)();
}



/* Address: 0x10087d9e4 | FUN_10087d9e4 */

void FUN_10087d9e4(UnsafeBufferPointer<__int8> param_1,long param_2,void *param_3)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  UnsafeBufferPointer<__int8> UVar3;
  char *pcVar5;
  undefined8 uVar7;
  long unaff_x20;
  String SVar8;
  String SVar9;
  tuple2_conflict1 tVar10;
  undefined *local_58;
  long lStack_50;
  undefined *local_40;
  undefined *puStack_38;
  void *pvVar4;
  void *pvVar6;
  
  if (param_1.unknown == (undefined *)0x0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    tVar10 = Swift::String::_fromUTF8Repairing
                       ((UnsafeBufferPointer<__int8>)0x0,(String)(auVar1 << 0x40));
    pvVar6 = tVar10._16_8_;
    pvVar4 = tVar10.result.bridgeObject;
    pcVar5 = tVar10.result.str;
  }
  else {
    SVar8.str = (char *)(param_2 - (long)param_1.unknown);
    SVar8.bridgeObject = param_3;
    tVar10 = Swift::String::_fromUTF8Repairing(param_1,SVar8);
    pvVar6 = tVar10._16_8_;
    pvVar4 = tVar10.result.bridgeObject;
    pcVar5 = tVar10.result.str;
  }
  if (pvVar4 == (void *)0x0) {
    ppuVar2 = &local_58;
    local_58 = param_1.unknown;
    lStack_50 = param_2;
    local_40 = PTR___type_metadata_for_Swift_UnsafeRawBufferPointer_100eac370;
    puStack_38 = 
    PTR___protocol_witness_table_for_Swift_UnsafeRawBufferPointer___Swift__HasContiguousBytes_in_Swift_100eac378
    ;
    FUN_100004640();
    UVar3.unknown = *ppuVar2;
    if (UVar3.unknown == (undefined *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = ppuVar2[1] + -(long)UVar3.unknown;
    }
    SVar9.bridgeObject = pvVar6;
    SVar9.str = pcVar5;
    tVar10 = Swift::String::_fromUTF8Repairing(UVar3,SVar9);
    pvVar4 = tVar10.result.bridgeObject;
    pcVar5 = tVar10.result.str;
    FUN_100004594(&local_58,pvVar4,tVar10._16_8_);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  *(char **)(unaff_x20 + 0x30) = pcVar5;
  *(void **)(unaff_x20 + 0x38) = pvVar4;
  _swift_bridgeObjectRelease(uVar7);
  return;
}



/* Address: 0x10087daa0 | FUN_10087daa0 */

bool FUN_10087daa0(undefined1 *param_1,ulong param_2,byte param_3,undefined8 param_4,long param_5,
                  uint param_6)

{
  undefined2 uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  long local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  undefined1 auStack_d8 [24];
  long local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  if (param_1 != &DAT_00000001) {
    *(undefined1 *)(unaff_x20 + 0x73) = 1;
    lVar7 = *(long *)(unaff_x20 + 0x60);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087dec0);
      (*pcVar2)();
    }
    puVar4 = param_1;
    FUN_100881fac();
    puVar5 = &DAT_100f0ace8;
    _swift_allocError(&DAT_100f0ace8,puVar4,0,0);
    *puVar4 = 5;
    _swift_retain(lVar7);
    FUN_100626c9c(puVar5);
    _swift_release(lVar7);
    _swift_errorRelease(puVar5);
    goto LAB_10087de64;
  }
  uVar1 = (undefined2)param_2;
  if (*(char *)(unaff_x20 + 0x72) == '\x01') {
    if ((param_5 == 0x65) || (99 < param_5 - 100U)) {
      *(undefined1 *)(unaff_x20 + 0x74) = 0;
      _swift_beginAccess(unaff_x20 + 0x10,auStack_d8,0,0);
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087deb4);
        (*pcVar2)();
      }
      if (param_2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087deb8);
        (*pcVar2)();
      }
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x74) = 1;
      if (*(char *)(unaff_x20 + 0x71) == '\0') {
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        local_a8 = (undefined *)0x0;
        local_b0 = 0;
        local_80 = 0xff00;
        goto LAB_10087dd3c;
      }
      _swift_beginAccess(unaff_x20 + 0x10,auStack_d8,0,0);
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087debc);
        (*pcVar2)();
      }
      if (param_2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10087db34);
        (*pcVar2)();
      }
    }
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain(uVar12);
    uVar9 = 0;
    uVar10 = 0xe000000000000000;
    FUN_1008a2dac();
    lVar7 = 0;
    FUN_1008a3ae8();
    _swift_allocObject();
    *(long *)(lVar7 + 0x10) = param_5;
    *(undefined8 *)(lVar7 + 0x18) = uVar9;
    *(undefined8 *)(lVar7 + 0x20) = uVar10;
    *(undefined2 *)(lVar7 + 0x28) = uVar1;
    *(undefined2 *)(lVar7 + 0x2a) = 1;
    puVar5 = &DAT_100fe9100;
    FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
    local_b0 = (ulong)(param_6 & 0xff);
    local_80 = CONCAT11(2,(undefined1)local_80);
    local_c0 = lVar7;
    uStack_b8 = uVar12;
    local_a8 = puVar5;
  }
  else {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087deac);
      (*pcVar2)();
    }
    if (param_2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087deb0);
      (*pcVar2)();
    }
    FUN_100881248();
    lVar7 = *(long *)(unaff_x20 + 0x38);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087dec8);
      (*pcVar2)();
    }
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    _swift_beginAccess(unaff_x20 + 0x10,auStack_d8,0,0);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar6 = 0;
    FUN_10089bc80();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x10) = param_4;
    *(ulong *)(lVar6 + 0x18) = param_2;
    *(undefined8 *)(lVar6 + 0x20) = uVar9;
    *(long *)(lVar6 + 0x28) = lVar7;
    *(undefined2 *)(lVar6 + 0x30) = uVar1;
    *(undefined2 *)(lVar6 + 0x32) = 1;
    lVar11 = *(long *)(unaff_x20 + 0x78);
    if (lVar11 == 0) {
      _swift_bridgeObjectRetain(lVar7);
      _swift_bridgeObjectRetain(uVar10);
    }
    else {
      _swift_bridgeObjectRetain(lVar7);
      _swift_bridgeObjectRetain(uVar10);
      _swift_retain(lVar11);
      FUN_100881fec(param_4,param_2);
      FUN_10088211c(param_4,param_2);
      FUN_10087b1c4(param_4,param_2);
      _swift_release(lVar11);
    }
    puVar5 = &DAT_100fe90f8;
    FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
    local_b0 = (ulong)(param_6 & 0xff);
    local_80 = CONCAT11(2,(undefined1)local_80);
    local_c0 = lVar6;
    uStack_b8 = uVar10;
    local_a8 = puVar5;
  }
LAB_10087dd3c:
  uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  _swift_bridgeObjectRelease(uVar9);
  _swift_beginAccess(unaff_x20 + 0x10,&local_120,0x21,0);
  iVar3 = (int)*(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar7 = *(long *)(unaff_x20 + 0x10);
  if (iVar3 == 0) {
    uVar9 = 0;
    FUN_1008a1690(0,*(ulong *)(lVar7 + 0x18) >> 1);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar9;
    _swift_bridgeObjectRelease(lVar7);
  }
  else {
    FUN_1008a3b08(0,*(undefined8 *)(lVar7 + 0x10));
  }
  _swift_endAccess(&local_120);
  FUN_1000f8cac(&local_c0,&local_168,&DAT_100fe90d8,&DAT_100c81b10);
  if (local_128._1_1_ == -1) {
    FUN_1000fb4c4(&local_c0,&DAT_100fe90d8,&DAT_100c81b10);
    plVar8 = &local_168;
  }
  else {
    uStack_f8 = uStack_140;
    local_100 = local_148;
    uStack_e8 = uStack_130;
    uStack_f0 = local_138;
    local_e0 = local_128;
    uStack_118 = uStack_160;
    local_120 = local_168;
    uStack_108 = uStack_150;
    uStack_110 = local_158;
    lVar7 = *(long *)(unaff_x20 + 0x60);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087dec4);
      (*pcVar2)();
    }
    _swift_retain(lVar7);
    FUN_100626ce0(&local_120);
    _swift_release(lVar7);
    FUN_1005e70f4(&local_120);
    plVar8 = &local_c0;
  }
  FUN_1000fb4c4(plVar8,&DAT_100fe90d8,&DAT_100c81b10);
  *(byte *)(unaff_x20 + 0x40) = param_3 & 1;
LAB_10087de64:
  return param_1 == &DAT_00000001;
}



/* Address: 0x10087dec8 | FUN_10087dec8 */

void FUN_10087dec8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined1 local_5f;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_58,1,0);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  if (*(char *)(unaff_x20 + 0x72) == '\x01') {
    if ((*(byte *)(unaff_x20 + 0x74) & 1) != 0) {
      _swift_bridgeObjectRelease(lVar5);
      goto LAB_10087dfd4;
    }
    lVar4 = *(long *)(unaff_x20 + 0x60);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e014);
      (*pcVar2)();
    }
    uVar1 = 0;
    if (lVar5 != 0) {
      uVar1 = 2;
    }
    puVar3 = &DAT_100fe9100;
    FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
    local_90 = 0x200000000000000;
    local_5f = 2;
    local_a0 = lVar5;
    uStack_98 = uVar1;
    puStack_88 = puVar3;
    _swift_bridgeObjectRetain(lVar5);
    _swift_retain(lVar4);
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x60);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e010);
      (*pcVar2)();
    }
    uVar1 = 0;
    if (lVar5 != 0) {
      uVar1 = 2;
    }
    puVar3 = &DAT_100fe90f8;
    FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
    local_90 = 0x200000000000000;
    local_5f = 2;
    local_a0 = lVar5;
    uStack_98 = uVar1;
    puStack_88 = puVar3;
    _swift_retain(lVar4);
    _swift_bridgeObjectRetain(lVar5);
  }
  FUN_100626ce0(&local_a0);
  _swift_release(lVar4);
  _swift_bridgeObjectRelease(lVar5);
  FUN_1005e70f4(&local_a0);
LAB_10087dfd4:
  if (*(byte *)(unaff_x20 + 0x40) != 2) {
    *(byte *)(unaff_x20 + 0x73) = *(byte *)(unaff_x20 + 0x40) & 1;
    *(undefined1 *)(unaff_x20 + 0x40) = 2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087e00c);
  (*pcVar2)();
}



/* Address: 0x10087e014 | thunk_FUN_1008819a4 */

void thunk_FUN_1008819a4(void)

{
  FUN_1008819a4();
  return;
}



/* Address: 0x10087e018 | thunk_FUN_100881a7c */

void thunk_FUN_100881a7c(void)

{
  FUN_100881a7c();
  return;
}



/* Address: 0x10087e01c | FUN_10087e01c */

void FUN_10087e01c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  _swift_release(uVar1);
  _swift_retain(param_1);
  FUN_10087cadc(0,0,1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  _swift_release(uVar1);
  return;
}



/* Address: 0x10087e088 | FUN_10087e088 */

void FUN_10087e088(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ushort uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar11 = *param_2;
  uVar2 = *(uint *)(param_2 + 1);
  uVar3 = *(uint *)((long)param_2 + 0xc);
  uVar8 = param_2[1];
  lVar6 = param_2[2];
  uVar5 = *(ushort *)((long)param_2 + 0x14);
  bVar4 = *(byte *)((long)param_2 + 0x16);
  _swift_beginAccess(unaff_x20 + 0x48,auStack_78,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
  *(long *)(unaff_x20 + 0x48) = lVar11;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar8;
  *(byte *)(unaff_x20 + 0x5e) = bVar4;
  *(ushort *)(unaff_x20 + 0x5c) = uVar5;
  *(int *)(unaff_x20 + 0x58) = (int)lVar6;
  _swift_retain(lVar11);
  _swift_release(uVar10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  _swift_release(uVar8);
  _swift_beginAccess(lVar11 + 0x18,auStack_90,0,0);
  lVar6 = *(long *)(lVar11 + 0x18) + (ulong)uVar5 * 0x100 + (ulong)bVar4;
  _swift_retain(param_1);
  uVar9 = lVar6 + (ulong)uVar2;
  FUN_10087cadc(uVar9,lVar6 + (ulong)uVar3,0);
  if (unaff_x21 == 0) {
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10087e1ac);
      (*pcVar7)();
    }
    if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10087e1b0);
      (*pcVar7)();
    }
    uVar1 = uVar2 + (uint)uVar9;
    if (CARRY4(uVar2,(uint)uVar9)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10087e1b4);
      (*pcVar7)();
    }
    if (uVar3 < uVar1) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10087e1b8);
      (*pcVar7)();
    }
    *(uint *)(param_2 + 1) = uVar1;
  }
  FUN_10087e1b8();
  return;
}



/* Address: 0x10087e1b8 | FUN_10087e1b8 */

void FUN_10087e1b8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x48,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x57) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _swift_release(uVar1);
  return;
}



/* Address: 0x10087e20c | FUN_10087e20c */

undefined8 FUN_10087e20c(void)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x73) & 1) == 0) {
    FUN_10087e088();
  }
  return 1;
}



/* Address: 0x10087e22c | FUN_10087e22c */

undefined8 FUN_10087e22c(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  long unaff_x21;
  ulong local_98;
  ulong uStack_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_57;
  
  puVar4 = param_1;
  if ((*(byte *)(unaff_x20 + 0x73) & 1) == 0) {
    if ((*(int *)((long)param_2 + 0xc) != (int)param_2[1]) && (FUN_10087e088(), unaff_x21 != 0)) {
      return 1;
    }
    if ((param_3 & 1) != 0) {
      FUN_10087e01c(param_1);
      return 1;
    }
  }
  puVar1 = param_2 + 1;
  uStack_90 = *puVar1;
  uVar2 = *puVar1;
  if ((*(int *)((long)param_2 + 0xc) != (int)*puVar1) && ((param_3 & 1) == 0)) {
    if (*(char *)(unaff_x20 + 0x70) == '\0') {
      local_98 = *param_2;
      local_88 = (undefined4)param_2[2];
      local_84 = *(undefined2 *)((long)param_2 + 0x14);
      local_82 = *(undefined1 *)((long)param_2 + 0x16);
      local_57 = 0;
      _swift_retain();
      FUN_100626ce0(&local_98);
      FUN_1005e70f4(&local_98);
    }
    else if (*(char *)(unaff_x20 + 0x70) == '\x01') {
      uVar6 = *param_2;
      uVar3 = param_2[2];
      FUN_100881b98();
      puVar5 = &DAT_100eee720;
      _swift_allocError(&DAT_100eee720,puVar4,0,0);
      *puVar4 = uVar6 | 0x8000000000000000;
      puVar4[1] = uVar2;
      puVar4[2] = (ulong)(uint7)uVar3;
      *(undefined1 *)((long)puVar4 + 0x1e) = 0;
      *(undefined2 *)((long)puVar4 + 0x1c) = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      _swift_retain(uVar6);
      FUN_100626c9c(puVar5);
      _swift_errorRelease(puVar5);
    }
  }
  return 1;
}



/* Address: 0x10087e390 | FUN_10087e390 */

void FUN_10087e390(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Address: 0x10087e3e4 | FUN_10087e3e4 */

void FUN_10087e3e4(void)

{
  FUN_10087e390();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10087e404 | FUN_10087e404 */

undefined8 FUN_10087e404(void)

{
  FUN_10087e20c();
  return 1;
}



/* Address: 0x10087e428 | FUN_10087e428 */

undefined8 FUN_10087e428(void)

{
  FUN_10087e22c();
  return 1;
}



/* Address: 0x10087e44c | FUN_10087e44c */

void FUN_10087e44c(void)

{
  FUN_100881a7c();
  return;
}



/* Address: 0x10087e46c | FUN_10087e46c */

void FUN_10087e46c(void)

{
  FUN_1008819a4();
  return;
}



/* Address: 0x10087e48c | FUN_10087e48c */

void FUN_10087e48c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  FUN_100637b60(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x10087e494 | FUN_10087e494 */

void FUN_10087e494(void)

{
  FUN_10087d418();
  return;
}



/* Address: 0x10087e4b4 | FUN_10087e4b4 */

void FUN_10087e4b4(void)

{
  FUN_10087d7c0();
  return;
}



/* Address: 0x10087e4d4 | FUN_10087e4d4 */

void FUN_10087e4d4(void)

{
  FUN_10087d638();
  return;
}



/* Address: 0x10087e4f4 | FUN_10087e4f4 */

void FUN_10087e4f4(void)

{
  FUN_10087d834();
  return;
}



/* Address: 0x10087e514 | FUN_10087e514 */

void FUN_10087e514(void)

{
  FUN_10087d9e4();
  return;
}


