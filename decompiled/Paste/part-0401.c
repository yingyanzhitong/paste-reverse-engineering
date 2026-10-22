/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004e844c | thunk_FUN_1000d52ec */

void thunk_FUN_1000d52ec(void)

{
  thunk_FUN_1000d52ec();
  return;
}



/* Address: 0x1004e8450 | thunk_FUN_1004e8074 */

void thunk_FUN_1004e8074(void)

{
  FUN_1004e8074();
  return;
}



/* Address: 0x1004e8454 | thunk_FUN_1004dbda0 */

void thunk_FUN_1004dbda0(void)

{
  thunk_FUN_1004dbda0();
  return;
}



/* Address: 0x1004e8458 | thunk_FUN_1004d9ea8 */

void thunk_FUN_1004d9ea8(void)

{
  thunk_FUN_1004d9ea8();
  return;
}



/* Address: 0x1004e845c | thunk_FUN_1004e80c0 */

void thunk_FUN_1004e80c0(void)

{
  thunk_FUN_1004e80c0();
  return;
}



/* Address: 0x1004e8460 | thunk_FUN_1000d44b8 */

void thunk_FUN_1000d44b8(void)

{
  FUN_1000d44b8();
  return;
}



/* Address: 0x1004e8464 | thunk_FUN_1004e2030 */

void thunk_FUN_1004e2030(void)

{
  FUN_1004e2030();
  return;
}



/* Address: 0x1004e8468 | thunk_FUN_1004e3c84 */

void thunk_FUN_1004e3c84(void)

{
  FUN_1004e3c84();
  return;
}



/* Address: 0x1004e846c | FUN_1004e846c */

undefined1  [16] FUN_1004e846c(void)

{
  return ZEXT816(0x100edb9c8);
}



/* Address: 0x1004e847c | FUN_1004e847c */

void FUN_1004e847c(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e84e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004e84e8 | FUN_1004e84e8 */

undefined1  [16] FUN_1004e84e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  lVar1 = 0;
  FUN_1004e85b8();
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar4 + 0xfU & 0xfffffffffffffff0);
  pcVar7 = *(code **)(lVar5 + 0x20);
  (*pcVar7)(&stack0xffffffffffffffb0 + -extraout_x8,param_1,lVar1);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100edb9f0;
  _swift_allocObject(&DAT_100edb9f0,uVar6 + lVar4,uVar3 | 7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  (*pcVar7)(puVar2 + uVar6,&stack0xffffffffffffffb0 + -extraout_x8,lVar1);
  auVar8._8_8_ = puVar2;
  auVar8._0_8_ = FUN_1004e8be4;
  return auVar8;
}



/* Address: 0x1004e85b8 | FUN_1004e85b8 */

void FUN_1004e85b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1004e85c4 | FUN_1004e85c4 */

/* WARNING: Removing unreachable block (ram,0x0001004e8a04) */
/* WARNING: Removing unreachable block (ram,0x0001004e88d8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004e88c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004e85c4(undefined8 param_1,undefined8 param_2,Data param_3,undefined8 param_4)

{
  Optional OVar1;
  CheckedContinuation CVar3;
  ulong uVar4;
  undefined **ppuVar5;
  JSONEncoder *pJVar6;
  JSONEncoder *pJVar7;
  Data DVar8;
  undefined *puVar9;
  JSONDecoder *pJVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined *local_160;
  undefined8 local_158;
  code *local_150;
  code *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  byte local_d8;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined *local_90 [4];
  char local_70;
  long lVar2;
  
  local_108 = param_4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71((int7)((ulong)param_1 >> 8),OVar1.value);
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar12 = lVar16 - extraout_x12;
  lVar18 = *(long *)(param_3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar11 = uVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar11 - extraout_x12_01;
  FUN_1004e8c38(param_1,local_90);
  if (local_70 == '\x01') {
    local_f8 = local_90[0];
    FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(&local_f8,CVar3.unknown);
    return;
  }
  local_118 = param_2;
  FUN_100011080(local_90,auStack_b0);
  FUN_10000cbfc(auStack_b0,&local_f8);
  puVar9 = PTR___type_metadata_for_Any_100eae0c0;
  uVar4 = uVar12;
  _swift_dynamicCast(uVar12,&local_f8,PTR___type_metadata_for_Any_100eae0c0 + 8,param_3.unknown,6);
  pcVar17 = *(code **)(lVar18 + 0x38);
  if ((uVar4 & 1) == 0) {
    (*pcVar17)(uVar12,1,1,param_3.unknown);
    pcVar14 = *(code **)(lVar15 + 8);
    (*pcVar14)(uVar12,lVar2);
    FUN_10000cbfc(auStack_b0,auStack_d0);
    ppuVar5 = &local_f8;
    _swift_dynamicCast(ppuVar5,auStack_d0,puVar9 + 8,&DAT_100edd000,6);
    if (((ulong)ppuVar5 & 1) == 0) {
      FUN_1004e8c88();
      puVar9 = &DAT_100edba18;
      _swift_allocError(&DAT_100edba18,ppuVar5,0,0);
      local_f8 = puVar9;
      FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
      CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
      Swift::CheckedContinuation::resume(&local_f8,CVar3.unknown);
      goto LAB_1004e896c;
    }
    local_120 = local_e8;
    local_150 = pcVar14;
    local_148 = pcVar17;
    pJVar6 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
    pJVar7 = Foundation::JSONEncoder::init(pJVar6);
    local_138 = local_f8;
    local_130 = uStack_f0;
    local_e8 = local_120;
    local_124 = (uint)local_d8;
    pJVar6 = pJVar7;
    FUN_1004d9ea8();
    puVar9 = &DAT_100edd000;
    DVar8 = Foundation::JSONEncoder::_encode(pJVar7,pJVar6,&DAT_100edd000,pJVar6);
    local_158 = uStack_e0;
    local_140 = puVar9;
    _swift_release(pJVar7);
    pJVar10 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
    pJVar10 = Foundation::JSONDecoder::init(pJVar10);
    puVar9 = local_140;
    local_160 = DVar8.unknown;
    Foundation::JSONDecoder::_decode(pJVar10,param_3);
    _swift_release(pJVar10);
    (*local_148)(lVar16,0,1,param_3.unknown);
    lVar13 = local_110;
    (**(code **)(lVar18 + 0x20))(local_110,lVar16,param_3.unknown);
    (**(code **)(lVar18 + 0x10))(lVar11,lVar13,param_3.unknown);
    FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(lVar11,CVar3.unknown);
    FUN_1004dbde0(local_138,local_130,local_120,local_158,local_124);
    FUN_10003bf2c(local_160,puVar9);
  }
  else {
    (*pcVar17)(uVar12,0,1,param_3.unknown);
    (**(code **)(lVar18 + 0x20))(lVar13,uVar12,param_3.unknown);
    (**(code **)(lVar18 + 0x10))(lVar11,lVar13,param_3.unknown);
    FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume(lVar11,CVar3.unknown);
  }
  (**(code **)(lVar18 + 8))(lVar13,param_3.unknown);
LAB_1004e896c:
  FUN_100004594(auStack_b0);
  return;
}



/* Address: 0x1004e8b4c | FUN_1004e8b4c */

