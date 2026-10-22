/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001ff91c | FUN_1001ff91c */

void FUN_1001ff91c(void)

{
  FUN_1001ff964(PTR__NSFontTextStyleSubheadline_100ea9088);
  return;
}



/* Address: 0x1001ff928 | FUN_1001ff928 */

void FUN_1001ff928(void)

{
  FUN_1001ff964(PTR__NSFontTextStyleBody_100ea9050);
  return;
}



/* Address: 0x1001ff934 | FUN_1001ff934 */

void FUN_1001ff934(void)

{
  FUN_1001ff964(PTR__NSFontTextStyleCallout_100ea9058);
  return;
}



/* Address: 0x1001ff940 | FUN_1001ff940 */

void FUN_1001ff940(void)

{
  FUN_1001ff964(PTR__NSFontTextStyleFootnote_100ea9070);
  return;
}



/* Address: 0x1001ff94c | FUN_1001ff94c */

void FUN_1001ff94c(void)

{
  FUN_1001ff964(PTR__NSFontTextStyleCaption1_100ea9060);
  return;
}



/* Address: 0x1001ff958 | FUN_1001ff958 */

void FUN_1001ff958(void)

{
  FUN_1001ff964(PTR__NSFontTextStyleCaption2_100ea9068);
  return;
}



/* Address: 0x1001ff964 | FUN_1001ff964 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001ff964(undefined8 *param_1)

{
  undefined *puVar1;
  NSDictionary *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f363c(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_1001f3e90(0);
  FUN_1001ffa7c();
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  IVar3 = NSFont::preferredFontForTextStyle_options_((ID)&_OBJC_CLASS___NSFont,uVar4,pNVar2);
  return IVar3;
}



/* Address: 0x1001ffa0c | FUN_1001ffa0c */

void FUN_1001ffa0c(void)

{
  FUN_1001ffa30(PTR__NSFontWeightBold_100ea90a8);
  return;
}



/* Address: 0x1001ffa18 | FUN_1001ffa18 */

void FUN_1001ffa18(void)

{
  FUN_1001ffa30(PTR__NSFontWeightSemibold_100ea90c0);
  return;
}



/* Address: 0x1001ffa24 | FUN_1001ffa24 */

void FUN_1001ffa24(void)

{
  FUN_1001ffa30(PTR__NSFontWeightMedium_100ea90b0);
  return;
}



/* Address: 0x1001ffa30 | FUN_1001ffa30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1001ffa30(undefined8 *param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined1 extraout_q0 [16];
  
  objc_stub::pointSize(unaff_x20);
  IVar1 = NSFont::systemFontOfSize_weight_((ID)&_OBJC_CLASS___NSFont,extraout_q0,*param_1);
  return IVar1;
}



/* Address: 0x1001ffa7c | FUN_1001ffa7c */

void FUN_1001ffa7c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fb5e88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1001f3e90(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c347e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c347e0,uVar1);
  DAT_100fb5e88 = pTVar2;
  return;
}



