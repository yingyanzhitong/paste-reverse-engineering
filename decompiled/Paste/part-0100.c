/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100123750 | PostHogConfig::setBeforeSend: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void PostHogConfig::setBeforeSend_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10016c18c(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_1001234d8(param_3);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1001237a8 | PostHogConfig::init */

/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogConfig",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001237d4);
  (*pcVar1)();
}



/* Address: 0x1001237d4 | FUN_1001237d4 */

void FUN_1001237d4(void)

{
  FUN_100123b5c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100123808 | PostHogConfig::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void PostHogConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  URL UVar2;
  
  lVar1 = host;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + lVar1,UVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + projectToken + 8));
  FUN_100004550(*(undefined8 *)(param_1 + pushIdentityProvider),
                ((undefined8 *)(param_1 + pushIdentityProvider))[1]);
  _swift_release(*(undefined8 *)(param_1 + getAnonymousId + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _propertiesSanitizer));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + evaluationContexts));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + appGroupIdentifier + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + snapshotEndpoint + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + requestHeaders));
  _swift_release(*(undefined8 *)(param_1 + storageManager));
  _swift_release(*(undefined8 *)(param_1 + beforeSend));
  return;
}



/* Address: 0x100123948 | thunk_FUN_10012394c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long thunk_FUN_10012394c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_60;
  long lStack_58;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_2 + 0x28);
    do {
      if (param_1 != 0) {
        pcVar1 = (code *)puVar4[-1];
        uVar2 = *puVar4;
        lStack_60 = param_1;
        _swift_retain(uVar2);
        (*pcVar1)(&lStack_58,&lStack_60);
        _swift_release(uVar2);
        param_1 = lStack_58;
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Address: 0x10012394c | FUN_10012394c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10012394c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_60;
  long local_58;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_2 + 0x28);
    do {
      if (param_1 != 0) {
        pcVar1 = (code *)puVar4[-1];
        uVar2 = *puVar4;
        local_60 = param_1;
        _swift_retain(uVar2);
        (*pcVar1)(&local_58,&local_60);
        _swift_release(uVar2);
        param_1 = local_58;
      }
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return param_1;
}



/* Address: 0x100123a10 | FUN_100123a10 */

undefined1  [16] FUN_100123a10(void)

{
  char *pcVar1;
  long unaff_x20;
  String SVar2;
  String separator;
  
  if (DAT_101057340 == '\x01') {
    pcVar1 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'g';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = '`';
    pcVar1[0x29] = '$';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar2.bridgeObject = (void *)0x20;
    SVar2.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar2,separator);
    _swift_release(pcVar1);
  }
  return *(undefined1 (*) [16])(unaff_x20 + PostHogConfig::projectToken);
}



/* Address: 0x100123abc | FUN_100123abc */

void FUN_100123abc(ulong param_1)

{
  char *pcVar1;
  String SVar2;
  String separator;
  
  if (((param_1 & 1) == 0) && (DAT_101057340 == '\x01')) {
    pcVar1 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar1[0x18] = '\x02';
    pcVar1[0x19] = '\0';
    pcVar1[0x1a] = '\0';
    pcVar1[0x1b] = '\0';
    pcVar1[0x1c] = '\0';
    pcVar1[0x1d] = '\0';
    pcVar1[0x1e] = '\0';
    pcVar1[0x1f] = '\0';
    pcVar1[0x10] = '\x01';
    pcVar1[0x11] = '\0';
    pcVar1[0x12] = '\0';
    pcVar1[0x13] = '\0';
    pcVar1[0x14] = '\0';
    pcVar1[0x15] = '\0';
    pcVar1[0x16] = '\0';
    pcVar1[0x17] = '\0';
    *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar1[0x20] = 'b';
    pcVar1[0x21] = '\0';
    pcVar1[0x22] = '\0';
    pcVar1[0x23] = '\0';
    pcVar1[0x24] = '\0';
    pcVar1[0x25] = '\0';
    pcVar1[0x26] = '\0';
    pcVar1[0x27] = -0x30;
    pcVar1[0x28] = -0x60;
    pcVar1[0x29] = '#';
    pcVar1[0x2a] = -0x27;
    pcVar1[0x2b] = '\0';
    pcVar1[0x2c] = '\x01';
    pcVar1[0x2d] = '\0';
    pcVar1[0x2e] = '\0';
    pcVar1[0x2f] = -0x80;
    SVar2.bridgeObject = (void *)0x20;
    SVar2.str = pcVar1;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar2,separator);
    _swift_release(pcVar1);
    return;
  }
  return;
}



/* Address: 0x100123b5c | FUN_100123b5c */

void FUN_100123b5c(undefined8 param_1)

{
  if (DAT_100faff28 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca3cb0);
  return;
}



/* Address: 0x100123b94 | FUN_100123b94 */

undefined8 FUN_100123b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100123be4 | FUN_100123be4 */

undefined8 FUN_100123be4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100123c2c | FUN_100123c2c */

void FUN_100123c2c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100123c50 | FUN_100123c50 */

void FUN_100123c50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  FUN_10012394c(uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100123c7c | FUN_100123c7c */

void FUN_100123c7c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100123ca0 | thunk_FUN_100123ca4 */

void thunk_FUN_100123ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fafef8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2e8a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2e8a8,&DAT_100eb8168);
  DAT_100fafef8 = pTVar1;
  return;
}



/* Address: 0x100123ca4 | FUN_100123ca4 */

void FUN_100123ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fafef8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2e8a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2e8a8,&DAT_100eb8168);
  DAT_100fafef8 = pTVar1;
  return;
}



/* Address: 0x100123ce4 | FUN_100123ce4 */

void FUN_100123ce4(void)

{
  FUN_100123b5c(0);
  return;
}



/* Address: 0x100123cec | FUN_100123cec */

void FUN_100123cec(long param_1,ulong param_2)

