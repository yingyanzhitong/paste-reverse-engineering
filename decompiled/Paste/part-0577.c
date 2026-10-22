/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100663e84 | FUN_100663e84 */

void FUN_100663e84(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x21;
  
  lVar3 = 1;
  FUN_100663a74();
  if (unaff_x21 == 0) {
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = lVar3;
    }
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = param_4;
    }
    *param_1 = param_2;
    param_1[1] = lVar1;
    *(int *)(param_1 + 2) = (int)uVar2;
    *(char *)((long)param_1 + 0x16) = (char)((ulong)uVar2 >> 0x30);
    *(short *)((long)param_1 + 0x14) = (short)((ulong)uVar2 >> 0x20);
  }
  return;
}



/* Address: 0x100663ed0 | FUN_100663ed0 */

void FUN_100663ed0(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *unaff_x20;
  undefined8 uVar4;
  
  uVar1 = unaff_x20[0x18];
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *param_1 = *unaff_x20;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  param_1[0x18] = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x100663ef8 | FUN_100663ef8 */

void FUN_100663ef8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_release(unaff_x20[2]);
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[2] = uVar2;
  unaff_x20[4] = param_1[4];
  return;
}



/* Address: 0x100663f2c | FUN_100663f2c */

bool FUN_100663f2c(uint param_1)

{
  return (param_1 & 0xff) - 10 < 4;
}



/* Address: 0x100663f40 | FUN_100663f40 */

void FUN_100663f40(long param_1,ulong param_2,ulong param_3,uint param_4)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  byte *unaff_x20;
  long unaff_x21;
  
  lVar3 = param_1;
  uVar4 = param_2;
  FUN_100663a74();
  if (unaff_x21 == 0) {
    while( true ) {
      if (lVar3 == 0) {
        return;
      }
      if ((*unaff_x20 & 1) != 0) {
        return;
      }
      if ((param_4 & 0xff) == 1) break;
      if ((param_3 >> 0x38 != 10) || ((int)(uVar4 >> 0x20) != (int)uVar4)) {
        bVar2 = param_3 >> 0x38 == 0xd;
        goto LAB_100663fdc;
      }
      bVar1 = unaff_x20[0x28];
      unaff_x20[0x28] = 0;
      if (bVar1 != 1) {
        return;
      }
      _swift_release();
      uVar4 = (ulong)((uint)param_2 & 1);
      lVar3 = param_1;
      FUN_100663a74();
    }
    bVar2 = false;
LAB_100663fdc:
    unaff_x20[0x28] = bVar2;
  }
  return;
}



/* Address: 0x100663ff4 | FUN_100663ff4 */

ulong FUN_100663ff4(ulong param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x21;
  
  FUN_100663f40(param_1,0);
  if (unaff_x21 != 0) {
    param_1 = param_3 & 0xffffffffffffff;
  }
  return param_1;
}



/* Address: 0x100664020 | FUN_100664020 */

ulong FUN_100664020(ulong param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x21;
  
  FUN_100663f40(param_1,1);
  if (unaff_x21 != 0) {
    param_1 = param_3 & 0xffffffffffffff;
  }
  return param_1;
}



/* Address: 0x10066404c | FUN_10066404c */

void FUN_10066404c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x21;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined4)param_4;
  uVar1 = 0;
  FUN_100663f40();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(char *)((long)param_1 + 0x16) = (char)((uint)uVar3 >> 0x10);
    *(short *)((long)param_1 + 0x14) = (short)uVar3;
  }
  return;
}



/* Address: 0x10066408c | FUN_10066408c */

void FUN_10066408c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x21;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined4)param_4;
  uVar1 = 1;
  FUN_100663f40();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
    *(undefined4 *)(param_1 + 2) = uVar2;
    *(char *)((long)param_1 + 0x16) = (char)((uint)uVar3 >> 0x10);
    *(short *)((long)param_1 + 0x14) = (short)uVar3;
  }
  return;
}



