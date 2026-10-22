/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008c2338 | FUN_1008c2338 */

void FUN_1008c2338(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1008c2340 | FUN_1008c2340 */

void FUN_1008c2340(void)

{
  FUN_1008c2438(FUN_1008bb78c);
  return;
}



/* Address: 0x1008c234c | thunk_FUN_1008c24ac */

void thunk_FUN_1008c24ac(void)

{
  FUN_1008c24ac();
  return;
}



/* Address: 0x1008c2350 | FUN_1008c2350 */

void FUN_1008c2350(undefined8 param_1)

{
  FUN_1008c254c(param_1,FUN_1008c2380);
  return;
}



/* Address: 0x1008c235c | FUN_1008c235c */

void FUN_1008c235c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c2380 | FUN_1008c2380 */

void FUN_1008c2380(void)

{
  FUN_1008c25dc();
  return;
}



/* Address: 0x1008c2394 | thunk_FUN_1008c2398 */

void thunk_FUN_1008c2398(void)

{
  CheckedContinuation CVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),CVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c2398 | FUN_1008c2398 */

void FUN_1008c2398(void)

{
  CheckedContinuation CVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),CVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c242c | FUN_1008c242c */

void FUN_1008c242c(void)

{
  FUN_1008c2438(FUN_1008bac34);
  return;
}



/* Address: 0x1008c2438 | FUN_1008c2438 */

void FUN_1008c2438(code *UNRECOVERED_JUMPTABLE)

{
  CheckedContinuation CVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001008c24a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 +
             ((ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50) + 0x20 &
             ((ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)),uVar2);
  return;
}



/* Address: 0x1008c24ac | FUN_1008c24ac */

void FUN_1008c24ac(void)

{
  CheckedContinuation CVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,CVar1.unknown);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c2540 | FUN_1008c2540 */

void FUN_1008c2540(undefined8 param_1)

{
  FUN_1008c254c(param_1,FUN_1008c27dc);
  return;
}



/* Address: 0x1008c254c | FUN_1008c254c */

void FUN_1008c254c(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000f8b08(&DAT_100feb0c8,&DAT_100c82c50);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CVar1.unknown + -8) + 0x50);
  uVar2 = uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff);
  FUN_1008bbc40(param_1,unaff_x20 + uVar2,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(CVar1.unknown + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8))
                ,uVar3,param_2);
  return;
}



/* Address: 0x1008c25dc | FUN_1008c25dc */

