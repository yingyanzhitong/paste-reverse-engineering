/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007d6f70 | FUN_1007d6f70 */

void FUN_1007d6f70(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar4 = uVar4 + 0x50 & (uVar4 ^ 0xffffffffffffffff);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8));
  plVar2 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_1007d4978(plVar2,param_1,uVar5,uVar1,unaff_x20 + uVar4,uVar6);
  return;
}



/* Address: 0x1007d7014 | FUN_1007d7014 */

void FUN_1007d7014(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1007d708c | FUN_1007d708c */

void FUN_1007d708c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x28) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar5 + 0x50 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar3 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1007d5448(plVar3,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x1007d7130 | FUN_1007d7130 */

void FUN_1007d7130(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_1007c7bd4(0,&local_70);
  FUN_1007cf98c();
  *param_1 = uVar2;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1007d71a8 | FUN_1007d71a8 */

void FUN_1007d71a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_errorRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(param_3);
    return;
  }
  return;
}



/* Address: 0x1007d71e4 | FUN_1007d71e4 */

void FUN_1007d71e4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar3 + 0x40);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1007d725c | FUN_1007d725c */

void FUN_1007d725c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x30) + -8);
  uVar5 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar5 + 0x50 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + (*(long *)(lVar4 + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar3 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1007d6080(plVar3,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x1007d7300 | FUN_1007d7300 */

void FUN_1007d7300(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_release(param_2);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  return;
}



/* Address: 0x1007d7330 | FUN_1007d7330 */

void FUN_1007d7330(undefined8 param_1)

{
  FUN_1007749bc(param_1,FUN_1007d6918);
  return;
}



/* Address: 0x1007d734c | FUN_1007d734c */

void FUN_1007d734c(undefined8 param_1)

{
  FUN_1007d7458(param_1,2);
  return;
}



/* Address: 0x1007d7364 | FUN_1007d7364 */

void FUN_1007d7364(undefined8 param_1)

{
  FUN_1007d73b4(param_1,FUN_1007cf36c);
  return;
}



/* Address: 0x1007d7380 | FUN_1007d7380 */

void FUN_1007d7380(undefined8 param_1)

{
  FUN_1007749bc(param_1,FUN_1007d5e4c);
  return;
}



/* Address: 0x1007d739c | FUN_1007d739c */

void FUN_1007d739c(undefined8 param_1)

{
  FUN_1007d7458(param_1,1);
  return;
}



/* Address: 0x1007d73b4 | FUN_1007d73b4 */

void FUN_1007d73b4(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar2 = &local_70;
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_1007c7bd4();
  (*param_3)();
  *param_1 = uVar1;
  param_1[1] = puVar2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1007d7424 | FUN_1007d7424 */

void FUN_1007d7424(undefined8 param_1)

{
  FUN_1007749bc(param_1,FUN_1007d5214);
  return;
}



/* Address: 0x1007d7440 | FUN_1007d7440 */

void FUN_1007d7440(undefined8 param_1)

{
  FUN_1007d7458(param_1,0);
  return;
}



/* Address: 0x1007d7458 | FUN_1007d7458 */

void FUN_1007d7458(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x18);
  local_70 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x38);
  local_50 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = 0;
  FUN_1007c7bd4(0,&local_70);
  FUN_1007cd334(param_3,uVar2,uVar1);
  *param_1 = param_3;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1007d74d4 | FUN_1007d74d4 */

void FUN_1007d74d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 auStack_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar9 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar9 + 0x60);
  local_d0 = uVar5;
  local_b8 = param_1;
  local_a8 = param_2;
  local_a0 = param_3;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_b0 = CONCAT71(extraout_var,OVar3.value);
  local_c0 = *(long *)(local_b0 + -8);
  lVar8 = (long)&local_f0 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar9 + 0x50);
  lVar1 = *(long *)(lVar9 + 0x58);
  local_d8 = *(long *)(lVar1 + -8);
  lVar12 = lVar8 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar4 + -8);
  lVar7 = lVar12 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = *(undefined8 *)(lVar9 + 0x70);
  uVar2 = *(undefined8 *)(lVar9 + 0x78);
  uStack_e8 = *(undefined8 *)(lVar9 + 0x70);
  local_f0 = *(undefined8 *)(lVar9 + 0x68);
  lVar9 = 0;
  local_90 = lVar4;
  lStack_88 = lVar1;
  local_80 = uVar5;
  local_78 = local_f0;
  uStack_70 = uStack_e8;
  local_68 = uVar2;
  FUN_1007c7bd4(0,&local_90);
  lVar11 = *(long *)(lVar9 + -8);
  lVar10 = lVar7 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar7,local_b8,lVar4);
  (**(code **)(local_d8 + 0x10))(lVar12,local_a8,lVar1);
  (**(code **)(local_c0 + 0x10))(lVar8,local_a0,local_b0);
  uVar5 = local_f0;
  *(undefined8 *)(lVar10 + -0x10) = uVar2;
  FUN_1007cc3b8(lVar10,lVar7,lVar12,lVar8,lVar4,lVar1,local_d0,uVar5,local_c8);
  lVar4 = lVar10;
  FUN_10079f660(lVar10,lVar9);
  (**(code **)(lVar11 + 8))(lVar10,lVar9);
  unaff_x20[2] = lVar4;
  return;
}



