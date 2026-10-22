/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007ea108 | FUN_1007ea108 */

undefined1  [16] FUN_1007ea108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_1007ea148();
  _swift_bridgeObjectRelease(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1007ea148 | FUN_1007ea148 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007ea1a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16]
FUN_1007ea148(Keys *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined *puVar3;
  ContiguousArray<undefined> CVar4;
  
  uVar2 = 0;
  Swift::Dictionary::Keys::typeMetadataAccessor(param_1);
  _swift_bridgeObjectRetain(param_2);
  puVar3 = PTR__Swift__Keys_>Swift__Sequence_100eabdd0;
  _swift_getWitnessTable(PTR__Swift__Keys_>Swift__Sequence_100eabdd0,uVar2);
  CVar4 = Swift::ContiguousArray::_init(puVar3,param_3,uVar2,puVar3);
  FUN_1007fa688(0,param_3,param_5);
  FUN_1007f9424();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = CVar4.unknown;
  return auVar1 << 0x40;
}



/* Address: 0x1007ea1d8 | FUN_1007ea1d8 */

void FUN_1007ea1d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ContiguousArray CVar2;
  __int64 _Var3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))
            (auStack_60 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,lVar6);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::append(auStack_60 + -(lVar4 + 0xfU & 0xfffffffffffffff0),CVar2.unknown);
  CVar2.unknown = (undefined *)unaff_x20[1];
  _Var3 = Swift::ContiguousArray::get_count(CVar2);
  lVar5 = *unaff_x20;
  lVar4 = lVar5;
  FUN_1007f94cc(lVar5,CVar2.unknown,lVar6,*(undefined8 *)(param_3 + 0x18));
  if (lVar4 < _Var3) {
    FUN_1007f9424(param_3);
  }
  else if (lVar5 != 0) {
    FUN_1007f9544(param_3);
    lVar4 = *unaff_x20;
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ea300);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    FUN_1007eaa44(lVar4 + 0x10,lVar4 + 0x20,param_2);
    _swift_release(lVar4);
  }
  return;
}



/* Address: 0x1007ea300 | FUN_1007ea300 */

bool FUN_1007ea300(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  FUN_1007f9250(param_1,uVar2,uVar3,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18))
  ;
  uVar1 = (uint)uVar2 & 0xff;
  if (uVar1 == 1) {
    FUN_1007ea1d8(param_1,uVar3,param_2);
  }
  return uVar1 == 1;
}



/* Address: 0x1007ea370 | FUN_1007ea370 */

void FUN_1007ea370(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  __int64 _Var3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  
  lVar6 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  (**(code **)(*(long *)(lVar6 + -8) + 0x10))
            (auStack_60 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,lVar6);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::append(auStack_60 + -(lVar4 + 0xfU & 0xfffffffffffffff0),CVar2.unknown);
  CVar2.unknown = (undefined *)unaff_x20[1];
  _Var3 = Swift::ContiguousArray::get_count(CVar2);
  lVar5 = *unaff_x20;
  lVar4 = lVar5;
  FUN_1007f94cc(lVar5,CVar2.unknown,lVar6,*(undefined8 *)(param_2 + 0x18));
  if (lVar4 < _Var3) {
    FUN_1007f9424(param_2);
  }
  else if (lVar5 != 0) {
    FUN_1007f9544(param_2);
    lVar4 = *unaff_x20;
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ea498);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    FUN_1007ea960(lVar4 + 0x10,lVar4 + 0x20,param_1);
    _swift_release(lVar4);
  }
  return;
}



/* Address: 0x1007ea498 | FUN_1007ea498 */

void FUN_1007ea498(undefined8 param_1,undefined8 param_2,__int64 param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ContiguousArray CVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_4 + 0x10);
  plVar4 = (long *)(unaff_x20 + 8);
  Swift::ContiguousArray::get_subscript(param_3,(undefined *)*plVar4);
  bVar2 = Swift::Equatable::___infix
                    (param_2,param_1,lVar6,*(undefined8 *)(*(long *)(param_4 + 0x18) + 8));
  if (bVar2) {
    CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar3);
    lVar5 = *plVar4;
    FUN_1007e381c(param_3,lVar5,lVar6);
    FUN_100636dd8(lVar5,lVar6);
    (**(code **)(*(long *)(lVar6 + -8) + 0x18))
              (lVar5 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * param_3,param_2,lVar6);
    FUN_1007e3838(plVar4,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ea564);
  (*pcVar1)();
}



/* Address: 0x1007ea564 | thunk_FUN_1007ea300 */

void thunk_FUN_1007ea300(void)

{
  FUN_1007ea300();
  return;
}



/* Address: 0x1007ea568 | FUN_1007ea568 */

bool FUN_1007ea568(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  FUN_1007f9250(param_1,uVar2,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  uVar1 = (uint)uVar2 & 0xff;
  if (uVar1 == 1) {
    FUN_1007ea5d8(param_1,param_2);
  }
  return uVar1 == 1;
}



/* Address: 0x1007ea5d8 | FUN_1007ea5d8 */

void FUN_1007ea5d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  __int64 _Var4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ContiguousArray CVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  lVar7 = *(long *)(param_4 + 0x10);
  lVar8 = *(long *)(lVar7 + -8);
  lVar6 = (long)&local_80 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar9.unknown = (undefined *)unaff_x20[1];
  local_80 = param_3;
  local_78 = param_1;
  local_70 = param_2;
  _Var4 = Swift::ContiguousArray::get_count(CVar9);
  lVar10 = *unaff_x20;
  lVar5 = lVar10;
  FUN_1007f94cc(lVar10,CVar9.unknown,lVar7,*(undefined8 *)(param_4 + 0x18));
  uVar2 = local_70;
  uVar1 = local_78;
  if (_Var4 < lVar5) {
    if (lVar10 == 0) {
      (**(code **)(lVar8 + 0x10))(lVar6,local_78,lVar7);
      CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
    }
    else {
      FUN_1007f9544(param_4);
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ea780);
        (*pcVar3)();
      }
      _swift_retain(lVar5);
      FUN_1007eaae0(lVar5 + 0x10,lVar5 + 0x20,local_80,uVar2);
      _swift_release(lVar5);
      (**(code **)(lVar8 + 0x10))(lVar6,uVar1,lVar7);
      CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
    }
    Swift::ContiguousArray::insert(lVar6,uVar2,CVar9.unknown);
  }
  else {
    (**(code **)(lVar8 + 0x10))(lVar6,local_78,lVar7);
    CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::insert(lVar6,local_70,CVar9.unknown);
    FUN_1007f9424(param_4);
  }
  return;
}



/* Address: 0x1007ea780 | FUN_1007ea780 */

void FUN_1007ea780(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_80;
  long local_78;
  long local_70;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar8 + -8);
  lVar9 = (long)&local_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_1;
  local_70 = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar10 = lVar9 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
                   0xfffffffffffffff0);
  lVar4 = *(long *)(param_3 + -8);
  lVar6 = lVar10 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_78 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(local_78 + 0x40);
  (**(code **)(lVar4 + 0x10))(lVar6,local_80,param_3);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar5 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar10;
  (*pcVar5)(lVar10,1,lVar8);
  if ((int)lVar4 != 1) {
    pcVar7 = *(code **)(lVar11 + 0x20);
    do {
      (*pcVar7)(lVar9,lVar10,lVar8);
      FUN_1007ea300(lVar9,local_70);
      (**(code **)(lVar11 + 8))(lVar9,lVar8);
      Swift::IteratorProtocol::_next();
      lVar4 = lVar10;
      (*pcVar5)(lVar10,1,lVar8);
    } while ((int)lVar4 != 1);
  }
  (**(code **)(local_78 + 8))(lVar6 - (lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Address: 0x1007ea960 | FUN_1007ea960 */

void FUN_1007ea960(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  ContiguousArray CVar3;
  __int64 _Var4;
  long lVar5;
  undefined *puVar6;
  
  uVar2 = Swift::Hashable::_rawHashValue(*param_1);
  lVar5 = 1L << (*param_1 & 0x3f);
  if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007eaa40);
    (*pcVar1)();
  }
  uVar2 = lVar5 - 1U & uVar2;
  FUN_1007d7748();
  while (uVar2 != 0) {
    FUN_1007d7b60();
  }
  puVar6 = *(undefined **)(param_4 + 8);
  CVar3.unknown = puVar6;
  _swift_retain();
  _Var4 = Swift::ContiguousArray::get_count(CVar3);
  _swift_release(puVar6);
  if (SBORROW8(_Var4,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007eaa44);
    (*pcVar1)();
  }
  FUN_1007d7a1c(_Var4 + -1,0);
  return;
}



/* Address: 0x1007eaa44 | FUN_1007eaa44 */

void FUN_1007eaa44(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ContiguousArray CVar2;
  __int64 _Var3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  puVar6 = *(undefined **)(param_4 + 8);
  CVar2.unknown = puVar6;
  _swift_retain();
  _Var3 = Swift::ContiguousArray::get_count(CVar2);
  _swift_release(puVar6);
  if (!SBORROW8(_Var3,1)) {
    uVar5 = -1L << (*param_1 & 0x3f);
    lVar4 = (_Var3 + -1) - ((long)param_1[1] >> 6);
    FUN_1007d8f38(uVar5 ^ (lVar4 >> 0x3f & (uVar5 ^ 0xffffffffffffffff)) + lVar4 ^
                          0xffffffffffffffff,param_3,param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007eaae0);
  (*pcVar1)();
}



/* Address: 0x1007eaae0 | FUN_1007eaae0 */

void FUN_1007eaae0(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 local_48;
  
  local_48 = *(undefined8 *)(param_5 + 8);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  FUN_1007d96c8(param_4,&local_48,param_1,param_2,CVar1.unknown,puVar2,param_7);
  uVar3 = -1L << (*param_1 & 0x3f);
  param_4 = param_4 - ((long)param_1[1] >> 6);
  FUN_1007d8f38(uVar3 ^ (param_4 >> 0x3f & (uVar3 ^ 0xffffffffffffffff)) + param_4 ^
                        0xffffffffffffffff,param_3,param_1,param_2);
  return;
}



/* Address: 0x1007eaba4 | FUN_1007eaba4 */

void FUN_1007eaba4(undefined8 param_1,ulong param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  ContiguousArray CVar3;
  long lVar4;
  long lVar5;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = param_2;
  lVar4 = param_3;
  FUN_1007ea300();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    plVar6 = (long *)(unaff_x20 + 8);
    lVar5 = *(long *)(param_3 + 0x10);
    Swift::ContiguousArray::get_subscript(lVar4,(undefined *)*plVar6);
    CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar3);
    lVar7 = *plVar6;
    FUN_1007e381c(lVar4,lVar7,lVar5);
    FUN_100636dd8(lVar7,lVar5);
    lVar8 = *(long *)(lVar5 + -8);
    (**(code **)(lVar8 + 0x18))(lVar7 + *(long *)(lVar8 + 0x48) * lVar4,param_2,lVar5);
    FUN_1007e3838(plVar6,lVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x38);
  }
  else {
    lVar5 = *(long *)(param_3 + 0x10);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x0001007eac80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,!bVar1,1,lVar5);
  return;
}



/* Address: 0x1007eac84 | FUN_1007eac84 */

__int64 FUN_1007eac84(undefined8 param_1,__int64 param_2,__int64 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  __int64 _Var3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long *plVar7;
  ContiguousArray CVar8;
  
  uVar4 = *unaff_x20;
  plVar7 = unaff_x20 + 1;
  CVar8.unknown = (undefined *)*plVar7;
  lVar1 = *(long *)(param_4 + 0x10);
  _Var3 = param_2;
  FUN_1007f9250(param_2,uVar4,CVar8.unknown,lVar1,*(undefined8 *)(param_4 + 0x18));
  bVar2 = ((uint)uVar4 & 0xff) != 1;
  if (bVar2) {
    Swift::ContiguousArray::get_subscript(_Var3,CVar8);
    CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::_makeMutableAndUnique(CVar8);
    lVar6 = *plVar7;
    FUN_1007e381c(_Var3,lVar6,lVar1);
    FUN_100636dd8(lVar6,lVar1);
    lVar5 = *(long *)(lVar1 + -8);
    (**(code **)(lVar5 + 0x18))(lVar6 + *(long *)(lVar5 + 0x48) * _Var3,param_2,lVar1);
    FUN_1007e3838(plVar7,lVar1);
  }
  else {
    FUN_1007ea5d8(param_2,param_3);
    lVar5 = *(long *)(lVar1 + -8);
    _Var3 = param_3;
  }
  (**(code **)(lVar5 + 0x38))(param_1,!bVar2,1,lVar1);
  return _Var3;
}



/* Address: 0x1007ead98 | FUN_1007ead98 */

