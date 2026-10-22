/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10068839c | thunk_FUN_100683e8c */

void thunk_FUN_100683e8c(__int64 param_1)

{
  ManagedBuffer *this;
  
  this = (ManagedBuffer *)0x0;
  FUN_1006886d0();
  Swift::ManagedBuffer::_create(this,param_1);
  Swift::ManagedBufferPointer::_init();
  return;
}



/* Address: 0x1006883a0 | FUN_1006883a0 */

void FUN_1006883a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006883ac | FUN_1006883ac */

undefined8 * FUN_1006883ac(void)

{
  if (DAT_100fda288 != -1) {
    _swift_once(&DAT_100fda288,FUN_100688650);
  }
  return &DAT_101057c40;
}



/* Address: 0x1006883ec | FUN_1006883ec */

void FUN_1006883ec(ManagedBuffer *param_1)

{
  UnsafeMutablePointer<undefined> UVar1;
  UnsafeMutablePointer<undefined> UVar2;
  ManagedBuffer *unaff_x20;
  ManagedBuffer *this;
  long lVar3;
  
  lVar3 = *(long *)unaff_x20;
  this = unaff_x20;
  UVar1 = Swift::ManagedBuffer::get_headerAddress(unaff_x20,param_1);
  UVar2 = Swift::ManagedBuffer::get_firstElementAddress(this,UVar1.unknown);
  FUN_100688440(UVar1.unknown,UVar2.unknown,*(undefined8 *)(lVar3 + DAT_101057c48));
  Swift::ManagedBuffer::deinit(unaff_x20);
  return;
}



/* Address: 0x100688440 | FUN_100688440 */

void FUN_100688440(long *param_1,UnsafeMutablePointer param_2,long param_3)

{
  long lVar1;
  long count;
  code *pcVar2;
  bool bVar3;
  long count_00;
  long lVar4;
  
  count_00 = param_1[1];
  lVar1 = param_1[2];
  if (SCARRY8(lVar1,count_00)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006884d8);
    (*pcVar2)();
  }
  lVar4 = *param_1;
  if (lVar4 < lVar1 + count_00) {
    count = lVar4 - lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006884dc);
      (*pcVar2)();
    }
    Swift::UnsafeMutablePointer::deinitialize
              (count,(UnsafeMutablePointer)
                     (param_2.unknown + *(long *)(*(long *)(param_3 + -8) + 0x48) * lVar1));
    bVar3 = SBORROW8(count_00,count);
    count_00 = count_00 - count;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006884e0);
      (*pcVar2)();
    }
  }
  else {
    param_2.unknown = param_2.unknown + *(long *)(*(long *)(param_3 + -8) + 0x48) * lVar1;
  }
  Swift::UnsafeMutablePointer::deinitialize(count_00,param_2);
  return;
}



/* Address: 0x1006884e0 | FUN_1006884e0 */

void FUN_1006884e0(undefined8 param_1)

{
  FUN_1006883ec();
  _swift_deallocClassInstance(param_1,0x28,7);
  return;
}



/* Address: 0x1006884fc | FUN_1006884fc */

undefined1  [16] FUN_1006884fc(ManagedBuffer *param_1)

{
  UnsafeMutablePointer<undefined> UVar1;
  ManagedBuffer *unaff_x20;
  long lVar2;
  undefined1 local_40 [16];
  
  lVar2 = *(long *)unaff_x20;
  UVar1 = Swift::ManagedBuffer::get_headerAddress(unaff_x20,param_1);
  Swift::ManagedBuffer::get_firstElementAddress(unaff_x20,(ManagedBuffer *)UVar1.unknown);
  FUN_100688554(local_40,UVar1.unknown,*(undefined8 *)(lVar2 + DAT_101057c48));
  return local_40;
}



/* Address: 0x100688554 | FUN_100688554 */

void FUN_100688554(undefined8 *param_1,undefined8 *param_2,_StringGuts param_3,char *param_4,
                  void *param_5)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  Swift::_StringGuts::grow(0x13,param_3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar4 = Swift::__typeName(SUB81(param_3.unknown,0));
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  SVar4.bridgeObject = (void *)0xe100000000000000;
  SVar4.str = (char *)0x3e;
  SVar7.bridgeObject = param_5;
  SVar7.str = param_4;
  Swift::String::append(SVar4,SVar7);
  pcVar1 = (char *)*param_2;
  pvVar2 = (void *)param_2[1];
  pcVar3 = (char *)param_2[2];
  FUN_1006886dc();
  SVar5.bridgeObject = pvVar2;
  SVar5.str = pcVar1;
  SVar8.bridgeObject = param_5;
  SVar8.str = pcVar3;
  Swift::String::append(SVar5,SVar8);
  _swift_bridgeObjectRelease(pvVar2);
  *param_1 = 0x745365757165445f;
  param_1[1] = 0xee003c656761726f;
  return;
}



/* Address: 0x100688630 | FUN_100688630 */

void FUN_100688630(void)

{
  FUN_1006884fc();
  return;
}



/* Address: 0x100688650 | FUN_100688650 */

