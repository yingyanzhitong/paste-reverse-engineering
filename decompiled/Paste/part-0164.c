/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001f7ef8 | FUN_1001f7ef8 */

double FUN_1001f7ef8(double param_1,double param_2,double param_3)

{
  return param_1 * param_2 + param_3 * (1.0 - param_2);
}



/* Address: 0x1001f7f10 | FUN_1001f7f10 */

undefined1  [16]
FUN_1001f7f10(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 * param_3 + param_4 * (1.0 - param_3);
  auVar1._8_8_ = param_2 * param_3 + (1.0 - param_3) * param_5;
  return auVar1;
}



/* Address: 0x1001f7f34 | FUN_1001f7f34 */

void FUN_1001f7f34(double *param_1,double param_2,double *param_3)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  
  dVar1 = *param_3;
  dVar2 = *unaff_x20;
  param_1[1] = param_3[1] * param_2 + unaff_x20[1] * (1.0 - param_2);
  *param_1 = dVar1 * param_2 + dVar2 * (1.0 - param_2);
  return;
}



/* Address: 0x1001f7f58 | FUN_1001f7f58 */

double FUN_1001f7f58(double param_1)

{
  double in_d4;
  double in_d5;
  
  return param_1 * in_d4 + in_d5 * (1.0 - in_d4);
}



/* Address: 0x1001f7f98 | FUN_1001f7f98 */

void FUN_1001f7f98(double *param_1,double param_2,double *param_3)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = 1.0 - param_2;
  dVar2 = *param_3;
  dVar4 = param_3[3];
  dVar3 = param_3[2];
  dVar5 = *unaff_x20;
  dVar7 = unaff_x20[3];
  dVar6 = unaff_x20[2];
  param_1[1] = param_3[1] * param_2 + unaff_x20[1] * dVar1;
  *param_1 = dVar2 * param_2 + dVar5 * dVar1;
  param_1[3] = dVar4 * param_2 + dVar7 * dVar1;
  param_1[2] = dVar3 * param_2 + dVar6 * dVar1;
  return;
}



/* Address: 0x1001f7fc8 | FUN_1001f7fc8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001f803c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

code * FUN_1001f7fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  Zip2Sequence ZVar3;
  code *pcVar4;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 *puStack_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar1 = 0;
  local_c0[0] = param_3;
  local_90[0] = param_2;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar1);
  Swift::_zip(&local_60,puVar2,local_90,uVar1,uVar1,puVar2,puVar2);
  local_a0 = FUN_1001f80e8;
  local_b0 = param_4;
  uStack_a8 = param_5;
  puStack_98 = local_90;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_1;
  ZVar3 = Swift::Zip2Sequence::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__Zip2Sequence<undefined,undefined>_>Swift__Sequence_100eacea8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Zip2Sequence<undefined,undefined>_>Swift__Sequence_100eacea8,
             ZVar3.unknown);
  pcVar4 = FUN_1001f8120;
  FUN_1001f8188(FUN_1001f8120,local_c0,ZVar3.unknown,param_4,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar2,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_bridgeObjectRelease(local_60);
  _swift_bridgeObjectRelease(local_58);
  return pcVar4;
}



/* Address: 0x1001f80e8 | FUN_1001f80e8 */

void FUN_1001f80e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 8))
            (*(undefined8 *)(unaff_x20 + 0x20),param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1001f8120 | FUN_1001f8120 */

void FUN_1001f8120(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2
            (0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x10),0,0);
  (*pcVar1)(param_1,param_2,param_2 + *(int *)(lVar2 + 0x30));
  return;
}



/* Address: 0x1001f8188 | FUN_1001f8188 */

void FUN_1001f8188(code *param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  ContiguousArray CVar4;
  undefined *puVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long extraout_x8_03;
  long extraout_x8_04;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar15;
  long lVar16;
  undefined1 auStack_110 [8];
  long local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined *local_58;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar2 = 0;
  local_f8 = param_8;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_110 + -extraout_x8;
  local_100 = *(long *)(param_5 + -8);
  local_f0 = param_5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  lVar12 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar12 - extraout_x12;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lStack_e0 = CONCAT71(extraout_var,OVar1.value);
  local_e8 = *(long *)(lStack_e0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  lVar13 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar14 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_01;
  lVar9 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar15 = lVar14 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,puVar5,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_d0 = *(long *)(lVar3 + -8);
  local_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar15 - extraout_x8_04;
  lVar3 = Swift::Sequence::get_underestimatedCount();
  local_58 = (undefined *)Swift::ContiguousArray::init();
  CVar4 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::reserveCapacity(lVar3,CVar4);
  (**(code **)(lVar9 + 0x10))(lVar15,unaff_x20,param_3);
  Swift::Sequence::_makeIterator();
  lVar9 = local_c8;
  if (lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1001f86a0);
    (*pcVar10)();
  }
  _swift_getAssociatedConformanceWitness
            (param_6,param_3,local_c8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  lVar15 = local_d8;
  while( true ) {
    local_d8 = lVar15;
    if (lVar3 == 0) {
      Swift::IteratorProtocol::_next();
      pcVar10 = *(code **)(lVar6 + 0x30);
      lVar8 = lVar15;
      (*pcVar10)(lVar15,1,lVar2);
      lVar3 = local_108;
      if ((int)lVar8 != 1) {
        pcVar11 = *(code **)(lVar6 + 0x20);
        do {
          (*pcVar11)(puVar7,lVar15,lVar2);
          (*param_1)(lVar3,puVar7,lVar12);
          (**(code **)(lVar6 + 8))(puVar7,lVar2);
          if (unaff_x21 != 0) {
            (**(code **)(local_d0 + 8))(lVar16,lVar9);
            _swift_release(local_58);
            (**(code **)(local_100 + 0x20))(local_f8,lVar12,local_f0);
            return;
          }
          Swift::ContiguousArray::append(lVar3,CVar4.unknown);
          Swift::IteratorProtocol::_next();
          lVar8 = lVar15;
          (*pcVar10)(lVar15,1,lVar2);
        } while ((int)lVar8 != 1);
      }
      (**(code **)(local_d0 + 8))(lVar16,lVar9);
      (**(code **)(local_e8 + 8))(lVar15,lStack_e0);
      puVar5 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
      _swift_getWitnessTable
                (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,
                 CVar4.unknown);
      Swift::Array<undefined>::_init(&local_58,param_4,CVar4.unknown,puVar5);
      return;
    }
    Swift::IteratorProtocol::_next();
    lVar15 = lVar13;
    (**(code **)(lVar6 + 0x30))(lVar13,1,lVar2);
    if ((int)lVar15 == 1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1001f86a4);
      (*pcVar10)();
    }
    (*param_1)(lVar14,lVar13,lVar8);
    if (unaff_x21 != 0) break;
    (**(code **)(lVar6 + 8))(lVar13,lVar2);
    Swift::ContiguousArray::append(lVar14,CVar4.unknown);
    lVar3 = lVar3 + -1;
    lVar15 = local_d8;
  }
  (**(code **)(local_d0 + 8))(lVar16,lVar9);
  _swift_release(local_58);
  (**(code **)(local_100 + 0x20))(local_f8,lVar8,local_f0);
  (**(code **)(lVar6 + 8))(lVar13,lVar2);
  return;
}