void FUN_1007ead98(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  ContiguousArray CVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_60;
  undefined8 uStack_58;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eaee4);
    (*pcVar2)();
  }
  if (0 < lVar1) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eaee8);
      (*pcVar2)();
    }
    uVar6 = *(undefined8 *)(param_4 + 0x10);
    _Var3 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 8));
    if (SBORROW8(_Var3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eaeec);
      (*pcVar2)();
    }
    if (_Var3 - lVar1 < param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eaef0);
      (*pcVar2)();
    }
    if (param_1 != param_3) {
      CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
      _Var3 = *(long *)(unaff_x20 + 8);
      uVar7 = *(undefined8 *)(_Var3 + 0x10);
      FUN_100636dd8(_Var3,uVar6);
      uVar5 = uVar7;
      local_60 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(_Var3);
      uStack_58 = uVar5;
      if (SCARRY8(param_1,lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eaef4);
        (*pcVar2)();
      }
      if (param_1 <= param_1 + lVar1) {
        FUN_1007eaef8(param_1,param_1 + lVar1,param_3,local_60,uVar5,uVar6);
        FUN_1007e37e8(&local_60,_Var3,uVar7,unaff_x20 + 8,uVar6,
                      PTR___type_metadata_for____100eae0c8 + 8,
                      PTR___type_metadata_for_Swift_Never_100eadc38,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        FUN_1007ebb90(param_1,lVar1,param_3,param_4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eaef8);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x1007eaef8 | FUN_1007eaef8 */

void FUN_1007eaef8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  lVar2 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb000);
    (*pcVar3)();
  }
  if (param_3 < param_1) {
    FUN_1007ee154(param_3,param_1,param_4,param_5,param_6);
    lVar4 = param_1 + lVar2;
    if (SCARRY8(param_1,lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb004);
      (*pcVar3)();
    }
    if (lVar4 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb00c);
      (*pcVar3)();
    }
    FUN_1007ee154(param_1,lVar4,param_4,param_5,param_6);
    param_1 = param_3;
  }
  else {
    lVar1 = param_1 + lVar2;
    if (SCARRY8(param_1,lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb008);
      (*pcVar3)();
    }
    if (lVar1 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb010);
      (*pcVar3)();
    }
    FUN_1007ee154(param_1,lVar1,param_4,param_5,param_6);
    lVar4 = param_3 + lVar2;
    if (SCARRY8(param_3,lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb014);
      (*pcVar3)();
    }
    if (lVar4 < lVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eb018);
      (*pcVar3)();
    }
    FUN_1007ee154(lVar1,lVar4,param_4,param_5,param_6);
  }
  FUN_1007ee154(param_1,lVar4,param_4,param_5,param_6);
  return;
}



/* Address: 0x1007eb018 | FUN_1007eb018 */

/* WARNING: Removing unreachable block (ram,0x0001007eb2dc) */

void FUN_1007eb018(long *param_1,ulong param_2,long *param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  code *pcVar2;
  byte bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long alStack_80 [2];
  undefined1 uStack_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar6 = *param_3;
  if ((param_5 & 1) == 0) {
    if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb210);
      (*pcVar2)();
    }
    if (SBORROW8(param_3[param_2 - 1],lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb218);
      (*pcVar2)();
    }
    if (param_3[param_2 - 1] - lVar6 == param_2 - 1) {
      if (SCARRY8(lVar6,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb21c);
        (*pcVar2)();
      }
      if ((long)(lVar6 + param_2) < lVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb220);
        (*pcVar2)();
      }
      FUN_1007eaef8(lVar6,lVar6 + param_2,param_6,param_7,param_8,param_9);
      if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb314);
        (*pcVar2)();
      }
      if (param_2 >> 0x3c != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb318);
        (*pcVar2)();
      }
      uVar7 = param_2 * 8;
      if (((long)uVar7 < 0x401) ||
         ((bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
          (bVar3 & 1) != 0 &&
          (uVar5 = uVar7, _swift_stdlib_isStackAllocationSafe(uVar7,8), (uVar5 & 1) != 0)))) {
        if (uVar7 < 2) {
          uVar7 = 1;
        }
        plVar4 = (long *)((long)alStack_80 - (uVar7 + 0xf & 0xfffffffffffffff0));
        plVar1 = plVar4;
        for (uVar7 = param_2; uVar7 != 0; uVar7 = uVar7 - 1) {
          if (SBORROW8(*param_1,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb208);
            (*pcVar2)();
          }
          *plVar1 = *param_1 - lVar6;
          plVar1 = plVar1 + 1;
          param_1 = param_1 + 1;
        }
        FUN_1007edde8(plVar4,param_2,param_6,param_7);
      }
      else {
        _swift_slowAlloc(uVar7,0xffffffffffffffff);
        FUN_1007edd90(&uStack_69);
        _swift_slowDealloc(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      }
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
        return;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      FUN_1007edf2c();
      return;
    }
  }
  else {
    if (SCARRY8(lVar6,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb20c);
      (*pcVar2)();
    }
    if ((long)(lVar6 + param_2) < lVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eb214);
      (*pcVar2)();
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      FUN_1007eaef8(lVar6,lVar6 + param_2,param_6,param_7,param_8,param_9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1007eb31c | FUN_1007eb31c */

void FUN_1007eb31c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  bool bVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  __int64 _Var4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *unaff_x20;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  undefined1 *puVar20;
  long lVar21;
  code *pcVar22;
  undefined1 auStack_130 [8];
  ulong local_120;
  long local_108;
  char local_c0;
  char local_69;
  
  lVar19 = *(long *)(param_5 + 0x10);
  lVar10 = *(long *)(lVar19 + -8);
  puVar20 = auStack_130 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar21 = (long)puVar20 -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  lVar11 = *(long *)(param_6 + -8);
  lVar12 = lVar21 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar16 = *(long *)(lVar3 + -8);
  lVar13 = *(long *)(lVar16 + 0x40);
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x1007eb780);
    (*pcVar22)();
  }
  _Var4 = Swift::ContiguousArray::get_count((undefined *)unaff_x20[1]);
  if (_Var4 < param_2) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x1007eb784);
    (*pcVar22)();
  }
  uVar15 = *(undefined8 *)(param_5 + 0x18);
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_69 == '\x01') {
    local_c0 = local_69;
    uVar5 = Swift::Sequence::get_underestimatedCount();
    local_120 = 0;
    FUN_1007ee7d8(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100eae0d8);
    (**(code **)(lVar11 + 0x10))(lVar12,param_1,param_6);
    Swift::Sequence::_makeIterator();
    uVar8 = *unaff_x20;
    uVar17 = unaff_x20[1];
    _swift_getAssociatedConformanceWitness
              (param_7,param_6,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    pcVar22 = *(code **)(lVar10 + 0x30);
    lVar11 = lVar21;
    (*pcVar22)(lVar21,1,lVar19);
    if ((int)lVar11 == 1) {
      local_108 = 0;
    }
    else {
      local_108 = 0;
      pcVar18 = *(code **)(lVar10 + 0x20);
      puVar14 = (undefined1 *)0xffffffffffffffff;
      do {
        while( true ) {
          (*pcVar18)(puVar20,lVar21,lVar19);
          puVar6 = puVar20;
          uVar9 = uVar8;
          FUN_1007f9250(puVar20,uVar8,uVar17,lVar19,uVar15);
          if (((uint)uVar9 & 0xff) != 1) break;
          (**(code **)(lVar10 + 8))(puVar20,lVar19);
          Swift::IteratorProtocol::_next();
          lVar11 = lVar21;
          (*pcVar22)(lVar21,1,lVar19);
          if ((int)lVar11 == 1) goto LAB_1007eb6e8;
        }
        if (-1 < (long)puVar14) {
          if ((long)puVar14 < (long)puVar6) {
            if (puVar6 == puVar14 + 1) goto joined_r0x0001007eb610;
          }
          else {
            local_69 = '\0';
          }
          local_c0 = '\0';
        }
joined_r0x0001007eb610:
        if (((long)puVar6 < param_2) &&
           (bVar1 = SCARRY8(local_108,1), local_108 = local_108 + 1, bVar1)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1007eb78c);
          (*pcVar22)();
        }
        uVar5 = *(ulong *)(local_120 + 0x10);
        if (*(ulong *)(local_120 + 0x18) >> 1 <= uVar5) {
          uVar7 = (ulong)(1 < *(ulong *)(local_120 + 0x18));
          FUN_1007ee7d8(uVar7,uVar5 + 1,1,local_120);
          local_120 = uVar7;
        }
        *(ulong *)(local_120 + 0x10) = uVar5 + 1;
        *(undefined1 **)(local_120 + uVar5 * 8 + 0x20) = puVar6;
        (**(code **)(lVar10 + 8))(puVar20,lVar19);
        Swift::IteratorProtocol::_next();
        lVar11 = lVar21;
        (*pcVar22)(lVar21,1,lVar19);
        puVar14 = puVar6;
      } while ((int)lVar11 != 1);
    }
LAB_1007eb6e8:
    (**(code **)(lVar16 + 8))(lVar12 - (lVar13 + 0xfU & 0xfffffffffffffff0),lVar3);
    if (SBORROW8(param_2,local_108)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x1007eb788);
      (*pcVar22)();
    }
    uVar17 = *(undefined8 *)(local_120 + 0x10);
    uVar8 = 0;
    FUN_1007fa688(0,lVar19,uVar15);
    FUN_1007ebe0c(local_120 + 0x20,uVar17,local_c0,local_69,param_2 - local_108,param_3,param_4,
                  uVar8);
    _swift_bridgeObjectRelease(local_120);
  }
  return;
}



/* Address: 0x1007eb78c | FUN_1007eb78c */

void FUN_1007eb78c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  ContiguousArray CVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char local_c9;
  ulong local_c0;
  char local_b8;
  char local_69;
  
  lVar12 = *(long *)(param_6 + -8);
  lVar8 = *(long *)(lVar12 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar11 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebab4);
    (*pcVar1)();
  }
  uVar16 = *(undefined8 *)(param_5 + 0x10);
  _Var4 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 8));
  if (_Var4 < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebab8);
    (*pcVar1)();
  }
  uVar10 = *(undefined8 *)(param_5 + 0x18);
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_69 == '\x01') {
    local_c9 = local_69;
    uVar5 = Swift::Sequence::get_underestimatedCount();
    uVar6 = 0;
    FUN_1007ee7d8(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0,
                  PTR___swiftEmptyArrayStorage_100eae0d8);
    (**(code **)(lVar12 + 0x10))
              (&stack0xffffffffffffff00 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_1,param_6);
    Swift::Sequence::_makeIterator();
    CVar14.unknown = *(undefined **)(unaff_x20 + 8);
    _swift_getAssociatedConformanceWitness
              (param_7,param_6,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    if (local_b8 == '\x01') {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      uVar5 = 0xffffffffffffffff;
      uVar13 = uVar6;
      do {
        if ((long)local_c0 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebaa8);
          (*pcVar1)();
        }
        _Var4 = Swift::ContiguousArray::get_count(CVar14);
        if (_Var4 <= (long)local_c0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebaac);
          (*pcVar1)();
        }
        if (-1 < (long)uVar5) {
          if (uVar5 < local_c0) {
            if (local_c0 == uVar5 + 1) goto joined_r0x0001007eba1c;
          }
          else {
            local_c9 = '\0';
          }
          local_69 = '\0';
        }
joined_r0x0001007eba1c:
        if (((long)local_c0 < param_2) && (bVar2 = SCARRY8(lVar12,1), lVar12 = lVar12 + 1, bVar2)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebab0);
          (*pcVar1)();
        }
        uVar5 = *(ulong *)(uVar13 + 0x10);
        uVar6 = uVar13;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar5) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
          FUN_1007ee7d8(uVar6,uVar5 + 1,1,uVar13);
        }
        *(ulong *)(uVar6 + 0x10) = uVar5 + 1;
        *(ulong *)(uVar6 + uVar5 * 8 + 0x20) = local_c0;
        Swift::IteratorProtocol::_next();
        uVar5 = local_c0;
        uVar13 = uVar6;
      } while (local_b8 != '\x01');
    }
    (**(code **)(lVar11 + 8))
              ((long)(&stack0xffffffffffffff00 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
               (lVar9 + 0xfU & 0xfffffffffffffff0),lVar3);
    if (SBORROW8(param_2,lVar12)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebabc);
      (*pcVar1)();
    }
    uVar15 = *(undefined8 *)(uVar6 + 0x10);
    uVar7 = 0;
    FUN_1007fa688(0,uVar16,uVar10);
    FUN_1007ebe0c(uVar6 + 0x20,uVar15,local_69,local_c9,param_2 - lVar12,param_3,param_4,uVar7);
    _swift_bridgeObjectRelease(uVar6);
  }
  return;
}



/* Address: 0x1007ebabc | FUN_1007ebabc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007ebb14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007ebabc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long unaff_x20;
  long local_50;
  long lStack_48;
  
  uVar3 = 0x100c7a1e0;
  _swift_getWitnessTable(0x100c7a1e0,param_3);
  Swift::RangeExpression::_relative(&local_50,uVar3,param_3,uVar3,param_4,param_5);
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebb84);
    (*pcVar2)();
  }
  _Var4 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 8));
  if (_Var4 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebb88);
    (*pcVar2)();
  }
  if (SBORROW8(lStack_48,local_50)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebb8c);
    (*pcVar2)();
  }
  if (!SBORROW8(param_2,local_50)) {
    uVar1 = param_2 - local_50;
    if (lStack_48 - local_50 <= param_2 - local_50) {
      uVar1 = lStack_48 - local_50;
    }
    FUN_1007ead98(local_50,lStack_48,param_2 - (uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU))
                  ,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebb90);
  (*pcVar2)();
}



/* Address: 0x1007ebb90 | FUN_1007ebb90 */

void FUN_1007ebb90(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  
  if (*unaff_x20 == 0) {
    return;
  }
  FUN_1007f9544(param_4);
  lVar2 = param_3 - param_1;
  if (param_3 < param_1) {
    lVar2 = param_1 - param_3;
    if (SBORROW8(param_1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebbe0);
      (*pcVar1)();
    }
  }
  else if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebc64);
    (*pcVar1)();
  }
  lVar3 = *unaff_x20;
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    FUN_1007ec8fc(lVar3 + 0x10,lVar3 + 0x20,param_2,lVar2,param_3,param_1);
    _swift_release(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ebc68);
  (*pcVar1)();
}



/* Address: 0x1007ebc68 | FUN_1007ebc68 */

