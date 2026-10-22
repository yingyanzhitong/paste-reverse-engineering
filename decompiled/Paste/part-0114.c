/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100167034 | FUN_100167034 */

undefined1  [16] FUN_100167034(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x676f6c;
  return auVar1;
}



/* Address: 0x100167044 | FUN_100167044 */

void FUN_100167044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100111fe4(param_1,param_4,param_5,param_6);
  FUN_100118868();
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x100167094 | FUN_100167094 */

bool FUN_100167094(long param_1)

{
  return param_1 == 0x198 || (param_1 == 0x1ad || param_1 - 500U < 100);
}



/* Address: 0x1001670b8 | thunk_FUN_100166c70 */

void thunk_FUN_100166c70(undefined8 param_1,undefined8 param_2)

{
  FUN_100166fe0(param_1,param_2,FUN_1001147d8);
  return;
}



/* Address: 0x1001670bc | thunk_FUN_100166b3c */

undefined8 thunk_FUN_100166b3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::maxBatchSize;
  _swift_beginAccess(param_1 + PostHogConfig::maxBatchSize,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Address: 0x1001670c0 | thunk_FUN_100166b84 */

undefined8 thunk_FUN_100166b84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::flushAt;
  _swift_beginAccess(param_1 + PostHogConfig::flushAt,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Address: 0x1001670c4 | thunk_FUN_100166bcc */

undefined8 thunk_FUN_100166bcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::maxQueueSize;
  _swift_beginAccess(param_1 + PostHogConfig::maxQueueSize,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Address: 0x1001670c8 | thunk_FUN_100166c14 */

undefined8 thunk_FUN_100166c14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogConfig::flushIntervalSeconds;
  _swift_beginAccess(param_1 + PostHogConfig::flushIntervalSeconds,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Address: 0x1001670cc | thunk_FUN_100166c64 */

void thunk_FUN_100166c64(undefined8 param_1)

{
  FUN_100166f88(param_1,FUN_100114178);
  return;
}



/* Address: 0x1001670d0 | FUN_1001670d0 */

void FUN_1001670d0(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x1001670d8 | FUN_1001670d8 */

void FUN_1001670d8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  _swift_release(*(undefined8 *)(param_1 + 0x48));
  _swift_release(*(undefined8 *)(param_1 + 0x58));
  _swift_release(*(undefined8 *)(param_1 + 0x68));
  _swift_release(*(undefined8 *)(param_1 + 0x78));
  _swift_release(*(undefined8 *)(param_1 + 0x88));
  _swift_release(*(undefined8 *)(param_1 + 0x98));
  _swift_release(*(undefined8 *)(param_1 + 0xa8));
  _swift_release(*(undefined8 *)(param_1 + 0xb8));
  _swift_release(*(undefined8 *)(param_1 + 200));
  return;
}



/* Address: 0x100167158 | FUN_100167158 */

undefined1 * FUN_100167158(undefined1 *param_1,undefined1 *param_2)

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
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  uVar8 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar8;
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar9;
  uVar10 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  uVar11 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  uVar1 = *(undefined8 *)(param_2 + 200);
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar12;
  *(undefined8 *)(param_1 + 200) = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar10);
  _swift_retain(uVar11);
  _swift_retain(uVar12);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1001672ac | FUN_1001672ac */

undefined1 * FUN_1001672ac(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  uVar3 = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xa0) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0xb8);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  uVar3 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 200);
  uVar1 = *(undefined8 *)(param_2 + 200);
  uVar3 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10016744c | FUN_10016744c */

void FUN_10016744c(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar5 = param_2[0x16];
  uVar7 = param_2[0x19];
  uVar6 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar5;
  param_1[0x19] = uVar7;
  param_1[0x18] = uVar6;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  return;
}



/* Address: 0x100167488 | FUN_100167488 */

undefined1 * FUN_100167488(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0x98));
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0xa8));
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  _swift_release(*(undefined8 *)(param_1 + 0xb8));
  uVar2 = *(undefined8 *)(param_2 + 200);
  uVar1 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10016758c | FUN_10016758c */

int FUN_10016758c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x34] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1001675d4 | FUN_1001675d4 */

void FUN_1001675d4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x1a) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100167648 | FUN_100167648 */

void FUN_100167648(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100167654 | FUN_100167654 */

long FUN_100167654(Date param_1)

{
  code *pcVar1;
  double dVar2;
  
  dVar2 = Foundation::Date::get_timeIntervalSince1970(param_1);
  dVar2 = dVar2 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001676c4);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < dVar2) {
    if (dVar2 < 9.223372036854776e+18) {
      return (long)dVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001676cc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001676c8);
  (*pcVar1)();
}



