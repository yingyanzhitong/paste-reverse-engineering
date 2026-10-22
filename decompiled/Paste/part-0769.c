/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008753b0 | FUN_1008753b0 */

void FUN_1008753b0(void)

{
  FUN_100875424();
  return;
}



/* Address: 0x1008753bc | FUN_1008753bc */

void FUN_1008753bc(void)

{
  FUN_100875534();
  return;
}



/* Address: 0x1008753c8 | FUN_1008753c8 */

void FUN_1008753c8(undefined8 param_1,undefined8 param_2)

{
  FUN_1008755a0(param_1,param_2,FUN_1008753b0);
  return;
}



/* Address: 0x1008753d4 | FUN_1008753d4 */

void FUN_1008753d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008753b0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x1008753e0 | FUN_1008753e0 */

void FUN_1008753e0(void)

{
  FUN_100875614();
  return;
}



/* Address: 0x1008753ec | FUN_1008753ec */

void FUN_1008753ec(void)

{
  FUN_100875678();
  return;
}



/* Address: 0x1008753f8 | FUN_1008753f8 */

uint FUN_1008753f8(uint param_1)

{
  FUN_1008756ac();
  return param_1 & 1;
}



/* Address: 0x100875418 | FUN_100875418 */

void FUN_100875418(void)

{
  FUN_100875424();
  return;
}



/* Address: 0x100875424 | FUN_100875424 */

void FUN_100875424(undefined8 param_1,Hasher param_2,ulong param_3,ulong param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  char cVar2;
  Hasher HVar3;
  undefined1 auStack_58 [24];
  
  cVar2 = (char)(param_4 >> 0x38);
  if (cVar2 == '\0') {
    Swift::Hasher::_combine(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x0001008754d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2.unknown,param_3);
    return;
  }
  if (cVar2 == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    _swift_beginAccess(param_2.unknown + 0x18,auStack_58,0,0);
    lVar1 = *(long *)(param_2.unknown + 0x18) + (param_4 >> 0x18 & 0xffff00) +
            (param_4 >> 0x30 & 0xff);
    Swift::Hasher::combine
              ((undefined *)(lVar1 + (param_3 & 0xffffffff)),
               (undefined *)(lVar1 + (param_3 >> 0x20)));
  }
  else {
    HVar3.unknown = param_2.unknown;
    Swift::Hasher::_combine(2,param_2);
    if (param_2.unknown != (undefined *)0x0) {
      Swift::Hasher::_combine(1,HVar3);
      FUN_10085d548(param_1,param_2.unknown);
      return;
    }
    Swift::Hasher::_combine(0,HVar3);
  }
  return;
}



/* Address: 0x100875528 | FUN_100875528 */

void FUN_100875528(void)

{
  FUN_100875534();
  return;
}



/* Address: 0x100875534 | FUN_100875534 */

