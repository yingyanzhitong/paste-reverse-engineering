/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10090822c | FUN_10090822c */

void FUN_10090822c(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_10090657c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100908250 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100908254 | FUN_100908254 */

void FUN_100908254(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100906730(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100908260 | FUN_100908260 */

bool FUN_100908260(long *param_1)

{
  long unaff_x20;
  
  return *param_1 == *(long *)(unaff_x20 + 0x18);
}



/* Address: 0x100908274 | FUN_100908274 */

void FUN_100908274(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100908284 | FUN_100908284 */

void FUN_100908284(undefined8 param_1,undefined8 param_2)

{
  _swift_getObjectType();
  FUN_10061cf14(2,0,param_1,param_2);
  return;
}



/* Address: 0x1009082bc | FUN_1009082bc */

void FUN_1009082bc(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1008fdeac();
    return;
  }
  return;
}



/* Address: 0x1009082d0 | FUN_1009082d0 */

void FUN_1009082d0(void)

{
  long unaff_x20;
  
  thunk_FUN_1008f1f44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009082dc | FUN_1009082dc */

undefined1  [16] FUN_1009082dc(void)

{
  return ZEXT816(0x100f14b70);
}



/* Address: 0x1009082ec | thunk_FUN_1009082f0 */

void thunk_FUN_1009082f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec9d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c843f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c843f0,&DAT_100f14b70);
  DAT_100fec9d8 = pTVar1;
  return;
}



/* Address: 0x1009082f0 | FUN_1009082f0 */

void FUN_1009082f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec9d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c843f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c843f0,&DAT_100f14b70);
  DAT_100fec9d8 = pTVar1;
  return;
}



/* Address: 0x100908330 | FUN_100908330 */

void FUN_100908330(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84458,param_1);
  return;
}



/* Address: 0x100908340 | thunk_FUN_1009080b4 */

void thunk_FUN_1009080b4(void)

{
  FUN_1009080b4();
  return;
}



/* Address: 0x100908344 | thunk_FUN_1009080b4 */

void thunk_FUN_1009080b4(void)

{
  FUN_1009080b4();
  return;
}



/* Address: 0x100908348 | thunk_FUN_100908138 */

void thunk_FUN_100908138(void)

{
  FUN_100908138();
  return;
}



/* Address: 0x10090834c | thunk_FUN_100904624 */

void thunk_FUN_100904624(void)

{
  FUN_100904624();
  return;
}



/* Address: 0x100908350 | thunk_FUN_100904608 */

void thunk_FUN_100904608(void)

{
  FUN_100904608();
  return;
}



/* Address: 0x100908354 | FUN_100908354 */

uint FUN_100908354(uint param_1)

{
  FUN_100908260();
  return param_1 & 1;
}



/* Address: 0x10090836c | thunk_FUN_100907490 */

void thunk_FUN_100907490(void)

{
  thunk_FUN_100907490();
  return;
}



/* Address: 0x100908370 | thunk_FUN_1002332a4 */

void thunk_FUN_1002332a4(void)

{
  thunk_FUN_1002332a4();
  return;
}



/* Address: 0x100908374 | thunk_FUN_10090815c */