/* Address: 0x1007d7684 | FUN_1007d7684 */

void FUN_1007d7684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_1007d74d4(param_1,param_2,param_3);
  return;
}



/* Address: 0x1007d76d4 | FUN_1007d76d4 */

void FUN_1007d76d4(void)

{
  FUN_1007d7364();
  return;
}



/* Address: 0x1007d76e8 | FUN_1007d76e8 */

undefined1  [16] FUN_1007d76e8(void)

{
  return ZEXT816(0x100f02ba8);
}



/* Address: 0x1007d76f8 | FUN_1007d76f8 */

void FUN_1007d76f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_4;
  uVar2 = param_2;
  uVar3 = param_3;
  FUN_1007d7748();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Address: 0x1007d7748 | FUN_1007d7748 */

ulong FUN_1007d7748(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = *param_2 & 0x3f;
  lVar5 = (long)(uVar3 * param_1) >> 6;
  uVar4 = uVar3 * param_1 & 0x3f;
  if (uVar4 + uVar3 < 0x41) {
    return *(ulong *)(param_3 + lVar5 * 8) >> uVar4 & (-1L << uVar3 ^ 0xffffffffffffffffU);
  }
  lVar6 = uVar3 << uVar3;
  if (!SCARRY8(lVar6,0x40)) {
    lVar1 = lVar6 + 0x7e;
    if (0 < lVar6 + 0x40) {
      lVar1 = lVar6 + 0x3f;
    }
    lVar6 = 0;
    if (lVar5 + 1 != lVar1 >> 6) {
      lVar6 = lVar5 + 1;
    }
    return (*(long *)(param_3 + lVar6 * 8) << (0x40 - uVar4 & 0x3f) |
           *(ulong *)(param_3 + lVar5 * 8) >> uVar4) & (-1L << uVar3 ^ 0xffffffffffffffffU);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d7818);
  (*pcVar2)();
}



/* Address: 0x1007d7818 | FUN_1007d7818 */

ulong FUN_1007d7818(ulong param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 1L << (*param_2 & 0x3f);
  if (!SBORROW8(lVar2,1)) {
    return lVar2 - 1U & param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d7838);
  (*pcVar1)();
}



/* Address: 0x1007d7838 | FUN_1007d7838 */

ulong FUN_1007d7838(undefined8 param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Swift::Hashable::_rawHashValue(*param_2);
  lVar3 = 1L << (*param_2 & 0x3f);
  if (!SBORROW8(lVar3,1)) {
    return lVar3 - 1U & uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d7884);
  (*pcVar1)();
}



/* Address: 0x1007d7884 | FUN_1007d7884 */

