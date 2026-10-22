/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006576e0 | FUN_1006576e0 */

undefined1  [16] FUN_1006576e0(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x18));
  return auVar1;
}



/* Address: 0x10065770c | FUN_10065770c */

void FUN_10065770c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
  }
  uVar3 = *(undefined8 *)(uVar2 + 0x18);
  *(undefined8 *)(uVar2 + 0x10) = param_1;
  *(undefined8 *)(uVar2 + 0x18) = param_2;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10065778c | FUN_10065778c */

undefined1  [16] FUN_10065778c(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x18);
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x10);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1006577cc;
  return auVar2;
}



/* Address: 0x1006577cc | FUN_1006577cc */

void FUN_1006577cc(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar7 = (ulong *)param_1[2];
  if ((param_2 & 1) == 0) {
    uVar3 = *puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar7;
    uVar5 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar7 = uVar5;
    }
    uVar4 = *(undefined8 *)(uVar5 + 0x18);
    *(undefined8 *)(uVar5 + 0x10) = uVar1;
    *(undefined8 *)(uVar5 + 0x18) = uVar2;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    uVar3 = *puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar7;
    uVar5 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar7 = uVar5;
    }
    uVar4 = *(undefined8 *)(uVar5 + 0x18);
    *(undefined8 *)(uVar5 + 0x10) = uVar1;
    *(undefined8 *)(uVar5 + 0x18) = uVar2;
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar2;
  }
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Address: 0x1006578b0 | FUN_1006578b0 */

undefined8 FUN_1006578b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x1006578d8 | FUN_1006578d8 */

void FUN_1006578d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
  }
  uVar3 = *(undefined8 *)(uVar2 + 0x20);
  *(undefined8 *)(uVar2 + 0x20) = param_1;
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar3);
  FUN_1005d8534(param_1);
  return;
}



/* Address: 0x100657960 | FUN_100657960 */

undefined1  [16] FUN_100657960(undefined8 *param_1)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x20);
  FUN_1005d84e8();
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_10065799c;
  return auVar1;
}



/* Address: 0x10065799c | FUN_10065799c */

void FUN_10065799c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  puVar2 = (ulong *)param_1[1];
  if ((param_2 & 1) == 0) {
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x20);
    *(undefined8 *)(uVar4 + 0x20) = uVar1;
    FUN_1005d84e8(uVar1);
  }
  else {
    FUN_1005d84e8(uVar1);
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x20);
    *(undefined8 *)(uVar4 + 0x20) = uVar1;
    FUN_1005d84e8(uVar1);
    FUN_1005d8534(uVar5);
    uVar5 = uVar1;
  }
  FUN_1005d8534(uVar5);
  FUN_1005d8534(uVar1);
  return;
}



/* Address: 0x100657a90 | FUN_100657a90 */

undefined8 FUN_100657a90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x100657ab8 | FUN_100657ab8 */

void FUN_100657ab8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
  }
  uVar3 = *(undefined8 *)(uVar2 + 0x28);
  *(undefined8 *)(uVar2 + 0x28) = param_1;
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar3);
  FUN_1005d8534(param_1);
  return;
}



/* Address: 0x100657b40 | FUN_100657b40 */

undefined1  [16] FUN_100657b40(undefined8 *param_1)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x28);
  FUN_1005d84e8();
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100657b7c;
  return auVar1;
}



/* Address: 0x100657b7c | FUN_100657b7c */

void FUN_100657b7c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  puVar2 = (ulong *)param_1[1];
  if ((param_2 & 1) == 0) {
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x28);
    *(undefined8 *)(uVar4 + 0x28) = uVar1;
    FUN_1005d84e8(uVar1);
  }
  else {
    FUN_1005d84e8(uVar1);
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x28);
    *(undefined8 *)(uVar4 + 0x28) = uVar1;
    FUN_1005d84e8(uVar1);
    FUN_1005d8534(uVar5);
    uVar5 = uVar1;
  }
  FUN_1005d8534(uVar5);
  FUN_1005d8534(uVar1);
  return;
}



