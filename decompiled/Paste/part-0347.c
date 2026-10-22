/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100446c38 | FUN_100446c38 */

void FUN_100446c38(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446c4c | FUN_100446c4c */

void FUN_100446c4c(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446c60 | FUN_100446c60 */

uint FUN_100446c60(uint param_1)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return param_1 & 0xffffff;
}



/* Address: 0x100446c78 | FUN_100446c78 */

ulong FUN_100446c78(ulong param_1)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100446c90 | FUN_100446c90 */

void FUN_100446c90(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446ca4 | FUN_100446ca4 */

void FUN_100446ca4(undefined8 param_1,undefined8 param_2)

{
  FUN_100446cc0(param_1,param_2,PTR__decodeIfPresent_100ead770);
  return;
}



/* Address: 0x100446cc0 | FUN_100446cc0 */

undefined1  [16] FUN_100446cc0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  (*param_3)();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100446ce0 | FUN_100446ce0 */

void FUN_100446ce0(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446d08 | FUN_100446d08 */

void FUN_100446d08(void)

{
  FUN_100446d1c();
  return;
}



/* Address: 0x100446d1c | FUN_100446d1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100446e04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100446d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  TargetProtocolConformanceDescriptor *pTVar1;
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
  FUN_100441c04(&local_c8,uVar2,&local_80,param_3,param_4);
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
    FUN_1004447b8(0,param_3,param_4);
    pTVar1 = &TargetProtocolConformanceDescriptor_100c4aaa8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4aaa8,uVar2);
    Swift::KeyedDecodingContainer::_init(param_1,pTVar1,param_3,uVar2,pTVar1);
  }
  else {
    _swift_retain(uVar2);
    FUN_100443b18(&local_80,&local_110);
  }
  return;
}



/* Address: 0x100446e28 | FUN_100446e28 */

void FUN_100446e28(void)

{
  FUN_100446e3c();
  return;
}



/* Address: 0x100446e3c | FUN_100446e3c */

void FUN_100446e3c(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_68 [24];
  
  lVar6 = *unaff_x20;
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  lVar8 = unaff_x20[5];
  param_1[3] = &DAT_100ed52b0;
  FUN_1004448b4();
  param_1[4] = param_2;
  puVar3 = &DAT_100ed5230;
  _swift_allocObject(&DAT_100ed5230,0x61,7);
  *param_1 = puVar3;
  *(undefined8 *)(puVar3 + 0x58) = 0;
  puVar3[0x60] = 1;
  *(long *)(puVar3 + 0x10) = lVar6;
  lVar7 = unaff_x20[2];
  lVar4 = unaff_x20[2];
  lVar9 = unaff_x20[1];
  _swift_beginAccess(lVar6 + 0x10,auStack_68,0,0);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(puVar3 + 0x48) = uVar5;
  *(undefined8 *)(puVar3 + 0x50) = 0;
  *(long *)(puVar3 + 0x20) = lVar4;
  *(long *)(puVar3 + 0x18) = lVar9;
  *(long *)(puVar3 + 0x28) = lVar1;
  *(long *)(puVar3 + 0x30) = lVar2;
  *(long *)(puVar3 + 0x38) = lVar8;
  lVar4 = 0;
  FUN_100449750();
  _swift_allocObject();
  *(long *)(lVar4 + 0x28) = lVar9;
  *(long *)(lVar4 + 0x30) = lVar7;
  *(long *)(lVar4 + 0x38) = lVar1;
  *(long *)(lVar4 + 0x40) = lVar2;
  *(long *)(lVar4 + 0x48) = lVar8;
  *(long *)(lVar4 + 0x10) = lVar7 + lVar8;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(long *)(lVar4 + 0x20) = lVar2;
  *(long *)(puVar3 + 0x40) = lVar4;
  _swift_retain_n(lVar9,2);
  _swift_retain(lVar6);
  _swift_bridgeObjectRetain(uVar5);
  return;
}



/* Address: 0x100446f58 | FUN_100446f58 */

void FUN_100446f58(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  FUN_100449730();
  lVar3 = lVar2;
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined **)(lVar3 + 0x20) = puVar1;
  param_1[3] = lVar2;
  lVar2 = lVar3;
  FUN_10044480c();
  param_1[4] = lVar2;
  *param_1 = lVar3;
  return;
}



/* Address: 0x100446fc0 | FUN_100446fc0 */

void FUN_100446fc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1004448b4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100446fe4 | FUN_100446fe4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100447094 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100446fe4(undefined8 *param_1,long param_2)

{
  int iVar1;
  DecodingError DVar2;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *unaff_x20;
  long lVar7;
  long unaff_x21;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long lVar3;
  
  lVar3 = param_2;
  _swift_conformsToProtocol(param_2,&TargetProtocolDescriptor_100cb0730);
  if (lVar3 == 0 || param_2 == 0) {
    DVar2 = Swift::DecodingError::typeMetadataAccessor();
    lVar3 = CONCAT71((int7)((ulong)lVar3 >> 8),DVar2.value);
    plVar6 = (long *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar3,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar4 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar1 = *(int *)(puVar4 + 0x30);
    *plVar6 = param_2;
    lVar7 = *unaff_x20;
    _swift_beginAccess(lVar7 + 0x10,auStack_80,0,0);
    uVar5 = *(undefined8 *)(lVar7 + 0x10);
    _swift_bridgeObjectRetain(uVar5);
    Swift::DecodingError::Context::_init
              ((undefined *)((long)plVar6 + (long)iVar1),uVar5,0,0xe000000000000000,0);
    (**(code **)(*(long *)(lVar3 + -8) + 0x68))
              (plVar6,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar3);
    _swift_willThrow();
  }
  else {
    (**(code **)(lVar3 + 0x10))(param_2,lVar3);
    FUN_1004471e4(&local_68);
    if (unaff_x21 == 0) {
      _swift_retain(local_68);
      _swift_release(param_2);
      param_1[1] = uStack_60;
      *param_1 = local_68;
      param_1[3] = uStack_50;
      param_1[2] = local_58;
      param_1[4] = local_48;
    }
    else {
      _swift_release(param_2);
    }
  }
  return;
}



/* Address: 0x100447144 | FUN_100447144 */

void FUN_100447144(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  uVar4 = *unaff_x20;
  if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004471a8);
    (*pcVar1)();
  }
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_100445280();
    lVar3 = *(long *)(uVar4 + 0x10);
  }
  else {
    lVar3 = *(long *)(uVar4 + 0x10);
  }
  if (lVar3 != 0) {
    *(long *)(uVar4 + 0x10) = lVar3 + -1;
    *unaff_x20 = uVar4;
    FUN_100076508(uVar4 + lVar3 * 0x28 + -8,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004471c0);
  (*pcVar1)();
}



/* Address: 0x1004471c0 | FUN_1004471c0 */

void FUN_1004471c0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004471e4 | FUN_1004471e4 */

void FUN_1004471e4(long *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  long local_48;
  
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(lVar7 + 0x10);
  uVar5 = *(undefined8 *)(lVar7 + 0x20);
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  local_48 = 0;
  _swift_bridgeObjectRetain(uVar6);
  lVar3 = lVar4;
  FUN_1004486a0(lVar4,uVar5,uVar6,&local_48);
  _swift_bridgeObjectRelease(uVar6);
  if (unaff_x21 == 0) {
    lVar1 = lVar3 + local_48;
    if (SCARRY8(lVar3,local_48)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004472dc);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar1;
    if (SCARRY8(*(long *)(lVar7 + 0x18),lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004472e0);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + lVar1;
    if (SBORROW8(*(long *)(lVar7 + 0x20),lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004472e4);
      (*pcVar2)();
    }
    *(long *)(lVar7 + 0x20) = *(long *)(lVar7 + 0x20) - lVar1;
    if (SCARRY8(*(long *)(unaff_x20 + 0x40),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004472e8);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x40) = *(long *)(unaff_x20 + 0x40) + 1;
    *param_1 = param_2;
    param_1[1] = lVar4;
    param_1[2] = lVar1;
    param_1[3] = local_48;
    param_1[4] = lVar3;
  }
  return;
}



/* Address: 0x1004472e8 | FUN_1004472e8 */

void FUN_1004472e8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100447324 | FUN_100447324 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100447568 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100447324(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  DecodingError DVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  byte *pbVar11;
  long *unaff_x20;
  long unaff_x21;
  undefined1 *puVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong unaff_x25;
  long lVar15;
  String SVar16;
  undefined1 auVar17 [16];
  String SVar18;
  undefined1 auStack_110 [8];
  long local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  long alStack_e8 [3];
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined *local_b8;
  ulong local_b0;
  long local_a8 [3];
  undefined *local_90;
  undefined1 *local_88;
  ulong local_78;
  undefined8 uStack_70;
  
  puStack_100 = (undefined *)Encoding::_typeMetadataAccessor();
  local_108 = *(long *)(puStack_100 + -8);
  puVar12 = auStack_110 + -(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20[6] + 0x20) == 0) {
LAB_1004474dc:
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    lVar13 = CONCAT71((int7)((ulong)puStack_100 >> 8),DVar4.value);
    puVar9 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar13,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    puVar14 = (undefined1 *)(long)*(int *)(puVar6 + 0x30);
    *puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
    lVar15 = *unaff_x20;
    _swift_beginAccess(lVar15 + 0x10,&local_d0,0,0);
    uVar7 = *(undefined8 *)(lVar15 + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    Swift::DecodingError::Context::_init
              ((undefined1 *)((long)puVar9 + (long)puVar14),uVar7,0xd00000000000001c,
               0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar13);
    _swift_willThrow();
  }
  else {
    pcVar10 = *(char **)(unaff_x20[6] + 0x10);
    if (*pcVar10 == '\0') {
      if (pcVar10[1] == '\0') goto LAB_1004474dc;
    }
    lVar15 = *unaff_x20;
    lVar13 = unaff_x20[8];
    local_d0 = (undefined *)0x207865646e49;
    puStack_c8 = &DAT_e600000000000000;
    local_f0 = param_1;
    local_a8[0] = lVar13;
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar16,SVar18);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    puVar14 = puStack_c8;
    local_f8 = local_d0;
    _swift_beginAccess(lVar15 + 0x10,local_a8,0x21,0);
    unaff_x25 = *(ulong *)(lVar15 + 0x10);
    uVar8 = unaff_x25;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar15 + 0x10) = unaff_x25;
    if ((uVar8 & 1) == 0) {
      uVar8 = 0;
      FUN_10044c5f4(0,*(long *)(unaff_x25 + 0x10) + 1,1,unaff_x25);
      *(ulong *)(lVar15 + 0x10) = uVar8;
      unaff_x25 = uVar8;
    }
    uVar1 = *(ulong *)(unaff_x25 + 0x10);
    if (*(ulong *)(unaff_x25 + 0x18) >> 1 <= uVar1) {
      uVar8 = (ulong)(1 < *(ulong *)(unaff_x25 + 0x18));
      FUN_10044c5f4(uVar8,uVar1 + 1,1,unaff_x25);
      unaff_x25 = uVar8;
    }
    local_b8 = &DAT_100ed5530;
    FUN_100444850();
    puVar6 = &DAT_100ed5208;
    local_b0 = uVar8;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar6 + 0x10) = local_f8;
    *(undefined1 **)(puVar6 + 0x18) = puVar14;
    *(long *)(puVar6 + 0x20) = lVar13;
    puVar6[0x28] = 0;
    *(ulong *)(unaff_x25 + 0x10) = uVar1 + 1;
    local_d0 = puVar6;
    FUN_100076508(&local_d0,unaff_x25 + uVar1 * 0x28 + 0x20);
    *(ulong *)(lVar15 + 0x10) = unaff_x25;
    _swift_endAccess(local_a8);
    FUN_1004471e4(&local_90,local_f0);
    if (unaff_x21 == 0) {
      _swift_beginAccess(local_90 + 0x10,local_a8,0,0);
      lVar13 = *(long *)(*(long *)(local_90 + 0x10) + 0x10);
      pbVar11 = (byte *)(*(long *)(local_90 + 0x10) + 0x20);
      do {
        if (lVar13 == 0) {
          _swift_retain();
          Encoding::_get_utf8((Encoding)local_90);
          goto LAB_100447620;
        }
        bVar2 = *pbVar11;
        lVar13 = lVar13 + -1;
        pbVar11 = pbVar11 + 1;
      } while (0x3f < bVar2);
      _swift_retain(local_90);
      FUN_10044ae34(puVar12,bVar2);
LAB_100447620:
      puVar14 = local_88;
      unaff_x25 = local_78;
      FUN_10044a6f8(local_88,local_78,uStack_70,puVar12);
      (**(code **)(local_108 + 8))(puVar12,puStack_100);
      if (unaff_x25 != 0) {
        FUN_100444974(&local_90);
        _swift_beginAccess(lVar15 + 0x10,alStack_e8,0x21,0);
        FUN_100447144(&local_d0);
        _swift_endAccess(alStack_e8);
        FUN_100004594(&local_d0);
        goto LAB_100447594;
      }
      DVar4 = Swift::DecodingError::typeMetadataAccessor();
      lVar13 = CONCAT71((int7)((ulong)puVar14 >> 8),DVar4.value);
      puVar9 = (undefined8 *)
               PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar13,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar6 = &DAT_100fc70b8;
      FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
      iVar3 = *(int *)(puVar6 + 0x30);
      *puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
      uVar7 = *(undefined8 *)(lVar15 + 0x10);
      _swift_bridgeObjectRetain(uVar7);
      Swift::DecodingError::Context::_init
                ((long)puVar9 + (long)iVar3,uVar7,0xd00000000000002d,0x8000000100da68e0,0);
      (**(code **)(*(long *)(lVar13 + -8) + 0x68))
                (puVar9,*(undefined4 *)
                         PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
                 ,lVar13);
      _swift_willThrow();
      FUN_100444974(&local_90);
      _swift_beginAccess(lVar15 + 0x10,alStack_e8,0x21,0);
      FUN_100447144(&local_d0);
      plVar5 = alStack_e8;
    }
    else {
      _swift_beginAccess(lVar15 + 0x10,local_a8,0x21,0);
      FUN_100447144(&local_d0);
      plVar5 = local_a8;
    }
    _swift_endAccess(plVar5);
    FUN_100004594(&local_d0);
  }
