/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100603aa4 | FUN_100603aa4 */

void FUN_100603aa4(void)

{
  long unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_100603d64(0,&local_70);
  FUN_1005fdc30();
  return;
}



/* Address: 0x100603b04 | FUN_100603b04 */

void FUN_100603b04(undefined8 param_1)

{
  FUN_100603b20(param_1,FUN_1005fe1d0);
  return;
}



/* Address: 0x100603b20 | FUN_100603b20 */

void FUN_100603b20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005fe0d4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),param_2);
  return;
}



/* Address: 0x100603b54 | FUN_100603b54 */

void FUN_100603b54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar9 = (long *)0x210;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1005c804c;
  FUN_1005ffacc(plVar9,param_1,uVar8,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4);
  return;
}



/* Address: 0x100603c0c | FUN_100603c0c */

void FUN_100603c0c(void)

{
  long unaff_x20;
  
  FUN_10060255c(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100603c20 | FUN_100603c20 */

void FUN_100603c20(byte *param_1)

{
  byte bVar1;
  long unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  bVar1 = 0;
  FUN_100603d64(0,&local_70);
  FUN_1005fd5d4();
  *param_1 = bVar1 & 1;
  return;
}



/* Address: 0x100603c8c | FUN_100603c8c */

void FUN_100603c8c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb7798);
  return;
}



/* Address: 0x100603c98 | FUN_100603c98 */

void FUN_100603c98(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005ff19c(param_1,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100603cc8 | FUN_100603cc8 */

void FUN_100603cc8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb7744);
  return;
}



/* Address: 0x100603cd4 | FUN_100603cd4 */

void FUN_100603cd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  local_60 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x18);
  local_90 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x40);
  local_70 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = 0;
  FUN_100603d64(0,&local_90);
  FUN_1005fe4e4(param_1,uVar4,uVar2,uVar3,uVar1);
  return;
}



/* Address: 0x100603d64 | FUN_100603d64 */

void FUN_100603d64(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb75f4);
  return;
}



/* Address: 0x100603d70 | FUN_100603d70 */

void FUN_100603d70(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005fd548(param_1,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100603da4 | FUN_100603da4 */

void FUN_100603da4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb7648);
  return;
}



/* Address: 0x100603db0 | FUN_100603db0 */

undefined8
FUN_100603db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  thunk_FUN_100683d64();
  uVar2 = 0;
  FUN_1006883a0(0,param_2);
  FUN_10067c1f0(param_1,uVar2,param_3,param_4);
  return uVar1;
}



/* Address: 0x100603e1c | FUN_100603e1c */

void FUN_100603e1c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb7840);
  return;
}



/* Address: 0x100603e28 | FUN_100603e28 */

void FUN_100603e28(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67068,param_1);
  return;
}



/* Address: 0x100603e38 | FUN_100603e38 */

void FUN_100603e38(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c670b0,param_1);
  return;
}



/* Address: 0x100603e48 | FUN_100603e48 */

void FUN_100603e48(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67118,param_1);
  return;
}



/* Address: 0x100603e58 | FUN_100603e58 */

void FUN_100603e58(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67180,param_1);
  return;
}



/* Address: 0x100603e68 | FUN_100603e68 */

void FUN_100603e68(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb724c);
  return;
}



/* Address: 0x100603e74 | FUN_100603e74 */

void FUN_100603e74(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb72a0);
  return;
}



/* Address: 0x100603e80 | FUN_100603e80 */

void FUN_100603e80(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cb72f4);
  return;
}



/* Address: 0x100603e8c | FUN_100603e8c */

void FUN_100603e8c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb7368);
  return;
}



/* Address: 0x100603e98 | thunk_FUN_100603e9c */

void thunk_FUN_100603e9c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x88);
  return;
}



/* Address: 0x100603e9c | FUN_100603e9c */

void FUN_100603e9c(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x88);
  return;
}



/* Address: 0x100603ee0 | FUN_100603ee0 */

void FUN_100603ee0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100cb73bc);
  return;
}



/* Address: 0x100603eec | FUN_100603eec */

void FUN_100603eec(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb7430);
  return;
}



/* Address: 0x100603ef8 | FUN_100603ef8 */

void FUN_100603ef8(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_18 = &DAT_100c672f8;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x88);
  return;
}



/* Address: 0x100603f44 | FUN_100603f44 */

void FUN_100603f44(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb74f8);
  return;
}



/* Address: 0x100603f50 | FUN_100603f50 */

void FUN_100603f50(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb754c);
  return;
}



/* Address: 0x100603f5c | FUN_100603f5c */

void FUN_100603f5c(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x100603f64 | FUN_100603f64 */

void FUN_100603f64(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long *plVar3;
  ulong uVar4;
  long local_60;
  long lStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  plVar3 = &local_60;
  local_30 = *(undefined8 *)(param_1 + 0x40);
  lStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  puStack_50 = *(undefined **)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = 0x13f;
  FUN_100603da4();
  if (plVar3 < (undefined1 *)0x40) {
    uVar4 = *(ulong *)(param_1 + 0x28);
    local_60 = *(long *)(lVar2 + -8) + 0x40;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar4 < 0x40) {
      lStack_58 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
      puStack_50 = &DAT_100c67360;
      _swift_initStructMetadata(param_1,0,3,&local_60,param_1 + 0x48);
    }
  }
  return;
}



/* Address: 0x100604010 | FUN_100604010 */

