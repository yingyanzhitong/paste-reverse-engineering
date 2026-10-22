/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006b4250 | FUN_1006b4250 */

void FUN_1006b4250(undefined8 param_1)

{
  FUN_1006b3af0(param_1,PTR___type_metadata_for_Swift_UInt64_100eade90,
                PTR___protocol_witness_table_for_Swift_UInt64___Swift_CustomStringConvertible_in_Swift_100eadeb8
               );
  return;
}



/* Address: 0x1006b4288 | FUN_1006b4288 */

void FUN_1006b4288(UInt128 param_1)

{
  (extension_Swift)::Swift::SingleValueEncodingContainer::_encode(param_1);
  return;
}



/* Address: 0x1006b429c | FUN_1006b429c */

void FUN_1006b429c(void)

{
  FUN_1006b3bdc();
  return;
}



/* Address: 0x1006b42bc | FUN_1006b42bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1006b42bc(Date param_1)

{
  Date self;
  code *pcVar1;
  NSDate *pNVar2;
  ISO8601FormatStyle IVar3;
  ISO8601FormatStyle IVar4;
  ulong uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  double dVar10;
  String SVar11;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  
  self.unknown = *(undefined **)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  if (*(char *)(unaff_x20 + 0x30) == '\0') {
    pNVar2 = Foundation::Date::_bridgeToObjectiveC(self);
    objc_stub::stringFromDate_((ID)self.unknown,pNVar2);
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _swift_beginAccess(unaff_x20 + 0x18,&stack0xffffffffffffff78,0x21,0);
    uVar9 = *(ulong *)(unaff_x20 + 0x18);
    uVar8 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x18) = uVar9;
    uVar5 = uVar9;
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
      FUN_1006a2628(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *(ulong *)(unaff_x20 + 0x18) = uVar5;
    }
    uVar8 = *(ulong *)(uVar5 + 0x10);
    uVar9 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1006a2628(uVar9,uVar8 + 1,1,uVar5);
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
    lVar6 = uVar9 + uVar8 * 0x18;
    *(String *)(lVar6 + 0x20) = SVar11;
    *(undefined1 *)(lVar6 + 0x30) = 0;
    *(ulong *)(unaff_x20 + 0x18) = uVar9;
    _swift_endAccess(&stack0xffffffffffffff78);
    FUN_1006ad130(self.unknown,lVar7,0);
    goto LAB_1006b45dc;
  }
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    FUN_1006b0784();
    FUN_1006b4b5c(&DAT_100fdc028,&TargetProtocolConformanceDescriptor_100c6fe48);
    _swift_retain();
    FUN_1006ad0e8(self.unknown,lVar7,1);
    (*(code *)self.unknown)(param_1.unknown,&stack0xffffffffffffff78);
    FUN_1006ad130(self.unknown,lVar7,1);
LAB_1006b4364:
    FUN_100004594(&stack0xffffffffffffff78);
    if (unaff_x21 != 0) {
      return lVar7;
    }
  }
  else {
    uVar8 = lVar7 + (ulong)(self.unknown >= (undefined *)0x2);
    if ((long)-uVar8 < 0 == SCARRY8(~uVar8,(ulong)(self.unknown < (undefined *)0x2))) {
      if (self.unknown == (undefined *)0x0 && lVar7 == 0) {
        FUN_1006b0784();
        FUN_1006b4b5c(&DAT_100fdc028,&TargetProtocolConformanceDescriptor_100c6fe48);
        _swift_retain();
        Foundation::Date::_encode((Date)&stack0xffffffffffffff78);
        goto LAB_1006b4364;
      }
      dVar10 = Foundation::Date::get_timeIntervalSince1970(param_1);
LAB_1006b44b0:
      SVar11 = double::get_description(dVar10);
      _swift_beginAccess(unaff_x20 + 0x18,&stack0xffffffffffffff78,0x21,0);
      uVar9 = *(ulong *)(unaff_x20 + 0x18);
      uVar8 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x18) = uVar9;
      uVar5 = uVar9;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
        FUN_1006a2628(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *(ulong *)(unaff_x20 + 0x18) = uVar5;
      }
      uVar8 = *(ulong *)(uVar5 + 0x10);
      uVar9 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1006a2628(uVar9,uVar8 + 1,1,uVar5);
      }
      *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
      lVar7 = uVar9 + uVar8 * 0x18;
      *(String *)(lVar7 + 0x20) = SVar11;
      *(undefined1 *)(lVar7 + 0x30) = 0;
      *(ulong *)(unaff_x20 + 0x18) = uVar9;
    }
    else {
      if (self.unknown == (undefined *)0x2 && lVar7 == 0) {
        dVar10 = Foundation::Date::get_timeIntervalSince1970(param_1);
        dVar10 = dVar10 * 1000.0;
        goto LAB_1006b44b0;
      }
      IVar3 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
      lVar7 = *(long *)(IVar3.unknown + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
      IVar4 = (extension_Foundation)::Foundation::FormatStyle::_get_iso8601();
      FUN_1006b4d08();
      Foundation::Date::_formatted
                (&local_98,auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown,
                 IVar4.unknown);
      (**(code **)(lVar7 + 8))
                (auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
      _swift_beginAccess(unaff_x20 + 0x18,&stack0xffffffffffffff78,0x21,0);
      uVar9 = *(ulong *)(unaff_x20 + 0x18);
      uVar8 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x18) = uVar9;
      uVar5 = uVar9;
      if ((uVar8 & 1) == 0) {
        uVar5 = 0;
        FUN_1006a2628(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *(ulong *)(unaff_x20 + 0x18) = uVar5;
      }
      uVar8 = *(ulong *)(uVar5 + 0x10);
      uVar9 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar8) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1006a2628(uVar9,uVar8 + 1,1,uVar5);
      }
      *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
      lVar7 = uVar9 + uVar8 * 0x18;
      *(undefined8 *)(lVar7 + 0x20) = local_98;
      *(undefined8 *)(lVar7 + 0x28) = uStack_90;
      *(undefined1 *)(lVar7 + 0x30) = 0;
      *(ulong *)(unaff_x20 + 0x18) = uVar9;
    }
    _swift_endAccess(&stack0xffffffffffffff78);
  }
LAB_1006b45dc:
  _swift_beginAccess(unaff_x20 + 0x18,&stack0xffffffffffffff78,0x21,0);
  uVar8 = *(ulong *)(unaff_x20 + 0x18);
  if (*(long *)(uVar8 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b4668);
    (*pcVar1)();
  }
  uVar5 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_1006f8218();
    lVar7 = *(long *)(uVar8 + 0x10);
  }
  else {
    lVar7 = *(long *)(uVar8 + 0x10);
  }
  if (lVar7 != 0) {
    lVar6 = *(long *)(uVar8 + lVar7 * 0x18 + 8);
    *(long *)(uVar8 + 0x10) = lVar7 + -1;
    *(ulong *)(unaff_x20 + 0x18) = uVar8;
    _swift_endAccess(&stack0xffffffffffffff78);
    return lVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b4680);
  (*pcVar1)();
}



/* Address: 0x1006b474c | FUN_1006b474c */

undefined8 FUN_1006b474c(URL param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  String *pSVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  String SVar8;
  undefined1 auStack_68 [24];
  
  SVar8 = Foundation::URL::get_absoluteString(param_1);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_68,0x21,0);
  uVar7 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x18) = uVar7;
  uVar4 = uVar7;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
    FUN_1006a2628(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(unaff_x20 + 0x18) = uVar4;
  }
  uVar3 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar3) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1006a2628(uVar7,uVar3 + 1,1,uVar4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
  pSVar5 = (String *)(uVar7 + 0x20 + uVar3 * 0x18);
  *pSVar5 = SVar8;
  *(undefined1 *)&pSVar5[1].str = 0;
  *(ulong *)(unaff_x20 + 0x18) = uVar7;
  if (*(long *)(uVar7 + 0x10) != 0) {
    lVar6 = *(long *)(uVar7 + 0x10) + -1;
    uVar1 = *(undefined8 *)(uVar7 + 0x20 + lVar6 * 0x18);
    *(long *)(uVar7 + 0x10) = lVar6;
    *(ulong *)(unaff_x20 + 0x18) = uVar7;
    _swift_endAccess(auStack_68);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b4874);
  (*pcVar2)();
}



/* Address: 0x1006b4874 | FUN_1006b4874 */

code * FUN_1006b4874(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ef6d58;
  _swift_allocObject(&DAT_100ef6d58,uVar5 + lVar3,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2)
  ;
  return FUN_1006b4a6c;
}



/* Address: 0x1006b4934 | FUN_1006b4934 */

