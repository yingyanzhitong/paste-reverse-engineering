/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006749e4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$_copyContents */

tuple2_conflict2
(extension_Swift)::Swift::Sequence::__copyContents
          (UnsafeMutableBufferPointer<(extension_in_Swift):Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
           initializing)

{
  tuple2_conflict2 tVar1;
  
  tVar1 = __copyContents(initializing);
  return (tuple2_conflict2)tVar1._;
}



/* Address: 0x1006749e8 | FUN_1006749e8 */

void FUN_1006749e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100674a20();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100674a04 | FUN_100674a04 */

void FUN_100674a04(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100674b28();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100674a20 | FUN_100674a20 */

undefined * FUN_100674a20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100674b28);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd9d88;
    FUN_1000f7830(&DAT_100fd9d88,&DAT_100c6ceb0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100674b28 | FUN_100674b28 */

undefined * FUN_100674b28(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100674c28);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd9d90;
    FUN_1000f7830(&DAT_100fd9d90,&DAT_100c6ceb8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100674c28 | FUN_100674c28 */

bool FUN_100674c28(void)

{
  bool bVar1;
  
  bVar1 = Swift::Comparable::<_infix();
  return bVar1;
}



/* Address: 0x100674c4c | FUN_100674c4c */

void FUN_100674c4c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006747a8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2)
  ;
  return;
}



/* Address: 0x100674c68 | FUN_100674c68 */

void FUN_100674c68(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100674c74 | FUN_100674c74 */

void FUN_100674c74(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6cda8,param_1);
  return;
}



/* Address: 0x100674c84 | FUN_100674c84 */

void FUN_100674c84(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100674c90 | thunk_FUN_1001aed50 */

void thunk_FUN_1001aed50(void)

{
  FUN_1001aed50();
  return;
}



/* Address: 0x100674c94 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_count */

__int64 Swift::Array<undefined>::get_count(__int64 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf8204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_get_count_100eac4a0)();
  return param_1;
}



/* Address: 0x100674c98 | thunk_FUN_1001aec10 */

void thunk_FUN_1001aec10(void)

{
  FUN_1001aec10();
  return;
}



/* Address: 0x100674c9c | FUN_100674c9c */

void FUN_100674c9c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100674c68(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_1006740d0(param_1,uVar1);
  return;
}



/* Address: 0x100674cd0 | FUN_100674cd0 */

void FUN_100674cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100674c68(0,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  FUN_1006741b0(param_1,param_2,param_3,uVar1);
  return;
}



/* Address: 0x100674d24 | FUN_100674d24 */

void FUN_100674d24(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100674c68(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_100673b40(param_1,uVar1);
  return;
}



/* Address: 0x100674d58 | FUN_100674d58 */

void FUN_100674d58(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  (extension_Swift)::Swift::Collection::_get_first();
  return;
}



/* Address: 0x100674db8 | FUN_100674db8 */

bool FUN_100674db8(void)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar2);
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  return bVar1;
}



/* Address: 0x100674e0c | FUN_100674e0c */

void FUN_100674e0c(undefined8 param_1,long param_2)

