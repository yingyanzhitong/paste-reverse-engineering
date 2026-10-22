/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10020a13c | FUN_10020a13c */

void FUN_10020a13c(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057838 = param_1;
  return;
}



/* Address: 0x10020a164 | FUN_10020a164 */

undefined8 * FUN_10020a164(void)

{
  if (DAT_100fb6920 != -1) {
    _swift_once(&DAT_100fb6920,FUN_10020a13c);
  }
  return &DAT_101057838;
}



/* Address: 0x10020a1a4 | FUN_10020a1a4 */

void FUN_10020a1a4(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x10020a1b4 | FUN_10020a1b4 */

void FUN_10020a1b4(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057840 = param_1;
  return;
}



/* Address: 0x10020a1dc | FUN_10020a1dc */

undefined8 * FUN_10020a1dc(void)

{
  if (DAT_100fb6970 != -1) {
    _swift_once(&DAT_100fb6970,FUN_10020a1b4);
  }
  return &DAT_101057840;
}



/* Address: 0x10020a21c | FUN_10020a21c */

void FUN_10020a21c(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x10020a22c | FUN_10020a22c */

void FUN_10020a22c(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057848 = param_1;
  return;
}



/* Address: 0x10020a254 | FUN_10020a254 */

undefined8 * FUN_10020a254(void)

{
  if (DAT_100fb69c0 != -1) {
    _swift_once(&DAT_100fb69c0,FUN_10020a22c);
  }
  return &DAT_101057848;
}



/* Address: 0x10020a294 | FUN_10020a294 */

void FUN_10020a294(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x10020a2a4 | FUN_10020a2a4 */

void FUN_10020a2a4(undefined8 param_1)

{
  FUN_10020a674();
  _swift_initStaticObject();
  DAT_101057850 = param_1;
  return;
}



/* Address: 0x10020a2cc | FUN_10020a2cc */

undefined8 * FUN_10020a2cc(void)

{
  if (DAT_100fb6a10 != -1) {
    _swift_once(&DAT_100fb6a10,FUN_10020a2a4);
  }
  return &DAT_101057850;
}



/* Address: 0x10020a30c | FUN_10020a30c */

void FUN_10020a30c(void)

{
  _swift_initStaticObject();
  return;
}



/* Address: 0x10020a31c | FUN_10020a31c */

long FUN_10020a31c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar2 = unaff_x20[2];
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *unaff_x20;
    lVar2 = unaff_x20[5];
    lVar1 = unaff_x20[6];
    _swift_allocObject(lVar3,0x39,7);
    *(undefined8 *)(lVar3 + 0x18) = 0xd000000000000010;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0x8000000100d9de20;
    *(long *)(lVar3 + 0x28) = lVar2;
    *(long *)(lVar3 + 0x30) = lVar1;
    *(undefined1 *)(lVar3 + 0x38) = 1;
    unaff_x20[2] = lVar3;
    _swift_bridgeObjectRetain(lVar1);
    _swift_retain(lVar3);
    lVar2 = 0;
  }
  _swift_retain(lVar2);
  return lVar3;
}



/* Address: 0x10020a3b0 | FUN_10020a3b0 */

void FUN_10020a3b0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x10020a3c0 | FUN_10020a3c0 */

undefined1  [16] FUN_10020a3c0(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_10020a31c();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10020a3f4;
  return auVar2;
}



/* Address: 0x10020a3f4 | FUN_10020a3f4 */

void FUN_10020a3f4(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1[1] + 0x10);
  *(undefined8 *)(param_1[1] + 0x10) = uVar1;
  if ((param_2 & 1) != 0) {
    _swift_retain(uVar1);
    _swift_release(uVar2);
    uVar2 = uVar1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x10020a434 | FUN_10020a434 */

void FUN_10020a434(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0xd000000000000010;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000100d9de20;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined1 *)(unaff_x20 + 0x38) = param_3;
  return;
}



/* Address: 0x10020a464 | FUN_10020a464 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020a464(void)

{
  ID self;
  ID IVar1;
  long lVar2;
  undefined *self_00;
  long unaff_x20;
  undefined8 uVar3;
  
  FUN_1001f25e4(0);
  self = *(ID *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  FUN_1000f653c(self,uVar3);
  if (self == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x18);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1000f653c(lVar2,uVar3);
    if (lVar2 == 0) {
      self_00 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      objc_stub::init((ID)self_00);
      return;
    }
  }
  else {
    uVar3 = 0x402a000000000000;
    if (*(char *)(unaff_x20 + 0x38) != '\x01') {
      uVar3 = 0x4031000000000000;
    }
    IVar1 = NSImageSymbolConfiguration::configurationWithPointSize_weight_
                      ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar3,
                       *(undefined8 *)PTR__NSFontWeightRegular_100ea90b8);
    objc_stub::imageWithSymbolConfiguration_(self,IVar1);
  }
  return;
}



/* Address: 0x10020a58c | FUN_10020a58c */

void FUN_10020a58c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  lVar1 = *(long *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  _swift_retain(lVar1);
  while (lVar1 != 0) {
    _swift_release(lVar1);
    lVar2 = lVar1;
    _swift_isUniquelyReferenced_native();
    if ((int)lVar2 == 0) break;
    lVar2 = *(long *)(lVar1 + 0x10);
    _swift_retain_n(lVar2,2);
    _swift_release(lVar1);
    lVar1 = lVar2;
  }
  _swift_release(lVar1);
  return;
}



/* Address: 0x10020a610 | FUN_10020a610 */

void FUN_10020a610(void)

{
  FUN_10020a58c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10020a630 | thunk_FUN_10020a634 */

void thunk_FUN_10020a634(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6a60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35848;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35848,&DAT_100ec1118);
  DAT_100fb6a60 = pTVar1;
  return;
}



/* Address: 0x10020a634 | FUN_10020a634 */

void FUN_10020a634(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6a60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c35848;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c35848,&DAT_100ec1118);
  DAT_100fb6a60 = pTVar1;
  return;
}



