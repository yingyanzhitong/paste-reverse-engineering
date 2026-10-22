/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007f3d5c | FUN_1007f3d5c */

bool FUN_1007f3d5c(Set param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
                  undefined8 param_5)

{
  bool bVar1;
  __int64 _Var2;
  __int64 _Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined *puStack_48;
  
  _Var2 = Swift::ContiguousArray::get_count(param_3);
  _Var3 = Swift::Set::get_count(param_1);
  if (_Var3 < _Var2) {
    uVar4 = 0;
    local_50 = param_2;
    puStack_48 = param_3.unknown;
    FUN_1007fa688(0,param_4,param_5);
    uVar5 = 0x100c7a0c8;
    _swift_getWitnessTable(0x100c7a0c8,uVar4);
    bVar1 = Swift::Set::_isSubset(&local_50,param_1.unknown,param_4,uVar4,param_5,uVar5);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x1007f3e18 | FUN_1007f3e18 */

uint FUN_1007f3e18(undefined8 *param_1,long param_2,ContiguousArray param_3,long param_4,
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
  long lVar12;
  long lVar13;
  long lVar14;
  code *local_110;
  long local_108;
  long local_100;
  ulong local_f8;
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
  
  lVar13 = *(long *)(param_4 + -8);
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = ((long)&local_110 - uVar9) - uVar9;
  local_f8 = (lVar14 - uVar9) - uVar9;
  puVar3 = (undefined *)0x0;
  local_f0 = param_7;
  FUN_1007fa688(0,param_4,param_6);
  if (param_5 == puVar3) {
    uVar8 = *param_1;
    uVar11 = param_1[1];
    _swift_retain(uVar8);
    _swift_retain(uVar11);
    uVar7 = uVar8;
    FUN_1007f3cb8(uVar8,uVar11,param_2,param_3.unknown,param_4,param_6);
    uVar10 = (uint)uVar7;
    _swift_release(uVar11);
    _swift_release(uVar8);
  }
  else {
    local_100 = param_2;
    SVar4 = Swift::Set::typeMetadataAccessor();
    if (param_5 != SVar4.unknown) {
      local_108 = *(long *)(param_3.unknown + 0x10);
      if (local_108 == 0) {
        return 0;
      }
      Swift::ContiguousArray::get_subscript(0,param_3);
      uVar5 = local_f8;
      local_110 = *(code **)(lVar13 + 0x20);
      (*local_110)(local_f8,lVar14 - uVar9,param_4);
      uVar8 = local_f0;
      Swift::Sequence::__customContainsEquatableElement();
      local_a0 = param_4;
      puStack_98 = param_5;
      local_90 = param_6;
      if (((uint)uVar5 & 0xff) == 2) {
        _Var6 = Swift::ContiguousArray::get_count(param_3);
        uStack_88 = uVar8;
        puStack_78 = (undefined *)local_100;
        local_80 = param_1;
        local_70 = param_3.unknown;
        if (_Var6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f4148);
          (*pcVar1)();
        }
        local_b1 = 2;
        local_d0 = &local_b1;
        pcStack_c8 = FUN_1007f4414;
        local_c0 = auStack_b0;
        FUN_100690d3c(_Var6 + 0x3fU >> 6,FUN_1007f3c68,auStack_e0);
        uVar10 = (uint)local_b1;
        if (uVar10 != 2) {
          (**(code **)(lVar13 + 8))(local_f8,param_4);
          return uVar10 & 1;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f414c);
        (*pcVar1)();
      }
      uStack_88 = uVar8;
      local_80 = (undefined8 *)local_100;
      puStack_78 = param_3.unknown;
      bVar2 = (extension_Swift)::Swift::Sequence::_allSatisfy();
      if (bVar2) {
        if ((uVar5 & 1) == 0) {
          (**(code **)(lVar13 + 8))(local_f8,param_4);
        }
        else {
          lVar12 = 1;
          local_100 = lVar13;
          do {
            if (local_108 == lVar12) {
              pcVar1 = *(code **)(local_100 + 8);
              goto LAB_1007f4130;
            }
            Swift::ContiguousArray::get_subscript(lVar12,param_3);
            lVar12 = lVar12 + 1;
            (*local_110)(lVar14,(long)&local_110 - uVar9,param_4);
            bVar2 = (extension_Swift)::Swift::Sequence::_contains();
            pcVar1 = *(code **)(local_100 + 8);
            (*pcVar1)(lVar14,param_4);
          } while (bVar2);
          (*pcVar1)(local_f8,param_4);
        }
        return 1;
      }
      pcVar1 = *(code **)(lVar13 + 8);
LAB_1007f4130:
      (*pcVar1)(local_f8,param_4);
      return 0;
    }
    uVar11 = *param_1;
    uVar8 = uVar11;
    _swift_bridgeObjectRetain(uVar11);
    uVar10 = (uint)uVar8;
    FUN_1007f3d5c();
    _swift_bridgeObjectRelease(uVar11);
  }
  return uVar10 & 1;
}



/* Address: 0x1007f414c | FUN_1007f414c */

void FUN_1007f414c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ContiguousArray param_5,long param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  __int64 _Var3;
  undefined1 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  
  lVar7 = *(long *)(param_6 + -8);
  puVar17 = auStack_b0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar11 = (long)puVar17 -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  lVar13 = *(long *)(param_7 + -8);
  lVar12 = lVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_a8 = *(long *)(lVar2 + -8);
  lVar16 = lVar12 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar13 + 0x10))(lVar12,param_3,param_7);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_9,param_7,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar15 = *(code **)(lVar7 + 0x30);
  lVar13 = lVar11;
  (*pcVar15)(lVar11,1,param_6);
  lVar12 = 0;
  if ((int)lVar13 != 1) {
    lVar12 = 0;
    pcVar14 = *(code **)(lVar7 + 0x20);
    do {
      (*pcVar14)(puVar17,lVar11,param_6);
      puVar4 = puVar17;
      uVar5 = param_4;
      FUN_1007f9250(puVar17,param_4,param_5.unknown,param_6,param_8);
      if (((uint)uVar5 & 0xff) == 1) {
        (**(code **)(lVar7 + 8))(puVar17,param_6);
LAB_1007f43d0:
        (**(code **)(local_a8 + 8))(lVar16,lVar2);
        bVar6 = false;
        goto LAB_1007f43e8;
      }
      if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1007f4414);
        (*pcVar15)();
      }
      uVar8 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      uVar9 = 1L << ((ulong)puVar4 & 0x3f);
      uVar10 = *(ulong *)(*param_2 + uVar8);
      *(ulong *)(*param_2 + uVar8) = uVar10 | uVar9;
      if ((uVar10 & uVar9) == 0) {
        lVar12 = lVar12 + 1;
        _Var3 = Swift::ContiguousArray::get_count(param_5);
        (**(code **)(lVar7 + 8))(puVar17,param_6);
        if (lVar12 == _Var3) goto LAB_1007f43d0;
      }
      else {
        (**(code **)(lVar7 + 8))(puVar17,param_6);
      }
      Swift::IteratorProtocol::_next();
      lVar13 = lVar11;
      (*pcVar15)(lVar11,1,param_6);
    } while ((int)lVar13 != 1);
  }
  (**(code **)(local_a8 + 8))(lVar16,lVar2);
  _Var3 = Swift::ContiguousArray::get_count(param_5);
  bVar6 = lVar12 < _Var3;
