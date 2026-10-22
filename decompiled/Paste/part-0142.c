/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001acc74 | FUN_1001acc74 */

void FUN_1001acc74(void)

{
  FUN_1001aac98(&DAT_100fb4800,&DAT_1010576e0,FUN_1001acb40);
  return;
}



/* Address: 0x1001acc90 | FUN_1001acc90 */

void FUN_1001acc90(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_1010576f8);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_1010576f8);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d97ff0;
  SVar9.str = (char *)0xd000000000000018;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001acda8);
  (*pcVar2)();
}



/* Address: 0x1001acda8 | FUN_1001acda8 */

void FUN_1001acda8(void)

{
  FUN_1001aac3c(&DAT_100fb4808,&DAT_1010576f8,FUN_1001acc90);
  return;
}



/* Address: 0x1001acdc4 | FUN_1001acdc4 */

void FUN_1001acdc4(void)

{
  FUN_1001aac98(&DAT_100fb4808,&DAT_1010576f8,FUN_1001acc90);
  return;
}



/* Address: 0x1001acde0 | FUN_1001acde0 */

void FUN_1001acde0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_101057710);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_101057710);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d97fd0;
  SVar9.str = (char *)0xd000000000000010;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001acef8);
  (*pcVar2)();
}



/* Address: 0x1001acef8 | FUN_1001acef8 */

void FUN_1001acef8(void)

{
  FUN_1001aac3c(&DAT_100fb4810,&DAT_101057710,FUN_1001acde0);
  return;
}



/* Address: 0x1001acf14 | FUN_1001acf14 */

void FUN_1001acf14(void)

{
  FUN_1001aac98(&DAT_100fb4810,&DAT_101057710,FUN_1001acde0);
  return;
}



/* Address: 0x1001acf30 | FUN_1001acf30 */

void FUN_1001acf30(void)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar1.unknown,&DAT_101057728);
  FUN_1000cd990(UVar1.unknown,&DAT_101057728);
  FUN_1000f3588();
  FUN_1001ab2ec(UVar1.unknown,0xd000000000000012,0x8000000100d97fb0);
  return;
}



/* Address: 0x1001acf98 | FUN_1001acf98 */

void FUN_1001acf98(void)

{
  FUN_1001aac3c(&DAT_100fb4818,&DAT_101057728,FUN_1001acf30);
  return;
}



/* Address: 0x1001acfb4 | FUN_1001acfb4 */

void FUN_1001acfb4(void)

{
  FUN_1001aac98(&DAT_100fb4818,&DAT_101057728,FUN_1001acf30);
  return;
}



/* Address: 0x1001acfd0 | FUN_1001acfd0 */

void FUN_1001acfd0(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Address: 0x1001acff4 | FUN_1001acff4 */

void FUN_1001acff4(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  return;
}



/* Address: 0x1001ad000 | FUN_1001ad000 */

undefined1 FUN_1001ad000(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  return *(undefined1 *)(lVar1 + 0x10);
}



/* Address: 0x1001ad03c | FUN_1001ad03c */

void FUN_1001ad03c(undefined1 param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,1,0);
  *(undefined1 *)(lVar1 + 0x10) = param_1;
  return;
}



/* Address: 0x1001ad07c | FUN_1001ad07c */

undefined1  [16] FUN_1001ad07c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,param_1,0x21,0);
  auVar2._8_8_ = lVar1 + 0x10;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001ad0b8 | FUN_1001ad0b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001ad0b8(void)

{
  return ZEXT816(0x100fb4860);
}



/* Address: 0x1001ad0d8 | FUN_1001ad0d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001ad0d8(undefined8 param_1,_StringGuts param_2)

{
  byte bVar1;
  bool bVar2;
  URL UVar3;
  ID self;
  NSArray *pNVar4;
  ID IVar5;
  URL UVar6;
  NSURL *pNVar7;
  undefined *puVar8;
  long extraout_x8;
  long lVar9;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  UVar6 = UVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  Foundation::URL::_get_scheme(UVar6);
  if (param_2.unknown != (undefined *)0x0) {
    if ((UVar6.unknown == (undefined *)0x6574736170) && (param_2.unknown == &DAT_e500000000000000))
    {
      _swift_bridgeObjectRelease(&DAT_e500000000000000);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)UVar6.unknown,param_2,(_StringComparisonResult)0x70);
      _swift_bridgeObjectRelease(param_2.unknown);
      if (!bVar2) goto LAB_1001ad2d4;
    }
    self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    puVar8 = &DAT_100fb48c0;
    FUN_1000037f0(&DAT_100fb48c0,&DAT_100c329b8);
    bVar1 = *(byte *)(lVar9 + 0x50);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    (**(code **)(lVar9 + 0x10))
              (puVar8 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),param_1,
               UVar3.unknown);
    pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar8);
    IVar5 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    UVar6.unknown = (undefined *)NSBundle::bundleURL(IVar5);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
    puVar8 = &_OBJC_CLASS___NSWorkspaceOpenConfiguration;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar8);
    NSWorkspace::openURLs_withApplicationAtURL_configuration_completionHandler_
              (self,pNVar4,pNVar7,IVar5,0);
    return 0;
  }
LAB_1001ad2d4:
  UVar6.unknown = (undefined *)NSWorkspace::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
  NSWorkspace::openURL_((ID)UVar6.unknown,pNVar7);
  return 0;
}



/* Address: 0x1001ad32c | FUN_1001ad32c */

