/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100444890 | FUN_100444890 */

void FUN_100444890(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004448b4 | FUN_1004448b4 */

void FUN_1004448b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc70a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ad38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ad38,&DAT_100ed52b0);
  DAT_100fc70a8 = pTVar1;
  return;
}



/* Address: 0x1004448f4 | FUN_1004448f4 */

void FUN_1004448f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100444930 | FUN_100444930 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100444930(void)

{
  undefined *puVar1;
  
  if (DAT_100fc70b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSData;
  _swift_getObjCClassMetadata();
  DAT_100fc70b0 = puVar1;
  return;
}



/* Address: 0x100444974 | FUN_100444974 */

undefined8 FUN_100444974(undefined8 param_1)

{
  FUN_10044b95c();
  return param_1;
}



/* Address: 0x1004449a8 | FUN_1004449a8 */

/* WARNING: Removing unreachable block (ram,0x000100444b50) */

void FUN_1004449a8(undefined8 param_1,undefined *param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Optional OVar4;
  undefined7 extraout_var;
  char *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined1 *puVar11;
  String SVar12;
  String separator;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  long local_58;
  
  OVar4 = Swift::Optional::typeMetadataAccessor();
  puVar11 = auStack_d0 +
            -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40) + 0xfU &
             0xfffffffffffffff0);
  if (param_2 == &DAT_100ed5668) {
    pcVar5 = &DAT_100fc70c0;
    FUN_1000f7830(&DAT_100fc70c0,&DAT_100c4ad00);
    _swift_allocObject();
    pcVar5[0x18] = '\x02';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x10] = '\x01';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    pcVar5[0x20] = -0x2b;
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = '\0';
    SVar12.bridgeObject = (void *)0x20;
    SVar12.str = pcVar5;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar12,separator);
    _swift_release(pcVar5);
  }
  _swift_beginAccess(unaff_x20 + 0x20,auStack_a0,0,0);
  lVar9 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar9 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100444bc0);
    (*pcVar3)();
  }
  plVar8 = (long *)(*(long *)(unaff_x20 + 0x20) + lVar9 * 0x28);
  lVar1 = plVar8[2];
  lVar2 = plVar8[-1];
  lVar9 = *plVar8 + plVar8[3];
  local_c8 = param_1;
  local_c0 = param_4;
  _swift_beginAccess(lVar2 + 0x10,auStack_b8,0,0);
  uVar10 = *(undefined8 *)(lVar2 + 0x10);
  local_58 = 0;
  _swift_retain(lVar2);
  _swift_bridgeObjectRetain(uVar10);
  lVar6 = lVar9;
  FUN_1004486a0(lVar9,lVar1,uVar10,&local_58);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(uVar10);
    local_78 = lVar6 + local_58;
    if (SCARRY8(lVar6,local_58)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100444bc4);
      (*pcVar3)();
    }
    lStack_70 = local_58;
    local_88 = lVar2;
    lStack_80 = lVar9;
    local_68 = lVar6;
    FUN_100444e74(puVar11,&local_88,param_2,param_3,local_c0);
    lVar9 = *(long *)(param_3 + -8);
    puVar7 = puVar11;
    (**(code **)(lVar9 + 0x30))(puVar11,1,param_3);
    if ((int)puVar7 == 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100444bc8);
      (*pcVar3)();
    }
    _swift_release(lVar2);
    (**(code **)(lVar9 + 0x20))(local_c8,puVar11,param_3);
  }
  else {
    _swift_release(lVar2);
    _swift_bridgeObjectRelease(uVar10);
  }
  return;
}



/* Address: 0x100444bc8 | FUN_100444bc8 */

void FUN_100444bc8(void)

{
  FUN_100444d30();
  return;
}



/* Address: 0x100444be8 | FUN_100444be8 */

void FUN_100444be8(void)

{
  FUN_100444c70();
  return;
}



/* Address: 0x100444c08 | FUN_100444c08 */

void FUN_100444c08(void)

{
  FUN_100444cd0();
  return;
}



/* Address: 0x100444c28 | FUN_100444c28 */

void FUN_100444c28(void)

{
  (extension_Swift)::Swift::SingleValueDecodingContainer::_decode();
  return;
}



/* Address: 0x100444c3c | FUN_100444c3c */

void FUN_100444c3c(void)

{
  (extension_Swift)::Swift::SingleValueDecodingContainer::_decode();
  return;
}



/* Address: 0x100444c50 | FUN_100444c50 */

void FUN_100444c50(void)

{
  FUN_1004449a8();
  return;
}



/* Address: 0x100444c70 | FUN_100444c70 */

void FUN_100444c70(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + lVar3 * 0x28);
    FUN_100449c84(*puVar2,puVar2[2],puVar2[3]);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100444cd0);
  (*pcVar1)();
}



/* Address: 0x100444cd0 | FUN_100444cd0 */

void FUN_100444cd0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,0,0);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + lVar3 * 0x28);
    FUN_100449f9c(*puVar2,puVar2[2],puVar2[3]);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100444d30);
  (*pcVar1)();
}



/* Address: 0x100444d30 | FUN_100444d30 */

undefined1  [16] FUN_100444d30(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  Encoding EVar5;
  Encoding EVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long unaff_x20;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  EVar5 = Encoding::_typeMetadataAccessor();
  lVar13 = *(long *)(EVar5.unknown + -8);
  puVar12 = auStack_90 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x20,auStack_78,0,0);
  lVar10 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100444e70);
    (*pcVar4)();
  }
  puVar8 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + lVar10 * 0x28);
  puVar1 = (undefined *)puVar8[-1];
  uVar7 = *puVar8;
  lVar10 = puVar8[2];
  uVar2 = puVar8[3];
  _swift_beginAccess(puVar1 + 0x10,auStack_90,0,0);
  lVar9 = *(long *)(*(long *)(puVar1 + 0x10) + 0x10);
  pbVar11 = (byte *)(*(long *)(puVar1 + 0x10) + 0x20);
  do {
    if (lVar9 == 0) {
      EVar6.unknown = puVar1;
      _swift_retain();
      Encoding::_get_utf8(EVar6);
      goto LAB_100444e08;
    }
    bVar3 = *pbVar11;
    lVar9 = lVar9 + -1;
    pbVar11 = pbVar11 + 1;
  } while (0x3f < bVar3);
  _swift_retain(puVar1);
  FUN_10044ae34(puVar12,bVar3);
