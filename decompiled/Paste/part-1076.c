/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b79dac | FUN_100b79dac */

String FUN_100b79dac(void)

{
  String SVar1;
  
  FUN_100b79e24();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b79dd4 | FUN_100b79dd4 */

String FUN_100b79dd4(void)

{
  String SVar1;
  
  FUN_100b79e24();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b79dfc | FUN_100b79dfc */

void FUN_100b79dfc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100b79834();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100b79e24 | FUN_100b79e24 */

void FUN_100b79e24(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101044ff0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99e6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99e6c,&DAT_100f37168);
  DAT_101044ff0 = pTVar1;
  return;
}



/* Address: 0x100b79e64 | FUN_100b79e64 */

void FUN_100b79e64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_101044ff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101044808;
  FUN_100b6734c(&DAT_101044808);
  local_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puVar2 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_18);
  DAT_101044ff8 = puVar2;
  return;
}



/* Address: 0x100b79ec4 | FUN_100b79ec4 */

int FUN_100b79ec4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b79f44;
  }
  if (param_2 < 0xfe) {
LAB_100b79f38:
    iVar2 = *param_1 - 3;
    if (*param_1 < 3) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b79f1c:
      if (uVar1 == 0) goto LAB_100b79f38;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b79f1c;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b79f38;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 3;
  }
LAB_100b79f44:
  return iVar2 + 1;
}



/* Address: 0x100b79f4c | FUN_100b79f4c */

void FUN_100b79f4c(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 2) {
    uVar2 = 4;
  }
  if (param_3 + 2 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfd < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x000100b79f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b79f98 + (ulong)(byte)(&DAT_100c99d25)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100b79fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b79fcc + (ulong)(byte)(&DAT_100c99d20)[uVar1] * 4))();
  return;
}



/* Address: 0x100b7a008 | FUN_100b7a008 */

undefined1  [16] FUN_100b7a008(void)

{
  return ZEXT816(0x100f37168);
}



/* Address: 0x100b7a018 | thunk_FUN_100b7a01c */

void thunk_FUN_100b7a01c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99e44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99e44,&DAT_100f37168);
  DAT_101045000 = pTVar1;
  return;
}



/* Address: 0x100b7a01c | FUN_100b7a01c */

void FUN_100b7a01c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045000 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99e44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99e44,&DAT_100f37168);
  DAT_101045000 = pTVar1;
  return;
}



/* Address: 0x100b7a05c | thunk_FUN_100b7a060 */

void thunk_FUN_100b7a060(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99da4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99da4,&DAT_100f37168);
  DAT_101045008 = pTVar1;
  return;
}



/* Address: 0x100b7a060 | FUN_100b7a060 */

void FUN_100b7a060(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045008 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99da4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99da4,&DAT_100f37168);
  DAT_101045008 = pTVar1;
  return;
}



/* Address: 0x100b7a0a0 | thunk_FUN_100b7a0a4 */

void thunk_FUN_100b7a0a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99d7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99d7c,&DAT_100f37168);
  DAT_101045010 = pTVar1;
  return;
}



/* Address: 0x100b7a0a4 | FUN_100b7a0a4 */

void FUN_100b7a0a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045010 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c99d7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c99d7c,&DAT_100f37168);
  DAT_101045010 = pTVar1;
  return;
}



/* Address: 0x100b7a0e4 | FUN_100b7a0e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b7a0e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = SentryOptions::enableSwizzling;
  FUN_100b78ca0(param_1 + SentryOptions::enableSwizzling,auStack_48);
  lVar1 = SentryOptions::enableFileManagerSwizzling;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    FUN_100b78ca0(param_1 + SentryOptions::enableFileManagerSwizzling,auStack_60);
    if (*(char *)(param_1 + lVar1) == '\x01') {
      _objc_msgSend((ID)&objc::class_t::SentryNSFileManagerSwizzlingHelper,"swizzleWithTracker:",
                    param_2);
      return;
    }
    FUN_100b84dac(0);
    FUN_100b7a234("ileManagerSwizzling.swift");
  }
  else {
    FUN_100b84dac(0);
    FUN_100b7a234("tryNSFileManagerSwizzling");
  }
  FUN_100b84df8();
  return;
}



/* Address: 0x100b7a1f4 | _TtC6Sentry28SentryNSFileManagerSwizzling::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry28SentryNSFileManagerSwizzling::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b7a214 | FUN_100b7a214 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b7a214(void)

{
  return ZEXT816(0x100f9fd58);
}



/* Address: 0x100b7a234 | FUN_100b7a234 */