byte * FUN_100604010(byte *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  void *pvVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  code *pcVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  size_t sVar19;
  size_t sVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  void *pvVar24;
  void *pvVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  
  lVar23 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar28 = *(long *)(lVar16 + 0x40);
  uVar8 = (lVar28 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar8 <= lVar28 + 1U) {
    uVar8 = lVar28 + 1;
  }
  lVar22 = *(long *)(lVar23 + -8);
  uVar17 = (ulong)*(uint *)(lVar22 + 0x50) & 0xff;
  sVar19 = *(size_t *)(lVar22 + 0x40);
  if (*(int *)(lVar22 + 0x54) == 0) {
    sVar19 = sVar19 + 1;
  }
  uVar4 = (uVar17 + 9 & (uVar17 ^ 0xffffffffffffffff)) + sVar19;
  if (uVar4 <= uVar8) {
    uVar4 = uVar8;
  }
  lVar21 = *(long *)(param_3 + 0x28);
  lVar26 = *(long *)(lVar21 + -8);
  uVar13 = (ulong)*(uint *)(lVar26 + 0x50) & 0xff;
  uVar8 = uVar4 + 1 + uVar13;
  sVar20 = *(size_t *)(lVar26 + 0x40);
  if (*(int *)(lVar26 + 0x54) == 0) {
    sVar20 = sVar20 + 1;
  }
  lVar1 = sVar20 + 7;
  uVar18 = (uint)uVar13 | *(uint *)(lVar16 + 0x50) & 0xf8 | (uint)uVar17;
  if ((7 < uVar18 ||
      ((*(uint *)(lVar26 + 0x50) | *(uint *)(lVar22 + 0x50) | *(uint *)(lVar16 + 0x50)) & 0x100000)
      != 0) || 0x18 < (lVar1 + (uVar8 & (uVar13 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10)
  {
    uVar8 = (ulong)(uVar18 | 7);
    lVar16 = *(long *)param_2;
    *(long *)param_1 = lVar16;
    param_1 = (byte *)(lVar16 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    goto LAB_1006043f0;
  }
  bVar6 = *(byte *)((long)param_2 + uVar4);
  uVar18 = (uint)bVar6;
  if (4 < bVar6) {
    uVar27 = (uint)uVar4;
    uVar5 = 4;
    if (uVar27 < 4) {
      uVar5 = uVar27;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1006041a0;
      uVar18 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar18 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar18 = (uint)(uint3)*param_2;
    }
    else {
      uVar18 = *param_2;
    }
    if (uVar27 < 4) {
      uVar18 = (uVar18 | bVar6 - 5 << (ulong)((uVar27 & 3) << 3)) + 5;
    }
    else {
      uVar18 = uVar18 + 5;
    }
  }
LAB_1006041a0:
  if ((int)uVar18 < 2) {
    if (uVar18 == 0) {
      (**(code **)(lVar16 + 0x10))(param_1);
      param_1[lVar28] = *(byte *)(lVar28 + (long)param_2);
      param_1[uVar4] = 0;
    }
    else if (uVar18 == 1) {
      (**(code **)(lVar16 + 0x10))(param_1);
      puVar9 = (undefined8 *)((ulong)(param_1 + lVar28 + 7) & 0xfffffffffffffff8);
      puVar14 = (undefined8 *)((ulong)((long)param_2 + lVar28 + 7) & 0xfffffffffffffff8);
      *puVar9 = *puVar14;
      puVar9[1] = puVar14[1];
      *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(puVar14 + 2);
      *(undefined1 *)((long)puVar9 + 0x11) = *(undefined1 *)((long)puVar14 + 0x11);
      param_1[uVar4] = 1;
      _swift_retain();
    }
    else {
LAB_100604304:
      _memcpy(param_1,param_2,uVar4 + 1);
    }
  }
  else if (uVar18 == 2) {
    uVar10 = ~uVar17;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    param_1[8] = (byte)param_2[2];
    pbVar2 = param_1 + uVar17 + 9;
    pbVar3 = (byte *)((long)param_2 + uVar17 + 9);
    pcVar11 = *(code **)(lVar22 + 0x30);
    _swift_retain();
    uVar17 = (ulong)pbVar3 & uVar10;
    (*pcVar11)(uVar17,1,lVar23);
    if ((int)uVar17 == 0) {
      (**(code **)(lVar22 + 0x10))((ulong)pbVar2 & uVar10,(ulong)pbVar3 & uVar10,lVar23);
      (**(code **)(lVar22 + 0x38))((ulong)pbVar2 & uVar10,0,1,lVar23);
    }
    else {
      _memcpy((void *)((ulong)pbVar2 & uVar10),(void *)((ulong)pbVar3 & uVar10),sVar19);
    }
    param_1[uVar4] = 2;
  }
  else if (uVar18 == 3) {
    *param_1 = (byte)*param_2;
    param_1[uVar4] = 3;
  }
  else {
    if (uVar18 != 4) goto LAB_100604304;
    *param_1 = (byte)*param_2;
    param_1[uVar4] = 4;
  }
  pvVar24 = (void *)((ulong)(param_1 + uVar8) & ~uVar13);
  pvVar25 = (void *)((ulong)(uVar8 + (long)param_2) & ~uVar13);
  pvVar7 = pvVar25;
  (**(code **)(lVar26 + 0x30))(pvVar25,1,lVar21);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar26 + 0x10))(pvVar24,pvVar25,lVar21);
    (**(code **)(lVar26 + 0x38))(pvVar24,0,1,lVar21);
  }
  else {
    _memcpy(pvVar24,pvVar25,sVar20);
  }
  puVar12 = (ulong *)(lVar1 + (long)pvVar24 & 0xfffffffffffffff8);
  puVar15 = (ulong *)(lVar1 + (long)pvVar25 & 0xfffffffffffffff8);
  if (*puVar15 < 0xffffffff) {
    uVar8 = *puVar15;
    puVar12[1] = puVar15[1];
    *puVar12 = uVar8;
    return param_1;
  }
  uVar8 = puVar15[1];
  *puVar12 = *puVar15;
  puVar12[1] = uVar8;
LAB_1006043f0:
  _swift_retain();
  return param_1;
}



/* Address: 0x100604424 | FUN_100604424 */

void FUN_100604424(uint *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar7 = *(long *)(param_2 + 0x20);
  lVar13 = *(long *)(param_2 + 0x18);
  lVar8 = *(long *)(lVar7 + -8);
  lVar15 = *(long *)(lVar8 + 0x40);
  uVar5 = (lVar15 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar5 <= lVar15 + 1U) {
    uVar5 = lVar15 + 1;
  }
  lVar16 = *(long *)(lVar13 + -8);
  uVar17 = (ulong)*(byte *)(lVar16 + 0x50);
  lVar12 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar2 = lVar12 + (uVar17 + 9 & (uVar17 ^ 0xffffffffffffffff));
  if (uVar2 <= uVar5) {
    uVar2 = uVar5;
  }
  bVar4 = *(byte *)((long)param_1 + uVar2);
  uVar11 = (uint)bVar4;
  if (bVar4 < 5) {
LAB_10060450c:
    if (uVar11 == 2) goto LAB_100604574;
LAB_100604514:
    if (uVar11 == 1) {
      (**(code **)(lVar8 + 8))(param_1);
      _swift_release(*(undefined8 *)((ulong)((long)param_1 + lVar15 + 7) & 0xfffffffffffffff8));
      goto LAB_1006045b0;
    }
    if (uVar11 != 0) goto LAB_1006045b0;
    pcVar9 = *(code **)(lVar8 + 8);
    puVar6 = param_1;
  }
  else {
    uVar14 = (uint)uVar2;
    uVar3 = 4;
    if (uVar14 < 4) {
      uVar3 = uVar14;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_10060450c;
      uVar11 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar11 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar11 = (uint)(uint3)*param_1;
    }
    else {
      uVar11 = *param_1;
    }
    if (3 < uVar14) {
      uVar11 = uVar11 + 5;
      goto LAB_10060450c;
    }
    uVar11 = (uVar11 | bVar4 - 5 << (ulong)((uVar14 & 3) << 3)) + 5;
    if (uVar11 != 2) goto LAB_100604514;
LAB_100604574:
    _swift_release(*(undefined8 *)param_1);
    pbVar1 = (byte *)((long)param_1 + uVar17 + 9);
    uVar5 = (ulong)pbVar1 & ~uVar17;
    (**(code **)(lVar16 + 0x30))(uVar5,1,lVar13);
    if ((int)uVar5 != 0) goto LAB_1006045b0;
    pcVar9 = *(code **)(lVar16 + 8);
    puVar6 = (uint *)((ulong)pbVar1 & ~uVar17);
    lVar7 = lVar13;
  }
  (*pcVar9)(puVar6,lVar7);
LAB_1006045b0:
  lVar7 = *(long *)(param_2 + 0x28);
  lVar8 = *(long *)(lVar7 + -8);
  uVar17 = (ulong)((long)param_1 + *(byte *)(lVar8 + 0x50) + uVar2 + 1) &
           ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = uVar17;
  (**(code **)(lVar8 + 0x30))(uVar17,1,lVar7);
  if ((int)uVar5 == 0) {
    (**(code **)(lVar8 + 8))(uVar17,lVar7);
  }
  lVar7 = uVar17 + *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  puVar10 = (ulong *)(lVar7 + 7U & 0xfffffffffffffff8);
  if (*puVar10 < 0xffffffff) {
    return;
  }
  _swift_release(puVar10[1]);
  return;
}



/* Address: 0x100604654 | FUN_100604654 */

byte * FUN_100604654(byte *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t sVar4;
  uint uVar5;
  void *pvVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  uint uVar15;
  size_t sVar16;
  void *pvVar17;
  void *pvVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  
  lVar20 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar22 = *(long *)(lVar8 + 0x40);
  uVar10 = (lVar22 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar10 <= lVar22 + 1U) {
    uVar10 = lVar22 + 1;
  }
  lVar24 = *(long *)(lVar20 + -8);
  uVar12 = (ulong)*(byte *)(lVar24 + 0x50);
  sVar16 = *(size_t *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    sVar16 = sVar16 + 1;
  }
  uVar3 = (uVar12 + 9 & (uVar12 ^ 0xffffffffffffffff)) + sVar16;
  if (uVar3 <= uVar10) {
    uVar3 = uVar10;
  }
  bVar7 = *(byte *)((long)param_2 + uVar3);
  uVar15 = (uint)bVar7;
  if (bVar7 < 5) {
LAB_100604748:
    if ((int)uVar15 < 2) goto LAB_100604808;
LAB_100604750:
    if (uVar15 == 2) {
      uVar23 = ~uVar12;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[8] = (byte)param_2[2];
      pbVar1 = param_1 + uVar12 + 9;
      pbVar2 = (byte *)((long)param_2 + uVar12 + 9);
      pcVar25 = *(code **)(lVar24 + 0x30);
      _swift_retain();
      uVar10 = (ulong)pbVar2 & uVar23;
      (*pcVar25)(uVar10,1,lVar20);
      if ((int)uVar10 == 0) {
        (**(code **)(lVar24 + 0x10))((ulong)pbVar1 & uVar23,(ulong)pbVar2 & uVar23,lVar20);
        (**(code **)(lVar24 + 0x38))((ulong)pbVar1 & uVar23,0,1,lVar20);
      }
      else {
        _memcpy((void *)((ulong)pbVar1 & uVar23),(void *)((ulong)pbVar2 & uVar23),sVar16);
      }
      bVar7 = 2;
LAB_1006048dc:
      param_1[uVar3] = bVar7;
      goto LAB_1006048e0;
    }
    if (uVar15 == 3) {
      *param_1 = (byte)*param_2;
      bVar7 = 3;
      goto LAB_1006048dc;
    }
    if (uVar15 == 4) {
      *param_1 = (byte)*param_2;
      bVar7 = 4;
      goto LAB_1006048dc;
    }
  }
  else {
    uVar21 = (uint)uVar3;
    uVar5 = 4;
    if (uVar21 < 4) {
      uVar5 = uVar21;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100604748;
      uVar15 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar15 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar15 = (uint)(uint3)*param_2;
    }
    else {
      uVar15 = *param_2;
    }
    if (3 < uVar21) {
      uVar15 = uVar15 + 5;
      goto LAB_100604748;
    }
    uVar15 = (uVar15 | bVar7 - 5 << (ulong)((uVar21 & 3) << 3)) + 5;
    if (1 < (int)uVar15) goto LAB_100604750;
LAB_100604808:
    if (uVar15 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2);
      param_1[lVar22] = *(byte *)(lVar22 + (long)param_2);
      param_1[uVar3] = 0;
      goto LAB_1006048e0;
    }
    if (uVar15 == 1) {
      (**(code **)(lVar8 + 0x10))(param_1,param_2);
      puVar9 = (undefined8 *)((ulong)(param_1 + lVar22 + 7) & 0xfffffffffffffff8);
      puVar13 = (undefined8 *)((ulong)((long)param_2 + lVar22 + 7) & 0xfffffffffffffff8);
      *puVar9 = *puVar13;
      puVar9[1] = puVar13[1];
      *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(puVar13 + 2);
      *(undefined1 *)((long)puVar9 + 0x11) = *(undefined1 *)((long)puVar13 + 0x11);
      param_1[uVar3] = 1;
      _swift_retain();
      goto LAB_1006048e0;
    }
  }
  _memcpy(param_1,param_2,uVar3 + 1);
LAB_1006048e0:
  lVar20 = *(long *)(param_3 + 0x28);
  lVar22 = *(long *)(lVar20 + -8);
  uVar10 = (ulong)*(byte *)(lVar22 + 0x50);
  lVar8 = uVar3 + uVar10 + 1;
  pvVar18 = (void *)((ulong)(param_1 + lVar8) & (uVar10 ^ 0xffffffffffffffff));
  pvVar17 = (void *)((ulong)(lVar8 + (long)param_2) & (uVar10 ^ 0xffffffffffffffff));
  pvVar6 = pvVar17;
  (**(code **)(lVar22 + 0x30))(pvVar17,1,lVar20);
  if ((int)pvVar6 == 0) {
    (**(code **)(lVar22 + 0x10))(pvVar18,pvVar17,lVar20);
    (**(code **)(lVar22 + 0x38))(pvVar18,0,1,lVar20);
    iVar19 = *(int *)(lVar22 + 0x54);
    sVar16 = *(size_t *)(lVar22 + 0x40);
  }
  else {
    iVar19 = *(int *)(lVar22 + 0x54);
    sVar16 = *(size_t *)(lVar22 + 0x40);
    sVar4 = sVar16;
    if (iVar19 == 0) {
      sVar4 = sVar16 + 1;
    }
    _memcpy(pvVar18,pvVar17,sVar4);
  }
  if (iVar19 == 0) {
    sVar16 = sVar16 + 1;
  }
  puVar11 = (ulong *)((long)pvVar18 + sVar16 + 7 & 0xfffffffffffffff8);
  puVar14 = (ulong *)((long)pvVar17 + sVar16 + 7 & 0xfffffffffffffff8);
  if (*puVar14 < 0xffffffff) {
    uVar10 = *puVar14;
    puVar11[1] = puVar14[1];
    *puVar11 = uVar10;
  }
  else {
    uVar10 = puVar14[1];
    *puVar11 = *puVar14;
    puVar11[1] = uVar10;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006049dc | FUN_1006049dc */

uint * FUN_1006049dc(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  uint uVar16;
  size_t sVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  void *pvVar22;
  ulong *puVar23;
  void *pvVar24;
  ulong *puVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  
  lVar27 = *(long *)(param_3 + 0x20);
  lVar30 = *(long *)(lVar27 + -8);
  lVar26 = *(long *)(lVar30 + 0x40);
  if (param_1 == param_2) {
    lVar27 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    iVar21 = *(int *)(lVar27 + 0x54);
    sVar17 = *(size_t *)(lVar27 + 0x40);
    uVar19 = (lVar26 + 7U & 0xfffffffffffffff8) + 0x12;
    if (uVar19 <= lVar26 + 1U) {
      uVar19 = lVar26 + 1;
    }
    uVar20 = (ulong)*(byte *)(lVar27 + 0x50) + 9 &
             ((ulong)*(byte *)(lVar27 + 0x50) ^ 0xffffffffffffffff);
    goto LAB_100604db0;
  }
  uVar19 = (lVar26 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar19 <= lVar26 + 1U) {
    uVar19 = lVar26 + 1;
  }
  lVar12 = *(long *)(param_3 + 0x18);
  lVar29 = *(long *)(lVar12 + -8);
  uVar31 = (ulong)*(byte *)(lVar29 + 0x50);
  uVar20 = uVar31 + 9 & (uVar31 ^ 0xffffffffffffffff);
  iVar21 = *(int *)(lVar29 + 0x54);
  sVar17 = *(size_t *)(lVar29 + 0x40);
  sVar3 = sVar17;
  if (iVar21 == 0) {
    sVar3 = sVar17 + 1;
  }
  uVar5 = uVar20 + sVar3;
  if (uVar20 + sVar3 <= uVar19) {
    uVar5 = uVar19;
  }
  bVar6 = *(byte *)((long)param_1 + uVar5);
  uVar16 = (uint)bVar6;
  uVar28 = (uint)uVar5;
  if (4 < bVar6) {
    uVar4 = 4;
    if (uVar28 < 4) {
      uVar4 = uVar28;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100604b48;
      uVar16 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar16 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar16 = (uint)(uint3)*param_1;
    }
    else {
      uVar16 = *param_1;
    }
    if (uVar28 < 4) {
      uVar16 = (uVar16 | bVar6 - 5 << (ulong)((uVar28 & 3) << 3)) + 5;
    }
    else {
      uVar16 = uVar16 + 5;
    }
  }
LAB_100604b48:
  uVar13 = ~uVar31;
  if (uVar16 == 2) {
    _swift_release(*(undefined8 *)param_1);
    pbVar1 = (byte *)((long)param_1 + uVar31 + 9);
    uVar7 = (ulong)pbVar1 & uVar13;
    (**(code **)(lVar29 + 0x30))(uVar7,1,lVar12);
    if ((int)uVar7 == 0) {
      pcVar14 = *(code **)(lVar29 + 8);
      puVar8 = (uint *)((ulong)pbVar1 & uVar13);
      lVar11 = lVar12;
LAB_100604bd0:
      (*pcVar14)(puVar8,lVar11);
    }
  }
  else if (uVar16 == 1) {
    (**(code **)(lVar30 + 8))(param_1,lVar27);
    _swift_release(*(undefined8 *)((ulong)((long)param_1 + lVar26 + 7) & 0xfffffffffffffff8));
  }
  else if (uVar16 == 0) {
    pcVar14 = *(code **)(lVar30 + 8);
    puVar8 = param_1;
    lVar11 = lVar27;
    goto LAB_100604bd0;
  }
  bVar6 = *(byte *)((long)param_2 + uVar5);
  uVar16 = (uint)bVar6;
  if (bVar6 < 5) {
LAB_100604c40:
    if ((int)uVar16 < 2) goto LAB_100604d00;
LAB_100604c48:
    if (uVar16 != 2) {
      if (uVar16 == 3) {
        *(byte *)param_1 = (byte)*param_2;
        *(byte *)((long)param_1 + uVar5) = 3;
        goto LAB_100604db0;
      }
      if (uVar16 == 4) {
        *(byte *)param_1 = (byte)*param_2;
        *(byte *)((long)param_1 + uVar5) = 4;
        goto LAB_100604db0;
      }
      goto LAB_100604d94;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 2) = (byte)param_2[2];
    pbVar1 = (byte *)((long)param_1 + uVar31 + 9);
    pbVar2 = (byte *)((long)param_2 + uVar31 + 9);
    pcVar14 = *(code **)(lVar29 + 0x30);
    _swift_retain();
    uVar31 = (ulong)pbVar2 & uVar13;
    (*pcVar14)(uVar31,1,lVar12);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar29 + 0x10))((ulong)pbVar1 & uVar13,(ulong)pbVar2 & uVar13,lVar12);
      (**(code **)(lVar29 + 0x38))((ulong)pbVar1 & uVar13,0,1,lVar12);
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar13),(void *)((ulong)pbVar2 & uVar13),sVar3);
    }
    *(byte *)((long)param_1 + uVar5) = 2;
  }
  else {
    uVar4 = 4;
    if (uVar28 < 4) {
      uVar4 = uVar28;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100604c40;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (3 < uVar28) {
      uVar16 = uVar16 + 5;
      goto LAB_100604c40;
    }
    uVar16 = (uVar16 | bVar6 - 5 << (ulong)((uVar28 & 3) << 3)) + 5;
    if (1 < (int)uVar16) goto LAB_100604c48;
LAB_100604d00:
    if (uVar16 == 0) {
      (**(code **)(lVar30 + 0x10))(param_1,param_2,lVar27);
      *(byte *)(lVar26 + (long)param_1) = *(byte *)(lVar26 + (long)param_2);
      *(byte *)((long)param_1 + uVar5) = 0;
    }
    else if (uVar16 == 1) {
      (**(code **)(lVar30 + 0x10))(param_1,param_2,lVar27);
      puVar15 = (undefined8 *)((ulong)((long)param_1 + lVar26 + 7) & 0xfffffffffffffff8);
      puVar18 = (undefined8 *)((ulong)((long)param_2 + lVar26 + 7) & 0xfffffffffffffff8);
      *puVar15 = *puVar18;
      puVar15[1] = puVar18[1];
      *(undefined1 *)(puVar15 + 2) = *(undefined1 *)(puVar18 + 2);
      *(undefined1 *)((long)puVar15 + 0x11) = *(undefined1 *)((long)puVar18 + 0x11);
      *(byte *)((long)param_1 + uVar5) = 1;
      _swift_retain();
    }
    else {
LAB_100604d94:
      _memcpy(param_1,param_2,uVar5 + 1);
    }
  }
LAB_100604db0:
  if (iVar21 == 0) {
    sVar17 = sVar17 + 1;
  }
  uVar31 = sVar17 + uVar20;
  if (sVar17 + uVar20 <= uVar19) {
    uVar31 = uVar19;
  }
  lVar27 = *(long *)(param_3 + 0x28);
  lVar30 = *(long *)(lVar27 + -8);
  uVar19 = (ulong)*(byte *)(lVar30 + 0x50);
  lVar26 = uVar31 + uVar19 + 1;
  pvVar24 = (void *)((ulong)(lVar26 + (long)param_1) & (uVar19 ^ 0xffffffffffffffff));
  pvVar22 = (void *)((ulong)(lVar26 + (long)param_2) & (uVar19 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar30 + 0x30);
  pvVar9 = pvVar24;
  (*pcVar14)(pvVar24,1,lVar27);
  pvVar10 = pvVar22;
  (*pcVar14)(pvVar22,1,lVar27);
  if ((int)pvVar9 == 0) {
    if ((int)pvVar10 == 0) {
      (**(code **)(lVar30 + 0x18))(pvVar24,pvVar22,lVar27);
      goto LAB_100604e78;
    }
    (**(code **)(lVar30 + 8))(pvVar24,lVar27);
  }
  else if ((int)pvVar10 == 0) {
    (**(code **)(lVar30 + 0x10))(pvVar24,pvVar22,lVar27);
    (**(code **)(lVar30 + 0x38))(pvVar24,0,1,lVar27);
    goto LAB_100604e78;
  }
  sVar17 = *(size_t *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  _memcpy(pvVar24,pvVar22,sVar17);
LAB_100604e78:
  lVar26 = *(long *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    lVar26 = lVar26 + 1;
  }
  puVar25 = (ulong *)((long)pvVar24 + lVar26 + 7 & 0xfffffffffffffff8);
  puVar23 = (ulong *)((long)pvVar22 + lVar26 + 7 & 0xfffffffffffffff8);
  uVar19 = *puVar23;
  if (*puVar25 < 0xffffffff) {
    if (0xfffffffe < uVar19) {
      uVar20 = puVar23[1];
      *puVar25 = uVar19;
      puVar25[1] = uVar20;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar19) {
      uVar20 = puVar23[1];
      uVar31 = puVar25[1];
      *puVar25 = uVar19;
      puVar25[1] = uVar20;
      _swift_retain();
      _swift_release(uVar31);
      return param_1;
    }
    _swift_release(puVar25[1]);
  }
  uVar19 = *puVar23;
  puVar25[1] = puVar23[1];
  *puVar25 = uVar19;
  return param_1;
}



/* Address: 0x100604f88 | FUN_100604f88 */

byte * FUN_100604f88(byte *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t sVar4;
  uint uVar5;
  void *pvVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong *puVar14;
  uint uVar15;
  size_t sVar16;
  void *pvVar17;
  void *pvVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  
  lVar20 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar22 = *(long *)(lVar8 + 0x40);
  uVar10 = (lVar22 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar10 <= lVar22 + 1U) {
    uVar10 = lVar22 + 1;
  }
  lVar24 = *(long *)(lVar20 + -8);
  uVar12 = (ulong)*(byte *)(lVar24 + 0x50);
  sVar16 = *(size_t *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    sVar16 = sVar16 + 1;
  }
  uVar3 = (uVar12 + 9 & (uVar12 ^ 0xffffffffffffffff)) + sVar16;
  if (uVar3 <= uVar10) {
    uVar3 = uVar10;
  }
  bVar7 = *(byte *)((long)param_2 + uVar3);
  uVar15 = (uint)bVar7;
  if (bVar7 < 5) {
LAB_100605078:
    if ((int)uVar15 < 2) goto LAB_10060512c;
LAB_100605080:
    if (uVar15 != 2) {
      if (uVar15 == 3) {
        *param_1 = (byte)*param_2;
        bVar7 = 3;
        goto LAB_1006051f4;
      }
      if (uVar15 == 4) {
        *param_1 = (byte)*param_2;
        bVar7 = 4;
        goto LAB_1006051f4;
      }
      goto LAB_1006051b0;
    }
    uVar23 = ~uVar12;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    param_1[8] = (byte)param_2[2];
    pbVar1 = param_1 + uVar12 + 9;
    pbVar2 = (byte *)((long)param_2 + uVar12 + 9);
    uVar10 = (ulong)pbVar2 & uVar23;
    (**(code **)(lVar24 + 0x30))(uVar10,1,lVar20);
    if ((int)uVar10 == 0) {
      (**(code **)(lVar24 + 0x20))((ulong)pbVar1 & uVar23,(ulong)pbVar2 & uVar23,lVar20);
      (**(code **)(lVar24 + 0x38))((ulong)pbVar1 & uVar23,0,1,lVar20);
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar23),(void *)((ulong)pbVar2 & uVar23),sVar16);
    }
    bVar7 = 2;
  }
  else {
    uVar21 = (uint)uVar3;
    uVar5 = 4;
    if (uVar21 < 4) {
      uVar5 = uVar21;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100605078;
      uVar15 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar15 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar15 = (uint)(uint3)*param_2;
    }
    else {
      uVar15 = *param_2;
    }
    if (3 < uVar21) {
      uVar15 = uVar15 + 5;
      goto LAB_100605078;
    }
    uVar15 = (uVar15 | bVar7 - 5 << (ulong)((uVar21 & 3) << 3)) + 5;
    if (1 < (int)uVar15) goto LAB_100605080;
LAB_10060512c:
    if (uVar15 == 0) {
      (**(code **)(lVar8 + 0x20))(param_1,param_2);
      param_1[lVar22] = *(byte *)(lVar22 + (long)param_2);
      param_1[uVar3] = 0;
      goto LAB_1006051f8;
    }
    if (uVar15 != 1) {
LAB_1006051b0:
      _memcpy(param_1,param_2,uVar3 + 1);
      goto LAB_1006051f8;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2);
    puVar9 = (undefined8 *)((ulong)(param_1 + lVar22 + 7) & 0xfffffffffffffff8);
    puVar13 = (undefined8 *)((ulong)((long)param_2 + lVar22 + 7) & 0xfffffffffffffff8);
    *puVar9 = *puVar13;
    puVar9[1] = puVar13[1];
    *(undefined1 *)(puVar9 + 2) = *(undefined1 *)(puVar13 + 2);
    *(undefined1 *)((long)puVar9 + 0x11) = *(undefined1 *)((long)puVar13 + 0x11);
    bVar7 = 1;
  }
LAB_1006051f4:
  param_1[uVar3] = bVar7;
LAB_1006051f8:
  lVar20 = *(long *)(param_3 + 0x28);
  lVar22 = *(long *)(lVar20 + -8);
  uVar10 = (ulong)*(byte *)(lVar22 + 0x50);
  lVar8 = uVar3 + uVar10 + 1;
  pvVar18 = (void *)((ulong)(param_1 + lVar8) & (uVar10 ^ 0xffffffffffffffff));
  pvVar17 = (void *)((ulong)(lVar8 + (long)param_2) & (uVar10 ^ 0xffffffffffffffff));
  pvVar6 = pvVar17;
  (**(code **)(lVar22 + 0x30))(pvVar17,1,lVar20);
  if ((int)pvVar6 == 0) {
    (**(code **)(lVar22 + 0x20))(pvVar18,pvVar17,lVar20);
    (**(code **)(lVar22 + 0x38))(pvVar18,0,1,lVar20);
    iVar19 = *(int *)(lVar22 + 0x54);
    sVar16 = *(size_t *)(lVar22 + 0x40);
  }
  else {
    iVar19 = *(int *)(lVar22 + 0x54);
    sVar16 = *(size_t *)(lVar22 + 0x40);
    sVar4 = sVar16;
    if (iVar19 == 0) {
      sVar4 = sVar16 + 1;
    }
    _memcpy(pvVar18,pvVar17,sVar4);
  }
  if (iVar19 == 0) {
    sVar16 = sVar16 + 1;
  }
  puVar11 = (ulong *)((long)pvVar18 + sVar16 + 7 & 0xfffffffffffffff8);
  puVar14 = (ulong *)((long)pvVar17 + sVar16 + 7 & 0xfffffffffffffff8);
  if (*puVar14 < 0xffffffff) {
    uVar10 = *puVar14;
    puVar11[1] = puVar14[1];
    *puVar11 = uVar10;
  }
  else {
    uVar10 = puVar14[1];
    *puVar11 = *puVar14;
    puVar11[1] = uVar10;
  }
  return param_1;
}



