/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100326250 | FUN_100326250 */

void FUN_100326250(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_bridgeObjectRelease(param_3);
  *param_1 = 1;
  return;
}



/* Address: 0x10032627c | FUN_10032627c */

String FUN_10032627c(void)

{
  String SVar1;
  
  FUN_1003272f8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1003262a4 | FUN_1003262a4 */

String FUN_1003262a4(void)

{
  String SVar1;
  
  FUN_1003272f8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1003262cc | FUN_1003262cc */

String FUN_1003262cc(void)

{
  String SVar1;
  
  FUN_100327278();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1003262f4 | FUN_1003262f4 */

String FUN_1003262f4(void)

{
  String SVar1;
  
  FUN_100327278();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10032631c | FUN_10032631c */

String FUN_10032631c(void)

{
  String SVar1;
  
  FUN_100327338();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100326344 | FUN_100326344 */

String FUN_100326344(void)

{
  String SVar1;
  
  FUN_100327338();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10032636c | FUN_10032636c */

String FUN_10032636c(void)

{
  String SVar1;
  
  FUN_1003272b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100326394 | FUN_100326394 */

String FUN_100326394(void)

{
  String SVar1;
  
  FUN_1003272b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1003263bc | FUN_1003263bc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010032666c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003263bc(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedEncodingContainer<undefined> KVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
  long local_80;
  undefined *puStack_78;
  long local_70;
  undefined1 local_54;
  undefined1 local_53;
  byte local_52 [2];
  
  puVar1 = &DAT_100fbfe18;
  FUN_1000037f0(&DAT_100fbfe18,&DAT_100c41588);
  local_80 = *(long *)(puVar1 + -8);
  puStack_78 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fbfe20;
  local_88 = (long)&local_b0 - extraout_x8;
  FUN_1000037f0(&DAT_100fbfe20,&DAT_100c41590);
  local_98 = *(long *)(puVar1 + -8);
  puStack_90 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = ((long)&local_b0 - extraout_x8) - extraout_x8_00;
  puVar1 = &DAT_100fbfe28;
  local_a0 = lVar4;
  FUN_1000037f0(&DAT_100fbfe28,&DAT_100c41598);
  local_b0 = *(long *)(puVar1 + -8);
  puStack_a8 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar4 - extraout_x8_01;
  puVar1 = &DAT_100fbfe30;
  FUN_1000037f0(&DAT_100fbfe30,&DAT_100c415a0);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar4 - extraout_x8_02;
  puVar2 = &DAT_100fbfe38;
  FUN_1000037f0(&DAT_100fbfe38,&DAT_100c415a8);
  local_70 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100327238();
  KVar3 = Swift::Encoder::_container();
  if (param_2 < 2) {
    if (param_2 == 0) {
      local_54 = 0;
      FUN_100327338();
      Swift::KeyedEncodingContainer::_nestedContainer
                (lVar6,KVar3.unknown,&local_54,puVar2,&DAT_100ecaef0,KVar3.unknown);
      pcVar5 = *(code **)(lVar7 + 8);
      lVar4 = lVar6;
    }
    else {
      local_53 = 1;
      FUN_1003272f8();
      Swift::KeyedEncodingContainer::_nestedContainer
                (lVar4,KVar3.unknown,&local_53,puVar2,&DAT_100ecaf10,KVar3.unknown);
      pcVar5 = *(code **)(local_b0 + 8);
      puVar1 = puStack_a8;
    }
  }
  else {
    if (param_2 == 2) {
      local_52[0] = param_2;
      FUN_1003272b8();
      lVar4 = local_a0;
      Swift::KeyedEncodingContainer::_nestedContainer
                (local_a0,KVar3.unknown,local_52,puVar2,&DAT_100ecaf30,KVar3.unknown);
      puVar1 = puStack_90;
      lVar7 = local_98;
    }
    else {
      local_52[1] = 3;
      FUN_100327278();
      lVar4 = local_88;
      Swift::KeyedEncodingContainer::_nestedContainer
                (local_88,KVar3.unknown,local_52 + 1,puVar2,&DAT_100ecaf50,KVar3.unknown);
      puVar1 = puStack_78;
      lVar7 = local_80;
    }
    pcVar5 = *(code **)(lVar7 + 8);
  }
  (*pcVar5)(lVar4,puVar1);
  (**(code **)(local_70 + 8))(lVar6 - extraout_x8_03,puVar2);
  return;
}



/* Address: 0x1003266b8 | FUN_1003266b8 */

void FUN_1003266b8(void)

{
  FUN_1003274cc();
  return;
}



/* Address: 0x1003266cc | FUN_1003266cc */

void FUN_1003266cc(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_1003274cc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1003266f4 | FUN_1003266f4 */

void FUN_1003266f4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1003263bc(param_1,*unaff_x20);
  return;
}



/* Address: 0x10032670c | FUN_10032670c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10032670c(undefined8 param_1,ID param_2)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  ID IVar5;
  URL UVar6;
  URL UVar7;
  undefined *puVar8;
  _ArrayBuffer _Var9;
  PersonNameComponents PVar10;
  PersonNameComponents PVar11;
  undefined2 uVar12;
  PersonNameComponents PVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined1 uVar19;
  String SVar20;
  long alStack_c0 [4];
  undefined8 uStack_a0;
  ID local_98;
  undefined8 *local_90;
  ulong local_88;
  ulong local_80;
  _ArrayBuffer _Stack_78;
  long local_70;
  undefined *local_68;
  
  puVar18 = &DAT_100fbffd0;
  FUN_1000037f0(&DAT_100fbffd0,&DAT_100c41d88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar18 + -8) + 0x40));
  lVar4 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar18 = (undefined *)(lVar4 - extraout_x12);
  lVar4 = 0;
  FUN_100325588();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar16 = (undefined8 *)(puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  IVar5 = objc_stub::FUN_100c00800(param_2);
  if (IVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010032685c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 0x38))(param_1,1,1,lVar4);
    return;
  }
  UVar6.unknown = (undefined *)objc_stub::URL(param_2);
  iVar2 = *(int *)(lVar4 + 0x18);
  if (UVar6.unknown == (undefined *)0x0) {
    UVar7 = Foundation::URL::typeMetadataAccessor();
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    UVar7 = Foundation::URL::typeMetadataAccessor();
  }
  uVar12 = 0;
  (**(code **)(*(long *)(UVar7.unknown + -8) + 0x38))
            ((long)puVar16 + (long)iVar2,UVar6.unknown == (undefined *)0x0);
  puVar8 = (undefined *)objc_stub::FUN_100c07a80(param_2);
  _Var9.unknown = (undefined *)0x0;
  FUN_10032889c();
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)puVar8 >> 0x3e == 0) {
    uVar14 = *(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      _Var1.unknown = puVar8;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  local_98 = IVar5;
  local_90 = puVar16;
  if (uVar14 == 0) {
    _swift_bridgeObjectRelease(puVar8);
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10030771c(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100326be8);
      (*pcVar3)();
    }
    uVar15 = 0;
    local_88 = (ulong)puVar8 & 0xc000000000000001;
    alStack_c0[1] = lVar17;
    alStack_c0[2] = lVar4;
    alStack_c0[3] = param_2;
    uStack_a0 = param_1;
    local_80 = uVar14;
    _Stack_78.unknown = puVar8;
    do {
      puVar8 = local_68;
      if (local_88 == 0) {
        uVar14 = *(ulong *)(_Stack_78.unknown + uVar15 * 8 + 0x20);
      }
      else {
        uVar14 = uVar15;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Stack_78);
      }
      IVar5 = objc_stub::FUN_100c110e0(uVar14);
      PVar10.unknown = (undefined *)objc_stub::FUN_100c07080(IVar5);
      lVar4 = local_70;
      if (PVar10.unknown != (undefined *)0x0) {
        Foundation::PersonNameComponents::__unconditionallyBridgeFromObjectiveC(PVar10);
      }
      PVar11 = Foundation::PersonNameComponents::typeMetadataAccessor();
      lVar17 = *(long *)(PVar11.unknown + -8);
      (**(code **)(lVar17 + 0x38))(lVar4,PVar10.unknown == (undefined *)0x0,1,PVar11.unknown);
      FUN_10019ffdc(lVar4,puVar18,&DAT_100fbffd0,&DAT_100c41d88);
      PVar10.unknown = puVar18;
      PVar13 = PVar11;
      (**(code **)(lVar17 + 0x30))(puVar18,1);
      uVar12 = (undefined2)((ulong)PVar13.unknown >> 8);
      if ((int)PVar10.unknown == 1) {
        FUN_1003288e0(puVar18);
        SVar20 = (String)ZEXT816(0);
      }
      else {
        SVar20 = Foundation::PersonNameComponents::formatted(PVar10);
        (**(code **)(lVar17 + 8))(puVar18,PVar11.unknown);
      }
      IVar5 = objc_stub::FUN_100bfd220(uVar14);
      if (IVar5 == 2) {
        IVar5 = objc_stub::FUN_100c096c0(uVar14);
        if (IVar5 - 3 < 2) {
          IVar5 = objc_stub::FUN_100c07c80(uVar14);
          uVar19 = 1;
          if (IVar5 != 3) {
            uVar19 = 2;
          }
        }
        else if (IVar5 == 1) {
          uVar19 = 0;
        }
        else {
          uVar19 = 2;
        }
      }
      else {
        uVar19 = 3;
      }
      IVar5 = objc_stub::FUN_100bfd220(uVar14);
      uVar14 = *(ulong *)(puVar8 + 0x10);
      local_68 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar14) {
        uVar12 = 0;
        FUN_10030771c(1 < *(ulong *)(puVar8 + 0x18),uVar14 + 1);
      }
      puVar8 = local_68;
      uVar15 = uVar15 + 1;
      *(ulong *)(local_68 + 0x10) = uVar14 + 1;
      *(String *)(local_68 + uVar14 * 0x18 + 0x20) = SVar20;
      local_68[uVar14 * 0x18 + 0x30] = uVar19;
      local_68[uVar14 * 0x18 + 0x31] = IVar5 == 2;
    } while (local_80 != uVar15);
    _Var9.unknown = _Stack_78.unknown;
    _swift_bridgeObjectRelease(_Stack_78.unknown);
    param_1 = uStack_a0;
    lVar4 = alStack_c0[2];
    lVar17 = alStack_c0[1];
  }
  puVar16 = local_90;
  *local_90 = puVar8;
  IVar5 = local_98;
  FUN_100326c7c();
  puVar16[1] = IVar5;
  puVar16[2] = _Var9.unknown;
  *(char *)(puVar16 + 3) = (char)uVar12;
  *(byte *)((long)puVar16 + 0x19) = (byte)((ushort)uVar12 >> 8) & 1;
  FUN_10005425c(puVar16,param_1);
  (**(code **)(lVar17 + 0x38))(param_1,0,1,lVar4);
  return;
}



/* Address: 0x100326be8 | FUN_100326be8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined4 FUN_100326be8(ID param_1)

{
  ID IVar1;
  undefined4 uVar2;
  
  IVar1 = objc_stub::FUN_100bfd220(param_1);
  if (IVar1 == 2) {
    IVar1 = objc_stub::FUN_100c096c0(param_1);
    if (IVar1 - 3 < 2) {
      IVar1 = objc_stub::FUN_100c07c80(param_1);
      uVar2 = 1;
      if (IVar1 != 3) {
        uVar2 = 2;
      }
    }
    else if (IVar1 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 3;
  }
  return uVar2;
}



/* Address: 0x100326c7c | FUN_100326c7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_100326c7c(ID param_1)

{
  undefined *puVar1;
  ID self;
  PersonNameComponents PVar2;
  PersonNameComponents PVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  long lVar7;
  String SVar8;
  
  puVar1 = &DAT_100fbffd0;
  FUN_1000037f0(&DAT_100fbffd0,&DAT_100c41d88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar4 = puVar5 + -extraout_x12;
  self = objc_stub::FUN_100c110e0(param_1);
  PVar2.unknown = (undefined *)objc_stub::FUN_100c07080(self);
  if (PVar2.unknown == (undefined *)0x0) {
    PVar3 = Foundation::PersonNameComponents::typeMetadataAccessor();
  }
  else {
    Foundation::PersonNameComponents::__unconditionallyBridgeFromObjectiveC(PVar2);
    PVar3 = Foundation::PersonNameComponents::typeMetadataAccessor();
  }
  lVar7 = *(long *)(PVar3.unknown + -8);
  (**(code **)(lVar7 + 0x38))(puVar5,PVar2.unknown == (undefined *)0x0,1,PVar3.unknown);
  FUN_10019ffdc(puVar5,puVar4,&DAT_100fbffd0,&DAT_100c41d88);
  Foundation::PersonNameComponents::typeMetadataAccessor();
  PVar2.unknown = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,PVar3.unknown);
  if ((int)PVar2.unknown == 1) {
    FUN_1003288e0(puVar4);
    pcVar6 = (char *)0x0;
  }
  else {
    SVar8 = Foundation::PersonNameComponents::formatted(PVar2);
    pcVar6 = SVar8.str;
    (**(code **)(lVar7 + 8))(puVar4,PVar3.unknown);
  }
  FUN_100326be8();
  objc_stub::FUN_100bfd220(param_1);
  return pcVar6;
}



/* Address: 0x100326e2c | FUN_100326e2c */

undefined4 FUN_100326e2c(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x7069636974726170 || param_2 != -0x13ffffff8c8b919f) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7069636974726170,(_StringGuts)0xec00000073746e61,expecting);
    if (!bVar1) {
      if (((param_1 != -0x2fffffffffffffea) || (param_2 != -0x7ffffffeff25dd00)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000016,(_StringGuts)0x8000000100da2300,
                             expecting), !bVar1)) {
        if ((param_1 == 0x6c7275) && (param_2 == -0x1d00000000000000)) {
          _swift_bridgeObjectRelease(0xe300000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6c7275,(_StringGuts)0xe300000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100326f4c | FUN_100326f4c */

undefined4 FUN_100326f4c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x656d616e || param_2 != &DAT_e400000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x656c6f72) || (param_2 != &DAT_e400000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c6f72,(_StringGuts)0xe400000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x7470656363417369) && (param_2 == (undefined1 *)0xea00000000006465)) {
          _swift_bridgeObjectRelease(0xea00000000006465);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x7470656363417369,(_StringGuts)0xea00000000006465,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100327068 | FUN_100327068 */

/* WARNING: Removing unreachable block (ram,0x0001003271b8) */
/* WARNING: Removing unreachable block (ram,0x000100327208) */
/* WARNING: Removing unreachable block (ram,0x000100327130) */

undefined1  [16] FUN_100327068(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fbffc0;
  FUN_1000037f0(&DAT_100fbffc0,&DAT_100c41d80);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  FUN_100004640(param_1,puVar4);
  FUN_100325fb8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar2 = &local_51;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    local_53 = 1;
    puVar3 = puVar2;
    FUN_10032885c();
    Swift::KeyedDecodingContainer::_decode
              (&local_52,&DAT_100ecae40,&local_53,puVar1,&DAT_100ecae40,puVar3);
    local_54 = 2;
    Swift::KeyedDecodingContainer::_decode(&local_54,puVar1);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Address: 0x100327238 | FUN_100327238 */

void FUN_100327238(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41c5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41c5c,&DAT_100ecaed0);
  DAT_100fbfe40 = pTVar1;
  return;
}



/* Address: 0x100327278 | FUN_100327278 */

void FUN_100327278(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41c0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41c0c,&DAT_100ecaf50);
  DAT_100fbfe48 = pTVar1;
  return;
}



/* Address: 0x1003272b8 | FUN_1003272b8 */

void FUN_1003272b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41bbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41bbc,&DAT_100ecaf30);
  DAT_100fbfe50 = pTVar1;
  return;
}



/* Address: 0x1003272f8 | FUN_1003272f8 */

void FUN_1003272f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41b6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41b6c,&DAT_100ecaf10);
  DAT_100fbfe58 = pTVar1;
  return;
}



/* Address: 0x100327338 | FUN_100327338 */

void FUN_100327338(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41b1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41b1c,&DAT_100ecaef0);
  DAT_100fbfe60 = pTVar1;
  return;
}



/* Address: 0x100327378 | FUN_100327378 */

undefined4 FUN_100327378(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x72656e776f || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x72656e776f,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x726f74696465) && (param_2 == &DAT_e600000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x726f74696465,(_StringGuts)0xe600000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x726577656976) || (param_2 != &DAT_e600000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x726577656976,(_StringGuts)0xe600000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x64657469766e69) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x64657469766e69,(_StringGuts)0xe700000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1003274cc | FUN_1003274cc */

/* WARNING: Removing unreachable block (ram,0x000100327910) */
/* WARNING: Removing unreachable block (ram,0x0001003278c4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100327904 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_1003274cc(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  DecodingError DVar4;
  undefined *puVar5;
  KeyedDecodingContainer KVar6;
  KeyedDecodingContainer KVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long lStack_98;
  undefined *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 local_54;
  undefined1 local_53;
  byte local_52 [2];
  
  puVar5 = &DAT_100fbff90;
  FUN_1000037f0(&DAT_100fbff90,&DAT_100c41d50);
  local_b0 = *(long *)(puVar5 + -8);
  local_90 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_d0 + -extraout_x8;
  puVar5 = &DAT_100fbff98;
  local_78 = puVar10;
  FUN_1000037f0(&DAT_100fbff98,&DAT_100c41d58);
  lStack_98 = *(long *)(puVar5 + -8);
  local_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lStack_98 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar10 = puVar10 + -extraout_x8_00;
  puVar5 = &DAT_100fbffa0;
  local_80 = puVar10;
  FUN_1000037f0(&DAT_100fbffa0,&DAT_100c41d60);
  local_b8 = *(long *)(puVar5 + -8);
  local_a8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fbffa8;
  local_88 = puVar10 + -extraout_x8_01;
  FUN_1000037f0(&DAT_100fbffa8,&DAT_100c41d68);
  lVar13 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = puVar10 + -extraout_x8_01 + -extraout_x8_02;
  KVar6.unknown = &DAT_100fbffb0;
  FUN_1000037f0(&DAT_100fbffb0,&DAT_100c41d70);
  lVar15 = *(long *)(KVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar14 - extraout_x8_03;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100327238();
  Swift::Decoder::_container();
  puVar8 = local_78;
  puVar3 = local_80;
  puVar10 = local_88;
  if (unaff_x21 == 0) {
    KVar7.unknown = KVar6.unknown;
    local_c8 = lVar13;
    puStack_c0 = puVar5;
    Swift::KeyedDecodingContainer::get_allKeys(KVar6);
    if ((*(long *)(KVar7.unknown + 0x10) != 0) &&
       (bVar1 = KVar7.unknown[0x20], *(long *)(KVar7.unknown + 0x10) == 1 && bVar1 != 4)) {
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          local_54 = 0;
          puVar5 = KVar7.unknown;
          FUN_100327338();
          Swift::KeyedDecodingContainer::_nestedContainer
                    (puVar14,puVar5,&local_54,KVar6.unknown,&DAT_100ecaef0,puVar5);
          pcVar11 = *(code **)(local_c8 + 8);
          puVar10 = puVar14;
          puVar5 = puStack_c0;
        }
        else {
          local_53 = 1;
          puVar5 = KVar7.unknown;
          FUN_1003272f8();
          Swift::KeyedDecodingContainer::_nestedContainer
                    (puVar10,puVar5,&local_53,KVar6.unknown,&DAT_100ecaf10,puVar5);
          pcVar11 = *(code **)(local_b8 + 8);
          puVar5 = local_a8;
        }
        (*pcVar11)(puVar10,puVar5);
        (**(code **)(lVar15 + 8))(lVar12,KVar6.unknown);
        puVar8 = puVar10;
      }
      else {
        if (bVar1 == 2) {
          puVar5 = KVar7.unknown;
          local_52[0] = bVar1;
          FUN_1003272b8();
          Swift::KeyedDecodingContainer::_nestedContainer
                    (puVar3,puVar5,local_52,KVar6.unknown,&DAT_100ecaf30,puVar5);
          pcVar11 = *(code **)(lStack_98 + 8);
          puVar8 = puVar3;
          puVar5 = local_a0;
        }
        else {
          local_52[1] = 3;
          puVar5 = KVar7.unknown;
          FUN_100327278();
          Swift::KeyedDecodingContainer::_nestedContainer
                    (puVar8,puVar5,local_52 + 1,KVar6.unknown,&DAT_100ecaf50,puVar5);
          pcVar11 = *(code **)(local_b0 + 8);
          puVar5 = local_90;
        }
        (*pcVar11)(puVar8,puVar5);
        (**(code **)(lVar15 + 8))(lVar12,KVar6.unknown);
      }
      _swift_unknownObjectRelease(KVar7.unknown);
      FUN_100004594(param_1);
      return (int)puVar8;
    }
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    lVar13 = CONCAT71((int7)((ulong)KVar7.unknown >> 8),DVar4.value);
    puVar9 = (undefined8 *)
             PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar13,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar5 = &DAT_100fbffb8;
    FUN_1000037f0(&DAT_100fbffb8,&DAT_100c41d78);
    iVar2 = *(int *)(puVar5 + 0x30);
    *puVar9 = &DAT_100ecae40;
    Swift::KeyedDecodingContainer::_get_codingPath(KVar6);
    Swift::DecodingError::Context::_init
              ((long)puVar9 + (long)iVar2,puVar5,0xd00000000000002b,0x8000000100da2320,0);
    (**(code **)(*(long *)(lVar13 + -8) + 0x68))
              (puVar9,*(undefined4 *)
                       PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
               ,lVar13);
    _swift_willThrow();
    (**(code **)(lVar15 + 8))(lVar12,KVar6.unknown);
    _swift_unknownObjectRelease(KVar7.unknown);
  }
  FUN_100004594(param_1);
  return 0;
}



/* Address: 0x100327998 | thunk_FUN_10032799c */

void thunk_FUN_10032799c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41650;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41650,&DAT_100ecae40);
  DAT_100fbfe68 = pTVar1;
  return;
}



/* Address: 0x10032799c | FUN_10032799c */

void FUN_10032799c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfe68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41650;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41650,&DAT_100ecae40);
  DAT_100fbfe68 = pTVar1;
  return;
}



