/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006c6ae0 | FUN_1006c6ae0 */

void FUN_1006c6ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if ((param_5 != '\0') && (param_5 != '\x02')) {
    if (param_5 == '\x01') {
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_4);
      return;
    }
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1006c6b2c | FUN_1006c6b2c */

void FUN_1006c6b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if ((param_5 != '\0') && (param_5 != '\x02')) {
    if (param_5 == '\x01') {
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_4);
      return;
    }
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1006c6b78 | FUN_1006c6b78 */

undefined1  [16] FUN_1006c6b78(void)

{
  return ZEXT816(0x100ef8690);
}



/* Address: 0x1006c6b88 | thunk_FUN_1006c6b8c */

void thunk_FUN_1006c6b8c(undefined8 *param_1)

{
  FUN_1006c6b2c(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1006c6b8c | FUN_1006c6b8c */

void FUN_1006c6b8c(undefined8 *param_1)

{
  FUN_1006c6b2c(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1006c6ba0 | thunk_FUN_1006c6ba4 */

undefined8 * thunk_FUN_1006c6ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1006c6ae0(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1006c6ba4 | FUN_1006c6ba4 */

undefined8 * FUN_1006c6ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1006c6ae0(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1006c6c04 | thunk_FUN_1006c6c08 */

undefined8 * thunk_FUN_1006c6c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1006c6ae0(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1006c6b2c(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x1006c6c08 | FUN_1006c6c08 */

undefined8 * FUN_1006c6c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1006c6ae0(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1006c6b2c(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x1006c6c78 | thunk_FUN_1006c6c7c */

undefined8 * thunk_FUN_1006c6c7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1006c6b2c(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1006c6c7c | FUN_1006c6c7c */

undefined8 * FUN_1006c6c7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1006c6b2c(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1006c6cc4 | thunk_FUN_1004be4ec */

void thunk_FUN_1004be4ec(void)

{
  FUN_1004be4ec();
  return;
}



/* Address: 0x1006c6cc8 | thunk_FUN_1004be534 */

void thunk_FUN_1004be534(void)

{
  FUN_1004be534();
  return;
}



/* Address: 0x1006c6ccc | FUN_1006c6ccc */

uint FUN_1006c6ccc(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 3;
  if (*(byte *)(param_1 + 8) < 3) {
    uVar1 = (uint)*(byte *)(param_1 + 8);
  }
  return uVar1;
}



/* Address: 0x1006c6ce4 | FUN_1006c6ce4 */

void FUN_1006c6ce4(ulong *param_1,uint param_2)

{
  if (2 < param_2) {
    *param_1 = (ulong)(param_2 - 3);
    param_1[1] = 0;
    param_2 = 3;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *(char *)(param_1 + 4) = (char)param_2;
  return;
}



/* Address: 0x1006c6d00 | FUN_1006c6d00 */

undefined1  [16] FUN_1006c6d00(void)

{
  return ZEXT816(0x100ef8728);
}



/* Address: 0x1006c6d10 | thunk_FUN_1006c6d74 */

undefined8 * thunk_FUN_1006c6d74(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 < 2) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006c6d14 | FUN_1006c6d14 */

undefined1  [16] FUN_1006c6d14(void)

{
  return ZEXT816(0x100ef87a0);
}



/* Address: 0x1006c6d24 | thunk_FUN_1006c6fb0 */

void thunk_FUN_1006c6fb0(void)

{
  FUN_1006c6fb0();
  return;
}



/* Address: 0x1006c6d28 | FUN_1006c6d28 */

undefined1  [16] FUN_1006c6d28(void)

{
  return ZEXT816(0x100ef8838);
}



/* Address: 0x1006c6d38 | FUN_1006c6d38 */

undefined1  [16] FUN_1006c6d38(void)

{
  return ZEXT816(0x100ef88b0);
}



/* Address: 0x1006c6d48 | thunk_FUN_1005aa248 */

void thunk_FUN_1005aa248(void)

{
  FUN_1005aa248();
  return;
}



/* Address: 0x1006c6d4c | thunk_FUN_1005aa2d8 */

void thunk_FUN_1005aa2d8(void)

{
  FUN_1005aa2d8();
  return;
}



/* Address: 0x1006c6d50 | FUN_1006c6d50 */

undefined1  [16] FUN_1006c6d50(void)

{
  return ZEXT816(0x100ef8948);
}



/* Address: 0x1006c6d60 | FUN_1006c6d60 */

void FUN_1006c6d60(long param_1)

{
  if (*(ulong *)(param_1 + 8) < 2) {
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x1006c6d74 | FUN_1006c6d74 */

undefined8 * FUN_1006c6d74(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (uVar1 < 2) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006c6dbc | thunk_FUN_1006c6dc0 */

undefined8 * thunk_FUN_1006c6dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 < 2) {
    if ((ulong)param_2[1] < 2) {
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
    }
    else {
      *param_1 = *param_2;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      _swift_bridgeObjectRetain(uVar1);
    }
  }
  else if ((ulong)param_2[1] < 2) {
    FUN_10000caac();
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  return param_1;
}



/* Address: 0x1006c6dc0 | FUN_1006c6dc0 */

undefined8 * FUN_1006c6dc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 < 2) {
    if ((ulong)param_2[1] < 2) {
      uVar1 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar1;
    }
    else {
      *param_1 = *param_2;
      uVar1 = param_2[1];
      param_1[1] = uVar1;
      _swift_bridgeObjectRetain(uVar1);
    }
  }
  else if ((ulong)param_2[1] < 2) {
    FUN_10000caac();
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
  }
  else {
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  return param_1;
}



/* Address: 0x1006c6e68 | thunk_FUN_1006c6e6c */

undefined8 * thunk_FUN_1006c6e6c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 2) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 < 2) {
      FUN_10000caac();
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1006c6e6c | FUN_1006c6e6c */

undefined8 * FUN_1006c6e6c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 2) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 < 2) {
      FUN_10000caac();
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1006c6ed8 | thunk_FUN_1006c6edc */

int thunk_FUN_1006c6edc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 2;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c6edc | FUN_1006c6edc */

int FUN_1006c6edc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 2;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c6f38 | thunk_FUN_1006c6f3c */

void thunk_FUN_1006c6f3c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000002);
    param_1[1] = 0;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1006c6f3c | FUN_1006c6f3c */

void FUN_1006c6f3c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000002);
    param_1[1] = 0;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1006c6f88 | FUN_1006c6f88 */

undefined1  [16] FUN_1006c6f88(void)

{
  return ZEXT816(0x100ef89c0);
}



/* Address: 0x1006c6f98 | FUN_1006c6f98 */

void FUN_1006c6f98(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x1006c6fb0 | FUN_1006c6fb0 */

undefined8 * FUN_1006c6fb0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Address: 0x1006c6ffc | thunk_FUN_1006c7000 */

undefined8 * thunk_FUN_1006c7000(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
  }
  else {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar1);
    uVar3 = param_2[1];
    uVar2 = *param_2;
  }
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return param_1;
}



/* Address: 0x1006c7000 | FUN_1006c7000 */

undefined8 * FUN_1006c7000(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      return param_1;
    }
    uVar3 = param_2[1];
    uVar2 = *param_2;
  }
  else {
    if (0xfffffffe < (ulong)param_2[1]) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar1);
      return param_1;
    }
    _swift_bridgeObjectRelease(uVar1);
    uVar3 = param_2[1];
    uVar2 = *param_2;
  }
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return param_1;
}



/* Address: 0x1006c70a0 | thunk_FUN_1006c70a4 */

undefined8 * thunk_FUN_1006c70a4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 < 0xffffffff) {
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1006c70a4 | FUN_1006c70a4 */

undefined8 * FUN_1006c70a4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  if (uVar1 < 0xffffffff) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  else {
    uVar2 = param_2[1];
    if (uVar2 < 0xffffffff) {
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = uVar2;
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  return param_1;
}



/* Address: 0x1006c711c | thunk_FUN_1006c7120 */

int thunk_FUN_1006c7120(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Address: 0x1006c7120 | FUN_1006c7120 */

int FUN_1006c7120(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Address: 0x1006c7174 | thunk_FUN_1006c7178 */

void thunk_FUN_1006c7178(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1006c7178 | FUN_1006c7178 */

void FUN_1006c7178(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1006c71d4 | FUN_1006c71d4 */

undefined1  [16] FUN_1006c71d4(void)

{
  return ZEXT816(0x100ef8a58);
}



/* Address: 0x1006c71e4 | FUN_1006c71e4 */

undefined1  [16] FUN_1006c71e4(void)

{
  return ZEXT816(0x100ef8a78);
}



/* Address: 0x1006c71f4 | FUN_1006c71f4 */

undefined1  [16] FUN_1006c71f4(void)

{
  return ZEXT816(0x100ef8b10);
}



/* Address: 0x1006c7204 | thunk_FUN_1006c5af4 */

void thunk_FUN_1006c5af4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



/* Address: 0x1006c7208 | thunk_FUN_100402064 */

void thunk_FUN_100402064(void)

{
  FUN_100402064();
  return;
}



/* Address: 0x1006c720c | thunk_FUN_1006c6d60 */

void thunk_FUN_1006c6d60(long param_1)

{
  if (*(ulong *)(param_1 + 8) < 2) {
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x1006c7210 | thunk_FUN_1006c6f98 */

void thunk_FUN_1006c6f98(void)

{
  FUN_1006c6f98();
  return;
}



/* Address: 0x1006c7214 | thunk_FUN_1000f0e5c */

void thunk_FUN_1000f0e5c(void)

{
  FUN_1000f0e5c();
  return;
}



/* Address: 0x1006c7218 | thunk_FUN_1006c68ec */

void thunk_FUN_1006c68ec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf7) {
    if (0xf6 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xf7);
    param_1[1] = 0;
    if (0xf6 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1006c721c | thunk_FUN_1004be534 */

void thunk_FUN_1004be534(void)

{
  FUN_1004be534();
  return;
}



/* Address: 0x1006c7220 | thunk_FUN_1005aa2d8 */

void thunk_FUN_1005aa2d8(void)

{
  FUN_1005aa2d8();
  return;
}



/* Address: 0x1006c7224 | thunk_FUN_1006c6f3c */

void thunk_FUN_1006c6f3c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000002);
    param_1[1] = 0;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1006c7228 | thunk_FUN_1006c7178 */

void thunk_FUN_1006c7178(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7ffffffe) {
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)(param_2 + 1);
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000002;
    if (0x7ffffffd < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1006c722c | thunk_FUN_1006c5738 */

void thunk_FUN_1006c5738(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 2;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1006c7230 | thunk_FUN_1006c67a4 */

void thunk_FUN_1006c67a4(undefined8 *param_1)

{
  FUN_1006c63e0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1006c7234 | thunk_FUN_1006c6b8c */

void thunk_FUN_1006c6b8c(undefined8 *param_1)

{
  FUN_1006c6b2c(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x1006c7238 | thunk_FUN_1006c67b4 */

void thunk_FUN_1006c67b4(void)

{
  FUN_1006c67b4();
  return;
}



/* Address: 0x1006c723c | thunk_FUN_1006c6800 */

void thunk_FUN_1006c6800(void)

{
  thunk_FUN_1006c6800();
  return;
}



/* Address: 0x1006c7240 | thunk_FUN_1006c6858 */

void thunk_FUN_1006c6858(void)

{
  thunk_FUN_1006c6858();
  return;
}


