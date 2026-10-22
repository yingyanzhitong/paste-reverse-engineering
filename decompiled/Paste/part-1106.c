/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b9e6c8 | FUN_100b9e6c8 */

void FUN_100b9e6c8(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"deleteAllFolders");
  return;
}



/* Address: 0x100b9e6e0 | _TtC6Sentry17SentryFileManager::deleteAllFolders */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::deleteAllFolders(ID param_1,SEL param_2)

{
  FUN_100b9e6c8(param_1);
  return;
}



/* Address: 0x100b9e708 | FUN_100b9e708 */

void FUN_100b9e708(undefined8 param_1)

{
  FUN_100b9fdb4(_TtC6Sentry17SentryFileManager::helper);
  FUN_100b9fdc8();
  FUN_100b9fde0(param_1);
  return;
}



/* Address: 0x100b9e740 | _TtC6Sentry17SentryFileManager::removeFileAtPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryFileManager::removeFileAtPath_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b9e708(SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100b9e79c | FUN_100b9e79c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b9e79c(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x19;
  
  FUN_100b9fdb4(_TtC6Sentry17SentryFileManager::helper);
  IVar1 = _objc_msgSend(unaff_x19,"allFilesInFolder:",param_1);
  FUN_100b6f868(IVar1);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6faa8();
  return IVar1;
}



/* Address: 0x100b9e804 | _TtC6Sentry17SentryFileManager::allFilesInFolder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry17SentryFileManager::allFilesInFolder_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  NSArray *pNVar2;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar3.str;
  FUN_100b9e79c(pcVar1,SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pcVar1);
  return (ID)pNVar2;
}



/* Address: 0x100b9e888 | FUN_100b9e888 */

ID FUN_100b9e888(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x19;
  
  FUN_100b9fdb4(_TtC6Sentry17SentryFileManager::helper);
  IVar1 = _objc_msgSend(unaff_x19,"isDirectory:",param_1);
  FUN_100b6f868();
  return IVar1;
}



/* Address: 0x100b9e8d0 | _TtC6Sentry17SentryFileManager::isDirectory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC6Sentry17SentryFileManager::isDirectory_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100b9e888(pcVar1,SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return (uint)pcVar1 & 1;
}



/* Address: 0x100b9e938 | FUN_100b9e938 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b9e938(void)

{
  NSString *pNVar1;
  Data DVar2;
  Data DVar3;
  char *pcVar4;
  long unaff_x20;
  ID self;
  undefined1 auVar5 [16];
  undefined *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = *(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_40 = (undefined *)0x0;
  pcVar4 = "readDataFromPath:error:";
  DVar2.unknown = (undefined *)_objc_msgSend(self,"readDataFromPath:error:",pNVar1,&local_40);
  DVar3.unknown = local_40;
  if (DVar2.unknown == (undefined *)0x0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar2);
    pNVar1 = (NSString *)pcVar4;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    auVar5._8_8_ = pNVar1;
    auVar5._0_8_ = DVar3.unknown;
    return auVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b9ea24 | _TtC6Sentry17SentryFileManager::readDataFromPath:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b9ea90) */
/* WARNING: Removing unreachable block (ram,0x000100b9eadc) */
/* WARNING: Removing unreachable block (ram,0x000100b9ea94) */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry17SentryFileManager::readDataFromPath_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  NSData *pNVar1;
  void *pvVar2;
  String SVar3;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar3.bridgeObject;
  FUN_100b9e938(SVar3.str,pvVar2);
  _swift_bridgeObjectRelease(pvVar2);
  pNVar1 = Foundation::Data::_bridgeToObjectiveC((Data)SVar3.str);
  FUN_10003bf2c(SVar3.str,SVar3.bridgeObject);
  return (ID)pNVar1;
}



/* Address: 0x100b9eb04 | FUN_100b9eb04 */

uint FUN_100b9eb04(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b9f8b4(param_1,param_2,pNVar1,uVar2);
  FUN_100b6fce4();
  return (uint)param_1 & 1;
}



