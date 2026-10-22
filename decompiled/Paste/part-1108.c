/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ba2f78 | _TtC6Sentry26SentryReplayNetworkDetails::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryReplayNetworkDetails::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100ba2f4c();
  FUN_100ba224c();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100ba2f84 | FUN_100ba2f84 */

void FUN_100ba2f84(void)

{
  FUN_100ba224c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100ba2fb4 | _TtC6Sentry26SentryReplayNetworkDetails::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryReplayNetworkDetails::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + method + 8));
  FUN_100ba438c(request,0);
  FUN_100ba438c(response);
  return;
}



/* Address: 0x100ba3014 | FUN_100ba3014 */

void FUN_100ba3014(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce880);
  return;
}



/* Address: 0x100ba3020 | FUN_100ba3020 */

void FUN_100ba3020(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba3024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0xe0))();
  return;
}



/* Address: 0x100ba3028 | FUN_100ba3028 */

void FUN_100ba3028(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba3040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xe8))();
  return;
}



/* Address: 0x100ba3044 | FUN_100ba3044 */

void FUN_100ba3044(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xf0))();
  return;
}



/* Address: 0x100ba3060 | FUN_100ba3060 */

void FUN_100ba3060(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba3078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xf8))();
  return;
}



/* Address: 0x100ba307c | FUN_100ba307c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba307c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (lVar1 != 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      FUN_100004594(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0x30);
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Address: 0x100ba30d4 | FUN_100ba30d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100ba30d4(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  lVar2 = param_2[6];
  if (lVar2 == 0) {
    uVar3 = param_2[1];
    uVar5 = param_2[4];
    uVar4 = param_2[3];
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    param_1[4] = uVar5;
    param_1[3] = uVar4;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
  }
  else {
    bVar1 = *(byte *)(param_2 + 5);
    if ((bVar1 & 1) == 0) {
      lVar2 = param_2[4];
      param_1[4] = lVar2;
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 1,param_2 + 1);
      lVar2 = param_2[6];
    }
    else {
      uVar3 = param_2[2];
      param_1[1] = param_2[1];
      param_1[2] = uVar3;
      _swift_bridgeObjectRetain();
    }
    *(byte *)(param_1 + 5) = bVar1;
    param_1[6] = lVar2;
    _swift_bridgeObjectRetain(lVar2);
  }
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100ba318c | FUN_100ba318c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100ba318c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  if (param_1[6] == 0) {
    if (param_2[6] == 0) {
      uVar4 = param_2[2];
      uVar3 = param_2[1];
      uVar6 = param_2[4];
      uVar5 = param_2[3];
      uVar7 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar7;
      param_1[4] = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      param_1[1] = uVar3;
    }
    else {
      bVar1 = *(byte *)(param_2 + 5);
      if ((bVar1 & 1) == 0) {
        lVar2 = param_2[4];
        param_1[4] = lVar2;
        (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 1,param_2 + 1);
      }
      else {
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        _swift_bridgeObjectRetain();
      }
      *(byte *)(param_1 + 5) = bVar1;
      param_1[6] = param_2[6];
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[6] == 0) {
    FUN_100ba3328(param_1 + 1);
    uVar4 = param_2[6];
    uVar3 = param_2[5];
    uVar6 = param_2[4];
    uVar5 = param_2[3];
    uVar7 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = uVar7;
    param_1[4] = uVar6;
    param_1[3] = uVar5;
    param_1[6] = uVar4;
    param_1[5] = uVar3;
  }
  else {
    if (param_1 != param_2) {
      FUN_100ba32fc(param_1 + 1);
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        lVar2 = param_2[4];
        param_1[4] = lVar2;
        (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 1,param_2 + 1);
        *(undefined1 *)(param_1 + 5) = 0;
      }
      else {
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        *(undefined1 *)(param_1 + 5) = 1;
        _swift_bridgeObjectRetain();
      }
    }
    uVar3 = param_1[6];
    param_1[6] = param_2[6];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
  }
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x100ba32fc | FUN_100ba32fc */

undefined8 FUN_100ba32fc(undefined8 param_1)

