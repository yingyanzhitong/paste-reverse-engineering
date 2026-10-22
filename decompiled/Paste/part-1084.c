/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b853ac | FUN_100b853ac */

void FUN_100b853ac(void)

{
  FUN_100b85a98(_TtC6Sentry15SentryVideoInfo::height);
  return;
}



/* Address: 0x100b853b8 | _TtC6Sentry15SentryVideoInfo::width */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry15SentryVideoInfo::width(ID param_1,SEL param_2)

{
  FUN_100b853d8();
  return param_1;
}



/* Address: 0x100b853d8 | FUN_100b853d8 */

void FUN_100b853d8(void)

{
  FUN_100b85a98(_TtC6Sentry15SentryVideoInfo::width);
  return;
}



/* Address: 0x100b853e4 | _TtC6Sentry15SentryVideoInfo::duration */

/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry15SentryVideoInfo::duration(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100b85404();
  return in_d0;
}



/* Address: 0x100b85404 | FUN_100b85404 */

undefined8 FUN_100b85404(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::duration);
}



/* Address: 0x100b85414 | _TtC6Sentry15SentryVideoInfo::frameCount */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry15SentryVideoInfo::frameCount(ID param_1,SEL param_2)

{
  FUN_100b85434();
  return param_1;
}



/* Address: 0x100b85434 | FUN_100b85434 */

void FUN_100b85434(void)

{
  FUN_100b85a98(_TtC6Sentry15SentryVideoInfo::frameCount);
  return;
}



/* Address: 0x100b85440 | _TtC6Sentry15SentryVideoInfo::frameRate */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry15SentryVideoInfo::frameRate(ID param_1,SEL param_2)

{
  FUN_100b85460();
  return param_1;
}



/* Address: 0x100b85460 | FUN_100b85460 */

void FUN_100b85460(void)

{
  FUN_100b85a98(_TtC6Sentry15SentryVideoInfo::frameRate);
  return;
}



/* Address: 0x100b8546c | _TtC6Sentry15SentryVideoInfo::start */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryVideoInfo::start(ID param_1,SEL param_2)

{
  FUN_100b85488(param_1,param_2,PTR_typeMetadataAccessor_100ea7480,FUN_100b85510,
                PTR__bridgeToObjectiveC_100ea7408);
  return param_1;
}



/* Address: 0x100b85488 | FUN_100b85488 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

long FUN_100b85488(undefined8 param_1,undefined8 param_2,code *param_3,code *param_4,code *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  (*param_3)();
  lVar4 = *(long *)(lVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  lVar2 = lVar1;
  (*param_4)(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  (*param_5)();
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),lVar1);
  return lVar2;
}



/* Address: 0x100b85510 | FUN_100b85510 */

void FUN_100b85510(void)

{
  FUN_100b85554(&_TtC6Sentry15SentryVideoInfo::start,PTR_typeMetadataAccessor_100ea7480);
  return;
}



/* Address: 0x100b85524 | _TtC6Sentry15SentryVideoInfo::end */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryVideoInfo::end(ID param_1,SEL param_2)

{
  FUN_100b85488(param_1,param_2,PTR_typeMetadataAccessor_100ea7480,FUN_100b85540,
                PTR__bridgeToObjectiveC_100ea7408);
  return param_1;
}



/* Address: 0x100b85540 | FUN_100b85540 */

void FUN_100b85540(void)

{
  FUN_100b85554(&_TtC6Sentry15SentryVideoInfo::end,PTR_typeMetadataAccessor_100ea7480);
  return;
}



/* Address: 0x100b85554 | FUN_100b85554 */

void FUN_100b85554(undefined8 param_1,long *param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *param_2;
  lVar1 = 0;
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x000100b85594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,unaff_x20 + lVar2,lVar1);
  return;
}



/* Address: 0x100b85598 | _TtC6Sentry15SentryVideoInfo::fileSize */

/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry15SentryVideoInfo::fileSize(ID param_1,SEL param_2)

{
  FUN_100b855b8();
  return param_1;
}



/* Address: 0x100b855b8 | FUN_100b855b8 */

void FUN_100b855b8(void)