LAB_100447594:
  auVar17._8_8_ = unaff_x25;
  auVar17._0_8_ = puVar14;
  return auVar17;
}



/* Address: 0x1004477a0 | FUN_1004477a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100447a2c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1004477a0(char *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  int iVar4;
  undefined1 *puVar5;
  code *pcVar6;
  DecodingError DVar7;
  char *pcVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long lVar14;
  long *unaff_x20;
  ulong uVar15;
  long unaff_x21;
  undefined1 *puVar16;
  long lVar17;
  char *unaff_x25;
  char *pcVar18;
  Encoding EVar19;
  undefined8 uVar20;
  long lVar21;
  String SVar22;
  undefined1 auVar23 [16];
  String SVar24;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined *puStack_d0;
  undefined1 auStack_b8 [24];
  char *local_a0;
  undefined1 *puStack_98;
  undefined *local_88;
  ulong local_80;
  long local_78 [3];
  
  puStack_d0 = (undefined *)Encoding::_typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  puVar16 = auStack_e0 + -(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = unaff_x20[6];
  if (*(long *)(lVar17 + 0x20) == 0) {
LAB_1004479a0:
    DVar7 = Swift::DecodingError::typeMetadataAccessor();
    lVar17 = CONCAT71((int7)((ulong)puStack_d0 >> 8),DVar7.value);
    puVar12 = (undefined8 *)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar17,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar10 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    pcVar18 = (char *)(long)*(int *)(puVar10 + 0x30);
    *puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    lVar14 = *unaff_x20;
    _swift_beginAccess(lVar14 + 0x10,&local_a0,0,0);
    uVar20 = *(undefined8 *)(lVar14 + 0x10);
    _swift_bridgeObjectRetain(uVar20);
    Swift::DecodingError::Context::_init
              ((char *)((long)puVar12 + (long)pcVar18),uVar20,0xd00000000000001c,0x8000000100da68c0,
               0);
    (**(code **)(*(long *)(lVar17 + -8) + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar17);
    _swift_willThrow();
  }
  else {
    if (**(char **)(lVar17 + 0x10) == '\0') {
      if ((*(char **)(lVar17 + 0x10))[1] == '\0') goto LAB_1004479a0;
    }
    lVar21 = *unaff_x20;
    lVar14 = unaff_x20[8];
    local_a0 = (char *)0x207865646e49;
    puStack_98 = &DAT_e600000000000000;
    local_78[0] = lVar14;
    SVar22 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = param_4;
    SVar24.str = param_3;
    Swift::String::append(SVar22,SVar24);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    puVar5 = puStack_98;
    pcVar18 = local_a0;
    _swift_beginAccess(lVar21 + 0x10,local_78,0x21,0);
    uVar15 = *(ulong *)(lVar21 + 0x10);
    uVar11 = uVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar21 + 0x10) = uVar15;
    if ((uVar11 & 1) == 0) {
      uVar11 = 0;
      FUN_10044c5f4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
      *(ulong *)(lVar21 + 0x10) = uVar11;
      uVar15 = uVar11;
    }
    uVar2 = *(ulong *)(uVar15 + 0x10);
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar2) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      FUN_10044c5f4(uVar11,uVar2 + 1,1,uVar15);
      uVar15 = uVar11;
    }
    local_88 = &DAT_100ed5530;
    FUN_100444850();
    pcVar8 = "";
    local_80 = uVar11;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(char **)(pcVar8 + 0x10) = pcVar18;
    *(undefined1 **)(pcVar8 + 0x18) = puVar5;
    *(long *)(pcVar8 + 0x20) = lVar14;
    pcVar8[0x28] = '\0';
    *(ulong *)(uVar15 + 0x10) = uVar2 + 1;
    local_a0 = pcVar8;
    FUN_100076508(&local_a0,uVar15 + uVar2 * 0x28 + 0x20);
    *(ulong *)(lVar21 + 0x10) = uVar15;
    plVar9 = local_78;
    _swift_endAccess();
    pcVar18 = *(char **)(lVar17 + 0x10);
    uVar20 = *(undefined8 *)(lVar17 + 0x20);
    FUN_10044bff0();
    _swift_beginAccess(plVar9 + 2,local_78,0,0);
    EVar19.unknown = (undefined *)plVar9[2];
    local_a0 = (char *)0x0;
    _swift_bridgeObjectRetain(EVar19.unknown);
    pcVar8 = pcVar18;
    FUN_1004486a0(pcVar18,uVar20,EVar19.unknown,&local_a0);
    if (unaff_x21 == 0) {
      _swift_bridgeObjectRelease();
      unaff_x25 = local_a0;
      pcVar1 = pcVar8 + (long)local_a0;
      if (SCARRY8((long)pcVar8,(long)local_a0)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100447c70);
        (*pcVar6)();
      }
      *(char **)(lVar17 + 0x10) = pcVar1 + *(long *)(lVar17 + 0x10);
      if (SCARRY8(*(long *)(lVar17 + 0x18),(long)pcVar1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100447c74);
        (*pcVar6)();
      }
      *(char **)(lVar17 + 0x18) = pcVar1 + *(long *)(lVar17 + 0x18);
      if (SBORROW8(*(long *)(lVar17 + 0x20),(long)pcVar1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100447c78);
        (*pcVar6)();
      }
      *(long *)(lVar17 + 0x20) = *(long *)(lVar17 + 0x20) - (long)pcVar1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100447c7c);
        (*pcVar6)();
      }
      unaff_x20[8] = lVar14 + 1;
      lVar17 = *(long *)(plVar9[2] + 0x10);
      pbVar13 = (byte *)(plVar9[2] + 0x20);
      do {
        if (lVar17 == 0) {
          Encoding::_get_utf8(EVar19);
          goto LAB_100447b0c;
        }
        bVar3 = *pbVar13;
        EVar19.unknown = (undefined *)(ulong)bVar3;
        lVar17 = lVar17 + -1;
        pbVar13 = pbVar13 + 1;
      } while (0x3f < bVar3);
      FUN_10044ae34(puVar16);
LAB_100447b0c:
      FUN_10044a6f8(pcVar18,unaff_x25,pcVar8,puVar16);
      (**(code **)(local_d8 + 8))(puVar16,puStack_d0);
      if (unaff_x25 != (char *)0x0) {
        _swift_release(plVar9);
        _swift_beginAccess(lVar21 + 0x10,auStack_b8,0x21,0);
        FUN_100447144(&local_a0);
        _swift_endAccess(auStack_b8);
        FUN_100004594(&local_a0);
        goto LAB_100447a58;
      }
      DVar7 = Swift::DecodingError::typeMetadataAccessor();
      lVar17 = CONCAT71((int7)((ulong)pcVar18 >> 8),DVar7.value);
      puVar12 = (undefined8 *)
                PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar17,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar10 = &DAT_100fc70b8;
      FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
      iVar4 = *(int *)(puVar10 + 0x30);
      *puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
      uVar20 = *(undefined8 *)(lVar21 + 0x10);
      param_1 = "Unkeyed container is at end.";
      _swift_bridgeObjectRetain(uVar20);
      Swift::DecodingError::Context::_init
                ((long)puVar12 + (long)iVar4,uVar20,0xd00000000000002d,0x8000000100da68e0,0);
      (**(code **)(*(long *)(lVar17 + -8) + 0x68))
                (puVar12,*(undefined4 *)
                          PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
                 ,lVar17);
      _swift_willThrow();
      _swift_release(plVar9);
    }
    else {
      _swift_release(plVar9);
      _swift_bridgeObjectRelease(EVar19.unknown);
      unaff_x25 = pcVar18;
    }
    _swift_beginAccess(lVar21 + 0x10,auStack_b8,0x21,0);
    FUN_100447144(&local_a0);
    _swift_endAccess(auStack_b8);
    FUN_100004594(&local_a0);
    pcVar18 = param_1;
  }
LAB_100447a58:
  auVar23._8_8_ = unaff_x25;
  auVar23._0_8_ = pcVar18;
  return auVar23;
}



/* Address: 0x100447c7c | FUN_100447c7c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100447f00 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_100447c7c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  DecodingError DVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined *local_b0;
  ulong local_a8;
  long local_a0 [3];
  undefined8 local_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(unaff_x20[6] + 0x20) == 0) {
LAB_100447e74:
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar12 = CONCAT71((int7)((ulong)param_1 >> 8),DVar3.value);
    puVar9 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar12,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar1 = *(int *)(puVar6 + 0x30);
    *puVar9 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    lVar13 = *unaff_x20;
    _swift_beginAccess(lVar13 + 0x10,&local_c8,0,0);
    uVar7 = *(undefined8 *)(lVar13 + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    Swift::DecodingError::Context::_init
              ((long)puVar9 + (long)iVar1,uVar7,0xd00000000000001c,0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar12 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar12);
    _swift_willThrow();
  }
  else {
    pcVar10 = *(char **)(unaff_x20[6] + 0x10);
    if (*pcVar10 == '\0') {
      if (pcVar10[1] == '\0') goto LAB_100447e74;
    }
    lVar13 = *unaff_x20;
    lVar12 = unaff_x20[8];
    local_c8 = (undefined *)0x207865646e49;
    puStack_c0 = &DAT_e600000000000000;
    local_a0[0] = lVar12;
    SVar14 = Swift::CustomStringConvertible::get_description();
    SVar15.bridgeObject = param_4;
    SVar15.str = param_3;
    Swift::String::append(SVar14,SVar15);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    puVar2 = puStack_c0;
    puVar6 = local_c8;
    _swift_beginAccess(lVar13 + 0x10,local_a0,0x21,0);
    uVar11 = *(ulong *)(lVar13 + 0x10);
    uVar8 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar13 + 0x10) = uVar11;
    if ((uVar8 & 1) == 0) {
      uVar8 = 0;
      FUN_10044c5f4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(lVar13 + 0x10) = uVar8;
      uVar11 = uVar8;
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_10044c5f4(uVar8,uVar5 + 1,1,uVar11);
      uVar11 = uVar8;
    }
    local_b0 = &DAT_100ed5530;
    FUN_100444850();
    puVar4 = &DAT_100ed5208;
    local_a8 = uVar8;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(undefined1 **)(puVar4 + 0x18) = puVar2;
    *(long *)(puVar4 + 0x20) = lVar12;
    puVar4[0x28] = 0;
    *(ulong *)(uVar11 + 0x10) = uVar5 + 1;
    local_c8 = puVar4;
    FUN_100076508(&local_c8,uVar11 + uVar5 * 0x28 + 0x20);
    *(ulong *)(lVar13 + 0x10) = uVar11;
    _swift_endAccess(local_a0);
    lVar12 = 0;
    FUN_10044add8();
    _swift_initStackObject();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined8 *)(lVar12 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess((undefined8 *)(lVar12 + 0x10),&local_c8,0x21,0);
    uVar5 = 0;
    FUN_10044c504(0,1,1,puVar6);
    uVar8 = *(ulong *)(uVar5 + 0x10);
    uVar11 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_10044c504(uVar11,uVar8 + 1,1,uVar5);
    }
    *(ulong *)(uVar11 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar11 + uVar8 + 0x20) = 2;
    *(ulong *)(lVar12 + 0x10) = uVar11;
    _swift_endAccess(&local_c8);
    FUN_1004471e4(&local_88,lVar12);
    if (unaff_x21 == 0) {
      _swift_retain(local_88);
      _swift_release(lVar12);
      lVar12 = local_80;
      FUN_100449c84(local_80,local_70,uStack_68);
      FUN_100444974(&local_88);
      _swift_beginAccess(lVar13 + 0x10,local_a0,0x21,0);
      FUN_100447144(&local_c8);
      _swift_endAccess(local_a0);
      FUN_100004594(&local_c8);
    }
    else {
      _swift_bridgeObjectRelease(uVar11);
      _swift_beginAccess(lVar13 + 0x10,local_a0,0x21,0);
      FUN_100447144(&local_c8);
      _swift_endAccess(local_a0);
      FUN_100004594(&local_c8);
    }
  }
  return lVar12;
}



/* Address: 0x100448014 | FUN_100448014 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100448298 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_100448014(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  DecodingError DVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined *local_b0;
  ulong local_a8;
  long local_a0 [3];
  undefined8 local_88;
  long local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*(long *)(unaff_x20[6] + 0x20) == 0) {
LAB_10044820c:
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar12 = CONCAT71((int7)((ulong)param_1 >> 8),DVar3.value);
    puVar9 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar12,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar1 = *(int *)(puVar6 + 0x30);
    *puVar9 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
    lVar13 = *unaff_x20;
    _swift_beginAccess(lVar13 + 0x10,&local_c8,0,0);
    uVar7 = *(undefined8 *)(lVar13 + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    Swift::DecodingError::Context::_init
              ((undefined *)((long)puVar9 + (long)iVar1),uVar7,0xd00000000000001c,0x8000000100da68c0
               ,0);
    (**(code **)(*(long *)(lVar12 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar12);
    _swift_willThrow();
  }
  else {
    pcVar10 = *(char **)(unaff_x20[6] + 0x10);
    if (*pcVar10 == '\0') {
      if (pcVar10[1] == '\0') goto LAB_10044820c;
    }
    lVar13 = *unaff_x20;
    lVar12 = unaff_x20[8];
    local_c8 = (undefined *)0x207865646e49;
    puStack_c0 = &DAT_e600000000000000;
    local_a0[0] = lVar12;
    SVar14 = Swift::CustomStringConvertible::get_description();
    SVar15.bridgeObject = param_4;
    SVar15.str = param_3;
    Swift::String::append(SVar14,SVar15);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    puVar2 = puStack_c0;
    puVar6 = local_c8;
    _swift_beginAccess(lVar13 + 0x10,local_a0,0x21,0);
    uVar11 = *(ulong *)(lVar13 + 0x10);
    uVar8 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar13 + 0x10) = uVar11;
    if ((uVar8 & 1) == 0) {
      uVar8 = 0;
      FUN_10044c5f4(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(lVar13 + 0x10) = uVar8;
      uVar11 = uVar8;
    }
    uVar5 = *(ulong *)(uVar11 + 0x10);
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_10044c5f4(uVar8,uVar5 + 1,1,uVar11);
      uVar11 = uVar8;
    }
    local_b0 = &DAT_100ed5530;
    FUN_100444850();
    puVar4 = &DAT_100ed5208;
    local_a8 = uVar8;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar4 + 0x10) = puVar6;
    *(undefined1 **)(puVar4 + 0x18) = puVar2;
    *(long *)(puVar4 + 0x20) = lVar12;
    puVar4[0x28] = 0;
    *(ulong *)(uVar11 + 0x10) = uVar5 + 1;
    local_c8 = puVar4;
    FUN_100076508(&local_c8,uVar11 + uVar5 * 0x28 + 0x20);
    *(ulong *)(lVar13 + 0x10) = uVar11;
    _swift_endAccess(local_a0);
    lVar12 = 0;
    FUN_10044add8();
    _swift_initStackObject();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined8 *)(lVar12 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess((undefined8 *)(lVar12 + 0x10),&local_c8,0x21,0);
    uVar5 = 0;
    FUN_10044c504(0,1,1,puVar6);
    uVar8 = *(ulong *)(uVar5 + 0x10);
    uVar11 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_10044c504(uVar11,uVar8 + 1,1,uVar5);
    }
    *(ulong *)(uVar11 + 0x10) = uVar8 + 1;
    *(undefined1 *)(uVar11 + uVar8 + 0x20) = 2;
    *(ulong *)(lVar12 + 0x10) = uVar11;
    _swift_endAccess(&local_c8);
    FUN_1004471e4(&local_88,lVar12);
    if (unaff_x21 == 0) {
      _swift_retain(local_88);
      _swift_release(lVar12);
      lVar12 = local_80;
      FUN_100449f9c(local_80,local_70,uStack_68);
      FUN_100444974(&local_88);
      _swift_beginAccess(lVar13 + 0x10,local_a0,0x21,0);
      FUN_100447144(&local_c8);
      _swift_endAccess(local_a0);
      FUN_100004594(&local_c8);
    }
    else {
      _swift_bridgeObjectRelease(uVar11);
      _swift_beginAccess(lVar13 + 0x10,local_a0,0x21,0);
      FUN_100447144(&local_c8);
      _swift_endAccess(local_a0);
      FUN_100004594(&local_c8);
    }
  }
  return lVar12;
}



/* Address: 0x1004483ac | FUN_1004483ac */