LAB_1007f43e8:
  *(bool *)local_a0 = bVar6;
  return;
}



/* Address: 0x1007f4414 | FUN_1007f4414 */

void FUN_1007f4414(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f414c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f4438 | FUN_1007f4438 */

undefined1
FUN_1007f4438(undefined8 param_1,ContiguousArray param_2,undefined8 param_3,ContiguousArray param_4,
             long param_5,undefined8 param_6)

{
  __int64 _Var1;
  __int64 _Var2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = *(long *)(param_5 + -8);
  uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  uVar7 = (long)&local_70 - uVar4;
  local_70 = param_1;
  uStack_68 = param_6;
  _Var1 = Swift::ContiguousArray::get_count(param_2);
  _Var2 = Swift::ContiguousArray::get_count(param_4);
  if (_Var2 <= _Var1) {
    lVar8 = 0;
    lVar6 = *(long *)(param_4.unknown + 0x10);
    do {
      if (lVar6 == lVar8) {
        return 1;
      }
      Swift::ContiguousArray::get_subscript(lVar8,param_4);
      lVar8 = lVar8 + 1;
      (**(code **)(lVar5 + 0x20))(uVar7,uVar7 - uVar4,param_5);
      uVar3 = uVar7;
      FUN_1007f6224(uVar7,local_70,param_2.unknown,param_5,uStack_68);
      (**(code **)(lVar5 + 8))(uVar7,param_5);
    } while ((uVar3 & 1) != 0);
  }
  return 0;
}



/* Address: 0x1007f454c | FUN_1007f454c */

undefined1
FUN_1007f454c(Set param_1,undefined8 param_2,ContiguousArray param_3,long param_4,undefined8 param_5
             )

{
  bool bVar1;
  __int64 _Var2;
  __int64 _Var3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined *local_68;
  
  lVar8 = *(long *)(param_4 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar6 = auStack_70 + -uVar4;
  local_68 = param_1.unknown;
  _Var2 = Swift::Set::get_count(param_1);
  _Var3 = Swift::ContiguousArray::get_count(param_3);
  if (_Var3 <= _Var2) {
    lVar7 = 0;
    lVar5 = *(long *)(param_3.unknown + 0x10);
    do {
      if (lVar5 == lVar7) {
        return 1;
      }
      Swift::ContiguousArray::get_subscript(lVar7,param_3);
      lVar7 = lVar7 + 1;
      (**(code **)(lVar8 + 0x20))(puVar6,(long)puVar6 - uVar4,param_4);
      bVar1 = Swift::Set::contains(puVar6,local_68,param_4,param_5);
      (**(code **)(lVar8 + 8))(puVar6,param_4);
    } while (bVar1);
  }
  return 0;
}



/* Address: 0x1007f4664 | thunk_FUN_1007f4438 */

void thunk_FUN_1007f4438(void)

{
  FUN_1007f4438();
  return;
}



/* Address: 0x1007f4668 | FUN_1007f4668 */

uint FUN_1007f4668(undefined8 *param_1,undefined8 param_2,ContiguousArray param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  ContiguousArray CVar6;
  long lVar7;
  ulong uVar8;
  __int64 _Var9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_110 [8];
  ulong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
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
  
  lVar14 = *(long *)(param_4 + -8);
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_110 + -uVar11) - uVar11;
  uVar15 = lVar16 - uVar11;
  local_108 = param_2;
  local_f8 = param_7;
  local_f0 = param_1;
  local_b0[0] = param_3.unknown;
  CVar6 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar6.unknown
            );
  bVar5 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (bVar5) {
LAB_1007f470c:
    uVar12 = 1;
  }
  else {
    lVar7 = 0;
    FUN_1007fa688(0,param_4,param_6);
    puVar3 = local_f0;
    if (param_5 == lVar7) {
      uVar1 = *local_f0;
      uVar2 = local_f0[1];
      _swift_retain(uVar1);
      _swift_retain(uVar2);
      uVar10 = uVar1;
      FUN_1007f4438(uVar1,uVar2);
      uVar12 = (uint)uVar10;
      _swift_release(uVar2);
      _swift_release(uVar1);
    }
    else {
      lVar7 = *(long *)(param_3.unknown + 0x10);
      local_100 = param_6;
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f490c);
        (*pcVar4)();
      }
      Swift::ContiguousArray::get_subscript(0,param_3);
      uVar1 = local_f8;
      uVar8 = uVar15;
      Swift::Sequence::__customContainsEquatableElement();
      if (((uint)uVar8 & 0xff) == 2) {
        _Var9 = Swift::ContiguousArray::get_count(param_3);
        local_90 = local_100;
        uStack_88 = uVar1;
        local_80 = puVar3;
        uStack_78 = local_108;
        local_a0 = param_4;
        lStack_98 = param_5;
        local_70 = param_3.unknown;
        if (_Var9 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f4910);
          (*pcVar4)();
        }
        local_b1 = 2;
        local_d0 = &local_b1;
        pcStack_c8 = FUN_1007f4b9c;
        local_c0 = local_b0;
        FUN_100690d3c(_Var9 + 0x3fU >> 6,FUN_1007f3c68,auStack_e0);
        uVar12 = (uint)local_b1;
        if (local_b1 == 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007f4914);
          (*pcVar4)();
        }
        (**(code **)(lVar14 + 8))(uVar15,param_4);
      }
      else if ((uVar8 & 1) == 0) {
        (**(code **)(lVar14 + 8))(uVar15,param_4);
        uVar12 = 0;
      }
      else {
        lVar13 = 1;
        local_108 = uVar15;
        do {
          if (lVar7 == lVar13) {
            (**(code **)(lVar14 + 8))(local_108,param_4);
            goto LAB_1007f470c;
          }
          Swift::ContiguousArray::get_subscript(lVar13,param_3);
          lVar13 = lVar13 + 1;
          (**(code **)(lVar14 + 0x20))(lVar16,auStack_110 + -uVar11,param_4);
          bVar5 = (extension_Swift)::Swift::Sequence::_contains();
          pcVar4 = *(code **)(lVar14 + 8);
          (*pcVar4)(lVar16,param_4);
        } while (bVar5);
        (*pcVar4)(local_108,param_4);
        uVar12 = 0;
      }
    }
  }
  return uVar12 & 1;
}