/* Address: 0x1001ffac0 | FUN_1001ffac0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1001ffac0(void)

{
  code *pcVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined8 uVar7;
  ID unaff_x20;
  long lVar8;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  uVar7 = *(undefined8 *)PTR__NSForegroundColorAttributeName_100ea90c8;
  puVar2 = &_OBJC_CLASS___NSCountedSet;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  IVar4 = objc_stub::length(unaff_x20);
  if ((long)IVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ffc54);
    (*pcVar1)();
  }
  puVar2 = &DAT_100ec09a0;
  _swift_allocObject(&DAT_100ec09a0,0x18,7);
  *(ID *)(puVar2 + 0x10) = IVar3;
  puVar5 = &DAT_100ec09c8;
  _swift_allocObject(&DAT_100ec09c8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1002006b0;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  local_60 = FUN_1000386a0;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100200604;
  puStack_68 = &DAT_100ec09e0;
  local_58 = puVar5;
  aBlock = __Block_copy(&local_80);
  puVar6 = local_58;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::enumerateAttribute_inRange_options_usingBlock_(unaff_x20,uVar7,0,IVar4,0,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x92,0x38,0x4e,1);
  _swift_release(puVar2);
  _swift_release(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10020173c();
    lVar8 = *(long *)(IVar3 + 0x10);
    _swift_release(IVar3);
    return lVar8 == 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ffc58);
  (*pcVar1)();
}



/* Address: 0x1001ffc58 | FUN_1001ffc58 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1001ffc58(void)

{
  ulong uVar1;
  bool bVar2;
  NSFastEnumerationIterator NVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  void *pvVar7;
  ID IVar8;
  NSFastEnumerationIterator NVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x12;
  long lVar15;
  ID unaff_x20;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  code *local_120;
  undefined8 local_f8;
  undefined1 auStack_f0 [32];
  undefined *local_d0 [3];
  undefined8 local_b8;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  
  NVar3 = Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  pcVar18 = *(code **)(NVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(pcVar18 + 0x40));
  lVar19 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar16 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_100ea9008;
  puVar4 = &_OBJC_CLASS___NSCountedSet;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  IVar6 = objc_stub::length(unaff_x20);
  if ((long)IVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x1002003a4);
    (*pcVar18)();
  }
  puVar4 = &DAT_100ec0a18;
  local_120 = pcVar18;
  _swift_allocObject(&DAT_100ec0a18,0x18,7);
  *(ID *)(puVar4 + 0x10) = IVar5;
  puVar13 = &DAT_100ec0a40;
  _swift_allocObject(&DAT_100ec0a40,0x20,7);
  *(code **)(puVar13 + 0x10) = thunk_FUN_1002006b0;
  *(undefined **)(puVar13 + 0x18) = puVar4;
  local_88 = thunk_FUN_1000386a0;
  local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_100200604;
  local_90 = &DAT_100ec0a58;
  local_80 = puVar13;
  pvVar7 = __Block_copy(&local_a8);
  puVar12 = local_80;
  _swift_retain(puVar13);
  _swift_release(puVar12);
  objc_stub::enumerateAttribute_inRange_options_usingBlock_(unaff_x20,uVar16,0,IVar6,0,pvVar7);
  __Block_release(pvVar7);
  puVar12 = puVar13;
  _swift_isEscapingClosureAtFileLocation(puVar13,"",0x92,0x38,0x4e,1);
  _swift_release(puVar4);
  _swift_release(puVar13);
  if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x1002003a8);
    (*pcVar18)();
  }
  uVar16 = *(undefined8 *)PTR__NSForegroundColorAttributeName_100ea90c8;
  puVar4 = &_OBJC_CLASS___NSCountedSet;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar4);
  IVar8 = objc_stub::length(unaff_x20);
  if ((long)IVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x1002003ac);
    (*pcVar18)();
  }
  puVar4 = &DAT_100ec0a90;
  _swift_allocObject(&DAT_100ec0a90,0x18,7);
  *(ID *)(puVar4 + 0x10) = IVar6;
  puVar13 = &DAT_100ec0ab8;
  _swift_allocObject(&DAT_100ec0ab8,0x20,7);
  *(code **)(puVar13 + 0x10) = thunk_FUN_1002006b0;
  *(undefined **)(puVar13 + 0x18) = puVar4;
  local_88 = thunk_FUN_1000386a0;
  local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_100200604;
  local_90 = &DAT_100ec0ad0;
  local_80 = puVar13;
  pvVar7 = __Block_copy(&local_a8);
  puVar12 = local_80;
  _swift_retain(puVar13);
  _swift_release(puVar12);
  objc_stub::enumerateAttribute_inRange_options_usingBlock_(unaff_x20,uVar16,0,IVar8,0,pvVar7);
  __Block_release(pvVar7);
  puVar12 = puVar13;
  _swift_isEscapingClosureAtFileLocation(puVar13,"",0x92,0x38,0x4e,1);
  _swift_release(puVar4);
  _swift_release(puVar13);
  if (((ulong)puVar12 & 1) == 0) {
    NVar9 = (extension_Foundation)::__C::NSSet::makeIterator();
    Foundation::NSFastEnumerationIterator::_next(NVar9);
    puVar13 = PTR___type_metadata_for_Any_100eae0c0;
    lVar20 = 0;
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while (local_90 != (undefined *)0x0) {
      FUN_100011080(&local_a8,local_d0);
      ppuVar10 = local_d0;
      FUN_100004640(ppuVar10,local_b8);
      Swift::__bridgeAnythingToObjectiveC();
      IVar8 = objc_stub::countForObject_(IVar5,ppuVar10);
      _swift_unknownObjectRelease(ppuVar10);
      FUN_10000cbfc(local_d0,auStack_f0);
      uVar16 = 0;
      FUN_1002019d4(0);
      _swift_dynamicCast(&local_f8,auStack_f0,puVar13 + 8,uVar16,7);
      uVar16 = local_f8;
      puVar12 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar14 = puVar4;
      if (((ulong)puVar12 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        FUN_1002006e4(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
      }
      uVar17 = *(ulong *)(puVar14 + 0x10);
      puVar4 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar17) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_1002006e4(puVar4,uVar17 + 1,1,puVar14);
      }
      *(ulong *)(puVar4 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar4 + uVar17 * 0x10 + 0x20) = uVar16;
      *(ID *)(puVar4 + uVar17 * 0x10 + 0x28) = IVar8;
      bVar2 = SCARRY8(lVar20,IVar8);
      lVar20 = lVar20 + IVar8;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x10020039c);
        (*pcVar18)();
      }
      NVar9.unknown = (undefined *)local_d0;
      FUN_100004594();
      Foundation::NSFastEnumerationIterator::_next(NVar9);
    }
    local_120 = *(code **)(local_120 + 8);
    (*local_120)(lVar19 - extraout_x12,NVar3.unknown);
    NVar9 = (extension_Foundation)::__C::NSSet::makeIterator();
    Foundation::NSFastEnumerationIterator::_next(NVar9);
    puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (local_90 == (undefined *)0x0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      do {
        FUN_100011080(&local_a8,local_d0);
        ppuVar10 = local_d0;
        FUN_100004640(ppuVar10,local_b8);
        Swift::__bridgeAnythingToObjectiveC();
        IVar5 = objc_stub::countForObject_(IVar6,ppuVar10);
        _swift_unknownObjectRelease(ppuVar10);
        FUN_10000cbfc(local_d0,auStack_f0);
        uVar16 = 0;
        FUN_1002019d4(0);
        _swift_dynamicCast(&local_f8,auStack_f0,puVar13 + 8,uVar16,7);
        uVar16 = local_f8;
        puVar14 = puVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar11 = puVar12;
        if (((ulong)puVar14 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          FUN_1002006e4(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
        }
        uVar17 = *(ulong *)(puVar11 + 0x10);
        puVar12 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar17) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_1002006e4(puVar12,uVar17 + 1,1,puVar11);
        }
        *(ulong *)(puVar12 + 0x10) = uVar17 + 1;
        *(undefined8 *)(puVar12 + uVar17 * 0x10 + 0x20) = uVar16;
        *(ID *)(puVar12 + uVar17 * 0x10 + 0x28) = IVar5;
        bVar2 = SCARRY8(lVar15,IVar5);
        lVar15 = lVar15 + IVar5;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1002003a0);
          (*pcVar18)();
        }
        NVar9.unknown = (undefined *)local_d0;
        FUN_100004594();
        Foundation::NSFastEnumerationIterator::_next(NVar9);
      } while (local_90 != (undefined *)0x0);
    }
    (*local_120)(lVar19,NVar3.unknown);
    if (DAT_100fb63e0 != -1) {
      _swift_once(&DAT_100fb63e0,FUN_1001feab8);
    }
    uVar17 = DAT_1010577c8;
    IVar5 = objc_stub::length(unaff_x20);
    if (SBORROW8(IVar5,lVar15)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1002003cc);
      (*pcVar18)();
    }
    puVar13 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar14 = puVar12;
    if (((ulong)puVar13 & 1) == 0) {
      puVar14 = (undefined *)0x0;
      FUN_1002006e4(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
    }
    uVar1 = *(ulong *)(puVar14 + 0x10);
    puVar13 = puVar14;
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      FUN_1002006e4(puVar13,uVar1 + 1,1,puVar14);
    }
    *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar13 + uVar1 * 0x10 + 0x20) = uVar17;
    *(ID *)(puVar13 + uVar1 * 0x10 + 0x28) = IVar5 - lVar15;
    local_d0[0] = puVar13;
    FUN_100200450(local_d0);
    puVar13 = local_d0[0];
    if (*(long *)(local_d0[0] + 0x10) != 0) {
      uVar17 = *(ulong *)(local_d0[0] + 0x20);
    }
    FUN_1002067d4();
    if ((uVar17 & 1) == 0) {
      IVar5 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
    }
    else {
      IVar5 = NSColor::colorWithRed_green_blue_alpha_
                        ((ID)&_OBJC_CLASS___NSColor,0x3fbe1e1e1e1e1e1e,0x3fbe1e1e1e1e1e1e,
                         0x3fbe1e1e1e1e1e1e,0x3ff0000000000000);
    }
    IVar6 = objc_stub::length(unaff_x20);
    if (!SBORROW8(IVar6,lVar20)) {
      puVar12 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar14 = puVar4;
      if (((ulong)puVar12 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        FUN_1002006e4(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
      }
      uVar17 = *(ulong *)(puVar14 + 0x10);
      puVar4 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar17) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_1002006e4(puVar4,uVar17 + 1,1,puVar14);
      }
      *(ulong *)(puVar4 + 0x10) = uVar17 + 1;
      *(ID *)(puVar4 + uVar17 * 0x10 + 0x20) = IVar5;
      *(ID *)(puVar4 + uVar17 * 0x10 + 0x28) = IVar6 - lVar20;
      local_a8 = puVar4;
      FUN_100200450(&local_a8);
      if (*(long *)(local_a8 + 0x10) == 0) {
        _swift_bridgeObjectRelease(local_a8);
        _swift_bridgeObjectRelease(puVar13);
      }
      else {
        IVar5 = *(ID *)(local_a8 + 0x20);
        _swift_bridgeObjectRelease(local_a8);
        _swift_bridgeObjectRelease(puVar13);
      }
      return IVar5;
    }
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x100200410);
    (*pcVar18)();
  }
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x1002003b0);
  (*pcVar18)();
}



/* Address: 0x100200450 | FUN_100200450 */

