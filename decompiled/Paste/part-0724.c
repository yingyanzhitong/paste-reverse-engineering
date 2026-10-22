/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007f02b8 | FUN_1007f02b8 */

void FUN_1007f02b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ContiguousArray CVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_sort();
  FUN_1007fa688(0,uVar2,*(undefined8 *)(param_3 + 0x18));
  FUN_1007f9718();
  return;
}



/* Address: 0x1007f037c | FUN_1007f037c */

void FUN_1007f037c(long param_1)

{
  ContiguousArray CVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_sort();
  FUN_1007fa688(0,uVar2,*(undefined8 *)(param_1 + 0x18));
  FUN_1007f9718();
  return;
}



/* Address: 0x1007f0418 | FUN_1007f0418 */

void FUN_1007f0418(undefined8 param_1)

{
  FUN_1007f0430(param_1,param_1,PTR___type_metadata_for_Swift_SystemRandomNumberGenerator_100ead8a0,
                PTR___protocol_witness_table_for_Swift_SystemRandomNumberGenerator___Swift_RandomNumberGenerator_in_Swift_100ead8a8
               );
  return;
}



/* Address: 0x1007f0430 | FUN_1007f0430 */

void FUN_1007f0430(undefined *param_1,undefined8 param_2)

{
  ContiguousArray CVar1;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  (extension_Swift)::Swift::MutableCollection::_shuffle(param_1);
  FUN_1007f9718(param_2);
  return;
}



/* Address: 0x1007f04cc | FUN_1007f04cc */

void FUN_1007f04cc(long *param_1,long *param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,undefined4 param_9,
                  undefined4 param_10,long *param_11)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [8];
  long *local_98;
  code *local_90;
  long local_88;
  long local_80;
  long local_78;
  long *local_70;
  code *local_68;
  
  lVar5 = *(long *)(param_8 + -8);
  puVar6 = auStack_a0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = *(long *)(param_7 + -8);
  uVar3 = (long)puVar6 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_1[1];
  lVar4 = *param_2;
  if (lVar4 < local_78) {
    local_88 = *(long *)(local_80 + 0x48);
    local_90 = *(code **)(local_80 + 0x10);
    local_98 = param_11;
    local_70 = param_1;
    local_68 = param_3;
    do {
      (*local_90)(uVar3,*local_70 + local_88 * lVar4,param_7);
      (**(code **)(lVar5 + 0x10))(puVar6,param_5 + *(long *)(lVar5 + 0x48) * lVar4,param_8);
      uVar2 = uVar3;
      (*local_68)(uVar3,puVar6);
      (**(code **)(lVar5 + 8))(puVar6,param_8);
      (**(code **)(local_80 + 8))(uVar3,param_7);
      if (unaff_x21 != 0) {
        *local_98 = unaff_x21;
        return;
      }
      if ((uVar2 & 1) != 0) {
        return;
      }
      lVar4 = *param_2 + 1;
      if (SCARRY8(*param_2,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f0640);
        (*pcVar1)();
      }
      *param_2 = lVar4;
    } while (lVar4 < local_78);
  }
  return;
}



/* Address: 0x1007f0640 | FUN_1007f0640 */

void FUN_1007f0640(long *param_1,long *param_2,long *param_3,code *param_4,undefined8 param_5,
                  undefined *param_6,undefined8 param_7,long param_8,long param_9,long param_10,
                  undefined8 param_11,long *param_12)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  long *local_e0;
  long *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long *local_b0;
  long *local_a8;
  ulong local_a0;
  long local_98;
  long local_90;
  code *local_88;
  UnsafeMutableBufferPointer local_80;
  long local_78;
  UnsafeMutableBufferPointer local_70;
  long local_68;
  
  local_90 = *(long *)(param_10 + -8);
  local_98 = (long)&local_e0 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = *(long *)(param_9 + -8);
  local_a0 = local_98 - (*(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *param_3;
  lVar8 = lVar6 + 1;
  local_c0 = param_7;
  local_88 = param_4;
  local_70.unknown = param_6;
  if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f0890);
    (*pcVar4)();
  }
  lVar7 = param_2[1];
  local_d8 = param_1;
  if (lVar7 < lVar8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f0894);
    (*pcVar4)();
  }
  if (lVar8 != lVar7) {
    local_78 = param_10;
    local_e0 = param_12;
    local_d0 = param_11;
    local_c8 = param_8;
    local_b8 = lVar7;
    local_b0 = param_3;
    local_a8 = param_2;
    do {
      uVar2 = local_a0;
      if (lVar7 <= lVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f0888);
        (*pcVar4)();
      }
      local_80.unknown = (undefined *)*param_2;
      (**(code **)(local_68 + 0x10))
                (local_a0,local_80.unknown + *(long *)(local_68 + 0x48) * lVar8,param_9);
      lVar3 = local_78;
      lVar7 = local_90;
      lVar6 = local_98;
      (**(code **)(local_90 + 0x10))
                (local_98,local_70.unknown + *(long *)(local_90 + 0x48) * lVar8,local_78);
      uVar5 = uVar2;
      (*local_88)(uVar2,lVar6);
      (**(code **)(lVar7 + 8))(lVar6,lVar3);
      (**(code **)(local_68 + 8))(uVar2,param_9);
      plVar1 = local_b0;
      lVar7 = local_b8;
      if (unaff_x21 != 0) {
        *local_e0 = unaff_x21;
        return;
      }
      param_2 = local_a8;
      if ((uVar5 & 1) == 0) {
        Swift::UnsafeMutableBufferPointer::swapAt(*local_b0,lVar8,local_80);
        lVar6 = local_78;
        Swift::UnsafeMutableBufferPointer::swapAt(*plVar1,lVar8,local_70);
        param_2 = local_a8;
        if (local_c8 != 0) {
          FUN_1007f0894(local_c8 + 0x10,local_c8 + 0x20,local_a8,plVar1,lVar8,param_9,lVar6,local_d0
                       );
        }
        if (SCARRY8(*plVar1,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f088c);
          (*pcVar4)();
        }
        *plVar1 = *plVar1 + 1;
      }
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    lVar6 = *plVar1;
  }
  *local_d8 = lVar6;
  return;
}



/* Address: 0x1007f0894 | FUN_1007f0894 */

void FUN_1007f0894(ulong *param_1,undefined8 param_2,long *param_3,long *param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long local_80;
  long local_78;
  undefined8 local_70;
  
  lVar5 = *(long *)(param_6 + -8);
  lVar3 = *(long *)(lVar5 + 0x48);
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&local_80 - uVar2;
  lVar7 = lVar6 - uVar2;
  lVar4 = *param_3;
  local_80 = *param_4;
  pcVar8 = *(code **)(lVar5 + 0x10);
  local_70 = param_2;
  (*pcVar8)(lVar7,lVar4 + lVar3 * local_80,param_6);
  local_78 = param_5;
  (*pcVar8)(lVar6,lVar4 + lVar3 * param_5,param_6);
  uVar2 = Swift::Hashable::_rawHashValue(*param_1);
  lVar3 = 1L << (*param_1 & 0x3f);
  if (SBORROW8(lVar3,1)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1007f09d8);
    (*pcVar8)();
  }
  uVar1 = Swift::Hashable::_rawHashValue(*param_1);
  lVar4 = 1L << (*param_1 & 0x3f);
  if (!SBORROW8(lVar4,1)) {
    FUN_1007f0180(lVar3 - 1U & uVar2,local_78,lVar4 - 1U & uVar1,local_80,param_1,local_70);
    pcVar8 = *(code **)(lVar5 + 8);
    (*pcVar8)(lVar6,param_6);
    (*pcVar8)(lVar7,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1007f09dc);
  (*pcVar8)();
}



/* Address: 0x1007f09dc | FUN_1007f09dc */

