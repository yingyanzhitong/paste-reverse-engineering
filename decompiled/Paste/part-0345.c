/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100441d5c | FUN_100441d5c */

long FUN_100441d5c(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_c0 + -uVar3;
  lVar7 = (long)puVar8 - uVar3;
  lVar5 = *unaff_x20;
  pcVar10 = *(code **)(lVar6 + 0x10);
  local_b8 = param_1;
  local_b0 = param_2;
  (*pcVar10)(lVar7,param_1,lVar4);
  _swift_beginAccess(lVar5 + 0x10,auStack_a0,0x21,0);
  uVar9 = *(ulong *)(lVar5 + 0x10);
  uVar3 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar5 + 0x10) = uVar9;
  uVar2 = uVar9;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_10044c5f4(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    *(ulong *)(lVar5 + 0x10) = uVar2;
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar9 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10044c5f4(uVar9,uVar3 + 1,1,uVar2);
    *(ulong *)(lVar5 + 0x10) = uVar9;
  }
  (*pcVar10)(puVar8,lVar7,lVar4);
  lVar1 = local_b0;
  uVar11 = *(undefined8 *)(local_b0 + 0x18);
  FUN_100444220(uVar3,puVar8,lVar5 + 0x10,lVar4,uVar11);
  (**(code **)(lVar6 + 8))(lVar7,lVar4);
  *(ulong *)(lVar5 + 0x10) = uVar9;
  _swift_endAccess(auStack_a0);
  FUN_100441f1c(auStack_88,local_b8,lVar1);
  if (unaff_x21 == 0) {
    lVar5 = local_80;
    FUN_100449c84(local_80,local_70,uStack_68);
    FUN_100444974(auStack_88);
    FUN_100442b50(unaff_x20,lVar4,uVar11);
  }
  else {
    FUN_100442b50(unaff_x20,lVar4,uVar11);
  }
  return lVar5;
}



/* Address: 0x100441f1c | FUN_100441f1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100442094 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100441f1c(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  DecodingError DVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e0 [24];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined1 local_90 [8];
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long local_58;
  
  lVar9 = *(long *)(param_3 + 0x10);
  lVar7 = (long)&local_120 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar9 + -8) + 0x10))(lVar7,param_2,lVar9);
  puVar3 = &DAT_100fc7088;
  FUN_1000f7830(&DAT_100fc7088,&DAT_100c4ac30);
  puVar4 = &local_110;
  _swift_dynamicCast(puVar4,lVar7,lVar9,puVar3,0xe);
  if ((int)puVar4 == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_1004447c4(&local_110);
    DVar2 = Swift::DecodingError::typeMetadataAccessor();
    lVar9 = CONCAT71((int7)((ulong)&local_110 >> 8),DVar2.value);
    puVar3 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar9,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    lVar7 = *unaff_x20;
    _swift_beginAccess(lVar7 + 0x10,auStack_e0,0,0);
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    _swift_bridgeObjectRetain(uVar8);
    Swift::DecodingError::Context::_init(puVar3,uVar8,0xd000000000000018,0x8000000100da6850,0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x68))
              (puVar3,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
               ,lVar9);
    _swift_willThrow();
  }
  else {
    FUN_100076508(&local_110,auStack_e0);
    lVar7 = lStack_c0;
    lVar9 = local_c8;
    FUN_100004640(auStack_e0,local_c8);
    (**(code **)(lVar7 + 0x18))(lVar9,lVar7);
    FUN_100443a74(&local_b8);
    lVar6 = lStack_c0;
    lVar7 = local_c8;
    lVar13 = local_b0;
    lVar9 = lStack_a8;
    lVar10 = local_b8;
    lVar5 = lStack_98;
    lVar12 = local_a0;
    if (local_b8 == 0) {
      lVar13 = unaff_x20[7];
      lVar9 = *(long *)(lVar13 + 0x10);
      uVar11 = *(undefined8 *)(lVar13 + 0x20);
      FUN_100004640(auStack_e0,local_c8);
      (**(code **)(lVar6 + 0x10))(lVar7,lVar6);
      _swift_beginAccess(lVar7 + 0x10,&local_110,0,0);
      uVar8 = *(undefined8 *)(lVar7 + 0x10);
      local_58 = 0;
      _swift_bridgeObjectRetain(uVar8);
      lVar5 = lVar9;
      FUN_1004486a0(lVar9,uVar11,uVar8,&local_58);
      if (unaff_x21 != 0) {
        _swift_release(lVar7);
        _swift_bridgeObjectRelease(uVar8);
        FUN_100004594(auStack_e0);
        return;
      }
      local_118 = lVar9;
      _swift_bridgeObjectRelease(uVar8);
      lVar12 = local_58;
      lVar9 = lVar5 + local_58;
      if (SCARRY8(lVar5,local_58)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100442220);
        (*pcVar1)();
      }
      lStack_88 = local_118;
      lStack_78 = local_58;
      local_120 = local_c8;
      local_80 = lVar9;
      local_70 = lVar5;
      FUN_100004640(auStack_e0);
      lVar6 = local_120;
      (**(code **)(lStack_c0 + 0x18))(local_120,lStack_c0);
      FUN_1004439e8(local_90,lVar6);
      *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + lVar9;
      if (SCARRY8(*(long *)(lVar13 + 0x18),lVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100442224);
        (*pcVar1)();
      }
      *(long *)(lVar13 + 0x18) = *(long *)(lVar13 + 0x18) + lVar9;
      if (SBORROW8(*(long *)(lVar13 + 0x20),lVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100442228);
        (*pcVar1)();
      }
      *(long *)(lVar13 + 0x20) = *(long *)(lVar13 + 0x20) - lVar9;
      lVar13 = local_118;
      lVar10 = lVar7;
    }
    FUN_100004594(auStack_e0);
    *param_1 = lVar10;
    param_1[1] = lVar13;
    param_1[2] = lVar9;
    param_1[3] = lVar12;
    param_1[4] = lVar5;
  }
  return;
}



/* Address: 0x100442228 | FUN_100442228 */

