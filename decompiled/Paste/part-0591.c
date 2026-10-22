/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10066e91c | FUN_10066e91c */

void FUN_10066e91c(undefined8 param_1,ManagedBuffer *param_2)

{
  UnsafeMutablePointer<undefined> UVar1;
  ManagedBuffer *unaff_x20;
  
  UVar1 = Swift::ManagedBuffer::get_headerAddress(unaff_x20,param_2);
  Swift::ManagedBuffer::get_firstElementAddress(unaff_x20,(ManagedBuffer *)UVar1.unknown);
  (*(code *)param_2)(param_1);
  return;
}



/* Address: 0x10066e96c | FUN_10066e96c */

void FUN_10066e96c(undefined8 param_1,ManagedBuffer *param_2,undefined8 param_3,undefined8 param_4)

{
  UnsafeMutablePointer<undefined> UVar1;
  UnsafeMutablePointer<undefined> UVar2;
  ManagedBuffer *unaff_x20;
  long lVar3;
  undefined1 local_48 [8];
  
  lVar3 = *(long *)unaff_x20;
  UVar1 = Swift::ManagedBuffer::get_headerAddress(unaff_x20,param_2);
  UVar2 = Swift::ManagedBuffer::get_firstElementAddress(unaff_x20,UVar1.unknown);
  FUN_10066e9f8(param_1,UVar1.unknown,UVar2.unknown,param_2,param_3,
                *(undefined8 *)(lVar3 + DAT_101057c28),param_4,local_48);
  return;
}



/* Address: 0x10066e9f8 | FUN_10066e9f8 */

void FUN_10066e9f8(undefined8 param_1,undefined8 param_2,pthread_mutex_t *param_3,code *param_4)

{
  code *pcVar1;
  int iVar2;
  long *in_x6;
  long unaff_x21;
  
  iVar2 = _pthread_mutex_lock(param_3);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ea90);
    (*pcVar1)();
  }
  (*param_4)(param_1,param_2);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock(param_3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ea98);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock(param_3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ea94);
      (*pcVar1)();
    }
    *in_x6 = unaff_x21;
  }
  return;
}



/* Address: 0x10066ea98 | FUN_10066ea98 */

undefined * FUN_10066ea98(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100fd9718;
  FUN_1000f7830(&DAT_100fd9718,&DAT_100c6c990);
  _swift_allocObject();
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x10),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066eb28);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10066eb2c | FUN_10066eb2c */

void FUN_10066eb2c(undefined8 param_1)

{
  FUN_10066eb44(param_1,PTR__pthread_mutex_lock_100ea8928);
  return;
}



/* Address: 0x10066eb38 | FUN_10066eb38 */

void FUN_10066eb38(undefined8 param_1)

{
  FUN_10066eb44(param_1,PTR__pthread_mutex_unlock_100ea8930);
  return;
}



/* Address: 0x10066eb44 | FUN_10066eb44 */

void FUN_10066eb44(int param_1,code *param_2)

{
  code *pcVar1;
  
  param_1 = param_1 + 0x10;
  (*param_2)();
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066eb64);
  (*pcVar1)();
}



/* Address: 0x10066eb64 | FUN_10066eb64 */

void FUN_10066eb64(undefined8 param_1,ManagedBuffer *param_2,undefined8 param_3,
                  ManagedBuffer *param_4)

{
  UnsafeMutablePointer<undefined> UVar1;
  
  UVar1 = Swift::ManagedBuffer::get_headerAddress(param_4,param_2);
  Swift::ManagedBuffer::get_firstElementAddress(param_4,(ManagedBuffer *)UVar1.unknown);
  (*(code *)param_2)(param_1);
  return;
}



/* Address: 0x10066ebb8 | FUN_10066ebb8 */

void FUN_10066ebb8(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long unaff_x21;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ec34);
    (*pcVar1)();
  }
  (*param_2)(param_1);
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ec38);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ec10);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x10066ec38 | FUN_10066ec38 */

void FUN_10066ec38(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long unaff_x21;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_3 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066eca4);
    (*pcVar1)();
  }
  (*param_1)();
  if (unaff_x21 == 0) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066eca8);
      (*pcVar1)();
    }
  }
  else {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_3 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ec84);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x10066eca8 | FUN_10066eca8 */

undefined1  [16] FUN_10066eca8(void)

{
  return ZEXT816(0x100ef38a0);
}



/* Address: 0x10066ecb8 | FUN_10066ecb8 */

void FUN_10066ecb8(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_101057c28 + 8);
  return;
}



/* Address: 0x10066ecf8 | FUN_10066ecf8 */

void FUN_10066ecf8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10066ed04 | FUN_10066ed04 */

undefined1  [16] FUN_10066ed04(void)

{
  return ZEXT816(0x100ef39a0);
}



