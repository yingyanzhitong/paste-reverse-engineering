/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10022f888 | FUN_10022f888 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010022fd30) */
/* WARNING: Removing unreachable block (ram,0x00010022fd34) */

undefined1  [16]
FUN_10022f888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7)

{
  ID IVar1;
  ulong uVar2;
  ID IVar3;
  long lVar4;
  undefined1 auVar5 [16];
  ID IVar6;
  undefined8 uVar7;
  code *pcVar8;
  MainActor *this;
  MainActor *pMVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  _StringGuts _Var18;
  undefined *puVar19;
  ID self;
  undefined *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  ID *pIVar24;
  undefined8 extraout_d0;
  String SVar25;
  String separator;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined1 local_a8;
  undefined7 uStack_a7;
  ID local_a0;
  ID local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  String separator_00;
  
  local_a8 = (undefined1)param_6;
  uStack_a7 = (undefined7)((ulong)param_6 >> 8);
  _swift_bridgeObjectRetain(param_6);
  FUN_10022e9f8(&local_a8);
  lVar4 = CONCAT71(uStack_a7,local_a8);
  uVar23 = *(ulong *)(lVar4 + 0x10);
  if (uVar23 == 0) {
    _swift_release(lVar4);
    puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10022fee4(0,uVar23,0);
    puVar20 = local_70;
    this = Swift::MainActor::typeMetadataAccessor();
    uVar21 = 0;
    pIVar24 = (ID *)(lVar4 + 0x38);
    pMVar9 = this;
    do {
      if (*(ulong *)(lVar4 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10022fd2c);
        (*pcVar8)();
      }
      IVar6 = pIVar24[-3];
      IVar1 = pIVar24[-2];
      IVar3 = pIVar24[-1];
      self = *pIVar24;
      pMVar9 = Swift::MainActor::get_shared(this,pMVar9);
      pMVar10 = pMVar9;
      FUN_1001f7290();
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa7,UVar11.unknown,
                   pMVar10);
      }
      puVar19 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      puVar16 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      local_80 = 0;
      uStack_78 = 0xe000000000000000;
      pcVar14 = "";
      puVar17 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      local_a8 = (char)IVar6;
      local_a0 = IVar1;
      local_98 = IVar3;
      Swift::__print_unlocked
                (&local_a8,&local_80,&DAT_100ebe530,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar25.bridgeObject = (void *)0xe100000000000000;
      SVar25.str = (char *)0x20;
      SVar28.bridgeObject = puVar17;
      SVar28.str = pcVar14;
      Swift::String::append(SVar25,SVar28);
      objc_stub::description(self);
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar29.bridgeObject = puVar17;
      SVar29.str = pcVar14;
      Swift::String::append(SVar25,SVar29);
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      SVar26.bridgeObject = (void *)0xe100000000000000;
      SVar26.str = (char *)0x20;
      SVar30.bridgeObject = puVar17;
      SVar30.str = pcVar14;
      Swift::String::append(SVar26,SVar30);
      objc_stub::frame(self);
      local_a8 = (undefined1)extraout_d0;
      uStack_a7 = (undefined7)((ulong)extraout_d0 >> 8);
      uVar13 = 0;
      local_a0 = param_2;
      local_98 = param_3;
      uStack_90 = param_4;
      FUN_1001f3e20(0);
      Swift::__print_unlocked(&local_a8,&local_80,uVar13,puVar16,puVar19);
      _swift_release();
      uVar7 = uStack_78;
      uVar13 = local_80;
      uVar2 = *(ulong *)(puVar20 + 0x10);
      local_70 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
        pMVar9 = (MainActor *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
        FUN_10022fee4(pMVar9,uVar2 + 1,1);
      }
      puVar20 = local_70;
      uVar21 = uVar21 + 1;
      *(ulong *)(local_70 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x20) = uVar13;
      *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x28) = uVar7;
      pIVar24 = pIVar24 + 4;
    } while (uVar23 != uVar21);
    _swift_release(lVar4);
  }
  local_a8 = SUB81(puVar20,0);
  uStack_a7 = (undefined7)((ulong)puVar20 >> 8);
  pcVar14 = &DAT_100fb7770;
  FUN_1000037f0(&DAT_100fb7770,&DAT_100c36cf0);
  pcVar15 = pcVar14;
  FUN_1002331fc();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0xa;
  SVar25 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(puVar20);
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar19 = *(undefined **)(param_7 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar19 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(param_7);
    puVar16 = puVar19;
    FUN_1002307d8(puVar19,0);
    puVar17 = &local_a8;
    FUN_1002326f0(puVar17,puVar16 + 0x20,puVar19,param_7);
    FUN_10000c650(CONCAT71(uStack_a7,local_a8),local_a0,local_98,uStack_90,local_88);
    if (puVar17 != puVar19) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10022fb78);
      (*pcVar8)();
    }
  }
  local_a8 = SUB81(puVar16,0);
  uStack_a7 = (undefined7)((ulong)puVar16 >> 8);
  FUN_10022e8ec(&local_a8);
  lVar4 = CONCAT71(uStack_a7,local_a8);
  uVar23 = *(ulong *)(lVar4 + 0x10);
  if (uVar23 == 0) {
    _swift_release();
  }
  else {
    local_70 = puVar20;
    FUN_10022fee4(0,uVar23,0);
    uVar21 = 0;
    puVar22 = (undefined8 *)(lVar4 + 0x28);
    do {
      puVar20 = local_70;
      if (*(ulong *)(lVar4 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10022fd30);
        (*pcVar8)();
      }
      local_80 = puVar22[-1];
      uStack_78 = *puVar22;
      FUN_10022fd3c(&local_a8,&local_80);
      IVar1 = local_a0;
      uVar13 = CONCAT71(uStack_a7,local_a8);
      uVar2 = *(ulong *)(puVar20 + 0x10);
      local_70 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
        FUN_10022fee4(1 < *(ulong *)(puVar20 + 0x18),uVar2 + 1,1);
      }
      puVar20 = local_70;
      uVar21 = uVar21 + 1;
      *(ulong *)(local_70 + 0x10) = uVar2 + 1;
      *(undefined8 *)(local_70 + uVar2 * 0x10 + 0x20) = uVar13;
      *(ID *)(local_70 + uVar2 * 0x10 + 0x28) = IVar1;
      puVar22 = puVar22 + 2;
    } while (uVar23 != uVar21);
    _swift_release(lVar4);
  }
  local_a8 = SUB81(puVar20,0);
  uStack_a7 = (undefined7)((ulong)puVar20 >> 8);
  separator_00.bridgeObject = (void *)0xe100000000000000;
  separator_00.str = (char *)0xa;
  SVar26 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
  _Var18.unknown = SVar26.bridgeObject;
  _swift_bridgeObjectRelease(puVar20);
  local_a8 = 0;
  uStack_a7 = 0;
  local_a0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x30,_Var18);
  _swift_bridgeObjectRelease(local_a0);
  local_a8 = 0x12;
  uStack_a7 = 0xd0000000000000;
  local_a0 = 0x8000000100d9ea80;
  SVar31.bridgeObject = pcVar15;
  SVar31.str = pcVar14;
  Swift::String::append(SVar25,SVar31);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar27.bridgeObject = (void *)0x8000000100d9eaa0;
  SVar27.str = (char *)0xd00000000000001a;
  SVar32.bridgeObject = pcVar15;
  SVar32.str = pcVar14;
  Swift::String::append(SVar27,SVar32);
  SVar33.bridgeObject = pcVar15;
  SVar33.str = pcVar14;
  Swift::String::append(SVar26,SVar33);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  auVar5._1_7_ = uStack_a7;
  auVar5[0] = local_a8;
  auVar5._8_8_ = local_a0;
  return auVar5;
}