{
  FUN_100ba36cc(param_1,&DAT_100f393f8);
  return param_1;
}



/* Address: 0x100ba3328 | FUN_100ba3328 */

undefined8 FUN_100ba3328(undefined8 param_1)

{
  FUN_100ba34a0(param_1,&DAT_100f39360);
  return param_1;
}



/* Address: 0x100ba3354 | FUN_100ba3354 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100ba3354(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  lVar1 = param_1[6];
  if (lVar1 != 0) {
    lVar3 = param_2[6];
    if (lVar3 != 0) {
      if (param_1 != param_2) {
        FUN_100ba32fc(param_1 + 1);
        uVar2 = param_2[1];
        param_1[2] = param_2[2];
        param_1[1] = uVar2;
        uVar2 = param_2[3];
        param_1[4] = param_2[4];
        param_1[3] = uVar2;
        *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
        lVar3 = param_2[6];
        lVar1 = param_1[6];
      }
      param_1[6] = lVar3;
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_100ba33e4;
    }
    FUN_100ba3328(param_1 + 1);
  }
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
LAB_100ba33e4:
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100ba3404 | FUN_100ba3404 */

int FUN_100ba3404(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 0xe);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100ba3444 | FUN_100ba3444 */

void FUN_100ba3444(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      param_1[7] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100ba3494 | FUN_100ba3494 */

void FUN_100ba3494(void)

{
  FUN_10063ee28(&DAT_100f392d8);
  return;
}



/* Address: 0x100ba34a0 | FUN_100ba34a0 */

void FUN_100ba34a0(long param_1)

{
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    FUN_100004594(param_1);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100ba34dc | FUN_100ba34dc */

undefined8 * FUN_100ba34dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  
  bVar2 = *(byte *)(param_2 + 4);
  if ((bVar2 & 1) == 0) {
    lVar3 = param_2[3];
    param_1[3] = lVar3;
    (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
  }
  else {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain();
  }
  *(byte *)(param_1 + 4) = bVar2;
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100ba354c | FUN_100ba354c */

undefined8 * FUN_100ba354c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_100ba32fc(param_1);
    if ((*(byte *)(param_2 + 4) & 1) == 0) {
      lVar1 = param_2[3];
      param_1[3] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 4) = 0;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      *(undefined1 *)(param_1 + 4) = 1;
      _swift_bridgeObjectRetain();
    }
  }
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100ba35e0 | FUN_100ba35e0 */

undefined8 * FUN_100ba35e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_100ba32fc(param_1);
    uVar1 = *param_2;
    uVar3 = param_2[3];
    uVar2 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[3] = uVar3;
    param_1[2] = uVar2;
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100ba3634 | FUN_100ba3634 */

int FUN_100ba3634(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 10);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100ba3674 | FUN_100ba3674 */

void FUN_100ba3674(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[5] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100ba36c0 | FUN_100ba36c0 */

void FUN_100ba36c0(void)

{
  FUN_10063ee28(&DAT_100f39360);
  return;
}



/* Address: 0x100ba36cc | FUN_100ba36cc */

void FUN_100ba36cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 8);
  if (1 < *(byte *)(param_1 + 8)) {
    uVar1 = *param_1 + 2;
  }
  if (uVar1 == 1) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    return;
  }
  FUN_100004594();
  return;
}



/* Address: 0x100ba36f4 | FUN_100ba36f4 */

undefined8 * FUN_100ba36f4(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_2 + 8);
  if (1 < *(byte *)(param_2 + 8)) {
    uVar3 = *param_2 + 2;
  }
  if (uVar3 != 1) {
    lVar2 = *(long *)(param_2 + 6);
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain();
  }
  *(bool *)(param_1 + 4) = uVar3 == 1;
  return param_1;
}



/* Address: 0x100ba3764 | FUN_100ba3764 */

int * FUN_100ba3764(int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 8);
    if (1 < *(byte *)(param_1 + 8)) {
      uVar2 = *param_1 + 2;
    }
    if (uVar2 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    }
    else {
      FUN_100004594(param_1);
    }
    uVar2 = (uint)*(byte *)(param_2 + 8);
    if (1 < *(byte *)(param_2 + 8)) {
      uVar2 = *param_2 + 2;
    }
    if (uVar2 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined1 *)(param_1 + 8) = 1;
      _swift_bridgeObjectRetain();
    }
    else {
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 8) = 0;
    }
  }
  return param_1;
}



