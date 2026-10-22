/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100004514 | FUN_100004514 */

void FUN_100004514(void)

{
  FUN_100004664();
  return;
}



/* Address: 0x100004520 | FUN_100004520 */

void FUN_100004520(void)

{
  return;
}



/* Address: 0x100004524 | FUN_100004524 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100004524(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100004548 | FUN_100004548 */

void FUN_100004548(void)

{
  long unaff_x20;
  
  objc_stub::close(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100004550 | FUN_100004550 */

void FUN_100004550(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x100004560 | FUN_100004560 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100004560(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10000458c | FUN_10000458c */

void FUN_10000458c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100004478(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100004594 | FUN_100004594 */

void FUN_100004594(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000045a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
  _swift_release(*param_1);
  return;
}



/* Address: 0x1000045b4 | FUN_1000045b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000045b4(void)

{
  undefined *puVar1;
  
  if (DAT_100fa6b90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSView;
  _swift_getObjCClassMetadata();
  DAT_100fa6b90 = puVar1;
  return;
}



/* Address: 0x1000045f8 | FUN_1000045f8 */

undefined8 FUN_1000045f8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6558;
  FUN_1000037f0(&DAT_100fa6558,&DAT_100c22d48);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100004640 | FUN_100004640 */

long * FUN_100004640(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Address: 0x100004664 | FUN_100004664 */

void FUN_100004664(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100004668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 8))();
  return;
}



/* Address: 0x10000466c | FUN_10000466c */

undefined1 FUN_10000466c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c22e20;
  _swift_getKeyPath(&DAT_100c22e20);
  puVar2 = &DAT_100c22e48;
  _swift_getKeyPath(&DAT_100c22e48);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x1000046dc | FUN_1000046dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000048c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000046dc(void)

{
  long lVar1;
  undefined *puVar2;
  Publisher PVar3;
  Published PVar4;
  undefined *puVar5;
  Date DVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  Publisher to;
  long lVar8;
  long lVar9;
  undefined auStack_b0 [8];
  long local_a8;
  undefined *local_a0;
  long local_98;
  Publisher local_90;
  long local_88;
  undefined *local_80;
  undefined1 local_78 [24];
  
  puVar2 = &DAT_100fa6670;
  FUN_1000037f0(&DAT_100fa6670,&DAT_100c28380);
  local_88 = *(long *)(puVar2 + -8);
  local_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  local_90.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  PVar3 = Publisher::_typeMetadataAccessor();
  local_a8 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a8 + 0x40));
  lVar9 = (long)to.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa6678;
  FUN_1000037f0(&DAT_100fa6678,&DAT_100c22e70);
  local_98 = *(long *)(puVar2 + -8);
  local_a0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar4.unknown = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  lVar8 = *(long *)(PVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (lVar9 - extraout_x8_01) - extraout_x8_02;
  puVar2 = &DAT_100c22e80;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa6688;
  FUN_1000037f0(&DAT_100fa6688,&DAT_100c22eb0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  puVar2 = &DAT_100c22eb8;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa6690;
  FUN_1000037f0(&DAT_100fa6690,&DAT_100c22ee0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  lVar1 = _TtC5Paste17PausePasteManager::_isPaused;
  local_78[0] = 0;
  Combine::Published::init(lVar7,puVar2,PTR___type_metadata_for_Swift_Bool_100eac570);
  (**(code **)(lVar8 + 0x20))(unaff_x20 + lVar1,lVar7,PVar4.unknown);
  *(undefined8 *)(unaff_x20 + _TtC5Paste17PausePasteManager::pauseTimer) = 0;
  lVar7 = _TtC5Paste17PausePasteManager::resumeDate;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))(unaff_x20 + lVar7,1,1,DVar6.unknown);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a87c();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(lVar9,DVar6.unknown,0);
  puVar2 = &DAT_100eafec8;
  _swift_allocObject(&DAT_100eafec8,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_100003a00(&DAT_100fa6698,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar2);
  (**(code **)(local_a8 + 8))(lVar9,PVar3.unknown);
  _swift_beginAccess(unaff_x20 + lVar1,local_78,0x21,0);
  Combine::Published::_get_projectedValue(PVar4);
  _swift_endAccess(local_78);
  FUN_100005bd4();
  puVar2 = local_a0;
  (extension_Combine)::Combine::Publisher::_assign(to);
  puVar5 = local_80;
  lVar7 = local_88;
  PVar3.unknown = local_90.unknown;
  (**(code **)(local_88 + 0x10))(local_90.unknown,to.unknown,local_80);
  _swift_beginAccess(unaff_x20 + lVar1,local_78,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar1),PVar3);
  _swift_endAccess(local_78);
  (**(code **)(lVar7 + 8))(to.unknown,puVar5);
  (**(code **)(local_98 + 8))(lVar9 - extraout_x8_01,puVar2);
  return;
}



/* Address: 0x100004ab8 | FUN_100004ab8 */

void FUN_100004ab8(byte *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    bVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    _swift_retain(uVar2);
    FUN_1000da768(&local_38);
    _swift_release();
    bVar1 = (byte)uVar2;
    FUN_10037aa10();
    _swift_release(local_38);
    _swift_release(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Address: 0x100004b40 | FUN_100004b40 */

void FUN_100004b40(undefined8 param_1)

{
  Date DVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  Date DVar5;
  LocalizedStringResource LVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined7 extraout_var;
  undefined8 uVar9;
  undefined8 uVar10;
  Date DVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x20;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  code *pcVar19;
  code *pcVar20;
  long lVar21;
  double dVar22;
  String SVar23;
  undefined1 auStack_e0 [4];
  uint local_dc;
  long local_d8;
  undefined1 *local_d0;
  Date local_c8;
  char *local_c0;
  undefined8 local_b8;
  void *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88 [3];
  
  local_98 = param_1;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  local_90 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  puVar12 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = &DAT_100fa6658;
  local_c8.unknown = puVar12 + -extraout_x12;
  FUN_1000037f0(&DAT_100fa6658,&DAT_100c22e10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = (long)(puVar12 + -extraout_x12) - extraout_x8_00;
  puVar13 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  puVar13 = (undefined *)(lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_a0 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar14 - extraout_x12_01;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = (undefined *)(lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_d8 = _TtC5Paste17PausePasteManager::pauseTimer;
  plVar15 = *(long **)(unaff_x20 + _TtC5Paste17PausePasteManager::pauseTimer);
  if (plVar15 != (long *)0x0) {
    pcVar19 = *(code **)(*plVar15 + 0x60);
    _swift_retain(plVar15);
    (*pcVar19)();
    _swift_release(plVar15);
  }
  lVar8 = _TtC5Paste17PausePasteManager::resumeDate;
  _swift_beginAccess(unaff_x20 + _TtC5Paste17PausePasteManager::resumeDate,local_88,0x21,0);
  FUN_100005768(local_98,unaff_x20 + lVar8);
  puVar7 = local_88;
  _swift_endAccess();
  FUN_1000da768(local_88);
  local_a8 = local_88[0];
  FUN_10020d598();
  local_b8 = *puVar7;
  uVar9 = puVar7[1];
  _swift_bridgeObjectRetain(uVar9);
  FUN_1001c5838(LVar6.unknown);
  SVar23 = (extension_Foundation)::Swift::String::init(LVar6);
  lVar3 = local_90;
  local_b0 = SVar23.bridgeObject;
  local_c0 = SVar23.str;
  (**(code **)(local_90 + 0x38))(lVar17,1,1,DVar5.unknown);
  lVar16 = (long)*(int *)(puVar18 + 0x30);
  FUN_1000057b8(unaff_x20 + lVar8,lVar21);
  FUN_1000057b8(lVar17,lVar21 + lVar16);
  pcVar19 = *(code **)(lVar3 + 0x30);
  lVar8 = lVar21;
  (*pcVar19)(lVar21,1,DVar5.unknown);
  if ((int)lVar8 == 1) {
    FUN_100005808(lVar17,&DAT_100fa6660,&DAT_100c22e18);
    lVar16 = lVar21 + lVar16;
    (*pcVar19)(lVar16,1,DVar5.unknown);
    if ((int)lVar16 == 1) {
      FUN_100005808(lVar21,&DAT_100fa6660,&DAT_100c22e18);
LAB_100004f2c:
      lVar21 = 0;
      puVar18 = (undefined *)0x0;
      goto LAB_100004f34;
    }
LAB_100004e54:
    puVar18 = &DAT_100fa6658;
    FUN_100005808(lVar21,&DAT_100fa6658,&DAT_100c22e10);
  }
  else {
    FUN_1000057b8(lVar21,lVar14);
    lVar8 = lVar21 + lVar16;
    (*pcVar19)(lVar8,1,DVar5.unknown);
    lVar3 = local_90;
    DVar11.unknown = local_c8.unknown;
    if ((int)lVar8 == 1) {
      FUN_100005808(lVar17,&DAT_100fa6660,&DAT_100c22e18);
      (**(code **)(local_90 + 8))(lVar14,DVar5.unknown);
      goto LAB_100004e54;
    }
    (**(code **)(local_90 + 0x20))(local_c8.unknown,lVar21 + lVar16,DVar5.unknown);
    puVar18 = &DAT_100fa6668;
    FUN_100003a00(&DAT_100fa6668,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    bVar4 = Swift::Equatable::___infix(lVar14,DVar11.unknown,DVar5.unknown,puVar18);
    local_dc = (uint)CONCAT71(extraout_var,bVar4);
    pcVar20 = *(code **)(lVar3 + 8);
    (*pcVar20)(DVar11.unknown,DVar5.unknown);
    puVar18 = &DAT_100fa6660;
    FUN_100005808(lVar17,&DAT_100fa6660,&DAT_100c22e18);
    (*pcVar20)(lVar14,DVar5.unknown);
    FUN_100005808(lVar21,&DAT_100fa6660,&DAT_100c22e18);
    if ((local_dc & 1) != 0) goto LAB_100004f2c;
  }
  FUN_1000050c0();
LAB_100004f34:
  uVar10 = local_a8;
  pvVar2 = local_b0;
  FUN_10020b084(local_b8,uVar9,local_c0,local_b0,lVar21,puVar18,0,0);
  _swift_release(uVar10);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(pvVar2);
  _swift_bridgeObjectRelease(puVar18);
  FUN_1000da768(local_88);
  FUN_10037ad14();
  _swift_release(local_88[0]);
  DVar11.unknown = local_a0;
  FUN_1000057b8(local_98,local_a0);
  puVar18 = DVar11.unknown;
  (*pcVar19)(DVar11.unknown,1,DVar5.unknown);
  lVar21 = local_90;
  puVar12 = local_d0;
  if ((int)puVar18 == 1) {
    FUN_100005808(DVar11.unknown,&DAT_100fa6660,&DAT_100c22e18);
  }
  else {
    (**(code **)(local_90 + 0x20))(local_d0,DVar11.unknown,DVar5.unknown);
    DVar1.unknown = local_c8.unknown;
    Foundation::Date::init();
    dVar22 = Foundation::Date::timeIntervalSince(DVar1,DVar11);
    pcVar19 = *(code **)(lVar21 + 8);
    (*pcVar19)(DVar1.unknown,DVar5.unknown);
    puVar18 = &DAT_100eafec8;
    _swift_allocObject(&DAT_100eafec8,0x18,7);
    _swift_weakInit(puVar18 + 0x10);
    FUN_100385b1c(0);
    _swift_allocObject();
    _swift_retain(puVar18);
    uVar9 = 0;
    FUN_100385984(dVar22,0,FUN_10000586c,puVar18);
    (*pcVar19)(puVar12,DVar5.unknown);
    _swift_release(puVar18);
    uVar10 = *(undefined8 *)(unaff_x20 + local_d8);
    *(undefined8 *)(unaff_x20 + local_d8) = uVar9;
    _swift_release(uVar10);
  }
  return;
}



/* Address: 0x1000050c0 | FUN_1000050c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_1000050c0(void)

{
  LocalizedStringResource LVar1;
  Date DVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID self;
  NSString *pNVar6;
  NSDate *pNVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined1 auStack_70 [7];
  char local_69;
  undefined1 auStack_68 [24];
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)LVar1.unknown - extraout_x8_00;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = _TtC5Paste17PausePasteManager::resumeDate;
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC5Paste17PausePasteManager::resumeDate,auStack_68,0,0);
  FUN_1000057b8(unaff_x20 + lVar3,lVar9);
  lVar3 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,DVar2.unknown);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar9,&DAT_100fa6660,&DAT_100c22e18);
    puVar5 = &DAT_100c22e20;
    _swift_getKeyPath(&DAT_100c22e20);
    puVar4 = &DAT_100c22e48;
    _swift_getKeyPath(&DAT_100c22e48);
    Combine::Published::_get_subscript(&local_69);
    _swift_release(puVar5);
    _swift_release(puVar4);
    if (local_69 == '\x01') {
      FUN_1001c5b38(LVar1.unknown);
    }
    else {
      FUN_1001c2888(LVar1.unknown);
    }
    SVar11 = (extension_Foundation)::Swift::String::init(LVar1);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,lVar9,DVar2.unknown);
    puVar5 = &_OBJC_CLASS___NSDateFormatter;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar5);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setDateFormat_(self,pNVar6);
    pNVar7 = Foundation::Date::_bridgeToObjectiveC((Date)0x0);
    objc_stub::stringFromDate_(self,pNVar7);
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    thunk_FUN_1001e6c18(LVar1.unknown,SVar11.str,SVar11.bridgeObject);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    SVar11 = (extension_Foundation)::Swift::String::init(LVar1);
    (**(code **)(lVar10 + 8))(lVar8,DVar2.unknown);
  }
  return SVar11;
}



/* Address: 0x10000534c | FUN_10000534c */

void FUN_10000534c(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100005388();
    _swift_release(param_1);
    return;
  }
  return;
}



/* Address: 0x100005388 | FUN_100005388 */

void FUN_100005388(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  Date DVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long *plVar8;
  undefined1 *puVar9;
  code *pcVar10;
  String SVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68 [3];
  
  puVar4 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  lVar3 = _TtC5Paste17PausePasteManager::pauseTimer;
  plVar8 = *(long **)(unaff_x20 + _TtC5Paste17PausePasteManager::pauseTimer);
  if (plVar8 != (long *)0x0) {
    pcVar10 = *(code **)(*plVar8 + 0x60);
    _swift_retain(plVar8);
    (*pcVar10)();
    _swift_release();
    LVar5.unknown = (undefined *)plVar8;
  }
  FUN_1000da768(local_68);
  uVar7 = local_68[0];
  FUN_10020c764();
  lVar1 = *(long *)LVar5.unknown;
  lVar2 = *(long *)((long)LVar5.unknown + 8);
  _swift_bridgeObjectRetain(lVar2);
  FUN_1001c59b8(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar11 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  FUN_10020b084(lVar1,lVar2,SVar11.str,SVar11.bridgeObject,0,0,0,0);
  _swift_release(uVar7);
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))(puVar9,1,1,DVar6.unknown);
  lVar1 = _TtC5Paste17PausePasteManager::resumeDate;
  _swift_beginAccess(unaff_x20 + _TtC5Paste17PausePasteManager::resumeDate,local_68,0x21,0);
  FUN_100005874(puVar9,unaff_x20 + lVar1);
  _swift_endAccess(local_68);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = 0;
  _swift_release(uVar7);
  FUN_1000da768(local_68);
  FUN_10037ad40();
  _swift_release(local_68[0]);
  return;
}



/* Address: 0x10000554c | FUN_10000554c */

void FUN_10000554c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = _TtC5Paste17PausePasteManager::_isPaused;
  puVar2 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste17PausePasteManager::pauseTimer));
  FUN_100005808(unaff_x20 + _TtC5Paste17PausePasteManager::resumeDate,&DAT_100fa6660,&DAT_100c22e18)
  ;
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000055e4 | FUN_1000055e4 */

void FUN_1000055e4(void)

{
  FUN_1000055ec(0);
  return;
}



/* Address: 0x1000055ec | FUN_1000055ec */

void FUN_1000055ec(undefined8 param_1)

{
  if (DAT_100fa65a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca0034);
  return;
}



/* Address: 0x100005624 | FUN_100005624 */

void FUN_100005624(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  lVar1 = 0x13f;
  puStack_40 = local_48;
  FUN_1000056c4();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c22df8;
    lVar1 = 0x13f;
    FUN_100005714();
    if (param_2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,5,&local_48,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x1000056c4 | FUN_1000056c4 */

void FUN_1000056c4(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100fa65b0 != (undefined *)0x0) {
    return;
  }
  puVar2 = PTR___type_metadata_for_Swift_Bool_100eac570;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fa65b0 = PVar1.unknown;
  return;
}



/* Address: 0x100005714 | FUN_100005714 */

void FUN_100005714(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fa65b8 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fa65b8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100005768 | FUN_100005768 */

undefined8 FUN_100005768(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000057b8 | FUN_1000057b8 */

undefined8 FUN_1000057b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100005808 | FUN_100005808 */

undefined8 FUN_100005808(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_1000037f0(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Address: 0x100005848 | FUN_100005848 */

void FUN_100005848(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10000586c | FUN_10000586c */

void FUN_10000586c(void)

{
  FUN_10000534c();
  return;
}



/* Address: 0x100005874 | FUN_100005874 */

undefined8 FUN_100005874(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000058c4 | FUN_1000058c4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_1000058c4(void)

{
  LocalizedStringResource LVar1;
  Date DVar2;
  long lVar3;
  undefined *puVar4;
  ID self;
  NSString *pNVar5;
  NSDate *pNVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)LVar1.unknown - extraout_x8_00;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = _TtC5Paste17PausePasteManager::resumeDate;
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC5Paste17PausePasteManager::resumeDate,auStack_68,0,0);
  FUN_1000057b8(unaff_x20 + lVar3,lVar8);
  lVar3 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,DVar2.unknown);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar8,&DAT_100fa6660,&DAT_100c22e18);
    FUN_1001c5838(LVar1.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar1);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,lVar8,DVar2.unknown);
    puVar4 = &_OBJC_CLASS___NSDateFormatter;
    _objc_allocWithZone();
    self = objc_stub::init((ID)puVar4);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setDateFormat_(self,pNVar5);
    pNVar6 = Foundation::Date::_bridgeToObjectiveC((Date)0x0);
    objc_stub::stringFromDate_(self,pNVar6);
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    thunk_FUN_1001e6bf8(LVar1.unknown,SVar10.str,SVar10.bridgeObject);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar1);
    (**(code **)(lVar9 + 8))(lVar7,DVar2.unknown);
  }
  return SVar10;
}



/* Address: 0x100005af4 | FUN_100005af4 */

String FUN_100005af4(void)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  String SVar4;
  undefined1 auStack_40 [15];
  char local_31;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100c22e20;
  _swift_getKeyPath(&DAT_100c22e20);
  puVar3 = &DAT_100c22e48;
  _swift_getKeyPath(&DAT_100c22e48);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (local_31 == '\x01') {
    FUN_1001c3488(LVar1.unknown);
  }
  else {
    FUN_1001c2708(LVar1.unknown);
  }
  SVar4 = (extension_Foundation)::Swift::String::init(LVar1);
  return SVar4;
}



/* Address: 0x100005bbc | thunk_FUN_10004e640 */

void thunk_FUN_10004e640(void)

{
  FUN_10004e640();
  return;
}



/* Address: 0x100005bc0 | thunk_FUN_10004e6a8 */

void thunk_FUN_10004e6a8(void)

{
  FUN_10004e6a8();
  return;
}



/* Address: 0x100005bc4 | thunk_FUN_10008d724 */

void thunk_FUN_10008d724(void)

{
  FUN_10008d724();
  return;
}



/* Address: 0x100005bc8 | thunk_FUN_1000a0da0 */

void thunk_FUN_1000a0da0(void)

{
  FUN_1000a0da0();
  return;
}



/* Address: 0x100005bcc | FUN_100005bcc */

void FUN_100005bcc(void)

{
  FUN_100004ab8();
  return;
}



/* Address: 0x100005bd4 | FUN_100005bd4 */

void FUN_100005bd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fa66a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa6678;
  FUN_100005c24(&DAT_100fa6678,&DAT_100c22e70);
  puVar2 = PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698;
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
             ,puVar1);
  DAT_100fa66a0 = puVar2;
  return;
}



/* Address: 0x100005c24 | FUN_100005c24 */

ulong FUN_100005c24(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 != 0) {
    return *param_1 & 0xfffffffffffffffe;
  }
  uVar1 = 0xff;
  _swift_getTypeByMangledNameInContextInMetadataState2
            (0xff,(long)param_2 + (long)(int)*param_2,*param_2 >> 0x20,0,0);
  *param_1 = uVar1 | 1;
  return uVar1 & 0xfffffffffffffffe;
}



/* Address: 0x100005c78 | FUN_100005c78 */

void FUN_100005c78(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100005c84 | FUN_100005c84 */

undefined8 FUN_100005c84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c23018;
  _swift_getKeyPath(&DAT_100c23018);
  puVar2 = &DAT_100c23040;
  _swift_getKeyPath(&DAT_100c23040);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x100005cf4 | FUN_100005cf4 */

void FUN_100005cf4(void)

{
  FUN_100005d90(&DAT_100c22fc8,&DAT_100c22ff0);
  return;
}



/* Address: 0x100005d08 | FUN_100005d08 */

void FUN_100005d08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  String SVar4;
  String SVar5;
  
  uVar3 = unaff_x20[1];
  if (*(char *)(unaff_x20 + 3) < '\0') {
    uVar2 = *unaff_x20;
    _swift_bridgeObjectRetain(uVar3);
    SVar4.bridgeObject = &DAT_e500000000000000;
    SVar4.str = (char *)0x65726f6d5f;
    SVar5.bridgeObject = param_5;
    SVar5.str = param_4;
    Swift::String::append(SVar4,SVar5);
    uVar1 = uVar3;
  }
  else {
    uVar1 = unaff_x20[2];
    _swift_bridgeObjectRetain();
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x100005d7c | FUN_100005d7c */

void FUN_100005d7c(void)

{
  FUN_100005d90(&DAT_100c23060,&DAT_100c23088);
  return;
}



/* Address: 0x100005d90 | FUN_100005d90 */

undefined8 FUN_100005d90(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_38;
  
  _swift_getKeyPath();
  _swift_getKeyPath(param_2);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(param_1);
  _swift_release(param_2);
  return local_38;
}



/* Address: 0x100005df8 | FUN_100005df8 */

void FUN_100005df8(undefined8 *param_1,undefined8 param_2)

{
  FUN_1002d5f54();
  *param_1 = param_2;
  return;
}



/* Address: 0x100005e1c | FUN_100005e1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100005f44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100005e1c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  MainActor *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined *local_68;
  
  puVar2 = &DAT_100faa890;
  local_80 = param_1;
  local_74 = param_2;
  local_70 = param_3;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_80 - extraout_x8;
  puVar2 = &DAT_100fa67e0;
  FUN_1000037f0(&DAT_100fa67e0,&DAT_100c22f70);
  lVar10 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar9 - extraout_x8_00;
  puVar3 = &DAT_100fa67e8;
  FUN_1000037f0(&DAT_100fa67e8,&DAT_100c22f78);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC5Paste22FilterBrowserViewModel::_availableFilters;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100010640();
  puVar5 = &DAT_100fa6720;
  local_68 = puVar4;
  FUN_1000037f0(&DAT_100fa6720,&DAT_100c22f08);
  Combine::Published::init(lVar12 - extraout_x8_01,puVar5,puVar5);
  (**(code **)(lVar11 + 0x20))(unaff_x20 + lVar1,lVar12 - extraout_x8_01,puVar3);
  lVar1 = _TtC5Paste22FilterBrowserViewModel::_expandedSections;
  local_68 = PTR___swiftEmptySetSingleton_100eae0e8;
  puVar3 = &DAT_100fa6730;
  FUN_1000037f0(&DAT_100fa6730,&DAT_100c22f10);
  Combine::Published::init(lVar12,puVar3,puVar3);
  (**(code **)(lVar10 + 0x20))(unaff_x20 + lVar1,lVar12,puVar2);
  lVar1 = _TtC5Paste22FilterBrowserViewModel::searchService;
  puVar2 = &DAT_100c22f80;
  _swift_getKeyPath();
  puVar3 = &DAT_100fa67f0;
  FUN_1000037f0(&DAT_100fa67f0,&DAT_100c22fb0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _TtC5Paste22FilterBrowserViewModel::collapsedItemLimit) = 8;
  local_68 = (undefined *)local_80;
  Combine::Published::init
            (unaff_x20 + _TtC5Paste22FilterBrowserViewModel::_query,puVar2,&DAT_100ec8470);
  unaff_x20[_TtC5Paste22FilterBrowserViewModel::hideAppliedFilters] = SUB41(local_74,0);
  pMVar8 = unaff_x20 + _TtC5Paste22FilterBrowserViewModel::onQueryChanged;
  *(undefined8 *)pMVar8 = local_70;
  *(undefined8 *)(pMVar8 + 8) = param_4;
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar9,1,1,TVar6.unknown);
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  _swift_retain(param_4);
  pMVar8 = unaff_x20;
  _swift_retain();
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar8);
  pMVar8 = pMVar7;
  FUN_1000081a8();
  puVar2 = &DAT_100eafef8;
  _swift_allocObject(&DAT_100eafef8,0x28,7);
  *(MainActor **)(puVar2 + 0x10) = pMVar7;
  *(MainActor **)(puVar2 + 0x18) = pMVar8;
  *(MainActor **)(puVar2 + 0x20) = unaff_x20;
  FUN_1000645b0(0,0,lVar9,&DAT_100c22fc0,puVar2);
  _swift_release();
  _swift_release(param_4);
  return;
}



/* Address: 0x100006104 | FUN_100006104 */

void FUN_100006104(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x20) = pMVar1;
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x28) = pMVar2;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar2);
  *(MainActor **)(unaff_x22 + 0x30) = pMVar1;
  FUN_1000081a8();
  *(MainActor **)(unaff_x22 + 0x38) = pMVar1;
  UVar3 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100006184,UVar3.unknown,pMVar1);
  return;
}



