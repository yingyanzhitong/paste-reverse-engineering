/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100795a28 | FUN_100795a28 */

void FUN_100795a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c77758,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_distance();
  return;
}



/* Address: 0x100795a7c | FUN_100795a7c */

code * FUN_100795a7c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x93cd);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_100795af0();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10026c674;
}



/* Address: 0x100795af0 | FUN_100795af0 */

undefined1  [16] FUN_100795af0(long *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  *param_1 = *(long *)(param_3 + 0x10);
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x31a6);
  }
  param_1[2] = (long)pvVar1;
  FUN_100794074(pvVar1,param_2,param_3);
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = thunk_FUN_1006333c4;
  return auVar3;
}



/* Address: 0x100795b74 | $$(extension_in_Swift):Swift.Collection<_where_A.SubSequence_==_Swift.Slice<A>>.subscript.getter_:_(Swift.Range<A.Index>)_->_Swift.Slice<A> */

void ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
               (void)

{
  ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
            ();
  return;
}



/* Address: 0x100795b78 | FUN_100795b78 */

void FUN_100795b78(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77758,param_1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x100795bc4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::get_count */

__int64 (extension_Swift)::Swift::Collection::get_count(void)

{
  __int64 _Var1;
  
  _Var1 = get_count();
  return _Var1;
}



/* Address: 0x100795bc8 | FUN_100795bc8 */

void FUN_100795bc8(void)

{
  _swift_getWitnessTable(0x100c77758);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x100795c18 | FUN_100795c18 */

void FUN_100795c18(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x100795c2c | FUN_100795c2c */

void FUN_100795c2c(undefined8 param_1,undefined8 param_2)

{
  FUN_100795c38(param_1,param_2,0x100c77808);
  return;
}



/* Address: 0x100795c38 | FUN_100795c38 */

void FUN_100795c38(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  IndexingIterator IVar1;
  
  (**(code **)(*(long *)(param_2 + -8) + 0x20))(param_1);
  _swift_getWitnessTable(param_4,param_2);
  IVar1 = Swift::IndexingIterator::typeMetadataAccessor();
  *(undefined8 *)(param_1 + *(int *)(IVar1.unknown + 0x24)) = 0;
  return;
}



/* Address: 0x100795ca0 | FUN_100795ca0 */

void FUN_100795ca0(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77808,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x100795cd4 | FUN_100795cd4 */

void FUN_100795cd4(undefined8 param_1,undefined8 param_2)

{
  FUN_100795ce0(param_1,param_2,0x100c77808);
  return;
}



/* Address: 0x100795ce0 | FUN_100795ce0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100795d0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100795ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar1;
  
  _swift_getWitnessTable(param_3,param_1);
  CVar1 = Swift::__copyCollectionToContiguousArray(param_3,param_1,param_3);
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return CVar1.unknown;
}



/* Address: 0x100795d3c | FUN_100795d3c */

void FUN_100795d3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  FUN_100793ca8(0,param_3);
  lVar4 = *(long *)(lVar1 + -8);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar2 = *param_2;
  *puVar3 = uVar2;
  _swift_storeEnumTagMultiPayload(puVar3,lVar1,1);
  pcVar5 = *(code **)(lVar4 + 0x28);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar5)(param_1,puVar3,lVar1);
  return;
}



/* Address: 0x100795dd0 | /usr/lib/swift/libswiftCore.dylib::Swift::$_copyCollectionToContiguousArray */

ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
 Swift::__copyCollectionToContiguousArray
           (ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyCollectionToContiguousArray_100eadad8)();
  return (ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
          )param_1.unknown;
}



/* Address: 0x100795dd4 | FUN_100795dd4 */

void FUN_100795dd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_1,lVar3);
  uVar1 = 0;
  FUN_100793ca8(0,lVar3);
  FUN_100794230(&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2,uVar1);
  return;
}



/* Address: 0x100795e4c | FUN_100795e4c */

void FUN_100795e4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c77458,param_1,&local_18);
  return;
}



/* Address: 0x100795e84 | FUN_100795e84 */

void FUN_100795e84(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77530,param_1);
  return;
}



/* Address: 0x100795e94 | FUN_100795e94 */

void FUN_100795e94(void)

{
  undefined *puVar1;
  
  if (DAT_100fe3d38 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe3d38 = puVar1;
  return;
}



/* Address: 0x100795ed4 | FUN_100795ed4 */

void FUN_100795ed4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c774e0;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0,param_1,
             &local_28);
  return;
}



