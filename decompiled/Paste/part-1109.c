/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ba43a0 | FUN_100ba43a0 */

void FUN_100ba43a0(void)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_100ba2700(&stack0x00000020,unaff_x20 + unaff_x21);
  return;
}



/* Address: 0x100ba43ac | FUN_100ba43ac */

void FUN_100ba43ac(void)

{
  long unaff_x19;
  long unaff_x20;
  
  FUN_100ba3984(unaff_x19 + unaff_x20,&stack0x00000030);
  return;
}



/* Address: 0x100ba43b8 | FUN_100ba43b8 */

void FUN_100ba43b8(void)

{
  long unaff_x27;
  
  *(undefined8 *)(unaff_x27 + 0x30) = 0;
  *(undefined8 *)(unaff_x27 + 0x28) = 0;
  *(undefined8 *)(unaff_x27 + 0x20) = 0;
  *(undefined8 *)(unaff_x27 + 0x18) = 0;
  *(undefined8 *)(unaff_x27 + 0x10) = 0;
  *(undefined8 *)(unaff_x27 + 8) = 0;
  return;
}



/* Address: 0x100ba43cc | FUN_100ba43cc */

undefined1  [16] FUN_100ba43cc(void)

{
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(unaff_x29 + -0x118);
  auVar1._8_8_ = *(undefined8 *)(unaff_x29 + -0x108);
  return auVar1;
}



/* Address: 0x100ba43e0 | FUN_100ba43e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba43e0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID local_48;
  
  lVar2 = 0;
  FUN_100bea018();
  iVar1 = *(int *)(lVar2 + 0x28);
  IVar4 = *(ID *)(param_1 + iVar1);
  local_48 = IVar4;
  _swift_bridgeObjectRetain(IVar4);
  FUN_100ba5a9c();
  FUN_100ba5514(&local_48,param_2);
  FUN_100ba5a94();
  FUN_100ba4af8(&local_48);
  FUN_100ba4ca0(&local_48);
  FUN_100ba5a9c();
  FUN_100ba56f8(&local_48);
  FUN_100ba5a94();
  FUN_100ba4e90(&local_48);
  FUN_100ba5a9c();
  FUN_100ba58a8(&local_48,param_2);
  FUN_100ba5a94();
  _swift_bridgeObjectRelease();
  *(ID *)(param_1 + iVar1) = local_48;
  FUN_100ba5a8c();
  if (IVar4 == 0) {
    FUN_100ba5a8c();
  }
  else {
    IVar3 = _objc_msgSend(IVar4,"traceId");
    _swift_unknownObjectRelease(IVar4);
    IVar4 = IVar3;
  }
  IVar3 = 0;
  *(ID *)(param_1 + *(int *)(lVar2 + 0x18)) = IVar4;
  FUN_100ba5a8c(0,"span");
  if (IVar3 == 0) {
    IVar4 = 0;
  }
  else {
    IVar4 = _objc_msgSend(IVar3,"spanId");
    _swift_unknownObjectRelease(IVar3);
  }
  *(ID *)(param_1 + *(int *)(lVar2 + 0x1c)) = IVar4;
  return 0;
}



/* Address: 0x100ba4554 | FUN_100ba4554 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100ba4554(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  ID IVar2;
  ID unaff_x20;
  undefined8 local_48;
  
  FUN_100bd4f90();
  local_48 = param_1;
  FUN_100b7ee10(param_2);
  FUN_100ba5514(&local_48,param_2);
  FUN_100b7ee58(param_2);
  FUN_100ba4af8(&local_48);
  FUN_100ba4ca0(&local_48);
  FUN_100b7ee10(param_2);
  FUN_100ba56f8(&local_48);
  FUN_100b7ee58(param_2);
  FUN_100ba4e90(&local_48);
  FUN_100b7ee10(param_2);
  FUN_100ba58a8(&local_48,param_2);
  FUN_100b7ee58(param_2);
  FUN_100bd4fe0(local_48);
  IVar1 = _objc_msgSend(unaff_x20,"span");
  if (IVar1 == 0) {
    IVar2 = _objc_msgSend(unaff_x20,"propagationContextTraceId");
  }
  else {
    IVar2 = _objc_msgSend(IVar1,"traceId");
    _swift_unknownObjectRelease(IVar1);
  }
  FUN_100bd419c(IVar2);
  IVar1 = _objc_msgSend(unaff_x20,"span");
  if (IVar1 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = _objc_msgSend(IVar1,"spanId");
    _swift_unknownObjectRelease(IVar1);
  }
  FUN_100bd4280(IVar2);
  return;
}



/* Address: 0x100ba46d4 | FUN_100ba46d4 */

void FUN_100ba46d4(void)

{
  FUN_100ba5a6c();
  _objc_allocWithZone();
  FUN_100ba4734();
  return;
}



/* Address: 0x100ba4734 | FUN_100ba4734 */

void FUN_100ba4734(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 unaff_w19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  
  FUN_100ba5a6c();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry28SentryDefaultLogScopeApplier::metadata);
  puVar1[3] = &DAT_100f3b990;
  puVar1[4] = &PTR_PTR_100f3b9b0;
  puVar2 = &DAT_100f39550;
  _swift_allocObject(&DAT_100f39550,0x48,7);
  *puVar1 = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = unaff_x26;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x25;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x24;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x23;
  puVar2[0x30] = unaff_w19;
  *(undefined8 *)(puVar2 + 0x38) = unaff_x22;
  *(undefined8 *)(puVar2 + 0x40) = unaff_x21;
  FUN_100ba480c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"init");
  return;
}



