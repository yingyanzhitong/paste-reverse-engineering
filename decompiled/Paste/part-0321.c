/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100402264 | FUN_100402264 */

void FUN_100402264(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100402270 | FUN_100402270 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100402270(ID param_1,code *param_2,DispatchQoS param_3)

{
  DispatchTime DVar1;
  undefined *puVar2;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar3;
  Optional OVar4;
  bool bVar5;
  long lVar6;
  undefined7 extraout_var;
  ID IVar7;
  OS_dispatch_queue *pOVar8;
  DispatchTime DVar9;
  void *aBlock;
  undefined8 *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  long lVar17;
  ulong *unaff_x20;
  long lVar18;
  long lVar19;
  ulong uVar20;
  String SVar21;
  String SVar22;
  code *local_140;
  ulong local_138;
  ID local_130;
  long local_128;
  long local_120;
  long local_118;
  DispatchTime local_110;
  long local_108;
  DispatchTime local_100;
  undefined *local_f8;
  DispatchQoS local_f0;
  long local_e8;
  undefined *puStack_e0;
  DispatchWorkItemFlags local_d8;
  long local_d0;
  undefined *local_c8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  uVar13 = *unaff_x20;
  uVar16 = *(ulong *)PTR__swift_isaMask_100eae3b0;
  local_c8 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_d0 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  puVar14 = (undefined *)((long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_d8.unknown = puVar14;
  puStack_e0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e8 = *(long *)(puStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  puVar14 = puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0.unknown = puVar14;
  local_f8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_108 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_108 + 0x40));
  puVar14 = puVar14 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_110.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = *(long *)((uVar16 & uVar13) + 0x50);
  lVar6 = 0;
  local_100.unknown = puVar14 + -extraout_x12;
  FUN_100401fa0(0,lVar18);
  local_120 = *(long *)(lVar6 + -8);
  local_118 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = (long)(puVar14 + -extraout_x12) - extraout_x8_02;
  local_128 = lVar6;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar19 = *(long *)(CONCAT71(extraout_var,OVar4.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar6 - extraout_x8_03;
  lVar17 = *(long *)(lVar18 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar6 = uVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar16 = lVar6 - extraout_x12_00;
  pcVar15 = *(code **)((long)unaff_x20 + DAT_100fc4b50);
  local_130 = param_1;
  IVar7 = objc_stub::notification(param_1);
  IVar7 = objc_stub::request(IVar7);
  (*pcVar15)(uVar20,IVar7);
  uVar13 = uVar20;
  (**(code **)(lVar17 + 0x30))(uVar20,1,lVar18);
  if ((int)uVar13 == 1) {
    pcVar15 = *(code **)(lVar19 + 8);
    uVar16 = uVar20;
    lVar18 = CONCAT71(extraout_var,OVar4.value);
LAB_1004025d4:
    (*pcVar15)(uVar16,lVar18);
    (*param_2)();
    return;
  }
  pcVar15 = *(code **)(lVar17 + 0x20);
  (*pcVar15)(uVar16,uVar20,lVar18);
  uVar13 = uVar16;
  (**(code **)((long)unaff_x20 + DAT_100fc4b58))();
  if ((uVar13 & 1) == 0) {
    pcVar15 = *(code **)(lVar17 + 8);
    goto LAB_1004025d4;
  }
  local_140 = *(code **)((long)unaff_x20 + DAT_100fc4b60);
  (**(code **)(lVar17 + 0x10))(lVar6,uVar16,lVar18);
  IVar7 = local_130;
  objc_stub::actionIdentifier(local_130);
  SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var12.unknown = SVar21.bridgeObject;
  SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  local_138 = uVar16;
  if (SVar21 == SVar22) {
    _swift_bridgeObjectRelease(_Var12.unknown);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar21.str,_Var12,(_StringComparisonResult)(__int8)SVar22.str);
    _swift_bridgeObjectRelease(_Var12.unknown);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    if (!bVar5) {
      objc_stub::actionIdentifier(IVar7);
      SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      goto LAB_100402648;
    }
  }
  SVar21 = (String)ZEXT816(0);
LAB_100402648:
  puVar14 = &DAT_100ed1910;
  _swift_allocObject(&DAT_100ed1910,0x20,7);
  lVar19 = local_128;
  *(code **)(puVar14 + 0x10) = param_2;
  *(undefined **)(puVar14 + 0x18) = param_3.unknown;
  (*pcVar15)(local_128,lVar6,lVar18);
  lVar6 = local_118;
  *(String *)(lVar19 + *(int *)(local_118 + 0x1c)) = SVar21;
  puVar10 = (undefined8 *)(lVar19 + *(int *)(local_118 + 0x20));
  *puVar10 = FUN_1000386a0;
  puVar10[1] = puVar14;
  _swift_retain(param_3.unknown);
  (*local_140)(lVar19);
  (**(code **)(local_120 + 8))(lVar19,lVar6);
  pOVar8 = (OS_dispatch_queue *)0x0;
  FUN_100402918();
  DVar9.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
  DVar1.unknown = local_110.unknown;
  Dispatch::DispatchTime::now(DVar9);
  DVar9.unknown = local_100.unknown;
  Dispatch::__infix(DVar1,3.0);
  puVar2 = local_f8;
  pcVar15 = *(code **)(local_108 + 8);
  (*pcVar15)(DVar1.unknown,local_f8);
  puVar14 = &DAT_100ed1938;
  _swift_allocObject(&DAT_100ed1938,0x20,7);
  *(code **)(puVar14 + 0x10) = param_2;
  *(undefined **)(puVar14 + 0x18) = param_3.unknown;
  local_78 = FUN_10040295c;
  local_98 = PTR___NSConcreteStackBlock_100ea82a0;
  local_90 = 0x42000000;
  local_88 = thunk_FUN_100030410;
  puStack_80 = &DAT_100ed1950;
  local_70 = puVar14;
  aBlock = __Block_copy(&local_98);
  _swift_retain();
  qos.unknown = local_f0.unknown;
  Dispatch::DispatchQoS::get_unspecified(param_3);
  local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar10 = &DAT_100fc4bf0;
  FUN_100003a00(&DAT_100fc4bf0,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar14 = &DAT_100fc4e00;
  FUN_1000037f0(&DAT_100fc4e00,&DAT_100c476c0);
  puVar11 = puVar14;
  FUN_100402980();
  puVar3 = local_c8;
  flags.unknown = local_d8.unknown;
  Swift::SetAlgebra::_init(local_d8.unknown,&local_a0,puVar14,puVar11,local_c8,puVar10);
  (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar9,qos,flags);
  __Block_release(aBlock);
  (**(code **)(local_d0 + 8))(flags.unknown,puVar3);
  (**(code **)(local_e8 + 8))(qos.unknown,puStack_e0);
  (*pcVar15)(DVar9.unknown,puVar2);
  (**(code **)(lVar17 + 8))(local_138,lVar18);
  _swift_release(local_70);
  return;
}



/* Address: 0x1004028a4 | FUN_1004028a4 */

void FUN_1004028a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteNotifications.NotificationDidReceiveHandler",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004028d0);
  (*pcVar1)();
}



/* Address: 0x1004028d0 | FUN_1004028d0 */

void FUN_1004028d0(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004028f4 | FUN_1004028f4 */

void FUN_1004028f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100402918 | FUN_100402918 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100402918(void)

{
  undefined *puVar1;
  
  if (DAT_100fc4df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fc4df0 = puVar1;
  return;
}



/* Address: 0x10040295c | FUN_10040295c */

void FUN_10040295c(void)

{
  long unaff_x20;
  
  FUN_100402090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100402964 | FUN_100402964 */

void FUN_100402964(long param_1,long param_2)

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



/* Address: 0x100402978 | FUN_100402978 */

void FUN_100402978(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100402980 | FUN_100402980 */

void FUN_100402980(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc4c00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc4e00;
  FUN_100005c24(&DAT_100fc4e00,&DAT_100c476c0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fc4c00 = puVar2;
  return;
}



/* Address: 0x1004029d0 | thunk_FUN_1004028f4 */

void thunk_FUN_1004028f4(void)

{
  FUN_1004028f4();
  return;
}



/* Address: 0x1004029d4 | FUN_1004029d4 */

void FUN_1004029d4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47468,param_1);
  (extension_Swift)::Swift::RawRepresentable::_get_hashValue();
  return;
}



/* Address: 0x100402a20 | FUN_100402a20 */

void FUN_100402a20(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47468);
  (extension_Swift)::Swift::RawRepresentable::_hash(param_1);
  return;
}



/* Address: 0x100402a70 | FUN_100402a70 */

void FUN_100402a70(__int64 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47468);
  (extension_Swift)::Swift::RawRepresentable::__rawHashValue(param_1);
  return;
}



/* Address: 0x100402ac0 | FUN_100402ac0 */

void FUN_100402ac0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0,param_1);
  FUN_100403fa4();
  (extension_Swift)::Swift::OptionSet::_init();
  return;
}



/* Address: 0x100402b10 | FUN_100402b10 */

void FUN_100402b10(undefined8 param_1,undefined8 param_2)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  (extension_Swift)::Swift::OptionSet::_contains(param_1,param_2,pTVar1);
  return;
}



/* Address: 0x100402b50 | FUN_100402b50 */

void FUN_100402b50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  (extension_Swift)::Swift::OptionSet::union(param_1,param_2,param_3,pTVar1);
  return;
}



/* Address: 0x100402b98 | FUN_100402b98 */

void FUN_100402b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  (extension_Swift)::Swift::OptionSet::intersection(param_1,param_2,param_3,pTVar1);
  return;
}