/* Address: 0x1001f86a4 | FUN_1001f86a4 */

void FUN_1001f86a4(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1001f7fc8(uVar1,*unaff_x20,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001f86dc | thunk_FUN_1001f7f34 */

void thunk_FUN_1001f7f34(void)

{
  FUN_1001f7f34();
  return;
}



/* Address: 0x1001f86e0 | thunk_FUN_1001f7f10 */

void thunk_FUN_1001f7f10(void)

{
  FUN_1001f7f10();
  return;
}



/* Address: 0x1001f86e4 | thunk_FUN_1001f7ef8 */

void thunk_FUN_1001f7ef8(void)

{
  FUN_1001f7ef8();
  return;
}



/* Address: 0x1001f86e8 | FUN_1001f86e8 */

undefined * FUN_1001f86e8(void)

{
  return &DAT_100c34f18;
}



/* Address: 0x1001f86f4 | FUN_1001f86f4 */

undefined1  [16] FUN_1001f86f4(double param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  dVar5 = param_1 * 0.005;
  if (param_1 * 0.005 <= 0.0001) {
    dVar5 = 0.0001;
  }
  puVar1 = &DAT_100ebff80;
  _swift_allocObject(&DAT_100ebff80,0x48,7);
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  uVar2 = unaff_x20[4];
  *(undefined8 *)(puVar1 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  *(double *)(puVar1 + 0x40) = dVar5;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_1001f88bc;
  return auVar6;
}



/* Address: 0x1001f8770 | FUN_1001f8770 */

void FUN_1001f8770(double *param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = param_2 * 3.0;
  dVar1 = (param_4 - param_2) * 3.0 - dVar3;
  dVar4 = param_3 * 3.0;
  dVar2 = (param_5 - param_3) * 3.0 - dVar4;
  *param_1 = (1.0 - dVar3) - dVar1;
  param_1[1] = dVar1;
  param_1[2] = dVar3;
  param_1[3] = (1.0 - dVar4) - dVar2;
  param_1[4] = dVar2;
  param_1[5] = dVar4;
  return;
}



/* Address: 0x1001f87b8 | FUN_1001f87b8 */

double FUN_1001f87b8(double param_1)

{
  FUN_1001f8a84(param_1,0x3f50624dd2f1a9fc);
  return param_1 * (param_1 * (param_1 * -1.7000000000000004 + 2.4000000000000004) +
                   0.30000000000000004);
}



/* Address: 0x1001f8858 | FUN_1001f8858 */

double FUN_1001f8858(double param_1,long param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_2 + 0x18);
  dVar2 = *(double *)(param_2 + 0x28);
  dVar1 = *(double *)(param_2 + 0x20);
  FUN_1001f8a84();
  return param_1 * (dVar2 + param_1 * (param_1 * dVar3 + dVar1));
}



/* Address: 0x1001f88ac | FUN_1001f88ac */

void FUN_1001f88ac(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1001f88bc | FUN_1001f88bc */

double FUN_1001f88bc(double param_1)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(unaff_x20 + 0x28);
  dVar2 = *(double *)(unaff_x20 + 0x38);
  dVar1 = *(double *)(unaff_x20 + 0x30);
  FUN_1001f8a84(param_1,*(undefined8 *)(unaff_x20 + 0x40));
  return param_1 * (dVar2 + param_1 * (param_1 * dVar3 + dVar1));
}



/* Address: 0x1001f8914 | FUN_1001f8914 */

undefined * FUN_1001f8914(void)

{
  return &DAT_100c34e58;
}



/* Address: 0x1001f8920 | FUN_1001f8920 */

void FUN_1001f8920(undefined8 *param_1)

{
  param_1[1] = 0x4008000000000000;
  *param_1 = 0xc000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0x4008000000000000;
  return;
}



/* Address: 0x1001f8944 | FUN_1001f8944 */

undefined * FUN_1001f8944(void)

{
  return &DAT_100c34e88;
}



/* Address: 0x1001f8950 | FUN_1001f8950 */

void FUN_1001f8950(undefined8 *param_1)

{
  param_1[1] = 0x3fdeb851eb851ebc;
  *param_1 = 0xbfe7ae147ae147b0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0x3ff428f5c28f5c29;
  param_1[5] = 0;
  param_1[4] = 0x4008000000000000;
  return;
}



/* Address: 0x1001f8974 | FUN_1001f8974 */

undefined * FUN_1001f8974(void)

{
  return &DAT_100c34eb8;
}



/* Address: 0x1001f8980 | FUN_1001f8980 */

void FUN_1001f8980(undefined8 *param_1)

{
  param_1[1] = 0x3ffbd70a3d70a3d6;
  *param_1 = 0xbfe7ae147ae147ac;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0x4008000000000000;
  return;
}



/* Address: 0x1001f89a4 | FUN_1001f89a4 */

undefined * FUN_1001f89a4(void)

{
  return &DAT_100c34ee8;
}



/* Address: 0x1001f89b0 | FUN_1001f89b0 */

void FUN_1001f89b0(undefined8 *param_1)

{
  param_1[1] = 0xbfe8f5c28f5c28f6;
  *param_1 = 0x3fe0a3d70a3d70a4;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0x3ff428f5c28f5c29;
  param_1[5] = 0;
  param_1[4] = 0x4008000000000000;
  return;
}



/* Address: 0x1001f89d4 | FUN_1001f89d4 */

void FUN_1001f89d4(undefined8 *param_1)

{
  param_1[1] = 0xbfe8000000000000;
  *param_1 = 0x3ff0000000000000;
  param_1[3] = 0xbffb333333333335;
  param_1[2] = 0x3fe8000000000000;
  param_1[5] = 0x3fd3333333333334;
  param_1[4] = 0x4003333333333334;
  return;
}



/* Address: 0x1001f89f8 | FUN_1001f89f8 */

void FUN_1001f89f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001f8a0c | FUN_1001f8a0c */

undefined1  [16] FUN_1001f8a0c(void)

{
  return ZEXT816(0x100ec0000);
}



/* Address: 0x1001f8a1c | FUN_1001f8a1c */

int FUN_1001f8a1c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1001f8a3c | FUN_1001f8a3c */

void FUN_1001f8a3c(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return;
}



/* Address: 0x1001f8a74 | FUN_1001f8a74 */

undefined1  [16] FUN_1001f8a74(void)

{
  return ZEXT816(0x100ec0080);
}



/* Address: 0x1001f8a84 | FUN_1001f8a84 */

double FUN_1001f8a84(double param_1,double param_2)

{
  double *unaff_x20;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar2 = *unaff_x20;
  dVar3 = unaff_x20[1];
  dVar4 = unaff_x20[2];
  dVar1 = param_1 * (dVar4 + param_1 * (param_1 * dVar2 + dVar3));
  if (ABS(dVar1 - param_1) < param_2) {
    return param_1;
  }
  dVar5 = dVar2 * 3.0;
  dVar6 = dVar3 + dVar3;
  dVar7 = dVar4 + param_1 * (param_1 * dVar5 + dVar6);
  if (1e-06 <= ABS(dVar7)) {
    dVar1 = param_1 - (dVar1 - param_1) / dVar7;
    dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
    if (ABS(dVar7 - param_1) < param_2) {
      return dVar1;
    }
    dVar8 = dVar4 + dVar1 * (dVar1 * dVar5 + dVar6);
    if (1e-06 <= ABS(dVar8)) {
      dVar1 = dVar1 - (dVar7 - param_1) / dVar8;
      dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
      if (ABS(dVar7 - param_1) < param_2) {
        return dVar1;
      }
      dVar8 = dVar4 + dVar1 * (dVar1 * dVar5 + dVar6);
      if (1e-06 <= ABS(dVar8)) {
        dVar1 = dVar1 - (dVar7 - param_1) / dVar8;
        dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
        if (ABS(dVar7 - param_1) < param_2) {
          return dVar1;
        }
        dVar8 = dVar4 + dVar1 * (dVar1 * dVar5 + dVar6);
        if (1e-06 <= ABS(dVar8)) {
          dVar1 = dVar1 - (dVar7 - param_1) / dVar8;
          dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
          if (ABS(dVar7 - param_1) < param_2) {
            return dVar1;
          }
          dVar8 = dVar4 + dVar1 * (dVar1 * dVar5 + dVar6);
          if (1e-06 <= ABS(dVar8)) {
            dVar1 = dVar1 - (dVar7 - param_1) / dVar8;
            dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
            if (ABS(dVar7 - param_1) < param_2) {
              return dVar1;
            }
            dVar8 = dVar4 + dVar1 * (dVar1 * dVar5 + dVar6);
            if (1e-06 <= ABS(dVar8)) {
              dVar1 = dVar1 - (dVar7 - param_1) / dVar8;
              dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
              if (ABS(dVar7 - param_1) < param_2) {
                return dVar1;
              }
              dVar5 = dVar4 + dVar1 * (dVar1 * dVar5 + dVar6);
              if ((1e-06 <= ABS(dVar5)) &&
                 (dVar1 = dVar1 - (dVar7 - param_1) / dVar5,
                 ABS(dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3)) - param_1) < param_2)) {
                return dVar1;
              }
            }
          }
        }
      }
    }
  }
  dVar1 = 0.0;
  if ((0.0 <= param_1) && (dVar1 = 1.0, param_1 <= 1.0)) {
    dVar6 = 1.0;
    dVar5 = 0.0;
    dVar1 = param_1;
    do {
      dVar7 = dVar1 * (dVar4 + dVar1 * (dVar1 * dVar2 + dVar3));
      if (ABS(dVar7 - param_1) < param_2) {
        return dVar1;
      }
      if (param_1 <= dVar7) {
        dVar6 = dVar1;
        dVar1 = dVar5;
      }
      dVar5 = dVar1;
      dVar1 = dVar5 + (dVar6 - dVar5) * 0.5;
    } while (dVar5 < dVar6);
  }
  return dVar1;
}