void FUN_1007ebc68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1007eb31c(param_1,param_2,FUN_100004520,0,param_3,param_4,param_5);
  return;
}



/* Address: 0x1007ebc84 | FUN_1007ebc84 */

void FUN_1007ebc84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1007eb78c(param_1,param_2,FUN_100004520,0,param_3,param_4,param_5);
  return;
}



/* Address: 0x1007ebca0 | FUN_1007ebca0 */

void FUN_1007ebca0(ulong *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  __int64 _Var4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  byte bVar8;
  ulong uVar9;
  ContiguousArray CVar10;
  byte bVar11;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebe00);
    (*pcVar2)();
  }
  CVar10.unknown = *(undefined **)(unaff_x20 + 8);
  _Var4 = Swift::ContiguousArray::get_count(CVar10);
  if (_Var4 < (long)param_3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebe04);
    (*pcVar2)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebe08);
    (*pcVar2)();
  }
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *param_1;
    if ((long)uVar6 < 0) {
LAB_1007ebdf4:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebdf8);
      (*pcVar2)();
    }
    _Var4 = Swift::ContiguousArray::get_count(CVar10);
    if (_Var4 <= (long)uVar6) {
LAB_1007ebdf8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebdfc);
      (*pcVar2)();
    }
    uVar6 = (ulong)(uVar6 < param_3);
    lVar7 = param_2 + -1;
    if (lVar7 != 0) {
      bVar11 = 1;
      bVar8 = 1;
      puVar1 = param_1;
      do {
        uVar9 = puVar1[1];
        if ((long)uVar9 < 0) goto LAB_1007ebdf4;
        _Var4 = Swift::ContiguousArray::get_count(CVar10);
        if (_Var4 <= (long)uVar9) goto LAB_1007ebdf8;
        uVar5 = *puVar1;
        if (((long)uVar9 < (long)param_3) && (bVar3 = SCARRY8(uVar6,1), uVar6 = uVar6 + 1, bVar3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebda8);
          (*pcVar2)();
        }
        bVar11 = (long)uVar5 < (long)uVar9 & bVar11;
        bVar8 = (uVar9 == uVar5 + 1 && (long)uVar5 < (long)uVar9) & bVar8;
        lVar7 = lVar7 + -1;
        puVar1 = puVar1 + 1;
      } while (lVar7 != 0);
      goto LAB_1007ebdb4;
    }
  }
  bVar11 = 1;
  bVar8 = 1;
LAB_1007ebdb4:
  if (!SBORROW8(param_3,uVar6)) {
    FUN_1007ebe0c(param_1,param_2,bVar8,bVar11,param_3 - uVar6,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ebe0c);
  (*pcVar2)();
}



/* Address: 0x1007ebe0c | FUN_1007ebe0c */

/* WARNING: Removing unreachable block (ram,0x0001007ec000) */

void FUN_1007ebe0c(long *param_1,ulong param_2,uint param_3,ulong param_4,long param_5,long param_6,
                  undefined8 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  long local_c0 [6];
  long local_90;
  uint local_84;
  ulong local_80;
  undefined1 uStack_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((0 < (long)param_2) && (((param_3 & 1) == 0 || (*param_1 != param_5)))) {
    if ((param_4 & 1) == 0) {
      if (param_2 >> 0x3c != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec038);
        (*pcVar3)();
      }
      uVar6 = param_2 * 8;
      if (((long)uVar6 < 0x401) ||
         ((local_90 = param_8, local_84 = param_3, local_80 = param_2,
          bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
          (bVar4 & 1) != 0 &&
          (uVar5 = uVar6, _swift_stdlib_isStackAllocationSafe(uVar6,8), param_2 = local_80,
          param_8 = local_90, (uVar5 & 1) != 0)))) {
        lVar2 = -(uVar6 + 0xf & 0xfffffffffffffff0);
        uVar1 = *(undefined8 *)(param_8 + 0x18);
        *(undefined8 *)((long)local_c0 + lVar2 + 0x10) = *(undefined8 *)(param_8 + 0x10);
        *(undefined8 *)((long)local_c0 + lVar2 + 0x18) = uVar1;
        *(long *)((long)local_c0 + lVar2) = param_6;
        *(undefined8 *)((long)local_c0 + lVar2 + 8) = param_7;
        FUN_1007ec5bc(&uStack_69,(long)&local_90 + lVar2,param_2,param_1,param_2,param_2);
      }
      else {
        lVar2 = local_90;
        _swift_slowAlloc(uVar6,0xffffffffffffffff);
        local_c0[2] = *(undefined8 *)(lVar2 + 0x10);
        local_c0[3] = *(undefined8 *)(lVar2 + 0x18);
        local_c0[0] = param_6;
        local_c0[1] = param_7;
        FUN_1007ec5bc(&uStack_69);
        _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
      }
    }
    else {
      local_c0[4] = param_8;
      FUN_1007ec478(param_1,param_2,param_1,param_2,param_3 & 1,param_5,param_6,param_7);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1007ec03c | FUN_1007ec03c */

void FUN_1007ec03c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  __int8 _Var4;
  ulong uVar5;
  long unaff_x21;
  ulong uVar6;
  undefined8 local_c0 [6];
  undefined8 local_90;
  undefined1 uStack_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (0 < (long)param_2) {
    if (param_2 >> 0x3c != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec24c);
      (*pcVar2)();
    }
    uVar6 = param_2 * 8;
    if (((long)uVar6 < 0x401) ||
       ((bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
        (bVar3 & 1) != 0 &&
        (uVar5 = uVar6, _swift_stdlib_isStackAllocationSafe(uVar6,8), (uVar5 & 1) != 0)))) {
      lVar1 = -(uVar6 + 0xf & 0xfffffffffffffff0);
      *(undefined8 *)((long)local_c0 + lVar1 + 0x10) = param_9;
      *(undefined8 *)((long)local_c0 + lVar1 + 0x18) = param_10;
      *(undefined8 *)((long)local_c0 + lVar1) = param_7;
      *(undefined8 *)((long)local_c0 + lVar1 + 8) = param_8;
      FUN_1007ec250(&uStack_69,(long)&local_90 + lVar1,param_2,param_1,param_2,param_3,param_4,
                    param_5,param_6);
    }
    else {
      local_90 = param_7;
      _swift_slowAlloc(uVar6,0xffffffffffffffff);
      local_c0[2] = param_9;
      local_c0[3] = param_10;
      local_c0[0] = local_90;
      local_c0[1] = param_8;
      FUN_1007ec250(&uStack_69);
      _swift_slowDealloc(uVar6,0xffffffffffffffff,0xffffffffffffffff);
    }
    if (unaff_x21 != 0) {
      _Var4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      _swift_willThrowTypedImpl
                (_Var4,PTR___type_metadata_for_Swift_Never_100eadc38,
                 PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec248);
      (*pcVar2)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1007ec250 | FUN_1007ec250 */

void FUN_1007ec250(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 *param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  undefined8 local_c0;
  long local_a0;
  undefined4 local_84;
  
  lVar8 = *(long *)(param_9 + -8);
  lVar13 = (long)&local_c0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007ec474);
    (*pcVar9)();
  }
  if (param_4 == 0) {
    lVar14 = 0;
    local_a0 = 0;
    bVar12 = 1;
    local_84 = 1;
  }
  else {
    lVar14 = 0;
    lVar11 = *(long *)(lVar8 + 0x48);
    pcVar9 = *(code **)(lVar8 + 0x10);
    local_a0 = 0;
    bVar12 = 1;
    local_84 = 1;
    local_c0 = param_8;
    do {
      uVar6 = *param_5;
      uVar3 = param_5[1];
      (*pcVar9)(lVar13,param_3,param_9);
      _swift_retain(uVar6);
      _swift_retain(uVar3);
      lVar5 = lVar13;
      uVar7 = uVar6;
      FUN_1007f9250(lVar13,uVar6,uVar3,param_9,param_12);
      _swift_release(uVar3);
      _swift_release(uVar6);
      (**(code **)(lVar8 + 8))(lVar13,param_9);
      if (((uint)uVar7 & 0xff) != 1) {
        if (0 < lVar14) {
          lVar10 = *(long *)(param_1 + -8 + lVar14 * 8);
          bVar1 = lVar5 == lVar10 + 1 & bVar12;
          uVar2 = 0;
          if (lVar10 < lVar5) {
            uVar2 = local_84;
          }
          local_84 = uVar2;
          bVar12 = 0;
          if (lVar10 < lVar5) {
            bVar12 = bVar1;
          }
        }
        if ((lVar5 < param_6) && (bVar4 = SCARRY8(local_a0,1), local_a0 = local_a0 + 1, bVar4)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1007ec3e0);
          (*pcVar9)();
        }
        *(long *)(param_1 + lVar14 * 8) = lVar5;
        bVar4 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1007ec470);
          (*pcVar9)();
        }
      }
      param_3 = param_3 + lVar11;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    param_8 = local_c0;
    if (lVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1007ec3f4);
      (*pcVar9)();
    }
  }
  if (SBORROW8(param_6,local_a0)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007ec478);
    (*pcVar9)();
  }
  uVar6 = 0;
  FUN_1007fa688(0,param_9,param_12);
  FUN_1007ebe0c(param_1,lVar14,bVar12,local_84,param_6 - local_a0,param_7,param_8,uVar6);
  return;
}



/* Address: 0x1007ec478 | FUN_1007ec478 */

void FUN_1007ec478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  long param_9)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(param_9 + 0x10);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = *(long *)(unaff_x20 + 8);
  uVar3 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar4);
  uVar2 = uVar3;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_68 = uVar2;
  FUN_1007eb018(param_1,param_2,param_3,param_4,param_5,param_6,local_70,uVar2,uVar4,param_9,param_8
               );
  FUN_1007e37e8(&local_70,start,uVar3,unaff_x20 + 8,uVar4,PTR___type_metadata_for____100eae0c8 + 8,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  FUN_1007ec6dc(param_1,param_2,param_3,param_4,param_5,param_6,param_9);
  (*param_7)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1007ec5bc | FUN_1007ec5bc */

void FUN_1007ec5bc(long *param_1,undefined8 param_2,void *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,uint param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *local_70;
  undefined8 uStack_68;
  
  if (param_1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec6d8);
    (*pcVar2)();
  }
  if (param_3 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec6dc);
    (*pcVar2)();
  }
  _memcpy(param_1,param_3,param_5 << 3);
  local_70 = param_1;
  uStack_68 = param_2;
  FUN_1007ee490(&local_70);
  lVar4 = param_5 + -1;
  if (param_5 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec6d4);
    (*pcVar2)();
  }
  if (lVar4 != 0) {
    lVar5 = 0x7fffffffffffffff;
    plVar1 = param_1;
    do {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec6cc);
        (*pcVar2)();
      }
      if (plVar1[1] == *plVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ec6d0);
        (*pcVar2)();
      }
      lVar5 = lVar5 + -1;
      lVar4 = lVar4 + -1;
      plVar1 = plVar1 + 1;
    } while (lVar4 != 0);
  }
  uVar3 = 0;
  FUN_1007fa688(0,param_11,param_12);
  FUN_1007ec478(param_3,param_4,param_1,param_2,param_7 & 1,param_8,param_9,param_10,uVar3);
  return;
}



/* Address: 0x1007ec6dc | FUN_1007ec6dc */

void FUN_1007ec6dc(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,ulong param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar6 = *param_3;
  if ((param_5 & 1) != 0) {
    FUN_1007ebb90(lVar6,param_2,param_6,param_7);
    return;
  }
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    return;
  }
  if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8e4);
    (*pcVar3)();
  }
  lVar7 = param_6;
  if (lVar6 <= param_6) {
    lVar7 = lVar6;
  }
  if (!SCARRY8(param_6,param_2)) {
    lVar6 = param_6 + param_2 + -1;
    if (SBORROW8(param_6 + param_2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8ec);
      (*pcVar3)();
    }
    if (lVar6 <= param_3[param_2 + -1]) {
      lVar6 = param_3[param_2 + -1];
    }
    if (SBORROW8(lVar6,lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8f0);
      (*pcVar3)();
    }
    if (SCARRY8(lVar6 - lVar7,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8f4);
      (*pcVar3)();
    }
    uVar1 = *(undefined8 *)(param_7 + 0x10);
    uVar2 = *(undefined8 *)(param_7 + 0x18);
    FUN_1007f94cc(lVar5,unaff_x20[1],uVar1,uVar2);
    lVar5 = SUB168(SEXT816(lVar5) * SEXT816(0x5555555555555556),8);
    if (lVar5 - (lVar5 >> 0x3f) < (lVar6 - lVar7) + 1) {
      iVar4 = (int)*unaff_x20;
      _swift_isUniquelyReferenced_native();
      lVar6 = *unaff_x20;
      if (iVar4 == 0) {
        lVar7 = unaff_x20[1];
        lVar5 = lVar6;
        FUN_1007f9608(lVar6,lVar7,uVar1,uVar2);
        FUN_1007f964c(lVar6,lVar7,uVar1,uVar2);
        FUN_1007f9690(lVar5,lVar6,param_7);
        return;
      }
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8fc);
        (*pcVar3)();
      }
      _swift_retain(lVar6);
      FUN_1007edcfc(lVar6 + 0x10,lVar6 + 0x20);
    }
    else {
      FUN_1007f9544(param_7);
      lVar6 = *unaff_x20;
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8f8);
        (*pcVar3)();
      }
      _swift_retain(lVar6);
      FUN_1007ed3d0(lVar6 + 0x10,lVar6 + 0x20,param_2,param_1,param_2,param_6);
    }
    _swift_release(lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ec8e8);
  (*pcVar3)();
}