void FUN_1004e8b4c(void)

{
  long lVar1;
  CheckedContinuation CVar2;
  long unaff_x20;
  ulong uVar3;
  
  lVar1 = 0;
  FUN_1004e85b8(0,*(undefined8 *)(unaff_x20 + 0x10));
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar2 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar2.unknown + -8) + 8))
            (unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),CVar2.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1004e8be4 | FUN_1004e8be4 */

void FUN_1004e8be4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_1004e85b8(0,uVar1);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_1004e85c4(param_1,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Address: 0x1004e8c38 | FUN_1004e8c38 */

undefined8 FUN_1004e8c38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcd0b8;
  FUN_1000f7830(&DAT_100fcd0b8,&DAT_100c53690);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004e8c88 | FUN_1004e8c88 */

void FUN_1004e8c88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd0c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c536d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c536d8,&DAT_100edba18);
  DAT_100fcd0c0 = pTVar1;
  return;
}



/* Address: 0x1004e8cc8 | FUN_1004e8cc8 */

undefined1  [16] FUN_1004e8cc8(void)

{
  return ZEXT816(0x100edba18);
}



/* Address: 0x1004e8cd8 | FUN_1004e8cd8 */

undefined1  [16] FUN_1004e8cd8(long param_1)

{
  CheckedContinuation CVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  if (uVar3 < 0x40) {
    local_28 = *(long *)(CVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
    CVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = CVar1.unknown;
  return auVar4;
}



/* Address: 0x1004e8d68 | FUN_1004e8d68 */

void FUN_1004e8d68(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e8dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(CVar1.unknown + -8))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004e8dd4 | FUN_1004e8dd4 */

void FUN_1004e8dd4(undefined8 param_1)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e8e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 8))(param_1,CVar1.unknown);
  return;
}



/* Address: 0x1004e8e30 | FUN_1004e8e30 */

undefined8 FUN_1004e8e30(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x10))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004e8ea4 | FUN_1004e8ea4 */

undefined8 FUN_1004e8ea4(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x18))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004e8f18 | FUN_1004e8f18 */

undefined8 FUN_1004e8f18(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004e8f8c | FUN_1004e8f8c */

undefined8 FUN_1004e8f8c(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x28))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004e9000 | FUN_1004e9000 */

void FUN_1004e9000(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004e900c | FUN_1004e900c */

void FUN_1004e900c(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e9074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x30))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004e9078 | FUN_1004e9078 */

void FUN_1004e9078(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004e9084 | FUN_1004e9084 */

void FUN_1004e9084(undefined8 param_1,undefined8 param_2)

{
  CheckedContinuation CVar1;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e90f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004e90f4 | FUN_1004e90f4 */

void FUN_1004e90f4(undefined8 param_1)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP19HTTPClientTransport::endpoint;
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004e9138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + lVar1,UVar2.unknown);
  return;
}



/* Address: 0x1004e913c | FUN_1004e913c */

void FUN_1004e913c(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  puVar1 = (undefined8 *)(*param_2 + _TtC3MCP19HTTPClientTransport::sessionID);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar4 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  return;
}



/* Address: 0x1004e91a4 | FUN_1004e91a4 */

void FUN_1004e91a4(void)

{
  FUN_10010b53c(&_TtC3MCP19HTTPClientTransport::sessionID);
  return;
}



/* Address: 0x1004e91b0 | FUN_1004e91b0 */

void FUN_1004e91b0(void)

{
  FUN_10010b53c(&_TtC3MCP19HTTPClientTransport::protocolVersion);
  return;
}



/* Address: 0x1004e91bc | FUN_1004e91bc */

void FUN_1004e91bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::protocolVersion);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1004e9218 | FUN_1004e9218 */

undefined1  [16] FUN_1004e9218(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC3MCP19HTTPClientTransport::protocolVersion;
  _swift_beginAccess(unaff_x20 + _TtC3MCP19HTTPClientTransport::protocolVersion,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1004e9258 | FUN_1004e9258 */

void FUN_1004e9258(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::logger));
  return;
}



/* Address: 0x1004e9268 | FUN_1004e9268 */