/* Address: 0x100006184 | FUN_100006184 */

void FUN_100006184(void)

{
  undefined8 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
  _swift_release();
  FUN_1000da768(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_1002e00a0();
  _swift_release(uVar6);
  pPVar2 = (Published *)&DAT_100c22fc8;
  _swift_getKeyPath(&DAT_100c22fc8);
  puVar3 = &DAT_100c22ff0;
  _swift_getKeyPath(&DAT_100c22ff0);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  _swift_retain(uVar7);
  Combine::Published::_set_subscript(pPVar2,unaff_x22 + 0x10,uVar7,pPVar2,puVar3);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100006260,UVar4.unknown,uVar5);
  return;
}



/* Address: 0x100006260 | FUN_100006260 */

void FUN_100006260(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010000628c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100006290 | FUN_100006290 */

undefined * FUN_100006290(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_61;
  
  lVar8 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    local_61 = (&DAT_100fa6828)[lVar8];
    FUN_100006398(&local_80,&local_61);
    uVar4 = local_70;
    lVar3 = local_78;
    uVar2 = local_80;
    if (local_78 != 0) {
      puVar5 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar6;
      if (((ulong)puVar5 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100088874(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar6 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100088874(puVar6,uVar1 + 1,1,puVar7);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x18 + 0x20) = uVar2;
      *(long *)(puVar6 + uVar1 * 0x18 + 0x28) = lVar3;
      *(undefined8 *)(puVar6 + uVar1 * 0x18 + 0x30) = uVar4;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 5);
  return puVar6;
}



/* Address: 0x100006398 | FUN_100006398 */

void FUN_100006398(String *param_1,byte *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  _StringGuts _Var7;
  byte bVar8;
  MainActor MVar9;
  MainActor MVar10;
  code *pcVar11;
  bool bVar12;
  LocalizedStringResource LVar13;
  MainActor *this;
  MainActor *pMVar14;
  MainActor *pMVar15;
  UnownedSerialExecutor UVar16;
  UnownedSerialExecutor UVar17;
  undefined *puVar18;
  undefined *puVar19;
  MainActor *pMVar20;
  MainActor *pMVar21;
  undefined *puVar22;
  _StringGuts _Var23;
  char *pcVar24;
  undefined1 *puVar25;
  char *pcVar26;
  MainActor *pMVar27;
  char *pcVar28;
  long extraout_x8;
  MainActor *pMVar29;
  ulong uVar30;
  ulong uVar31;
  char *pcVar32;
  ulong uVar33;
  ulong uVar34;
  String SVar35;
  undefined auStack_e0 [4];
  uint local_dc;
  LocalizedStringResource local_d8;
  String *local_d0;
  char *local_70;
  undefined1 *puStack_68;
  MainActor *local_58;
  
  local_d0 = param_1;
  LVar13 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar13.unknown + -8) + 0x40));
  local_d8.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  bVar8 = *param_2;
  uVar31 = (ulong)bVar8;
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar14 = Swift::MainActor::get_shared(this,this);
  pMVar15 = pMVar14;
  FUN_1000081a8();
  pMVar29 = pMVar15;
  UVar16 = Swift::Actor::get_unownedExecutor();
  UVar17 = UVar16;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar17.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserViewModel.swift",0x22,1,0x37,UVar16.unknown,pMVar29);
  }
  puVar18 = &DAT_100c22fc8;
  _swift_getKeyPath();
  puVar19 = &DAT_100c22ff0;
  _swift_getKeyPath(&DAT_100c22ff0);
  puVar22 = puVar18;
  Combine::Published::_get_subscript(&local_70,param_3,puVar18,puVar19);
  _swift_release(puVar18);
  _swift_release(puVar19);
  pcVar26 = local_70;
  if (*(long *)(local_70 + 0x10) == 0) {
    _swift_release(pMVar14);
LAB_1000068d4:
    _swift_bridgeObjectRelease(pcVar26);
    local_d0->str = (char *)0x0;
    local_d0->bridgeObject = (void *)0x0;
    local_d0[1].str = (char *)0x0;
    return;
  }
  _swift_bridgeObjectRetain(local_70);
  FUN_1000711bc();
  if (((ulong)puVar22 & 1) == 0) {
    _swift_release(pMVar14);
    _swift_bridgeObjectRelease(pcVar26);
    goto LAB_1000068d4;
  }
  local_dc = (uint)bVar8;
  pcVar32 = *(char **)(*(long *)(pcVar26 + 0x38) + uVar31 * 8);
  _swift_bridgeObjectRetain(pcVar32);
  _swift_bridgeObjectRelease_n(pcVar26,2);
  pcVar26 = pcVar32;
  if ((*(byte *)(param_3 + _TtC5Paste22FilterBrowserViewModel::hideAppliedFilters) & 1) != 0) {
    uVar31 = *(ulong *)(pcVar32 + 0x10);
    pcVar26 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar31 != 0) {
      uVar33 = 0;
      do {
        if (*(ulong *)(pcVar32 + 0x10) <= uVar33) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x100006d7c);
          (*pcVar11)();
        }
        pMVar29 = (MainActor *)(pcVar32 + uVar33 * 0x18 + 0x20);
        MVar9 = *pMVar29;
        puVar18 = *(undefined **)(pMVar29 + 8);
        pMVar29 = *(MainActor **)(pMVar29 + 0x10);
        pMVar20 = pMVar29;
        _swift_bridgeObjectRetain();
        pMVar21 = Swift::MainActor::get_shared(this,pMVar20);
        pMVar20 = pMVar15;
        UVar16 = Swift::Actor::get_unownedExecutor();
        UVar17 = UVar16;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar17.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/FilterBrowserViewModel.swift",0x22,1,0x3b,UVar16.unknown,pMVar20);
        }
        uVar33 = uVar33 + 1;
        puVar19 = &DAT_100c23018;
        _swift_getKeyPath(&DAT_100c23018);
        puVar22 = &DAT_100c23040;
        _swift_getKeyPath(&DAT_100c23040);
        Combine::Published::_get_subscript(&local_58,param_3,puVar19,puVar22);
        _swift_release(puVar19);
        _swift_release(puVar22);
        pMVar20 = local_58;
        _Var23.unknown = local_58;
        FUN_1002dde30();
        _swift_bridgeObjectRelease(pMVar20);
        uVar34 = *(ulong *)(_Var23.unknown + 0x10);
        if (uVar34 != 0) {
          uVar30 = 0;
          pMVar20 = (MainActor *)(_Var23.unknown + 0x30);
          do {
            if (*(ulong *)(_Var23.unknown + 0x10) <= uVar30) {
                    /* WARNING: Does not return */
              pcVar11 = (code *)SoftwareBreakpoint(1,0x100006d64);
              (*pcVar11)();
            }
            _Var5.unknown = *(undefined **)(pMVar20 + -8);
            _Var7.unknown = *(undefined **)pMVar20;
            MVar10 = pMVar20[-0x10];
            _swift_bridgeObjectRetain(_Var7.unknown);
            if (MVar10 == MVar9) {
              if (_Var5.unknown == puVar18 && (MainActor *)_Var7.unknown == pMVar29) {
                _swift_bridgeObjectRelease(pMVar29);
                pMVar29 = (MainActor *)_Var23.unknown;
                _Var23.unknown = _Var7.unknown;
              }
              else {
                bVar12 = Swift::_stringCompareWithSmolCheck
                                   (_Var5,_Var7,(_StringComparisonResult)(__int8)puVar18);
                _swift_bridgeObjectRelease(_Var7.unknown);
                if (!bVar12) goto LAB_100006618;
              }
              _swift_bridgeObjectRelease(pMVar29);
              _swift_bridgeObjectRelease(_Var23.unknown);
              _swift_release(pMVar21);
              goto joined_r0x0001000066bc;
            }
            _swift_bridgeObjectRelease(_Var7.unknown);
LAB_100006618:
            uVar30 = uVar30 + 1;
            pMVar20 = pMVar20 + 0x18;
          } while (uVar34 != uVar30);
        }
        _swift_release(pMVar21);
        _swift_bridgeObjectRelease(_Var23.unknown);
        pcVar24 = pcVar26;
        _swift_isUniquelyReferenced_nonNull_native();
        local_70 = pcVar26;
        if (((ulong)pcVar24 & 1) == 0) {
          FUN_100071700(0,*(long *)(pcVar26 + 0x10) + 1,1);
        }
        uVar34 = *(ulong *)(local_70 + 0x10);
        if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar34) {
          FUN_100071700(1 < *(ulong *)(local_70 + 0x18),uVar34 + 1,1);
        }
        *(ulong *)(local_70 + 0x10) = uVar34 + 1;
        *(MainActor *)(local_70 + uVar34 * 0x18 + 0x20) = MVar9;
        *(undefined **)(local_70 + uVar34 * 0x18 + 0x28) = puVar18;
        *(MainActor **)(local_70 + uVar34 * 0x18 + 0x30) = pMVar29;
        pcVar26 = local_70;
