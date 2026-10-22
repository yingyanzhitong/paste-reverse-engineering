/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005bc350 | thunk_FUN_1005bc354 */

void thunk_FUN_1005bc354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6461c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6461c,&DAT_100ee5d98);
  DAT_100fd4130 = pTVar1;
  return;
}



/* Address: 0x1005bc354 | FUN_1005bc354 */

void FUN_1005bc354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6461c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6461c,&DAT_100ee5d98);
  DAT_100fd4130 = pTVar1;
  return;
}



/* Address: 0x1005bc394 | thunk_FUN_1005bc398 */

void thunk_FUN_1005bc398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c645f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c645f4,&DAT_100ee5d98);
  DAT_100fd4138 = pTVar1;
  return;
}



/* Address: 0x1005bc398 | FUN_1005bc398 */

void FUN_1005bc398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c645f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c645f4,&DAT_100ee5d98);
  DAT_100fd4138 = pTVar1;
  return;
}



/* Address: 0x1005bc3d8 | thunk_FUN_1005ba52c */

void thunk_FUN_1005ba52c(void)

{
  thunk_FUN_1005ba52c();
  return;
}



/* Address: 0x1005bc3dc | thunk_FUN_1005ba5e4 */

void thunk_FUN_1005ba5e4(void)

{
  FUN_1005ba5e4();
  return;
}



/* Address: 0x1005bc3e0 | thunk_FUN_1005ba558 */

void thunk_FUN_1005ba558(void)

{
  thunk_FUN_1005ba558();
  return;
}



/* Address: 0x1005bc3e4 | thunk_FUN_1005bab6c */

void thunk_FUN_1005bab6c(void)

{
  thunk_FUN_1005bab6c();
  return;
}



/* Address: 0x1005bc3e8 | thunk_FUN_1005ba448 */

void thunk_FUN_1005ba448(void)

{
  FUN_1005ba448();
  return;
}



/* Address: 0x1005bc3ec | thunk_FUN_1005b9cec */

void thunk_FUN_1005b9cec(void)

{
  thunk_FUN_1005b9cec();
  return;
}



/* Address: 0x1005bc3f0 | thunk_FUN_1005bad64 */

void thunk_FUN_1005bad64(void)

{
  thunk_FUN_1005bad64();
  return;
}



/* Address: 0x1005bc3f4 | FUN_1005bc3f4 */

void FUN_1005bc3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_d8 = *(long *)(param_4 + -8);
  lVar5 = *(long *)(local_d8 + 0x40);
  local_b8 = auStack_e0 + -(lVar5 + 0xfU & 0xfffffffffffffff0);
  local_b0 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  local_c0 = CONCAT71(extraout_var,OVar1.value);
  lVar9 = *(long *)(local_c0 + -8);
  lVar7 = (long)(auStack_e0 + -(lVar5 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = *(long *)(param_5 + -8);
  lVar8 = lVar7 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = param_2;
  uStack_c8 = param_3;
  local_90 = param_4;
  lStack_88 = param_5;
  local_80 = param_6;
  uStack_78 = param_2;
  local_70 = param_3;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  puVar4 = local_b8;
  lVar5 = local_c0;
  if (unaff_x21 == 0) {
    lVar2 = lVar7;
    (**(code **)(local_a8 + 0x30))(lVar7,1,param_5);
    if ((int)lVar2 == 1) {
      (**(code **)(lVar9 + 8))(lVar7,lVar5);
      (**(code **)(local_d8 + 0x10))(puVar4);
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_6,param_4,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
      Swift::Array<undefined>::_init(puVar4,uVar3,param_4,param_6);
      Swift::Array<undefined>::_withUnsafeBytes(local_b0,local_d0,uStack_c8,puVar4,uVar3,param_5);
      _swift_bridgeObjectRelease(puVar4);
    }
    else {
      pcVar6 = *(code **)(local_a8 + 0x20);
      (*pcVar6)(lVar8,lVar7,param_5);
      (*pcVar6)(local_b0,lVar8,param_5);
    }
  }
  return;
}



/* Address: 0x1005bc5e4 | FUN_1005bc5e4 */

void FUN_1005bc5e4(undefined8 param_1,long param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_8,param_6,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
    lVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x48);
    lVar2 = param_3 * lVar3;
    if (SUB168(SEXT816(param_3) * SEXT816(lVar3),8) != lVar2 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005bc684);
      (*pcVar1)();
    }
    lVar2 = lVar2 + param_2;
  }
  (*param_4)(param_1,param_2,lVar2);
  return;
}



/* Address: 0x1005bc684 | FUN_1005bc684 */

