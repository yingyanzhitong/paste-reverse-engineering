/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b7319c | FUN_100b7319c */

void FUN_100b7319c(void)

{
  code *pcVar1;
  kern_return_t kVar2;
  long lVar3;
  mach_msg_type_number_t local_1a0;
  integer_t aiStack_19c [12];
  ulong local_16c;
  ulong local_124;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _bzero(aiStack_19c,0x174);
  local_1a0 = 0x5d;
  kVar2 = _task_info(*(task_name_t *)PTR__mach_task_self__100ea8778,0x16,aiStack_19c,&local_1a0);
  if (kVar2 == 0) {
    lVar3 = local_16c + local_124;
    if (CARRY8(local_16c,local_124)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b73234);
      (*pcVar1)();
    }
  }
  else {
    lVar3 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar3);
}



/* Address: 0x100b73238 | _TtC6Sentry26SentryDefaultCrashReporter::introspectMemory */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDefaultCrashReporter::introspectMemory(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b7326c();
  return uVar1 & 1;
}



/* Address: 0x100b7326c | FUN_100b7326c */

void FUN_100b7326c(void)

{
  FUN_100b73278(&PTR_s_introspectMemory_100f85a20);
  return;
}



/* Address: 0x100b73278 | FUN_100b73278 */

void FUN_100b73278(undefined8 *param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 +
                                           _TtC6Sentry26SentryDefaultCrashReporter::bridge) +
                                 _TtC6Sentry17SentryCrashBridge::crashReporter) +
                       _TtC6Sentry16SentryCrashSwift::sentryCrash),(SEL)*param_1);
  return;
}



/* Address: 0x100b732bc | _TtC6Sentry26SentryDefaultCrashReporter::setIntrospectMemory: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry26SentryDefaultCrashReporter::setIntrospectMemory_
               (ID param_1,SEL param_2,bool param_3)

{
  FUN_100b732ec(param_3);
  return;
}



/* Address: 0x100b732ec | FUN_100b732ec */

void FUN_100b732ec(uint param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 +
                                           _TtC6Sentry26SentryDefaultCrashReporter::bridge) +
                                 _TtC6Sentry17SentryCrashBridge::crashReporter) +
                       _TtC6Sentry16SentryCrashSwift::sentryCrash),"setIntrospectMemory:",
                (ulong)(param_1 & 1));
  return;
}



/* Address: 0x100b73328 | FUN_100b73328 */

undefined1  [16] FUN_100b73328(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  puVar1 = param_1;
  FUN_100b7326c();
  *(byte *)(param_1 + 1) = (byte)puVar1 & 1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_100b73360;
  return auVar2;
}



/* Address: 0x100b73360 | FUN_100b73360 */

void FUN_100b73360(long param_1)

{
  FUN_100b732ec(*(undefined1 *)(param_1 + 8));
  FUN_100b56e88();
  return;
}



/* Address: 0x100b73380 | FUN_100b73380 */

void FUN_100b73380(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::systemInfo);
  FUN_100b733ec(param_1,lVar1);
  if (*(long *)(lVar1 + 0x10) != 0) {
    FUN_100b736ac(param_1,lVar1);
    FUN_100b73d2c(param_1,lVar1);
    FUN_100b74290(param_1);
    return;
  }
  return;
}



