/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bdc340 | FUN_100bdc340 */

void FUN_100bdc340(void)

{
  FUN_100bb58f0(_TtC6Sentry13SentrySession::_environment);
  return;
}



/* Address: 0x100bdc34c | FUN_100bdc34c */

void FUN_100bdc34c(void)

{
  FUN_100bb58f0(_TtC6Sentry13SentrySession::_abnormalMechanism);
  return;
}



/* Address: 0x100bdc358 | FUN_100bdc358 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bdc358(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *self;
  ID IVar4;
  Date DVar5;
  long unaff_x20;
  String SVar6;
  
  lVar2 = _TtC6Sentry13SentrySession::lock;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar4 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + lVar2) = IVar4;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_flagInit) = 0;
  lVar2 = _TtC6Sentry13SentrySession::_timestamp;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  FUN_1000c9ffc(unaff_x20 + lVar2,1,1,DVar5.unknown);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_duration) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_releaseName);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_environment);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_abnormalMechanism);
  *puVar1 = 0;
  puVar1[1] = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0x6c706d4920746f4e,0xef6465746e656d65,
             0xdd15b0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100bdc454);
  (*pcVar3)();
}



/* Address: 0x100bdc454 | _TtC6Sentry13SentrySession::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::init(ID param_1,SEL param_2)

{
  FUN_100bdc358();
  return param_1;
}



/* Address: 0x100bdc474 | FUN_100bdc474 */

void FUN_100bdc474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_100bdc4cc(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100bdc4cc | FUN_100bdc4cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bdc4cc(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  ID IVar7;
  Date DVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  FUN_100b7982c();
  lVar9 = *(long *)(lVar4 + -8);
  lVar5 = lVar4;
  FUN_100b6f9e0(*(undefined8 *)(lVar9 + 0x40));
  FUN_100bdf4ec();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = _TtC6Sentry13SentrySession::lock;
  puVar6 = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar7 = _objc_msgSend((ID)puVar6,"init");
  *(ID *)(unaff_x20 + lVar5) = IVar7;
  lVar3 = _TtC6Sentry13SentrySession::_flagInit;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_flagInit) = 0;
  FUN_1000c9ffc(unaff_x20 + _TtC6Sentry13SentrySession::_timestamp,1,1,lVar4);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_duration) = 0;
  plVar1 = (long *)(unaff_x20 + _TtC6Sentry13SentrySession::_releaseName);
  *plVar1 = 0;
  plVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_environment);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_abnormalMechanism);
  *puVar2 = 0;
  puVar2[1] = 0;
  Foundation::UUID::init();
  FUN_100bdf510(unaff_x20 + _TtC6Sentry13SentrySession::_sessionId,extraout_x9_00 - extraout_x8_00);
  DVar8.unknown = (undefined *)0x0;
  FUN_100b78b14();
  FUN_100b75404();
  lVar5 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  FUN_100b80d44(DVar8.unknown + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_78,0);
  IVar7 = *(ID *)(DVar8.unknown + lVar5);
  _swift_unknownObjectRetain(IVar7);
  FUN_100b6faa8();
  IVar7 = _objc_msgSend(IVar7,"date");
  FUN_100bdf4e0(IVar7);
  _swift_unknownObjectRelease();
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar8);
  FUN_100b6faa8();
  (**(code **)(lVar9 + 0x20))
            (unaff_x20 + _TtC6Sentry13SentrySession::_started,extraout_x9 - extraout_x8,lVar4);
  *(undefined1 *)(unaff_x20 + _TtC6Sentry13SentrySession::_status) = 0;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_sequence) = 1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_errors) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_distinctId);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar6 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar7 = _objc_msgSend((ID)puVar6,"initWithBool:",1);
  *(ID *)(unaff_x20 + lVar3) = IVar7;
  *plVar1 = param_1;
  plVar1[1] = param_2;
  FUN_100b6f838();
  FUN_100bdefe4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff78,"init");
  FUN_100b56ea0();
  return;
}



