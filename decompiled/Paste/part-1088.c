/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b8b1d8 | FUN_100b8b1d8 */

void FUN_100b8b1d8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100b8ad74();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100b8b200 | FUN_100b8b200 */

void FUN_100b8b200(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b01c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b01c,&DAT_100f37f50);
  DAT_101045b80 = pTVar1;
  return;
}



/* Address: 0x100b8b240 | FUN_100b8b240 */

void FUN_100b8b240(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar2 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfe < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xff) {
                    /* WARNING: Could not recover jumptable at 0x000100b8b288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b8b28c + (ulong)(byte)(&DAT_100c9aed5)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100b8b2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b8b2c0 + (ulong)(byte)(&DAT_100c9aed0)[uVar1] * 4))();
  return;
}



/* Address: 0x100b8b2fc | FUN_100b8b2fc */

undefined1  [16] FUN_100b8b2fc(void)

{
  return ZEXT816(0x100f37f50);
}



/* Address: 0x100b8b30c | thunk_FUN_100b8b310 */

void thunk_FUN_100b8b310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9aff4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9aff4,&DAT_100f37f50);
  DAT_101045b88 = pTVar1;
  return;
}



/* Address: 0x100b8b310 | FUN_100b8b310 */

void FUN_100b8b310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9aff4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9aff4,&DAT_100f37f50);
  DAT_101045b88 = pTVar1;
  return;
}



/* Address: 0x100b8b350 | thunk_FUN_100b8b354 */

void thunk_FUN_100b8b354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9af54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9af54,&DAT_100f37f50);
  DAT_101045b90 = pTVar1;
  return;
}



/* Address: 0x100b8b354 | FUN_100b8b354 */

void FUN_100b8b354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9af54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9af54,&DAT_100f37f50);
  DAT_101045b90 = pTVar1;
  return;
}



/* Address: 0x100b8b394 | thunk_FUN_100b8b398 */

void thunk_FUN_100b8b398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9af2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9af2c,&DAT_100f37f50);
  DAT_101045b98 = pTVar1;
  return;
}



/* Address: 0x100b8b398 | FUN_100b8b398 */

void FUN_100b8b398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045b98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9af2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9af2c,&DAT_100f37f50);
  DAT_101045b98 = pTVar1;
  return;
}



/* Address: 0x100b8b3d8 | FUN_100b8b3d8 */

void FUN_100b8b3d8(void)

{
  FUN_100b8b440(0,0x3ff0000000000000);
  return;
}



/* Address: 0x100b8b3e4 | _TtC6Sentry12SentryRandom::nextNumber */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry12SentryRandom::nextNumber(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100b8b3d8(param_1);
  return in_d0;
}



/* Address: 0x100b8b420 | _TtC6Sentry12SentryRandom::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentryRandom::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b8b440 | FUN_100b8b440 */

double FUN_100b8b440(double param_1,double param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((ulong)ABS(param_2 - param_1) < 0x7ff0000000000000) {
    uVar2 = 0x20000000000001;
    FUN_100b8b4d4();
    if (uVar2 != 0x20000000000000) {
      param_2 = (param_2 - param_1) * ((double)uVar2 / 9007199254740992.0) + param_1;
    }
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8b4b4);
  (*pcVar1)();
}



/* Address: 0x100b8b4b4 | FUN_100b8b4b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8b4b4(void)

{
  return ZEXT816(0x100fa0ea8);
}



/* Address: 0x100b8b4d4 | FUN_100b8b4d4 */

