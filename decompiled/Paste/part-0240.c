/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002e35d4 | FUN_1002e35d4 */

void FUN_1002e35d4(undefined8 param_1)

{
  if (DAT_100fbd430 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cab74c);
  return;
}



/* Address: 0x1002e360c | FUN_1002e360c */

void FUN_1002e360c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  puVar1 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  lVar2 = 0x13f;
  local_48 = puVar1;
  puStack_40 = puVar1;
  local_38 = puVar1;
  FUN_1002e3688();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar2 + -8) + 0x40;
    puStack_28 = puVar1;
    _swift_initStructMetadata(param_1,0x100,5,&local_48,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002e3688 | FUN_1002e3688 */

void FUN_1002e3688(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fbd440 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fbd440 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1002e36dc | FUN_1002e36dc */

void FUN_1002e36dc(undefined8 param_1,void *param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  void *pvVar5;
  _StringGuts _Var6;
  char *pcVar7;
  long unaff_x20;
  long unaff_x22;
  String SVar8;
  String SVar9;
  
  pvVar5 = param_2;
  pcVar7 = param_3;
  FUN_1002f45b0();
  *(void **)(unaff_x22 + 0x68) = pvVar5;
  uVar1 = (ulong)param_3 & 0xffffffffffff;
  if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x20 + 0x50);
    FUN_1000d468c(unaff_x22 + 0x10);
    puVar2 = *(undefined **)(unaff_x22 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    _Var6.unknown = puVar2;
    FUN_100004640(unaff_x22 + 0x10);
    Swift::_StringGuts::grow(0x13,_Var6);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar8.bridgeObject = pvVar5;
    SVar8.str = param_3;
    SVar9.bridgeObject = param_4;
    SVar9.str = pcVar7;
    Swift::String::append(SVar8,SVar9);
    FUN_1000d4db8(0xd000000000000011,0x8000000100da1090,puVar2,uVar3);
    _swift_bridgeObjectRelease(0x8000000100da1090);
    FUN_100004594(unaff_x22 + 0x10);
    plVar4 = (long *)0x90;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1002e3858;
    FUN_1002e2930(param_1,(ulong)param_2 & 0xcfffffffffffffff,param_3,pvVar5);
    return;
  }
  _swift_bridgeObjectRelease(pvVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002e3854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1002e3858 | FUN_1002e3858 */

void FUN_1002e3858(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  _StringGuts _Var2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  lVar5 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar5 + 0x68);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x78));
  _swift_bridgeObjectRelease(uVar3);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e38bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 8))();
    return;
  }
  FUN_1000d468c(lVar5 + 0x38);
  puVar1 = *(undefined **)(lVar5 + 0x50);
  uVar3 = *(undefined8 *)(lVar5 + 0x58);
  _Var2.unknown = puVar1;
  FUN_100004640(lVar5 + 0x38);
  Swift::_StringGuts::grow(0x20,_Var2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *(undefined8 *)(lVar5 + 0x60) = *(undefined8 *)(param_1 + 0x10);
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar6,SVar7);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar6.bridgeObject = &DAT_e500000000000000;
  SVar6.str = (char *)0x7374696820;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar6,SVar8);
  FUN_1000d4db8(0xd000000000000019,0x8000000100da10b0,puVar1,uVar3);
  _swift_bridgeObjectRelease(0x8000000100da10b0);
  FUN_100004594(lVar5 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001002e39b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1);
  return;
}



/* Address: 0x1002e39b4 | FUN_1002e39b4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1002e39b4(void)

{
  bool bVar1;
  ID IVar2;
  _StringGuts _Var3;
  ID unaff_x20;
  String SVar4;
  String SVar5;
  
  objc_stub::domain(unaff_x20);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var3.unknown = SVar4.bridgeObject;
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar4 == SVar5) {
    _swift_bridgeObjectRelease(_Var3.unknown);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar4.str,_Var3,(_StringComparisonResult)(__int8)SVar5.str);
    _swift_bridgeObjectRelease(_Var3.unknown);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    if (!bVar1) {
      return false;
    }
  }
  IVar2 = objc_stub::code(unaff_x20);
  if (IVar2 == 0xfffffffffffffc18) {
    bVar1 = true;
  }
  else {
    IVar2 = objc_stub::code(unaff_x20);
    bVar1 = IVar2 == 0xfffffffffffffc15;
  }
  return bVar1;
}



/* Address: 0x1002e3a8c | FUN_1002e3a8c */

void FUN_1002e3a8c(long param_1,char *param_2,void *param_3)

{
  char *pcVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  uint uVar5;
  Index limitedBy;
  String SVar6;
  String SVar7;
  
  if (-1 < param_1) {
    pcVar1 = param_2;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      pcVar1 = (char *)((ulong)param_3 >> 0x38 & 0xf);
    }
    uVar5 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if (((ulong)param_3 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar2 = 7;
    if (uVar5 == 0) {
      uVar2 = 0xb;
    }
    limitedBy.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar1 << 0x10);
    puVar4 = (undefined *)0xf;
    SVar7.bridgeObject = param_3;
    SVar7.str = param_2;
    Swift::String::_index((Index)0xf,param_1,limitedBy,SVar7);
    if (((uint)param_1 & 0xff) != 1) {
      limitedBy.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)puVar4;
    }
    SVar6.bridgeObject = param_2;
    SVar6.str = (char *)limitedBy.cmsgPointer.unknown;
    Swift::String::get_subscript((Range<Index>)0xf,SVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002e3b18);
  (*pcVar3)();
}



/* Address: 0x1002e3b18 | FUN_1002e3b18 */

undefined4 FUN_1002e3b18(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6556616d65686373 || param_2 != -0x12ffff9190968c8e) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6556616d65686373,(_StringGuts)0xed00006e6f697372,expecting);
    if (!bVar1) {
      if (((param_1 == 0x6574496c61746f74) && (param_2 == -0x15ffffffffff8c93)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6574496c61746f74,(_StringGuts)0xea0000000000736d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x4964657865646e69) || (param_2 != -0x13ffffff8c929a8c)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4964657865646e69,(_StringGuts)0xec000000736d6574,
                             expecting), !bVar1)) {
        if (((param_1 != 0x6954747365646c6f) || (param_2 != -0x108f929e8b8c9a93)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6954747365646c6f,(_StringGuts)0xef706d617473656d,
                               expecting), !bVar1)) {
          if ((param_1 == 0x4964696c61766e69) && (param_2 == -0x13ffffff8c929a8c)) {
            _swift_bridgeObjectRelease(0xec000000736d6574);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4964696c61766e69,(_StringGuts)0xec000000736d6574,
                             expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1002e3ce8 | FUN_1002e3ce8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1002e3ce8(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  UTType UVar3;
  UTType UVar4;
  UTType *pUVar5;
  ID IVar6;
  NSString *pNVar7;
  code *pcVar8;
  code *pcVar9;
  char *pcVar10;
  Date DVar11;
  undefined *puVar12;
  NSString *pNVar13;
  Date DVar14;
  long lVar15;
  long lVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar17;
  void *pvVar18;
  NSDate *pNVar19;
  undefined1 *puVar20;
  long lVar21;
  String SVar22;
  
  UVar3 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar21 = *(long *)(UVar3.unknown + -8);
  UVar4 = UVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  puVar17 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UniformTypeIdentifiers::UTType::get_content(UVar4);
  UVar4.unknown = &_OBJC_CLASS___CSSearchableItemAttributeSet;
  _objc_allocWithZone();
  pUVar5 = UniformTypeIdentifiers::UTType::_bridgeToObjectiveC(UVar4);
  IVar6 = objc_stub::initWithContentType_((ID)UVar4.unknown,pUVar5);
  (**(code **)(lVar21 + 8))(puVar17,UVar3.unknown);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar21 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar21 + 0x30))(uVar1,lVar21);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar21);
  objc_stub::setTitle_(IVar6,pNVar7);
  pcVar8 = *(code **)(param_1 + 0x18);
  lVar21 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,pcVar8);
  (**(code **)(lVar21 + 0x38))();
  if (pcVar8 != (code *)0x0) {
    pcVar9 = pcVar8;
    lVar15 = lVar21;
    (*pcVar8)();
    FUN_100004550(pcVar8,lVar21);
    if (lVar15 != 0) {
      _swift_bridgeObjectRetain(lVar15);
      pcVar10 = (char *)0x1388;
      FUN_1002e3a8c(5000,pcVar9,lVar15);
      _swift_bridgeObjectRelease(lVar15);
      SVar22.bridgeObject = pcVar9;
      SVar22.str = pcVar10;
      SVar22 = Swift::String::__fromSubstring(SVar22);
      pvVar18 = SVar22.bridgeObject;
      _swift_bridgeObjectRelease(lVar15);
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRetain(pvVar18);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pvVar18);
      goto LAB_1002e3eb4;
    }
  }
  pNVar7 = (NSString *)0x0;
  pvVar18 = (void *)0x0;