void FUN_1007f09dc(long *param_1,long *param_2,undefined *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9,undefined8 param_10,
                  long *param_11)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x21;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_140 [8];
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  long local_120;
  long *local_118;
  long *local_110;
  ulong local_108;
  undefined1 *local_100;
  long local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  long *local_d8;
  code *local_d0;
  long local_c8;
  UnsafeMutableBufferPointer local_c0;
  long local_b8;
  code *local_b0;
  long local_a8;
  long local_a0;
  code *local_98;
  UnsafeMutableBufferPointer local_90;
  long local_88;
  long local_80;
  long local_78;
  __int64 local_70 [2];
  long local_58;
  
  local_e0 = *(long *)(param_9 + -8);
  uVar7 = *(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = auStack_140 + -uVar7;
  local_e8 = (long)local_100 - uVar7;
  local_f8 = *(long *)(param_8 + -8);
  local_f0 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_108 = local_e8 - local_f0;
  local_f0 = local_108 - local_f0;
  lVar9 = param_2[1];
  if (lVar9 == 0) {
    local_88 = 0;
  }
  else {
    lVar12 = 0;
    local_118 = param_11;
    local_138 = param_10;
    local_b8 = *(long *)(local_f8 + 0x48);
    local_b0 = *(code **)(local_f8 + 0x10);
    local_130 = lVar9;
    local_128 = param_4;
    local_120 = param_7;
    local_110 = param_1;
    local_d8 = param_2;
    local_a8 = param_8;
    local_a0 = param_9;
    local_98 = param_5;
    local_90.unknown = param_3;
    do {
      lVar8 = local_b8 * lVar12;
      local_88 = lVar9;
      local_78 = unaff_x21;
      while( true ) {
        lVar3 = local_a8;
        uVar7 = local_f0;
        local_c0.unknown = (undefined *)*local_d8;
        (*local_b0)(local_f0,local_c0.unknown + lVar8,local_a8);
        lVar4 = local_a0;
        lVar2 = local_e0;
        lVar5 = local_e8;
        local_c8 = *(long *)(local_e0 + 0x48);
        local_d0 = *(code **)(local_e0 + 0x10);
        local_80 = lVar12;
        (*local_d0)(local_e8,local_90.unknown + local_c8 * lVar12,local_a0);
        uVar6 = uVar7;
        (*local_98)(uVar7,lVar5);
        lVar9 = local_f8;
        pcVar11 = *(code **)(lVar2 + 8);
        (*pcVar11)(lVar5,lVar4);
        pcVar10 = *(code **)(lVar9 + 8);
        (*pcVar10)(uVar7,lVar3);
        if (local_78 != 0) goto LAB_1007f0cfc;
        lVar5 = local_80;
        param_1 = local_110;
        uVar7 = local_108;
        lVar12 = local_a8;
        lVar9 = local_88;
        if ((uVar6 & 1) != 0) break;
        if (SCARRY8(local_80,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1007f0d54);
          (*pcVar10)();
        }
        lVar12 = local_80 + 1;
        lVar8 = lVar8 + local_b8;
        if (local_80 + 1 == local_88) goto LAB_1007f0d2c;
      }
      do {
        local_58 = lVar5;
        local_110 = param_1;
        local_108 = uVar7;
        local_a8 = lVar12;
        if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1007f0d58);
          local_88 = lVar9;
          (*pcVar10)();
        }
        lVar8 = lVar9 + -1;
        local_88 = local_80;
        if (lVar8 == local_80) goto LAB_1007f0d2c;
        local_88 = lVar9;
        (*local_b0)(uVar7,local_c0.unknown + lVar8 * local_b8,lVar12);
        lVar9 = local_a0;
        puVar1 = local_100;
        local_88 = lVar8;
        (*local_d0)(local_100,local_90.unknown + lVar8 * local_c8,local_a0);
        uVar6 = uVar7;
        (*local_98)(uVar7,puVar1);
        (*pcVar11)(puVar1,lVar9);
        (*pcVar10)(uVar7,lVar12);
        lVar8 = local_80;
        lVar9 = local_88;
        lVar12 = local_a8;
        if (local_78 != 0) {
LAB_1007f0cfc:
          *local_118 = local_78;
          return;
        }
        lVar5 = local_58;
        param_1 = local_110;
        uVar7 = local_108;
      } while ((uVar6 & 1) != 0);
      local_70[0] = local_88;
      Swift::UnsafeMutableBufferPointer::swapAt(local_80,local_88,local_c0);
      lVar5 = local_a0;
      Swift::UnsafeMutableBufferPointer::swapAt(lVar8,lVar9,local_90);
      if (local_120 != 0) {
        FUN_1007f0d5c(local_120 + 0x10,local_120 + 0x20,local_d8,&local_58,local_70,lVar12,lVar5,
                      local_138);
        lVar9 = local_88;
      }
      lVar12 = lVar8 + 1;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1007f0d5c);
        (*pcVar10)();
      }
      param_1 = local_110;
      unaff_x21 = local_78;
      local_88 = lVar12;
      local_58 = lVar12;
    } while (lVar12 != lVar9);
  }
LAB_1007f0d2c:
  *param_1 = local_88;
  return;
}



/* Address: 0x1007f0d5c | FUN_1007f0d5c */

void FUN_1007f0d5c(ulong *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
                  long param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_80 [8];
  long local_78;
  undefined8 local_70;
  
  lVar8 = *(long *)(param_6 + -8);
  lVar4 = *(long *)(lVar8 + 0x48);
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_80 + -uVar2;
  lVar7 = (long)puVar6 - uVar2;
  lVar5 = *param_3;
  local_78 = *param_4;
  pcVar9 = *(code **)(lVar8 + 0x10);
  local_70 = param_2;
  (*pcVar9)(lVar7,lVar5 + lVar4 * local_78,param_6);
  lVar3 = *param_5;
  (*pcVar9)(puVar6,lVar5 + lVar3 * lVar4,param_6);
  uVar2 = Swift::Hashable::_rawHashValue(*param_1);
  lVar4 = 1L << (*param_1 & 0x3f);
  if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007f0ea8);
    (*pcVar9)();
  }
  uVar1 = Swift::Hashable::_rawHashValue(*param_1);
  lVar5 = 1L << (*param_1 & 0x3f);
  if (!SBORROW8(lVar5,1)) {
    FUN_1007f0180(lVar4 - 1U & uVar2,lVar3,lVar5 - 1U & uVar1,local_78,param_1,local_70);
    pcVar9 = *(code **)(lVar8 + 8);
    (*pcVar9)(puVar6,param_6);
    (*pcVar9)(lVar7,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1007f0eac);
  (*pcVar9)();
}



/* Address: 0x1007f0eac | FUN_1007f0eac */

void FUN_1007f0eac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007efaec(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007f0edc | FUN_1007f0edc */

void FUN_1007f0edc(undefined8 param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ContiguousArray CVar3;
  __int64 _Var4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  ContiguousArray CVar7;
  
  CVar7.unknown = (undefined *)unaff_x20[1];
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar3.unknown
            );
  bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f107c);
    (*pcVar1)();
  }
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120
               ,CVar3.unknown);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar3.unknown);
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
  }
  else {
    _Var4 = Swift::ContiguousArray::get_count(CVar7);
    if (SBORROW8(_Var4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1080);
      (*pcVar1)();
    }
    FUN_1007f982c(lVar5,CVar7.unknown,uVar6,*(undefined8 *)(param_2 + 0x18));
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__BidirectionalCollection_100ead120
               ,CVar3.unknown);
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar3.unknown);
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeLast();
    if (_Var4 + -1 < lVar5) {
      FUN_1007f9424();
    }
    else {
      FUN_1007f9544(param_2);
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1084);
        (*pcVar1)();
      }
      _swift_retain(lVar5);
      FUN_1007f1858(lVar5 + 0x10,lVar5 + 0x20,param_1);
      _swift_release(lVar5);
    }
  }
  return;
}



/* Address: 0x1007f1084 | FUN_1007f1084 */

void FUN_1007f1084(bool param_1,undefined8 param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  long lVar3;
  long *unaff_x20;
  
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::removeAll(param_1,CVar2);
  if ((param_1 & 1U) == 0) {
    _swift_release();
    *unaff_x20 = 0;
  }
  else if (*unaff_x20 != 0) {
    FUN_1007f9544(param_2);
    lVar3 = *unaff_x20;
    if (lVar3 != 0) {
      FUN_1007db4c0(lVar3 + 0x10,lVar3 + 0x20);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1110);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x1007f1110 | FUN_1007f1110 */

void FUN_1007f1110(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = param_2;
  FUN_1007f979c(param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  FUN_1007f92d0(param_1,param_2,uVar1,param_3);
  return;
}



/* Address: 0x1007f1158 | FUN_1007f1158 */

void FUN_1007f1158(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  __int64 _Var4;
  long *unaff_x20;
  undefined8 uVar5;
  ContiguousArray CVar6;
  long lVar7;
  long local_70;
  long lStack_68;
  
  CVar6.unknown = (undefined *)unaff_x20[1];
  lVar7 = *unaff_x20;
  local_70 = param_1;
  lStack_68 = param_2;
  if (lVar7 == 0) {
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar6.unknown);
  }
  else {
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f1314);
      (*pcVar2)();
    }
    if (lVar1 < 1) {
      return;
    }
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    _Var3 = Swift::ContiguousArray::get_count(CVar6);
    if (SBORROW8(_Var3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f1318);
      (*pcVar2)();
    }
    _Var4 = Swift::ContiguousArray::get_count(CVar6);
    if ((_Var3 - lVar1 <= _Var4 / 2) ||
       (FUN_1007f982c(lVar7,CVar6.unknown,uVar5,*(undefined8 *)(param_3 + 0x18)),
       _Var3 - lVar1 < lVar7)) {
      CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
                 ,CVar6.unknown);
      (extension_Swift)::Swift::RangeReplaceableCollection::_removeSubrange
                ((Range<(extension_in_Swift):Swift_RangeReplaceableCollection_removeSubrange(Swift_Range<A_Index>)__>___>
                  )&local_70);
      FUN_1007f9424(param_3);
      return;
    }
    FUN_1007f9544(param_3);
    lVar7 = *unaff_x20;
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f131c);
      (*pcVar2)();
    }
    _swift_retain(lVar7);
    FUN_1007f1404(lVar7 + 0x10,lVar7 + 0x20);
    _swift_release(lVar7);
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
               ,CVar6.unknown);
  }
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeSubrange
            ((Range<(extension_in_Swift):Swift_RangeReplaceableCollection_removeSubrange(Swift_Range<A_Index>)__>___>
              )&local_70);
  return;
}