/* Address: 0x10066ed14 | FUN_10066ed14 */

undefined8 FUN_10066ed14(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10066ecf8(0);
  uVar1 = param_1;
  FUN_10066e7bc(param_1);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return uVar1;
}



/* Address: 0x10066ed6c | FUN_10066ed6c */

void FUN_10066ed6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10066e96c(param_1,param_2,param_5);
  return;
}



/* Address: 0x10066ed90 | FUN_10066ed90 */

void FUN_10066ed90(void)

{
  FUN_10066e890();
  return;
}



/* Address: 0x10066edb0 | FUN_10066edb0 */

void FUN_10066edb0(void)

{
  FUN_10066e89c();
  return;
}



/* Address: 0x10066edd0 | FUN_10066edd0 */

void FUN_10066edd0(undefined8 param_1,ManagedBuffer *param_2,undefined8 param_3,
                  ManagedBuffer *param_4,undefined8 param_5,undefined8 param_6)

{
  UnsafeMutablePointer<undefined> UVar1;
  undefined *puVar2;
  
  UVar1 = Swift::ManagedBuffer::get_headerAddress(param_4,param_2);
  Swift::ManagedBuffer::get_firstElementAddress(param_4,(ManagedBuffer *)UVar1.unknown);
  (*(code *)param_2)(param_1,UVar1.unknown);
  puVar2 = &DAT_100fd97a0;
  FUN_1000f7830(&DAT_100fd97a0,&DAT_100c6c9d0);
  FUN_100004520(param_4,puVar2,param_6,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  return;
}



/* Address: 0x10066ee74 | FUN_10066ee74 */

void FUN_10066ee74(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10066ee80 | FUN_10066ee80 */

void FUN_10066ee80(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10066ee8c | FUN_10066ee8c */

undefined8 FUN_10066ee8c(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10066eec0();
  return unaff_x20;
}



/* Address: 0x10066eec0 | FUN_10066eec0 */

void FUN_10066eec0(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = 0x30;
  _swift_slowAlloc(0x30,0xffffffffffffffff);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  puVar4 = &DAT_100fd9718;
  FUN_1000f7830(&DAT_100fd9718,&DAT_100c6c990);
  _swift_allocObject();
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x10),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ef74);
    (*pcVar1)();
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  iVar2 = _pthread_cond_init(*(pthread_cond_t **)(unaff_x20 + 0x20),(pthread_condattr_t *)0x0);
  if (iVar2 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066ef78);
  (*pcVar1)();
}



/* Address: 0x10066ef7c | FUN_10066ef7c */

void FUN_10066ef7c(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_cond_destroy(*(pthread_cond_t **)(unaff_x20 + 0x20));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x20),0xffffffffffffffff,0xffffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066efb8);
  (*pcVar1)();
}



/* Address: 0x10066efb8 | FUN_10066efb8 */

void FUN_10066efb8(void)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  
  iVar2 = _pthread_cond_destroy(*(pthread_cond_t **)(unaff_x20 + 0x20));
  if (iVar2 == 0) {
    _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x20),0xffffffffffffffff,0xffffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
    _swift_deallocClassInstance();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066effc);
  (*pcVar1)();
}



/* Address: 0x10066effc | FUN_10066effc */

undefined8 FUN_10066effc(undefined8 param_1)

{
  FUN_10066f030();
  _swift_allocObject();
  FUN_10066eec0();
  return param_1;
}



/* Address: 0x10066f030 | FUN_10066f030 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10066f030(void)

{
  return ZEXT816(0x100fd98f0);
}



/* Address: 0x10066f050 | FUN_10066f050 */

void FUN_10066f050(long param_1,code *param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(param_4 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f110);
    (*pcVar1)();
  }
  (*param_2)();
  _swift_beginAccess(param_4 + 0x18,auStack_58,1,0);
  if (!SCARRY8(*(long *)(param_4 + 0x18),param_1)) {
    *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + param_1;
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f118);
      (*pcVar1)();
    }
    if ((param_3 & 0xff) != 0) {
      if (((uint)param_3 & 0xff) == 1) {
        iVar2 = _pthread_cond_signal(*(pthread_cond_t **)(param_4 + 0x20));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f0e8);
          (*pcVar1)();
        }
      }
      else {
        iVar2 = _pthread_cond_broadcast(*(pthread_cond_t **)(param_4 + 0x20));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f11c);
          (*pcVar1)();
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f114);
  (*pcVar1)();
}



/* Address: 0x10066f11c | FUN_10066f11c */

void FUN_10066f11c(char param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      iVar2 = _pthread_cond_signal(*(pthread_cond_t **)(param_2 + 0x20));
      if (iVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f144);
        (*pcVar1)();
      }
    }
    else {
      iVar2 = _pthread_cond_broadcast(*(pthread_cond_t **)(param_2 + 0x20));
      if (iVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f15c);
        (*pcVar1)();
      }
    }
  }
  return;
}