void FUN_100688650(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fda310;
  FUN_1000f7830(&DAT_100fda310,0x100c6dc38);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  DAT_101057c40 = puVar1;
  return;
}



/* Address: 0x100688690 | FUN_100688690 */

void FUN_100688690(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_101057c48 + 8);
  return;
}



/* Address: 0x1006886d0 | FUN_1006886d0 */

void FUN_1006886d0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006886dc | FUN_1006886dc */

undefined1  [16] FUN_1006886dc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  Swift::_StringGuts::grow(0x28,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar2,SVar6);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe900000000000020;
  SVar3.str = (char *)0x3a746e756f63202c;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar2,SVar8);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar4.bridgeObject = (void *)0xed0000203a746f6c;
  SVar4.str = (char *)0x537472617473202c;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar4,SVar9);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar2,SVar10);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x40;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar2,SVar11);
  _swift_bridgeObjectRelease(0xe100000000000000);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x29;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar5,SVar12);
  auVar1._8_8_ = 0xeb00000000203a79;
  auVar1._0_8_ = 0x7469636170616328;
  return auVar1;
}



/* Address: 0x10068885c | FUN_10068885c */

void FUN_10068885c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006886dc(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x100688868 | FUN_100688868 */

undefined1  [16] FUN_100688868(void)

{
  return ZEXT816(0x100ef5140);
}



/* Address: 0x100688878 | FUN_100688878 */

void FUN_100688878(__int64 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  UnsafeBufferPointer UVar3;
  UnsafeBufferPointer<undefined> UVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long lStack_80;
  long lStack_70;
  char local_68;
  char local_67;
  
  if (*(long *)(unaff_x20 + 8) - *(long *)(unaff_x20 + 0x10) < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100688a10);
    (*pcVar1)();
  }
  uVar7 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = 0;
  FUN_10068ef90(0,uVar7);
  FUN_10068d38c(&local_88,param_2,uVar2);
  if (local_67 != '\x01') {
    if (local_68 == '\x01') {
      UVar3 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
      _swift_getWitnessTable
                (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
                 UVar3.unknown);
    }
    else {
      if (lStack_80 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100688a14);
        (*pcVar1)();
      }
      lVar6 = param_2;
      if (lStack_80 <= param_2) {
        lVar6 = lStack_80;
      }
      UVar4 = Swift::UnsafeBufferPointer::_init(param_1);
      UVar3 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
      puVar5 = PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048;
      _swift_getWitnessTable
                (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
                 UVar3.unknown);
      FUN_1006881f4(auStack_90,UVar4.unknown,lVar6,local_88,lStack_80,uVar7,UVar3.unknown,puVar5);
      if (lStack_70 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100688a18);
        (*pcVar1)();
      }
      lVar6 = param_2;
      if (lStack_70 <= param_2) {
        lVar6 = lStack_70;
      }
      if (SBORROW8(param_2,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100688a1c);
        (*pcVar1)();
      }
      FUN_1006881b0(param_2 - lVar6,param_2,param_1,param_2,uVar7);
    }
    FUN_1006881f4(auStack_90);
  }
  return;
}



/* Address: 0x100688a1c | FUN_100688a1c */