/* Address: 0x100ba47d8 | FUN_100ba47d8 */

void FUN_100ba47d8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100ba480c | FUN_100ba480c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba480c(void)

{
  return ZEXT816(0x100fa1fa8);
}



/* Address: 0x100ba482c | _TtC6Sentry28SentryDefaultLogScopeApplier::initWithEnvironment:releaseName:cacheDirectoryPath:shouldAddDefaultUserId: */

/* Function Stack Size: 0x2c bytes */

ID _TtC6Sentry28SentryDefaultLogScopeApplier::
   initWithEnvironment_releaseName_cacheDirectoryPath_shouldAddDefaultUserId_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,bool param_6)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  if (param_4 == 0) {
    SVar3 = (String)ZEXT816(0);
  }
  else {
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100ba4734(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject,SVar4.str,SVar4.bridgeObject,
                param_6);
  return (ID)pcVar1;
}



/* Address: 0x100ba48c0 | FUN_100ba48c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100ba48c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry28SentryDefaultLogScopeApplier::metadata);
  local_78 = param_2;
  FUN_100004640(puVar1,puVar1[3]);
  uStack_68 = puVar1[1];
  local_70 = *puVar1;
  uStack_58 = puVar1[3];
  uStack_60 = puVar1[2];
  uStack_48 = puVar1[5];
  local_50 = puVar1[4];
  local_40 = puVar1[6];
  FUN_100ba4554(&local_78,&local_70);
  return param_2;
}



/* Address: 0x100ba4940 | _TtC6Sentry28SentryDefaultLogScopeApplier::applyScope:toLog: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry28SentryDefaultLogScopeApplier::applyScope_toLog_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100ba48c0(param_3,param_4);
  return param_4;
}



/* Address: 0x100ba49b4 | FUN_100ba49b4 */

void FUN_100ba49b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryDefaultLogScopeApplier",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba49e0);
  (*pcVar1)();
}



/* Address: 0x100ba49e0 | _TtC6Sentry28SentryDefaultLogScopeApplier::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry28SentryDefaultLogScopeApplier::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100ba49b4();
  FUN_100ba480c();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100ba49ec | FUN_100ba49ec */

void FUN_100ba49ec(void)

{
  FUN_100ba480c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100ba4a1c | _TtC6Sentry28SentryDefaultLogScopeApplier::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry28SentryDefaultLogScopeApplier::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004594(param_1 + metadata);
  return;
}



/* Address: 0x100ba4a3c | FUN_100ba4a3c */

void FUN_100ba4a3c(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce9b4);
  return;
}



/* Address: 0x100ba4a48 | FUN_100ba4a48 */

void FUN_100ba4a48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba4a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x58))();
  return;
}



/* Address: 0x100ba4a50 | FUN_100ba4a50 */

void FUN_100ba4a50(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100ba4a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x60))();
  return;
}



/* Address: 0x100ba4a6c | FUN_100ba4a6c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100ba4a6c(void)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,"attributes");
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  DVar2 = DVar1;
  FUN_100ba5310(DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return DVar2.unknown;
}



/* Address: 0x100ba4af8 | FUN_100ba4af8 */

void FUN_100ba4af8(void)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  String SVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar4 = 0;
  uVar5 = 0;
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = SVar7.str;
  FUN_100ba5280();
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (pcVar2 == (char *)0x0) {
    return;
  }
  if (*(long *)(pcVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pcVar2);
    lVar3 = 0x656d616e;
    uVar6 = 0;
    FUN_100071370(0x656d616e);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar2);
    }
    else {
      FUN_10000cbfc(*(long *)(pcVar2 + 0x38) + lVar3 * 0x20,&local_50);
      _swift_bridgeObjectRelease(pcVar2);
      _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if ((uVar4 & 1) != 0) {
        FUN_100bd5810(local_60,uStack_58,0,0x656d616e2e736f,&DAT_e700000000000000);
      }
    }
  }
  if (*(long *)(pcVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pcVar2);
    lVar3 = 0x6e6f6973726576;
    uVar4 = 0;
    FUN_100071370(0x6e6f6973726576);
    if ((uVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(pcVar2 + 0x38) + lVar3 * 0x20,&local_50);
      _swift_bridgeObjectRelease(pcVar2);
      goto LAB_100ba4c28;
    }
    _swift_bridgeObjectRelease(pcVar2);
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
LAB_100ba4c28:
  _swift_bridgeObjectRelease(pcVar2);
  if (local_38 == 0) {
    FUN_100013954(&local_50);
  }
  else {
    _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,PTR___type_metadata_for_Swift_String_100eac208
                       ,6);
    if ((uVar5 & 1) != 0) {
      FUN_100bd5810(local_60,uStack_58,0,0x69737265762e736f,0xea00000000006e6f);
    }
  }
  return;
}



/* Address: 0x100ba4ca0 | FUN_100ba4ca0 */