void FUN_100200450(ulong *param_1)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong minimumCapacity;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_10021be0c();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fb64b8;
      FUN_1000037f0(&DAT_100fb64b8,&DAT_100c36df0);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_100200e9c(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_10020123c(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x100200560 | FUN_100200560 */

void FUN_100200560(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ID param_5)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [24];
  long local_58;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  FUN_100201b24(param_1,auStack_70);
  if (local_58 == 0) {
    FUN_100201adc(auStack_70);
  }
  else {
    FUN_100011080(auStack_70,auStack_50);
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100200604);
      (*pcVar1)();
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      puVar2 = auStack_50;
      FUN_100004640(puVar2,local_38);
      Swift::__bridgeAnythingToObjectiveC();
      objc_stub::addObject_(param_5,puVar2);
      _swift_unknownObjectRelease(puVar2);
    }
    FUN_100004594(auStack_50);
  }
  return;
}



/* Address: 0x100200604 | FUN_100200604 */

void FUN_100200604(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long local_60 [4];
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar2 = 0;
    local_60[1] = 0;
    local_60[2] = 0;
  }
  else {
    lVar2 = param_2;
    _swift_getObjectType();
  }
  local_60[0] = param_2;
  local_60[3] = lVar2;
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)(local_60,param_3,param_4,param_5);
  FUN_100201adc(local_60);
  return;
}



/* Address: 0x10020068c | FUN_10020068c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10020068c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002006b0 | FUN_1002006b0 */

void FUN_1002006b0(void)

{
  FUN_100200560();
  return;
}



/* Address: 0x1002006b8 | FUN_1002006b8 */

void FUN_1002006b8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002006c8 | FUN_1002006c8 */

void FUN_1002006c8(long param_1,long param_2)

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



/* Address: 0x1002006dc | FUN_1002006dc */

void FUN_1002006dc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002006e4 | FUN_1002006e4 */

undefined * FUN_1002006e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200814);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fb64c0;
    FUN_1000037f0(&DAT_100fb64c0,&DAT_100c355b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fb64b8;
    FUN_1000037f0(&DAT_100fb64b8,&DAT_100c36df0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200814 | FUN_100200814 */

undefined * FUN_100200814(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200944);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fb64a8;
    FUN_1000037f0(&DAT_100fb64a8,&DAT_100c355a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fb64b0;
    FUN_1000037f0(&DAT_100fb64b0,&DAT_100c355a8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200944 | FUN_100200944 */

undefined * FUN_100200944(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200a4c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fb64a0;
    FUN_1000037f0(&DAT_100fb64a0,&DAT_100c35598);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_SwiftUI_Text_100eab358);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200a4c | FUN_100200a4c */

undefined * FUN_100200a4c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200b7c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fb6478;
    FUN_1000037f0(&DAT_100fb6478,&DAT_100c35580);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fb6480;
    FUN_1000037f0(&DAT_100fb6480,&DAT_100c35588);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200b7c | FUN_100200b7c */

undefined * FUN_100200b7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200c94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fb6498;
    FUN_1000037f0(&DAT_100fb6498,&DAT_100c36dd0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200c94 | FUN_100200c94 */

undefined * FUN_100200c94(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200d9c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fb6490;
    FUN_1000037f0(&DAT_100fb6490,&DAT_100c36db0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ec2de0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200d9c | FUN_100200d9c */

undefined * FUN_100200d9c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100200e9c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fb6488;
    FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100200e9c | FUN_100200e9c */

void FUN_100200e9c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 uVar22;
  long unaff_x21;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      puVar7 = local_58;
      lVar21 = lVar9 + 1;
      if (lVar21 < lVar8) {
        lVar10 = *param_3;
        lVar14 = *(long *)(lVar10 + lVar21 * 0x10 + 8);
        lVar12 = lVar9 * 0x10;
        lVar17 = *(long *)(lVar10 + lVar12 + 8);
        lVar15 = lVar9 + 2;
        plVar19 = (long *)(lVar10 + lVar12 + 0x28);
        lVar16 = lVar14;
        do {
          lVar18 = lVar15;
          lVar21 = lVar8;
          if (lVar8 == lVar18) break;
          lVar21 = *plVar19;
          bVar4 = lVar21 <= lVar16;
          lVar15 = lVar18 + 1;
          plVar19 = plVar19 + 2;
          lVar16 = lVar21;
          lVar21 = lVar18;
        } while (lVar17 < lVar14 != bVar4);
        if (lVar17 < lVar14) {
          if (lVar21 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100201210);
            (*pcVar3)();
          }
          if (lVar9 < lVar21) {
            lVar16 = lVar21 << 4;
            lVar15 = lVar21;
            lVar8 = lVar9;
            do {
              lVar15 = lVar15 + -1;
              if (lVar8 != lVar15) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100201230);
                  (*pcVar3)();
                }
                puVar13 = (undefined8 *)(lVar10 + lVar12);
                lVar14 = lVar10 + lVar16;
                uVar22 = *puVar13;
                uVar2 = puVar13[1];
                uVar25 = *(undefined8 *)(lVar14 + -0x10);
                puVar13[1] = *(undefined8 *)(lVar14 + -8);
                *puVar13 = uVar25;
                *(undefined8 *)(lVar14 + -0x10) = uVar22;
                *(undefined8 *)(lVar14 + -8) = uVar2;
              }
              lVar8 = lVar8 + 1;
              lVar16 = lVar16 + -0x10;
              lVar12 = lVar12 + 0x10;
            } while (lVar8 < lVar15);
            lVar8 = param_3[1];
          }
        }
      }
      lVar12 = lVar21;
      if (lVar21 < lVar8) {
        if (SBORROW8(lVar21,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10020120c);
          (*pcVar3)();
        }
        if (lVar21 - lVar9 < param_4) {
          if (SCARRY8(lVar9,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100201214);
            (*pcVar3)();
          }
          lVar15 = lVar9 + param_4;
          if (lVar8 <= lVar9 + param_4) {
            lVar15 = lVar8;
          }
          if (lVar15 < lVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100201218);
            (*pcVar3)();
          }
          if (lVar21 != lVar15) {
            lVar8 = *param_3;
            puVar13 = (undefined8 *)(lVar8 + lVar21 * 0x10);
            lVar16 = lVar9 - lVar21;
            do {
              lVar10 = *(long *)(lVar8 + lVar21 * 0x10 + 8);
              lVar12 = lVar16;
              puVar20 = puVar13;
              do {
                if (lVar10 <= (long)puVar20[-1]) break;
                if (lVar8 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10020121c);
                  (*pcVar3)();
                }
                uVar22 = *puVar20;
                puVar20[1] = puVar20[-1];
                *puVar20 = puVar20[-2];
                puVar20[-1] = lVar10;
                puVar20 = puVar20 + -2;
                *puVar20 = uVar22;
                bVar4 = lVar12 != -1;
                lVar12 = lVar12 + 1;
              } while (bVar4);
              lVar21 = lVar21 + 1;
              puVar13 = puVar13 + 2;
              lVar16 = lVar16 + -1;
              lVar12 = lVar15;
            } while (lVar21 != lVar15);
          }
        }
      }
      if (lVar12 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002011fc);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100231e2c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar24 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar24) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100231e2c(puVar7,uVar24 + 1,1,puVar6);
      }
      *(ulong *)(puVar7 + 0x10) = uVar24 + 1;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x20) = lVar9;
      *(long *)(puVar7 + uVar24 * 0x10 + 0x28) = lVar12;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100201234);
        (*pcVar3)();
      }
      FUN_1002012b4(&local_58,*param_1,param_3);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_1002011cc;
      lVar8 = param_3[1];
      lVar9 = lVar12;
    } while (lVar12 < lVar8);
  }
  puVar7 = local_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10020123c);
    (*pcVar3)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_1002326dc();
  }
  puVar23 = (ulong *)(puVar7 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar9 = *param_3;
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100201238);
      (*pcVar3)();
    }
    plVar19 = (long *)(puVar7 + uVar24 * 0x10);
    lVar21 = *plVar19;
    puVar1 = puVar23 + uVar24 * 2;
    uVar11 = puVar1[1];
    FUN_100201524(lVar9 + lVar21 * 0x10,lVar9 + *puVar1 * 0x10,lVar9 + uVar11 * 0x10,lVar8);
    if (unaff_x21 != 0) break;
    if ((long)uVar11 < lVar21) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100201200);
      (*pcVar3)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100201204);
      (*pcVar3)();
    }
    *plVar19 = lVar21;
    plVar19[1] = uVar11;
    uVar11 = *puVar23;
    lVar9 = uVar11 - uVar24;
    if (uVar11 < uVar24) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100201208);
      (*pcVar3)();
    }
    uVar24 = uVar11 - 1;
    _memmove(puVar1,puVar1 + 2,lVar9 * 0x10);
    *puVar23 = uVar24;
  }