/* Address: 0x1001676cc | FUN_1001676cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001676cc(void)

{
  long lVar1;
  char *pcVar2;
  void *pvVar3;
  URL self;
  NSString *pNVar4;
  ID IVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined *extraout_x1;
  _StringGuts _Var10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long unaff_x20;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String separator;
  char *local_70 [2];
  char *local_60;
  void *local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1001723c8(unaff_x20 + _TtC7PostHog24PostHogReplayBufferQueue::queue);
  self.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar14 = Foundation::URL::get_path(self);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  local_60 = (char *)0x0;
  puVar12 = &DAT_00000001;
  IVar5 = NSFileManager::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    ((ID)self.unknown,pNVar4,1,0,&local_60);
  if ((int)IVar5 == 0) {
    pcVar6 = local_60;
    _Var10.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_60 = (char *)0x0;
    local_58 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2e,_Var10);
    SVar14.bridgeObject = (void *)0x8000000100d94a10;
    SVar14.str = (char *)0xd00000000000002c;
    SVar17.bridgeObject = puVar12;
    SVar17.str = (char *)pNVar4;
    Swift::String::append(SVar14,SVar17);
    puVar7 = &DAT_100faf510;
    local_70[0] = pcVar6;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar13 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_70,&local_60,puVar7,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar3 = local_58;
    pcVar2 = local_60;
    if (DAT_101057340 == '\x01') {
      pcVar8 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar11 = (char *)0x7;
      _swift_allocObject();
      pcVar8[0x18] = '\x02';
      pcVar8[0x19] = '\0';
      pcVar8[0x1a] = '\0';
      pcVar8[0x1b] = '\0';
      pcVar8[0x1c] = '\0';
      pcVar8[0x1d] = '\0';
      pcVar8[0x1e] = '\0';
      pcVar8[0x1f] = '\0';
      pcVar8[0x10] = '\x01';
      pcVar8[0x11] = '\0';
      pcVar8[0x12] = '\0';
      pcVar8[0x13] = '\0';
      pcVar8[0x14] = '\0';
      pcVar8[0x15] = '\0';
      pcVar8[0x16] = '\0';
      pcVar8[0x17] = '\0';
      local_60 = (char *)0x676f4874736f505b;
      local_58 = (void *)0xea0000000000205d;
      SVar15.bridgeObject = pvVar3;
      SVar15.str = pcVar2;
      SVar18.bridgeObject = puVar13;
      SVar18.str = pcVar11;
      Swift::String::append(SVar15,SVar18);
      *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar8 + 0x20) = local_60;
      *(void **)(pcVar8 + 0x28) = local_58;
      SVar16.bridgeObject = (void *)0x20;
      SVar16.str = pcVar8;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar16,separator);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_errorRelease(pcVar6);
      _swift_release(pcVar8);
    }
    else {
      _swift_bridgeObjectRelease(local_58);
      _swift_errorRelease(pcVar6);
    }
  }
  IVar5 = *(ID *)(unaff_x20 + _TtC7PostHog24PostHogReplayBufferQueue::itemsLock);
  objc_stub::lock(IVar5);
  lVar1 = _TtC7PostHog24PostHogReplayBufferQueue::items;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog24PostHogReplayBufferQueue::items,&local_60,1,0);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined **)(unaff_x20 + lVar1) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(uVar9);
  objc_stub::unlock(IVar5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100167968 | FUN_100167968 */

/* WARNING: Removing unreachable block (ram,0x000100167a94) */
/* WARNING: Removing unreachable block (ram,0x000100167c4c) */
/* WARNING: Removing unreachable block (ram,0x000100167b20) */

void FUN_100167968(undefined *param_1,undefined8 param_2,URL param_3)

{
  URL UVar1;
  UUID UVar2;
  UUID UVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ID self;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_a0 [8];
  Data local_98;
  undefined8 uStack_90;
  undefined1 local_88 [40];
  
  local_98.unknown = param_1;
  uStack_90 = param_2;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  UVar1.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar9 = (long)UVar1.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fb3060 != -1) {
    UVar3.unknown = (undefined *)&DAT_100fb3060;
    _swift_once(&DAT_100fb3060,FUN_100173f28);
  }
  FUN_100173f94(lVar9);
  SVar10 = Foundation::UUID::get_uuidString(UVar3);
  SVar11 = Swift::String::lowercased(SVar10);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  (**(code **)(lVar6 + 8))(lVar9,UVar2.unknown);
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  Foundation::Data::_write(UVar1,(NSDataWritingOptions)0x0,local_98);
  (**(code **)(lVar8 + 8))(UVar1.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog24PostHogReplayBufferQueue::itemsLock);
  objc_stub::lock(self);
  lVar6 = _TtC7PostHog24PostHogReplayBufferQueue::items;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog24PostHogReplayBufferQueue::items,local_88,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + lVar6);
  _swift_bridgeObjectRetain(SVar11.bridgeObject);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar6) = uVar7;
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar5 = 0;
    FUN_10010540c(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + lVar6) = uVar5;
  }
  uVar4 = *(ulong *)(uVar5 + 0x10);
  uVar7 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_10010540c(uVar7,uVar4 + 1,1,uVar5);
  }
  *(ulong *)(uVar7 + 0x10) = uVar4 + 1;
  *(String *)(uVar7 + uVar4 * 0x10 + 0x20) = SVar11;
  *(ulong *)(unaff_x20 + lVar6) = uVar7;
  _swift_endAccess(local_88);
  objc_stub::unlock(self);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  return;
}



