/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10021915c | FUN_10021915c */

void FUN_10021915c(void)

{
  FUN_100126a6c(&DAT_100fb71a0,&DAT_101057878,FUN_100218fbc);
  return;
}



/* Address: 0x100219178 | FUN_100219178 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100219178(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fc6161616161616,0x3fc6161616161616,
                     0x3fc7171717171717,0x3ff0000000000000);
  puVar3 = &DAT_100ec2050;
  _swift_allocObject(&DAT_100ec2050,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec2068;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_101057880 = IVar1;
  return;
}



/* Address: 0x1002192bc | FUN_1002192bc */

undefined8 * FUN_1002192bc(void)

{
  if (DAT_100fb71a8 != -1) {
    _swift_once(&DAT_100fb71a8,FUN_100219178);
  }
  return &DAT_101057880;
}



/* Address: 0x1002192fc | FUN_1002192fc */

void FUN_1002192fc(void)

{
  FUN_100126a6c(&DAT_100fb71a8,&DAT_101057880,FUN_100219178);
  return;
}



/* Address: 0x100219318 | FUN_100219318 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100219318(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  IVar1 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fdd9d9d9d9d9d9e,0x3fdd9d9d9d9d9d9e,
                     0x3fe0101010101010,0x3fbeb851eb851eb8);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fdd9d9d9d9d9d9e,0x3fdd9d9d9d9d9d9e,
                     0x3fe0101010101010,0x3fceb851eb851eb8);
  puVar3 = &DAT_100ec2140;
  _swift_allocObject(&DAT_100ec2140,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = thunk_FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec2158;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_101057888 = IVar1;
  return;
}



/* Address: 0x100219494 | FUN_100219494 */

void FUN_100219494(void)

{
  FUN_100126a6c(&DAT_100fb7170,&DAT_101057888,FUN_100219318);
  return;
}



/* Address: 0x1002194b0 | FUN_1002194b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002194b0(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fee5e5e5e5e5e5e,0x3fee5e5e5e5e5e5e,
                     0x3feefefefefefeff,0x3ff0000000000000);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0,0,0,0x3ff0000000000000);
  puVar3 = &DAT_100ec2000;
  _swift_allocObject(&DAT_100ec2000,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec2018;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_101057890 = IVar1;
  return;
}



/* Address: 0x100219600 | FUN_100219600 */

undefined8 * FUN_100219600(void)

{
  if (DAT_100fb71b0 != -1) {
    _swift_once(&DAT_100fb71b0,FUN_1002194b0);
  }
  return &DAT_101057890;
}



/* Address: 0x100219640 | FUN_100219640 */

void FUN_100219640(void)

{
  FUN_100126a6c(&DAT_100fb71b0,&DAT_101057890,FUN_1002194b0);
  return;
}



/* Address: 0x10021965c | FUN_10021965c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021965c(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fbc1c1c1c1c1c1c,0x3fbc1c1c1c1c1c1c,
                     0x3fbe1e1e1e1e1e1e,0x3ff0000000000000);
  puVar3 = &DAT_100ec1fb0;
  _swift_allocObject(&DAT_100ec1fb0,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec1fc8;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_101057898 = IVar1;
  return;
}



/* Address: 0x100219790 | FUN_100219790 */

undefined8 * FUN_100219790(void)

{
  if (DAT_100fb71b8 != -1) {
    _swift_once(&DAT_100fb71b8,FUN_10021965c);
  }
  return &DAT_101057898;
}



/* Address: 0x1002197d0 | FUN_1002197d0 */

void FUN_1002197d0(void)

{
  FUN_100126a6c(&DAT_100fb71b8,&DAT_101057898,FUN_10021965c);
  return;
}



/* Address: 0x1002197ec | FUN_1002197ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002197ec(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fee5e5e5e5e5e5e,0x3fee5e5e5e5e5e5e,
                     0x3feefefefefefeff,0x3ff0000000000000);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fc6161616161616,0x3fc6161616161616,
                     0x3fc7171717171717,0x3ff0000000000000);
  puVar3 = &DAT_100ec1f60;
  _swift_allocObject(&DAT_100ec1f60,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec1f78;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_1010578a0 = IVar1;
  return;
}



/* Address: 0x10021995c | FUN_10021995c */

undefined8 * FUN_10021995c(void)

