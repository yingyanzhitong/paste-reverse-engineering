/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100aaa288 | FUN_100aaa288 */

void FUN_100aaa288(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x80);
  uVar11 = (uint)(uVar9 >> 0x10);
  uVar1 = uVar11 & 0xff000000;
  uVar6 = 0x100;
  if ((uVar9 & 0x1000000000000) != 0) {
    uVar6 = 0;
  }
  uVar6 = uVar6 | (uint)((uVar9 & 0x100000000000000) >> 0x20);
  if (uVar1 != 0x2000000) {
    uVar6 = uVar6 | 0x200;
  }
  if ((uVar9 & 0xff) == 0) {
    uVar6 = uVar6 | 0x800;
  }
  else if (((uint)uVar9 & 0xff) != 1) {
    uVar6 = uVar6 | 0x400;
  }
  uVar2 = 0x1a4;
  if ((uVar9 & 0xff00000000) != 0x100000000) {
    uVar2 = (short)(uVar9 >> 0x10);
  }
  uVar3 = 0;
  if (uVar1 != 0x2000000) {
    uVar3 = uVar2;
  }
  lVar10 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(lVar10 + 0x31);
  uVar12 = *(undefined8 *)(lVar10 + 0x29);
  uVar16 = *(undefined8 *)(lVar10 + 0x10);
  uVar15 = *(undefined8 *)(lVar10 + 0x28);
  uVar14 = *(undefined8 *)(lVar10 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar12;
  puVar4 = &DAT_100f2fca0;
  _swift_allocObject(&DAT_100f2fca0,0x58,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar4;
  uVar15 = *(undefined8 *)(lVar10 + 0x18);
  uVar14 = *(undefined8 *)(lVar10 + 0x10);
  uVar13 = *(undefined8 *)(lVar10 + 0x28);
  uVar12 = *(undefined8 *)(lVar10 + 0x20);
  uVar16 = *(undefined8 *)(lVar10 + 0x29);
  *(undefined8 *)(puVar4 + 0x31) = *(undefined8 *)(lVar10 + 0x31);
  *(undefined8 *)(puVar4 + 0x29) = uVar16;
  *(undefined8 *)(puVar4 + 0x18) = uVar15;
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  *(undefined8 *)(puVar4 + 0x40) = uVar7;
  *(uint *)(puVar4 + 0x48) = uVar6 | 4;
  *(undefined2 *)(puVar4 + 0x4c) = uVar3;
  puVar4[0x4e] = uVar1 == 0x2000000;
  puVar4[0x50] = (char)uVar9;
  *(uint *)(puVar4 + 0x52) = uVar11;
  puVar4[0x56] = (char)((uVar9 & 0x1000000000000) >> 0x30);
  puVar4[0x57] = (char)((uVar9 & 0x100000000000000) >> 0x38);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar8;
  puVar5 = &DAT_100ff6ce0;
  FUN_1000f7830(&DAT_100ff6ce0,&DAT_100c912e8);
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a5e1fc;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100ab20e4,puVar4,puVar5);
  return;
}



/* Address: 0x100aaa438 | FUN_100aaa438 */

void FUN_100aaa438(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_task_switch(FUN_100aaa454,0,0);
  return;
}



/* Address: 0x100aaa454 | FUN_100aaa454 */

void FUN_100aaa454(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x80);
  uVar11 = (uint)(uVar9 >> 0x10);
  uVar1 = uVar11 & 0xff000000;
  uVar6 = 0x100;
  if ((uVar9 & 0x1000000000000) != 0) {
    uVar6 = 0;
  }
  uVar6 = uVar6 | (uint)((uVar9 & 0x100000000000000) >> 0x20);
  if (uVar1 != 0x2000000) {
    uVar6 = uVar6 | 0x200;
  }
  if ((uVar9 & 0xff) == 0) {
    uVar6 = uVar6 | 0x800;
  }
  else if (((uint)uVar9 & 0xff) != 1) {
    uVar6 = uVar6 | 0x400;
  }
  uVar2 = 0x1a4;
  if ((uVar9 & 0xff00000000) != 0x100000000) {
    uVar2 = (short)(uVar9 >> 0x10);
  }
  uVar3 = 0;
  if (uVar1 != 0x2000000) {
    uVar3 = uVar2;
  }
  lVar10 = *(long *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar13 = *(undefined8 *)(lVar10 + 0x31);
  uVar12 = *(undefined8 *)(lVar10 + 0x29);
  uVar16 = *(undefined8 *)(lVar10 + 0x10);
  uVar15 = *(undefined8 *)(lVar10 + 0x28);
  uVar14 = *(undefined8 *)(lVar10 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar12;
  puVar4 = &DAT_100f2fcc8;
  _swift_allocObject(&DAT_100f2fcc8,0x58,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar4;
  uVar15 = *(undefined8 *)(lVar10 + 0x18);
  uVar14 = *(undefined8 *)(lVar10 + 0x10);
  uVar13 = *(undefined8 *)(lVar10 + 0x28);
  uVar12 = *(undefined8 *)(lVar10 + 0x20);
  uVar16 = *(undefined8 *)(lVar10 + 0x29);
  *(undefined8 *)(puVar4 + 0x31) = *(undefined8 *)(lVar10 + 0x31);
  *(undefined8 *)(puVar4 + 0x29) = uVar16;
  *(undefined8 *)(puVar4 + 0x18) = uVar15;
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x28) = uVar13;
  *(undefined8 *)(puVar4 + 0x20) = uVar12;
  *(undefined8 *)(puVar4 + 0x40) = uVar7;
  *(uint *)(puVar4 + 0x48) = uVar6 | 4;
  *(undefined2 *)(puVar4 + 0x4c) = uVar3;
  puVar4[0x4e] = uVar1 == 0x2000000;
  puVar4[0x50] = (char)uVar9;
  *(uint *)(puVar4 + 0x52) = uVar11;
  puVar4[0x56] = (char)((uVar9 & 0x1000000000000) >> 0x30);
  puVar4[0x57] = (char)((uVar9 & 0x100000000000000) >> 0x38);
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar8 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar8;
  puVar5 = &DAT_100ff6ce0;
  FUN_1000f7830(&DAT_100ff6ce0,&DAT_100c912e8);
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100a606a8;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100ab2100,puVar4,puVar5);
  return;
}



/* Address: 0x100aaa604 | FUN_100aaa604 */

void FUN_100aaa604(undefined8 param_1,undefined2 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3a) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  _swift_task_switch(FUN_100aaa620,0,0);
  return;
}



/* Address: 0x100aaa620 | FUN_100aaa620 */

void FUN_100aaa620(void)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = *(ushort *)(unaff_x22 + 0x3a);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  uVar1 = 0x100000;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0x100100;
  }
  uVar9 = *(undefined8 *)(lVar3 + 0x31);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  uVar12 = *(undefined8 *)(lVar3 + 0x10);
  uVar11 = *(undefined8 *)(lVar3 + 0x28);
  uVar10 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar8;
  puVar5 = &DAT_100f2fcf0;
  _swift_allocObject(&DAT_100f2fcf0,0x4c,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar5;
  uVar11 = *(undefined8 *)(lVar3 + 0x18);
  uVar10 = *(undefined8 *)(lVar3 + 0x10);
  uVar9 = *(undefined8 *)(lVar3 + 0x28);
  uVar8 = *(undefined8 *)(lVar3 + 0x20);
  uVar12 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar5 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar5 + 0x29) = uVar12;
  *(undefined8 *)(puVar5 + 0x18) = uVar11;
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x40) = uVar2;
  *(uint *)(puVar5 + 0x48) = uVar1 | ((byte)(uVar4 >> 8) & 1) << 0x18 | 4;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar7 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  puVar6 = &DAT_100ff6ce0;
  FUN_1000f7830(&DAT_100ff6ce0,&DAT_100c912e8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100aaa734;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100ab21dc,puVar5,puVar6);
  return;
}



/* Address: 0x100aaa734 | FUN_100aaa734 */

void FUN_100aaa734(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x88);
  *(long *)(lVar3 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_100a53494;
  }
  else {
    pcVar2 = thunk_FUN_1002e20ac;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100aaa7a0 | FUN_100aaa7a0 */

void FUN_100aaa7a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100a4c06c(unaff_x20 + 0x10,param_1);
  return;
}



/* Address: 0x100aaa7ac | FUN_100aaa7ac */

long FUN_100aaa7ac(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long unaff_x20;
  pthread_mutexattr_t local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_allocObject();
  puVar3 = &DAT_100ff6ea0;
  FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
  _swift_allocObject();
  *(undefined4 *)(puVar3 + 0x10) = param_1;
  puVar3[0x14] = 0;
  local_68.__sig = 0;
  local_68.__opaque[0] = '\0';
  local_68.__opaque[1] = '\0';
  local_68.__opaque[2] = '\0';
  local_68.__opaque[3] = '\0';
  local_68.__opaque[4] = '\0';
  local_68.__opaque[5] = '\0';
  local_68.__opaque[6] = '\0';
  local_68.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_68);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x18),&local_68);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aaa89c);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined1 *)(unaff_x20 + 0x38) = param_5;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return unaff_x20;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100aaa8a0 | FUN_100aaa8a0 */

void FUN_100aaa8a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long unaff_x20;
  pthread_mutexattr_t local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100ff6ea0;
  FUN_1000f7830(&DAT_100ff6ea0,&DAT_100c91fa0);
  _swift_allocObject();
  *(undefined4 *)(puVar3 + 0x10) = param_1;
  puVar3[0x14] = 0;
  local_68.__sig = 0;
  local_68.__opaque[0] = '\0';
  local_68.__opaque[1] = '\0';
  local_68.__opaque[2] = '\0';
  local_68.__opaque[3] = '\0';
  local_68.__opaque[4] = '\0';
  local_68.__opaque[5] = '\0';
  local_68.__opaque[6] = '\0';
  local_68.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_68);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x18),&local_68);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100aaa978);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined1 *)(unaff_x20 + 0x38) = param_5;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100aaa97c | FUN_100aaa97c */

/* WARNING: Removing unreachable block (ram,0x000100aaaa2c) */

void FUN_100aaa97c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  _swift_retain(lVar7);
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100aaaa28);
    (*pcVar5)();
  }
  FUN_100aaaa30(lVar7 + 0x10);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100aaaa2c);
    (*pcVar5)();
  }
  _swift_release(lVar7);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(uVar2);
  _swift_release(uVar1);
  FUN_1001b9e60(uVar3,uVar8,uVar4);
  return;
}



/* Address: 0x100aaaa30 | FUN_100aaaa30 */

void FUN_100aaaa30(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    return;
  }
  Swift::_StringGuts::grow(0xad,param_2);
  pvVar3 = (void *)0x8000000100dbb1d0;
  SVar4.bridgeObject = (void *)0x8000000100dbb1d0;
  SVar4.str = (char *)0xd000000000000029;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  pcVar2 = *(char **)(param_2.unknown + 0x20);
  FUN_1005b32e4();
  SVar5.bridgeObject = pvVar3;
  SVar5.str = pcVar2;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar5,SVar9);
  _swift_bridgeObjectRelease(pvVar3);
  SVar6.bridgeObject = (void *)0x8000000100dbb200;
  SVar6.str = (char *)0xd000000000000082;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar6,SVar10);
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar7,(StaticString)0x0,0xe000000000000000,0xdb8610);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100aaab0c);
  (*pcVar1)();
}