/* Address: 0x1006640cc | FUN_1006640cc */

void FUN_1006640cc(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *unaff_x20;
  undefined8 uVar5;
  
  uVar1 = unaff_x20[0x18];
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = unaff_x20[0x28];
  *param_1 = *unaff_x20;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar5;
  param_1[0x18] = uVar1;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  param_1[0x28] = uVar2;
  _swift_retain(uVar3);
  return;
}



/* Address: 0x1006640fc | FUN_1006640fc */

void FUN_1006640fc(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  bVar1 = *param_1;
  bVar2 = param_1[0x18];
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  bVar3 = param_1[0x28];
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  *unaff_x20 = bVar1 & 1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + 8) = uVar5;
  unaff_x20[0x18] = bVar2 & 1;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar4;
  unaff_x20[0x28] = bVar3 & 1;
  return;
}



/* Address: 0x100664164 | FUN_100664164 */

undefined1  [16] FUN_100664164(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  char *unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  undefined1 auVar4 [16];
  String SVar5;
  tuple2_conflict1 tVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = 0;
  FUN_100663f40();
  if (unaff_x21 == 0) {
    if (param_1 == 0) {
      unaff_x19 = (char *)0x0;
      unaff_x20 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)0x0;
      _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
      lVar3 = *(long *)(param_1 + 0x18);
      _swift_retain(param_1);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = (char *)(ulong)(uint)((int)(uVar1 >> 0x20) - (int)uVar1);
      tVar6 = Swift::String::_fromUTF8Repairing
                        ((undefined *)
                         (lVar3 + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff) +
                         (uVar1 & 0xffffffff)),SVar5);
      unaff_x20 = tVar6.result.bridgeObject;
      unaff_x19 = tVar6.result.str;
      _swift_release_n(param_1,2,tVar6._16_8_);
    }
  }
  auVar4._8_8_ = unaff_x20;
  auVar4._0_8_ = unaff_x19;
  return auVar4;
}



/* Address: 0x100664230 | FUN_100664230 */

void FUN_100664230(void)

{
  FUN_1006643ac();
  return;
}



/* Address: 0x100664244 | FUN_100664244 */

void FUN_100664244(ulong *param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  
  uVar2 = 0;
  FUN_100663f40();
  if (unaff_x21 == 0) {
    if (param_2 == 0) {
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      uVar3 = (ulong)(uint)((int)(uVar2 >> 0x20) - (int)uVar2);
      _swift_retain();
      FUN_10060b750();
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006642f4);
        (*pcVar1)();
      }
      _swift_release_n(param_2,2);
    }
    *param_1 = uVar3;
    param_1[1] = uVar2;
  }
  return;
}



/* Address: 0x1006642f4 | FUN_1006642f4 */

void FUN_1006642f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_1006643ac();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10066431c | FUN_10066431c */

uint FUN_10066431c(void)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_58 [24];
  
  uVar1 = *(uint *)(unaff_x20 + 1);
  if (*(uint *)((long)unaff_x20 + 0xc) == uVar1) {
    uVar6 = 0;
    iVar5 = 1;
  }
  else {
    bVar2 = *(byte *)((long)unaff_x20 + 0x16);
    uVar3 = *(ushort *)((long)unaff_x20 + 0x14);
    lVar7 = *unaff_x20;
    _swift_beginAccess(lVar7 + 0x18,auStack_58,0,0);
    if (0xfffffffe < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006643ac);
      (*pcVar4)();
    }
    iVar5 = 0;
    uVar6 = (uint)*(byte *)(*(long *)(lVar7 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 +
                           (ulong)uVar1);
    *(uint *)(unaff_x20 + 1) = uVar1 + 1;
  }
  return uVar6 | iVar5 << 8;
}



/* Address: 0x1006643ac | FUN_1006643ac */