void FUN_1004483ac(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_release(param_1[6]);
  _swift_bridgeObjectRelease(param_1[7]);
  return;
}



/* Address: 0x1004483e4 | FUN_1004483e4 */

undefined8 * FUN_1004483e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar3 = *param_2;
  uVar1 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar1;
  param_1[2] = uVar4;
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar5;
  uVar4 = param_2[7];
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  _swift_retain(uVar3);
  _swift_retain(uVar2);
  _swift_retain(uVar5);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x100448464 | FUN_100448464 */

undefined8 * FUN_100448464(undefined8 *param_1,undefined8 *param_2)

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
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar1;
  return param_1;
}



/* Address: 0x100448528 | FUN_100448528 */

void FUN_100448528(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x10044854c | FUN_10044854c */

undefined8 * FUN_10044854c(undefined8 *param_1,undefined8 *param_2)

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
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Address: 0x1004485c8 | FUN_1004485c8 */

int FUN_1004485c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100448610 | FUN_100448610 */

void FUN_100448610(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x51) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x51) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100448668 | FUN_100448668 */

undefined1  [16] FUN_100448668(void)

{
  return ZEXT816(0x100ed52b0);
}



/* Address: 0x100448678 | FUN_100448678 */

void FUN_100448678(void)

{
  FUN_10044653c();
  return;
}



