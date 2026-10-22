/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b8a528 | thunk_FUN_100b8a52c */

int thunk_FUN_100b8a52c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b8a5ac;
  }
  if (param_2 < 0xff) {
LAB_100b8a5a0:
    iVar2 = *param_1 - 2;
    if (*param_1 < 2) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b8a584:
      if (uVar1 == 0) goto LAB_100b8a5a0;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b8a584;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b8a5a0;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 2;
  }
LAB_100b8a5ac:
  return iVar2 + 1;
}



/* Address: 0x100b8a52c | FUN_100b8a52c */

int FUN_100b8a52c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b8a5ac;
  }
  if (param_2 < 0xff) {
LAB_100b8a5a0:
    iVar2 = *param_1 - 2;
    if (*param_1 < 2) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b8a584:
      if (uVar1 == 0) goto LAB_100b8a5a0;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b8a584;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b8a5a0;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 2;
  }
LAB_100b8a5ac:
  return iVar2 + 1;
}



/* Address: 0x100b8a5b4 | thunk_FUN_100b8a5b8 */

void thunk_FUN_100b8a5b8(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100b8a600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b8a604 + (ulong)(&BYTE_100c9a9c5)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100b8a634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b8a638 + (ulong)(&BYTE_100c9a9c0)[uVar1] * 4))();
  return;
}



/* Address: 0x100b8a5b8 | FUN_100b8a5b8 */

void FUN_100b8a5b8(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100b8a600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b8a604 + (ulong)(&BYTE_100c9a9c5)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100b8a634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b8a638 + (ulong)(&BYTE_100c9a9c0)[uVar1] * 4))();
  return;
}



/* Address: 0x100b8a674 | FUN_100b8a674 */

void FUN_100b8a674(byte *param_1,byte param_2)

{
  *param_1 = param_2 & 1;
  return;
}



/* Address: 0x100b8a680 | FUN_100b8a680 */

undefined1  [16] FUN_100b8a680(void)

{
  return ZEXT816(0x100f37e00);
}



/* Address: 0x100b8a690 | thunk_FUN_100b8a694 */

void thunk_FUN_100b8a694(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ad7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ad7c,&DAT_100f37e00);
  DAT_101045a58 = pTVar1;
  return;
}



/* Address: 0x100b8a694 | FUN_100b8a694 */

void FUN_100b8a694(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ad7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ad7c,&DAT_100f37e00);
  DAT_101045a58 = pTVar1;
  return;
}



/* Address: 0x100b8a6d4 | thunk_FUN_100b8a6d8 */

void thunk_FUN_100b8a6d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ad14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ad14,&DAT_100f37e00);
  DAT_101045a60 = pTVar1;
  return;
}



/* Address: 0x100b8a6d8 | FUN_100b8a6d8 */

void FUN_100b8a6d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ad14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ad14,&DAT_100f37e00);
  DAT_101045a60 = pTVar1;
  return;
}



/* Address: 0x100b8a718 | thunk_FUN_100b8a71c */

void thunk_FUN_100b8a71c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9acec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9acec,&DAT_100f37e00);
  DAT_101045a68 = pTVar1;
  return;
}



/* Address: 0x100b8a71c | FUN_100b8a71c */

void FUN_100b8a71c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9acec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9acec,&DAT_100f37e00);
  DAT_101045a68 = pTVar1;
  return;
}



/* Address: 0x100b8a75c | thunk_FUN_100b89e6c */

void thunk_FUN_100b89e6c(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  byte *unaff_x20;
  
  HVar1.unknown = (undefined *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100b8a760 | thunk_FUN_100b8a5b8 */

void thunk_FUN_100b8a5b8(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100b8a600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b8a604 + (ulong)(&BYTE_100c9a9c5)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100b8a634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b8a638 + (ulong)(&BYTE_100c9a9c0)[uVar1] * 4))();
  return;
}



/* Address: 0x100b8a764 | thunk_FUN_100b89e48 */

void thunk_FUN_100b89e48(void)

{
  FUN_100b89e48();
  return;
}



/* Address: 0x100b8a768 | thunk_FUN_100b8a674 */

void thunk_FUN_100b8a674(byte *param_1,byte param_2)

{
  *param_1 = param_2 & 1;
  return;
}



