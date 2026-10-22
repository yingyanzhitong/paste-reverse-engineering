/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b950ac | thunk_FUN_100b950b0 */

void thunk_FUN_100b950b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045f70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b278;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b278,&DAT_100f38a80);
  DAT_101045f70 = pTVar1;
  return;
}



/* Address: 0x100b950b0 | FUN_100b950b0 */

void FUN_100b950b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045f70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b278;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b278,&DAT_100f38a80);
  DAT_101045f70 = pTVar1;
  return;
}



/* Address: 0x100b950f0 | thunk_FUN_100b950f4 */

void thunk_FUN_100b950f4(void)

{
  undefined *puVar1;
  
  if (DAT_101045f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9b1d8;
  _swift_getWitnessTable(&DAT_100c9b1d8,&DAT_100f38a80);
  DAT_101045f78 = puVar1;
  return;
}



/* Address: 0x100b950f4 | FUN_100b950f4 */

void FUN_100b950f4(void)

{
  undefined *puVar1;
  
  if (DAT_101045f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9b1d8;
  _swift_getWitnessTable(&DAT_100c9b1d8,&DAT_100f38a80);
  DAT_101045f78 = puVar1;
  return;
}



/* Address: 0x100b95134 | thunk_FUN_100b95138 */

void thunk_FUN_100b95138(void)

{
  undefined *puVar1;
  
  if (DAT_101045f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9b1b0;
  _swift_getWitnessTable(&DAT_100c9b1b0,&DAT_100f38a80);
  DAT_101045f80 = puVar1;
  return;
}



/* Address: 0x100b95138 | FUN_100b95138 */

void FUN_100b95138(void)

{
  undefined *puVar1;
  
  if (DAT_101045f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9b1b0;
  _swift_getWitnessTable(&DAT_100c9b1b0,&DAT_100f38a80);
  DAT_101045f80 = puVar1;
  return;
}



/* Address: 0x100b95178 | FUN_100b95178 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b95178(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  String SVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  _StringGuts _Var7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ID IVar13;
  char *unaff_x24;
  ulong uVar14;
  long lVar15;
  String SVar16;
  
  uVar10 = 0;
  if (param_1 != 0) {
    puVar8 = *(undefined **)(param_1 + _TtC6Sentry14SentryEnvelope::items);
    if ((ulong)puVar8 >> 0x3e == 0) {
      lVar12 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
      if ((long)puVar8 < 0) {
        _Var2.unknown = puVar8;
      }
      lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (lVar12 == 0) {
      uVar10 = 0;
    }
    else {
      FUN_100b960c4();
      _swift_bridgeObjectRetain(puVar8);
      lVar15 = 4;
      do {
        lVar9 = lVar15 + -4;
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          lVar6 = *(long *)(puVar8 + lVar15 * 8);
        }
        else {
          lVar6 = lVar9;
          FUN_100b6d3d4(lVar9,puVar8);
        }
        lVar1 = lVar15 + -3;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100b95448);
          (*pcVar4)();
        }
        _objc_msgSend(*(ID *)(lVar6 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var7.unknown = SVar16.bridgeObject;
        FUN_100b6fce4();
        SVar3.bridgeObject = &DAT_e700000000000000;
        SVar3.str = unaff_x24;
        if (SVar16 == SVar3) {
          _swift_bridgeObjectRelease(_Var7.unknown);
LAB_100b952bc:
          uVar14 = ((ulong *)(lVar6 + _TtC6Sentry18SentryEnvelopeItem::data))[1];
          if (0xe < uVar14 >> 0x3c) {
            FUN_100b84dac(0);
            FUN_100b84df8(3,0xd000000000000046,0x8000000100dcc980,0xd000000000000060,
                          0x8000000100dcc9d0,0x1d);
            goto LAB_100b95414;
          }
          uVar11 = *(ulong *)(lVar6 + _TtC6Sentry18SentryEnvelopeItem::data);
          FUN_100b6f5fc(0);
          FUN_100b6d4e0(uVar11,uVar14);
          FUN_100b69f78(uVar11,uVar14);
          if (uVar11 == 0) {
            FUN_100b960d8();
            goto LAB_100b95414;
          }
          IVar13 = *(ID *)(uVar11 + _TtC6Sentry13SentrySession::lock);
          _objc_msgSend(IVar13,"lock");
          unaff_x24 = *(char **)(uVar11 + _TtC6Sentry13SentrySession::_flagInit);
          _objc_msgSend(IVar13,"unlock");
          FUN_100b6fce4();
          if ((unaff_x24 == (char *)0x0) ||
             (IVar13 = _objc_msgSend((ID)unaff_x24,"boolValue"), (IVar13 & 1) == 0)) {
            FUN_100b960d8();
            FUN_100b6fa70();
            FUN_100b960c4();
            goto LAB_100b95414;
          }
          FUN_100b95488(uVar11,param_2,param_3,param_4);
          FUN_100b960d8();
          FUN_100b6fa70();
          FUN_100b6fce4();
          FUN_100b960c4();
          if ((uVar11 & 1) != 0) {
            uVar10 = 1;
            goto LAB_100b95428;
          }
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar16.str,_Var7,
                             (_StringComparisonResult)(__int8)unaff_x24);
          _swift_bridgeObjectRelease(_Var7.unknown);
          if (bVar5) goto LAB_100b952bc;
LAB_100b95414:
          FUN_100b6fa70();
        }
        lVar15 = lVar15 + 1;
      } while (lVar1 != lVar12);
      uVar10 = 0;
LAB_100b95428:
      _swift_bridgeObjectRelease(puVar8);
    }
  }
  return uVar10;
}



/* Address: 0x100b95488 | FUN_100b95488 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b95488(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  ID IVar6;
  NSString *pNVar7;
  NSString *pNVar8;
  Data DVar9;
  Data DVar10;
  undefined1 *puVar11;
  void *pvVar12;
  char *pcVar13;
  long lVar14;
  undefined8 *puVar15;
  String SVar16;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  long local_b8;
  ID local_b0;
  undefined1 *local_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  
  local_90 = param_1;
  puStack_98 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_a0 = *(long *)(puStack_98 + -8);
  local_a8 = auStack_d0 + -(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar6 = _objc_msgSend((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  lVar14 = *(long *)(param_4 + 0x10);
  if (lVar14 != 0) {
    local_c0 = _TtC6Sentry13SentrySession::_sessionId;
    local_b8 = _TtC6Sentry13SentrySession::lock;
    _swift_bridgeObjectRetain(param_4);
    puVar15 = (undefined8 *)(param_4 + 0x28);
    local_c8 = param_4;
    local_b0 = IVar6;
    do {
      uVar1 = *puVar15;
      _swift_bridgeObjectRetain(uVar1);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar1);
      pNVar7 = (NSString *)_objc_msgSend((ID)pNVar7,"stringByAppendingPathComponent:",pNVar8);
      if (pNVar7 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar12 = SVar16.bridgeObject;
      pcVar13 = "contentsAtPath:";
      DVar9.unknown = (undefined *)_objc_msgSend(IVar6,"contentsAtPath:",pNVar7);
      if (DVar9.unknown == (undefined *)0x0) {
LAB_100b956f4:
        _swift_bridgeObjectRelease(pvVar12);
      }
      else {
        DVar10 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
        FUN_100b6f5fc(0);
        DVar9 = DVar10;
        FUN_100b6b16c(DVar10.unknown,pcVar13);
        lVar5 = local_90;
        if (DVar9.unknown == (undefined *)0x0) {
          FUN_10003bf2c(DVar10.unknown,pcVar13);
          goto LAB_100b956f4;
        }
        IVar6 = *(ID *)(local_90 + local_b8);
        _objc_msgSend(IVar6,"lock");
        puVar4 = puStack_98;
        lVar3 = local_a0;
        puVar2 = local_a8;
        (**(code **)(local_a0 + 0x10))(local_a8,lVar5 + local_c0,puStack_98);
        _objc_msgSend(IVar6,"unlock");
        puVar11 = puVar2;
        FUN_100b95808(puVar2,DVar9.unknown,SVar16.str,pvVar12);
        FUN_10003bf2c(DVar10.unknown,pcVar13);
        _swift_bridgeObjectRelease(pvVar12);
        IVar6 = local_b0;
        (**(code **)(lVar3 + 8))(puVar2,puVar4);
        if (((ulong)puVar11 & 1) != 0) {
          _swift_bridgeObjectRelease(local_c8);
          return 1;
        }
      }
      puVar15 = puVar15 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(local_c8);
  }
  return 0;
}



/* Address: 0x100b95760 | _TtC6Sentry24SentryMigrateSessionInit::migrateSessionInit:envelopesDirPath:envelopeFilePaths: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool _TtC6Sentry24SentryMigrateSessionInit::migrateSessionInit_envelopesDirPath_envelopeFilePaths_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  _swift_getObjCClassMetadata(param_1);
  FUN_100b95178(param_3,SVar1.str,SVar1.bridgeObject,param_5);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  _swift_bridgeObjectRelease(param_5);
  return (uint)param_3 & 1;
}



/* Address: 0x100b95808 | FUN_100b95808 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b95808(UUID param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  UUID UVar5;
  _StringGuts _Var6;
  UUID UVar7;
  long lVar8;
  UUID UVar9;
  long lVar10;
  ID self;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar8 = *(long *)(UVar5.unknown + -8);
  UVar9.unknown = auStack_d0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = *(undefined **)(param_2 + _TtC6Sentry14SentryEnvelope::items);
  if ((ulong)puVar13 >> 0x3e == 0) {
    lVar14 = *(long *)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
    if ((long)puVar13 < 0) {
      _Var2.unknown = puVar13;
    }
    lVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar14 != 0) {
    local_c8 = param_2;
    uStack_c0 = param_3;
    local_b8 = param_4;
    _swift_bridgeObjectRetain(puVar13);
    lVar15 = 4;
    do {
      lVar10 = lVar15 + -4;
      if (((ulong)puVar13 & 0xc000000000000001) == 0) {
        lVar12 = *(long *)(puVar13 + lVar15 * 8);
      }
      else {
        lVar12 = lVar10;
        FUN_100b6d3d4(lVar10,puVar13);
      }
      lVar1 = lVar15 + -3;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100b95b54);
        (*pcVar3)();
      }
      _objc_msgSend(*(ID *)(lVar12 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
      SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var6.unknown = SVar16.bridgeObject;
      if (SVar16.str == (undefined *)0x6e6f6973736573 && _Var6.unknown == &DAT_e700000000000000) {
        _swift_bridgeObjectRelease(_Var6.unknown);
LAB_100b95980:
        uVar11 = ((long *)(lVar12 + _TtC6Sentry18SentryEnvelopeItem::data))[1];
        if (uVar11 >> 0x3c < 0xf) {
          lVar12 = *(long *)(lVar12 + _TtC6Sentry18SentryEnvelopeItem::data);
          FUN_100b6f5fc(0);
          FUN_100b6d4e0(lVar12,uVar11);
          lVar10 = lVar12;
          FUN_100b69f78(lVar12,uVar11);
          if (lVar10 == 0) {
            FUN_10003bf18(lVar12,uVar11);
          }
          else {
            self = *(ID *)(lVar10 + _TtC6Sentry13SentrySession::lock);
            _objc_msgSend(self,"lock");
            UVar7 = UVar5;
            (**(code **)(lVar8 + 0x10))
                      (UVar9.unknown,lVar10 + _TtC6Sentry13SentrySession::_sessionId);
            _objc_msgSend(self,"unlock");
            bVar4 = Foundation::UUID::___infix(UVar9,param_1,UVar7);
            (**(code **)(lVar8 + 8))(UVar9.unknown,UVar5.unknown);
            if (bVar4) {
              _swift_bridgeObjectRelease(puVar13);
              FUN_100bdd718();
              FUN_100b95b70(local_c8,lVar10,uStack_c0,local_b8);
              FUN_10003bf18(lVar12,uVar11);
              return 1;
            }
            FUN_10003bf18(lVar12,uVar11);
          }
        }
        else {
          FUN_100b84dac(0);
          FUN_100b84df8(3,0xd000000000000046,0x8000000100dcc980,0xd000000000000060,
                        0x8000000100dcc9d0,0x42);
        }
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar16.str,_Var6,(_StringComparisonResult)0x73);
        _swift_bridgeObjectRelease(_Var6.unknown);
        if (bVar4) goto LAB_100b95980;
      }
      lVar15 = lVar15 + 1;
    } while (lVar1 != lVar14);
    _swift_bridgeObjectRelease(puVar13);
  }
  return 0;
}



/* Address: 0x100b95b70 | FUN_100b95b70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b95b70(long param_1,ulong param_2)

{
  undefined8 uVar1;
  NSData *self;
  NSString *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  Data DVar8;
  String SVar9;
  String SVar10;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b95df4(param_2,param_1);
  DVar8.unknown = *(undefined **)(param_1 + _TtC6Sentry14SentryEnvelope::header);
  FUN_100ba7bd8(0);
  _objc_allocWithZone();
  FUN_100ba7a24();
  FUN_100b6f5fc(0);
  FUN_100b6a5f8();
  if (param_2 >> 0x3c < 0xf) {
    self = Foundation::Data::_bridgeToObjectiveC(DVar8);
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_70 = 0;
    pcVar6 = "writeToFile:options:error:";
    puVar7 = &DAT_00000001;
    IVar3 = _objc_msgSend((ID)self,"writeToFile:options:error:",pNVar2,1,&local_70);
    if ((int)IVar3 == 0) {
      uVar4 = local_70;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_100b84dac(0);
      local_70 = 0;
      uStack_68 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x4f,(_StringGuts)pcVar6);
      SVar9.bridgeObject = (void *)0x8000000100dcca90;
      SVar9.str = (char *)0xd00000000000004d;
      SVar10.bridgeObject = puVar7;
      SVar10.str = (char *)pNVar2;
      Swift::String::append(SVar9,SVar10);
      puVar5 = &DAT_101044978;
      local_78 = uVar4;
      FUN_100b6730c(&DAT_101044978);
      Swift::__print_unlocked
                (&local_78,&local_70,puVar5,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      uVar1 = uStack_68;
      FUN_100b84df8(4,local_70,uStack_68,0xd000000000000060,0x8000000100dcc9d0,0x57);
      FUN_10003bf18(DVar8.unknown,param_2);
      _swift_bridgeObjectRelease(uVar1);
      _swift_errorRelease(uVar4);
    }
    else {
      FUN_10003bf18(DVar8.unknown,param_2);
      uVar4 = 0;
    }
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
      return uVar4;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100b95df4 | FUN_100b95df4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100b95df4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  ulong uVar10;
  ulong uVar11;
  String SVar12;
  
  uVar10 = *(ulong *)(param_2 + _TtC6Sentry14SentryEnvelope::items);
  uVar4 = uVar10;
  thunk_FUN_100b6cd50();
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    if ((long)uVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b96084);
      (*pcVar2)();
    }
    _swift_bridgeObjectRetain(uVar10);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar11 = 0;
    do {
      if ((uVar10 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar10 + uVar11 * 8 + 0x20);
      }
      else {
        uVar5 = uVar11;
        FUN_100b6d3d4(uVar11,uVar10);
      }
      _objc_msgSend(*(ID *)(uVar5 + _TtC6Sentry18SentryEnvelopeItem::header),"type");
      SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var9.unknown = SVar12.bridgeObject;
      if (SVar12.str == (undefined *)0x6e6f6973736573 && _Var9.unknown == &DAT_e700000000000000) {
        _swift_bridgeObjectRelease(_Var9.unknown);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar12.str,_Var9,(_StringComparisonResult)0x73);
        _swift_bridgeObjectRelease(_Var9.unknown);
        if (!bVar3) {
          puVar7 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar7 & 1) == 0) {
            FUN_100b69630(0,*(long *)(puVar8 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(puVar8 + 0x10);
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            FUN_100b69630(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
          }
          *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
          *(ulong *)(puVar8 + uVar1 * 8 + 0x20) = uVar5;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
    _swift_bridgeObjectRelease(uVar10);
  }
  FUN_100bdb954(0);
  _objc_allocWithZone();
  FUN_100bda3cc();
  puVar7 = puVar8;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
     (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
    puVar6 = puVar8;
    thunk_FUN_100b6cd50(puVar8);
    puVar7 = (undefined *)0x0;
    FUN_100b6e7b0(0,puVar6 + 1,1,puVar8);
  }
  uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
  uVar4 = *(ulong *)(uVar10 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar4) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_100b6e7b0(puVar8,uVar4 + 1,1,puVar7);
    uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar4 + 1;
  *(undefined8 *)(uVar10 + uVar4 * 8 + 0x20) = param_1;
  return puVar8;
}



/* Address: 0x100b96084 | _TtC6Sentry24SentryMigrateSessionInit::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry24SentryMigrateSessionInit::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b960a4 | FUN_100b960a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b960a4(void)

{
  return ZEXT816(0x100fa1508);
}



/* Address: 0x100b960c4 | FUN_100b960c4 */

void FUN_100b960c4(void)

{
  return;
}



/* Address: 0x100b960d8 | FUN_100b960d8 */

void FUN_100b960d8(void)

{
  FUN_10003bf18();
  return;
}



/* Address: 0x100b960e4 | FUN_100b960e4 */

void FUN_100b960e4(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100b96124(param_1,param_2);
  return;
}



/* Address: 0x100b96124 | FUN_100b96124 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b96124(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ID IVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper) = param_2;
  puVar1 = &DAT_100f38b60;
  FUN_100b97e08();
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  _objc_allocWithZone(&objc::class_t::SentryFileIOTrackerHelper);
  _swift_unknownObjectRetain(param_2);
  pcVar2 = FUN_100b96260;
  FUN_100b97afc(FUN_100b96260,puVar1);
  *(code **)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper) = pcVar2;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  FUN_100b6f934();
  _swift_unknownObjectRelease(param_2);
  return IVar3;
}



/* Address: 0x100b96210 | FUN_100b96210 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b96210(long param_1)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(ID *)(param_1 + _TtC6Sentry21SentryThreadInspector::internalHelper),
                        "stacktraceForCurrentThreadAsyncUnsafe");
  return IVar1;
}



/* Address: 0x100b9623c | FUN_100b9623c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9623c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100b96260 | FUN_100b96260 */

void FUN_100b96260(void)

{
  long unaff_x20;
  
  FUN_100b96210(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b96268 | _TtC6Sentry19SentryFileIOTracker::initWithThreadInspector:processInfoWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry19SentryFileIOTracker::initWithThreadInspector_processInfoWrapper_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  _swift_unknownObjectRetain(param_4);
  FUN_100b96124(param_3,param_4);
  return param_3;
}



/* Address: 0x100b962b0 | FUN_100b962b0 */

void FUN_100b962b0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper),"enable");
  return;
}



/* Address: 0x100b962c8 | _TtC6Sentry19SentryFileIOTracker::enable */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry19SentryFileIOTracker::enable(ID param_1,SEL param_2)

{
  FUN_100b962b0(param_1);
  return;
}



/* Address: 0x100b962f0 | FUN_100b962f0 */

void FUN_100b962f0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper),"disable");
  return;
}



