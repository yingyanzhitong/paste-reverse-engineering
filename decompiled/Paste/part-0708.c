/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007ba090 | thunk_FUN_1007bf7f8 */

void thunk_FUN_1007bf7f8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      *(byte *)(param_1 + 6) = (((byte)(-param_2 >> 1) & 0x3f) + (char)param_2 * -0x40) * '\x02';
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Address: 0x1007ba094 | FUN_1007ba094 */

void FUN_1007ba094(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 1 | param_2 << 7;
  return;
}



/* Address: 0x1007ba0a8 | FUN_1007ba0a8 */

void FUN_1007ba0a8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007ba0b4 | FUN_1007ba0b4 */

void FUN_1007ba0b4(void)

{
  FUN_1007c0680(0,&DAT_100fe4b60,FUN_1007961c8);
  return;
}



/* Address: 0x1007ba0dc | FUN_1007ba0dc */

void FUN_1007ba0dc(void)

{
  FUN_1007ba0e4(0);
  return;
}



/* Address: 0x1007ba0e4 | FUN_1007ba0e4 */

void FUN_1007ba0e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fe4f18 == 0) {
    puVar1 = &DAT_100fe4b90;
    FUN_1000f8b08(&DAT_100fe4b90,&DAT_100c78180);
    uVar2 = 0xff;
    FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100fe4f18 = param_1;
    }
  }
  return;
}



/* Address: 0x1007ba16c | FUN_1007ba16c */

void FUN_1007ba16c(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  (*param_3)(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
             *(undefined1 *)(param_1 + 6),FUN_1007b8ba0,FUN_1007b8e2c);
  return;
}



/* Address: 0x1007ba1b4 | FUN_1007ba1b4 */

void FUN_1007ba1b4(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  uint in_w6;
  code *UNRECOVERED_JUMPTABLE_00;
  code *in_stack_00000000;
  
  if ((in_w6 >> 7 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007ba1e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  (*in_stack_00000000)();
                    /* WARNING: Could not recover jumptable at 0x0001007ba228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(in_x3,in_x4,in_x5,in_w6 & 0x7f);
  return;
}



/* Address: 0x1007ba22c | FUN_1007ba22c */

undefined8 * FUN_1007ba22c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  (*param_4)(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7,FUN_1007b8bdc,FUN_1007b8e4c);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Address: 0x1007ba2c4 | FUN_1007ba2c4 */

undefined8 * FUN_1007ba2c4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  
  uVar1 = *param_2;
  uVar7 = param_2[1];
  uVar2 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar9 = param_2[5];
  uVar13 = *(undefined1 *)(param_2 + 6);
  (*param_4)(uVar1,uVar7,uVar2,uVar8,uVar3,uVar9,uVar13,FUN_1007b8bdc,FUN_1007b8e4c);
  uVar4 = *param_1;
  uVar10 = param_1[1];
  uVar5 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar12 = param_1[5];
  *param_1 = uVar1;
  param_1[1] = uVar7;
  param_1[2] = uVar2;
  param_1[3] = uVar8;
  param_1[4] = uVar3;
  param_1[5] = uVar9;
  uVar14 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar13;
  (*param_4)(uVar4,uVar10,uVar5,uVar11,uVar6,uVar12,uVar14,FUN_1007b8ba0,FUN_1007b8e2c);
  return param_1;
}



/* Address: 0x1007ba38c | FUN_1007ba38c */

undefined8 * FUN_1007ba38c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  (*param_4)(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6,FUN_1007b8ba0,FUN_1007b8e2c);
  return param_1;
}



/* Address: 0x1007ba400 | FUN_1007ba400 */

void FUN_1007ba400(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007ba40c | FUN_1007ba40c */

undefined1  [16] FUN_1007ba40c(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  puVar1 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  uVar3 = *(ulong *)(param_1 + 0x10);
  local_58 = puVar1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar2.value);
  if (uVar3 < 0x40) {
    lVar5 = *(long *)(lVar5 + -8);
    _swift_getTupleTypeLayout2(auStack_78,&DAT_100c782e8,lVar5 + 0x40);
    local_50 = auStack_78;
    _swift_getTupleTypeLayout3(auStack_98,&DAT_100c782e8,lVar5 + 0x40,puVar1);
    local_48 = auStack_98;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_58);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = lVar5;
  return auVar6;
}



/* Address: 0x1007ba4c8 | FUN_1007ba4c8 */

void FUN_1007ba4c8(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar8 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  lVar7 = *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar1 = lVar7 + (uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff));
  uVar9 = (uVar1 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar5 = (uint)bVar2;
  if (2 < bVar2) {
    uVar4 = (uint)uVar1;
    uVar6 = 4;
    if (uVar4 < 4) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1007ba594;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar2 - 3 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 3;
  }
LAB_1007ba594:
  if ((uVar5 == 2) || (uVar5 == 1)) {
    uVar9 = (ulong)((long)param_1 + uVar3 + 8) & ~uVar3;
    uVar3 = uVar9;
    (**(code **)(lVar10 + 0x30))(uVar9,1,lVar8);
    if ((int)uVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007ba5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar10 + 8))(uVar9,lVar8);
      return;
    }
  }
  return;
}



/* Address: 0x1007ba5f8 | FUN_1007ba5f8 */

