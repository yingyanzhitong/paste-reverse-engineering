/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100910d44 | FUN_100910d44 */

void FUN_100910d44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  pthread_attr_t *ppVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar10;
  ulong unaff_x20;
  pthread_t p_Var11;
  long lVar12;
  pthread_t p_Var13;
  String SVar14;
  String SVar15;
  pthread_attr_t local_d0;
  pthread_t local_88;
  undefined1 auStack_80 [24];
  long local_68;
  ulong uVar9;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar12 = *(long *)(unaff_x20 + 0x10);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(lVar12 + 0x10) + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100911020);
    (*pcVar3)();
  }
  ppVar6 = &local_d0;
  uVar9 = unaff_x20;
  FUN_1009114a8();
  puVar10 = (undefined *)0x0;
  _swift_beginAccess(lVar12 + 0x18,auStack_80,1);
  if (!SCARRY8(*(long *)(lVar12 + 0x18),(long)ppVar6)) {
    *(char **)(lVar12 + 0x18) = ppVar6->__opaque + *(long *)(lVar12 + 0x18) + -8;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar12 + 0x10) + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100911028);
      (*pcVar3)();
    }
    if ((uVar9 & 0xff) != 0) {
      if (((uint)uVar9 & 0xff) == 1) {
        iVar4 = _pthread_cond_signal(*(pthread_cond_t **)(lVar12 + 0x20));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100910df8);
          (*pcVar3)();
        }
      }
      else {
        iVar4 = _pthread_cond_broadcast(*(pthread_cond_t **)(lVar12 + 0x20));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100911030);
          (*pcVar3)();
        }
      }
    }
    if ((local_d0.__sig & 1U) == 0) {
      local_d0.__sig = 0;
      FUN_1000f7830(&DAT_100fecbd8,&DAT_100c84900);
      pcVar3 = (code *)0x7;
      _swift_allocObject();
      ppVar6 = &local_d0;
      FUN_100671b38();
      p_Var11 = *(pthread_t *)(unaff_x20 + 0x40);
      if ((long)p_Var11 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10091102c);
        (*pcVar3)();
      }
      if (p_Var11 != (pthread_t)0x0) {
        p_Var13 = (pthread_t)0x0;
        lVar12 = *(long *)(unaff_x20 + 0x50);
        do {
          if ((lVar12 != 0) && (*(pthread_t *)(lVar12 + 0x10) <= p_Var13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10091101c);
            (*pcVar3)();
          }
          local_d0.__sig = param_1;
          local_d0.__opaque._0_8_ = param_2;
          local_88 = p_Var13;
          _swift_bridgeObjectRetain();
          SVar14 = Swift::CustomStringConvertible::get_description();
          SVar15.bridgeObject = puVar10;
          SVar15.str = (char *)pcVar3;
          Swift::String::append(SVar14,SVar15);
          _swift_bridgeObjectRelease(SVar14.bridgeObject);
          uVar2 = local_d0.__opaque._0_8_;
          lVar1 = local_d0.__sig;
          puVar7 = &DAT_100f157f8;
          _swift_allocObject(&DAT_100f157f8,0x28,7);
          *(pthread_attr_t **)(puVar7 + 0x10) = ppVar6;
          *(ulong *)(puVar7 + 0x18) = unaff_x20;
          *(pthread_t *)(puVar7 + 0x20) = p_Var13;
          puVar10 = &DAT_100f15820;
          _swift_allocObject(&DAT_100f15820,0x20,7);
          *(code **)(puVar10 + 0x10) = FUN_100914008;
          *(undefined **)(puVar10 + 0x18) = puVar7;
          puVar8 = &DAT_100fecbe0;
          FUN_1000f7830(&DAT_100fecbe0,&DAT_100c848a0);
          _swift_allocObject();
          *(code **)(puVar8 + 0x10) = FUN_100134360;
          *(undefined **)(puVar8 + 0x18) = puVar10;
          *(long *)(puVar8 + 0x20) = lVar1;
          *(undefined8 *)(puVar8 + 0x28) = uVar2;
          local_88 = (pthread_t)0x0;
          local_d0.__opaque[0x20] = '\0';
          local_d0.__opaque[0x21] = '\0';
          local_d0.__opaque[0x22] = '\0';
          local_d0.__opaque[0x23] = '\0';
          local_d0.__opaque[0x24] = '\0';
          local_d0.__opaque[0x25] = '\0';
          local_d0.__opaque[0x26] = '\0';
          local_d0.__opaque[0x27] = '\0';
          local_d0.__opaque[0x18] = '\0';
          local_d0.__opaque[0x19] = '\0';
          local_d0.__opaque[0x1a] = '\0';
          local_d0.__opaque[0x1b] = '\0';
          local_d0.__opaque[0x1c] = '\0';
          local_d0.__opaque[0x1d] = '\0';
          local_d0.__opaque[0x1e] = '\0';
          local_d0.__opaque[0x1f] = '\0';
          local_d0.__opaque[0x30] = '\0';
          local_d0.__opaque[0x31] = '\0';
          local_d0.__opaque[0x32] = '\0';
          local_d0.__opaque[0x33] = '\0';
          local_d0.__opaque[0x34] = '\0';
          local_d0.__opaque[0x35] = '\0';
          local_d0.__opaque[0x36] = '\0';
          local_d0.__opaque[0x37] = '\0';
          local_d0.__opaque[0x28] = '\0';
          local_d0.__opaque[0x29] = '\0';
          local_d0.__opaque[0x2a] = '\0';
          local_d0.__opaque[0x2b] = '\0';
          local_d0.__opaque[0x2c] = '\0';
          local_d0.__opaque[0x2d] = '\0';
          local_d0.__opaque[0x2e] = '\0';
          local_d0.__opaque[0x2f] = '\0';
          local_d0.__opaque[0] = '\0';
          local_d0.__opaque[1] = '\0';
          local_d0.__opaque[2] = '\0';
          local_d0.__opaque[3] = '\0';
          local_d0.__opaque[4] = '\0';
          local_d0.__opaque[5] = '\0';
          local_d0.__opaque[6] = '\0';
          local_d0.__opaque[7] = '\0';
          local_d0.__sig = 0;
          local_d0.__opaque[0x10] = '\0';
          local_d0.__opaque[0x11] = '\0';
          local_d0.__opaque[0x12] = '\0';
          local_d0.__opaque[0x13] = '\0';
          local_d0.__opaque[0x14] = '\0';
          local_d0.__opaque[0x15] = '\0';
          local_d0.__opaque[0x16] = '\0';
          local_d0.__opaque[0x17] = '\0';
          local_d0.__opaque[8] = '\0';
          local_d0.__opaque[9] = '\0';
          local_d0.__opaque[10] = '\0';
          local_d0.__opaque[0xb] = '\0';
          local_d0.__opaque[0xc] = '\0';
          local_d0.__opaque[0xd] = '\0';
          local_d0.__opaque[0xe] = '\0';
          local_d0.__opaque[0xf] = '\0';
          _swift_retain(ppVar6);
          _swift_retain();
          _swift_retain(puVar7);
          _swift_bridgeObjectRetain(uVar2);
          _swift_retain(puVar8);
          uVar5 = _pthread_attr_init(&local_d0);
          uVar9 = (ulong)uVar5;
          _qos_class_main();
          _pthread_attr_set_qos_class_np(&local_d0,uVar9,0);
          pcVar3 = thunk_FUN_100960398;
          puVar10 = puVar8;
          iVar4 = _pthread_create(&local_88,&local_d0,(void **)thunk_FUN_100960398,puVar8);
          _pthread_attr_destroy(&local_d0);
          _swift_release(puVar8);
          _swift_bridgeObjectRelease(uVar2);
          _swift_release(puVar7);
          if (iVar4 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100911018);
            (*pcVar3)();
          }
          p_Var13 = (pthread_t)((long)&p_Var13->__sig + 1);
        } while (p_Var11 != p_Var13);
      }
      FUN_100671cfc((ulong *)(unaff_x20 + 0x40));
      FUN_100671c28();
      _swift_release(ppVar6);
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100911024);
  (*pcVar3)();
}