/* Address: 0x10022fd3c | FUN_10022fd3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022fd3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,char *param_8,
                  void *param_9)

{
  ID self;
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar5 = *param_6;
  self = param_6[1];
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    param_8 = &DAT_00000001;
    param_9 = (void *)0xac;
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xac,UVar3.unknown,pMVar1
              );
  }
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  SVar6.bridgeObject = &DAT_e600000000000000;
  SVar6.str = (char *)0x207865646e69;
  SVar9.bridgeObject = param_9;
  SVar9.str = param_8;
  Swift::String::append(SVar6,SVar9);
  local_80 = uVar5;
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar10.bridgeObject = param_9;
  SVar10.str = param_8;
  Swift::String::append(SVar6,SVar10);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x20;
  SVar11.bridgeObject = param_9;
  SVar11.str = param_8;
  Swift::String::append(SVar7,SVar11);
  objc_stub::description(self);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar12.bridgeObject = param_9;
  SVar12.str = param_8;
  Swift::String::append(SVar6,SVar12);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x20;
  SVar13.bridgeObject = param_9;
  SVar13.str = param_8;
  Swift::String::append(SVar8,SVar13);
  objc_stub::frame(self);
  uVar5 = 0;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_1001f3e20(0);
  Swift::__print_unlocked
            (&local_80,&local_60,uVar5,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  _swift_release(pMVar2);
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}



/* Address: 0x10022fed8 | FUN_10022fed8 */

void FUN_10022fed8(void)

{
  long unaff_x20;
  
  FUN_10022f888(0,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10022fee4 | FUN_10022fee4 */

void FUN_10022fee4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10022ff8c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10022ff00 | FUN_10022ff00 */

void FUN_10022ff00(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100230094();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10022ff1c | FUN_10022ff1c */

void FUN_10022ff1c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002301ac();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10022ff38 | FUN_10022ff38 */

void FUN_10022ff38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002302ac();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10022ff54 | FUN_10022ff54 */

void FUN_10022ff54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002303b4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10022ff70 | FUN_10022ff70 */

void FUN_10022ff70(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100230614();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10022ff8c | FUN_10022ff8c */

undefined * FUN_10022ff8c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100230094);
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
    puVar3 = &DAT_100fb7818;
    FUN_1000037f0(&DAT_100fb7818,&DAT_100c36da8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100230094 | FUN_100230094 */

undefined * FUN_100230094(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002301ac);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002301ac | FUN_1002301ac */

undefined * FUN_1002301ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002302ac);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002302ac | FUN_1002302ac */

undefined * FUN_1002302ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002303b4);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002303b4 | FUN_1002303b4 */

undefined * FUN_1002303b4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002304e4);
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
    puVar3 = &DAT_100fb7820;
    FUN_1000037f0(&DAT_100fb7820,&DAT_100c36dc0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fb7828;
    FUN_1000037f0(&DAT_100fb7828,&DAT_100c36dc8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1002304e4 | FUN_1002304e4 */

undefined * FUN_1002304e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100230614);
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
    puVar3 = &DAT_100fb7810;
    FUN_1000037f0(&DAT_100fb7810,&DAT_100c36da0);
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
    puVar5 = &DAT_100fb7800;
    FUN_1000037f0(&DAT_100fb7800,&DAT_100c36d90);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100230614 | FUN_100230614 */

undefined * FUN_100230614(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100230758);
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
    puVar3 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fb6f00;
    FUN_1000037f0(&DAT_100fb6f00,&DAT_100c36de0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100230758 | FUN_100230758 */

undefined * FUN_100230758(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fb6488;
    FUN_1000037f0(&DAT_100fb6488,&DAT_100c35590);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  return puVar2;
}



/* Address: 0x1002307d8 | FUN_1002307d8 */

undefined * FUN_1002307d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fb7810;
    FUN_1000037f0(&DAT_100fb7810,&DAT_100c36da0);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x100230858 | FUN_100230858 */

void FUN_100230858(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100230944);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100200b7c();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100230948);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10023094c);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) * 0x18 + 0x20),(void *)(param_1 + 0x20),
            uVar5 * 0x18);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100230950);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100230950 | FUN_100230950 */