/* Address: 0x100402be0 | FUN_100402be0 */

void FUN_100402be0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  (extension_Swift)::Swift::OptionSet::symmetricDifference(param_1,param_2,param_3,pTVar1);
  return;
}



/* Address: 0x100402c28 | FUN_100402c28 */

void FUN_100402c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0,param_3);
  pTVar2 = pTVar1;
  FUN_100403fa4();
  FUN_100402c88(param_1,param_2,param_3,pTVar1,pTVar2);
  return;
}



/* Address: 0x100402c88 | FUN_100402c88 */

uint FUN_100402c88(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_90 [8];
  long local_88;
  uint local_7c;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar2 = 0;
  local_88 = param_4;
  local_70 = param_5;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 8),param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_RawRepresentable_100eac3a0,
             PTR___associated_type_descriptor_for_Swift_RawRepresentable_RawValue_100eabd20);
  local_78 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  bVar1 = Swift::SetAlgebra::_contains();
  local_7c = (uint)CONCAT71(extraout_var,bVar1);
  Swift::RawRepresentable::_get_rawValue();
  lVar4 = *(long *)(param_3 + -8);
  (**(code **)(lVar4 + 8))();
  Swift::RawRepresentable::_get_rawValue();
  Swift::BinaryInteger::__infix
            (lVar5 - extraout_x12_00,lVar5,puVar6,lVar2,*(undefined8 *)(local_70 + 8));
  pcVar3 = *(code **)(local_78 + 8);
  (*pcVar3)(puVar6,lVar2);
  (*pcVar3)(lVar5,lVar2);
  Swift::OptionSet::_init();
  (**(code **)(lVar4 + 0x10))(local_68,param_2,param_3);
  return (local_7c ^ 0xffffffff) & 1;
}



