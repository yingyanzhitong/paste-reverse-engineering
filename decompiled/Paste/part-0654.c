/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006ee4e4 | FUN_1006ee4e4 */

undefined8 * FUN_1006ee4e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1006ee538 | FUN_1006ee538 */

undefined8 * FUN_1006ee538(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006ee5bc | FUN_1006ee5bc */

undefined8 * FUN_1006ee5bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1006ee610 | FUN_1006ee610 */

void FUN_1006ee610(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[5]);
  return;
}



/* Address: 0x1006ee648 | FUN_1006ee648 */

undefined8 * FUN_1006ee648(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  uVar1 = param_2[3];
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1006ee6b8 | FUN_1006ee6b8 */

undefined8 * FUN_1006ee6b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006ee754 | FUN_1006ee754 */

undefined8 * FUN_1006ee754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1006ee7b8 | FUN_1006ee7b8 */

undefined1  [16] FUN_1006ee7b8(void)

{
  return ZEXT816(0x100efa130);
}



/* Address: 0x1006ee7c8 | FUN_1006ee7c8 */

uint FUN_1006ee7c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006ee0ec(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x1006ee7e4 | FUN_1006ee7e4 */

undefined8 FUN_1006ee7e4(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1006f3198(param_2,param_1);
  return param_2;
}



/* Address: 0x1006ee820 | FUN_1006ee820 */

undefined8 FUN_1006ee820(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1006f3198(param_2,param_1);
  return param_2;
}



/* Address: 0x1006ee85c | FUN_1006ee85c */

undefined8 FUN_1006ee85c(undefined8 param_1)

{
  thunk_FUN_1006f315c();
  return param_1;
}



/* Address: 0x1006ee890 | FUN_1006ee890 */

void FUN_1006ee890(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde028 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72e38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72e38,&DAT_100efa4e0);
  DAT_100fde028 = pTVar1;
  return;
}



/* Address: 0x1006ee8d0 | FUN_1006ee8d0 */

void FUN_1006ee8d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde030 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72928;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72928,&DAT_100efa130);
  DAT_100fde030 = pTVar1;
  return;
}



/* Address: 0x1006ee910 | FUN_1006ee910 */

undefined8 FUN_1006ee910(undefined8 param_1)

{
  thunk_FUN_1006f315c();
  return param_1;
}



/* Address: 0x1006ee944 | FUN_1006ee944 */

void FUN_1006ee944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *param_2;
  uVar4 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  param_1[4] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  return;
}



/* Address: 0x1006ee988 | FUN_1006ee988 */

void FUN_1006ee988(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fde040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fde038;
  FUN_1000f8b08(&DAT_100fde038,&DAT_100c72a20);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fde040 = puVar2;
  return;
}



/* Address: 0x1006ee9d8 | FUN_1006ee9d8 */

undefined8 FUN_1006ee9d8(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1006eea14();
  return unaff_x20;
}



/* Address: 0x1006eea14 | FUN_1006eea14 */

void FUN_1006eea14(undefined8 param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_1006e8c6c(0,lVar2);
  FUN_1006f86ac();
  unaff_x20[2] = lVar1;
  FUN_1006e2080(0,lVar2);
  FUN_1006ecb44();
  FUN_10030e034();
  unaff_x20[3] = lVar2;
  unaff_x20[4] = param_2;
  return;
}



/* Address: 0x1006eea80 | FUN_1006eea80 */

void FUN_1006eea80(undefined8 param_1)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  TargetProtocolConformanceDescriptor *local_88;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  
  lVar3 = *unaff_x20;
  lVar4 = unaff_x20[4];
  if (((uint)lVar4 >> 1 & 1) == 0) {
    uVar6 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
  }
  else {
    lVar7 = unaff_x20[2];
    uVar6 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
    uVar1 = 0;
    local_70 = uVar5;
    FUN_1006e8c6c(0,uVar6);
    _swift_retain(lVar7);
    FUN_1006f87a8(FUN_1006eefac,auStack_80,lVar7,uVar1);
    _swift_release(lVar7);
  }
  lVar3 = unaff_x20[2];
  uVar1 = 0;
  FUN_1006eefa0(0,uVar6,uVar5);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c72c90;
  local_90 = uVar1;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72c90,uVar1);
  local_88 = pTVar2;
  _swift_retain(lVar3);
  FUN_1006e1c5c(auStack_80,auStack_a8);
  FUN_100004594(auStack_a8);
  FUN_1006f3474(param_1,uVar6,lVar3,lVar4,auStack_80,uVar6,uVar5);
  return;
}



