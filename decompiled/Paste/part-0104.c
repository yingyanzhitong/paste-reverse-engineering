/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100136224 | FUN_100136224 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100136224(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x100136270 | FUN_100136270 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100136270(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  OS_dispatch_queue *pOVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  ID self;
  ID IVar12;
  undefined1 auStack_c0 [8];
  OS_dispatch_queue *local_b8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar10 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  IVar12 = *(ID *)(unaff_x20 + DAT_100fb0330);
  objc_stub::lock(IVar12);
  *(undefined1 *)(unaff_x20 + DAT_100fb0340) = 1;
  self = *(ID *)(unaff_x20 + DAT_100fb0338);
  *(undefined8 *)(unaff_x20 + DAT_100fb0338) = 0;
  objc_stub::unlock(IVar12);
  if (self != 0) {
    IVar12 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread);
    if ((int)IVar12 == 0) {
      pOVar3 = (OS_dispatch_queue *)0x0;
      FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
      local_b8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
      _swift_allocObject(param_1,0x18,7);
      *(ID *)(param_1 + 0x10) = self;
      local_90 = PTR___NSConcreteStackBlock_100ea82a0;
      local_88 = 0x42000000;
      local_80 = FUN_100030410;
      uStack_78 = param_3;
      local_70 = param_2;
      local_68 = param_1;
      aBlock = __Block_copy(&local_90);
      DVar4.unknown = local_68;
      _swift_release();
      Dispatch::DispatchQoS::get_unspecified(DVar4);
      local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar5 = &DAT_100fafdf0;
      FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar6 = &DAT_100fafdf8;
      FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
      puVar7 = &DAT_100fafe00;
      FUN_100155c48(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830);
      Swift::SetAlgebra::_init(puVar9,&local_90,puVar6,puVar7,DVar1.unknown,puVar5);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async
                ((DispatchQoS)0x0,
                 (DispatchWorkItemFlags)(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
      __Block_release(aBlock);
      (**(code **)(lVar10 + 8))(puVar9,DVar1.unknown);
      (**(code **)(lVar11 + 8))
                (puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
    }
    else {
      objc_stub::invalidate(self);
    }
  }
  uVar8 = *(undefined8 *)(unaff_x20 + DAT_100fb0310);
  *(undefined8 *)(unaff_x20 + DAT_100fb0310) = 0;
  _swift_release(uVar8);
  uVar8 = *(undefined8 *)(unaff_x20 + DAT_100fb0318);
  *(undefined8 *)(unaff_x20 + DAT_100fb0318) = 0;
  _swift_release(uVar8);
  return;
}



/* Address: 0x100136558 | FUN_100136558 */

void FUN_100136558(void)

{
  FUN_100136574();
  return;
}



/* Address: 0x100136574 | FUN_100136574 */

void FUN_100136574(undefined *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar2 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    lVar2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar2 == 0) {
    (*param_2)(1);
  }
  else {
    FUN_100134be8(param_1,param_2,param_3,param_5,param_6,param_7);
  }
  return;
}



/* Address: 0x10013662c | FUN_10013662c */

void FUN_10013662c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ID self;
  long unaff_x20;
  ID self_00;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  self = *(ID *)(unaff_x20 + DAT_100fb0358);
  objc_stub::lock(self);
  puVar1 = (undefined8 *)(unaff_x20 + DAT_100fb0350);
  lVar4 = puVar1[1];
  objc_stub::unlock(self);
  lVar5 = *(long *)(unaff_x20 + DAT_101057300);
  self_00 = *(ID *)(lVar5 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
  objc_stub::lock(self_00);
  lVar6 = _TtC7PostHog22PostHogFileBackedQueue::items;
  _swift_beginAccess(lVar5 + _TtC7PostHog22PostHogFileBackedQueue::items,auStack_68,0,0);
  lVar6 = *(long *)(*(long *)(lVar5 + lVar6) + 0x10);
  uVar2 = objc_stub::unlock(self_00);
  if ((lVar4 <= lVar6) && (FUN_100137c74(), (uVar2 & 1) != 0)) {
    objc_stub::lock(self);
    uVar3 = *puVar1;
    objc_stub::unlock(self);
    _swift_retain();
    FUN_1001370a8(uVar3,thunk_FUN_100153aec);
    _swift_release();
  }
  return;
}



/* Address: 0x100136748 | FUN_100136748 */

void FUN_100136748(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ID self;
  long unaff_x20;
  ID self_00;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_68 [24];
  
  self = *(ID *)(unaff_x20 + DAT_100fb0358);
  objc_stub::lock(self);
  puVar1 = (undefined8 *)(unaff_x20 + DAT_100fb0350);
  lVar4 = puVar1[1];
  objc_stub::unlock(self);
  lVar5 = *(long *)(unaff_x20 + DAT_101057300);
  self_00 = *(ID *)(lVar5 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
  objc_stub::lock(self_00);
  lVar6 = _TtC7PostHog22PostHogFileBackedQueue::items;
  _swift_beginAccess(lVar5 + _TtC7PostHog22PostHogFileBackedQueue::items,auStack_68,0,0);
  lVar6 = *(long *)(*(long *)(lVar5 + lVar6) + 0x10);
  uVar2 = objc_stub::unlock(self_00);
  if ((lVar4 <= lVar6) && (FUN_100137c74(), (uVar2 & 1) != 0)) {
    objc_stub::lock(self);
    uVar3 = *puVar1;
    objc_stub::unlock(self);
    _swift_retain();
    FUN_1001370a8(uVar3,thunk_FUN_100153abc);
    _swift_release();
  }
  return;
}



/* Address: 0x100136864 | FUN_100136864 */

void FUN_100136864(undefined8 param_1)

{
  FUN_100136870(param_1,FUN_10013662c);
  return;
}



/* Address: 0x100136870 | FUN_100136870 */

void FUN_100136870(undefined8 param_1,code *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *extraout_x1;
  undefined *puVar3;
  _StringGuts _Var4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  long unaff_x20;
  ID IVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  String separator_00;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String separator_01;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  
  lVar10 = *(long *)(unaff_x20 + DAT_100fb0360);
  local_68 = param_1;
  if (0 < lVar10) {
    IVar8 = *(ID *)(unaff_x20 + DAT_100fb0370);
    objc_stub::lock(IVar8);
    FUN_100136c64();
    if (lVar10 <= *(long *)(unaff_x20 + DAT_100fb0380)) {
      objc_stub::unlock(IVar8);
      objc_stub::lock(IVar8);
      FUN_100136eb0();
      objc_stub::unlock(IVar8);
      return;
    }
    *(long *)(unaff_x20 + DAT_100fb0380) = *(long *)(unaff_x20 + DAT_100fb0380) + 1;
    objc_stub::unlock(IVar8);
  }
  lVar1 = _TtC7PostHog22PostHogFileBackedQueue::itemsLock;
  lVar9 = *(long *)(unaff_x20 + DAT_101057300);
  IVar8 = *(ID *)(lVar9 + _TtC7PostHog22PostHogFileBackedQueue::itemsLock);
  objc_stub::lock(IVar8);
  lVar10 = _TtC7PostHog22PostHogFileBackedQueue::items;
  pcVar5 = (char *)0x0;
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar9 + _TtC7PostHog22PostHogFileBackedQueue::items,auStack_88);
  lVar10 = *(long *)(*(long *)(lVar9 + lVar10) + 0x10);
  objc_stub::unlock(IVar8);
  puVar3 = extraout_x1;
  if (*(long *)(unaff_x20 + 0xe8) <= lVar10) {
    if (DAT_101057340 == 1) {
      pcVar6 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar6[0x18] = '\x02';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x10] = '\x01';
      pcVar6[0x11] = '\0';
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = '\0';
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar6[0x20] = '/';
      pcVar6[0x21] = '\0';
      pcVar6[0x22] = '\0';
      pcVar6[0x23] = '\0';
      pcVar6[0x24] = '\0';
      pcVar6[0x25] = '\0';
      pcVar6[0x26] = '\0';
      pcVar6[0x27] = -0x30;
      pcVar6[0x28] = -0x50;
      pcVar6[0x29] = '4';
      pcVar6[0x2a] = -0x27;
      pcVar6[0x2b] = '\0';
      pcVar6[0x2c] = '\x01';
      pcVar6[0x2d] = '\0';
      pcVar6[0x2e] = '\0';
      pcVar6[0x2f] = -0x80;
      SVar14.bridgeObject = (void *)0x20;
      SVar14.str = pcVar6;
      puVar3 = (undefined *)0x20;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      pvVar7 = (void *)0xa;
      pcVar5 = (char *)0xe100000000000000;
      Swift::_print(SVar14,separator);
      _swift_release(pcVar6);
    }
    FUN_1001278f8(0);
  }
  puVar2 = &local_68;
  (**(code **)(unaff_x20 + 0x98))(puVar2);
  if ((ulong)puVar3 >> 0x3c < 0xf) {
    _Var4.unknown = puVar3;
    FUN_100127abc();
    Swift::_StringGuts::grow(0x14,_Var4);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar6 = (char *)&local_68;
    (**(code **)(unaff_x20 + 0xb8))();
    SVar12.bridgeObject = _Var4.unknown;
    SVar12.str = pcVar6;
    SVar17.bridgeObject = pvVar7;
    SVar17.str = pcVar5;
    Swift::String::append(SVar12,SVar17);
    _swift_bridgeObjectRelease(_Var4.unknown);
    SVar13.bridgeObject = (void *)0xe900000000000020;
    SVar13.str = (char *)0x3a6874706544202e;
    SVar18.bridgeObject = pvVar7;
    SVar18.str = pcVar5;
    Swift::String::append(SVar13,SVar18);
    IVar8 = *(ID *)(lVar9 + lVar1);
    objc_stub::lock(IVar8);
    objc_stub::unlock(IVar8);
    SVar14 = Swift::CustomStringConvertible::get_description();
    SVar19.bridgeObject = pvVar7;
    SVar19.str = pcVar5;
    Swift::String::append(SVar14,SVar19);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    if ((DAT_101057340 & 1) != 0) {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar6 = (char *)0x7;
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      SVar15.bridgeObject = &DAT_e700000000000000;
      SVar15.str = (char *)0x20646575657551;
      SVar20.bridgeObject = pvVar7;
      SVar20.str = pcVar6;
      Swift::String::append(SVar15,SVar20);
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = '[';
      pcVar5[0x21] = 'P';
      pcVar5[0x22] = 'o';
      pcVar5[0x23] = 's';
      pcVar5[0x24] = 't';
      pcVar5[0x25] = 'H';
      pcVar5[0x26] = 'o';
      pcVar5[0x27] = 'g';
      pcVar5[0x28] = ']';
      pcVar5[0x29] = ' ';
      pcVar5[0x2a] = '\0';
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\0';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x16;
      SVar16.bridgeObject = (void *)0x20;
      SVar16.str = pcVar5;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar16,separator_01);
      _swift_release(pcVar5);
    }
    _swift_bridgeObjectRelease(&DAT_e700000000000000);
    (*param_2)();
    FUN_10003bf18(puVar2,puVar3);
  }
  else if ((DAT_101057340 & 1) != 0) {
    pcVar5 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar5[0x18] = '\x02';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x10] = '\x01';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar5[0x20] = '.';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = -0x30;
    pcVar5[0x28] = -0x80;
    pcVar5[0x29] = '4';
    pcVar5[0x2a] = -0x27;
    pcVar5[0x2b] = '\0';
    pcVar5[0x2c] = '\x01';
    pcVar5[0x2d] = '\0';
    pcVar5[0x2e] = '\0';
    pcVar5[0x2f] = -0x80;
    SVar11.bridgeObject = (void *)0x20;
    SVar11.str = pcVar5;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar11,separator_00);
    _swift_release(pcVar5);
  }
  return;
}



/* Address: 0x100136c64 | FUN_100136c64 */

void FUN_100136c64(void)

{
  long lVar1;
  undefined *puVar2;
  Date DVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  Date DVar7;
  code *pcVar8;
  code *pcVar9;
  Date DVar10;
  long lVar11;
  double dVar12;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar7.unknown = puVar6 + -extraout_x12;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  DVar10.unknown = DVar7.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)DVar10.unknown - extraout_x12_00;
  Foundation::Date::init();
  lVar1 = DAT_100fb0378;
  _swift_beginAccess(unaff_x20 + DAT_100fb0378,auStack_88,0,0);
  FUN_1000f8cac(unaff_x20 + lVar1,DVar7.unknown,&DAT_100faf508,&DAT_100c2e2e0);
  puVar4 = DVar7.unknown;
  (**(code **)(lVar11 + 0x30))(DVar7.unknown,1,DVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(DVar7.unknown,&DAT_100faf508,&DAT_100c2e2e0);
    (**(code **)(lVar11 + 0x20))(puVar6,lVar5,DVar3.unknown);
  }
  else {
    pcVar9 = *(code **)(lVar11 + 0x20);
    (*pcVar9)(DVar10.unknown,DVar7.unknown,DVar3.unknown);
    dVar12 = Foundation::Date::timeIntervalSince(DVar10,DVar7);
    pcVar8 = *(code **)(lVar11 + 8);
    (*pcVar8)(DVar10.unknown,DVar3.unknown);
    if ((0.0 <= dVar12) && (dVar12 < *(double *)(unaff_x20 + DAT_100fb0368))) {
      (*pcVar8)(lVar5,DVar3.unknown);
      return;
    }
    (*pcVar9)(puVar6,lVar5,DVar3.unknown);
  }
  (**(code **)(lVar11 + 0x38))(puVar6,0,1,DVar3.unknown);
  _swift_beginAccess(unaff_x20 + lVar1,auStack_a0,0x21,0);
  FUN_100155a94(puVar6,unaff_x20 + lVar1);
  _swift_endAccess(auStack_a0);
  *(undefined8 *)(unaff_x20 + DAT_100fb0380) = 0;
  *(undefined1 *)(unaff_x20 + DAT_100fb0388) = 0;
  return;
}



/* Address: 0x100136eb0 | FUN_100136eb0 */

void FUN_100136eb0(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
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
  String separator;
  char *local_50;
  void *local_48;
  
  if ((*(byte *)(param_1 + DAT_100fb0388) & 1) == 0) {
    *(undefined1 *)(param_1 + DAT_100fb0388) = 1;
    local_50 = (char *)0x0;
    local_48 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x42,param_2);
    SVar5.bridgeObject = (void *)0x8000000100d934e0;
    SVar5.str = (char *)0xd000000000000019;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar5,SVar10);
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    Swift::String::append(SVar5,SVar11);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar6.bridgeObject = &DAT_e500000000000000;
    SVar6.str = (char *)0x2072657020;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar6,SVar12);
    pcVar3 = 
    PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
    ;
    double::_write((undefined *)&local_50,*(double *)(param_1 + DAT_100fb0368));
    SVar7.bridgeObject = (void *)0x8000000100d93500;
    SVar7.str = (char *)0xd000000000000020;
    SVar13.bridgeObject = param_4;
    SVar13.str = pcVar3;
    Swift::String::append(SVar7,SVar13);
    pvVar1 = local_48;
    pcVar3 = local_50;
    if (DAT_101057340 == '\x01') {
      pcVar2 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar4 = (char *)0x7;
      _swift_allocObject();
      pcVar2[0x18] = '\x02';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x10] = '\x01';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      local_50 = (char *)0x676f4874736f505b;
      local_48 = (void *)0xea0000000000205d;
      SVar8.bridgeObject = pvVar1;
      SVar8.str = pcVar3;
      SVar14.bridgeObject = param_4;
      SVar14.str = pcVar4;
      Swift::String::append(SVar8,SVar14);
      *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar2 + 0x20) = local_50;
      *(void **)(pcVar2 + 0x28) = local_48;
      SVar9.bridgeObject = (void *)0x20;
      SVar9.str = pcVar2;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar9,separator);
      _swift_release(pcVar2);
    }
    _swift_bridgeObjectRelease(pvVar1);
  }
  return;
}



/* Address: 0x100137084 | FUN_100137084 */

void FUN_100137084(void)

{
  FUN_1001370a8();
  return;
}



/* Address: 0x1001370a8 | FUN_1001370a8 */

void FUN_1001370a8(undefined8 param_1,undefined8 param_2,DispatchQoS param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  DispatchWorkItemFlags DVar1;
  void *aBlock;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  DispatchWorkItemFlags qos;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  local_c0 = param_7;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  lVar5 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  qos.unknown = (undefined *)(lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_b8 = *(undefined8 *)(unaff_x20 + DAT_100fb0348);
  _swift_allocObject(param_4,0x18,7);
  _swift_weakInit(param_4 + 0x10);
  _swift_allocObject(param_5,0x30,7);
  *(long *)(param_5 + 0x10) = param_4;
  *(undefined8 *)(param_5 + 0x18) = param_1;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  *(undefined **)(param_5 + 0x28) = param_3.unknown;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  uStack_78 = local_c0;
  local_70 = param_6;
  local_68 = param_5;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_4);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_3);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100fafdf0;
  FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar4 = &DAT_100fafe00;
  FUN_100155c48(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830);
  Swift::SetAlgebra::_init(lVar5,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar5,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  lVar5 = local_68;
  _swift_release(param_4);
  _swift_release(lVar5);
  return;
}