undefined8 FUN_1004e9268(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::sseInitializationTimeout);
}



/* Address: 0x1004e9278 | FUN_1004e9278 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1004e9278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  URL UVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x12;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [16];
  long local_b0;
  undefined *local_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_90 [32];
  
  puVar5 = &DAT_100fcd148;
  local_114 = param_4;
  local_110 = param_5;
  local_108 = param_6;
  local_100 = param_9;
  local_f0 = param_8;
  local_c8 = param_7;
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  lVar13 = *(long *)(puVar5 + -8);
  local_e0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fcd150;
  local_f8 = (long)&local_130 - extraout_x8;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  local_d8 = *(long *)(puVar5 + -8);
  puStack_d0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_130 - extraout_x8) - extraout_x8_00;
  puVar5 = &DAT_100fcd158;
  local_e8 = lVar10;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar10 - extraout_x12;
  local_128 = param_3;
  IVar6 = NSURLSession::sessionWithConfiguration_((ID)&_OBJC_CLASS___NSURLSession,param_3);
  lVar7 = 0;
  FUN_1004e9780();
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar1 = (undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::sessionID);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::protocolVersion);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::streamingTask) = 0;
  *(undefined1 *)(lVar7 + _TtC3MCP19HTTPClientTransport::isConnected) = 0;
  *(undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask) = 0;
  lVar9 = _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation;
  puVar5 = &DAT_100fcb398;
  FUN_1000f7830(&DAT_100fcb398,&DAT_100c50198);
  (**(code **)(*(long *)(puVar5 + -8) + 0x38))(lVar7 + lVar9,1,1,puVar5);
  puVar2 = (undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::lastEventID);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::retryInterval) = 3000;
  *(undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::activeGETSessionTask) = 0;
  lVar9 = _TtC3MCP19HTTPClientTransport::endpoint;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  local_130 = *(long *)(UVar8.unknown + -8);
  local_120 = param_2;
  (**(code **)(local_130 + 0x10))(lVar7 + lVar9,param_2,UVar8.unknown);
  *(ID *)(lVar7 + _TtC3MCP19HTTPClientTransport::session) = IVar6;
  *(char *)(lVar7 + _TtC3MCP19HTTPClientTransport::streaming) = (char)local_114;
  *(undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::sseInitializationTimeout) = param_1;
  _swift_beginAccess(puVar1,auStack_90,1,0);
  uVar3 = local_c8;
  *puVar1 = local_110;
  puVar1[1] = local_108;
  puVar1 = (undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::requestModifier);
  *puVar1 = local_100;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(lVar7 + _TtC3MCP19HTTPClientTransport::authorizer);
  *puVar1 = local_c8;
  puVar1[1] = local_f0;
  puVar5 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar12 = *(long *)(puVar5 + -8);
  (**(code **)(lVar12 + 0x38))(lVar11,1,1,puVar5);
  local_b0 = lVar11;
  (**(code **)(lVar13 + 0x68))
            (local_f8,*(undefined4 *)
                       PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
             ,local_e0);
  _swift_unknownObjectRetain(uVar3);
  _swift_retain(param_10);
  lVar9 = local_e8;
  Swift::AsyncThrowingStream::_init
            ((BufferingPolicy)(__int8)PTR___type_metadata_for_Foundation_Data_100ea7300);
  (**(code **)(local_d8 + 0x20))
            (lVar7 + _TtC3MCP19HTTPClientTransport::messageStream,lVar9,puStack_d0);
  FUN_1000f8cac(lVar11,lVar10,&DAT_100fcd158,&DAT_100c53740);
  lVar9 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,puVar5);
  if ((int)lVar9 != 1) {
    (**(code **)(lVar12 + 0x20))
              (lVar7 + _TtC3MCP19HTTPClientTransport::messageContinuation,lVar10,puVar5);
    if (param_11 == 0) {
      local_a8 = &DAT_100ee6990;
      ppuStack_a0 = &PTR_PTR_100ee68f0;
      _swift_release(param_10);
      _swift_unknownObjectRelease(local_c8);
      (**(code **)(local_130 + 8))(local_120,UVar8.unknown);
      param_11 = 0;
      FUN_1005ce220();
      _swift_allocObject();
      *(undefined8 *)(param_11 + 0x10) = 0xd000000000000019;
      *(undefined8 *)(param_11 + 0x18) = 0x8000000100dab610;
      FUN_100076508(auStack_c0,param_11 + 0x20);
    }
    else {
      _swift_release(param_10);
      _swift_unknownObjectRelease(local_c8);
      (**(code **)(local_130 + 8))(local_120,UVar8.unknown);
    }
    *(long *)(lVar7 + _TtC3MCP19HTTPClientTransport::logger) = param_11;
    FUN_1000fb4c4(lVar11,&DAT_100fcd158,&DAT_100c53740);
    return lVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004e9780);
  (*pcVar4)();
}



/* Address: 0x1004e9780 | FUN_1004e9780 */

void FUN_1004e9780(undefined8 param_1)

{
  if (DAT_100fcd208 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb2c78);
  return;
}



/* Address: 0x1004e97b8 | FUN_1004e97b8 */

void FUN_1004e97b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1000fb4c4(param_2,&DAT_100fcd158,&DAT_100c53740);
  puVar1 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar2 = *(long *)(puVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004e9838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,puVar1);
  return;
}



/* Address: 0x1004e983c | FUN_1004e983c */

void FUN_1004e983c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004e97b8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1004e9844 | FUN_1004e9844 */

void FUN_1004e9844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  _swift_task_switch(FUN_1004e985c,param_4,0);
  return;
}



/* Address: 0x1004e985c | FUN_1004e985c */