/* Address: 0x1001f8d58 | thunk_FUN_1001f8a3c */

void thunk_FUN_1001f8a3c(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 6) = uVar1;
  return;
}



/* Address: 0x1001f8d5c | thunk_FUN_1001f8a1c */

int thunk_FUN_1001f8a1c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1001f8d60 | FUN_1001f8d60 */

void FUN_1001f8d60(void)

{
  FUN_1001f9238();
  return;
}



/* Address: 0x1001f8d74 | FUN_1001f8d74 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001f8d74(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  _ArrayBuffer _Var5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  __int64 _Var9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  __int64 _Var14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_90 [24];
  undefined *local_78;
  long lStack_70;
  undefined *local_68;
  
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((param_1 != 0) && (lVar17 = *(long *)(param_1 + 0x10), lVar17 != 0)) {
    lVar19 = 0;
    do {
      FUN_100076688(param_1 + 0x20 + lVar19 * 0x28,auStack_90);
      lVar6 = lStack_70;
      _Var5.unknown = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar6 + 8))(_Var5.unknown,lVar6);
      FUN_100004594(auStack_90);
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        _Var14 = *(__int64 *)((_Var5.unknown & 0xffffffffffffff8U) + 0x10);
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8U;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      uVar12 = (ulong)puVar16 >> 0x3e;
      if (uVar12 == 0) {
        lVar6 = *(long *)((undefined *)((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if (((ulong)puVar16 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar16;
        }
        lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (SCARRY8(lVar6,_Var14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f9120);
        (*pcVar3)();
      }
      lVar6 = lVar6 + _Var14;
      puVar7 = puVar16;
      _swift_isUniquelyReferenced_nonNull_bridgeObject();
      iVar4 = 0;
      if (uVar12 == 0) {
        iVar4 = (int)puVar7;
      }
      local_68 = puVar16;
      if ((iVar4 != 1) ||
         (uVar20 = (ulong)puVar16 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar20 + 0x18) >> 1) < lVar6)) {
        if (uVar12 == 0) {
          lVar10 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
          if (((ulong)puVar16 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar16;
          }
          lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar10 <= lVar6) {
          lVar10 = lVar6;
        }
        Swift::Array<undefined>::__createNewBuffer(iVar4,lVar10,1);
        uVar20 = (ulong)local_68 & 0xffffffffffffff8;
      }
      puVar16 = local_68;
      lVar6 = *(long *)(uVar20 + 0x10);
      uVar12 = (*(ulong *)(uVar20 + 0x18) >> 1) - lVar6;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        uVar13 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
        if (uVar13 != 0) {
          if (uVar12 < uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f9130);
            (*pcVar3)();
          }
          uVar8 = 0;
          FUN_1001f91f4(0);
          _swift_arrayInitWithCopy
                    (uVar20 + lVar6 * 8 + 0x20,((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x20,
                     uVar13,uVar8);
          goto LAB_1001f906c;
        }
LAB_1001f8db8:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (0 < _Var14) goto LAB_1001f9120;
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var9 == 0) goto LAB_1001f8db8;
        uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if ((long)uVar12 < (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f912c);
          (*pcVar3)();
        }
        if (_Var9 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f9134);
          (*pcVar3)();
        }
        lVar6 = uVar20 + lVar6 * 8;
        puVar11 = (undefined8 *)(lVar6 + 0x20);
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          *puVar11 = *(undefined8 *)(_Var5.unknown + 0x20);
          uVar12 = _Var9 - 1;
          if (uVar12 != 0) {
            if (_Var9 - 2U < 7) {
              lVar10 = 1;
            }
            else {
              uVar18 = uVar12 & 0xfffffffffffffff8;
              puVar15 = (undefined8 *)(_Var5.unknown + 0x30);
              lVar10 = 1;
              puVar2 = (undefined8 *)(lVar6 + 0x60);
              do {
                puVar11 = puVar2;
                puVar11[-7] = puVar15[-1];
                puVar11[-6] = *puVar15;
                puVar11[-5] = puVar15[1];
                puVar11[-4] = puVar15[2];
                puVar11[-3] = puVar15[3];
                puVar11[-2] = puVar15[4];
                puVar11[-1] = puVar15[5];
                lVar10 = lVar10 + 8;
                *puVar11 = puVar15[6];
                puVar15 = puVar15 + 8;
                uVar18 = uVar18 - 8;
                puVar2 = puVar11 + 8;
              } while (uVar18 != 0);
            }
            uVar12 = uVar12 & 7;
            if (uVar12 != 0) {
              puVar15 = (undefined8 *)(_Var5.unknown + lVar10 * 8 + 0x20);
              do {
                puVar11 = puVar11 + 1;
                *puVar11 = *puVar15;
                uVar12 = uVar12 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar12 != 0);
            }
          }
        }
        else {
          lVar6 = 0;
          do {
            lVar10 = lVar6;
            Swift::_ArrayBuffer::__getElementSlowPath(lVar6,_Var5);
            puVar11[lVar6] = lVar10;
            lVar6 = lVar6 + 1;
          } while (_Var9 != lVar6);
        }
LAB_1001f906c:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if ((long)uVar13 < _Var14) {
LAB_1001f9120:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f9124);
          (*pcVar3)();
        }
        if (0 < (long)uVar13) {
          if (SCARRY8(*(long *)(uVar20 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f9128);
            (*pcVar3)();
          }
          *(ulong *)(uVar20 + 0x10) = *(long *)(uVar20 + 0x10) + uVar13;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar17);
  }
  return puVar16;
}



/* Address: 0x1001f9134 | FUN_1001f9134 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001f9134(void)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  return puVar1;
}



/* Address: 0x1001f918c | FUN_1001f918c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001f918c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  return puVar1;
}



/* Address: 0x1001f91e8 | FUN_1001f91e8 */