void FUN_1007d7884(undefined8 *param_1,undefined8 param_2,ulong *param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar2 = Swift::Hashable::_rawHashValue(*param_3);
  lVar6 = 1L << (*param_3 & 0x3f);
  if (!SBORROW8(lVar6,1)) {
    uVar2 = lVar6 - 1U & uVar2;
    uVar3 = uVar2;
    puVar4 = param_3;
    uVar5 = param_4;
    FUN_1007d7748();
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = puVar4;
    param_1[5] = uVar5;
    *(undefined1 *)(param_1 + 6) = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d7900);
  (*pcVar1)();
}



/* Address: 0x1007d7900 | FUN_1007d7900 */

void FUN_1007d7900(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  uVar2 = param_3;
  uVar3 = param_4;
  FUN_1007d7748();
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Address: 0x1007d7944 | FUN_1007d7944 */

void FUN_1007d7944(undefined8 *param_1,ulong param_2,ulong *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = param_2;
  puVar4 = param_3;
  uVar5 = param_4;
  FUN_1007d7748();
  if (uVar3 == 0) {
    lVar8 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    uVar7 = -1L << (*param_3 & 0x3f);
    uVar1 = (uVar7 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_3[1] >> 6);
    uVar2 = 0;
    if (~uVar7 <= uVar1) {
      uVar2 = ~uVar7;
    }
    lVar8 = uVar1 - uVar2;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_2;
  param_1[3] = uVar3;
  param_1[4] = puVar4;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = lVar8;
  *(undefined1 *)(param_1 + 8) = uVar6;
  return;
}



/* Address: 0x1007d79c8 | FUN_1007d79c8 */

undefined1  [16] FUN_1007d79c8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  if (unaff_x20[3] != 0) {
    uVar3 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar3 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar3 <= uVar1) {
      uVar2 = ~uVar3;
    }
    auVar4._0_8_ = uVar1 - uVar2;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1007d7a0c | FUN_1007d7a0c */

bool FUN_1007d7a0c(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x18) != 0;
}



/* Address: 0x1007d7a1c | FUN_1007d7a1c */

void FUN_1007d7a1c(long param_1,char param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  
  puVar5 = (ulong *)*unaff_x20;
  if (param_2 == '\x01') {
    uVar4 = 0;
  }
  else {
    uVar4 = -1L << (*puVar5 & 0x3f);
    param_1 = param_1 - ((long)puVar5[1] >> 6);
    uVar4 = uVar4 ^ (param_1 >> 0x3f & (uVar4 ^ 0xffffffffffffffff)) + param_1 ^ 0xffffffffffffffff;
  }
  uVar2 = unaff_x20[3];
  lVar6 = unaff_x20[1];
  uVar8 = (*puVar5 & 0x3f) * unaff_x20[2];
  lVar7 = (long)uVar8 >> 6;
  *(ulong *)(lVar6 + lVar7 * 8) = (uVar2 ^ uVar4) << (uVar8 & 0x3f) ^ *(ulong *)(lVar6 + lVar7 * 8);
  uVar9 = *puVar5 & 0x3f;
  uVar8 = 0x40 - (uVar8 & 0x3f);
  if (uVar8 < uVar9) {
    lVar10 = uVar9 << uVar9;
    if (SCARRY8(lVar10,0x40)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d7adc);
      (*pcVar3)();
    }
    lVar1 = lVar10 + 0x7e;
    if (0 < lVar10 + 0x40) {
      lVar1 = lVar10 + 0x3f;
    }
    lVar10 = 0;
    if (lVar7 + 1 != lVar1 >> 6) {
      lVar10 = lVar7 + 1;
    }
    *(ulong *)(lVar6 + lVar10 * 8) =
         *(ulong *)(lVar6 + lVar10 * 8) ^ (uVar2 ^ uVar4) >> (uVar8 & 0x3f);
  }
  unaff_x20[3] = uVar4;
  return;
}



/* Address: 0x1007d7adc | FUN_1007d7adc */

code * FUN_1007d7adc(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  
  param_1[2] = (long)unaff_x20;
  if (unaff_x20[3] == 0) {
    uVar3 = 1;
    lVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar5 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar5 <= uVar1) {
      uVar2 = ~uVar5;
    }
    lVar4 = uVar1 - uVar2;
  }
  *param_1 = lVar4;
  *(undefined1 *)(param_1 + 1) = uVar3;
  return FUN_1007d7b34;
}