LAB_1002e3eb4:
  objc_stub::setTextContent_(IVar6,pNVar7);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  if ((bVar2 & 1) == 0) {
    _swift_bridgeObjectRelease(pvVar18);
  }
  else {
    if (pvVar18 == (void *)0x0) {
      pNVar7 = (NSString *)0x0;
    }
    else {
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pvVar18);
    }
    objc_stub::setContentDescription_(IVar6,pNVar7);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar21 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  puVar12 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = puVar17 + -extraout_x8_00;
  (**(code **)(lVar21 + 0x18))(puVar20,uVar1,lVar21);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar21 = *(long *)(DVar11.unknown + -8);
  DVar14.unknown = puVar20;
  (**(code **)(lVar21 + 0x30))(puVar20,1,DVar11.unknown);
  pNVar19 = (NSDate *)0x0;
  if ((int)DVar14.unknown != 1) {
    pNVar19 = Foundation::Date::_bridgeToObjectiveC(DVar14);
    (**(code **)(lVar21 + 8))(puVar20,DVar11.unknown);
  }
  objc_stub::setContentModificationDate_(IVar6,pNVar19);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar15 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar15 + 0x10))(uVar1);
  if (lVar15 == 0) {
    pNVar7 = (NSString *)0x0;
  }
  else {
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar15);
  }
  if (DAT_100fbd4a0 != -1) {
    _swift_once(&DAT_100fbd4a0,FUN_1002e18b0);
  }
  objc_stub::setValue_forCustomKey_(IVar6,pNVar7,DAT_101057938);
  _swift_unknownObjectRelease(pNVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar15 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar15 + 0x28))(uVar1,lVar15);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar15);
  if (DAT_100fbd4a8 != -1) {
    _swift_once(&DAT_100fbd4a8,FUN_1002e18d0);
  }
  objc_stub::setValue_forCustomKey_(IVar6,pNVar7,DAT_101057940);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar15 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar15 + 0x20))(uVar1);
  if (lVar15 == 0) {
    pNVar7 = (NSString *)0x0;
  }
  else {
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar15);
  }
  if (DAT_100fbd4b0 != -1) {
    _swift_once(&DAT_100fbd4b0,FUN_1002e18f4);
  }
  objc_stub::setValue_forCustomKey_(IVar6,pNVar7,DAT_101057948);
  _swift_unknownObjectRelease(pNVar7);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar16 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar16 + 0x40))(uVar1);
  lVar15 = -0x2000000000000000;
  if (lVar16 != 0) {
    lVar15 = lVar16;
  }
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar15);
  if (DAT_100fbd4b8 != -1) {
    _swift_once(&DAT_100fbd4b8,FUN_1002e191c);
  }
  objc_stub::setValue_forCustomKey_(IVar6,pNVar7,DAT_101057950);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar15 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar15 + 8))(uVar1,lVar15);
  puVar12 = &_OBJC_CLASS___CSSearchableItem;
  _objc_allocWithZone();
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar15);
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::initWithUniqueIdentifier_domainIdentifier_attributeSet_
                    ((ID)puVar12,pNVar7,pNVar13,IVar6);
  DVar14.unknown = (undefined *)0x0;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  DVar14 = Foundation::Date::get_distantFuture(DVar14);
  pNVar19 = Foundation::Date::_bridgeToObjectiveC(DVar14);
  (**(code **)(lVar21 + 8))
            ((long)puVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0),DVar11.unknown);
  objc_stub::setExpirationDate_(IVar6,pNVar19);
  objc_stub::setIsUpdate_(IVar6,(ulong)(param_2 & 1));
  return IVar6;
}



/* Address: 0x1002e4350 | FUN_1002e4350 */

void FUN_1002e4350(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e4374 | FUN_1002e4374 */

void FUN_1002e4374(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e43a0 | FUN_1002e43a0 */

void FUN_1002e43a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1002e20b8(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x1002e441c | FUN_1002e441c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002e441c(void)

{
  undefined *puVar1;
  
  if (DAT_100fbd490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___CSSearchableItem;
  _swift_getObjCClassMetadata();
  DAT_100fbd490 = puVar1;
  return;
}



/* Address: 0x1002e4460 | FUN_1002e4460 */

void FUN_1002e4460(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x1002e4470 | FUN_1002e4470 */

void FUN_1002e4470(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x1002e4488 | FUN_1002e4488 */

void FUN_1002e4488(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd4c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e79c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e79c,&DAT_100ec8998);
  DAT_100fbd4c8 = pTVar1;
  return;
}



/* Address: 0x1002e44c8 | FUN_1002e44c8 */

undefined8 FUN_1002e44c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002e35d4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002e450c | FUN_1002e450c */

undefined8 FUN_1002e450c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002e35d4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1002e4548 | FUN_1002e4548 */

void FUN_1002e4548(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e456c | FUN_1002e456c */

undefined1  [16] FUN_1002e456c(void)

{
  return ZEXT816(0x100ec8998);
}



/* Address: 0x1002e457c | thunk_FUN_1002e4580 */

void thunk_FUN_1002e4580(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd4f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e774;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e774,&DAT_100ec8998);
  DAT_100fbd4f0 = pTVar1;
  return;
}



/* Address: 0x1002e4580 | FUN_1002e4580 */

void FUN_1002e4580(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd4f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e774;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e774,&DAT_100ec8998);
  DAT_100fbd4f0 = pTVar1;
  return;
}



/* Address: 0x1002e45c0 | thunk_FUN_1002e45c4 */

void thunk_FUN_1002e45c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e70c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e70c,&DAT_100ec8998);
  DAT_100fbd4f8 = pTVar1;
  return;
}



/* Address: 0x1002e45c4 | FUN_1002e45c4 */

void FUN_1002e45c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e70c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e70c,&DAT_100ec8998);
  DAT_100fbd4f8 = pTVar1;
  return;
}



/* Address: 0x1002e4604 | thunk_FUN_1002e4608 */

void thunk_FUN_1002e4608(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e6e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e6e4,&DAT_100ec8998);
  DAT_100fbd500 = pTVar1;
  return;
}



/* Address: 0x1002e4608 | FUN_1002e4608 */

void FUN_1002e4608(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbd500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3e6e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3e6e4,&DAT_100ec8998);
  DAT_100fbd500 = pTVar1;
  return;
}



/* Address: 0x1002e4648 | thunk_FUN_1002e4470 */

void thunk_FUN_1002e4470(void)

{
  FUN_1002e4470();
  return;
}



/* Address: 0x1002e464c | thunk_FUN_1002e4470 */

void thunk_FUN_1002e4470(void)

{
  FUN_1002e4470();
  return;
}



/* Address: 0x1002e4650 | thunk_FUN_1002e2348 */

void thunk_FUN_1002e2348(void)

{
  FUN_1002e2348();
  return;
}



/* Address: 0x1002e4654 | thunk_FUN_1002e22fc */

void thunk_FUN_1002e22fc(void)

{
  FUN_1002e22fc();
  return;
}



/* Address: 0x1002e4658 | thunk_FUN_1002e4460 */

void thunk_FUN_1002e4460(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x1002e465c | thunk_FUN_1002e4460 */

void thunk_FUN_1002e4460(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x1002e4660 | FUN_1002e4660 */

void FUN_1002e4660(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_1002e467c,0,0);
  return;
}



/* Address: 0x1002e467c | FUN_1002e467c */

void FUN_1002e467c(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10) + _TtC11PasteSearch22SpotlightIndexDelegate::indexer;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x28) = lVar1;
  if (lVar1 != 0) {
    plVar2 = (long *)0x170;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x30) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1002e46fc;
    FUN_1002f2268();
    return;
  }
  (**(code **)(unaff_x22 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0001002e46f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e46fc | FUN_1002e46fc */

void FUN_1002e46fc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1002e474c,0,0);
  return;
}



/* Address: 0x1002e474c | FUN_1002e474c */