undefined1  [16] FUN_1006643ac(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  char *unaff_x19;
  void *unaff_x20;
  long unaff_x21;
  undefined1 auVar4 [16];
  String SVar5;
  tuple2_conflict1 tVar6;
  undefined1 auStack_58 [24];
  
  uVar1 = 1;
  FUN_100663f40();
  if (unaff_x21 == 0) {
    if (param_1 == 0) {
      unaff_x19 = (char *)0x0;
      unaff_x20 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)0x0;
      _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
      lVar3 = *(long *)(param_1 + 0x18);
      _swift_retain(param_1);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = (char *)(ulong)(uint)((int)(uVar1 >> 0x20) - (int)uVar1);
      tVar6 = Swift::String::_fromUTF8Repairing
                        ((undefined *)
                         (lVar3 + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff) +
                         (uVar1 & 0xffffffff)),SVar5);
      unaff_x20 = tVar6.result.bridgeObject;
      unaff_x19 = tVar6.result.str;
      _swift_release_n(param_1,2,tVar6._16_8_);
    }
  }
  auVar4._8_8_ = unaff_x20;
  auVar4._0_8_ = unaff_x19;
  return auVar4;
}



/* Address: 0x100664478 | FUN_100664478 */

undefined1 * FUN_100664478(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006644c0 | FUN_1006644c0 */

undefined1 * FUN_1006644c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



/* Address: 0x100664520 | FUN_100664520 */

undefined1 * FUN_100664520(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_release(uVar1);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



/* Address: 0x10066456c | FUN_10066456c */

undefined1  [16] FUN_10066456c(void)

{
  return ZEXT816(0x100ef2378);
}



/* Address: 0x10066457c | thunk_FUN_1006645a0 */

void thunk_FUN_1006645a0(void)

{
  FUN_1006645a0();
  return;
}



/* Address: 0x100664580 | thunk_FUN_1006645f0 */

void thunk_FUN_1006645f0(void)

{
  FUN_1006645f0();
  return;
}



/* Address: 0x100664584 | thunk_FUN_100664658 */

void thunk_FUN_100664658(void)

{
  FUN_100664658();
  return;
}



/* Address: 0x100664588 | thunk_FUN_1004dd8d8 */

int thunk_FUN_1004dd8d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10066458c | thunk_FUN_1004dd920 */

void thunk_FUN_1004dd920(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100664590 | FUN_100664590 */

undefined1  [16] FUN_100664590(void)

{
  return ZEXT816(0x100ef2400);
}



/* Address: 0x1006645a0 | FUN_1006645a0 */

undefined1 * FUN_1006645a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006645f0 | FUN_1006645f0 */

undefined1 * FUN_1006645f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Address: 0x100664658 | FUN_100664658 */

undefined1 * FUN_100664658(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_release(uVar1);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x28] = param_2[0x28];
  return param_1;
}



/* Address: 0x1006646ac | FUN_1006646ac */

undefined1  [16] FUN_1006646ac(void)

{
  return ZEXT816(0x100ef2480);
}



/* Address: 0x1006646bc | thunk_FUN_1004dd920 */

void thunk_FUN_1004dd920(void)

{
  thunk_FUN_1004dd920();
  return;
}



/* Address: 0x1006646c0 | thunk_FUN_1006645a0 */

void thunk_FUN_1006645a0(void)

{
  thunk_FUN_1006645a0();
  return;
}



/* Address: 0x1006646c4 | thunk_FUN_1006645f0 */

void thunk_FUN_1006645f0(void)

{
  thunk_FUN_1006645f0();
  return;
}



/* Address: 0x1006646c8 | thunk_FUN_100664658 */

void thunk_FUN_100664658(void)

{
  thunk_FUN_100664658();
  return;
}



/* Address: 0x1006646cc | thunk_FUN_1004dd8d8 */

void thunk_FUN_1004dd8d8(void)

{
  thunk_FUN_1004dd8d8();
  return;
}



/* Address: 0x1006646d0 | thunk_FUN_100415740 */

void thunk_FUN_100415740(void)

{
  FUN_100415740();
  return;
}



/* Address: 0x1006646d4 | FUN_1006646d4 */

void FUN_1006646d4(long param_1)

{
  code *pcVar1;
  
  if (0 < param_1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006646e4);
  (*pcVar1)();
}



/* Address: 0x1006646e4 | FUN_1006646e4 */

ulong FUN_1006646e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006647bc);
    (*pcVar1)();
  }
  if (param_5 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    param_5 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (param_5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006647c0);
      (*pcVar1)();
    }
    FUN_100613fa8(param_5,param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_5 + 0x10,auStack_58,0,0);
  }
  return param_5;
}



