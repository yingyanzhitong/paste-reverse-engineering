/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100360b5c | FUN_100360b5c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100360b5c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return 0;
}



/* Address: 0x100360b84 | thunk_FUN_100360b88 */

void thunk_FUN_100360b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c42cb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c42cb0,&DAT_100ecca40);
  DAT_100fc1090 = pTVar1;
  return;
}



/* Address: 0x100360b88 | FUN_100360b88 */

void FUN_100360b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c42cb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c42cb0,&DAT_100ecca40);
  DAT_100fc1090 = pTVar1;
  return;
}



/* Address: 0x100360bc8 | thunk_FUN_100360bcc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * thunk_FUN_100360bcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100360bcc | FUN_100360bcc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100360bcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100360c10 | FUN_100360c10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100360c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x100360c74 | FUN_100360c74 */

void FUN_100360c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100360c88 | FUN_100360c88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100360c88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  return param_1;
}



/* Address: 0x100360ccc | FUN_100360ccc */

int FUN_100360ccc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100360d28 | FUN_100360d28 */

void FUN_100360d28(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x100360d7c | FUN_100360d7c */

undefined1  [16] FUN_100360d7c(void)

{
  return ZEXT816(0x100ecc9a8);
}



/* Address: 0x100360d8c | FUN_100360d8c */

undefined1  [16] FUN_100360d8c(void)

{
  return ZEXT816(0x100ecca40);
}



/* Address: 0x100360d9c | FUN_100360d9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100360d9c(undefined8 param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ID IVar3;
  undefined *puVar4;
  NSArray *pNVar5;
  ID IVar6;
  NSString *pNVar7;
  undefined8 uVar8;
  long unaff_x20;
  ID self;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    puVar1 = param_3;
    _swift_bridgeObjectRetain();
    FUN_10032362c();
    puVar2 = param_3;
    FUN_1003216bc();
    if (puVar1 == (undefined1 *)0x0) {
      FUN_100364cd4();
      _swift_allocError(&DAT_100ecca40,puVar2,0,0);
      *puVar2 = 1;
      _swift_willThrow();
      IVar3 = 0;
      goto LAB_100360fb4;
    }
  }
  IVar3 = 0;
  FUN_1003214a8();
  self = *(ID *)(unaff_x20 + 0x10);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_2);
  IVar3 = objc_stub::initWithContext_(IVar3,self);
  puVar4 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(ID *)(puVar4 + 0x20) = IVar3;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  pNVar5 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar4);
  local_70 = 0;
  IVar6 = objc_stub::FUN_100c075e0(self,pNVar5,&local_70);
  if ((IVar6 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar1);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar1);
    objc_stub::setIdentifier_(IVar3,pNVar7);
    uVar8 = 0;
    FUN_100312518(0);
    FUN_100312150(self,uVar8);
    objc_stub::setDevice_(IVar3,self);
    FUN_100360ff8(IVar3,param_3);
  }
LAB_100360fb4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar3;
}



/* Address: 0x100360ff8 | FUN_100360ff8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100360ff8(ID param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  NSString *pNVar3;
  ID IVar4;
  ID self;
  ulong uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_2;
  _swift_bridgeObjectRetain();
  FUN_10032362c();
  uVar5 = uVar2;
  FUN_1003216bc(param_2);
  if (uVar5 != 0) {
    objc_stub::setRawType_(param_1,uVar2 & 0xff);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar5);
    objc_stub::setChecksum_(param_1,pNVar3);
    IVar4 = objc_stub::data(param_1);
    self = objc_stub::managedObjectContext(IVar4);
    objc_stub::deleteObject_(self,IVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    IVar4 = 0;
    FUN_10031b5e4();
    _objc_allocWithZone();
    IVar4 = objc_stub::initWithContext_(IVar4,uVar6);
    _swift_bridgeObjectRetain(param_2);
    FUN_10031a8e8();
    objc_stub::setData_(param_1,IVar4);
    puVar1 = &DAT_100eccb48;
    _swift_allocObject(&DAT_100eccb48,0x20,7);
    *(long *)(puVar1 + 0x10) = unaff_x20;
    *(ID *)(puVar1 + 0x18) = param_1;
    _swift_retain();
    FUN_100322504(&stack0xffffffffffffffb0 + -extraout_x8,param_2,FUN_100364d40,puVar1,uVar2);
    _swift_release(puVar1);
    FUN_10031ed94(&stack0xffffffffffffffb0 + -extraout_x8);
  }
  return;
}



/* Address: 0x1003611b0 | FUN_1003611b0 */

void FUN_1003611b0(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar2 = *(undefined1 **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    puVar2 = (undefined1 *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (puVar2 == (undefined1 *)0x0) {
    FUN_100364cd4();
    _swift_allocError(&DAT_100ecca40,puVar2,0,0);
    *puVar2 = 0;
    _swift_willThrow();
  }
  else {
    puVar3 = param_1;
    FUN_1003214c8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
    if (puVar3 == (undefined *)0x0) {
      FUN_100360d9c();
    }
    else {
      FUN_100360ff8(puVar3,param_1);
    }
  }
  return;
}



/* Address: 0x100361280 | FUN_100361280 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100361280(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  ulong uVar6;
  ID self;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  lVar2 = 0;
  FUN_100317b10();
  lVar9 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)&local_80 - (lVar2 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(param_2 + 0x10);
  FUN_100364d48(param_1,lVar8);
  uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100eccb70;
  _swift_allocObject(&DAT_100eccb70,uVar7 + lVar2,uVar6 | 7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  FUN_1000523d8(lVar8,puVar3 + uVar7,FUN_100317b10);
  puVar4 = &DAT_100eccb98;
  _swift_allocObject(&DAT_100eccb98,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100364ee8;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  local_60 = FUN_100209b34;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_1000d5218;
  puStack_68 = &DAT_100eccbb0;
  local_58 = puVar4;
  aBlock = __Block_copy(&local_80);
  puVar5 = local_58;
  _swift_retain(puVar4);
  _swift_release(puVar5);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar5 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0x99,99,0x36,1);
  _swift_release(puVar4);
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10035ca9c();
    _swift_release(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100361420);
  (*pcVar1)();
}



/* Address: 0x100361420 | FUN_100361420 */

void FUN_100361420(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  puVar1 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_100364d48(param_2,puVar3);
  lVar2 = 0;
  FUN_100317b10();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  FUN_10031ed94(puVar3);
  return;
}



/* Address: 0x1003614c0 | FUN_1003614c0 */

void FUN_1003614c0(undefined8 param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  
  puVar3 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar4 = 0;
  FUN_100325588();
  lVar10 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1003b4444();
  if (lVar5 == 0) {
    (**(code **)(lVar10 + 0x38))(puVar8,1,1,lVar4);
  }
  else {
    FUN_10032670c(puVar8);
    puVar6 = puVar8;
    (**(code **)(lVar10 + 0x30))(puVar8,1,lVar4);
    if ((int)puVar6 != 1) {
      FUN_1000523d8(puVar8,lVar9,FUN_100325588);
      bVar2 = *(byte *)(lVar9 + 0x18);
      FUN_100325d24(lVar9);
      if (1 < bVar2) {
        return;
      }
      goto LAB_1003615ec;
    }
  }
  FUN_100005808(puVar8,&DAT_100fbfa58,&DAT_100c44ed0);
LAB_1003615ec:
  puVar3 = param_2;
  FUN_100361690(param_2,param_1);
  if ((ulong)puVar3 >> 0x3e == 0) {
    uVar7 = *(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    uVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar7 != 0) {
    FUN_100325110();
    if ((uVar7 & 1) == 0) {
      FUN_1003250f0();
      if ((uVar7 & 1) != 0) {
        FUN_1003620f8(puVar3,param_2);
      }
    }
    else {
      FUN_100361ec0(puVar3,param_2);
    }
  }
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x100361690 | FUN_100361690 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100361868) */
/* WARNING: Removing unreachable block (ram,0x000100361af0) */
/* WARNING: Removing unreachable block (ram,0x000100361b20) */

undefined * FUN_100361690(ID param_1,ulong param_2,long param_3,long param_4,undefined8 param_5)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  code *pcVar12;
  ulong uVar13;
  UUID UVar14;
  char *self;
  ID IVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  String SVar21;
  undefined8 local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *local_90 [2];
  code *local_80;
  undefined *local_78;
  undefined8 *local_70;
  
  local_98 = param_3;
  puStack_a0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  lVar16 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_4 + -8);
  local_b0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar20 = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar20 - extraout_x8_01;
  FUN_1003b4444();
  if (puVar7 == (undefined *)0x0) {
    FUN_100325588();
    (**(code **)(*(long *)(puVar7 + -8) + 0x38))(lVar16,1,1,puVar7);
  }
  else {
    FUN_10032670c(lVar16);
    lVar5 = 0;
    FUN_100325588();
    lVar6 = lVar16;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar16,1,lVar5);
    if ((int)lVar6 != 1) {
      FUN_100005808(lVar16,&DAT_100fbfa58,&DAT_100c44ed0);
      goto LAB_100361820;
    }
  }
  FUN_100005808(lVar16,&DAT_100fbfa58,&DAT_100c44ed0);
  bVar4 = (extension_Swift)::Swift::Sequence::_contains();
  if (!bVar4) {
    (**(code **)(lVar17 + 0x10))(puVar20,param_2,param_4);
    uVar8 = 0;
    FUN_1003214a8(0);
    Swift::Array<undefined>::_init(puVar20,uVar8,param_4,param_5);
    return puVar20;
  }
LAB_100361820:
  local_c0 = param_2;
  puVar7 = (undefined *)objc_stub::managedObjectContext(param_1);
  local_b8 = (undefined *)param_5;
  if (puVar7 == (undefined *)0x0) {
    puVar9 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar10 = &DAT_100fbfdb0;
    local_78 = puVar9;
    FUN_100016eac(&DAT_100fbfdb0,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100329088();
    FUN_1003214a8(0);
    (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
    puVar9 = &DAT_100fbe920;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar10 = &DAT_100fbfdb0;
    local_78 = puVar9;
    FUN_100016eac(&DAT_100fbfdb0,&DAT_100fbe920,&DAT_100c408d0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  }
  ppuVar11 = local_90;
  local_90[0] = puVar7;
  local_70 = puVar10;
  FUN_100004640(ppuVar11,puVar9);
  pcVar3 = FUN_100361de0;
  FUN_100193cd8(FUN_100361de0,0,puVar9,PTR___type_metadata_for_Swift_String_100eac208,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar10,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40,
                ppuVar11);
  pcVar12 = pcVar3;
  FUN_10036be78();
  _swift_bridgeObjectRelease(pcVar3);
  FUN_100004594(local_90);
  (**(code **)(lVar17 + 0x10))(puVar20,local_c0,param_4);
  pcVar3 = FUN_100364cb8;
  local_80 = pcVar12;
  (extension_Swift)::Swift::Sequence::_filter();
  _swift_bridgeObjectRelease(pcVar12);
  local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)pcVar3 >> 0x3e == 0) {
    local_b8 = (undefined *)((ulong)pcVar3 & 0xffffffffffffff8);
    uVar18 = *(ulong *)(local_b8 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_b8 = (undefined *)((ulong)pcVar3 & 0xffffffffffffff8);
    _Var1.unknown = local_b8;
    if ((undefined *)0x7fffffffffffffff < pcVar3) {
      _Var1.unknown = pcVar3;
    }
    uVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar7;
  if (uVar18 != 0) {
    uVar19 = 0;
    local_d0 = *(undefined8 *)(local_98 + 0x10);
    local_c0 = (ulong)pcVar3 & 0xc000000000000001;
    do {
      local_c8 = puVar7;
      if (local_c0 == 0) {
        if (*(ulong *)(local_b8 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100361c50);
          (*pcVar3)();
        }
        uVar13 = *(ulong *)(pcVar3 + uVar19 * 8 + 0x20);
      }
      else {
        uVar13 = uVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar19,(_ArrayBuffer)pcVar3);
      }
      lVar16 = local_b0;
      bVar4 = SCARRY8(uVar19,1);
      uVar19 = uVar19 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100361c4c);
        (*pcVar3)();
      }
      UVar14 = Foundation::UUID::init();
      SVar21 = Foundation::UUID::get_uuidString(UVar14);
      self = SVar21.str;
      (**(code **)(local_a8 + 8))(lVar16,puStack_a0);
      IVar15 = objc_stub::data(uVar13);
      FUN_10031b218(IVar15);
      FUN_100360d9c(self,SVar21.bridgeObject,IVar15);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      _swift_bridgeObjectRelease(IVar15);
      FUN_100311d0c(0);
      IVar15 = objc_stub::currentApplication((ID)&_OBJC_CLASS___NSRunningApplication);
      FUN_100311e3c(IVar15,local_d0);
      objc_stub::setSourceApplication_((ID)self,IVar15);
      IVar15 = objc_stub::title(uVar13);
      objc_stub::setTitle_((ID)self,IVar15);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique(0);
      uVar13 = *(ulong *)(((ulong)local_90[0] & 0xffffffffffffff8) + 0x10);
      uVar2 = *(ulong *)(((ulong)local_90[0] & 0xffffffffffffff8) + 0x18);
      if (uVar2 >> 1 <= uVar13) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar13 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar13,self);
      puVar7 = local_90[0];
    } while (uVar19 != uVar18);
  }
  _swift_bridgeObjectRelease(pcVar3);
  return puVar7;
}



