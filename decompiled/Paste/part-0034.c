/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000630d0 | FUN_1000630d0 */

void FUN_1000630d0(long param_1,long param_2)

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



/* Address: 0x1000630e4 | FUN_1000630e4 */

void FUN_1000630e4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000630ec | FUN_1000630ec */

void FUN_1000630ec(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x100063110 | FUN_100063110 */

void FUN_100063110(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x10006313c | FUN_10006313c */

undefined8 FUN_10006313c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100063180 | thunk_FUN_1000abb0c */

void thunk_FUN_1000abb0c(void)

{
  FUN_1000abb0c();
  return;
}



/* Address: 0x100063184 | thunk_FUN_1000abb20 */

void thunk_FUN_1000abb20(void)

{
  FUN_1000abb20();
  return;
}



/* Address: 0x100063188 | thunk_FUN_1000ab9e4 */

void thunk_FUN_1000ab9e4(void)

{
  FUN_1000ab9e4();
  return;
}



/* Address: 0x10006318c | thunk_FUN_1000ab9f8 */

void thunk_FUN_1000ab9f8(void)

{
  FUN_1000ab9f8();
  return;
}



/* Address: 0x100063190 | FUN_100063190 */

void FUN_100063190(void)

{
  FUN_100016eac(&DAT_100fa9608,&DAT_100fa9610,&DAT_100c268b8,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x1000631c4 | thunk_FUN_100008284 */

void thunk_FUN_100008284(void)

{
  FUN_100008284();
  return;
}



/* Address: 0x1000631c8 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631cc | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631d0 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631d4 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631d8 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631dc | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631e0 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631e4 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  thunk_FUN_1000629a8();
  return;
}



/* Address: 0x1000631e8 | thunk_FUN_100062a48 */

void thunk_FUN_100062a48(void)

{
  thunk_FUN_100062a48();
  return;
}



/* Address: 0x1000631ec | FUN_1000631ec */

undefined8 FUN_1000631ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_b0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(local_98);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_98[0];
}



/* Address: 0x1000632cc | FUN_1000632cc */

void FUN_1000632cc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x10,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uStack_78 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uStack_68 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1000633b4 | FUN_1000633b4 */

void FUN_1000633b4(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x1000633c8 | FUN_1000633c8 */

undefined8 FUN_1000633c8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_b0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(local_98);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_98[0];
}



/* Address: 0x1000634ac | FUN_1000634ac */

void FUN_1000634ac(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x48,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x50);
  uVar3 = *(undefined8 *)(lVar1 + 0x48);
  uStack_78 = *(undefined8 *)(lVar1 + 0x60);
  uVar6 = *(undefined8 *)(lVar1 + 0x58);
  uStack_68 = *(undefined8 *)(lVar1 + 0x70);
  uVar4 = *(undefined8 *)(lVar1 + 0x68);
  uVar2 = *(undefined8 *)(lVar1 + 0x78);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100063598 | FUN_100063598 */

void FUN_100063598(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x1000635ac | FUN_1000635ac */

undefined8 FUN_1000635ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x80,auStack_b0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(local_98);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_98[0];
}



/* Address: 0x10006368c | FUN_10006368c */

void FUN_10006368c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x80,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x88);
  uVar3 = *(undefined8 *)(lVar1 + 0x80);
  uStack_78 = *(undefined8 *)(lVar1 + 0x98);
  uVar6 = *(undefined8 *)(lVar1 + 0x90);
  uStack_68 = *(undefined8 *)(lVar1 + 0xa8);
  uVar4 = *(undefined8 *)(lVar1 + 0xa0);
  uVar2 = *(undefined8 *)(lVar1 + 0xb0);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100063774 | FUN_100063774 */

void FUN_100063774(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x100063788 | FUN_100063788 */

undefined8 FUN_100063788(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [24];
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0xb8,auStack_b0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x20 + 200);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe8);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(local_98);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_98[0];
}



/* Address: 0x10006386c | FUN_10006386c */

void FUN_10006386c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0xb8,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0xc0);
  uVar3 = *(undefined8 *)(lVar1 + 0xb8);
  uStack_78 = *(undefined8 *)(lVar1 + 0xd0);
  uVar6 = *(undefined8 *)(lVar1 + 200);
  uStack_68 = *(undefined8 *)(lVar1 + 0xe0);
  uVar4 = *(undefined8 *)(lVar1 + 0xd8);
  uVar2 = *(undefined8 *)(lVar1 + 0xe8);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100063958 | FUN_100063958 */

void FUN_100063958(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x10006396c | FUN_10006396c */

void FUN_10006396c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  uVar4 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  _swift_retain(uVar4);
  FUN_1002cb5a0(&local_58,uVar4,param_5,param_6);
  return;
}



/* Address: 0x1000639e8 | FUN_1000639e8 */

undefined8 FUN_1000639e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0xf0,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x120);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_88;
}



/* Address: 0x100063ac4 | FUN_100063ac4 */