/* Address: 0x10044868c | FUN_10044868c */

void FUN_10044868c(void)

{
  FUN_1004465d8();
  return;
}



/* Address: 0x1004486a0 | FUN_1004486a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004489c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1004486a0(byte *param_1,long param_2,long param_3,ulong *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  DecodingError DVar6;
  undefined7 uVar8;
  byte *pbVar7;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  
  lVar20 = *(long *)(param_3 + 0x10);
  if (lVar20 == 0) {
    lVar22 = 0;
    uVar13 = 0;
  }
  else {
    lVar21 = 0;
    lVar22 = 0;
    lVar23 = 0;
    uVar13 = 0;
    uVar14 = 0;
    lVar24 = -1;
    do {
      bVar2 = *(byte *)(param_3 + 0x20 + lVar23);
      bVar1 = *param_1;
      uVar8 = (undefined7)((ulong)param_1 >> 8);
      if (((bVar1 ^ 0xff) & 0x1f) == 0) {
        if (param_2 < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100448aa0);
          (*pcVar4)();
        }
        lVar15 = 0;
        uVar16 = 0;
        lVar12 = param_2 + 1;
        while (param_2 + -1 != lVar15) {
          uVar19 = (ulong)(char)param_1[lVar15 + 1];
          if (-1 < (long)uVar19) {
            if (0xff < (uVar19 << 2 | uVar16 << 9)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100448ab0);
              (*pcVar4)();
            }
            lVar12 = lVar15 + 2;
            uVar14 = (uint)(uVar19 << 2) | (uint)(bVar1 >> 6);
            break;
          }
          if ((uVar16 >> 0x30 & 0x1ff) != 0) goto LAB_100448970;
          uVar16 = uVar16 << 7 | uVar19 & 0x1f;
          lVar15 = lVar15 + 1;
          if (lVar15 == 0x7ffffffffffffffe) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100448a88);
            (*pcVar4)();
          }
        }
        if (lVar12 == -1) {
LAB_100448970:
          DVar6 = Swift::DecodingError::typeMetadataAccessor();
          lVar20 = CONCAT71(uVar8,DVar6.value);
          puVar10 = 
          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
          _swift_allocError(lVar20,
                            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                            ,0,0);
          uVar9 = 0x726f632061746144;
          uVar11 = 0xee00646574707572;
          goto LAB_1004489c4;
        }
        if (uVar14 != bVar2) goto LAB_100448a2c;
      }
      else {
        if ((uint)bVar1 != (uint)bVar2) {
LAB_100448a2c:
          DVar6 = Swift::DecodingError::typeMetadataAccessor();
          lVar20 = CONCAT71(uVar8,DVar6.value);
          puVar10 = 
          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
          _swift_allocError(lVar20,
                            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                            ,0,0);
          uVar11 = 0x8000000100da6910;
          uVar9 = 0xd00000000000001e;
LAB_1004489c4:
          Swift::DecodingError::Context::_init(puVar10,lVar20,uVar9,uVar11,0);
          (**(code **)(*(long *)(lVar20 + -8) + 0x68))
                    (puVar10,*(undefined4 *)
                              PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
                     ,lVar20);
          _swift_willThrow();
          return lVar20;
        }
        lVar12 = 1;
      }
      lVar15 = param_2 + -1;
      if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100448a8c);
        (*pcVar4)();
      }
      bVar3 = param_1[1];
      if ((long)(char)bVar3 < 0) {
        uVar14 = (uint)(char)bVar3;
        if ((bVar1 >> 5 & 1) == 0) {
          if (uVar14 != 0xffffffff) {
LAB_1004487cc:
            if (lVar15 < 1) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100448ab4);
              (*pcVar4)();
            }
            uVar14 = uVar14 & 0x7f;
            if (lVar15 == 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              lVar17 = param_2 + -2;
              lVar18 = -1;
              pbVar7 = param_1 + 2;
              do {
                if ((uVar14 & 0xff) == 0) {
                  lVar15 = -lVar18;
                  goto joined_r0x00010044883c;
                }
                uVar16 = (ulong)*pbVar7 | uVar16 << 8;
                uVar14 = uVar14 - 1;
                lVar18 = lVar18 + -1;
                lVar17 = lVar17 + -1;
                pbVar7 = pbVar7 + 1;
              } while (lVar17 != 0);
            }
            if ((uVar14 & 0xff) == 0) {
joined_r0x00010044883c:
              if (-1 < (long)uVar16) goto joined_r0x000100448850;
            }
          }
LAB_100448840:
          if (uVar13 != 0xffffffffffffffff) {
            lVar15 = -1;
            uVar16 = uVar13;
            goto joined_r0x000100448850;
          }
          lVar15 = -1;
        }
        else {
          if (uVar14 != 0xffffff80) {
            if (bVar3 != 0xff) goto LAB_1004487cc;
            goto LAB_100448840;
          }
          lVar15 = 1;
        }
        if (SBORROW8(param_2,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100448ab8);
          (*pcVar4)();
        }
        pbVar7 = param_1 + lVar12;
        FUN_100448abc(pbVar7,param_2 - lVar12,bVar1 >> 5 & 1);
        if (SBORROW8((long)pbVar7,lVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100448abc);
          (*pcVar4)();
        }
        if ((long)pbVar7 - lVar15 < 1) {
          uVar16 = 0xffffffffffffffff;
        }
        else {
          lVar21 = 1;
          uVar16 = (long)pbVar7 - lVar15;
        }
      }
      else {
        lVar15 = 1;
        uVar16 = (long)(char)bVar3;
      }
joined_r0x000100448850:
      uVar13 = uVar16;
      if (lVar24 == -1) {
        if (SCARRY8(uVar13,lVar12)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100448aa4);
          (*pcVar4)();
        }
        lVar17 = uVar13 + lVar12 + lVar15;
        if (SCARRY8(uVar13 + lVar12,lVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100448aa8);
          (*pcVar4)();
        }
        lVar24 = lVar17 + lVar21;
        if (SCARRY8(lVar17,lVar21)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100448aac);
          (*pcVar4)();
        }
        if (lVar24 < 0) {
          return -1;
        }
      }
      uVar14 = (uint)bVar2;
      lVar17 = lVar12 + lVar15;
      if (SCARRY8(lVar12,lVar15)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100448a90);
        (*pcVar4)();
      }
      bVar5 = SCARRY8(lVar22,lVar17);
      lVar22 = lVar22 + lVar17;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100448a94);
        (*pcVar4)();
      }
      if (SCARRY8(lVar17,lVar21)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100448a98);
        (*pcVar4)();
      }
      bVar5 = SBORROW8(lVar24,lVar17 + lVar21);
      lVar24 = lVar24 - (lVar17 + lVar21);
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100448a9c);
        (*pcVar4)();
      }
      lVar23 = lVar23 + 1;
      param_1 = param_1 + lVar17;
      lVar12 = lVar24;
      if (param_2 <= lVar24) {
        lVar12 = param_2;
      }
      param_2 = lVar12;
    } while (lVar23 != lVar20);
  }
  *param_4 = uVar13;
  return lVar22;
}



/* Address: 0x100448abc | FUN_100448abc */