void FUN_1006b4934(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  String SVar1;
  char *local_88;
  void *pvStack_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Encoder::_singleValueContainer();
  Foundation::Date::_formatted(&local_88,param_3,param_4,param_5);
  SVar1.bridgeObject = pvStack_80;
  SVar1.str = local_88;
  FUN_10007d048(auStack_78,local_60);
  Swift::SingleValueEncodingContainer::_encode(SVar1);
  _swift_bridgeObjectRelease(pvStack_80);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1006b4a08 | FUN_1006b4a08 */

void FUN_1006b4a08(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1006ad108();
    return;
  }
  return;
}



/* Address: 0x1006b4a1c | FUN_1006b4a1c */

void FUN_1006b4a1c(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006b4a6c | FUN_1006b4a6c */

void FUN_1006b4a6c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_1006b4934(param_1,param_2,unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)),
                *(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006b4a98 | FUN_1006b4a98 */

undefined1  [16] FUN_1006b4a98(void)

{
  return ZEXT816(0x100ef6dd8);
}



/* Address: 0x1006b4aa8 | FUN_1006b4aa8 */

undefined1  [16] FUN_1006b4aa8(void)

{
  return ZEXT816(0x100ef6e70);
}



/* Address: 0x1006b4ab8 | FUN_1006b4ab8 */

void FUN_1006b4ab8(void)

{
  FUN_1006b4ac0(0);
  return;
}



/* Address: 0x1006b4ac0 | FUN_1006b4ac0 */

void FUN_1006b4ac0(void)

{
  Date DVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100fdc038 != 0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = &DAT_100fdc040;
  FUN_1000f8b08(&DAT_100fdc040,&DAT_100c6fd28);
  uVar3 = 0x45000002;
  _swift_getFunctionTypeMetadata2
            (0x45000002,DVar1.unknown,puVar2,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fdc038 = uVar3;
  return;
}



/* Address: 0x1006b4b3c | FUN_1006b4b3c */

undefined1  [16] FUN_1006b4b3c(void)

{
  return ZEXT816(0x100ef6ee8);
}



/* Address: 0x1006b4b4c | FUN_1006b4b4c */

undefined1  [16] FUN_1006b4b4c(void)

{
  return ZEXT816(0x100ef6f10);
}



/* Address: 0x1006b4b5c | FUN_1006b4b5c */

void FUN_1006b4b5c(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1006b0784(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1006b4b9c | FUN_1006b4b9c */

void FUN_1006b4b9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc180 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70060;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70060,&DAT_100ef6fe8);
  DAT_100fdc180 = pTVar1;
  return;
}



/* Address: 0x1006b4bdc | FUN_1006b4bdc */

void FUN_1006b4bdc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006b4be8 | thunk_FUN_1006b4bec */

undefined8 * thunk_FUN_1006b4bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006b4bec | FUN_1006b4bec */

undefined8 * FUN_1006b4bec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006b4c2c | FUN_1006b4c2c */

undefined8 * FUN_1006b4c2c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1006b4c90 | FUN_1006b4c90 */

undefined8 * FUN_1006b4c90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1006b4cd4 | FUN_1006b4cd4 */

undefined1  [16] FUN_1006b4cd4(void)

{
  return ZEXT816(0x100ef6fe8);
}



/* Address: 0x1006b4ce4 | FUN_1006b4ce4 */

void FUN_1006b4ce4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006b4d08 | FUN_1006b4d08 */

void FUN_1006b4d08(void)

{
  ISO8601FormatStyle IVar1;
  undefined *puVar2;
  
  if (DAT_100fdc238 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
             ,IVar1.unknown);
  DAT_100fdc238 = puVar2;
  return;
}



/* Address: 0x1006b4d4c | FUN_1006b4d4c */

undefined8 FUN_1006b4d4c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  return *(undefined8 *)(param_2 + 0x10);
}



/* Address: 0x1006b4d88 | thunk_FUN_1003543a4 */

void thunk_FUN_1003543a4(void)

{
  thunk_FUN_1003543a4();
  return;
}



/* Address: 0x1006b4d8c | thunk_FUN_1006b4bec */

void thunk_FUN_1006b4bec(void)

{
  thunk_FUN_1006b4bec();
  return;
}



/* Address: 0x1006b4d90 | FUN_1006b4d90 */

void FUN_1006b4d90(void)

{
  undefined1 *unaff_x20;
  
  FUN_1006b4d9c(*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1006b4d9c | FUN_1006b4d9c */

undefined1  [16] FUN_1006b4d9c(byte param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_40;
  undefined8 local_38;
  
  pcVar4 = param_3;
  if (param_1 < 3) {
    if (param_1 == 0) {
      Swift::_StringGuts::grow(0x23,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_38 = 0x8000000100db0140;
      local_40 = 0xd000000000000020;
    }
    else if (param_1 == 1) {
      Swift::_StringGuts::grow(0x46,param_2);
      local_40 = 0;
      local_38 = 0xe000000000000000;
      SVar5.bridgeObject = (void *)0x8000000100db00f0;
      SVar5.str = (char *)0xd000000000000043;
      SVar10.bridgeObject = param_4;
      SVar10.str = pcVar4;
      Swift::String::append(SVar5,SVar10);
    }
    else {
      Swift::_StringGuts::grow(0x1d,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_38 = 0x8000000100db00d0;
      local_40 = 0xd00000000000001a;
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 3) {
      Swift::_StringGuts::grow(0x28,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_38 = 0x8000000100db00a0;
      local_40 = 0xd000000000000025;
    }
    else {
      Swift::_StringGuts::grow(0x2c,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_38 = 0x8000000100db0070;
      local_40 = 0xd000000000000029;
    }
  }
  else {
    if (param_1 != 5) {
      Swift::_StringGuts::grow(0x6b,param_2);
      local_40 = 0;
      local_38 = 0xe000000000000000;
      SVar8.bridgeObject = (void *)0x8000000100daffd0;
      SVar8.str = (char *)0xd000000000000017;
      SVar13.bridgeObject = param_4;
      SVar13.str = pcVar4;
      Swift::String::append(SVar8,SVar13);
      SVar9.bridgeObject = param_3;
      SVar9.str = param_2.unknown;
      SVar14.bridgeObject = param_4;
      SVar14.str = pcVar4;
      Swift::String::append(SVar9,SVar14);
      pcVar2 = (char *)0xd000000000000052;
      pvVar3 = (void *)0x8000000100dafff0;
      goto LAB_1006b4f70;
    }
    Swift::_StringGuts::grow(0x18,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_38 = 0x8000000100db0050;
    local_40 = 0xd000000000000015;
  }
  SVar6.bridgeObject = param_3;
  SVar6.str = param_2.unknown;
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar4;
  Swift::String::append(SVar6,SVar11);
  pcVar2 = (char *)0x27;
  pvVar3 = (void *)0xe100000000000000;
LAB_1006b4f70:
  SVar7.bridgeObject = pvVar3;
  SVar7.str = pcVar2;
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar4;
  Swift::String::append(SVar7,SVar12);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x1006b4ff8 | FUN_1006b4ff8 */

bool FUN_1006b4ff8(char *param_1,char *param_2)

{
  bool bVar1;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (*(undefined **)(param_1 + 8) != *(undefined **)(param_2 + 8) ||
      *(undefined **)(param_1 + 0x10) != *(undefined **)(param_2 + 0x10)) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(param_1 + 8),
                       (_StringGuts)*(undefined **)(param_1 + 0x10),
                       (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 8));
    return bVar1;
  }
  return true;
}



/* Address: 0x1006b5040 | FUN_1006b5040 */

undefined1  [16] FUN_1006b5040(void)

{
  return ZEXT816(0x100ef7420);
}



/* Address: 0x1006b5050 | FUN_1006b5050 */

void FUN_1006b5050(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1006b505c | FUN_1006b505c */

void FUN_1006b505c(void)

{
  return;
}



/* Address: 0x1006b5060 | FUN_1006b5060 */

undefined1  [16] FUN_1006b5060(void)

{
  return ZEXT816(0x100ef74a0);
}



/* Address: 0x1006b5070 | FUN_1006b5070 */

String FUN_1006b5070(char *param_1,undefined *param_2,long param_3,void *param_4,byte param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  void *pvVar3;
  String SVar4;
  byte *pbVar5;
  __int64 _Var6;
  undefined *puVar7;
  char *pcVar8;
  void *pvVar9;
  undefined *puVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  long local_78;
  void *pvStack_70;
  String separator_00;
  
  if (param_5 < 2) {
    if (param_5 != 0) {
      SVar16.bridgeObject = param_2;
      SVar16.str = param_1;
      _Var6 = Swift::String::get_count(SVar16);
      if (_Var6 == 0) {
        _swift_beginAccess(param_3 + 0x10,&local_78,0,0);
        param_2 = *(undefined **)(param_3 + 0x10);
        puVar7 = param_2;
        _swift_bridgeObjectRetain();
        FUN_1006b53b0();
      }
      else {
        _swift_beginAccess(param_3 + 0x10,&local_78,0,0);
        puVar10 = *(undefined **)(param_3 + 0x10);
        _swift_bridgeObjectRetain(param_2);
        puVar7 = puVar10;
        _swift_bridgeObjectRetain();
        FUN_1006b6050();
        _swift_bridgeObjectRelease(puVar10);
      }
      _swift_bridgeObjectRelease(param_2);
      FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
      FUN_1006b7a54();
      separator_00.bridgeObject = (void *)0xe100000000000000;
      separator_00.str = (char *)0x26;
      SVar17 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
LAB_1006b5384:
      _swift_bridgeObjectRelease(puVar7);
      return SVar17;
    }
    if (param_4 != (void *)0x0) {
      pcVar8 = (char *)0x0;
      pvVar9 = param_4;
      local_78 = param_3;
      pvStack_70 = param_4;
      FUN_1006ad53c(param_3,param_4);
      _swift_bridgeObjectRetain(param_2);
      SVar14.bridgeObject = (void *)0xe100000000000000;
      SVar14.str = (char *)0x3d;
      pbVar5 = (byte *)0x3d;
      SVar18.bridgeObject = pvVar9;
      SVar18.str = pcVar8;
      Swift::String::append(SVar14,SVar18);
      FUN_100a357f0();
      pcVar8 = (char *)(ulong)*pbVar5;
      FUN_1006b7aa4();
      puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
      FUN_100a348f0();
      SVar15.bridgeObject = puVar7;
      SVar15.str = pcVar8;
      SVar19.bridgeObject = pvVar9;
      SVar19.str = (char *)pbVar5;
      Swift::String::append(SVar15,SVar19);
      _swift_bridgeObjectRelease(puVar7);
      FUN_1006ad108(param_3,param_4,0);
      SVar4.bridgeObject = param_2;
      SVar4.str = param_1;
      return SVar4;
    }
  }
  else if (param_5 == 2) {
    pvVar9 = (void *)0x0;
    _swift_beginAccess(param_3 + 0x10,&local_78,0);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar11 = *(long *)(param_3 + 0x10);
    lVar13 = *(long *)(lVar11 + 0x10);
    if (lVar13 != 0) {
      _swift_bridgeObjectRetain(lVar11);
      FUN_1006bf7c0(0,lVar13,0);
      pbVar5 = (byte *)(lVar11 + 0x30);
      do {
        uVar1 = *(undefined8 *)(pbVar5 + -0x10);
        pvVar3 = *(void **)(pbVar5 + -8);
        pcVar12 = (char *)(ulong)*pbVar5;
        _swift_bridgeObjectRetain();
        pcVar8 = pcVar12;
        FUN_1006ad53c(uVar1,pvVar3);
        SVar17.bridgeObject = &SUB_e200000000000000;
        SVar17.str = (char *)0x5d5b;
        SVar20.bridgeObject = pvVar9;
        SVar20.str = pcVar8;
        Swift::String::append(SVar17,SVar20);
        pcVar8 = param_1;
        puVar10 = param_2;
        pvVar9 = pvVar3;
        FUN_1006b5070(param_1,param_2,uVar1,pvVar3,pcVar12);
        _swift_bridgeObjectRelease(param_2);
        FUN_1006ad108(uVar1,pvVar3,pcVar12);
        uVar2 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
          FUN_1006bf7c0(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
        }
        pbVar5 = pbVar5 + 0x18;
        *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
        *(char **)(puVar7 + uVar2 * 0x10 + 0x20) = pcVar8;
        *(undefined **)(puVar7 + uVar2 * 0x10 + 0x28) = puVar10;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      _swift_bridgeObjectRelease(lVar11);
    }
    FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
    FUN_1006b7a54();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x26;
    SVar17 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    goto LAB_1006b5384;
  }
  return (String)(ZEXT816(0xe000000000000000) << 0x40);
}



/* Address: 0x1006b53b0 | FUN_1006b53b0 */

undefined * FUN_1006b53b0(long param_1)

{
  _HashTable _Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  Bucket BVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    FUN_1006bf7c0(0,lVar16,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar9 = Swift::_HashTable::get_startBucket(_Var1);
    lVar13 = 0;
    iVar5 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar9.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b5628);
        (*pcVar8)();
      }
      uVar15 = (ulong)BVar9.offset >> 6;
      uVar19 = 1L << (BVar9.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar15 * 8) & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b562c);
        (*pcVar8)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b5630);
        (*pcVar8)();
      }
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x30) + BVar9.offset * 0x10);
      uVar10 = *puVar12;
      uVar3 = puVar12[1];
      puVar12 = (undefined8 *)(*(long *)(param_1 + 0x38) + BVar9.offset * 0x18);
      uVar2 = *puVar12;
      uVar4 = puVar12[1];
      uVar6 = *(undefined1 *)(puVar12 + 2);
      _swift_bridgeObjectRetain(uVar3);
      FUN_1006ad53c(uVar2,uVar4,uVar6);
      uVar11 = uVar3;
      FUN_1006b5070(uVar10,uVar3,uVar2,uVar4,uVar6);
      _swift_bridgeObjectRelease(uVar3);
      FUN_1006ad108(uVar2,uVar4,uVar6);
      uVar17 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar17) {
        FUN_1006bf7c0(1 < *(ulong *)(puVar7 + 0x18),uVar17 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar7 + uVar17 * 0x10 + 0x20) = uVar10;
      *(undefined8 *)(puVar7 + uVar17 * 0x10 + 0x28) = uVar11;
      uVar17 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar17 <= (ulong)BVar9.offset) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b5634);
        (*pcVar8)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar15 * 8) & uVar19) == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b5638);
        (*pcVar8)();
      }
      if (iVar5 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b563c);
        (*pcVar8)();
      }
      uVar19 = *(ulong *)(_Var1.unknown + uVar15 * 8) & -2L << (BVar9.offset & 0x3fU);
      if (uVar19 == 0) {
        lVar18 = uVar15 << 6;
        puVar14 = (ulong *)(param_1 + 0x48 + uVar15 * 8);
        do {
          uVar15 = uVar15 + 1;
          if (uVar17 + 0x3f >> 6 <= uVar15) {
            FUN_10000cae0(BVar9.offset,iVar5,0);
            goto LAB_1006b5450;
          }
          uVar19 = *puVar14;
          lVar18 = lVar18 + 0x40;
          puVar14 = puVar14 + 1;
        } while (uVar19 == 0);
        FUN_10000cae0(BVar9.offset,iVar5,0);
        uVar15 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + lVar18;
      }
      else {
        uVar15 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | BVar9.offset & 0x7fffffffffffffc0U;
      }