{
  FUN_100b85a98(_TtC6Sentry15SentryVideoInfo::fileSize);
  return;
}



/* Address: 0x100b855c4 | _TtC6Sentry15SentryVideoInfo::screens */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryVideoInfo::screens(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100b85604();
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b85604 | FUN_100b85604 */

void FUN_100b85604(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::screens));
  return;
}



/* Address: 0x100b85614 | FUN_100b85614 */

ID FUN_100b85614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  Date DVar2;
  URL UVar3;
  ID IVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::height) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::width) = param_4;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::duration) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::frameCount) = param_5;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::frameRate) = param_6;
  lVar1 = _TtC6Sentry15SentryVideoInfo::start;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x10);
  (*pcVar7)(unaff_x20 + lVar1,param_7,DVar2.unknown);
  (*pcVar7)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::end,param_8,DVar2.unknown);
  lVar1 = _TtC6Sentry15SentryVideoInfo::path;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar3.unknown + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar1,param_2,UVar3.unknown);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::fileSize) = param_9;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry15SentryVideoInfo::screens) = param_10;
  FUN_100b85910();
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  pcVar7 = *(code **)(lVar6 + 8);
  (*pcVar7)(param_8,DVar2.unknown);
  (*pcVar7)(param_7,DVar2.unknown);
  (**(code **)(lVar5 + 8))(param_2,UVar3.unknown);
  return IVar4;
}



/* Address: 0x100b85780 | _TtC6Sentry15SentryVideoInfo::initWithPath:height:width:duration:frameCount:frameRate:start:end:fileSize:screens: */

/* Function Stack Size: 0x60 bytes */

ID _TtC6Sentry15SentryVideoInfo::
   initWithPath_height_width_duration_frameCount_frameRate_start_end_fileSize_screens_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5,double param_6,
             long_long param_7,long_long param_8,ID param_9,ID param_10,long_long param_11,
             ID param_12)

{
  Date DVar1;
  URL UVar2;
  ulong uVar3;
  long lVar4;
  ID IVar5;
  ID aIStack_a0 [2];
  undefined1 auStack_90 [8];
  long_long local_88;
  ID local_80;
  long_long local_78;
  
  local_88 = param_7;
  local_80 = param_1;
  local_78 = param_8;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(DVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar4 = (long)(auStack_90 + -uVar3) - uVar3;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  IVar5 = lVar4 - (*(long *)(*(long *)(UVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_3);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_9);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_10);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  *(ID *)(IVar5 - 0x10) = param_12;
  FUN_100b85614(param_6,IVar5,param_4,param_5,local_88,local_78,lVar4,auStack_90 + -uVar3,param_11);
  return IVar5;
}



/* Address: 0x100b858a4 | FUN_100b858a4 */

void FUN_100b858a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryVideoInfo",0x16,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b858d0);
  (*pcVar1)();
}



/* Address: 0x100b858d0 | _TtC6Sentry15SentryVideoInfo::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryVideoInfo::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b858a4();
  FUN_100b85910();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100b858dc | FUN_100b858dc */

void FUN_100b858dc(void)

{
  FUN_100b85910();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b85910 | FUN_100b85910 */

void FUN_100b85910(undefined8 param_1)

{
  if (DAT_101045820 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccdee0);
  return;
}



/* Address: 0x100b85948 | _TtC6Sentry15SentryVideoInfo::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry15SentryVideoInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  URL UVar2;
  Date DVar3;
  code *pcVar4;
  
  lVar1 = path;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  lVar1 = start;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  pcVar4 = *(code **)(*(long *)(DVar3.unknown + -8) + 8);
  (*pcVar4)(param_1 + lVar1,DVar3.unknown);
  (*pcVar4)(param_1 + end,DVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + screens));
  return;
}



/* Address: 0x100b859d8 | FUN_100b859d8 */

void FUN_100b859d8(void)

{
  FUN_100b85910(0);
  return;
}



/* Address: 0x100b859e0 | FUN_100b859e0 */

undefined1  [16] FUN_100b859e0(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  URL UVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  long lStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_70 = *(long *)(UVar2.unknown + -8) + 0x40;
    puVar1 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_68 = puVar1;
    local_60 = puVar1;
    puStack_58 = puVar1;
    local_50 = puVar1;
    puStack_48 = puVar1;
    UVar2.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_40 = *(long *)(UVar2.unknown + -8) + 0x40;
      puStack_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      uVar3 = 0x100;
      lStack_38 = local_40;
      local_30 = puVar1;
      _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
      if (param_1 == (undefined *)0x0) {
        param_1 = (undefined *)0x0;
        uVar3 = 0;
      }
      goto LAB_100b85a7c;
    }
  }
  param_1 = UVar2.unknown;
  uVar3 = 0x3f;