/* Address: 0x100167cd8 | FUN_100167cd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100167cd8(void)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC7PostHog24PostHogReplayBufferQueue::queue;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC7PostHog24PostHogReplayBufferQueue::items));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100167d44 | FUN_100167d44 */

void FUN_100167d44(void)

{
  FUN_100167d4c(0);
  return;
}



/* Address: 0x100167d4c | FUN_100167d4c */

void FUN_100167d4c(undefined8 param_1)

{
  if (DAT_100fb1ab8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca5590);
  return;
}



/* Address: 0x100167d84 | FUN_100167d84 */

void FUN_100167d84(long param_1)

{
  String *pSVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  long unaff_x20;
  ID self;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String separator_00;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  char *local_60;
  void *local_58;
  
  uVar3 = unaff_x20 + 0x28;
  _swift_unknownObjectWeakLoadStrong();
  if (uVar3 != 0) {
    lVar11 = *(long *)(unaff_x20 + 0x30);
    uVar4 = uVar3;
    _swift_getObjectType();
    (**(code **)(lVar11 + 8))();
    _swift_unknownObjectRelease(uVar3);
    if ((uVar4 & 1) != 0) {
      FUN_100114178();
      puVar6 = (undefined *)0x0;
      uVar4 = uVar3;
      FUN_10016f414();
      _swift_bridgeObjectRelease(uVar3);
      if (0xe < (ulong)puVar6 >> 0x3c) {
        if (DAT_101057340 != '\x01') {
          return;
        }
        pcVar8 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar8[0x18] = '\x02';
        pcVar8[0x19] = '\0';
        pcVar8[0x1a] = '\0';
        pcVar8[0x1b] = '\0';
        pcVar8[0x1c] = '\0';
        pcVar8[0x1d] = '\0';
        pcVar8[0x1e] = '\0';
        pcVar8[0x1f] = '\0';
        pcVar8[0x10] = '\x01';
        pcVar8[0x11] = '\0';
        pcVar8[0x12] = '\0';
        pcVar8[0x13] = '\0';
        pcVar8[0x14] = '\0';
        pcVar8[0x15] = '\0';
        pcVar8[0x16] = '\0';
        pcVar8[0x17] = '\0';
        *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar8[0x20] = '5';
        pcVar8[0x21] = '\0';
        pcVar8[0x22] = '\0';
        pcVar8[0x23] = '\0';
        pcVar8[0x24] = '\0';
        pcVar8[0x25] = '\0';
        pcVar8[0x26] = '\0';
        pcVar8[0x27] = -0x30;
        pcVar8[0x28] = '@';
        pcVar8[0x29] = 'J';
        pcVar8[0x2a] = -0x27;
        pcVar8[0x2b] = '\0';
        pcVar8[0x2c] = '\x01';
        pcVar8[0x2d] = '\0';
        pcVar8[0x2e] = '\0';
        pcVar8[0x2f] = -0x80;
        SVar13.bridgeObject = (void *)0x20;
        SVar13.str = pcVar8;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar13,separator);
        _swift_release(pcVar8);
        return;
      }
      lVar11 = *(long *)(unaff_x20 + 0x18);
      _Var7.unknown = puVar6;
      FUN_100167968(uVar4);
      local_78 = 0;
      local_70 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x2c,_Var7);
      _swift_bridgeObjectRelease(local_70);
      local_60 = (char *)0xd000000000000017;
      local_58 = (void *)0x8000000100d94a80;
      pSVar1 = (String *)(param_1 + PostHogEvent::event);
      pcVar8 = (char *)0x0;
      pvVar10 = (void *)0x0;
      _swift_beginAccess(pSVar1,&local_78);
      pvVar2 = pSVar1->bridgeObject;
      SVar14 = *pSVar1;
      _swift_bridgeObjectRetain(pvVar2);
      SVar17.bridgeObject = pvVar10;
      SVar17.str = pcVar8;
      Swift::String::append(SVar14,SVar17);
      _swift_bridgeObjectRelease(pvVar2);
      SVar14.bridgeObject = (void *)0x8000000100d94aa0;
      SVar14.str = (char *)0xd000000000000011;
      SVar18.bridgeObject = pvVar10;
      SVar18.str = pcVar8;
      Swift::String::append(SVar14,SVar18);
      self = *(ID *)(lVar11 + _TtC7PostHog24PostHogReplayBufferQueue::itemsLock);
      objc_stub::lock(self);
      pcVar8 = (char *)0x0;
      pvVar10 = (void *)0x0;
      _swift_beginAccess(lVar11 + _TtC7PostHog24PostHogReplayBufferQueue::items,auStack_90);
      objc_stub::unlock(self);
      SVar14 = Swift::CustomStringConvertible::get_description();
      SVar19.bridgeObject = pvVar10;
      SVar19.str = pcVar8;
      Swift::String::append(SVar14,SVar19);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      pvVar2 = local_58;
      pcVar8 = local_60;
      if (DAT_101057340 == '\x01') {
        pcVar5 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar9 = (char *)0x7;
        _swift_allocObject();
        pcVar5[0x18] = '\x02';
        pcVar5[0x19] = '\0';
        pcVar5[0x1a] = '\0';
        pcVar5[0x1b] = '\0';
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
        pcVar5[0x10] = '\x01';
        pcVar5[0x11] = '\0';
        pcVar5[0x12] = '\0';
        pcVar5[0x13] = '\0';
        pcVar5[0x14] = '\0';
        pcVar5[0x15] = '\0';
        pcVar5[0x16] = '\0';
        pcVar5[0x17] = '\0';
        local_60 = (char *)0x676f4874736f505b;
        local_58 = (void *)0xea0000000000205d;
        SVar15.bridgeObject = pvVar2;
        SVar15.str = pcVar8;
        SVar20.bridgeObject = pvVar10;
        SVar20.str = pcVar9;
        Swift::String::append(SVar15,SVar20);
        *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar5 + 0x20) = local_60;
        *(void **)(pcVar5 + 0x28) = local_58;
        SVar16.bridgeObject = (void *)0x20;
        SVar16.str = pcVar5;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar16,separator_00);
        _swift_release(pcVar5);
      }
      _swift_bridgeObjectRelease(pvVar2);
      lVar11 = unaff_x20 + 0x28;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar11 != 0) {
        lVar12 = *(long *)(unaff_x20 + 0x30);
        _swift_getObjectType();
        (**(code **)(lVar12 + 0x10))();
        FUN_10003bf18(uVar4,puVar6);
        _swift_unknownObjectRelease(lVar11);
        return;
      }
      FUN_10003bf18(uVar4,puVar6);
      return;
    }
  }
  FUN_100136864(param_1);
  return;
}



