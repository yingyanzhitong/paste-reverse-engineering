/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100680210 | FUN_100680210 */

__int64 FUN_100680210(undefined8 param_1,__int64 param_2,undefined8 param_3,undefined8 param_4)

{
  __int64 _Var1;
  __int64 _Var2;
  undefined *puVar3;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [16];
  __int64 local_a0;
  code *pcStack_98;
  undefined1 *local_90;
  undefined1 auStack_80 [16];
  __int64 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  __int64 _Stack_58;
  undefined8 local_50;
  
  _Var1 = Swift::Collection::get_count();
  if (0 < _Var1) {
    _Var2 = _Var1;
    FUN_100683e8c(_Var1,param_2);
    pcStack_98 = FUN_100680998;
    local_90 = auStack_80;
    local_a0 = param_2;
    local_70 = param_2;
    uStack_68 = param_3;
    local_60 = param_4;
    _Stack_58 = _Var1;
    local_50 = param_1;
    _swift_retain();
    puVar3 = &DAT_100fda040;
    FUN_1000f7830(&DAT_100fda040,0x100c6d628);
    FUN_1006034cc(FUN_100680c84,auStack_b0,_Var2,&DAT_100ef5140,param_2,puVar3,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,auStack_b8
                 );
    _swift_release(_Var2);
    return _Var2;
  }
  FUN_100683d64(param_2);
  return param_2;
}



/* Address: 0x100680318 | FUN_100680318 */

void FUN_100680318(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067d450(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),FUN_100680c34,
                FUN_100680c84);
  return;
}



/* Address: 0x100680344 | FUN_100680344 */

void FUN_100680344(undefined8 param_1,undefined8 param_2)

{
  FUN_1006809b4(param_1,param_2,FUN_10067d638);
  return;
}



/* Address: 0x100680360 | FUN_100680360 */