LAB_100444e08:
  FUN_10044a6f8(uVar7,lVar10,uVar2,puVar12);
  _swift_release(puVar1);
  (**(code **)(lVar13 + 8))(puVar12,EVar5.unknown);
  if (lVar10 != 0) {
    auVar14._8_8_ = lVar10;
    auVar14._0_8_ = uVar7;
    return auVar14;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100444e74);
  (*pcVar4)();
}



/* Address: 0x100444e74 | FUN_100444e74 */

void FUN_100444e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x21;
  undefined1 auStack_50 [32];
  
  FUN_100444f04(auStack_50,param_2,param_3,param_5);
  if (unaff_x21 == 0) {
    puVar1 = &DAT_100fc70c8;
    FUN_1000f7830(&DAT_100fc70c8,&DAT_100c4ad08);
    uVar2 = param_1;
    _swift_dynamicCast(param_1,auStack_50,puVar1,param_4,6);
    (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,(uint)uVar2 ^ 1,1,param_4);
  }
  return;
}



/* Address: 0x100444f04 | FUN_100444f04 */

void FUN_100444f04(long *param_1,undefined8 *param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  Deallocator DVar2;
  undefined7 extraout_var;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [40];
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 uStack_68;
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  puVar1 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  lVar6 = CONCAT71(extraout_var,DVar2.value);
  lVar7 = *(long *)(lVar6 + -8);
  puVar11 = auStack_e0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ed5668;
  if (param_3 == &DAT_100ed5668) {
    lVar8 = param_2[2];
    if (lVar8 != 0) {
      lVar9 = param_2[1];
      (**(code **)(lVar7 + 0x68))
                (puVar11,*(undefined4 *)
                          PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
                 ,lVar6);
      goto LAB_1004450c0;
    }
  }
  else {
    if (param_3 != PTR___type_metadata_for_Foundation_Data_100ea7300) {
      puVar3 = (undefined *)0x0;
      FUN_100444930();
      if (param_3 != puVar3) {
        _swift_beginAccess(unaff_x20 + 0x20,auStack_88,0x21,0);
        uVar12 = *(ulong *)(unaff_x20 + 0x20);
        uVar4 = uVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x20) = uVar12;
        uVar5 = uVar12;
        if ((uVar4 & 1) == 0) {
          uVar5 = 0;
          FUN_10044c838(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
          *(ulong *)(unaff_x20 + 0x20) = uVar5;
        }
        uVar4 = *(ulong *)(uVar5 + 0x10);
        uVar12 = uVar5;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
          uVar12 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
          FUN_10044c838(uVar12,uVar4 + 1,1,uVar5);
        }
        *(ulong *)(uVar12 + 0x10) = uVar4 + 1;
        lVar6 = uVar12 + uVar4 * 0x28;
        uVar14 = param_2[1];
        uVar13 = *param_2;
        uVar16 = param_2[3];
        uVar15 = param_2[2];
        *(undefined8 *)(lVar6 + 0x40) = param_2[4];
        *(undefined8 *)(lVar6 + 0x28) = uVar14;
        *(undefined8 *)(lVar6 + 0x20) = uVar13;
        *(undefined8 *)(lVar6 + 0x38) = uVar16;
        *(undefined8 *)(lVar6 + 0x30) = uVar15;
        *(ulong *)(unaff_x20 + 0x20) = uVar12;
        _swift_endAccess(auStack_88);
        FUN_100449730();
        FUN_10044480c();
        local_70 = param_3;
        uStack_68 = param_4;
        FUN_10000cbb0(auStack_88);
        FUN_100443b18(param_2,auStack_d8);
        _swift_retain();
        Swift::Decodable::_init();
        puVar3 = local_70;
        if (unaff_x21 == 0) {
          FUN_100004640(auStack_88,local_70);
          param_1[3] = (long)puVar3;
          FUN_10000cbb0(param_1);
          (**(code **)(*(long *)(puVar3 + -8) + 0x10))();
          FUN_100004594(auStack_88);
        }
        else {
          FUN_100445238(auStack_88);
        }
        FUN_100445194();
        return;
      }
    }
    lVar8 = param_2[3];
    puVar3 = puVar1;
    if (lVar8 != 0) {
      lVar9 = param_2[1];
      lVar10 = param_2[4];
      (**(code **)(lVar7 + 0x68))
                (puVar11,*(undefined4 *)
                          PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
                 ,lVar6);
      lVar9 = lVar9 + lVar10;
LAB_1004450c0:
      FUN_100445398(lVar9,lVar8,puVar11);
      goto LAB_1004450d8;
    }
  }
  lVar9 = 0;
  lVar8 = -0x4000000000000000;
LAB_1004450d8:
  param_1[3] = (long)puVar3;
  *param_1 = lVar9;
  param_1[1] = lVar8;
  return;
}



/* Address: 0x100445194 | FUN_100445194 */

void FUN_100445194(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x20,auStack_48,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x20);
  if (*(long *)(uVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100445220);
    (*pcVar1)();
  }
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_100445294();
    lVar3 = *(long *)(uVar4 + 0x10);
  }
  else {
    lVar3 = *(long *)(uVar4 + 0x10);
  }
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(uVar4 + lVar3 * 0x28 + -8);
    *(long *)(uVar4 + 0x10) = lVar3 + -1;
    *(ulong *)(param_1 + 0x20) = uVar4;
    _swift_endAccess(auStack_48);
    _swift_release(uVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100445238);
  (*pcVar1)();
}



/* Address: 0x100445238 | FUN_100445238 */

void FUN_100445238(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_1[3] + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    return;
  }
  uVar2 = (ulong)uVar1 & 0xff;
  _swift_slowDealloc(*param_1,*(long *)(*(long *)(param_1[3] + -8) + 0x40) +
                              (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),uVar2 | 7);
  return;
}



/* Address: 0x10044526c | FUN_10044526c */

void FUN_10044526c(long param_1)