/* Address: 0x100911034 | FUN_100911034 */

void FUN_100911034(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 2;
  *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptySetSingleton_100eae0e8;
  puVar1 = &DAT_100feb9c8;
  FUN_1000f7830(&DAT_100feb9c8,&DAT_100c83090);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined1 *)(unaff_x20 + 0x48) = param_3;
  uVar2 = 0;
  FUN_10066f030();
  _swift_allocObject();
  FUN_10066eec0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  return;
}



/* Address: 0x1009110d0 | FUN_1009110d0 */

code * FUN_1009110d0(void)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  ulong unaff_x20;
  long lVar5;
  undefined1 auStack_60 [24];
  long local_48;
  undefined8 local_40;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(lVar5 + 0x10) + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009111f4);
    (*pcVar1)();
  }
  _swift_beginAccess(lVar5 + 0x18,auStack_60,1,0);
  while (*(long *)(lVar5 + 0x18) < 1) {
    iVar2 = _pthread_cond_wait(*(pthread_cond_t **)(lVar5 + 0x20),
                               (pthread_mutex_t *)(*(long *)(lVar5 + 0x10) + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100911134);
      (*pcVar1)();
    }
  }
  plVar3 = &local_48;
  FUN_100911200();
  if (SCARRY8(*(long *)(lVar5 + 0x18),(long)plVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009111f8);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + (long)plVar3;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar5 + 0x10) + 0x10));
  if (iVar2 == 0) {
    if ((unaff_x20 & 0xff) != 0) {
      if (((uint)unaff_x20 & 0xff) == 1) {
        iVar2 = _pthread_cond_signal(*(pthread_cond_t **)(lVar5 + 0x20));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100911188);
          (*pcVar1)();
        }
      }
      else {
        iVar2 = _pthread_cond_broadcast(*(pthread_cond_t **)(lVar5 + 0x20));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100911200);
          (*pcVar1)();
        }
      }
    }
    if (local_48 == 0) {
      pcVar1 = (code *)0x0;
    }
    else {
      puVar4 = &DAT_100f15848;
      _swift_allocObject(&DAT_100f15848,0x20,7);
      *(long *)(puVar4 + 0x10) = local_48;
      *(undefined8 *)(puVar4 + 0x18) = local_40;
      pcVar1 = FUN_1001f68c0;
    }
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009111fc);
  (*pcVar1)();
}



/* Address: 0x100911200 | FUN_100911200 */