LAB_1006b5450:
      lVar13 = lVar13 + 1;
      BVar9.offset = uVar17;
    } while (lVar13 != lVar16);
  }
  return puVar7;
}



/* Address: 0x1006b563c | FUN_1006b563c */

undefined8 FUN_1006b563c(long param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 uVar8;
  _StringGuts _Var9;
  _StringGuts _Var10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_dc;
  ulong local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (param_1 == param_2) {
    uVar8 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      local_c8 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        local_c8 = ~(-1L << (uVar15 & 0x3f));
      }
      local_c8 = local_c8 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar7 = 0;
LAB_1006b56d4:
      do {
        while( true ) {
          if (local_c8 == 0) {
            do {
              lVar16 = lVar7 + 1;
              if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b5aac);
                (*pcVar5)();
              }
              if ((long)(uVar15 + 0x3f >> 6) <= lVar16) {
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
                return 1;
              }
              local_c8 = ((ulong *)(param_1 + 0x40))[lVar16];
              lVar7 = lVar7 + 1;
            } while (local_c8 == 0);
            uVar11 = (local_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c8 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
            local_c8 = local_c8 - 1 & local_c8;
          }
          else {
            uVar11 = (local_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_c8 & 0x5555555555555555) << 1;
            uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
            uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
            uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
            uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
            local_c8 = local_c8 - 1 & local_c8;
            lVar16 = lVar7;
          }
          uVar12 = LZCOUNT(uVar11) | lVar16 << 6;
          plVar13 = (long *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
          lVar7 = *plVar13;
          uVar11 = plVar13[1];
          plVar13 = (long *)(*(long *)(param_1 + 0x38) + uVar12 * 0x18);
          _Var9.unknown = (undefined *)*plVar13;
          _Var10.unknown = (undefined *)plVar13[1];
          cVar3 = (char)plVar13[2];
          _swift_bridgeObjectRetain(uVar11);
          FUN_1006ad53c(_Var9.unknown,_Var10.unknown,cVar3);
          uVar12 = uVar11;
          FUN_10046483c();
          _swift_bridgeObjectRelease(uVar11);
          if ((uVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(param_2);
            _swift_bridgeObjectRelease_n(param_1,2);
            FUN_1006ad108(_Var9.unknown,_Var10.unknown,cVar3);
            goto LAB_1006b5a14;
          }
          puVar14 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar7 * 0x18);
          _Var1.unknown = (undefined *)*puVar14;
          _Var2.unknown = (undefined *)puVar14[1];
          bVar4 = *(byte *)(puVar14 + 2);
          lVar7 = lVar16;
          if (bVar4 < 2) break;
          if (bVar4 == 2) {
            if (cVar3 != '\x02') {
LAB_1006b59d0:
              FUN_1006ad108(_Var9.unknown,_Var10.unknown,cVar3);
              _swift_bridgeObjectRelease(param_2);
              goto LAB_1006b5a0c;
            }
            _swift_beginAccess(_Var1.unknown + 0x10,auStack_78,0,0);
            uVar17 = *(undefined8 *)(_Var1.unknown + 0x10);
            _swift_beginAccess(_Var9.unknown + 0x10,auStack_90,0,0);
            uVar18 = *(undefined8 *)(_Var9.unknown + 0x10);
            FUN_1006ad53c(_Var1.unknown,_Var2.unknown,2);
            _swift_bridgeObjectRetain(uVar17);
            _swift_bridgeObjectRetain(uVar18);
            uVar8 = uVar17;
            FUN_1006f0464(uVar17,uVar18);
            local_dc = (uint)uVar8;
            FUN_1006ad108(_Var9.unknown,_Var10.unknown,2);
            uVar8 = 2;
LAB_1006b5924:
            FUN_1006ad108(_Var1.unknown,_Var2.unknown,uVar8);
            _swift_bridgeObjectRelease(uVar17);
            _swift_bridgeObjectRelease(uVar18);
            if ((local_dc & 1) == 0) goto LAB_1006b5a00;
          }
          else if (cVar3 != '\x03' ||
                   (_Var10.unknown != (undefined *)0x0 || _Var9.unknown != (undefined *)0x0)) {
            FUN_1006ad108(_Var9.unknown,_Var10.unknown,cVar3);
            goto LAB_1006b5a00;
          }
        }
        if (bVar4 != 0) {
          if (cVar3 == '\x01') {
            _swift_beginAccess(_Var1.unknown + 0x10,auStack_a8,0,0);
            uVar17 = *(undefined8 *)(_Var1.unknown + 0x10);
            _swift_beginAccess(_Var9.unknown + 0x10,auStack_c0,0,0);
            uVar18 = *(undefined8 *)(_Var9.unknown + 0x10);
            FUN_1006ad53c(_Var1.unknown,_Var2.unknown,1);
            _swift_bridgeObjectRetain(uVar17);
            _swift_bridgeObjectRetain(uVar18);
            uVar8 = uVar17;
            FUN_1006b563c(uVar17,uVar18);
            local_dc = (uint)uVar8;
            FUN_1006ad108(_Var9.unknown,_Var10.unknown,1);
            uVar8 = 1;
            goto LAB_1006b5924;
          }
          goto LAB_1006b59d0;
        }
        if (cVar3 != '\0') goto LAB_1006b59d0;
        if (_Var2.unknown == (undefined *)0x0) {
          if (_Var10.unknown != (undefined *)0x0) {
            _swift_bridgeObjectRetain(_Var10.unknown);
            _swift_bridgeObjectRelease(param_2);
            _swift_bridgeObjectRelease_n(param_1,2);
            FUN_1006ad108(_Var9.unknown,_Var10.unknown,0);
LAB_1006b5ae0:
            FUN_1006ad108(_Var9.unknown,_Var10.unknown,0);
            goto LAB_1006b5a14;
          }
LAB_1006b596c:
          FUN_1006ad108(_Var9.unknown,_Var10.unknown,0);
          goto LAB_1006b56d4;
        }
        if (_Var10.unknown == (undefined *)0x0) {
          FUN_1006ad53c(_Var1.unknown,_Var2.unknown,0);
          FUN_1006ad53c(_Var1.unknown,_Var2.unknown,0);
          FUN_1006ad53c(_Var9.unknown,0,0);
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_1006ad108(_Var1.unknown,_Var2.unknown,0);
          FUN_1006ad108(_Var9.unknown,0,0);
          _Var9.unknown = _Var1.unknown;
          _Var10.unknown = _Var2.unknown;
          goto LAB_1006b5ae0;
        }
        if (_Var1.unknown == _Var9.unknown && _Var2.unknown == _Var10.unknown) goto LAB_1006b596c;
        bVar6 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var2,(_StringComparisonResult)(__int8)_Var9.unknown);
        FUN_1006ad108(_Var9.unknown,_Var10.unknown,0);
      } while (bVar6);