void FUN_100688a1c(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  Optional OVar4;
  undefined7 extraout_var;
  long lVar5;
  __int64 _Var6;
  undefined1 *puVar7;
  tuple2_conflict2 tVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  UnsafeMutableBufferPointer<dispatch_thunk_of_Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
  initializing;
  long lVar13;
  long lVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_130 [12];
  uint local_124;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  char local_69;
  
  lVar16 = *(long *)(param_2 + 0x10);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  local_110 = CONCAT71(extraout_var,OVar4.value);
  local_100 = *(long *)(local_110 + -8);
  uVar9 = *(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar19 = auStack_130 + -uVar9;
  local_118 = (long)puVar19 - uVar9;
  lVar10 = local_118 - uVar9;
  lVar20 = *(long *)(lVar16 + -8);
  uVar9 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar10 - uVar9;
  lVar17 = lVar14 - uVar9;
  lVar21 = lVar17 - uVar9;
  lVar11 = *(long *)(param_3 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar21 - uVar9;
  lVar12 = lVar13 - uVar9;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_120 = *(long *)(lVar5 + -8);
  initializing.unknown =
       (undefined *)(lVar12 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_90 = lVar16;
  lStack_88 = param_3;
  local_80 = param_4;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_69 == '\x01') {
    FUN_10068ef90(0,lVar16);
    FUN_10068d244(&local_a0);
    pcVar18 = *(code **)(lVar11 + 0x10);
    (*pcVar18)(lVar12,param_1,param_3);
    lVar15 = lStack_88;
    lVar2 = local_90;
    local_108 = lStack_98;
    local_124 = (uint)(byte)local_80;
    if ((local_124 == 1) || (_Var6 = Swift::Sequence::get_underestimatedCount(), _Var6 <= local_108)
       ) {
      (*pcVar18)(lVar13,lVar12,param_3);
      lVar13 = local_108;
      tVar8 = Swift::Sequence::__copyContents(initializing);
      if (tVar8._ == lVar13 && local_124 != 1) {
        if (lVar15 < 1) {
          lVar15 = 0;
        }
        else {
          _swift_getAssociatedConformanceWitness
                    (param_4,param_3,lVar5,
                     PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                     PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                    );
          lVar13 = 0;
          do {
            Swift::IteratorProtocol::_next();
            lVar14 = lVar10;
            (**(code **)(lVar20 + 0x30))(lVar10,1,lVar16);
            if ((int)lVar14 == 1) {
              (**(code **)(lVar11 + 8))(lVar12,param_3);
              lVar14 = local_110;
              (**(code **)(local_100 + 8))(lVar10,local_110);
              goto LAB_100688f00;
            }
            (**(code **)(lVar20 + 0x20))(lVar21,lVar10,lVar16);
            if (lVar2 == 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x10068900c);
              (*pcVar18)();
            }
            lVar14 = *(long *)(lVar20 + 0x48);
            (**(code **)(lVar20 + 0x10))(lVar17,lVar21,lVar16);
            FUN_1006331c4(lVar17,lVar2 + lVar14 * lVar13,lVar16);
            (**(code **)(lVar20 + 8))(lVar21,lVar16);
            lVar13 = lVar13 + 1;
          } while (lVar15 != lVar13);
        }
        lVar14 = local_110;
        (**(code **)(lVar11 + 8))(lVar12,param_3);
        lVar13 = lVar15;
LAB_100688f00:
        tVar8._ = local_108 + lVar13;
        if (SCARRY8(local_108,lVar13)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100689004);
          (*pcVar18)();
        }
      }
      else {
        (**(code **)(lVar11 + 8))(lVar12,param_3);
        lVar14 = local_110;
      }
    }
    else {
      (*pcVar18)(lVar13,lVar12,param_3);
      Swift::Sequence::_makeIterator();
      bVar1 = false;
      lVar10 = 0;
      lVar13 = local_a0;
      tVar8._ = local_108;
      while (lVar10 != tVar8._) {
LAB_100688c84:
        _swift_getAssociatedConformanceWitness
                  (param_4,param_3,lVar5,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                   PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                  );
        Swift::IteratorProtocol::_next();
        puVar7 = puVar19;
        (**(code **)(lVar20 + 0x30))(puVar19,1,lVar16);
        if ((int)puVar7 == 1) {
          (**(code **)(lVar11 + 8))(lVar12,param_3);
          lVar14 = local_110;
          (**(code **)(local_100 + 8))(puVar19,local_110);
          tVar8._ = lVar10;
          if (bVar1) goto LAB_100688fe8;
          goto LAB_100688f10;
        }
        (**(code **)(lVar20 + 0x20))(lVar14,puVar19,lVar16);
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100689008);
          (*pcVar18)();
        }
        lVar21 = *(long *)(lVar20 + 0x48);
        (**(code **)(lVar20 + 0x10))(lVar17,lVar14,lVar16);
        FUN_1006331c4(lVar17,lVar13 + lVar21 * lVar10,lVar16);
        (**(code **)(lVar20 + 8))(lVar14,lVar16);
        bVar3 = SCARRY8(lVar10,1);
        lVar10 = lVar10 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100688d34);
          (*pcVar18)();
        }
      }
      if (!bVar1 && 0 < lVar15) {
        lVar10 = 0;
        bVar1 = true;
        lVar13 = lVar2;
        tVar8._ = lVar15;
        goto LAB_100688c84;
      }
      (**(code **)(lVar11 + 8))(lVar12,param_3);
      lVar14 = local_110;
      lVar10 = tVar8._;
      if (bVar1) {
LAB_100688fe8:
        tVar8._ = local_108 + lVar10;
        if (SCARRY8(local_108,lVar10)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100688ff8);
          (*pcVar18)();
        }
      }
    }
LAB_100688f10:
    if (SCARRY8(*(long *)(unaff_x20 + 0x10),tVar8._)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100688ffc);
      (*pcVar18)();
    }
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + tVar8._;
    _swift_getAssociatedConformanceWitness
              (param_4,param_3,lVar5,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    lVar10 = local_118;
    Swift::IteratorProtocol::_next();
    (**(code **)(local_120 + 8))(initializing.unknown,lVar5);
    lVar5 = lVar10;
    (**(code **)(lVar20 + 0x30))(lVar10,1,lVar16);
    (**(code **)(local_100 + 8))(lVar10,lVar14);
    if ((int)lVar5 != 1) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100689000);
      (*pcVar18)();
    }
  }
  return;
}



/* Address: 0x10068900c | FUN_10068900c */

void FUN_10068900c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_10068ad74(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100688878(param_1,param_2,uVar1);
  return;
}



/* Address: 0x10068905c | FUN_10068905c */