void FUN_100448abc(char *param_1,undefined1 *param_2,ulong param_3)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  
  cVar1 = *param_1;
  uVar7 = (ulong)cVar1;
  if ((long)uVar7 < 0) {
    uVar6 = (uint)cVar1;
    if ((param_3 & 1) == 0) {
      if (uVar6 == 0xffffffff) {
        return;
      }
    }
    else {
      if (uVar6 == 0xffffff80) {
        puVar9 = param_2 + -1;
        if (SBORROW8((long)param_2,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100448cec);
          (*pcVar2)();
        }
        pbVar11 = (byte *)(param_1 + 1);
        puVar4 = &DAT_00000001;
        do {
          uVar7 = (ulong)*pbVar11;
          if (((*pbVar11 ^ 0xff) & 0x1f) == 0) {
            if ((long)puVar9 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100448ce8);
              (*pcVar2)();
            }
            puVar8 = (undefined1 *)0x0;
            uVar10 = 0;
            puVar12 = puVar9 + 1;
            while (puVar9 + -1 != puVar8) {
              uVar7 = (ulong)(char)(pbVar11 + 1)[(long)puVar8];
              if (-1 < (long)uVar7) {
                uVar7 = uVar7 << 2;
                if (0xff < (uVar7 | uVar10 << 9)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100448cf0);
                  (*pcVar2)();
                }
                puVar12 = puVar8 + 2;
                if ((long)puVar12 < 1) {
                  return;
                }
                goto LAB_100448c3c;
              }
              if ((uVar10 >> 0x30 & 0x1ff) != 0) {
                return;
              }
              uVar10 = uVar10 << 7 | uVar7 & 0x1f;
              puVar8 = puVar8 + 1;
              if (puVar8 == (undefined1 *)0x7ffffffffffffffe) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100448ccc);
                (*pcVar2)();
              }
            }
            if (puVar9 == (undefined1 *)0x7fffffffffffffff) {
              return;
            }
            uVar7 = 0;
          }
          else {
            puVar12 = &DAT_00000001;
          }