/* Address: 0x1007f4914 | FUN_1007f4914 */

void FUN_1007f4914(undefined1 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  ContiguousArray param_5,long param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  __int64 _Var5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  code *pcVar17;
  undefined1 *puVar18;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined1 *local_a0;
  
  lVar7 = *(long *)(param_6 + -8);
  puVar18 = auStack_b0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar13 = (long)puVar18 -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  lVar15 = *(long *)(param_7 + -8);
  lVar14 = lVar13 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_a8 = *(long *)(lVar2 + -8);
  lVar8 = *(long *)(local_a8 + 0x40);
  (**(code **)(lVar15 + 0x10))(lVar14,param_3,param_7);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_9,param_7,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar17 = *(code **)(lVar7 + 0x30);
  lVar15 = lVar13;
  (*pcVar17)(lVar13,1,param_6);
  if ((int)lVar15 != 1) {
    lVar15 = 0;
    pcVar16 = *(code **)(lVar7 + 0x20);
    do {
      (*pcVar16)(puVar18,lVar13,param_6);
      puVar4 = puVar18;
      uVar6 = param_4;
      FUN_1007f9250(puVar18,param_4,param_5.unknown,param_6,param_8);
      if (((uint)uVar6 & 0xff) == 1) {
LAB_1007f4acc:
        (**(code **)(lVar7 + 8))(puVar18,param_6);
      }
      else {
        if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1007f4b9c);
          (*pcVar17)();
        }
        uVar9 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
        uVar10 = 1L << ((ulong)puVar4 & 0x3f);
        uVar11 = *(ulong *)(*param_2 + uVar9);
        *(ulong *)(*param_2 + uVar9) = uVar11 | uVar10;
        if ((uVar11 & uVar10) != 0) goto LAB_1007f4acc;
        lVar15 = lVar15 + 1;
        _Var5 = Swift::ContiguousArray::get_count(param_5);
        (**(code **)(lVar7 + 8))(puVar18,param_6);
        if (lVar15 == _Var5) {
          uVar12 = 1;
          goto LAB_1007f4a7c;
        }
      }
      Swift::IteratorProtocol::_next();
      lVar3 = lVar13;
      (*pcVar17)(lVar13,1,param_6);
    } while ((int)lVar3 != 1);
  }
  uVar12 = 0;
LAB_1007f4a7c:
  (**(code **)(local_a8 + 8))(lVar14 - (lVar8 + 0xfU & 0xfffffffffffffff0),lVar2);
  *local_a0 = uVar12;
  return;
}



/* Address: 0x1007f4b9c | FUN_1007f4b9c */

void FUN_1007f4b9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f4914(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f4bc0 | FUN_1007f4bc0 */

void FUN_1007f4bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1007f4438(param_3,param_4,param_1,param_2);
  return;
}



/* Address: 0x1007f4bdc | FUN_1007f4bdc */

uint FUN_1007f4bdc(Set param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  __int64 _Var2;
  __int64 _Var3;
  Set SVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *local_48;
  
  _Var2 = Swift::ContiguousArray::get_count(param_3);
  _Var3 = Swift::Set::get_count(param_1);
  if (_Var2 < _Var3) {
    uVar1 = 0;
  }
  else {
    local_48 = param_1.unknown;
    SVar4 = Swift::Set::typeMetadataAccessor();
    puVar5 = PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Set<undefined>_>Swift__Sequence_100eac6d0,SVar4.unknown);
    ppuVar6 = &local_48;
    FUN_1007f4c9c(ppuVar6,param_2,param_3.unknown,param_4,SVar4.unknown,param_5,puVar5);
    uVar1 = (uint)ppuVar6;
  }
  return uVar1 & 1;
}



/* Address: 0x1007f4c9c | FUN_1007f4c9c */

