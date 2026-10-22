/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007dd30c | FUN_1007dd30c */

ulong FUN_1007dd30c(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  uVar2 = *(ulong *)(param_1 + 0x10) & 0x3f;
  if (uVar2 < 5) {
    uVar2 = 0xf;
  }
  else {
    lVar3 = 1L << uVar2;
    uVar2 = lVar3 * 3;
    if (SUB168(SEXT816(lVar3) * SEXT816(3),8) != (long)uVar2 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007dd380);
      (*pcVar1)();
    }
    uVar2 = uVar2 >> 2;
  }
  return uVar2;
}



/* Address: 0x1007dd380 | FUN_1007dd380 */

long FUN_1007dd380(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  lVar1 = 0;
  uVar2 = *(ulong *)(param_1 + 0x10) & 0x3f;
  if (4 < uVar2 && uVar2 != (*(ulong *)(param_1 + 0x18) & 0x3f)) {
    lVar3 = 1L << uVar2;
    lVar1 = lVar3 + 3;
    if (-1 < lVar3) {
      lVar1 = lVar3;
    }
    lVar1 = lVar1 >> 2;
  }
  return lVar1;
}



/* Address: 0x1007dd3ec | FUN_1007dd3ec */

ulong FUN_1007dd3ec(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(ulong *)(param_1 + 0x10) & 0x3f;
}



/* Address: 0x1007dd42c | FUN_1007dd42c */

ulong FUN_1007dd42c(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(ulong *)(param_1 + 0x18) & 0x3f;
}



/* Address: 0x1007dd46c | FUN_1007dd46c */

long FUN_1007dd46c(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(long *)(param_1 + 0x18) >> 6;
}



/* Address: 0x1007dd4ac | FUN_1007dd4ac */

void FUN_1007dd4ac(ulong param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1 << (param_1 & 0x3f);
  lVar1 = lVar5 + 0x3f;
  if (SCARRY8(lVar5,0x3f)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dd53c);
    (*pcVar3)();
  }
  lVar2 = lVar5 + 0x7e;
  if (-1 < lVar1) {
    lVar2 = lVar1;
  }
  lVar4 = 0;
  FUN_1007dd55c();
  _swift_allocObject();
  *(ulong *)(lVar4 + 0x10) = param_1 | lVar4 << 6;
  *(undefined8 *)(lVar4 + 0x18) = param_2;
  if (-0x40 < lVar1) {
    if (0x7e < lVar5 + 0x7eU) {
      _bzero((void *)(lVar4 + 0x20),(lVar2 >> 6) * 8);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dd540);
  (*pcVar3)();
}



/* Address: 0x1007dd540 | FUN_1007dd540 */

void FUN_1007dd540(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1007dcf3c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1007dd55c | FUN_1007dd55c */

void FUN_1007dd55c(undefined8 param_1)

{
  if (DAT_100fe6648 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc1570);
  return;
}



/* Address: 0x1007dd594 | FUN_1007dd594 */

undefined1  [16] FUN_1007dd594(void)

{
  return ZEXT816(0x100f02d28);
}



/* Address: 0x1007dd5a4 | FUN_1007dd5a4 */

void FUN_1007dd5a4(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + DAT_101058150);
  return;
}



/* Address: 0x1007dd5e0 | FUN_1007dd5e0 */

void FUN_1007dd5e0(void)

{
  FUN_1007dd55c(0);
  return;
}



/* Address: 0x1007dd5e8 | FUN_1007dd5e8 */

void FUN_1007dd5e8(void)

{
  FUN_1007dc83c();
  return;
}



/* Address: 0x1007dd5fc | FUN_1007dd5fc */

ulong FUN_1007dd5fc(undefined8 param_1,ulong param_2)

{
  return param_2 & 0x3f;
}



/* Address: 0x1007dd604 | FUN_1007dd604 */

long FUN_1007dd604(undefined8 param_1,long param_2)

{
  return param_2 >> 6;
}



/* Address: 0x1007dd60c | FUN_1007dd60c */

void FUN_1007dd60c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong *unaff_x20;
  
  lVar4 = 1L << (*unaff_x20 & 0x3f);
  uVar2 = lVar4 - 1;
  if (!SBORROW8(lVar4,1)) {
    param_1 = (uVar2 & param_1 >> 0x3f) + param_1;
    uVar1 = 0;
    if ((long)uVar2 <= param_1) {
      uVar1 = uVar2;
    }
    unaff_x20[1] = unaff_x20[1] & 0x3f | (param_1 - uVar1) * 0x40;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dd648);
  (*pcVar3)();
}



