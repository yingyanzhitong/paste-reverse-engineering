/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b9d654 | FUN_100b9d654 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b9d654(ID param_1,long param_2)

{
  Date DVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  DVar2.unknown = (undefined *)_objc_msgSend(param_1,"date");
  Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar2);
  dVar5 = Foundation::Date::get_timeIntervalSince1970((Date)0x0);
  (**(code **)(lVar4 + 8))(auStack_70 + -(lVar3 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    _objc_msgSend(*(ID *)(param_2 + _TtC6Sentry17SentryFileManager::helper),
                  "deleteOldEnvelopesFromAllSentryPaths:",dVar5);
  }
  return;
}



/* Address: 0x100b9d760 | _TtC6Sentry17SentryFileManager::deleteOldEnvelopeItems */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteOldEnvelopeItems(ID param_1,SEL param_2)

{
  FUN_100b9d5b4(param_1);
  return;
}



/* Address: 0x100b9d788 | FUN_100b9d788 */

void FUN_100b9d788(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteAllEnvelopes");
  return;
}



/* Address: 0x100b9d7a0 | _TtC6Sentry17SentryFileManager::deleteAllEnvelopes */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteAllEnvelopes(ID param_1,SEL param_2)

{
  FUN_100b9d788(param_1);
  return;
}



/* Address: 0x100b9d7c8 | FUN_100b9d7c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b9d7c8(void)

{
  URL UVar1;
  long unaff_x20;
  
  UVar1.unknown =
       (undefined *)
       _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                     "getSentryPathAsURL");
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar1);
  FUN_100b9fde0(UVar1.unknown);
  return;
}



/* Address: 0x100b9d810 | _TtC6Sentry17SentryFileManager::getSentryPathAsURL */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::getSentryPathAsURL(ID param_1,SEL param_2)

{
  URL UVar1;
  NSURL *pNVar2;
  long lVar3;
  long lVar4;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_100b9d7c8(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1);
  pNVar2 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return (ID)pNVar2;
}



/* Address: 0x100b9d8a4 | FUN_100b9d8a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b9d8a4(void)

{
  NSString *pNVar1;
  NSString *pNVar2;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(self,"moveState:toPreviousState:",pNVar1,pNVar2);
  FUN_100b6fce4();
  return 0;
}



/* Address: 0x100b9d910 | _TtC6Sentry17SentryFileManager::moveState:toPreviousState: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry17SentryFileManager::moveState_toPreviousState_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b9d8a4(SVar1.str,SVar1.bridgeObject,SVar2.str,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x100b9d994 | FUN_100b9d994 */

void FUN_100b9d994(undefined8 param_1)

{
  FUN_100b9db68(param_1,&PTR_s_storeCurrentSessionData__100f85c80);
  return;
}



/* Address: 0x100b9d9a0 | _TtC6Sentry17SentryFileManager::storeCurrentSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeCurrentSession_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9d994(param_3);
  return;
}



/* Address: 0x100b9d9f0 | FUN_100b9d9f0 */

void FUN_100b9d9f0(void)

{
  FUN_100b9e13c(&PTR_s_readCurrentSession_100f88e28,FUN_100b69f78);
  return;
}



/* Address: 0x100b9da04 | _TtC6Sentry17SentryFileManager::readCurrentSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readCurrentSession(ID param_1,SEL param_2)

{
  FUN_100b9d9f0();
  return param_1;
}



/* Address: 0x100b9da38 | FUN_100b9da38 */

void FUN_100b9da38(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteCurrentSession");
  return;
}



/* Address: 0x100b9da50 | _TtC6Sentry17SentryFileManager::deleteCurrentSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteCurrentSession(ID param_1,SEL param_2)

{
  FUN_100b9da38(param_1);
  return;
}



/* Address: 0x100b9da78 | FUN_100b9da78 */

void FUN_100b9da78(undefined8 param_1)

{
  FUN_100b9db68(param_1,&PTR_s_storeCrashedSessionData__100f85c78);
  return;
}



/* Address: 0x100b9da84 | _TtC6Sentry17SentryFileManager::storeCrashedSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeCrashedSession_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9da78(param_3);
  return;
}



/* Address: 0x100b9dad4 | FUN_100b9dad4 */

void FUN_100b9dad4(void)

