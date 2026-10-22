/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10090e948 | FUN_10090e948 */

void FUN_10090e948(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRetain();
    return;
  }
  if (param_2 == '\0') {
    _swift_bridgeObjectRetain();
    return;
  }
  return;
}



/* Address: 0x10090e964 | FUN_10090e964 */

void FUN_10090e964(undefined8 *param_1)

{
  FUN_10090dde8(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10090e974 | FUN_10090e974 */

void FUN_10090e974(void)

{
  FUN_10090ea50();
  return;
}



/* Address: 0x10090e988 | FUN_10090e988 */

void FUN_10090e988(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10090e99c | FUN_10090e99c */

undefined8 * FUN_10090e99c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10090dde8(uVar3,uVar2);
  return param_1;
}



/* Address: 0x10090e9d8 | FUN_10090e9d8 */

undefined1  [16] FUN_10090e9d8(void)

{
  return ZEXT816(0x100f15190);
}



/* Address: 0x10090e9e8 | FUN_10090e9e8 */

undefined8 * FUN_10090e9e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  _swift_retain(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10090ea2c | FUN_10090ea2c */

void FUN_10090ea2c(undefined8 *param_1)

{
  _swift_release(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10090ea3c | FUN_10090ea3c */

void FUN_10090ea3c(void)

{
  FUN_10090ea50();
  return;
}



/* Address: 0x10090ea50 | FUN_10090ea50 */

undefined8 *
FUN_10090ea50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  (*param_4)(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  (*param_5)(uVar3,uVar2);
  return param_1;
}



/* Address: 0x10090eaa4 | FUN_10090eaa4 */

undefined8 * FUN_10090eaa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  _swift_release(uVar3,uVar2);
  return param_1;
}



/* Address: 0x10090eae0 | FUN_10090eae0 */

int FUN_10090eae0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0x3ffd;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 2) >> 6) |
          ((uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7 |
          (*(byte *)(param_1 + 2) >> 1 & 0x1f) << 7) << 2) ^ 0x3fff;
  if (0xffe < uVar1 >> 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10090eb54 | FUN_10090eb54 */

void FUN_10090eb54(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 < 0x3ffd) {
    if (0x3ffc < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 2 & 0xfff | (-param_2 & 0x3fff) << 0xc;
      *param_1 = ((ulong)uVar1 | (ulong)uVar1 << 0x39) & 0xf000000000000007;
      *(byte *)(param_1 + 1) = (byte)(uVar1 >> 6) & 0xfe;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0x3ffd);
    if (0x3ffc < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x10090ebc4 | FUN_10090ebc4 */

void FUN_10090ebc4(ulong *param_1,char param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff8;
  *(byte *)(param_1 + 1) = (byte)param_1[1] & 1 | param_2 << 6;
  return;
}



/* Address: 0x10090ebe4 | FUN_10090ebe4 */

undefined1  [16] FUN_10090ebe4(void)

{
  return ZEXT816(0x100f15220);
}



/* Address: 0x10090ebf4 | FUN_10090ebf4 */

void FUN_10090ebf4(void)

{
  FUN_10090ebfc(0);
  return;
}



/* Address: 0x10090ebfc | FUN_10090ebfc */

void FUN_10090ebfc(long param_1)

{
  long lVar1;
  
  if (DAT_100fecbb0 == 0) {
    lVar1 = 0xff;
    FUN_100903e28();
    Swift::Array<undefined>::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fecbb0 = param_1;
    }
  }
  return;
}



/* Address: 0x10090ec50 | thunk_FUN_10090ec54 */

void thunk_FUN_10090ec54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecbb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c84840;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84840,&DAT_100f15100);
  DAT_100fecbb8 = pTVar1;
  return;
}



/* Address: 0x10090ec54 | FUN_10090ec54 */

void FUN_10090ec54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fecbb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c84840;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84840,&DAT_100f15100);
  DAT_100fecbb8 = pTVar1;
  return;
}



/* Address: 0x10090ec94 | FUN_10090ec94 */

void FUN_10090ec94(void)

{
  FUN_10090ecec(PTR__swift_bridgeObjectRelease_100eae160);
  return;
}



/* Address: 0x10090eca0 | FUN_10090eca0 */

void FUN_10090eca0(void)

{
  long unaff_x20;
  
  FUN_100652044(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,thunk_FUN_1008f1f34);
  return;
}



/* Address: 0x10090ecc4 | thunk_FUN_10090f2d0 */

void thunk_FUN_10090f2d0(void)

{
  FUN_10090f2d0();
  return;
}



/* Address: 0x10090ecc8 | FUN_10090ecc8 */

void FUN_10090ecc8(void)

{
  long unaff_x20;
  
  FUN_10090dbac(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,thunk_FUN_1008f1b4c);
  return;
}



/* Address: 0x10090ecec | FUN_10090ecec */

void FUN_10090ecec(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1008fddf0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),param_1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10090ed2c | FUN_10090ed2c */

void FUN_10090ed2c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10090ed5c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090ed5c | FUN_10090ed5c */

void FUN_10090ed5c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x10090ed74 | FUN_10090ed74 */

void FUN_10090ed74(void)