/* Address: 0x100b9eb68 | _TtC6Sentry17SentryFileManager::writeData:toPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

bool _TtC6Sentry17SentryFileManager::writeData_toPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Data DVar1;
  Data DVar2;
  String SVar3;
  
  DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar2 = DVar1;
  FUN_100b9eb04(DVar1.unknown,param_2,SVar3.str,SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  FUN_10003bf2c(DVar1.unknown,param_2);
  return (uint)DVar2.unknown & 1;
}



/* Address: 0x100b9ec2c | FUN_100b9ec2c */

void FUN_100b9ec2c(void)

{
  FUN_100b9ec38(&PTR_s_envelopesPath_100f87370);
  return;
}



/* Address: 0x100b9ec38 | FUN_100b9ec38 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b9ec38(void)

{
  String SVar1;
  
  FUN_100b9fda4(_TtC6Sentry17SentryFileManager::helper);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6faa8(SVar1.str,SVar1.bridgeObject);
  FUN_100b9fde8();
  FUN_100b56e60();
  return;
}



/* Address: 0x100b9ec7c | FUN_100b9ec7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9ec7c(void)

{
  NSString *self;
  NSString *pNVar1;
  char *pcVar2;
  ID self_00;
  Data DVar3;
  String SVar4;
  
  self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100b6fbdc();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pcVar2 = (char *)_objc_msgSend((ID)self,"stringByAppendingPathComponent:",pNVar1);
  FUN_100b6f934();
  FUN_100b6f868();
  if (pcVar2 == (char *)0x0) {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar2 = SVar4.str;
    FUN_100b9fdd0(pcVar2,SVar4.bridgeObject);
    FUN_100b6f860();
  }
  (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  self_00 = _objc_msgSend((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  DVar3.unknown = (undefined *)_objc_msgSend(self_00,"contentsAtPath:",pcVar2);
  FUN_100b6f934(0);
  if (DVar3.unknown == (undefined *)0x0) {
    FUN_100b6f838();
  }
  else {
    Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
    FUN_100b6fce4();
    FUN_100b85d38(0);
    _objc_allocWithZone();
    FUN_100b6fbdc();
    FUN_100b85bdc();
  }
  return;
}



/* Address: 0x100b9eda8 | FUN_100b9eda8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9eda8(void *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  NSString *pNVar6;
  NSString *pNVar7;
  void *pvVar8;
  Data DVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  void *pvVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 *puVar17;
  long lVar18;
  long unaff_x20;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  __int64 _Var22;
  code *pcVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  NSString *local_c8;
  uint local_9c;
  undefined1 auStack_80 [32];
  
  FUN_100b9ec2c();
  FUN_100b9e79c();
  FUN_100b6f838();
  lVar18 = *(long *)((long)param_1 + 0x10);
  IVar4 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry17SentryFileManager::helper),"maxEnvelopes");
  if ((long)IVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x100b9f5d0);
    (*pcVar23)();
  }
  uVar3 = lVar18 - IVar4;
  if (lVar18 <= (long)IVar4) {
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  puVar5 = &_OBJC_CLASS___NSFileManager;
  FUN_100b9fd9c();
  uVar21 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry17SentryFileManager::envelopeDeletedCallback);
  do {
    if (uVar21 == uVar3) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x100b9f5c0);
      (*pcVar23)();
    }
    FUN_100b9ec2c();
    FUN_100b9fdd0();
    FUN_100b6f860();
    if (*(ulong *)((long)param_1 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x100b9f5c4);
      (*pcVar23)();
    }
    _swift_bridgeObjectRetain(*(undefined8 *)((long)param_1 + uVar21 * 0x10 + 0x28));
    FUN_100b9fde8();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    FUN_100b6f980();
    pcVar15 = "stringByAppendingPathComponent:";
    pNVar7 = (NSString *)_objc_msgSend((ID)puVar5,"stringByAppendingPathComponent:",pNVar6);
    pNVar6 = pNVar7;
    FUN_100b6faa8();
    FUN_100b6fce4();
    if (pNVar7 == (NSString *)0x0) {
      SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pcVar15 = SVar24.bridgeObject;
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar6 = pNVar7;
      FUN_100b6f980();
    }
    FUN_100b9fdd8();
    pvVar8 = param_1;
    _swift_bridgeObjectRetain();
    _swift_isUniquelyReferenced_nonNull_native();
    pvVar14 = param_1;
    if (((ulong)pvVar8 & 1) == 0) {
      FUN_100baff24();
    }
    if (*(ulong *)((long)pvVar14 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x100b9f5c8);
      (*pcVar23)();
    }
    lVar18 = *(ulong *)((long)pvVar14 + 0x10) - 1;
    _memmove((void *)((long)pvVar14 + uVar21 * 0x10 + 0x20),
             (void *)((long)pvVar14 + uVar21 * 0x10 + 0x30),(lVar18 - uVar21) * 0x10);
    *(long *)((long)pvVar14 + 0x10) = lVar18;
    FUN_100b6f860();
    IVar4 = _objc_msgSend((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
    pcVar16 = "contentsAtPath:";
    DVar9.unknown = (undefined *)_objc_msgSend(IVar4,"contentsAtPath:");
    FUN_100b6fce4();
    FUN_100b6faa8();
    if (DVar9.unknown == (undefined *)0x0) {
      DVar9.unknown = (undefined *)0x0;
      local_c8 = (NSString *)0xf000000000000000;
      pcVar16 = (char *)0xc000000000000000;
    }
    else {
      DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
      FUN_100b6f868();
      FUN_100b6d4e0(DVar9.unknown,pcVar16);
      local_c8 = (NSString *)pcVar16;
    }
    puVar5 = DVar9.unknown;
    FUN_100b6b16c(DVar9.unknown,pcVar16);
    FUN_10003bf2c(DVar9.unknown);
    if (puVar5 == (undefined *)0x0) {
      local_9c = 0;
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) goto LAB_100b9f3dc;
LAB_100b9f04c:
      _Var22 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      if (_Var22 != 0) goto LAB_100b9f058;
LAB_100b9f3f4:
      FUN_100b6f838();
    }
    else {
      FUN_100b960a4(0);
      puVar10 = puVar5;
      FUN_100b9ec2c();
      puVar11 = puVar5;
      pNVar7 = (NSString *)pcVar16;
      param_4 = pvVar14;
      FUN_100b95178(puVar5,puVar10);
      local_9c = (uint)puVar11;
      _swift_bridgeObjectRelease(pcVar16);
      puVar5 = *(undefined **)(puVar5 + _TtC6Sentry14SentryEnvelope::items);
      _swift_bridgeObjectRetain(puVar5);
      if ((-1 < (long)puVar5) && (((ulong)puVar5 >> 0x3e & 1) == 0)) goto LAB_100b9f04c;
LAB_100b9f3dc:
      _Var2.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((long)puVar5 < 0) {
        _Var2.unknown = puVar5;
      }
      _Var22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      if (_Var22 == 0) goto LAB_100b9f3f4;
LAB_100b9f058:
      if (_Var22 < 1) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x100b9f5cc);
        (*pcVar23)();
      }
      pNVar7 = (NSString *)0x0;
      FUN_100b80d44(puVar1,auStack_80);
      lVar18 = 0;
      do {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(puVar5 + lVar18 * 8 + 0x20);
        }
        else {
          lVar12 = lVar18;
          FUN_100b6d3d4(lVar18,puVar5);
        }
        _objc_msgSend(*(ID *)(lVar12 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
        SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar17 = SVar24.bridgeObject;
        pcVar16 = SVar24.str;
        FUN_100b6f934();
        if ((pcVar16 == (char *)0x746e657665 && puVar17 == &DAT_e500000000000000) ||
           (uVar13 = 0x746e657665, FUN_100b9fd80(0x746e657665,&DAT_e500000000000000),
           (uVar13 & 1) != 0)) {
          FUN_100b6f860();
          uVar19 = 2;
LAB_100b9f10c:
          pcVar23 = (code *)*puVar1;
          if (pcVar23 != (code *)0x0) {
            uVar20 = puVar1[1];
            _swift_retain(uVar20);
            (*pcVar23)(lVar12,uVar19);
            FUN_100004550(pcVar23,uVar20);
          }
        }
        else {
          uVar13 = 0x6e6f6973736573;
          if ((pcVar16 != (char *)0x6e6f6973736573 || puVar17 != &DAT_e700000000000000) &&
             (FUN_100b9fd80(0x6e6f6973736573,&DAT_e700000000000000), (uVar13 & 1) == 0)) {
            uVar13 = 0;
            if ((pcVar16 == (char *)0x746361736e617274 && puVar17 == &DAT_eb000000006e6f69) ||
               (FUN_100b9fd80(), (uVar13 & 1) != 0)) {
              FUN_100b6f860();
              uVar19 = 4;
            }
            else {
              uVar13 = 0x656d686361747461;
              if ((pcVar16 == (char *)0x656d686361747461 &&
                   puVar17 == (undefined1 *)0xea0000000000746e) ||
                 (FUN_100b9fd80(0x656d686361747461,0xea0000000000746e), (uVar13 & 1) != 0)) {
                FUN_100b6f860();
                uVar19 = 5;
              }
              else {
                uVar13 = 0;
                if ((pcVar16 == (char *)0x656c69666f7270 && puVar17 == &DAT_e700000000000000) ||
                   (FUN_100b9fd80(0x656c69666f7270,&DAT_e700000000000000), (uVar13 & 1) != 0)) {
                  FUN_100b6f860();
                  uVar19 = 7;
                }
                else {
                  uVar13 = 0;
                  if ((pcVar16 == (char *)0x5f656c69666f7270 &&
                       puVar17 == (undefined1 *)0xed00006b6e756863) ||
                     (FUN_100b9fd80(), (uVar13 & 1) != 0)) {
                    FUN_100b6f860();
                    uVar19 = 10;
                  }
                  else {
                    uVar13 = 0;
                    if ((pcVar16 == (char *)0x765f79616c706572 &&
                         puVar17 == (undefined1 *)0xec0000006f656469) ||
                       (FUN_100b9fd80(), (uVar13 & 1) != 0)) {
                      FUN_100b6f860();
                      uVar19 = 9;
                    }
                    else {
                      uVar13 = 0;
                      if ((pcVar16 == (char *)0x6b63616264656566 && puVar17 == &DAT_e800000000000000
                          ) || (FUN_100b9fd80(0x6b63616264656566,&DAT_e800000000000000),
                               (uVar13 & 1) != 0)) {
                        FUN_100b6f860();
                        uVar19 = 0xc;
                      }
                      else {
                        uVar13 = 0x647374617473;
                        if ((pcVar16 == (char *)0x647374617473 && puVar17 == &DAT_e600000000000000)
                           || (FUN_100b9fd80(0x647374617473,&DAT_e600000000000000),
                              (uVar13 & 1) != 0)) {
                          FUN_100b6f860();
                          uVar19 = 8;
                        }
                        else {
                          if (pcVar16 != (char *)0x676f6c ||
                              puVar17 != (undefined1 *)0xe300000000000000) {
                            uVar13 = 0;
                            FUN_100b9fd80(0x676f6c,0xe300000000000000);
                            if ((uVar13 & 1) == 0) {
                              uVar13 = 0;
                              if (pcVar16 == (char *)0x656d5f6563617274 &&
                                  puVar17 == (undefined1 *)0xec00000063697274) {
                                FUN_100b6f860();
                                uVar19 = 0xe;
                              }
                              else {
                                FUN_100b9fd80();
                                FUN_100b6f860();
                                uVar19 = 0xe;
                                if ((uVar13 & 1) == 0) {
                                  uVar19 = 1;
                                }
                              }
                              goto LAB_100b9f10c;
                            }
                          }
                          FUN_100b6f860();
                          uVar19 = 0xd;
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LAB_100b9f10c;
          }
          FUN_100b6f860();
          if ((local_9c & 1) == 0) {
            uVar19 = 3;
            goto LAB_100b9f10c;
          }
        }
        lVar18 = lVar18 + 1;
        FUN_100b6faa8();
      } while (_Var22 != lVar18);
      _swift_bridgeObjectRelease(pvVar14);
    }
    uVar21 = uVar21 + 1;
    FUN_100b6f8ec();
    FUN_100b9e708(pNVar6,pcVar15);
    FUN_10003bf18(DVar9.unknown);
    FUN_100b6f838();
    puVar5 = (undefined *)0x0;
    if (uVar21 == uVar3) {
      FUN_100b6f8ec();
      FUN_100b6f870();
      Swift::_StringGuts::grow(0x1c,(_StringGuts)local_c8);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar24 = Swift::CustomStringConvertible::get_description();
      SVar27.bridgeObject = param_4;
      SVar27.str = (char *)pNVar7;
      Swift::String::append(SVar24,SVar27);
      FUN_100b6f980();
      IVar4 = 0x297328656c696620;
      SVar24.bridgeObject = (void *)0xef3c206d6f726620;
      SVar24.str = (char *)0x297328656c696620;
      SVar28.bridgeObject = param_4;
      SVar28.str = (char *)pNVar7;
      Swift::String::append(SVar24,SVar28);
      FUN_100b9ec2c();
      FUN_100b9fdd0();
      FUN_100b6f860();
      pcVar16 = "lastPathComponent";
      pcVar15 = (char *)_objc_msgSend(IVar4,"lastPathComponent");
      FUN_100b6f934();
      FUN_100b9fdd8();
      FUN_100b6f868();
      FUN_100b9fdbc();
      SVar25.bridgeObject = pcVar16;
      SVar25.str = pcVar15;
      SVar29.bridgeObject = param_4;
      SVar29.str = (char *)pNVar7;
      Swift::String::append(SVar25,SVar29);
      FUN_100b678c0();
      SVar26.bridgeObject = (void *)0xe100000000000000;
      SVar26.str = (char *)0x3e;
      SVar30.bridgeObject = param_4;
      SVar30.str = (char *)pNVar7;
      Swift::String::append(SVar26,SVar30);
      FUN_100b84df8(1,0x206465766f6d6552,&DAT_e800000000000000,0xd000000000000059,0x8000000100dcd3c0
                    ,0x13b);
      FUN_100b6f980();
      return;
    }
  } while( true );
}



/* Address: 0x100b9f5d0 | FUN_100b9f5d0 */

