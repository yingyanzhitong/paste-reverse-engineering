/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100613ae4 | FUN_100613ae4 */

void FUN_100613ae4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100613b24);
    (*pcVar2)();
  }
  if ((int)((ulong)param_1 >> 0x20) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100613b28);
    (*pcVar2)();
  }
  uVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)param_1;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100613b2c);
    (*pcVar2)();
  }
  if (uVar1 <= *(int *)(unaff_x20 + 0x10) -
               (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),*(undefined1 *)(unaff_x20 + 0x16)))
  {
    *(uint *)(unaff_x20 + 0xc) = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100613b30);
  (*pcVar2)();
}



/* Address: 0x100613b30 | FUN_100613b30 */

undefined * FUN_100613b30(void)

{
  return &DAT_100c67960;
}



/* Address: 0x100613b3c | FUN_100613b3c */

undefined * FUN_100613b3c(void)

{
  return &DAT_100c67961;
}



/* Address: 0x100613b48 | FUN_100613b48 */

String FUN_100613b48(undefined1 param_1)

{
  String SVar1;
  undefined1 local_11;
  
  local_11 = param_1;
  SVar1 = Swift::String::_init(&local_11,&DAT_100eeabc8);
  return SVar1;
}



/* Address: 0x100613b74 | FUN_100613b74 */

String FUN_100613b74(void)

{
  undefined1 *unaff_x20;
  String SVar1;
  undefined1 local_11;
  
  local_11 = *unaff_x20;
  SVar1 = Swift::String::_init(&local_11,&DAT_100eeabc8);
  return SVar1;
}



/* Address: 0x100613ba4 | FUN_100613ba4 */

void FUN_100613ba4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  FUN_100613e94(param_1,param_2,param_3 & 0xffffffffffffff,param_4,param_5,
                param_6 & 0xffffffffffffff);
  return;
}



/* Address: 0x100613bb0 | FUN_100613bb0 */

void FUN_100613bb0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100613e94(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2),*param_2,param_2[1],
                (ulong)*(uint7 *)(param_2 + 2));
  return;
}



/* Address: 0x100613bec | FUN_100613bec */

void FUN_100613bec(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x18,auStack_58,0,0);
  lVar1 = *(long *)(param_2 + 0x18) + (param_4 >> 0x18 & 0xffff00) + (param_4 >> 0x30 & 0xff);
  Swift::Hasher::combine
            ((undefined *)(lVar1 + (param_3 & 0xffffffff)),(undefined *)(lVar1 + (param_3 >> 0x20)))
  ;
  return;
}



/* Address: 0x100613c68 | FUN_100613c68 */

void FUN_100613c68(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  UnsafeRawBufferPointer bytes;
  undefined1 auStack_90 [96];
  
  Swift::Hasher::init(0);
  _swift_beginAccess(param_1 + 0x18,auStack_90,0,0);
  lVar1 = *(long *)(param_1 + 0x18) + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff);
  bytes.unknown = (undefined *)(lVar1 + (param_2 & 0xffffffff));
  Swift::Hasher::combine(bytes,(undefined *)(lVar1 + (param_2 >> 0x20)));
  Swift::Hasher::_finalize((Hasher)bytes.unknown);
  return;
}



/* Address: 0x100613cec | FUN_100613cec */

void FUN_100613cec(void)