void FUN_1001f91e8(void)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRetain(*unaff_x20);
  return;
}



/* Address: 0x1001f91f0 | thunk_FUN_1001f9238 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * thunk_FUN_1001f9238(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  _ArrayBuffer _Var5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  __int64 _Var9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  __int64 _Var14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar17 = *(long *)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar17 != 0) {
    lVar19 = 0;
    do {
      FUN_100076688(param_1 + 0x20 + lVar19 * 0x28,auStack_90);
      lVar6 = lStack_70;
      _Var5.unknown = puStack_78;
      FUN_100004640(auStack_90,puStack_78);
      (**(code **)(lVar6 + 8))(_Var5.unknown,lVar6);
      FUN_100004594(auStack_90);
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        _Var14 = *(__int64 *)((_Var5.unknown & 0xffffffffffffff8U) + 0x10);
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8U;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      uVar12 = (ulong)puVar16 >> 0x3e;
      if (uVar12 == 0) {
        lVar6 = *(long *)((undefined *)((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if (((ulong)puVar16 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar16;
        }
        lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (SCARRY8(lVar6,_Var14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e0);
        (*pcVar3)();
      }
      lVar6 = lVar6 + _Var14;
      puVar7 = puVar16;
      _swift_isUniquelyReferenced_nonNull_bridgeObject();
      iVar4 = 0;
      if (uVar12 == 0) {
        iVar4 = (int)puVar7;
      }
      puStack_68 = puVar16;
      if ((iVar4 != 1) ||
         (uVar20 = (ulong)puVar16 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar20 + 0x18) >> 1) < lVar6)) {
        if (uVar12 == 0) {
          lVar10 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
          if (((ulong)puVar16 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar16;
          }
          lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar10 <= lVar6) {
          lVar10 = lVar6;
        }
        Swift::Array<undefined>::__createNewBuffer(iVar4,lVar10,1);
        uVar20 = (ulong)puStack_68 & 0xffffffffffffff8;
      }
      puVar16 = puStack_68;
      lVar6 = *(long *)(uVar20 + 0x10);
      uVar12 = (*(ulong *)(uVar20 + 0x18) >> 1) - lVar6;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        uVar13 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
        if (uVar13 != 0) {
          if (uVar12 < uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95f0);
            (*pcVar3)();
          }
          uVar8 = 0;
          FUN_1001f91f4(0);
          _swift_arrayInitWithCopy
                    (uVar20 + lVar6 * 8 + 0x20,((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x20,
                     uVar13,uVar8);
          goto LAB_1001f952c;
        }
LAB_1001f9278:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (0 < _Var14) goto LAB_1001f95e0;
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var9 == 0) goto LAB_1001f9278;
        uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if ((long)uVar12 < (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95ec);
          (*pcVar3)();
        }
        if (_Var9 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95f4);
          (*pcVar3)();
        }
        lVar6 = uVar20 + lVar6 * 8;
        puVar11 = (undefined8 *)(lVar6 + 0x20);
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          *puVar11 = *(undefined8 *)(_Var5.unknown + 0x20);
          uVar12 = _Var9 - 1;
          if (uVar12 != 0) {
            if (_Var9 - 2U < 7) {
              lVar10 = 1;
            }
            else {
              uVar18 = uVar12 & 0xfffffffffffffff8;
              puVar15 = (undefined8 *)(_Var5.unknown + 0x30);
              lVar10 = 1;
              puVar2 = (undefined8 *)(lVar6 + 0x60);
              do {
                puVar11 = puVar2;
                puVar11[-7] = puVar15[-1];
                puVar11[-6] = *puVar15;
                puVar11[-5] = puVar15[1];
                puVar11[-4] = puVar15[2];
                puVar11[-3] = puVar15[3];
                puVar11[-2] = puVar15[4];
                puVar11[-1] = puVar15[5];
                lVar10 = lVar10 + 8;
                *puVar11 = puVar15[6];
                puVar15 = puVar15 + 8;
                uVar18 = uVar18 - 8;
                puVar2 = puVar11 + 8;
              } while (uVar18 != 0);
            }
            uVar12 = uVar12 & 7;
            if (uVar12 != 0) {
              puVar15 = (undefined8 *)(_Var5.unknown + lVar10 * 8 + 0x20);
              do {
                puVar11 = puVar11 + 1;
                *puVar11 = *puVar15;
                uVar12 = uVar12 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar12 != 0);
            }
          }
        }
        else {
          lVar6 = 0;
          do {
            lVar10 = lVar6;
            Swift::_ArrayBuffer::__getElementSlowPath(lVar6,_Var5);
            puVar11[lVar6] = lVar10;
            lVar6 = lVar6 + 1;
          } while (_Var9 != lVar6);
        }
LAB_1001f952c:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if ((long)uVar13 < _Var14) {
LAB_1001f95e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e4);
          (*pcVar3)();
        }
        if (0 < (long)uVar13) {
          if (SCARRY8(*(long *)(uVar20 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e8);
            (*pcVar3)();
          }
          *(ulong *)(uVar20 + 0x10) = *(long *)(uVar20 + 0x10) + uVar13;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar17);
  }
  return puVar16;
}



/* Address: 0x1001f91f4 | FUN_1001f91f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001f91f4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb7ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSLayoutConstraint;
  _swift_getObjCClassMetadata();
  DAT_100fb7ae0 = puVar1;
  return;
}



/* Address: 0x1001f9238 | FUN_1001f9238 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1001f9238(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  _ArrayBuffer _Var5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  __int64 _Var9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  __int64 _Var14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_90 [24];
  undefined *local_78;
  long lStack_70;
  undefined *local_68;
  
  lVar17 = *(long *)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar17 != 0) {
    lVar19 = 0;
    do {
      FUN_100076688(param_1 + 0x20 + lVar19 * 0x28,auStack_90);
      lVar6 = lStack_70;
      _Var5.unknown = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar6 + 8))(_Var5.unknown,lVar6);
      FUN_100004594(auStack_90);
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        _Var14 = *(__int64 *)((_Var5.unknown & 0xffffffffffffff8U) + 0x10);
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8U;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      uVar12 = (ulong)puVar16 >> 0x3e;
      if (uVar12 == 0) {
        lVar6 = *(long *)((undefined *)((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if (((ulong)puVar16 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar16;
        }
        lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (SCARRY8(lVar6,_Var14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e0);
        (*pcVar3)();
      }
      lVar6 = lVar6 + _Var14;
      puVar7 = puVar16;
      _swift_isUniquelyReferenced_nonNull_bridgeObject();
      iVar4 = 0;
      if (uVar12 == 0) {
        iVar4 = (int)puVar7;
      }
      local_68 = puVar16;
      if ((iVar4 != 1) ||
         (uVar20 = (ulong)puVar16 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar20 + 0x18) >> 1) < lVar6)) {
        if (uVar12 == 0) {
          lVar10 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
          if (((ulong)puVar16 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar16;
          }
          lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar10 <= lVar6) {
          lVar10 = lVar6;
        }
        Swift::Array<undefined>::__createNewBuffer(iVar4,lVar10,1);
        uVar20 = (ulong)local_68 & 0xffffffffffffff8;
      }
      puVar16 = local_68;
      lVar6 = *(long *)(uVar20 + 0x10);
      uVar12 = (*(ulong *)(uVar20 + 0x18) >> 1) - lVar6;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        uVar13 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
        if (uVar13 != 0) {
          if (uVar12 < uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95f0);
            (*pcVar3)();
          }
          uVar8 = 0;
          FUN_1001f91f4(0);
          _swift_arrayInitWithCopy
                    (uVar20 + lVar6 * 8 + 0x20,((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x20,
                     uVar13,uVar8);
          goto LAB_1001f952c;
        }
LAB_1001f9278:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (0 < _Var14) goto LAB_1001f95e0;
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var9 == 0) goto LAB_1001f9278;
        uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if ((long)uVar12 < (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95ec);
          (*pcVar3)();
        }
        if (_Var9 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95f4);
          (*pcVar3)();
        }
        lVar6 = uVar20 + lVar6 * 8;
        puVar11 = (undefined8 *)(lVar6 + 0x20);
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          *puVar11 = *(undefined8 *)(_Var5.unknown + 0x20);
          uVar12 = _Var9 - 1;
          if (uVar12 != 0) {
            if (_Var9 - 2U < 7) {
              lVar10 = 1;
            }
            else {
              uVar18 = uVar12 & 0xfffffffffffffff8;
              puVar15 = (undefined8 *)(_Var5.unknown + 0x30);
              lVar10 = 1;
              puVar2 = (undefined8 *)(lVar6 + 0x60);
              do {
                puVar11 = puVar2;
                puVar11[-7] = puVar15[-1];
                puVar11[-6] = *puVar15;
                puVar11[-5] = puVar15[1];
                puVar11[-4] = puVar15[2];
                puVar11[-3] = puVar15[3];
                puVar11[-2] = puVar15[4];
                puVar11[-1] = puVar15[5];
                lVar10 = lVar10 + 8;
                *puVar11 = puVar15[6];
                puVar15 = puVar15 + 8;
                uVar18 = uVar18 - 8;
                puVar2 = puVar11 + 8;
              } while (uVar18 != 0);
            }
            uVar12 = uVar12 & 7;
            if (uVar12 != 0) {
              puVar15 = (undefined8 *)(_Var5.unknown + lVar10 * 8 + 0x20);
              do {
                puVar11 = puVar11 + 1;
                *puVar11 = *puVar15;
                uVar12 = uVar12 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar12 != 0);
            }
          }
        }
        else {
          lVar6 = 0;
          do {
            lVar10 = lVar6;
            Swift::_ArrayBuffer::__getElementSlowPath(lVar6,_Var5);
            puVar11[lVar6] = lVar10;
            lVar6 = lVar6 + 1;
          } while (_Var9 != lVar6);
        }
LAB_1001f952c:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if ((long)uVar13 < _Var14) {
LAB_1001f95e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e4);
          (*pcVar3)();
        }
        if (0 < (long)uVar13) {
          if (SCARRY8(*(long *)(uVar20 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e8);
            (*pcVar3)();
          }
          *(ulong *)(uVar20 + 0x10) = *(long *)(uVar20 + 0x10) + uVar13;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar17);
  }
  return puVar16;
}



/* Address: 0x1001f95f4 | FUN_1001f95f4 */