/* Address: 0x100361ca0 | FUN_100361ca0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100361ca0(ID *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  puVar1 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  uVar2 = objc_stub::list(*param_1);
  if (uVar2 == 0) {
    return 0;
  }
  FUN_1003250f0();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  FUN_1003b4444();
  if (uVar2 == 0) {
    lVar3 = 0;
    FUN_100325588();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar6,1,1,lVar3);
  }
  else {
    FUN_10032670c(puVar6);
    lVar3 = 0;
    FUN_100325588();
    uVar5 = 1;
    puVar4 = puVar6;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar6,1,lVar3);
    if ((int)puVar4 != 1) goto LAB_100361dac;
  }
  uVar5 = 0;
LAB_100361dac:
  FUN_100005808(puVar6,&DAT_100fbfa58,&DAT_100c44ed0);
  return uVar5;
}



/* Address: 0x100361de0 | FUN_100361de0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100361de0(String *param_1,ID *param_2)

{
  String SVar1;
  
  objc_stub::checksum(*param_2);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar1;
  return 0;
}



/* Address: 0x100361e40 | FUN_100361e40 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100361e40(ID *param_1,undefined8 param_2)

{
  char *pcVar1;
  String SVar2;
  
  objc_stub::checksum(*param_1);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100052458(pcVar1,SVar2.bridgeObject,param_2);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return ((uint)pcVar1 ^ 0xffffffff) & 1;
}



/* Address: 0x100361ec0 | FUN_100361ec0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100361ec0(_ArrayBuffer param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  Date DVar3;
  Date DVar4;
  NSDate *pNVar5;
  ID self;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  uint extraout_w1;
  uint uVar9;
  undefined8 uVar10;
  long extraout_x8;
  long unaff_x20;
  ID IVar11;
  ID IVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *local_80 [3];
  undefined *local_68;
  
  uVar10 = param_2;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  uVar9 = (uint)uVar10;
  lVar13 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  _swift_bridgeObjectRetain();
  FUN_100364108();
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    IVar11 = *(ID *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    IVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar11 == 0) {
    _swift_bridgeObjectRelease(param_1.unknown);
  }
  else {
    if ((long)IVar11 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003620f8);
      (*pcVar2)();
    }
    IVar12 = 0;
    local_88 = param_2;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        self = *(ID *)(param_1.unknown + IVar12 * 8 + 0x20);
      }
      else {
        self = IVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar12,param_1);
      }
      IVar12 = IVar12 + 1;
      DVar4 = Foundation::Date::init();
      pNVar5 = Foundation::Date::_bridgeToObjectiveC(DVar4);
      (**(code **)(lVar13 + 8))
                (auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
      objc_stub::setTimestamp_(self,pNVar5);
    } while (IVar11 != IVar12);
    uVar9 = extraout_w1;
    _swift_bridgeObjectRelease(param_1.unknown);
  }
  FUN_1003293c4();
  if (((uVar9 & 0xff) != 1) && ((uVar9 & 0xff) != 0xff)) {
    FUN_100363810();
    FUN_1003646ec();
    _swift_bridgeObjectRelease(param_1.unknown);
  }
  puVar6 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStaticObject();
  puVar7 = puVar6;
  FUN_1003c92b8();
  FUN_100005808(puVar6 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar6 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  IVar11 = *(ID *)(unaff_x20 + 0x10);
  ppuVar8 = local_80;
  local_80[0] = puVar7;
  local_68 = puVar6;
  FUN_100328bb4(ppuVar8,0,IVar11);
  FUN_100004594(local_80);
  if (ppuVar8 != (undefined **)0x0) {
    objc_stub::FUN_100c08be0(IVar11,ppuVar8,1);
  }
  return;
}



/* Address: 0x1003620f8 | FUN_1003620f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100362150) */