void FUN_100230950(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100230a34);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100200d9c();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100230a38);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100230a3c);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) * 8 + 0x20),(void *)(param_1 + 0x20),uVar5 << 3
           );
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100230a40);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x100230a40 | FUN_100230a40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100230a40(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  MainActor *pMVar13;
  MainActor *pMVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  long unaff_x21;
  long lVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  long *plVar31;
  undefined8 uVar32;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar18 = param_3[1];
  if (0 < lVar18) {
    lVar19 = 0;
    do {
      lVar28 = lVar19 + 1;
      if (lVar28 < lVar18) {
        lVar25 = *param_3;
        lVar20 = *(long *)(lVar25 + lVar28 * 0x10);
        plVar30 = (long *)(lVar25 + lVar19 * 0x10);
        lVar27 = *plVar30;
        pMVar13 = (MainActor *)plVar30[1];
        pMVar9 = Swift::MainActor::typeMetadataAccessor();
        pMVar10 = Swift::MainActor::get_shared(pMVar9,pMVar13);
        pMVar13 = pMVar10;
        FUN_1001f7290();
        pMVar14 = pMVar13;
        UVar11 = Swift::Actor::get_unownedExecutor();
        UVar12 = UVar11;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar12.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xab,UVar11.unknown
                     ,pMVar14);
        }
        _swift_release(pMVar10);
        lVar23 = lVar19 * 0x10;
        lVar25 = lVar25 + lVar23 + 0x28;
        lVar4 = lVar19 + 2;
        lVar6 = 0;
        lVar21 = lVar23;
        do {
          lVar29 = lVar6;
          lVar28 = lVar4;
          lVar21 = lVar21 + 0x10;
          if (lVar18 <= lVar28) break;
          lVar1 = *(long *)(lVar25 + -8);
          lVar2 = *(long *)(lVar25 + -0x18);
          pMVar10 = Swift::MainActor::get_shared(pMVar9,*(MainActor **)(lVar25 + -0x10));
          pMVar14 = pMVar13;
          UVar11 = Swift::Actor::get_unownedExecutor();
          UVar12 = UVar11;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar12.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xab,
                       UVar11.unknown,pMVar14);
          }
          _swift_release(pMVar10);
          lVar25 = lVar25 + 0x10;
          lVar4 = lVar28 + 1;
          lVar6 = lVar29 + 1;
        } while (lVar20 < lVar27 != lVar2 <= lVar1);
        if (lVar20 < lVar27) {
          if (lVar28 < lVar19) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100231018);
            (*pcVar7)();
          }
          if (lVar19 < lVar28) {
            lVar18 = 0;
            lVar20 = *param_3;
            puVar22 = (undefined8 *)(lVar20 + lVar21);
            puVar24 = (undefined8 *)(lVar20 + lVar23);
            do {
              if (lVar19 + lVar18 != lVar19 + lVar29 + 1) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100231038);
                  (*pcVar7)();
                }
                uVar3 = *puVar24;
                uVar5 = puVar24[1];
                uVar32 = *puVar22;
                puVar24[1] = puVar22[1];
                *puVar24 = uVar32;
                *puVar22 = uVar3;
                puVar22[1] = uVar5;
              }
              lVar29 = lVar29 + -1;
              lVar18 = lVar18 + 1;
              puVar22 = puVar22 + -2;
              puVar24 = puVar24 + 2;
            } while (lVar18 + lVar19 < lVar19 + lVar29 + 2);
          }
        }
      }
      lVar18 = param_3[1];
      lVar20 = lVar28;
      if (lVar28 < lVar18) {
        if (SBORROW8(lVar28,lVar19)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100231014);
          (*pcVar7)();
        }
        if (lVar28 - lVar19 < param_4) {
          if (SCARRY8(lVar19,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10023101c);
            (*pcVar7)();
          }
          lVar27 = lVar19 + param_4;
          if (lVar18 <= lVar19 + param_4) {
            lVar27 = lVar18;
          }
          if (lVar27 < lVar19) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100231020);
            (*pcVar7)();
          }
          if (lVar28 != lVar27) {
            lVar18 = *param_3;
            pMVar13 = Swift::MainActor::typeMetadataAccessor();
            plVar30 = (long *)(lVar18 + lVar28 * 0x10);
            lVar25 = lVar19 - lVar28;
            do {
              lVar21 = *(long *)(lVar18 + lVar28 * 0x10);
              lVar20 = lVar25;
              plVar31 = plVar30;
              do {
                lVar4 = plVar31[-2];
                pMVar9 = Swift::MainActor::get_shared(pMVar13,(MainActor *)plVar31[-1]);
                pMVar14 = pMVar9;
                FUN_1001f7290();
                UVar11 = Swift::Actor::get_unownedExecutor();
                UVar12 = UVar11;
                _swift_task_isCurrentExecutor();
                if (((ulong)UVar12.unknown & 1) == 0) {
                  _swift_task_reportUnexpectedExecutor
                            ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xab,
                             UVar11.unknown,pMVar14);
                }
                _swift_release(pMVar9);
                if (lVar4 <= lVar21) break;
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100231024);
                  (*pcVar7)();
                }
                lVar21 = *plVar31;
                lVar4 = plVar31[1];
                plVar31[1] = plVar31[-1];
                *plVar31 = plVar31[-2];
                plVar31[-1] = lVar4;
                plVar31 = plVar31 + -2;
                *plVar31 = lVar21;
                bVar8 = lVar20 != -1;
                lVar20 = lVar20 + 1;
              } while (bVar8);
              lVar28 = lVar28 + 1;
              plVar30 = plVar30 + 2;
              lVar25 = lVar25 + -1;
              lVar20 = lVar27;
            } while (lVar28 != lVar27);
          }
        }
      }
      puVar17 = local_58;
      if (lVar20 < lVar19) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100231008);
        (*pcVar7)();
      }
      puVar15 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar17;
      if (((ulong)puVar15 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_100231e2c(0,*(long *)(puVar17 + 0x10) + 1,1,puVar17);
      }
      uVar26 = *(ulong *)(puVar16 + 0x10);
      puVar17 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar26) {
        puVar17 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_100231e2c(puVar17,uVar26 + 1,1,puVar16);
      }
      *(ulong *)(puVar17 + 0x10) = uVar26 + 1;
      *(long *)(puVar17 + uVar26 * 0x10 + 0x20) = lVar19;
      *(long *)(puVar17 + uVar26 * 0x10 + 0x28) = lVar20;
      local_58 = puVar17;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10023103c);
        (*pcVar7)();
      }
      FUN_10023195c(&local_58,*param_1,param_3);
      puVar17 = local_58;
      if (unaff_x21 != 0) goto LAB_100230fd8;
      lVar18 = param_3[1];
      lVar19 = lVar20;
    } while (lVar20 < lVar18);
  }
  puVar17 = local_58;
  lVar18 = *param_1;
  if (lVar18 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100231044);
    (*pcVar7)();
  }
  puVar15 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar15 & 1) == 0) {
    FUN_1002326dc();
  }
  uVar26 = *(ulong *)(puVar17 + 0x10);
  while( true ) {
    local_58 = puVar17;
    if (uVar26 < 2) {
      _swift_bridgeObjectRelease(puVar17);
      return;
    }
    lVar19 = *param_3;
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100231040);
      (*pcVar7)();
    }
    lVar27 = uVar26 - 1;
    lVar20 = *(long *)(puVar17 + uVar26 * 0x10);
    lVar28 = *(long *)(puVar17 + lVar27 * 0x10 + 0x28);
    FUN_100231f2c(lVar19 + lVar20 * 0x10,lVar19 + *(long *)(puVar17 + lVar27 * 0x10 + 0x20) * 0x10,
                  lVar19 + lVar28 * 0x10,lVar18);
    if (unaff_x21 != 0) break;
    if (lVar28 < lVar20) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10023100c);
      (*pcVar7)();
    }
    puVar15 = puVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar15 & 1) == 0) {
      FUN_1002326dc();
    }
    if (*(ulong *)(puVar17 + 0x10) <= uVar26 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100231010);
      (*pcVar7)();
    }
    *(long *)(puVar17 + uVar26 * 0x10) = lVar20;
    *(long *)((long)(puVar17 + uVar26 * 0x10) + 8) = lVar28;
    local_58 = puVar17;
    FUN_100232654(lVar27);
    uVar26 = *(ulong *)(local_58 + 0x10);
    puVar17 = local_58;
  }
LAB_100230fd8:
  _swift_bridgeObjectRelease(puVar17);
  return;
}