void FUN_10068905c(ulong *param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong start;
  UnsafeBufferPointer<undefined> mutating;
  UnsafeMutableBufferPointer<undefined> UVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  ulong uVar5;
  
  if (0 < param_2) {
    uVar5 = *param_1;
    if (uVar5 <= (ulong)unaff_x20[2]) {
      lVar3 = *unaff_x20;
      lVar4 = *(long *)(param_3 + 0x10);
      start = uVar5;
      FUN_10068c4b0(uVar5,lVar3,unaff_x20[1],unaff_x20[2],unaff_x20[3],lVar4);
      if (param_2 <= lVar3) {
        lVar3 = param_2;
      }
      mutating = Swift::UnsafeBufferPointer::_init(start);
      *param_1 = lVar3 + uVar5;
      UVar2 = Swift::UnsafeMutableBufferPointer::init(mutating);
      if ((*(uint *)(*(long *)(lVar4 + -8) + 0x50) & (uint)UVar2.unknown & 0xff) == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006890f4);
      (*pcVar1)();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006890f0);
  (*pcVar1)();
}



/* Address: 0x1006890f4 | thunk_FUN_1006890f8 */

undefined1  [16]
thunk_FUN_1006890f8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x3e736d65746920;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x3c;
  return auVar1;
}



/* Address: 0x1006890f8 | FUN_1006890f8 */

undefined1  [16] FUN_1006890f8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x3e736d65746920;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x3c;
  return auVar1;
}



/* Address: 0x100689174 | thunk_FUN_1006890f8 */

undefined1  [16]
thunk_FUN_1006890f8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x3e736d65746920;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x3c;
  return auVar1;
}



/* Address: 0x100689178 | FUN_100689178 */

bool FUN_100689178(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_5 == 0) {
    if (param_1 != 0) {
      return bVar1;
    }
  }
  else {
    if (param_1 == 0) {
      return bVar1;
    }
    if (param_5 != param_1) {
      return bVar1;
    }
  }
  if ((param_6 == param_2) && (param_7 == param_3)) {
    return param_8 == param_4;
  }
  return bVar1;
}



/* Address: 0x1006891b4 | FUN_1006891b4 */

bool FUN_1006891b4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  code *pcVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  local_80 = *(long *)(param_9 + -8);
  uVar4 = *(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)&local_90 - uVar4;
  lVar8 = lVar7 - uVar4;
  if (param_3 != param_7) {
    return false;
  }
  if (param_1 == 0) {
    if (param_5 != 0) goto LAB_10068926c;
  }
  else if ((param_5 == 0) || (param_1 != param_5)) goto LAB_10068926c;
  if ((param_2 == param_6) && (param_4 == param_8)) {
    return true;
  }
LAB_10068926c:
  local_78 = param_2;
  local_70 = param_6;
  local_68 = param_5;
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100689358);
    (*pcVar5)();
  }
  if (param_3 == 0) {
    return true;
  }
  local_90 = *(long *)(local_80 + 0x48);
  local_88 = param_10;
  pcVar5 = *(code **)(local_80 + 0x10);
  while( true ) {
    lVar2 = local_90;
    param_3 = param_3 + -1;
    lVar1 = 0;
    if (local_78 <= param_4) {
      lVar1 = local_78;
    }
    (*pcVar5)(lVar8,param_1 + local_90 * (param_4 - lVar1),param_9);
    lVar1 = 0;
    if (local_70 <= param_8) {
      lVar1 = local_70;
    }
    (*pcVar5)(lVar7,local_68 + lVar2 * (param_8 - lVar1),param_9);
    bVar3 = Swift::Equatable::___infix(lVar8,lVar7,param_9,local_88);
    pcVar6 = *(code **)(local_80 + 8);
    (*pcVar6)(lVar7,param_9);
    (*pcVar6)(lVar8,param_9);
    if (!bVar3) break;
    param_8 = param_8 + 1;
    param_4 = param_4 + 1;
    if (param_3 == 0) {
      return bVar3;
    }
  }
  return bVar3;
}



/* Address: 0x100689358 | FUN_100689358 */

void FUN_100689358(undefined8 param_1,Hasher param_2,undefined8 param_3,__uint64 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  char local_58;
  
  Swift::Hasher::_combine(param_4,param_2);
  FUN_10068c534(&local_78,param_2.unknown,param_3,param_4,param_5,param_6);
  uVar2 = (ulong)*(byte *)(*(long *)(param_6 + -8) + 0x50);
  if ((local_78 & uVar2) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100689440);
    (*pcVar1)();
  }
  FUN_100689444(param_1,local_78,local_70,param_6,param_7);
  if (local_58 == '\x01') {
    return;
  }
  if ((local_68 & uVar2) == 0) {
    FUN_100689444(param_1,local_68,local_60,param_6,param_7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100689444);
  (*pcVar1)();
}



/* Address: 0x100689444 | FUN_100689444 */