void thunk_FUN_10090815c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100906a70(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100908378 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x10090837c | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100908380 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100908384 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100908388 | thunk_FUN_1008fe50c */

void thunk_FUN_1008fe50c(void)

{
  thunk_FUN_1008fe50c();
  return;
}



/* Address: 0x10090838c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100908390 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100908394 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100908398 | thunk_FUN_1009045f8 */

void thunk_FUN_1009045f8(void)

{
  FUN_1009045f8();
  return;
}



/* Address: 0x10090839c | FUN_10090839c */

bool FUN_10090839c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)(param_3 + -8);
  uVar6 = *(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_88 = (long)&local_a0 - uVar6;
  local_90 = local_88 - uVar6;
  local_98 = local_90 - uVar6;
  lVar7 = local_98 - uVar6;
  lVar3 = 0;
  local_a0 = lVar7;
  local_80 = param_4;
  local_78 = param_1;
  local_70 = param_2;
  FUN_100908624(0,param_3,param_4);
  lVar11 = *(long *)(lVar3 + -8);
  uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar6;
  lVar8 = lVar7 - uVar6;
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar3,lVar3,0,0);
  lVar14 = *(long *)(lVar4 + -8);
  lVar9 = lVar8 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)*(int *)(lVar4 + 0x30);
  pcVar10 = *(code **)(lVar11 + 0x10);
  (*pcVar10)(lVar9,local_78,lVar3);
  (*pcVar10)(lVar9 + lVar12,local_70,lVar3);
  lVar5 = lVar9;
  _swift_getEnumCaseMultiPayload(lVar9,lVar3);
  if ((int)lVar5 == 1) {
    (*pcVar10)(lVar7,lVar9,lVar3);
    lVar5 = lVar9 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar5,lVar3);
    lVar8 = local_68;
    lVar13 = local_90;
    if ((int)lVar5 != 1) {
LAB_1009085d0:
      (**(code **)(local_68 + 8))(lVar7,param_3);
      bVar2 = false;
      goto LAB_1009085f0;
    }
    pcVar10 = *(code **)(local_68 + 0x20);
    (*pcVar10)(local_90,lVar7,param_3);
    lVar5 = local_88;
    (*pcVar10)(local_88,lVar9 + lVar12,param_3);
    bVar2 = Swift::Equatable::___infix(lVar13,lVar5,param_3,local_80);
    pcVar10 = *(code **)(lVar8 + 8);
  }
  else {
    (*pcVar10)(lVar8,lVar9,lVar3);
    lVar5 = lVar9 + lVar12;
    _swift_getEnumCaseMultiPayload(lVar5,lVar3);
    lVar1 = local_68;
    lVar13 = local_a0;
    lVar7 = lVar8;
    if ((int)lVar5 == 1) goto LAB_1009085d0;
    pcVar10 = *(code **)(local_68 + 0x20);
    (*pcVar10)(local_a0,lVar8,param_3);
    lVar5 = local_98;
    (*pcVar10)(local_98,lVar9 + lVar12,param_3);
    bVar2 = Swift::Equatable::___infix(lVar13,lVar5,param_3,local_80);
    pcVar10 = *(code **)(lVar1 + 8);
  }
  (*pcVar10)(lVar5,param_3);
  (*pcVar10)(lVar13,param_3);
  lVar4 = lVar3;
  lVar14 = lVar11;
LAB_1009085f0:
  (**(code **)(lVar14 + 8))(lVar9,lVar4);
  return bVar2;
}



/* Address: 0x100908624 | FUN_100908624 */

void FUN_100908624(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100908630 | FUN_100908630 */

void FUN_100908630(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10090839c(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x10090863c | FUN_10090863c */

long * FUN_10090863c(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(ulong *)(lVar2 + 0x40);
  uVar3 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if ((7 < (uint)uVar3 || 0x18 < uVar5 + 1) || (*(uint *)(lVar2 + 0x50) & 0x100000) != 0) {
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
  }
  bVar1 = *(byte *)((long)param_2 + uVar5);
  uVar6 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = (uint)uVar5;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_10090870c;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar6 = uVar4 | bVar1 - 2 << (ulong)(((uint)uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar6 = uVar4;
    }
    uVar6 = uVar6 + 2;
  }
LAB_10090870c:
  (**(code **)(lVar2 + 0x10))(param_1);
  if (uVar6 == 1) {
    *(undefined1 *)((long)param_1 + uVar5) = 1;
  }
  else {
    *(undefined1 *)((long)param_1 + uVar5) = 0;
  }
  return param_1;
}



/* Address: 0x100908744 | FUN_100908744 */

long FUN_100908744(long param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar2 + 0x40);
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar6;
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1009087d8;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1009087d8:
  (**(code **)(lVar2 + 0x10))(param_1);
  *(bool *)(param_1 + lVar6) = uVar3 == 1;
  return param_1;
}



/* Address: 0x100908804 | FUN_100908804 */

uint * FUN_100908804(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (**(code **)(lVar7 + 8))(param_1,lVar4);
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar6;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_1009088b8;
      uVar3 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_2;
    }
    else {
      uVar3 = *param_2;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
LAB_1009088b8:
  (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar4);
  *(bool *)((long)param_1 + lVar6) = uVar2 == 1;
  return param_1;
}



/* Address: 0x1009088f0 | FUN_1009088f0 */

long FUN_1009088f0(long param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar6 = *(long *)(lVar2 + 0x40);
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar6;
    uVar4 = 4;
    if (uVar5 < 4) {
      uVar4 = uVar5;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100908984;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_100908984:
  (**(code **)(lVar2 + 0x20))(param_1);
  *(bool *)(param_1 + lVar6) = uVar3 == 1;
  return param_1;
}



/* Address: 0x1009089b0 | FUN_1009089b0 */

uint * FUN_1009089b0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar4 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (**(code **)(lVar7 + 8))(param_1,lVar4);
  bVar1 = *(byte *)((long)param_2 + lVar6);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)lVar6;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) goto LAB_100908a64;
      uVar3 = (uint)(byte)*param_2;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_2;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_2;
    }
    else {
      uVar3 = *param_2;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
LAB_100908a64:
  (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar4);
  *(bool *)((long)param_1 + lVar6) = uVar2 == 1;
  return param_1;
}