/* Address: 0x1007ec8fc | FUN_1007ec8fc */

/* WARNING: Removing unreachable block (ram,0x0001007ecce8) */
/* WARNING: Removing unreachable block (ram,0x0001007eccf0) */

void FUN_1007ec8fc(ulong *param_1,ulong param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong *puVar20;
  ulong uVar21;
  String SVar22;
  undefined8 uStack_f0;
  undefined4 auStack_e8 [2];
  undefined1 auStack_e0 [8];
  
  lVar4 = *(long *)(param_8 + -8);
  lVar8 = -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = auStack_e0 + lVar8;
  if ((*param_1 & 0x3f) < 5) {
    if ((param_3 < 6) && (param_4 < 6)) goto LAB_1007ec9c4;
  }
  else {
    lVar5 = 1L << (*param_1 & 0x3f);
    uVar6 = lVar5 * 3;
    if (SUB168(SEXT816(lVar5) * SEXT816(3),8) != (long)uVar6 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed360);
      (*pcVar3)();
    }
    uVar6 = uVar6 / 0xc;
    if (param_3 <= (long)uVar6 && param_4 <= (long)uVar6) {
LAB_1007ec9c4:
      if (param_6 <= param_5) {
        if (param_6 != param_5) {
          if (param_5 <= param_6) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ecd40);
            (*pcVar3)();
          }
          do {
            Swift::ContiguousArray::get_subscript
                      (param_6,(ContiguousArray)*(undefined **)(param_7 + 8));
            uVar6 = Swift::Hashable::_rawHashValue(*param_1);
            lVar5 = 1L << (*param_1 & 0x3f);
            if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed328);
              (*pcVar3)();
            }
            uVar6 = lVar5 - 1U & uVar6;
            uVar13 = uVar6;
            puVar20 = param_1;
            uVar10 = param_2;
            FUN_1007d7748();
            (**(code **)(lVar4 + 8))(puVar19,param_8);
            if (SCARRY8(param_6,param_3)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed32c);
              (*pcVar3)();
            }
            if (uVar13 != 0) {
              uVar11 = 1L << (*param_1 & 0x3f);
              uVar12 = uVar11 - 1;
              uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
              uVar21 = 0;
              if (uVar12 <= uVar13) {
                uVar21 = uVar12;
              }
              if (uVar13 - uVar21 != param_6 + param_3) {
                bVar2 = false;
                uVar13 = *param_1 & 0x3f;
                lVar9 = uVar13 << uVar13;
                lVar5 = lVar9 + 0x7e;
                if (0 < lVar9 + 0x40) {
                  lVar5 = lVar9 + 0x3f;
                }
                do {
                  uVar6 = uVar6 + 1;
                  if (uVar6 == uVar11) {
                    if (bVar2) goto LAB_1007ed37c;
                    uVar6 = 0;
                    bVar2 = true;
                  }
                  if ((long)uVar10 < (long)uVar13) {
                    lVar14 = (long)(uVar6 * uVar13) >> 6;
                    lVar7 = lVar14;
                    if (uVar10 != 0) {
                      if (SCARRY8(lVar9,0x40)) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed314);
                        (*pcVar3)();
                      }
                      lVar7 = 0;
                      if (lVar14 + 1 != lVar5 >> 6) {
                        lVar7 = lVar14 + 1;
                      }
                    }
                    uVar1 = uVar13 - uVar10;
                    if (SBORROW8(uVar13,uVar10)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2e8);
                      (*pcVar3)();
                    }
                    lVar14 = 0x20;
                    if (lVar7 != 2 || uVar13 != 5) {
                      lVar14 = 0x40;
                    }
                    uVar21 = lVar14 - uVar1;
                    if (SBORROW8(lVar14,uVar1)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2ec);
                      (*pcVar3)();
                    }
                    uVar16 = *(ulong *)(param_2 + lVar7 * 8);
                    puVar20 = (ulong *)(uVar16 << (uVar10 & 0x3f) | (ulong)puVar20);
                    puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
                  }
                  else {
                    uVar21 = uVar10 - uVar13;
                    if (SBORROW8(uVar10,uVar13)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2e4);
                      (*pcVar3)();
                    }
                    puVar17 = (ulong *)((ulong)puVar20 >> uVar13);
                  }
                  if (((ulong)puVar20 & uVar12) == 0) break;
                  uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar20 & uVar12 ^ uVar12);
                  uVar16 = 0;
                  if (uVar12 <= uVar1) {
                    uVar16 = uVar12;
                  }
                  puVar20 = puVar17;
                  uVar10 = uVar21;
                } while (uVar1 - uVar16 != param_6 + param_3);
              }
            }
            lVar5 = param_6 + 1;
            FUN_1007d7a1c(param_6,0);
            param_6 = lVar5;
          } while (lVar5 != param_5);
        }
        lVar5 = param_5 + param_3;
        if (SCARRY8(param_5,param_3)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed36c);
          (*pcVar3)();
        }
        if (lVar5 < param_5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed370);
          (*pcVar3)();
        }
        if (param_5 == lVar5) {
          return;
        }
        if (lVar5 <= param_5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed108);
          (*pcVar3)();
        }
        do {
          Swift::ContiguousArray::get_subscript
                    (param_5,(ContiguousArray)*(undefined **)(param_7 + 8));
          uVar6 = Swift::Hashable::_rawHashValue(*param_1);
          lVar9 = 1L << (*param_1 & 0x3f);
          if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed338);
            (*pcVar3)();
          }
          uVar6 = lVar9 - 1U & uVar6;
          uVar13 = uVar6;
          puVar20 = param_1;
          uVar10 = param_2;
          FUN_1007d7748();
          (**(code **)(lVar4 + 8))(puVar19,param_8);
          if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed33c);
            (*pcVar3)();
          }
          if (uVar13 != 0) {
            uVar11 = 1L << (*param_1 & 0x3f);
            uVar12 = uVar11 - 1;
            uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
            uVar21 = 0;
            if (uVar12 <= uVar13) {
              uVar21 = uVar12;
            }
            if (uVar13 - uVar21 != param_5 - param_4) {
              bVar2 = false;
              uVar13 = *param_1 & 0x3f;
              lVar7 = uVar13 << uVar13;
              lVar9 = lVar7 + 0x7e;
              if (0 < lVar7 + 0x40) {
                lVar9 = lVar7 + 0x3f;
              }
              do {
                uVar6 = uVar6 + 1;
                if (uVar6 == uVar11) {
                  if (bVar2) goto LAB_1007ed37c;
                  uVar6 = 0;
                  bVar2 = true;
                }
                if ((long)uVar10 < (long)uVar13) {
                  lVar18 = (long)(uVar6 * uVar13) >> 6;
                  lVar14 = lVar18;
                  if (uVar10 != 0) {
                    if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed31c);
                      (*pcVar3)();
                    }
                    lVar14 = 0;
                    if (lVar18 + 1 != lVar9 >> 6) {
                      lVar14 = lVar18 + 1;
                    }
                  }
                  uVar1 = uVar13 - uVar10;
                  if (SBORROW8(uVar13,uVar10)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed300);
                    (*pcVar3)();
                  }
                  lVar18 = 0x20;
                  if (lVar14 != 2 || uVar13 != 5) {
                    lVar18 = 0x40;
                  }
                  uVar21 = lVar18 - uVar1;
                  if (SBORROW8(lVar18,uVar1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed304);
                    (*pcVar3)();
                  }
                  uVar16 = *(ulong *)(param_2 + lVar14 * 8);
                  puVar20 = (ulong *)(uVar16 << (uVar10 & 0x3f) | (ulong)puVar20);
                  puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
                }
                else {
                  uVar21 = uVar10 - uVar13;
                  if (SBORROW8(uVar10,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2fc);
                    (*pcVar3)();
                  }
                  puVar17 = (ulong *)((ulong)puVar20 >> uVar13);
                }
                if (((ulong)puVar20 & uVar12) == 0) break;
                uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar20 & uVar12 ^ uVar12);
                uVar16 = 0;
                if (uVar12 <= uVar1) {
                  uVar16 = uVar12;
                }
                puVar20 = puVar17;
                uVar10 = uVar21;
              } while (uVar1 - uVar16 != param_5 - param_4);
            }
          }
          lVar9 = param_5 + 1;
          FUN_1007d7a1c(param_5,0);
          param_5 = lVar9;
          if (lVar9 == lVar5) {
            return;
          }
        } while( true );
      }
      lVar5 = param_5 + param_3;
      if (SCARRY8(param_5,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed364);
        (*pcVar3)();
      }
      if (lVar5 < param_5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed368);
        (*pcVar3)();
      }
      if (param_5 != lVar5) {
        if (lVar5 <= param_5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed37c);
          (*pcVar3)();
        }
        do {
          Swift::ContiguousArray::get_subscript
                    (param_5,(ContiguousArray)*(undefined **)(param_7 + 8));
          uVar6 = Swift::Hashable::_rawHashValue(*param_1);
          lVar9 = 1L << (*param_1 & 0x3f);
          if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed330);
            (*pcVar3)();
          }
          uVar6 = lVar9 - 1U & uVar6;
          uVar13 = uVar6;
          puVar20 = param_1;
          uVar10 = param_2;
          FUN_1007d7748();
          (**(code **)(lVar4 + 8))(puVar19,param_8);
          if (SCARRY8(param_5,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed334);
            (*pcVar3)();
          }
          if (uVar13 != 0) {
            uVar11 = 1L << (*param_1 & 0x3f);
            uVar12 = uVar11 - 1;
            uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
            uVar21 = 0;
            if (uVar12 <= uVar13) {
              uVar21 = uVar12;
            }
            if (uVar13 - uVar21 != param_5 + param_4) {
              bVar2 = false;
              uVar13 = *param_1 & 0x3f;
              lVar7 = uVar13 << uVar13;
              lVar9 = lVar7 + 0x7e;
              if (0 < lVar7 + 0x40) {
                lVar9 = lVar7 + 0x3f;
              }
              do {
                uVar6 = uVar6 + 1;
                if (uVar6 == uVar11) {
                  if (bVar2) goto LAB_1007ed37c;
                  uVar6 = 0;
                  bVar2 = true;
                }
                if ((long)uVar10 < (long)uVar13) {
                  lVar18 = (long)(uVar6 * uVar13) >> 6;
                  lVar14 = lVar18;
                  if (uVar10 != 0) {
                    if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed318);
                      (*pcVar3)();
                    }
                    lVar14 = 0;
                    if (lVar18 + 1 != lVar9 >> 6) {
                      lVar14 = lVar18 + 1;
                    }
                  }
                  uVar1 = uVar13 - uVar10;
                  if (SBORROW8(uVar13,uVar10)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2f4);
                    (*pcVar3)();
                  }
                  lVar18 = 0x20;
                  if (lVar14 != 2 || uVar13 != 5) {
                    lVar18 = 0x40;
                  }
                  uVar21 = lVar18 - uVar1;
                  if (SBORROW8(lVar18,uVar1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2f8);
                    (*pcVar3)();
                  }
                  uVar16 = *(ulong *)(param_2 + lVar14 * 8);
                  puVar20 = (ulong *)(uVar16 << (uVar10 & 0x3f) | (ulong)puVar20);
                  puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
                }
                else {
                  uVar21 = uVar10 - uVar13;
                  if (SBORROW8(uVar10,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed2f0);
                    (*pcVar3)();
                  }
                  puVar17 = (ulong *)((ulong)puVar20 >> uVar13);
                }
                if (((ulong)puVar20 & uVar12) == 0) break;
                uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar20 & uVar12 ^ uVar12);
                uVar16 = 0;
                if (uVar12 <= uVar1) {
                  uVar16 = uVar12;
                }
                puVar20 = puVar17;
                uVar10 = uVar21;
              } while (uVar1 - uVar16 != param_5 + param_4);
            }
          }
          lVar9 = param_5 + 1;
          FUN_1007d7a1c(param_5,0);
          param_5 = lVar9;
        } while (lVar9 != lVar5);
      }
      lVar9 = param_6 + param_3;
      if (SCARRY8(param_6,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed374);
        (*pcVar3)();
      }
      if (lVar9 < lVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed378);
        (*pcVar3)();
      }
      if (lVar5 == lVar9) {
        return;
      }
      if (lVar9 <= lVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007eca14);
        (*pcVar3)();
      }
      do {
        Swift::ContiguousArray::get_subscript(lVar5,(ContiguousArray)*(undefined **)(param_7 + 8));
        uVar6 = Swift::Hashable::_rawHashValue(*param_1);
        lVar7 = 1L << (*param_1 & 0x3f);
        if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed340);
          (*pcVar3)();
        }
        uVar6 = lVar7 - 1U & uVar6;
        uVar13 = uVar6;
        puVar20 = param_1;
        uVar10 = param_2;
        FUN_1007d7748();
        (**(code **)(lVar4 + 8))(puVar19,param_8);
        if (SBORROW8(lVar5,param_3)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed344);
          (*pcVar3)();
        }
        if (uVar13 != 0) {
          uVar11 = 1L << (*param_1 & 0x3f);
          uVar12 = uVar11 - 1;
          uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
          uVar21 = 0;
          if (uVar12 <= uVar13) {
            uVar21 = uVar12;
          }
          if (uVar13 - uVar21 != lVar5 - param_3) {
            bVar2 = false;
            uVar13 = *param_1 & 0x3f;
            lVar14 = uVar13 << uVar13;
            lVar7 = lVar14 + 0x7e;
            if (0 < lVar14 + 0x40) {
              lVar7 = lVar14 + 0x3f;
            }
            do {
              uVar6 = uVar6 + 1;
              if (uVar6 == uVar11) {
                if (bVar2) {
LAB_1007ed37c:
                  *(undefined4 *)((long)auStack_e8 + lVar8) = 0;
                  *(undefined8 *)((long)&uStack_f0 + lVar8) = 0xd7;
                  SVar22.bridgeObject = (void *)0x2;
                  SVar22.str = (char *)0xb;
                  Swift::_assertionFailure
                            ((StaticString)0x100d8deb0,SVar22,(StaticString)0xd000000000000024,
                             0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed3d0);
                  (*pcVar3)();
                }
                uVar6 = 0;
                bVar2 = true;
              }
              if ((long)uVar10 < (long)uVar13) {
                lVar15 = (long)(uVar6 * uVar13) >> 6;
                lVar18 = lVar15;
                if (uVar10 != 0) {
                  if (SCARRY8(lVar14,0x40)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed324);
                    (*pcVar3)();
                  }
                  lVar18 = 0;
                  if (lVar15 + 1 != lVar7 >> 6) {
                    lVar18 = lVar15 + 1;
                  }
                }
                uVar1 = uVar13 - uVar10;
                if (SBORROW8(uVar13,uVar10)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed30c);
                  (*pcVar3)();
                }
                lVar15 = 0x20;
                if (lVar18 != 2 || uVar13 != 5) {
                  lVar15 = 0x40;
                }
                uVar21 = lVar15 - uVar1;
                if (SBORROW8(lVar15,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed310);
                  (*pcVar3)();
                }
                uVar16 = *(ulong *)(param_2 + lVar18 * 8);
                puVar20 = (ulong *)(uVar16 << (uVar10 & 0x3f) | (ulong)puVar20);
                puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
              }
              else {
                uVar21 = uVar10 - uVar13;
                if (SBORROW8(uVar10,uVar13)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed308);
                  (*pcVar3)();
                }
                puVar17 = (ulong *)((ulong)puVar20 >> uVar13);
              }
              if (((ulong)puVar20 & uVar12) == 0) break;
              uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar20 & uVar12 ^ uVar12);
              uVar16 = 0;
              if (uVar12 <= uVar1) {
                uVar16 = uVar12;
              }
              puVar20 = puVar17;
              uVar10 = uVar21;
            } while (uVar1 - uVar16 != lVar5 - param_3);
          }
        }
        lVar7 = lVar5 + 1;
        FUN_1007d7a1c(lVar5,0);
        lVar5 = lVar7;
        if (lVar7 == lVar9) {
          return;
        }
      } while( true );
    }
  }
  uVar6 = 0;
  FUN_1007d7748();
  if (uVar6 == 0) goto LAB_1007eccd8;
  uVar10 = -1L << (*param_1 & 0x3f);
  uVar6 = (uVar10 ^ uVar6 ^ 0xffffffffffffffff) + ((long)param_1[1] >> 6);
  uVar13 = 0;
  if (~uVar10 <= uVar6) {
    uVar13 = ~uVar10;
  }
  lVar8 = uVar6 - uVar13;
  if (lVar8 < param_6) {
    if (lVar8 < param_5) {
      if (param_5 <= param_6) goto LAB_1007eccd8;
      if (SCARRY8(param_6,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed34c);
        (*pcVar3)();
      }
      if (lVar8 < param_6 + param_3) goto LAB_1007eccd8;
LAB_1007ecca8:
      if (SCARRY8(param_5,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed350);
        (*pcVar3)();
      }
      if (param_5 + param_3 <= lVar8) goto LAB_1007eccd8;
      lVar4 = lVar8 - param_3;
      if (SBORROW8(lVar8,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed35c);
        (*pcVar3)();
      }
    }
    else {
      lVar4 = lVar8 + param_3;
      if (SCARRY8(lVar8,param_3)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed348);
        (*pcVar3)();
      }
    }
  }
  else {
    if (SCARRY8(param_6,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed320);
      (*pcVar3)();
    }
    if (param_6 + param_3 <= lVar8) {
      if (param_5 <= param_6) goto LAB_1007eccd8;
      goto LAB_1007ecca8;
    }
    if (param_5 < param_6) {
      lVar4 = lVar8 - param_4;
      if (SBORROW8(lVar8,param_4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed358);
        (*pcVar3)();
      }
    }
    else {
      lVar4 = lVar8 + param_4;
      if (SCARRY8(lVar8,param_4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed354);
        (*pcVar3)();
      }
    }
  }
  FUN_1007d7a1c(lVar4,0);