long FUN_100442228(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar4 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_c0 + -uVar3;
  lVar7 = (long)puVar8 - uVar3;
  lVar5 = *unaff_x20;
  pcVar10 = *(code **)(lVar6 + 0x10);
  local_b8 = param_1;
  local_b0 = param_2;
  (*pcVar10)(lVar7,param_1,lVar4);
  _swift_beginAccess(lVar5 + 0x10,auStack_a0,0x21,0);
  uVar9 = *(ulong *)(lVar5 + 0x10);
  uVar3 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar5 + 0x10) = uVar9;
  uVar2 = uVar9;
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    FUN_10044c5f4(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    *(ulong *)(lVar5 + 0x10) = uVar2;
  }
  uVar3 = *(ulong *)(uVar2 + 0x10);
  uVar9 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar3) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10044c5f4(uVar9,uVar3 + 1,1,uVar2);
    *(ulong *)(lVar5 + 0x10) = uVar9;
  }
  (*pcVar10)(puVar8,lVar7,lVar4);
  lVar1 = local_b0;
  uVar11 = *(undefined8 *)(local_b0 + 0x18);
  FUN_100444220(uVar3,puVar8,lVar5 + 0x10,lVar4,uVar11);
  (**(code **)(lVar6 + 8))(lVar7,lVar4);
  *(ulong *)(lVar5 + 0x10) = uVar9;
  _swift_endAccess(auStack_a0);
  FUN_100441f1c(auStack_88,local_b8,lVar1);
  if (unaff_x21 == 0) {
    lVar5 = local_80;
    FUN_100449f9c(local_80,local_70,uStack_68);
    FUN_100444974(auStack_88);
    FUN_100442b50(unaff_x20,lVar4,uVar11);
  }
  else {
    FUN_100442b50(unaff_x20,lVar4,uVar11);
  }
  return lVar5;
}



/* Address: 0x1004423e8 | FUN_1004423e8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010044267c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1004423e8(undefined8 param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  DecodingError DVar4;
  Encoding EVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  long lVar13;
  long *unaff_x20;
  code *pcVar14;
  long unaff_x21;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined8 local_80;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  puStack_b8 = (undefined *)Encoding::_typeMetadataAccessor();
  local_c0 = *(long *)(puStack_b8 + -8);
  local_c8 = auStack_d0 + -(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + 0x10);
  lVar18 = *(long *)(lVar13 + -8);
  uVar10 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)local_c8 - uVar10;
  lVar19 = lVar15 - uVar10;
  lVar16 = *unaff_x20;
  pcVar14 = *(code **)(lVar18 + 0x10);
  local_b0 = param_1;
  (*pcVar14)(lVar19,param_1,lVar13);
  _swift_beginAccess(lVar16 + 0x10,auStack_a0,0x21,0);
  uVar17 = *(ulong *)(lVar16 + 0x10);
  uVar10 = uVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar16 + 0x10) = uVar17;
  uVar8 = uVar17;
  if ((uVar10 & 1) == 0) {
    uVar8 = 0;
    FUN_10044c5f4(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
    *(ulong *)(lVar16 + 0x10) = uVar8;
  }
  puVar9 = *(undefined8 **)(uVar8 + 0x10);
  uVar10 = uVar8;
  if ((undefined8 *)(*(ulong *)(uVar8 + 0x18) >> 1) <= puVar9) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
    FUN_10044c5f4(uVar10,(long)puVar9 + 1,1,uVar8);
    *(ulong *)(lVar16 + 0x10) = uVar10;
  }
  (*pcVar14)(lVar15,lVar19,lVar13);
  uVar11 = *(undefined8 *)(param_2 + 0x18);
  FUN_100444220(puVar9,lVar15,lVar16 + 0x10,lVar13,uVar11);
  (**(code **)(lVar18 + 8))(lVar19,lVar13);
  *(ulong *)(lVar16 + 0x10) = uVar10;
  _swift_endAccess(auStack_a0);
  FUN_100441f1c(&local_88,local_b0,param_2);
  if (unaff_x21 == 0) {
    EVar5.unknown = (undefined *)(local_88 + 0x10);
    _swift_beginAccess(EVar5.unknown,auStack_a0,0,0);
    puVar3 = local_c8;
    lVar15 = *(long *)(*(long *)(local_88 + 0x10) + 0x10);
    pbVar12 = (byte *)(*(long *)(local_88 + 0x10) + 0x20);
    do {
      if (lVar15 == 0) {
        Encoding::_get_utf8(EVar5);
        goto LAB_100442598;
      }
      bVar1 = *pbVar12;
      EVar5.unknown = (undefined *)(ulong)bVar1;
      lVar15 = lVar15 + -1;
      pbVar12 = pbVar12 + 1;
    } while (0x3f < bVar1);
    FUN_10044ae34(local_c8);
LAB_100442598:
    uVar7 = local_80;
    puVar9 = local_70;
    FUN_10044a6f8(local_80,local_70,uStack_68,puVar3);
    FUN_100444974(&local_88);
    (**(code **)(local_c0 + 8))(puVar3,puStack_b8);
    if (puVar9 != (undefined8 *)0x0) {
      FUN_100442b50(unaff_x20,lVar13,uVar11);
      goto LAB_1004425dc;
    }
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    lVar15 = CONCAT71((int7)((ulong)&local_88 >> 8),DVar4.value);
    puVar9 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar15,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar2 = *(int *)(puVar6 + 0x30);
    *puVar9 = PTR___type_metadata_for_Foundation_Data_100ea7300;
    uVar7 = *(undefined8 *)(lVar16 + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    Swift::DecodingError::Context::_init
              ((long)puVar9 + (long)iVar2,uVar7,0xd00000000000002b,0x8000000100da6890,0);
    (**(code **)(*(long *)(lVar15 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar15);
    _swift_willThrow();
  }
  FUN_100442b50(unaff_x20,lVar13,uVar11);
  uVar7 = uVar11;
LAB_1004425dc:
  auVar20._8_8_ = puVar9;
  auVar20._0_8_ = uVar7;
  return auVar20;
}



/* Address: 0x1004426f8 | FUN_1004426f8 */