/* Address: 0x100bdc71c | _TtC6Sentry13SentrySession::initWithReleaseName:distinctId: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry13SentrySession::initWithReleaseName_distinctId_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bdc4cc(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bdc770 | FUN_100bdc770 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bdc770(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *self;
  ID IVar8;
  Date DVar9;
  UUID UVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined1 auStack_80 [32];
  
  lVar5 = _TtC6Sentry13SentrySession::lock;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar8 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + lVar5) = IVar8;
  lVar5 = _TtC6Sentry13SentrySession::_flagInit;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_flagInit) = 0;
  lVar6 = _TtC6Sentry13SentrySession::_timestamp;
  DVar9 = Foundation::Date::typeMetadataAccessor();
  FUN_1000c9ffc(unaff_x20 + lVar6,1,1,DVar9.unknown);
  lVar7 = _TtC6Sentry13SentrySession::_duration;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_duration) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_releaseName);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_environment);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_abnormalMechanism);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar13 = _TtC6Sentry13SentrySession::_sessionId;
  UVar10 = Foundation::UUID::typeMetadataAccessor();
  lVar12 = *(long *)(UVar10.unknown + -8);
  (**(code **)(lVar12 + 0x10))(unaff_x20 + lVar13,param_1,UVar10.unknown);
  lVar13 = *(long *)(DVar9.unknown + -8);
  (**(code **)(lVar13 + 0x10))
            (unaff_x20 + _TtC6Sentry13SentrySession::_started,param_2,DVar9.unknown);
  *(undefined1 *)(unaff_x20 + _TtC6Sentry13SentrySession::_status) = param_3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_errors) = param_4;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_sequence) = param_5;
  puVar4 = (undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_distinctId);
  *puVar4 = param_6;
  puVar4[1] = param_7;
  *(undefined8 *)(unaff_x20 + lVar5) = param_8;
  _swift_beginAccess(unaff_x20 + lVar6,auStack_80,0x21,0);
  FUN_100005768(param_9,unaff_x20 + lVar6);
  _swift_endAccess(auStack_80);
  *(undefined8 *)(unaff_x20 + lVar7) = param_10;
  uVar11 = puVar1[1];
  *puVar1 = param_11;
  puVar1[1] = param_12;
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = puVar2[1];
  *puVar2 = param_13;
  puVar2[1] = param_14;
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = puVar3[1];
  *puVar3 = param_15;
  puVar3[1] = param_16;
  _swift_bridgeObjectRelease(uVar11);
  FUN_100bdd418();
  IVar8 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff70,"init");
  FUN_100b74780(param_9,&DAT_101044980);
  (**(code **)(lVar13 + 8))(param_2,DVar9.unknown);
  (**(code **)(lVar12 + 8))(param_1,UVar10.unknown);
  return IVar8;
}



/* Address: 0x100bdca44 | FUN_100bdca44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bdca44(ulong param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *self;
  ID IVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  long extraout_x8_00;
  long lVar18;
  long extraout_x8_01;
  long lVar19;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long unaff_x20;
  long lVar20;
  code *pcVar21;
  ulong uVar22;
  long lVar23;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar8 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar8 + -8));
  lVar16 = extraout_x9 - extraout_x8;
  FUN_100b7982c();
  lVar17 = *(long *)(puVar8 + -8);
  FUN_100bc8078();
  lVar23 = extraout_x9_00 - extraout_x8_00;
  lVar18 = lVar23 - extraout_x8_00;
  puVar9 = &DAT_1010451b8;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar9 + -8));
  lVar20 = extraout_x9_01 - extraout_x8_01;
  FUN_100bdf4ec();
  lVar19 = *(long *)(puVar9 + -8);
  FUN_100bc8078();
  lVar5 = _TtC6Sentry13SentrySession::lock;
  uVar22 = extraout_x9_02 - extraout_x8_02;
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  IVar10 = _objc_msgSend((ID)self,"init");
  *(ID *)(unaff_x20 + lVar5) = IVar10;
  lVar5 = _TtC6Sentry13SentrySession::_flagInit;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_flagInit) = 0;
  lVar6 = _TtC6Sentry13SentrySession::_timestamp;
  FUN_1000c9ffc(unaff_x20 + _TtC6Sentry13SentrySession::_timestamp,1,1,puVar8);
  lVar7 = _TtC6Sentry13SentrySession::_duration;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_duration) = 0;
  puVar1 = (ulong *)(unaff_x20 + _TtC6Sentry13SentrySession::_releaseName);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (ulong *)(unaff_x20 + _TtC6Sentry13SentrySession::_environment);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar3 = (ulong *)(unaff_x20 + _TtC6Sentry13SentrySession::_abnormalMechanism);
  *puVar3 = 0;
  puVar3[1] = 0;
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_100b7c97c();
LAB_100bdcc5c:
    FUN_100bdf518();
  }
  else {
    FUN_100bdf458();
    uVar13 = 0x646973;
    uVar12 = 0;
    FUN_100bdf478();
    if ((uVar12 & 1) == 0) {
      FUN_100bdf44c();
      goto LAB_100bdcc5c;
    }
    FUN_100bdf430();
    FUN_100b7c97c();
    FUN_100bdf480(PTR___type_metadata_for_Any_100eae0c0);
    FUN_100b6f80c();
    if ((uVar13 & 1) == 0) {
LAB_100bdcc54:
      FUN_100b7c97c();
      goto LAB_100bdcc5c;
    }
    uVar13 = local_a0 & 0xffffffffffff;
    if ((uStack_98 & 0x2000000000000000) != 0) {
      uVar13 = uStack_98 >> 0x38 & 0xf;
    }
    if (uVar13 == 0) {
      FUN_100b6f860();
      goto LAB_100bdcc54;
    }
    Foundation::UUID::_init();
    FUN_100b6f860();
    lVar11 = lVar20;
    FUN_1000c9ff0(lVar20,1,puVar9);
    if ((int)lVar11 == 1) {
      FUN_100b7c97c();
      FUN_100b74780(lVar20,&DAT_1010451b8);
      goto LAB_100bdcc5c;
    }
    (**(code **)(lVar19 + 0x20))(uVar22,lVar20,puVar9);
    FUN_100bdf510(unaff_x20 + _TtC6Sentry13SentrySession::_sessionId,uVar22);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_100bdcfb8;
    FUN_100bdf458();
    uVar12 = 0x64657472617473;
    uVar13 = 0;
    FUN_100bdf478();
    if ((uVar13 & 1) == 0) {
      FUN_100bdf44c();
LAB_100bdcfc4:
      FUN_100bdf508(uVar22);
      FUN_100bdf518();
      lVar16 = _TtC6Sentry13SentrySession::_sessionId;
    }
    else {
      FUN_100bdf430();
      FUN_100b7c97c();
      FUN_100bdf480();
      FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
      if ((uVar12 & 1) == 0) {
LAB_100bdcfb8:
        FUN_100b7c97c();
        goto LAB_100bdcfc4;
      }
      FUN_100bdf528();
      FUN_100b6f860();
      FUN_100b40378();
      if (uVar12 == 0) goto LAB_100bdcfb8;
      FUN_100bdf520(lVar23,0);
      FUN_100b6f868();
      (**(code **)(lVar17 + 0x20))(lVar18,lVar23,puVar8);
      FUN_100bdf510(unaff_x20 + _TtC6Sentry13SentrySession::_started,lVar18);
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_100bdcff0:
        FUN_100b7c97c();
        goto LAB_100bdcffc;
      }
      FUN_100bdf458();
      uVar12 = 0x737574617473;
      uVar13 = 0;
      FUN_100bdf478();
      if ((uVar13 & 1) == 0) {
LAB_100bdcff8:
        FUN_100bdf44c();
        goto LAB_100bdcffc;
      }
      FUN_100bdf430();
      FUN_100b7c97c();
      FUN_100bdf480();
      FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
      if ((((uVar12 & 1) == 0) ||
          (uVar13 = local_a0, FUN_100bdc1ec(local_a0,uStack_98), ((uint)uVar13 & 0xff) == 4)) ||
         (*(char *)(unaff_x20 + _TtC6Sentry13SentrySession::_status) = (char)uVar13,
         *(long *)(param_1 + 0x10) == 0)) goto LAB_100bdcff0;
      FUN_100bdf458();
      uVar13 = 0;
      FUN_100bdf478(0x716573);
      if ((uVar13 & 1) == 0) goto LAB_100bdcff8;
      FUN_100bdf430();
      FUN_100b7c97c();
      uVar13 = 0;
      FUN_100b7f4fc();
      FUN_100bdf480();
      FUN_100b6f878();
      if ((uVar13 & 1) == 0) goto LAB_100bdcff0;
      IVar10 = _objc_msgSend(local_a0,"unsignedIntegerValue");
      *(ID *)(unaff_x20 + _TtC6Sentry13SentrySession::_sequence) = IVar10;
      if (*(long *)(param_1 + 0x10) == 0) {
LAB_100bdd040:
        FUN_100b7c97c();
LAB_100bdd044:
        FUN_100b97e4c();
      }
      else {
        FUN_100bdf458();
        uVar12 = 0x73726f727265;
        uVar13 = 0;
        FUN_100bdf478();
        if ((uVar13 & 1) == 0) {
          FUN_100b97e4c();
          FUN_100bdf44c();
        }
        else {
          FUN_100bdf430();
          FUN_100b7c97c();
          FUN_100bdf480();
          FUN_100b6f878();
          if ((uVar12 & 1) == 0) goto LAB_100bdd040;
          IVar10 = _objc_msgSend(local_a0,"unsignedIntegerValue");
          *(ID *)(unaff_x20 + _TtC6Sentry13SentrySession::_errors) = IVar10;
          if (*(long *)(param_1 + 0x10) == 0) {
            FUN_100b6fa70();
            FUN_100b97e4c();
          }
          else {
            FUN_100bdf458();
            uVar13 = 0;
            uVar12 = 0;
            FUN_100bdf478();
            if ((uVar12 & 1) != 0) {
              FUN_100bdf430();
              FUN_100b7c97c();
              FUN_100bdf480();
              FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
              if ((uVar13 & 1) == 0) {
                FUN_100b7c97c();
                FUN_100b6fa70();
                goto LAB_100bdd044;
              }
              puVar4 = (ulong *)(unaff_x20 + _TtC6Sentry13SentrySession::_distinctId);
              *puVar4 = local_a0;
              puVar4[1] = uStack_98;
              if (*(long *)(param_1 + 0x10) != 0) {
                FUN_100bdf458();
                uVar12 = 0x74696e69;
                uVar13 = 0;
                FUN_100bdf478();
                if ((uVar13 & 1) == 0) {
                  FUN_100b7c97c();
                }
                else {
                  FUN_100bdf430();
                  FUN_100b7c97c();
                  FUN_100bdf480();
                  FUN_100b6f878();
                  if ((uVar12 & 1) != 0) {
                    FUN_100bdf4f4(local_a0);
                  }
                }
              }
              if (*(long *)(param_1 + 0x10) != 0) {
                FUN_100bdf458();
                uVar13 = 0;
                FUN_100bdf478(0x7372747461);
                uVar12 = param_1;
                if ((uVar13 & 1) == 0) {
LAB_100bdd14c:
                  _swift_bridgeObjectRelease(uVar12);
                }
                else {
                  FUN_100bdf430();
                  FUN_100b7c97c();
                  uVar13 = 0;
                  FUN_100b6730c();
                  FUN_100bdf480();
                  FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
                  if ((uVar13 & 1) == 0) goto LAB_100bdd150;
                  if (*(long *)(local_a0 + 0x10) != 0) {
                    _swift_bridgeObjectRetain(local_a0);
                    uVar12 = 0;
                    uVar15 = 0;
                    FUN_100071370();
                    uVar13 = local_a0;
                    if ((uVar15 & 1) != 0) {
                      FUN_100bdf440(*(undefined8 *)(local_a0 + 0x38));
                      FUN_100b6f860();
                      FUN_100bdf480();
                      FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
                      uVar13 = uVar12;
                      if ((uVar12 & 1) == 0) goto LAB_100bdd37c;
                      uVar13 = puVar1[1];
                      *puVar1 = local_a0;
                      puVar1[1] = uStack_98;
                    }
                    _swift_bridgeObjectRelease();
                  }
LAB_100bdd37c:
                  if (*(long *)(local_a0 + 0x10) == 0) {
LAB_100bdd3c4:
                    uStack_88 = 0;
                    local_90 = 0;
                    local_78 = 0;
                    uStack_80 = 0;
                  }
                  else {
                    _swift_bridgeObjectRetain(local_a0);
                    uVar13 = 0x6d6e6f7269766e65;
                    uVar12 = 0xeb00000000746e65;
                    FUN_100071370();
                    if ((uVar12 & 1) == 0) {
                      FUN_100b6f860();
                      goto LAB_100bdd3c4;
                    }
                    FUN_100bdf440(*(undefined8 *)(local_a0 + 0x38));
                    FUN_100b6f860();
                  }
                  FUN_100b6f860();
                  if (local_78 == 0) {
                    FUN_100b74780(&local_90,&DAT_101044760);
                  }
                  else {
                    FUN_100bdf480();
                    FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
                    if ((uVar13 & 1) != 0) {
                      uVar12 = puVar2[1];
                      *puVar2 = local_a0;
                      puVar2[1] = uStack_98;
                      goto LAB_100bdd14c;
                    }
                  }
                }
              }
LAB_100bdd150:
              if (*(long *)(param_1 + 0x10) != 0) {
                FUN_100bdf458();
                puVar14 = &DAT_6d617473656d6974;
                uVar13 = 0;
                FUN_100bdf478();
                if ((uVar13 & 1) == 0) {
                  FUN_100b7c97c();
                }
                else {
                  FUN_100bdf430();
                  FUN_100b7c97c();
                  FUN_100bdf480();
                  FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
                  if (((ulong)puVar14 & 1) != 0) {
                    FUN_100bdf528();
                    FUN_100b6f860();
                    FUN_100b40378();
                    FUN_100b6f934();
                    if (puVar14 != (undefined1 *)0x0) {
                      FUN_100bdf520(lVar16);
                      FUN_100b6f868();
                    }
                    FUN_1000c9ffc(lVar16,puVar14 == (undefined1 *)0x0,1,puVar8);
                    FUN_100b80d44(unaff_x20 + lVar6,&local_90,0x21);
                    FUN_100005874(lVar16,unaff_x20 + lVar6);
                    _swift_endAccess(&local_90);
                  }
                }
              }
              if (*(long *)(param_1 + 0x10) != 0) {
                FUN_100bdf458();
                uVar13 = 0;
                uVar12 = 0;
                FUN_100bdf478();
                if ((uVar12 & 1) == 0) {
                  FUN_100b7c97c();
                }
                else {
                  FUN_100bdf430();
                  FUN_100b7c97c();
                  FUN_100bdf480();
                  FUN_100b6f878();
                  if ((uVar13 & 1) != 0) {
                    FUN_100bdf4f4(local_a0);
                  }
                }
              }
              if (*(long *)(param_1 + 0x10) == 0) {
LAB_100bdd2c8:
                uStack_88 = 0;
                local_90 = 0;
                local_78 = 0;
                uStack_80 = 0;
                FUN_100b6fa70();
                FUN_100b97e4c();
              }
              else {
                FUN_100bdf458();
                uVar13 = 0;
                FUN_100bdf478(0xd000000000000012);
                if ((uVar13 & 1) == 0) {
                  FUN_100b7c97c();
                  goto LAB_100bdd2c8;
                }
                FUN_100bdf430();
                FUN_100b6fa70();
                FUN_100b97e4c();
                FUN_100b7c97c();
              }
              FUN_100b7c97c();
              (**(code **)(lVar17 + 8))(lVar18,puVar8);
              (**(code **)(lVar19 + 8))(uVar22,puVar9);
              if (local_78 == 0) {
                FUN_100b6faa8();
                FUN_100b74780(&local_90,&DAT_101044760);
              }
              else {
                FUN_100bdf480();
                FUN_100b6f80c(PTR___type_metadata_for_Any_100eae0c0);
                if ((uVar22 & 1) == 0) {
                  FUN_100b6faa8();
                }
                else {
                  *puVar3 = local_a0;
                  puVar3[1] = uStack_98;
                  FUN_100b6faa8();
                  FUN_100b6f860();
                }
              }
              FUN_100bdefe4();
              IVar10 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff50,"init");
              goto LAB_100bdccd0;
            }
            FUN_100b6fa70();
            FUN_100b97e4c();
            FUN_100b7c97c();
          }
          FUN_100b7c97c();
        }
      }
LAB_100bdcffc:
      FUN_100bdf508(lVar18);
      pcVar21 = *(code **)(lVar19 + 8);
      (*pcVar21)(uVar22,puVar9);
      FUN_100bdf518();
      (*pcVar21)(unaff_x20 + _TtC6Sentry13SentrySession::_sessionId,puVar9);
      lVar16 = _TtC6Sentry13SentrySession::_started;
    }
    FUN_100bdf508(unaff_x20 + lVar16);
  }
  FUN_100b78cd4(lVar5);
  FUN_100b74780(unaff_x20 + lVar6,&DAT_101044980);
  FUN_100b78cd4(lVar7);
  _swift_bridgeObjectRelease(puVar1[1]);
  _swift_bridgeObjectRelease(puVar2[1]);
  FUN_100b6faa8();
  FUN_100b6f860();
  FUN_100bdefe4();
  _swift_deallocPartialClassInstance();
  IVar10 = 0;
LAB_100bdccd0:
  FUN_100b56ea0(IVar10);
  return;
}



/* Address: 0x100bdd418 | FUN_100bdd418 */

