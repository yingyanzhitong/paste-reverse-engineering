/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bf0294 | thunk_FUN_100befb2c */

void thunk_FUN_100befb2c(void)

{
  FUN_100befb2c();
  return;
}



/* Address: 0x100bf0298 | FUN_100bf0298 */

void FUN_100bf0298(void)

{
  FUN_100befd48(0);
  return;
}



/* Address: 0x100bf02a0 | FUN_100bf02a0 */

undefined1  [16] FUN_100bf02a0(Date param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_28 = &DAT_100c9fc08;
    uVar2 = 0x100;
    local_30 = puStack_38;
    _swift_updateClassMetadata2(param_1.unknown,0x100,4,&local_40,param_1.unknown + 0x50);
    if (param_1.unknown == (undefined *)0x0) {
      param_1.unknown = (undefined *)0x0;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3f;
    param_1 = DVar1;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1.unknown;
  return auVar3;
}



/* Address: 0x100bf0324 | FUN_100bf0324 */

void FUN_100bf0324(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd0fa4);
  return;
}



/* Address: 0x100bf0330 | FUN_100bf0330 */

void FUN_100bf0330(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf0334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x88))();
  return;
}



/* Address: 0x100bf0338 | FUN_100bf0338 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bf0338(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  undefined *self;
  ID IVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  bVar3 = (param_4 & 1) == 0;
  uVar5 = 0x656d5f6563617274;
  if (bVar3) {
    uVar5 = 0x676f6c;
  }
  uVar8 = 0xec00000063697274;
  if (bVar3) {
    uVar8 = 0xe300000000000000;
  }
  uVar1 = 0xd00000000000002e;
  if (bVar3) {
    uVar1 = 0xd000000000000025;
  }
  self = &_OBJC_CLASS___NSNumber;
  pcVar2 = "eduler";
  if (bVar3) {
    pcVar2 = "sentry.items.trace-metric+json";
  }
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(uVar8);
  IVar4 = _objc_msgSend((ID)self,"initWithInteger:",param_3);
  FUN_100bdb954(0);
  _objc_allocWithZone();
  FUN_100b6d4e0(param_1,param_2);
  FUN_100bd9a1c(uVar5,uVar8,param_1,param_2,uVar1,(ulong)pcVar2 | 0x8000000000000000,IVar4);
  _swift_bridgeObjectRelease(uVar8);
  lVar6 = 0;
  FUN_100bc0560();
  FUN_100bc01cc();
  lVar7 = lVar6;
  FUN_100b936cc();
  _swift_allocObject();
  *(undefined8 *)(lVar7 + 0x18) = 3;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  *(undefined8 *)(lVar7 + 0x20) = uVar5;
  FUN_100ba7bd8(0);
  _objc_allocWithZone();
  FUN_100ba7a24(lVar6,lVar7);
  _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"sendEnvelopeWithEnvelope:",lVar6);
  return 0;
}



/* Address: 0x100bf04f4 | FUN_100bf04f4 */

void FUN_100bf04f4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100bf0518 | FUN_100bf0518 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bf0518(void)

{
  return ZEXT816(0x101048af0);
}



/* Address: 0x100bf0538 | FUN_100bf0538 */