void FUN_1002e474c(void)

{
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x18))();
                    /* WARNING: Could not recover jumptable at 0x0001002e4778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e477c | _TtC11PasteSearch22SpotlightIndexDelegate::searchableIndex:reindexAllSearchableItemsWithAcknowledgementHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC11PasteSearch22SpotlightIndexDelegate::
     searchableIndex_reindexAllSearchableItemsWithAcknowledgementHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  void *pvVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10,param_3,param_4,param_5);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar2 = __Block_copy((void *)param_4);
  puVar1 = &DAT_100ec8ad8;
  _swift_allocObject(&DAT_100ec8ad8,0x18,7);
  *(void **)(puVar1 + 0x10) = pvVar2;
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar3.unknown);
  puVar4 = &DAT_100ec8b00;
  _swift_allocObject(&DAT_100ec8b00,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(ID *)(puVar4 + 0x20) = param_1;
  *(code **)(puVar4 + 0x28) = thunk_FUN_100166ac0;
  *(undefined **)(puVar4 + 0x30) = puVar1;
  FUN_1002d62fc(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c3e828,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1002e4884 | FUN_1002e4884 */

void FUN_1002e4884(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x28) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  _swift_task_switch(FUN_1002e48a0,0,0);
  return;
}



/* Address: 0x1002e48a0 | FUN_1002e48a0 */

void FUN_1002e48a0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10) + _TtC11PasteSearch22SpotlightIndexDelegate::indexer;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  if (lVar1 != 0) {
    plVar2 = (long *)0x240;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x38) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1002e4928;
    FUN_1002f2690(*(undefined8 *)(unaff_x22 + 0x18));
    return;
  }
  (**(code **)(unaff_x22 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001002e4924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e4928 | FUN_1002e4928 */

void FUN_1002e4928(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x30);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1002e4978,0,0);
  return;
}



/* Address: 0x1002e4978 | FUN_1002e4978 */

void FUN_1002e4978(void)

{
  long unaff_x22;
  
  (**(code **)(unaff_x22 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001002e49a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e49a8 | _TtC11PasteSearch22SpotlightIndexDelegate::searchableIndex:reindexSearchableItemsWithIdentifiers:acknowledgementHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

void _TtC11PasteSearch22SpotlightIndexDelegate::
     searchableIndex_reindexSearchableItemsWithIdentifiers_acknowledgementHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  void *pvVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar2 = __Block_copy((void *)param_5);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar1 = &DAT_100ec8a88;
  _swift_allocObject(&DAT_100ec8a88,0x18,7);
  *(void **)(puVar1 + 0x10) = pvVar2;
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar3.unknown);
  puVar4 = &DAT_100ec8ab0;
  _swift_allocObject(&DAT_100ec8ab0,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(ID *)(puVar4 + 0x20) = param_1;
  *(ID *)(puVar4 + 0x28) = param_4;
  *(code **)(puVar4 + 0x30) = FUN_100166ac0;
  *(undefined **)(puVar4 + 0x38) = puVar1;
  FUN_1002d62fc(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c3e818,puVar4);
  _swift_release();
  return;
}



/* Address: 0x1002e4ad0 | _TtC11PasteSearch22SpotlightIndexDelegate::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC11PasteSearch22SpotlightIndexDelegate::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteSearch.SpotlightIndexDelegate",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e4afc);
  (*pcVar1)();
}



/* Address: 0x1002e4afc | _TtC11PasteSearch22SpotlightIndexDelegate::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC11PasteSearch22SpotlightIndexDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_weakDestroy(param_1 + indexer);
  return;
}



/* Address: 0x1002e4b0c | FUN_1002e4b0c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002e4b0c(void)

{
  return ZEXT816(0x100f97820);
}



/* Address: 0x1002e4b2c | FUN_1002e4b2c */

void FUN_1002e4b2c(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e4b50 | FUN_1002e4b50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e4b50(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e4b8c | FUN_1002e4b8c */

void FUN_1002e4b8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100008284;
  FUN_1002e4884(plVar7,param_1,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x1002e4c18 | FUN_1002e4c18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e4c18(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002e4c4c | FUN_1002e4c4c */

void FUN_1002e4c4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1002e4660(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1002e4ccc | thunk_FUN_1002e4b2c */

void thunk_FUN_1002e4b2c(void)

{
  FUN_1002e4b2c();
  return;
}



/* Address: 0x1002e4cd0 | thunk_FUN_100166ac0 */

void thunk_FUN_100166ac0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100166ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Address: 0x1002e4cd4 | FUN_1002e4cd4 */

void FUN_1002e4cd4(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar2 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fbd5a0,&DAT_100c3de10);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fbd5a0,&DAT_100c3de10);
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
    FUN_100005808(param_3,&DAT_100fbd5a0,&DAT_100c3de10);
    puVar2 = &DAT_100fbcf50;
    FUN_1000037f0(&DAT_100fbcf50,&DAT_100c3ebe0);
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
    _swift_task_create(uVar10,puVar8,puVar2,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    _swift_retain(param_5);
    puVar2 = &DAT_100fbcf50;
    FUN_1000037f0(&DAT_100fbcf50,&DAT_100c3ebe0);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar11 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,puVar2,param_4,param_5);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fbd5a0,&DAT_100c3de10);
  }
  return;
}



/* Address: 0x1002e4f44 | FUN_1002e4f44 */

void FUN_1002e4f44(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__get_result_100eaed28 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  FUN_1000037f0(&DAT_100fbcf50,&DAT_100c3ebe0);
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002e4fe0;
  Swift::Task::_get_result((undefined *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1002e4fe0 | FUN_1002e4fe0 */

void FUN_1002e4fe0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  _swift_task_switch(FUN_1002e5028,0,0);
  return;
}



/* Address: 0x1002e5028 | FUN_1002e5028 */

void FUN_1002e5028(void)

{
  long unaff_x22;
  
  FUN_1002ec258(*(undefined8 *)(unaff_x22 + 0x10),*(undefined1 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001002e5058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e505c | FUN_1002e505c */

void FUN_1002e505c(undefined8 param_1)

{
  CancellationError CVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x180) = param_1;
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 400) = CVar1.unknown;
  lVar4 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x198) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar3;
  _swift_task_switch(FUN_1002e50c8);
  return;
}



/* Address: 0x1002e50c8 | FUN_1002e50c8 */

void FUN_1002e50c8(void)

{
  String *pSVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined8 uVar7;
  void *pvVar8;
  byte bVar9;
  String SVar10;
  code *pcVar11;
  bool bVar12;
  undefined *puVar13;
  long *plVar14;
  Hasher HVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  long lVar23;
  long unaff_x22;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auStack_a0 [72];
  
  lVar19 = *(long *)(*(long *)(unaff_x22 + 0x180) + 0x10);
  *(long *)(unaff_x22 + 0x1b0) = lVar19;
  if (lVar19 == 0) {
LAB_1002e523c:
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
    _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001002e5270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar19 = 0;
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(*(long *)(unaff_x22 + 0x188) + 0x198);
LAB_1002e5110:
  *(long *)(unaff_x22 + 0x1c0) = lVar19;
  lVar19 = *(long *)(unaff_x22 + 0x180) + lVar19 * 0x10;
  lVar23 = *(long *)(lVar19 + 0x20);
  *(long *)(unaff_x22 + 0x1c8) = lVar23;
  bVar9 = *(byte *)(lVar19 + 0x28);
  *(byte *)(unaff_x22 + 0x208) = bVar9;
  if (bVar9 < 2) {
    uVar26 = *(ulong *)(lVar23 + 0x10);
    _swift_bridgeObjectRetain_n(lVar23,2);
    uVar27 = 0;
    puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      *(undefined **)(unaff_x22 + 0x1d8) = puVar22;
      puVar25 = (ulong *)(lVar23 + 0x28 + uVar27 * 0x10);
      do {
        if (uVar26 == uVar27) {
          _swift_bridgeObjectRelease(lVar23);
          _swift_bridgeObjectRelease(lVar23);
          bVar12 = bVar9 == 1;
          uVar21 = 0x64657461647075;
          if (!bVar12) {
            uVar21 = 0x6465747265736e69;
          }
          plVar14 = (long *)0x180;
          puVar3 = &DAT_e700000000000000;
          if (!bVar12) {
            puVar3 = &DAT_e800000000000000;
          }
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1e0) = plVar14;
          *plVar14 = unaff_x22;
          plVar14[1] = (long)FUN_1002e58f4;
          FUN_1002e830c(puVar22,bVar12,uVar21,puVar3);
          return;
        }
        if (*(ulong *)(lVar23 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58dc);
          (*pcVar11)();
        }
        uVar16 = puVar25[-1];
        uVar20 = *puVar25;
        puVar25 = puVar25 + 2;
        uVar27 = uVar27 + 1;
        uVar24 = uVar16 & 0xffffffffffff;
        if ((uVar20 & 0x2000000000000000) != 0) {
          uVar24 = uVar20 >> 0x38 & 0xf;
        }
      } while (uVar24 == 0);
      _swift_bridgeObjectRetain(uVar20);
      puVar13 = puVar22;
      _swift_isUniquelyReferenced_nonNull_native();
      *(undefined **)(unaff_x22 + 0x178) = puVar22;
      if (((ulong)puVar13 & 1) == 0) {
        FUN_1002dd1f8(unaff_x22,0,*(long *)(puVar22 + 0x10) + 1,1);
        puVar22 = *(undefined **)(unaff_x22 + 0x178);
      }
      uVar24 = *(ulong *)(puVar22 + 0x10);
      if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar24) {
        FUN_1002dd1f8(unaff_x22,1 < *(ulong *)(puVar22 + 0x18),uVar24 + 1,1);
        puVar22 = *(undefined **)(unaff_x22 + 0x178);
      }
      *(ulong *)(puVar22 + 0x10) = uVar24 + 1;
      *(ulong *)(puVar22 + uVar24 * 0x10 + 0x20) = uVar16;
      *(ulong *)(puVar22 + uVar24 * 0x10 + 0x28) = uVar20;
    } while( true );
  }
  uVar26 = *(ulong *)(lVar23 + 0x10);
  _swift_bridgeObjectRetain(lVar23);
  uVar27 = 0;
  puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    *(undefined **)(unaff_x22 + 0x1d0) = puVar22;
    puVar25 = (ulong *)(lVar23 + 0x28 + uVar27 * 0x10);
    do {
      if (uVar26 == uVar27) {
        if (*(long *)(puVar22 + 0x10) == 0) {
          _swift_release(puVar22);
          _swift_bridgeObjectRelease(lVar23);
          lVar19 = *(long *)(unaff_x22 + 0x1c0) + 1;
          if (lVar19 != *(long *)(unaff_x22 + 0x1b0)) goto LAB_1002e5110;
          goto LAB_1002e523c;
        }
        lVar19 = *(long *)(unaff_x22 + 0x188);
        puVar13 = puVar22;
        _swift_retain();
        FUN_1002ebe84();
        _swift_release(puVar22);
        _swift_beginAccess(lVar19 + 0x100,unaff_x22 + 0xf0,0x21,0);
        uVar27 = *(ulong *)(lVar19 + 0x100);
        puVar25 = (ulong *)(uVar27 + 0x10);
        uVar26 = *puVar25;
        if (uVar26 == 0) {
          uVar24 = 0;
          uVar26 = 0;
          goto LAB_1002e557c;
        }
        uVar24 = 0;
        goto LAB_1002e548c;
      }
      if (*(ulong *)(lVar23 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e556c);
        (*pcVar11)();
      }
      uVar16 = puVar25[-1];
      uVar20 = *puVar25;
      puVar25 = puVar25 + 2;
      uVar27 = uVar27 + 1;
      uVar24 = uVar16 & 0xffffffffffff;
      if ((uVar20 & 0x2000000000000000) != 0) {
        uVar24 = uVar20 >> 0x38 & 0xf;
      }
    } while (uVar24 == 0);
    _swift_bridgeObjectRetain(uVar20);
    puVar13 = puVar22;
    _swift_isUniquelyReferenced_nonNull_native();
    *(undefined **)(unaff_x22 + 0x158) = puVar22;
    if (((ulong)puVar13 & 1) == 0) {
      FUN_1002dd1f8(unaff_x22,0,*(long *)(puVar22 + 0x10) + 1,1);
      puVar22 = *(undefined **)(unaff_x22 + 0x158);
    }
    uVar24 = *(ulong *)(puVar22 + 0x10);
    if (*(ulong *)(puVar22 + 0x18) >> 1 <= uVar24) {
      FUN_1002dd1f8(unaff_x22,1 < *(ulong *)(puVar22 + 0x18),uVar24 + 1,1);
      puVar22 = *(undefined **)(unaff_x22 + 0x158);
    }
    *(ulong *)(puVar22 + 0x10) = uVar24 + 1;
    *(ulong *)(puVar22 + uVar24 * 0x10 + 0x20) = uVar16;
    *(ulong *)(puVar22 + uVar24 * 0x10 + 0x28) = uVar20;
  } while( true );
  while (uVar24 = uVar24 + 1, uVar24 != uVar26) {
LAB_1002e548c:
    if (*(long *)(puVar13 + 0x10) != 0) {
      pSVar1 = (String *)(uVar27 + 0x20 + uVar24 * 0x10);
      pcVar4 = pSVar1->str;
      puVar17 = pSVar1->bridgeObject;
      SVar10 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar13 + 0x28));
      _swift_bridgeObjectRetain(puVar17);
      HVar15.unknown = auStack_a0;
      Swift::String::hash(HVar15,SVar10);
      uVar16 = Swift::Hasher::_finalize(HVar15);
      uVar20 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar16 = uVar16 & (uVar20 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar16 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var5.unknown == pcVar4 && _Var6.unknown == puVar17) ||
             (bVar12 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar12)) {
            _swift_bridgeObjectRelease(puVar17);
            uVar26 = uVar24 + 1;
            uVar16 = *puVar25;
            if (uVar26 != uVar16) goto LAB_1002e5714;
            goto LAB_1002e555c;
          }
          uVar16 = uVar16 + 1 & ~uVar20;
        } while ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar17);
    }
  }
  uVar24 = *puVar25;
  uVar26 = uVar24;
  goto LAB_1002e557c;