/* Address: 0x1001372e8 | FUN_1001372e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001372e8(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,code *param_8)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ID self;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  String SVar15;
  String separator;
  long local_80;
  undefined1 auStack_78 [24];
  
  puVar10 = auStack_78;
  _swift_beginAccess(param_1 + 0x10,puVar10,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_1001378f8();
    if (puVar10 == (undefined1 *)0x0) {
      self = *(ID *)(param_1 + DAT_100fb0328);
      objc_stub::lock(self);
      if ((*(byte *)(param_1 + DAT_100fb0320) & 1) == 0) {
        *(undefined1 *)(param_1 + DAT_100fb0320) = 1;
        objc_stub::unlock(self);
        uVar12 = *(undefined8 *)(param_1 + DAT_101057300);
        _swift_retain(uVar12);
        FUN_100127e2c();
        _swift_release(uVar12);
        lVar13 = *(long *)(param_2 + 0x10);
        puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (lVar13 != 0) {
          puVar14 = (undefined8 *)(param_2 + 0x28);
          do {
            uVar12 = puVar14[-1];
            uVar4 = *puVar14;
            pcVar2 = *(code **)(param_1 + 0xa8);
            FUN_1001037b4(uVar12,uVar4);
            (*pcVar2)(&local_80,uVar12,uVar4);
            lVar5 = local_80;
            if (local_80 == 0) {
              FUN_10003bf2c(uVar12,uVar4);
            }
            else {
              puVar8 = puVar9;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
                 (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
                if ((ulong)puVar9 >> 0x3e == 0) {
                  lVar7 = *(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  _Var1.unknown = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar9) {
                    _Var1.unknown = puVar9;
                  }
                  lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
                }
                puVar8 = (undefined *)0x0;
                (*param_8)(0,lVar7 + 1,1,puVar9);
              }
              uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
              uVar3 = *(ulong *)(uVar11 + 0x10);
              puVar9 = puVar8;
              if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar3) {
                puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
                (*param_8)(puVar9,uVar3 + 1,1,puVar8);
                uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
              }
              *(ulong *)(uVar11 + 0x10) = uVar3 + 1;
              *(long *)(uVar11 + uVar3 * 8 + 0x20) = lVar5;
              FUN_10003bf2c(uVar12,uVar4);
            }
            puVar14 = puVar14 + 2;
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
        }
        _swift_allocObject(param_5,0x18,7);
        _swift_weakInit(param_5 + 0x10,param_1);
        _swift_allocObject(param_6,0x20,7);
        *(long *)(param_6 + 0x10) = param_5;
        *(long *)(param_6 + 0x18) = param_2;
        _swift_bridgeObjectRetain(puVar9);
        (*param_3)();
        _swift_release(param_1);
        _swift_release(param_6);
        _swift_bridgeObjectRelease_n(puVar9,2);
      }
      else {
        objc_stub::unlock(self);
        if (DAT_101057340 == '\x01') {
          pcVar6 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar6[0x18] = '\x02';
          pcVar6[0x19] = '\0';
          pcVar6[0x1a] = '\0';
          pcVar6[0x1b] = '\0';
          pcVar6[0x1c] = '\0';
          pcVar6[0x1d] = '\0';
          pcVar6[0x1e] = '\0';
          pcVar6[0x1f] = '\0';
          pcVar6[0x10] = '\x01';
          pcVar6[0x11] = '\0';
          pcVar6[0x12] = '\0';
          pcVar6[0x13] = '\0';
          pcVar6[0x14] = '\0';
          pcVar6[0x15] = '\0';
          pcVar6[0x16] = '\0';
          pcVar6[0x17] = '\0';
          *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar6[0x20] = '\x1a';
          pcVar6[0x21] = '\0';
          pcVar6[0x22] = '\0';
          pcVar6[0x23] = '\0';
          pcVar6[0x24] = '\0';
          pcVar6[0x25] = '\0';
          pcVar6[0x26] = '\0';
          pcVar6[0x27] = -0x30;
          pcVar6[0x28] = -0x50;
          pcVar6[0x29] = '5';
          pcVar6[0x2a] = -0x27;
          pcVar6[0x2b] = '\0';
          pcVar6[0x2c] = '\x01';
          pcVar6[0x2d] = '\0';
          pcVar6[0x2e] = '\0';
          pcVar6[0x2f] = -0x80;
          SVar15.bridgeObject = (void *)0x20;
          SVar15.str = pcVar6;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar15,separator);
          _swift_release(pcVar6);
        }
        _swift_release(param_1);
      }
    }
    else {
      _swift_release(param_1);
      _swift_bridgeObjectRelease(puVar10);
    }
  }
  return;
}



/* Address: 0x100137620 | FUN_100137620 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100137620(ulong param_1,long param_2,long param_3)

{
  char *pcVar1;
  ID self;
  long lVar2;
  undefined8 uVar3;
  String SVar4;
  String separator;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (((param_1 & 1) != 0) && (lVar2 = *(long *)(param_3 + 0x10), lVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_2 + DAT_101057300);
      _swift_retain(uVar3);
      FUN_100128a00(lVar2);
      _swift_release(uVar3);
      if (DAT_101057340 == '\x01') {
        pcVar1 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar1[0x18] = '\x02';
        pcVar1[0x19] = '\0';
        pcVar1[0x1a] = '\0';
        pcVar1[0x1b] = '\0';
        pcVar1[0x1c] = '\0';
        pcVar1[0x1d] = '\0';
        pcVar1[0x1e] = '\0';
        pcVar1[0x1f] = '\0';
        pcVar1[0x10] = '\x01';
        pcVar1[0x11] = '\0';
        pcVar1[0x12] = '\0';
        pcVar1[0x13] = '\0';
        pcVar1[0x14] = '\0';
        pcVar1[0x15] = '\0';
        pcVar1[0x16] = '\0';
        pcVar1[0x17] = '\0';
        *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar1[0x20] = '\x14';
        pcVar1[0x21] = '\0';
        pcVar1[0x22] = '\0';
        pcVar1[0x23] = '\0';
        pcVar1[0x24] = '\0';
        pcVar1[0x25] = '\0';
        pcVar1[0x26] = '\0';
        pcVar1[0x27] = -0x30;
        pcVar1[0x28] = -0x30;
        pcVar1[0x29] = '5';
        pcVar1[0x2a] = -0x27;
        pcVar1[0x2b] = '\0';
        pcVar1[0x2c] = '\x01';
        pcVar1[0x2d] = '\0';
        pcVar1[0x2e] = '\0';
        pcVar1[0x2f] = -0x80;
        SVar4.bridgeObject = (void *)0x20;
        SVar4.str = pcVar1;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar4,separator);
        _swift_release(pcVar1);
      }
    }
    self = *(ID *)(param_2 + DAT_100fb0328);
    objc_stub::lock(self);
    *(undefined1 *)(param_2 + DAT_100fb0320) = 0;
    objc_stub::unlock(self);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x10013777c | FUN_10013777c */

void FUN_10013777c(double param_1)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  ID self;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_80 + -extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar4 - extraout_x12;
  DVar3 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(param_1,DVar3);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(lVar4,DVar2.unknown);
  self = *(ID *)(unaff_x20 + 0xf8);
  objc_stub::lock(self);
  (**(code **)(lVar7 + 0x10))(puVar5,lVar6,DVar2.unknown);
  (**(code **)(lVar7 + 0x38))(puVar5,0,1,DVar2.unknown);
  lVar4 = DAT_100fb02f8;
  _swift_beginAccess(unaff_x20 + DAT_100fb02f8,auStack_78,0x21,0);
  FUN_100155a94(puVar5,unaff_x20 + lVar4);
  _swift_endAccess(auStack_78);
  objc_stub::unlock(self);
  (*pcVar8)(lVar6,DVar2.unknown);
  return;
}



/* Address: 0x1001378f4 | thunk_FUN_1001378f8 */

undefined1  [16] thunk_FUN_1001378f8(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Date DVar4;
  Date DVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  Date DVar11;
  char *pcVar12;
  long extraout_x8;
  undefined *puVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  ID self;
  String SVar18;
  undefined1 auVar19 [16];
  String SVar20;
  String SVar21;
  undefined auStack_b0 [8];
  Date DStack_a8;
  Date DStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  puStack_90 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lStack_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lStack_98 + 0x40));
  DStack_a8.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  puVar7 = &DAT_100fb0cc0;
  DStack_a0.unknown = puVar13;
  FUN_1000f7830(&DAT_100fb0cc0,&DAT_100c2efa0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar16 + -8) + 0x40));
  puVar17 = puVar13 + (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) - extraout_x8_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = puVar17 + -extraout_x12_00;
  self = *(ID *)(unaff_x20 + 0xf8);
  objc_stub::lock(self);
  lVar3 = DAT_100fb02f8;
  iVar2 = *(int *)(puVar7 + 0x30);
  cVar1 = *(char *)(unaff_x20 + 0x100);
  _swift_beginAccess(unaff_x20 + DAT_100fb02f8,auStack_78,0,0);
  FUN_1000f8cac(unaff_x20 + lVar3,puVar13 + (iVar2 - extraout_x8_00),&DAT_100faf508,&DAT_100c2e2e0);
  objc_stub::unlock(self);
  FUN_10011532c(puVar13 + (iVar2 - extraout_x8_00),puVar16,&DAT_100faf508,&DAT_100c2e2e0);
  if (cVar1 == '\x01') {
    uVar14 = 0x8000000100d935f0;
    FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
    uVar8 = 0xd000000000000024;
  }
  else {
    puVar7 = &DAT_100c2e2e0;
    FUN_1000f8cac(puVar16,puVar17,&DAT_100faf508);
    puVar13 = puStack_90;
    lVar3 = lStack_98;
    puVar9 = puVar17;
    (**(code **)(lStack_98 + 0x30))(puVar17,1,puStack_90);
    DVar5.unknown = DStack_a0.unknown;
    if ((int)puVar9 == 1) {
      FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
      puVar16 = puVar17;
    }
    else {
      DVar11.unknown = puVar13;
      (**(code **)(lVar3 + 0x20))(DStack_a0.unknown,puVar17);
      DVar4.unknown = DStack_a8.unknown;
      Foundation::Date::init();
      bVar6 = Foundation::Date::>_infix(DVar5,DVar4,DVar11);
      pcVar15 = *(code **)(lVar3 + 8);
      _Var10.unknown = puVar13;
      (*pcVar15)(DVar4.unknown);
      if (bVar6) {
        uStack_88 = 0;
        uStack_80 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x11,_Var10);
        _swift_bridgeObjectRelease(uStack_80);
        uStack_88 = 0x7520646573756170;
        uStack_80 = 0xee0060206c69746e;
        pcVar12 = PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8;
        FUN_100003a00(&DAT_100fb0cc8,PTR_typeMetadataAccessor_100ea7480);
        SVar18 = Swift::CustomStringConvertible::get_description();
        SVar20.bridgeObject = puVar7;
        SVar20.str = pcVar12;
        Swift::String::append(SVar18,SVar20);
        _swift_bridgeObjectRelease(SVar18.bridgeObject);
        SVar18.bridgeObject = (void *)0xe100000000000000;
        SVar18.str = (char *)0x60;
        SVar21.bridgeObject = puVar7;
        SVar21.str = pcVar12;
        Swift::String::append(SVar18,SVar21);
        uVar14 = uStack_80;
        uVar8 = uStack_88;
        (*pcVar15)(DVar5.unknown,puVar13);
        FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
        goto LAB_100137c50;
      }
      (*pcVar15)(DVar5.unknown,puVar13);
    }
    FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
    uVar8 = 0;
    uVar14 = 0;
  }
LAB_100137c50:
  auVar19._8_8_ = uVar14;
  auVar19._0_8_ = uVar8;
  return auVar19;
}



/* Address: 0x1001378f8 | FUN_1001378f8 */

undefined1  [16] FUN_1001378f8(void)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Date DVar4;
  Date DVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  Date DVar11;
  char *pcVar12;
  long extraout_x8;
  undefined *puVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  ID self;
  String SVar18;
  undefined1 auVar19 [16];
  String SVar20;
  String SVar21;
  undefined auStack_b0 [8];
  Date local_a8;
  Date local_a0;
  long local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puStack_90 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  local_a8.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  puVar7 = &DAT_100fb0cc0;
  local_a0.unknown = puVar13;
  FUN_1000f7830(&DAT_100fb0cc0,&DAT_100c2efa0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar16 + -8) + 0x40));
  puVar17 = puVar13 + (-(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) - extraout_x8_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = puVar17 + -extraout_x12_00;
  self = *(ID *)(unaff_x20 + 0xf8);
  objc_stub::lock(self);
  lVar3 = DAT_100fb02f8;
  iVar2 = *(int *)(puVar7 + 0x30);
  cVar1 = *(char *)(unaff_x20 + 0x100);
  _swift_beginAccess(unaff_x20 + DAT_100fb02f8,auStack_78,0,0);
  FUN_1000f8cac(unaff_x20 + lVar3,puVar13 + (iVar2 - extraout_x8_00),&DAT_100faf508,&DAT_100c2e2e0);
  objc_stub::unlock(self);
  FUN_10011532c(puVar13 + (iVar2 - extraout_x8_00),puVar16,&DAT_100faf508,&DAT_100c2e2e0);
  if (cVar1 == '\x01') {
    uVar14 = 0x8000000100d935f0;
    FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
    uVar8 = 0xd000000000000024;
  }
  else {
    puVar7 = &DAT_100c2e2e0;
    FUN_1000f8cac(puVar16,puVar17,&DAT_100faf508);
    puVar13 = puStack_90;
    lVar3 = local_98;
    puVar9 = puVar17;
    (**(code **)(local_98 + 0x30))(puVar17,1,puStack_90);
    DVar5.unknown = local_a0.unknown;
    if ((int)puVar9 == 1) {
      FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
      puVar16 = puVar17;
    }
    else {
      DVar11.unknown = puVar13;
      (**(code **)(lVar3 + 0x20))(local_a0.unknown,puVar17);
      DVar4.unknown = local_a8.unknown;
      Foundation::Date::init();
      bVar6 = Foundation::Date::>_infix(DVar5,DVar4,DVar11);
      pcVar15 = *(code **)(lVar3 + 8);
      _Var10.unknown = puVar13;
      (*pcVar15)(DVar4.unknown);
      if (bVar6) {
        local_88 = 0;
        local_80 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x11,_Var10);
        _swift_bridgeObjectRelease(local_80);
        local_88 = 0x7520646573756170;
        local_80 = 0xee0060206c69746e;
        pcVar12 = PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8;
        FUN_100003a00(&DAT_100fb0cc8,PTR_typeMetadataAccessor_100ea7480);
        SVar18 = Swift::CustomStringConvertible::get_description();
        SVar20.bridgeObject = puVar7;
        SVar20.str = pcVar12;
        Swift::String::append(SVar18,SVar20);
        _swift_bridgeObjectRelease(SVar18.bridgeObject);
        SVar18.bridgeObject = (void *)0xe100000000000000;
        SVar18.str = (char *)0x60;
        SVar21.bridgeObject = puVar7;
        SVar21.str = pcVar12;
        Swift::String::append(SVar18,SVar21);
        uVar14 = local_80;
        uVar8 = local_88;
        (*pcVar15)(DVar5.unknown,puVar13);
        FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
        goto LAB_100137c50;
      }
      (*pcVar15)(DVar5.unknown,puVar13);
    }
    FUN_1000fb4c4(puVar16,&DAT_100faf508,&DAT_100c2e2e0);
    uVar8 = 0;
    uVar14 = 0;
  }
LAB_100137c50:
  auVar19._8_8_ = uVar14;
  auVar19._0_8_ = uVar8;
  return auVar19;
}



/* Address: 0x100137c74 | FUN_100137c74 */

bool FUN_100137c74(char *param_1,void *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String separator;
  
  FUN_1001378f8();
  if (param_2 != (void *)0x0) {
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1;
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar3,SVar6);
    _swift_bridgeObjectRelease(param_2);
    if (DAT_101057340 == '\x01') {
      pcVar1 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar2 = (char *)0x7;
      _swift_allocObject();
      pcVar1[0x18] = '\x02';
      pcVar1[0x19] = '\0';
      pcVar1[0x1a] = '\0';
      pcVar1[0x1b] = '\0';
      pcVar1[0x1c] = '\0';
      pcVar1[0x1d] = '\0';
      pcVar1[0x1e] = '\0';
      pcVar1[0x1f] = '\0';
      pcVar1[0x10] = '\x01';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      SVar4.bridgeObject = (void *)0xed00002073692065;
      SVar4.str = (char *)0x7565757120656854;
      SVar7.bridgeObject = param_4;
      SVar7.str = pcVar2;
      Swift::String::append(SVar4,SVar7);
      *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar1[0x20] = '[';
      pcVar1[0x21] = 'P';
      pcVar1[0x22] = 'o';
      pcVar1[0x23] = 's';
      pcVar1[0x24] = 't';
      pcVar1[0x25] = 'H';
      pcVar1[0x26] = 'o';
      pcVar1[0x27] = 'g';
      pcVar1[0x28] = ']';
      pcVar1[0x29] = ' ';
      pcVar1[0x2a] = '\0';
      pcVar1[0x2b] = '\0';
      pcVar1[0x2c] = '\0';
      pcVar1[0x2d] = '\0';
      pcVar1[0x2e] = '\0';
      pcVar1[0x2f] = -0x16;
      SVar5.bridgeObject = (void *)0x20;
      SVar5.str = pcVar1;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar5,separator);
      _swift_release(pcVar1);
    }
    _swift_bridgeObjectRelease(0xed00002073692065);
  }
  return param_2 == (void *)0x0;
}



/* Address: 0x100137da0 | FUN_100137da0 */