{
  FUN_100674c68(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_100673cc8(param_1);
  return;
}



/* Address: 0x100674e38 | FUN_100674e38 */

void FUN_100674e38(long param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1001aec10(uVar1,*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = uVar1;
  return;
}



/* Address: 0x100674e6c | FUN_100674e6c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100674e9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

byte FUN_100674e6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  __int64 _Var1;
  __int64 _Var2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  
  _Var1 = Swift::Array<undefined>::get_count(param_1,param_3,param_4);
  _Var2 = Swift::Array<undefined>::get_count(_Var1,param_3,param_4);
  if (_Var1 == _Var2) {
    uVar3 = 0;
    local_50 = param_2;
    uStack_48 = param_1;
    FUN_100674f2c(0,param_3,param_4);
    pTVar4 = &TargetProtocolConformanceDescriptor_100c6cf28;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6cf28,uVar3);
    (extension_Swift)::Swift::Sequence::_elementsEqual
              (&local_50,uVar3,uVar3,pTVar4,pTVar4,*(undefined8 *)(param_4 + 8));
  }
  else {
    pTVar4 = (TargetProtocolConformanceDescriptor *)0x0;
  }
  return (byte)pTVar4 & 1;
}



/* Address: 0x100674f28 | /usr/lib/swift/libswiftCore.dylib::Swift::Array<undefined>::get_count */

__int64 Swift::Array<undefined>::get_count(void)

{
  __int64 _Var1;
  
  _Var1 = get_count();
  return _Var1;
}



/* Address: 0x100674f2c | FUN_100674f2c */

void FUN_100674f2c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100674f38 | FUN_100674f38 */

void FUN_100674f38(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  FUN_100674e6c(*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x100674f4c | FUN_100674f4c */

void FUN_100674f4c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100674f2c(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  FUN_100674c68(0,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18));
  FUN_100673cc8(param_1);
  return;
}



/* Address: 0x100674f84 | thunk_FUN_100674f4c */

void thunk_FUN_100674f4c(void)

{
  FUN_100674f4c();
  return;
}



/* Address: 0x100674f88 | FUN_100674f88 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100674ff4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100674f88(undefined8 **param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  pcVar6 = param_3;
  Swift::_StringGuts::grow(0x1c,param_2);
  SVar7.bridgeObject = (void *)0x8000000100dafbf0;
  SVar7.str = (char *)0xd000000000000015;
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar6;
  Swift::String::append(SVar7,SVar9);
  pcVar6 = param_3;
  local_58 = (undefined8 **)Swift::Array<undefined>::get_count(param_1,param_2.unknown);
  SVar7 = Swift::CustomStringConvertible::get_description();
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar6;
  Swift::String::append(SVar7,SVar10);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  SVar8.bridgeObject = (void *)0xe300000000000000;
  SVar8.str = (char *)0x203a29;
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar6;
  Swift::String::append(SVar8,SVar11);
  uVar2 = 0;
  local_58 = param_1;
  FUN_100674f2c(0,param_2.unknown,param_3);
  _swift_bridgeObjectRetain(param_1);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c6cf28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6cf28,uVar2);
  pppuVar4 = &local_58;
  Swift::Array<undefined>::_init(pppuVar4,param_2.unknown,uVar2,pTVar3);
  uVar2 = 0;
  local_58 = pppuVar4;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar5 = PTR_Swift__Swift__Array<undefined>_>Swift__CustomStringConvertible_100eac558;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__CustomStringConvertible_100eac558,uVar2);
  Swift::DefaultStringInterpolation::_appendInterpolation(&local_58,uVar2,puVar5);
  _swift_bridgeObjectRelease(pppuVar4);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}



/* Address: 0x1006750e0 | FUN_1006750e0 */

void FUN_1006750e0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6cef8,param_1);
  return;
}



/* Address: 0x1006750f0 | FUN_1006750f0 */

void FUN_1006750f0(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100674f88(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100675100 | FUN_100675100 */

void FUN_100675100(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10067510c | /usr/lib/swift/libswiftCore.dylib::Swift::$_copySequenceToContiguousArray */

ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
 Swift::__copySequenceToContiguousArray
           (ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa6c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copySequenceToContiguousArray_100eadac0)();
  return (ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
          )param_1.unknown;
}



/* Address: 0x100675110 | thunk_FUN_100675578 */

void thunk_FUN_100675578(void)

{
  FUN_100675578();
  return;
}



/* Address: 0x100675114 | FUN_100675114 */

void FUN_100675114(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100675120 | FUN_100675120 */

void FUN_100675120(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100675158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x10067515c | thunk_FUN_100675160 */

void thunk_FUN_100675160(void)

{
  FUN_100675160();
  return;
}



/* Address: 0x100675160 | FUN_100675160 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006752d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_100675160(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  __int64 _Var6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long local_70 [2];
  
  lVar2 = 0xff;
  local_70[1] = param_4;
  FUN_100675114(0xff,param_3);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,lVar2,lVar2,0,0);
  puVar12 = (undefined8 *)
            ((long)local_70 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  local_70[0] = *(long *)(param_3 + -8);
  uVar7 = *(long *)(local_70[0] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)puVar12 - uVar7;
  lVar9 = lVar14 - uVar7;
  lVar11 = lVar9 - uVar7;
  puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar3 + 0x30));
  pcVar8 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  (*pcVar8)(puVar12,param_1,lVar2);
  (*pcVar8)(puVar13,param_2,lVar2);
  puVar4 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar2);
  puVar5 = puVar13;
  if ((int)puVar4 == 1) {
    uVar15 = *puVar12;
    _swift_getEnumCaseMultiPayload(puVar13,lVar2);
    if ((int)puVar5 == 1) {
      uVar10 = *puVar13;
      bVar1 = (extension_Swift)::Swift::Array<undefined>::____infix
                        (uVar15,uVar10,param_3,local_70[1]);
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(uVar10);
      return bVar1;
    }
  }
  else {
    _swift_getEnumCaseMultiPayload(puVar13,lVar2);
    lVar2 = local_70[0];
    if ((int)puVar5 != 1) {
      pcVar8 = *(code **)(local_70[0] + 0x20);
      (*pcVar8)(lVar9,puVar12,param_3);
      (*pcVar8)(lVar14,puVar13,param_3);
      bVar1 = Swift::Equatable::___infix(lVar9,lVar14,param_3,local_70[1]);
      pcVar8 = *(code **)(lVar2 + 8);
      (*pcVar8)(lVar14,param_3);
      (*pcVar8)(lVar9,param_3);
      return bVar1;
    }
    uVar15 = *puVar13;
    puVar13 = puVar12;
  }
  lVar2 = local_70[0];
  (**(code **)(local_70[0] + 0x20))(lVar11,puVar13,param_3);
  _Var6 = Swift::Array<undefined>::get_count(puVar5,param_3);
  if (_Var6 == 1) {
    Swift::Array<undefined>::get_subscript(lVar9,0,uVar15,param_3);
    _swift_bridgeObjectRelease(uVar15);
    bVar1 = Swift::Equatable::___infix(lVar11,lVar9,param_3,local_70[1]);
    pcVar8 = *(code **)(lVar2 + 8);
    (*pcVar8)(lVar9,param_3);
    (*pcVar8)(lVar11,param_3);
  }
  else {
    (**(code **)(lVar2 + 8))(lVar11,param_3);
    _swift_bridgeObjectRelease(uVar15);
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x1006753d8 | FUN_1006753d8 */

void FUN_1006753d8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  thunk_FUN_100675160(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8))
  ;
  return;
}



/* Address: 0x1006753e4 | FUN_1006753e4 */

void FUN_1006753e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_2 + 0x10));
  FUN_10067765c(param_1,uVar1,param_3);
  return;
}