LAB_100b85a7c:
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x100b85a8c | FUN_100b85a8c */

void FUN_100b85a8c(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccdee0);
  return;
}



/* Address: 0x100b85a98 | FUN_100b85a98 */

undefined8 FUN_100b85a98(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + param_1);
}



/* Address: 0x100b85aa0 | _TtC6Sentry18SentryFileContents::path */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryFileContents::path(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100b85ad8();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100b85ad8 | FUN_100b85ad8 */

undefined1  [16] FUN_100b85ad8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + _TtC6Sentry18SentryFileContents::path);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + _TtC6Sentry18SentryFileContents::path) + 8));
  return auVar1;
}



/* Address: 0x100b85b10 | _TtC6Sentry18SentryFileContents::contents */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryFileContents::contents(ID param_1,SEL param_2)

{
  NSData *pNVar1;
  
  FUN_100b85b58();
  pNVar1 = Foundation::Data::_bridgeToObjectiveC((Data)param_1);
  FUN_10003bf2c(param_1,param_2);
  return (ID)pNVar1;
}



/* Address: 0x100b85b58 | FUN_100b85b58 */

undefined1  [16] FUN_100b85b58(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC6Sentry18SentryFileContents::contents);
  auVar2 = *pauVar1;
  FUN_100b6d4e0(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100b85b94 | FUN_100b85b94 */

void FUN_100b85b94(void)

{
  FUN_100b85d6c();
  _objc_allocWithZone();
  FUN_100b85bdc();
  return;
}



/* Address: 0x100b85bdc | FUN_100b85bdc */

void FUN_100b85bdc(void)

{
  undefined8 *puVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  
  FUN_100b85d6c();
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry18SentryFileContents::path);
  *puVar1 = unaff_x23;
  puVar1[1] = unaff_x22;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry18SentryFileContents::contents);
  *puVar1 = unaff_x21;
  puVar1[1] = unaff_x19;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}



/* Address: 0x100b85c48 | _TtC6Sentry18SentryFileContents::initWithPath:contents: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry18SentryFileContents::initWithPath_contents_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  Data DVar2;
  void *pvVar3;
  String SVar4;
  
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar4.str;
  pvVar3 = SVar4.bridgeObject;
  DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_4);
  FUN_100b85bdc(pcVar1,SVar4.bridgeObject,DVar2.unknown,pvVar3);
  return (ID)pcVar1;
}



/* Address: 0x100b85cc0 | FUN_100b85cc0 */

void FUN_100b85cc0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryFileContents",0x19,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85cec);
  (*pcVar1)();
}



/* Address: 0x100b85cec | _TtC6Sentry18SentryFileContents::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryFileContents::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b85cc0();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + path + 8));
  IVar1 = *(ID *)(param_1 + contents);
  FUN_10003bf2c(IVar1,((ID *)(param_1 + contents))[1]);
  return IVar1;
}



/* Address: 0x100b85cf8 | _TtC6Sentry18SentryFileContents::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryFileContents::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + path + 8));
  FUN_10003bf2c(*(undefined8 *)(param_1 + contents),((undefined8 *)(param_1 + contents))[1]);
  return;
}



/* Address: 0x100b85d38 | FUN_100b85d38 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b85d38(void)

{
  return ZEXT816(0x100fa0ac0);
}



/* Address: 0x100b85d58 | FUN_100b85d58 */

void FUN_100b85d58(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccdf28);
  return;
}



/* Address: 0x100b85d64 | FUN_100b85d64 */