/* Address: 0x1007dd648 | FUN_1007dd648 */

ulong FUN_1007dd648(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  if ((param_1 & 0x3f) < 5) {
    return 0xf;
  }
  lVar3 = 1L << (param_1 & 0x3f);
  uVar1 = lVar3 * 3;
  if (SUB168(SEXT816(lVar3) * SEXT816(3),8) == (long)uVar1 >> 0x3f) {
    return uVar1 >> 2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd684);
  (*pcVar2)();
}



/* Address: 0x1007dd684 | FUN_1007dd684 */

void FUN_1007dd684(ulong param_1)

{
  long unaff_x20;
  
  *(ulong *)(unaff_x20 + 8) = *(ulong *)(unaff_x20 + 8) & 0xffffffffffffffc0 | param_1 & 0x3f;
  return;
}



/* Address: 0x1007dd694 | FUN_1007dd694 */

undefined1  [16] FUN_1007dd694(ulong *param_1)

{
  ulong uVar1;
  ulong unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + 8);
  param_1[1] = unaff_x20;
  param_1[2] = uVar1;
  *param_1 = uVar1 & 0x3f;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1007dd6b4;
  return auVar2;
}



/* Address: 0x1007dd6b4 | FUN_1007dd6b4 */

void FUN_1007dd6b4(ulong *param_1)

{
  *(ulong *)(param_1[1] + 8) = param_1[2] & 0xffffffffffffffc0 | *param_1 & 0x3f;
  return;
}



/* Address: 0x1007dd6c8 | FUN_1007dd6c8 */

undefined1  [16] FUN_1007dd6c8(long *param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = *(long *)(unaff_x20 + 8) >> 6;
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1007dd6e4;
  return auVar1;
}



/* Address: 0x1007dd6e4 | FUN_1007dd6e4 */

void FUN_1007dd6e4(undefined8 *param_1)

{
  FUN_1007dd60c(*param_1);
  return;
}



/* Address: 0x1007dd704 | FUN_1007dd704 */

undefined1  [16] FUN_1007dd704(void)

{
  return ZEXT816(0x100f02dc0);
}



/* Address: 0x1007dd714 | FUN_1007dd714 */

void FUN_1007dd714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  Optional OVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_f8 = *(long *)(param_6 + -8);
  local_100 = param_9;
  lVar12 = (long)&local_120 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_5 + -8);
  lVar9 = lVar12 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0xff;
  local_118 = param_4;
  local_110 = param_3;
  local_f0 = param_7;
  local_c0 = param_8;
  local_b8 = lVar9;
  _swift_getTupleTypeMetadata2(0xff,param_5,param_6,"key value ",0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lStack_c8 = CONCAT71(extraout_var,OVar5.value);
  local_d0 = *(long *)(lStack_c8 + -8);
  uVar10 = *(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = lVar9 - uVar10;
  local_e0 = local_d8 - uVar10;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_unkeyedContainer();
  uVar3 = local_110;
  uVar2 = local_118;
  uStack_a8 = local_110;
  local_a0 = local_118;
  uStack_98 = 0;
  uVar7 = 0;
  local_b0 = param_2;
  FUN_1007e4458(0,param_5,param_6,local_c0);
  local_120 = param_2;
  local_e8 = uVar7;
  _swift_retain(param_2);
  _swift_retain(uVar3);
  _swift_retain(uVar2);
  local_108 = lVar6;
  do {
    lVar4 = local_d8;
    lVar6 = local_108;
    FUN_1007e40f0(local_d8,local_e8);
    lVar9 = local_e0;
    (**(code **)(local_d0 + 0x20))(local_e0,lVar4,lStack_c8);
    lVar8 = lVar9;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar9,1,lVar6);
    lVar4 = local_b8;
    if ((int)lVar8 == 1) {
LAB_1007dd9c4:
      _swift_release(local_118);
      _swift_release(local_110);
      _swift_release(local_120);
      FUN_100004594(auStack_90);
      return;
    }
    iVar1 = *(int *)(lVar6 + 0x30);
    local_c0 = unaff_x21;
    (**(code **)(lVar11 + 0x20))(local_b8,lVar9,param_5);
    lVar6 = local_f8;
    (**(code **)(local_f8 + 0x20))(lVar12,lVar9 + iVar1,param_6);
    uVar3 = uStack_70;
    uVar2 = local_78;
    FUN_10007d048(auStack_90,local_78);
    unaff_x21 = local_c0;
    Swift::UnkeyedEncodingContainer::_encode(lVar4,param_5,local_f0,uVar2,uVar3);
    uVar3 = uStack_70;
    uVar2 = local_78;
    if (unaff_x21 != 0) {
      (**(code **)(lVar6 + 8))(lVar12,param_6);
      (**(code **)(lVar11 + 8))(local_b8,param_5);
      goto LAB_1007dd9c4;
    }
    FUN_10007d048(auStack_90,local_78);
    Swift::UnkeyedEncodingContainer::_encode(lVar12,param_6,local_100,uVar2,uVar3);
    (**(code **)(lVar6 + 8))(lVar12,param_6);
    (**(code **)(lVar11 + 8))(local_b8,param_5);
  } while( true );
}