/* Address: 0x100795f1c | FUN_100795f1c */

void FUN_100795f1c(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77590,param_1);
  return;
}



/* Address: 0x100795f2c | FUN_100795f2c */

void FUN_100795f2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c77530;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98,param_1,
             &local_28);
  return;
}



/* Address: 0x100795f74 | FUN_100795f74 */

void FUN_100795f74(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77670,param_1);
  return;
}



/* Address: 0x100795f84 | FUN_100795f84 */

void FUN_100795f84(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fe3d30;
    FUN_1000f8b08(&DAT_100fe3d30,0x100c774d8);
    puVar2 = puVar1;
    FUN_100795e94();
    local_40 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
    puStack_38 = puVar2;
    _swift_getWitnessTable(param_2,puVar1,&local_40);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100795ff8 | FUN_100795ff8 */

void FUN_100795ff8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(0x100c776d8,param_1,&local_18);
  return;
}



/* Address: 0x100796030 | FUN_100796030 */

void FUN_100796030(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c777a8,param_1);
  return;
}



/* Address: 0x100796040 | FUN_100796040 */

void FUN_100796040(void)

{
  FUN_100795f84(&DAT_100fe3d28,
                PTR__Swift__Swift__Range<undefined>_>Swift__RandomAccessCollection_100eac960);
  return;
}



/* Address: 0x100796064 | FUN_100796064 */

void FUN_100796064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c77758;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0,param_1,
             &local_28);
  return;
}



/* Address: 0x1007960ac | FUN_1007960ac */

void FUN_1007960ac(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77808,param_1);
  return;
}



/* Address: 0x1007960bc | FUN_1007960bc */

void FUN_1007960bc(void)

{
  FUN_100795f84(&DAT_100fe3d40,
                PTR__Swift__Swift__Range<undefined>_>Swift__BidirectionalCollection_100eac948);
  return;
}



/* Address: 0x1007960e0 | FUN_1007960e0 */

void FUN_1007960e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c777a8;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98,param_1,
             &local_28);
  return;
}



/* Address: 0x100796128 | FUN_100796128 */

void FUN_100796128(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c778e8,param_1);
  return;
}



/* Address: 0x100796138 | FUN_100796138 */

void FUN_100796138(void)

{
  FUN_100795f84(&DAT_100fe3d48,PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968);
  return;
}



/* Address: 0x10079615c | FUN_10079615c */

void FUN_10079615c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  FUN_100793ca8();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1007961c8 | FUN_1007961c8 */

void FUN_1007961c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007961d4 | thunk_FUN_1007946c8 */

void thunk_FUN_1007946c8(void)

{
  FUN_1007946c8();
  return;
}



/* Address: 0x1007961d8 | thunk_FUN_1007959c4 */

void thunk_FUN_1007959c4(void)

{
  FUN_1007959c4();
  return;
}



/* Address: 0x1007961dc | thunk_FUN_100794664 */

void thunk_FUN_100794664(void)

{
  FUN_100794664();
  return;
}



/* Address: 0x1007961e0 | thunk_FUN_100795960 */

void thunk_FUN_100795960(void)

{
  FUN_100795960();
  return;
}



/* Address: 0x1007961e4 | $$(extension_in_Swift):Swift.Collection<_where_A.SubSequence_==_Swift.Slice<A>>.subscript.getter_:_(Swift.Range<A.Index>)_->_Swift.Slice<A> */

void ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
               (void)

{
  ___extension_in_Swift__Swift_Collection<_where_A_SubSequence____Swift_Slice<A>>_subscript_getter____Swift_Range<A_Index>___>_Swift_Slice<A>
            ();
  return;
}



/* Address: 0x1007961e8 | thunk_FUN_10065a530 */

void thunk_FUN_10065a530(void)

{
  thunk_FUN_10065a530();
  return;
}



/* Address: 0x1007961ec | thunk_FUN_10026c674 */

void thunk_FUN_10026c674(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x20))(pvVar1);
  _free(pvVar1);
  return;
}



/* Address: 0x1007961f0 | thunk_FUN_1006333c4 */

void thunk_FUN_1006333c4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  (**(code **)(param_1[1] + 8))(pvVar1,*param_1);
  _free(pvVar1);
  return;
}



/* Address: 0x1007961f4 | thunk_FUN_10079472c */