{
  undefined8 *unaff_x20;
  
  FUN_100613c68(*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x100613d08 | FUN_100613d08 */

void FUN_100613d08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100613bec(param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x100613d24 | FUN_100613d24 */

void FUN_100613d24(__int64 param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  UnsafeRawBufferPointer bytes;
  long lVar5;
  long *unaff_x20;
  undefined1 auStack_a0 [96];
  
  lVar5 = *unaff_x20;
  uVar1 = *(uint *)(unaff_x20 + 1);
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  Swift::Hasher::init(param_1);
  _swift_beginAccess(lVar5 + 0x18,auStack_a0,0,0);
  lVar5 = *(long *)(lVar5 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3;
  bytes.unknown = (undefined *)(lVar5 + (ulong)uVar1);
  Swift::Hasher::combine(bytes,(undefined *)(lVar5 + (ulong)uVar2));
  Swift::Hasher::_finalize((Hasher)bytes.unknown);
  return;
}



/* Address: 0x100613da4 | FUN_100613da4 */

void FUN_100613da4(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  
  lVar5 = *(long *)(param_5 + -8);
  lVar3 = *(long *)(lVar5 + 0x40);
  iVar1 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  if (iVar1 == 0) {
    pcVar4 = *(code **)(*(long *)(param_4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    (*param_2)(param_1);
    if (unaff_x21 != 0) {
      (**(code **)(lVar5 + 0x20))
                (param_7,&stack0xffffffffffffffa0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_5);
      return;
    }
    pcVar4 = *(code **)(*(long *)(param_4 + -8) + 0x38);
    uVar2 = 0;
  }
  (*pcVar4)(param_1,uVar2,1,param_4);
  return;
}



/* Address: 0x100613e94 | FUN_100613e94 */

bool FUN_100613e94(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar3 = (uint)(param_6 >> 0x20);
  if ((int)(param_2 >> 0x20) - (int)param_2 == (int)(param_5 >> 0x20) - (int)param_5) {
    if (((((int)param_3 == (int)param_6) && (((uint)(param_3 >> 0x20) & 0xffff) == (uVar3 & 0xffff))
         ) && (((ushort)(param_3 >> 0x30) & 0xff) == (uVar3 >> 0x10 & 0xff))) &&
       (param_1 == param_4)) {
      bVar1 = true;
    }
    else {
      _swift_beginAccess(param_1 + 0x18,auStack_78,0,0);
      lVar4 = *(long *)(param_1 + 0x18);
      _swift_beginAccess(param_4 + 0x18,auStack_90,0,0);
      iVar2 = _memcmp((void *)(lVar4 + (param_3 >> 0x20 & 0xffff) * 0x100 + (param_3 >> 0x30 & 0xff)
                              + (param_2 & 0xffffffff)),
                      (void *)(*(long *)(param_4 + 0x18) + ((ulong)uVar3 & 0xffff) * 0x100 +
                               (param_6 >> 0x30 & 0xff) + (param_5 & 0xffffffff)),
                      (param_2 >> 0x20) - (param_2 & 0xffffffff));
      bVar1 = iVar2 == 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100613fa8 | FUN_100613fa8 */

void FUN_100613fa8(int param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_1 - 1U | param_1 - 1U >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar5 = uVar1 + 1;
    if (uVar1 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
  }
  uVar3 = (ulong)uVar5;
  (*param_2)();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100614040);
    (*pcVar2)();
  }
  uVar4 = uVar3;
  FUN_1006140ec();
  _swift_allocObject();
  *(uint *)(uVar4 + 0x10) = uVar5;
  *(ulong *)(uVar4 + 0x18) = uVar3;
  *(code **)(uVar4 + 0x20) = param_2;
  *(undefined8 *)(uVar4 + 0x28) = param_3;
  *(undefined8 *)(uVar4 + 0x30) = param_4;
  *(undefined8 *)(uVar4 + 0x38) = param_5;
  return;
}



/* Address: 0x100614040 | FUN_100614040 */

void FUN_100614040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_100612eb8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x100614060 | FUN_100614060 */

void FUN_100614060(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6f40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67a10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67a10,&DAT_100eeab30);
  DAT_100fd6f40 = pTVar1;
  return;
}



/* Address: 0x1006140a0 | FUN_1006140a0 */

void FUN_1006140a0(undefined4 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  long unaff_x20;
  
  uVar2 = (undefined4)param_2;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 + param_2;
  }
  FUN_1006124ec(*(undefined8 *)(unaff_x20 + 0x10),uVar2,lVar1,*(undefined4 *)(unaff_x20 + 0x18));
  *param_1 = uVar2;
  return;
}



/* Address: 0x1006140ec | FUN_1006140ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006140ec(void)

{
  return ZEXT816(0x100fd6f98);
}



/* Address: 0x10061410c | FUN_10061410c */

void FUN_10061410c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1006131c8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x10061412c | thunk_FUN_100614130 */

void thunk_FUN_100614130(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67a90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67a90,&DAT_100eeab30);
  DAT_100fd6f48 = pTVar1;
  return;
}



/* Address: 0x100614130 | FUN_100614130 */

void FUN_100614130(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67a90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67a90,&DAT_100eeab30);
  DAT_100fd6f48 = pTVar1;
  return;
}



/* Address: 0x100614170 | thunk_FUN_100614174 */

void thunk_FUN_100614174(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67ae0,&DAT_100eeaaa8);
  DAT_100fd6f50 = pTVar1;
  return;
}



/* Address: 0x100614174 | FUN_100614174 */

void FUN_100614174(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6f50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67ae0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67ae0,&DAT_100eeaaa8);
  DAT_100fd6f50 = pTVar1;
  return;
}



/* Address: 0x1006141b4 | FUN_1006141b4 */

void FUN_1006141b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *(undefined4 *)((long)param_1 + 3) = *(undefined4 *)((long)param_2 + 3);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006141c8 | FUN_1006141c8 */

int FUN_1006141c8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 7) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1006141e8 | FUN_1006141e8 */