/* Address: 0x1007dda10 | FUN_1007dda10 */

void FUN_1007dda10(undefined8 param_1,long param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007dd714(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_3 + -8),
                *(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_3 + -0x10));
  return;
}



/* Address: 0x1007dda48 | FUN_1007dda48 */

/* WARNING: Removing unreachable block (ram,0x0001007ddf80) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007ddb90 */
/* WARNING: Removing unreachable block (ram,0x0001007ddd74) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void * FUN_1007dda48(long param_1,void *param_2,long param_3,undefined8 param_4,char *param_5,
                    undefined8 param_6)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  DecodingError DVar4;
  void *pvVar5;
  ContiguousArray<undefined> CVar6;
  undefined8 uVar7;
  ContiguousArray CVar8;
  __int64 _Var9;
  void *pvVar10;
  void *pvVar11;
  char *pcVar12;
  _StringGuts _Var13;
  undefined *puVar14;
  undefined *puVar15;
  char *pcVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  long local_130;
  long local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  void *local_108;
  long local_100;
  long lStack_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  long local_c8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined *puStack_80;
  void *local_78;
  char *pcStack_70;
  
  local_e0 = param_6;
  local_d8 = param_4;
  local_d0 = param_5;
  local_120 = (undefined *)Swift::DecodingError::Context::typeMetadataAccessor();
  local_110 = *(long *)(local_120 + -8);
  local_118 = (long)&local_130 - (*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = *(long *)(param_3 + -8);
  uVar18 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar20 = local_118 - uVar18;
  lVar21 = lVar20 - uVar18;
  lVar23 = *(long *)((long)param_2 + -8);
  lVar19 = *(long *)(lVar23 + 0x40);
  pvVar5 = *(void **)(param_1 + 0x20);
  local_108 = param_2;
  local_c8 = param_3;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_unkeyedContainer();
  pvVar1 = local_108;
  if (unaff_x21 == 0) {
    pvVar5 = local_108;
    pcVar12 = local_d0;
    local_130 = lVar21;
    local_128 = param_1;
    local_100 = lVar20;
    lStack_f8 = lVar22;
    local_f0 = lVar23;
    local_e8 = lVar21 - (lVar19 + 0xfU & 0xfffffffffffffff0);
    FUN_1007f61ec();
    lVar19 = local_c8;
    Swift::Array<undefined>::_allocateUninitialized(0,local_c8);
    CVar6 = Swift::ContiguousArray::_init(pvVar5,lVar19);
    local_78 = pvVar5;
    pcStack_70 = pcVar12;
    FUN_100004640(auStack_a0,local_88);
    bVar3 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
    lVar20 = local_130;
    lVar19 = local_e8;
    while (!bVar3) {
      FUN_10007d048(auStack_a0,local_88);
      Swift::UnkeyedDecodingContainer::_decode();
      pcVar12 = pcStack_70;
      pvVar5 = local_78;
      pvVar11 = local_78;
      pcVar16 = pcStack_70;
      pvVar10 = pvVar1;
      FUN_1007f9250(lVar19);
      _Var13.unknown = puStack_80;
      pcVar17 = pcVar16;
      FUN_100004640(auStack_a0,local_88);
      if (((uint)pvVar11 & 0xff) != 1) {
        Swift::UnkeyedDecodingContainer::_get_codingPath();
        Swift::_StringGuts::grow(0x1a,_Var13);
        _swift_bridgeObjectRelease(0xe000000000000000);
        FUN_100004640(auStack_a0,local_88);
        _Var9 = Swift::UnkeyedDecodingContainer::get_currentIndex();
        if (SBORROW8(_Var9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007ddff8);
          (*pcVar2)();
        }
        SVar24 = Swift::CustomStringConvertible::get_description();
        SVar25.bridgeObject = pvVar10;
        SVar25.str = pcVar17;
        Swift::String::append(SVar24,SVar25);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        lVar19 = local_118;
        Swift::DecodingError::Context::_init
                  (local_118,_Var9,0xd000000000000018,0x8000000100db1af0,0);
        DVar4 = Swift::DecodingError::typeMetadataAccessor();
        pvVar10 = (void *)CONCAT71((int7)((ulong)_Var9 >> 8),DVar4.value);
        pvVar11 = pvVar10;
        puVar14 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(pvVar10,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        lVar20 = local_110;
        puVar15 = local_120;
        (**(code **)(local_110 + 0x10))(puVar14,lVar19,local_120);
        (**(code **)(*(long *)((long)pvVar10 + -8) + 0x68))
                  (puVar14,*(undefined4 *)
                            PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
                   ,pvVar10);
        _swift_willThrow();
        (**(code **)(lVar20 + 8))(lVar19,puVar15);
LAB_1007ddf6c:
        (**(code **)(local_f0 + 8))(local_e8,pvVar1);
        FUN_100004594(auStack_a0);
        FUN_100004594(local_128);
        _swift_release(pcVar12);
        _swift_release(pvVar5);
        _swift_release(CVar6.unknown);
        return pvVar11;
      }
      bVar3 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      if (bVar3) {
        DVar4 = Swift::DecodingError::typeMetadataAccessor();
        pvVar10 = (void *)CONCAT71((int7)((ulong)auStack_a0 >> 8),DVar4.value);
        pvVar11 = pvVar10;
        puVar15 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(pvVar10,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        FUN_100004640(auStack_a0,local_88);
        Swift::UnkeyedDecodingContainer::_get_codingPath();
        Swift::DecodingError::Context::_init
                  (puVar15,auStack_a0,0xd00000000000003c,0x8000000100db1ab0,0);
        (**(code **)(*(long *)((long)pvVar10 + -8) + 0x68))
                  (puVar15,*(undefined4 *)
                            PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
                   ,pvVar10);
        _swift_willThrow();
        goto LAB_1007ddf6c;
      }
      FUN_10007d048(auStack_a0,local_88);
      lVar23 = local_c8;
      Swift::UnkeyedDecodingContainer::_decode();
      uVar7 = 0;
      FUN_1007fa688(0,pvVar1,local_d0);
      lVar19 = local_e8;
      FUN_1007ea1d8(local_e8,pcVar16,uVar7);
      lVar22 = lStack_f8;
      lVar21 = local_100;
      (**(code **)(lStack_f8 + 0x10))(local_100,lVar20,lVar23);
      CVar8 = Swift::ContiguousArray::typeMetadataAccessor();
      Swift::ContiguousArray::append(lVar21,CVar8.unknown);
      (**(code **)(lVar22 + 8))(lVar20,lVar23);
      (**(code **)(local_f0 + 8))(lVar19,pvVar1);
      FUN_100004640(auStack_a0,local_88);
      bVar3 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      pvVar5 = local_78;
    }
    FUN_100004594(auStack_a0);
    FUN_100004594(local_128);
  }
  else {
    FUN_100004594(param_1);
  }
  return pvVar5;
}



/* Address: 0x1007ddff8 | FUN_1007ddff8 */