undefined1  [16] FUN_100911200(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  uint uVar8;
  StaticString file;
  __uint64 line;
  code *pcVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  String SVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  ulong local_60;
  undefined1 auStack_58 [24];
  undefined1 *puVar9;
  
  _swift_beginAccess(param_2 + 0x20,auStack_58,1,0);
  uVar12 = *(ulong *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x28) == '\0') {
    *(undefined8 *)(param_2 + 0x20) = 1;
    *(undefined1 *)(param_2 + 0x28) = 2;
    uVar7 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar7 & 1) == 0) {
      FUN_1009322f0();
    }
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009113f0);
      (*pcVar10)();
    }
    if (*(ulong *)(uVar12 + 0x10) <= param_3) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009113f8);
      (*pcVar10)();
    }
    *(undefined1 *)(uVar12 + param_3 + 0x20) = 0;
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(ulong *)(param_2 + 0x20) = uVar12;
    uVar2 = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 0;
    FUN_10090fdd4(uVar5,uVar2);
    pcVar10 = (code *)0x0;
    puVar6 = (undefined *)0x0;
    bVar4 = false;
  }
  else {
    if (*(char *)(param_2 + 0x28) != '\x01') {
      if (uVar12 == 0) {
        file.unknown = (undefined *)0x2064696c61766e49;
        line = 0xed00006574617473;
      }
      else {
        line = 0x8000000100db4ab0;
        file.unknown = (undefined *)0xd000000000000017;
      }
      SVar15.bridgeObject = (void *)0x2;
      SVar15.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar15,file,line,0xdb4ab0);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100911498);
      (*pcVar10)();
    }
    *(undefined8 *)(param_2 + 0x20) = 1;
    *(undefined1 *)(param_2 + 0x28) = 2;
    local_60 = uVar12;
    if (*(long *)(uVar12 + 0x18) == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009113f4);
      (*pcVar10)();
    }
    uVar7 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar7 & 1) == 0) {
      FUN_10091468c();
      uVar12 = local_60;
    }
    lVar11 = *(long *)(uVar12 + 0x20);
    lVar1 = lVar11 + 1;
    if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009113fc);
      (*pcVar10)();
    }
    lVar11 = uVar12 + lVar11 * 0x20;
    uVar14 = *(undefined8 *)(lVar11 + 0x30);
    uVar13 = *(undefined8 *)(lVar11 + 0x28);
    uVar5 = *(undefined8 *)(lVar11 + 0x38);
    cVar3 = *(char *)(lVar11 + 0x40);
    if (*(long *)(uVar12 + 0x10) <= lVar1) {
      lVar1 = 0;
    }
    *(long *)(uVar12 + 0x20) = lVar1;
    if (SBORROW8(*(long *)(uVar12 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100911400);
      (*pcVar10)();
    }
    *(long *)(uVar12 + 0x18) = *(long *)(uVar12 + 0x18) + -1;
    if ((cVar3 == '\x01') ||
       (_swift_beginAccess(param_2 + 0x30,auStack_78,0,0),
       *(long *)(*(long *)(param_2 + 0x30) + 0x10) == 0)) {
      bVar4 = false;
    }
    else {
      puVar9 = auStack_90;
      _swift_beginAccess(param_2 + 0x30,puVar9,0x21,0);
      uVar8 = (uint)puVar9;
      FUN_10091472c(uVar5);
      _swift_endAccess(auStack_90);
      bVar4 = (uVar8 & 0xff) != 1;
    }
    uVar5 = *(undefined8 *)(param_2 + 0x20);
    *(ulong *)(param_2 + 0x20) = uVar12;
    uVar2 = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)(param_2 + 0x28) = 1;
    FUN_10090fdd4(uVar5,uVar2);
    puVar6 = &DAT_100f15ef8;
    _swift_allocObject(&DAT_100f15ef8,0x20,7);
    *(undefined8 *)(puVar6 + 0x18) = uVar14;
    *(undefined8 *)(puVar6 + 0x10) = uVar13;
    pcVar10 = FUN_1001f690c;
  }
  *param_1 = pcVar10;
  param_1[1] = puVar6;
  *(bool *)(param_1 + 2) = bVar4;
  return ZEXT816(0xffffffffffffffff);
}



/* Address: 0x100911498 | FUN_100911498 */

void FUN_100911498(void)

{
  FUN_100910d44(0x232d5054,&DAT_e400000000000000);
  return;
}



/* Address: 0x1009114a8 | FUN_1009114a8 */

undefined1  [16] FUN_1009114a8(undefined1 *param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  StaticString file;
  undefined1 uVar7;
  String SVar8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x20,auStack_48,1,0);
  uVar7 = 1;
  if (*(char *)(param_2 + 0x28) == '\x01') {
LAB_10091158c:
    *param_1 = uVar7;
    return ZEXT816(0);
  }
  if (*(char *)(param_2 + 0x28) == '\x02') {
    if (*(long *)(param_2 + 0x20) == 0) {
      puVar4 = &DAT_100fecdb0;
      FUN_1000f7830(&DAT_100fecdb0,&DAT_100c84b38);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar2 = puVar5 + -9;
      if (0x27 < (long)puVar5) {
        puVar2 = puVar5 + -0x28;
      }
      *(undefined8 *)(puVar4 + 0x18) = 0;
      *(undefined8 *)(puVar4 + 0x20) = 0;
      *(long *)(puVar4 + 0x10) = (long)puVar2 >> 5;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      *(undefined **)(param_2 + 0x20) = puVar4;
      uVar7 = *(undefined1 *)(param_2 + 0x28);
      *(undefined1 *)(param_2 + 0x28) = 1;
      FUN_10090fdd4(uVar6,uVar7);
      _swift_beginAccess(param_2 + 0x18,auStack_60,0x21,0);
      uVar6 = *(undefined8 *)(param_2 + 0x18);
      *(undefined **)(param_2 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_bridgeObjectRelease(uVar6);
      FUN_10090fb18(*(undefined8 *)(param_2 + 0x40));
      _swift_endAccess(auStack_60);
      uVar7 = 0;
      goto LAB_10091158c;
    }
    pcVar1 = ".modifying state misuse";
    file.unknown = (undefined *)0xd000000000000017;
  }
  else {
    pcVar1 = "start() called while in shuttingDown";
    file.unknown = (undefined *)0xd000000000000024;
  }
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
             0xdb4ab0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10091163c);
  (*pcVar3)();
}



/* Address: 0x10091163c | FUN_10091163c */