/* Address: 0x100b96308 | _TtC6Sentry19SentryFileIOTracker::disable */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry19SentryFileIOTracker::disable(ID param_1,SEL param_2)

{
  FUN_100b962f0(param_1);
  return;
}



/* Address: 0x100b96330 | FUN_100b96330 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b96330(Data param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6)

{
  NSData *pNVar1;
  ID IVar2;
  ID IVar3;
  long unaff_x20;
  ID self;
  undefined *puVar4;
  undefined8 uVar5;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper);
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  FUN_100b97e70(param_3);
  FUN_100b97e68(param_6);
  IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper),
                        "processDirectoryPath");
  uVar5 = 0x42000000;
  IVar3 = IVar2;
  puVar4 = PTR___NSConcreteStackBlock_100ea82a0;
  FUN_100b97e5c(FUN_100b96448);
  FUN_100b97e80();
  FUN_100b97e54();
  IVar3 = _objc_msgSend(self,
                        "measureNSData:writeToFile:atomically:origin:processDirectoryPath:method:",
                        pNVar1,param_3,(ulong)(param_5 & 1),param_6,IVar2,IVar3,puVar4,uVar5);
  FUN_100b97e44();
  FUN_100b6faa8();
  FUN_100b6f934();
  FUN_100b6fce4();
  FUN_100b7ca38();
  FUN_100b97e14(IVar3);
  return;
}



/* Address: 0x100b96448 | FUN_100b96448 */