LAB_1006b5a00:
      _swift_bridgeObjectRelease(param_2);
LAB_1006b5a0c:
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_1006b5a14:
    uVar8 = 0;
  }
  return uVar8;
}



/* Address: 0x1006b5aec | FUN_1006b5aec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006b5aec(void)

{
  return ZEXT816(0x100fdc280);
}



/* Address: 0x1006b5b0c | FUN_1006b5b0c */

void FUN_1006b5b0c(void)

{
  FUN_1006b5d14();
  return;
}



/* Address: 0x1006b5b18 | FUN_1006b5b18 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1006b5b18(void)

{
  return ZEXT816(0x100fdc320);
}



/* Address: 0x1006b5b38 | FUN_1006b5b38 */

undefined1  [16] FUN_1006b5b38(void)

{
  return ZEXT816(0x100ef7538);
}



/* Address: 0x1006b5b48 | thunk_FUN_1006b5b5c */

void thunk_FUN_1006b5b5c(void)

{
  FUN_1006b5b5c();
  return;
}



/* Address: 0x1006b5b4c | FUN_1006b5b4c */

void FUN_1006b5b4c(undefined8 *param_1)

{
  FUN_1006ad108(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1006b5b5c | FUN_1006b5b5c */

undefined8 * FUN_1006b5b5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad53c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1006b5ba4 | FUN_1006b5ba4 */

undefined8 * FUN_1006b5ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1006ad53c(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1006ad108(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1006b5bf8 | FUN_1006b5bf8 */

undefined8 * FUN_1006b5bf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1006ad108(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1006b5c3c | FUN_1006b5c3c */

int FUN_1006b5c3c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006b5c84 | FUN_1006b5c84 */

void FUN_1006b5c84(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xfd);
    param_1[1] = 0;
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1006b5cc8 | FUN_1006b5cc8 */

uint FUN_1006b5cc8(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 3;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = (uint)*(byte *)(param_1 + 4);
  }
  return uVar1;
}



/* Address: 0x1006b5ce0 | FUN_1006b5ce0 */

void FUN_1006b5ce0(ulong *param_1,uint param_2)

{
  if (2 < param_2) {
    *param_1 = (ulong)(param_2 - 3);
    param_1[1] = 0;
    param_2 = 3;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  return;
}



/* Address: 0x1006b5cf8 | FUN_1006b5cf8 */

undefined1  [16] FUN_1006b5cf8(void)

{
  return ZEXT816(0x100ef75c8);
}



/* Address: 0x1006b5d08 | FUN_1006b5d08 */

void FUN_1006b5d08(void)

{
  FUN_1006b5d14();
  return;
}



/* Address: 0x1006b5d14 | FUN_1006b5d14 */

uint FUN_1006b5d14(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,code *param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _swift_beginAccess(lVar4 + 0x10,auStack_60,0,0);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  uVar1 = uVar3;
  (*param_5)(uVar3,uVar5);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar5);
  return (uint)uVar1 & 1;
}



/* Address: 0x1006b5dac | FUN_1006b5dac */

void FUN_1006b5dac(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006b5070(0,0xe000000000000000,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1006b5dc0 | FUN_1006b5dc0 */

void FUN_1006b5dc0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1006b5ed8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined1 *)(param_2 + 2));
  return;
}



/* Address: 0x1006b5ddc | thunk_FUN_1006b5de0 */

void thunk_FUN_1006b5de0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc380 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70344;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70344,&DAT_100ef7538);
  DAT_100fdc380 = pTVar1;
  return;
}



/* Address: 0x1006b5de0 | FUN_1006b5de0 */

void FUN_1006b5de0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc380 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70344;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70344,&DAT_100ef7538);
  DAT_100fdc380 = pTVar1;
  return;
}



/* Address: 0x1006b5e20 | FUN_1006b5e20 */