void FUN_10091163c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  int iVar4;
  code **ppcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  _CocoaArrayWrapper _Var9;
  long lVar10;
  long lVar11;
  code *local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 auStack_68 [24];
  
  FUN_100671c1c();
  lVar10 = *(long *)(param_3 + 0x10);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(lVar10 + 0x10) + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100911848);
    (*pcVar3)();
  }
  _swift_beginAccess(param_3 + 0x18,auStack_68,0x21,0);
  if (*(long *)(param_3 + 0x18) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100911884);
    (*pcVar3)();
  }
  FUN_100914570(FUN_10090332c);
  uVar7 = *(ulong *)(param_3 + 0x18);
  uVar8 = uVar7 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar8 + 0x10);
  if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar6) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_10090332c(uVar7,uVar6 + 1,1);
    uVar8 = uVar7 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar8 + 0x10) = uVar6 + 1;
  *(undefined8 *)(uVar8 + uVar6 * 8 + 0x20) = param_1;
  *(ulong *)(param_3 + 0x18) = uVar7;
  _swift_endAccess(auStack_68);
  _Var9.unknown = *(undefined **)(param_3 + 0x18);
  if (_Var9.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100911888);
    (*pcVar3)();
  }
  if ((ulong)_Var9.unknown >> 0x3e == 0) {
    local_80 = *(code **)((_Var9.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    if (-1 < (long)_Var9.unknown) {
      _Var9.unknown = _Var9.unknown & 0xffffffffffffff8U;
    }
    local_80 = (code *)Swift::_CocoaArrayWrapper::get_endIndex(_Var9);
  }
  _swift_beginAccess(lVar10 + 0x18,auStack_68,1,0);
  lVar11 = *(long *)(lVar10 + 0x10);
  _swift_retain(param_1);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0x10));
  if (iVar4 == 0) {
    FUN_10067215c(&local_80);
    while( true ) {
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(lVar10 + 0x10) + 0x10));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100911830);
        (*pcVar3)();
      }
      while (*(long *)(lVar10 + 0x18) < 1) {
        iVar4 = _pthread_cond_wait(*(pthread_cond_t **)(lVar10 + 0x20),
                                   (pthread_mutex_t *)(*(long *)(lVar10 + 0x10) + 0x10));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10091183c);
          (*pcVar3)();
        }
      }
      ppcVar5 = &local_80;
      uVar6 = param_3;
      FUN_100911200(&local_80,param_3,param_4);
      if (SCARRY8(*(long *)(lVar10 + 0x18),(long)ppcVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100911834);
        (*pcVar3)();
      }
      *(undefined1 **)(lVar10 + 0x18) = (undefined1 *)((long)ppcVar5 + *(long *)(lVar10 + 0x18));
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar10 + 0x10) + 0x10));
      if (iVar4 != 0) break;
      if ((uVar6 & 0xff) != 0) {
        if (((uint)uVar6 & 0xff) == 1) {
          iVar4 = _pthread_cond_signal(*(pthread_cond_t **)(lVar10 + 0x20));
          if (iVar4 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100911844);
            (*pcVar3)();
          }
        }
        else {
          iVar4 = _pthread_cond_broadcast(*(pthread_cond_t **)(lVar10 + 0x20));
          if (iVar4 != 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100911840);
            (*pcVar3)();
          }
        }
      }
      uVar2 = local_70;
      uVar1 = local_78;
      pcVar3 = local_80;
      if (local_80 == (code *)0x0) {
        return;
      }
      local_80 = (code *)CONCAT71(local_80._1_7_,local_70);
      _swift_retain(local_78);
      (*pcVar3)(&local_80);
      FUN_100004550(pcVar3,uVar1,uVar2);
      FUN_100004550(pcVar3,uVar1,uVar2);
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100911838);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100911880);
  (*pcVar3)();
}



/* Address: 0x100911888 | FUN_100911888 */

