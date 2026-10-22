/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100671320 | FUN_100671320 */

undefined1  [16] FUN_100671320(void)

{
  return ZEXT816(0x100671310);
}



/* Address: 0x100671330 | thunk_FUN_10066babc */

void thunk_FUN_10066babc(void)

{
  FUN_10066babc();
  return;
}



/* Address: 0x100671334 | FUN_100671334 */

undefined ** FUN_100671334(void)

{
  return &PTR_thunk_FUN_10066babc_100ef4000;
}



/* Address: 0x100671340 | FUN_100671340 */

undefined1  [16] FUN_100671340(void)

{
  return ZEXT816(0x100671330);
}



/* Address: 0x100671350 | thunk_FUN_10066bac4 */

void thunk_FUN_10066bac4(void)

{
  FUN_10066bac4();
  return;
}



/* Address: 0x100671354 | FUN_100671354 */

undefined ** FUN_100671354(void)

{
  return &PTR_thunk_FUN_10066bac4_100ef4010;
}



/* Address: 0x100671360 | FUN_100671360 */

undefined1  [16] FUN_100671360(void)

{
  return ZEXT816(0x100671350);
}



/* Address: 0x100671370 | thunk_FUN_10066bacc */

void thunk_FUN_10066bacc(void)

{
  FUN_10066bacc();
  return;
}



/* Address: 0x100671374 | FUN_100671374 */

undefined ** FUN_100671374(void)

{
  return &PTR_thunk_FUN_10066bacc_100ef4020;
}



/* Address: 0x100671380 | FUN_100671380 */

undefined1  [16] FUN_100671380(void)

{
  return ZEXT816(0x100671370);
}



/* Address: 0x100671390 | FUN_100671390 */

undefined1  [16] FUN_100671390(void)

{
  return ZEXT816(0x1006713a0);
}



/* Address: 0x1006713a0 | FUN_1006713a0 */

void FUN_1006713a0(undefined8 *param_1)

{
  FUN_10066ba68(*param_1);
  return;
}



/* Address: 0x1006713a8 | FUN_1006713a8 */

undefined1  [16] FUN_1006713a8(void)

{
  return ZEXT816(0x1006713b8);
}



/* Address: 0x1006713b8 | FUN_1006713b8 */

void FUN_1006713b8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  FUN_10066ba94(param_1,*param_2,*param_3);
  return;
}



/* Address: 0x1006713d4 | FUN_1006713d4 */

undefined1  [16] FUN_1006713d4(void)

{
  return ZEXT816(0x1006713e4);
}



/* Address: 0x1006713e4 | FUN_1006713e4 */

void FUN_1006713e4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10066baa8(param_2,*param_3);
  *param_1 = param_2;
  return;
}



/* Address: 0x10067140c | FUN_10067140c */

void FUN_10067140c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10066bab0(param_2,*param_3);
  *param_1 = param_2;
  return;
}



/* Address: 0x100671434 | FUN_100671434 */

void FUN_100671434(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_10066babc(param_2,*param_3);
  *param_1 = param_2;
  return;
}



/* Address: 0x10067145c | FUN_10067145c */

undefined1  [16] FUN_10067145c(void)

{
  return ZEXT816(0x10067140c);
}



/* Address: 0x10067146c | FUN_10067146c */

undefined1  [16] FUN_10067146c(void)

{
  return ZEXT816(0x100671434);
}



/* Address: 0x10067147c | FUN_10067147c */

undefined1  [16] FUN_10067147c(void)

{
  return ZEXT816(0x10067148c);
}



/* Address: 0x10067148c | FUN_10067148c */

void FUN_10067148c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10066bac4();
  *param_1 = param_2;
  return;
}



/* Address: 0x1006714b0 | FUN_1006714b0 */

undefined1  [16] FUN_1006714b0(void)

{
  return ZEXT816(0x1006714c0);
}



/* Address: 0x1006714c0 | FUN_1006714c0 */