/* Address: 0x1007f131c | FUN_1007f131c */

void FUN_1007f131c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  __int64 _Var2;
  __int64 _Var3;
  long unaff_x20;
  ContiguousArray CVar4;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f13a4);
    (*pcVar1)();
  }
  CVar4.unknown = *(undefined **)(unaff_x20 + 8);
  _Var2 = Swift::ContiguousArray::get_count(CVar4);
  if (_Var2 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f13a8);
    (*pcVar1)();
  }
  _Var2 = Swift::ContiguousArray::get_count(CVar4);
  if (SBORROW8(_Var2,param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f13ac);
    (*pcVar1)();
  }
  _Var3 = Swift::ContiguousArray::get_count(CVar4);
  if (_Var2 - param_1 <= _Var3) {
    FUN_1007f1158(_Var2 - param_1,_Var3,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f13b0);
  (*pcVar1)();
}



/* Address: 0x1007f13b0 | FUN_1007f13b0 */

void FUN_1007f13b0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  __int64 _Var2;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1400);
    (*pcVar1)();
  }
  _Var2 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 8));
  if (param_1 <= _Var2) {
    FUN_1007f1158(0,param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1404);
  (*pcVar1)();
}



/* Address: 0x1007f1404 | FUN_1007f1404 */

void FUN_1007f1404(ulong *param_1,long param_2,long param_3,Range<__int64> param_4,
                  ContiguousArray param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  bool bVar4;
  ArraySlice<undefined> AVar5;
  long lVar6;
  __int64 _Var7;
  ContiguousArray CVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong *puVar23;
  undefined1 auStack_110 [8];
  ulong *local_108;
  undefined *puStack_100;
  ulong *local_a0;
  undefined *puStack_98;
  ulong *local_90;
  ulong *local_88;
  ulong *puStack_80;
  long local_78;
  undefined1 local_70;
  undefined8 local_58;
  
  lVar15 = *(long *)(param_6 + -8);
  uVar16 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = auStack_110 + -uVar16;
  local_108 = (ulong *)param_4.unknown;
  puStack_100 = param_5.unknown;
  AVar5 = Swift::ContiguousArray::get_subscript(param_4,param_5);
  lVar6 = Swift::ArraySlice::get_startIndex((ArraySlice)AVar5.unknown);
  _Var7 = Swift::ArraySlice::get_endIndex((ArraySlice)AVar5.unknown);
  if (lVar6 != _Var7) {
    do {
      Swift::ArraySlice::get_subscript(lVar6,(ArraySlice)AVar5.unknown);
      bVar4 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007f17d8);
        (*pcVar3)();
      }
      (**(code **)(lVar15 + 0x20))(puVar19,(long)puVar19 - uVar16,param_6);
      uVar22 = *(undefined8 *)(param_3 + 8);
      _swift_retain(uVar22);
      uVar13 = uVar22;
      puVar14 = param_1;
      FUN_1007d9208(puVar19,uVar22,param_1,param_2,param_6,param_7);
      _swift_release(uVar22);
      if (((uint)uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007f17dc);
        (*pcVar3)();
      }
      local_70 = 0;
      puVar10 = puVar14;
      puVar11 = param_1;
      lVar18 = param_2;
      local_a0 = param_1;
      puStack_98 = (undefined *)param_2;
      local_90 = puVar14;
      FUN_1007d7748();
      local_88 = puVar10;
      puStack_80 = puVar11;
      local_78 = lVar18;
      FUN_1007d7b60();
      puVar10 = local_88;
      if (local_88 != (ulong *)0x0) {
        puVar11 = puVar14;
        FUN_1007d9460(puVar14,param_1,param_2);
        puVar23 = puVar14;
        do {
          puVar2 = local_a0;
          uVar17 = -1L << (*local_a0 & 0x3f);
          uVar12 = (uVar17 ^ (ulong)puVar10 ^ 0xffffffffffffffff) + ((long)local_a0[1] >> 6);
          uVar20 = 0;
          if (~uVar17 <= uVar12) {
            uVar20 = ~uVar17;
          }
          uVar12 = uVar12 - uVar20;
          FUN_1007f1ac4(uVar12,*param_1,param_3,param_6,param_7);
          lVar18 = 1L << (*param_1 & 0x3f);
          uVar20 = lVar18 - 1;
          if (SBORROW8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1007f17d0);
            (*pcVar3)();
          }
          uVar12 = uVar20 & uVar12;
          if ((long)puVar23 < (long)puVar11) {
            if ((long)puVar11 <= (long)uVar12 || (long)uVar12 <= (long)puVar23) {
LAB_1007f1704:
              uVar17 = -1L << (*puVar2 & 0x3f);
              uVar12 = (uVar17 ^ (ulong)puVar10 ^ 0xffffffffffffffff) + ((long)puVar2[1] >> 6);
              lVar18 = 0;
              if (~uVar17 <= uVar12) {
                lVar18 = uVar17 + 1;
              }
              lVar18 = (uVar12 - ((long)param_1[1] >> 6)) + lVar18;
              uVar17 = (uVar20 & lVar18 >> 0x3f) + lVar18 ^ uVar20;
              uVar12 = (*param_1 & 0x3f) * (long)puVar14;
              lVar18 = (long)uVar12 >> 6;
              *(ulong *)(param_2 + lVar18 * 8) =
                   uVar17 << (uVar12 & 0x3f) |
                   *(ulong *)(param_2 + lVar18 * 8) &
                   (uVar20 << (uVar12 & 0x3f) ^ 0xffffffffffffffff);
              uVar20 = *param_1 & 0x3f;
              uVar12 = 0x40 - (uVar12 & 0x3f);
              puVar14 = local_90;
              puVar23 = local_90;
              if (uVar12 < uVar20) {
                lVar21 = uVar20 << uVar20;
                if (SCARRY8(lVar21,0x40)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007f17d4);
                  (*pcVar3)();
                }
                lVar1 = lVar21 + 0x7e;
                if (0 < lVar21 + 0x40) {
                  lVar1 = lVar21 + 0x3f;
                }
                lVar21 = 0;
                if (lVar18 + 1 != lVar1 >> 6) {
                  lVar21 = lVar18 + 1;
                }
                *(ulong *)(param_2 + lVar21 * 8) =
                     *(ulong *)(param_2 + lVar21 * 8) &
                     -1L << ((ulong)(uint)((int)*param_1 - (int)uVar12) & 0x3f) |
                     uVar17 >> (uVar12 & 0x3f);
              }
            }
          }
          else if ((long)puVar11 <= (long)uVar12 && (long)uVar12 <= (long)puVar23)
          goto LAB_1007f1704;
          FUN_1007d7b60();
          puVar10 = local_88;
        } while (local_88 != (ulong *)0x0);
      }
      FUN_1007d8f38(0,puVar14,param_1,param_2);
      (**(code **)(lVar15 + 8))(puVar19,param_6);
      _Var7 = Swift::ArraySlice::get_endIndex((ArraySlice)AVar5.unknown);
    } while (lVar6 != _Var7);
  }
  _swift_unknownObjectRelease(AVar5.unknown);
  local_a0 = local_108;
  puStack_98 = puStack_100;
  local_58 = *(undefined8 *)(param_3 + 8);
  CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar9 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar8.unknown);
  FUN_1007da66c(&local_a0,&local_58,param_1,param_2,CVar8.unknown,puVar9,param_7);
  return;
}



