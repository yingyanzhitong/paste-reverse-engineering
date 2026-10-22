/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005d6ea8 | FUN_1005d6ea8 */

undefined4 FUN_1005d6ea8(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x746e657665) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x746e657665,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != (undefined1 *)0x61746164) || (param_2 != &DAT_e400000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x61746164,(_StringGuts)0xe400000000000000,expecting),
         !bVar1)) {
        if ((param_1 == (undefined1 *)0x7972746572) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x7972746572,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1005d6ff8 | FUN_1005d6ff8 */

undefined8 FUN_1005d6ff8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  
  _Var3.unknown = (undefined *)param_1[1];
  puVar2 = (undefined *)param_2[1];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar2 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)*param_1 != (undefined *)*param_2 || _Var3.unknown != puVar2) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)*param_1,_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
      return 0;
    }
  }
  _Var3.unknown = (undefined *)param_1[3];
  puVar2 = (undefined *)param_2[3];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar2 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[2] != (undefined *)param_2[2]) || (_Var3.unknown != puVar2)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  if ((((undefined *)param_1[4] == (undefined *)param_2[4]) &&
      ((undefined *)param_1[5] == (undefined *)param_2[5])) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[4],(undefined *)param_1[5],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[4]), bVar1)) {
    if (*(char *)(param_1 + 7) == '\x01') {
      if ((char)param_2[7] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[7] != '\x01') && (param_1[6] == param_2[6])) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x1005d713c | FUN_1005d713c */

void FUN_1005d713c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4890 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c658f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c658f4,&DAT_100ee7730);
  DAT_100fd4890 = pTVar1;
  return;
}



/* Address: 0x1005d717c | FUN_1005d717c */

/* WARNING: Removing unreachable block (ram,0x0001005d7348) */
/* WARNING: Removing unreachable block (ram,0x0001005d72b4) */
/* WARNING: Removing unreachable block (ram,0x0001005d7300) */
/* WARNING: Removing unreachable block (ram,0x0001005d735c) */
/* WARNING: Removing unreachable block (ram,0x0001005d7370) */
/* WARNING: Removing unreachable block (ram,0x0001005d737c) */
/* WARNING: Removing unreachable block (ram,0x0001005d7380) */
/* WARNING: Removing unreachable block (ram,0x0001005d724c) */

void FUN_1005d717c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  String SVar8;
  void *local_140;
  undefined *local_138;
  undefined1 auStack_130 [64];
  undefined8 ***local_f0;
  undefined *puStack_e8;
  undefined8 ***pppuStack_e0;
  undefined *puStack_d8;
  char *local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined8 ***local_a8;
  undefined *puStack_a0;
  undefined8 ***local_98;
  undefined *puStack_90;
  char *local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd4d68;
  FUN_1000f7830(&DAT_100fd4d68,&DAT_100c659c8);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005d713c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_f0 = (undefined8 ***)((ulong)local_f0 & 0xffffffffffffff00);
    ppppuVar2 = &local_f0;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_f0._0_1_ = 1;
    ppppuVar3 = &local_f0;
    puVar6 = puVar1;
    local_a8 = ppppuVar2;
    puStack_a0 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_f0._0_1_ = 2;
    local_138 = puVar6;
    local_98 = ppppuVar3;
    puStack_90 = puVar6;
    SVar8 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_140 = SVar8.bridgeObject;
    local_88 = SVar8.str;
    uStack_80 = SVar8.bridgeObject._0_1_;
    uStack_7f = SVar8.bridgeObject._1_7_;
    local_51 = 3;
    puVar4 = &local_51;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar7 + 8))((long)&local_140 - extraout_x8,puVar1);
    local_78 = SUB81(puVar4,0);
    uStack_77 = (undefined7)((ulong)puVar4 >> 8);
    local_70 = SUB81(puVar5,0);
    puStack_e8 = puStack_a0;
    local_f0 = local_a8;
    puStack_d8 = puStack_90;
    pppuStack_e0 = local_98;
    uStack_c8 = uStack_80;
    local_d0 = local_88;
    uStack_bf = CONCAT17(local_70,uStack_77);
    uStack_c7 = uStack_7f;
    uStack_c0 = local_78;
    FUN_1005d099c(&local_f0,auStack_130);
    FUN_100004594(param_2);
    FUN_1005d7e54(&local_a8);
    param_1[1] = puStack_e8;
    *param_1 = local_f0;
    param_1[3] = puStack_d8;
    param_1[2] = pppuStack_e0;
    param_1[5] = CONCAT71(uStack_c7,uStack_c8);
    param_1[4] = local_d0;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_bf;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_c0,uStack_c7);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1005d7404 | thunk_FUN_1005d7508 */

void thunk_FUN_1005d7508(void)

{
  FUN_1005d7508();
  return;
}