undefined8 FUN_100b8b4d4(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong local_28;
  
  if (param_1 != 0) {
    local_28 = 0;
    _swift_stdlib_random(&local_28,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_28;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1;
    uVar6 = SUB168(auVar1 * auVar3,8);
    if (local_28 * param_1 < param_1) {
      uVar7 = 0;
      if (param_1 != 0) {
        uVar7 = -param_1 / param_1;
      }
      uVar7 = -param_1 - uVar7 * param_1;
      if (local_28 * param_1 < uVar7) {
        do {
          local_28 = 0;
          _swift_stdlib_random(&local_28,8);
        } while (local_28 * param_1 < uVar7);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = local_28;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = param_1;
        uVar6 = SUB168(auVar2 * auVar4,8);
      }
    }
    return uVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8b55c);
  (*pcVar5)();
}



/* Address: 0x100b8b55c | FUN_100b8b55c */

void FUN_100b8b55c(undefined8 param_1,undefined8 param_2,CharacterSet param_3)

{
  CharacterSet CVar1;
  String charactersIn;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  FUN_1000ce204(CVar1.unknown,&DAT_101045bc8);
  FUN_1000cd990(CVar1.unknown,&DAT_101045bc8);
  Foundation::CharacterSet::get_alphanumerics(CVar1);
  charactersIn.bridgeObject = (void *)0xe300000000000000;
  charactersIn.str = (char *)0x2e5f2d;
  Foundation::CharacterSet::insert(charactersIn,param_3);
  return;
}



/* Address: 0x100b8b5b8 | FUN_100b8b5b8 */

/* WARNING: Removing unreachable block (ram,0x000100b8ba20) */
/* WARNING: Type propagation algorithm not settling */

String FUN_100b8b5b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  CharacterSet CVar7;
  undefined *puVar8;
  CharacterSet CVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long extraout_x8;
  ulong *puVar14;
  ulong uVar15;
  long extraout_x9;
  char *pcVar16;
  ulong uVar17;
  CharacterSet withAllowedCharacters;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined *local_d0;
  char *local_c8;
  ulong *local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  char *local_90;
  long local_88;
  ulong local_80;
  undefined *local_70;
  undefined *puStack_68;
  
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  local_b0 = *(long *)(CVar7.unknown + -8);
  withAllowedCharacters.unknown =
       auStack_e0 + -(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined *)0x0;
  puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100089044(0,*(undefined8 *)(param_1 + 0x10),0);
  local_c0 = (ulong *)(param_1 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((long)uVar15 < 0x40) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *local_c0;
  local_b8 = uVar15 + 0x3f >> 6;
  local_d0 = puVar8;
  _swift_bridgeObjectRetain(param_1);
  local_c8 = (char *)0x0;
  local_d8 = param_1 + 0x78;
  lVar13 = 0;
  local_a8 = param_1;
  local_90 = (char *)CVar7;
LAB_100b8b680:
  do {
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    if (uVar17 == 0) {
      bVar5 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8ba14);
        (*pcVar3)();
      }
      cVar4 = SBORROW8(lVar13,local_b8);
      cVar6 = (long)(lVar13 - local_b8) < 0;
      if ((long)local_b8 <= lVar13) goto LAB_100b8b974;
      uVar17 = local_c0[lVar13];
      if (uVar17 == 0) {
        FUN_100b8c8a0();
        if (cVar6 == cVar4) {
LAB_100b8b974:
          _swift_release(local_a8);
          puVar12 = local_d0;
          local_70 = local_d0;
          _swift_bridgeObjectRetain(local_d0);
          FUN_100b8bdd8(&local_70);
          _swift_bridgeObjectRelease(puVar12);
          puVar12 = local_70;
          FUN_100b6730c(&DAT_101044808);
          FUN_100092e94();
          SVar20.bridgeObject = (void *)0xe100000000000000;
          SVar20.str = (char *)0x2c;
          SVar20 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar20);
          _swift_release(puVar12);
          return SVar20;
        }
        FUN_100b8c894();
        FUN_100b8c8a0();
        if (cVar6 == cVar4) goto LAB_100b8b974;
        FUN_100b8c894();
        FUN_100b8c8a0();
        if (cVar6 == cVar4) goto LAB_100b8b974;
        FUN_100b8c894();
        FUN_100b8c8a0();
        if (cVar6 == cVar4) goto LAB_100b8b974;
        FUN_100b8c894();
        lVar13 = extraout_x9 + 5;
        if ((long)local_b8 <= lVar13) goto LAB_100b8b974;
        uVar17 = local_c0[lVar13];
        if (uVar17 == 0) {
          puVar14 = (ulong *)(local_d8 + extraout_x8 * 8);
          lVar2 = extraout_x8 + 7;
          do {
            lVar13 = lVar2;
            if ((long)local_b8 <= lVar13) goto LAB_100b8b974;
            uVar17 = *puVar14;
            puVar14 = puVar14 + 1;
            lVar2 = lVar13 + 1;
          } while (uVar17 == 0);
        }
      }
    }
    lVar2 = DAT_101042dd0;
    uVar15 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = lVar13 << 10 | LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) << 4;
    puVar1 = (undefined8 *)(*(long *)(local_a8 + 0x30) + uVar15);
    local_70 = (undefined *)*puVar1;
    puStack_68 = (undefined *)puVar1[1];
    puVar1 = (undefined8 *)(*(long *)(local_a8 + 0x38) + uVar15);
    local_98 = (undefined *)*puVar1;
    puVar10 = (undefined *)puVar1[1];
    local_88 = lVar13;
    _swift_bridgeObjectRetain(puStack_68);
    _swift_bridgeObjectRetain(puVar10);
    if (lVar2 != -1) {
      _swift_once(&DAT_101042dd0,FUN_100b8b55c);
    }
    local_80 = uVar17 - 1 & uVar17;
    FUN_1000cd990(CVar7.unknown,&DAT_101045bc8);
    FUN_100b8c860();
    FUN_100008378();
    CVar9.unknown = withAllowedCharacters.unknown;
    puVar11 = puVar8;
    (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
    pcVar16 = local_90;
    local_a0 = CVar9.unknown;
    FUN_100b8c870();
    FUN_100b678c0();
    if (puVar11 != (undefined *)0x0) {
      local_70 = local_98;
      puStack_68 = puVar10;
      FUN_100b8c860();
      CVar9.unknown = withAllowedCharacters.unknown;
      (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
      pcVar16 = local_90;
      FUN_100b8c870();
      _swift_bridgeObjectRelease(puVar10);
      uVar17 = local_80;
      puVar10 = puVar11;
      if (puVar8 != (undefined *)0x0) {
        uVar15 = (ulong)local_a0 & 0xffffffffffff;
        if (((ulong)puVar11 & 0x2000000000000000) != 0) {
          uVar15 = (ulong)puVar11 >> 0x38 & 0xf;
        }
        if (uVar15 != 0) {
          uVar15 = (ulong)CVar9.unknown & 0xffffffffffff;
          if (((ulong)puVar8 & 0x2000000000000000) != 0) {
            uVar15 = (ulong)puVar8 >> 0x38 & 0xf;
          }
          if (uVar15 != 0) {
            local_70 = local_a0;
            SVar18.bridgeObject = (void *)0xe100000000000000;
            SVar18.str = (char *)0x3d;
            SVar21.bridgeObject = puVar12;
            SVar21.str = CVar7.unknown;
            puStack_68 = puVar11;
            Swift::String::append(SVar18,SVar21);
            SVar19.bridgeObject = puVar8;
            SVar19.str = CVar9.unknown;
            SVar22.bridgeObject = puVar12;
            SVar22.str = CVar7.unknown;
            Swift::String::append(SVar19,SVar22);
            FUN_100b678c0();
            puVar10 = puStack_68;
            puVar8 = local_70;
            FUN_100b8c888();
            if (SCARRY8((long)CVar9.unknown,(long)local_c8)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8ba18);
              (*pcVar3)();
            }
            if ((long)(CVar9.unknown + (long)local_c8) < 0x2001) {
              FUN_100b8c888();
              if (SCARRY8((long)CVar9.unknown,1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8ba1c);
                (*pcVar3)();
              }
              bVar5 = SCARRY8((long)local_c8,(long)(CVar9.unknown + 1));
              local_c8 = local_c8 + (long)(CVar9.unknown + 1);
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8ba20);
                (*pcVar3)();
              }
              uVar15 = *(ulong *)(local_d0 + 0x10);
              if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar15) {
                puVar11 = (undefined *)(ulong)(1 < *(ulong *)(local_d0 + 0x18));
                FUN_100089044(puVar11,uVar15 + 1,1);
                puVar12 = local_d0;
                local_d0 = puVar11;
              }
              *(ulong *)(local_d0 + 0x10) = uVar15 + 1;
              *(undefined **)(local_d0 + uVar15 * 0x10 + 0x20) = puVar8;
              *(undefined **)(local_d0 + uVar15 * 0x10 + 0x28) = puVar10;
              lVar13 = local_88;
              CVar7.unknown = local_90;
            }
            else {
              FUN_100b6f860();
              lVar13 = local_88;
              CVar7.unknown = local_90;
            }
            goto LAB_100b8b680;
          }
        }
        FUN_100b678c0();
        _swift_bridgeObjectRelease(puVar11);
        lVar13 = local_88;
        CVar7.unknown = pcVar16;
        goto LAB_100b8b680;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    lVar13 = local_88;
    CVar7.unknown = pcVar16;
    uVar17 = local_80;
  } while( true );
}