/* Address: 0x1006647d8 | FUN_1006647d8 */

ulong FUN_1006647d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar2 = *unaff_x20;
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006648ac);
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84,param_2,param_3,param_4);
    }
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006648b0);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_1);
    _swift_beginAccess(uVar2 + 0x10,auStack_58,0,0);
  }
  return uVar2;
}



/* Address: 0x1006648c8 | FUN_1006648c8 */

undefined1  [16] FUN_1006648c8(void)

{
  ulong *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *unaff_x20;
  auVar1._8_8_ = 0;
  return auVar1;
}



/* Address: 0x1006648d4 | FUN_1006648d4 */

void FUN_1006648d4(undefined8 *param_1)

{
  param_1[1] = 0x10000;
  *param_1 = 0x40;
  param_1[3] = 0x800;
  param_1[2] = 0x800;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x1006648f0 | FUN_1006648f0 */

void FUN_1006648f0(undefined8 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_100664ad0(&local_48);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x100664930 | FUN_100664930 */

ulong FUN_100664930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100664a04);
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84,param_2,param_3,param_4);
    }
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100664a08);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_1);
    _swift_beginAccess(uVar2 + 0x10,auStack_58,0,0);
  }
  return uVar2;
}



/* Address: 0x100664a20 | FUN_100664a20 */

undefined8 FUN_100664a20(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  uVar3 = unaff_x20[3];
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100664ab8);
    (*pcVar2)();
  }
  if ((long)uVar3 < *unaff_x20) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100664abc);
    (*pcVar2)();
  }
  if (unaff_x20[1] < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100664ac0);
    (*pcVar2)();
  }
  lVar4 = (long)uVar3 >> 1;
  uVar1 = uVar3;
  if (0 < (long)(uVar3 * 2)) {
    uVar1 = uVar3 * 2;
  }
  if (lVar4 < param_1 || lVar4 < *unaff_x20) {
    if ((uVar3 == uVar1 || param_1 < (long)uVar3) || unaff_x20[1] < (long)uVar1) {
      *(undefined1 *)(unaff_x20 + 4) = 0;
      return 0;
    }
    unaff_x20[3] = uVar1;
    *(undefined1 *)(unaff_x20 + 4) = 0;
    return 1;
  }
  if ((char)unaff_x20[4] == '\x01') {
    unaff_x20[3] = lVar4;
    *(undefined1 *)(unaff_x20 + 4) = 0;
    return 0;
  }
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return 0;
}



/* Address: 0x100664ac0 | FUN_100664ac0 */

undefined1  [16] FUN_100664ac0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(ulong *)(unaff_x20 + 0x18);
  auVar1._8_8_ = 0;
  return auVar1;
}



/* Address: 0x100664acc | thunk_FUN_100664a20 */