_ArrayBuffer FUN_1003620f8(_ArrayBuffer param_1,NSObject *param_2)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  _ArrayBuffer _Var3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  _ArrayBuffer _Var8;
  ulong uVar9;
  NSObject *self;
  ID IVar10;
  long lVar11;
  _ArrayBuffer _Var12;
  __int64 _Var13;
  NSObject *extraout_x1;
  NSObject *extraout_x1_00;
  ContiguousArray CVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ContiguousArray oldCount;
  ulong uVar18;
  
  _Var8.unknown = param_1.unknown;
  FUN_100329088();
  FUN_1003214a8(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar16 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar16 != 0) {
    uVar17 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003622f8);
          (*pcVar5)();
        }
        uVar9 = *(ulong *)(param_1.unknown + uVar17 * 8 + 0x20);
      }
      else {
        uVar9 = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,param_1);
      }
      lVar1 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003622f4);
        (*pcVar5)();
      }
      self = (NSObject *)objc_stub::list(uVar9);
      CVar14.unknown = extraout_x1;
      if ((self == (NSObject *)0x0) ||
         (IVar10 = objc_stub::rawType((ID)self), CVar14.unknown = extraout_x1_00, IVar10 != 2)) {
LAB_1003621cc:
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
        oldCount.unknown = puVar4[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)oldCount.unknown,CVar14);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,uVar9);
        Swift::ContiguousArray::__endMutation(oldCount);
      }
      else {
        FUN_10032b0c8(0);
        CVar14.unknown = param_2;
        bVar6 = (extension_ObjectiveC)::__C::NSObject::___infix(self,param_2);
        if (!bVar6) goto LAB_1003621cc;
      }
      uVar17 = uVar17 + 1;
      _Var3.unknown = puVar4;
    } while (lVar1 != lVar16);
  }
  if (((long)_Var3.unknown < 0) || (((ulong)_Var3.unknown >> 0x3e & 1) != 0)) {
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var3.unknown);
  }
  else {
    lVar16 = *(long *)(_Var3.unknown + 0x10);
  }
  if (lVar16 != 0) {
    uVar17 = 0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(_Var3.unknown + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10036248c);
          (*pcVar5)();
        }
        uVar9 = *(ulong *)(_Var3.unknown + uVar17 * 8 + 0x20);
      }
      else {
        uVar9 = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var3);
      }
      lVar1 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100362488);
        (*pcVar5)();
      }
      objc_stub::setList_(uVar9,param_2);
      uVar18 = (ulong)_Var8.unknown >> 0x3e;
      if (uVar18 == 0) {
        lVar11 = *(long *)((_Var8.unknown & 0xffffffffffffff8U) + 0x10);
      }
      else {
        _Var2.unknown = _Var8.unknown & 0xffffffffffffff8U;
        if (((ulong)_Var8.unknown & 0x8000000000000000) != 0) {
          _Var2.unknown = _Var8.unknown;
        }
        _Var13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        if (_Var13 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100362580);
          (*pcVar5)();
        }
        _Var13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        if (_Var13 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100362584);
          (*pcVar5)();
        }
        lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100362490);
        (*pcVar5)();
      }
      lVar11 = lVar11 + 1;
      _Var12.unknown = _Var8.unknown;
      _swift_isUniquelyReferenced_nonNull_bridgeObject();
      iVar7 = 0;
      if (uVar18 == 0) {
        iVar7 = (int)_Var12.unknown;
      }
      if ((iVar7 != 1) ||
         ((long)(*(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x18) >> 1) < lVar11)) {
        if (uVar18 == 0) {
          lVar15 = *(long *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = _Var8.unknown & 0xffffffffffffff8;
          if (((ulong)_Var8.unknown & 0x8000000000000000) != 0) {
            _Var2.unknown = _Var8.unknown;
          }
          lVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (lVar15 <= lVar11) {
          lVar15 = lVar11;
        }
        Swift::Array<undefined>::__createNewBuffer(iVar7,lVar15,1);
      }
      FUN_1000898fc(0,0,1,uVar9);
      uVar17 = uVar17 + 1;
    } while (lVar1 != lVar16);
  }
  _swift_release(_Var3.unknown);
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    lVar16 = *(long *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var2.unknown = _Var8.unknown;
    }
    lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar16 != 0) {
    uVar17 = 0;
    do {
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100362540);
          (*pcVar5)();
        }
        uVar9 = *(ulong *)(_Var8.unknown + uVar17 * 8 + 0x20);
      }
      else {
        uVar9 = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,_Var8);
      }
      lVar1 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10036253c);
        (*pcVar5)();
      }
      IVar10 = objc_stub::FUN_100c01500(uVar9);
      if (uVar17 != IVar10) {
        objc_stub::setDisplayOrderInPinboard_(uVar9,uVar17);
      }
      uVar17 = uVar17 + 1;
    } while (lVar1 != lVar16);
  }
  _swift_bridgeObjectRelease(_Var8.unknown);
  return (_ArrayBuffer)_Var8.unknown;
}