LAB_1002e5714:
  do {
    if (uVar16 <= uVar26) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58e0);
      (*pcVar11)();
    }
    pSVar1 = (String *)(uVar27 + 0x20 + uVar26 * 0x10);
    if (*(long *)(puVar13 + 0x10) != 0) {
      pcVar4 = pSVar1->str;
      puVar17 = pSVar1->bridgeObject;
      SVar10 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar13 + 0x28));
      _swift_bridgeObjectRetain(puVar17);
      HVar15.unknown = auStack_a0;
      Swift::String::hash(HVar15,SVar10);
      uVar16 = Swift::Hasher::_finalize(HVar15);
      uVar20 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar16 = uVar16 & (uVar20 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar16 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var5.unknown == pcVar4 && _Var6.unknown == puVar17) ||
             (bVar12 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar12)) {
            _swift_bridgeObjectRelease(puVar17);
            goto LAB_1002e5894;
          }
          uVar16 = uVar16 + 1 & ~uVar20;
        } while ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar17);
    }
    if (uVar24 != uVar26) {
      if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58e8);
        (*pcVar11)();
      }
      if (*puVar25 <= uVar24) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58ec);
        (*pcVar11)();
      }
      if (*puVar25 <= uVar26) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58f0);
        (*pcVar11)();
      }
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar24 * 0x10);
      uVar21 = *puVar2;
      uVar7 = puVar2[1];
      lVar19 = *(long *)(unaff_x22 + 0x188);
      pcVar4 = pSVar1->str;
      pvVar8 = pSVar1->bridgeObject;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar8);
      uVar16 = uVar27;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar19 + 0x100) = uVar27;
      if ((uVar16 & 1) == 0) {
        lVar19 = *(long *)(unaff_x22 + 0x188);
        FUN_1002dd700();
        *(ulong *)(lVar19 + 0x100) = uVar27;
      }
      lVar19 = *(long *)(unaff_x22 + 0x188);
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar24 * 0x10);
      uVar18 = puVar2[1];
      *puVar2 = pcVar4;
      puVar2[1] = pvVar8;
      _swift_bridgeObjectRelease(uVar18);
      *(ulong *)(lVar19 + 0x100) = uVar27;
      if (*(ulong *)(uVar27 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58f4);
        (*pcVar11)();
      }
      lVar19 = *(long *)(unaff_x22 + 0x188);
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar26 * 0x10);
      uVar18 = puVar2[1];
      *puVar2 = uVar21;
      puVar2[1] = uVar7;
      _swift_bridgeObjectRelease(uVar18);
      *(ulong *)(lVar19 + 0x100) = uVar27;
    }
    bVar12 = SCARRY8(uVar24,1);
    uVar24 = uVar24 + 1;
    if (bVar12) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e58e4);
      (*pcVar11)();
    }