void FUN_1005bc684(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005bc5e4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005bc6a4 | FUN_1005bc6a4 */

undefined8 FUN_1005bc6a4(void)

{
  int *piVar1;
  
  piVar1 = ___error();
  *piVar1 = 0x4e;
  return 0xffffffff;
}



/* Address: 0x1005bc6c4 | FUN_1005bc6c4 */

undefined8 FUN_1005bc6c4(void)

{
  int *piVar1;
  
  piVar1 = ___error();
  *piVar1 = 0x4e;
  return 0xffffffff;
}



/* Address: 0x1005bc6e4 | FUN_1005bc6e4 */

long FUN_1005bc6e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_80 [24];
  undefined8 local_68;
  long lStack_60;
  undefined *local_58;
  
  lVar12 = *(long *)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar12 != 0) {
    local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(param_1);
    FUN_1005bdc6c(0,lVar12,0);
    lVar13 = param_1 + 0x20;
    do {
      puVar11 = local_58;
      FUN_100076688(lVar13,auStack_80);
      lVar2 = lStack_60;
      uVar15 = local_68;
      FUN_100004640(auStack_80,local_68);
      (**(code **)(lVar2 + 0x70))(uVar15,lVar2);
      FUN_100004594(auStack_80);
      uVar4 = *(ulong *)(puVar11 + 0x10);
      local_58 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar4) {
        FUN_1005bdc6c(1 < *(ulong *)(puVar11 + 0x18),uVar4 + 1,1);
      }
      puVar11 = local_58;
      *(ulong *)(local_58 + 0x10) = uVar4 + 1;
      local_58[uVar4 + 0x20] = (char)uVar15;
      lVar13 = lVar13 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  uVar4 = *(ulong *)(puVar11 + 0x10);
  if (uVar4 == 0) goto LAB_1005bc8d4;
  bVar14 = puVar11[0x20];
  uVar1 = uVar4 - 1;
  if (uVar1 == 0) goto LAB_1005bc8d4;
  if (uVar4 < 9) {
    uVar7 = 1;
  }
  else {
    if (uVar4 < 0x41) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar1 & 0xffffffffffffffc0;
      pauVar8 = (undefined1 (*) [16])(puVar11 + 0x51);
      auVar16._0_8_ =
           CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,CONCAT12(
                                                  bVar14,CONCAT11(bVar14,bVar14)))))));
      auVar16[8] = bVar14;
      auVar16[9] = bVar14;
      auVar16[10] = bVar14;
      auVar16[0xb] = bVar14;
      auVar16[0xc] = bVar14;
      auVar16[0xd] = bVar14;
      auVar16[0xe] = bVar14;
      auVar16[0xf] = bVar14;
      uVar15 = auVar16._8_8_;
      auVar17._8_8_ = uVar15;
      auVar17._0_8_ = auVar16._0_8_;
      auVar18._8_8_ = uVar15;
      auVar18._0_8_ = auVar16._0_8_;
      auVar19._8_8_ = uVar15;
      auVar19._0_8_ = auVar16._0_8_;
      uVar7 = uVar6;
      do {
        auVar16 = NEON_umin(pauVar8[-3],auVar16,1);
        auVar17 = NEON_umin(pauVar8[-2],auVar17,1);
        auVar18 = NEON_umin(pauVar8[-1],auVar18,1);
        auVar19 = NEON_umin(*pauVar8,auVar19,1);
        pauVar8 = pauVar8 + 4;
        uVar7 = uVar7 - 0x40;
      } while (uVar7 != 0);
      auVar16 = NEON_umin(auVar16,auVar17,1);
      auVar16 = NEON_umin(auVar16,auVar18,1);
      auVar16 = NEON_umin(auVar16,auVar19,1);
      bVar14 = NEON_uminv(auVar16,1);
      if (uVar1 == uVar6) goto LAB_1005bc8d4;
      if ((uVar1 & 0x38) == 0) {
        uVar7 = uVar6 | 1;
        goto LAB_1005bc8b0;
      }
    }
    uVar9 = uVar1 & 0xfffffffffffffff8;
    uVar7 = uVar9 | 1;
    uVar15 = CONCAT17(bVar14,CONCAT16(bVar14,CONCAT15(bVar14,CONCAT14(bVar14,CONCAT13(bVar14,
                                                  CONCAT12(bVar14,CONCAT11(bVar14,bVar14)))))));
    lVar12 = uVar6 - uVar9;
    puVar10 = (undefined8 *)(puVar11 + uVar6 + 0x21);
    do {
      uVar15 = NEON_umin(*puVar10,uVar15,1);
      lVar12 = lVar12 + 8;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
    bVar14 = NEON_uminv(uVar15,1);
    if (uVar1 == uVar9) goto LAB_1005bc8d4;
  }
LAB_1005bc8b0:
  lVar12 = uVar4 - uVar7;
  pbVar5 = puVar11 + uVar7 + 0x20;
  do {
    bVar3 = *pbVar5;
    if (bVar14 <= *pbVar5) {
      bVar3 = bVar14;
    }
    bVar14 = bVar3;
    lVar12 = lVar12 + -1;
    pbVar5 = pbVar5 + 1;
  } while (lVar12 != 0);
LAB_1005bc8d4:
  _swift_bridgeObjectRelease(puVar11);
  return param_1;
}



/* Address: 0x1005bc908 | FUN_1005bc908 */