void FUN_100911888(undefined8 param_1,undefined8 param_2,code *param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  long lVar3;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100913ea0(param_2);
  (*param_3)(puVar2,param_1);
  FUN_100913eb4(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x100911938 | FUN_100911938 */

void FUN_100911938(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10090fdd4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100911980 | FUN_100911980 */

void FUN_100911980(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10090fdd4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009119d0 | thunk_FUN_1009119d4 */

undefined8
thunk_FUN_1009119d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  
  _swift_getObjectType();
  FUN_1008f68cc();
  puVar1 = &DAT_100f15ed0;
  _swift_allocObject(&DAT_100f15ed0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  _swift_retain(param_1);
  _swift_retain(param_4);
  FUN_100910ac4(0,1,FUN_1009155d0,puVar1);
  _swift_release(puVar1);
  return param_1;
}



/* Address: 0x1009119d4 | FUN_1009119d4 */

undefined8
FUN_1009119d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  _swift_getObjectType();
  FUN_1008f68cc();
  puVar1 = &DAT_100f15ed0;
  _swift_allocObject(&DAT_100f15ed0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  _swift_retain(param_1);
  _swift_retain(param_4);
  FUN_100910ac4(0,1,FUN_1009155d0,puVar1);
  _swift_release(puVar1);
  return param_1;
}



/* Address: 0x100911a8c | FUN_100911a8c */

/* WARNING: Removing unreachable block (ram,0x000100911b3c) */
/* WARNING: Removing unreachable block (ram,0x000100911b5c) */
/* WARNING: Removing unreachable block (ram,0x000100911c74) */

void FUN_100911a8c(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_68 [3];
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(local_68);
    _swift_retain(local_68[0]);
    FUN_10090d350();
    _swift_release_n(local_68[0],2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15e08;
    _swift_allocObject(&DAT_100f15e08,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_100915424,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    FUN_10092b0c4(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100911ce4 | FUN_100911ce4 */

/* WARNING: Removing unreachable block (ram,0x000100911d90) */
/* WARNING: Removing unreachable block (ram,0x000100911db0) */
/* WARNING: Removing unreachable block (ram,0x000100911e98) */

void FUN_100911ce4(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)();
    FUN_10090d0b8(0,0,param_2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15d90;
    _swift_allocObject(&DAT_100f15d90,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_1005de8f4(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100911f08 | FUN_100911f08 */

/* WARNING: Removing unreachable block (ram,0x000100911fb8) */
/* WARNING: Removing unreachable block (ram,0x000100911fd8) */
/* WARNING: Removing unreachable block (ram,0x0001009120c0) */

void FUN_100911f08(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_58;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(&local_58);
    FUN_10090d480(local_58,0,param_2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15d18;
    _swift_allocObject(&DAT_100f15d18,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_1005de8f4(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100912130 | FUN_100912130 */

/* WARNING: Removing unreachable block (ram,0x0001009121e0) */
/* WARNING: Removing unreachable block (ram,0x000100912200) */
/* WARNING: Removing unreachable block (ram,0x000100912338) */

void FUN_100912130(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined6 local_58;
  undefined1 local_52;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(&local_70);
    _swift_retain(local_70);
    _swift_retain(uStack_68);
    FUN_10090d5b0(local_70,uStack_68,local_60,(ulong)CONCAT16(local_52,local_58),param_2);
    _swift_release_n(uStack_68,2);
    _swift_release_n(local_70,2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x38);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15ca0;
    _swift_allocObject(&DAT_100f15ca0,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1009153f8,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    FUN_10092b16c(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1009123a8 | FUN_1009123a8 */

/* WARNING: Removing unreachable block (ram,0x000100912458) */
/* WARNING: Removing unreachable block (ram,0x000100912478) */
/* WARNING: Removing unreachable block (ram,0x000100912578) */

void FUN_1009123a8(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_58;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(&local_58);
    _swift_retain(local_58);
    FUN_10090d700();
    _swift_release_n(local_58,2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15c28;
    _swift_allocObject(&DAT_100f15c28,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_1005de8f4(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1009125e8 | FUN_1009125e8 */

/* WARNING: Removing unreachable block (ram,0x000100912698) */
/* WARNING: Removing unreachable block (ram,0x0001009126b8) */
/* WARNING: Removing unreachable block (ram,0x000100912800) */

void FUN_1009125e8(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined1 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(&local_180);
    uStack_1b8 = uStack_118;
    local_1c0 = local_120;
    uStack_1a8 = uStack_108;
    uStack_1b0 = uStack_110;
    uStack_198 = uStack_f8;
    local_1a0 = local_100;
    uStack_1f8 = uStack_158;
    local_200 = local_160;
    uStack_1e8 = uStack_148;
    uStack_1f0 = uStack_150;
    uStack_1d8 = uStack_138;
    local_1e0 = local_140;
    uStack_1c8 = uStack_128;
    uStack_1d0 = uStack_130;
    uStack_218 = uStack_178;
    local_220 = local_180;
    uStack_208 = uStack_168;
    uStack_210 = uStack_170;
    FUN_1005b8d54(&local_220);
    uStack_88 = uStack_1b8;
    local_90 = local_1c0;
    uStack_78 = uStack_1a8;
    uStack_80 = uStack_1b0;
    uStack_68 = uStack_198;
    local_70 = local_1a0;
    local_60 = local_190;
    uStack_c8 = uStack_1f8;
    local_d0 = local_200;
    uStack_b8 = uStack_1e8;
    uStack_c0 = uStack_1f0;
    uStack_a8 = uStack_1d8;
    local_b0 = local_1e0;
    uStack_98 = uStack_1c8;
    uStack_a0 = uStack_1d0;
    uStack_e8 = uStack_218;
    local_f0 = local_220;
    uStack_d8 = uStack_208;
    uStack_e0 = uStack_210;
    FUN_10090d724(&local_f0,param_2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0xa8);
  lVar1 = *(long *)(param_2 + 0xb0);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15bb0;
    _swift_allocObject(&DAT_100f15bb0,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1009153d8,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    FUN_10092b210(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100912870 | FUN_100912870 */

/* WARNING: Removing unreachable block (ram,0x000100912920) */
/* WARNING: Removing unreachable block (ram,0x000100912940) */
/* WARNING: Removing unreachable block (ram,0x000100912a48) */

void FUN_100912870(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(&local_60);
    _swift_bridgeObjectRetain(uStack_58);
    FUN_10090d870(local_60,uStack_58,0,param_2);
    _swift_bridgeObjectRelease_n(uStack_58,2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15b38;
    _swift_allocObject(&DAT_100f15b38,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1008fcb6c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_10092b398(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100912ab8 | FUN_100912ab8 */

/* WARNING: Removing unreachable block (ram,0x000100912b68) */
/* WARNING: Removing unreachable block (ram,0x000100912b88) */
/* WARNING: Removing unreachable block (ram,0x000100912c88) */

void FUN_100912ab8(ulong param_1,long param_2,code *param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 local_58;
  
  if ((param_1 & 0xff) == 0) {
    (*param_3)(&local_58);
    _swift_bridgeObjectRetain(local_58);
    FUN_10090d984();
    _swift_bridgeObjectRelease_n(local_58,2);
    return;
  }
  FUN_100915370();
  puVar2 = &DAT_100f158b8;
  uVar7 = 0;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  uVar3 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f15ac0;
    _swift_allocObject(&DAT_100f15ac0,0x20,7);
    *(long *)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar2);
    (*pcVar8)(FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    puVar5 = puVar2;
    thunk_FUN_1005de8f4(puVar2);
    FUN_1006486f8();
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100912cf8 | FUN_100912cf8 */

/* WARNING: Removing unreachable block (ram,0x000100912d98) */

void FUN_100912cf8(ulong param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_50 [16];
  
  lVar3 = *(long *)(param_5 + -8);
  puVar2 = auStack_50 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 0xff) == 0) {
    (*param_3)(puVar2);
    FUN_100646e88(puVar2,param_2,param_5);
    (**(code **)(lVar3 + 8))(puVar2,param_5);
    return;
  }
  FUN_100915370();
  puVar1 = &DAT_100f158b8;
  _swift_allocError(&DAT_100f158b8,param_1,0,0);
  FUN_100646f54();
  _swift_errorRelease(puVar1);
  return;
}



/* Address: 0x100912dec | FUN_100912dec */

void FUN_100912dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_100912e0c,0,0);
  return;
}



/* Address: 0x100912e0c | FUN_100912e0c */

void FUN_100912e0c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(**(long **)(lVar3 + 0x38) + 0x88))();
  lVar1 = *param_1;
  *param_1 = lVar1 + 1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(long *)(unaff_x22 + 0x30) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  *(long *)(unaff_x22 + 0x60) = lVar3;
  *(long *)(unaff_x22 + 0x68) = lVar1;
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006e2490;
  FUN_1009134d4(*(undefined8 *)(unaff_x22 + 0x48),&UNK_100c84920,unaff_x22 + 0x10,FUN_10091409c,
                unaff_x22 + 0x50,0,0,*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x100912ed8 | FUN_100912ed8 */

void FUN_100912ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  _swift_task_switch(FUN_100912ef8,0,0);
  return;
}



/* Address: 0x100912ef8 | FUN_100912ef8 */

void FUN_100912ef8(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x60);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100912fb0;
  FUN_10090fbbc(*(undefined8 *)(unaff_x22 + 0x48),0,0,0x74634166496e7572,0xef293a5f28657669,
                FUN_100915448,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x100912fb0 | FUN_100912fb0 */

void FUN_100912fb0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100912ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100912ff4 | FUN_100912ff4 */

void FUN_100912ff4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  int iVar4;
  CheckedContinuation CVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  undefined1 *puVar16;
  String SVar17;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_90 [3];
  undefined1 auStack_78 [24];
  
  local_b8 = param_3;
  local_a0 = param_5;
  FUN_1000f8b08(&DAT_100febaf0,&DAT_100c83800);
  CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar12 = *(long *)(CVar5.unknown + -8);
  lVar8 = *(long *)(lVar12 + 0x40);
  uVar13 = lVar8 + 0xfU & 0xfffffffffffffff0;
  puVar16 = auStack_c0 + -uVar13;
  pcVar15 = *(code **)(lVar12 + 0x10);
  (*pcVar15)(puVar16,param_1,CVar5.unknown);
  lVar14 = (long)puVar16 - uVar13;
  (*pcVar15)(lVar14,puVar16,CVar5.unknown);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar10 = uVar13 + 0x28 & (uVar13 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100f15ea8;
  _swift_allocObject(&DAT_100f15ea8,uVar10 + lVar8,uVar13 | 7);
  uVar3 = local_a0;
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  *(undefined8 *)(puVar6 + 0x18) = param_4;
  *(undefined8 *)(puVar6 + 0x20) = local_a0;
  local_b0 = param_4;
  uStack_a8 = param_6;
  (**(code **)(lVar12 + 0x20))(puVar6 + uVar10,puVar16,CVar5.unknown);
  lVar8 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar8 + 0x10);
  _swift_retain(uVar3);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10091326c);
    (*pcVar15)();
  }
  bVar9 = true;
  _swift_beginAccess(param_2 + 0x20,auStack_78,1,0);
  bVar1 = *(byte *)(param_2 + 0x28);
  uVar13 = (ulong)bVar1;
  if (bVar1 != 0) {
    uVar13 = *(ulong *)(param_2 + 0x20);
    if (bVar1 == 1) {
      *(undefined8 *)(param_2 + 0x20) = 1;
      *(undefined1 *)(param_2 + 0x28) = 2;
      lVar11 = *(long *)(uVar13 + 0x18);
      local_90[0] = uVar13;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10091327c);
        (*pcVar15)();
      }
      uVar10 = uVar13;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)(uVar13 + 0x10) < lVar11 + 1) || ((uVar10 & 1) == 0)) {
        FUN_1009434a8();
        uVar13 = local_90[0];
      }
      FUN_100943cc4(uVar13 + 0x10,uVar13 + 0x28,FUN_1009154ec,puVar6,local_b8,0);
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      *(ulong *)(param_2 + 0x20) = uVar13;
      uVar2 = *(undefined1 *)(param_2 + 0x28);
      uVar13 = 1;
      *(undefined1 *)(param_2 + 0x28) = 1;
      FUN_10090fdd4(uVar7,uVar2);
      bVar9 = false;
    }
    else {
      if (uVar13 != 0) {
        *(undefined4 *)(lVar14 + -8) = 0;
        *(undefined8 *)(lVar14 + -0x10) = 200;
        SVar17.bridgeObject = (void *)0x2;
        SVar17.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar17,(StaticString)0xd000000000000017,
                   0x8000000100db4ab0,0xdb4ab0);
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1009132d0);
        (*pcVar15)();
      }
      uVar13 = 0;
      bVar9 = true;
    }
  }
  _swift_beginAccess(lVar8 + 0x18,local_90,1,0);
  if (!SCARRY8(*(long *)(lVar8 + 0x18),uVar13)) {
    *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + uVar13;
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar8 + 0x10) + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100913274);
      (*pcVar15)();
    }
    if (bVar9) {
      FUN_1009132d0(1,local_b0,uVar3,lVar14,uStack_a8);
    }
    else {
      iVar4 = _pthread_cond_signal(*(pthread_cond_t **)(lVar8 + 0x20));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100913278);
        (*pcVar15)();
      }
    }
    _swift_release(puVar6);
    (**(code **)(lVar12 + 8))(lVar14,CVar5.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x100913270);
  (*pcVar15)();
}



/* Address: 0x1009132d0 | FUN_1009132d0 */

void FUN_1009132d0(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Result RVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  CancellationError CVar3;
  CancellationError CVar4;
  CheckedContinuation CVar5;
  long lVar6;
  long lVar7;
  undefined *local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100febaf0;
  FUN_1000f8b08(&DAT_100febaf0,&DAT_100c83800);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,RVar1.value) + -8);
  lVar6 = (long)local_90 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_1 == '\x01') {
    CVar3 = Swift::CancellationError::typeMetadataAccessor();
    CVar4 = CVar3;
    FUN_100915560();
    _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
    Swift::CancellationError::init();
    local_90[0] = CVar3.unknown;
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(local_90,CVar5.unknown);
  }
  else {
    local_80 = param_5;
    uStack_78 = param_2;
    local_70 = param_3;
    FUN_1006414f4(lVar6,FUN_100645d48,local_90,param_5,puVar2,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    CVar5 = Swift::CheckedContinuation::typeMetadataAccessor();
    FUN_1008bb290(lVar6,CVar5.unknown);
    (**(code **)(lVar7 + 8))(lVar6,CONCAT71(extraout_var,RVar1.value));
  }
  return;
}



/* Address: 0x100913438 | FUN_100913438 */

void FUN_100913438(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [8];
  
  lVar3 = *(long *)(param_1 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(*(long *)(lVar3 + 0x10) + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009134d0);
    (*pcVar1)();
  }
  _swift_beginAccess(param_1 + 0x30,auStack_50,0x21,0);
  FUN_100914d68(auStack_38,param_2);
  _swift_endAccess(auStack_50);
  _swift_beginAccess(lVar3 + 0x18,auStack_50,1,0);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(*(long *)(lVar3 + 0x10) + 0x10));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009134d4);
  (*pcVar1)();
}



/* Address: 0x1009134d4 | FUN_1009134d4 */

void FUN_1009134d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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



/* Address: 0x10091361c | FUN_10091361c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10091361c(undefined8 param_1,undefined8 param_2)

{
  QoSClass QVar1;
  undefined7 extraout_var;
  OS_dispatch_queue *pOVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar2;
  
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,QVar1.value);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100903d90(0);
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
             ,lVar2);
  pOVar3 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  FUN_10090fe24(pOVar3,param_1,param_2);
  return 0;
}



/* Address: 0x1009136e4 | FUN_1009136e4 */

void FUN_1009136e4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  _swift_task_switch(FUN_1009136fc,0,0);
  return;
}



/* Address: 0x1009136fc | FUN_1009136fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009136fc(void)

{
  byte bVar1;
  QoSClass QVar2;
  long *plVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined7 extraout_var;
  OS_dispatch_queue *pOVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long unaff_x22;
  long lVar12;
  String isolation;
  String function;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10091398c;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009139f0;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  lVar10 = *(long *)(puVar4 + -8);
  lVar12 = *(long *)(lVar10 + 0x40);
  uVar6 = lVar12 + 0xf;
  uVar5 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  function.bridgeObject = (void *)0x8000000100dae750;
  function.str = (char *)0xd000000000000014;
  Swift::CheckedContinuation::init(continuation,function);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar10 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100f15870;
  _swift_allocObject(&DAT_100f15870,uVar11 + lVar12,uVar9 | 7);
  (**(code **)(lVar10 + 0x20))(puVar7 + uVar11,uVar6,puVar4);
  FUN_100903d90(0);
  QVar2 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar12 = *(long *)(CONCAT71(extraout_var,QVar2.value) + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  (**(code **)(lVar12 + 0x68))();
  pOVar8 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)uVar9);
  (**(code **)(lVar12 + 8))(uVar9,CONCAT71(extraout_var,QVar2.value));
  _swift_task_dealloc(uVar9);
  FUN_10090fe24(pOVar8,thunk_FUN_10090f01c,puVar7);
  _swift_release(puVar7);
  (**(code **)(lVar10 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10091398c | FUN_10091398c */

void FUN_10091398c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar2 + 0x60) = unaff_x20;
    pcVar1 = FUN_100913a60;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009139f0 | FUN_1009139f0 */

void FUN_1009139f0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 == 0) {
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar2 + 0x60) = lVar3;
    pcVar1 = FUN_100913a60;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100913a60 | FUN_100913a60 */

void FUN_100913a60(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100913a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100913a6c | FUN_100913a6c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100913a6c(undefined8 param_1)

{
  QoSClass QVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined *puVar4;
  OS_dispatch_queue *pOVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar2;
  
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,QVar1.value);
  lVar11 = *(long *)(lVar2 + -8);
  puVar8 = &stack0xffffffffffffffa0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  lVar12 = *(long *)(puVar3 + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  lVar9 = (long)puVar8 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar12 + 0x10))(lVar9,param_1,puVar3);
  uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar7 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100f15e80;
  _swift_allocObject(&DAT_100f15e80,uVar7 + lVar10,uVar6 | 7);
  (**(code **)(lVar12 + 0x20))(puVar4 + uVar7,lVar9,puVar3);
  FUN_100903d90(0);
  (**(code **)(lVar11 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
             ,lVar2);
  pOVar5 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)puVar8);
  (**(code **)(lVar11 + 8))(puVar8,lVar2);
  FUN_10090fe24(pOVar5,thunk_FUN_10090f01c,puVar4);
  _swift_release(puVar4);
  return 0;
}



/* Address: 0x100913bc4 | FUN_100913bc4 */

void FUN_100913bc4(void)

{
  FUN_100913bd8();
  return;
}



/* Address: 0x100913bd8 | FUN_100913bd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100913bd8(void)

{
  code *pcVar1;
  QoSClass QVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  pthread_mutexattr_t *ppVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  pthread_mutexattr_t local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  QVar2 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,QVar2.value);
  lVar8 = *(long *)(lVar9 + -8);
  puVar10 = &stack0xffffffffffffff80 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fecd98;
  FUN_1000f7830(&DAT_100fecd98,&DAT_100c84b10);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = 0;
  local_78.__sig = 0;
  local_78.__opaque[0] = '\0';
  local_78.__opaque[1] = '\0';
  local_78.__opaque[2] = '\0';
  local_78.__opaque[3] = '\0';
  local_78.__opaque[4] = '\0';
  local_78.__opaque[5] = '\0';
  local_78.__opaque[6] = '\0';
  local_78.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_78);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x18),&local_78);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100913e0c);
    (*pcVar1)();
  }
  local_78.__sig = 0;
  FUN_1000f7830(&DAT_100fecbd8,&DAT_100c84900);
  _swift_allocObject();
  ppVar5 = &local_78;
  FUN_100671b38();
  puVar6 = &DAT_100f15e58;
  _swift_allocObject(&DAT_100f15e58,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(pthread_mutexattr_t **)(puVar6 + 0x18) = ppVar5;
  FUN_100903d90(0);
  (**(code **)(lVar8 + 0x68))
            (puVar10,*(undefined4 *)
                      PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
             ,lVar9);
  _swift_retain(puVar4);
  _swift_retain(ppVar5);
  pOVar7 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)puVar10);
  (**(code **)(lVar8 + 8))(puVar10,lVar9);
  FUN_10090fe24(pOVar7,FUN_10091543c,puVar6);
  _swift_release(puVar6);
  local_78.__sig = 1;
  FUN_100671cfc(&local_78);
  FUN_100671c28();
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(puVar4 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100913e10);
    (*pcVar1)();
  }
  lVar9 = *(long *)(puVar4 + 0x10);
  if (lVar9 == 0) {
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(puVar4 + 0x18));
    _swift_release(ppVar5);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100913e18);
      (*pcVar1)();
    }
    _swift_release(puVar4);
  }
  else {
    _swift_willThrow();
    _swift_errorRetain(lVar9);
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(puVar4 + 0x18));
    _swift_release(ppVar5);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100913e14);
      (*pcVar1)();
    }
    _swift_release(puVar4);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100913e1c | FUN_100913e1c */

void FUN_100913e1c(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 local_38;
  
  if (param_1 != 0) {
    _swift_errorRetain();
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100913e9c);
      (*pcVar1)();
    }
    _swift_errorRelease(*(undefined8 *)(param_2 + 0x10));
    *(long *)(param_2 + 0x10) = param_1;
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x18));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100913ea0);
      (*pcVar1)();
    }
  }
  local_38 = 0;
  FUN_100671cfc(&local_38);
  local_38 = 1;
  FUN_10067215c(&local_38);
  return;
}