/* Address: 0x10020a674 | FUN_10020a674 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10020a674(void)

{
  return ZEXT816(0x100fb6aa8);
}



/* Address: 0x10020a694 | FUN_10020a694 */

undefined1  [16] FUN_10020a694(void)

{
  return ZEXT816(0x100ec1118);
}



/* Address: 0x10020a6a4 | FUN_10020a6a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020a6a4(void)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::initWithNibName_bundle_(unaff_x20,pNVar1,0);
  return IVar2;
}



/* Address: 0x10020a6fc | FUN_10020a6fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020a6fc(void)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::initWithWindowNibName_(unaff_x20,pNVar1);
  return IVar2;
}



/* Address: 0x10020a750 | FUN_10020a750 */

void FUN_10020a750(undefined8 *param_1,undefined8 param_2)

{
  FUN_10020a6fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x10020a774 | FUN_10020a774 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020a774(undefined8 param_1,long param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  (**(code **)(param_2 + 0x10))();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithNibName_bundle_(unaff_x20,pNVar1,0);
  return IVar2;
}



/* Address: 0x10020a7ec | FUN_10020a7ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020a7ec(undefined8 param_1,long param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  (**(code **)(param_2 + 0x10))();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::initWithWindowNibName_(unaff_x20,pNVar1);
  return IVar2;
}



/* Address: 0x10020a860 | FUN_10020a860 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020a860(undefined8 param_1,long param_2)

{
  NSString *pNVar1;
  ID IVar2;
  
  (**(code **)(param_2 + 0x10))();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = NSStoryboard::storyboardWithName_bundle_((ID)&_OBJC_CLASS___NSStoryboard,pNVar1,0);
  return IVar2;
}



/* Address: 0x10020a8c4 | FUN_10020a8c4 */

char * FUN_10020a8c4(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  char *pcVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  char *local_70;
  char *pcStack_68;
  StaticString local_60;
  __uint64 local_58;
  long local_48;
  
  _Var5.unknown = param_1;
  pcVar7 = param_2;
  FUN_10020aa90(&local_60);
  if (local_48 == 0) {
    FUN_100201adc(&local_60);
  }
  else {
    iVar2 = (int)&local_70;
    _Var5.unknown = (undefined *)&local_60;
    pcVar7 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    param_4 = param_1;
    _swift_dynamicCast();
    if (iVar2 != 0) {
      return local_70;
    }
  }
  local_60.unknown = (undefined *)0x0;
  local_58 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,_Var5);
  _swift_bridgeObjectRelease(local_58);
  local_60.unknown = (undefined *)0xd000000000000012;
  local_58 = 0x8000000100d9e080;
  pcVar3 = param_1;
  _swift_getMetatypeMetadata();
  SVar8 = Swift::__typeName(SUB81(pcVar3,0));
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar7;
  Swift::String::append(SVar8,SVar12);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar8.bridgeObject = &DAT_e600000000000000;
  SVar8.str = (char *)0x206d6f726620;
  SVar13.bridgeObject = param_4;
  SVar13.str = pcVar7;
  Swift::String::append(SVar8,SVar13);
  pcVar3 = param_1;
  pcVar6 = param_2;
  (**(code **)(param_2 + 0x10))();
  SVar9.bridgeObject = pcVar6;
  SVar9.str = pcVar3;
  SVar14.bridgeObject = param_4;
  SVar14.str = pcVar7;
  Swift::String::append(SVar9,SVar14);
  _swift_bridgeObjectRelease(pcVar6);
  SVar10.bridgeObject = (void *)0x8000000100d9e0a0;
  SVar10.str = (char *)0xd000000000000011;
  SVar15.bridgeObject = param_4;
  SVar15.str = pcVar7;
  Swift::String::append(SVar10,SVar15);
  (**(code **)(param_2 + 0x18))();
  puVar4 = &DAT_100fb6b20;
  local_70 = param_1;
  pcStack_68 = param_2;
  FUN_1000037f0(&DAT_100fb6b20,&DAT_100c35940);
  SVar8 = Swift::String::_init(&local_70,puVar4);
  SVar16.bridgeObject = param_4;
  SVar16.str = pcVar7;
  Swift::String::append(SVar8,SVar16);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,local_60,local_58,0xd9e070);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10020aa90);
  (*pcVar1)();
}



