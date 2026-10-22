/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10020bd78 | FUN_10020bd78 */

void FUN_10020bd78(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  MainActor *pMVar9;
  undefined8 uVar10;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  long lStack_78;
  
  uVar10 = *param_1;
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    _swift_retain(uVar2);
    _swift_release();
    (*pcVar1)();
    _swift_release(uVar2);
    lVar8 = *(long *)(param_2 + 0x10);
    if (lVar8 != 0) {
      this = Swift::MainActor::typeMetadataAccessor();
      pMVar9 = (MainActor *)(param_2 + 0x20);
      do {
        pMVar4 = pMVar9;
        FUN_100076688(pMVar9,auStack_98);
        pMVar5 = Swift::MainActor::get_shared(this,pMVar4);
        pMVar4 = pMVar5;
        FUN_1001f7290();
        UVar6 = Swift::Actor::get_unownedExecutor();
        UVar7 = UVar6;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar7.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/SizeClassTransitionManager.swift",0x28,1,0x1e,UVar6.unknown,pMVar4);
        }
        lVar3 = lStack_78;
        uVar2 = local_80;
        FUN_100004640(auStack_98,local_80);
        (**(code **)(lVar3 + 8))(uVar10,param_3,param_4,uVar2,lVar3);
        _swift_release(pMVar5);
        FUN_100004594(auStack_98);
        pMVar9 = pMVar9 + 0x28;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Address: 0x10020bee0 | FUN_10020bee0 */

void FUN_10020bee0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10020bf04 | FUN_10020bf04 */

void FUN_10020bf04(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10020bd78(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x19));
  return;
}



/* Address: 0x10020bf14 | FUN_10020bf14 */

void FUN_10020bf14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10020bf38 | FUN_10020bf38 */

void FUN_10020bf38(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10020bf64 | FUN_10020bf64 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10020bf64(void)

{
  return ZEXT816(0x100fb6c18);
}



/* Address: 0x10020bf84 | FUN_10020bf84 */

void FUN_10020bf84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x10020bfb8 | FUN_10020bfb8 */

void FUN_10020bfb8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    pTVar1 = &TargetProtocolConformanceDescriptor_100c34d10;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c34d10,param_2);
    *param_1 = (long)pTVar1;
  }
  return;
}



/* Address: 0x10020bffc | FUN_10020bffc */

void FUN_10020bffc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x10020c030 | FUN_10020c030 */

undefined1  [16] FUN_10020c030(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea0000000000656d;
  auVar1._0_8_ = 0x614e6d6574737973;
  return auVar1;
}



/* Address: 0x10020c04c | FUN_10020c04c */

void FUN_10020c04c(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x614e6d6574737973 && param_3 == -0x15ffffffffff9a93) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x614e6d6574737973,(_StringGuts)0xea0000000000656d,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x10020c0d8 | FUN_10020c0d8 */