/* Address: 0x1006052ec | FUN_1006052ec */

uint * FUN_1006052ec(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  ulong uVar7;
  uint *puVar8;
  void *pvVar9;
  void *pvVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  uint uVar16;
  size_t sVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  void *pvVar22;
  ulong *puVar23;
  void *pvVar24;
  ulong *puVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  
  lVar27 = *(long *)(param_3 + 0x20);
  lVar30 = *(long *)(lVar27 + -8);
  lVar26 = *(long *)(lVar30 + 0x40);
  if (param_1 == param_2) {
    lVar27 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    iVar21 = *(int *)(lVar27 + 0x54);
    sVar17 = *(size_t *)(lVar27 + 0x40);
    uVar19 = (lVar26 + 7U & 0xfffffffffffffff8) + 0x12;
    if (uVar19 <= lVar26 + 1U) {
      uVar19 = lVar26 + 1;
    }
    uVar20 = (ulong)*(byte *)(lVar27 + 0x50) + 9 &
             ((ulong)*(byte *)(lVar27 + 0x50) ^ 0xffffffffffffffff);
    goto LAB_1006056b8;
  }
  uVar19 = (lVar26 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar19 <= lVar26 + 1U) {
    uVar19 = lVar26 + 1;
  }
  lVar12 = *(long *)(param_3 + 0x18);
  lVar29 = *(long *)(lVar12 + -8);
  uVar31 = (ulong)*(byte *)(lVar29 + 0x50);
  uVar20 = uVar31 + 9 & (uVar31 ^ 0xffffffffffffffff);
  iVar21 = *(int *)(lVar29 + 0x54);
  sVar17 = *(size_t *)(lVar29 + 0x40);
  sVar3 = sVar17;
  if (iVar21 == 0) {
    sVar3 = sVar17 + 1;
  }
  uVar5 = uVar20 + sVar3;
  if (uVar20 + sVar3 <= uVar19) {
    uVar5 = uVar19;
  }
  bVar6 = *(byte *)((long)param_1 + uVar5);
  uVar16 = (uint)bVar6;
  uVar28 = (uint)uVar5;
  if (4 < bVar6) {
    uVar4 = 4;
    if (uVar28 < 4) {
      uVar4 = uVar28;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100605458;
      uVar16 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar16 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar16 = (uint)(uint3)*param_1;
    }
    else {
      uVar16 = *param_1;
    }
    if (uVar28 < 4) {
      uVar16 = (uVar16 | bVar6 - 5 << (ulong)((uVar28 & 3) << 3)) + 5;
    }
    else {
      uVar16 = uVar16 + 5;
    }
  }
LAB_100605458:
  uVar13 = ~uVar31;
  if (uVar16 == 2) {
    _swift_release(*(undefined8 *)param_1);
    pbVar1 = (byte *)((long)param_1 + uVar31 + 9);
    uVar7 = (ulong)pbVar1 & uVar13;
    (**(code **)(lVar29 + 0x30))(uVar7,1,lVar12);
    if ((int)uVar7 == 0) {
      pcVar14 = *(code **)(lVar29 + 8);
      puVar8 = (uint *)((ulong)pbVar1 & uVar13);
      lVar11 = lVar12;
LAB_1006054e0:
      (*pcVar14)(puVar8,lVar11);
    }
  }
  else if (uVar16 == 1) {
    (**(code **)(lVar30 + 8))(param_1,lVar27);
    _swift_release(*(undefined8 *)((ulong)((long)param_1 + lVar26 + 7) & 0xfffffffffffffff8));
  }
  else if (uVar16 == 0) {
    pcVar14 = *(code **)(lVar30 + 8);
    puVar8 = param_1;
    lVar11 = lVar27;
    goto LAB_1006054e0;
  }
  bVar6 = *(byte *)((long)param_2 + uVar5);
  uVar16 = (uint)bVar6;
  if (bVar6 < 5) {
LAB_100605550:
    if ((int)uVar16 < 2) goto LAB_10060560c;
LAB_100605558:
    if (uVar16 != 2) {
      if (uVar16 == 3) {
        *(byte *)param_1 = (byte)*param_2;
        *(byte *)((long)param_1 + uVar5) = 3;
        goto LAB_1006056b8;
      }
      if (uVar16 == 4) {
        *(byte *)param_1 = (byte)*param_2;
        *(byte *)((long)param_1 + uVar5) = 4;
        goto LAB_1006056b8;
      }
      goto LAB_10060569c;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 2) = (byte)param_2[2];
    pbVar1 = (byte *)((long)param_1 + uVar31 + 9);
    pbVar2 = (byte *)((long)param_2 + uVar31 + 9);
    uVar31 = (ulong)pbVar2 & uVar13;
    (**(code **)(lVar29 + 0x30))(uVar31,1,lVar12);
    if ((int)uVar31 == 0) {
      (**(code **)(lVar29 + 0x20))((ulong)pbVar1 & uVar13,(ulong)pbVar2 & uVar13,lVar12);
      (**(code **)(lVar29 + 0x38))((ulong)pbVar1 & uVar13,0,1,lVar12);
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar13),(void *)((ulong)pbVar2 & uVar13),sVar3);
    }
    *(byte *)((long)param_1 + uVar5) = 2;
  }
  else {
    uVar4 = 4;
    if (uVar28 < 4) {
      uVar4 = uVar28;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100605550;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (3 < uVar28) {
      uVar16 = uVar16 + 5;
      goto LAB_100605550;
    }
    uVar16 = (uVar16 | bVar6 - 5 << (ulong)((uVar28 & 3) << 3)) + 5;
    if (1 < (int)uVar16) goto LAB_100605558;
LAB_10060560c:
    if (uVar16 == 0) {
      (**(code **)(lVar30 + 0x20))(param_1,param_2,lVar27);
      *(byte *)(lVar26 + (long)param_1) = *(byte *)(lVar26 + (long)param_2);
      *(byte *)((long)param_1 + uVar5) = 0;
    }
    else if (uVar16 == 1) {
      (**(code **)(lVar30 + 0x20))(param_1,param_2,lVar27);
      puVar15 = (undefined8 *)((ulong)((long)param_1 + lVar26 + 7) & 0xfffffffffffffff8);
      puVar18 = (undefined8 *)((ulong)((long)param_2 + lVar26 + 7) & 0xfffffffffffffff8);
      *puVar15 = *puVar18;
      puVar15[1] = puVar18[1];
      *(undefined1 *)(puVar15 + 2) = *(undefined1 *)(puVar18 + 2);
      *(undefined1 *)((long)puVar15 + 0x11) = *(undefined1 *)((long)puVar18 + 0x11);
      *(byte *)((long)param_1 + uVar5) = 1;
    }
    else {
LAB_10060569c:
      _memcpy(param_1,param_2,uVar5 + 1);
    }
  }
LAB_1006056b8:
  if (iVar21 == 0) {
    sVar17 = sVar17 + 1;
  }
  uVar31 = sVar17 + uVar20;
  if (sVar17 + uVar20 <= uVar19) {
    uVar31 = uVar19;
  }
  lVar27 = *(long *)(param_3 + 0x28);
  lVar30 = *(long *)(lVar27 + -8);
  uVar19 = (ulong)*(byte *)(lVar30 + 0x50);
  lVar26 = uVar31 + uVar19 + 1;
  pvVar24 = (void *)((ulong)(lVar26 + (long)param_1) & (uVar19 ^ 0xffffffffffffffff));
  pvVar22 = (void *)((ulong)(lVar26 + (long)param_2) & (uVar19 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar30 + 0x30);
  pvVar9 = pvVar24;
  (*pcVar14)(pvVar24,1,lVar27);
  pvVar10 = pvVar22;
  (*pcVar14)(pvVar22,1,lVar27);
  if ((int)pvVar9 == 0) {
    if ((int)pvVar10 == 0) {
      (**(code **)(lVar30 + 0x28))(pvVar24,pvVar22,lVar27);
      goto LAB_100605780;
    }
    (**(code **)(lVar30 + 8))(pvVar24,lVar27);
  }
  else if ((int)pvVar10 == 0) {
    (**(code **)(lVar30 + 0x20))(pvVar24,pvVar22,lVar27);
    (**(code **)(lVar30 + 0x38))(pvVar24,0,1,lVar27);
    goto LAB_100605780;
  }
  sVar17 = *(size_t *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  _memcpy(pvVar24,pvVar22,sVar17);
LAB_100605780:
  lVar26 = *(long *)(lVar30 + 0x40);
  if (*(int *)(lVar30 + 0x54) == 0) {
    lVar26 = lVar26 + 1;
  }
  puVar25 = (ulong *)((long)pvVar24 + lVar26 + 7 & 0xfffffffffffffff8);
  puVar23 = (ulong *)((long)pvVar22 + lVar26 + 7 & 0xfffffffffffffff8);
  uVar19 = *puVar23;
  if (*puVar25 < 0xffffffff) {
    if (0xfffffffe < uVar19) {
      uVar20 = puVar23[1];
      *puVar25 = uVar19;
      puVar25[1] = uVar20;
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar19) {
      uVar31 = puVar23[1];
      uVar20 = puVar25[1];
      *puVar25 = uVar19;
      puVar25[1] = uVar31;
      _swift_release(uVar20);
      return param_1;
    }
    _swift_release(puVar25[1]);
  }
  uVar19 = *puVar23;
  puVar25[1] = puVar23[1];
  *puVar25 = uVar19;
  return param_1;
}



/* Address: 0x100605884 | FUN_100605884 */

int FUN_100605884(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + -8) + 0x40);
  uVar8 = (lVar11 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar8 <= lVar11 + 1U) {
    uVar8 = lVar11 + 1;
  }
  lVar12 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  uVar1 = lVar11 + ((ulong)*(byte *)(lVar12 + 0x50) + 9 &
                   ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  lVar11 = *(long *)(*(long *)(param_3 + 0x28) + -8);
  iVar7 = *(int *)(lVar11 + 0x54);
  uVar3 = 0;
  if (iVar7 != 0) {
    uVar3 = iVar7 - 1;
  }
  uVar4 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar4 = 0x7ffffffe;
  }
  lVar12 = *(long *)(lVar11 + 0x40);
  if (iVar7 == 0) {
    lVar12 = lVar12 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar8 = uVar1 + uVar13 + 1;
  if (uVar4 <= param_2 && param_2 - uVar4 != 0) {
    uVar1 = (lVar12 + 7 + (uVar8 & (uVar13 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
    uVar2 = uVar1 & 0xfffffff8;
    uVar10 = (uint)uVar2;
    uVar9 = 2;
    uVar6 = uVar9;
    if (uVar2 == 0) {
      uVar6 = (param_2 - uVar4) + 1;
    }
    if (0xffff < uVar6) {
      uVar9 = 4;
    }
    if (uVar6 < 0x100) {
      uVar9 = 1;
    }
    uVar5 = 0;
    if (1 < uVar6) {
      uVar5 = uVar9;
    }
    if (uVar5 < 2) {
      if ((uVar5 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_100605990;
    }
    else if (uVar5 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_100605990:
        uVar9 = uVar9 - 1;
        if (uVar2 != 0) {
          uVar9 = 0;
          uVar10 = *param_1;
        }
        return uVar4 + (uVar10 | uVar9) + 1;
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_100605990;
    }
  }
  uVar8 = uVar8 + (long)param_1 & ~uVar13;
  if (0x7ffffffd < uVar3) {
    (**(code **)(lVar11 + 0x30))();
    iVar7 = 0;
    if ((int)uVar8 != 0) {
      iVar7 = (int)uVar8 + -1;
    }
    return iVar7;
  }
  uVar8 = *(ulong *)(lVar12 + 7 + uVar8 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar8) {
    uVar8 = 0xffffffff;
  }
  iVar7 = 0;
  if (1 < (int)uVar8 + 1U) {
    iVar7 = (int)uVar8;
  }
  return iVar7;
}



/* Address: 0x1006059d4 | FUN_1006059d4 */

int FUN_1006059d4(int param_1)

{
  int iVar1;
  long in_x9;
  
  (**(code **)(in_x9 + 0x30))();
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + -1;
  }
  return iVar1;
}



/* Address: 0x100605a1c | FUN_100605a1c */

void FUN_100605a1c(int *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  size_t sVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + -8) + 0x40);
  uVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= lVar8 + 1U) {
    uVar1 = lVar8 + 1;
  }
  lVar11 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  lVar8 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar8 = lVar8 + 1;
  }
  uVar3 = lVar8 + ((ulong)*(byte *)(lVar11 + 0x50) + 9 &
                  ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  lVar8 = *(long *)(*(long *)(param_4 + 0x28) + -8);
  iVar6 = *(int *)(lVar8 + 0x54);
  uVar4 = 0;
  if (iVar6 != 0) {
    uVar4 = iVar6 - 1;
  }
  uVar12 = uVar4;
  if (uVar4 < 0x7fffffff) {
    uVar12 = 0x7ffffffe;
  }
  uVar13 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = uVar3 + uVar13 + 1;
  sVar9 = *(size_t *)(lVar8 + 0x40);
  if (iVar6 == 0) {
    sVar9 = sVar9 + 1;
  }
  sVar2 = (sVar9 + 7 + (uVar1 & (uVar13 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x10;
  uVar7 = 0;
  if (uVar12 <= param_3 && param_3 - uVar12 != 0) {
    uVar14 = 2;
    uVar5 = uVar14;
    if ((int)sVar2 == 0) {
      uVar5 = (param_3 - uVar12) + 1;
    }
    if (0xffff < uVar5) {
      uVar14 = 4;
    }
    if (uVar5 < 0x100) {
      uVar14 = 1;
    }
    uVar7 = 0;
    if (1 < uVar5) {
      uVar7 = uVar14;
    }
  }
  iVar6 = param_2 - uVar12;
  if (param_2 < uVar12 || iVar6 == 0) {
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      puVar15 = (uint *)(uVar1 + (long)param_1 & ~uVar13);
      if (uVar4 < 0x7ffffffe) {
        puVar10 = (ulong *)(sVar9 + 7 + (long)puVar15 & 0xfffffffffffffff8);
        if (param_2 < 0x7fffffff) {
          *puVar10 = (ulong)param_2;
        }
        else {
          *puVar10 = 0;
          puVar10[1] = 0;
          *(uint *)puVar10 = param_2 + 0x80000001;
        }
      }
      else {
        if (param_2 <= uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100605c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar8 + 0x38))(puVar15,param_2 + 1);
          return;
        }
        uVar7 = (uint)sVar9;
        uVar12 = 0xffffffff;
        if (uVar7 < 4) {
          uVar12 = ~(-1 << (ulong)((uVar7 & 3) << 3));
        }
        if (uVar7 != 0) {
          uVar12 = uVar12 & (uVar4 - param_2 ^ 0xffffffff);
          uVar4 = 4;
          if (uVar7 < 4) {
            uVar4 = uVar7;
          }
          _bzero(puVar15,sVar9);
          if ((int)uVar4 < 3) {
            if (uVar4 == 1) {
              *(char *)puVar15 = (char)uVar12;
            }
            else {
              *(short *)puVar15 = (short)uVar12;
            }
          }
          else if (uVar4 == 3) {
            *(short *)puVar15 = (short)uVar12;
            *(char *)((long)puVar15 + 2) = (char)(uVar12 >> 0x10);
          }
          else {
            *puVar15 = uVar12;
          }
        }
      }
    }
  }
  else {
    if ((int)sVar2 != 0) {
      iVar6 = 1;
      _bzero(param_1,sVar2);
      *param_1 = param_2 + ~uVar12;
    }
    if (uVar7 < 2) {
      if (uVar7 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar6;
      }
    }
    else if (uVar7 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar6;
    }
  }
  return;
}



/* Address: 0x100605c94 | FUN_100605c94 */

void FUN_100605c94(void)

{
  FUN_1005f7110(0);
  return;
}



/* Address: 0x100605c9c | FUN_100605c9c */

void FUN_100605c9c(long param_1)

{
  long lVar1;
  long *plVar2;
  long local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  plVar2 = &local_60;
  local_30 = *(undefined8 *)(param_1 + 0x40);
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  local_60 = *(long *)(param_1 + 0x10);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  lVar1 = 0x13f;
  FUN_100603da4();
  if (plVar2 < (undefined1 *)0x40) {
    local_60 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_60,param_1 + 0x48);
  }
  return;
}



/* Address: 0x100605d20 | FUN_100605d20 */

void FUN_100605d20(uint *param_1,long param_2)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  lVar10 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + -8);
  lVar11 = *(long *)(lVar5 + 0x40);
  uVar4 = (lVar11 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar4 <= lVar11 + 1U) {
    uVar4 = lVar11 + 1;
  }
  lVar12 = *(long *)(lVar10 + -8);
  uVar13 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar9 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar2 = lVar9 + (uVar13 + 9 & (uVar13 ^ 0xffffffffffffffff));
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  bVar3 = *(byte *)((long)param_1 + uVar2);
  uVar7 = (uint)bVar3;
  if (4 < bVar3) {
    uVar6 = (uint)uVar2;
    uVar8 = 4;
    if (uVar6 < 4) {
      uVar8 = uVar6;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100605e08;
      uVar8 = (uint)(byte)*param_1;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_1;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_1;
    }
    else {
      uVar8 = *param_1;
    }
    uVar7 = uVar8 | bVar3 - 5 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 5;
  }