/* Address: 0x10020aa90 | FUN_10020aa90 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020aa90(undefined8 *param_1,undefined8 param_2,ID param_3,long param_4)

{
  NSString *pNVar1;
  ID IVar2;
  long lVar3;
  
  lVar3 = param_4;
  (**(code **)(param_4 + 0x18))(param_3);
  if (lVar3 == 0) {
    FUN_10020a860(param_3,param_4);
    IVar2 = objc_stub::instantiateInitialController(param_3);
    if (IVar2 == 0) {
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = 0;
      param_1[2] = 0;
      return 0;
    }
    Swift::__bridgeAnyObjectToAny();
  }
  else {
    FUN_10020a860(param_3,param_4);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar3);
    IVar2 = objc_stub::instantiateControllerWithIdentifier_(param_3,pNVar1);
    Swift::__bridgeAnyObjectToAny();
  }
  _swift_unknownObjectRelease(IVar2);
  return IVar2;
}



/* Address: 0x10020aba0 | thunk_FUN_10020a8c4 */

char * thunk_FUN_10020a8c4(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  char *pcVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  char *pcStack_70;
  char *pcStack_68;
  StaticString SStack_60;
  __uint64 _Stack_58;
  long lStack_48;
  
  _Var5.unknown = param_1;
  pcVar7 = param_2;
  FUN_10020aa90(&SStack_60);
  if (lStack_48 == 0) {
    FUN_100201adc(&SStack_60);
  }
  else {
    iVar2 = (int)&pcStack_70;
    _Var5.unknown = (undefined *)&SStack_60;
    pcVar7 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    param_4 = param_1;
    _swift_dynamicCast();
    if (iVar2 != 0) {
      return pcStack_70;
    }
  }
  SStack_60.unknown = (undefined *)0x0;
  _Stack_58 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,_Var5);
  _swift_bridgeObjectRelease(_Stack_58);
  SStack_60.unknown = (undefined *)0xd000000000000012;
  _Stack_58 = 0x8000000100d9e080;
  pcVar3 = param_1;
  _swift_getMetatypeMetadata();
  SVar8 = Swift::__typeName(SUB81(pcVar3,0));
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar7;
  Swift::String::append(SVar8,SVar12);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar8.bridgeObject = &DAT_e600000000000000;
  SVar8.str = (char *)0x206d6f726620;
  SVar13.bridgeObject = param_4;
  SVar13.str = pcVar7;
  Swift::String::append(SVar8,SVar13);
  pcVar3 = param_1;
  pcVar6 = param_2;
  (**(code **)(param_2 + 0x10))();
  SVar9.bridgeObject = pcVar6;
  SVar9.str = pcVar3;
  SVar14.bridgeObject = param_4;
  SVar14.str = pcVar7;
  Swift::String::append(SVar9,SVar14);
  _swift_bridgeObjectRelease(pcVar6);
  SVar10.bridgeObject = (void *)0x8000000100d9e0a0;
  SVar10.str = (char *)0xd000000000000011;
  SVar15.bridgeObject = param_4;
  SVar15.str = pcVar7;
  Swift::String::append(SVar10,SVar15);
  (**(code **)(param_2 + 0x18))();
  puVar4 = &DAT_100fb6b20;
  pcStack_70 = param_1;
  pcStack_68 = param_2;
  FUN_1000037f0(&DAT_100fb6b20,&DAT_100c35940);
  SVar8 = Swift::String::_init(&pcStack_70,puVar4);
  SVar16.bridgeObject = param_4;
  SVar16.str = pcVar7;
  Swift::String::append(SVar8,SVar16);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,SStack_60,_Stack_58,0xd9e070);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10020aa90);
  (*pcVar1)();
}