undefined1  [16] FUN_1004426f8(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  Deallocator DVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  ulong local_80;
  ulong local_78;
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,DVar2.value);
  local_c8 = *(long *)(local_b8 + -8);
  local_c0 = auStack_d0 + -(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar5 + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)local_c0 - uVar4;
  lVar11 = lVar12 - uVar4;
  lVar6 = *unaff_x20;
  pcVar8 = *(code **)(lVar10 + 0x10);
  local_b0 = param_1;
  (*pcVar8)(lVar11,param_1,lVar5);
  _swift_beginAccess(lVar6 + 0x10,auStack_a0,0x21,0);
  uVar7 = *(ulong *)(lVar6 + 0x10);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar6 + 0x10) = uVar7;
  uVar3 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_10044c5f4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(lVar6 + 0x10) = uVar3;
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  uVar7 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar4) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10044c5f4(uVar7,uVar4 + 1,1,uVar3);
    *(ulong *)(lVar6 + 0x10) = uVar7;
  }
  (*pcVar8)(lVar12,lVar11,lVar5);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  FUN_100444220(uVar4,lVar12,lVar6 + 0x10,lVar5,uVar9);
  (**(code **)(lVar10 + 8))(lVar11,lVar5);
  *(ulong *)(lVar6 + 0x10) = uVar7;
  _swift_endAccess(auStack_a0);
  FUN_100441f1c(auStack_88,local_b0,param_2);
  puVar1 = local_c0;
  if (unaff_x21 == 0) {
    if (local_78 == 0) {
      uVar4 = 0xc000000000000000;
      uVar7 = 0;
    }
    else {
      (**(code **)(local_c8 + 0x68))
                (local_c0,*(undefined4 *)
                           PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
                 ,local_b8);
      FUN_100445398(local_80,local_78,puVar1);
      uVar7 = local_80;
      uVar4 = local_78;
    }
    FUN_100444974(auStack_88);
    FUN_100442b50(unaff_x20,lVar5,uVar9);
  }
  else {
    FUN_100442b50(unaff_x20,lVar5,uVar9);
  }
  auVar13._8_8_ = uVar4;
  auVar13._0_8_ = uVar7;
  return auVar13;
}



/* Address: 0x100442920 | FUN_100442920 */

undefined1  [16] FUN_100442920(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  Deallocator DVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x21;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [8];
  long local_80;
  ulong local_70;
  long local_68;
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  local_b8 = CONCAT71(extraout_var,DVar2.value);
  local_c8 = *(long *)(local_b8 + -8);
  local_c0 = auStack_d0 + -(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar5 + -8);
  uVar4 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)local_c0 - uVar4;
  lVar11 = lVar12 - uVar4;
  lVar6 = *unaff_x20;
  pcVar8 = *(code **)(lVar10 + 0x10);
  local_b0 = param_1;
  (*pcVar8)(lVar11,param_1,lVar5);
  _swift_beginAccess(lVar6 + 0x10,auStack_a0,0x21,0);
  uVar7 = *(ulong *)(lVar6 + 0x10);
  uVar4 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar6 + 0x10) = uVar7;
  uVar3 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
    FUN_10044c5f4(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(lVar6 + 0x10) = uVar3;
  }
  uVar7 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar7) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10044c5f4(uVar4,uVar7 + 1,1,uVar3);
    *(ulong *)(lVar6 + 0x10) = uVar4;
  }
  (*pcVar8)(lVar12,lVar11,lVar5);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  FUN_100444220(uVar7,lVar12,lVar6 + 0x10,lVar5,uVar9);
  (**(code **)(lVar10 + 8))(lVar11,lVar5);
  *(ulong *)(lVar6 + 0x10) = uVar4;
  _swift_endAccess(auStack_a0);
  FUN_100441f1c(auStack_88,local_b0,param_2);
  puVar1 = local_c0;
  if (unaff_x21 == 0) {
    if (local_70 == 0) {
      uVar7 = 0xc000000000000000;
      uVar4 = 0;
    }
    else {
      (**(code **)(local_c8 + 0x68))
                (local_c0,*(undefined4 *)
                           PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
                 ,local_b8);
      uVar4 = local_80 + local_68;
      FUN_100445398(uVar4,local_70,puVar1);
      uVar7 = local_70;
    }
    FUN_100444974(auStack_88);
    FUN_100442b50(unaff_x20,lVar5,uVar9);
  }
  else {
    FUN_100442b50(unaff_x20,lVar5,uVar9);
  }
  auVar13._8_8_ = uVar7;
  auVar13._0_8_ = uVar4;
  return auVar13;
}