void thunk_FUN_10079472c(void)

{
  FUN_10079472c();
  return;
}



/* Address: 0x1007961f8 | thunk_FUN_100795a28 */

void thunk_FUN_100795a28(void)

{
  FUN_100795a28();
  return;
}



/* Address: 0x1007961fc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::get_count */

__int64 (extension_Swift)::Swift::Collection::get_count(void)

{
  __int64 _Var1;
  
  _Var1 = get_count();
  return _Var1;
}



/* Address: 0x100796200 | thunk_FUN_100796040 */

void thunk_FUN_100796040(void)

{
  FUN_100796040();
  return;
}



/* Address: 0x100796204 | thunk_FUN_1007960bc */

void thunk_FUN_1007960bc(void)

{
  FUN_1007960bc();
  return;
}



/* Address: 0x100796208 | thunk_FUN_100796138 */

void thunk_FUN_100796138(void)

{
  FUN_100796138();
  return;
}



/* Address: 0x10079620c | thunk_FUN_100637414 */

void thunk_FUN_100637414(void)

{
  FUN_100637414();
  return;
}



/* Address: 0x100796210 | thunk_FUN_100678bec */

void thunk_FUN_100678bec(void)

{
  thunk_FUN_100678bec();
  return;
}



/* Address: 0x100796214 | FUN_100796214 */

void FUN_100796214(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar4 = *(long *)(lVar1 + -8);
  puVar2 = &stack0xffffffffffffffa0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)puVar2 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar3);
  (**(code **)(lVar4 + 0x10))(puVar2,param_3,lVar1);
  FUN_100796300(param_1,lVar3,param_2,puVar2,param_4,param_5);
  return;
}



/* Address: 0x100796300 | FUN_100796300 */

void FUN_100796300(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (0 < param_3) {
    (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
    lVar3 = 0;
    FUN_1007963e0(0,param_5,param_6);
    iVar1 = *(int *)(lVar3 + 0x24);
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_6,param_5,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
    (**(code **)(*(long *)(lVar4 + -8) + 0x20))(param_1 + iVar1,param_4,lVar4);
    uVar5 = 0;
    FUN_1007963ec(0,param_5,param_6);
    _swift_storeEnumTagMultiPayload(param_1 + iVar1,uVar5,0);
    *(long *)(param_1 + *(int *)(lVar3 + 0x28)) = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007963e0);
  (*pcVar2)();
}



/* Address: 0x1007963e0 | FUN_1007963e0 */

void FUN_1007963e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007963ec | FUN_1007963ec */

void FUN_1007963ec(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007963f8 | FUN_1007963f8 */

void FUN_1007963f8(void)

{
  FUN_100796418();
  return;
}



/* Address: 0x100796404 | FUN_100796404 */

void FUN_100796404(void)

{
  FUN_1007964d0();
  return;
}



/* Address: 0x10079640c | FUN_10079640c */

void FUN_10079640c(void)

{
  FUN_100796418();
  return;
}



/* Address: 0x100796418 | FUN_100796418 */

void FUN_100796418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_5 + -8) + 0x40);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  (*param_7)(param_1,&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_3
             ,param_4,param_5,param_6);
  _swift_retain(param_4);
  return;
}



/* Address: 0x1007964c8 | FUN_1007964c8 */

void FUN_1007964c8(void)

{
  FUN_1007964d0();
  return;
}



/* Address: 0x1007964d0 | FUN_1007964d0 */

void FUN_1007964d0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (0 < param_3) {
    (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
    lVar3 = 0;
    FUN_1007963e0(0,param_6,param_7);
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
    *puVar1 = param_4;
    puVar1[1] = param_5;
    uVar4 = 0;
    FUN_1007963ec(0,param_6,param_7);
    _swift_storeEnumTagMultiPayload(puVar1,uVar4,param_8);
    *(long *)(param_1 + *(int *)(lVar3 + 0x28)) = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100796590);
  (*pcVar2)();
}



/* Address: 0x100796590 | FUN_100796590 */

void FUN_100796590(void)

{
  FUN_100796418();
  return;
}



/* Address: 0x10079659c | FUN_10079659c */

void FUN_10079659c(void)

{
  FUN_1007965c4();
  return;
}



/* Address: 0x1007965a4 | FUN_1007965a4 */

void FUN_1007965a4(void)

{
  FUN_100024ee0();
  return;
}


