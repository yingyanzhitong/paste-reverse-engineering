/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008b4dd4 | thunk_FUN_1008b4da8 */

void thunk_FUN_1008b4da8(void)

{
  long unaff_x20;
  
  FUN_1008b3c9c(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x1008b4dd8 | thunk_FUN_100888164 */

void thunk_FUN_100888164(void)

{
  FUN_100893c88();
  return;
}



/* Address: 0x1008b4ddc | thunk_FUN_1008b4470 */

void thunk_FUN_1008b4470(void)

{
  thunk_FUN_1008b4470();
  return;
}



/* Address: 0x1008b4de0 | thunk_FUN_1008b46d0 */

void thunk_FUN_1008b46d0(void)

{
  FUN_1008b46d0();
  return;
}



/* Address: 0x1008b4de4 | thunk_FUN_1008b46d0 */

void thunk_FUN_1008b46d0(void)

{
  FUN_1008b46d0();
  return;
}



/* Address: 0x1008b4de8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008b4dec | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008b4df0 | thunk_FUN_1008b46d0 */

void thunk_FUN_1008b46d0(void)

{
  FUN_1008b46d0();
  return;
}



/* Address: 0x1008b4df4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008b4df8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008b4dfc | thunk_FUN_1008b46d0 */

void thunk_FUN_1008b46d0(void)

{
  FUN_1008b46d0();
  return;
}



/* Address: 0x1008b4e00 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008b4e04 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008b4e08 | thunk_FUN_1008b4d98 */

void thunk_FUN_1008b4d98(void)

{
  FUN_1008b4d98();
  return;
}



/* Address: 0x1008b4e0c | thunk_FUN_1008b4d98 */

void thunk_FUN_1008b4d98(void)

{
  FUN_1008b4d98();
  return;
}



/* Address: 0x1008b4e10 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x1008b4e14 | thunk_FUN_1008b4d98 */

void thunk_FUN_1008b4d98(void)

{
  FUN_1008b4d98();
  return;
}



/* Address: 0x1008b4e18 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x1008b4e1c | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  thunk_FUN_100653dc4();
  return;
}



/* Address: 0x1008b4e20 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x1008b4e24 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008b4e28 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008b4e2c | FUN_1008b4e2c */

void FUN_1008b4e2c(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xd);
  if (1 < bVar1 - 2) {
    if (bVar1 == 1) {
      FUN_100004594();
      _swift_release(param_1[5]);
      _swift_bridgeObjectRelease(param_1[6]);
      _swift_bridgeObjectRelease(param_1[8]);
      _swift_bridgeObjectRelease(param_1[0xb]);
      param_1 = param_1 + 0xc;
    }
    else {
      if (bVar1 != 0) {
        return;
      }
      param_1 = param_1 + 1;
    }
  }
  _swift_release(*param_1);
  return;
}



/* Address: 0x1008b4ea4 | FUN_1008b4ea4 */

undefined8 * FUN_1008b4ea4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  bVar1 = *(byte *)(param_2 + 0xd);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      uVar4 = param_2[1];
      param_1[1] = uVar4;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      if (bVar1 != 1) goto LAB_1008b4f88;
      lVar5 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar5;
      (*(code *)**(undefined8 **)(lVar5 + -8))(param_1);
      uVar2 = param_2[6];
      uVar6 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar6;
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      uVar3 = param_2[8];
      param_1[8] = uVar3;
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[10] = param_2[10];
      uVar4 = param_2[0xc];
      uVar8 = param_2[0xc];
      uVar7 = param_2[0xb];
      *(undefined1 *)(param_1 + 0xd) = 1;
      param_1[0xc] = uVar8;
      param_1[0xb] = uVar7;
      _swift_retain(uVar6);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar7);
    }
  }
  else {
    if ((bVar1 != 2) && (bVar1 != 3)) {
LAB_1008b4f88:
      uVar4 = param_2[8];
      uVar3 = param_2[0xb];
      uVar2 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar4;
      param_1[0xb] = uVar3;
      param_1[10] = uVar2;
      uVar4 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar4;
      uVar4 = *param_2;
      uVar3 = param_2[3];
      uVar2 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar4;
      param_1[3] = uVar3;
      param_1[2] = uVar2;
      uVar3 = param_2[4];
      uVar2 = param_2[7];
      uVar4 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
      param_1[7] = uVar2;
      param_1[6] = uVar4;
      return param_1;
    }
    uVar4 = *param_2;
    *param_1 = uVar4;
    *(byte *)(param_1 + 0xd) = bVar1;
  }
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x1008b4fe0 | FUN_1008b4fe0 */

undefined8 * FUN_1008b4fe0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = 0;
  FUN_1008b5148(0,*(undefined8 *)(param_3 + 0x10));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  bVar1 = *(byte *)(param_2 + 0xd);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      uVar3 = param_2[1];
      param_1[1] = uVar3;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      if (bVar1 != 1) goto LAB_1008b50ec;
      lVar2 = param_2[3];
      param_1[3] = lVar2;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      param_1[5] = param_2[5];
      uVar4 = param_2[6];
      param_1[6] = uVar4;
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      uVar5 = param_2[8];
      param_1[8] = uVar5;
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
      param_1[10] = param_2[10];
      uVar6 = param_2[0xb];
      param_1[0xb] = uVar6;
      uVar3 = param_2[0xc];
      param_1[0xc] = uVar3;
      *(undefined1 *)(param_1 + 0xd) = 1;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
  }
  else {
    if ((bVar1 != 2) && (bVar1 != 3)) {
LAB_1008b50ec:
      uVar4 = param_2[1];
      uVar3 = *param_2;
      uVar5 = param_2[2];
      uVar7 = param_2[5];
      uVar6 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = uVar5;
      param_1[5] = uVar7;
      param_1[4] = uVar6;
      param_1[1] = uVar4;
      *param_1 = uVar3;
      uVar4 = param_2[7];
      uVar3 = param_2[6];
      uVar6 = param_2[9];
      uVar5 = param_2[8];
      uVar8 = param_2[0xb];
      uVar7 = param_2[10];
      uVar9 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar9;
      param_1[9] = uVar6;
      param_1[8] = uVar5;
      param_1[0xb] = uVar8;
      param_1[10] = uVar7;
      param_1[7] = uVar4;
      param_1[6] = uVar3;
      return param_1;
    }
    uVar3 = *param_2;
    *param_1 = uVar3;
    *(byte *)(param_1 + 0xd) = bVar1;
  }
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x1008b5148 | FUN_1008b5148 */

void FUN_1008b5148(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b5154 | FUN_1008b5154 */

void FUN_1008b5154(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  uVar7 = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)((long)param_1 + 0x59) = uVar7;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x1008b5180 | FUN_1008b5180 */

undefined8 * FUN_1008b5180(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    FUN_1008b5148(0,*(undefined8 *)(param_3 + 0x10));
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    uVar2 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
    uVar2 = *(undefined8 *)((long)param_2 + 0x59);
    *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
    *(undefined8 *)((long)param_1 + 0x59) = uVar2;
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar4 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
  }
  return param_1;
}



/* Address: 0x1008b51ec | FUN_1008b51ec */

int FUN_1008b51ec(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 0x1a) ^ 0xff;
  if (*(byte *)(param_1 + 0x1a) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1008b5234 | FUN_1008b5234 */

void FUN_1008b5234(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x69) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 0xd) = -(char)param_2;
      return;
    }
  }
  else {
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
    *(undefined1 *)(param_1 + 0xd) = 0;
    *param_1 = (ulong)(param_2 - 0xfc);
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x69) = 1;
    }
  }
  return;
}



/* Address: 0x1008b5294 | FUN_1008b5294 */

void FUN_1008b5294(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b52a0 | FUN_1008b52a0 */

void FUN_1008b52a0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x1a);
  if (3 < *(byte *)(param_1 + 0x1a)) {
    uVar1 = *param_1 + 4;
  }
  if (1 < uVar1 - 2) {
    if (uVar1 == 1) {
      FUN_100004594();
      _swift_release(*(undefined8 *)(param_1 + 10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xc));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x16));
      param_1 = param_1 + 0x18;
    }
    else {
      if (uVar1 != 0) {
        return;
      }
      param_1 = param_1 + 2;
    }
  }
  _swift_release(*(undefined8 *)param_1);
  return;
}