void FUN_100063ac4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0xf0,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0xf8);
  uVar3 = *(undefined8 *)(lVar1 + 0xf0);
  uStack_78 = *(undefined8 *)(lVar1 + 0x108);
  uVar6 = *(undefined8 *)(lVar1 + 0x100);
  uStack_68 = *(undefined8 *)(lVar1 + 0x118);
  uVar4 = *(undefined8 *)(lVar1 + 0x110);
  uVar2 = *(undefined8 *)(lVar1 + 0x120);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100063bac | FUN_100063bac */

void FUN_100063bac(void)

{
  FUN_100063da0();
  return;
}



/* Address: 0x100063bc0 | FUN_100063bc0 */

undefined8 FUN_100063bc0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x128),auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x158);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_88;
}



/* Address: 0x100063ca0 | FUN_100063ca0 */

void FUN_100063ca0(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess((undefined8 *)(lVar1 + 0x128),auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x130);
  uVar3 = *(undefined8 *)(lVar1 + 0x128);
  uStack_78 = *(undefined8 *)(lVar1 + 0x140);
  uVar6 = *(undefined8 *)(lVar1 + 0x138);
  uStack_68 = *(undefined8 *)(lVar1 + 0x150);
  uVar4 = *(undefined8 *)(lVar1 + 0x148);
  uVar2 = *(undefined8 *)(lVar1 + 0x158);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100063d8c | FUN_100063d8c */

void FUN_100063d8c(void)

{
  FUN_100063da0();
  return;
}



/* Address: 0x100063da0 | FUN_100063da0 */

void FUN_100063da0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  _swift_getKeyPath(param_5);
  _swift_getKeyPath(param_6);
  local_38 = uVar2;
  _swift_retain(uVar1);
  FUN_1002cb5a0(&local_38,uVar1,param_5,param_6);
  return;
}



/* Address: 0x100063e0c | FUN_100063e0c */

void FUN_100063e0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  if (DAT_100fab8f0 != -1) {
    _swift_once(&DAT_100fab8f0,FUN_1000affa8);
  }
  uVar2 = DAT_101057070;
  uVar1 = DAT_101057068;
  _swift_getKeyPath(&DAT_100c26a58);
  _swift_getKeyPath(&DAT_100c26a80);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = 0;
  _swift_retain();
  FUN_1002cb5a0(&local_58);
  if (DAT_100fab8e8 != -1) {
    _swift_once(&DAT_100fab8e8,FUN_1000affd4);
  }
  uVar2 = DAT_101057060;
  uVar1 = DAT_101057058;
  _swift_getKeyPath(&DAT_100c26aa0);
  _swift_getKeyPath(&DAT_100c26ac8);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = 0;
  _swift_retain();
  FUN_1002cb5a0(&local_58);
  if (DAT_100fab8e0 != -1) {
    _swift_once(&DAT_100fab8e0,FUN_1000b0000);
  }
  uVar2 = DAT_101057050;
  uVar1 = DAT_101057048;
  _swift_getKeyPath(&DAT_100c26ae8);
  _swift_getKeyPath(&DAT_100c26b10);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = 0;
  _swift_retain();
  FUN_1002cb5a0(&local_58);
  if (DAT_100fab8d8 != -1) {
    _swift_once(&DAT_100fab8d8,FUN_1000b0028);
  }
  uVar2 = DAT_101057040;
  uVar1 = DAT_101057038;
  _swift_getKeyPath(&DAT_100c26b30);
  _swift_getKeyPath(&DAT_100c26b58);
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = 0;
  _swift_retain();
  FUN_1002cb5a0(&local_58);
  _swift_getKeyPath(&DAT_100c26b78);
  _swift_getKeyPath(&DAT_100c26ba0);
  local_58 = 0x100000;
  _swift_retain();
  FUN_1002cb5a0(&local_58);
  _swift_getKeyPath(&DAT_100c26bc0);
  _swift_getKeyPath(&DAT_100c26be8);
  local_58 = 0x20000;
  _swift_retain();
  FUN_1002cb5a0(&local_58);
  return;
}



/* Address: 0x1000640a4 | FUN_1000640a4 */

void FUN_1000640a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x20 + 200);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd8);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xe8));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x120));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x158));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x160));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x168));
  return;
}



/* Address: 0x100064218 | FUN_100064218 */

void FUN_100064218(void)