undefined8 * FUN_1007ba5f8(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t sVar4;
  int iVar5;
  byte bVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  void *pvVar15;
  uint uVar16;
  long lVar17;
  size_t sVar18;
  
  lVar12 = *(long *)(param_3 + 0x10);
  lVar17 = *(long *)(lVar12 + -8);
  uVar9 = (ulong)*(byte *)(lVar17 + 0x50);
  iVar5 = *(int *)(lVar17 + 0x54);
  sVar18 = *(size_t *)(lVar17 + 0x40);
  sVar4 = sVar18;
  if (iVar5 == 0) {
    sVar4 = sVar18 + 1;
  }
  uVar3 = (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + sVar4;
  uVar14 = (uVar3 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar14) {
    uVar3 = uVar14;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar6 = *(byte *)((long)param_2 + uVar3);
  uVar10 = (uint)bVar6;
  if (2 < bVar6) {
    uVar16 = (uint)uVar3;
    uVar11 = 4;
    if (uVar16 < 4) {
      uVar11 = uVar16;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007ba6d0;
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
    uVar10 = uVar11 | bVar6 - 3 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007ba6d0:
  uVar14 = ~uVar9;
  if (uVar10 == 2) {
    *param_1 = *(undefined8 *)param_2;
    pvVar13 = (void *)((long)param_1 + uVar9 + 8 & uVar14);
    pvVar15 = (void *)((ulong)((long)param_2 + uVar9 + 8) & uVar14);
    pvVar7 = pvVar15;
    (**(code **)(lVar17 + 0x30))(pvVar15,1,lVar12);
    if ((int)pvVar7 == 0) {
      (**(code **)(lVar17 + 0x20))(pvVar13,pvVar15,lVar12);
      (**(code **)(lVar17 + 0x38))(pvVar13,0,1,lVar12);
    }
    else {
      _memcpy(pvVar13,pvVar15,sVar4);
    }
    lVar12 = 7;
    if (iVar5 == 0) {
      lVar12 = 8;
    }
    *(undefined8 *)(sVar18 + lVar12 + (long)pvVar13 & 0xfffffffffffffff8) =
         *(undefined8 *)(sVar18 + lVar12 + (long)pvVar15 & 0xfffffffffffffff8);
    *(undefined1 *)((long)param_1 + uVar3) = 2;
  }
  else if (uVar10 == 1) {
    *param_1 = *(undefined8 *)param_2;
    uVar1 = (long)param_1 + uVar9 + 8;
    pbVar2 = (byte *)((long)param_2 + uVar9 + 8);
    uVar9 = (ulong)pbVar2 & uVar14;
    (**(code **)(lVar17 + 0x30))(uVar9,1,lVar12);
    if ((int)uVar9 == 0) {
      (**(code **)(lVar17 + 0x20))(uVar1 & uVar14,(ulong)pbVar2 & uVar14,lVar12);
      (**(code **)(lVar17 + 0x38))(uVar1 & uVar14,0,1,lVar12);
    }
    else {
      _memcpy((void *)(uVar1 & uVar14),(void *)((ulong)pbVar2 & uVar14),sVar4);
    }
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar10 != 0) {
      puVar8 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar8;
    }
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Address: 0x1007ba868 | FUN_1007ba868 */

uint * FUN_1007ba868(uint *param_1,uint *param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  void *pvVar9;
  byte bVar10;
  uint uVar11;
  size_t sVar12;
  long lVar13;
  void *pvVar14;
  ulong uVar15;
  void *pvVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar13 = *(long *)(param_3 + 0x10);
  lVar18 = *(long *)(lVar13 + -8);
  uVar20 = (ulong)*(byte *)(lVar18 + 0x50);
  iVar6 = *(int *)(lVar18 + 0x54);
  sVar12 = *(size_t *)(lVar18 + 0x40);
  sVar4 = sVar12;
  if (iVar6 == 0) {
    sVar4 = sVar12 + 1;
  }
  uVar3 = (uVar20 + 8 & (uVar20 ^ 0xffffffffffffffff)) + sVar4;
  uVar19 = (uVar3 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar3 <= uVar19) {
    uVar3 = uVar19;
  }
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  uVar17 = (uint)uVar3;
  bVar10 = *(byte *)((long)param_1 + uVar3);
  uVar11 = (uint)bVar10;
  if (2 < bVar10) {
    uVar5 = 4;
    if (uVar17 < 4) {
      uVar5 = uVar17;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1007ba974;
      uVar11 = (uint)(byte)*param_1;
    }
    else if (uVar5 == 2) {
      uVar11 = (uint)(ushort)*param_1;
    }
    else if (uVar5 == 3) {
      uVar11 = (uint)(uint3)*param_1;
    }
    else {
      uVar11 = *param_1;
    }
    if (uVar17 < 4) {
      uVar11 = (uVar11 | bVar10 - 3 << (ulong)(uVar17 << 3 & 0x1f)) + 3;
    }
    else {
      uVar11 = uVar11 + 3;
    }
  }
LAB_1007ba974:
  uVar19 = ~uVar20;
  if ((uVar11 == 2) || (uVar11 == 1)) {
    uVar15 = (ulong)((long)param_1 + uVar20 + 8) & uVar19;
    uVar7 = uVar15;
    (**(code **)(lVar18 + 0x30))(uVar15,1,lVar13);
    if ((int)uVar7 == 0) {
      (**(code **)(lVar18 + 8))(uVar15,lVar13);
    }
  }
  bVar10 = *(byte *)((long)param_2 + uVar3);
  uVar11 = (uint)bVar10;
  if (2 < bVar10) {
    uVar5 = 4;
    if (uVar17 < 4) {
      uVar5 = uVar17;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto joined_r0x0001007baa2c;
      uVar11 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar11 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar11 = (uint)(uint3)*param_2;
    }
    else {
      uVar11 = *param_2;
    }
    if (uVar17 < 4) {
      uVar11 = (uVar11 | bVar10 - 3 << (ulong)(uVar17 << 3 & 0x1f)) + 3;
    }
    else {
      uVar11 = uVar11 + 3;
    }
  }
joined_r0x0001007baa2c:
  if (uVar11 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    pvVar14 = (void *)((ulong)((long)param_1 + uVar20 + 8) & uVar19);
    pvVar16 = (void *)((ulong)((long)param_2 + uVar20 + 8) & uVar19);
    pvVar9 = pvVar16;
    (**(code **)(lVar18 + 0x30))(pvVar16,1,lVar13);
    if ((int)pvVar9 == 0) {
      (**(code **)(lVar18 + 0x20))(pvVar14,pvVar16,lVar13);
      (**(code **)(lVar18 + 0x38))(pvVar14,0,1,lVar13);
    }
    else {
      _memcpy(pvVar14,pvVar16,sVar4);
    }
    lVar13 = 7;
    if (iVar6 == 0) {
      lVar13 = 8;
    }
    *(undefined8 *)(sVar12 + lVar13 + (long)pvVar14 & 0xfffffffffffffff8) =
         *(undefined8 *)(sVar12 + lVar13 + (long)pvVar16 & 0xfffffffffffffff8);
    bVar10 = 2;
  }
  else {
    if (uVar11 != 1) {
      if (uVar11 == 0) {
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(byte *)((long)param_1 + uVar3) = 0;
        return param_1;
      }
      puVar8 = _memcpy(param_1,param_2,uVar3 + 1);
      return puVar8;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    pbVar1 = (byte *)((long)param_1 + uVar20 + 8);
    pbVar2 = (byte *)((long)param_2 + uVar20 + 8);
    uVar20 = (ulong)pbVar2 & uVar19;
    (**(code **)(lVar18 + 0x30))(uVar20,1,lVar13);
    if ((int)uVar20 == 0) {
      (**(code **)(lVar18 + 0x20))((ulong)pbVar1 & uVar19,(ulong)pbVar2 & uVar19,lVar13);
      (**(code **)(lVar18 + 0x38))((ulong)pbVar1 & uVar19,0,1,lVar13);
      bVar10 = 1;
    }
    else {
      _memcpy((void *)((ulong)pbVar1 & uVar19),(void *)((ulong)pbVar2 & uVar19),sVar4);
      bVar10 = 1;
    }
  }
  *(byte *)((long)param_1 + uVar3) = bVar10;
  return param_1;
}



/* Address: 0x1007babe8 | FUN_1007babe8 */

int FUN_1007babe8(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar1 = lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
  uVar9 = (uVar1 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  uVar4 = 0xfc - (1U >> (ulong)(((uint)uVar1 & 3) << 3));
  if (3 < (uint)uVar1) {
    uVar4 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar4) goto LAB_1007bacdc;
  uVar9 = uVar1 + 1;
  uVar8 = (uint)uVar9;
  uVar3 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar10 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar4 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar10 < 0x100) {
      if (uVar10 < 2) goto LAB_1007bacdc;
      goto LAB_1007bac68;
    }
    if (uVar10 >> 0x10 == 0) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar9);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar9);
    }
  }
  else {
LAB_1007bac68:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar9);
  }
  if (uVar10 != 0) {
    uVar2 = 0;
    if (uVar8 < 4) {
      uVar2 = uVar10 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar8 != 0) {
      uVar3 = 4;
      if (uVar8 < 4) {
        uVar3 = uVar8;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar9 = (ulong)(byte)*param_1;
        }
        else {
          uVar9 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar9 = (ulong)(uint3)*param_1;
      }
      else {
        uVar9 = (ulong)*param_1;
      }
    }
    return uVar4 + ((uint)uVar9 | uVar2) + 1;
  }
LAB_1007bacdc:
  iVar5 = 0x100 - (uint)*(byte *)((long)param_1 + uVar1);
  if (uVar4 <= (*(byte *)((long)param_1 + uVar1) ^ 0xff)) {
    iVar5 = 0;
  }
  return iVar5;
}



/* Address: 0x1007bad44 | FUN_1007bad44 */

void FUN_1007bad44(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  ulong uVar4;
  undefined2 uVar5;
  uint uVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar4 = lVar9 + ((ulong)*(byte *)(lVar8 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff));
  uVar2 = (uVar4 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  uVar6 = 0xfc - (1U >> (ulong)(((uint)uVar4 & 3) << 3));
  if (3 < (uint)uVar4) {
    uVar6 = 0xfc;
  }
  sVar3 = uVar4 + 1;
  uVar11 = (uint)sVar3;
  if (uVar6 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar11 << 3 & 0x1f))) - uVar6 >> (ulong)(uVar11 << 3 & 0x1f)
            ) + 1;
    bVar10 = 2;
    if (0xffff < uVar1) {
      bVar10 = 4;
    }
    if (uVar1 < 0x100) {
      bVar10 = 1 < uVar1;
    }
    bVar7 = 1;
    if (uVar11 < 4) {
      bVar7 = bVar10;
    }
  }
  else {
    bVar7 = 0;
  }
  if (uVar6 < param_2) {
    param_2 = param_2 + ~uVar6;
    if (uVar11 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar6 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar5 = (undefined2)uVar6;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar6 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar12;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar12;
    }
  }
  else {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x1007baf38 | FUN_1007baf38 */

uint FUN_1007baf38(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar2 = lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                  ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
  uVar1 = (uVar2 + 7 & 0xfffffffffffffff8) + 8;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar3 = *(byte *)((long)param_1 + uVar2);
  uVar4 = (uint)bVar3;
  if (2 < bVar3) {
    uVar8 = (uint)uVar2;
    uVar5 = 4;
    if (uVar8 < 4) {
      uVar5 = uVar8;
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
    uVar4 = uVar5 | bVar3 - 3 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 3;
  }
  return uVar4;
}



/* Address: 0x1007baffc | FUN_1007baffc */

void FUN_1007baffc(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 8 & ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff)
  ;
  if (param_2 < 3) {
    lVar5 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar4 = lVar5 + uVar4;
    uVar1 = (uVar4 + 7 & 0xfffffffffffffff8) + 8;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    lVar5 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar4 = lVar5 + uVar4;
    uVar1 = (uVar4 + 7 & 0xfffffffffffffff8) + 8;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if (uVar4 < 9) {
      uVar4 = 8;
    }
    param_2 = param_2 - 3;
    uVar2 = (uint)uVar4;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x03';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1,uVar4);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007bb138 | FUN_1007bb138 */

void FUN_1007bb138(undefined8 *param_1)

{
  FUN_1007bb148(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1007bb148 | FUN_1007bb148 */

void FUN_1007bb148(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (-1 < (long)param_3) {
    FUN_100004550();
    return;
  }
  FUN_100004550();
  _swift_errorRelease(param_3 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x1007bb174 | FUN_1007bb174 */

undefined8 * FUN_1007bb174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[2];
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  FUN_1007bb148(uVar3,uVar1,uVar2);
  return param_1;
}



/* Address: 0x1007bb1b4 | FUN_1007bb1b4 */

int FUN_1007bb1b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)(param_1 + 4) & 7) << 1) ^
          0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007bb210 | FUN_1007bb210 */

void FUN_1007bb210(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 1 & 0x3f | (-param_2 & 0x7f) << 6);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1007bb268 | FUN_1007bb268 */

void FUN_1007bb268(long param_1,long param_2)

{
  *(ulong *)(param_1 + 0x10) = *(ulong *)(param_1 + 0x10) & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x1007bb27c | FUN_1007bb27c */

undefined * FUN_1007bb27c(void)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_1007bb2b0(0);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007bb288 | FUN_1007bb288 */

void FUN_1007bb288(void)

{
  FUN_1007bb2b0(0);
  return;
}



/* Address: 0x1007bb2b0 | FUN_1007bb2b0 */

void FUN_1007bb2b0(long param_1)

{
  undefined *puVar1;
  
  if (DAT_100fe50a0 == 0) {
    puVar1 = &DAT_100fe50a8;
    FUN_1000f8b08(&DAT_100fe50a8,&DAT_100c783e8);
    FUN_100793c60();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fe50a0 = param_1;
    }
  }
  return;
}



/* Address: 0x1007bb310 | FUN_1007bb310 */

undefined * FUN_1007bb310(void)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_1007bb344(0);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007bb31c | FUN_1007bb31c */

void FUN_1007bb31c(void)

{
  FUN_1007bb344(0);
  return;
}



/* Address: 0x1007bb344 | FUN_1007bb344 */

void FUN_1007bb344(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  if (DAT_100fe50b0 == 0) {
    lVar1 = 0xff;
    FUN_1007bb2b0();
    puVar2 = &DAT_100fdfb40;
    FUN_1000f8b08(&DAT_100fdfb40,&DAT_100c74390);
    _swift_getTupleTypeMetadata2(param_1,lVar1,puVar2,0,0);
    if (lVar1 == 0) {
      DAT_100fe50b0 = param_1;
    }
  }
  return;
}



/* Address: 0x1007bb3bc | thunk_FUN_1007c0464 */

void thunk_FUN_1007c0464(void)

{
  FUN_1007c0464();
  return;
}



/* Address: 0x1007bb3c0 | FUN_1007bb3c0 */

void FUN_1007bb3c0(undefined8 *param_1)

{
  FUN_1007b8df8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1007bb3d0 | thunk_FUN_1007c04ac */

void thunk_FUN_1007c04ac(void)

{
  FUN_1007c04ac();
  return;
}



/* Address: 0x1007bb3d4 | thunk_FUN_1007c0500 */

void thunk_FUN_1007c0500(void)

{
  FUN_1007c0500();
  return;
}



/* Address: 0x1007bb3d8 | thunk_FUN_100094784 */

int thunk_FUN_100094784(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007bb3dc | thunk_FUN_1000947cc */

void thunk_FUN_1000947cc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1007bb3e0 | FUN_1007bb3e0 */

undefined1  [16] FUN_1007bb3e0(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_58 [32];
  undefined *local_38;
  undefined1 *local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c78300;
  uVar3 = *(ulong *)(param_1 + 0x18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    _swift_getTupleTypeLayout3
              (auStack_58,&DAT_100c782e8,*(long *)(lVar2 + -8) + 0x40,&DAT_100c78300);
    puStack_28 = &DAT_100c78458;
    local_30 = auStack_58;
    _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x1007bb478 | FUN_1007bb478 */

long FUN_1007bb478(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(*(long *)(*(long *)(param_3 + 0x18) + -8) + 0x50) & 0xf8;
  lVar2 = *param_2;
  *param_1 = lVar2;
  _swift_retain(lVar2);
  return lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8);
}



/* Address: 0x1007bb4c0 | FUN_1007bb4c0 */

void FUN_1007bb4c0(int *param_1,long param_2)

{
  undefined1 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar10 = *(long *)(param_2 + 0x18);
  lVar12 = *(long *)(lVar10 + -8);
  uVar6 = (ulong)*(byte *)(lVar12 + 0x50);
  lVar9 = *(long *)(lVar12 + 0x40);
  if (*(int *)(lVar12 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  uVar11 = (lVar9 + 7 + (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
  if (uVar11 < 0x1a) {
    uVar11 = 0x19;
  }
  bVar2 = *(byte *)((long)param_1 + uVar11);
  uVar8 = (uint)bVar2;
  if (2 < bVar2) {
    if ((uVar11 & 0xfffffff8) == 0) {
      uVar8 = CONCAT11(bVar2,(char)*param_1) - 0x2fd;
    }
    else {
      uVar8 = *param_1 + 3;
    }
  }
  if (uVar8 == 2) {
    FUN_1007b8e2c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(char)param_1[4],
                  *(undefined1 *)((long)param_1 + 0x11));
    return;
  }
  if (uVar8 == 1) {
    uVar11 = (long)param_1 + uVar6 + 8 & ~uVar6;
    uVar6 = uVar11;
    (**(code **)(lVar12 + 0x30))(uVar11,1,lVar10);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar12 + 8))(uVar11,lVar10);
    }
    puVar7 = (undefined8 *)(lVar9 + 7 + uVar11 & 0xfffffffffffffff8);
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar1 = *(undefined1 *)(puVar7 + 3);
  }
  else {
    uVar3 = *(undefined8 *)param_1;
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar5 = *(undefined8 *)(param_1 + 4);
    uVar1 = (undefined1)param_1[6];
  }
  FUN_1007b8ba0(uVar3,uVar4,uVar5,uVar1);
  return;
}



/* Address: 0x1007bb5e0 | FUN_1007bb5e0 */

undefined8 * FUN_1007bb5e0(undefined8 *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  undefined1 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  size_t sVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined8 uVar16;
  void *pvVar17;
  long lVar18;
  undefined8 *puVar19;
  
  lVar12 = *(long *)(param_3 + 0x18);
  lVar18 = *(long *)(lVar12 + -8);
  uVar8 = (ulong)*(byte *)(lVar18 + 0x50);
  sVar11 = *(size_t *)(lVar18 + 0x40);
  if (*(int *)(lVar18 + 0x54) == 0) {
    sVar11 = sVar11 + 1;
  }
  lVar1 = sVar11 + 7;
  uVar2 = (lVar1 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
  if (uVar2 < 0x1a) {
    uVar2 = 0x19;
  }
  bVar4 = *(byte *)((long)param_2 + uVar2);
  uVar10 = (uint)bVar4;
  if (2 < bVar4) {
    if ((uVar2 & 0xfffffff8) == 0) {
      uVar10 = CONCAT11(bVar4,(char)*param_2) - 0x2fd;
    }
    else {
      uVar10 = *param_2 + 3;
    }
  }
  uVar14 = *(undefined8 *)param_2;
  if (uVar10 == 2) {
    uVar13 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined1 *)((long)param_2 + 0x11);
    iVar5 = param_2[4];
    FUN_1007b8e4c(uVar14,uVar13,(char)iVar5,uVar3);
    *param_1 = uVar14;
    param_1[1] = uVar13;
    *(char *)(param_1 + 2) = (char)iVar5;
    uVar7 = 2;
    *(undefined1 *)((long)param_1 + 0x11) = uVar3;
  }
  else if (uVar10 == 1) {
    *param_1 = uVar14;
    pvVar15 = (void *)((long)param_1 + uVar8 + 8 & ~uVar8);
    pvVar17 = (void *)((long)param_2 + uVar8 + 8 & ~uVar8);
    pvVar6 = pvVar17;
    (**(code **)(lVar18 + 0x30))(pvVar17,1,lVar12);
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar18 + 0x10))(pvVar15,pvVar17,lVar12);
      (**(code **)(lVar18 + 0x38))(pvVar15,0,1,lVar12);
    }
    else {
      _memcpy(pvVar15,pvVar17,sVar11);
    }
    puVar19 = (undefined8 *)(lVar1 + (long)pvVar15 & 0xfffffffffffffff8);
    puVar9 = (undefined8 *)(lVar1 + (long)pvVar17 & 0xfffffffffffffff8);
    uVar14 = *puVar9;
    uVar13 = puVar9[1];
    uVar16 = puVar9[2];
    uVar3 = *(undefined1 *)(puVar9 + 3);
    FUN_1007b8bdc(uVar14,uVar13,uVar16,uVar3);
    *puVar19 = uVar14;
    puVar19[1] = uVar13;
    puVar19[2] = uVar16;
    uVar7 = 1;
    *(undefined1 *)(puVar19 + 3) = uVar3;
  }
  else {
    uVar13 = *(undefined8 *)(param_2 + 2);
    uVar16 = *(undefined8 *)(param_2 + 4);
    iVar5 = param_2[6];
    FUN_1007b8bdc(uVar14,uVar13,uVar16,(char)iVar5);
    uVar7 = 0;
    *param_1 = uVar14;
    param_1[1] = uVar13;
    param_1[2] = uVar16;
    *(char *)(param_1 + 3) = (char)iVar5;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar7;
  return param_1;
}



/* Address: 0x1007bb7b8 | FUN_1007bb7b8 */

int * FUN_1007bb7b8(int *param_1,int *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  long lVar13;
  undefined8 uVar14;
  void *pvVar15;
  ulong uVar16;
  undefined8 uVar17;
  void *pvVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  ulong uVar22;
  
  if (param_1 != param_2) {
    lVar13 = *(long *)(param_3 + 0x18);
    lVar19 = *(long *)(lVar13 + -8);
    uVar21 = (ulong)*(byte *)(lVar19 + 0x50);
    sVar12 = *(size_t *)(lVar19 + 0x40);
    if (*(int *)(lVar19 + 0x54) == 0) {
      sVar12 = sVar12 + 1;
    }
    lVar1 = sVar12 + 7;
    uVar2 = (lVar1 + (uVar21 + 8 & (uVar21 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
    if (uVar2 < 0x1a) {
      uVar2 = 0x19;
    }
    bVar4 = *(byte *)((long)param_1 + uVar2);
    uVar10 = (uint)bVar4;
    if (2 < bVar4) {
      if ((uVar2 & 0xfffffff8) == 0) {
        uVar10 = CONCAT11(bVar4,(char)*param_1) - 0x2fd;
      }
      else {
        uVar10 = *param_1 + 3;
      }
    }
    uVar22 = ~uVar21;
    if (uVar10 == 2) {
      FUN_1007b8e2c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(char)param_1[4],
                    *(undefined1 *)((long)param_1 + 0x11));
    }
    else {
      if (uVar10 == 1) {
        uVar16 = (long)param_1 + uVar21 + 8 & uVar22;
        uVar6 = uVar16;
        (**(code **)(lVar19 + 0x30))(uVar16,1,lVar13);
        if ((int)uVar6 == 0) {
          (**(code **)(lVar19 + 8))(uVar16,lVar13);
        }
        puVar11 = (undefined8 *)(lVar1 + uVar16 & 0xfffffffffffffff8);
        uVar17 = *puVar11;
        uVar14 = puVar11[1];
        uVar8 = puVar11[2];
        uVar3 = *(undefined1 *)(puVar11 + 3);
      }
      else {
        uVar17 = *(undefined8 *)param_1;
        uVar14 = *(undefined8 *)(param_1 + 2);
        uVar8 = *(undefined8 *)(param_1 + 4);
        uVar3 = (undefined1)param_1[6];
      }
      FUN_1007b8ba0(uVar17,uVar14,uVar8,uVar3);
    }
    bVar4 = *(byte *)((long)param_2 + uVar2);
    uVar10 = (uint)bVar4;
    if (2 < bVar4) {
      if ((uVar2 & 0xfffffff8) == 0) {
        uVar10 = CONCAT11(bVar4,(char)*param_2) - 0x2fd;
      }
      else {
        uVar10 = *param_2 + 3;
      }
    }
    uVar17 = *(undefined8 *)param_2;
    if (uVar10 == 2) {
      uVar14 = *(undefined8 *)(param_2 + 2);
      uVar3 = *(undefined1 *)((long)param_2 + 0x11);
      iVar5 = param_2[4];
      FUN_1007b8e4c(uVar17,uVar14,(char)iVar5,uVar3);
      *(undefined8 *)param_1 = uVar17;
      *(undefined8 *)(param_1 + 2) = uVar14;
      *(char *)(param_1 + 4) = (char)iVar5;
      uVar9 = 2;
      *(undefined1 *)((long)param_1 + 0x11) = uVar3;
    }
    else if (uVar10 == 1) {
      *(undefined8 *)param_1 = uVar17;
      pvVar15 = (void *)((long)param_1 + uVar21 + 8 & uVar22);
      pvVar18 = (void *)((long)param_2 + uVar21 + 8 & uVar22);
      pvVar7 = pvVar18;
      (**(code **)(lVar19 + 0x30))(pvVar18,1,lVar13);
      if ((int)pvVar7 == 0) {
        (**(code **)(lVar19 + 0x10))(pvVar15,pvVar18,lVar13);
        (**(code **)(lVar19 + 0x38))(pvVar15,0,1,lVar13);
      }
      else {
        _memcpy(pvVar15,pvVar18,sVar12);
      }
      puVar20 = (undefined8 *)(lVar1 + (long)pvVar15 & 0xfffffffffffffff8);
      puVar11 = (undefined8 *)(lVar1 + (long)pvVar18 & 0xfffffffffffffff8);
      uVar17 = *puVar11;
      uVar14 = puVar11[1];
      uVar8 = puVar11[2];
      uVar3 = *(undefined1 *)(puVar11 + 3);
      FUN_1007b8bdc(uVar17,uVar14,uVar8,uVar3);
      *puVar20 = uVar17;
      puVar20[1] = uVar14;
      puVar20[2] = uVar8;
      uVar9 = 1;
      *(undefined1 *)(puVar20 + 3) = uVar3;
    }
    else {
      uVar14 = *(undefined8 *)(param_2 + 2);
      uVar8 = *(undefined8 *)(param_2 + 4);
      iVar5 = param_2[6];
      FUN_1007b8bdc(uVar17,uVar14,uVar8,(char)iVar5);
      uVar9 = 0;
      *(undefined8 *)param_1 = uVar17;
      *(undefined8 *)(param_1 + 2) = uVar14;
      *(undefined8 *)(param_1 + 4) = uVar8;
      *(char *)(param_1 + 6) = (char)iVar5;
    }
    *(undefined1 *)((long)param_1 + uVar2) = uVar9;
  }
  return param_1;
}



/* Address: 0x1007bba50 | FUN_1007bba50 */

void FUN_1007bba50(undefined8 *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  int iVar3;
  byte bVar4;
  void *pvVar5;
  undefined1 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  void *pvVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar11 = *(long *)(param_3 + 0x18);
  lVar15 = *(long *)(lVar11 + -8);
  uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
  iVar3 = *(int *)(lVar15 + 0x54);
  sVar14 = *(size_t *)(lVar15 + 0x40);
  sVar2 = sVar14;
  if (iVar3 == 0) {
    sVar2 = sVar14 + 1;
  }
  uVar1 = ((uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + sVar2 + 7 & 0xfffffffffffffff8) + 0x19;
  if (uVar1 < 0x1a) {
    uVar1 = 0x19;
  }
  bVar4 = *(byte *)((long)param_2 + uVar1);
  uVar10 = (uint)bVar4;
  if (2 < bVar4) {
    if ((uVar1 & 0xfffffff8) == 0) {
      uVar10 = CONCAT11(bVar4,(char)*param_2) - 0x2fd;
    }
    else {
      uVar10 = *param_2 + 3;
    }
  }
  if (uVar10 == 2) {
    uVar16 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar16;
    *(short *)(param_1 + 2) = (short)param_2[4];
    uVar6 = 2;
  }
  else if (uVar10 == 1) {
    *param_1 = *(undefined8 *)param_2;
    pvVar12 = (void *)((long)param_1 + uVar7 + 8 & ~uVar7);
    pvVar13 = (void *)((long)param_2 + uVar7 + 8 & ~uVar7);
    pvVar5 = pvVar13;
    (**(code **)(lVar15 + 0x30))(pvVar13,1,lVar11);
    if ((int)pvVar5 == 0) {
      (**(code **)(lVar15 + 0x20))(pvVar12,pvVar13,lVar11);
      (**(code **)(lVar15 + 0x38))(pvVar12,0,1,lVar11);
    }
    else {
      _memcpy(pvVar12,pvVar13,sVar2);
    }
    lVar11 = 7;
    if (iVar3 == 0) {
      lVar11 = 8;
    }
    puVar8 = (undefined8 *)(sVar14 + lVar11 + (long)pvVar13 & 0xfffffffffffffff8);
    uVar17 = puVar8[1];
    uVar16 = *puVar8;
    uVar18 = *(undefined8 *)((long)puVar8 + 9);
    puVar9 = (undefined8 *)(sVar14 + lVar11 + (long)pvVar12 & 0xfffffffffffffff8);
    *(undefined8 *)((long)puVar9 + 0x11) = *(undefined8 *)((long)puVar8 + 0x11);
    *(undefined8 *)((long)puVar9 + 9) = uVar18;
    puVar9[1] = uVar17;
    *puVar9 = uVar16;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    uVar16 = *(undefined8 *)param_2;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    *param_1 = uVar16;
    uVar16 = *(undefined8 *)((long)param_2 + 9);
    *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
    *(undefined8 *)((long)param_1 + 9) = uVar16;
  }
  *(undefined1 *)((long)param_1 + uVar1) = uVar6;
  return;
}



/* Address: 0x1007bbbf4 | FUN_1007bbbf4 */

int * FUN_1007bbbf4(int *param_1,int *param_2,long param_3)

{
  ulong uVar1;
  size_t sVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  size_t sVar13;
  long lVar14;
  void *pvVar15;
  ulong uVar16;
  void *pvVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  if (param_1 != param_2) {
    lVar14 = *(long *)(param_3 + 0x18);
    lVar19 = *(long *)(lVar14 + -8);
    uVar20 = (ulong)*(byte *)(lVar19 + 0x50);
    uVar12 = uVar20 + 8 & (uVar20 ^ 0xffffffffffffffff);
    iVar3 = *(int *)(lVar19 + 0x54);
    sVar13 = *(size_t *)(lVar19 + 0x40);
    sVar2 = sVar13;
    if (iVar3 == 0) {
      sVar2 = sVar13 + 1;
    }
    uVar1 = (sVar2 + 7 + uVar12 & 0xfffffffffffffff8) + 0x19;
    if (uVar1 < 0x1a) {
      uVar1 = 0x19;
    }
    bVar5 = *(byte *)((long)param_1 + uVar1);
    uVar9 = (uint)bVar5;
    if (2 < bVar5) {
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar9 = CONCAT11(bVar5,(char)*param_1) - 0x2fd;
      }
      else {
        uVar9 = *param_1 + 3;
      }
    }
    uVar18 = ~uVar20;
    if (uVar9 == 2) {
      FUN_1007b8e2c(*(undefined8 *)param_1,*(undefined8 *)(param_1 + 2),(char)param_1[4],
                    *(undefined1 *)((long)param_1 + 0x11));
    }
    else {
      if (uVar9 == 1) {
        uVar16 = (long)param_1 + uVar20 + 8 & uVar18;
        uVar6 = uVar16;
        (**(code **)(lVar19 + 0x30))(uVar16,1,lVar14);
        if ((int)uVar6 == 0) {
          (**(code **)(lVar19 + 8))(uVar16,lVar14);
        }
        puVar10 = (undefined8 *)(sVar2 + 7 + uVar16 & 0xfffffffffffffff8);
        uVar21 = *puVar10;
        uVar22 = puVar10[1];
        uVar8 = puVar10[2];
        uVar4 = *(undefined1 *)(puVar10 + 3);
      }
      else {
        uVar21 = *(undefined8 *)param_1;
        uVar22 = *(undefined8 *)(param_1 + 2);
        uVar8 = *(undefined8 *)(param_1 + 4);
        uVar4 = (undefined1)param_1[6];
      }
      FUN_1007b8ba0(uVar21,uVar22,uVar8,uVar4);
    }
    bVar5 = *(byte *)((long)param_2 + uVar1);
    uVar9 = (uint)bVar5;
    if (2 < bVar5) {
      if ((uVar1 & 0xfffffff8) == 0) {
        uVar9 = CONCAT11(bVar5,(char)*param_2) - 0x2fd;
      }
      else {
        uVar9 = *param_2 + 3;
      }
    }
    if (uVar9 == 2) {
      uVar21 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar21;
      *(short *)(param_1 + 4) = (short)param_2[4];
      *(undefined1 *)((long)param_1 + uVar1) = 2;
    }
    else if (uVar9 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      pvVar15 = (void *)((long)param_1 + uVar20 + 8 & uVar18);
      pvVar17 = (void *)((long)param_2 + uVar20 + 8 & uVar18);
      pvVar7 = pvVar17;
      (**(code **)(lVar19 + 0x30))(pvVar17,1,lVar14);
      if ((int)pvVar7 == 0) {
        (**(code **)(lVar19 + 0x20))(pvVar15,pvVar17,lVar14);
        (**(code **)(lVar19 + 0x38))(pvVar15,0,1,lVar14);
      }
      else {
        _memcpy(pvVar15,pvVar17,sVar2);
      }
      lVar14 = 7;
      if (iVar3 == 0) {
        lVar14 = 8;
      }
      puVar11 = (undefined8 *)(sVar13 + lVar14 + (long)pvVar15 & 0xfffffffffffffff8);
      puVar10 = (undefined8 *)(sVar13 + lVar14 + (long)pvVar17 & 0xfffffffffffffff8);
      uVar22 = puVar10[1];
      uVar21 = *puVar10;
      uVar8 = *(undefined8 *)((long)puVar10 + 9);
      *(undefined8 *)((long)puVar11 + 0x11) = *(undefined8 *)((long)puVar10 + 0x11);
      *(undefined8 *)((long)puVar11 + 9) = uVar8;
      puVar11[1] = uVar22;
      *puVar11 = uVar21;
      uVar12 = (uVar12 + sVar2 + 7 & 0xfffffffffffffff8) + 0x19;
      if (uVar12 < 0x1a) {
        uVar12 = 0x19;
      }
      *(undefined1 *)((long)param_1 + uVar12) = 1;
    }
    else {
      uVar21 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar21;
      uVar21 = *(undefined8 *)((long)param_2 + 9);
      *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
      *(undefined8 *)((long)param_1 + 9) = uVar21;
      *(undefined1 *)((long)param_1 + uVar1) = 0;
    }
  }
  return param_1;
}



/* Address: 0x1007bbe8c | FUN_1007bbe8c */

int FUN_1007bbe8c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar1 = (lVar5 + ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar1 < 0x1a) {
    uVar1 = 0x19;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    lVar5 = uVar1 + 1;
    uVar6 = (uint)lVar5;
    uVar8 = 2;
    uVar7 = uVar8;
    if (uVar6 < 4) {
      uVar7 = (param_2 + 0xff02 >> 0x10) + 1;
    }
    if (0xffff < uVar7) {
      uVar8 = 4;
    }
    if (uVar7 < 0x100) {
      uVar8 = 1;
    }
    uVar2 = 0;
    if (1 < uVar7) {
      uVar2 = uVar8;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar8 = (uint)*(byte *)((long)param_1 + lVar5), *(byte *)((long)param_1 + lVar5) != 0))
      goto LAB_1007bbf40;
    }
    else if (uVar2 == 2) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar5);
      if (*(ushort *)((long)param_1 + lVar5) != 0) {
LAB_1007bbf40:
        uVar8 = uVar8 - 1 << (ulong)((uVar6 & 3) << 3);
        if (uVar6 < 4) {
          uVar7 = (uint)(ushort)*param_1;
        }
        else {
          uVar7 = *param_1;
          uVar8 = 0;
        }
        return (uVar7 | uVar8) + 0xfe;
      }
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar5);
      if (uVar8 != 0) goto LAB_1007bbf40;
    }
  }
  iVar3 = 0;
  if (2 < *(byte *)((long)param_1 + uVar1)) {
    iVar3 = (*(byte *)((long)param_1 + uVar1) ^ 0xff) + 1;
  }
  return iVar3;
}