undefined8 FUN_100bf0538(long param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x746e657665;
  if ((param_1 == 0x746e657665 && param_2 == &DAT_e500000000000000) ||
     (FUN_100bf07e4(0x746e657665,&DAT_e500000000000000), (uVar1 & 1) != 0)) {
    FUN_100b6f838();
    uVar2 = 2;
  }
  else {
    uVar1 = 0x6e6f6973736573;
    if ((param_1 == 0x6e6f6973736573 && param_2 == &DAT_e700000000000000) ||
       (FUN_100bf07e4(0x6e6f6973736573,&DAT_e700000000000000), (uVar1 & 1) != 0)) {
      FUN_100b6f838();
      uVar2 = 3;
    }
    else {
      uVar1 = 0;
      if ((param_1 == 0x746361736e617274 && param_2 == &DAT_eb000000006e6f69) ||
         (FUN_100bf07e4(), (uVar1 & 1) != 0)) {
        FUN_100b6f838();
        uVar2 = 4;
      }
      else {
        uVar1 = 0x656d686361747461;
        if ((param_1 == 0x656d686361747461 && param_2 == (undefined1 *)0xea0000000000746e) ||
           (FUN_100bf07e4(0x656d686361747461,0xea0000000000746e), (uVar1 & 1) != 0)) {
          FUN_100b6f838();
          uVar2 = 5;
        }
        else {
          uVar1 = 0;
          if ((param_1 == 0x656c69666f7270 && param_2 == &DAT_e700000000000000) ||
             (FUN_100bf07e4(0x656c69666f7270,&DAT_e700000000000000), (uVar1 & 1) != 0)) {
            FUN_100b6f838();
            uVar2 = 7;
          }
          else {
            uVar1 = 0;
            if ((param_1 == 0x5f656c69666f7270 && param_2 == (undefined1 *)0xed00006b6e756863) ||
               (FUN_100bf07e4(), (uVar1 & 1) != 0)) {
              FUN_100b6f838();
              uVar2 = 10;
            }
            else {
              uVar1 = 0;
              if ((param_1 == 0x765f79616c706572 && param_2 == (undefined1 *)0xec0000006f656469) ||
                 (FUN_100bf07e4(), (uVar1 & 1) != 0)) {
                FUN_100b6f838();
                uVar2 = 9;
              }
              else {
                uVar1 = 0;
                if ((param_1 == 0x6b63616264656566 && param_2 == &DAT_e800000000000000) ||
                   (FUN_100bf07e4(0x6b63616264656566,&DAT_e800000000000000), (uVar1 & 1) != 0)) {
                  FUN_100b6f838();
                  uVar2 = 0xc;
                }
                else {
                  uVar1 = 0x647374617473;
                  if ((param_1 == 0x647374617473 && param_2 == &DAT_e600000000000000) ||
                     (FUN_100bf07e4(0x647374617473,&DAT_e600000000000000), (uVar1 & 1) != 0)) {
                    FUN_100b6f838();
                    uVar2 = 8;
                  }
                  else {
                    if (param_1 != 0x676f6c || param_2 != (undefined1 *)0xe300000000000000) {
                      uVar1 = 0;
                      FUN_100bf07e4(0x676f6c,0xe300000000000000);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = 0;
                        if (param_1 == 0x656d5f6563617274 &&
                            param_2 == (undefined1 *)0xec00000063697274) {
                          FUN_100b6f838();
                          return 0xe;
                        }
                        FUN_100bf07e4();
                        FUN_100b6f838();
                        if ((uVar1 & 1) != 0) {
                          return 0xe;
                        }
                        return 1;
                      }
                    }
                    FUN_100b6f838();
                    uVar2 = 0xd;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}



/* Address: 0x100bf07e4 | FUN_100bf07e4 */

void FUN_100bf07e4(_StringGuts param_1,_StringGuts param_2)

{
  _StringComparisonResult unaff_w20;
  
  Swift::_stringCompareWithSmolCheck(param_1,param_2,unaff_w20);
  return;
}



/* Address: 0x100bf07f4 | _TtC6Sentry21SentrySamplerDecision::decision */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry21SentrySamplerDecision::decision(ID param_1,SEL param_2)

{
  FUN_100bf0814();
  return param_1;
}



/* Address: 0x100bf0814 | FUN_100bf0814 */

undefined8 FUN_100bf0814(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentrySamplerDecision::decision);
}



/* Address: 0x100bf0824 | _TtC6Sentry21SentrySamplerDecision::sampleRand */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentrySamplerDecision::sampleRand(ID param_1,SEL param_2)

{
  FUN_100bf0844();
  return param_1;
}



/* Address: 0x100bf0844 | FUN_100bf0844 */

void FUN_100bf0844(void)

{
  FUN_100bc06d4(_TtC6Sentry21SentrySamplerDecision::sampleRand);
  return;
}



/* Address: 0x100bf086c | _TtC6Sentry21SentrySamplerDecision::sampleRate */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentrySamplerDecision::sampleRate(ID param_1,SEL param_2)

{
  FUN_100bf088c();
  return param_1;
}



/* Address: 0x100bf088c | FUN_100bf088c */

void FUN_100bf088c(void)

{
  FUN_100bc06d4(_TtC6Sentry21SentrySamplerDecision::sampleRate);
  return;
}



/* Address: 0x100bf08b4 | FUN_100bf08b4 */

void FUN_100bf08b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_allocWithZone();
  FUN_100bf08fc(param_1,param_2,param_3);
  return;
}



/* Address: 0x100bf08fc | FUN_100bf08fc */

void FUN_100bf08fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentrySamplerDecision::decision) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentrySamplerDecision::sampleRate) = param_2;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry21SentrySamplerDecision::sampleRand) = param_3;
  FUN_100bf0950();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bf0950 | FUN_100bf0950 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bf0950(void)

{
  return ZEXT816(0x100fa6218);
}



/* Address: 0x100bf0970 | _TtC6Sentry21SentrySamplerDecision::initWithDecision:forSampleRate:withSampleRand: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry21SentrySamplerDecision::initWithDecision_forSampleRate_withSampleRand_
             (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  FUN_100bf08fc(param_3,param_4,param_5);
  return param_3;
}



/* Address: 0x100bf09c4 | FUN_100bf09c4 */

void FUN_100bf09c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentrySamplerDecision",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf09f0);
  (*pcVar1)();
}



/* Address: 0x100bf09f0 | _TtC6Sentry21SentrySamplerDecision::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentrySamplerDecision::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100bf09c4();
  FUN_100bf0950();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100bf09fc | FUN_100bf09fc */

void FUN_100bf09fc(void)

{
  FUN_100bf0950();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bf0a2c | _TtC6Sentry21SentrySamplerDecision::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry21SentrySamplerDecision::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bf0a64 | FUN_100bf0a64 */

void FUN_100bf0a64(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cd1060);
  return;
}



/* Address: 0x100bf0a70 | FUN_100bf0a70 */

void FUN_100bf0a70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf0a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Address: 0x100bf0a78 | FUN_100bf0a78 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 * FUN_100bf0a78(long param_1,void *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  puVar5 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  pvVar3 = __Block_copy(param_2);
  puVar4 = &DAT_100f3d3f0;
  _swift_allocObject(&DAT_100f3d3f0,0x18,7);
  *(void **)(puVar4 + 0x10) = pvVar3;
  _swift_retain(uVar2);
  (*pcVar1)(auStack_50,FUN_100166ac0,puVar4);
  _swift_release(uVar2);
  _swift_release(puVar4);
  FUN_100004640(auStack_50,local_38);
  Swift::__bridgeAnythingToObjectiveC();
  FUN_100004594(auStack_50);
  return puVar5;
}



/* Address: 0x100bf0b20 | FUN_100bf0b20 */

void FUN_100bf0b20(undefined1 *param_1,ulong param_2)

{
  if (2 < param_2) {
    param_2 = 3;
  }
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x100bf0b34 | FUN_100bf0b34 */

void FUN_100bf0b34(undefined1 *param_1,undefined1 *param_2)

{
  thunk_FUN_1001a7d78(*param_1,*param_2);
  return;
}



/* Address: 0x100bf0b40 | FUN_100bf0b40 */

void FUN_100bf0b40(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_100bec98c(*unaff_x20);
  return;
}



/* Address: 0x100bf0b48 | FUN_100bf0b48 */

void FUN_100bf0b48(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_1001a7d88(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bf0b50 | FUN_100bf0b50 */

void FUN_100bf0b50(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_100bed42c(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bf0b58 | FUN_100bf0b58 */

void FUN_100bf0b58(undefined8 *param_1)

{
  FUN_100bf0b20(*param_1);
  return;
}



/* Address: 0x100bf0b60 | FUN_100bf0b60 */

void FUN_100bf0b60(undefined8 *param_1,undefined8 param_2)

{
  FUN_100011938();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bf0b84 | FUN_100bf0b84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

bool FUN_100bf0b84(SEL param_1,CLASS param_2,byte *param_3,const_void__ param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  void *aBlock;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  bVar1 = *param_3;
  _swift_getObjCClassFromMetadata();
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100bf0a78;
  puStack_68 = &DAT_100f3d308;
  local_60 = param_5;
  local_58 = param_6;
  aBlock = __Block_copy(&local_80);
  uVar2 = local_58;
  _swift_retain(param_6);
  _swift_release(uVar2);
  bVar3 = SentrySwizzleWrapperHelper::swizzleInstanceMethod_inClass_mode_key_factory_
                    ((ID)&objc::class_t::SentrySwizzleWrapperHelper,
                     "swizzleInstanceMethod:inClass:mode:key:factory:",param_1,param_2,(ulong)bVar1,
                     param_4,(ID)aBlock,param_8);
  __Block_release(aBlock);
  return bVar3;
}



/* Address: 0x100bf0c74 | FUN_100bf0c74 */

void FUN_100bf0c74(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bf0c84 | FUN_100bf0c84 */

void FUN_100bf0c84(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bf0c8c | thunk_FUN_100bf0c90 */

void thunk_FUN_100bf0c90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048b90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9fcac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9fcac,&DAT_100f3d3d0);
  DAT_101048b90 = pTVar1;
  return;
}



/* Address: 0x100bf0c90 | FUN_100bf0c90 */

void FUN_100bf0c90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048b90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9fcac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9fcac,&DAT_100f3d3d0);
  DAT_101048b90 = pTVar1;
  return;
}



/* Address: 0x100bf0cd0 | FUN_100bf0cd0 */

undefined1  [16] FUN_100bf0cd0(void)

{
  return ZEXT816(0x100f3d340);
}



/* Address: 0x100bf0ce0 | FUN_100bf0ce0 */

void FUN_100bf0ce0(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100bf0d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bf0d2c + (ulong)(byte)(&DAT_100c9fca5)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100bf0d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bf0d60 + (ulong)(byte)(&DAT_100c9fca0)[uVar1] * 4))();
  return;
}



/* Address: 0x100bf0d9c | FUN_100bf0d9c */

undefined1  [16] FUN_100bf0d9c(void)

{
  return ZEXT816(0x100f3d3d0);
}



/* Address: 0x100bf0dac | FUN_100bf0dac */

void FUN_100bf0dac(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bf0dd0 | FUN_100bf0dd0 */

undefined1  [16] FUN_100bf0dd0(void)

{
  DateEncodingStrategy DVar1;
  undefined7 extraout_var;
  JSONEncoder *pJVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  DVar1 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  pJVar2 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar2,*(undefined4 *)(pJVar2 + 0x30),*(undefined2 *)(pJVar2 + 0x34));
  pJVar2 = Foundation::JSONEncoder::init(pJVar2);
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffc0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_secondsSince1970_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6aa8
             ,CONCAT71(extraout_var,DVar1.value));
  Foundation::JSONEncoder::set_dateEncodingStrategy
            (pJVar2,(DateEncodingStrategy)
                    (__int8)(&stack0xffffffffffffffc0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)));
  uVar3 = 0;
  FUN_100bea018(0);
  FUN_100003a00(&DAT_101048840,FUN_100bea018,&DAT_100c9f67c);
  auVar6._0_8_ = Foundation::JSONEncoder::_encode();
  _swift_release(pJVar2);
  auVar6._8_8_ = uVar3;
  return auVar6;
}



/* Address: 0x100bf0ecc | FUN_100bf0ecc */

undefined1  [16] FUN_100bf0ecc(undefined8 param_1)

{
  DateEncodingStrategy DVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  JSONEncoder *pJVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  uVar2 = param_1;
  _swift_getObjectType();
  DVar1 = Foundation::JSONEncoder::DateEncodingStrategy::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  local_48 = param_1;
  pJVar3 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
  pJVar3 = Foundation::JSONEncoder::init(pJVar3);
  (**(code **)(lVar5 + 0x68))
            (auStack_50 + -(lVar4 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___enum_case_for_Foundation_JSONEncoder_DateEncodingStrategy_secondsSince1970_Foundation_JSONEncoder_DateEncodingStrategy_Type___>_Foundation_JSONEncoder_DateEncodingStrategy_100ea6aa8
             ,CONCAT71(extraout_var,DVar1.value));
  Foundation::JSONEncoder::set_dateEncodingStrategy
            (pJVar3,(DateEncodingStrategy)
                    (__int8)(auStack_50 + -(lVar4 + 0xfU & 0xfffffffffffffff0)));
  FUN_100003a00(&DAT_101047e08,FUN_100bd5fac,&DAT_100c9e320);
  auVar6._0_8_ = Foundation::JSONEncoder::_encode();
  _swift_release(pJVar3);
  auVar6._8_8_ = uVar2;
  return auVar6;
}



/* Address: 0x100bf0fcc | FUN_100bf0fcc */

/* WARNING: Removing unreachable block (ram,0x000100bf0ff4) */

__int64 FUN_100bf0fcc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  __int64 _Var2;
  Data unaff_x20;
  
  FUN_100bf0ecc();
  _Var2 = Foundation::Data::get_count(unaff_x20);
  FUN_10003bf2c(unaff_x20.unknown,param_2);
  if (-1 < _Var2) {
    return _Var2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bf10f8);
  (*pcVar1)();
}



/* Address: 0x100bf10f8 | FUN_100bf10f8 */

void FUN_100bf10f8(void)

{
  FUN_100bf0fcc();
  return;
}



/* Address: 0x100bf1118 | _TtC6Sentry21SentryLogClientReport::serializedByteCountForLog: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

unsigned_long_long
_TtC6Sentry21SentryLogClientReport::serializedByteCountForLog_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bf10f8();
  return param_3;
}



/* Address: 0x100bf1150 | FUN_100bf1150 */

void FUN_100bf1150(void)

{
  FUN_100bf1180();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bf1180 | FUN_100bf1180 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bf1180(void)

{
  return ZEXT816(0x100fa62e8);
}



/* Address: 0x100bf11a0 | _TtC6Sentry21SentryLogClientReport::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryLogClientReport::init(ID param_1,SEL param_2)

{
  FUN_100bf1150();
  return param_1;
}



/* Address: 0x100bf11c0 | FUN_100bf11c0 */

void FUN_100bf11c0(void)

{
  FUN_100bf1180();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bf11f0 | FUN_100bf11f0 */

void FUN_100bf11f0(void)

{
  FUN_100bf1570();
  _objc_allocWithZone();
  FUN_100bf13bc();
  return;
}



/* Address: 0x100bf122c | _TtC6Sentry17SentryCrashBridge::notificationCenterWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryCrashBridge::notificationCenterWrapper(ID param_1,SEL param_2)

{
  FUN_100bf124c();
  return param_1;
}



/* Address: 0x100bf124c | FUN_100bf124c */

void FUN_100bf124c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain
            (*(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::notificationCenterWrapper))
  ;
  return;
}



/* Address: 0x100bf125c | _TtC6Sentry17SentryCrashBridge::dateProvider */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryCrashBridge::dateProvider(ID param_1,SEL param_2)

{
  FUN_100bf127c();
  return param_1;
}



/* Address: 0x100bf127c | FUN_100bf127c */

void FUN_100bf127c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain
            (*(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::dateProvider));
  return;
}



/* Address: 0x100bf128c | _TtC6Sentry17SentryCrashBridge::crashReporter */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry17SentryCrashBridge::crashReporter(ID param_1,SEL param_2)

{
  FUN_100bf12ac();
  return param_1;
}



/* Address: 0x100bf12ac | FUN_100bf12ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bf12ac(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::crashReporter);
}



/* Address: 0x100bf12bc | _TtC6Sentry17SentryCrashBridge::uncaughtExceptionHandler */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

undefined4 * _TtC6Sentry17SentryCrashBridge::uncaughtExceptionHandler(ID param_1,SEL param_2)

{
  FUN_100bf12f0();
  return (undefined4 *)param_1;
}



/* Address: 0x100bf12f0 | FUN_100bf12f0 */

void FUN_100bf12f0(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(*(long *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::crashReporter) +
                       _TtC6Sentry16SentryCrashSwift::sentryCrash),"uncaughtExceptionHandler");
  return;
}



/* Address: 0x100bf1314 | _TtC6Sentry17SentryCrashBridge::setUncaughtExceptionHandler: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry17SentryCrashBridge::setUncaughtExceptionHandler_
               (ID param_1,SEL param_2,undefined4 *param_3)

{
  FUN_100bf1344(param_3);
  return;
}



/* Address: 0x100bf1344 | FUN_100bf1344 */

void FUN_100bf1344(undefined8 param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(*(long *)(unaff_x20 + _TtC6Sentry17SentryCrashBridge::crashReporter) +
                       _TtC6Sentry16SentryCrashSwift::sentryCrash),"setUncaughtExceptionHandler:",
                param_1);
  return;
}



/* Address: 0x100bf136c | FUN_100bf136c */

undefined1  [16] FUN_100bf136c(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_100bf12f0();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100bf13a0;
  return auVar2;
}