/* Address: 0x100442b50 | FUN_100442b50 */

void FUN_100442b50(long *param_1)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [40];
  
  _swift_beginAccess(*param_1 + 0x10,auStack_60,0x21,0);
  FUN_100447144(auStack_48);
  _swift_endAccess(auStack_60);
  FUN_100004594(auStack_48);
  return;
}



/* Address: 0x100442ba4 | FUN_100442ba4 */

/* WARNING: Removing unreachable block (ram,0x000100442e24) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100442f40 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100442ba4(undefined8 param_1,undefined *param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  Optional OVar3;
  DecodingError DVar4;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *pvVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  undefined8 uVar20;
  long lVar21;
  long *unaff_x20;
  long unaff_x21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  long local_100;
  undefined8 local_a8;
  long local_a0;
  undefined1 auStack_90 [48];
  long lVar5;
  
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)param_2 >> 8),OVar3.value);
  lVar13 = *(long *)(lVar5 + -8);
  puVar14 = auStack_110 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(param_5 + -8);
  lVar16 = (long)puVar14 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = *(long *)(param_4 + 0x10);
  lVar22 = *(long *)(lVar17 + -8);
  uVar18 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar25 = lVar16 - uVar18;
  lVar21 = lVar25 - uVar18;
  if (param_2 != PTR___type_metadata_for_Foundation_Data_100ea7300) {
    puVar6 = (undefined *)0x0;
    FUN_100444930();
    if (param_2 != puVar6) {
      if (param_2 != &DAT_100ed5668) {
        lVar24 = *unaff_x20;
        pcVar19 = *(code **)(lVar22 + 0x10);
        local_108 = param_6;
        (*pcVar19)(lVar21,param_3,lVar17);
        _swift_beginAccess(lVar24 + 0x10,&local_a8,0x21,0);
        uVar23 = *(ulong *)(lVar24 + 0x10);
        uVar18 = uVar23;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(lVar24 + 0x10) = uVar23;
        uVar8 = uVar23;
        local_100 = param_5;
        if ((uVar18 & 1) == 0) {
          uVar8 = 0;
          FUN_10044c5f4(0,*(long *)(uVar23 + 0x10) + 1,1,uVar23);
          *(ulong *)(lVar24 + 0x10) = uVar8;
        }
        uVar18 = *(ulong *)(uVar8 + 0x10);
        uVar23 = uVar8;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar18) {
          uVar23 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
          FUN_10044c5f4(uVar23,uVar18 + 1,1,uVar8);
          *(ulong *)(lVar24 + 0x10) = uVar23;
        }
        (*pcVar19)(lVar25,lVar21,lVar17);
        uVar20 = *(undefined8 *)(param_4 + 0x18);
        FUN_100444220(uVar18,lVar25,lVar24 + 0x10,lVar17,uVar20);
        (**(code **)(lVar22 + 8))(lVar21,lVar17);
        *(ulong *)(lVar24 + 0x10) = uVar23;
        _swift_endAccess(&local_a8);
        FUN_100441f1c(auStack_90,param_3,param_4);
        lVar21 = local_100;
        uVar2 = local_108;
        if (unaff_x21 == 0) {
          FUN_100444e74(puVar14,auStack_90,local_100,local_100,local_108);
          FUN_100444974(auStack_90);
          puVar7 = puVar14;
          (**(code **)(lVar15 + 0x30))(puVar14,1,lVar21);
          if ((int)puVar7 == 1) {
            (**(code **)(lVar13 + 8))(puVar14,lVar5);
            DVar4 = Swift::DecodingError::typeMetadataAccessor();
            lVar5 = CONCAT71((int7)((ulong)puVar7 >> 8),DVar4.value);
            pcVar11 = (char *)0x0;
            pvVar12 = (void *)0x0;
            puVar9 = (undefined8 *)
                     PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
            ;
            _swift_allocError();
            puVar6 = &DAT_100fc70b8;
            _Var10.unknown = &DAT_100c4ac40;
            FUN_1000f7830();
            iVar1 = *(int *)(puVar6 + 0x30);
            *puVar9 = param_2;
            local_a8 = 0;
            local_a0 = 0xe000000000000000;
            _swift_bridgeObjectRetain(*(undefined8 *)(lVar24 + 0x10));
            Swift::_StringGuts::grow(0x29,_Var10);
            _swift_bridgeObjectRelease(local_a0);
            local_a8 = 0x6465746365707845;
            local_a0 = 0xe900000000000020;
            SVar26 = Swift::__typeName(SUB81(param_2,0));
            SVar27.bridgeObject = pvVar12;
            SVar27.str = pcVar11;
            Swift::String::append(SVar26,SVar27);
            _swift_bridgeObjectRelease(SVar26.bridgeObject);
            SVar26.bridgeObject = (void *)0x8000000100da6870;
            SVar26.str = (char *)0xd00000000000001e;
            SVar28.bridgeObject = pvVar12;
            SVar28.str = pcVar11;
            Swift::String::append(SVar26,SVar28);
            Swift::DecodingError::Context::_init
                      ((long)puVar9 + (long)iVar1,puVar6,local_a8,local_a0,0);
            (**(code **)(*(long *)(lVar5 + -8) + 0x68))
                      (puVar9,*(undefined4 *)
                               PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
                       ,lVar5);
            _swift_willThrow();
          }
          else {
            pcVar19 = *(code **)(lVar15 + 0x20);
            (*pcVar19)(lVar16,puVar14,lVar21);
            (*pcVar19)(param_1,lVar16,lVar21);
          }
        }
        FUN_100442b50(unaff_x20,lVar17,lVar21,uVar20,uVar2);
        return;
      }
      FUN_1004426f8();
      if (unaff_x21 != 0) {
        return;
      }
      puVar6 = &DAT_100ed5668;
      local_a8 = param_3;
      local_a0 = param_4;
      goto LAB_100442db4;
    }
  }
  FUN_100442920();
  puVar6 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  local_a8 = param_3;
  local_a0 = param_4;
  if (unaff_x21 != 0) {
    return;
  }
LAB_100442db4:
  _swift_dynamicCast(param_1,&local_a8,puVar6,param_5,7);
  return;
}



/* Address: 0x100443038 | FUN_100443038 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100443120 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100443038(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  undefined1 auStack_138 [40];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar2 = *unaff_x20;
  uStack_78 = unaff_x20[2];
  local_80 = unaff_x20[1];
  uStack_68 = unaff_x20[4];
  uStack_70 = unaff_x20[3];
  local_60 = unaff_x20[5];
  FUN_100441c04(&local_c8,uVar2,&local_80,in_x3,in_x4);
  if (unaff_x21 == 0) {
    uStack_e8 = uStack_a0;
    local_f0 = local_a8;
    uStack_d8 = uStack_90;
    uStack_e0 = local_98;
    local_d0 = local_88;
    uStack_108 = uStack_c0;
    local_110 = local_c8;
    uStack_f8 = uStack_b0;
    uStack_100 = local_b8;
    _swift_retain(uVar2);
    FUN_100443b18(&local_80,auStack_138);
    uVar2 = 0;
    FUN_1004447b8(0,in_x3,in_x4);
    pTVar1 = &TargetProtocolConformanceDescriptor_100c4aaa8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4aaa8,uVar2);
    Swift::KeyedDecodingContainer::_init(param_1,pTVar1,in_x3,uVar2,pTVar1);
  }
  else {
    _swift_retain(uVar2);
    FUN_100443b18(&local_80,&local_110);
  }
  return;
}



/* Address: 0x100443144 | FUN_100443144 */