LAB_100448c3c:
          if (SBORROW8((long)puVar9,(long)puVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100448cd4);
            (*pcVar2)();
          }
          pbVar5 = pbVar11 + (long)puVar12;
          FUN_100448abc(pbVar5,(long)puVar9 - (long)puVar12,(uint)uVar7 >> 5 & 1);
          if ((long)pbVar5 < 1) {
            return;
          }
          puVar8 = puVar12 + (long)pbVar5;
          if (SCARRY8((long)puVar12,(long)pbVar5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100448cd8);
            (*pcVar2)();
          }
          bVar3 = SCARRY8((long)puVar4,(long)puVar8);
          puVar4 = puVar4 + (long)puVar8;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100448cdc);
            (*pcVar2)();
          }
          if ((*pbVar11 == 0) && (pbVar11[1] == 0)) {
            return;
          }
          if (puVar4 == param_2) {
            return;
          }
          pbVar11 = pbVar11 + (long)puVar8;
          bVar3 = SBORROW8((long)puVar9,(long)puVar8);
          puVar9 = puVar9 + -(long)puVar8;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100448ce0);
            (*pcVar2)();
          }
        } while( true );
      }
      if (cVar1 == -1) {
        return;
      }
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100448ce4);
      (*pcVar2)();
    }
    uVar6 = uVar6 & 0x7f;
    if (param_2 == &DAT_00000001) {
      uVar7 = 0;
      param_2 = &DAT_00000001;
    }
    else {
      uVar7 = 0;
      puVar9 = &DAT_00000001;
      do {
        if ((uVar6 & 0xff) == 0) {
          uVar6 = 0;
          param_2 = puVar9;
          break;
        }
        pbVar11 = (byte *)(param_1 + (long)puVar9);
        puVar9 = puVar9 + 1;
        uVar7 = (ulong)*pbVar11 | uVar7 << 8;
        uVar6 = uVar6 - 1;
      } while (param_2 != puVar9);
    }
    if ((uVar6 & 0xff) != 0) {
      return;
    }
    if ((long)uVar7 < 0) {
      return;
    }
  }
  else {
    param_2 = &DAT_00000001;
  }
  if (!SCARRY8((long)param_2,uVar7)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100448cd0);
  (*pcVar2)();
}