void FUN_100ba4ca0(void)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  String SVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar4 = 0;
  uVar5 = 0;
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = SVar7.str;
  FUN_100ba5280();
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  FUN_100bd5810(0x656c707041,&DAT_e500000000000000,0,0x622e656369766564,0xec000000646e6172);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (*(long *)(pcVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pcVar2);
    lVar3 = 0x6c65646f6d;
    uVar6 = 0;
    FUN_100071370(0x6c65646f6d);
    if ((uVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar2);
    }
    else {
      FUN_10000cbfc(*(long *)(pcVar2 + 0x38) + lVar3 * 0x20,&local_50);
      _swift_bridgeObjectRelease(pcVar2);
      _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if ((uVar4 & 1) != 0) {
        FUN_100bd5810(local_60,uStack_58,0,0x6d2e656369766564,0xec0000006c65646f);
      }
    }
  }
  if (*(long *)(pcVar2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(pcVar2);
    lVar3 = 0x796c696d6166;
    uVar4 = 0;
    FUN_100071370(0x796c696d6166);
    if ((uVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(pcVar2 + 0x38) + lVar3 * 0x20,&local_50);
      _swift_bridgeObjectRelease(pcVar2);
      goto LAB_100ba4e10;
    }
    _swift_bridgeObjectRelease(pcVar2);
  }
  uStack_48 = 0;
  local_50 = 0;
  local_38 = 0;
  uStack_40 = 0;
LAB_100ba4e10:
  _swift_bridgeObjectRelease(pcVar2);
  if (local_38 == 0) {
    FUN_100013954(&local_50);
  }
  else {
    _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,PTR___type_metadata_for_Swift_String_100eac208
                       ,6);
    if ((uVar5 & 1) != 0) {
      FUN_100bd5810(local_60,uStack_58,0,0x662e656369766564,0xed0000796c696d61);
    }
  }
  return;
}



/* Address: 0x100ba4e90 | FUN_100ba4e90 */