/* Address: 0x100ba381c | FUN_100ba381c */

int * FUN_100ba381c(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    uVar1 = (uint)*(byte *)(param_1 + 8);
    if (1 < *(byte *)(param_1 + 8)) {
      uVar1 = *param_1 + 2;
    }
    if (uVar1 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
    }
    else {
      FUN_100004594(param_1);
    }
    uVar1 = (uint)*(byte *)(param_2 + 8);
    if (1 < *(byte *)(param_2 + 8)) {
      uVar1 = *param_2 + 2;
    }
    if (uVar1 != 1) {
      uVar2 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
    }
    else {
      uVar2 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar2;
    }
    *(bool *)(param_1 + 8) = uVar1 == 1;
  }
  return param_1;
}



/* Address: 0x100ba38b0 | FUN_100ba38b0 */

int FUN_100ba38b0(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 8)) {
    iVar1 = (*(byte *)(param_1 + 8) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100ba38ec | FUN_100ba38ec */

void FUN_100ba38ec(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 8) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xff;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x100ba3938 | FUN_100ba3938 */

uint FUN_100ba3938(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 8);
  if (1 < *(byte *)(param_1 + 8)) {
    uVar1 = *param_1 + 2;
  }
  return uVar1;
}



/* Address: 0x100ba3954 | FUN_100ba3954 */

void FUN_100ba3954(int *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 2;
    param_2 = 2;
  }
  *(char *)(param_1 + 8) = (char)param_2;
  return;
}



/* Address: 0x100ba3978 | FUN_100ba3978 */

void FUN_100ba3978(void)

{
  FUN_10063ee28(&DAT_100f393f8);
  return;
}



/* Address: 0x100ba3984 | FUN_100ba3984 */

undefined8 FUN_100ba3984(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100b6730c();
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x100ba39c8 | FUN_100ba39c8 */

undefined8 FUN_100ba39c8(undefined8 param_1,undefined8 param_2)

{
  FUN_100ba36f4(param_2,param_1,&DAT_100f393f8);
  return param_2;
}



/* Address: 0x100ba39fc | FUN_100ba39fc */

undefined8 FUN_100ba39fc(undefined8 param_1,undefined8 param_2)

{
  FUN_100ba30d4(param_2,param_1,&DAT_100f392d8);
  return param_2;
}



/* Address: 0x100ba3a30 | FUN_100ba3a30 */

void FUN_100ba3a30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_1010462c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1010462c0;
  FUN_100b6734c(&DAT_1010462c0);
  puVar2 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__BidirectionalCollection_100eacc58;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__BidirectionalCollection_100eacc58,
             puVar1);
  DAT_1010462c8 = puVar2;
  return;
}



/* Address: 0x100ba3a78 | FUN_100ba3a78 */

/* WARNING: Type propagation algorithm not settling */