undefined1  [16] FUN_1001f95f4(void)

{
  return ZEXT816(0x100ec00d8);
}



/* Address: 0x1001f9604 | thunk_FUN_1001f8d60 */

void thunk_FUN_1001f8d60(void)

{
  FUN_1001f8d60();
  return;
}



/* Address: 0x1001f9608 | thunk_FUN_1001f9238 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * thunk_FUN_1001f9238(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  _ArrayBuffer _Var5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  __int64 _Var9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ulong uVar13;
  __int64 _Var14;
  undefined8 *puVar15;
  undefined *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar17 = *(long *)(param_1 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar17 != 0) {
    lVar19 = 0;
    do {
      FUN_100076688(param_1 + 0x20 + lVar19 * 0x28,auStack_90);
      lVar6 = lStack_70;
      _Var5.unknown = puStack_78;
      FUN_100004640(auStack_90,puStack_78);
      (**(code **)(lVar6 + 8))(_Var5.unknown,lVar6);
      FUN_100004594(auStack_90);
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        _Var14 = *(__int64 *)((_Var5.unknown & 0xffffffffffffff8U) + 0x10);
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8U;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      uVar12 = (ulong)puVar16 >> 0x3e;
      if (uVar12 == 0) {
        lVar6 = *(long *)((undefined *)((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
        if (((ulong)puVar16 & 0x8000000000000000) != 0) {
          _Var1.unknown = puVar16;
        }
        lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (SCARRY8(lVar6,_Var14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e0);
        (*pcVar3)();
      }
      lVar6 = lVar6 + _Var14;
      puVar7 = puVar16;
      _swift_isUniquelyReferenced_nonNull_bridgeObject();
      iVar4 = 0;
      if (uVar12 == 0) {
        iVar4 = (int)puVar7;
      }
      puStack_68 = puVar16;
      if ((iVar4 != 1) ||
         (uVar20 = (ulong)puVar16 & 0xffffffffffffff8,
         (long)(*(ulong *)(uVar20 + 0x18) >> 1) < lVar6)) {
        if (uVar12 == 0) {
          lVar10 = *(long *)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
          if (((ulong)puVar16 & 0x8000000000000000) != 0) {
            _Var1.unknown = puVar16;
          }
          lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        if (lVar10 <= lVar6) {
          lVar10 = lVar6;
        }
        Swift::Array<undefined>::__createNewBuffer(iVar4,lVar10,1);
        uVar20 = (ulong)puStack_68 & 0xffffffffffffff8;
      }
      puVar16 = puStack_68;
      lVar6 = *(long *)(uVar20 + 0x10);
      uVar12 = (*(ulong *)(uVar20 + 0x18) >> 1) - lVar6;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        uVar13 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
        if (uVar13 != 0) {
          if (uVar12 < uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95f0);
            (*pcVar3)();
          }
          uVar8 = 0;
          FUN_1001f91f4(0);
          _swift_arrayInitWithCopy
                    (uVar20 + lVar6 * 8 + 0x20,((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x20,
                     uVar13,uVar8);
          goto LAB_1001f952c;
        }
LAB_1001f9278:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if (0 < _Var14) goto LAB_1001f95e0;
      }
      else {
        _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
        if (((ulong)_Var5.unknown & 0x8000000000000000) != 0) {
          _Var1.unknown = _Var5.unknown;
        }
        _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if (_Var9 == 0) goto LAB_1001f9278;
        uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        if ((long)uVar12 < (long)uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95ec);
          (*pcVar3)();
        }
        if (_Var9 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95f4);
          (*pcVar3)();
        }
        lVar6 = uVar20 + lVar6 * 8;
        puVar11 = (undefined8 *)(lVar6 + 0x20);
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          *puVar11 = *(undefined8 *)(_Var5.unknown + 0x20);
          uVar12 = _Var9 - 1;
          if (uVar12 != 0) {
            if (_Var9 - 2U < 7) {
              lVar10 = 1;
            }
            else {
              uVar18 = uVar12 & 0xfffffffffffffff8;
              puVar15 = (undefined8 *)(_Var5.unknown + 0x30);
              lVar10 = 1;
              puVar2 = (undefined8 *)(lVar6 + 0x60);
              do {
                puVar11 = puVar2;
                puVar11[-7] = puVar15[-1];
                puVar11[-6] = *puVar15;
                puVar11[-5] = puVar15[1];
                puVar11[-4] = puVar15[2];
                puVar11[-3] = puVar15[3];
                puVar11[-2] = puVar15[4];
                puVar11[-1] = puVar15[5];
                lVar10 = lVar10 + 8;
                *puVar11 = puVar15[6];
                puVar15 = puVar15 + 8;
                uVar18 = uVar18 - 8;
                puVar2 = puVar11 + 8;
              } while (uVar18 != 0);
            }
            uVar12 = uVar12 & 7;
            if (uVar12 != 0) {
              puVar15 = (undefined8 *)(_Var5.unknown + lVar10 * 8 + 0x20);
              do {
                puVar11 = puVar11 + 1;
                *puVar11 = *puVar15;
                uVar12 = uVar12 - 1;
                puVar15 = puVar15 + 1;
              } while (uVar12 != 0);
            }
          }
        }
        else {
          lVar6 = 0;
          do {
            lVar10 = lVar6;
            Swift::_ArrayBuffer::__getElementSlowPath(lVar6,_Var5);
            puVar11[lVar6] = lVar10;
            lVar6 = lVar6 + 1;
          } while (_Var9 != lVar6);
        }
LAB_1001f952c:
        _swift_bridgeObjectRelease(_Var5.unknown);
        if ((long)uVar13 < _Var14) {
LAB_1001f95e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e4);
          (*pcVar3)();
        }
        if (0 < (long)uVar13) {
          if (SCARRY8(*(long *)(uVar20 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f95e8);
            (*pcVar3)();
          }
          *(ulong *)(uVar20 + 0x10) = *(long *)(uVar20 + 0x10) + uVar13;
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar17);
  }
  return puVar16;
}



/* Address: 0x1001f960c | FUN_1001f960c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_1001f960c(code *param_1)

{
  NSArray *pNVar1;
  ID unaff_x20;
  
  (*param_1)();
  _swift_getObjCClassFromMetadata();
  FUN_1001f91f4(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::activateConstraints_(unaff_x20,pNVar1);
  return param_1;
}



/* Address: 0x1001f9678 | FUN_1001f9678 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1001f9678(void)

{
  ID unaff_x20;
  
  objc_stub::setPriority_(unaff_x20);
  return;
}



/* Address: 0x1001f9694 | FUN_1001f9694 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f9694(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::topAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f96b0 | FUN_1001f96b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f96b0(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::bottomAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f96cc | FUN_1001f96cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f96cc(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::leadingAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f96e8 | FUN_1001f96e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f96e8(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::trailingAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f9704 | FUN_1001f9704 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f9704(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::centerXAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f9720 | FUN_1001f9720 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f9720(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::centerYAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f973c | FUN_1001f973c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f973c(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::widthAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f9758 | FUN_1001f9758 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001f9758(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::heightAnchor(*unaff_x20);
  return IVar1;
}



/* Address: 0x1001f9774 | FUN_1001f9774 */