void FUN_100b9f5d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryFileManager",0x18,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b9f5fc);
  (*pcVar1)();
}



/* Address: 0x100b9f5fc | _TtC6Sentry17SentryFileManager::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryFileManager::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b9f5d0();
  FUN_100b9f83c();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100b9f608 | FUN_100b9f608 */

void FUN_100b9f608(void)

{
  FUN_100b9f83c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b9f638 | _TtC6Sentry17SentryFileManager::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry17SentryFileManager::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + envelopeDeletedCallback),
                ((undefined8 *)(param_1 + envelopeDeletedCallback))[1]);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + dateProvider));
  return;
}



/* Address: 0x100b9f694 | FUN_100b9f694 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b9f694(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50 = 0;
  IVar1 = _objc_msgSend(unaff_x20,"initWithPlaceholder:error:",param_1,&local_50);
  if (IVar1 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}



/* Address: 0x100b9f768 | FUN_100b9f768 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b9f768(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50 = 0;
  IVar1 = _objc_msgSend(unaff_x20,"initWithOptions:error:",param_1,&local_50);
  if (IVar1 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return IVar1;
}



/* Address: 0x100b9f83c | FUN_100b9f83c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b9f83c(void)

{
  return ZEXT816(0x100fa1ba0);
}



/* Address: 0x100b9f85c | FUN_100b9f85c */