void FUN_100bdd418(undefined8 param_1)

{
  if (DAT_101048090 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cd0388);
  return;
}



/* Address: 0x100bdd450 | _TtC6Sentry13SentrySession::initWithJSONObject: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry13SentrySession::initWithJSONObject_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bdca44();
  return (ID)DVar1.unknown;
}



/* Address: 0x100bdd498 | FUN_100bdd498 */

void FUN_100bdd498(undefined8 param_1)

{
  FUN_100bdd5e0(param_1,FUN_100bdeed8);
  return;
}



/* Address: 0x100bdd4a4 | FUN_100bdd4a4 */

void FUN_100bdd4a4(long param_1,undefined8 param_2)

{
  FUN_100bdedc4();
  *(undefined1 *)(param_1 + _TtC6Sentry13SentrySession::_status) = 1;
  FUN_100bdec9c(param_2);
  return;
}



/* Address: 0x100bdd4f0 | _TtC6Sentry13SentrySession::endSessionExitedWithTimestamp: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentrySession::endSessionExitedWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdd560();
  return;
}



/* Address: 0x100bdd4fc | FUN_100bdd4fc */

void FUN_100bdd4fc(undefined8 param_1)

{
  FUN_100bdd5e0(param_1,FUN_100bdeef0);
  return;
}