void FUN_100443144(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar2 = *unaff_x20;
  _swift_retain(lVar2);
  FUN_100441f1c(&local_68,param_2,param_3);
  if (unaff_x21 == 0) {
    param_1[3] = &DAT_100ed52b0;
    FUN_1004448b4();
    param_1[4] = param_2;
    puVar1 = &DAT_100ed4f88;
    _swift_allocObject(&DAT_100ed4f88,0x61,7);
    *param_1 = puVar1;
    *(undefined8 *)(puVar1 + 0x58) = 0;
    puVar1[0x60] = 1;
    *(long *)(puVar1 + 0x10) = lVar2;
    _swift_beginAccess(lVar2 + 0x10,auStack_80,0,0);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(puVar1 + 0x48) = uVar3;
    *(undefined8 *)(puVar1 + 0x50) = 0;
    *(long *)(puVar1 + 0x20) = lStack_60;
    *(undefined8 *)(puVar1 + 0x18) = local_68;
    *(undefined8 *)(puVar1 + 0x30) = uStack_50;
    *(undefined8 *)(puVar1 + 0x28) = local_58;
    *(long *)(puVar1 + 0x38) = local_48;
    lVar2 = 0;
    FUN_100449750();
    _swift_allocObject();
    *(long *)(lVar2 + 0x30) = lStack_60;
    *(undefined8 *)(lVar2 + 0x28) = local_68;
    *(undefined8 *)(lVar2 + 0x40) = uStack_50;
    *(undefined8 *)(lVar2 + 0x38) = local_58;
    *(long *)(lVar2 + 0x48) = local_48;
    *(long *)(lVar2 + 0x10) = lStack_60 + local_48;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = uStack_50;
    *(long *)(puVar1 + 0x40) = lVar2;
    _swift_bridgeObjectRetain(uVar3);
    FUN_100443b18(&local_68,auStack_a8);
  }
  else {
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10044327c | FUN_10044327c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010044340c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10044327c(undefined8 *param_1,undefined1 *param_2,long param_3)

{
  code *pcVar1;
  DecodingError DVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long *unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [48];
  
  lVar10 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar10 + -8);
  lVar12 = (long)&local_110 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100076688(param_2,auStack_e0);
  puVar3 = &DAT_100fc7080;
  FUN_1000f7830(&DAT_100fc7080,&DAT_100c4ac28);
  puVar4 = &DAT_100fc7088;
  FUN_1000f7830(&DAT_100fc7088,&DAT_100c4ac30);
  puVar5 = &local_110;
  _swift_dynamicCast(puVar5,auStack_e0,puVar3,puVar4,0xe);
  if ((int)puVar5 == 0) {
    local_f0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    FUN_1004447c4(&local_110);
    DVar2 = Swift::DecodingError::typeMetadataAccessor();
    lVar9 = CONCAT71((int7)((ulong)&local_110 >> 8),DVar2.value);
    puVar3 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar9,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    lVar10 = *unaff_x20;
    _swift_beginAccess(lVar10 + 0x10,auStack_b8,0,0);
    uVar6 = *(undefined8 *)(lVar10 + 0x10);
    _swift_bridgeObjectRetain(uVar6);
    Swift::DecodingError::Context::_init(puVar3,uVar6,0xd000000000000018,0x8000000100da6850,0);
    (**(code **)(*(long *)(lVar9 + -8) + 0x68))
              (puVar3,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
               ,lVar9);
    _swift_willThrow();
  }
  else {
    FUN_100076508(&local_110,auStack_b8);
    FUN_100076688(auStack_b8,auStack_e0);
    _swift_dynamicCast(lVar12,auStack_e0,puVar4,lVar10,7);
    FUN_100441f1c(auStack_90,lVar12,param_3);
    if (unaff_x21 != 0) {
      FUN_100004594(param_2);
      FUN_100004594(auStack_b8);
      (**(code **)(lVar9 + 8))(lVar12,lVar10);
      return;
    }
    (**(code **)(lVar9 + 8))(lVar12,lVar10);
    lVar10 = *unaff_x20;
    _swift_beginAccess(lVar10 + 0x10,auStack_e0,0,0);
    lVar9 = *(long *)(lVar10 + 0x18);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100443504);
      (*pcVar1)();
    }
    uVar11 = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 0;
    FUN_100449730();
    _swift_allocObject();
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(lVar9);
    puVar7 = auStack_90;
    FUN_100449360(puVar7,uVar11,lVar9);
    param_1[3] = uVar6;
    puVar8 = puVar7;
    FUN_10044480c();
    param_1[4] = puVar8;
    *param_1 = puVar7;
    FUN_100004594(param_2);
    param_2 = auStack_b8;
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x100443504 | FUN_100443504 */

void FUN_100443504(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_58 [3];
  undefined *local_40;
  undefined8 local_38;
  
  local_40 = &DAT_100ed5530;
  uVar1 = param_2;
  FUN_100444850();
  puVar2 = &DAT_100ed4f60;
  local_38 = uVar1;
  _swift_allocObject(&DAT_100ed4f60,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x7265707573;
  *(undefined1 **)(puVar2 + 0x18) = &DAT_e500000000000000;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  puVar2[0x28] = 1;
  local_58[0] = puVar2;
  FUN_10044327c(param_1,local_58,param_2);
  return;
}



/* Address: 0x100443598 | FUN_100443598 */

void FUN_100443598(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_3 + 0x18);
  lVar1 = *(long *)(param_3 + 0x10);
  local_40 = lVar1;
  FUN_10000cbb0(auStack_58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  FUN_10044327c(param_1,auStack_58,param_3);
  return;
}



/* Address: 0x100443610 | FUN_100443610 */

void FUN_100443610(long param_1)

{
  FUN_1001aec10(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x10044361c | FUN_10044361c */

undefined1  [16] FUN_10044361c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_1004423e8();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100443668 | FUN_100443668 */

void FUN_100443668(void)

{
  FUN_100441d5c();
  return;
}



/* Address: 0x1004436a8 | FUN_1004436a8 */

void FUN_1004436a8(void)

{
  FUN_100442228();
  return;
}



/* Address: 0x1004436e8 | FUN_1004436e8 */

void FUN_1004436e8(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decode();
  return;
}



/* Address: 0x1004436fc | FUN_1004436fc */

void FUN_1004436fc(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decode();
  return;
}



/* Address: 0x100443710 | FUN_100443710 */

void FUN_100443710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100442ba4(param_1,param_2,param_5,param_3,param_4);
  return;
}



/* Address: 0x100443760 | FUN_100443760 */

void FUN_100443760(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x100443774 | FUN_100443774 */

void FUN_100443774(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x100443788 | FUN_100443788 */

void FUN_100443788(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x10044379c | FUN_10044379c */

ulong FUN_10044379c(ulong param_1)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return param_1 & 0xffffffffff;
}



/* Address: 0x1004437b4 | FUN_1004437b4 */

void FUN_1004437b4(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x1004437c8 | FUN_1004437c8 */

void FUN_1004437c8(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x1004437dc | FUN_1004437dc */

uint FUN_1004437dc(uint param_1)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return param_1 & 0xffffff;
}



/* Address: 0x1004437f4 | FUN_1004437f4 */

ulong FUN_1004437f4(ulong param_1)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return param_1 & 0xffffffffff;
}



/* Address: 0x10044380c | FUN_10044380c */

void FUN_10044380c(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x100443820 | FUN_100443820 */

void FUN_100443820(void)

{
  FUN_1004438c4();
  return;
}



/* Address: 0x10044383c | FUN_10044383c */

void FUN_10044383c(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x100443850 | FUN_100443850 */

void FUN_100443850(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x100443864 | FUN_100443864 */

uint FUN_100443864(uint param_1)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return param_1 & 0xffffff;
}



/* Address: 0x10044387c | FUN_10044387c */

ulong FUN_10044387c(ulong param_1)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100443894 | FUN_100443894 */

void FUN_100443894(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x1004438a8 | FUN_1004438a8 */

void FUN_1004438a8(void)

{
  FUN_1004438c4();
  return;
}



/* Address: 0x1004438c4 | FUN_1004438c4 */

undefined1  [16]
FUN_1004438c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  (*param_4)();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1004438e4 | FUN_1004438e4 */

void FUN_1004438e4(void)

{
  (extension_Swift)::Swift::KeyedDecodingContainerProtocol::_decodeIfPresent();
  return;
}



/* Address: 0x10044390c | FUN_10044390c */

void FUN_10044390c(void)

{
  FUN_100443038();
  return;
}



/* Address: 0x100443928 | FUN_100443928 */

void FUN_100443928(void)

{
  FUN_100443144();
  return;
}



/* Address: 0x100443968 | FUN_100443968 */

void FUN_100443968(void)

{
  FUN_100443504();
  return;
}



/* Address: 0x1004439a8 | FUN_1004439a8 */

void FUN_1004439a8(void)

{
  FUN_100443598();
  return;
}



/* Address: 0x1004439e8 | FUN_1004439e8 */

void FUN_1004439e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0x21,0);
  _swift_retain(*param_1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x8000000000000000;
  FUN_100443cb4(param_1,param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x100443a74 | FUN_100443a74 */

void FUN_100443a74(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_48;
  _swift_beginAccess(unaff_x20 + 0x10,puVar1,0,0);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_100071340(), ((ulong)puVar1 & 1) == 0)) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x28);
    uVar6 = puVar2[1];
    uVar5 = *puVar2;
    uVar8 = puVar2[3];
    uVar7 = puVar2[2];
    uVar4 = puVar2[4];
    _swift_retain(uVar5);
  }
  param_1[1] = uVar6;
  *param_1 = uVar5;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  param_1[4] = uVar4;
  return;
}



/* Address: 0x100443b0c | FUN_100443b0c */

void FUN_100443b0c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100443b18 | FUN_100443b18 */

undefined8 FUN_100443b18(undefined8 param_1,undefined8 param_2)

{
  FUN_10044b964(param_2,param_1);
  return param_2;
}



/* Address: 0x100443b54 | FUN_100443b54 */

void FUN_100443b54(undefined8 param_1)

{
  long unaff_x20;
  __int64 _Var1;
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  Swift::CodingUserInfoKey::typeMetadataAccessor();
  _Var1 = Swift::Hashable::_rawHashValue(_Var1);
  FUN_100443ba4(param_1,_Var1);
  return;
}



/* Address: 0x100443ba4 | FUN_100443ba4 */

undefined1  [16] FUN_100443ba4(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  CodingUserInfoKey CVar2;
  ulong uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  CVar2 = Swift::CodingUserInfoKey::typeMetadataAccessor();
  lVar8 = *(long *)(CVar2.unknown + -8);
  puVar5 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x48);
    pcVar4 = *(code **)(lVar8 + 0x10);
    do {
      (*pcVar4)(puVar5,*(long *)(unaff_x20 + 0x30) + lVar6 * param_2,CVar2.unknown);
      bVar1 = Swift::Equatable::___infix
                        (puVar5,local_68,CVar2.unknown,
                         PTR___protocol_witness_table_for_Swift_CodingUserInfoKey___Swift_Equatable_in_Swift_100ead268
                        );
      uVar7 = (ulong)bVar1;
      (**(code **)(lVar8 + 8))(puVar5,CVar2.unknown);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Address: 0x100443cb4 | FUN_100443cb4 */

void FUN_100443cb4(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar9 = *unaff_x20;
  uVar2 = param_2;
  uVar4 = param_2;
  FUN_100071340();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100443d88);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    param_3 = param_3 & 1;
    FUN_100443f80(lVar6);
    uVar2 = param_2;
    FUN_100071340();
    if (((uint)uVar4 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100443d44);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_100443e08();
    lVar6 = *unaff_x20;
    goto joined_r0x000100443d9c;
  }
  lVar6 = *unaff_x20;
joined_r0x000100443d9c:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x28);
    uVar3 = *puVar7;
    puVar7[4] = param_1[4];
    uVar12 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar7[1] = param_1[1];
    *puVar7 = uVar12;
    puVar7[3] = uVar11;
    puVar7[2] = uVar10;
    _swift_release(uVar3);
    return;
  }
  lVar5 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_2;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x28);
  uVar3 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar3;
  puVar7[3] = uVar11;
  puVar7[2] = uVar10;
  puVar7[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100443e08);
    (*pcVar1)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  return;
}



/* Address: 0x100443e08 | FUN_100443e08 */

void FUN_100443e08(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  this = (_DictionaryStorage *)&DAT_100fc6fe8;
  FUN_1000f7830(&DAT_100fc6fe8,&DAT_100c4aa60);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x40) {
      _memmove(p_Var5 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_100443ee4;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x28);
        uVar9 = puVar3[4];
        uVar14 = puVar3[1];
        uVar13 = *puVar3;
        uVar12 = puVar3[3];
        uVar11 = puVar3[2];
        *(undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x28);
        puVar3[1] = uVar14;
        *puVar3 = uVar13;
        puVar3[3] = uVar12;
        puVar3[2] = uVar11;
        puVar3[4] = uVar9;
        _swift_retain(uVar13);
        if (uVar6 != 0) break;
LAB_100443ee4:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100443f80);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_100443f58;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_100443f58:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x100443f80 | FUN_100443f80 */

void FUN_100443f80(long param_1,undefined *param_2)

{
  __int64 capacity;
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  Hasher HVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar15;
  __RawDictionaryStorage *p_Var16;
  __uint64 _Var17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc6fe8;
  FUN_1000f7830(&DAT_100fc6fe8,&DAT_100c4aa60);
  p_Var5 = original;
  HVar7.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_1004441ec:
    _swift_release(original);
    *unaff_x20 = (long)p_Var5;
    return;
  }
  p_Var16 = original + 0x40;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)p_Var16;
  lVar9 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar18 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10044421c);
          (*pcVar4)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if (((ulong)param_2 & 1) != 0) {
            uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar14 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004441ec;
        }
        uVar14 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar9 = lVar9 + 1;
      } while (uVar14 == 0);
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar8 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar18 = lVar9;
    }
    uVar8 = LZCOUNT(uVar8) | lVar18 << 6;
    _Var17 = *(__uint64 *)(*(long *)(original + 0x30) + uVar8 * 8);
    puVar10 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x28);
    uVar20 = puVar10[1];
    uVar19 = *puVar10;
    uVar1 = puVar10[2];
    uVar2 = puVar10[3];
    uVar15 = puVar10[4];
    if (((ulong)param_2 & 1) == 0) {
      _swift_retain(uVar19);
    }
    uVar6 = Swift::Hasher::_hash(*(__int64 *)(p_Var5 + 0x28),_Var17,HVar7);
    uVar13 = -1L << ((ulong)(byte)p_Var5[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar6 >> 6;
    uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar8 = 0x3f - uVar13 >> 6;
      do {
        uVar6 = uVar11 + 1;
        if ((uVar6 == uVar8) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100444220);
          (*pcVar4)();
        }
        uVar11 = 0;
        if (uVar6 != uVar8) {
          uVar11 = uVar6;
        }
        bVar3 = (bool)(uVar6 == uVar8 | bVar3);
      } while (*(ulong *)(p_Var5 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
      uVar8 = ~*(ulong *)(p_Var5 + uVar11 * 8 + 0x40);
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar11 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var5 + uVar11 + 0x40) = 1L << (uVar8 & 0x3f) | *(ulong *)(p_Var5 + uVar11 + 0x40);
    *(__uint64 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) = _Var17;
    puVar10 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x28);
    puVar10[1] = uVar20;
    *puVar10 = uVar19;
    puVar10[2] = uVar1;
    puVar10[3] = uVar2;
    puVar10[4] = uVar15;
    *(long *)(p_Var5 + 0x10) = *(long *)(p_Var5 + 0x10) + 1;
    lVar9 = lVar18;
  } while( true );
}