/* Address: 0x100b8a76c | thunk_FUN_100b8a52c */

int thunk_FUN_100b8a52c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b8a5ac;
  }
  if (param_2 < 0xff) {
LAB_100b8a5a0:
    iVar2 = *param_1 - 2;
    if (*param_1 < 2) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b8a584:
      if (uVar1 == 0) goto LAB_100b8a5a0;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b8a584;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b8a5a0;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 2;
  }
LAB_100b8a5ac:
  return iVar2 + 1;
}



/* Address: 0x100b8a770 | thunk_FUN_100b79d6c */

void thunk_FUN_100b79d6c(void)

{
  FUN_100b79d6c();
  return;
}



/* Address: 0x100b8a774 | thunk_FUN_100b89e3c */

void thunk_FUN_100b89e3c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100b895cc(*param_1,*param_2);
  return;
}



/* Address: 0x100b8a778 | thunk_FUN_100b89ed0 */

void thunk_FUN_100b89ed0(void)

{
  FUN_100b89ed0();
  return;
}



/* Address: 0x100b8a77c | thunk_FUN_100b89e60 */

void thunk_FUN_100b89e60(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100b895dc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b8a780 | FUN_100b8a780 */

void FUN_100b8a780(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x000100b8a790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x29 + -0x88) + 8))();
  return;
}



/* Address: 0x100b8a794 | FUN_100b8a794 */

void FUN_100b8a794(void)

{
  long unaff_x27;
  
                    /* WARNING: Could not recover jumptable at 0x000100b8a7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x27 + 8))();
  return;
}



/* Address: 0x100b8a7a4 | FUN_100b8a7a4 */

void FUN_100b8a7a4(void)

{
  FUN_100004594();
  return;
}



/* Address: 0x100b8a7ac | FUN_100b8a7ac */

void FUN_100b8a7ac(void)

{
  Swift::Decoder::_container();
  return;
}



/* Address: 0x100b8a7c4 | FUN_100b8a7c4 */

void FUN_100b8a7c4(void)

{
  return;
}



/* Address: 0x100b8a7d4 | FUN_100b8a7d4 */

void FUN_100b8a7d4(void)

{
  Swift::KeyedDecodingContainer::_decode();
  return;
}



/* Address: 0x100b8a7ec | FUN_100b8a7ec */

void FUN_100b8a7ec(void)

{
  return;
}



/* Address: 0x100b8a7f8 | FUN_100b8a7f8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b8a8ec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_100b8a7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  Date DVar3;
  undefined *puVar4;
  Dictionary<undefined,undefined> DVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_100 [176];
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  (**(code **)(lVar8 + 0x10))
            (auStack_100 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,DVar3.unknown);
  puVar4 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  *(undefined8 *)(puVar4 + 0x20) = 0x66657268;
  *(undefined1 **)(puVar4 + 0x28) = &DAT_e400000000000000;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar4 + 0x30) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0xe000000000000000;
  *(undefined **)(puVar4 + 0x48) = puVar1;
  *(undefined8 *)(puVar4 + 0x50) = 0x746867696568;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined1 **)(puVar4 + 0x58) = &DAT_e600000000000000;
  *(undefined8 *)(puVar4 + 0x60) = param_2;
  *(undefined **)(puVar4 + 0x78) = puVar2;
  *(undefined8 *)(puVar4 + 0x80) = 0x6874646977;
  *(undefined **)(puVar4 + 0xa8) = puVar2;
  *(undefined1 **)(puVar4 + 0x88) = &DAT_e500000000000000;
  *(undefined8 *)(puVar4 + 0x90) = param_3;
  DVar5 = Swift::Dictionary::_init
                    (puVar4,puVar1,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  uVar6 = 4;
  FUN_100b7947c(4,auStack_100 + -(lVar7 + 0xfU & 0xfffffffffffffff0),DVar5.unknown);
  (**(code **)(lVar8 + 8))(param_1,DVar3.unknown);
  return uVar6;
}



/* Address: 0x100b8a934 | _TtC6Sentry20SentryRRWebMetaEvent::initWithTimestamp:height:width: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry20SentryRRWebMetaEvent::initWithTimestamp_height_width_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  Date DVar1;
  undefined1 *puVar2;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(DVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
  FUN_100b8a7f8(puVar2,param_4,param_5);
  return (ID)puVar2;
}



/* Address: 0x100b8a9b4 | FUN_100b8a9b4 */

void FUN_100b8a9b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryRRWebMetaEvent",0x1b,"init(type:timestamp:data:)",0x1a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8a9e0);
  (*pcVar1)();
}