LAB_100605e08:
  if (uVar7 == 2) {
    _swift_release(*(undefined8 *)param_1);
    pbVar1 = (byte *)((long)param_1 + uVar13 + 9);
    uVar4 = (ulong)pbVar1 & ~uVar13;
    (**(code **)(lVar12 + 0x30))(uVar4,1,lVar10);
    if ((int)uVar4 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 8);
    param_1 = (uint *)((ulong)pbVar1 & ~uVar13);
  }
  else {
    if (uVar7 == 1) {
      (**(code **)(lVar5 + 8))();
      _swift_release(*(undefined8 *)((ulong)((long)param_1 + lVar11 + 7) & 0xfffffffffffffff8));
      return;
    }
    if (uVar7 != 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
    lVar10 = *(long *)(param_2 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x000100605eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,lVar10);
  return;
}



/* Address: 0x100605ebc | FUN_100605ebc */

byte * FUN_100605ebc(byte *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  size_t sVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  
  lVar14 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar16 = *(long *)(lVar6 + 0x40);
  uVar4 = (lVar16 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar4 <= lVar16 + 1U) {
    uVar4 = lVar16 + 1;
  }
  lVar17 = *(long *)(lVar14 + -8);
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  sVar13 = *(size_t *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  uVar2 = (uVar9 + 9 & (uVar9 ^ 0xffffffffffffffff)) + sVar13;
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  bVar3 = *(byte *)((long)param_2 + uVar2);
  uVar11 = (uint)bVar3;
  if (4 < bVar3) {
    uVar15 = (uint)uVar2;
    uVar12 = 4;
    if (uVar15 < 4) {
      uVar12 = uVar15;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_100605fac;
      uVar12 = (uint)(byte)*param_2;
    }
    else if (uVar12 == 2) {
      uVar12 = (uint)(ushort)*param_2;
    }
    else if (uVar12 == 3) {
      uVar12 = (uint)(uint3)*param_2;
    }
    else {
      uVar12 = *param_2;
    }
    uVar11 = uVar12 | bVar3 - 5 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar11 = uVar12;
    }
    uVar11 = uVar11 + 5;
  }
LAB_100605fac:
  if ((int)uVar11 < 2) {
    if (uVar11 == 0) {
      (**(code **)(lVar6 + 0x10))();
      param_1[lVar16] = *(byte *)(lVar16 + (long)param_2);
      param_1[uVar2] = 0;
    }
    else {
      if (uVar11 != 1) {
LAB_1006060e4:
        pbVar5 = _memcpy(param_1,param_2,uVar2 + 1);
        return pbVar5;
      }
      (**(code **)(lVar6 + 0x10))();
      puVar7 = (undefined8 *)((ulong)(param_1 + lVar16 + 7) & 0xfffffffffffffff8);
      puVar10 = (undefined8 *)((ulong)((long)param_2 + lVar16 + 7) & 0xfffffffffffffff8);
      *puVar7 = *puVar10;
      puVar7[1] = puVar10[1];
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar10 + 2);
      *(undefined1 *)((long)puVar7 + 0x11) = *(undefined1 *)((long)puVar10 + 0x11);
      param_1[uVar2] = 1;
      _swift_retain();
    }
  }
  else if (uVar11 == 2) {
    uVar18 = ~uVar9;
    uVar8 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar8;
    param_1[8] = (byte)param_2[2];
    pbVar5 = param_1 + uVar9 + 9;
    pbVar1 = (byte *)((long)param_2 + uVar9 + 9);
    pcVar19 = *(code **)(lVar17 + 0x30);
    _swift_retain(uVar8);
    uVar4 = (ulong)pbVar1 & uVar18;
    (*pcVar19)(uVar4,1,lVar14);
    if ((int)uVar4 == 0) {
      (**(code **)(lVar17 + 0x10))((ulong)pbVar5 & uVar18,(ulong)pbVar1 & uVar18,lVar14);
      (**(code **)(lVar17 + 0x38))((ulong)pbVar5 & uVar18,0,1,lVar14);
    }
    else {
      _memcpy((void *)((ulong)pbVar5 & uVar18),(void *)((ulong)pbVar1 & uVar18),sVar13);
    }
    param_1[uVar2] = 2;
  }
  else if (uVar11 == 3) {
    *param_1 = (byte)*param_2;
    param_1[uVar2] = 3;
  }
  else {
    if (uVar11 != 4) goto LAB_1006060e4;
    *param_1 = (byte)*param_2;
    param_1[uVar2] = 4;
  }
  return param_1;
}