void FUN_1006714c0(undefined8 param_1,undefined8 *param_2)

{
  FUN_10066bacc(param_1,*param_2);
  return;
}



/* Address: 0x1006714c8 | FUN_1006714c8 */

undefined8 FUN_1006714c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _swift_allocObject();
  uVar1 = param_1;
  FUN_1006718cc(param_1);
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x100671510 | FUN_100671510 */

undefined8 FUN_100671510(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006718cc();
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x100671540 | FUN_100671540 */

void FUN_100671540(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_retain(lVar3);
  lVar2 = lVar3 + 0x10;
  FUN_10066befc(lVar2,0xdeadbee);
  _swift_release(lVar3);
  if (lVar2 != 0) {
    _swift_unknownObjectRelease(lVar2);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006715a4);
  (*pcVar1)();
}



/* Address: 0x1006715a4 | FUN_1006715a4 */

void FUN_1006715a4(void)

{
  FUN_100671540();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006715c4 | FUN_1006715c4 */

undefined1 FUN_1006715c4(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_30;
  undefined1 local_21;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_30 = param_2;
  FUN_1006716c8(&local_21,&local_30,FUN_100671950,auStack_60,*(undefined8 *)(*unaff_x20 + 0x50),
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Bool_100eac570,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_21;
}



/* Address: 0x100671630 | FUN_100671630 */

void FUN_100671630(undefined1 *param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_4 + 0x10);
  do {
    uVar1 = lVar4 + 0x10;
    FUN_10066bed4(uVar1,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      if (param_3 != param_2) {
        _swift_unknownObjectRetain(param_3);
        _swift_unknownObjectRelease(param_2);
      }
      uVar3 = 1;
LAB_1006716ac:
      *param_1 = uVar3;
      return;
    }
    lVar2 = lVar4 + 0x10;
    FUN_10066bf04();
    if ((lVar2 != 0) && (lVar2 != param_2)) {
      uVar3 = 0;
      goto LAB_1006716ac;
    }
    _pthread_yield_np();
  } while( true );
}



/* Address: 0x1006716c8 | FUN_1006716c8 */

void FUN_1006716c8(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_2)(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_8,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x100671740 | FUN_100671740 */

long FUN_100671740(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  _swift_unknownObjectRetain();
  do {
    while( true ) {
      lVar1 = lVar3 + 0x10;
      FUN_10066bf04();
      if (lVar1 != 0) break;
      _pthread_yield_np();
    }
    uVar2 = lVar3 + 0x10;
    FUN_10066bed4(uVar2,lVar1,param_1);
  } while ((uVar2 & 1) == 0);
  return lVar1;
}



/* Address: 0x10067179c | FUN_10067179c */

long FUN_10067179c(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  do {
    while( true ) {
      lVar2 = lVar4 + 0x10;
      FUN_10066bf04();
      if (lVar2 != 0) break;
      _pthread_yield_np();
    }
    uVar3 = lVar4 + 0x10;
    FUN_10066bed4(uVar3,lVar2,0);
  } while ((uVar3 & 1) == 0);
  _swift_unknownObjectRetain(lVar2);
  lVar4 = lVar4 + 0x10;
  FUN_10066bed4(lVar4,0,lVar2);
  if ((int)lVar4 != 0) {
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100671808);
  (*pcVar1)();
}



/* Address: 0x100671808 | FUN_100671808 */

void FUN_100671808(void)

{
  FUN_100671740();
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x10067181c | FUN_10067181c */

undefined8 FUN_10067181c(undefined8 param_1,code *param_2,long param_3)

{
  (**(code **)(param_3 + 8))(param_2,param_3);
  (*param_2)(param_1);
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x10067186c | FUN_10067186c */

void FUN_10067186c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 8))();
  (*pcVar1)();
  _swift_release(lVar2);
  unaff_x20[2] = param_1;
  return;
}



/* Address: 0x1006718cc | FUN_1006718cc */

void FUN_1006718cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fd9ae0;
  FUN_1000f7830(&DAT_100fd9ae0,&DAT_100c6cc38);
  _swift_unknownObjectRetain(param_1);
  puVar2 = puVar1;
  _swift_bufferAllocate(puVar1,0x18,7);
  FUN_10066becc(puVar2 + 0x10,param_1);
  _swift_dynamicCastClassUnconditional(puVar2,puVar1,0,0,0);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  return;
}



/* Address: 0x100671950 | FUN_100671950 */

void FUN_100671950(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100671630(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_1);
  return;
}



/* Address: 0x100671970 | FUN_100671970 */

uint FUN_100671970(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Address: 0x1006719b4 | FUN_1006719b4 */

void FUN_1006719b4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 2) {
    if (1 < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 2);
    if (1 < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x1006719f0 | FUN_1006719f0 */

void FUN_1006719f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006719fc | FUN_1006719fc */

void FUN_1006719fc(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x60);
  return;
}



/* Address: 0x100671a40 | FUN_100671a40 */

void FUN_100671a40(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100671a4c | FUN_100671a4c */

void FUN_100671a4c(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x58);
  return;
}



/* Address: 0x100671a90 | FUN_100671a90 */

void FUN_100671a90(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100671a9c | FUN_100671a9c */

void FUN_100671a9c(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_mutex_destroy(*(pthread_mutex_t **)(unaff_x20 + 0x10));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x10),0xffffffffffffffff,0xffffffffffffffff);
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100671ad8);
  (*pcVar1)();
}