LAB_1007eccd8:
  FUN_1007d7b60();
  return;
}



/* Address: 0x1007ed3d0 | FUN_1007ed3d0 */

void FUN_1007ed3d0(ulong *param_1,ulong param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11,
                  long param_12)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  String SVar23;
  undefined8 uStack_110;
  undefined4 auStack_108 [2];
  undefined1 auStack_100 [8];
  
  lVar7 = *(long *)(param_12 + -8);
  lVar2 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = auStack_100 + lVar2;
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc30);
    (*pcVar3)();
  }
  if (param_3 != 0) {
    lVar21 = 0;
    do {
      lVar9 = param_6 + lVar21;
      if (SCARRY8(param_6,lVar21)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbe0);
        (*pcVar3)();
      }
      lVar22 = *(long *)(param_4 + lVar21 * 8);
      if (lVar22 != lVar9) {
        Swift::ContiguousArray::get_subscript(lVar9,(ContiguousArray)*(undefined **)(param_7 + 8));
        uVar5 = Swift::Hashable::_rawHashValue(*param_1);
        lVar8 = 1L << (*param_1 & 0x3f);
        if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbf8);
          (*pcVar3)();
        }
        uVar5 = lVar8 - 1U & uVar5;
        uVar13 = uVar5;
        puVar18 = param_1;
        uVar6 = param_2;
        FUN_1007d7748();
        (**(code **)(lVar7 + 8))(puVar19,param_12);
        if (uVar13 != 0) {
          uVar11 = 1L << (*param_1 & 0x3f);
          uVar12 = uVar11 - 1;
          uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
          uVar20 = 0;
          if (uVar12 <= uVar13) {
            uVar20 = uVar12;
          }
          if (uVar13 - uVar20 != lVar22) {
            bVar4 = false;
            uVar13 = *param_1 & 0x3f;
            lVar14 = uVar13 << uVar13;
            lVar8 = lVar14 + 0x7e;
            if (0 < lVar14 + 0x40) {
              lVar8 = lVar14 + 0x3f;
            }
            do {
              uVar5 = uVar5 + 1;
              if (uVar5 == uVar11) {
                if (bVar4) goto LAB_1007edc44;
                uVar5 = 0;
                bVar4 = true;
              }
              if ((long)uVar6 < (long)uVar13) {
                lVar15 = (long)(uVar5 * uVar13) >> 6;
                lVar10 = lVar15;
                if (uVar6 != 0) {
                  if (SCARRY8(lVar14,0x40)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbe4);
                    (*pcVar3)();
                  }
                  lVar10 = 0;
                  if (lVar15 + 1 != lVar8 >> 6) {
                    lVar10 = lVar15 + 1;
                  }
                }
                uVar1 = uVar13 - uVar6;
                if (SBORROW8(uVar13,uVar6)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbd8);
                  (*pcVar3)();
                }
                lVar15 = 0x20;
                if (lVar10 != 2 || uVar13 != 5) {
                  lVar15 = 0x40;
                }
                uVar20 = lVar15 - uVar1;
                if (SBORROW8(lVar15,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbdc);
                  (*pcVar3)();
                }
                uVar16 = *(ulong *)(param_2 + lVar10 * 8);
                puVar18 = (ulong *)(uVar16 << (uVar6 & 0x3f) | (ulong)puVar18);
                puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
              }
              else {
                uVar20 = uVar6 - uVar13;
                if (SBORROW8(uVar6,uVar13)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbd4);
                  (*pcVar3)();
                }
                puVar17 = (ulong *)((ulong)puVar18 >> uVar13);
              }
              if (((ulong)puVar18 & uVar12) == 0) break;
              uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar18 & uVar12 ^ uVar12);
              uVar16 = 0;
              if (uVar12 <= uVar1) {
                uVar16 = uVar12;
              }
              puVar18 = puVar17;
              uVar6 = uVar20;
            } while (uVar1 - uVar16 != lVar22);
          }
        }
        FUN_1007d7a1c(lVar9,0);
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 != param_3);
  }
  if (param_8 < param_6) {
    if (param_10 < 1) {
      lVar21 = 0;
    }
    else {
      lVar21 = 0;
      lVar9 = param_10;
      do {
        if (SBORROW8(lVar9,lVar21)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbfc);
          (*pcVar3)();
        }
        lVar22 = (lVar9 - lVar21) / 2;
        lVar8 = lVar21 + lVar22;
        if (SCARRY8(lVar21,lVar22)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc00);
          (*pcVar3)();
        }
        lVar22 = lVar8;
        if ((*(long *)(param_9 + lVar8 * 8) < param_8) &&
           (lVar21 = lVar8 + 1, lVar22 = lVar9, SCARRY8(lVar8,1))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed6a0);
          (*pcVar3)();
        }
        lVar9 = lVar22;
      } while (lVar21 < lVar9);
    }
    lVar9 = param_8 + lVar21;
    if (SCARRY8(param_8,lVar21)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc38);
      (*pcVar3)();
    }
    lVar21 = lVar9 - param_8;
    if (SBORROW8(lVar9,param_8)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc3c);
      (*pcVar3)();
    }
    for (; param_8 != param_6; param_8 = param_8 + 1) {
      if (param_6 <= param_8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc1c);
        (*pcVar3)();
      }
      lVar22 = lVar21;
      lVar8 = lVar9;
      if (lVar21 < param_3) {
        lVar14 = (param_3 + lVar9) - lVar21;
        do {
          lVar22 = lVar21;
          lVar8 = lVar9;
          if (lVar9 < *(long *)(param_9 + lVar21 * 8)) break;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbd0);
            (*pcVar3)();
          }
          lVar21 = lVar21 + 1;
          lVar9 = lVar9 + 1;
          lVar22 = param_3;
          lVar8 = lVar14;
        } while (param_3 != lVar21);
      }
      if (lVar8 != param_8) {
        Swift::ContiguousArray::get_subscript(param_8,(ContiguousArray)*(undefined **)(param_7 + 8))
        ;
        uVar5 = Swift::Hashable::_rawHashValue(*param_1);
        lVar21 = 1L << (*param_1 & 0x3f);
        if (SBORROW8(lVar21,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc2c);
          (*pcVar3)();
        }
        uVar5 = lVar21 - 1U & uVar5;
        uVar13 = uVar5;
        puVar18 = param_1;
        uVar6 = param_2;
        FUN_1007d7748();
        (**(code **)(lVar7 + 8))(puVar19,param_12);
        if (uVar13 != 0) {
          uVar11 = 1L << (*param_1 & 0x3f);
          uVar12 = uVar11 - 1;
          uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
          uVar20 = 0;
          if (uVar12 <= uVar13) {
            uVar20 = uVar12;
          }
          if (uVar13 - uVar20 != lVar8) {
            bVar4 = false;
            uVar13 = *param_1 & 0x3f;
            lVar9 = uVar13 << uVar13;
            lVar21 = lVar9 + 0x7e;
            if (0 < lVar9 + 0x40) {
              lVar21 = lVar9 + 0x3f;
            }
            do {
              uVar5 = uVar5 + 1;
              if (uVar5 == uVar11) {
                if (bVar4) goto LAB_1007edc44;
                uVar5 = 0;
                bVar4 = true;
              }
              if ((long)uVar6 < (long)uVar13) {
                lVar10 = (long)(uVar5 * uVar13) >> 6;
                lVar14 = lVar10;
                if (uVar6 != 0) {
                  if (SCARRY8(lVar9,0x40)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc28);
                    (*pcVar3)();
                  }
                  lVar14 = 0;
                  if (lVar10 + 1 != lVar21 >> 6) {
                    lVar14 = lVar10 + 1;
                  }
                }
                uVar1 = uVar13 - uVar6;
                if (SBORROW8(uVar13,uVar6)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc14);
                  (*pcVar3)();
                }
                lVar10 = 0x20;
                if (lVar14 != 2 || uVar13 != 5) {
                  lVar10 = 0x40;
                }
                uVar20 = lVar10 - uVar1;
                if (SBORROW8(lVar10,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc18);
                  (*pcVar3)();
                }
                uVar16 = *(ulong *)(param_2 + lVar14 * 8);
                puVar18 = (ulong *)(uVar16 << (uVar6 & 0x3f) | (ulong)puVar18);
                puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
              }
              else {
                uVar20 = uVar6 - uVar13;
                if (SBORROW8(uVar6,uVar13)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc10);
                  (*pcVar3)();
                }
                puVar17 = (ulong *)((ulong)puVar18 >> uVar13);
              }
              if (((ulong)puVar18 & uVar12) == 0) break;
              uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar18 & uVar12 ^ uVar12);
              uVar16 = 0;
              if (uVar12 <= uVar1) {
                uVar16 = uVar12;
              }
              uVar6 = uVar20;
              puVar18 = puVar17;
            } while (uVar1 - uVar16 != lVar8);
          }
        }
        FUN_1007d7a1c(param_8,0);
      }
      lVar9 = lVar8 + 1;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc20);
        (*pcVar3)();
      }
      lVar21 = lVar22;
    }
  }
  lVar21 = param_6 + param_3;
  if (SCARRY8(param_6,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc34);
    (*pcVar3)();
  }
  if (param_11 < lVar21) {
    return;
  }
  if (param_10 < 1) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      if (SBORROW8(param_10,lVar9)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc08);
        (*pcVar3)();
      }
      lVar22 = (param_10 - lVar9) / 2;
      lVar8 = lVar9 + lVar22;
      if (SCARRY8(lVar9,lVar22)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc0c);
        (*pcVar3)();
      }
      lVar22 = lVar8;
      if ((*(long *)(param_9 + lVar8 * 8) < param_6) &&
         (lVar9 = lVar8 + 1, lVar22 = param_10, SCARRY8(lVar8,1))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007ed970);
        (*pcVar3)();
      }
      param_10 = lVar22;
    } while (lVar9 < lVar22);
  }
  lVar22 = param_6 + lVar9;
  if (SCARRY8(param_6,lVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc40);
    (*pcVar3)();
  }
  lVar9 = lVar22 - param_6;
  if (SBORROW8(lVar22,param_6)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc44);
    (*pcVar3)();
  }
  do {
    lVar8 = lVar9;
    lVar14 = lVar22;
    if (lVar9 < param_3) {
      lVar10 = (param_3 + lVar22) - lVar9;
      do {
        lVar8 = lVar9;
        lVar14 = lVar22;
        if (lVar22 < *(long *)(param_9 + lVar9 * 8)) break;
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbcc);
          (*pcVar3)();
        }
        lVar9 = lVar9 + 1;
        lVar22 = lVar22 + 1;
        lVar8 = param_3;
        lVar14 = lVar10;
      } while (param_3 != lVar9);
    }
    if (lVar14 != lVar21) {
      Swift::ContiguousArray::get_subscript(lVar21,(ContiguousArray)*(undefined **)(param_7 + 8));
      uVar5 = Swift::Hashable::_rawHashValue(*param_1);
      lVar9 = 1L << (*param_1 & 0x3f);
      if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc24);
        (*pcVar3)();
      }
      uVar5 = lVar9 - 1U & uVar5;
      uVar13 = uVar5;
      puVar18 = param_1;
      uVar6 = param_2;
      FUN_1007d7748();
      (**(code **)(lVar7 + 8))(puVar19,param_12);
      if (uVar13 != 0) {
        uVar11 = 1L << (*param_1 & 0x3f);
        uVar12 = uVar11 - 1;
        uVar13 = ((long)param_1[1] >> 6) + (uVar13 ^ uVar12);
        uVar20 = 0;
        if (uVar12 <= uVar13) {
          uVar20 = uVar12;
        }
        if (uVar13 - uVar20 != lVar14) {
          bVar4 = false;
          uVar13 = *param_1 & 0x3f;
          lVar22 = uVar13 << uVar13;
          lVar9 = lVar22 + 0x7e;
          if (0 < lVar22 + 0x40) {
            lVar9 = lVar22 + 0x3f;
          }
          do {
            uVar5 = uVar5 + 1;
            if (uVar5 == uVar11) {
              if (bVar4) {
LAB_1007edc44:
                *(undefined4 *)((long)auStack_108 + lVar2) = 0;
                *(undefined8 *)((long)&uStack_110 + lVar2) = 0xd7;
                SVar23.bridgeObject = (void *)0x2;
                SVar23.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar23,(StaticString)0xd000000000000024,
                           0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc98);
                (*pcVar3)();
              }
              uVar5 = 0;
              bVar4 = true;
            }
            if ((long)uVar6 < (long)uVar13) {
              lVar15 = (long)(uVar5 * uVar13) >> 6;
              lVar10 = lVar15;
              if (uVar6 != 0) {
                if (SCARRY8(lVar22,0x40)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edc04);
                  (*pcVar3)();
                }
                lVar10 = 0;
                if (lVar15 + 1 != lVar9 >> 6) {
                  lVar10 = lVar15 + 1;
                }
              }
              uVar1 = uVar13 - uVar6;
              if (SBORROW8(uVar13,uVar6)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbec);
                (*pcVar3)();
              }
              lVar15 = 0x20;
              if (lVar10 != 2 || uVar13 != 5) {
                lVar15 = 0x40;
              }
              uVar20 = lVar15 - uVar1;
              if (SBORROW8(lVar15,uVar1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbf0);
                (*pcVar3)();
              }
              uVar16 = *(ulong *)(param_2 + lVar10 * 8);
              puVar18 = (ulong *)(uVar16 << (uVar6 & 0x3f) | (ulong)puVar18);
              puVar17 = (ulong *)(uVar16 >> (uVar1 & 0x3f));
            }
            else {
              uVar20 = uVar6 - uVar13;
              if (SBORROW8(uVar6,uVar13)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbe8);
                (*pcVar3)();
              }
              puVar17 = (ulong *)((ulong)puVar18 >> uVar13);
            }
            if (((ulong)puVar18 & uVar12) == 0) break;
            uVar1 = ((long)param_1[1] >> 6) + ((ulong)puVar18 & uVar12 ^ uVar12);
            uVar16 = 0;
            if (uVar12 <= uVar1) {
              uVar16 = uVar12;
            }
            uVar6 = uVar20;
            puVar18 = puVar17;
          } while (uVar1 - uVar16 != lVar14);
        }
      }
      FUN_1007d7a1c(lVar21,0);
    }
    lVar22 = lVar14 + 1;
    if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbf4);
      (*pcVar3)();
    }
    if (lVar21 == param_11) {
      return;
    }
    bVar4 = SCARRY8(lVar21,1);
    lVar21 = lVar21 + 1;
    lVar9 = lVar8;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edbc8);
      (*pcVar3)();
    }
  } while( true );
}