undefined8 FUN_100b7a234(void)

{
  return 1;
}



/* Address: 0x100b7a24c | thunk_FUN_100b7a280 */

void thunk_FUN_100b7a280(void)

{
  FUN_100b7a280();
  return;
}



/* Address: 0x100b7a250 | FUN_100b7a250 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b7a250(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return param_1;
  }
  _swift_bridgeObjectRetain(param_2);
  return param_2;
}



/* Address: 0x100b7a260 | FUN_100b7a260 */

void FUN_100b7a260(undefined8 *param_1)

{
  FUN_100b7a270(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100b7a270 | FUN_100b7a270 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b7a270(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return 0;
  }
  _swift_bridgeObjectRelease(param_2);
  return param_2;
}



/* Address: 0x100b7a280 | FUN_100b7a280 */

undefined8 * FUN_100b7a280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100b7a250(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100b7a2c8 | FUN_100b7a2c8 */

undefined8 * FUN_100b7a2c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100b7a250(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar6 = *(undefined1 *)(param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_100b7a270(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100b7a31c | FUN_100b7a31c */

undefined8 * FUN_100b7a31c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = *(undefined1 *)(param_1 + 2);
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_100b7a270(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100b7a360 | FUN_100b7a360 */

int FUN_100b7a360(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0xff) || (*(char *)((long)param_1 + 0x11) == '\0')) {
    uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
    if (*(byte *)(param_1 + 4) < 2) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *param_1 + 0xfe;
  }
  return uVar1 + 1;
}



/* Address: 0x100b7a3a0 | FUN_100b7a3a0 */

void FUN_100b7a3a0(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = param_2 & 1;
  return;
}



/* Address: 0x100b7a3ac | FUN_100b7a3ac */

undefined1  [16] FUN_100b7a3ac(void)

{
  return ZEXT816(0x100f372b8);
}



/* Address: 0x100b7a3bc | FUN_100b7a3bc */

undefined * FUN_100b7a3bc(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  CharacterSet CVar5;
  undefined *puVar6;
  String *pSVar7;
  CharacterSet CVar8;
  undefined *puVar9;
  char **ppcVar10;
  undefined *puVar11;
  void *pvVar12;
  CharacterSet in;
  long lVar13;
  char *pcVar14;
  String SVar15;
  char *local_f0;
  long local_e8;
  char *local_e0;
  undefined8 uStack_d8;
  String local_d0;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined **local_b0;
  char *local_a8;
  undefined8 uStack_a0;
  long local_90;
  undefined1 auStack_80 [32];
  
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  local_e8 = *(long *)(CVar5.unknown + -8);
  in.unknown = (undefined *)
               ((long)&local_f0 - (*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_10001a348(param_1,&local_a8);
  if (local_90 == 0) {
    FUN_100b74780(&local_a8,&DAT_101044760);
  }
  else {
    puVar6 = &DAT_101045048;
    FUN_100b6730c(&DAT_101045048);
    puVar3 = PTR___type_metadata_for_Any_100eae0c0;
    pSVar7 = &local_d0;
    FUN_100b6f878(pSVar7,&local_a8,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6);
    if (((ulong)pSVar7 & 1) != 0) {
      pcVar14 = local_d0.str;
      lVar13 = *(long *)(local_d0.str + 0x10);
      if (lVar13 != 0) {
        local_f0 = local_d0.str;
        _swift_bridgeObjectRetain();
        puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
        puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          pcVar14 = pcVar14 + 0x20;
          FUN_10000cbfc(pcVar14,auStack_80);
          FUN_100b7a6cc();
          CVar8.unknown = (undefined *)&local_e0;
          FUN_100b6f878(CVar8.unknown,&local_a8,puVar3 + 8,puVar6);
          uVar4 = uStack_d8;
          if ((int)CVar8.unknown == 0) {
            FUN_100b7a6cc();
            puVar9 = (undefined *)0x0;
            FUN_100b7a680();
            ppcVar10 = &local_e0;
            FUN_100b6f878(ppcVar10,&local_a8,puVar3 + 8,puVar9);
            if (((ulong)ppcVar10 & 1) == 0) {
              local_d0 = (String)ZEXT816(0);
              local_b8 = (undefined *)0x0;
              uStack_c0 = 0;
              local_b0 = (undefined **)0x0;
            }
            else {
              local_b0 = &PTR_PTR_100f3cc00;
              local_d0.str = local_e0;
              local_b8 = puVar9;
            }
          }
          else {
            local_a8 = local_e0;
            uStack_a0 = uStack_d8;
            Foundation::CharacterSet::get_whitespacesAndNewlines(CVar8);
            FUN_100008378();
            SVar15 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
            pvVar12 = SVar15.bridgeObject;
            (**(code **)(local_e8 + 8))(in.unknown,CVar5.unknown);
            _swift_bridgeObjectRelease(uVar4);
            uVar2 = (ulong)SVar15.str & 0xffffffffffff;
            if (((ulong)pvVar12 & 0x2000000000000000) != 0) {
              uVar2 = (ulong)pvVar12 >> 0x38 & 0xf;
            }
            if (uVar2 == 0) {
              _swift_bridgeObjectRelease(pvVar12);
              local_b0 = (undefined **)0x0;
              local_d0 = (String)ZEXT816(0);
              local_b8 = (undefined *)0x0;
              uStack_c0 = 0;
            }
            else {
              local_b8 = puVar6;
              local_b0 = &PTR_PTR_100f3cbf0;
              local_d0 = SVar15;
            }
          }
          FUN_100004594(auStack_80);
          if (local_b8 == (undefined *)0x0) {
            FUN_100b74780(&local_d0,&DAT_101045058);
          }
          else {
            FUN_100076508(&local_d0,&local_a8);
            FUN_100076508(&local_a8,&local_d0);
            puVar9 = puVar11;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)puVar9 & 1) == 0) {
              plVar1 = (long *)(puVar11 + 0x10);
              puVar11 = (undefined *)0x0;
              FUN_100b7a6c0(0,*plVar1 + 1);
            }
            uVar2 = *(ulong *)(puVar11 + 0x10);
            if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
              FUN_100b7a6c0(puVar11,uVar2 + 1);
            }
            *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
            FUN_100076508(&local_d0,puVar11 + uVar2 * 0x28 + 0x20);
          }
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        _swift_bridgeObjectRelease_n(local_f0,2);
        return puVar11;
      }
      _swift_bridgeObjectRelease();
      return PTR___swiftEmptyArrayStorage_100eae0d8;
    }
  }
  return (undefined *)0x0;
}



/* Address: 0x100b7a680 | FUN_100b7a680 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b7a680(void)

{
  undefined *puVar1;
  
  if (DAT_101045050 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSRegularExpression;
    _swift_getObjCClassMetadata();
    DAT_101045050 = puVar1;
  }
  return;
}



/* Address: 0x100b7a6bc | thunk_FUN_100b7a280 */

void thunk_FUN_100b7a280(void)

{
  FUN_100b7a280();
  return;
}



/* Address: 0x100b7a6c0 | FUN_100b7a6c0 */

void FUN_100b7a6c0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6e7cc(param_1,param_2,1);
  return;
}



/* Address: 0x100b7a6cc | FUN_100b7a6cc */

void FUN_100b7a6cc(void)

{
  long unaff_x29;
  
  FUN_10000cbfc(unaff_x29 + -0x70,unaff_x29 + -0x98);
  return;
}



/* Address: 0x100b7a6d8 | FUN_100b7a6d8 */

undefined1  [16] FUN_100b7a6d8(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_18;
  
  puVar3 = &DAT_e700000000000000;
  uVar2 = 0x747865746e6f63;
  switch(param_1) {
  case 0:
    goto switchD_100b7a70c_caseD_0;
  case 1:
    puVar3 = &DAT_e400000000000000;
    uVar2 = 0x72657375;
switchD_100b7a70c_caseD_0:
    auVar4._8_8_ = puVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  case 2:
    auVar6._8_8_ = &DAT_e400000000000000;
    auVar6._0_8_ = 0x74736964;
    return auVar6;
  case 3:
    auVar7._8_8_ = 0xeb00000000746e65;
    auVar7._0_8_ = 0x6d6e6f7269766e65;
    return auVar7;
  case 4:
    auVar5._8_8_ = &DAT_e400000000000000;
    auVar5._0_8_ = 0x73676174;
    return auVar5;
  case 5:
    auVar8._8_8_ = &DAT_e600000000000000;
    auVar8._0_8_ = 0x736172747865;
    return auVar8;
  case 6:
    auVar9._8_8_ = 0xeb00000000746e69;
    auVar9._0_8_ = 0x72707265676e6966;
    return auVar9;
  default:
    local_18 = param_1;
    Swift::__diagnoseUnexpectedEnumCaseValue
              (&DAT_100f372d8,&local_18,&DAT_100f372d8,PTR___type_metadata_for_Swift_UInt_100eacb00)
    ;
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7a7c8);
    (*pcVar1)();
  }
}