/* Address: 0x100231044 | FUN_100231044 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100231044(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  MainActor *pMVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long unaff_x21;
  MainActor *pMVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar13 = param_3[1];
  if (0 < lVar13) {
    lVar16 = 0;
    do {
      lVar29 = lVar16 + 1;
      if (lVar29 < lVar13) {
        lVar23 = *param_3;
        lVar20 = *(long *)(lVar23 + lVar29 * 0x20 + 8);
        lVar26 = lVar23 + lVar16 * 0x20;
        lVar17 = *(long *)(lVar26 + 8);
        pMVar25 = *(MainActor **)(lVar26 + 0x18);
        pMVar5 = Swift::MainActor::typeMetadataAccessor();
        pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar25);
        pMVar25 = pMVar6;
        FUN_1001f7290();
        pMVar9 = pMVar25;
        UVar7 = Swift::Actor::get_unownedExecutor();
        UVar8 = UVar7;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar8.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa6,UVar7.unknown,
                     pMVar9);
        }
        _swift_release(pMVar6);
        lVar21 = lVar16 * 0x20;
        lVar26 = lVar23 + lVar21 + 0x58;
        lVar23 = lVar16 + 2;
        lVar30 = 0;
        lVar2 = lVar29;
        do {
          lVar27 = lVar2;
          lVar18 = lVar30;
          lVar29 = lVar23;
          if (lVar13 <= lVar29) break;
          lVar14 = *(long *)(lVar26 + -0x10);
          lVar15 = *(long *)(lVar26 + -0x30);
          pMVar6 = Swift::MainActor::get_shared(pMVar5,*(MainActor **)(lVar26 + -0x20));
          pMVar9 = pMVar25;
          UVar7 = Swift::Actor::get_unownedExecutor();
          UVar8 = UVar7;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar8.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa6,
                       UVar7.unknown,pMVar9);
          }
          _swift_release(pMVar6);
          lVar26 = lVar26 + 0x20;
          lVar23 = lVar29 + 1;
          lVar30 = lVar18 + 0x20;
          lVar2 = lVar27 + 1;
        } while (lVar20 < lVar17 != lVar15 <= lVar14);
        if (lVar20 < lVar17) {
          if (lVar29 < lVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100231654);
            (*pcVar3)();
          }
          if (lVar16 < lVar29) {
            lVar17 = *param_3;
            lVar18 = lVar17 + lVar18;
            lVar26 = lVar17;
            lVar13 = lVar16;
            do {
              if (lVar13 != lVar27) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100231674);
                  (*pcVar3)();
                }
                puVar19 = (undefined8 *)(lVar26 + lVar21);
                lVar20 = lVar18 + lVar21;
                uVar1 = *(undefined1 *)puVar19;
                uVar22 = puVar19[3];
                uVar32 = puVar19[2];
                uVar31 = puVar19[1];
                uVar35 = *(undefined8 *)(lVar20 + 0x20);
                uVar34 = *(undefined8 *)(lVar20 + 0x38);
                uVar33 = *(undefined8 *)(lVar20 + 0x30);
                puVar19[1] = *(undefined8 *)(lVar20 + 0x28);
                *puVar19 = uVar35;
                puVar19[3] = uVar34;
                puVar19[2] = uVar33;
                *(undefined1 *)(lVar20 + 0x20) = uVar1;
                *(undefined8 *)(lVar20 + 0x30) = uVar32;
                *(undefined8 *)(lVar20 + 0x28) = uVar31;
                *(undefined8 *)(lVar20 + 0x38) = uVar22;
              }
              lVar13 = lVar13 + 1;
              lVar18 = lVar18 + -0x20;
              lVar26 = lVar26 + 0x20;
              bVar4 = lVar13 < lVar27;
              lVar27 = lVar27 + -1;
            } while (bVar4);
          }
        }
      }
      lVar13 = param_3[1];
      lVar26 = lVar29;
      if (lVar29 < lVar13) {
        if (SBORROW8(lVar29,lVar16)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100231650);
          (*pcVar3)();
        }
        if (lVar29 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100231658);
            (*pcVar3)();
          }
          lVar17 = lVar16 + param_4;
          if (lVar13 <= lVar16 + param_4) {
            lVar17 = lVar13;
          }
          if (lVar17 < lVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10023165c);
            (*pcVar3)();
          }
          if (lVar29 != lVar17) {
            lVar20 = *param_3;
            pMVar25 = Swift::MainActor::typeMetadataAccessor();
            puVar19 = (undefined8 *)(lVar20 + lVar29 * 0x20);
            lVar13 = lVar16 - lVar29;
            do {
              lVar23 = *(long *)(lVar20 + lVar29 * 0x20 + 8);
              lVar26 = lVar13;
              puVar28 = puVar19;
              do {
                lVar30 = puVar28[-3];
                pMVar5 = Swift::MainActor::get_shared(pMVar25,(MainActor *)puVar28[-1]);
                pMVar9 = pMVar5;
                FUN_1001f7290();
                UVar7 = Swift::Actor::get_unownedExecutor();
                UVar8 = UVar7;
                _swift_task_isCurrentExecutor();
                if (((ulong)UVar8.unknown & 1) == 0) {
                  _swift_task_reportUnexpectedExecutor
                            ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa6,
                             UVar7.unknown,pMVar9);
                }
                _swift_release(pMVar5);
                if (lVar30 <= lVar23) break;
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100231660);
                  (*pcVar3)();
                }
                uVar1 = *(undefined1 *)puVar28;
                uVar22 = puVar28[3];
                uVar32 = puVar28[2];
                uVar31 = puVar28[1];
                lVar23 = puVar28[1];
                puVar28[1] = puVar28[-3];
                *puVar28 = puVar28[-4];
                puVar28[3] = puVar28[-1];
                puVar28[2] = puVar28[-2];
                puVar28[-2] = uVar32;
                puVar28[-3] = uVar31;
                puVar28[-1] = uVar22;
                puVar28 = puVar28 + -4;
                *(undefined1 *)puVar28 = uVar1;
                bVar4 = lVar26 != -1;
                lVar26 = lVar26 + 1;
              } while (bVar4);
              lVar29 = lVar29 + 1;
              puVar19 = puVar19 + 4;
              lVar13 = lVar13 + -1;
              lVar26 = lVar17;
            } while (lVar29 != lVar17);
          }
        }
      }
      puVar12 = local_58;
      if (lVar26 < lVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100231644);
        (*pcVar3)();
      }
      puVar10 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_100231e2c(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar24 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar24) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_100231e2c(puVar12,uVar24 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar24 + 1;
      *(long *)(puVar12 + uVar24 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar12 + uVar24 * 0x10 + 0x28) = lVar26;
      local_58 = puVar12;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100231678);
        (*pcVar3)();
      }
      FUN_100231bc4(&local_58,*param_1,param_3);
      puVar12 = local_58;
      if (unaff_x21 != 0) goto LAB_100231614;
      lVar13 = param_3[1];
      lVar16 = lVar26;
    } while (lVar26 < lVar13);
  }
  puVar12 = local_58;
  lVar13 = *param_1;
  if (lVar13 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100231680);
    (*pcVar3)();
  }
  puVar10 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_1002326dc();
  }
  uVar24 = *(ulong *)(puVar12 + 0x10);
  while( true ) {
    local_58 = puVar12;
    if (uVar24 < 2) {
      _swift_bridgeObjectRelease(puVar12);
      return;
    }
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10023167c);
      (*pcVar3)();
    }
    lVar17 = uVar24 - 1;
    lVar26 = *(long *)(puVar12 + uVar24 * 0x10);
    lVar29 = *(long *)(puVar12 + lVar17 * 0x10 + 0x28);
    FUN_1002322c4(lVar16 + lVar26 * 0x20,lVar16 + *(long *)(puVar12 + lVar17 * 0x10 + 0x20) * 0x20,
                  lVar16 + lVar29 * 0x20,lVar13);
    if (unaff_x21 != 0) break;
    if (lVar29 < lVar26) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100231648);
      (*pcVar3)();
    }
    puVar10 = puVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar10 & 1) == 0) {
      FUN_1002326dc();
    }
    if (*(ulong *)(puVar12 + 0x10) <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10023164c);
      (*pcVar3)();
    }
    *(long *)(puVar12 + uVar24 * 0x10) = lVar26;
    *(long *)((long)(puVar12 + uVar24 * 0x10) + 8) = lVar29;
    local_58 = puVar12;
    FUN_100232654(lVar17);
    uVar24 = *(ulong *)(local_58 + 0x10);
    puVar12 = local_58;
  }
LAB_100231614:
  _swift_bridgeObjectRelease(puVar12);
  return;
}



/* Address: 0x100231680 | FUN_100231680 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100231680(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    this = Swift::MainActor::typeMetadataAccessor();
    plVar10 = (long *)(lVar8 + param_3 * 0x10);
    lVar12 = param_1 - param_3;
    do {
      lVar9 = *(long *)(lVar8 + param_3 * 0x10);
      plVar11 = plVar10;
      lVar13 = lVar12;
      do {
        lVar1 = plVar11[-2];
        pMVar4 = Swift::MainActor::get_shared(this,(MainActor *)plVar11[-1]);
        pMVar5 = pMVar4;
        FUN_1001f7290();
        UVar6 = Swift::Actor::get_unownedExecutor();
        UVar7 = UVar6;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar7.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xab,UVar6.unknown,
                     pMVar5);
        }
        _swift_release(pMVar4);
        param_1 = 0;
        if (lVar1 <= lVar9) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002317e4);
          (*pcVar2)();
        }
        lVar9 = *plVar11;
        param_1 = plVar11[1];
        plVar11[1] = plVar11[-1];
        *plVar11 = plVar11[-2];
        plVar11[-1] = param_1;
        plVar11 = plVar11 + -2;
        *plVar11 = lVar9;
        bVar3 = lVar13 != -1;
        lVar13 = lVar13 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      plVar10 = plVar10 + 2;
      lVar12 = lVar12 + -1;
    } while (param_3 != param_2);
  }
  return param_1;
}



/* Address: 0x1002317e4 | FUN_1002317e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1002317e4(long param_1,long param_2,long param_3,long *param_4)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    this = Swift::MainActor::typeMetadataAccessor();
    puVar9 = (undefined8 *)(lVar8 + param_3 * 0x20);
    lVar13 = param_1 - param_3;
    do {
      lVar11 = *(long *)(lVar8 + param_3 * 0x20 + 8);
      puVar10 = puVar9;
      lVar14 = lVar13;
      do {
        lVar12 = puVar10[-3];
        pMVar4 = Swift::MainActor::get_shared(this,(MainActor *)puVar10[-1]);
        pMVar5 = pMVar4;
        FUN_1001f7290();
        UVar6 = Swift::Actor::get_unownedExecutor();
        UVar7 = UVar6;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar7.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa6,UVar6.unknown,
                     pMVar5);
        }
        _swift_release(pMVar4);
        param_1 = 0;
        if (lVar12 <= lVar11) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10023195c);
          (*pcVar2)();
        }
        uVar1 = *(undefined1 *)puVar10;
        param_1 = puVar10[3];
        uVar16 = puVar10[2];
        uVar15 = puVar10[1];
        lVar11 = puVar10[1];
        puVar10[1] = puVar10[-3];
        *puVar10 = puVar10[-4];
        puVar10[3] = puVar10[-1];
        puVar10[2] = puVar10[-2];
        puVar10[-2] = uVar16;
        puVar10[-3] = uVar15;
        puVar10[-1] = param_1;
        puVar10 = puVar10 + -4;
        *(undefined1 *)puVar10 = uVar1;
        bVar3 = lVar14 != -1;
        lVar14 = lVar14 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar9 = puVar9 + 4;
      lVar13 = lVar13 + -1;
    } while (param_3 != param_2);
  }
  return param_1;
}



/* Address: 0x10023195c | FUN_10023195c */