/* Address: 0x100168104 | FUN_100168104 */

void FUN_100168104(undefined8 param_1,void *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  ID self;
  long unaff_x20;
  char *pcVar2;
  undefined8 uVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String separator;
  String SVar8;
  String SVar9;
  String separator_00;
  
  pcVar1 = (char *)(unaff_x20 + 0x28);
  _swift_unknownObjectWeakLoadStrong();
  if (pcVar1 != (char *)0x0) {
    param_2 = *(void **)(unaff_x20 + 0x30);
    pcVar2 = pcVar1;
    _swift_getObjectType();
    (**(code **)((long)param_2 + 8))();
    _swift_unknownObjectRelease();
    if (((ulong)pcVar2 & 1) != 0) {
      if (DAT_101057340 != '\x01') {
        return;
      }
      pcVar2 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar2[0x18] = '\x02';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x10] = '\x01';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar2[0x20] = ';';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = '\x10';
      pcVar2[0x28] = -0x40;
      pcVar2[0x29] = 'J';
      pcVar2[0x2a] = -0x27;
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\x01';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = -0x80;
      SVar4.bridgeObject = (void *)0x20;
      SVar4.str = pcVar2;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar4,separator);
      goto LAB_100168320;
    }
  }
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  thunk_FUN_1001378f8();
  if (param_2 != (void *)0x0) {
    SVar5.bridgeObject = param_2;
    SVar5.str = pcVar1;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar5,SVar8);
    _swift_bridgeObjectRelease(param_2);
    if (DAT_101057340 == '\x01') {
      pcVar1 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar2 = (char *)0x7;
      _swift_allocObject();
      pcVar1[0x18] = '\x02';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x10] = '\x01';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      SVar6.bridgeObject = (void *)0xed00002073692065;
      SVar6.str = (char *)0x7565757120656854;
      SVar9.bridgeObject = param_4;
      SVar9.str = pcVar2;
      Swift::String::append(SVar6,SVar9);
      *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar1[0x20] = '[';
      pcVar1[0x21] = 'P';
      pcVar1[0x22] = 'o';
      pcVar1[0x23] = 's';
      pcVar1[0x24] = 't';
      pcVar1[0x25] = 'H';
      pcVar1[0x26] = 'o';
      pcVar1[0x27] = 'g';
      pcVar1[0x28] = ']';
      pcVar1[0x29] = ' ';
      pcVar1[0x2a] = '\0';
      pcVar1[0x2b] = '\0';
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = -0x16;
      SVar7.bridgeObject = (void *)0x20;
      SVar7.str = pcVar1;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar7,separator_00);
      _swift_release(pcVar1);
    }
    _swift_bridgeObjectRelease(0xed00002073692065);
    return;
  }
  self = *(ID *)(pcVar2 + DAT_100fb0358);
  objc_stub::lock(self);
  uVar3 = *(undefined8 *)(pcVar2 + DAT_100fb0350);
  objc_stub::unlock(self);
  _swift_retain(pcVar2);
  FUN_100137084(uVar3,FUN_1001683c8,pcVar2);