void FUN_1007ddff8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  FUN_1007dda48();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
  }
  return;
}



/* Address: 0x1007de034 | FUN_1007de034 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007de1c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007de034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  AncestorRepresentation AVar3;
  DisplayStyle DVar4;
  undefined *puVar5;
  undefined8 uVar7;
  undefined8 uVar8;
  TargetProtocolConformanceDescriptor *pTVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long lVar6;
  
  local_b0 = param_7;
  local_98 = param_1;
  AVar3 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
  lStack_a0 = CONCAT71((int7)((ulong)param_2 >> 8),AVar3.value);
  local_a8 = *(long *)(lStack_a0 + -8);
  lVar10 = (long)&local_b0 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fe6698;
  FUN_1000f7830(&DAT_100fe6698,&TargetResilientWitness_100c79308);
  lVar11 = lVar10 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_Mirror_DisplayStyle_dictionary_Swift_Mirror_DisplayStyle_Type___>_Swift_Mirror_DisplayStyle_100eadd88
  ;
  local_90 = param_2;
  uStack_88 = param_3;
  local_80 = param_4;
  local_78 = param_2;
  uStack_70 = param_3;
  local_68 = param_4;
  DVar4 = Swift::Mirror::DisplayStyle::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)puVar5 >> 8),DVar4.value);
  lVar12 = *(long *)(lVar6 + -8);
  (**(code **)(lVar12 + 0x68))(lVar11,uVar1,lVar6);
  (**(code **)(lVar12 + 0x38))(lVar11,0,1,lVar6);
  uVar2 = local_b0;
  uVar7 = 0;
  FUN_1007e85b0(0,param_5,param_6,local_b0);
  uVar8 = 0;
  FUN_1007e0304(0,param_5,param_6,uVar2);
  pTVar9 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,uVar8);
  (**(code **)(local_a8 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for_Swift_Mirror_AncestorRepresentation_generated_Swift_Mirror_AncestorRepresentation_Type___>_Swift_Mirror_AncestorRepresentation_100eaddc0
             ,lStack_a0);
  _swift_retain_n(param_2,2);
  _swift_retain_n(param_3,2);
  _swift_retain_n(param_4,2);
  Swift::Mirror::_init(local_98,pTVar9,&local_90,lVar11,lVar10,uVar7,uVar8,pTVar9);
  return;
}



/* Address: 0x1007de1ec | FUN_1007de1ec */