/* Address: 0x100b8ba2c | _TtC6Sentry26SentryBaggageSerialization::encodeDictionary: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry26SentryBaggageSerialization::encodeDictionary_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  NSString *pNVar2;
  undefined *puVar3;
  
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100b8b5b8();
  _swift_bridgeObjectRelease(DVar1.unknown);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar3);
  return (ID)pNVar2;
}



/* Address: 0x100b8ba9c | FUN_100b8ba9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b8baf0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100b8ba9c(undefined *param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  Dictionary<undefined,undefined> DVar6;
  Dictionary<undefined,undefined> DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  _NativeDictionary _Var13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  ulong uStack_68;
  
  uVar2 = (ulong)param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  DVar6 = Swift::Dictionary::_init
                    (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  if (uVar2 != 0) {
    local_80 = 0x2c;
    uStack_78 = 0xe100000000000000;
    DVar7 = DVar6;
    local_70 = param_1;
    uStack_68 = param_2;
    FUN_100008378();
    puVar8 = &local_80;
    FUN_100b8c87c(puVar8,PTR___type_metadata_for_Swift_String_100eac208,
                  PTR___type_metadata_for_Swift_String_100eac208);
    lVar19 = puVar8[2];
    if (lVar19 != 0) {
      puVar18 = puVar8 + 5;
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      do {
        local_70 = (undefined *)puVar18[-1];
        uStack_68 = *puVar18;
        local_80 = 0x3d;
        uStack_78 = 0xe100000000000000;
        puVar9 = &local_80;
        FUN_100b8c87c(puVar9,puVar10,puVar10);
        if (puVar9[2] == 2) {
          uVar2 = puVar9[4];
          uVar3 = puVar9[5];
          puVar11 = (undefined *)puVar9[6];
          uVar12 = puVar9[7];
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar12);
          FUN_100b6f860();
          puVar14 = DVar7.unknown;
          local_70 = puVar11;
          uStack_68 = uVar12;
          (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
          _swift_bridgeObjectRelease(uVar12);
          if (puVar14 == (undefined *)0x0) {
            _swift_bridgeObjectRelease(uVar3);
            puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
          }
          else {
            puVar11 = DVar6.unknown;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar12 = uVar2;
            uVar15 = uVar3;
            local_70 = DVar6.unknown;
            FUN_100071370();
            lVar16 = *(long *)(DVar6.unknown + 0x10);
            uVar17 = (ulong)~(uint)uVar15 & 1;
            if (SCARRY8(lVar16,uVar17)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8bd40);
              (*pcVar4)();
            }
            _Var13.unknown = &DAT_101045be0;
            FUN_100b6730c();
            bVar5 = Swift::_NativeDictionary::ensureUnique(SUB81(puVar11,0),lVar16 + uVar17,_Var13);
            if ((bVar5) &&
               (uVar12 = uVar2, uVar17 = uVar3, FUN_100071370(),
               ((uint)uVar15 & 1) != ((uint)uVar17 & 1))) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8bd54);
              (*pcVar4)();
            }
            DVar6.unknown = local_70;
            if ((uVar15 & 1) == 0) {
              *(ulong *)(local_70 + (uVar12 >> 6) * 8 + 0x40) =
                   *(ulong *)(local_70 + (uVar12 >> 6) * 8 + 0x40) | 1L << (uVar12 & 0x3f);
              puVar1 = (ulong *)(*(long *)(local_70 + 0x30) + uVar12 * 0x10);
              *puVar1 = uVar2;
              puVar1[1] = uVar3;
              puVar9 = (undefined8 *)(*(long *)(local_70 + 0x38) + uVar12 * 0x10);
              *puVar9 = puVar10;
              puVar9[1] = puVar14;
              if (SCARRY8(*(long *)(local_70 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8bd44);
                (*pcVar4)();
              }
              *(long *)(local_70 + 0x10) = *(long *)(local_70 + 0x10) + 1;
              puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
            }
            else {
              puVar9 = (undefined8 *)(*(long *)(local_70 + 0x38) + uVar12 * 0x10);
              _swift_bridgeObjectRelease(puVar9[1]);
              *puVar9 = puVar10;
              puVar9[1] = puVar14;
              _swift_bridgeObjectRelease(uVar3);
              puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
            }
          }
        }
        else {
          FUN_100b6f860();
        }
        puVar18 = puVar18 + 2;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    _swift_bridgeObjectRelease(puVar8);
  }
  return DVar6.unknown;
}



/* Address: 0x100b8bd54 | _TtC6Sentry26SentryBaggageSerialization::decode: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry26SentryBaggageSerialization::decode_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  NSDictionary *pNVar2;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar3.str;
  FUN_100b8ba9c(pcVar1);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pcVar1);
  return (ID)pNVar2;
}



/* Address: 0x100b8bdb4 | _TtC6Sentry26SentryBaggageSerialization::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryBaggageSerialization::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b8bdd4 | _TtC6Sentry26SentryBaggageSerialization::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryBaggageSerialization::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100b8bdd8 | FUN_100b8bdd8 */

void FUN_100b8bdd8(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_40;
  undefined8 uStack_38;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar1 & 1) == 0) {
    FUN_100be3f24();
  }
  uStack_38 = *(undefined8 *)(uVar2 + 0x10);
  local_40 = uVar2 + 0x20;
  FUN_100b8be60(&local_40);
  *param_1 = uVar2;
  return;
}



/* Address: 0x100b8be40 | FUN_100b8be40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8be40(void)

{
  return ZEXT816(0x100fa0f58);
}



/* Address: 0x100b8be60 | FUN_100b8be60 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b8bebc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b8be60(long param_1)

{
  code *pcVar1;
  __int64 _Var2;
  _ArrayBuffer<undefined> _Var3;
  long lVar4;
  undefined *local_50;
  long lStack_48;
  undefined1 auStack_38 [8];
  
  lVar4 = *(long *)(param_1 + 8);
  _Var2 = Swift::_minimumMergeRunLength(lVar4);
  if (_Var2 < lVar4) {
    if (lVar4 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8bf4c);
      (*pcVar1)();
    }
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < lVar4) {
      _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                        (_Var2,PTR___type_metadata_for_Swift_String_100eac208);
      *(long *)(_Var3.unknown + 0x10) = lVar4 / 2;
    }
    local_50 = _Var3.unknown + 0x20;
    lStack_48 = lVar4 / 2;
    FUN_100b8bf50(&local_50,auStack_38,param_1,_Var2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  else {
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8bf50);
      (*pcVar1)();
    }
    if (lVar4 != 0) {
      FUN_100b8c368(0,lVar4,1,param_1);
    }
  }
  return;
}



/* Address: 0x100b8bf50 | FUN_100b8bf50 */