{
  long unaff_x20;
  
  FUN_10090dbac(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_1008f1f28);
  return;
}



/* Address: 0x10090ed98 | FUN_10090ed98 */

void FUN_10090ed98(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10090ee00(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0),
                *(undefined1 *)(unaff_x20 + 0xa8));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090ee00 | FUN_10090ee00 */

void FUN_10090ee00(void)

{
  char in_stack_00000050;
  
  if (in_stack_00000050 == '\x01') {
    _swift_errorRelease();
    return;
  }
  return;
}



/* Address: 0x10090ee14 | FUN_10090ee14 */

void FUN_10090ee14(void)

{
  long unaff_x20;
  
  FUN_10090db28(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x10090ee20 | FUN_10090ee20 */

void FUN_10090ee20(void)

{
  FUN_10090ecec(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10090ee2c | FUN_10090ee2c */

void FUN_10090ee2c(void)

{
  long unaff_x20;
  
  FUN_100652044(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_1006303e8);
  return;
}



/* Address: 0x10090ee50 | FUN_10090ee50 */

void FUN_10090ee50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10090ee98(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),(ulong)*(uint7 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x37));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090ee98 | FUN_10090ee98 */

void FUN_10090ee98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_release();
  _swift_release(param_2);
  return;
}



/* Address: 0x10090eecc | FUN_10090eecc */

void FUN_10090eecc(void)

{
  long unaff_x20;
  
  FUN_10090dad4(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x10090eed8 | FUN_10090eed8 */

void FUN_10090eed8(void)

{
  FUN_10090eee4(thunk_FUN_1002ec258);
  return;
}



/* Address: 0x10090eee4 | FUN_10090eee4 */

void FUN_10090eee4(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090ef20 | FUN_10090ef20 */

void FUN_10090ef20(void)

{
  long unaff_x20;
  
  FUN_100652044(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_1006303f4);
  return;
}



/* Address: 0x10090ef44 | FUN_10090ef44 */

void FUN_10090ef44(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10090ef88(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                (ulong)*(uint7 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x2f));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090ef88 | FUN_10090ef88 */

void FUN_10090ef88(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x10090ef9c | FUN_10090ef9c */

void FUN_10090ef9c(void)

{
  long unaff_x20;
  
  FUN_10090da80(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x10090efa8 | FUN_10090efa8 */

void FUN_10090efa8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10090cc64(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10090efb0 | thunk_FUN_10090efb8 */

void thunk_FUN_10090efb8(void)

{
  FUN_10090efb8();
  return;
}



/* Address: 0x10090efb4 | thunk_FUN_10090f01c */

void thunk_FUN_10090f01c(void)

{
  FUN_10090f01c();
  return;
}



/* Address: 0x10090efb8 | FUN_10090efb8 */

void FUN_10090efb8(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f01c | FUN_10090f01c */

void FUN_10090f01c(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fecbc0;
  FUN_1000f7830(&DAT_100fecbc0,&DAT_100c84878);
  FUN_10090cd44(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10090f064 | FUN_10090f064 */

void FUN_10090f064(void)

{
  FUN_10090eee4(FUN_1002ec258);
  return;
}



/* Address: 0x10090f070 | FUN_10090f070 */

void FUN_10090f070(void)

{
  long unaff_x20;
  
  FUN_100933e70(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x10090f07c | FUN_10090f07c */

void FUN_10090f07c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f0a0 | thunk_FUN_10090f140 */

void thunk_FUN_10090f140(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (DAT_100fec5a0 != -1) {
    _swift_once(&DAT_100fec5a0,FUN_100902078);
  }
  (*pcVar1)(DAT_1010581e0);
  return;
}



/* Address: 0x10090f0a4 | FUN_10090f0a4 */

void FUN_10090f0a4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10090f0b8 | FUN_10090f0b8 */

void FUN_10090f0b8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10090f0c0 | FUN_10090f0c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10090f0c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f0ec | FUN_10090f0ec */

void FUN_10090f0ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10090b180(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x10090f0f4 | FUN_10090f0f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10090f0f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f130 | FUN_10090f130 */

void FUN_10090f130(void)

{
  long unaff_x20;
  
  FUN_10090b1fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10090f140 | FUN_10090f140 */

void FUN_10090f140(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (DAT_100fec5a0 != -1) {
    _swift_once(&DAT_100fec5a0,FUN_100902078);
  }
  (*pcVar1)(DAT_1010581e0);
  return;
}



/* Address: 0x10090f190 | thunk_FUN_10090f1f0 */

void thunk_FUN_10090f1f0(void)

{
  FUN_10090f1f0();
  return;
}



/* Address: 0x10090f194 | FUN_10090f194 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10090f194(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f1c8 | FUN_10090f1c8 */

void FUN_10090f1c8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10090f1f0 | FUN_10090f1f0 */

void FUN_10090f1f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f21c | FUN_10090f21c */

void FUN_10090f21c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f240 | FUN_10090f240 */

void FUN_10090f240(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    FUN_100004594(unaff_x20 + 0x40);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090f294 | FUN_10090f294 */

void FUN_10090f294(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009095d0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),unaff_x20 + 0x40
                ,*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  return;
}