/* Address: 0x100606158 | FUN_100606158 */

uint * FUN_100606158(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  byte bVar10;
  code *pcVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  size_t sVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar6 + -8);
  lVar18 = *(long *)(lVar20 + 0x40);
  uVar16 = (lVar18 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar16 <= lVar18 + 1U) {
    uVar16 = lVar18 + 1;
  }
  lVar19 = *(long *)(lVar5 + -8);
  uVar21 = (ulong)*(byte *)(lVar19 + 0x50);
  sVar15 = *(size_t *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    sVar15 = sVar15 + 1;
  }
  uVar3 = (uVar21 + 9 & (uVar21 ^ 0xffffffffffffffff)) + sVar15;
  if (uVar3 <= uVar16) {
    uVar3 = uVar16;
  }
  bVar10 = *(byte *)((long)param_1 + uVar3);
  uVar13 = (uint)bVar10;
  uVar17 = (uint)uVar3;
  if (4 < bVar10) {
    uVar4 = 4;
    if (uVar17 < 4) {
      uVar4 = uVar17;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100606274;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    if (uVar17 < 4) {
      uVar13 = (uVar13 | bVar10 - 5 << (ulong)((uVar17 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
LAB_100606274:
  uVar16 = ~uVar21;
  if (uVar13 == 2) {
    _swift_release(*(undefined8 *)param_1);
    pbVar1 = (byte *)((long)param_1 + uVar21 + 9);
    uVar7 = (ulong)pbVar1 & uVar16;
    (**(code **)(lVar19 + 0x30))(uVar7,1,lVar5);
    if ((int)uVar7 == 0) {
      pcVar11 = *(code **)(lVar19 + 8);
      puVar8 = (uint *)((ulong)pbVar1 & uVar16);
      lVar9 = lVar5;
LAB_1006062f8:
      (*pcVar11)(puVar8,lVar9);
    }
  }
  else if (uVar13 == 1) {
    (**(code **)(lVar20 + 8))(param_1,lVar6);
    _swift_release(*(undefined8 *)((ulong)((long)param_1 + lVar18 + 7) & 0xfffffffffffffff8));
  }
  else if (uVar13 == 0) {
    pcVar11 = *(code **)(lVar20 + 8);
    puVar8 = param_1;
    lVar9 = lVar6;
    goto LAB_1006062f8;
  }
  bVar10 = *(byte *)((long)param_2 + uVar3);
  uVar13 = (uint)bVar10;
  if (4 < bVar10) {
    uVar4 = 4;
    if (uVar17 < 4) {
      uVar4 = uVar17;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto joined_r0x00010060636c;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    if (uVar17 < 4) {
      uVar13 = (uVar13 | bVar10 - 5 << (ulong)((uVar17 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
joined_r0x00010060636c:
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar6);
      *(byte *)(lVar18 + (long)param_1) = *(byte *)(lVar18 + (long)param_2);
      *(byte *)((long)param_1 + uVar3) = 0;
    }
    else {
      if (uVar13 != 1) {
LAB_1006064b4:
        puVar8 = _memcpy(param_1,param_2,uVar3 + 1);
        return puVar8;
      }
      (**(code **)(lVar20 + 0x10))(param_1,param_2,lVar6);
      puVar12 = (undefined8 *)((ulong)((long)param_1 + lVar18 + 7) & 0xfffffffffffffff8);
      puVar14 = (undefined8 *)((ulong)((long)param_2 + lVar18 + 7) & 0xfffffffffffffff8);
      *puVar12 = *puVar14;
      puVar12[1] = puVar14[1];
      *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar14 + 2);
      *(undefined1 *)((long)puVar12 + 0x11) = *(undefined1 *)((long)puVar14 + 0x11);
      *(byte *)((long)param_1 + uVar3) = 1;
      _swift_retain();
    }
  }
  else {
    if (uVar13 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(byte *)(param_1 + 2) = (byte)param_2[2];
      pbVar1 = (byte *)((long)param_1 + uVar21 + 9);
      pbVar2 = (byte *)((long)param_2 + uVar21 + 9);
      pcVar11 = *(code **)(lVar19 + 0x30);
      _swift_retain();
      uVar21 = (ulong)pbVar2 & uVar16;
      (*pcVar11)(uVar21,1,lVar5);
      if ((int)uVar21 == 0) {
        (**(code **)(lVar19 + 0x10))((ulong)pbVar1 & uVar16,(ulong)pbVar2 & uVar16,lVar5);
        (**(code **)(lVar19 + 0x38))((ulong)pbVar1 & uVar16,0,1,lVar5);
      }
      else {
        _memcpy((void *)((ulong)pbVar1 & uVar16),(void *)((ulong)pbVar2 & uVar16),sVar15);
      }
      bVar10 = 2;
    }
    else if (uVar13 == 3) {
      *(byte *)param_1 = (byte)*param_2;
      bVar10 = 3;
    }
    else {
      if (uVar13 != 4) goto LAB_1006064b4;
      *(byte *)param_1 = (byte)*param_2;
      bVar10 = 4;
    }
    *(byte *)((long)param_1 + uVar3) = bVar10;
  }
  return param_1;
}



/* Address: 0x100606538 | FUN_100606538 */

byte * FUN_100606538(byte *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  size_t sVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar13 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar15 = *(long *)(lVar6 + 0x40);
  uVar4 = (lVar15 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar4 <= lVar15 + 1U) {
    uVar4 = lVar15 + 1;
  }
  lVar16 = *(long *)(lVar13 + -8);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  sVar12 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar2 = (uVar8 + 9 & (uVar8 ^ 0xffffffffffffffff)) + sVar12;
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  bVar3 = *(byte *)((long)param_2 + uVar2);
  uVar10 = (uint)bVar3;
  if (4 < bVar3) {
    uVar14 = (uint)uVar2;
    uVar11 = 4;
    if (uVar14 < 4) {
      uVar11 = uVar14;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_100606624;
      uVar11 = (uint)(byte)*param_2;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_2;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_2;
    }
    else {
      uVar11 = *param_2;
    }
    uVar10 = uVar11 | bVar3 - 5 << (ulong)((uVar14 & 3) << 3);
    if (3 < uVar14) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 5;
  }
LAB_100606624:
  if ((int)uVar10 < 2) {
    if (uVar10 == 0) {
      (**(code **)(lVar6 + 0x20))();
      param_1[lVar15] = *(byte *)(lVar15 + (long)param_2);
      param_1[uVar2] = 0;
    }
    else {
      if (uVar10 != 1) {
LAB_100606750:
        pbVar5 = _memcpy(param_1,param_2,uVar2 + 1);
        return pbVar5;
      }
      (**(code **)(lVar6 + 0x20))();
      puVar7 = (undefined8 *)((ulong)(param_1 + lVar15 + 7) & 0xfffffffffffffff8);
      puVar9 = (undefined8 *)((ulong)((long)param_2 + lVar15 + 7) & 0xfffffffffffffff8);
      *puVar7 = *puVar9;
      puVar7[1] = puVar9[1];
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar9 + 2);
      *(undefined1 *)((long)puVar7 + 0x11) = *(undefined1 *)((long)puVar9 + 0x11);
      param_1[uVar2] = 1;
    }
  }
  else if (uVar10 == 2) {
    uVar17 = ~uVar8;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    param_1[8] = (byte)param_2[2];
    pbVar5 = param_1 + uVar8 + 9;
    pbVar1 = (byte *)((long)param_2 + uVar8 + 9);
    uVar4 = (ulong)pbVar1 & uVar17;
    (**(code **)(lVar16 + 0x30))(uVar4,1,lVar13);
    if ((int)uVar4 == 0) {
      (**(code **)(lVar16 + 0x20))((ulong)pbVar5 & uVar17,(ulong)pbVar1 & uVar17,lVar13);
      (**(code **)(lVar16 + 0x38))((ulong)pbVar5 & uVar17,0,1,lVar13);
    }
    else {
      _memcpy((void *)((ulong)pbVar5 & uVar17),(void *)((ulong)pbVar1 & uVar17),sVar12);
    }
    param_1[uVar2] = 2;
  }
  else if (uVar10 == 3) {
    *param_1 = (byte)*param_2;
    param_1[uVar2] = 3;
  }
  else {
    if (uVar10 != 4) goto LAB_100606750;
    *param_1 = (byte)*param_2;
    param_1[uVar2] = 4;
  }
  return param_1;
}



/* Address: 0x1006067bc | FUN_1006067bc */

uint * FUN_1006067bc(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  byte bVar10;
  code *pcVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined8 *puVar14;
  size_t sVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x18);
  lVar6 = *(long *)(param_3 + 0x20);
  lVar20 = *(long *)(lVar6 + -8);
  lVar18 = *(long *)(lVar20 + 0x40);
  uVar16 = (lVar18 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar16 <= lVar18 + 1U) {
    uVar16 = lVar18 + 1;
  }
  lVar19 = *(long *)(lVar5 + -8);
  uVar21 = (ulong)*(byte *)(lVar19 + 0x50);
  sVar15 = *(size_t *)(lVar19 + 0x40);
  if (*(int *)(lVar19 + 0x54) == 0) {
    sVar15 = sVar15 + 1;
  }
  uVar3 = (uVar21 + 9 & (uVar21 ^ 0xffffffffffffffff)) + sVar15;
  if (uVar3 <= uVar16) {
    uVar3 = uVar16;
  }
  bVar10 = *(byte *)((long)param_1 + uVar3);
  uVar13 = (uint)bVar10;
  uVar17 = (uint)uVar3;
  if (4 < bVar10) {
    uVar4 = 4;
    if (uVar17 < 4) {
      uVar4 = uVar17;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1006068d8;
      uVar13 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar13 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar13 = (uint)(uint3)*param_1;
    }
    else {
      uVar13 = *param_1;
    }
    if (uVar17 < 4) {
      uVar13 = (uVar13 | bVar10 - 5 << (ulong)((uVar17 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
LAB_1006068d8:
  uVar16 = ~uVar21;
  if (uVar13 == 2) {
    _swift_release(*(undefined8 *)param_1);
    pbVar1 = (byte *)((long)param_1 + uVar21 + 9);
    uVar7 = (ulong)pbVar1 & uVar16;
    (**(code **)(lVar19 + 0x30))(uVar7,1,lVar5);
    if ((int)uVar7 == 0) {
      pcVar11 = *(code **)(lVar19 + 8);
      puVar8 = (uint *)((ulong)pbVar1 & uVar16);
      lVar9 = lVar5;
LAB_10060695c:
      (*pcVar11)(puVar8,lVar9);
    }
  }
  else if (uVar13 == 1) {
    (**(code **)(lVar20 + 8))(param_1,lVar6);
    _swift_release(*(undefined8 *)((ulong)((long)param_1 + lVar18 + 7) & 0xfffffffffffffff8));
  }
  else if (uVar13 == 0) {
    pcVar11 = *(code **)(lVar20 + 8);
    puVar8 = param_1;
    lVar9 = lVar6;
    goto LAB_10060695c;
  }
  bVar10 = *(byte *)((long)param_2 + uVar3);
  uVar13 = (uint)bVar10;
  if (4 < bVar10) {
    uVar4 = 4;
    if (uVar17 < 4) {
      uVar4 = uVar17;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto joined_r0x0001006069d0;
      uVar13 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar13 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar13 = (uint)(uint3)*param_2;
    }
    else {
      uVar13 = *param_2;
    }
    if (uVar17 < 4) {
      uVar13 = (uVar13 | bVar10 - 5 << (ulong)((uVar17 & 3) << 3)) + 5;
    }
    else {
      uVar13 = uVar13 + 5;
    }
  }
joined_r0x0001006069d0:
  if ((int)uVar13 < 2) {
    if (uVar13 == 0) {
      (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar6);
      *(byte *)(lVar18 + (long)param_1) = *(byte *)(lVar18 + (long)param_2);
      *(byte *)((long)param_1 + uVar3) = 0;
      return param_1;
    }
    if (uVar13 != 1) {
LAB_100606b0c:
      puVar8 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar8;
    }
    (**(code **)(lVar20 + 0x20))(param_1,param_2,lVar6);
    puVar12 = (undefined8 *)((ulong)((long)param_1 + lVar18 + 7) & 0xfffffffffffffff8);
    puVar14 = (undefined8 *)((ulong)((long)param_2 + lVar18 + 7) & 0xfffffffffffffff8);
    *puVar12 = *puVar14;
    puVar12[1] = puVar14[1];
    *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar14 + 2);
    *(undefined1 *)((long)puVar12 + 0x11) = *(undefined1 *)((long)puVar14 + 0x11);
    bVar10 = 1;
  }
  else if (uVar13 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)(param_1 + 2) = (byte)param_2[2];
    pbVar1 = (byte *)((long)param_1 + uVar21 + 9);
    pbVar2 = (byte *)((long)param_2 + uVar21 + 9);
    uVar21 = (ulong)pbVar2 & uVar16;
    (**(code **)(lVar19 + 0x30))(uVar21,1,lVar5);
    if ((int)uVar21 == 0) {
      (**(code **)(lVar19 + 0x20))((ulong)pbVar1 & uVar16,(ulong)pbVar2 & uVar16,lVar5);
      (**(code **)(lVar19 + 0x38))((ulong)pbVar1 & uVar16,0,1,lVar5);
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar16),(void *)((ulong)pbVar2 & uVar16),sVar15);
    }
    bVar10 = 2;
  }
  else if (uVar13 == 3) {
    *(byte *)param_1 = (byte)*param_2;
    bVar10 = 3;
  }
  else {
    if (uVar13 != 4) goto LAB_100606b0c;
    *(byte *)param_1 = (byte)*param_2;
    bVar10 = 4;
  }
  *(byte *)((long)param_1 + uVar3) = bVar10;
  return param_1;
}



/* Address: 0x100606b90 | FUN_100606b90 */

int FUN_100606b90(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + -8) + 0x40);
  uVar7 = (lVar6 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar7 <= lVar6 + 1U) {
    uVar7 = lVar6 + 1;
  }
  lVar8 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar1 = lVar6 + ((ulong)*(byte *)(lVar8 + 0x50) + 9 &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar1 <= uVar7) {
    uVar1 = uVar7;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfb) goto LAB_100606c78;
  uVar7 = uVar1 + 1;
  uVar5 = (uint)uVar7;
  uVar4 = uVar5 << 3;
  if (uVar5 < 4) {
    uVar9 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfa >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar9 < 0x100) {
      if (uVar9 < 2) goto LAB_100606c78;
      goto LAB_100606c04;
    }
    if (uVar9 >> 0x10 == 0) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100606c04:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar5 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar5 != 0) {
      uVar4 = 4;
      if (uVar5 < 4) {
        uVar4 = uVar5;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return ((uint)uVar7 | uVar2) + 0xfb;
  }
LAB_100606c78:
  iVar3 = 0;
  if (5 < *(byte *)((long)param_1 + uVar1)) {
    iVar3 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x100606cd4 | FUN_100606cd4 */

void FUN_100606cd4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x20) + -8) + 0x40);
  uVar1 = (lVar6 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= lVar6 + 1U) {
    uVar1 = lVar6 + 1;
  }
  lVar7 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar3 = lVar6 + ((ulong)*(byte *)(lVar7 + 0x50) + 9 &
                  ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
  if (uVar3 <= uVar1) {
    uVar3 = uVar1;
  }
  sVar2 = uVar3 + 1;
  uVar8 = (uint)sVar2;
  if (param_3 < 0xfb) {
    bVar9 = 0;
  }
  else if (uVar8 < 4) {
    uVar4 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - 0xfa >> (ulong)(uVar8 << 3 & 0x1f)) +
            1;
    bVar9 = 2;
    if (0xffff < uVar4) {
      bVar9 = 4;
    }
    if (uVar4 < 0x100) {
      bVar9 = 1 < uVar4;
    }
  }
  else {
    bVar9 = 1;
  }
  if (param_2 < 0xfb) {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar3) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfb;
    if (uVar8 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar4;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar10;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar10;
    }
  }
  return;
}



/* Address: 0x100606eb8 | FUN_100606eb8 */

void FUN_100606eb8(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined1 auStack_e0 [32];
  long local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar3 = 0x13f;
  _swift_checkMetadataState();
  if (uVar4 < 0x40) {
    lVar3 = *(long *)(lVar3 + -8) + 0x40;
    _swift_getTupleTypeLayout2(auStack_78,lVar3,&DAT_100c672f8);
    puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_b0 = &DAT_100c673a8;
    puStack_a8 = &DAT_100c672f8;
    local_a0 = &DAT_100c672f8;
    local_c0 = lVar3;
    puStack_b8 = puVar1;
    local_58 = auStack_78;
    _swift_getTupleTypeLayout(auStack_98,0,5,&local_c0);
    uVar4 = *(ulong *)(param_1 + 0x18);
    local_50 = auStack_98;
    OVar2 = Swift::Optional::typeMetadataAccessor();
    if (uVar4 < 0x40) {
      _swift_getTupleTypeLayout3
                (auStack_e0,puVar1,&DAT_100c672f8,
                 *(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40);
      puStack_40 = &DAT_100c672f8;
      local_38 = &DAT_100c672f8;
      local_48 = auStack_e0;
      _swift_initEnumMetadataMultiPayload(param_1,0,5,&local_58);
    }
  }
  return;
}



/* Address: 0x100606fb8 | thunk_FUN_100606fbc */

byte * thunk_FUN_100606fbc(byte *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  size_t sVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  
  lVar13 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar14 = *(long *)(lVar8 + 0x40);
  uVar6 = (lVar14 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar6 <= lVar14 + 1U) {
    uVar6 = lVar14 + 1;
  }
  lVar16 = *(long *)(lVar13 + -8);
  uVar10 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  sVar12 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar2 = (uVar10 + 9 & (uVar10 ^ 0xffffffffffffffff)) + sVar12;
  if (uVar2 <= uVar6) {
    uVar2 = uVar6;
  }
  uVar11 = (uint)uVar10 | *(uint *)(lVar8 + 0x50) & 0xf8;
  if ((7 < uVar11 || ((*(uint *)(lVar8 + 0x50) | *(uint *)(lVar16 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar2 + 1) {
    uVar6 = (ulong)(uVar11 | 7);
    lVar8 = *(long *)param_2;
    *(long *)param_1 = lVar8;
    param_1 = (byte *)(lVar8 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    goto LAB_10060707c;
  }
  bVar4 = *(byte *)((long)param_2 + uVar2);
  uVar11 = (uint)bVar4;
  if (4 < bVar4) {
    uVar3 = 4;
    if (uVar2 < 4) {
      uVar3 = (uint)uVar2;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x000100607110;
      uVar11 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar11 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar11 = (uint)(uint3)*param_2;
    }
    else {
      uVar11 = *param_2;
    }
    if (uVar2 < 4) {
      uVar11 = (uVar11 | bVar4 - 5 << (ulong)(((uint)uVar2 & 3) << 3)) + 5;
    }
    else {
      uVar11 = uVar11 + 5;
    }
  }
joined_r0x000100607110:
  if ((int)uVar11 < 2) {
    if (uVar11 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1);
      param_1[lVar14] = *(byte *)(lVar14 + (long)param_2);
      param_1[uVar2] = 0;
      return param_1;
    }
    if (uVar11 == 1) {
      (**(code **)(lVar8 + 0x10))(param_1);
      puVar7 = (undefined8 *)((ulong)(param_1 + lVar14 + 7) & 0xfffffffffffffff8);
      puVar9 = (undefined8 *)((ulong)((long)param_2 + lVar14 + 7) & 0xfffffffffffffff8);
      *puVar7 = *puVar9;
      puVar7[1] = puVar9[1];
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar9 + 2);
      *(undefined1 *)((long)puVar7 + 0x11) = *(undefined1 *)((long)puVar9 + 0x11);
      param_1[uVar2] = 1;
LAB_10060707c:
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (uVar11 == 2) {
      uVar15 = ~uVar10;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[8] = (byte)param_2[2];
      pbVar5 = param_1 + uVar10 + 9;
      pbVar1 = (byte *)((long)param_2 + uVar10 + 9);
      pcVar17 = *(code **)(lVar16 + 0x30);
      _swift_retain();
      uVar6 = (ulong)pbVar1 & uVar15;
      (*pcVar17)(uVar6,1,lVar13);
      if ((int)uVar6 == 0) {
        (**(code **)(lVar16 + 0x10))((ulong)pbVar5 & uVar15,(ulong)pbVar1 & uVar15,lVar13);
        (**(code **)(lVar16 + 0x38))((ulong)pbVar5 & uVar15,0,1,lVar13);
      }
      else {
        _memcpy((void *)((ulong)pbVar5 & uVar15),(void *)((ulong)pbVar1 & uVar15),sVar12);
      }
      param_1[uVar2] = 2;
      return param_1;
    }
    if (uVar11 == 3) {
      *param_1 = (byte)*param_2;
      param_1[uVar2] = 3;
      return param_1;
    }
    if (uVar11 == 4) {
      *param_1 = (byte)*param_2;
      param_1[uVar2] = 4;
      return param_1;
    }
  }
  pbVar5 = _memcpy(param_1,param_2,uVar2 + 1);
  return pbVar5;
}



/* Address: 0x100606fbc | FUN_100606fbc */

byte * FUN_100606fbc(byte *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  uint uVar11;
  size_t sVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  
  lVar13 = *(long *)(param_3 + 0x18);
  lVar8 = *(long *)(*(long *)(param_3 + 0x20) + -8);
  lVar14 = *(long *)(lVar8 + 0x40);
  uVar6 = (lVar14 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar6 <= lVar14 + 1U) {
    uVar6 = lVar14 + 1;
  }
  lVar16 = *(long *)(lVar13 + -8);
  uVar10 = (ulong)*(uint *)(lVar16 + 0x50) & 0xff;
  sVar12 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar2 = (uVar10 + 9 & (uVar10 ^ 0xffffffffffffffff)) + sVar12;
  if (uVar2 <= uVar6) {
    uVar2 = uVar6;
  }
  uVar11 = (uint)uVar10 | *(uint *)(lVar8 + 0x50) & 0xf8;
  if ((7 < uVar11 || ((*(uint *)(lVar8 + 0x50) | *(uint *)(lVar16 + 0x50)) & 0x100000) != 0) ||
      0x18 < uVar2 + 1) {
    uVar6 = (ulong)(uVar11 | 7);
    lVar8 = *(long *)param_2;
    *(long *)param_1 = lVar8;
    param_1 = (byte *)(lVar8 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    goto LAB_10060707c;
  }
  bVar4 = *(byte *)((long)param_2 + uVar2);
  uVar11 = (uint)bVar4;
  if (4 < bVar4) {
    uVar3 = 4;
    if (uVar2 < 4) {
      uVar3 = (uint)uVar2;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x000100607110;
      uVar11 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar11 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar11 = (uint)(uint3)*param_2;
    }
    else {
      uVar11 = *param_2;
    }
    if (uVar2 < 4) {
      uVar11 = (uVar11 | bVar4 - 5 << (ulong)(((uint)uVar2 & 3) << 3)) + 5;
    }
    else {
      uVar11 = uVar11 + 5;
    }
  }
joined_r0x000100607110:
  if ((int)uVar11 < 2) {
    if (uVar11 == 0) {
      (**(code **)(lVar8 + 0x10))(param_1);
      param_1[lVar14] = *(byte *)(lVar14 + (long)param_2);
      param_1[uVar2] = 0;
      return param_1;
    }
    if (uVar11 == 1) {
      (**(code **)(lVar8 + 0x10))(param_1);
      puVar7 = (undefined8 *)((ulong)(param_1 + lVar14 + 7) & 0xfffffffffffffff8);
      puVar9 = (undefined8 *)((ulong)((long)param_2 + lVar14 + 7) & 0xfffffffffffffff8);
      *puVar7 = *puVar9;
      puVar7[1] = puVar9[1];
      *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar9 + 2);
      *(undefined1 *)((long)puVar7 + 0x11) = *(undefined1 *)((long)puVar9 + 0x11);
      param_1[uVar2] = 1;
LAB_10060707c:
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (uVar11 == 2) {
      uVar15 = ~uVar10;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[8] = (byte)param_2[2];
      pbVar5 = param_1 + uVar10 + 9;
      pbVar1 = (byte *)((long)param_2 + uVar10 + 9);
      pcVar17 = *(code **)(lVar16 + 0x30);
      _swift_retain();
      uVar6 = (ulong)pbVar1 & uVar15;
      (*pcVar17)(uVar6,1,lVar13);
      if ((int)uVar6 == 0) {
        (**(code **)(lVar16 + 0x10))((ulong)pbVar5 & uVar15,(ulong)pbVar1 & uVar15,lVar13);
        (**(code **)(lVar16 + 0x38))((ulong)pbVar5 & uVar15,0,1,lVar13);
      }
      else {
        _memcpy((void *)((ulong)pbVar5 & uVar15),(void *)((ulong)pbVar1 & uVar15),sVar12);
      }
      param_1[uVar2] = 2;
      return param_1;
    }
    if (uVar11 == 3) {
      *param_1 = (byte)*param_2;
      param_1[uVar2] = 3;
      return param_1;
    }
    if (uVar11 == 4) {
      *param_1 = (byte)*param_2;
      param_1[uVar2] = 4;
      return param_1;
    }
  }
  pbVar5 = _memcpy(param_1,param_2,uVar2 + 1);
  return pbVar5;
}



/* Address: 0x1006072b0 | FUN_1006072b0 */

uint FUN_1006072b0(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + -8) + 0x40);
  uVar1 = (lVar6 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= lVar6 + 1U) {
    uVar1 = lVar6 + 1;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar6 = lVar6 + 1;
  }
  uVar2 = lVar6 + ((ulong)*(byte *)(lVar8 + 0x50) + 9 &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  bVar3 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar3;
  if (4 < bVar3) {
    uVar7 = (uint)uVar2;
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) {
        return uVar4;
      }
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar3 - 5 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 5;
  }
  return uVar4;
}



/* Address: 0x100607384 | FUN_100607384 */

void FUN_100607384(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + -8) + 0x40);
  uVar1 = (lVar4 + 7U & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= lVar4 + 1U) {
    uVar1 = lVar4 + 1;
  }
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  uVar2 = lVar4 + ((ulong)*(byte *)(lVar5 + 0x50) + 9 &
                  ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff));
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (param_2 < 5) {
    *(char *)((long)param_1 + uVar2) = (char)param_2;
  }
  else {
    param_2 = param_2 - 5;
    uVar3 = (uint)uVar2;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + uVar2) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x05';
      if (uVar3 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar2) = 5;
    }
    if (3 < uVar3) {
      uVar3 = 4;
    }
    _bzero(param_1,uVar2);
    if ((int)uVar3 < 3) {
      if (uVar3 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar3 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x10060749c | FUN_10060749c */

void FUN_10060749c(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x1006074a4 | FUN_1006074a4 */

void FUN_1006074a4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb769c);
  return;
}



/* Address: 0x1006074b0 | FUN_1006074b0 */

void FUN_1006074b0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb76f0);
  return;
}



/* Address: 0x1006074bc | FUN_1006074bc */

void FUN_1006074bc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 *local_40;
  undefined1 *local_38;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8);
    _swift_getTupleTypeLayout2(auStack_60,&DAT_100c67440,lVar1 + 0x40);
    local_40 = auStack_60;
    _swift_getTupleTypeLayout2(auStack_80,&DAT_100c67440,lVar1 + 0x40);
    local_38 = auStack_80;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_40);
  }
  return;
}



