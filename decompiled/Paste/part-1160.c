/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bed29c | FUN_100bed29c */

void FUN_100bed29c(undefined8 param_1,__uint64 param_2)

{
  Swift::Hasher::_combine(param_2,(Hasher)param_2);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bed2bc | thunk_FUN_100bed4dc */

void thunk_FUN_100bed4dc(void)

{
  FUN_100beebcc();
  FUN_100beeeec();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed2c0 | FUN_100bed2c0 */

void FUN_100bed2c0(undefined8 param_1,undefined8 param_2)

{
  switchD_100becff0::caseD_88(param_1,param_2,switchD_100becff0::caseD_7d);
  return;
}



/* Address: 0x100bed2cc | FUN_100bed2cc */

void FUN_100bed2cc(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,FUN_100bcb6a0);
  return;
}



/* Address: 0x100bed2d8 | FUN_100bed2d8 */

void FUN_100bed2d8(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100be09e8);
  return;
}



/* Address: 0x100bed2e4 | switchD_100becff0::caseD_7e */

void switchD_100becff0::caseD_7e(void)

{
  FUN_100bed2e8();
  return;
}



/* Address: 0x100bed2e8 | FUN_100bed2e8 */

void FUN_100bed2e8(undefined8 param_1)

{
  undefined1 *puVar1;
  ulong unaff_x19;
  
  FUN_100beeb60();
  puVar1 = &DAT_65756c6176;
  if ((unaff_x19 & 1) == 0) {
    puVar1 = &DAT_65707974;
  }
  FUN_100beeb54(&DAT_e400000000000000,param_1,puVar1);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed338 | FUN_100bed338 */

void FUN_100bed338(void)

{
  char unaff_w19;
  
  FUN_100beeb60();
  if (unaff_w19 == '\0') {
    FUN_100beed28();
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed3a0 | FUN_100bed3a0 */

void FUN_100bed3a0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong unaff_x19;
  
  FUN_100beeb60();
  uVar1 = 0x65646f63;
  if ((unaff_x19 & 1) == 0) {
    uVar1 = 0x6e69616d6f64;
  }
  FUN_100beeb54(&DAT_e600000000000000,param_1,uVar1);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed3f0 | switchD_100becff0::caseD_88 */

void switchD_100becff0::caseD_88(void)

{
  FUN_100beebcc();
  FUN_100beeef8();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed41c | FUN_100bed41c */

void FUN_100bed41c(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,switchD_100bab490::caseD_85);
  return;
}



/* Address: 0x100bed428 | thunk_FUN_100bed42c */

void thunk_FUN_100bed42c(void)

{
  FUN_100bed42c();
  return;
}



/* Address: 0x100bed42c | FUN_100bed42c */

void FUN_100bed42c(void)

{
  FUN_100beebcc();
  FUN_100beeed4();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed454 | FUN_100bed454 */

void FUN_100bed454(void)

{
  char unaff_w19;
  
  FUN_100beeb60();
  if (unaff_w19 == '\0') {
    FUN_100beef4c();
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed4c4 | FUN_100bed4c4 */

void FUN_100bed4c4(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100bd5090);
  return;
}



/* Address: 0x100bed4d0 | FUN_100bed4d0 */

void FUN_100bed4d0(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100bea408);
  return;
}



/* Address: 0x100bed4dc | FUN_100bed4dc */

void FUN_100bed4dc(void)

{
  FUN_100beebcc();
  FUN_100beeeec();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed504 | FUN_100bed504 */

void FUN_100bed504(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char unaff_w19;
  
  FUN_100beeb60();
  if (unaff_w19 == '\0') {
    uVar2 = 0;
    uVar1 = 0x79746963;
  }
  else {
    uVar2 = 0xec00000065646f63;
    uVar1 = 0x5f7972746e756f63;
    if (unaff_w19 != '\x01') {
      uVar1 = 0x6e6f69676572;
    }
  }
  FUN_100beeb54(uVar2,param_1,uVar1);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed57c | FUN_100bed57c */

void FUN_100bed57c(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100ba6f0c);
  return;
}



/* Address: 0x100bed588 | FUN_100bed588 */

void FUN_100bed588(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,FUN_100b94b98);
  return;
}



/* Address: 0x100bed594 | FUN_100bed594 */

void FUN_100bed594(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,switchD_100bb6464::caseD_25);
  return;
}



/* Address: 0x100bed5a0 | FUN_100bed5a0 */

void FUN_100bed5a0(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100b7e2c0);
  return;
}



/* Address: 0x100bed5ac | FUN_100bed5ac */

void FUN_100bed5ac(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100bc9010);
  return;
}



/* Address: 0x100bed5b8 | FUN_100bed5b8 */

void FUN_100bed5b8(void)

{
  char unaff_w19;
  
  FUN_100beeb60();
  if (unaff_w19 == '\0') {
    FUN_100beede4("MAYBE_JSON_TRUNCATED");
  }
  else {
    FUN_100beec04(unaff_w19);
    FUN_100beebf0();
    FUN_100beecb0();
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed610 | FUN_100bed610 */

void FUN_100bed610(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed61c(param_1,param_2,thunk_FUN_100b8165c);
  return;
}



/* Address: 0x100bed61c | FUN_100bed61c */

void FUN_100bed61c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_68 [72];
  
  FUN_100beebcc();
  (*param_3)(param_2);
  FUN_100beeb94(auStack_68,param_2);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed664 | FUN_100bed664 */

void FUN_100bed664(void)

{
  char unaff_w19;
  
  FUN_100beeb60();
  if (unaff_w19 == '\0') {
    FUN_100beef60();
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bed6dc | FUN_100bed6dc */

ulong FUN_100bed6dc(ulong param_1)

{
  if (2 < param_1) {
    param_1 = 3;
  }
  return param_1;
}



/* Address: 0x100bed6ec | FUN_100bed6ec */

void FUN_100bed6ec(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec98c(*unaff_x20);
  return;
}



/* Address: 0x100bed704 | FUN_100bed704 */

void FUN_100bed704(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed42c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bed71c | FUN_100bed71c */

void FUN_100bed71c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100bed6dc();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bed744 | FUN_100bed744 */

void FUN_100bed744(ulong *param_1)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_1000d4d7c();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bed76c | FUN_100bed76c */

void FUN_100bed76c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry18SentryReachability::pathMonitor);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry18SentryReachability::pathMonitor) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x100bed784 | FUN_100bed784 */

void FUN_100bed784(void)

{
  FUN_100bee664();
  return;
}



/* Address: 0x100bed78c | FUN_100bed78c */

void FUN_100bed78c(void)

{
  FUN_100bedb20();
  FUN_100b56e88();
  return;
}



/* Address: 0x100bed7a8 | _TtC6Sentry18SentryReachability::addObserver: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry18SentryReachability::addObserver_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bed8f8();
  return;
}



/* Address: 0x100bed7b4 | FUN_100bed7b4 */

void FUN_100bed7b4(void)

{
  FUN_100bee568();
  return;
}



/* Address: 0x100bed7bc | FUN_100bed7bc */

void FUN_100bed7bc(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID IVar4;
  _StringGuts _Var5;
  String SVar6;
  String SVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  _Var5.unknown = param_2;
  FUN_100b84dac(0);
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x23,_Var5);
  SVar6.bridgeObject = (void *)0x8000000100dd24c0;
  SVar6.str = (char *)0xd000000000000021;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar6,SVar7);
  puVar3 = &DAT_101047eb8;
  local_48 = param_1;
  FUN_100b6730c(&DAT_101047eb8);
  Swift::__print_unlocked
            (&local_48,&local_60,puVar3,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  uVar2 = uStack_58;
  FUN_100beef18("Adding observer: ");
  FUN_100b84df8();
  _swift_bridgeObjectRelease(uVar2);
  lVar1 = _TtC6Sentry18SentryReachability::reachabilityObservers;
  _objc_msgSend(*(ID *)(param_2 + _TtC6Sentry18SentryReachability::reachabilityObservers),
                "removeObject:",param_1);
  IVar4 = _objc_msgSend(*(ID *)(param_2 + lVar1),"count");
  if (IVar4 == 0) {
    FUN_100beda64();
  }
  return;
}



/* Address: 0x100bed8ec | _TtC6Sentry18SentryReachability::removeObserver: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry18SentryReachability::removeObserver_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bed8f8();
  return;
}



/* Address: 0x100bed8f8 | FUN_100bed8f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bed8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  _swift_unknownObjectRetain(param_3);
  (*param_4)(param_3,param_1);
  _swift_unknownObjectRelease(param_3);
  return 0;
}



/* Address: 0x100bed950 | FUN_100bed950 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bed950(void)

{
  undefined8 in_x3;
  long unaff_x20;
  
  FUN_100b6f870();
  FUN_100beebe4(1,0xd000000000000017,0x8000000100dd21d0,in_x3,0x8000000100dd0da0);
  FUN_100b84df8();
  FUN_100b78d60();
  FUN_100beebe4(1,0xd000000000000025,0x8000000100dd21f0,in_x3,0x8000000100dd0da0);
  FUN_100b84df8();
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry18SentryReachability::reachabilityObservers),
                "removeAllObjects");
  FUN_100beda64();
  FUN_100b78d60();
  return 0;
}



/* Address: 0x100beda3c | _TtC6Sentry18SentryReachability::removeAllObservers */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryReachability::removeAllObservers(ID param_1,SEL param_2)

{
  FUN_100bed950(param_1);
  return;
}



/* Address: 0x100beda64 | FUN_100beda64 */

void FUN_100beda64(void)

{
  NWPathMonitor *this;
  long unaff_x20;
  
  this = *(NWPathMonitor **)(unaff_x20 + _TtC6Sentry18SentryReachability::pathMonitor);
  if (this != (NWPathMonitor *)0x0) {
    FUN_100b6f870();
    _swift_retain(this);
    FUN_100b84df8(1,0xd000000000000016,0x8000000100dd24a0,0xd00000000000005e,0x8000000100dd0da0,0x72
                 );
    Network::NWPathMonitor::cancel(this);
    FUN_100bed76c(0);
    _swift_release(this);
    return;
  }
  return;
}



/* Address: 0x100bedb20 | FUN_100bedb20 */

void FUN_100bedb20(undefined8 param_1,_StringGuts param_2)

{
  Status SVar1;
  undefined7 extraout_var;
  NWPath NVar3;
  long extraout_x8;
  long extraout_x9;
  long lVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  long lVar2;
  
  SVar1 = Network::NWPath::Status::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,SVar1.value);
  lVar4 = *(long *)(lVar2 + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar4 + 0x40));
  FUN_100b6f870();
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x33,param_2);
  NVar3.unknown = (undefined *)0x31;
  FUN_100b6f988(0x31,0x8000000100dd2460);
  Network::NWPath::get_status(NVar3);
  Swift::__print_unlocked
            (extraout_x9 - extraout_x8,&local_60,lVar2,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  (**(code **)(lVar4 + 8))(extraout_x9 - extraout_x8,lVar2);
  FUN_100beef18("Adding observer: ");
  FUN_100beed20();
  FUN_100b6f8ec();
  FUN_100bedc38(param_1);
  FUN_100bedcf0();
  return;
}



/* Address: 0x100bedc38 | FUN_100bedc38 */

undefined4 FUN_100bedc38(void)

{
  Status SVar1;
  bool bVar2;
  undefined7 extraout_var;
  NWPath NVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long extraout_x8;
  long extraout_x9;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined *puVar3;
  
  SVar1 = Network::NWPath::Status::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,SVar1.value);
  lVar8 = *(long *)(puVar3 + -8);
  NVar4.unknown = puVar3;
  FUN_100b6f9e0(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = extraout_x9 - extraout_x8;
  Network::NWPath::get_status(NVar4);
  puVar5 = puVar3;
  (**(code **)(lVar8 + 0x68))
            (lVar7,*(undefined4 *)
                    PTR___enum_case_for_Network_NWPath_Status_satisfied_Network_NWPath_Status_Type___>_Network_NWPath_Status_100eaa320
            );
  bVar2 = Network::NWPath::Status::___infix
                    ((Status)(__int8)(lVar7 - extraout_x8),(Status)(__int8)lVar7,
                     (Status)(__int8)puVar5);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar7,puVar3);
  (*pcVar9)(lVar7 - extraout_x8,puVar3);
  uVar6 = 1;
  if (!bVar2) {
    uVar6 = 2;
  }
  return uVar6;
}