LAB_1002011cc:
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x10020123c | FUN_10020123c */

void FUN_10020123c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar4 = (undefined8 *)(lVar3 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      lVar5 = *(long *)(lVar3 + param_3 * 0x10 + 8);
      lVar6 = param_1;
      puVar7 = puVar4;
      do {
        if (lVar5 <= (long)puVar7[-1]) break;
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002012b4);
          (*pcVar1)();
        }
        uVar8 = *puVar7;
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7[-1] = lVar5;
        puVar7 = puVar7 + -2;
        *puVar7 = uVar8;
        bVar2 = lVar6 != -1;
        lVar6 = lVar6 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1002012b4 | FUN_1002012b4 */

undefined8 FUN_1002012b4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar10 = *param_1;
  if (1 < *(ulong *)(uVar10 + 0x10)) {
    uVar14 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar14 & 1) == 0) {
      FUN_1002326dc();
    }
    *param_1 = uVar10;
    lVar1 = uVar10 + 0x20;
    uVar14 = *(ulong *)(uVar10 + 0x10);
    do {
      uVar12 = uVar14 - 1;
      if (uVar14 < 4) {
        if (uVar14 == 3) {
          bVar7 = SBORROW8(*(long *)(uVar10 + 0x28),*(long *)(uVar10 + 0x20));
          lVar8 = *(long *)(uVar10 + 0x28) - *(long *)(uVar10 + 0x20);
          goto LAB_10020138c;
        }
        if (uVar14 < 2) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100201504);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar8 = *plVar2;
        lVar9 = plVar2[1];
        bVar7 = SBORROW8(lVar9,lVar8);
        lVar9 = lVar9 - lVar8;
LAB_1002013ec:
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014f4);
          (*pcVar6)();
        }
        plVar2 = (long *)(lVar1 + uVar12 * 0x10);
        lVar8 = *plVar2;
        lVar11 = plVar2[1];
        if (SBORROW8(lVar11,lVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014fc);
          (*pcVar6)();
        }
        uVar13 = uVar12;
        if (lVar11 - lVar8 < lVar9) break;
      }
      else {
        lVar9 = lVar1 + uVar14 * 0x10;
        if (SBORROW8(*(long *)(lVar9 + -0x38),*(long *)(lVar9 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014dc);
          (*pcVar6)();
        }
        lVar8 = *(long *)(lVar9 + -0x28) - *(long *)(lVar9 + -0x30);
        if (SBORROW8(*(long *)(lVar9 + -0x28),*(long *)(lVar9 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014e0);
          (*pcVar6)();
        }
        plVar2 = (long *)(uVar10 + uVar14 * 0x10);
        lVar11 = *plVar2;
        lVar4 = plVar2[1];
        lVar5 = lVar4 - lVar11;
        if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014e8);
          (*pcVar6)();
        }
        if (SCARRY8(lVar8,lVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014f0);
          (*pcVar6)();
        }
        bVar7 = false;
        if (lVar8 + lVar5 < *(long *)(lVar9 + -0x38) - *(long *)(lVar9 + -0x40)) {
LAB_10020138c:
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014e4);
            (*pcVar6)();
          }
          plVar2 = (long *)(uVar10 + uVar14 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar9 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014ec);
            (*pcVar6)();
          }
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar11 = *plVar2;
          lVar4 = plVar2[1];
          lVar5 = lVar4 - lVar11;
          if (SBORROW8(lVar4,lVar11)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014f8);
            (*pcVar6)();
          }
          if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100201500);
            (*pcVar6)();
          }
          bVar7 = false;
          if (lVar9 + lVar5 < lVar8) goto LAB_1002013ec;
          uVar13 = uVar14 - 2;
          if (lVar5 <= lVar8) {
            uVar13 = uVar12;
          }
        }
        else {
          plVar2 = (long *)(lVar1 + uVar12 * 0x10);
          lVar9 = *plVar2;
          lVar11 = plVar2[1];
          if (SBORROW8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100201508);
            (*pcVar6)();
          }
          uVar13 = uVar14 - 2;
          if (lVar11 - lVar9 <= lVar8) {
            uVar13 = uVar12;
          }
        }
      }
      uVar12 = uVar13 - 1;
      if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014cc);
        (*pcVar6)();
      }
      lVar8 = *param_3;
      if (lVar8 == 0) {
        *param_1 = uVar10;
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100201524);
        (*pcVar6)();
      }
      plVar2 = (long *)(lVar1 + uVar12 * 0x10);
      lVar11 = *plVar2;
      plVar3 = (long *)(lVar1 + uVar13 * 0x10);
      lVar9 = plVar3[1];
      FUN_100201524(lVar8 + lVar11 * 0x10,lVar8 + *plVar3 * 0x10,lVar8 + lVar9 * 0x10,param_2);
      if (unaff_x21 != 0) break;
      if (lVar9 < lVar11) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014d0);
        (*pcVar6)();
      }
      if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014d4);
        (*pcVar6)();
      }
      *plVar2 = lVar11;
      plVar2[1] = lVar9;
      uVar12 = *(ulong *)(uVar10 + 0x10);
      if (uVar12 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1002014d8);
        (*pcVar6)();
      }
      uVar14 = uVar12 - 1;
      _memmove(plVar3,plVar3 + 2,(uVar14 - uVar13) * 0x10);
      *(ulong *)(uVar10 + 0x10) = uVar14;
    } while (2 < uVar12);
    *param_1 = uVar10;
  }
  return 1;
}



/* Address: 0x100201524 | FUN_100201524 */