/* Address: 0x100908a9c | FUN_100908a9c */

int FUN_100908a9c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (param_2 < 0xff) goto LAB_100908b38;
  uVar5 = lVar6 + 1;
  uVar3 = (uint)uVar5;
  uVar4 = uVar3 << 3;
  if (uVar3 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar4 & 0x1f))) - 0xfe >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_100908b38;
      goto LAB_100908ac4;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_100908ac4:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar3 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar3 != 0) {
      uVar4 = 4;
      if (uVar3 < 4) {
        uVar4 = uVar3;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)*param_1;
      }
    }
    return ((uint)uVar5 | uVar1) + 0xff;
  }
LAB_100908b38:
  uVar4 = (uint)*(byte *)((long)param_1 + lVar6);
  iVar2 = 0;
  if (1 < uVar4) {
    iVar2 = (uVar4 ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x100908b94 | FUN_100908b94 */

void FUN_100908b94(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  lVar4 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  sVar1 = lVar4 + 1;
  uVar5 = (uint)sVar1;
  if (param_3 < 0xff) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfe >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xff) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + lVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x100908d2c | FUN_100908d2c */

void FUN_100908d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  long param_10,undefined4 param_11,undefined4 param_12,long param_13)

{
  __int64 _Var1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  __int64 local_68;
  
  lVar9 = *(long *)(param_6 + -8);
  lVar5 = (long)&local_90 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = lVar5 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = *(long *)(param_7 + -8);
  local_80 = param_10;
  uVar2 = *(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = lVar3 - uVar2;
  lVar7 = lVar6 - uVar2;
  lVar8 = lVar7 - uVar2;
  local_90 = param_8;
  local_88 = param_3;
  local_70 = param_1;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))(lVar3,param_2,param_5);
  uVar10 = *(undefined8 *)(param_13 + 8);
  Swift::BinaryInteger::_init(lVar8,lVar3,param_5,*(undefined8 *)(local_90 + 8),param_7,uVar10);
  (**(code **)(lVar9 + 0x10))(lVar5,local_88,param_6);
  Swift::BinaryInteger::_init(lVar7,lVar5,param_6,*(undefined8 *)(local_80 + 8),param_7,uVar10);
  _Var1 = Swift::FixedWidthInteger::get_bitWidth();
  local_68 = _Var1;
  FUN_100908eec();
  Swift::BinaryInteger::_<<_infix
            (lVar6,lVar8,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var1,param_7,uVar10)
  ;
  Swift::BinaryInteger::__infix(local_70,lVar6,lVar7,param_7,uVar10);
  pcVar4 = *(code **)(local_78 + 8);
  (*pcVar4)(lVar6,param_7);
  (*pcVar4)(lVar7,param_7);
  (*pcVar4)(lVar8,param_7);
  return;
}



/* Address: 0x100908eec | FUN_100908eec */

void FUN_100908eec(void)