/* Address: 0x100aaab0c | FUN_100aaab0c */

/* WARNING: Removing unreachable block (ram,0x000100aaabc4) */

void FUN_100aaab0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  _swift_retain(lVar7);
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100aaabc0);
    (*pcVar5)();
  }
  FUN_100aaaa30(lVar7 + 0x10);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x18));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100aaabc4);
    (*pcVar5)();
  }
  _swift_release(lVar7);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(uVar2);
  _swift_release(uVar1);
  FUN_1001b9e60(uVar3,uVar8,uVar4);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100aaabc8 | FUN_100aaabc8 */

void FUN_100aaabc8(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_20f;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_12f;
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
  undefined8 local_60;
  undefined8 uStack_4f;
  undefined8 *puVar4;
  
  puVar5 = &local_330;
  FUN_100aaadf4(&local_200);
  uStack_78 = uStack_158;
  local_80 = local_160;
  uStack_68 = uStack_148;
  uStack_70 = uStack_150;
  local_60 = local_140;
  uStack_4f = uStack_12f;
  uStack_b8 = uStack_198;
  local_c0 = local_1a0;
  uStack_a8 = uStack_188;
  uStack_b0 = uStack_190;
  uStack_98 = uStack_178;
  local_a0 = local_180;
  uStack_88 = uStack_168;
  uStack_90 = uStack_170;
  uStack_f8 = uStack_1d8;
  local_100 = local_1e0;
  uStack_e8 = uStack_1c8;
  uStack_f0 = uStack_1d0;
  uStack_d8 = uStack_1b8;
  local_e0 = local_1c0;
  uStack_c8 = uStack_1a8;
  uStack_d0 = uStack_1b0;
  uStack_118 = uStack_1f8;
  local_120 = local_200;
  uStack_108 = uStack_1e8;
  uStack_110 = uStack_1f0;
  iVar2 = (int)&local_120;
  FUN_100a7bec0();
  if (iVar2 == 1) {
    FUN_100004520(&local_120);
    uStack_238 = uStack_158;
    local_240 = local_160;
    uStack_228 = uStack_148;
    uStack_230 = uStack_150;
    local_220 = local_140;
    uStack_20f = uStack_12f;
    uStack_278 = uStack_198;
    local_280 = local_1a0;
    uStack_268 = uStack_188;
    uStack_270 = uStack_190;
    uStack_258 = uStack_178;
    local_260 = local_180;
    uStack_248 = uStack_168;
    uStack_250 = uStack_170;
    uStack_2b8 = uStack_1d8;
    local_2c0 = local_1e0;
    uStack_2a8 = uStack_1c8;
    uStack_2b0 = uStack_1d0;
    uStack_298 = uStack_1b8;
    local_2a0 = local_1c0;
    uStack_288 = uStack_1a8;
    uStack_290 = uStack_1b0;
    uStack_2d8 = uStack_1f8;
    local_2e0 = local_200;
    uStack_2c8 = uStack_1e8;
    uStack_2d0 = uStack_1f0;
    puVar3 = &local_2e0;
    FUN_100004520();
    uStack_328 = puVar3[1];
    local_330 = *puVar3;
    uStack_318 = puVar3[3];
    local_320 = puVar3[2];
    uStack_308 = puVar3[5];
    local_310 = puVar3[4];
    uStack_2f8 = puVar3[7];
    uStack_300 = puVar3[6];
    local_2f0 = puVar3[8];
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar4 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_330,&DAT_100f2de38,puVar4);
      puVar4 = puVar5;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar4,0,0);
    uVar6 = *puVar3;
    puVar4[1] = puVar3[1];
    *puVar4 = uVar6;
    uVar9 = puVar3[5];
    uVar8 = puVar3[4];
    uVar7 = puVar3[7];
    uVar6 = puVar3[6];
    uVar11 = puVar3[3];
    uVar10 = puVar3[2];
    puVar4[8] = puVar3[8];
    puVar4[5] = uVar9;
    puVar4[4] = uVar8;
    puVar4[7] = uVar7;
    puVar4[6] = uVar6;
    puVar4[3] = uVar11;
    puVar4[2] = uVar10;
  }
  else {
    FUN_100004520(&local_120);
    uStack_238 = uStack_158;
    local_240 = local_160;
    uStack_228 = uStack_148;
    uStack_230 = uStack_150;
    local_220 = local_140;
    uStack_20f = uStack_12f;
    uStack_278 = uStack_198;
    local_280 = local_1a0;
    uStack_268 = uStack_188;
    uStack_270 = uStack_190;
    uStack_258 = uStack_178;
    local_260 = local_180;
    uStack_248 = uStack_168;
    uStack_250 = uStack_170;
    uStack_2b8 = uStack_1d8;
    local_2c0 = local_1e0;
    uStack_2a8 = uStack_1c8;
    uStack_2b0 = uStack_1d0;
    uStack_298 = uStack_1b8;
    local_2a0 = local_1c0;
    uStack_288 = uStack_1a8;
    uStack_290 = uStack_1b0;
    uStack_2d8 = uStack_1f8;
    local_2e0 = local_200;
    uStack_2c8 = uStack_1e8;
    uStack_2d0 = uStack_1f0;
    puVar5 = &local_2e0;
    FUN_100004520();
    uVar6 = puVar5[0x14];
    uVar8 = puVar5[0x17];
    uVar7 = puVar5[0x16];
    param_1[0x15] = puVar5[0x15];
    param_1[0x14] = uVar6;
    param_1[0x17] = uVar8;
    param_1[0x16] = uVar7;
    uVar6 = puVar5[0x18];
    param_1[0x19] = puVar5[0x19];
    param_1[0x18] = uVar6;
    param_1[0x1a] = puVar5[0x1a];
    uVar6 = puVar5[0xc];
    uVar8 = puVar5[0xf];
    uVar7 = puVar5[0xe];
    param_1[0xd] = puVar5[0xd];
    param_1[0xc] = uVar6;
    param_1[0xf] = uVar8;
    param_1[0xe] = uVar7;
    uVar6 = puVar5[0x10];
    uVar8 = puVar5[0x13];
    uVar7 = puVar5[0x12];
    param_1[0x11] = puVar5[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar8;
    param_1[0x12] = uVar7;
    uVar6 = puVar5[4];
    uVar8 = puVar5[7];
    uVar7 = puVar5[6];
    param_1[5] = puVar5[5];
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    uVar6 = puVar5[8];
    uVar8 = puVar5[0xb];
    uVar7 = puVar5[10];
    param_1[9] = puVar5[9];
    param_1[8] = uVar6;
    param_1[0xb] = uVar8;
    param_1[10] = uVar7;
    uVar6 = *puVar5;
    uVar8 = puVar5[3];
    uVar7 = puVar5[2];
    param_1[1] = puVar5[1];
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
  }
  return;
}



/* Address: 0x100aaadec | FUN_100aaadec */

void FUN_100aaadec(void)

{
  FUN_100a51c64(0x39);
  return;
}



/* Address: 0x100aaadf4 | FUN_100aaadf4 */

void FUN_100aaadf4(ulong *param_1,undefined8 param_2,_StringGuts param_3,char *param_4,void *param_5
                  )

