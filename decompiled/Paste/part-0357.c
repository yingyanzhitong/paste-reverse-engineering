/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100458fd0 | thunk_FUN_100458720 */

void thunk_FUN_100458720(void)

{
  FUN_100458720();
  return;
}



/* Address: 0x100458fd4 | thunk_FUN_100458720 */

void thunk_FUN_100458720(void)

{
  FUN_100458720();
  return;
}



/* Address: 0x100458fd8 | thunk_FUN_10045878c */

void thunk_FUN_10045878c(void)

{
  long unaff_x20;
  
  FUN_100457874(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100458fdc | thunk_FUN_100458c14 */

void thunk_FUN_100458c14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  lVar3 = lVar3 + 0x10;
  FUN_100004640(lVar3,uVar1);
  FUN_1001ad344(uVar1,uVar2,lVar3);
  return;
}



/* Address: 0x100458fe0 | FUN_100458fe0 */

void FUN_100458fe0(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10045901c | FUN_10045901c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10045901c(void)

{
  return ZEXT816(0x100fc7b80);
}



/* Address: 0x10045903c | FUN_10045903c */

void FUN_10045903c(undefined8 param_1)

{
  FUN_100459058();
  DAT_101057ac8 = param_1;
  return;
}



/* Address: 0x100459058 | FUN_100459058 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100459058(void)

{
  undefined1 *puVar1;
  long lVar2;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  URL UVar8;
  undefined8 uVar9;
  long lVar10;
  NSURL *pNVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  char *local_b8;
  undefined1 *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar5 = &DAT_100fc7ce0;
  local_b0 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  lVar13 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar16 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a8 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (lVar17 - extraout_x12_00) - extraout_x12_01;
  local_70 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_02;
  local_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_03;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004595c8();
  puVar5 = &DAT_100fc7ce8;
  local_78 = puVar6;
  FUN_1000037f0(&DAT_100fc7ce8,&DAT_100c4c6b0);
  local_88 = *(long *)(lVar13 + 0x48);
  uVar14 = (ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  IVar7 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar8.unknown = (undefined *)objc_stub::resourceURL(IVar7);
  if (UVar8.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  }
  local_80 = *(code **)(lVar18 + 0x38);
  local_a0 = lVar18;
  (*local_80)(lVar12,UVar8.unknown == (undefined *)0x0,1,UVar4.unknown);
  puVar6 = puVar5 + uVar14;
  local_98 = puVar5;
  FUN_10045b224(lVar12,puVar6);
  uVar9 = 0;
  FUN_10045acb8(0);
  _swift_getObjCClassFromMetadata();
  IVar7 = objc_stub::bundleForClass_((ID)&_OBJC_CLASS___NSBundle,uVar9);
  UVar8.unknown = (undefined *)objc_stub::resourceURL(IVar7);
  lVar13 = local_88;
  if (UVar8.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  }
  pcVar15 = local_80;
  (*local_80)(puVar6 + lVar13,UVar8.unknown == (undefined *)0x0,1,UVar4.unknown);
  IVar7 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar8.unknown = (undefined *)objc_stub::bundleURL(IVar7);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  (*pcVar15)(puVar6 + lVar13 * 2,0,1,UVar4.unknown);
  local_68 = local_78;
  FUN_100459bdc(local_98);
  local_78 = local_68;
  local_98 = *(undefined **)(local_68 + 0x10);
  if (local_98 != (undefined *)0x0) {
    uVar19 = 0;
    puVar5 = local_68 + uVar14;
    local_b8 = "atsNewView.swift";
    lVar13 = local_a8;
    lVar18 = local_a0;
    do {
      lVar10 = local_90;
      if (*(ulong *)(local_78 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100459570);
        (*pcVar15)();
      }
      FUN_100011090(puVar5,local_90,&DAT_100fc7ce0,&DAT_100c4d030);
      lVar2 = local_70;
      FUN_10045b224(lVar10,local_70);
      FUN_100011090(lVar2,lVar17,&DAT_100fc7ce0,&DAT_100c4d030);
      pcVar15 = *(code **)(lVar18 + 0x30);
      lVar10 = lVar17;
      UVar8 = UVar4;
      (*pcVar15)(lVar17,1);
      bVar3 = (int)lVar10 != 1;
      if (bVar3) {
        SVar20.bridgeObject = (void *)((ulong)local_b8 | 0x8000000000000000);
        SVar20.str = (char *)0xd00000000000001d;
        Foundation::URL::appendingPathComponent(SVar20,UVar8);
        (**(code **)(lVar18 + 8))(lVar17,UVar4.unknown);
      }
      else {
        FUN_10045b274(lVar17);
      }
      (*local_80)(lVar13,!bVar3,1,UVar4.unknown);
      FUN_100011090(lVar13,lVar16,&DAT_100fc7ce0,&DAT_100c4d030);
      lVar10 = lVar16;
      (*pcVar15)(lVar16,1,UVar4.unknown);
      puVar1 = local_b0;
      if ((int)lVar10 == 1) {
        FUN_10045b274(lVar13);
        FUN_10045b274(local_70);
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_b0,lVar16,UVar4.unknown);
        UVar8.unknown = &_OBJC_CLASS___NSBundle;
        _objc_allocWithZone();
        pNVar11 = Foundation::URL::_bridgeToObjectiveC(UVar8);
        lVar18 = local_a0;
        IVar7 = objc_stub::initWithURL_((ID)UVar8.unknown,pNVar11);
        lVar13 = local_a8;
        (**(code **)(lVar18 + 8))(puVar1,UVar4.unknown);
        FUN_10045b274(lVar13);
        FUN_10045b274(local_70);
        if (IVar7 != 0) {
          _swift_bridgeObjectRelease(local_78);
          return IVar7;
        }
      }
      uVar19 = uVar19 + 1;
      puVar5 = puVar5 + local_88;
    } while (local_98 != (undefined *)uVar19);
  }
  *(undefined4 *)(lVar12 + -8) = 0;
  *(undefined8 *)(lVar12 + -0x10) = 0x2c;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000032,0x8000000100da6b30,
             0xda6b20);
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1004595c8);
  (*pcVar15)();
}



/* Address: 0x1004595c8 | FUN_1004595c8 */

undefined * FUN_1004595c8(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  local_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  lVar8 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10046acf8(0,lVar7,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(lVar6 + 0x48);
    local_88 = *(code **)(lVar6 + 0x10);
    puVar4 = local_68;
    do {
      (*local_88)(lVar5,param_1,UVar3.unknown);
      puVar2 = local_70;
      (**(code **)(lVar6 + 0x20))(local_70,lVar5,UVar3.unknown);
      _swift_dynamicCast(lVar5 - extraout_x8_00,puVar2,UVar3.unknown,local_78,7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_10046acf8(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_10045b224(lVar5 - extraout_x8_00,
                    local_68 +
                    *(long *)(lVar8 + 0x48) * uVar1 +
                    ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      param_1 = param_1 + local_80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar4;
}



/* Address: 0x1004597a8 | FUN_1004597a8 */

void FUN_1004597a8(void)

{
  FUN_100242924(PTR_typeMetadataAccessor_100ea7480);
  return;
}



/* Address: 0x1004597b4 | FUN_1004597b4 */

void FUN_1004597b4(void)

{
  FUN_100242924(FUN_10045bd80);
  return;
}



/* Address: 0x1004597c0 | FUN_1004597c0 */

void FUN_1004597c0(void)

{
  FUN_100459f24(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1004597cc | FUN_1004597cc */

void FUN_1004597cc(void)

{
  FUN_10045a0c8(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1004597d8 | FUN_1004597d8 */

void FUN_1004597d8(void)

{
  FUN_10045a254(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1004597e4 | FUN_1004597e4 */

void FUN_1004597e4(void)

{
  FUN_1002d6948(0x7453746e65696c43,0xeb0000000065726f);
  return;
}



/* Address: 0x100459804 | FUN_100459804 */

void FUN_100459804(void)

{
  FUN_1000dbd5c(&DAT_100c4c550,&DAT_100fc7c08,&DAT_100c4c580,0x50);
  return;
}



/* Address: 0x100459824 | FUN_100459824 */

undefined1  [16] FUN_100459824(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000031;
  auVar1._0_8_ = 0x2e302e302e373231;
  return auVar1;
}



/* Address: 0x100459840 | FUN_100459840 */

void FUN_100459840(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
                    /* WARNING: Could not recover jumptable at 0x000100459884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,1,1,puVar1);
  return;
}



/* Address: 0x100459888 | FUN_100459888 */

void FUN_100459888(void)

{
  FUN_10045a660(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x100459894 | FUN_100459894 */

void FUN_100459894(void)

{
  FUN_1000dbd5c(&DAT_100c4c590,&DAT_100fc7c18,&DAT_100c4c5b8,0x30);
  return;
}



/* Address: 0x1004598b4 | FUN_1004598b4 */

void FUN_1004598b4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10046bfec(0);
  FUN_1000d80e0(param_1,"PasteMCP/DI+PasteMCP.swift",0x1a,2,0xb,0x13,FUN_10046e66c,0,uVar1);
  return;
}



/* Address: 0x100459904 | FUN_100459904 */

void FUN_100459904(void)

{
  FUN_1000dbd5c(&DAT_100c4c5c0,&DAT_100fc7c20,&DAT_100c4c5e8,0x30);
  return;
}



/* Address: 0x100459924 | FUN_100459924 */

void FUN_100459924(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100484e38(0);
  FUN_1000d80e0(param_1,"PasteMCP/DI+PasteMCP.swift",0x1a,2,0x11,0x13,FUN_10046e7b4,0,uVar1);
  return;
}



/* Address: 0x100459974 | FUN_100459974 */

void FUN_100459974(void)

{
  FUN_1000dbd5c(&DAT_100c4c5f0,&DAT_100fc7c28,&DAT_100c4c618,0x30);
  return;
}



/* Address: 0x100459994 | FUN_100459994 */

void FUN_100459994(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100481734(0);
  FUN_1000d80e0(param_1,"PasteMCP/DI+PasteMCP.swift",0x1a,2,0x17,0x13,FUN_10046ea50,0,uVar1);
  return;
}



/* Address: 0x1004599e4 | FUN_1004599e4 */

void FUN_1004599e4(void)

{
  FUN_1002d6948(0x657672655350434d,0xe900000000000072);
  return;
}



/* Address: 0x100459a00 | FUN_100459a00 */

void FUN_100459a00(void)

{
  FUN_1000dbd5c(&DAT_100c4c620,&DAT_100fc7c30,&DAT_100c4c650,0x50);
  return;
}



/* Address: 0x100459a20 | FUN_100459a20 */

void FUN_100459a20(undefined8 *param_1)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  _swift_getKeyPath(&DAT_100c4c658);
  FUN_1002cb7e0(&local_58);
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[3] = uStack_40;
  param_1[2] = local_48;
  param_1[5] = uStack_30;
  param_1[4] = local_38;
  param_1[6] = local_28;
  return;
}



/* Address: 0x100459a7c | FUN_100459a7c */

void FUN_100459a7c(void)

{
  FUN_10045a9a0(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x100459a88 | FUN_100459a88 */

void FUN_100459a88(void)

{
  FUN_10045ab2c(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x100459a94 | FUN_100459a94 */

void FUN_100459a94(void)

{
  FUN_1002d6948(0x7369676552524344,0xeb00000000797274);
  return;
}



/* Address: 0x100459ab4 | FUN_100459ab4 */

void FUN_100459ab4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c7f8,param_1);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::get_hashValue();
  return;
}



/* Address: 0x100459af0 | FUN_100459af0 */

void FUN_100459af0(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c7f8);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(param_1);
  return;
}



/* Address: 0x100459b38 | FUN_100459b38 */

void FUN_100459b38(__int64 param_1,undefined8 param_2)

{
  Hasher into;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c7f8,param_2);
  into.unknown = auStack_68;
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100459b90 | FUN_100459b90 */

void FUN_100459b90(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c7f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c7f8,param_3);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix(uVar2,uVar3,param_3,pTVar1);
  return;
}



/* Address: 0x100459bdc | FUN_100459bdc */

void FUN_100459bdc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100459cec);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_1004645cc();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100459cf0);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100459cf4);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fc7ce0;
    FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
    uVar4 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
    uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar5 + uVar4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,param_1 + uVar4,
               uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100459cf8);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x100459cf8 | FUN_100459cf8 */

void FUN_100459cf8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100459de4);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1004645e4();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100459de8);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100459dec);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x20 + 0x20,param_1 + 0x20,uVar5,&DAT_100ec8508);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100459df0);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100459df0 | FUN_100459df0 */

undefined * FUN_100459df0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d00;
    FUN_1000037f0(&DAT_100fc7d00,&DAT_100c4c6c8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100fc7d08,&DAT_100c4c6d0);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_10046483c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100459f20);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      puVar8[4] = local_68;
      puVar8[1] = uStack_80;
      *puVar8 = local_88;
      puVar8[3] = uStack_70;
      puVar8[2] = uStack_78;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100459f24);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x100459f24 | FUN_100459f24 */

undefined * FUN_100459f24(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  undefined1 *puVar5;
  UUID UVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *capacity;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = &DAT_100fc7da8;
  FUN_1000037f0(&DAT_100fc7da8,&DAT_100c4c770);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7db0;
    FUN_1000037f0(&DAT_100fc7db0,&DAT_100c4c778);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_100011090(param_1,puVar9,&DAT_100fc7da8,&DAT_100c4c770);
      puVar5 = puVar9;
      FUN_1004647d0();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045a0c4);
        (*pcVar2)();
      }
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar4 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar5,puVar9,
                 UVar6.unknown);
      lVar12 = *(long *)(puVar4 + 0x38);
      lVar11 = 0;
      FUN_10045ba0c();
      FUN_1000523d8(puVar9 + iVar1,lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * (long)puVar5,
                    FUN_10045ba0c);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045a0c8);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x10045a0c8 | FUN_10045a0c8 */