long FUN_1005bc908(long param_1)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  byte bVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 0) {
    uVar10 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    _swift_bridgeObjectRetain(param_1);
    if (uVar10 == 0) goto LAB_1005bcb0c;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(param_1);
    FUN_1005bdc6c(0,lVar11,0);
    lVar4 = param_1 + 0x20;
    do {
      puVar9 = local_68;
      FUN_100076688(lVar4,auStack_90);
      lVar2 = lStack_70;
      uVar13 = local_78;
      FUN_100004640(auStack_90,local_78);
      (**(code **)(lVar2 + 0x70))(uVar13,lVar2);
      FUN_100004594(auStack_90);
      uVar1 = *(ulong *)(puVar9 + 0x10);
      uVar10 = uVar1 + 1;
      local_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_1005bdc6c(1 < *(ulong *)(puVar9 + 0x18),uVar10,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar10;
      local_68[uVar1 + 0x20] = (char)uVar13;
      lVar4 = lVar4 + 0x28;
      lVar11 = lVar11 + -1;
      puVar9 = local_68;
    } while (lVar11 != 0);
  }
  bVar12 = puVar9[0x20];
  uVar1 = uVar10 - 1;
  if (uVar1 == 0) goto LAB_1005bcb0c;
  if (uVar10 < 9) {
    uVar6 = 1;
  }
  else {
    if (uVar10 < 0x41) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar1 & 0xffffffffffffffc0;
      pauVar7 = (undefined1 (*) [16])(puVar9 + 0x51);
      auVar14._0_8_ =
           CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,CONCAT12(
                                                  bVar12,CONCAT11(bVar12,bVar12)))))));
      auVar14[8] = bVar12;
      auVar14[9] = bVar12;
      auVar14[10] = bVar12;
      auVar14[0xb] = bVar12;
      auVar14[0xc] = bVar12;
      auVar14[0xd] = bVar12;
      auVar14[0xe] = bVar12;
      auVar14[0xf] = bVar12;
      uVar13 = auVar14._8_8_;
      auVar15._8_8_ = uVar13;
      auVar15._0_8_ = auVar14._0_8_;
      auVar16._8_8_ = uVar13;
      auVar16._0_8_ = auVar14._0_8_;
      auVar17._8_8_ = uVar13;
      auVar17._0_8_ = auVar14._0_8_;
      uVar6 = uVar5;
      do {
        auVar14 = NEON_umin(pauVar7[-3],auVar14,1);
        auVar15 = NEON_umin(pauVar7[-2],auVar15,1);
        auVar16 = NEON_umin(pauVar7[-1],auVar16,1);
        auVar17 = NEON_umin(*pauVar7,auVar17,1);
        pauVar7 = pauVar7 + 4;
        uVar6 = uVar6 - 0x40;
      } while (uVar6 != 0);
      auVar14 = NEON_umin(auVar14,auVar15,1);
      auVar14 = NEON_umin(auVar14,auVar16,1);
      auVar14 = NEON_umin(auVar14,auVar17,1);
      bVar12 = NEON_uminv(auVar14,1);
      if (uVar1 == uVar5) goto LAB_1005bcb0c;
      if ((uVar1 & 0x38) == 0) {
        uVar6 = uVar5 | 1;
        goto LAB_1005bcae8;
      }
    }
    uVar8 = uVar1 & 0xfffffffffffffff8;
    uVar6 = uVar8 | 1;
    uVar13 = CONCAT17(bVar12,CONCAT16(bVar12,CONCAT15(bVar12,CONCAT14(bVar12,CONCAT13(bVar12,
                                                  CONCAT12(bVar12,CONCAT11(bVar12,bVar12)))))));
    lVar11 = uVar5 + 0x21;
    lVar4 = uVar5 - uVar8;
    do {
      uVar13 = NEON_umin(*(undefined8 *)(puVar9 + lVar11),uVar13,1);
      lVar11 = lVar11 + 8;
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0);
    bVar12 = NEON_uminv(uVar13,1);
    if (uVar1 == uVar8) goto LAB_1005bcb0c;
  }
LAB_1005bcae8:
  lVar4 = uVar10 - uVar6;
  lVar11 = uVar6 + 0x20;
  do {
    bVar3 = puVar9[lVar11];
    if (bVar12 <= (byte)puVar9[lVar11]) {
      bVar3 = bVar12;
    }
    bVar12 = bVar3;
    lVar11 = lVar11 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
LAB_1005bcb0c:
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(param_1);
  return param_1;
}



/* Address: 0x1005bcb4c | FUN_1005bcb4c */

void FUN_1005bcb4c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = *(ulong *)(uVar4 + 0x10);
  if (uVar6 != 0) {
    uVar7 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar7 & 1) == 0) {
      FUN_1005bded8();
    }
    uVar7 = 0;
    lVar5 = uVar4 + 0x20;
    do {
      if (*(ulong *)(uVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005bcbfc);
        (*pcVar3)();
      }
      uVar7 = uVar7 + 1;
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      FUN_10007d048(lVar5,uVar1);
      (**(code **)(lVar2 + 0x78))(param_1,uVar1,lVar2);
      *unaff_x20 = uVar4;
      lVar5 = lVar5 + 0x28;
    } while (uVar6 != uVar7);
  }
  *(char *)(unaff_x20 + 1) = (char)param_1;
  return;
}



/* Address: 0x1005bcc0c | FUN_1005bcc0c */

code * FUN_1005bcc0c(long *param_1)

{
  long unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(unaff_x20 + 8);
  return FUN_1005bcc28;
}



/* Address: 0x1005bcc28 | FUN_1005bcc28 */

void FUN_1005bcc28(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = *(undefined1 *)(param_1 + 1);
  puVar5 = (ulong *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar6 = *puVar5;
    uVar8 = *(ulong *)(uVar6 + 0x10);
    if (uVar8 != 0) {
      uVar9 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar9 & 1) == 0) {
        FUN_1005bded8();
      }
      uVar9 = 0;
      lVar7 = uVar6 + 0x20;
      do {
        if (*(ulong *)(uVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bccf8);
          (*pcVar4)();
        }
        puVar5 = (ulong *)*param_1;
        uVar9 = uVar9 + 1;
        uVar1 = *(undefined8 *)(lVar7 + 0x18);
        lVar2 = *(long *)(lVar7 + 0x20);
        FUN_10007d048(lVar7,uVar1);
        (**(code **)(lVar2 + 0x78))(uVar3,uVar1,lVar2);
        *puVar5 = uVar6;
        lVar7 = lVar7 + 0x28;
      } while (uVar8 != uVar9);
      puVar5 = (ulong *)*param_1;
    }
    *(undefined1 *)(puVar5 + 1) = uVar3;
  }
  else {
    FUN_1005bcb4c(uVar3);
  }
  return;
}