undefined8 * FUN_1001f9774(void)

{
  if (DAT_100fb6230 != -1) {
    _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
  }
  return &DAT_101057750;
}



/* Address: 0x1001f97b4 | FUN_1001f97b4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
FUN_1001f97b4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
             ID param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar2 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 9;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  IVar4 = param_6;
  (**(code **)(param_7 + 8))(param_6,param_7);
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  lVar1 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar3);
  (**(code **)(lVar1 + 8))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,param_1,uVar3);
  *(ID *)(puVar2 + 0x20) = IVar4;
  IVar4 = param_6;
  (**(code **)(param_7 + 0x18))(param_6,param_7);
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  lVar1 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar3);
  (**(code **)(lVar1 + 0x18))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,param_2,uVar3);
  *(ID *)(puVar2 + 0x28) = IVar4;
  IVar4 = param_6;
  (**(code **)(param_7 + 0x10))(param_6,param_7);
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  lVar1 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar3);
  (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,-param_3,uVar3);
  *(ID *)(puVar2 + 0x30) = IVar4;
  (**(code **)(param_7 + 0x20))(param_6,param_7);
  uVar3 = *(undefined8 *)(param_5 + 0x18);
  lVar1 = *(long *)(param_5 + 0x20);
  FUN_100004640(param_5,uVar3);
  (**(code **)(lVar1 + 0x20))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(param_6,-param_4,uVar3);
  *(ID *)(puVar2 + 0x38) = IVar4;
  return puVar2;
}



/* Address: 0x1001f9a0c | FUN_1001f9a0c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
FUN_1001f9a0c(undefined8 param_1,undefined8 param_2,long param_3,ID param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar2 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  IVar4 = param_4;
  (**(code **)(param_5 + 0x28))(param_4,param_5);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  FUN_100004640(param_3,uVar3);
  (**(code **)(lVar1 + 0x28))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,param_1,uVar3);
  *(ID *)(puVar2 + 0x20) = IVar4;
  (**(code **)(param_5 + 0x30))(param_4,param_5);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x20);
  FUN_100004640(param_3,uVar3);
  (**(code **)(lVar1 + 0x30))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(param_4,param_2,uVar3);
  *(ID *)(puVar2 + 0x28) = IVar4;
  return puVar2;
}



/* Address: 0x1001f9b74 | FUN_1001f9b74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001f9b74(double param_1,long param_2,ID param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar2 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  IVar4 = param_3;
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar3);
  (**(code **)(lVar1 + 0x18))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,param_1,uVar3);
  *(ID *)(puVar2 + 0x20) = IVar4;
  (**(code **)(param_4 + 0x20))(param_3,param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar3);
  (**(code **)(lVar1 + 0x20))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(param_3,-param_1,uVar3);
  *(ID *)(puVar2 + 0x28) = IVar4;
  return puVar2;
}



/* Address: 0x1001f9cd8 | FUN_1001f9cd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001f9cd8(double param_1,long param_2,ID param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar2 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  IVar4 = param_3;
  (**(code **)(param_4 + 8))(param_3,param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar3);
  (**(code **)(lVar1 + 8))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(IVar4,param_1,uVar3);
  *(ID *)(puVar2 + 0x20) = IVar4;
  (**(code **)(param_4 + 0x10))(param_3,param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar3);
  (**(code **)(lVar1 + 0x10))(uVar3,lVar1);
  IVar4 = objc_stub::constraintEqualToAnchor_constant_(param_3,-param_1,uVar3);
  *(ID *)(puVar2 + 0x28) = IVar4;
  return puVar2;
}



/* Address: 0x1001f9e3c | FUN_1001f9e3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001f9e3c(undefined8 param_1,undefined8 param_2,ID param_3,long param_4)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = &DAT_100fb7040;
  FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 5;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  IVar2 = param_3;
  (**(code **)(param_4 + 0x38))(param_3,param_4);
  IVar2 = objc_stub::constraintEqualToConstant_(IVar2,param_1);
  *(ID *)(puVar1 + 0x20) = IVar2;
  (**(code **)(param_4 + 0x40))(param_3,param_4);
  IVar2 = objc_stub::constraintEqualToConstant_(param_3,param_2);
  *(ID *)(puVar1 + 0x28) = IVar2;
  return puVar1;
}