/* Address: 0x1007f17dc | FUN_1007f17dc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007f182c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007f17dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = 0x100c7a1e0;
  _swift_getWitnessTable(0x100c7a1e0);
  Swift::RangeExpression::_relative(&local_50,uVar1,param_2,uVar1,param_3,param_4);
  FUN_1007f1158(local_50,uStack_48,param_2);
  return;
}



/* Address: 0x1007f1858 | FUN_1007f1858 */

void FUN_1007f1858(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ContiguousArray CVar4;
  __int64 _Var5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  
  uVar2 = Swift::Hashable::_rawHashValue(*param_1);
  lVar8 = 1L << (*param_1 & 0x3f);
  if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1ac4);
    (*pcVar1)();
  }
  uVar2 = lVar8 - 1U & uVar2;
  uVar3 = uVar2;
  FUN_1007d7748();
  puVar11 = *(undefined **)(param_4 + 8);
  CVar4.unknown = puVar11;
  _swift_retain();
  _Var5 = Swift::ContiguousArray::get_count(CVar4);
  _swift_release(puVar11);
  while (uVar3 != 0) {
    uVar10 = -1L << (*param_1 & 0x3f);
    uVar6 = (uVar10 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_1[1] >> 6);
    uVar7 = 0;
    if (~uVar10 <= uVar6) {
      uVar7 = ~uVar10;
    }
    if (uVar6 - uVar7 == _Var5) break;
    FUN_1007d7b60();
  }
  uVar3 = uVar2;
  FUN_1007d7748();
  FUN_1007d7b60();
  if (uVar3 != 0) {
    uVar6 = uVar2;
    FUN_1007d9460(uVar2,param_1,param_2);
    do {
      uVar9 = -1L << (*param_1 & 0x3f);
      uVar7 = (uVar9 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_1[1] >> 6);
      uVar10 = 0;
      if (~uVar9 <= uVar7) {
        uVar10 = ~uVar9;
      }
      uVar7 = uVar7 - uVar10;
      FUN_1007f1ac4(uVar7,*param_1,param_4,param_5,param_6);
      lVar8 = 1L << (*param_1 & 0x3f);
      uVar10 = lVar8 - 1;
      if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1ac0);
        (*pcVar1)();
      }
      uVar7 = uVar10 & uVar7;
      if ((long)uVar2 < (long)uVar6) {
        if ((long)uVar6 <= (long)uVar7 || (long)uVar7 <= (long)uVar2) {
LAB_1007f19ac:
          uVar9 = -1L << (*param_1 & 0x3f);
          uVar7 = (uVar9 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_1[1] >> 6);
          lVar8 = 0;
          if (~uVar9 <= uVar7) {
            lVar8 = uVar9 + 1;
          }
          lVar8 = (uVar7 - ((long)param_1[1] >> 6)) + lVar8;
          FUN_1007d8f38((uVar10 & lVar8 >> 0x3f) + lVar8 ^ uVar10,uVar2,param_1,param_2);
        }
      }
      else if ((long)uVar6 <= (long)uVar7 && (long)uVar7 <= (long)uVar2) goto LAB_1007f19ac;
      FUN_1007d7b60();
    } while (uVar3 != 0);
  }
  FUN_1007d8f38(0,uVar2,param_1,param_2);
  return;
}



/* Address: 0x1007f1ac4 | FUN_1007f1ac4 */

__int64 FUN_1007f1ac4(__int64 param_1,__int64 param_2,long param_3,long param_4)

{
  __int64 _Var1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Swift::ContiguousArray::get_subscript(param_1,(ContiguousArray)*(undefined **)(param_3 + 8));
  _Var1 = Swift::Hashable::_rawHashValue(param_2);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  return _Var1;
}



/* Address: 0x1007f1b54 | FUN_1007f1b54 */

void FUN_1007f1b54(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ContiguousArray CVar3;
  
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar3.unknown
            );
  bVar2 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (!bVar2) {
    FUN_1007f1110(param_1,0,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f1be4);
  (*pcVar1)();
}



/* Address: 0x1007f1be4 | FUN_1007f1be4 */

void FUN_1007f1be4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ContiguousArray CVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__MutableCollection_100ead128,
             CVar1.unknown);
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RangeReplaceableCollection_100ead150
             ,CVar1.unknown);
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
  FUN_1007fa688(0,uVar2,*(undefined8 *)(param_3 + 0x18));
  FUN_1007f9424();
  return;
}



/* Address: 0x1007f1ca8 | thunk_FUN_1007f1cac */

void thunk_FUN_1007f1cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007f1ec4(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1007f1cac | FUN_1007f1cac */

void FUN_1007f1cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007f1ec4(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1007f1cd0 | FUN_1007f1cd0 */

void FUN_1007f1cd0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f2058(param_1,uVar1,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),param_3,
                *(undefined8 *)(param_2 + 0x18),param_4);
  *unaff_x20 = param_1;
  unaff_x20[1] = uVar1;
  return;
}



/* Address: 0x1007f1cfc | thunk_FUN_1007f1cac */

void thunk_FUN_1007f1cac(void)

{
  thunk_FUN_1007f1cac();
  return;
}



/* Address: 0x1007f1d00 | thunk_FUN_1007f1d04 */