/* Address: 0x1007edc98 | FUN_1007edc98 */

long FUN_1007edc98(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  
  if (param_3 < 1) {
    return 0;
  }
  lVar4 = 0;
  while( true ) {
    if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edcf8);
      (*pcVar3)();
    }
    lVar1 = (param_3 - lVar4) / 2;
    lVar2 = lVar4 + lVar1;
    if (SCARRY8(lVar4,lVar1)) break;
    lVar1 = lVar2;
    if ((*(long *)(param_2 + lVar2 * 8) < param_1) &&
       (lVar4 = lVar2 + 1, lVar1 = param_3, SCARRY8(lVar2,1))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edce4);
      (*pcVar3)();
    }
    param_3 = lVar1;
    if (param_3 <= lVar4) {
      return lVar4;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007edcfc);
  (*pcVar3)();
}



/* Address: 0x1007edcfc | FUN_1007edcfc */

void FUN_1007edcfc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_48;
  
  FUN_1007db4c0();
  local_48 = *(undefined8 *)(param_3 + 8);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  FUN_1007db514(&local_48,param_1,param_2,CVar1.unknown,puVar2,param_5);
  return;
}



/* Address: 0x1007edd90 | FUN_1007edd90 */

void FUN_1007edd90(long *param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = param_1;
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007edde8);
    (*pcVar2)();
  }
  while( true ) {
    if (param_3 == 0) {
      FUN_1007edde8(param_1,param_2,param_9,param_7,param_5,param_10);
      return;
    }
    if (SBORROW8(*param_4,param_6)) break;
    *plVar1 = *param_4 - param_6;
    param_3 = param_3 + -1;
    plVar1 = plVar1 + 1;
    param_4 = param_4 + 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007edde4);
  (*pcVar2)();
}



/* Address: 0x1007edde8 | FUN_1007edde8 */

void FUN_1007edde8(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  long local_70;
  long local_68;
  
  lVar8 = *(long *)(param_6 + -8);
  puVar6 = auStack_80 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_6;
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007edf2c);
    (*pcVar4)();
  }
  if (param_2 != 0) {
    lVar9 = 0;
    local_78 = puVar6;
    local_70 = param_2;
    do {
      if (*(long *)(param_1 + lVar9 * 8) != lVar9) {
        if (SCARRY8(param_3,lVar9)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007edf28);
          (*pcVar4)();
        }
        lVar10 = *(long *)(lVar8 + 0x48);
        (**(code **)(lVar8 + 0x10))(puVar6,param_4 + lVar10 * (param_3 + lVar9),local_68);
        lVar3 = *(long *)(param_1 + lVar9 * 8);
        lVar5 = lVar9;
        do {
          lVar2 = lVar3;
          if (SCARRY8(param_3,lVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007edf20);
            (*pcVar4)();
          }
          if (SCARRY8(param_3,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007edf24);
            (*pcVar4)();
          }
          lVar7 = param_4 + (param_3 + lVar2) * lVar10;
          pcVar4 = *(code **)(lVar8 + 0x18);
          (*pcVar4)(param_4 + (param_3 + lVar5) * lVar10,lVar7,local_68);
          lVar1 = local_68;
          puVar6 = local_78;
          *(long *)(param_1 + lVar5 * 8) = lVar5;
          lVar3 = *(long *)(param_1 + lVar2 * 8);
          lVar5 = lVar2;
        } while (lVar3 != lVar9);
        (*pcVar4)(lVar7,local_78,local_68);
        *(long *)(param_1 + lVar2 * 8) = lVar2;
        (**(code **)(lVar8 + 8))(puVar6,lVar1);
        param_2 = local_70;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != param_2);
  }
  return;
}



/* Address: 0x1007edf2c | FUN_1007edf2c */

void FUN_1007edf2c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  __int8 _Var4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_d0 [2];
  undefined1 auStack_c0 [15];
  char local_b1;
  undefined1 auStack_b0 [16];
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_a0 = param_9;
  lStack_98 = param_2;
  local_90 = param_7;
  uStack_88 = param_8;
  local_80 = param_1;
  lStack_78 = param_2;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_5;
  uStack_58 = param_6;
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ee0c0);
    (*pcVar2)();
  }
  lVar7 = *(long *)(*(long *)(param_9 + -8) + 0x48);
  uVar5 = param_2 * lVar7;
  if (SUB168(SEXT816(param_2) * SEXT816(lVar7),8) != (long)uVar5 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ee0c4);
    (*pcVar2)();
  }
  bVar1 = *(byte *)(*(long *)(param_9 + -8) + 0x50);
  if ((bVar1 + 1 & (uint)bVar1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ee0c8);
    (*pcVar2)();
  }
  if ((bVar1 < 0x10) &&
     (((long)uVar5 < 0x401 ||
      ((bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0),
       (bVar3 & 1) != 0 &&
       (uVar6 = uVar5, _swift_stdlib_isStackAllocationSafe(uVar5,bVar1 + 1), (uVar6 & 1) != 0))))))
  {
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    lVar7 = -(uVar5 + 0xf & 0xfffffffffffffff0);
    *(undefined **)((long)local_d0 + lVar7) =
         PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
    FUN_1007ee5bc(&local_b1,auStack_c0 + lVar7,param_2,param_9,FUN_1007ee950,auStack_b0,param_9,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___type_metadata_for_Swift_Never_100eadc38);
  }
  else {
    uVar6 = (ulong)(uint)bVar1;
    if (bVar1 < 0x10) {
      uVar6 = 0xffffffffffffffff;
    }
    _swift_slowAlloc(uVar5,uVar6);
    local_d0[0] = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
    FUN_1007ee5bc(&local_b1);
    _swift_slowDealloc(uVar5,0xffffffffffffffff,0xffffffffffffffff);
  }
  if (local_b1 != '\x01') {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return;
  }
  _Var4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  _swift_willThrowTypedImpl
            (_Var4,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ee154);
  (*pcVar2)();
}



/* Address: 0x1007ee154 | FUN_1007ee154 */

void FUN_1007ee154(long param_1,long param_2,UnsafeMutableBufferPointer param_3)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_2 + -1;
  if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee1c8);
    (*pcVar1)();
  }
  if (param_1 < lVar2) {
    do {
      Swift::UnsafeMutableBufferPointer::swapAt(param_1,lVar2,param_3);
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (param_1 < lVar2);
  }
  return;
}



/* Address: 0x1007ee1c8 | FUN_1007ee1c8 */

void FUN_1007ee1c8(UnsafeMutablePointer param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  UnsafeMutablePointer UVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long in_stack_00000018;
  long alStack_a0 [2];
  
  lVar2 = *(long *)(in_stack_00000018 + -8);
  lVar1 = -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1007ee2d4);
    (*pcVar6)();
  }
  if (param_3 != 0) {
    lVar5 = *(long *)(lVar2 + 0x48);
    pcVar6 = *(code **)(lVar2 + 0x10);
    UVar3.unknown = param_1.unknown;
    lVar4 = param_3;
    do {
      (*pcVar6)(&stack0xffffffffffffff70 + lVar1,param_4 + lVar5 * *param_6,in_stack_00000018);
      (**(code **)(lVar2 + 0x20))(UVar3.unknown,&stack0xffffffffffffff70 + lVar1,in_stack_00000018);
      UVar3.unknown = UVar3.unknown + lVar5;
      lVar4 = lVar4 + -1;
      param_6 = param_6 + 1;
    } while (lVar4 != 0);
  }
  *(long *)((long)alStack_a0 + lVar1) = in_stack_00000018;
  FUN_1007ee2d8(param_8,param_9,param_1.unknown);
  if (param_1.unknown != (undefined *)0x0) {
    Swift::UnsafeMutablePointer::deinitialize(param_3,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1007ee2d8);
  (*pcVar6)();
}



/* Address: 0x1007ee2d8 | FUN_1007ee2d8 */

