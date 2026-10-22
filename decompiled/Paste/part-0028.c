/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10004e744 | FUN_10004e744 */

void FUN_10004e744(void)

{
  FUN_10004de60(0x409c200000000000);
  return;
}



/* Address: 0x10004e768 | FUN_10004e768 */

void FUN_10004e768(void)

{
  FUN_10004de60(0x40ac200000000000);
  return;
}



/* Address: 0x10004e78c | FUN_10004e78c */

void FUN_10004e78c(void)

{
  FUN_10004de60(0x40c5180000000000);
  return;
}



/* Address: 0x10004e7b0 | FUN_10004e7b0 */

void FUN_10004e7b0(void)

{
  FUN_10004de60(0x40dc200000000000);
  return;
}



/* Address: 0x10004e7d4 | FUN_10004e7d4 */

undefined8 FUN_10004e7d4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6660;
  FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10004e81c | thunk_FUN_10004e640 */

void thunk_FUN_10004e640(void)

{
  FUN_10004e640();
  return;
}



/* Address: 0x10004e820 | thunk_FUN_10004e6a8 */

void thunk_FUN_10004e6a8(void)

{
  FUN_10004e6a8();
  return;
}



/* Address: 0x10004e824 | FUN_10004e824 */

void FUN_10004e824(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e844 | FUN_10004e844 */

void FUN_10004e844(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e864 | FUN_10004e864 */

void FUN_10004e864(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e884 | FUN_10004e884 */

void FUN_10004e884(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e8a4 | FUN_10004e8a4 */

void FUN_10004e8a4(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e8c4 | FUN_10004e8c4 */

void FUN_10004e8c4(void)

{
  FUN_10004df80();
  return;
}



/* Address: 0x10004e8e4 | FUN_10004e8e4 */

void FUN_10004e8e4(void)

{
  FUN_10004e064();
  return;
}



/* Address: 0x10004e8ec | FUN_10004e8ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10004e8ec(void)

{
  URL UVar1;
  undefined *puVar2;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  ID self;
  NSArray *pNVar6;
  undefined8 uVar7;
  _StringGuts _Var8;
  char *pcVar9;
  void *in_x3;
  long extraout_x8;
  long lVar10;
  code *pcVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = *(undefined8 *)PTR____stack_chk_guard_100ea82f0;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar2 = &_OBJC_CLASS___NSTask;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  UVar4 = Foundation::URL::_init();
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  pcVar11 = *(code **)(lVar10 + 8);
  (*pcVar11)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  objc_stub::setExecutableURL_(IVar3,pNVar5);
  puVar2 = &DAT_100fa8ac8;
  FUN_1000037f0(&DAT_100fa8ac8,&DAT_100c26e00);
  _Var8.unknown = (undefined *)0x40;
  pcVar9 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x632d;
  *(undefined1 **)(puVar2 + 0x28) = &SUB_e200000000000000;
  local_68 = 0;
  local_60 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x17,_Var8);
  _swift_bridgeObjectRelease(local_60);
  local_68 = 0xd000000000000014;
  local_60 = 0x8000000100d8e890;
  self = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar4.unknown = (undefined *)NSBundle::bundleURL(self);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar4);
  SVar12 = Foundation::URL::get_path((URL)0x0);
  (*pcVar11)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  SVar13.bridgeObject = in_x3;
  SVar13.str = pcVar9;
  Swift::String::append(SVar12,SVar13);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  SVar12.bridgeObject = (void *)0xe100000000000000;
  SVar12.str = (char *)0x22;
  SVar14.bridgeObject = in_x3;
  SVar14.str = pcVar9;
  Swift::String::append(SVar12,SVar14);
  *(undefined8 *)(puVar2 + 0x30) = local_68;
  *(undefined8 *)(puVar2 + 0x38) = local_60;
  pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar2);
  objc_stub::setArguments_(IVar3,pNVar6);
  local_68 = 0;
  IVar3 = objc_stub::launchAndReturnError_(IVar3,&local_68);
  if ((int)IVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    _exit(0);
  }
  uVar7 = local_68;
  Foundation::__convertNSErrorToError();
  _swift_willThrow(0);
  _swift_errorRelease(uVar7);
                    /* WARNING: Subroutine does not return */
  _exit(0);
}



/* Address: 0x10004eb44 | thunk_FUN_10004e630 */

void thunk_FUN_10004e630(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10004e46c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10004eb48 | FUN_10004eb48 */

undefined8 FUN_10004eb48(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd00000000000001d,0x8000000100d8dc30,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x10004eb9c | FUN_10004eb9c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10004eb9c(void)

{
  ID self;
  ID IVar1;
  
  _swift_getObjectType();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,
                             "initWithContentRect:styleMask:backing:defer:",0,0,0,0,0x801b,2,1);
  IVar1 = objc_stub::setAnimationBehavior_(self,2);
  FUN_10021d7a4();
  if (IVar1 != 0) {
    objc_stub::setBlendingMode_(IVar1,0);
  }
  IVar1 = 0;
  FUN_10021d7a4();
  if (IVar1 != 0) {
    objc_stub::setMaterial_(IVar1,6);
  }
  IVar1 = objc_stub::standardWindowButton_(self,1);
  if (IVar1 != 0) {
    objc_stub::setHidden_(IVar1,1);
  }
  IVar1 = objc_stub::standardWindowButton_(self,0);
  if (IVar1 != 0) {
    objc_stub::setHidden_(IVar1,1);
  }
  IVar1 = objc_stub::standardWindowButton_(self,2);
  if (IVar1 != 0) {
    objc_stub::setHidden_(IVar1,1);
  }
  objc_stub::setTitlebarAppearsTransparent_(self,1);
  objc_stub::setMovableByWindowBackground_(self,1);
  objc_stub::setMinSize_(self,0x407f400000000000,0x4076800000000000);
  objc_stub::setHidesOnDeactivate_(self,0);
  objc_stub::setLevel_(self,3);
  return self;
}



/* Address: 0x10004ed2c | _TtC5Paste16CreateItemWindow::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste16CreateItemWindow::init(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/CreateItemWindow.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemWindow.swift",0x1c,1,5,UVar3.unknown,pMVar1);
  }
  FUN_10004eb9c();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10004edc4 | _TtC5Paste16CreateItemWindow::initWithContentRect:styleMask:backing:defer: */

/* Function Stack Size: 0x44 bytes */

ID _TtC5Paste16CreateItemWindow::initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,bool param_6)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemWindow.swift",0x1c,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.CreateItemWindow",0x16,"init(contentRect:styleMask:backing:defer:)",0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10004ee4c);
  (*pcVar1)();
}



/* Address: 0x10004ee4c | FUN_10004ee4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004ee4c(void)

{
  return ZEXT816(0x100f90ca0);
}



/* Address: 0x10004ee6c | FUN_10004ee6c */

undefined8 FUN_10004ee6c(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 0;
  FUN_1002ccc34(local_28,0xd000000000000014,0x8000000100d8dc70,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x10004eebc | FUN_10004eebc */

void FUN_10004eebc(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *pvVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined8 local_120;
  undefined8 local_118;
  long local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  undefined *local_d8;
  undefined8 uStack_d0;
  
  puVar6 = &DAT_100c25888;
  _swift_getKeyPath(&DAT_100c25888);
  puVar7 = &DAT_100fa8af8;
  FUN_1000037f0(&DAT_100fa8af8,&DAT_100c258b8);
  _swift_initStackObject();
  FUN_1000da6e0(puVar6,puVar7);
  FUN_1000da768(&local_f0);
  uVar8 = local_f0;
  _swift_getObjectType(local_f0);
  (**(code **)(lStack_e8 + 0x10))(1,uVar8,lStack_e8);
  _swift_unknownObjectRelease(local_f0);
  puVar7 = &DAT_100c258c0;
  _swift_getKeyPath(&DAT_100c258c0);
  puVar9 = &DAT_100fa6958;
  FUN_1000037f0(&DAT_100fa6958,&DAT_100c23238);
  _swift_initStackObject();
  FUN_1000da6e0(puVar7,puVar9);
  FUN_1000d468c(&local_f0);
  _Var10.unknown = local_d8;
  FUN_100004640(&local_f0);
  local_120 = 0;
  local_118 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x25,_Var10);
  _swift_bridgeObjectRelease(local_118);
  local_100 = -0x2fffffffffffffde;
  uStack_f8 = 0x8000000100d8e920;
  FUN_1000da768(&local_108);
  pcVar11 = (char *)0x0;
  pvVar12 = (void *)0x0;
  _swift_beginAccess(local_108 + 0x10,&local_120);
  cVar3 = *(char *)(local_108 + 0x10);
  _swift_release(local_108);
  bVar5 = cVar3 == '\0';
  pcVar1 = (char *)0x65757274;
  if (bVar5) {
    pcVar1 = (char *)0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar5) {
    puVar2 = &DAT_e500000000000000;
  }
  SVar13.bridgeObject = puVar2;
  SVar13.str = pcVar1;
  SVar15.bridgeObject = pvVar12;
  SVar15.str = pcVar11;
  Swift::String::append(SVar13,SVar15);
  _swift_bridgeObjectRelease(puVar2);
  SVar14.bridgeObject = (void *)0xe100000000000000;
  SVar14.str = (char *)0x29;
  SVar16.bridgeObject = pvVar12;
  SVar16.str = pcVar11;
  Swift::String::append(SVar14,SVar16);
  uVar8 = uStack_f8;
  FUN_1000d4db8(local_100,uStack_f8,local_d8,uStack_d0);
  _swift_bridgeObjectRelease(uVar8);
  FUN_100004594(&local_f0);
  FUN_1000da768(&local_100);
  lVar4 = local_100;
  _swift_beginAccess(local_100 + 0x10,&local_f0,0,0);
  cVar3 = *(char *)(lVar4 + 0x10);
  _swift_release(lVar4);
  if (cVar3 == '\x01') {
    FUN_10004f134();
  }
  _swift_release(puVar7);
  _swift_release(puVar6);
  return;
}



/* Address: 0x10004f10c | FUN_10004f10c */

void FUN_10004f10c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000d48fc();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10004f130 | thunk_FUN_100009890 */

void thunk_FUN_100009890(void)

{
  FUN_100009890();
  return;
}



/* Address: 0x10004f134 | FUN_10004f134 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004f134(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  Locale LVar4;
  ID self;
  String *pSVar5;
  char *pcVar6;
  _StringGuts _Var7;
  void *extraout_x1;
  void *pvVar8;
  undefined1 *puVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  long extraout_x8;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  char *local_c0;
  long local_b8;
  long local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  char *local_98;
  undefined1 *local_90;
  String local_88;
  undefined8 local_78;
  char *local_70;
  void *pvStack_68;
  
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  local_b0 = *(long *)(LVar4.unknown + -8);
  puStack_a8 = LVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  local_b8 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f3588();
  local_a0 = *(undefined8 *)LVar4.unknown;
  _swift_retain(local_a0);
  self = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  NSProcessInfo::operatingSystemVersion(self,&local_88);
  pvVar14 = local_88.bridgeObject;
  local_98 = local_88.str;
  local_88 = Swift::CustomStringConvertible::get_description();
  SVar15.bridgeObject = (void *)0xe100000000000000;
  SVar15.str = (char *)0x2e;
  SVar28.bridgeObject = param_4;
  SVar28.str = param_3;
  Swift::String::append(SVar15,SVar28);
  local_98 = pvVar14;
  SVar15 = Swift::CustomStringConvertible::get_description();
  SVar29.bridgeObject = param_4;
  SVar29.str = param_3;
  Swift::String::append(SVar15,SVar29);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x2e;
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar16,SVar30);
  local_98 = (char *)local_78;
  SVar15 = Swift::CustomStringConvertible::get_description();
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar15,SVar31);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  pvVar14 = local_88.bridgeObject;
  local_c0 = local_88.str;
  FUN_1000d468c(&local_88);
  pvVar12 = pvStack_68;
  pcVar10 = local_70;
  pSVar5 = &local_88;
  FUN_100004640(pSVar5,local_70);
  FUN_1000d4db8(0xd000000000000017,0x8000000100d8e950,pcVar10,pvVar12,pSVar5);
  FUN_100004594(&local_88);
  FUN_1000d468c(&local_88);
  pvVar13 = pvStack_68;
  pcVar11 = local_70;
  _Var7.unknown = local_70;
  FUN_100004640(&local_88);
  local_98 = (char *)0x0;
  local_90 = (undefined1 *)0xe000000000000000;
  Swift::_StringGuts::grow(0x11,_Var7);
  _swift_bridgeObjectRelease(local_90);
  local_98 = (char *)0x203a707041;
  local_90 = &DAT_e500000000000000;
  pcVar6 = (char *)NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pvVar8 = extraout_x1;
  FUN_1000f50ac();
  if (((uint)pvVar12 & 0xff) != 1) {
    FUN_1000f4a7c();
    SVar17.bridgeObject = pvVar8;
    SVar17.str = pcVar6;
    SVar32.bridgeObject = pvVar12;
    SVar32.str = pcVar10;
    Swift::String::append(SVar17,SVar32);
    _swift_bridgeObjectRelease(pvVar8);
    SVar18.bridgeObject = &SUB_e200000000000000;
    SVar18.str = (char *)0x2820;
    puVar9 = &SUB_e200000000000000;
    pcVar6 = (char *)0x2820;
    SVar33.bridgeObject = pvVar12;
    SVar33.str = pcVar10;
    Swift::String::append(SVar18,SVar33);
    FUN_10009f8c0();
    SVar19.bridgeObject = puVar9;
    SVar19.str = pcVar6;
    SVar34.bridgeObject = pvVar12;
    SVar34.str = pcVar10;
    Swift::String::append(SVar19,SVar34);
    _swift_bridgeObjectRelease(puVar9);
    SVar20.bridgeObject = (void *)0xe300000000000000;
    SVar20.str = (char *)0x5b2029;
    SVar35.bridgeObject = pvVar12;
    SVar35.str = pcVar10;
    Swift::String::append(SVar20,SVar35);
    SVar21.bridgeObject = &DAT_e800000000000000;
    SVar21.str = (char *)0x65726f7453707041;
    SVar36.bridgeObject = pvVar12;
    SVar36.str = pcVar10;
    Swift::String::append(SVar21,SVar36);
    SVar22.bridgeObject = (void *)0xe100000000000000;
    SVar22.str = (char *)0x5d;
    SVar37.bridgeObject = pvVar12;
    SVar37.str = pcVar10;
    Swift::String::append(SVar22,SVar37);
    puVar9 = local_90;
    FUN_1000d4db8(local_98,local_90);
    _swift_bridgeObjectRelease(puVar9);
    FUN_100004594(&local_88);
    FUN_1000d468c(&local_88);
    pvVar12 = pvStack_68;
    pcVar10 = local_70;
    FUN_100004640(&local_88,local_70);
    local_98 = (char *)0x4f63616d203a534f;
    local_90 = (undefined1 *)0xea00000000002053;
    SVar23.bridgeObject = pvVar14;
    SVar23.str = local_c0;
    SVar38.bridgeObject = pvVar13;
    SVar38.str = pcVar11;
    Swift::String::append(SVar23,SVar38);
    _swift_bridgeObjectRelease(pvVar14);
    puVar9 = local_90;
    FUN_1000d4db8(local_98,local_90);
    _swift_bridgeObjectRelease(puVar9);
    FUN_100004594(&local_88);
    FUN_1000d468c(&local_88);
    pvVar14 = pvStack_68;
    pcVar11 = local_70;
    pSVar5 = &local_88;
    pcVar6 = local_70;
    FUN_100004640();
    uVar2 = local_a0;
    local_98 = (char *)0x203a656369766544;
    local_90 = &DAT_e800000000000000;
    FUN_1000f36ec();
    SVar24.bridgeObject = pcVar6;
    SVar24.str = (char *)pSVar5;
    SVar39.bridgeObject = pvVar12;
    SVar39.str = pcVar10;
    Swift::String::append(SVar24,SVar39);
    _swift_bridgeObjectRelease(pcVar6);
    SVar25.bridgeObject = &SUB_e200000000000000;
    SVar25.str = (char *)0x2820;
    SVar40.bridgeObject = pvVar12;
    SVar40.str = pcVar10;
    Swift::String::append(SVar25,SVar40);
    pcVar6 = (char *)0x6c65646f6d2e7768;
    puVar9 = &DAT_e800000000000000;
    thunk_FUN_1000f4774();
    SVar26.bridgeObject = puVar9;
    SVar26.str = pcVar6;
    SVar41.bridgeObject = pvVar12;
    SVar41.str = pcVar10;
    Swift::String::append(SVar26,SVar41);
    _swift_bridgeObjectRelease(puVar9);
    SVar27.bridgeObject = (void *)0xe100000000000000;
    SVar27.str = (char *)0x29;
    SVar42.bridgeObject = pvVar12;
    SVar42.str = pcVar10;
    Swift::String::append(SVar27,SVar42);
    puVar9 = local_90;
    FUN_1000d4db8(local_98,local_90);
    _swift_bridgeObjectRelease(puVar9);
    FUN_100004594(&local_88);
    FUN_1000d468c(&local_88);
    pvVar12 = pvStack_68;
    pcVar10 = local_70;
    LVar4.unknown = (undefined *)&local_88;
    FUN_100004640(LVar4.unknown,local_70);
    lVar1 = local_b8;
    local_98 = (char *)0x203a656c61636f4c;
    local_90 = &DAT_e800000000000000;
    LVar4 = Foundation::Locale::get_current(LVar4);
    SVar15 = Foundation::Locale::get_identifier(LVar4);
    (**(code **)(local_b0 + 8))(lVar1,puStack_a8);
    SVar43.bridgeObject = pvVar14;
    SVar43.str = pcVar11;
    Swift::String::append(SVar15,SVar43);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    puVar9 = local_90;
    FUN_1000d4db8(local_98,local_90,pcVar10,pvVar12);
    _swift_bridgeObjectRelease(puVar9);
    FUN_100004594(&local_88);
    FUN_1000d468c(&local_88);
    pSVar5 = &local_88;
    FUN_100004640(pSVar5,local_70);
    FUN_1000d4db8(0xd000000000000017,0x8000000100d8e970,local_70,pvStack_68,pSVar5);
    _swift_release(uVar2);
    FUN_100004594(&local_88);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10004f664);
  (*pcVar3)();
}



/* Address: 0x10004f664 | FUN_10004f664 */

void FUN_10004f664(void)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyCancellable *this;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_a8 [3];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  local_90 = uVar4;
  uStack_88 = uVar6;
  local_80 = uVar7;
  local_70 = uVar5;
  local_60 = uVar3;
  _swift_retain(uVar4);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  puVar1 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release(uVar4);
  puVar2 = &DAT_100eb1d28;
  local_a8[0] = puVar1;
  _swift_allocObject(&DAT_100eb1d28,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_10004ff44();
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar1);
  _swift_release(puVar2);
  _swift_beginAccess(unaff_x20 + 0x48,local_a8,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + 0x48));
  _swift_endAccess(local_a8);
  _swift_release(this);
  return;
}



/* Address: 0x10004f7d4 | FUN_10004f7d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004f7d4(void)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar4 = *(undefined8 *)PTR__NSWindowDidBecomeKeyNotification_100ea9148;
  IVar2 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue);
  puVar3 = &DAT_100eb1d28;
  _swift_allocObject(&DAT_100eb1d28,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  local_50 = FUN_10004fd44;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059f04;
  puStack_58 = &DAT_100eb1d40;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  IVar1 = NSNotificationCenter::addObserverForName_object_queue_usingBlock_
                    (IVar1,uVar4,0,IVar2,aBlock);
  __Block_release(aBlock);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  *(ID *)(unaff_x20 + 0x50) = IVar1;
  _swift_unknownObjectRelease(uVar4);
  return;
}



/* Address: 0x10004f900 | FUN_10004f900 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004f900(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID self;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x50);
  if (lVar3 != 0) {
    _swift_unknownObjectRetain(lVar3);
    self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    NSNotificationCenter::removeObserver_(self,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10004f9c4 | FUN_10004f9c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10004f9c4(void)

{
  return ZEXT816(0x100fa8b40);
}



/* Address: 0x10004f9e4 | FUN_10004f9e4 */

void FUN_10004f9e4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10004fa08 | FUN_10004fa08 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10004fa08(undefined8 param_1,long param_2)

{
  MainActor *pMVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  _ArrayBuffer _Var8;
  MainActor *self;
  MainActor *pMVar9;
  MainActor *pMVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(this,this);
  pMVar5 = pMVar4;
  FUN_1000081a8();
  pMVar11 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ScreensharingPrivacyManager.swift",0x27,1,0x24,UVar6.unknown,pMVar11);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    _swift_release(pMVar4);
    return;
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10004fce4);
    (*pcVar3)();
  }
  _Var8.unknown = (undefined *)objc_stub::windows(*(ID *)PTR__NSApp_100ea8fa0);
  FUN_100017a74(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    pMVar11 = *(MainActor **)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var2.unknown = _Var8.unknown;
    }
    pMVar11 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (pMVar11 != (MainActor *)0x0) {
    pMVar12 = (MainActor *)0x0;
    do {
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        if (*(MainActor **)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= pMVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10004fc90);
          (*pcVar3)();
        }
        self = *(MainActor **)(_Var8.unknown + (long)pMVar12 * 8 + 0x20);
      }
      else {
        self = pMVar12;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar12,_Var8);
      }
      pMVar1 = pMVar12 + 1;
      if (SCARRY8((long)pMVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10004fc8c);
        (*pcVar3)();
      }
      pMVar9 = Swift::MainActor::get_shared(this,self);
      pMVar10 = pMVar5;
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ScreensharingPrivacyManager.swift",0x27,1,0x3b,UVar6.unknown,pMVar10);
      }
      uVar16 = *(undefined8 *)(param_2 + 0x18);
      uVar14 = *(undefined8 *)(param_2 + 0x10);
      uStack_88 = *(undefined8 *)(param_2 + 0x28);
      uVar17 = *(undefined8 *)(param_2 + 0x20);
      uStack_78 = *(undefined8 *)(param_2 + 0x38);
      uVar15 = *(undefined8 *)(param_2 + 0x30);
      uVar13 = *(undefined8 *)(param_2 + 0x40);
      local_a0 = uVar14;
      uStack_98 = uVar16;
      local_90 = uVar17;
      local_80 = uVar15;
      local_70 = uVar13;
      _swift_retain(uVar14);
      _swift_retain(uVar16);
      _swift_retain(uVar17);
      _swift_retain(uVar15);
      _swift_retain(uVar13);
      FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
      FUN_1002ca7e0(&local_a1);
      _swift_release(uVar13);
      _swift_release(uVar15);
      _swift_release(uVar17);
      _swift_release(uVar16);
      _swift_release(uVar14);
      objc_stub::setSharingType_((ID)self,(ulong)local_a1);
      _swift_release(pMVar9);
      pMVar12 = pMVar12 + 1;
    } while (pMVar1 != pMVar11);
  }
  _swift_release(pMVar4);
  _swift_bridgeObjectRelease(_Var8.unknown);
  _swift_release(param_2);
  return;
}