void FUN_1001ad32c(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ad340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x20))(param_1,0,0,param_2,param_3);
  return;
}



/* Address: 0x1001ad344 | FUN_1001ad344 */

void FUN_1001ad344(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001001ad358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 8))(0,0,param_1,param_2);
  return;
}



/* Address: 0x1001ad35c | FUN_1001ad35c */

void FUN_1001ad35c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  _swift_unknownObjectWeakLoadStrong(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1001ad390 | FUN_1001ad390 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001ad390(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x10,param_1);
  return 0;
}



/* Address: 0x1001ad3dc | FUN_1001ad3dc */

undefined1  [16] FUN_1001ad3dc(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x7ca2);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x20) = unaff_x20;
  _swift_beginAccess(unaff_x20 + 0x10,pvVar1,0x21,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)((long)pvVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)((long)pvVar1 + 0x18);
  auVar3._0_8_ = thunk_FUN_1001ad820;
  return auVar3;
}



/* Address: 0x1001ad458 | thunk_FUN_1001ad820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1001ad820(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  _swift_unknownObjectWeakAssign
            (*(long *)((long)pvVar1 + 0x20) + 0x10,*(undefined8 *)((long)pvVar1 + 0x18));
  if ((param_2 & 1) == 0) {
    _swift_endAccess(pvVar1);
  }
  else {
    _swift_endAccess(pvVar1);
  }
  _free(pvVar1);
  return;
}



/* Address: 0x1001ad45c | FUN_1001ad45c */

undefined1 * FUN_1001ad45c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_10007d048(param_1,lVar1);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(puVar3);
  FUN_1001adc2c(puVar3,unaff_x20,lVar1,uVar2);
  FUN_100004594(param_1);
  return puVar3;
}



/* Address: 0x1001ad514 | FUN_1001ad514 */

undefined1 * FUN_1001ad514(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_10007d048(param_1,lVar1);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(puVar2);
  FUN_1001adc2c(puVar2);
  FUN_100004594(param_1);
  return puVar2;
}



/* Address: 0x1001ad5b4 | FUN_1001ad5b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ad5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  String SVar4;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar2);
  (**(code **)(lVar3 + 0x10))(auStack_88,uVar2,lVar3);
  FUN_100004640(auStack_88,local_70);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    (**(code **)(lStack_68 + 0x20))(uVar2,lVar3,param_2,param_3,local_70,lStack_68);
    FUN_100004594(auStack_88);
    return;
  }
  SVar4.bridgeObject = (void *)0x2;
  SVar4.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000022,0x8000000100d98270,
             0xd98270);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ad710);
  (*pcVar1)();
}



/* Address: 0x1001ad710 | FUN_1001ad710 */

void FUN_1001ad710(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(lVar1 + 0x10);
  return;
}



/* Address: 0x1001ad750 | FUN_1001ad750 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001ad750(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,1,0);
  _swift_unknownObjectWeakAssign(lVar1 + 0x10,param_1);
  return 0;
}



/* Address: 0x1001ad7a0 | FUN_1001ad7a0 */

undefined1  [16] FUN_1001ad7a0(undefined8 *param_1)

{
  void *pvVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xf2dd);
  }
  *param_1 = pvVar1;
  lVar2 = *unaff_x20;
  *(long *)((long)pvVar1 + 0x20) = lVar2;
  _swift_beginAccess(lVar2 + 0x10,pvVar1,0x21,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)((long)pvVar1 + 0x18) = lVar2;
  auVar3._8_8_ = (long *)((long)pvVar1 + 0x18);
  auVar3._0_8_ = thunk_FUN_1001ad820;
  return auVar3;
}