/* Address: 0x100362584 | FUN_100362584 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100362620) */

_ArrayBuffer
FUN_100362584(undefined8 param_1,__int64 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  IndexSet IVar4;
  IndexSet IVar5;
  ulong self;
  ID IVar6;
  _ArrayBuffer _Var7;
  long extraout_x8;
  IndexSet fromOffsets;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 local_a0;
  undefined8 local_98;
  _ArrayBuffer *local_80;
  _ArrayBuffer local_68;
  
  local_a0 = param_5;
  IVar4 = Foundation::IndexSet::typeMetadataAccessor();
  lVar8 = *(long *)(IVar4.unknown + -8);
  IVar5 = IVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  fromOffsets.unknown = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_100329088();
  FUN_1003214a8(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_80 = &local_68;
  pcVar3 = FUN_100364ca0;
  local_68.unknown = IVar5.unknown;
  (extension_Swift)::Swift::Sequence::_compactMap();
  FUN_100003a00(&DAT_100fc1200,PTR_typeMetadataAccessor_100ea76d0,
                PTR_Foundation__Foundation__IndexSet_>Swift__SetAlgebra_100ea76d8);
  Swift::SetAlgebra::init();
  lVar10 = *(long *)(pcVar3 + 0x10);
  if (lVar10 != 0) {
    pcVar11 = pcVar3 + 0x20;
    do {
      local_98 = *(undefined8 *)pcVar11;
      Swift::SetAlgebra::_insert();
      lVar10 = lVar10 + -1;
      pcVar11 = pcVar11 + 8;
    } while (lVar10 != 0);
  }
  _swift_bridgeObjectRelease(pcVar3);
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  FUN_100016eac(&DAT_100fc1208,&DAT_100fbe920,&DAT_100c408d0,
                PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520);
  (extension_SwiftUI)::Swift::MutableCollection::move(fromOffsets,param_2);
  _Var7.unknown = local_68.unknown;
  if ((ulong)local_68.unknown >> 0x3e == 0) {
    lVar10 = *(long *)(((ulong)local_68.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = local_68.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_68.unknown) {
      _Var2.unknown = local_68.unknown;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar10 != 0) {
    uVar9 = 0;
    do {
      if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003627f4);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var7.unknown + uVar9 * 8 + 0x20);
      }
      else {
        self = uVar9;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar9,_Var7);
      }
      lVar1 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003627f0);
        (*pcVar3)();
      }
      IVar6 = objc_stub::FUN_100c01500(self);
      if (uVar9 != IVar6) {
        objc_stub::setDisplayOrderInPinboard_(self,uVar9);
      }
      uVar9 = uVar9 + 1;
    } while (lVar1 != lVar10);
  }
  (**(code **)(lVar8 + 8))(fromOffsets.unknown,IVar4.unknown);
  _swift_bridgeObjectRelease(_Var7.unknown);
  return (_ArrayBuffer)_Var7.unknown;
}



/* Address: 0x100362844 | FUN_100362844 */

void FUN_100362844(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar3 = *param_3;
  _swift_bridgeObjectRetain(uVar3);
  uVar1 = uVar3;
  FUN_1003628ac();
  _swift_bridgeObjectRelease(uVar3);
  *param_1 = uVar2;
  *(char *)(param_1 + 1) = (char)uVar1;
  return;
}