/* Address: 0x100913ea0 | FUN_100913ea0 */

void FUN_100913ea0(undefined8 param_1)

{
  FUN_100913ec8(param_1,FUN_100671cfc,FUN_100671c1c);
  return;
}



/* Address: 0x100913eb4 | FUN_100913eb4 */

void FUN_100913eb4(undefined8 param_1)

{
  FUN_100913ec8(param_1,FUN_10067215c,FUN_100671c28);
  return;
}



/* Address: 0x100913ec8 | FUN_100913ec8 */

void FUN_100913ec8(undefined8 param_1,code *param_2,code *param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar2;
  
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar8 = *(long *)(lVar2 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar4 + -8);
  lVar6 = (long)puVar5 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(puVar5,param_1,lVar2);
  puVar3 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar4);
  if ((int)puVar3 == 1) {
    (**(code **)(lVar8 + 8))(puVar5,lVar2);
    (*param_3)();
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar4);
    (*param_2)(lVar6);
    (**(code **)(lVar7 + 8))(lVar6,lVar4);
  }
  return;
}



/* Address: 0x100913fd4 | FUN_100913fd4 */

void FUN_100913fd4(undefined8 *param_1,code *param_2)

{
  (*param_2)(*param_1);
  return;
}



/* Address: 0x100913ff8 | FUN_100913ff8 */