void FUN_100b85d64(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b85d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Address: 0x100b85d6c | FUN_100b85d6c */

void FUN_100b85d6c(void)

{
  return;
}



/* Address: 0x100b85d84 | FUN_100b85d84 */

void FUN_100b85d84(undefined8 param_1)

{
  FUN_100b85dac(param_1,FUN_100b6dcf4,FUN_100b865e4);
  return;
}



/* Address: 0x100b85d98 | FUN_100b85d98 */

void FUN_100b85d98(undefined8 param_1)

{
  FUN_100b85dac(param_1,FUN_100b6dd00,FUN_100b86398);
  return;
}



/* Address: 0x100b85dac | FUN_100b85dac */

undefined8 * FUN_100b85dac(long param_1,code *param_2,code *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(param_1);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar2 = puVar4;
    (*param_2)(puVar4,0);
    puVar3 = &local_88;
    (*param_3)(puVar3,puVar2 + 4,puVar4,param_1);
    FUN_100b86d54();
    FUN_10000c650(local_88,uStack_80,local_78,uStack_70,local_68);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85e7c);
      (*pcVar1)();
    }
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar2;
}



/* Address: 0x100b85e7c | FUN_100b85e7c */

undefined * FUN_100b85e7c(undefined *param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  __ContiguousArrayStorageBase *p_Var3;
  undefined *puVar4;
  undefined *puVar5;
  
  if ((param_4 & 1) == 0) {
    puVar4 = (undefined *)((param_4 >> 1) - param_3);
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85f84);
      (*pcVar1)();
    }
  }
  else {
    p_Var3 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    puVar5 = *(undefined **)(puVar4 + 0x10);
    _swift_release();
    puVar4 = (undefined *)((param_4 >> 1) - param_3);
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85f88);
      (*pcVar1)();
    }
    if (puVar5 == puVar4) {
      puVar4 = param_1;
      _swift_dynamicCastClass(param_1,p_Var3);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (puVar4 != (undefined *)0x0) {
        return puVar4;
      }
      goto LAB_100b85f5c;
    }
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    FUN_100b6dd0c(puVar4,0);
    if (param_4 >> 1 == param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b85f8c);
      (*pcVar1)();
    }
    uVar2 = 0;
    FUN_100b8633c(0);
    _swift_arrayInitWithCopy(puVar5 + 0x20,param_2 + param_3 * 8,puVar4,uVar2);
  }
LAB_100b85f5c:
  _swift_unknownObjectRelease(param_1);
  return puVar5;
}