/* Address: 0x1003628ac | FUN_1003628ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1003628ac(NSObject *param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  NSObject *pNVar4;
  undefined8 uVar5;
  NSObject *pNVar6;
  NSObject *pNVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  puVar8 = param_2.unknown & 0xffffffffffffff8;
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    pNVar7 = *(NSObject **)(puVar8 + 0x10);
  }
  else {
    _Var1.unknown = puVar8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    pNVar7 = (NSObject *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  pNVar6 = (NSObject *)0x0;
  do {
    if (pNVar7 == pNVar6) {
      pNVar6 = (NSObject *)0x0;
      uVar5 = 1;
LAB_100362964:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = pNVar6;
      return auVar9;
    }
    if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
      if (*(NSObject **)(puVar8 + 0x10) <= pNVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100362984);
        (*pcVar2)();
      }
      pNVar4 = *(NSObject **)(param_2.unknown + (long)pNVar6 * 8 + 0x20);
    }
    else {
      pNVar4 = pNVar6;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar6,param_2);
    }
    FUN_1003214a8(0);
    bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar4,param_1);
    if (bVar3) {
      uVar5 = 0;
      goto LAB_100362964;
    }
    bVar3 = SCARRY8((long)pNVar6,1);
    pNVar6 = pNVar6 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100362988);
      (*pcVar2)();
    }
  } while( true );
}



/* Address: 0x10036299c | FUN_10036299c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036299c(_ArrayBuffer param_1,NSObject *param_2)

{
  _CocoaArrayWrapper _Var1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  undefined8 *self;
  ID IVar5;
  NSObject *pNVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_140 [8];
  undefined *local_88 [3];
  undefined *local_70;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc11a8;
  FUN_1000037f0(&DAT_100fc11a8,&DAT_100c42ee0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar12 - extraout_x8_00;
  puVar16 = (undefined8 *)&DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(puVar16[-1] + 0x40));
  lVar13 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar13 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar21 - extraout_x12_00;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar18 = *(undefined8 **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    puVar18 = (undefined8 *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar16 = puVar18;
  }
  if (puVar18 != (undefined8 *)0x0) {
    if ((long)puVar18 < 1) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100363004);
      (*pcVar14)();
    }
    puVar19 = (undefined8 *)0x0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        self = *(undefined8 **)(param_1.unknown + (long)puVar19 * 8 + 0x20);
      }
      else {
        self = puVar19;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar19,param_1);
      }
      IVar5 = objc_stub::rawType((ID)param_2);
      if (IVar5 == 1) {
        objc_stub::setTimestamp_((ID)self,0);
      }
      IVar5 = objc_stub::rawType((ID)param_2);
      if ((IVar5 == 2) &&
         (pNVar6 = (NSObject *)objc_stub::list((ID)self), pNVar6 != (NSObject *)0x0)) {
        FUN_10032b0c8(0);
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar6,param_2);
        if (bVar2) {
          objc_stub::setList_((ID)self,0);
        }
      }
      DVar7.unknown = (undefined *)objc_stub::timestamp((ID)self);
      if (DVar7.unknown != (undefined *)0x0) {
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar7);
      }
      pcVar14 = *(code **)(lVar11 + 0x38);
      (*pcVar14)(lVar20,DVar7.unknown == (undefined *)0x0,1,DVar3.unknown);
      (*pcVar14)(lVar21,1,1,DVar3.unknown);
      lVar15 = (long)*(int *)(puVar4 + 0x30);
      FUN_100364a64(lVar20,lVar17);
      FUN_100364a64(lVar21,lVar17 + lVar15);
      pcVar14 = *(code **)(lVar11 + 0x30);
      lVar8 = lVar17;
      (*pcVar14)(lVar17,1,DVar3.unknown);
      if ((int)lVar8 == 1) {
        FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
        FUN_100005808(lVar20,&DAT_100fbe6e8,&DAT_100c43250);
        lVar15 = lVar17 + lVar15;
        (*pcVar14)(lVar15,1,DVar3.unknown);
        if ((int)lVar15 != 1) {
LAB_100362b6c:
          FUN_100005808(lVar17,&DAT_100fc11a8,&DAT_100c42ee0);
          goto LAB_100362b84;
        }
        FUN_100005808(lVar17,&DAT_100fbe6e8,&DAT_100c43250);
LAB_100362e80:
        IVar5 = objc_stub::list((ID)self);
        if (IVar5 != 0) goto LAB_100362b84;
        puVar9 = &DAT_100fbe4e8;
        FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
        _swift_initStackObject();
        *(undefined8 *)(puVar9 + 0x18) = 3;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        puVar16 = (undefined8 *)(puVar9 + 0x20);
        *puVar16 = self;
        FUN_1003646ec(puVar9);
        _swift_setDeallocating(puVar9);
        _swift_arrayDestroy(puVar16,*(undefined8 *)(puVar9 + 0x10),
                            PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
      }
      else {
        FUN_100364a64(lVar17,lVar13);
        lVar8 = lVar17 + lVar15;
        (*pcVar14)(lVar8,1,DVar3.unknown);
        if ((int)lVar8 == 1) {
          FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
          FUN_100005808(lVar20,&DAT_100fbe6e8,&DAT_100c43250);
          (**(code **)(lVar11 + 8))(lVar13,DVar3.unknown);
          goto LAB_100362b6c;
        }
        (**(code **)(lVar11 + 0x20))(puVar12,lVar17 + lVar15,DVar3.unknown);
        puVar16 = &DAT_100fc11f8;
        FUN_100003a00(&DAT_100fc11f8,PTR_typeMetadataAccessor_100ea7480,
                      PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
        bVar2 = Swift::Equatable::___infix(lVar13,puVar12,DVar3.unknown,puVar16);
        pcVar14 = *(code **)(lVar11 + 8);
        (*pcVar14)(puVar12,DVar3.unknown);
        FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
        FUN_100005808(lVar20,&DAT_100fbe6e8,&DAT_100c43250);
        (*pcVar14)(lVar13,DVar3.unknown);
        FUN_100005808(lVar17,&DAT_100fbe6e8,&DAT_100c43250);
        if (bVar2) goto LAB_100362e80;
LAB_100362b84:
        puVar16 = (undefined8 *)0x0;
      }
      puVar19 = (undefined8 *)((long)puVar19 + 1);
    } while (puVar18 != puVar19);
  }
  FUN_100325110();
  if (((ulong)puVar16 & 1) != 0) {
    puVar4 = &DAT_100fbef68;
    FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
    _swift_initStaticObject();
    puVar9 = puVar4;
    FUN_1003c92b8();
    FUN_100005808(puVar4 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
    puVar4 = &DAT_100fbef78;
    FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
    IVar5 = *(ID *)(unaff_x20 + 0x10);
    ppuVar10 = local_88;
    local_88[0] = puVar9;
    local_70 = puVar4;
    FUN_100328bb4(ppuVar10,0,IVar5);
    FUN_100004594(local_88);
    if (ppuVar10 != (undefined **)0x0) {
      objc_stub::FUN_100c08be0(IVar5,ppuVar10,1);
    }
  }
  return;
}



/* Address: 0x100363004 | FUN_100363004 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100363004(undefined8 param_1,NSObject *param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  Date DVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  NSObject *pNVar7;
  Date DVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long extraout_x8;
  undefined1 *puVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x8_02;
  long lVar14;
  long extraout_x8_03;
  long lVar15;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar16;
  code *pcVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *local_88 [3];
  undefined *local_70;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar19 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  puVar12 = &stack0xfffffffffffffee0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc11a8;
  FUN_1000037f0(&DAT_100fc11a8,&DAT_100c42ee0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)puVar12 - extraout_x8_00;
  puVar4 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar18 - extraout_x12_00;
  lVar20 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar22 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar14 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar16 = lVar22 - extraout_x8_03;
  (**(code **)(lVar20 + 0x10))(lVar22,param_1,param_3);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  puVar4 = local_88[0];
  do {
    if (puVar4 == (undefined *)0x0) {
      (**(code **)(lVar14 + 8))(uVar16,lVar5);
      FUN_100325110();
      if ((uVar16 & 1) != 0) {
        puVar3 = &DAT_100fbef68;
        FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
        _swift_initStaticObject();
        puVar4 = puVar3;
        FUN_1003c92b8();
        FUN_100005808(puVar3 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
        puVar3 = &DAT_100fbef78;
        FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
        IVar6 = *(ID *)(unaff_x20 + 0x10);
        ppuVar11 = local_88;
        local_88[0] = puVar4;
        local_70 = puVar3;
        FUN_100328bb4(ppuVar11,0,IVar6);
        FUN_100004594(local_88);
        if (ppuVar11 != (undefined **)0x0) {
          objc_stub::FUN_100c08be0(IVar6,ppuVar11,1);
        }
      }
      return;
    }
    local_88[0] = puVar4;
    IVar6 = objc_stub::rawType((ID)param_2);
    if (IVar6 == 1) {
      objc_stub::setTimestamp_((ID)puVar4,0);
    }
    IVar6 = objc_stub::rawType((ID)param_2);
    if ((IVar6 == 2) &&
       (pNVar7 = (NSObject *)objc_stub::list((ID)puVar4), pNVar7 != (NSObject *)0x0)) {
      FUN_10032b0c8(0);
      bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar7,param_2);
      if (bVar1) {
        objc_stub::setList_((ID)puVar4,0);
      }
    }
    DVar8.unknown = (undefined *)objc_stub::timestamp(puVar4);
    if (DVar8.unknown != (undefined *)0x0) {
      Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar8);
    }
    pcVar17 = *(code **)(lVar19 + 0x38);
    (*pcVar17)(lVar13,DVar8.unknown == (undefined *)0x0,1,DVar2.unknown);
    (*pcVar17)(lVar18,1,1,DVar2.unknown);
    lVar20 = (long)*(int *)(puVar3 + 0x30);
    FUN_100364a64(lVar13,lVar21);
    FUN_100364a64(lVar18,lVar21 + lVar20);
    pcVar17 = *(code **)(lVar19 + 0x30);
    lVar22 = lVar21;
    (*pcVar17)(lVar21,1,DVar2.unknown);
    if ((int)lVar22 == 1) {
      FUN_100005808(lVar18,&DAT_100fbe6e8,&DAT_100c43250);
      FUN_100005808(lVar13,&DAT_100fbe6e8,&DAT_100c43250);
      lVar20 = lVar21 + lVar20;
      (*pcVar17)(lVar20,1,DVar2.unknown);
      if ((int)lVar20 == 1) {
        FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
LAB_100363540:
        IVar6 = objc_stub::list((ID)puVar4);
        if (IVar6 == 0) {
          puVar10 = &DAT_100fbe4e8;
          FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
          _swift_initStackObject();
          *(undefined8 *)(puVar10 + 0x18) = 3;
          *(undefined8 *)(puVar10 + 0x10) = 1;
          *(undefined **)(puVar10 + 0x20) = puVar4;
          FUN_1003646ec(puVar10);
          _swift_setDeallocating(puVar10);
          _swift_arrayDestroy(puVar10 + 0x20,*(undefined8 *)(puVar10 + 0x10),
                              PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
        }
      }
      else {
LAB_10036327c:
        FUN_100005808(lVar21,&DAT_100fc11a8,&DAT_100c42ee0);
      }
    }
    else {
      FUN_100364a64(lVar21,lVar15);
      lVar22 = lVar21 + lVar20;
      (*pcVar17)(lVar22,1,DVar2.unknown);
      if ((int)lVar22 == 1) {
        FUN_100005808(lVar18,&DAT_100fbe6e8,&DAT_100c43250);
        FUN_100005808(lVar13,&DAT_100fbe6e8,&DAT_100c43250);
        (**(code **)(lVar19 + 8))(lVar15,DVar2.unknown);
        goto LAB_10036327c;
      }
      (**(code **)(lVar19 + 0x20))(puVar12,lVar21 + lVar20,DVar2.unknown);
      puVar9 = &DAT_100fc11f8;
      FUN_100003a00(&DAT_100fc11f8,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar1 = Swift::Equatable::___infix(lVar15,puVar12,DVar2.unknown,puVar9);
      pcVar17 = *(code **)(lVar19 + 8);
      (*pcVar17)(puVar12,DVar2.unknown);
      FUN_100005808(lVar18,&DAT_100fbe6e8,&DAT_100c43250);
      FUN_100005808(lVar13,&DAT_100fbe6e8,&DAT_100c43250);
      (*pcVar17)(lVar15,DVar2.unknown);
      FUN_100005808(lVar21,&DAT_100fbe6e8,&DAT_100c43250);
      if (bVar1) goto LAB_100363540;
    }
    Swift::IteratorProtocol::_next();
    puVar4 = local_88[0];
  } while( true );
}



/* Address: 0x1003636b4 | FUN_1003636b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003636b4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ID self;
  long unaff_x20;
  undefined *local_58 [3];
  undefined *local_40;
  
  if ((uint)(param_2 >> 0x3e) != 0) {
    FUN_100363004(param_1,param_2 & 0x3fffffffffffffff);
    return;
  }
  (extension_Swift)::Swift::Sequence::_forEach();
  puVar1 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStaticObject();
  puVar2 = puVar1;
  FUN_1003c92b8();
  FUN_100005808(puVar1 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar1 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  self = *(ID *)(unaff_x20 + 0x10);
  ppuVar3 = local_58;
  local_58[0] = puVar2;
  local_40 = puVar1;
  FUN_100328bb4(ppuVar3,0,self);
  FUN_100004594(local_58);
  if (ppuVar3 != (undefined **)0x0) {
    objc_stub::FUN_100c08be0(self,ppuVar3,1);
  }
  return;
}



/* Address: 0x1003637c0 | FUN_1003637c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003637c0(ID *param_1)

{
  ID self;
  ID self_00;
  
  self_00 = *param_1;
  self = objc_stub::managedObjectContext(self_00);
  objc_stub::deleteObject_(self,self_00);
  return 0;
}



/* Address: 0x100363810 | FUN_100363810 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100363810(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  Date DVar3;
  Date self;
  NSPredicate *pNVar4;
  undefined *puVar5;
  Date DVar6;
  NSDate *pNVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long lVar9;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  self.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (0 < param_1) {
    if (SUB168(SEXT816(-param_1) * SEXT816(0x18),8) != param_1 * -0x18 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100363a34);
      (*pcVar2)();
    }
    if (SUB168(SEXT816(param_1 * -0x18) * SEXT816(0x3c),8) != param_1 * -0x5a0 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100363a38);
      (*pcVar2)();
    }
    if (SUB168(SEXT816(param_1 * -0x5a0) * SEXT816(0x3c),8) != param_1 * -0x15180 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100363a3c);
      (*pcVar2)();
    }
    self = Foundation::Date::init((double)(param_1 * -0x15180));
    FUN_100329754();
    pNVar4 = (NSPredicate *)0x0;
    FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
    puVar5 = &DAT_100fbeb40;
    FUN_1000037f0("%K == nil && %K < %@",&DAT_100fbeb40,&DAT_100c42e40);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 6;
    *(undefined8 *)(puVar5 + 0x10) = 3;
    puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    DVar6.unknown = puVar5;
    FUN_10030d9e0();
    *(undefined8 *)(puVar5 + 0x20) = 0x7473696c;
    *(undefined1 **)(puVar5 + 0x28) = &DAT_e400000000000000;
    *(undefined **)(puVar5 + 0x60) = puVar1;
    *(undefined **)(puVar5 + 0x68) = DVar6.unknown;
    *(undefined **)(puVar5 + 0x40) = DVar6.unknown;
    *(undefined1 **)(puVar5 + 0x48) = &DAT_6d617473656d6974;
    *(undefined1 **)(puVar5 + 0x50) = &SUB_e900000000000070;
    pNVar7 = Foundation::Date::_bridgeToObjectiveC(DVar6);
    uVar8 = 0;
    FUN_10000ec2c(0,&DAT_100fc1138,&PTR__OBJC_CLASS___NSDate_100f8d950);
    *(undefined8 *)(puVar5 + 0x88) = uVar8;
    FUN_1003640b4();
    *(undefined8 *)(puVar5 + 0x90) = uVar8;
    *(NSDate **)(puVar5 + 0x70) = pNVar7;
    pNVar4 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar4);
    objc_stub::setPredicate_((ID)self.unknown,pNVar4);
    FUN_10032a310(self.unknown,*(undefined8 *)(unaff_x20 + 0x10));
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
  }
  return self.unknown;
}



/* Address: 0x100363a3c | FUN_100363a3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100363a3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  ID IVar1;
  long lVar2;
  ID self;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ID local_68;
  
  lVar6 = *(long *)(param_2 + -8);
  uVar5 = param_3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_a8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))
            (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar2,puVar4,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  if (local_68 != 0) {
    uStack_98 = 3;
    local_a0 = 1;
    do {
      IVar1 = local_68;
      self = objc_stub::list(local_68);
      if ((self != 0) && (IVar3 = objc_stub::rawType(self), IVar3 == 2)) {
        puVar4 = &DAT_100fbe4e8;
        FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x18) = uStack_98;
        *(undefined8 *)(puVar4 + 0x10) = local_a0;
        *(ID *)(puVar4 + 0x20) = IVar1;
        FUN_10036299c(puVar4,self);
        _swift_setDeallocating(puVar4);
        _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),
                            PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
      }
      Swift::IteratorProtocol::_next();
    } while (local_68 != 0);
  }
  (**(code **)(local_a8 + 8))
            ((long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00,lVar2)
  ;
  return;
}



/* Address: 0x100363c68 | FUN_100363c68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100363c68(void)

{
  return ZEXT816(0x100fc10d8);
}



/* Address: 0x100363c88 | FUN_100363c88 */

