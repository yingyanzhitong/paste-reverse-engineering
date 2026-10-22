/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ab45b4 | FUN_100ab45b4 */

ulong FUN_100ab45b4(ulong param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_2 & 0xffffff | 0x1000000) << 0x10 | 0x1000000000001;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x1020000000001;
  }
  return uVar1;
}



/* Address: 0x100ab45e0 | FUN_100ab45e0 */

void FUN_100ab45e0(ulong param_1,ulong param_2)

{
  FUN_100ab4bac(param_1 & 0x101ffffffff00ff,param_2 & 0x101ffffffff00ff);
  return;
}



/* Address: 0x100ab45f4 | FUN_100ab45f4 */

void FUN_100ab45f4(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  
  HVar2.unknown = param_2.unknown;
  Swift::Hasher::_combine((ulong)param_2.unknown & 0xff,param_2);
  if (((ulong)param_2.unknown & 0xff0000000000) == 0x20000000000) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    if (((ulong)param_2.unknown & 0xff00000000) == 0x100000000) {
      Swift::Hasher::_combine(0,HVar2);
    }
    else {
      Swift::Hasher::_combine(1,HVar2);
      Swift::Hasher::_combine((__uint16)((ulong)param_2.unknown >> 0x10),HVar2);
    }
    bVar1 = (byte)((ulong)param_2.unknown >> 0x28) & 1;
  }
  Swift::Hasher::_combine(bVar1,HVar2);
  Swift::Hasher::_combine((byte)((ulong)param_2.unknown >> 0x30) & 1,HVar2);
  Swift::Hasher::_combine((byte)((ulong)param_2.unknown >> 0x38) & 1,HVar2);
  return;
}



/* Address: 0x100ab468c | FUN_100ab468c */