/* Address: 0x100bdd508 | FUN_100bdd508 */

void FUN_100bdd508(long param_1,undefined8 param_2)

{
  FUN_100bdedc4();
  *(undefined1 *)(param_1 + _TtC6Sentry13SentrySession::_status) = 2;
  FUN_100bdec9c(param_2);
  return;
}



/* Address: 0x100bdd554 | _TtC6Sentry13SentrySession::endSessionCrashedWithTimestamp: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentrySession::endSessionCrashedWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdd560();
  return;
}



/* Address: 0x100bdd560 | FUN_100bdd560 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bdd560(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  FUN_100b7982c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  FUN_100bdf540();
  FUN_100bdf520();
  (*param_4)();
  FUN_100b6f868();
  FUN_100bdf4c0();
  return;
}



/* Address: 0x100bdd5d4 | FUN_100bdd5d4 */

void FUN_100bdd5d4(undefined8 param_1)

{
  FUN_100bdd5e0(param_1,FUN_100bdef08);
  return;
}



/* Address: 0x100bdd5e0 | FUN_100bdd5e0 */

void FUN_100bdd5e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [16];
  
  FUN_100bdc17c(param_2,auStack_60);
  return;
}



/* Address: 0x100bdd630 | FUN_100bdd630 */

void FUN_100bdd630(long param_1,undefined8 param_2)

{
  FUN_100bdedc4();
  *(undefined1 *)(param_1 + _TtC6Sentry13SentrySession::_status) = 3;
  FUN_100bdec9c(param_2);
  return;
}