/* Address: 0x100b733ec | FUN_100b733ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b73438 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_100b733ec(ID param_1,long param_2)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  long lVar3;
  NSDictionary *pNVar4;
  NSString *pNVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  undefined *local_58;
  undefined *local_48;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  ppuVar2 = &local_70;
  local_48 = (undefined *)
             Swift::Dictionary::_init
                       (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  local_58 = puVar1;
  local_70 = (undefined1 *)0x534f63616d;
  puStack_68 = &DAT_e500000000000000;
  uVar6 = 0x656d616e;
  FUN_100b78fe8(&local_70,0x656d616e,&DAT_e400000000000000);
  FUN_100b745a4();
  local_58 = puVar1;
  local_70 = (undefined1 *)ppuVar2;
  puStack_68 = (undefined1 *)uVar6;
  FUN_100b78fe8(&local_70,0x6e6f6973726576,&DAT_e700000000000000);
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_100b73630;
  _swift_bridgeObjectRetain(param_2);
  lVar3 = 0x6f6973726556736f;
  uVar7 = 0;
  FUN_100071370(0x6f6973726556736f);
  if ((uVar7 & 1) == 0) {
    _swift_bridgeObjectRelease(param_2);
    puStack_68 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_58 = (undefined *)0x0;
    uStack_60 = 0;
  }
  else {
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_70);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(&local_70,0x646c697562,&DAT_e500000000000000);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b7357c:
    puStack_68 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_58 = (undefined *)0x0;
    uStack_60 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0x65566c656e72656b;
    uVar7 = 0;
    FUN_100071370(0x65566c656e72656b);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b7357c;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_70);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(&local_70,0x765f6c656e72656b,0xee006e6f69737265);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b7360c:
    puStack_68 = (undefined1 *)0x0;
    local_70 = (undefined1 *)0x0;
    local_58 = (undefined *)0x0;
    uStack_60 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0x72626c69614a7369;
    uVar7 = 0xec0000006e656b6f;
    FUN_100071370(0x72626c69614a7369);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b7360c;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_70);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(&local_70,0x6465746f6f72,&DAT_e600000000000000);
LAB_100b73630:
  puVar1 = local_48;
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(param_1,"setContextValue:forKey:",pNVar4,pNVar5);
  return 0;
}



/* Address: 0x100b736ac | FUN_100b736ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b73708 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_100b736ac(ID param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  long lVar5;
  undefined8 *puVar6;
  Locale LVar7;
  Locale LVar8;
  ID IVar9;
  NSDictionary *pNVar10;
  NSString *pNVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  ID self;
  long lVar14;
  String SVar15;
  undefined8 local_a0;
  long lStack_98;
  undefined1 local_90 [8];
  long lStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_68;
  
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  local_68 = (undefined *)
             Swift::Dictionary::_init
                       (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
  auVar1[0xf] = 0;
  auVar1._0_15_ = stack0xffffffffffffff71;
  _local_90 = (String)(auVar1 << 8);
  FUN_100b78fe8(local_90,0x6f74616c756d6973,0xe900000000000072);
  if (*(long *)(param_2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x614e6d6574737973;
    uVar12 = 0xea0000000000656d;
    FUN_100071370(0x614e6d6574737973);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
    }
    else {
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
      _swift_bridgeObjectRelease(param_2);
      puVar6 = &local_a0;
      _swift_dynamicCast(puVar6,local_90,puVar3 + 8,PTR___type_metadata_for_Swift_String_100eac208,6
                        );
      if (((ulong)puVar6 & 1) != 0) {
        uVar13 = local_a0;
        lVar5 = lStack_98;
        FUN_100b746b4();
        _swift_bridgeObjectRelease(lStack_98);
        local_78 = PTR___type_metadata_for_Swift_String_100eac208;
        if (lVar5 == 0) {
          uVar13 = 0;
          local_80 = 0;
          local_78 = (undefined *)0x0;
        }
        lStack_88 = lVar5;
        local_90 = (undefined1  [8])uVar13;
        FUN_100b78fe8(local_90,0x796c696d6166,&DAT_e600000000000000);
      }
    }
  }
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b7387c:
    _local_90 = (String)ZEXT816(0);
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x6968637241757063;
    uVar12 = 0;
    FUN_100071370(0x6968637241757063);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b7387c;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(local_90,0x68637261,&DAT_e400000000000000);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b738f0:
    _local_90 = (String)ZEXT816(0);
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x656e696863616d;
    uVar12 = 0;
    FUN_100071370(0x656e696863616d);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b738f0;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
    _swift_bridgeObjectRelease(param_2);
  }
  lVar5 = 0x6c65646f6d;
  FUN_100b78fe8(local_90,0x6c65646f6d,&DAT_e500000000000000);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b73960:
    _local_90 = (String)ZEXT816(0);
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar12 = 0;
    FUN_100071370(0x6c65646f6d);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b73960;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(local_90,0x64695f6c65646f6d,&DAT_e800000000000000);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b739e8:
    _local_90 = (String)ZEXT816(0);
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x6f6d654d65657266;
    uVar12 = 0;
    FUN_100071370(0x6f6d654d65657266);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b739e8;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(local_90,0x6d656d5f65657266,0xeb0000000079726f);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b73a70:
    _local_90 = (String)ZEXT816(0);
    local_78 = (undefined *)0x0;
    local_80 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    uVar12 = 0;
    lVar5 = -0x2ffffffffffffff0;
    FUN_100071370(0xd000000000000010);
    if ((uVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b73a70;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(local_90,0x6d5f656c62617375,0xed000079726f6d65);
  if (*(long *)(param_2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0x695379726f6d656d;
    uVar12 = 0;
    FUN_100071370(0x695379726f6d656d);
    if ((uVar12 & 1) != 0) {
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar5 * 0x20,local_90);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b73b00;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  _local_90 = (String)ZEXT816(0);
  local_78 = (undefined *)0x0;
  local_80 = 0;
LAB_100b73b00:
  FUN_100b78fe8(local_90,0x735f79726f6d656d,0xeb00000000657a69);
  LVar7 = Foundation::Locale::typeMetadataAccessor();
  lVar14 = *(long *)(LVar7.unknown + -8);
  lVar5 = *(long *)(lVar14 + 0x40);
  LVar8 = Foundation::Locale::get_autoupdatingCurrent(LVar7);
  SVar15 = Foundation::Locale::get_identifier(LVar8);
  (**(code **)(lVar14 + 8))((long)&local_a0 - (lVar5 + 0xfU & 0xfffffffffffffff0),LVar7.unknown);
  local_78 = puVar2;
  _local_90 = SVar15;
  FUN_100b78fe8(local_90,0x656c61636f6c,&DAT_e600000000000000);
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0xc,0,0);
  if ((bVar4 & 1) != 0) {
    self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper);
    IVar9 = _objc_msgSend(self,"isiOSAppOnMac");
    if ((int)IVar9 != 0) {
      local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_90[0] = 1;
      FUN_100b78fe8(local_90,0xd000000000000010,0x8000000100dc91d0);
    }
    IVar9 = _objc_msgSend(self,"isMacCatalystApp");
    if ((int)IVar9 != 0) {
      local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
      local_90[0] = 1;
      FUN_100b78fe8(local_90,0xd000000000000010,0x8000000100dc91b0);
    }
  }
  IVar9 = _objc_msgSend(*(ID *)(unaff_x20 +
                               _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper),
                        "isiOSAppOnVisionOS");
  if ((int)IVar9 != 0) {
    local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
    local_90[0] = 1;
    FUN_100b78fe8(local_90,0xd000000000000013,0x8000000100dc9190);
  }
  puVar2 = local_68;
  pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar2);
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(param_1,"setContextValue:forKey:",pNVar10,pNVar11);
  return 0;
}



/* Address: 0x100b73d2c | FUN_100b73d2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b73d74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_100b73d2c(ID param_1,long param_2)

{
  undefined *puVar1;
  Dictionary<undefined,undefined> DVar2;
  long lVar3;
  long lVar4;
  NSDictionary *pNVar5;
  NSString *pNVar6;
  ulong uVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *local_58;
  
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  local_58 = (undefined *)
             Swift::Dictionary::_init
                       (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  DVar2.unknown = (undefined *)_objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  FUN_100b93e98();
  if (DVar2.unknown == (undefined *)0x0) {
    DVar2 = Swift::Dictionary::_init
                      (0,PTR___type_metadata_for_Swift_String_100eac208,puVar1 + 8,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                      );
  }
  if (*(long *)(DVar2.unknown + 0x10) == 0) {
LAB_100b73e28:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar2.unknown);
    uVar7 = 0;
    lVar3 = -0x2fffffffffffffee;
    FUN_100071370(0xd000000000000012);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar2.unknown);
      goto LAB_100b73e28;
    }
    FUN_10000cbfc(*(long *)(DVar2.unknown + 0x38) + lVar3 * 0x20,&local_80);
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  uVar7 = 0;
  lVar3 = 0x656c646e75424643;
  FUN_100b78fe8(&local_80,0x6e6564695f707061,0xee00726569666974);
  if (*(long *)(DVar2.unknown + 0x10) == 0) {
LAB_100b73ec0:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar2.unknown);
    lVar4 = lVar3;
    FUN_100071370(0x656c646e75424643);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar2.unknown);
      goto LAB_100b73ec0;
    }
    FUN_10000cbfc(*(long *)(DVar2.unknown + 0x38) + lVar4 * 0x20,&local_80);
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  FUN_100b78fe8(&local_80,0x656d616e5f707061,&DAT_e800000000000000);
  if (*(long *)(DVar2.unknown + 0x10) == 0) {
LAB_100b73f3c:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar2.unknown);
    uVar7 = 0;
    FUN_100071370(0x656c646e75424643);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar2.unknown);
      goto LAB_100b73f3c;
    }
    FUN_10000cbfc(*(long *)(DVar2.unknown + 0x38) + lVar3 * 0x20,&local_80);
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  FUN_100b78fe8(&local_80,0x6c6975625f707061,0xe900000000000064);
  if (*(long *)(DVar2.unknown + 0x10) == 0) {
LAB_100b73fc4:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar2.unknown);
    lVar3 = -0x2fffffffffffffe6;
    uVar7 = 0;
    FUN_100071370(0xd00000000000001a);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar2.unknown);
      goto LAB_100b73fc4;
    }
    FUN_10000cbfc(*(long *)(DVar2.unknown + 0x38) + lVar3 * 0x20,&local_80);
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  _swift_bridgeObjectRelease(DVar2.unknown);
  FUN_100b78fe8(&local_80,0x737265765f707061,&DAT_eb000000006e6f69);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b74050:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0x7472617453707061;
    uVar7 = 0;
    FUN_100071370(0x7472617453707061);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b74050;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_80);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(&local_80,0x726174735f707061,0xee00656d69745f74);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b740e4:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0x7041656369766564;
    uVar7 = 0;
    FUN_100071370(0x7041656369766564);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b740e4;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_80);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(&local_80,0x615f656369766564,0xef687361685f7070);
  if (*(long *)(param_2 + 0x10) == 0) {
LAB_100b74168:
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0x4449707061;
    uVar7 = 0;
    FUN_100071370(0x4449707061);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b74168;
    }
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_80);
    _swift_bridgeObjectRelease(param_2);
  }
  FUN_100b78fe8(&local_80,0x64695f707061,&DAT_e600000000000000);
  if (*(long *)(param_2 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0x707954646c697562;
    uVar7 = 0xe900000000000065;
    FUN_100071370(0x707954646c697562);
    if ((uVar7 & 1) != 0) {
      FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar3 * 0x20,&local_80);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100b741e8;
    }
    _swift_bridgeObjectRelease(param_2);
  }
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
LAB_100b741e8:
  FUN_100b78fe8(&local_80,0x79745f646c697562,0xea00000000006570);
  puVar1 = local_58;
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _objc_msgSend(param_1,"setContextValue:forKey:",pNVar5,pNVar6);
  return 0;
}



/* Address: 0x100b74290 | FUN_100b74290 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b742d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100b74290(ID param_1)

{
  undefined *puVar1;
  byte bVar2;
  ID IVar3;
  NSDictionary *pNVar4;
  NSString *pNVar5;
  long unaff_x20;
  ID self;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_60;
  undefined *local_58;
  
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  local_58 = (undefined *)
             Swift::Dictionary::_init
                       (param_1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Any_100eae0c0 + 8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                       );
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xc,0,0);
  if ((bVar2 & 1) != 0) {
    self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryDefaultCrashReporter::processInfoWrapper);
    IVar3 = _objc_msgSend(self,"isiOSAppOnMac");
    if ((int)IVar3 != 0) {
      local_60 = puVar1;
      local_78 = 0x2070704120534f69;
      uStack_70 = 0xee0063614d206e6f;
      FUN_100b78fe8(&local_78,0x656d616e,&DAT_e400000000000000);
      local_60 = puVar1;
      local_78 = 0x2d7070612d736f69;
      uStack_70 = 0xee0063616d2d6e6f;
      FUN_100b78fe8(&local_78,0x637365645f776172,0xef6e6f6974706972);
    }
    IVar3 = _objc_msgSend(self,"isMacCatalystApp");
    if ((int)IVar3 != 0) {
      local_60 = puVar1;
      local_78 = 0xd000000000000010;
      uStack_70 = 0x8000000100dc9110;
      FUN_100b78fe8(&local_78,0x656d616e,&DAT_e400000000000000);
      local_60 = puVar1;
      local_78 = 0xd000000000000010;
      uStack_70 = 0x8000000100dc9130;
      FUN_100b78fe8(&local_78,0x637365645f776172,0xef6e6f6974706972);
    }
  }
  puVar1 = local_58;
  if (*(long *)(local_58 + 0x10) != 0) {
    pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar1);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _objc_msgSend(param_1,"setContextValue:forKey:",pNVar4,pNVar5);
    return (undefined *)0x0;
  }
  _swift_bridgeObjectRelease(local_58);
  return local_58;
}



/* Address: 0x100b744d8 | FUN_100b744d8 */