/* Address: 0x1003279dc | FUN_1003279dc */

long * FUN_1003279dc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  URL UVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar6 = *param_2;
  *param_1 = lVar6;
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar1 = param_2[2];
    param_1[1] = param_2[1];
    param_1[2] = lVar1;
    *(short *)(param_1 + 3) = (short)param_2[3];
    lVar7 = (long)*(int *)(param_3 + 0x18);
    UVar3 = Foundation::URL::typeMetadataAccessor();
    lVar8 = *(long *)(UVar3.unknown + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar1);
    lVar6 = (long)param_2 + lVar7;
    (*pcVar9)(lVar6,1,UVar3.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar3.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,UVar3.unknown);
    }
    else {
      puVar4 = &DAT_100fc1a40;
      FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
  }
  else {
    uVar5 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain(lVar6);
  }
  return param_1;
}



/* Address: 0x100327aec | FUN_100327aec */

void FUN_100327aec(undefined8 *param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  iVar1 = *(int *)(param_2 + 0x18);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar2.unknown + -8);
  lVar3 = (long)param_1 + (long)iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,UVar2.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100327b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,UVar2.unknown);
  return;
}



/* Address: 0x100327b6c | FUN_100327b6c */

undefined8 * FUN_100327b6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  URL UVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  uVar5 = param_2[2];
  param_1[2] = uVar5;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar5);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,UVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,UVar2.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,UVar2.unknown);
  }
  else {
    puVar4 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x100327c54 | FUN_100327c54 */

undefined8 * FUN_100327c54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  URL UVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  param_1[1] = param_2[1];
  uVar5 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar2 = (long)param_1 + lVar6;
  (*pcVar8)(lVar2,1,UVar1.unknown);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,UVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar6,(long)param_2 + lVar6,UVar1.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,UVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,UVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,UVar1.unknown);
    return param_1;
  }
  puVar4 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x100327da4 | FUN_100327da4 */