/* Address: 0x10004fce4 | FUN_10004fce4 */

void FUN_10004fce4(undefined8 param_1,undefined8 param_2)

{
  Swift::MainActor::typeMetadataAccessor();
  FUN_1000582d0(FUN_10004ff24,param_2,"Paste/ScreensharingPrivacyManager.swift",0x27,2,0x33);
  return;
}



/* Address: 0x10004fd44 | FUN_10004fd44 */

void FUN_10004fd44(void)

{
  FUN_10004fce4();
  return;
}



/* Address: 0x10004fd4c | FUN_10004fd4c */

void FUN_10004fd4c(long param_1,long param_2)

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



/* Address: 0x10004fd60 | FUN_10004fd60 */

void FUN_10004fd60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10004fd68 | FUN_10004fd68 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10004fd68(long param_1)

{
  code *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte local_51;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ScreensharingPrivacyManager.swift",0x27,1,0x33,UVar4.unknown,pMVar2);
  }
  pMVar2 = (MainActor *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar2 != (MainActor *)0x0) {
    if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10004ff24);
      (*pcVar1)();
    }
    self = objc_stub::keyWindow(*(ID *)PTR__NSApp_100ea8fa0);
    if (self != 0) {
      uVar9 = *(undefined8 *)(pMVar2 + 0x18);
      uVar7 = *(undefined8 *)(pMVar2 + 0x10);
      uVar10 = *(undefined8 *)(pMVar2 + 0x20);
      uVar8 = *(undefined8 *)(pMVar2 + 0x30);
      uVar6 = *(undefined8 *)(pMVar2 + 0x40);
      _swift_retain(uVar7);
      _swift_retain(uVar9);
      _swift_retain(uVar10);
      _swift_retain(uVar8);
      _swift_retain(uVar6);
      FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
      FUN_1002ca7e0(&local_51);
      _swift_release(uVar6);
      _swift_release(uVar8);
      _swift_release(uVar10);
      _swift_release(uVar9);
      _swift_release(uVar7);
      objc_stub::setSharingType_(self,(ulong)local_51);
      _swift_release(pMVar3);
      _swift_release(pMVar2);
      return;
    }
    _swift_release(pMVar3);
    pMVar3 = pMVar2;
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10004ff24 | FUN_10004ff24 */