uint FUN_100b96448(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  String SVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar3 = SVar4.str;
  _swift_retain(uVar2);
  (*pcVar1)(pcVar3,SVar4.bridgeObject,param_3);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  return (uint)pcVar3 & 1;
}



/* Address: 0x100b964b8 | _TtC6Sentry19SentryFileIOTracker::measureNSData:writeToFile:atomically:origin:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x34 bytes */

bool _TtC6Sentry19SentryFileIOTracker::measureNSData_writeToFile_atomically_origin_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  void *pvVar1;
  Data DVar2;
  undefined *puVar3;
  Data DVar4;
  String SVar5;
  String SVar6;
  
  pvVar1 = __Block_copy((void *)param_7);
  DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_100f38de0;
  _swift_allocObject(&DAT_100f38de0,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar1;
  DVar4 = DVar2;
  FUN_100b96330(DVar2.unknown,param_2,SVar5.str,SVar5.bridgeObject,param_5,SVar6.str,
                SVar6.bridgeObject,FUN_100b97da0,puVar3);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  _swift_release(puVar3);
  FUN_10003bf2c(DVar2.unknown,param_2);
  return (uint)DVar4.unknown & 1;
}



/* Address: 0x100b9660c | FUN_100b9660c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b9660c(undefined8 param_1,undefined8 param_2,uint param_3,long param_4)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  (**(code **)(param_4 + 0x10))(param_4,pNVar1,param_3 & 1);
  return param_4;
}



/* Address: 0x100b96660 | FUN_100b96660 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b96660(Data param_1)

{
  undefined8 uVar1;
  NSData *pNVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  ID IVar5;
  void *aBlock;
  undefined8 in_x4;
  undefined8 in_x7;
  long unaff_x20;
  ID self;
  undefined8 in_stack_00000000;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = *(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper);
  pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_1);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper),
                        "processDirectoryPath");
  local_70 = in_stack_00000000;
  local_98 = PTR___NSConcreteStackBlock_100ea82a0;
  local_90 = 0x42000000;
  local_88 = FUN_100b96848;
  puStack_80 = &DAT_100f38ba0;
  local_78 = in_x7;
  aBlock = __Block_copy(&local_98);
  uVar1 = local_70;
  _swift_retain(in_stack_00000000);
  _swift_release(uVar1);
  local_98 = (undefined *)0x0;
  IVar5 = _objc_msgSend(self,
                        "measureNSData:writeToFile:options:origin:processDirectoryPath:error:method:"
                        ,pNVar2,pNVar3,in_x4,pNVar4,IVar5,&local_98,aBlock);
  __Block_release(aBlock);
  if ((int)IVar5 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) goto LAB_100b96844;
  }
  else if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
LAB_100b96844:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100b96848 | FUN_100b96848 */