LAB_100168320:
  _swift_release(pcVar2);
  return;
}



/* Address: 0x100168348 | FUN_100168348 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100168348(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1001683a4(unaff_x20 + 0x28);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100168384 | FUN_100168384 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100168384(void)

{
  return ZEXT816(0x100fb1bd8);
}



/* Address: 0x1001683a4 | FUN_1001683a4 */

undefined8 FUN_1001683a4(undefined8 param_1)

{
  _swift_unknownObjectWeakDestroy();
  return param_1;
}



/* Address: 0x1001683c8 | FUN_1001683c8 */

void FUN_1001683c8(void)

{
  FUN_100136558();
  return;
}



/* Address: 0x1001683d0 | FUN_1001683d0 */

void FUN_1001683d0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf8));
  return;
}



/* Address: 0x100168424 | FUN_100168424 */

void FUN_100168424(void)

{
  FUN_1001683d0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100168444 | FUN_100168444 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100168444(void)

{
  return ZEXT816(0x100fb1d10);
}



/* Address: 0x100168464 | FUN_100168464 */

void FUN_100168464(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  FUN_1000faea8(unaff_x20 + 0x80);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Address: 0x1001684c0 | FUN_1001684c0 */

void FUN_1001684c0(void)

{
  FUN_100168464();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001684e0 | FUN_1001684e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001684e0(void)

{
  return ZEXT816(0x100fb1f90);
}



/* Address: 0x100168500 | FUN_100168500 */

void FUN_100168500(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100168510 | FUN_100168510 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100168510(void)

{
  return ZEXT816(0x100fb2270);
}



/* Address: 0x100168530 | FUN_100168530 */

void FUN_100168530(long param_1)

{
  undefined *self;
  ID IVar1;
  
  FUN_100168658();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x10) = 0;
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(ID *)(param_1 + 0x18) = IVar1;
  *(undefined1 *)(param_1 + 0x30) = 0;
  DAT_101057320 = param_1;
  return;
}



/* Address: 0x100168584 | FUN_100168584 */

undefined * FUN_100168584(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = &DAT_100fb1910;
    FUN_1000f7830(&DAT_100fb1910,&DAT_100c2f800);
    _swift_allocObject();
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8390();
    *(undefined **)(puVar2 + 0x10) = puVar1;
    puVar1 = &_OBJC_CLASS___NSLock;
    _objc_allocWithZone();
    IVar3 = objc_stub::init((ID)puVar1);
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(ID *)(puVar2 + 0x18) = IVar3;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    _swift_retain(puVar2);
    _swift_release(uVar4);
    puVar1 = (undefined *)0x0;
  }
  _swift_retain(puVar1);
  return puVar2;
}



/* Address: 0x100168624 | FUN_100168624 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100168624(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100168658 | FUN_100168658 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100168658(void)

{
  return ZEXT816(0x100fb23a8);
}



/* Address: 0x100168678 | FUN_100168678 */

String FUN_100168678(char *param_1,void *param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  String SVar2;
  code *pcVar3;
  bool bVar4;
  __int64 offsetBy;
  Index IVar5;
  Index IVar6;
  char *pcVar7;
  void *pvVar8;
  uint uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar13;
  
  pcVar7 = param_3;
  pvVar8 = param_4;
  _swift_bridgeObjectRetain(param_4);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x3c;
  SVar16.bridgeObject = pvVar8;
  SVar16.str = pcVar7;
  Swift::String::append(SVar10,SVar16);
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  SVar17.bridgeObject = param_2;
  SVar17.str = param_1;
  bVar4 = Swift::String::hasPrefix(SVar12,SVar17);
  if ((bVar4) &&
     (SVar11.bridgeObject = (void *)0xe100000000000000, SVar11.str = (char *)0x3e,
     SVar18.bridgeObject = param_2, SVar18.str = param_1,
     bVar4 = Swift::String::hasSuffix(SVar11,SVar18), bVar4)) {
    offsetBy = Swift::String::get_count(SVar2);
    _swift_bridgeObjectRelease(param_4);
    SVar19.bridgeObject = param_2;
    SVar19.str = param_1;
    IVar5 = Swift::String::index((Index)0xf,offsetBy,SVar19);
    pcVar7 = param_1;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pcVar7 = (char *)((ulong)param_2 >> 0x38 & 0xf);
    }
    uVar9 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if (((ulong)param_2 & 0x1000000000000000) == 0) {
      uVar9 = 1;
    }
    uVar1 = 7;
    if (uVar9 == 0) {
      uVar1 = 0xb;
    }
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    IVar6 = Swift::String::index((Index)(uVar1 | (long)pcVar7 << 0x10),SVar14);
    if ((ulong)IVar6.cmsgPointer.unknown >> 0xe < (ulong)IVar5.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001687b8);
      (*pcVar3)();
    }
    SVar15.bridgeObject = param_1;
    SVar15.str = (char *)IVar6.cmsgPointer.unknown;
    SVar13.str = Swift::String::get_subscript((Range<Index>)IVar5.cmsgPointer.unknown,SVar15);
    SVar13.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar12 = Swift::String::__fromSubstring(SVar13);
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    _swift_bridgeObjectRelease(param_4);
    SVar12 = (String)ZEXT816(0);
  }
  return SVar12;
}