void FUN_1007de1ec(undefined8 param_1)

{
  undefined4 uVar1;
  AncestorRepresentation AVar2;
  undefined7 extraout_var;
  
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Swift_Mirror_AncestorRepresentation_generated_Swift_Mirror_AncestorRepresentation_Type___>_Swift_Mirror_AncestorRepresentation_100eaddc0
  ;
  AVar2 = Swift::Mirror::AncestorRepresentation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007de22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,AVar2.value) + -8) + 0x68))
            (param_1,uVar1,CONCAT71(extraout_var,AVar2.value));
  return;
}



/* Address: 0x1007de230 | FUN_1007de230 */

void FUN_1007de230(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007de034(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1007de248 | FUN_1007de248 */

void FUN_1007de248(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdb1b30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007de290);
  (*pcVar1)();
}



/* Address: 0x1007de290 | FUN_1007de290 */

void FUN_1007de290(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdb1b30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007de2d8);
  (*pcVar1)();
}



/* Address: 0x1007de2d8 | FUN_1007de2d8 */

void FUN_1007de2d8(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x0,0xe000000000000000,0xdb1b30);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007de320);
  (*pcVar1)();
}



/* Address: 0x1007de320 | FUN_1007de320 */

void FUN_1007de320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  local_38 = param_3;
  FUN_1007e0304(0,param_4,param_5,param_6);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,uVar1);
  FUN_10068f3e0(&local_48,param_4,param_5,uVar1,pTVar2);
  return;
}



/* Address: 0x1007de398 | FUN_1007de398 */

void FUN_1007de398(undefined8 param_1,undefined8 param_2)

{
  FUN_1007de3b4(param_1,param_2,FUN_1007de320);
  return;
}



/* Address: 0x1007de3a4 | thunk_FUN_1007de320 */

void thunk_FUN_1007de320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  uStack_48 = param_1;
  uStack_40 = param_2;
  uStack_38 = param_3;
  FUN_1007e0304(0,param_4,param_5,param_6);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,uVar1);
  FUN_10068f3e0(&uStack_48,param_4,param_5,uVar1,pTVar2);
  return;
}



/* Address: 0x1007de3a8 | FUN_1007de3a8 */

void FUN_1007de3a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1007de3b4(param_1,param_2,thunk_FUN_1007de320);
  return;
}



/* Address: 0x1007de3b4 | FUN_1007de3b4 */

void FUN_1007de3b4(long param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001007de3cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1007de3d0 | thunk_FUN_1007de82c */

undefined8 thunk_FUN_1007de82c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  return uVar1;
}



/* Address: 0x1007de3d4 | thunk_FUN_1007de878 */

void thunk_FUN_1007de878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  return;
}



/* Address: 0x1007de3d8 | FUN_1007de3d8 */