/* Address: 0x1005bcd08 | FUN_1005bcd08 */

undefined1  [16] FUN_1005bcd08(long param_1,undefined8 param_2,code *param_3,undefined *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_b0 [24];
  long local_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 == 1) {
    pcVar10 = *(code **)(param_1 + 0x38);
    puVar9 = *(undefined **)(param_1 + 0x40);
    FUN_100004640(param_1 + 0x20,pcVar10);
    (**(code **)(puVar9 + 0x10))();
    if (pcVar10 == (code *)0x0) {
      puVar9 = param_4;
      pcVar10 = param_3;
      if (param_3 != (code *)0x0) {
        _swift_retain(param_4);
      }
    }
    else if (param_3 != (code *)0x0) {
      puVar4 = &DAT_100fd4140;
      FUN_1000f7830(&DAT_100fd4140,&DAT_100c64700);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 4;
      *(undefined8 *)(puVar4 + 0x10) = 2;
      *(code **)(puVar4 + 0x20) = pcVar10;
      *(undefined **)(puVar4 + 0x28) = puVar9;
      *(code **)(puVar4 + 0x30) = param_3;
      *(undefined **)(puVar4 + 0x38) = param_4;
      puVar9 = &DAT_100ee61f8;
      _swift_allocObject(&DAT_100ee61f8,0x18,7);
      *(undefined **)(puVar9 + 0x10) = puVar4;
      _swift_retain(param_4);
      pcVar10 = thunk_FUN_1005be170;
    }
  }
  else {
    lVar6 = lVar11;
    if (param_3 != (code *)0x0) {
      lVar6 = lVar11 + 1;
    }
    FUN_100011128(param_3,param_4);
    uVar5 = 0;
    FUN_1005be044(0,lVar6,0,PTR___swiftEmptyArrayStorage_100eae0d8);
    if (lVar11 != 0) {
      param_1 = param_1 + 0x20;
      uVar7 = uVar5;
      do {
        FUN_100076688(param_1,auStack_88);
        FUN_100076508(auStack_88,auStack_b0);
        lVar8 = lStack_90;
        lVar6 = local_98;
        FUN_100004640(auStack_b0,local_98);
        (**(code **)(lVar8 + 0x10))();
        uVar5 = uVar7;
        if (lVar6 != 0) {
          uVar2 = *(ulong *)(uVar7 + 0x10);
          uVar3 = *(ulong *)(uVar7 + 0x18);
          _swift_retain(lVar8);
          if (uVar3 >> 1 <= uVar2) {
            uVar5 = (ulong)(1 < uVar3);
            FUN_1005be044(uVar5,uVar2 + 1,1,uVar7);
          }
          *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
          lVar1 = uVar5 + uVar2 * 0x10;
          *(long *)(lVar1 + 0x20) = lVar6;
          *(long *)(lVar1 + 0x28) = lVar8;
          FUN_100004550(lVar6,lVar8);
        }
        FUN_100004594(auStack_b0);
        param_1 = param_1 + 0x28;
        lVar11 = lVar11 + -1;
        uVar7 = uVar5;
      } while (lVar11 != 0);
    }
    uVar7 = uVar5;
    if (param_3 != (code *)0x0) {
      uVar2 = *(ulong *)(uVar5 + 0x10);
      uVar3 = *(ulong *)(uVar5 + 0x18);
      _swift_retain(param_4);
      if (uVar3 >> 1 <= uVar2) {
        uVar7 = (ulong)(1 < uVar3);
        FUN_1005be044(uVar7,uVar2 + 1,1,uVar5);
      }
      *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
      lVar11 = uVar7 + uVar2 * 0x10;
      *(code **)(lVar11 + 0x20) = param_3;
      *(undefined **)(lVar11 + 0x28) = param_4;
      FUN_100004550(param_3,param_4);
    }
    if (*(long *)(uVar7 + 0x10) == 0) {
      _swift_bridgeObjectRelease(uVar7);
      pcVar10 = (code *)0x0;
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar9 = &DAT_100ee61d0;
      _swift_allocObject(&DAT_100ee61d0,0x18,7);
      *(ulong *)(puVar9 + 0x10) = uVar7;
      pcVar10 = FUN_1005be170;
    }
  }
  auVar12._8_8_ = puVar9;
  auVar12._0_8_ = pcVar10;
  return auVar12;
}



/* Address: 0x1005bcf9c | FUN_1005bcf9c */

void FUN_1005bcf9c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005bea9c();
  FUN_100004550(param_1,param_2);
  return;
}



/* Address: 0x1005bcfd0 | FUN_1005bcfd0 */

undefined1  [16] FUN_1005bcfd0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  param_1[2] = unaff_x20;
  param_1[3] = uVar1;
  FUN_1005bcd08(uVar1,param_2,unaff_x20[2],unaff_x20[3]);
  *param_1 = uVar1;
  param_1[1] = param_2;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1005bd00c;
  return auVar2;
}



/* Address: 0x1005bd00c | FUN_1005bd00c */