void FUN_1006141e8(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)((long)param_1 + 6) = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = param_2 + -1;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 7) = uVar1;
  return;
}



/* Address: 0x100614218 | FUN_100614218 */

undefined1  [16] FUN_100614218(void)

{
  return ZEXT816(0x100eea9a0);
}



/* Address: 0x100614228 | FUN_100614228 */

undefined1  [16] FUN_100614228(void)

{
  return ZEXT816(0x100eeaa20);
}



/* Address: 0x100614238 | thunk_FUN_10061423c */

undefined8 * thunk_FUN_10061423c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  _swift_retain();
  return param_1;
}



/* Address: 0x10061423c | FUN_10061423c */

undefined8 * FUN_10061423c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
  _swift_retain();
  return param_1;
}



/* Address: 0x100614280 | FUN_100614280 */

undefined8 * FUN_100614280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  return param_1;
}



/* Address: 0x1006142ec | FUN_1006142ec */

void FUN_1006142ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100614300 | FUN_100614300 */

undefined8 * FUN_100614300(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x16) = *(undefined1 *)((long)param_2 + 0x16);
  return param_1;
}



/* Address: 0x100614354 | FUN_100614354 */

int FUN_100614354(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x17) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10061439c | FUN_10061439c */

void FUN_10061439c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined1 *)((long)param_1 + 0x16) = 0;
    *(undefined2 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x17) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1006143e4 | FUN_1006143e4 */

undefined1  [16] FUN_1006143e4(void)

{
  return ZEXT816(0x100eeaaa8);
}



/* Address: 0x1006143f4 | FUN_1006143f4 */

undefined1  [16] FUN_1006143f4(void)

{
  return ZEXT816(0x100eeab30);
}



/* Address: 0x100614404 | FUN_100614404 */

undefined1  [16] FUN_100614404(void)

{
  return ZEXT816(0x100eeabc8);
}



/* Address: 0x100614414 | thunk_FUN_100614418 */

void thunk_FUN_100614418(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67c0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67c0c,&DAT_100eeabc8);
  DAT_100fd7008 = pTVar1;
  return;
}



/* Address: 0x100614418 | FUN_100614418 */

void FUN_100614418(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67c0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67c0c,&DAT_100eeabc8);
  DAT_100fd7008 = pTVar1;
  return;
}



/* Address: 0x100614458 | thunk_FUN_100611d90 */