/* Address: 0x1007bbf8c | FUN_1007bbf8c */

void FUN_1007bbf8c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  if (*(int *)(lVar6 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar1 = (lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar1 < 0x1a) {
    uVar1 = 0x19;
  }
  sVar2 = uVar1 + 1;
  if (param_3 < 0xfe) {
    uVar4 = 0;
  }
  else {
    uVar8 = 2;
    uVar3 = uVar8;
    if ((uint)sVar2 < 4) {
      uVar3 = (param_3 + 0xff02 >> 0x10) + 1;
    }
    if (0xffff < uVar3) {
      uVar8 = 4;
    }
    if (uVar3 < 0x100) {
      uVar8 = 1;
    }
    uVar4 = 0;
    if (1 < uVar3) {
      uVar4 = uVar8;
    }
  }
  if (param_2 < 0xfe) {
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar1) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    _bzero(param_1,sVar2);
    iVar5 = 1;
    if ((uint)sVar2 < 4) {
      iVar5 = (param_2 >> 0x10) + 1;
      *(short *)param_1 = (short)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar5;
      }
    }
    else if (uVar4 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar5;
    }
  }
  return;
}



/* Address: 0x1007bc0e8 | FUN_1007bc0e8 */

uint FUN_1007bc0e8(int *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar1 = (lVar5 + ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar1 < 0x1a) {
    uVar1 = 0x19;
  }
  bVar2 = *(byte *)((long)param_1 + uVar1);
  uVar3 = (uint)bVar2;
  if (2 < bVar2) {
    if ((uVar1 & 0xfffffff8) != 0) {
      return *param_1 + 3;
    }
    uVar3 = CONCAT11(bVar2,(char)*param_1) - 0x2fd;
  }
  return uVar3;
}



