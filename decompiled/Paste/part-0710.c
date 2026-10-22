/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007c0544 | FUN_1007c0544 */

undefined1  [16] FUN_1007c0544(void)

{
  return ZEXT816(0x100f01d78);
}



/* Address: 0x1007c0554 | FUN_1007c0554 */

void FUN_1007c0554(void)

{
  byte in_w6;
  
  if (in_w6 < 0xfe) {
    FUN_1007ba1b4();
  }
  return;
}



/* Address: 0x1007c0590 | FUN_1007c0590 */

void FUN_1007c0590(void)

{
  byte in_w6;
  
  if (in_w6 < 0xfe) {
    FUN_1007ba1b4();
  }
  return;
}



/* Address: 0x1007c05cc | FUN_1007c05cc */

void FUN_1007c05cc(void)

{
  byte in_w6;
  
  if (in_w6 < 0xfe) {
    FUN_1007bf700();
  }
  return;
}



/* Address: 0x1007c0608 | FUN_1007c0608 */

void FUN_1007c0608(void)

{
  byte in_w6;
  
  if (in_w6 < 0xfe) {
    FUN_1007bf700();
  }
  return;
}



/* Address: 0x1007c0644 | FUN_1007c0644 */

void FUN_1007c0644(void)

{
  FUN_1007b35f0();
  return;
}



/* Address: 0x1007c064c | FUN_1007c064c */

void FUN_1007c064c(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = param_1;
  local_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&local_30);
  return;
}



/* Address: 0x1007c0680 | FUN_1007c0680 */