undefined8
FUN_100201524(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar2 = lVar9 + 0xf;
  if (-1 < lVar9) {
    lVar2 = lVar9;
  }
  lVar2 = lVar2 >> 4;
  lVar10 = (long)param_3 - (long)param_2;
  lVar5 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar5 = lVar10;
  }
  lVar5 = lVar5 >> 4;
  if (lVar2 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar2 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar2 << 4);
    }
    puVar4 = param_4 + lVar2 * 2;
    puVar7 = param_1;
    if (0xf < lVar9) {
      do {
        if (param_3 <= param_2) break;
        if ((long)param_4[1] < (long)param_2[1]) {
          puVar6 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          puVar6 = param_4 + 2;
          puVar8 = param_4;
        }
        param_4 = puVar6;
        if (puVar7 != puVar8) {
          uVar11 = *puVar8;
          puVar7[1] = puVar8[1];
          *puVar7 = uVar11;
        }
        puVar7 = puVar7 + 2;
      } while (param_4 < puVar4);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar5 << 4);
    }
    puVar4 = param_4 + lVar5 * 2;
    puVar7 = param_2;
    if ((param_1 < param_2) && (0xf < lVar10)) {
      do {
        while (puVar8 = param_3 + -2, (long)param_2[-1] < (long)puVar4[-1]) {
          puVar7 = param_2 + -2;
          if (param_3 != param_2) {
            uVar11 = *puVar7;
            param_3[-1] = param_2[-1];
            *puVar8 = uVar11;
          }
          if ((puVar7 <= param_1) || (param_3 = puVar8, param_2 = puVar7, puVar4 <= param_4))
          goto LAB_1002016e0;
        }
        puVar6 = puVar4 + -2;
        if (param_3 != puVar4) {
          uVar11 = *puVar6;
          param_3[-1] = puVar4[-1];
          *puVar8 = uVar11;
        }
        puVar4 = puVar6;
        puVar7 = param_2;
        param_3 = puVar8;
      } while (param_4 < puVar6);
    }
  }
LAB_1002016e0:
  uVar3 = (long)puVar4 - (long)param_4;
  uVar1 = uVar3 + 0xf;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((puVar7 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar7)) {
    _memmove(puVar7,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Address: 0x10020173c | FUN_10020173c */

undefined * FUN_10020173c(ID param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  NSFastEnumerationIterator NVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  NVar4 = Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  lVar10 = *(long *)(NVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = (undefined *)objc_stub::count(param_1);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar5 != (undefined *)0x0) {
    puVar6 = puVar5;
    FUN_100201a18(puVar5,0);
    _swift_retain();
  }
  uVar9 = *(ulong *)(puVar6 + 0x18);
  _swift_release(puVar6);
  (extension_Foundation)::__C::NSSet::makeIterator();
  if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002019cc);
    (*pcVar2)();
  }
  uVar9 = uVar9 >> 1;
  puVar7 = puVar6 + 0x20;
  if (puVar5 != (undefined *)0x0) {
    FUN_100201a98();
    uVar9 = uVar9 - (long)puVar5;
    do {
      Swift::IteratorProtocol::_next();
      if (local_68 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002019d4);
        (*pcVar2)();
      }
      FUN_10000cbfc(auStack_80,auStack_a0);
      FUN_100011080(auStack_a0,puVar7);
      puVar7 = puVar7 + 0x20;
      FUN_100004594(auStack_80);
      puVar5 = puVar5 + -1;
    } while (puVar5 != (undefined *)0x0);
  }
  local_a8 = lVar10;
  FUN_100201a98();
  Swift::IteratorProtocol::_next();
  if (local_88 != 0) {
    puVar5 = puVar6;
    do {
      FUN_100011080(auStack_a0,auStack_80);
      puVar6 = puVar5;
      if (uVar9 == 0) {
        uVar9 = *(ulong *)(puVar5 + 0x18);
        if ((long)((uVar9 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002019c8);
          (*pcVar2)();
        }
        uVar8 = uVar9 & 0xfffffffffffffffe;
        if ((long)uVar9 < 2) {
          uVar8 = 1;
        }
        puVar6 = &DAT_100fb64d0;
        FUN_1000037f0(&DAT_100fb64d0,&DAT_100c355b8);
        _swift_allocObject();
        puVar7 = puVar6;
        _malloc_size();
        puVar1 = puVar7 + -1;
        if (0x1f < (long)puVar7) {
          puVar1 = puVar7 + -0x20;
        }
        *(ulong *)(puVar6 + 0x10) = uVar8;
        *(long *)(puVar6 + 0x18) = ((long)puVar1 >> 5) << 1;
        puVar7 = puVar6 + 0x20;
        uVar9 = *(ulong *)(puVar5 + 0x18) >> 1;
        if (*(long *)(puVar5 + 0x10) != 0) {
          if ((puVar6 != puVar5) || (puVar5 + 0x20 + uVar9 * 0x20 <= puVar7)) {
            _memmove(puVar7,puVar5 + 0x20,uVar9 << 5);
          }
          *(undefined8 *)(puVar5 + 0x10) = 0;
        }
        puVar7 = puVar7 + uVar9 * 0x20;
        uVar9 = ((long)puVar1 >> 5 & 0x7fffffffffffffffU) - uVar9;
        _swift_release(puVar5);
      }
      bVar3 = SBORROW8(uVar9,1);
      uVar9 = uVar9 - 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002019c4);
        (*pcVar2)();
      }
      FUN_100011080(auStack_80,puVar7);
      puVar7 = puVar7 + 0x20;
      Swift::IteratorProtocol::_next();
      puVar5 = puVar6;
    } while (local_88 != 0);
  }
  (**(code **)(local_a8 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),NVar4.unknown)
  ;
  FUN_100201adc(auStack_a0);
  if (1 < *(ulong *)(puVar6 + 0x18)) {
    uVar8 = *(ulong *)(puVar6 + 0x18) >> 1;
    if (SBORROW8(uVar8,uVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1002019d0);
      (*pcVar2)();
    }
    *(ulong *)(puVar6 + 0x10) = uVar8 - uVar9;
  }
  return puVar6;
}



/* Address: 0x1002019d4 | FUN_1002019d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002019d4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb6470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSColor;
  _swift_getObjCClassMetadata();
  DAT_100fb6470 = puVar1;
  return;
}



/* Address: 0x100201a18 | FUN_100201a18 */

undefined * FUN_100201a18(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fb64d0;
    FUN_1000037f0(&DAT_100fb64d0,&DAT_100c355b8);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Address: 0x100201a98 | FUN_100201a98 */

void FUN_100201a98(void)

{
  NSFastEnumerationIterator NVar1;
  undefined *puVar2;
  
  if (DAT_100fb64c8 != (undefined *)0x0) {
    return;
  }
  NVar1 = Foundation::NSFastEnumerationIterator::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__NSFastEnumerationIterator_>Swift__IteratorProtocol_100ea7050;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__NSFastEnumerationIterator_>Swift__IteratorProtocol_100ea7050
             ,NVar1.unknown);
  DAT_100fb64c8 = puVar2;
  return;
}



/* Address: 0x100201adc | FUN_100201adc */

undefined8 FUN_100201adc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7000;
  FUN_1000037f0(&DAT_100fb7000,&DAT_100c36720);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100201b24 | FUN_100201b24 */

undefined8 FUN_100201b24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7000;
  FUN_1000037f0(&DAT_100fb7000,&DAT_100c36720);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100201b74 | thunk_FUN_10020068c */

void thunk_FUN_10020068c(void)

{
  FUN_10020068c();
  return;
}



/* Address: 0x100201b78 | thunk_FUN_10020068c */

void thunk_FUN_10020068c(void)

{
  FUN_10020068c();
  return;
}



/* Address: 0x100201b7c | thunk_FUN_1002006c8 */

void thunk_FUN_1002006c8(void)

{
  FUN_1002006c8();
  return;
}