/* Address: 0x100671ad8 | FUN_100671ad8 */

undefined8 FUN_100671ad8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_allocObject();
  uVar1 = param_1;
  FUN_1006721f8(param_1);
  (**(code **)(*(long *)(*(long *)(unaff_x20 + 0x50) + -8) + 8))(param_1);
  return uVar1;
}



/* Address: 0x100671b38 | FUN_100671b38 */

undefined8 FUN_100671b38(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  uVar1 = param_1;
  FUN_1006721f8();
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 8))(param_1);
  return uVar1;
}



/* Address: 0x100671b80 | FUN_100671b80 */

void FUN_100671b80(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x70);
  iVar2 = _pthread_cond_destroy(*(pthread_cond_t **)((long)unaff_x20 + lVar4));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)((long)unaff_x20 + lVar4),0xffffffffffffffff,
                       0xffffffffffffffff);
    (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 8))
              ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
    _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100671bf8);
  (*pcVar1)();
}



/* Address: 0x100671bf8 | FUN_100671bf8 */

void FUN_100671bf8(void)

{
  FUN_100671b80();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100671c1c | FUN_100671c1c */

void FUN_100671c1c(void)

{
  FUN_100671c34(PTR__pthread_mutex_lock_100ea8928);
  return;
}



/* Address: 0x100671c28 | FUN_100671c28 */

void FUN_100671c28(void)

{
  FUN_100671c34(PTR__pthread_mutex_unlock_100ea8930);
  return;
}



/* Address: 0x100671c34 | FUN_100671c34 */

void FUN_100671c34(code *param_1)

{
  code *pcVar1;
  int iVar2;
  long *unaff_x20;
  
  iVar2 = (int)*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) + 0x10;
  (*param_1)();
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100671c64);
  (*pcVar1)();
}



/* Address: 0x100671c64 | FUN_100671c64 */

void FUN_100671c64(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *unaff_x20;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)
                              (*(long *)((long)unaff_x20 + *(long *)(lVar3 + 0x68)) + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100671cf8);
    (*pcVar1)();
  }
  lVar4 = *(long *)(*unaff_x20 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar4,auStack_48,0,0);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 0x10))(param_1,(long)unaff_x20 + lVar4);
  iVar2 = _pthread_mutex_unlock
                    ((pthread_mutex_t *)
                     (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) + 0x10));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100671cfc);
  (*pcVar1)();
}



/* Address: 0x100671cfc | FUN_100671cfc */

