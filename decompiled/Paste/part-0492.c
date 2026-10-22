/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005b8d34 | FUN_1005b8d34 */

undefined1  [16] FUN_1005b8d34(void)

{
  return ZEXT816(0x100ee5890);
}



/* Address: 0x1005b8d44 | FUN_1005b8d44 */

undefined1  [16] FUN_1005b8d44(void)

{
  return ZEXT816(0x100ee58b8);
}



/* Address: 0x1005b8d54 | FUN_1005b8d54 */

void FUN_1005b8d54(long param_1)

{
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



/* Address: 0x1005b8d5c | thunk_FUN_1005b8c6c */

void thunk_FUN_1005b8c6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3ec8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63c78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63c78,&DAT_100ee58b8);
  DAT_100fd3ec8 = pTVar1;
  return;
}



/* Address: 0x1005b8d60 | FUN_1005b8d60 */

undefined1  [16] FUN_1005b8d60(void)

{
  return ZEXT816(0x100ee5a40);
}



/* Address: 0x1005b8d70 | FUN_1005b8d70 */

void FUN_1005b8d70(char *param_1,void *param_2)

{
  String SVar1;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  Swift::String::_withCString(SVar1);
  return;
}



/* Address: 0x1005b8d84 | FUN_1005b8d84 */

void FUN_1005b8d84(undefined8 param_1)

{
  if (DAT_100fd3ee0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb5a48);
  return;
}



/* Address: 0x1005b8dbc | FUN_1005b8dbc */

void FUN_1005b8dbc(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_101057b48);
  return;
}



/* Address: 0x1005b8df8 | FUN_1005b8df8 */

void FUN_1005b8df8(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005b8e08 | FUN_1005b8e08 */

void FUN_1005b8e08(void)

{
  FUN_1005b8d84(0);
  return;
}



/* Address: 0x1005b8e10 | FUN_1005b8e10 */

undefined8 * FUN_1005b8e10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _swift_retain();
  return param_1;
}



/* Address: 0x1005b8e3c | FUN_1005b8e3c */

undefined8 * FUN_1005b8e3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005b8e74 | FUN_1005b8e74 */

void FUN_1005b8e74(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005b8e80 | FUN_1005b8e80 */

undefined8 * FUN_1005b8e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005b8eb0 | FUN_1005b8eb0 */

undefined1  [16] FUN_1005b8eb0(void)

{
  return ZEXT816(0x100ee5ab8);
}



/* Address: 0x1005b8ec0 | thunk_FUN_1005b8e10 */

void thunk_FUN_1005b8e10(void)

{
  FUN_1005b8e10();
  return;
}



/* Address: 0x1005b8ec4 | FUN_1005b8ec4 */

void FUN_1005b8ec4(int param_1)

{
  code *pcVar1;
  code *in_x4;
  
  (*in_x4)();
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8eec);
  (*pcVar1)();
}



/* Address: 0x1005b8eec | FUN_1005b8eec */

undefined1  [16] FUN_1005b8eec(ulong param_1,undefined *param_2)

{
  code *pcVar1;
  mach_port_name_t name;
  u_int32_t uVar2;
  kern_return_t kVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  name = (mach_port_name_t)param_1;
  if (name == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8f64);
    (*pcVar1)();
  }
  if (param_2 != &DAT_100ee5c00) {
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  if (name == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8f68);
    (*pcVar1)();
  }
  uVar2 = _arc4random();
  kVar3 = _mach_port_guard(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name,(ulong)uVar2,0);
  if (kVar3 == 0) {
    auVar5._8_4_ = uVar2;
    auVar5._0_8_ = param_1;
    auVar5._12_4_ = 0;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8f6c);
  (*pcVar1)();
}



/* Address: 0x1005b8f6c | FUN_1005b8f6c */

void FUN_1005b8f6c(code *param_1,undefined8 param_2,undefined8 param_3)

{
  (*param_1)(param_3);
  return;
}



/* Address: 0x1005b8f94 | FUN_1005b8f94 */

void FUN_1005b8f94(mach_port_name_t param_1,mach_port_context_t param_2,undefined *param_3)

{
  code *pcVar1;
  kern_return_t kVar2;
  
  if (param_3 == &DAT_100ee5c00) {
    if (param_1 == 0xffffffff) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8ff8);
      (*pcVar1)();
    }
    kVar2 = _mach_port_destruct(*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_1,0,param_2);
    if (kVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8ffc);
      (*pcVar1)();
    }
  }
  else {
    kVar2 = _mach_port_deallocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_1);
    if (kVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b8fcc);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1005b8ffc | FUN_1005b8ffc */