{
  undefined4 uVar1;
  char cVar2;
  ushort uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  __uint16 _Var8;
  int iVar9;
  char *pcVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined *puVar14;
  void *pvVar15;
  long *unaff_x20;
  long lVar16;
  undefined1 uVar17;
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
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  ulong local_660;
  ulong uStack_658;
  ulong uStack_650;
  undefined *local_648;
  ulong local_640;
  undefined1 *puStack_638;
  ulong uStack_630;
  ulong local_628;
  ulong local_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong local_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong local_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong local_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong local_5a0;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined8 uStack_58f;
  undefined1 local_578;
  undefined7 uStack_577;
  ulong uStack_570;
  ulong local_568;
  undefined *puStack_560;
  ulong local_558;
  undefined1 *puStack_550;
  ulong uStack_548;
  ulong local_540;
  ulong local_538;
  ulong local_530;
  ulong uStack_528;
  ulong uStack_520;
  undefined *puStack_518;
  ulong local_510;
  undefined1 *puStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong local_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong local_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong local_4b0;
  ulong uStack_4a8;
  ulong local_4a0;
  ulong uStack_498;
  ulong local_490;
  ulong uStack_488;
  ulong local_480;
  ulong uStack_478;
  ulong local_470;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 local_460;
  undefined7 uStack_45f;
  undefined1 uStack_458;
  ulong local_450;
  ulong uStack_448;
  ulong local_440;
  undefined *local_438;
  ulong uStack_430;
  undefined1 *local_428;
  ulong local_420;
  ulong local_418;
  ulong local_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong local_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong local_3d0;
  ulong uStack_3c8;
  ulong local_3c0;
  ulong uStack_3b8;
  ulong local_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong local_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined8 uStack_37f;
  ulong local_370;
  ulong uStack_368;
  ulong local_360;
  undefined *local_358;
  ulong uStack_350;
  undefined1 *local_348;
  ulong local_340;
  ulong local_338;
  ulong local_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong local_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong local_2f0;
  ulong uStack_2e8;
  undefined8 local_2e0;
  ulong local_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong local_2b0;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  ulong local_290;
  ulong uStack_288;
  ulong local_280;
  undefined *puStack_278;
  ulong local_270;
  undefined1 *puStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong local_250;
  ulong uStack_248;
  ulong local_240;
  ulong uStack_238;
  ulong local_230;
  ulong uStack_228;
  ulong local_220;
  ulong uStack_218;
  ulong local_210;
  ulong uStack_208;
  ulong local_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined8 uStack_1bf;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  undefined *puStack_190;
  ulong local_188;
  undefined1 *puStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong local_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong local_128;
  ulong uStack_120;
  undefined1 local_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  ulong local_f0;
  undefined1 *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined1 local_80;
  
  puVar13 = &local_660;
  lVar16 = *unaff_x20;
  iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x18));
  if (iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100aab564);
    (*pcVar7)();
  }
  uVar1 = *(undefined4 *)(lVar16 + 0x10);
  cVar2 = *(char *)(lVar16 + 0x14);
  iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x18));
  if (iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100aab568);
    (*pcVar7)();
  }
  if (cVar2 == '\x01') {
    local_290 = 0;
    uStack_288 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,param_3);
    _swift_bridgeObjectRelease(uStack_288);
    local_290 = 0xd000000000000019;
    uStack_288 = 0x8000000100dbae50;
    pvVar15 = (void *)0xec0000002720656c;
    SVar18.bridgeObject = (void *)0xec0000002720656c;
    SVar18.str = (char *)0x696620656874202c;
    SVar26.bridgeObject = param_5;
    SVar26.str = param_4;
    Swift::String::append(SVar18,SVar26);
    pcVar10 = (char *)unaff_x20[2];
    FUN_1005b32e4();
    SVar19.bridgeObject = pvVar15;
    SVar19.str = pcVar10;
    SVar27.bridgeObject = param_5;
    SVar27.str = param_4;
    Swift::String::append(SVar19,SVar27);
    _swift_bridgeObjectRelease(pvVar15);
    SVar20.bridgeObject = (void *)0xec0000002e646573;
    SVar20.str = (char *)0x6f6c632073692027;
    SVar28.bridgeObject = param_5;
    SVar28.str = param_4;
    Swift::String::append(SVar20,SVar28);
    local_450 = local_450 & 0xffffffffffffff00;
    uStack_448 = local_290;
    local_440 = uStack_288;
    uStack_430 = 0x29286f666e695f;
    local_438 = (undefined *)0x0;
    local_428 = &DAT_e700000000000000;
    local_420 = 0xd000000000000025;
    local_418 = 0x8000000100db85f0;
    local_410 = 0x192;
    local_370 = local_370 & 0xffffffffffffff00;
    uStack_368 = local_290;
    local_360 = uStack_288;
    uStack_350 = 0x29286f666e695f;
    local_358 = (undefined *)0x0;
    local_348 = &DAT_e700000000000000;
    local_340 = 0xd000000000000025;
    local_338 = 0x8000000100db85f0;
    local_330 = 0x192;
    FUN_100a50050(&local_450,&local_290);
    FUN_100a5008c(&local_370);
    puStack_268 = local_428;
    local_270 = uStack_430;
    uStack_258 = local_418;
    uStack_260 = local_420;
    local_250 = local_410;
    local_280 = local_440;
    puStack_278 = local_438;
    local_290 = local_450;
    uStack_288 = uStack_448;
  }
  else {
    FUN_100aa5ed8(&local_1a8,uVar1);
    uStack_a8 = uStack_140;
    local_b0 = local_148;
    uStack_98 = uStack_130;
    uStack_a0 = uStack_138;
    uStack_88 = uStack_120;
    local_90 = local_128;
    local_80 = local_118;
    puStack_e8 = puStack_180;
    local_f0 = local_188;
    uStack_d8 = uStack_170;
    uStack_e0 = uStack_178;
    uStack_c8 = uStack_160;
    local_d0 = local_168;
    uStack_b8 = uStack_150;
    uStack_c0 = uStack_158;
    uStack_108 = uStack_1a0;
    local_110 = local_1a8;
    puStack_f8 = puStack_190;
    uStack_100 = uStack_198;
    iVar9 = (int)&local_110;
    FUN_10092c924();
    if (iVar9 == 1) {
      FUN_100004520(&local_110);
      uStack_3e8 = uStack_140;
      local_3f0 = local_148;
      uStack_3d8 = uStack_130;
      uStack_3e0 = uStack_138;
      uStack_3c8 = uStack_120;
      local_3d0 = local_128;
      local_3c0 = CONCAT71(local_3c0._1_7_,local_118);
      local_428 = puStack_180;
      uStack_430 = local_188;
      local_418 = uStack_170;
      local_420 = uStack_178;
      uStack_408 = uStack_160;
      local_410 = local_168;
      uStack_3f8 = uStack_150;
      uStack_400 = uStack_158;
      uStack_448 = uStack_1a0;
      local_450 = local_1a8;
      local_438 = puStack_190;
      local_440 = uStack_198;
      puVar11 = &local_450;
      FUN_100004520();
      local_290 = CONCAT44(local_290._4_4_,(int)*puVar11);
      FUN_100a7bee0(&local_290);
      uStack_2c8 = uStack_1e8;
      local_2d0 = local_1f0;
      uStack_2b8 = uStack_1d8;
      uStack_2c0 = local_1e0;
      uStack_2a8 = uStack_1c8;
      local_2b0 = local_1d0;
      uStack_29f = (undefined7)uStack_1bf;
      uStack_298 = (undefined1)((ulong)uStack_1bf >> 0x38);
      uStack_2a7 = uStack_1c7;
      uStack_2a0 = uStack_1c0;
      uStack_308 = uStack_228;
      local_310 = local_230;
      uStack_2f8 = uStack_218;
      uStack_300 = local_220;
      uStack_2e8 = uStack_208;
      local_2f0 = local_210;
      local_2d8 = uStack_1f8;
      local_2e0 = local_200;
      local_348 = puStack_268;
      uStack_350 = local_270;
      local_338 = uStack_258;
      local_340 = uStack_260;
      uStack_328 = uStack_248;
      local_330 = local_250;
      uStack_318 = uStack_238;
      uStack_320 = local_240;
      uStack_368 = uStack_288;
      local_370 = local_290;
      local_358 = puStack_278;
      local_360 = local_280;
    }
    else {
      FUN_100004520(&local_110);
      uStack_4c8 = uStack_140;
      local_4d0 = local_148;
      uStack_4b8 = uStack_130;
      uStack_4c0 = uStack_138;
      uStack_4a8 = uStack_120;
      local_4b0 = local_128;
      local_4a0 = CONCAT71(local_4a0._1_7_,local_118);
      puStack_508 = puStack_180;
      local_510 = local_188;
      uStack_4f8 = uStack_170;
      uStack_500 = uStack_178;
      uStack_4e8 = uStack_160;
      local_4f0 = local_168;
      uStack_4d8 = uStack_150;
      uStack_4e0 = uStack_158;
      uStack_528 = uStack_1a0;
      local_530 = local_1a8;
      puStack_518 = puStack_190;
      uStack_520 = uStack_198;
      puVar11 = &local_530;
      FUN_100004520();
      FUN_100a4af18(&local_450);
      uStack_288 = puVar11[1];
      local_290 = *puVar11;
      puStack_278 = (undefined *)puVar11[3];
      local_280 = puVar11[2];
      puStack_268 = (undefined1 *)puVar11[5];
      local_270 = puVar11[4];
      uStack_258 = puVar11[7];
      uStack_260 = puVar11[6];
      uStack_248 = puVar11[9];
      local_250 = puVar11[8];
      uStack_238 = puVar11[0xb];
      local_240 = puVar11[10];
      uStack_228 = puVar11[0xd];
      local_230 = puVar11[0xc];
      uStack_218 = puVar11[0xf];
      local_220 = puVar11[0xe];
      uStack_208 = puVar11[0x11];
      local_210 = puVar11[0x10];
      FUN_1005b8d54(&local_290);
      uStack_308 = uStack_228;
      local_310 = local_230;
      uStack_2f8 = uStack_218;
      uStack_300 = local_220;
      uStack_2e8 = uStack_208;
      local_2f0 = local_210;
      local_2e0 = CONCAT71(local_2e0._1_7_,(undefined1)local_200);
      local_348 = puStack_268;
      uStack_350 = local_270;
      local_338 = uStack_258;
      local_340 = uStack_260;
      uStack_328 = uStack_248;
      local_330 = local_250;
      uStack_318 = uStack_238;
      uStack_320 = local_240;
      uStack_368 = uStack_288;
      local_370 = local_290;
      local_358 = puStack_278;
      local_360 = local_280;
      uVar3 = *(ushort *)((long)puVar11 + 4);
      uVar17 = (undefined1)uVar3;
      FUN_100a87258();
      local_2e0._0_2_ = CONCAT11(uVar17,(undefined1)local_2e0);
      _Var8 = Darwin::get_S_IFMT();
      local_2e0._0_4_ = CONCAT22(uVar3 & (_Var8 ^ 0xffff),(undefined2)local_2e0);
      local_2d8 = puVar11[0xc];
      local_2d0 = puVar11[2];
      uStack_2c0 = puVar11[5];
      uStack_2c8 = puVar11[4];
      local_2b0 = puVar11[7];
      uStack_2b8 = puVar11[6];
      uStack_2a0 = (undefined1)puVar11[9];
      uStack_29f = (undefined7)(puVar11[9] >> 8);
      uStack_2a8 = (undefined1)puVar11[8];
      uStack_2a7 = (undefined7)(puVar11[8] >> 8);
      FUN_100a7bf20(&local_370);
    }
    uStack_3a8 = uStack_2c8;
    local_3b0 = local_2d0;
    uStack_398 = uStack_2b8;
    uStack_3a0 = uStack_2c0;
    uStack_388 = uStack_2a8;
    local_390 = local_2b0;
    uStack_37f = CONCAT17(uStack_298,uStack_29f);
    uStack_387 = uStack_2a7;
    uStack_380 = uStack_2a0;
    uStack_3e8 = uStack_308;
    local_3f0 = local_310;
    uStack_3d8 = uStack_2f8;
    uStack_3e0 = uStack_300;
    uStack_3c8 = uStack_2e8;
    local_3d0 = local_2f0;
    uStack_3b8 = local_2d8;
    local_3c0 = local_2e0;
    local_428 = local_348;
    uStack_430 = uStack_350;
    local_418 = local_338;
    local_420 = local_340;
    uStack_408 = uStack_328;
    local_410 = local_330;
    uStack_3f8 = uStack_318;
    uStack_400 = uStack_320;
    uStack_448 = uStack_368;
    local_450 = local_370;
    local_438 = local_358;
    local_440 = local_360;
    iVar9 = (int)&local_450;
    FUN_100a7bec0();
    if (iVar9 != 1) {
      uStack_5b8 = uStack_3a8;
      local_5c0 = local_3b0;
      uStack_5a8 = uStack_398;
      uStack_5b0 = uStack_3a0;
      uStack_598 = uStack_388;
      local_5a0 = local_390;
      uStack_58f = uStack_37f;
      uStack_597 = uStack_387;
      uStack_590 = uStack_380;
      uStack_5f8 = uStack_3e8;
      local_600 = local_3f0;
      uStack_5e8 = uStack_3d8;
      uStack_5f0 = uStack_3e0;
      uStack_5d8 = uStack_3c8;
      local_5e0 = local_3d0;
      uStack_5c8 = uStack_3b8;
      uStack_5d0 = local_3c0;
      puStack_638 = local_428;
      local_640 = uStack_430;
      local_628 = local_418;
      uStack_630 = local_420;
      uStack_618 = uStack_408;
      local_620 = local_410;
      uStack_608 = uStack_3f8;
      uStack_610 = uStack_400;
      uStack_658 = uStack_448;
      local_660 = local_450;
      local_648 = local_438;
      uStack_650 = local_440;
      FUN_100004520();
      uStack_528 = puVar13[1];
      local_530 = *puVar13;
      puStack_518 = (undefined *)puVar13[3];
      uStack_520 = puVar13[2];
      uStack_4e8 = puVar13[9];
      local_4f0 = puVar13[8];
      uStack_4d8 = puVar13[0xb];
      uStack_4e0 = puVar13[10];
      puStack_508 = (undefined1 *)puVar13[5];
      local_510 = puVar13[4];
      uStack_4f8 = puVar13[7];
      uStack_500 = puVar13[6];
      uStack_4a8 = puVar13[0x11];
      local_4b0 = puVar13[0x10];
      uStack_498 = puVar13[0x13];
      local_4a0 = puVar13[0x12];
      uStack_4c8 = puVar13[0xd];
      local_4d0 = puVar13[0xc];
      uStack_4b8 = puVar13[0xf];
      uStack_4c0 = puVar13[0xe];
      uStack_478 = puVar13[0x17];
      local_480 = puVar13[0x16];
      local_470 = puVar13[0x18];
      uStack_488 = puVar13[0x15];
      local_490 = puVar13[0x14];
      local_460 = (undefined1)puVar13[0x1a];
      uStack_45f = (undefined7)(puVar13[0x1a] >> 8);
      uStack_468 = (undefined1)puVar13[0x19];
      uStack_467 = (undefined7)(puVar13[0x19] >> 8);
      FUN_100a7bf20(&local_530);
      uStack_1e8 = uStack_488;
      local_1f0 = local_490;
      uStack_1d8 = uStack_478;
      local_1e0 = local_480;
      uStack_1c8 = uStack_468;
      local_1d0 = local_470;
      uStack_1bf = CONCAT17(uStack_458,uStack_45f);
      uStack_1c7 = uStack_467;
      uStack_1c0 = local_460;
      uStack_228 = uStack_4c8;
      local_230 = local_4d0;
      uStack_218 = uStack_4b8;
      local_220 = uStack_4c0;
      uStack_208 = uStack_4a8;
      local_210 = local_4b0;
      uStack_1f8 = uStack_498;
      local_200 = local_4a0;
      puStack_268 = puStack_508;
      local_270 = local_510;
      uStack_258 = uStack_4f8;
      uStack_260 = uStack_500;
      uStack_248 = uStack_4e8;
      local_250 = local_4f0;
      uStack_238 = uStack_4d8;
      local_240 = uStack_4e0;
      uStack_288 = uStack_528;
      local_290 = local_530;
      puStack_278 = puStack_518;
      local_280 = uStack_520;
      goto LAB_100aab4f0;
    }
    uStack_488 = uStack_3a8;
    local_490 = local_3b0;
    uStack_478 = uStack_398;
    local_480 = uStack_3a0;
    uStack_468 = uStack_388;
    local_470 = local_390;
    uStack_45f = (undefined7)uStack_37f;
    uStack_458 = (undefined1)((ulong)uStack_37f >> 0x38);
    uStack_467 = uStack_387;
    local_460 = uStack_380;
    uStack_4c8 = uStack_3e8;
    local_4d0 = local_3f0;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    uStack_4a8 = uStack_3c8;
    local_4b0 = local_3d0;
    uStack_498 = uStack_3b8;
    local_4a0 = local_3c0;
    puStack_508 = local_428;
    local_510 = uStack_430;
    uStack_4f8 = local_418;
    uStack_500 = local_420;
    uStack_4e8 = uStack_408;
    local_4f0 = local_410;
    uStack_4d8 = uStack_3f8;
    uStack_4e0 = uStack_400;
    uStack_528 = uStack_448;
    local_530 = local_450;
    puStack_518 = local_438;
    uStack_520 = local_440;
    puVar13 = &local_530;
    FUN_100004520();
    uVar4 = *puVar13;
    pcVar10 = (char *)unaff_x20[2];
    if ((int)uVar4 == 9) {
      local_290 = 0;
      uStack_288 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x39,param_3);
      pvVar15 = (void *)0x8000000100db8e20;
      SVar21.bridgeObject = (void *)0x8000000100db8e20;
      SVar21.str = (char *)0xd000000000000021;
      SVar29.bridgeObject = param_5;
      SVar29.str = param_4;
      Swift::String::append(SVar21,SVar29);
      FUN_1005b32e4();
      SVar22.bridgeObject = pvVar15;
      SVar22.str = pcVar10;
      SVar30.bridgeObject = param_5;
      SVar30.str = param_4;
      Swift::String::append(SVar22,SVar30);
      _swift_bridgeObjectRelease(pvVar15);
      puVar12 = (undefined8 *)0xd000000000000016;
      SVar23.bridgeObject = (void *)0x8000000100db8e50;
      SVar23.str = (char *)0xd000000000000016;
      SVar31.bridgeObject = param_5;
      SVar31.str = param_4;
      Swift::String::append(SVar23,SVar31);
      uVar17 = 0;
    }
    else {
      local_290 = 0;
      uStack_288 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x25,param_3);
      _swift_bridgeObjectRelease(uStack_288);
      local_290 = 0xd000000000000021;
      uStack_288 = 0x8000000100db8e20;
      FUN_1005b32e4();
      SVar24.bridgeObject = param_3.unknown;
      SVar24.str = pcVar10;
      SVar32.bridgeObject = param_5;
      SVar32.str = param_4;
      Swift::String::append(SVar24,SVar32);
      _swift_bridgeObjectRelease(param_3.unknown);
      SVar25.bridgeObject = &SUB_e200000000000000;
      SVar25.str = (char *)0x2e27;
      puVar12 = (undefined8 *)0x2e27;
      SVar33.bridgeObject = param_5;
      SVar33.str = param_4;
      Swift::String::append(SVar25,SVar33);
      uVar17 = 8;
    }
    uVar6 = uStack_288;
    uVar5 = local_290;
    FUN_100a57a58();
    puVar14 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar12,0,0);
    *puVar12 = 0x7461747366;
    puVar12[1] = &DAT_e500000000000000;
    *(int *)(puVar12 + 2) = (int)uVar4;
    uStack_570 = uVar5;
    local_568 = uVar6;
    local_558 = 0x29286f666e695f;
    puStack_550 = &DAT_e700000000000000;
    uStack_548 = 0xd000000000000025;
    local_540 = 0x8000000100db85f0;
    local_538 = 0x18b;
    local_660 = CONCAT71(local_660._1_7_,uVar17);
    uStack_658 = uVar5;
    uStack_650 = uVar6;
    local_640 = 0x29286f666e695f;
    puStack_638 = &DAT_e700000000000000;
    uStack_630 = 0xd000000000000025;
    local_628 = 0x8000000100db85f0;
    local_620 = 0x18b;
    local_648 = puVar14;
    local_578 = uVar17;
    puStack_560 = puVar14;
    FUN_100a50050(&local_578,&local_290);
    FUN_100a5008c(&local_660);
    puStack_268 = puStack_550;
    local_270 = local_558;
    uStack_258 = local_540;
    uStack_260 = uStack_548;
    local_250 = local_538;
    local_290 = CONCAT71(uStack_577,local_578);
    local_280 = local_568;
    puStack_278 = puStack_560;
    uStack_288 = uStack_570;
  }
  FUN_100a7bee0(&local_290);