{
  if (DAT_100fb71c0 != -1) {
    _swift_once(&DAT_100fb71c0,FUN_1002197ec);
  }
  return &DAT_1010578a0;
}



/* Address: 0x10021999c | FUN_10021999c */

void FUN_10021999c(void)

{
  FUN_100126a6c(&DAT_100fb71c0,&DAT_1010578a0,FUN_1002197ec);
  return;
}



/* Address: 0x1002199b8 | FUN_1002199b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002199b8(void)

{
  DAT_1010578a8 = NSColor::secondaryLabelColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1002199e8 | FUN_1002199e8 */

undefined8 * FUN_1002199e8(void)

{
  if (DAT_100fb71c8 != -1) {
    _swift_once(&DAT_100fb71c8,FUN_1002199b8);
  }
  return &DAT_1010578a8;
}



/* Address: 0x100219a28 | FUN_100219a28 */

void FUN_100219a28(void)

{
  FUN_100126a6c(&DAT_100fb71c8,&DAT_1010578a8,FUN_1002199b8);
  return;
}



/* Address: 0x100219a44 | FUN_100219a44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100219a44(void)

{
  DAT_1010578b0 = NSColor::tertiaryLabelColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x100219a74 | FUN_100219a74 */

void FUN_100219a74(void)

{
  FUN_100126a6c(&DAT_100fb7180,&DAT_1010578b0,FUN_100219a44);
  return;
}



/* Address: 0x100219a90 | FUN_100219a90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100219a90(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  IVar1 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fb4141414141414,0x3fb4141414141414,
                     0x3fb4141414141414,0x3ff0000000000000);
  puVar3 = &DAT_100ec1f10;
  _swift_allocObject(&DAT_100ec1f10,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec1f28;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_1010578b8 = IVar1;
  return;
}



/* Address: 0x100219bc4 | FUN_100219bc4 */

undefined8 * FUN_100219bc4(void)

{
  if (DAT_100fb71d0 != -1) {
    _swift_once(&DAT_100fb71d0,FUN_100219a90);
  }
  return &DAT_1010578b8;
}



/* Address: 0x100219c04 | FUN_100219c04 */

void FUN_100219c04(void)

{
  FUN_100126a6c(&DAT_100fb71d0,&DAT_1010578b8,FUN_100219a90);
  return;
}



/* Address: 0x100219c20 | FUN_100219c20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100219c20(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100219c4c | FUN_100219c4c */

void FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c60 | FUN_100219c60 */

void FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219c68 | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c6c | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c70 | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c74 | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c78 | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c7c | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c80 | thunk_FUN_100219c20 */

void thunk_FUN_100219c20(void)

{
  FUN_100219c20();
  return;
}



/* Address: 0x100219c84 | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c88 | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c8c | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c90 | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c94 | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c98 | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219c9c | thunk_FUN_100219c4c */

void thunk_FUN_100219c4c(long param_1,long param_2)

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



/* Address: 0x100219ca0 | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219ca4 | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219ca8 | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219cac | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219cb0 | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219cb4 | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219cb8 | thunk_FUN_100219c60 */

void thunk_FUN_100219c60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100219cbc | thunk_FUN_100219df4 */

void thunk_FUN_100219df4(void)

{
  FUN_100219df4();
  return;
}



/* Address: 0x100219cc0 | FUN_100219cc0 */

wchar16 FUN_100219cc0(ulong param_1)

{
  return L"$015stwy{|}~"[param_1 & 0xff];
}



/* Address: 0x100219cd4 | FUN_100219cd4 */