undefined8 * FUN_100327da4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  URL UVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar6;
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  lVar4 = (long)*(int *)(param_3 + 0x18);
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,UVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,UVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,UVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x100327e74 | FUN_100327e74 */

undefined8 * FUN_100327e74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  URL UVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar9)(lVar4,1,UVar3.unknown);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar9)(lVar5,1,UVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar3.unknown);
      return param_1;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,UVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,UVar3.unknown);
    return param_1;
  }
  puVar6 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}



/* Address: 0x100327fac | FUN_100327fac */

void FUN_100327fac(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100327fb8 | FUN_100327fb8 */

ulong FUN_100327fb8(ulong *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  uVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100328040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x100328044 | FUN_100328044 */

void FUN_100328044(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100328050 | FUN_100328050 */

void FUN_100328050(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
                    /* WARNING: Could not recover jumptable at 0x0001003280cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}



/* Address: 0x1003280d0 | FUN_1003280d0 */

void FUN_1003280d0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_30 = &DAT_100c41718;
  lVar1 = 0x13f;
  FUN_100328150();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100328150 | FUN_100328150 */

void FUN_100328150(void)

{
  Optional OVar1;
  URL UVar2;
  undefined7 extraout_var;
  
  if (DAT_100fbf598 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_100fbf598 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1003281a4 | thunk_FUN_1003281a8 */

undefined8 * thunk_FUN_1003281a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1003281a8 | FUN_1003281a8 */

undefined8 * FUN_1003281a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1003281dc | FUN_1003281dc */

undefined8 * FUN_1003281dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Address: 0x100328238 | FUN_100328238 */

void FUN_100328238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10032824c | FUN_10032824c */

undefined8 * FUN_10032824c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  return param_1;
}



/* Address: 0x100328290 | FUN_100328290 */

int FUN_100328290(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003282ec | FUN_1003282ec */

void FUN_1003282ec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x12) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x12) = 1;
    }
  }
  return;
}



/* Address: 0x100328340 | FUN_100328340 */

undefined1  [16] FUN_100328340(void)

{
  return ZEXT816(0x100ecada0);
}



/* Address: 0x100328350 | FUN_100328350 */

undefined1  [16] FUN_100328350(void)

{
  return ZEXT816(0x100ecae40);
}



/* Address: 0x100328360 | thunk_FUN_1000d52ec */

void thunk_FUN_1000d52ec(void)

{
  FUN_1000d52ec();
  return;
}



/* Address: 0x100328364 | thunk_FUN_1000d537c */

void thunk_FUN_1000d537c(void)

{
  FUN_1000d537c();
  return;
}



/* Address: 0x100328368 | FUN_100328368 */

undefined1  [16] FUN_100328368(void)

{
  return ZEXT816(0x100ecaed0);
}



/* Address: 0x100328378 | FUN_100328378 */

undefined1  [16] FUN_100328378(void)

{
  return ZEXT816(0x100ecaef0);
}



/* Address: 0x100328388 | FUN_100328388 */

undefined1  [16] FUN_100328388(void)

{
  return ZEXT816(0x100ecaf10);
}



/* Address: 0x100328398 | FUN_100328398 */

undefined1  [16] FUN_100328398(void)

{
  return ZEXT816(0x100ecaf30);
}



/* Address: 0x1003283a8 | FUN_1003283a8 */

undefined1  [16] FUN_1003283a8(void)

{
  return ZEXT816(0x100ecaf50);
}



/* Address: 0x1003283b8 | FUN_1003283b8 */

undefined1  [16] FUN_1003283b8(void)

{
  return ZEXT816(0x100ecafe0);
}



/* Address: 0x1003283c8 | FUN_1003283c8 */

undefined1  [16] FUN_1003283c8(void)

{
  return ZEXT816(0x100ecb070);
}



/* Address: 0x1003283d8 | thunk_FUN_1003283dc */

void thunk_FUN_1003283dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbff08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41844;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41844,&DAT_100ecb070);
  DAT_100fbff08 = pTVar1;
  return;
}



/* Address: 0x1003283dc | FUN_1003283dc */

void FUN_1003283dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbff08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41844;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41844,&DAT_100ecb070);
  DAT_100fbff08 = pTVar1;
  return;
}



/* Address: 0x10032841c | thunk_FUN_100328420 */

void thunk_FUN_100328420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbff10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c418fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c418fc,&DAT_100ecafe0);
  DAT_100fbff10 = pTVar1;
  return;
}



/* Address: 0x100328420 | FUN_100328420 */

void FUN_100328420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbff10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c418fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c418fc,&DAT_100ecafe0);
  DAT_100fbff10 = pTVar1;
  return;
}



/* Address: 0x100328460 | thunk_FUN_100328464 */

void thunk_FUN_100328464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbff18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41af4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41af4,&DAT_100ecaed0);
  DAT_100fbff18 = pTVar1;
  return;
}



/* Address: 0x100328464 | FUN_100328464 */

void FUN_100328464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbff18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41af4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41af4,&DAT_100ecaed0);
  DAT_100fbff18 = pTVar1;
  return;
}