LAB_100aab4f0:
  param_1[0x15] = uStack_1e8;
  param_1[0x14] = local_1f0;
  param_1[0x17] = uStack_1d8;
  param_1[0x16] = local_1e0;
  param_1[0x19] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[0x18] = local_1d0;
  *(undefined8 *)((long)param_1 + 0xd1) = uStack_1bf;
  *(ulong *)((long)param_1 + 0xc9) = CONCAT17(uStack_1c0,uStack_1c7);
  param_1[0xd] = uStack_228;
  param_1[0xc] = local_230;
  param_1[0xf] = uStack_218;
  param_1[0xe] = local_220;
  param_1[0x11] = uStack_208;
  param_1[0x10] = local_210;
  param_1[0x13] = uStack_1f8;
  param_1[0x12] = local_200;
  param_1[5] = (ulong)puStack_268;
  param_1[4] = local_270;
  param_1[7] = uStack_258;
  param_1[6] = uStack_260;
  param_1[9] = uStack_248;
  param_1[8] = local_250;
  param_1[0xb] = uStack_238;
  param_1[10] = local_240;
  param_1[1] = uStack_288;
  *param_1 = local_290;
  param_1[3] = (ulong)puStack_278;
  param_1[2] = local_280;
  return;
}



/* Address: 0x100aab568 | FUN_100aab568 */

void FUN_100aab568(undefined8 param_1,undefined8 param_2)

{
  FUN_100aab5b0(param_2);
  return;
}



/* Address: 0x100aab58c | FUN_100aab58c */

void FUN_100aab58c(void)

{
  long unaff_x20;
  
  FUN_100aab5b0(*(undefined2 *)(unaff_x20 + 0x3a));
  return;
}



/* Address: 0x100aab5b0 | FUN_100aab5b0 */

void FUN_100aab5b0(Darwin *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  __int32 _Var12;
  char *pcVar13;
  undefined7 extraout_var;
  ulong *puVar15;
  void *pvVar16;
  long *unaff_x20;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_1a0 [72];
  undefined1 local_158;
  undefined7 uStack_157;
  ulong uStack_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong local_128;
  ulong uStack_120;
  ulong local_118;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong *puVar14;
  
  lVar17 = *unaff_x20;
  iVar10 = _pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 0x18));
  if (iVar10 != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100aab898);
    (*pcVar8)();
  }
  cVar1 = *(char *)(lVar17 + 0x14);
  iVar10 = 0;
  if (cVar1 != '\x01') {
    iVar10 = *(int *)(lVar17 + 0x10);
  }
  iVar11 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 0x18));
  if (iVar11 == 0) {
    if (cVar1 == '\x01') {
      local_110 = 0;
      uStack_108 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1c,param_2);
      _swift_bridgeObjectRelease(uStack_108);
      local_110 = 0xd00000000000001d;
      uStack_108 = 0x8000000100dbae70;
      pvVar16 = (void *)0xec0000002720656c;
      SVar18.bridgeObject = (void *)0xec0000002720656c;
      SVar18.str = (char *)0x696620656874202c;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar18,SVar21);
      pcVar13 = (char *)unaff_x20[2];
      FUN_1005b32e4();
      SVar19.bridgeObject = pvVar16;
      SVar19.str = pcVar13;
      SVar22.bridgeObject = param_4;
      SVar22.str = param_3;
      Swift::String::append(SVar19,SVar22);
      _swift_bridgeObjectRelease(pvVar16);
      SVar20.bridgeObject = (void *)0xec0000002e646573;
      SVar20.str = (char *)0x6f6c632073692027;
      SVar23.bridgeObject = param_4;
      SVar23.str = param_3;
      Swift::String::append(SVar20,SVar23);
      uStack_100 = uStack_108;
      uVar2 = local_110;
      local_158 = 0;
      uStack_150 = local_110;
      uStack_148 = uStack_108;
      uStack_138 = 0xd000000000000017;
      local_140 = 0;
      local_130 = 0x8000000100dbae90;
      local_128 = 0xd000000000000025;
      uStack_120 = 0x8000000100db85f0;
      local_118 = 0x1a5;
      local_110 = local_110 & 0xffffffffffffff00;
      uStack_108 = uVar2;
      uStack_f0 = 0xd000000000000017;
      local_f8 = 0;
      local_e8 = 0x8000000100dbae90;
      uStack_e0 = 0xd000000000000025;
      local_d8 = 0x8000000100db85f0;
      local_d0 = 0x1a5;
      FUN_100a50050(&local_158,auStack_1a0);
      puVar15 = &local_110;
      FUN_100a5008c();
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar15,0,0);
      uVar2 = CONCAT71(uStack_157,local_158);
      puVar15[1] = uStack_150;
      *puVar15 = uVar2;
      uVar7 = uStack_120;
      uVar6 = local_128;
      uVar5 = local_130;
      uVar4 = uStack_138;
      uVar3 = local_140;
      uVar2 = uStack_148;
      puVar15[8] = local_118;
      puVar15[5] = uVar5;
      puVar15[4] = uVar4;
      puVar15[7] = uVar7;
      puVar15[6] = uVar6;
      puVar15[3] = uVar3;
      puVar15[2] = uVar2;
      _swift_willThrow();
    }
    else {
      do {
        Darwin::set_errno(param_1,0);
        iVar11 = _fchmod(iVar10,(mode_t)param_1);
        if (iVar11 != -1) {
          return;
        }
        _Var12 = Darwin::get_errno();
      } while (_Var12 == 4);
      local_78 = &DAT_d000000000000032;
      uStack_70 = 0x8000000100dbaeb0;
      local_68 = 0xd000000000000025;
      uStack_60 = 0x8000000100db85f0;
      local_58 = 0x206;
      FUN_100a812fc(&local_c0,0,param_1,param_1,_Var12,unaff_x20[2],&local_78);
      local_e8 = uStack_98;
      uStack_f0 = local_a0;
      local_d8 = uStack_88;
      uStack_e0 = uStack_90;
      local_d0 = local_80;
      uStack_108 = uStack_b8;
      local_110 = local_c0;
      local_f8 = uStack_a8;
      uStack_100 = uStack_b0;
      bVar9 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar14 = (ulong *)CONCAT71(extraout_var,bVar9);
      puVar15 = puVar14;
      if ((bVar9 & 1) != 0) {
        FUN_100a500c0();
        puVar15 = &local_110;
        _swift_willThrowTypedImpl(puVar15,&DAT_100f2de38,puVar14);
      }
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar15,0,0);
      puVar15[5] = uStack_98;
      puVar15[4] = local_a0;
      puVar15[7] = uStack_88;
      puVar15[6] = uStack_90;
      puVar15[8] = local_80;
      puVar15[1] = uStack_b8;
      *puVar15 = local_c0;
      puVar15[3] = uStack_a8;
      puVar15[2] = uStack_b0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x100aab89c);
  (*pcVar8)();
}