/* Address: 0x100bdd67c | _TtC6Sentry13SentrySession::endSessionAbnormalWithTimestamp: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentrySession::endSessionAbnormalWithTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdd560();
  return;
}



/* Address: 0x100bdd688 | FUN_100bdd688 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdd688(void)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_100b78da0(_TtC6Sentry13SentrySession::lock);
  FUN_100b78ce8();
  FUN_100bdedc4();
  if (*(long *)(unaff_x20 + _TtC6Sentry13SentrySession::_errors) != -1) {
    *(long *)(unaff_x20 + _TtC6Sentry13SentrySession::_errors) =
         *(long *)(unaff_x20 + _TtC6Sentry13SentrySession::_errors) + 1;
    FUN_100b78ce8();
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bdd6f0);
  (*pcVar1)();
}



/* Address: 0x100bdd6f0 | _TtC6Sentry13SentrySession::incrementErrors */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry13SentrySession::incrementErrors(ID param_1,SEL param_2)

{
  FUN_100bdd688(param_1);
  return;
}



/* Address: 0x100bdd718 | FUN_100bdd718 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdd718(void)

{
  undefined *self;
  
  FUN_100b78da0(_TtC6Sentry13SentrySession::lock);
  FUN_100b78ce8();
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self,"initWithBool:",1);
  FUN_100bdc328();
  FUN_100b78ce8();
  return 0;
}



/* Address: 0x100bdd780 | _TtC6Sentry13SentrySession::setFlagInit */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry13SentrySession::setFlagInit(ID param_1,SEL param_2)

{
  FUN_100bdd718(param_1);
  return;
}



/* Address: 0x100bdd7a8 | FUN_100bdd7a8 */

void FUN_100bdd7a8(void)

{
  FUN_100b78da0(_TtC6Sentry13SentrySession::lock);
  FUN_100bb5940();
  return;
}