/* Address: 0x1008b5328 | FUN_1008b5328 */

undefined8 * FUN_1008b5328(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = (uint)*(byte *)(param_2 + 0x1a);
  if (3 < *(byte *)(param_2 + 0x1a)) {
    uVar1 = *param_2 + 4;
  }
  if ((int)uVar1 < 2) {
    if (uVar1 == 0) {
      *(char *)param_1 = (char)*param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      param_1[1] = uVar4;
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      if (uVar1 != 1) goto LAB_1008b541c;
      lVar5 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar5;
      (*(code *)**(undefined8 **)(lVar5 + -8))(param_1);
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      uVar6 = *(undefined8 *)(param_2 + 10);
      param_1[6] = *(undefined8 *)(param_2 + 0xc);
      param_1[5] = uVar6;
      *(char *)(param_1 + 7) = (char)param_2[0xe];
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      param_1[8] = uVar3;
      *(char *)(param_1 + 9) = (char)param_2[0x12];
      param_1[10] = *(undefined8 *)(param_2 + 0x14);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x16);
      *(undefined1 *)(param_1 + 0xd) = 1;
      param_1[0xc] = uVar8;
      param_1[0xb] = uVar7;
      _swift_retain(uVar6);
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar7);
    }
  }
  else {
    if ((uVar1 != 2) && (uVar1 != 3)) {
LAB_1008b541c:
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x16);
      uVar2 = *(undefined8 *)(param_2 + 0x14);
      param_1[9] = *(undefined8 *)(param_2 + 0x12);
      param_1[8] = uVar4;
      param_1[0xb] = uVar3;
      param_1[10] = uVar2;
      uVar4 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar4;
      uVar4 = *(undefined8 *)param_2;
      uVar3 = *(undefined8 *)(param_2 + 6);
      uVar2 = *(undefined8 *)(param_2 + 4);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar4;
      param_1[3] = uVar3;
      param_1[2] = uVar2;
      uVar3 = *(undefined8 *)(param_2 + 8);
      uVar2 = *(undefined8 *)(param_2 + 0xe);
      uVar4 = *(undefined8 *)(param_2 + 0xc);
      param_1[5] = *(undefined8 *)(param_2 + 10);
      param_1[4] = uVar3;
      param_1[7] = uVar2;
      param_1[6] = uVar4;
      return param_1;
    }
    uVar4 = *(undefined8 *)param_2;
    *param_1 = uVar4;
    *(char *)(param_1 + 0xd) = (char)uVar1;
  }
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x1008b5474 | FUN_1008b5474 */

int * FUN_1008b5474(int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x1a);
  if (3 < *(byte *)(param_1 + 0x1a)) {
    uVar2 = *param_1 + 4;
  }
  piVar3 = param_1;
  if (uVar2 - 2 < 2) {
LAB_1008b54fc:
    _swift_release(*(undefined8 *)piVar3);
  }
  else {
    if (uVar2 == 1) {
      FUN_100004594(param_1);
      _swift_release(*(undefined8 *)(param_1 + 10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xc));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x16));
      piVar3 = param_1 + 0x18;
      goto LAB_1008b54fc;
    }
    if (uVar2 == 0) {
      piVar3 = param_1 + 2;
      goto LAB_1008b54fc;
    }
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x1a);
  if (3 < *(byte *)(param_2 + 0x1a)) {
    uVar2 = *param_2 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      *(char *)param_1 = (char)*param_2;
      uVar4 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 2) = uVar4;
      *(undefined1 *)(param_1 + 0x1a) = 0;
    }
    else {
      if (uVar2 != 1) goto LAB_1008b55dc;
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      uVar5 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0xc) = uVar5;
      *(char *)(param_1 + 0xe) = (char)param_2[0xe];
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(char *)(param_1 + 0x12) = (char)param_2[0x12];
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      uVar7 = *(undefined8 *)(param_2 + 0x16);
      *(undefined8 *)(param_1 + 0x16) = uVar7;
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      *(undefined1 *)(param_1 + 0x1a) = 1;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
    }
  }
  else {
    if ((uVar2 != 2) && (uVar2 != 3)) {
LAB_1008b55dc:
      uVar5 = *(undefined8 *)(param_2 + 2);
      uVar4 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 4);
      uVar8 = *(undefined8 *)(param_2 + 10);
      uVar7 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar6;
      *(undefined8 *)(param_1 + 10) = uVar8;
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 2) = uVar5;
      *(undefined8 *)param_1 = uVar4;
      uVar5 = *(undefined8 *)(param_2 + 0xe);
      uVar4 = *(undefined8 *)(param_2 + 0xc);
      uVar7 = *(undefined8 *)(param_2 + 0x12);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      uVar9 = *(undefined8 *)(param_2 + 0x16);
      uVar8 = *(undefined8 *)(param_2 + 0x14);
      uVar10 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar10;
      *(undefined8 *)(param_1 + 0x12) = uVar7;
      *(undefined8 *)(param_1 + 0x10) = uVar6;
      *(undefined8 *)(param_1 + 0x16) = uVar9;
      *(undefined8 *)(param_1 + 0x14) = uVar8;
      *(undefined8 *)(param_1 + 0xe) = uVar5;
      *(undefined8 *)(param_1 + 0xc) = uVar4;
      return param_1;
    }
    uVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar4;
    *(char *)(param_1 + 0x1a) = (char)uVar2;
  }
  _swift_retain(uVar4);
  return param_1;
}



/* Address: 0x1008b5638 | FUN_1008b5638 */

void FUN_1008b5638(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == param_2) {
    return;
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x1a);
  if (3 < *(byte *)(param_1 + 0x1a)) {
    uVar2 = *param_1 + 4;
  }
  piVar3 = param_1;
  if (uVar2 - 2 < 2) {
LAB_1008b56b8:
    _swift_release(*(undefined8 *)piVar3);
  }
  else {
    if (uVar2 == 1) {
      FUN_100004594();
      _swift_release(*(undefined8 *)(param_1 + 10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xc));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x16));
      piVar3 = param_1 + 0x18;
      goto LAB_1008b56b8;
    }
    if (uVar2 == 0) {
      piVar3 = param_1 + 2;
      goto LAB_1008b56b8;
    }
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x1a);
  if (3 < *(byte *)(param_2 + 0x1a)) {
    uVar2 = *param_2 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      uVar4 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined1 *)(param_1 + 0x1a) = 0;
      return;
    }
    if (uVar2 != 1) {
LAB_1008b573c:
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar6 = *(undefined8 *)(param_2 + 0x16);
      uVar5 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      *(undefined8 *)(param_1 + 0x16) = uVar6;
      *(undefined8 *)(param_1 + 0x14) = uVar5;
      uVar4 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar4;
      uVar4 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar5 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar4;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar5;
      uVar6 = *(undefined8 *)(param_2 + 8);
      uVar5 = *(undefined8 *)(param_2 + 0xe);
      uVar4 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar6;
      *(undefined8 *)(param_1 + 0xe) = uVar5;
      *(undefined8 *)(param_1 + 0xc) = uVar4;
      return;
    }
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_2 + 0x16);
    uVar5 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined8 *)(param_1 + 0x16) = uVar6;
    *(undefined8 *)(param_1 + 0x14) = uVar5;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 6) = uVar6;
    *(undefined8 *)(param_1 + 4) = uVar5;
    uVar6 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0xe);
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar6;
    *(undefined8 *)(param_1 + 0xe) = uVar5;
    *(undefined8 *)(param_1 + 0xc) = uVar4;
    uVar1 = 1;
  }
  else if (uVar2 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar1 = 2;
  }
  else {
    if (uVar2 != 3) goto LAB_1008b573c;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar1 = 3;
  }
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return;
}