void thunk_FUN_1007f1d04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007f54d8(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1007f1d04 | FUN_1007f1d04 */

void FUN_1007f1d04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007f54d8(param_1,param_2,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1007f1d28 | FUN_1007f1d28 */

void FUN_1007f1d28(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1007f1d64();
                    /* WARNING: Could not recover jumptable at 0x0001007f1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return;
}



/* Address: 0x1007f1d64 | FUN_1007f1d64 */

void FUN_1007f1d64(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f5e44(param_1,uVar1,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),param_3,
                *(undefined8 *)(param_2 + 0x18),param_4);
  *unaff_x20 = param_1;
  unaff_x20[1] = uVar1;
  return;
}



/* Address: 0x1007f1d90 | thunk_FUN_1007f1d04 */

void thunk_FUN_1007f1d04(void)

{
  thunk_FUN_1007f1d04();
  return;
}



/* Address: 0x1007f1d94 | FUN_1007f1d94 */

void FUN_1007f1d94(undefined8 param_1,undefined8 param_2)

{
  FUN_1007f1e74();
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007f1dcc | FUN_1007f1dcc */

void FUN_1007f1dcc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = 0x100c7a0c8;
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_getWitnessTable(0x100c7a0c8,param_3);
  FUN_1007ea780(&local_40,param_3,param_3,uVar1);
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007f1e38 | FUN_1007f1e38 */

void FUN_1007f1e38(undefined8 param_1,undefined8 param_2,long param_3)

{
  thunk_FUN_1007ea780();
                    /* WARNING: Could not recover jumptable at 0x0001007f1e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return;
}



/* Address: 0x1007f1e74 | FUN_1007f1e74 */

void FUN_1007f1e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = 0x100c7a0c8;
  local_30 = param_1;
  uStack_28 = param_2;
  _swift_getWitnessTable(0x100c7a0c8,param_3);
  FUN_1007ea780(&local_30,param_3,param_3,uVar1);
  return;
}



/* Address: 0x1007f1ec0 | thunk_FUN_1007ea780 */

void thunk_FUN_1007ea780(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar8 = *(long *)(param_2 + 0x10);
  lVar11 = *(long *)(lVar8 + -8);
  lVar9 = (long)&uStack_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_80 = param_1;
  lStack_70 = param_2;
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
  lStack_78 = *(long *)(lVar2 + -8);
  lVar3 = *(long *)(lStack_78 + 0x40);
  (**(code **)(lVar4 + 0x10))(lVar6,uStack_80,param_3);
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
      FUN_1007ea300(lVar9,lStack_70);
      (**(code **)(lVar11 + 8))(lVar9,lVar8);
      Swift::IteratorProtocol::_next();
      lVar4 = lVar10;
      (*pcVar5)(lVar10,1,lVar8);
    } while ((int)lVar4 != 1);
  }
  (**(code **)(lStack_78 + 8))(lVar6 - (lVar3 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Address: 0x1007f1ec4 | FUN_1007f1ec4 */

undefined1  [16]
FUN_1007f1ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4,
             long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_5 + -8);
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar5 = (long)&local_80 - uVar2;
  lVar6 = uVar5 - uVar2;
  lVar7 = param_5;
  uVar1 = param_6;
  FUN_1007f61ec();
  lVar4 = *(long *)(param_4.unknown + 0x10);
  local_70 = lVar7;
  uStack_68 = uVar1;
  if (lVar4 == 0) {
    _swift_release(param_4.unknown);
    _swift_release(param_3);
  }
  else {
    lVar7 = 0;
    local_80 = param_3;
    local_78 = lVar6;
    do {
      Swift::ContiguousArray::get_subscript(lVar7,param_4);
      (**(code **)(lVar3 + 0x20))(uVar5,lVar6,param_5);
      uVar2 = uVar5;
      FUN_1007f6224(uVar5,param_1,param_2,param_5,param_6);
      if ((uVar2 & 1) != 0) {
        uVar1 = 0;
        FUN_1007fa688(0,param_5,param_6);
        FUN_1007ea370(uVar5,uVar1);
        lVar6 = local_78;
      }
      lVar7 = lVar7 + 1;
      (**(code **)(lVar3 + 8))(uVar5,param_5);
    } while (lVar4 != lVar7);
    _swift_release(param_4.unknown);
    _swift_release(local_80);
    lVar7 = local_70;
    uVar1 = uStack_68;
  }
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = lVar7;
  return auVar8;
}



/* Address: 0x1007f2058 | FUN_1007f2058 */

/* WARNING: Removing unreachable block (ram,0x0001007f2164) */

undefined1  [16]
FUN_1007f2058(undefined8 param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 *puStack_c8;
  code *local_c0;
  undefined1 *puStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  
  _Var3 = Swift::ContiguousArray::get_count(param_3);
  local_90 = param_4;
  uStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_7;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3.unknown;
  if (_Var3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f2160);
    (*pcVar2)();
  }
  local_b0 = 0;
  local_a8 = 0;
  uVar4 = 0;
  FUN_1007fa688(0,param_4,param_6);
  puStack_c8 = &local_b0;
  puStack_b8 = auStack_a0;
  local_c0 = FUN_1007f247c;
  local_d0 = uVar4;
  FUN_100690d3c(_Var3 + 0x3fU >> 6,FUN_100690d20,auStack_e0);
  lVar1 = local_a8;
  uVar4 = local_b0;
  if (local_a8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f2164);
    (*pcVar2)();
  }
  _swift_retain(local_b0);
  _swift_retain(lVar1);
  _swift_release(param_3.unknown);
  _swift_release(param_2);
  FUN_1007f24a0(uVar4,lVar1);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x1007f2170 | thunk_FUN_1007f1ec4 */

void thunk_FUN_1007f1ec4(void)

{
  FUN_1007f1ec4();
  return;
}



/* Address: 0x1007f2174 | FUN_1007f2174 */

void FUN_1007f2174(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined1 *puVar11;
  undefined8 auStack_110 [2];
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_e8;
  long local_e0;
  long *local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  ulong local_78;
  char local_70;
  
  local_e0 = *(long *)(param_6 + -8);
  puVar11 = auStack_100 + -(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = param_1;
  local_d8 = param_2;
  local_d0 = param_9;
  local_c0 = param_3;
  local_b8 = param_8;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar7 = (long)puVar11 -
          (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0);
  local_c8 = *(long *)(param_7 + -8);
  lVar6 = lVar7 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_f8 = *(long *)(lVar2 + -8);
  lVar8 = lVar6 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = param_7;
  (**(code **)(local_c8 + 0x10))(lVar6,local_c0,param_7);
  uVar3 = local_d0;
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar3,local_e8,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  local_d0 = uVar3;
  local_c8 = lVar8;
  local_c0 = lVar2;
  Swift::IteratorProtocol::_next();
  lVar2 = local_e0;
  pcVar10 = *(code **)(local_e0 + 0x30);
  lVar6 = lVar7;
  (*pcVar10)(lVar7,1,param_6);
  if ((int)lVar6 != 1) {
    pcVar9 = *(code **)(lVar2 + 0x20);
    do {
      (*pcVar9)(puVar11,lVar7,param_6);
      uStack_98 = local_b8;
      puVar4 = &DAT_100fe6638;
      local_a0 = param_6;
      local_90 = param_4;
      uStack_88 = param_5;
      local_80 = puVar11;
      FUN_1000f7830(&DAT_100fe6638,&DAT_100c7a830);
      FUN_10068330c(&local_78,FUN_1007f24d0,auStack_b0,param_5,param_6,puVar4,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      if (local_70 != '\x01') {
        if ((long)local_78 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1007f247c);
          (*pcVar10)();
        }
        uVar5 = local_78 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*local_d8 + uVar5) = *(ulong *)(*local_d8 + uVar5) | 1L << (local_78 & 0x3f);
      }
      (**(code **)(lVar2 + 8))(puVar11,param_6);
      Swift::IteratorProtocol::_next();
      lVar6 = lVar7;
      (*pcVar10)(lVar7,1,param_6);
    } while ((int)lVar6 != 1);
  }
  lVar7 = local_c8;
  (**(code **)(local_f8 + 8))(local_c8,local_c0);
  lVar2 = *local_d8;
  lVar6 = local_d8[1];
  FUN_100002c1c();
  _swift_retain(param_4);
  _swift_retain(param_5);
  *(undefined8 *)(lVar8 + -0x10) = local_b8;
  FUN_1007f9970(lVar2,lVar6,0,1,lVar7,param_4,param_5,param_6);
  *local_f0 = lVar2;
  local_f0[1] = lVar6;
  return;
}



/* Address: 0x1007f247c | FUN_1007f247c */

void FUN_1007f247c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f2174(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f24a0 | FUN_1007f24a0 */

void FUN_1007f24a0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    _swift_release(param_2);
    _swift_release(param_1);
    return;
  }
  return;
}



/* Address: 0x1007f24d0 | FUN_1007f24d0 */

void FUN_1007f24d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1007f9edc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x1007f24f4 | FUN_1007f24f4 */

undefined1
FUN_1007f24f4(undefined8 param_1,undefined *param_2,undefined8 param_3,ContiguousArray param_4,
             long param_5,undefined8 param_6)

{
  bool bVar1;
  ContiguousArray CVar2;
  __int64 _Var3;
  __int64 _Var4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 auStack_90 [8];
  ContiguousArray local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  
  lVar8 = *(long *)(param_5 + -8);
  uVar7 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = auStack_90 + -uVar7;
  uVar12 = ((long)puVar11 - uVar7) - uVar7;
  local_88.unknown = param_2;
  local_80 = param_1;
  local_78 = param_3;
  local_70 = param_6;
  local_68 = param_4.unknown;
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar2.unknown
            );
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (!bVar1) {
    local_68 = local_88.unknown;
    bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
    if (!bVar1) {
      _Var3 = Swift::ContiguousArray::get_count(param_4);
      CVar2.unknown = local_88.unknown;
      _Var4 = Swift::ContiguousArray::get_count(local_88);
      if (_Var3 <= _Var4) {
        lVar9 = 0;
        lVar10 = *(long *)(param_4.unknown + 0x10);
        do {
          if (lVar10 == lVar9) {
            return 1;
          }
          Swift::ContiguousArray::get_subscript(lVar9,param_4);
          lVar9 = lVar9 + 1;
          (**(code **)(lVar8 + 0x20))(uVar12,uVar12 - uVar7,param_5);
          uVar6 = uVar12;
          FUN_1007f6224(uVar12,local_80,CVar2.unknown,param_5,local_70);
          (**(code **)(lVar8 + 8))(uVar12,param_5);
        } while ((uVar6 & 1) == 0);
        return 0;
      }
      lVar9 = 0;
      lVar10 = *(long *)(CVar2.unknown + 0x10);
      do {
        if (lVar10 == lVar9) {
          return 1;
        }
        Swift::ContiguousArray::get_subscript(lVar9,CVar2);
        lVar9 = lVar9 + 1;
        (**(code **)(lVar8 + 0x20))(puVar11,(long)puVar11 - uVar7,param_5);
        puVar5 = puVar11;
        FUN_1007f6224(puVar11,local_78,param_4.unknown,param_5,local_70);
        (**(code **)(lVar8 + 8))(puVar11,param_5);
      } while (((ulong)puVar5 & 1) == 0);
      return 0;
    }
  }
  return 1;
}



/* Address: 0x1007f26f4 | thunk_FUN_1007f24f4 */

void thunk_FUN_1007f24f4(void)

{
  FUN_1007f24f4();
  return;
}



/* Address: 0x1007f26f8 | FUN_1007f26f8 */