/* Address: 0x1007bc15c | FUN_1007bc15c */

void FUN_1007bc15c(uint *param_1,uint param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar5 = *(long *)(lVar4 + 0x40);
  if (*(int *)(lVar4 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar2 = (lVar5 + ((ulong)*(byte *)(lVar4 + 0x50) + 8 &
                   ((ulong)*(byte *)(lVar4 + 0x50) ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8)
          + 0x19;
  if (uVar2 < 0x1a) {
    uVar2 = 0x19;
  }
  if (param_2 < 3) {
    *(char *)((long)param_1 + uVar2) = (char)param_2;
  }
  else {
    param_2 = param_2 - 3;
    cVar1 = (char)(param_2 >> 8) + '\x03';
    uVar3 = param_2 & 0xff;
    if ((uVar2 & 0xfffffff8) != 0) {
      cVar1 = '\x03';
      uVar3 = param_2;
    }
    *(char *)((long)param_1 + uVar2) = cVar1;
    _bzero(param_1,uVar2);
    if ((int)uVar2 == 1) {
      *(char *)param_1 = (char)uVar3;
    }
    else {
      *param_1 = uVar3;
    }
  }
  return;
}



/* Address: 0x1007bc214 | FUN_1007bc214 */

void FUN_1007bc214(long param_1)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  long local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  FUN_100793c60();
  if (uVar3 < 0x40) {
    local_38 = *(long *)(lVar2 + -8) + 0x40;
    _swift_getTupleTypeLayout2(auStack_58,local_38,&DAT_100c78458);
    uVar3 = *(ulong *)(param_1 + 0x18);
    local_30 = auStack_58;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      _swift_getTupleTypeLayout2
                (auStack_78,*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40,&DAT_100c78300
                );
      local_28 = auStack_78;
      _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_38);
    }
  }
  return;
}



/* Address: 0x1007bc2c8 | FUN_1007bc2c8 */

void FUN_1007bc2c8(uint *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar13 = *(long *)(lVar3 + -8);
  uVar9 = *(ulong *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    uVar9 = uVar9 + 1;
  }
  uVar1 = (uVar9 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  lVar14 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar2 = (lVar12 + 7U & 0xfffffffffffffff8) + 0x19;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  bVar5 = *(byte *)((long)param_1 + uVar2);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar7 = (uint)uVar2;
    uVar11 = 4;
    if (uVar7 < 4) {
      uVar11 = uVar7;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007bc3ac;
      uVar11 = (uint)(byte)*param_1;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_1;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_1;
    }
    else {
      uVar11 = *param_1;
    }
    uVar10 = uVar11 | bVar5 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007bc3ac:
  if (uVar10 == 2) {
    puVar6 = param_1;
    (**(code **)(lVar14 + 0x30))(param_1,1,lVar4);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar14 + 8))(param_1,lVar4);
    }
    puVar8 = (undefined8 *)((ulong)((long)param_1 + lVar12 + 7) & 0xfffffffffffffff8);
    FUN_1007b8ba0(*puVar8,puVar8[1],puVar8[2],*(undefined1 *)(puVar8 + 3));
    return;
  }
  if (uVar10 != 1) {
    if ((uVar10 == 0) &&
       (puVar6 = param_1, (**(code **)(lVar13 + 0x30))(param_1,1,lVar3), (int)puVar6 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001007bc4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar13 + 8))(param_1,lVar3);
      return;
    }
    return;
  }
  puVar6 = param_1;
  (**(code **)(lVar13 + 0x30))(param_1,1,lVar3);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar13 + 8))(param_1,lVar3);
  }
  puVar8 = (undefined8 *)((ulong)((long)param_1 + uVar9 + 7) & 0xfffffffffffffff8);
  FUN_1007b8e2c(*puVar8,puVar8[1],*(undefined1 *)(puVar8 + 2),*(undefined1 *)((long)puVar8 + 0x11));
  return;
}