uint FUN_100b96848(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  String SVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar3 = SVar4.str;
  _swift_retain(uVar2);
  (*pcVar1)(pcVar3,SVar4.bridgeObject,param_3,param_4);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  return (uint)pcVar3 & 1;
}



/* Address: 0x100b968c4 | _TtC6Sentry19SentryFileIOTracker::measureNSData:writeToFile:options:origin:error:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b96a00) */
/* WARNING: Removing unreachable block (ram,0x000100b96a2c) */
/* WARNING: Removing unreachable block (ram,0x000100b96a08) */
/* Function Stack Size: 0x40 bytes */

bool _TtC6Sentry19SentryFileIOTracker::measureNSData_writeToFile_options_origin_error_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               ID *param_7,ID param_8,undefined4 param_9)

{
  void *pvVar1;
  Data DVar2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  
  pvVar1 = __Block_copy((void *)param_8);
  DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_3);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_100f38db8;
  _swift_allocObject(&DAT_100f38db8,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar1;
  FUN_100b96660(DVar2.unknown,param_2,SVar4.str,SVar4.bridgeObject,param_5,SVar5.str,
                SVar5.bridgeObject,FUN_100b97d98,puVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_release(puVar3);
  FUN_10003bf2c(DVar2.unknown,param_2);
  return 1;
}



/* Address: 0x100b96a5c | FUN_100b96a5c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b96a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  (**(code **)(param_5 + 0x10))(param_5,pNVar1,param_3,param_4);
  return param_5;
}



/* Address: 0x100b96ab8 | FUN_100b96ab8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 *
FUN_100b96ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar1 = &DAT_100f38bd8;
  FUN_100b97e08();
  puVar4 = (undefined8 *)(puVar1 + 0x10);
  *puVar4 = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper);
  FUN_100b97e70(param_1);
  FUN_100b97df8();
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper),
                "processDirectoryPath");
  puVar2 = &DAT_100f38c00;
  _swift_allocObject(&DAT_100f38c00,0x38,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  local_70 = FUN_100b97ba4;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_100b97448;
  puStack_78 = &DAT_100f38c18;
  local_68 = puVar2;
  __Block_copy(&local_90);
  FUN_100b97e80();
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(param_2);
  FUN_100b97e54();
  FUN_100b97e30(uVar3,"measureNSDataFromFile:origin:processDirectoryPath:method:");
  FUN_100b97e44();
  FUN_100b6fa78();
  FUN_100b7ca38();
  FUN_100b97e4c();
  FUN_100b78ca0(puVar4,&local_90);
  FUN_100b97e88();
  FUN_100b97e78();
  return puVar4;
}



/* Address: 0x100b96c24 | FUN_100b96c24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b96c24(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ID IVar1;
  undefined *self;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (*param_2)(param_4,param_5);
  _swift_beginAccess(param_1 + 0x10,auStack_38,1,0);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
  if (*(ID *)(param_1 + 0x10) == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x10),"length");
  }
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self,"initWithInteger:",IVar1);
  return;
}



/* Address: 0x100b96cd0 | _TtC6Sentry19SentryFileIOTracker::measureNSDataFromFile:origin:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry19SentryFileIOTracker::measureNSDataFromFile_origin_method_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  void *pvVar1;
  char *pcVar2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  
  pvVar1 = __Block_copy((void *)param_5);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = SVar4.str;
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_100f38d90;
  _swift_allocObject(&DAT_100f38d90,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar1;
  FUN_100b96ab8(pcVar2,SVar4.bridgeObject,SVar5.str,SVar5.bridgeObject,FUN_100b97d90,puVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_release(puVar3);
  return (ID)pcVar2;
}



/* Address: 0x100b96dac | FUN_100b96dac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b96dac(undefined8 param_1,undefined8 param_2,long param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  (**(code **)(param_3 + 0x10))(param_3,pNVar1);
  return param_3;
}



/* Address: 0x100b96df8 | FUN_100b96df8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 *
FUN_100b96df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar1 = &DAT_100f38bd8;
  FUN_100b97e08();
  puVar4 = (undefined8 *)(puVar1 + 0x10);
  *puVar4 = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper);
  FUN_100b97e68(param_1);
  FUN_100b97df8();
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper),
                "processDirectoryPath");
  puVar2 = &DAT_100f38c50;
  _swift_allocObject(&DAT_100f38c50,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_7;
  *(undefined8 *)(puVar2 + 0x20) = param_8;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  local_70 = FUN_100b97bfc;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_100b97448;
  puStack_78 = &DAT_100f38c68;
  local_68 = puVar2;
  __Block_copy(&local_90);
  FUN_100b97e80();
  _swift_retain(param_8);
  _swift_bridgeObjectRetain(param_2);
  FUN_100b97e54();
  FUN_100b97e30(uVar3,"measureNSDataFromFile:origin:processDirectoryPath:method:");
  FUN_100b97e44();
  FUN_100b6fa78();
  FUN_100b7ca38();
  FUN_100b97e4c();
  FUN_100b78ca0(puVar4,&local_90);
  FUN_100b97e88();
  FUN_100b97e78();
  return puVar4;
}



/* Address: 0x100b96f70 | FUN_100b96f70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b96f70(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ID IVar1;
  undefined *self;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (*param_2)(param_4,param_5,param_6,param_7);
  _swift_beginAccess(param_1 + 0x10,auStack_38,1,0);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
  if (*(ID *)(param_1 + 0x10) == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x10),"length");
  }
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self,"initWithInteger:",IVar1);
  return;
}



/* Address: 0x100b97024 | _TtC6Sentry19SentryFileIOTracker::measureNSDataFromFile:options:origin:error:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID _TtC6Sentry19SentryFileIOTracker::measureNSDataFromFile_options_origin_error_method_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID *param_6,
             ID param_7,undefined4 param_8)

{
  void *pvVar1;
  char *pcVar2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  
  pvVar1 = __Block_copy((void *)param_7);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = SVar4.str;
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_100f38d68;
  _swift_allocObject(&DAT_100f38d68,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar1;
  FUN_100b96df8(pcVar2,SVar4.bridgeObject,param_4,SVar5.str,SVar5.bridgeObject,param_6,FUN_100b97d88
                ,puVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  _swift_release(puVar3);
  return (ID)pcVar2;
}



/* Address: 0x100b97118 | FUN_100b97118 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b97118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  (**(code **)(param_5 + 0x10))(param_5,pNVar1,param_3,param_4);
  return param_5;
}



/* Address: 0x100b9717c | FUN_100b9717c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_100b9717c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  URL UVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ID local_d0;
  NSString *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  NSURL *local_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar1 = param_1;
  local_c0 = param_6;
  uStack_b8 = param_7;
  local_a8 = param_2;
  local_98 = param_5;
  FUN_100b7c984();
  lVar8 = *(long *)(lVar1 + -8);
  lVar10 = *(long *)(lVar8 + 0x40);
  lVar9 = (long)&local_d0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  UVar2.unknown = &DAT_100f38bd8;
  FUN_100b97e08();
  puVar7 = (undefined8 *)(UVar2.unknown + 0x10);
  *puVar7 = 0;
  local_a0 = *(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper);
  local_b0 = Foundation::URL::_bridgeToObjectiveC(UVar2);
  local_c8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_d0 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper)
                           ,"processDirectoryPath");
  (**(code **)(lVar8 + 0x10))(lVar9,param_1,lVar1);
  uVar5 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar12 = uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar12 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100f38ca0;
  _swift_allocObject(&DAT_100f38ca0,uVar11 + 0x10,uVar5 | 7);
  uVar6 = uStack_b8;
  *(undefined **)(puVar3 + 0x10) = UVar2.unknown;
  *(undefined8 *)(puVar3 + 0x18) = local_c0;
  *(undefined8 *)(puVar3 + 0x20) = uStack_b8;
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar12,lVar9,lVar1);
  *(undefined8 *)(puVar3 + uVar11) = local_a8;
  *(undefined8 *)(puVar3 + uVar11 + 8) = local_98;
  local_70 = FUN_100b97c94;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100b97448;
  puStack_78 = &DAT_100f38cb8;
  local_68 = puVar3;
  pvVar4 = __Block_copy(&local_90);
  puVar3 = local_68;
  _swift_retain(UVar2.unknown);
  _swift_retain(uVar6);
  _swift_release(puVar3);
  _objc_msgSend(local_a0,"measureNSDataFromURL:origin:processDirectoryPath:method:",local_b0,
                local_c8,local_d0,pvVar4);
  FUN_100b97e44();
  FUN_100b6fce4();
  FUN_100b6fa78();
  FUN_100b7ca38();
  FUN_100b78ca0(puVar7,&local_90);
  uVar6 = *puVar7;
  _swift_release(UVar2.unknown);
  return uVar6;
}



/* Address: 0x100b97398 | FUN_100b97398 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b97398(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ID IVar1;
  undefined *self;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  (*param_2)(param_4,param_5,param_6);
  _swift_beginAccess(param_1 + 0x10,auStack_38,1,0);
  *(undefined8 *)(param_1 + 0x10) = param_4;
  _swift_beginAccess(param_1 + 0x10,auStack_50,0,0);
  if (*(ID *)(param_1 + 0x10) == 0) {
    IVar1 = 0;
  }
  else {
    IVar1 = _objc_msgSend(*(ID *)(param_1 + 0x10),"length");
  }
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self,"initWithInteger:",IVar1);
  return;
}



/* Address: 0x100b97448 | FUN_100b97448 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b97448(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  return uVar3;
}



/* Address: 0x100b97480 | _TtC6Sentry19SentryFileIOTracker::measureNSDataFromURL:options:origin:error:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x38 bytes */

ID _TtC6Sentry19SentryFileIOTracker::measureNSDataFromURL_options_origin_error_method_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID *param_6,
             ID param_7,undefined4 param_8)