undefined * FUN_100137da0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  _DictionaryStorage *this;
  ulong uVar5;
  AnyHashable AVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *capacity;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 auStack_128 [40];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_88 [40];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae440;
    FUN_1000f7830(&DAT_100fae440,&DAT_100c2de10);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar12 = capacity;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(param_1);
  lVar13 = 0;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar7 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar13 << 6;
      puVar10 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10);
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar7 * 0x20,auStack_88);
      local_b8 = uVar1;
      uStack_b0 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      _swift_dynamicCast(&local_150,&local_b8,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,7);
      FUN_100011080(auStack_88,auStack_128);
      uStack_f8 = uStack_148;
      local_100 = local_150;
      uStack_e8 = uStack_138;
      uStack_f0 = local_140;
      local_e0 = local_130;
      FUN_100011080(auStack_128,auStack_d8);
      uStack_148 = uStack_f8;
      local_150 = local_100;
      uStack_138 = uStack_e8;
      local_140 = uStack_f0;
      local_130 = local_e0;
      AVar6.unknown = (undefined *)&local_b8;
      FUN_100011080(auStack_d8);
      uVar5 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(puVar12 + 0x28),AVar6);
      uVar11 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
      uVar8 = uVar5 >> 6;
      uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar12 + uVar8 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar7 == 0) {
        bVar4 = false;
        uVar7 = 0x3f - uVar11 >> 6;
        do {
          uVar5 = uVar8 + 1;
          if ((uVar5 == uVar7) && (bVar4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10013804c);
            (*pcVar3)();
          }
          uVar8 = 0;
          if (uVar5 != uVar7) {
            uVar8 = uVar5;
          }
          bVar4 = (bool)(uVar5 == uVar7 | bVar4);
        } while (*(ulong *)(puVar12 + uVar8 * 8 + 0x40) == 0xffffffffffffffff);
        uVar7 = ~*(ulong *)(puVar12 + uVar8 * 8 + 0x40);
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar8 << 6;
      }
      else {
        uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar8 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(puVar12 + uVar8 + 0x40)
      ;
      puVar10 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar7 * 0x28);
      puVar10[1] = uStack_148;
      *puVar10 = local_150;
      puVar10[3] = uStack_138;
      puVar10[2] = local_140;
      puVar10[4] = local_130;
      FUN_100011080(&local_b8,*(long *)(puVar12 + 0x38) + uVar7 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar4 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100138048);
      (*pcVar3)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar13) break;
    uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
  }
  _swift_release(puVar12);
  _swift_release(param_1);
  return puVar12;
}



/* Address: 0x10013804c | FUN_10013804c */

undefined * FUN_10013804c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  _DictionaryStorage *this;
  ulong uVar4;
  AnyHashable AVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long lStack_130;
  undefined8 local_128;
  undefined1 auStack_120 [32];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar11 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae440;
    FUN_1000f7830(&DAT_100fae440,&DAT_100c2de10);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar11);
    puVar12 = puVar11;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  while( true ) {
    for (; uVar13 != 0; uVar13 = uVar13 - 1 & uVar13) {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar14 << 6;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      local_158 = *puVar9;
      uVar1 = puVar9[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
      uStack_150 = uVar1;
      _swift_bridgeObjectRetain_n(uVar1,2);
      _swift_bridgeObjectRetain_n(uVar15,2);
      _swift_dynamicCast(&local_148,&local_158,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,7);
      puVar11 = &DAT_100fae898;
      local_160 = uVar15;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      _swift_dynamicCast(auStack_120,&local_160,puVar11,PTR___type_metadata_for_Any_100eae0c0 + 8,7)
      ;
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(uVar1);
      if (lStack_130 == 0) {
        _swift_release(param_1);
        FUN_1000fb4c4(&local_148,&DAT_100fb0cb8,&DAT_100c2ef98);
        _swift_release(puVar12);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100138368);
        (*pcVar2)();
      }
      uStack_f8 = uStack_140;
      local_100 = local_148;
      lStack_e8 = lStack_130;
      uStack_f0 = local_138;
      local_e0 = local_128;
      FUN_100011080(auStack_120,auStack_d8);
      uStack_88 = uStack_f8;
      local_90 = local_100;
      lStack_78 = lStack_e8;
      uStack_80 = uStack_f0;
      local_70 = local_e0;
      AVar5.unknown = auStack_b0;
      FUN_100011080(auStack_d8);
      uVar4 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(puVar12 + 0x28),AVar5);
      uVar10 = -1L << ((ulong)(byte)puVar12[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar4 >> 6;
      uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar3 = false;
        uVar6 = 0x3f - uVar10 >> 6;
        do {
          uVar4 = uVar7 + 1;
          if ((uVar4 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10013833c);
            (*pcVar2)();
          }
          uVar7 = 0;
          if (uVar4 != uVar6) {
            uVar7 = uVar4;
          }
          bVar3 = (bool)(uVar4 == uVar6 | bVar3);
        } while (*(ulong *)(puVar12 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar12 + uVar7 * 8 + 0x40);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar7 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar12 + uVar7 + 0x40) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar12 + uVar7 + 0x40)
      ;
      puVar9 = (undefined8 *)(*(long *)(puVar12 + 0x30) + uVar6 * 0x28);
      puVar9[1] = uStack_88;
      *puVar9 = local_90;
      puVar9[3] = lStack_78;
      puVar9[2] = uStack_80;
      puVar9[4] = local_70;
      FUN_100011080(auStack_b0,*(long *)(puVar12 + 0x38) + uVar6 * 0x20);
      *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
    }
    bVar3 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100138338);
      (*pcVar2)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(puVar12);
  _swift_release(param_1);
  return puVar12;
}



/* Address: 0x100138368 | FUN_100138368 */

undefined * FUN_100138368(long param_1)

{
  long lVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  _DictionaryStorage *this;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *capacity;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [32];
  ulong local_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae488;
    FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar12 = capacity;
  }
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar12);
  _swift_bridgeObjectRetain(param_1);
  lVar14 = 0;
  while( true ) {
    while (uVar13 != 0) {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar9 = lVar14 << 10 | LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) << 4;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x30) + uVar9);
      local_e0 = *puVar2;
      uVar5 = puVar2[1];
      puVar3 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9);
      local_f0 = *puVar3;
      uVar4 = puVar3[1];
      uStack_e8 = uVar4;
      local_d8 = uVar5;
      _swift_bridgeObjectRetain_n(uVar5,2);
      _swift_bridgeObjectRetain_n(uVar4,2);
      _swift_dynamicCast(auStack_d0,&local_f0,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Any_100eae0c0 + 8,7);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar5);
      if (local_d8 == 0) {
        _swift_release(param_1);
        FUN_1000fb4c4(&local_e0,&DAT_100fb09e8,&DAT_100c2eeb8);
        _swift_release(puVar12);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10013860c);
        (*pcVar6)();
      }
      uVar13 = uVar13 - 1 & uVar13;
      local_b0 = local_e0;
      uStack_a8 = local_d8;
      FUN_100011080(auStack_d0,auStack_a0);
      uVar9 = uStack_a8;
      uVar5 = local_b0;
      FUN_100011080(auStack_a0,auStack_80);
      uVar8 = uVar5;
      uVar10 = uVar9;
      FUN_100071370();
      if ((uVar10 & 1) == 0) {
        if (*(ulong *)(puVar12 + 0x18) <= *(ulong *)(puVar12 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001385dc);
          (*pcVar6)();
        }
        uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar12 + uVar10 + 0x40) =
             *(ulong *)(puVar12 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar9;
        FUN_100011080(auStack_80,*(long *)(puVar12 + 0x38) + uVar8 * 0x20);
        if (SCARRY8(*(long *)(puVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1001385e0);
          (*pcVar6)();
        }
        *(long *)(puVar12 + 0x10) = *(long *)(puVar12 + 0x10) + 1;
      }
      else {
        puVar2 = (ulong *)(*(long *)(puVar12 + 0x30) + uVar8 * 0x10);
        uVar10 = puVar2[1];
        *puVar2 = uVar5;
        puVar2[1] = uVar9;
        _swift_bridgeObjectRelease(uVar10);
        lVar1 = *(long *)(puVar12 + 0x38) + uVar8 * 0x20;
        FUN_100004594(lVar1);
        FUN_100011080(auStack_80,lVar1);
      }
    }
    bVar7 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001385d8);
      (*pcVar6)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar14) break;
    uVar13 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
  _swift_release(puVar12);
  _swift_release(param_1);
  return puVar12;
}



/* Address: 0x10013860c | FUN_10013860c */

undefined * FUN_10013860c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  _DictionaryStorage *this;
  ulong uVar6;
  AnyHashable AVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long lStack_140;
  undefined8 local_138;
  undefined1 auStack_130 [32];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar14 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar13 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae440;
    FUN_1000f7830(&DAT_100fae440,&DAT_100c2de10);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar13);
    puVar14 = puVar13;
  }
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_retain(puVar14);
  _swift_bridgeObjectRetain(param_1);
  lVar16 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar8 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = lVar16 << 10 | LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) << 4;
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar8);
      local_168 = *puVar11;
      uVar2 = puVar11[1];
      puVar11 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar8);
      uVar1 = *puVar11;
      uVar3 = puVar11[1];
      uStack_160 = uVar2;
      _swift_bridgeObjectRetain_n(uVar2,2);
      _swift_bridgeObjectRetain_n(uVar3,2);
      puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
      _swift_dynamicCast(&local_158,&local_168,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,7);
      local_178 = uVar1;
      uStack_170 = uVar3;
      _swift_dynamicCast(auStack_130,&local_178,puVar13,PTR___type_metadata_for_Any_100eae0c0 + 8,7)
      ;
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      if (lStack_140 == 0) {
        _swift_release(param_1);
        FUN_1000fb4c4(&local_158,&DAT_100fb0cb8,&DAT_100c2ef98);
        _swift_release(puVar14);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10013892c);
        (*pcVar4)();
      }
      uStack_108 = uStack_150;
      local_110 = local_158;
      lStack_f8 = lStack_140;
      uStack_100 = local_148;
      local_f0 = local_138;
      FUN_100011080(auStack_130,auStack_e8);
      uStack_98 = uStack_108;
      local_a0 = local_110;
      lStack_88 = lStack_f8;
      uStack_90 = uStack_100;
      local_80 = local_f0;
      AVar7.unknown = auStack_c0;
      FUN_100011080(auStack_e8);
      uVar6 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(puVar14 + 0x28),AVar7);
      uVar12 = -1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar12 ^ 0xffffffffffffffff);
      uVar9 = uVar6 >> 6;
      uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(puVar14 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar8 == 0) {
        bVar5 = false;
        uVar8 = 0x3f - uVar12 >> 6;
        do {
          uVar6 = uVar9 + 1;
          if ((uVar6 == uVar8) && (bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100138900);
            (*pcVar4)();
          }
          uVar9 = 0;
          if (uVar6 != uVar8) {
            uVar9 = uVar6;
          }
          bVar5 = (bool)(uVar6 == uVar8 | bVar5);
        } while (*(ulong *)(puVar14 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
        uVar8 = ~*(ulong *)(puVar14 + uVar9 * 8 + 0x40);
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar9 << 6;
      }
      else {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar14 + uVar9 + 0x40) = 1L << (uVar8 & 0x3f) | *(ulong *)(puVar14 + uVar9 + 0x40)
      ;
      puVar11 = (undefined8 *)(*(long *)(puVar14 + 0x30) + uVar8 * 0x28);
      puVar11[1] = uStack_98;
      *puVar11 = local_a0;
      puVar11[3] = lStack_88;
      puVar11[2] = uStack_90;
      puVar11[4] = local_80;
      FUN_100011080(auStack_c0,*(long *)(puVar14 + 0x38) + uVar8 * 0x20);
      *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
    }
    bVar5 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1001388fc);
      (*pcVar4)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar16) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  _swift_release(puVar14);
  _swift_release(param_1);
  return puVar14;
}



/* Address: 0x10013892c | FUN_10013892c */

void FUN_10013892c(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x100);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x10013893c | FUN_10013893c */

void FUN_10013893c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x100);
  *(undefined8 *)(*param_2 + 0x100) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10013896c | FUN_10013896c */

void FUN_10013896c(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0xf8);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x10013897c | FUN_10013897c */

void FUN_10013897c(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0xf8);
  *(undefined8 *)(*param_2 + 0xf8) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1001389ac | FUN_1001389ac */

undefined * FUN_1001389ac(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  _DictionaryStorage *this;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_168;
  ulong uStack_160;
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [32];
  ulong local_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae488;
    FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar9 = capacity;
  }
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar10 = 0;
  while( true ) {
    while (uVar11 != 0) {
      uVar12 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar10 << 6;
      FUN_1000f1c9c(*(long *)(param_1 + 0x30) + uVar12 * 0x28,auStack_b0);
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar12 * 0x20,auStack_88);
      FUN_1000f1c9c(auStack_b0,auStack_158);
      puVar5 = &local_168;
      _swift_dynamicCast(puVar5,auStack_158,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      uVar2 = uStack_160;
      uVar12 = local_168;
      if ((int)puVar5 == 0) {
        _swift_release(param_1);
        FUN_1000fb4c4(auStack_b0,&DAT_100fb0ca0,&DAT_100c2ef90);
        _swift_release(puVar9);
        return (undefined *)0x0;
      }
      uVar11 = uVar11 - 1 & uVar11;
      FUN_10000cbfc(auStack_88,auStack_120);
      FUN_1000fb4c4(auStack_b0,&DAT_100fb0ca0,&DAT_100c2ef90);
      local_100 = uVar12;
      uStack_f8 = uVar2;
      FUN_100011080(auStack_120,auStack_f0);
      uVar2 = uStack_f8;
      uVar12 = local_100;
      FUN_100011080(auStack_f0,auStack_d0);
      uVar6 = uVar12;
      uVar7 = uVar2;
      FUN_100071370();
      if ((uVar7 & 1) == 0) {
        if (*(ulong *)(puVar9 + 0x18) <= *(ulong *)(puVar9 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100138c44);
          (*pcVar3)();
        }
        uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar9 + uVar7 + 0x40) = *(ulong *)(puVar9 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f)
        ;
        puVar5 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar6 * 0x10);
        *puVar5 = uVar12;
        puVar5[1] = uVar2;
        FUN_100011080(auStack_d0,*(long *)(puVar9 + 0x38) + uVar6 * 0x20);
        if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100138c48);
          (*pcVar3)();
        }
        *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      }
      else {
        puVar5 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar6 * 0x10);
        uVar7 = puVar5[1];
        *puVar5 = uVar12;
        puVar5[1] = uVar2;
        _swift_bridgeObjectRelease(uVar7);
        lVar1 = *(long *)(puVar9 + 0x38) + uVar6 * 0x20;
        FUN_100004594(lVar1);
        FUN_100011080(auStack_d0,lVar1);
      }
    }
    bVar4 = SCARRY8(lVar10,1);
    lVar10 = lVar10 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100138c40);
      (*pcVar3)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar10) break;
    uVar11 = ((ulong *)(param_1 + 0x40))[lVar10];
  }
  _swift_release(param_1);
  return puVar9;
}



/* Address: 0x100138c48 | FUN_100138c48 */