void FUN_100b9f85c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100b9f880 | FUN_100b9f880 */

void FUN_100b9f880(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b9f8ac | FUN_100b9f8ac */

void FUN_100b9f8ac(void)

{
  long unaff_x20;
  
  FUN_100b9d654(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100b9f8b4 | FUN_100b9f8b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b9f8b4(Data param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  NSData *pNVar1;
  ID IVar2;
  
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  IVar2 = _objc_msgSend(param_4,"writeData:toPath:",pNVar1,param_3);
  return IVar2;
}



/* Address: 0x100b9f90c | thunk_FUN_100b9cb2c */

void thunk_FUN_100b9cb2c(void)

{
  FUN_100b9cb2c();
  return;
}



/* Address: 0x100b9f910 | thunk_FUN_100b9cb90 */

void thunk_FUN_100b9cb90(void)

{
  FUN_100b9cb90();
  return;
}



/* Address: 0x100b9f914 | FUN_100b9f914 */

void FUN_100b9f914(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce674);
  return;
}



/* Address: 0x100b9f920 | FUN_100b9f920 */

void FUN_100b9f920(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x78))();
  return;
}



/* Address: 0x100b9f93c | FUN_100b9f93c */

void FUN_100b9f93c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x80))();
  return;
}



/* Address: 0x100b9f958 | FUN_100b9f958 */