LAB_1002e5894:
    uVar26 = uVar26 + 1;
    puVar25 = (ulong *)(uVar27 + 0x10);
    uVar16 = *puVar25;
  } while (uVar26 != uVar16);
LAB_1002e555c:
  if ((long)uVar26 < (long)uVar24) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e5568);
    (*pcVar11)();
  }
LAB_1002e557c:
  lVar19 = *(long *)(unaff_x22 + 0x188);
  FUN_1002ee68c(uVar24,uVar26);
  _swift_endAccess(unaff_x22 + 0xf0);
  _swift_beginAccess(lVar19 + 0x108,unaff_x22 + 0x108,0x21,0);
  FUN_1002eb394(puVar13);
  _swift_endAccess(unaff_x22 + 0x108);
  _swift_bridgeObjectRelease(puVar13);
  puVar13 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 2;
  *(undefined8 *)(puVar13 + 0x10) = 1;
  *(undefined8 *)(puVar13 + 0x20) = 0x6e756f436d657469;
  *(undefined8 *)(puVar13 + 0x28) = 0xe900000000000074;
  uVar21 = *(undefined8 *)(puVar22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar21;
  *(undefined **)(puVar13 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar13 + 0x30) = uVar21;
  puVar17 = puVar13;
  FUN_1002e0e24();
  *(undefined **)(unaff_x22 + 0x1f0) = puVar17;
  _swift_setDeallocating(puVar13);
  FUN_100005808(puVar13 + 0x20,&DAT_100fbd188,&DAT_100c3e4c0);
  *(undefined **)(unaff_x22 + 0x20) = puVar22;
  *(long *)(unaff_x22 + 0x28) = lVar19;
  *(undefined **)(unaff_x22 + 0x40) = &DAT_100c3e8d8;
  *(long *)(unaff_x22 + 0x48) = unaff_x22 + 0x10;
  plVar14 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f8) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_1002e61cc;
  FUN_1002e7914(FUN_1002e7914,0xd000000000000010,0x8000000100da11d0,puVar17,&DAT_100c3e8e0,
                unaff_x22 + 0x30);
  return;
}



/* Address: 0x1002e58f4 | FUN_1002e58f4 */

void FUN_1002e58f4(void)

{
  undefined1 *puVar1;
  char cVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1e0));
  cVar2 = *(char *)(lVar3 + 0x208);
  if (unaff_x20 != 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x1d8));
    puVar1 = &DAT_e700000000000000;
    if (cVar2 != '\x01') {
      puVar1 = &DAT_e800000000000000;
    }
    _swift_bridgeObjectRelease(puVar1);
    uVar4 = *(undefined8 *)(lVar3 + 0x1a0);
    _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a8));
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001002e5968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 8))();
    return;
  }
  uVar4 = *(undefined8 *)(lVar3 + 0x188);
  _swift_release(*(undefined8 *)(lVar3 + 0x1d8));
  puVar1 = &DAT_e700000000000000;
  if (cVar2 != '\x01') {
    puVar1 = &DAT_e800000000000000;
  }
  _swift_bridgeObjectRelease(puVar1);
  _swift_task_switch(FUN_1002e59ac,uVar4,0);
  return;
}



/* Address: 0x1002e59ac | FUN_1002e59ac */

void FUN_1002e59ac(void)

{
  String *pSVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  undefined8 uVar7;
  void *pvVar8;
  byte bVar9;
  String SVar10;
  code *pcVar11;
  bool bVar12;
  undefined *puVar13;
  long *plVar14;
  Hasher HVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long unaff_x22;
  ulong uVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auStack_a0 [72];
  
  lVar22 = *(long *)(unaff_x22 + 0x1c0) + 1;
  if (lVar22 == *(long *)(unaff_x22 + 0x1b0)) {
LAB_1002e5b14:
    uVar20 = *(undefined8 *)(unaff_x22 + 0x1a0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
    _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001002e5b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1002e59e8:
  *(long *)(unaff_x22 + 0x1c0) = lVar22;
  lVar22 = *(long *)(unaff_x22 + 0x180) + lVar22 * 0x10;
  lVar23 = *(long *)(lVar22 + 0x20);
  *(long *)(unaff_x22 + 0x1c8) = lVar23;
  bVar9 = *(byte *)(lVar22 + 0x28);
  *(byte *)(unaff_x22 + 0x208) = bVar9;
  if (bVar9 < 2) {
    uVar26 = *(ulong *)(lVar23 + 0x10);
    _swift_bridgeObjectRetain_n(lVar23,2);
    uVar27 = 0;
    puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      *(undefined **)(unaff_x22 + 0x1d8) = puVar21;
      puVar25 = (ulong *)(lVar23 + 0x28 + uVar27 * 0x10);
      do {
        if (uVar26 == uVar27) {
          _swift_bridgeObjectRelease(lVar23);
          _swift_bridgeObjectRelease(lVar23);
          bVar12 = bVar9 == 1;
          uVar20 = 0x64657461647075;
          if (!bVar12) {
            uVar20 = 0x6465747265736e69;
          }
          plVar14 = (long *)0x180;
          puVar3 = &DAT_e700000000000000;
          if (!bVar12) {
            puVar3 = &DAT_e800000000000000;
          }
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1e0) = plVar14;
          *plVar14 = unaff_x22;
          plVar14[1] = (long)FUN_1002e58f4;
          FUN_1002e830c(puVar21,bVar12,uVar20,puVar3);
          return;
        }
        if (*(ulong *)(lVar23 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61b4);
          (*pcVar11)();
        }
        uVar16 = puVar25[-1];
        uVar19 = *puVar25;
        puVar25 = puVar25 + 2;
        uVar27 = uVar27 + 1;
        uVar24 = uVar16 & 0xffffffffffff;
        if ((uVar19 & 0x2000000000000000) != 0) {
          uVar24 = uVar19 >> 0x38 & 0xf;
        }
      } while (uVar24 == 0);
      _swift_bridgeObjectRetain(uVar19);
      puVar13 = puVar21;
      _swift_isUniquelyReferenced_nonNull_native();
      *(undefined **)(unaff_x22 + 0x178) = puVar21;
      if (((ulong)puVar13 & 1) == 0) {
        FUN_1002dd1f8(unaff_x22,0,*(long *)(puVar21 + 0x10) + 1,1);
        puVar21 = *(undefined **)(unaff_x22 + 0x178);
      }
      uVar24 = *(ulong *)(puVar21 + 0x10);
      if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar24) {
        FUN_1002dd1f8(unaff_x22,1 < *(ulong *)(puVar21 + 0x18),uVar24 + 1,1);
        puVar21 = *(undefined **)(unaff_x22 + 0x178);
      }
      *(ulong *)(puVar21 + 0x10) = uVar24 + 1;
      *(ulong *)(puVar21 + uVar24 * 0x10 + 0x20) = uVar16;
      *(ulong *)(puVar21 + uVar24 * 0x10 + 0x28) = uVar19;
    } while( true );
  }
  uVar26 = *(ulong *)(lVar23 + 0x10);
  _swift_bridgeObjectRetain(lVar23);
  uVar27 = 0;
  puVar21 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    *(undefined **)(unaff_x22 + 0x1d0) = puVar21;
    puVar25 = (ulong *)(lVar23 + 0x28 + uVar27 * 0x10);
    do {
      if (uVar26 == uVar27) {
        if (*(long *)(puVar21 + 0x10) == 0) {
          _swift_release(puVar21);
          _swift_bridgeObjectRelease(lVar23);
          lVar22 = *(long *)(unaff_x22 + 0x1c0) + 1;
          if (lVar22 != *(long *)(unaff_x22 + 0x1b0)) goto LAB_1002e59e8;
          goto LAB_1002e5b14;
        }
        lVar22 = *(long *)(unaff_x22 + 0x188);
        puVar13 = puVar21;
        _swift_retain();
        FUN_1002ebe84();
        _swift_release(puVar21);
        _swift_beginAccess(lVar22 + 0x100,unaff_x22 + 0xf0,0x21,0);
        uVar27 = *(ulong *)(lVar22 + 0x100);
        puVar25 = (ulong *)(uVar27 + 0x10);
        uVar26 = *puVar25;
        if (uVar26 == 0) {
          uVar24 = 0;
          uVar26 = 0;
          goto LAB_1002e5e54;
        }
        uVar24 = 0;
        goto LAB_1002e5d64;
      }
      if (*(ulong *)(lVar23 + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e5e44);
        (*pcVar11)();
      }
      uVar16 = puVar25[-1];
      uVar19 = *puVar25;
      puVar25 = puVar25 + 2;
      uVar27 = uVar27 + 1;
      uVar24 = uVar16 & 0xffffffffffff;
      if ((uVar19 & 0x2000000000000000) != 0) {
        uVar24 = uVar19 >> 0x38 & 0xf;
      }
    } while (uVar24 == 0);
    _swift_bridgeObjectRetain(uVar19);
    puVar13 = puVar21;
    _swift_isUniquelyReferenced_nonNull_native();
    *(undefined **)(unaff_x22 + 0x158) = puVar21;
    if (((ulong)puVar13 & 1) == 0) {
      FUN_1002dd1f8(unaff_x22,0,*(long *)(puVar21 + 0x10) + 1,1);
      puVar21 = *(undefined **)(unaff_x22 + 0x158);
    }
    uVar24 = *(ulong *)(puVar21 + 0x10);
    if (*(ulong *)(puVar21 + 0x18) >> 1 <= uVar24) {
      FUN_1002dd1f8(unaff_x22,1 < *(ulong *)(puVar21 + 0x18),uVar24 + 1,1);
      puVar21 = *(undefined **)(unaff_x22 + 0x158);
    }
    *(ulong *)(puVar21 + 0x10) = uVar24 + 1;
    *(ulong *)(puVar21 + uVar24 * 0x10 + 0x20) = uVar16;
    *(ulong *)(puVar21 + uVar24 * 0x10 + 0x28) = uVar19;
  } while( true );
  while (uVar24 = uVar24 + 1, uVar24 != uVar26) {
LAB_1002e5d64:
    if (*(long *)(puVar13 + 0x10) != 0) {
      pSVar1 = (String *)(uVar27 + 0x20 + uVar24 * 0x10);
      pcVar4 = pSVar1->str;
      puVar17 = pSVar1->bridgeObject;
      SVar10 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar13 + 0x28));
      _swift_bridgeObjectRetain(puVar17);
      HVar15.unknown = auStack_a0;
      Swift::String::hash(HVar15,SVar10);
      uVar16 = Swift::Hasher::_finalize(HVar15);
      uVar19 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar16 = uVar16 & (uVar19 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar16 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var5.unknown == pcVar4 && _Var6.unknown == puVar17) ||
             (bVar12 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar12)) {
            _swift_bridgeObjectRelease(puVar17);
            uVar26 = uVar24 + 1;
            uVar16 = *puVar25;
            if (uVar26 != uVar16) goto LAB_1002e5fec;
            goto LAB_1002e5e34;
          }
          uVar16 = uVar16 + 1 & ~uVar19;
        } while ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar17);
    }
  }
  uVar24 = *puVar25;
  uVar26 = uVar24;
  goto LAB_1002e5e54;