undefined * FUN_100138c48(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  _DictionaryStorage *this;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong local_e0;
  ulong local_d8;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar10 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae468;
    FUN_1000f7830(&DAT_100fae468,&DAT_100c2de38);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar10);
    puVar11 = puVar10;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain(param_1);
  lVar13 = 0;
  while( true ) {
    while (uVar14 == 0) {
      bVar4 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100138ef4);
        (*pcVar3)();
      }
      if ((long)(uVar9 + 0x3f >> 6) <= lVar13) {
        _swift_release(param_1);
        return puVar11;
      }
      uVar14 = ((ulong *)(param_1 + 0x40))[lVar13];
    }
    uVar12 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
    uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
    uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
    uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar13 << 6;
    FUN_1000f1c9c(*(long *)(param_1 + 0x30) + uVar12 * 0x28,auStack_a8);
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar12 * 0x20,auStack_80);
    FUN_1000f1c9c(auStack_a8,auStack_d0);
    puVar6 = &local_e0;
    _swift_dynamicCast(puVar6,auStack_d0,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    uVar2 = local_d8;
    uVar12 = local_e0;
    if ((int)puVar6 == 0) break;
    FUN_10000cbfc(auStack_80,auStack_d0);
    FUN_1000fb4c4(auStack_a8,&DAT_100fb0ca0,&DAT_100c2ef90);
    puVar10 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    puVar6 = &local_e0;
    _swift_dynamicCast(puVar6,auStack_d0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar10,6);
    uVar1 = local_e0;
    if (((ulong)puVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_100138eb4;
    }
    uVar14 = uVar14 - 1 & uVar14;
    uVar7 = uVar12;
    uVar8 = uVar2;
    FUN_100071370();
    if ((uVar8 & 1) == 0) {
      if (*(ulong *)(puVar11 + 0x18) <= *(ulong *)(puVar11 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100138ef8);
        (*pcVar3)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar11 + uVar8 + 0x40) = *(ulong *)(puVar11 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f)
      ;
      puVar6 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
      *puVar6 = uVar12;
      puVar6[1] = uVar2;
      *(ulong *)(*(long *)(puVar11 + 0x38) + uVar7 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100138efc);
        (*pcVar3)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    else {
      puVar6 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
      uVar8 = puVar6[1];
      *puVar6 = uVar12;
      puVar6[1] = uVar2;
      _swift_bridgeObjectRelease(uVar8);
      uVar5 = *(undefined8 *)(*(long *)(puVar11 + 0x38) + uVar7 * 8);
      *(ulong *)(*(long *)(puVar11 + 0x38) + uVar7 * 8) = uVar1;
      _swift_bridgeObjectRelease(uVar5);
    }
  }
  FUN_1000fb4c4(auStack_a8,&DAT_100fb0ca0,&DAT_100c2ef90);
  local_d8 = 0;
LAB_100138eb4:
  local_e0 = 0;
  _swift_release(puVar11);
  _swift_release(param_1);
  return (undefined *)0x0;
}



/* Address: 0x100138efc | FUN_100138efc */

undefined * FUN_100138efc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  _DictionaryStorage *this;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_e8;
  ulong uStack_e0;
  undefined1 auStack_d8 [40];
  undefined1 auStack_b0 [40];
  undefined1 auStack_88 [40];
  
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (puVar10 != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fae438;
    FUN_1000f7830(&DAT_100fae438,&DAT_100c2de08);
    Swift::_DictionaryStorage::_allocate(this,(__int64)puVar10);
    puVar11 = puVar10;
  }
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  lVar12 = 0;
  while( true ) {
    while (uVar14 == 0) {
      bVar5 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001391b8);
        (*pcVar4)();
      }
      if ((long)(uVar9 + 0x3f >> 6) <= lVar12) {
        _swift_release(param_1);
        return puVar11;
      }
      uVar14 = ((ulong *)(param_1 + 0x40))[lVar12];
    }
    uVar13 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar12 << 6;
    FUN_1000f1c9c(*(long *)(param_1 + 0x30) + uVar13 * 0x28,auStack_b0);
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar13 * 0x20,auStack_88);
    FUN_1000f1c9c(auStack_b0,auStack_d8);
    puVar6 = &local_e8;
    _swift_dynamicCast(puVar6,auStack_d8,PTR___type_metadata_for_Swift_AnyHashable_100eacdb0,puVar10
                       ,6);
    uVar2 = uStack_e0;
    uVar13 = local_e8;
    if ((int)puVar6 == 0) break;
    FUN_10000cbfc(auStack_88,auStack_d8);
    FUN_1000fb4c4(auStack_b0,&DAT_100fb0ca0,&DAT_100c2ef90);
    puVar6 = &local_e8;
    _swift_dynamicCast(puVar6,auStack_d8,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar10,6);
    uVar3 = uStack_e0;
    uVar1 = local_e8;
    if (((ulong)puVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_100139178;
    }
    uVar14 = uVar14 - 1 & uVar14;
    uVar7 = uVar13;
    uVar8 = uVar2;
    FUN_100071370();
    if ((uVar8 & 1) == 0) {
      if (*(ulong *)(puVar11 + 0x18) <= *(ulong *)(puVar11 + 0x10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001391bc);
        (*pcVar4)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar11 + uVar8 + 0x40) = *(ulong *)(puVar11 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f)
      ;
      puVar6 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
      *puVar6 = uVar13;
      puVar6[1] = uVar2;
      puVar6 = (ulong *)(*(long *)(puVar11 + 0x38) + uVar7 * 0x10);
      *puVar6 = uVar1;
      puVar6[1] = uVar3;
      if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001391c0);
        (*pcVar4)();
      }
      *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
    }
    else {
      puVar6 = (ulong *)(*(long *)(puVar11 + 0x30) + uVar7 * 0x10);
      uVar8 = puVar6[1];
      *puVar6 = uVar13;
      puVar6[1] = uVar2;
      _swift_bridgeObjectRelease(uVar8);
      puVar6 = (ulong *)(*(long *)(puVar11 + 0x38) + uVar7 * 0x10);
      uVar13 = puVar6[1];
      *puVar6 = uVar1;
      puVar6[1] = uVar3;
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  FUN_1000fb4c4(auStack_b0,&DAT_100fb0ca0,&DAT_100c2ef90);
LAB_100139178:
  local_e8 = 0;
  uStack_e0 = 0;
  _swift_release(puVar11);
  _swift_release(param_1);
  return (undefined *)0x0;
}



/* Address: 0x1001391c0 | FUN_1001391c0 */

void FUN_1001391c0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled) = 0;
  lVar2 = _TtC7PostHog10PostHogSDK::setupLock;
  puVar3 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::optOutLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::groupsLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::flagCallReportedLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::personPropsLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::cachedPersonPropertiesLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::identifyLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::cachedPersonPropertiesHash);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC7PostHog10PostHogSDK::lastScreenLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_lastScreenName);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::queue) = 0;
  lVar2 = _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock;
  puVar3 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer) = 0;
  lVar2 = _TtC7PostHog10PostHogSDK::onExceptionStepsChanged;
  puVar3 = &DAT_100fae2d0;
  FUN_1000f7830(&DAT_100fae2d0,&DAT_100c2db78);
  _swift_allocObject();
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8a60();
  *(undefined **)(puVar3 + 0x10) = puVar5;
  puVar5 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar5);
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(ID *)(puVar3 + 0x18) = IVar4;
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::replayQueue) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::logsQueue) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::storage) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::reachability) = 0;
  *(undefined **)(unaff_x20 + _TtC7PostHog10PostHogSDK::flagCallReported) =
       PTR___swiftEmptyDictionarySingleton_100eae0e0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::remoteConfig) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::context) = 0;
  *(undefined **)(unaff_x20 + _TtC7PostHog10PostHogSDK::installedIntegrations) = puVar6;
  lVar2 = _TtC7PostHog10PostHogSDK::sessionManager;
  IVar4 = 0;
  FUN_100157a4c();
  _objc_allocWithZone();
  IVar4 = objc_stub::init(IVar4);
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  lVar2 = _TtC7PostHog10PostHogSDK::onEventCaptured;
  puVar3 = &DAT_100fae2d8;
  FUN_1000f7830(&DAT_100fae2d8,&DAT_100c2db80);
  _swift_allocObject();
  puVar5 = puVar6;
  FUN_1000f8a4c();
  *(undefined **)(puVar3 + 0x10) = puVar5;
  puVar5 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar5);
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(ID *)(puVar3 + 0x18) = IVar4;
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC7PostHog10PostHogSDK::onEventContextChanged;
  puVar3 = &DAT_100fae2e0;
  FUN_1000f7830(&DAT_100fae2e0,&DAT_100c2db88);
  _swift_allocObject();
  FUN_1000f8a38();
  *(undefined **)(puVar3 + 0x10) = puVar6;
  puVar6 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar6);
  *(undefined8 *)(puVar3 + 0x20) = 0;
  *(undefined8 *)(puVar3 + 0x28) = 0;
  *(ID *)(puVar3 + 0x18) = IVar4;
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::sessionIdChangedToken) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::didEnterBackgroundToken) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::logger) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config) = param_1;
  FUN_100151c28();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}



/* Address: 0x1001394e8 | FUN_1001394e8 */

void FUN_1001394e8(void)

{
  DAT_100fb0cb0 = PTR___swiftEmptySetSingleton_100eae0e8;
  return;
}



/* Address: 0x1001394fc | _TtC7PostHog10PostHogSDK::logger */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::logger(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = logger;
  _swift_beginAccess(param_1 + logger,auStack_38,0,0);
  return *(ID *)(param_1 + lVar1);
}



/* Address: 0x100139544 | FUN_100139544 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100139544(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog10PostHogSDK::logger;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog10PostHogSDK::logger,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100139590 | _TtC7PostHog10PostHogSDK::setLogger: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = logger;
  _swift_beginAccess(param_1 + logger,auStack_48,1,0);
  *(ID *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x1001395f4 | FUN_1001395f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001395f4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog10PostHogSDK::logger;
  uVar2 = *param_1;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + _TtC7PostHog10PostHogSDK::logger,auStack_48,1,0);
  *(undefined8 *)(lVar3 + lVar1) = uVar2;
  return 0;
}



/* Address: 0x100139658 | FUN_100139658 */

void FUN_100139658(void)

{
  undefined8 uVar1;
  
  FUN_100123b5c(0);
  _objc_allocWithZone();
  uVar1 = 0;
  FUN_1001221c4(0,0xe000000000000000);
  FUN_100151c28();
  _objc_allocWithZone();
  FUN_1001391c0();
  DAT_101057308 = uVar1;
  return;
}



/* Address: 0x1001396ac | FUN_1001396ac */

undefined8 * FUN_1001396ac(void)

{
  if (DAT_100fb0a08 != -1) {
    _swift_once(&DAT_100fb0a08,FUN_100139658);
  }
  return &DAT_101057308;
}



/* Address: 0x1001396ec | FUN_1001396ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001396ec(void)

{
  if (DAT_100fb0a08 != -1) {
    _swift_once(&DAT_100fb0a08,FUN_100139658);
  }
  return DAT_101057308;
}



/* Address: 0x10013972c | _TtC7PostHog10PostHogSDK::shared */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::shared(ID param_1,SEL param_2)

{
  if (DAT_100fb0a08 != -1) {
    _swift_once(&DAT_100fb0a08,FUN_100139658);
  }
  return DAT_101057308;
}



/* Address: 0x10013976c | FUN_10013976c */

void FUN_10013976c(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::reachability);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    _swift_retain(lVar1);
    _SCNetworkReachabilitySetCallback(uVar2,0,0);
    _SCNetworkReachabilitySetDispatchQueue(*(undefined8 *)(lVar1 + 0x38),0);
    *(undefined1 *)(lVar1 + 0x30) = 0;
    _swift_release(lVar1);
  }
  *(undefined8 *)(unaff_x20 + _TtC7PostHog10PostHogSDK::sessionIdChangedToken) = 0;
  _swift_release();
  FUN_1001519f8();
  FUN_100151c28();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"dealloc");
  return;
}



/* Address: 0x100139808 | _TtC7PostHog10PostHogSDK::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::dealloc(ID param_1,SEL param_2)

{
  FUN_10013976c(param_1);
  return;
}



/* Address: 0x10013982c | _TtC7PostHog10PostHogSDK::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog10PostHogSDK::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cachedPersonPropertiesHash + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _lastScreenName + 8));
  _swift_release(*(undefined8 *)(param_1 + pushSubscriptionHandler));
  _swift_release(*(undefined8 *)(param_1 + queue));
  _swift_release(*(undefined8 *)(param_1 + _exceptionStepsBuffer));
  _swift_release(*(undefined8 *)(param_1 + onExceptionStepsChanged));
  _swift_release(*(undefined8 *)(param_1 + replayQueue));
  _swift_release(*(undefined8 *)(param_1 + logsQueue));
  _swift_release(*(undefined8 *)(param_1 + storage));
  _swift_release(*(undefined8 *)(param_1 + reachability));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + flagCallReported));
  _swift_release(*(undefined8 *)(param_1 + remoteConfig));
  _swift_release(*(undefined8 *)(param_1 + context));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + installedIntegrations));
  _swift_release(*(undefined8 *)(param_1 + onEventCaptured));
  _swift_release(*(undefined8 *)(param_1 + onEventContextChanged));
  _swift_release(*(undefined8 *)(param_1 + sessionIdChangedToken));
  _swift_release(*(undefined8 *)(param_1 + didEnterBackgroundToken));
  return;
}



/* Address: 0x100139a2c | FUN_100139a2c */

void FUN_100139a2c(byte param_1)

{
  byte bVar1;
  char *pcVar2;
  long unaff_x20;
  ID self;
  String SVar3;
  String separator;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == 1) {
      pcVar2 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar2[0x18] = '\x02';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x10] = '\x01';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar2[0x20] = 'X';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = -0x30;
      pcVar2[0x28] = '@';
      pcVar2[0x29] = '\x15';
      pcVar2[0x2a] = -0x27;
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\x01';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = -0x80;
      SVar3.bridgeObject = (void *)0x20;
      SVar3.str = pcVar2;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar3,separator);
      _swift_release(pcVar2);
      return;
    }
  }
  else {
    DAT_101057340 = param_1 & 1;
  }
  return;
}



/* Address: 0x100139b1c | _TtC7PostHog10PostHogSDK::debug: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC7PostHog10PostHogSDK::debug_(ID param_1,SEL param_2,bool param_3)

{
  FUN_10014e7d4();
  if ((param_1 & 1) != 0) {
    DAT_101057340 = (undefined1)param_3;
  }
  return;
}



/* Address: 0x100139b54 | FUN_100139b54 */

void FUN_100139b54(undefined8 param_1)

{
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  FUN_100139ba8(param_1);
  objc_stub::unlock(self);
  return;
}