void FUN_100ba4e90(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  code *pcVar8;
  undefined1 uVar9;
  bool bVar10;
  long *plVar11;
  _NativeDictionary _Var12;
  ulong uVar13;
  long lVar14;
  ulong *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  
  plVar11 = param_1;
  FUN_100ba4a6c();
  lVar14 = 0;
  puVar19 = (ulong *)(plVar11 + 8);
  uVar20 = 1L << ((ulong)*(byte *)(plVar11 + 4) & 0x3f);
  uVar23 = 0xffffffffffffffff;
  if ((long)uVar20 < 0x40) {
    uVar23 = ~(-1L << (uVar20 & 0x3f));
  }
  uVar23 = uVar23 & *puVar19;
  uVar20 = uVar20 + 0x3f >> 6;
LAB_100ba4efc:
  do {
    lVar21 = lVar14;
    if (uVar23 == 0) {
      lVar21 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100ba526c);
        (*pcVar8)();
      }
      if ((long)uVar20 <= lVar21) {
LAB_100ba5240:
        _swift_release(plVar11);
        return;
      }
      uVar23 = puVar19[lVar21];
      if (uVar23 == 0) {
        lVar21 = lVar14 + 2;
        if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
        uVar23 = puVar19[lVar21];
        if (uVar23 == 0) {
          lVar21 = lVar14 + 3;
          if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
          uVar23 = puVar19[lVar21];
          if (uVar23 == 0) {
            lVar21 = lVar14 + 4;
            if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
            uVar23 = puVar19[lVar21];
            if (uVar23 == 0) {
              lVar21 = lVar14 + 5;
              if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
              uVar23 = puVar19[lVar21];
              if (uVar23 == 0) {
                lVar21 = lVar14 + 6;
                if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
                uVar23 = puVar19[lVar21];
                if (uVar23 == 0) {
                  lVar21 = lVar14 + 7;
                  if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
                  uVar23 = puVar19[lVar21];
                  if (uVar23 == 0) {
                    puVar15 = (ulong *)(plVar11 + lVar14 + 0x10);
                    lVar14 = lVar14 + 8;
                    do {
                      lVar21 = lVar14;
                      if ((long)uVar20 <= lVar21) goto LAB_100ba5240;
                      uVar23 = *puVar15;
                      puVar15 = puVar15 + 1;
                      lVar14 = lVar21 + 1;
                    } while (uVar23 == 0);
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar14 = lVar21;
    uVar7 = (uVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar23 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar23 = uVar23 - 1 & uVar23;
    uVar16 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar14 << 6;
    puVar15 = (ulong *)(plVar11[6] + uVar16 * 0x10);
    uVar7 = *puVar15;
    uVar3 = puVar15[1];
    puVar17 = (undefined8 *)(plVar11[7] + uVar16 * 0x18);
    uVar1 = *puVar17;
    uVar4 = puVar17[1];
    uVar6 = *(undefined1 *)(puVar17 + 2);
    lVar22 = *param_1;
    lVar21 = *(long *)(lVar22 + 0x10);
    _swift_bridgeObjectRetain(uVar3);
    if (lVar21 == 0) {
      FUN_100ba5a34(uVar1,uVar4,uVar6);
LAB_100ba5114:
      uVar9 = (undefined1)*param_1;
      _swift_isUniquelyReferenced_nonNull_native();
      lVar22 = *param_1;
      uVar16 = uVar7;
      uVar13 = uVar3;
      FUN_100071370();
      lVar21 = *(long *)(lVar22 + 0x10);
      uVar18 = (ulong)~(uint)uVar13 & 1;
      if (SCARRY8(lVar21,uVar18)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100ba5268);
        (*pcVar8)();
      }
      _Var12.unknown = &DAT_101046318;
      FUN_100b6730c();
      bVar10 = Swift::_NativeDictionary::ensureUnique((bool)uVar9,lVar21 + uVar18,_Var12);
      if ((bVar10) &&
         (uVar16 = uVar7, uVar18 = uVar3, FUN_100071370(), ((uint)uVar13 & 1) != ((uint)uVar18 & 1))
         ) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100ba5280);
        (*pcVar8)();
      }
      if ((uVar13 & 1) == 0) {
        lVar21 = lVar22 + (uVar16 >> 6) * 8;
        *(ulong *)(lVar21 + 0x40) = *(ulong *)(lVar21 + 0x40) | 1L << (uVar16 & 0x3f);
        puVar15 = (ulong *)(*(long *)(lVar22 + 0x30) + uVar16 * 0x10);
        *puVar15 = uVar7;
        puVar15[1] = uVar3;
        puVar17 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar16 * 0x18);
        *puVar17 = uVar1;
        puVar17[1] = uVar4;
        *(undefined1 *)(puVar17 + 2) = uVar6;
        if (SCARRY8(*(long *)(lVar22 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100ba5270);
          (*pcVar8)();
        }
        *(long *)(lVar22 + 0x10) = *(long *)(lVar22 + 0x10) + 1;
      }
      else {
        puVar17 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar16 * 0x18);
        FUN_100b69560(*puVar17,puVar17[1],*(undefined1 *)(puVar17 + 2));
        *puVar17 = uVar1;
        puVar17[1] = uVar4;
        *(undefined1 *)(puVar17 + 2) = uVar6;
        _swift_bridgeObjectRelease(uVar3);
      }
      *param_1 = lVar22;
      goto LAB_100ba4efc;
    }
    _swift_bridgeObjectRetain(uVar3);
    FUN_100ba5a34(uVar1,uVar4,uVar6);
    _swift_bridgeObjectRetain(lVar22);
    uVar16 = uVar7;
    uVar13 = uVar3;
    FUN_100071370();
    if ((uVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(lVar22);
      goto LAB_100ba5114;
    }
    puVar17 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar16 * 0x18);
    uVar2 = *puVar17;
    uVar5 = puVar17[1];
    uVar9 = *(undefined1 *)(puVar17 + 2);
    FUN_100ba5a34(uVar2,uVar5,uVar9);
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(lVar22);
    FUN_100b69560(uVar2,uVar5,uVar9);
    FUN_100b69560(uVar1,uVar4,uVar6);
    _swift_bridgeObjectRelease(uVar3);
  } while( true );
}



/* Address: 0x100ba5280 | FUN_100ba5280 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100ba5280(void)

{
  NSString *pNVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  ID unaff_x20;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = _objc_msgSend(unaff_x20,"getContextForKey:",pNVar1);
  if (IVar2 == 0) {
    DVar3.unknown = (undefined *)0x0;
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  return DVar3.unknown;
}



/* Address: 0x100ba5310 | FUN_100ba5310 */

__RawDictionaryStorage * FUN_100ba5310(__RawDictionaryStorage *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  __RawDictionaryStorage *p_Var8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_101046320;
  FUN_100b6730c();
  p_Var4 = param_1;
  Swift::_DictionaryStorage::_copy(this,param_1);
  lVar11 = 0;
  p_Var8 = param_1 + 0x40;
  uVar6 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar6 < 0x40) {
    uVar10 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)p_Var8;
  uVar6 = uVar6 + 0x3f >> 6;
  lVar12 = lVar11;
  if (uVar10 == 0) goto LAB_100ba53b4;
  do {
    uVar9 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar11 << 6;
    while( true ) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_80);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100bbdcf8(&local_a0,auStack_80);
      FUN_100004594(auStack_80);
      uVar5 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(p_Var4 + uVar5 + 0x40) = *(ulong *)(p_Var4 + uVar5 + 0x40) | 1L << (uVar9 & 0x3f);
      puVar7 = (undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar9 * 0x10);
      *puVar7 = uVar1;
      puVar7[1] = uVar2;
      puVar7 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar9 * 0x18);
      puVar7[1] = uStack_98;
      *puVar7 = local_a0;
      *(undefined1 *)(puVar7 + 2) = local_90;
      if (SCARRY8(*(long *)(p_Var4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba5510);
        (*pcVar3)();
      }
      *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
      lVar12 = lVar11;
      if (uVar10 != 0) break;
LAB_100ba53b4:
      lVar11 = lVar12 + 1;
      if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ba5514);
        (*pcVar3)();
      }
      if ((long)uVar6 <= lVar11) {
        return p_Var4;
      }
      uVar10 = *(ulong *)(p_Var8 + lVar11 * 8);
      if (uVar10 == 0) {
        lVar11 = lVar12 + 2;
        if ((long)uVar6 <= lVar11) {
          return p_Var4;
        }
        uVar10 = *(ulong *)(p_Var8 + lVar11 * 8);
        if (uVar10 == 0) {
          lVar11 = lVar12 + 3;
          if ((long)uVar6 <= lVar11) {
            return p_Var4;
          }
          uVar10 = *(ulong *)(p_Var8 + lVar11 * 8);
          if (uVar10 == 0) {
            lVar11 = lVar12 + 4;
            if ((long)uVar6 <= lVar11) {
              return p_Var4;
            }
            uVar10 = *(ulong *)(p_Var8 + lVar11 * 8);
            if (uVar10 == 0) {
              do {
                lVar11 = lVar12;
                if ((long)uVar6 <= lVar11 + 5) {
                  return p_Var4;
                }
                uVar10 = *(ulong *)(param_1 + lVar11 * 8 + 0x68);
                lVar12 = lVar11 + 1;
              } while (uVar10 == 0);
              lVar11 = lVar11 + 5;
            }
          }
        }
      }
      uVar9 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar11 << 6;
    }
  } while( true );
}