void FUN_100689444(Hasher param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  if (param_3 != 0) {
    lVar3 = *(long *)(lVar2 + 0x48);
    pcVar4 = *(code **)(lVar2 + 0x10);
    do {
      (*pcVar4)(&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar2 + 8))
                (&stack0xffffffffffffffa0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
      param_2 = param_2 + lVar3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



/* Address: 0x1006894f8 | FUN_1006894f8 */

void FUN_1006894f8(void)

{
  Swift::UnsafeMutableBufferPointer::_init(0);
  return;
}



/* Address: 0x100689520 | FUN_100689520 */

void FUN_100689520(__int64 param_1,UnsafeMutableBufferPointer param_2)

{
  if (param_1 < 1) {
    Swift::UnsafeMutableBufferPointer::_init(0);
  }
  else {
    Swift::UnsafeMutableBufferPointer::allocate(param_1,param_2);
  }
  return;
}



/* Address: 0x10068955c | FUN_10068955c */

void FUN_10068955c(undefined *param_1,undefined8 param_2,undefined8 param_3,
                  UnsafeMutableBufferPointer param_4,long param_5,undefined8 param_6,
                  undefined8 param_7)

{
  undefined8 uVar1;
  UnsafeMutableBufferPointer UVar2;
  ulong uVar3;
  code *pcVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar7 = *(long *)(param_5 + -8);
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)&local_90 - uVar3;
  lVar5 = lVar6 - uVar3;
  if ((long)param_1 < 1) {
    Swift::UnsafeMutableBufferPointer::_init(0);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006896b0);
      (*pcVar4)();
    }
  }
  else {
    UVar2.unknown = param_4.unknown;
    local_88 = param_6;
    local_80 = (undefined *)Swift::UnsafeMutableBufferPointer::allocate((__int64)param_1,param_4);
    local_70 = 0;
    uStack_68 = 0;
    puStack_78 = UVar2.unknown;
    if (UVar2.unknown < param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006896b4);
      (*pcVar4)();
    }
    uVar1 = 0;
    local_90 = param_7;
    FUN_10068ef90(0,param_4.unknown);
    FUN_10068c004(param_1,param_2,param_3,uVar1,param_5,local_88,lVar6);
    if (unaff_x21 != 0) {
      pcVar4 = *(code **)(lVar7 + 0x20);
      (*pcVar4)(lVar5,lVar6,param_5);
      (*pcVar4)(local_90,lVar5,param_5);
      FUN_10068cb10(local_80,puStack_78,local_70,uStack_68,param_4.unknown);
    }
  }
  return;
}



/* Address: 0x1006896b4 | FUN_1006896b4 */

undefined8 FUN_1006896b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10068971c();
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_1,param_3);
  return uVar1;
}



/* Address: 0x10068971c | FUN_10068971c */

undefined8 FUN_10068971c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  FUN_100689520(param_2,param_3);
  Swift::UnsafeMutableBufferPointer::initialize(param_1,param_2,uVar1,param_3);
  return param_2;
}



/* Address: 0x10068978c | FUN_10068978c */

void FUN_10068978c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,long param_9,
                  undefined8 param_10)

{
  ulong uVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = *(long *)(param_7 + -8);
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar5 = auStack_70 + -uVar1;
  puVar6 = puVar5 + -uVar1;
  lVar2 = (long)puVar6 - uVar1;
  if (param_4 == 0) {
    local_68 = param_9;
    Swift::UnsafeBufferPointer::_init(0);
    *(undefined1 **)(lVar2 + -0x10) = puVar6;
    FUN_10068a154(param_1);
    puVar5 = puVar6;
  }
  else {
    local_68 = param_7;
    if (*(long *)(*(long *)(param_6 + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10068990c);
      (*pcVar4)();
    }
    Swift::UnsafeBufferPointer::_init(param_4);
    *(undefined1 **)(lVar2 + -0x10) = puVar5;
    param_7 = local_68;
    FUN_10068a154(param_1);
  }
  if (unaff_x21 != 0) {
    pcVar4 = *(code **)(lVar3 + 0x20);
    (*pcVar4)(lVar2,puVar5,param_7);
    (*pcVar4)(param_10,lVar2,param_7);
  }
  return;
}



/* Address: 0x10068990c | FUN_10068990c */

void FUN_10068990c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  ulong uStack_38;
  
  if (0 < (long)param_2) {
    local_50 = *(undefined8 *)(param_4 + 0x10);
    puStack_48 = &local_40;
    local_40 = param_1;
    uStack_38 = param_2;
    if (*(ulong *)(unaff_x20 + 0x10) < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006899ac);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + 8) - *(ulong *)(unaff_x20 + 0x10) < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006899b0);
      (*pcVar1)();
    }
    uVar2 = 0;
    FUN_10068ef90(0);
    FUN_10068c5ec(param_2,param_3,FUN_100689a9c,auStack_60,uVar2,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  return;
}



/* Address: 0x1006899b0 | FUN_1006899b0 */

void FUN_1006899b0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x21;
  long local_58 [3];
  long local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR___type_metadata_for____100eae0c8;
  local_40 = param_3;
  uStack_38 = param_2;
  if (*param_1 == 0) {
    local_58[0] = param_1[2];
  }
  else {
    local_58[0] = param_1[2];
    if (*(long *)(*(long *)(param_3 + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100689a94);
      (*pcVar2)();
    }
  }
  Swift::UnsafeMutableBufferPointer::_init(*param_1);
  FUN_10068ba40();
  if (unaff_x21 == 0) {
    FUN_10068bab4(local_58,param_1,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,puVar1 + 8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    return;
  }
  FUN_10068bab4(local_58,param_1,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,puVar1 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100689a9c);
  (*pcVar2)();
}



/* Address: 0x100689a9c | FUN_100689a9c */

void FUN_100689a9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006899b0(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),param_2)
  ;
  return;
}