undefined8 thunk_FUN_100664a20(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  uVar3 = unaff_x20[3];
  if ((uVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100664ab8);
    (*pcVar2)();
  }
  if ((long)uVar3 < *unaff_x20) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100664abc);
    (*pcVar2)();
  }
  if (unaff_x20[1] < (long)uVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100664ac0);
    (*pcVar2)();
  }
  lVar4 = (long)uVar3 >> 1;
  uVar1 = uVar3;
  if (0 < (long)(uVar3 * 2)) {
    uVar1 = uVar3 * 2;
  }
  if (lVar4 < param_1 || lVar4 < *unaff_x20) {
    if ((uVar3 == uVar1 || param_1 < (long)uVar3) || unaff_x20[1] < (long)uVar1) {
      *(undefined1 *)(unaff_x20 + 4) = 0;
      return 0;
    }
    unaff_x20[3] = uVar1;
    *(undefined1 *)(unaff_x20 + 4) = 0;
    return 1;
  }
  if ((char)unaff_x20[4] == '\x01') {
    unaff_x20[3] = lVar4;
    *(undefined1 *)(unaff_x20 + 4) = 0;
    return 0;
  }
  *(undefined1 *)(unaff_x20 + 4) = 1;
  return 0;
}



/* Address: 0x100664ad0 | FUN_100664ad0 */

void FUN_100664ad0(long *param_1,ulong param_2,long param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (((-1 < (long)param_2) && ((long)param_2 <= param_3)) && (param_3 <= param_4)) {
    uVar2 = 0x40000000;
    if ((0x40000000 < param_2) || (lVar3 = 0, uVar2 = param_2, param_2 != 0)) {
      lVar3 = 1L << ((LZCOUNT(uVar2) ^ 0x3fU) & 0x3f);
    }
    lVar4 = 0x40000000;
    if ((param_3 < 0x40000001) && (lVar4 = param_3, param_3 == 0)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 1L << ((LZCOUNT(lVar4) ^ 0x3fU) & 0x3f);
    }
    lVar5 = 0x40000000;
    if ((param_4 < 0x40000001) && (lVar5 = param_4, param_4 == 0)) {
      lVar6 = 1;
    }
    else {
      if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100664b88);
        (*pcVar1)();
      }
      lVar6 = 1L << (-LZCOUNT(lVar5 + -1) & 0x3fU);
      if (LZCOUNT(lVar5 + -1) == 0) {
        lVar6 = 0;
      }
    }
    *param_1 = lVar3;
    param_1[1] = lVar6;
    param_1[2] = lVar4;
    param_1[3] = lVar4;
    *(undefined1 *)(param_1 + 4) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100664b84);
  (*pcVar1)();
}



/* Address: 0x100664b88 | FUN_100664b88 */

undefined1  [16] FUN_100664b88(void)

{
  return ZEXT816(0x100ef2520);
}



/* Address: 0x100664b98 | FUN_100664b98 */

int FUN_100664b98(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 8)) {
    uVar1 = *(byte *)(param_1 + 8) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100664bec | FUN_100664bec */

void FUN_100664bec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 4) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x100664c34 | FUN_100664c34 */

undefined1  [16] FUN_100664c34(void)

{
  return ZEXT816(0x100ef25a0);
}



/* Address: 0x100664c44 | FUN_100664c44 */

long * FUN_100664c44(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar2 = *unaff_x20;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x70));
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = param_3;
  return unaff_x20;
}



/* Address: 0x100664cd0 | FUN_100664cd0 */

/* WARNING: Removing unreachable block (ram,0x000100664e0c) */

uint FUN_100664cd0(undefined8 param_1,char param_2,uint param_3)