/* Address: 0x10066f15c | FUN_10066f15c */

void FUN_10066f15c(undefined8 param_1,code *param_2,uint param_3,long param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(param_4 + 0x10);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066f21c);
    (*pcVar2)();
  }
  (*param_2)();
  if ((param_3 & 0xff) != 1) {
    _swift_beginAccess(param_4 + 0x18,auStack_58,1,0);
    *(undefined8 *)(param_4 + 0x18) = param_1;
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar3 == 0) {
    uVar1 = param_3 >> 8 & 0xff;
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        iVar3 = _pthread_cond_signal(*(pthread_cond_t **)(param_4 + 0x20));
        if (iVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066f1f4);
          (*pcVar2)();
        }
      }
      else {
        iVar3 = _pthread_cond_broadcast(*(pthread_cond_t **)(param_4 + 0x20));
        if (iVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066f224);
          (*pcVar2)();
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10066f220);
  (*pcVar2)();
}



/* Address: 0x10066f224 | FUN_10066f224 */

void FUN_10066f224(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  pthread_mutex_t *ppVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_4 + 0x10);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f300);
    (*pcVar1)();
  }
  ppVar3 = (pthread_mutex_t *)&stack0xffffffffffffffa8;
  _swift_beginAccess(param_4 + 0x18,ppVar3,1,0);
  while (*(long *)(param_4 + 0x18) < 1) {
    ppVar3 = (pthread_mutex_t *)(lVar4 + 0x10);
    iVar2 = _pthread_cond_wait(*(pthread_cond_t **)(param_4 + 0x20),ppVar3);
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f290);
      (*pcVar1)();
    }
  }
  (*param_2)();
  if (SCARRY8(*(long *)(param_4 + 0x18),param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f304);
    (*pcVar1)();
  }
  *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + param_1;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 == 0) {
    if (((ulong)ppVar3 & 0xff) != 0) {
      if (((uint)ppVar3 & 0xff) == 1) {
        iVar2 = _pthread_cond_signal(*(pthread_cond_t **)(param_4 + 0x20));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f2d8);
          (*pcVar1)();
        }
      }
      else {
        iVar2 = _pthread_cond_broadcast(*(pthread_cond_t **)(param_4 + 0x20));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f30c);
          (*pcVar1)();
        }
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066f308);
  (*pcVar1)();
}



/* Address: 0x10066f30c | thunk_FUN_10066f310 */

void thunk_FUN_10066f310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd98a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ca48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ca48,&DAT_100ef3a68);
  DAT_100fd98a8 = pTVar1;
  return;
}



/* Address: 0x10066f310 | FUN_10066f310 */

void FUN_10066f310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd98a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ca48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ca48,&DAT_100ef3a68);
  DAT_100fd98a8 = pTVar1;
  return;
}



/* Address: 0x10066f350 | FUN_10066f350 */

undefined1  [16] FUN_10066f350(void)

{
  return ZEXT816(0x100ef39d0);
}



/* Address: 0x10066f360 | FUN_10066f360 */

undefined1  [16] FUN_10066f360(void)

{
  return ZEXT816(0x100ef3a68);
}



/* Address: 0x10066f370 | FUN_10066f370 */

undefined8 FUN_10066f370(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10067181c();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return uVar1;
}



/* Address: 0x10066f3b8 | FUN_10066f3b8 */

uint FUN_10066f3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long param_5)

{
  (**(code **)(param_5 + 0x18))(param_4,param_5);
  (*param_4)(param_3,param_1,param_2);
  _swift_release(param_5);
  return (uint)param_3 & 1;
}



/* Address: 0x10066f420 | FUN_10066f420 */

void FUN_10066f420(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long param_5)

{
  (**(code **)(param_5 + 0x20))(param_4,param_5);
  (*param_4)(param_1,param_3,param_2);
  _swift_release(param_5);
  return;
}



/* Address: 0x10066f47c | FUN_10066f47c */

void FUN_10066f47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long param_5)

{
  (**(code **)(param_5 + 0x28))(param_4,param_5);
  (*param_4)(param_1,param_3,param_2);
  _swift_release(param_5);
  return;
}



/* Address: 0x10066f4d8 | FUN_10066f4d8 */

void FUN_10066f4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  long param_5)

{
  (**(code **)(param_5 + 0x30))(param_4,param_5);
  (*param_4)(param_1,param_3,param_2);
  _swift_release(param_5);
  return;
}



/* Address: 0x10066f534 | FUN_10066f534 */

void FUN_10066f534(undefined8 param_1,undefined8 param_2,code *param_3,long param_4)

