/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b8d894 | SentryOptions::parsedDsn */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryOptions::parsedDsn(ID param_1,SEL param_2)

{
  FUN_100b8d8b4();
  return param_1;
}



/* Address: 0x100b8d8b4 | FUN_100b8d8b4 */

void FUN_100b8d8b4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = SentryOptions::parsedDsn;
  FUN_100b78c58();
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  FUN_100b78d78();
  FUN_100b6f9fc(uVar2);
  return;
}



/* Address: 0x100b8d8e4 | SentryOptions::setParsedDsn: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setParsedDsn_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b8d924(param_3);
  return;
}



/* Address: 0x100b8d924 | FUN_100b8d924 */

void FUN_100b8d924(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8d950 | FUN_100b8d950 */

void FUN_100b8d950(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::parsedDsn;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8d97c | SentryOptions::debug */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::debug(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8d9a0();
  return uVar1 & 1;
}



/* Address: 0x100b8d9a0 | FUN_100b8d9a0 */

void FUN_100b8d9a0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::debug;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8d9c8 | SentryOptions::setDebug: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setDebug_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8d9ec(param_3);
  return;
}



/* Address: 0x100b8d9ec | FUN_100b8d9ec */

void FUN_100b8d9ec(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::debug;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8da18 | FUN_100b8da18 */

void FUN_100b8da18(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::debug;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8da44 | SentryOptions::diagnosticLevel */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryOptions::diagnosticLevel(ID param_1,SEL param_2)

{
  FUN_100b8da64();
  return param_1;
}



/* Address: 0x100b8da64 | FUN_100b8da64 */

void FUN_100b8da64(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::diagnosticLevel;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8da8c | SentryOptions::setDiagnosticLevel: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setDiagnosticLevel_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100b8dab0(param_3);
  return;
}



/* Address: 0x100b8dab0 | FUN_100b8dab0 */

void FUN_100b8dab0(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::diagnosticLevel;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8dadc | FUN_100b8dadc */

void FUN_100b8dadc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::diagnosticLevel;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8db08 | FUN_100b8db08 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b8db08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined *puVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  IVar3 = _objc_msgSend((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
  FUN_100b93e98();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  if (IVar3 == 0) {
    return;
  }
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  if (*(long *)(IVar3 + 0x10) == 0) {
LAB_100b8dbd0:
    local_58 = puVar1;
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(IVar3);
    uVar5 = 0;
    lVar4 = -0x2fffffffffffffee;
    FUN_100071370(0xd000000000000012);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar3);
      goto LAB_100b8dbd0;
    }
    FUN_10000cbfc(*(long *)(IVar3 + 0x38) + lVar4 * 0x20,&local_90);
    _swift_bridgeObjectRelease(IVar3);
    FUN_100011080(&local_90,&local_70);
  }
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  pcVar6 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_70,&local_50,pcVar6,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_100004594(&local_70);
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x40;
  SVar10.bridgeObject = puVar7;
  SVar10.str = pcVar6;
  Swift::String::append(SVar8,SVar10);
  if (*(long *)(IVar3 + 0x10) == 0) {
LAB_100b8dc78:
    local_58 = puVar1;
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(IVar3);
    lVar4 = -0x2fffffffffffffe6;
    uVar5 = 0;
    FUN_100071370(0xd00000000000001a);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(IVar3);
      goto LAB_100b8dc78;
    }
    FUN_10000cbfc(*(long *)(IVar3 + 0x38) + lVar4 * 0x20,&local_90);
    _swift_bridgeObjectRelease(IVar3);
    FUN_100011080(&local_90,&local_70);
  }
  pcVar6 = puVar2 + 8;
  puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_70,&local_50,pcVar6,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_100004594(&local_70);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x2b;
  SVar11.bridgeObject = puVar7;
  SVar11.str = pcVar6;
  Swift::String::append(SVar9,SVar11);
  if (*(long *)(IVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(IVar3);
    lVar4 = 0x656c646e75424643;
    uVar5 = 0;
    FUN_100071370(0x656c646e75424643);
    if ((uVar5 & 1) != 0) {
      FUN_10000cbfc(*(long *)(IVar3 + 0x38) + lVar4 * 0x20,&local_90);
      _swift_bridgeObjectRelease(IVar3);
      goto LAB_100b8dd24;
    }
    _swift_bridgeObjectRelease(IVar3);
  }
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
LAB_100b8dd24:
  _swift_bridgeObjectRelease(IVar3);
  if (local_78 == 0) {
    local_58 = puVar1;
    local_70 = 0;
    uStack_68 = 0xe000000000000000;
  }
  else {
    FUN_100011080(&local_90,&local_70);
  }
  Swift::__print_unlocked
            (&local_70,&local_50,puVar2 + 8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_100004594(&local_70);
  return;
}



/* Address: 0x100b8dd94 | SentryOptions::releaseName */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::releaseName(ID param_1,SEL param_2)

{
  FUN_100b8dda0(param_1,param_2,FUN_100b8ddd4);
  return param_1;
}



/* Address: 0x100b8dda0 | FUN_100b8dda0 */

void FUN_100b8dda0(undefined8 param_1,long param_2)

{
  undefined8 unaff_x20;
  
  FUN_100b94100();
  if (param_2 == 0) {
    unaff_x20 = 0;
  }
  else {
    (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b94108();
  }
  FUN_100b94114(unaff_x20);
  return;
}



/* Address: 0x100b8ddd4 | FUN_100b8ddd4 */

void FUN_100b8ddd4(void)

{
  FUN_100b92d80(&SentryOptions::releaseName);
  return;
}



/* Address: 0x100b8dde0 | SentryOptions::setReleaseName: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setReleaseName_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b8ddec();
  return;
}



/* Address: 0x100b8ddec | FUN_100b8ddec */

void FUN_100b8ddec(char *param_1,void *param_2,long param_3)

{
  String SVar1;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  if (param_3 != 0) {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_10021b704(SVar1.str,SVar1.bridgeObject);
  FUN_100b940c0();
  FUN_100b78d38(param_1);
  return;
}



/* Address: 0x100b8de38 | FUN_100b8de38 */

void FUN_100b8de38(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92f38(param_1,param_2,&SentryOptions::releaseName);
  return;
}



/* Address: 0x100b8de44 | FUN_100b8de44 */

void FUN_100b8de44(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::releaseName;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8de70 | SentryOptions::dist */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::dist(ID param_1,SEL param_2)

{
  FUN_100b8dda0(param_1,param_2,FUN_100b8de7c);
  return param_1;
}



/* Address: 0x100b8de7c | FUN_100b8de7c */

void FUN_100b8de7c(void)

{
  FUN_100b92d80(&SentryOptions::dist);
  return;
}



/* Address: 0x100b8de88 | SentryOptions::setDist: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setDist_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b8ddec();
  return;
}



/* Address: 0x100b8de94 | FUN_100b8de94 */

void FUN_100b8de94(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92f38(param_1,param_2,&SentryOptions::dist);
  return;
}



/* Address: 0x100b8dea0 | FUN_100b8dea0 */

void FUN_100b8dea0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::dist;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8decc | SentryOptions::environment */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::environment(ID param_1,SEL param_2)

{
  FUN_100b92ab4(param_1,param_2,FUN_100b8ded8);
  return param_1;
}



/* Address: 0x100b8ded8 | FUN_100b8ded8 */

void FUN_100b8ded8(void)

{
  FUN_100b92d80(&SentryOptions::environment);
  return;
}



/* Address: 0x100b8dee4 | SentryOptions::setEnvironment: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setEnvironment_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b92af4();
  return;
}



/* Address: 0x100b8def0 | FUN_100b8def0 */

void FUN_100b8def0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b92dd4(param_1,param_2,&SentryOptions::environment,PTR__swift_bridgeObjectRelease_100eae160
               );
  return;
}



/* Address: 0x100b8df04 | FUN_100b8df04 */

void FUN_100b8df04(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::environment;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8df30 | SentryOptions::enabled */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enabled(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8df54();
  return uVar1 & 1;
}



/* Address: 0x100b8df54 | FUN_100b8df54 */

void FUN_100b8df54(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enabled;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8df7c | SentryOptions::setEnabled: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8dfa0(param_3);
  return;
}



/* Address: 0x100b8dfa0 | FUN_100b8dfa0 */

void FUN_100b8dfa0(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enabled;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8dfcc | FUN_100b8dfcc */

void FUN_100b8dfcc(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enabled;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8dff8 | SentryOptions::shutdownTimeInterval */

/* Function Stack Size: 0x10 bytes */

double SentryOptions::shutdownTimeInterval(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100b8e018();
  return in_d0;
}



/* Address: 0x100b8e018 | FUN_100b8e018 */

void FUN_100b8e018(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::shutdownTimeInterval;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e040 | SentryOptions::setShutdownTimeInterval: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setShutdownTimeInterval_(ID param_1,SEL param_2,double param_3)

{
  FUN_100b8e060();
  return;
}



/* Address: 0x100b8e060 | FUN_100b8e060 */

void FUN_100b8e060(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::shutdownTimeInterval;
  FUN_100b94020(unaff_x20 + SentryOptions::shutdownTimeInterval);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b940d0();
  return;
}



/* Address: 0x100b8e094 | FUN_100b8e094 */

void FUN_100b8e094(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::shutdownTimeInterval;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e0c0 | SentryOptions::enableCrashHandler */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableCrashHandler(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8e0e4();
  return uVar1 & 1;
}



/* Address: 0x100b8e0e4 | FUN_100b8e0e4 */

void FUN_100b8e0e4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableCrashHandler;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e10c | SentryOptions::setEnableCrashHandler: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableCrashHandler_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8e130(param_3);
  return;
}



/* Address: 0x100b8e130 | FUN_100b8e130 */

void FUN_100b8e130(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableCrashHandler;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e15c | FUN_100b8e15c */

void FUN_100b8e15c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableCrashHandler;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e188 | SentryOptions::enableUncaughtNSExceptionReporting */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableUncaughtNSExceptionReporting(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8e1ac();
  return uVar1 & 1;
}



/* Address: 0x100b8e1ac | FUN_100b8e1ac */

void FUN_100b8e1ac(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableUncaughtNSExceptionReporting;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e1d4 | SentryOptions::setEnableUncaughtNSExceptionReporting: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableUncaughtNSExceptionReporting_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8e1f8(param_3);
  return;
}



/* Address: 0x100b8e1f8 | FUN_100b8e1f8 */

void FUN_100b8e1f8(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableUncaughtNSExceptionReporting;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e224 | FUN_100b8e224 */

void FUN_100b8e224(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableUncaughtNSExceptionReporting;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e250 | SentryOptions::enableSigtermReporting */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableSigtermReporting(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8e274();
  return uVar1 & 1;
}



/* Address: 0x100b8e274 | FUN_100b8e274 */

void FUN_100b8e274(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableSigtermReporting;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e29c | SentryOptions::setEnableSigtermReporting: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableSigtermReporting_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8e2c0(param_3);
  return;
}



/* Address: 0x100b8e2c0 | FUN_100b8e2c0 */

void FUN_100b8e2c0(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableSigtermReporting;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e2ec | FUN_100b8e2ec */

void FUN_100b8e2ec(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableSigtermReporting;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e318 | SentryOptions::enableMemoryIntrospection */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableMemoryIntrospection(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8e33c();
  return uVar1 & 1;
}



/* Address: 0x100b8e33c | FUN_100b8e33c */

void FUN_100b8e33c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableMemoryIntrospection;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e364 | SentryOptions::setEnableMemoryIntrospection: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableMemoryIntrospection_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8e388(param_3);
  return;
}



/* Address: 0x100b8e388 | FUN_100b8e388 */

void FUN_100b8e388(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableMemoryIntrospection;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e3b4 | FUN_100b8e3b4 */

void FUN_100b8e3b4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableMemoryIntrospection;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e3e0 | SentryOptions::maxBreadcrumbs */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryOptions::maxBreadcrumbs(ID param_1,SEL param_2)

{
  FUN_100b8e400();
  return param_1;
}