/* Address: 0x100ba5514 | FUN_100ba5514 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba5514(undefined8 param_1,undefined8 *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  String SVar7;
  undefined *local_68 [3];
  undefined *local_50;
  undefined **ppuStack_48;
  
  local_50 = &DAT_100f3b990;
  ppuStack_48 = &PTR_PTR_100f3b9b0;
  puVar2 = &DAT_100f39550;
  _swift_allocObject(&DAT_100f39550,0x48,7);
  uVar4 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  *(undefined8 *)(puVar2 + 0x18) = param_2[1];
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined8 *)(puVar2 + 0x28) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar4 = param_2[4];
  *(undefined8 *)(puVar2 + 0x38) = param_2[5];
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  *(undefined8 *)(puVar2 + 0x40) = param_2[6];
  local_68[0] = puVar2;
  FUN_100b7ee10(param_2);
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"sdkName");
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd5810(SVar7.str,SVar7.bridgeObject,0,0x732e7972746e6573,0xef656d616e2e6b64);
  _objc_msgSend((ID)&objc::class_t::SentryMeta,"versionString");
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bd5810(SVar7.str,SVar7.bridgeObject,0,0xd000000000000012,0x8000000100dcd7f0);
  ppuVar1 = local_68;
  FUN_100004640(ppuVar1,&DAT_100f3b990);
  puVar2 = *ppuVar1;
  puVar3 = ppuVar1[1];
  _swift_bridgeObjectRetain(puVar3);
  FUN_100bd5810(puVar2,puVar3,0,0xd000000000000012,0x8000000100dcd810);
  ppuVar1 = local_68;
  FUN_100004640(ppuVar1,local_50);
  puVar2 = ppuVar1[3];
  if (puVar2 != (undefined *)0x0) {
    puVar3 = ppuVar1[2];
    _swift_bridgeObjectRetain(puVar2);
    FUN_100bd5810(puVar3,puVar2,0,0x722e7972746e6573,0xee00657361656c65);
  }
  FUN_100004594(local_68);
  return;
}



/* Address: 0x100ba56f8 | FUN_100ba56f8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba56f8(undefined8 param_1,ID param_2)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_2,"userObject");
  if ((IVar1 != 0) && (IVar1 = _objc_msgSend(IVar1,"userId"), IVar1 != 0)) {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100bd5810(SVar2.str,SVar2.bridgeObject,0,0x64692e72657375,&DAT_e700000000000000);
  }
  IVar1 = _objc_msgSend(param_2,"userObject");
  if ((IVar1 != 0) && (IVar1 = _objc_msgSend(IVar1,"name"), IVar1 != 0)) {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100bd5810(SVar2.str,SVar2.bridgeObject,0,0x6d616e2e72657375,0xe900000000000065);
  }
  IVar1 = _objc_msgSend(param_2,"userObject");
  if ((IVar1 != 0) && (IVar1 = _objc_msgSend(IVar1,"email"), IVar1 != 0)) {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100bd5810(SVar2.str,SVar2.bridgeObject,0,0x616d652e72657375,0xea00000000006c69);
  }
  return;
}



/* Address: 0x100ba58a8 | FUN_100ba58a8 */

void FUN_100ba58a8(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_58 [3];
  undefined *local_40;
  undefined **ppuStack_38;
  
  local_40 = &DAT_100f3b990;
  ppuStack_38 = &PTR_PTR_100f3b9b0;
  puVar1 = &DAT_100f39550;
  _swift_allocObject(&DAT_100f39550,0x48,7);
  uVar3 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = uVar9;
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  uVar3 = param_2[4];
  *(undefined8 *)(puVar1 + 0x38) = param_2[5];
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  *(undefined8 *)(puVar1 + 0x40) = param_2[6];
  lVar6 = *param_1;
  lVar7 = *(long *)(lVar6 + 0x10);
  local_58[0] = puVar1;
  FUN_100b7ee10(param_2);
  if (lVar7 != 0) {
    _swift_bridgeObjectRetain(lVar6);
    uVar4 = 0;
    FUN_100071370(0x64692e72657375);
    _swift_bridgeObjectRelease(lVar6);
    if ((uVar4 & 1) != 0) goto LAB_100ba5a18;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar6);
    uVar4 = 0xe900000000000065;
    FUN_100071370(0x6d616e2e72657375);
    _swift_bridgeObjectRelease(lVar6);
    if ((uVar4 & 1) != 0) goto LAB_100ba5a18;
    if (*(long *)(lVar6 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar6);
      uVar4 = 0xea00000000006c69;
      FUN_100071370(0x616d652e72657375);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar4 & 1) != 0) goto LAB_100ba5a18;
    }
  }
  ppuVar2 = local_58;
  FUN_100004640(ppuVar2,&DAT_100f3b990);
  puVar1 = ppuVar2[5];
  puVar5 = ppuVar2[6];
  uVar3 = 0;
  FUN_100bccb10(0);
  FUN_100bcc8f0(puVar1,puVar5,uVar3);
  if (puVar5 != (undefined *)0x0) {
    FUN_100bd5810();
  }