{
  long *plVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  uint extraout_w8;
  uint uVar4;
  uint extraout_w8_00;
  ulong uVar5;
  long *unaff_x20;
  long unaff_x21;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_e0 [8];
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [16];
  char local_90;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar6 = *unaff_x20;
  local_c8 = *(undefined8 *)(lVar6 + 0x50);
  lVar7 = *(long *)(lVar6 + 0x58);
  lVar3 = 0xff;
  local_c0 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(lVar7 + 8),local_c8,0x100cb8688,
             &TargetProtocolRequirement_100cb8690);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lStack_d0 = CONCAT71(extraout_var,OVar2.value);
  local_d8 = *(long *)(lStack_d0 + -8);
  uVar5 = *(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_e0 + -uVar5;
  lVar9 = (long)puVar10 - uVar5;
  if (param_2 == '\x01') {
    plVar1 = (long *)((long)unaff_x20 + *(long *)(lVar6 + 0x70));
    _swift_beginAccess(plVar1,auStack_b8,0,0);
    lVar6 = *plVar1;
    if (lVar6 == 0) {
      if (DAT_100fd6f38 != -1) {
        _swift_once(&DAT_100fd6f38,FUN_100611c84);
      }
      local_78 = DAT_101057bd0;
      local_70 = DAT_101057bd8;
      local_68 = DAT_101057be0;
      local_64 = DAT_101057be4;
      local_62 = DAT_101057be6;
      _swift_retain();
      lVar6 = 0;
    }
    else {
      local_70 = plVar1[1];
      if ((int)((ulong)local_70 >> 0x20) != (int)local_70) {
        lVar6 = *unaff_x20;
        goto LAB_100664da8;
      }
      local_62 = *(undefined1 *)((long)plVar1 + 0x16);
      local_64 = *(undefined2 *)((long)plVar1 + 0x14);
      local_68 = (undefined4)plVar1[2];
      local_78 = lVar6;
    }
    _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),auStack_a0,0x21,0);
    pcVar8 = *(code **)(lVar7 + 0x18);
    _swift_retain(lVar6);
    (*pcVar8)(lVar9,&local_78,param_3 & 1,local_c8,lVar7);
    _swift_endAccess(auStack_a0);
    _swift_release(local_78);
    uVar4 = extraout_w8_00;
    if (unaff_x21 == 0) {
      (**(code **)(local_d8 + 0x20))(local_c0,lVar9,lStack_d0);
      uVar4 = 1;
    }
  }
  else {
LAB_100664da8:
    lVar7 = *(long *)(lVar6 + 0x70);
    _swift_beginAccess((long)unaff_x20 + lVar7,&local_78,0,0);
    if (*(long *)((long)unaff_x20 + lVar7) == 0) {
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(local_c0,1,1,lVar3);
    }
    else {
      local_90 = param_2;
      FUN_1006655dc(puVar10,FUN_100665de4,auStack_a0);
      uVar4 = extraout_w8;
      if (unaff_x21 != 0) goto LAB_100664f18;
      FUN_100665b64();
      (**(code **)(local_d8 + 0x20))(local_c0,puVar10,lStack_d0);
    }
    uVar4 = 0;
  }
LAB_100664f18:
  return uVar4 & 1;
}



/* Address: 0x100664f8c | FUN_100664f8c */

void FUN_100664f8c(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *unaff_x20;
  undefined1 auStack_78 [24];
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(plVar1,auStack_48,1,0);
  local_50 = (undefined4)param_3;
  local_4c = (undefined2)((ulong)param_3 >> 0x20);
  local_4a = (undefined1)((ulong)param_3 >> 0x30);
  if ((*plVar1 == 0) || (*(int *)((long)plVar1 + 0xc) == (int)plVar1[1])) {
    *plVar1 = param_1;
    plVar1[1] = param_2;
    *(undefined4 *)(plVar1 + 2) = local_50;
    *(undefined1 *)((long)plVar1 + 0x16) = local_4a;
    *(undefined2 *)((long)plVar1 + 0x14) = local_4c;
    _swift_release();
    _swift_retain(param_1);
  }
  else {
    local_58 = (undefined4)param_2;
    uStack_54 = (undefined4)((ulong)param_2 >> 0x20);
    local_60 = param_1;
    _swift_beginAccess(plVar1,auStack_78,0x21,0);
    _swift_retain(param_1);
    FUN_10060c3b0(&local_60);
    _swift_endAccess(auStack_78);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100665070 | FUN_100665070 */

void FUN_100665070(undefined8 param_1,undefined8 param_2)

{
  FUN_1006661e8(param_1,param_2,0);
  return;
}



/* Address: 0x100665088 | FUN_100665088 */

void FUN_100665088(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_c0;
  long local_b8;
  undefined1 auStack_a8 [72];
  
  local_c0 = *(undefined8 *)(param_4 + 8);
  lVar3 = 0xff;
  local_b8 = param_1;
  _swift_getAssociatedTypeWitness();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar9 = (long)&local_c0 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar3 + -8);
  lVar7 = lVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_4 + 0x10))(lVar9,param_2,param_3,param_4);
  lVar6 = local_b8;
  uVar1 = local_c0;
  if (unaff_x21 == 0) {
    lVar4 = lVar9;
    (**(code **)(lVar8 + 0x30))(lVar9,1,lVar3);
    if ((int)lVar4 == 1) {
      (**(code **)(lVar5 + 8))(lVar9,CONCAT71(extraout_var,OVar2.value));
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar7,lVar9,lVar3);
      FUN_100637bc4(auStack_a8,lVar7,param_3,uVar1);
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 != 0) {
        _swift_retain(lVar6);
        FUN_10062b37c(auStack_a8);
        _swift_release(lVar6);
      }
      FUN_1005e70f4(auStack_a8);
      (**(code **)(lVar8 + 8))(lVar7,lVar3);
    }
  }
  return;
}