undefined1
FUN_1007f26f8(Set param_1,undefined8 param_2,ContiguousArray param_3,long param_4,undefined8 param_5
             )

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  Optional OVar5;
  bool bVar6;
  undefined7 extraout_var;
  ContiguousArray CVar7;
  __int64 _Var8;
  __int64 _Var9;
  Set SVar10;
  Iterator *_cocoa;
  Iterator IVar11;
  UnsafeMutablePointer<undefined> UVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  _NativeSet _Var21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 auStack_f0 [8];
  long local_e8;
  long local_e0;
  _NativeSet local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  undefined8 uStack_70;
  ulong local_68;
  
  local_c8 = param_2;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  local_c0 = auStack_f0 +
             -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 0x40) + 0xfU &
              0xfffffffffffffff0);
  lVar16 = *(long *)(param_4 + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar22 = local_c0 + -uVar14;
  lVar17 = (long)puVar22 - uVar14;
  local_88 = param_3.unknown;
  CVar7 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar7.unknown
            );
  bVar6 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if ((bVar6) || (bVar6 = Swift::Set::get_isEmpty(param_1), bVar6)) {
    uVar15 = 1;
  }
  else {
    _Var8 = Swift::ContiguousArray::get_count(param_3);
    _Var9 = Swift::Set::get_count(param_1);
    local_b8 = param_5;
    if (_Var9 < _Var8) {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        uVar14 = -1L << ((ulong)(byte)param_1.unknown[0x20] & 0x3f);
        local_78 = ~uVar14;
        puStack_80 = (ulong *)(param_1.unknown + 0x38);
        uVar14 = -uVar14;
        local_68 = 0xffffffffffffffff;
        if (uVar14 < 0x40) {
          local_68 = ~(-1L << (uVar14 & 0x3f));
        }
        local_68 = local_68 & *puStack_80;
        uStack_70 = 0;
        local_88 = param_1.unknown;
        _swift_bridgeObjectRetain(param_1.unknown);
        lVar17 = -0xa0;
        IVar11 = Swift::Set::Iterator::_init((Iterator)&local_88);
      }
      else {
        SVar10.unknown = param_1.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
          SVar10.unknown = param_1.unknown;
        }
        _swift_unknownObjectRetain();
        _cocoa = Swift::__CocoaSet::makeIterator((__CocoaSet)SVar10.unknown);
        lVar17 = -0x78;
        IVar11 = Swift::Set::Iterator::_init(_cocoa);
      }
      local_e8 = *(long *)(&stack0x00000000 + lVar17);
      lVar19 = *(long *)(&stack0x00000008 + lVar17);
      uVar18 = *(ulong *)(&stack0x00000010 + lVar17);
      local_d8.unknown = *(undefined **)(&stack0xfffffffffffffff0 + lVar17);
      lVar17 = *(long *)(&stack0xfffffffffffffff8 + lVar17);
      uVar14 = local_e8 + 0x40;
      do {
        uVar20 = local_b8;
        _Var21.unknown = local_d8.unknown;
        uVar3 = uVar18;
        lVar23 = lVar19;
        if ((long)local_d8.unknown < 0) {
          local_d0 = uVar18;
          Swift::__CocoaSet::Iterator::_next
                    ((Iterator *)((ulong)local_d8.unknown & 0x7fffffffffffffff));
          puVar13 = local_c0;
          if (IVar11.unknown == (undefined1 *)0x0) {
LAB_1007f2a7c:
            uVar15 = 1;
            (**(code **)(lVar16 + 0x38))(local_c0,1,1,param_4);
            goto LAB_1007f2a98;
          }
          Swift::__forceBridgeFromObjectiveC();
          _swift_unknownObjectRelease(IVar11.unknown);
          uVar18 = local_d0;
          uVar20 = local_b8;
          local_e0 = lVar19;
        }
        else {
          while (uVar3 == 0) {
            lVar1 = lVar23 + 1;
            if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f2ac4);
              (*pcVar4)();
            }
            if ((long)(uVar14 >> 6) <= lVar1) {
              local_d0 = 0;
              goto LAB_1007f2a7c;
            }
            lVar23 = lVar1;
            uVar3 = *(ulong *)(lVar17 + lVar1 * 8);
          }
          uVar2 = (uVar3 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar3 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          local_e0 = lVar19;
          local_d0 = uVar18;
          UVar12 = Swift::_NativeSet::get__elements(local_d8);
          puVar13 = local_c0;
          (**(code **)(lVar16 + 0x10))
                    (local_c0,UVar12.unknown +
                              *(long *)(lVar16 + 0x48) *
                              (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar23 << 6),param_4);
          uVar18 = uVar3 - 1 & uVar3;
          lVar19 = lVar23;
        }
        (**(code **)(lVar16 + 0x38))(puVar13,0,1,param_4);
        (**(code **)(lVar16 + 0x20))(puVar22,puVar13,param_4);
        puVar13 = puVar22;
        FUN_1007f6224(puVar22,local_c8,param_3.unknown,param_4,uVar20);
        IVar11.unknown = puVar22;
        (**(code **)(lVar16 + 8))(puVar22,param_4);
      } while (((ulong)puVar13 & 1) == 0);
      uVar15 = 0;
      lVar19 = local_e0;
      _Var21.unknown = local_d8.unknown;
LAB_1007f2a98:
      FUN_10000c650(_Var21.unknown,lVar17,local_e8,lVar19,local_d0);
    }
    else {
      lVar19 = 0;
      lVar23 = *(long *)(param_3.unknown + 0x10);
      do {
        if (lVar23 == lVar19) {
          return 1;
        }
        Swift::ContiguousArray::get_subscript(lVar19,param_3);
        lVar19 = lVar19 + 1;
        (**(code **)(lVar16 + 0x20))(lVar17,lVar17 - uVar14,param_4);
        bVar6 = Swift::Set::contains(lVar17,param_1.unknown,param_4,local_b8);
        (**(code **)(lVar16 + 8))(lVar17,param_4);
        uVar15 = 0;
      } while (!bVar6);
    }
  }
  return uVar15;
}



/* Address: 0x1007f2ac4 | FUN_1007f2ac4 */

bool FUN_1007f2ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  Optional OVar2;
  bool bVar3;
  undefined7 extraout_var;
  long lVar4;
  ContiguousArray CVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_4 + -8);
  uVar12 = (long)&local_a0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = param_1;
  local_78 = param_2;
  uStack_70 = param_6;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar13 = uVar12 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar10 = *(long *)(param_5 + -8);
  lVar8 = lVar13 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_a0 = lVar8;
  local_90 = param_5;
  local_88 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_80 = *(long *)(lVar4 + -8);
  lVar9 = *(long *)(local_80 + 0x40);
  local_68 = param_3;
  CVar5 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar5.unknown
            );
  bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
  lVar6 = local_90;
  if (bVar3) {
    bVar3 = true;
  }
  else {
    (**(code **)(lVar10 + 0x10))(local_a0,local_98,local_90);
    uVar1 = local_88;
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uVar1,lVar6,lVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    do {
      Swift::IteratorProtocol::_next();
      lVar6 = lVar13;
      (**(code **)(lVar11 + 0x30))(lVar13,1,param_4);
      bVar3 = (int)lVar6 == 1;
      if (bVar3) break;
      (**(code **)(lVar11 + 0x20))(uVar12,lVar13,param_4);
      uVar7 = uVar12;
      FUN_1007f6224(uVar12,local_78,param_3,param_4,uStack_70);
      (**(code **)(lVar11 + 8))(uVar12,param_4);
    } while ((uVar7 & 1) == 0);
    (**(code **)(local_80 + 8))(lVar8 - (lVar9 + 0xfU & 0xfffffffffffffff0),lVar4);
  }
  return bVar3;
}



/* Address: 0x1007f2ce4 | FUN_1007f2ce4 */

void FUN_1007f2ce4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1007f8120(param_3,param_4,param_1,param_2);
  return;
}



/* Address: 0x1007f2d00 | FUN_1007f2d00 */