/* Address: 0x100657c70 | FUN_100657c70 */

undefined8 FUN_100657c70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x100657c98 | FUN_100657c98 */

void FUN_100657c98(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
  }
  uVar3 = *(undefined8 *)(uVar2 + 0x30);
  *(undefined8 *)(uVar2 + 0x30) = param_1;
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar3);
  FUN_1005d8534(param_1);
  return;
}



/* Address: 0x100657d20 | FUN_100657d20 */

undefined1  [16] FUN_100657d20(undefined8 *param_1)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x30);
  FUN_1005d84e8();
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100657d5c;
  return auVar1;
}



/* Address: 0x100657d5c | FUN_100657d5c */

void FUN_100657d5c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  puVar2 = (ulong *)param_1[1];
  if ((param_2 & 1) == 0) {
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x30);
    *(undefined8 *)(uVar4 + 0x30) = uVar1;
    FUN_1005d84e8(uVar1);
  }
  else {
    FUN_1005d84e8(uVar1);
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x30);
    *(undefined8 *)(uVar4 + 0x30) = uVar1;
    FUN_1005d84e8(uVar1);
    FUN_1005d8534(uVar5);
    uVar5 = uVar1;
  }
  FUN_1005d8534(uVar5);
  FUN_1005d8534(uVar1);
  return;
}



/* Address: 0x100657e50 | FUN_100657e50 */

undefined8 FUN_100657e50(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_1005d84e8(uVar1);
  return uVar1;
}



/* Address: 0x100657e78 | FUN_100657e78 */

void FUN_100657e78(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar4);
    *unaff_x20 = uVar2;
  }
  uVar3 = *(undefined8 *)(uVar2 + 0x38);
  *(undefined8 *)(uVar2 + 0x38) = param_1;
  FUN_1005d84e8(param_1);
  FUN_1005d8534(uVar3);
  FUN_1005d8534(param_1);
  return;
}



/* Address: 0x100657f00 | FUN_100657f00 */

undefined1  [16] FUN_100657f00(undefined8 *param_1)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x38);
  FUN_1005d84e8();
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_100657f3c;
  return auVar1;
}



/* Address: 0x100657f3c | FUN_100657f3c */

void FUN_100657f3c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar1 = *param_1;
  puVar2 = (ulong *)param_1[1];
  if ((param_2 & 1) == 0) {
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x38);
    *(undefined8 *)(uVar4 + 0x38) = uVar1;
    FUN_1005d84e8(uVar1);
  }
  else {
    FUN_1005d84e8(uVar1);
    uVar3 = *puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *puVar2;
    uVar4 = uVar6;
    if ((uVar3 & 1) == 0) {
      FUN_100658a88(0);
      _swift_allocObject();
      FUN_100658c94();
      _swift_release(uVar6);
      *puVar2 = uVar4;
    }
    uVar5 = *(undefined8 *)(uVar4 + 0x38);
    *(undefined8 *)(uVar4 + 0x38) = uVar1;
    FUN_1005d84e8(uVar1);
    FUN_1005d8534(uVar5);
    uVar5 = uVar1;
  }
  FUN_1005d8534(uVar5);
  FUN_1005d8534(uVar1);
  return;
}



/* Address: 0x100658030 | FUN_100658030 */

undefined1 FUN_100658030(long param_1)

{
  return *(undefined1 *)(param_1 + 0x40);
}



/* Address: 0x100658038 | FUN_100658038 */

void FUN_100658038(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar3);
    *unaff_x20 = uVar2;
  }
  *(byte *)(uVar2 + 0x40) = param_1 & 1;
  return;
}



/* Address: 0x1006580ac | FUN_1006580ac */

code * FUN_1006580ac(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(*unaff_x20 + 0x40);
  return FUN_1006580cc;
}



/* Address: 0x1006580cc | FUN_1006580cc */