void FUN_100ab468c(ulong param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100ab45f4(HVar1.unknown,param_1 & 0x101ffffffff00ff);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100ab46d8 | FUN_100ab46d8 */

void FUN_100ab46d8(void)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  Hasher HVar7;
  byte *unaff_x20;
  undefined1 auStack_78 [72];
  
  bVar4 = *unaff_x20;
  uVar3 = *(uint *)(unaff_x20 + 2);
  bVar5 = unaff_x20[6];
  bVar6 = unaff_x20[7];
  Swift::Hasher::init(0);
  uVar1 = 0x100000000000000;
  if (bVar6 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (bVar5 == 0) {
    uVar2 = 0;
  }
  HVar7.unknown = auStack_78;
  FUN_100ab45f4(HVar7.unknown,uVar2 | uVar1 | (ulong)uVar3 << 0x10 | (ulong)bVar4);
  Swift::Hasher::_finalize(HVar7);
  return;
}



/* Address: 0x100ab4750 | FUN_100ab4750 */

void FUN_100ab4750(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte *unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (unaff_x20[7] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (unaff_x20[6] == 0) {
    uVar2 = 0;
  }
  FUN_100ab45f4(param_1,uVar2 | uVar1 | (ulong)*(uint *)(unaff_x20 + 2) << 0x10 | (ulong)*unaff_x20)
  ;
  return;
}



/* Address: 0x100ab4788 | FUN_100ab4788 */

void FUN_100ab4788(__int64 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  Hasher HVar7;
  byte *unaff_x20;
  undefined1 auStack_78 [72];
  
  bVar4 = *unaff_x20;
  uVar3 = *(uint *)(unaff_x20 + 2);
  bVar5 = unaff_x20[6];
  bVar6 = unaff_x20[7];
  Swift::Hasher::init(param_1);
  uVar1 = 0x100000000000000;
  if (bVar6 == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (bVar5 == 0) {
    uVar2 = 0;
  }
  HVar7.unknown = auStack_78;
  FUN_100ab45f4(HVar7.unknown,uVar2 | uVar1 | (ulong)uVar3 << 0x10 | (ulong)bVar4);
  Swift::Hasher::_finalize(HVar7);
  return;
}



/* Address: 0x100ab47fc | FUN_100ab47fc */

void FUN_100ab47fc(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = 0x100000000000000;
  if (param_1[7] == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x1000000000000;
  if (param_1[6] == 0) {
    uVar2 = 0;
  }
  uVar3 = 0x100000000000000;
  if (param_2[7] == 0) {
    uVar3 = 0;
  }
  uVar4 = 0x1000000000000;
  if (param_2[6] == 0) {
    uVar4 = 0;
  }
  FUN_100ab4bac(uVar2 | uVar1 | (ulong)*(uint *)(param_1 + 2) << 0x10 | (ulong)*param_1,
                uVar4 | uVar3 | (ulong)*(uint *)(param_2 + 2) << 0x10 | (ulong)*param_2);
  return;
}



/* Address: 0x100ab4860 | FUN_100ab4860 */

uint FUN_100ab4860(uint param_1)

{
  return param_1 >> 0x18 & 1;
}



/* Address: 0x100ab4868 | FUN_100ab4868 */

bool FUN_100ab4868(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 0x10 & 0xff;
  if ((param_1 & 0xff0000) == 0x10000) {
    if (uVar1 == 1) {
LAB_100ab48a0:
      return ((param_1 ^ param_2) & 0x1000000) == 0;
    }
  }
  else if ((uVar1 != 1) && ((param_1 & 0xffff) == (param_2 & 0xffff))) goto LAB_100ab48a0;
  return false;
}



/* Address: 0x100ab48b8 | FUN_100ab48b8 */

void FUN_100ab48b8(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  Hasher HVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar3 = (uint)param_2.unknown;
  if ((uVar3 & 0xff0000) == 0x10000) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar1.unknown._4_4_ = uVar4;
    HVar1.unknown._0_4_ = uVar3;
    Swift::Hasher::_combine((__uint16)param_2.unknown,HVar1);
  }
  HVar2.unknown._4_4_ = uVar4;
  HVar2.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine((byte)((ulong)param_2.unknown >> 0x18) & 1,HVar2);
  return;
}



/* Address: 0x100ab4908 | FUN_100ab4908 */

void FUN_100ab4908(uint param_1,Hasher param_2)

{
  uint uVar1;
  Hasher HVar2;
  
  Swift::Hasher::init(0);
  if ((param_1 & 0xff0000) == 0x10000) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint16)param_1,param_2);
  }
  uVar1 = param_1 >> 0x18 & 1;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::_combine((__uint8)uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100ab497c | FUN_100ab497c */

void FUN_100ab497c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  __uint16 _Var2;
  __uint16 _Var3;
  Hasher HVar4;
  __uint16 *unaff_x20;
  
  _Var2 = *unaff_x20;
  _Var3 = unaff_x20[1];
  bVar1 = *(byte *)((long)unaff_x20 + 3);
  HVar4.unknown = (undefined *)(ulong)bVar1;
  Swift::Hasher::init(0);
  if ((char)_Var3 == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var2,param_2);
  }
  Swift::Hasher::_combine(bVar1,param_2);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100ab49fc | FUN_100ab49fc */

void FUN_100ab49fc(undefined8 param_1,Hasher param_2)

{
  __uint8 _Var1;
  __uint16 _Var2;
  __uint16 *unaff_x20;
  
  _Var1 = *(__uint8 *)((long)unaff_x20 + 3);
  if ((char)unaff_x20[1] == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    _Var2 = *unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var2,param_2);
  }
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x100ab4a5c | FUN_100ab4a5c */

void FUN_100ab4a5c(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  __uint16 _Var2;
  __uint16 _Var3;
  Hasher HVar4;
  __uint16 *unaff_x20;
  
  _Var2 = *unaff_x20;
  _Var3 = unaff_x20[1];
  bVar1 = *(byte *)((long)unaff_x20 + 3);
  HVar4.unknown = (undefined *)(ulong)bVar1;
  Swift::Hasher::init(param_1);
  if ((char)_Var3 == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var2,param_2);
  }
  Swift::Hasher::_combine(bVar1,param_2);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100ab4ad8 | FUN_100ab4ad8 */

byte FUN_100ab4ad8(short *param_1,short *param_2)

{
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  return *(byte *)((long)param_1 + 3) ^ *(byte *)((long)param_2 + 3) ^ 1;
}



/* Address: 0x100ab4b28 | FUN_100ab4b28 */

uint FUN_100ab4b28(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x100;
  }
  return uVar1 | ((uint)(param_1 >> 8) & 1) << 0x18;
}



/* Address: 0x100ab4b40 | FUN_100ab4b40 */

uint FUN_100ab4b40(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0x100;
  if ((param_1 & 0x1000000000000) != 0) {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (uint)(param_1 >> 0x20) & 0x1000000;
  if ((param_1 & 0xff0000000000) != 0x20000000000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0xff) != 0) {
    if (((uint)param_1 & 0xff) != 1) {
      uVar1 = uVar1 | 0x400;
    }
    return uVar1;
  }
  return uVar1 | 0x800;
}



/* Address: 0x100ab4b8c | FUN_100ab4b8c */

