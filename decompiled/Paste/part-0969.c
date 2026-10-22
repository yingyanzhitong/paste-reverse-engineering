/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a63ee8 | FUN_100a63ee8 */

void FUN_100a63ee8(void)

{
  long unaff_x20;
  
  FUN_100aac468(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48)
               );
  return;
}



/* Address: 0x100a63f04 | FUN_100a63f04 */

void FUN_100a63f04(void)

{
  long unaff_x20;
  
  FUN_100aac6c0(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100a63f1c | FUN_100a63f1c */

void FUN_100a63f1c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a63f40 | FUN_100a63f40 */

void FUN_100a63f40(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a63f64 | FUN_100a63f64 */

void FUN_100a63f64(void)

{
  FUN_100a51c64(0x69);
  return;
}



/* Address: 0x100a63f6c | FUN_100a63f6c */

void FUN_100a63f6c(void)

{
  FUN_100a640c4();
  return;
}



/* Address: 0x100a63f80 | FUN_100a63f80 */

void FUN_100a63f80(void)

{
  FUN_100a51c64(0x50);
  return;
}



/* Address: 0x100a63f88 | FUN_100a63f88 */

void FUN_100a63f88(void)

{
  long unaff_x20;
  
  FUN_100aaf2a8(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48)
               );
  return;
}



/* Address: 0x100a63fa4 | FUN_100a63fa4 */

void FUN_100a63fa4(void)

{
  FUN_100a51c64(0x48);
  return;
}



/* Address: 0x100a63fac | FUN_100a63fac */

void FUN_100a63fac(void)

{
  long unaff_x20;
  
  FUN_100ab0168(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100a63fc8 | FUN_100a63fc8 */

void FUN_100a63fc8(void)

{
  FUN_100a51c64(0x3a);
  return;
}



/* Address: 0x100a63fd0 | FUN_100a63fd0 */

void FUN_100a63fd0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a64020 | FUN_100a64020 */

void FUN_100a64020(void)

{
  long unaff_x20;
  
  FUN_100ab10a0(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined4 *)(unaff_x20 + 0x48)
               );
  return;
}



/* Address: 0x100a64040 | FUN_100a64040 */

undefined ** FUN_100a64040(void)

{
  return &PTR_PTR_100f2c500;
}



/* Address: 0x100a6404c | FUN_100a6404c */

undefined ** FUN_100a6404c(void)

{
  return &PTR_PTR_100f2c658;
}



/* Address: 0x100a64058 | FUN_100a64058 */

undefined ** FUN_100a64058(void)

{
  return &PTR_PTR_100f2c678;
}



/* Address: 0x100a64064 | FUN_100a64064 */

undefined ** FUN_100a64064(void)

{
  return &PTR_PTR_100f2c5a8;
}



/* Address: 0x100a64070 | FUN_100a64070 */

undefined1  [16] FUN_100a64070(void)

{
  return ZEXT816(0x100f2c7c0);
}



/* Address: 0x100a64080 | FUN_100a64080 */

undefined1  [16] FUN_100a64080(void)

{
  return ZEXT816(0x100f2c7e8);
}



/* Address: 0x100a64090 | FUN_100a64090 */

undefined1  [16] FUN_100a64090(void)

{
  return ZEXT816(0x100f2c810);
}



/* Address: 0x100a640a0 | FUN_100a640a0 */

undefined1  [16] FUN_100a640a0(void)

{
  return ZEXT816(0x100f2c838);
}



/* Address: 0x100a640b0 | FUN_100a640b0 */

undefined1  [16] FUN_100a640b0(void)

{
  return ZEXT816(0x100f2c860);
}



/* Address: 0x100a640c0 | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a640c4 | FUN_100a640c4 */

void FUN_100a640c4(void)

{
  long unaff_x20;
  
  FUN_100aad238(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48)
                ,*(undefined1 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined1 *)(unaff_x20 + 0x68));
  return;
}



/* Address: 0x100a640ec | FUN_100a640ec */

void FUN_100a640ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a6413c | thunk_FUN_100a4bc88 */

void thunk_FUN_100a4bc88(void)

{
  FUN_100a4bc88();
  return;
}



/* Address: 0x100a64140 | thunk_FUN_1002e20ac */

void thunk_FUN_1002e20ac(void)

{
  FUN_1002e20ac();
  return;
}



/* Address: 0x100a64144 | thunk_FUN_1006c140c */

void thunk_FUN_1006c140c(void)

{
  FUN_1006c140c();
  return;
}



/* Address: 0x100a64148 | thunk_FUN_100a611d4 */

void thunk_FUN_100a611d4(void)

{
  FUN_100a611d4();
  return;
}



/* Address: 0x100a6414c | thunk_FUN_1006f34f0 */

void thunk_FUN_1006f34f0(void)

{
  FUN_1006f34f0();
  return;
}



/* Address: 0x100a64150 | thunk_FUN_100a5ca84 */

void thunk_FUN_100a5ca84(void)

{
  FUN_100a5ca84();
  return;
}



/* Address: 0x100a64154 | thunk_FUN_100a53494 */

void thunk_FUN_100a53494(void)

{
  FUN_100a53494();
  return;
}



/* Address: 0x100a64158 | thunk_FUN_100a5e508 */

void thunk_FUN_100a5e508(void)

{
  FUN_100a5e508();
  return;
}



/* Address: 0x100a6415c | thunk_FUN_1005dbe14 */

void thunk_FUN_1005dbe14(void)

{
  FUN_1005dbe14();
  return;
}



/* Address: 0x100a64160 | thunk_FUN_100a62a4c */

void thunk_FUN_100a62a4c(void)

{
  thunk_FUN_100a62a4c();
  return;
}



/* Address: 0x100a64164 | thunk_FUN_100a5c390 */

void thunk_FUN_100a5c390(void)

{
  FUN_100a5c390();
  return;
}



/* Address: 0x100a64168 | thunk_FUN_100a5c8b4 */

void thunk_FUN_100a5c8b4(void)

{
  FUN_100a5c8b4();
  return;
}



/* Address: 0x100a6416c | thunk_FUN_100a5d274 */

void thunk_FUN_100a5d274(void)

{
  FUN_100a5d274();
  return;
}



/* Address: 0x100a64170 | thunk_FUN_100a5dafc */

void thunk_FUN_100a5dafc(void)

{
  FUN_100a5dafc();
  return;
}



/* Address: 0x100a64174 | FUN_100a64174 */

void FUN_100a64174(void)

{
  FUN_100a63e60();
  return;
}



/* Address: 0x100a64188 | FUN_100a64188 */

void FUN_100a64188(void)

{
  FUN_100a63e7c();
  return;
}



/* Address: 0x100a6419c | FUN_100a6419c */

void FUN_100a6419c(void)

{
  FUN_100a63e98();
  return;
}



/* Address: 0x100a641b0 | FUN_100a641b0 */

void FUN_100a641b0(void)

{
  FUN_100a63fac();
  return;
}



/* Address: 0x100a641c4 | FUN_100a641c4 */

void FUN_100a641c4(void)

{
  FUN_100a51c40();
  return;
}



/* Address: 0x100a641d8 | thunk_FUN_100a5bb04 */

void thunk_FUN_100a5bb04(void)

{
  FUN_100a5bb04();
  return;
}



/* Address: 0x100a641dc | thunk_FUN_100a62630 */

void thunk_FUN_100a62630(void)

{
  thunk_FUN_100a62630();
  return;
}



/* Address: 0x100a641e0 | thunk_FUN_100a5bb54 */

void thunk_FUN_100a5bb54(void)

{
  FUN_100a5bb54();
  return;
}



/* Address: 0x100a641e4 | thunk_FUN_100a15590 */

void thunk_FUN_100a15590(void)

{
  FUN_100a15590();
  return;
}



/* Address: 0x100a641e8 | thunk_FUN_100a0176c */

void thunk_FUN_100a0176c(void)

{
  FUN_100a0176c();
  return;
}



/* Address: 0x100a641ec | FUN_100a641ec */

void FUN_100a641ec(void)

{
  FUN_100a63ecc();
  return;
}



/* Address: 0x100a64200 | FUN_100a64200 */

void FUN_100a64200(void)

{
  FUN_100a63ee8();
  return;
}



/* Address: 0x100a64214 | FUN_100a64214 */

void FUN_100a64214(void)

{
  FUN_100a63f88();
  return;
}



/* Address: 0x100a64228 | thunk_FUN_100a5b3a8 */

void thunk_FUN_100a5b3a8(void)

{
  FUN_100a5b3a8();
  return;
}



/* Address: 0x100a6422c | FUN_100a6422c */

void FUN_100a6422c(void)

{
  FUN_100a63e40();
  return;
}



/* Address: 0x100a64240 | FUN_100a64240 */

void FUN_100a64240(void)

{
  FUN_100a63eb4();
  return;
}



/* Address: 0x100a64254 | FUN_100a64254 */

void FUN_100a64254(void)

{
  FUN_100a63f04();
  return;
}



/* Address: 0x100a64268 | FUN_100a64268 */

void FUN_100a64268(void)

{
  FUN_100a4c054();
  return;
}



/* Address: 0x100a6427c | FUN_100a6427c */

void FUN_100a6427c(void)

{
  FUN_100a616b8();
  return;
}



/* Address: 0x100a64290 | thunk_FUN_100a60eb4 */

void thunk_FUN_100a60eb4(void)

{
  FUN_100a60eb4();
  return;
}



/* Address: 0x100a64294 | thunk_FUN_100a5b424 */

void thunk_FUN_100a5b424(void)

{
  FUN_100a5b424();
  return;
}



/* Address: 0x100a64298 | thunk_FUN_100a5c3d0 */

void thunk_FUN_100a5c3d0(void)

{
  FUN_100a5c3d0();
  return;
}



/* Address: 0x100a6429c | thunk_FUN_100a5c8f4 */

void thunk_FUN_100a5c8f4(void)

{
  FUN_100a5c8f4();
  return;
}



/* Address: 0x100a642a0 | thunk_FUN_100a5d2b4 */

void thunk_FUN_100a5d2b4(void)

{
  FUN_100a5d2b4();
  return;
}



/* Address: 0x100a642a4 | thunk_FUN_100a5e544 */

void thunk_FUN_100a5e544(void)

{
  FUN_100a5e544();
  return;
}