void FUN_100875534(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  (*param_4)(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100875594 | FUN_100875594 */

void FUN_100875594(undefined8 param_1,undefined8 param_2)

{
  FUN_1008755a0(param_1,param_2,FUN_100875418);
  return;
}



/* Address: 0x1008755a0 | FUN_1008755a0 */

void FUN_1008755a0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  Swift::Hasher::init(0);
  HVar3.unknown = auStack_78;
  (*param_3)(HVar3.unknown,uVar1,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1008755fc | FUN_1008755fc */

void FUN_1008755fc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100875418(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x100875608 | FUN_100875608 */

void FUN_100875608(void)

{
  FUN_100875614();
  return;
}



/* Address: 0x100875614 | FUN_100875614 */

void FUN_100875614(__int64 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_78;
  (*param_4)(HVar3.unknown,uVar1,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10087566c | FUN_10087566c */

void FUN_10087566c(void)

{
  FUN_100875678();
  return;
}



/* Address: 0x100875678 | FUN_100875678 */

uint FUN_100875678(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1008756ac(uVar1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2],param_5);
  return (uint)uVar1 & 1;
}



/* Address: 0x1008756ac | FUN_1008756ac */

ulong FUN_1008756ac(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                   ulong param_6,code *UNRECOVERED_JUMPTABLE)

{
  char cVar1;
  ulong uVar2;
  
  uVar2 = param_6 >> 0x38;
  cVar1 = (char)(param_3 >> 0x38);
  if (cVar1 == '\0') {
    if (uVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100875708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_4,param_5);
      return param_1;
    }
  }
  else if (cVar1 == '\x01') {
    if (uVar2 == 1) {
      FUN_100613e94(param_1,param_2,param_3 & 0xffffffffffffff,param_4,param_5,
                    param_6 & 0xffffffffffffff);
      return param_1;
    }
  }
  else if (uVar2 == 2) {
    if (param_1 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      _swift_retain(param_4);
      thunk_FUN_100861ee4(param_1,param_4);
      FUN_100875938(param_4,param_5,param_6,2);
      if ((param_1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10087577c | thunk_FUN_100875780 */

void thunk_FUN_100875780(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8be0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f010,&DAT_100f08218);
  DAT_100fe8be0 = pTVar1;
  return;
}



/* Address: 0x100875780 | FUN_100875780 */

void FUN_100875780(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8be0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f010,&DAT_100f08218);
  DAT_100fe8be0 = pTVar1;
  return;
}



/* Address: 0x1008757c0 | thunk_FUN_1008757c4 */

void thunk_FUN_1008757c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8be8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f078;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f078,&DAT_100f082a8);
  DAT_100fe8be8 = pTVar1;
  return;
}



/* Address: 0x1008757c4 | FUN_1008757c4 */

void FUN_1008757c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8be8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f078;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f078,&DAT_100f082a8);
  DAT_100fe8be8 = pTVar1;
  return;
}



/* Address: 0x100875804 | thunk_FUN_10087583c */

undefined8 * thunk_FUN_10087583c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_1008758fc(uVar1,uVar2,(ulong)*(uint7 *)(param_2 + 2),uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(int *)(param_1 + 2) = (int)uVar6;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  return param_1;
}



/* Address: 0x100875808 | FUN_100875808 */

void FUN_100875808(undefined8 *param_1)

{
  FUN_100875938(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2),
                *(undefined1 *)((long)param_1 + 0x17));
  return;
}



/* Address: 0x10087583c | FUN_10087583c */

undefined8 * FUN_10087583c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_1008758fc(uVar1,uVar2,(ulong)*(uint7 *)(param_2 + 2),uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(int *)(param_1 + 2) = (int)uVar6;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  return param_1;
}



/* Address: 0x1008758b8 | thunk_FUN_100875974 */

undefined8 * thunk_FUN_100875974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined3 uVar7;
  uint7 uVar8;
  uint7 uVar9;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar9 = *(uint7 *)(param_2 + 2);
  uVar5 = *(undefined1 *)((long)param_2 + 0x17);
  uVar6 = *(undefined1 *)((long)param_2 + 0x16);
  uVar7 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_1008758fc(uVar1,uVar3,(ulong)*(uint7 *)(param_2 + 2),uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar8 = *(uint7 *)(param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(int *)(param_1 + 2) = (int)uVar9;
  *(undefined1 *)((long)param_1 + 0x16) = uVar6;
  *(short *)((long)param_1 + 0x14) = (short)uVar7;
  uVar6 = *(undefined1 *)((long)param_1 + 0x17);
  *(undefined1 *)((long)param_1 + 0x17) = uVar5;
  FUN_100875938(uVar2,uVar4,(ulong)uVar8,uVar6);
  return param_1;
}



/* Address: 0x1008758bc | FUN_1008758bc */

void FUN_1008758bc(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1008758d0 | thunk_FUN_100875a14 */

undefined8 * thunk_FUN_100875a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint7 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined1 *)((long)param_2 + 0x17);
  uVar8 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined2 *)((long)param_2 + 0x14);
  uVar3 = *(undefined1 *)((long)param_2 + 0x16);
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar5 = *(uint7 *)(param_1 + 2);
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x14) = uVar4;
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  uVar3 = *(undefined1 *)((long)param_1 + 0x17);
  *(undefined1 *)((long)param_1 + 0x17) = uVar2;
  FUN_100875938(uVar6,uVar7,(ulong)uVar5,uVar3);
  return param_1;
}



/* Address: 0x1008758d4 | thunk_FUN_100875a84 */

int thunk_FUN_100875a84(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)((long)param_1 + 0x17) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x17) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1008758d8 | thunk_FUN_100875acc */

void thunk_FUN_100875acc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x17) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1008758dc | FUN_1008758dc */

undefined1 FUN_1008758dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x17);
}



/* Address: 0x1008758e4 | FUN_1008758e4 */

void FUN_1008758e4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x17) = param_2;
  return;
}



/* Address: 0x1008758ec | FUN_1008758ec */

undefined1  [16] FUN_1008758ec(void)

{
  return ZEXT816(0x100f08218);
}



/* Address: 0x1008758fc | FUN_1008758fc */