/* Address: 0x100201b80 | thunk_FUN_1002006c8 */

void thunk_FUN_1002006c8(void)

{
  FUN_1002006c8();
  return;
}



/* Address: 0x100201b84 | thunk_FUN_1002006b0 */

void thunk_FUN_1002006b0(void)

{
  FUN_100200560();
  return;
}



/* Address: 0x100201b88 | thunk_FUN_1002006dc */

void thunk_FUN_1002006dc(void)

{
  FUN_1002006dc();
  return;
}



/* Address: 0x100201b8c | thunk_FUN_1002006dc */

void thunk_FUN_1002006dc(void)

{
  FUN_1002006dc();
  return;
}



/* Address: 0x100201b90 | thunk_FUN_1002006b8 */

void thunk_FUN_1002006b8(void)

{
  FUN_1002006b8();
  return;
}



/* Address: 0x100201b94 | thunk_FUN_1002006b8 */

void thunk_FUN_1002006b8(void)

{
  FUN_1002006b8();
  return;
}



/* Address: 0x100201b98 | thunk_FUN_100201b9c */

void thunk_FUN_100201b9c(void)

{
  FUN_100201b9c();
  return;
}



/* Address: 0x100201b9c | FUN_100201b9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100201b9c(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong uVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ID unaff_x20;
  long lVar9;
  ulong uVar10;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100201cac);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1.unknown + uVar10 * 8 + 0x20);
      }
      else {
        uVar4 = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,param_1);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100201ca8);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      pMVar5 = pMVar6;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/StackView+Extensions.swift",0x22,1,0xb,UVar7.unknown,pMVar5);
      }
      objc_stub::addArrangedSubview_(unaff_x20,uVar4);
      _swift_release(pMVar6);
      uVar10 = uVar10 + 1;
    } while (lVar1 != lVar9);
  }
  return;
}



/* Address: 0x100201ce4 | FUN_100201ce4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100201ce4(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _ArrayBuffer _Var4;
  ulong self;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ID unaff_x20;
  long lVar9;
  ulong uVar10;
  
  _Var4.unknown = (undefined *)objc_stub::arrangedSubviews(unaff_x20);
  FUN_100201e68(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var2.unknown = _Var4.unknown;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100201e2c);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var4.unknown + uVar10 * 8 + 0x20);
      }
      else {
        self = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var4);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100201e28);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      pMVar5 = pMVar6;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/StackView+Extensions.swift",0x22,1,0x10,UVar7.unknown,pMVar5);
      }
      objc_stub::removeArrangedSubview_(unaff_x20,self);
      objc_stub::removeFromSuperview(self);
      _swift_release(pMVar6);
      uVar10 = uVar10 + 1;
    } while (lVar1 != lVar9);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  return;
}



/* Address: 0x100201e68 | FUN_100201e68 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100201e68(void)

{
  undefined *puVar1;
  
  if (DAT_100fb64d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSView;
  _swift_getObjCClassMetadata();
  DAT_100fb64d8 = puVar1;
  return;
}



/* Address: 0x100201eac | thunk_FUN_100201eb0 */

void thunk_FUN_100201eb0(void)

{
  FUN_100201eb0();
  return;
}