void FUN_1007de3d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetResilientWitness *pTVar3;
  undefined8 *unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  local_40 = unaff_x20[4];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  pTVar3 = &TargetResilientWitness_100c79538;
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  FUN_10068f3e0(&local_60,uVar1,uVar2,param_1,pTVar3);
  return;
}



/* Address: 0x1007de440 | thunk_FUN_1007de3d8 */

void thunk_FUN_1007de3d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetResilientWitness *pTVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_40 = unaff_x20[4];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  pTVar3 = &TargetResilientWitness_100c79538;
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  FUN_10068f3e0(&uStack_60,uVar1,uVar2,param_1,pTVar3);
  return;
}



/* Address: 0x1007de444 | thunk_FUN_1007de3d8 */

void thunk_FUN_1007de3d8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetResilientWitness *pTVar3;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_40 = unaff_x20[4];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  pTVar3 = &TargetResilientWitness_100c79538;
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  FUN_10068f3e0(&uStack_60,uVar1,uVar2,param_1,pTVar3);
  return;
}



/* Address: 0x1007de448 | FUN_1007de448 */

void FUN_1007de448(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1007f6328(unaff_x20[3],unaff_x20[4],*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1007de460 | FUN_1007de460 */

void FUN_1007de460(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_48 = *unaff_x20;
  uStack_78 = unaff_x20[4];
  local_80 = unaff_x20[3];
  uStack_38 = unaff_x20[2];
  local_40 = unaff_x20[1];
  uVar1 = 0;
  FUN_1007e44c4(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  uVar2 = 0x100c79d98;
  _swift_getWitnessTable(0x100c79d98,uVar1);
  FUN_1007de4f8(&local_70,&local_80,uVar1,uVar2);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[2] = local_60;
  param_1[4] = uStack_50;
  param_1[3] = local_58;
  return;
}



/* Address: 0x1007de4f8 | FUN_1007de4f8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007de7a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007de4f8(undefined8 param_1,
                  Range<dispatch_thunk_of_Swift_Collection__failEarlyRangeCheck(_:_Swift_Range<A_Index>,bounds:_Swift_Range<A_Index>)__>___>
                  param_2,long param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  Range RVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 unaff_x20;
  code *pcVar13;
  Range<dispatch_thunk_of_Swift_Collection__failEarlyRangeCheck(_:_Swift_Range<A_Index>,bounds:_Swift_Range<A_Index>)__>___>
  bounds;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  long local_98;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  local_98 = *(long *)(param_3 + -8);
  lVar10 = (long)&local_c0 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar12 = *(undefined8 *)(param_4 + 8);
  lVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar7 = 0;
  _swift_getTupleTypeMetadata2(0,lVar6,lVar6,"lower upper ",0);
  local_a8 = *(long *)(lVar7 + -8);
  uVar11 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = lVar10 - uVar11;
  local_b8 = lVar17 - uVar11;
  local_c0 = *(long *)(lVar6 + -8);
  uVar11 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = local_b8 - uVar11;
  lVar14 = lVar16 - uVar11;
  uVar8 = uVar12;
  _swift_getAssociatedConformanceWitness
            (uVar12,param_3,lVar6,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  RVar9 = Swift::Range::typeMetadataAccessor();
  local_b0 = *(long *)(RVar9.unknown + -8);
  bounds.unknown = (undefined *)(lVar14 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_a0 = RVar9.unknown;
  Swift::Collection::_get_startIndex();
  Swift::Collection::_get_endIndex();
  bVar5 = Swift::Comparable::<__infix(lVar14,lVar16,lVar6,uVar8);
  lVar4 = local_b8;
  lVar3 = local_c0;
  if (bVar5) {
    pcVar13 = *(code **)(local_c0 + 0x20);
    (*pcVar13)(local_b8,lVar14,lVar6);
    (*pcVar13)(lVar4 + *(int *)(lVar7 + 0x30),lVar16,lVar6);
    lVar14 = local_a8;
    (**(code **)(local_a8 + 0x10))(lVar17,lVar4,lVar7);
    iVar1 = *(int *)(lVar7 + 0x30);
    (*pcVar13)(bounds.unknown,lVar17,lVar6);
    pcVar15 = *(code **)(lVar3 + 8);
    (*pcVar15)(lVar17 + iVar1,lVar6);
    (**(code **)(lVar14 + 0x20))(lVar17,lVar4,lVar7);
    puVar2 = local_a0;
    (*pcVar13)(bounds.unknown + *(int *)(local_a0 + 0x24),lVar17 + *(int *)(lVar7 + 0x30),lVar6);
    (*pcVar15)(lVar17,lVar6);
    Swift::Collection::__failEarlyRangeCheck(param_2,bounds);
    lVar3 = local_b0;
    (**(code **)(local_b0 + 8))(bounds.unknown,puVar2);
    (**(code **)(local_98 + 0x10))(lVar10,unaff_x20,param_3);
    (**(code **)(lVar3 + 0x10))(bounds.unknown,param_2.unknown,puVar2);
    Swift::Slice::_init(param_1,RVar9.unknown,bounds.unknown,param_3,uVar12);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1007de7d0);
  (*pcVar13)();
}



/* Address: 0x1007de7d0 | FUN_1007de7d0 */

void FUN_1007de7d0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f9250(param_1,uVar1,unaff_x20[1],*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x20));
  if (((((uint)uVar1 & 0xff) != 1) && ((long)unaff_x20[3] <= param_1)) &&
     (param_1 < (long)unaff_x20[4])) {
    return;
  }
  return;
}



/* Address: 0x1007de82c | FUN_1007de82c */

undefined8 FUN_1007de82c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  return uVar1;
}