void thunk_FUN_100611d90(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Address: 0x10061445c | thunk_FUN_100611d98 */

void thunk_FUN_100611d98(undefined4 param_1)

{
  long unaff_x20;
  
  *(undefined4 *)(unaff_x20 + 0xc) = param_1;
  return;
}



/* Address: 0x100614460 | thunk_FUN_10061160c */

void thunk_FUN_10061160c(long param_1,ulong param_2,undefined8 param_3,ulong param_4,
                        undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  
  if ((((-1 < param_1) && (-1 < (long)param_2)) && ((long)(param_4 & 0xffffffff) <= param_1)) &&
     ((param_2 <= param_4 >> 0x20 && (param_1 <= (long)((param_4 >> 0x20) - param_2))))) {
    uVar1 = (uint)((ulong)param_5 >> 0x18) & 0xffff00 | (ushort)((ulong)param_5 >> 0x30) & 0xff;
    if (CARRY4(uVar1,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006116e8);
      (*pcVar2)();
    }
    if (uVar1 + (uint)param_1 >> 0x18 == 0) {
      _swift_retain(param_3);
    }
    else {
      FUN_1006135c8(param_1);
    }
  }
  return;
}



/* Address: 0x100614464 | thunk_FUN_100613ac8 */

void thunk_FUN_100613ac8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006139ec(*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x100614468 | thunk_FUN_10061423c */

void thunk_FUN_10061423c(void)

{
  thunk_FUN_10061423c();
  return;
}



/* Address: 0x10061446c | thunk_FUN_100611d78 */

void thunk_FUN_100611d78(ulong param_1)

{
  code *pcVar1;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d8c);
    (*pcVar1)();
  }
  if (param_1 >> 0x20 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d90);
  (*pcVar1)();
}