{
  FUN_10044c504(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100445280 | FUN_100445280 */

void FUN_100445280(long param_1)

{
  FUN_10044c5f4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100445294 | FUN_100445294 */

void FUN_100445294(long param_1)

{
  FUN_10044c838(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1004452a8 | FUN_1004452a8 */

void FUN_1004452a8(__DataStorage *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  ulong uVar4;
  RangeReference *pRVar5;
  long lVar6;
  long lVar7;
  __DataStorage *this;
  
  if (param_2 == 0) {
    _swift_release(param_1);
  }
  else if ((long)param_2 < 0xf) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100445394);
      (*pcVar2)();
    }
    this = param_1;
    Foundation::__DataStorage::_get__bytes(param_1,param_1);
    if (param_1 == (__DataStorage *)0x0) {
      Foundation::__DataStorage::get__length(this,(__DataStorage *)0x0);
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(this,param_1);
      if (SBORROW8(0,(long)p_Var3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100445398);
        (*pcVar2)();
      }
      lVar1 = (long)param_1 - (long)p_Var3;
      uVar4 = Foundation::__DataStorage::get__length(this,p_Var3);
      if ((long)param_2 <= (long)uVar4) {
        uVar4 = param_2;
      }
      lVar6 = 0;
      if (lVar1 != 0) {
        lVar6 = lVar1;
      }
      lVar7 = 0;
      if (lVar1 != 0) {
        lVar7 = uVar4 + lVar1;
      }
    }
    FUN_10017499c(lVar6,lVar7);
    _swift_release(this);
  }
  else if (0x7ffffffe < param_2) {
    pRVar5 = Foundation::Data::RangeReference::typeMetadataAccessor();
    _swift_allocObject(pRVar5,0x20,7);
    *(undefined8 *)(pRVar5 + 0x10) = 0;
    *(ulong *)(pRVar5 + 0x18) = param_2;
  }
  return;
}



/* Address: 0x100445398 | FUN_100445398 */

undefined1  [16] FUN_100445398(__int64 param_1,long param_2,undefined8 param_3)

{
  Deallocator DVar1;
  undefined7 extraout_var;
  code *pcVar3;
  __DataStorage *p_Var4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [32];
  code *pcVar2;
  
  lVar7 = param_2;
  DVar1 = Foundation::Data::Deallocator::typeMetadataAccessor();
  pcVar2 = (code *)CONCAT71(extraout_var,DVar1.value);
  lVar10 = *(long *)(pcVar2 + -8);
  puVar9 = auStack_80 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar3 = pcVar2;
  Foundation::Data::Deallocator::_get__deallocator(DVar1);
  if (param_2 == 0) {
    lVar8 = lVar7;
    Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar3);
    (*pcVar3)(param_1,0);
    _swift_release(lVar7);
    _swift_release(lVar8);
    p_Var4 = (__DataStorage *)0x0;
    param_2 = -0x4000000000000000;
  }
  else {
    p_Var4 = Foundation::__DataStorage::typeMetadataAccessor();
    _swift_allocObject(p_Var4,*(undefined4 *)(p_Var4 + 0x30),*(undefined2 *)(p_Var4 + 0x34));
    _swift_retain(lVar7);
    p_Var4 = Foundation::__DataStorage::_init(p_Var4,param_1,SUB81(param_2,0),0);
    (**(code **)(lVar10 + 0x10))(puVar9,param_3,pcVar2);
    puVar5 = puVar9;
    pcVar3 = pcVar2;
    (**(code **)(lVar10 + 0x58))();
    if ((int)puVar5 ==
        *(int *)
         PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
       ) {
      pcVar6 = (code *)auStack_80;
      Foundation::__DataStorage::modify__capacity(p_Var4,(__int64)pcVar6);
      *(ulong *)pcVar3 = *(ulong *)pcVar3 | 0x8000000000000000;
      (*pcVar6)(auStack_80,0);
    }
    else {
      (**(code **)(lVar10 + 8))(puVar9,pcVar2);
    }
    FUN_1004452a8(p_Var4,param_2);
    _swift_release(lVar7);
  }
  (**(code **)(lVar10 + 8))(param_3,pcVar2);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = p_Var4;
  return auVar11;
}



/* Address: 0x100445540 | FUN_100445540 */

bool FUN_100445540(void)

{
  char *pcVar1;
  long unaff_x20;
  
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x20) == 0) {
    return true;
  }
  pcVar1 = *(char **)(*(long *)(unaff_x20 + 0x30) + 0x10);
  if (*pcVar1 != '\0') {
    return false;
  }
  return pcVar1[1] == '\0';
}



/* Address: 0x100445578 | FUN_100445578 */