/* Address: 0x1007bc4c4 | FUN_1007bc4c4 */

void * FUN_1007bc4c4(void *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  uint *puVar6;
  void *pvVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  size_t sVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(param_3 + 0x18);
  lVar16 = *(long *)(lVar3 + -8);
  uVar12 = *(ulong *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = (uVar12 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar12) {
    uVar1 = uVar12;
  }
  lVar17 = *(long *)(lVar4 + -8);
  sVar14 = *(size_t *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    sVar14 = sVar14 + 1;
  }
  uVar2 = (sVar14 + 7 & 0xfffffffffffffff8) + 0x19;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  bVar5 = *(byte *)((long)param_2 + uVar2);
  uVar10 = (uint)bVar5;
  if (2 < bVar5) {
    uVar15 = (uint)uVar2;
    uVar11 = 4;
    if (uVar15 < 4) {
      uVar11 = uVar15;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1007bc5b0;
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
    uVar10 = uVar11 | bVar5 - 3 << (ulong)((uVar15 & 3) << 3);
    if (3 < uVar15) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 3;
  }
LAB_1007bc5b0:
  if (uVar10 == 2) {
    puVar6 = param_2;
    (**(code **)(lVar17 + 0x30))(param_2,1,lVar4);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar17 + 0x20))(param_1,param_2,lVar4);
      (**(code **)(lVar17 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      _memcpy(param_1,param_2,sVar14);
    }
    puVar9 = (undefined8 *)((long)param_1 + sVar14 + 7 & 0xfffffffffffffff8);
    puVar13 = (undefined8 *)((ulong)((long)param_2 + sVar14 + 7) & 0xfffffffffffffff8);
    uVar19 = puVar13[1];
    uVar18 = *puVar13;
    uVar20 = *(undefined8 *)((long)puVar13 + 9);
    *(undefined8 *)((long)puVar9 + 0x11) = *(undefined8 *)((long)puVar13 + 0x11);
    *(undefined8 *)((long)puVar9 + 9) = uVar20;
    puVar9[1] = uVar19;
    *puVar9 = uVar18;
    uVar8 = 2;
  }
  else {
    if (uVar10 != 1) {
      if (uVar10 != 0) {
        pvVar7 = _memcpy(param_1,param_2,uVar2 + 1);
        return pvVar7;
      }
      puVar6 = param_2;
      (**(code **)(lVar16 + 0x30))(param_2,1,lVar3);
      if ((int)puVar6 != 0) {
        _memcpy(param_1,param_2,uVar12);
        *(undefined1 *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
      (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar3);
      *(undefined1 *)((long)param_1 + uVar2) = 0;
      return param_1;
    }
    puVar6 = param_2;
    (**(code **)(lVar16 + 0x30))(param_2,1,lVar3);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar3);
      (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar3);
    }
    else {
      _memcpy(param_1,param_2,uVar12);
    }
    puVar9 = (undefined8 *)((long)param_1 + uVar12 + 7 & 0xfffffffffffffff8);
    puVar13 = (undefined8 *)((ulong)((long)param_2 + uVar12 + 7) & 0xfffffffffffffff8);
    uVar19 = puVar13[1];
    uVar18 = *puVar13;
    *(undefined2 *)(puVar9 + 2) = *(undefined2 *)(puVar13 + 2);
    puVar9[1] = uVar19;
    *puVar9 = uVar18;
    uVar8 = 1;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar8;
  return param_1;
}



/* Address: 0x1007bc780 | FUN_1007bc780 */

uint * FUN_1007bc780(uint *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  byte bVar7;
  undefined8 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  size_t sVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar5 = *(long *)(param_3 + 0x18);
  lVar14 = *(long *)(lVar4 + -8);
  uVar10 = *(ulong *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar1 = (uVar10 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar10) {
    uVar1 = uVar10;
  }
  lVar15 = *(long *)(lVar5 + -8);
  sVar12 = *(size_t *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    sVar12 = sVar12 + 1;
  }
  uVar2 = (sVar12 + 7 & 0xfffffffffffffff8) + 0x19;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  uVar13 = (uint)uVar2;
  bVar7 = *(byte *)((long)param_1 + uVar2);
  uVar9 = (uint)bVar7;
  if (bVar7 < 3) {
LAB_1007bc870:
    if (uVar9 == 2) goto LAB_1007bc918;
LAB_1007bc878:
    if (uVar9 == 1) {
      puVar6 = param_1;
      (**(code **)(lVar14 + 0x30))(param_1,1,lVar4);
      if ((int)puVar6 == 0) {
        (**(code **)(lVar14 + 8))(param_1,lVar4);
      }
      puVar8 = (undefined8 *)((ulong)((long)param_1 + uVar10 + 7) & 0xfffffffffffffff8);
      FUN_1007b8e2c(*puVar8,puVar8[1],*(undefined1 *)(puVar8 + 2),
                    *(undefined1 *)((long)puVar8 + 0x11));
    }
    else if ((uVar9 == 0) &&
            (puVar6 = param_1, (**(code **)(lVar14 + 0x30))(param_1,1,lVar4), (int)puVar6 == 0)) {
      (**(code **)(lVar14 + 8))(param_1,lVar4);
    }
  }
  else {
    uVar3 = 4;
    if (uVar13 < 4) {
      uVar3 = uVar13;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1007bc870;
      uVar9 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_1;
    }
    else {
      uVar9 = *param_1;
    }
    if (3 < uVar13) {
      uVar9 = uVar9 + 3;
      goto LAB_1007bc870;
    }
    uVar9 = (uVar9 | bVar7 - 3 << (ulong)(uVar13 << 3 & 0x1f)) + 3;
    if (uVar9 != 2) goto LAB_1007bc878;
LAB_1007bc918:
    puVar6 = param_1;
    (**(code **)(lVar15 + 0x30))(param_1,1,lVar5);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar15 + 8))(param_1,lVar5);
    }
    puVar8 = (undefined8 *)((ulong)((long)param_1 + sVar12 + 7) & 0xfffffffffffffff8);
    FUN_1007b8ba0(*puVar8,puVar8[1],puVar8[2],*(undefined1 *)(puVar8 + 3));
  }
  bVar7 = *(byte *)((long)param_2 + uVar2);
  uVar9 = (uint)bVar7;
  if (2 < bVar7) {
    uVar3 = 4;
    if (uVar13 < 4) {
      uVar3 = uVar13;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto joined_r0x0001007bc9cc;
      uVar9 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar9 = (uint)(uint3)*param_2;
    }
    else {
      uVar9 = *param_2;
    }
    if (uVar13 < 4) {
      uVar9 = (uVar9 | bVar7 - 3 << (ulong)(uVar13 << 3 & 0x1f)) + 3;
    }
    else {
      uVar9 = uVar9 + 3;
    }
  }
joined_r0x0001007bc9cc:
  if (uVar9 == 2) {
    puVar6 = param_2;
    (**(code **)(lVar15 + 0x30))(param_2,1,lVar5);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar5);
      (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar5);
    }
    else {
      _memcpy(param_1,param_2,sVar12);
    }
    puVar8 = (undefined8 *)((ulong)((long)param_1 + sVar12 + 7) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + sVar12 + 7) & 0xfffffffffffffff8);
    uVar17 = puVar11[1];
    uVar16 = *puVar11;
    uVar18 = *(undefined8 *)((long)puVar11 + 9);
    *(undefined8 *)((long)puVar8 + 0x11) = *(undefined8 *)((long)puVar11 + 0x11);
    *(undefined8 *)((long)puVar8 + 9) = uVar18;
    puVar8[1] = uVar17;
    *puVar8 = uVar16;
    bVar7 = 2;
  }
  else {
    if (uVar9 != 1) {
      if (uVar9 != 0) {
        puVar6 = _memcpy(param_1,param_2,uVar2 + 1);
        return puVar6;
      }
      puVar6 = param_2;
      (**(code **)(lVar14 + 0x30))(param_2,1,lVar4);
      if ((int)puVar6 != 0) {
        _memcpy(param_1,param_2,uVar10);
        *(byte *)((long)param_1 + uVar2) = 0;
        return param_1;
      }
      (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar4);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar4);
      *(byte *)((long)param_1 + uVar2) = 0;
      return param_1;
    }
    puVar6 = param_2;
    (**(code **)(lVar14 + 0x30))(param_2,1,lVar4);
    if ((int)puVar6 == 0) {
      (**(code **)(lVar14 + 0x20))(param_1,param_2,lVar4);
      (**(code **)(lVar14 + 0x38))(param_1,0,1,lVar4);
    }
    else {
      _memcpy(param_1,param_2,uVar10);
    }
    puVar8 = (undefined8 *)((ulong)((long)param_1 + uVar10 + 7) & 0xfffffffffffffff8);
    puVar11 = (undefined8 *)((ulong)((long)param_2 + uVar10 + 7) & 0xfffffffffffffff8);
    uVar17 = puVar11[1];
    uVar16 = *puVar11;
    *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar11 + 2);
    puVar8[1] = uVar17;
    *puVar8 = uVar16;
    bVar7 = 1;
  }
  *(byte *)((long)param_1 + uVar2) = bVar7;
  return param_1;
}