/* Address: 0x100139ba8 | FUN_100139ba8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010013a33c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100139ba8(long param_1,long param_2)

{
  String *pSVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  Attributes AVar7;
  QoSClass QVar8;
  AutoreleaseFrequency AVar9;
  byte bVar10;
  uint uVar11;
  URL UVar12;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  DispatchQoS DVar18;
  OS_dispatch_queue *pOVar19;
  OS_dispatch_queue *pOVar20;
  undefined8 *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined *puVar24;
  Date DVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  class_t *pcVar28;
  class_t *pcVar29;
  _StringGuts _Var30;
  char *pcVar31;
  char *pcVar32;
  void *pvVar33;
  long extraout_x8;
  long extraout_x8_00;
  long lVar34;
  long extraout_x8_01;
  undefined *puVar35;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  DispatchQoS qos;
  long extraout_x12;
  long lVar36;
  OS_dispatch_queue *pOVar37;
  long unaff_x21;
  undefined8 uVar38;
  long lVar39;
  undefined1 *puVar40;
  code *pcVar41;
  ID IVar42;
  long lVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String label;
  String label_00;
  String label_01;
  String label_02;
  String SVar49;
  String SVar50;
  String separator;
  String SVar51;
  String SVar52;
  String SVar53;
  String separator_00;
  String separator_01;
  String separator_02;
  undefined1 auStack_820 [8];
  long local_818;
  long local_810;
  undefined8 local_808;
  char *local_800;
  undefined *local_7f8;
  undefined *local_7f0;
  undefined *local_7e8;
  char *local_7e0;
  long local_7d8;
  long local_7d0;
  undefined *local_7c8;
  long local_7c0;
  long local_7b8;
  undefined1 *local_7b0;
  long local_7a8;
  code *local_7a0;
  undefined8 *local_798;
  long local_790;
  undefined *local_788;
  undefined8 *local_780;
  long local_778;
  undefined *local_770;
  long local_768;
  long local_760;
  long local_758;
  long local_750;
  long local_748;
  undefined *puStack_740;
  undefined *local_738;
  undefined *local_730;
  Attributes local_728;
  long local_720;
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  objc_super local_6c0;
  undefined *local_6b0;
  undefined8 local_6a8;
  code *local_6a0;
  undefined *puStack_698;
  code *local_690;
  undefined8 uStack_688;
  undefined1 auStack_5e0 [24];
  undefined1 auStack_5c8 [24];
  undefined1 local_5b0;
  undefined7 uStack_5af;
  undefined *puStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  code *local_590;
  undefined8 uStack_588;
  code *local_580;
  undefined8 local_578;
  code *local_570;
  undefined8 uStack_568;
  code *local_560;
  undefined8 local_558;
  code *local_550;
  undefined8 uStack_548;
  code *local_540;
  undefined8 local_538;
  code *local_530;
  undefined8 uStack_528;
  code *local_520;
  undefined8 local_518;
  code *local_510;
  undefined8 uStack_508;
  code *local_500;
  undefined *puStack_4f8;
  code *local_4f0;
  undefined8 local_4e8;
  undefined1 local_4e0;
  undefined7 uStack_4df;
  undefined *puStack_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  code *local_4c0;
  undefined8 uStack_4b8;
  code *local_4b0;
  undefined8 local_4a8;
  code *local_4a0;
  undefined8 uStack_498;
  code *local_490;
  undefined8 local_488;
  code *local_480;
  undefined8 uStack_478;
  code *local_470;
  undefined8 local_468;
  code *local_460;
  undefined8 uStack_458;
  code *local_450;
  undefined8 local_448;
  code *local_440;
  undefined8 uStack_438;
  code *local_430;
  long lStack_428;
  code *local_420;
  undefined8 local_418;
  undefined1 local_410;
  undefined7 uStack_40f;
  undefined *puStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  code *local_3f0;
  undefined8 uStack_3e8;
  code *local_3e0;
  undefined8 uStack_3d8;
  code *local_3d0;
  undefined8 uStack_3c8;
  code *local_3c0;
  undefined8 uStack_3b8;
  code *local_3b0;
  undefined8 uStack_3a8;
  code *local_3a0;
  undefined8 uStack_398;
  code *local_390;
  undefined8 uStack_388;
  code *local_380;
  undefined8 uStack_378;
  code *local_370;
  undefined8 uStack_368;
  code *local_360;
  long lStack_358;
  code *local_350;
  undefined8 uStack_348;
  undefined1 auStack_340 [24];
  undefined1 auStack_328 [24];
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined8 local_2e0;
  undefined *puStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  code *local_2c0;
  undefined8 uStack_2b8;
  code *local_2b0;
  undefined8 uStack_2a8;
  code *local_2a0;
  undefined8 uStack_298;
  code *local_290;
  undefined8 uStack_288;
  code *local_280;
  undefined8 uStack_278;
  code *local_270;
  undefined8 uStack_268;
  code *local_260;
  undefined8 uStack_258;
  code *local_250;
  undefined8 uStack_248;
  code *local_240;
  undefined8 uStack_238;
  code *local_230;
  undefined *puStack_228;
  code *local_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  code *local_1f0;
  undefined8 uStack_1e8;
  code *local_1e0;
  undefined8 uStack_1d8;
  code *local_1d0;
  undefined8 uStack_1c8;
  code *local_1c0;
  undefined8 uStack_1b8;
  code *local_1b0;
  undefined8 uStack_1a8;
  code *local_1a0;
  undefined8 uStack_198;
  code *local_190;
  undefined8 uStack_188;
  code *local_180;
  undefined8 uStack_178;
  code *local_170;
  undefined8 uStack_168;
  code *local_160;
  long lStack_158;
  code *local_150;
  undefined8 uStack_148;
  char *local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  code *local_120;
  undefined8 uStack_118;
  code *local_110;
  undefined8 uStack_108;
  code *local_100;
  undefined8 uStack_f8;
  code *local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined8 uStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  long lStack_88;
  code *local_80;
  undefined8 uStack_78;
  
  local_738 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar43 = *(long *)(local_738 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar43 + 0x40));
  puVar40 = auStack_820 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar12 = Foundation::URL::typeMetadataAccessor();
  local_750 = *(long *)(UVar12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_750 + 0x40));
  lVar34 = (long)puVar40 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_758 = lVar34;
  QVar8 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  local_760 = CONCAT71(extraout_var,QVar8.value);
  local_768 = *(long *)(local_760 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_768 + 0x40));
  puVar35 = (undefined *)(lVar34 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_770 = puVar35;
  AVar9 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar36 = CONCAT71(extraout_var_00,AVar9.value);
  local_778 = *(long *)(lVar36 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_778 + 0x40));
  lVar34 = (long)puVar35 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_720 = lVar34;
  local_730 = (undefined *)Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(local_730 + -8) + 0x40));
  puVar35 = (undefined *)(lVar34 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_728.unknown = puVar35;
  puStack_740 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_748 = *(long *)(puStack_740 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_748 + 0x40));
  qos.unknown = puVar35 + -(extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar34 = PostHogConfig::debug;
  _swift_beginAccess(param_1 + PostHogConfig::debug,auStack_2f8,0,0);
  DAT_101057340 = *(char *)(param_1 + lVar34);
  if (*(char *)(param_2 + _TtC7PostHog10PostHogSDK::enabled) == '\x01') {
    if (DAT_101057340 == '\0') {
      return;
    }
    pcVar14 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar14[0x18] = '\x02';
    pcVar14[0x19] = '\0';
    pcVar14[0x1a] = '\0';
    pcVar14[0x1b] = '\0';
    pcVar14[0x1c] = '\0';
    pcVar14[0x1d] = '\0';
    pcVar14[0x1e] = '\0';
    pcVar14[0x1f] = '\0';
    pcVar14[0x10] = '\x01';
    pcVar14[0x11] = '\0';
    pcVar14[0x12] = '\0';
    pcVar14[0x13] = '\0';
    pcVar14[0x14] = '\0';
    pcVar14[0x15] = '\0';
    pcVar14[0x16] = '\0';
    pcVar14[0x17] = '\0';
    *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar14[0x20] = '3';
    pcVar14[0x21] = '\0';
    pcVar14[0x22] = '\0';
    pcVar14[0x23] = '\0';
    pcVar14[0x24] = '\0';
    pcVar14[0x25] = '\0';
    pcVar14[0x26] = '\0';
    pcVar14[0x27] = -0x30;
    pcVar14[0x28] = ' ';
    pcVar14[0x29] = '9';
    pcVar14[0x2a] = -0x27;
    pcVar14[0x2b] = '\0';
    pcVar14[0x2c] = '\x01';
    pcVar14[0x2d] = '\0';
    pcVar14[0x2e] = '\0';
    pcVar14[0x2f] = -0x80;
    SVar44.bridgeObject = (void *)0x20;
    SVar44.str = pcVar14;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar44,separator);
    _swift_release(pcVar14);
    return;
  }
  pSVar1 = (String *)(param_1 + PostHogConfig::projectToken);
  pcVar14 = pSVar1->str;
  puVar35 = pSVar1->bridgeObject;
  SVar44 = *pSVar1;
  uVar2 = (ulong)pcVar14 & 0xffffffffffff;
  if (((ulong)puVar35 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)puVar35 >> 0x38 & 0xf;
  }
  local_7b0 = puVar40;
  if (uVar2 == 0) {
    if (DAT_101057340 == '\0') {
      return;
    }
    pcVar14 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar14[0x18] = '\x02';
    pcVar14[0x19] = '\0';
    pcVar14[0x1a] = '\0';
    pcVar14[0x1b] = '\0';
    pcVar14[0x1c] = '\0';
    pcVar14[0x1d] = '\0';
    pcVar14[0x1e] = '\0';
    pcVar14[0x1f] = '\0';
    pcVar14[0x10] = '\x01';
    pcVar14[0x11] = '\0';
    pcVar14[0x12] = '\0';
    pcVar14[0x13] = '\0';
    pcVar14[0x14] = '\0';
    pcVar14[0x15] = '\0';
    pcVar14[0x16] = '\0';
    pcVar14[0x17] = '\0';
    *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar14[0x20] = 'O';
    pcVar14[0x21] = '\0';
    pcVar14[0x22] = '\0';
    pcVar14[0x23] = '\0';
    pcVar14[0x24] = '\0';
    pcVar14[0x25] = '\0';
    pcVar14[0x26] = '\0';
    pcVar14[0x27] = -0x30;
    pcVar14[0x28] = -0x30;
    pcVar14[0x29] = '8';
    pcVar14[0x2a] = -0x27;
    pcVar14[0x2b] = '\0';
    pcVar14[0x2c] = '\x01';
    pcVar14[0x2d] = '\0';
    pcVar14[0x2e] = '\0';
    pcVar14[0x2f] = -0x80;
    SVar48.bridgeObject = (void *)0x20;
    SVar48.str = pcVar14;
    separator_01.bridgeObject = (void *)0xa;
    separator_01.str = (char *)0xe100000000000000;
    Swift::_print(SVar48,separator_01);
    _swift_release(pcVar14);
    return;
  }
  local_7b8 = _TtC7PostHog10PostHogSDK::enabled;
  local_7c8 = UVar12.unknown;
  local_7c0 = lVar43;
  if (DAT_100fb0ca8 != -1) {
    _swift_once(&DAT_100fb0ca8,FUN_1001394e8);
  }
  pvVar33 = (void *)0x0;
  _swift_beginAccess(&DAT_100fb0cb0,auStack_310,0);
  pcVar13 = DAT_100fb0cb0;
  _swift_bridgeObjectRetain(DAT_100fb0cb0);
  pcVar32 = pcVar14;
  _Var30.unknown = puVar35;
  pcVar31 = pcVar13;
  FUN_100052458();
  _swift_bridgeObjectRelease(pcVar13);
  if (((ulong)pcVar32 & 1) == 0) {
    _swift_beginAccess(&DAT_100fb0cb0,&local_140,0x21,0);
    _swift_bridgeObjectRetain(puVar35);
    FUN_10016549c(&local_210,pcVar14,puVar35);
    _swift_endAccess(&local_140);
  }
  else {
    local_140 = (char *)0x0;
    puStack_138 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x31,_Var30);
    _swift_bridgeObjectRelease(puStack_138);
    local_140 = (char *)0x207463656a6f7250;
    puStack_138 = (void *)0xef203a6e656b6f74;
    SVar51.bridgeObject = pvVar33;
    SVar51.str = pcVar31;
    Swift::String::append(SVar44,SVar51);
    SVar45.bridgeObject = (void *)0x8000000100d938a0;
    SVar45.str = (char *)0xd000000000000020;
    SVar52.bridgeObject = pvVar33;
    SVar52.str = pcVar31;
    Swift::String::append(SVar45,SVar52);
    puStack_208 = puStack_138;
    pcVar14 = local_140;
    if (DAT_101057340 == '\x01') {
      pcVar13 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar32 = (char *)0x7;
      _swift_allocObject();
      pcVar13[0x18] = '\x02';
      pcVar13[0x19] = '\0';
      pcVar13[0x1a] = '\0';
      pcVar13[0x1b] = '\0';
      pcVar13[0x1c] = '\0';
      pcVar13[0x1d] = '\0';
      pcVar13[0x1e] = '\0';
      pcVar13[0x1f] = '\0';
      pcVar13[0x10] = '\x01';
      pcVar13[0x11] = '\0';
      pcVar13[0x12] = '\0';
      pcVar13[0x13] = '\0';
      pcVar13[0x14] = '\0';
      pcVar13[0x15] = '\0';
      pcVar13[0x16] = '\0';
      pcVar13[0x17] = '\0';
      local_140 = (char *)0x676f4874736f505b;
      puStack_138 = (void *)0xea0000000000205d;
      SVar46.bridgeObject = puStack_208;
      SVar46.str = pcVar14;
      SVar53.bridgeObject = pvVar33;
      SVar53.str = pcVar32;
      Swift::String::append(SVar46,SVar53);
      *(undefined **)(pcVar13 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar13 + 0x20) = local_140;
      *(undefined **)(pcVar13 + 0x28) = puStack_138;
      SVar47.bridgeObject = (void *)0x20;
      SVar47.str = pcVar13;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar47,separator_00);
      _swift_release(pcVar13);
    }
  }
  _swift_bridgeObjectRelease(puStack_208);
  *(undefined1 *)(param_2 + local_7b8) = 1;
  local_818 = _TtC7PostHog10PostHogSDK::config;
  *(long *)(param_2 + _TtC7PostHog10PostHogSDK::config) = param_1;
  FUN_10015b838();
  _swift_allocObject();
  lVar43 = param_1;
  FUN_10015a080();
  uVar38 = *(undefined8 *)(param_2 + _TtC7PostHog10PostHogSDK::storage);
  *(long *)(param_2 + _TtC7PostHog10PostHogSDK::storage) = lVar43;
  _swift_retain();
  _swift_release(uVar38);
  FUN_10011d308(0);
  _swift_allocObject();
  lVar15 = param_1;
  FUN_100115fe4();
  lVar34 = PostHogConfig::storageManager;
  _swift_beginAccess(param_1 + PostHogConfig::storageManager,auStack_328,1,0);
  lVar39 = *(long *)(param_1 + lVar34);
  lVar16 = lVar39;
  lVar23 = lVar39;
  if (lVar39 == 0) {
    FUN_10015d4e4(0);
    _swift_allocObject();
    lVar16 = param_1;
    FUN_10015d504();
    lVar39 = 0;
    lVar23 = *(long *)(param_1 + lVar34);
  }
  *(long *)(param_1 + lVar34) = lVar16;
  local_780 = (undefined8 *)((long)qos.unknown - extraout_x12);
  _swift_retain(lVar39);
  _swift_retain(lVar16);
  _swift_release(lVar23);
  IVar42 = *(ID *)(lVar16 + 0x28);
  objc_stub::lock(IVar42);
  FUN_10015cc1c(lVar16);
  if (unaff_x21 != 0) {
    objc_stub::unlock(IVar42);
                    /* WARNING: Does not return */
    pcVar41 = (code *)SoftwareBreakpoint(1,0x10013b89c);
    (*pcVar41)();
  }
  objc_stub::unlock(IVar42);
  _swift_release(lVar16);
  puVar35 = &DAT_100eb89e0;
  puVar17 = puVar35;
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar17 + 0x10,param_2);
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar35 + 0x10,param_2);
  FUN_1001315c0(0);
  _swift_allocObject();
  _swift_retain(lVar43);
  _swift_retain(lVar15);
  lVar34 = param_1;
  FUN_1001325a4(param_1,lVar43,lVar15,FUN_100155c20,puVar17,FUN_100155c28,puVar35);
  local_7d0 = param_1;
  _swift_release(lVar43);
  _swift_release(lVar15);
  _swift_release(puVar17);
  _swift_release(puVar35);
  DVar18.unknown = *(undefined **)(param_2 + _TtC7PostHog10PostHogSDK::remoteConfig);
  *(long *)(param_2 + _TtC7PostHog10PostHogSDK::remoteConfig) = lVar34;
  _swift_release();
  puVar21 = local_780;
  Dispatch::DispatchQoS::get_default(DVar18);
  pOVar19 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  pOVar20 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar19);
  FUN_100173aec(puVar21,0,pOVar20);
  uVar38 = *(undefined8 *)(param_2 + _TtC7PostHog10PostHogSDK::reachability);
  *(undefined8 **)(param_2 + _TtC7PostHog10PostHogSDK::reachability) = puVar21;
  _swift_release(uVar38);
  local_790 = _TtC7PostHog10PostHogSDK::reachability;
  uVar38 = *(undefined8 *)(param_2 + _TtC7PostHog10PostHogSDK::reachability);
  lVar34 = 0;
  FUN_10012541c();
  _swift_allocObject();
  *(undefined8 *)(lVar34 + 0x10) = 0;
  *(undefined8 *)(lVar34 + 0x18) = 0;
  *(undefined1 *)(lVar34 + 0x20) = 1;
  puVar35 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  _swift_retain(uVar38);
  IVar42 = objc_stub::init((ID)puVar35);
  *(undefined8 *)(lVar34 + 0x40) = 0;
  *(undefined8 *)(lVar34 + 0x48) = 0;
  *(undefined8 *)(lVar34 + 0x30) = uVar38;
  *(undefined8 *)(lVar34 + 0x38) = 0;
  *(ID *)(lVar34 + 0x28) = IVar42;
  _swift_retain(uVar38);
  FUN_100124fc4();
  _swift_release(uVar38);
  uVar38 = *(undefined8 *)(param_2 + _TtC7PostHog10PostHogSDK::context);
  *(long *)(param_2 + _TtC7PostHog10PostHogSDK::context) = lVar34;
  _swift_release(uVar38);
  puVar35 = &DAT_100eb89e0;
  puVar17 = puVar35;
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  local_7e8 = puVar17;
  _swift_unknownObjectWeakInit(puVar17 + 0x10,param_2);
  puVar22 = puVar35;
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  local_7f0 = puVar22;
  _swift_unknownObjectWeakInit(puVar22 + 0x10,param_2);
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  local_7f8 = puVar35;
  _swift_unknownObjectWeakInit(puVar35 + 0x10,param_2);
  local_7d8 = *(undefined8 *)(param_2 + _TtC7PostHog10PostHogSDK::onEventContextChanged);
  lVar23 = 0;
  FUN_100161950();
  _swift_allocObject();
  *(undefined8 *)(lVar23 + 0x10) = 0x4024000000000000;
  puVar24 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  local_7a8 = param_2;
  _swift_retain(lVar43);
  _swift_retain(lVar15);
  _swift_retain(puVar17);
  _swift_retain(puVar22);
  _swift_retain(puVar35);
  IVar42 = objc_stub::init((ID)puVar24);
  *(ID *)(lVar23 + 0x60) = IVar42;
  *(undefined8 *)(lVar23 + 0x68) = 0;
  lVar34 = _TtC7PostHog30PostHogPushSubscriptionHandler::pausedUntil;
  DVar25 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar25.unknown + -8) + 0x38))(lVar23 + lVar34,1,1,DVar25.unknown);
  *(undefined1 *)(lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::isSending) = 0;
  *(undefined1 *)(lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::pendingResend) = 0;
  *(undefined1 *)(lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::halted) = 0;
  puVar21 = (undefined8 *)
            (lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedIdentityToken);
  puVar21[1] = 0;
  *puVar21 = 0;
  puVar21[3] = 0;
  puVar21[2] = 0;
  puVar21[5] = 0;
  puVar21[4] = 0;
  *(undefined1 *)(lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::didAuthRetry) = 0;
  lVar34 = _TtC7PostHog30PostHogPushSubscriptionHandler::recordLock;
  puVar35 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  DVar18.unknown = (undefined *)objc_stub::init(puVar35);
  *(undefined **)(lVar23 + lVar34) = DVar18.unknown;
  local_7e0 = (char *)_TtC7PostHog30PostHogPushSubscriptionHandler::mintQueue;
  local_800 = s_Queue__dropping_all_queued_recor_100d93780 + 0x10;
  Dispatch::DispatchQoS::get_unspecified(DVar18);
  local_140 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar21 = &DAT_100fae2f0;
  FUN_100003a00(&DAT_100fae2f0,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar35 = &DAT_100fae2f8;
  local_780 = puVar21;
  FUN_1000f7830(&DAT_100fae2f8,&DAT_100c2db90);
  puVar26 = &DAT_100fae300;
  local_788 = puVar35;
  FUN_100155c48(&DAT_100fae300,&DAT_100fae2f8,&DAT_100c2db90);
  AVar7.unknown = local_728.unknown;
  puVar17 = local_730;
  local_798 = puVar26;
  Swift::SetAlgebra::_init(local_728.unknown,&local_140,puVar35,puVar26,local_730,puVar21);
  lVar34 = local_720;
  uVar3 = *(undefined4 *)
           PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
  ;
  pcVar41 = *(code **)(local_778 + 0x68);
  (*pcVar41)(local_720,uVar3,lVar36);
  label.bridgeObject = (void *)((ulong)local_800 | 0x8000000000000000);
  label.str = (char *)0xd00000000000001e;
  AVar9.value = (__int8)lVar34;
  local_7a0 = pcVar41;
  DVar18.unknown =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 (pOVar19,label,qos,AVar7,AVar9);
  *(undefined **)(lVar23 + (long)local_7e0) = DVar18.unknown;
  local_778 = _TtC7PostHog30PostHogPushSubscriptionHandler::workQueue;
  local_7e0 = "com.posthog.push.identity-mint";
  Dispatch::DispatchQoS::get_unspecified(DVar18);
  puVar21 = local_798;
  local_140 = PTR___swiftEmptyArrayStorage_100eae0d8;
  Swift::SetAlgebra::_init(AVar7.unknown,&local_140,local_788,local_798,puVar17,local_780);
  (*pcVar41)(lVar34,uVar3,lVar36);
  label_00.bridgeObject = (void *)((ulong)local_7e0 | 0x8000000000000000);
  label_00.str = (char *)0xd000000000000025;
  DVar18.unknown =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 (pOVar19,label_00,qos,AVar7,AVar9);
  *(undefined **)(lVar23 + local_778) = DVar18.unknown;
  local_778 = _TtC7PostHog30PostHogPushSubscriptionHandler::httpQueue;
  local_800 = ".subscription-handler";
  Dispatch::DispatchQoS::get_unspecified(DVar18);
  local_140 = PTR___swiftEmptyArrayStorage_100eae0d8;
  Swift::SetAlgebra::_init(AVar7.unknown,&local_140,local_788,puVar21,puVar17,local_780);
  local_7e0 = (char *)CONCAT44(local_7e0._4_4_,uVar3);
  (*local_7a0)(lVar34,uVar3,lVar36);
  label_01.bridgeObject = (void *)((ulong)local_800 | 0x8000000000000000);
  label_01.str = (char *)0xd000000000000015;
  pOVar20 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                      (pOVar19,label_01,qos,AVar7,AVar9);
  lVar34 = local_7d0;
  puVar24 = local_7e8;
  puVar22 = local_7f0;
  puVar17 = local_7f8;
  *(OS_dispatch_queue **)(lVar23 + local_778) = pOVar20;
  puVar21 = (undefined8 *)
            (lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::cachedDeliveredDistinctId);
  puVar21[1] = 1;
  *puVar21 = 0;
  *(undefined8 *)(lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::contextChangedToken) = 0;
  *(long *)(lVar23 + 0x18) = lVar15;
  *(long *)(lVar23 + 0x20) = lVar43;
  *(long *)(lVar23 + 0x28) = local_7d0;
  *(code **)(lVar23 + 0x30) = FUN_100155c30;
  *(undefined **)(lVar23 + 0x38) = local_7e8;
  *(code **)(lVar23 + 0x40) = FUN_100155c38;
  *(undefined **)(lVar23 + 0x48) = local_7f0;
  *(code **)(lVar23 + 0x50) = FUN_100155c40;
  *(undefined **)(lVar23 + 0x58) = local_7f8;
  puVar35 = &DAT_100eb8b98;
  _swift_allocObject(&DAT_100eb8b98,0x18,7);
  _swift_weakInit(puVar35 + 0x10,lVar23);
  local_778 = lVar34;
  _swift_retain(lVar43);
  _swift_retain(lVar15);
  _swift_retain(puVar24);
  _swift_retain(puVar22);
  _swift_retain(puVar17);
  _swift_retain(lVar23);
  pcVar41 = FUN_100155c8c;
  FUN_1000f9f34(FUN_100155c8c,puVar35);
  _swift_release(puVar35);
  _swift_release(lVar15);
  _swift_release(lVar43);
  _swift_release(puVar24);
  _swift_release(puVar22);
  _swift_release(puVar17);
  uVar38 = *(undefined8 *)
            (lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::contextChangedToken);
  *(code **)(lVar23 + _TtC7PostHog30PostHogPushSubscriptionHandler::contextChangedToken) = pcVar41;
  _swift_release(lVar23);
  _swift_release(puVar24);
  _swift_release(puVar22);
  _swift_release(puVar17);
  _swift_release(uVar38);
  lVar16 = local_7a8;
  uVar38 = *(undefined8 *)(local_7a8 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler);
  local_7d0 = _TtC7PostHog10PostHogSDK::pushSubscriptionHandler;
  *(long *)(local_7a8 + _TtC7PostHog10PostHogSDK::pushSubscriptionHandler) = lVar23;
  _swift_release(uVar38);
  IVar42 = *(ID *)(lVar16 + _TtC7PostHog10PostHogSDK::optOutLock);
  objc_stub::lock(IVar42);
  uVar11 = 0xe;
  FUN_10015c47c();
  lVar23 = local_778;
  lVar34 = PostHogConfig::optOut;
  bVar10 = (byte)uVar11;
  if ((uVar11 & 0xff) == 2) {
    _swift_beginAccess(local_778 + PostHogConfig::optOut,auStack_340,0,0);
    bVar10 = *(byte *)(lVar23 + lVar34);
  }
  lVar34 = PostHogConfig::optOut;
  _swift_beginAccess(lVar23 + PostHogConfig::optOut,auStack_5c8,1,0);
  local_7d8 = lVar34;
  *(byte *)(lVar23 + lVar34) = bVar10 & 1;
  objc_stub::unlock(IVar42);
  uVar27 = *(undefined8 *)(lVar23 + PostHogConfig::logs);
  FUN_1001133c0();
  _swift_beginAccess(s_3_69_0_100fb1598,auStack_5e0,0,0);
  uVar6 = DAT_100fb15a0;
  uVar38 = _s_3_69_0_100fb1598;
  puVar35 = &DAT_100eb8bc0;
  _swift_allocObject(&DAT_100eb8bc0,0x30,7);
  *(undefined8 *)(puVar35 + 0x10) = uVar27;
  *(undefined8 *)(puVar35 + 0x18) = uVar38;
  *(undefined8 *)(puVar35 + 0x20) = uVar6;
  *(long *)(puVar35 + 0x28) = lVar15;
  local_5b0 = 8;
  puStack_5a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_5a0 = 0xd000000000000015;
  local_598 = 0x8000000100d93800;
  local_590 = FUN_100166d74;
  uStack_588 = 0;
  local_580 = FUN_100166dc8;
  local_578 = 0;
  local_570 = FUN_100166e1c;
  uStack_568 = 0;
  local_560 = FUN_100166e70;
  local_558 = 0;
  local_550 = FUN_100166ec4;
  uStack_548 = 0;
  local_540 = FUN_100166f1c;
  local_538 = 0;
  local_530 = FUN_100166f7c;
  uStack_528 = 0;
  local_520 = FUN_100166fd4;
  local_518 = 0;
  local_510 = FUN_100167034;
  uStack_508 = 0;
  local_500 = FUN_100155cc8;
  local_4f0 = FUN_100167094;
  local_4e8 = 0;
  uStack_268 = 0;
  local_270 = FUN_100166f1c;
  uStack_278 = 0;
  local_280 = FUN_100166ec4;
  local_2e0 = CONCAT71(uStack_5af,8);
  uStack_288 = 0;
  local_290 = FUN_100166e70;
  uStack_298 = 0;
  local_2a0 = FUN_100166e1c;
  uStack_2a8 = 0;
  local_2b0 = FUN_100166dc8;
  uStack_2b8 = 0;
  local_2c0 = FUN_100166d74;
  puStack_2d8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uStack_2c8 = 0x8000000100d93800;
  local_2d0 = 0xd000000000000015;
  uStack_218 = 0;
  local_220 = FUN_100167094;
  local_230 = FUN_100155cc8;
  uStack_238 = 0;
  local_240 = FUN_100167034;
  uStack_258 = 0;
  local_260 = FUN_100166f7c;
  uStack_248 = 0;
  local_250 = FUN_100166fd4;
  puVar17 = &DAT_100fb0d00;
  puStack_4f8 = puVar35;
  puStack_228 = puVar35;
  FUN_1000f7830(&DAT_100fb0d00,&DAT_100c2efa8);
  local_7f0 = puVar17;
  _swift_initStaticObject();
  lVar34 = local_790;
  local_4e0 = 2;
  local_4d0 = 0xd000000000000011;
  local_4c8 = 0x8000000100d93820;
  local_4c0 = thunk_FUN_100166b3c;
  uStack_4b8 = 0;
  local_4b0 = thunk_FUN_100166b84;
  local_4a8 = 0;
  local_4a0 = thunk_FUN_100166bcc;
  uStack_498 = 0;
  local_490 = thunk_FUN_100166c14;
  local_488 = 0;
  local_480 = FUN_100002c1c;
  uStack_478 = 0;
  local_470 = FUN_100166c5c;
  local_468 = 0;
  local_460 = thunk_FUN_100166c64;
  uStack_458 = 0;
  local_450 = thunk_FUN_100166c70;
  local_448 = 0;
  local_440 = FUN_100166c7c;
  uStack_438 = 0;
  local_430 = FUN_100155cd4;
  local_420 = FUN_100166adc;
  local_418 = 0;
  uStack_c8 = 0;
  local_d0 = FUN_100166c5c;
  uStack_d8 = 0;
  local_e0 = FUN_100002c1c;
  local_140 = (char *)CONCAT71(uStack_4df,2);
  uStack_e8 = 0;
  local_f0 = thunk_FUN_100166c14;
  uStack_f8 = 0;
  local_100 = thunk_FUN_100166bcc;
  uStack_108 = 0;
  local_110 = thunk_FUN_100166b84;
  uStack_118 = 0;
  local_120 = thunk_FUN_100166b3c;
  uStack_128 = 0x8000000100d93820;
  local_130 = 0xd000000000000011;
  uStack_78 = 0;
  local_80 = FUN_100166adc;
  local_90 = FUN_100155cd4;
  uStack_98 = 0;
  local_a0 = FUN_100166c7c;
  uStack_b8 = 0;
  local_c0 = thunk_FUN_100166c64;
  uStack_a8 = 0;
  local_b0 = thunk_FUN_100166c70;
  uVar38 = *(undefined8 *)(lVar16 + local_790);
  puVar35 = &DAT_100fb0d08;
  puStack_4d8 = puVar17;
  lStack_428 = lVar15;
  puStack_138 = puVar17;
  lStack_88 = lVar15;
  FUN_1000f7830(&DAT_100fb0d08,&DAT_100c2efb0);
  local_7f8 = puVar35;
  _swift_allocObject();
  _swift_retain(uVar38);
  _swift_retain_n(lVar15,2);
  _swift_retain(lVar43);
  _swift_bridgeObjectRetain(uVar6);
  local_800 = (char *)lVar23;
  FUN_100153fe8(lVar23,lVar43,&local_140,uVar38,&DAT_100fb0d10,&DAT_100c2efb8);
  _swift_release(uVar38);
  FUN_1000fb4c4(&local_4e0,&DAT_100fb0d10,&DAT_100c2efb8);
  _swift_release(lVar43);
  local_7e8 = (undefined *)_TtC7PostHog10PostHogSDK::queue;
  uVar38 = *(undefined8 *)(lVar16 + _TtC7PostHog10PostHogSDK::queue);
  *(long *)(lVar16 + _TtC7PostHog10PostHogSDK::queue) = lVar23;
  _swift_release(uVar38);
  uVar38 = *(undefined8 *)(lVar16 + lVar34);
  lVar23 = 0;
  local_808 = uVar38;
  FUN_100168384();
  _swift_allocObject();
  lVar16 = local_760;
  lVar34 = local_768;
  DVar18.unknown = local_770;
  local_810 = lVar23;
  (**(code **)(local_768 + 0x68))
            (local_770,
             *(undefined4 *)
              PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
             ,local_760);
  _swift_retain(uVar38);
  _swift_retain(lVar43);
  _swift_retain(lVar15);
  (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)DVar18.unknown);
  (**(code **)(lVar34 + 8))(DVar18.unknown,lVar16);
  Dispatch::DispatchQoS::get_unspecified(DVar18);
  AVar7.unknown = local_728.unknown;
  local_210 = PTR___swiftEmptyArrayStorage_100eae0d8;
  Swift::SetAlgebra::_init(local_728.unknown,&local_210,local_788,local_798,local_730,local_780);
  lVar34 = local_720;
  (*local_7a0)(local_720,(ulong)local_7e0 & 0xffffffff,lVar36);
  label_02.bridgeObject = (void *)0x8000000100d93840;
  label_02.str = (char *)0xd00000000000001a;
  pOVar20 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                      (pOVar19,label_02,qos,AVar7,(AutoreleaseFrequency)(__int8)lVar34);
  lVar36 = local_810;
  *(OS_dispatch_queue **)(local_810 + 0x20) = pOVar20;
  *(undefined8 *)(local_810 + 0x30) = 0;
  _swift_unknownObjectWeakInit(local_810 + 0x28,0);
  puVar35 = local_7f0;
  _swift_initStaticObject(local_7f0,&DAT_100fb0d20);
  local_410 = 5;
  local_400 = 0xd000000000000017;
  uStack_3f8 = 0x8000000100d93860;
  local_3f0 = thunk_FUN_100166b3c;
  uStack_3e8 = 0;
  local_3e0 = thunk_FUN_100166b84;
  uStack_3d8 = 0;
  local_3d0 = thunk_FUN_100166bcc;
  uStack_3c8 = 0;
  local_3c0 = thunk_FUN_100166c14;
  uStack_3b8 = 0;
  local_3b0 = FUN_100002c1c;
  uStack_3a8 = 0;
  local_3a0 = FUN_100166c5c;
  uStack_398 = 0;
  local_390 = thunk_FUN_100166c64;
  uStack_388 = 0;
  local_380 = thunk_FUN_100166c70;
  uStack_378 = 0;
  local_370 = FUN_100166d3c;
  uStack_368 = 0;
  local_360 = FUN_100155cdc;
  local_350 = FUN_100166adc;
  uStack_348 = 0;
  uStack_198 = 0;
  local_1a0 = FUN_100166c5c;
  uStack_1a8 = 0;
  local_1b0 = FUN_100002c1c;
  local_210 = (undefined *)CONCAT71(uStack_40f,5);
  uStack_1b8 = 0;
  local_1c0 = thunk_FUN_100166c14;
  uStack_1c8 = 0;
  local_1d0 = thunk_FUN_100166bcc;
  uStack_1d8 = 0;
  local_1e0 = thunk_FUN_100166b84;
  uStack_1e8 = 0;
  local_1f0 = thunk_FUN_100166b3c;
  uStack_1f8 = 0x8000000100d93860;
  local_200 = 0xd000000000000017;
  uStack_148 = 0;
  local_150 = FUN_100166adc;
  local_160 = FUN_100155cdc;
  uStack_168 = 0;
  local_170 = FUN_100166d3c;
  uStack_188 = 0;
  local_190 = thunk_FUN_100166c64;
  uStack_178 = 0;
  local_180 = thunk_FUN_100166c70;
  puStack_408 = puVar35;
  lStack_358 = lVar15;
  puStack_208 = puVar35;
  lStack_158 = lVar15;
  _swift_allocObject(local_7f8,*(undefined4 *)(local_7f8 + 0x30),*(undefined2 *)(local_7f8 + 0x34));
  pcVar14 = local_800;
  _swift_retain(lVar43);
  _swift_retain(lVar15);
  uVar38 = local_808;
  _swift_retain(local_808);
  UVar12.unknown = &DAT_100c2efb8;
  pcVar13 = pcVar14;
  FUN_100153fe8(pcVar14,lVar43,&local_210,uVar38,&DAT_100fb0d10,&DAT_100c2efb8);
  _swift_release(uVar38);
  FUN_1000fb4c4(&local_410,&DAT_100fb0d10);
  _swift_release(lVar43);
  lVar16 = local_758;
  *(char **)(lVar36 + 0x10) = pcVar13;
  SVar49.bridgeObject = (void *)0x8000000100d93880;
  SVar49.str = (char *)0xd00000000000001a;
  Foundation::URL::appendingPathComponent(SVar49,UVar12);
  lVar39 = 0;
  FUN_100167d4c();
  _swift_allocObject();
  *(undefined **)(lVar39 + _TtC7PostHog24PostHogReplayBufferQueue::items) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar34 = _TtC7PostHog24PostHogReplayBufferQueue::itemsLock;
  puVar35 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar42 = objc_stub::init((ID)puVar35);
  lVar23 = local_750;
  puVar35 = local_7c8;
  *(ID *)(lVar39 + lVar34) = IVar42;
  (**(code **)(local_750 + 0x10))
            (lVar39 + _TtC7PostHog24PostHogReplayBufferQueue::queue,lVar16,local_7c8);
  FUN_1001676cc();
  _swift_release(lVar43);
  _swift_release(lVar15);
  _swift_release(uVar38);
  (**(code **)(lVar23 + 8))(lVar16,puVar35);
  lVar16 = local_7a8;
  *(long *)(lVar36 + 0x18) = lVar39;
  lVar34 = _TtC7PostHog10PostHogSDK::replayQueue;
  uVar38 = *(undefined8 *)(local_7a8 + _TtC7PostHog10PostHogSDK::replayQueue);
  *(long *)(local_7a8 + _TtC7PostHog10PostHogSDK::replayQueue) = lVar36;
  _swift_release(uVar38);
  uVar38 = *(undefined8 *)(lVar16 + local_790);
  FUN_1000f7830(&DAT_100fb0d48,&DAT_100c2efc0);
  _swift_allocObject();
  _swift_retain(lVar43);
  FUN_1000f8cac(&local_5b0,&local_6b0,&DAT_100fb0d50,&DAT_100c2efc8);
  _swift_retain(uVar38);
  pcVar13 = pcVar14;
  FUN_100153fe8(pcVar14,lVar43,&local_2e0,uVar38,&DAT_100fb0d50,&DAT_100c2efc8);
  _swift_release(uVar38);
  FUN_1000fb4c4(&local_5b0,&DAT_100fb0d50,&DAT_100c2efc8);
  _swift_release(lVar43);
  lVar36 = _TtC7PostHog10PostHogSDK::logsQueue;
  uVar38 = *(undefined8 *)(lVar16 + _TtC7PostHog10PostHogSDK::logsQueue);
  *(char **)(lVar16 + _TtC7PostHog10PostHogSDK::logsQueue) = pcVar13;
  _swift_release(uVar38);
  lVar23 = *(long *)(lVar16 + (long)local_7e8);
  if (lVar23 != 0) {
    uVar4 = *(undefined1 *)((long)pcVar14 + PostHogConfig::disableReachabilityForTesting);
    uVar5 = *(undefined1 *)((long)pcVar14 + PostHogConfig::disableQueueTimerForTesting);
    _swift_retain(lVar23);
    FUN_1001350dc(uVar4,uVar5);
    _swift_release(lVar23);
  }
  lVar34 = *(long *)(lVar16 + lVar34);
  if (lVar34 != 0) {
    uVar4 = *(undefined1 *)((long)pcVar14 + PostHogConfig::disableReachabilityForTesting);
    uVar5 = *(undefined1 *)((long)pcVar14 + PostHogConfig::disableQueueTimerForTesting);
    _swift_retain(lVar34);
    FUN_1001350dc(uVar4,uVar5);
    _swift_release(lVar34);
  }
  lVar34 = local_778;
  lVar36 = *(long *)(lVar16 + lVar36);
  if (lVar36 != 0) {
    uVar4 = *(undefined1 *)((long)pcVar14 + PostHogConfig::disableReachabilityForTesting);
    uVar5 = *(undefined1 *)((long)pcVar14 + PostHogConfig::disableQueueTimerForTesting);
    _swift_retain(lVar36);
    FUN_10013556c(uVar4,uVar5);
    _swift_release(lVar36);
  }
  lVar36 = *(long *)(lVar16 + _TtC7PostHog10PostHogSDK::sessionManager);
  FUN_1001565fc(pcVar14);
  FUN_100156c48(0,0);
  uVar38 = *(undefined8 *)(lVar36 + _TtC7PostHog21PostHogSessionManager::onSessionIdChanged);
  puVar35 = &DAT_100eb89e0;
  _swift_allocObject(&DAT_100eb89e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar35 + 0x10,lVar16);
  puVar17 = &DAT_100eb8be8;
  _swift_allocObject(&DAT_100eb8be8,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_100155ce4;
  *(undefined **)(puVar17 + 0x18) = puVar35;
  _swift_retain(uVar38);
  pcVar41 = FUN_1000e8174;
  FUN_1000f9b3c(FUN_1000e8174,puVar17);
  _swift_release(uVar38);
  _swift_release(puVar17);
  uVar38 = *(undefined8 *)(lVar16 + _TtC7PostHog10PostHogSDK::sessionIdChangedToken);
  *(code **)(lVar16 + _TtC7PostHog10PostHogSDK::sessionIdChangedToken) = pcVar41;
  _swift_release(uVar38);
  pcVar28 = (class_t *)0x0;
  FUN_10010d634();
  pcVar29 = pcVar28;
  _objc_allocWithZone();
  lVar36 = _TtC7PostHog13PostHogLogger::sdk;
  _swift_unknownObjectWeakInit((long)&pcVar29->isa + _TtC7PostHog13PostHogLogger::sdk,0);
  _swift_unknownObjectWeakAssign((long)&pcVar29->isa + lVar36,lVar16);
  local_6c0.receiver = (ID)pcVar29;
  local_6c0.super_class = pcVar28;
  IVar42 = _objc_msgSendSuper2(&local_6c0,"init");
  lVar36 = _TtC7PostHog10PostHogSDK::logger;
  _swift_beginAccess(lVar16 + _TtC7PostHog10PostHogSDK::logger,auStack_6d8,1,0);
  *(ID *)(lVar16 + lVar36) = IVar42;
  pOVar19 = (OS_dispatch_queue *)0x0;
  FUN_10013c0c8();
  puVar35 = local_738;
  if ((*(byte *)(lVar34 + local_7d8) & 1) != 0) goto LAB_10013b5ec;
  FUN_100151218();
  FUN_100150ae0();
  FUN_100151c48();
  IVar42 = *(ID *)(lVar16 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar42);
  bVar10 = *(byte *)(lVar16 + local_7b8);
  pOVar19 = (OS_dispatch_queue *)objc_stub::unlock(IVar42);
  lVar34 = PostHogConfig::optOut;
  if ((bVar10 & 1) == 0) {
    if (DAT_101057340 != '\x01') goto LAB_10013b5ec;
    pOVar19 = (OS_dispatch_queue *)&DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    *(undefined8 *)(pOVar19 + 0x18) = 2;
    *(undefined8 *)(pOVar19 + 0x10) = 1;
    pcVar13 = 
    "[PostHog] PostHog method was called without `setup` being complete. Call wil be ignored.";
    *(undefined **)(pOVar19 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar38 = 0xd000000000000058;
  }
  else {
    lVar36 = *(long *)(lVar16 + local_818);
    pOVar19 = (OS_dispatch_queue *)(lVar36 + PostHogConfig::optOut);
    _swift_beginAccess(pOVar19,auStack_6f0,0,0);
    if (*(char *)(lVar36 + lVar34) != '\x01') {
      IVar42 = *(ID *)(lVar16 + _TtC7PostHog10PostHogSDK::exceptionStepsBufferLock);
      objc_stub::lock(IVar42);
      lVar34 = *(long *)(lVar16 + _TtC7PostHog10PostHogSDK::_exceptionStepsBuffer);
      _swift_retain(lVar34);
      pOVar19 = (OS_dispatch_queue *)objc_stub::unlock(IVar42);
      if (lVar34 != 0) {
        FUN_100108738();
        _swift_release(lVar34);
        if (*(long *)(pOVar19 + 0x10) != 0) {
          FUN_1001349c8(pOVar19,FUN_10010f8e8);
        }
        _swift_bridgeObjectRelease();
      }
      goto LAB_10013b5ec;
    }
    if (DAT_101057340 != '\x01') goto LAB_10013b5ec;
    pOVar19 = (OS_dispatch_queue *)&DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    *(undefined8 *)(pOVar19 + 0x18) = 2;
    *(undefined8 *)(pOVar19 + 0x10) = 1;
    pcVar13 = "[PostHog] PostHog is in OptOut state.";
    *(undefined **)(pOVar19 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    uVar38 = 0xd000000000000025;
  }
  *(undefined8 *)(pOVar19 + 0x20) = uVar38;
  *(ulong *)(pOVar19 + 0x28) = (ulong)(pcVar13 + -0x20) | 0x8000000000000000;
  SVar50.bridgeObject = (void *)0x20;
  SVar50.str = (char *)pOVar19;
  separator_02.bridgeObject = (void *)0xa;
  separator_02.str = (char *)0xe100000000000000;
  Swift::_print(SVar50,separator_02);
  _swift_release();
LAB_10013b5ec:
  pOVar37 = *(OS_dispatch_queue **)(lVar16 + local_7d0);
  if (pOVar37 != (OS_dispatch_queue *)0x0) {
    _swift_retain(pOVar37);
    FUN_10015e1f0();
    _swift_release();
    pOVar19 = pOVar37;
  }
  if ((*(byte *)((long)pcVar14 + PostHogConfig::disableFlushOnBackgroundForTesting) & 1) == 0) {
    if (DAT_100fae858 != -1) {
      _swift_once(&DAT_100fae858,FUN_1000fbcdc);
    }
    lVar34 = DAT_101057190;
    lVar36 = DAT_101057190;
    _swift_retain();
    FUN_1000fbc40();
    _swift_release(lVar34);
    uVar38 = *(undefined8 *)(lVar36 + 0x18);
    _swift_retain(uVar38);
    _swift_unknownObjectRelease(lVar36);
    puVar17 = &DAT_100eb89e0;
    _swift_allocObject(&DAT_100eb89e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar17 + 0x10,lVar16);
    puVar22 = &DAT_100eb8c10;
    _swift_allocObject(&DAT_100eb8c10,0x20,7);
    *(code **)(puVar22 + 0x10) = FUN_100155d04;
    *(undefined **)(puVar22 + 0x18) = puVar17;
    pcVar41 = thunk_FUN_1000e8174;
    FUN_1000f9b3c(thunk_FUN_1000e8174,puVar22);
    _swift_release(uVar38);
    _swift_release(puVar22);
    pOVar19 = *(OS_dispatch_queue **)(lVar16 + _TtC7PostHog10PostHogSDK::didEnterBackgroundToken);
    *(code **)(lVar16 + _TtC7PostHog10PostHogSDK::didEnterBackgroundToken) = pcVar41;
    _swift_release();
  }
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar19);
  local_690 = FUN_10013bfd4;
  uStack_688 = 0;
  local_6b0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_6a8 = 0x42000000;
  local_6a0 = FUN_100030410;
  puStack_698 = &DAT_100eb8c28;
  DVar18.unknown = __Block_copy(&local_6b0);
  Dispatch::DispatchQoS::get_unspecified(DVar18);
  local_6b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar21 = &DAT_100fafdf0;
  FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar17 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar26 = &DAT_100fafe00;
  FUN_100155c48(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830);
  puVar40 = local_7b0;
  Swift::SetAlgebra::_init(local_7b0,&local_6b0,puVar17,puVar26,puVar35,puVar21);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)qos.unknown);
  __Block_release(DVar18.unknown);
  FUN_1000fb4c4(&local_5b0,&DAT_100fb0d50,&DAT_100c2efc8);
  _swift_release(lVar43);
  _swift_release(lVar15);
  (**(code **)(local_7c0 + 8))(puVar40,puVar35);
  (**(code **)(local_748 + 8))(qos.unknown,puStack_740);
  return;
}