/* Address: 0x1005d7408 | FUN_1005d7408 */

void FUN_1005d7408(undefined8 param_1)

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
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1005d2d90(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1005d7488 | FUN_1005d7488 */

void FUN_1005d7488(undefined8 param_1)

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
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1005d339c(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1005d7508 | FUN_1005d7508 */

void FUN_1005d7508(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005d753c | FUN_1005d753c */

void FUN_1005d753c(undefined8 param_1)

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
  plVar5 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1005d3560(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x1005d75bc | FUN_1005d75bc */

void FUN_1005d75bc(undefined8 param_1)

{
  if (DAT_100fd4918 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb61a0);
  return;
}



/* Address: 0x1005d75f4 | FUN_1005d75f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1005d75f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  URLRequest_conflict UVar5;
  TaskPriority TVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  
  puVar3 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::connectionTask) = 0;
  *(undefined1 *)(unaff_x20 + _TtC11EventSource11EventSource::readyState) = 0;
  *(undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::maximumFinalizationEventCount) = 100;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onOpenCallback);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onMessageCallback);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC11EventSource11EventSource::_onErrorCallback);
  *puVar1 = 0;
  puVar1[1] = 0;
  IVar4 = objc_stub::sessionWithConfiguration_((ID)&_OBJC_CLASS___NSURLSession,param_2);
  *(ID *)(unaff_x20 + _TtC11EventSource11EventSource::session) = IVar4;
  lVar2 = _TtC11EventSource11EventSource::request;
  UVar5 = Foundation::URLRequest::typeMetadataAccessor();
  lVar8 = *(long *)(UVar5.unknown + -8);
  (**(code **)(lVar8 + 0x10))(unaff_x20 + lVar2,param_1,UVar5.unknown);
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar6.unknown);
  puVar3 = &DAT_100ee7750;
  _swift_allocObject(&DAT_100ee7750,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  puVar7 = &DAT_100ee7778;
  _swift_allocObject(&DAT_100ee7778,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined **)(puVar7 + 0x20) = puVar3;
  FUN_1005d3090(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c65968,puVar7);
  _swift_release();
  (**(code **)(lVar8 + 8))(param_1,UVar5.unknown);
  return;
}



/* Address: 0x1005d77b0 | thunk_FUN_1005d77b4 */

void thunk_FUN_1005d77b4(void)

{
  FUN_1005d77b4();
  return;
}



/* Address: 0x1005d77b4 | FUN_1005d77b4 */

void FUN_1005d77b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd48c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c65440;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65440,&DAT_100ee7588);
  DAT_100fd48c8 = pTVar1;
  return;
}



/* Address: 0x1005d77f4 | thunk_FUN_1005d77f8 */

void thunk_FUN_1005d77f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd48d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c654c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c654c8,&DAT_100ee7618);
  DAT_100fd48d0 = pTVar1;
  return;
}



/* Address: 0x1005d77f8 | FUN_1005d77f8 */

void FUN_1005d77f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd48d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c654c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c654c8,&DAT_100ee7618);
  DAT_100fd48d0 = pTVar1;
  return;
}



/* Address: 0x1005d7838 | thunk_FUN_1005d783c */

void thunk_FUN_1005d783c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd48d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c656b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c656b0,&DAT_100ee7690);
  DAT_100fd48d8 = pTVar1;
  return;
}



/* Address: 0x1005d783c | FUN_1005d783c */

void FUN_1005d783c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd48d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c656b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c656b0,&DAT_100ee7690);
  DAT_100fd48d8 = pTVar1;
  return;
}



/* Address: 0x1005d787c | thunk_FUN_1005d7880 */

void thunk_FUN_1005d7880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (DAT_100fd48e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd48e8;
  FUN_1000f8b08(&DAT_100fd48e8,&DAT_100c65620);
  puStack_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  puVar2 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
             ,puVar1,&puStack_18);
  DAT_100fd48e0 = puVar2;
  return;
}



/* Address: 0x1005d7880 | FUN_1005d7880 */

void FUN_1005d7880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_100fd48e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd48e8;
  FUN_1000f8b08(&DAT_100fd48e8,&DAT_100c65620);
  local_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  puVar2 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
             ,puVar1,&local_18);
  DAT_100fd48e0 = puVar2;
  return;
}



/* Address: 0x1005d78e8 | FUN_1005d78e8 */

void FUN_1005d78e8(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC11EventSource11EventSource::readyState;
  lVar2 = *param_2;
  _swift_beginAccess(lVar2 + _TtC11EventSource11EventSource::readyState,auStack_48,0,0);
  *param_1 = *(undefined1 *)(lVar2 + lVar1);
  return;
}



/* Address: 0x1005d793c | FUN_1005d793c */