uint FUN_1007f2d00(undefined8 *param_1,undefined8 param_2,undefined *param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  Optional OVar2;
  bool bVar3;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  ContiguousArray CVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  __int64 _Var9;
  __int64 _Var10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  code *pcVar20;
  long local_130;
  ContiguousArray local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulong local_100;
  long local_f8;
  long local_f0;
  undefined1 auStack_e0 [16];
  byte *local_d0;
  code *pcStack_c8;
  undefined **local_c0;
  byte local_b1;
  undefined *local_b0 [2];
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  
  local_118 = *(long *)(param_4 + -8);
  uVar13 = (long)&local_130 - (*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_100 = uVar13;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar19 = uVar13 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar4 = 0;
  local_108 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar15 = *(long *)(lVar4 + -8);
  local_f8 = lVar19 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = *(long *)(param_5 + -8);
  uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_120 = local_f8 - uVar13;
  lVar17 = local_120 - uVar13;
  lVar5 = 0;
  local_f0 = lVar4;
  FUN_1007fa688(0,param_4,param_6);
  if (param_5 == lVar5) {
    uVar11 = *param_1;
    uVar1 = param_1[1];
    _swift_retain(uVar11);
    _swift_retain(uVar1);
    FUN_1007f8120(param_2,param_3,uVar11,uVar1,param_4,param_6);
    _swift_release(uVar1);
    _swift_release(uVar11);
    uVar14 = (uint)param_2;
  }
  else {
    local_130 = lVar15;
    local_128.unknown = param_3;
    local_110 = param_2;
    local_b0[0] = param_3;
    CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,
               CVar6.unknown);
    bVar3 = (extension_Swift)::Swift::Collection::get_isEmpty();
    local_a0 = param_4;
    lStack_98 = param_5;
    local_90 = param_6;
    if (bVar3) {
      uStack_88 = local_108;
      bVar3 = (extension_Swift)::Swift::Sequence::_allSatisfy();
      uVar14 = (uint)bVar3;
    }
    else {
      pcVar20 = *(code **)(lVar16 + 0x10);
      (*pcVar20)(lVar17,param_1,param_5);
      puVar7 = &DAT_100fe69f0;
      FUN_1000f7830(&DAT_100fe69f0,0x100c7a0a0);
      ppuVar8 = local_b0;
      _swift_dynamicCast(ppuVar8,lVar17,param_5,puVar7,6);
      local_70 = local_128.unknown;
      if ((int)ppuVar8 == 0) {
        _Var9 = Swift::ContiguousArray::get_count(local_128);
        uStack_88 = local_108;
        uStack_78 = local_110;
        local_80 = param_1;
        if (_Var9 < 0) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1007f316c);
          (*pcVar20)();
        }
        local_b1 = 2;
        local_d0 = &local_b1;
        pcStack_c8 = FUN_1007f3404;
        local_c0 = local_b0;
        FUN_100690d3c(_Var9 + 0x3fU >> 6,FUN_1007f3428,auStack_e0);
        uVar14 = (uint)local_b1;
        if (local_b1 == 2) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1007f306c);
          (*pcVar20)();
        }
      }
      else {
        FUN_100004594(local_b0);
        uVar11 = local_108;
        _Var9 = Swift::Sequence::get_underestimatedCount();
        _Var10 = Swift::ContiguousArray::get_count(local_128);
        if (_Var10 < _Var9) {
LAB_1007f3140:
          uVar14 = 0;
        }
        else {
          (*pcVar20)(local_120,param_1,param_5);
          Swift::Sequence::_makeIterator();
          _swift_getAssociatedConformanceWitness
                    (uVar11,param_5,local_f0,
                     PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                     PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                    );
          local_108 = uVar11;
          Swift::IteratorProtocol::_next();
          lVar4 = local_118;
          pcVar20 = *(code **)(local_118 + 0x30);
          lVar5 = lVar19;
          (*pcVar20)(lVar19,1,param_4);
          CVar6.unknown = local_128.unknown;
          if ((int)lVar5 == 1) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            pcVar18 = *(code **)(lVar4 + 0x20);
            do {
              uVar13 = local_100;
              (*pcVar18)(local_100,lVar19,param_4);
              uVar12 = uVar13;
              FUN_1007f6224(uVar13,local_110,CVar6.unknown,param_4,param_6);
              (**(code **)(lVar4 + 8))(uVar13,param_4);
              if ((uVar12 & 1) == 0) {
                (**(code **)(local_130 + 8))(local_f8,local_f0);
                goto LAB_1007f3140;
              }
              lVar5 = lVar5 + 1;
              Swift::IteratorProtocol::_next();
              lVar15 = lVar19;
              (*pcVar20)(lVar19,1,param_4);
            } while ((int)lVar15 != 1);
          }
          (**(code **)(local_130 + 8))(local_f8,local_f0);
          _Var9 = Swift::ContiguousArray::get_count(CVar6);
          if (_Var9 < lVar5) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x1007f3170);
            (*pcVar20)();
          }
          _Var9 = Swift::ContiguousArray::get_count(CVar6);
          uVar14 = (uint)(lVar5 == _Var9);
        }
      }
    }
  }
  return uVar14 & 1;
}



/* Address: 0x1007f3170 | FUN_1007f3170 */

void FUN_1007f3170(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ContiguousArray param_5,long param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  bool bVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar3;
  ulong uVar4;
  __int64 _Var5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long local_b0;
  undefined8 local_a8;
  
  lVar7 = *(long *)(param_6 + -8);
  uVar16 = (long)&local_b0 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar9 = uVar16 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                   0xfffffffffffffff0);
  lVar11 = *(long *)(param_7 + -8);
  lVar10 = lVar9 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_b0 = *(long *)(lVar3 + -8);
  lVar14 = lVar10 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(lVar10,param_3,param_7);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_9,param_7,lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar13 = *(code **)(lVar7 + 0x30);
  lVar11 = lVar9;
  (*pcVar13)(lVar9,1,param_6);
  lVar10 = 0;
  if ((int)lVar11 != 1) {
    lVar10 = 0;
    pcVar12 = *(code **)(lVar7 + 0x20);
    do {
      (*pcVar12)(uVar16,lVar9,param_6);
      uVar4 = uVar16;
      uVar6 = param_4;
      FUN_1007f9250(uVar16,param_4,param_5.unknown,param_6,param_8);
      if (((uint)uVar6 & 0xff) == 1) {
        (**(code **)(lVar7 + 8))(uVar16,param_6);
        (**(code **)(local_b0 + 8))(lVar14,lVar3);
        bVar1 = false;
        goto LAB_1007f33d8;
      }
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1007f3404);
        (*pcVar13)();
      }
      uVar8 = uVar4 >> 3 & 0x1ffffffffffffff8;
      uVar15 = *(ulong *)(*param_2 + uVar8);
      *(ulong *)(*param_2 + uVar8) = uVar15 | 1L << (uVar4 & 0x3f);
      (**(code **)(lVar7 + 8))(uVar16,param_6);
      lVar10 = (~uVar15 >> (uVar4 & 0x3f) & 1) + lVar10;
      Swift::IteratorProtocol::_next();
      lVar11 = lVar9;
      (*pcVar13)(lVar9,1,param_6);
    } while ((int)lVar11 != 1);
  }
  (**(code **)(local_b0 + 8))(lVar14,lVar3);
  _Var5 = Swift::ContiguousArray::get_count(param_5);
  bVar1 = lVar10 == _Var5;
LAB_1007f33d8:
  *(bool *)local_a8 = bVar1;
  return;
}



/* Address: 0x1007f3404 | FUN_1007f3404 */