/* Address: 0x100402e34 | FUN_100402e34 */

void FUN_100402e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  (extension_Swift)::Swift::OptionSet::_remove(param_1,param_2,param_3,pTVar1);
  return;
}



/* Address: 0x100402e7c | FUN_100402e7c */

void FUN_100402e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  (extension_Swift)::Swift::OptionSet::_update(param_1,param_2,param_3,pTVar1);
  return;
}



/* Address: 0x100402ec4 | FUN_100402ec4 */

void FUN_100402ec4(void)

{
  FUN_100402ee8();
  return;
}



/* Address: 0x100402ed0 | FUN_100402ed0 */

void FUN_100402ed0(void)

{
  FUN_100402ee8();
  return;
}



/* Address: 0x100402edc | FUN_100402edc */

void FUN_100402edc(void)

{
  FUN_100402ee8();
  return;
}



/* Address: 0x100402ee8 | FUN_100402ee8 */

void FUN_100402ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c473f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0);
  pTVar2 = pTVar1;
  FUN_100403fa4();
  (*param_4)(param_1,param_2,pTVar1,pTVar2);
  return;
}



/* Address: 0x100402f44 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::subtracting */

void (extension_Swift)::Swift::SetAlgebra::subtracting(void)

{
  subtracting();
  return;
}