/* Address: 0x1007de878 | FUN_1007de878 */

void FUN_1007de878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  return;
}



/* Address: 0x1007de8c4 | FUN_1007de8c4 */

void FUN_1007de8c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  auVar2 = NEON_ext(*(undefined1 (*) [16])(param_2 + 3),*(undefined1 (*) [16])(param_2 + 3),8,1);
  param_1[4] = auVar2._8_8_;
  param_1[3] = auVar2._0_8_;
  return;
}



/* Address: 0x1007de8e4 | FUN_1007de8e4 */

void FUN_1007de8e4(undefined8 param_1,long param_2)

{
  long lVar1;
  __int64 _Var2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _Var2 = *(__int64 *)(unaff_x20 + 0x20);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2
            (0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),"key value ",0);
  if (lVar1 <= _Var2) {
                    /* WARNING: Could not recover jumptable at 0x0001007de9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,1,1,lVar4);
    return;
  }
  Swift::ContiguousArray::get_subscript(_Var2,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
  Swift::ContiguousArray::get_subscript(_Var2,(ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,0,1,lVar4);
  if (!SCARRY8(*(long *)(unaff_x20 + 0x20),1)) {
    *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007de9d4);
  (*pcVar3)();
}



/* Address: 0x1007de9d4 | thunk_FUN_1007de8e4 */

void thunk_FUN_1007de8e4(void)

{
  FUN_1007de8e4();
  return;
}



/* Address: 0x1007de9d8 | FUN_1007de9d8 */

void FUN_1007de9d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  
  *param_1 = *unaff_x20;
  uVar2 = unaff_x20[2];
  uVar1 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = uVar1;
  auVar3 = NEON_ext(*(undefined1 (*) [16])(unaff_x20 + 3),*(undefined1 (*) [16])(unaff_x20 + 3),8,1)
  ;
  param_1[4] = auVar3._8_8_;
  param_1[3] = auVar3._0_8_;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return;
}



/* Address: 0x1007dea30 | FUN_1007dea30 */

void FUN_1007dea30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = *unaff_x20;
  uVar1 = unaff_x20[1];
  param_1[2] = unaff_x20[2];
  param_1[1] = uVar1;
  auVar2 = NEON_ext(*(undefined1 (*) [16])(unaff_x20 + 3),*(undefined1 (*) [16])(unaff_x20 + 3),8,1)
  ;
  param_1[4] = auVar2._8_8_;
  param_1[3] = auVar2._0_8_;
  return;
}



/* Address: 0x1007dea50 | FUN_1007dea50 */