void FUN_100219cd4(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar2.unknown = (undefined *)(ulong)(ushort)L"$015stwy{|}~"[bVar1];
  Swift::Hasher::_combine(L"$015stwy{|}~"[bVar1],param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100219d20 | FUN_100219d20 */

void FUN_100219d20(undefined8 param_1,Hasher param_2)

{
  byte *unaff_x20;
  
  Swift::Hasher::_combine(L"$015stwy{|}~"[*unaff_x20],param_2);
  return;
}



/* Address: 0x100219d54 | FUN_100219d54 */

void FUN_100219d54(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar2.unknown = (undefined *)(ulong)(ushort)L"$015stwy{|}~"[bVar1];
  Swift::Hasher::_combine(L"$015stwy{|}~"[bVar1],param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100219d9c | FUN_100219d9c */

void FUN_100219d9c(undefined1 *param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100219df4();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100219dc4 | FUN_100219dc4 */

void FUN_100219dc4(wchar16 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = L"$015stwy{|}~"[*unaff_x20];
  return;
}



/* Address: 0x100219ddc | FUN_100219ddc */

void FUN_100219ddc(void)

{
  ID unaff_x20;
  
  objc_stub::keyCode(unaff_x20);
  FUN_100219df4();
  return;
}



/* Address: 0x100219df4 | FUN_100219df4 */

undefined8 FUN_100219df4(undefined2 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  switch(param_1) {
  case 0x24:
    uVar1 = 0;
switchD_100219e1c_caseD_30:
    return uVar1;
  default:
    return 0xc;
  case 0x30:
    goto switchD_100219e1c_caseD_30;
  case 0x31:
    return 2;
  case 0x35:
    return 3;
  case 0x73:
    return 4;
  case 0x74:
    return 5;
  case 0x77:
    return 6;
  case 0x79:
    return 7;
  case 0x7b:
    return 8;
  case 0x7c:
    return 9;
  case 0x7d:
    return 10;
  case 0x7e:
    return 0xb;
  }
}



/* Address: 0x100219e80 | thunk_FUN_100219e84 */

void thunk_FUN_100219e84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb71d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c368b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c368b4,&DAT_100ec2200);
  DAT_100fb71d8 = pTVar1;
  return;
}



/* Address: 0x100219e84 | FUN_100219e84 */

void FUN_100219e84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb71d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c368b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c368b4,&DAT_100ec2200);
  DAT_100fb71d8 = pTVar1;
  return;
}



/* Address: 0x100219ec4 | FUN_100219ec4 */

int FUN_100219ec4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf4 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xb) {
      iVar2 = 4;
    }
    if (param_2 + 0xb >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100219f40;
        goto LAB_100219f24;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100219f24:
      return ((uint)*param_1 | uVar1 << 8) - 0xb;
    }
  }
LAB_100219f40:
  iVar2 = *param_1 - 0xc;
  if (*param_1 < 0xc) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100219f54 | FUN_100219f54 */

void FUN_100219f54(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0xb) {
    uVar3 = 4;
  }
  if (param_3 + 0xb >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf4 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf5) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100219fd4;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_100219fd4:
      *param_1 = (char)param_2 + '\v';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf5 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf5);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x10021a004 | FUN_10021a004 */

undefined1  [16] FUN_10021a004(void)

{
  return ZEXT816(0x100ec2200);
}