/* Address: 0x100402f48 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::isSubset */

bool (extension_Swift)::Swift::SetAlgebra::isSubset(void)

{
  bool bVar1;
  
  bVar1 = isSubset();
  return bVar1;
}



/* Address: 0x100402f4c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::isDisjoint */

bool (extension_Swift)::Swift::SetAlgebra::isDisjoint(void)

{
  bool bVar1;
  
  bVar1 = isDisjoint();
  return bVar1;
}



/* Address: 0x100402f50 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::isSuperset */

bool (extension_Swift)::Swift::SetAlgebra::isSuperset(void)

{
  bool bVar1;
  
  bVar1 = isSuperset();
  return bVar1;
}



/* Address: 0x100402f54 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::get_isEmpty */

bool (extension_Swift)::Swift::SetAlgebra::get_isEmpty(void)

{
  bool bVar1;
  
  bVar1 = get_isEmpty();
  return bVar1;
}



/* Address: 0x100402f58 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::SetAlgebra::subtract */

void (extension_Swift)::Swift::SetAlgebra::subtract(void)

{
  subtract();
  return;
}



/* Address: 0x100402f5c | FUN_100402f5c */

void FUN_100402f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47468;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47468,param_3);
  Swift::____infix(param_1,param_2,param_3,pTVar1,
                   PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100eac718);
  return;
}



/* Address: 0x100402fb0 | FUN_100402fb0 */

void FUN_100402fb0(void)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c474a0);
  (extension_Swift)::Swift::SetAlgebra::_init();
  return;
}



/* Address: 0x100402ff8 | FUN_100402ff8 */

void FUN_100402ff8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + *(int *)(param_2 + 0x1c));
  FUN_100403028(param_1,*(undefined8 *)(param_2 + 0x10));
  (*pcVar1)();
  return;
}