/* Address: 0x100aab89c | FUN_100aab89c */

void FUN_100aab89c(undefined2 *param_1,undefined8 param_2,undefined2 param_3)

{
  long unaff_x21;
  
  FUN_100aab8e8();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100aab8cc | FUN_100aab8cc */

void FUN_100aab8cc(void)

{
  FUN_100ab31cc(FUN_100aab8e8);
  return;
}



/* Address: 0x100aab8e8 | FUN_100aab8e8 */

void FUN_100aab8e8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  char *pcVar11;
  ulong *puVar12;
  void *pvVar13;
  long *unaff_x20;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_128 [72];
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_42 [2];
  
  lVar14 = *unaff_x20;
  iVar10 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x18));
  if (iVar10 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100aabad0);
    (*pcVar9)();
  }
  uVar1 = *(undefined4 *)(lVar14 + 0x10);
  cVar2 = *(char *)(lVar14 + 0x14);
  iVar10 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x18));
  if (iVar10 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100aabad4);
    (*pcVar9)();
  }
  if (cVar2 == '\x01') {
    local_98 = 0;
    local_90 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,param_2);
    _swift_bridgeObjectRelease(local_90);
    local_98 = 0xd000000000000019;
    local_90 = 0x8000000100dbaef0;
    pvVar13 = (void *)0xec0000002720656c;
    SVar15.bridgeObject = (void *)0xec0000002720656c;
    SVar15.str = (char *)0x696620656874202c;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar15,SVar18);
    pcVar11 = (char *)unaff_x20[2];
    FUN_1005b32e4();
    SVar16.bridgeObject = pvVar13;
    SVar16.str = pcVar11;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar16,SVar19);
    _swift_bridgeObjectRelease(pvVar13);
    SVar17.bridgeObject = (void *)0xec0000002e646573;
    SVar17.str = (char *)0x6f6c632073692027;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar17,SVar20);
    uStack_88 = local_90;
    uVar3 = local_98;
    local_e0 = 0;
    uStack_d8 = local_98;
    uStack_d0 = local_90;
    uStack_c0 = 0xd000000000000013;
    local_c8 = 0;
    local_b8 = 0x8000000100dbaf10;
    uStack_b0 = 0xd000000000000025;
    local_a8 = 0x8000000100db85f0;
    local_a0 = 0x1cc;
    local_98 = local_98 & 0xffffffffffffff00;
    local_90 = uVar3;
    uStack_78 = 0xd000000000000013;
    local_80 = 0;
    local_70 = 0x8000000100dbaf10;
    uStack_68 = 0xd000000000000025;
    local_60 = 0x8000000100db85f0;
    uStack_58 = 0x1cc;
    FUN_100a50050(&local_e0,auStack_128);
    puVar12 = &local_98;
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar12,0,0);
    uVar3 = CONCAT71(uStack_df,local_e0);
    puVar12[1] = uStack_d8;
    *puVar12 = uVar3;
    uVar8 = local_a8;
    uVar7 = uStack_b0;
    uVar6 = local_b8;
    uVar5 = uStack_c0;
    uVar4 = local_c8;
    uVar3 = uStack_d0;
    puVar12[8] = local_a0;
    puVar12[5] = uVar6;
    puVar12[4] = uVar5;
    puVar12[7] = uVar8;
    puVar12[6] = uVar7;
    puVar12[3] = uVar4;
    puVar12[2] = uVar3;
    _swift_willThrow();
  }
  else {
    FUN_100aade1c(local_42,uVar1,param_1);
  }
  return;
}



/* Address: 0x100aabad4 | FUN_100aabad4 */

void FUN_100aabad4(undefined2 *param_1,undefined8 param_2,undefined2 param_3)

{
  long unaff_x21;
  
  FUN_100aabb28();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100aabb04 | FUN_100aabb04 */

void FUN_100aabb04(void)

{
  FUN_100a51c64(0x3c);
  return;
}



/* Address: 0x100aabb0c | FUN_100aabb0c */

void FUN_100aabb0c(void)

{
  FUN_100ab31cc(FUN_100aabb28);
  return;
}



/* Address: 0x100aabb28 | FUN_100aabb28 */

void FUN_100aabb28(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  int iVar10;
  char *pcVar11;
  ulong *puVar12;
  void *pvVar13;
  long *unaff_x20;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_128 [72];
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_42 [2];
  
  lVar14 = *unaff_x20;
  iVar10 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x18));
  if (iVar10 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100aabd10);
    (*pcVar9)();
  }
  uVar1 = *(undefined4 *)(lVar14 + 0x10);
  cVar2 = *(char *)(lVar14 + 0x14);
  iVar10 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x18));
  if (iVar10 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100aabd14);
    (*pcVar9)();
  }
  if (cVar2 == '\x01') {
    local_98 = 0;
    local_90 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,param_2);
    _swift_bridgeObjectRelease(local_90);
    local_98 = 0xd00000000000001c;
    local_90 = 0x8000000100dbaf30;
    pvVar13 = (void *)0xec0000002720656c;
    SVar15.bridgeObject = (void *)0xec0000002720656c;
    SVar15.str = (char *)0x696620656874202c;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar15,SVar18);
    pcVar11 = (char *)unaff_x20[2];
    FUN_1005b32e4();
    SVar16.bridgeObject = pvVar13;
    SVar16.str = pcVar11;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar16,SVar19);
    _swift_bridgeObjectRelease(pvVar13);
    SVar17.bridgeObject = (void *)0xec0000002e646573;
    SVar17.str = (char *)0x6f6c632073692027;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar17,SVar20);
    uStack_88 = local_90;
    uVar3 = local_98;
    local_e0 = 0;
    uStack_d8 = local_98;
    uStack_d0 = local_90;
    uStack_c0 = 0xd000000000000016;
    local_c8 = 0;
    local_b8 = 0x8000000100dbaf50;
    uStack_b0 = 0xd000000000000025;
    local_a8 = 0x8000000100db85f0;
    local_a0 = 500;
    local_98 = local_98 & 0xffffffffffffff00;
    local_90 = uVar3;
    uStack_78 = 0xd000000000000016;
    local_80 = 0;
    local_70 = 0x8000000100dbaf50;
    uStack_68 = 0xd000000000000025;
    local_60 = 0x8000000100db85f0;
    uStack_58 = 500;
    FUN_100a50050(&local_e0,auStack_128);
    puVar12 = &local_98;
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar12,0,0);
    uVar3 = CONCAT71(uStack_df,local_e0);
    puVar12[1] = uStack_d8;
    *puVar12 = uVar3;
    uVar8 = local_a8;
    uVar7 = uStack_b0;
    uVar6 = local_b8;
    uVar5 = uStack_c0;
    uVar4 = local_c8;
    uVar3 = uStack_d0;
    puVar12[8] = local_a0;
    puVar12[5] = uVar6;
    puVar12[4] = uVar5;
    puVar12[7] = uVar8;
    puVar12[6] = uVar7;
    puVar12[3] = uVar4;
    puVar12[2] = uVar3;
    _swift_willThrow();
  }
  else {
    FUN_100aae264(local_42,uVar1,param_1);
  }
  return;
}



/* Address: 0x100aabd14 | FUN_100aabd14 */

void FUN_100aabd14(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100aabd6c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100aabd40 | FUN_100aabd40 */

void FUN_100aabd40(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100aabd6c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100aabd6c | FUN_100aabd6c */

void FUN_100aabd6c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined4 uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  undefined7 extraout_var;
  ulong *puVar14;
  void *pvVar15;
  long *unaff_x20;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auStack_190 [72];
  undefined1 local_148;
  undefined7 uStack_147;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong *puVar13;
  
  lVar16 = *unaff_x20;
  iVar11 = _pthread_mutex_lock((pthread_mutex_t *)(lVar16 + 0x18));
  if (iVar11 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100aac01c);
    (*pcVar9)();
  }
  uVar1 = *(undefined4 *)(lVar16 + 0x10);
  cVar2 = *(char *)(lVar16 + 0x14);
  iVar11 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar16 + 0x18));
  if (iVar11 == 0) {
    if (cVar2 == '\x01') {
      local_100 = 0;
      uStack_f8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1c,param_2);
      _swift_bridgeObjectRelease(uStack_f8);
      local_100 = 0xd000000000000022;
      uStack_f8 = 0x8000000100dbaf70;
      pvVar15 = (void *)0xec0000002720656c;
      SVar17.bridgeObject = (void *)0xec0000002720656c;
      SVar17.str = (char *)0x696620656874202c;
      SVar20.bridgeObject = param_4;
      SVar20.str = param_3;
      Swift::String::append(SVar17,SVar20);
      pcVar12 = (char *)unaff_x20[2];
      FUN_1005b32e4();
      SVar18.bridgeObject = pvVar15;
      SVar18.str = pcVar12;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar18,SVar21);
      _swift_bridgeObjectRelease(pvVar15);
      SVar19.bridgeObject = (void *)0xec0000002e646573;
      SVar19.str = (char *)0x6f6c632073692027;
      SVar22.bridgeObject = param_4;
      SVar22.str = param_3;
      Swift::String::append(SVar19,SVar22);
      uStack_f0 = uStack_f8;
      uVar3 = local_100;
      local_148 = 0;
      uStack_140 = local_100;
      uStack_138 = uStack_f8;
      uStack_128 = 0xd000000000000011;
      local_130 = 0;
      local_120 = 0x8000000100dbafa0;
      local_118 = 0xd000000000000025;
      uStack_110 = 0x8000000100db85f0;
      local_108 = 0x216;
      local_100 = local_100 & 0xffffffffffffff00;
      uStack_f8 = uVar3;
      uStack_e0 = 0xd000000000000011;
      local_e8 = 0;
      local_d8 = 0x8000000100dbafa0;
      uStack_d0 = 0xd000000000000025;
      local_c8 = 0x8000000100db85f0;
      local_c0 = 0x216;
      FUN_100a50050(&local_148,auStack_190);
      puVar14 = &local_100;
      FUN_100a5008c();
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar14,0,0);
      uVar3 = CONCAT71(uStack_147,local_148);
      puVar14[1] = uStack_140;
      *puVar14 = uVar3;
      uVar8 = uStack_110;
      uVar7 = local_118;
      uVar6 = local_120;
      uVar5 = uStack_128;
      uVar4 = local_130;
      uVar3 = uStack_138;
      puVar14[8] = local_108;
      puVar14[5] = uVar6;
      puVar14[4] = uVar5;
      puVar14[7] = uVar8;
      puVar14[6] = uVar7;
      puVar14[3] = uVar4;
      puVar14[2] = uVar3;
      _swift_willThrow();
    }
    else {
      FUN_100aa6460(uVar1);
      if (((uint)param_2.unknown & 0xff) == 1) {
        local_68 = 0xd000000000000011;
        uStack_60 = 0x8000000100dbafa0;
        local_58 = 0xd000000000000025;
        uStack_50 = 0x8000000100db85f0;
        local_48 = 0x20f;
        FUN_100a8188c(&local_b0);
        local_d8 = uStack_88;
        uStack_e0 = local_90;
        local_c8 = uStack_78;
        uStack_d0 = uStack_80;
        local_c0 = local_70;
        uStack_f8 = uStack_a8;
        local_100 = local_b0;
        local_e8 = uStack_98;
        uStack_f0 = uStack_a0;
        bVar10 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar13 = (ulong *)CONCAT71(extraout_var,bVar10);
        puVar14 = puVar13;
        if ((bVar10 & 1) != 0) {
          FUN_100a500c0();
          puVar14 = &local_100;
          _swift_willThrowTypedImpl(puVar14,&DAT_100f2de38,puVar13);
        }
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar14,0,0);
        puVar14[5] = uStack_88;
        puVar14[4] = local_90;
        puVar14[7] = uStack_78;
        puVar14[6] = uStack_80;
        puVar14[8] = local_70;
        puVar14[1] = uStack_a8;
        *puVar14 = local_b0;
        puVar14[3] = uStack_98;
        puVar14[2] = uStack_a0;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100aac020);
  (*pcVar9)();
}