void FUN_100363c88(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_48;
  
  puVar1 = &DAT_100fc1158;
  FUN_1000037f0(&DAT_100fc1158,&DAT_100c42e60);
  _swift_allocObject();
  uVar2 = param_1;
  _swift_retain();
  FUN_1003647d4();
  _swift_release(param_1);
  local_48 = uVar2;
  FUN_1000037f0(&DAT_100fc0d18,&DAT_100c42940);
  _swift_allocObject();
  puVar3 = &DAT_100fc1160;
  FUN_100016eac(&DAT_100fc1160,&DAT_100fc1158,&DAT_100c42e60,
                &TargetProtocolConformanceDescriptor_100c425d0);
  FUN_1001ae768(&local_48,puVar1,puVar3);
  return;
}



/* Address: 0x100363d58 | FUN_100363d58 */

void FUN_100363d58(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48;
  
  FUN_100329088();
  puVar1 = &DAT_100fc1148;
  FUN_1000037f0(&DAT_100fc1148,&DAT_100c42e50);
  _swift_allocObject();
  FUN_100365db4();
  local_48 = param_1;
  FUN_1000037f0(&DAT_100fc0d18,&DAT_100c42940);
  _swift_allocObject();
  puVar2 = &DAT_100fc1150;
  FUN_100016eac(&DAT_100fc1150,&DAT_100fc1148,&DAT_100c42e50,
                &TargetProtocolConformanceDescriptor_100c424d0);
  FUN_1001ae768(&local_48,puVar1,puVar2);
  return;
}