{
  FUN_1000640a4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100064238 | FUN_100064238 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100064238(void)

{
  return ZEXT816(0x100fa9658);
}



/* Address: 0x100064258 | FUN_100064258 */

void FUN_100064258(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = &DAT_100c26958;
  _swift_getKeyPath(&DAT_100c26958);
  puVar2 = &DAT_100fa80e0;
  FUN_100038704(&DAT_100fa80e0,FUN_1000386c4,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar3 = &DAT_100faa900;
  FUN_100038704(&DAT_100faa900,FUN_100038774,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_190,puVar1,puVar2,puVar3);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0x10) = local_190;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0x20) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0x30) = local_170;
  *(undefined8 *)(unaff_x20 + 0x40) = local_160;
  _swift_getKeyPath(&DAT_100c26988);
  FUN_1002cb88c(&local_158);
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_150;
  *(undefined8 *)(unaff_x20 + 0x48) = local_158;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_140;
  *(undefined8 *)(unaff_x20 + 0x58) = local_148;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_130;
  *(undefined8 *)(unaff_x20 + 0x68) = local_138;
  *(undefined8 *)(unaff_x20 + 0x78) = local_128;
  _swift_getKeyPath(&DAT_100c269b0);
  FUN_1002cb88c(&local_120);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_118;
  *(undefined8 *)(unaff_x20 + 0x80) = local_120;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_108;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_f8;
  *(undefined8 *)(unaff_x20 + 0xa0) = local_100;
  *(undefined8 *)(unaff_x20 + 0xb0) = local_f0;
  _swift_getKeyPath(&DAT_100c269d8);
  FUN_1002cb88c(&local_e8);
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_e0;
  *(undefined8 *)(unaff_x20 + 0xb8) = local_e8;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_d0;
  *(undefined8 *)(unaff_x20 + 200) = uStack_d8;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_c0;
  *(undefined8 *)(unaff_x20 + 0xd8) = local_c8;
  *(undefined8 *)(unaff_x20 + 0xe8) = local_b8;
  puVar1 = &DAT_100c26a00;
  _swift_getKeyPath(&DAT_100c26a00);
  puVar2 = puVar1;
  FUN_100064478();
  FUN_1002cbe78(&local_b0,puVar1,puVar2);
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0xf0) = local_b0;
  *(undefined8 *)(unaff_x20 + 0x108) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x118) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x110) = local_90;
  *(undefined8 *)(unaff_x20 + 0x120) = local_80;
  _swift_getKeyPath(&DAT_100c26a28);
  FUN_1002cbe78(&local_78);
  *(undefined8 *)(unaff_x20 + 0x130) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x128) = local_78;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x138) = uStack_68;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x148) = local_58;
  *(undefined8 *)(unaff_x20 + 0x158) = local_48;
  puVar1 = &DAT_100fa9730;
  FUN_1000037f0(&DAT_100fa9730,&DAT_100c26a50);
  puVar2 = puVar1;
  _swift_initStaticObject();
  *(undefined **)(unaff_x20 + 0x160) = puVar2;
  _swift_initStaticObject(puVar1,&DAT_100fa9740);
  *(undefined **)(unaff_x20 + 0x168) = puVar1;
  return;
}



/* Address: 0x100064464 | thunk_FUN_1000a1c44 */

void thunk_FUN_1000a1c44(void)

{
  FUN_1000a1c44();
  return;
}



/* Address: 0x100064468 | thunk_FUN_1000a2fb8 */

void thunk_FUN_1000a2fb8(void)

{
  FUN_1000a2fb8();
  return;
}



/* Address: 0x10006446c | thunk_FUN_100095150 */

void thunk_FUN_100095150(void)

{
  FUN_100095150();
  return;
}



/* Address: 0x100064470 | thunk_FUN_1000951bc */

void thunk_FUN_1000951bc(void)

{
  FUN_1000951bc();
  return;
}



/* Address: 0x100064474 | thunk_FUN_10006f3c0 */

void thunk_FUN_10006f3c0(void)

{
  FUN_10006f3c0();
  return;
}



/* Address: 0x100064478 | FUN_100064478 */

void FUN_100064478(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fa64a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000038c0(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c227f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c227f0,uVar1);
  DAT_100fa64a0 = pTVar2;
  return;
}



/* Address: 0x1000644bc | thunk_FUN_10006f364 */

void thunk_FUN_10006f364(void)

{
  FUN_10006f364();
  return;
}



/* Address: 0x1000644c0 | thunk_FUN_1000632cc */

void thunk_FUN_1000632cc(void)

{
  FUN_1000632cc();
  return;
}



/* Address: 0x1000644c4 | FUN_1000644c4 */

void FUN_1000644c4(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x1000644e8 | thunk_FUN_1000634ac */

void thunk_FUN_1000634ac(void)

{
  FUN_1000634ac();
  return;
}



/* Address: 0x1000644ec | FUN_1000644ec */

void FUN_1000644ec(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x100064510 | thunk_FUN_10006368c */

void thunk_FUN_10006368c(void)

{
  FUN_10006368c();
  return;
}



/* Address: 0x100064514 | FUN_100064514 */

void FUN_100064514(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x100064538 | thunk_FUN_10006386c */

void thunk_FUN_10006386c(void)

{
  FUN_10006386c();
  return;
}



/* Address: 0x10006453c | FUN_10006453c */

void FUN_10006453c(void)

{
  FUN_10006396c();
  return;
}



/* Address: 0x100064560 | thunk_FUN_100063ac4 */

void thunk_FUN_100063ac4(void)

{
  FUN_100063ac4();
  return;
}



/* Address: 0x100064564 | FUN_100064564 */

void FUN_100064564(void)

{
  FUN_100063da0();
  return;
}



/* Address: 0x100064588 | thunk_FUN_100063ca0 */

void thunk_FUN_100063ca0(void)

{
  FUN_100063ca0();
  return;
}



/* Address: 0x10006458c | FUN_10006458c */

void FUN_10006458c(void)

{
  FUN_100063da0();
  return;
}