void FUN_100b8bf50(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar20 = param_3[1];
  if (0 < lVar20) {
    lVar14 = 0;
    do {
      lVar15 = lVar14 + 1;
      lVar24 = lVar15;
      if (lVar15 < lVar20) {
        lVar23 = *param_3;
        puVar18 = (undefined8 *)(lVar23 + lVar15 * 0x10);
        _Var8.unknown = (undefined *)*puVar18;
        _Var12.unknown = (undefined *)puVar18[1];
        puVar18 = (undefined8 *)(lVar23 + lVar14 * 0x10);
        puVar11 = (undefined *)*puVar18;
        if (_Var8.unknown == puVar11 && _Var12.unknown == (undefined *)puVar18[1]) {
          lVar24 = lVar14 + 2;
          if (lVar24 < lVar20) {
            bVar6 = false;
            goto LAB_100b8bff4;
          }
        }
        else {
          bVar6 = Swift::_stringCompareWithSmolCheck
                            (_Var8,_Var12,(_StringComparisonResult)(__int8)puVar11);
          lVar24 = lVar14 + 2;
          if (lVar24 < lVar20) {
LAB_100b8bff4:
            puVar18 = (undefined8 *)(lVar23 + (lVar14 + 2) * 0x10 + 8);
            lVar21 = lVar14 + 2;
            do {
              puVar1 = (undefined8 *)(lVar23 + lVar15 * 0x10);
              puVar11 = (undefined *)*puVar1;
              lVar24 = lVar21;
              if ((undefined *)puVar18[-1] == puVar11 &&
                  (undefined *)*puVar18 == (undefined *)puVar1[1]) {
                if (bVar6 != false) goto LAB_100b8c05c;
              }
              else {
                bVar7 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)puVar18[-1],(undefined *)*puVar18,
                                   (_StringComparisonResult)(__int8)puVar11);
                if (bVar6 != bVar7) break;
              }
              lVar24 = lVar21 + 1;
              puVar18 = puVar18 + 2;
              lVar15 = lVar21;
              lVar21 = lVar24;
            } while (lVar24 < lVar20);
          }
          if (bVar6 != false) {
LAB_100b8c05c:
            if (lVar24 < lVar14) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c354);
              (*pcVar5)();
            }
            if (lVar14 < lVar24) {
              lVar13 = lVar24 << 4;
              lVar15 = lVar14 << 4;
              lVar21 = lVar24;
              lVar20 = lVar14;
              do {
                lVar21 = lVar21 + -1;
                if (lVar20 != lVar21) {
                  if (lVar23 == 0) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c35c);
                    (*pcVar5)();
                  }
                  puVar18 = (undefined8 *)(lVar23 + lVar15);
                  lVar2 = lVar23 + lVar13;
                  uVar3 = *puVar18;
                  uVar4 = puVar18[1];
                  uVar25 = *(undefined8 *)(lVar2 + -0x10);
                  puVar18[1] = *(undefined8 *)(lVar2 + -8);
                  *puVar18 = uVar25;
                  *(undefined8 *)(lVar2 + -0x10) = uVar3;
                  *(undefined8 *)(lVar2 + -8) = uVar4;
                }
                lVar20 = lVar20 + 1;
                lVar13 = lVar13 + -0x10;
                lVar15 = lVar15 + 0x10;
              } while (lVar20 < lVar21);
            }
          }
        }
      }
      lVar20 = param_3[1];
      lVar15 = lVar24;
      if (lVar24 < lVar20) {
        if (SBORROW8(lVar24,lVar14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c348);
          (*pcVar5)();
        }
        if (lVar24 - lVar14 < param_4) {
          if (SCARRY8(lVar14,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c34c);
            (*pcVar5)();
          }
          lVar23 = lVar14 + param_4;
          if (lVar20 <= lVar14 + param_4) {
            lVar23 = lVar20;
          }
          if (lVar23 < lVar14) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c350);
            (*pcVar5)();
          }
          if (lVar24 != lVar23) {
            lVar21 = *param_3;
            plVar16 = (long *)(lVar21 + lVar24 * 0x10);
            lVar20 = lVar14 - lVar24;
            do {
              puVar18 = (undefined8 *)(lVar21 + lVar24 * 0x10);
              _Var8.unknown = (undefined *)*puVar18;
              _Var12.unknown = (undefined *)puVar18[1];
              plVar19 = plVar16;
              lVar15 = lVar20;
              do {
                puVar11 = (undefined *)plVar19[-2];
                if ((_Var8.unknown == puVar11 && _Var12.unknown == (undefined *)plVar19[-1]) ||
                   (bVar6 = Swift::_stringCompareWithSmolCheck
                                      (_Var8,_Var12,(_StringComparisonResult)(__int8)puVar11),
                   !bVar6)) break;
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c358);
                  (*pcVar5)();
                }
                _Var8.unknown = (undefined *)*plVar19;
                _Var12.unknown = (undefined *)plVar19[1];
                plVar19[1] = plVar19[-1];
                *plVar19 = plVar19[-2];
                plVar19[-1] = (long)_Var12.unknown;
                plVar19 = plVar19 + -2;
                *plVar19 = (long)_Var8.unknown;
                bVar6 = lVar15 != -1;
                lVar15 = lVar15 + 1;
              } while (bVar6);
              lVar24 = lVar24 + 1;
              plVar16 = plVar16 + 2;
              lVar20 = lVar20 + -1;
              lVar15 = lVar23;
            } while (lVar24 != lVar23);
          }
        }
      }
      puVar11 = local_58;
      if (lVar15 < lVar14) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c338);
        (*pcVar5)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100b6e948(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar22 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar22) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100b6e948(puVar11,uVar22 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar22 + 1;
      *(long *)(puVar11 + uVar22 * 0x10 + 0x20) = lVar14;
      *(long *)(puVar11 + uVar22 * 0x10 + 0x28) = lVar15;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c360);
        (*pcVar5)();
      }
      FUN_100b8c42c(&local_58,*param_1,param_3);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(local_58);
        return;
      }
      lVar20 = param_3[1];
      lVar14 = lVar15;
    } while (lVar15 < lVar20);
  }
  lVar20 = *param_1;
  if (lVar20 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c368);
    (*pcVar5)();
  }
  uVar22 = *(ulong *)(local_58 + 0x10);
  puVar11 = local_58;
  if (1 < uVar22) {
    do {
      lVar14 = *param_3;
      if (lVar14 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c364);
        (*pcVar5)();
      }
      lVar24 = uVar22 - 1;
      lVar23 = *(long *)(puVar11 + uVar22 * 0x10);
      lVar15 = *(long *)(puVar11 + lVar24 * 0x10 + 0x28);
      FUN_100b8c6b4(lVar14 + lVar23 * 0x10,lVar14 + *(long *)(puVar11 + lVar24 * 0x10 + 0x20) * 0x10
                    ,lVar14 + lVar15 * 0x10,lVar20);
      if (unaff_x21 != 0) break;
      if (lVar15 < lVar23) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c33c);
        (*pcVar5)();
      }
      puVar9 = puVar11;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar9 & 1) == 0) {
        FUN_10009a958();
      }
      uVar17 = *(ulong *)(puVar11 + 0x10);
      if (uVar17 <= uVar22 - 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c340);
        (*pcVar5)();
      }
      *(long *)(puVar11 + uVar22 * 0x10) = lVar23;
      *(long *)((long)(puVar11 + uVar22 * 0x10) + 8) = lVar15;
      lVar14 = uVar17 - uVar22;
      if (uVar17 < uVar22) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b8c344);
        (*pcVar5)();
      }
      uVar22 = uVar17 - 1;
      _memmove(puVar11 + lVar24 * 0x10 + 0x20,puVar11 + lVar24 * 0x10 + 0x30,lVar14 * 0x10);
      *(ulong *)(puVar11 + 0x10) = uVar22;
    } while (2 < uVar17);
  }
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x100b8c368 | FUN_100b8c368 */

void FUN_100b8c368(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar8 = (long *)(lVar7 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar1 = (undefined8 *)(lVar7 + param_3 * 0x10);
      _Var5.unknown = (undefined *)*puVar1;
      _Var6.unknown = (undefined *)puVar1[1];
      lVar9 = param_1;
      plVar10 = plVar8;
      do {
        puVar2 = (undefined *)plVar10[-2];
        if ((_Var5.unknown == puVar2 && _Var6.unknown == (undefined *)plVar10[-1]) ||
           (bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var5,_Var6,(_StringComparisonResult)(__int8)puVar2), !bVar4)) break;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100b8c42c);
          (*pcVar3)();
        }
        _Var5.unknown = (undefined *)*plVar10;
        _Var6.unknown = (undefined *)plVar10[1];
        plVar10[1] = plVar10[-1];
        *plVar10 = plVar10[-2];
        plVar10[-1] = (long)_Var6.unknown;
        plVar10 = plVar10 + -2;
        *plVar10 = (long)_Var5.unknown;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      plVar8 = plVar8 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x100b8c42c | FUN_100b8c42c */