void FUN_1005b8ffc(int param_1)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9008);
  (*pcVar1)();
}



/* Address: 0x1005b9008 | FUN_1005b9008 */

mach_port_name_t FUN_1005b9008(void)

{
  undefined *puVar1;
  mach_port_name_t name;
  code *pcVar2;
  kern_return_t kVar3;
  u_int32_t uVar4;
  mach_port_name_t local_3c;
  long local_38;
  
  puVar1 = PTR__mach_task_self__100ea8778;
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_3c = 0;
  kVar3 = _mach_port_allocate(*(ipc_space_t *)PTR__mach_task_self__100ea8778,1,&local_3c);
  name = local_3c;
  if (kVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b90b4);
    (*pcVar2)();
  }
  if (local_3c == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b90b8);
    (*pcVar2)();
  }
  if (local_3c == 0xffffffff) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b90bc);
    (*pcVar2)();
  }
  uVar4 = _arc4random();
  kVar3 = _mach_port_guard(*(ipc_space_t *)puVar1,name,(ulong)uVar4,0);
  if (kVar3 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return name;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b90c0);
  (*pcVar2)();
}



/* Address: 0x1005b90c4 | FUN_1005b90c4 */

undefined8 FUN_1005b90c4(undefined8 param_1,mach_port_context_t param_2)

{
  code *pcVar1;
  kern_return_t kVar2;
  
  kVar2 = _mach_port_unguard(*(ipc_space_t *)PTR__mach_task_self__100ea8778,
                             (mach_port_name_t)param_1,param_2);
  if (kVar2 == 0) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9104);
  (*pcVar1)();
}



/* Address: 0x1005b9104 | FUN_1005b9104 */

void FUN_1005b9104(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*param_1)(param_3,param_4);
  return;
}



/* Address: 0x1005b9130 | FUN_1005b9130 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1005b9130(mach_port_name_t param_1)

{
  code *pcVar1;
  kern_return_t kVar2;
  mach_msg_type_name_t local_20;
  mach_port_t mStack_1c;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _local_20 = 0;
  kVar2 = _mach_port_extract_right
                    (*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_1,0x15,&mStack_1c,
                     &local_20);
  if (kVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b91b4);
    (*pcVar1)();
  }
  if (local_20 != 0x12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b91b8);
    (*pcVar1)();
  }
  if (mStack_1c == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b91bc);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005b91c0 | FUN_1005b91c0 */

undefined1  [16] FUN_1005b91c0(ulong param_1)

{
  code *pcVar1;
  kern_return_t kVar2;
  mach_port_name_t name;
  undefined1 auVar3 [16];
  
  name = (mach_port_name_t)param_1;
  kVar2 = _mach_port_insert_right(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name,name,0x14);
  if ((name != 0) && (kVar2 == 0)) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b920c);
  (*pcVar1)();
}



/* Address: 0x1005b920c | FUN_1005b920c */

void FUN_1005b920c(mach_port_name_t param_1)

{
  code *pcVar1;
  kern_return_t kVar2;
  mach_msg_type_number_t local_44;
  integer_t local_40 [2];
  ulong uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_20 = 0;
  uStack_38 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_44 = 10;
  kVar2 = _mach_port_get_attributes
                    (*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_1,2,local_40,&local_44);
  if (kVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b928c);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uStack_38 & 0xffffffff);
}



/* Address: 0x1005b9290 | FUN_1005b9290 */

void FUN_1005b9290(mach_port_mscount_t param_1)

{
  code *pcVar1;
  kern_return_t kVar2;
  mach_port_name_t *unaff_x20;
  
  kVar2 = _mach_port_set_mscount(*(ipc_space_t *)PTR__mach_task_self__100ea8778,*unaff_x20,param_1);
  if (kVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b92c0);
  (*pcVar1)();
}



/* Address: 0x1005b92c0 | FUN_1005b92c0 */

undefined1  [16] FUN_1005b92c0(undefined8 *param_1)