void FUN_1006580cc(undefined8 *param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  
  puVar5 = (ulong *)*param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  uVar2 = *puVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = *puVar5;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar4);
    *puVar5 = uVar3;
  }
  *(undefined1 *)(uVar3 + 0x40) = uVar1;
  return;
}



/* Address: 0x10065813c | FUN_10065813c */

undefined8 FUN_10065813c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Address: 0x100658144 | FUN_100658144 */

void FUN_100658144(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar3);
    *unaff_x20 = uVar2;
  }
  *(undefined8 *)(uVar2 + 0x48) = param_1;
  return;
}



/* Address: 0x1006581b4 | FUN_1006581b4 */

undefined1  [16] FUN_1006581b4(undefined8 *param_1)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x48);
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1006581d4;
  return auVar1;
}



/* Address: 0x1006581d4 | FUN_1006581d4 */

void FUN_1006581d4(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  puVar2 = (ulong *)param_1[1];
  uVar3 = *puVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = *puVar2;
  uVar4 = uVar5;
  if ((uVar3 & 1) == 0) {
    FUN_100658a88(0);
    _swift_allocObject();
    FUN_100658c94();
    _swift_release(uVar5);
    *puVar2 = uVar4;
  }
  *(undefined8 *)(uVar4 + 0x48) = uVar1;
  return;
}



/* Address: 0x100658240 | FUN_100658240 */

void FUN_100658240(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined1 *)(param_1 + 0x40);
  uVar9 = *(undefined8 *)(param_1 + 0x48);
  _swift_retain(uVar2 & 0x3fffffffffffffff);
  _swift_bridgeObjectRetain(uVar4);
  FUN_1005d84e8(uVar5);
  FUN_1005d84e8(uVar3);
  FUN_1005d84e8(uVar6);
  _swift_release(param_1);
  lVar8 = 0;
  FUN_100658a88();
  _swift_allocObject();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(ulong *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  *(undefined1 *)(lVar8 + 0x40) = uVar7;
  *(undefined8 *)(lVar8 + 0x48) = uVar9;
  return;
}



/* Address: 0x1006582e8 | FUN_1006582e8 */

void FUN_1006582e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100658a88();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = param_6;
  *(undefined1 *)(lVar1 + 0x40) = param_7;
  *(undefined8 *)(lVar1 + 0x48) = param_8;
  return;
}



/* Address: 0x100658360 | FUN_100658360 */

/* WARNING: Removing unreachable block (ram,0x000100658474) */

long FUN_100658360(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  UnsafePointer<__int8> cString;
  String SVar5;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000007;
  cString.unknown = *(undefined **)(param_1 + 8);
  if (cString.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006584e8);
    (*pcVar2)();
  }
  SVar5 = Swift::String::init(cString);
  *(String *)(unaff_x20 + 0x10) = SVar5;
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 == 0) {
    lVar3 = -0xffffffffffffff9;
  }
  else {
    FUN_100657428();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  *(long *)(unaff_x20 + 0x20) = lVar3;
  FUN_1005d8534(uVar4);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar3 = -0xffffffffffffff9;
  }
  else {
    FUN_100657428();
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  *(long *)(unaff_x20 + 0x28) = lVar3;
  FUN_1005d8534(uVar4);
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 >> 1 & 1) == 0) || (lVar3 = *(long *)(param_1 + 0x28), lVar3 == 0)) {
    if (((uVar1 >> 4 & 1) == 0) || (lVar3 = *(long *)(param_1 + 0x28), lVar3 == 0)) {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
      lVar3 = -0xffffffffffffff9;
      *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000007;
      FUN_1005d8534(uVar4);
    }
    else {
      uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
      *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000007;
      FUN_1005d8534(uVar4);
      FUN_100657428();
    }
  }
  else {
    FUN_100657428();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    *(long *)(unaff_x20 + 0x30) = lVar3;
    FUN_1005d8534(uVar4);
    lVar3 = -0xffffffffffffff9;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = lVar3;
  FUN_1005d8534(uVar4);
  *(byte *)(unaff_x20 + 0x40) = (byte)(uVar1 >> 0xf) & 1;
  FUN_100669f68();
  *(ulong *)(unaff_x20 + 0x48) = (ulong)cString.unknown & 0xffffffff;
  return unaff_x20;
}