LAB_100ba5a18:
  FUN_100004594(local_58);
  return;
}



/* Address: 0x100ba5a34 | FUN_100ba5a34 */

void FUN_100ba5a34(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  switch(param_3) {
  case 0:
    break;
  default:
    return;
  case 4:
  case 5:
  case 6:
  case 7:
    param_2 = param_1;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100ba5a6c | FUN_100ba5a6c */

void FUN_100ba5a6c(void)

{
  return;
}



/* Address: 0x100ba5a8c | FUN_100ba5a8c */

void FUN_100ba5a8c(undefined8 param_1,SEL param_2)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,param_2);
  return;
}



/* Address: 0x100ba5a94 | FUN_100ba5a94 */

void FUN_100ba5a94(void)

{
  FUN_100b7ee58();
  return;
}



/* Address: 0x100ba5a9c | FUN_100ba5a9c */

void FUN_100ba5a9c(void)

{
  FUN_100b7ee10();
  return;
}



/* Address: 0x100ba5aa4 | FUN_100ba5aa4 */

void FUN_100ba5aa4(void)

{
  FUN_100ba5ac4();
  return;
}



/* Address: 0x100ba5ac4 | FUN_100ba5ac4 */

/* WARNING: Removing unreachable block (ram,0x000100ba5aec) */

__int64 FUN_100ba5ac4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  __int64 _Var2;
  Data unaff_x20;
  
  FUN_100bf0dd0();
  _Var2 = Foundation::Data::get_count(unaff_x20);
  FUN_10003bf2c(unaff_x20.unknown,param_2);
  if (-1 < _Var2) {
    return _Var2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba5bf0);
  (*pcVar1)();
}



/* Address: 0x100ba5bf0 | FUN_100ba5bf0 */

undefined1  [16] FUN_100ba5bf0(void)

{
  return ZEXT816(0x100f39578);
}



/* Address: 0x100ba5c00 | thunk_FUN_100ba5c04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 thunk_FUN_100ba5c04(void)

{
  ID IVar1;
  
  IVar1 = SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  IVar1 = _objc_msgSend(IVar1,"scope");
  IVar1 = _objc_msgSend(IVar1,"getCastedInternalSpan");
  if (IVar1 == 0) {
    FUN_100b84dac();
    FUN_100b84df8(1,0xd000000000000044,0x8000000100dcd960,0xd000000000000070,0x8000000100dc72c0,0x10
                 );
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"tracer");
    _objc_msgSend(IVar1,"finishForCrash");
    FUN_100b6f934();
  }
  return 0;
}



/* Address: 0x100ba5c04 | FUN_100ba5c04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba5c04(void)

{
  ID IVar1;
  
  IVar1 = SentrySDKInternal::currentHub((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  IVar1 = _objc_msgSend(IVar1,"scope");
  IVar1 = _objc_msgSend(IVar1,"getCastedInternalSpan");
  if (IVar1 == 0) {
    FUN_100b84dac();
    FUN_100b84df8(1,0xd000000000000044,0x8000000100dcd960,0xd000000000000070,0x8000000100dc72c0,0x10
                 );
  }
  else {
    IVar1 = _objc_msgSend(IVar1,"tracer");
    _objc_msgSend(IVar1,"finishForCrash");
    FUN_100b6f934();
  }
  return 0;
}



/* Address: 0x100ba5d0c | FUN_100ba5d0c */

void FUN_100ba5d0c(long param_1)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_40 = &DAT_100c9b9b8;
  puStack_38 = &DAT_100c9b9d0;
  puStack_28 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_30 = &DAT_100c9b9d0;
  local_20 = &DAT_100c9b9d0;
  puStack_18 = puStack_28;
  _swift_initClassMetadata2(param_1,0,6,&local_40,param_1 + 0x80);
  return;
}