/* Address: 0x10020aba4 | thunk_FUN_10020a8c4 */

char * thunk_FUN_10020a8c4(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  char *pcVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  char *pcStack_70;
  char *pcStack_68;
  StaticString SStack_60;
  __uint64 _Stack_58;
  long lStack_48;
  
  _Var5.unknown = param_1;
  pcVar7 = param_2;
  FUN_10020aa90(&SStack_60);
  if (lStack_48 == 0) {
    FUN_100201adc(&SStack_60);
  }
  else {
    iVar2 = (int)&pcStack_70;
    _Var5.unknown = (undefined *)&SStack_60;
    pcVar7 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    param_4 = param_1;
    _swift_dynamicCast();
    if (iVar2 != 0) {
      return pcStack_70;
    }
  }
  SStack_60.unknown = (undefined *)0x0;
  _Stack_58 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,_Var5);
  _swift_bridgeObjectRelease(_Stack_58);
  SStack_60.unknown = (undefined *)0xd000000000000012;
  _Stack_58 = 0x8000000100d9e080;
  pcVar3 = param_1;
  _swift_getMetatypeMetadata();
  SVar8 = Swift::__typeName(SUB81(pcVar3,0));
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar7;
  Swift::String::append(SVar8,SVar12);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar8.bridgeObject = &DAT_e600000000000000;
  SVar8.str = (char *)0x206d6f726620;
  SVar13.bridgeObject = param_4;
  SVar13.str = pcVar7;
  Swift::String::append(SVar8,SVar13);
  pcVar3 = param_1;
  pcVar6 = param_2;
  (**(code **)(param_2 + 0x10))();
  SVar9.bridgeObject = pcVar6;
  SVar9.str = pcVar3;
  SVar14.bridgeObject = param_4;
  SVar14.str = pcVar7;
  Swift::String::append(SVar9,SVar14);
  _swift_bridgeObjectRelease(pcVar6);
  SVar10.bridgeObject = (void *)0x8000000100d9e0a0;
  SVar10.str = (char *)0xd000000000000011;
  SVar15.bridgeObject = param_4;
  SVar15.str = pcVar7;
  Swift::String::append(SVar10,SVar15);
  (**(code **)(param_2 + 0x18))();
  puVar4 = &DAT_100fb6b20;
  pcStack_70 = param_1;
  pcStack_68 = param_2;
  FUN_1000037f0(&DAT_100fb6b20,&DAT_100c35940);
  SVar8 = Swift::String::_init(&pcStack_70,puVar4);
  SVar16.bridgeObject = param_4;
  SVar16.str = pcVar7;
  Swift::String::append(SVar8,SVar16);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,SStack_60,_Stack_58,0xd9e070);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10020aa90);
  (*pcVar1)();
}



/* Address: 0x10020aba8 | FUN_10020aba8 */