{
  mach_port_name_t name;
  code *pcVar1;
  kern_return_t kVar2;
  mach_port_info_t port_info_out;
  long lVar3;
  mach_port_name_t *unaff_x20;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  port_info_out = (mach_port_info_t)0x34;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    port_info_out = _malloc(0x34);
  }
  else {
    _swift_coroFrameAlloc(0x34,0x264e);
  }
  *param_1 = port_info_out;
  name = *unaff_x20;
  port_info_out[0xb] = 10;
  port_info_out[0xc] = name;
  port_info_out[8] = 0;
  port_info_out[9] = 0;
  port_info_out[2] = 0;
  port_info_out[3] = 0;
  port_info_out[0] = 0;
  port_info_out[1] = 0;
  port_info_out[6] = 0;
  port_info_out[7] = 0;
  port_info_out[4] = 0;
  port_info_out[5] = 0;
  kVar2 = _mach_port_get_attributes
                    (*(ipc_space_t *)PTR__mach_task_self__100ea8778,name,2,port_info_out,
                     (mach_msg_type_number_t *)(port_info_out + 0xb));
  if (kVar2 == 0) {
    port_info_out[10] = port_info_out[2];
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
      auVar4._8_8_ = port_info_out + 10;
      auVar4._0_8_ = FUN_1005b9394;
      return auVar4;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9390);
  (*pcVar1)();
}



/* Address: 0x1005b9394 | FUN_1005b9394 */

void FUN_1005b9394(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  kern_return_t kVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  kVar2 = _mach_port_set_mscount
                    (*(ipc_space_t *)PTR__mach_task_self__100ea8778,
                     *(mach_port_name_t *)((long)pvVar3 + 0x30),
                     *(mach_port_mscount_t *)((long)pvVar3 + 0x28));
  if ((param_2 & 1) == 0) {
    if (kVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b93e8);
      (*pcVar1)();
    }
  }
  else if (kVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b93d0);
    (*pcVar1)();
  }
  _free(pvVar3);
  return;
}



/* Address: 0x1005b93e8 | FUN_1005b93e8 */

undefined8 FUN_1005b93e8(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  mach_port_name_t name;
  ulong uVar3;
  
  name = (mach_port_name_t)param_1;
  uVar2 = _mach_port_insert_right(*(ipc_space_t *)PTR__mach_task_self__100ea8778,name,name,0x13);
  uVar3 = (ulong)uVar2;
  if (uVar2 == 0xf || uVar2 == 0x14) {
    FUN_1005b9474();
    _swift_allocError(&DAT_100ee5be0,uVar3,0,0);
    _swift_willThrow();
  }
  else if ((name == 0) || (uVar2 != 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9474);
    (*pcVar1)();
  }
  return param_1;
}



/* Address: 0x1005b9474 | FUN_1005b9474 */

void FUN_1005b9474(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3f30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63e50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63e50,&DAT_100ee5be0);
  DAT_100fd3f30 = pTVar1;
  return;
}



/* Address: 0x1005b94b4 | thunk_FUN_1005b94b8 */

void thunk_FUN_1005b94b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3f38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63de8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63de8,&DAT_100ee5be0);
  DAT_100fd3f38 = pTVar1;
  return;
}



/* Address: 0x1005b94b8 | FUN_1005b94b8 */

void FUN_1005b94b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3f38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63de8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63de8,&DAT_100ee5be0);
  DAT_100fd3f38 = pTVar1;
  return;
}



/* Address: 0x1005b94f8 | FUN_1005b94f8 */

undefined1  [16] FUN_1005b94f8(void)

{
  return ZEXT816(0x100ee5af8);
}



/* Address: 0x1005b9508 | FUN_1005b9508 */

void FUN_1005b9508(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b950c);
  (*pcVar1)();
}



/* Address: 0x1005b950c | FUN_1005b950c */

void FUN_1005b950c(undefined4 *param_1,long param_2)