/* Address: 0x100689ab8 | FUN_100689ab8 */

void FUN_100689ab8(undefined8 param_1,long param_2,long *param_3,__int64 *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  UnsafeBufferPointer<undefined> UVar3;
  UnsafeBufferPointer UVar4;
  undefined *puVar5;
  __int64 start;
  long lVar6;
  __int64 _Var7;
  undefined1 auStack_58 [8];
  
  if (-1 < param_2) {
    lVar6 = param_4[1];
    if (param_2 <= param_4[1]) {
      lVar6 = param_2;
    }
    UVar3 = Swift::UnsafeBufferPointer::_init(*param_4);
    UVar4 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
    puVar5 = PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048;
    _swift_getWitnessTable
              (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
               UVar4.unknown);
    FUN_1006881f4(auStack_58,UVar3.unknown,lVar6,param_1,param_2,param_5,UVar4.unknown,puVar5);
    lVar1 = param_4[1];
    lVar6 = lVar1;
    if (param_2 <= lVar1) {
      lVar6 = param_2;
    }
    if (*param_4 == 0) {
      start = 0;
    }
    else {
      start = *param_4 + *(long *)(*(long *)(param_5 + -8) + 0x48) * lVar6;
    }
    _Var7 = lVar1 - lVar6;
    UVar3 = Swift::UnsafeBufferPointer::_init(start);
    *param_4 = (__int64)UVar3.unknown;
    param_4[1] = _Var7;
    *param_3 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100689bb4);
  (*pcVar2)();
}



/* Address: 0x100689bb4 | FUN_100689bb4 */

void FUN_100689bb4(UnsafeMutableBufferPointer<undefined> param_1,undefined8 param_2,
                  undefined8 param_3,undefined8 param_4)

{
  UnsafeBufferPointer<undefined> UVar1;
  
  UVar1 = Swift::UnsafeBufferPointer::init(param_1);
  FUN_10068990c(UVar1.unknown,param_2,param_3,param_4);
  return;
}



/* Address: 0x100689bec | FUN_100689bec */

void FUN_100689bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(param_4 + 0x10);
  FUN_10068978c(FUN_100689c58,auStack_50,param_1,param_2,local_40,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100689c58 | FUN_100689c58 */

void FUN_100689c58(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10068ad74(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10068990c(param_1,param_2,uVar2,uVar1);
  return;
}



/* Address: 0x100689cb8 | FUN_100689cb8 */

void FUN_100689cb8(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  char local_61;
  
  lVar2 = 0;
  local_b8 = param_3;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_c0 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)&local_c0 - uVar4;
  lVar6 = lVar7 - uVar4;
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  local_b0 = param_1;
  local_90 = uVar8;
  uStack_88 = param_5;
  local_80 = param_6;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_61 == '\x01') {
    Swift::Collection::_get_startIndex();
    uVar4 = local_b8;
    if (((long)local_b8 < 0) || (*(ulong *)(unaff_x20 + 0x10) < local_b0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100689eb4);
      local_90 = uVar8;
      uStack_88 = param_5;
      local_80 = param_6;
      (*pcVar5)();
    }
    local_90 = uVar8;
    uStack_88 = param_5;
    local_80 = param_6;
    if (local_b8 != 0) {
      if (*(long *)(unaff_x20 + 8) - *(ulong *)(unaff_x20 + 0x10) < local_b8) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100689ebc);
        (*pcVar5)();
      }
      uVar3 = 0;
      FUN_10068ef90(0,uVar8);
      FUN_10068c5ec(uVar4,local_b0,FUN_10068a0cc,auStack_a0,uVar3,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    }
    Swift::Collection::_get_endIndex();
    _swift_getAssociatedConformanceWitness
              (param_6,param_5,lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
              );
    bVar1 = Swift::Equatable::___infix(lVar6,lVar7,lVar2,*(undefined8 *)(param_6 + 8));
    pcVar5 = *(code **)(local_c0 + 8);
    (*pcVar5)(lVar7,lVar2);
    if (!bVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100689eb8);
      (*pcVar5)();
    }
    (*pcVar5)(lVar6,lVar2);
  }
  return;
}



/* Address: 0x100689ebc | FUN_100689ebc */

void FUN_100689ebc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = 0;
  FUN_10068ad74(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10068990c(param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100689f1c | FUN_100689f1c */

void FUN_100689f1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  OutputSpan OVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined1 auStack_80 [32];
  
  lVar9 = *(long *)(param_4 + -8);
  puVar7 = auStack_c0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar5 = *(long *)(lVar2 + -8);
  lVar8 = (long)puVar7 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != lVar1) {
    pcVar6 = *(code **)(lVar5 + 0x10);
    do {
      (*pcVar6)(lVar8,param_3,lVar2);
      pcVar3 = (code *)auStack_80;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (pcVar3,lVar8,param_5,param_6);
      (**(code **)(lVar9 + 0x10))(puVar7);
      (*pcVar3)(auStack_80,0);
      OVar4 = Swift::OutputSpan::typeMetadataAccessor();
      FUN_10060ad6c(puVar7,OVar4.unknown);
      (**(code **)(lVar5 + 8))(lVar8,lVar2);
      Swift::Collection::_formIndex();
    } while (*(long *)(param_1 + 0x10) != lVar1);
  }
  return;
}