/* Address: 0x100aac020 | FUN_100aac020 */

void FUN_100aac020(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_100aac068(param_3,param_4);
  if (unaff_x21 == 0) {
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100aac054 | FUN_100aac054 */

void FUN_100aac054(void)

{
  FUN_100ab319c();
  return;
}



/* Address: 0x100aac068 | FUN_100aac068 */

void FUN_100aac068(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puVar7;
  
  puVar8 = &local_150;
  lVar10 = *unaff_x20;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aac264);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar10 + 0x10);
  cVar2 = *(char *)(lVar10 + 0x14);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x18));
  if (iVar5 == 0) {
    if (cVar2 == '\x01') {
      FUN_100aae6b4(&local_c0);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,unaff_x20,0,0);
      unaff_x20[5] = lStack_98;
      unaff_x20[4] = local_a0;
      unaff_x20[7] = lStack_88;
      unaff_x20[6] = lStack_90;
      unaff_x20[8] = local_80;
      unaff_x20[1] = lStack_b8;
      *unaff_x20 = local_c0;
      unaff_x20[3] = lStack_a8;
      unaff_x20[2] = lStack_b0;
      _swift_willThrow();
    }
    else {
      uVar6 = param_1;
      uVar9 = param_2;
      FUN_100aa67b4(param_1,param_2,uVar1);
      if (((((uint)uVar9 & 0xff) == 1) && ((int)uVar6 != 0x5d)) && ((int)uVar6 != 0x60)) {
        local_78 = 0xd000000000000016;
        uStack_70 = 0x8000000100dbafc0;
        local_68 = 0xd000000000000025;
        uStack_60 = 0x8000000100db85f0;
        local_58 = 0x22f;
        FUN_100a81bc4(&local_108,param_1,param_2,uVar6,unaff_x20[2],&local_78);
        uStack_128 = uStack_e0;
        local_130 = local_e8;
        uStack_118 = uStack_d0;
        uStack_120 = local_d8;
        local_110 = local_c8;
        uStack_148 = uStack_100;
        local_150 = local_108;
        uStack_138 = uStack_f0;
        uStack_140 = local_f8;
        bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar7 = (undefined8 *)CONCAT71(extraout_var,bVar4);
        if ((bVar4 & 1) != 0) {
          FUN_100a500c0();
          _swift_willThrowTypedImpl(&local_150,&DAT_100f2de38,puVar7);
          puVar7 = puVar8;
        }
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar7,0,0);
        puVar7[5] = uStack_e0;
        puVar7[4] = local_e8;
        puVar7[7] = uStack_d0;
        puVar7[6] = local_d8;
        puVar7[8] = local_c8;
        puVar7[1] = uStack_100;
        *puVar7 = local_108;
        puVar7[3] = uStack_f0;
        puVar7[2] = local_f8;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100aac268);
  (*pcVar3)();
}



/* Address: 0x100aac268 | FUN_100aac268 */

void FUN_100aac268(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  }
  lVar1 = *(long *)(lVar4 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x49 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2,lVar4);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aac300 | FUN_100aac300 */

void FUN_100aac300(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar3 = uVar3 + 0x49 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)(unaff_x20 + (*(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_100aac350(unaff_x20 + uVar3,*puVar1,puVar1[1],*(long *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100aac350 | FUN_100aac350 */

void FUN_100aac350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long *unaff_x20;
  long lVar5;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar5 = *unaff_x20;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aac464);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100aaeae0(&local_c8);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,unaff_x20,0,0);
      unaff_x20[5] = lStack_a0;
      unaff_x20[4] = local_a8;
      unaff_x20[7] = lStack_90;
      unaff_x20[6] = local_98;
      unaff_x20[8] = local_88;
      unaff_x20[1] = lStack_c0;
      *unaff_x20 = local_c8;
      unaff_x20[3] = lStack_b0;
      unaff_x20[2] = local_b8;
      _swift_willThrow();
    }
    else {
      local_70 = uVar1;
      local_68 = param_2;
      uStack_60 = param_3;
      FUN_100aae858(FUN_100ab32b4,auStack_80,param_1,param_4,param_5);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100aac468);
  (*pcVar3)();
}



/* Address: 0x100aac468 | FUN_100aac468 */

void FUN_100aac468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100aac4b4(param_2,param_3);
  return;
}



/* Address: 0x100aac490 | FUN_100aac490 */

void FUN_100aac490(void)

{
  long unaff_x20;
  
  FUN_100aac4b4(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100aac4b4 | FUN_100aac4b4 */

void FUN_100aac4b4(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  byte bVar4;
  int iVar5;
  __int32 _Var6;
  undefined7 extraout_var;
  undefined8 *puVar8;
  Darwin *unaff_x20;
  long lVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puVar7;
  
  puVar8 = &local_160;
  lVar9 = *(long *)unaff_x20;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)(lVar9 + 0x18));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aac6bc);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar9 + 0x10);
  cVar2 = *(char *)(lVar9 + 0x14);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x18));
  if (iVar5 == 0) {
    if (cVar2 == '\x01') {
      FUN_100aaec84(&local_c0);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,unaff_x20,0,0);
      *(undefined8 *)(unaff_x20 + 0x28) = uStack_98;
      *(undefined8 *)(unaff_x20 + 0x20) = local_a0;
      *(undefined8 *)(unaff_x20 + 0x38) = uStack_88;
      *(undefined8 *)(unaff_x20 + 0x30) = uStack_90;
      *(undefined8 *)(unaff_x20 + 0x40) = local_80;
      *(undefined8 *)(unaff_x20 + 8) = uStack_b8;
      *(undefined8 *)unaff_x20 = local_c0;
      *(undefined8 *)(unaff_x20 + 0x18) = uStack_a8;
      *(undefined8 *)(unaff_x20 + 0x10) = uStack_b0;
      _swift_willThrow();
    }
    else {
      Darwin::set_errno(unaff_x20,0);
      local_150 = CONCAT44(local_150._4_4_,uVar1);
      FUN_1005b958c(&local_10c,FUN_100ab2cdc,&local_160,param_1,param_2,
                    PTR___type_metadata_for_Swift_Int32_100eadbd0);
      if (local_10c == -1) {
        _Var6 = Darwin::get_errno();
        local_78 = 0xd00000000000001c;
        uStack_70 = 0x8000000100dbafe0;
        local_68 = 0xd000000000000025;
        uStack_60 = 0x8000000100db85f0;
        local_58 = 0x26d;
        FUN_100a8238c(&local_108,param_1,param_2,_Var6,*(undefined8 *)(unaff_x20 + 0x10),&local_78);
        uStack_138 = uStack_e0;
        local_140 = local_e8;
        uStack_128 = uStack_d0;
        uStack_130 = local_d8;
        local_120 = local_c8;
        uStack_158 = uStack_100;
        local_160 = local_108;
        uStack_148 = uStack_f0;
        local_150 = local_f8;
        bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        puVar7 = (undefined8 *)CONCAT71(extraout_var,bVar4);
        if ((bVar4 & 1) != 0) {
          FUN_100a500c0();
          _swift_willThrowTypedImpl(&local_160,&DAT_100f2de38,puVar7);
          puVar7 = puVar8;
        }
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar7,0,0);
        puVar7[5] = uStack_e0;
        puVar7[4] = local_e8;
        puVar7[7] = uStack_d0;
        puVar7[6] = local_d8;
        puVar7[8] = local_c8;
        puVar7[1] = uStack_100;
        *puVar7 = local_108;
        puVar7[3] = uStack_f0;
        puVar7[2] = local_f8;
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100aac6c0);
  (*pcVar3)();
}



/* Address: 0x100aac6c0 | FUN_100aac6c0 */

void FUN_100aac6c0(void)

{
  FUN_100aac700();
  return;
}



/* Address: 0x100aac6e0 | FUN_100aac6e0 */

void FUN_100aac6e0(void)

{
  FUN_100aac700();
  return;
}



/* Address: 0x100aac700 | FUN_100aac700 */