undefined * FUN_10045a0c8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  UUID UVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *capacity;
  long lVar12;
  long lVar13;
  
  puVar6 = &DAT_100fc7d98;
  FUN_1000037f0(&DAT_100fc7d98,&DAT_100c4c760);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7da0;
    FUN_1000037f0(&DAT_100fc7da0,&DAT_100c4c768);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      FUN_100011090(param_1,puVar11,&DAT_100fc7d98,&DAT_100c4c760);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045a250);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar7 + 0x38);
      UVar9 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar9.unknown + -8) + 0x20))
                (lVar13 + *(long *)(*(long *)(UVar9.unknown + -8) + 0x48) * uVar8,
                 (long)puVar11 + (long)iVar4,UVar9.unknown);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045a254);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}



/* Address: 0x10045a254 | FUN_10045a254 */

undefined * FUN_10045a254(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  undefined1 *puVar5;
  UUID UVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *capacity;
  long lVar10;
  long lVar11;
  
  puVar3 = &DAT_100fc7d80;
  FUN_1000037f0(&DAT_100fc7d80,&DAT_100c4c748);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d88;
    FUN_1000037f0(&DAT_100fc7d88,&DAT_100c4c750);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_100011090(param_1,puVar9,&DAT_100fc7d80,&DAT_100c4c748);
      puVar5 = puVar9;
      FUN_1004647d0();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045a400);
        (*pcVar2)();
      }
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar4 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar5,puVar9,
                 UVar6.unknown);
      lVar11 = *(long *)(puVar4 + 0x38);
      puVar3 = &DAT_100fc7d90;
      FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
      (**(code **)(*(long *)(puVar3 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * (long)puVar5,puVar9 + iVar1,
                 puVar3);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045a404);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x10045a404 | FUN_10045a404 */

undefined * FUN_10045a404(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d70;
    FUN_1000037f0(&DAT_100fc7d70,&DAT_100c4c738);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_90,&DAT_100fc7d78,&DAT_100c4c740);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_10046483c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10045a52c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10045a530);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10045a530 | FUN_10045a530 */