void FUN_1005d793c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC11EventSource11EventSource::readyState;
  uVar1 = *param_1;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + _TtC11EventSource11EventSource::readyState,auStack_48,1,0);
  *(undefined1 *)(lVar3 + lVar2) = uVar1;
  return;
}



/* Address: 0x1005d798c | thunk_FUN_1005d79d0 */

void thunk_FUN_1005d79d0(void)

{
  FUN_1005d79d0();
  return;
}



/* Address: 0x1005d7990 | FUN_1005d7990 */

void FUN_1005d7990(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x1005d79a8 | FUN_1005d79a8 */

void FUN_1005d79a8(undefined8 *param_1)

{
  FUN_1005d79b8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1005d79b8 | FUN_1005d79b8 */

void FUN_1005d79b8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x1005d79d0 | FUN_1005d79d0 */

undefined8 * FUN_1005d79d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1005d7990(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1005d7a18 | FUN_1005d7a18 */

undefined8 * FUN_1005d7a18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1005d7990(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1005d79b8(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1005d7a6c | FUN_1005d7a6c */

void FUN_1005d7a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005d7a80 | FUN_1005d7a80 */

undefined8 * FUN_1005d7a80(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1005d79b8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1005d7ac4 | FUN_1005d7ac4 */

undefined1  [16] FUN_1005d7ac4(void)

{
  return ZEXT816(0x100ee7588);
}



/* Address: 0x1005d7ad4 | FUN_1005d7ad4 */

void FUN_1005d7ad4(void)

{
  FUN_1005d75bc(0);
  return;
}



/* Address: 0x1005d7adc | FUN_1005d7adc */

undefined1  [16] FUN_1005d7adc(URLRequest_conflict param_1,ulong param_2)

{
  URLRequest_conflict UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_68 = &DAT_100c65760;
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_60 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_58 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    local_50 = &DAT_100c65778;
    puStack_48 = &DAT_100c65790;
    local_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_38 = &DAT_100c657a8;
    local_30 = &DAT_100c657a8;
    puStack_28 = &DAT_100c657a8;
    uVar2 = 0x100;
    _swift_updateClassMetadata2(param_1.unknown,0x100,9,&local_68,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = UVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x1005d7b90 | FUN_1005d7b90 */

void FUN_1005d7b90(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005d7b9c | FUN_1005d7b9c */

void FUN_1005d7b9c(void)

{
  return;
}



/* Address: 0x1005d7ba0 | FUN_1005d7ba0 */

undefined1  [16] FUN_1005d7ba0(void)

{
  return ZEXT816(0x100ee7618);
}



/* Address: 0x1005d7bb0 | FUN_1005d7bb0 */

void FUN_1005d7bb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005d7bcc | FUN_1005d7bcc */

undefined1  [16] FUN_1005d7bcc(void)

{
  return ZEXT816(0x100ee7690);
}



/* Address: 0x1005d7bdc | FUN_1005d7bdc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1005d7bdc(void)

{
  return ZEXT816(0x100fd4b40);
}



/* Address: 0x1005d7bfc | FUN_1005d7bfc */

undefined1  [16] FUN_1005d7bfc(void)

{
  return ZEXT816(0x100ee7730);
}



/* Address: 0x1005d7c0c | thunk_FUN_1005d7c10 */

void thunk_FUN_1005d7c10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c658cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c658cc,&DAT_100ee7730);
  DAT_100fd4d28 = pTVar1;
  return;
}



/* Address: 0x1005d7c10 | FUN_1005d7c10 */

void FUN_1005d7c10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c658cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c658cc,&DAT_100ee7730);
  DAT_100fd4d28 = pTVar1;
  return;
}



/* Address: 0x1005d7c50 | thunk_FUN_1005d7c54 */

void thunk_FUN_1005d7c54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c65864;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65864,&DAT_100ee7730);
  DAT_100fd4d30 = pTVar1;
  return;
}



/* Address: 0x1005d7c54 | FUN_1005d7c54 */

void FUN_1005d7c54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c65864;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65864,&DAT_100ee7730);
  DAT_100fd4d30 = pTVar1;
  return;
}



/* Address: 0x1005d7c94 | thunk_FUN_1005d7c98 */

void thunk_FUN_1005d7c98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6583c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6583c,&DAT_100ee7730);
  DAT_100fd4d38 = pTVar1;
  return;
}



/* Address: 0x1005d7c98 | FUN_1005d7c98 */

void FUN_1005d7c98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6583c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6583c,&DAT_100ee7730);
  DAT_100fd4d38 = pTVar1;
  return;
}