/* Address: 0x1006584e8 | FUN_1006584e8 */

void FUN_1006584e8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10065852c | FUN_10065852c */

undefined1  [16] FUN_10065852c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  char *pcVar6;
  void *pvVar7;
  undefined1 *puVar8;
  char *pcVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 local_58;
  char *local_50;
  undefined1 *local_48;
  
  local_50 = (char *)0x0;
  local_48 = (undefined1 *)0xe000000000000000;
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(local_48);
  local_50 = (char *)0x20656369766544;
  local_48 = &DAT_e700000000000000;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  SVar10 = *(String *)(param_1 + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar10,SVar13);
  _swift_bridgeObjectRelease(uVar1);
  SVar10.bridgeObject = (void *)0xea00000000002073;
  SVar10.str = (char *)0x736572646461203a;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar10,SVar14);
  local_58 = *(undefined8 *)(param_1 + 0x20);
  FUN_1005d84e8();
  puVar5 = &DAT_100fd8880;
  FUN_1000f7830(&DAT_100fd8880,&DAT_100c6b400);
  SVar10 = Swift::String::_init(&local_58,puVar5);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  pvVar7 = SVar10.bridgeObject;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  puVar4 = local_48;
  pcVar3 = local_50;
  pcVar9 = *(char **)(param_1 + 0x28);
  if ((((ulong)pcVar9 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    puVar8 = (void *)0xe000000000000000;
    pcVar9 = (char *)0x0;
  }
  else {
    local_50 = (char *)0x6b73616d74656e20;
    local_48 = (void *)0xe900000000000020;
    _swift_retain((ulong)pcVar9 & 0x3fffffffffffffff);
    pcVar6 = pcVar9;
    FUN_100666bcc();
    SVar11.bridgeObject = pvVar7;
    SVar11.str = pcVar6;
    SVar16.bridgeObject = param_4;
    SVar16.str = param_3;
    Swift::String::append(SVar11,SVar16);
    _swift_bridgeObjectRelease(pvVar7);
    FUN_1005d8534(pcVar9);
    puVar8 = local_48;
    pcVar9 = local_50;
  }
  local_50 = pcVar3;
  local_48 = puVar4;
  _swift_bridgeObjectRetain(puVar4);
  SVar12.bridgeObject = puVar8;
  SVar12.str = pcVar9;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar12,SVar17);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(puVar8);
  auVar2._8_8_ = local_48;
  auVar2._0_8_ = local_50;
  return auVar2;
}



/* Address: 0x1006586b0 | FUN_1006586b0 */

void FUN_1006586b0(void)

{
  undefined8 *unaff_x20;
  
  FUN_10065852c(*unaff_x20);
  return;
}



/* Address: 0x1006586b8 | thunk_FUN_100658aa8 */

void thunk_FUN_100658aa8(void)

{
  FUN_100658aa8();
  return;
}



/* Address: 0x1006586bc | FUN_1006586bc */

void FUN_1006586bc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100658aa8(*param_1,*param_2);
  return;
}



/* Address: 0x1006586c8 | FUN_1006586c8 */

void FUN_1006586c8(Hasher param_1,long param_2)