void FUN_100b744d8(byte *param_1,byte param_2)

{
  FUN_100b7326c();
  *param_1 = param_2 & 1;
  FUN_100b56e88();
  return;
}



/* Address: 0x100b74500 | FUN_100b74500 */

void FUN_100b74500(undefined1 *param_1)

{
  FUN_100b732ec(*param_1);
  FUN_100b56e88();
  return;
}



/* Address: 0x100b74520 | FUN_100b74520 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b74520(void)

{
  return ZEXT816(0x100f9f830);
}



/* Address: 0x100b74540 | FUN_100b74540 */

void FUN_100b74540(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cccea4);
  return;
}



/* Address: 0x100b7454c | FUN_100b7454c */

void FUN_100b7454c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b74550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Address: 0x100b74554 | _TtC6Sentry26SentryDefaultCrashReporter::enrichScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry26SentryDefaultCrashReporter::enrichScope_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b73380(param_3);
  return;
}



/* Address: 0x100b745a4 | FUN_100b745a4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100b745a4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ID self;
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String local_58;
  
  self = _objc_msgSend((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  _objc_msgSend(self,"operatingSystemVersion",&local_58);
  local_58 = Swift::CustomStringConvertible::get_description();
  SVar1.bridgeObject = (void *)0xe100000000000000;
  SVar1.str = (char *)0x2e;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar1,SVar4);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x2e;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar1,SVar6);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return local_58;
}



/* Address: 0x100b746b4 | FUN_100b746b4 */