/* Address: 0x100b8a9e0 | _TtC6Sentry20SentryRRWebMetaEvent::initWithType:timestamp:data: */

/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry20SentryRRWebMetaEvent::initWithType_timestamp_data_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  long lVar1;
  Date DVar2;
  undefined8 uVar3;
  ID IVar4;
  objc_super oStack_40;
  long alStack_30 [2];
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar1 = -(*(long *)(*(long *)(DVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_4);
  if (param_5 != 0) {
    (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100b8a9b4();
  *(undefined1 **)((long)alStack_30 + lVar1) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_30 + lVar1 + 8) = FUN_100b8aa4c;
  uVar3 = 0;
  FUN_100b8aa88();
  *(ID *)((long)&oStack_40 + lVar1) = param_4;
  *(undefined8 *)((long)alStack_30 + lVar1 + -8) = uVar3;
  IVar4 = _objc_msgSendSuper2((objc_super *)((long)&oStack_40 + lVar1),"dealloc");
  return IVar4;
}



/* Address: 0x100b8aa4c | FUN_100b8aa4c */

void FUN_100b8aa4c(void)

{
  FUN_100b8aa88();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b8aa80 | FUN_100b8aa80 */

void FUN_100b8aa80(void)

{
  FUN_100b8aa88(0);
  return;
}



/* Address: 0x100b8aa88 | FUN_100b8aa88 */

void FUN_100b8aa88(undefined8 param_1)

{
  if (DAT_101045a98 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cce0ac);
  return;
}



/* Address: 0x100b8aac0 | FUN_100b8aac0 */

void FUN_100b8aac0(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_updateClassMetadata2(param_1,0x100,0,auStack_18,param_1 + 0x78);
  return;
}



/* Address: 0x100b8aaf4 | FUN_100b8aaf4 */

void FUN_100b8aaf4(ID param_1)

{
  ID self;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x18,0);
  *(ID *)(unaff_x20 + 0x10) = param_1;
  self = param_1;
  _swift_unknownObjectRetain();
  _objc_msgSend(self,"addObserver:selector:name:object:");
  _objc_msgSend(param_1,"addObserver:selector:name:object:");
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x100b8aba0 | FUN_100b8aba0 */

void FUN_100b8aba0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x18,param_1);
  return;
}



/* Address: 0x100b8abb4 | _TtC6Sentry44DefaultTelemetryBufferDataForwardingTriggers::willResignActive */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry44DefaultTelemetryBufferDataForwardingTriggers::willResignActive
               (ID param_1,SEL param_2)

{
  FUN_100b8ac6c(param_1,param_2,0x42);
  return;
}



/* Address: 0x100b8abbc | FUN_100b8abbc */

void FUN_100b8abbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x18;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    _swift_getObjectType();
    (**(code **)(lVar2 + 8))();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  FUN_100b84dac();
  FUN_100b84df8(3,0xd000000000000025,0x8000000100dcb600,0xd000000000000083,0x8000000100dcb630,
                param_1);
  return;
}



/* Address: 0x100b8ac64 | _TtC6Sentry44DefaultTelemetryBufferDataForwardingTriggers::willTerminate */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry44DefaultTelemetryBufferDataForwardingTriggers::willTerminate
               (ID param_1,SEL param_2)

{
  FUN_100b8ac6c(param_1,param_2,0x4a);
  return;
}



/* Address: 0x100b8ac6c | FUN_100b8ac6c */

void FUN_100b8ac6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain();
  FUN_100b8abbc(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x100b8ac9c | FUN_100b8ac9c */

void FUN_100b8ac9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_100b8ad64(*(undefined8 *)(unaff_x20 + 0x10),param_2,param_3,
                *(undefined8 *)PTR__NSApplicationWillResignActiveNotification_100ea8ff0);
  FUN_100b8ad64(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x18,0);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1001683a4(unaff_x20 + 0x18);
  return;
}