/* Address: 0x100b7a7c8 | FUN_100b7a7c8 */

undefined1  [16] FUN_100b7a7c8(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 7) {
    uVar1 = param_1;
  }
  auVar2[8] = 6 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Address: 0x100b7a7d8 | FUN_100b7a7d8 */

void FUN_100b7a7d8(void)

{
  FUN_100b6730c(&DAT_1010450a8);
  _swift_initStaticObject();
  return;
}



/* Address: 0x100b7a7fc | FUN_100b7a7fc */

void FUN_100b7a7fc(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b7a7c8();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b7a82c | FUN_100b7a82c */

void FUN_100b7a82c(undefined8 *param_1,undefined8 param_2)

{
  FUN_100b7a7d8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b7a850 | FUN_100b7a850 */

ID FUN_100b7a850(long param_1)

{
  ID IVar1;
  long unaff_x20;
  
  if (param_1 == 0) {
    FUN_100b7ba08();
    _swift_deallocPartialClassInstance();
    IVar1 = 0;
  }
  else {
    *(long *)(unaff_x20 + _TtC6Sentry26SentryScopePersistentStore::fileManager) = param_1;
    FUN_100b7ba08();
    IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  }
  return IVar1;
}



/* Address: 0x100b7a8b0 | FUN_100b7a8b0 */

void FUN_100b7a8b0(void)

{
  FUN_100b7a8f0(FUN_100b7adec);
  return;
}



/* Address: 0x100b7a8bc | _TtC6Sentry26SentryScopePersistentStore::moveAllCurrentStateToPreviousState */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryScopePersistentStore::moveAllCurrentStateToPreviousState
               (ID param_1,SEL param_2)

{
  FUN_100b7a8b0(param_1);
  return;
}



/* Address: 0x100b7a8e4 | FUN_100b7a8e4 */

void FUN_100b7a8e4(void)

{
  FUN_100b7a8f0(FUN_100b7a938);
  return;
}



/* Address: 0x100b7a8f0 | FUN_100b7a8f0 */

void FUN_100b7a8f0(code *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_101043070 != 0) {
    lVar1 = DAT_101043070;
    puVar2 = &DAT_101043080;
    do {
      (*param_1)(*puVar2);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Address: 0x100b7a938 | FUN_100b7a938 */

void FUN_100b7a938(URL param_1,undefined8 param_2,char *param_3,void *param_4)

{
  _StringGuts _Var1;
  NSString *pNVar2;
  long extraout_x8;
  long extraout_x9;
  ID self;
  long unaff_x20;
  long lVar3;
  String SVar4;
  String SVar5;
  
  _Var1.unknown = param_1.unknown;
  FUN_100b7c984();
  lVar3 = *(long *)(_Var1.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar3 + 0x40));
  FUN_100b7b828(extraout_x9 - extraout_x8);
  SVar4 = Foundation::URL::get_path(param_1);
  (**(code **)(lVar3 + 8))(extraout_x9 - extraout_x8);
  FUN_100b6f870();
  Swift::_StringGuts::grow(0x21,_Var1);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar4,SVar5);
  FUN_100b84df8(1,0xd00000000000001f,0x8000000100dca2c0,0xd000000000000067,0x8000000100dca250,0x3f);
  _swift_bridgeObjectRelease(0x8000000100dca2c0);
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryScopePersistentStore::fileManager);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b6f980();
  _objc_msgSend(self,"removeFileAtPath:",pNVar2);
  FUN_100b6f868();
  return;
}



/* Address: 0x100b7aa7c | FUN_100b7aa7c */

void FUN_100b7aa7c(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b384(0,param_1,param_1,0x747865746e6f63,&DAT_e700000000000000,FUN_100b7bb08);
  return;
}



/* Address: 0x100b7aabc | _TtC6Sentry26SentryScopePersistentStore::readPreviousContextFromDisk */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousContextFromDisk(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b7aa7c();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    FUN_100b6730c(&DAT_101044968);
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b7ab30 | FUN_100b7ab30 */

void FUN_100b7ab30(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b5f0(1,param_1,param_1,thunk_FUN_100be778c);
  return;
}



/* Address: 0x100b7ab5c | _TtC6Sentry26SentryScopePersistentStore::readPreviousUserFromDisk */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousUserFromDisk(ID param_1,SEL param_2)

{
  FUN_100b7ab30();
  return param_1;
}



/* Address: 0x100b7ab90 | FUN_100b7ab90 */

void FUN_100b7ab90(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b0f4(2,param_1,param_1);
  return;
}



/* Address: 0x100b7abb4 | _TtC6Sentry26SentryScopePersistentStore::readPreviousDistFromDisk */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousDistFromDisk(ID param_1,SEL param_2)

{
  FUN_100b7abf0(param_1,param_2,FUN_100b7ab90);
  return param_1;
}



/* Address: 0x100b7abc0 | FUN_100b7abc0 */

void FUN_100b7abc0(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b0f4(3,param_1,param_1);
  return;
}



/* Address: 0x100b7abe4 | _TtC6Sentry26SentryScopePersistentStore::readPreviousEnvironmentFromDisk */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousEnvironmentFromDisk(ID param_1,SEL param_2)

{
  FUN_100b7abf0(param_1,param_2,FUN_100b7abc0);
  return param_1;
}



/* Address: 0x100b7abf0 | FUN_100b7abf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7abf0(undefined8 param_1,long param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)(param_1);
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b6f838();
  }
  FUN_100b6fd0c(pNVar1);
  return;
}



/* Address: 0x100b7ac50 | FUN_100b7ac50 */

void FUN_100b7ac50(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b384(4,param_1,param_1,0x73676174,&DAT_e400000000000000,FUN_100b7bff0);
  return;
}



/* Address: 0x100b7ac88 | _TtC6Sentry26SentryScopePersistentStore::readPreviousTagsFromDisk */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousTagsFromDisk(ID param_1,SEL param_2)

{
  FUN_100b7acf0(param_1,param_2,FUN_100b7ac50,PTR___type_metadata_for_Swift_String_100eac208);
  return param_1;
}



/* Address: 0x100b7ac9c | FUN_100b7ac9c */

void FUN_100b7ac9c(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b384(5,param_1,param_1,0x736172747865,&DAT_e600000000000000,FUN_100b7c4c4);
  return;
}



/* Address: 0x100b7acd8 | _TtC6Sentry26SentryScopePersistentStore::readPreviousExtrasFromDisk */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousExtrasFromDisk(ID param_1,SEL param_2)

{
  FUN_100b7acf0(param_1,param_2,FUN_100b7ac9c,PTR___type_metadata_for_Any_100eae0c0 + 8);
  return param_1;
}



/* Address: 0x100b7acf0 | FUN_100b7acf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7acf0(long param_1,undefined8 param_2,code *param_3)

{
  NSDictionary *pNVar1;
  
  (*param_3)();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  FUN_100b6fd0c(pNVar1);
  return;
}



/* Address: 0x100b7ad64 | FUN_100b7ad64 */

void FUN_100b7ad64(undefined8 param_1)

{
  FUN_10021b704();
  FUN_100b7b5f0(6,param_1,param_1,FUN_100bc756c);
  return;
}



/* Address: 0x100b7ad90 | _TtC6Sentry26SentryScopePersistentStore::readPreviousFingerprintFromDisk */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryScopePersistentStore::readPreviousFingerprintFromDisk(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100b7ad64();
  if (param_1 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b7adec | FUN_100b7adec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7adec(char *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  ID self;
  _StringGuts unaff_x30;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  FUN_100b6fd78();
  pcVar1 = param_1;
  FUN_100b7c984();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(pcVar1 + -8) + 0x40));
  FUN_100b6f870();
  Swift::_StringGuts::grow(0x22,unaff_x30);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar1 = param_1;
  FUN_100b7a6d8();
  SVar4.bridgeObject = unaff_x30.unknown;
  SVar4.str = pcVar1;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar4,SVar7);
  FUN_100b7c97c();
  FUN_100b7c98c(" file to previous ");
  pcVar1 = param_1;
  FUN_100b7a6d8();
  SVar5.bridgeObject = unaff_x30.unknown;
  SVar5.str = pcVar1;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar5,SVar8);
  FUN_100b7c97c();
  SVar6.bridgeObject = &DAT_e500000000000000;
  SVar6.str = (char *)0x656c696620;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar6,SVar9);
  FUN_100b7caa4(
               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Persistence/SentryScopePersistentStore.swift"
               );
  FUN_100b84df8();
  FUN_100b7c97c();
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryScopePersistentStore::fileManager);
  FUN_100b7b828(extraout_x9 - extraout_x8,param_1);
  FUN_100b7ca08();
  FUN_100b7ca18();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b7c97c();
  FUN_100b7b8c8(extraout_x9 - extraout_x8,param_1);
  FUN_100b7ca08();
  FUN_100b7ca18();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b6f980();
  _objc_msgSend(self,"moveState:toPreviousState:",pNVar2,pNVar3);
  FUN_100b56ea0(0);
  return;
}