void FUN_100913ff8(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x28);
  return;
}



/* Address: 0x100914008 | FUN_100914008 */

void FUN_100914008(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10091163c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100914014 | FUN_100914014 */

void FUN_100914014(undefined8 param_1)

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
  plVar5 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100912ed8(plVar5,param_1,uVar3,uVar2,uVar4,uVar6,uVar1);
  return;
}



/* Address: 0x10091409c | FUN_10091409c */

void FUN_10091409c(void)

{
  long unaff_x20;
  
  FUN_100913438(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009140a4 | FUN_1009140a4 */

void FUN_1009140a4(void)

{
  FUN_100913a6c();
  return;
}



/* Address: 0x1009140ac | thunk_FUN_1009140b0 */

void thunk_FUN_1009140b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c849b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c849b8,&DAT_100f15968);
  DAT_100fecca8 = pTVar1;
  return;
}



/* Address: 0x1009140b0 | FUN_1009140b0 */

void FUN_1009140b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c849b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c849b8,&DAT_100f15968);
  DAT_100fecca8 = pTVar1;
  return;
}



/* Address: 0x1009140f0 | FUN_1009140f0 */

undefined1  [16] FUN_1009140f0(void)

{
  return ZEXT816(0x100f15898);
}



/* Address: 0x100914100 | FUN_100914100 */