/* Address: 0x1008b578c | FUN_1008b578c */

int FUN_1008b578c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x69) != '\0')) {
    return *param_1 + 0xfc;
  }
  iVar1 = 0;
  if (4 < *(byte *)(param_1 + 0x1a)) {
    iVar1 = (*(byte *)(param_1 + 0x1a) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1008b57c8 | FUN_1008b57c8 */

void FUN_1008b57c8(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfc) {
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x69) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 0x1a) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x61) = 0;
    *(undefined8 *)((long)param_1 + 0x59) = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfc;
    if (0xfb < param_3) {
      *(undefined1 *)((long)param_1 + 0x69) = 1;
    }
  }
  return;
}



/* Address: 0x1008b581c | FUN_1008b581c */

uint FUN_1008b581c(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x1a);
  if (3 < *(byte *)(param_1 + 0x1a)) {
    uVar1 = *param_1 + 4;
  }
  return uVar1;
}



/* Address: 0x1008b5838 | FUN_1008b5838 */

void FUN_1008b5838(int *param_1,uint param_2)

{
  int iVar1;
  
  if (3 < param_2) {
    iVar1 = param_2 - 4;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_2 = 4;
    *param_1 = iVar1;
  }
  *(char *)(param_1 + 0x1a) = (char)param_2;
  return;
}



/* Address: 0x1008b5868 | FUN_1008b5868 */

void FUN_1008b5868(undefined8 *param_1)

{
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 0xd) = 4;
  return;
}



/* Address: 0x1008b5888 | FUN_1008b5888 */

undefined8 FUN_1008b5888(long param_1)

{
  long lVar1;
  undefined8 *unaff_x20;
  long lVar2;
  code *pcVar3;
  String SVar4;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  long lStack_40;
  byte local_38;
  
  lVar1 = 0;
  FUN_1008b5148(0,*(undefined8 *)(param_1 + 0x10));
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 0x10))(&local_a0);
  if (((local_38 < 2) || (local_38 == 2)) || (local_38 == 3)) {
    pcVar3 = *(code **)(lVar2 + 8);
    (*pcVar3)(&local_a0,lVar1);
  }
  else {
    if (((((lStack_40 != 0 || local_a0 != 0) || (local_48 != 0 || lStack_50 != 0)) ||
         ((local_58 != 0 || lStack_60 != 0) || local_68 != 0)) ||
        (((lStack_70 != 0 || local_78 != 0) || lStack_80 != 0) || local_88 != 0)) ||
        (local_90 != 0 || lStack_98 != 0)) {
      if ((local_a0 == 1) &&
         (((((local_48 == 0 && lStack_40 == 0) && (lStack_50 == 0 && local_58 == 0)) &&
           ((lStack_60 == 0 && local_68 == 0) && lStack_70 == 0)) &&
          (((local_78 == 0 && lStack_80 == 0) && local_88 == 0) && local_90 == 0)) && lStack_98 == 0
         )) {
        return 1;
      }
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000037,0x8000000100db43d0
                 ,0xdb4470);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b5a24);
      (*pcVar3)();
    }
    pcVar3 = *(code **)(lVar2 + 8);
  }
  (*pcVar3)();
  *unaff_x20 = 1;
  unaff_x20[2] = 0;
  unaff_x20[1] = 0;
  unaff_x20[4] = 0;
  unaff_x20[3] = 0;
  unaff_x20[6] = 0;
  unaff_x20[5] = 0;
  unaff_x20[8] = 0;
  unaff_x20[7] = 0;
  unaff_x20[10] = 0;
  unaff_x20[9] = 0;
  unaff_x20[0xc] = 0;
  unaff_x20[0xb] = 0;
  *(undefined1 *)(unaff_x20 + 0xd) = 4;
  return 0;
}



/* Address: 0x1008b5a24 | FUN_1008b5a24 */

undefined8 FUN_1008b5a24(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  String SVar5;
  undefined1 auStack_110 [72];
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  byte local_58;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  FUN_1008b5148(0,uVar2);
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(&local_c0);
  if (local_58 < 2) {
    if (local_58 == 0) {
      local_c8 = local_b8;
      if ((local_c0 & 1) != 0) {
        pcVar4 = *(code **)(lVar3 + 8);
        (*pcVar4)();
        *unaff_x20 = 2;
        unaff_x20[2] = 0;
        unaff_x20[1] = 0;
        unaff_x20[4] = 0;
        unaff_x20[3] = 0;
        unaff_x20[6] = 0;
        unaff_x20[5] = 0;
        unaff_x20[8] = 0;
        unaff_x20[7] = 0;
        unaff_x20[10] = 0;
        unaff_x20[9] = 0;
        unaff_x20[0xc] = 0;
        unaff_x20[0xb] = 0;
        *(undefined1 *)(unaff_x20 + 0xd) = 4;
        FUN_1005e650c(param_1,auStack_110);
        lVar1 = 0xff;
        FUN_1008b6134(0xff,uVar2);
        uVar2 = 0;
        FUN_1006883a0(0,lVar1);
        FUN_100679d80(auStack_110,uVar2);
        (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_110,lVar1);
        (*pcVar4)();
        *(undefined1 *)unaff_x20 = 1;
        unaff_x20[1] = local_c8;
        *(undefined1 *)(unaff_x20 + 0xd) = 0;
        return 2;
      }
      _swift_release();
    }
    else {
      (**(code **)(lVar3 + 8))(&local_c0,lVar1);
    }
  }
  else {
    if (local_58 == 2) {
      local_c8 = local_c0;
      pcVar4 = *(code **)(lVar3 + 8);
      (*pcVar4)();
      *unaff_x20 = 2;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      unaff_x20[6] = 0;
      unaff_x20[5] = 0;
      unaff_x20[8] = 0;
      unaff_x20[7] = 0;
      unaff_x20[10] = 0;
      unaff_x20[9] = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[0xb] = 0;
      *(undefined1 *)(unaff_x20 + 0xd) = 4;
      FUN_1005e650c(param_1,auStack_110);
      lVar1 = 0xff;
      FUN_1008b6134(0xff,uVar2);
      uVar2 = 0;
      FUN_1006883a0(0,lVar1);
      FUN_100679d80(auStack_110,uVar2);
      (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_110,lVar1);
      (*pcVar4)();
      *unaff_x20 = local_c8;
      *(undefined1 *)(unaff_x20 + 0xd) = 2;
      return 2;
    }
    if (local_58 == 3) {
      local_c8 = local_c0;
      pcVar4 = *(code **)(lVar3 + 8);
      (*pcVar4)();
      *unaff_x20 = 2;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      unaff_x20[6] = 0;
      unaff_x20[5] = 0;
      unaff_x20[8] = 0;
      unaff_x20[7] = 0;
      unaff_x20[10] = 0;
      unaff_x20[9] = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[0xb] = 0;
      *(undefined1 *)(unaff_x20 + 0xd) = 4;
      FUN_1005e650c(param_1,auStack_110);
      lVar1 = 0xff;
      FUN_1008b6134(0xff,uVar2);
      uVar2 = 0;
      FUN_1006883a0(0,lVar1);
      FUN_100679d80(auStack_110,uVar2);
      (**(code **)(*(long *)(lVar1 + -8) + 8))(auStack_110,lVar1);
      (*pcVar4)();
      *unaff_x20 = local_c8;
      *(undefined1 *)(unaff_x20 + 0xd) = 3;
      return 2;
    }
    if (((((lStack_60 != 0 || local_c0 != 0) || (local_68 != 0 || lStack_70 != 0)) ||
         ((local_78 != 0 || lStack_80 != 0) || local_88 != 0)) ||
        (((lStack_90 != 0 || local_98 != 0) || lStack_a0 != 0) || local_a8 != 0)) ||
        (lStack_b0 != 0 || local_b8 != 0)) {
      if ((local_c0 == 1) &&
         (((((local_68 == 0 && lStack_60 == 0) && (lStack_70 == 0 && local_78 == 0)) &&
           ((lStack_80 == 0 && local_88 == 0) && lStack_90 == 0)) &&
          (((local_98 == 0 && lStack_a0 == 0) && local_a8 == 0) && lStack_b0 == 0)) && local_b8 == 0
         )) {
        return 1;
      }
      SVar5.bridgeObject = (void *)0x2;
      SVar5.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000037,0x8000000100db43d0
                 ,0xdb4470);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b5dbc);
      (*pcVar4)();
    }
  }
  return 0;
}