joined_r0x0001000066bc:
      } while (uVar33 != uVar31);
    }
    _swift_bridgeObjectRelease(pcVar32);
  }
  if (*(long *)(pcVar26 + 0x10) == 0) {
    _swift_release(pMVar14);
    goto LAB_1000068d4;
  }
  puVar4 = (undefined1 *)0x656369766564;
  if (local_dc != 4) {
    puVar4 = (undefined1 *)0x6472616f626e6970;
  }
  puVar25 = &DAT_e600000000000000;
  if (local_dc != 4) {
    puVar25 = &DAT_e800000000000000;
  }
  puVar1 = (undefined1 *)0x65746164;
  if (local_dc != 3) {
    puVar1 = puVar4;
  }
  puVar4 = &DAT_e400000000000000;
  if (local_dc != 3) {
    puVar4 = puVar25;
  }
  puVar25 = &DAT_65707974;
  if (local_dc != 1) {
    puVar25 = (undefined1 *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (local_dc != 1) {
    puVar2 = &DAT_e500000000000000;
  }
  puVar3 = (undefined1 *)0x707061;
  if (local_dc != 0) {
    puVar3 = puVar25;
  }
  puVar25 = (undefined1 *)0xe300000000000000;
  if (local_dc != 0) {
    puVar25 = puVar2;
  }
  if ((int)local_dc < 3) {
    puVar4 = puVar25;
    puVar1 = puVar3;
  }
  puVar18 = &DAT_100c23060;
  _swift_getKeyPath(&DAT_100c23060);
  puVar19 = &DAT_100c23088;
  _swift_getKeyPath(&DAT_100c23088);
  Combine::Published::_get_subscript(&local_70,param_3,puVar18,puVar19);
  _swift_release(puVar18);
  _swift_release(puVar19);
  pcVar32 = local_70;
  puVar25 = puVar1;
  FUN_100052458(puVar1,puVar4,local_70);
  _swift_bridgeObjectRelease(pcVar32);
  uVar31 = *(ulong *)(pcVar26 + 0x10);
  if (uVar31 < 0xb) {
    _swift_bridgeObjectRelease(puVar4);
    pcVar32 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar31 != 0) {
      local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000716cc(0,uVar31,0);
      pcVar24 = pcVar26 + 0x30;
      do {
        pcVar32 = local_70;
        uVar33 = (ulong)(byte)pcVar24[-0x10];
        uVar6 = *(undefined8 *)(pcVar24 + -8);
        pMVar29 = *(MainActor **)pcVar24;
        pMVar20 = pMVar29;
        _swift_bridgeObjectRetain();
        pMVar21 = Swift::MainActor::get_shared(this,pMVar20);
        pMVar20 = pMVar15;
        UVar16 = Swift::Actor::get_unownedExecutor();
        UVar17 = UVar16;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar17.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/FilterBrowserViewModel.swift",0x22,1,0x4b,UVar16.unknown,pMVar20);
        }
        puVar18 = &DAT_100c23018;
        _swift_getKeyPath(&DAT_100c23018);
        puVar19 = &DAT_100c23040;
        _swift_getKeyPath(&DAT_100c23040);
        Combine::Published::_get_subscript(&local_58,param_3,puVar18,puVar19);
        _swift_release(puVar18);
        _swift_release(puVar19);
        pMVar20 = local_58;
        pMVar27 = local_58;
        FUN_1002dde30(local_58);
        _swift_bridgeObjectRelease(pMVar20);
        uVar34 = uVar33;
        FUN_100006db8(uVar33,uVar6,pMVar29,pMVar27);
        _swift_release(pMVar21);
        _swift_bridgeObjectRelease(pMVar27);
        uVar30 = *(ulong *)(pcVar32 + 0x10);
        local_70 = pcVar32;
        if (*(ulong *)(pcVar32 + 0x18) >> 1 <= uVar30) {
          FUN_1000716cc(1 < *(ulong *)(pcVar32 + 0x18),uVar30 + 1,1);
        }
        pcVar24 = pcVar24 + 0x18;
        *(ulong *)(local_70 + 0x10) = uVar30 + 1;
        *(ulong *)(local_70 + uVar30 * 0x20 + 0x20) = uVar33;
        *(undefined8 *)(local_70 + uVar30 * 0x20 + 0x28) = uVar6;
        *(MainActor **)(local_70 + uVar30 * 0x20 + 0x30) = pMVar29;
        local_70[uVar30 * 0x20 + 0x38] = (byte)uVar34 & 1;
        uVar31 = uVar31 - 1;
        pcVar32 = local_70;
      } while (uVar31 != 0);
    }
  }
  else {
    pcVar32 = pcVar26;
    if (((ulong)puVar25 & 1) == 0) {
      _swift_bridgeObjectRetain();
      FUN_1000080a0();
      _swift_bridgeObjectRelease(pcVar26);
      uVar31 = *(ulong *)(pcVar32 + 0x10);
      if (uVar31 != 0) goto LAB_100006ac4;
      _swift_bridgeObjectRelease(pcVar32);
      pcVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      _swift_bridgeObjectRetain(pcVar26);
LAB_100006ac4:
      local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000716cc(0,uVar31,0);
      pcVar28 = pcVar32 + 0x30;
      do {
        pcVar24 = local_70;
        uVar33 = (ulong)(byte)pcVar28[-0x10];
        uVar6 = *(undefined8 *)(pcVar28 + -8);
        pMVar29 = *(MainActor **)pcVar28;
        pMVar20 = pMVar29;
        _swift_bridgeObjectRetain();
        pMVar21 = Swift::MainActor::get_shared(this,pMVar20);
        pMVar20 = pMVar15;
        UVar16 = Swift::Actor::get_unownedExecutor();
        UVar17 = UVar16;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar17.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/FilterBrowserViewModel.swift",0x22,1,0x46,UVar16.unknown,pMVar20);
        }
        puVar18 = &DAT_100c23018;
        _swift_getKeyPath(&DAT_100c23018);
        puVar19 = &DAT_100c23040;
        _swift_getKeyPath(&DAT_100c23040);
        Combine::Published::_get_subscript(&local_58,param_3,puVar18,puVar19);
        _swift_release(puVar18);
        _swift_release(puVar19);
        pMVar20 = local_58;
        pMVar27 = local_58;
        FUN_1002dde30(local_58);
        _swift_bridgeObjectRelease(pMVar20);
        uVar30 = uVar33;
        FUN_100006db8(uVar33,uVar6,pMVar29,pMVar27);
        _swift_release(pMVar21);
        _swift_bridgeObjectRelease(pMVar27);
        uVar34 = *(ulong *)(pcVar24 + 0x10);
        local_70 = pcVar24;
        if (*(ulong *)(pcVar24 + 0x18) >> 1 <= uVar34) {
          FUN_1000716cc(1 < *(ulong *)(pcVar24 + 0x18),uVar34 + 1,1);
        }
        pcVar24 = local_70;
        pcVar28 = pcVar28 + 0x18;
        *(ulong *)(local_70 + 0x10) = uVar34 + 1;
        *(ulong *)(local_70 + uVar34 * 0x20 + 0x20) = uVar33;
        *(undefined8 *)(local_70 + uVar34 * 0x20 + 0x28) = uVar6;
        *(MainActor **)(local_70 + uVar34 * 0x20 + 0x30) = pMVar29;
        local_70[uVar34 * 0x20 + 0x38] = (byte)uVar30 & 1;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
      _swift_bridgeObjectRelease(pcVar32);
    }
    pcVar28 = pcVar24;
    _swift_isUniquelyReferenced_nonNull_native();
    pcVar32 = pcVar24;
    if (((ulong)pcVar28 & 1) == 0) {
      pcVar32 = (char *)0x0;
      FUN_100088990(0,*(long *)(pcVar24 + 0x10) + 1,1,pcVar24);
    }
    uVar31 = *(ulong *)(pcVar32 + 0x10);
    if (*(ulong *)(pcVar32 + 0x18) >> 1 <= uVar31) {
      pcVar32 = (char *)(ulong)(1 < *(ulong *)(pcVar32 + 0x18));
      FUN_100088990(pcVar32,uVar31 + 1,1);
    }
    *(ulong *)(pcVar32 + 0x10) = uVar31 + 1;
    *(undefined1 **)(pcVar32 + uVar31 * 0x20 + 0x20) = puVar1;
    *(undefined1 **)(pcVar32 + uVar31 * 0x20 + 0x28) = puVar4;
    *(ulong *)(pcVar32 + uVar31 * 0x20 + 0x30) = (ulong)puVar25 & 1;
    pcVar32[uVar31 * 0x20 + 0x38] = -0x80;
  }
  LVar13.unknown = local_d8.unknown;
  if ((int)local_dc < 3) {
    if (local_dc == 0) {
      FUN_1001db0d4(local_d8.unknown);
    }
    else {
      if (local_dc != 1) {
        local_70 = (char *)0x656c746974;
        puStack_68 = &DAT_e500000000000000;
        FUN_100008378();
        SVar35 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
        goto LAB_100006d38;
      }
      FUN_1001db6d4(local_d8.unknown);
    }
  }
  else if (local_dc == 3) {
    FUN_1001db254(local_d8.unknown);
  }
  else if (local_dc == 4) {
    FUN_1001db3d4(local_d8.unknown);
  }
  else {
    FUN_1001db554(local_d8.unknown);
  }
  SVar35 = (extension_Foundation)::Swift::String::init(LVar13);