/* Address: 0x100448cf0 | FUN_100448cf0 */

void FUN_100448cf0(void)

{
  long lVar1;
  long in_x3;
  long in_x4;
  long in_x5;
  
  lVar1 = in_x3;
  if (in_x3 == 0) {
    (**(code **)(in_x5 + 0x10))(in_x4,in_x5);
    lVar1 = in_x4;
  }
  _swift_retain(in_x3);
  Foundation::Data::_withUnsafeBytes((Data)0x100449088);
  _swift_release(lVar1);
  return;
}



/* Address: 0x100448db0 | FUN_100448db0 */

/* WARNING: Removing unreachable block (ram,0x000100448f48) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100448ff4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100448db0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6,undefined8 param_7,long param_8,long param_9)

{
  uint uVar1;
  code *pcVar2;
  Optional OVar3;
  DecodingError DVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  long unaff_x21;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 auStack_a0 [24];
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long local_58;
  long lVar8;
  
  local_b8 = param_1;
  local_a8 = param_9;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_c0 = CONCAT71((int7)((ulong)param_2 >> 8),OVar3.value);
  lVar15 = *(long *)(local_c0 + -8);
  lVar8 = (long)&local_c0 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100449088);
    (*pcVar2)();
  }
  uVar1 = (uint)(param_5 >> 0x20);
  uVar11 = uVar1 >> 0x1e;
  local_b0 = param_7;
  if (uVar11 < 2) {
    if (uVar1 >> 0x1e == 0) {
      uVar14 = param_5 >> 0x30 & 0xff;
    }
    else {
      iVar12 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar12,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100449084);
        (*pcVar2)();
      }
      uVar14 = (ulong)(iVar12 - (int)param_4);
    }
  }
  else if (uVar11 == 2) {
    uVar14 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100448e58);
      (*pcVar2)();
    }
  }
  else {
    uVar14 = 0;
  }
  _swift_beginAccess(param_6 + 0x10,auStack_a0,0,0);
  uVar16 = *(undefined8 *)(param_6 + 0x10);
  local_58 = 0;
  _swift_bridgeObjectRetain(uVar16);
  lVar5 = param_2;
  FUN_1004486a0(param_2,uVar14,uVar16,&local_58);
  _swift_bridgeObjectRelease(uVar16);
  if (unaff_x21 == 0) {
    local_78 = lVar5 + local_58;
    if (SCARRY8(lVar5,local_58)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100449080);
      (*pcVar2)();
    }
    lStack_70 = local_58;
    local_88 = param_6;
    lStack_80 = param_2;
    local_68 = lVar5;
    _swift_retain(param_6);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004443dc(PTR___swiftEmptyArrayStorage_100eae0d8);
    puVar7 = puVar6;
    FUN_100449730();
    _swift_allocObject();
    _swift_retain(param_6);
    FUN_100449360(&local_88,puVar9,puVar6);
    uVar16 = local_b0;
    FUN_100444e74(lVar8,&local_88,local_b0,param_8,*(undefined8 *)(local_a8 + 8));
    lVar13 = *(long *)(param_8 + -8);
    lVar5 = lVar8;
    (**(code **)(lVar13 + 0x30))(lVar8,1,param_8);
    if ((int)lVar5 == 1) {
      (**(code **)(lVar15 + 8))(lVar8,local_c0);
      DVar4 = Swift::DecodingError::typeMetadataAccessor();
      lVar8 = CONCAT71((int7)((ulong)lVar5 >> 8),DVar4.value);
      puVar10 = (undefined8 *)
                PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(lVar8,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      puVar9 = &DAT_100fc70b8;
      FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
      iVar12 = *(int *)(puVar9 + 0x30);
      *puVar10 = uVar16;
      Swift::DecodingError::Context::_init
                ((undefined *)((long)puVar10 + (long)iVar12),puVar9,0xd000000000000031,
                 0x8000000100da6930,0);
      (**(code **)(*(long *)(lVar8 + -8) + 0x68))
                (puVar10,*(undefined4 *)
                          PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
                 ,lVar8);
      _swift_willThrow();
      _swift_release(param_6);
      _swift_release(puVar7);
    }
    else {
      _swift_release(puVar7);
      _swift_release(param_6);
      (**(code **)(lVar13 + 0x20))(local_b8,lVar8,param_8);
    }
  }
  return;
}



/* Address: 0x100449088 | FUN_100449088 */

void FUN_100449088(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100448db0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1004490a8 | FUN_1004490a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004490a8(void)

{
  return ZEXT816(0x100fc7110);
}



/* Address: 0x1004490c8 | FUN_1004490c8 */

void FUN_1004490c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Address: 0x1004490dc | FUN_1004490dc */

undefined1  [16] FUN_1004490dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x10);
  return auVar1;
}



/* Address: 0x1004490e8 | FUN_1004490e8 */

void FUN_1004490e8(String *param_1,char *param_2)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  *param_1 = SVar1;
  param_1[1].str = param_2;
  *(undefined1 *)&param_1[1].bridgeObject = 0;
  return;
}



/* Address: 0x100449140 | FUN_100449140 */

String FUN_100449140(void)