/* Address: 0x100b7af7c | FUN_100b7af7c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7af7c(URL param_1,undefined8 param_2,char *param_3)

{
  _StringGuts _Var1;
  Data DVar2;
  char *pcVar3;
  NSData *pNVar4;
  NSString *pNVar5;
  char *pcVar6;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  ID self;
  long lVar7;
  void *unaff_x30;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  FUN_100b6fd78();
  _Var1.unknown = param_1.unknown;
  pcVar6 = param_3;
  FUN_100b7c984();
  lVar7 = *(long *)(_Var1.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar7 + 0x40));
  FUN_100b7b828(extraout_x9 - extraout_x8);
  SVar8 = Foundation::URL::get_path(param_1);
  DVar2.unknown = SVar8.str;
  (**(code **)(lVar7 + 8))(extraout_x9 - extraout_x8);
  FUN_100b6f870();
  Swift::_StringGuts::grow(0x1e,_Var1);
  pcVar3 = (char *)0xe000000000000000;
  _swift_bridgeObjectRelease();
  FUN_100b7c9d8();
  SVar9.bridgeObject = _Var1.unknown;
  SVar9.str = pcVar3;
  SVar10.bridgeObject = unaff_x30;
  SVar10.str = pcVar6;
  Swift::String::append(SVar9,SVar10);
  FUN_100b7ca10();
  FUN_100b7c98c(" to disk at path: ");
  SVar11.bridgeObject = unaff_x30;
  SVar11.str = pcVar6;
  Swift::String::append(SVar8,SVar11);
  FUN_100b7caa4(
               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Persistence/SentryScopePersistentStore.swift"
               );
  FUN_100b84df8();
  FUN_100b7ca10();
  if ((ulong)param_3 >> 0x3c < 0xf) {
    self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryScopePersistentStore::fileManager);
    FUN_100b7ca98();
    FUN_100b6d4e0();
    FUN_100b7ca98();
    pNVar4 = Foundation::Data::_bridgeToObjectiveC(DVar2);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b6f8ec();
    _objc_msgSend(self,"writeData:toPath:",pNVar4,pNVar5);
    FUN_100b7ca38(0);
    FUN_100b7ca98();
    FUN_10003bf18();
  }
  else {
    FUN_100b6f8ec();
  }
  FUN_100b56ea0();
  return;
}



/* Address: 0x100b7b0f4 | FUN_100b7b0f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_100b7b0f4(char *param_1,undefined8 param_2,char *param_3)

{
  Encoding EVar1;
  NSString *pNVar2;
  Encoding EVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x9;
  long lVar7;
  void *unaff_x30;
  String SVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  String SVar12;
  
  FUN_100b6fd78();
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  EVar1 = Encoding::_typeMetadataAccessor();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(EVar1.unknown + -8) + 0x40));
  FUN_100b7c984();
  lVar7 = *(long *)(EVar1.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar7 + 0x40));
  FUN_100b7b8c8(extraout_x9 - extraout_x8,param_1);
  FUN_100b7ca08();
  FUN_100b7ca24(*(undefined8 *)(lVar7 + 8));
  FUN_100b6f870();
  FUN_100b7ca84();
  FUN_100b7ca7c();
  FUN_100b7c954("Reading previous ");
  FUN_100b7a6d8(param_1);
  FUN_100b7ca74();
  FUN_100b6f8ec();
  SVar8.bridgeObject = (void *)0xef203a6874617020;
  SVar8.str = (char *)0x746120656c696620;
  SVar11.bridgeObject = unaff_x30;
  SVar11.str = param_3;
  Swift::String::append(SVar8,SVar11);
  FUN_100b7ca5c();
  pcVar5 = (char *)0xe000000000000000;
  FUN_100b7c940(1,0);
  FUN_100b6f8ec();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pcVar4 = "readDataFromPath:error:";
  FUN_100b7c9f8();
  EVar1.unknown = pNVar2;
  FUN_100b6fa78();
  FUN_100b7ca48();
  if (pNVar2 == (NSString *)0x0) {
    Foundation::__convertNSErrorToError();
    FUN_100b6fa78();
    _swift_willThrow();
    FUN_100b7ca40();
    FUN_100b7c914("Failed to read previous ");
    FUN_100b7a6d8();
    SVar9.bridgeObject = pcVar4;
    SVar9.str = param_1;
    SVar12.bridgeObject = unaff_x30;
    SVar12.str = pcVar5;
    Swift::String::append(SVar9,SVar12);
    FUN_100b6f980();
    FUN_100b7c8d4();
    FUN_100b7ca5c();
    FUN_100b7ca10();
    FUN_100b7c8f8();
    FUN_100b6730c(&DAT_101044978);
    FUN_100b7c9b8();
    FUN_100b7c92c(4,0,0xe000000000000000);
    _swift_errorRelease(EVar1.unknown);
    FUN_100b7c9f0();
    FUN_100b6f980();
    EVar1.unknown = (undefined *)0x0;
    pcVar4 = (char *)0x0;
  }
  else {
    FUN_100b7ca10();
    FUN_100b7ca30();
    EVar3.unknown = EVar1.unknown;
    FUN_100b6f868();
    Encoding::_get_utf8(EVar3);
    (extension_Foundation)::Swift::String::_init(EVar1);
    FUN_100b7ca8c();
    FUN_100b7c9f0();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    auVar10._8_8_ = pcVar4;
    auVar10._0_8_ = EVar1.unknown;
    return auVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b7b384 | FUN_100b7b384 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b7b384(URL param_1,long param_2,char *param_3,void *param_4,undefined8 param_5,
                  code *param_6)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x9;
  char *pcVar7;
  ID self;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  FUN_100b6fd78();
  local_8 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = param_1.unknown;
  pvVar5 = param_4;
  FUN_100b7c984();
  lVar8 = *(long *)(puVar1 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar8 + 0x40));
  pcVar7 = (char *)(extraout_x9 - extraout_x8);
  FUN_100b7b8c8(pcVar7);
  Foundation::URL::get_path(param_1);
  (**(code **)(lVar8 + 8))();
  FUN_100b6f870();
  FUN_100b7c9a8();
  FUN_100b7ca84();
  FUN_100b7ca7c();
  FUN_100b7c954("Reading previous ");
  FUN_100b7c9d8();
  SVar9.bridgeObject = puVar1;
  SVar9.str = pcVar7;
  SVar12.bridgeObject = pvVar5;
  SVar12.str = param_3;
  Swift::String::append(SVar9,SVar12);
  FUN_100b6f838();
  SVar10.bridgeObject = (void *)0xef203a6874617020;
  SVar10.str = (char *)0x746120656c696620;
  SVar13.bridgeObject = pvVar5;
  SVar13.str = param_3;
  Swift::String::append(SVar10,SVar13);
  FUN_100b7c970();
  pcVar2 = &DAT_00000001;
  FUN_100b7c940(1,local_18,uStack_10);
  FUN_100b6f838();
  self = *(ID *)(param_2 + _TtC6Sentry26SentryScopePersistentStore::fileManager);
  FUN_100b7ca68();
  local_18 = 0;
  pcVar4 = "readDataFromPath:error:";
  puVar6 = &local_18;
  pcVar3 = (char *)_objc_msgSend(self,"readDataFromPath:error:");
  pcVar7 = pcVar3;
  FUN_100b7ca38();
  FUN_100b7ca48();
  if (pcVar3 == (char *)0x0) {
    Foundation::__convertNSErrorToError();
    pcVar3 = pcVar7;
    FUN_100b7ca38();
    _swift_willThrow();
    FUN_100b7c9a8();
    FUN_100b7ca40();
    FUN_100b7c914("Failed to read previous ");
    FUN_100b7c9d8();
    SVar11.bridgeObject = pcVar4;
    SVar11.str = pcVar3;
    SVar14.bridgeObject = puVar6;
    SVar14.str = pcVar2;
    Swift::String::append(SVar11,SVar14);
    FUN_100b6f838();
    FUN_100b7c8d4();
    FUN_100b7c970();
    FUN_100b7c97c();
    FUN_100b7c8f8();
    FUN_100b6730c(&DAT_101044978);
    FUN_100b7c9b8();
    FUN_100b7c92c(4,local_18,uStack_10);
    _swift_errorRelease(pcVar7);
    FUN_100b7c9f0();
    FUN_100b6f838();
    pcVar2 = (char *)0x0;
  }
  else {
    FUN_100b7c97c();
    FUN_100b7ca30();
    FUN_100b6f868();
    pcVar2 = pcVar7;
    (*param_6)(pcVar7,pcVar4,param_4,param_5);
    FUN_10003bf2c(pcVar7,pcVar4);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_8) {
    FUN_100b56ea0(pcVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