/* Address: 0x1001ad820 | FUN_1001ad820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ad820(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  _swift_unknownObjectWeakAssign
            (*(long *)((long)pvVar1 + 0x20) + 0x10,*(undefined8 *)((long)pvVar1 + 0x18));
  if ((param_2 & 1) == 0) {
    _swift_endAccess(pvVar1);
  }
  else {
    _swift_endAccess(pvVar1);
  }
  _free(pvVar1);
  return;
}



/* Address: 0x1001ad88c | FUN_1001ad88c */

void FUN_1001ad88c(void)

{
  FUN_1001ad5b4();
  return;
}



/* Address: 0x1001ad8ac | FUN_1001ad8ac */

void FUN_1001ad8ac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  String SVar3;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  lVar2 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    return;
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000022,0x8000000100d98270,
             0xd98270);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ad930);
  (*pcVar1)();
}



/* Address: 0x1001ad930 | FUN_1001ad930 */

void FUN_1001ad930(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100076688(unaff_x20 + 0x18,param_1);
  return;
}



/* Address: 0x1001ad93c | FUN_1001ad93c */

void FUN_1001ad93c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  String SVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar2 != 0) {
    return;
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd000000000000022,0x8000000100d98270,
             0xd98270);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ad9cc);
  (*pcVar1)();
}



/* Address: 0x1001ad9cc | FUN_1001ad9cc */

void FUN_1001ad9cc(undefined8 param_1)

{
  long *unaff_x20;
  
  FUN_100076688(*unaff_x20 + 0x18,param_1);
  return;
}



/* Address: 0x1001ad9dc | FUN_1001ad9dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ad9dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar3 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar2 = *(long *)(unaff_x20 + 0x38);
    FUN_100004640(unaff_x20 + 0x18,uVar1);
    (**(code **)(lVar2 + 0x28))(lVar3,param_1,param_2,uVar1,lVar2);
  }
  return;
}



/* Address: 0x1001ada70 | FUN_1001ada70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001ada70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auStack_58 [24];
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(lVar4 + 0x10,auStack_58,0,0);
  lVar3 = lVar4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x30);
    lVar2 = *(long *)(lVar4 + 0x38);
    FUN_100004640(lVar4 + 0x18,uVar1);
    (**(code **)(lVar2 + 0x28))(lVar3,param_1,param_2,uVar1,lVar2);
  }
  return;
}



/* Address: 0x1001adb08 | FUN_1001adb08 */

long FUN_1001adb08(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  _swift_allocObject();
  lVar1 = 0;
  FUN_1001ad0b8();
  lVar2 = lVar1;
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(long *)(unaff_x20 + 0x30) = lVar1;
  *(undefined ***)(unaff_x20 + 0x38) = &PTR_PTR_100ebe088;
  *(long *)(unaff_x20 + 0x18) = lVar2;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  return unaff_x20;
}



/* Address: 0x1001adb70 | FUN_1001adb70 */

void FUN_1001adb70(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long local_48 [3];
  long local_30;
  undefined **ppuStack_28;
  
  lVar1 = 0;
  FUN_1001ad0b8();
  lVar2 = lVar1;
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  ppuStack_28 = &PTR_PTR_100ebe088;
  local_48[0] = lVar2;
  local_30 = lVar1;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  FUN_100076508(local_48,unaff_x20 + 0x18);
  return;
}



/* Address: 0x1001adbd8 | FUN_1001adbd8 */

void FUN_1001adbd8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  FUN_100004594(unaff_x20 + 0x18);
  return;
}



/* Address: 0x1001adbfc | thunk_FUN_1001adc00 */

void thunk_FUN_1001adc00(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  FUN_100004594(unaff_x20 + 0x18);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001adc00 | FUN_1001adc00 */

void FUN_1001adc00(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  FUN_100004594(unaff_x20 + 0x18);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001adc2c | FUN_1001adc2c */

long FUN_1001adc2c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_10000cbb0(auStack_58);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))();
  _swift_unknownObjectWeakInit(param_2 + 0x10,0);
  FUN_100076508(auStack_58,param_2 + 0x18);
  return param_2;
}



/* Address: 0x1001adc9c | FUN_1001adc9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001adc9c(void)

{
  return ZEXT816(0x100fb4908);
}



/* Address: 0x1001adcbc | FUN_1001adcbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001adcbc(void)

{
  return ZEXT816(0x100fb49d8);
}



/* Address: 0x1001adcdc | thunk_FUN_1001ad820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_1001ad820(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  _swift_unknownObjectWeakAssign
            (*(long *)((long)pvVar1 + 0x20) + 0x10,*(undefined8 *)((long)pvVar1 + 0x18));
  if ((param_2 & 1) == 0) {
    _swift_endAccess(pvVar1);
  }
  else {
    _swift_endAccess(pvVar1);
  }
  _free(pvVar1);
  return;
}



/* Address: 0x1001adce0 | thunk_FUN_1001adbd8 */