/* Address: 0x1007bcbb8 | FUN_1007bcbb8 */

int FUN_1007bcbb8(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar9 = (uVar6 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar9 <= uVar6) {
    uVar9 = uVar6;
  }
  lVar7 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar6 = (lVar5 + 7U & 0xfffffffffffffff8) + 0x19;
  if (uVar6 <= uVar9) {
    uVar6 = uVar9;
  }
  uVar3 = 0xfc - (1U >> (ulong)(((uint)uVar6 & 3) << 3));
  if (3 < (uint)uVar6) {
    uVar3 = 0xfc;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar3) goto LAB_1007bccb8;
  uVar9 = uVar6 + 1;
  uVar8 = (uint)uVar9;
  uVar2 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar10 = ((param_2 + ~(-1 << (ulong)(uVar2 & 0x1f))) - uVar3 >> (ulong)(uVar2 & 0x1f)) + 1;
    if (uVar10 < 0x100) {
      if (uVar10 < 2) goto LAB_1007bccb8;
      goto LAB_1007bcc44;
    }
    if (uVar10 >> 0x10 == 0) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar9);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar9);
    }
  }
  else {
LAB_1007bcc44:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar9);
  }
  if (uVar10 != 0) {
    uVar1 = 0;
    if (uVar8 < 4) {
      uVar1 = uVar10 - 1 << (ulong)(uVar2 & 0x1f);
    }
    if (uVar8 != 0) {
      uVar2 = 4;
      if (uVar8 < 4) {
        uVar2 = uVar8;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar9 = (ulong)(byte)*param_1;
        }
        else {
          uVar9 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar9 = (ulong)(uint3)*param_1;
      }
      else {
        uVar9 = (ulong)*param_1;
      }
    }
    return uVar3 + ((uint)uVar9 | uVar1) + 1;
  }
