/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10092cd5c | FUN_10092cd5c */

void FUN_10092cd5c(void)

{
  FUN_10092ce74(&DAT_100fecbc0,&DAT_100c84878);
  return;
}



/* Address: 0x10092cd70 | FUN_10092cd70 */

void FUN_10092cd70(undefined8 param_1)

{
  FUN_10092cef8(param_1,&DAT_100fecbc0,&DAT_100c84878,FUN_100918b90);
  return;
}



/* Address: 0x10092cd8c | FUN_10092cd8c */

void FUN_10092cd8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_10092b974(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x10092ce18 | FUN_10092ce18 */

void FUN_10092ce18(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009187bc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100fece40,
                &DAT_100c84e88,&DAT_100f18410,FUN_10092cedc);
  return;
}



/* Address: 0x10092ce60 | FUN_10092ce60 */

void FUN_10092ce60(void)

{
  FUN_10092ce74(&DAT_100fece40,&DAT_100c84e88);
  return;
}



/* Address: 0x10092ce74 | FUN_10092ce74 */

void FUN_10092ce74(long param_1)

{
  long unaff_x20;
  long lVar1;
  ulong uVar2;
  
  FUN_1000f7830();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)),param_1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10092cedc | FUN_10092cedc */

void FUN_10092cedc(undefined8 param_1)

{
  FUN_10092cef8(param_1,&DAT_100fece40,&DAT_100c84e88,FUN_100918a94);
  return;
}



/* Address: 0x10092cef8 | FUN_10092cef8 */