LAB_100006d38:
  _swift_release(pMVar14);
  _swift_bridgeObjectRelease(pcVar26);
  *local_d0 = SVar35;
  local_d0[1].str = pcVar32;
  return;
}



/* Address: 0x100006db8 | FUN_100006db8 */

undefined8 FUN_100006db8(char param_1,undefined *param_2,undefined *param_3,long param_4)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(long *)(param_4 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_4 + 0x30);
    do {
      _Var1.unknown = (undefined *)puVar6[-1];
      _Var2.unknown = (undefined *)*puVar6;
      cVar3 = *(char *)(puVar6 + -2);
      _swift_bridgeObjectRetain(_Var2.unknown);
      if (cVar3 == param_1) {
        if (_Var1.unknown == param_2 && _Var2.unknown == param_3) {
          _swift_bridgeObjectRelease(_Var2.unknown);
          return 1;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var2,(_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(_Var2.unknown);
        if (bVar4) {
          return 1;
        }
      }
      else {
        _swift_bridgeObjectRelease(_Var2.unknown);
      }
      puVar6 = puVar6 + 3;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return 0;
}



/* Address: 0x100006e80 | FUN_100006e80 */

void FUN_100006e80(ulong param_1,undefined *param_2,undefined *param_3)

{
  MainActor *pMVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  Published *pPVar13;
  undefined *puVar14;
  undefined *puVar15;
  _StringGuts _Var16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  char *pcVar19;
  ulong uVar20;
  _StringGuts _Var21;
  undefined *local_90;
  undefined *local_68;
  
  puVar15 = &DAT_100c23018;
  puVar7 = puVar15;
  _swift_getKeyPath(&DAT_100c23018);
  puVar14 = &DAT_100c23040;
  puVar8 = puVar14;
  _swift_getKeyPath(&DAT_100c23040);
  Combine::Published::_get_subscript(&local_68);
  _swift_release(puVar7);
  _swift_release(puVar8);
  puVar7 = local_68;
  puVar8 = local_68;
  FUN_1002dde30(local_68);
  _swift_bridgeObjectRelease(puVar7);
  uVar18 = param_1;
  FUN_100006db8(param_1,param_2,param_3,puVar8);
  _swift_bridgeObjectRelease(puVar8);
  _swift_getKeyPath(&DAT_100c23018);
  _swift_getKeyPath(&DAT_100c23040);
  if ((uVar18 & 1) == 0) {
    Combine::Published::_get_subscript(&local_68);
    _swift_release(puVar15);
    _swift_release(puVar14);
    _swift_bridgeObjectRetain(param_3);
    puVar15 = local_68;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar14 = local_68;
    if (((ulong)puVar15 & 1) == 0) {
      puVar14 = (undefined *)0x0;
      FUN_1000889ac(0,*(long *)(local_68 + 0x10) + 1,1,local_68);
    }
    uVar18 = *(ulong *)(puVar14 + 0x10);
    puVar15 = puVar14;
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar18) {
      puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      FUN_1000889ac(puVar15,uVar18 + 1,1,puVar14);
    }
    *(ulong *)(puVar15 + 0x10) = uVar18 + 1;
    *(ulong *)(puVar15 + uVar18 * 0x20 + 0x20) = param_1 & 0xff;
    *(undefined **)(puVar15 + uVar18 * 0x20 + 0x28) = param_2;
    *(undefined **)(puVar15 + uVar18 * 0x20 + 0x30) = param_3;
    puVar15[uVar18 * 0x20 + 0x38] = 0;
    pPVar13 = (Published *)&DAT_100c23018;
    _swift_getKeyPath(&DAT_100c23018);
    _swift_getKeyPath(&DAT_100c23040);
    local_68 = puVar15;
    _swift_retain();
  }
  else {
    Combine::Published::_get_subscript(&local_68);
    _swift_release(puVar15);
    _swift_release(puVar14);
    puVar15 = local_68;
    uVar18 = *(ulong *)(local_68 + 0x10);
    if (uVar18 == 0) {
      local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      uVar17 = 0;
      local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        pcVar19 = puVar15 + uVar17 * 0x20 + 0x38;
        uVar20 = uVar17;
        while( true ) {
          if (*(ulong *)(puVar15 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100007314);
            (*pcVar5)();
          }
          pMVar1 = *(MainActor **)(pcVar19 + -0x18);
          _Var16.unknown = *(undefined **)(pcVar19 + -0x10);
          _Var21.unknown = *(undefined **)(pcVar19 + -8);
          cVar4 = *pcVar19;
          pMVar9 = Swift::MainActor::typeMetadataAccessor();
          pMVar10 = pMVar1;
          FUN_100008310(pMVar1,_Var16.unknown,_Var21.unknown,cVar4);
          pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar10);
          pMVar10 = pMVar9;
          FUN_1000081a8();
          UVar11 = Swift::Actor::get_unownedExecutor();
          UVar12 = UVar11;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar12.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("Paste/FilterBrowserViewModel.swift",0x22,1,0x6d,UVar11.unknown,pMVar10);
          }
          if ((cVar4 == '\x01') || (((uint)param_1 & 0xff) != ((uint)pMVar1 & 0xff))) break;
          if ((_Var16.unknown == param_2) && (_Var21.unknown == param_3)) {
            _swift_release(pMVar9);
            _Var16.unknown = param_2;
            _Var21.unknown = param_3;
          }
          else {
            bVar6 = Swift::_stringCompareWithSmolCheck
                              (_Var16,_Var21,(_StringComparisonResult)(__int8)param_2);
            _swift_release(pMVar9);
            if (!bVar6) goto LAB_1000070e0;
          }
          FUN_100008320(pMVar1,_Var16.unknown,_Var21.unknown,cVar4);
          uVar20 = uVar20 + 1;
          pcVar19 = pcVar19 + 0x20;
          if (uVar18 == uVar20) goto LAB_100007228;
        }
        _swift_release(pMVar9);
LAB_1000070e0:
        puVar14 = local_90;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = local_90;
        if (((ulong)puVar14 & 1) == 0) {
          FUN_10007171c(0,*(long *)(local_90 + 0x10) + 1,1);
        }
        uVar2 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar2) {
          FUN_10007171c(1 < *(ulong *)(local_68 + 0x18),uVar2 + 1,1);
        }
        uVar17 = uVar20 + 1;
        *(ulong *)(local_68 + 0x10) = uVar2 + 1;
        *(MainActor **)(local_68 + uVar2 * 0x20 + 0x20) = pMVar1;
        *(undefined **)(local_68 + uVar2 * 0x20 + 0x28) = _Var16.unknown;
        *(undefined **)(local_68 + uVar2 * 0x20 + 0x30) = _Var21.unknown;
        local_68[uVar2 * 0x20 + 0x38] = cVar4;
        local_90 = local_68;
      } while (uVar18 - 1 != uVar20);
    }