void FUN_10020aba8(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  FUN_1001f7cb8(param_3,puVar10);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1001f7d08(puVar10);
    uVar11 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1c00;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    FUN_1001f7d08(param_3);
    puVar2 = &DAT_100ec11a8;
    _swift_allocObject(&DAT_100ec11a8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fb6bc0;
    FUN_1000037f0(&DAT_100fb6bc0,&DAT_100c35980);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar9 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c35978,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ec11d0;
    _swift_allocObject(&DAT_100ec11d0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fb6bc0;
    FUN_1000037f0(&DAT_100fb6bc0,&DAT_100c35980);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar12;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_b8,puVar8,&DAT_100c35988,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_1001f7d08(param_3);
  }
  return;
}



/* Address: 0x10020ae18 | FUN_10020ae18 */

void FUN_10020ae18(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fb6228;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1001f7cb8(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1001f7d08(puVar9);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_1001f7d08(param_3);
    puVar2 = &DAT_100ec11f8;
    _swift_allocObject(&DAT_100ec11f8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c35998,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ec1220;
    _swift_allocObject(&DAT_100ec1220,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c359a0,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_1001f7d08(param_3);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x10020b074 | FUN_10020b074 */

void FUN_10020b074(void)

{
  _swift_allocObject();
  return;
}



/* Address: 0x10020b084 | FUN_10020b084 */

void FUN_10020b084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,MainActor *param_7,undefined8 param_8)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = *unaff_x20;
  puVar1 = &DAT_100fb6228;
  uStack_68 = param_5;
  FUN_1000037f0(&DAT_100fb6228,&DAT_100c36640);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            ((long)&local_70 - extraout_x8,1,1,TVar2.unknown);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  pMVar4 = param_7;
  FUN_100011128(param_7,param_8);
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar4);
  pMVar4 = pMVar3;
  FUN_1001f7290();
  puVar1 = &DAT_100ec1180;
  _swift_allocObject(&DAT_100ec1180,0x68,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(MainActor **)(puVar1 + 0x18) = pMVar4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = uStack_68;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(MainActor **)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = local_70;
  FUN_10020ae18(0,0,(long)&local_70 - extraout_x8,&DAT_100c35950,puVar1);
  _swift_release();
  return;
}



/* Address: 0x10020b1d8 | FUN_10020b1d8 */

void FUN_10020b1d8(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 200) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0xc0) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0xb8) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0xa8) = in_x6;
  *(undefined8 *)(unaff_x22 + 0xb0) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x98) = in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x3;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0xd0) = pMVar1;
  FUN_1001f7290();
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10020b260,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x10020b260 | FUN_10020b260 */