undefined8 FUN_100b8c42c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x21;
  
  lVar8 = *param_1;
  uVar9 = *(ulong *)(lVar8 + 0x10);
  do {
    if (uVar9 < 2) {
      return 1;
    }
    lVar6 = uVar9 - 1;
    plVar1 = (long *)(lVar8 + uVar9 * 0x10);
    if (uVar9 < 4) {
      if (uVar9 == 3) {
        bVar5 = SBORROW8(*(long *)(lVar8 + 0x28),*(long *)(lVar8 + 0x20));
        lVar10 = *(long *)(lVar8 + 0x28) - *(long *)(lVar8 + 0x20);
LAB_100b8c4c0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c594);
          (*pcVar4)();
        }
        lVar11 = plVar1[1] - *plVar1;
        if (SBORROW8(plVar1[1],*plVar1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c5a0);
          (*pcVar4)();
        }
        plVar1 = (long *)(lVar8 + 0x20 + lVar6 * 0x10);
        lVar7 = *plVar1;
        lVar2 = plVar1[1];
        lVar3 = lVar2 - lVar7;
        if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c5ac);
          (*pcVar4)();
        }
        if (SCARRY8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c5b0);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar10 <= lVar11 + lVar3) {
          lVar7 = uVar9 - 2;
          if (lVar3 <= lVar10) {
            lVar7 = lVar6;
          }
          goto LAB_100b8c550;
        }
      }
      else {
        bVar5 = SBORROW8(plVar1[1],*plVar1);
        lVar11 = plVar1[1] - *plVar1;
      }
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c59c);
        (*pcVar4)();
      }
      lVar8 = lVar8 + lVar6 * 0x10;
      lVar10 = *(long *)(lVar8 + 0x20);
      lVar8 = *(long *)(lVar8 + 0x28);
      if (SBORROW8(lVar8,lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c5a8);
        (*pcVar4)();
      }
      lVar7 = lVar6;
      if (lVar8 - lVar10 < lVar11) {
        return 1;
      }
    }
    else {
      lVar11 = lVar8 + 0x20 + uVar9 * 0x10;
      if (SBORROW8(*(long *)(lVar11 + -0x38),*(long *)(lVar11 + -0x40))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c58c);
        (*pcVar4)();
      }
      lVar10 = *(long *)(lVar11 + -0x28) - *(long *)(lVar11 + -0x30);
      if (SBORROW8(*(long *)(lVar11 + -0x28),*(long *)(lVar11 + -0x30))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c590);
        (*pcVar4)();
      }
      lVar7 = plVar1[1] - *plVar1;
      if (SBORROW8(plVar1[1],*plVar1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c598);
        (*pcVar4)();
      }
      if (SCARRY8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c5a4);
        (*pcVar4)();
      }
      bVar5 = false;
      if (lVar10 + lVar7 < *(long *)(lVar11 + -0x38) - *(long *)(lVar11 + -0x40))
      goto LAB_100b8c4c0;
      plVar1 = (long *)(lVar8 + 0x20 + lVar6 * 0x10);
      lVar8 = *plVar1;
      lVar11 = plVar1[1];
      if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c5b4);
        (*pcVar4)();
      }
      lVar7 = uVar9 - 2;
      if (lVar11 - lVar8 <= lVar10) {
        lVar7 = lVar6;
      }
    }
LAB_100b8c550:
    FUN_100b8c5b4(param_1,lVar7,param_2,param_3);
    if (unaff_x21 != 0) {
      return 1;
    }
    lVar8 = *param_1;
    uVar9 = *(ulong *)(lVar8 + 0x10);
  } while( true );
}



/* Address: 0x100b8c5b4 | FUN_100b8c5b4 */

undefined8 FUN_100b8c5b4(ulong *param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  
  uVar3 = param_2 - 1;
  if (SBORROW8(param_2,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c68c);
    (*pcVar4)();
  }
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c690);
    (*pcVar4)();
  }
  uVar7 = *param_1;
  if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c694);
    (*pcVar4)();
  }
  if (param_2 < *(ulong *)(uVar7 + 0x10)) {
    lVar6 = *param_4;
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c6b4);
      (*pcVar4)();
    }
    lVar8 = *(long *)(uVar7 + 0x20 + uVar3 * 0x10);
    plVar1 = (long *)(uVar7 + 0x20 + param_2 * 0x10);
    lVar2 = plVar1[1];
    FUN_100b8c6b4(lVar6 + lVar8 * 0x10,lVar6 + *plVar1 * 0x10,lVar6 + lVar2 * 0x10,param_3);
    if (unaff_x21 == 0) {
      if (lVar2 < lVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c69c);
        (*pcVar4)();
      }
      uVar5 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_10009a958();
      }
      if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c6b0);
        (*pcVar4)();
      }
      lVar6 = uVar7 + uVar3 * 0x10;
      *(long *)(lVar6 + 0x20) = lVar8;
      *(long *)(lVar6 + 0x28) = lVar2;
      *param_1 = uVar7;
      FUN_100bae238(param_2);
    }
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100b8c698);
  (*pcVar4)();
}



/* Address: 0x100b8c6b4 | FUN_100b8c6b4 */

undefined8
FUN_100b8c6b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x10;
  lVar2 = ((long)param_3 - (long)param_2) / 0x10;
  if (lVar1 < lVar2) {
    FUN_100b69414(param_1,lVar1,param_4);
    puVar8 = param_4 + lVar1 * 2;
    puVar7 = param_1;
    if (param_2 < param_3 && 0xf < (long)param_2 - (long)param_1) {
      do {
        if (((undefined *)*param_2 == (undefined *)*param_4 &&
             (undefined *)param_2[1] == (undefined *)param_4[1]) ||
           (bVar6 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*param_2,(undefined *)param_2[1],
                               (_StringComparisonResult)(__int8)(undefined *)*param_4), !bVar6)) {
          puVar4 = param_4 + 2;
          puVar3 = param_4;
        }
        else {
          puVar4 = param_4;
          puVar3 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar4;
        if (puVar7 != puVar3) {
          uVar10 = *puVar3;
          puVar7[1] = puVar3[1];
          *puVar7 = uVar10;
        }
        puVar7 = puVar7 + 2;
      } while (param_4 < puVar8 && param_2 < param_3);
    }
  }
  else {
    FUN_100b69414(param_2,lVar2,param_4);
    puVar8 = param_4 + lVar2 * 2;
    puVar7 = param_2;
    if (param_1 < param_2 && 0xf < (long)param_3 - (long)param_2) {
      do {
        puVar7 = puVar8 + -2;
        puVar9 = param_2 + -2;
        puVar4 = puVar7;
        puVar5 = param_2;
        puVar3 = puVar8;
        if (((undefined *)*puVar7 != (undefined *)*puVar9 ||
             (undefined *)puVar8[-1] != (undefined *)param_2[-1]) &&
           (bVar6 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar7,(undefined *)puVar8[-1],
                               (_StringComparisonResult)(__int8)(undefined *)*puVar9), bVar6)) {
          puVar7 = puVar9;
          puVar4 = puVar8;
          puVar5 = puVar9;
          puVar3 = param_2;
        }
        param_2 = puVar5;
        puVar8 = puVar4;
        if (param_3 != puVar3) {
          uVar10 = *puVar7;
          param_3[-1] = puVar7[1];
          param_3[-2] = uVar10;
        }
        puVar7 = param_2;
        param_3 = param_3 + -2;
      } while ((param_2 > param_1 && param_4 <= puVar8) && (param_2 <= param_1 || puVar8 != param_4)
              );
    }
  }
  lVar1 = ((long)puVar8 - (long)param_4) / 0x10;
  if (puVar7 != param_4 || param_4 + lVar1 * 2 <= puVar7) {
    _memmove(puVar7,param_4,lVar1 << 4);
  }
  return 1;
}



/* Address: 0x100b8c860 | FUN_100b8c860 */