/* Address: 0x1006eeb80 | FUN_1006eeb80 */

void FUN_1006eeb80(long *param_1)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_1;
  _swift_beginAccess(param_1 + 0xc,auStack_48,0x21,0);
  if (param_1[0xc] != 0) {
    FUN_1006e878c(*(undefined8 *)(lVar1 + 0x50));
  }
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1006eebe0 | FUN_1006eebe0 */

void FUN_1006eebe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_100 [16];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar5 = *unaff_x20;
  uVar3 = unaff_x20[4];
  uVar2 = param_3;
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_3);
  uVar1 = param_1;
  if ((uVar3 & 1) != 0) {
    FUN_1006f2a5c();
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_1);
    param_3 = uVar2;
    local_80 = uVar1;
    uStack_78 = param_2;
    local_70 = uVar2;
  }
  lVar4 = unaff_x20[2];
  local_b0 = *(undefined8 *)(lVar5 + 0x50);
  local_a0 = *(undefined8 *)(lVar5 + 0x58);
  local_90 = &local_80;
  uVar2 = 0;
  local_f0 = param_7;
  uStack_e8 = param_8;
  local_e0 = param_4;
  uStack_d8 = param_5;
  local_d0 = param_6;
  uStack_a8 = param_7;
  uStack_98 = param_8;
  FUN_1006e8c6c(0);
  _swift_retain(lVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(param_3);
  FUN_1006f8c1c(uVar1,FUN_1006eefc4,auStack_c0,FUN_1006eefd4,auStack_100,lVar4,uVar2);
  _swift_release(lVar4);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = local_80;
  _swift_retain();
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(local_70);
  return;
}



/* Address: 0x1006eed48 | FUN_1006eed48 */

void FUN_1006eed48(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  FUN_1006e8524();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = param_3;
  return;
}



/* Address: 0x1006eedac | FUN_1006eedac */

void FUN_1006eedac(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [40];
  
  lVar2 = *param_1;
  local_88 = param_6;
  uStack_80 = param_7;
  FUN_10000cbb0(auStack_a0);
  (**(code **)(*(long *)(param_6 + -8) + 0x10))();
  FUN_1006e1c5c(auStack_78,auStack_a0);
  FUN_100004594(auStack_a0);
  _swift_beginAccess(param_1 + 0xc,auStack_a0,0x21,0);
  if (param_1[0xc] != 0) {
    FUN_1006e8694(param_2,param_3,auStack_78,*(undefined8 *)(lVar2 + 0x50));
    _swift_endAccess(auStack_a0);
    FUN_100004594(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006eee7c);
  (*pcVar1)();
}



/* Address: 0x1006eee7c | FUN_1006eee7c */

void FUN_1006eee7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006eeea0 | FUN_1006eeea0 */

void FUN_1006eeea0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006eeecc | FUN_1006eeecc */

void FUN_1006eeecc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  FUN_1006eebe0();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006eeef4 | FUN_1006eeef4 */

void FUN_1006eeef4(void)

{
  FUN_1006eea80();
  return;
}



/* Address: 0x1006eef14 | FUN_1006eef14 */

/* WARNING: Removing unreachable block (ram,0x0001006eef58) */

void FUN_1006eef14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x22;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006eefe4(&local_68,param_2,param_3,*(undefined8 *)(param_4 + 0x10),
                *(undefined8 *)(param_4 + 0x18));
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
                    /* WARNING: Could not recover jumptable at 0x0001006eef9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006eefa0 | FUN_1006eefa0 */

void FUN_1006eefa0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006eefac | FUN_1006eefac */

void FUN_1006eefac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006eeb80(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006eefc4 | FUN_1006eefc4 */

void FUN_1006eefc4(void)

{
  long unaff_x20;
  
  FUN_1006eed48(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1006eefd4 | FUN_1006eefd4 */

void FUN_1006eefd4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006eedac(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006eefe4 | FUN_1006eefe4 */

void FUN_1006eefe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar5 = param_4;
  (**(code **)(param_4 + 0x40))(param_3);
  _swift_release();
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(lVar5);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x20));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ef0c8);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_4 + 0x18));
  *(undefined1 **)(param_4 + 0x18) = &DAT_e800000000000000;
  builtin_strncpy((char *)(param_4 + 0x10),"NotFound",8);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x20));
  if (iVar2 == 0) {
    _swift_release(param_4);
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar4 = puVar3;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar4,0,0);
    puVar4[1] = 0x6e756f4620746f4e;
    *puVar4 = 0x194;
    puVar4[2] = 0xe900000000000064;
    puVar4[3] = puVar3;
    puVar4[4] = 0;
    puVar4[5] = 0;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ef0cc);
  (*pcVar1)();
}