/* Address: 0x100b85f8c | FUN_100b85f8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100b85f8c(_ArrayBuffer param_1,undefined *param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  Range<__int64> RVar2;
  _ArrayBuffer _Var3;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var5;
  Range<__int64> RVar6;
  _CocoaArrayWrapper _Var7;
  String SVar8;
  undefined *puVar4;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    _Var7.unknown = *(undefined **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var7.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var7.unknown = param_1.unknown;
    }
    _Var7.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var7);
  }
  if (_Var7.unknown != (undefined *)0x0) {
    RVar6.unknown = (undefined *)0x0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
                    /* WARNING: Load size is inaccurate */
        RVar2.unknown = param_1.unknown[(long)RVar6.unknown * 8 + 0x20];
        _Var3.unknown = param_2;
      }
      else {
        RVar2.unknown = RVar6.unknown;
        _Var3.unknown = param_1.unknown;
        FUN_100b6d718();
      }
      FUN_100b862d8();
      if (_Var3.unknown == (undefined *)0x0) {
        FUN_100b7ca38();
LAB_100b860d4:
        if ((long)_Var7.unknown < (long)RVar6.unknown) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b861f0);
          (*pcVar1)();
        }
        FUN_100b86284(_Var7.unknown,param_1.unknown);
        if ((((ulong)param_1.unknown & 0xc000000000000001) == 0) || (_Var7.unknown == RVar6.unknown)
           ) {
          FUN_100b86d54();
        }
        else {
          if ((long)_Var7.unknown <= (long)RVar6.unknown) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100b861f4);
            (*pcVar1)();
          }
          FUN_100b8633c(0);
          FUN_100b86d54();
          RVar2.unknown = RVar6.unknown;
          do {
            puVar4 = RVar2.unknown + 1;
            Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar2.unknown,param_1);
            RVar2.unknown = puVar4;
          } while (_Var7.unknown != puVar4);
        }
        if ((ulong)param_1.unknown >> 0x3e == 0) {
          _Var5.unknown = param_1.unknown & 0xffffffffffffff8;
          param_4 = (long)_Var7.unknown << 1 | 1;
          _Var3.unknown = RVar6.unknown;
          _Var7.unknown = _Var5.unknown + 0x20;
        }
        else {
          _Var3.unknown = param_1.unknown & 0xffffffffffffff8U;
          if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
            _Var3.unknown = param_1.unknown;
          }
          FUN_100b86d54(param_1.unknown & 0xffffffffffffff8U);
          _Var5 = Swift::_CocoaArrayWrapper::_get_subscript(RVar6,_Var7);
          _swift_bridgeObjectRelease_n(param_1.unknown,2);
        }
        FUN_100b85e7c(_Var5.unknown,_Var7.unknown,_Var3.unknown,param_4);
        return _Var5.unknown;
      }
      SVar8.bridgeObject = _Var3.unknown;
      SVar8.str = RVar2.unknown;
      SVar8 = Swift::String::lowercased(SVar8);
      puVar4 = SVar8.bridgeObject;
      param_2 = puVar4;
      _swift_bridgeObjectRelease();
      FUN_100008378();
      FUN_100b86d2c();
      if (((ulong)_Var3.unknown & 1) == 0) {
        FUN_100b86d2c();
        FUN_100b7ca38();
        _swift_bridgeObjectRelease(puVar4);
        if (((ulong)_Var3.unknown & 1) == 0) goto LAB_100b860d4;
      }
      else {
        FUN_100b7ca38();
        _swift_bridgeObjectRelease(puVar4);
      }
      puVar4 = RVar6.unknown + 1;
      if (SCARRY8((long)RVar6.unknown,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b861d0);
        (*pcVar1)();
      }
      RVar6.unknown = RVar6.unknown + 1;
    } while (puVar4 != _Var7.unknown);
  }
  FUN_100b86d54();
  return param_1.unknown;
}



/* Address: 0x100b861f4 | _TtC6Sentry18SentryFrameRemover::removeNonSdkFrames: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry18SentryFrameRemover::removeNonSdkFrames_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  NSArray *pNVar2;
  
  FUN_100b8633c(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  IVar1 = param_3;
  FUN_100b85f8c();
  _swift_bridgeObjectRelease(param_3);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(IVar1);
  return (ID)pNVar2;
}



/* Address: 0x100b86260 | _TtC6Sentry18SentryFrameRemover::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryFrameRemover::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b86280 | thunk_FUN_100b86284 */