/* Address: 0x100bedcf0 | FUN_100bedcf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bedcf0(undefined *param_1,undefined8 param_2,undefined8 param_3,NSString *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  _StringGuts _Var8;
  undefined1 *puVar9;
  uint uVar10;
  long unaff_x20;
  ID self;
  ulong self_00;
  ulong uVar11;
  ulong uVar12;
  String SVar13;
  String SVar14;
  ID local_78;
  undefined1 local_70 [8];
  char *pcStack_68;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry18SentryReachability::observersLock);
  _objc_msgSend(self,"lock");
  uVar5 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry18SentryReachability::reachabilityObservers),
                        "allObjects");
  puVar6 = &DAT_101047eb8;
  FUN_100b6730c();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  lVar3 = _TtC6Sentry18SentryReachability::currentConnectivity;
  uVar11 = (ulong)*(byte *)(unaff_x20 + _TtC6Sentry18SentryReachability::currentConnectivity);
  pcVar7 = "unlock";
  _objc_msgSend(self,"unlock");
  FUN_100beeda4(0);
  Swift::_StringGuts::grow(0x4f,(_StringGuts)pcVar7);
  FUN_100beec2c(", newConnectivity ",0xd00000000000004d);
  uVar10 = (uint)param_1;
  puVar9 = (undefined1 *)(ulong)(uVar10 & 0xff);
  if (((ulong)param_1 & 0xff) == 0) {
    uVar12 = 0x72616c756c6c6563;
  }
  else {
    puVar9 = &DAT_e400000000000000;
    uVar1 = 0x69666977;
    if ((uVar10 & 0xff) != 1) {
      uVar1 = 0x656e6f6e;
    }
    uVar12 = (ulong)uVar1;
  }
  FUN_100b6f870(puVar9);
  FUN_100beed4c(uVar12);
  FUN_100b678c0();
  FUN_100beec50(
               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Networking/SentryReachability.swift"
               );
  FUN_100beebe4();
  FUN_100beed44();
  FUN_100b678c0();
  uVar12 = uVar5;
  thunk_FUN_100b6cd50();
  if ((long)uVar12 < 1) {
    FUN_100b7ca10();
    FUN_100beeb7c("yCallback with connectivity: ");
  }
  else {
    *(char *)(unaff_x20 + lVar3) = (char)param_1;
    _Var8.unknown = param_1;
    FUN_100bee12c();
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar5);
      return;
    }
    FUN_100beeda4();
    Swift::_StringGuts::grow(0x38,_Var8);
    FUN_100beec2c("ered. Nothing to do.",0xd000000000000024);
    uVar2 = 0x65757274;
    if ((uVar10 & 0xff) == 2) {
      uVar2 = 0x65736c6166;
    }
    FUN_100beed4c(&DAT_e500000000000000,uVar2);
    FUN_100b678c0();
    FUN_100beec2c("ers with connected: ",0xd000000000000010);
    if (((ulong)param_1 & 0xff) == 0) {
      FUN_100beef74();
    }
    FUN_100beed4c();
    FUN_100b678c0();
    FUN_100beec50();
    FUN_100beebe4();
    FUN_100beed44();
    FUN_100b678c0();
    uVar11 = uVar5;
    thunk_FUN_100b6cd50();
    if (uVar11 != 0) {
      if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100bee12c);
        (*pcVar4)();
      }
      uVar12 = 0;
      pcVar7 = pcStack_68;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          self_00 = *(ID *)(uVar5 + uVar12 * 8 + 0x20);
          _swift_unknownObjectRetain(self_00);
        }
        else {
          self_00 = uVar12;
          FUN_100b6dbf0(uVar12,uVar5);
        }
        FUN_100beeda4();
        SVar13.bridgeObject = (void *)0xea00000000002067;
        SVar13.str = (char *)0x6e69796669746f4e;
        SVar14.bridgeObject = param_4;
        SVar14.str = pcVar7;
        Swift::String::append(SVar13,SVar14);
        local_78 = self_00;
        Swift::__print_unlocked
                  (&local_78,local_70,puVar6,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        FUN_100beec50();
        FUN_100beebe4();
        FUN_100beed44();
        FUN_100b7ca10();
        if (((ulong)param_1 & 0xff) == 0) {
          FUN_100beef74();
        }
        uVar12 = uVar12 + 1;
        pcVar7 = (char *)(ulong)((uVar10 & 0xff) != 2);
        param_4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        FUN_100b6f860();
        _objc_msgSend(self_00,"connectivityChanged:typeDescription:");
        _swift_unknownObjectRelease(self_00);
      } while (uVar11 != uVar12);
    }
    FUN_100b7ca10();
    FUN_100beeb7c(", connectivity: ");
  }
  FUN_100b84df8();
  return;
}



/* Address: 0x100bee12c | FUN_100bee12c */