void FUN_1004e985c(void)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  undefined *puVar4;
  void *pvVar5;
  long unaff_x22;
  String isolation;
  
  puVar4 = &DAT_100fcd1d0;
  FUN_100003a00(&DAT_100fcd1d0,FUN_1004e9780,&TargetProtocolConformanceDescriptor_100c537a0);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(unaff_x22 + 0x70);
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1004e9978;
    isolation.bridgeObject = pvVar5;
    isolation.str = *(char **)(unaff_x22 + 0x68);
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x70) == 0) {
    UVar3.unknown = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x70));
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1004e99b4,UVar3.unknown,puVar4);
  return;
}



/* Address: 0x1004e9978 | FUN_1004e9978 */

void FUN_1004e9978(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001004e99b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1004e99b4 | FUN_1004e99b4 */

void FUN_1004e99b4(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  String function;
  
  uVar4 = *(ulong *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1004e9b48;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar1 = &DAT_100fcb398;
  FUN_1000f7830(&DAT_100fcb398,&DAT_100c50198);
  lVar6 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  function.bridgeObject = (void *)0x8000000100dabfb0;
  function.str = (char *)0xd00000000000001d;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar4,0);
  if ((uVar4 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/HTTPClientTransport.swift",0x1d,1,0xa6,*(undefined8 *)(unaff_x22 + 0x70),0);
  }
  lVar5 = *(long *)(unaff_x22 + 0x70);
  puVar3 = &DAT_100fcd1d8;
  FUN_1000f7830(&DAT_100fcd1d8,&DAT_100c53780);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  (**(code **)(lVar6 + 0x20))();
  (**(code **)(lVar6 + 0x38))(uVar4,0,1,puVar1);
  lVar6 = _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation;
  _swift_beginAccess(lVar5 + _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation,
                     unaff_x22 + 0x50,0x21,0);
  FUN_1004eaf80(uVar4,lVar5 + lVar6);
  _swift_endAccess(unaff_x22 + 0x50);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1004e9b48 | FUN_1004e9b48 */

void FUN_1004e9b48(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001004e9b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x22 + 8))();
  return;
}



/* Address: 0x1004e9b7c | FUN_1004e9b7c */

void FUN_1004e9b7c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100fcd1d8;
  FUN_1000f7830(&DAT_100fcd1d8,&DAT_100c53780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_60 + -extraout_x8;
  uVar2 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar2 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/HTTPClientTransport.swift",0x1d,1,0xa6,param_2,0);
  }
  puVar1 = &DAT_100fcb398;
  FUN_1000f7830(&DAT_100fcb398,&DAT_100c50198);
  lVar4 = *(long *)(puVar1 + -8);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,puVar1);
  (**(code **)(lVar4 + 0x38))(puVar3,0,1,puVar1);
  lVar4 = _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation;
  _swift_beginAccess(param_2 + _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation,
                     auStack_58,0x21,0);
  FUN_1004eaf80(puVar3,param_2 + lVar4);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x1004e9c98 | FUN_1004e9c98 */

void FUN_1004e9c98(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1000f8cac(param_3,puVar9,&DAT_100fcd1c8,&DAT_100c53750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100fcd1c8,&DAT_100c53750);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_1000fb4c4(param_3,&DAT_100fcd1c8,&DAT_100c53750);
    puVar2 = &DAT_100edbbf8;
    _swift_allocObject(&DAT_100edbbf8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c53930,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100edbc20;
    _swift_allocObject(&DAT_100edbc20,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c53938,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100fcd1c8,&DAT_100c53750);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1004e9f34 | FUN_1004e9f34 */

void FUN_1004e9f34(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_c0 + -extraout_x8;
  FUN_1000f8cac(param_3,puVar10,&DAT_100fcd1c8,&DAT_100c53750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar13 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar10;
  (**(code **)(lVar13 + 0x30))(puVar10,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar10,&DAT_100fcd1c8,&DAT_100c53750);
    uVar11 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar13 + 8))(puVar10,TVar3.unknown);
    uVar11 = (ulong)_Var1 | 0x1c00;
  }
  lVar13 = *(long *)(param_5 + 0x10);
  lVar12 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar13);
  _swift_release(param_5);
  if (lVar13 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar12 = 0;
  }
  else {
    _swift_getObjectType(lVar13);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar13);
  }
  if (param_2 == (void *)0x0) {
    FUN_1000fb4c4(param_3,&DAT_100fcd1c8,&DAT_100c53750);
    puVar2 = &DAT_100edbb58;
    _swift_allocObject(&DAT_100edbb58,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    puVar8 = &DAT_100fcd488;
    FUN_1000f7830(&DAT_100fcd488,&DAT_100c538a0);
    if (lVar12 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar9 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar9 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar12;
    }
    _swift_task_create(uVar11,puVar9,puVar8,&DAT_100c53898,puVar2);
  }
  else {
    SVar14.bridgeObject = param_2;
    SVar14.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar14);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100edbb80;
    _swift_allocObject(&DAT_100edbb80,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    puVar8 = &DAT_100fcd488;
    FUN_1000f7830(&DAT_100fcd488,&DAT_100c538a0);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar12 != 0 || UVar6.unknown != (undefined *)0x0) {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar12;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar11,&local_b8,puVar8,&DAT_100c538a8,puVar2);
    _swift_release(param_5);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100fcd1c8,&DAT_100c53750);
  }
  return;
}



/* Address: 0x1004ea1e4 | FUN_1004ea1e4 */