void FUN_100b8c860(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b8c86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b8c870 | FUN_100b8c870 */

void FUN_100b8c870(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b8c878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100b8c87c | FUN_100b8c87c */

void FUN_100b8c87c(void)

{
  (extension_Foundation)::Swift::StringProtocol::_components();
  return;
}



/* Address: 0x100b8c888 | FUN_100b8c888 */

void FUN_100b8c888(void)

{
  void *unaff_x20;
  char *unaff_x22;
  String SVar1;
  
  SVar1.bridgeObject = unaff_x20;
  SVar1.str = unaff_x22;
  Swift::String::get_count(SVar1);
  return;
}



/* Address: 0x100b8c894 | FUN_100b8c894 */

void FUN_100b8c894(void)

{
  return;
}



/* Address: 0x100b8c8a0 | FUN_100b8c8a0 */

void FUN_100b8c8a0(void)

{
  return;
}



/* Address: 0x100b8c8ac | _objc_copyClassNamesForImage */

void _objc_copyClassNamesForImage(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfbeb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyClassNamesForImage_100ea8148)();
  return;
}



/* Address: 0x100b8c8b0 | _TtC6Sentry31SentryDefaultObjCRuntimeWrapper::copyClassNamesForImage:amount: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

const_char____
_TtC6Sentry31SentryDefaultObjCRuntimeWrapper::copyClassNamesForImage_amount_
          (ID param_1,SEL param_2,const_char__ param_3,unsigned_int *param_4)

{
  _objc_copyClassNamesForImage(param_3,param_4);
  return (const_char____)param_3;
}



/* Address: 0x100b8c8fc | FUN_100b8c8fc */

void FUN_100b8c8fc(void)

{
  _swift_getObjCClassFromMetadata();
  _class_getImageName();
  return;
}



/* Address: 0x100b8c910 | _TtC6Sentry31SentryDefaultObjCRuntimeWrapper::class_getImageName: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

const_char__
_TtC6Sentry31SentryDefaultObjCRuntimeWrapper::class_getImageName_
          (ID param_1,SEL param_2,CLASS param_3)

{
  _swift_getObjCClassMetadata();
  FUN_100b8c8fc();
  return (const_char__)param_3;
}



/* Address: 0x100b8c95c | _TtC6Sentry31SentryDefaultObjCRuntimeWrapper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry31SentryDefaultObjCRuntimeWrapper::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b8c97c | FUN_100b8c97c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8c97c(void)

{
  return ZEXT816(0x100fa1008);
}



/* Address: 0x100b8c99c | FUN_100b8c99c */

undefined1  [16] FUN_100b8c99c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  switch(param_1) {
  case 0:
    auVar1._8_8_ = 0x8000000100dc6e30;
    auVar1._0_8_ = 0xd00000000000001c;
    return auVar1;
  case 1:
    auVar4._8_8_ = 0x8000000100dc6e50;
    auVar4._0_8_ = 0xd000000000000020;
    return auVar4;
  case 2:
    auVar2._8_8_ = 0x8000000100dc6e80;
    auVar2._0_8_ = 0xd000000000000016;
    return auVar2;
  case 3:
    auVar3._8_8_ = 0x8000000100dc6ea0;
    auVar3._0_8_ = 0xd00000000000001a;
    return auVar3;
  default:
    auVar5._8_8_ = 0xeb00000000676e69;
    auVar5._0_8_ = 0x676e614820707041;
    return auVar5;
  }
}



/* Address: 0x100b8ca58 | _TtC6Sentry23SentryAppHangTypeMapper::getExceptionTypeWithAnrType: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry23SentryAppHangTypeMapper::getExceptionTypeWithAnrType_
             (ID param_1,SEL param_2,long_long param_3)

{
  NSString *pNVar1;
  
  FUN_100b8c99c(param_3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100b8ca90 | FUN_100b8ca90 */

undefined1  [16] FUN_100b8ca90(_StringGuts param_1,_StringGuts param_2)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  
  uVar2 = 0xd000000000000020;
  pcVar3 = "Fatal App Hang Fully Blocked";
  if (param_1.unknown != (undefined *)0xd00000000000001a ||
      param_2.unknown != (undefined *)0x8000000100dc6ea0) {
    bVar1 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x1a);
    if (!bVar1) {
      uVar2 = 0xd00000000000001c;
      pcVar3 = "";
    }
  }
  auVar4._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Address: 0x100b8cb18 | _TtC6Sentry23SentryAppHangTypeMapper::getFatalExceptionTypeWithNonFatalErrorType: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry23SentryAppHangTypeMapper::getFatalExceptionTypeWithNonFatalErrorType_
             (ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  void *pvVar2;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar3.bridgeObject;
  FUN_100b8ca90(SVar3.str);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar2);
  return (ID)pNVar1;
}



/* Address: 0x100b8cb74 | FUN_100b8cb74 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b8cbbc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_100b8cb74(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  _swift_bridgeObjectRetain(param_2);
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return uVar1 < 5;
}



/* Address: 0x100b8cbe4 | _TtC6Sentry23SentryAppHangTypeMapper::isExceptionTypeAppHangWithExceptionType: */

/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry23SentryAppHangTypeMapper::isExceptionTypeAppHangWithExceptionType_
               (ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  uVar1 = (uint)SVar2.str;
  FUN_100b8cb74();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return uVar1 & 1;
}



/* Address: 0x100b8cc1c | _TtC6Sentry23SentryAppHangTypeMapper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryAppHangTypeMapper::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b8cc3c | FUN_100b8cc3c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8cc3c(void)

{
  return ZEXT816(0x100fa10b8);
}



/* Address: 0x100b8cc5c | FUN_100b8cc5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8cc5c(void)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar5 = auStack_60;
  puVar1 = (ulong *)(unaff_x20 + SentryOptions::orgId);
  FUN_100b78ca0(puVar1,auStack_48);
  lVar3 = SentryOptions::parsedDsn;
  puVar4 = (undefined1 *)puVar1[1];
  if (puVar4 != (undefined1 *)0x0) {
    uVar6 = *puVar1;
    uVar2 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puVar4 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      _swift_bridgeObjectRetain(puVar4);
      puVar5 = puVar4;
      goto LAB_100b8ccf4;
    }
  }
  FUN_100b78ca0(unaff_x20 + SentryOptions::parsedDsn,auStack_60);
  uVar6 = *(ulong *)(unaff_x20 + lVar3);
  if (uVar6 == 0) {
    uVar6 = 0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    FUN_100b881b4(uVar6);
    FUN_100b6f868();
  }
LAB_100b8ccf4:
  auVar7._8_8_ = puVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Address: 0x100b8cd10 | FUN_100b8cd10 */