uint FUN_1007f4c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  uint uVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long local_90;
  long local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_4 + -8);
  uVar11 = (long)&local_90 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_1;
  local_78 = param_3;
  local_68 = param_2;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar12 = uVar11 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  local_90 = *(long *)(param_5 + -8);
  lVar9 = lVar12 - (*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_70 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_88 = *(long *)(lVar5 + -8);
  lVar13 = lVar9 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1007fa688(0,param_4,param_6);
  uVar1 = local_78;
  if (param_5 == lVar6) {
    uVar1 = *local_80;
    uVar2 = local_80[1];
    _swift_retain(uVar1);
    _swift_retain(uVar2);
    uVar8 = local_68;
    FUN_1007f4438(local_68,local_78,uVar1,uVar2,param_4,param_6);
    _swift_release(uVar2);
    _swift_release(uVar1);
    uVar4 = (uint)uVar8 & 1;
  }
  else {
    (**(code **)(local_90 + 0x10))(lVar9,local_80,param_5);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (local_70,param_5,lVar5,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    do {
      Swift::IteratorProtocol::_next();
      lVar6 = lVar12;
      (**(code **)(lVar10 + 0x30))(lVar12,1,param_4);
      if ((int)lVar6 == 1) {
        (**(code **)(local_88 + 8))(lVar13,lVar5);
        return 1;
      }
      (**(code **)(lVar10 + 0x20))(uVar11,lVar12,param_4);
      uVar7 = uVar11;
      FUN_1007f6224(uVar11,local_68,uVar1,param_4,param_6);
      (**(code **)(lVar10 + 8))(uVar11,param_4);
    } while ((uVar7 & 1) != 0);
    (**(code **)(local_88 + 8))(lVar13,lVar5);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1007f4f00 | thunk_FUN_1007f4c9c */

uint thunk_FUN_1007f4c9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  uint uVar4;
  undefined7 extraout_var;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_4 + -8);
  uVar11 = (long)&lStack_90 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_80 = param_1;
  uStack_78 = param_3;
  uStack_68 = param_2;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar12 = uVar11 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar3.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lStack_90 = *(long *)(param_5 + -8);
  lVar9 = lVar12 - (*(long *)(lStack_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  uStack_70 = param_7;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lStack_88 = *(long *)(lVar5 + -8);
  lVar13 = lVar9 - (*(long *)(lStack_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_1007fa688(0,param_4,param_6);
  uVar1 = uStack_78;
  if (param_5 == lVar6) {
    uVar1 = *puStack_80;
    uVar2 = puStack_80[1];
    _swift_retain(uVar1);
    _swift_retain(uVar2);
    uVar8 = uStack_68;
    FUN_1007f4438(uStack_68,uStack_78,uVar1,uVar2,param_4,param_6);
    _swift_release(uVar2);
    _swift_release(uVar1);
    uVar4 = (uint)uVar8 & 1;
  }
  else {
    (**(code **)(lStack_90 + 0x10))(lVar9,puStack_80,param_5);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uStack_70,param_5,lVar5,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    do {
      Swift::IteratorProtocol::_next();
      lVar6 = lVar12;
      (**(code **)(lVar10 + 0x30))(lVar12,1,param_4);
      if ((int)lVar6 == 1) {
        (**(code **)(lStack_88 + 8))(lVar13,lVar5);
        return 1;
      }
      (**(code **)(lVar10 + 0x20))(uVar11,lVar12,param_4);
      uVar7 = uVar11;
      FUN_1007f6224(uVar11,uStack_68,uVar1,param_4,param_6);
      (**(code **)(lVar10 + 8))(uVar11,param_4);
    } while ((uVar7 & 1) != 0);
    (**(code **)(lStack_88 + 8))(lVar13,lVar5);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1007f4f04 | thunk_FUN_1007f4bc0 */

void thunk_FUN_1007f4bc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  FUN_1007f4438(param_3,param_4,param_1,param_2);
  return;
}



/* Address: 0x1007f4f08 | thunk_FUN_1007f4f0c */

void thunk_FUN_1007f4f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = &uStack_50;
  uVar6 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = 0x100c7a0c8;
  uStack_50 = param_1;
  uStack_48 = param_2;
  _swift_getWitnessTable(0x100c7a0c8,param_3);
  FUN_1007f4fb0(&uStack_50,uVar6,uVar2,uVar1,param_3,uVar3,uVar4);
  *unaff_x20 = puVar5;
  unaff_x20[1] = uVar6;
  return;
}



/* Address: 0x1007f4f0c | FUN_1007f4f0c */

void FUN_1007f4f0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar5 = &local_50;
  uVar6 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = 0x100c7a0c8;
  local_50 = param_1;
  uStack_48 = param_2;
  _swift_getWitnessTable(0x100c7a0c8,param_3);
  FUN_1007f4fb0(&local_50,uVar6,uVar2,uVar1,param_3,uVar3,uVar4);
  *unaff_x20 = puVar5;
  unaff_x20[1] = uVar6;
  return;
}



/* Address: 0x1007f4f80 | FUN_1007f4f80 */

void FUN_1007f4f80(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f4fb0(param_1,uVar1,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),param_3,
                *(undefined8 *)(param_2 + 0x18),param_4);
  *unaff_x20 = param_1;
  unaff_x20[1] = uVar1;
  return;
}



/* Address: 0x1007f4fac | thunk_FUN_1007f4f0c */

void thunk_FUN_1007f4f0c(void)

{
  thunk_FUN_1007f4f0c();
  return;
}



/* Address: 0x1007f4fb0 | FUN_1007f4fb0 */

/* WARNING: Removing unreachable block (ram,0x0001007f5100) */

undefined1  [16]
FUN_1007f4fb0(undefined8 param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  __int64 _Var2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
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
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  
  _Var2 = Swift::ContiguousArray::get_count(param_3);
  if (_Var2 < 1) {
    FUN_1007f61ec(param_4,param_6);
    _swift_release(param_3.unknown);
    _swift_release(param_2);
  }
  else {
    _Var2 = Swift::ContiguousArray::get_count(param_3);
    local_90 = param_4;
    uStack_88 = param_5;
    local_80 = param_6;
    uStack_78 = param_7;
    local_70 = param_2;
    puStack_68 = param_3.unknown;
    local_60 = param_1;
    if (_Var2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f50fc);
      (*pcVar1)();
    }
    local_b0 = 0;
    local_a8 = 0;
    uVar3 = 0;
    FUN_1007fa688(0,param_4,param_6);
    puStack_c8 = &local_b0;
    puStack_b8 = auStack_a0;
    local_c0 = FUN_1007f54b0;
    local_d0 = uVar3;
    FUN_100690d3c(_Var2 + 0x3fU >> 6,FUN_100690d20,auStack_e0);
    param_6 = local_a8;
    param_4 = local_b0;
    if (local_a8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f5100);
      (*pcVar1)();
    }
    _swift_retain(local_b0);
    _swift_retain(param_6);
    _swift_release(param_3.unknown);
    _swift_release(param_2);
    FUN_1007f24a0(param_4,param_6);
  }
  auVar4._8_8_ = param_6;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Address: 0x1007f510c | thunk_FUN_1007f5110 */

void thunk_FUN_1007f5110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  FUN_1007fa688(0,param_5,param_6);
  uVar2 = 0x100c7a0c8;
  _swift_getWitnessTable(0x100c7a0c8,uVar1);
  FUN_1007f4fb0(&uStack_50,param_3,param_4,param_5,uVar1,param_6,uVar2);
  return;
}



/* Address: 0x1007f5110 | FUN_1007f5110 */

void FUN_1007f5110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_1007fa688(0,param_5,param_6);
  uVar2 = 0x100c7a0c8;
  _swift_getWitnessTable(0x100c7a0c8,uVar1);
  FUN_1007f4fb0(&local_50,param_3,param_4,param_5,uVar1,param_6,uVar2);
  return;
}