/* Address: 0x1008b5dbc | FUN_1008b5dbc */

undefined8 FUN_1008b5dbc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 uVar3;
  ulong *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  String SVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  byte local_48;
  
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = 0;
  FUN_1008b5148(0,uVar4);
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(&local_b0);
  if (local_48 < 2) {
    if (local_48 == 0) {
      local_b8 = local_a8;
      if ((local_b0 & 1) == 0) {
        _swift_release();
        uVar4 = 0;
      }
      else {
        uStack_d8 = 0;
        local_e0 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_e8 = 0;
        uStack_f0 = 0;
        local_c0 = 0xff00;
        lVar2 = 0xff;
        FUN_1008b6134(0xff,uVar4);
        uVar4 = 0;
        FUN_1006883a0(0,lVar2);
        FUN_100679d80(&local_100,uVar4);
        (**(code **)(*(long *)(lVar2 + -8) + 8))(&local_100,lVar2);
        (**(code **)(lVar5 + 8))();
        uVar4 = 1;
        *(undefined1 *)unaff_x20 = 1;
        unaff_x20[1] = local_b8;
        *(undefined1 *)(unaff_x20 + 0xd) = 0;
      }
    }
    else {
      pcVar1 = *(code **)(lVar5 + 8);
      (*pcVar1)();
      *unaff_x20 = 1;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      unaff_x20[6] = 0;
      unaff_x20[5] = 0;
      unaff_x20[8] = 0;
      unaff_x20[7] = 0;
      unaff_x20[10] = 0;
      unaff_x20[9] = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[0xb] = 0;
      *(undefined1 *)(unaff_x20 + 0xd) = 4;
      (*pcVar1)(&local_b0,lVar2);
      uVar4 = 0;
    }
  }
  else {
    if (local_48 == 2) {
      local_b8 = local_b0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      local_c0 = 0xff00;
      lVar2 = 0xff;
      FUN_1008b6134(0xff,uVar4);
      uVar4 = 0;
      FUN_1006883a0(0,lVar2);
      FUN_100679d80(&local_100,uVar4);
      (**(code **)(*(long *)(lVar2 + -8) + 8))(&local_100,lVar2);
      (**(code **)(lVar5 + 8))();
      *unaff_x20 = local_b8;
      uVar3 = 2;
    }
    else {
      if (local_48 != 3) {
        if (((((lStack_50 == 0 && local_b0 == 0) && (local_58 == 0 && lStack_60 == 0)) &&
             ((local_68 == 0 && lStack_70 == 0) && local_78 == 0)) &&
            (((lStack_80 == 0 && local_88 == 0) && lStack_90 == 0) && local_98 == 0)) &&
            (lStack_a0 == 0 && local_a8 == 0)) {
          (**(code **)(lVar5 + 8))();
          *unaff_x20 = 1;
          unaff_x20[2] = 0;
          unaff_x20[1] = 0;
          unaff_x20[4] = 0;
          unaff_x20[3] = 0;
          unaff_x20[6] = 0;
          unaff_x20[5] = 0;
          unaff_x20[8] = 0;
          unaff_x20[7] = 0;
          unaff_x20[10] = 0;
          unaff_x20[9] = 0;
          unaff_x20[0xc] = 0;
          unaff_x20[0xb] = 0;
          *(undefined1 *)(unaff_x20 + 0xd) = 4;
          return 0;
        }
        if ((local_b0 == 1) &&
           (((((local_58 == 0 && lStack_50 == 0) && (lStack_60 == 0 && local_68 == 0)) &&
             ((lStack_70 == 0 && local_78 == 0) && lStack_80 == 0)) &&
            (((local_88 == 0 && lStack_90 == 0) && local_98 == 0) && lStack_a0 == 0)) &&
            local_a8 == 0)) {
          return 2;
        }
        SVar6.bridgeObject = (void *)0x2;
        SVar6.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000037,
                   0x8000000100db43d0,0xdb4470);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b6134);
        (*pcVar1)();
      }
      local_b8 = local_b0;
      uStack_d8 = 0;
      local_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      local_c0 = 0xff00;
      lVar2 = 0xff;
      FUN_1008b6134(0xff,uVar4);
      uVar4 = 0;
      FUN_1006883a0(0,lVar2);
      FUN_100679d80(&local_100,uVar4);
      (**(code **)(*(long *)(lVar2 + -8) + 8))(&local_100,lVar2);
      (**(code **)(lVar5 + 8))();
      *unaff_x20 = local_b8;
      uVar3 = 3;
    }
    *(undefined1 *)(unaff_x20 + 0xd) = uVar3;
    uVar4 = 1;
  }
  return uVar4;
}



/* Address: 0x1008b6134 | FUN_1008b6134 */