LAB_1007bccb8:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + uVar6);
  if (uVar3 <= (*(byte *)((long)param_1 + uVar6) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x1007bcd20 | FUN_1007bcd20 */

void FUN_1007bcd20(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined2 uVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar8 = *(ulong *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar8 = uVar8 + 1;
  }
  uVar2 = (uVar8 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar2 <= uVar8) {
    uVar2 = uVar8;
  }
  lVar9 = *(long *)(*(long *)(param_4 + 0x18) + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  if (*(int *)(lVar9 + 0x54) == 0) {
    lVar7 = lVar7 + 1;
  }
  uVar8 = (lVar7 + 7U & 0xfffffffffffffff8) + 0x19;
  if (uVar8 <= uVar2) {
    uVar8 = uVar2;
  }
  uVar5 = 0xfc - (1U >> (ulong)(((uint)uVar8 & 3) << 3));
  if (3 < (uint)uVar8) {
    uVar5 = 0xfc;
  }
  sVar3 = uVar8 + 1;
  uVar11 = (uint)sVar3;
  if (uVar5 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar11 << 3 & 0x1f))) - uVar5 >> (ulong)(uVar11 << 3 & 0x1f)
            ) + 1;
    bVar10 = 2;
    if (0xffff < uVar1) {
      bVar10 = 4;
    }
    if (uVar1 < 0x100) {
      bVar10 = 1 < uVar1;
    }
    bVar6 = 1;
    if (uVar11 < 4) {
      bVar6 = bVar10;
    }
  }
  else {
    bVar6 = 0;
  }
  if (uVar5 < param_2) {
    param_2 = param_2 + ~uVar5;
    if (uVar11 < 4) {
      iVar12 = (param_2 >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar5 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar4 = (undefined2)uVar5;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar5 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = param_2;
      iVar12 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar12;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar12;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar8) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x1007bcf20 | FUN_1007bcf20 */

uint FUN_1007bcf20(uint *param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar6 = *(ulong *)(lVar5 + 0x40);
  if (*(int *)(lVar5 + 0x54) == 0) {
    uVar6 = uVar6 + 1;
  }
  uVar1 = (uVar6 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar1 <= uVar6) {
    uVar1 = uVar6;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x18) + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar5 = lVar5 + 1;
  }
  uVar6 = (lVar5 + 7U & 0xfffffffffffffff8) + 0x19;
  if (uVar6 <= uVar1) {
    uVar6 = uVar1;
  }
  bVar2 = *(byte *)((long)param_1 + uVar6);
  uVar3 = (uint)bVar2;
  if (2 < bVar2) {
    uVar7 = (uint)uVar6;
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) {
        return uVar3;
      }
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar2 - 3 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 3;
  }
  return uVar3;
}



/* Address: 0x1007bcff0 | FUN_1007bcff0 */

void FUN_1007bcff0(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2 < 3) {
    lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    lVar5 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar4 = (lVar5 + 7U & 0xfffffffffffffff8) + 0x19;
    lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
    uVar6 = *(ulong *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      uVar6 = uVar6 + 1;
    }
    uVar1 = (uVar6 + 7 & 0xfffffffffffffff8) + 0x12;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    *(char *)((long)param_1 + uVar4) = (char)param_2;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
    uVar4 = *(ulong *)(lVar5 + 0x40);
    if (*(int *)(lVar5 + 0x54) == 0) {
      uVar4 = uVar4 + 1;
    }
    uVar6 = (uVar4 + 7 & 0xfffffffffffffff8) + 0x12;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    lVar3 = *(long *)(*(long *)(param_3 + 0x18) + -8);
    lVar5 = *(long *)(lVar3 + 0x40);
    if (*(int *)(lVar3 + 0x54) == 0) {
      lVar5 = lVar5 + 1;
    }
    uVar4 = (lVar5 + 7U & 0xfffffffffffffff8) + 0x19;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    param_2 = param_2 - 3;
    uVar2 = (uint)uVar4;
    if (uVar2 < 4) {
      *(char *)((long)param_1 + uVar4) = (char)(param_2 >> (ulong)(uVar2 << 3 & 0x1f)) + '\x03';
      if (uVar2 == 0) {
        return;
      }
      param_2 = param_2 & (-1 << (ulong)(uVar2 << 3 & 0x1f) ^ 0xffffffffU);
    }
    else {
      *(undefined1 *)((long)param_1 + uVar4) = 3;
    }
    if (3 < uVar2) {
      uVar2 = 4;
    }
    _bzero(param_1,uVar4);
    if ((int)uVar2 < 3) {
      if (uVar2 == 1) {
        *(char *)param_1 = (char)param_2;
      }
      else {
        *(short *)param_1 = (short)param_2;
      }
    }
    else if (uVar2 == 3) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + 2) = (char)(param_2 >> 0x10);
    }
    else {
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007bd158 | FUN_1007bd158 */

undefined * FUN_1007bd158(undefined8 *param_1)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_100793c60(0,*param_1);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007bd164 | FUN_1007bd164 */

void FUN_1007bd164(undefined8 *param_1)

{
  FUN_100793c60(0,*param_1);
  return;
}



/* Address: 0x1007bd190 | FUN_1007bd190 */

undefined * FUN_1007bd190(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    uVar1 = 0xff;
    FUN_100793c60(0xff,*param_1);
    puVar2 = &DAT_100fe4b90;
    FUN_1000f8b08(&DAT_100fe4b90,&DAT_100c78180);
    puVar3 = (undefined *)0x0;
    _swift_getTupleTypeMetadata2(0,uVar1,puVar2,0,0);
    return puVar3;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x1007bd200 | FUN_1007bd200 */

void FUN_1007bd200(void)

{
  Optional OVar1;
  undefined8 uVar2;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar2 = 0xff;
  FUN_1007c0680(0xff,&DAT_100fe4b60,FUN_1007961c8);
  _swift_getTupleTypeMetadata2(0,OVar1.value,uVar2,0,0);
  return;
}



/* Address: 0x1007bd254 | FUN_1007bd254 */

void FUN_1007bd254(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long local_50;
  long local_48;
  long local_40;
  undefined *puStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = 0x13f;
  uVar3 = uVar4;
  FUN_1007b8ee4(0x13f,uVar4,uVar1,uVar5);
  if (uVar3 < 0x40) {
    local_50 = *(long *)(lVar2 + -8) + 0x40;
    lVar2 = 0x13f;
    uVar3 = uVar4;
    FUN_1007b8ef0(0x13f,uVar4,uVar1,uVar5);
    if (uVar3 < 0x40) {
      local_48 = *(long *)(lVar2 + -8) + 0x40;
      lVar2 = 0x13f;
      FUN_1007b8efc(0x13f,uVar4,uVar1,uVar5);
      if (uVar4 < 0x40) {
        local_40 = *(long *)(lVar2 + -8) + 0x40;
        puStack_38 = &DAT_100c782e8;
        _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_50);
      }
    }
  }
  return;
}



/* Address: 0x1007bd32c | FUN_1007bd32c */

void FUN_1007bd32c(uint *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar15 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar15 + 0x50);
  lVar10 = *(long *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  uVar8 = (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) + lVar10;
  uVar14 = (uVar8 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar14 <= uVar8) {
    uVar14 = uVar8;
  }
  lVar16 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar16 + 0x50);
  lVar13 = *(long *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    lVar13 = lVar13 + 1;
  }
  uVar1 = (lVar13 + 7 + (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
  if (uVar1 <= uVar14) {
    uVar1 = uVar14;
  }
  if (uVar1 < 9) {
    uVar1 = 8;
  }
  bVar5 = *(byte *)((long)param_1 + uVar1);
  uVar11 = (uint)bVar5;
  if (3 < bVar5) {
    uVar9 = (uint)uVar1;
    uVar12 = 4;
    if (uVar9 < 4) {
      uVar12 = uVar9;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_1007bd434;
      uVar12 = (uint)(byte)*param_1;
    }
    else if (uVar12 == 2) {
      uVar12 = (uint)(ushort)*param_1;
    }
    else if (uVar12 == 3) {
      uVar12 = (uint)(uint3)*param_1;
    }
    else {
      uVar12 = *param_1;
    }
    uVar11 = uVar12 | bVar5 - 4 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar11 = uVar12;
    }
    uVar11 = uVar11 + 4;
  }
LAB_1007bd434:
  if ((int)uVar11 < 2) {
    uVar14 = ~uVar6;
    if (uVar11 != 0) {
      uVar14 = (ulong)((long)param_1 + uVar6 + 8) & uVar14;
      uVar6 = uVar14;
      (**(code **)(lVar15 + 0x30))(uVar14,1,lVar3);
      if ((int)uVar6 == 0) {
        (**(code **)(lVar15 + 8))(uVar14,lVar3);
      }
      puVar7 = (undefined8 *)(lVar10 + uVar14 + 7 & 0xfffffffffffffff8);
      FUN_1007b8e2c(*puVar7,puVar7[1],*(undefined1 *)(puVar7 + 2),
                    *(undefined1 *)((long)puVar7 + 0x11));
      return;
    }
    pbVar2 = (byte *)((long)param_1 + uVar6 + 8);
    uVar6 = (ulong)pbVar2 & uVar14;
    (**(code **)(lVar15 + 0x30))(uVar6,1,lVar3);
    if ((int)uVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001007bd480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 8))((ulong)pbVar2 & uVar14,lVar3);
      return;
    }
  }
  else if (uVar11 == 2) {
    uVar14 = (ulong)((long)param_1 + uVar8 + 8) & ~uVar8;
    uVar6 = uVar14;
    (**(code **)(lVar16 + 0x30))(uVar14,1,lVar4);
    if ((int)uVar6 == 0) {
      (**(code **)(lVar16 + 8))(uVar14,lVar4);
    }
    puVar7 = (undefined8 *)(lVar13 + 7 + uVar14 & 0xfffffffffffffff8);
    FUN_1007b8ba0(*puVar7,puVar7[1],puVar7[2],*(undefined1 *)(puVar7 + 3));
    return;
  }
  return;
}



