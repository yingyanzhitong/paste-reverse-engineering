/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008d4bd0 | thunk_FUN_1008d4254 */

void thunk_FUN_1008d4254(void)

{
  FUN_1008d4254();
  return;
}



/* Address: 0x1008d4bd4 | thunk_FUN_1008c1434 */

void thunk_FUN_1008c1434(void)

{
  thunk_FUN_1008c1434();
  return;
}



/* Address: 0x1008d4bd8 | thunk_FUN_1008d4254 */

void thunk_FUN_1008d4254(void)

{
  FUN_1008d4254();
  return;
}



/* Address: 0x1008d4bdc | thunk_FUN_1008d4254 */

void thunk_FUN_1008d4254(void)

{
  FUN_1008d4254();
  return;
}



/* Address: 0x1008d4be0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008d4be4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008d4be8 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x1008d4bec | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008d4bf0 | thunk_FUN_1008d4254 */

void thunk_FUN_1008d4254(void)

{
  FUN_1008d4254();
  return;
}



/* Address: 0x1008d4bf4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008d4bf8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008d4bfc | FUN_1008d4bfc */

undefined8 FUN_1008d4bfc(void)

{
  return 10000000000;
}



/* Address: 0x1008d4c0c | FUN_1008d4c0c */

void FUN_1008d4c0c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb9c8;
  FUN_1000f7830(&DAT_100feb9c8,&DAT_100c83090);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x1008d4c40 | FUN_1008d4c40 */

void FUN_1008d4c40(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb9d8;
  FUN_1000f7830(&DAT_100feb9d8,&DAT_100c830a0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x1008d4c74 | FUN_1008d4c74 */

void FUN_1008d4c74(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_1008d4cb8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008d4cb8 | FUN_1008d4cb8 */

undefined * FUN_1008d4cb8(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100feb9d0;
  FUN_1000f7830(&DAT_100feb9d0,&DAT_100c84600);
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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d4d48);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008d4d4c | FUN_1008d4d4c */

void FUN_1008d4d4c(void)

{
  FUN_10090dc04(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1008d4d58 | FUN_1008d4d58 */

void FUN_1008d4d58(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Address: 0x1008d4d68 | FUN_1008d4d68 */

void FUN_1008d4d68(void)

{
  Swift::Dictionary::init();
  return;
}



/* Address: 0x1008d4d80 | FUN_1008d4d80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008d4d80(void)

{
  return ZEXT816(0x100feba20);
}



/* Address: 0x1008d4da0 | FUN_1008d4da0 */

void FUN_1008d4da0(void)

{
  return;
}



/* Address: 0x1008d4da4 | FUN_1008d4da4 */

void FUN_1008d4da4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1008d4db0 | FUN_1008d4db0 */

void FUN_1008d4db0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feba78,&DAT_100f0ead8);
  return;
}



/* Address: 0x1008d4dc4 | FUN_1008d4dc4 */

void FUN_1008d4dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  return;
}



/* Address: 0x1008d4df0 | FUN_1008d4df0 */

void FUN_1008d4df0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feba80,&DAT_100f0eb68);
  return;
}



/* Address: 0x1008d4e04 | FUN_1008d4e04 */

void FUN_1008d4e04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008d4e18 | FUN_1008d4e18 */

int FUN_1008d4e18(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[3] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1008d4e38 | FUN_1008d4e38 */

void FUN_1008d4e38(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0xc) = uVar1;
  return;
}



/* Address: 0x1008d4e64 | FUN_1008d4e64 */

void FUN_1008d4e64(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feba88,&DAT_100f0ec28);
  return;
}



/* Address: 0x1008d4e78 | FUN_1008d4e78 */

void FUN_1008d4e78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}



/* Address: 0x1008d4e9c | FUN_1008d4e9c */

void FUN_1008d4e9c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feba90,&DAT_100f0ecb8);
  return;
}



/* Address: 0x1008d4eb0 | FUN_1008d4eb0 */

void FUN_1008d4eb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008d4ebc | FUN_1008d4ebc */

void FUN_1008d4ebc(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feba98,&DAT_100f0ed48);
  return;
}



/* Address: 0x1008d4ed0 | FUN_1008d4ed0 */

void FUN_1008d4ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008d4eec | FUN_1008d4eec */

void FUN_1008d4eec(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100febaa0,&DAT_100f0edc8);
  return;
}



/* Address: 0x1008d4f00 | FUN_1008d4f00 */

void FUN_1008d4f00(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100febaa8,&DAT_100f0ee48);
  return;
}



/* Address: 0x1008d4f14 | FUN_1008d4f14 */

void FUN_1008d4f14(void *param_1,void *param_2)

{
  _memcpy(param_1,param_2,0x2000);
  return;
}



/* Address: 0x1008d4f1c | FUN_1008d4f1c */

void FUN_1008d4f1c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100febab0,&DAT_100f0eec8);
  return;
}



/* Address: 0x1008d4f30 | FUN_1008d4f30 */

void FUN_1008d4f30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008d4f44 | FUN_1008d4f44 */

void FUN_1008d4f44(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100febab8,&DAT_100f0ef48);
  return;
}



/* Address: 0x1008d4f58 | FUN_1008d4f58 */

void FUN_1008d4f58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008d4f6c | FUN_1008d4f6c */

void FUN_1008d4f6c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100febac0,&DAT_100f0efd0);
  return;
}



/* Address: 0x1008d4f80 | FUN_1008d4f80 */

void FUN_1008d4f80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008d4f94 | FUN_1008d4f94 */