{
  (**(code **)(param_4 + 0x38))(param_3,param_4);
  (*param_3)(param_1,param_2);
  _swift_release(param_4);
  return;
}



/* Address: 0x10066f588 | FUN_10066f588 */

void FUN_10066f588(undefined8 param_1,undefined8 param_2,code *param_3,long param_4)

{
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  (*param_3)(param_2,param_1);
  _swift_release(param_4);
  return;
}



/* Address: 0x10066f5dc | FUN_10066f5dc */

void FUN_10066f5dc(undefined8 param_1,code *param_2,long param_3)

{
  (**(code **)(param_3 + 0x10))(param_2,param_3);
  (*param_2)(param_1);
  _swift_release(param_3);
  return;
}



/* Address: 0x10066f620 | FUN_10066f620 */

long * FUN_10066f620(long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  
  plVar1 = unaff_x20;
  _swift_allocObject();
  pcVar2 = *(code **)(*plVar1 + 0x50);
  lVar4 = *(long *)(*plVar1 + 0x58);
  (**(code **)(lVar4 + 8))();
  lVar3 = param_1;
  (*pcVar2)();
  _swift_release(lVar4);
  plVar1[2] = lVar3;
  (**(code **)(*(long *)(unaff_x20[10] + -8) + 8))(param_1);
  return plVar1;
}



/* Address: 0x10066f6b0 | FUN_10066f6b0 */

undefined8 FUN_10066f6b0(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  uVar1 = param_1;
  FUN_10067186c();
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 8))(param_1);
  return uVar1;
}



/* Address: 0x10066f6f8 | FUN_10066f6f8 */

uint FUN_10066f6f8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x18))();
  (*pcVar1)(lVar3,param_1,param_2);
  _swift_release(lVar2);
  return (uint)lVar3 & 1;
}



/* Address: 0x10066f760 | FUN_10066f760 */

void FUN_10066f760(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x20))();
  (*pcVar1)(param_1,lVar3,param_2);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10066f7bc | FUN_10066f7bc */

void FUN_10066f7bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x28))();
  (*pcVar1)(param_1,lVar3,param_2);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10066f818 | FUN_10066f818 */

void FUN_10066f818(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x30))();
  (*pcVar1)(param_1,lVar3,param_2);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10066f874 | FUN_10066f874 */

void FUN_10066f874(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x38))();
  (*pcVar1)(param_1,lVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10066f8c8 | FUN_10066f8c8 */

void FUN_10066f8c8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x40))();
  (*pcVar1)(lVar3,param_1);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10066f91c | FUN_10066f91c */

void FUN_10066f91c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x10))();
  (*pcVar1)(lVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10066f974 | FUN_10066f974 */

void FUN_10066f974(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20[2];
  pcVar1 = *(code **)(*unaff_x20 + 0x50);
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  (**(code **)(lVar2 + 0x10))();
  (*pcVar1)(lVar3);
  _swift_release(lVar2);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10066f9d4 | FUN_10066f9d4 */

void FUN_10066f9d4(uint param_1)

{
  FUN_10066b918(param_1 & 1);
  return;
}



/* Address: 0x10066f9dc | FUN_10066f9dc */

undefined ** FUN_10066f9dc(void)

{
  return &PTR_FUN_100ef3ab0;
}



/* Address: 0x10066f9e8 | FUN_10066f9e8 */

undefined1  [16] FUN_10066f9e8(void)

{
  return ZEXT816(0x10066f9d4);
}



/* Address: 0x10066f9f8 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x10066f9fc | FUN_10066f9fc */

undefined ** FUN_10066f9fc(void)

{
  return &PTR__free_100ef3ac0;
}



/* Address: 0x10066fa08 | FUN_10066fa08 */

undefined1  [16] FUN_10066fa08(void)

{
  return ZEXT816(0x10066f9f8);
}



/* Address: 0x10066fa18 | FUN_10066fa18 */

void FUN_10066fa18(undefined8 param_1,uint param_2,uint param_3)

{
  FUN_10066b944(param_1,param_2 & 1,param_3 & 1);
  return;
}



/* Address: 0x10066fa34 | FUN_10066fa34 */

undefined ** FUN_10066fa34(void)

{
  return &PTR_FUN_100ef3ad0;
}



/* Address: 0x10066fa40 | FUN_10066fa40 */

undefined1  [16] FUN_10066fa40(void)

{
  return ZEXT816(0x10066fa18);
}



/* Address: 0x10066fa50 | FUN_10066fa50 */

void FUN_10066fa50(undefined8 param_1,uint param_2)

{
  FUN_10066b958(param_1,param_2 & 1);
  return;
}



/* Address: 0x10066fa68 | FUN_10066fa68 */

undefined ** FUN_10066fa68(void)

{
  return &PTR_FUN_100ef3ae0;
}