{
  URL UVar1;
  long local_160;
  undefined *puStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_160 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_158 = &DAT_100c2e968;
    local_150 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_118 = &DAT_100c2e980;
    local_110 = &DAT_100c2e980;
    puStack_108 = &DAT_100c2e980;
    local_100 = &DAT_100c2e980;
    puStack_f8 = &DAT_100c2e980;
    local_f0 = &DAT_100c2e980;
    puStack_e8 = &DAT_100c2e980;
    local_e0 = &DAT_100c2e998;
    puStack_d8 = &DAT_100c2e980;
    puStack_c8 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    local_d0 = &DAT_100c2e980;
    local_c0 = &DAT_100c2e9b0;
    puStack_b8 = &DAT_100c2e980;
    local_b0 = &DAT_100c2e9b0;
    local_a0 = &DAT_100c2e980;
    puStack_98 = &DAT_100c2e9b0;
    local_90 = &DAT_100c2e998;
    puStack_88 = &DAT_100c2e968;
    local_80 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    local_70 = &DAT_100c2e9b0;
    puStack_68 = &DAT_100c2e9b0;
    local_60 = &DAT_100c2e980;
    puStack_58 = &DAT_100c2e980;
    local_50 = &DAT_100c2e980;
    puStack_48 = &DAT_100c2e980;
    local_40 = &DAT_100c2e9b0;
    puStack_38 = &DAT_100c2e980;
    puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_148 = local_150;
    local_140 = local_150;
    puStack_138 = local_150;
    local_130 = local_150;
    puStack_128 = local_150;
    local_120 = local_150;
    puStack_a8 = local_150;
    puStack_78 = local_80;
    local_30 = local_80;
    _swift_updateClassMetadata2(param_1,0x100,0x28,&local_160,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100123df0 | FUN_100123df0 */

undefined1  [16] FUN_100123df0(void)

{
  return ZEXT816(0x100eb8168);
}



/* Address: 0x100123e00 | FUN_100123e00 */

void FUN_100123e00(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100123e24 | FUN_100123e24 */

void FUN_100123e24(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100120d30(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100123e2c | FUN_100123e2c */

void FUN_100123e2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100123e40 | FUN_100123e40 */

void FUN_100123e40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100123e48 | FUN_100123e48 */

void FUN_100123e48(void)

{
  FUN_1001205e4();
  return;
}



/* Address: 0x100123e50 | FUN_100123e50 */

void FUN_100123e50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1001204e4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100123e58 | thunk_FUN_100123c2c */

void thunk_FUN_100123c2c(void)

{
  FUN_100123c2c();
  return;
}



/* Address: 0x100123e5c | thunk_FUN_100123c2c */

void thunk_FUN_100123c2c(void)

{
  FUN_100123c2c();
  return;
}



/* Address: 0x100123e60 | thunk_FUN_100123c7c */

void thunk_FUN_100123c7c(void)

{
  FUN_100123c7c();
  return;
}



/* Address: 0x100123e64 | thunk_FUN_100123e00 */

void thunk_FUN_100123e00(void)

{
  FUN_100123e00();
  return;
}



/* Address: 0x100123e68 | thunk_FUN_100123e00 */

void thunk_FUN_100123e00(void)

{
  FUN_100123e00();
  return;
}



/* Address: 0x100123e6c | thunk_FUN_100123e2c */

void thunk_FUN_100123e2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100123e70 | thunk_FUN_100123e2c */

void thunk_FUN_100123e2c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100123e74 | thunk_FUN_100123e40 */

void thunk_FUN_100123e40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100123e78 | thunk_FUN_100123e40 */

void thunk_FUN_100123e40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100123e7c | thunk_FUN_100123c50 */

void thunk_FUN_100123c50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  FUN_10012394c(uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100123e80 | PostHogConfig::evaluationEnvironments */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::evaluationEnvironments(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = evaluationContexts;
  _swift_beginAccess(param_1 + evaluationContexts,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100123e84 | PostHogConfig::evaluationContexts */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogConfig::evaluationContexts(ID param_1,SEL param_2)

{
  NSArray *pNVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar2 = evaluationContexts;
  _swift_beginAccess(param_1 + evaluationContexts,auStack_38,0,0);
  lVar2 = *(long *)(param_1 + lVar2);
  if (lVar2 == 0) {
    pNVar1 = (NSArray *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100123e88 | thunk_FUN_100121448 */

void thunk_FUN_100121448(void)

{
  FUN_100104af0(&PostHogConfig::evaluationContexts);
  return;
}



/* Address: 0x100123e8c | FUN_100123e8c */

long FUN_100123e8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_100125c68();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar1;
}



/* Address: 0x100123ee4 | FUN_100123ee4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100123ee4(void)

{
  long unaff_x20;
  
  FUN_10012509c();
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100123f2c | FUN_100123f2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100123f2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_a0 [24];
  undefined *local_88;
  undefined8 uStack_80;
  undefined *local_70;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [24];
  
  puVar1 = *(undefined **)(unaff_x20 + 0x40);
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
    _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_48,0,0);
    uVar4 = ram0x000100fb15b0;
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
    local_88 = (undefined *)s_posthog_ios_100fb15a8._0_8_;
    uStack_80 = ram0x000100fb15b0;
    local_70 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_100011080(&local_88,auStack_68);
    _swift_bridgeObjectRetain(uVar4);
    puVar2 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    local_88 = puVar1;
    FUN_10016fe74(auStack_68,0x62696c24,&DAT_e400000000000000,puVar2);
    puVar1 = local_88;
    _swift_beginAccess(s_3_69_0_100fb1598,auStack_a0,0,0);
    uVar4 = DAT_100fb15a0;
    local_88 = _s_3_69_0_100fb1598;
    uStack_80 = DAT_100fb15a0;
    local_70 = puVar3;
    FUN_100011080(&local_88,auStack_68);
    _swift_bridgeObjectRetain(uVar4);
    puVar3 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    local_88 = puVar1;
    FUN_10016fe74(auStack_68,0x7265765f62696c24,0xec0000006e6f6973,puVar3);
    puVar3 = local_88;
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined **)(unaff_x20 + 0x40) = local_88;
    _swift_bridgeObjectRetain(local_88);
    _swift_bridgeObjectRelease(uVar4);
    puVar1 = (undefined *)0x0;
  }
  _swift_bridgeObjectRetain(puVar1);
  return puVar3;
}



/* Address: 0x100124084 | FUN_100124084 */

long FUN_100124084(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    FUN_1001240e0();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    lVar1 = 0;
  }
  _swift_bridgeObjectRetain(lVar1);
  return lVar2;
}



/* Address: 0x1001240e0 | FUN_1001240e0 */

undefined * FUN_1001240e0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined1 auStack_c8 [40];
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined *local_78 [4];
  undefined *local_58;
  
  FUN_100123e8c();
  lVar1 = param_1;
  FUN_100123f2c();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  local_58 = puVar2;
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1001241e8:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_100124304;
LAB_100124248:
    lVar6 = 0x6975625f70706124;
    _swift_bridgeObjectRetain(param_1);
    uVar4 = 0;
    FUN_100071370(0x6975625f70706124);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_100124304;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_1);
    FUN_100011080(&local_a0,local_78);
    FUN_10000cbfc(local_78,&local_a0);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    local_d8 = local_88;
    uStack_e0 = uStack_90;
    if (local_88 == 0) {
      FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_c8,0x6975625f70706124,0xea0000000000646c);
      FUN_1000fb4c4(auStack_c8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_f0,auStack_c8);
      puVar2 = local_58;
      puVar3 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_f0 = puVar2;
      FUN_10016fe74(auStack_c8,0x6975625f70706124,0xea0000000000646c,puVar3);
      local_58 = local_f0;
    }
    FUN_100004594(local_78);
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_100124368;
LAB_10012442c:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_100124540;
LAB_10012448c:
    lVar6 = 0x656d616e5f736f24;
    _swift_bridgeObjectRetain(param_1);
    uVar4 = 0;
    FUN_100071370(0x656d616e5f736f24);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_100124540;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_1);
    FUN_100011080(&local_a0,local_78);
    FUN_10000cbfc(local_78,&local_a0);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    local_d8 = local_88;
    uStack_e0 = uStack_90;
    if (local_88 == 0) {
      FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_c8,0x656d616e5f736f24,&DAT_e800000000000000);
      FUN_1000fb4c4(auStack_c8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_f0,auStack_c8);
      puVar2 = local_58;
      puVar3 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_f0 = puVar2;
      FUN_10016fe74(auStack_c8,0x656d616e5f736f24,&DAT_e800000000000000,puVar3);
      local_58 = local_f0;
    }
    FUN_100004594(local_78);
    lVar6 = *(long *)(param_1 + 0x10);
  }
  else {
    uVar4 = 0xec0000006e6f6973;
    lVar6 = 0x7265765f70706124;
    _swift_bridgeObjectRetain(param_1);
    FUN_100071370(0x7265765f70706124);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_1001241e8;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_1);
    FUN_100011080(&local_a0,local_78);
    FUN_10000cbfc(local_78,&local_a0);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    local_d8 = local_88;
    uStack_e0 = uStack_90;
    if (local_88 == 0) {
      FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_c8,0x7265765f70706124,0xec0000006e6f6973);
      FUN_1000fb4c4(auStack_c8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_f0,auStack_c8);
      puVar3 = puVar2;
      _swift_isUniquelyReferenced_nonNull_native(puVar2);
      local_f0 = puVar2;
      FUN_10016fe74(auStack_c8,0x7265765f70706124,0xec0000006e6f6973,puVar3);
      local_58 = local_f0;
    }
    FUN_100004594(local_78);
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_100124248;
LAB_100124304:
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_10012442c;
LAB_100124368:
    uVar4 = 0xee00656361707365;
    lVar6 = 0x6d616e5f70706124;
    _swift_bridgeObjectRetain(param_1);
    FUN_100071370(0x6d616e5f70706124);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10012442c;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_1);
    FUN_100011080(&local_a0,local_78);
    FUN_10000cbfc(local_78,&local_a0);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    local_d8 = local_88;
    uStack_e0 = uStack_90;
    if (local_88 == 0) {
      FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_c8,0x6d616e5f70706124,0xee00656361707365);
      FUN_1000fb4c4(auStack_c8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_f0,auStack_c8);
      puVar2 = local_58;
      puVar3 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_f0 = puVar2;
      FUN_10016fe74(auStack_c8,0x6d616e5f70706124,0xee00656361707365,puVar3);
      local_58 = local_f0;
    }
    FUN_100004594(local_78);
    if (*(long *)(param_1 + 0x10) != 0) goto LAB_10012448c;
LAB_100124540:
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 != 0) {
    puVar5 = &DAT_eb000000006e6f69;
    lVar6 = 0x737265765f736f24;
    _swift_bridgeObjectRetain(param_1);
    FUN_100071370(0x737265765f736f24);
    if (((ulong)puVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&local_a0);
      _swift_bridgeObjectRelease(param_1);
      FUN_100011080(&local_a0,local_78);
      FUN_10000cbfc(local_78,&local_a0);
      uStack_e8 = uStack_98;
      local_f0 = local_a0;
      local_d8 = local_88;
      uStack_e0 = uStack_90;
      if (local_88 == 0) {
        FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(auStack_c8,0x737265765f736f24,&DAT_eb000000006e6f69);
        FUN_1000fb4c4(auStack_c8,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_f0,auStack_c8);
        puVar2 = local_58;
        puVar3 = local_58;
        _swift_isUniquelyReferenced_nonNull_native(local_58);
        local_f0 = puVar2;
        FUN_10016fe74(auStack_c8,0x737265765f736f24,&DAT_eb000000006e6f69,puVar3);
        local_58 = local_f0;
      }
      FUN_100004594(local_78);
    }
  }
  uVar4 = 0;
  lVar6 = 0x5f65636976656424;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    FUN_100071370(0x5f65636976656424);
    if ((uVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar6 * 0x20,&local_a0);
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10012471c;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  uStack_98 = 0;
  local_a0 = (undefined *)0x0;
  local_88 = 0;
  uStack_90 = 0;
LAB_10012471c:
  _swift_bridgeObjectRelease(param_1);
  if (local_88 == 0) {
    FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    FUN_100011080(&local_a0,local_78);
    FUN_10000cbfc(local_78,&local_a0);
    uStack_e8 = uStack_98;
    local_f0 = local_a0;
    local_d8 = local_88;
    uStack_e0 = uStack_90;
    if (local_88 == 0) {
      FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(auStack_c8,0x5f65636976656424,0xec00000065707974);
      FUN_1000fb4c4(auStack_c8,&DAT_100fae668,&DAT_100c2e4a0);
    }
    else {
      FUN_100011080(&local_f0,auStack_c8);
      puVar2 = local_58;
      puVar3 = local_58;
      _swift_isUniquelyReferenced_nonNull_native(local_58);
      local_f0 = puVar2;
      FUN_10016fe74(auStack_c8,0x5f65636976656424,0xec00000065707974,puVar3);
      local_58 = local_f0;
    }
    FUN_100004594(local_78);
  }
  puVar2 = local_58;
  puVar3 = local_58;
  _swift_isUniquelyReferenced_nonNull_native(local_58);
  local_78[0] = puVar2;
  FUN_100103e2c(lVar1,FUN_100152dbc,0,puVar3,local_78);
  _swift_bridgeObjectRelease(lVar1);
  return local_78[0];
}