{
  undefined8 uVar1;
  String SVar2;
  Hasher HVar3;
  undefined *puVar4;
  
  HVar3.unknown = ((String *)(param_2 + 0x10))->str;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  SVar2 = *(String *)(param_2 + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(uVar1);
  puVar4 = *(undefined **)(param_2 + 0x20);
  if ((((ulong)puVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    _swift_retain((ulong)puVar4 & 0x3fffffffffffffff);
    HVar3.unknown = puVar4;
    FUN_1006682c4(param_1.unknown);
    FUN_1005d8534(puVar4);
  }
  puVar4 = *(undefined **)(param_2 + 0x28);
  if ((((ulong)puVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    _swift_retain((ulong)puVar4 & 0x3fffffffffffffff);
    HVar3.unknown = puVar4;
    FUN_1006682c4(param_1.unknown);
    FUN_1005d8534(puVar4);
  }
  puVar4 = *(undefined **)(param_2 + 0x30);
  if ((((ulong)puVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    _swift_retain((ulong)puVar4 & 0x3fffffffffffffff);
    HVar3.unknown = puVar4;
    FUN_1006682c4(param_1.unknown);
    FUN_1005d8534(puVar4);
  }
  puVar4 = *(undefined **)(param_2 + 0x38);
  if ((((ulong)puVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    _swift_retain((ulong)puVar4 & 0x3fffffffffffffff);
    HVar3.unknown = puVar4;
    FUN_1006682c4(param_1.unknown);
    FUN_1005d8534(puVar4);
  }
  Swift::Hasher::_combine(*(__uint64 *)(param_2 + 0x48),HVar3);
  return;
}



/* Address: 0x10065881c | FUN_10065881c */

void FUN_10065881c(undefined8 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1006586c8(HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100658860 | FUN_100658860 */

void FUN_100658860(void)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1006586c8(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006588a4 | FUN_1006588a4 */

void FUN_1006588a4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006586c8(param_1,*unaff_x20);
  return;
}



/* Address: 0x1006588ac | FUN_1006588ac */

void FUN_1006588ac(__int64 param_1)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1006586c8(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1006588ec | FUN_1006588ec */

bool FUN_1006588ec(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(undefined **)(param_1 + 0x10) == *(undefined **)(param_2 + 0x10) &&
       *(undefined **)(param_1 + 0x18) == *(undefined **)(param_2 + 0x18)) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_1 + 0x10),
                         (_StringGuts)*(undefined **)(param_1 + 0x18),
                         (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10)), bVar1))
  {
    uVar2 = *(ulong *)(param_1 + 0x20);
    FUN_1006689fc(uVar2,*(undefined8 *)(param_2 + 0x20));
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(param_1 + 0x28);
      uVar4 = *(ulong *)(param_2 + 0x28);
      if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
          return false;
        }
      }
      else {
        if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
          return false;
        }
        FUN_1005d84e8(uVar4);
        FUN_1005d84e8(uVar2);
        uVar3 = uVar2;
        FUN_1006689fc(uVar2,uVar4);
        FUN_1005d8534(uVar4);
        FUN_1005d8534(uVar2);
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      uVar2 = *(ulong *)(param_1 + 0x30);
      uVar4 = *(ulong *)(param_2 + 0x30);
      if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
          return false;
        }
      }
      else {
        if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
          return false;
        }
        FUN_1005d84e8(uVar4);
        FUN_1005d84e8(uVar2);
        uVar3 = uVar2;
        FUN_1006689fc(uVar2,uVar4);
        FUN_1005d8534(uVar4);
        FUN_1005d8534(uVar2);
        if ((uVar3 & 1) == 0) {
          return false;
        }
      }
      uVar2 = *(ulong *)(param_1 + 0x38);
      uVar4 = *(ulong *)(param_2 + 0x38);
      if (((uVar2 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
        if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
LAB_100658a5c:
          return *(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48);
        }
      }
      else if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
        FUN_1005d84e8(uVar4);
        FUN_1005d84e8(uVar2);
        uVar3 = uVar2;
        FUN_1006689fc(uVar2,uVar4);
        FUN_1005d8534(uVar4);
        FUN_1005d8534(uVar2);
        if ((uVar3 & 1) != 0) goto LAB_100658a5c;
      }
    }
  }
  return false;
}



/* Address: 0x100658a88 | FUN_100658a88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100658a88(void)

{
  return ZEXT816(0x100fd89a0);
}



/* Address: 0x100658aa8 | FUN_100658aa8 */

bool FUN_100658aa8(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(undefined **)(param_1 + 0x10) != *(undefined **)(param_2 + 0x10) ||
       *(undefined **)(param_1 + 0x18) != *(undefined **)(param_2 + 0x18)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_1 + 0x10),
                         (_StringGuts)*(undefined **)(param_1 + 0x18),
                         (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10)), !bVar1))
  {
    return false;
  }
  uVar3 = *(ulong *)(param_1 + 0x20);
  uVar4 = *(ulong *)(param_2 + 0x20);
  if (((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
      return false;
    }
  }
  else {
    if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
      return false;
    }
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar3);
    uVar2 = uVar3;
    FUN_1006689fc(uVar3,uVar4);
    FUN_1005d8534(uVar4);
    FUN_1005d8534(uVar3);
    if ((uVar2 & 1) == 0) {
      return false;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x28);
  if (((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
      return false;
    }
  }
  else {
    if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
      return false;
    }
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar3);
    uVar2 = uVar3;
    FUN_1006689fc(uVar3,uVar4);
    FUN_1005d8534(uVar4);
    FUN_1005d8534(uVar3);
    if ((uVar2 & 1) == 0) {
      return false;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x30);
  uVar4 = *(ulong *)(param_2 + 0x30);
  if (((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
      return false;
    }
  }
  else {
    if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
      return false;
    }
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar3);
    uVar2 = uVar3;
    FUN_1006689fc(uVar3,uVar4);
    FUN_1005d8534(uVar4);
    FUN_1005d8534(uVar3);
    if ((uVar2 & 1) == 0) {
      return false;
    }
  }
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar4 = *(ulong *)(param_2 + 0x38);
  if (((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if ((uVar4 & 0xf000000000000007) == 0xf000000000000007) {
LAB_100658c68:
      return *(long *)(param_1 + 0x48) == *(long *)(param_2 + 0x48);
    }
  }
  else if ((uVar4 & 0xf000000000000007) != 0xf000000000000007) {
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar3);
    uVar2 = uVar3;
    FUN_1006689fc(uVar3,uVar4);
    FUN_1005d8534(uVar4);
    FUN_1005d8534(uVar3);
    if ((uVar2 & 1) != 0) goto LAB_100658c68;
  }
  return false;
}