undefined1  [16] FUN_100b746b4(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  CharacterSet CVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CharacterSet separatedBy;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar5 = *(long *)(CVar1.unknown + -8);
  separatedBy.unknown =
       (undefined *)((long)&local_50 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_50 = param_1;
  uStack_48 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar1);
  FUN_100008378();
  CVar2.unknown = separatedBy.unknown;
  (extension_Foundation)::Swift::StringProtocol::components(separatedBy);
  (**(code **)(lVar5 + 8))(separatedBy.unknown,CVar1.unknown);
  if (*(long *)(CVar2.unknown + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(CVar2.unknown + 0x20);
    uVar4 = *(undefined8 *)(CVar2.unknown + 0x28);
    _swift_bridgeObjectRetain(uVar4);
  }
  _swift_bridgeObjectRelease(CVar2.unknown);
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x100b74780 | FUN_100b74780 */

undefined8 FUN_100b74780(undefined8 param_1,long param_2)

{
  FUN_100b6730c();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Address: 0x100b747bc | FUN_100b747bc */

void FUN_100b747bc(_DictionaryStorage *param_1)

{
  __int64 unaff_x19;
  
  Swift::_DictionaryStorage::_allocate(param_1,unaff_x19);
  return;
}



/* Address: 0x100b747c8 | FUN_100b747c8 */

void FUN_100b747c8(void)

{
  return;
}



/* Address: 0x100b747d8 | FUN_100b747d8 */

void FUN_100b747d8(void)

{
  return;
}



/* Address: 0x100b747e4 | FUN_100b747e4 */

void FUN_100b747e4(void)

{
  return;
}



/* Address: 0x100b747f0 | FUN_100b747f0 */

void FUN_100b747f0(void)

{
  return;
}



/* Address: 0x100b747fc | FUN_100b747fc */

void FUN_100b747fc(void)

{
  return;
}



/* Address: 0x100b74808 | FUN_100b74808 */

void FUN_100b74808(void)

{
  return;
}



/* Address: 0x100b74814 | FUN_100b74814 */

void FUN_100b74814(void)

{
  return;
}



/* Address: 0x100b74820 | FUN_100b74820 */

void FUN_100b74820(void)

{
  FUN_10000c650();
  return;
}



/* Address: 0x100b74828 | FUN_100b74828 */

void FUN_100b74828(void)

{
  long unaff_x29;
  
  thunk_FUN_100ba9ecc(unaff_x29 + -0x80);
  return;
}



/* Address: 0x100b74834 | FUN_100b74834 */

void FUN_100b74834(void *param_1,void *param_2)

{
  _memcpy(param_1,param_2,0x48);
  return;
}



/* Address: 0x100b7483c | FUN_100b7483c */

void FUN_100b7483c(void)

{
  _swift_release();
  return;
}



/* Address: 0x100b74844 | FUN_100b74844 */

void FUN_100b74844(void)

{
  return;
}



/* Address: 0x100b74850 | FUN_100b74850 */

undefined1  [16] FUN_100b74850(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x746e657665;
  return auVar1;
}



/* Address: 0x100b74864 | _TtC6Sentry23SentryEnvelopeItemTypes::event */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::event(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_e500000000000000);
  return (ID)pNVar1;
}



/* Address: 0x100b748a0 | FUN_100b748a0 */

undefined1  [16] FUN_100b748a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x6e6f6973736573;
  return auVar1;
}



/* Address: 0x100b748b8 | _TtC6Sentry23SentryEnvelopeItemTypes::session */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::session(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_e700000000000000);
  return (ID)pNVar1;
}