/* Address: 0x1007d7b34 | FUN_1007d7b34 */

void FUN_1007d7b34(undefined8 *param_1)

{
  FUN_1007d7a1c(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1007d7b60 | FUN_1007d7b60 */

void FUN_1007d7b60(void)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *unaff_x20;
  String SVar10;
  
  lVar7 = unaff_x20[2] + 1;
  unaff_x20[2] = lVar7;
  uVar4 = *(ulong *)*unaff_x20 & 0x3f;
  lVar5 = 1L << (*(ulong *)*unaff_x20 & 0x3f);
  if (lVar7 == lVar5) {
    if ((*(byte *)(unaff_x20 + 6) & 1) != 0) {
      SVar10.bridgeObject = (void *)0x2;
      SVar10.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar10,(StaticString)0xd000000000000024,
                 0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d7cb4);
      (*pcVar3)();
    }
    lVar7 = 0;
    *(undefined1 *)(unaff_x20 + 6) = 1;
    unaff_x20[2] = 0;
  }
  uVar6 = unaff_x20[5];
  if ((long)uVar6 < (long)uVar4) {
    lVar8 = (long)(lVar7 * uVar4) >> 6;
    lVar7 = lVar8;
    if (uVar6 != 0) {
      lVar7 = uVar4 << uVar4;
      if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d7c68);
        (*pcVar3)();
      }
      lVar1 = lVar7 + 0x7e;
      if (0 < lVar7 + 0x40) {
        lVar1 = lVar7 + 0x3f;
      }
      lVar7 = 0;
      if (lVar8 + 1 != lVar1 >> 6) {
        lVar7 = lVar8 + 1;
      }
    }
    uVar9 = *(ulong *)(unaff_x20[1] + lVar7 * 8);
    unaff_x20[3] = (unaff_x20[4] | uVar9 << (uVar6 & 0x3f)) & lVar5 - 1U;
    uVar2 = uVar4 - uVar6;
    if (SBORROW8(uVar4,uVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d7c64);
      (*pcVar3)();
    }
    lVar5 = 0x20;
    if (lVar7 != 2 || uVar4 != 5) {
      lVar5 = 0x40;
    }
    unaff_x20[4] = uVar9 >> (uVar2 & 0x3f);
    lVar7 = lVar5 - uVar2;
    if (SBORROW8(lVar5,uVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d7c38);
      (*pcVar3)();
    }
  }
  else {
    unaff_x20[3] = unaff_x20[4] & lVar5 - 1U;
    unaff_x20[4] = (ulong)unaff_x20[4] >> uVar4;
    lVar7 = uVar6 - uVar4;
  }
  unaff_x20[5] = lVar7;
  return;
}



/* Address: 0x1007d7cb4 | FUN_1007d7cb4 */

undefined1  [16] FUN_1007d7cb4(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  FUN_1007d7b60();
  if (unaff_x20[3] != 0) {
    uVar3 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar3 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar3 <= uVar1) {
      uVar2 = ~uVar3;
    }
    auVar4._0_8_ = uVar1 - uVar2;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1007d7d0c | FUN_1007d7d0c */

void FUN_1007d7d0c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = unaff_x20[3];
  while( true ) {
    if (uVar2 == 0) {
      return;
    }
    uVar3 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar2 = (uVar3 ^ uVar2 ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar1 = 0;
    if (~uVar3 <= uVar2) {
      uVar1 = ~uVar3;
    }
    if (uVar2 - uVar1 == param_1) break;
    FUN_1007d7b60();
    uVar2 = unaff_x20[3];
  }
  return;
}



/* Address: 0x1007d7d74 | FUN_1007d7d74 */

void FUN_1007d7d74(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  while (lVar1 != 0) {
    FUN_1007d7b60();
    lVar1 = *(long *)(unaff_x20 + 0x18);
  }
  return;
}



/* Address: 0x1007d7d98 | FUN_1007d7d98 */

void FUN_1007d7d98(void)

{
  return;
}



/* Address: 0x1007d7d9c | FUN_1007d7d9c */

void FUN_1007d7d9c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007d7db8 | FUN_1007d7db8 */

int FUN_1007d7db8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0xc)) {
    uVar1 = *(byte *)(param_1 + 0xc) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1007d7e0c | FUN_1007d7e0c */

void FUN_1007d7e0c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 6) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Address: 0x1007d7e60 | FUN_1007d7e60 */