void FUN_1008758fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (1 < (param_4 & 0xff) - 1) {
    if ((param_4 & 0xff) != 0) {
      return;
    }
    _swift_retain();
    param_1 = param_2;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x100875938 | FUN_100875938 */

void FUN_100875938(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if (1 < (param_4 & 0xff) - 1) {
    if ((param_4 & 0xff) != 0) {
      return;
    }
    _swift_release();
    param_1 = param_2;
  }
  _swift_release(param_1);
  return;
}



/* Address: 0x100875974 | FUN_100875974 */

undefined8 * FUN_100875974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined3 uVar7;
  uint7 uVar8;
  uint7 uVar9;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar9 = *(uint7 *)(param_2 + 2);
  uVar5 = *(undefined1 *)((long)param_2 + 0x17);
  uVar6 = *(undefined1 *)((long)param_2 + 0x16);
  uVar7 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_1008758fc(uVar1,uVar3,(ulong)*(uint7 *)(param_2 + 2),uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar8 = *(uint7 *)(param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(int *)(param_1 + 2) = (int)uVar9;
  *(undefined1 *)((long)param_1 + 0x16) = uVar6;
  *(short *)((long)param_1 + 0x14) = (short)uVar7;
  uVar6 = *(undefined1 *)((long)param_1 + 0x17);
  *(undefined1 *)((long)param_1 + 0x17) = uVar5;
  FUN_100875938(uVar2,uVar4,(ulong)uVar8,uVar6);
  return param_1;
}



/* Address: 0x100875a14 | FUN_100875a14 */

undefined8 * FUN_100875a14(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint7 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined1 *)((long)param_2 + 0x17);
  uVar8 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined2 *)((long)param_2 + 0x14);
  uVar3 = *(undefined1 *)((long)param_2 + 0x16);
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar5 = *(uint7 *)(param_1 + 2);
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x14) = uVar4;
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  uVar3 = *(undefined1 *)((long)param_1 + 0x17);
  *(undefined1 *)((long)param_1 + 0x17) = uVar2;
  FUN_100875938(uVar6,uVar7,(ulong)uVar5,uVar3);
  return param_1;
}



/* Address: 0x100875a84 | FUN_100875a84 */

int FUN_100875a84(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)((long)param_1 + 0x17) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x17) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100875acc | FUN_100875acc */

void FUN_100875acc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x17) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x100875b10 | FUN_100875b10 */

undefined1  [16] FUN_100875b10(void)

{
  return ZEXT816(0x100f082a8);
}



/* Address: 0x100875b20 | thunk_FUN_100875808 */

void thunk_FUN_100875808(void)

{
  FUN_100875808();
  return;
}



/* Address: 0x100875b24 | thunk_FUN_1008758dc */

void thunk_FUN_1008758dc(void)

{
  FUN_1008758dc();
  return;
}



/* Address: 0x100875b28 | thunk_FUN_100875acc */

void thunk_FUN_100875acc(void)

{
  thunk_FUN_100875acc();
  return;
}



/* Address: 0x100875b2c | thunk_FUN_1008758e4 */

void thunk_FUN_1008758e4(void)

{
  FUN_1008758e4();
  return;
}



/* Address: 0x100875b30 | thunk_FUN_10087583c */

void thunk_FUN_10087583c(void)

{
  thunk_FUN_10087583c();
  return;
}



/* Address: 0x100875b34 | thunk_FUN_100875974 */

void thunk_FUN_100875974(void)

{
  thunk_FUN_100875974();
  return;
}



/* Address: 0x100875b38 | thunk_FUN_100875a14 */

void thunk_FUN_100875a14(void)

{
  thunk_FUN_100875a14();
  return;
}



/* Address: 0x100875b3c | thunk_FUN_100875a84 */

void thunk_FUN_100875a84(void)

{
  thunk_FUN_100875a84();
  return;
}



/* Address: 0x100875b40 | FUN_100875b40 */