{
  URL UVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  String SVar7;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar2 = __Block_copy((void *)param_7);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC((URL)param_3);
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar3 = &DAT_100f38d40;
  _swift_allocObject(&DAT_100f38d40,0x18,7);
  *(void **)(puVar3 + 0x10) = pvVar2;
  puVar4 = puVar5;
  FUN_100b9717c(puVar5,param_4,SVar7.str,SVar7.bridgeObject,param_6,FUN_100b97d80,puVar3);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  _swift_release(puVar3);
  (**(code **)(lVar6 + 8))(puVar5,UVar1.unknown);
  return (ID)puVar4;
}



/* Address: 0x100b975a4 | FUN_100b975a4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b975a4(URL param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  NSURL *pNVar1;
  
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(param_1);
  (**(code **)(param_4 + 0x10))(param_4,pNVar1,param_2,param_3);
  return param_4;
}



/* Address: 0x100b9760c | FUN_100b9760c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b9760c(undefined8 param_1,undefined8 param_2,Data param_3,undefined8 param_4,
                  undefined8 param_5)

{
  NSString *pNVar1;
  NSData *pNVar2;
  NSDictionary *pNVar3;
  ID IVar4;
  ID IVar5;
  long unaff_x20;
  ID self;
  undefined8 in_stack_00000000;
  undefined *puVar6;
  undefined8 uVar7;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::helper);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_3);
  FUN_100b65000(0);
  FUN_100b97ce4();
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  FUN_100b97df8();
  IVar4 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry19SentryFileIOTracker::processInfoWrapper),
                        "processDirectoryPath");
  uVar7 = 0x42000000;
  IVar5 = IVar4;
  puVar6 = PTR___NSConcreteStackBlock_100ea82a0;
  FUN_100b97e5c(FUN_100b9775c);
  _swift_retain(in_stack_00000000);
  FUN_100b97e78();
  IVar5 = _objc_msgSend(self,
                        "measureNSFileManagerCreateFileAtPath:data:attributes:origin:processDirectoryPath:method:"
                        ,pNVar1,pNVar2,param_5,pNVar3,IVar4,IVar5,puVar6,uVar7);
  FUN_100b97e44();
  FUN_100b6faa8();
  FUN_100b6fa78(0);
  FUN_100b7ca38();
  FUN_100b97e4c();
  FUN_100b97e14(IVar5);
  return;
}



/* Address: 0x100b9775c | FUN_100b9775c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100b9775c(long param_1,undefined8 param_2,Data param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  Data DVar4;
  Dictionary<undefined,undefined> DVar5;
  void *pvVar6;
  void *pvVar7;
  String SVar8;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar6 = SVar8.bridgeObject;
  pcVar3 = SVar8.str;
  pvVar7 = pvVar6;
  _swift_retain(uVar2);
  DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(param_3);
  FUN_100b65000(0);
  FUN_100b97ce4();
  DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  (*pcVar1)(pcVar3,pvVar6,DVar4.unknown,pvVar7,DVar5.unknown);
  _swift_bridgeObjectRelease(DVar5.unknown);
  FUN_10003bf2c(DVar4.unknown,pvVar7);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(pvVar6);
  return (uint)pcVar3 & 1;
}



/* Address: 0x100b97848 | _TtC6Sentry19SentryFileIOTracker::measureNSFileManagerCreateFileAtPath:data:attributes:origin:method: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

bool _TtC6Sentry19SentryFileIOTracker::
     measureNSFileManagerCreateFileAtPath_data_attributes_origin_method_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  void *pvVar1;
  char *pcVar2;
  Data DVar3;
  Dictionary<undefined,undefined> DVar4;
  undefined *puVar5;
  void *pvVar6;
  void *pvVar7;
  String SVar8;
  
  pvVar1 = __Block_copy((void *)param_7);
  SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar6 = SVar8.bridgeObject;
  pcVar2 = SVar8.str;
  pvVar7 = pvVar6;
  DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC((Data)param_4);
  FUN_100b65000(0);
  FUN_100b97ce4();
  DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar5 = &DAT_100f38d18;
  _swift_allocObject(&DAT_100f38d18,0x18,7);
  *(void **)(puVar5 + 0x10) = pvVar1;
  FUN_100b9760c(pcVar2,pvVar6,DVar3.unknown,pvVar7,DVar4.unknown,SVar8.str,SVar8.bridgeObject,
                FUN_100b97d78,puVar5);
  _swift_bridgeObjectRelease(DVar4.unknown);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  _swift_release(puVar5);
  FUN_10003bf2c(DVar3.unknown,pvVar7);
  _swift_bridgeObjectRelease(pvVar6);
  return (uint)pcVar2 & 1;
}



/* Address: 0x100b979d4 | FUN_100b979d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b979d4(undefined8 param_1,undefined8 param_2,Data param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  NSString *pNVar1;
  NSData *pNVar2;
  NSDictionary *pNVar3;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_3);
  FUN_100b65000(0);
  FUN_100b97ce4();
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  (**(code **)(param_6 + 0x10))(param_6,pNVar1,pNVar2,pNVar3);
  return param_6;
}



/* Address: 0x100b97a8c | FUN_100b97a8c */

