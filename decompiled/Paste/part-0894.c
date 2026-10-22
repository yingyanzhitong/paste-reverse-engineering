/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009a1f94 | FUN_1009a1f94 */

void FUN_1009a1f94(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x1009a1fa8 | FUN_1009a1fa8 */

void FUN_1009a1fa8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1009a1fb0 | FUN_1009a1fb0 */

void FUN_1009a1fb0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a1fd4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1009a1fd8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009a1fdc | FUN_1009a1fdc */

void FUN_1009a1fdc(void)

{
  long unaff_x20;
  
  FUN_100993560(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009a1fe4 | FUN_1009a1fe4 */

void FUN_1009a1fe4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a2010 | FUN_1009a2010 */

void FUN_1009a2010(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a2044 | FUN_1009a2044 */

void FUN_1009a2044(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10099d330(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1009a2054 | FUN_1009a2054 */

void FUN_1009a2054(void)

{
  FUN_10098521c();
  return;
}



/* Address: 0x1009a206c | FUN_1009a206c */

void FUN_1009a206c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a2090 | FUN_1009a2090 */

void FUN_1009a2090(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a20ec | FUN_1009a20ec */

void FUN_1009a20ec(void)

{
  long unaff_x20;
  
  FUN_10099c150(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1009a2138 | FUN_1009a2138 */

void FUN_1009a2138(void)

{
  FUN_1009871a0(0x30);
  return;
}



/* Address: 0x1009a2140 | FUN_1009a2140 */

void FUN_1009a2140(undefined8 *param_1)

{
  FUN_100988a48(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1009a2154 | FUN_1009a2154 */

void FUN_1009a2154(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1009a2160 | FUN_1009a2160 */

void FUN_1009a2160(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009a21a4 | FUN_1009a21a4 */

void FUN_1009a21a4(void)

{
  long unaff_x20;
  
  FUN_10099c67c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1009a21b4 | FUN_1009a21b4 */

void FUN_1009a21b4(void)

{
  long unaff_x20;
  
  FUN_10099c770(*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009a21c0 | FUN_1009a21c0 */

void FUN_1009a21c0(void)

{
  FUN_1009871a0(0x39);
  return;
}



/* Address: 0x1009a21c8 | FUN_1009a21c8 */

void FUN_1009a21c8(void)

{
  long unaff_x20;
  
  FUN_10099c81c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1009a21dc | FUN_1009a21dc */

void FUN_1009a21dc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10099cb4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009a21e4 | FUN_1009a21e4 */

void FUN_1009a21e4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff1f48 != 0) {
    return;
  }
  puVar1 = &DAT_100ff07c0;
  FUN_1000f8b08(&DAT_100ff07c0,&DAT_100c89400);
  uVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,PTR___type_metadata_for____100eae0c8 + 8,puVar1);
  DAT_100ff1f48 = uVar2;
  return;
}



/* Address: 0x1009a2248 | FUN_1009a2248 */

void FUN_1009a2248(void)

{
  undefined8 uVar1;
  
  if (DAT_100ff1f50 != 0) {
    return;
  }
  uVar1 = 0x44000001;
  _swift_getFunctionTypeMetadata1
            (0x44000001,PTR___type_metadata_for____100eae0c8 + 8,
             PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff1f50 = uVar1;
  return;
}



/* Address: 0x1009a2298 | FUN_1009a2298 */

void FUN_1009a2298(void)

{
  long unaff_x20;
  
  FUN_10099f620(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100f23718,thunk_FUN_1008d678c);
  return;
}



/* Address: 0x1009a22c4 | thunk_FUN_1009a1324 */

void thunk_FUN_1009a1324(void)

{
  FUN_1009a1324();
  return;
}



/* Address: 0x1009a22c8 | thunk_FUN_1009a206c */

void thunk_FUN_1009a206c(void)

{
  FUN_1009a206c();
  return;
}



/* Address: 0x1009a22cc | thunk_FUN_1009a1fb0 */

void thunk_FUN_1009a1fb0(void)

{
  FUN_1009a1fb0();
  return;
}



/* Address: 0x1009a22d0 | thunk_FUN_1009a206c */

void thunk_FUN_1009a206c(void)

{
  FUN_1009a206c();
  return;
}



/* Address: 0x1009a22d4 | thunk_FUN_1009a206c */

void thunk_FUN_1009a206c(void)

{
  FUN_1009a206c();
  return;
}



/* Address: 0x1009a22d8 | thunk_FUN_1009a206c */

void thunk_FUN_1009a206c(void)

{
  FUN_1009a206c();
  return;
}



/* Address: 0x1009a22dc | thunk_FUN_1009a206c */

void thunk_FUN_1009a206c(void)

{
  FUN_1009a206c();
  return;
}



/* Address: 0x1009a22e0 | thunk_FUN_10099ed08 */

void thunk_FUN_10099ed08(void)

{
  FUN_10099ed08();
  return;
}



/* Address: 0x1009a22e4 | thunk_FUN_1009a2140 */

void thunk_FUN_1009a2140(void)

{
  FUN_1009a2140();
  return;
}



/* Address: 0x1009a22e8 | thunk_FUN_1009a2054 */

void thunk_FUN_1009a2054(void)

{
  FUN_1009a2054();
  return;
}



/* Address: 0x1009a22ec | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x1009a22f0 | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  thunk_FUN_100982b98();
  return;
}



/* Address: 0x1009a22f4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a22f8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a22fc | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2300 | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2304 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a2308 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a230c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a2310 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a2314 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a2318 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a231c | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2320 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a2324 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a2328 | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a232c | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2330 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a2334 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a2338 | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a233c | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2340 | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2344 | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a2348 | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}



/* Address: 0x1009a234c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a2350 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a2354 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009a2358 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009a235c | thunk_FUN_1009a1ea0 */

void thunk_FUN_1009a1ea0(void)

{
  FUN_1009a1ea0();
  return;
}