void FUN_1005bd00c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  if ((param_2 & 1) == 0) {
    uVar6 = param_1[3];
    uVar5 = *(ulong *)(uVar6 + 0x10);
    if (uVar5 != 0) {
      uVar9 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar9 & 1) == 0) {
        FUN_1005bded8();
      }
      uVar9 = 0;
      lVar7 = uVar6 + 0x20;
      puVar10 = (ulong *)param_1[2];
      do {
        if (*(ulong *)(uVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1005bd114);
          (*pcVar8)();
        }
        uVar9 = uVar9 + 1;
        uVar2 = *(undefined8 *)(lVar7 + 0x18);
        lVar4 = *(long *)(lVar7 + 0x20);
        FUN_10007d048(lVar7,uVar2);
        pcVar8 = *(code **)(lVar4 + 0x18);
        FUN_100011128(uVar1,uVar3);
        (*pcVar8)(uVar1,uVar3,uVar2,lVar4);
        *puVar10 = uVar6;
        lVar7 = lVar7 + 0x28;
      } while (uVar5 != uVar9);
    }
  }
  else {
    FUN_100011128(uVar1,uVar3);
    FUN_1005bea9c(uVar1,uVar3);
    FUN_100004550(uVar1,uVar3);
  }
  FUN_100004550(uVar1,uVar3);
  return;
}



/* Address: 0x1005bd124 | thunk_FUN_1005beb7c */

void thunk_FUN_1005beb7c(void)

{
  FUN_1005beb7c();
  return;
}



/* Address: 0x1005bd128 | thunk_FUN_1005bec50 */

void thunk_FUN_1005bec50(void)

{
  FUN_1005bec50();
  return;
}



/* Address: 0x1005bd12c | FUN_1005bd12c */