/* Address: 0x10060755c | FUN_10060755c */

long * FUN_10060755c(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = (ulong)*(uint *)(lVar4 + 0x50) & 0xff;
  lVar2 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  if ((7 < (uint)uVar5 || (*(uint *)(lVar4 + 0x50) & 0x100000) != 0) || 0x18 < lVar2 + 1U) {
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
  }
  bVar1 = *(byte *)((long)param_2 + lVar2);
  uVar7 = (uint)bVar1;
  if (1 < bVar1) {
    uVar9 = (uint)lVar2;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_10060763c;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar1 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_10060763c:
  uVar6 = ~uVar5;
  if (uVar7 == 1) {
    *param_1 = *(long *)param_2;
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & uVar6,(ulong)((long)param_2 + uVar5 + 8) & uVar6);
    *(undefined1 *)((long)param_1 + lVar2) = 1;
  }
  else {
    if (uVar7 != 0) {
      plVar3 = _memcpy(param_1,param_2,lVar2 + 1U);
      return plVar3;
    }
    *param_1 = *(long *)param_2;
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & uVar6,(ulong)((long)param_2 + uVar5 + 8) & uVar6);
    *(undefined1 *)((long)param_1 + lVar2) = 0;
  }
  return param_1;
}



/* Address: 0x1006076d0 | FUN_1006076d0 */