/* Address: 0x100bdd7f0 | FUN_100bdd7f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bdda24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100bdd7f0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  Date DVar5;
  UUID UVar6;
  UUID UVar7;
  NSDate *pNVar8;
  ID IVar9;
  undefined *puVar10;
  long lVar11;
  Date DVar12;
  long extraout_x8;
  undefined *puVar13;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar15;
  long extraout_x9;
  long lVar16;
  long extraout_x9_00;
  Date DVar17;
  undefined *puVar18;
  long extraout_x9_01;
  undefined *puVar19;
  long lVar20;
  undefined *puVar21;
  double dVar22;
  String SVar23;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  String local_140;
  undefined *local_128;
  undefined *local_70;
  
  puVar10 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar10 + -8));
  lVar16 = extraout_x9 - extraout_x8;
  puVar13 = (undefined *)(lVar16 - extraout_x8);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  FUN_100bc8078();
  DVar17.unknown = (undefined *)(extraout_x9_00 - extraout_x8_00);
  puVar18 = DVar17.unknown + -extraout_x8_00;
  puVar21 = puVar18 + -extraout_x8_00;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar20 = *(long *)(UVar6.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar20 + 0x40));
  puVar19 = (undefined *)(extraout_x9_01 - extraout_x8_01);
  puVar10 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 6;
  *(undefined8 *)(puVar10 + 0x10) = 3;
  *(undefined8 *)(puVar10 + 0x20) = 0x646973;
  *(undefined8 *)(puVar10 + 0x28) = 0xe300000000000000;
  UVar7.unknown = puVar19;
  (**(code **)(lVar20 + 0x10))
            (puVar19,param_2 + _TtC6Sentry13SentrySession::_sessionId,UVar6.unknown);
  SVar23 = Foundation::UUID::get_uuidString(UVar7);
  (**(code **)(lVar20 + 8))(puVar19,UVar6.unknown);
  puVar19 = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(puVar10 + 0x30) = SVar23;
  *(undefined **)(puVar10 + 0x48) = puVar19;
  *(undefined8 *)(puVar10 + 0x50) = 0x73726f727265;
  *(undefined1 **)(puVar10 + 0x58) = &DAT_e600000000000000;
  puVar2 = PTR___type_metadata_for_Swift_UInt_100eacb00;
  *(undefined8 *)(puVar10 + 0x60) = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_errors);
  *(undefined **)(puVar10 + 0x78) = puVar2;
  *(undefined8 *)(puVar10 + 0x80) = 0x64657472617473;
  *(undefined1 **)(puVar10 + 0x88) = &DAT_e700000000000000;
  lVar4 = _TtC6Sentry13SentrySession::_started;
  pcVar15 = *(code **)(lVar14 + 0x10);
  DVar12.unknown = puVar21;
  (*pcVar15)(puVar21,param_2 + _TtC6Sentry13SentrySession::_started,DVar5.unknown);
  pNVar8 = Foundation::Date::_bridgeToObjectiveC(DVar12);
  (**(code **)(lVar14 + 8))(puVar21,DVar5.unknown);
  FUN_100b40420(pNVar8);
  FUN_100b6f868();
  SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar10 + 0xa8) = puVar19;
  *(String *)(puVar10 + 0x90) = SVar23;
  local_70 = (undefined *)
             Swift::Dictionary::_init
                       (pNVar8,puVar19,PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  lVar20 = _TtC6Sentry13SentrySession::_flagInit;
  if (*(ID *)(param_2 + _TtC6Sentry13SentrySession::_flagInit) != 0) {
    IVar9 = _objc_msgSend(*(ID *)(param_2 + _TtC6Sentry13SentrySession::_flagInit),"boolValue");
    puVar10 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    _objc_msgSend((ID)puVar10,"initWithBool:",IVar9);
    FUN_100ba436c();
    FUN_100bdf534();
    FUN_100bdf498();
    FUN_100b78fe8();
  }
  local_140.bridgeObject = &DAT_e600000000000000;
  local_140.str = (char *)0x646574697865;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + _TtC6Sentry13SentrySession::_status)) {
  case 0:
    local_140.bridgeObject = &SUB_e200000000000000;
    local_140.str = &DAT_00006b6f;
    break;
  case 2:
    local_140.bridgeObject = &DAT_e700000000000000;
    local_140.str = (char *)0x64656873617263;
    break;
  case 3:
    local_140.bridgeObject = &DAT_e800000000000000;
    local_140.str = (char *)0x6c616d726f6e6261;
  }
  local_128 = puVar19;
  FUN_100bdf498(0,0x737574617473);
  FUN_100b78fe8();
  lVar3 = _TtC6Sentry13SentrySession::_timestamp;
  FUN_100b78ca0(param_2 + _TtC6Sentry13SentrySession::_timestamp,auStack_158);
  FUN_1000057b8(param_2 + lVar3,puVar13);
  puVar10 = puVar13;
  FUN_1000c9ff0(puVar13,1,DVar5.unknown);
  if ((int)puVar10 == 1) {
    lVar11 = 0;
    FUN_100b78b14();
    FUN_100b75404();
    lVar14 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
    FUN_100b78ca0(lVar11 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_170);
    IVar9 = *(ID *)(lVar11 + lVar14);
    _swift_unknownObjectRetain(IVar9);
    FUN_100b6f868();
    DVar12.unknown = (undefined *)_objc_msgSend(IVar9,"date");
    _swift_unknownObjectRelease(IVar9);
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar12);
    DVar12.unknown = puVar13;
    FUN_1000c9ff0(puVar13,1,DVar5.unknown);
    if ((int)DVar12.unknown != 1) {
      FUN_100b74780(puVar13,&DAT_101044980);
      DVar12.unknown = puVar13;
    }
  }
  else {
    DVar12.unknown = puVar18;
    (**(code **)(lVar14 + 0x20))(puVar18,puVar13,DVar5.unknown);
  }
  Foundation::Date::_bridgeToObjectiveC(DVar12);
  FUN_100b40420();
  FUN_100b6f868();
  local_140 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  local_128 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_100bdf498(0,&DAT_6d617473656d6974);
  FUN_100b78fe8();
  lVar14 = *(long *)(param_2 + _TtC6Sentry13SentrySession::_duration);
  if (lVar14 == 0) {
    if (*(long *)(param_2 + lVar20) == 0) {
      FUN_1000057b8(param_2 + lVar3,lVar16);
      lVar20 = lVar16;
      FUN_1000c9ff0(lVar16,1,DVar5.unknown);
      if ((int)lVar20 == 0) {
        (*pcVar15)(puVar21,lVar16,DVar5.unknown);
        FUN_100b74780(lVar16,&DAT_101044980);
        DVar12.unknown = (undefined *)(param_2 + lVar4);
        (*pcVar15)(DVar17.unknown,DVar12.unknown,DVar5.unknown);
        dVar22 = Foundation::Date::timeIntervalSince(DVar17,DVar12);
        FUN_100bdf500(DVar17.unknown);
        FUN_100bdf500(puVar21);
        DVar12.unknown = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        _objc_msgSend((ID)DVar12.unknown,"initWithDouble:",dVar22);
      }
      else {
        FUN_100b74780(lVar16,&DAT_101044980);
        DVar12.unknown = &_OBJC_CLASS___NSNumber;
        _objc_allocWithZone();
        _objc_msgSend((ID)DVar12.unknown,"initWithInteger:",0);
      }
      FUN_100ba436c();
      FUN_100bdf534();
      FUN_100bdf498();
      FUN_100b78fe8();
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    }
  }
  else {
    FUN_100ba436c();
    FUN_100bdf534();
    FUN_100bdf498(lVar14,0x6e6f697461727564);
    FUN_100b78fe8();
  }
  local_128 = PTR___type_metadata_for_Swift_UInt_100eacb00;
  local_140.str = *(char **)(param_2 + _TtC6Sentry13SentrySession::_sequence);
  FUN_100bdf498();
  FUN_100b78fe8();
  puVar1 = (undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_releaseName);
  if (puVar1[1] == 0) {
    if (*(long *)(param_2 + _TtC6Sentry13SentrySession::_environment + 8) == 0) goto LAB_100bddf08;
  }
  Swift::Dictionary::_init
            (DVar12.unknown,puVar10,PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (puVar1[1] != 0) {
    FUN_100bdf48c(*puVar1);
    FUN_100b78fe8(&local_140,0x657361656c6572,&DAT_e700000000000000);
  }
  if (((undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_environment))[1] != 0) {
    FUN_100bdf48c(*(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_environment));
    FUN_100b78fe8(&local_140,0x6d6e6f7269766e65,0xeb00000000746e65);
  }
  FUN_100b6730c(&DAT_101044968);
  FUN_100bdf534();
  FUN_100bdf498();
  FUN_100b78fe8();
LAB_100bddf08:
  local_140 = *(String *)(param_2 + _TtC6Sentry13SentrySession::_distinctId);
  local_128 = puVar10;
  _swift_bridgeObjectRetain();
  FUN_100bdf498();
  FUN_100b78fe8();
  if (((undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_abnormalMechanism))[1] != 0) {
    FUN_100bdf48c(*(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_abnormalMechanism));
    FUN_100b78fe8(&local_140,0xd000000000000012,0x8000000100dd13f0);
  }
  FUN_100bdf500(puVar18);
  *param_1 = local_70;
  return;
}



/* Address: 0x100bddfbc | _TtC6Sentry13SentrySession::serialize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::serialize(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100bdd7a8(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100bde020 | FUN_100bde020 */