/* Address: 0x10013b89c | FUN_10013b89c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013b89c(long param_1)

{
  byte bVar1;
  char *pcVar2;
  long lVar3;
  ID self;
  long lVar4;
  String SVar5;
  String separator;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar4 = PostHogConfig::setDefaultPersonProperties;
  if (param_1 == 0) {
    FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    lVar3 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar3 + PostHogConfig::setDefaultPersonProperties,auStack_60,0,0);
    if (*(char *)(lVar3 + lVar4) == '\x01') {
      self = *(ID *)(param_1 + _TtC7PostHog10PostHogSDK::setupLock);
      objc_stub::lock(self);
      bVar1 = *(byte *)(param_1 + _TtC7PostHog10PostHogSDK::enabled);
      objc_stub::unlock(self);
      if ((bVar1 & 1) == 0) {
        if (DAT_101057340 == '\x01') {
          pcVar2 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar2[0x18] = '\x02';
          pcVar2[0x19] = '\0';
          pcVar2[0x1a] = '\0';
          pcVar2[0x1b] = '\0';
          pcVar2[0x1c] = '\0';
          pcVar2[0x1d] = '\0';
          pcVar2[0x1e] = '\0';
          pcVar2[0x1f] = '\0';
          pcVar2[0x10] = '\x01';
          pcVar2[0x11] = '\0';
          pcVar2[0x12] = '\0';
          pcVar2[0x13] = '\0';
          pcVar2[0x14] = '\0';
          pcVar2[0x15] = '\0';
          pcVar2[0x16] = '\0';
          pcVar2[0x17] = '\0';
          *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar2[0x20] = 'X';
          pcVar2[0x21] = '\0';
          pcVar2[0x22] = '\0';
          pcVar2[0x23] = '\0';
          pcVar2[0x24] = '\0';
          pcVar2[0x25] = '\0';
          pcVar2[0x26] = '\0';
          pcVar2[0x27] = -0x30;
          pcVar2[0x28] = '@';
          pcVar2[0x29] = '\x15';
          pcVar2[0x2a] = -0x27;
          pcVar2[0x2b] = '\0';
          pcVar2[0x2c] = '\x01';
          pcVar2[0x2d] = '\0';
          pcVar2[0x2e] = '\0';
          pcVar2[0x2f] = -0x80;
          SVar5.bridgeObject = (void *)0x20;
          SVar5.str = pcVar2;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar5,separator);
          _swift_release(pcVar2);
        }
      }
      else {
        lVar4 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::context);
        if (lVar4 != 0) {
          _swift_retain(lVar4);
          FUN_100124084();
          _swift_release(lVar4);
          return;
        }
      }
    }
    FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  return;
}



/* Address: 0x10013ba38 | FUN_10013ba38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013ba38(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    FUN_10014c948(param_1,param_2,param_3);
  }
  return;
}



/* Address: 0x10013bab0 | FUN_10013bab0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013bab0(long param_1)

{
  byte bVar1;
  char *pcVar2;
  ID self;
  long lVar3;
  long lVar4;
  String SVar5;
  String separator;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    self = *(ID *)(param_1 + _TtC7PostHog10PostHogSDK::setupLock);
    objc_stub::lock(self);
    bVar1 = *(byte *)(param_1 + _TtC7PostHog10PostHogSDK::enabled);
    objc_stub::unlock(self);
    lVar4 = PostHogConfig::storageManager;
    if ((bVar1 & 1) == 0) {
      if (DAT_101057340 == '\x01') {
        pcVar2 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar2[0x18] = '\x02';
        pcVar2[0x19] = '\0';
        pcVar2[0x1a] = '\0';
        pcVar2[0x1b] = '\0';
        pcVar2[0x1c] = '\0';
        pcVar2[0x1d] = '\0';
        pcVar2[0x1e] = '\0';
        pcVar2[0x1f] = '\0';
        pcVar2[0x10] = '\x01';
        pcVar2[0x11] = '\0';
        pcVar2[0x12] = '\0';
        pcVar2[0x13] = '\0';
        pcVar2[0x14] = '\0';
        pcVar2[0x15] = '\0';
        pcVar2[0x16] = '\0';
        pcVar2[0x17] = '\0';
        *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar2[0x20] = 'X';
        pcVar2[0x21] = '\0';
        pcVar2[0x22] = '\0';
        pcVar2[0x23] = '\0';
        pcVar2[0x24] = '\0';
        pcVar2[0x25] = '\0';
        pcVar2[0x26] = '\0';
        pcVar2[0x27] = -0x30;
        pcVar2[0x28] = '@';
        pcVar2[0x29] = '\x15';
        pcVar2[0x2a] = -0x27;
        pcVar2[0x2b] = '\0';
        pcVar2[0x2c] = '\x01';
        pcVar2[0x2d] = '\0';
        pcVar2[0x2e] = '\0';
        pcVar2[0x2f] = -0x80;
        SVar5.bridgeObject = (void *)0x20;
        SVar5.str = pcVar2;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar5,separator);
        _swift_release(pcVar2);
      }
    }
    else {
      lVar3 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::config);
      _swift_beginAccess(lVar3 + PostHogConfig::storageManager,auStack_60,0,0);
      lVar4 = *(long *)(lVar3 + lVar4);
      if (lVar4 != 0) {
        _swift_retain(lVar4);
        FUN_10015cd34();
        _swift_release(lVar4);
      }
    }
  }
  return;
}



/* Address: 0x10013bc24 | FUN_10013bc24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010013bce4) */