undefined * FUN_10045a530(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_98;
  ulong uStack_90;
  undefined1 auStack_88 [40];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d60;
    FUN_1000037f0(&DAT_100fc7d60,&DAT_100c4c728);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_98,&DAT_100fc7d68,&DAT_100c4c730);
      uVar3 = uStack_90;
      uVar2 = local_98;
      uVar6 = local_98;
      uVar7 = uStack_90;
      FUN_10046483c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10045a65c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100076508(auStack_88,*(long *)(puVar5 + 0x38) + uVar6 * 0x28);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10045a660);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x38;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10045a660 | FUN_10045a660 */

undefined * FUN_10045a660(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  undefined1 *puVar5;
  UUID UVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *capacity;
  long lVar10;
  long lVar11;
  
  puVar3 = &DAT_100fc7d18;
  FUN_1000037f0(&DAT_100fc7d18,&DAT_100c4c6e0);
  lVar10 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d20;
    FUN_1000037f0(&DAT_100fc7d20,&DAT_100c4c6e8);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff));
    lVar10 = *(long *)(lVar10 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_100011090(param_1,puVar9,&DAT_100fc7d18,&DAT_100c4c6e0);
      puVar5 = puVar9;
      FUN_1004647d0();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045a80c);
        (*pcVar2)();
      }
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar11 = *(long *)(puVar4 + 0x30);
      UVar6 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar5,puVar9,
                 UVar6.unknown);
      lVar11 = *(long *)(puVar4 + 0x38);
      puVar3 = &DAT_100fc7d28;
      FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
      (**(code **)(*(long *)(puVar3 + -8) + 0x20))
                (lVar11 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * (long)puVar5,puVar9 + iVar1,
                 puVar3);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045a810);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar10;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x10045a810 | thunk_FUN_1004782f4 */