uint FUN_100ab4b8c(ulong param_1)

{
  uint uVar1;
  
  uVar1 = 0x100000;
  if ((param_1 & 1) == 0) {
    uVar1 = 0x100100;
  }
  return uVar1 | ((uint)(param_1 >> 8) & 1) << 0x18;
}



/* Address: 0x100ab4bac | FUN_100ab4bac */

bool FUN_100ab4bac(ulong param_1,ulong param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(param_2 >> 0x20);
  if (((param_2 ^ param_1) & 0xff) != 0) {
    return false;
  }
  uVar4 = (uint)(param_2 >> 0x10);
  uVar3 = uVar4 & 0xff000000;
  uVar1 = (ushort)(param_1 >> 0x30);
  if (((uint)(param_1 >> 0x28) & 0xff) == 2) {
    if (uVar3 != 0x2000000) {
      return false;
    }
    if ((uVar1 & 1) != (uVar2 >> 0x10 & 1)) {
      return false;
    }
  }
  else {
    if (uVar3 == 0x2000000) {
      return false;
    }
    uVar3 = (uint)(param_1 >> 0x10);
    if ((param_1 & 0xff00000000) == 0x100000000) {
      if ((uVar2 & 0xff) != 1) {
        return false;
      }
    }
    else {
      if ((uVar2 & 0xff) == 1) {
        return false;
      }
      if ((uVar3 & 0xffff) != (uint)param_2 >> 0x10) {
        return false;
      }
    }
    if ((((uVar3 ^ uVar4) >> 0x18 & 1) != 0) || ((uVar1 & 1) != (uVar2 >> 0x10 & 1))) {
      return false;
    }
  }
  return ((param_2 ^ param_1) & 0x100000000000000) == 0;
}



/* Address: 0x100ab4c8c | thunk_FUN_100ab4c90 */

void thunk_FUN_100ab4c90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93c20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93c20,&DAT_100f30538);
  DAT_100ff81b8 = pTVar1;
  return;
}



/* Address: 0x100ab4c90 | FUN_100ab4c90 */

void FUN_100ab4c90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93c20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93c20,&DAT_100f30538);
  DAT_100ff81b8 = pTVar1;
  return;
}



/* Address: 0x100ab4cd0 | thunk_FUN_100ab4cd4 */

void thunk_FUN_100ab4cd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93c88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93c88,&DAT_100f305b8);
  DAT_100ff81c0 = pTVar1;
  return;
}



/* Address: 0x100ab4cd4 | FUN_100ab4cd4 */

void FUN_100ab4cd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93c88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93c88,&DAT_100f305b8);
  DAT_100ff81c0 = pTVar1;
  return;
}



/* Address: 0x100ab4d14 | thunk_FUN_100ab4d18 */

void thunk_FUN_100ab4d18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93cf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93cf0,&DAT_100f30638);
  DAT_100ff81c8 = pTVar1;
  return;
}



/* Address: 0x100ab4d18 | FUN_100ab4d18 */

void FUN_100ab4d18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93cf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93cf0,&DAT_100f30638);
  DAT_100ff81c8 = pTVar1;
  return;
}



/* Address: 0x100ab4d58 | thunk_FUN_100ab4d5c */

void thunk_FUN_100ab4d5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93d18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93d18,&DAT_100f306d8);
  DAT_100ff81d0 = pTVar1;
  return;
}



/* Address: 0x100ab4d5c | FUN_100ab4d5c */

void FUN_100ab4d5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93d18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93d18,&DAT_100f306d8);
  DAT_100ff81d0 = pTVar1;
  return;
}



/* Address: 0x100ab4d9c | thunk_FUN_100ab4da0 */

void thunk_FUN_100ab4da0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93dc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93dc0,&DAT_100f30750);
  DAT_100ff81d8 = pTVar1;
  return;
}



/* Address: 0x100ab4da0 | FUN_100ab4da0 */

void FUN_100ab4da0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff81d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c93dc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c93dc0,&DAT_100f30750);
  DAT_100ff81d8 = pTVar1;
  return;
}



/* Address: 0x100ab4de0 | FUN_100ab4de0 */

undefined1  [16] FUN_100ab4de0(void)

{
  return ZEXT816(0x100f304c0);
}



/* Address: 0x100ab4df0 | FUN_100ab4df0 */

void FUN_100ab4df0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100ab4dfc | thunk_FUN_100ab4e14 */