void FUN_1004ea1e4(void)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_1e0 [96];
  undefined1 auStack_180 [24];
  undefined8 local_168;
  long lStack_160;
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100fcd1d8;
  FUN_1000f7830(&DAT_100fcd1d8,&DAT_100c53780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar6 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = (long)puVar6 - extraout_x12;
  puVar1 = &DAT_100fcb398;
  FUN_1000f7830(&DAT_100fcb398,&DAT_100c50198);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation;
  lVar4 = lVar3 - extraout_x8_00;
  _swift_beginAccess(unaff_x20 + _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation,
                     auStack_e0,0,0);
  FUN_1000f8cac(unaff_x20 + lVar5,lVar3,&DAT_100fcd1d8,&DAT_100c53780);
  lVar2 = lVar3;
  (**(code **)(lVar7 + 0x30))(lVar3,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_1000fb4c4(lVar3,&DAT_100fcd1d8,&DAT_100c53780);
    lVar5 = *(long *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::logger);
    _swift_beginAccess(lVar5 + 0x20,auStack_f8,0,0);
    FUN_100076688(lVar5 + 0x20,local_c8);
    FUN_100004640(local_c8,local_b0);
    (**(code **)(lStack_a8 + 0x70))(local_b0,lStack_a8);
    FUN_100004594(local_c8);
    if (1 < ((uint)local_b0 & 0xff)) {
      return;
    }
    FUN_100076688(lVar5 + 0x20,auStack_180);
    FUN_100004640(auStack_180,local_168);
    local_c8[0] = 1;
    local_c0 = 0x1000000000000050;
    uStack_b8 = 0x8000000100dabdb0;
    lStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_90 = 0xd00000000000001d;
    uStack_88 = 0x8000000100dab630;
    local_80 = 0xd00000000000001f;
    uStack_78 = 0x8000000100dabd90;
    local_70 = 0xb3;
    local_158[0] = 1;
    local_150 = 0x1000000000000050;
    uStack_148 = 0x8000000100dabdb0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    local_120 = 0xd00000000000001d;
    uStack_118 = 0x8000000100dab630;
    local_110 = 0xd00000000000001f;
    uStack_108 = 0x8000000100dabd90;
    local_100 = 0xb3;
    FUN_1004eaa00(local_c8,auStack_1e0);
    FUN_1004eaa3c(local_158);
    (**(code **)(lStack_160 + 0x28))(local_c8,local_168,lStack_160);
    FUN_1004eaa3c(local_c8);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar4,lVar3,puVar1);
    Swift::CheckedContinuation::resume();
    (**(code **)(lVar7 + 0x38))(puVar6,1,1,puVar1);
    _swift_beginAccess(unaff_x20 + lVar5,local_c8,0x21,0);
    FUN_1004eaf80(puVar6,unaff_x20 + lVar5);
    _swift_endAccess(local_c8);
    lVar5 = *(long *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::logger);
    _swift_beginAccess(lVar5 + 0x20,auStack_f8,0,0);
    FUN_100076688(lVar5 + 0x20,local_c8);
    FUN_100004640(local_c8,local_b0);
    (**(code **)(lStack_a8 + 0x70))(local_b0,lStack_a8);
    FUN_100004594(local_c8);
    if (1 < ((uint)local_b0 & 0xff)) {
      (**(code **)(lVar7 + 8))(lVar4,puVar1);
      return;
    }
    FUN_100076688(lVar5 + 0x20,auStack_180);
    FUN_100004640(auStack_180,local_168);
    local_c8[0] = 1;
    local_c0 = 0x1000000000000034;
    uStack_b8 = 0x8000000100dabe10;
    lStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_90 = 0xd00000000000001d;
    uStack_88 = 0x8000000100dab630;
    local_80 = 0xd00000000000001f;
    uStack_78 = 0x8000000100dabd90;
    local_70 = 0xb1;
    local_158[0] = 1;
    local_150 = 0x1000000000000034;
    uStack_148 = 0x8000000100dabe10;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    local_130 = 0;
    local_120 = 0xd00000000000001d;
    uStack_118 = 0x8000000100dab630;
    local_110 = 0xd00000000000001f;
    uStack_108 = 0x8000000100dabd90;
    local_100 = 0xb1;
    FUN_1004eaa00(local_c8,auStack_1e0);
    FUN_1004eaa3c(local_158);
    (**(code **)(lStack_160 + 0x28))(local_c8,local_168,lStack_160);
    FUN_1004eaa3c(local_c8);
    (**(code **)(lVar7 + 8))(lVar4,puVar1);
  }
  FUN_100004594(auStack_180);
  return;
}



/* Address: 0x1004ea648 | FUN_1004ea648 */

void FUN_1004ea648(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  _swift_task_switch(FUN_1004ea6ac);
  return;
}



/* Address: 0x1004ea6ac | FUN_1004ea6ac */

void FUN_1004ea6ac(void)