{
  undefined *puVar1;
  
  if (DAT_100feca60 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100feca60 = puVar1;
  return;
}



/* Address: 0x100908f2c | FUN_100908f2c */

void FUN_100908f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,long param_12,undefined4 param_13,
                  undefined4 param_14,long param_15)

{
  undefined8 uVar1;
  __int64 _Var2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  __int64 local_68;
  
  local_b8 = param_15;
  lVar8 = (long)&local_c0 - (*(long *)(*(long *)(param_8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - (*(long *)(*(long *)(param_7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = *(long *)(param_6 + -8);
  uVar3 = *(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = lVar10 - uVar3;
  local_a0 = lVar4 - uVar3;
  local_78 = local_a0 - uVar3;
  local_c0 = local_78 - uVar3;
  lVar6 = local_c0 - uVar3;
  local_98 = param_3;
  local_88 = param_1;
  local_80 = param_2;
  local_70 = lVar6;
  Swift::FixedWidthInteger::get_max();
  uVar5 = *(undefined8 *)(param_9 + 8);
  local_a8 = *(undefined8 *)(param_12 + 8);
  Swift::BinaryInteger::_init(lVar6,lVar10,param_7,local_a8,param_6,uVar5);
  lVar10 = local_b8;
  Swift::FixedWidthInteger::get_max();
  lVar6 = local_c0;
  local_b0 = *(undefined8 *)(lVar10 + 8);
  Swift::BinaryInteger::_init(local_c0,lVar8,param_8,local_b0,param_6,uVar5);
  uVar1 = local_98;
  Swift::BinaryInteger::__infix(local_78,local_98,lVar6,param_6,uVar5);
  _Var2 = Swift::FixedWidthInteger::get_bitWidth();
  local_68 = _Var2;
  FUN_100908eec();
  Swift::BinaryInteger::_>>_infix
            (lVar4,uVar1,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var2,param_6,uVar5);
  lVar10 = local_a0;
  Swift::BinaryInteger::__infix(local_a0,lVar4,local_70,param_6,uVar5);
  lVar8 = local_90;
  pcVar7 = *(code **)(local_90 + 8);
  (*pcVar7)(lVar4,param_6);
  pcVar9 = *(code **)(lVar8 + 0x10);
  (*pcVar9)(lVar4,lVar10,param_6);
  Swift::BinaryInteger::_init(local_88,lVar4,param_6,uVar5,param_7,local_a8);
  lVar8 = local_78;
  (*pcVar9)(lVar4,local_78,param_6);
  Swift::BinaryInteger::_init(local_80,lVar4,param_6,uVar5,param_8,local_b0);
  (*pcVar7)(lVar10,param_6);
  (*pcVar7)(lVar8,param_6);
  (*pcVar7)(lVar6,param_6);
  (*pcVar7)(local_70,param_6);
  return;
}



/* Address: 0x1009091cc | FUN_1009091cc */

uint FUN_1009091cc(int param_1,uint param_2)

{
  return param_2 & 0xffff | param_1 << 0x10;
}



/* Address: 0x1009091d8 | FUN_1009091d8 */

uint FUN_1009091d8(uint param_1)

{
  return param_1 >> 0x10 | param_1 << 0x10;
}



/* Address: 0x1009091e0 | FUN_1009091e0 */

undefined1  [16] FUN_1009091e0(void)

{
  return ZEXT816(0x100f14c98);
}



/* Address: 0x1009091f0 | FUN_1009091f0 */

undefined1  [16] FUN_1009091f0(void)

{
  return ZEXT816(0x100f14cb8);
}



/* Address: 0x100909200 | thunk_FUN_100656f30 */

void thunk_FUN_100656f30(void)

{
  FUN_100656f30();
  return;
}



/* Address: 0x100909204 | thunk_FUN_100656f3c */

void thunk_FUN_100656f3c(void)

{
  FUN_100656f3c();
  return;
}



/* Address: 0x100909208 | FUN_100909208 */

String FUN_100909208(void)

{
  String SVar1;
  
  FUN_10090924c();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  return SVar1;
}



/* Address: 0x10090924c | FUN_10090924c */

void FUN_10090924c(void)

{
  undefined *puVar1;
  
  if (DAT_100feca68 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int32_>Swift__BinaryInteger_100eade60;
  _swift_getWitnessTable
            (PTR_Swift____int32_>Swift__BinaryInteger_100eade60,
             PTR___type_metadata_for_Swift_UInt32_100eade50);
  DAT_100feca68 = puVar1;
  return;
}



/* Address: 0x10090928c | FUN_10090928c */

String FUN_10090928c(void)

{
  String SVar1;
  
  FUN_10090924c();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  return SVar1;
}



/* Address: 0x1009092d4 | FUN_1009092d4 */

void FUN_1009092d4(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009092e8 | FUN_1009092e8 */

undefined1  [16] FUN_1009092e8(void)

{
  return ZEXT816(0x100f14d30);
}



/* Address: 0x1009092f8 | FUN_1009092f8 */

String FUN_1009092f8(void)

{
  String SVar1;
  
  FUN_100909348();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  return SVar1;
}



/* Address: 0x100909348 | FUN_100909348 */

void FUN_100909348(void)

{
  undefined *puVar1;
  
  if (DAT_100feca70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadea8;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadea8,
             PTR___type_metadata_for_Swift_UInt64_100eade90);
  DAT_100feca70 = puVar1;
  return;
}



/* Address: 0x100909388 | FUN_100909388 */

void FUN_100909388(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 3) = *(undefined4 *)((long)param_2 + 3);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10090939c | FUN_10090939c */

undefined1  [16] FUN_10090939c(void)

{
  return ZEXT816(0x100f14db0);
}



/* Address: 0x1009093ac | FUN_1009093ac */

undefined * FUN_1009093ac(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    uVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_10090da48(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10090953c);
      (*pcVar4)();
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      lVar9 = *(ulong *)(puVar3 + 0x10) << 4;
      puVar8 = (undefined8 *)(param_1 + 0x20);
      uVar6 = *(ulong *)(puVar3 + 0x10);
      do {
        uVar7 = *puVar8;
        uVar2 = uVar6 + 1;
        uVar10 = *(ulong *)(puVar3 + 0x18);
        _swift_retain(uVar7);
        if (uVar10 >> 1 <= uVar6) {
          FUN_10090da48(1 < uVar10,uVar2,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar2;
        *(undefined8 *)(puVar3 + lVar9 + 0x20) = uVar7;
        *(undefined ***)(puVar3 + lVar9 + 0x28) = &PTR_PTR_100f19fa8;
        lVar9 = lVar9 + 0x10;
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
        uVar6 = uVar2;
      } while (uVar5 != 0);
    }
    else {
      uVar6 = 0;
      do {
        uVar10 = uVar6;
        FUN_100942c70(uVar6,param_1);
        uVar2 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar2) {
          FUN_10090da48(1 < *(ulong *)(puVar3 + 0x18),uVar2 + 1,1);
        }
        uVar6 = uVar6 + 1;
        *(ulong *)(puVar3 + 0x10) = uVar2 + 1;
        *(ulong *)(puVar3 + uVar2 * 0x10 + 0x20) = uVar10;
        *(undefined ***)(puVar3 + uVar2 * 0x10 + 0x28) = &PTR_PTR_100f19fa8;
      } while (uVar5 != uVar6);
    }
  }
  return puVar3;
}



/* Address: 0x10090953c | FUN_10090953c */

void FUN_10090953c(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  if (*ppuVar1 != (undefined *)0x0) {
    _swift_retain();
    return;
  }
  return;
}



/* Address: 0x10090957c | FUN_10090957c */

undefined * FUN_10090957c(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  return *ppuVar1;
}



/* Address: 0x1009095a0 | FUN_1009095a0 */

ulong FUN_1009095a0(undefined8 param_1,ulong param_2)

{
  return param_2 >> 8;
}



/* Address: 0x1009095a8 | FUN_1009095a8 */

void FUN_1009095a8(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 9) = param_1;
  return;
}



/* Address: 0x1009095b0 | FUN_1009095b0 */

undefined1  [16] FUN_1009095b0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 9;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}