void thunk_FUN_1001adbd8(void)

{
  FUN_1001adbd8();
  return;
}



/* Address: 0x1001adce4 | thunk_FUN_1001adc00 */

void thunk_FUN_1001adc00(void)

{
  thunk_FUN_1001adc00();
  return;
}



/* Address: 0x1001adce8 | FUN_1001adce8 */

void FUN_1001adce8(void)

{
  ID unaff_x20;
  
  objc_stub::makeKeyAndOrderFront_(unaff_x20,0);
  objc_stub::orderFrontRegardless(unaff_x20);
  return;
}



/* Address: 0x1001add08 | FUN_1001add08 */

undefined1 FUN_1001add08(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::isAnimated;
  _swift_beginAccess(unaff_x20 + _TtC12PasteRouting16WindowTransition::isAnimated,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1001add48 | FUN_1001add48 */

void FUN_1001add48(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::isAnimated;
  _swift_beginAccess(unaff_x20 + _TtC12PasteRouting16WindowTransition::isAnimated,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1001add94 | FUN_1001add94 */

undefined1  [16] FUN_1001add94(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::isAnimated;
  _swift_beginAccess(unaff_x20 + _TtC12PasteRouting16WindowTransition::isAnimated,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001addd4 | FUN_1001addd4 */

void FUN_1001addd4(void)

{
  FUN_1001ade50(&_TtC12PasteRouting16WindowTransition::onPresented,thunk_FUN_100011128);
  return;
}



/* Address: 0x1001adde8 | FUN_1001adde8 */

void FUN_1001adde8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtC12PasteRouting16WindowTransition::onPresented,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x1001addfc | FUN_1001addfc */

undefined1  [16] FUN_1001addfc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::onPresented;
  _swift_beginAccess(unaff_x20 + _TtC12PasteRouting16WindowTransition::onPresented,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001ade3c | FUN_1001ade3c */

void FUN_1001ade3c(void)

{
  FUN_1001ade50(&_TtC12PasteRouting16WindowTransition::onDismissed,thunk_FUN_100011128);
  return;
}



/* Address: 0x1001ade50 | FUN_1001ade50 */

undefined1  [16] FUN_1001ade50(long *param_1,code *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_48,0,0);
  auVar2 = *pauVar1;
  (*param_2)(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1001adeb0 | FUN_1001adeb0 */

void FUN_1001adeb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1001adec4(param_1,param_2,&_TtC12PasteRouting16WindowTransition::onDismissed,
                thunk_FUN_100004550);
  return;
}



/* Address: 0x1001adec4 | FUN_1001adec4 */

void FUN_1001adec4(undefined8 param_1,undefined8 param_2,long *param_3,code *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  (*param_4)(uVar2,uVar3);
  return;
}



/* Address: 0x1001adf20 | FUN_1001adf20 */

undefined1  [16] FUN_1001adf20(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC12PasteRouting16WindowTransition::onDismissed;
  _swift_beginAccess(unaff_x20 + _TtC12PasteRouting16WindowTransition::onDismissed,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1001adf60 | FUN_1001adf60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001adf60(ID param_1)

{
  undefined8 *puVar1;
  undefined *self;
  ID IVar2;
  long unaff_x20;
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::isAnimated) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onPresented);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onDismissed);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_1 == 0) {
    self = &_OBJC_CLASS___NSWindow;
    _objc_allocWithZone();
    param_1 = objc_stub::initWithContentRect_styleMask_backing_defer_((ID)self,0,0,0,0,0xb,2,1);
  }
  *(ID *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::window) = param_1;
  objc_stub::setReleasedWhenClosed_(param_1,0);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return IVar2;
}



/* Address: 0x1001ae04c | FUN_1001ae04c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001ae04c(ID param_1)

{
  undefined8 *puVar1;
  undefined *self;
  ID IVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::isAnimated) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onPresented);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::onDismissed);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_1 == 0) {
    self = &_OBJC_CLASS___NSWindow;
    _objc_allocWithZone();
    param_1 = objc_stub::initWithContentRect_styleMask_backing_defer_((ID)self,0,0,0,0,0xb,2,1);
  }
  *(ID *)(unaff_x20 + _TtC12PasteRouting16WindowTransition::window) = param_1;
  objc_stub::setReleasedWhenClosed_(param_1,0);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return IVar2;
}



/* Address: 0x1001ae138 | thunk_FUN_1001ae4f0 */

void thunk_FUN_1001ae4f0(void)

{
  FUN_1001ae4f0();
  return;
}



/* Address: 0x1001ae13c | FUN_1001ae13c */

void FUN_1001ae13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001ae600(param_2,param_3);
  return;
}