LAB_100007228:
    _swift_bridgeObjectRelease(puVar15);
    _swift_getKeyPath(&DAT_100c23018);
    pPVar13 = (Published *)&DAT_100c23040;
    _swift_getKeyPath(&DAT_100c23040);
    local_68 = local_90;
    _swift_retain(unaff_x20);
  }
  Combine::Published::_set_subscript(pPVar13,&local_68);
  pcVar5 = *(code **)(unaff_x20 + _TtC5Paste22FilterBrowserViewModel::onQueryChanged);
  uVar3 = ((undefined8 *)(unaff_x20 + _TtC5Paste22FilterBrowserViewModel::onQueryChanged))[1];
  puVar15 = &DAT_100c23018;
  _swift_getKeyPath(&DAT_100c23018);
  puVar14 = &DAT_100c23040;
  _swift_getKeyPath(&DAT_100c23040);
  _swift_retain(uVar3);
  Combine::Published::_get_subscript(&local_68,unaff_x20,puVar15,puVar14);
  _swift_release(puVar15);
  _swift_release(puVar14);
  puVar15 = local_68;
  (*pcVar5)(local_68);
  _swift_release(uVar3);
  _swift_bridgeObjectRelease(puVar15);
  return;
}



/* Address: 0x100007354 | FUN_100007354 */