/* Address: 0x1001687b8 | FUN_1001687b8 */

String FUN_1001687b8(char *param_1,CharacterSet param_2)

{
  ulong uVar1;
  CharacterSet CVar2;
  code *pcVar3;
  bool bVar4;
  Iterator IVar5;
  Iterator IVar6;
  Index IVar7;
  _StringGuts _Var8;
  void *pvVar9;
  long extraout_x8;
  CharacterSet in;
  long offsetBy;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  String local_90;
  char *local_80;
  undefined *local_78;
  undefined8 local_70;
  ulong uStack_68;
  
  _Var8.unknown = param_2.unknown;
  local_98 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  lVar10 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  in.unknown = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_68 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2.unknown & 0x2000000000000000) != 0) {
    uStack_68 = (ulong)param_2.unknown >> 0x38 & 0xf;
  }
  local_70 = 0;
  IVar5.unknown = param_2.unknown;
  local_80 = param_1;
  local_78 = param_2.unknown;
  _swift_bridgeObjectRetain();
  Swift::String::Iterator::_next(IVar5);
  if (_Var8.unknown != (undefined *)0x0) {
    lVar11 = 0;
    offsetBy = 0;
    do {
      while( true ) {
        IVar6.unknown = _Var8.unknown;
        if (SCARRY8(offsetBy,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100168a88);
          (*pcVar3)();
        }
        _Var8.unknown = IVar6.unknown;
        if (((IVar5.unknown != (undefined *)0x3c) ||
            (IVar6.unknown != (undefined *)0xe100000000000000)) &&
           (bVar4 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)IVar5.unknown,(_StringGuts)IVar6.unknown,
                               (_StringComparisonResult)0x3c), !bVar4)) break;
        _swift_bridgeObjectRelease();
        bVar4 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100168a8c);
          (*pcVar3)();
        }
LAB_100168948:
        Swift::String::Iterator::_next(IVar6);
        IVar5.unknown = IVar6.unknown;
        offsetBy = offsetBy + 1;
        if (_Var8.unknown == (undefined *)0x0) goto LAB_10016895c;
      }
      if (((IVar5.unknown == (undefined *)0x3e) &&
          (IVar6.unknown == (undefined *)0xe100000000000000)) ||
         (_Var8.unknown = IVar6.unknown,
         bVar4 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)IVar5.unknown,(_StringGuts)IVar6.unknown,
                            (_StringComparisonResult)0x3e), bVar4)) {
        _swift_bridgeObjectRelease();
        bVar4 = SBORROW8(lVar11,1);
        lVar11 = lVar11 + -1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100168a90);
          (*pcVar3)();
        }
        goto LAB_100168948;
      }
      if ((IVar5.unknown == (undefined *)0x2c) && (IVar6.unknown == (undefined *)0xe100000000000000)
         ) {
        _swift_bridgeObjectRelease();
joined_r0x000100168868:
        if (lVar11 == 0) {
          SVar14.bridgeObject = param_2.unknown;
          SVar14.str = param_1;
          IVar7 = Swift::String::index((Index)0xf,offsetBy,SVar14);
          SVar13.bridgeObject = param_1;
          SVar13.str = (char *)IVar7.cmsgPointer.unknown;
          SVar12.str = Swift::String::get_subscript((Range<Index>)0xf,SVar13);
          SVar12.bridgeObject = (void *)IVar7.cmsgPointer.unknown;
          SVar12 = Swift::String::__fromSubstring(SVar12);
          _swift_bridgeObjectRelease();
          local_90 = SVar12;
          Foundation::CharacterSet::get_whitespaces(param_2);
          FUN_1001013b8();
          SVar13 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
          (**(code **)(lVar10 + 8))(in.unknown,local_98);
          _swift_bridgeObjectRelease(SVar12.bridgeObject);
          _swift_bridgeObjectRelease(local_78);
          return SVar13;
        }
      }
      else {
        _Var8.unknown = IVar6.unknown;
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)IVar5.unknown,(_StringGuts)IVar6.unknown,
                           (_StringComparisonResult)0x2c);
        _swift_bridgeObjectRelease();
        if (bVar4) goto joined_r0x000100168868;
      }
      Swift::String::Iterator::_next(IVar6);
      IVar5.unknown = IVar6.unknown;
      offsetBy = offsetBy + 1;
    } while (_Var8.unknown != (undefined *)0x0);
  }