void FUN_1008c25dc(long *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1008bb0e8(*(undefined8 *)(unaff_x20 + 0x20),param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Address: 0x1008c2614 | FUN_1008c2614 */

void FUN_1008c2614(void)

{
  FUN_1008c2658(&DAT_100feb0e0,&DAT_100c82678);
  return;
}



/* Address: 0x1008c2628 | FUN_1008c2628 */

void FUN_1008c2628(void)

{
  FUN_1008c26e0(&DAT_100feb0e0,&DAT_100c82678,FUN_1008befe4);
  return;
}



/* Address: 0x1008c2644 | FUN_1008c2644 */

void FUN_1008c2644(void)

{
  FUN_1008c2658(&DAT_100feb0d8,&DAT_100c82670);
  return;
}



/* Address: 0x1008c2658 | FUN_1008c2658 */

void FUN_1008c2658(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  FUN_1000f7830();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar1 + 0x50) ^ 0xffffffffffffffff);
  lVar3 = *(long *)(lVar1 + 0x40);
  (**(code **)(lVar1 + 8))(unaff_x20 + uVar2,param_1);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar3 + uVar2 + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c26c4 | FUN_1008c26c4 */

void FUN_1008c26c4(void)

{
  FUN_1008c26e0(&DAT_100feb0d8,&DAT_100c82670,FUN_1008bef5c);
  return;
}



/* Address: 0x1008c26e0 | FUN_1008c26e0 */

void FUN_1008c26e0(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  FUN_1000f7830();
  uVar2 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(param_1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8)
           );
                    /* WARNING: Could not recover jumptable at 0x0001008c272c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + uVar2,*puVar1,puVar1[1]);
  return;
}



/* Address: 0x1008c2730 | FUN_1008c2730 */

void FUN_1008c2730(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c2740 | FUN_1008c2740 */

void FUN_1008c2740(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008c0488(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c2748 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008c274c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008c2750 | FUN_1008c2750 */

void FUN_1008c2750(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c2778 | FUN_1008c2778 */

void FUN_1008c2778(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100feb2a0,&DAT_100f0d4e8);
  return;
}



/* Address: 0x1008c278c | thunk_FUN_1008be574 */

void thunk_FUN_1008be574(void)

{
  FUN_1008be574();
  return;
}



/* Address: 0x1008c2790 | thunk_FUN_1008bf198 */

void thunk_FUN_1008bf198(void)

{
  FUN_1008bf198();
  return;
}



/* Address: 0x1008c2794 | thunk_FUN_1008bf1cc */

void thunk_FUN_1008bf1cc(void)

{
  FUN_1008bf1cc();
  return;
}



/* Address: 0x1008c2798 | thunk_FUN_1008c050c */

void thunk_FUN_1008c050c(void)

{
  FUN_1008c050c();
  return;
}



/* Address: 0x1008c279c | thunk_FUN_1008c235c */

void thunk_FUN_1008c235c(void)

{
  FUN_1008c235c();
  return;
}



/* Address: 0x1008c27a0 | thunk_FUN_1008c235c */

void thunk_FUN_1008c235c(void)

{
  FUN_1008c235c();
  return;
}



/* Address: 0x1008c27a4 | thunk_FUN_1008c235c */

void thunk_FUN_1008c235c(void)

{
  FUN_1008c235c();
  return;
}



/* Address: 0x1008c27a8 | thunk_FUN_1008c235c */

void thunk_FUN_1008c235c(void)

{
  FUN_1008c235c();
  return;
}



/* Address: 0x1008c27ac | thunk_FUN_1008c235c */

void thunk_FUN_1008c235c(void)

{
  FUN_1008c235c();
  return;
}



/* Address: 0x1008c27b0 | thunk_FUN_1008c2324 */

void thunk_FUN_1008c2324(void)

{
  FUN_1008c2324();
  return;
}



/* Address: 0x1008c27b4 | thunk_FUN_1008c2324 */

void thunk_FUN_1008c2324(void)

{
  FUN_1008c2324();
  return;
}



/* Address: 0x1008c27b8 | FUN_1008c27b8 */

void FUN_1008c27b8(void)

{
  FUN_1008c0530();
  return;
}



/* Address: 0x1008c27cc | thunk_FUN_1008c2338 */

void thunk_FUN_1008c2338(void)

{
  FUN_1008c2338();
  return;
}



/* Address: 0x1008c27d0 | thunk_FUN_1008c2338 */

void thunk_FUN_1008c2338(void)

{
  FUN_1008c2338();
  return;
}



/* Address: 0x1008c27d4 | thunk_FUN_100611728 */

void thunk_FUN_100611728(void)

{
  thunk_FUN_100611728();
  return;
}



/* Address: 0x1008c27d8 | thunk_FUN_1008bf5a0 */

void thunk_FUN_1008bf5a0(void)

{
  FUN_1008bf5a0();
  return;
}



/* Address: 0x1008c27dc | FUN_1008c27dc */

void FUN_1008c27dc(void)

{
  FUN_1008c2380();
  return;
}



/* Address: 0x1008c27f0 | thunk_FUN_1008bf3dc */

void thunk_FUN_1008bf3dc(void)

{
  thunk_FUN_1008bf3dc();
  return;
}



/* Address: 0x1008c27f4 | thunk_FUN_1008bb640 */

void thunk_FUN_1008bb640(void)

{
  FUN_1008bb640();
  return;
}



/* Address: 0x1008c27f8 | thunk_FUN_1008c18e0 */

void thunk_FUN_1008c18e0(void)

{
  FUN_1008c18e0();
  return;
}



/* Address: 0x1008c27fc | FUN_1008c27fc */

void FUN_1008c27fc(void)

{
  FUN_1008c1008();
  return;
}



/* Address: 0x1008c2810 | thunk_FUN_1008c0ffc */

void thunk_FUN_1008c0ffc(void)

{
  FUN_1008c0ffc();
  return;
}



/* Address: 0x1008c2814 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c2818 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c281c | thunk_FUN_1008c1434 */

void thunk_FUN_1008c1434(void)

{
  thunk_FUN_1008c1434();
  return;
}



/* Address: 0x1008c2820 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c2824 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c2828 | thunk_FUN_10061e53c */

void thunk_FUN_10061e53c(void)

{
  thunk_FUN_10061e53c();
  return;
}



/* Address: 0x1008c282c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008c2830 | thunk_FUN_1008c2398 */

void thunk_FUN_1008c2398(void)

{
  thunk_FUN_1008c2398();
  return;
}



/* Address: 0x1008c2834 | thunk_FUN_1008c24ac */

void thunk_FUN_1008c24ac(void)

{
  thunk_FUN_1008c24ac();
  return;
}



/* Address: 0x1008c2838 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c283c | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1008c2840 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008c2844 | thunk_FUN_1008bb494 */

void thunk_FUN_1008bb494(void)

{
  FUN_1008bb494();
  return;
}



/* Address: 0x1008c2848 | thunk_FUN_1008c1400 */

void thunk_FUN_1008c1400(void)

{
  long unaff_x20;
  
  FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008c284c | thunk_FUN_1008c1340 */

void thunk_FUN_1008c1340(void)

{
  FUN_1008c1340();
  return;
}



/* Address: 0x1008c2850 | FUN_1008c2850 */

undefined8 FUN_1008c2850(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1008c30c0();
  return unaff_x20;
}