void FUN_1007c0680(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    FUN_1007b8c0c();
    (*param_3)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Address: 0x1007c06d8 | thunk_FUN_1007ba094 */

void thunk_FUN_1007ba094(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 1 | param_2 << 7;
  return;
}



/* Address: 0x1007c06dc | thunk_FUN_1007b8d90 */

void thunk_FUN_1007b8d90(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1007c06e0 | thunk_FUN_1005656bc */

byte thunk_FUN_1005656bc(long param_1)

{
  return *(byte *)(param_1 + 0x30) >> 7;
}



/* Address: 0x1007c06e4 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c06e8 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c06ec | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c06f0 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c06f4 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c06f8 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c06fc | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c0700 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c0704 | thunk_FUN_1007b8bb8 */

void thunk_FUN_1007b8bb8(void)

{
  FUN_1007b8bb8();
  return;
}



/* Address: 0x1007c0708 | FUN_1007c0708 */

void FUN_1007c0708(void)

{
  byte in_w6;
  
  if (in_w6 < 0xfe) {
    FUN_1007ba1b4();
  }
  return;
}



/* Address: 0x1007c070c | thunk_FUN_1007c0590 */

void thunk_FUN_1007c0590(void)

{
  FUN_1007c0590();
  return;
}



/* Address: 0x1007c0710 | thunk_FUN_1007b8f08 */

void thunk_FUN_1007b8f08(void)

{
  FUN_1007b8f08();
  return;
}



/* Address: 0x1007c0714 | thunk_FUN_100319fdc */

void thunk_FUN_100319fdc(void)

{
  FUN_100319fdc();
  return;
}



/* Address: 0x1007c0718 | thunk_FUN_1007b9110 */

void thunk_FUN_1007b9110(void)

{
  thunk_FUN_1007b9110();
  return;
}



/* Address: 0x1007c071c | thunk_FUN_1007bf7f8 */

void thunk_FUN_1007bf7f8(void)

{
  thunk_FUN_1007bf7f8();
  return;
}



/* Address: 0x1007c0720 | thunk_FUN_1007bf4d8 */

void thunk_FUN_1007bf4d8(void)

{
  thunk_FUN_1007bf4d8();
  return;
}



/* Address: 0x1007c0724 | thunk_FUN_1000947cc */

void thunk_FUN_1000947cc(void)

{
  thunk_FUN_1000947cc();
  return;
}



/* Address: 0x1007c0728 | thunk_FUN_1007bb3c0 */

void thunk_FUN_1007bb3c0(void)

{
  FUN_1007bb3c0();
  return;
}



/* Address: 0x1007c072c | thunk_FUN_1007b5f00 */

void thunk_FUN_1007b5f00(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 0x18);
  FUN_1007b8e0c(uVar1);
  return;
}



/* Address: 0x1007c0730 | thunk_FUN_1007ba040 */

void thunk_FUN_1007ba040(void)

{
  FUN_1007ba040();
  return;
}



/* Address: 0x1007c0734 | thunk_FUN_1007bf0b0 */

void thunk_FUN_1007bf0b0(void)

{
  thunk_FUN_1007bf0b0();
  return;
}



/* Address: 0x1007c0738 | thunk_FUN_1007b5c90 */

void thunk_FUN_1007b5c90(void)

{
  thunk_FUN_1007b5c90();
  return;
}



/* Address: 0x1007c073c | thunk_FUN_1007b8f20 */

void thunk_FUN_1007b8f20(void)

{
  thunk_FUN_1007b8f20();
  return;
}



/* Address: 0x1007c0740 | thunk_FUN_1007b8f7c */

void thunk_FUN_1007b8f7c(void)

{
  thunk_FUN_1007b8f7c();
  return;
}



/* Address: 0x1007c0744 | thunk_FUN_1007b9018 */

void thunk_FUN_1007b9018(void)

{
  thunk_FUN_1007b9018();
  return;
}



/* Address: 0x1007c0748 | thunk_FUN_1007b90b0 */

void thunk_FUN_1007b90b0(void)

{
  thunk_FUN_1007b90b0();
  return;
}



/* Address: 0x1007c074c | thunk_FUN_1007ba04c */

void thunk_FUN_1007ba04c(void)

{
  FUN_1007ba04c();
  return;
}



/* Address: 0x1007c0750 | thunk_FUN_1007ba058 */

void thunk_FUN_1007ba058(void)

{
  FUN_1007ba058();
  return;
}



/* Address: 0x1007c0754 | thunk_FUN_1007ba080 */

void thunk_FUN_1007ba080(void)

{
  FUN_1007ba080();
  return;
}



/* Address: 0x1007c0758 | thunk_FUN_1007bf7a8 */

void thunk_FUN_1007bf7a8(void)

{
  thunk_FUN_1007bf7a8();
  return;
}



/* Address: 0x1007c075c | thunk_FUN_1007c0464 */

void thunk_FUN_1007c0464(void)

{
  thunk_FUN_1007c0464();
  return;
}



/* Address: 0x1007c0760 | thunk_FUN_1007bf13c */

void thunk_FUN_1007bf13c(void)

{
  thunk_FUN_1007bf13c();
  return;
}



/* Address: 0x1007c0764 | thunk_FUN_1007bf234 */

void thunk_FUN_1007bf234(void)

{
  thunk_FUN_1007bf234();
  return;
}



/* Address: 0x1007c0768 | thunk_FUN_1007bf390 */

void thunk_FUN_1007bf390(void)

{
  thunk_FUN_1007bf390();
  return;
}



/* Address: 0x1007c076c | thunk_FUN_1007c04ac */

void thunk_FUN_1007c04ac(void)

{
  thunk_FUN_1007c04ac();
  return;
}



/* Address: 0x1007c0770 | thunk_FUN_1007c0500 */

void thunk_FUN_1007c0500(void)

{
  thunk_FUN_1007c0500();
  return;
}



/* Address: 0x1007c0774 | thunk_FUN_100094784 */

void thunk_FUN_100094784(void)

{
  thunk_FUN_100094784();
  return;
}



/* Address: 0x1007c0778 | thunk_FUN_1005656c8 */

void thunk_FUN_1005656c8(void)

{
  FUN_1005656c8();
  return;
}



/* Address: 0x1007c077c | FUN_1007c077c */

void FUN_1007c077c(ulong param_1)

{
  ulong *unaff_x20;
  ulong uVar1;
  
  uVar1 = *unaff_x20;
  if (1 < uVar1) {
    FUN_1007acb10();
    _swift_release(uVar1);
  }
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1007c07c0 | FUN_1007c07c0 */

long FUN_1007c07c0(long param_1)

{
  long lVar1;
  code *pcVar2;
  Optional OVar3;
  undefined8 uVar4;
  long local_30;
  long local_28;
  
  local_30 = 0;
  FUN_1007c0a44(0xff,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar4 = 0;
  FUN_100793c60(0,OVar3.value);
  FUN_100793a74(&local_28,&local_30,uVar4);
  FUN_100793a28(&local_30,OVar3.value);
  lVar1 = local_30;
  if (local_30 != 0) {
    if (local_28 != 0) {
      FUN_1007acb10();
      _swift_release(local_28);
    }
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007c0854);
  (*pcVar2)();
}



/* Address: 0x1007c0854 | FUN_1007c0854 */

code * FUN_1007c0854(void)

{
  return FUN_100004520;
}



/* Address: 0x1007c0868 | FUN_1007c0868 */

void FUN_1007c0868(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  FUN_1007ae2a8();
  _swift_release(uVar1);
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x1007c08a8 | FUN_1007c08a8 */

undefined8
FUN_1007c08a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  Optional OVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = param_1;
  FUN_1007c0a44(0xff,param_4,param_5,param_6);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_100793878(&local_28,&local_30,OVar1.value);
  return local_28;
}



/* Address: 0x1007c0910 | FUN_1007c0910 */

void FUN_1007c0910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  FUN_1007b9238(0,param_4,param_5,param_6);
  lVar1 = 0;
  FUN_1007b8a94(0,param_4,param_5,param_6);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(auStack_78,param_3,lVar1);
  lVar1 = 0;
  FUN_1007c2948(0,param_4,param_5,param_6);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x10))(auStack_a0,param_3,lVar1);
  puVar2 = auStack_78;
  FUN_1007b8a5c(puVar2);
  (**(code **)(lVar4 + 8))(param_3,lVar1);
  puVar3 = puVar2;
  _swift_retain_n(puVar2,2);
  FUN_1007ae058();
  _swift_release(puVar2);
  FUN_1007c08a8(puVar2,puVar2,puVar3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1007c0a20 | FUN_1007c0a20 */

void FUN_1007c0a20(undefined8 param_1)

{
  FUN_1007acb10();
  _swift_release(param_1);
  return;
}



/* Address: 0x1007c0a44 | FUN_1007c0a44 */

void FUN_1007c0a44(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007c0a50 | FUN_1007c0a50 */

void FUN_1007c0a50(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  UnownedSerialExecutor UVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(long *)(unaff_x22 + 0x20) = param_2;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x48) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  _swift_task_switch(FUN_1007c0ac8,UVar1.unknown);
  return;
}



/* Address: 0x1007c0ac8 | FUN_1007c0ac8 */

void FUN_1007c0ac8(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007c0b2c;
  FUN_1007b1fac(plVar1,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1007c0b2c | FUN_1007c0b2c */

void FUN_1007c0b2c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x58));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1007c0b94,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001007c0b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1007c0b94 | FUN_1007c0b94 */

void FUN_1007c0b94(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar3;
  _swift_errorRetain(uVar3);
  puVar1 = &DAT_100fdfb40;
  FUN_1000f7830(&DAT_100fdfb40,&DAT_100c74390);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  _swift_dynamicCast(uVar2,(undefined8 *)(unaff_x22 + 0x10),puVar1,uVar4,7);
  FUN_1005c64f0(uVar2,uVar4,*(undefined8 *)(lVar5 + 0x20));
  _swift_errorRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007c0c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007c0c3c | FUN_1007c0c3c */

void FUN_1007c0c3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  FUN_1007ab850(&local_c0,param_2,param_3,0,0,param_4,param_5,param_6);
  uStack_88 = uStack_b8;
  local_90 = local_c0;
  uStack_78 = uStack_a8;
  uStack_80 = uStack_b0;
  local_70 = local_a0;
  lVar1 = 0;
  FUN_1007b8a94(0,param_4,param_5,param_6);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(&local_60,&local_90,lVar1);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[4] = local_40;
  return;
}



/* Address: 0x1007c0cdc | FUN_1007c0cdc */

void FUN_1007c0cdc(undefined8 *param_1)

{
  long lVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  FUN_1007ab850(&local_d0);
  uStack_98 = uStack_c8;
  local_a0 = local_d0;
  uStack_88 = uStack_b8;
  uStack_90 = uStack_c0;
  local_80 = local_b0;
  lVar1 = 0;
  FUN_1007b8a94(0,in_x4,in_x5,in_x6);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(&local_70,&local_a0,lVar1);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = local_50;
  _swift_retain(in_x3);
  return;
}



/* Address: 0x1007c0d7c | FUN_1007c0d7c */

void FUN_1007c0d7c(undefined8 param_1,undefined8 param_2)

{
  FUN_1007c2954();
  _swift_release(param_2);
  return;
}