int thunk_FUN_100ab4e14(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_100ab4e90;
        goto LAB_100ab4e70;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ab4e70:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_100ab4e90:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ab4e00 | thunk_FUN_100ab4eb4 */

void thunk_FUN_100ab4eb4(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[2] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100ab4f30;
      }
    }
    else if (uVar2 == 2) {
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    else {
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    if (param_2 != 0) {
LAB_100ab4f30:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *(short *)param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
      *(short *)(param_1 + 2) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[2] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100ab4e04 | FUN_100ab4e04 */

undefined1  [16] FUN_100ab4e04(void)

{
  return ZEXT816(0x100f30538);
}



/* Address: 0x100ab4e14 | FUN_100ab4e14 */

int FUN_100ab4e14(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_100ab4e90;
        goto LAB_100ab4e70;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ab4e70:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_100ab4e90:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ab4eb4 | FUN_100ab4eb4 */

void FUN_100ab4eb4(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[2] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100ab4f30;
      }
    }
    else if (uVar2 == 2) {
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    else {
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    if (param_2 != 0) {
LAB_100ab4f30:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *(short *)param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
      *(short *)(param_1 + 2) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[2] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100ab4f60 | FUN_100ab4f60 */

undefined1  [16] FUN_100ab4f60(void)

{
  return ZEXT816(0x100f305b8);
}



/* Address: 0x100ab4f70 | FUN_100ab4f70 */

void FUN_100ab4f70(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100ab4f7c | FUN_100ab4f7c */

int FUN_100ab4f7c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 6)) {
    uVar1 = *(byte *)((long)param_1 + 6) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ab4fd0 | FUN_100ab4fd0 */

void FUN_100ab4fd0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 6) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x100ab5010 | FUN_100ab5010 */

undefined1  [16] FUN_100ab5010(void)

{
  return ZEXT816(0x100f30638);
}



/* Address: 0x100ab5020 | FUN_100ab5020 */

undefined1  [16] FUN_100ab5020(void)

{
  return ZEXT816(0x100f306d8);
}



/* Address: 0x100ab5030 | FUN_100ab5030 */

void FUN_100ab5030(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100ab503c | FUN_100ab503c */

int FUN_100ab503c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[1] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 3)) {
    uVar1 = *(byte *)((long)param_1 + 3) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ab5090 | FUN_100ab5090 */

void FUN_100ab5090(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 3) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *param_1 = param_2 - 0xff;
    if (0xfe < param_3) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}



/* Address: 0x100ab50d0 | FUN_100ab50d0 */

undefined1  [16] FUN_100ab50d0(void)

{
  return ZEXT816(0x100f30750);
}



/* Address: 0x100ab50e0 | thunk_FUN_100ab433c */

void thunk_FUN_100ab433c(void)

{
  FUN_100ab433c();
  return;
}



/* Address: 0x100ab50e4 | thunk_FUN_100ab44b0 */

void thunk_FUN_100ab44b0(void)

{
  thunk_FUN_100ab44b0();
  return;
}



/* Address: 0x100ab50e8 | thunk_FUN_100ab44ec */

void thunk_FUN_100ab44ec(void)

{
  thunk_FUN_100ab44ec();
  return;
}



/* Address: 0x100ab50ec | thunk_FUN_100ab4eb4 */

void thunk_FUN_100ab4eb4(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff01 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff01 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfe < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xff) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[2] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100ab4f30;
      }
    }
    else if (uVar2 == 2) {
      param_1[2] = '\0';
      param_1[3] = '\0';
    }
    else {
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
      param_1[5] = '\0';
    }
    if (param_2 != 0) {
LAB_100ab4f30:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xff >> 0x10) + 1;
    *(short *)param_1 = (short)(param_2 - 0xff);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 2) = iVar1;
        return;
      }
      *(short *)(param_1 + 2) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[2] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100ab50f0 | thunk_FUN_100ab4384 */

void thunk_FUN_100ab4384(void)

{
  FUN_100ab4384();
  return;
}



/* Address: 0x100ab50f4 | thunk_FUN_100ab43ac */

void thunk_FUN_100ab43ac(void)

{
  FUN_100ab43ac();
  return;
}



/* Address: 0x100ab50f8 | thunk_FUN_100ab43d4 */

void thunk_FUN_100ab43d4(void)

{
  thunk_FUN_100ab43d4();
  return;
}



/* Address: 0x100ab50fc | thunk_FUN_10022f878 */

void thunk_FUN_10022f878(void)

{
  FUN_10022f878();
  return;
}



/* Address: 0x100ab5100 | thunk_FUN_100ab4454 */

void thunk_FUN_100ab4454(void)

{
  thunk_FUN_100ab4454();
  return;
}