/* Address: 0x10021a014 | FUN_10021a014 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021a014(ulong param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  
  FUN_1002067d4();
  puVar1 = (undefined8 *)PTR__NSAppearanceNameAqua_100ea8fb8;
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined8 *)PTR__NSAppearanceNameDarkAqua_100ea8fc0;
  }
  IVar2 = NSAppearance::appearanceNamed_((ID)&_OBJC_CLASS___NSAppearance,*puVar1);
  if (IVar2 != 0) {
    return IVar2;
  }
  IVar2 = NSAppearance::currentDrawingAppearance((ID)&_OBJC_CLASS___NSAppearance);
  return IVar2;
}



/* Address: 0x10021a0b0 | FUN_10021a0b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_10021a0b0(void)

{
  long lVar1;
  undefined *puVar2;
  InteractionTypes IVar3;
  NSArray *pNVar4;
  MainActor *pMVar5;
  ImageAnalysisOverlayView *self;
  InteractionTypes this;
  _ArrayBuffer _Var6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  TaskPriority TVar13;
  long extraout_x8;
  long extraout_x8_00;
  ID unaff_x20;
  undefined8 *local_e0;
  long local_d8;
  
  puVar2 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar3 = VisionKit::ImageAnalysisOverlayView::InteractionTypes::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(IVar3.unknown + -8) + 0x40));
  objc_stub::subviews(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::setSubviews_(unaff_x20,pNVar4);
  pMVar5 = (MainActor *)objc_stub::image(unaff_x20);
  if (pMVar5 != (MainActor *)0x0) {
    local_d8 = (long)&local_e0 - extraout_x8;
    self = VisionKit::ImageAnalysisOverlayView::typeMetadataAccessor();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    this.unknown = (undefined *)objc_stub::init((ID)self);
    VisionKit::ImageAnalysisOverlayView::InteractionTypes::get_automatic(this);
    IVar3.unknown = this.unknown;
    VisionKit::ImageAnalysisOverlayView::set_preferredInteractionTypes
              ((ImageAnalysisOverlayView *)this.unknown,
               (undefined *)
               (((long)&local_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    VisionKit::ImageAnalysisOverlayView::_set_trackingImageView
              ((ImageAnalysisOverlayView *)IVar3.unknown);
    _Var6.unknown = &DAT_100fb7040;
    FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
    _swift_initStackObject();
    *(undefined8 *)(_Var6.unknown + 0x18) = 3;
    *(undefined8 *)(_Var6.unknown + 0x10) = 1;
    *(undefined **)(_Var6.unknown + 0x20) = this.unknown;
    IVar3.unknown = this.unknown;
    if (((ulong)_Var6.unknown & 0xc000000000000001) != 0) {
      IVar3.unknown = (undefined *)0x0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var6);
    }
    pMVar7 = Swift::MainActor::typeMetadataAccessor();
    puVar2 = PTR_typeMetadataAccessor_100eaec10;
    pMVar8 = Swift::MainActor::get_shared(pMVar7,pMVar7);
    puVar9 = &DAT_100fb6f30;
    FUN_100003a00(&DAT_100fb6f30,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    local_e0 = puVar9;
    UVar10 = Swift::Actor::get_unownedExecutor();
    UVar11 = UVar10;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar11.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar10.unknown,puVar9);
    }
    objc_stub::addSubview_(unaff_x20,IVar3.unknown);
    objc_stub::setTranslatesAutoresizingMaskIntoConstraints_((ID)IVar3.unknown,0);
    _swift_release(pMVar8);
    if (DAT_100fb6230 != -1) {
      _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
    }
    FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768);
    puVar2 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    puVar12 = &DAT_100fb7050;
    FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
    *(undefined **)(puVar2 + 0x38) = puVar12;
    *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_100ec00b8;
    *(ID *)(puVar2 + 0x20) = unaff_x20;
    puVar12 = puVar2;
    thunk_FUN_1001f9238(puVar2);
    _swift_setDeallocating(puVar2);
    FUN_100004594(puVar2 + 0x20);
    FUN_10000ec2c(0,&DAT_100fb7ae0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar4);
    _swift_bridgeObjectRelease(puVar12);
    _swift_setDeallocating(_Var6.unknown);
    _swift_arrayDestroy(_Var6.unknown + 0x20,*(undefined8 *)(_Var6.unknown + 0x10),
                        PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
    TVar13 = Swift::TaskPriority::typeMetadataAccessor();
    lVar1 = local_d8;
    (**(code **)(*(long *)(TVar13.unknown + -8) + 0x38))(local_d8,1,1,TVar13.unknown);
    pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar5);
    puVar2 = &DAT_100ec2278;
    _swift_allocObject(&DAT_100ec2278,0x30,7);
    *(MainActor **)(puVar2 + 0x10) = pMVar7;
    *(undefined8 **)(puVar2 + 0x18) = local_e0;
    *(MainActor **)(puVar2 + 0x20) = pMVar5;
    *(undefined **)(puVar2 + 0x28) = this.unknown;
    FUN_10020ae18(0,0,lVar1,&DAT_100c36988,puVar2);
    _swift_release();
  }
  return 0;
}



/* Address: 0x10021a4e0 | FUN_10021a4e0 */

void FUN_10021a4e0(void)

{
  undefined *puVar1;
  AnalysisTypes AVar2;
  ulong uVar3;
  Configuration CVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 in_x3;
  undefined8 in_x4;
  long lVar8;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  AVar2 = VisionKit::ImageAnalyzer::AnalysisTypes::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = AVar2.unknown;
  lVar8 = *(long *)(AVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  CVar4 = VisionKit::ImageAnalyzer::Configuration::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = CVar4.unknown;
  lVar8 = *(long *)(CVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x58) = pMVar5;
  puVar6 = &DAT_100fb6f30;
  FUN_100003a00(&DAT_100fb6f30,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x60) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0x68) = puVar6;
  _swift_task_switch(FUN_10021a5c0,UVar7.unknown,puVar6);
  return;
}