/* Address: 0x100675424 | FUN_100675424 */

void FUN_100675424(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  Hasher HVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_1 + 0x10));
  HVar2.unknown = auStack_78;
  FUN_10067765c(HVar2.unknown,uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100675484 | FUN_100675484 */

void FUN_100675484(undefined8 param_1,long param_2)

{
  FUN_100675424(param_1,*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x10067548c | FUN_10067548c */

void FUN_10067548c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1006753e4(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100675494 | FUN_100675494 */

void FUN_100675494(void)

{
  FUN_10067788c();
  return;
}



/* Address: 0x1006754a0 | FUN_1006754a0 */

void FUN_1006754a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  FUN_100675114(0,uVar3);
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  FUN_100675518(param_1,&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),uVar3);
  return;
}



/* Address: 0x100675518 | FUN_100675518 */

void FUN_100675518(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100675114();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  lVar1 = 0;
  FUN_100677810(0,param_3);
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x1c)) = 0;
  return;
}



/* Address: 0x100675578 | FUN_100675578 */

void FUN_100675578(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001006755b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1006755b4 | FUN_1006755b4 */

undefined8 FUN_1006755b4(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x1c));
}



/* Address: 0x1006755c0 | FUN_1006755c0 */

void FUN_1006755c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x1c)) = param_1;
  return;
}



/* Address: 0x1006755cc | FUN_1006755cc */

void FUN_1006755cc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  code *pcVar7;
  
  puVar3 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + *(int *)(param_2 + 0x1c));
  pcVar6 = *(code **)(*(long *)(param_2 + -8) + 0x10);
  (*pcVar6)(puVar3);
  lVar4 = *(long *)(param_2 + 0x10);
  lVar1 = 0;
  FUN_100675114(0,lVar4);
  lVar2 = lVar1;
  FUN_100675708();
  pcVar7 = *(code **)(*(long *)(lVar1 + -8) + 8);
  (*pcVar7)(puVar3,lVar1);
  if (lVar5 == lVar2) {
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,1,1,lVar4);
  }
  else {
    (*pcVar6)(puVar3);
    FUN_1006757ac(param_1,lVar5,lVar1);
    (*pcVar7)(puVar3,lVar1);
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
    lVar2 = 0;
    FUN_100677810(0,lVar4);
    *(long *)(unaff_x20 + *(int *)(lVar2 + 0x1c)) =
         *(long *)(unaff_x20 + *(int *)(lVar2 + 0x1c)) + 1;
  }
  return;
}



/* Address: 0x100675708 | FUN_100675708 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010067576c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

__int64 FUN_100675708(long param_1)

{
  undefined8 *puVar1;
  __int64 _Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + -8);
  puVar3 = (undefined8 *)
           (&stack0xffffffffffffffd0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar5 + 0x10))(puVar3);
  puVar1 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,param_1);
  if ((int)puVar1 == 1) {
    uVar4 = *puVar3;
    _Var2 = Swift::Array<undefined>::get_endIndex(puVar1,*(undefined8 *)(param_1 + 0x10));
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar3,param_1);
    _Var2 = 1;
  }
  return _Var2;
}



/* Address: 0x1006757ac | FUN_1006757ac */