/* Address: 0x100403028 | FUN_100403028 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004030f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100403028(undefined8 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  _ContiguousArrayStorage *p_Var5;
  long lVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  Dictionary<undefined,undefined> DVar8;
  _NativeDictionary<undefined,undefined> _Var9;
  UnsafeMutablePointer<undefined> UVar10;
  ulong uVar11;
  tuple2_conflict3 tVar12;
  ulong local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [40];
  _NativeDictionary local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  
  uVar3 = 0xff;
  FUN_100403800(0xff);
  uVar4 = 0xff;
  FUN_100401760();
  _swift_getTupleTypeMetadata2(0xff,uVar3,uVar4,0,0);
  p_Var5 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
  _swift_initStackObject(p_Var5,auStack_118);
  tVar12 = Swift::Array<undefined>::__adoptStorage();
  lVar6 = tVar12._0_8_;
  *(undefined8 *)(lVar6 + 0x28) = 1;
  *(undefined8 *)(lVar6 + 0x20) = 2;
  *(undefined8 *)(lVar6 + 0x38) = 2;
  *(undefined8 *)(lVar6 + 0x30) = 4;
  *(undefined8 *)(lVar6 + 0x48) = 8;
  *(undefined8 *)(lVar6 + 0x40) = 8;
  *(undefined8 *)(lVar6 + 0x58) = 0x10;
  *(undefined8 *)(lVar6 + 0x50) = 0x10;
  Swift::Array<undefined>::typeMetadataAccessor();
  pTVar7 = &TargetProtocolConformanceDescriptor_100c47428;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47428,uVar3);
  DVar8 = Swift::Dictionary::_init(pTVar7,uVar3,uVar4,pTVar7);
  _Var9 = Swift::_NativeDictionary::init(DVar8.unknown);
  Swift::_NativeDictionary::_makeIterator((_NativeDictionary)_Var9.unknown);
  Swift::Dictionary::Iterator::_init((Iterator)auStack_b8);
  local_140 = 0;
  lVar6 = lStack_78;
  while( true ) {
    while (local_70 != 0) {
      uVar11 = (local_70 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_70 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      local_70 = local_70 - 1 & local_70;
      UVar10 = Swift::_NativeDictionary::get__keys(local_90);
      uVar11 = lVar6 << 9 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 3;
      uVar4 = *(undefined8 *)(UVar10.unknown + uVar11);
      UVar10 = Swift::_NativeDictionary::get__values(local_90);
      uVar11 = *(ulong *)(UVar10.unknown + uVar11);
      pTVar7 = &TargetProtocolConformanceDescriptor_100c473f0;
      local_128 = uVar4;
      uStack_120 = param_1;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c473f0,uVar3);
      bVar2 = (extension_Swift)::Swift::OptionSet::_contains(&local_128,uVar3,pTVar7);
      lStack_78 = lVar6;
      if (bVar2) {
        local_140 = uVar11 | local_140;
      }
    }
    bVar2 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar2) break;
    if ((long)(local_80 + 0x40U >> 6) <= lVar6) {
      FUN_10000c650(local_90.unknown,lStack_88,local_80,lStack_78,0);
      return local_140;
    }
    local_70 = *(ulong *)(lStack_88 + lVar6 * 8);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100403254);
  (*pcVar1)();
}



/* Address: 0x100403254 | FUN_100403254 */

undefined8 FUN_100403254(void)

{
  return 4;
}



/* Address: 0x10040325c | FUN_10040325c */

undefined8 FUN_10040325c(void)

{
  return 8;
}



/* Address: 0x100403264 | FUN_100403264 */

void FUN_100403264(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47468,param_1);
  return;
}



/* Address: 0x100403274 | FUN_100403274 */

void FUN_100403274(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c474a0,param_1);
  return;
}



/* Address: 0x100403284 | FUN_100403284 */

void FUN_100403284(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47568,param_1);
  return;
}



/* Address: 0x100403294 | FUN_100403294 */

void FUN_100403294(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47590,param_1);
  return;
}



/* Address: 0x1004032a4 | FUN_1004032a4 */

void FUN_1004032a4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x18);
  }
  return;
}



/* Address: 0x10040331c | FUN_10040331c */

long * FUN_10040331c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar4[1];
    uVar6 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar6;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x1004033cc | FUN_1004033cc */

void FUN_1004033cc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_release(*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xfffffffffffffff8) + 8))
  ;
  return;
}



/* Address: 0x10040340c | FUN_10040340c */

long FUN_10040340c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar2[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100403470 | FUN_100403470 */

long FUN_100403470(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar5 + 0x18))();
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar5 + param_2 & 0xfffffffffffffff8);
  uVar4 = puVar3[1];
  uVar1 = puVar2[1];
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  _swift_retain(uVar1);
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x1004034e0 | FUN_1004034e0 */

long FUN_1004034e0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  uVar4 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  return param_1;
}



/* Address: 0x10040353c | FUN_10040353c */

long FUN_10040353c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  uVar1 = puVar3[1];
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1004035a0 | FUN_1004035a0 */

uint * FUN_1004035a0(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100403630;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100403630:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100403630;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010040366c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100403694 | FUN_100403694 */

void FUN_100403694(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)sVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x0001004037a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        *puVar7 = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  return;
}



/* Address: 0x1004037f4 | FUN_1004037f4 */