void FUN_10004ff24(void)

{
  FUN_10004fd68();
  return;
}



/* Address: 0x10004ff3c | FUN_10004ff3c */

void FUN_10004ff3c(void)

{
  FUN_10004fa08();
  return;
}



/* Address: 0x10004ff44 | FUN_10004ff44 */

void FUN_10004ff44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100faa8e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7ab0;
  FUN_100005c24(&DAT_100fa7ab0,&DAT_100c26e30);
  puVar2 = PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758;
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             puVar1);
  DAT_100faa8e0 = puVar2;
  return;
}



/* Address: 0x10004ff94 | FUN_10004ff94 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10004ff94(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView;
  self = *(ID *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView);
  if (self == 0) {
    FUN_100236a6c();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    objc_stub::setHasHorizontalScroller_(self,0);
    objc_stub::setHasVerticalScroller_(self,0);
    objc_stub::setVerticalScrollElasticity_(self,1);
    objc_stub::setDrawsBackground_(self,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100050034 | FUN_100050034 */

void FUN_100050034(void)

{
  FUN_100050070(&_TtC5Paste16TabBarScrollView::___lazy_storage___documentContainerView,FUN_100236364
               );
  return;
}



/* Address: 0x100050048 | FUN_100050048 */

void FUN_100050048(void)