void FUN_100671cfc(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar6 = *unaff_x20;
  lVar4 = *(long *)(lVar6 + 0x50);
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = auStack_80 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)
                              (*(long *)((long)unaff_x20 + *(long *)(lVar6 + 0x68)) + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100671dfc);
    (*pcVar9)();
  }
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  lVar8 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  _swift_beginAccess((long)unaff_x20 + lVar1,auStack_78,0,0);
  pcVar9 = *(code **)(lVar7 + 0x10);
  do {
    (*pcVar9)(puVar5,(long)unaff_x20 + lVar1,lVar4);
    bVar2 = Swift::Equatable::___infix(puVar5,param_1,lVar4,*(undefined8 *)(lVar6 + 0x58));
    (**(code **)(lVar7 + 8))(puVar5,lVar4);
    if (bVar2) {
      return;
    }
    iVar3 = _pthread_cond_wait(*(pthread_cond_t **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)),
                               (pthread_mutex_t *)(lVar8 + 0x10));
  } while (iVar3 == 0);
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x100671dd8);
  (*pcVar9)();
}



/* Address: 0x100671dfc | FUN_100671dfc */

void FUN_100671dfc(double param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long *unaff_x20;
  undefined1 local_69;
  long local_68;
  long lStack_60;
  timeval local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_1 < 0.0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f58);
    (*pcVar2)();
  }
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)
                              (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f5c);
    (*pcVar2)();
  }
  param_1 = param_1 * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f60);
    (*pcVar2)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f64);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f68);
    (*pcVar2)();
  }
  local_58.tv_sec = 0;
  local_58.tv_usec = 0;
  _gettimeofday(&local_58,(void *)0x0);
  lStack_60 = (long)param_1 + (long)local_58.tv_usec * 1000;
  if (SCARRY8((long)param_1,(long)local_58.tv_usec * 1000)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f6c);
    (*pcVar2)();
  }
  lVar1 = lStack_60 / 1000000000;
  local_68 = local_58.tv_sec + lVar1;
  if (SCARRY8(local_58.tv_sec,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671f70);
    (*pcVar2)();
  }
  lStack_60 = lStack_60 % 1000000000;
  FUN_100671f74(&local_69,*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) + 0x10);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_69);
}



/* Address: 0x100671f74 | FUN_100671f74 */

void FUN_100671f74(undefined1 *param_1,pthread_mutex_t *param_2,long *param_3,undefined8 param_4,
                  timespec *param_5)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  _StringGuts _Var4;
  timespec *ptVar5;
  void *pvVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined1 *local_b0;
  undefined1 auStack_78 [24];
  
  lVar8 = *param_3;
  lVar9 = *(long *)(lVar8 + 0x50);
  lVar10 = *(long *)(lVar9 + -8);
  lVar1 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&local_b0 + lVar1;
  lVar11 = *(long *)(lVar8 + 0x60);
  lVar13 = *(long *)(lVar8 + 0x70);
  local_b0 = param_1;
  _swift_beginAccess((long)param_3 + lVar11,auStack_78,0,0);
  pcVar12 = *(code **)(lVar10 + 0x10);
  do {
    (*pcVar12)(lVar14,(long)param_3 + lVar11,lVar9);
    pvVar6 = *(void **)(lVar8 + 0x58);
    bVar2 = Swift::Equatable::___infix(lVar14,param_4,lVar9);
    (**(code **)(lVar10 + 8))(lVar14,lVar9);
    if (bVar2) {
      uVar7 = 1;
      goto LAB_100672060;
    }
    _Var4.unknown = (undefined *)param_2;
    ptVar5 = param_5;
    iVar3 = _pthread_cond_timedwait(*(pthread_cond_t **)((long)param_3 + lVar13),param_2,param_5);
  } while (iVar3 == 0);
  if (iVar3 != 0x3c) {
    Swift::_StringGuts::grow(0x33,_Var4);
    SVar15.bridgeObject = (void *)0xed000020726f7272;
    SVar15.str = (char *)0x6520746867756163;
    SVar18.bridgeObject = pvVar6;
    SVar18.str = (char *)ptVar5;
    Swift::String::append(SVar15,SVar18);
    SVar15 = Swift::CustomStringConvertible::get_description();
    SVar19.bridgeObject = pvVar6;
    SVar19.str = (char *)ptVar5;
    Swift::String::append(SVar15,SVar19);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    SVar16.bridgeObject = (void *)0x8000000100dafab0;
    SVar16.str = (char *)0xd000000000000024;
    SVar20.bridgeObject = pvVar6;
    SVar20.str = (char *)ptVar5;
    Swift::String::append(SVar16,SVar20);
    *(undefined4 *)((long)auStack_b8 + lVar1) = 0;
    *(undefined8 *)((long)&uStack_c0 + lVar1) = 0x129;
    SVar17.bridgeObject = (void *)0x2;
    SVar17.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar17,(StaticString)0x0,0xe000000000000000,0xdafaa0);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10067215c);
    (*pcVar12)();
  }
  iVar3 = _pthread_mutex_unlock
                    ((pthread_mutex_t *)
                     (*(long *)((long)param_3 + *(long *)(*param_3 + 0x68)) + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10067208c);
    (*pcVar12)();
  }
  uVar7 = 0;