/* Address: 0x10068a0cc | FUN_10068a0cc */

void FUN_10068a0cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100689f1c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x10068a0f0 | FUN_10068a0f0 */

void FUN_10068a0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __int64 _Var1;
  
  _Var1 = Swift::Collection::get_count();
  FUN_100689cb8(param_2,param_1,_Var1,param_3,param_4,param_5);
  return;
}



/* Address: 0x10068a154 | FUN_10068a154 */

void FUN_10068a154(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_3)(param_1,param_2,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (param_9,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_6);
  }
  return;
}



/* Address: 0x10068a1c4 | FUN_10068a1c4 */

void FUN_10068a1c4(void)

{
  FUN_100689ab8();
  return;
}



/* Address: 0x10068a1e0 | FUN_10068a1e0 */

void FUN_10068a1e0(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  long local_60;
  
  local_60 = *(long *)(param_7 + -8);
  lVar2 = -(*(long *)(local_60 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (((long)(param_3 | param_1) < 0) || (lVar5 = *(long *)(unaff_x20 + 0x10), lVar5 < param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10068a2ec);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10068a2f0);
    (*pcVar3)();
  }
  lVar1 = lVar5 - (param_2 - param_1);
  if (!SBORROW8(lVar5,param_2 - param_1)) {
    if (SCARRY8(lVar1,param_3)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10068a2f8);
      (*pcVar3)();
    }
    if ((long)(lVar1 + param_3) <= *(long *)(unaff_x20 + 8)) {
      uVar4 = 0;
      FUN_10068ef90(0,*(undefined8 *)(param_6 + 0x10));
      local_68 = auStack_70 + lVar2;
      *(undefined1 **)((long)auStack_80 + lVar2) = auStack_70 + lVar2;
      FUN_10068c958(param_1,param_2,param_3,param_4,param_5,uVar4,param_7,param_8);
      if (unaff_x21 != 0) {
        (**(code **)(local_60 + 0x20))(param_9,local_68,param_7);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10068a2fc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10068a2f4);
  (*pcVar3)();
}



/* Address: 0x10068a2fc | FUN_10068a2fc */

void FUN_10068a2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = *(undefined8 *)(param_5 + 0x10);
  puStack_38 = &local_30;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_10068a1e0(param_1,param_2,param_4,FUN_10068a448,auStack_50,param_5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068a35c | FUN_10068a35c */

void FUN_10068a35c(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x21;
  long local_58 [3];
  long local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR___type_metadata_for____100eae0c8;
  local_40 = param_3;
  uStack_38 = param_2;
  if (*param_1 == 0) {
    local_58[0] = param_1[2];
  }
  else {
    local_58[0] = param_1[2];
    if (*(long *)(*(long *)(param_3 + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10068a440);
      (*pcVar2)();
    }
  }
  Swift::UnsafeMutableBufferPointer::_init(*param_1);
  FUN_10068ba40();
  if (unaff_x21 == 0) {
    FUN_10068bab4(local_58,param_1,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,puVar1 + 8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    return;
  }
  FUN_10068bab4(local_58,param_1,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,puVar1 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10068a448);
  (*pcVar2)();
}



/* Address: 0x10068a448 | FUN_10068a448 */

void FUN_10068a448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10068a35c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),param_2)
  ;
  return;
}



/* Address: 0x10068a464 | FUN_10068a464 */

void FUN_10068a464(undefined8 param_1,long param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  UnsafeBufferPointer UVar2;
  long lVar3;
  undefined *puVar4;
  UnsafeBufferPointer UVar5;
  undefined1 auStack_58 [8];
  
  UVar2 = Swift::UnsafeBufferPointer::typeMetadataAccessor();
  lVar3 = param_2;
  UVar5 = UVar2;
  FUN_10068b3f8(param_2,UVar2.unknown);
  puVar4 = PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048;
  _swift_getWitnessTable
            (PTR_Swift__Swift__UnsafeBufferPointer<undefined>_>Swift__Collection_100eac048,
             UVar2.unknown);
  FUN_1006881f4(auStack_58,lVar3,UVar5.unknown,param_1,param_2,param_5,UVar2.unknown,puVar4);
  if (!SCARRY8(*param_3,param_2)) {
    *param_3 = *param_3 + param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068a524);
  (*pcVar1)();
}



/* Address: 0x10068a524 | FUN_10068a524 */

void FUN_10068a524(undefined8 param_1,undefined8 param_2,
                  UnsafeMutableBufferPointer<undefined> param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined **ppuStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  local_50 = (undefined *)Swift::UnsafeBufferPointer::init(param_3);
  ppuStack_58 = &local_50;
  local_60 = uVar1;
  uStack_48 = param_4;
  FUN_10068a1e0(param_1,param_2,param_4,FUN_10068a448,auStack_70,param_5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068a5b4 | FUN_10068a5b4 */

void FUN_10068a5b4(void)

{
  long in_x4;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_x4 + 0x10);
  FUN_10068978c(FUN_10068a6b0,auStack_50);
  return;
}



/* Address: 0x10068a610 | FUN_10068a610 */

void FUN_10068a610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  FUN_10068ad74(0,param_6);
  local_60 = *(undefined8 *)(lVar1 + 0x10);
  puStack_58 = &local_50;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_10068a1e0(param_4,param_5,param_2,FUN_10068a448,auStack_70,lVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068a6b0 | FUN_10068a6b0 */

void FUN_10068a6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10068a610(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),param_3);
  return;
}



/* Address: 0x10068a6d0 | FUN_10068a6d0 */

void FUN_10068a6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  FUN_10068a844();
                    /* WARNING: Could not recover jumptable at 0x00010068a708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_6 + -8) + 8))(param_3,param_6);
  return;
}



/* Address: 0x10068a70c | FUN_10068a70c */

void FUN_10068a70c(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  long lStack_48;
  
  if (param_2 == param_3) {
    lVar2 = 0;
    FUN_10068ad74(0,param_7);
    local_60 = *(undefined8 *)(lVar2 + 0x10);
    puStack_58 = &local_50;
    local_50 = param_1;
    lStack_48 = param_2;
    FUN_10068a1e0(param_5,param_6,param_2,FUN_10068a448,auStack_70,lVar2,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068a7b4);
  (*pcVar1)();
}



/* Address: 0x10068a7b4 | FUN_10068a7b4 */

void FUN_10068a7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  __int64 _Var1;
  
  _Var1 = Swift::Collection::get_count();
  FUN_10068a844(param_1,param_2,param_3,_Var1,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010068a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_3,param_5);
  return;
}



/* Address: 0x10068a844 | FUN_10068a844 */

void FUN_10068a844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  char local_61;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar5 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e0 = auStack_f0 + -uVar6;
  local_e8 = (long)local_e0 - uVar6;
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  local_d8 = param_4;
  local_d0 = param_5;
  local_a0 = uVar8;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_4;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  lVar1 = local_e8;
  if (local_61 == '\x01') {
    Swift::Collection::_get_startIndex();
    local_a0 = uVar8;
    uStack_98 = param_6;
    local_90 = param_7;
    uStack_88 = param_3;
    FUN_10068a1e0(param_1,param_2,local_d8,FUN_10068a0cc,auStack_b0,local_d0,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    puVar2 = local_e0;
    Swift::Collection::_get_endIndex();
    _swift_getAssociatedConformanceWitness
              (param_7,param_6,lVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
              );
    bVar3 = Swift::Equatable::___infix(lVar1,puVar2,lVar4,*(undefined8 *)(param_7 + 8));
    pcVar7 = *(code **)(lVar5 + 8);
    (*pcVar7)(puVar2,lVar4);
    if (!bVar3) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10068aa2c);
      (*pcVar7)();
    }
    (*pcVar7)(lVar1,lVar4);
  }
  return;
}