/* Address: 0x100614470 | FUN_100614470 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100614470(void)

{
  UnsafeMutablePointer UVar1;
  UnsafeMutablePointer UVar2;
  code *pcVar3;
  __uint8 _Var4;
  Index IVar5;
  undefined1 *puVar6;
  Index IVar7;
  Index IVar8;
  uint uVar9;
  Index limitedBy;
  UnsafeMutablePointer *unaff_x20;
  long unaff_x21;
  ulong uVar10;
  ushort uVar11;
  undefined7 extraout_var;
  
  limitedBy.cmsgPointer.unknown = (UnsafeMutablePointer)unaff_x20[1].unknown;
  uVar10 = (ulong)limitedBy.cmsgPointer.unknown >> 0xe;
  if (uVar10 != (ulong)unaff_x20->unknown >> 0xe) {
    UVar1.unknown = unaff_x20[2].unknown;
    UVar2.unknown = unaff_x20[3].unknown;
    IVar8.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x20->unknown;
    do {
      _Var4 = Swift::Substring::UTF8View::get_subscript(IVar8,(UTF8View)IVar8.cmsgPointer.unknown);
      uVar11 = NEON_umaxv(CONCAT26(-(ushort)((__uint8)((uint)DAT_100fd7038 >> 0x18) == _Var4),
                                   CONCAT24(-(ushort)((__uint8)((uint)DAT_100fd7038 >> 0x10) ==
                                                     _Var4),
                                            CONCAT22(-(ushort)((__uint8)((uint)DAT_100fd7038 >> 8)
                                                              == _Var4),
                                                     -(ushort)((__uint8)DAT_100fd7038 == _Var4)))),2
                         );
      if ((uVar11 & 1) == 0) {
        _Var4 = Swift::Substring::UTF8View::get_subscript(IVar8,(UTF8View)IVar8.cmsgPointer.unknown)
        ;
        puVar6 = (undefined1 *)CONCAT71(extraout_var,_Var4);
        _swift_bridgeObjectRetain(UVar2.unknown);
        IVar7 = Swift::Substring::UTF8View::index(IVar8,(UTF8View)IVar8.cmsgPointer.unknown);
        _swift_bridgeObjectRelease(UVar2.unknown);
        if (uVar10 < (ulong)IVar7.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006146f4);
          (*pcVar3)();
        }
        FUN_100615c04(IVar7.cmsgPointer.unknown,limitedBy.cmsgPointer.unknown,
                      IVar8.cmsgPointer.unknown,limitedBy.cmsgPointer.unknown,UVar1.unknown,
                      UVar2.unknown);
        unaff_x20->unknown = (undefined *)IVar7.cmsgPointer.unknown;
        unaff_x20[1].unknown = (undefined *)limitedBy.cmsgPointer.unknown;
        unaff_x20[2].unknown = UVar1.unknown;
        unaff_x20[3].unknown = UVar2.unknown;
        FUN_100615b70();
        if (unaff_x21 != 0) {
          return;
        }
        if ((ulong)limitedBy.cmsgPointer.unknown >> 0xe == (ulong)IVar7.cmsgPointer.unknown >> 0xe)
        {
          FUN_100615ce0();
          _swift_allocError(&DAT_100eeadd0,puVar6,0,0);
          *puVar6 = 0;
          _swift_willThrow();
          return;
        }
        _Var4 = Swift::Substring::UTF8View::get_subscript(IVar7,(UTF8View)IVar7.cmsgPointer.unknown)
        ;
        _swift_bridgeObjectRetain(UVar2.unknown);
        IVar8 = Swift::Substring::UTF8View::index(IVar7,(UTF8View)IVar7.cmsgPointer.unknown);
        _swift_bridgeObjectRelease(UVar2.unknown);
        if ((ulong)IVar8.cmsgPointer.unknown >> 0xe <= (ulong)limitedBy.cmsgPointer.unknown >> 0xe)
        {
          FUN_100615c04(IVar8.cmsgPointer.unknown,limitedBy.cmsgPointer.unknown,
                        IVar7.cmsgPointer.unknown,limitedBy.cmsgPointer.unknown,UVar1.unknown,
                        UVar2.unknown);
          unaff_x20->unknown = (undefined *)IVar8.cmsgPointer.unknown;
          unaff_x20[1].unknown = (undefined *)limitedBy.cmsgPointer.unknown;
          unaff_x20[2].unknown = UVar1.unknown;
          unaff_x20[3].unknown = UVar2.unknown;
          FUN_100615b70(_Var4);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006146f8);
        (*pcVar3)();
      }
      uVar9 = 1;
      IVar5.cmsgPointer.unknown = IVar8.cmsgPointer.unknown;
      Swift::Substring::UTF8View::_index(IVar8,1,limitedBy,(UTF8View)IVar8.cmsgPointer.unknown);
      IVar7.cmsgPointer.unknown = limitedBy.cmsgPointer.unknown;
      if ((uVar9 & 0xff) != 1) {
        IVar7.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
      }
      if (uVar10 < (ulong)IVar7.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006146f0);
        (*pcVar3)();
      }
      FUN_100615c04(IVar7.cmsgPointer.unknown,limitedBy.cmsgPointer.unknown,
                    IVar8.cmsgPointer.unknown,limitedBy.cmsgPointer.unknown,UVar1.unknown,
                    UVar2.unknown);
      unaff_x20->unknown = (undefined *)IVar7.cmsgPointer.unknown;
      unaff_x20[1].unknown = (undefined *)limitedBy.cmsgPointer.unknown;
      unaff_x20[2].unknown = UVar1.unknown;
      unaff_x20[3].unknown = UVar2.unknown;
      uVar10 = (ulong)limitedBy.cmsgPointer.unknown >> 0xe;
      IVar8.cmsgPointer.unknown = IVar7.cmsgPointer.unknown;
    } while (uVar10 != (ulong)IVar7.cmsgPointer.unknown >> 0xe);
  }
  return;
}



/* Address: 0x1006146f8 | FUN_1006146f8 */

void FUN_1006146f8(void)

{
  return;
}



/* Address: 0x100614700 | FUN_100614700 */