/* Address: 0x1007f5198 | thunk_FUN_1007f4fb0 */

void thunk_FUN_1007f4fb0(void)

{
  FUN_1007f4fb0();
  return;
}



/* Address: 0x1007f519c | FUN_1007f519c */

void FUN_1007f519c(long *param_1,long *param_2,undefined8 param_3,ContiguousArray param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  __int64 _Var3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long alStack_c0 [2];
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  
  local_a8 = *(long *)(param_6 + -8);
  uVar13 = (long)&local_b0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = param_5;
  local_98 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar9 = uVar13 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
                   0xfffffffffffffff0);
  lVar12 = *(long *)(param_7 + -8);
  lVar7 = lVar9 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_a0 = *(long *)(lVar2 + -8);
  lVar10 = lVar7 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var3 = Swift::ContiguousArray::get_count(param_4);
  if (_Var3 < 0) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1007f54b0);
    (*pcVar11)();
  }
  FUN_100690eb8();
  lVar4 = Swift::ContiguousArray::get_count(param_4);
  (**(code **)(lVar12 + 0x10))(lVar7,local_b0,param_7);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_9,param_7,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  lVar7 = local_a8;
  pcVar11 = *(code **)(local_a8 + 0x30);
  lVar12 = lVar9;
  (*pcVar11)(lVar9,1,param_6);
  if ((int)lVar12 != 1) {
    pcVar8 = *(code **)(lVar7 + 0x20);
    do {
      (*pcVar8)(uVar13,lVar9,param_6);
      uVar5 = uVar13;
      uVar6 = param_3;
      FUN_1007f9250(uVar13,param_3,param_4.unknown,param_6,param_8);
      if ((((((uint)uVar6 & 0xff) != 1) && (-1 < (long)uVar5)) &&
          (FUN_100690e3c(), (uVar5 & 1) != 0)) && (lVar4 = lVar4 + -1, lVar4 == 0)) {
        lVar9 = param_6;
        FUN_1007f61ec();
        (**(code **)(lVar7 + 8))(uVar13,param_6);
        (**(code **)(local_a0 + 8))(lVar10,lVar2);
        goto LAB_1007f53a8;
      }
      (**(code **)(lVar7 + 8))(uVar13,param_6);
      Swift::IteratorProtocol::_next();
      lVar12 = lVar9;
      (*pcVar11)(lVar9,1,param_6);
    } while ((int)lVar12 != 1);
  }
  lVar7 = lVar10;
  (**(code **)(local_a0 + 8))(lVar10,lVar2);
  lVar9 = *param_2;
  lVar2 = param_2[1];
  FUN_100002c1c();
  _swift_retain(param_3);
  _swift_retain(param_4.unknown);
  *(long *)(lVar10 + -0x10) = param_8;
  FUN_1007f9970(lVar9,lVar2,lVar4,0,lVar7,param_3,param_4.unknown,param_6);
  param_8 = lVar2;
LAB_1007f53a8:
  *local_98 = lVar9;
  local_98[1] = param_8;
  return;
}



/* Address: 0x1007f54b0 | FUN_1007f54b0 */

void FUN_1007f54b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f519c(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f54d4 | thunk_FUN_1007f5110 */

void thunk_FUN_1007f5110(void)

{
  thunk_FUN_1007f5110();
  return;
}



/* Address: 0x1007f54d8 | FUN_1007f54d8 */

/* WARNING: Removing unreachable block (ram,0x0001007f55ec) */

undefined1  [16]
FUN_1007f54d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 *puStack_b8;
  code *local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  
  _Var3 = Swift::ContiguousArray::get_count(param_4);
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_1;
  uStack_68 = param_2;
  local_60 = param_3;
  puStack_58 = param_4.unknown;
  if (_Var3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f55e8);
    (*pcVar2)();
  }
  local_a0 = 0;
  local_98 = 0;
  uVar4 = 0;
  FUN_1007fa688(0,param_5,param_6);
  puStack_b8 = &local_a0;
  puStack_a8 = auStack_90;
  local_b0 = FUN_1007f5740;
  local_c0 = uVar4;
  FUN_100690d3c(_Var3 + 0x3fU >> 6,FUN_100690d20,auStack_d0);
  lVar1 = local_98;
  uVar4 = local_a0;
  if (local_98 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f55ec);
    (*pcVar2)();
  }
  _swift_retain(local_a0);
  _swift_retain(lVar1);
  _swift_release(param_2);
  _swift_release(param_4.unknown);
  _swift_release(param_3);
  _swift_release(param_1);
  FUN_1007f24a0(uVar4,lVar1);
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x1007f55f8 | FUN_1007f55f8 */

undefined1  [16]
FUN_1007f55f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_1007f5e44();
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1007f5648 | FUN_1007f5648 */