undefined1 * FUN_1005bd12c(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  Dictionary DVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  __int64 _Var15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined1 *local_1a0;
  undefined1 *local_190;
  ulong local_188;
  undefined1 auStack_180 [48];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 local_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 local_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
  undefined *local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 *local_d0;
  undefined1 auStack_c8 [24];
  code *local_b0;
  long lStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 *local_78;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1005bed1c();
  lVar9 = *(long *)(param_1 + 0x10);
  local_78 = puVar2;
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005bd680);
    (*pcVar1)();
  }
  lVar16 = *(long *)(param_1 + 0x38);
  lVar8 = *(long *)(param_1 + 0x40);
  FUN_100004640(param_1 + 0x20,lVar16);
  (**(code **)(lVar8 + 0x58))(lVar16,lVar8);
  _Var15 = *(__int64 *)(lVar16 + 0x10);
  _swift_bridgeObjectRelease();
  DVar3.unknown = &DAT_100fd4148;
  FUN_1000f7830(&DAT_100fd4148,&DAT_100c64708);
  Swift::Dictionary::reserveCapacity(_Var15,DVar3);
  lVar16 = 0;
  local_1a0 = local_78;
  do {
    FUN_100076688(param_1 + 0x20 + lVar16 * 0x28,auStack_a0);
    lVar16 = lVar16 + 1;
    FUN_100076508(auStack_a0,auStack_c8);
    lVar8 = lStack_a8;
    pcVar1 = local_b0;
    FUN_100004640(auStack_c8,local_b0);
    (**(code **)(lVar8 + 0x58))(pcVar1,lVar8);
    puVar18 = local_1a0;
    _swift_isUniquelyReferenced_nonNull_native();
    local_d0 = local_1a0;
    uVar12 = 1L << ((ulong)(byte)pcVar1[0x20] & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if (((byte)pcVar1[0x20] & 0x3f) < 6) {
      uVar17 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar17 = uVar17 & *(ulong *)(pcVar1 + 0x40);
    uVar12 = uVar12 + 0x3f >> 6;
    _swift_bridgeObjectRetain(pcVar1);
    lVar8 = 0;
LAB_1005bd304:
    if (uVar17 == 0) {
      uVar17 = uVar12;
      if ((long)uVar12 <= lVar8 + 1) {
        uVar17 = lVar8 + 1;
      }
      lVar13 = uVar17 - 1;
      lVar19 = lVar8;
      do {
        lVar8 = lVar19 + 1;
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005bd5e0);
          (*pcVar1)();
        }
        if ((long)uVar12 <= lVar8) {
          uVar17 = 0;
          uStack_11f = 0;
          uStack_120 = 0;
          uStack_138 = 0;
          local_137 = 0;
          uStack_140 = 0;
          uStack_128 = 0;
          local_127 = 0;
          uStack_130 = 0;
          uStack_12f = 0;
          uStack_148 = 0;
          local_150 = 0;
          goto LAB_1005bd388;
        }
        uVar17 = *(ulong *)(pcVar1 + 0x40 + lVar8 * 8);
        lVar19 = lVar19 + 1;
      } while (uVar17 == 0);
    }
    uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
    uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
    uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 - 1 & uVar17;
    uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar8 << 6;
    puVar11 = (undefined8 *)(*(long *)(pcVar1 + 0x30) + uVar10 * 0x10);
    local_150 = *puVar11;
    uVar6 = puVar11[1];
    uStack_148 = uVar6;
    FUN_1005bee50(*(long *)(pcVar1 + 0x38) + uVar10 * 0x30,&uStack_140);
    _swift_bridgeObjectRetain(uVar6);
    lVar13 = lVar8;
LAB_1005bd388:
    FUN_1000f8cac(&local_150,&local_190,&DAT_100fd4150,&DAT_100c64710);
    uVar10 = local_188;
    puVar4 = local_190;
    if (local_188 != 0) {
      FUN_1005bee50(auStack_180,&local_100);
      local_110 = puVar4;
      uStack_108 = uVar10;
      _swift_bridgeObjectRetain(uVar10);
      FUN_1000fb4c4(&local_190,&DAT_100fd4158,&DAT_100c64718);
      FUN_1000fb4c4(&local_150,&DAT_100fd4150,&DAT_100c64710);
      uVar10 = uStack_108;
      puVar2 = local_110;
      if (uStack_108 == 0) goto LAB_1005bd534;
      uStack_148 = uStack_f8;
      local_150 = local_100;
      uStack_138 = uStack_e8;
      uStack_140 = uStack_f0;
      uStack_12f = (undefined7)uStack_df;
      uStack_128 = (undefined1)((ulong)uStack_df >> 0x38);
      local_137 = local_e7;
      uStack_130 = uStack_e0;
      puVar4 = local_110;
      uVar7 = uStack_108;
      FUN_1005be370();
      uVar14 = (ulong)~(uint)uVar7 & 1;
      lVar8 = *(long *)(local_1a0 + 0x10) + uVar14;
      if (SCARRY8(*(long *)(local_1a0 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005bd678);
        (*pcVar1)();
      }
      if (*(long *)(local_1a0 + 0x18) < lVar8) {
        FUN_1005be624(lVar8,(uint)puVar18 & 1);
        puVar4 = puVar2;
        uVar14 = uVar10;
        FUN_1005be370();
        if (((uint)uVar7 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005bd690);
          (*pcVar1)();
        }
joined_r0x0001005bd50c:
        if ((uVar7 & 1) != 0) goto LAB_1005bd2b8;
LAB_1005bd488:
        local_1a0 = local_d0;
        *(ulong *)(local_d0 + ((ulong)puVar4 >> 6) * 8 + 0x40) =
             *(ulong *)(local_d0 + ((ulong)puVar4 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar4 & 0x3f);
        puVar11 = (undefined8 *)(*(long *)(local_d0 + 0x30) + (long)puVar4 * 0x10);
        *puVar11 = puVar2;
        puVar11[1] = uVar10;
        puVar11 = (undefined8 *)(*(long *)(local_d0 + 0x38) + (long)puVar4 * 0x30);
        puVar11[1] = uStack_148;
        *puVar11 = local_150;
        puVar11[3] = CONCAT71(local_137,uStack_138);
        puVar11[2] = uStack_140;
        *(ulong *)((long)puVar11 + 0x21) = CONCAT17(uStack_128,uStack_12f);
        *(ulong *)((long)puVar11 + 0x19) = CONCAT17(uStack_130,local_137);
        if (SCARRY8(*(long *)(local_d0 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005bd67c);
          (*pcVar1)();
        }
        *(long *)(local_d0 + 0x10) = *(long *)(local_d0 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar18 & 1) == 0) {
          FUN_1005be474();
          goto joined_r0x0001005bd50c;
        }
        if ((uVar7 & 1) == 0) goto LAB_1005bd488;
LAB_1005bd2b8:
        local_1a0 = local_d0;
        FUN_1005bee50(&local_150,&local_190);
        _swift_bridgeObjectRelease(uVar10);
        FUN_1005bee8c(&local_150);
        FUN_10054d4c4(&local_190,*(long *)(local_1a0 + 0x38) + (long)puVar4 * 0x30);
      }
      puVar18 = &DAT_00000001;
      lVar8 = lVar13;
      goto LAB_1005bd304;
    }
    FUN_1000fb4c4(&local_150,&DAT_100fd4150,&DAT_100c64710);
    uStack_108 = 0;
    local_110 = (undefined1 *)0x0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_df = 0;
    local_e7 = 0;
    uStack_e0 = 0;
LAB_1005bd534:
    _swift_release(pcVar1);
    _swift_bridgeObjectRelease(pcVar1);
    lVar8 = lStack_a8;
    pcVar1 = local_b0;
    local_78 = local_1a0;
    FUN_100004640(auStack_c8,local_b0);
    (**(code **)(lVar8 + 0x10))(pcVar1,lVar8);
    if (pcVar1 != (code *)0x0) {
      pcVar5 = pcVar1;
      (*pcVar1)();
      puVar18 = local_1a0;
      _swift_isUniquelyReferenced_nonNull_native(local_1a0);
      local_110 = local_1a0;
      FUN_1005beec0(pcVar5,FUN_1005be43c,0,puVar18,&local_110);
      _swift_bridgeObjectRelease(pcVar5);
      FUN_100004550(pcVar1,lVar8);
      local_1a0 = local_110;
      local_78 = local_1a0;
    }
    FUN_100004594(auStack_c8);
    if (lVar16 == lVar9) {
      if (param_3 != (code *)0x0) {
        uVar6 = param_4;
        _swift_retain(param_4);
        (*param_3)();
        puVar18 = local_1a0;
        _swift_isUniquelyReferenced_nonNull_native(local_1a0);
        local_110 = local_1a0;
        FUN_1005beec0(uVar6,FUN_1005be43c,0,puVar18,&local_110);
        _swift_bridgeObjectRelease(uVar6);
        FUN_100004550(param_3,param_4);
        local_1a0 = local_110;
      }
      return local_1a0;
    }
  } while( true );
}



/* Address: 0x1005bd690 | FUN_1005bd690 */

void FUN_1005bd690(undefined8 param_1)

{
  FUN_1005bf20c();
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x1005bd6b4 | FUN_1005bd6b4 */

undefined1  [16] FUN_1005bd6b4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  uVar1 = *unaff_x20;
  FUN_1005bd12c(uVar1,param_2,unaff_x20[2],unaff_x20[3]);
  *param_1 = uVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1005bd6f0;
  return auVar2;
}



/* Address: 0x1005bd6f0 | FUN_1005bd6f0 */

void FUN_1005bd6f0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    FUN_1005bf20c(uVar1);
  }
  else {
    _swift_bridgeObjectRetain();
    FUN_1005bf20c();
    _swift_bridgeObjectRelease(uVar1);
  }
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1005bd730 | FUN_1005bd730 */