/* Address: 0x100363e20 | FUN_100363e20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100363e20(undefined *param_1,long param_2)

{
  long *unaff_x20;
  long lVar1;
  
  if (0 < param_2) {
    lVar1 = *unaff_x20;
    FUN_100329088();
    objc_stub::setFetchLimit_((ID)param_1,param_2);
    FUN_10032a310(param_1,*(undefined8 *)(lVar1 + 0x10));
    return param_1;
  }
  return PTR___swiftEmptyArrayStorage_100eae0d8;
}



/* Address: 0x100363e8c | FUN_100363e8c */

undefined ** FUN_100363e8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long *unaff_x20;
  long lVar4;
  undefined *local_60 [3];
  undefined *local_48;
  
  lVar4 = *unaff_x20;
  puVar1 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar1 + 0x28) = 0xea00000000007265;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar1;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar1 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  ppuVar3 = local_60;
  local_60[0] = puVar2;
  local_48 = puVar1;
  FUN_100328950(ppuVar3,0,*(undefined8 *)(lVar4 + 0x10));
  FUN_100004594(local_60);
  return ppuVar3;
}



/* Address: 0x100363f8c | FUN_100363f8c */

void FUN_100363f8c(void)

{
  FUN_100363810();
  return;
}



/* Address: 0x100363fac | FUN_100363fac */

void FUN_100363fac(void)

{
  FUN_100360d9c();
  return;
}



/* Address: 0x100363fcc | FUN_100363fcc */

void FUN_100363fcc(void)

{
  FUN_1003611b0();
  return;
}



/* Address: 0x100363ff0 | FUN_100363ff0 */

void FUN_100363ff0(void)

{
  FUN_100360ff8();
  return;
}



/* Address: 0x100364010 | thunk_FUN_100364ab4 */

void thunk_FUN_100364ab4(void)

{
  FUN_100364ab4();
  return;
}



/* Address: 0x100364014 | FUN_100364014 */

void FUN_100364014(void)

{
  FUN_1003614c0();
  return;
}



/* Address: 0x100364034 | FUN_100364034 */

void FUN_100364034(void)

{
  FUN_100362584();
  return;
}



/* Address: 0x100364054 | FUN_100364054 */

void FUN_100364054(void)

{
  FUN_100363004();
  return;
}



/* Address: 0x100364074 | FUN_100364074 */

void FUN_100364074(void)

{
  FUN_1003636b4();
  return;
}



/* Address: 0x100364094 | FUN_100364094 */

void FUN_100364094(void)

{
  FUN_100363a3c();
  return;
}



/* Address: 0x1003640b4 | FUN_1003640b4 */

void FUN_1003640b4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc1140 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000ec2c(0xff,&DAT_100fc1138,&PTR__OBJC_CLASS___NSDate_100f8d950);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0,uVar1);
  DAT_100fc1140 = puVar2;
  return;
}



/* Address: 0x100364108 | FUN_100364108 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100364108(undefined *param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  _ArrayBuffer _Var4;
  undefined *puVar5;
  _CocoaArrayWrapper _Var6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _swift_bridgeObjectRetain(param_1);
    _Var6.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  }
  else {
    _Var6.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var6.unknown = param_1;
    }
    puVar5 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var6);
    _Var6.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar5 != (undefined *)0x0) {
      _swift_bridgeObjectRetain(param_1);
      _Var6.unknown = puVar5;
      FUN_1003643c0(puVar5,0);
      puVar7 = param_1;
      FUN_100364478(_Var6.unknown + 0x20,puVar5,param_1,FUN_1003214a8);
      _swift_bridgeObjectRelease();
      if (puVar7 != puVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100364304);
        (*pcVar2)();
      }
    }
  }
  if (((long)_Var6.unknown < 0) || (((ulong)_Var6.unknown >> 0x3e & 1) != 0)) {
    uVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var6);
    _swift_bridgeObjectRelease(param_1);
    if ((long)uVar10 < -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100364324);
      (*pcVar2)();
    }
    uVar8 = (long)uVar10 / 2;
  }
  else {
    uVar10 = *(ulong *)(_Var6.unknown + 0x10);
    _swift_bridgeObjectRelease(param_1);
    uVar8 = uVar10 >> 1;
  }
  if (2 < uVar10 + 1) {
    lVar11 = 4;
    do {
      uVar1 = uVar10 - (lVar11 + -3);
      if (SBORROW8(uVar10,lVar11 + -3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100364298);
        (*pcVar2)();
      }
      uVar3 = lVar11 - 4;
      if (uVar3 != uVar1) {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10036429c);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
          if (uVar9 <= uVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003642a0);
            (*pcVar2)();
          }
          if (uVar9 <= uVar1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003642a4);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(_Var6.unknown + lVar11 * 8);
          uVar9 = *(ulong *)(_Var6.unknown + uVar1 * 8 + 0x20);
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath(uVar3,(_ArrayBuffer)_Var6.unknown);
          uVar9 = uVar1;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar1,(_ArrayBuffer)_Var6.unknown);
        }
        _Var4.unknown = _Var6.unknown;
        _swift_isUniquelyReferenced_nonNull_bridgeObject();
        if ((((int)_Var4.unknown == 0) || ((long)_Var6.unknown < 0)) ||
           (((ulong)_Var6.unknown >> 0x3e & 1) != 0)) {
          FUN_100089720();
          uVar13 = (uint)((ulong)_Var6.unknown >> 0x3e) & 1;
        }
        else {
          uVar13 = 0;
        }
        uVar12 = (ulong)_Var6.unknown & 0xffffffffffffff8;
        *(ulong *)(uVar12 + lVar11 * 8) = uVar9;
        if (((long)_Var6.unknown < 0) || (uVar13 != 0)) {
          FUN_100089720();
          uVar12 = (ulong)_Var6.unknown & 0xffffffffffffff8;
        }
        if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100364294);
          (*pcVar2)();
        }
        if (*(ulong *)(uVar12 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003642a8);
          (*pcVar2)();
        }
        *(ulong *)(uVar12 + uVar1 * 8 + 0x20) = uVar3;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 - uVar8 != 4);
  }
  return _Var6.unknown;
}



/* Address: 0x10036433c | FUN_10036433c */

