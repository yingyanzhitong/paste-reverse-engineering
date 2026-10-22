/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001fe108 | FUN_1001fe108 */

void FUN_1001fe108(void)

{
  long unaff_x20;
  
  FUN_100236188(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1001fe110 | FUN_1001fe110 */

void FUN_1001fe110(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1001fe120 | FUN_1001fe120 */

void FUN_1001fe120(long param_1,long param_2)

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



/* Address: 0x1001fe134 | FUN_1001fe134 */

void FUN_1001fe134(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001fe13c | FUN_1001fe13c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001fe13c(void)

{
  return ZEXT816(0x100f95ff8);
}



/* Address: 0x1001fe15c | FUN_1001fe15c */

undefined8 * FUN_1001fe15c(void)

{
  if (DAT_100fb63e0 != -1) {
    _swift_once(&DAT_100fb63e0,FUN_1001feab8);
  }
  return &DAT_1010577c8;
}



/* Address: 0x1001fe19c | FUN_1001fe19c */

undefined8 * FUN_1001fe19c(void)

{
  if (DAT_100fb63e8 != -1) {
    _swift_once(&DAT_100fb63e8,FUN_1001fec34);
  }
  return &DAT_1010577d0;
}



/* Address: 0x1001fe1dc | FUN_1001fe1dc */

undefined8 * FUN_1001fe1dc(void)

{
  if (DAT_100fb63f0 != -1) {
    _swift_once(&DAT_100fb63f0,FUN_1001ff12c);
  }
  return &DAT_1010577e8;
}



/* Address: 0x1001fe21c | FUN_1001fe21c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe21c(void)

{
  DAT_101057770 =
       NSColor::colorWithRed_green_blue_alpha_
                 ((ID)&_OBJC_CLASS___NSColor,0x3ff0000000000000,0x3ff0000000000000,
                  0x3ff0000000000000,0x3ff0000000000000);
  return;
}



/* Address: 0x1001fe25c | FUN_1001fe25c */

undefined8 * FUN_1001fe25c(void)

{
  if (DAT_100fb63f8 != -1) {
    _swift_once(&DAT_100fb63f8,FUN_1001fe21c);
  }
  return &DAT_101057770;
}



/* Address: 0x1001fe29c | FUN_1001fe29c */

void FUN_1001fe29c(void)

{
  FUN_100126a6c(&DAT_100fb63f8,&DAT_101057770,FUN_1001fe21c);
  return;
}



/* Address: 0x1001fe2b8 | FUN_1001fe2b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe2b8(void)

{
  DAT_101057778 =
       NSColor::colorWithRed_green_blue_alpha_((ID)&_OBJC_CLASS___NSColor,0,0,0,0x3ff0000000000000);
  return;
}



/* Address: 0x1001fe2f8 | FUN_1001fe2f8 */

undefined8 * FUN_1001fe2f8(void)

{
  if (DAT_100fb6400 != -1) {
    _swift_once(&DAT_100fb6400,FUN_1001fe2b8);
  }
  return &DAT_101057778;
}



/* Address: 0x1001fe338 | FUN_1001fe338 */

void FUN_1001fe338(void)

{
  FUN_100126a6c(&DAT_100fb6400,&DAT_101057778,FUN_1001fe2b8);
  return;
}



/* Address: 0x1001fe354 | FUN_1001fe354 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fe354(void)

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
                    ((ID)&_OBJC_CLASS___NSColor,0x3fe1d1d1d1d1d1d2,0x3fe1d1d1d1d1d1d2,
                     0x3fe2727272727272,0x3ff0000000000000);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fe3131313131313,0x3fe3131313131313,
                     0x3fe3b3b3b3b3b3b4,0x3ff0000000000000);
  puVar3 = &DAT_100ec0830;
  _swift_allocObject(&DAT_100ec0830,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec0848;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_101057780 = IVar1;
  return;
}



/* Address: 0x1001fe4c8 | FUN_1001fe4c8 */

undefined8 * FUN_1001fe4c8(void)

{
  if (DAT_100fb6408 != -1) {
    _swift_once(&DAT_100fb6408,FUN_1001fe354);
  }
  return &DAT_101057780;
}



/* Address: 0x1001fe508 | FUN_1001fe508 */

void FUN_1001fe508(void)

{
  FUN_100126a6c(&DAT_100fb6408,&DAT_101057780,FUN_1001fe354);
  return;
}



/* Address: 0x1001fe524 | FUN_1001fe524 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe524(void)

{
  DAT_101057788 = NSColor::systemGreenColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fe554 | FUN_1001fe554 */

undefined8 * FUN_1001fe554(void)

{
  if (DAT_100fb6410 != -1) {
    _swift_once(&DAT_100fb6410,FUN_1001fe524);
  }
  return &DAT_101057788;
}



/* Address: 0x1001fe594 | FUN_1001fe594 */

void FUN_1001fe594(void)

{
  FUN_100126a6c(&DAT_100fb6410,&DAT_101057788,FUN_1001fe524);
  return;
}



/* Address: 0x1001fe5b0 | FUN_1001fe5b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe5b0(void)

{
  DAT_101057790 = NSColor::systemBlueColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fe5e0 | FUN_1001fe5e0 */

undefined8 * FUN_1001fe5e0(void)

{
  if (DAT_100fb6418 != -1) {
    _swift_once(&DAT_100fb6418,FUN_1001fe5b0);
  }
  return &DAT_101057790;
}



/* Address: 0x1001fe620 | FUN_1001fe620 */

void FUN_1001fe620(void)

{
  FUN_100126a6c(&DAT_100fb6418,&DAT_101057790,FUN_1001fe5b0);
  return;
}



/* Address: 0x1001fe63c | FUN_1001fe63c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe63c(void)

{
  DAT_101057798 = NSColor::systemRedColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fe66c | FUN_1001fe66c */

undefined8 * FUN_1001fe66c(void)

{
  if (DAT_100fb6420 != -1) {
    _swift_once(&DAT_100fb6420,FUN_1001fe63c);
  }
  return &DAT_101057798;
}



/* Address: 0x1001fe6ac | FUN_1001fe6ac */

void FUN_1001fe6ac(void)

{
  FUN_100126a6c(&DAT_100fb6420,&DAT_101057798,FUN_1001fe63c);
  return;
}



/* Address: 0x1001fe6c8 | FUN_1001fe6c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe6c8(void)

{
  DAT_1010577a0 = NSColor::systemOrangeColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fe6f8 | FUN_1001fe6f8 */

undefined8 * FUN_1001fe6f8(void)

{
  if (DAT_100fb6428 != -1) {
    _swift_once(&DAT_100fb6428,FUN_1001fe6c8);
  }
  return &DAT_1010577a0;
}



/* Address: 0x1001fe738 | FUN_1001fe738 */

void FUN_1001fe738(void)

{
  FUN_100126a6c(&DAT_100fb6428,&DAT_1010577a0,FUN_1001fe6c8);
  return;
}



/* Address: 0x1001fe754 | FUN_1001fe754 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe754(void)

{
  DAT_1010577a8 = NSColor::systemYellowColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fe784 | FUN_1001fe784 */

undefined8 * FUN_1001fe784(void)

{
  if (DAT_100fb6430 != -1) {
    _swift_once(&DAT_100fb6430,FUN_1001fe754);
  }
  return &DAT_1010577a8;
}



/* Address: 0x1001fe7c4 | FUN_1001fe7c4 */

void FUN_1001fe7c4(void)

{
  FUN_100126a6c(&DAT_100fb6430,&DAT_1010577a8,FUN_1001fe754);
  return;
}



/* Address: 0x1001fe7e0 | FUN_1001fe7e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001fe7e0(void)

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
                    ((ID)&_OBJC_CLASS___NSColor,0x3fee5e5e5e5e5e5e,0x3fe6d6d6d6d6d6d7,0,
                     0x3ff0000000000000);
  IVar2 = NSColor::colorWithRed_green_blue_alpha_
                    ((ID)&_OBJC_CLASS___NSColor,0x3fee5e5e5e5e5e5e,0x3fe6d6d6d6d6d6d7,0,
                     0x3ff0000000000000);
  puVar3 = &DAT_100ec07e0;
  _swift_allocObject(&DAT_100ec07e0,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = thunk_FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec07f8;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_1010577b0 = IVar1;
  return;
}



/* Address: 0x1001fe944 | FUN_1001fe944 */

undefined8 * FUN_1001fe944(void)

{
  if (DAT_100fb6438 != -1) {
    _swift_once(&DAT_100fb6438,FUN_1001fe7e0);
  }
  return &DAT_1010577b0;
}



/* Address: 0x1001fe984 | FUN_1001fe984 */

void FUN_1001fe984(void)

{
  FUN_100126a6c(&DAT_100fb6438,&DAT_1010577b0,FUN_1001fe7e0);
  return;
}



/* Address: 0x1001fe9a0 | FUN_1001fe9a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fe9a0(void)

{
  DAT_1010577b8 = NSColor::systemPurpleColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fe9d0 | FUN_1001fe9d0 */

undefined8 * FUN_1001fe9d0(void)

{
  if (DAT_100fb6440 != -1) {
    _swift_once(&DAT_100fb6440,FUN_1001fe9a0);
  }
  return &DAT_1010577b8;
}



/* Address: 0x1001fea10 | FUN_1001fea10 */

void FUN_1001fea10(void)

{
  FUN_100126a6c(&DAT_100fb6440,&DAT_1010577b8,FUN_1001fe9a0);
  return;
}



/* Address: 0x1001fea2c | FUN_1001fea2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001fea2c(void)

{
  DAT_1010577c0 = NSColor::systemPinkColor((ID)&_OBJC_CLASS___NSColor);
  return;
}



/* Address: 0x1001fea5c | FUN_1001fea5c */

undefined8 * FUN_1001fea5c(void)

{
  if (DAT_100fb6448 != -1) {
    _swift_once(&DAT_100fb6448,FUN_1001fea2c);
  }
  return &DAT_1010577c0;
}



/* Address: 0x1001fea9c | FUN_1001fea9c */

void FUN_1001fea9c(void)

{
  FUN_100126a6c(&DAT_100fb6448,&DAT_1010577c0,FUN_1001fea2c);
  return;
}



/* Address: 0x1001feab8 | FUN_1001feab8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001feab8(void)

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
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3feb333333333333);
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3feb333333333333);
  puVar3 = &DAT_100ec08d0;
  _swift_allocObject(&DAT_100ec08d0,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = thunk_FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec08e8;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_1010577c8 = IVar1;
  return;
}



/* Address: 0x1001fec18 | FUN_1001fec18 */

void FUN_1001fec18(void)

{
  FUN_100126a6c(&DAT_100fb63e0,&DAT_1010577c8,FUN_1001feab8);
  return;
}



/* Address: 0x1001fec34 | FUN_1001fec34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001fec34(void)

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
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3fe0000000000000);
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3fe199999999999a);
  puVar3 = &DAT_100ec0920;
  _swift_allocObject(&DAT_100ec0920,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_40 = thunk_FUN_1001ff49c;
  local_60 = PTR___NSConcreteStackBlock_100ea82a0;
  local_58 = 0x42000000;
  local_50 = FUN_100059c14;
  puStack_48 = &DAT_100ec0938;
  local_38 = puVar3;
  aBlock = __Block_copy(&local_60);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_38);
  DAT_1010577d0 = IVar1;
  return;
}



/* Address: 0x1001fed8c | FUN_1001fed8c */

void FUN_1001fed8c(void)

{
  FUN_100126a6c(&DAT_100fb63e8,&DAT_1010577d0,FUN_1001fec34);
  return;
}



/* Address: 0x1001feda8 | FUN_1001feda8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001feda8(void)

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
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3fd0a3d70a3d70a4);
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3fd0a3d70a3d70a4);
  puVar3 = &DAT_100ec0790;
  _swift_allocObject(&DAT_100ec0790,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = thunk_FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec07a8;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_1010577d8 = IVar1;
  return;
}



/* Address: 0x1001fef10 | FUN_1001fef10 */

undefined8 * FUN_1001fef10(void)

{
  if (DAT_100fb6450 != -1) {
    _swift_once(&DAT_100fb6450,FUN_1001feda8);
  }
  return &DAT_1010577d8;
}



/* Address: 0x1001fef50 | FUN_1001fef50 */

void FUN_1001fef50(void)

{
  FUN_100126a6c(&DAT_100fb6450,&DAT_1010577d8,FUN_1001feda8);
  return;
}



/* Address: 0x1001fef6c | FUN_1001fef6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001fef6c(void)

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
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3fb999999999999a);
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3fb999999999999a);
  puVar3 = &DAT_100ec0740;
  _swift_allocObject(&DAT_100ec0740,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = thunk_FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec0758;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_1010577e0 = IVar1;
  return;
}



/* Address: 0x1001ff0d0 | FUN_1001ff0d0 */

undefined8 * FUN_1001ff0d0(void)

{
  if (DAT_100fb6458 != -1) {
    _swift_once(&DAT_100fb6458,FUN_1001fef6c);
  }
  return &DAT_1010577e0;
}



/* Address: 0x1001ff110 | FUN_1001ff110 */

void FUN_1001ff110(void)

{
  FUN_100126a6c(&DAT_100fb6458,&DAT_1010577e0,FUN_1001fef6c);
  return;
}



/* Address: 0x1001ff12c | FUN_1001ff12c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001ff12c(void)

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
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3fa999999999999a);
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3fa999999999999a);
  puVar3 = &DAT_100ec0880;
  _swift_allocObject(&DAT_100ec0880,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = thunk_FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec0898;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_1010577e8 = IVar1;
  return;
}



/* Address: 0x1001ff290 | FUN_1001ff290 */

void FUN_1001ff290(void)

{
  FUN_100126a6c(&DAT_100fb63f0,&DAT_1010577e8,FUN_1001ff12c);
  return;
}



/* Address: 0x1001ff2ac | FUN_1001ff2ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001ff2ac(void)

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
  
  IVar1 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  IVar1 = NSColor::colorWithAlphaComponent_(IVar1,0x3f947ae147ae147b);
  IVar2 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3f947ae147ae147b);
  puVar3 = &DAT_100ec06f0;
  _swift_allocObject(&DAT_100ec06f0,0x20,7);
  *(ID *)(puVar3 + 0x10) = IVar2;
  *(ID *)(puVar3 + 0x18) = IVar1;
  local_50 = FUN_1001ff49c;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059c14;
  puStack_58 = &DAT_100ec0708;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  IVar1 = NSColor::colorWithName_dynamicProvider_((ID)&_OBJC_CLASS___NSColor,0,aBlock);
  __Block_release(aBlock);
  _swift_release(local_48);
  DAT_1010577f0 = IVar1;
  return;
}



/* Address: 0x1001ff414 | FUN_1001ff414 */

undefined8 * FUN_1001ff414(void)

{
  if (DAT_100fb6460 != -1) {
    _swift_once(&DAT_100fb6460,FUN_1001ff2ac);
  }
  return &DAT_1010577f0;
}



/* Address: 0x1001ff454 | FUN_1001ff454 */

void FUN_1001ff454(void)

{
  FUN_100126a6c(&DAT_100fb6460,&DAT_1010577f0,FUN_1001ff2ac);
  return;
}



/* Address: 0x1001ff470 | FUN_1001ff470 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ff470(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1001ff49c | FUN_1001ff49c */

void FUN_1001ff49c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100206e50(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1001ff4a4 | FUN_1001ff4a4 */

void FUN_1001ff4a4(long param_1,long param_2)

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



/* Address: 0x1001ff4b8 | FUN_1001ff4b8 */

void FUN_1001ff4b8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001ff4c0 | thunk_FUN_1001ff470 */

void thunk_FUN_1001ff470(void)

{
  FUN_1001ff470();
  return;
}



/* Address: 0x1001ff4c4 | thunk_FUN_1001ff470 */

void thunk_FUN_1001ff470(void)

{
  FUN_1001ff470();
  return;
}



/* Address: 0x1001ff4c8 | thunk_FUN_1001ff470 */

void thunk_FUN_1001ff470(void)

{
  FUN_1001ff470();
  return;
}



/* Address: 0x1001ff4cc | thunk_FUN_1001ff470 */

void thunk_FUN_1001ff470(void)

{
  FUN_1001ff470();
  return;
}