/* Address: 0x1005d7cd8 | FUN_1005d7cd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005d7cd8(ID param_1)

{
  bool bVar1;
  ID *pIVar2;
  NSString *pNVar3;
  ID IVar4;
  String *pSVar5;
  ID *pIVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  pIVar2 = (ID *)objc_stub::statusCode(param_1);
  if (pIVar2 == (ID *)0xc8) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar4 = objc_stub::valueForHTTPHeaderField_(param_1,pNVar3);
    pSVar5 = (String *)0x0;
    if (IVar4 == 0) {
      FUN_1005d77b4();
      _swift_allocError(&DAT_100ee7588,pSVar5,0,0);
      pSVar5->str = (char *)0x0;
      pSVar5->bridgeObject = (void *)0x0;
    }
    else {
      SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar8 = Swift::String::lowercased(SVar7);
      pSVar5 = SVar8.bridgeObject;
      SVar9.bridgeObject = (void *)0x8000000100dab8a0;
      SVar9.str = (char *)0xd000000000000011;
      bVar1 = Swift::String::hasPrefix(SVar9,SVar8);
      _swift_bridgeObjectRelease();
      if (bVar1) {
        _swift_bridgeObjectRelease(SVar7.bridgeObject);
        return;
      }
      FUN_1005d77b4();
      _swift_allocError(&DAT_100ee7588,pSVar5,0,0);
      *pSVar5 = SVar7;
    }
    *(undefined1 *)&pSVar5[1].str = 1;
  }
  else {
    pIVar6 = pIVar2;
    FUN_1005d77b4();
    _swift_allocError(&DAT_100ee7588,pIVar6,0,0);
    *pIVar6 = (ID)pIVar2;
    pIVar6[1] = 0;
    *(undefined1 *)(pIVar6 + 2) = 0;
  }
  _swift_willThrow();
  return;
}



/* Address: 0x1005d7e54 | FUN_1005d7e54 */

undefined8 FUN_1005d7e54(undefined8 param_1)

{
  FUN_10000c210(param_1,&DAT_100ee7690);
  return param_1;
}



/* Address: 0x1005d7e80 | FUN_1005d7e80 */

void FUN_1005d7e80(void)

{
  AsyncBytes AVar1;
  undefined *puVar2;
  
  if (DAT_100fd4d50 != (undefined *)0x0) {
    return;
  }
  AVar1 = AsyncBytes::_typeMetadataAccessor();
  puVar2 = PTR__Foundation__AsyncBytes_>Swift__AsyncSequence_100ea7930;
  _swift_getWitnessTable(PTR__Foundation__AsyncBytes_>Swift__AsyncSequence_100ea7930,AVar1.unknown);
  DAT_100fd4d50 = puVar2;
  return;
}



/* Address: 0x1005d7ec4 | FUN_1005d7ec4 */

void FUN_1005d7ec4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4d58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c65530;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65530,&DAT_100ee7618);
  DAT_100fd4d58 = pTVar1;
  return;
}



/* Address: 0x1005d7f04 | FUN_1005d7f04 */

void FUN_1005d7f04(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1005d7f28 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1005d7f2c | FUN_1005d7f2c */

void FUN_1005d7f2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1005d3840(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1005d7f98 | FUN_1005d7f98 */

undefined8 FUN_1005d7f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd4898;
  FUN_1000f7830(&DAT_100fd4898,&DAT_100c65408);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005d7fe8 | FUN_1005d7fe8 */

void FUN_1005d7fe8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005d800c | FUN_1005d800c */

void FUN_1005d800c(undefined8 param_1)

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



/* Address: 0x1005d807c | FUN_1005d807c */

void FUN_1005d807c(undefined8 param_1)

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



/* Address: 0x1005d80ec | FUN_1005d80ec */

void FUN_1005d80ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1005d3a5c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1005d8158 | FUN_1005d8158 */

void FUN_1005d8158(undefined8 param_1)

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



/* Address: 0x1005d81c8 | FUN_1005d81c8 */

void FUN_1005d81c8(void)

{
  undefined *puVar1;
  
  if (DAT_100fd4d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fd4d70 = puVar1;
  return;
}



/* Address: 0x1005d8208 | thunk_FUN_1005d7fe8 */

void thunk_FUN_1005d7fe8(void)

{
  FUN_1005d7fe8();
  return;
}



/* Address: 0x1005d820c | thunk_FUN_1005d7fe8 */

void thunk_FUN_1005d7fe8(void)

{
  FUN_1005d7fe8();
  return;
}



/* Address: 0x1005d8210 | thunk_FUN_1005d7fe8 */

void thunk_FUN_1005d7fe8(void)

{
  FUN_1005d7fe8();
  return;
}



/* Address: 0x1005d8214 | thunk_FUN_1005d7fe8 */

void thunk_FUN_1005d7fe8(void)

{
  FUN_1005d7fe8();
  return;
}



/* Address: 0x1005d8218 | thunk_FUN_1005d7fe8 */

void thunk_FUN_1005d7fe8(void)

{
  FUN_1005d7fe8();
  return;
}