void thunk_FUN_1004782f4(void)

{
  FUN_1004782f4();
  return;
}



/* Address: 0x10045a814 | FUN_10045a814 */

undefined * FUN_10045a814(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *capacity;
  long lVar12;
  long lVar13;
  
  puVar6 = &DAT_100fc7d50;
  FUN_1000037f0(&DAT_100fc7d50,&DAT_100c4c718);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d58;
    FUN_1000037f0(&DAT_100fc7d58,&DAT_100c4c720);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      FUN_100011090(param_1,puVar11,&DAT_100fc7d50,&DAT_100c4c718);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045a99c);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar7 + 0x38);
      lVar9 = 0;
      FUN_100484870();
      FUN_1000523d8((long)puVar11 + (long)iVar4,
                    lVar13 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * uVar8,FUN_100484870);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045a9a0);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}



/* Address: 0x10045a9a0 | FUN_10045a9a0 */

undefined * FUN_10045a9a0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *capacity;
  long lVar12;
  long lVar13;
  
  puVar6 = &DAT_100fc7d40;
  FUN_1000037f0(&DAT_100fc7d40,&DAT_100c4c708);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d48;
    FUN_1000037f0(&DAT_100fc7d48,&DAT_100c4c710);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      FUN_100011090(param_1,puVar11,&DAT_100fc7d40,&DAT_100c4c708);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045ab28);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar7 + 0x38);
      lVar9 = 0;
      FUN_100481150();
      FUN_1000523d8((long)puVar11 + (long)iVar4,
                    lVar13 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * uVar8,FUN_100481150);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045ab2c);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}