void FUN_1007dea50(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x1007dea84 | FUN_1007dea84 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007deab0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1007dea84(undefined8 param_1)

{
  TargetResilientWitness *pTVar1;
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar2;
  undefined8 *unaff_x20;
  
  pTVar1 = &TargetResilientWitness_100c79538;
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  CVar2 = Swift::__copyCollectionToContiguousArray(pTVar1,param_1,pTVar1);
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return CVar2.unknown;
}



/* Address: 0x1007deae0 | FUN_1007deae0 */

void FUN_1007deae0(undefined8 param_1,undefined8 param_2,__int64 param_3)

{
  ContiguousArray CVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) <= param_3 && param_3 < *(long *)(unaff_x20 + 0x20)) {
    CVar1.unknown = *(undefined **)(unaff_x20 + 0x10);
    Swift::ContiguousArray::get_subscript(param_3,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
    Swift::ContiguousArray::get_subscript(param_3,CVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007deb44);
  (*pcVar2)();
}



/* Address: 0x1007deb44 | FUN_1007deb44 */

void FUN_1007deb44(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  if ((long)unaff_x20[3] <= param_2 && param_3 <= (long)unaff_x20[4]) {
    uVar2 = *unaff_x20;
    *param_1 = uVar2;
    uVar3 = unaff_x20[2];
    uVar4 = unaff_x20[1];
    param_1[2] = unaff_x20[2];
    param_1[1] = uVar4;
    param_1[3] = param_2;
    param_1[4] = param_3;
    _swift_retain(uVar2);
    _swift_retain(uVar4);
    _swift_retain(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007debac);
  (*pcVar1)();
}



/* Address: 0x1007debac | FUN_1007debac */

long FUN_1007debac(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (!SBORROW8(*(long *)(unaff_x20 + 0x20),*(long *)(unaff_x20 + 0x18))) {
    return *(long *)(unaff_x20 + 0x20) - *(long *)(unaff_x20 + 0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007debc0);
  (*pcVar1)();
}



/* Address: 0x1007debc0 | FUN_1007debc0 */

void FUN_1007debc0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1007dee60(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x1007debf0 | FUN_1007debf0 */

undefined1  [16] FUN_1007debf0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  
  puVar3 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar4 = (undefined8 *)0x68;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar4 = _malloc(0x68);
  }
  else {
    _swift_coroFrameAlloc(0x68,0x7175);
  }
  *param_1 = puVar4;
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  puVar4[9] = lVar5;
  lVar9 = *(long *)(lVar5 + -8);
  puVar4[10] = lVar9;
  pvVar6 = *(void **)(lVar9 + 0x40);
  if (puVar3 == (undefined *)0x0) {
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    _swift_coroFrameAlloc(pvVar6,0x7175);
  }
  puVar4[0xb] = pvVar6;
  uVar8 = *param_2;
  uVar10 = *unaff_x20;
  uVar12 = unaff_x20[3];
  uVar11 = unaff_x20[2];
  puVar4[1] = unaff_x20[1];
  *puVar4 = uVar10;
  puVar4[3] = uVar12;
  puVar4[2] = uVar11;
  puVar4[4] = unaff_x20[4];
  puVar7 = puVar4 + 5;
  FUN_1007ded60(puVar7,uVar8,param_3);
  puVar4[0xc] = puVar7;
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(pvVar6);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            ((long)pvVar6 + (long)*(int *)(lVar5 + 0x30),param_3,lVar2);
  auVar13._8_8_ = pvVar6;
  auVar13._0_8_ = FUN_1007ded0c;
  return auVar13;
}



/* Address: 0x1007ded0c | FUN_1007ded0c */

void FUN_1007ded0c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  (**(code **)(*(long *)((long)pvVar2 + 0x50) + 8))
            (*(undefined8 *)((long)pvVar2 + 0x58),*(undefined8 *)((long)pvVar2 + 0x48));
  pvVar1 = *(void **)((long)pvVar2 + 0x58);
  (**(code **)((long)pvVar2 + 0x60))((long)pvVar2 + 0x28,param_2);
  _free(pvVar1);
  _free(pvVar2);
  return;
}



/* Address: 0x1007ded60 | FUN_1007ded60 */

code * FUN_1007ded60(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  
  lVar1 = 0;
  _swift_getTupleTypeMetadata2
            (0,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),"key value ",0);
  lVar3 = *(long *)(lVar1 + -8);
  *param_1 = lVar1;
  param_1[1] = lVar3;
  pvVar2 = *(void **)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc((size_t)pvVar2);
  }
  else {
    _swift_coroFrameAlloc(pvVar2,0xa5ca);
  }
  param_1[2] = (long)pvVar2;
  FUN_1007deae0();
  return FUN_1006333c4;
}



/* Address: 0x1007dee04 | FUN_1007dee04 */

void FUN_1007dee04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1007deb44(&local_48,*param_2,param_2[1]);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  param_1[4] = local_28;
  return;
}



/* Address: 0x1007dee4c | FUN_1007dee4c */

void FUN_1007dee4c(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x20);
  *param_1 = uVar1;
  return;
}