void FUN_100aac700(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  byte bVar10;
  int iVar11;
  __int32 _Var12;
  char *pcVar13;
  undefined7 extraout_var;
  ulong *puVar15;
  void *pvVar16;
  long *unaff_x20;
  Darwin *this;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_190 [72];
  undefined1 local_148;
  undefined7 uStack_147;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong local_118;
  ulong uStack_110;
  ulong local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulong *puVar14;
  
  lVar17 = *unaff_x20;
  iVar11 = _pthread_mutex_lock((pthread_mutex_t *)(lVar17 + 0x18));
  if (iVar11 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100aac9d4);
    (*pcVar9)();
  }
  cVar2 = *(char *)(lVar17 + 0x14);
  uVar1 = 0;
  if (cVar2 != '\x01') {
    uVar1 = *(uint *)(lVar17 + 0x10);
  }
  this = (Darwin *)(ulong)uVar1;
  iVar11 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar17 + 0x18));
  if (iVar11 == 0) {
    if (cVar2 == '\x01') {
      local_100 = 0;
      uStack_f8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1c,param_2);
      _swift_bridgeObjectRelease(uStack_f8);
      local_100 = 0xd000000000000015;
      uStack_f8 = 0x8000000100dbb000;
      pvVar16 = (void *)0xec0000002720656c;
      SVar18.bridgeObject = (void *)0xec0000002720656c;
      SVar18.str = (char *)0x696620656874202c;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      Swift::String::append(SVar18,SVar21);
      pcVar13 = (char *)unaff_x20[2];
      FUN_1005b32e4();
      SVar19.bridgeObject = pvVar16;
      SVar19.str = pcVar13;
      SVar22.bridgeObject = param_4;
      SVar22.str = param_3;
      Swift::String::append(SVar19,SVar22);
      _swift_bridgeObjectRelease(pvVar16);
      SVar20.bridgeObject = (void *)0xec0000002e646573;
      SVar20.str = (char *)0x6f6c632073692027;
      SVar23.bridgeObject = param_4;
      SVar23.str = param_3;
      Swift::String::append(SVar20,SVar23);
      uStack_f0 = uStack_f8;
      uVar3 = local_100;
      local_148 = 0;
      uStack_140 = local_100;
      uStack_138 = uStack_f8;
      uStack_128._0_1_ = '_';
      uStack_128._1_1_ = 's';
      uStack_128._2_1_ = 'y';
      uStack_128._3_1_ = 'n';
      uStack_128._4_1_ = 'c';
      uStack_128._5_1_ = 'h';
      uStack_128._6_1_ = 'r';
      uStack_128._7_1_ = 'o';
      local_130 = 0;
      local_120 = 0xee002928657a696e;
      local_118 = 0xd000000000000025;
      uStack_110 = 0x8000000100db85f0;
      local_108 = 0x285;
      local_100 = local_100 & 0xffffffffffffff00;
      uStack_f8 = uVar3;
      uStack_e0._0_1_ = '_';
      uStack_e0._1_1_ = 's';
      uStack_e0._2_1_ = 'y';
      uStack_e0._3_1_ = 'n';
      uStack_e0._4_1_ = 'c';
      uStack_e0._5_1_ = 'h';
      uStack_e0._6_1_ = 'r';
      uStack_e0._7_1_ = 'o';
      local_e8 = 0;
      local_d8 = 0xee002928657a696e;
      uStack_d0 = 0xd000000000000025;
      local_c8 = 0x8000000100db85f0;
      local_c0 = 0x285;
      FUN_100a50050(&local_148,auStack_190);
      puVar15 = &local_100;
      FUN_100a5008c();
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar15,0,0);
      uVar3 = CONCAT71(uStack_147,local_148);
      puVar15[1] = uStack_140;
      *puVar15 = uVar3;
      uVar8 = uStack_110;
      uVar7 = local_118;
      uVar6 = local_120;
      uVar5 = uStack_128;
      uVar4 = local_130;
      uVar3 = uStack_138;
      puVar15[8] = local_108;
      puVar15[5] = uVar6;
      puVar15[4] = uVar5;
      puVar15[7] = uVar8;
      puVar15[6] = uVar7;
      puVar15[3] = uVar4;
      puVar15[2] = uVar3;
      _swift_willThrow();
    }
    else {
      do {
        Darwin::set_errno(this,0);
        iVar11 = _fsync((int)this);
        if (iVar11 != -1) {
          return;
        }
        _Var12 = Darwin::get_errno();
      } while (_Var12 == 4);
      local_68 = 0x6f7268636e79735f;
      uStack_60 = 0xee002928657a696e;
      local_58 = 0xd000000000000025;
      uStack_50 = 0x8000000100db85f0;
      local_48 = 0x27e;
      FUN_100a82730(&local_b0,_Var12,unaff_x20[2],&local_68);
      local_d8 = uStack_88;
      uStack_e0 = local_90;
      local_c8 = uStack_78;
      uStack_d0 = uStack_80;
      local_c0 = local_70;
      uStack_f8 = uStack_a8;
      local_100 = local_b0;
      local_e8 = uStack_98;
      uStack_f0 = uStack_a0;
      bVar10 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      puVar14 = (ulong *)CONCAT71(extraout_var,bVar10);
      puVar15 = puVar14;
      if ((bVar10 & 1) != 0) {
        FUN_100a500c0();
        puVar15 = &local_100;
        _swift_willThrowTypedImpl(puVar15,&DAT_100f2de38,puVar14);
      }
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar15,0,0);
      puVar15[5] = uStack_88;
      puVar15[4] = local_90;
      puVar15[7] = uStack_78;
      puVar15[6] = uStack_80;
      puVar15[8] = local_70;
      puVar15[1] = uStack_a8;
      *puVar15 = local_b0;
      puVar15[3] = uStack_98;
      puVar15[2] = uStack_a0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100aac9d8);
  (*pcVar9)();
}



/* Address: 0x100aac9d8 | FUN_100aac9d8 */

void FUN_100aac9d8(undefined8 param_1,long *param_2,code *param_3)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = *param_2;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aacac0);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100aacb34(&local_98);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,param_2,0,0);
      param_2[5] = lStack_70;
      param_2[4] = local_78;
      param_2[7] = lStack_60;
      param_2[6] = local_68;
      param_2[8] = local_58;
      param_2[1] = lStack_90;
      *param_2 = local_98;
      param_2[3] = lStack_80;
      param_2[2] = local_88;
      _swift_willThrow();
    }
    else {
      (*param_3)(param_1,uVar1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100aacac4);
  (*pcVar3)();
}



/* Address: 0x100aacac4 | FUN_100aacac4 */

void FUN_100aacac4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100aacb14 | FUN_100aacb14 */

void FUN_100aacb14(void)

{
  long unaff_x20;
  
  FUN_100aac9d8(unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50)
                ,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100aacb34 | FUN_100aacb34 */

void FUN_100aacb34(undefined8 *param_1,long param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined1 auStack_118 [72];
  undefined1 local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x16,param_3);
  _swift_bridgeObjectRelease(local_80);
  local_88 = 0xd000000000000011;
  local_80 = 0x8000000100dbb370;
  pcVar2 = *(char **)(param_2 + 0x10);
  FUN_1005b32e4();
  SVar3.bridgeObject = param_3.unknown;
  SVar3.str = pcVar2;
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(param_3.unknown);
  SVar4.bridgeObject = (void *)0xe300000000000000;
  SVar4.str = (char *)0x2e2927;
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar4,SVar6);
  uStack_78 = local_80;
  uVar1 = local_88;
  local_d0 = 0;
  uStack_c8 = local_88;
  uStack_c0 = local_80;
  uStack_b0 = 0xd000000000000018;
  local_b8 = 0;
  local_a8 = 0x8000000100dbb390;
  uStack_a0 = 0xd000000000000025;
  local_98 = 0x8000000100db85f0;
  local_90 = 0x10b;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = uVar1;
  uStack_68 = 0xd000000000000018;
  local_70 = 0;
  local_60 = 0x8000000100dbb390;
  uStack_58 = 0xd000000000000025;
  local_50 = 0x8000000100db85f0;
  uStack_48 = 0x10b;
  FUN_100a50050(&local_d0,auStack_118);
  FUN_100a5008c(&local_88);
  param_1[5] = local_a8;
  param_1[4] = uStack_b0;
  param_1[7] = local_98;
  param_1[6] = uStack_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = CONCAT71(uStack_cf,local_d0);
  param_1[3] = local_b8;
  param_1[2] = uStack_c0;
  return;
}



/* Address: 0x100aacc54 | FUN_100aacc54 */

void FUN_100aacc54(int *param_1,int *param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  __int32 _Var8;
  char *pcVar9;
  ulong *puVar10;
  ulong *puVar11;
  void *pvVar12;
  undefined8 uVar13;
  Darwin *this;
  ulong uVar14;
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
  String SVar26;
  undefined1 auStack_210 [80];
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  ulong local_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  char cStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong local_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  char cStack_d8;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  char local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  iVar1 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (iVar1 == 0) {
      local_120 = 0;
      uStack_118 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x54,param_3);
      pvVar12 = (void *)0x8000000100dbb4a0;
      SVar18.bridgeObject = (void *)0x8000000100dbb4a0;
      SVar18.str = (char *)0xd00000000000002c;
      SVar24.bridgeObject = param_5;
      SVar24.str = param_4;
      Swift::String::append(SVar18,SVar24);
      pcVar9 = *(char **)(param_3.unknown + 0x20);
      FUN_1005b32e4();
      SVar19.bridgeObject = pvVar12;
      SVar19.str = pcVar9;
      SVar25.bridgeObject = param_5;
      SVar25.str = param_4;
      Swift::String::append(SVar19,SVar25);
      _swift_bridgeObjectRelease(pvVar12);
      SVar20.bridgeObject = (void *)0x8000000100dbb4d0;
      SVar20.str = (char *)0xd000000000000026;
      SVar26.bridgeObject = param_5;
      SVar26.str = param_4;
      Swift::String::append(SVar20,SVar26);
      uVar13 = 0x14c;
      uStack_160 = uStack_118;
    }
    else {
      local_120 = 0;
      uStack_118 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x62,param_3);
      pvVar12 = (void *)0x8000000100dbb410;
      SVar15.bridgeObject = (void *)0x8000000100dbb410;
      SVar15.str = (char *)0xd00000000000002b;
      SVar21.bridgeObject = param_5;
      SVar21.str = param_4;
      Swift::String::append(SVar15,SVar21);
      pcVar9 = *(char **)(param_3.unknown + 0x20);
      FUN_1005b32e4();
      SVar16.bridgeObject = pvVar12;
      SVar16.str = pcVar9;
      SVar22.bridgeObject = param_5;
      SVar22.str = param_4;
      Swift::String::append(SVar16,SVar22);
      _swift_bridgeObjectRelease(pvVar12);
      SVar17.bridgeObject = (void *)0x8000000100dbb440;
      SVar17.str = (char *)0xd000000000000035;
      SVar23.bridgeObject = param_5;
      SVar23.str = param_4;
      Swift::String::append(SVar17,SVar23);
      uVar13 = 0x157;
      uStack_160 = uStack_118;
    }
    uStack_168 = local_120;
    local_140 = 0xd000000000000025;
    local_148 = 0x8000000100dbb480;
    uStack_150 = 0xd00000000000001c;
    local_158 = 0;
    local_170 = local_170 & 0xffffffffffffff00;
    uStack_138 = 0xf0;
    uStack_137 = 0x8000000100db85;
    uStack_130 = (undefined1)uVar13;
    uStack_12f = (undefined7)((ulong)uVar13 >> 8);
    local_120 = local_120 & 0xffffffffffffff00;
    uStack_118 = uStack_168;
    uStack_100 = 0xd00000000000001c;
    local_108 = 0;
    local_f8 = 0x8000000100dbb480;
    uStack_f0 = 0xd000000000000025;
    local_e8 = 0xf0;
    uStack_e7 = 0x8000000100db85;
    local_110 = uStack_160;
    uStack_e0 = uStack_130;
    uStack_df = uStack_12f;
    FUN_100a50050(&local_170,auStack_210);
    puVar11 = &local_120;
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar11,0,0);
    uVar14 = local_170;
    puVar11[1] = uStack_168;
    *puVar11 = uVar14;
    uVar6 = local_140;
    uVar5 = local_148;
    uVar4 = uStack_150;
    uVar3 = local_158;
    uVar2 = uStack_160;
    uVar14 = CONCAT71(uStack_137,uStack_138);
    puVar11[8] = CONCAT71(uStack_12f,uStack_130);
    puVar11[5] = uVar5;
    puVar11[4] = uVar4;
    puVar11[7] = uVar14;
    puVar11[6] = uVar6;
    puVar11[3] = uVar3;
    puVar11[2] = uVar2;
    _swift_willThrow();
    return;
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  this = *(Darwin **)(param_3.unknown + 0x28);
  if (this == (Darwin *)0x0) {
LAB_100aad038:
    *param_1 = iVar1;
  }
  else {
    uVar14 = *(ulong *)(param_3.unknown + 0x30);
    Darwin::set_errno(this,0);
    local_110 = uVar14;
    FUN_1005b32d0(&local_170,FUN_100ab3344,&local_120,this,
                  PTR___type_metadata_for_Swift_Int32_100eadbd0);
    if ((int)local_170 == -1) {
      _Var8 = Darwin::get_errno();
      local_78 = 0xd00000000000001c;
      uStack_70 = 0x8000000100dbb480;
      local_68 = 0xd000000000000025;
      uStack_60 = 0x8000000100db85f0;
      local_58 = 0x139;
      FUN_100a7e9f4(&local_120,_Var8,this,uVar14,&local_78);
      cStack_d8 = '\x01';
    }
    else {
      FUN_100ab2204(&local_c8,this);
      if (local_80 != '\x01') goto LAB_100aad038;
      local_f8 = uStack_a0;
      uStack_100 = local_a8;
      local_e8 = uStack_90;
      uStack_f0 = local_98;
      uStack_df = uStack_87;
      cStack_d8 = local_80;
      uStack_e7 = uStack_8f;
      uStack_e0 = uStack_88;
      uStack_118 = uStack_c0;
      local_120 = local_c8;
      local_108 = uStack_b0;
      local_110 = local_b8;
    }
    local_148 = local_f8;
    uStack_150 = uStack_100;
    uStack_138 = local_e8;
    local_140 = uStack_f0;
    uStack_12f = uStack_df;
    cStack_128 = cStack_d8;
    uStack_137 = uStack_e7;
    uStack_130 = uStack_e0;
    uStack_168 = uStack_118;
    local_170 = local_120;
    local_158 = local_108;
    uStack_160 = local_110;
    uStack_198 = local_f8;
    local_1a0 = uStack_100;
    uStack_190 = uStack_f0;
    uStack_1b8 = uStack_118;
    local_1c0 = local_120;
    uStack_1a8 = local_108;
    uStack_1b0 = local_110;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) == 0) {
      puVar11 = &local_120;
      FUN_100ab335c(puVar11,auStack_210);
    }
    else {
      puVar10 = &local_120;
      FUN_100ab335c(puVar10,auStack_210);
      FUN_100a500c0();
      puVar11 = &local_1c0;
      _swift_willThrowTypedImpl(puVar11,&DAT_100f2de38,puVar10);
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar11,0,0);
    uVar14 = uStack_160;
    puVar11[3] = local_158;
    puVar11[2] = uVar14;
    uVar14 = uStack_150;
    puVar11[5] = local_148;
    puVar11[4] = uVar14;
    uVar14 = local_140;
    puVar11[7] = CONCAT71(uStack_137,uStack_138);
    puVar11[6] = uVar14;
    puVar11[8] = CONCAT71(uStack_12f,uStack_130);
    uVar14 = local_170;
    puVar11[1] = uStack_168;
    *puVar11 = uVar14;
    FUN_100ab3250(&local_120);
  }
  return;
}