/* Address: 0x100665220 | FUN_100665220 */

void FUN_100665220(undefined8 param_1,undefined8 param_2)

{
  FUN_1006661e8(param_1,param_2,1);
  return;
}



/* Address: 0x100665238 | FUN_100665238 */

void FUN_100665238(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  undefined4 local_b4;
  undefined1 auStack_a8 [72];
  
  local_c8 = *(undefined8 *)(param_5 + 8);
  lVar3 = 0xff;
  local_c0 = param_1;
  local_b4 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,local_c8,param_4,0x100cb8688,&TargetProtocolRequirement_100cb8690);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  puVar8 = auStack_d0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar3 + -8);
  lVar9 = (long)puVar8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_5 + 0x18))(puVar8,param_2,local_b4,param_4,param_5);
  lVar6 = local_c0;
  uVar1 = local_c8;
  if (unaff_x21 == 0) {
    puVar4 = puVar8;
    (**(code **)(lVar7 + 0x30))(puVar8,1,lVar3);
    if ((int)puVar4 == 1) {
      (**(code **)(lVar5 + 8))(puVar8,CONCAT71(extraout_var,OVar2.value));
    }
    else {
      (**(code **)(lVar7 + 0x20))(lVar9,puVar8,lVar3);
      FUN_100637bc4(auStack_a8,lVar9,param_4,uVar1);
      lVar6 = *(long *)(lVar6 + 0x10);
      if (lVar6 != 0) {
        _swift_retain(lVar6);
        FUN_10062b37c(auStack_a8);
        _swift_release(lVar6);
      }
      FUN_1005e70f4(auStack_a8);
      (**(code **)(lVar7 + 8))(lVar9,lVar3);
    }
  }
  return;
}



/* Address: 0x1006653d8 | FUN_1006653d8 */

void FUN_1006653d8(undefined8 param_1,undefined8 param_2)

{
  FUN_100666130(param_1,param_2,0);
  return;
}



/* Address: 0x1006653f0 | FUN_1006653f0 */

void FUN_1006653f0(undefined8 param_1,undefined8 param_2)

{
  FUN_100666130(param_1,param_2,1);
  return;
}



/* Address: 0x100665408 | FUN_100665408 */

void FUN_100665408(undefined8 param_1,undefined8 param_2)

{
  FUN_100666000(param_1,param_2,0);
  return;
}



/* Address: 0x100665420 | FUN_100665420 */

void FUN_100665420(undefined8 param_1,undefined8 param_2)

{
  FUN_100666000(param_1,param_2,1);
  return;
}



/* Address: 0x100665438 | FUN_100665438 */

undefined1  [16] FUN_100665438(void)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  return auVar1;
}


