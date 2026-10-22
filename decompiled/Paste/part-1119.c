/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb241c | FUN_100bb241c */

undefined1  [16] FUN_100bb241c(void)

{
  ulong *unaff_x20;
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20 & 0xffffffffffffff8;
  auVar2._8_8_ = (*(ulong *)(uVar1 + 0x18) >> 1) - *(long *)(uVar1 + 0x10);
  auVar2._0_8_ = uVar1 + *(long *)(uVar1 + 0x10) * 8 + 0x20;
  return auVar2;
}



/* Address: 0x100bb2440 | FUN_100bb2440 */

void FUN_100bb2440(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6ee8c(param_1,param_2,1);
  return;
}



/* Address: 0x100bb244c | FUN_100bb244c */

String FUN_100bb244c(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  _ContiguousArrayStorage *p_Var2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  tuple2_conflict3 tVar9;
  String SVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  code *local_58;
  
  uVar1 = 0xff;
  FUN_100bb282c(0xff,param_4,param_5,param_6);
  p_Var2 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
  _swift_allocObject(p_Var2,0x30,7);
  tVar9 = Swift::Array<undefined>::__adoptStorage();
  uVar3 = tVar9._0_8_;
  *(undefined8 *)tVar9._.unknown.unknown = param_1;
  tVar9._.unknown.unknown[8] = param_2 & 1;
  uVar4 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar5 = uVar3;
  Swift::Array<undefined>::__infix(uVar3,param_3,uVar1);
  _swift_bridgeObjectRelease(uVar3);
  puVar6 = &DAT_100c9c2c8;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  local_58 = (code *)uVar5;
  _swift_getKeyPath(&DAT_100c9c2c8,&local_80);
  puVar7 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar4);
  pcVar8 = FUN_100bb29dc;
  FUN_100bd7b38(FUN_100bb29dc,puVar6,uVar4,PTR___type_metadata_for_Swift_String_100eac208,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar7,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_release(puVar6);
  _swift_bridgeObjectRelease(uVar5);
  local_58 = pcVar8;
  FUN_100b6730c(&DAT_101044808);
  FUN_100092e94();
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(pcVar8);
  return SVar10;
}



/* Address: 0x100bb25d4 | FUN_100bb25d4 */