void FUN_100bde020(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::lock);
  FUN_100bdefe4();
  param_1[3] = param_2;
  FUN_10021b704();
  FUN_100bb5e20(uVar1,param_2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100bde078 | FUN_100bde078 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bde078(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  Date DVar11;
  UUID UVar12;
  long extraout_x8;
  long extraout_x9;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x23;
  long lVar18;
  undefined8 uVar19;
  undefined1 auStack_78 [24];
  
  puVar10 = &DAT_101044980;
  FUN_100b6730c();
  FUN_100bc8078(*(undefined8 *)(puVar10 + -8));
  FUN_100bdf540();
  DVar11 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar11.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = extraout_x9 - extraout_x8;
  UVar12 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = lVar17 - (*(long *)(*(long *)(UVar12.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(UVar12.unknown + -8) + 0x10))
            (lVar18,param_2 + _TtC6Sentry13SentrySession::_sessionId,UVar12.unknown);
  (**(code **)(lVar16 + 0x10))(lVar17,param_2 + _TtC6Sentry13SentrySession::_started,DVar11.unknown)
  ;
  lVar16 = _TtC6Sentry13SentrySession::_timestamp;
  uVar15 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_errors);
  uVar13 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_sequence);
  uVar1 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_distinctId);
  uVar5 = ((undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_distinctId))[1];
  uVar14 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_flagInit);
  uVar9 = *(undefined1 *)(param_2 + _TtC6Sentry13SentrySession::_status);
  FUN_100b78ca0(param_2 + _TtC6Sentry13SentrySession::_timestamp,auStack_78);
  FUN_1000057b8(param_2 + lVar16);
  uVar19 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_duration);
  uVar2 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_releaseName);
  uVar6 = ((undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_releaseName))[1];
  uVar3 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_environment);
  uVar7 = ((undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_environment))[1];
  uVar4 = *(undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_abnormalMechanism);
  uVar8 = ((undefined8 *)(param_2 + _TtC6Sentry13SentrySession::_abnormalMechanism))[1];
  FUN_100bdd418(0);
  _objc_allocWithZone();
  FUN_100bdf458();
  FUN_100b940f8();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  *(undefined8 *)(lVar18 + -0x10) = uVar4;
  *(undefined8 *)(lVar18 + -8) = uVar8;
  *(undefined8 *)(lVar18 + -0x18) = uVar7;
  *(undefined8 *)(lVar18 + -0x28) = uVar6;
  *(undefined8 *)(lVar18 + -0x20) = uVar3;
  *(undefined8 *)(lVar18 + -0x38) = uVar19;
  *(undefined8 *)(lVar18 + -0x30) = uVar2;
  *(undefined8 *)(lVar18 + -0x40) = unaff_x23;
  FUN_100bdc770(lVar18,lVar17,uVar9,uVar15,uVar13,uVar1,uVar5,uVar14);
  *param_1 = lVar18;
  return;
}



/* Address: 0x100bde29c | _TtC6Sentry13SentrySession::copyWithZone: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry13SentrySession::copyWithZone_(ID param_1,SEL param_2,void *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  
  puVar1 = auStack_40;
  FUN_100bde020(auStack_40,param_1);
  FUN_100004640(auStack_40,local_28);
  Swift::__bridgeAnythingToObjectiveC();
  FUN_100004594(auStack_40);
  return (ID)puVar1;
}



/* Address: 0x100bde2fc | _TtC6Sentry13SentrySession::sessionId */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::sessionId(ID param_1,SEL param_2)

{
  FUN_100bde348(param_1,param_2,PTR_typeMetadataAccessor_100ea7500,FUN_100bde318,
                PTR__bridgeToObjectiveC_100ea74d0);
  return param_1;
}



/* Address: 0x100bde318 | FUN_100bde318 */

void FUN_100bde318(void)

{
  FUN_100bde3e0(&_TtC6Sentry13SentrySession::_sessionId,PTR_typeMetadataAccessor_100ea7500);
  return;
}



/* Address: 0x100bde32c | _TtC6Sentry13SentrySession::started */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::started(ID param_1,SEL param_2)

{
  FUN_100bde348(param_1,param_2,PTR_typeMetadataAccessor_100ea7480,FUN_100bde3cc,
                PTR__bridgeToObjectiveC_100ea7408);
  return param_1;
}



/* Address: 0x100bde348 | FUN_100bde348 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

long FUN_100bde348(undefined8 param_1,undefined8 param_2,code *param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  FUN_100bdf540(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10021b704();
  (*param_4)();
  FUN_100b6f868();
  (*param_5)();
  FUN_100bdf4c0();
  return lVar1;
}



/* Address: 0x100bde3cc | FUN_100bde3cc */

void FUN_100bde3cc(void)

{
  FUN_100bde3e0(&_TtC6Sentry13SentrySession::_started,PTR_typeMetadataAccessor_100ea7480);
  return;
}



/* Address: 0x100bde3e0 | FUN_100bde3e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bde3e0(undefined8 param_1,long *param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry13SentrySession::lock);
  _objc_msgSend(self,"lock");
  lVar2 = *param_2;
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,unaff_x20 + lVar2,lVar1);
  _objc_msgSend(self,"unlock");
  FUN_100bdf4d0();
  return;
}



/* Address: 0x100bde468 | _TtC6Sentry13SentrySession::errors */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry13SentrySession::errors(ID param_1,SEL param_2)

{
  FUN_100bde49c();
  return param_1;
}



/* Address: 0x100bde49c | FUN_100bde49c */

void FUN_100bde49c(void)

{
  FUN_100bde5f0(&_TtC6Sentry13SentrySession::_errors);
  return;
}



/* Address: 0x100bde4a8 | _TtC6Sentry13SentrySession::setErrors: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentrySession::setErrors_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bde4d8(param_3);
  return;
}



/* Address: 0x100bde4d8 | FUN_100bde4d8 */

void FUN_100bde4d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100bdf46c(_TtC6Sentry13SentrySession::lock);
  FUN_100b78d60();
  *(long *)(lVar1 + _TtC6Sentry13SentrySession::_errors) = param_1;
  FUN_100b78d60();
  FUN_100b78d38(lVar1);
  return;
}



/* Address: 0x100bde52c | FUN_100bde52c */

void FUN_100bde52c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  param_1[1] = unaff_x20;
  puVar1 = param_1;
  FUN_100bdf46c(_TtC6Sentry13SentrySession::lock);
  FUN_100b78d60();
  uVar2 = *(undefined8 *)((long)puVar1 + _TtC6Sentry13SentrySession::_errors);
  FUN_100b78d60();
  FUN_100b6f868();
  *param_1 = uVar2;
  FUN_100b56e60(FUN_100bde594,param_1);
  return;
}



/* Address: 0x100bde594 | FUN_100bde594 */

void FUN_100bde594(undefined8 *param_1)

