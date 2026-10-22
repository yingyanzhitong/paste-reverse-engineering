/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100678214 | FUN_100678214 */

void FUN_100678214(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d410,param_1);
  return;
}



/* Address: 0x100678224 | FUN_100678224 */

void FUN_100678224(void)

{
  FUN_1006780dc(&DAT_100fd9eb0,
                PTR__Swift__Swift__Range<undefined>_>Swift__BidirectionalCollection_100eac948);
  return;
}



/* Address: 0x100678248 | FUN_100678248 */

void FUN_100678248(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d3b0;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98,param_1,
             &local_28);
  return;
}



/* Address: 0x100678290 | FUN_100678290 */

void FUN_100678290(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d4f0,param_1);
  return;
}



/* Address: 0x1006782a0 | FUN_1006782a0 */

void FUN_1006782a0(void)

{
  FUN_1006780dc(&DAT_100fd9eb8,PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968);
  return;
}



/* Address: 0x1006782c4 | FUN_1006782c4 */

void FUN_1006782c4(undefined8 param_1)

{
  _swift_getWitnessTable(PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8,param_1);
  return;
}



/* Address: 0x1006782d4 | FUN_1006782d4 */

void FUN_1006782d4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100675114();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
  }
  return;
}



/* Address: 0x100678340 | FUN_100678340 */