{
  FUN_1005b8f94(*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x1005b9524 | FUN_1005b9524 */

void FUN_1005b9524(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  return;
}



/* Address: 0x1005b9538 | FUN_1005b9538 */

void FUN_1005b9538(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005b9544 | FUN_1005b9544 */

undefined1  [16] FUN_1005b9544(void)

{
  return ZEXT816(0x100ee5be0);
}



/* Address: 0x1005b9554 | FUN_1005b9554 */

undefined1  [16] FUN_1005b9554(void)

{
  return ZEXT816(0x100ee5c00);
}



/* Address: 0x1005b9564 | FUN_1005b9564 */

undefined1  [16] FUN_1005b9564(void)

{
  return ZEXT816(0x100ee5c20);
}



/* Address: 0x1005b9574 | FUN_1005b9574 */

undefined1  [16] FUN_1005b9574(void)

{
  return ZEXT816(0x100ee5c40);
}



/* Address: 0x1005b9584 | /usr/lib/swift/libswiftCore.dylib::Swift::String::init */

String Swift::String::init(UnsafePointer<__int8> cString)

{
  String SVar1;
  
  SVar1 = init(cString);
  return SVar1;
}



/* Address: 0x1005b9588 | /usr/lib/swift/libswiftCore.dylib::Swift::String::$init */

void Swift::String::_init(UnsafePointer<__int8> validatingUTF8)

{
  _init(validatingUTF8);
  return;
}



/* Address: 0x1005b958c | FUN_1005b958c */

void FUN_1005b958c(void)

{
  FUN_1005b8d70();
  return;
}



/* Address: 0x1005b95a0 | FUN_1005b95a0 */

undefined1  [16] FUN_1005b95a0(void)

{
  return ZEXT816(0x100ee5cd8);
}



/* Address: 0x1005b95b0 | FUN_1005b95b0 */

undefined1  [16] FUN_1005b95b0(void)

{
  return ZEXT816(0x100ee5d00);
}



/* Address: 0x1005b95c0 | FUN_1005b95c0 */

void FUN_1005b95c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_3,param_4);
  puVar1 = &DAT_100fd4078;
  FUN_1000f7830(&DAT_100fd4078,&DAT_100c645c8);
  Swift::Array<undefined>::_replaceSubrange
            (param_1,param_2,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),puVar1,
             param_4,param_5);
  return;
}



/* Address: 0x1005b965c | FUN_1005b965c */

long FUN_1005b965c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  char *pcVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar7 = *(long *)(lVar1 + 0x10);
  lVar8 = lVar7 + -1;
  if (lVar2 == lVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b974c);
    (*pcVar3)();
  }
  lVar4 = lVar2;
  FUN_1005b2a38(lVar2,lVar1);
  if (lVar4 < lVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9750);
    (*pcVar3)();
  }
  if (lVar2 == lVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9754);
    (*pcVar3)();
  }
  if ((lVar2 == 0) && (lVar8 != 0)) {
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9760);
      (*pcVar3)();
    }
    if (*(char *)(lVar1 + 0x20) == '/') {
      if (lVar7 == 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9768);
        (*pcVar3)();
      }
      lVar4 = 1;
      goto LAB_1005b9708;
    }
  }
  else {
    if (lVar7 <= lVar2 || lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9764);
      (*pcVar3)();
    }
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b975c);
      (*pcVar3)();
    }
  }
  lVar6 = lVar2 + 1;
  pcVar5 = (char *)(lVar2 + lVar1 + 0x20);
  do {
    lVar4 = lVar6;
    if (*pcVar5 == '/') break;
    lVar6 = lVar6 + 1;
    pcVar5 = pcVar5 + 1;
    lVar4 = lVar8;
  } while (lVar7 != lVar6);
LAB_1005b9708:
  if (lVar2 <= lVar4) {
    _swift_bridgeObjectRetain(lVar1);
    FUN_1005b0324(lVar2,lVar4);
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9758);
  (*pcVar3)();
}



/* Address: 0x1005b9768 | FUN_1005b9768 */

undefined1 FUN_1005b9768(void)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *(long *)(*unaff_x20 + 0x10);
  if (lVar3 == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b97ac);
    (*pcVar2)();
  }
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(*unaff_x20 + 0x20);
    FUN_1005afca4(0,1);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b97b0);
  (*pcVar2)();
}



/* Address: 0x1005b97b0 | FUN_1005b97b0 */

void FUN_1005b97b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 local_68 [8];
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = &DAT_100fd4120;
  local_50 = param_5;
  uStack_48 = param_2;
  local_40 = param_3;
  FUN_1000f7830(&DAT_100fd4120,&DAT_100c645e0);
  FUN_1005b9a7c(param_1,FUN_1005bc29c,auStack_60,param_4,&DAT_100ee5d00,param_5,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_68);
  return;
}



/* Address: 0x1005b9844 | FUN_1005b9844 */

void FUN_1005b9844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  _swift_bridgeObjectRetain(param_6);
  FUN_1005afd60(param_4,param_5,param_6);
  _swift_bridgeObjectRelease(param_6);
  local_70 = param_7;
  uStack_68 = param_4;
  local_60 = param_2;
  uStack_58 = param_3;
  FUN_1005b97b0(param_1,FUN_1005bc280,auStack_80,param_4,param_7);
  _swift_bridgeObjectRelease(param_4);
  return;
}



/* Address: 0x1005b98fc | FUN_1005b98fc */