void FUN_1007f5648(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ContiguousArray param_4
                  ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  __int64 _Var2;
  undefined8 uVar3;
  long unaff_x21;
  undefined1 auStack_f0 [16];
  undefined8 local_e0;
  undefined8 *puStack_d8;
  code *local_d0;
  undefined1 *puStack_c8;
  undefined8 local_c0;
  long local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  
  _Var2 = Swift::ContiguousArray::get_count(param_4);
  local_a0 = param_7;
  uStack_98 = param_8;
  local_90 = param_2;
  uStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_3;
  local_70 = param_4.unknown;
  if (_Var2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f5730);
    (*pcVar1)();
  }
  local_c0 = 0;
  local_b8 = 0;
  uVar3 = 0;
  FUN_1007fa688(0,param_7,param_8);
  puStack_d8 = &local_c0;
  puStack_c8 = auStack_b0;
  local_d0 = FUN_1007f5f80;
  local_e0 = uVar3;
  FUN_100690d3c(_Var2 + 0x3fU >> 6,FUN_100692134,auStack_f0);
  if (unaff_x21 == 0) {
    if (local_b8 != 0) {
      *param_1 = local_c0;
      param_1[1] = local_b8;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f5734);
    (*pcVar1)();
  }
  FUN_1007f24a0(local_c0,local_b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f5740);
  (*pcVar1)();
}



/* Address: 0x1007f5740 | FUN_1007f5740 */

void FUN_1007f5740(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f5648(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007f5760 | FUN_1007f5760 */

void FUN_1007f5760(__int64 *param_1,long *param_2,__int64 *param_3,undefined8 param_4,
                  ContiguousArray param_5,undefined8 param_6,ContiguousArray param_7,long param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  __int64 _Var4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 auStack_e0 [2];
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  __int64 *local_c0;
  
  lVar14 = *(long *)(param_8 + -8);
  uVar8 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = auStack_d0 + -uVar8;
  lVar10 = (long)local_c8 - uVar8;
  lVar13 = (lVar10 - uVar8) - uVar8;
  local_c0 = param_1;
  _Var4 = Swift::ContiguousArray::get_count(param_5);
  if (_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f5a9c);
    (*pcVar2)();
  }
  FUN_100690eb8();
  lVar12 = *(long *)(param_7.unknown + 0x10);
  if (lVar12 != 0) {
    lVar11 = 0;
    do {
      Swift::ContiguousArray::get_subscript(lVar11,param_7);
      (**(code **)(lVar14 + 0x20))(lVar13,lVar13 - uVar8,param_8);
      lVar5 = lVar13;
      uVar15 = param_4;
      FUN_1007f9250(lVar13,param_4,param_5.unknown,param_8,param_9);
      if ((((uint)uVar15 & 0xff) != 1) && (-1 < lVar5)) {
        FUN_100690e3c();
      }
      lVar11 = lVar11 + 1;
      (**(code **)(lVar14 + 8))(lVar13,param_8);
    } while (lVar12 != lVar11);
  }
  _Var4 = Swift::ContiguousArray::get_count(param_7);
  if (_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f5aa0);
    (*pcVar2)();
  }
  FUN_100690eb8();
  lVar12 = *(long *)(param_5.unknown + 0x10);
  if (lVar12 != 0) {
    lVar11 = 0;
    do {
      Swift::ContiguousArray::get_subscript(lVar11,param_5);
      (**(code **)(lVar14 + 0x20))(lVar10,lVar10 - uVar8,param_8);
      lVar5 = lVar10;
      uVar15 = param_6;
      FUN_1007f9250(lVar10,param_6,param_7.unknown,param_8,param_9);
      if ((((uint)uVar15 & 0xff) != 1) && (-1 < lVar5)) {
        FUN_100690e3c();
      }
      lVar11 = lVar11 + 1;
      (**(code **)(lVar14 + 8))(lVar10,param_8);
    } while (lVar12 != lVar11);
  }
  puVar6 = (undefined1 *)*param_3;
  _Var4 = param_3[1];
  lVar10 = 0;
  if (((undefined8 *)*param_2 != (undefined8 *)0x0) && (param_2[1] != 0)) {
    lVar12 = param_2[1] << 3;
    puVar9 = (undefined8 *)*param_2;
    do {
      uVar15 = *puVar9;
      uVar16 = (ulong)(byte)(POPCOUNT((char)uVar15) + POPCOUNT((char)((ulong)uVar15 >> 8)) +
                             POPCOUNT((char)((ulong)uVar15 >> 0x10)) +
                             POPCOUNT((char)((ulong)uVar15 >> 0x18)) +
                             POPCOUNT((char)((ulong)uVar15 >> 0x20)) +
                             POPCOUNT((char)((ulong)uVar15 >> 0x28)) +
                             POPCOUNT((char)((ulong)uVar15 >> 0x30)) +
                            POPCOUNT((char)((ulong)uVar15 >> 0x38)));
      bVar3 = SCARRY8(lVar10,uVar16);
      lVar10 = lVar10 + uVar16;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f5a98);
        (*pcVar2)();
      }
      lVar12 = lVar12 + -8;
      puVar9 = puVar9 + 1;
    } while (lVar12 != 0);
  }
  _swift_retain(param_4);
  _swift_retain(param_5.unknown);
  *(undefined8 *)((lVar13 - uVar8) + -0x10) = param_9;
  FUN_1007f9970(puVar6,_Var4,0,1,lVar10,param_4,param_5.unknown,param_8);
  *local_c0 = (__int64)puVar6;
  local_c0[1] = _Var4;
  FUN_100690f7c();
  puVar1 = local_c8;
  uVar7 = (uint)_Var4;
  while ((uVar7 & 0xff) != 1) {
    Swift::ContiguousArray::get_subscript((__int64)puVar6,param_7);
    uVar15 = 0;
    FUN_1007fa688(0,param_8,param_9);
    FUN_1007ea370(puVar1,uVar15);
    puVar6 = puVar1;
    lVar10 = param_8;
    (**(code **)(lVar14 + 8))();
    uVar7 = (uint)lVar10;
    FUN_100690f7c();
  }
  return;
}



/* Address: 0x1007f5aa0 | thunk_FUN_1007f54d8 */