undefined *
FUN_100ba3a78(long param_1,byte param_2,code *param_3,undefined8 param_4,char *param_5,void *param_6
             )

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  Substring SVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *pvVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long unaff_x21;
  Index IVar15;
  long lVar16;
  Index IVar17;
  Index after;
  undefined *puVar18;
  Character CVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  char *pcVar9;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba3e3c);
    (*pcVar3)();
  }
  puVar4 = &DAT_100f39418;
  _swift_allocObject(&DAT_100f39418,0x18,7);
  plVar14 = (long *)(puVar4 + 0x10);
  *plVar14 = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100f39440;
  _swift_allocObject(&DAT_100f39440,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = 0xf;
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar2 = (uint)((ulong)param_6 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar11 = 0xb;
      if ((uVar2 >> 0x1c & (uint)(((ulong)param_5 & 0x800000000000000) == 0)) == 0) {
        uVar11 = 7;
      }
      pcVar12 = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 << 2;
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      IVar17.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      IVar15.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        SVar20.bridgeObject = param_6;
        SVar20.str = param_5;
        CVar19 = Swift::String::get_subscript(after,SVar20);
        uVar11 = 0;
        (*param_3)();
        if (unaff_x21 != 0) {
          _swift_release(puVar4);
          _swift_release(puVar5);
          _swift_bridgeObjectRelease(CVar19.bridgeObject);
          _swift_bridgeObjectRelease(param_6);
          return puVar18;
        }
        _swift_bridgeObjectRelease(CVar19.bridgeObject);
        if ((uVar11 & 1) == 0) {
          SVar23.bridgeObject = param_6;
          SVar23.str = param_5;
          after = Swift::String::index(after,SVar23);
        }
        else {
          bVar1 = (ulong)IVar17.cmsgPointer.unknown >> 0xe ==
                  (ulong)after.cmsgPointer.unknown >> 0xe & param_2;
          if (bVar1 != 1) {
            if ((ulong)after.cmsgPointer.unknown >> 0xe < (ulong)IVar17.cmsgPointer.unknown >> 0xe)
            {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba3e38);
              (*pcVar3)();
            }
            SVar21.bridgeObject = param_5;
            SVar21.str = (char *)after.cmsgPointer.unknown;
            IVar15.cmsgPointer.unknown = after.cmsgPointer.unknown;
            pcVar9 = param_5;
            pvVar10 = param_6;
            SVar6 = Swift::String::get_subscript((Range<Index>)IVar17.cmsgPointer.unknown,SVar21);
            puVar7 = puVar18;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar18;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_100b6e978(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
            }
            uVar11 = *(ulong *)(puVar8 + 0x10);
            puVar18 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_100b6e978(puVar18,uVar11 + 1,1,puVar8);
            }
            *(ulong *)(puVar18 + 0x10) = uVar11 + 1;
            *(undefined **)(puVar18 + uVar11 * 0x20 + 0x20) = SVar6.unknown;
            *(UnsafeMutablePointer *)(puVar18 + uVar11 * 0x20 + 0x28) = IVar15.cmsgPointer.unknown;
            *(char **)(puVar18 + uVar11 * 0x20 + 0x30) = pcVar9;
            *(void **)(puVar18 + uVar11 * 0x20 + 0x38) = pvVar10;
            *plVar14 = (long)puVar18;
          }
          SVar22.bridgeObject = param_6;
          SVar22.str = param_5;
          IVar15 = Swift::String::index(after,SVar22);
          ((UnsafeMutablePointer *)(puVar5 + 0x10))->unknown =
               (undefined *)IVar15.cmsgPointer.unknown;
          IVar17 = IVar15;
          after = IVar15;
          if ((bVar1 == 0) && (*(long *)(puVar18 + 0x10) == param_1)) break;
        }
      } while (uVar13 != (ulong)after.cmsgPointer.unknown >> 0xe);
      if (((ulong)IVar17.cmsgPointer.unknown >> 0xe == uVar13) && ((param_2 & 1) != 0)) {
        _swift_bridgeObjectRelease(param_6);
      }
      else {
        if (uVar13 < (ulong)IVar17.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba3e40);
          (*pcVar3)();
        }
        SVar24.bridgeObject = param_5;
        SVar24.str = pcVar12;
        pvVar10 = param_6;
        SVar6 = Swift::String::get_subscript((Range<Index>)IVar15.cmsgPointer.unknown,SVar24);
        _swift_bridgeObjectRelease(param_6);
        FUN_100b93980();
        lVar16 = *(long *)(*plVar14 + 0x10);
        FUN_100b93be4(lVar16);
        puVar18 = (undefined *)*plVar14;
        *(long *)(puVar18 + 0x10) = lVar16 + 1;
        *(undefined **)(puVar18 + lVar16 * 0x20 + 0x20) = SVar6.unknown;
        *(char **)(puVar18 + lVar16 * 0x20 + 0x28) = pcVar12;
        *(char **)(puVar18 + lVar16 * 0x20 + 0x30) = param_5;
        *(void **)(puVar18 + lVar16 * 0x20 + 0x38) = pvVar10;
        *plVar14 = (long)puVar18;
      }
      _swift_bridgeObjectRetain(puVar18);
      _swift_release(puVar4);
      goto LAB_100ba3e08;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  uVar11 = 0xb;
  if ((uVar2 >> 0x1c & (uint)(((ulong)param_5 & 0x800000000000000) == 0)) == 0) {
    uVar11 = 7;
  }
  FUN_100ba3e40(uVar11 | uVar13 << 0x10,puVar5,param_2 & 1,puVar4,param_5,param_6);
  _swift_bridgeObjectRelease(param_6);
  puVar18 = *(undefined **)(puVar4 + 0x10);
  _swift_bridgeObjectRetain(puVar18);
  _swift_release(puVar4);