undefined1  [16] FUN_1007d7e60(void)

{
  return ZEXT816(0x100f02c40);
}



/* Address: 0x1007d7e70 | thunk_FUN_100422488 */

void thunk_FUN_100422488(void)

{
  FUN_100422488();
  return;
}



/* Address: 0x1007d7e74 | FUN_1007d7e74 */

undefined8 FUN_1007d7e74(void)

{
  return 0x38;
}



/* Address: 0x1007d7e7c | FUN_1007d7e7c */

long FUN_1007d7e7c(ulong param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 1L << (param_1 & 0x3f);
  lVar1 = lVar2 + 3;
  if (-1 < lVar2) {
    lVar1 = lVar2;
  }
  lVar2 = 0;
  if (4 < (long)param_1) {
    lVar2 = lVar1 >> 2;
  }
  return lVar2;
}



/* Address: 0x1007d7ea0 | FUN_1007d7ea0 */

ulong FUN_1007d7ea0(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  if ((long)param_1 < 5) {
    return 0xf;
  }
  lVar3 = 1L << (param_1 & 0x3f);
  uVar1 = lVar3 * 3;
  if (SUB168(SEXT816(lVar3) * SEXT816(3),8) == (long)uVar1 >> 0x3f) {
    return uVar1 >> 2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d7ed8);
  (*pcVar2)();
}



/* Address: 0x1007d7ed8 | thunk_FUN_1007d7edc */

void thunk_FUN_1007d7edc(void)

{
  FUN_1007d7edc();
  return;
}



/* Address: 0x1007d7edc | FUN_1007d7edc */

long FUN_1007d7edc(ulong param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  ulong uVar3;
  
  if ((long)param_1 < 0x10) {
    return 0;
  }
  if (param_1 >> 0x3d == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1 << 2 | 2;
    uVar3 = SUB168(auVar1 * ZEXT816(0x5555555555555556),8);
    if (uVar3 < param_1 + 1) {
      uVar3 = param_1 + 1;
    }
    return 0x40 - LZCOUNT(uVar3 - 1);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d7f2c);
  (*pcVar2)();
}



/* Address: 0x1007d7f2c | FUN_1007d7f2c */

undefined1  [16] FUN_1007d7f2c(ulong param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  ulong local_58;
  undefined8 local_50;
  undefined1 *local_48;
  
  local_50 = 0;
  local_48 = (undefined1 *)0xe000000000000000;
  Swift::_StringGuts::grow(0x32,param_2);
  _swift_bridgeObjectRelease(local_48);
  puVar4 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  local_50 = 0x203a656c61637328;
  local_48 = &DAT_e800000000000000;
  local_58 = param_1 & 0x3f;
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar5,SVar9);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar5.bridgeObject = (void *)0x8000000100db19c0;
  SVar5.str = (char *)0xd000000000000011;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar5,SVar10);
  local_58 = (ulong)param_2.unknown & 0x3f;
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar5,SVar11);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar6.bridgeObject = &DAT_e800000000000000;
  SVar6.str = (char *)0x203a73616962202c;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar6,SVar12);
  local_58 = (long)param_2.unknown >> 6;
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar5,SVar13);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  uVar2 = 0x203a64656573202c;
  SVar7.bridgeObject = &DAT_e800000000000000;
  SVar7.str = (char *)0x203a64656573202c;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar7,SVar14);
  local_58 = param_1;
  FUN_1007d80cc();
  pcVar3 = (char *)0x0;
  SVar5 = Swift::String::_init(&local_58,0x10,0,puVar4,uVar2);
  SVar15.bridgeObject = puVar4;
  SVar15.str = pcVar3;
  Swift::String::append(SVar5,SVar15);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x29;
  SVar16.bridgeObject = puVar4;
  SVar16.str = pcVar3;
  Swift::String::append(SVar8,SVar16);
  auVar1._8_8_ = local_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}