/* Address: 0x100444220 | FUN_100444220 */

void FUN_100444220(long param_1,undefined8 param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_58 [24];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_4;
  uStack_38 = param_5;
  FUN_10000cbb0(auStack_58);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  lVar1 = *param_3;
  *(long *)(lVar1 + 0x10) = param_1 + 1;
  FUN_100076508(auStack_58,lVar1 + param_1 * 0x28 + 0x20);
  return;
}



/* Address: 0x100444298 | FUN_100444298 */

undefined * FUN_100444298(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined *capacity;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100fc6fe8;
  uVar4 = 0;
  FUN_1000f7830();
  puVar2 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = uVar8;
  FUN_100071340();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x78);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = uVar8;
      puVar7 = (undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x28);
      puVar7[1] = uVar13;
      *puVar7 = uVar12;
      puVar7[2] = uVar9;
      puVar7[3] = uVar10;
      puVar7[4] = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1004443dc);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        _swift_retain(uVar12);
        return puVar2;
      }
      uVar8 = puVar5[-5];
      uVar13 = puVar5[-3];
      uVar14 = puVar5[-4];
      uVar9 = puVar5[-2];
      uVar10 = puVar5[-1];
      uVar11 = *puVar5;
      _swift_retain(uVar12);
      uVar3 = uVar8;
      FUN_100071340();
      puVar5 = puVar5 + 6;
      uVar12 = uVar14;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004443a0);
  (*pcVar1)();
}