/* Address: 0x100124854 | FUN_100124854 */

/* WARNING: Removing unreachable block (ram,0x000100124e48) */
/* WARNING: Removing unreachable block (ram,0x000100124f38) */

undefined8 FUN_100124854(void)

{
  uint uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 *puVar4;
  bool bVar5;
  byte bVar6;
  undefined1 auVar7 [8];
  undefined *puVar8;
  undefined1 auVar9 [8];
  LanguageCode LVar10;
  Locale LVar11;
  Language LVar12;
  Language LVar13;
  Locale LVar14;
  LanguageCode LVar15;
  TimeZone TVar16;
  TimeZone TVar17;
  undefined *puVar18;
  Locale LVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long unaff_x20;
  ID self;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  double dVar27;
  double dVar28;
  String SVar29;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  long local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 local_c0 [8];
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined *local_78;
  
  puVar4 = auStack_f0;
  auVar7 = (undefined1  [8])PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  self = *(ID *)(unaff_x20 + 0x28);
  local_78 = (undefined *)auVar7;
  objc_stub::lock(self);
  dVar28 = *(double *)(unaff_x20 + 0x10);
  dVar27 = *(double *)(unaff_x20 + 0x18);
  cVar2 = *(char *)(unaff_x20 + 0x20);
  objc_stub::unlock(self);
  puVar18 = PTR___type_metadata_for_Swift_Float_100eac620;
  if (cVar2 != '\x01') {
    local_c0._0_4_ = (float)dVar28;
    local_a8 = PTR___type_metadata_for_Swift_Float_100eac620;
    FUN_100011080(local_c0,auStack_a0);
    puVar8 = (undefined *)auVar7;
    _swift_isUniquelyReferenced_nonNull_native(auVar7);
    local_c0 = auVar7;
    FUN_10016fe74(auStack_a0,0x5f6e656572637324,0xed00006874646977,puVar8);
    auVar7 = local_c0;
    local_c0._0_4_ = (float)dVar27;
    local_a8 = puVar18;
    FUN_100011080(local_c0,auStack_a0);
    auVar9 = auVar7;
    _swift_isUniquelyReferenced_nonNull_native(auVar7);
    _local_c0 = (String)CONCAT88(puStack_b8,auVar7);
    FUN_10016fe74(auStack_a0,0x5f6e656572637324,0xee00746867696568,auVar9);
    local_78 = (undefined *)local_c0;
    auVar7 = local_c0;
  }
  LVar19.unknown = (undefined *)0x0;
  bVar6 = Swift::_stdlib_isOSVersionAtLeast(0xd,0,0);
  puVar18 = PTR___type_metadata_for_Swift_String_100eac208;
  if ((bVar6 & 1) == 0) {
    LVar14 = Foundation::Locale::typeMetadataAccessor();
    lVar21 = *(long *)(LVar14.unknown + -8);
    lVar20 = *(long *)(lVar21 + 0x40);
    LVar11 = LVar14;
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    uVar25 = lVar20 + 0xfU & 0xfffffffffffffff0;
    LVar11 = Foundation::Locale::get_current(LVar11);
    Foundation::Locale::_get_languageCode(LVar11);
    pcVar23 = *(code **)(lVar21 + 8);
    LVar11 = LVar14;
    (*pcVar23)(auStack_f0 + -uVar25);
    if (LVar19.unknown != (undefined *)0x0) {
      _swift_bridgeObjectRelease();
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      LVar19 = Foundation::Locale::get_current(LVar19);
      Foundation::Locale::_get_languageCode(LVar19);
      (*pcVar23)(auStack_f0 + -uVar25,LVar14.unknown);
      if (LVar11.unknown == (undefined *)0x0) {
        _local_c0 = (String)ZEXT816(0);
        local_a8 = (undefined *)0x0;
        local_b0 = 0;
        FUN_1000fb4c4(local_c0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(auStack_a0,0x656c61636f6c24,&DAT_e700000000000000);
        FUN_1000fb4c4(auStack_a0,&DAT_100fae668,&DAT_100c2e4a0);
        puVar4 = auStack_f0;
        auVar7 = (undefined1  [8])local_78;
      }
      else {
        local_b0 = 0;
        local_a8 = puVar18;
        local_c0 = (undefined1  [8])LVar19.unknown;
        puStack_b8 = LVar11.unknown;
        FUN_100011080(local_c0,auStack_a0);
        puVar8 = (undefined *)auVar7;
        _swift_isUniquelyReferenced_nonNull_native(auVar7);
        local_c0 = auVar7;
        FUN_10016fe74(auStack_a0,0x656c61636f6c24,&DAT_e700000000000000,puVar8);
        local_78 = (undefined *)local_c0;
        puVar4 = auStack_f0;
        auVar7 = local_c0;
      }
    }
  }
  else {
    LVar10 = Foundation::Locale::LanguageCode::typeMetadataAccessor();
    lVar24 = *(long *)(LVar10.unknown + -8);
    local_d0 = auStack_f0;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
    puVar4 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    local_e8 = puVar4;
    LVar11 = Foundation::Locale::typeMetadataAccessor();
    lVar26 = *(long *)(LVar11.unknown + -8);
    LVar19 = LVar11;
    local_d8 = puVar4;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
    lVar20 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    Foundation::Locale::get_current(LVar19);
    LVar12 = Foundation::Locale::Language::typeMetadataAccessor();
    lVar21 = *(long *)(LVar12.unknown + -8);
    LVar13 = LVar12;
    local_e0 = lVar20;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
    lVar22 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
    Foundation::Locale::get_language((Locale)LVar13.unknown);
    (**(code **)(lVar26 + 8))(lVar20,LVar11.unknown);
    LVar13.unknown = &DAT_100fb00b8;
    FUN_1000f7830(&DAT_100fb00b8,&DAT_100c2ea40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(*(long *)(LVar13.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar26 = lVar22 - extraout_x8_02;
    Foundation::Locale::Language::_get_languageCode(LVar13);
    (**(code **)(lVar21 + 8))(lVar22,LVar12.unknown);
    lVar20 = lVar26;
    (**(code **)(lVar24 + 0x30))(lVar26,1,LVar10.unknown);
    puVar4 = local_e8;
    if ((int)lVar20 == 1) {
      FUN_1000fb4c4(lVar26,&DAT_100fb00b8,&DAT_100c2ea40);
      puVar4 = local_d0;
      puVar18 = PTR___type_metadata_for_Swift_String_100eac208;
    }
    else {
      LVar15.unknown = local_e8;
      (**(code **)(lVar24 + 0x20))(local_e8,lVar26,LVar10.unknown);
      _local_c0 = Foundation::Locale::LanguageCode::get_identifier(LVar15);
      puVar18 = PTR___type_metadata_for_Swift_String_100eac208;
      local_a8 = PTR___type_metadata_for_Swift_String_100eac208;
      FUN_100011080(local_c0,auStack_a0);
      puVar8 = (undefined *)auVar7;
      _swift_isUniquelyReferenced_nonNull_native(auVar7);
      local_c0 = auVar7;
      FUN_10016fe74(auStack_a0,0x656c61636f6c24,&DAT_e700000000000000,puVar8);
      auVar7 = local_c0;
      local_78 = (undefined *)local_c0;
      (**(code **)(lVar24 + 8))(puVar4,LVar10.unknown);
      puVar4 = local_d0;
    }
  }
  TVar16 = Foundation::TimeZone::typeMetadataAccessor();
  lVar20 = *(long *)(TVar16.unknown + -8);
  TVar17 = TVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  TVar17 = Foundation::TimeZone::get_current(TVar17);
  SVar29 = Foundation::TimeZone::get_identifier(TVar17);
  (**(code **)(lVar20 + 8))
            ((long)puVar4 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0),TVar16.unknown);
  _local_c0 = SVar29;
  local_a8 = puVar18;
  FUN_100011080(local_c0,auStack_a0);
  puVar18 = (undefined *)auVar7;
  _swift_isUniquelyReferenced_nonNull_native(auVar7);
  local_c0 = auVar7;
  FUN_10016fe74(auStack_a0,0x6e6f7a656d697424,0xe900000000000065,puVar18);
  auVar7 = local_c0;
  lVar20 = *(long *)(unaff_x20 + 0x30);
  if (lVar20 != 0) {
    if (*(char *)(lVar20 + 0x54) == '\x01') {
      _swift_unownedRetainStrong(lVar20);
      _swift_unownedRetain();
      _swift_unownedRetain();
      _swift_release();
      local_90 = lVar20;
      (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
      _swift_unownedRelease(lVar20);
      _swift_unownedRelease(lVar20);
    }
    puVar18 = PTR___type_metadata_for_Swift_Bool_100eac570;
    bVar5 = false;
    if ((*(char *)(lVar20 + 0x54) != '\x01') &&
       (uVar1 = *(uint *)(lVar20 + 0x50), (uVar1 >> 1 & 1) != 0)) {
      if (((uVar1 & 0x28) == 0) || ((uVar1 >> 4 & 1) != 0)) {
        bVar5 = (uVar1 & 4) == 0;
      }
      else {
        bVar5 = true;
      }
    }
    local_c0[0] = bVar5;
    local_a8 = PTR___type_metadata_for_Swift_Bool_100eac570;
    FUN_100011080(local_c0,auStack_a0);
    auVar9 = auVar7;
    _swift_isUniquelyReferenced_nonNull_native(auVar7);
    _local_c0 = (String)CONCAT88(puStack_b8,auVar7);
    FUN_10016fe74(auStack_a0,0x6b726f7774656e24,0xed0000696669775f,auVar9);
    auVar7 = local_c0;
    if (*(char *)(lVar20 + 0x54) == '\x01') {
      _swift_unownedRetainStrong(lVar20);
      _swift_unownedRetain();
      _swift_unownedRetain();
      _swift_release();
      local_90 = lVar20;
      (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
      _swift_unownedRelease(lVar20);
      _swift_unownedRelease(lVar20);
    }
    auVar3[0xf] = 0;
    auVar3._0_15_ = stack0xffffffffffffff41;
    _local_c0 = (String)(auVar3 << 8);
    local_a8 = puVar18;
    FUN_100011080(local_c0,auStack_a0);
    auVar9 = auVar7;
    _swift_isUniquelyReferenced_nonNull_native(auVar7);
    _local_c0 = (String)CONCAT88(puStack_b8,auVar7);
    FUN_10016fe74(auStack_a0,0xd000000000000011,0x8000000100d924f0,auVar9);
  }
  return local_c0;
}



/* Address: 0x100124fc4 | FUN_100124fc4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100124fc4(void)

{
  ID IVar1;
  
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_(IVar1);
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_(IVar1);
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::addObserver_selector_name_object_(IVar1);
  return 0;
}



/* Address: 0x10012509c | FUN_10012509c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012509c(void)

{
  ID IVar1;
  
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_name_object_(IVar1);
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_name_object_(IVar1);
  IVar1 = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_name_object_(IVar1);
  return 0;
}



/* Address: 0x100125160 | FUN_100125160 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100125160(void)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  ID IVar4;
  OS_dispatch_queue *pOVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  undefined1 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  ID self;
  DispatchWorkItemFlags qos;
  long lVar13;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar13 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  qos.unknown = (undefined *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100eb82d0;
  uVar10 = 7;
  _swift_allocObject(&DAT_100eb82d0,0x28);
  *(code **)(puVar3 + 0x10) = thunk_FUN_100126760;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(long *)(puVar3 + 0x20) = unaff_x20;
  _swift_retain_n();
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread);
  if ((int)IVar4 != 0) {
    uVar9 = extraout_x1;
    FUN_100126760();
    self = *(ID *)(unaff_x20 + 0x28);
    objc_stub::lock(self);
    *(ID *)(unaff_x20 + 0x10) = IVar4;
    *(undefined8 *)(unaff_x20 + 0x18) = uVar9;
    *(undefined1 *)(unaff_x20 + 0x20) = uVar10;
    objc_stub::unlock(self);
    _swift_release(puVar3);
    _swift_release();
    return;
  }
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  local_70 = FUN_10012546c;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eb82e8;
  local_98 = lVar13;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  DVar6.unknown = local_68;
  local_a0 = DVar2.unknown;
  _swift_retain(puVar3);
  _swift_release();
  DVar2 = Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10011dab0();
  puVar7 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar8 = puVar7;
  FUN_10011daf4();
  Swift::SetAlgebra::_init(lVar11,&local_90,puVar7,puVar8,DVar1.unknown,DVar2.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  _swift_release(puVar3);
  _swift_release();
  (**(code **)(local_98 + 8))(lVar11,DVar1.unknown);
  (**(code **)(lVar12 + 8))(qos.unknown,local_a0);
  return;
}



/* Address: 0x1001253f4 | _TtC7PostHog14PostHogContext::onShouldUpdateScreenSize */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog14PostHogContext::onShouldUpdateScreenSize(ID param_1,SEL param_2)

{
  _swift_retain();
  FUN_100125160();
  _swift_release(param_1);
  return;
}



/* Address: 0x10012541c | FUN_10012541c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10012541c(void)

{
  return ZEXT816(0x100faff78);
}



/* Address: 0x10012543c | thunk_FUN_100126760 */

void thunk_FUN_100126760(void)

{
  FUN_100126760();
  return;
}



/* Address: 0x100125440 | FUN_100125440 */

void FUN_100125440(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10012546c | FUN_10012546c */

void FUN_10012546c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long unaff_x20;
  ID self;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  self = *(ID *)(lVar1 + 0x28);
  objc_stub::lock(self);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined1 *)(lVar1 + 0x20) = param_3;
  objc_stub::unlock(self);
  return;
}



/* Address: 0x1001254c8 | FUN_1001254c8 */

void FUN_1001254c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x1001254dc | FUN_1001254dc */

void FUN_1001254dc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001254e4 | FUN_1001254e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_1001254e4(void)

{
  byte bVar1;
  ID IVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
  if ((bVar1 & 1) == 0) {
    DAT_1010572e2 = 0;
  }
  else {
    IVar2 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
    IVar2 = NSProcessInfo::isiOSAppOnMac(IVar2);
    DAT_1010572e2 = (undefined1)IVar2;
    bVar1 = 0;
  }
  return bVar1;
}



/* Address: 0x10012554c | FUN_10012554c */

void FUN_10012554c(byte param_1)

{
  FUN_10012556c();
  DAT_1010572e0 = param_1 & 1;
  return;
}



/* Address: 0x10012556c | FUN_10012556c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10012556c(void)

{
  bool bVar1;
  URL UVar2;
  ID self;
  URL UVar3;
  _StringGuts _Var4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  String SVar7;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  self = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar3.unknown = (undefined *)NSBundle::appStoreReceiptURL(self);
  if (UVar3.unknown == (undefined *)0x0) {
    bVar1 = false;
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
    UVar3.unknown = puVar5;
    (**(code **)(lVar6 + 0x20))
              (puVar5,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               UVar2.unknown);
    SVar7 = Foundation::URL::get_lastPathComponent(UVar3);
    _Var4.unknown = SVar7.bridgeObject;
    if (SVar7.str == (undefined *)0x52786f62646e6173 &&
        _Var4.unknown == (undefined *)0xee00747069656365) {
      bVar1 = true;
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar7.str,_Var4,(_StringComparisonResult)0x73);
    }
    _swift_bridgeObjectRelease(_Var4.unknown);
    (**(code **)(lVar6 + 8))(puVar5,UVar2.unknown);
  }
  return bVar1;
}



/* Address: 0x1001256cc | FUN_1001256cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1001256cc(void)

{
  ID IVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar1 = NSBundle::pathForResource_ofType_(IVar1,pNVar2,pNVar3);
  DAT_1010572e1 = IVar1 != 0;
  return 0;
}



/* Address: 0x10012579c | FUN_10012579c */

char * FUN_10012579c(long param_1,undefined8 param_2,void *param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  char *pcVar4;
  String SVar5;
  tuple2_conflict1 tVar6;
  
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001257e8);
    (*pcVar3)();
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    pcVar4 = (char *)0x0;
    do {
      if ((char *)(*(long *)(param_1 + 0x10) + -1) == pcVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001257e4);
        (*pcVar3)();
      }
      pcVar1 = pcVar4 + param_1 + 0x21;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
    SVar5.bridgeObject = param_3;
    SVar5.str = pcVar4;
    tVar6 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar5);
    return tVar6.result.str;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_3;
  tVar6 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),(String)(auVar2 << 0x40));
  return tVar6.result.str;
}