void FUN_1008d4f94(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100febac8,&DAT_100f0f068);
  return;
}



/* Address: 0x1008d4fa8 | thunk_FUN_1008d4c0c */

void thunk_FUN_1008d4c0c(void)

{
  FUN_1008d4c0c();
  return;
}



/* Address: 0x1008d4fac | FUN_1008d4fac */

void FUN_1008d4fac(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_1008d4c74();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008d4ff0 | thunk_FUN_1008d4e18 */

void thunk_FUN_1008d4e18(void)

{
  FUN_1008d4e18();
  return;
}



/* Address: 0x1008d4ff4 | FUN_1008d4ff4 */

undefined * FUN_1008d4ff4(void)

{
  return &DAT_100c83170;
}



/* Address: 0x1008d5000 | FUN_1008d5000 */

void FUN_1008d5000(void)

{
  if (DAT_100feeba0 != -1) {
    _swift_once(&DAT_100feeba0,FUN_10095d354);
  }
  DAT_101058178 = DAT_101058224;
  return;
}



/* Address: 0x1008d5024 | FUN_1008d5024 */

void FUN_1008d5024(void)

{
  _swift_once(&DAT_100feeba0,FUN_10095d354);
  DAT_101058178 = DAT_101058224;
  return;
}



/* Address: 0x1008d5048 | FUN_1008d5048 */

undefined8 FUN_1008d5048(void)

{
  return 0x100000000;
}



/* Address: 0x1008d5050 | FUN_1008d5050 */

undefined1 FUN_1008d5050(undefined1 param_1)

{
  return param_1;
}



/* Address: 0x1008d5058 | thunk_FUN_1008d505c */

void thunk_FUN_1008d505c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febad0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83174;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83174,&DAT_100f0f1d8);
  DAT_100febad0 = pTVar1;
  return;
}



/* Address: 0x1008d505c | FUN_1008d505c */

void FUN_1008d505c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febad0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83174;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83174,&DAT_100f0f1d8);
  DAT_100febad0 = pTVar1;
  return;
}



/* Address: 0x1008d509c | thunk_FUN_1008d50a0 */

void thunk_FUN_1008d50a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febad8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83224;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83224,&DAT_100f0f1f8);
  DAT_100febad8 = pTVar1;
  return;
}



/* Address: 0x1008d50a0 | FUN_1008d50a0 */

void FUN_1008d50a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febad8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83224;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83224,&DAT_100f0f1f8);
  DAT_100febad8 = pTVar1;
  return;
}



/* Address: 0x1008d50e0 | thunk_FUN_1008d50e4 */

void thunk_FUN_1008d50e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83304;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83304,&DAT_100f0f220);
  DAT_100febae0 = pTVar1;
  return;
}



/* Address: 0x1008d50e4 | FUN_1008d50e4 */

void FUN_1008d50e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febae0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83304;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83304,&DAT_100f0f220);
  DAT_100febae0 = pTVar1;
  return;
}



/* Address: 0x1008d5124 | FUN_1008d5124 */

void FUN_1008d5124(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1008d5130 | FUN_1008d5130 */

undefined1  [16] FUN_1008d5130(void)

{
  return ZEXT816(0x100f0f1d8);
}



/* Address: 0x1008d5140 | FUN_1008d5140 */

undefined1  [16] FUN_1008d5140(void)

{
  return ZEXT816(0x100f0f1f8);
}



/* Address: 0x1008d5150 | FUN_1008d5150 */

undefined1  [16] FUN_1008d5150(void)

{
  return ZEXT816(0x100f0f220);
}



/* Address: 0x1008d5160 | FUN_1008d5160 */

undefined1  [16] FUN_1008d5160(void)

{
  return ZEXT816(0x100f0f248);
}



/* Address: 0x1008d5170 | FUN_1008d5170 */

void FUN_1008d5170(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  __uint16 _Var5;
  __uint16 _Var6;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 *unaff_x21;
  undefined8 *local_d8;
  undefined8 local_d0;
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  ulong uVar7;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  FUN_10095d5f0(param_1,param_2,&local_d0);
  if (unaff_x21 == (undefined8 *)0x0) {
    uVar2 = local_d0._4_2_;
    _Var5 = Darwin::get_S_IFSOCK();
    _Var6 = Darwin::get_S_IFSOCK();
    uVar7 = (ulong)_Var6;
    if ((_Var5 & uVar2) == _Var6) {
      FUN_10095d6d0(param_1,param_2);
      goto LAB_1008d52cc;
    }
    FUN_1008d5340();
    unaff_x21 = (undefined8 *)&DAT_100f0f248;
    _swift_allocError(&DAT_100f0f248,uVar7,0,0);
    _swift_willThrow();
  }
  local_d8 = unaff_x21;
  _swift_errorRetain(unaff_x21);
  puVar8 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  puVar9 = &local_d0;
  _swift_dynamicCast(puVar9,&local_d8,puVar8,&DAT_100ef11e8,0);
  if ((int)puVar9 != 0) {
    _swift_errorRelease();
    uVar3 = uStack_c8;
    uVar1 = local_d0;
    iVar4 = (int)local_c0;
    if ((int)local_c0 == 2) {
      _swift_bridgeObjectRelease(uStack_c8);
      _swift_errorRelease(local_d8);
      goto LAB_1008d52cc;
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,unaff_x21,0,0);
    *unaff_x21 = uVar1;
    unaff_x21[1] = uVar3;
    *(int *)(unaff_x21 + 2) = iVar4;
    _swift_willThrow();
  }
  _swift_errorRelease(local_d8);
LAB_1008d52cc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