void FUN_1007f3404(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f3170(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f3428 | FUN_1007f3428 */

void FUN_1007f3428(void)

{
  undefined1 *puVar1;
  long unaff_x20;
  long unaff_x21;
  undefined1 local_21;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  (**(code **)(unaff_x20 + 0x18))(&local_21);
  if (unaff_x21 == 0) {
    *puVar1 = local_21;
  }
  return;
}



/* Address: 0x1007f3464 | FUN_1007f3464 */

void FUN_1007f3464(undefined8 param_1,undefined1 *param_2,code *param_3)

{
  long unaff_x21;
  undefined1 local_21;
  
  (*param_3)(&local_21);
  if (unaff_x21 == 0) {
    *param_2 = local_21;
  }
  return;
}



/* Address: 0x1007f34a0 | thunk_FUN_1007f2ce4 */

void thunk_FUN_1007f2ce4(void)

{
  FUN_1007f2ce4();
  return;
}



/* Address: 0x1007f34a4 | FUN_1007f34a4 */

undefined8
FUN_1007f34a4(undefined8 param_1,ContiguousArray param_2,undefined8 param_3,ContiguousArray param_4,
             undefined8 param_5,undefined8 param_6)

{
  __int64 _Var1;
  __int64 _Var2;
  
  _Var1 = Swift::ContiguousArray::get_count(param_4);
  _Var2 = Swift::ContiguousArray::get_count(param_2);
  if (_Var1 < _Var2) {
    FUN_1007f4438(param_1,param_2.unknown,param_3,param_4.unknown,param_5,param_6);
    return param_1;
  }
  return 0;
}



/* Address: 0x1007f3544 | thunk_FUN_1007f34a4 */

void thunk_FUN_1007f34a4(void)

{
  FUN_1007f34a4();
  return;
}



/* Address: 0x1007f3548 | FUN_1007f3548 */

Set FUN_1007f3548(Set param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
                 undefined8 param_5)

{
  __int64 _Var1;
  __int64 _Var2;
  
  _Var1 = Swift::ContiguousArray::get_count(param_3);
  _Var2 = Swift::Set::get_count(param_1);
  if (_Var1 < _Var2) {
    FUN_1007f454c(param_1.unknown,param_2,param_3.unknown,param_4,param_5);
    return (Set)param_1.unknown;
  }
  return (Set)(undefined *)0x0;
}



/* Address: 0x1007f35d8 | FUN_1007f35d8 */

uint FUN_1007f35d8(undefined8 *param_1,undefined8 param_2,ContiguousArray param_3,long param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  Set SVar4;
  ulong uVar5;
  __int64 _Var6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_120 [8];
  ulong local_118;
  undefined8 local_110;
  code *local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined1 auStack_e0 [16];
  byte *local_d0;
  code *pcStack_c8;
  undefined1 *local_c0;
  byte local_b1;
  undefined1 auStack_b0 [16];
  long local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined *puStack_78;
  undefined *local_70;
  
  local_f8 = *(long *)(param_4 + -8);
  uVar9 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)(auStack_120 + -uVar9) - uVar9;
  uVar12 = (lVar14 - uVar9) - uVar9;
  puVar3 = (undefined *)0x0;
  local_f0 = param_7;
  FUN_1007fa688(0,param_4,param_6);
  if (param_5 == puVar3) {
    uVar8 = *param_1;
    uVar11 = param_1[1];
    _swift_retain(uVar8);
    _swift_retain(uVar11);
    uVar7 = uVar8;
    FUN_1007f34a4(uVar8,uVar11,param_2,param_3.unknown,param_4,param_6);
    uVar10 = (uint)uVar7;
    _swift_release(uVar11);
    _swift_release(uVar8);
  }
  else {
    local_110 = param_2;
    SVar4 = Swift::Set::typeMetadataAccessor();
    if (param_5 != SVar4.unknown) {
      local_100 = *(long *)(param_3.unknown + 0x10);
      local_a0 = param_4;
      puStack_98 = param_5;
      local_90 = param_6;
      if (local_100 == 0) {
        uStack_88 = local_f0;
        bVar2 = (extension_Swift)::Swift::Sequence::_contains();
        return (uint)bVar2;
      }
      Swift::ContiguousArray::get_subscript(0,param_3);
      lVar13 = local_f8;
      local_108 = *(code **)(local_f8 + 0x20);
      (*local_108)(uVar12,lVar14 - uVar9,param_4);
      uVar8 = local_f0;
      uVar5 = uVar12;
      Swift::Sequence::__customContainsEquatableElement();
      if (((uint)uVar5 & 0xff) != 2) {
        if ((uVar5 & 1) == 0) {
          (**(code **)(lVar13 + 8))(uVar12,param_4);
          return 0;
        }
        lVar13 = 1;
        local_118 = uVar12;
        do {
          if (local_100 == lVar13) {
            uStack_88 = local_f0;
            local_80 = (undefined8 *)local_110;
            puStack_78 = param_3.unknown;
            bVar2 = (extension_Swift)::Swift::Sequence::_allSatisfy();
            (**(code **)(local_f8 + 8))(local_118,param_4);
            return bVar2 ^ 1;
          }
          Swift::ContiguousArray::get_subscript(lVar13,param_3);
          lVar13 = lVar13 + 1;
          (*local_108)(lVar14,auStack_120 + -uVar9,param_4);
          bVar2 = (extension_Swift)::Swift::Sequence::_contains();
          pcVar1 = *(code **)(local_f8 + 8);
          (*pcVar1)(lVar14,param_4);
        } while (bVar2);
        (*pcVar1)(local_118,param_4);
        return 0;
      }
      _Var6 = Swift::ContiguousArray::get_count(param_3);
      uStack_88 = uVar8;
      puStack_78 = (undefined *)local_110;
      local_80 = param_1;
      local_70 = param_3.unknown;
      if (_Var6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f3930);
        (*pcVar1)();
      }
      local_b1 = 2;
      local_d0 = &local_b1;
      pcStack_c8 = FUN_1007f3c44;
      local_c0 = auStack_b0;
      FUN_100690d3c(_Var6 + 0x3fU >> 6,FUN_1007f3c68,auStack_e0);
      uVar10 = (uint)local_b1;
      if (uVar10 != 2) {
        (**(code **)(lVar13 + 8))(uVar12,param_4);
        return uVar10 & 1;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f3934);
      (*pcVar1)();
    }
    uVar11 = *param_1;
    uVar8 = uVar11;
    _swift_bridgeObjectRetain(uVar11);
    uVar10 = (uint)uVar8;
    FUN_1007f3548();
    _swift_bridgeObjectRelease(uVar11);
  }
  return uVar10 & 1;
}



/* Address: 0x1007f3934 | FUN_1007f3934 */

void FUN_1007f3934(undefined1 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ContiguousArray param_5,long param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar5;
  __int64 _Var6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  code *pcVar18;
  code *pcVar19;
  ulong uVar20;
  long local_c0;
  undefined1 *local_b8;
  long local_98;
  
  lVar8 = *(long *)(param_6 + -8);
  uVar20 = (long)&local_c0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = param_1;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar16 = uVar20 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar14 = *(long *)(param_7 + -8);
  lVar15 = lVar16 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_c0 = *(long *)(lVar5 + -8);
  lVar9 = *(long *)(local_c0 + 0x40);
  (**(code **)(lVar14 + 0x10))(lVar15,param_3,param_7);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_9,param_7,lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar19 = *(code **)(lVar8 + 0x30);
  lVar14 = lVar16;
  (*pcVar19)(lVar16,1,param_6);
  if ((int)lVar14 != 1) {
    bVar13 = false;
    bVar2 = 0;
    local_98 = 0;
    pcVar18 = *(code **)(lVar8 + 0x20);
    do {
      (*pcVar18)(uVar20,lVar16,param_6);
      uVar11 = uVar20;
      uVar7 = param_4;
      FUN_1007f9250(uVar20,param_4,param_5.unknown,param_6,param_8);
      if (((uint)uVar7 & 0xff) == 1) {
        if (bVar13) {
          bVar2 = 1;
          bVar13 = true;
LAB_1007f3af8:
          (**(code **)(lVar8 + 8))(uVar20,param_6);
          bVar1 = bVar2;
        }
        else {
          _Var6 = Swift::ContiguousArray::get_count(param_5);
          (**(code **)(lVar8 + 8))(uVar20,param_6);
          uVar17 = 1;
          bVar13 = true;
          bVar1 = 1;
          if (local_98 == _Var6) goto LAB_1007f3a9c;
        }
      }
      else {
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1007f3c44);
          (*pcVar19)();
        }
        uVar10 = uVar11 >> 3 & 0x1ffffffffffffff8;
        uVar11 = 1L << (uVar11 & 0x3f);
        uVar12 = *(ulong *)(*param_2 + uVar10);
        *(ulong *)(*param_2 + uVar10) = uVar12 | uVar11;
        if ((uVar12 & uVar11) != 0) goto LAB_1007f3af8;
        local_98 = local_98 + 1;
        _Var6 = Swift::ContiguousArray::get_count(param_5);
        (**(code **)(lVar8 + 8))(uVar20,param_6);
        bVar1 = local_98 != _Var6 & bVar2;
        if ((local_98 == _Var6) && (!(bool)(bVar2 ^ 1))) {
          uVar17 = 1;
          goto LAB_1007f3a9c;
        }
      }
      bVar2 = bVar1;
      Swift::IteratorProtocol::_next();
      lVar14 = lVar16;
      (*pcVar19)(lVar16,1,param_6);
    } while ((int)lVar14 != 1);
  }
  uVar17 = 0;
LAB_1007f3a9c:
  puVar3 = local_b8;
  (**(code **)(local_c0 + 8))(lVar15 - (lVar9 + 0xfU & 0xfffffffffffffff0),lVar5);
  *puVar3 = uVar17;
  return;
}



/* Address: 0x1007f3c44 | FUN_1007f3c44 */

void FUN_1007f3c44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f3934(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f3c68 | FUN_1007f3c68 */

void FUN_1007f3c68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f3464(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1007f3c84 | FUN_1007f3c84 */

uint FUN_1007f3c84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f6224(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x20));
  return (uint)param_1 & 1;
}



/* Address: 0x1007f3cb8 | FUN_1007f3cb8 */

undefined8
FUN_1007f3cb8(undefined8 param_1,ContiguousArray param_2,undefined8 param_3,ContiguousArray param_4,
             undefined8 param_5,undefined8 param_6)

{
  __int64 _Var1;
  __int64 _Var2;
  
  _Var1 = Swift::ContiguousArray::get_count(param_4);
  _Var2 = Swift::ContiguousArray::get_count(param_2);
  if (_Var2 < _Var1) {
    FUN_1007f4438(param_3,param_4.unknown,param_1,param_2.unknown,param_5,param_6);
    return param_3;
  }
  return 0;
}



/* Address: 0x1007f3d58 | thunk_FUN_1007f3cb8 */

void thunk_FUN_1007f3cb8(void)

{
  FUN_1007f3cb8();
  return;
}