{
  FUN_100050070(&_TtC5Paste16TabBarScrollView::___lazy_storage___leadingShadowOverlay,FUN_1000518b8)
  ;
  return;
}



/* Address: 0x10005005c | FUN_10005005c */

void FUN_10005005c(void)

{
  FUN_100050070(&_TtC5Paste16TabBarScrollView::___lazy_storage___trailingShadowOverlay,FUN_1000518b8
               );
  return;
}



/* Address: 0x100050070 | FUN_100050070 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100050070(long *param_1,code *param_2)

{
  ID self;
  long lVar1;
  long unaff_x20;
  
  lVar1 = *param_1;
  self = *(ID *)(unaff_x20 + lVar1);
  if (self == 0) {
    (*param_2)();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x1000500d4 | _TtC5Paste16TabBarScrollView::intrinsicContentSize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGSize _TtC5Paste16TabBarScrollView::intrinsicContentSize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  double extraout_d0;
  double dVar7;
  double extraout_d0_00;
  double dVar8;
  double extraout_d0_01;
  double dVar9;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  CGSize CVar10;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x17,UVar4.unknown,puVar3);
  }
  FUN_100050034();
  objc_stub::bounds(param_1);
  IVar6 = 0;
  dVar7 = extraout_d0;
  _CGRectGetWidth(extraout_d0,in_d1,in_d2,in_d3);
  FUN_100050048();
  objc_stub::frame(IVar6);
  IVar6 = 0;
  dVar8 = extraout_d0_00;
  _CGRectGetWidth(extraout_d0_00,in_d1,in_d2,in_d3);
  FUN_10005005c();
  objc_stub::frame(IVar6);
  dVar9 = extraout_d0_01;
  _CGRectGetWidth(extraout_d0_01,in_d1,in_d2,in_d3,0);
  _swift_release(pMVar2);
  CVar10.field0_0x0 = dVar7 + dVar8 + dVar9;
  CVar10.field1_0x8 = 40.0;
  return CVar10;
}



/* Address: 0x10005026c | FUN_10005026c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000504c0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_10005026c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  Publisher PVar4;
  ID self;
  ID IVar5;
  undefined8 uVar6;
  AnyCancellable *pAVar7;
  __int64 _Var8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar10;
  code *pcVar11;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 auStack_e0 [16];
  ID local_d0;
  
  PVar4 = Publisher::_typeMetadataAccessor();
  local_e8 = *(long *)(PVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  puVar10 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___documentContainerView)
       = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___leadingShadowOverlay)
       = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___trailingShadowOverlay)
       = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste16TabBarScrollView::contentInset);
  puVar1[1] = 0x401c000000000000;
  *puVar1 = 0x4018000000000000;
  puVar1[3] = 0x401c000000000000;
  puVar1[2] = 0x4018000000000000;
  puVar9 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var8 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar9 = PTR___swiftEmptySetSingleton_100eae0e8, _Var8 != 0)) {
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste16TabBarScrollView::cancellables) = puVar9;
  FUN_10005142c();
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"initWithFrame:",param_1,param_2
                             ,param_3,param_4);
  IVar5 = objc_stub::setContentCompressionResistancePriority_forOrientation_(self,0x437a0000,0);
  FUN_100050034();
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar5,0);
  IVar5 = 0;
  FUN_10004ff94();
  lVar3 = _TtC5Paste16TabBarScrollView::___lazy_storage___documentContainerView;
  objc_stub::setDocumentView_
            (IVar5,*(undefined8 *)
                    (self + _TtC5Paste16TabBarScrollView::___lazy_storage___documentContainerView));
  puVar9 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 7;
  *(undefined8 *)(puVar9 + 0x10) = 3;
  lVar2 = _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView;
  uVar6 = *(undefined8 *)(self + _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView);
  *(undefined8 *)(puVar9 + 0x20) = uVar6;
  FUN_100050048();
  *(undefined8 *)(puVar9 + 0x28) = uVar6;
  FUN_10005005c();
  *(undefined8 *)(puVar9 + 0x30) = uVar6;
  local_d0 = self;
  FUN_1001fa150(puVar9,FUN_1000519bc,auStack_e0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar9);
  _swift_arrayDestroy(puVar9 + 0x20,*(undefined8 *)(puVar9 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  IVar5 = *(ID *)(self + lVar3);
  objc_stub::setPostsFrameChangedNotifications_(IVar5,1);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher
            (puVar10,IVar5,*(undefined8 *)(self + lVar3));
  puVar9 = &DAT_100eb1d90;
  _swift_allocObject(&DAT_100eb1d90,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10,self);
  FUN_100003a00(&DAT_100fa6698,PTR__typeMetadataAccessor_100ea79b0,
                PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar9);
  pcVar11 = *(code **)(local_e8 + 8);
  (*pcVar11)(puVar10,PVar4.unknown);
  lVar3 = _TtC5Paste16TabBarScrollView::cancellables;
  _swift_beginAccess(self + _TtC5Paste16TabBarScrollView::cancellables,auStack_e0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(self + lVar3));
  _swift_endAccess(auStack_e0);
  _swift_release(pAVar7);
  IVar5 = objc_stub::contentView(*(ID *)(self + lVar2));
  objc_stub::setPostsBoundsChangedNotifications_(IVar5,1);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  IVar5 = objc_stub::contentView(*(ID *)(self + lVar2));
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar10,IVar5,IVar5);
  puVar9 = &DAT_100eb1d90;
  _swift_allocObject(&DAT_100eb1d90,0x18,7);
  _swift_unknownObjectWeakInit(puVar9 + 0x10,self);
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar9);
  (*pcVar11)(puVar10,PVar4.unknown);
  _swift_beginAccess(self + lVar3,auStack_e0,0x21,0);
  Combine::AnyCancellable::store(pAVar7,(undefined *)(self + lVar3));
  _swift_endAccess(auStack_e0);
  _swift_release(pAVar7);
  return self;
}



/* Address: 0x1000506e0 | FUN_1000506e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_1000506e0(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID *pIVar4;
  ID *pIVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID *pIVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID local_98 [3];
  ID local_80;
  undefined **local_78;
  ID *local_70;
  
  IVar11 = param_1;
  FUN_10004ff94();
  local_70 = (ID *)IVar11;
  FUN_10005142c();
  local_78 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = IVar11;
  FUN_10000ec2c(0,&DAT_100fa7b60,&PTR__OBJC_CLASS___NSScrollView_100f8d700);
  pIVar4 = local_98;
  FUN_1001f9cd8(0,pIVar4,uVar3,&PTR_PTR_100ec00e8);
  pIVar5 = local_98;
  FUN_100004594();
  FUN_100050048();
  local_78 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = IVar11;
  local_70 = pIVar5;
  FUN_1000518b8(0);
  pIVar5 = local_98;
  FUN_1001f9cd8(0,pIVar5,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar2 = _TtC5Paste16TabBarScrollView::___lazy_storage___leadingShadowOverlay;
  IVar6 = objc_stub::leftAnchor
                    (*(ID *)(param_1 +
                            _TtC5Paste16TabBarScrollView::___lazy_storage___leadingShadowOverlay));
  IVar7 = objc_stub::leftAnchor(param_1);
  IVar7 = objc_stub::constraintEqualToAnchor_(IVar6,IVar7);
  IVar6 = objc_stub::rightAnchor(*(ID *)(param_1 + lVar2));
  lVar1 = _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView;
  IVar8 = objc_stub::leftAnchor
                    (*(ID *)(param_1 + _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView));
  IVar8 = objc_stub::constraintEqualToAnchor_(IVar6,IVar8);
  IVar6 = objc_stub::widthAnchor(*(ID *)(param_1 + lVar2));
  IVar9 = objc_stub::constraintEqualToConstant_(IVar6,0x3ff0000000000000);
  IVar6 = IVar9;
  FUN_10005005c();
  local_78 = &PTR_PTR_100ec00e8;
  pIVar10 = local_98;
  local_98[0] = param_1;
  local_80 = IVar11;
  local_70 = (ID *)IVar6;
  FUN_1001f9cd8(0,pIVar10,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar2 = _TtC5Paste16TabBarScrollView::___lazy_storage___trailingShadowOverlay;
  IVar11 = objc_stub::leftAnchor
                     (*(ID *)(param_1 +
                             _TtC5Paste16TabBarScrollView::___lazy_storage___trailingShadowOverlay))
  ;
  IVar6 = objc_stub::rightAnchor(*(ID *)(param_1 + lVar1));
  IVar11 = objc_stub::constraintEqualToAnchor_(IVar11,IVar6);
  IVar6 = objc_stub::rightAnchor(*(ID *)(param_1 + lVar2));
  IVar12 = objc_stub::rightAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar6,IVar12);
  IVar12 = objc_stub::widthAnchor(*(ID *)(param_1 + lVar2));
  IVar12 = objc_stub::constraintEqualToConstant_(IVar12,0x3ff0000000000000);
  puVar13 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 0x12;
  *(undefined8 *)(puVar13 + 0x10) = 9;
  puVar14 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar13 + 0x38) = puVar14;
  *(undefined ***)(puVar13 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar13 + 0x20) = pIVar4;
  *(undefined **)(puVar13 + 0x60) = puVar14;
  *(undefined ***)(puVar13 + 0x68) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar13 + 0x48) = pIVar5;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar13 + 0x88) = uVar3;
  *(undefined ***)(puVar13 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x70) = IVar7;
  *(undefined8 *)(puVar13 + 0xb0) = uVar3;
  *(undefined ***)(puVar13 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x98) = IVar8;
  *(undefined8 *)(puVar13 + 0xd8) = uVar3;
  *(undefined ***)(puVar13 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0xc0) = IVar9;
  *(undefined **)(puVar13 + 0x100) = puVar14;
  *(undefined ***)(puVar13 + 0x108) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar13 + 0xe8) = pIVar10;
  *(undefined8 *)(puVar13 + 0x128) = uVar3;
  *(undefined ***)(puVar13 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x110) = IVar11;
  *(undefined8 *)(puVar13 + 0x150) = uVar3;
  *(undefined ***)(puVar13 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x138) = IVar6;
  *(undefined8 *)(puVar13 + 0x178) = uVar3;
  *(undefined ***)(puVar13 + 0x180) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x160) = IVar12;
  _swift_bridgeObjectRetain(pIVar4);
  _swift_bridgeObjectRetain(pIVar5);
  _swift_bridgeObjectRetain(pIVar10);
  puVar15 = puVar13;
  FUN_1001f8d60(puVar13);
  _swift_bridgeObjectRelease(pIVar4);
  _swift_bridgeObjectRelease(pIVar5);
  _swift_bridgeObjectRelease(pIVar10);
  _swift_setDeallocating(puVar13);
  uVar3 = *(undefined8 *)(puVar13 + 0x10);
  puVar14 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar13 + 0x20,uVar3,puVar14);
  return puVar15;
}



/* Address: 0x100050bb4 | FUN_100050bb4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100050bb4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID self;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x3a,UVar4.unknown,puVar3);
  }
  self = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::invalidateIntrinsicContentSize(self);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100051284();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100050cac | FUN_100050cac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100050cac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x42,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100051284();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100050d88 | _TtC5Paste16TabBarScrollView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC5Paste16TabBarScrollView::initWithFrame_
          (_TtC5Paste16TabBarScrollView *this,ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/TabBarScrollView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x20,UVar4.unknown,puVar3);
  }
  FUN_10005026c();
  _swift_release(pMVar2);
  return (ID)pcVar5;
}



/* Address: 0x100050e74 | _TtC5Paste16TabBarScrollView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste16TabBarScrollView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x47,UVar4.unknown,puVar3);
  }
  FUN_1000518d8();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x100050f3c | FUN_100050f3c */