LAB_100ba3e08:
  _swift_release(puVar5);
  return puVar18;
}



/* Address: 0x100ba3e40 | FUN_100ba3e40 */

byte FUN_100ba3e40(char *param_1,long param_2,byte param_3,long param_4,void *param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  Substring SVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  String SVar6;
  
  uVar3 = (ulong)*(undefined **)(param_2 + 0x10) >> 0xe;
  param_3 = uVar3 == (ulong)param_1 >> 0xe & param_3;
  if (param_3 != 1) {
    if ((ulong)param_1 >> 0xe < uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba3f00);
      (*pcVar1)();
    }
    SVar6.bridgeObject = param_5;
    SVar6.str = param_1;
    SVar2 = Swift::String::get_subscript(*(undefined **)(param_2 + 0x10),SVar6);
    FUN_100b93980();
    lVar5 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
    FUN_100b93be4(lVar5);
    lVar4 = *(long *)(param_4 + 0x10);
    *(long *)(lVar4 + 0x10) = lVar5 + 1;
    lVar5 = lVar4 + lVar5 * 0x20;
    *(undefined **)(lVar5 + 0x20) = SVar2.unknown;
    *(char **)(lVar5 + 0x28) = param_1;
    *(void **)(lVar5 + 0x30) = param_5;
    *(undefined8 *)(lVar5 + 0x38) = param_6;
    *(long *)(param_4 + 0x10) = lVar4;
  }
  return param_3 ^ 1;
}



/* Address: 0x100ba3f00 | FUN_100ba3f00 */

undefined1  [16] FUN_100ba3f00(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3 - param_1;
  if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba3f48);
    (*pcVar2)();
  }
  if ((long)param_2 < 1) {
    if (0 < (long)uVar1 || (long)uVar1 <= (long)param_2) goto LAB_100ba3f34;
  }
  else if (((long)uVar1 < 0) || (param_2 <= uVar1)) {
LAB_100ba3f34:
    if (!SCARRY8(param_1,param_2)) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_1 + param_2;
      return auVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ba3f4c);
    (*pcVar2)();
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x100ba3f4c | FUN_100ba3f4c */

void FUN_100ba3f4c(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  
  if (!SCARRY8(param_1,param_2)) {
                    /* WARNING: Could not recover jumptable at 0x000100ba3f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_100ba3fac + (param_4 >> 0x3e) * 4) + 0x100ba3f64))
              (0,param_1 + param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba3fa8);
  (*pcVar1)();
}



/* Address: 0x100ba3fbc | FUN_100ba3fbc */

void FUN_100ba3fbc(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_100ba4040(param_1,param_3,param_4,param_5);
  if ((long)param_2 < 1) {
    if ((long)uVar1 < 1 && (long)param_2 < (long)uVar1) {
      return;
    }
  }
  else if ((-1 < (long)uVar1) && (uVar1 < param_2)) {
    return;
  }
  FUN_100ba3f4c(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x100ba4040 | FUN_100ba4040 */

void FUN_100ba4040(undefined8 param_1,undefined8 param_2,int param_3,ulong param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100ba406c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_100ba40fc + (param_4 >> 0x3e) * 4) + 0x100ba4054))((long)param_3);
  return;
}



/* Address: 0x100ba411c | FUN_100ba411c */

void FUN_100ba411c(void)

{
  undefined *puVar1;
  
  if (DAT_1010462d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_1010462d8 = puVar1;
  return;
}



/* Address: 0x100ba415c | FUN_100ba415c */

void FUN_100ba415c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100ba4180 | FUN_100ba4180 */

void FUN_100ba4180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100ba4190 | FUN_100ba4190 */

void FUN_100ba4190(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 2) {
    uVar2 = 4;
  }
  if (param_3 + 2 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfd < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x000100ba41d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100ba41dc + (ulong)(byte)(&DAT_100c9b819)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100ba420c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100ba4210 + (ulong)(byte)(&DAT_100c9b814)[uVar1] * 4))();
  return;
}