void FUN_1008b6134(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b6140 | FUN_1008b6140 */

void FUN_1008b6140(undefined8 *param_1,undefined *param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  Substring SVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 uVar13;
  long *unaff_x20;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  undefined *local_150;
  long lStack_148;
  ulong local_140;
  undefined *local_138;
  long local_130;
  long lStack_128;
  long lStack_120;
  long local_118;
  undefined8 local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  undefined1 local_e8;
  long local_e0;
  undefined *local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  byte local_70;
  
  uVar16 = *(undefined8 *)(param_5 + 0x10);
  lVar5 = 0;
  FUN_1008b5148(0,uVar16);
  lVar18 = *(long *)(lVar5 + -8);
  ppuVar6 = &local_d8;
  (**(code **)(lVar18 + 0x10))(ppuVar6);
  if (1 < local_70) {
    if (local_70 == 4) {
      if (((((local_78 == 0 && local_d8 == (undefined *)0x0) && (lStack_80 == 0 && local_88 == 0))
           && ((lStack_90 == 0 && local_98 == 0) && lStack_a0 == 0)) &&
          (((local_a8 == 0 && lStack_b0 == 0) && local_b8 == 0) && lStack_c0 == 0)) &&
          (local_c8 == 0 && lStack_d0 == 0)) {
        if (param_4 >> 0x38 != 0) {
          FUN_100899924();
          puVar8 = &DAT_100f0a390;
          _swift_allocError(&DAT_100f0a390,local_b8,0,0);
          *param_1 = puVar8;
          *(undefined1 *)(param_1 + 0xc) = 0;
          return;
        }
        _swift_retain(param_2);
        _swift_bridgeObjectRetain(param_3);
        lVar7 = 0x65646172677075;
        FUN_10089dad4(0x65646172677075,&DAT_e700000000000000,param_3,param_4);
        puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        uVar14 = *(ulong *)(lVar7 + 0x10);
        if (uVar14 == 0) {
          _swift_bridgeObjectRelease(lVar7);
          puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          local_150 = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_100892608(0,uVar14,0);
          uVar19 = 0;
          puVar15 = (undefined8 *)(lVar7 + 0x38);
          do {
            puVar8 = local_150;
            if (*(ulong *)(lVar7 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b6804);
              (*pcVar4)();
            }
            SVar20 = *(String *)(puVar15 + -3);
            uVar9 = *puVar15;
            _swift_bridgeObjectRetain(uVar9);
            SVar20 = Swift::String::__fromSubstring(SVar20);
            _swift_bridgeObjectRelease(uVar9);
            uVar1 = *(ulong *)(puVar8 + 0x10);
            local_150 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              FUN_100892608(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
            }
            puVar17 = local_150;
            uVar19 = uVar19 + 1;
            *(ulong *)(local_150 + 0x10) = uVar1 + 1;
            *(String *)(local_150 + uVar1 * 0x10 + 0x20) = SVar20;
            puVar15 = puVar15 + 4;
          } while (uVar14 != uVar19);
          _swift_bridgeObjectRelease(lVar7);
          puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        if (*(long *)(puVar17 + 0x10) == 0) {
          _swift_bridgeObjectRelease(puVar17);
          lVar10 = 0;
          FUN_1008b6134(0,uVar16);
          lVar7 = lVar10;
          thunk_FUN_100683d64();
          puVar8 = &DAT_100fe90f8;
          local_e0 = lVar7;
          FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
          local_140 = param_4 & 0xffffffffffffff;
          local_110._0_2_ = CONCAT11(2,(undefined1)local_110);
          local_150 = param_2;
          lStack_148 = param_3;
          local_138 = puVar8;
          FUN_100878fa0(param_2,param_3,param_4,0);
          uVar16 = 0;
          FUN_1006883a0(0,lVar10);
          FUN_100679d80(&local_150,uVar16);
          _swift_bridgeObjectRelease(param_3);
          _swift_release(param_2);
          (**(code **)(*(long *)(lVar10 + -8) + 8))(&local_150,lVar10);
          (**(code **)(lVar18 + 8))(unaff_x20,lVar5);
          *unaff_x20 = local_e0;
          *(undefined1 *)(unaff_x20 + 0xd) = 2;
          param_1[1] = 0;
          *param_1 = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
          param_1[9] = 0;
          param_1[8] = 0;
          param_1[0xb] = 0;
          param_1[10] = 0;
          uVar13 = 3;
        }
        else {
          uVar9 = 0;
          FUN_1008b6134(0,uVar16);
          thunk_FUN_100683d64();
          local_150 = (undefined *)((ulong)local_150 & 0xffffffffffffff00);
          local_e8 = 0;
          lStack_148 = uVar9;
          (**(code **)(lVar18 + 0x28))(unaff_x20,&local_150,lVar5);
          lVar18 = 0x697463656e6e6f63;
          FUN_10089dad4(0x697463656e6e6f63,0xea00000000006e6f,param_3,param_4);
          lVar5 = *(long *)(lVar18 + 0x10);
          if (lVar5 == 0) {
            _swift_bridgeObjectRelease(lVar18);
            puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            local_150 = puVar8;
            FUN_100892608(0,lVar5,0);
            puVar15 = (undefined8 *)(lVar18 + 0x38);
            do {
              puVar8 = local_150;
              SVar2.unknown = (undefined *)puVar15[-3];
              uVar16 = *puVar15;
              _swift_bridgeObjectRetain(uVar16);
              SVar20 = Swift::Substring::lowercased(SVar2);
              _swift_bridgeObjectRelease(uVar16);
              uVar14 = *(ulong *)(puVar8 + 0x10);
              local_150 = puVar8;
              if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
                FUN_100892608(1 < *(ulong *)(puVar8 + 0x18),uVar14 + 1,1);
              }
              puVar8 = local_150;
              puVar15 = puVar15 + 4;
              *(ulong *)(local_150 + 0x10) = uVar14 + 1;
              *(String *)(local_150 + uVar14 * 0x10 + 0x20) = SVar20;
              lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
            _swift_bridgeObjectRelease(lVar18);
          }
          puVar11 = puVar8;
          FUN_1008b3d44();
          _swift_bridgeObjectRelease(puVar8);
          lVar5 = *(long *)(param_3 + 0x10);
          puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (lVar5 != 0) {
            local_150 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_100892608(0,lVar5,0);
            puVar15 = (undefined8 *)(param_3 + 0x28);
            do {
              puVar8 = local_150;
              SVar20.bridgeObject = (void *)*puVar15;
              SVar20.str = (char *)puVar15[-1];
              SVar20 = Swift::String::lowercased(SVar20);
              uVar14 = *(ulong *)(puVar8 + 0x10);
              local_150 = puVar8;
              if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
                FUN_100892608(1 < *(ulong *)(puVar8 + 0x18),uVar14 + 1,1);
              }
              puVar15 = puVar15 + 4;
              *(ulong *)(local_150 + 0x10) = uVar14 + 1;
              *(String *)(local_150 + uVar14 * 0x10 + 0x20) = SVar20;
              lVar5 = lVar5 + -1;
              puVar8 = local_150;
            } while (lVar5 != 0);
          }
          puVar12 = puVar8;
          FUN_1008b3d44();
          _swift_bridgeObjectRelease(puVar8);
          *param_1 = param_2;
          param_1[1] = param_3;
          *(char *)(param_1 + 2) = (char)param_4;
          param_1[3] = puVar17;
          param_1[4] = puVar12;
          param_1[5] = puVar11;
          uVar13 = 2;
        }
        *(undefined1 *)(param_1 + 0xc) = uVar13;
        return;
      }
    }
    else {
      (**(code **)(lVar18 + 8))(&local_d8,lVar5);
    }
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000037,0x8000000100db43d0,
               0xdb4470);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b68b4);
    (*pcVar4)();
  }
  cVar3 = (char)(param_4 >> 0x38);
  if (local_70 == 0) {
    if (((((ulong)local_d8 & 1) == 0) && (cVar3 != '\0')) && (cVar3 != '\x01')) {
      (**(code **)(lVar18 + 8))();
      *(undefined1 *)unaff_x20 = 1;
      unaff_x20[1] = lStack_d0;
      *(undefined1 *)(unaff_x20 + 0xd) = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[9] = 0;
      param_1[8] = 0;
      param_1[0xb] = 0;
      param_1[10] = 0;
      *(undefined1 *)(param_1 + 0xc) = 0xff;
      return;
    }
    FUN_100899924();
    puVar8 = &DAT_100f0a390;
    _swift_allocError(&DAT_100f0a390,ppuVar6,0,0);
    _swift_release(lStack_d0);
  }
  else {
    lStack_108 = lStack_90;
    local_110 = local_98;
    lStack_f8 = lStack_80;
    local_100 = local_88;
    local_f0 = local_78;
    lStack_148 = lStack_d0;
    local_150 = local_d8;
    local_138 = (undefined *)lStack_c0;
    local_140 = local_c8;
    lStack_128 = lStack_b0;
    local_130 = local_b8;
    local_118 = lStack_a0;
    lStack_120 = local_a8;
    if ((cVar3 != '\0') && (cVar3 != '\x01')) {
      (**(code **)(lVar18 + 8))();
      *unaff_x20 = local_f0;
      *(undefined1 *)(unaff_x20 + 0xd) = 2;
      FUN_100076508(&local_150,param_1);
      param_1[6] = lStack_120;
      param_1[5] = lStack_128;
      *(undefined1 *)(param_1 + 7) = (undefined1)local_118;
      param_1[8] = local_110;
      *(undefined1 *)(param_1 + 9) = (undefined1)lStack_108;
      param_1[10] = local_100;
      param_1[0xb] = lStack_f8;
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    FUN_100899924();
    puVar8 = &DAT_100f0a390;
    _swift_allocError(&DAT_100f0a390,ppuVar6,0,0);
    lVar5 = 0;
    FUN_1008b7424(0,uVar16);
    (**(code **)(*(long *)(lVar5 + -8) + 8))(&local_150,lVar5);
  }
  *param_1 = puVar8;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}



/* Address: 0x1008b68b4 | FUN_1008b68b4 */