undefined1  [16] FUN_100bb25d4(long param_1,ulong param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  String SVar6;
  String SVar7;
  
  if ((param_2 & 1) != 0) {
    uVar4 = 0xe100000000000000;
    uVar3 = 0x76;
                    /* WARNING: Could not recover jumptable at 0x000100bb2608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(&DAT_100bb26ac + param_1 * 4) + 0x100bb25fc))(0x76,0xe100000000000000)
    ;
    auVar5._8_8_ = uVar4;
    auVar5._0_8_ = uVar3;
    return auVar5;
  }
  if (6 < param_1 + 0xf000000000000000U >> 0x3d) {
    SVar6 = Swift::CustomStringConvertible::get_description();
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar6,SVar7);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    auVar1._8_8_ = 0xea0000000000746e;
    auVar1._0_8_ = 0x692d64656e676973;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb26ac);
  (*pcVar2)();
}



/* Address: 0x100bb26c0 | FUN_100bb26c0 */

void FUN_100bb26c0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100bb26c8 | FUN_100bb26c8 */

undefined8 * FUN_100bb26c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100bb270c | FUN_100bb270c */

undefined8 * FUN_100bb270c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100bb2764 | FUN_100bb2764 */

void FUN_100bb2764(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100bb2778 | FUN_100bb2778 */

undefined8 * FUN_100bb2778(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100bb27c0 | FUN_100bb27c0 */

int FUN_100bb27c0(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100bb2800 | FUN_100bb2800 */

void FUN_100bb2800(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bb280c | FUN_100bb280c */

void FUN_100bb280c(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
  }
  *(bool *)(param_1 + 1) = param_2 != 0;
  return;
}



/* Address: 0x100bb282c | FUN_100bb282c */

void FUN_100bb282c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bb2838 | FUN_100bb2838 */

void FUN_100bb2838(undefined8 *param_1)

{
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = *param_1;
  local_28 = *(undefined1 *)(param_1 + 1);
  _swift_getAtKeyPath(&local_30);
  return;
}



/* Address: 0x100bb2878 | FUN_100bb2878 */

void FUN_100bb2878(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100bb244c(*unaff_x20,*(undefined1 *)(unaff_x20 + 1),unaff_x20[2],
                *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100bb289c | FUN_100bb289c */

void FUN_100bb289c(void)

{
  undefined8 *unaff_x20;
  
  FUN_100bb25d4(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x100bb28a8 | FUN_100bb28a8 */

undefined8 * FUN_100bb28a8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100bb28e4 | FUN_100bb28e4 */

undefined8 * FUN_100bb28e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100bb292c | FUN_100bb292c */

undefined8 * FUN_100bb292c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100bb296c | FUN_100bb296c */

int FUN_100bb296c(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 4);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100bb29ac | FUN_100bb29ac */

void FUN_100bb29ac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bb29b8 | thunk_FUN_100b652f8 */

void thunk_FUN_100b652f8(void)

{
  FUN_100b652f8();
  return;
}



/* Address: 0x100bb29bc | FUN_100bb29bc */

undefined1  [16] FUN_100bb29bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x18;
  return auVar1;
}



/* Address: 0x100bb29c8 | FUN_100bb29c8 */

void FUN_100bb29c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  param_2[2] = param_1[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}



/* Address: 0x100bb29dc | FUN_100bb29dc */

void FUN_100bb29dc(void)

{
  FUN_100bb2838();
  return;
}



/* Address: 0x100bb29f8 | thunk_FUN_100bb28a8 */

void thunk_FUN_100bb28a8(void)

{
  FUN_100bb28a8();
  return;
}



/* Address: 0x100bb29fc | FUN_100bb29fc */

undefined1 * FUN_100bb29fc(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  
  FUN_100076688(param_1,auStack_58);
  puVar1 = auStack_58;
  FUN_100bb2a58(puVar1);
  FUN_100004594(param_1);
  return puVar1;
}



/* Address: 0x100bb2a58 | FUN_100bb2a58 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bb2bd4) */
/* WARNING: Removing unreachable block (ram,0x000100bb2c5c) */
/* WARNING: Removing unreachable block (ram,0x000100bb2c6c) */
/* WARNING: Removing unreachable block (ram,0x000100bb2b3c) */
/* WARNING: Removing unreachable block (ram,0x000100bb2c70) */

ID FUN_100bb2a58(long param_1)

{
  undefined *puVar1;
  ID self;
  NSString *pNVar2;
  undefined *puVar3;
  long lVar4;
  ID unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_101046c40;
  FUN_100b6730c();
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  self = *(ID *)(param_1 + 0x18);
  FUN_100004640(param_1,self);
  FUN_100bb2f1c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    _objc_allocWithZone();
    self = _objc_msgSend(unaff_x20,"init");
    local_51 = 0;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_51);
    if (puVar3 == (undefined *)0x0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
    }
    _objc_msgSend(self,"setCity:",pNVar2);
    local_52 = 1;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52);
    if (puVar3 == (undefined *)0x0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
    }
    _objc_msgSend(self,"setCountryCode:",pNVar2);
    local_53 = 2;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_53);
    if (puVar3 == (undefined *)0x0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar3);
    }
    _objc_msgSend(self,"setRegion:",pNVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar1)
    ;
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return self;
}



/* Address: 0x100bb2d10 | _TtC6Sentry12GeoDecodable::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12GeoDecodable::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bb2d30 | FUN_100bb2d30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb2d30(void)

{
  return ZEXT816(0x100fa29f8);
}



/* Address: 0x100bb2d50 | FUN_100bb2d50 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bb2d84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bb2d50(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100bb2dac | FUN_100bb2dac */

undefined1  [16] FUN_100bb2dac(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = &DAT_e400000000000000;
    auVar4._0_8_ = 0x79746963;
    return auVar4;
  }
  puVar2 = (undefined1 *)0xec00000065646f63;
  uVar1 = 0x5f7972746e756f63;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e600000000000000;
    uVar1 = 0x6e6f69676572;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100bb2e00 | FUN_100bb2e00 */

void FUN_100bb2e00(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bebd70(*param_1,*param_2);
  return;
}



/* Address: 0x100bb2e0c | FUN_100bb2e0c */

void FUN_100bb2e0c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec854(*unaff_x20);
  return;
}



/* Address: 0x100bb2e14 | FUN_100bb2e14 */

void FUN_100bb2e14(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becc00::caseD_bc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bb2e1c | FUN_100bb2e1c */

void FUN_100bb2e1c(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed504(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bb2e24 | FUN_100bb2e24 */

void FUN_100bb2e24(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bb2d50(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bb2e50 | FUN_100bb2e50 */

void FUN_100bb2e50(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bb2dac();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bb2e78 | FUN_100bb2e78 */

void FUN_100bb2e78(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bb2dac(*unaff_x20);
  return;
}



/* Address: 0x100bb2e80 | FUN_100bb2e80 */

void FUN_100bb2e80(undefined1 *param_1,undefined1 param_2)

{
  FUN_100bb2d50();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bb2ea4 | FUN_100bb2ea4 */

String FUN_100bb2ea4(void)

{
  String SVar1;
  
  FUN_100bb2f1c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bb2ecc | FUN_100bb2ecc */

String FUN_100bb2ecc(void)

{
  String SVar1;
  
  FUN_100bb2f1c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bb2ef4 | FUN_100bb2ef4 */

void FUN_100bb2ef4(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100bb29fc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100bb2f1c | FUN_100bb2f1c */

void FUN_100bb2f1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c438;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c438,&DAT_100f3a340);
  DAT_101046c48 = pTVar1;
  return;
}



/* Address: 0x100bb2f5c | FUN_100bb2f5c */

void FUN_100bb2f5c(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100bb2fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bb2fa8 + (ulong)(byte)(&DAT_100c9c2fd)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x02';
                    /* WARNING: Could not recover jumptable at 0x000100bb2fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bb2fdc + (ulong)(byte)(&DAT_100c9c2f8)[uVar1] * 4))();
  return;
}



/* Address: 0x100bb3018 | FUN_100bb3018 */

undefined1  [16] FUN_100bb3018(void)

{
  return ZEXT816(0x100f3a340);
}



/* Address: 0x100bb3028 | thunk_FUN_100bb302c */

void thunk_FUN_100bb302c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c410;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c410,&DAT_100f3a340);
  DAT_101046c50 = pTVar1;
  return;
}



/* Address: 0x100bb302c | FUN_100bb302c */

void FUN_100bb302c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c410;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c410,&DAT_100f3a340);
  DAT_101046c50 = pTVar1;
  return;
}



/* Address: 0x100bb306c | thunk_FUN_100bb3070 */

void thunk_FUN_100bb3070(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c370,&DAT_100f3a340);
  DAT_101046c58 = pTVar1;
  return;
}



/* Address: 0x100bb3070 | FUN_100bb3070 */

void FUN_100bb3070(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c370;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c370,&DAT_100f3a340);
  DAT_101046c58 = pTVar1;
  return;
}



/* Address: 0x100bb30b0 | thunk_FUN_100bb30b4 */

void thunk_FUN_100bb30b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c348,&DAT_100f3a340);
  DAT_101046c60 = pTVar1;
  return;
}



/* Address: 0x100bb30b4 | FUN_100bb30b4 */

void FUN_100bb30b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046c60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9c348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9c348,&DAT_100f3a340);
  DAT_101046c60 = pTVar1;
  return;
}



/* Address: 0x100bb30f4 | _TtC6Sentry27SentryMobileProvisionParser::mobileProvisionProfileProvisionsAllDevices */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry27SentryMobileProvisionParser::mobileProvisionProfileProvisionsAllDevices
               (ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb3118();
  return uVar1 & 1;
}



/* Address: 0x100bb3118 | FUN_100bb3118 */

undefined1 FUN_100bb3118(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::provisionsAllDevices)
  ;
}



/* Address: 0x100bb3128 | _TtC6Sentry27SentryMobileProvisionParser::mobileProvisionProfileAllowsDebugging */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry27SentryMobileProvisionParser::mobileProvisionProfileAllowsDebugging
               (ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb314c();
  return uVar1 & 1;
}



/* Address: 0x100bb314c | FUN_100bb314c */

undefined1 FUN_100bb314c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::getTaskAllow);
}