void FUN_1005bd730(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  char cStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  long lStack_98;
  undefined1 auStack_90 [48];
  
  lVar3 = *(long *)(param_4 + 0x10);
  if (lVar3 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_100076688(param_4,auStack_90);
      FUN_100076508(auStack_90,auStack_b8);
      lVar2 = lStack_98;
      uVar1 = local_a0;
      FUN_100004640(auStack_b8,local_a0);
      (**(code **)(lVar2 + 0x40))(&local_120,param_2,param_3,uVar1,lVar2);
      if (cStack_f8 != -1) {
        uStack_e8 = uStack_118;
        local_f0 = local_120;
        uStack_e0 = uStack_110;
        param_1[1] = uStack_118;
        *param_1 = local_120;
        param_1[3] = CONCAT71(local_107,uStack_108);
        param_1[2] = uStack_110;
        *(ulong *)((long)param_1 + 0x21) = CONCAT17(cStack_f8,uStack_ff);
        *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_100,local_107);
        FUN_100004594(auStack_b8);
        return;
      }
      FUN_1000fb4c4(&local_120,&DAT_100fd4160,&DAT_100c64720);
      FUN_100004594(auStack_b8);
      param_4 = param_4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Address: 0x1005bd850 | FUN_1005bd850 */

void FUN_1005bd850(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *unaff_x20;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_90 [48];
  
  uVar5 = *unaff_x20;
  uVar7 = *(ulong *)(uVar5 + 0x10);
  if (uVar7 != 0) {
    uVar3 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar3 & 1) == 0) {
      FUN_1005bded8();
    }
    uVar3 = 0;
    lVar6 = uVar5 + 0x20;
    do {
      if (*(ulong *)(uVar5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bd954);
        (*pcVar4)();
      }
      uVar3 = uVar3 + 1;
      FUN_1000f8cac(param_1,auStack_90,&DAT_100fd4160,&DAT_100c64720);
      uVar1 = *(undefined8 *)(lVar6 + 0x18);
      lVar2 = *(long *)(lVar6 + 0x20);
      FUN_10007d048(lVar6,uVar1);
      pcVar4 = *(code **)(lVar2 + 0x48);
      _swift_bridgeObjectRetain(param_3);
      (*pcVar4)(auStack_90,param_2,param_3,uVar1,lVar2);
      *unaff_x20 = uVar5;
      lVar6 = lVar6 + 0x28;
    } while (uVar7 != uVar3);
  }
  _swift_bridgeObjectRelease(param_3);
  FUN_1000fb4c4(param_1,&DAT_100fd4160,&DAT_100c64720);
  return;
}



/* Address: 0x1005bd964 | FUN_1005bd964 */

undefined1  [16] FUN_1005bd964(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x78;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x78);
  }
  else {
    _swift_coroFrameAlloc(0x78,0x2f49);
  }
  *param_1 = pvVar1;
  *(undefined8 *)((long)pvVar1 + 0x68) = param_3;
  *(undefined8 **)((long)pvVar1 + 0x70) = unaff_x20;
  *(undefined8 *)((long)pvVar1 + 0x60) = param_2;
  FUN_1005bd730(pvVar1,param_2,param_3,*unaff_x20);
  auVar2._8_8_ = pvVar1;
  auVar2._0_8_ = FUN_1005bd9e8;
  return auVar2;
}



/* Address: 0x1005bd9e8 | FUN_1005bd9e8 */

void FUN_1005bd9e8(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x68);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x60);
    _swift_bridgeObjectRetain(uVar1);
    FUN_1005bd850(pvVar2,uVar3,uVar1);
  }
  else {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x68);
    uVar3 = *(undefined8 *)((long)pvVar2 + 0x60);
    FUN_1000f8cac(pvVar2,(long)pvVar2 + 0x30,&DAT_100fd4160,&DAT_100c64720);
    _swift_bridgeObjectRetain(uVar1);
    FUN_1005bd850((long)pvVar2 + 0x30,uVar3,uVar1);
    FUN_1000fb4c4(pvVar2,&DAT_100fd4160,&DAT_100c64720);
  }
  _free(pvVar2);
  return;
}



/* Address: 0x1005bda94 | FUN_1005bda94 */

void FUN_1005bda94(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1005bcd08(*unaff_x20,param_2,unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005bdaa0 | thunk_FUN_1005bcf9c */

void thunk_FUN_1005bcf9c(void)

{
  FUN_1005bcf9c();
  return;
}



/* Address: 0x1005bdaa4 | FUN_1005bdaa4 */

undefined1  [16] FUN_1005bdaa4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = *unaff_x20;
  FUN_1005bcd08(uVar1,param_2,unaff_x20[2],unaff_x20[3]);
  *param_1 = uVar1;
  param_1[1] = param_2;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1005bdae0;
  return auVar2;
}



/* Address: 0x1005bdae0 | FUN_1005bdae0 */

void FUN_1005bdae0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((param_2 & 1) == 0) {
    FUN_1005bea9c(uVar1,uVar2);
  }
  else {
    FUN_100011128(uVar1,uVar2);
    FUN_1005bea9c(uVar1,uVar2);
    FUN_100004550(uVar1,uVar2);
  }
  FUN_100004550(uVar1,uVar2);
  return;
}