void thunk_FUN_1007f54d8(void)

{
  FUN_1007f54d8();
  return;
}



/* Address: 0x1007f5aa4 | FUN_1007f5aa4 */

void FUN_1007f5aa4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                  ContiguousArray param_4,undefined8 param_5,long param_6,long param_7,
                  undefined *param_8,undefined8 param_9)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  __int64 _Var4;
  ContiguousArray CVar5;
  undefined8 uVar6;
  ContiguousArray CVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 auStack_e0 [2];
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined8 *local_a8;
  
  lVar15 = *(long *)(param_6 + -8);
  uVar9 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_d0 - uVar9;
  lVar11 = lVar14 - uVar9;
  local_c8 = param_5;
  local_b0 = lVar11 - uVar9;
  local_a8 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar17 = (lVar11 - uVar9) -
           (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0);
  local_d0 = *(long *)(param_7 + -8);
  lVar16 = lVar17 - (*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_c0 = param_9;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_b8 = *(long *)(lVar2 + -8);
  lVar10 = lVar16 - (*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_6;
  CVar7.unknown = param_8;
  FUN_1007f61ec();
  _Var4 = Swift::ContiguousArray::get_count(param_4);
  if (_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1007f5e44);
    (*pcVar12)();
  }
  FUN_100690eb8();
  (**(code **)(local_d0 + 0x10))(lVar16,local_c8,param_7);
  uVar6 = local_c0;
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (uVar6,param_7,lVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  pcVar12 = *(code **)(lVar15 + 0x30);
  lVar16 = lVar17;
  (*pcVar12)(lVar17,1,param_6);
  if ((int)lVar16 != 1) {
    pcVar13 = *(code **)(lVar15 + 0x20);
    do {
      (*pcVar13)(lVar11,lVar17,param_6);
      lVar16 = lVar11;
      uVar6 = param_3;
      FUN_1007f9250(lVar11,param_3,param_4.unknown,param_6,param_8);
      if (((uint)uVar6 & 0xff) == 1) {
        uVar6 = 0;
        FUN_1007fa688(0,param_6,param_8);
        FUN_1007ea300(lVar11,uVar6);
      }
      else if (-1 < lVar16) {
        FUN_100690e3c();
      }
      (**(code **)(lVar15 + 8))(lVar11,param_6);
      Swift::IteratorProtocol::_next();
      lVar16 = lVar17;
      (*pcVar12)(lVar17,1,param_6);
    } while ((int)lVar16 != 1);
  }
  (**(code **)(local_b8 + 8))(lVar10,lVar2);
  uVar6 = *param_2;
  uVar8 = param_2[1];
  _swift_retain(param_3);
  _swift_retain(param_4.unknown);
  CVar5.unknown = CVar7.unknown;
  _swift_retain();
  _Var4 = Swift::ContiguousArray::get_count(CVar5);
  *(undefined **)(lVar10 + -0x10) = param_8;
  FUN_1007f9970(uVar6,uVar8,0,1,_Var4,param_3,param_4.unknown,param_6);
  lVar2 = local_b0;
  *local_a8 = uVar6;
  local_a8[1] = uVar8;
  lVar10 = *(long *)(CVar7.unknown + 0x10);
  if (lVar10 != 0) {
    lVar11 = 0;
    do {
      Swift::ContiguousArray::get_subscript(lVar11,CVar7);
      lVar11 = lVar11 + 1;
      (**(code **)(lVar15 + 0x20))(lVar14,lVar2,param_6);
      uVar6 = 0;
      FUN_1007fa688(0,param_6,param_8);
      FUN_1007ea370(lVar14,uVar6);
      (**(code **)(lVar15 + 8))(lVar14,param_6);
    } while (lVar10 != lVar11);
  }
  _swift_release(CVar7.unknown);
  _swift_release(CVar7.unknown);
  _swift_release(lVar3);
  return;
}



/* Address: 0x1007f5e44 | FUN_1007f5e44 */

/* WARNING: Removing unreachable block (ram,0x0001007f5f50) */

undefined1  [16]
FUN_1007f5e44(undefined8 param_1,undefined8 param_2,ContiguousArray param_3,undefined8 param_4,
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
  undefined *puStack_68;
  undefined8 local_60;
  
  _Var3 = Swift::ContiguousArray::get_count(param_3);
  local_90 = param_4;
  uStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_7;
  local_70 = param_2;
  puStack_68 = param_3.unknown;
  local_60 = param_1;
  if (_Var3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f5f4c);
    (*pcVar2)();
  }
  local_b0 = 0;
  local_a8 = 0;
  uVar4 = 0;
  FUN_1007fa688(0,param_4,param_6);
  puStack_c8 = &local_b0;
  puStack_b8 = auStack_a0;
  local_c0 = FUN_1007f5f5c;
  local_d0 = uVar4;
  FUN_100690d3c(_Var3 + 0x3fU >> 6,FUN_100692134,auStack_e0);
  lVar1 = local_a8;
  uVar4 = local_b0;
  if (local_a8 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f5f50);
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



/* Address: 0x1007f5f5c | FUN_1007f5f5c */

void FUN_1007f5f5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f5aa4(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1007f5f80 | FUN_1007f5f80 */

void FUN_1007f5f80(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1007f5760(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1007f5fa4 | FUN_1007f5fa4 */

undefined1  [16] FUN_1007f5fa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_1007f612c();
  _swift_release(param_2);
  _swift_release(param_1);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1007f5ff0 | FUN_1007f5ff0 */

undefined1  [16]
FUN_1007f5ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_1007fa688(0,param_5,param_6);
  FUN_1007f1e74(param_1,param_2,uVar2);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  _swift_release(param_2);
  _swift_release(param_1);
  return auVar1;
}



/* Address: 0x1007f6064 | FUN_1007f6064 */

undefined1  [16]
FUN_1007f6064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_1007f6188();
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1007f60b4 | FUN_1007f60b4 */

undefined1  [16]
FUN_1007f60b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_1007fa688(0,param_4,param_6);
  FUN_1007ea780(param_1,uVar2,param_5,param_7);
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_1,param_5);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x1007f612c | FUN_1007f612c */

undefined1  [16]
FUN_1007f612c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_1007fa688(0,param_5,param_6);
  FUN_1007f1e74(param_1,param_2,uVar2);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1007f6188 | FUN_1007f6188 */

undefined1  [16]
FUN_1007f6188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  FUN_1007fa688(0,param_4,param_6);
  thunk_FUN_1007ea780(param_1,uVar2,param_5,param_7);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x1007f61ec | FUN_1007f61ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007f620c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1007f61ec(undefined8 param_1)

{
  undefined1 auVar1 [16];
  ContiguousArray<undefined> CVar2;
  
  Swift::Array<undefined>::_allocateUninitialized(0,param_1);
  CVar2 = Swift::ContiguousArray::_init(param_1,param_1);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = CVar2.unknown;
  return auVar1 << 0x40;
}



/* Address: 0x1007f6224 | FUN_1007f6224 */

bool FUN_1007f6224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  char local_40;
  
  puVar1 = &DAT_100fe6638;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_2;
  uStack_58 = param_3;
  local_50 = param_1;
  FUN_1000f7830(&DAT_100fe6638,&DAT_100c7a830);
  FUN_10068330c(auStack_48,FUN_1007f24d0,auStack_80,param_3,param_4,puVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_40 != '\x01';
}



/* Address: 0x1007f62b4 | FUN_1007f62b4 */

void FUN_1007f62b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar3 = *unaff_x20;
  lVar1 = *(long *)(param_3 + 0x10);
  FUN_1007f9250(param_2,uVar3,unaff_x20[1],lVar1,*(undefined8 *)(param_3 + 0x18));
  bVar2 = ((uint)uVar3 & 0xff) != 1;
  if (bVar2) {
    FUN_1007f92d0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001007f6324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,!bVar2,1,lVar1);
  return;
}



/* Address: 0x1007f6328 | FUN_1007f6328 */

undefined8
FUN_1007f6328(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_retain(param_3);
  _swift_retain(param_4);
  return param_3;
}



/* Address: 0x1007f6378 | FUN_1007f6378 */

void FUN_1007f6378(__int64 param_1,undefined8 param_2,ContiguousArray param_3)

{
  Swift::ContiguousArray::get_subscript(param_1,param_3);
  return;
}



/* Address: 0x1007f6384 | FUN_1007f6384 */

void FUN_1007f6384(undefined8 param_1,ContiguousArray param_2)

{
  Swift::ContiguousArray::get_count(param_2);
  return;
}



/* Address: 0x1007f6390 | FUN_1007f6390 */

undefined8 FUN_1007f6390(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x10);
}