/* Address: 0x1001257e8 | FUN_1001257e8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100125844 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1001257e8(undefined8 param_1)

{
  size_t sVar1;
  code *pcVar2;
  _ArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  size_t local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_40 = 0;
  _sysctlbyname("hw.machine",(void *)0x0,&local_40,(void *)0x0,0);
  sVar1 = local_40;
  if ((long)local_40 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001258d4);
    (*pcVar2)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_40 != 0) {
    _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                      (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
    *(size_t *)(_Var3.unknown + 0x10) = sVar1;
    _bzero(_Var3.unknown + 0x20,sVar1);
  }
  puVar5 = _Var3.unknown + 0x20;
  _sysctlbyname("hw.machine",puVar5,&local_40,(void *)0x0,0);
  puVar4 = _Var3.unknown;
  FUN_10012579c(_Var3.unknown);
  _swift_bridgeObjectRelease(_Var3.unknown);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Address: 0x1001258d8 | FUN_1001258d8 */

undefined1  [16] FUN_1001258d8(char *param_1,void *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auVar24 [16];
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    puVar6 = (undefined1 *)0xeb00000000726941;
    uVar5 = 0x206b6f6f4263614d;
    SVar8.bridgeObject = (void *)0xea00000000007269;
    SVar8.str = (char *)0x416b6f6f4263614d;
    SVar26.bridgeObject = param_2;
    SVar26.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar8,SVar26);
    uVar3 = uVar5;
    puVar4 = puVar6;
    if (bVar2) goto LAB_100125c00;
    puVar7 = (undefined1 *)0xeb000000006f7250;
    SVar9.bridgeObject = (void *)0xea00000000006f72;
    SVar9.str = (char *)0x506b6f6f4263614d;
    SVar27.bridgeObject = param_2;
    SVar27.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar9,SVar27);
    puVar4 = puVar7;
    if (bVar2) goto LAB_100125c00;
    SVar10.bridgeObject = &DAT_e700000000000000;
    SVar10.str = (char *)0x6b6f6f4263614d;
    SVar28.bridgeObject = param_2;
    SVar28.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar10,SVar28);
    if (bVar2) {
      uVar3 = 0x6b6f6f4263614d;
      puVar4 = &DAT_e700000000000000;
      goto LAB_100125c00;
    }
    SVar11.bridgeObject = &DAT_e700000000000000;
    SVar11.str = (char *)0x696e696d63614d;
    SVar29.bridgeObject = param_2;
    SVar29.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar11,SVar29);
    if (bVar2) {
      uVar3 = 0x696e696d2063614d;
      puVar4 = &DAT_e800000000000000;
      goto LAB_100125c00;
    }
    SVar12.bridgeObject = &DAT_e600000000000000;
    SVar12.str = (char *)0x6f725063614d;
    SVar30.bridgeObject = param_2;
    SVar30.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar12,SVar30);
    if (bVar2) {
      uVar3 = 0x6f72502063614d;
      puVar4 = &DAT_e700000000000000;
      goto LAB_100125c00;
    }
    SVar13.bridgeObject = (void *)0xe90000000000006f;
    SVar13.str = (char *)0x696475745363614d;
    SVar31.bridgeObject = param_2;
    SVar31.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar13,SVar31);
    if ((bVar2) ||
       (SVar14.bridgeObject = &DAT_e500000000000000, SVar14.str = (char *)0x333163614d,
       SVar32.bridgeObject = param_2, SVar32.str = param_1,
       bVar2 = Swift::String::hasPrefix(SVar14,SVar32), bVar2)) {
      uVar3 = 0x647574532063614d;
      puVar4 = (undefined1 *)0xea00000000006f69;
      goto LAB_100125c00;
    }
    SVar15.bridgeObject = &DAT_e400000000000000;
    SVar15.str = (char *)0x63614d69;
    SVar33.bridgeObject = param_2;
    SVar33.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar15,SVar33);
    uVar3 = 0x63614d69;
    puVar4 = &DAT_e400000000000000;
    if (bVar2) goto LAB_100125c00;
    SVar16.bridgeObject = (void *)0xe300000000000000;
    SVar16.str = (char *)0x63614d;
    SVar34.bridgeObject = param_2;
    SVar34.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar16,SVar34);
    if (!bVar2) {
      SVar25.bridgeObject = (void *)0xea00000000006361;
      SVar25.str = (char *)0x4d6c617574726956;
      SVar42.bridgeObject = param_2;
      SVar42.str = param_1;
      bVar2 = Swift::String::hasPrefix(SVar25,SVar42);
      uVar3 = 0x726956282063614d;
      if (!bVar2) {
        uVar3 = 0x63614d;
      }
      puVar4 = (undefined1 *)0xed0000296c617574;
      if (!bVar2) {
        puVar4 = (undefined1 *)0xe300000000000000;
      }
      goto LAB_100125c00;
    }
    SVar17.bridgeObject = &DAT_e700000000000000;
    SVar17.str = (char *)0x322c343163614d;
    SVar35.bridgeObject = param_2;
    SVar35.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar17,SVar35);
    uVar3 = uVar5;
    puVar4 = puVar6;
    if ((((bVar2) ||
         (SVar18.bridgeObject = &DAT_e800000000000000, SVar18.str = (char *)0x35312c343163614d,
         SVar36.bridgeObject = param_2, SVar36.str = param_1,
         bVar2 = Swift::String::hasPrefix(SVar18,SVar36), bVar2)) ||
        (SVar19.bridgeObject = &DAT_e700000000000000, SVar19.str = (char *)0x332c353163614d,
        SVar37.bridgeObject = param_2, SVar37.str = param_1,
        bVar2 = Swift::String::hasPrefix(SVar19,SVar37), bVar2)) ||
       (((SVar20.bridgeObject = &DAT_e700000000000000, SVar20.str = (char *)0x362c353163614d,
         SVar38.bridgeObject = param_2, SVar38.str = param_1,
         bVar2 = Swift::String::hasPrefix(SVar20,SVar38), bVar2 ||
         (SVar21.bridgeObject = &DAT_e700000000000000, SVar21.str = (char *)0x372c353163614d,
         SVar39.bridgeObject = param_2, SVar39.str = param_1,
         bVar2 = Swift::String::hasPrefix(SVar21,SVar39), bVar2)) ||
        ((SVar22.bridgeObject = &DAT_e500000000000000, SVar22.str = (char *)0x343163614d,
         SVar40.bridgeObject = param_2, SVar40.str = param_1,
         bVar2 = Swift::String::hasPrefix(SVar22,SVar40), puVar4 = puVar7, bVar2 ||
         (SVar23.bridgeObject = &DAT_e500000000000000, SVar23.str = (char *)0x353163614d,
         SVar41.bridgeObject = param_2, SVar41.str = param_1,
         bVar2 = Swift::String::hasPrefix(SVar23,SVar41), bVar2)))))) goto LAB_100125c00;
  }
  uVar3 = 0x63614d;
  puVar4 = (undefined1 *)0xe300000000000000;