void FUN_100b97a8c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryFileIOTracker",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b97ab8);
  (*pcVar1)();
}



/* Address: 0x100b97ab8 | _TtC6Sentry19SentryFileIOTracker::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19SentryFileIOTracker::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b97a8c();
  IVar1 = *(ID *)(param_1 + processInfoWrapper);
  _swift_unknownObjectRelease();
  return IVar1;
}



/* Address: 0x100b97ac4 | _TtC6Sentry19SentryFileIOTracker::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry19SentryFileIOTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + processInfoWrapper));
  return;
}



/* Address: 0x100b97afc | FUN_100b97afc */

ID FUN_100b97afc(undefined8 param_1,undefined8 param_2)

{
  void *aBlock;
  ID IVar1;
  ID unaff_x20;
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_50 = PTR___NSConcreteStackBlock_100ea82a0;
  local_48 = 0x42000000;
  local_40 = thunk_FUN_100b97448;
  puStack_38 = &DAT_100f38df8;
  local_30 = param_1;
  local_28 = param_2;
  aBlock = __Block_copy(&local_50);
  IVar1 = _objc_msgSend(unaff_x20,"initWithThreadInspector:",aBlock);
  __Block_release(aBlock);
  _swift_release(local_28);
  return IVar1;
}



/* Address: 0x100b97b84 | FUN_100b97b84 */