{
  TaskPriority TVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0x198);
  if ((*(byte *)(lVar5 + _TtC3MCP19HTTPClientTransport::isConnected) & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1a0);
    *(undefined1 *)(lVar5 + _TtC3MCP19HTTPClientTransport::isConnected) = 1;
    TVar1 = Swift::TaskPriority::typeMetadataAccessor();
    pcVar8 = *(code **)(*(long *)(TVar1.unknown + -8) + 0x38);
    (*pcVar8)(uVar6,1,1,TVar1.unknown);
    puVar2 = &DAT_100fcd1d0;
    FUN_100003a00(&DAT_100fcd1d0,FUN_1004e9780,&TargetProtocolConformanceDescriptor_100c537a0);
    puVar3 = &DAT_100edbac0;
    _swift_allocObject(&DAT_100edbac0,0x28,7);
    *(long *)(puVar3 + 0x10) = lVar5;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    *(long *)(puVar3 + 0x20) = lVar5;
    _swift_retain_n(lVar5,2);
    uVar4 = 0;
    FUN_1004e9c98(0,0,uVar6,&DAT_100c53760,puVar3);
    uVar6 = *(undefined8 *)(lVar5 + _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask);
    *(undefined8 *)(lVar5 + _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask) = uVar4;
    _swift_release(uVar6);
    if (*(char *)(lVar5 + _TtC3MCP19HTTPClientTransport::streaming) == '\x01') {
      lVar5 = *(long *)(unaff_x22 + 0x198);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x1a0);
      (*pcVar8)(uVar4,1,1,TVar1.unknown);
      puVar3 = &DAT_100edbae8;
      _swift_allocObject(&DAT_100edbae8,0x28,7);
      *(long *)(puVar3 + 0x10) = lVar5;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      *(long *)(puVar3 + 0x20) = lVar5;
      _swift_retain_n(lVar5,2);
      uVar6 = 0;
      FUN_1004e9c98(0,0,uVar4,&DAT_100c53770,puVar3);
      uVar4 = *(undefined8 *)(lVar5 + _TtC3MCP19HTTPClientTransport::streamingTask);
      *(undefined8 *)(lVar5 + _TtC3MCP19HTTPClientTransport::streamingTask) = uVar6;
      _swift_release(uVar4);
    }
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x198) + _TtC3MCP19HTTPClientTransport::logger);
    _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x180,0,0);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x130);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar5 = *(long *)(unaff_x22 + 0x150);
    FUN_100004640(unaff_x22 + 0x130,uVar4);
    (**(code **)(lVar5 + 0x70))(uVar4,lVar5);
    FUN_100004594(unaff_x22 + 0x130);
    if (((uint)uVar4 & 0xff) < 2) {
      FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x158);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar5 = *(long *)(unaff_x22 + 0x178);
      FUN_100004640(unaff_x22 + 0x158,uVar4);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000018;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dab650;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x68) = 0xc2;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000018;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dab650;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 200) = 0xc2;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar5 + 0x28))(unaff_x22 + 0x10,uVar4,lVar5);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x158);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x0001004ea98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004ea990 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1004ea994 | FUN_1004ea994 */

void FUN_1004ea994(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1004e9844(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1004eaa00 | FUN_1004eaa00 */

undefined8 FUN_1004eaa00(undefined8 param_1,undefined8 param_2)

{
  FUN_1005c3880(param_2,param_1);
  return param_2;
}



/* Address: 0x1004eaa3c | FUN_1004eaa3c */

undefined8 FUN_1004eaa3c(undefined8 param_1)

{
  FUN_1005c3838();
  return param_1;
}



/* Address: 0x1004eaa70 | FUN_1004eaa70 */

void FUN_1004eaa70(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1880;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1004ee0fc();
  return;
}



/* Address: 0x1004eaab8 | FUN_1004eaab8 */

void FUN_1004eaab8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1004eaa70(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1004eab24 | FUN_1004eab24 */

void FUN_1004eab24(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = unaff_x20;
  puVar1 = &DAT_100fcb398;
  FUN_1000f7830(&DAT_100fcb398,&DAT_100c50198);
  *(undefined **)(unaff_x22 + 0x1d8) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  puVar1 = &DAT_100fcd1d8;
  FUN_1000f7830(&DAT_100fcd1d8,&DAT_100c53780);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  _swift_task_switch(FUN_1004eabc8);
  return;
}



/* Address: 0x1004eabc8 | FUN_1004eabc8 */

void FUN_1004eabc8(void)

{
  Task TVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(unaff_x22 + 0x1d0);
  if (*(char *)(lVar8 + _TtC3MCP19HTTPClientTransport::isConnected) == '\x01') {
    *(undefined1 *)(lVar8 + _TtC3MCP19HTTPClientTransport::isConnected) = 0;
    lVar3 = _TtC3MCP19HTTPClientTransport::streamingTask;
    puVar5 = *(undefined **)(lVar8 + _TtC3MCP19HTTPClientTransport::streamingTask);
    if (puVar5 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      TVar1.unknown = puVar5;
      _swift_retain();
      Swift::Task::cancel(TVar1);
      _swift_release(puVar5);
      uVar2 = *(undefined8 *)(lVar8 + lVar3);
    }
    lVar7 = *(long *)(unaff_x22 + 0x1d0);
    *(undefined8 *)(lVar8 + lVar3) = 0;
    _swift_release(uVar2);
    objc_stub::invalidateAndCancel(*(ID *)(lVar7 + _TtC3MCP19HTTPClientTransport::session));
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1c8));
    lVar8 = _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask;
    puVar5 = *(undefined **)(lVar7 + _TtC3MCP19HTTPClientTransport::initialSessionIDSignalTask);
    if (puVar5 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      TVar1.unknown = puVar5;
      _swift_retain();
      Swift::Task::cancel(TVar1);
      _swift_release(puVar5);
      uVar2 = *(undefined8 *)(lVar7 + lVar8);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
    lVar3 = *(long *)(unaff_x22 + 0x1e0);
    lVar9 = *(long *)(unaff_x22 + 0x1d0);
    *(undefined8 *)(lVar7 + lVar8) = 0;
    _swift_release(uVar2);
    lVar8 = _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation;
    _swift_beginAccess(lVar9 + _TtC3MCP19HTTPClientTransport::initialSessionIDContinuation,
                       unaff_x22 + 0x180,0,0);
    FUN_1000f8cac(lVar9 + lVar8,uVar6,&DAT_100fcd1d8,&DAT_100c53780);
    (**(code **)(lVar3 + 0x30))(uVar6,1,uVar4);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
    if ((int)uVar6 == 0) {
      lVar3 = *(long *)(unaff_x22 + 0x1e0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x1d8);
      (**(code **)(lVar3 + 0x10))(uVar4,uVar2,uVar6);
      FUN_1000fb4c4(uVar2,&DAT_100fcd1d8,&DAT_100c53780);
      Swift::CheckedContinuation::resume();
      (**(code **)(lVar3 + 8))(uVar4,uVar6);
    }
    else {
      FUN_1000fb4c4(uVar2,&DAT_100fcd1d8,&DAT_100c53780);
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
    lVar3 = *(long *)(unaff_x22 + 0x1d0);
    (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 0x38))(uVar2,1,1,*(undefined8 *)(unaff_x22 + 0x1d8))
    ;
    _swift_beginAccess(lVar9 + lVar8,unaff_x22 + 0x198,0x21,0);
    FUN_1004eaf80(uVar2,lVar9 + lVar8);
    _swift_endAccess(unaff_x22 + 0x198);
    lVar3 = *(long *)(lVar3 + _TtC3MCP19HTTPClientTransport::logger);
    _swift_beginAccess(lVar3 + 0x20,unaff_x22 + 0x1b0,0,0);
    FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x130);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar8 = *(long *)(unaff_x22 + 0x150);
    FUN_100004640(unaff_x22 + 0x130,uVar2);
    (**(code **)(lVar8 + 0x70))(uVar2,lVar8);
    FUN_100004594(unaff_x22 + 0x130);
    if (((uint)uVar2 & 0xff) < 2) {
      FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x158);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar8 = *(long *)(unaff_x22 + 0x178);
      FUN_100004640(unaff_x22 + 0x158,uVar2);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000021;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dab670;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 0x68) = 0xd5;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000021;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dab670;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001d;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dab630;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 200) = 0xd5;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar8 + 0x28))(unaff_x22 + 0x10,uVar2,lVar8);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x158);
    }
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001004eaf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004eaf80 | FUN_1004eaf80 */