/* Address: 0x100201eb0 | FUN_100201eb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100201eb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long *plVar7;
  URL UVar8;
  char *pcVar9;
  ulong uVar10;
  undefined *puVar11;
  NSString *pNVar12;
  NSDictionary *pNVar13;
  ID IVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long extraout_x8;
  long extraout_x8_00;
  ulong *puVar19;
  ulong uVar20;
  long extraout_x12;
  long extraout_x12_00;
  long lVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  String SVar25;
  long alStack_f0 [3];
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  void *local_b0;
  long local_a8;
  char *local_a0;
  void *pvStack_98;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  alStack_f0[1] = param_2;
  alStack_f0[2] = param_3;
  local_c8 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_d0 = *(long *)(local_c8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  puVar11 = (undefined *)((long)alStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  local_d8 = puVar11;
  FUN_100202fc8();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  plVar22 = (long *)(puVar11 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a8 = (long)plVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = ((long)plVar22 - extraout_x12) - extraout_x12_00;
  pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3760();
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff));
    local_b8 = *(long *)(lVar21 + 0x48);
    local_c0 = lVar4;
    do {
      FUN_100203fa0(param_1,lVar24);
      lVar21 = local_a8;
      FUN_100203fa0(lVar24,local_a8);
      _swift_getEnumCaseMultiPayload(lVar21,lVar4);
      iVar3 = (int)lVar21;
      if (iVar3 < 3) {
        if (iVar3 == 0) {
          FUN_100203fe4(local_a8);
          puVar19 = (ulong *)PTR__NSFontAttributeName_100ea9048;
        }
        else {
          puVar19 = (ulong *)PTR__NSKernAttributeName_100ea90e8;
          if (iVar3 == 1) {
            FUN_100203fe4(local_a8);
            puVar19 = (ulong *)PTR__NSForegroundColorAttributeName_100ea90c8;
          }
        }
LAB_100202098:
        uVar6 = *puVar19;
      }
      else {
        puVar19 = (ulong *)PTR__NSBaselineOffsetAttributeName_100ea9010;
        if (iVar3 == 3) goto LAB_100202098;
        if (iVar3 == 4) {
          FUN_100203fe4(local_a8);
          puVar19 = (ulong *)PTR__NSParagraphStyleAttributeName_100ea90f8;
          goto LAB_100202098;
        }
        uVar6 = *(ulong *)PTR__NSLinkAttributeName_100ea90f0;
        FUN_100203fe4(local_a8);
      }
      FUN_100203fa0(lVar24,plVar22);
      plVar7 = plVar22;
      _swift_getEnumCaseMultiPayload(plVar22,lVar4);
      puVar1 = local_c8;
      lVar21 = local_d0;
      puVar11 = local_d8;
      iVar3 = (int)plVar7;
      if (iVar3 < 3) {
        if (iVar3 == 0) {
          puVar16 = (undefined8 *)&DAT_100fb64e8;
          ppuVar18 = &PTR__OBJC_CLASS___NSFont_100f8d678;
        }
        else {
          if (iVar3 != 1) goto LAB_100202110;
          puVar16 = &DAT_100fb6470;
          ppuVar18 = &PTR__OBJC_CLASS___NSColor_100f8d680;
        }
LAB_100202134:
        puVar11 = (undefined *)0x0;
        FUN_10000ec2c(0,puVar16,ppuVar18);
        local_a0 = (char *)*plVar22;
        pvStack_98 = local_b0;
        local_88 = puVar11;
        if (puVar11 != (undefined *)0x0) goto LAB_100202238;
        FUN_100201adc(&local_a0);
        _swift_bridgeObjectRetain(pcVar5);
        thunk_FUN_1001f5454();
        _swift_bridgeObjectRelease(pcVar5);
        if (((ulong)puVar16 & 1) == 0) {
          FUN_100203fe4(lVar24);
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          pcVar9 = pcVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          local_a0 = pcVar5;
          if ((int)pcVar9 == 0) {
            FUN_1001f5968();
          }
          pcVar5 = local_a0;
          FUN_100011080(*(long *)(local_a0 + 0x38) + uVar6 * 0x20,&local_80);
          FUN_1001f5f1c(uVar6,pcVar5);
          FUN_100203fe4(lVar24);
        }
        FUN_100201adc(&local_80);
      }
      else {
        if (iVar3 == 3) {
LAB_100202110:
          local_a0 = (char *)*plVar22;
          local_88 = PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528;
        }
        else {
          if (iVar3 == 4) {
            puVar16 = (undefined8 *)&DAT_100fb64e0;
            ppuVar18 = &PTR__OBJC_CLASS___NSParagraphStyle_100f8da08;
            goto LAB_100202134;
          }
          UVar8.unknown = local_d8;
          (**(code **)(local_d0 + 0x20))(local_d8,plVar22,local_c8);
          SVar25 = Foundation::URL::get_absoluteString(UVar8);
          local_b0 = SVar25.bridgeObject;
          (**(code **)(lVar21 + 8))(puVar11,puVar1);
          local_a0 = SVar25.str;
          local_88 = PTR___type_metadata_for_Swift_String_100eac208;
        }
LAB_100202238:
        uVar17 = 0;
        pvStack_98 = local_b0;
        FUN_100011080(&local_a0);
        pcVar9 = pcVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar15 = (uint)pcVar9;
        uVar10 = uVar6;
        local_a0 = pcVar5;
        thunk_FUN_1001f5454();
        uVar20 = (ulong)~(uint)uVar17 & 1;
        if (SCARRY8(*(long *)(pcVar5 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100202404);
          (*pcVar2)();
        }
        if (*(long *)(pcVar5 + 0x18) < (long)(*(long *)(pcVar5 + 0x10) + uVar20)) {
          FUN_10020355c();
          uVar10 = uVar6;
          thunk_FUN_1001f5454();
          pcVar5 = local_a0;
          if (((uint)uVar17 & 1) != (uVar15 & 1)) {
            FUN_1001f3e68(0);
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100202418);
            (*pcVar2)();
          }
        }
        else {
          pcVar5 = local_a0;
          if (((ulong)pcVar9 & 1) == 0) {
            FUN_1001f5968();
            pcVar5 = local_a0;
          }
        }
        local_a0 = pcVar5;
        if ((uVar17 & 1) == 0) {
          *(ulong *)(pcVar5 + (uVar10 >> 6) * 8 + 0x40) =
               *(ulong *)(pcVar5 + (uVar10 >> 6) * 8 + 0x40) | 1L << (uVar10 & 0x3f);
          *(ulong *)(*(long *)(pcVar5 + 0x30) + uVar10 * 8) = uVar6;
          FUN_100011080(&local_80,*(long *)(pcVar5 + 0x38) + uVar10 * 0x20);
          FUN_100203fe4(lVar24);
          if (SCARRY8(*(long *)(pcVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100202408);
            (*pcVar2)();
          }
          *(long *)(pcVar5 + 0x10) = *(long *)(pcVar5 + 0x10) + 1;
          lVar4 = local_c0;
        }
        else {
          lVar4 = *(long *)(pcVar5 + 0x38) + uVar10 * 0x20;
          FUN_100004594(lVar4);
          FUN_100011080(&local_80,lVar4);
          FUN_100203fe4(lVar24);
          lVar4 = local_c0;
        }
      }
      param_1 = param_1 + local_b8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar11 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_1001f3e68(0);
  FUN_100204020();
  pNVar13 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  IVar14 = objc_stub::initWithString_attributes_((ID)puVar11,pNVar12,pNVar13);
  _swift_bridgeObjectRelease(pcVar5);
  return IVar14;
}



/* Address: 0x100202418 | FUN_100202418 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100202418(undefined8 param_1)

{
  undefined *self;
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined1 auStack_40 [32];
  
  self = &_OBJC_CLASS___NSMutableParagraphStyle;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  objc_stub::setAlignment_(IVar1,param_1);
  IVar1 = objc_stub::copy(IVar1);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(IVar1);
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fb64e0,&PTR__OBJC_CLASS___NSParagraphStyle_100f8da08);
  _swift_dynamicCast(&local_48,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,7);
  return local_48;
}



/* Address: 0x1002024b8 | FUN_1002024b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002024b8(undefined8 param_1)

{
  undefined *self;
  ID IVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined1 auStack_40 [32];
  
  self = &_OBJC_CLASS___NSMutableParagraphStyle;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  objc_stub::setLineBreakMode_(IVar1,param_1);
  IVar1 = objc_stub::copy(IVar1);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(IVar1);
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fb64e0,&PTR__OBJC_CLASS___NSParagraphStyle_100f8da08);
  _swift_dynamicCast(&local_48,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar2,7);
  return local_48;
}



/* Address: 0x100202558 | FUN_100202558 */

ID FUN_100202558(undefined8 param_1,undefined8 param_2)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithAttributedString_((ID)self,param_1);
  objc_stub::appendAttributedString_(self_00,param_2);
  return self_00;
}