/* Address: 0x10045ab2c | FUN_10045ab2c */

undefined * FUN_10045ab2c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong *puVar11;
  undefined *capacity;
  long lVar12;
  long lVar13;
  
  puVar6 = &DAT_100fc7d30;
  FUN_1000037f0(&DAT_100fc7d30,&DAT_100c4c6f8);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  capacity = *(undefined **)(param_1 + 0x10);
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d38;
    FUN_1000037f0(&DAT_100fc7d38,&DAT_100c4c700);
    puVar7 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar4 = *(int *)(puVar6 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    _swift_retain();
    do {
      FUN_100011090(param_1,puVar11,&DAT_100fc7d30,&DAT_100c4c6f8);
      uVar2 = *puVar11;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar8 = uVar2;
      uVar10 = uVar3;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045acb4);
        (*pcVar5)();
      }
      uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar7 + uVar10 + 0x40) = *(ulong *)(puVar7 + uVar10 + 0x40) | 1L << (uVar8 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar7 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar13 = *(long *)(puVar7 + 0x38);
      lVar9 = 0;
      FUN_10048113c();
      FUN_1000523d8((long)puVar11 + (long)iVar4,
                    lVar13 + *(long *)(*(long *)(lVar9 + -8) + 0x48) * uVar8,FUN_10048113c);
      if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045acb8);
        (*pcVar5)();
      }
      *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar7);
  }
  return puVar7;
}