/* Address: 0x1006ef0cc | FUN_1006ef0cc */

void FUN_1006ef0cc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c730e0,param_1);
  return;
}



/* Address: 0x1006ef0dc | thunk_FUN_1006ef0e0 */

void thunk_FUN_1006ef0e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72aa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72aa0,&DAT_100efa290);
  DAT_100fde090 = pTVar1;
  return;
}



/* Address: 0x1006ef0e0 | FUN_1006ef0e0 */

void FUN_1006ef0e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72aa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72aa0,&DAT_100efa290);
  DAT_100fde090 = pTVar1;
  return;
}



/* Address: 0x1006ef120 | switchD_1006c4b30::caseD_4a */

void switchD_1006c4b30::caseD_4a(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde098 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72ad8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ad8,&DAT_100efa290);
  DAT_100fde098 = pTVar1;
  return;
}



/* Address: 0x1006ef124 | switchD_1006c4b30::caseD_4a */

void switchD_1006c4b30::caseD_4a(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde098 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72ad8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ad8,&DAT_100efa290);
  DAT_100fde098 = pTVar1;
  return;
}



/* Address: 0x1006ef164 | thunk_FUN_1006ef168 */

void thunk_FUN_1006ef168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde0a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72ba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ba0,&DAT_100efa290);
  DAT_100fde0a0 = pTVar1;
  return;
}



/* Address: 0x1006ef168 | FUN_1006ef168 */

void FUN_1006ef168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde0a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72ba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ba0,&DAT_100efa290);
  DAT_100fde0a0 = pTVar1;
  return;
}



/* Address: 0x1006ef1a8 | thunk_FUN_1006ef1ac */

void thunk_FUN_1006ef1ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72bc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72bc8,&DAT_100efa290);
  DAT_100fde0a8 = pTVar1;
  return;
}



/* Address: 0x1006ef1ac | FUN_1006ef1ac */

void FUN_1006ef1ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c72bc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72bc8,&DAT_100efa290);
  DAT_100fde0a8 = pTVar1;
  return;
}



/* Address: 0x1006ef1ec | FUN_1006ef1ec */

void FUN_1006ef1ec(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_18 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_20 = local_28;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x60);
  return;
}



/* Address: 0x1006ef240 | FUN_1006ef240 */

void FUN_1006ef240(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ef24c | FUN_1006ef24c */

undefined1  [16] FUN_1006ef24c(void)

{
  return ZEXT816(0x100efa290);
}



/* Address: 0x1006ef25c | FUN_1006ef25c */

void FUN_1006ef25c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_100076688(param_5,param_1 + 3);
  FUN_1006e2080(0,param_6);
  FUN_1006ecb44();
  FUN_100004594(param_5);
  FUN_10030e034();
  param_1[8] = param_6;
  return;
}



/* Address: 0x1006ef2d0 | FUN_1006ef2d0 */