undefined8 FUN_1004eaf80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcd1d8;
  FUN_1000f7830(&DAT_100fcd1d8,&DAT_100c53780);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004eafd0 | FUN_1004eafd0 */

void FUN_1004eafd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP19HTTPClientTransport::protocolVersion);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1004eb038 | FUN_1004eb038 */

void FUN_1004eb038(undefined8 param_1,undefined8 param_2)

{
  AsyncBytes AVar1;
  ulong uVar2;
  URL UVar3;
  URLRequest_conflict UVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  AVar1 = AsyncBytes::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb0) = AVar1.unknown;
  lVar6 = *(long *)(AVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 200) = UVar3.unknown;
  lVar6 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  UVar4 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe0) = UVar4.unknown;
  lVar6 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar5 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar5;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  _swift_task_switch(FUN_1004eb0f8);
  return;
}



/* Address: 0x1004eb0f8 | FUN_1004eb0f8 */

/* WARNING: Removing unreachable block (ram,0x0001004eb190) */

tuple2_conflict7 FUN_1004eb0f8(NSURLResponse *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  Data UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long *plVar5;
  URLRequest_conflict in_x4;
  int *piVar6;
  long lVar7;
  URL url;
  void *pvVar8;
  long lVar9;
  URLRequest *this;
  long lVar10;
  NSURLResponse *pNVar11;
  undefined8 uVar12;
  char *pcVar13;
  long unaff_x22;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  tuple2_conflict7 tVar23;
  tuple2_conflict7 tVar24;
  String forHTTPHeaderField;
  String forHTTPHeaderField_00;
  String forHTTPHeaderField_01;
  String forHTTPHeaderField_02;
  
  lVar16 = *(long *)(unaff_x22 + 0xa8);
  if (*(char *)(lVar16 + _TtC3MCP19HTTPClientTransport::isConnected) != '\x01') {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,param_1,0,0);
    *(undefined8 *)param_1 = 0xd000000000000017;
    *(undefined8 *)(param_1 + 8) = 0x8000000100dab6a0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[0x18] = (NSURLResponse)0x4;
    _swift_willThrow();
    uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xc0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf8));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar14);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x0001004eb2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
    tVar23._ = param_1;
    tVar23._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar23;
  }
  plVar5 = (long *)(lVar16 + _TtC3MCP19HTTPClientTransport::authorizer);
  lVar7 = *plVar5;
  *(long *)(unaff_x22 + 0x100) = lVar7;
  lVar15 = plVar5[1];
  *(long *)(unaff_x22 + 0x108) = lVar15;
  if (lVar7 != 0) {
    lVar9 = lVar7;
    _swift_getObjectType();
    lVar3 = _TtC3MCP19HTTPClientTransport::endpoint;
    pcVar17 = *(code **)(lVar15 + 0x10);
    _swift_unknownObjectRetain(lVar7);
    (*pcVar17)(lVar16 + lVar3,lVar9,lVar15);
    lVar10 = *(long *)(unaff_x22 + 0xa8);
    _swift_unknownObjectRelease(lVar7);
    lVar9 = lVar7;
    _swift_getObjectType(lVar7);
    pNVar11 = *(NSURLResponse **)(lVar10 + _TtC3MCP19HTTPClientTransport::session);
    piVar6 = *(int **)(lVar15 + 0x28);
    iVar2 = *piVar6;
    plVar5 = (long *)(ulong)(uint)piVar6[1];
    _swift_unknownObjectRetain(lVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x110) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_1004eb688;
    UNRECOVERED_JUMPTABLE.unknown = (undefined *)(lVar16 + lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004eb684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar6))
              (plVar5,UNRECOVERED_JUMPTABLE.unknown,pNVar11,lVar9,lVar15);
    tVar24._ = pNVar11;
    tVar24._.unknown = UNRECOVERED_JUMPTABLE.unknown;
    return tVar24;
  }
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_1004f8a60();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar12;
  lVar3 = _TtC3MCP19HTTPClientTransport::protocolVersion;
  *(long *)(unaff_x22 + 0x128) = _TtC3MCP19HTTPClientTransport::endpoint;
  *(long *)(unaff_x22 + 0x130) = lVar3;
  lVar15 = _TtC3MCP19HTTPClientTransport::sessionID;
  *(long *)(unaff_x22 + 0x138) = _TtC3MCP19HTTPClientTransport::sessionID;
  lVar7 = _TtC3MCP19HTTPClientTransport::session;
  puVar1 = (undefined8 *)(lVar16 + _TtC3MCP19HTTPClientTransport::requestModifier);
  *(undefined8 *)(unaff_x22 + 0x140) = *puVar1;
  *(undefined8 *)(unaff_x22 + 0x148) = puVar1[1];
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(lVar16 + lVar7);
  _swift_beginAccess(lVar16 + lVar3,unaff_x22 + 0x10,0,0);
  _swift_beginAccess(lVar16 + lVar15,unaff_x22 + 0x28,0,0);
  pcVar17 = *(code **)(lVar9 + 0x10);
  *(code **)(unaff_x22 + 0x158) = pcVar17;
  *(undefined8 *)(unaff_x22 + 0x160) = 0;
  lVar16 = *(long *)(unaff_x22 + 0x130);
  this = *(URLRequest **)(unaff_x22 + 0xf8);
  url.unknown = *(undefined **)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar7 = *(long *)(unaff_x22 + 0xa8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x98);
  (*pcVar17)(url.unknown,lVar7 + *(long *)(unaff_x22 + 0x128),*(undefined8 *)(unaff_x22 + 200));
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod(this);
  SVar18.bridgeObject = (void *)0x8000000100dab6c0;
  SVar18.str = (char *)0xd000000000000023;
  forHTTPHeaderField.bridgeObject = &DAT_e600000000000000;
  forHTTPHeaderField.str = (char *)0x747065636341;
  Foundation::URLRequest::addValue(SVar18,forHTTPHeaderField,in_x4);
  SVar19.bridgeObject = (void *)0x8000000100d8fc90;
  SVar19.str = (char *)0xd000000000000010;
  forHTTPHeaderField_00.bridgeObject = (void *)0xec00000065707954;
  forHTTPHeaderField_00.str = (char *)0x2d746e65746e6f43;
  Foundation::URLRequest::addValue(SVar19,forHTTPHeaderField_00,in_x4);
  FUN_1001037b4(uVar12,uVar4);
  Foundation::URLRequest::_set_httpBody(this);
  pvVar8 = *(void **)(lVar7 + lVar16 + 8);
  if (pvVar8 != (void *)0x0) {
    pcVar13 = *(char **)(*(long *)(unaff_x22 + 0xa8) + *(long *)(unaff_x22 + 0x130));
    _swift_bridgeObjectRetain(pvVar8);
    SVar20.bridgeObject = pvVar8;
    SVar20.str = pcVar13;
    forHTTPHeaderField_01.bridgeObject = (void *)0x8000000100dab710;
    forHTTPHeaderField_01.str = (char *)0xd000000000000014;
    Foundation::URLRequest::addValue(SVar20,forHTTPHeaderField_01,in_x4);
    _swift_bridgeObjectRelease(pvVar8);
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xa8) + *(long *)(unaff_x22 + 0x138));
  pvVar8 = (void *)puVar1[1];
  if (pvVar8 != (void *)0x0) {
    pcVar13 = (char *)*puVar1;
    _swift_bridgeObjectRetain(pvVar8);
    SVar21.bridgeObject = pvVar8;
    SVar21.str = pcVar13;
    forHTTPHeaderField_02.bridgeObject = (void *)0xee0064492d6e6f69;
    forHTTPHeaderField_02.str = (char *)0x737365532d50434d;
    Foundation::URLRequest::addValue(SVar21,forHTTPHeaderField_02,in_x4);
    _swift_bridgeObjectRelease(pvVar8);
  }
  pvVar8 = *(void **)(unaff_x22 + 0x100);
  if (pvVar8 != (void *)0x0) {
    lVar7 = *(long *)(unaff_x22 + 0x128);
    lVar16 = *(long *)(unaff_x22 + 0x108);
    lVar15 = *(long *)(unaff_x22 + 0xa8);
    _swift_getObjectType();
    pcVar13 = (char *)(lVar15 + lVar7);
    (**(code **)(lVar16 + 0x18))(pcVar13,pvVar8,lVar16);
    if (pvVar8 != (void *)0x0) {
      SVar22.bridgeObject = pvVar8;
      SVar22.str = pcVar13;
      Foundation::URLRequest::_setValue(SVar22,(URLRequest_conflict)0x7a69726f68747541);
      _swift_bridgeObjectRelease(pvVar8);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar16 = *(long *)(unaff_x22 + 0xe8);
  (**(code **)(unaff_x22 + 0x140))(uVar4,uVar14);
  pcVar17 = *(code **)(lVar16 + 8);
  *(code **)(unaff_x22 + 0x168) = pcVar17;
  (*pcVar17)(uVar14,uVar12);
  (**(code **)(lVar16 + 0x20))(uVar14,uVar4,uVar12);
  plVar5 = (long *)(ulong)*(uint *)(PTR__bytes_100ea7950 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x170) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1004eba10;
  tVar23 = (extension_Foundation)::__C::NSURLSession::_bytes
                     ((URLRequest_conflict)*(undefined **)(unaff_x22 + 0xc0));
  return tVar23;
}