/* Address: 0x10045acb8 | FUN_10045acb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10045acb8(void)

{
  return ZEXT816(0x100fc7c78);
}



/* Address: 0x10045acd8 | FUN_10045acd8 */

undefined * FUN_10045acd8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7cd0;
    FUN_1000037f0(&DAT_100fc7cd0,&DAT_100c4c698);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10045ade4);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10045ade8);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x10045ade8 | FUN_10045ade8 */

undefined * FUN_10045ade8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  undefined1 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7cf8;
    FUN_1000037f0(&DAT_100fc7cf8,&DAT_100c4c6c0);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar9 + -0x10);
      uVar3 = *(ulong *)(puVar9 + -8);
      uVar4 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      FUN_10046483c();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045aed8);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined1 *)(*(long *)(puVar6 + 0x38) + uVar7) = uVar4;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10045aedc);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 0x18;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x10045aedc | FUN_10045aedc */

undefined * FUN_10045aedc(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7cf0;
    FUN_1000037f0(&DAT_100fc7cf0,&DAT_100c4c6b8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_10046483c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10045afd4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10045afd8);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10045afd8 | FUN_10045afd8 */

undefined * FUN_10045afd8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *capacity;
  undefined1 *puVar14;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7d10;
    FUN_1000037f0(&DAT_100fc7d10,&DAT_100c4c6d8);
    puVar10 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar14 = (undefined1 *)(param_1 + 0x50);
    do {
      uVar2 = *(ulong *)(puVar14 + -0x30);
      uVar5 = *(ulong *)(puVar14 + -0x28);
      uVar3 = *(undefined8 *)(puVar14 + -0x20);
      uVar6 = *(undefined8 *)(puVar14 + -0x18);
      uVar4 = *(undefined8 *)(puVar14 + -0x10);
      uVar7 = *(undefined8 *)(puVar14 + -8);
      uVar8 = *puVar14;
      _swift_bridgeObjectRetain(uVar5);
      FUN_10045b2bc(uVar3,uVar6,uVar4,uVar7,uVar8);
      uVar11 = uVar2;
      uVar12 = uVar5;
      FUN_10046483c();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10045b110);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar13 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x28);
      *puVar13 = uVar3;
      puVar13[1] = uVar6;
      puVar13[2] = uVar4;
      puVar13[3] = uVar7;
      *(undefined1 *)(puVar13 + 4) = uVar8;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10045b114);
        (*pcVar9)();
      }
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      capacity = capacity + -1;
      puVar14 = puVar14 + 0x38;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar10);
  }
  return puVar10;
}



/* Address: 0x10045b114 | FUN_10045b114 */