/* Address: 0x1005bdb44 | FUN_1005bdb44 */

void FUN_1005bdb44(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1005beb7c(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005bdb4c | FUN_1005bdb4c */

void FUN_1005bdb4c(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = *unaff_x20;
  FUN_1005bec50();
  return;
}



/* Address: 0x1005bdb58 | FUN_1005bdb58 */

void FUN_1005bdb58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1005bd730(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x1005bdb60 | thunk_FUN_1005bd850 */

void thunk_FUN_1005bd850(void)

{
  FUN_1005bd850();
  return;
}



/* Address: 0x1005bdb64 | FUN_1005bdb64 */

undefined1  [16] FUN_1005bdb64(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x78;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x78);
  }
  else {
    _swift_coroFrameAlloc(0x78,0x4987);
  }
  *param_1 = pvVar1;
  *(undefined8 *)((long)pvVar1 + 0x68) = param_3;
  *(undefined8 **)((long)pvVar1 + 0x70) = unaff_x20;
  *(undefined8 *)((long)pvVar1 + 0x60) = param_2;
  FUN_1005bd730(pvVar1,param_2,param_3,*unaff_x20);
  auVar2._8_8_ = pvVar1;
  auVar2._0_8_ = FUN_1005bd9e8;
  return auVar2;
}



/* Address: 0x1005bdbe8 | FUN_1005bdbe8 */

void FUN_1005bdbe8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1005bd12c(*unaff_x20,param_2,unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005bdbf4 | thunk_FUN_1005bd690 */

void thunk_FUN_1005bd690(void)

{
  FUN_1005bd690();
  return;
}



/* Address: 0x1005bdbf8 | FUN_1005bdbf8 */

undefined1 FUN_1005bdbf8(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 8);
}



/* Address: 0x1005bdc00 | thunk_FUN_1005bcb4c */

void thunk_FUN_1005bcb4c(void)

{
  FUN_1005bcb4c();
  return;
}



/* Address: 0x1005bdc04 | FUN_1005bdc04 */

code * FUN_1005bdc04(long *param_1)

{
  long unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(unaff_x20 + 8);
  return FUN_1005bdc20;
}



/* Address: 0x1005bdc20 | FUN_1005bdc20 */

void FUN_1005bdc20(long param_1)

{
  FUN_1005bcb4c(*(undefined1 *)(param_1 + 8));
  return;
}



/* Address: 0x1005bdc44 | FUN_1005bdc44 */

void FUN_1005bdc44(void)

{
  _swift_slowAlloc(0x40,0xffffffffffffffff);
  return;
}



/* Address: 0x1005bdc50 | FUN_1005bdc50 */

void FUN_1005bdc50(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005bdca0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1005bdc6c | FUN_1005bdc6c */

void FUN_1005bdc6c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005be178();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1005bdca0 | FUN_1005bdca0 */

undefined * FUN_1005bdca0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005bdda8);
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
    puVar3 = &DAT_100fd4178;
    FUN_1000f7830(&DAT_100fd4178,&DAT_100c647b8);
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



/* Address: 0x1005bdda8 | FUN_1005bdda8 */

undefined * FUN_1005bdda8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005bded8);
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
    puVar3 = &DAT_100fd4198;
    FUN_1000f7830(&DAT_100fd4198,&DAT_100c647e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd4158;
    FUN_1000f7830(&DAT_100fd4158,&DAT_100c64718);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 * 0x40);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1005bded8 | FUN_1005bded8 */

void FUN_1005bded8(long param_1)

{
  FUN_1005bdf00(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1005bdeec | FUN_1005bdeec */

void FUN_1005bdeec(long param_1)

{
  FUN_1005be26c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1005bdf00 | FUN_1005bdf00 */

undefined * FUN_1005bdf00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005be044);
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
    puVar3 = &DAT_100fd41a0;
    FUN_1000f7830(&DAT_100fd41a0,&DAT_100c647e8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fd41a8;
    FUN_1000f7830(&DAT_100fd41a8,&DAT_100c647f0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1005be044 | FUN_1005be044 */

undefined * FUN_1005be044(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005be14c);
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
    puVar3 = &DAT_100fd4140;
    FUN_1000f7830(&DAT_100fd4140,&DAT_100c64700);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ee7310);
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



/* Address: 0x1005be14c | FUN_1005be14c */

void FUN_1005be14c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005be170 | FUN_1005be170 */

void FUN_1005be170(void)

{
  long unaff_x20;
  
  FUN_1005cf7d4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005be178 | FUN_1005be178 */

undefined *
FUN_1005be178(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005be26c);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(size_t *)(param_5 + 0x10) = sVar6;
    *(long *)(param_5 + 0x18) = (long)puVar4 * 2 + -0x40;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar2,sVar6);
  }
  else {
    if (puVar4 != param_4 || puVar2 + sVar6 <= puVar1) {
      _memmove(puVar1,puVar2,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_7)(param_4);
  return puVar4;
}



/* Address: 0x1005be26c | FUN_1005be26c */

undefined * FUN_1005be26c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005be36c);
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
    puVar3 = &DAT_100fd4180;
    FUN_1000f7830(&DAT_100fd4180,&DAT_100c647c0);
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



/* Address: 0x1005be36c | thunk_FUN_1005be370 */

void thunk_FUN_1005be370(char *param_1,void *param_2)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_1000715b8(param_1,param_2,_Var1);
  return;
}