/* Address: 0x100ab5104 | thunk_FUN_100ab4e14 */

int thunk_FUN_100ab4e14(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_100ab4e90;
        goto LAB_100ab4e70;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ab4e70:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_100ab4e90:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ab5108 | thunk_FUN_1007b67f8 */

void thunk_FUN_1007b67f8(void)

{
  FUN_1007b67f8();
  return;
}



/* Address: 0x100ab510c | thunk_FUN_100ab4404 */

void thunk_FUN_100ab4404(void)

{
  thunk_FUN_100ab4404();
  return;
}



/* Address: 0x100ab5110 | FUN_100ab5110 */

void FUN_100ab5110(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x828) = param_3;
  *(undefined8 *)(unaff_x22 + 0x820) = param_2;
  *(undefined8 *)(unaff_x22 + 0x818) = param_1;
  _swift_task_switch(FUN_100ab5130,0,0);
  return;
}



/* Address: 0x100ab5130 | FUN_100ab5130 */

void FUN_100ab5130(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x828);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x618) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x610) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x628) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x620) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x631) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x629) = uVar4;
  puVar1 = &DAT_100f307b0;
  _swift_allocObject(&DAT_100f307b0,0x39,7);
  *(undefined **)(unaff_x22 + 0x830) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x610,unaff_x22 + 0x5b0);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x838) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100ab51fc;
  FUN_100912dec(plVar2,unaff_x22 + 0x10,FUN_100a63e40,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100ab51fc | FUN_100ab51fc */

void FUN_100ab51fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x840) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x838));
  _swift_release(*(undefined8 *)(lVar2 + 0x830));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ab5268;
  }
  else {
    pcVar1 = FUN_100ab5cb8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab5268 | FUN_100ab5268 */

void FUN_100ab5268(ulong *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  Optional OVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined7 extraout_var;
  ulong uVar15;
  long *plVar16;
  undefined7 extraout_var_00;
  undefined8 uVar17;
  char *pcVar18;
  char *pcVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 *puVar23;
  long unaff_x22;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  
  lVar24 = *(long *)(unaff_x22 + 0x818);
  lVar22 = *(long *)(unaff_x22 + 0xa8);
  uVar15 = lVar22 - lVar24;
  if (SBORROW8(lVar22,lVar24)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100ab5cb8);
    (*pcVar7)();
  }
  cVar2 = *(char *)(unaff_x22 + 0xa1);
  lVar1 = 0xffffffff;
  if (*(long *)(unaff_x22 + 0x820) != 0x7fffffffffffffff) {
    lVar1 = *(long *)(unaff_x22 + 0x820);
  }
  if ((long)uVar15 < 1) {
    if (0xffffffff < lVar1) goto LAB_100ab52f4;
    if (lVar1 < 0) {
      uVar15 = 0;
      goto LAB_100ab54e4;
    }
    if ((cVar2 != '\x03') && (cVar2 != '\x06')) {
      if (0 < lVar22) {
        FUN_1006116e8();
        _swift_retain(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100ab57d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      uVar15 = 0;
      goto LAB_100ab5a08;
    }
    if (lVar24 != 0) goto LAB_100ab5450;
    uVar15 = 0;
  }
  else {
    if (0xffffffff < lVar1) {
LAB_100ab52f4:
      puVar23 = (undefined8 *)(unaff_x22 + 0x130);
      puVar11 = (undefined8 *)(unaff_x22 + 0x178);
      Swift::_StringGuts::grow(0xaf,param_2);
      *(undefined8 *)(unaff_x22 + 0x7d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x7e0) = 0xe000000000000000;
      SVar32.bridgeObject = (void *)0x8000000100db8910;
      SVar32.str = (char *)0xd00000000000001a;
      SVar35.bridgeObject = param_4;
      SVar35.str = param_3;
      Swift::String::append(SVar32,SVar35);
      *(long *)(unaff_x22 + 0x808) = lVar1;
      puVar6 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      pcVar19 = "";
      pcVar18 = pcVar19;
      puVar21 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (unaff_x22 + 0x808,unaff_x22 + 0x7d8,&DAT_100f2b538,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar29.bridgeObject = (void *)0x8000000100db8930;
      SVar29.str = (char *)0xd00000000000004e;
      SVar36.bridgeObject = puVar21;
      SVar36.str = pcVar18;
      Swift::String::append(SVar29,SVar36);
      *(undefined8 *)(unaff_x22 + 0x810) = 0xffffffff;
      Swift::__print_unlocked(unaff_x22 + 0x810,unaff_x22 + 0x7d8,&DAT_100f2b538,puVar12,puVar6);
      SVar30.bridgeObject = (void *)0x8000000100db8980;
      SVar30.str = (char *)0xd000000000000043;
      SVar37.bridgeObject = puVar12;
      SVar37.str = pcVar19;
      Swift::String::append(SVar30,SVar37);
      *(undefined1 *)(unaff_x22 + 0x130) = 6;
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x7d8);
      *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x7e0);
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined8 *)(unaff_x22 + 0x150) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x160) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x168) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x158;
      *(undefined1 *)(unaff_x22 + 0x178) = 6;
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x7d8);
      *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x7e0);
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x158;
      lVar22 = unaff_x22 + 0x400;