/* Address: 0x10068aa2c | FUN_10068aa2c */

void FUN_10068aa2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10068a70c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10068aa5c | FUN_10068aa5c */

void FUN_10068aa5c(void)

{
  FUN_10068a464();
  return;
}



/* Address: 0x10068aa78 | FUN_10068aa78 */

undefined8
FUN_10068aa78(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
             long param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  long lStack_68;
  long local_60;
  long local_58;
  
  lVar9 = *(long *)(param_5 + -8);
  puVar3 = auStack_80 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar9 + 0x10))(puVar3,param_3,param_5);
  lVar8 = param_5;
  Swift::Array<undefined>::_init(puVar3,param_4);
  lVar7 = param_4;
  FUN_100689520();
  local_58 = param_6 + param_2;
  local_70 = param_1;
  lStack_68 = lVar7;
  local_60 = lVar8;
  if (SCARRY8(param_6,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068abc4);
    (*pcVar1)();
  }
  if (param_2 < 0) {
    if ((local_58 < 0) && (bVar2 = SCARRY8(local_58,lVar7), local_58 = local_58 + lVar7, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068abc8);
      (*pcVar1)();
    }
  }
  else {
    bVar2 = SBORROW8(local_58,lVar7);
    if ((lVar7 <= local_58) && (local_58 = local_58 - lVar7, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ab28);
      (*pcVar1)();
    }
  }
  uVar4 = 0;
  local_78 = puVar3;
  FUN_10068ad74(0,param_4);
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar6 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar5);
  FUN_100688a1c(&local_78,uVar4,uVar5,puVar6);
  (**(code **)(lVar9 + 8))(param_3,param_5);
  _swift_bridgeObjectRelease(puVar3);
  return local_70;
}



/* Address: 0x10068abc8 | FUN_10068abc8 */

code * FUN_10068abc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  *param_1 = param_4;
  param_1[1] = param_5;
  return FUN_100004520;
}



/* Address: 0x10068abe0 | FUN_10068abe0 */

void FUN_10068abe0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  unaff_x20[3] = param_4;
  return;
}