void FUN_1006ef2d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1006e1f74();
                    /* WARNING: Could not recover jumptable at 0x0001006ef314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1006ef318 | FUN_1006ef318 */

void FUN_1006ef318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  code *pcVar6;
  undefined8 *unaff_x20;
  long lVar7;
  long alStack_100 [2];
  undefined1 auStack_f0 [8];
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88 [3];
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_88[0] = *unaff_x20;
  local_e0 = param_7;
  local_d0 = param_5;
  local_c8 = param_6;
  local_c0 = param_1;
  lStack_b8 = param_8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_2);
  FUN_1006a1c64();
  uVar4 = local_88[0];
  FUN_1006f1c2c(local_88[0]);
  lVar1 = unaff_x20[6];
  lVar2 = unaff_x20[7];
  puVar5 = unaff_x20 + 3;
  local_d8 = param_3;
  FUN_100004640(puVar5,lVar1);
  lVar7 = *(long *)(lVar1 + -8);
  local_e8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_90 = param_10;
  local_98 = param_9;
  FUN_10000cbb0(auStack_b0);
  (**(code **)(*(long *)(param_9 + -8) + 0x10))();
  FUN_1006e1c5c(local_88,auStack_b0);
  FUN_100004594(auStack_b0);
  puVar5 = local_88;
  FUN_100004640(puVar5,local_70);
  pcVar6 = *(code **)(lVar2 + 0x18);
  *(long *)((long)alStack_100 + lVar3) = lVar1;
  *(long *)((long)alStack_100 + lVar3 + 8) = lVar2;
  (*pcVar6)(auStack_f0 + lVar3,uVar4,local_d8,param_4,local_d0,local_c8,puVar5,local_70,uStack_68);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(uVar4);
  (**(code **)(lVar7 + 8))(auStack_f0 + lVar3,lVar1);
  FUN_100004594(local_88);
  (**(code **)(*(long *)(lStack_b8 + -8) + 0x10))(local_c0);
  return;
}



/* Address: 0x1006ef49c | FUN_1006ef49c */

void FUN_1006ef49c(void)

{
  undefined8 in_x7;
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = in_x7;
  FUN_1006ef318();
  return;
}



/* Address: 0x1006ef4b0 | thunk_FUN_1006ef2d0 */

void thunk_FUN_1006ef2d0(void)

{
  FUN_1006ef2d0();
  return;
}



/* Address: 0x1006ef4b4 | FUN_1006ef4b4 */

void FUN_1006ef4b4(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  FUN_100004594(param_1 + 3);
  _swift_release(param_1[8]);
  return;
}



/* Address: 0x1006ef4ec | FUN_1006ef4ec */

undefined8 * FUN_1006ef4ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  lVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar3;
  pcVar2 = (code *)**(undefined8 **)(lVar3 + -8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar2)(param_1 + 3,param_2 + 3,lVar3);
  param_1[8] = param_2[8];
  _swift_retain();
  return param_1;
}



/* Address: 0x1006ef56c | FUN_1006ef56c */

undefined8 * FUN_1006ef56c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_10008820c(param_1 + 3,param_2 + 3);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1006ef5f4 | FUN_1006ef5f4 */

void FUN_1006ef5f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1006ef618 | FUN_1006ef618 */

undefined8 * FUN_1006ef618(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100004594(param_1 + 3);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1006ef684 | FUN_1006ef684 */

void FUN_1006ef684(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ef690 | FUN_1006ef690 */

void FUN_1006ef690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined4 param_10,undefined4 param_11,long param_12)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  long lVar5;
  long extraout_x8;
  undefined8 extraout_x12;
  long lVar6;
  code *pcVar7;
  long alStack_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_9 + -8);
  lVar5 = param_9;
  local_90 = param_4;
  local_88 = param_5;
  local_80 = param_6;
  local_78 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1006effc8(extraout_x12,param_8,lVar5);
  pcVar7 = *(code **)(param_12 + 0x18);
  uVar2 = 0xff;
  uStack_68 = param_8;
  _swift_getAssociatedTypeWitness
            (0xff,param_12,param_9,0x100cbc5a4,&TargetProtocolRequirement_100cbc5b4);
  uVar3 = 0;
  FUN_1006fc544(0,uVar2);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c73690;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73690,uVar3);
  *(long *)((long)alStack_a0 + lVar1) = param_9;
  *(long *)((long)alStack_a0 + lVar1 + 8) = param_12;
  (*pcVar7)((long)&local_90 + lVar1,param_2,param_3,local_90,local_88,local_80,local_70,uVar3,pTVar4
           );
  (**(code **)(lVar6 + 8))((long)&local_90 + lVar1,param_9);
  _swift_release(param_8);
  (**(code **)(lVar6 + 0x10))(local_78);
  return;
}