LAB_100ab5644:
      FUN_100a50050(puVar23,lVar22);
      FUN_100a5008c();
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar11,0,0);
      uVar14 = *puVar23;
      puVar11[1] = puVar23[1];
      *puVar11 = uVar14;
      uVar26 = puVar23[5];
      uVar20 = puVar23[4];
      uVar17 = puVar23[7];
      uVar14 = puVar23[6];
      uVar28 = puVar23[3];
      uVar27 = puVar23[2];
      puVar11[8] = puVar23[8];
      puVar11[5] = uVar26;
      puVar11[4] = uVar20;
      puVar11[7] = uVar17;
      puVar11[6] = uVar14;
      puVar11[3] = uVar28;
      puVar11[2] = uVar27;
      _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100ab56b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if (lVar1 < (long)uVar15) {
LAB_100ab54e4:
      puVar23 = (undefined8 *)(unaff_x22 + 0x208);
      puVar11 = (undefined8 *)(unaff_x22 + 0x250);
      Swift::_StringGuts::grow(0x83,param_2);
      *(undefined8 *)(unaff_x22 + 0x7c8) = 0;
      *(undefined8 *)(unaff_x22 + 2000) = 0xe000000000000000;
      SVar31.bridgeObject = (void *)0x8000000100db88c0;
      SVar31.str = (char *)0xd00000000000001e;
      SVar38.bridgeObject = param_4;
      SVar38.str = param_3;
      Swift::String::append(SVar31,SVar38);
      *(ulong *)(unaff_x22 + 0x7f8) = uVar15;
      SVar32 = Swift::CustomStringConvertible::get_description();
      SVar39.bridgeObject = param_4;
      SVar39.str = param_3;
      Swift::String::append(SVar32,SVar39);
      _swift_bridgeObjectRelease(SVar32.bridgeObject);
      SVar33.bridgeObject = (void *)0x8000000100db88e0;
      SVar33.str = (char *)0xd000000000000021;
      SVar40.bridgeObject = param_4;
      SVar40.str = param_3;
      Swift::String::append(SVar33,SVar40);
      *(long *)(unaff_x22 + 0x800) = lVar1;
      pcVar19 = "";
      puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (unaff_x22 + 0x800,unaff_x22 + 0x7c8,&DAT_100f2b538,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar34.bridgeObject = (void *)0x8000000100db8800;
      SVar34.str = (char *)0xd000000000000040;
      SVar41.bridgeObject = puVar12;
      SVar41.str = pcVar19;
      Swift::String::append(SVar34,SVar41);
      *(undefined1 *)(unaff_x22 + 0x208) = 6;
      *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x7c8);
      *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 2000);
      *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x165;
      *(undefined1 *)(unaff_x22 + 0x250) = 6;
      *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x7c8);
      *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 2000);
      *(undefined8 *)(unaff_x22 + 0x268) = 0;
      *(undefined8 *)(unaff_x22 + 0x270) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x278) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x280) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x288) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x290) = 0x165;
      lVar22 = unaff_x22 + 0x1c0;
      goto LAB_100ab5644;
    }
    if ((cVar2 != '\x03') && (cVar2 != '\x06')) {
      if ((0 < lVar22) && (uVar15 < 0x4000001)) {
        lVar22 = *(long *)(unaff_x22 + 0x828);
        uVar17 = *(undefined8 *)(lVar22 + 0x31);
        uVar14 = *(undefined8 *)(lVar22 + 0x29);
        uVar27 = *(undefined8 *)(lVar22 + 0x10);
        uVar26 = *(undefined8 *)(lVar22 + 0x28);
        uVar20 = *(undefined8 *)(lVar22 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x588) = *(undefined8 *)(lVar22 + 0x18);
        *(undefined8 *)(unaff_x22 + 0x580) = uVar27;
        *(undefined8 *)(unaff_x22 + 0x598) = uVar26;
        *(undefined8 *)(unaff_x22 + 0x590) = uVar20;
        *(undefined8 *)(unaff_x22 + 0x5a1) = uVar17;
        *(undefined8 *)(unaff_x22 + 0x599) = uVar14;
        puVar12 = &DAT_100f307d8;
        _swift_allocObject(&DAT_100f307d8,0x50,7);
        *(undefined **)(unaff_x22 + 0x958) = puVar12;
        uVar26 = *(undefined8 *)(lVar22 + 0x18);
        uVar20 = *(undefined8 *)(lVar22 + 0x10);
        uVar17 = *(undefined8 *)(lVar22 + 0x28);
        uVar14 = *(undefined8 *)(lVar22 + 0x20);
        uVar27 = *(undefined8 *)(lVar22 + 0x29);
        *(undefined8 *)(puVar12 + 0x31) = *(undefined8 *)(lVar22 + 0x31);
        *(undefined8 *)(puVar12 + 0x29) = uVar27;
        *(undefined8 *)(puVar12 + 0x18) = uVar26;
        *(undefined8 *)(puVar12 + 0x10) = uVar20;
        *(undefined8 *)(puVar12 + 0x28) = uVar17;
        *(undefined8 *)(puVar12 + 0x20) = uVar14;
        *(long *)(puVar12 + 0x40) = lVar24;
        *(ulong *)(puVar12 + 0x48) = uVar15;
        FUN_100a4c06c((undefined8 *)(unaff_x22 + 0x580),unaff_x22 + 0x550);
        plVar16 = (long *)0xa0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x960) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_100ab7658;
        FUN_100912dec(plVar16,unaff_x22 + 0x778,FUN_100a63f88,puVar12,&DAT_100eeaaa8);
        return;
      }