LAB_1002e5fec:
  do {
    if (uVar16 <= uVar26) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61b8);
      (*pcVar11)();
    }
    pSVar1 = (String *)(uVar27 + 0x20 + uVar26 * 0x10);
    if (*(long *)(puVar13 + 0x10) != 0) {
      pcVar4 = pSVar1->str;
      puVar17 = pSVar1->bridgeObject;
      SVar10 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar13 + 0x28));
      _swift_bridgeObjectRetain(puVar17);
      HVar15.unknown = auStack_a0;
      Swift::String::hash(HVar15,SVar10);
      uVar16 = Swift::Hasher::_finalize(HVar15);
      uVar19 = -1L << ((ulong)(byte)puVar13[0x20] & 0x3f);
      uVar16 = uVar16 & (uVar19 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar13 + 0x30) + uVar16 * 0x10);
          _Var5.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var5.unknown == pcVar4 && _Var6.unknown == puVar17) ||
             (bVar12 = Swift::_stringCompareWithSmolCheck
                                 (_Var5,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar12)) {
            _swift_bridgeObjectRelease(puVar17);
            goto LAB_1002e616c;
          }
          uVar16 = uVar16 + 1 & ~uVar19;
        } while ((*(ulong *)(puVar13 + (uVar16 >> 6) * 8 + 0x38) >> (uVar16 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar17);
    }
    if (uVar24 != uVar26) {
      if ((long)uVar24 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61c0);
        (*pcVar11)();
      }
      if (*puVar25 <= uVar24) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61c4);
        (*pcVar11)();
      }
      if (*puVar25 <= uVar26) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61c8);
        (*pcVar11)();
      }
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar24 * 0x10);
      uVar20 = *puVar2;
      uVar7 = puVar2[1];
      lVar22 = *(long *)(unaff_x22 + 0x188);
      pcVar4 = pSVar1->str;
      pvVar8 = pSVar1->bridgeObject;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(pvVar8);
      uVar16 = uVar27;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar22 + 0x100) = uVar27;
      if ((uVar16 & 1) == 0) {
        lVar22 = *(long *)(unaff_x22 + 0x188);
        FUN_1002dd700();
        *(ulong *)(lVar22 + 0x100) = uVar27;
      }
      lVar22 = *(long *)(unaff_x22 + 0x188);
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar24 * 0x10);
      uVar18 = puVar2[1];
      *puVar2 = pcVar4;
      puVar2[1] = pvVar8;
      _swift_bridgeObjectRelease(uVar18);
      *(ulong *)(lVar22 + 0x100) = uVar27;
      if (*(ulong *)(uVar27 + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61cc);
        (*pcVar11)();
      }
      lVar22 = *(long *)(unaff_x22 + 0x188);
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar26 * 0x10);
      uVar18 = puVar2[1];
      *puVar2 = uVar20;
      puVar2[1] = uVar7;
      _swift_bridgeObjectRelease(uVar18);
      *(ulong *)(lVar22 + 0x100) = uVar27;
    }
    bVar12 = SCARRY8(uVar24,1);
    uVar24 = uVar24 + 1;
    if (bVar12) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e61bc);
      (*pcVar11)();
    }
LAB_1002e616c:
    uVar26 = uVar26 + 1;
    puVar25 = (ulong *)(uVar27 + 0x10);
    uVar16 = *puVar25;
  } while (uVar26 != uVar16);
LAB_1002e5e34:
  if ((long)uVar26 < (long)uVar24) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1002e5e40);
    (*pcVar11)();
  }
LAB_1002e5e54:
  lVar22 = *(long *)(unaff_x22 + 0x188);
  FUN_1002ee68c(uVar24,uVar26);
  _swift_endAccess(unaff_x22 + 0xf0);
  _swift_beginAccess(lVar22 + 0x108,unaff_x22 + 0x108,0x21,0);
  FUN_1002eb394(puVar13);
  _swift_endAccess(unaff_x22 + 0x108);
  _swift_bridgeObjectRelease(puVar13);
  puVar13 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 2;
  *(undefined8 *)(puVar13 + 0x10) = 1;
  *(undefined8 *)(puVar13 + 0x20) = 0x6e756f436d657469;
  *(undefined8 *)(puVar13 + 0x28) = 0xe900000000000074;
  uVar20 = *(undefined8 *)(puVar21 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar20;
  *(undefined **)(puVar13 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar13 + 0x30) = uVar20;
  puVar17 = puVar13;
  FUN_1002e0e24();
  *(undefined **)(unaff_x22 + 0x1f0) = puVar17;
  _swift_setDeallocating(puVar13);
  FUN_100005808(puVar13 + 0x20,&DAT_100fbd188,&DAT_100c3e4c0);
  *(undefined **)(unaff_x22 + 0x20) = puVar21;
  *(long *)(unaff_x22 + 0x28) = lVar22;
  *(undefined **)(unaff_x22 + 0x40) = &DAT_100c3e8d8;
  *(long *)(unaff_x22 + 0x48) = unaff_x22 + 0x10;
  plVar14 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f8) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_1002e61cc;
  FUN_1002e7914(FUN_1002e7914,0xd000000000000010,0x8000000100da11d0,puVar17,&DAT_100c3e8e0,
                unaff_x22 + 0x30);
  return;
}



/* Address: 0x1002e61cc | FUN_1002e61cc */

void FUN_1002e61cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x188);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_1002e6240;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x188);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x1f0));
    pcVar1 = FUN_1002e6b30;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x1002e6240 | FUN_1002e6240 */