/* Address: 0x100ba5d68 | FUN_100ba5d68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_100ba5d68(void)

{
  byte bVar1;
  ID IVar2;
  long unaff_x20;
  
  if (*(ID *)(unaff_x20 + DAT_101046348) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + DAT_101046348),"uninstall");
  }
  FUN_100b2bf1c(0);
  IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  FUN_100ba66a0(IVar2);
  FUN_100b6f934();
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xc,0,0);
  if ((bVar1 & 1) != 0) {
    IVar2 = _objc_msgSend((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    FUN_100ba66a0(IVar2);
    return 0;
  }
  return bVar1;
}



/* Address: 0x100ba5e48 | FUN_100ba5e48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba5e48(undefined8 param_1)

{
  FUN_100ba5d68(param_1);
  return 0;
}



/* Address: 0x100ba5e70 | FUN_100ba5e70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba5e70(ID param_1)

{
  ID IVar1;
  ID self;
  undefined *puVar2;
  void *aBlock;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  code *local_30;
  undefined *local_28;
  
  IVar1 = _objc_msgSend(param_1,"isLowPowerModeEnabled");
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  puVar2 = &DAT_100f39650;
  _swift_allocObject(&DAT_100f39650,0x11,7);
  puVar2[0x10] = (char)IVar1;
  local_30 = FUN_100b673e4;
  local_50 = PTR___NSConcreteStackBlock_100ea82a0;
  local_48 = 0x42000000;
  local_40 = switchD_100bab490::caseD_51;
  puStack_38 = &DAT_100f39668;
  local_28 = puVar2;
  aBlock = __Block_copy(&local_50);
  _swift_release(local_28);
  _objc_msgSend(self,"configureScope:",aBlock);
  __Block_release(aBlock);
  return 0;
}



/* Address: 0x100ba5f4c | FUN_100ba5f4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba5f4c(void)

{
  ID self;
  void *aBlock;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  code *local_30;
  undefined8 uStack_28;
  
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  local_30 = FUN_100ba5ff8;
  uStack_28 = 0;
  local_50 = PTR___NSConcreteStackBlock_100ea82a0;
  local_48 = 0x42000000;
  local_40 = switchD_100bab490::caseD_51;
  puStack_38 = &DAT_100f39690;
  aBlock = __Block_copy(&local_50);
  _objc_msgSend(self,"configureScope:",aBlock);
  __Block_release(aBlock);
  return 0;
}



/* Address: 0x100ba5ff8 | FUN_100ba5ff8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba6168 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_100ba5ff8(ID param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  Locale LVar4;
  ID IVar5;
  String *pSVar6;
  undefined *puVar7;
  Locale LVar8;
  NSDictionary *pNVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined1 auStack_b0 [8];
  undefined1 local_a8 [8];
  String local_a0;
  undefined8 uStack_90;
  long lStack_88;
  String local_80;
  undefined8 uStack_70;
  undefined *local_68;
  
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  lVar11 = *(long *)(LVar4.unknown + -8);
  lVar10 = *(long *)(lVar11 + 0x40);
  IVar5 = _objc_msgSend(param_1,"contextDictionary");
  local_a0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  LVar8.unknown = local_a0.bridgeObject;
  _swift_bridgeObjectRetain(LVar8.unknown);
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  pSVar6 = &local_a0;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (pSVar6,PTR___type_metadata_for_Swift_String_100eac208);
  IVar5 = _objc_msgSend(IVar5,"__swift_objectForKeyedSubscript:",pSVar6);
  _swift_unknownObjectRelease(pSVar6);
  if (IVar5 == 0) {
    local_a0 = (String)ZEXT816(0);
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  local_80 = local_a0;
  local_68 = (undefined *)lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _swift_bridgeObjectRelease(LVar8.unknown);
    pSVar6 = &local_80;
    FUN_100013954(pSVar6);
  }
  else {
    puVar7 = &DAT_101044968;
    FUN_100b6730c(&DAT_101044968);
    pSVar6 = (String *)local_a8;
    _swift_dynamicCast(pSVar6,&local_80,puVar2 + 8,puVar7,6);
    if (((ulong)pSVar6 & 1) != 0) {
      _swift_bridgeObjectRelease();
      goto LAB_100ba6170;
    }
    _swift_bridgeObjectRelease(LVar8.unknown);
  }
  LVar8.unknown =
       (undefined *)
       Swift::Dictionary::_init
                 (pSVar6,PTR___type_metadata_for_Swift_String_100eac208,puVar2 + 8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218)
  ;
  local_a8 = (undefined1  [8])LVar8.unknown;
LAB_100ba6170:
  local_a0.str = (char *)local_a8;
  LVar8 = Foundation::Locale::get_autoupdatingCurrent(LVar8);
  SVar12 = Foundation::Locale::get_identifier(LVar8);
  (**(code **)(lVar11 + 8))(auStack_b0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),LVar4.unknown);
  local_68 = puVar1;
  local_80 = SVar12;
  FUN_100b78fe8(&local_80,0x656c61636f6c,&DAT_e600000000000000);
  pcVar3 = local_a0.str;
  pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pcVar3);
  _objc_msgSend(param_1,"setContextValue:forKey:",pNVar9,&cf_device);
  return 0;
}



/* Address: 0x100ba6230 | FUN_100ba6230 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba6230(undefined8 param_1)

{
  FUN_100ba5f4c(param_1);
  return 0;
}



/* Address: 0x100ba6258 | FUN_100ba6258 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100ba6258(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  ID *pIVar2;
  Notification NVar3;
  ID local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  NVar3.pastePaused.bridgeObject = param_2;
  NVar3.pastePaused.str = param_1;
  NVar3.syncInProgress.bridgeObject = param_4;
  NVar3.syncInProgress.str = param_3;
  Foundation::Notification::_get_object(NVar3);
  if (local_38 == 0) {
    FUN_100013954(auStack_50);
  }
  else {
    uVar1 = 0;
    FUN_100ba6634(0);
    pIVar2 = &local_58;
    _swift_dynamicCast(pIVar2,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar1,6);
    if ((int)pIVar2 != 0) goto LAB_100ba62e4;
  }
  local_58 = _objc_msgSend((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
LAB_100ba62e4:
  FUN_100ba5e70(local_58);
  return 0;
}



/* Address: 0x100ba630c | FUN_100ba630c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ba630c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  Notification NVar3;
  Notification NVar4;
  
  NVar3 = Foundation::Notification::typeMetadataAccessor();
  NVar4.pastePaused.bridgeObject = NVar3.pastePaused.bridgeObject;
  lVar2 = *(long *)(NVar3.pastePaused.str + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  NVar4.pastePaused.str = param_3;
  NVar4.syncInProgress = NVar3.syncInProgress;
  NVar4 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar4);
  FUN_100ba6258(&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
                NVar4.pastePaused.bridgeObject,NVar4.syncInProgress.str,
                NVar4.syncInProgress.bridgeObject);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),NVar3.pastePaused.str);
  return;
}



/* Address: 0x100ba63a0 | FUN_100ba63a0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ba64d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_100ba63a0(ID param_1,undefined1 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  ID self;
  String *pSVar3;
  char **ppcVar4;
  undefined *puVar5;
  NSDictionary *pNVar6;
  char *local_88;
  String local_80;
  undefined8 uStack_70;
  long lStack_68;
  char *local_60;
  void *pvStack_58;
  undefined8 uStack_50;
  undefined *local_48;
  
  self = _objc_msgSend(param_1,"contextDictionary");
  local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _swift_bridgeObjectRetain(local_80.bridgeObject);
  pSVar3 = &local_80;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (pSVar3,PTR___type_metadata_for_Swift_String_100eac208);
  ppcVar4 = (char **)_objc_msgSend(self,"__swift_objectForKeyedSubscript:",pSVar3);
  _swift_unknownObjectRelease(pSVar3);
  if (ppcVar4 == (char **)0x0) {
    local_80 = (String)ZEXT816(0);
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(ppcVar4);
  }
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  pvStack_58 = local_80.bridgeObject;
  local_60 = local_80.str;
  local_48 = (undefined *)lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_100b678c0();
    FUN_100013954(&local_60);
  }
  else {
    puVar5 = &DAT_101044968;
    FUN_100b6730c(&DAT_101044968);
    ppcVar4 = &local_88;
    _swift_dynamicCast(ppcVar4,&local_60,puVar1 + 8,puVar5,6);
    if (((ulong)ppcVar4 & 1) != 0) {
      FUN_100b678c0();
      goto LAB_100ba64d8;
    }
    FUN_100b678c0();
  }
  local_88 = (char *)Swift::Dictionary::_init
                               (ppcVar4,PTR___type_metadata_for_Swift_String_100eac208,puVar1 + 8,
                                PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                               );
LAB_100ba64d8:
  local_80.str = local_88;
  local_48 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_60 = (char *)(CONCAT71(local_60._1_7_,param_2) & 0xffffffffffffff01);
  FUN_100b78fe8(&local_60,0x65776f705f776f6c,0xee0065646f6d5f72);
  pcVar2 = local_80.str;
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pcVar2);
  _objc_msgSend(param_1,"setContextValue:forKey:",pNVar6,&cf_device);
  FUN_100b6f934();
  return 0;
}



/* Address: 0x100ba6588 | FUN_100ba6588 */