undefined8 FUN_10023195c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1002326dc();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_100231a30;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231bac);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100231a94:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b9c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231ba4);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b84);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b88);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b90);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b98);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_100231a30:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b8c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b94);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231ba0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231ba8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100231a94;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231bb0);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b78);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231bc4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100231f2c(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b7c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1002326dc();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231b80);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100232654(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x100231bc4 | FUN_100231bc4 */

undefined8 FUN_100231bc4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1002326dc();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_100231c98;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e14);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100231cfc:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e04);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e0c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231dec);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231df0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231df8);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e00);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_100231c98:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231df4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231dfc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e08);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e10);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100231cfc;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e18);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231de0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231e2c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1002322c4(lVar9 + lVar12 * 0x20,lVar9 + *plVar1 * 0x20,lVar9 + lVar7 * 0x20,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231de4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1002326dc();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100231de8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100232654(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x100231e2c | FUN_100231e2c */

undefined * FUN_100231e2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100231f2c);
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
    puVar3 = &DAT_100fb7808;
    FUN_1000037f0(&DAT_100fb7808,&DAT_100c36d98);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100231f2c | FUN_100231f2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100231f2c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  
  lVar13 = (long)param_2 - (long)param_1;
  lVar7 = lVar13 + 0xf;
  if (-1 < lVar13) {
    lVar7 = lVar13;
  }
  lVar7 = lVar7 >> 4;
  lVar14 = (long)param_3 - (long)param_2;
  lVar10 = lVar14 + 0xf;
  if (-1 < lVar14) {
    lVar10 = lVar14;
  }
  lVar10 = lVar10 >> 4;
  if (lVar7 < lVar10) {
    if (((param_4 < param_1) || (param_1 + lVar7 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar7 << 4);
    }
    plVar12 = param_4 + lVar7 * 2;
    plVar16 = param_1;
    if ((0xf < lVar13) && (param_2 < param_3)) {
      pMVar2 = Swift::MainActor::typeMetadataAccessor();
      do {
        lVar7 = *param_2;
        lVar13 = *param_4;
        pMVar3 = Swift::MainActor::get_shared(pMVar2,(MainActor *)param_4[1]);
        pMVar5 = pMVar3;
        FUN_1001f7290();
        UVar4 = Swift::Actor::get_unownedExecutor();
        UVar6 = UVar4;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar6.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xab,UVar4.unknown,
                     pMVar5);
        }
        _swift_release(pMVar3);
        if (lVar7 < lVar13) {
          plVar16 = param_4;
          plVar11 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          plVar16 = param_4 + 2;
          plVar11 = param_4;
        }
        param_4 = plVar16;
        if (param_1 != plVar11) {
          lVar7 = *plVar11;
          param_1[1] = plVar11[1];
          *param_1 = lVar7;
        }
        param_1 = param_1 + 2;
        plVar16 = param_1;
      } while ((param_4 < plVar12) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar10 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar10 << 4);
    }
    plVar11 = param_4 + lVar10 * 2;
    plVar12 = plVar11;
    plVar16 = param_2;
    if ((param_1 < param_2) && (0xf < lVar14)) {
      pMVar2 = Swift::MainActor::typeMetadataAccessor();
      do {
        plVar8 = param_2 + -2;
        plVar15 = param_3;
        while( true ) {
          param_3 = plVar15 + -2;
          plVar12 = plVar11 + -2;
          lVar7 = *plVar12;
          lVar13 = param_2[-2];
          pMVar3 = Swift::MainActor::get_shared(pMVar2,(MainActor *)param_2[-1]);
          pMVar5 = pMVar3;
          FUN_1001f7290();
          UVar4 = Swift::Actor::get_unownedExecutor();
          UVar6 = UVar4;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar6.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xab,
                       UVar4.unknown,pMVar5);
          }
          _swift_release(pMVar3);
          if (lVar7 < lVar13) break;
          if (plVar15 != plVar11) {
            lVar7 = *plVar12;
            plVar15[-1] = plVar11[-1];
            *param_3 = lVar7;
          }
          plVar11 = plVar12;
          plVar16 = param_2;
          plVar15 = param_3;
          if (plVar12 <= param_4) goto LAB_100232260;
        }
        if (plVar15 != param_2) {
          lVar7 = *plVar8;
          plVar15[-1] = param_2[-1];
          *param_3 = lVar7;
        }
        plVar12 = plVar11;
        plVar16 = plVar8;
      } while ((param_1 < plVar8) && (param_2 = plVar8, param_4 < plVar11));
    }
  }