void FUN_1002e6240(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  void *pvVar7;
  byte bVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  long *plVar12;
  Hasher HVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  _StringGuts _Var17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  long unaff_x22;
  undefined *puVar23;
  long lVar24;
  ulong *puVar25;
  undefined8 uVar26;
  ulong uVar27;
  ulong uVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined1 auStack_a0 [72];
  
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
  FUN_1000d468c(unaff_x22 + 200);
  puVar23 = *(undefined **)(unaff_x22 + 0xe0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  _Var17.unknown = puVar23;
  FUN_100004640(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x148) = 0;
  *(undefined8 *)(unaff_x22 + 0x150) = 0xe000000000000000;
  Swift::_StringGuts::grow(0x25,_Var17);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_release(uVar5);
  _swift_bridgeObjectRelease(uVar21);
  *(undefined8 *)(unaff_x22 + 0x138) = 0x20646574656c6544;
  *(undefined1 **)(unaff_x22 + 0x140) = &DAT_e800000000000000;
  *(undefined8 *)(unaff_x22 + 0x170) = uVar26;
  SVar29 = Swift::CustomStringConvertible::get_description();
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar29,SVar30);
  _swift_bridgeObjectRelease(SVar29.bridgeObject);
  SVar29.bridgeObject = (void *)0x8000000100da1220;
  SVar29.str = (char *)0xd00000000000001b;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar29,SVar31);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
  FUN_1000d4dd4(*(undefined8 *)(unaff_x22 + 0x138),uVar5,puVar23,uVar16);
  _swift_bridgeObjectRelease(uVar19);
  _swift_bridgeObjectRelease(uVar5);
  FUN_100004594(unaff_x22 + 200);
  lVar22 = *(long *)(unaff_x22 + 0x1c0) + 1;
  if (lVar22 == *(long *)(unaff_x22 + 0x1b0)) {
LAB_1002e649c:
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1a0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
    _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x0001002e64d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1002e6370:
  *(long *)(unaff_x22 + 0x1c0) = lVar22;
  lVar22 = *(long *)(unaff_x22 + 0x180) + lVar22 * 0x10;
  lVar24 = *(long *)(lVar22 + 0x20);
  *(long *)(unaff_x22 + 0x1c8) = lVar24;
  bVar8 = *(byte *)(lVar22 + 0x28);
  *(byte *)(unaff_x22 + 0x208) = bVar8;
  if (bVar8 < 2) {
    uVar27 = *(ulong *)(lVar24 + 0x10);
    _swift_bridgeObjectRetain_n(lVar24,2);
    uVar28 = 0;
    puVar23 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      *(undefined **)(unaff_x22 + 0x1d8) = puVar23;
      puVar25 = (ulong *)(lVar24 + 0x28 + uVar28 * 0x10);
      do {
        if (uVar27 == uVar28) {
          _swift_bridgeObjectRelease(lVar24);
          _swift_bridgeObjectRelease(lVar24);
          bVar10 = bVar8 == 1;
          uVar19 = 0x64657461647075;
          if (!bVar10) {
            uVar19 = 0x6465747265736e69;
          }
          plVar12 = (long *)0x180;
          puVar3 = &DAT_e700000000000000;
          if (!bVar10) {
            puVar3 = &DAT_e800000000000000;
          }
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1e0) = plVar12;
          *plVar12 = unaff_x22;
          plVar12[1] = (long)FUN_1002e58f4;
          FUN_1002e830c(puVar23,bVar10,uVar19,puVar3);
          return;
        }
        if (*(ulong *)(lVar24 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b18);
          (*pcVar9)();
        }
        uVar14 = puVar25[-1];
        uVar18 = *puVar25;
        puVar25 = puVar25 + 2;
        uVar28 = uVar28 + 1;
        uVar20 = uVar14 & 0xffffffffffff;
        if ((uVar18 & 0x2000000000000000) != 0) {
          uVar20 = uVar18 >> 0x38 & 0xf;
        }
      } while (uVar20 == 0);
      _swift_bridgeObjectRetain(uVar18);
      puVar11 = puVar23;
      _swift_isUniquelyReferenced_nonNull_native();
      *(undefined **)(unaff_x22 + 0x178) = puVar23;
      if (((ulong)puVar11 & 1) == 0) {
        FUN_1002dd1f8(unaff_x22,0,*(long *)(puVar23 + 0x10) + 1,1);
        puVar23 = *(undefined **)(unaff_x22 + 0x178);
      }
      uVar20 = *(ulong *)(puVar23 + 0x10);
      if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar20) {
        FUN_1002dd1f8(unaff_x22,1 < *(ulong *)(puVar23 + 0x18),uVar20 + 1,1);
        puVar23 = *(undefined **)(unaff_x22 + 0x178);
      }
      *(ulong *)(puVar23 + 0x10) = uVar20 + 1;
      *(ulong *)(puVar23 + uVar20 * 0x10 + 0x20) = uVar14;
      *(ulong *)(puVar23 + uVar20 * 0x10 + 0x28) = uVar18;
    } while( true );
  }
  uVar27 = *(ulong *)(lVar24 + 0x10);
  _swift_bridgeObjectRetain(lVar24);
  uVar28 = 0;
  puVar23 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    *(undefined **)(unaff_x22 + 0x1d0) = puVar23;
    puVar25 = (ulong *)(lVar24 + 0x28 + uVar28 * 0x10);
    do {
      if (uVar27 == uVar28) {
        if (*(long *)(puVar23 + 0x10) == 0) {
          _swift_release(puVar23);
          _swift_bridgeObjectRelease(lVar24);
          lVar22 = *(long *)(unaff_x22 + 0x1c0) + 1;
          if (lVar22 == *(long *)(unaff_x22 + 0x1b0)) goto LAB_1002e649c;
          goto LAB_1002e6370;
        }
        lVar22 = *(long *)(unaff_x22 + 0x188);
        puVar11 = puVar23;
        _swift_retain();
        FUN_1002ebe84();
        _swift_release(puVar23);
        _swift_beginAccess(lVar22 + 0x100,unaff_x22 + 0xf0,0x21,0);
        uVar27 = *(ulong *)(lVar22 + 0x100);
        puVar25 = (ulong *)(uVar27 + 0x10);
        uVar20 = *puVar25;
        uVar28 = 0;
        if (uVar20 != 0) {
          goto LAB_1002e66d8;
        }
        uVar20 = 0;
        goto LAB_1002e67c4;
      }
      if (*(ulong *)(lVar24 + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e67bc);
        (*pcVar9)();
      }
      uVar14 = puVar25[-1];
      uVar18 = *puVar25;
      puVar25 = puVar25 + 2;
      uVar28 = uVar28 + 1;
      uVar20 = uVar14 & 0xffffffffffff;
      if ((uVar18 & 0x2000000000000000) != 0) {
        uVar20 = uVar18 >> 0x38 & 0xf;
      }
    } while (uVar20 == 0);
    _swift_bridgeObjectRetain(uVar18);
    puVar11 = puVar23;
    _swift_isUniquelyReferenced_nonNull_native();
    *(undefined **)(unaff_x22 + 0x158) = puVar23;
    if (((ulong)puVar11 & 1) == 0) {
      FUN_1002dd1f8(unaff_x22,0,*(long *)(puVar23 + 0x10) + 1,1);
      puVar23 = *(undefined **)(unaff_x22 + 0x158);
    }
    uVar20 = *(ulong *)(puVar23 + 0x10);
    if (*(ulong *)(puVar23 + 0x18) >> 1 <= uVar20) {
      FUN_1002dd1f8(unaff_x22,1 < *(ulong *)(puVar23 + 0x18),uVar20 + 1,1);
      puVar23 = *(undefined **)(unaff_x22 + 0x158);
    }
    *(ulong *)(puVar23 + 0x10) = uVar20 + 1;
    *(ulong *)(puVar23 + uVar20 * 0x10 + 0x20) = uVar14;
    *(ulong *)(puVar23 + uVar20 * 0x10 + 0x28) = uVar18;
  } while( true );
  while (uVar28 = uVar28 + 1, uVar28 != uVar20) {
LAB_1002e66d8:
    if (*(long *)(puVar11 + 0x10) != 0) {
      pSVar1 = (String *)(uVar27 + 0x20 + uVar28 * 0x10);
      pcVar4 = pSVar1->str;
      puVar15 = pSVar1->bridgeObject;
      SVar29 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar11 + 0x28));
      _swift_bridgeObjectRetain(puVar15);
      HVar13.unknown = auStack_a0;
      Swift::String::hash(HVar13,SVar29);
      uVar14 = Swift::Hasher::_finalize(HVar13);
      uVar18 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
      uVar14 = uVar14 & (uVar18 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar11 + 0x30) + uVar14 * 0x10);
          _Var17.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var17.unknown == pcVar4 && _Var6.unknown == puVar15) ||
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var17,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
            _swift_bridgeObjectRelease(puVar15);
            uVar20 = uVar28 + 1;
            uVar14 = *puVar25;
            if (uVar20 == uVar14) goto LAB_1002e67ac;
            goto LAB_1002e6984;
          }
          uVar14 = uVar14 + 1 & ~uVar18;
        } while ((*(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar15);
    }
  }
  uVar28 = *puVar25;
  uVar20 = uVar28;
  goto LAB_1002e67c4;