void FUN_10092cef8(undefined8 param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_1000f7830(param_2,param_3);
  uVar1 = (ulong)*(byte *)(*(long *)(param_2 + -8) + 0x50);
  (*param_4)(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10092cf4c | FUN_10092cf4c */

void FUN_10092cf4c(undefined8 param_1)

{
  FUN_10092cf68(param_1,FUN_1009272b0);
  return;
}



/* Address: 0x10092cf68 | FUN_10092cf68 */

void FUN_10092cf68(undefined8 param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_2)(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10092cf90 | FUN_10092cf90 */

void FUN_10092cf90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10095ef78(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10092cfa8 | FUN_10092cfa8 */

void FUN_10092cfa8(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x10092cfb8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x10092cfbc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10092cfc0 | thunk_FUN_10092cfc4 */

void thunk_FUN_10092cfc4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_deallocObject();
  return;
}



/* Address: 0x10092cfc4 | FUN_10092cfc4 */

void FUN_10092cfc4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_deallocObject();
  return;
}



/* Address: 0x10092d008 | FUN_10092d008 */

void FUN_10092d008(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009263dc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x10092d05c | FUN_10092d05c */

void FUN_10092d05c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x10092d0a0 | FUN_10092d0a0 */

void FUN_10092d0a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100925494(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x10092d0f8 | FUN_10092d0f8 */

void FUN_10092d0f8(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x58);
  return;
}



/* Address: 0x10092d108 | FUN_10092d108 */

void FUN_10092d108(undefined8 *param_1)

{
  FUN_10092b6b0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10092d11c | FUN_10092d11c */

void FUN_10092d11c(void)

{
  long unaff_x20;
  
  FUN_10064c1c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),FUN_1008fa558,FUN_100908090);
  return;
}



/* Address: 0x10092d148 | FUN_10092d148 */

void FUN_10092d148(undefined8 *param_1)

{
  FUN_10092b558(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x10092d184 | FUN_10092d184 */

void FUN_10092d184(void)

{
  long unaff_x20;
  
  FUN_10092b7e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10092d1a0 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1a4 | thunk_FUN_10092bf64 */

void thunk_FUN_10092bf64(void)

{
  FUN_10092bf64();
  return;
}



/* Address: 0x10092d1a8 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1ac | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1b0 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1b4 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1b8 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1bc | thunk_FUN_10092bea0 */

void thunk_FUN_10092bea0(void)

{
  FUN_10092bea0();
  return;
}



/* Address: 0x10092d1c0 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1c4 | thunk_FUN_10092bf64 */

void thunk_FUN_10092bf64(void)

{
  FUN_10092bf64();
  return;
}



/* Address: 0x10092d1c8 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1cc | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1d0 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1d4 | thunk_FUN_10092c028 */

void thunk_FUN_10092c028(void)

{
  FUN_10092c028();
  return;
}



/* Address: 0x10092d1d8 | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1dc | thunk_FUN_10092bf28 */

void thunk_FUN_10092bf28(void)

{
  FUN_10092bf28();
  return;
}



/* Address: 0x10092d1e0 | thunk_FUN_100916cec */

void thunk_FUN_100916cec(void)

{
  FUN_100916cec();
  return;
}



/* Address: 0x10092d1e4 | FUN_10092d1e4 */

void FUN_10092d1e4(void)

{
  FUN_10092bfdc();
  return;
}



/* Address: 0x10092d1f8 | FUN_10092d1f8 */

void FUN_10092d1f8(void)

{
  FUN_10092c04c();
  return;
}



/* Address: 0x10092d20c | FUN_10092d20c */

void FUN_10092d20c(void)

{
  FUN_10092c084();
  return;
}



/* Address: 0x10092d220 | thunk_FUN_10092bc5c */

void thunk_FUN_10092bc5c(void)

{
  FUN_10092bc5c();
  return;
}



/* Address: 0x10092d224 | thunk_FUN_100916b5c */

void thunk_FUN_100916b5c(void)

{
  FUN_100916b5c();
  return;
}



/* Address: 0x10092d228 | thunk_FUN_100916d94 */

void thunk_FUN_100916d94(void)

{
  FUN_100916d94();
  return;
}



/* Address: 0x10092d22c | thunk_FUN_10092880c */

void thunk_FUN_10092880c(void)

{
  FUN_10092880c();
  return;
}



/* Address: 0x10092d230 | thunk_FUN_100917f00 */

void thunk_FUN_100917f00(void)

{
  FUN_100917f00();
  return;
}



/* Address: 0x10092d234 | FUN_10092d234 */

void FUN_10092d234(void)

{
  FUN_10092bf4c();
  return;
}



/* Address: 0x10092d248 | FUN_10092d248 */

void FUN_10092d248(void)

{
  FUN_10092bff8();
  return;
}



/* Address: 0x10092d25c | FUN_10092d25c */

void FUN_10092d25c(void)

{
  FUN_10092c010();
  return;
}



/* Address: 0x10092d270 | FUN_10092d270 */

void FUN_10092d270(void)

{
  FUN_10092c06c();
  return;
}



/* Address: 0x10092d284 | FUN_10092d284 */

void FUN_10092d284(void)

{
  FUN_10092c0a0();
  return;
}



/* Address: 0x10092d298 | FUN_10092d298 */

void FUN_10092d298(void)

{
  FUN_100927488();
  return;
}



/* Address: 0x10092d2ac | FUN_10092d2ac */

void FUN_10092d2ac(void)

{
  FUN_10092cb34();
  return;
}



/* Address: 0x10092d2c0 | thunk_FUN_1009162a8 */

void thunk_FUN_1009162a8(void)

{
  FUN_1009162a8();
  return;
}



/* Address: 0x10092d2c4 | thunk_FUN_100916b1c */

void thunk_FUN_100916b1c(void)

{
  FUN_100916b1c();
  return;
}



/* Address: 0x10092d2c8 | thunk_FUN_100916a48 */

void thunk_FUN_100916a48(void)

{
  FUN_100916a48();
  return;
}



/* Address: 0x10092d2cc | thunk_FUN_100929054 */

void thunk_FUN_100929054(void)

{
  FUN_100929054();
  return;
}



/* Address: 0x10092d2d0 | thunk_FUN_100928d1c */

void thunk_FUN_100928d1c(void)

{
  FUN_100928d1c();
  return;
}



/* Address: 0x10092d2d4 | thunk_FUN_10091409c */

void thunk_FUN_10091409c(void)

{
  FUN_10091409c();
  return;
}



/* Address: 0x10092d2d8 | thunk_FUN_10092c358 */

void thunk_FUN_10092c358(void)

{
  long unaff_x20;
  
  FUN_10092b000(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10092d2dc | thunk_FUN_10092b000 */

void thunk_FUN_10092b000(void)

{
  thunk_FUN_10092b000();
  return;
}