bool FUN_100bee12c(uint param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  if ((param_1 & 0xff) == ((uint)param_2.unknown & 0xff)) {
    pcVar4 = (char *)0x72616c756c6c6563;
    Swift::_StringGuts::grow(0x79,param_2);
    SVar5.bridgeObject = (void *)0x8000000100dd22d0;
    SVar5.str = (char *)0xd000000000000063;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    if ((param_1 & 0xff) == 0) {
      puVar3 = &DAT_e800000000000000;
      pcVar2 = pcVar4;
    }
    else {
      uVar1 = 0x69666977;
      if ((param_1 & 0xff) != 1) {
        uVar1 = 0x656e6f6e;
      }
      puVar3 = &DAT_e400000000000000;
      pcVar2 = (char *)(ulong)uVar1;
    }
    SVar6.bridgeObject = puVar3;
    SVar6.str = pcVar2;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar6,SVar8);
    FUN_100b6f8ec();
    FUN_100b6f988(0x12,0x8000000100dd2340);
    if ((param_1 & 0xff) == 0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3 = &DAT_e400000000000000;
      uVar1 = 0x69666977;
      if ((param_1 & 0xff) != 1) {
        uVar1 = 0x656e6f6e;
      }
      pcVar4 = (char *)(ulong)uVar1;
    }
    FUN_100b6f870(puVar3);
    FUN_100beed4c(pcVar4);
    FUN_100b678c0();
    FUN_100beef18("Adding observer: ");
    FUN_100beed44();
    _swift_bridgeObjectRelease(0xe000000000000000);
  }
  return (param_1 & 0xff) != ((uint)param_2.unknown & 0xff);
}