/* WARNING: Removing unreachable block (ram,0x00010044578c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100445818 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100445578(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  Optional OVar5;
  DecodingError DVar6;
  undefined7 extraout_var;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  _StringGuts _Var13;
  char *pcVar14;
  void *pvVar15;
  char *pcVar16;
  long lVar17;
  long *unaff_x20;
  ulong uVar18;
  code *pcVar19;
  long unaff_x21;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 local_108;
  long local_100;
  long local_f8;
  void *local_f0;
  long local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined *local_b8;
  ulong local_b0;
  long local_a8 [3];
  undefined1 auStack_90 [48];
  
  pcVar14 = param_4;
  pvVar15 = param_5;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)param_2 >> 8);
  local_100 = CONCAT71(extraout_var,OVar5.value);
  local_118 = *(long *)(local_100 + -8);
  local_e8 = (long)&local_120 - (*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f8 = *(long *)(param_4 + -8);
  local_120 = local_e8 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((*(long *)(unaff_x20[6] + 0x20) == 0) ||
     ((pcVar16 = *(char **)(unaff_x20[6] + 0x10), *pcVar16 == '\0' && (pcVar16[1] == '\0')))) {
    DVar6 = Swift::DecodingError::typeMetadataAccessor();
    lVar17 = CONCAT71(extraout_var,DVar6.value);
    puVar12 = (undefined8 *)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar17,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar8 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar2 = *(int *)(puVar8 + 0x30);
    *puVar12 = param_2;
    lVar20 = *unaff_x20;
    _swift_beginAccess(lVar20 + 0x10,&local_d0,0,0);
    uVar9 = *(undefined8 *)(lVar20 + 0x10);
    _swift_bridgeObjectRetain(uVar9);
    Swift::DecodingError::Context::_init
              ((undefined *)((long)puVar12 + (long)iVar2),uVar9,0xd00000000000001c,
               0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar17 + -8) + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar17);
    _swift_willThrow();
  }
  else {
    lVar17 = *unaff_x20;
    lVar20 = unaff_x20[8];
    local_d0 = (undefined *)0x207865646e49;
    local_c8 = &DAT_e600000000000000;
    local_110 = param_1;
    local_f0 = param_5;
    local_d8 = param_3;
    local_a8[0] = lVar20;
    SVar21 = Swift::CustomStringConvertible::get_description();
    SVar22.bridgeObject = pvVar15;
    SVar22.str = pcVar14;
    Swift::String::append(SVar21,SVar22);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    puVar8 = local_d0;
    local_e0 = local_c8;
    _swift_beginAccess(lVar17 + 0x10,local_a8,0x21,0);
    uVar18 = *(ulong *)(lVar17 + 0x10);
    uVar11 = uVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar17 + 0x10) = uVar18;
    local_108 = param_2;
    if ((uVar11 & 1) == 0) {
      uVar11 = 0;
      FUN_10044c5f4(0,*(long *)(uVar18 + 0x10) + 1,1,uVar18);
      *(ulong *)(lVar17 + 0x10) = uVar11;
      uVar18 = uVar11;
    }
    uVar1 = *(ulong *)(uVar18 + 0x10);
    if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar1) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar18 + 0x18));
      FUN_10044c5f4(uVar11,uVar1 + 1,1,uVar18);
      uVar18 = uVar11;
    }
    uVar9 = local_d8;
    local_b8 = &DAT_100ed5530;
    FUN_100444850();
    puVar7 = &DAT_100ed5208;
    local_b0 = uVar11;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar7 + 0x10) = puVar8;
    *(undefined1 **)(puVar7 + 0x18) = local_e0;
    *(long *)(puVar7 + 0x20) = lVar20;
    puVar7[0x28] = 0;
    *(ulong *)(uVar18 + 0x10) = uVar1 + 1;
    local_d0 = puVar7;
    FUN_100076508(&local_d0,uVar18 + uVar1 * 0x28 + 0x20);
    *(ulong *)(lVar17 + 0x10) = uVar18;
    _swift_endAccess(local_a8);
    FUN_1004471e4(auStack_90,uVar9);
    if (unaff_x21 == 0) {
      FUN_100443b18(auStack_90,&local_d0);
      lVar4 = local_e8;
      FUN_100444e74(local_e8,auStack_90,param_4,param_4,local_f0);
      FUN_100444974(auStack_90);
      lVar3 = local_f8;
      lVar10 = lVar4;
      (**(code **)(local_f8 + 0x30))(lVar4,1,param_4);
      lVar20 = local_120;
      if ((int)lVar10 == 1) {
        (**(code **)(local_118 + 8))(lVar4,local_100);
        DVar6 = Swift::DecodingError::typeMetadataAccessor();
        lVar20 = CONCAT71((int7)((ulong)lVar10 >> 8),DVar6.value);
        pcVar14 = (char *)0x0;
        pvVar15 = (void *)0x0;
        puVar12 = (undefined8 *)
                  PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
        ;
        _swift_allocError();
        puVar8 = &DAT_100fc70b8;
        _Var13.unknown = &DAT_100c4ac40;
        FUN_1000f7830();
        uVar9 = local_108;
        iVar2 = *(int *)(puVar8 + 0x30);
        *puVar12 = local_108;
        local_d0 = (undefined *)0x0;
        local_c8 = (undefined1 *)0xe000000000000000;
        _swift_bridgeObjectRetain(*(undefined8 *)(lVar17 + 0x10));
        Swift::_StringGuts::grow(0x29,_Var13);
        _swift_bridgeObjectRelease(local_c8);
        local_d0 = (undefined *)0x6465746365707845;
        local_c8 = (undefined1 *)0xe900000000000020;
        SVar21 = Swift::__typeName(SUB81(uVar9,0));
        SVar23.bridgeObject = pvVar15;
        SVar23.str = pcVar14;
        Swift::String::append(SVar21,SVar23);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        SVar21.bridgeObject = (void *)0x8000000100da6870;
        SVar21.str = (char *)0xd00000000000001e;
        SVar24.bridgeObject = pvVar15;
        SVar24.str = pcVar14;
        Swift::String::append(SVar21,SVar24);
        Swift::DecodingError::Context::_init
                  ((undefined *)((long)puVar12 + (long)iVar2),puVar8,local_d0,local_c8,0);
        (**(code **)(*(long *)(lVar20 + -8) + 0x68))
                  (puVar12,*(undefined4 *)
                            PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
                   ,lVar20);
        _swift_willThrow();
      }
      else {
        pcVar19 = *(code **)(lVar3 + 0x20);
        (*pcVar19)(local_120,lVar4,param_4);
        (*pcVar19)(local_110,lVar20,param_4);
      }
    }
    _swift_beginAccess(lVar17 + 0x10,local_a8,0x21,0);
    FUN_100447144(&local_d0);
    _swift_endAccess(local_a8);
    FUN_100004594(&local_d0);
  }
  return;
}



/* Address: 0x100445a50 | FUN_100445a50 */