void FUN_10020c0d8(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Address: 0x10020c0e4 | FUN_10020c0e4 */

String FUN_10020c0e4(void)

{
  String SVar1;
  
  FUN_10020c248();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10020c10c | FUN_10020c10c */

String FUN_10020c10c(void)

{
  String SVar1;
  
  FUN_10020c248();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10020c134 | FUN_10020c134 */

bool FUN_10020c134(_StringGuts param_1,_StringGuts param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
  
  if ((param_1.unknown == param_3) && (param_2.unknown == param_4)) {
    return true;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    (param_1,param_2,(_StringComparisonResult)(__int8)param_3);
  return bVar1;
}



/* Address: 0x10020c154 | FUN_10020c154 */

void FUN_10020c154(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fb6ca0;
  FUN_1000037f0(&DAT_100fb6ca0,&DAT_100c360b0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10020c248();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10020c248 | FUN_10020c248 */

void FUN_10020c248(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb6ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36250;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36250,&DAT_100ec1760);
  DAT_100fb6ca8 = pTVar1;
  return;
}



/* Address: 0x10020c288 | /usr/lib/swift/libswiftCore.dylib::Swift::String::hash */

void Swift::String::hash(Hasher into,String param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100bf7d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_hash_100eac0e8)(into.unknown,param_2.str,param_2.bridgeObject);
  return;
}



/* Address: 0x10020c28c | FUN_10020c28c */

void FUN_10020c28c(char *param_1,void *param_2)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10020c2d8 | FUN_10020c2d8 */

String FUN_10020c2d8(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  
  puVar2 = &DAT_100fb6cb0;
  FUN_1000037f0(&DAT_100fb6cb0,&DAT_100c360b8);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar6.bridgeObject = pvVar1;
  SVar6.str = pcVar3;
  FUN_10020c248();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar6 = Swift::KeyedDecodingContainer::_decode(KVar4.unknown,puVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return SVar6;
}



/* Address: 0x10020c3e8 | FUN_10020c3e8 */

bool FUN_10020c3e8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if ((undefined *)*param_1 != (undefined *)*param_2 ||
      (undefined *)param_1[1] != (undefined *)param_2[1]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    return bVar1;
  }
  return true;
}



/* Address: 0x10020c418 | FUN_10020c418 */

void FUN_10020c418(void)

{
  String SVar1;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  SVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10020c460 | FUN_10020c460 */

void FUN_10020c460(Hasher param_1)

{
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  return;
}



/* Address: 0x10020c468 | FUN_10020c468 */

void FUN_10020c468(__int64 param_1)

{
  String SVar1;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  SVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10020c4ac | FUN_10020c4ac */

/* WARNING: Removing unreachable block (ram,0x00010020c570) */

void FUN_10020c4ac(String *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  
  puVar1 = &DAT_100fb6cb0;
  FUN_1000037f0(&DAT_100fb6cb0,&DAT_100c360b8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10020c248();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar4 = Swift::KeyedDecodingContainer::_decode(KVar2.unknown,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = SVar4;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10020c5d4 | FUN_10020c5d4 */

void FUN_10020c5d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fb6ca0;
  FUN_1000037f0(&DAT_100fb6ca0,&DAT_100c360b0);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10020c248();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10020c6c4 | FUN_10020c6c4 */

char * FUN_10020c6c4(void)

{
  return "add.badge";
}



/* Address: 0x10020c6d0 | FUN_10020c6d0 */

undefined1  [16] FUN_10020c6d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000065;
  auVar1._0_8_ = 0x676461622e646461;
  return auVar1;
}



/* Address: 0x10020c6ec | FUN_10020c6ec */

char * FUN_10020c6ec(void)

{
  return "app.badge";
}



/* Address: 0x10020c6f8 | FUN_10020c6f8 */

undefined1  [16] FUN_10020c6f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000065;
  auVar1._0_8_ = 0x676461622e707061;
  return auVar1;
}



/* Address: 0x10020c714 | FUN_10020c714 */

char * FUN_10020c714(void)

{
  return "app.dashed";
}



/* Address: 0x10020c720 | FUN_10020c720 */

undefined1  [16] FUN_10020c720(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006465;
  auVar1._0_8_ = 0x687361642e707061;
  return auVar1;
}



/* Address: 0x10020c73c | FUN_10020c73c */

undefined * FUN_10020c73c(void)

{
  return &DAT_100ec13b0;
}



/* Address: 0x10020c748 | FUN_10020c748 */

undefined1  [16] FUN_10020c748(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e0f0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Address: 0x10020c764 | FUN_10020c764 */

undefined * FUN_10020c764(void)

{
  return &DAT_100c35af0;
}



/* Address: 0x10020c770 | FUN_10020c770 */

undefined1  [16] FUN_10020c770(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef657369776b636f;
  auVar1._0_8_ = 0x6c632e776f727261;
  return auVar1;
}



/* Address: 0x10020c794 | FUN_10020c794 */

undefined * FUN_10020c794(void)

{
  return &DAT_100ec13c0;
}



/* Address: 0x10020c7a0 | FUN_10020c7a0 */

undefined1  [16] FUN_10020c7a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e110;
  auVar1._0_8_ = 0xd00000000000001b;
  return auVar1;
}



/* Address: 0x10020c7bc | FUN_10020c7bc */

undefined * FUN_10020c7bc(void)

{
  return &DAT_100ec13d0;
}



/* Address: 0x10020c7c8 | FUN_10020c7c8 */

undefined1  [16] FUN_10020c7c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e130;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x10020c7e4 | FUN_10020c7e4 */

undefined * FUN_10020c7e4(void)

{
  return &DAT_100ec13e0;
}



/* Address: 0x10020c7f0 | FUN_10020c7f0 */

undefined1  [16] FUN_10020c7f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e150;
  auVar1._0_8_ = 0xd00000000000002f;
  return auVar1;
}



/* Address: 0x10020c80c | FUN_10020c80c */

char * FUN_10020c80c(void)

{
  return "arrow.forward";
}



/* Address: 0x10020c818 | FUN_10020c818 */

undefined1  [16] FUN_10020c818(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006472617772;
  auVar1._0_8_ = 0x6f662e776f727261;
  return auVar1;
}



/* Address: 0x10020c83c | FUN_10020c83c */

char * FUN_10020c83c(void)

{
  return "arrow.up";
}



/* Address: 0x10020c848 | FUN_10020c848 */

undefined1  [16] FUN_10020c848(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x70752e776f727261;
  return auVar1;
}



/* Address: 0x10020c860 | FUN_10020c860 */

undefined * FUN_10020c860(void)

{
  return &DAT_100ec13f0;
}



/* Address: 0x10020c86c | FUN_10020c86c */

undefined1  [16] FUN_10020c86c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e180;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x10020c888 | FUN_10020c888 */

undefined * FUN_10020c888(void)

{
  return &DAT_100ec1400;
}



/* Address: 0x10020c894 | FUN_10020c894 */

undefined1  [16] FUN_10020c894(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e1a0;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x10020c8b0 | FUN_10020c8b0 */

undefined * FUN_10020c8b0(void)

{
  return &DAT_100ec1410;
}



/* Address: 0x10020c8bc | FUN_10020c8bc */

undefined1  [16] FUN_10020c8bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e1c0;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Address: 0x10020c8d8 | FUN_10020c8d8 */

undefined * FUN_10020c8d8(void)

{
  return &DAT_100c35b20;
}



/* Address: 0x10020c8e4 | FUN_10020c8e4 */

undefined1  [16] FUN_10020c8e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &SUB_e200000000000000;
  auVar1._0_8_ = 0x7461;
  return auVar1;
}



/* Address: 0x10020c8f0 | FUN_10020c8f0 */

char * FUN_10020c8f0(void)

{
  return "bell.fill";
}



/* Address: 0x10020c8fc | FUN_10020c8fc */

undefined1  [16] FUN_10020c8fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe90000000000006c;
  auVar1._0_8_ = 0x6c69662e6c6c6562;
  return auVar1;
}



/* Address: 0x10020c918 | FUN_10020c918 */

undefined * FUN_10020c918(void)

{
  return &DAT_100c35b40;
}



/* Address: 0x10020c924 | FUN_10020c924 */

undefined1  [16] FUN_10020c924(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x646c6f62;
  return auVar1;
}



/* Address: 0x10020c934 | FUN_10020c934 */

char * FUN_10020c934(void)

{
  return "calendar";
}



/* Address: 0x10020c940 | FUN_10020c940 */

undefined1  [16] FUN_10020c940(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x7261646e656c6163;
  return auVar1;
}



/* Address: 0x10020c958 | FUN_10020c958 */

undefined * FUN_10020c958(void)

{
  return &DAT_100ec1420;
}



/* Address: 0x10020c964 | FUN_10020c964 */

undefined1  [16] FUN_10020c964(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d9e1e0;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Address: 0x10020c980 | FUN_10020c980 */

char * FUN_10020c980(void)

{
  return "checkmark";
}



/* Address: 0x10020c98c | FUN_10020c98c */

undefined1  [16] FUN_10020c98c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe90000000000006b;
  auVar1._0_8_ = 0x72616d6b63656863;
  return auVar1;
}