void FUN_1006076d0(uint *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  lVar1 = (uVar4 + 8 & (uVar4 ^ 0xffffffffffffffff)) + *(long *)(lVar3 + 0x40);
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar6 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = (uint)lVar1;
    uVar7 = 4;
    if (uVar5 < 4) {
      uVar7 = uVar5;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_100607760;
      uVar7 = (uint)(byte)*param_1;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*param_1;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*param_1;
    }
    else {
      uVar7 = *param_1;
    }
    uVar6 = uVar7 | bVar2 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar7;
    }
    uVar6 = uVar6 + 2;
  }
LAB_100607760:
  if (uVar6 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010060777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))((ulong)((long)param_1 + uVar4 + 8) & ~uVar4);
    return;
  }
  return;
}



/* Address: 0x100607784 | FUN_100607784 */

undefined8 * FUN_100607784(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)lVar1;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100607820;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_100607820:
  uVar6 = ~uVar5;
  if (uVar7 == 1) {
    *param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & uVar6,(ulong)((long)param_2 + uVar5 + 8) & uVar6);
    *(undefined1 *)((long)param_1 + lVar1) = 1;
  }
  else {
    if (uVar7 != 0) {
      puVar3 = _memcpy(param_1,param_2,lVar1 + 1);
      return puVar3;
    }
    *param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar4 + 0x10))
              ((long)param_1 + uVar5 + 8 & uVar6,(ulong)((long)param_2 + uVar5 + 8) & uVar6);
    *(undefined1 *)((long)param_1 + lVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1006078bc | FUN_1006078bc */

uint * FUN_1006078bc(uint *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  lVar1 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar7 = (uint)lVar1;
  bVar2 = *(byte *)((long)param_1 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_10060796c;
      uVar5 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_1;
    }
    else {
      uVar5 = *param_1;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_10060796c:
  uVar10 = ~uVar9;
  if (uVar4 < 2) {
    (**(code **)(lVar8 + 8))((ulong)((long)param_1 + uVar9 + 8) & uVar10,lVar6);
  }
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar4 = (uint)bVar2;
  if (1 < bVar2) {
    uVar5 = 4;
    if (uVar7 < 4) {
      uVar5 = uVar7;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100607a10;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar2 - 2 << (ulong)(uVar7 << 3 & 0x1f);
    if (3 < uVar7) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100607a10:
  if (uVar4 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar8 + 0x10))
              ((ulong)((long)param_1 + uVar9 + 8) & uVar10,
               (ulong)((long)param_2 + uVar9 + 8) & uVar10,lVar6);
    *(byte *)((long)param_1 + lVar1) = 1;
  }
  else {
    if (uVar4 != 0) {
      puVar3 = _memcpy(param_1,param_2,lVar1 + 1);
      return puVar3;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar8 + 0x10))
              ((ulong)((long)param_1 + uVar9 + 8) & uVar10,
               (ulong)((long)param_2 + uVar9 + 8) & uVar10,lVar6);
    *(byte *)((long)param_1 + lVar1) = 0;
  }
  return param_1;
}



/* Address: 0x100607ac8 | FUN_100607ac8 */

undefined8 * FUN_100607ac8(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  lVar1 = (uVar5 + 8 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar4 + 0x40);
  bVar2 = *(byte *)((long)param_2 + lVar1);
  uVar7 = (uint)bVar2;
  if (1 < bVar2) {
    uVar9 = (uint)lVar1;
    uVar8 = 4;
    if (uVar9 < 4) {
      uVar8 = uVar9;
    }
    if ((int)uVar8 < 2) {
      if (uVar8 == 0) goto LAB_100607b64;
      uVar8 = (uint)(byte)*param_2;
    }
    else if (uVar8 == 2) {
      uVar8 = (uint)(ushort)*param_2;
    }
    else if (uVar8 == 3) {
      uVar8 = (uint)(uint3)*param_2;
    }
    else {
      uVar8 = *param_2;
    }
    uVar7 = uVar8 | bVar2 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar7 = uVar8;
    }
    uVar7 = uVar7 + 2;
  }
LAB_100607b64:
  uVar6 = ~uVar5;
  if (uVar7 == 1) {
    *param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar4 + 0x20))
              ((long)param_1 + uVar5 + 8 & uVar6,(ulong)((long)param_2 + uVar5 + 8) & uVar6);
    *(undefined1 *)((long)param_1 + lVar1) = 1;
  }
  else {
    if (uVar7 != 0) {
      puVar3 = _memcpy(param_1,param_2,lVar1 + 1);
      return puVar3;
    }
    *param_1 = *(undefined8 *)param_2;
    (**(code **)(lVar4 + 0x20))
              ((long)param_1 + uVar5 + 8 & uVar6,(ulong)((long)param_2 + uVar5 + 8) & uVar6);
    *(undefined1 *)((long)param_1 + lVar1) = 0;
  }
  return param_1;
}