void FUN_100b9f958(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x88))();
  return;
}



/* Address: 0x100b9f974 | FUN_100b9f974 */

void FUN_100b9f974(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xc0))();
  return;
}



/* Address: 0x100b9f990 | FUN_100b9f990 */

void FUN_100b9f990(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 200))();
  return;
}



/* Address: 0x100b9f9ac | FUN_100b9f9ac */

void FUN_100b9f9ac(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xd8))();
  return;
}



/* Address: 0x100b9f9c8 | FUN_100b9f9c8 */

void FUN_100b9f9c8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xe8))();
  return;
}



/* Address: 0x100b9f9e4 | FUN_100b9f9e4 */

void FUN_100b9f9e4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9f9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xf0))();
  return;
}



/* Address: 0x100b9fa00 | FUN_100b9fa00 */

void FUN_100b9fa00(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0xf8))();
  return;
}



/* Address: 0x100b9fa1c | FUN_100b9fa1c */

void FUN_100b9fa1c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fa34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x100))();
  return;
}



/* Address: 0x100b9fa38 | FUN_100b9fa38 */

void FUN_100b9fa38(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x108))();
  return;
}



/* Address: 0x100b9fa54 | FUN_100b9fa54 */

void FUN_100b9fa54(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fa6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x120))();
  return;
}