void FUN_100875b40(undefined1 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x100875b70 | FUN_100875b70 */

void FUN_100875b70(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x100875b7c | thunk_FUN_100877154 */

void thunk_FUN_100877154(void)

{
  FUN_100877154();
  return;
}



/* Address: 0x100875b80 | FUN_100875b80 */

/* WARNING: Removing unreachable block (ram,0x000100875c74) */
/* WARNING: Removing unreachable block (ram,0x000100875f28) */
/* WARNING: Removing unreachable block (ram,0x000100875c84) */
/* WARNING: Removing unreachable block (ram,0x000100875ca4) */
/* WARNING: Removing unreachable block (ram,0x000100875f5c) */

void FUN_100875b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char cVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puVar16;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 local_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar5 = &DAT_100f08218;
  puVar9 = puVar5;
  uVar12 = param_3;
  FUN_100876708();
  cVar2 = (char)((ulong)uVar12 >> 0x38);
  if (cVar2 == '\0') {
    uVar14 = (uint)*(byte *)(unaff_x20 + 0x10);
    _swift_retain(puVar5);
    _swift_retain(puVar9);
    puVar6 = puVar5;
    puVar10 = puVar9;
    FUN_1008790c8();
    puVar15 = &DAT_100fe8bf0;
    FUN_1000f7830(&DAT_100fe8bf0,&DAT_100c7f0f0);
    local_d8 = (ulong)(uVar14 & 0xff);
    local_a7 = 2;
    local_e8 = puVar6;
    puStack_e0 = puVar10;
    local_d0 = puVar15;
    _swift_retain(puVar6);
    _swift_bridgeObjectRetain(puVar10);
    FUN_100626ebc(&local_e8,param_3);
    _swift_release(puVar9);
    _swift_release(puVar5);
    _swift_bridgeObjectRelease(puVar10);
    _swift_release(puVar6);
  }
  else {
    if (cVar2 == '\x01') {
      puVar15 = &DAT_100fe8bf0;
      FUN_1000f7830(&DAT_100fe8bf0,&DAT_100c7f0f0);
      local_d8 = CONCAT17(1,(int7)uVar12);
      local_a7 = 2;
      local_e8 = puVar5;
      puStack_e0 = puVar9;
      local_d0 = puVar15;
      _swift_retain(puVar5);
      FUN_100626ebc(&local_e8,param_3);
      uVar13 = 1;
    }
    else {
      if (puVar5 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
        puStack_e0 = (undefined *)0x0;
      }
      else {
        puVar6 = puVar5;
        puVar10 = puVar9;
        FUN_10085d8f8();
        puVar15 = puVar5;
        FUN_10085d8f8();
        if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100875fe8);
          (*pcVar4)();
        }
        puVar15 = puVar5;
        FUN_10085d8f8();
        if (((long)puVar6 < 0) || ((long)puVar15 < (long)puVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100875fec);
          (*pcVar4)();
        }
        puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (puVar6 != (undefined *)0x0) {
          local_e8 = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_100876ee4(0,puVar6,0);
          puVar16 = (undefined *)0x0;
          puVar15 = local_e8;
          do {
            puVar11 = puVar5;
            FUN_10085d980(&local_a0,puVar16);
            uVar3 = uStack_98;
            uVar13 = local_a0;
            uVar7 = uStack_98;
            _swift_bridgeObjectRetain();
            FUN_100857828();
            puVar10 = puVar11;
            FUN_1006ec3e4(&local_a0);
            uVar1 = *(ulong *)(puVar15 + 0x10);
            puVar8 = (undefined *)(uVar1 + 1);
            local_e8 = puVar15;
            if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar1) {
              puVar10 = puVar8;
              FUN_100876ee4(1 < *(ulong *)(puVar15 + 0x18),puVar8,1);
            }
            puVar15 = local_e8;
            *(undefined **)(local_e8 + 0x10) = puVar8;
            *(undefined8 *)(local_e8 + uVar1 * 0x20 + 0x20) = uVar13;
            *(undefined8 *)(local_e8 + uVar1 * 0x20 + 0x28) = uVar3;
            *(undefined8 *)(local_e8 + uVar1 * 0x20 + 0x30) = uVar7;
            *(undefined **)(local_e8 + uVar1 * 0x20 + 0x38) = puVar11;
            puVar8 = puVar5;
            FUN_10085d8f8();
            if ((long)puVar8 <= (long)puVar16) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100875fe4);
              (*pcVar4)();
            }
            puVar16 = puVar16 + 1;
          } while (puVar6 != puVar16);
        }
        thunk_FUN_10089f744();
        puStack_e0 = (undefined *)((ulong)puVar10 & 0xff);
      }
      puVar6 = &DAT_100fe8bf0;
      FUN_1000f7830(&DAT_100fe8bf0,&DAT_100c7f0f0);
      local_d8 = 0x200000000000000;
      local_a7 = 2;
      local_e8 = puVar15;
      local_d0 = puVar6;
      FUN_100626ebc(&local_e8,param_3);
      uVar13 = 2;
    }
    FUN_100875938(puVar5,puVar9,uVar12,uVar13);
  }
  FUN_1005e70f4(&local_e8);
  return;
}



/* Address: 0x100875fec | FUN_100875fec */

void FUN_100875fec(void)

{
  FUN_100876520();
  return;
}



/* Address: 0x100876000 | FUN_100876000 */

void FUN_100876000(void)

{
  FUN_100876594();
  return;
}



/* Address: 0x10087600c | FUN_10087600c */

void FUN_10087600c(void)

{
  FUN_1008765f8();
  return;
}



/* Address: 0x100876018 | FUN_100876018 */

void FUN_100876018(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061e844(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x100876020 | FUN_100876020 */

void FUN_100876020(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e5e4(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876028 | FUN_100876028 */

void FUN_100876028(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e5f0(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876030 | FUN_100876030 */

void FUN_100876030(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e6d8(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876038 | FUN_100876038 */

void FUN_100876038(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e6e4(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876040 | FUN_100876040 */

void FUN_100876040(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e764(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876048 | FUN_100876048 */

void FUN_100876048(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e770(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876050 | FUN_100876050 */

void FUN_100876050(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061e7bc(param_1,param_2,*unaff_x20);
  return;
}