undefined * FUN_100050f3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  
  local_38 = param_1;
  FUN_100050034();
  uVar1 = 0;
  FUN_100236364();
  ppuStack_40 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_60[0] = param_1;
  local_48 = uVar1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  puVar3 = local_60;
  FUN_1001f97b4(0x4018000000000000,0x401c000000000000,0x4018000000000000,0x401c000000000000,puVar3,
                uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_60);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar4 + 0x20) = puVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar1,puVar5);
  return puVar6;
}



/* Address: 0x100051068 | _TtC5Paste16TabBarScrollView::scrollRectToVisible: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

bool _TtC5Paste16TabBarScrollView::scrollRectToVisible_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x52,UVar4.unknown,puVar3);
  }
  FUN_10004ff94();
  IVar6 = objc_stub::contentView(param_1);
  IVar6 = objc_stub::scrollRectToVisible_(IVar6);
  _swift_release(pMVar2);
  return (bool)IVar6;
}



/* Address: 0x100051198 | _TtC5Paste16TabBarScrollView::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste16TabBarScrollView::layout(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  objc_super local_50;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/TabBarScrollView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x59,UVar4.unknown,puVar3);
  }
  FUN_10005142c();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar5;
  _objc_msgSendSuper2(&local_50,"layout");
  FUN_100051284();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100051284 | FUN_100051284 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100051284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5
             )

{
  ID IVar1;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar2;
  double dVar3;
  
  FUN_10004ff94();
  IVar1 = objc_stub::documentView(param_5);
  if (IVar1 == 0) {
    dVar3 = -7.0;
  }
  else {
    objc_stub::bounds(IVar1);
    dVar3 = extraout_d0;
    _CGRectGetWidth(extraout_d0,param_2,param_3,param_4,0);
    dVar3 = dVar3 + -7.0;
  }
  IVar1 = objc_stub::contentView
                    (*(ID *)(unaff_x20 + _TtC5Paste16TabBarScrollView::___lazy_storage___scrollView)
                    );
  objc_stub::bounds(IVar1);
  IVar1 = 0;
  FUN_100050048();
  objc_stub::setHidden_(IVar1,(ulong)(extraout_d0_00 <= 7.0));
  IVar1 = 0;
  FUN_10005005c();
  objc_stub::bounds(unaff_x20);
  dVar2 = extraout_d0_01;
  _CGRectGetWidth();
  objc_stub::setHidden_(IVar1,(ulong)(dVar3 <= extraout_d0_00 + dVar2));
  return 0;
}



/* Address: 0x100051394 | FUN_100051394 */