/* Address: 0x1007f6398 | FUN_1007f6398 */

bool FUN_1007f6398(void)

{
  bool bVar1;
  ContiguousArray CVar2;
  
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar2.unknown
            );
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  return bVar1;
}



/* Address: 0x1007f63f0 | FUN_1007f63f0 */

bool FUN_1007f63f0(undefined8 param_1,uint param_2)

{
  FUN_1007f9250();
  return (param_2 & 0xff) != 1;
}



/* Address: 0x1007f6410 | FUN_1007f6410 */

undefined8 FUN_1007f6410(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1007f69f8();
  _swift_release(param_2);
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1007f6454 | FUN_1007f6454 */

undefined8
FUN_1007f6454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  ContiguousArray CVar2;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_58 [8];
  
  local_90[0] = param_4;
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar2.unknown
            );
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  if (!bVar1) {
    local_80 = param_5;
    uStack_78 = param_6;
    local_70 = param_1;
    uStack_68 = param_2;
    FUN_10068330c(local_58,FUN_1007f6a20,local_90,param_4,param_5,
                  PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  return param_3;
}



/* Address: 0x1007f6530 | FUN_1007f6530 */

void FUN_1007f6530(ContiguousArray param_1)

{
  Swift::ContiguousArray::_withContiguousStorageIfAvailable(param_1);
  return;
}



/* Address: 0x1007f6550 | FUN_1007f6550 */

void FUN_1007f6550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return;
}



/* Address: 0x1007f6560 | FUN_1007f6560 */

void FUN_1007f6560(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c7a1e0,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x1007f6594 | FUN_1007f6594 */

void FUN_1007f6594(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1007f63f0(param_1,*unaff_x20,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007f65a4 | FUN_1007f65a4 */

undefined8 FUN_1007f65a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = uVar1;
  FUN_1007f69f8(uVar1,uVar2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  return uVar3;
}



/* Address: 0x1007f65f0 | FUN_1007f65f0 */

undefined8 FUN_1007f65f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_1007f6454();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = uVar1;
  return uVar2;
}



/* Address: 0x1007f6634 | FUN_1007f6634 */

void FUN_1007f6634(void)

{
  FUN_1007f6530();
  return;
}



/* Address: 0x1007f6658 | FUN_1007f6658 */

undefined1  [16] FUN_1007f6658(void)

{
  ContiguousArray CVar1;
  undefined1 local_38 [16];
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return local_38;
}



/* Address: 0x1007f66bc | FUN_1007f66bc */

undefined1  [16]
FUN_1007f66bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  if (param_2 == 0) {
    param_1 = 0;
    uVar1 = 0;
  }
  else {
    _swift_retain(param_2);
    FUN_1007d9208(param_1,param_3,param_2 + 0x10,param_2 + 0x20,param_4,param_5);
    uVar1 = (uint)param_3;
    _swift_release(param_2);
  }
  auVar2._8_4_ = uVar1 & 0xff | (uint)(param_2 == 0) << 8;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = 0;
  return auVar2;
}



/* Address: 0x1007f6750 | thunk_FUN_1007f66bc */

void thunk_FUN_1007f66bc(void)

{
  FUN_1007f66bc();
  return;
}



/* Address: 0x1007f6754 | FUN_1007f6754 */

void FUN_1007f6754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_1;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar1.unknown
            );
  FUN_1007e023c(&uStack_28,&local_38,CVar1.unknown,puVar2);
  return;
}