bool FUN_10013bc24(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (((param_1 != 0) &&
      (*(char *)(*(long *)(param_1 + _TtC7PostHog10PostHogSDK::config) +
                PostHogConfig::disableReachabilityForTesting) != '\x01')) &&
     (lVar1 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::reachability), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x54) == '\x01') {
      _swift_unownedRetainStrong(lVar1);
      _swift_retain();
      _swift_unownedRetain();
      _swift_unownedRetain();
      _swift_release();
      (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
      _swift_unownedRelease(lVar1);
      _swift_unownedRelease(lVar1);
      uVar2 = *(uint *)(lVar1 + 0x50);
      if (*(char *)(lVar1 + 0x54) == '\x01') {
        _swift_release(lVar1);
        return false;
      }
    }
    else {
      _swift_retain(lVar1);
      uVar2 = *(uint *)(lVar1 + 0x50);
    }
    _swift_release(lVar1);
    if ((uVar2 >> 1 & 1) == 0) {
      return false;
    }
    if ((uVar2 & 0x28) == 0 || (uVar2 & 0x10) != 0) {
      return (uVar2 & 4) == 0;
    }
  }
  return true;
}



/* Address: 0x10013bd8c | FUN_10013bd8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013bd8c(long param_1)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  ID self;
  long lVar4;
  String SVar5;
  String SVar6;
  String separator;
  String separator_00;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    self = *(ID *)(param_1 + _TtC7PostHog10PostHogSDK::setupLock);
    objc_stub::lock(self);
    bVar1 = *(byte *)(param_1 + _TtC7PostHog10PostHogSDK::enabled);
    objc_stub::unlock(self);
    lVar2 = PostHogConfig::optOut;
    if ((bVar1 & 1) == 0) {
      if (DAT_101057340 == 1) {
        pcVar3 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar3[0x20] = 'X';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = -0x30;
        pcVar3[0x28] = '@';
        pcVar3[0x29] = '\x15';
        pcVar3[0x2a] = -0x27;
        pcVar3[0x2b] = '\0';
        pcVar3[0x2c] = '\x01';
        pcVar3[0x2d] = '\0';
        pcVar3[0x2e] = '\0';
        pcVar3[0x2f] = -0x80;
        SVar6.bridgeObject = (void *)0x20;
        SVar6.str = pcVar3;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar6,separator_00);
        _swift_release(pcVar3);
      }
    }
    else {
      lVar4 = *(long *)(param_1 + _TtC7PostHog10PostHogSDK::config);
      _swift_beginAccess(lVar4 + PostHogConfig::optOut,auStack_60,0,0);
      if ((*(char *)(lVar4 + lVar2) == '\x01') && ((DAT_101057340 & 1) != 0)) {
        pcVar3 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar3[0x20] = '%';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = -0x30;
        pcVar3[0x28] = '\0';
        pcVar3[0x29] = '\x16';
        pcVar3[0x2a] = -0x27;
        pcVar3[0x2b] = '\0';
        pcVar3[0x2c] = '\x01';
        pcVar3[0x2d] = '\0';
        pcVar3[0x2e] = '\0';
        pcVar3[0x2f] = -0x80;
        SVar5.bridgeObject = (void *)0x20;
        SVar5.str = pcVar3;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar5,separator);
        _swift_release(pcVar3);
      }
    }
  }
  return;
}



/* Address: 0x10013bf7c | FUN_10013bf7c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013bf7c(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    (*param_2)();
  }
  return;
}



/* Address: 0x10013bfd4 | FUN_10013bfd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10013bfd4(void)

{
  ID self;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100fb00d8 != -1) {
    _swift_once(&DAT_100fb00d8,FUN_100126928);
  }
  NSNotificationCenter::postNotificationName_object_(self,DAT_1010572e8,0);
  return 0;
}



/* Address: 0x10013c04c | _TtC7PostHog10PostHogSDK::setup: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog10PostHogSDK::setup_(ID param_1,SEL param_2,ID param_3)

{
  ID self;
  
  self = *(ID *)(param_1 + setupLock);
  objc_stub::lock(self);
  FUN_100139ba8(param_3,param_1);
  objc_stub::unlock(self);
  return;
}



/* Address: 0x10013c0c8 | FUN_10013c0c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10013c0c8(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  CharacterSet CVar6;
  CharacterSet CVar7;
  _StringGuts _Var8;
  char *pcVar9;
  _StringGuts _Var11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  ID IVar15;
  CharacterSet in;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String separator;
  String separator_00;
  undefined *local_120;
  undefined *local_118;
  undefined *local_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  void *pvVar10;
  
  CVar6 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar19 = *(long *)(CVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar13 = PostHogConfig::bootstrap;
  lVar14 = _TtC7PostHog10PostHogSDK::config;
  in.unknown = (undefined *)((long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar12 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
  _swift_beginAccess(lVar12 + PostHogConfig::bootstrap,auStack_80,0,0);
  lVar3 = PostHogBootstrapConfig::isIdentifiedId;
  lVar13 = *(long *)(lVar12 + lVar13);
  if (lVar13 == 0) {
    return;
  }
  _swift_beginAccess(lVar13 + PostHogBootstrapConfig::isIdentifiedId,auStack_98,0,0);
  if (*(char *)(lVar13 + lVar3) != '\x01') {
    return;
  }
  puVar1 = (undefined8 *)(lVar13 + PostHogBootstrapConfig::distinctId);
  _swift_beginAccess(puVar1,auStack_b0,0,0);
  puVar17 = (undefined *)puVar1[1];
  if (puVar17 == (undefined *)0x0) {
    return;
  }
  puVar18 = (undefined *)*puVar1;
  CVar7.unknown = puVar17;
  local_120 = puVar18;
  local_118 = puVar17;
  _swift_bridgeObjectRetain();
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar7);
  FUN_1001013b8();
  SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar10 = SVar20.bridgeObject;
  (**(code **)(lVar19 + 8))(in.unknown,CVar6.unknown);
  _swift_bridgeObjectRelease(pvVar10);
  lVar3 = PostHogConfig::storageManager;
  uVar2 = (ulong)SVar20.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
LAB_10013c370:
    _swift_bridgeObjectRelease(puVar17);
    return;
  }
  lVar13 = *(long *)(unaff_x20 + lVar14);
  _Var11.unknown = auStack_c8;
  _swift_beginAccess(lVar13 + PostHogConfig::storageManager,_Var11.unknown,0,0);
  puVar16 = *(undefined **)(lVar13 + lVar3);
  if (puVar16 == (undefined *)0x0) goto LAB_10013c370;
  _Var8.unknown = puVar16;
  _swift_retain();
  FUN_10015cd34();
  if (_Var8.unknown == puVar18 && puVar17 == _Var11.unknown) {
    _swift_bridgeObjectRelease(puVar17);
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      (_Var8,_Var11,(_StringComparisonResult)(__int8)puVar18);
    _swift_bridgeObjectRelease(_Var11.unknown);
    _Var11.unknown = puVar17;
    if (!bVar5) {
      IVar15 = *(ID *)(puVar16 + 0x30);
      objc_stub::lock(IVar15);
      FUN_10015cf7c(puVar16);
      objc_stub::unlock(IVar15);
      lVar3 = PostHogConfig::optOut;
      if ((puVar16[0x88] & 1) == 0) {
        lVar13 = *(long *)(unaff_x20 + lVar14);
        _swift_beginAccess(lVar13 + PostHogConfig::optOut,auStack_e8,0,0);
        if (*(char *)(lVar13 + lVar3) == '\x01') {
          if (DAT_101057340 == '\x01') {
            pcVar9 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            pcVar9[0x18] = '\x02';
            pcVar9[0x19] = '\0';
            pcVar9[0x1a] = '\0';
            pcVar9[0x1b] = '\0';
            pcVar9[0x1c] = '\0';
            pcVar9[0x1d] = '\0';
            pcVar9[0x1e] = '\0';
            pcVar9[0x1f] = '\0';
            pcVar9[0x10] = '\x01';
            pcVar9[0x11] = '\0';
            pcVar9[0x12] = '\0';
            pcVar9[0x13] = '\0';
            pcVar9[0x14] = '\0';
            pcVar9[0x15] = '\0';
            pcVar9[0x16] = '\0';
            pcVar9[0x17] = '\0';
            *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            pcVar9[0x20] = '%';
            pcVar9[0x21] = '\0';
            pcVar9[0x22] = '\0';
            pcVar9[0x23] = '\0';
            pcVar9[0x24] = '\0';
            pcVar9[0x25] = '\0';
            pcVar9[0x26] = '\0';
            pcVar9[0x27] = -0x30;
            pcVar9[0x28] = '\0';
            pcVar9[0x29] = '\x16';
            pcVar9[0x2a] = -0x27;
            pcVar9[0x2b] = '\0';
            pcVar9[0x2c] = '\x01';
            pcVar9[0x2d] = '\0';
            pcVar9[0x2e] = '\0';
            pcVar9[0x2f] = -0x80;
            SVar20.bridgeObject = (void *)0x20;
            SVar20.str = pcVar9;
            separator_00.bridgeObject = (void *)0xa;
            separator_00.str = (char *)0xe100000000000000;
            Swift::_print(SVar20,separator_00);
            _swift_release(pcVar9);
          }
          lVar3 = PostHogConfig::personProfiles;
          lVar14 = *(long *)(unaff_x20 + lVar14);
          _swift_beginAccess(lVar14 + PostHogConfig::personProfiles,auStack_100,0,0);
          if (*(int *)(lVar14 + lVar3) != 0) {
            FUN_10015ce90(puVar18,puVar17);
            _swift_bridgeObjectRelease(puVar17);
            IVar15 = *(ID *)(puVar16 + 0x30);
            objc_stub::lock(IVar15);
            puVar16[0x88] = 1;
            if (*(long *)(puVar16 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10013c564);
              (*pcVar4)();
            }
            goto LAB_10013c3e8;
          }
        }
        else {
          FUN_100140c50(puVar18,puVar17,0,0);
        }
        _swift_bridgeObjectRelease(puVar17);
      }
      else {
        _swift_bridgeObjectRelease(puVar17);
        if (DAT_101057340 == '\x01') {
          pcVar9 = &DAT_100fae660;
          FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
          _swift_allocObject();
          pcVar9[0x18] = '\x02';
          pcVar9[0x19] = '\0';
          pcVar9[0x1a] = '\0';
          pcVar9[0x1b] = '\0';
          pcVar9[0x1c] = '\0';
          pcVar9[0x1d] = '\0';
          pcVar9[0x1e] = '\0';
          pcVar9[0x1f] = '\0';
          pcVar9[0x10] = '\x01';
          pcVar9[0x11] = '\0';
          pcVar9[0x12] = '\0';
          pcVar9[0x13] = '\0';
          pcVar9[0x14] = '\0';
          pcVar9[0x15] = '\0';
          pcVar9[0x16] = '\0';
          pcVar9[0x17] = '\0';
          *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar9[0x20] = -0x61;
          pcVar9[0x21] = '\0';
          pcVar9[0x22] = '\0';
          pcVar9[0x23] = '\0';
          pcVar9[0x24] = '\0';
          pcVar9[0x25] = '\0';
          pcVar9[0x26] = '\0';
          pcVar9[0x27] = -0x30;
          pcVar9[0x28] = 'P';
          pcVar9[0x29] = '2';
          pcVar9[0x2a] = -0x27;
          pcVar9[0x2b] = '\0';
          pcVar9[0x2c] = '\x01';
          pcVar9[0x2d] = '\0';
          pcVar9[0x2e] = '\0';
          pcVar9[0x2f] = -0x80;
          SVar21.bridgeObject = (void *)0x20;
          SVar21.str = pcVar9;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar21,separator);
          _swift_release(pcVar9);
        }
      }
      goto LAB_10013c3b8;
    }
  }
  _swift_bridgeObjectRelease(_Var11.unknown);
  IVar15 = *(ID *)(puVar16 + 0x30);
  objc_stub::lock(IVar15);
  FUN_10015cf7c(puVar16);
  objc_stub::unlock(IVar15);
  if ((puVar16[0x88] & 1) == 0) {
    IVar15 = *(ID *)(puVar16 + 0x30);
    objc_stub::lock(IVar15);
    puVar16[0x88] = 1;
    if (*(long *)(puVar16 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10013c588);
      (*pcVar4)();
    }
LAB_10013c3e8:
    local_108 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_120 = (undefined *)CONCAT71(local_120._1_7_,1);
    FUN_10015ab00(0x10,&local_120);
    FUN_100004594(&local_120);
    objc_stub::unlock(IVar15);
    _swift_release(puVar16);
    return;
  }
LAB_10013c3b8:
  _swift_release(puVar16);
  return;
}



/* Address: 0x10013c588 | FUN_10013c588 */