bool FUN_1006b5e20(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  _StringGuts _Var5;
  
  uVar1 = *param_2;
  puVar2 = (undefined *)param_2[2];
  cVar3 = (char)param_2[4];
  if ((char)param_1[4] != '\0') {
    if ((char)param_1[4] == '\x01') {
      return cVar3 == '\x01' && *param_1 == uVar1;
    }
    return cVar3 == '\x02' &&
           ((param_2[1] == 0 && uVar1 == 0) &&
           (puVar2 == (undefined *)0x0 && (undefined *)param_2[3] == (undefined *)0x0));
  }
  if (cVar3 != '\0') {
    return false;
  }
  _Var5.unknown = (undefined *)(*param_1 >> 0x10);
  if ((((undefined *)param_1[2] != puVar2 || (undefined *)param_1[3] != (undefined *)param_2[3]) ||
      _Var5.unknown != (undefined *)(uVar1 >> 0x10)) ||
      (undefined *)(param_1[1] >> 0x10) != (undefined *)(param_2[1] >> 0x10)) {
    bVar4 = Swift::_stringCompareInternal
                      ((undefined *)param_1[2],(undefined *)param_1[3],_Var5,
                       (undefined *)(param_1[1] >> 0x10),(_StringComparisonResult)(__int8)puVar2);
    return bVar4;
  }
  return true;
}



/* Address: 0x1006b5ed8 | FUN_1006b5ed8 */

uint FUN_1006b5ed8(_StringGuts param_1,_StringGuts param_2,byte param_3,undefined *param_4,
                  undefined *param_5,char param_6)

{
  bool bVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        if (param_2.unknown == (undefined *)0x0) {
          if (param_5 == (undefined *)0x0) goto LAB_1006b6028;
        }
        else if ((param_5 != (undefined *)0x0) &&
                (((param_1.unknown == param_4 && (param_2.unknown == param_5)) ||
                 (bVar1 = Swift::_stringCompareWithSmolCheck
                                    (param_1,param_2,(_StringComparisonResult)(__int8)param_4),
                 bVar1)))) {
LAB_1006b6028:
          uVar3 = 1;
          goto LAB_1006b6038;
        }
      }
    }
    else if (param_6 == '\x01') {
      _swift_beginAccess(param_1.unknown + 0x10,auStack_48,0,0);
      uVar4 = *(undefined8 *)(param_1.unknown + 0x10);
      _swift_beginAccess(param_4 + 0x10,auStack_60,0,0);
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      uVar2 = uVar4;
      FUN_1006b563c(uVar4,uVar5);
      uVar3 = (uint)uVar2;
LAB_1006b5ffc:
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar5);
      goto LAB_1006b6038;
    }
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') {
      _swift_beginAccess(param_1.unknown + 0x10,auStack_48,0,0);
      uVar4 = *(undefined8 *)(param_1.unknown + 0x10);
      _swift_beginAccess(param_4 + 0x10,auStack_60,0,0);
      uVar5 = *(undefined8 *)(param_4 + 0x10);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      uVar2 = uVar4;
      FUN_1006f0464(uVar4,uVar5);
      uVar3 = (uint)uVar2;
      goto LAB_1006b5ffc;
    }
  }
  else if ((param_6 == '\x03') && (param_5 == (undefined *)0x0 && param_4 == (undefined *)0x0))
  goto LAB_1006b6028;
  uVar3 = 0;
LAB_1006b6038:
  return uVar3 & 1;
}



/* Address: 0x1006b6050 | FUN_1006b6050 */

undefined * FUN_1006b6050(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 uVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  undefined *puVar7;
  code *pcVar8;
  Bucket BVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    FUN_1006bf7c0(0,lVar16,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar9 = Swift::_HashTable::get_startBucket(_Var1);
    lVar14 = 0;
    iVar6 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar9.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b6320);
        (*pcVar8)();
      }
      uVar20 = (ulong)BVar9.offset >> 6;
      uVar21 = 1L << (BVar9.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar20 * 8) & uVar21) == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b6324);
        (*pcVar8)();
      }
      if (iVar6 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b6328);
        (*pcVar8)();
      }
      pSVar2 = (String *)(*(long *)(param_1 + 0x30) + BVar9.offset * 0x10);
      pvVar4 = pSVar2->bridgeObject;
      SVar23 = *pSVar2;
      puVar13 = (undefined8 *)(*(long *)(param_1 + 0x38) + BVar9.offset * 0x18);
      uVar3 = *puVar13;
      pvVar5 = (void *)puVar13[1];
      pcVar17 = (char *)(ulong)*(byte *)(puVar13 + 2);
      _swift_bridgeObjectRetain(pvVar4);
      pcVar12 = pcVar17;
      FUN_1006ad53c(uVar3,pvVar5);
      _swift_bridgeObjectRetain(param_3);
      SVar22.bridgeObject = (void *)0xe100000000000000;
      SVar22.str = (char *)0x5b;
      SVar24.bridgeObject = param_4;
      SVar24.str = pcVar12;
      Swift::String::append(SVar22,SVar24);
      SVar25.bridgeObject = param_4;
      SVar25.str = pcVar12;
      Swift::String::append(SVar23,SVar25);
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = (char *)0x5d;
      SVar26.bridgeObject = param_4;
      SVar26.str = pcVar12;
      Swift::String::append(SVar23,SVar26);
      uVar10 = param_2;
      uVar11 = param_3;
      param_4 = pvVar5;
      FUN_1006b5070(param_2,param_3,uVar3,pvVar5,pcVar17);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(param_3);
      FUN_1006ad108(uVar3,pvVar5,pcVar17);
      uVar18 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar18) {
        FUN_1006bf7c0(1 < *(ulong *)(puVar7 + 0x18),uVar18 + 1,1);
      }
      *(ulong *)(puVar7 + 0x10) = uVar18 + 1;
      *(undefined8 *)(puVar7 + uVar18 * 0x10 + 0x20) = uVar10;
      *(undefined8 *)(puVar7 + uVar18 * 0x10 + 0x28) = uVar11;
      uVar18 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar18 <= (ulong)BVar9.offset) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b632c);
        (*pcVar8)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar20 * 8) & uVar21) == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b6330);
        (*pcVar8)();
      }
      if (iVar6 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006b6334);
        (*pcVar8)();
      }
      uVar21 = *(ulong *)(_Var1.unknown + uVar20 * 8) & -2L << (BVar9.offset & 0x3fU);
      if (uVar21 == 0) {
        lVar19 = uVar20 << 6;
        puVar15 = (ulong *)(param_1 + 0x48 + uVar20 * 8);
        do {
          uVar20 = uVar20 + 1;
          if (uVar18 + 0x3f >> 6 <= uVar20) {
            FUN_10000cae0(BVar9.offset,iVar6,0);
            goto LAB_1006b60f4;
          }
          uVar21 = *puVar15;
          lVar19 = lVar19 + 0x40;
          puVar15 = puVar15 + 1;
        } while (uVar21 == 0);
        FUN_10000cae0(BVar9.offset,iVar6,0);
        uVar20 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar18 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) + lVar19;
      }
      else {
        uVar20 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
        uVar20 = (uVar20 & 0xcccccccccccccccc) >> 2 | (uVar20 & 0x3333333333333333) << 2;
        uVar20 = (uVar20 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar20 = (uVar20 & 0xff00ff00ff00ff00) >> 8 | (uVar20 & 0xff00ff00ff00ff) << 8;
        uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
        uVar18 = LZCOUNT(uVar20 >> 0x20 | uVar20 << 0x20) | BVar9.offset & 0x7fffffffffffffc0U;
      }
LAB_1006b60f4:
      lVar14 = lVar14 + 1;
      BVar9.offset = uVar18;
    } while (lVar14 != lVar16);
  }
  return puVar7;
}



/* Address: 0x1006b6334 | FUN_1006b6334 */