void thunk_FUN_100b86284(long param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((long)param_2 < 0) {
      _Var1.unknown = param_2;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (param_1 <= lVar3) {
    if (-1 < param_1) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100b862d8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b862d4);
  (*pcVar2)();
}



/* Address: 0x100b86284 | FUN_100b86284 */

void FUN_100b86284(long param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((long)param_2 < 0) {
      _Var1.unknown = param_2;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (param_1 <= lVar3) {
    if (-1 < param_1) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100b862d8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b862d4);
  (*pcVar2)();
}



/* Address: 0x100b862d8 | FUN_100b862d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100b862d8(ID param_1)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_1,"package");
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x100b8633c | FUN_100b8633c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b8633c(void)

{
  class_t *pcVar1;
  
  if (DAT_101044930 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryFrame;
    _swift_getObjCClassMetadata();
    DAT_101044930 = pcVar1;
  }
  return;
}



/* Address: 0x100b86378 | FUN_100b86378 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b86378(void)

{
  return ZEXT816(0x100fa0b88);
}



/* Address: 0x100b86398 | FUN_100b86398 */

ulong FUN_100b86398(long *param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  puVar7 = (ulong *)(param_4 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((long)-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar6 = 0;
    param_3 = 0;
  }
  else {
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b865e4);
        (*pcVar2)();
      }
      uVar10 = 0x3f - uVar8 >> 6;
      uVar3 = 0;
      lVar4 = 0;
      do {
        if (param_3 <= uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100b865cc);
          (*pcVar2)();
        }
        if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100b865d0);
          (*pcVar2)();
        }
        lVar6 = lVar4;
        if (uVar9 == 0) {
          lVar11 = lVar4 + 1;
          if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100b865d4);
            (*pcVar2)();
          }
          if ((long)uVar10 <= lVar11) {
LAB_100b86590:
            uVar9 = 0;
            param_3 = uVar3;
            goto LAB_100b86594;
          }
          uVar9 = puVar7[lVar11];
          lVar6 = lVar11;
          if (uVar9 == 0) {
            lVar11 = lVar4 + 2;
            if ((long)uVar10 <= lVar11) goto LAB_100b86590;
            uVar9 = puVar7[lVar11];
            lVar6 = lVar11;
            if (uVar9 == 0) {
              lVar11 = lVar4 + 3;
              if ((long)uVar10 <= lVar11) goto LAB_100b86590;
              uVar9 = puVar7[lVar11];
              lVar6 = lVar11;
              if (uVar9 == 0) {
                lVar11 = lVar4 + 4;
                if ((long)uVar10 <= lVar11) goto LAB_100b86590;
                uVar9 = puVar7[lVar11];
                lVar6 = lVar11;
                if (uVar9 == 0) {
                  lVar11 = lVar4 + 5;
                  if ((long)uVar10 <= lVar11) goto LAB_100b86590;
                  uVar9 = puVar7[lVar11];
                  lVar6 = lVar11;
                  if (uVar9 == 0) {
                    lVar11 = lVar4 + 6;
                    if ((long)uVar10 <= lVar11) goto LAB_100b86590;
                    uVar9 = puVar7[lVar11];
                    lVar6 = lVar11;
                    if (uVar9 == 0) {
                      lVar11 = lVar4 + 7;
                      if ((long)uVar10 <= lVar11) goto LAB_100b86590;
                      uVar9 = puVar7[lVar11];
                      lVar6 = lVar11;
                      if (uVar9 == 0) {
                        lVar11 = lVar4 + 8;
                        if ((long)uVar10 <= lVar11) goto LAB_100b86590;
                        uVar9 = puVar7[lVar11];
                        lVar6 = lVar11;
                        if (uVar9 == 0) {
                          puVar5 = (ulong *)(param_4 + 0x80 + lVar4 * 8);
                          do {
                            lVar11 = lVar11 + 1;
                            lVar6 = uVar10 - 1;
                            if ((long)uVar10 <= lVar11) goto LAB_100b86590;
                            uVar9 = *puVar5;
                            puVar5 = puVar5 + 1;
                            lVar6 = lVar11;
                          } while (uVar9 == 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar1 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 - 1 & uVar9;
        *param_2 = *(undefined8 *)
                    (*(long *)(param_4 + 0x30) +
                    (lVar6 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
        if (uVar3 + 1 == param_3) {
          _swift_bridgeObjectRetain();
          goto LAB_100b86594;
        }
        param_2 = param_2 + 1;
        _swift_bridgeObjectRetain();
        uVar3 = uVar3 + 1;
        lVar4 = lVar6;
      } while( true );
    }
    lVar6 = 0;
  }
LAB_100b86594:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar6;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x100b865e4 | FUN_100b865e4 */

ulong FUN_100b865e4(long *param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  puVar9 = (ulong *)(param_4 + 0x38);
  uVar10 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar8 = 0;
    param_3 = 0;
  }
  else {
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b86834);
        (*pcVar4)();
      }
      uVar12 = 0x3f - uVar10 >> 6;
      uVar5 = 0;
      lVar6 = 0;
      do {
        if (param_3 <= uVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8681c);
          (*pcVar4)();
        }
        if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b86820);
          (*pcVar4)();
        }
        lVar8 = lVar6;
        if (uVar11 == 0) {
          lVar13 = lVar6 + 1;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100b86824);
            (*pcVar4)();
          }
          if ((long)uVar12 <= lVar13) {
LAB_100b867e0:
            uVar11 = 0;
            param_3 = uVar5;
            goto LAB_100b867e4;
          }
          uVar11 = puVar9[lVar13];
          lVar8 = lVar13;
          if (uVar11 == 0) {
            lVar13 = lVar6 + 2;
            if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
            uVar11 = puVar9[lVar13];
            lVar8 = lVar13;
            if (uVar11 == 0) {
              lVar13 = lVar6 + 3;
              if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
              uVar11 = puVar9[lVar13];
              lVar8 = lVar13;
              if (uVar11 == 0) {
                lVar13 = lVar6 + 4;
                if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
                uVar11 = puVar9[lVar13];
                lVar8 = lVar13;
                if (uVar11 == 0) {
                  lVar13 = lVar6 + 5;
                  if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
                  uVar11 = puVar9[lVar13];
                  lVar8 = lVar13;
                  if (uVar11 == 0) {
                    lVar13 = lVar6 + 6;
                    if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
                    uVar11 = puVar9[lVar13];
                    lVar8 = lVar13;
                    if (uVar11 == 0) {
                      lVar13 = lVar6 + 7;
                      if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
                      uVar11 = puVar9[lVar13];
                      lVar8 = lVar13;
                      if (uVar11 == 0) {
                        lVar13 = lVar6 + 8;
                        if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
                        uVar11 = puVar9[lVar13];
                        lVar8 = lVar13;
                        if (uVar11 == 0) {
                          puVar7 = (ulong *)(param_4 + 0x80 + lVar6 * 8);
                          do {
                            lVar13 = lVar13 + 1;
                            lVar8 = uVar12 - 1;
                            if ((long)uVar12 <= lVar13) goto LAB_100b867e0;
                            uVar11 = *puVar7;
                            puVar7 = puVar7 + 1;
                            lVar8 = lVar13;
                          } while (uVar11 == 0);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar3 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
        uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        puVar1 = (undefined8 *)
                 (*(long *)(param_4 + 0x30) +
                 (lVar8 << 10 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 4));
        uVar2 = puVar1[1];
        uVar11 = uVar11 - 1 & uVar11;
        *param_2 = *puVar1;
        param_2[1] = uVar2;
        if (uVar5 + 1 == param_3) {
          _swift_bridgeObjectRetain();
          goto LAB_100b867e4;
        }
        param_2 = param_2 + 2;
        _swift_bridgeObjectRetain();
        uVar5 = uVar5 + 1;
        lVar6 = lVar8;
      } while( true );
    }
    lVar8 = 0;
  }
LAB_100b867e4:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar10;
  param_1[3] = lVar8;
  param_1[4] = uVar11;
  return param_3;
}



/* Address: 0x100b86834 | FUN_100b86834 */

undefined *
FUN_100b86834(undefined8 param_1,undefined1 *param_2,undefined *param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long *plVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  Iterator IVar8;
  int iVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x9;
  long extraout_x9_00;
  ulong uVar12;
  undefined *extraout_x10;
  Iterator IVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 *local_80;
  undefined1 local_62;
  byte local_61;
  
  FUN_100b6730c(&DAT_101045890);
  FUN_100b7ef70();
  lVar15 = extraout_x9 - extraout_x8;
  puVar6 = &DAT_101045898;
  FUN_100b6730c();
  puVar7 = puVar6;
  FUN_100b7ef70();
  plVar16 = (long *)(extraout_x9_00 - extraout_x8_00);
  *plVar16 = param_4;
  plVar16[1] = 0;
  iVar4 = *(int *)(puVar7 + 0x2c);
  lVar14 = (long)iVar4;
  IVar8 = Foundation::Data::Iterator::typeMetadataAccessor();
  IVar13.unknown = (undefined *)((long)plVar16 + lVar14);
  FUN_100b80db0(IVar13.unknown,1);
  plVar2 = (long *)((long)plVar16 + (long)*(int *)(puVar6 + 0x34));
  *plVar2 = 0;
  plVar2[1] = 0;
  lVar10 = (long)*(int *)(puVar6 + 0x38);
  *(undefined1 *)((long)plVar16 + lVar10) = 0;
  *(long *)((long)plVar16 + (long)*(int *)(puVar6 + 0x30)) = param_5;
  puVar6 = (undefined *)0x0;
  if ((param_2 != (undefined1 *)0x0) && (puVar6 = param_3, param_3 != (undefined *)0x0)) {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86b9c);
      (*pcVar5)();
    }
    iVar9 = 0;
    puVar7 = (undefined *)0x0;
    local_80 = param_2;
    while( true ) {
      puVar1 = puVar7 + 1;
      if (SCARRY8((long)puVar7,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86b90);
        (*pcVar5)();
      }
      if (iVar9 == 0) break;
      if (iVar9 == 1) goto LAB_100b869c8;
      while( true ) {
        lVar11 = *plVar2;
        if (lVar11 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86ba4);
          (*pcVar5)();
        }
        uVar12 = plVar2[1];
        if (uVar12 != *(ulong *)(lVar11 + 0x10)) break;
        *(undefined1 *)((long)plVar16 + lVar10) = 1;
LAB_100b869c8:
        do {
          iVar9 = (int)plVar16 + iVar4;
          FUN_100b86d78();
          if (iVar9 == 1) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86ba0);
            (*pcVar5)();
          }
          FUN_100b86c0c();
          IVar13 = IVar8;
          Swift::IteratorProtocol::_next();
          if ((local_61 & 1) == 0) {
            iVar9 = 1;
            uVar3 = local_62;
            goto LAB_100b86b14;
          }
          if (*(long *)(param_4 + 0x10) != 0) {
            if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86b8c);
              (*pcVar5)();
            }
            FUN_100b86d5c();
                    /* WARNING: Could not recover jumptable at 0x000100b86a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)*(int *)(&DAT_100b86bb4 + extraout_x8_02 * 4) + 0x100b86a20))();
            return IVar13.unknown;
          }
          FUN_100b80db0(lVar15 - extraout_x8,1);
          FUN_100b86c50(lVar15 - extraout_x8,(long)plVar16 + lVar14);
          FUN_100b86c98((long)plVar16 + lVar14,lVar15);
          lVar11 = lVar15;
          FUN_100b86d78();
          FUN_100b86ce0(lVar15);
          if ((int)lVar11 == 1) {
            FUN_100b86d84();
            param_1 = 0;
            puVar6 = puVar7;
            goto LAB_100b86b4c;
          }
        } while (*(long *)(param_5 + 0x10) == 0);
        IVar13.unknown = (undefined *)*plVar2;
        _swift_retain(param_5);
        _swift_release(IVar13.unknown);
        *plVar2 = param_5;
        plVar2[1] = 0;
        *(undefined1 *)((long)plVar16 + lVar10) = 2;
      }
      if (*(ulong *)(lVar11 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86b94);
        (*pcVar5)();
      }
      uVar3 = *(undefined1 *)(lVar11 + uVar12 + 0x20);
      plVar2[1] = uVar12 + 1;
      iVar9 = 2;
LAB_100b86b14:
      *local_80 = uVar3;
      puVar7 = puVar1;
      local_80 = local_80 + 1;
      if (puVar1 == param_3) goto LAB_100b86b4c;
    }
    if (*(long *)(param_4 + 0x10) != 0) {
      if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b86b98);
        (*pcVar5)();
      }
      FUN_100b86d5c();
                    /* WARNING: Could not recover jumptable at 0x000100b8696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)*(int *)(&DAT_100b86ba4 + extraout_x8_01 * 4) + 0x100b86960))();
      return IVar13.unknown;
    }
    FUN_100b86d84();
    param_1 = 0;
    puVar6 = extraout_x10;
  }
LAB_100b86b4c:
  FUN_100b86bc4(plVar16,param_1);
  return puVar6;
}



/* Address: 0x100b86bc4 | FUN_100b86bc4 */

undefined8 FUN_100b86bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101045898;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b86c0c | FUN_100b86c0c */

void FUN_100b86c0c(void)

{
  Iterator IVar1;
  undefined *puVar2;
  
  if (DAT_1010458a0 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Data::Iterator::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8,
             IVar1.unknown);
  DAT_1010458a0 = puVar2;
  return;
}



/* Address: 0x100b86c50 | FUN_100b86c50 */

undefined8 FUN_100b86c50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101045890;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b86c98 | FUN_100b86c98 */

undefined8 FUN_100b86c98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101045890;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100b86ce0 | FUN_100b86ce0 */

undefined8 FUN_100b86ce0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101045890;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}