void FUN_1005b98fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = param_4;
  uStack_28 = param_3;
  local_20 = param_1;
  uStack_18 = param_2;
  FUN_1005b97b0(FUN_1005bc280,auStack_40);
  return;
}



/* Address: 0x1005b992c | FUN_1005b992c */

void FUN_1005b992c(ulong param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  
  if (param_1 != param_2) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b99bc);
      (*pcVar3)();
    }
    uVar5 = *unaff_x20;
    if (*(ulong *)(uVar5 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b99c0);
      (*pcVar3)();
    }
    if (*(ulong *)(uVar5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b99c4);
      (*pcVar3)();
    }
    uVar1 = *(undefined1 *)(uVar5 + 0x20 + param_1);
    uVar2 = *(undefined1 *)(uVar5 + 0x20 + param_2);
    uVar4 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      FUN_1005bbc0c();
    }
    *(undefined1 *)(uVar5 + 0x20 + param_1) = uVar2;
    *unaff_x20 = uVar5;
    if (*(ulong *)(uVar5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b99d8);
      (*pcVar3)();
    }
    *(undefined1 *)(uVar5 + 0x20 + param_2) = uVar1;
    *unaff_x20 = uVar5;
  }
  return;
}



/* Address: 0x1005b99d8 | FUN_1005b99d8 */

ulong FUN_1005b99d8(code *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x21;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_3 + 0x10);
  uVar1 = uVar5 - 1;
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      if (uVar5 == uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b9a78);
        (*pcVar2)();
      }
      uVar3 = 0xffffffffffffffbf;
      (*param_1)();
      if (unaff_x21 != 0) {
        return uVar4;
      }
      if ((uVar3 & 1) != 0) {
        return uVar4;
      }
      if ((uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) == uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005b9a7c);
        (*pcVar2)();
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  return 0;
}



/* Address: 0x1005b9a7c | FUN_1005b9a7c */

void FUN_1005b9a7c(void)

{
  long in_x5;
  undefined8 in_x7;
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(in_x5 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  FUN_1005bb404();
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_x7,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),in_x5);
  }
  return;
}



/* Address: 0x1005b9ae8 | FUN_1005b9ae8 */

undefined * FUN_1005b9ae8(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *local_40;
  ulong uStack_38;
  
  ppuVar4 = &local_40;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1 >> 0x3c & 1) == 0) goto LAB_1005b9bac;
      sVar2 = _strlen((char *)((param_2 & 0xfffffffffffffff) + 0x20));
      puVar5 = (undefined *)(sVar2 + 1);
      if (SCARRY8(sVar2,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9be0);
        (*pcVar1)();
      }
      if (puVar5 == (undefined *)0x0) {
        return PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      puVar3 = puVar5;
      FUN_1005bba24(puVar5,0);
      ppuVar4 = (undefined **)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    else {
      uStack_38 = param_2 & 0xffffffffffffff;
      local_40 = param_1;
      sVar2 = _strlen((char *)&local_40);
      puVar5 = (undefined *)(sVar2 + 1);
      if (SCARRY8(sVar2,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9bdc);
        (*pcVar1)();
      }
      if (puVar5 == (undefined *)0x0) {
        return PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      puVar3 = puVar5;
      FUN_1005bba24(puVar5,0);
    }
    _memcpy(puVar3 + 0x20,ppuVar4,(size_t)puVar5);
    local_40 = puVar3;
  }
  else {
LAB_1005b9bac:
    Swift::_StringGuts::__slowWithCString((_StringGuts)0x1005baaec);
  }
  return local_40;
}



/* Address: 0x1005b9be0 | FUN_1005b9be0 */

void FUN_1005b9be0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  return;
}



/* Address: 0x1005b9bf0 | FUN_1005b9bf0 */

bool FUN_1005b9bf0(char *param_1,char *param_2)

{
  return *param_1 < *param_2;
}



/* Address: 0x1005b9c04 | FUN_1005b9c04 */

bool FUN_1005b9c04(char *param_1,char *param_2)

{
  return *param_1 <= *param_2;
}



/* Address: 0x1005b9c18 | FUN_1005b9c18 */

bool FUN_1005b9c18(char *param_1,char *param_2)

{
  return *param_2 <= *param_1;
}



/* Address: 0x1005b9c2c | FUN_1005b9c2c */

bool FUN_1005b9c2c(char *param_1,char *param_2)

{
  return *param_2 < *param_1;
}



/* Address: 0x1005b9c40 | FUN_1005b9c40 */

void FUN_1005b9c40(void)

{
  FUN_1005bc240();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}