undefined * FUN_1006b6334(char *param_1,void *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  Index IVar4;
  Substring SVar5;
  undefined *puVar6;
  Index IVar7;
  Index after;
  undefined *puVar8;
  UnsafeBufferPointer<__int8> UVar9;
  UnsafeMutablePointer UVar10;
  _StringGuts _Var11;
  void *pvVar14;
  undefined *puVar15;
  uint uVar16;
  ulong uVar17;
  Character CVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined *local_78;
  ulong uStack_70;
  char *pcVar12;
  _StringObject _Var13;
  
  IVar4.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x5b;
  uVar16 = 0;
  FUN_10051c750(0x5b,0xe100000000000000,param_1,param_2);
  SVar19.str = (char *)((ulong)param_2 >> 0x38 & 0xf);
  if ((uVar16 & 0xff) == 1) {
    puVar8 = &DAT_100fdbcb8;
    FUN_1000f7830(&DAT_100fdbcb8,&DAT_100c6f4e0);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    pcVar12 = param_1;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pcVar12 = SVar19.str;
    }
    uVar16 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if (((ulong)param_2 & 0x1000000000000000) == 0) {
      uVar16 = 1;
    }
    uVar17 = 7;
    if (uVar16 == 0) {
      uVar17 = 0xb;
    }
    SVar19.str = (char *)(uVar17 | (long)pcVar12 << 0x10);
    SVar19.bridgeObject = param_1;
    SVar5 = Swift::String::get_subscript((Range<Index>)0xf,SVar19);
    *(undefined **)(puVar8 + 0x20) = SVar5.unknown;
    *(char **)(puVar8 + 0x28) = SVar19.str;
    *(char **)(puVar8 + 0x30) = param_1;
    *(void **)(puVar8 + 0x38) = param_2;
    puVar8[0x40] = 0;
  }
  else {
    SVar20.bridgeObject = param_1;
    SVar20.str = (char *)IVar4.cmsgPointer.unknown;
    UVar10 = IVar4.cmsgPointer.unknown;
    pcVar12 = param_1;
    pvVar14 = param_2;
    SVar5 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
    puVar6 = (undefined *)0x0;
    FUN_1006a2a7c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar17 = *(ulong *)(puVar6 + 0x10);
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar17) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_1006a2a7c(puVar6,uVar17 + 1,1);
    }
    *(ulong *)(puVar6 + 0x10) = uVar17 + 1;
    *(undefined **)(puVar6 + uVar17 * 0x28 + 0x20) = SVar5.unknown;
    *(undefined **)(puVar6 + uVar17 * 0x28 + 0x28) = UVar10.unknown;
    *(char **)(puVar6 + uVar17 * 0x28 + 0x30) = pcVar12;
    *(void **)(puVar6 + uVar17 * 0x28 + 0x38) = pvVar14;
    puVar6[uVar17 * 0x28 + 0x40] = 0;
    pcVar12 = (char *)((ulong)param_1 & 0xffffffffffff);
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      pcVar12 = SVar19.str;
    }
    uVar17 = (long)pcVar12 * 4;
    puVar8 = puVar6;
    if (uVar17 - ((ulong)IVar4.cmsgPointer.unknown >> 0xe) != 0) {
      do {
        if (0x3f < *(ulong *)(puVar6 + 0x10)) {
LAB_1006b6878:
          _swift_bridgeObjectRelease(puVar6);
          return (undefined *)0x0;
        }
        SVar21.bridgeObject = param_2;
        SVar21.str = param_1;
        CVar18 = Swift::String::get_subscript(IVar4,SVar21);
        _Var11.unknown = CVar18.bridgeObject;
        if ((CVar18.str == (undefined *)0x5b) && (_Var11.unknown == (undefined *)0xe100000000000000)
           ) {
          _swift_bridgeObjectRelease(0xe100000000000000);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar18.str,_Var11,(_StringComparisonResult)0x5b);
          _swift_bridgeObjectRelease(_Var11.unknown);
          if (!bVar3) goto LAB_1006b6878;
        }
        SVar22.bridgeObject = param_2;
        SVar22.str = param_1;
        IVar4 = Swift::String::index(IVar4,SVar22);
        if ((ulong)IVar4.cmsgPointer.unknown >> 0xe == uVar17) goto LAB_1006b6878;
        SVar23.bridgeObject = param_2;
        SVar23.str = param_1;
        CVar18 = Swift::String::get_subscript(IVar4,SVar23);
        _Var11.unknown = CVar18.bridgeObject;
        puVar8 = puVar6;
        if ((CVar18.str == (undefined *)0x5d) && (_Var11.unknown == (undefined *)0xe100000000000000)
           ) {
          _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1006b6560:
          uVar1 = *(ulong *)(puVar6 + 0x10);
          if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
            FUN_1006a2a7c(puVar8,uVar1 + 1,1,puVar6);
          }
          *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x28) = 0;
          *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x20) = 0;
          *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x38) = 0;
          *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x30) = 0;
          puVar8[uVar1 * 0x28 + 0x40] = 2;
          after = IVar4;
        }
        else {
          puVar15 = (undefined *)0xe100000000000000;
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar18.str,_Var11,(_StringComparisonResult)0x5d);
          _swift_bridgeObjectRelease(_Var11.unknown);
          if (bVar3) goto LAB_1006b6560;
          IVar7 = IVar4;
          SVar19.str = param_1;
          FUN_1000102ac(IVar4.cmsgPointer.unknown,param_1,param_2);
          after.cmsgPointer.unknown = IVar7.cmsgPointer.unknown;
          while( true ) {
            if ((ulong)after.cmsgPointer.unknown >> 0xe == (ulong)SVar19.str >> 0xe) {
              _swift_bridgeObjectRelease(puVar6);
              puVar6 = puVar15;
              goto LAB_1006b6878;
            }
            CVar18 = Swift::Substring::get_subscript(after,(Substring)IVar7.cmsgPointer.unknown);
            _Var11.unknown = CVar18.bridgeObject;
            if ((CVar18.str == (undefined *)0x5d) &&
               (_Var11.unknown == (undefined *)0xe100000000000000)) break;
            bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)CVar18.str,_Var11,(_StringComparisonResult)0x5d);
            _swift_bridgeObjectRelease(_Var11.unknown);
            if (bVar3) goto LAB_1006b6670;
            after = Swift::Substring::index(after,(Substring)IVar7.cmsgPointer.unknown);
          }
          _swift_bridgeObjectRelease(puVar15);
          puVar15 = (undefined *)0xe100000000000000;
LAB_1006b6670:
          _swift_bridgeObjectRelease(puVar15);
          if ((ulong)after.cmsgPointer.unknown >> 0xe < (ulong)IVar4.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b68c4);
            (*pcVar2)();
          }
          SVar25.bridgeObject = param_1;
          SVar25.str = (char *)after.cmsgPointer.unknown;
          IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
          _Var13.unknown = param_1;
          pvVar14 = param_2;
          SVar5 = Swift::String::get_subscript((Range<Index>)IVar4.cmsgPointer.unknown,SVar25);
          if (((ulong)SVar5.unknown ^ (ulong)IVar7.cmsgPointer.unknown) >> 0xe == 0) {
            _swift_bridgeObjectRelease(pvVar14);
LAB_1006b6714:
            SVar26.bridgeObject = param_1;
            SVar26.str = (char *)after.cmsgPointer.unknown;
            IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
            SVar19.str = param_1;
            pvVar14 = param_2;
            SVar5 = Swift::String::get_subscript((Range<Index>)IVar4.cmsgPointer.unknown,SVar26);
            uVar1 = *(ulong *)(puVar6 + 0x10);
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
              FUN_1006a2a7c(puVar8,uVar1 + 1,1,puVar6);
            }
            *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
            *(undefined **)(puVar8 + uVar1 * 0x28 + 0x20) = SVar5.unknown;
            *(UnsafeMutablePointer *)(puVar8 + uVar1 * 0x28 + 0x28) = IVar7.cmsgPointer.unknown;
            *(char **)(puVar8 + uVar1 * 0x28 + 0x30) = SVar19.str;
            *(void **)(puVar8 + uVar1 * 0x28 + 0x38) = pvVar14;
            puVar8[uVar1 * 0x28 + 0x40] = 0;
          }
          else {
            if (((ulong)pvVar14 >> 0x3c & 1) == 0) {
              if (((ulong)pvVar14 >> 0x3d & 1) == 0) {
                if (((ulong)_Var13.unknown >> 0x3c & 1) == 0) {
                  UVar9 = Swift::_StringObject::get_sharedUTF8(_Var13);
                }
                else {
                  UVar9.unknown = (undefined *)(((ulong)pvVar14 & 0xfffffffffffffff) + 0x20);
                }
              }
              else {
                uStack_70 = (ulong)pvVar14 & 0xffffffffffffff;
                UVar9.unknown = (undefined *)&local_78;
                local_78 = _Var13.unknown;
              }
              FUN_1000f59d8(UVar9.unknown,SVar5.unknown,IVar7.cmsgPointer.unknown,_Var13.unknown,
                            pvVar14);
              uVar16 = (uint)SVar5.unknown;
              SVar5.unknown = UVar9.unknown;
            }
            else {
              FUN_1006c9d94(SVar5.unknown,IVar7.cmsgPointer.unknown,_Var13.unknown,pvVar14,10);
              uVar16 = SUB84(IVar7.cmsgPointer.unknown,0);
            }
            _swift_bridgeObjectRelease(pvVar14);
            if ((uVar16 & 0xff) == 1) goto LAB_1006b6714;
            uVar1 = *(ulong *)(puVar6 + 0x10);
            if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
              puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
              FUN_1006a2a7c(puVar8,uVar1 + 1,1,puVar6);
            }
            *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
            *(undefined **)(puVar8 + uVar1 * 0x28 + 0x20) = SVar5.unknown;
            *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x28) = 0;
            *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x30) = 0;
            *(undefined8 *)(puVar8 + uVar1 * 0x28 + 0x38) = 0;
            puVar8[uVar1 * 0x28 + 0x40] = 1;
          }
        }
        SVar24.bridgeObject = param_2;
        SVar24.str = param_1;
        IVar4 = Swift::String::index(after,SVar24);
        puVar6 = puVar8;
      } while (uVar17 != (ulong)IVar4.cmsgPointer.unknown >> 0xe);
    }
  }
  return puVar8;
}