/* Address: 0x100b748f8 | FUN_100b748f8 */

undefined1  [16] FUN_100b748f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x6b63616264656566;
  return auVar1;
}



/* Address: 0x100b74910 | _TtC6Sentry23SentryEnvelopeItemTypes::feedback */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::feedback(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_e800000000000000);
  return (ID)pNVar1;
}



/* Address: 0x100b74950 | FUN_100b74950 */

undefined1  [16] FUN_100b74950(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_eb000000006e6f69;
  auVar1._0_8_ = 0x746361736e617274;
  return auVar1;
}



/* Address: 0x100b74970 | _TtC6Sentry23SentryEnvelopeItemTypes::transaction */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::transaction(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_eb000000006e6f69);
  return (ID)pNVar1;
}



/* Address: 0x100b749bc | FUN_100b749bc */

undefined1  [16] FUN_100b749bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea0000000000746e;
  auVar1._0_8_ = 0x656d686361747461;
  return auVar1;
}



/* Address: 0x100b749d8 | _TtC6Sentry23SentryEnvelopeItemTypes::attachment */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::attachment(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xea0000000000746e);
  return (ID)pNVar1;
}



/* Address: 0x100b74a20 | FUN_100b74a20 */

undefined1  [16] FUN_100b74a20(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed000074726f7065;
  auVar1._0_8_ = 0x725f746e65696c63;
  return auVar1;
}