{
  String SVar1;
  
  FUN_100444850();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100449168 | FUN_100449168 */

String FUN_100449168(void)

{
  String SVar1;
  
  FUN_100444850();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100449190 | FUN_100449190 */

void FUN_100449190(void)

{
  code *pcVar1;
  Deallocator DVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  lVar3 = *(long *)(lVar7 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_58,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10044925c);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + lVar5 * 0x28);
  lVar5 = puVar4[1];
  if (lVar5 != 0) {
    uVar6 = *puVar4;
    (**(code **)(lVar7 + 0x68))
              (auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,CONCAT71(extraout_var,DVar2.value));
    FUN_100445398(uVar6,lVar5,auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  }
  return;
}



/* Address: 0x10044925c | FUN_10044925c */

void FUN_10044925c(void)

{
  code *pcVar1;
  Deallocator DVar2;
  undefined7 extraout_var;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  lVar3 = *(long *)(lVar7 + 0x40);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_68,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10044933c);
    (*pcVar1)();
  }
  plVar4 = (long *)(*(long *)(unaff_x20 + 0x20) + lVar5 * 0x28);
  lVar5 = plVar4[2];
  if (lVar5 != 0) {
    lVar6 = *plVar4;
    lVar8 = plVar4[3];
    (**(code **)(lVar7 + 0x68))
              (auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,CONCAT71(extraout_var,DVar2.value));
    FUN_100445398(lVar6 + lVar8,lVar5,auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  }
  return;
}



/* Address: 0x10044933c | FUN_10044933c */

void FUN_10044933c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100449360 | FUN_100449360 */

void FUN_100449360(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [24];
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar6 = (ulong *)(unaff_x20 + 0x20);
  *puVar6 = (ulong)puVar2;
  _swift_beginAccess(puVar6,auStack_68,0x21,0);
  uVar3 = *param_1;
  *puVar6 = (ulong)puVar2;
  _swift_retain(uVar3);
  uVar4 = 0;
  FUN_10044c838(0,1,1,puVar2);
  *puVar6 = uVar4;
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_10044c838(uVar4,uVar1 + 1,1);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar5 = uVar4 + uVar1 * 0x28;
  uVar7 = param_1[1];
  uVar3 = *param_1;
  uVar9 = param_1[3];
  uVar8 = param_1[2];
  *(undefined8 *)(lVar5 + 0x40) = param_1[4];
  *(undefined8 *)(lVar5 + 0x28) = uVar7;
  *(undefined8 *)(lVar5 + 0x20) = uVar3;
  *(undefined8 *)(lVar5 + 0x38) = uVar9;
  *(undefined8 *)(lVar5 + 0x30) = uVar8;
  *(ulong *)(unaff_x20 + 0x20) = uVar4;
  _swift_endAccess(auStack_68);
  FUN_100444974(param_1);
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x10),auStack_68,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x100449484 | FUN_100449484 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100449598 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100449484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_d0,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar5 != 0) {
    puVar4 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + lVar5 * 0x28);
    uStack_68 = *puVar4;
    local_70 = puVar4[-1];
    uStack_58 = puVar4[2];
    uStack_60 = puVar4[1];
    local_50 = puVar4[3];
    FUN_100441c04(&local_b8);
    if (unaff_x21 == 0) {
      uStack_f8 = uStack_90;
      local_100 = local_98;
      uStack_e8 = uStack_80;
      uStack_f0 = local_88;
      local_e0 = local_78;
      uStack_118 = uStack_b0;
      local_120 = local_b8;
      uStack_108 = uStack_a0;
      uStack_110 = local_a8;
      _swift_retain();
      FUN_100443b18(&local_70,auStack_148);
      uVar2 = 0;
      FUN_1004447b8(0,param_3,param_4);
      pTVar3 = &TargetProtocolConformanceDescriptor_100c4aaa8;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4aaa8,uVar2);
      Swift::KeyedDecodingContainer::_init(param_1,pTVar3,param_3,uVar2,pTVar3);
    }
    else {
      _swift_retain();
      FUN_100443b18(&local_70,&local_120);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004495bc);
  (*pcVar1)();
}



/* Address: 0x1004495bc | FUN_1004495bc */

void FUN_1004495bc(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = unaff_x20 + 0x20;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  lVar5 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar5 != 0) {
    plVar8 = (long *)(*(long *)(unaff_x20 + 0x20) + lVar5 * 0x28);
    lVar5 = plVar8[1];
    lVar1 = plVar8[2];
    lVar7 = plVar8[3];
    param_1[3] = &DAT_100ed52b0;
    FUN_1004448b4();
    param_1[4] = lVar3;
    puVar4 = &DAT_100ed54b0;
    _swift_allocObject(&DAT_100ed54b0,0x61,7);
    *param_1 = puVar4;
    lVar9 = *plVar8;
    lVar11 = *plVar8;
    lVar10 = plVar8[-1];
    *(undefined8 *)(puVar4 + 0x58) = 0;
    puVar4[0x60] = 1;
    *(long *)(puVar4 + 0x10) = unaff_x20;
    lVar3 = unaff_x20 + 0x10;
    _swift_beginAccess(lVar3,auStack_80,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined8 *)(puVar4 + 0x48) = uVar6;
    *(undefined8 *)(puVar4 + 0x50) = 0;
    *(long *)(puVar4 + 0x20) = lVar11;
    *(long *)(puVar4 + 0x18) = lVar10;
    *(long *)(puVar4 + 0x28) = lVar5;
    *(long *)(puVar4 + 0x30) = lVar1;
    *(long *)(puVar4 + 0x38) = lVar7;
    FUN_100449750();
    _swift_allocObject();
    *(long *)(lVar3 + 0x28) = lVar10;
    *(long *)(lVar3 + 0x30) = lVar9;
    *(long *)(lVar3 + 0x38) = lVar5;
    *(long *)(lVar3 + 0x40) = lVar1;
    *(long *)(lVar3 + 0x48) = lVar7;
    *(long *)(lVar3 + 0x10) = lVar9 + lVar7;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(long *)(lVar3 + 0x20) = lVar1;
    *(long *)(puVar4 + 0x40) = lVar3;
    _swift_retain_n(lVar10,2);
    _swift_retain();
    _swift_bridgeObjectRetain(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004496fc);
  (*pcVar2)();
}



/* Address: 0x1004496fc | FUN_1004496fc */

void FUN_1004496fc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100449730 | FUN_100449730 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100449730(void)

{
  return ZEXT816(0x100fc71b0);
}



/* Address: 0x100449750 | FUN_100449750 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100449750(void)

{
  return ZEXT816(0x100fc72d0);
}



/* Address: 0x100449770 | FUN_100449770 */

undefined1  [16] FUN_100449770(void)

{
  return ZEXT816(0x100ed5440);
}



/* Address: 0x100449780 | FUN_100449780 */

undefined1  [16] FUN_100449780(void)

{
  return ZEXT816(0x100ed5468);
}



/* Address: 0x100449790 | FUN_100449790 */

void FUN_100449790(void)

{
  FUN_100449190();
  return;
}



/* Address: 0x1004497b0 | FUN_1004497b0 */

void FUN_1004497b0(void)

{
  FUN_10044925c();
  return;
}



/* Address: 0x1004497d0 | FUN_1004497d0 */

void FUN_1004497d0(void)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x18) != 0) {
    _swift_bridgeObjectRetain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004497e4);
  (*pcVar1)();
}



/* Address: 0x1004497e4 | FUN_1004497e4 */

void FUN_1004497e4(void)

{
  FUN_100449484();
  return;
}



/* Address: 0x100449804 | FUN_100449804 */

void FUN_100449804(void)

{
  FUN_1004495bc();
  return;
}



/* Address: 0x100449824 | FUN_100449824 */

void FUN_100449824(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  FUN_100449730();
  param_1[3] = param_2;
  puVar1 = &DAT_100fc73b8;
  FUN_1004498b4(&DAT_100fc73b8,&TargetProtocolConformanceDescriptor_100c4ac48);
  param_1[4] = puVar1;
  *param_1 = uVar2;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x100449880 | FUN_100449880 */

void FUN_100449880(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_100fc7098;
  FUN_1004498b4(&DAT_100fc7098,&TargetProtocolConformanceDescriptor_100c4af90);
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x1004498b4 | FUN_1004498b4 */

void FUN_1004498b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_100449730();
    _swift_getWitnessTable(param_2,lVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1004498f0 | FUN_1004498f0 */

void FUN_1004498f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}