LAB_100232260:
  uVar9 = (long)plVar12 - (long)param_4;
  uVar1 = uVar9 + 0xf;
  if (-1 < (long)uVar9) {
    uVar1 = uVar9;
  }
  if ((plVar16 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= plVar16)) {
    _memmove(plVar16,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Address: 0x1002322c4 | FUN_1002322c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1002322c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar7 = lVar10 + 0x1f;
  if (-1 < lVar10) {
    lVar7 = lVar10;
  }
  lVar7 = lVar7 >> 5;
  lVar13 = (long)param_3 - (long)param_2;
  lVar9 = lVar13 + 0x1f;
  if (-1 < lVar13) {
    lVar9 = lVar13;
  }
  lVar9 = lVar9 >> 5;
  if (lVar7 < lVar9) {
    if ((param_4 < param_1) || ((param_1 + lVar7 * 4 <= param_4 || (param_4 != param_1)))) {
      _memmove(param_4,param_1,lVar7 << 5);
    }
    puVar12 = param_4 + lVar7 * 4;
    puVar15 = param_1;
    if ((0x1f < lVar10) && (param_2 < param_3)) {
      pMVar2 = Swift::MainActor::typeMetadataAccessor();
      do {
        lVar7 = param_2[1];
        lVar10 = param_4[1];
        pMVar3 = Swift::MainActor::get_shared(pMVar2,(MainActor *)param_4[3]);
        pMVar5 = pMVar3;
        FUN_1001f7290();
        UVar4 = Swift::Actor::get_unownedExecutor();
        UVar6 = UVar4;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar6.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa6,UVar4.unknown,
                     pMVar5);
        }
        _swift_release(pMVar3);
        if (lVar7 < lVar10) {
          puVar15 = param_4;
          puVar11 = param_2;
          param_2 = param_2 + 4;
        }
        else {
          puVar15 = param_4 + 4;
          puVar11 = param_4;
        }
        param_4 = puVar15;
        if (param_1 != puVar11) {
          uVar16 = *puVar11;
          uVar18 = puVar11[3];
          uVar17 = puVar11[2];
          param_1[1] = puVar11[1];
          *param_1 = uVar16;
          param_1[3] = uVar18;
          param_1[2] = uVar17;
        }
        param_1 = param_1 + 4;
        puVar15 = param_1;
      } while ((param_4 < puVar12) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar9 * 4 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar9 << 5);
    }
    puVar11 = param_4 + lVar9 * 4;
    puVar12 = puVar11;
    puVar15 = param_2;
    if ((param_1 < param_2) && (0x1f < lVar13)) {
      pMVar2 = Swift::MainActor::typeMetadataAccessor();
      do {
        while( true ) {
          puVar14 = param_3 + -4;
          lVar7 = puVar11[-3];
          lVar10 = param_2[-3];
          pMVar3 = Swift::MainActor::get_shared(pMVar2,(MainActor *)param_2[-1]);
          pMVar5 = pMVar3;
          FUN_1001f7290();
          UVar4 = Swift::Actor::get_unownedExecutor();
          UVar6 = UVar4;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar6.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0xa6,
                       UVar4.unknown,pMVar5);
          }
          _swift_release(pMVar3);
          if (lVar10 <= lVar7) break;
          puVar15 = param_2 + -4;
          if (param_3 != param_2) {
            uVar16 = *puVar15;
            uVar18 = param_2[-1];
            uVar17 = param_2[-2];
            param_3[-3] = param_2[-3];
            *puVar14 = uVar16;
            param_3[-1] = uVar18;
            param_3[-2] = uVar17;
          }
          puVar12 = puVar11;
          if ((puVar15 <= param_1) || (param_3 = puVar14, param_2 = puVar15, puVar11 <= param_4))
          goto LAB_1002325f0;
        }
        puVar12 = puVar11 + -4;
        if (param_3 != puVar11) {
          uVar16 = *puVar12;
          uVar18 = puVar11[-1];
          uVar17 = puVar11[-2];
          param_3[-3] = puVar11[-3];
          *puVar14 = uVar16;
          param_3[-1] = uVar18;
          param_3[-2] = uVar17;
        }
        puVar11 = puVar12;
        puVar15 = param_2;
        param_3 = puVar14;
      } while (param_4 < puVar12);
    }
  }
LAB_1002325f0:
  uVar8 = (long)puVar12 - (long)param_4;
  uVar1 = uVar8 + 0x1f;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((puVar15 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xffffffffffffffe0)) <= puVar15)) {
    _memmove(puVar15,param_4,((long)uVar1 >> 5) << 5);
  }
  return 1;
}



/* Address: 0x100232654 | FUN_100232654 */

undefined1  [16] FUN_100232654(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1002326dc();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002326dc);
  (*pcVar3)();
}



/* Address: 0x1002326dc | FUN_1002326dc */

void FUN_1002326dc(long param_1)

{
  FUN_100231e2c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1002326f0 | FUN_1002326f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_1002326f0(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar5 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100232844);
      (*pcVar2)();
    }
    lVar5 = 0;
    lVar10 = 0;
    uVar11 = 0x3f - uVar8 >> 6;
    lVar1 = lVar5;
    do {
      while (uVar9 == 0) {
        bVar3 = SCARRY8(lVar5,1);
        lVar5 = lVar5 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100232840);
          (*pcVar2)();
        }
        if ((long)uVar11 <= lVar5) {
          uVar9 = 0;
          if ((long)uVar11 <= lVar1 + 1) {
            uVar11 = lVar1 + 1;
          }
          lVar5 = uVar11 - 1;
          param_3 = lVar10;
          goto LAB_100232804;
        }
        uVar9 = puVar7[lVar5];
      }
      uVar6 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = lVar5 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3;
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6);
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *(undefined8 *)(*(long *)(param_4 + 0x30) + uVar6);
      param_2[1] = uVar4;
      lVar1 = lVar5;
      param_2 = param_2 + 2;
    } while (lVar10 != param_3);
  }
LAB_100232804:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar5;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x100232844 | FUN_100232844 */

void FUN_100232844(long param_1)

{
  FUN_1002304e4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100232858 | FUN_100232858 */

void FUN_100232858(long param_1)

{
  FUN_1002302ac(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10023286c | FUN_10023286c */

undefined * FUN_10023286c(long param_1,long param_2,long param_3)

{
  _HashTable _Var1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  Bucket BVar5;
  MainActor *this;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  MainActor *pMVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    FUN_10022ff00(0,lVar10,0);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar5 = Swift::_HashTable::get_startBucket(_Var1);
    this = Swift::MainActor::typeMetadataAccessor();
    lVar17 = 0;
    pMVar6 = this;
    do {
      if ((ulong)BVar5.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100232b1c);
        (*pcVar4)();
      }
      uVar18 = (ulong)BVar5.offset >> 6;
      uVar11 = 1L << (BVar5.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar18 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100232b20);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar14 = *(long *)(*(long *)(param_1 + 0x30) + BVar5.offset * 8);
      pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
      pMVar12 = pMVar6;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x68,UVar7.unknown,
                   pMVar12);
      }
      if (param_2 < lVar14) {
        lVar13 = *(long *)(param_3 + 0x10);
        _swift_release();
        lVar15 = lVar14 + lVar13;
        if (SCARRY8(lVar14,lVar13)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100232b30);
          (*pcVar4)();
        }
      }
      else {
        _swift_release();
        lVar15 = lVar14;
      }
      uVar16 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar16) {
        pMVar6 = (MainActor *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
        FUN_10022ff00(pMVar6,uVar16 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar16 + 1;
      puVar3[uVar16 * 0x18 + 0x20] = 2;
      *(long *)(puVar3 + uVar16 * 0x18 + 0x28) = lVar15;
      *(long *)(puVar3 + uVar16 * 0x18 + 0x30) = lVar14;
      pMVar12 = (MainActor *)(1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f));
      if (pMVar12 <= (ulong)BVar5.offset) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100232b24);
        (*pcVar4)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar18 * 8) & uVar11) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100232b28);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100232b2c);
        (*pcVar4)();
      }
      uVar11 = *(ulong *)(_Var1.unknown + uVar18 * 8) & -2L << (BVar5.offset & 0x3fU);
      if (uVar11 == 0) {
        lVar14 = uVar18 << 6;
        puVar9 = (ulong *)(param_1 + 0x40 + uVar18 * 8);
        do {
          uVar18 = uVar18 + 1;
          if ((ulong)(pMVar12 + 0x3f) >> 6 <= uVar18) {
            FUN_10000cae0(BVar5.offset,iVar2,0);
            pMVar6 = (MainActor *)BVar5.offset;
            goto LAB_10023291c;
          }
          uVar11 = *puVar9;
          lVar14 = lVar14 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar11 == 0);
        FUN_10000cae0(BVar5.offset,iVar2,0);
        uVar18 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        pMVar12 = (MainActor *)(LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + lVar14);
        pMVar6 = (MainActor *)BVar5.offset;
      }
      else {
        uVar18 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        pMVar12 = (MainActor *)
                  (LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | BVar5.offset & 0x7fffffffffffffc0U);
      }
LAB_10023291c:
      lVar17 = lVar17 + 1;
      BVar5.offset = (__int64)pMVar12;
    } while (lVar17 != lVar10);
  }
  return puVar3;
}



/* Address: 0x100232b30 | FUN_100232b30 */