/* Address: 0x100b74a44 | _TtC6Sentry23SentryEnvelopeItemTypes::clientReport */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::clientReport(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xed000074726f7065);
  return (ID)pNVar1;
}



/* Address: 0x100b74a94 | FUN_100b74a94 */

undefined1  [16] FUN_100b74a94(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x656c69666f7270;
  return auVar1;
}



/* Address: 0x100b74aac | _TtC6Sentry23SentryEnvelopeItemTypes::profile */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::profile(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_e700000000000000);
  return (ID)pNVar1;
}



/* Address: 0x100b74aec | FUN_100b74aec */

undefined1  [16] FUN_100b74aec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec0000006f656469;
  auVar1._0_8_ = 0x765f79616c706572;
  return auVar1;
}



/* Address: 0x100b74b0c | _TtC6Sentry23SentryEnvelopeItemTypes::replayVideo */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::replayVideo(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xec0000006f656469);
  return (ID)pNVar1;
}



/* Address: 0x100b74b58 | FUN_100b74b58 */

undefined1  [16] FUN_100b74b58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x647374617473;
  return auVar1;
}



/* Address: 0x100b74b6c | _TtC6Sentry23SentryEnvelopeItemTypes::statsd */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::statsd(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_e600000000000000);
  return (ID)pNVar1;
}