/* Address: 0x100658c94 | FUN_100658c94 */

void FUN_100658c94(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x20) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000007;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000007;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar4;
  _swift_bridgeObjectRetain();
  FUN_1005d84e8(uVar1);
  FUN_1005d84e8(uVar2);
  FUN_1005d84e8(uVar3);
  FUN_1005d84e8(uVar4);
  FUN_1005d8534(0xf000000000000007);
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(param_1 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x48) = *(undefined8 *)(param_1 + 0x48);
  return;
}



/* Address: 0x100658d34 | thunk_FUN_100658d38 */

void thunk_FUN_100658d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8888 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b480;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b480,&DAT_100ef1608);
  DAT_100fd8888 = pTVar1;
  return;
}



/* Address: 0x100658d38 | FUN_100658d38 */

void FUN_100658d38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8888 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b480;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b480,&DAT_100ef1608);
  DAT_100fd8888 = pTVar1;
  return;
}



/* Address: 0x100658d78 | FUN_100658d78 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100658d78(void)

{
  return ZEXT816(0x100fd88d0);
}



/* Address: 0x100658d98 | FUN_100658d98 */

undefined1  [16] FUN_100658d98(void)

{
  return ZEXT816(0x100ef1608);
}



/* Address: 0x100658da8 | FUN_100658da8 */

void FUN_100658da8(void)

{
  undefined8 *unaff_x20;
  
  _swift_retain(*unaff_x20);
  return;
}



/* Address: 0x100658dd4 | FUN_100658dd4 */

void FUN_100658dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  return;
}



/* Address: 0x100658e10 | FUN_100658e10 */

void FUN_100658e10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100634b78();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x100658e40 | FUN_100658e40 */

void FUN_100658e40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100637324(0,*(undefined8 *)(param_2 + 0x10));
  FUN_100634c7c(param_1,uVar1);
  return;
}



/* Address: 0x100658e70 | FUN_100658e70 */