/* WARNING: Removing unreachable block (ram,0x000100445ca4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100445c4c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100445a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  TargetProtocolConformanceDescriptor *pTVar8;
  ulong uVar9;
  long *plVar10;
  void *pvVar11;
  char *pcVar12;
  long lVar13;
  long *unaff_x20;
  long unaff_x21;
  long lVar14;
  ulong uVar15;
  String SVar16;
  String SVar17;
  long local_148 [5];
  undefined *local_120;
  undefined1 *puStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  ulong local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 auStack_d8 [40];
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((*(long *)(unaff_x20[6] + 0x20) == 0) ||
     ((pcVar12 = *(char **)(unaff_x20[6] + 0x10), *pcVar12 == '\0' && (pcVar12[1] == '\0')))) {
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    lVar13 = CONCAT71((int7)((ulong)param_2 >> 8),DVar4.value);
    plVar10 = (long *)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar13,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar2 = *(int *)(puVar6 + 0x30);
    *plVar10 = (long)(PTR___type_metadata_for_Any_100eae0c0 + 8);
    lVar14 = *unaff_x20;
    _swift_beginAccess(lVar14 + 0x10,&local_120,0,0);
    uVar7 = *(undefined8 *)(lVar14 + 0x10);
    _swift_bridgeObjectRetain(uVar7);
    Swift::DecodingError::Context::_init
              ((long)plVar10 + (long)iVar2,uVar7,0xd00000000000001c,0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x68))
              (plVar10,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar13);
    _swift_willThrow();
  }
  else {
    lVar13 = *unaff_x20;
    lVar14 = unaff_x20[8];
    local_120 = (undefined *)0x207865646e49;
    puStack_118 = &DAT_e600000000000000;
    pcVar12 = param_4;
    pvVar11 = param_5;
    local_148[0] = lVar14;
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar17.bridgeObject = pvVar11;
    SVar17.str = pcVar12;
    Swift::String::append(SVar16,SVar17);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    puVar3 = puStack_118;
    puVar6 = local_120;
    _swift_beginAccess(lVar13 + 0x10,local_148,0x21,0);
    uVar15 = *(ulong *)(lVar13 + 0x10);
    uVar9 = uVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar13 + 0x10) = uVar15;
    if ((uVar9 & 1) == 0) {
      uVar9 = 0;
      FUN_10044c5f4(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
      *(ulong *)(lVar13 + 0x10) = uVar9;
      uVar15 = uVar9;
    }
    uVar1 = *(ulong *)(uVar15 + 0x10);
    if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar1) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
      FUN_10044c5f4(uVar9,uVar1 + 1,1,uVar15);
      uVar15 = uVar9;
    }
    local_108 = &DAT_100ed5530;
    FUN_100444850();
    puVar5 = &DAT_100ed5208;
    local_100 = uVar9;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar5 + 0x10) = puVar6;
    *(undefined1 **)(puVar5 + 0x18) = puVar3;
    *(long *)(puVar5 + 0x20) = lVar14;
    puVar5[0x28] = 0;
    *(ulong *)(uVar15 + 0x10) = uVar1 + 1;
    local_120 = puVar5;
    FUN_100076508(&local_120,uVar15 + uVar1 * 0x28 + 0x20);
    *(ulong *)(lVar13 + 0x10) = uVar15;
    _swift_endAccess(local_148);
    FUN_1004471e4(auStack_d8,param_3);
    if (unaff_x21 == 0) {
      FUN_100441c04(&local_b0,lVar13,auStack_d8,param_4,param_5);
      uStack_f8 = uStack_88;
      local_100 = local_90;
      uStack_e8 = uStack_78;
      uStack_f0 = uStack_80;
      local_e0 = local_70;
      puStack_118 = puStack_a8;
      local_120 = local_b0;
      local_108 = puStack_98;
      uStack_110 = uStack_a0;
      FUN_100443b18(auStack_d8,local_148);
      uVar7 = 0;
      FUN_1004447b8(0,param_4,param_5);
      _swift_retain(lVar13);
      pTVar8 = &TargetProtocolConformanceDescriptor_100c4aaa8;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4aaa8,uVar7);
      Swift::KeyedDecodingContainer::_init(param_1,pTVar8,param_4,uVar7,pTVar8);
    }
    _swift_beginAccess(lVar13 + 0x10,local_148,0x21,0);
    FUN_100447144(&local_120);
    _swift_endAccess(local_148);
    FUN_100004594(&local_120);
  }
  return;
}



/* Address: 0x100445dbc | FUN_100445dbc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100445fb0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100445dbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  DecodingError DVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined *local_b0;
  ulong local_a8;
  long local_a0 [3];
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (*(long *)(unaff_x20[6] + 0x20) == 0) {
LAB_100445f20:
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    lVar10 = CONCAT71((int7)((ulong)param_2 >> 8),DVar4.value);
    plVar8 = (long *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar10,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar6 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar2 = *(int *)(puVar6 + 0x30);
    *plVar8 = (long)(PTR___type_metadata_for_Any_100eae0c0 + 8);
    lVar13 = *unaff_x20;
    _swift_beginAccess(lVar13 + 0x10,&local_c8,0,0);
    uVar11 = *(undefined8 *)(lVar13 + 0x10);
    _swift_bridgeObjectRetain(uVar11);
    Swift::DecodingError::Context::_init
              ((long)plVar8 + (long)iVar2,uVar11,0xd00000000000001c,0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar10 + -8) + 0x68))
              (plVar8,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar10);
    _swift_willThrow();
  }
  else {
    pcVar9 = *(char **)(unaff_x20[6] + 0x10);
    if (*pcVar9 == '\0') {
      if (pcVar9[1] == '\0') goto LAB_100445f20;
    }
    lVar10 = *unaff_x20;
    lVar13 = unaff_x20[8];
    local_c8 = (undefined *)0x207865646e49;
    puStack_c0 = &DAT_e600000000000000;
    local_a0[0] = lVar13;
    SVar14 = Swift::CustomStringConvertible::get_description();
    SVar15.bridgeObject = param_5;
    SVar15.str = param_4;
    Swift::String::append(SVar14,SVar15);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    puVar3 = puStack_c0;
    puVar6 = local_c8;
    _swift_beginAccess(lVar10 + 0x10,local_a0,0x21,0);
    uVar12 = *(ulong *)(lVar10 + 0x10);
    uVar7 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar10 + 0x10) = uVar12;
    if ((uVar7 & 1) == 0) {
      uVar7 = 0;
      FUN_10044c5f4(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(lVar10 + 0x10) = uVar7;
      uVar12 = uVar7;
    }
    uVar1 = *(ulong *)(uVar12 + 0x10);
    if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
      FUN_10044c5f4(uVar7,uVar1 + 1,1,uVar12);
      uVar12 = uVar7;
    }
    local_b0 = &DAT_100ed5530;
    FUN_100444850();
    puVar5 = &DAT_100ed5208;
    local_a8 = uVar7;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar5 + 0x10) = puVar6;
    *(undefined1 **)(puVar5 + 0x18) = puVar3;
    *(long *)(puVar5 + 0x20) = lVar13;
    puVar5[0x28] = 0;
    *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
    local_c8 = puVar5;
    FUN_100076508(&local_c8,uVar12 + uVar1 * 0x28 + 0x20);
    *(ulong *)(lVar10 + 0x10) = uVar12;
    _swift_endAccess(local_a0);
    FUN_1004471e4(&local_88);
    if (unaff_x21 == 0) {
      param_1[3] = &DAT_100ed52b0;
      FUN_1004448b4();
      param_1[4] = param_2;
      puVar6 = &DAT_100ed5230;
      _swift_allocObject(&DAT_100ed5230,0x61,7);
      *(undefined8 *)(puVar6 + 0x58) = 0;
      puVar6[0x60] = 1;
      *(long *)(puVar6 + 0x10) = lVar10;
      uVar11 = *(undefined8 *)(lVar10 + 0x10);
      *(undefined8 *)(puVar6 + 0x30) = uStack_70;
      *(undefined8 *)(puVar6 + 0x28) = local_78;
      *param_1 = puVar6;
      *(undefined8 *)(puVar6 + 0x48) = uVar11;
      *(undefined8 *)(puVar6 + 0x50) = 0;
      *(long *)(puVar6 + 0x38) = local_68;
      *(long *)(puVar6 + 0x20) = lStack_80;
      *(undefined8 *)(puVar6 + 0x18) = local_88;
      lVar13 = 0;
      FUN_100449750();
      _swift_allocObject();
      *(long *)(lVar13 + 0x30) = lStack_80;
      *(undefined8 *)(lVar13 + 0x28) = local_88;
      *(undefined8 *)(lVar13 + 0x40) = uStack_70;
      *(undefined8 *)(lVar13 + 0x38) = local_78;
      *(long *)(lVar13 + 0x48) = local_68;
      *(long *)(lVar13 + 0x10) = lStack_80 + local_68;
      *(undefined8 *)(lVar13 + 0x18) = 0;
      *(undefined8 *)(lVar13 + 0x20) = uStack_70;
      *(long *)(puVar6 + 0x40) = lVar13;
      _swift_beginAccess(lVar10 + 0x10,local_a0,0x21,0);
      FUN_100443b18(&local_88,&local_c8);
      FUN_100443b18(&local_88,&local_c8);
      _swift_retain(lVar10);
      _swift_bridgeObjectRetain(uVar11);
    }
    else {
      _swift_beginAccess(lVar10 + 0x10,local_a0,0x21,0);
    }
    FUN_100447144(&local_c8);
    _swift_endAccess(local_a0);
    FUN_100004594(&local_c8);
  }
  return;
}



/* Address: 0x100446144 | FUN_100446144 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004462ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100446144(long param_1)

{
  char *pcVar1;
  int iVar2;
  code *pcVar3;
  DecodingError DVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long *unaff_x20;
  long unaff_x21;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long local_60;
  undefined1 auStack_58 [24];
  
  lVar10 = unaff_x20[6];
  lVar7 = *(long *)(lVar10 + 0x20);
  if (lVar7 == 0) {
LAB_10044621c:
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    lVar7 = CONCAT71((int7)((ulong)param_1 >> 8),DVar4.value);
    plVar6 = (long *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar7,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar5 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar2 = *(int *)(puVar5 + 0x30);
    *plVar6 = (long)(PTR___type_metadata_for_Any_100eae0c0 + 8);
    lVar10 = *unaff_x20;
    _swift_beginAccess(lVar10 + 0x10,auStack_58,0,0);
    uVar9 = *(undefined8 *)(lVar10 + 0x10);
    _swift_bridgeObjectRetain(uVar9);
    Swift::DecodingError::Context::_init
              ((long)plVar6 + (long)iVar2,uVar9,0xd00000000000001c,0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar7 + -8) + 0x68))
              (plVar6,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar7);
    _swift_willThrow();
  }
  else {
    pcVar8 = *(char **)(lVar10 + 0x10);
    if (*pcVar8 == '\0') {
      if (pcVar8[1] == '\0') goto LAB_10044621c;
    }
    _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    local_60 = 0;
    _swift_bridgeObjectRetain(uVar9);
    FUN_1004486a0(pcVar8,lVar7,uVar9,&local_60);
    _swift_bridgeObjectRelease(uVar9);
    if (unaff_x21 == 0) {
      pcVar1 = pcVar8 + local_60;
      if (SCARRY8((long)pcVar8,local_60)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004462f8);
        (*pcVar3)();
      }
      *(char **)(lVar10 + 0x10) = pcVar1 + *(long *)(lVar10 + 0x10);
      if (SCARRY8(*(long *)(lVar10 + 0x18),(long)pcVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004462fc);
        (*pcVar3)();
      }
      *(char **)(lVar10 + 0x18) = pcVar1 + *(long *)(lVar10 + 0x18);
      if (SBORROW8(*(long *)(lVar10 + 0x20),(long)pcVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100446300);
        (*pcVar3)();
      }
      *(long *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) - (long)pcVar1;
      if (SCARRY8(unaff_x20[8],1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100446304);
        (*pcVar3)();
      }
      unaff_x20[8] = unaff_x20[8] + 1;
    }
  }
  return;
}



/* Address: 0x100446304 | FUN_100446304 */