void FUN_100678340(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1006783cc;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1006783cc:
  if (uVar5 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006783e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1006783e4 | FUN_1006783e4 */

undefined8 * FUN_1006783e4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100678480;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100678480:
  if (uVar4 != 1) {
    (**(code **)(lVar2 + 0x10))(param_1);
  }
  else {
    *param_1 = *(undefined8 *)param_2;
    _swift_bridgeObjectRetain();
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  return param_1;
}



/* Address: 0x1006784c0 | FUN_1006784c0 */

uint * FUN_1006784c0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100678570;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_100678570:
  if (uVar3 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100678608;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_100678608:
  if (uVar3 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Address: 0x100678658 | FUN_100678658 */

void FUN_100678658(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1006786f0;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1006786f0:
  if (uVar4 != 1) {
    (**(code **)(lVar2 + 0x20))();
  }
  else {
    *param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  return;
}



/* Address: 0x10067872c | FUN_10067872c */

uint * FUN_10067872c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1006787dc;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1006787dc:
  if (uVar3 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100678874;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_100678874:
  if (uVar3 != 1) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar2) = uVar3 == 1;
  return param_1;
}



/* Address: 0x1006788c0 | FUN_1006788c0 */

int FUN_1006788c0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xff) goto LAB_100678968;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfe >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_100678968;
      goto LAB_1006788f4;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1006788f4:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xff;
  }
LAB_100678968:
  iVar2 = 0;
  if (1 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1006789c4 | FUN_1006789c4 */

void FUN_1006789c4(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  sVar1 = uVar4 + 1;
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
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
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



/* Address: 0x100678b68 | FUN_100678b68 */

void FUN_100678b68(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100678b74 | FUN_100678b74 */

void FUN_100678b74(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x100678be8 | thunk_FUN_100678bec */

long * thunk_FUN_100678bec(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar1 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((*(uint *)(lVar1 + 0x50) & 0x1000f8) == 0 && uVar3 + 1 < 0x19) {
    uVar2 = (uint)*(byte *)((long)param_2 + uVar3);
    if (1 < *(byte *)((long)param_2 + uVar3)) {
      uVar2 = (int)*param_2 + 2;
    }
    if (uVar2 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar3) = 1;
      _swift_bridgeObjectRetain();
    }
    else {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 0;
    }
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar2 + 0x17 & (uVar2 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100678bec | FUN_100678bec */

long * FUN_100678bec(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar1 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((*(uint *)(lVar1 + 0x50) & 0x1000f8) == 0 && uVar3 + 1 < 0x19) {
    uVar2 = (uint)*(byte *)((long)param_2 + uVar3);
    if (1 < *(byte *)((long)param_2 + uVar3)) {
      uVar2 = (int)*param_2 + 2;
    }
    if (uVar2 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + uVar3) = 1;
      _swift_bridgeObjectRetain();
    }
    else {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 0;
    }
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar2 + 0x17 & (uVar2 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100678ca8 | thunk_FUN_100678340 */

void thunk_FUN_100678340(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1006783cc;
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
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1006783cc:
  if (uVar5 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006783e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100678cac | FUN_100678cac */

uint FUN_100678cac(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x100678d40 | FUN_100678d40 */

void FUN_100678d40(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (sVar3 < 9) {
    sVar3 = 8;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar3) = 2;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x100678e08 | FUN_100678e08 */

void FUN_100678e08(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100675114();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
  }
  return;
}



/* Address: 0x100678e80 | FUN_100678e80 */

long * FUN_100678e80(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) != 0 || 0x18 < (uVar3 & 0xfffffffffffffff8) + 0x10) {
    uVar4 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *(long *)param_2;
    *param_1 = lVar2;
    _swift_retain();
    return (long *)(lVar2 + ((ulong)(uVar4 + 0x17 & (uVar4 ^ 0xffffffff)) & 0x1f8));
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100678f68;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100678f68:
  if (uVar4 != 1) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
  }
  else {
    *param_1 = *(long *)param_2;
    _swift_bridgeObjectRetain();
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  *(undefined8 *)((long)param_1 + uVar3 + 8 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)((long)param_2 + uVar3 + 8) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100678fd4 | FUN_100678fd4 */

undefined8 * FUN_100678fd4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100679078;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100679078:
  if (uVar4 != 1) {
    (**(code **)(lVar2 + 0x10))(param_1,param_2);
  }
  else {
    *param_1 = *(undefined8 *)param_2;
    _swift_bridgeObjectRetain();
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x1006790dc | FUN_1006790dc */

uint * FUN_1006790dc(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (param_1 == param_2) goto LAB_10067925c;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_10067918c;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_10067918c:
  if (uVar3 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100679224;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_100679224:
  if (uVar3 == 1) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 1;
    _swift_bridgeObjectRetain();
  }
  else {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + uVar2) = 0;
  }
LAB_10067925c:
  *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100679290 | FUN_100679290 */

void FUN_100679290(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_100679330;
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
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_100679330:
  if (uVar4 != 1) {
    (**(code **)(lVar2 + 0x20))(param_1,param_2);
  }
  else {
    *param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar3) = uVar4 == 1;
  *(undefined8 *)(uVar3 + 8 + (long)param_1 & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar3 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return;
}



/* Address: 0x100679390 | FUN_100679390 */

uint * FUN_100679390(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  if (param_1 == param_2) goto LAB_10067950c;
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_100679440;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_100679440:
  if (uVar3 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1006794d8;
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
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1006794d8:
  if (uVar3 != 1) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
  }
  *(bool *)((long)param_1 + uVar2) = uVar3 == 1;
LAB_10067950c:
  *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_1) & 0xfffffffffffffff8) =
       *(undefined8 *)((ulong)(uVar2 + 8 + (long)param_2) & 0xfffffffffffffff8);
  return param_1;
}



/* Address: 0x100679540 | FUN_100679540 */

int FUN_100679540(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    uVar1 = (uVar3 & 0xfffffffffffffff8) + 0x10;
    param_2 = param_2 - 0xfd;
    uVar2 = uVar1 & 0xfffffff8;
    uVar4 = (uint)uVar2;
    iVar6 = 2;
    if (uVar2 != 0) {
      param_2 = 2;
    }
    if (0xffff < param_2) {
      iVar6 = 4;
    }
    if (param_2 < 0x100) {
      iVar6 = 1;
    }
    if (iVar6 == 4) {
      uVar5 = *(uint *)((long)param_1 + uVar1);
    }
    else {
      if (iVar6 == 2) {
        uVar5 = (uint)*(ushort *)((long)param_1 + uVar1);
        if (*(ushort *)((long)param_1 + uVar1) == 0) goto LAB_1006795e4;
        goto LAB_1006795bc;
      }
      uVar5 = (uint)*(byte *)((long)param_1 + uVar1);
    }
    if (uVar5 != 0) {
LAB_1006795bc:
      uVar5 = uVar5 - 1;
      if (uVar2 != 0) {
        uVar5 = 0;
        uVar4 = *param_1;
      }
      return (uVar4 | uVar5) + 0xff;
    }
  }
LAB_1006795e4:
  iVar6 = 0;
  if (1 < *(byte *)((long)param_1 + uVar3)) {
    iVar6 = (*(byte *)((long)param_1 + uVar3) ^ 0xff) + 1;
  }
  return iVar6;
}



/* Address: 0x1006795f8 | FUN_1006795f8 */

void FUN_1006795f8(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  sVar1 = (uVar2 & 0xfffffffffffffff8) + 0x10;
  if (param_3 < 0xff) {
    uVar4 = 0;
  }
  else {
    param_3 = param_3 - 0xfd;
    uVar4 = 2;
    if ((int)sVar1 != 0) {
      param_3 = 2;
    }
    if (0xffff < param_3) {
      uVar4 = 4;
    }
    if (param_3 < 0x100) {
      uVar4 = 1;
    }
  }
  if (param_2 < 0xff) {
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar4 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar2) = -(char)param_2;
    }
  }
  else {
    iVar3 = param_2 - 0xfe;
    if ((int)sVar1 != 0) {
      iVar3 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 - 0xff;
    }
    if (uVar4 < 2) {
      if (uVar4 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar3;
      }
    }
    else if (uVar4 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar3;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar3;
    }
  }
  return;
}



/* Address: 0x10067970c | /usr/lib/swift/libswiftCore.dylib::Swift::$_copyCollectionToContiguousArray */

ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
 Swift::__copyCollectionToContiguousArray
           (ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyCollectionToContiguousArray_100eadad8)();
  return (ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
          )param_1.unknown;
}



/* Address: 0x100679710 | thunk_FUN_100675a54 */

void thunk_FUN_100675a54(void)

{
  FUN_100675a54();
  return;
}



/* Address: 0x100679714 | thunk_FUN_1006779c0 */

void thunk_FUN_1006779c0(void)

{
  FUN_1006779c0();
  return;
}



/* Address: 0x100679718 | thunk_FUN_1006778e0 */

void thunk_FUN_1006778e0(__int64 param_1)

{
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x10067971c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$_copyContents */

tuple2_conflict2
(extension_Swift)::Swift::Sequence::__copyContents
          (UnsafeMutableBufferPointer<(extension_in_Swift):Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
           initializing)

{
  tuple2_conflict2 tVar1;
  
  tVar1 = __copyContents(initializing);
  return (tuple2_conflict2)tVar1._;
}



/* Address: 0x100679720 | FUN_100679720 */

void FUN_100679720(void)

{
  FUN_1005adcf4();
  return;
}



/* Address: 0x100679734 | thunk_FUN_1006759f0 */

void thunk_FUN_1006759f0(void)

{
  FUN_1006759f0();
  return;
}



/* Address: 0x100679738 | thunk_FUN_10067795c */

void thunk_FUN_10067795c(void)

{
  FUN_10067795c();
  return;
}



/* Address: 0x10067973c | thunk_FUN_1006778ec */

void thunk_FUN_1006778ec(void)

{
  FUN_1006778ec();
  return;
}



/* Address: 0x100679740 | $$(extension_in_Swift):Swift.Collection<_where_A.SubSequence_==_Swift.Slice<A>>.subscript.getter_:_(Swift.Range<A.Index>)_->_Swift.Slice<A> */

void ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
               (void)

{
  ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
            ();
  return;
}



/* Address: 0x100679744 | thunk_FUN_100659b90 */

void thunk_FUN_100659b90(void)

{
  FUN_100659b90();
  return;
}



/* Address: 0x100679748 | thunk_FUN_100659bb4 */

void thunk_FUN_100659bb4(void)

{
  FUN_100659bb4();
  return;
}



/* Address: 0x10067974c | thunk_FUN_10065a530 */

void thunk_FUN_10065a530(void)

{
  thunk_FUN_10065a530();
  return;
}



/* Address: 0x100679750 | thunk_FUN_10026c674 */

void thunk_FUN_10026c674(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x100679754 | thunk_FUN_1006333c4 */

void thunk_FUN_1006333c4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  (**(code **)(param_1[1] + 8))(pvVar1,*param_1);
  _free(pvVar1);
  return;
}



/* Address: 0x100679758 | thunk_FUN_100678340 */

void thunk_FUN_100678340(void)

{
  thunk_FUN_100678340();
  return;
}



/* Address: 0x10067975c | thunk_FUN_100675ab8 */

void thunk_FUN_100675ab8(void)

{
  FUN_100675ab8();
  return;
}



/* Address: 0x100679760 | thunk_FUN_100677a24 */

void thunk_FUN_100677a24(void)

{
  FUN_100677a24();
  return;
}



/* Address: 0x100679764 | thunk_FUN_100675578 */

void thunk_FUN_100675578(void)

{
  thunk_FUN_100675578();
  return;
}



/* Address: 0x100679768 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::get_isEmpty */

bool (extension_Swift)::Swift::Collection::get_isEmpty(void)

{
  bool bVar1;
  
  bVar1 = get_isEmpty();
  return bVar1;
}



/* Address: 0x10067976c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::get_count */

__int64 (extension_Swift)::Swift::Collection::get_count(void)

{
  __int64 _Var1;
  
  _Var1 = get_count();
  return _Var1;
}



/* Address: 0x100679770 | thunk_FUN_1006781a8 */

void thunk_FUN_1006781a8(void)

{
  FUN_1006781a8();
  return;
}



/* Address: 0x100679774 | thunk_FUN_100678224 */

void thunk_FUN_100678224(void)

{
  FUN_100678224();
  return;
}



/* Address: 0x100679778 | thunk_FUN_1006782a0 */

void thunk_FUN_1006782a0(void)

{
  FUN_1006782a0();
  return;
}



/* Address: 0x10067977c | thunk_FUN_1006782c4 */

void thunk_FUN_1006782c4(void)

{
  FUN_1006782c4();
  return;
}



/* Address: 0x100679780 | thunk_FUN_100678bec */

void thunk_FUN_100678bec(void)

{
  thunk_FUN_100678bec();
  return;
}



/* Address: 0x100679784 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$index */

void (extension_Swift)::Swift::RandomAccessCollection::_index(__int64 param_1)

{
  _index(param_1);
  return;
}



/* Address: 0x100679788 | FUN_100679788 */

void FUN_100679788(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar6 = *(long *)(param_3 + -8);
  lVar7 = (long)&local_b0 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = param_3;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar8 = lVar7 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                  0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_unkeyedContainer();
  lVar4 = param_3;
  FUN_100679b54();
  uVar3 = 0;
  local_a0 = param_2;
  lStack_98 = lVar4;
  local_90 = lVar5;
  FUN_100680958(0,param_3);
  local_a8 = uVar3;
  FUN_100679ba8(lVar8);
  local_b0 = *(code **)(lVar6 + 0x30);
  lVar4 = lVar8;
  (*local_b0)(lVar8,1,param_3);
  if ((int)lVar4 != 1) {
    pcVar9 = *(code **)(lVar6 + 0x20);
    do {
      (*pcVar9)(lVar7,lVar8,param_3);
      uVar1 = uStack_68;
      uVar3 = local_70;
      FUN_10007d048(auStack_88,local_70);
      Swift::UnkeyedEncodingContainer::_encode(lVar7,param_3,param_4,uVar3,uVar1);
      (**(code **)(lVar6 + 8))(lVar7,param_3);
      if (unaff_x21 != 0) break;
      FUN_100679ba8(lVar8,local_a8);
      lVar4 = lVar8;
      (*local_b0)(lVar8,1,param_3);
    } while ((int)lVar4 != 1);
  }
  _swift_release(local_a0);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x100679930 | FUN_100679930 */

void FUN_100679930(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100679788(param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100679954 | FUN_100679954 */

/* WARNING: Removing unreachable block (ram,0x000100679b10) */

long FUN_100679954(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  uint uStack_68;
  
  lVar7 = *(long *)(param_2 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  lVar2 = param_2;
  local_90 = param_3;
  thunk_FUN_100683d64();
  lVar3 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_unkeyedContainer();
  uVar5 = local_70;
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    Swift::UnkeyedDecodingContainer::_get_count();
    if ((uStack_68 & 0xff) != 1) {
      uVar4 = 0;
      FUN_1006883a0(0,param_2);
      FUN_100679cbc(uVar5,uVar4);
    }
    while( true ) {
      FUN_100004640(auStack_88,local_70);
      bVar1 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      if (bVar1) break;
      FUN_10007d048(auStack_88,local_70);
      Swift::UnkeyedDecodingContainer::_decode();
      uVar5 = 0;
      FUN_1006883a0(0,param_2);
      FUN_100679d80(auStack_88 + (-8 - (lVar6 + 0xfU & 0xfffffffffffffff0)),uVar5);
      (**(code **)(lVar7 + 8))(auStack_88 + (-8 - (lVar6 + 0xfU & 0xfffffffffffffff0)),param_2);
    }
    FUN_100004594(auStack_88);
    FUN_100004594(param_1);
  }
  else {
    _swift_release(lVar2);
    FUN_100004594(param_1);
    lVar2 = lVar3;
  }
  return lVar2;
}



/* Address: 0x100679b24 | FUN_100679b24 */

void FUN_100679b24(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x21;
  
  FUN_100679954(param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100679b54 | FUN_100679b54 */

undefined8 FUN_100679b54(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _swift_retain();
  FUN_10067f50c();
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x100679ba8 | FUN_100679ba8 */

void FUN_100679ba8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  long local_70;
  long lStack_68;
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  long local_40;
  long lStack_38;
  
  lStack_38 = unaff_x20[1];
  if (lStack_38 == unaff_x20[2]) {
    uVar1 = param_2;
    FUN_10067a03c();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100679cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x38))(param_1,1,1);
      return;
    }
    lStack_38 = unaff_x20[1];
  }
  unaff_x20[1] = lStack_38 + 1;
  uVar3 = *unaff_x20;
  lVar4 = *(long *)(param_2 + 0x10);
  puStack_58 = auStack_50;
  local_60 = FUN_10067f5c0;
  puVar2 = &DAT_100fda040;
  local_70 = lVar4;
  lStack_68 = lVar4;
  local_40 = lVar4;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(param_1,FUN_10067f5fc,auStack_80,uVar3,&DAT_100ef5140,lVar4,puVar2,lVar4,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_88);
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
  return;
}



/* Address: 0x100679cb8 | thunk_FUN_100683d64 */

void thunk_FUN_100683d64(void)

{
  if (DAT_100fda288 != -1) {
    _swift_once(&DAT_100fda288,FUN_100688650);
  }
  _swift_retain(DAT_101057c40);
  Swift::ManagedBufferPointer::_init();
  return;
}



/* Address: 0x100679cbc | FUN_100679cbc */

void FUN_100679cbc(long param_1,long param_2)

{
  bool bVar1;
  ManagedBufferPointer MVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long local_48;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  MVar2 = Swift::ManagedBufferPointer::typeMetadataAccessor();
  bVar1 = Swift::ManagedBufferPointer::isUniqueReference(MVar2);
  FUN_1006035b0(&local_48,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar4,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if ((local_48 < param_1) || (!bVar1)) {
    uVar3 = 0;
    FUN_1006844f0(0,uVar4);
    FUN_100684260(bVar1,param_1,1,uVar3);
  }
  return;
}