/* Address: 0x1007d80cc | FUN_1007d80cc */

void FUN_1007d80cc(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6608 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe6608 = puVar1;
  return;
}



/* Address: 0x1007d810c | FUN_1007d810c */

undefined1  [16] FUN_1007d810c(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  
  Swift::_StringGuts::grow(0x13,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_1007d7f2c();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = param_1;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(param_2.unknown);
  auVar1._8_8_ = 0x8000000100db19e0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Address: 0x1007d8198 | FUN_1007d8198 */

void FUN_1007d8198(void)

{
  undefined8 *unaff_x20;
  
  FUN_1007d810c(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1007d81a0 | FUN_1007d81a0 */

undefined1  [16]
FUN_1007d81a0(double param_1,char *param_2,_StringGuts param_3,ulong *param_4,void *param_5)

{
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  ulong *puVar4;
  void *pvVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  ulong *local_68;
  code *pcStack_60;
  undefined8 local_58;
  ulong *local_50;
  undefined8 uStack_48;
  String separator;
  
  local_68 = (ulong *)0x0;
  pcStack_60 = (code *)0xe000000000000000;
  puVar4 = param_4;
  pvVar5 = param_5;
  Swift::_StringGuts::grow(0x16,param_3);
  SVar9.bridgeObject = param_3.unknown;
  SVar9.str = param_2;
  SVar11.bridgeObject = pvVar5;
  SVar11.str = (char *)puVar4;
  Swift::String::append(SVar9,SVar11);
  pcVar1 = (char *)*param_4;
  pvVar3 = (void *)param_4[1];
  FUN_1007d7f2c();
  SVar6.bridgeObject = pvVar3;
  SVar6.str = pcVar1;
  SVar12.bridgeObject = pvVar5;
  SVar12.str = (char *)puVar4;
  Swift::String::append(SVar6,SVar12);
  _swift_bridgeObjectRelease(pvVar3);
  SVar7.bridgeObject = (void *)0x8000000100db1a40;
  SVar7.str = (char *)0xd000000000000010;
  SVar13.bridgeObject = pvVar5;
  SVar13.str = (char *)puVar4;
  Swift::String::append(SVar7,SVar13);
  FUN_1007d851c(param_4,param_5);
  pcVar1 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  double::_write((undefined *)&local_68,param_1);
  local_50 = local_68;
  uStack_48 = pcStack_60;
  if (1L << (*param_4 & 0x3f) < 0x80) {
    SVar8.bridgeObject = (void *)0xe300000000000000;
    SVar8.str = (char *)0x20200a;
    SVar14.bridgeObject = pvVar5;
    SVar14.str = pcVar1;
    Swift::String::append(SVar8,SVar14);
    FUN_1007d85b4(param_4,param_5);
    pcStack_60 = FUN_1007d831c;
    local_58 = 0;
    pcVar1 = &DAT_100fe6610;
    local_68 = param_4;
    FUN_1000f7830(&DAT_100fe6610,&DAT_100c791b8);
    pcVar2 = pcVar1;
    FUN_1007d845c();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    SVar9 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(param_4);
    SVar15.bridgeObject = pcVar2;
    SVar15.str = pcVar1;
    Swift::String::append(SVar9,SVar15);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    local_68 = local_50;
    pcStack_60 = (code *)uStack_48;
  }
  auVar10._8_8_ = pcStack_60;
  auVar10._0_8_ = local_68;
  return auVar10;
}



/* Address: 0x1007d831c | FUN_1007d831c */

void FUN_1007d831c(String *param_1,long param_2)

{
  String SVar1;
  
  if (*(char *)(param_2 + 8) == '\x01') {
    SVar1.bridgeObject = (void *)0xe100000000000000;
    SVar1.str = (char *)0x5f;
  }
  else {
    SVar1 = Swift::CustomStringConvertible::get_description();
  }
  *param_1 = SVar1;
  return;
}



/* Address: 0x1007d837c | FUN_1007d837c */

void FUN_1007d837c(undefined8 param_1,undefined8 param_2)

{
  FUN_1007d81a0(0xd000000000000017,0x8000000100db1a00,param_1,param_2);
  return;
}



/* Address: 0x1007d83a0 | FUN_1007d83a0 */

void FUN_1007d83a0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1007d81a0(0xd000000000000017,0x8000000100db1a00,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1007d83c0 | FUN_1007d83c0 */

void FUN_1007d83c0(long param_1)

{
  FUN_1007d81a0(0x626154687361485f,0xea0000000000656c,param_1 + 0x10,param_1 + 0x20);
  return;
}



/* Address: 0x1007d83e8 | FUN_1007d83e8 */

void FUN_1007d83e8(void)

{
  long *unaff_x20;
  
  FUN_1007d81a0(0x626154687361485f,0xea0000000000656c,*unaff_x20 + 0x10,*unaff_x20 + 0x20);
  return;
}



/* Address: 0x1007d8410 | FUN_1007d8410 */

void FUN_1007d8410(void)

{
  long unaff_x20;
  
  FUN_1007d81a0(0xd000000000000012,0x8000000100db1a20,unaff_x20 + 0x10,unaff_x20 + 0x20);
  return;
}



/* Address: 0x1007d8434 | FUN_1007d8434 */

void FUN_1007d8434(void)

{
  long *unaff_x20;
  
  FUN_1007d81a0(0xd000000000000012,0x8000000100db1a20,*unaff_x20 + 0x10,*unaff_x20 + 0x20);
  return;
}



/* Address: 0x1007d845c | FUN_1007d845c */

void FUN_1007d845c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fe6618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe6610;
  FUN_1000f8b08(&DAT_100fe6610,&DAT_100c791b8);
  puVar2 = puVar1;
  FUN_1007d84cc();
  puVar3 = 
  PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__BidirectionalCollection_100ead1a8;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__BidirectionalCollection_100ead1a8
             ,puVar1,&local_28);
  DAT_100fe6618 = puVar3;
  return;
}



/* Address: 0x1007d84cc | FUN_1007d84cc */

void FUN_1007d84cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe6620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe6628;
  FUN_1000f8b08(&DAT_100fe6628,&DAT_100c791c0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fe6620 = puVar2;
  return;
}



/* Address: 0x1007d851c | FUN_1007d851c */

/* WARNING: Removing unreachable block (ram,0x0001007d8578) */
/* WARNING: Removing unreachable block (ram,0x0001007d8580) */
/* WARNING: Removing unreachable block (ram,0x0001007d85b0) */

double FUN_1007d851c(ulong *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007d7748();
  FUN_1007d7b60();
  return (double)(lVar1 != 0) / (double)(1L << (*param_1 & 0x3f));
}



/* Address: 0x1007d85b4 | FUN_1007d85b4 */

/* WARNING: Removing unreachable block (ram,0x0001007d8694) */
/* WARNING: Removing unreachable block (ram,0x0001007d869c) */

ulong FUN_1007d85b4(ulong *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  
  lVar7 = 0;
  if ((*param_1 & 0x3f) != 0x3f) {
    lVar7 = 1L << (*param_1 & 0x3f);
  }
  uVar2 = 0;
  FUN_1007ee6dc(0,lVar7,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar3 = 0;
  FUN_1007d7748();
  if (uVar3 == 0) {
    lVar7 = 0;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    uVar5 = -1L << (*param_1 & 0x3f);
    uVar3 = (uVar5 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_1[1] >> 6);
    uVar4 = 0;
    if (~uVar5 <= uVar3) {
      uVar4 = ~uVar5;
    }
    lVar7 = uVar3 - uVar4;
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_1007ee6dc(uVar4,uVar3 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar3 + 1;
  lVar1 = uVar4 + uVar3 * 0x10;
  *(long *)(lVar1 + 0x20) = lVar7;
  *(undefined1 *)(lVar1 + 0x28) = uVar6;
  FUN_1007d7b60();
  return uVar4;
}