/* Address: 0x100bb315c | FUN_100bb315c */

undefined8 FUN_100bb315c(void)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  _objc_allocWithZone();
  uVar1 = 0;
  FUN_100bb3218(0,0);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return uVar1;
}



/* Address: 0x100bb31b8 | _TtC6Sentry27SentryMobileProvisionParser::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry27SentryMobileProvisionParser::init(ID param_1,SEL param_2)

{
  FUN_100bb315c();
  return param_1;
}



/* Address: 0x100bb31d8 | FUN_100bb31d8 */

void FUN_100bb31d8(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100bb3218(param_1,param_2);
  return;
}



/* Address: 0x100bb3218 | FUN_100bb3218 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bb3218(undefined8 param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::provisionsAllDevices) = 0;
  *(undefined1 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::getTaskAllow) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::embeddedProfilePath)
  ;
  *puVar1 = 0;
  puVar1[1] = 0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  if (param_2 == (undefined1 *)0x0) {
    IVar3 = _objc_msgSend((ID)&_OBJC_CLASS___NSBundle,"mainBundle");
    param_1 = 0x6465646465626d65;
    param_2 = &DAT_e800000000000000;
    FUN_100bb3bc4(0x6465646465626d65,&DAT_e800000000000000,0x7270656c69626f6d,0xef6e6f697369766f,
                  IVar3);
  }
  puVar1 = (undefined8 *)(IVar2 + _TtC6Sentry27SentryMobileProvisionParser::embeddedProfilePath);
  uVar4 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar4);
  lVar5 = puVar1[1];
  if (lVar5 == 0) {
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd000000000000030,0x8000000100dce7e0,0xd000000000000063,0x8000000100dce820,0x23
                 );
  }
  else {
    uVar4 = *puVar1;
    _swift_bridgeObjectRetain(lVar5);
    FUN_100bb33c8(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  return IVar2;
}



/* Address: 0x100bb33c8 | FUN_100bb33c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bb34a0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100bb33c8(void)

{
  undefined *puVar1;
  code *pcVar2;
  Encoding EVar3;
  URL UVar4;
  Data data;
  NSDataReadingOptions NVar5;
  Data DVar6;
  Locale LVar7;
  undefined1 *puVar8;
  Range<Index> RVar9;
  NSData *pNVar10;
  ID IVar11;
  long *plVar12;
  undefined *puVar13;
  Index IVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  long unaff_x20;
  NSDataReadingOptions contentsOf;
  long lVar18;
  Encoding using;
  undefined1 *puVar19;
  long lVar20;
  String SVar22;
  String SVar23;
  undefined8 auStack_100 [2];
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  long local_c8 [3];
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long local_98;
  String local_88 [2];
  long local_68;
  String SVar21;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar13 = &DAT_101046ca8;
  FUN_100b6730c();
  puVar19 = auStack_f0 + -(*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  EVar3 = Encoding::_typeMetadataAccessor();
  lVar20 = *(long *)(EVar3.unknown + -8);
  using.unknown = puVar19 + -(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  contentsOf.unknown = using.unknown + -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_init();
  puVar13 = (undefined *)0x0;
  data = Foundation::Data::_init(contentsOf);
  NVar5.unknown = contentsOf.unknown;
  local_e8 = lVar20;
  puStack_e0 = EVar3.unknown;
  (**(code **)(lVar18 + 8))(contentsOf.unknown,UVar4.unknown);
  Encoding::_get_isoLatin1((Encoding)NVar5.unknown);
  DVar6 = data;
  local_d8 = puVar13;
  (extension_Foundation)::Swift::String::_init((Encoding)data.unknown);
  if (puVar13 == (undefined *)0x0) {
LAB_100bb36a8:
    FUN_100b84dac(0);
    FUN_100b84df8(1,0xd000000000000030,0x8000000100dce9b0,0xd000000000000063,0x8000000100dce820,0x39
                 );
  }
  else {
    local_88[0].bridgeObject = puVar13;
    local_88[0].str = DVar6.unknown;
    local_b0 = 0x7473696c703c;
    puStack_a8 = &DAT_e600000000000000;
    LVar7 = Foundation::Locale::typeMetadataAccessor();
    puVar8 = puVar19;
    FUN_1000c9ffc(puVar19,1,1,LVar7.unknown);
    FUN_100008378();
    *(undefined1 **)(contentsOf.unknown + -0x10) = puVar8;
    *(undefined1 **)(contentsOf.unknown + -8) = puVar8;
    RVar9.unknown = (undefined *)&local_b0;
    uVar16 = 0;
    (extension_Foundation)::Swift::StringProtocol::_range
              (RVar9.unknown,0,0,0,1,puVar19,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___type_metadata_for_Swift_String_100eac208);
    FUN_100b74780(puVar19,&DAT_101046ca8);
    if ((uVar16 & 1) != 0) {
LAB_100bb36a0:
      _swift_bridgeObjectRelease(puVar13);
      goto LAB_100bb36a8;
    }
    local_b0 = 0x3e7473696c702f3c;
    puStack_a8 = &DAT_e800000000000000;
    FUN_1000c9ffc(puVar19,1,1,LVar7.unknown);
    *(undefined1 **)(contentsOf.unknown + -0x10) = puVar8;
    *(undefined1 **)(contentsOf.unknown + -8) = puVar8;
    IVar14.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
    uVar16 = 0;
    (extension_Foundation)::Swift::StringProtocol::_range
              (&local_b0,0,0,0,1,puVar19,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___type_metadata_for_Swift_String_100eac208);
    FUN_100b74780(puVar19,&DAT_101046ca8);
    if ((uVar16 & 1) != 0) goto LAB_100bb36a0;
    SVar21.bridgeObject = puVar13;
    SVar21.str = DVar6.unknown;
    IVar14 = Swift::String::index(IVar14,0,SVar21);
    if ((ulong)IVar14.cmsgPointer.unknown >> 0xe < (ulong)RVar9.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100bb3b6c);
      (*pcVar2)();
    }
    SVar23.bridgeObject = DVar6.unknown;
    SVar23.str = (char *)IVar14.cmsgPointer.unknown;
    EVar3.unknown = puVar13;
    SVar22.str = Swift::String::get_subscript(RVar9,SVar23);
    _swift_bridgeObjectRelease(puVar13);
    SVar22.bridgeObject = (void *)IVar14.cmsgPointer.unknown;
    SVar21 = Swift::String::__fromSubstring(SVar22);
    _swift_bridgeObjectRelease();
    local_88[0] = SVar21;
    Encoding::_get_utf8(EVar3);
    uVar16 = 0;
    EVar3.unknown = using.unknown;
    (extension_Foundation)::Swift::StringProtocol::_data(using,false);
    (**(code **)(local_e8 + 8))(using.unknown,puStack_e0);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    if (uVar16 >> 0x3c < 0xf) {
      local_c8[1] = 100;
      pNVar10 = Foundation::Data::_bridgeToObjectiveC((Data)EVar3.unknown);
      local_c8[0] = 0;
      IVar11 = _objc_msgSend((ID)&_OBJC_CLASS___NSPropertyListSerialization,
                             "propertyListWithData:options:format:error:",pNVar10,0,local_c8 + 1,
                             local_c8);
      if (IVar11 == 0) {
        lVar18 = local_c8[0];
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        FUN_10003bf18(EVar3.unknown,uVar16);
        FUN_10003bf2c(data.unknown,local_d8);
        _swift_errorRelease(lVar18);
        goto LAB_100bb3700;
      }
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar11);
      FUN_100011080(&local_b0,local_88);
      FUN_10000cbfc(local_88,&local_b0);
      puVar13 = &DAT_101044968;
      FUN_100b6730c(&DAT_101044968);
      puVar1 = PTR___type_metadata_for_Any_100eae0c0;
      plVar12 = local_c8;
      _swift_dynamicCast(plVar12,&local_b0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar13,6);
      lVar18 = local_c8[0];
      if (((ulong)plVar12 & 1) == 0) {
LAB_100bb3a84:
        FUN_10003bf18(EVar3.unknown,uVar16);
        FUN_10003bf2c(data.unknown,local_d8);
      }
      else {
        if (*(long *)(local_c8[0] + 0x10) == 0) {
LAB_100bb3990:
          uVar17 = 0;
        }
        else {
          _swift_bridgeObjectRetain(local_c8[0]);
          lVar20 = -0x2fffffffffffffec;
          uVar15 = 0;
          FUN_100071370(0xd000000000000014);
          if ((uVar15 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar18);
            goto LAB_100bb3990;
          }
          FUN_10000cbfc(*(long *)(lVar18 + 0x38) + lVar20 * 0x20,&local_b0);
          _swift_bridgeObjectRelease(lVar18);
          plVar12 = local_c8;
          _swift_dynamicCast(plVar12,&local_b0,puVar1 + 8,
                             PTR___type_metadata_for_Swift_Bool_100eac570,6);
          if (((ulong)plVar12 & 1) == 0) {
            uVar17 = 0;
          }
          else {
            uVar17 = (undefined1)local_c8[0];
          }
        }
        *(undefined1 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::provisionsAllDevices)
             = uVar17;
        if (*(long *)(lVar18 + 0x10) == 0) {
LAB_100bb39f8:
          puStack_a8 = (undefined1 *)0x0;
          local_b0 = 0;
          local_98 = 0;
          uStack_a0 = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar18);
          lVar20 = 0x6d656c7469746e45;
          uVar15 = 0xec00000073746e65;
          FUN_100071370(0x6d656c7469746e45);
          if ((uVar15 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar18);
            goto LAB_100bb39f8;
          }
          FUN_10000cbfc(*(long *)(lVar18 + 0x38) + lVar20 * 0x20,&local_b0);
          _swift_bridgeObjectRelease(lVar18);
        }
        _swift_bridgeObjectRelease(lVar18);
        if (local_98 != 0) {
          plVar12 = local_c8;
          _swift_dynamicCast(plVar12,&local_b0,puVar1 + 8,puVar13,6);
          lVar18 = local_c8[0];
          if (((ulong)plVar12 & 1) == 0) goto LAB_100bb3a84;
          if (*(long *)(local_c8[0] + 0x10) == 0) {
LAB_100bb3ae4:
            puStack_a8 = (undefined1 *)0x0;
            local_b0 = 0;
            local_98 = 0;
            uStack_a0 = 0;
          }
          else {
            _swift_bridgeObjectRetain(local_c8[0]);
            lVar20 = 0x6b7361742d746567;
            uVar15 = 0xee00776f6c6c612d;
            FUN_100071370(0x6b7361742d746567);
            if ((uVar15 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar18);
              goto LAB_100bb3ae4;
            }
            FUN_10000cbfc(*(long *)(lVar18 + 0x38) + lVar20 * 0x20,&local_b0);
            _swift_bridgeObjectRelease(lVar18);
          }
          FUN_10003bf18(EVar3.unknown,uVar16);
          FUN_10003bf2c(data.unknown,local_d8);
          _swift_bridgeObjectRelease(lVar18);
          FUN_100004594(local_88);
          if (local_98 == 0) {
            FUN_100b74780(&local_b0,&DAT_101044760);
LAB_100bb3b54:
            uVar17 = 0;
          }
          else {
            plVar12 = local_c8;
            _swift_dynamicCast(plVar12,&local_b0,puVar1 + 8,
                               PTR___type_metadata_for_Swift_Bool_100eac570,6);
            if ((int)plVar12 == 0) goto LAB_100bb3b54;
            uVar17 = (undefined1)local_c8[0];
          }
          *(undefined1 *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::getTaskAllow) =
               uVar17;
          goto LAB_100bb3700;
        }
        FUN_10003bf18(EVar3.unknown,uVar16);
        FUN_10003bf2c(data.unknown,local_d8);
        FUN_100b74780(&local_b0,&DAT_101044760);
      }
      FUN_100004594(local_88);
      goto LAB_100bb3700;
    }
  }
  FUN_10003bf2c(data.unknown,local_d8);
LAB_100bb3700:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100bb3b70 | FUN_100bb3b70 */

bool FUN_100bb3b70(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + _TtC6Sentry27SentryMobileProvisionParser::embeddedProfilePath + 8) !=
         0;
}



/* Address: 0x100bb3b8c | _TtC6Sentry27SentryMobileProvisionParser::hasEmbeddedMobileProvisionProfile */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry27SentryMobileProvisionParser::hasEmbeddedMobileProvisionProfile
               (ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bb3b70();
  return uVar1 & 1;
}



/* Address: 0x100bb3bb0 | _TtC6Sentry27SentryMobileProvisionParser::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry27SentryMobileProvisionParser::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + embeddedProfilePath + 8));
  return;
}