void FUN_100680360(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067e3c4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10068037c | FUN_10068037c */

void FUN_10068037c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  __int64 _Var4;
  ManagedBufferPointer MVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  code *pcStack_c8;
  long *local_c0;
  long local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  __int64 local_80;
  long lStack_78;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100680594);
    (*pcVar2)();
  }
  uVar8 = *unaff_x20;
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  FUN_1006035b0(local_b0,FUN_1006035a4,0,uVar8,&DAT_100ef5140,uVar7,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (param_2 <= local_b0[0]) {
    _Var4 = Swift::Collection::get_count();
    FUN_1006035b0(local_b0,FUN_1006035a4,0,uVar8,&DAT_100ef5140,uVar7,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    lVar1 = local_b0[0] + _Var4;
    if (!SCARRY8(local_b0[0],_Var4)) {
      MVar5 = Swift::ManagedBufferPointer::typeMetadataAccessor();
      bVar3 = Swift::ManagedBufferPointer::isUniqueReference(MVar5);
      FUN_1006035b0(local_b0,FUN_100003284,0,*unaff_x20,&DAT_100ef5140,uVar7,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_Int_100eac6f8,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      if ((local_b0[0] < lVar1) || (!bVar3)) {
        uVar8 = 0;
        FUN_1006844f0(0,uVar7);
        FUN_100684260(bVar3,lVar1,0,uVar8);
      }
      uVar8 = *unaff_x20;
      pcStack_c8 = FUN_100680964;
      local_c0 = local_b0;
      puVar6 = &DAT_100fda040;
      local_d0 = uVar7;
      local_a0 = uVar7;
      uStack_98 = param_4;
      local_90 = param_5;
      uStack_88 = param_1;
      local_80 = _Var4;
      lStack_78 = param_2;
      FUN_1000f7830(&DAT_100fda040,0x100c6d628);
      FUN_1006034cc(FUN_100680c84,auStack_e0,uVar8,&DAT_100ef5140,uVar7,puVar6,
                    PTR___type_metadata_for____100eae0c8 + 8,
                    PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,
                    auStack_e8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10068059c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100680598);
  (*pcVar2)();
}



/* Address: 0x10068059c | FUN_10068059c */

void FUN_10068059c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067e758(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006805b8 | FUN_1006805b8 */

void FUN_1006805b8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006852c0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006805ec | FUN_1006805ec */

void FUN_1006805ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100686940(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100680614 | FUN_100680614 */

void FUN_100680614(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006869ac(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x100680644 | FUN_100680644 */

void FUN_100680644(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100686af4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10068066c | FUN_10068066c */

void FUN_10068066c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100686b58(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x10068069c | FUN_10068069c */

void FUN_10068069c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100686ca0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006806c4 | FUN_1006806c4 */

void FUN_1006806c4(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d630,param_1);
  return;
}



/* Address: 0x1006806d4 | FUN_1006806d4 */

void FUN_1006806d4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c6d720,param_1);
  return;
}



/* Address: 0x1006806e4 | FUN_1006806e4 */

void FUN_1006806e4(void)

{
  FUN_100680840(&DAT_100fda048,
                PTR__Swift__Swift__Range<undefined>_>Swift__RandomAccessCollection_100eac960);
  return;
}



/* Address: 0x100680708 | FUN_100680708 */

void FUN_100680708(void)

{
  undefined *puVar1;
  
  if (DAT_100fda058 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fda058 = puVar1;
  return;
}



/* Address: 0x100680748 | FUN_100680748 */

void FUN_100680748(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d6d0;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RandomAccessCollection_100eadcb0,param_1,
             &local_28);
  return;
}



/* Address: 0x100680790 | FUN_100680790 */

void FUN_100680790(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d780,param_1);
  return;
}



/* Address: 0x1006807a0 | FUN_1006807a0 */

void FUN_1006807a0(void)

{
  FUN_100680840(&DAT_100fda060,
                PTR__Swift__Swift__Range<undefined>_>Swift__BidirectionalCollection_100eac948);
  return;
}



/* Address: 0x1006807c4 | FUN_1006807c4 */

void FUN_1006807c4(undefined8 param_1)

{
  TargetResilientWitness *pTVar1;
  TargetResilientWitness *local_28;
  
  pTVar1 = &TargetResilientWitness_100c6d720;
  _swift_getWitnessTable();
  local_28 = pTVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__BidirectionalCollection_100eadc98,param_1,
             &local_28);
  return;
}



/* Address: 0x10068080c | FUN_10068080c */

void FUN_10068080c(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c6d660,param_1);
  return;
}



/* Address: 0x10068081c | FUN_10068081c */

void FUN_10068081c(void)

{
  FUN_100680840(&DAT_100fda068,PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968);
  return;
}



/* Address: 0x100680840 | FUN_100680840 */

void FUN_100680840(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fda050;
    FUN_1000f8b08(&DAT_100fda050,0x100c6d6c8);
    puVar2 = puVar1;
    FUN_100680708();
    local_40 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
    puStack_38 = puVar2;
    _swift_getWitnessTable(param_2,puVar1,&local_40);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1006808b4 | FUN_1006808b4 */

void FUN_1006808b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d860;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__MutableCollection_100eadca0,param_1,
             &local_28);
  return;
}



/* Address: 0x1006808fc | FUN_1006808fc */

void FUN_1006808fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0x100c6d8d0;
  _swift_getWitnessTable();
  local_28 = uVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Slice<undefined>_>Swift__RangeReplaceableCollection_100eadcc0,
             param_1,&local_28);
  return;
}



/* Address: 0x100680944 | FUN_100680944 */

void FUN_100680944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100680958 | FUN_100680958 */

void FUN_100680958(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100680964 | FUN_100680964 */

void FUN_100680964(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067e564(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100680984 | FUN_100680984 */

void FUN_100680984(void)

{
  FUN_100680b84();
  return;
}



/* Address: 0x100680998 | FUN_100680998 */

void FUN_100680998(undefined8 param_1,undefined8 param_2)

{
  FUN_1006809b4(param_1,param_2,FUN_10067c7b0);
  return;
}



/* Address: 0x1006809b4 | FUN_1006809b4 */

void FUN_1006809b4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  
  (*param_3)(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006809d8 | FUN_1006809d8 */

void FUN_1006809d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067ca30(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006809f8 | FUN_1006809f8 */

void FUN_1006809f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100685fac(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100680a2c | FUN_100680a2c */

void FUN_100680a2c(long param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (0 < lVar1) {
    Swift::UnsafeMutablePointer::initialize
              (*(undefined8 *)(unaff_x20 + 0x20),lVar1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  }
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100680a7c | FUN_100680a7c */

void FUN_100680a7c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067be0c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100680ab8 | FUN_100680ab8 */

void FUN_100680ab8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100684540(lVar2,param_1,param_2,lVar1);
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))
            (param_2 + *(long *)(*(long *)(lVar1 + -8) + 0x48) * lVar2,uVar3,lVar1);
  return;
}



/* Address: 0x100680b18 | FUN_100680b18 */

void FUN_100680b18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067a510(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100680b34 | FUN_100680b34 */

void FUN_100680b34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fda0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fda0f0;
  FUN_1000f8b08(&DAT_100fda0f0,0x100c6d9c8);
  puVar2 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,puVar1)
  ;
  DAT_100fda0f8 = puVar2;
  return;
}



/* Address: 0x100680b84 | FUN_100680b84 */

void FUN_100680b84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006881f4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100680ba4 | FUN_100680ba4 */

void FUN_100680ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10067a124(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),
                param_3);
  return;
}



/* Address: 0x100680bc0 | FUN_100680bc0 */

void FUN_100680bc0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10067a1cc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100680bdc | FUN_100680bdc */

void FUN_100680bdc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100679f98(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100680bf8 | FUN_100680bf8 */

void FUN_100680bf8(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = param_2[2];
  lVar1 = param_2[1] + lVar3;
  lVar2 = *param_2;
  if (lVar1 <= *param_2) {
    lVar2 = lVar1;
  }
  *param_1 = uVar4;
  param_1[1] = lVar3;
  param_1[2] = lVar2;
  _swift_retain(uVar4);
  return;
}



/* Address: 0x100680c30 | thunk_FUN_10067aa34 */

void thunk_FUN_10067aa34(void)

{
  FUN_10067aa34();
  return;
}



/* Address: 0x100680c34 | FUN_100680c34 */

void FUN_100680c34(void)

{
  FUN_1006809f8();
  return;
}



/* Address: 0x100680c48 | FUN_100680c48 */

void FUN_100680c48(void)

{
  FUN_10067f960();
  return;
}



/* Address: 0x100680c5c | FUN_100680c5c */

void FUN_100680c5c(void)

{
  FUN_100680984();
  return;
}



/* Address: 0x100680c70 | FUN_100680c70 */

void FUN_100680c70(void)

{
  FUN_10067f5fc();
  return;
}



/* Address: 0x100680c84 | FUN_100680c84 */

void FUN_100680c84(void)

{
  FUN_10067f650();
  return;
}



/* Address: 0x100680c98 | thunk_FUN_100680790 */

void thunk_FUN_100680790(void)

{
  FUN_100680790();
  return;
}



/* Address: 0x100680c9c | FUN_100680c9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100680dd8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100680c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  AncestorRepresentation AVar2;
  DisplayStyle DVar3;
  undefined *puVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar4;
  long lVar6;
  
  AVar2 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
  lVar4 = CONCAT71((int7)((ulong)param_2 >> 8),AVar2.value);
  lVar11 = *(long *)(lVar4 + -8);
  lVar9 = (long)&local_70 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fda100;
  FUN_1000f7830(&DAT_100fda100,0x100c6d9d0);
  lVar10 = lVar9 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_Mirror_DisplayStyle_collection_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd80
  ;
  local_70 = param_2;
  uStack_68 = param_2;
  DVar3 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)puVar5 >> 8),DVar3.value);
  lVar12 = *(long *)(lVar6 + -8);
  (**(code **)(lVar12 + 0x68))(lVar10,uVar1,lVar6);
  (**(code **)(lVar12 + 0x38))(lVar10,0,1,lVar6);
  uVar7 = 0;
  FUN_1006883a0(0,param_3);
  uVar8 = 0x100c6d780;
  _swift_getWitnessTable(0x100c6d780,uVar7);
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___enum_case_for_Swift_Mirror_AncestorRepresentation_generated_Swift_Mirror_AncestorRepresentation_Type___>_Swift_Mirror_AncestorRepresentation_100eaddc0
             ,lVar4);
  _swift_retain_n(param_2,2);
  Swift::Mirror::_init(param_1,uVar8,&local_70,lVar10,lVar9,uVar7,uVar7,uVar8);
  return;
}



/* Address: 0x100680dfc | FUN_100680dfc */

void FUN_100680dfc(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100680c9c(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100680e0c | FUN_100680e0c */

void FUN_100680e0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar1 = 0;
  local_28 = param_1;
  FUN_1006883a0(0);
  uVar2 = 0x100c6d780;
  _swift_getWitnessTable(0x100c6d780,uVar1);
  FUN_10068f120(&local_28,uVar1,uVar2);
  return;
}



/* Address: 0x100680e5c | FUN_100680e5c */

void FUN_100680e5c(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100680e0c(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100680e6c | thunk_FUN_100680e0c */

void thunk_FUN_100680e0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_28 = param_1;
  FUN_1006883a0(0);
  uVar2 = 0x100c6d780;
  _swift_getWitnessTable(0x100c6d780,uVar1);
  FUN_10068f120(&uStack_28,uVar1,uVar2);
  return;
}



/* Address: 0x100680e70 | FUN_100680e70 */

void FUN_100680e70(long param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_100680e0c(*unaff_x20,*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100680e80 | FUN_100680e80 */

bool FUN_100680e80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long local_78 [2];
  long local_68;
  
  puVar3 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar2 = PTR___type_metadata_for_Swift_Never_100eadc38;
  puVar1 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_1006035b0(&local_68,FUN_1006035a4,0,param_1,&DAT_100ef5140,param_3,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar4 = local_68;
  FUN_1006035b0(&local_68,FUN_1006035a4,0,param_2,&DAT_100ef5140,param_3,puVar2,puVar1,puVar3);
  if (lVar4 == local_68) {
    bVar5 = true;
    if ((lVar4 != 0) && (param_1 != param_2)) {
      uVar6 = 0;
      local_78[0] = param_2;
      local_68 = param_1;
      FUN_1006883a0(0,param_3);
      uVar7 = 0x100c6d660;
      _swift_getWitnessTable(0x100c6d660,uVar6);
      bVar5 = (extension_Swift)::Swift::Sequence::_elementsEqual
                        (local_78,uVar6,uVar6,uVar7,uVar7,param_4);
    }
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}



/* Address: 0x100680fc0 | FUN_100680fc0 */

void FUN_100680fc0(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  FUN_100680e80(*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  return;
}



/* Address: 0x100680fd4 | FUN_100680fd4 */

undefined8 * FUN_100680fd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  
  uVar1 = 0;
  local_38 = param_1;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  puVar3 = &local_38;
  FUN_100680210(puVar3,param_2,uVar1,puVar2);
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Address: 0x100681048 | FUN_100681048 */

void FUN_100681048(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  uVar4 = *(undefined8 *)(param_3 + 0x10);
  uVar1 = 0;
  local_38 = param_2;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  puVar3 = &local_38;
  FUN_100680210(puVar3,uVar4,uVar1,puVar2);
  _swift_bridgeObjectRelease(param_2);
  *param_1 = (long)puVar3;
  return;
}



/* Address: 0x1006810c4 | FUN_1006810c4 */

undefined8
FUN_1006810c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x21;
  undefined1 local_a8 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  code *pcStack_88;
  undefined1 *local_80;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  FUN_100683e8c(param_1,param_4);
  pcStack_88 = FUN_100681268;
  local_80 = auStack_70;
  local_90 = param_4;
  local_60 = param_4;
  uStack_58 = param_1;
  local_50 = param_2;
  uStack_48 = param_3;
  _swift_retain();
  puVar2 = &DAT_100fda040;
  FUN_1000f7830(&DAT_100fda040,0x100c6d628);
  FUN_1006034cc(FUN_10067f650,auStack_a0,uVar1,&DAT_100ef5140,param_4,puVar2,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_a8);
  _swift_release(uVar1);
  if (unaff_x21 != 0) {
    _swift_release(uVar1);
  }
  return uVar1;
}



/* Address: 0x1006811b0 | FUN_1006811b0 */

void FUN_1006811b0(long param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> mutating;
  long lVar2;
  undefined *local_60;
  long lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (-1 < param_3) {
    mutating.unknown = (undefined *)0x0;
    lVar2 = param_3;
    FUN_100684644(0,param_3,param_1,param_2,param_6);
    local_60 = (undefined *)Swift::UnsafeMutableBufferPointer::init(mutating);
    lStack_58 = lVar2;
    (*param_4)(&local_60,&uStack_48);
    FUN_100681284(&uStack_48,param_3,param_1,param_2,&local_60,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100681268);
  (*pcVar1)();
}



/* Address: 0x100681268 | FUN_100681268 */

void FUN_100681268(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006811b0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100681284 | FUN_100681284 */

void FUN_100681284(long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 *param_5)

{
  code *pcVar1;
  UnsafeBufferPointer<undefined> mutating;
  UnsafeMutableBufferPointer<undefined> UVar2;
  
  if (param_2 < *param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068130c);
    (*pcVar1)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100681310);
    (*pcVar1)();
  }
  mutating.unknown = (undefined *)0x0;
  FUN_100684644();
  UVar2 = Swift::UnsafeMutableBufferPointer::init(mutating);
  if ((undefined *)*param_5 == (undefined *)0x0) {
    if (UVar2.unknown != (undefined *)0x0) goto LAB_100681314;
  }
  else {
    if (UVar2.unknown == (undefined *)0x0) {
LAB_100681314:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100681318);
      (*pcVar1)();
    }
    if ((undefined *)*param_5 != UVar2.unknown) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006812e0);
      (*pcVar1)();
    }
  }
  if (param_5[1] == param_2) {
    *(long *)(param_3 + 8) = *param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100681314);
  (*pcVar1)();
}