undefined * FUN_10036433c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fc1bf0;
    FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x1003643bc | thunk_FUN_1003643c0 */

undefined * thunk_FUN_1003643c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x1003643c0 | FUN_1003643c0 */

undefined * FUN_1003643c0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fbe4e8;
    FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x100364444 | FUN_100364444 */

void FUN_100364444(void)

{
  FUN_1000744d4();
  return;
}



/* Address: 0x100364458 | FUN_100364458 */

void FUN_100364458(void)

{
  FUN_1000744d4();
  return;
}



/* Address: 0x10036446c | FUN_10036446c */

void FUN_10036446c(void)

{
  FUN_100364478();
  return;
}



/* Address: 0x100364478 | FUN_100364478 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100364478(undefined8 *param_1,long param_2,_ArrayBuffer param_3,code *param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((ulong)param_3.unknown >> 0x3e == 0) {
    lVar6 = *(long *)((param_3.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_3.unknown & 0xffffffffffffff8U;
    if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_3.unknown;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar6 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003646a8);
      (*pcVar2)();
    }
    if ((ulong)param_3.unknown >> 0x3e == 0) {
      lVar6 = *(long *)(((ulong)param_3.unknown & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10036469c);
        (*pcVar2)();
      }
      uVar3 = 0;
      (*param_4)(0);
      _swift_arrayInitWithCopy
                (param_1,((ulong)param_3.unknown & 0xffffffffffffff8) + 0x20,lVar6,uVar3);
    }
    else {
      _Var1.unknown = param_3.unknown & 0xffffffffffffff8;
      if (((ulong)param_3.unknown & 0x8000000000000000) != 0) {
        _Var1.unknown = param_3.unknown;
      }
      _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (param_2 < _Var4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003646a0);
        (*pcVar2)();
      }
      if (lVar6 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003646a4);
        (*pcVar2)();
      }
      if (((ulong)param_3.unknown & 0xc000000000000001) == 0) {
        *param_1 = *(undefined8 *)(param_3.unknown + 0x20);
        uVar10 = lVar6 - 1;
        if (uVar10 != 0) {
          uVar8 = uVar10 & 7;
          if (lVar6 - 2U < 7) {
            lVar6 = 1;
          }
          else {
            uVar10 = uVar10 & 0xfffffffffffffff8;
            puVar9 = (undefined8 *)(param_3.unknown + 0x30);
            lVar6 = 1;
            do {
              param_1[1] = puVar9[-1];
              param_1[2] = *puVar9;
              param_1[3] = puVar9[1];
              param_1[4] = puVar9[2];
              param_1[5] = puVar9[3];
              param_1[6] = puVar9[4];
              param_1[7] = puVar9[5];
              param_1 = param_1 + 8;
              *param_1 = puVar9[6];
              lVar6 = lVar6 + 8;
              puVar9 = puVar9 + 8;
              uVar10 = uVar10 - 8;
            } while (uVar10 != 0);
          }
          if (uVar8 != 0) {
            puVar9 = (undefined8 *)(param_3.unknown + lVar6 * 8 + 0x20);
            do {
              param_1 = param_1 + 1;
              *param_1 = *puVar9;
              uVar8 = uVar8 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar8 != 0);
          }
        }
      }
      else {
        lVar7 = 0;
        do {
          lVar5 = lVar7;
          Swift::_ArrayBuffer::__getElementSlowPath(lVar7,param_3);
          param_1[lVar7] = lVar5;
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
      }
    }
  }
  return param_3.unknown;
}



/* Address: 0x1003646a8 | FUN_1003646a8 */

void FUN_1003646a8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_1003600a0(uVar1);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x1003646ec | FUN_1003646ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

_ArrayBuffer FUN_1003646ec(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID self;
  ID self_00;
  _ArrayBuffer _Var3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
    _Var3.unknown = param_1.unknown;
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    puVar4 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _Var3.unknown = puVar4;
  }
  if (puVar4 != (undefined *)0x0) {
    uVar5 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003647a4);
          (*pcVar2)();
        }
        self = *(ID *)(param_1.unknown + uVar5 * 8 + 0x20);
      }
      else {
        self = uVar5;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar5,param_1);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003647a0);
        (*pcVar2)();
      }
      puVar6 = (undefined *)(uVar5 + 1);
      self_00 = objc_stub::managedObjectContext(self);
      objc_stub::deleteObject_(self_00,self);
      _Var3.unknown = (undefined *)0x0;
      uVar5 = uVar5 + 1;
    } while (puVar6 != puVar4);
  }
  return (_ArrayBuffer)_Var3.unknown;
}



/* Address: 0x1003647d4 | FUN_1003647d4 */

void FUN_1003647d4(undefined8 param_1)

{
  CurrentValueSubject *pCVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 local_38;
  
  local_38 = 0;
  pCVar1 = (CurrentValueSubject *)&DAT_100fc1168;
  FUN_1000037f0(&DAT_100fc1168,&DAT_100c42e68);
  _swift_allocObject();
  puVar2 = &local_38;
  Combine::CurrentValueSubject::_init(pCVar1);
  *(undefined8 **)(unaff_x20 + 0x18) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  puVar3 = &DAT_100c42e70;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc1170;
  FUN_1000037f0(&DAT_100fc1170,&DAT_100c42ea0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar3;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar5 = 0xd000000000000017;
  FUN_1000d4624(0xd000000000000017,0x8000000100da30d0);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_retain(param_1);
  FUN_10035ff00();
  return;
}



/* Address: 0x1003648d8 | FUN_1003648d8 */

void FUN_1003648d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002d5f54();
  *param_1 = param_2;
  return;
}



/* Address: 0x1003648fc | FUN_1003648fc */

void FUN_1003648fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc1190 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e268;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e268,&DAT_100ec8470);
  DAT_100fc1190 = pTVar1;
  return;
}



/* Address: 0x10036493c | FUN_10036493c */

void FUN_10036493c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100364960 | FUN_100364960 */

void FUN_100364960(void)

{
  FUN_1003646a8();
  return;
}