{
  FUN_100b9e13c(&PTR_s_readCrashedSession_100f88e20,FUN_100b69f78);
  return;
}



/* Address: 0x100b9dae8 | _TtC6Sentry17SentryFileManager::readCrashedSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readCrashedSession(ID param_1,SEL param_2)

{
  FUN_100b9dad4();
  return param_1;
}



/* Address: 0x100b9db1c | FUN_100b9db1c */

void FUN_100b9db1c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteCrashedSession");
  return;
}



/* Address: 0x100b9db34 | _TtC6Sentry17SentryFileManager::deleteCrashedSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteCrashedSession(ID param_1,SEL param_2)

{
  FUN_100b9db1c(param_1);
  return;
}



/* Address: 0x100b9db5c | FUN_100b9db5c */

void FUN_100b9db5c(undefined8 param_1)

{
  FUN_100b9db68(param_1,&PTR_s_storeAbnormalSessionData__100f85c60);
  return;
}



/* Address: 0x100b9db68 | FUN_100b9db68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b9db68(ulong param_1,undefined8 *param_2)

{
  undefined *puVar1;
  Data DVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_60 [3];
  undefined *local_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
  FUN_100b9fd9c();
  uVar4 = *(undefined8 *)(param_1 + _TtC6Sentry13SentrySession::lock);
  FUN_100bb5940();
  puVar1 = &DAT_101044968;
  FUN_100b6730c();
  DVar2.unknown = (undefined *)local_60;
  local_60[0] = uVar4;
  local_48 = puVar1;
  FUN_100b6a3a4();
  FUN_100004594(local_60);
  if (param_1 >> 0x3c < 0xf) {
    Foundation::Data::_bridgeToObjectiveC(DVar2);
    FUN_10003bf18(DVar2.unknown,param_1);
  }
  FUN_100b9fdc8(uVar3,*param_2);
  FUN_100b6f868();
  return;
}



/* Address: 0x100b9dc44 | _TtC6Sentry17SentryFileManager::storeAbnormalSession: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeAbnormalSession_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9db5c(param_3);
  return;
}



/* Address: 0x100b9dc94 | FUN_100b9dc94 */

void FUN_100b9dc94(void)

{
  FUN_100b9e13c(&PTR_s_readAbnormalSession_100f85c28,FUN_100b69f78);
  return;
}



/* Address: 0x100b9dca8 | _TtC6Sentry17SentryFileManager::readAbnormalSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readAbnormalSession(ID param_1,SEL param_2)

{
  FUN_100b9dc94();
  return param_1;
}



/* Address: 0x100b9dcdc | FUN_100b9dcdc */

void FUN_100b9dcdc(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteAbnormalSession")
  ;
  return;
}



/* Address: 0x100b9dcf4 | _TtC6Sentry17SentryFileManager::deleteAbnormalSession */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteAbnormalSession(ID param_1,SEL param_2)

{
  FUN_100b9dcdc(param_1);
  return;
}



/* Address: 0x100b9dd1c | FUN_100b9dd1c */

void FUN_100b9dd1c(Date param_1)

{
  NSDate *pNVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
  pNVar1 = Foundation::Date::_bridgeToObjectiveC(param_1);
  FUN_100b9fdc8(uVar2,"storeTimestampLastInForeground:");
  FUN_100b9fde0(pNVar1);
  return;
}



/* Address: 0x100b9dd5c | _TtC6Sentry17SentryFileManager::storeTimestampLastInForeground: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeTimestampLastInForeground_
               (ID param_1,SEL param_2,ID param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  FUN_100b9dd1c(&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return;
}



/* Address: 0x100b9ddf0 | FUN_100b9ddf0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b9ddf0(undefined8 param_1)

{
  Date DVar1;
  Date DVar2;
  long unaff_x20;
  
  DVar1.unknown =
       (undefined *)
       _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                     "readTimestampLastInForeground");
  if (DVar1.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar1);
    FUN_100b6f868();
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  FUN_1000c9ffc(param_1,DVar1.unknown == (undefined *)0x0,1,DVar2.unknown);
  return;
}



/* Address: 0x100b9de64 | _TtC6Sentry17SentryFileManager::readTimestampLastInForeground */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readTimestampLastInForeground(ID param_1,SEL param_2)

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
  FUN_100b9ddf0(puVar4,param_1);
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