{
  FUN_100bde4d8(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bde5b0 | _TtC6Sentry13SentrySession::sequence */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry13SentrySession::sequence(ID param_1,SEL param_2)

{
  FUN_100bde5e4();
  return param_1;
}



/* Address: 0x100bde5e4 | FUN_100bde5e4 */

void FUN_100bde5e4(void)

{
  FUN_100bde5f0(&_TtC6Sentry13SentrySession::_sequence);
  return;
}



/* Address: 0x100bde5f0 | FUN_100bde5f0 */

void FUN_100bde5f0(long param_1)

{
  long *unaff_x19;
  undefined8 uVar1;
  
  FUN_100bdf4e0();
  FUN_100bdf4b8(_TtC6Sentry13SentrySession::lock);
  FUN_100ba5a8c();
  uVar1 = *(undefined8 *)(param_1 + *unaff_x19);
  FUN_100ba5a8c();
  FUN_100b6f934();
  FUN_100b56e60(uVar1);
  return;
}



/* Address: 0x100bde644 | _TtC6Sentry13SentrySession::distinctId */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::distinctId(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bde69c(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100bde69c | FUN_100bde69c */

void FUN_100bde69c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  FUN_100b78da0(_TtC6Sentry13SentrySession::lock);
  FUN_100b78ce8();
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_distinctId);
  uVar2 = ((undefined8 *)(unaff_x20 + _TtC6Sentry13SentrySession::_distinctId))[1];
  FUN_100b940f8();
  FUN_100b78ce8();
  FUN_100b6f868();
  FUN_100b56e60(uVar1,uVar2);
  return;
}



/* Address: 0x100bde700 | _TtC6Sentry13SentrySession::flagInit */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::flagInit(ID param_1,SEL param_2)

{
  FUN_100bde734();
  return param_1;
}



/* Address: 0x100bde734 | FUN_100bde734 */

void FUN_100bde734(void)

{
  FUN_100bde8b8(&_TtC6Sentry13SentrySession::_flagInit);
  return;
}



/* Address: 0x100bde740 | _TtC6Sentry13SentrySession::timestamp */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::timestamp(ID param_1,SEL param_2)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  undefined1 *puVar4;
  NSDate *pNVar5;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100bde7f8(puVar4,param_1);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  DVar3.unknown = puVar4;
  FUN_1000c9ff0(puVar4,1,DVar2.unknown);
  pNVar5 = (NSDate *)0x0;
  if ((int)DVar3.unknown != 1) {
    pNVar5 = Foundation::Date::_bridgeToObjectiveC(DVar3);
    (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(puVar4,DVar2.unknown);
  }
  return (ID)pNVar5;
}



/* Address: 0x100bde7f8 | FUN_100bde7f8 */

void FUN_100bde7f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  FUN_100bdf4b8(_TtC6Sentry13SentrySession::lock);
  FUN_100ba5a8c();
  lVar1 = _TtC6Sentry13SentrySession::_timestamp;
  FUN_100b80d44(unaff_x20 + _TtC6Sentry13SentrySession::_timestamp,auStack_48,0);
  FUN_1000057b8(unaff_x20 + lVar1,param_1);
  FUN_100ba5a8c();
  FUN_100b6f934();
  return;
}



/* Address: 0x100bde878 | _TtC6Sentry13SentrySession::duration */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::duration(ID param_1,SEL param_2)

{
  FUN_100bde8ac();
  return param_1;
}



/* Address: 0x100bde8ac | FUN_100bde8ac */

void FUN_100bde8ac(void)

{
  FUN_100bde8b8(&_TtC6Sentry13SentrySession::_duration);
  return;
}



/* Address: 0x100bde8b8 | FUN_100bde8b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bde8b8(long param_1)

{
  long *unaff_x19;
  undefined8 uVar1;
  
  FUN_100bdf4e0();
  FUN_100bdf4b8(_TtC6Sentry13SentrySession::lock);
  FUN_100ba5a8c();
  uVar1 = *(undefined8 *)(param_1 + *unaff_x19);
  FUN_100ba5a8c(uVar1,"unlock");
  FUN_100b6f934();
  FUN_100b56e60(uVar1);
  return;
}



/* Address: 0x100bde914 | _TtC6Sentry13SentrySession::releaseName */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::releaseName(ID param_1,SEL param_2)

{
  FUN_100bde938(param_1,param_2,FUN_100bde920);
  return param_1;
}



/* Address: 0x100bde920 | FUN_100bde920 */

void FUN_100bde920(void)

{
  FUN_100bdea58(&_TtC6Sentry13SentrySession::_releaseName);
  return;
}



/* Address: 0x100bde92c | _TtC6Sentry13SentrySession::environment */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry13SentrySession::environment(ID param_1,SEL param_2)

{
  FUN_100bde938(param_1,param_2,FUN_100bde99c);
  return param_1;
}



/* Address: 0x100bde938 | FUN_100bde938 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_100bde938(undefined8 param_1,long param_2,code *param_3)

{
  NSString *pNVar1;
  
  (*param_3)(param_1);
  FUN_100b6f934();
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b6f838();
  }
  return pNVar1;
}



/* Address: 0x100bde99c | FUN_100bde99c */

void FUN_100bde99c(void)

{
  FUN_100bdea58(&_TtC6Sentry13SentrySession::_environment);
  return;
}



/* Address: 0x100bde9a8 | _TtC6Sentry13SentrySession::setEnvironment: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry13SentrySession::setEnvironment_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdeac4();
  return;
}



/* Address: 0x100bde9b4 | FUN_100bde9b4 */

void FUN_100bde9b4(undefined8 param_1,undefined8 param_2)

{
  FUN_100bdeb28(param_1,param_2,FUN_100bdc340);
  return;
}



/* Address: 0x100bde9c0 | FUN_100bde9c0 */

void FUN_100bde9c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  
  param_1[2] = unaff_x20;
  puVar3 = param_1;
  FUN_100bdf46c(_TtC6Sentry13SentrySession::lock);
  FUN_100b78d60();
  uVar1 = *(undefined8 *)((long)puVar3 + _TtC6Sentry13SentrySession::_environment);
  uVar2 = ((undefined8 *)((long)puVar3 + _TtC6Sentry13SentrySession::_environment))[1];
  FUN_100b940f8();
  FUN_100b78d60();
  FUN_100b6f868();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  FUN_100b5e408(FUN_100bdea34,param_1);
  return;
}