void FUN_100446304(void)

{
  Deallocator DVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  DVar1 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar2 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    (**(code **)(lVar2 + 0x68))
              (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,CONCAT71(extraout_var,DVar1.value));
    FUN_100445398(uVar4,lVar5,&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  }
  return;
}



/* Address: 0x100446390 | FUN_100446390 */

void FUN_100446390(void)

{
  Deallocator DVar1;
  undefined7 extraout_var;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  DVar1 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar2 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  lVar3 = *(long *)(lVar2 + 0x40);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (lVar5 != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    lVar4 = *(long *)(unaff_x20 + 0x28);
    (**(code **)(lVar2 + 0x68))
              (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,CONCAT71(extraout_var,DVar1.value));
    FUN_100445398(lVar6 + lVar4,lVar5,
                  &stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  }
  return;
}



/* Address: 0x100446420 | FUN_100446420 */

void FUN_100446420(void)

{
  FUN_100447324();
  return;
}



/* Address: 0x100446434 | FUN_100446434 */

void FUN_100446434(void)

{
  FUN_100445578();
  return;
}



/* Address: 0x100446448 | FUN_100446448 */

void FUN_100446448(void)

{
  FUN_100445a50();
  return;
}



/* Address: 0x10044645c | FUN_10044645c */

void FUN_10044645c(void)

{
  FUN_100445dbc();
  return;
}



/* Address: 0x100446470 | FUN_100446470 */

void FUN_100446470(void)

{
  FUN_100446144();
  return;
}



/* Address: 0x100446484 | FUN_100446484 */

void FUN_100446484(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10044648c | FUN_10044648c */

undefined1  [16] FUN_10044648c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x48);
  return auVar1;
}