LAB_10016895c:
  _swift_bridgeObjectRelease();
  local_80 = param_1;
  CVar2.unknown = local_78;
  local_78 = param_2.unknown;
  Foundation::CharacterSet::get_whitespaces(CVar2);
  FUN_1001013b8();
  SVar12 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar9 = SVar12.bridgeObject;
  (**(code **)(lVar10 + 8))(in.unknown,local_98);
  uVar1 = (ulong)SVar12.str & 0xffffffffffff;
  if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(pvVar9);
    SVar12 = (String)ZEXT816(0);
  }
  return SVar12;
}



/* Address: 0x100168a90 | FUN_100168a90 */

undefined1  [16] FUN_100168a90(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  undefined1 auVar10 [16];
  
  _Var9.unknown = param_1;
  _Var8.unknown = param_2;
  FUN_100168678(param_1,param_2,0xd000000000000013,0x8000000100d94b00);
  bVar2 = _Var8.unknown != (undefined *)0x0;
  if (_Var8.unknown == (undefined *)0x0) {
    _swift_bridgeObjectRetain(param_2);
    _Var8.unknown = param_2;
    _Var9.unknown = param_1;
  }
  puVar3 = _Var9.unknown;
  puVar4 = _Var8.unknown;
  FUN_100168678(_Var9.unknown,_Var8.unknown,0x6465696669646f4d,0xef746e65746e6f43);
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    FUN_1001687b8();
    _swift_bridgeObjectRelease(puVar4);
    if (puVar5 != (undefined *)0x0) {
      _swift_bridgeObjectRelease(_Var8.unknown);
      puVar4 = puVar3;
      puVar6 = puVar5;
      FUN_100168678(puVar3,puVar5,0x6465696669646f4d,0xef746e65746e6f43);
      if (puVar6 != (undefined *)0x0) {
        puVar7 = puVar6;
        FUN_1001687b8();
        _swift_bridgeObjectRelease(puVar6);
        if (puVar7 != (undefined *)0x0) {
          do {
            _Var9.unknown = puVar4;
            _Var8.unknown = puVar7;
            _swift_bridgeObjectRelease(puVar5);
            puVar4 = _Var9.unknown;
            puVar3 = _Var8.unknown;
            FUN_100168678(_Var9.unknown,_Var8.unknown,0x6465696669646f4d,0xef746e65746e6f43);
            if (puVar3 == (undefined *)0x0) {
              bVar2 = true;
              goto LAB_100168be8;
            }
            puVar7 = puVar3;
            FUN_1001687b8();
            _swift_bridgeObjectRelease(puVar3);
            puVar5 = _Var8.unknown;
          } while (puVar7 != (undefined *)0x0);
          bVar2 = true;
          goto LAB_100168be8;
        }
      }
      bVar2 = true;
      _Var8.unknown = puVar5;
      _Var9.unknown = puVar3;
    }
  }
LAB_100168be8:
  uVar1 = (ulong)_Var9.unknown & 0xffffffffffff;
  if (((ulong)_Var8.unknown & 0x2000000000000000) != 0) {
    uVar1 = (ulong)_Var8.unknown >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((bVar2 && (((_Var9.unknown == (undefined *)0x77656956796e41 &&
                  (_Var8.unknown == &DAT_e700000000000000)) ||
                 (bVar2 = Swift::_stringCompareWithSmolCheck
                                    (_Var9,_Var8,(_StringComparisonResult)0x41), bVar2)))))) {
    _swift_bridgeObjectRelease(_Var8.unknown);
    _Var9.unknown = (undefined *)0x0;
    _Var8.unknown = (undefined *)0x0;
  }
  auVar10._8_8_ = _Var8.unknown;
  auVar10._0_8_ = _Var9.unknown;
  return auVar10;
}



/* Address: 0x100168c6c | FUN_100168c6c */

void FUN_100168c6c(void)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  
  lVar1 = 0;
  FUN_10012b2e0();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(lVar1 + 0x10) = IVar2;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  DAT_100fb24d0 = lVar1;
  return;
}



/* Address: 0x100168cbc | FUN_100168cbc */