undefined * FUN_10045b114(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7cd8;
    FUN_1000037f0(&DAT_100fc7cd8,&DAT_100c4c6a0);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar5);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_10046483c();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10045b220);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10045b224);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x10045b224 | FUN_10045b224 */

undefined8 FUN_10045b224(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10045b274 | FUN_10045b274 */

undefined8 FUN_10045b274(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10045b2bc | FUN_10045b2bc */

void FUN_10045b2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_4 >> 0x3c) & 3 | (param_5 & 0x3f) << 2;
  if (uVar1 < 5) {
    if (uVar1 == 3) {
      _swift_bridgeObjectRetain(param_2);
      return;
    }
    if (uVar1 == 4) {
      _swift_bridgeObjectRetain(param_2);
      FUN_1001037b4(param_3,param_4);
      return;
    }
  }
  else if ((uVar1 == 5) || (uVar1 == 6)) {
    _swift_bridgeObjectRetain();
    return;
  }
  return;
}



/* Address: 0x10045b330 | FUN_10045b330 */

undefined * FUN_10045b330(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7dc0;
    FUN_1000037f0(&DAT_100fc7dc0,&DAT_100c4c780);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_100011090(param_1,puVar5,&DAT_100fc7dc8,&DAT_100c4c788);
      uVar1 = local_88;
      uVar4 = local_88;
      FUN_1004648b4();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045b450);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045b454);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x10045b454 | FUN_10045b454 */

void FUN_10045b454(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100fc7dd0 != 0) {
    return;
  }
  puVar1 = &DAT_100ed6948;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100fc7dd0 = param_1;
  return;
}



/* Address: 0x10045b4a4 | FUN_10045b4a4 */

void FUN_10045b4a4(void)

{
  FUN_10045b4ec(&DAT_100fc7dd8,&TargetProtocolConformanceDescriptor_100c4c824);
  return;
}



/* Address: 0x10045b4c8 | FUN_10045b4c8 */

void FUN_10045b4c8(void)

{
  FUN_10045b4ec(&DAT_100fc7de0,&TargetProtocolConformanceDescriptor_100c4c7cc);
  return;
}



/* Address: 0x10045b4ec | FUN_10045b4ec */

void FUN_10045b4ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_10045b454(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10045b52c | thunk_FUN_100459804 */

void thunk_FUN_100459804(void)

{
  FUN_100459804();
  return;
}



/* Address: 0x10045b530 | FUN_10045b530 */

undefined8 FUN_10045b530(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  
  puVar4 = (undefined8 *)&DAT_100fc7de8;
  FUN_1000037f0(&DAT_100fc7de8,&DAT_100c4c868);
  _swift_initStackObject();
  puVar4[3] = 4;
  puVar4[2] = 2;
  puVar5 = puVar4;
  FUN_100194a0c();
  uVar2 = puVar5[1];
  puVar4[4] = *puVar5;
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar4[9] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar4[10] = &PTR_PTR_100ebcc60;
  puVar4[5] = uVar2;
  puVar4[6] = param_1;
  puVar4[7] = param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain();
  FUN_100194a38();
  uVar2 = param_2[1];
  puVar4[0xb] = *param_2;
  puVar4[0xc] = uVar2;
  bVar3 = (param_3 & 1) == 0;
  uVar2 = 0x687475616f;
  if (bVar3) {
    uVar2 = 0x6c61756e616d;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar3) {
    puVar1 = &DAT_e600000000000000;
  }
  puVar4[0x10] = puVar6;
  puVar4[0x11] = &PTR_PTR_100ebcc60;
  puVar4[0xd] = uVar2;
  puVar4[0xe] = puVar1;
  _swift_bridgeObjectRetain();
  FUN_100459df0(puVar4);
  _swift_setDeallocating(puVar4);
  puVar6 = &DAT_100fc7d08;
  FUN_1000037f0(&DAT_100fc7d08,&DAT_100c4c6d0);
  _swift_arrayDestroy(puVar4 + 4,2,puVar6);
  return 0xd000000000000014;
}