LAB_100ab5a08:
      FUN_1006116e8();
      uVar13 = *param_1;
      uVar5 = param_1[2];
      uVar4 = *(undefined2 *)((long)param_1 + 0x14);
      uVar3 = *(undefined1 *)((long)param_1 + 0x16);
      uVar25 = param_1[1];
      *(ulong *)(unaff_x22 + 0x748) = uVar13;
      *(ulong *)(unaff_x22 + 0x750) = uVar25;
      *(int *)(unaff_x22 + 0x758) = (int)uVar5;
      *(undefined2 *)(unaff_x22 + 0x75c) = uVar4;
      *(undefined1 *)(unaff_x22 + 0x75e) = uVar3;
      if ((int)uVar5 - (uint)CONCAT21(uVar4,uVar3) < uVar15) {
        _swift_retain();
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = (uint)uVar13;
        if ((uVar13 & 1) == 0) {
          FUN_1000d2130();
          FUN_100612224(uVar15,uVar10 & 1);
        }
        else {
          FUN_100612380(uVar15,0);
        }
      }
      else {
        _swift_retain();
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x828);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x818);
      _swift_retain(uVar14);
      uVar17 = 0x800000;
      FUN_100a5a8dc();
      FUN_100a586f8(unaff_x22 + 0x5e0);
      FUN_10026569c(uVar14,uVar17,uVar20);
      lVar22 = *(long *)(unaff_x22 + 0x5e0);
      *(long *)(unaff_x22 + 0x8d0) = lVar22;
      if (*(char *)(unaff_x22 + 0x608) != '\x01') {
        uVar14 = *(undefined8 *)(lVar22 + 0x10);
        bVar9 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar9 & 1) == 0) {
          pcVar7 = FUN_100a6a4a0;
          _swift_task_addCancellationHandler(FUN_100a6a4a0,uVar14);
          *(code **)(unaff_x22 + 0x910) = pcVar7;
          plVar16 = (long *)0x130;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x918) = plVar16;
          pcVar7 = FUN_100ab6a78;
          goto LAB_100ab5c88;
        }
        plVar16 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x908) = plVar16;
        FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_100ab69e8;
        goto LAB_100ab5c1c;
      }
      *(long *)(unaff_x22 + 0x668) = lVar22;
      *(undefined8 *)(unaff_x22 + 0x688) = *(undefined8 *)(unaff_x22 + 0x600);
      *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x5f8);
      *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)(unaff_x22 + 0x5f0);
      *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)(unaff_x22 + 0x5e8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x680);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x688);
      FUN_10007d048(unaff_x22 + 0x668,uVar17);
      uVar14 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar20,uVar17,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                 ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                );
      *(undefined8 *)(unaff_x22 + 0x8d8) = uVar14;
      OVar8 = Swift::Optional::typeMetadataAccessor();
      *(long *)(unaff_x22 + 0x8e0) = CONCAT71(extraout_var_00,OVar8.value);
      lVar22 = *(long *)(CONCAT71(extraout_var_00,OVar8.value) + -8);
      *(long *)(unaff_x22 + 0x8e8) = lVar22;
      uVar15 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x8f0) = uVar15;
      plVar16 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x8f8) = plVar16;
      pcVar7 = FUN_100ab6984;
      goto LAB_100ab5b78;
    }
    if (lVar24 != 0) {
LAB_100ab5450:
      *(undefined1 *)(unaff_x22 + 0x4d8) = 9;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x8000000100db8620;
      *(undefined8 *)(unaff_x22 + 0x4f8) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x508) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x510) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x518) = 0x1a1;
      puVar11 = (undefined8 *)(unaff_x22 + 0xe8);
      puVar23 = (undefined8 *)(unaff_x22 + 0x4d8);
      *(undefined1 *)(unaff_x22 + 0xe8) = 9;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0x8000000100db8620;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x100) = 0;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x128) = 0x1a1;
      lVar22 = unaff_x22 + 0x448;
      goto LAB_100ab5644;
    }
  }
  FUN_1006116e8();
  uVar13 = *param_1;
  uVar5 = param_1[2];
  uVar4 = *(undefined2 *)((long)param_1 + 0x14);
  uVar3 = *(undefined1 *)((long)param_1 + 0x16);
  uVar25 = param_1[1];
  *(ulong *)(unaff_x22 + 0x718) = uVar13;
  *(ulong *)(unaff_x22 + 0x720) = uVar25;
  *(int *)(unaff_x22 + 0x728) = (int)uVar5;
  *(undefined2 *)(unaff_x22 + 0x72c) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x72e) = uVar3;
  if ((int)uVar5 - (uint)CONCAT21(uVar4,uVar3) < uVar15) {
    _swift_retain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = (uint)uVar13;
    if ((uVar13 & 1) == 0) {
      FUN_1000d2130();
      FUN_100612224(uVar15,uVar10 & 1);
    }
    else {
      FUN_100612380(uVar15,0);
    }
  }
  else {
    _swift_retain();
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x828);
  _swift_retain(uVar14);
  uVar17 = 0x800000;
  uVar20 = 0;
  FUN_100a5a8dc();
  FUN_100a586f8(unaff_x22 + 0x520);
  FUN_10026569c(uVar14,uVar17,uVar20);
  lVar22 = *(long *)(unaff_x22 + 0x520);
  *(long *)(unaff_x22 + 0x848) = lVar22;
  if (*(char *)(unaff_x22 + 0x548) != '\x01') {
    uVar14 = *(undefined8 *)(lVar22 + 0x10);
    bVar9 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar9 & 1) == 0) {
      pcVar7 = thunk_FUN_100a6a4a0;
      _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,uVar14);
      *(code **)(unaff_x22 + 0x888) = pcVar7;
      plVar16 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x890) = plVar16;
      pcVar7 = FUN_100ab5dbc;