undefined1  [16] FUN_100914100(void)

{
  return ZEXT816(0x100f158b8);
}



/* Address: 0x100914110 | FUN_100914110 */

undefined1  [16] FUN_100914110(void)

{
  return ZEXT816(0x100f158d8);
}



/* Address: 0x100914120 | FUN_100914120 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100914120(void)

{
  return ZEXT816(0x100feccf0);
}



/* Address: 0x100914140 | FUN_100914140 */

undefined1  [16] FUN_100914140(void)

{
  return ZEXT816(0x100f15968);
}



/* Address: 0x100914150 | FUN_100914150 */

undefined8 * FUN_100914150(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10091418c | FUN_10091418c */

undefined8 * FUN_10091418c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x1009141e4 | FUN_1009141e4 */

undefined8 * FUN_1009141e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100914228 | FUN_100914228 */

undefined1  [16] FUN_100914228(void)

{
  return ZEXT816(0x100f159e0);
}



/* Address: 0x100914238 | FUN_100914238 */

void FUN_100914238(void)

{
  FUN_100914240(0);
  return;
}



/* Address: 0x100914240 | FUN_100914240 */

void FUN_100914240(void)

{
  undefined8 uVar1;
  
  if (DAT_100fecd88 != 0) {
    return;
  }
  uVar1 = 0x44000001;
  _swift_getFunctionTypeMetadata1
            (0x44000001,&DAT_100f15968,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fecd88 = uVar1;
  return;
}



/* Address: 0x100914294 | FUN_100914294 */

undefined8 * FUN_100914294(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10090fd60(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x1009142d8 | FUN_1009142d8 */

void FUN_1009142d8(undefined8 *param_1)

{
  FUN_10090fdd4(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}