LAB_100672060:
  *local_b0 = uVar7;
  return;
}



/* Address: 0x10067215c | FUN_10067215c */

void FUN_10067215c(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar4,auStack_48,0x21,0);
  (**(code **)(*(long *)(*(long *)(lVar3 + 0x50) + -8) + 0x18))((long)unaff_x20 + lVar4,param_1);
  _swift_endAccess(auStack_48);
  iVar2 = _pthread_mutex_unlock
                    ((pthread_mutex_t *)
                     (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006721f4);
    (*pcVar1)();
  }
  iVar2 = _pthread_cond_broadcast
                    (*(pthread_cond_t **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006721f8);
  (*pcVar1)();
}



/* Address: 0x1006721f8 | FUN_1006721f8 */

void FUN_1006721f8(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  pthread_mutexattr_t local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x70);
  uVar3 = 0x30;
  _swift_slowAlloc(0x30,0xffffffffffffffff);
  *(undefined8 *)((long)unaff_x20 + lVar6) = uVar3;
  (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + -8) + 0x10))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  puVar4 = &DAT_100fd9718;
  FUN_1000f7830(&DAT_100fd9718,&DAT_100c6c990);
  _swift_allocObject();
  local_48.__sig = 0;
  local_48.__opaque[0] = '\0';
  local_48.__opaque[1] = '\0';
  local_48.__opaque[2] = '\0';
  local_48.__opaque[3] = '\0';
  local_48.__opaque[4] = '\0';
  local_48.__opaque[5] = '\0';
  local_48.__opaque[6] = '\0';
  local_48.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_48);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x10),&local_48);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006722f0);
    (*pcVar1)();
  }
  *(undefined **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)) = puVar4;
  iVar2 = _pthread_cond_init(*(pthread_cond_t **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)),
                             (pthread_condattr_t *)0x0);
  if (iVar2 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006722f4);
  (*pcVar1)();
}



/* Address: 0x1006722f8 | FUN_1006722f8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006722f8(void)

{
  return ZEXT816(0x100fd9b28);
}



/* Address: 0x100672318 | FUN_100672318 */

void FUN_100672318(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
    _swift_initClassMetadata2(param_1,0,3,&local_38,param_1 + 0x60);
  }
  return;
}



/* Address: 0x1006723a4 | FUN_1006723a4 */

void FUN_1006723a4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006723b0 | FUN_1006723b0 */

undefined1  [16] FUN_1006723b0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  lVar2 = param_2;
  FUN_100672464();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100672400 | FUN_100672400 */

undefined1  [16] FUN_100672400(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  lVar2 = param_2;
  thunk_FUN_100672464();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}