/* Address: 0x100446498 | thunk_FUN_100445540 */

void thunk_FUN_100445540(void)

{
  FUN_100445540();
  return;
}



/* Address: 0x10044649c | FUN_10044649c */

undefined8 FUN_10044649c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x40);
}



/* Address: 0x1004464a4 | FUN_1004464a4 */

undefined1  [16] FUN_1004464a4(undefined8 param_1,undefined1 *param_2)

{
  Encoding EVar1;
  undefined1 *puVar2;
  undefined1 *extraout_x8;
  long unaff_x21;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  EVar1 = Encoding::_typeMetadataAccessor();
  lVar4 = *(long *)(EVar1.unknown + -8);
  puVar3 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Encoding::_get_utf8(EVar1);
  puVar2 = puVar3;
  FUN_1004477a0(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,EVar1.unknown);
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    puVar2 = extraout_x8;
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x10044653c | FUN_10044653c */

void FUN_10044653c(void)

{
  FUN_100447c7c();
  return;
}



/* Address: 0x100446550 | FUN_100446550 */

void FUN_100446550(long param_1)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_100447c7c();
  if (unaff_x21 == 0) {
    if (param_1 < -0x80) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10044657c);
      (*pcVar1)();
    }
    if (0x7f < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100446580);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100446580 | FUN_100446580 */

void FUN_100446580(long param_1)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_100447c7c();
  if (unaff_x21 == 0) {
    if (param_1 < -0x8000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004465ac);
      (*pcVar1)();
    }
    if (0x7fff < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004465b0);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x1004465b0 | FUN_1004465b0 */

void FUN_1004465b0(void)

{
  FUN_100448014();
  return;
}



/* Address: 0x1004465c4 | FUN_1004465c4 */

void FUN_1004465c4(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decode();
  return;
}



/* Address: 0x1004465d8 | FUN_1004465d8 */

void FUN_1004465d8(void)

{
  FUN_100446670();
  return;
}



/* Address: 0x1004465ec | FUN_1004465ec */

void FUN_1004465ec(ulong param_1)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_100447c7c();
  if (unaff_x21 == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100446614);
      (*pcVar1)();
    }
    if (0xff < param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100446618);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100446618 | FUN_100446618 */

void FUN_100446618(ulong param_1)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_100447c7c();
  if (unaff_x21 == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100446640);
      (*pcVar1)();
    }
    if (param_1 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100446644);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100446644 | FUN_100446644 */

void FUN_100446644(ulong param_1)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_100447c7c();
  if (unaff_x21 == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10044666c);
      (*pcVar1)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100446670);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100446670 | FUN_100446670 */

void FUN_100446670(long param_1)