/* Address: 0x100ba424c | FUN_100ba424c */

void FUN_100ba424c(void)

{
  FUN_10063ee28(&DAT_100f394d8);
  return;
}



/* Address: 0x100ba4258 | thunk_FUN_100ba425c */

void thunk_FUN_100ba425c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010462e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b90c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b90c,&DAT_100f394d8);
  DAT_1010462e0 = pTVar1;
  return;
}



/* Address: 0x100ba425c | FUN_100ba425c */

void FUN_100ba425c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010462e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b90c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b90c,&DAT_100f394d8);
  DAT_1010462e0 = pTVar1;
  return;
}



/* Address: 0x100ba429c | FUN_100ba429c */

void FUN_100ba429c(void)

{
  long unaff_x23;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba42ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x23 + 8))();
  return;
}



/* Address: 0x100ba42b0 | FUN_100ba42b0 */

void FUN_100ba42b0(void)

{
  FUN_10003bf2c();
  return;
}



/* Address: 0x100ba42bc | FUN_100ba42bc */

void FUN_100ba42bc(void)

{
  return;
}



/* Address: 0x100ba42d8 | FUN_100ba42d8 */

void FUN_100ba42d8(void)

{
  long unaff_x27;
  
  FUN_100ba01a0(unaff_x27 + 8);
  return;
}



/* Address: 0x100ba42f0 | FUN_100ba42f0 */

void FUN_100ba42f0(void)

{
  return;
}



/* Address: 0x100ba42fc | FUN_100ba42fc */

void FUN_100ba42fc(void)

{
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 uStack0000000000000098;
  undefined8 uStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  
  uStack0000000000000078 = in_stack_00000038;
  uStack0000000000000070 = in_stack_00000030;
  uStack0000000000000088 = in_stack_00000048;
  uStack0000000000000080 = in_stack_00000040;
  uStack0000000000000098 = in_stack_00000058;
  uStack0000000000000090 = in_stack_00000050;
  uStack00000000000000a8 = in_stack_00000068;
  uStack00000000000000a0 = in_stack_00000060;
  FUN_100ba1f54();
  return;
}



/* Address: 0x100ba4314 | FUN_100ba4314 */

String FUN_100ba4314(void)

{
  CharacterSet unaff_x26;
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(unaff_x26);
  return SVar1;
}



/* Address: 0x100ba4328 | FUN_100ba4328 */

void FUN_100ba4328(void)

{
  long unaff_x20;
  long unaff_x21;
  
  _swift_beginAccess(unaff_x20 + unaff_x21,&stack0x00000008,0x21,0);
  return;
}



/* Address: 0x100ba433c | FUN_100ba433c */

void FUN_100ba433c(void)

{
  return;
}



/* Address: 0x100ba435c | FUN_100ba435c */

void FUN_100ba435c(undefined8 param_1)

{
  FUN_100b78fe8(param_1,0x79646f62,&DAT_e400000000000000);
  return;
}



/* Address: 0x100ba436c | FUN_100ba436c */

void FUN_100ba436c(void)

{
  FUN_100b7f4fc(0);
  return;
}



/* Address: 0x100ba4374 | FUN_100ba4374 */

undefined1  [16] FUN_100ba4374(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x3d74657372616863;
  return auVar1;
}



/* Address: 0x100ba438c | FUN_100ba438c */

void FUN_100ba438c(long param_1)

{
  long unaff_x19;
  
  FUN_100b74780(unaff_x19 + param_1);
  return;
}



/* Address: 0x100ba4398 | FUN_100ba4398 */

void FUN_100ba4398(CharacterSet param_1)

{
  Foundation::CharacterSet::get_whitespaces(param_1);
  return;
}