bool FUN_100b8cd10(double param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long unaff_x20;
  undefined *puVar5;
  code *pcVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = SentryOptions::_tracesSampleRate;
  if (((*(ID *)(unaff_x20 + SentryOptions::_tracesSampleRate) == 0) ||
      (_objc_msgSend(*(ID *)(unaff_x20 + SentryOptions::_tracesSampleRate),"doubleValue"),
      param_1 <= 0.0)) ||
     ((*(ID *)(unaff_x20 + lVar2) != 0 &&
      (_objc_msgSend(*(ID *)(unaff_x20 + lVar2),"doubleValue"), 1.0 < param_1)))) {
    plVar1 = (long *)(unaff_x20 + SentryOptions::tracesSampler);
    FUN_100b78ca0(plVar1,auStack_58);
    lVar2 = *plVar1;
    lVar3 = plVar1[1];
    bVar4 = lVar2 != 0;
    if (lVar2 == 0) {
      pcVar6 = (code *)0x0;
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = &DAT_100f38030;
      FUN_100b6f90c(&DAT_100f38030,0x20);
      *(long *)(puVar5 + 0x10) = lVar2;
      *(long *)(puVar5 + 0x18) = lVar3;
      pcVar6 = thunk_FUN_100b93db4;
    }
    FUN_100011128(lVar2,lVar3);
    FUN_100004550(pcVar6,puVar5);
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}



/* Address: 0x100b8cdf8 | FUN_100b8cdf8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b8d498) */

undefined * FUN_100b8cdf8(undefined8 param_1,long param_2)

{
  NSNumber *pNVar1;
  String *pSVar2;
  undefined8 *puVar3;
  char *pcVar4;
  void *pvVar5;
  String SVar6;
  NSNumber *pNVar7;
  NSNumber *this;
  NSNumber *pNVar8;
  undefined *puVar9;
  undefined *puVar10;
  class_t *self;
  ID IVar11;
  long lVar12;
  undefined *puVar13;
  Dictionary<undefined,undefined> DVar14;
  __int64 _Var15;
  char *pcVar16;
  ulong uVar17;
  NSNumber *unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  objc_super local_70;
  
  pNVar7 = unaff_x20;
  _swift_getObjectType();
  pNVar1 = unaff_x20 + SentryOptions::dsn;
  *(undefined8 *)pNVar1 = 0;
  *(undefined8 *)(pNVar1 + 8) = 0;
  *(undefined8 *)(unaff_x20 + SentryOptions::parsedDsn) = 0;
  unaff_x20[SentryOptions::debug] = (NSNumber)0x0;
  *(undefined8 *)(unaff_x20 + SentryOptions::diagnosticLevel) = 1;
  pNVar1 = unaff_x20 + SentryOptions::releaseName;
  FUN_10021b704();
  this = pNVar7;
  FUN_100b8db08();
  *(NSNumber **)pNVar1 = this;
  *(long *)(pNVar1 + 8) = param_2;
  FUN_100b9405c(SentryOptions::dist);
  pNVar1 = pNVar7 + SentryOptions::environment;
  *(undefined8 *)pNVar1 = 0x69746375646f7270;
  *(undefined8 *)(pNVar1 + 8) = 0xea00000000006e6f;
  pNVar7[SentryOptions::enabled] = (NSNumber)0x1;
  *(undefined8 *)(pNVar7 + SentryOptions::shutdownTimeInterval) = 0x4000000000000000;
  pNVar7[SentryOptions::enableCrashHandler] = (NSNumber)0x1;
  pNVar7[SentryOptions::enableUncaughtNSExceptionReporting] = (NSNumber)0x0;
  pNVar7[SentryOptions::enableSigtermReporting] = (NSNumber)0x0;
  pNVar7[SentryOptions::enableMemoryIntrospection] = (NSNumber)0x0;
  *(undefined8 *)(pNVar7 + SentryOptions::maxBreadcrumbs) = 100;
  pNVar7[SentryOptions::enableNetworkBreadcrumbs] = (NSNumber)0x1;
  *(undefined8 *)(pNVar7 + SentryOptions::maxCacheItems) = 0x1e;
  FUN_100b9405c(SentryOptions::beforeSend);
  FUN_100b9405c(SentryOptions::beforeSendSpan);
  pNVar7[SentryOptions::enableLogs] = (NSNumber)0x0;
  FUN_100b9405c(SentryOptions::beforeSendLog);
  FUN_100b9405c(SentryOptions::beforeBreadcrumb);
  FUN_100b9405c(SentryOptions::beforeCaptureScreenshot);
  FUN_100b9405c(SentryOptions::beforeCaptureViewHierarchy);
  FUN_100b9405c(SentryOptions::onCrashedLastRun);
  FUN_100b9405c(SentryOptions::onLastRunStatusDetermined);
  lVar12 = SentryOptions::_sampleRate;
  FUN_100b94080();
  pNVar8 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,1);
  *(NSNumber **)(pNVar7 + lVar12) = pNVar8;
  pNVar7[SentryOptions::enableAutoSessionTracking] = (NSNumber)0x1;
  pNVar7[SentryOptions::enableGraphQLOperationTracking] = (NSNumber)0x0;
  pNVar7[SentryOptions::enableWatchdogTerminationTracking] = (NSNumber)0x1;
  *(undefined8 *)(pNVar7 + SentryOptions::sessionTrackingIntervalMillis) = 30000;
  pNVar7[SentryOptions::attachStacktrace] = (NSNumber)0x1;
  pNVar7[SentryOptions::attachAllThreads] = (NSNumber)0x0;
  *(undefined8 *)(pNVar7 + SentryOptions::maxAttachmentSize) = 0xc800000;
  pNVar7[SentryOptions::sendDefaultPii] = (NSNumber)0x0;
  pNVar7[SentryOptions::enableAutoPerformanceTracing] = (NSNumber)0x1;
  pNVar7[SentryOptions::enablePersistingTracesWhenCrashing] = (NSNumber)0x0;
  pNVar1 = pNVar7 + SentryOptions::initialScope;
  *(code **)pNVar1 = _objc_retain;
  *(undefined8 *)(pNVar1 + 8) = 0;
  pNVar7[SentryOptions::enableNetworkTracking] = (NSNumber)0x1;
  pNVar7[SentryOptions::enableFileIOTracing] = (NSNumber)0x1;
  pNVar7[SentryOptions::enableDataSwizzling] = (NSNumber)0x1;
  pNVar7[SentryOptions::enableFileManagerSwizzling] = (NSNumber)0x0;
  *(undefined8 *)(pNVar7 + SentryOptions::_tracesSampleRate) = 0;
  FUN_100b9405c(SentryOptions::tracesSampler);
  lVar12 = SentryOptions::inAppIncludes;
  FUN_100b90df0();
  *(NSNumber **)(pNVar7 + lVar12) = pNVar8;
  _swift_unknownObjectWeakInit(pNVar7 + SentryOptions::urlSessionDelegate,0);
  *(undefined8 *)(pNVar7 + SentryOptions::urlSession) = 0;
  pNVar7[SentryOptions::enableSwizzling] = (NSNumber)0x1;
  *(undefined **)(pNVar7 + SentryOptions::swizzleClassNameExcludes) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  pNVar7[SentryOptions::enableCoreDataTracing] = (NSNumber)0x1;
  FUN_100b9405c(SentryOptions::configureProfiling);
  *(undefined8 *)(pNVar7 + SentryOptions::profiling) = 0;
  pNVar7[SentryOptions::sendClientReports] = (NSNumber)0x1;
  pNVar7[SentryOptions::enableAppHangTracking] = (NSNumber)0x1;
  *(undefined8 *)(pNVar7 + SentryOptions::appHangTimeoutInterval) = 0x4000000000000000;
  pNVar7[SentryOptions::enableAutoBreadcrumbTracking] = (NSNumber)0x1;
  pNVar7[SentryOptions::enablePropagateTraceparent] = (NSNumber)0x0;
  lVar12 = SentryOptions::tracePropagationTargets;
  puVar13 = &DAT_101044920;
  FUN_100b6730c();
  puVar9 = puVar13;
  FUN_100b6f90c();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  if (DAT_101042dd8 != -1) {
    _swift_once(&DAT_101042dd8,FUN_100b91f74);
  }
  uVar19 = DAT_101058438;
  puVar10 = &DAT_101045e30;
  FUN_100b6730c();
  *(undefined **)(puVar9 + 0x38) = puVar10;
  *(undefined8 *)(puVar9 + 0x20) = uVar19;
  *(undefined **)(pNVar7 + lVar12) = puVar9;
  pNVar7[SentryOptions::enableCaptureFailedRequests] = (NSNumber)0x1;
  lVar12 = SentryOptions::failedRequestStatusCodes;
  puVar9 = puVar10;
  FUN_100b93798();
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 3;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  self = &objc::class_t::SentryHttpStatusCodeRange;
  _objc_allocWithZone();
  IVar11 = _objc_msgSend((ID)self,"initWithMin:max:",500,599);
  *(ID *)(puVar9 + 0x20) = IVar11;
  *(undefined **)(pNVar7 + lVar12) = puVar9;
  lVar12 = SentryOptions::failedRequestTargets;
  FUN_100b6f90c(puVar13,0x40);
  *(undefined8 *)(puVar13 + 0x18) = 2;
  *(undefined8 *)(puVar13 + 0x10) = 1;
  uVar19 = DAT_101058438;
  *(undefined **)(puVar13 + 0x38) = puVar10;
  *(undefined8 *)(puVar13 + 0x20) = uVar19;
  *(undefined **)(pNVar7 + lVar12) = puVar13;
  pNVar7[SentryOptions::enableMetricKit] = (NSNumber)0x0;
  pNVar7[SentryOptions::enableMetricKitRawPayload] = (NSNumber)0x0;
  pNVar7[SentryOptions::enableTimeToFullDisplayTracing] = (NSNumber)0x0;
  pNVar7[SentryOptions::swiftAsyncStacktraces] = (NSNumber)0x0;
  lVar12 = 0xd;
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(lVar12 + 0x10) == 0) {
    uVar19 = 0;
    uVar18 = 0xe000000000000000;
  }
  else {
    uVar19 = *(undefined8 *)(lVar12 + 0x20);
    uVar18 = *(undefined8 *)(lVar12 + 0x28);
    FUN_100b940f8(0);
  }
  _swift_bridgeObjectRelease(lVar12);
  pNVar1 = pNVar7 + SentryOptions::cacheDirectoryPath;
  *(undefined8 *)pNVar1 = uVar19;
  *(undefined8 *)(pNVar1 + 8) = uVar18;
  pNVar7[SentryOptions::enableSpotlight] = (NSNumber)0x0;
  pNVar1 = pNVar7 + SentryOptions::spotlightUrl;
  *(undefined8 *)pNVar1 = 0xd00000000000001c;
  *(undefined8 *)(pNVar1 + 8) = 0x8000000100dcb7b0;
  pNVar7[SentryOptions::strictTraceContinuation] = (NSNumber)0x0;
  FUN_100b9405c(SentryOptions::orgId);
  lVar12 = SentryOptions::experimental;
  IVar11 = 0;
  FUN_100ba8578();
  _objc_allocWithZone();
  IVar11 = _objc_msgSend(IVar11,"init");
  *(ID *)(pNVar7 + lVar12) = IVar11;
  pNVar7[SentryOptions::enableMetrics] = (NSNumber)0x1;
  FUN_100b9405c(SentryOptions::beforeSendMetric);
  _objc_msgSendSuper2(&local_70,"init");
  puVar13 = &_OBJC_CLASS___NSProcessInfo;
  FUN_100b78d78();
  IVar11 = _objc_msgSend((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  IVar11 = _objc_msgSend(IVar11,"environment");
  FUN_100b6f868(IVar11);
  DVar14 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar14.unknown + 0x10) == 0) {
    FUN_100b6faa8(0);
  }
  else {
    _swift_bridgeObjectRetain(DVar14.unknown);
    lVar12 = 0x445f5952544e4553;
    uVar17 = 0xea00000000004e53;
    FUN_100071370();
    if ((uVar17 & 1) == 0) {
      FUN_100b6faa8();
      FUN_100b9411c();
      return puVar13;
    }
    pSVar2 = (String *)(*(long *)(DVar14.unknown + 0x38) + lVar12 * 0x10);
    pcVar4 = pSVar2->str;
    pvVar5 = pSVar2->bridgeObject;
    SVar6 = *pSVar2;
    FUN_100b940f8();
    FUN_100b9411c();
    _Var15 = Swift::String::get_count(SVar6);
    if (_Var15 < 1) {
      _swift_bridgeObjectRelease(pvVar5);
      FUN_100b6faa8();
      return puVar13;
    }
    FUN_100b88a74(0);
    FUN_100b940f8();
    pcVar16 = pcVar4;
    FUN_100b87440(pcVar4,pvVar5);
    FUN_100b6faa8();
    lVar12 = SentryOptions::parsedDsn;
    FUN_100b80d38(puVar13 + SentryOptions::parsedDsn,auStack_90);
    *(char **)(puVar13 + lVar12) = pcVar16;
    puVar3 = (undefined8 *)(puVar13 + SentryOptions::dsn);
    FUN_100b80d38(puVar3,auStack_a8);
    DVar14.unknown = (undefined *)puVar3[1];
    *puVar3 = pcVar4;
    puVar3[1] = pvVar5;
  }
  _swift_bridgeObjectRelease(DVar14.unknown);
  return puVar13;
}