void FUN_1008b68b4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  Result RVar1;
  bool bVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  String SVar15;
  undefined8 auStack_100 [2];
  long alStack_f0 [2];
  undefined8 *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  byte local_68;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar11 + -8);
  lVar3 = (long)alStack_f0 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  alStack_f0[1] = lVar3;
  local_e0 = param_1;
  FUN_1000f8b08(&DAT_100fe9a00,&DAT_100c809b0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,RVar1.value);
  lVar12 = *(long *)(lVar7 + -8);
  puVar13 = (undefined8 *)(lVar3 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  FUN_1008b5148(0,lVar11);
  lVar14 = *(long *)(lVar3 + -8);
  (**(code **)(lVar14 + 0x10))(&local_d0);
  if (local_68 < 4) {
    if (local_68 == 2) {
      (**(code **)(lVar12 + 0x10))(puVar13,param_2,lVar7);
      puVar4 = puVar13;
      _swift_getEnumCaseMultiPayload(puVar13,lVar7);
      lVar7 = alStack_f0[1];
      if ((int)puVar4 == 1) {
        uVar10 = *puVar13;
        local_d8 = local_d0;
        uVar5 = 0xff;
        FUN_1008b6134(0xff,lVar11);
        uVar6 = 0;
        FUN_1006883a0(0,uVar5);
        _swift_getWitnessTable(0x100c6d780,uVar6);
        bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
        if (bVar2) {
          _swift_release(local_d0);
          (**(code **)(lVar14 + 8))();
          puVar13 = local_e0;
          *unaff_x20 = 1;
          unaff_x20[2] = 0;
          unaff_x20[1] = 0;
          unaff_x20[4] = 0;
          unaff_x20[3] = 0;
          unaff_x20[6] = 0;
          unaff_x20[5] = 0;
          unaff_x20[8] = 0;
          unaff_x20[7] = 0;
          unaff_x20[10] = 0;
          unaff_x20[9] = 0;
          unaff_x20[0xc] = 0;
          unaff_x20[0xb] = 0;
          *(undefined1 *)(unaff_x20 + 0xd) = 4;
          *local_e0 = uVar10;
          lVar7 = 0;
          FUN_1008b7418(0,lVar11);
          uVar5 = 2;
        }
        else {
          (**(code **)(lVar14 + 8))();
          puVar13 = local_e0;
          *unaff_x20 = local_d0;
          *(undefined1 *)(unaff_x20 + 0xd) = 3;
          *local_e0 = uVar10;
          lVar7 = 0;
          FUN_1008b7418(0,lVar11);
          uVar5 = 0;
        }
      }
      else {
        pcVar8 = *(code **)(lVar9 + 0x20);
        (*pcVar8)(alStack_f0[1],puVar13,lVar11);
        local_d8 = local_d0;
        uVar5 = 0xff;
        FUN_1008b6134(0xff,lVar11);
        uVar6 = 0;
        FUN_1006883a0(0,uVar5);
        _swift_getWitnessTable(0x100c6d780,uVar6);
        bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
        if (bVar2) {
          _swift_release(local_d0);
          (**(code **)(lVar14 + 8))();
          puVar13 = local_e0;
          *unaff_x20 = 1;
          unaff_x20[2] = 0;
          unaff_x20[1] = 0;
          unaff_x20[4] = 0;
          unaff_x20[3] = 0;
          unaff_x20[6] = 0;
          unaff_x20[5] = 0;
          unaff_x20[8] = 0;
          unaff_x20[7] = 0;
          unaff_x20[10] = 0;
          unaff_x20[9] = 0;
          unaff_x20[0xc] = 0;
          unaff_x20[0xb] = 0;
          *(undefined1 *)(unaff_x20 + 0xd) = 4;
          (*pcVar8)(local_e0,lVar7,lVar11);
          lVar7 = 0;
          FUN_1008b7418(0,lVar11);
          uVar5 = 1;
        }
        else {
          (**(code **)(lVar14 + 8))();
          puVar13 = local_e0;
          *unaff_x20 = local_d0;
          *(undefined1 *)(unaff_x20 + 0xd) = 3;
          (*pcVar8)(local_e0,lVar7,lVar11);
          lVar7 = 0;
          FUN_1008b7418(0,lVar11);
          uVar5 = 3;
        }
      }
      _swift_storeEnumTagMultiPayload(puVar13,lVar7,uVar5);
      pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      uVar5 = 0;
LAB_1008b6c98:
      (*pcVar8)(puVar13,uVar5,1,lVar7);
      return;
    }
    (**(code **)(lVar14 + 8))(&local_d0,lVar3);
    *(undefined4 *)(puVar13 + -1) = 0;
    uVar5 = 0x123;
  }
  else if (((((lStack_70 == 0 && local_d0 == 0) && (local_78 == 0 && lStack_80 == 0)) &&
            ((local_88 == 0 && lStack_90 == 0) && local_98 == 0)) &&
           (((lStack_a0 == 0 && local_a8 == 0) && lStack_b0 == 0) && local_b8 == 0)) &&
           (lStack_c0 == 0 && local_c8 == 0)) {
    *(undefined4 *)(puVar13 + -1) = 0;
    uVar5 = 0x104;
  }
  else {
    if ((local_d0 == 1) &&
       (((((local_78 == 0 && lStack_70 == 0) && (lStack_80 == 0 && local_88 == 0)) &&
         ((lStack_90 == 0 && local_98 == 0) && lStack_a0 == 0)) &&
        (((local_a8 == 0 && lStack_b0 == 0) && local_b8 == 0) && lStack_c0 == 0)) && local_c8 == 0))
    {
      lVar7 = 0;
      FUN_1008b7418(0,lVar11);
      pcVar8 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      uVar5 = 1;
      puVar13 = local_e0;
      goto LAB_1008b6c98;
    }
    *(undefined4 *)(puVar13 + -1) = 0;
    uVar5 = 0x126;
  }
  puVar13[-2] = uVar5;
  SVar15.bridgeObject = (void *)0x2;
  SVar15.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar15,(StaticString)0xd000000000000037,0x8000000100db43d0,
             0xdb4470);
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1008b6d58);
  (*pcVar8)();
}



/* Address: 0x1008b6d58 | FUN_1008b6d58 */