/* Address: 0x100b8ad04 | FUN_100b8ad04 */

void FUN_100b8ad04(void)

{
  FUN_100b8ac9c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100b8ad24 | FUN_100b8ad24 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8ad24(void)

{
  return ZEXT816(0x101045ae8);
}



/* Address: 0x100b8ad44 | FUN_100b8ad44 */

void FUN_100b8ad44(void)

{
  FUN_100b8aba0();
  return;
}



/* Address: 0x100b8ad64 | FUN_100b8ad64 */

void FUN_100b8ad64(ID param_1)

{
  long unaff_x19;
  
  _objc_msgSend(param_1,*(SEL *)(unaff_x19 + 0x58));
  return;
}



/* Address: 0x100b8ad74 | FUN_100b8ad74 */

undefined1 * FUN_100b8ad74(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100b8add0(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100b8add0 | FUN_100b8add0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b8aec8) */
/* WARNING: Removing unreachable block (ram,0x000100b8ae88) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b8aebc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100b8add0(ID param_1)

{
  undefined *puVar1;
  __int64 _Var2;
  NSString *pNVar3;
  ID IVar4;
  long lVar5;
  ID unaff_x20;
  long unaff_x21;
  long lVar6;
  String SVar7;
  undefined1 local_51;
  
  puVar1 = &DAT_101045b78;
  FUN_100b6730c();
  lVar6 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  IVar4 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100b8b200();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar7 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    _Var2 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    _objc_allocWithZone();
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    IVar4 = _objc_msgSend(unaff_x20,"initWithDomain:code:",pNVar3,_Var2);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar1)
    ;
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return IVar4;
}



/* Address: 0x100b8af78 | FUN_100b8af78 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b8af78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NSString *pNVar1;
  ID IVar2;
  
  _swift_getObjectType();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithDomain:code:",pNVar1,
                              param_3);
  return IVar2;
}



/* Address: 0x100b8b004 | _TtC6Sentry22SentryNSErrorDecodable::initWithDomain:code: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry22SentryNSErrorDecodable::initWithDomain_code_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  FUN_100b8af78(pcVar1,SVar2.bridgeObject,param_4);
  return (ID)pcVar1;
}



/* Address: 0x100b8b034 | FUN_100b8b034 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b8b034(void)

{
  return ZEXT816(0x100fa0df8);
}



/* Address: 0x100b8b054 | FUN_100b8b054 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b8b088 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_100b8b054(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100b8b0b8 | FUN_100b8b0b8 */

undefined1  [16] FUN_100b8b0b8(ulong param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = (param_1 & 1) == 0;
  uVar1 = 0x65646f63;
  if (bVar3) {
    uVar1 = 0x6e69616d6f64;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar3) {
    puVar2 = &DAT_e600000000000000;
  }
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Address: 0x100b8b0e4 | FUN_100b8b0e4 */

void FUN_100b8b0e4(undefined1 *param_1,undefined1 *param_2)

{
  switchD_100bec310::caseD_bb(*param_1,*param_2);
  return;
}



/* Address: 0x100b8b0f0 | FUN_100b8b0f0 */

void FUN_100b8b0f0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec818(*unaff_x20);
  return;
}



/* Address: 0x100b8b0f8 | FUN_100b8b0f8 */

void FUN_100b8b0f8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed088(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b8b100 | FUN_100b8b100 */

void FUN_100b8b100(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed3a0(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b8b108 | FUN_100b8b108 */

void FUN_100b8b108(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b8b054(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100b8b134 | FUN_100b8b134 */

void FUN_100b8b134(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b8b0b8();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b8b15c | FUN_100b8b15c */

void FUN_100b8b15c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b8b0b8(*unaff_x20);
  return;
}



/* Address: 0x100b8b164 | FUN_100b8b164 */

void FUN_100b8b164(undefined1 *param_1,undefined1 param_2)

{
  FUN_100b8b054();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b8b188 | FUN_100b8b188 */

String FUN_100b8b188(void)

{
  String SVar1;
  
  FUN_100b8b200();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b8b1b0 | FUN_100b8b1b0 */

String FUN_100b8b1b0(void)

{
  String SVar1;
  
  FUN_100b8b200();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}