/* Address: 0x100bee2ac | FUN_100bee2ac */

void FUN_100bee2ac(void)

{
  FUN_100bed950();
  FUN_100bee920();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bee2e0 | _TtC6Sentry18SentryReachability::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryReachability::dealloc(ID param_1,SEL param_2)

{
  FUN_100bee2ac(param_1);
  return;
}



/* Address: 0x100bee304 | _TtC6Sentry18SentryReachability::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry18SentryReachability::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + pathMonitor));
  return;
}



/* Address: 0x100bee35c | FUN_100bee35c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bee35c(void)

{
  long lVar1;
  AutoreleaseFrequency AVar2;
  undefined7 extraout_var;
  Attributes AVar3;
  DispatchQoS DVar4;
  ID IVar5;
  DispatchQoS DVar6;
  undefined *puVar7;
  OS_dispatch_queue *pOVar8;
  undefined *puVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long unaff_x20;
  String label;
  undefined *local_68;
  
  AVar2 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar10 = *(long *)(CONCAT71(extraout_var,AVar2.value) + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar10 + 0x40));
  AVar3 = Attributes::_typeMetadataAccessor();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(AVar3.unknown + -8) + 0x40));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(DVar4.unknown + -8) + 0x40));
  lVar1 = _TtC6Sentry18SentryReachability::reachabilityObservers;
  IVar5 = _objc_msgSend((ID)&_OBJC_CLASS___NSHashTable,"weakObjectsHashTable");
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry18SentryReachability::currentConnectivity) = 2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry18SentryReachability::pathMonitor) = 0;
  lVar1 = _TtC6Sentry18SentryReachability::reachabilityQueue;
  DVar4.unknown = (undefined *)0x0;
  FUN_10002137c();
  DVar6 = Dispatch::DispatchQoS::get_background(DVar4);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100bee940();
  puVar9 = &DAT_101048938;
  FUN_100b6730c(&DAT_101048938);
  puVar7 = puVar9;
  FUN_100bee984();
  Swift::SetAlgebra::_init
            ((undefined *)(extraout_x9_00 - extraout_x8_00),&local_68,puVar9,puVar7,AVar3.unknown,
             DVar6.unknown);
  (**(code **)(lVar10 + 0x68))
            (extraout_x9 - extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,CONCAT71(extraout_var,AVar2.value));
  label.bridgeObject = (void *)0x8000000100dd2220;
  label.str = (char *)0xd00000000000001c;
  pOVar8 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     ((OS_dispatch_queue *)DVar4.unknown,label,
                      (undefined *)(extraout_x9_01 - extraout_x8_01),
                      (undefined *)(extraout_x9_00 - extraout_x8_00),
                      (AutoreleaseFrequency)(__int8)(extraout_x9 - extraout_x8));
  *(OS_dispatch_queue **)(unaff_x20 + lVar1) = pOVar8;
  lVar1 = _TtC6Sentry18SentryReachability::observersLock;
  puVar9 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)puVar9,"init");
  *(ID *)(unaff_x20 + lVar1) = IVar5;
  FUN_100bee920();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  return;
}



/* Address: 0x100bee548 | _TtC6Sentry18SentryReachability::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry18SentryReachability::init(ID param_1,SEL param_2)

{
  FUN_100bee35c();
  return param_1;
}



/* Address: 0x100bee568 | FUN_100bee568 */

void FUN_100bee568(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  _Var2.unknown = param_2;
  FUN_100b6f870();
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x15,_Var2);
  FUN_100b6f988(0x13,0x8000000100dd0ec0);
  puVar1 = &DAT_101047eb8;
  local_58 = param_1;
  FUN_100b6730c(&DAT_101047eb8);
  Swift::__print_unlocked
            (&local_58,&local_50,puVar1,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_100beef18("Adding observer: ");
  FUN_100beed20();
  FUN_100b6f8ec();
  local_70 = param_1;
  puStack_68 = param_2;
  FUN_100bdc17c(FUN_100bd7acc,auStack_80);
  return;
}



/* Address: 0x100bee664 | FUN_100bee664 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bee664(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  ID IVar2;
  NWPathMonitor *pNVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  OS_dispatch_queue *queue;
  
  _Var5.unknown = param_2;
  FUN_100b6f870();
  Swift::_StringGuts::grow(0x13,_Var5);
  FUN_100beeee0("rvers",0xd000000000000011);
  FUN_100b6730c(&DAT_101047eb8);
  FUN_100beec38();
  FUN_100beec50(
               "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Swift/Networking/SentryReachability.swift"
               );
  FUN_100beebe4();
  FUN_100beed20();
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar6 = "lock";
  FUN_100b78d60();
  Swift::_StringGuts::grow(0x20,(_StringGuts)pcVar6);
  FUN_100beeee0("rking/SentryReachability.swift",0xd00000000000001e);
  FUN_100beec38();
  FUN_100beec50();
  FUN_100beebe4();
  FUN_100beed20();
  _swift_bridgeObjectRelease(0xe000000000000000);
  lVar1 = _TtC6Sentry18SentryReachability::reachabilityObservers;
  IVar2 = _objc_msgSend(*(ID *)(param_2 + _TtC6Sentry18SentryReachability::reachabilityObservers),
                        "containsObject:",param_1);
  if ((int)IVar2 == 0) {
    _objc_msgSend(*(ID *)(param_2 + lVar1),"addObject:",param_1);
    IVar2 = _objc_msgSend(*(ID *)(param_2 + lVar1),"count");
    if ((long)IVar2 < 2) {
      param_2[_TtC6Sentry18SentryReachability::currentConnectivity] = 2;
      pNVar3 = Network::NWPathMonitor::typeMetadataAccessor();
      _swift_allocObject(pNVar3,*(undefined4 *)(pNVar3 + 0x30),*(undefined2 *)(pNVar3 + 0x34));
      Network::NWPathMonitor::init(pNVar3);
      FUN_100bed76c();
      lVar1 = _TtC6Sentry18SentryReachability::pathMonitor;
      pNVar3 = *(NWPathMonitor **)(param_2 + _TtC6Sentry18SentryReachability::pathMonitor);
      if (pNVar3 != (NWPathMonitor *)0x0) {
        puVar4 = &DAT_100f3d0f8;
        _swift_allocObject(&DAT_100f3d0f8,0x18,7);
        *(undefined **)(puVar4 + 0x10) = param_2;
        _swift_retain(pNVar3);
        FUN_100011128(FUN_100beeb0c,puVar4);
        Network::NWPathMonitor::_set_pathUpdateHandler(pNVar3);
        _swift_release(pNVar3);
        _swift_release(puVar4);
        pNVar3 = *(NWPathMonitor **)(param_2 + lVar1);
        if (pNVar3 != (NWPathMonitor *)0x0) {
          queue = *(OS_dispatch_queue **)
                   (param_2 + _TtC6Sentry18SentryReachability::reachabilityQueue);
          _swift_retain(pNVar3);
          Network::NWPathMonitor::start(pNVar3,queue);
          _swift_release(pNVar3);
        }
      }
      goto LAB_100bee820;
    }
    FUN_100beeb7c("Synchronized to add observer: ",IVar2,0xd00000000000002c);
  }
  else {
    FUN_100beeb7c("server added. Doing nothing.",IVar2,0xd000000000000026);
  }
  FUN_100b84df8();
LAB_100bee820:
  FUN_100b78d60();
  return;
}



/* Address: 0x100bee920 | FUN_100bee920 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bee920(void)

{
  return ZEXT816(0x100fa5e60);
}



/* Address: 0x100bee940 | FUN_100bee940 */

void FUN_100bee940(void)

{
  Attributes AVar1;
  undefined *puVar2;
  
  if (DAT_101048930 != (undefined *)0x0) {
    return;
  }
  AVar1 = Attributes::_typeMetadataAccessor();
  puVar2 = PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798;
  _swift_getWitnessTable(PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798,AVar1.unknown);
  DAT_101048930 = puVar2;
  return;
}



/* Address: 0x100bee984 | FUN_100bee984 */

void FUN_100bee984(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_101048940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101048938;
  FUN_100b6734c(&DAT_101048938);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_101048940 = puVar2;
  return;
}



/* Address: 0x100bee9cc | FUN_100bee9cc */

void FUN_100bee9cc(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0dd4);
  return;
}