void FUN_1008b6d58(undefined8 *param_1,long param_2,long param_3,undefined1 param_4,
                  undefined8 *param_5,long param_6)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  String SVar11;
  long local_158 [5];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long local_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  undefined1 local_e8;
  ulong local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  byte local_70;
  
  uVar9 = *(undefined8 *)(param_6 + 0x10);
  lVar6 = 0;
  FUN_1008b5148(0,uVar9);
  lVar10 = *(long *)(lVar6 + -8);
  (**(code **)(lVar10 + 0x10))(&local_d8);
  if (local_70 < 2) {
    if (local_70 == 0) {
      if (*(char *)(param_5 + 9) == '\x01') {
        uVar8 = *param_5;
        _swift_errorRetain(uVar8);
        local_158[0] = local_d0;
        uVar7 = 0xff;
        local_130 = uVar8;
        FUN_1008b6134(0xff,uVar9);
        uVar9 = 0;
        FUN_1006883a0(0,uVar7);
        _swift_getWitnessTable(0x100c6d780,uVar9);
        bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
        if (bVar5) {
          _swift_release(local_d0);
          (**(code **)(lVar10 + 8))();
          *unaff_x20 = 1;
          unaff_x20[2] = 0;
          unaff_x20[1] = 0;
          unaff_x20[4] = 0;
          unaff_x20[3] = 0;
          unaff_x20[6] = 0;
          unaff_x20[5] = 0;
          unaff_x20[8] = 0;
          unaff_x20[7] = 0;
          unaff_x20[10] = 0;
          unaff_x20[9] = 0;
          unaff_x20[0xc] = 0;
          unaff_x20[0xb] = 0;
          *(undefined1 *)(unaff_x20 + 0xd) = 4;
          *param_1 = uVar8;
          *(undefined1 *)(param_1 + 9) = 2;
        }
        else {
          (**(code **)(lVar10 + 8))();
          *unaff_x20 = local_d0;
          *(undefined1 *)(unaff_x20 + 0xd) = 3;
          *param_1 = uVar8;
          *(undefined1 *)(param_1 + 9) = 1;
        }
      }
      else {
        if (param_5[3] == 0) {
          lStack_108 = param_5[5];
          local_110 = param_5[4];
          local_f8 = param_5[7];
          local_100 = param_5[6];
          local_f0 = param_5[8];
          uStack_128 = param_5[1];
          local_130 = *param_5;
          local_118 = param_5[3];
          uStack_120 = param_5[2];
        }
        else {
          FUN_100076688(param_5,&local_130);
          FUN_10089ae2c(param_5 + 5,&lStack_108);
          FUN_10000ca28(param_5 + 7,&local_f8);
        }
        lVar3 = local_f0;
        lVar2 = local_f8;
        lVar6 = lStack_108;
        local_e8 = 0;
        if (local_118 == 0) {
          (**(code **)(lVar10 + 8))();
          *unaff_x20 = local_d0;
          *(undefined1 *)(unaff_x20 + 0xd) = 2;
          param_1[1] = 0;
          *param_1 = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
          param_1[8] = 0;
          *(undefined1 *)(param_1 + 9) = 3;
        }
        else {
          uVar1 = (undefined1)local_100;
          FUN_100076508(&local_130,local_158);
          (**(code **)(lVar10 + 8))();
          if ((local_d8 & 1) == 0) {
            FUN_100076508(local_158);
            unaff_x20[5] = param_2;
            unaff_x20[6] = param_3;
            *(undefined1 *)(unaff_x20 + 7) = param_4;
            unaff_x20[8] = lVar6;
            *(undefined1 *)(unaff_x20 + 9) = uVar1;
            unaff_x20[10] = lVar2;
            unaff_x20[0xb] = lVar3;
            unaff_x20[0xc] = local_d0;
            *(undefined1 *)(unaff_x20 + 0xd) = 1;
            param_1[1] = 0;
            *param_1 = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[7] = 0;
            param_1[6] = 0;
            param_1[8] = 0;
            *(undefined1 *)(param_1 + 9) = 0xff;
            _swift_retain(param_2);
            _swift_bridgeObjectRetain(param_3);
          }
          else {
            *unaff_x20 = local_d0;
            *(undefined1 *)(unaff_x20 + 0xd) = 2;
            FUN_100076508(local_158,param_1);
            param_1[5] = lVar6;
            *(undefined1 *)(param_1 + 6) = uVar1;
            param_1[7] = lVar2;
            param_1[8] = lVar3;
            *(undefined1 *)(param_1 + 9) = 0;
          }
        }
      }
      return;
    }
    (**(code **)(lVar10 + 8))(&local_d8,lVar6);
  }
  else if (local_70 == 4) {
    if (((((((lStack_78 != 0 || local_d8 != 0) || (local_80 != 0 || lStack_88 != 0)) ||
           ((local_90 != 0 || lStack_98 != 0) || local_a0 != 0)) ||
          (((lStack_a8 != 0 || local_b0 != 0) || lStack_b8 != 0) || local_c0 != 0)) ||
          (lStack_c8 != 0 || local_d0 != 0)) && (local_d8 == 1)) &&
       (((((local_80 == 0 && lStack_78 == 0) && (lStack_88 == 0 && local_90 == 0)) &&
         ((lStack_98 == 0 && local_a0 == 0) && lStack_a8 == 0)) &&
        (((local_b0 == 0 && lStack_b8 == 0) && local_c0 == 0) && lStack_c8 == 0)) && local_d0 == 0))
    {
      param_1[8] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 9) = 0xff;
      return;
    }
  }
  else {
    (**(code **)(lVar10 + 8))(&local_d8,lVar6);
  }
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000037,0x8000000100db43d0,
             0xdb4470);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b7168);
  (*pcVar4)();
}



/* Address: 0x1008b7168 | FUN_1008b7168 */

void FUN_1008b7168(undefined8 *param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined8 uVar3;
  undefined7 extraout_var;
  long *unaff_x20;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  String SVar7;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ushort local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  byte local_68;
  
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  lVar2 = 0;
  FUN_1008b5148(0,uVar4);
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(&local_d0);
  if (local_68 == 3) {
    local_d8 = local_d0;
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)();
    *unaff_x20 = 2;
    unaff_x20[2] = 0;
    unaff_x20[1] = 0;
    unaff_x20[4] = 0;
    unaff_x20[3] = 0;
    unaff_x20[6] = 0;
    unaff_x20[5] = 0;
    unaff_x20[8] = 0;
    unaff_x20[7] = 0;
    unaff_x20[10] = 0;
    unaff_x20[9] = 0;
    unaff_x20[0xc] = 0;
    unaff_x20[0xb] = 0;
    *(undefined1 *)(unaff_x20 + 0xd) = 4;
    uVar3 = 0xff;
    FUN_1008b6134(0xff,uVar4);
    FUN_1006883a0(0,uVar3);
    FUN_100681318(&local_120);
    if ((local_e0 & 0xff00) == 0xfe00) {
      _swift_release(local_d8);
      OVar1 = Swift::Optional::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
                (&local_120,CONCAT71(extraout_var,OVar1.value));
      (*pcVar6)();
      *unaff_x20 = 1;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      unaff_x20[6] = 0;
      unaff_x20[5] = 0;
      unaff_x20[8] = 0;
      unaff_x20[7] = 0;
      unaff_x20[10] = 0;
      unaff_x20[9] = 0;
      unaff_x20[0xc] = 0;
      unaff_x20[0xb] = 0;
      *(undefined1 *)(unaff_x20 + 0xd) = 4;
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[7] = 0;
      param_1[6] = 0;
      *(undefined2 *)(param_1 + 8) = 0xfe00;
    }
    else {
      (*pcVar6)();
      *unaff_x20 = local_d8;
      *(undefined1 *)(unaff_x20 + 0xd) = 3;
      if (local_e0 >> 8 < 0xff) {
        param_1[1] = uStack_118;
        *param_1 = local_120;
        param_1[3] = uStack_108;
        param_1[2] = uStack_110;
        param_1[5] = uStack_f8;
        param_1[4] = local_100;
        param_1[7] = uStack_e8;
        param_1[6] = uStack_f0;
        *(ushort *)(param_1 + 8) = local_e0;
      }
      else {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[7] = 0;
        param_1[6] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        *(undefined2 *)(param_1 + 8) = 0xfd00;
      }
    }
    return;
  }
  if (local_68 < 3) {
    (**(code **)(lVar5 + 8))(&local_d0,lVar2);
  }
  else if ((((((lStack_70 != 0 || local_d0 != 0) || (local_78 != 0 || lStack_80 != 0)) ||
             ((local_88 != 0 || lStack_90 != 0) || local_98 != 0)) ||
            (((lStack_a0 != 0 || local_a8 != 0) || lStack_b0 != 0) || local_b8 != 0)) ||
            (lStack_c0 != 0 || local_c8 != 0)) &&
          ((local_d0 != 1 ||
           (((((local_78 != 0 || lStack_70 != 0) || (lStack_80 != 0 || local_88 != 0)) ||
             ((lStack_90 != 0 || local_98 != 0) || lStack_a0 != 0)) ||
            (((local_a8 != 0 || lStack_b0 != 0) || local_b8 != 0) || lStack_c0 != 0)) ||
            local_c8 != 0)))) {
    SVar7.bridgeObject = (void *)0x2;
    SVar7.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000037,0x8000000100db43d0,
               0xdb4470);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008b7418);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008b7348);
  (*pcVar6)();
}



/* Address: 0x1008b7418 | FUN_1008b7418 */

void FUN_1008b7418(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b7424 | FUN_1008b7424 */

void FUN_1008b7424(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b7430 | FUN_1008b7430 */

void FUN_1008b7430(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  local_40 = &DAT_100c82500;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c82500;
    local_28 = local_38;
    _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_40);
  }
  return;
}



/* Address: 0x1008b74a8 | FUN_1008b74a8 */

void FUN_1008b74a8(ulong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x41);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      FUN_100004594();
    }
    else {
      if (bVar1 != 1) {
        FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
        return;
      }
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        _swift_release(param_1[5] & 0x3fffffffffffffff);
        return;
      }
    }
  }
  return;
}



/* Address: 0x1008b7548 | FUN_1008b7548 */