void FUN_1004037f4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100403800 | FUN_100403800 */

void FUN_100403800(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10040380c | FUN_10040380c */

void FUN_10040380c(code *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc4c08;
  FUN_100003a00(&DAT_100fc4c08,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteNotifications/UserNotificationCenterDelegateProxy+WillPresentStream.swift",0x4e
               ,1,0x45,UVar4.unknown,puVar3);
  }
  (*param_1)(0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1004038c4 | FUN_1004038c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004038c4(void)

{
  void *pvVar1;
  undefined *puVar2;
  undefined8 in_x3;
  void *in_x4;
  
  pvVar1 = __Block_copy(in_x4);
  puVar2 = &DAT_100ed1a98;
  _swift_allocObject(&DAT_100ed1a98,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_1004039f0(in_x3,FUN_100403f54,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100403974 | FUN_100403974 */

void FUN_100403974(ulong *param_1)

{
  FUN_100403f04(*(undefined8 *)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x50));
  return;
}



/* Address: 0x100403990 | FUN_100403990 */

void FUN_100403990(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + DAT_100fc4d10 + 8));
  _swift_release(*(undefined8 *)(param_1 + DAT_100fc4d18 + 8));
  _swift_release(*(undefined8 *)(param_1 + DAT_100fc4d20 + 8));
  return;
}



/* Address: 0x1004039e4 | FUN_1004039e4 */

void FUN_1004039e4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004039f0 | FUN_1004039f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004039f0(ID param_1,code *param_2,undefined *param_3)

{
  code *pcVar1;
  DispatchTime DVar2;
  DispatchQoS qos;
  DispatchWorkItemFlags flags;
  undefined *puVar3;
  code *pcVar4;
  Optional OVar5;
  long lVar6;
  undefined7 extraout_var;
  ID IVar7;
  OS_dispatch_queue *pOVar8;
  DispatchTime DVar9;
  void *aBlock;
  DispatchQoS DVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar15;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  ulong *unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined auStack_130 [8];
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  DispatchTime local_100;
  code *local_f8;
  DispatchTime local_f0;
  DispatchQoS local_e8;
  long local_e0;
  undefined *puStack_d8;
  DispatchWorkItemFlags local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  uVar13 = *unaff_x20;
  uVar16 = *(ulong *)PTR__swift_isaMask_100eae3b0;
  local_b0 = param_2;
  puStack_a8 = param_3;
  local_c0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c8 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c8 + 0x40));
  puVar14 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0.unknown = puVar14;
  puStack_d8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_e0 = *(long *)(puStack_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e0 + 0x40));
  puVar14 = puVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_e8.unknown = puVar14;
  local_b8 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_f8 = *(code **)(local_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_f8 + 0x40));
  puVar14 = puVar14 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_100.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = *(long *)((uVar16 & uVar13) + 0x50);
  lVar6 = 0;
  local_f0.unknown = puVar14 + -extraout_x12;
  FUN_1004037f4(0,lVar19);
  local_110 = *(long *)(lVar6 + -8);
  local_108 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar6 = (long)(puVar14 + -extraout_x12) - extraout_x8_02;
  local_118 = lVar6;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar18 = *(long *)(CONCAT71(extraout_var,OVar5.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = lVar6 - extraout_x8_03;
  lVar17 = *(long *)(lVar19 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar6 = uVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar16 = lVar6 - extraout_x12_00;
  pcVar15 = *(code **)((long)unaff_x20 + DAT_100fc4d10);
  IVar7 = objc_stub::request(param_1);
  (*pcVar15)(uVar20,IVar7);
  uVar13 = uVar20;
  (**(code **)(lVar17 + 0x30))(uVar20,1,lVar19);
  if ((int)uVar13 == 1) {
    pcVar15 = *(code **)(lVar18 + 8);
    uVar16 = uVar20;
    lVar19 = CONCAT71(extraout_var,OVar5.value);
  }
  else {
    pcVar15 = *(code **)(lVar17 + 0x20);
    (*pcVar15)(uVar16,uVar20,lVar19);
    uVar13 = uVar16;
    (**(code **)((long)unaff_x20 + DAT_100fc4d18))();
    lVar6 = local_120;
    if ((uVar13 & 1) != 0) {
      pcVar1 = *(code **)((long)unaff_x20 + DAT_100fc4d20);
      (**(code **)(lVar17 + 0x10))(local_120,uVar16,lVar19);
      puVar14 = &DAT_100ed1ac0;
      _swift_allocObject(&DAT_100ed1ac0,0x20,7);
      DVar10.unknown = puStack_a8;
      pcVar4 = local_b0;
      lVar18 = local_118;
      *(code **)(puVar14 + 0x10) = local_b0;
      *(undefined **)(puVar14 + 0x18) = puStack_a8;
      local_128 = lVar17;
      (*pcVar15)(local_118,lVar6,lVar19);
      lVar6 = local_108;
      puVar11 = (undefined8 *)(lVar18 + *(int *)(local_108 + 0x1c));
      *puVar11 = FUN_1000386a0;
      puVar11[1] = puVar14;
      _swift_retain(DVar10.unknown);
      (*pcVar1)(lVar18);
      (**(code **)(local_110 + 8))(lVar18,lVar6);
      pOVar8 = (OS_dispatch_queue *)0x0;
      FUN_100402918();
      DVar9.unknown = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar8);
      DVar2.unknown = local_100.unknown;
      Dispatch::DispatchTime::now(DVar9);
      DVar9.unknown = local_f0.unknown;
      Dispatch::__infix(DVar2,3.0);
      local_f8 = *(code **)((long)local_f8 + 8);
      (*local_f8)(DVar2.unknown,local_b8);
      puVar14 = &DAT_100ed1ae8;
      _swift_allocObject(&DAT_100ed1ae8,0x20,7);
      *(code **)(puVar14 + 0x10) = pcVar4;
      *(undefined **)(puVar14 + 0x18) = DVar10.unknown;
      local_78 = FUN_100403f80;
      local_98 = PTR___NSConcreteStackBlock_100ea82a0;
      local_90 = 0x42000000;
      local_88 = thunk_FUN_100030410;
      puStack_80 = &DAT_100ed1b00;
      local_70 = puVar14;
      aBlock = __Block_copy(&local_98);
      _swift_retain();
      qos.unknown = local_e8.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar10);
      local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar11 = &DAT_100fc4bf0;
      FUN_100003a00(&DAT_100fc4bf0,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar14 = &DAT_100fc4e00;
      FUN_1000037f0(&DAT_100fc4e00,&DAT_100c476c0);
      puVar12 = puVar14;
      FUN_100402980();
      puVar3 = local_c0;
      flags.unknown = local_d0.unknown;
      Swift::SetAlgebra::_init(local_d0.unknown,&local_a0,puVar14,puVar12,local_c0,puVar11);
      (extension_Dispatch)::__C::OS_dispatch_queue::_asyncAfter(DVar9,qos,flags);
      __Block_release(aBlock);
      (**(code **)(local_c8 + 8))(flags.unknown,puVar3);
      (**(code **)(local_e0 + 8))(qos.unknown,puStack_d8);
      (*local_f8)(DVar9.unknown,local_b8);
      (**(code **)(local_128 + 8))(uVar16,lVar19);
      _swift_release(local_70);
      return;
    }
    pcVar15 = *(code **)(lVar17 + 8);
  }
  (*pcVar15)(uVar16,lVar19);
  (*local_b0)(0);
  return;
}



/* Address: 0x100403f04 | FUN_100403f04 */

void FUN_100403f04(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteNotifications.NotificationWillPresentHandler",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100403f30);
  (*pcVar1)();
}



/* Address: 0x100403f30 | FUN_100403f30 */

void FUN_100403f30(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100403f54 | FUN_100403f54 */

void FUN_100403f54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100403ff0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100403f5c | FUN_100403f5c */

void FUN_100403f5c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