{
  code *pcVar1;
  long unaff_x21;
  
  FUN_100447c7c();
  if ((unaff_x21 == 0) && (param_1 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100446690);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100446690 | FUN_100446690 */

void FUN_100446690(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decode();
  return;
}



/* Address: 0x1004466a4 | FUN_1004466a4 */

void FUN_1004466a4(void)

{
  FUN_1004466b8();
  return;
}



/* Address: 0x1004466b8 | FUN_1004466b8 */

/* WARNING: Removing unreachable block (ram,0x0001004468a4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100446930 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004466b8(undefined8 param_1,undefined8 param_2,long param_3,char *param_4,void *param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  Optional OVar5;
  DecodingError DVar6;
  undefined7 extraout_var;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  _StringGuts _Var14;
  char *pcVar15;
  void *pvVar16;
  char *pcVar17;
  long lVar18;
  long *unaff_x20;
  ulong uVar19;
  code *pcVar20;
  long unaff_x21;
  long lVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  long local_110;
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined *local_b8;
  ulong local_b0;
  long local_a8 [3];
  undefined1 auStack_90 [48];
  
  pcVar15 = param_4;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)param_2 >> 8);
  local_f8 = CONCAT71(extraout_var,OVar5.value);
  local_108 = *(long *)(local_f8 + -8);
  lVar8 = (long)&local_110 - (*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = *(long *)(param_3 + -8);
  local_110 = lVar8 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((*(long *)(unaff_x20[6] + 0x20) == 0) ||
     ((pcVar17 = *(char **)(unaff_x20[6] + 0x10), *pcVar17 == '\0' && (pcVar17[1] == '\0')))) {
    DVar6 = Swift::DecodingError::typeMetadataAccessor();
    lVar8 = CONCAT71(extraout_var,DVar6.value);
    puVar13 = (undefined8 *)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar8,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar9 = &DAT_100fc70b8;
    FUN_1000f7830(&DAT_100fc70b8,&DAT_100c4ac40);
    iVar2 = *(int *)(puVar9 + 0x30);
    *puVar13 = param_2;
    lVar18 = *unaff_x20;
    _swift_beginAccess(lVar18 + 0x10,&local_d0,0,0);
    uVar10 = *(undefined8 *)(lVar18 + 0x10);
    _swift_bridgeObjectRetain(uVar10);
    Swift::DecodingError::Context::_init
              ((undefined *)((long)puVar13 + (long)iVar2),uVar10,0xd00000000000001c,
               0x8000000100da68c0,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar13,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
               ,lVar8);
    _swift_willThrow();
  }
  else {
    lVar18 = *unaff_x20;
    lVar21 = unaff_x20[8];
    local_d0 = (undefined *)0x207865646e49;
    local_c8 = &DAT_e600000000000000;
    local_100 = param_1;
    local_a8[0] = lVar21;
    SVar22 = Swift::CustomStringConvertible::get_description();
    SVar23.bridgeObject = param_5;
    SVar23.str = pcVar15;
    Swift::String::append(SVar22,SVar23);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    puVar4 = local_c8;
    puVar9 = local_d0;
    _swift_beginAccess(lVar18 + 0x10,local_a8,0x21,0);
    uVar19 = *(ulong *)(lVar18 + 0x10);
    uVar12 = uVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar18 + 0x10) = uVar19;
    local_e8 = lVar8;
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
      FUN_10044c5f4(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
      *(ulong *)(lVar18 + 0x10) = uVar12;
      uVar19 = uVar12;
    }
    uVar1 = *(ulong *)(uVar19 + 0x10);
    if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar1) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar19 + 0x18));
      FUN_10044c5f4(uVar12,uVar1 + 1,1,uVar19);
      uVar19 = uVar12;
    }
    local_b8 = &DAT_100ed5530;
    FUN_100444850();
    puVar7 = &DAT_100ed5208;
    local_b0 = uVar12;
    _swift_allocObject(&DAT_100ed5208,0x29,7);
    *(undefined **)(puVar7 + 0x10) = puVar9;
    *(undefined1 **)(puVar7 + 0x18) = puVar4;
    *(long *)(puVar7 + 0x20) = lVar21;
    puVar7[0x28] = 0;
    *(ulong *)(uVar19 + 0x10) = uVar1 + 1;
    local_d0 = puVar7;
    FUN_100076508(&local_d0,uVar19 + uVar1 * 0x28 + 0x20);
    *(ulong *)(lVar18 + 0x10) = uVar19;
    _swift_endAccess(local_a8);
    FUN_100446fe4(auStack_90,param_2,param_3,param_4);
    lVar8 = local_e8;
    if (unaff_x21 == 0) {
      FUN_100444e74(local_e8,auStack_90,param_3,param_3,param_4);
      FUN_100444974(auStack_90);
      lVar3 = local_f0;
      lVar11 = lVar8;
      (**(code **)(local_f0 + 0x30))(lVar8,1,param_3);
      lVar21 = local_110;
      if ((int)lVar11 == 1) {
        (**(code **)(local_108 + 8))(lVar8,local_f8);
        DVar6 = Swift::DecodingError::typeMetadataAccessor();
        lVar8 = CONCAT71((int7)((ulong)lVar11 >> 8),DVar6.value);
        pcVar15 = (char *)0x0;
        pvVar16 = (void *)0x0;
        puVar13 = (undefined8 *)
                  PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
        ;
        _swift_allocError();
        puVar9 = &DAT_100fc70b8;
        _Var14.unknown = &DAT_100c4ac40;
        FUN_1000f7830();
        iVar2 = *(int *)(puVar9 + 0x30);
        *puVar13 = param_2;
        local_d0 = (undefined *)0x0;
        local_c8 = (undefined1 *)0xe000000000000000;
        _swift_bridgeObjectRetain(*(undefined8 *)(lVar18 + 0x10));
        Swift::_StringGuts::grow(0x29,_Var14);
        _swift_bridgeObjectRelease(local_c8);
        local_d0 = (undefined *)0x6465746365707845;
        local_c8 = (undefined1 *)0xe900000000000020;
        SVar22 = Swift::__typeName(SUB81(param_2,0));
        SVar24.bridgeObject = pvVar16;
        SVar24.str = pcVar15;
        Swift::String::append(SVar22,SVar24);
        _swift_bridgeObjectRelease(SVar22.bridgeObject);
        SVar22.bridgeObject = (void *)0x8000000100da6870;
        SVar22.str = (char *)0xd00000000000001e;
        SVar25.bridgeObject = pvVar16;
        SVar25.str = pcVar15;
        Swift::String::append(SVar22,SVar25);
        Swift::DecodingError::Context::_init
                  ((undefined *)((long)puVar13 + (long)iVar2),puVar9,local_d0,local_c8,0);
        (**(code **)(*(long *)(lVar8 + -8) + 0x68))
                  (puVar13,*(undefined4 *)
                            PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
                   ,lVar8);
        _swift_willThrow();
      }
      else {
        pcVar20 = *(code **)(lVar3 + 0x20);
        (*pcVar20)(local_110,lVar8,param_3);
        (*pcVar20)(local_100,lVar21,param_3);
      }
    }
    _swift_beginAccess(lVar18 + 0x10,local_a8,0x21,0);
    FUN_100447144(&local_d0);
    _swift_endAccess(local_a8);
    FUN_100004594(&local_d0);
  }
  return;
}



/* Address: 0x100446b5c | FUN_100446b5c */

void FUN_100446b5c(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446b70 | FUN_100446b70 */

void FUN_100446b70(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446b84 | FUN_100446b84 */

void FUN_100446b84(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446b98 | FUN_100446b98 */

ulong FUN_100446b98(ulong param_1)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100446bb0 | FUN_100446bb0 */

void FUN_100446bb0(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446bc4 | FUN_100446bc4 */

void FUN_100446bc4(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446bd8 | FUN_100446bd8 */

uint FUN_100446bd8(uint param_1)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return param_1 & 0xffffff;
}



/* Address: 0x100446bf0 | FUN_100446bf0 */

ulong FUN_100446bf0(ulong param_1)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return param_1 & 0xffffffffff;
}



/* Address: 0x100446c08 | FUN_100446c08 */

void FUN_100446c08(void)

{
  (extension_Swift)::Swift::UnkeyedDecodingContainer::_decodeIfPresent();
  return;
}



/* Address: 0x100446c1c | FUN_100446c1c */

void FUN_100446c1c(undefined8 param_1,undefined8 param_2)

{
  FUN_100446cc0(param_1,param_2,PTR__decodeIfPresent_100ead750);
  return;
}