/* Address: 0x100bee9d8 | FUN_100bee9d8 */

void FUN_100bee9d8(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100beea20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100beea24 + (ulong)(&BYTE_100c9f99a)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100beea54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100beea58 + (ulong)(&BYTE_100c9f995)[uVar1] * 4))();
  return;
}



/* Address: 0x100beea94 | FUN_100beea94 */

undefined1  [16] FUN_100beea94(void)

{
  return ZEXT816(0x100f3d0d8);
}



/* Address: 0x100beeaa4 | thunk_FUN_100beeaa8 */

void thunk_FUN_100beeaa8(void)

{
  byte *pbVar1;
  
  if (DAT_101048970 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9fa5c;
  _swift_getWitnessTable(&BYTE_100c9fa5c,&DAT_100f3d0d8);
  DAT_101048970 = pbVar1;
  return;
}



/* Address: 0x100beeaa8 | FUN_100beeaa8 */

void FUN_100beeaa8(void)

{
  byte *pbVar1;
  
  if (DAT_101048970 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9fa5c;
  _swift_getWitnessTable(&BYTE_100c9fa5c,&DAT_100f3d0d8);
  DAT_101048970 = pbVar1;
  return;
}



/* Address: 0x100beeae8 | FUN_100beeae8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100beeae8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100beeb0c | FUN_100beeb0c */

void FUN_100beeb0c(void)

{
  FUN_100bedb20();
  FUN_100b56e88();
  return;
}