/* Address: 0x1007bd55c | FUN_1007bd55c */

undefined8 * FUN_1007bd55c(undefined8 *param_1,uint *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  size_t sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  byte bVar9;
  void *pvVar10;
  undefined1 uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint uVar16;
  size_t sVar17;
  size_t sVar18;
  void *pvVar19;
  ulong uVar20;
  void *pvVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(param_3 + 0x18);
  lVar23 = *(long *)(lVar6 + -8);
  uVar12 = (ulong)*(byte *)(lVar23 + 0x50);
  iVar8 = *(int *)(lVar23 + 0x54);
  sVar18 = *(size_t *)(lVar23 + 0x40);
  sVar4 = sVar18;
  if (iVar8 == 0) {
    sVar4 = sVar18 + 1;
  }
  uVar14 = (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + sVar4;
  uVar20 = (uVar14 + 7 & 0xfffffffffffffff8) + 0x12;
  if (uVar20 <= uVar14) {
    uVar20 = uVar14;
  }
  lVar24 = *(long *)(lVar7 + -8);
  uVar14 = (ulong)*(byte *)(lVar24 + 0x50);
  sVar17 = *(size_t *)(lVar24 + 0x40);
  if (*(int *)(lVar24 + 0x54) == 0) {
    sVar17 = sVar17 + 1;
  }
  lVar1 = sVar17 + 7;
  uVar2 = (lVar1 + (uVar14 + 8 & (uVar14 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x19;
  if (uVar2 <= uVar20) {
    uVar2 = uVar20;
  }
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar9 = *(byte *)((long)param_2 + uVar2);
  uVar16 = (uint)bVar9;
  if (3 < bVar9) {
    uVar22 = (uint)uVar2;
    uVar5 = 4;
    if (uVar22 < 4) {
      uVar5 = uVar22;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1007bd688;
      uVar16 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar16 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar16 = (uint)(uint3)*param_2;
    }
    else {
      uVar16 = *param_2;
    }
    if (uVar22 < 4) {
      uVar16 = (uVar16 | bVar9 - 4 << (ulong)((uVar22 & 3) << 3)) + 4;
    }
    else {
      uVar16 = uVar16 + 4;
    }
  }
LAB_1007bd688:
  *param_1 = *(undefined8 *)param_2;
  if ((int)uVar16 < 2) {
    uVar20 = ~uVar12;
    if (uVar16 == 0) {
      uVar14 = (long)param_1 + uVar12 + 8;
      pbVar3 = (byte *)((long)param_2 + uVar12 + 8);
      uVar12 = (ulong)pbVar3 & uVar20;
      (**(code **)(lVar23 + 0x30))(uVar12,1,lVar6);
      if ((int)uVar12 == 0) {
        (**(code **)(lVar23 + 0x20))(uVar14 & uVar20,(ulong)pbVar3 & uVar20,lVar6);
        (**(code **)(lVar23 + 0x38))(uVar14 & uVar20,0,1,lVar6);
        uVar11 = 0;
      }
      else {
        _memcpy((void *)(uVar14 & uVar20),(void *)((ulong)pbVar3 & uVar20),sVar4);
        uVar11 = 0;
      }
    }
    else {
      pvVar19 = (void *)((long)param_1 + uVar12 + 8 & uVar20);
      pvVar21 = (void *)((ulong)((long)param_2 + uVar12 + 8) & uVar20);
      pvVar10 = pvVar21;
      (**(code **)(lVar23 + 0x30))(pvVar21,1,lVar6);
      if ((int)pvVar10 == 0) {
        (**(code **)(lVar23 + 0x20))(pvVar19,pvVar21,lVar6);
        (**(code **)(lVar23 + 0x38))(pvVar19,0,1,lVar6);
      }
      else {
        _memcpy(pvVar19,pvVar21,sVar4);
      }
      lVar6 = 7;
      if (iVar8 == 0) {
        lVar6 = 8;
      }
      puVar13 = (undefined8 *)(sVar18 + lVar6 + (long)pvVar21 & 0xfffffffffffffff8);
      uVar26 = puVar13[1];
      uVar25 = *puVar13;
      puVar15 = (undefined8 *)(sVar18 + lVar6 + (long)pvVar19 & 0xfffffffffffffff8);
      *(undefined2 *)(puVar15 + 2) = *(undefined2 *)(puVar13 + 2);
      puVar15[1] = uVar26;
      *puVar15 = uVar25;
      uVar11 = 1;
    }
  }
  else if (uVar16 == 2) {
    pvVar19 = (void *)((long)param_1 + uVar14 + 8 & ~uVar14);
    pvVar21 = (void *)((ulong)((long)param_2 + uVar14 + 8) & ~uVar14);
    pvVar10 = pvVar21;
    (**(code **)(lVar24 + 0x30))(pvVar21,1,lVar7);
    if ((int)pvVar10 == 0) {
      (**(code **)(lVar24 + 0x20))(pvVar19,pvVar21,lVar7);
      (**(code **)(lVar24 + 0x38))(pvVar19,0,1,lVar7);
    }
    else {
      _memcpy(pvVar19,pvVar21,sVar17);
    }
    puVar15 = (undefined8 *)(lVar1 + (long)pvVar21 & 0xfffffffffffffff8);
    uVar26 = puVar15[1];
    uVar25 = *puVar15;
    uVar27 = *(undefined8 *)((long)puVar15 + 9);
    puVar13 = (undefined8 *)(lVar1 + (long)pvVar19 & 0xfffffffffffffff8);
    *(undefined8 *)((long)puVar13 + 0x11) = *(undefined8 *)((long)puVar15 + 0x11);
    *(undefined8 *)((long)puVar13 + 9) = uVar27;
    puVar13[1] = uVar26;
    *puVar13 = uVar25;
    uVar11 = 2;
  }
  else {
    uVar11 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar2) = uVar11;
  return param_1;
}