LAB_100125c00:
  auVar24._8_8_ = puVar4;
  auVar24._0_8_ = uVar3;
  return auVar24;
}



/* Address: 0x100125c68 | FUN_100125c68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100125c68(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined1 auVar4 [8];
  code *pcVar5;
  undefined *puVar6;
  ID IVar7;
  Dictionary<undefined,undefined> DVar8;
  undefined1 auVar9 [8];
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  Dictionary<undefined,undefined> DVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  String SVar18;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined1 auStack_d0 [32];
  undefined1 local_b0 [8];
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined *local_68;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  local_68 = puVar6;
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar7 = NSBundle::infoDictionary(IVar7);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  if ((IVar7 == 0) ||
     (DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC(),
     DVar8.unknown == (undefined *)0x0)) {
    _local_b0 = (String)ZEXT816(0);
    local_98 = (undefined *)0x0;
    uStack_a0 = 0;
    FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
    _local_b0 = (String)ZEXT816(0);
    local_98 = (undefined *)0x0;
    uStack_a0 = 0;
    FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
    _local_b0 = (String)ZEXT816(0);
    local_98 = (undefined *)0x0;
    uStack_a0 = 0;
    FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
  }
  else {
    if (*(long *)PTR__kCFBundleNameKey_100ea9b28 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100126760);
      (*pcVar5)();
    }
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    DVar14.unknown = SVar18.bridgeObject;
    if (*(long *)(DVar8.unknown + 0x10) == 0) {
      _local_b0 = (String)ZEXT816(0);
      local_98 = (undefined *)0x0;
      uStack_a0 = 0;
LAB_100126300:
      _swift_bridgeObjectRelease(DVar14.unknown);
LAB_100126308:
      FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
      if (*(long *)(DVar8.unknown + 0x10) == 0) {
        _local_b0 = (String)ZEXT816(0);
        local_98 = (undefined *)0x0;
        uStack_a0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(DVar8.unknown);
        uVar17 = 0;
        lVar11 = -0x2fffffffffffffed;
        FUN_100071370(0xd000000000000013);
        if ((uVar17 & 1) == 0) {
          _local_b0 = (String)ZEXT816(0);
          local_98 = (undefined *)0x0;
          uStack_a0 = 0;
        }
        else {
          FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + lVar11 * 0x20,local_b0);
        }
        _swift_bridgeObjectRelease(DVar8.unknown);
        if (local_98 != (undefined *)0x0) goto LAB_10012638c;
      }
      FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
      if (*(long *)(DVar8.unknown + 0x10) != 0) goto LAB_100126478;
LAB_100126414:
      _local_b0 = (String)ZEXT816(0);
      local_98 = (undefined *)0x0;
      uStack_a0 = 0;
LAB_100126550:
      FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
      if (*(long *)(DVar8.unknown + 0x10) == 0) goto LAB_100126620;
LAB_1001265c8:
      _swift_bridgeObjectRetain(DVar8.unknown);
      lVar11 = 0x656c646e75424643;
      uVar17 = 0;
      FUN_100071370(0x656c646e75424643);
      if ((uVar17 & 1) == 0) {
        _swift_bridgeObjectRelease(DVar8.unknown);
        goto LAB_100126620;
      }
      FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + lVar11 * 0x20,&local_90);
      _swift_bridgeObjectRelease(DVar8.unknown);
    }
    else {
      _swift_bridgeObjectRetain(DVar8.unknown);
      FUN_100071370(SVar18.str);
      if (((ulong)SVar18.bridgeObject & 1) == 0) {
        _local_b0 = (String)ZEXT816(0);
        local_98 = (undefined *)0x0;
        uStack_a0 = 0;
        _swift_bridgeObjectRelease(DVar14.unknown);
        DVar14 = DVar8;
        goto LAB_100126300;
      }
      FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + (long)SVar18.str * 0x20,local_b0);
      _swift_bridgeObjectRelease(DVar14.unknown);
      _swift_bridgeObjectRelease(DVar8.unknown);
      if (local_98 == (undefined *)0x0) goto LAB_100126308;
LAB_10012638c:
      FUN_100011080(local_b0,&local_90);
      FUN_10000cbfc(&local_90,local_b0);
      uStack_e8 = puStack_a8;
      local_f0 = (undefined *)local_b0;
      local_d8 = (long)local_98;
      uStack_e0 = uStack_a0;
      if (local_98 == (undefined *)0x0) {
        FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(auStack_d0,0x6d616e5f70706124,0xe900000000000065);
        FUN_1000fb4c4(auStack_d0,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_f0,auStack_d0);
        puVar12 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native(puVar6);
        local_f0 = puVar6;
        FUN_10016fe74(auStack_d0,0x6d616e5f70706124,0xe900000000000065,puVar12);
        local_68 = local_f0;
      }
      FUN_100004594(&local_90);
      if (*(long *)(DVar8.unknown + 0x10) == 0) goto LAB_100126414;
LAB_100126478:
      _swift_bridgeObjectRetain(DVar8.unknown);
      lVar11 = -0x2fffffffffffffe6;
      uVar17 = 0;
      FUN_100071370(0xd00000000000001a);
      if ((uVar17 & 1) == 0) {
        _local_b0 = (String)ZEXT816(0);
        local_98 = (undefined *)0x0;
        uStack_a0 = 0;
      }
      else {
        FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + lVar11 * 0x20,local_b0);
      }
      _swift_bridgeObjectRelease(DVar8.unknown);
      if (local_98 == (undefined *)0x0) goto LAB_100126550;
      FUN_100011080(local_b0,&local_90);
      FUN_10000cbfc(&local_90,local_b0);
      uStack_e8 = puStack_a8;
      local_f0 = (undefined *)local_b0;
      local_d8 = (long)local_98;
      uStack_e0 = uStack_a0;
      if (local_98 == (undefined *)0x0) {
        FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_10016fcc4(auStack_d0,0x7265765f70706124,0xec0000006e6f6973);
        FUN_1000fb4c4(auStack_d0,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_f0,auStack_d0);
        puVar6 = local_68;
        puVar12 = local_68;
        _swift_isUniquelyReferenced_nonNull_native(local_68);
        local_f0 = puVar6;
        FUN_10016fe74(auStack_d0,0x7265765f70706124,0xec0000006e6f6973,puVar12);
        local_68 = local_f0;
      }
      FUN_100004594(&local_90);
      if (*(long *)(DVar8.unknown + 0x10) != 0) goto LAB_1001265c8;
LAB_100126620:
      uStack_88 = 0;
      local_90 = 0;
      local_78 = 0;
      uStack_80 = 0;
    }
    _swift_bridgeObjectRelease(DVar8.unknown);
    if (local_78 != 0) {
      puVar13 = local_b0;
      _swift_dynamicCast(puVar13,&local_90,puVar3 + 8,PTR___type_metadata_for_Swift_String_100eac208
                         ,6);
      if (((ulong)puVar13 & 1) == 0) goto LAB_100125e08;
      puVar13 = puStack_a8;
      FUN_10016c38c(local_b0,local_b0,puStack_a8);
      _swift_bridgeObjectRelease(puVar13);
      if (local_98 != (undefined *)0x0) {
        FUN_100011080(local_b0,&local_90);
        puVar3 = local_68;
        puVar6 = local_68;
        _swift_isUniquelyReferenced_nonNull_native(local_68);
        local_b0 = (undefined1  [8])puVar3;
        FUN_10016fe74(&local_90,0x6975625f70706124,0xea0000000000646c,puVar6);
        local_68 = (undefined *)local_b0;
        goto LAB_100125e08;
      }
      FUN_1000fb4c4(local_b0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_90,0x6975625f70706124,0xea0000000000646c);
    }
  }
  FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
LAB_100125e08:
  if (DAT_100fb00c0 != -1) {
    _swift_once(&DAT_100fb00c0,FUN_10012554c);
  }
  puVar3 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_b0[0] = DAT_1010572e0;
  local_98 = PTR___type_metadata_for_Swift_Bool_100eac570;
  FUN_100011080(local_b0,&local_90);
  puVar6 = local_68;
  puVar12 = local_68;
  _swift_isUniquelyReferenced_nonNull_native(local_68);
  local_b0 = (undefined1  [8])puVar6;
  FUN_10016fe74(&local_90,0x747365745f736924,0xee00746867696c66,puVar12);
  auVar4 = local_b0;
  local_68 = (undefined *)local_b0;
  if (DAT_100fb00c8 != -1) {
    _swift_once(&DAT_100fb00c8,FUN_1001256cc);
  }
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  local_b0[0] = DAT_1010572e1;
  local_98 = puVar3;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  _local_b0 = (String)CONCAT88(puStack_a8,auVar4);
  FUN_10016fe74(&local_90,0x656469735f736924,0xee00646564616f6c,auVar9);
  auVar4 = local_b0;
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar7 = NSBundle::bundleIdentifier(IVar7);
  if (IVar7 == 0) {
    puStack_a8 = (void *)0x8000000100d90820;
    local_b0 = (undefined1  [8])0xd000000000000013;
  }
  else {
    _local_b0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  local_98 = puVar6;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  local_b0 = auVar4;
  FUN_10016fe74(&local_90,0x6d616e5f70706124,0xee00656361707365,auVar9);
  auVar4 = local_b0;
  local_b0 = (undefined1  [8])0x656c707041;
  puStack_a8 = &DAT_e500000000000000;
  local_98 = puVar6;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  puVar10 = &local_90;
  uVar16 = 0xd000000000000014;
  local_b0 = auVar4;
  FUN_10016fe74(puVar10,0xd000000000000014,0x8000000100d92510,auVar9);
  auVar4 = local_b0;
  FUN_1001257e8();
  local_98 = puVar6;
  local_b0 = (undefined1  [8])puVar10;
  puStack_a8 = (undefined1 *)uVar16;
  FUN_100011080(local_b0,&local_90);
  _swift_bridgeObjectRetain(uVar16);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  local_b0 = auVar4;
  FUN_10016fe74(&local_90,0x5f65636976656424,0xed00006c65646f6d,auVar9);
  auVar4 = local_b0;
  local_b0 = (undefined1  [8])0x706f746b736544;
  puStack_a8 = &DAT_e700000000000000;
  local_98 = puVar6;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  _local_b0 = (String)CONCAT88(puStack_a8,auVar4);
  FUN_10016fe74(&local_90,0x5f65636976656424,0xec00000065707974,auVar9);
  auVar4 = local_b0;
  auVar1[0xf] = 0;
  auVar1._0_15_ = stack0xffffffffffffff51;
  _local_b0 = (String)(auVar1 << 8);
  local_98 = puVar3;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  _local_b0 = (String)CONCAT88(puStack_a8,auVar4);
  FUN_10016fe74(&local_90,0x6c756d655f736924,0xec000000726f7461,auVar9);
  auVar4 = local_b0;
  if (DAT_100fb00d0 != -1) {
    _swift_once(&DAT_100fb00d0,FUN_1001254e4);
  }
  local_b0[0] = DAT_1010572e2;
  local_98 = puVar3;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  _local_b0 = (String)CONCAT88(puStack_a8,auVar4);
  FUN_10016fe74(&local_90,0xd000000000000016,0x8000000100d92530,auVar9);
  auVar4 = local_b0;
  auVar2[0xf] = 0;
  auVar2._0_15_ = stack0xffffffffffffff51;
  _local_b0 = (String)(auVar2 << 8);
  local_98 = puVar3;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  local_b0 = auVar4;
  FUN_10016fe74(&local_90,0xd000000000000014,0x8000000100d92550,auVar9);
  auVar4 = local_b0;
  uVar15 = uVar16;
  FUN_1001258d8();
  _swift_bridgeObjectRelease(uVar16);
  local_98 = puVar6;
  local_b0 = (undefined1  [8])puVar10;
  puStack_a8 = (undefined1 *)uVar15;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  local_b0 = auVar4;
  FUN_10016fe74(&local_90,0x5f65636976656424,0xec000000656d616e,auVar9);
  auVar4 = local_b0;
  local_b0 = (undefined1  [8])0x534f63616d;
  puStack_a8 = &DAT_e500000000000000;
  local_98 = puVar6;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  uVar16 = 0x656d616e5f736f24;
  puVar10 = &local_90;
  local_b0 = auVar4;
  FUN_10016fe74(puVar10,0x656d616e5f736f24,&DAT_e800000000000000,auVar9);
  auVar4 = local_b0;
  FUN_10016c6c8();
  local_98 = puVar6;
  local_b0 = (undefined1  [8])puVar10;
  puStack_a8 = (undefined1 *)uVar16;
  FUN_100011080(local_b0,&local_90);
  auVar9 = auVar4;
  _swift_isUniquelyReferenced_nonNull_native(auVar4);
  _local_b0 = (String)CONCAT88(puStack_a8,auVar4);
  FUN_10016fe74(&local_90,0x737265765f736f24,&DAT_eb000000006e6f69,auVar9);
  return local_b0;
}



/* Address: 0x100126760 | FUN_100126760 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100126760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ID IVar4;
  undefined *puVar5;
  ulong self;
  long lVar6;
  ulong uVar7;
  
  IVar4 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
  puVar5 = (undefined *)NSApplication::windows(IVar4);
  FUN_10000ec2c(0,&DAT_100faf9e0,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar6 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      _Var2.unknown = puVar5;
    }
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar6 != 0) {
    uVar7 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1001268b4);
          (*pcVar3)();
        }
        self = *(ulong *)(puVar5 + uVar7 * 8 + 0x20);
      }
      else {
        self = uVar7;
        FUN_10010f5e0(uVar7,puVar5);
      }
      lVar1 = uVar7 + 1;
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001268b0);
        (*pcVar3)();
      }
      IVar4 = objc_stub::isKeyWindow(self);
      if ((IVar4 & 1) != 0) {
        _swift_bridgeObjectRelease(puVar5);
        IVar4 = objc_stub::screen(self);
        if (IVar4 == 0) {
          return 0;
        }
        objc_stub::frame(IVar4);
        return param_3;
      }
      uVar7 = uVar7 + 1;
    } while (lVar1 != lVar6);
  }
  _swift_bridgeObjectRelease(puVar5);
  return 0;
}



/* Address: 0x1001268fc | FUN_1001268fc */

void FUN_1001268fc(void)

{
  long unaff_x20;
  
  FUN_100173774(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