void FUN_100614700(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2 >> 6 & 3;
  if (uVar1 == 0) {
    if ((param_2 & 0xff) != 1) {
      FUN_100614c14(param_1,1,param_3,param_4,param_5 & 0xffffffffffffff);
      return;
    }
    uVar2 = 1;
  }
  else {
    if (uVar1 == 1) {
      if ((param_2 & 0x3f) == 1) {
        FUN_1006155a4(param_3,param_4,param_5 & 0xffffffffffffff);
        return;
      }
      FUN_10061576c(param_1,param_3,param_4,param_5 & 0xffffffffffffff);
      return;
    }
    if ((param_2 & 0x3f) != 1) {
      FUN_100614c14(param_1,0,param_3,param_4,param_5 & 0xffffffffffffff);
      return;
    }
    uVar2 = 0;
  }
  FUN_1006149c8(uVar2,param_3,param_4,param_5 & 0xffffffffffffff);
  return;
}



/* Address: 0x100614794 | FUN_100614794 */

ulong FUN_100614794(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x21;
  
  pcVar1 = _malloc;
  FUN_10060e078(param_1,param_2,_malloc,FUN_100611bf8,_free,FUN_100611c04);
  _swift_bridgeObjectRelease(param_2);
  if (unaff_x21 != 0) {
    param_1 = (ulong)pcVar1 & 0xffffffffffffff;
  }
  return param_1;
}



/* Address: 0x100614814 | thunk_FUN_100615d20 */

void thunk_FUN_100615d20(void)

{
  FUN_100615d20();
  return;
}



/* Address: 0x100614818 | FUN_100614818 */

void FUN_100614818(undefined8 param_1,Hasher param_2,uint param_3)

{
  uint uVar1;
  __uint64 _Var2;
  Hasher HVar3;
  uint uVar4;
  
  uVar4 = param_3 & 0xff;
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    _Var2 = 0;
  }
  else {
    uVar4 = param_3 & 0x3f;
    if (uVar1 == 1) {
      _Var2 = 1;
    }
    else {
      _Var2 = 2;
    }
  }
  HVar3.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (uVar4 == 1) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    Swift::Hasher::_combine((__uint64)param_2.unknown,HVar3);
  }
  return;
}



/* Address: 0x100614894 | thunk_FUN_1006148e8 */

void thunk_FUN_1006148e8(undefined8 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100614818(HVar1.unknown,param_1,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100614898 | thunk_FUN_100614934 */

void thunk_FUN_100614934(void)

{
  undefined1 uVar1;
  Hasher HVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  Swift::Hasher::init(0);
  HVar2.unknown = auStack_68;
  FUN_100614818(HVar2.unknown,uVar3,uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10061489c | FUN_10061489c */

void FUN_10061489c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100614818(param_1,*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x1006148a8 | thunk_FUN_100614980 */

void thunk_FUN_100614980(__int64 param_1)

{
  undefined1 uVar1;
  Hasher HVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  HVar2.unknown = auStack_68;
  FUN_100614818(HVar2.unknown,uVar3,uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1006148ac | FUN_1006148ac */

void FUN_1006148ac(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100615d20(*param_1,*(undefined1 *)(param_1 + 1),*param_2,*(undefined1 *)(param_2 + 1));
  return;
}



/* Address: 0x1006148c4 | FUN_1006148c4 */

undefined1  [16] FUN_1006148c4(void)

{
  return ZEXT816(0x41) << 0x40;
}



/* Address: 0x1006148d0 | FUN_1006148d0 */

undefined1  [16] FUN_1006148d0(void)

{
  return ZEXT816(0x81) << 0x40;
}



/* Address: 0x1006148dc | FUN_1006148dc */

void FUN_1006148dc(void)

{
  return;
}



/* Address: 0x1006148e4 | thunk_FUN_100614818 */

void thunk_FUN_100614818(void)

{
  FUN_100614818();
  return;
}



/* Address: 0x1006148e8 | FUN_1006148e8 */

void FUN_1006148e8(undefined8 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100614818(HVar1.unknown,param_1,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100614934 | FUN_100614934 */

void FUN_100614934(void)

{
  undefined1 uVar1;
  Hasher HVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  Swift::Hasher::init(0);
  HVar2.unknown = auStack_68;
  FUN_100614818(HVar2.unknown,uVar3,uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}