void FUN_100b97b84(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b97b94 | FUN_100b97b94 */

void FUN_100b97b94(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b97b9c | FUN_100b97b9c */

void FUN_100b97b9c(void)

{
  FUN_100b97bbc(0x38);
  return;
}



/* Address: 0x100b97ba4 | FUN_100b97ba4 */

void FUN_100b97ba4(void)

{
  long unaff_x20;
  
  FUN_100b96c24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100b97bb4 | FUN_100b97bb4 */

void FUN_100b97bb4(void)

{
  FUN_100b97bbc(0x48);
  return;
}



/* Address: 0x100b97bbc | FUN_100b97bbc */

void FUN_100b97bbc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b97bfc | FUN_100b97bfc */

void FUN_100b97bfc(void)

{
  long unaff_x20;
  
  FUN_100b96f70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100b97c10 | FUN_100b97c10 */

void FUN_100b97c10(long param_1)

{
  long unaff_x20;
  long lVar1;
  ulong uVar2;
  
  FUN_100b7c984();
  lVar1 = *(long *)(param_1 + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x28 & (uVar2 ^ 0xffffffffffffffff)),param_1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100b97c94 | FUN_100b97c94 */

void FUN_100b97c94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  FUN_100b7c984();
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  uVar2 = uVar1 + 0x28 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = *(long *)(*(long *)(param_1 + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8;
  FUN_100b97398(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + uVar2,
                *(undefined8 *)(unaff_x20 + uVar1),*(undefined8 *)(unaff_x20 + uVar1 + 8));
  return;
}