/* Address: 0x1006ef7d4 | FUN_1006ef7d4 */

void FUN_1006ef7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  long local_60;
  undefined8 uStack_58;
  
  local_60 = param_5;
  uStack_58 = param_6;
  FUN_10000cbb0(auStack_78);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  uVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,0x100cbc5a4,&TargetProtocolRequirement_100cbc5b4);
  _swift_getAssociatedConformanceWitness
            (param_6,param_5,uVar1,0x100cbc5a4,&TargetProtocolRequirement_100cbc5ac);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_1006ef25c(param_1,param_2,param_3,param_4,auStack_78,uVar1,param_6);
  return;
}



/* Address: 0x1006ef8b8 | FUN_1006ef8b8 */

void FUN_1006ef8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x12;
  long extraout_x13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  TargetProtocolConformanceDescriptor *local_68;
  
  lVar4 = param_6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_6 + -8) + 0x40));
  (**(code **)(extraout_x13 + 0x10))
            (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),extraout_x12,lVar4);
  uVar1 = 0;
  local_88 = param_7;
  lStack_80 = param_6;
  local_78 = param_9;
  local_70 = param_8;
  FUN_1006f42b4(0,&local_88);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c731c4;
  local_70 = uVar1;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c731c4,uVar1);
  puVar3 = &local_88;
  local_68 = pTVar2;
  FUN_10000cbb0(puVar3);
  FUN_1006f42cc(puVar3,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7,param_6,
                param_9,param_8);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_1006ef25c(param_1,param_2,param_3,param_4,&local_88,param_7,param_9);
  return;
}



/* Address: 0x1006ef9dc | FUN_1006ef9dc */

void FUN_1006ef9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9
                  )

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  undefined8 extraout_x12;
  long extraout_x13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long lStack_80;
  long local_78;
  undefined8 local_70;
  TargetProtocolConformanceDescriptor *local_68;
  
  lVar4 = param_6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_6 + -8) + 0x40));
  (**(code **)(extraout_x13 + 0x10))
            (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),extraout_x12,lVar4);
  uVar1 = 0;
  local_88 = param_7;
  lStack_80 = param_6;
  local_78 = param_9;
  local_70 = param_8;
  FUN_1006f3e4c(0,&local_88);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c731a8;
  local_70 = uVar1;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c731a8,uVar1);
  puVar3 = &local_88;
  local_68 = pTVar2;
  FUN_10000cbb0(puVar3);
  thunk_FUN_1006f42cc(puVar3,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_7,param_6
                      ,param_9,param_8);
  uVar1 = *(undefined8 *)(param_9 + 8);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_1006ef25c(param_1,param_2,param_3,param_4,&local_88,param_7,uVar1);
  return;
}



/* Address: 0x1006efb04 | FUN_1006efb04 */

void FUN_1006efb04(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar1 = auStack_68;
  local_50 = param_5;
  uStack_48 = param_7;
  FUN_10000cbb0(puVar1);
  (*param_2)(puVar1);
  (**(code **)(param_6 + 0x20))(param_1,auStack_68,param_4,param_6);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1006efb84 | FUN_1006efb84 */

void FUN_1006efb84(void)

{
  FUN_1006ef690();
  return;
}



/* Address: 0x1006efbcc | FUN_1006efbcc */

void FUN_1006efbcc(void)

{
  FUN_1006ef690();
  return;
}