/* Address: 0x1004443dc | FUN_1004443dc */

undefined * FUN_1004443dc(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  undefined1 *puVar5;
  CodingUserInfoKey CVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *capacity;
  long lVar10;
  long lVar11;
  
  puVar3 = &DAT_100fc6ff0;
  FUN_1000f7830(&DAT_100fc6ff0,&DAT_100c4aa68);
  lVar10 = *(long *)(puVar3 + -8);
  puVar9 = &stack0xffffffffffffffa0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc6ff8;
    FUN_1000f7830(&DAT_100fc6ff8,&DAT_100c4aa70);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_100444548(param_1);
      puVar5 = puVar9;
      FUN_100443b54();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100444544);
        (*pcVar2)();
      }
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar4 + 0x30);
      CVar6 = Swift::CodingUserInfoKey::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(CVar6.unknown + -8) + 0x48) * (long)puVar5,puVar9,
                 CVar6.unknown);
      FUN_100011080(puVar9 + iVar1,*(long *)(puVar4 + 0x38) + (long)puVar5 * 0x20);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100444548);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x100444548 | FUN_100444548 */

undefined8 FUN_100444548(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc6ff0;
  FUN_1000f7830(&DAT_100fc6ff0,&DAT_100c4aa68);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100444598 | FUN_100444598 */

void FUN_100444598(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_release(param_1[6]);
  _swift_release(param_1[7]);
  _swift_bridgeObjectRelease(param_1[8]);
  return;
}



/* Address: 0x1004445d8 | FUN_1004445d8 */

undefined8 * FUN_1004445d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar3;
  uVar5 = param_2[4];
  uVar3 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar3;
  param_1[6] = uVar4;
  uVar3 = param_2[7];
  uVar5 = param_2[8];
  param_1[8] = uVar5;
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  _swift_retain(uVar4);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x100444654 | FUN_100444654 */

undefined8 * FUN_100444654(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100444718 | FUN_100444718 */

void FUN_100444718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x10044473c | FUN_10044473c */

undefined8 * FUN_10044473c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  _swift_release(param_1[6]);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004447b8 | FUN_1004447b8 */

void FUN_1004447b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004447c4 | FUN_1004447c4 */

undefined8 FUN_1004447c4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7090;
  FUN_1000f7830(&DAT_100fc7090,&DAT_100c4ac38);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10044480c | FUN_10044480c */

void FUN_10044480c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fc7098 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100449730(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c4af90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4af90,uVar1);
  DAT_100fc7098 = pTVar2;
  return;
}



/* Address: 0x100444850 | FUN_100444850 */

void FUN_100444850(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc70a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b058;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b058,&DAT_100ed5530);
  DAT_100fc70a0 = pTVar1;
  return;
}