void FUN_100051394(void)

{
  FUN_10005142c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1000513c4 | _TtC5Paste16TabBarScrollView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste16TabBarScrollView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x10005142c | FUN_10005142c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10005142c(void)

{
  return ZEXT816(0x100f90d50);
}



/* Address: 0x10005144c | FUN_10005144c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10005144c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *self;
  NSArray *pNVar3;
  ID unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"drawRect:",param_1,param_2,param_3,
                      param_4);
  puVar1 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 7;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  IVar2 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(puVar1 + 0x20) = IVar2;
  IVar2 = NSColor::labelColor((ID)&_OBJC_CLASS___NSColor);
  IVar2 = NSColor::colorWithAlphaComponent_(IVar2,0x3fc47ae147ae147b);
  *(ID *)(puVar1 + 0x28) = IVar2;
  IVar2 = NSColor::clearColor((ID)&_OBJC_CLASS___NSColor);
  *(ID *)(puVar1 + 0x30) = IVar2;
  self = &_OBJC_CLASS___NSGradient;
  _objc_allocWithZone();
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  IVar2 = objc_stub::initWithColors_((ID)self,pNVar3);
  if (IVar2 != 0) {
    objc_stub::bounds(unaff_x20);
    objc_stub::drawInRect_angle_(IVar2);
  }
  return 0;
}



/* Address: 0x1000515f0 | _TtC5PasteP33_4BA0ACC1644C941FA8736E10D68D547E17ShadowOverlayView::drawRect: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC5PasteP33_4BA0ACC1644C941FA8736E10D68D547E17ShadowOverlayView::drawRect_
               (ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x69,UVar4.unknown,puVar3);
  }
  FUN_10005144c(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000516e0 | _TtC5PasteP33_4BA0ACC1644C941FA8736E10D68D547E17ShadowOverlayView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5PasteP33_4BA0ACC1644C941FA8736E10D68D547E17ShadowOverlayView::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x68,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"init");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1000517b4 | _TtC5PasteP33_4BA0ACC1644C941FA8736E10D68D547E17ShadowOverlayView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5PasteP33_4BA0ACC1644C941FA8736E10D68D547E17ShadowOverlayView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarScrollView.swift",0x1c,1,0x68,UVar5.unknown,puVar4);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar7;
}



/* Address: 0x1000518b8 | FUN_1000518b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000518b8(void)

{
  return ZEXT816(0x100f90eb8);
}