undefined1  [16] FUN_10013c588(void)

{
  byte bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  ID self;
  long lVar4;
  long unaff_x20;
  long lVar5;
  String SVar6;
  undefined1 auVar7 [16];
  String separator;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  lVar5 = PostHogConfig::storageManager;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar2 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar2[0x18] = '\x02';
      pcVar2[0x19] = '\0';
      pcVar2[0x1a] = '\0';
      pcVar2[0x1b] = '\0';
      pcVar2[0x1c] = '\0';
      pcVar2[0x1d] = '\0';
      pcVar2[0x1e] = '\0';
      pcVar2[0x1f] = '\0';
      pcVar2[0x10] = '\x01';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0x14] = '\0';
      pcVar2[0x15] = '\0';
      pcVar2[0x16] = '\0';
      pcVar2[0x17] = '\0';
      *(undefined **)(pcVar2 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar2[0x20] = 'X';
      pcVar2[0x21] = '\0';
      pcVar2[0x22] = '\0';
      pcVar2[0x23] = '\0';
      pcVar2[0x24] = '\0';
      pcVar2[0x25] = '\0';
      pcVar2[0x26] = '\0';
      pcVar2[0x27] = -0x30;
      pcVar2[0x28] = '@';
      pcVar2[0x29] = '\x15';
      pcVar2[0x2a] = -0x27;
      pcVar2[0x2b] = '\0';
      pcVar2[0x2c] = '\x01';
      pcVar2[0x2d] = '\0';
      pcVar2[0x2e] = '\0';
      pcVar2[0x2f] = -0x80;
      SVar6.bridgeObject = (void *)0x20;
      SVar6.str = pcVar2;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar6,separator);
      _swift_release(pcVar2);
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    puVar3 = auStack_48;
    _swift_beginAccess(lVar4 + PostHogConfig::storageManager,puVar3,0,0);
    lVar5 = *(long *)(lVar4 + lVar5);
    if (lVar5 != 0) {
      lVar4 = lVar5;
      _swift_retain(lVar5);
      FUN_10015cd34();
      _swift_release(lVar5);
      goto LAB_10013c6b0;
    }
  }
  lVar4 = 0;
  puVar3 = (undefined1 *)0xe000000000000000;
LAB_10013c6b0:
  auVar7._8_8_ = puVar3;
  auVar7._0_8_ = lVar4;
  return auVar7;
}



/* Address: 0x10013c6c4 | _TtC7PostHog10PostHogSDK::getDistinctId */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::getDistinctId(ID param_1,SEL param_2)

{
  ID IVar1;
  NSString *pNVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  IVar1 = param_1;
  FUN_10014e7d4();
  lVar5 = PostHogConfig::storageManager;
  if ((IVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + config);
    puVar4 = auStack_48;
    _swift_beginAccess(lVar3 + PostHogConfig::storageManager,puVar4,0,0);
    lVar5 = *(long *)(lVar3 + lVar5);
    if (lVar5 != 0) {
      _swift_retain(lVar5);
      FUN_10015cd34();
      _swift_release(lVar5);
      goto LAB_10013c760;
    }
  }
  puVar4 = (undefined1 *)0xe000000000000000;
LAB_10013c760:
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  return (ID)pNVar2;
}



/* Address: 0x10013c78c | FUN_10013c78c */

undefined1  [16] FUN_10013c78c(void)

{
  byte bVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  char *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  String SVar7;
  undefined1 auVar8 [16];
  String separator;
  undefined1 auStack_48 [24];
  
  IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar3);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar3);
  lVar2 = PostHogConfig::storageManager;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = 'X';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = '@';
      pcVar5[0x29] = '\x15';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar7.bridgeObject = (void *)0x20;
      SVar7.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar7,separator);
      goto LAB_10013c8cc;
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar4 + PostHogConfig::storageManager,auStack_48,0,0);
    pcVar5 = *(char **)(lVar4 + lVar2);
    if (pcVar5 != (char *)0x0) {
      IVar3 = *(ID *)(pcVar5 + 0x18);
      _swift_retain(pcVar5);
      objc_stub::lock(IVar3);
      FUN_10015c958(pcVar5);
      objc_stub::unlock(IVar3);
      lVar2 = *(long *)(pcVar5 + 0x70);
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(pcVar5 + 0x68);
        _swift_bridgeObjectRetain();
        _swift_release(pcVar5);
        goto LAB_10013c8dc;
      }
LAB_10013c8cc:
      _swift_release(pcVar5);
    }
  }
  uVar6 = 0;
  lVar2 = -0x2000000000000000;
LAB_10013c8dc:
  auVar8._8_8_ = lVar2;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Address: 0x10013c8f0 | _TtC7PostHog10PostHogSDK::getAnonymousId */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::getAnonymousId(ID param_1,SEL param_2)

{
  FUN_10013ca6c(param_1,param_2,FUN_10013c78c);
  return param_1;
}



/* Address: 0x10013c8fc | FUN_10013c8fc */

undefined1  [16] FUN_10013c8fc(void)

{
  byte bVar1;
  long lVar2;
  ID IVar3;
  long lVar4;
  char *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  String SVar7;
  undefined1 auVar8 [16];
  String separator;
  undefined1 auStack_48 [24];
  
  IVar3 = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(IVar3);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(IVar3);
  lVar2 = PostHogConfig::storageManager;
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = 'X';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = '@';
      pcVar5[0x29] = '\x15';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar7.bridgeObject = (void *)0x20;
      SVar7.str = pcVar5;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar7,separator);
      goto LAB_10013ca3c;
    }
  }
  else {
    lVar4 = *(long *)(unaff_x20 + _TtC7PostHog10PostHogSDK::config);
    _swift_beginAccess(lVar4 + PostHogConfig::storageManager,auStack_48,0,0);
    pcVar5 = *(char **)(lVar4 + lVar2);
    if (pcVar5 != (char *)0x0) {
      IVar3 = *(ID *)(pcVar5 + 0x28);
      _swift_retain(pcVar5);
      objc_stub::lock(IVar3);
      FUN_10015cc1c(pcVar5);
      objc_stub::unlock(IVar3);
      lVar2 = *(long *)(pcVar5 + 0x80);
      if (lVar2 != 0) {
        uVar6 = *(undefined8 *)(pcVar5 + 0x78);
        _swift_bridgeObjectRetain();
        _swift_release(pcVar5);
        goto LAB_10013ca4c;
      }
LAB_10013ca3c:
      _swift_release(pcVar5);
    }
  }
  uVar6 = 0;
  lVar2 = -0x2000000000000000;
LAB_10013ca4c:
  auVar8._8_8_ = lVar2;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Address: 0x10013ca60 | _TtC7PostHog10PostHogSDK::getDeviceId */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::getDeviceId(ID param_1,SEL param_2)

{
  FUN_10013ca6c(param_1,param_2,FUN_10013c8fc);
  return param_1;
}



/* Address: 0x10013ca6c | FUN_10013ca6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_10013ca6c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return pNVar1;
}



/* Address: 0x10013cac8 | FUN_10013cac8 */

undefined1  [16] FUN_10013cac8(void)

{
  byte bVar1;
  Date DVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar6;
  ID self;
  long lVar7;
  String SVar8;
  undefined1 auVar9 [16];
  String separator;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + _TtC7PostHog10PostHogSDK::setupLock);
  objc_stub::lock(self);
  bVar1 = *(byte *)(unaff_x20 + _TtC7PostHog10PostHogSDK::enabled);
  objc_stub::unlock(self);
  if ((bVar1 & 1) == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'X';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = '@';
      pcVar3[0x29] = '\x15';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar8.bridgeObject = (void *)0x20;
      SVar8.str = pcVar3;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar8,separator);
      _swift_release(pcVar3);
    }
    puVar4 = (undefined1 *)0x0;
    uVar5 = 0;
  }
  else {
    Foundation::Date::init();
    uVar5 = 1;
    puVar4 = puVar6;
    FUN_10015687c(puVar6,1);
    (**(code **)(lVar7 + 8))(puVar6,DVar2.unknown);
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Address: 0x10013cc28 | _TtC7PostHog10PostHogSDK::getSessionId */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog10PostHogSDK::getSessionId(ID param_1,SEL param_2)

{
  Date DVar1;
  NSString *pNVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  FUN_10014e7d4();
  if ((param_1 & 1) != 0) {
    Foundation::Date::init();
    lVar3 = 1;
    FUN_10015687c(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar4 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
    if (lVar3 != 0) {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar3);
      return (ID)pNVar2;
    }
  }
  return 0;
}