/* Address: 0x10020259c | FUN_10020259c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020259c(undefined8 param_1)

{
  undefined *puVar1;
  NSString *pNVar2;
  ID IVar3;
  ID self;
  
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::initWithString_((ID)puVar1,pNVar2);
  puVar1 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  self = objc_stub::initWithAttributedString_((ID)puVar1,param_1);
  objc_stub::appendAttributedString_(self,IVar3);
  return self;
}



/* Address: 0x10020262c | FUN_10020262c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10020262c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  NSString *pNVar2;
  ID IVar3;
  
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::initWithString_((ID)puVar1,pNVar2);
  puVar1 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  IVar3 = objc_stub::initWithAttributedString_((ID)puVar1,IVar3);
  objc_stub::appendAttributedString_(IVar3,param_3);
  return IVar3;
}



/* Address: 0x1002026bc | FUN_1002026bc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1002026bc(void)

{
  undefined *self;
  ID self_00;
  ID IVar1;
  NSDictionary *pNVar2;
  
  self = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithAttributedString_((ID)self);
  IVar1 = objc_stub::length(self_00);
  FUN_1001f3e68(0);
  FUN_100204020();
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  objc_stub::addAttributes_range_(self_00,pNVar2,0,IVar1);
  return self_00;
}



/* Address: 0x10020275c | FUN_10020275c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10020275c(long param_1)

{
  code *pcVar1;
  int iVar2;
  URL UVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  URL UVar9;
  char *pcVar10;
  ulong uVar11;
  undefined *puVar12;
  ID self;
  ID IVar13;
  NSDictionary *pNVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined **ppuVar18;
  long lVar19;
  long extraout_x8;
  undefined1 *puVar20;
  long extraout_x8_00;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 unaff_x20;
  long lVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  String SVar28;
  void *local_b0;
  String local_a0;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  puVar20 = &stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100202fc8();
  lVar24 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  plVar25 = (long *)(puVar20 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = (long)plVar25 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar22 - extraout_x12_00;
  pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1001f3760();
  lVar26 = *(long *)(param_1 + 0x10);
  if (lVar26 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff));
    lVar24 = *(long *)(lVar24 + 0x48);
    do {
      FUN_100203fa0(param_1,lVar27);
      FUN_100203fa0(lVar27,lVar22);
      lVar6 = lVar22;
      _swift_getEnumCaseMultiPayload(lVar22,lVar4);
      iVar2 = (int)lVar6;
      if (iVar2 < 3) {
        if (iVar2 == 0) {
          FUN_100203fe4(lVar22);
          puVar21 = (ulong *)PTR__NSFontAttributeName_100ea9048;
        }
        else {
          puVar21 = (ulong *)PTR__NSKernAttributeName_100ea90e8;
          if (iVar2 == 1) {
            FUN_100203fe4(lVar22);
            puVar21 = (ulong *)PTR__NSForegroundColorAttributeName_100ea90c8;
          }
        }
LAB_100202944:
        uVar7 = *puVar21;
      }
      else {
        puVar21 = (ulong *)PTR__NSBaselineOffsetAttributeName_100ea9010;
        if (iVar2 == 3) goto LAB_100202944;
        if (iVar2 == 4) {
          FUN_100203fe4(lVar22);
          puVar21 = (ulong *)PTR__NSParagraphStyleAttributeName_100ea90f8;
          goto LAB_100202944;
        }
        uVar7 = *(ulong *)PTR__NSLinkAttributeName_100ea90f0;
        FUN_100203fe4(lVar22);
      }
      FUN_100203fa0(lVar27,plVar25);
      plVar8 = plVar25;
      _swift_getEnumCaseMultiPayload(plVar25,lVar4);
      iVar2 = (int)plVar8;
      if (iVar2 < 3) {
        if (iVar2 == 0) {
          puVar16 = (undefined8 *)&DAT_100fb64e8;
          ppuVar18 = &PTR__OBJC_CLASS___NSFont_100f8d678;
        }
        else {
          if (iVar2 != 1) goto LAB_1002029bc;
          puVar16 = &DAT_100fb6470;
          ppuVar18 = &PTR__OBJC_CLASS___NSColor_100f8d680;
        }
LAB_1002029e0:
        puVar12 = (undefined *)0x0;
        FUN_10000ec2c(0,puVar16,ppuVar18);
        local_a0.str = (char *)*plVar25;
        SVar28.bridgeObject = local_b0;
        SVar28.str = local_a0.str;
        local_a0.bridgeObject = local_b0;
        local_88 = puVar12;
        if (puVar12 != (undefined *)0x0) goto LAB_100202ae0;
        FUN_100201adc(&local_a0);
        _swift_bridgeObjectRetain(pcVar5);
        thunk_FUN_1001f5454();
        _swift_bridgeObjectRelease(pcVar5);
        if (((ulong)puVar16 & 1) == 0) {
          FUN_100203fe4(lVar27);
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          pcVar10 = pcVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          local_a0.str = pcVar5;
          if ((int)pcVar10 == 0) {
            FUN_1001f5968();
          }
          pcVar5 = local_a0.str;
          FUN_100011080(*(long *)(local_a0.str + 0x38) + uVar7 * 0x20,&local_80);
          FUN_1001f5f1c(uVar7,pcVar5);
          FUN_100203fe4(lVar27);
        }
        FUN_100201adc(&local_80);
      }
      else {
        if (iVar2 == 3) {
LAB_1002029bc:
          SVar28.bridgeObject = local_b0;
          SVar28.str = (char *)*plVar25;
          local_88 = PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528;
        }
        else {
          if (iVar2 == 4) {
            puVar16 = (undefined8 *)&DAT_100fb64e0;
            ppuVar18 = &PTR__OBJC_CLASS___NSParagraphStyle_100f8da08;
            goto LAB_1002029e0;
          }
          UVar9.unknown = puVar20;
          (**(code **)(lVar19 + 0x20))(puVar20,plVar25,UVar3.unknown);
          SVar28 = Foundation::URL::get_absoluteString(UVar9);
          (**(code **)(lVar19 + 8))(puVar20,UVar3.unknown);
          local_88 = PTR___type_metadata_for_Swift_String_100eac208;
        }
LAB_100202ae0:
        local_b0 = SVar28.bridgeObject;
        uVar17 = 0;
        local_a0 = SVar28;
        FUN_100011080(&local_a0);
        pcVar10 = pcVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar15 = (uint)pcVar10;
        uVar11 = uVar7;
        local_a0.str = pcVar5;
        thunk_FUN_1001f5454();
        uVar23 = (ulong)~(uint)uVar17 & 1;
        if (SCARRY8(*(long *)(pcVar5 + 0x10),uVar23)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100202cb4);
          (*pcVar1)();
        }
        if (*(long *)(pcVar5 + 0x18) < (long)(*(long *)(pcVar5 + 0x10) + uVar23)) {
          FUN_10020355c();
          uVar11 = uVar7;
          thunk_FUN_1001f5454();
          pcVar5 = local_a0.str;
          if (((uint)uVar17 & 1) != (uVar15 & 1)) {
            FUN_1001f3e68(0);
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100202cc8);
            (*pcVar1)();
          }
        }
        else {
          pcVar5 = local_a0.str;
          if (((ulong)pcVar10 & 1) == 0) {
            FUN_1001f5968();
            pcVar5 = local_a0.str;
          }
        }
        local_a0.str = pcVar5;
        if ((uVar17 & 1) == 0) {
          *(ulong *)(pcVar5 + (uVar11 >> 6) * 8 + 0x40) =
               *(ulong *)(pcVar5 + (uVar11 >> 6) * 8 + 0x40) | 1L << (uVar11 & 0x3f);
          *(ulong *)(*(long *)(pcVar5 + 0x30) + uVar11 * 8) = uVar7;
          FUN_100011080(&local_80,*(long *)(pcVar5 + 0x38) + uVar11 * 0x20);
          FUN_100203fe4(lVar27);
          if (SCARRY8(*(long *)(pcVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100202cb8);
            (*pcVar1)();
          }
          *(long *)(pcVar5 + 0x10) = *(long *)(pcVar5 + 0x10) + 1;
        }
        else {
          lVar6 = *(long *)(pcVar5 + 0x38) + uVar11 * 0x20;
          FUN_100004594(lVar6);
          FUN_100011080(&local_80,lVar6);
          FUN_100203fe4(lVar27);
        }
      }
      param_1 = param_1 + lVar24;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  puVar12 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  self = objc_stub::initWithAttributedString_((ID)puVar12,unaff_x20);
  IVar13 = objc_stub::length(self);
  FUN_1001f3e68(0);
  FUN_100204020();
  pNVar14 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  objc_stub::addAttributes_range_(self,pNVar14,0,IVar13);
  _swift_bridgeObjectRelease(pcVar5);
  return self;
}



/* Address: 0x100202cc8 | FUN_100202cc8 */

void FUN_100202cc8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  FUN_100076508(param_4,*(long *)(param_5 + 0x38) + param_1 * 0x28);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100202d34);
  (*pcVar3)();
}



/* Address: 0x100202d34 | FUN_100202d34 */

void FUN_100202d34(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = param_4 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 8) = param_2;
  FUN_100011080(param_3,*(long *)(param_4 + 0x38) + param_1 * 0x20);
  if (!SCARRY8(*(long *)(param_4 + 0x10),1)) {
    *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100202d98);
  (*pcVar2)();
}



/* Address: 0x100202d98 | FUN_100202d98 */

void FUN_100202d98(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100202e7c);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_100203294(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100202e38);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1001f57c0();
    lVar4 = *unaff_x20;
    goto joined_r0x000100202e90;
  }
  lVar4 = *unaff_x20;
joined_r0x000100202e90:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x28;
    FUN_100004594(lVar4);
    FUN_100076508(param_1,lVar4);
    return;
  }
  FUN_100202cc8();
  _swift_bridgeObjectRetain(param_3);
  return;
}