undefined * FUN_100232b30(long param_1,long param_2,Hasher param_3)

{
  __uint64 _Var1;
  undefined8 uVar2;
  char cVar3;
  MainActor *pMVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  char *pcVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *local_88;
  
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == 0) {
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar16 = 0;
    local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pMVar5 = pMVar4;
    do {
      pcVar12 = (char *)(param_1 + 0x20 + lVar16 * 0x18);
      cVar3 = *pcVar12;
      uVar20 = *(undefined8 *)(pcVar12 + 8);
      _Var1 = *(__uint64 *)(pcVar12 + 0x10);
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar5);
      pMVar6 = pMVar5;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        param_3.unknown = &DAT_00000001;
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x62,UVar7.unknown,
                   pMVar6);
      }
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar9 = Swift::Hasher::_hash(*(__int64 *)(param_2 + 0x28),_Var1,param_3);
        uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
          do {
            if (*(__uint64 *)(*(long *)(param_2 + 0x30) + uVar9 * 8) == _Var1) {
              _swift_release();
              if (cVar3 != '\x01') {
                pMVar5 = (MainActor *)puVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)pMVar5 & 1) == 0) {
                  pMVar5 = (MainActor *)0x0;
                  param_3.unknown = &DAT_00000001;
                  FUN_10022ff00(0,*(long *)(puVar11 + 0x10) + 1);
                }
                uVar9 = *(ulong *)(puVar11 + 0x10);
                if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar9) {
                  pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
                  param_3.unknown = &DAT_00000001;
                  FUN_10022ff00(pMVar5,uVar9 + 1);
                }
                *(ulong *)(puVar11 + 0x10) = uVar9 + 1;
                puVar11[uVar9 * 0x18 + 0x20] = cVar3;
                *(undefined8 *)(puVar11 + uVar9 * 0x18 + 0x28) = uVar20;
                *(__uint64 *)(puVar11 + uVar9 * 0x18 + 0x30) = _Var1;
              }
              goto LAB_100232b9c;
            }
            uVar9 = uVar9 + 1 & ~uVar13;
          } while ((*(ulong *)(param_2 + 0x38 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
        }
      }
      _swift_release();
LAB_100232b9c:
      lVar16 = lVar16 + 1;
    } while (lVar16 != lVar23);
  }
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(local_88 + 0x10);
  if (lVar16 != 0) {
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar19 = (undefined8 *)(local_88 + 0x30);
    pMVar5 = pMVar4;
    do {
      cVar3 = *(char *)(puVar19 + -2);
      uVar20 = puVar19[-1];
      uVar2 = *puVar19;
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar5);
      pMVar6 = pMVar5;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,100,UVar7.unknown,
                   pMVar6);
      }
      _swift_release();
      if (cVar3 != '\x02') {
        pMVar5 = (MainActor *)puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pMVar5 & 1) == 0) {
          pMVar5 = (MainActor *)0x0;
          FUN_10022ff00(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puVar11 + 0x10);
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar9) {
          pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_10022ff00(pMVar5,uVar9 + 1,1);
        }
        *(ulong *)(puVar11 + 0x10) = uVar9 + 1;
        puVar11[uVar9 * 0x18 + 0x20] = cVar3;
        *(undefined8 *)(puVar11 + uVar9 * 0x18 + 0x28) = uVar20;
        *(undefined8 *)(puVar11 + uVar9 * 0x18 + 0x30) = uVar2;
      }
      puVar19 = puVar19 + 3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(puVar11 + 0x10);
  if (lVar16 == 0) {
    _swift_release(puVar11);
    lVar16 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10022ff1c(0,lVar16,0);
    lVar17 = 0x30;
    uVar9 = *(ulong *)(puVar18 + 0x10);
    do {
      uVar20 = *(undefined8 *)(puVar11 + lVar17);
      uVar13 = uVar9 + 1;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar9) {
        FUN_10022ff1c(1 < *(ulong *)(puVar18 + 0x18),uVar13,1);
      }
      *(ulong *)(puVar18 + 0x10) = uVar13;
      *(undefined8 *)(puVar18 + uVar9 * 8 + 0x20) = uVar20;
      lVar17 = lVar17 + 0x18;
      lVar16 = lVar16 + -1;
      uVar9 = uVar13;
    } while (lVar16 != 0);
    _swift_release(puVar11);
    lVar16 = *(long *)(puVar18 + 0x10);
  }
  if (lVar16 == 0) {
    lVar17 = 0;
  }
  else {
    lVar21 = *(long *)(puVar18 + 0x20);
    lVar16 = lVar16 + -1;
    lVar17 = lVar21;
    if (lVar16 != 0) {
      plVar14 = (long *)(puVar18 + 0x28);
      lVar22 = lVar21;
      do {
        lVar15 = *plVar14;
        lVar17 = lVar15;
        if (lVar15 <= lVar21) {
          lVar17 = lVar22;
        }
        if (lVar21 <= lVar15) {
          lVar21 = lVar15;
        }
        lVar16 = lVar16 + -1;
        plVar14 = plVar14 + 1;
        lVar22 = lVar17;
      } while (lVar16 != 0);
    }
  }
  _swift_bridgeObjectRelease(puVar18);
  lVar16 = *(long *)(local_88 + 0x10);
  if (lVar16 == 0) {
    _swift_release(local_88);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10022ff1c(0,lVar16,0);
    lVar21 = 0x30;
    uVar9 = *(ulong *)(puVar18 + 0x10);
    do {
      uVar20 = *(undefined8 *)(local_88 + lVar21);
      uVar13 = uVar9 + 1;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar9) {
        FUN_10022ff1c(1 < *(ulong *)(puVar18 + 0x18),uVar13,1);
      }
      *(ulong *)(puVar18 + 0x10) = uVar13;
      *(undefined8 *)(puVar18 + uVar9 * 8 + 0x20) = uVar20;
      lVar21 = lVar21 + 0x18;
      lVar16 = lVar16 + -1;
      uVar9 = uVar13;
    } while (lVar16 != 0);
    _swift_release(local_88);
  }
  _swift_bridgeObjectRetain(param_2);
  puVar10 = puVar18;
  FUN_100222894(puVar18,param_2);
  _swift_bridgeObjectRelease(puVar18);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar23 != 0) {
    pMVar4 = Swift::MainActor::typeMetadataAccessor();
    puVar19 = (undefined8 *)(param_1 + 0x30);
    pMVar5 = pMVar4;
    do {
      cVar3 = *(char *)(puVar19 + -2);
      uVar20 = puVar19[-1];
      uVar2 = *puVar19;
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar5);
      pMVar6 = pMVar5;
      FUN_1001f7290();
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/CollectionView.CellTransitionManager.swift",0x32,1,0x66,UVar7.unknown,
                   pMVar6);
      }
      _swift_release();
      if (cVar3 == '\x01') {
        pMVar5 = (MainActor *)puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pMVar5 & 1) == 0) {
          pMVar5 = (MainActor *)0x0;
          FUN_10022ff00(0,*(long *)(puVar11 + 0x10) + 1,1);
        }
        uVar9 = *(ulong *)(puVar11 + 0x10);
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar9) {
          pMVar5 = (MainActor *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_10022ff00(pMVar5,uVar9 + 1,1);
        }
        *(ulong *)(puVar11 + 0x10) = uVar9 + 1;
        puVar11[uVar9 * 0x18 + 0x20] = 1;
        *(undefined8 *)(puVar11 + uVar9 * 0x18 + 0x28) = uVar20;
        *(undefined8 *)(puVar11 + uVar9 * 0x18 + 0x30) = uVar2;
      }
      puVar19 = puVar19 + 3;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
  }
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar23 = *(long *)(puVar11 + 0x10);
  if (lVar23 == 0) {
    _swift_release(puVar11);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10022ff1c(0,lVar23,0);
    lVar16 = 0x28;
    uVar9 = *(ulong *)(puVar18 + 0x10);
    do {
      uVar20 = *(undefined8 *)(puVar11 + lVar16);
      uVar13 = uVar9 + 1;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar9) {
        FUN_10022ff1c(1 < *(ulong *)(puVar18 + 0x18),uVar13,1);
      }
      *(ulong *)(puVar18 + 0x10) = uVar13;
      *(undefined8 *)(puVar18 + uVar9 * 8 + 0x20) = uVar20;
      lVar16 = lVar16 + 0x18;
      lVar23 = lVar23 + -1;
      uVar9 = uVar13;
    } while (lVar23 != 0);
    _swift_release(puVar11);
  }
  _swift_bridgeObjectRetain(puVar18);
  puVar11 = puVar10;
  FUN_10023286c(puVar10,lVar17,puVar18);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease_n(puVar18,2);
  return puVar11;
}