/* Address: 0x100b9df1c | FUN_100b9df1c */

void FUN_100b9df1c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                "deleteTimestampLastInForeground");
  return;
}



/* Address: 0x100b9df34 | _TtC6Sentry17SentryFileManager::deleteTimestampLastInForeground */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteTimestampLastInForeground(ID param_1,SEL param_2)

{
  FUN_100b9df1c(param_1);
  return;
}



/* Address: 0x100b9df5c | FUN_100b9df5c */

void FUN_100b9df5c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  Data DVar2;
  NSData *pNVar3;
  ID self;
  long unaff_x20;
  undefined8 local_50 [3];
  undefined *local_38;
  
  DVar2.unknown = (undefined *)local_50;
  FUN_100b9fd9c();
  FUN_100b99854();
  puVar1 = &DAT_101044968;
  FUN_100b6730c();
  local_50[0] = param_1;
  local_38 = puVar1;
  FUN_100b6a3a4(local_50);
  FUN_100004594();
  if (param_2 >> 0x3c < 0xf) {
    self = *(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
    FUN_100b9fde8();
    pNVar3 = Foundation::Data::_bridgeToObjectiveC(DVar2);
    _objc_msgSend(self,"storeAppStateData:",pNVar3);
    FUN_100b6fce4();
    FUN_100b9fde8();
    FUN_10003bf18();
  }
  else {
    FUN_100b6f870();
    FUN_100b84df8(4,0xd00000000000003f,0x8000000100dcd420,0xd000000000000059,0x8000000100dcd3c0,0x93
                 );
  }
  FUN_100b78c90();
  return;
}



/* Address: 0x100b9e050 | _TtC6Sentry17SentryFileManager::storeAppState: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeAppState_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9df5c(param_3);
  return;
}



/* Address: 0x100b9e0a0 | FUN_100b9e0a0 */

void FUN_100b9e0a0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                "moveAppStateToPreviousAppState");
  return;
}



/* Address: 0x100b9e0b8 | _TtC6Sentry17SentryFileManager::moveAppStateToPreviousAppState */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::moveAppStateToPreviousAppState(ID param_1,SEL param_2)

{
  FUN_100b9e0a0(param_1);
  return;
}



/* Address: 0x100b9e0e0 | FUN_100b9e0e0 */

void FUN_100b9e0e0(void)

{
  FUN_100b9e13c(&PTR_s_readAppStateData_100f85c38,FUN_100b6a1f4);
  return;
}



/* Address: 0x100b9e0f4 | _TtC6Sentry17SentryFileManager::readAppState */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readAppState(ID param_1,SEL param_2)

{
  FUN_100b9e0e0();
  return param_1;
}



/* Address: 0x100b9e128 | FUN_100b9e128 */

void FUN_100b9e128(void)

{
  FUN_100b9e13c(&PTR_s_readPreviousAppState_100f85c40,FUN_100b6a1f4);
  return;
}



/* Address: 0x100b9e13c | FUN_100b9e13c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b9e13c(Data param_1,code *param_2)

{
  FUN_100b9fda4(_TtC6Sentry17SentryFileManager::helper);
  if (param_1.unknown != (undefined *)0x0) {
    Foundation::Data::__unconditionallyBridgeFromObjectiveC(param_1);
    FUN_100b6f868();
    FUN_100b9fd9c();
    FUN_100b9fdbc();
    FUN_100b6d4e0();
    FUN_100b9fdbc();
    (*param_2)();
    FUN_100b9fdbc();
    FUN_10003bf2c();
    FUN_100b9fdbc();
    FUN_10003bf2c();
  }
  FUN_100b56e60();
  return;
}



/* Address: 0x100b9e1b4 | _TtC6Sentry17SentryFileManager::readPreviousAppState */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readPreviousAppState(ID param_1,SEL param_2)

{
  FUN_100b9e128();
  return param_1;
}



/* Address: 0x100b9e1e8 | FUN_100b9e1e8 */

void FUN_100b9e1e8(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteAppState");
  return;
}



/* Address: 0x100b9e200 | _TtC6Sentry17SentryFileManager::deleteAppState */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteAppState(ID param_1,SEL param_2)

{
  FUN_100b9e1e8(param_1);
  return;
}



/* Address: 0x100b9e228 | FUN_100b9e228 */