/* Address: 0x100b9fa70 | FUN_100b9fa70 */

void FUN_100b9fa70(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fa88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x138))();
  return;
}



/* Address: 0x100b9fa8c | FUN_100b9fa8c */

void FUN_100b9fa8c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9faa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x150))();
  return;
}



/* Address: 0x100b9faa8 | FUN_100b9faa8 */

void FUN_100b9faa8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x168))();
  return;
}



/* Address: 0x100b9fac4 | FUN_100b9fac4 */

void FUN_100b9fac4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fadc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x170))();
  return;
}



/* Address: 0x100b9fae0 | FUN_100b9fae0 */

void FUN_100b9fae0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9faf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x178))();
  return;
}



/* Address: 0x100b9fafc | FUN_100b9fafc */

void FUN_100b9fafc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x188))();
  return;
}



/* Address: 0x100b9fb18 | FUN_100b9fb18 */

void FUN_100b9fb18(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 400))();
  return;
}



/* Address: 0x100b9fb34 | FUN_100b9fb34 */

void FUN_100b9fb34(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x198))();
  return;
}



/* Address: 0x100b9fb50 | FUN_100b9fb50 */

void FUN_100b9fb50(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1a0))();
  return;
}



/* Address: 0x100b9fb6c | FUN_100b9fb6c */

void FUN_100b9fb6c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1a8))();
  return;
}



/* Address: 0x100b9fb88 | FUN_100b9fb88 */

void FUN_100b9fb88(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1b0))();
  return;
}



/* Address: 0x100b9fba4 | FUN_100b9fba4 */

void FUN_100b9fba4(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1b8))();
  return;
}



/* Address: 0x100b9fbc0 | FUN_100b9fbc0 */

void FUN_100b9fbc0(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fbd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1c0))();
  return;
}



/* Address: 0x100b9fbdc | FUN_100b9fbdc */

void FUN_100b9fbdc(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1c8))();
  return;
}



/* Address: 0x100b9fbf8 | FUN_100b9fbf8 */

void FUN_100b9fbf8(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1d0))();
  return;
}



/* Address: 0x100b9fc14 | FUN_100b9fc14 */

void FUN_100b9fc14(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1d8))();
  return;
}



/* Address: 0x100b9fc30 | FUN_100b9fc30 */

void FUN_100b9fc30(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fc48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1e0))();
  return;
}



/* Address: 0x100b9fc4c | FUN_100b9fc4c */

void FUN_100b9fc4c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1e8))();
  return;
}



/* Address: 0x100b9fc68 | FUN_100b9fc68 */

void FUN_100b9fc68(void)

{
  ulong *unaff_x20;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1f0))();
  return;
}



/* Address: 0x100b9fc94 | FUN_100b9fc94 */

void FUN_100b9fc94(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b9fcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x1f8))();
  return;
}



/* Address: 0x100b9fcb0 | FUN_100b9fcb0 */

void FUN_100b9fcb0(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b9fcd4 | FUN_100b9fcd4 */

void FUN_100b9fcd4(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}