void FUN_100007354(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 unaff_x20;
  undefined8 local_70 [4];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  pcVar4 = (code *)local_70;
  pcVar5 = (code *)local_70;
  puVar1 = &DAT_100c23060;
  _swift_getKeyPath(&DAT_100c23060);
  puVar2 = &DAT_100c23088;
  _swift_getKeyPath(&DAT_100c23088);
  Combine::Published::_get_subscript(local_70);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar3 = param_1;
  FUN_100052458(param_1,param_2,local_70[0]);
  _swift_bridgeObjectRelease(local_70[0]);
  puVar1 = &DAT_100c23060;
  if ((uVar3 & 1) == 0) {
    _swift_getKeyPath(&DAT_100c23060);
    puVar2 = &DAT_100c23088;
    _swift_getKeyPath(&DAT_100c23088);
    _swift_bridgeObjectRetain(param_2);
    Combine::Published::_modify_subscript();
    FUN_10007253c(auStack_50,param_1,param_2,unaff_x20);
    (*pcVar5)(local_70,0);
    _swift_release(puVar1);
    _swift_release(puVar2);
  }
  else {
    _swift_getKeyPath();
    puVar2 = &DAT_100c23088;
    _swift_getKeyPath(&DAT_100c23088);
    Combine::Published::_modify_subscript();
    FUN_10000798c(param_1,param_2,unaff_x20);
    (*pcVar4)(local_70,0);
    _swift_release(puVar1);
    _swift_release(puVar2);
    local_48 = param_2;
  }
  _swift_bridgeObjectRelease(local_48);
  return;
}