undefined8 FUN_100168cbc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  ID IVar6;
  
  if (DAT_100fb24c8 != -1) {
    _swift_once(&DAT_100fb24c8,FUN_100168c6c);
  }
  lVar2 = DAT_100fb24d0;
  IVar6 = *(ID *)(DAT_100fb24d0 + 0x10);
  objc_stub::lock(IVar6);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x18) = 1;
    objc_stub::unlock(IVar6);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
    if (DAT_100fae858 != -1) {
      _swift_once(&DAT_100fae858,FUN_1000fbcdc);
    }
    lVar2 = DAT_101057190;
    lVar4 = DAT_101057190;
    _swift_retain();
    FUN_1000fbd10();
    _swift_release(lVar2);
    puVar5 = &DAT_100eb9748;
    _swift_allocObject(&DAT_100eb9748,0x18,7);
    _swift_weakInit(puVar5 + 0x10);
    IVar6 = *(ID *)(lVar4 + 0x18);
    _swift_retain(puVar5);
    objc_stub::lock(IVar6);
    uVar3 = *(undefined8 *)(lVar4 + 0x20);
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    *(code **)(lVar4 + 0x20) = FUN_10016901c;
    *(undefined **)(lVar4 + 0x28) = puVar5;
    FUN_100004550(uVar3,uVar1);
    objc_stub::unlock(IVar6);
    _swift_release(puVar5);
    _swift_unknownObjectRelease(lVar4);
    uVar3 = 3;
  }
  else {
    objc_stub::unlock(IVar6);
    uVar3 = 0;
  }
  return uVar3;
}



/* Address: 0x100168e04 | FUN_100168e04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100168e04(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  ID IVar6;
  
  lVar4 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (DAT_100fb24c8 != -1) {
    _swift_once(&DAT_100fb24c8,FUN_100168c6c);
  }
  lVar3 = DAT_100fb24d0;
  if ((lVar4 == 0) || (lVar4 == param_1)) {
    if (DAT_100fae858 != -1) {
      _swift_once(&DAT_100fae858,FUN_1000fbcdc);
    }
    lVar4 = DAT_101057190;
    lVar5 = DAT_101057190;
    _swift_retain();
    FUN_1000fbd10();
    _swift_release(lVar4);
    IVar6 = *(ID *)(lVar5 + 0x18);
    objc_stub::lock(IVar6);
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x20) = 0;
    *(undefined8 *)(lVar5 + 0x28) = 0;
    FUN_100004550(uVar1,uVar2);
    objc_stub::unlock(IVar6);
    _swift_unknownObjectRelease(lVar5);
    _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,0);
    IVar6 = *(ID *)(lVar3 + 0x10);
    objc_stub::lock(IVar6);
    *(undefined1 *)(lVar3 + 0x18) = 0;
    objc_stub::unlock(IVar6);
  }
  return 0;
}



/* Address: 0x100168f20 | FUN_100168f20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100168f20(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    lVar1 = param_3 + 0x10;
    _swift_unknownObjectWeakLoadStrong();
    _swift_release(param_3);
    if (lVar1 != 0) {
      FUN_100147d24(param_1,param_2,0);
    }
  }
  return;
}



/* Address: 0x100168fac | FUN_100168fac */

void FUN_100168fac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100168fd0 | FUN_100168fd0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100168fd0(void)

{
  return ZEXT816(0x100fb2468);
}



/* Address: 0x100168ff0 | thunk_FUN_100168cbc */

void thunk_FUN_100168cbc(void)

{
  FUN_100168cbc();
  return;
}



/* Address: 0x100168ff4 | thunk_FUN_100168e04 */

void thunk_FUN_100168e04(void)

{
  FUN_100168e04();
  return;
}



/* Address: 0x100168ff8 | FUN_100168ff8 */

void FUN_100168ff8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10016901c | FUN_10016901c */

void FUN_10016901c(void)

{
  FUN_100168f20();
  return;
}



/* Address: 0x100169024 | FUN_100169024 */

undefined1  [16] FUN_100169024(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::id);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::id) + 8));
  return auVar1;
}



/* Address: 0x10016905c | FUN_10016905c */

undefined1  [16] FUN_10016905c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::name);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::name) + 8));
  return auVar1;
}



/* Address: 0x100169094 | FUN_100169094 */

void FUN_100169094(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain
            (*(undefined8 *)(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::questions));
  return;
}



/* Address: 0x1001690a4 | FUN_1001690a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001690a4(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::appearance);
}



/* Address: 0x1001690d4 | FUN_1001690d4 */

void FUN_1001690d4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100104164(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::startDate,param_1);
  return;
}



/* Address: 0x1001690e8 | FUN_1001690e8 */

void FUN_1001690e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100104164(unaff_x20 + _TtC7PostHog20PostHogDisplaySurvey::endDate,param_1);
  return;
}



/* Address: 0x1001690fc | _TtC7PostHog20PostHogDisplaySurvey::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog20PostHogDisplaySurvey::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogDisplaySurvey",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100169128);
  (*pcVar1)();
}



/* Address: 0x100169128 | FUN_100169128 */

void FUN_100169128(void)

{
  FUN_10016915c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10016915c | FUN_10016915c */

void FUN_10016915c(undefined8 param_1)

{
  if (DAT_100fb2530 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca5bec);
  return;
}