void FUN_1007ee2d8(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,long param_9)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (0 < param_5) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0;
    do {
      if ((lVar5 < param_2) && (*(long *)(param_1 + lVar5 * 8) == lVar4)) {
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee47c);
          (*pcVar1)();
        }
        lVar5 = lVar5 + 1;
      }
      else {
        if (lVar6 != lVar4) {
          lVar3 = *(long *)(*(long *)(param_9 + -8) + 0x48);
          (**(code **)(*(long *)(param_9 + -8) + 0x18))
                    (param_7 + lVar3 * lVar6,param_7 + lVar3 * lVar4,param_9);
        }
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee474);
          (*pcVar1)();
        }
        lVar6 = lVar6 + 1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar6 < param_5);
  }
  lVar5 = param_6 + -1;
  if (SBORROW8(param_6,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee484);
    (*pcVar1)();
  }
  lVar6 = param_2 + -1;
  if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee488);
    (*pcVar1)();
  }
  lVar4 = lVar5;
  if (SCARRY8(param_5,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee48c);
    (*pcVar1)();
  }
  do {
    if (lVar4 < param_5 + param_2) {
      if (param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee490);
        (*pcVar1)();
      }
      if (param_2 != 0) {
        lVar5 = 0;
        do {
          if (SCARRY8(param_5,lVar5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee470);
            (*pcVar1)();
          }
          lVar6 = lVar5 + 1;
          lVar4 = *(long *)(*(long *)(param_9 + -8) + 0x48);
          (**(code **)(*(long *)(param_9 + -8) + 0x18))
                    (param_7 + lVar4 * (param_5 + lVar5),param_3 + lVar4 * lVar5,param_9);
          lVar5 = lVar6;
        } while (param_2 != lVar6);
      }
      return;
    }
    if ((lVar6 < 0) || (*(long *)(param_1 + lVar6 * 8) != lVar5)) {
      if (lVar4 != lVar5) {
        lVar3 = *(long *)(*(long *)(param_9 + -8) + 0x48);
        (**(code **)(*(long *)(param_9 + -8) + 0x18))
                  (param_7 + lVar3 * lVar4,param_7 + lVar3 * lVar5,param_9);
      }
      bVar2 = SBORROW8(lVar4,1);
      lVar4 = lVar4 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee478);
        (*pcVar1)();
      }
      if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee46c);
        (*pcVar1)();
      }
    }
    else {
      if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee480);
        (*pcVar1)();
      }
      lVar6 = lVar6 + -1;
    }
    lVar5 = lVar5 + -1;
  } while( true );
}



/* Address: 0x1007ee490 | FUN_1007ee490 */

void FUN_1007ee490(long *param_1)

{
  code *pcVar1;
  bool bVar2;
  __int64 _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined *local_50;
  long lStack_48;
  undefined1 auStack_38 [8];
  
  uVar11 = param_1[1];
  _Var3 = Swift::_minimumMergeRunLength(uVar11);
  if (_Var3 < (long)uVar11) {
    if ((long)uVar11 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee5b4);
      (*pcVar1)();
    }
    lVar12 = (long)uVar11 / 2;
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < (long)uVar11) {
      _Var4 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (lVar12,PTR___type_metadata_for_Swift_Int_100eac6f8);
      *(long *)(_Var4.unknown + 0x10) = lVar12;
    }
    local_50 = _Var4.unknown + 0x20;
    lStack_48 = lVar12;
    FUN_1007ee994(&local_50,auStack_38,param_1,_Var3);
    *(undefined8 *)(_Var4.unknown + 0x10) = 0;
    _swift_release(_Var4.unknown);
  }
  else {
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee5b8);
      (*pcVar1)();
    }
    if (1 < uVar11) {
      param_1 = (long *)*param_1;
      lVar12 = -1;
      uVar5 = 1;
      plVar6 = param_1;
      do {
        lVar7 = param_1[uVar5];
        lVar8 = lVar12;
        plVar9 = plVar6;
        do {
          lVar10 = *plVar9;
          if (lVar10 <= lVar7) break;
          if (param_1 == (long *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ee5bc);
            (*pcVar1)();
          }
          *plVar9 = lVar7;
          plVar9[1] = lVar10;
          bVar2 = lVar8 != -1;
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + -1;
        } while (bVar2);
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 1;
        lVar12 = lVar12 + -1;
      } while (uVar5 != uVar11);
    }
  }
  return;
}



/* Address: 0x1007ee5bc | FUN_1007ee5bc */

/* WARNING: Removing unreachable block (ram,0x0001007ee638) */

void FUN_1007ee5bc(undefined8 param_1,__int64 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  Result RVar1;
  
  Swift::UnsafeMutableBufferPointer::_init(param_2);
  (*param_5)(param_1);
  RVar1 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar1.value,0);
  return;
}



/* Address: 0x1007ee6ac | FUN_1007ee6ac */

void FUN_1007ee6ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1007ec03c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007ee6dc | FUN_1007ee6dc */

undefined * FUN_1007ee6dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ee7d8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe69f8;
    FUN_1000f7830(&DAT_100fe69f8,0x100c7a0b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  sVar5 = uVar7 * 0x10;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,sVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + sVar5 <= puVar1) {
      _memmove(puVar1,puVar4,sVar5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1007ee7d8 | FUN_1007ee7d8 */

undefined * FUN_1007ee7d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ee8d8);
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
    puVar3 = &DAT_100fe6a00;
    FUN_1000f7830(&DAT_100fe6a00,0x100c7a0b8);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1007ee8d8 | FUN_1007ee8d8 */

void FUN_1007ee8d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = 0;
  FUN_1007fa688(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1007ebca0(param_1,param_2,uVar2,uVar1,uVar3,uVar4);
  return;
}



/* Address: 0x1007ee950 | FUN_1007ee950 */

void FUN_1007ee950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1007ee1c8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x10),param_3);
  return;
}



/* Address: 0x1007ee994 | FUN_1007ee994 */

void FUN_1007ee994(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long unaff_x21;
  ulong *puVar20;
  ulong uVar21;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = param_3[1];
  if (0 < lVar7) {
    lVar9 = 0;
    do {
      puVar6 = local_58;
      lVar18 = lVar9 + 1;
      if (lVar18 < lVar7) {
        lVar10 = *param_3;
        lVar12 = *(long *)(lVar10 + lVar18 * 8);
        lVar15 = *(long *)(lVar10 + lVar9 * 8);
        lVar13 = lVar9 + 2;
        lVar8 = lVar12;
        do {
          lVar17 = lVar13;
          lVar18 = lVar7;
          if (lVar7 == lVar17) break;
          lVar18 = *(long *)(lVar10 + lVar17 * 8);
          bVar3 = lVar8 <= lVar18;
          lVar13 = lVar17 + 1;
          lVar8 = lVar18;
          lVar18 = lVar17;
        } while (lVar12 < lVar15 != bVar3);
        if (lVar12 < lVar15) {
          if (lVar18 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecd0);
            (*pcVar2)();
          }
          lVar13 = lVar9;
          lVar8 = lVar18;
          if (lVar9 < lVar18) {
            do {
              lVar8 = lVar8 + -1;
              if (lVar13 != lVar8) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecf0);
                  (*pcVar2)();
                }
                uVar16 = *(undefined8 *)(lVar10 + lVar13 * 8);
                *(undefined8 *)(lVar10 + lVar13 * 8) = *(undefined8 *)(lVar10 + lVar8 * 8);
                *(undefined8 *)(lVar10 + lVar8 * 8) = uVar16;
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar8);
            lVar7 = param_3[1];
          }
        }
      }
      lVar13 = lVar18;
      if (lVar18 < lVar7) {
        if (SBORROW8(lVar18,lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eeccc);
          (*pcVar2)();
        }
        if (lVar18 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecd4);
            (*pcVar2)();
          }
          lVar8 = lVar9 + param_4;
          if (lVar7 <= lVar9 + param_4) {
            lVar8 = lVar7;
          }
          if (lVar8 < lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecd8);
            (*pcVar2)();
          }
          if (lVar18 != lVar8) {
            lVar7 = *param_3;
            plVar14 = (long *)(lVar7 + lVar18 * 8 + -8);
            lVar10 = lVar9 - lVar18;
            do {
              lVar12 = *(long *)(lVar7 + lVar18 * 8);
              lVar13 = lVar10;
              plVar19 = plVar14;
              do {
                lVar15 = *plVar19;
                if (lVar15 <= lVar12) break;
                if (lVar7 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecdc);
                  (*pcVar2)();
                }
                *plVar19 = lVar12;
                plVar19[1] = lVar15;
                bVar3 = lVar13 != -1;
                lVar13 = lVar13 + 1;
                plVar19 = plVar19 + -1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              plVar14 = plVar14 + 1;
              lVar10 = lVar10 + -1;
              lVar13 = lVar8;
            } while (lVar18 != lVar8);
          }
        }
      }
      if (lVar13 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecbc);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1007eef6c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar21 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar21) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1007eef6c(puVar6,uVar21 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar21 + 1;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar6 + uVar21 * 0x10 + 0x28) = lVar13;
      local_58 = puVar6;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecf4);
        (*pcVar2)();
      }
      FUN_1007eecfc(&local_58,*param_1,param_3);
      puVar6 = local_58;
      if (unaff_x21 != 0) goto LAB_1007eec8c;
      lVar7 = param_3[1];
      lVar9 = lVar13;
    } while (lVar13 < lVar7);
  }
  puVar6 = local_58;
  lVar7 = *param_1;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecfc);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_1007ef06c();
  }
  puVar20 = (ulong *)(puVar6 + 0x10);
  uVar21 = *puVar20;
  while (1 < uVar21) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecf8);
      (*pcVar2)();
    }
    plVar14 = (long *)(puVar6 + uVar21 * 0x10);
    lVar18 = *plVar14;
    puVar1 = puVar20 + uVar21 * 2;
    uVar11 = puVar1[1];
    FUN_10009a6c8(lVar9 + lVar18 * 8,lVar9 + *puVar1 * 8,lVar9 + uVar11 * 8,lVar7);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecc0);
      (*pcVar2)();
    }
    if (*puVar20 <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecc4);
      (*pcVar2)();
    }
    *plVar14 = lVar18;
    plVar14[1] = uVar11;
    uVar11 = *puVar20;
    lVar9 = uVar11 - uVar21;
    if (uVar11 < uVar21) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007eecc8);
      (*pcVar2)();
    }
    uVar21 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar20 = uVar21;
  }
LAB_1007eec8c:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1007eecfc | FUN_1007eecfc */

undefined8 FUN_1007eecfc(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_1007ef06c();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_1007eedd4;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef4c);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1007eee34:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef3c);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef44);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef24);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef28);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef30);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef38);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_1007eedd4:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef2c);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef34);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef40);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef48);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1007eee34;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef50);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef14);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef6c);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_10009a6c8(lVar8 + lVar11 * 8,lVar8 + *plVar3 * 8,lVar8 + lVar9 * 8,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef18);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef1c);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1007eef20);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Address: 0x1007eef6c | FUN_1007eef6c */

undefined * FUN_1007eef6c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ef06c);
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
    puVar3 = &DAT_100fe6a08;
    FUN_1000f7830(&DAT_100fe6a08,0x100c7a0c0);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1007ef06c | FUN_1007ef06c */

void FUN_1007ef06c(long param_1)

{
  FUN_1007eef6c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1007ef080 | FUN_1007ef080 */

void FUN_1007ef080(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  ContiguousArray CVar2;
  long *unaff_x20;
  long lVar3;
  
  if (param_1 != param_2) {
    CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
               CVar2.unknown);
    (extension_Swift)::Swift::MutableCollection::_swapAt();
    if (*unaff_x20 != 0) {
      FUN_1007f9544(param_3);
      lVar3 = *unaff_x20;
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ef168);
        (*pcVar1)();
      }
      _swift_retain(lVar3);
      FUN_1007ef648(lVar3 + 0x10,lVar3 + 0x20);
      _swift_release(lVar3);
    }
  }
  return;
}



/* Address: 0x1007ef168 | FUN_1007ef168 */

undefined8
FUN_1007ef168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  ContiguousArray CVar1;
  __int64 start;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_78 [8];
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  FUN_1007f9544(param_5);
  uVar5 = *unaff_x20;
  *unaff_x20 = 0;
  uVar6 = *(undefined8 *)(param_5 + 0x10);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar1);
  start = unaff_x20[1];
  uVar4 = *(undefined8 *)(start + 0x10);
  FUN_100636dd8(start,uVar6);
  uVar2 = uVar4;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(start);
  uStack_68 = uVar2;
  FUN_1007f09dc(&local_58,&local_70,param_1,param_2,param_3,param_4,uVar5,uVar6,param_6,
                *(undefined8 *)(param_5 + 0x18),local_78);
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fe6850;
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,start,uVar4,unaff_x20 + 1,uVar6,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    uVar2 = *unaff_x20;
    *unaff_x20 = uVar5;
    _swift_release(uVar2);
  }
  else {
    puVar3 = &DAT_100fe6850;
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,start,uVar4,unaff_x20 + 1,uVar6,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    uVar2 = *unaff_x20;
    *unaff_x20 = uVar5;
    _swift_release(uVar2);
    local_58 = uVar4;
  }
  return local_58;
}



/* Address: 0x1007ef2f4 | FUN_1007ef2f4 */

void FUN_1007ef2f4(undefined8 param_1)

{
  ContiguousArray CVar1;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_reverse();
  FUN_1007f9424(param_1);
  return;
}



/* Address: 0x1007ef370 | FUN_1007ef370 */

/* WARNING: Removing unreachable block (ram,0x0001007ef588) */