void FUN_1006757ac(undefined8 param_1,long param_2,long param_3,undefined8 param_4,void *param_5)

{
  long lVar1;
  StaticString file;
  undefined1 *line;
  code *pcVar2;
  undefined8 *puVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long alStack_50 [2];
  StaticString local_40;
  undefined1 *local_38;
  
  lVar1 = -(*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var4.unknown = (undefined *)((long)alStack_50 + lVar1);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(_Var4.unknown);
  puVar3 = (undefined8 *)_Var4.unknown;
  _swift_getEnumCaseMultiPayload(_Var4.unknown,param_3);
  if ((int)puVar3 == 1) {
    uVar6 = *(undefined8 *)_Var4.unknown;
    Swift::Array<undefined>::get_subscript(param_1,param_2,uVar6,*(undefined8 *)(param_3 + 0x10));
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    pcVar5 = *(char **)(param_3 + 0x10);
    (**(code **)(*(long *)(pcVar5 + -8) + 0x20))(param_1);
    if (param_2 != 0) {
      local_40.unknown = (undefined *)0x0;
      local_38 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var4);
      _swift_bridgeObjectRelease(local_38);
      local_40.unknown = (undefined *)0x207865646e69;
      local_38 = &DAT_e600000000000000;
      alStack_50[1] = param_2;
      SVar7 = Swift::CustomStringConvertible::get_description();
      SVar9.bridgeObject = param_5;
      SVar9.str = pcVar5;
      Swift::String::append(SVar7,SVar9);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      SVar7.bridgeObject = (void *)0xee0073646e756f62;
      SVar7.str = (char *)0x20666f2074756f20;
      SVar10.bridgeObject = param_5;
      SVar10.str = pcVar5;
      Swift::String::append(SVar7,SVar10);
      line = local_38;
      file.unknown = local_40.unknown;
      *(undefined4 *)((long)auStack_58 + lVar1) = 0;
      *(undefined8 *)((long)&uStack_60 + lVar1) = 0xbd;
      SVar8.bridgeObject = (void *)0x2;
      SVar8.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar8,file,(__uint64)line,0xdae790);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10067592c);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x10067592c | thunk_FUN_1006755cc */

void thunk_FUN_1006755cc(void)

{
  FUN_1006755cc();
  return;
}



/* Address: 0x100675930 | FUN_100675930 */

void FUN_100675930(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100675114(0,*(undefined8 *)(param_3 + 0x10));
  FUN_1006757ac(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100675970 | FUN_100675970 */

void FUN_100675970(long param_1)

{
  FUN_100675114(0,*(undefined8 *)(param_1 + 0x10));
  FUN_100675708();
  return;
}



/* Address: 0x10067598c | FUN_10067598c */

void FUN_10067598c(void)

{
  _swift_getWitnessTable(0x100c6d0e8);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x1006759dc | FUN_1006759dc */

void FUN_1006759dc(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x1006759f0 | FUN_1006759f0 */

void FUN_1006759f0(__int64 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c6d0e8,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x100675a54 | FUN_100675a54 */

void FUN_100675a54(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getWitnessTable(0x100c6d0e8,param_4);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x100675ab8 | FUN_100675ab8 */

void FUN_100675ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c6d0e8,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_distance();
  return;
}



/* Address: 0x100675b0c | FUN_100675b0c */

void FUN_100675b0c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100675970();
  *param_1 = param_2;
  return;
}



/* Address: 0x100675b30 | FUN_100675b30 */

code * FUN_100675b30(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xa790);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_100675ba4();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10026c674;
}



/* Address: 0x100675ba4 | FUN_100675ba4 */

undefined1  [16] FUN_100675ba4(long *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar4 + -8);
  *param_1 = lVar4;
  param_1[1] = lVar3;
  pvVar1 = *(void **)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x36f8);
  }
  param_1[2] = (long)pvVar1;
  uVar2 = 0;
  FUN_100675114(0,lVar4);
  FUN_1006757ac(pvVar1,param_2,uVar2);
  auVar5._8_8_ = pvVar1;
  auVar5._0_8_ = thunk_FUN_1006333c4;
  return auVar5;
}



/* Address: 0x100675c30 | FUN_100675c30 */

void FUN_100675c30(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d0e8,param_1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x100675c7c | FUN_100675c7c */

void FUN_100675c7c(void)

{
  _swift_getWitnessTable(0x100c6d0e8);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x100675ccc | FUN_100675ccc */

void FUN_100675ccc(void)

{
  FUN_100677c54();
  return;
}