/* Address: 0x1002331fc | FUN_1002331fc */

void FUN_1002331fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb7778 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7770;
  FUN_100005c24(&DAT_100fb7770,&DAT_100c36cf0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fb7778 = puVar2;
  return;
}



/* Address: 0x10023324c | FUN_10023324c */

void FUN_10023324c(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  puStack_20 = local_28;
  local_18 = local_28;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x58);
  return;
}



/* Address: 0x100233294 | FUN_100233294 */

void FUN_100233294(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1002332a0 | thunk_FUN_1002332a4 */

undefined1 * thunk_FUN_1002332a4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1002332a4 | FUN_1002332a4 */

undefined1 * FUN_1002332a4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1002332e8 | FUN_1002332e8 */

undefined1 * FUN_1002332e8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10023334c | FUN_10023334c */

void FUN_10023334c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100233360 | FUN_100233360 */

undefined1 * FUN_100233360(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1002333a4 | FUN_1002333a4 */

undefined1  [16] FUN_1002333a4(void)

{
  return ZEXT816(0x100ec2d58);
}



/* Address: 0x1002333b4 | FUN_1002333b4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002333b4(void)

{
  return 0;
}



/* Address: 0x1002333bc | FUN_1002333bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1002333bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x1002333f0 | FUN_1002333f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_1002333f0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Address: 0x100233440 | FUN_100233440 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_100233440(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Address: 0x100233480 | FUN_100233480 */

undefined1  [16] FUN_100233480(void)

{
  return ZEXT816(0x100ec2de0);
}



/* Address: 0x100233490 | thunk_FUN_1002332a4 */

void thunk_FUN_1002332a4(void)

{
  thunk_FUN_1002332a4();
  return;
}



/* Address: 0x100233494 | FUN_100233494 */

Set<undefined>
FUN_100233494(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double *unaff_x20;
  ulong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_80 [8];
  undefined *local_78;
  
  dVar7 = unaff_x20[9];
  uVar6 = (long)dVar7 - 1;
  local_78 = PTR___swiftEmptySetSingleton_100eae0e8;
  if ((0 < (long)dVar7) &&
     (_CGRectIsEmpty(), local_78 = PTR___swiftEmptySetSingleton_100eae0e8, (param_5 & 1) == 0)) {
    dVar16 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar15 = *unaff_x20;
    dVar10 = unaff_x20[1];
    dVar17 = unaff_x20[2];
    dVar14 = unaff_x20[3];
    dVar18 = unaff_x20[4];
    dVar8 = unaff_x20[5];
    dVar11 = unaff_x20[6];
    dVar12 = unaff_x20[7];
    dVar13 = unaff_x20[8];
    dVar9 = dVar8;
    _CGRectGetHeight();
    dVar16 = (double)(long)((dVar16 - dVar10) / (dVar18 + (dVar9 - (dVar15 + dVar17))));
    if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336a0);
      (*pcVar1)();
    }
    if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336a4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336a8);
      (*pcVar1)();
    }
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(dVar8,dVar11,dVar12,dVar13);
    dVar9 = (double)(long)((param_1 - dVar14) / (dVar18 + (dVar8 - (dVar15 + dVar17))));
    if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336ac);
      (*pcVar1)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336b0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336b4);
      (*pcVar1)();
    }
    uVar4 = (ulong)dVar16;
    uVar3 = (ulong)dVar9;
    if ((long)uVar3 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002336b8);
      (*pcVar1)();
    }
    if ((long)uVar4 < 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = uVar6;
      if (uVar4 <= uVar6) {
        uVar5 = uVar4;
      }
    }
    if ((long)uVar3 < (long)dVar7) {
      uVar6 = uVar3 & ((long)uVar3 >> 0x3f ^ 0xffffffffffffffffU);
    }
    local_78 = (undefined *)Swift::Set::init((uVar6 - uVar5) + 1);
    while (FUN_100233a50(auStack_80,uVar5), uVar6 != uVar5) {
      bVar2 = SCARRY8(uVar5,1);
      uVar5 = uVar5 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100233660);
        (*pcVar1)();
      }
    }
  }
  return (Set<undefined>)local_78;
}



/* Address: 0x1002336b8 | FUN_1002336b8 */

undefined8 FUN_1002336b8(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Address: 0x1002336c4 | FUN_1002336c4 */

undefined8 FUN_1002336c4(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x20);
}



/* Address: 0x1002336cc | FUN_1002336cc */

void FUN_1002336cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  return;
}



/* Address: 0x1002336dc | FUN_1002336dc */

void FUN_1002336dc(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1002336f0 | FUN_1002336f0 */

int FUN_1002336f0(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100233710 | FUN_100233710 */

void FUN_100233710(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar1;
  return;
}



/* Address: 0x100233744 | FUN_100233744 */

undefined1  [16] FUN_100233744(void)

{
  return ZEXT816(0x100ec2e80);
}



/* Address: 0x100233754 | FUN_100233754 */

void FUN_100233754(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x100233770 | FUN_100233770 */

int FUN_100233770(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100233790 | FUN_100233790 */

void FUN_100233790(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 10) = uVar1;
  return;
}



/* Address: 0x1002337d0 | FUN_1002337d0 */

undefined1  [16] FUN_1002337d0(void)

{
  return ZEXT816(0x100ec2f00);
}



/* Address: 0x1002337e0 | FUN_1002337e0 */

undefined1  [16] FUN_1002337e0(void)

{
  code *pcVar1;
  double dVar2;
  double *unaff_x20;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  
  dVar2 = unaff_x20[9];
  if (!SBORROW8((long)dVar2,1)) {
    dVar7 = unaff_x20[7];
    dVar6 = unaff_x20[8];
    dVar9 = unaff_x20[5];
    dVar8 = unaff_x20[6];
    dVar3 = unaff_x20[3];
    dVar5 = unaff_x20[4];
    dVar12 = unaff_x20[1];
    dVar10 = unaff_x20[2];
    dVar11 = *unaff_x20;
    dVar4 = dVar9;
    _CGRectGetHeight(dVar9,dVar8,dVar7,dVar6);
    dVar11 = dVar10 + dVar11;
    dVar12 = dVar12 + (dVar5 + (dVar4 - dVar11)) * (double)((long)dVar2 + -1);
    dVar2 = dVar9;
    _CGRectGetHeight(dVar9,dVar8,dVar7,dVar6);
    dVar2 = dVar2 - dVar11;
    _CGRectGetMaxX(dVar12,dVar10,dVar2,dVar2);
    _CGRectGetHeight(dVar9,dVar8,dVar7,dVar6);
    auVar13._8_8_ = dVar9;
    auVar13._0_8_ = dVar3 + dVar12;
    return auVar13;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002338bc);
  (*pcVar1)();
}