void FUN_100658e70(undefined8 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  
  lVar4 = *(long *)(param_2 + 0x10);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar6 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  FUN_100658f14(puVar6,param_2);
  lVar5 = *(long *)(lVar4 + -8);
  puVar3 = puVar6;
  (**(code **)(lVar5 + 0x30))(puVar6,1,lVar4);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar5 + 0x20))(param_1,puVar6,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100658f14);
  (*pcVar1)();
}



/* Address: 0x100658f14 | FUN_100658f14 */

void FUN_100658f14(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x20) != '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    bVar1 = lVar2 < 1;
    if (lVar2 < 2) {
      lVar2 = 1;
    }
    *(long *)(unaff_x20 + 0x18) = lVar2 + -1;
    *(bool *)(unaff_x20 + 0x20) = bVar1;
  }
  FUN_100637324(0,*(undefined8 *)(param_2 + 0x10));
  FUN_100635b20(param_1);
  return;
}



/* Address: 0x100658f68 | FUN_100658f68 */

void FUN_100658f68(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100635ed8(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100658f7c | FUN_100658f7c */

void FUN_100658f7c(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100633480(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100658f90 | FUN_100658f90 */

void FUN_100658f90(long param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_10063258c(lVar1,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  if (0 < lVar1) {
    unaff_x20[3] = lVar1 + -1;
    *(undefined1 *)(unaff_x20 + 4) = 0;
  }
  return;
}



/* Address: 0x100658fc4 | FUN_100658fc4 */

ulong FUN_100658fc4(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = uVar1;
  FUN_100632d60(uVar1,uVar2,uVar6,uVar7);
  uVar4 = param_1 & 0x1ffffffffffffff;
  FUN_10063250c(uVar4,uVar5 & 0x1ffffffffffffff,uVar7);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100659090);
    (*pcVar3)();
  }
  if ((char)unaff_x20[4] == '\x01') {
    return 0;
  }
  uVar4 = unaff_x20[3];
  uVar5 = uVar1;
  FUN_100632d28(uVar1,uVar2,uVar6,uVar7);
  uVar5 = uVar5 & 0x1ffffffffffffff;
  FUN_1006329fc(uVar5,uVar4,uVar1,uVar2,uVar6,uVar7);
  uVar5 = uVar5 & 0x1ffffffffffffff;
  FUN_1006324f0(uVar5,param_1 & 0x1ffffffffffffff,uVar7);
  return uVar5;
}



/* Address: 0x100659090 | FUN_100659090 */

ulong FUN_100659090(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100632d28(uVar1,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return uVar1 & 0x1ffffffffffffff;
}



/* Address: 0x1006590b8 | FUN_1006590b8 */

ulong FUN_1006590b8(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100632d60(uVar1,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return uVar1 & 0x1ffffffffffffff;
}



/* Address: 0x1006590e0 | FUN_1006590e0 */

ulong FUN_1006590e0(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  param_1 = param_1 & 0x1ffffffffffffff;
  FUN_1006329fc(param_1,param_2,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_3 + 0x10)
               );
  return param_1 & 0x1ffffffffffffff;
}



/* Address: 0x10065910c | FUN_10065910c */

ulong FUN_10065910c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  
  if ((char)unaff_x20[4] == '\x01') {
    uVar5 = 0x200000000000000;
  }
  else {
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    uVar2 = unaff_x20[2];
    uVar4 = unaff_x20[3];
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = uVar1;
    FUN_100632d28(uVar1,uVar3,uVar2,uVar6);
    uVar5 = uVar5 & 0x1ffffffffffffff;
    FUN_1006329fc(uVar5,uVar4,uVar1,uVar3,uVar2,uVar6);
    uVar5 = uVar5 & 0x1ffffffffffffff;
  }
  return uVar5;
}



/* Address: 0x100659188 | FUN_100659188 */

void FUN_100659188(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  FUN_10065910c();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  local_50 = uVar2;
  FUN_100637010(0xff,uVar2);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(param_1,FUN_100659214,auStack_60,OVar1.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,uVar2,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}