void FUN_1007ef370(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  ContiguousArray CVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  ContiguousArray CVar8;
  long unaff_x21;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 local_80 [8];
  undefined1 local_78 [8];
  undefined *local_70;
  undefined8 uStack_68;
  long local_58;
  
  plVar9 = unaff_x20 + 1;
  uVar7 = *(undefined8 *)(param_5 + 0x10);
  _Var3 = Swift::ContiguousArray::get_count((undefined *)*plVar9);
  if (_Var3 != param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ef648);
    (*pcVar2)();
  }
  local_58 = 0;
  CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
  _Var3 = *plVar9;
  uVar10 = *(undefined8 *)(_Var3 + 0x10);
  FUN_100636dd8(_Var3,uVar7);
  uVar6 = uVar10;
  local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(_Var3);
  uVar11 = *(undefined8 *)(param_5 + 0x18);
  uStack_68 = uVar6;
  FUN_1007f04cc(&local_70,&local_58,param_3,param_4,param_1,param_2,uVar7,param_6,uVar11,local_78);
  if (unaff_x21 == 0) {
    puVar5 = &DAT_100fe6850;
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,_Var3,uVar10,plVar9,uVar7,PTR___type_metadata_for____100eae0c8 + 8,
                  puVar5,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    lVar1 = local_58;
    CVar8.unknown = (undefined *)*plVar9;
    _Var3 = Swift::ContiguousArray::get_count(CVar8);
    if (lVar1 < _Var3) {
      FUN_1007f9544(param_5);
      uVar12 = *unaff_x20;
      *unaff_x20 = 0;
      Swift::ContiguousArray::_makeMutableAndUnique(CVar4);
      _Var3 = unaff_x20[1];
      uVar10 = *(undefined8 *)(_Var3 + 0x10);
      FUN_100636dd8(_Var3,uVar7);
      uVar6 = uVar10;
      local_70 = (undefined *)Swift::UnsafeMutableBufferPointer::_init(_Var3);
      uStack_68 = uVar6;
      FUN_1007f0640(local_78,&local_70,&local_58,param_3,param_4,param_1,param_2,uVar12,uVar7,
                    param_6,uVar11,local_80);
      FUN_1007e37e8(&local_70,_Var3,uVar10,plVar9,uVar7,PTR___type_metadata_for_Swift_Int_100eac6f8,
                    puVar5,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      uVar7 = *unaff_x20;
      *unaff_x20 = uVar12;
      _swift_release(uVar7);
    }
    else {
      Swift::ContiguousArray::get_count(CVar8);
    }
  }
  else {
    puVar5 = &DAT_100fe6850;
    FUN_1000f7830(&DAT_100fe6850,0x100c79a70);
    FUN_1007e37e8(&local_70,_Var3,uVar10,plVar9,uVar7,PTR___type_metadata_for____100eae0c8 + 8,
                  puVar5,PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x1007ef648 | FUN_1007ef648 */

void FUN_1007ef648(ulong *param_1,undefined8 param_2,long param_3,__int64 param_4,__int64 param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_80 [8];
  __int64 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)(param_6 + -8);
  uVar3 = *(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_78 = param_4;
  local_70 = param_2;
  Swift::ContiguousArray::get_subscript(param_4,(ContiguousArray)*(undefined **)(param_3 + 8));
  Swift::ContiguousArray::get_subscript(param_5,(ContiguousArray)*(undefined **)(param_3 + 8));
  uVar1 = Swift::Hashable::_rawHashValue(*param_1);
  lVar4 = 1L << (*param_1 & 0x3f);
  if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1007ef78c);
    (*pcVar6)();
  }
  uVar2 = Swift::Hashable::_rawHashValue(*param_1);
  lVar5 = 1L << (*param_1 & 0x3f);
  if (!SBORROW8(lVar5,1)) {
    FUN_1007f0180(lVar4 - 1U & uVar1,param_5,lVar5 - 1U & uVar2,local_78,param_1,local_70);
    pcVar6 = *(code **)(local_68 + 8);
    (*pcVar6)(auStack_80 + -uVar3,param_6);
    (*pcVar6)((long)(auStack_80 + -uVar3) - uVar3,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1007ef790);
  (*pcVar6)();
}



/* Address: 0x1007ef790 | FUN_1007ef790 */

void FUN_1007ef790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong *param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = Swift::Hashable::_rawHashValue(*param_5);
  lVar4 = 1L << (*param_5 & 0x3f);
  if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ef854);
    (*pcVar1)();
  }
  uVar3 = Swift::Hashable::_rawHashValue(*param_5);
  lVar5 = 1L << (*param_5 & 0x3f);
  if (!SBORROW8(lVar5,1)) {
    FUN_1007f0180(lVar4 - 1U & uVar2,param_2,lVar5 - 1U & uVar3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ef858);
  (*pcVar1)();
}



/* Address: 0x1007ef858 | FUN_1007ef858 */

void FUN_1007ef858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1007ef87c(param_1,param_2,FUN_100004520,0,param_3);
  return;
}



/* Address: 0x1007ef87c | FUN_1007ef87c */

long FUN_1007ef87c(void)

{
  code *pcVar1;
  ContiguousArray CVar2;
  undefined8 in_x4;
  long *unaff_x20;
  long unaff_x21;
  long lVar3;
  long local_58;
  
  if (*unaff_x20 == 0) {
    CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120
               ,CVar2.unknown);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
               CVar2.unknown);
    (extension_Swift)::Swift::MutableCollection::_partition();
    if (unaff_x21 != 0) {
      local_58 = unaff_x21;
    }
  }
  else {
    FUN_1007f9544(in_x4);
    lVar3 = *unaff_x20;
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007ef9b8);
      (*pcVar1)();
    }
    _swift_retain(lVar3);
    FUN_1007ef9b8(&local_58,lVar3 + 0x10,lVar3 + 0x20);
    if (unaff_x21 == 0) {
      _swift_release(lVar3);
      local_58 = local_58;
    }
    else {
      _swift_release(lVar3);
      local_58 = unaff_x21;
    }
  }
  return local_58;
}



/* Address: 0x1007ef9b8 | FUN_1007ef9b8 */

void FUN_1007ef9b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined8 local_70;
  undefined1 local_68;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::_withContiguousMutableStorageIfAvailable((ContiguousArray)0x1007f0eac);
  if (unaff_x21 == 0) {
    if (local_68 == '\x01') {
      puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
                 CVar1.unknown);
      puVar3 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
      ;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140
                 ,CVar1.unknown);
      FUN_1007efbc0(param_1,param_2,param_3,param_5,param_6,param_7,param_8,CVar1.unknown,puVar2,
                    puVar3,param_10);
    }
    else {
      *param_1 = local_70;
    }
  }
  return;
}



/* Address: 0x1007efaec | FUN_1007efaec */

void FUN_1007efaec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  UnsafeMutableBufferPointer UVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined8 local_58;
  
  UVar1 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  puVar2 = 
  PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__MutableCollection_100eaca30;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__MutableCollection_100eaca30
             ,UVar1.unknown);
  puVar3 = 
  PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__RandomAccessCollection_100eaca38;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeMutableBufferPointer<undefined>_>Swift__RandomAccessCollection_100eaca38
             ,UVar1.unknown);
  FUN_1007efbc0(&local_58,param_3,param_4,param_5,param_6,param_7,param_8,UVar1.unknown,puVar2,
                puVar3,param_10);
  if (unaff_x21 == 0) {
    *param_1 = local_58;
  }
  return;
}



/* Address: 0x1007efbc0 | FUN_1007efbc0 */

void FUN_1007efbc0(undefined8 param_1,ulong *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11)

{
  __int64 _Var1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x21;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_160 [8];
  __int64 local_158;
  code *local_150;
  __int64 local_148;
  undefined8 local_140;
  undefined8 local_138;
  code *local_130;
  undefined8 local_128;
  long local_120;
  ulong *local_118;
  long local_110;
  undefined8 local_108;
  undefined1 *local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  code *local_c0;
  code *local_b8;
  undefined1 auStack_88 [40];
  
  lVar12 = *(long *)(param_9 + 8);
  lVar4 = 0;
  local_138 = param_3;
  local_130 = param_6;
  local_128 = param_7;
  local_118 = param_2;
  local_110 = param_9;
  local_f0 = param_1;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar12 + 8),param_8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  local_c8 = *(long *)(lVar4 + -8);
  uVar7 = *(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = auStack_160 + -uVar7;
  local_f8 = (long)local_100 - uVar7;
  uVar14 = local_f8 - uVar7;
  lVar5 = 0;
  local_d0 = uVar14 - uVar7;
  _swift_getAssociatedTypeWitness
            (0,lVar12,param_8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_d8 = *(long *)(lVar5 + -8);
  uVar8 = *(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_120 = (uVar14 - uVar7) - uVar8;
  lVar10 = local_120 - uVar8;
  lVar15 = lVar10 - uVar8;
  Swift::Collection::_get_startIndex();
  Swift::Collection::_get_endIndex();
  lVar9 = lVar12;
  _swift_getAssociatedConformanceWitness
            (lVar12,param_8,lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  uVar13 = *(undefined8 *)(lVar9 + 8);
  bVar3 = Swift::Equatable::___infix(lVar15,lVar10,lVar5,uVar13);
  if (!bVar3) {
    local_140 = param_11;
    local_108 = param_10;
    local_e8 = lVar10;
    local_e0 = uVar13;
    do {
      pcVar11 = (code *)auStack_88;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (pcVar11,lVar15,param_8,lVar12);
      lVar10 = local_c8;
      uVar7 = local_d0;
      local_b8 = *(code **)(local_c8 + 0x10);
      (*local_b8)(local_d0);
      (*pcVar11)(auStack_88,0);
      uVar8 = uVar7;
      (*param_4)();
      local_c0 = *(code **)(lVar10 + 8);
      (*local_c0)(uVar7,lVar4);
      uVar13 = local_e0;
      lVar10 = local_e8;
      if (unaff_x21 != 0) {
        pcVar11 = *(code **)(local_d8 + 8);
        (*pcVar11)(local_e8,lVar5);
        (*pcVar11)(lVar15,lVar5);
        return;
      }
      if ((uVar8 & 1) != 0) {
        do {
          Swift::BidirectionalCollection::_formIndex();
          bVar3 = Swift::Equatable::___infix(lVar15,lVar10,lVar5,uVar13);
          if (bVar3) goto LAB_1007efd5c;
          pcVar11 = (code *)auStack_88;
          __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                    (pcVar11,lVar10,param_8,lVar12);
          (*local_b8)(uVar14);
          (*pcVar11)(auStack_88,0);
          uVar7 = uVar14;
          (*param_4)();
          (*local_c0)(uVar14,lVar4);
        } while ((uVar7 & 1) != 0);
        Swift::MutableCollection::_swapAt();
        lVar9 = local_120;
        Swift::Collection::_get_startIndex();
        local_158 = Swift::RandomAccessCollection::_distance();
        pcVar11 = *(code **)(local_d8 + 8);
        (*pcVar11)(lVar9,lVar5);
        Swift::Collection::_get_startIndex();
        local_148 = Swift::RandomAccessCollection::_distance();
        (*pcVar11)(lVar9,lVar5);
        pcVar6 = (code *)auStack_88;
        __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                  (pcVar6,lVar15,param_8,lVar12);
        pcVar11 = local_b8;
        local_150 = pcVar6;
        (*local_b8)(local_f8);
        (*local_150)(auStack_88,0);
        pcVar6 = (code *)auStack_88;
        __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                  (pcVar6,lVar10,param_8,lVar12);
        (*pcVar11)(local_100);
        (*pcVar6)(auStack_88,0);
        puVar2 = local_118;
        local_b8 = (code *)Swift::Hashable::_rawHashValue(*local_118);
        lVar9 = 1L << (*puVar2 & 0x3f);
        local_150 = (code *)(lVar9 - 1);
        if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1007f017c);
          (*pcVar11)();
        }
        uVar7 = Swift::Hashable::_rawHashValue(*puVar2);
        _Var1 = local_158;
        lVar9 = 1L << (*puVar2 & 0x3f);
        if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1007f0180);
          (*pcVar11)();
        }
        FUN_1007f0180((ulong)local_150 & (ulong)local_b8,local_148,lVar9 - 1U & uVar7,local_158,
                      puVar2,local_138);
        pcVar11 = local_c0;
        (*local_c0)(local_100,lVar4);
        (*pcVar11)(local_f8,lVar4);
        (*local_130)(_Var1,local_148);
      }
      Swift::Collection::_formIndex();
      bVar3 = Swift::Equatable::___infix(lVar15,lVar10,lVar5,local_e0);
    } while (!bVar3);
  }
LAB_1007efd5c:
  lVar9 = local_d8;
  (**(code **)(local_d8 + 8))(lVar10,lVar5);
  (**(code **)(lVar9 + 0x20))(local_f0,lVar15,lVar5);
  return;
}



/* Address: 0x1007f0180 | FUN_1007f0180 */

void FUN_1007f0180(ulong param_1,long param_2,ulong param_3,long param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_1007d7748();
  while (param_1 != 0) {
    uVar3 = -1L << (*param_5 & 0x3f);
    uVar1 = (uVar3 ^ param_1 ^ 0xffffffffffffffff) + ((long)param_5[1] >> 6);
    uVar2 = 0;
    if (~uVar3 <= uVar1) {
      uVar2 = ~uVar3;
    }
    if (uVar1 - uVar2 == param_2) break;
    FUN_1007d7b60();
  }
  FUN_1007d7a1c(param_4,0);
  FUN_1007d7748();
  while (param_3 != 0) {
    uVar3 = -1L << (*param_5 & 0x3f);
    uVar1 = (uVar3 ^ param_3 ^ 0xffffffffffffffff) + ((long)param_5[1] >> 6);
    uVar2 = 0;
    if (~uVar3 <= uVar1) {
      uVar2 = ~uVar3;
    }
    if (uVar1 - uVar2 == param_4) break;
    FUN_1007d7b60();
  }
  FUN_1007d7a1c(param_2,0);
  return;
}