/* Address: 0x1006b68c4 | FUN_1006b68c4 */

void FUN_1006b68c4(long param_1,ulong param_2,ulong param_3,char *param_4,undefined8 param_5,
                  char *param_6,char **param_7,char **param_8,undefined8 param_9,byte param_10)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  char **ppcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  ulong uVar15;
  char *pcVar16;
  int iVar17;
  char *pcVar18;
  long *plVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 local_d8;
  void *local_d0;
  char *local_90;
  void *pvStack_88;
  undefined1 auStack_78 [24];
  
  SVar25.bridgeObject = param_7;
  SVar25.str = param_6;
  param_3 = param_3 >> 1;
  if ((long)param_3 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71b4);
    (*pcVar7)();
  }
  if (param_3 != param_2) {
    pcVar18 = (char *)(ulong)param_10;
    local_d8 = param_9;
    pcVar12 = pcVar18;
    pcVar13 = param_4;
    FUN_1006ad53c(param_8);
    bVar8 = SBORROW8(param_3,param_2);
    bVar9 = SBORROW8(param_3 - param_2,1);
    _swift_bridgeObjectRetain();
    lVar20 = 0;
    plVar19 = (long *)(param_1 + param_2 * 0x28);
    lVar1 = (param_2 << 1 ^ 0xffffffffffffffff) + param_3;
    do {
      local_d0 = SVar25.bridgeObject;
      if ((long)param_3 <= (long)(param_2 + lVar20)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b7198);
        (*pcVar7)();
      }
      pcVar21 = (char *)*plVar19;
      iVar17 = (int)pcVar18;
      ppcVar10 = param_8;
      if ((char)plVar19[4] != '\0') {
        if ((char)plVar19[4] == '\x01') {
          if (iVar17 == 2) {
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71a0);
              (*pcVar7)();
            }
            if (bVar9) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71b0);
              (*pcVar7)();
            }
            if (lVar1 == lVar20) {
              pcVar12 = (char *)0x0;
              pcVar13 = (char *)0x0;
              _swift_beginAccess(param_8 + 2,auStack_78);
              pcVar16 = param_8[2];
              if (*(char **)(pcVar16 + 0x10) == pcVar21) {
                pcVar12 = (char *)0x21;
                pcVar13 = (char *)0x0;
                _swift_beginAccess(param_8 + 2,&local_90);
                _swift_bridgeObjectRetain(param_5);
                pcVar18 = pcVar16;
                _swift_isUniquelyReferenced_nonNull_native();
                param_8[2] = pcVar16;
                if (((ulong)pcVar18 & 1) == 0) goto LAB_1006b6f58;
                goto LAB_1006b6c34;
              }
            }
            pvStack_88 = local_d0;
            local_90 = SVar25.str;
            _swift_bridgeObjectRetain(local_d0);
            SVar24.bridgeObject = (void *)0xe100000000000000;
            SVar24.str = (char *)0x5b;
            SVar27.bridgeObject = pcVar13;
            SVar27.str = pcVar12;
            Swift::String::append(SVar24,SVar27);
            SVar25 = Swift::CustomStringConvertible::get_description();
            SVar28.bridgeObject = pcVar13;
            SVar28.str = pcVar12;
            Swift::String::append(SVar25,SVar28);
            _swift_bridgeObjectRelease(SVar25.bridgeObject);
            SVar26.bridgeObject = (void *)0xe100000000000000;
            SVar26.str = (char *)0x5d;
            puVar11 = (undefined1 *)0x5d;
            SVar29.bridgeObject = pcVar13;
            SVar29.str = pcVar12;
            Swift::String::append(SVar26,SVar29);
            pvVar3 = pvStack_88;
            pcVar12 = local_90;
            FUN_1006b7a00();
            _swift_allocError(&DAT_100ef7420,puVar11,0,0);
            *puVar11 = 5;
            *(char **)(puVar11 + 8) = pcVar12;
            *(void **)(puVar11 + 0x10) = pvVar3;
            _swift_willThrow();
            _swift_bridgeObjectRelease(local_d0);
LAB_1006b70dc:
            pcVar18 = (char *)0x2;
            goto LAB_1006b70e0;
          }
        }
        else if (iVar17 == 2) {
          if (bVar8) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b719c);
            (*pcVar7)();
          }
          if (bVar9) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71a8);
            (*pcVar7)();
          }
          if (lVar1 == lVar20) {
            pcVar12 = (char *)0x21;
            pcVar13 = (char *)0x0;
            _swift_beginAccess(param_8 + 2,&local_90);
            pcVar16 = param_8[2];
            _swift_bridgeObjectRetain(param_5);
            pcVar18 = pcVar16;
            _swift_isUniquelyReferenced_nonNull_native();
            param_8[2] = pcVar16;
            if (((ulong)pcVar18 & 1) == 0) {
              pcVar21 = *(char **)(pcVar16 + 0x10);
LAB_1006b6f58:
              pcVar13 = pcVar16;
              pcVar16 = (char *)0x0;
              pcVar12 = &DAT_00000001;
              FUN_1006a2628(0,pcVar21 + 1);
              param_8[2] = pcVar16;
            }
LAB_1006b6c34:
            uVar15 = *(ulong *)(pcVar16 + 0x10);
            pcVar18 = pcVar16;
            if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar15) {
              pcVar18 = (char *)(ulong)(1 < *(ulong *)(pcVar16 + 0x18));
              pcVar12 = &DAT_00000001;
              FUN_1006a2628(pcVar18,uVar15 + 1);
              pcVar13 = pcVar16;
            }
            *(ulong *)(pcVar18 + 0x10) = uVar15 + 1;
            *(char **)(pcVar18 + uVar15 * 0x18 + 0x20) = param_4;
            *(undefined8 *)(pcVar18 + uVar15 * 0x18 + 0x28) = param_5;
            pcVar18[uVar15 * 0x18 + 0x30] = '\0';
            param_8[2] = pcVar18;
            param_7 = &local_90;
            _swift_endAccess();
            pcVar18 = (char *)0x2;
            goto LAB_1006b69b8;
          }
          FUN_1006b7a00();
          _swift_allocError(&DAT_100ef7420,param_7,0,0);
          *(undefined1 *)param_7 = 4;
          *(String *)(param_7 + 1) = SVar25;
          _swift_willThrow();
          goto LAB_1006b70dc;
        }
LAB_1006b6fa4:
        FUN_1006b7a00();
        _swift_allocError(&DAT_100ef7420,param_7,0,0);
        *(undefined1 *)param_7 = 1;
        *(String *)(param_7 + 1) = SVar25;
        _swift_willThrow();