/* Address: 0x100b8d598 | SentryOptions::init */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::init(ID param_1,SEL param_2)

{
  FUN_100b8cdf8();
  return param_1;
}



/* Address: 0x100b8d5b8 | SentryOptions::dsn */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::dsn(ID param_1,SEL param_2)

{
  FUN_100b8dda0(param_1,param_2,FUN_100b8d5c4);
  return param_1;
}



/* Address: 0x100b8d5c4 | FUN_100b8d5c4 */

void FUN_100b8d5c4(void)

{
  FUN_100b92d80(&SentryOptions::dsn);
  return;
}



/* Address: 0x100b8d5d0 | SentryOptions::setDsn: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setDsn_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b8ddec();
  return;
}



/* Address: 0x100b8d5dc | FUN_100b8d5dc */

void FUN_100b8d5dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + SentryOptions::dsn);
  FUN_100b80d38(puVar1,auStack_48);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100b8d6b8();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8d628 | FUN_100b8d628 */

void FUN_100b8d628(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::dsn);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100b8d67c | FUN_100b8d67c */

void FUN_100b8d67c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_100b8d5dc(uVar1,uVar2);
  return;
}



/* Address: 0x100b8d6b8 | FUN_100b8d6b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b8d720) */

void FUN_100b8d6b8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  FUN_100b88a74(0);
  puVar1 = (undefined8 *)(unaff_x20 + SentryOptions::dsn);
  _swift_beginAccess(puVar1,auStack_58,1,0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_100b87440(uVar4,uVar2);
  lVar3 = SentryOptions::parsedDsn;
  _swift_beginAccess(unaff_x20 + SentryOptions::parsedDsn,auStack_78,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
  return;
}



/* Address: 0x100b8d858 | FUN_100b8d858 */

void FUN_100b8d858(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  *(long *)(param_1 + 0x18) = unaff_x20;
  lVar1 = SentryOptions::dsn;
  FUN_100b78c80();
  FUN_100b56e88(FUN_100b8d888,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8d888 | FUN_100b8d888 */

void FUN_100b8d888(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92d34(param_1,param_2,FUN_100b8d6b8);
  return;
}