LAB_100ab5c88:
      *plVar16 = unaff_x22;
      plVar16[1] = (long)pcVar7;
      FUN_100a691b0(uVar14);
      return;
    }
    plVar16 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x880) = plVar16;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar16 = unaff_x22;
    plVar16[1] = (long)FUN_100ab5d28;
LAB_100ab5c1c:
    Swift::_withTaskCancellationHandler();
    return;
  }
  *(long *)(unaff_x22 + 0x640) = lVar22;
  *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x530);
  *(undefined8 *)(unaff_x22 + 0x648) = *(undefined8 *)(unaff_x22 + 0x528);
  *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)(unaff_x22 + 0x540);
  *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x538);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x658);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x660);
  FUN_10007d048(unaff_x22 + 0x640,uVar17);
  uVar14 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar20,uVar17,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
  *(undefined8 *)(unaff_x22 + 0x850) = uVar14;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x858) = CONCAT71(extraout_var,OVar8.value);
  lVar22 = *(long *)(CONCAT71(extraout_var,OVar8.value) + -8);
  *(long *)(unaff_x22 + 0x860) = lVar22;
  uVar15 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x868) = uVar15;
  plVar16 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x870) = plVar16;
  pcVar7 = FUN_100ab5cc4;
LAB_100ab5b78:
  *plVar16 = unaff_x22;
  plVar16[1] = (long)pcVar7;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100ab5cb8 | FUN_100ab5cb8 */

void FUN_100ab5cb8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100ab5cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