void FUN_100ba6588(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryCrashIntegration",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ba65b4);
  (*pcVar1)();
}



/* Address: 0x100ba65b4 | FUN_100ba65b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba65b4(long param_1)

{
  FUN_100ba6588();
  _swift_unknownObjectWeakDestroy(param_1 + DAT_101046328);
  FUN_100b78cd4(DAT_101046330);
  FUN_100b78cd4(DAT_101046338);
  FUN_100b78cd4(DAT_101046340);
  FUN_100b78cd4(DAT_101046348);
  return 0;
}



/* Address: 0x100ba65c0 | FUN_100ba65c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba65c0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + DAT_101046328);
  FUN_100b78cd4(DAT_101046330);
  FUN_100b78cd4(DAT_101046338);
  FUN_100b78cd4(DAT_101046340);
  FUN_100b78cd4(DAT_101046348);
  return 0;
}



/* Address: 0x100ba6628 | FUN_100ba6628 */

void FUN_100ba6628(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100ccea14);
  return;
}



/* Address: 0x100ba6634 | FUN_100ba6634 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100ba6634(void)

{
  undefined *puVar1;
  
  if (DAT_1010463f8 == (undefined *)0x0) {
    puVar1 = &_OBJC_CLASS___NSProcessInfo;
    _swift_getObjCClassMetadata();
    DAT_1010463f8 = puVar1;
  }
  return;
}



/* Address: 0x100ba6670 | FUN_100ba6670 */

void FUN_100ba6670(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100ba6680 | FUN_100ba6680 */

void FUN_100ba6680(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100ba6690 | FUN_100ba6690 */

void FUN_100ba6690(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100ba6698 | thunk_FUN_100ba6680 */

void thunk_FUN_100ba6680(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100ba669c | thunk_FUN_100ba6690 */

void thunk_FUN_100ba6690(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100ba66a0 | FUN_100ba66a0 */

void FUN_100ba66a0(ID param_1)

{
  long unaff_x23;
  
  _objc_msgSend(param_1,*(SEL *)(unaff_x23 + 0x58));
  return;
}



/* Address: 0x100ba66b0 | _TtC6Sentry33SentryDefaultEventContextEnricher::enrichWithAppState: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry33SentryDefaultEventContextEnricher::enrichWithAppState_
             (ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  NSDictionary *pNVar2;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease();
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(DVar1.unknown);
  return (ID)pNVar2;
}



/* Address: 0x100ba672c | FUN_100ba672c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ba672c(void)

{
  return ZEXT816(0x101046440);
}



/* Address: 0x100ba674c | FUN_100ba674c */

void FUN_100ba674c(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c9ba88;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x60);
  return;
}



/* Address: 0x100ba678c | FUN_100ba678c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ba678c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = DAT_1010464a0;
  if (*(long *)(unaff_x20 + DAT_1010464a0) != 0) {
    FUN_100bd6968(*(long *)(unaff_x20 + DAT_1010464a0));
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  return 0;
}