/* Address: 0x100aad05c | FUN_100aad05c */

void FUN_100aad05c(void)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char local_28;
  undefined8 *puVar2;
  
  puVar3 = &local_c0;
  FUN_100ab2b20(&local_70,1);
  if (local_28 == '\x01') {
    uStack_98 = uStack_48;
    local_a0 = local_50;
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    local_80 = local_30;
    uStack_b8 = uStack_68;
    local_c0 = local_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_c0,&DAT_100f2de38,puVar2);
      puVar2 = puVar3;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar2,0,0);
    puVar2[5] = uStack_48;
    puVar2[4] = local_50;
    puVar2[7] = uStack_38;
    puVar2[6] = uStack_40;
    puVar2[8] = local_30;
    puVar2[1] = uStack_68;
    *puVar2 = local_70;
    puVar2[3] = uStack_58;
    puVar2[2] = uStack_60;
  }
  return;
}



/* Address: 0x100aad128 | FUN_100aad128 */

void FUN_100aad128(undefined8 *param_1)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100ab2b20(&local_70);
  param_1[5] = uStack_48;
  param_1[4] = local_50;
  param_1[7] = CONCAT71(local_37,uStack_38);
  param_1[6] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x41) = uStack_2f;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_30,local_37);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  return;
}



/* Address: 0x100aad16c | FUN_100aad16c */

void FUN_100aad16c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  char local_28;
  undefined8 *puVar2;
  
  puVar3 = &local_c0;
  FUN_100ab2b20(&local_70,param_2);
  if (local_28 == '\x01') {
    uStack_98 = uStack_48;
    local_a0 = local_50;
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    local_80 = local_30;
    uStack_b8 = uStack_68;
    local_c0 = local_70;
    uStack_a8 = uStack_58;
    uStack_b0 = uStack_60;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar2 = (undefined8 *)CONCAT71(extraout_var,bVar1);
    if ((bVar1 & 1) != 0) {
      FUN_100a500c0();
      _swift_willThrowTypedImpl(&local_c0,&DAT_100f2de38,puVar2);
      puVar2 = puVar3;
    }
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar2,0,0);
    puVar2[5] = uStack_48;
    puVar2[4] = local_50;
    puVar2[7] = uStack_38;
    puVar2[6] = uStack_40;
    puVar2[8] = local_30;
    puVar2[1] = uStack_68;
    *puVar2 = local_70;
    puVar2[3] = uStack_58;
    puVar2[2] = uStack_60;
  }
  return;
}



/* Address: 0x100aad238 | FUN_100aad238 */

void FUN_100aad238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100aad284(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x100aad270 | FUN_100aad270 */

void FUN_100aad270(void)

{
  FUN_100ab3168();
  return;
}



/* Address: 0x100aad284 | FUN_100aad284 */

void FUN_100aad284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long *unaff_x20;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  
  lVar5 = *unaff_x20;
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aad38c);
    (*pcVar3)();
  }
  uVar1 = *(undefined4 *)(lVar5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x14);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar4 == 0) {
    if (cVar2 == '\x01') {
      FUN_100aaf178(&local_98);
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,unaff_x20,0,0);
      unaff_x20[5] = lStack_70;
      unaff_x20[4] = local_78;
      unaff_x20[7] = lStack_60;
      unaff_x20[6] = local_68;
      unaff_x20[8] = local_58;
      unaff_x20[1] = lStack_90;
      *unaff_x20 = local_98;
      unaff_x20[3] = lStack_80;
      unaff_x20[2] = local_88;
      _swift_willThrow();
    }
    else {
      FUN_100aaef40(uVar1,param_1,param_2,param_3,param_4,param_5,param_6);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100aad390);
  (*pcVar3)();
}



/* Address: 0x100aad390 | FUN_100aad390 */

void FUN_100aad390(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  *(undefined8 *)(unaff_x22 + 0x150) = uVar1;
  _swift_task_switch(FUN_100aad3ac,0,0);
  return;
}



/* Address: 0x100aad3ac | FUN_100aad3ac */

void FUN_100aad3ac(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x109) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x101) = uVar4;
  puVar1 = &DAT_100f30270;
  _swift_allocObject(&DAT_100f30270,0x39,7);
  *(undefined **)(unaff_x22 + 0x158) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0xe8,unaff_x22 + 0x118);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a60110;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a6422c,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100aad478 | FUN_100aad478 */

void FUN_100aad478(undefined2 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3a) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100aad498,0,0);
  return;
}



/* Address: 0x100aad498 | FUN_100aad498 */

void FUN_100aad498(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3a);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f30248;
  _swift_allocObject(&DAT_100f30248,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5c1c8;
  FUN_100912dec();
  return;
}



/* Address: 0x100aad560 | FUN_100aad560 */

void FUN_100aad560(undefined2 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100aad580,0,0);
  return;
}



/* Address: 0x100aad580 | FUN_100aad580 */

void FUN_100aad580(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f30220;
  _swift_allocObject(&DAT_100f30220,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5d0a8;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100ab343c,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100aad64c | FUN_100aad64c */

void FUN_100aad64c(undefined2 param_1)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined2 *)(unaff_x22 + 0x3c) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = *unaff_x20;
  _swift_task_switch(FUN_100aad66c,0,0);
  return;
}



/* Address: 0x100aad66c | FUN_100aad66c */

void FUN_100aad66c(void)

{
  undefined2 uVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x3c);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar2 = &DAT_100f301f8;
  _swift_allocObject(&DAT_100f301f8,0x3c,7);
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar2 + 0x29) = uVar9;
  *(undefined8 *)(puVar2 + 0x18) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined2 *)(puVar2 + 0x3a) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a5d0a8;
  FUN_100912dec(plVar3,unaff_x22 + 0x3a,FUN_100ab3428,puVar2,&DAT_100ee52b0);
  return;
}



/* Address: 0x100aad738 | FUN_100aad738 */

void FUN_100aad738(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = *unaff_x20;
  _swift_task_switch(FUN_100aad754,0,0);
  return;
}



/* Address: 0x100aad754 | FUN_100aad754 */

void FUN_100aad754(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x78);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar5;
  puVar1 = &DAT_100f301d0;
  _swift_allocObject(&DAT_100f301d0,0x39,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a6052c;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100ab34a4,puVar1,puVar3);
  return;
}



/* Address: 0x100aad828 | FUN_100aad828 */

void FUN_100aad828(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = *unaff_x20;
  _swift_task_switch(FUN_100aad848,0,0);
  return;
}



/* Address: 0x100aad848 | FUN_100aad848 */

void FUN_100aad848(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(lVar2 + 0x31);
  uVar7 = *(undefined8 *)(lVar2 + 0x29);
  uVar11 = *(undefined8 *)(lVar2 + 0x10);
  uVar10 = *(undefined8 *)(lVar2 + 0x28);
  uVar9 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x31) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x29) = uVar7;
  puVar3 = &DAT_100f301a8;
  _swift_allocObject(&DAT_100f301a8,0x50,7);
  *(undefined **)(unaff_x22 + 0x90) = puVar3;
  uVar10 = *(undefined8 *)(lVar2 + 0x18);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar8 = *(undefined8 *)(lVar2 + 0x28);
  uVar7 = *(undefined8 *)(lVar2 + 0x20);
  uVar11 = *(undefined8 *)(lVar2 + 0x29);
  *(undefined8 *)(puVar3 + 0x31) = *(undefined8 *)(lVar2 + 0x31);
  *(undefined8 *)(puVar3 + 0x29) = uVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  *(undefined8 *)(puVar3 + 0x28) = uVar8;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  *(undefined8 *)(puVar3 + 0x48) = uVar1;
  FUN_100a4c06c(unaff_x22 + 0x10,unaff_x22 + 0x40);
  plVar5 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar5;
  puVar4 = &DAT_100ff69e0;
  FUN_1000f7830(&DAT_100ff69e0,&DAT_100c91200);
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a606a8;
  FUN_100912dec(unaff_x22 + 0x70,FUN_100ab3414,puVar3,puVar4);
  return;
}



/* Address: 0x100aad938 | FUN_100aad938 */

void FUN_100aad938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100aa933c(param_1,param_2,param_3,param_4,param_5);
  return;
}