/* Address: 0x100b74ba8 | FUN_100b74ba8 */

undefined1  [16] FUN_100b74ba8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006b6e756863;
  auVar1._0_8_ = 0x5f656c69666f7270;
  return auVar1;
}



/* Address: 0x100b74bcc | _TtC6Sentry23SentryEnvelopeItemTypes::profileChunk */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::profileChunk(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xed00006b6e756863);
  return (ID)pNVar1;
}



/* Address: 0x100b74c1c | _TtC6Sentry23SentryEnvelopeItemTypes::log */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::log(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xe300000000000000);
  return (ID)pNVar1;
}



/* Address: 0x100b74c54 | FUN_100b74c54 */

undefined1  [16] FUN_100b74c54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000063697274;
  auVar1._0_8_ = 0x656d5f6563617274;
  return auVar1;
}



/* Address: 0x100b74c74 | _TtC6Sentry23SentryEnvelopeItemTypes::traceMetric */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::traceMetric(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0xec00000063697274);
  return (ID)pNVar1;
}



/* Address: 0x100b74cc0 | _TtC6Sentry23SentryEnvelopeItemTypes::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry23SentryEnvelopeItemTypes::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b74ce0 | _TtC6Sentry23SentryEnvelopeItemTypes::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry23SentryEnvelopeItemTypes::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100b74ce4 | FUN_100b74ce4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b74ce4(void)

{
  return ZEXT816(0x100f9f900);
}



/* Address: 0x100b74d04 | FUN_100b74d04 */

void FUN_100b74d04(long param_1)

{
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_50 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  local_40 = &DAT_100c99068;
  local_20 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_18 = &DAT_100c99080;
  local_30 = puStack_38;
  puStack_28 = puStack_38;
  _swift_initClassMetadata2(param_1,0,8,&local_50,param_1 + 0x60);
  return;
}



/* Address: 0x100b74d88 | FUN_100b74d88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b74d88(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x60);
  if (lVar4 != 0) {
    pcVar1 = *(code **)(unaff_x20 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar3 = uVar2;
    _swift_retain(uVar2);
    _CFRunLoopGetMain();
    (*pcVar1)(uVar3,lVar4,*(undefined8 *)PTR__kCFRunLoopCommonModes_100ea9b38);
    _swift_release(uVar2);
  }
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x100b74e90 | FUN_100b74e90 */

void FUN_100b74e90(void)

{
  FUN_100b74d88();
  _swift_deallocClassInstance();
  return;
}