void FUN_100b9e228(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                "moveBreadcrumbsToPreviousBreadcrumbs");
  return;
}



/* Address: 0x100b9e240 | _TtC6Sentry17SentryFileManager::moveBreadcrumbsToPreviousBreadcrumbs */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::moveBreadcrumbsToPreviousBreadcrumbs(ID param_1,SEL param_2)

{
  FUN_100b9e228(param_1);
  return;
}



/* Address: 0x100b9e268 | FUN_100b9e268 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b9e268(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                        "readPreviousBreadcrumbs");
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6faa8();
  return IVar1;
}



/* Address: 0x100b9e2c0 | _TtC6Sentry17SentryFileManager::readPreviousBreadcrumbs */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readPreviousBreadcrumbs(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  
  FUN_100b9e268(param_1);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b9e314 | FUN_100b9e314 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b9e314(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                        "readTimezoneOffset");
  return IVar1;
}



/* Address: 0x100b9e340 | _TtC6Sentry17SentryFileManager::readTimezoneOffset */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readTimezoneOffset(ID param_1,SEL param_2)

{
  FUN_100b9e314();
  return param_1;
}



/* Address: 0x100b9e374 | FUN_100b9e374 */

void FUN_100b9e374(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"storeTimezoneOffset:",
                param_1);
  return;
}



/* Address: 0x100b9e390 | _TtC6Sentry17SentryFileManager::storeTimezoneOffset: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeTimezoneOffset_(ID param_1,SEL param_2,long_long param_3)

{
  FUN_100b9e374(param_3);
  return;
}



/* Address: 0x100b9e3c0 | FUN_100b9e3c0 */

void FUN_100b9e3c0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteTimezoneOffset");
  return;
}



/* Address: 0x100b9e3d8 | _TtC6Sentry17SentryFileManager::deleteTimezoneOffset */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteTimezoneOffset(ID param_1,SEL param_2)

{
  FUN_100b9e3c0(param_1);
  return;
}



/* Address: 0x100b9e400 | FUN_100b9e400 */

void FUN_100b9e400(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"storeAppHangEvent:",
                param_1);
  return;
}



/* Address: 0x100b9e41c | _TtC6Sentry17SentryFileManager::storeAppHangEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::storeAppHangEvent_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b9e400(param_3);
  return;
}



/* Address: 0x100b9e46c | FUN_100b9e46c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b9e46c(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),
                        "readAppHangEvent");
  return IVar1;
}



/* Address: 0x100b9e498 | _TtC6Sentry17SentryFileManager::readAppHangEvent */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::readAppHangEvent(ID param_1,SEL param_2)

{
  FUN_100b9e46c();
  return param_1;
}



/* Address: 0x100b9e4cc | FUN_100b9e4cc */

void FUN_100b9e4cc(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"appHangEventExists");
  return;
}



/* Address: 0x100b9e4f4 | _TtC6Sentry17SentryFileManager::appHangEventExists */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry17SentryFileManager::appHangEventExists(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b9e4cc();
  return uVar1 & 1;
}



/* Address: 0x100b9e528 | FUN_100b9e528 */

void FUN_100b9e528(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteAppHangEvent");
  return;
}



/* Address: 0x100b9e540 | _TtC6Sentry17SentryFileManager::deleteAppHangEvent */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteAppHangEvent(ID param_1,SEL param_2)

{
  FUN_100b9e528(param_1);
  return;
}



/* Address: 0x100b9e568 | FUN_100b9e568 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9e568(void)

{
  NSString *pNVar1;
  ID IVar2;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_40 = 0;
  IVar2 = _objc_msgSend((ID)&objc::class_t::SentryFileManagerHelper,
                        "createDirectoryAtPath:withError:",pNVar1,&local_40);
  if ((int)IVar2 == 0) {
    FUN_10021b704(0);
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    FUN_10021b704(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b9e648 | _TtC6Sentry17SentryFileManager::createDirectoryAtPath:error: */

/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b9e680) */
/* WARNING: Removing unreachable block (ram,0x000100b9e6a8) */
/* WARNING: Removing unreachable block (ram,0x000100b9e688) */
/* Function Stack Size: 0x20 bytes */

bool _TtC6Sentry17SentryFileManager::createDirectoryAtPath_error_
               (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b9e568(SVar1.str);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return 1;
}