ulong * FUN_1008b7548(ulong *param_1,ulong *param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  bVar2 = *(byte *)((long)param_2 + 0x41);
  if (bVar2 < 3) {
    if (bVar2 == 2) {
      uVar6 = param_2[3];
      param_1[3] = uVar6;
      (*(code *)**(undefined8 **)(uVar6 - 8))();
      *(undefined1 *)((long)param_1 + 0x41) = 2;
    }
    else if (bVar2 == 1) {
      uVar6 = *param_2;
      uVar5 = param_2[1];
      *param_1 = uVar6;
      param_1[1] = uVar5;
      param_1[2] = param_2[2];
      *(int *)(param_1 + 3) = (int)param_2[3];
      *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
      cVar1 = (char)param_2[4];
      _swift_retain(uVar6 & 0x3fffffffffffffff);
      _swift_retain(uVar5);
      if (cVar1 == '\x04') {
        uVar6 = param_2[4];
        uVar7 = param_2[7];
        uVar5 = param_2[6];
        param_1[5] = param_2[5];
        param_1[4] = uVar6;
        param_1[7] = uVar7;
        param_1[6] = uVar5;
        *(char *)(param_1 + 8) = (char)param_2[8];
      }
      else {
        *(char *)(param_1 + 4) = cVar1;
        uVar6 = param_2[5];
        if (((uVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          uVar6 = param_2[5];
          param_1[6] = param_2[6];
          param_1[5] = uVar6;
        }
        else {
          uVar5 = param_2[6];
          param_1[5] = uVar6;
          param_1[6] = uVar5;
          _swift_retain(uVar6 & 0x3fffffffffffffff);
        }
        param_1[7] = param_2[7];
        *(char *)(param_1 + 8) = (char)param_2[8];
      }
      *(undefined1 *)((long)param_1 + 0x41) = 1;
    }
    else {
      uVar6 = *param_2;
      uVar5 = param_2[1];
      uVar7 = param_2[2];
      uVar3 = *(undefined1 *)((long)param_2 + 0x16);
      uVar4 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_100656200(uVar6,uVar5,(ulong)(uint7)param_2[2]);
      *param_1 = uVar6;
      param_1[1] = uVar5;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      *(short *)((long)param_1 + 0x14) = (short)uVar4;
      *(int *)(param_1 + 2) = (int)uVar7;
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    return param_1;
  }
  uVar6 = param_2[4];
  uVar7 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[7] = uVar7;
  param_1[6] = uVar5;
  *(short *)(param_1 + 8) = (short)param_2[8];
  uVar7 = *param_2;
  uVar5 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar5;
  param_1[2] = uVar6;
  return param_1;
}



/* Address: 0x1008b76cc | FUN_1008b76cc */

ulong * FUN_1008b76cc(ulong *param_1,ulong *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined3 uVar4;
  undefined1 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  bVar2 = *(byte *)((long)param_1 + 0x41);
  bVar3 = *(byte *)((long)param_2 + 0x41);
  if (bVar2 < 3) {
    if (2 < bVar3) {
      if (bVar2 == 2) {
        FUN_100004594(param_1);
      }
      else if (bVar2 == 1) {
        _swift_release(*param_1 & 0x3fffffffffffffff);
        _swift_release(param_1[1]);
        if (((char)param_1[4] != '\x04') &&
           (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
          _swift_release(param_1[5] & 0x3fffffffffffffff);
        }
      }
      else {
        FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
      }
LAB_1008b7870:
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      uVar6 = param_2[3];
      uVar7 = param_2[2];
      uVar9 = param_2[5];
      uVar8 = param_2[4];
      uVar11 = param_2[7];
      uVar10 = param_2[6];
      *(short *)(param_1 + 8) = (short)param_2[8];
      param_1[5] = uVar9;
      param_1[4] = uVar8;
      param_1[7] = uVar11;
      param_1[6] = uVar10;
      param_1[3] = uVar6;
      param_1[2] = uVar7;
      return param_1;
    }
    if (param_1 == param_2) {
      return param_1;
    }
    FUN_1008b78fc(param_1);
    bVar3 = *(byte *)((long)param_2 + 0x41);
  }
  else if (2 < bVar3) goto LAB_1008b7870;
  if (bVar3 == 2) {
    uVar7 = param_2[3];
    param_1[3] = uVar7;
    (*(code *)**(undefined8 **)(uVar7 - 8))(param_1,param_2);
    uVar5 = 2;
  }
  else {
    if (bVar3 != 1) {
      uVar7 = *param_2;
      uVar6 = param_2[1];
      uVar8 = param_2[2];
      uVar5 = *(undefined1 *)((long)param_2 + 0x16);
      uVar4 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
      *param_1 = uVar7;
      param_1[1] = uVar6;
      *(undefined1 *)((long)param_1 + 0x16) = uVar5;
      *(short *)((long)param_1 + 0x14) = (short)uVar4;
      *(int *)(param_1 + 2) = (int)uVar8;
      *(undefined1 *)((long)param_1 + 0x41) = 0;
      return param_1;
    }
    uVar6 = *param_2;
    *param_1 = uVar6;
    uVar8 = param_2[1];
    param_1[1] = uVar8;
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
    uVar7 = param_2[3];
    *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
    *(int *)(param_1 + 3) = (int)uVar7;
    cVar1 = (char)param_2[4];
    _swift_retain(uVar6 & 0x3fffffffffffffff);
    _swift_retain(uVar8);
    if (cVar1 == '\x04') {
      uVar6 = param_2[5];
      uVar7 = param_2[4];
      uVar9 = param_2[7];
      uVar8 = param_2[6];
      *(char *)(param_1 + 8) = (char)param_2[8];
      param_1[5] = uVar6;
      param_1[4] = uVar7;
      param_1[7] = uVar9;
      param_1[6] = uVar8;
    }
    else {
      *(char *)(param_1 + 4) = cVar1;
      uVar7 = param_2[5];
      if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        uVar7 = param_2[5];
        param_1[6] = param_2[6];
        param_1[5] = uVar7;
      }
      else {
        param_1[5] = uVar7;
        param_1[6] = param_2[6];
        _swift_retain(uVar7 & 0x3fffffffffffffff);
      }
      uVar7 = param_2[7];
      *(char *)(param_1 + 8) = (char)param_2[8];
      param_1[7] = uVar7;
    }
    uVar5 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x41) = uVar5;
  return param_1;
}



/* Address: 0x1008b78fc | FUN_1008b78fc */

undefined8 FUN_1008b78fc(undefined8 param_1)

{
  FUN_10065d044();
  return param_1;
}



/* Address: 0x1008b7930 | FUN_1008b7930 */

void FUN_1008b7930(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x1008b7954 | FUN_1008b7954 */

void FUN_1008b7954(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x41);
  if (bVar1 < 3) {
    if (*(byte *)((long)param_2 + 0x41) < 3) {
      if (param_1 == param_2) {
        return;
      }
      FUN_1008b78fc();
    }
    else if (bVar1 == 2) {
      FUN_100004594();
    }
    else if (bVar1 == 1) {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        _swift_release(param_1[5] & 0x3fffffffffffffff);
      }
    }
    else {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
    }
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  *(short *)(param_1 + 8) = (short)param_2[8];
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1008b7a3c | FUN_1008b7a3c */

uint FUN_1008b7a3c(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar2 = *(byte *)((long)param_1 + 0x41) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x41) < 3) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x1008b7a84 | FUN_1008b7a84 */

void FUN_1008b7a84(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    if (param_2 != 0) {
      *(byte *)((long)param_1 + 0x41) = ~(byte)param_2;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfd;
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x42) = 1;
    }
  }
  return;
}



/* Address: 0x1008b7ad4 | FUN_1008b7ad4 */

int FUN_1008b7ad4(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 0x41)) {
    iVar1 = (*(byte *)(param_1 + 0x41) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1008b7ae8 | FUN_1008b7ae8 */

void FUN_1008b7ae8(ulong *param_1,uint param_2)

{
  if (param_2 < 0xfe) {
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x41) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
  }
  return;
}



/* Address: 0x1008b7b24 | FUN_1008b7b24 */

void FUN_1008b7b24(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b7b30 | FUN_1008b7b30 */

void FUN_1008b7b30(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008b7b3c | FUN_1008b7b3c */

void FUN_1008b7b3c(long param_1)

{
  FUN_100004594();
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_release(*(undefined8 *)(param_1 + 0x60));
  return;
}