LAB_1006b70e0:
        FUN_1006ad108(param_8,local_d8,pcVar18);
        return;
      }
      if (iVar17 != 1) goto LAB_1006b6fa4;
      pvVar3 = (void *)plVar19[1];
      lVar5 = plVar19[2];
      lVar22 = plVar19[3];
      _swift_bridgeObjectRetain(lVar22);
      SVar23.bridgeObject = pvVar3;
      SVar23.str = pcVar21;
      SVar25 = Swift::String::__fromSubstring(SVar23);
      FUN_1006b7a40(pcVar21,pvVar3,lVar5,lVar22,0);
      _swift_bridgeObjectRelease(local_d0);
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71a4);
        (*pcVar7)();
      }
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71ac);
        (*pcVar7)();
      }
      if (lVar1 == lVar20) {
        _swift_beginAccess(param_8 + 2,&local_90,0x20,0);
        pcVar12 = param_8[2];
        if (*(long *)(pcVar12 + 0x10) != 0) {
          _swift_bridgeObjectRetain(pcVar12);
          SVar24 = SVar25;
          FUN_10046483c();
          if (((ulong)SVar24.bridgeObject & 1) != 0) {
            puVar14 = (undefined8 *)(*(long *)(pcVar12 + 0x38) + (long)SVar24.str * 0x18);
            puVar11 = (undefined1 *)*puVar14;
            uVar2 = puVar14[1];
            uVar6 = *(undefined1 *)(puVar14 + 2);
            FUN_1006ad53c(puVar11,uVar2,uVar6);
            _swift_endAccess(&local_90);
            _swift_bridgeObjectRelease(pcVar12);
            FUN_1006ad108(puVar11,uVar2,uVar6);
            FUN_1006b7a00();
            _swift_allocError(&DAT_100ef7420,puVar11,0,0);
            *puVar11 = 0;
            *(String *)(puVar11 + 8) = SVar25;
            _swift_willThrow();
            pcVar18 = &DAT_00000001;
            goto LAB_1006b70e0;
          }
          _swift_bridgeObjectRelease(pcVar12);
        }
        _swift_endAccess(&local_90);
        pcVar12 = (char *)0x21;
        pcVar13 = (char *)0x0;
        _swift_beginAccess(param_8 + 2,&local_90);
        _swift_bridgeObjectRetain(param_5);
        pcVar21 = param_8[2];
        _swift_isUniquelyReferenced_nonNull_native();
        pcVar16 = param_8[2];
        param_8[2] = (char *)0x8000000000000000;
        SVar24 = SVar25;
        FUN_10046483c();
        pcVar18 = SVar24.str;
        uVar15 = (ulong)~(uint)SVar24.bridgeObject & 1;
        lVar5 = *(long *)(pcVar16 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(pcVar16 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71b8);
          (*pcVar7)();
        }
        if (*(long *)(pcVar16 + 0x18) < lVar5) {
          FUN_1006bae90(lVar5,pcVar21);
          SVar26 = SVar25;
          FUN_10046483c();
          pcVar18 = SVar26.str;
          if (((uint)SVar24.bridgeObject & 1) != ((uint)SVar26.bridgeObject & 1))
          goto LAB_1006b71c8;
LAB_1006b6d08:
          if (((ulong)SVar24.bridgeObject & 1) == 0) goto LAB_1006b6d10;
LAB_1006b6978:
          puVar14 = (undefined8 *)(*(long *)(pcVar16 + 0x38) + (long)pcVar18 * 0x18);
          uVar2 = *puVar14;
          uVar4 = puVar14[1];
          *puVar14 = param_4;
          puVar14[1] = param_5;
          pcVar12 = (char *)(ulong)*(byte *)(puVar14 + 2);
          *(undefined1 *)(puVar14 + 2) = 0;
          FUN_1006ad108(uVar2,uVar4);
        }
        else {
          if (((ulong)pcVar21 & 1) != 0) goto LAB_1006b6d08;
          FUN_1006ba39c();
          if (((ulong)SVar24.bridgeObject & 1) != 0) goto LAB_1006b6978;
LAB_1006b6d10:
          *(ulong *)(pcVar16 + ((ulong)pcVar18 >> 6) * 8 + 0x40) =
               *(ulong *)(pcVar16 + ((ulong)pcVar18 >> 6) * 8 + 0x40) |
               1L << ((ulong)pcVar18 & 0x3f);
          *(String *)(*(long *)(pcVar16 + 0x30) + (long)pcVar18 * 0x10) = SVar25;
          puVar14 = (undefined8 *)(*(long *)(pcVar16 + 0x38) + (long)pcVar18 * 0x18);
          *puVar14 = param_4;
          puVar14[1] = param_5;
          *(undefined1 *)(puVar14 + 2) = 0;
          if (SCARRY8(*(long *)(pcVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71c4);
            (*pcVar7)();
          }
          *(long *)(pcVar16 + 0x10) = *(long *)(pcVar16 + 0x10) + 1;
          _swift_bridgeObjectRetain(SVar25.bridgeObject);
        }
        param_8[2] = pcVar16;
        param_7 = &local_90;
        _swift_endAccess();
        pcVar18 = &DAT_00000001;
      }
      else {
        pcVar13 = (char *)0x0;
        _swift_beginAccess(param_8 + 2,&local_90,0x20);
        pcVar12 = param_8[2];
        if (*(long *)(pcVar12 + 0x10) != 0) {
          _swift_bridgeObjectRetain(pcVar12);
          SVar24 = SVar25;
          FUN_10046483c();
          if (((ulong)SVar24.bridgeObject & 1) != 0) {
            puVar14 = (undefined8 *)(*(long *)(pcVar12 + 0x38) + (long)SVar24.str * 0x18);
            ppcVar10 = (char **)*puVar14;
            uVar2 = puVar14[1];
            pcVar18 = (char *)(ulong)*(byte *)(puVar14 + 2);
            FUN_1006ad53c(ppcVar10,uVar2,pcVar18);
            _swift_endAccess(&local_90);
            _swift_bridgeObjectRelease(pcVar12);
            pcVar12 = &DAT_00000001;
            FUN_1006ad108(param_8,local_d8);
            param_7 = param_8;
            local_d8 = uVar2;
            goto LAB_1006b69b8;
          }
          _swift_bridgeObjectRelease(pcVar12);
        }
        ppcVar10 = &local_90;
        _swift_endAccess();
        if ((long)param_3 <= (long)(param_2 + lVar20 + 1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71bc);
          (*pcVar7)();
        }
        if ((char)plVar19[9] == '\0') {
          FUN_1006b5aec();
          pcVar18 = &DAT_00000001;
          pcVar12 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
        }
        else {
          FUN_1006b5b18();
          pcVar18 = (char *)0x2;
          pcVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        _swift_allocObject();
        ppcVar10[2] = pcVar12;
        pcVar13 = (char *)0x0;
        _swift_beginAccess(param_8 + 2,&local_90,0x21);
        FUN_1006ad53c(ppcVar10,0,pcVar18);
        pcVar12 = param_8[2];
        _swift_isUniquelyReferenced_nonNull_native();
        pcVar16 = param_8[2];
        param_8[2] = (char *)0x8000000000000000;
        SVar24 = SVar25;
        FUN_10046483c();
        pcVar21 = SVar24.str;
        uVar15 = (ulong)~(uint)SVar24.bridgeObject & 1;
        lVar5 = *(long *)(pcVar16 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(pcVar16 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71c0);
          (*pcVar7)();
        }
        if (*(long *)(pcVar16 + 0x18) < lVar5) {
          FUN_1006bae90(lVar5,pcVar12);
          SVar26 = SVar25;
          FUN_10046483c();
          pcVar21 = SVar26.str;
          if (((uint)SVar24.bridgeObject & 1) != ((uint)SVar26.bridgeObject & 1)) {
LAB_1006b71c8:
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71d8);
            (*pcVar7)();
          }
        }
        else if (((ulong)pcVar12 & 1) == 0) {
          FUN_1006ba39c();
        }
        if (((ulong)SVar24.bridgeObject & 1) == 0) {
          *(ulong *)(pcVar16 + ((ulong)pcVar21 >> 6) * 8 + 0x40) =
               *(ulong *)(pcVar16 + ((ulong)pcVar21 >> 6) * 8 + 0x40) |
               1L << ((ulong)pcVar21 & 0x3f);
          *(String *)(*(long *)(pcVar16 + 0x30) + (long)pcVar21 * 0x10) = SVar25;
          puVar14 = (undefined8 *)(*(long *)(pcVar16 + 0x38) + (long)pcVar21 * 0x18);
          *puVar14 = ppcVar10;
          puVar14[1] = 0;
          *(char *)(puVar14 + 2) = (char)pcVar18;
          if (SCARRY8(*(long *)(pcVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1006b71c8);
            (*pcVar7)();
          }
          *(long *)(pcVar16 + 0x10) = *(long *)(pcVar16 + 0x10) + 1;
          _swift_bridgeObjectRetain(SVar25.bridgeObject);
        }
        else {
          puVar14 = (undefined8 *)(*(long *)(pcVar16 + 0x38) + (long)pcVar21 * 0x18);
          uVar2 = *puVar14;
          uVar4 = puVar14[1];
          *puVar14 = ppcVar10;
          puVar14[1] = 0;
          uVar6 = *(undefined1 *)(puVar14 + 2);
          *(char *)(puVar14 + 2) = (char)pcVar18;
          FUN_1006ad108(uVar2,uVar4,uVar6);
        }
        param_8[2] = pcVar16;
        _swift_endAccess(&local_90);
        pcVar12 = &DAT_00000001;
        FUN_1006ad108(param_8,local_d8);
        local_d8 = 0;
        param_7 = param_8;
      }
LAB_1006b69b8:
      local_d0 = SVar25.bridgeObject;
      lVar20 = lVar20 + 1;
      plVar19 = plVar19 + 5;
      param_8 = ppcVar10;
    } while (param_3 - param_2 != lVar20);
    _swift_bridgeObjectRelease(local_d0);
    FUN_1006ad108(ppcVar10,local_d8,pcVar18);
  }
  return;
}