LAB_1002e6984:
  do {
    if (uVar14 <= uVar20) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b1c);
      (*pcVar9)();
    }
    pSVar1 = (String *)(uVar27 + 0x20 + uVar20 * 0x10);
    if (*(long *)(puVar11 + 0x10) != 0) {
      pcVar4 = pSVar1->str;
      puVar15 = pSVar1->bridgeObject;
      SVar29 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar11 + 0x28));
      _swift_bridgeObjectRetain(puVar15);
      HVar13.unknown = auStack_a0;
      Swift::String::hash(HVar13,SVar29);
      uVar14 = Swift::Hasher::_finalize(HVar13);
      uVar18 = -1L << ((ulong)(byte)puVar11[0x20] & 0x3f);
      uVar14 = uVar14 & (uVar18 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar11 + 0x30) + uVar14 * 0x10);
          _Var17.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var17.unknown == pcVar4 && _Var6.unknown == puVar15) ||
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var17,_Var6,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
            _swift_bridgeObjectRelease(puVar15);
            goto LAB_1002e696c;
          }
          uVar14 = uVar14 + 1 & ~uVar18;
        } while ((*(ulong *)(puVar11 + (uVar14 >> 6) * 8 + 0x38) >> (uVar14 & 0x3f) & 1) != 0);
      }
      _swift_bridgeObjectRelease(puVar15);
    }
    if (uVar28 != uVar20) {
      if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b24);
        (*pcVar9)();
      }
      if (*puVar25 <= uVar28) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b28);
        (*pcVar9)();
      }
      if (*puVar25 <= uVar20) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b2c);
        (*pcVar9)();
      }
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar28 * 0x10);
      uVar19 = *puVar2;
      uVar5 = puVar2[1];
      lVar22 = *(long *)(unaff_x22 + 0x188);
      pcVar4 = pSVar1->str;
      pvVar7 = pSVar1->bridgeObject;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(pvVar7);
      uVar14 = uVar27;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar22 + 0x100) = uVar27;
      if ((uVar14 & 1) == 0) {
        lVar22 = *(long *)(unaff_x22 + 0x188);
        FUN_1002dd700();
        *(ulong *)(lVar22 + 0x100) = uVar27;
      }
      lVar22 = *(long *)(unaff_x22 + 0x188);
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar28 * 0x10);
      uVar16 = puVar2[1];
      *puVar2 = pcVar4;
      puVar2[1] = pvVar7;
      _swift_bridgeObjectRelease(uVar16);
      *(ulong *)(lVar22 + 0x100) = uVar27;
      if (*(ulong *)(uVar27 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b30);
        (*pcVar9)();
      }
      lVar22 = *(long *)(unaff_x22 + 0x188);
      puVar2 = (undefined8 *)(uVar27 + 0x20 + uVar20 * 0x10);
      uVar16 = puVar2[1];
      *puVar2 = uVar19;
      puVar2[1] = uVar5;
      _swift_bridgeObjectRelease(uVar16);
      *(ulong *)(lVar22 + 0x100) = uVar27;
    }
    bVar10 = SCARRY8(uVar28,1);
    uVar28 = uVar28 + 1;
    if (bVar10) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e6b20);
      (*pcVar9)();
    }
LAB_1002e696c:
    uVar20 = uVar20 + 1;
    puVar25 = (ulong *)(uVar27 + 0x10);
    uVar14 = *puVar25;
  } while (uVar20 != uVar14);
LAB_1002e67ac:
  if ((long)uVar20 < (long)uVar28) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1002e67b8);
    (*pcVar9)();
  }
LAB_1002e67c4:
  lVar22 = *(long *)(unaff_x22 + 0x188);
  FUN_1002ee68c(uVar28,uVar20);
  _swift_endAccess(unaff_x22 + 0xf0);
  _swift_beginAccess(lVar22 + 0x108,unaff_x22 + 0x108,0x21,0);
  FUN_1002eb394(puVar11);
  _swift_endAccess(unaff_x22 + 0x108);
  _swift_bridgeObjectRelease(puVar11);
  puVar11 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  *(undefined8 *)(puVar11 + 0x20) = 0x6e756f436d657469;
  *(undefined8 *)(puVar11 + 0x28) = 0xe900000000000074;
  uVar19 = *(undefined8 *)(puVar23 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar19;
  *(undefined **)(puVar11 + 0x48) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar11 + 0x30) = uVar19;
  puVar15 = puVar11;
  FUN_1002e0e24();
  *(undefined **)(unaff_x22 + 0x1f0) = puVar15;
  _swift_setDeallocating(puVar11);
  FUN_100005808(puVar11 + 0x20,&DAT_100fbd188,&DAT_100c3e4c0);
  *(undefined **)(unaff_x22 + 0x20) = puVar23;
  *(long *)(unaff_x22 + 0x28) = lVar22;
  *(undefined **)(unaff_x22 + 0x40) = &DAT_100c3e8d8;
  *(long *)(unaff_x22 + 0x48) = unaff_x22 + 0x10;
  plVar12 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f8) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1002e61cc;
  FUN_1002e7914(FUN_1002e7914,0xd000000000000010,0x8000000100da11d0,puVar15,&DAT_100c3e8e0,
                unaff_x22 + 0x30);
  return;
}



/* Address: 0x1002e6b30 | FUN_1002e6b30 */

void FUN_1002e6b30(void)

{
  long lVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 uVar9;
  long unaff_x22;
  String SVar10;
  String SVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
  pvVar8 = *(void **)(unaff_x22 + 400);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1d0));
  *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
  _swift_errorRetain(uVar7);
  puVar2 = &DAT_100fbd498;
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  _swift_dynamicCast(uVar5,unaff_x22 + 0x160,puVar2,pvVar8,0);
  if ((int)uVar5 == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x160));
    FUN_1000d468c(unaff_x22 + 0xa0);
    puVar2 = *(undefined **)(unaff_x22 + 0xb8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
    _Var3.unknown = puVar2;
    FUN_100004640(unaff_x22 + 0xa0);
    Swift::_StringGuts::grow(0x24,_Var3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar4 = (char *)(unaff_x22 + 0x120);
    _swift_getErrorValue(uVar9,unaff_x22 + 0x168);
    SVar10 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar11.bridgeObject = pvVar8;
    SVar11.str = pcVar4;
    Swift::String::append(SVar10,SVar11);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    FUN_1000d4e0c(0xd000000000000022,0x8000000100da11f0,puVar2,uVar5);
    _swift_bridgeObjectRelease(0x8000000100da11f0);
    FUN_100004594(unaff_x22 + 0xa0);
    _swift_willThrow();
    _swift_bridgeObjectRelease(uVar7);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 400);
    lVar1 = *(long *)(unaff_x22 + 0x198);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x200));
    (**(code **)(lVar1 + 0x20))(uVar5,uVar9,uVar7);
    puVar2 = &DAT_100fbd650;
    FUN_100003a00(&DAT_100fbd650,PTR_typeMetadataAccessor_100eaeb38,
                  PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
    _swift_allocError(uVar7,puVar2,0,0);
    (**(code **)(lVar1 + 0x10))(puVar2,uVar5,uVar7);
    _swift_willThrow();
    (**(code **)(lVar1 + 8))(uVar5,uVar7);
    _swift_bridgeObjectRelease(uVar6);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x160));
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a8));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002e6d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e6d3c | FUN_1002e6d3c */

void FUN_1002e6d3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  _swift_task_switch(FUN_1002e6dc4,0,0);
  return;
}