void FUN_10020b260(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar5 = *(long *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd0));
  puVar7 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar7 = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar10;
  uVar2 = 0;
  if (lVar5 != 0) {
    uVar2 = uVar1;
  }
  *(long *)(unaff_x22 + 0x80) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x10) = *puVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar6);
  FUN_100011128(lVar5,uVar1);
  FUN_1002375c0(unaff_x22 + 0x10);
  FUN_10020b5bc(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010020b320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10020b324 | FUN_10020b324 */

void FUN_10020b324(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  if (*(long *)(unaff_x20 + 0x50) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10020b370 | FUN_10020b370 */

void FUN_10020b370(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x60);
  plVar9 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100008284;
  FUN_10020b1d8(plVar9,param_1,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar4,uVar8)
  ;
  return;
}



/* Address: 0x10020b428 | FUN_10020b428 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10020b428(void)

{
  return ZEXT816(0x100fb6b68);
}



/* Address: 0x10020b448 | FUN_10020b448 */

void FUN_10020b448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10020b4b8 | FUN_10020b4b8 */

void FUN_10020b4b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10020b528 | FUN_10020b528 */

void FUN_10020b528(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10020b54c | FUN_10020b54c */

void FUN_10020b54c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100071054(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x10020b5bc | FUN_10020b5bc */

undefined8 FUN_10020b5bc(undefined8 param_1)

{
  FUN_100237a20();
  return param_1;
}



/* Address: 0x10020b5f0 | thunk_FUN_10020b528 */

void thunk_FUN_10020b528(void)

{
  FUN_10020b528();
  return;
}



/* Address: 0x10020b5f4 | thunk_FUN_10020b528 */

void thunk_FUN_10020b528(void)

{
  FUN_10020b528();
  return;
}



/* Address: 0x10020b5f8 | thunk_FUN_10020b528 */

void thunk_FUN_10020b528(void)

{
  FUN_10020b528();
  return;
}



/* Address: 0x10020b5fc | FUN_10020b5fc */

undefined4 FUN_10020b5fc(undefined8 param_1,double param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (param_2 < 200.0) {
    uVar2 = 3;
  }
  uVar1 = 1;
  if (param_2 < 240.0) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (param_2 < 280.0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Address: 0x10020b640 | FUN_10020b640 */

undefined1  [16] FUN_10020b640(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0x6c6c616d73;
  if (param_1 != 2) {
    uVar1 = 0x746361706d6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (param_1 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x656772616c;
  if (param_1 != 0) {
    uVar3 = 0x72616c75676572;
  }
  puVar4 = &DAT_e500000000000000;
  if (param_1 != 0) {
    puVar4 = &DAT_e700000000000000;
  }
  if (param_1 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Address: 0x10020b6b0 | thunk_FUN_10020b6b4 */

void thunk_FUN_10020b6b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6bc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c359a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c359a8,&DAT_100ec12b8);
  DAT_100fb6bc8 = pTVar1;
  return;
}



/* Address: 0x10020b6b4 | FUN_10020b6b4 */

void FUN_10020b6b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6bc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c359a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c359a8,&DAT_100ec12b8);
  DAT_100fb6bc8 = pTVar1;
  return;
}



/* Address: 0x10020b6f4 | FUN_10020b6f4 */

undefined1  [16] FUN_10020b6f4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x6c6c616d73;
  if (bVar5 != 2) {
    uVar1 = 0x746361706d6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x656772616c;
  if (bVar5 != 0) {
    uVar3 = 0x72616c75676572;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar4 = &DAT_e700000000000000;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x10020b764 | FUN_10020b764 */

undefined1  [16] FUN_10020b764(void)

{
  return ZEXT816(0x100ec12b8);
}



/* Address: 0x10020b774 | FUN_10020b774 */

void FUN_10020b774(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined1 auStack_a8 [24];
  undefined *local_90 [3];
  undefined *local_78;
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar5 + 0x10) == 0) {
    local_e0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_e8 = 0;
    uStack_f0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar5);
    lVar1 = param_2;
    uVar4 = param_3;
    FUN_100071370(param_2);
    if ((uVar4 & 1) == 0) {
      local_e0 = 0;
      uStack_f8 = 0;
      local_100 = 0;
      local_e8 = 0;
      uStack_f0 = 0;
    }
    else {
      FUN_100076688(*(long *)(lVar5 + 0x38) + lVar1 * 0x28,&local_100);
    }
    _swift_bridgeObjectRelease(lVar5);
    if (local_e8 != 0) {
      FUN_100005808(&local_100,&DAT_100fb5f58,&DAT_100c35ab0);
      FUN_1001f4a1c(&local_100,param_2,param_3);
    }
  }
  FUN_100005808(&local_100,&DAT_100fb5f58,&DAT_100c35ab0);
  puVar2 = &DAT_100fb6bd0;
  FUN_1000037f0(&DAT_100fb6bd0,&DAT_100c35a50);
  puVar3 = &DAT_100fb6c98;
  local_78 = puVar2;
  FUN_10020bfb8(&DAT_100fb6c98,&DAT_100fb6bd0,&DAT_100c35a50);
  puVar2 = &DAT_100ec1398;
  local_70 = puVar3;
  _swift_allocObject(&DAT_100ec1398,0x60,7);
  uVar6 = param_1[4];
  uVar8 = param_1[7];
  uVar7 = param_1[6];
  *(undefined8 *)(puVar2 + 0x38) = param_1[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  *(undefined8 *)(puVar2 + 0x40) = uVar7;
  uVar6 = param_1[8];
  *(undefined8 *)(puVar2 + 0x58) = param_1[9];
  *(undefined8 *)(puVar2 + 0x50) = uVar6;
  uVar8 = *param_1;
  uVar7 = param_1[3];
  uVar6 = param_1[2];
  *(undefined8 *)(puVar2 + 0x18) = param_1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x28) = uVar7;
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  local_90[0] = puVar2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  FUN_100011090(param_1,&local_100,&DAT_100fb6bd0,&DAT_100c35a50);
  FUN_1001f4938(local_90,param_2,param_3);
  _swift_endAccess(auStack_a8);
  return;
}



/* Address: 0x10020b948 | FUN_10020b948 */

void FUN_10020b948(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 auStack_a8 [24];
  undefined *local_90 [3];
  undefined *local_78;
  undefined *local_70;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar5 + 0x10) == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    local_f8 = 0;
    uStack_100 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar5);
    lVar1 = param_2;
    uVar4 = param_3;
    FUN_100071370(param_2);
    if ((uVar4 & 1) == 0) {
      local_f0 = 0;
      uStack_108 = 0;
      local_110 = 0;
      local_f8 = 0;
      uStack_100 = 0;
    }
    else {
      FUN_100076688(*(long *)(lVar5 + 0x38) + lVar1 * 0x28,&local_110);
    }
    _swift_bridgeObjectRelease(lVar5);
    if (local_f8 != 0) {
      FUN_100005808(&local_110,&DAT_100fb5f58,&DAT_100c35ab0);
      FUN_1001f4a1c(&local_110,param_2,param_3);
    }
  }
  FUN_100005808(&local_110,&DAT_100fb5f58,&DAT_100c35ab0);
  puVar2 = &DAT_100fb6c88;
  FUN_1000037f0(&DAT_100fb6c88,&DAT_100c35ab8);
  puVar3 = &DAT_100fb6c90;
  local_78 = puVar2;
  FUN_10020bfb8(&DAT_100fb6c90,&DAT_100fb6c88,&DAT_100c35ab8);
  puVar2 = &DAT_100ec1370;
  local_70 = puVar3;
  _swift_allocObject(&DAT_100ec1370,0x70,7);
  uVar6 = param_1[4];
  uVar8 = param_1[7];
  uVar7 = param_1[6];
  *(undefined8 *)(puVar2 + 0x38) = param_1[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined8 *)(puVar2 + 0x48) = uVar8;
  *(undefined8 *)(puVar2 + 0x40) = uVar7;
  uVar6 = param_1[8];
  uVar8 = param_1[0xb];
  uVar7 = param_1[10];
  *(undefined8 *)(puVar2 + 0x58) = param_1[9];
  *(undefined8 *)(puVar2 + 0x50) = uVar6;
  *(undefined8 *)(puVar2 + 0x68) = uVar8;
  *(undefined8 *)(puVar2 + 0x60) = uVar7;
  uVar6 = *param_1;
  uVar8 = param_1[3];
  uVar7 = param_1[2];
  *(undefined8 *)(puVar2 + 0x18) = param_1[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  *(undefined8 *)(puVar2 + 0x20) = uVar7;
  local_90[0] = puVar2;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  FUN_100011090(param_1,&local_110,&DAT_100fb6c88,&DAT_100c35ab8);
  FUN_1001f4938(local_90,param_2,param_3);
  _swift_endAccess(auStack_a8);
  return;
}



/* Address: 0x10020bb1c | FUN_10020bb1c */

void FUN_10020bb1c(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x10020bb64 | FUN_10020bb64 */

void FUN_10020bb64(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x10020bb78 | FUN_10020bb78 */

long FUN_10020bb78(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = *(long *)(unaff_x20 + 0x28);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    FUN_1001f6328();
    _swift_allocObject();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1001f350c();
    *(undefined **)(lVar1 + 0x10) = puVar2;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar1;
    _swift_retain(lVar1);
    _swift_release(uVar4);
    lVar3 = 0;
  }
  _swift_retain(lVar3);
  return lVar1;
}



/* Address: 0x10020bc00 | FUN_10020bc00 */

void FUN_10020bc00(undefined8 param_1,char param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined *puStack_48;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,1,0);
  cVar1 = *(char *)(unaff_x20 + 0x10);
  if (cVar1 != param_2) {
    puVar2 = &DAT_100ec1320;
    _swift_allocObject(&DAT_100ec1320,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    puVar3 = &DAT_100ec1348;
    _swift_allocObject(&DAT_100ec1348,0x1a,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = cVar1;
    puVar3[0x19] = param_2;
    puVar2 = puVar3;
    _CACurrentMediaTime();
    uStack_88 = 0x3ff0000000000000;
    local_90 = 0;
    local_80 = 0x3fc999999999999a;
    local_70 = FUN_1001f87b8;
    uStack_68 = 0;
    local_60 = FUN_1001f67e4;
    uStack_58 = 0;
    local_50 = FUN_10020bf04;
    local_78 = param_1;
    puStack_48 = puVar3;
    FUN_10020bb78();
    FUN_10020b774(&local_90,0x6d696e41657a6973,0xed00006e6f697461);
    _swift_release(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    _swift_retain(uVar4);
    FUN_1001f4d94();
    _swift_release(uVar4);
    FUN_100005808(&local_90,&DAT_100fb6bd0,&DAT_100c35a50);
    *(char *)(unaff_x20 + 0x10) = param_2;
  }
  return;
}



/* Address: 0x10020bd54 | FUN_10020bd54 */

void FUN_10020bd54(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}