/* Address: 0x1000074e0 | FUN_1000074e0 */

void FUN_1000074e0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste22FilterBrowserViewModel::_query;
  puVar2 = &DAT_100fa67f8;
  FUN_1000037f0(&DAT_100fa67f8,&DAT_100c23010);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC5Paste22FilterBrowserViewModel::_availableFilters;
  puVar2 = &DAT_100fa67e8;
  FUN_1000037f0(&DAT_100fa67e8,&DAT_100c22f78);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC5Paste22FilterBrowserViewModel::_expandedSections;
  puVar2 = &DAT_100fa67e0;
  FUN_1000037f0(&DAT_100fa67e0,&DAT_100c22f70);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste22FilterBrowserViewModel::searchService));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste22FilterBrowserViewModel::onQueryChanged + 8)
                );
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000075bc | FUN_1000075bc */

void FUN_1000075bc(void)

{
  FUN_1000075c4(0);
  return;
}



/* Address: 0x1000075c4 | FUN_1000075c4 */

void FUN_1000075c4(undefined8 param_1)

{
  if (DAT_100fa6700 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca007c);
  return;
}



/* Address: 0x1000075fc | FUN_1000075fc */

void FUN_1000075fc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_58;
  long local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  FUN_100007700();
  if (param_2 < 0x40) {
    local_58 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100fa6718;
    lVar1 = 0x13f;
    FUN_100007750(0x13f,&DAT_100fa6718,&DAT_100fa6720,&DAT_100c22f08);
    if (puVar2 < (undefined *)0x40) {
      local_50 = *(long *)(lVar1 + -8) + 0x40;
      puVar2 = &DAT_100fa6728;
      lVar1 = 0x13f;
      FUN_100007750(0x13f,&DAT_100fa6728,&DAT_100fa6730,&DAT_100c22f10);
      if (puVar2 < (undefined *)0x40) {
        local_48 = *(long *)(lVar1 + -8) + 0x40;
        puStack_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
        local_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
        puStack_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
        local_28 = &DAT_100c22f18;
        _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Address: 0x100007700 | FUN_100007700 */

void FUN_100007700(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100fa6710 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100ec8470;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fa6710 = PVar1.unknown;
  return;
}



/* Address: 0x100007750 | FUN_100007750 */

void FUN_100007750(undefined8 param_1,long *param_2,long param_3,undefined8 param_4)

{
  Published PVar1;
  
  if (*param_2 == 0) {
    FUN_100005c24(param_3,param_4);
    PVar1 = Combine::Published::typeMetadataAccessor();
    if (param_3 == 0) {
      *param_2 = (long)PVar1.unknown;
    }
  }
  return;
}



/* Address: 0x1000077a0 | FUN_1000077a0 */

undefined * FUN_1000077a0(void)

{
  return 
  PTR___protocol_witness_table_for_Combine_ObservableObjectPublisher___Combine_Publisher_in_Combine_100ea9848
  ;
}



/* Address: 0x1000077ac | FUN_1000077ac */

void FUN_1000077ac(undefined8 *param_1)

{
  ObservableObjectPublisher *pOVar1;
  
  pOVar1 = (extension_Combine)::Combine::ObservableObject::_get_objectWillChange();
  *param_1 = pOVar1;
  return;
}


