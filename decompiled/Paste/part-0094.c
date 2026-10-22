/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100110424 | thunk_FUN_100110360 */

void thunk_FUN_100110360(void)

{
  FUN_100110360();
  return;
}



/* Address: 0x100110428 | thunk_FUN_1001103dc */

void thunk_FUN_1001103dc(void)

{
  FUN_1001103dc();
  return;
}



/* Address: 0x10011042c | thunk_FUN_100110384 */

void thunk_FUN_100110384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  thunk_FUN_10012394c(uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100110430 | thunk_FUN_1001103b0 */

void thunk_FUN_1001103b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100110434 | FUN_100110434 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100110434(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Date DVar3;
  URL UVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  URL UVar8;
  NSDate *pNVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ID self;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  undefined1 auStack_240 [8];
  undefined *local_238;
  long local_230;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_240 + -extraout_x8;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  local_230 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_230 + 0x40));
  lVar11 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fae670;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar11 - extraout_x8_01;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10000cbfc(param_1,auStack_88);
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fafaa0,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  puVar6 = &local_98;
  _swift_dynamicCast(puVar6,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar5,6);
  if ((int)puVar6 != 0) {
    return;
  }
  local_238 = DVar3.unknown;
  FUN_10000cbfc(param_1,auStack_88);
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = &local_98;
  _swift_dynamicCast(puVar6,auStack_88,puVar2 + 8,PTR___type_metadata_for_Swift_String_100eac208,6);
  if ((int)puVar6 == 0) {
    FUN_10000cbfc(param_1,auStack_88);
    puVar10 = PTR___type_metadata_for_Swift_Bool_100eac570;
    puVar6 = &local_98;
    _swift_dynamicCast(puVar6,auStack_88,puVar2 + 8,PTR___type_metadata_for_Swift_Bool_100eac570,6);
    if ((int)puVar6 != 0) {
      puVar2 = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      _swift_initStackObject();
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x20) = 0x756c61566c6f6f62;
      *(undefined8 *)(puVar2 + 0x28) = 0xe900000000000065;
      *(undefined **)(puVar2 + 0x48) = puVar10;
      puVar2[0x30] = local_98;
      FUN_1000f8154();
      _swift_setDeallocating(puVar2);
      FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fae490,&DAT_100c2de60);
      return;
    }
    lVar7 = param_1;
    FUN_1001130dc();
    if (lVar7 != 0) {
      return;
    }
    lVar7 = param_1;
    FUN_100110ac4();
    if (lVar7 != 0) {
      return;
    }
    FUN_10000cbfc(param_1,auStack_88);
    lVar7 = lVar15;
    _swift_dynamicCast(lVar15,auStack_88,puVar2 + 8,UVar4.unknown,6);
    if ((int)lVar7 != 0) {
      (**(code **)(lVar16 + 0x38))(lVar15,0,1,UVar4.unknown);
      (**(code **)(lVar16 + 0x20))(lVar14,lVar15,UVar4.unknown);
      UVar8.unknown = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      _swift_initStackObject();
      *(undefined8 *)(UVar8.unknown + 0x18) = 2;
      *(undefined8 *)(UVar8.unknown + 0x10) = 1;
      *(undefined8 *)(UVar8.unknown + 0x20) = 0x6156676e69727473;
      *(undefined8 *)(UVar8.unknown + 0x28) = 0xeb0000000065756c;
      SVar17 = Foundation::URL::get_absoluteString(UVar8);
      *(undefined **)(UVar8.unknown + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(String *)(UVar8.unknown + 0x30) = SVar17;
      FUN_1000f8154(UVar8.unknown);
      _swift_setDeallocating(UVar8.unknown);
      FUN_1000fb4c4(UVar8.unknown + 0x20,&DAT_100fae490,&DAT_100c2de60);
      (**(code **)(lVar16 + 8))(lVar14,UVar4.unknown);
      return;
    }
    (**(code **)(lVar16 + 0x38))(lVar15,1,1,UVar4.unknown);
    FUN_1000fb4c4(lVar15,&DAT_100fae670,&DAT_100c2e0e8);
    FUN_10000cbfc(param_1,auStack_88);
    puVar10 = local_238;
    puVar6 = puVar12;
    _swift_dynamicCast(puVar12,auStack_88,puVar2 + 8,local_238,6);
    lVar14 = local_230;
    if ((int)puVar6 != 0) {
      (**(code **)(local_230 + 0x38))(puVar12,0,1,puVar10);
      (**(code **)(lVar14 + 0x20))(lVar11,puVar12,puVar10);
      puVar2 = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      _swift_initStackObject();
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x20) = 0x6156676e69727473;
      *(undefined8 *)(puVar2 + 0x28) = 0xeb0000000065756c;
      puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
      DVar3.unknown = puVar2;
      if (DAT_100fb2a00 != -1) {
        DVar3.unknown = (undefined *)&DAT_100fb2a00;
        _swift_once(&DAT_100fb2a00,FUN_10016e594);
      }
      self = *(ID *)(DAT_101057338 + 0x10);
      pNVar9 = Foundation::Date::_bridgeToObjectiveC(DVar3);
      objc_stub::stringFromDate_(self,pNVar9);
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(undefined **)(puVar2 + 0x48) = puVar1;
      *(String *)(puVar2 + 0x30) = SVar17;
      FUN_1000f8154(puVar2);
      _swift_setDeallocating(puVar2);
      FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fae490,&DAT_100c2de60);
      (**(code **)(lVar14 + 8))(lVar11,puVar10);
      return;
    }
    (**(code **)(local_230 + 0x38))(puVar12,1,1,puVar10);
    FUN_1000fb4c4(puVar12,&DAT_100faf508,&DAT_100c2e2e0);
    puVar10 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    *(undefined8 *)(puVar10 + 0x18) = 2;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    puVar13 = (undefined8 *)(puVar10 + 0x20);
    *puVar13 = 0x6156676e69727473;
    *(undefined8 *)(puVar10 + 0x28) = 0xeb0000000065756c;
    FUN_10000cbfc(param_1,auStack_88);
    SVar17 = Swift::String::_init(auStack_88,puVar2 + 8);
    *(undefined **)(puVar10 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(String *)(puVar10 + 0x30) = SVar17;
    FUN_1000f8154(puVar10);
    _swift_setDeallocating(puVar10);
  }
  else {
    puVar2 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    puVar13 = (undefined8 *)(puVar2 + 0x20);
    *puVar13 = 0x6156676e69727473;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined **)(puVar2 + 0x48) = puVar10;
    *(undefined8 *)(puVar2 + 0x28) = 0xeb0000000065756c;
    *(ulong *)(puVar2 + 0x30) = CONCAT71(uStack_97,local_98);
    *(undefined8 *)(puVar2 + 0x38) = uStack_90;
    FUN_1000f8154();
    _swift_setDeallocating(puVar2);
  }
  FUN_1000fb4c4(puVar13,&DAT_100fae490,&DAT_100c2de60);
  return;
}



/* Address: 0x100110ac4 | FUN_100110ac4 */

undefined * FUN_100110ac4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long local_78;
  undefined1 auStack_70 [32];
  
  FUN_10000cbfc(param_1,auStack_70);
  puVar4 = &DAT_100fafaa8;
  FUN_1000f7830(&DAT_100fafaa8,&DAT_100c2e6f8);
  puVar6 = PTR___type_metadata_for_Any_100eae0c0;
  plVar2 = &local_78;
  _swift_dynamicCast(plVar2,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6);
  if ((int)plVar2 == 0) {
    FUN_10000cbfc(param_1,auStack_70);
    puVar4 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    plVar2 = &local_78;
    _swift_dynamicCast(plVar2,auStack_70,puVar6 + 8,puVar4,6);
    if ((int)plVar2 == 0) {
      return (undefined *)0x0;
    }
    puVar4 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    puVar8 = (undefined8 *)(puVar4 + 0x20);
    *puVar8 = 0x61567473696c766b;
    *(undefined8 *)(puVar4 + 0x28) = 0xeb0000000065756c;
    puVar6 = &DAT_100fafa70;
    FUN_1000f7830(&DAT_100fafa70,&DAT_100c2e6d8);
    _swift_initStackObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined8 *)(puVar6 + 0x20) = 0x7365756c6176;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e600000000000000;
    lVar10 = local_78;
    FUN_100110e80();
    _swift_bridgeObjectRelease(local_78);
    *(long *)(puVar6 + 0x30) = lVar10;
    puVar5 = puVar6;
    FUN_1000f87d0();
    _swift_setDeallocating(puVar6);
    FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fafa78,&DAT_100c2e6e0);
    puVar6 = &DAT_100fafa80;
    FUN_1000f7830(&DAT_100fafa80,&DAT_100c2e6e8);
    *(undefined **)(puVar4 + 0x48) = puVar6;
    *(undefined **)(puVar4 + 0x30) = puVar5;
    puVar6 = puVar4;
    FUN_1000f8154(puVar4);
    _swift_setDeallocating(puVar4);
  }
  else {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar9 = local_78;
    for (lVar10 = *(long *)(local_78 + 0x10); lVar10 != 0; lVar10 = lVar10 + -1) {
      lVar9 = lVar9 + 0x20;
      FUN_10000cbfc(lVar9,auStack_70);
      puVar3 = auStack_70;
      FUN_100110434();
      FUN_100004594(auStack_70);
      if (puVar3 != (undefined1 *)0x0) {
        puVar6 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = puVar4;
        if (((ulong)puVar6 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_100105864(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
        }
        uVar1 = *(ulong *)(puVar5 + 0x10);
        puVar4 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
          puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_100105864(puVar4,uVar1 + 1,1,puVar5);
        }
        *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
        *(undefined1 **)(puVar4 + uVar1 * 8 + 0x20) = puVar3;
      }
    }
    _swift_bridgeObjectRelease(local_78);
    puVar5 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    puVar8 = (undefined8 *)(puVar5 + 0x20);
    *puVar8 = 0x6c61567961727261;
    *(undefined8 *)(puVar5 + 0x28) = 0xea00000000006575;
    puVar6 = &DAT_100fafa70;
    FUN_1000f7830(&DAT_100fafa70,&DAT_100c2e6d8);
    _swift_initStackObject();
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined8 *)(puVar6 + 0x20) = 0x7365756c6176;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e600000000000000;
    *(undefined **)(puVar6 + 0x30) = puVar4;
    puVar7 = puVar6;
    FUN_1000f87d0();
    _swift_setDeallocating(puVar6);
    FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fafa78,&DAT_100c2e6e0);
    puVar4 = &DAT_100fafa80;
    FUN_1000f7830(&DAT_100fafa80,&DAT_100c2e6e8);
    *(undefined **)(puVar5 + 0x48) = puVar4;
    *(undefined **)(puVar5 + 0x30) = puVar7;
    puVar6 = puVar5;
    FUN_1000f8154(puVar5);
    _swift_setDeallocating(puVar5);
  }
  FUN_1000fb4c4(puVar8,&DAT_100fae490,&DAT_100c2de60);
  return puVar6;
}



/* Address: 0x100110e80 | FUN_100110e80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001112e8) */

ulong FUN_100110e80(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 **ppuVar3;
  ulong uVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 ***pppuVar9;
  undefined8 ***pppuVar10;
  undefined8 **ppuVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  _DictionaryStorage *this;
  long lVar15;
  undefined8 **ppuVar16;
  ulong uVar17;
  undefined8 ***pppuVar18;
  undefined8 **ppuVar19;
  undefined8 **local_178;
  ulong uStack_170;
  undefined8 local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 *puStack_118;
  undefined8 *local_110;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined *local_d0;
  undefined1 local_c8 [8];
  undefined1 auStack_c0 [32];
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  pppuVar9 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar8 = 0;
  FUN_100105864(0,*(undefined8 *)(param_1 + 0x10),0,PTR___swiftEmptyArrayStorage_100eae0d8);
  pppuVar18 = *(undefined8 ****)(param_1 + 0x10);
  if (pppuVar18 != (undefined8 ***)0x0) {
    _swift_bridgeObjectRetain(param_1);
    pppuVar9 = pppuVar18;
    FUN_10010f6fc(pppuVar18,0);
    pppuVar10 = &local_178;
    thunk_FUN_10015371c(pppuVar10,pppuVar9 + 4,pppuVar18,param_1);
    FUN_10000c650(local_178,uStack_170,local_168,local_160,local_158);
    if (pppuVar10 != pppuVar18) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1001112e8);
      (*pcVar7)();
    }
  }
  local_178 = pppuVar9;
  FUN_1001124b0(&local_178);
  ppuVar6 = local_178;
  ppuVar19 = (undefined8 **)local_178[2];
  if (ppuVar19 != (undefined8 **)0x0) {
    pppuVar9 = (undefined8 ***)(local_178 + 5);
    do {
      ppuVar3 = pppuVar9[-1];
      ppuVar5 = *pppuVar9;
      if (*(long *)(param_1 + 0x10) == 0) {
        uStack_98 = 0;
        local_a0 = (undefined8 **)0x0;
        uStack_88 = 0;
        uStack_90 = 0;
        _swift_bridgeObjectRetain(ppuVar5);
      }
      else {
        _swift_bridgeObjectRetain(ppuVar5);
        ppuVar11 = ppuVar3;
        ppuVar16 = ppuVar5;
        FUN_100071370(ppuVar3);
        if (((ulong)ppuVar16 & 1) == 0) {
          uStack_98 = 0;
          local_a0 = (undefined8 **)0x0;
          uStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)ppuVar11 * 0x20,&local_a0);
        }
      }
      FUN_1000f8cac(&local_a0,&local_178,&DAT_100fae668,&DAT_100c2e4a0);
      if (local_160 == 0) {
        FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
        _swift_bridgeObjectRelease(ppuVar5);
        pppuVar18 = &local_178;
LAB_100111280:
        FUN_1000fb4c4(pppuVar18,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        FUN_100011080(&local_178,auStack_c0);
        FUN_10000cbfc(auStack_c0,&local_178);
        uVar12 = 0;
        FUN_10000ec2c(0,&DAT_100fafaa0,&PTR__OBJC_CLASS___NSNull_100f8d8d0);
        puVar13 = local_c8;
        _swift_dynamicCast(puVar13,&local_178,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar12,6);
        if (((ulong)puVar13 & 1) == 0) {
          puVar13 = auStack_c0;
          FUN_100110434();
          if (puVar13 == (undefined1 *)0x0) {
            _swift_bridgeObjectRelease(ppuVar5);
            FUN_100004594(auStack_c0);
            pppuVar18 = (undefined8 ***)&local_a0;
            goto LAB_100111280;
          }
          local_128 = 0x79656b;
          local_120 = 0xe300000000000000;
          local_100 = PTR___type_metadata_for_Swift_String_100eac208;
          puStack_f8 = &DAT_65756c6176;
          local_f0 = &DAT_e500000000000000;
          puVar14 = &DAT_100fae898;
          puStack_118 = ppuVar3;
          local_110 = ppuVar5;
          FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
          this = (_DictionaryStorage *)&DAT_100fae488;
          local_e8 = puVar13;
          local_d0 = puVar14;
          FUN_1000f7830(&DAT_100fae488,&DAT_100c2de58);
          lVar15 = 2;
          Swift::_DictionaryStorage::_allocate(this,2);
          _swift_retain();
          FUN_1000f8cac(&local_128,&local_178,&DAT_100fae490,&DAT_100c2de60);
          uVar4 = uStack_170;
          ppuVar3 = local_178;
          pppuVar18 = (undefined8 ***)local_178;
          uVar17 = uStack_170;
          FUN_100071370();
          if ((uVar17 & 1) != 0) {
LAB_1001112dc:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1001112e0);
            (*pcVar7)();
          }
          lVar1 = lVar15 + 0x40;
          uVar17 = (ulong)pppuVar18 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(lVar1 + uVar17) = *(ulong *)(lVar1 + uVar17) | 1L << ((ulong)pppuVar18 & 0x3f);
          puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (long)pppuVar18 * 0x10);
          *puVar2 = ppuVar3;
          puVar2[1] = uVar4;
          FUN_100011080(&local_168,*(long *)(lVar15 + 0x38) + (long)pppuVar18 * 0x20);
          if (SCARRY8(*(long *)(lVar15 + 0x10),1)) {
LAB_1001112e0:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1001112e4);
            (*pcVar7)();
          }
          *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
          FUN_1000f8cac(&puStack_f8,&local_178,&DAT_100fae490,&DAT_100c2de60);
          uVar4 = uStack_170;
          ppuVar3 = local_178;
          pppuVar18 = (undefined8 ***)local_178;
          uVar17 = uStack_170;
          FUN_100071370();
          if ((uVar17 & 1) != 0) goto LAB_1001112dc;
          uVar17 = (ulong)pppuVar18 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)(lVar1 + uVar17) = *(ulong *)(lVar1 + uVar17) | 1L << ((ulong)pppuVar18 & 0x3f);
          puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + (long)pppuVar18 * 0x10);
          *puVar2 = ppuVar3;
          puVar2[1] = uVar4;
          FUN_100011080(&local_168,*(long *)(lVar15 + 0x38) + (long)pppuVar18 * 0x20);
          if (SCARRY8(*(long *)(lVar15 + 0x10),1)) goto LAB_1001112e0;
          *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
          _swift_release(lVar15);
          puVar14 = &DAT_100fae490;
          FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
          _swift_arrayDestroy(&local_128,2,puVar14);
          uVar4 = *(ulong *)(uVar8 + 0x10);
          uVar17 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar4) {
            uVar17 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100105864(uVar17,uVar4 + 1,1,uVar8);
          }
          *(ulong *)(uVar17 + 0x10) = uVar4 + 1;
          *(long *)(uVar17 + uVar4 * 8 + 0x20) = lVar15;
          FUN_100004594(auStack_c0);
          FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
          uVar8 = uVar17;
        }
        else {
          _swift_bridgeObjectRelease(ppuVar5);
          FUN_100004594(auStack_c0);
          FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
        }
      }
      pppuVar9 = pppuVar9 + 2;
      ppuVar19 = (undefined8 **)((long)ppuVar19 + -1);
    } while (ppuVar19 != (undefined8 **)0x0);
  }
  _swift_release(ppuVar6);
  return uVar8;
}



/* Address: 0x1001112f0 | FUN_1001112f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1001112f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  ID IVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  long lStack_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined *local_158;
  undefined *local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined *local_70;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  puVar1 = (undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::distinctId);
  local_70 = puVar6;
  _swift_beginAccess(puVar1,auStack_88,0,0);
  puVar22 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar21 = puVar1[1];
  if (uVar21 != 0) {
    local_150 = (undefined *)*puVar1;
    puStack_138 = PTR___type_metadata_for_Swift_String_100eac208;
    uStack_148 = uVar21;
    FUN_100011080(&local_150,&local_120);
    _swift_bridgeObjectRetain(uVar21);
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_150 = puVar6;
    FUN_10016fe74(&local_120,0xd000000000000011,0x8000000100d91ac0,puVar7);
    local_70 = local_150;
    puVar6 = local_150;
  }
  puVar1 = (undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::sessionId);
  _swift_beginAccess(puVar1,auStack_a0,0,0);
  uVar21 = puVar1[1];
  if (uVar21 != 0) {
    local_150 = (undefined *)*puVar1;
    puStack_138 = puVar22;
    uStack_148 = uVar21;
    FUN_100011080(&local_150,&local_120);
    _swift_bridgeObjectRetain(uVar21);
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_150 = puVar6;
    FUN_10016fe74(&local_120,0x496e6f6973736573,0xe900000000000064,puVar7);
    local_70 = local_150;
    puVar6 = local_150;
  }
  puVar1 = (undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::screenName);
  _swift_beginAccess(puVar1,auStack_b8,0,0);
  uVar21 = puVar1[1];
  if (uVar21 != 0) {
    local_150 = (undefined *)*puVar1;
    puStack_138 = puVar22;
    uStack_148 = uVar21;
    FUN_100011080(&local_150,&local_120);
    _swift_bridgeObjectRetain(uVar21);
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_150 = puVar6;
    FUN_10016fe74(&local_120,0x6e2e6e6565726373,0xeb00000000656d61,puVar7);
    local_70 = local_150;
    puVar6 = local_150;
  }
  uVar21 = ((undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::appState))[1];
  if (uVar21 != 0) {
    local_150 = *(undefined **)(param_1 + _TtC7PostHog16PostHogLogRecord::appState);
    puStack_138 = puVar22;
    uStack_148 = uVar21;
    FUN_100011080(&local_150,&local_120);
    _swift_bridgeObjectRetain(uVar21);
    puVar22 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_150 = puVar6;
    FUN_10016fe74(&local_120,0x746174732e707061,0xe900000000000065,puVar22);
    local_70 = local_150;
    puVar6 = local_150;
  }
  lVar8 = _TtC7PostHog16PostHogLogRecord::featureFlagKeys;
  _swift_beginAccess(param_1 + _TtC7PostHog16PostHogLogRecord::featureFlagKeys,auStack_d0,0,0);
  puVar22 = *(undefined **)(param_1 + lVar8);
  if (*(long *)(puVar22 + 0x10) != 0) {
    puVar7 = &DAT_100faf898;
    FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
    local_150 = puVar22;
    puStack_138 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      _swift_bridgeObjectRetain(puVar22);
      FUN_1000fb4c4(&local_150,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_10016fcc4(&local_120,0x5f65727574616566,0xed00007367616c66);
      FUN_1000fb4c4(&local_120,&DAT_100fae668,&DAT_100c2e4a0);
      puVar6 = local_70;
    }
    else {
      FUN_100011080(&local_150,&local_120);
      _swift_bridgeObjectRetain(puVar22);
      puVar22 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native(puVar6);
      local_150 = puVar6;
      FUN_10016fe74(&local_120,0x5f65727574616566,0xed00007367616c66,puVar22);
      local_70 = local_150;
      puVar6 = local_150;
    }
  }
  lVar8 = _TtC7PostHog16PostHogLogRecord::attributes;
  _swift_beginAccess(param_1 + _TtC7PostHog16PostHogLogRecord::attributes,auStack_e8,0,0);
  lVar8 = *(long *)(param_1 + lVar8);
  uVar14 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar21 = 0xffffffffffffffff;
  if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
    uVar21 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar21 = uVar21 & *(ulong *)(lVar8 + 0x40);
  uVar14 = uVar14 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar20 = 0;
LAB_1001116f0:
  do {
    if (uVar21 == 0) {
      uVar21 = uVar14;
      if ((long)uVar14 <= lVar20 + 1) {
        uVar21 = lVar20 + 1;
      }
      lVar15 = uVar21 - 1;
      lVar19 = lVar20;
      do {
        lVar20 = lVar19 + 1;
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100111f98);
          (*pcVar5)();
        }
        if ((long)uVar14 <= lVar20) {
          uVar21 = 0;
          puStack_138 = (undefined *)0x0;
          local_140 = 0;
          uStack_128 = 0;
          local_130 = 0;
          uStack_148 = 0;
          local_150 = (undefined *)0x0;
          goto LAB_10011176c;
        }
        uVar21 = ((ulong *)(lVar8 + 0x40))[lVar20];
        lVar19 = lVar19 + 1;
      } while (uVar21 == 0);
    }
    uVar4 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar21 = uVar21 - 1 & uVar21;
    uVar11 = LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) | lVar20 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x10);
    local_150 = (undefined *)*puVar1;
    uVar4 = puVar1[1];
    uStack_148 = uVar4;
    FUN_10000cbfc(*(long *)(lVar8 + 0x38) + uVar11 * 0x20,&local_140);
    _swift_bridgeObjectRetain(uVar4);
    lVar15 = lVar20;
LAB_10011176c:
    uVar4 = uStack_148;
    puVar22 = local_150;
    uStack_118 = uStack_148;
    local_120 = local_150;
    puStack_108 = puStack_138;
    uStack_110 = local_140;
    uStack_f8 = uStack_128;
    local_100 = local_130;
    if (uStack_148 == 0) {
      local_70 = puVar6;
      _swift_release(lVar8);
      puVar22 = &DAT_100fae678;
      FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
      _swift_allocObject();
      *(undefined8 *)(puVar22 + 0x18) = 10;
      *(undefined8 *)(puVar22 + 0x10) = 5;
      *(undefined8 *)(puVar22 + 0x20) = 0x78696e55656d6974;
      uVar17 = *(undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::timeUnixNano);
      uVar2 = ((undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::timeUnixNano))[1];
      *(undefined8 *)(puVar22 + 0x28) = 0xec0000006f6e614e;
      *(undefined8 *)(puVar22 + 0x30) = uVar17;
      *(undefined8 *)(puVar22 + 0x38) = uVar2;
      puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined **)(puVar22 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(puVar22 + 0x50) = 0xd000000000000014;
      uVar17 = *(undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::observedTimeUnixNano);
      uVar3 = ((undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::observedTimeUnixNano))[1];
      *(undefined8 *)(puVar22 + 0x58) = 0x8000000100d91980;
      *(undefined8 *)(puVar22 + 0x60) = uVar17;
      *(undefined8 *)(puVar22 + 0x68) = uVar3;
      *(undefined **)(puVar22 + 0x78) = puVar7;
      *(undefined8 *)(puVar22 + 0x80) = 0x7974697265766573;
      *(undefined8 *)(puVar22 + 0x88) = 0xee007265626d754e;
      lVar8 = _TtC7PostHog16PostHogLogRecord::level;
      _swift_beginAccess(param_1 + _TtC7PostHog16PostHogLogRecord::level,&local_1a8,0,0);
      puVar9 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      puVar12 = *(undefined **)(param_1 + lVar8);
      if ((long)puVar12 < 3) {
        if (puVar12 == (undefined *)0x0) {
          puVar13 = &DAT_e500000000000000;
          uVar17 = 0x6563617274;
          uVar18 = 1;
        }
        else if (puVar12 == (undefined *)0x1) {
          puVar13 = &DAT_e500000000000000;
          uVar17 = 0x6775626564;
          uVar18 = 5;
        }
        else {
          if (puVar12 != (undefined *)0x2) {
LAB_100111fb0:
            local_120 = puVar12;
            _swift_bridgeObjectRetain(uVar2);
            _swift_bridgeObjectRetain(uVar3);
            Swift::__diagnoseUnexpectedEnumCaseValue
                      (&DAT_100eb7c50,&local_120,&DAT_100eb7c50,
                       PTR___type_metadata_for_Swift_Int_100eac6f8);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100111fe4);
            (*pcVar5)();
          }
          puVar13 = &DAT_e400000000000000;
          uVar17 = 0x6f666e69;
          uVar18 = 9;
        }
      }
      else if (puVar12 == (undefined *)0x3) {
        puVar13 = &DAT_e400000000000000;
        uVar17 = 0x6e726177;
        uVar18 = 0xd;
      }
      else if (puVar12 == (undefined *)0x4) {
        puVar13 = &DAT_e500000000000000;
        uVar17 = 0x726f727265;
        uVar18 = 0x11;
      }
      else {
        if (puVar12 != (undefined *)0x5) goto LAB_100111fb0;
        puVar13 = &DAT_e500000000000000;
        uVar17 = 0x6c61746166;
        uVar18 = 0x15;
      }
      *(undefined8 *)(puVar22 + 0x90) = uVar18;
      *(undefined **)(puVar22 + 0xa8) = puVar9;
      *(undefined8 *)(puVar22 + 0xb0) = 0x7974697265766573;
      *(undefined8 *)(puVar22 + 0xb8) = 0xec00000074786554;
      *(undefined8 *)(puVar22 + 0xc0) = uVar17;
      *(undefined1 **)(puVar22 + 200) = puVar13;
      *(undefined **)(puVar22 + 0xd8) = puVar7;
      *(undefined8 *)(puVar22 + 0xe0) = 0x79646f62;
      *(undefined1 **)(puVar22 + 0xe8) = &DAT_e400000000000000;
      puVar9 = &DAT_100fafa88;
      FUN_1000f7830(&DAT_100fafa88,&DAT_100c2f410);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 2;
      *(undefined8 *)(puVar9 + 0x10) = 1;
      *(undefined8 *)(puVar9 + 0x20) = 0x6156676e69727473;
      *(undefined8 *)(puVar9 + 0x28) = 0xeb0000000065756c;
      puVar1 = (undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::body);
      _swift_beginAccess(puVar1,&local_1d0,0,0);
      uVar17 = puVar1[1];
      *(undefined8 *)(puVar9 + 0x30) = *puVar1;
      *(undefined8 *)(puVar9 + 0x38) = uVar17;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar17);
      puVar12 = puVar9;
      FUN_1000f8280();
      _swift_setDeallocating(puVar9);
      FUN_1000fb4c4(puVar9 + 0x20,&DAT_100fafa90,&DAT_100c2e6f0);
      _swift_deallocClassInstance(puVar9,0x20,7);
      puVar9 = &DAT_100fafa98;
      FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
      *(undefined **)(puVar22 + 0x108) = puVar9;
      *(undefined **)(puVar22 + 0xf0) = puVar12;
      puVar12 = puVar22;
      FUN_1000f8154();
      _swift_setDeallocating(puVar22);
      puVar9 = &DAT_100fae490;
      FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
      _swift_arrayDestroy(puVar22 + 0x20,5,puVar9);
      _swift_deallocClassInstance(puVar22,0x20,7);
      local_158 = puVar12;
      if (*(long *)(puVar6 + 0x10) != 0) {
        puVar9 = puVar6;
        FUN_100110e80();
        puVar22 = &DAT_100fae868;
        FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
        local_150 = puVar9;
        puStack_138 = puVar22;
        if (puVar22 == (undefined *)0x0) {
          FUN_1000fb4c4(&local_150,&DAT_100fae668,&DAT_100c2e4a0);
          FUN_10016fcc4(&local_120,0x7475626972747461,0xea00000000007365);
          FUN_1000fb4c4(&local_120,&DAT_100fae668,&DAT_100c2e4a0);
        }
        else {
          FUN_100011080(&local_150,&local_120);
          puVar22 = puVar12;
          _swift_isUniquelyReferenced_nonNull_native(puVar12);
          local_150 = puVar12;
          FUN_10016fe74(&local_120,0x7475626972747461,0xea00000000007365,puVar22);
          local_158 = local_150;
        }
      }
      puVar1 = (undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::traceId);
      _swift_beginAccess(puVar1,&local_1f0,0,0);
      uVar21 = puVar1[1];
      if (uVar21 != 0) {
        local_150 = (undefined *)*puVar1;
        puStack_138 = puVar7;
        uStack_148 = uVar21;
        FUN_100011080(&local_150,&local_120);
        _swift_bridgeObjectRetain(uVar21);
        puVar22 = local_158;
        puVar9 = local_158;
        _swift_isUniquelyReferenced_nonNull_native(local_158);
        local_150 = puVar22;
        FUN_10016fe74(&local_120,0x64496563617274,&DAT_e700000000000000,puVar9);
        local_158 = local_150;
      }
      puVar1 = (undefined8 *)(param_1 + _TtC7PostHog16PostHogLogRecord::spanId);
      _swift_beginAccess(puVar1,auStack_170,0,0);
      uVar21 = puVar1[1];
      if (uVar21 != 0) {
        local_150 = (undefined *)*puVar1;
        puStack_138 = puVar7;
        uStack_148 = uVar21;
        FUN_100011080(&local_150,&local_120);
        _swift_bridgeObjectRetain(uVar21);
        puVar22 = local_158;
        puVar7 = local_158;
        _swift_isUniquelyReferenced_nonNull_native(local_158);
        local_150 = puVar22;
        FUN_10016fe74(&local_120,0x64496e617073,&DAT_e600000000000000,puVar7);
        local_158 = local_150;
      }
      lVar8 = _TtC7PostHog16PostHogLogRecord::traceFlags;
      _swift_beginAccess(param_1 + _TtC7PostHog16PostHogLogRecord::traceFlags,auStack_188,0,0);
      if (*(ID *)(param_1 + lVar8) == 0) {
        _swift_bridgeObjectRelease(puVar6);
        local_150 = local_158;
      }
      else {
        IVar10 = objc_stub::unsignedIntValue(*(ID *)(param_1 + lVar8));
        local_150 = (undefined *)CONCAT44(local_150._4_4_,(int)IVar10);
        puStack_138 = PTR___type_metadata_for_Swift_UInt32_100eade50;
        FUN_100011080(&local_150,&local_120);
        puVar22 = local_158;
        puVar7 = local_158;
        _swift_isUniquelyReferenced_nonNull_native(local_158);
        local_150 = puVar22;
        FUN_10016fe74(&local_120,0x7367616c66,&DAT_e500000000000000,puVar7);
        _swift_bridgeObjectRelease(puVar6);
      }
      return local_150;
    }
    FUN_100011080(&uStack_110,&local_150);
    FUN_10000cbfc(&local_150,&local_1a8);
    uStack_1e8 = uStack_1a0;
    local_1f0 = local_1a8;
    local_1d8 = lStack_190;
    uStack_1e0 = local_198;
    lVar20 = lVar15;
    if (lStack_190 == 0) {
      FUN_1000fb4c4(&local_1f0,&DAT_100fae668,&DAT_100c2e4a0);
      _swift_bridgeObjectRetain(puVar6);
      uVar11 = uVar4;
      FUN_100071370();
      _swift_bridgeObjectRelease(puVar6);
      if ((uVar11 & 1) == 0) {
        FUN_100004594(&local_150);
        _swift_bridgeObjectRelease(uVar4);
        uStack_1c8 = 0;
        local_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
      }
      else {
        puVar7 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        local_1f0 = puVar6;
        if ((int)puVar7 == 0) {
          FUN_10017057c();
        }
        puVar6 = local_1f0;
        _swift_bridgeObjectRelease
                  (*(undefined8 *)(*(long *)(local_1f0 + 0x30) + (long)puVar22 * 0x10 + 8));
        FUN_100011080(*(long *)(puVar6 + 0x38) + (long)puVar22 * 0x20,&local_1d0);
        FUN_1000d9d9c(puVar22,puVar6);
        _swift_bridgeObjectRelease(uVar4);
        FUN_100004594(&local_150);
      }
      FUN_1000fb4c4(&local_1d0,&DAT_100fae668,&DAT_100c2e4a0);
      goto LAB_1001116f0;
    }
    FUN_100011080(&local_1f0,&local_1d0);
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar9 = puVar22;
    uVar11 = uVar4;
    local_1f0 = puVar6;
    FUN_100071370();
    uVar16 = (ulong)~(uint)uVar11 & 1;
    lVar19 = *(long *)(puVar6 + 0x10) + uVar16;
    if (SCARRY8(*(long *)(puVar6 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100111f9c);
      (*pcVar5)();
    }
    if (*(long *)(puVar6 + 0x18) < lVar19) {
      FUN_100170ddc(lVar19,puVar7);
      puVar9 = puVar22;
      uVar16 = uVar4;
      FUN_100071370();
      if (((uint)uVar11 & 1) != ((uint)uVar16 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100111fb0);
        (*pcVar5)();
      }
LAB_1001118d4:
      if ((uVar11 & 1) == 0) goto LAB_1001118dc;
LAB_1001116c4:
      puVar6 = local_1f0;
      lVar19 = *(long *)(local_1f0 + 0x38) + (long)puVar9 * 0x20;
      FUN_100004594(lVar19);
      FUN_100011080(&local_1d0,lVar19);
      _swift_bridgeObjectRelease(uVar4);
      FUN_100004594(&local_150);
    }
    else {
      if (((ulong)puVar7 & 1) != 0) goto LAB_1001118d4;
      FUN_10017057c();
      if ((uVar11 & 1) != 0) goto LAB_1001116c4;
LAB_1001118dc:
      puVar6 = local_1f0;
      *(ulong *)(local_1f0 + ((ulong)puVar9 >> 6) * 8 + 0x40) =
           *(ulong *)(local_1f0 + ((ulong)puVar9 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar9 & 0x3f);
      puVar1 = (undefined8 *)(*(long *)(local_1f0 + 0x30) + (long)puVar9 * 0x10);
      *puVar1 = puVar22;
      puVar1[1] = uVar4;
      FUN_100011080(&local_1d0,*(long *)(local_1f0 + 0x38) + (long)puVar9 * 0x20);
      FUN_100004594(&local_150);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100111fa0);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
    }
  } while( true );
}



/* Address: 0x100111fe4 | FUN_100111fe4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined *
FUN_100111fe4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_1f8 [184];
  undefined1 auStack_140 [208];
  undefined *local_70;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar14 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar14 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10010f9b0(0,uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001124b0);
      (*pcVar3)();
    }
    uVar15 = 0;
    do {
      puVar13 = local_70;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(param_1 + uVar15 * 8 + 0x20);
      }
      else {
        uVar4 = uVar15;
        FUN_10010f104(uVar15,param_1);
      }
      FUN_1001112f0();
      uVar2 = *(ulong *)(puVar13 + 0x10);
      local_70 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar2) {
        FUN_10010f9b0(1 < *(ulong *)(puVar13 + 0x18),uVar2 + 1,1);
      }
      uVar15 = uVar15 + 1;
      *(ulong *)(local_70 + 0x10) = uVar2 + 1;
      *(ulong *)(local_70 + uVar2 * 8 + 0x20) = uVar4;
      puVar13 = local_70;
    } while (uVar14 != uVar15);
  }
  puVar5 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  puVar6 = puVar5;
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0x656372756f736572;
  *(undefined8 *)(puVar6 + 0x28) = 0xec00000073676f4c;
  puVar7 = &DAT_100faf620;
  FUN_1000f7830(&DAT_100faf620,&DAT_100c2e3b0);
  puVar8 = puVar7;
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  puVar9 = puVar5;
  _swift_initStackObject(puVar5,auStack_140);
  *(undefined8 *)(puVar9 + 0x18) = 4;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  *(undefined8 *)(puVar9 + 0x20) = 0x656372756f736572;
  *(undefined1 **)(puVar9 + 0x28) = &DAT_e800000000000000;
  puVar10 = &DAT_100fafa70;
  FUN_1000f7830(&DAT_100fafa70,&DAT_100c2e6d8);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined8 *)(puVar10 + 0x20) = 0x7475626972747461;
  *(undefined8 *)(puVar10 + 0x28) = 0xea00000000007365;
  FUN_100110e80();
  *(undefined8 *)(puVar10 + 0x30) = param_2;
  puVar11 = puVar10;
  FUN_1000f87d0();
  _swift_setDeallocating(puVar10);
  FUN_1000fb4c4(puVar10 + 0x20,&DAT_100fafa78,&DAT_100c2e6e0);
  puVar10 = &DAT_100fafa80;
  FUN_1000f7830(&DAT_100fafa80,&DAT_100c2e6e8);
  *(undefined **)(puVar9 + 0x30) = puVar11;
  *(undefined **)(puVar9 + 0x48) = puVar10;
  *(undefined8 *)(puVar9 + 0x50) = 0x676f4c65706f6373;
  *(undefined8 *)(puVar9 + 0x58) = 0xe900000000000073;
  _swift_allocObject(puVar7,0x28,7);
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  _swift_initStackObject(puVar5,auStack_1f8);
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(undefined8 *)(puVar5 + 0x20) = 0x65706f6373;
  *(undefined1 **)(puVar5 + 0x28) = &DAT_e500000000000000;
  puVar10 = &DAT_100fafa88;
  FUN_1000f7830(&DAT_100fafa88,&DAT_100c2f410);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 4;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  *(undefined8 *)(puVar10 + 0x20) = 0x656d616e;
  *(undefined1 **)(puVar10 + 0x28) = &DAT_e400000000000000;
  *(undefined8 *)(puVar10 + 0x30) = 0x2d676f6874736f70;
  *(undefined8 *)(puVar10 + 0x38) = 0xeb00000000736f69;
  *(undefined8 *)(puVar10 + 0x40) = 0x6e6f6973726576;
  *(undefined1 **)(puVar10 + 0x48) = &DAT_e700000000000000;
  *(undefined8 *)(puVar10 + 0x50) = param_3;
  *(undefined8 *)(puVar10 + 0x58) = param_4;
  _swift_bridgeObjectRetain();
  puVar12 = puVar10;
  FUN_1000f8280();
  _swift_setDeallocating(puVar10);
  puVar11 = &DAT_100fafa90;
  FUN_1000f7830(&DAT_100fafa90,&DAT_100c2e6f0);
  _swift_arrayDestroy(puVar10 + 0x20,2,puVar11);
  puVar10 = &DAT_100fafa98;
  FUN_1000f7830(&DAT_100fafa98,&DAT_100c2e850);
  *(undefined **)(puVar5 + 0x30) = puVar12;
  *(undefined **)(puVar5 + 0x48) = puVar10;
  *(undefined8 *)(puVar5 + 0x50) = 0x726f636552676f6c;
  *(undefined8 *)(puVar5 + 0x58) = 0xea00000000007364;
  puVar10 = &DAT_100fae868;
  FUN_1000f7830(&DAT_100fae868,&DAT_100c2e2f0);
  *(undefined **)(puVar5 + 0x78) = puVar10;
  *(undefined **)(puVar5 + 0x60) = puVar13;
  puVar11 = puVar5;
  FUN_1000f8154();
  _swift_setDeallocating(puVar5);
  puVar13 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(puVar5 + 0x20,2,puVar13);
  *(undefined **)(puVar7 + 0x20) = puVar11;
  *(undefined **)(puVar9 + 0x78) = puVar10;
  *(undefined **)(puVar9 + 0x60) = puVar7;
  puVar5 = puVar9;
  FUN_1000f8154();
  _swift_setDeallocating(puVar9);
  _swift_arrayDestroy(puVar9 + 0x20,2,puVar13);
  *(undefined **)(puVar8 + 0x20) = puVar5;
  *(undefined **)(puVar6 + 0x48) = puVar10;
  *(undefined **)(puVar6 + 0x30) = puVar8;
  puVar13 = puVar6;
  FUN_1000f8154(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fae490,&DAT_100c2de60);
  return puVar13;
}



/* Address: 0x1001124b0 | FUN_1001124b0 */

void FUN_1001124b0(ulong *param_1)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong uVar4;
  ulong minimumCapacity;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100129ba8();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_50 = uVar3 + 0x20;
  uStack_48 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,PTR___type_metadata_for_Swift_String_100eac208);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var2.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1001125ac(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    FUN_1001129c0(0,uVar4,1,&local_50);
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x1001125ac | FUN_1001125ac */

void FUN_1001125ac(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x21;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar25 = param_3[1];
  if (0 < lVar25) {
    lVar15 = 0;
    do {
      lVar24 = lVar15 + 1;
      if (lVar24 < lVar25) {
        lVar21 = *param_3;
        puVar1 = (undefined8 *)(lVar21 + lVar24 * 0x10);
        _Var12.unknown = (undefined *)*puVar1;
        _Var13.unknown = (undefined *)puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + lVar15 * 0x10);
        if (_Var12.unknown == (undefined *)*puVar1 && _Var13.unknown == (undefined *)puVar1[1]) {
          bVar7 = false;
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var12,_Var13,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        }
        lVar18 = lVar15 + 2;
        lVar24 = lVar18;
        if (lVar18 < lVar25) {
          plVar19 = puVar1 + 3;
          do {
            _Var12.unknown = (undefined *)plVar19[2];
            if ((undefined *)plVar19[1] == (undefined *)plVar19[-1] &&
                _Var12.unknown == (undefined *)*plVar19) {
              if (bVar7 != false) goto LAB_1001126a4;
            }
            else {
              bVar8 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar19[1],_Var12,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar19[-1]);
              lVar24 = lVar18;
              if (bVar7 != bVar8) break;
            }
            lVar18 = lVar18 + 1;
            plVar19 = plVar19 + 2;
            lVar24 = lVar25;
          } while (lVar25 != lVar18);
        }
        lVar18 = lVar24;
        if (bVar7 != false) {
LAB_1001126a4:
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100112994);
            (*pcVar6)();
          }
          lVar24 = lVar18;
          if (lVar15 < lVar18) {
            lVar14 = lVar18 << 4;
            lVar16 = lVar15 << 4;
            lVar25 = lVar15;
            do {
              lVar18 = lVar18 + -1;
              if (lVar25 != lVar18) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001129b4);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar21 + lVar16);
                lVar2 = lVar21 + lVar14;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar26;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar25 = lVar25 + 1;
              lVar14 = lVar14 + -0x10;
              lVar16 = lVar16 + 0x10;
            } while (lVar25 < lVar18);
          }
        }
      }
      lVar25 = param_3[1];
      lVar21 = lVar24;
      if (lVar24 < lVar25) {
        if (SBORROW8(lVar24,lVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100112990);
          (*pcVar6)();
        }
        if (lVar24 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100112998);
            (*pcVar6)();
          }
          lVar18 = lVar15 + param_4;
          if (lVar25 <= lVar15 + param_4) {
            lVar18 = lVar25;
          }
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10011299c);
            (*pcVar6)();
          }
          if (lVar24 != lVar18) {
            lVar16 = *param_3;
            plVar19 = (long *)(lVar16 + lVar24 * 0x10);
            lVar25 = lVar15 - lVar24;
            do {
              puVar1 = (undefined8 *)(lVar16 + lVar24 * 0x10);
              _Var12.unknown = (undefined *)*puVar1;
              _Var13.unknown = (undefined *)puVar1[1];
              plVar20 = plVar19;
              lVar21 = lVar25;
              do {
                puVar11 = (undefined *)plVar20[-2];
                if ((_Var12.unknown == puVar11 && _Var13.unknown == (undefined *)plVar20[-1]) ||
                   (bVar7 = Swift::_stringCompareWithSmolCheck
                                      (_Var12,_Var13,(_StringComparisonResult)(__int8)puVar11),
                   !bVar7)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001129a0);
                  (*pcVar6)();
                }
                _Var12.unknown = (undefined *)*plVar20;
                _Var13.unknown = (undefined *)plVar20[1];
                plVar20[1] = plVar20[-1];
                *plVar20 = plVar20[-2];
                plVar20[-1] = (long)_Var13.unknown;
                plVar20 = plVar20 + -2;
                *plVar20 = (long)_Var12.unknown;
                bVar7 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar7);
              lVar24 = lVar24 + 1;
              plVar19 = plVar19 + 2;
              lVar25 = lVar25 + -1;
              lVar21 = lVar18;
            } while (lVar24 != lVar18);
          }
        }
      }
      puVar11 = local_58;
      if (lVar21 < lVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100112980);
        (*pcVar6)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_10012934c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar23 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar23) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_10012934c(puVar11,uVar23 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x28) = lVar21;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001129b8);
        (*pcVar6)();
      }
      FUN_100112a8c(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_100112950;
      lVar25 = param_3[1];
      lVar15 = lVar21;
    } while (lVar21 < lVar25);
  }
  puVar11 = local_58;
  lVar25 = *param_1;
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1001129c0);
    (*pcVar6)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100129b50();
  }
  puVar22 = (ulong *)(puVar11 + 0x10);
  uVar23 = *puVar22;
  while( true ) {
    if (uVar23 < 2) {
      _swift_bridgeObjectRelease(puVar11);
      return;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1001129bc);
      (*pcVar6)();
    }
    plVar19 = (long *)(puVar11 + uVar23 * 0x10);
    lVar24 = *plVar19;
    puVar3 = puVar22 + uVar23 * 2;
    uVar17 = puVar3[1];
    FUN_100112cf4(lVar15 + lVar24 * 0x10,lVar15 + *puVar3 * 0x10,lVar15 + uVar17 * 0x10,lVar25);
    if (unaff_x21 != 0) break;
    if ((long)uVar17 < lVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100112984);
      (*pcVar6)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100112988);
      (*pcVar6)();
    }
    *plVar19 = lVar24;
    plVar19[1] = uVar17;
    uVar17 = *puVar22;
    lVar15 = uVar17 - uVar23;
    if (uVar17 < uVar23) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10011298c);
      (*pcVar6)();
    }
    uVar23 = uVar17 - 1;
    _memmove(puVar3,puVar3 + 2,lVar15 * 0x10);
    *puVar22 = uVar23;
  }
LAB_100112950:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x1001129c0 | FUN_1001129c0 */

void FUN_1001129c0(long param_1,long param_2,long param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar8 = (long *)(lVar7 + param_3 * 0x10);
    param_1 = param_1 - param_3;
    do {
      puVar1 = (undefined8 *)(lVar7 + param_3 * 0x10);
      _Var5.unknown = (undefined *)*puVar1;
      _Var6.unknown = (undefined *)puVar1[1];
      lVar9 = param_1;
      plVar10 = plVar8;
      do {
        puVar2 = (undefined *)plVar10[-2];
        if ((_Var5.unknown == puVar2 && _Var6.unknown == (undefined *)plVar10[-1]) ||
           (bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var5,_Var6,(_StringComparisonResult)(__int8)puVar2), !bVar4)) break;
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100112a8c);
          (*pcVar3)();
        }
        _Var5.unknown = (undefined *)*plVar10;
        _Var6.unknown = (undefined *)plVar10[1];
        plVar10[1] = plVar10[-1];
        *plVar10 = plVar10[-2];
        plVar10[-1] = (long)_Var6.unknown;
        plVar10 = plVar10 + -2;
        *plVar10 = (long)_Var5.unknown;
        bVar4 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar4);
      param_3 = param_3 + 1;
      plVar8 = plVar8 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x100112a8c | FUN_100112a8c */

undefined8 FUN_100112a8c(ulong *param_1,undefined8 param_2,long *param_3)

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
      FUN_100129b50();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_100112b60;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cdc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100112bc4:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112ccc);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cd4);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cb4);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cb8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cc0);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cc8);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_100112b60:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cbc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cc4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cd0);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cd8);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100112bc4;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100112ce0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100112ca8);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cf4);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100112cf4(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cac);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100129b50();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100112cb0);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100129a18(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x100112cf4 | FUN_100112cf4 */

undefined8
FUN_100112cf4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar3 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 4;
  lVar12 = (long)param_3 - (long)param_2;
  lVar5 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar5 = lVar12;
  }
  lVar5 = lVar5 >> 4;
  if (lVar3 < lVar5) {
    if (((param_4 < param_1) || (param_1 + lVar3 * 2 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar3 << 4);
    }
    puVar9 = param_4 + lVar3 * 2;
    puVar6 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (((undefined *)*param_2 == (undefined *)*param_4 &&
             (undefined *)param_2[1] == (undefined *)param_4[1]) ||
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*param_2,(undefined *)param_2[1],
                               (_StringComparisonResult)(__int8)(undefined *)*param_4), !bVar2)) {
          puVar7 = param_4 + 2;
          puVar8 = param_4;
        }
        else {
          puVar7 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 2;
        }
        param_4 = puVar7;
        if (puVar6 != puVar8) {
          uVar13 = *puVar8;
          puVar6[1] = puVar8[1];
          *puVar6 = uVar13;
        }
        puVar6 = puVar6 + 2;
      } while (param_4 < puVar9);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar5 * 2 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar5 << 4);
    }
    puVar8 = param_4 + lVar5 * 2;
    puVar6 = param_2;
    puVar9 = puVar8;
    if ((param_1 < param_2) && (0xf < lVar12)) {
      do {
        puVar11 = param_2 + -2;
        puVar7 = param_3;
        while( true ) {
          param_3 = puVar7 + -2;
          puVar9 = puVar8 + -2;
          if (((undefined *)*puVar9 != (undefined *)param_2[-2] ||
               (undefined *)puVar8[-1] != (undefined *)param_2[-1]) &&
             (bVar2 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar9,(undefined *)puVar8[-1],
                                 (_StringComparisonResult)(__int8)(undefined *)param_2[-2]), bVar2))
          break;
          if (puVar7 != puVar8) {
            uVar13 = *puVar9;
            puVar7[-1] = puVar8[-1];
            *param_3 = uVar13;
          }
          puVar6 = param_2;
          puVar8 = puVar9;
          puVar7 = param_3;
          if (puVar9 <= param_4) goto LAB_100112ed4;
        }
        if (puVar7 != param_2) {
          uVar13 = *puVar11;
          puVar7[-1] = param_2[-1];
          *param_3 = uVar13;
        }
        puVar6 = puVar11;
        puVar9 = puVar8;
      } while ((param_1 < puVar11) && (param_2 = puVar11, param_4 < puVar8));
    }
  }
LAB_100112ed4:
  uVar4 = (long)puVar9 - (long)param_4;
  uVar1 = uVar4 + 0xf;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((puVar6 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar6)) {
    _memmove(puVar6,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Address: 0x100112f30 | FUN_100112f30 */

undefined * FUN_100112f30(double param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  
  if ((((ulong)param_1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) == 0) {
    puVar3 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    if (((ulong)param_1 & 0xfffffffffffff) == 0) {
      _swift_initStackObject();
      puVar5 = (undefined8 *)(puVar3 + 0x20);
      *puVar5 = 0x6156676e69727473;
      uVar1 = 0x7974696e69666e49;
      if (param_1 <= 0.0) {
        uVar1 = 0x74696e69666e492d;
      }
      *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      puVar2 = &DAT_e800000000000000;
      if (param_1 <= 0.0) {
        puVar2 = (undefined1 *)0xe900000000000079;
      }
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined8 *)(puVar3 + 0x28) = 0xeb0000000065756c;
      *(undefined8 *)(puVar3 + 0x30) = uVar1;
      *(undefined1 **)(puVar3 + 0x38) = puVar2;
    }
    else {
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      puVar5 = (undefined8 *)(puVar3 + 0x20);
      *puVar5 = 0x6156676e69727473;
      *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(puVar3 + 0x28) = 0xeb0000000065756c;
      *(undefined8 *)(puVar3 + 0x30) = 0x4e614e;
      *(undefined8 *)(puVar3 + 0x38) = 0xe300000000000000;
    }
  }
  else {
    puVar3 = &DAT_100fae678;
    FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
    _swift_initStackObject();
    puVar5 = (undefined8 *)(puVar3 + 0x20);
    *puVar5 = 0x6156656c62756f64;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x28) = 0xeb0000000065756c;
    *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_Double_100eac5d0;
    *(double *)(puVar3 + 0x30) = param_1;
  }
  puVar4 = puVar3;
  FUN_1000f8154();
  _swift_setDeallocating(puVar3);
  FUN_1000fb4c4(puVar5,&DAT_100fae490,&DAT_100c2de60);
  return puVar4;
}



/* Address: 0x1001130dc | FUN_1001130dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001130dc(undefined8 param_1)

{
  ID self;
  undefined8 uVar1;
  float *pfVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  String SVar6;
  float local_68;
  undefined4 uStack_64;
  ID local_60 [4];
  
  FUN_10000cbfc(param_1,local_60);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100faeef0,&PTR__OBJC_CLASS___NSNumber_100f8d750);
  puVar4 = PTR___type_metadata_for_Any_100eae0c0;
  pfVar2 = &local_68;
  _swift_dynamicCast(pfVar2,local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar1,6);
  if ((int)pfVar2 == 0) {
    FUN_10000cbfc(param_1,local_60);
    pfVar2 = &local_68;
    _swift_dynamicCast(pfVar2,local_60,puVar4 + 8,PTR___type_metadata_for_Swift_Double_100eac5d0,6);
    if ((int)pfVar2 == 0) {
      FUN_10000cbfc(param_1,local_60);
      pfVar2 = &local_68;
      _swift_dynamicCast(pfVar2,local_60,puVar4 + 8,PTR___type_metadata_for_Swift_Float_100eac620,6)
      ;
      if ((int)pfVar2 != 0) {
        FUN_100112f30((double)local_68);
      }
    }
    else {
      FUN_100112f30(CONCAT44(uStack_64,local_68));
    }
  }
  else {
    self = CONCAT44(uStack_64,local_68);
    IVar3 = self;
    _CFNumberGetType();
    if (IVar3 < 0x11 && (1L << (IVar3 & 0x3f) & 0x13060U) != 0) {
      objc_stub::doubleValue(self);
      FUN_100112f30();
    }
    else {
      FUN_10000cbfc(param_1,local_60);
      pfVar2 = &local_68;
      _swift_dynamicCast(pfVar2,local_60,puVar4 + 8,PTR___type_metadata_for_Swift_Int_100eac6f8,6);
      if ((int)pfVar2 == 0) {
        FUN_10000cbfc(param_1,local_60);
        pfVar2 = &local_68;
        _swift_dynamicCast(pfVar2,local_60,puVar4 + 8,PTR___type_metadata_for_Swift_Int64_100eadc00,
                           6);
        if ((int)pfVar2 == 0) {
          puVar4 = &DAT_100fae678;
          FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
          _swift_initStackObject();
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          puVar5 = (undefined8 *)(puVar4 + 0x20);
          *puVar5 = 0x65756c6156746e69;
          *(undefined1 **)(puVar4 + 0x28) = &DAT_e800000000000000;
          local_60[0] = objc_stub::longLongValue(self);
        }
        else {
          puVar4 = &DAT_100fae678;
          FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
          _swift_initStackObject();
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          puVar5 = (undefined8 *)(puVar4 + 0x20);
          *puVar5 = 0x65756c6156746e69;
          *(undefined1 **)(puVar4 + 0x28) = &DAT_e800000000000000;
          local_60[0] = CONCAT44(uStack_64,local_68);
        }
      }
      else {
        puVar4 = &DAT_100fae678;
        FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        puVar5 = (undefined8 *)(puVar4 + 0x20);
        *puVar5 = 0x65756c6156746e69;
        *(undefined1 **)(puVar4 + 0x28) = &DAT_e800000000000000;
        local_60[0] = CONCAT44(uStack_64,local_68);
      }
      SVar6 = Swift::CustomStringConvertible::get_description();
      *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(String *)(puVar4 + 0x30) = SVar6;
      FUN_1000f8154(puVar4);
      _swift_setDeallocating(puVar4);
      FUN_1000fb4c4(puVar5,&DAT_100fae490,&DAT_100c2de60);
    }
  }
  return;
}



/* Address: 0x1001133c0 | FUN_1001133c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *** FUN_1001133c0(long param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  ulong ***pppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 **ppuVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong **local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong **local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined8 ***local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong **local_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  pppuVar5 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  lVar17 = _TtC7PostHog17PostHogLogsConfig::resourceAttributes;
  _swift_beginAccess(param_1 + _TtC7PostHog17PostHogLogsConfig::resourceAttributes,auStack_80,0,0);
  lVar17 = *(long *)(param_1 + lVar17);
  uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(lVar17 + 0x40);
  uVar15 = uVar15 + 0x3f >> 6;
  _swift_bridgeObjectRetain(lVar17);
  lVar20 = 0;
LAB_10011348c:
  do {
    if (uVar18 == 0) {
      uVar18 = uVar15;
      if ((long)uVar15 <= lVar20 + 1) {
        uVar18 = lVar20 + 1;
      }
      lVar16 = uVar18 - 1;
      lVar19 = lVar20;
      do {
        lVar20 = lVar19 + 1;
        if (SCARRY8(lVar19,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100113a90);
          (*pcVar4)();
        }
        if ((long)uVar15 <= lVar20) {
          uVar18 = 0;
          puStack_c8 = (undefined *)0x0;
          local_d0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          puStack_d8 = (undefined1 *)0x0;
          local_e0 = (undefined8 ***)0x0;
          goto LAB_100113504;
        }
        uVar18 = ((ulong *)(lVar17 + 0x40))[lVar20];
        lVar19 = lVar19 + 1;
      } while (uVar18 == 0);
    }
    uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
    uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar20 << 6;
    puVar1 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar13 * 0x10);
    local_e0 = (undefined8 ***)*puVar1;
    puVar11 = (undefined8 *)puVar1[1];
    puStack_d8 = (undefined1 *)puVar11;
    FUN_10000cbfc(*(long *)(lVar17 + 0x38) + uVar13 * 0x20,&local_d0);
    _swift_bridgeObjectRetain(puVar11);
    lVar16 = lVar20;
LAB_100113504:
    puVar3 = puStack_d8;
    pppuVar8 = local_e0;
    uStack_a8 = (ulong)puStack_d8;
    local_b0 = (ulong **)local_e0;
    uStack_98 = puStack_c8;
    uStack_a0 = local_d0;
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    if ((undefined8 *)puStack_d8 == (undefined8 *)0x0) {
      _swift_release(lVar17);
      puVar11 = (undefined8 *)(param_1 + _TtC7PostHog17PostHogLogsConfig::serviceName);
      _swift_beginAccess(puVar11,&local_130,0,0);
      puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
      local_e0 = (undefined8 ***)*puVar11;
      uVar18 = puVar11[1];
      puStack_c8 = PTR___type_metadata_for_Swift_String_100eac208;
      puStack_d8 = (undefined1 *)uVar18;
      FUN_100011080(&local_e0,&local_b0);
      _swift_bridgeObjectRetain(uVar18);
      pppuVar8 = pppuVar5;
      _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
      local_e0 = pppuVar5;
      FUN_10016fe74(&local_b0,0x2e65636976726573,0xec000000656d616e,pppuVar8);
      pppuVar5 = local_e0;
      puVar1 = (ulong *)(param_1 + _TtC7PostHog17PostHogLogsConfig::serviceVersion);
      _swift_beginAccess(puVar1,&local_150,0,0);
      uVar15 = puVar1[1];
      uVar18 = *puVar1 & 0xffffffffffff;
      if ((uVar15 & 0x2000000000000000) != 0) {
        uVar18 = uVar15 >> 0x38 & 0xf;
      }
      if (uVar18 != 0) {
        puStack_c8 = puVar2;
        local_e0 = (undefined8 ***)*puVar1;
        puStack_d8 = (undefined1 *)uVar15;
        FUN_100011080(&local_e0,&local_b0);
        _swift_bridgeObjectRetain(uVar15);
        pppuVar8 = pppuVar5;
        _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
        local_e0 = pppuVar5;
        FUN_10016fe74(&local_b0,0x2e65636976726573,0xef6e6f6973726576,pppuVar8);
        pppuVar5 = local_e0;
      }
      puVar11 = (undefined8 *)(param_1 + _TtC7PostHog17PostHogLogsConfig::environment);
      _swift_beginAccess(puVar11,&local_170,0,0);
      uVar18 = puVar11[1];
      if (uVar18 != 0) {
        local_e0 = (undefined8 ***)*puVar11;
        puStack_c8 = puVar2;
        puStack_d8 = (undefined1 *)uVar18;
        FUN_100011080(&local_e0,&local_b0);
        _swift_bridgeObjectRetain(uVar18);
        pppuVar8 = pppuVar5;
        _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
        local_e0 = pppuVar5;
        FUN_10016fe74(&local_b0,0xd000000000000016,0x8000000100d91b20,pppuVar8);
        pppuVar5 = local_e0;
      }
      _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_f8,0,0);
      uVar12 = ram0x000100fb15b0;
      local_e0 = (undefined8 ***)s_posthog_ios_100fb15a8._0_8_;
      puStack_d8 = (undefined1 *)ram0x000100fb15b0;
      puStack_c8 = puVar2;
      FUN_100011080(&local_e0,&local_b0);
      _swift_bridgeObjectRetain(uVar12);
      pppuVar8 = pppuVar5;
      _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
      local_e0 = pppuVar5;
      FUN_10016fe74(&local_b0,0xd000000000000012,0x8000000100d91ae0,pppuVar8);
      pppuVar5 = local_e0;
      _swift_beginAccess(s_3_69_0_100fb1598,auStack_110,0,0);
      uVar12 = DAT_100fb15a0;
      local_e0 = _s_3_69_0_100fb1598;
      puStack_d8 = (undefined1 *)DAT_100fb15a0;
      puStack_c8 = puVar2;
      FUN_100011080(&local_e0,&local_b0);
      _swift_bridgeObjectRetain(uVar12);
      pppuVar8 = pppuVar5;
      _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
      local_e0 = pppuVar5;
      FUN_10016fe74(&local_b0,0xd000000000000015,0x8000000100d91b00,pppuVar8);
      pppuVar5 = local_e0;
      local_e0 = (undefined8 ***)0x534f63616d;
      puStack_d8 = &DAT_e500000000000000;
      puStack_c8 = puVar2;
      FUN_100011080(&local_e0,&local_b0);
      pppuVar8 = pppuVar5;
      _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
      uVar12 = 0x656d616e2e736f;
      pppuVar9 = &local_b0;
      local_e0 = pppuVar5;
      FUN_10016fe74(pppuVar9,0x656d616e2e736f,&DAT_e700000000000000,pppuVar8);
      pppuVar5 = local_e0;
      FUN_10016c6c8();
      puStack_c8 = puVar2;
      local_e0 = pppuVar9;
      puStack_d8 = (undefined1 *)uVar12;
      FUN_100011080(&local_e0,&local_b0);
      pppuVar8 = pppuVar5;
      _swift_isUniquelyReferenced_nonNull_native(pppuVar5);
      local_e0 = pppuVar5;
      FUN_10016fe74(&local_b0,0x69737265762e736f,0xea00000000006e6f,pppuVar8);
      return local_e0;
    }
    FUN_100011080(&uStack_a0,&local_e0);
    FUN_10000cbfc(&local_e0,&local_130);
    uStack_168 = uStack_128;
    local_170 = local_130;
    local_158 = lStack_118;
    uStack_160 = uStack_120;
    lVar20 = lVar16;
    if (lStack_118 == 0) {
      FUN_1000fb4c4(&local_170,&DAT_100fae668,&DAT_100c2e4a0);
      _swift_bridgeObjectRetain(pppuVar5);
      puVar11 = (undefined8 *)puVar3;
      FUN_100071370();
      _swift_bridgeObjectRelease(pppuVar5);
      if (((ulong)puVar11 & 1) == 0) {
        FUN_100004594(&local_e0);
        _swift_bridgeObjectRelease(puVar3);
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        uStack_140 = 0;
      }
      else {
        pppuVar7 = pppuVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        local_170 = (ulong **)pppuVar5;
        if ((int)pppuVar7 == 0) {
          FUN_10017057c();
        }
        pppuVar5 = (undefined8 ***)local_170;
        _swift_bridgeObjectRelease((undefined8 *)local_170[6][(long)pppuVar8 * 2 + 1]);
        FUN_100011080(pppuVar5[7] + (long)pppuVar8 * 4,&local_150);
        FUN_1000d9d9c(pppuVar8,pppuVar5);
        _swift_bridgeObjectRelease(puVar3);
        FUN_100004594(&local_e0);
      }
      FUN_1000fb4c4(&local_150,&DAT_100fae668,&DAT_100c2e4a0);
      goto LAB_10011348c;
    }
    FUN_100011080(&local_170,&local_150);
    pppuVar7 = pppuVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    pppuVar6 = pppuVar8;
    puVar11 = (undefined8 *)puVar3;
    local_170 = (ulong **)pppuVar5;
    FUN_100071370();
    uVar13 = (ulong)~(uint)puVar11 & 1;
    lVar19 = (long)pppuVar5[2] + uVar13;
    if (SCARRY8((long)pppuVar5[2],uVar13)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100113a94);
      (*pcVar4)();
    }
    if ((long)pppuVar5[3] < lVar19) {
      FUN_100170ddc(lVar19,pppuVar7);
      pppuVar6 = pppuVar8;
      puVar10 = (undefined8 *)puVar3;
      FUN_100071370();
      if (((uint)puVar11 & 1) != ((uint)puVar10 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100113aa8);
        (*pcVar4)();
      }
LAB_100113660:
      if (((ulong)puVar11 & 1) == 0) goto LAB_100113668;
LAB_100113460:
      pppuVar5 = (undefined8 ***)local_170;
      ppuVar14 = (undefined8 **)local_170[7];
      FUN_100004594(ppuVar14 + (long)pppuVar6 * 4);
      FUN_100011080(&local_150,ppuVar14 + (long)pppuVar6 * 4);
      _swift_bridgeObjectRelease(puVar3);
      FUN_100004594(&local_e0);
    }
    else {
      if (((ulong)pppuVar7 & 1) != 0) goto LAB_100113660;
      FUN_10017057c();
      if (((ulong)puVar11 & 1) != 0) goto LAB_100113460;
LAB_100113668:
      pppuVar5 = (undefined8 ***)local_170;
      local_170[((ulong)pppuVar6 >> 6) + 8] =
           (ulong *)((ulong)local_170[((ulong)pppuVar6 >> 6) + 8] | 1L << ((ulong)pppuVar6 & 0x3f));
      ppuVar14 = (undefined8 **)local_170[6];
      ppuVar14[(long)pppuVar6 * 2] = pppuVar8;
      (ppuVar14 + (long)pppuVar6 * 2)[1] = (undefined8 *)puVar3;
      FUN_100011080(&local_150,local_170[7] + (long)pppuVar6 * 4);
      FUN_100004594(&local_e0);
      if (SCARRY8((long)pppuVar5[2],1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100113a98);
        (*pcVar4)();
      }
      pppuVar5[2] = (undefined8 **)((long)pppuVar5[2] + 1);
    }
  } while( true );
}



/* Address: 0x100113aa8 | PostHogEvent::event */

/* Function Stack Size: 0x10 bytes */

ID PostHogEvent::event(ID param_1,SEL param_2)

{
  FUN_10010dc50(param_1,param_2,&event);
  return param_1;
}



/* Address: 0x100113ab4 | FUN_100113ab4 */

void FUN_100113ab4(void)

{
  FUN_10010b53c(&PostHogEvent::event);
  return;
}



/* Address: 0x100113ac0 | PostHogEvent::setEvent: */

/* Function Stack Size: 0x18 bytes */

void PostHogEvent::setEvent_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010dccc();
  return;
}



/* Address: 0x100113acc | FUN_100113acc */

void FUN_100113acc(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&PostHogEvent::event);
  return;
}



/* Address: 0x100113ad8 | FUN_100113ad8 */

undefined1  [16] FUN_100113ad8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogEvent::event;
  _swift_beginAccess(unaff_x20 + PostHogEvent::event,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100113b18 | PostHogEvent::distinctId */

/* Function Stack Size: 0x10 bytes */

ID PostHogEvent::distinctId(ID param_1,SEL param_2)

{
  FUN_10010dc50(param_1,param_2,&distinctId);
  return param_1;
}



/* Address: 0x100113b24 | FUN_100113b24 */

void FUN_100113b24(void)

{
  FUN_10010b53c(&PostHogEvent::distinctId);
  return;
}



/* Address: 0x100113b30 | PostHogEvent::setDistinctId: */

/* Function Stack Size: 0x18 bytes */

void PostHogEvent::setDistinctId_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10010dccc();
  return;
}



/* Address: 0x100113b3c | FUN_100113b3c */

void FUN_100113b3c(undefined8 param_1,undefined8 param_2)

{
  FUN_10010b61c(param_1,param_2,&PostHogEvent::distinctId);
  return;
}



/* Address: 0x100113b48 | FUN_100113b48 */

undefined1  [16] FUN_100113b48(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogEvent::distinctId;
  _swift_beginAccess(unaff_x20 + PostHogEvent::distinctId,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100113b88 | PostHogEvent::properties */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogEvent::properties(ID param_1,SEL param_2)

{
  long lVar1;
  NSDictionary *pNVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = properties;
  _swift_beginAccess(param_1 + properties,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  _swift_bridgeObjectRetain(uVar3);
  pNVar2 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  return (ID)pNVar2;
}



/* Address: 0x100113c04 | FUN_100113c04 */

void FUN_100113c04(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogEvent::properties;
  _swift_beginAccess(unaff_x20 + PostHogEvent::properties,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100113c48 | PostHogEvent::setProperties: */

/* Function Stack Size: 0x18 bytes */

void PostHogEvent::setProperties_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  Dictionary<undefined,undefined> DVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar1 = properties;
  _swift_beginAccess(param_1 + properties,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined **)(param_1 + lVar1) = DVar2.unknown;
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x100113cc8 | FUN_100113cc8 */

void FUN_100113cc8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogEvent::properties;
  _swift_beginAccess(unaff_x20 + PostHogEvent::properties,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x100113d1c | FUN_100113d1c */

undefined1  [16] FUN_100113d1c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogEvent::properties;
  _swift_beginAccess(unaff_x20 + PostHogEvent::properties,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100113d5c | PostHogEvent::timestamp */

/* Function Stack Size: 0x10 bytes */

ID PostHogEvent::timestamp(ID param_1,SEL param_2)

{
  FUN_100113e74(param_1,param_2,PTR_typeMetadataAccessor_100ea7480,&timestamp,
                PTR__bridgeToObjectiveC_100ea7408);
  return param_1;
}



/* Address: 0x100113d78 | FUN_100113d78 */

void FUN_100113d78(void)

{
  FUN_100113f44(&PostHogEvent::timestamp,PTR_typeMetadataAccessor_100ea7480);
  return;
}



/* Address: 0x100113d8c | PostHogEvent::setTimestamp: */

/* Function Stack Size: 0x18 bytes */

void PostHogEvent::setTimestamp_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100113fc8();
  return;
}



/* Address: 0x100113da8 | FUN_100113da8 */

void FUN_100113da8(undefined8 param_1)

{
  long lVar1;
  Date DVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogEvent::timestamp;
  _swift_beginAccess(unaff_x20 + PostHogEvent::timestamp,auStack_48,0x21,0);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x28))(unaff_x20 + lVar1,param_1,DVar2.unknown);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x100113e18 | FUN_100113e18 */

undefined1  [16] FUN_100113e18(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogEvent::timestamp;
  _swift_beginAccess(unaff_x20 + PostHogEvent::timestamp,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100113e58 | PostHogEvent::uuid */

/* Function Stack Size: 0x10 bytes */

ID PostHogEvent::uuid(ID param_1,SEL param_2)

{
  FUN_100113e74(param_1,param_2,PTR_typeMetadataAccessor_100ea7500,&uuid,
                PTR__bridgeToObjectiveC_100ea74d0);
  return param_1;
}



/* Address: 0x100113e74 | FUN_100113e74 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined1 *
FUN_100113e74(long param_1,undefined8 param_2,code *param_3,long *param_4,code *param_5)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  (*param_3)();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  lVar3 = *param_4;
  _swift_beginAccess(param_1 + lVar3,auStack_58,0,0);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x10))(puVar4,param_1 + lVar3,lVar1);
  (*param_5)();
  (**(code **)(lVar5 + 8))(puVar4,lVar1);
  return puVar2;
}



/* Address: 0x100113f30 | FUN_100113f30 */

void FUN_100113f30(void)

{
  FUN_100113f44(&PostHogEvent::uuid,PTR_typeMetadataAccessor_100ea7500);
  return;
}



/* Address: 0x100113f44 | FUN_100113f44 */

void FUN_100113f44(undefined8 param_1,long *param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_48,0,0);
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,unaff_x20 + lVar2,lVar1);
  return;
}



/* Address: 0x100113fac | PostHogEvent::setUuid: */

/* Function Stack Size: 0x18 bytes */

void PostHogEvent::setUuid_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100113fc8();
  return;
}



/* Address: 0x100113fc8 | FUN_100113fc8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_100113fc8(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5,
             long *param_6)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  (*param_4)();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_5)(auStack_70 + -extraout_x8,param_3);
  lVar2 = *param_6;
  _swift_beginAccess(param_1 + lVar2,auStack_68,0x21,0);
  (**(code **)(lVar3 + 0x28))(param_1 + lVar2,auStack_70 + -extraout_x8,lVar1);
  _swift_endAccess(auStack_68);
  return 0;
}



/* Address: 0x100114098 | FUN_100114098 */

void FUN_100114098(undefined8 param_1,long *param_2)

{
  long lVar1;
  UUID UVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogEvent::uuid;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + PostHogEvent::uuid,auStack_48,0,0);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,lVar3 + lVar1,UVar2.unknown);
  return;
}



/* Address: 0x100114104 | FUN_100114104 */

void FUN_100114104(undefined8 param_1,long *param_2)

{
  long lVar1;
  UUID UVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogEvent::uuid;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + PostHogEvent::uuid,auStack_48,0x21,0);
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x18))(lVar3 + lVar1,param_1,UVar2.unknown);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x100114178 | FUN_100114178 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100114178(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  Date DVar5;
  undefined *puVar6;
  undefined *puVar7;
  NSDate *pNVar8;
  UUID UVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  Date DVar13;
  ID self;
  long lVar14;
  String SVar15;
  String SVar16;
  undefined8 *local_250;
  undefined *local_248;
  long local_240;
  undefined *local_238;
  undefined *local_230;
  long lStack_228;
  undefined *local_218;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [304];
  
  local_238 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_240 = *(long *)(local_238 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_240 + 0x40));
  puVar6 = (undefined *)((long)&local_250 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_248 = puVar6;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  local_250 = (undefined8 *)(puVar6 + 0x20);
  *local_250 = 0x746e657665;
  *(undefined8 *)(puVar6 + 0x18) = 10;
  *(undefined8 *)(puVar6 + 0x10) = 5;
  *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogEvent::event);
  _swift_beginAccess(puVar1,auStack_190,0,0);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar2 = puVar1[1];
  *(undefined8 *)(puVar6 + 0x30) = *puVar1;
  *(undefined8 *)(puVar6 + 0x38) = uVar2;
  *(undefined **)(puVar6 + 0x48) = puVar7;
  *(undefined8 *)(puVar6 + 0x50) = 0x74636e6974736964;
  *(undefined8 *)(puVar6 + 0x58) = 0xeb0000000064695f;
  puVar1 = (undefined8 *)(unaff_x20 + PostHogEvent::distinctId);
  _swift_beginAccess(puVar1,auStack_1a8,0,0);
  uVar3 = puVar1[1];
  *(undefined8 *)(puVar6 + 0x60) = *puVar1;
  *(undefined8 *)(puVar6 + 0x68) = uVar3;
  *(undefined **)(puVar6 + 0x78) = puVar7;
  *(undefined8 *)(puVar6 + 0x80) = 0x69747265706f7270;
  *(undefined8 *)(puVar6 + 0x88) = 0xea00000000007365;
  lVar12 = PostHogEvent::properties;
  _swift_beginAccess(unaff_x20 + PostHogEvent::properties,auStack_1c0,0,0);
  DVar13.unknown = *(undefined **)(unaff_x20 + lVar12);
  puVar7 = &DAT_100fae898;
  FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
  *(undefined **)(puVar6 + 0x90) = DVar13.unknown;
  *(undefined **)(puVar6 + 0xa8) = puVar7;
  *(undefined1 **)(puVar6 + 0xb0) = &DAT_6d617473656d6974;
  *(undefined1 **)(puVar6 + 0xb8) = &SUB_e900000000000070;
  lVar12 = PostHogEvent::timestamp;
  _swift_beginAccess(unaff_x20 + PostHogEvent::timestamp,auStack_1d8,0,0);
  (**(code **)(lVar14 + 0x10))(lVar11,unaff_x20 + lVar12,DVar5.unknown);
  lVar12 = DAT_100fb2a00;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain();
  if (lVar12 != -1) {
    DVar13.unknown = (undefined *)&DAT_100fb2a00;
    _swift_once(&DAT_100fb2a00,FUN_10016e594);
  }
  self = *(ID *)(DAT_101057338 + 0x10);
  pNVar8 = Foundation::Date::_bridgeToObjectiveC(DVar13);
  objc_stub::stringFromDate_(self,pNVar8);
  SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  (**(code **)(lVar14 + 8))(lVar11,DVar5.unknown);
  *(String *)(puVar6 + 0xc0) = SVar15;
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar6 + 0xd8) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar6 + 0xe0) = 0x64697575;
  *(undefined1 **)(puVar6 + 0xe8) = &DAT_e400000000000000;
  lVar12 = PostHogEvent::uuid;
  _swift_beginAccess(unaff_x20 + PostHogEvent::uuid,auStack_1f0,0,0);
  puVar4 = local_238;
  lVar11 = local_240;
  puVar10 = local_248;
  UVar9.unknown = local_248;
  (**(code **)(local_240 + 0x10))(local_248,unaff_x20 + lVar12,local_238);
  SVar15 = Foundation::UUID::get_uuidString(UVar9);
  SVar16 = Swift::String::lowercased(SVar15);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  *(undefined **)(puVar6 + 0x108) = puVar7;
  *(String *)(puVar6 + 0xf0) = SVar16;
  (**(code **)(lVar11 + 8))(puVar10,puVar4);
  puVar10 = puVar6;
  FUN_1000f8154();
  _swift_setDeallocating(puVar6);
  puVar6 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(local_250,5,puVar6);
  lVar12 = ((undefined8 *)(unaff_x20 + PostHogEvent::apiKey))[1];
  local_230 = puVar10;
  if (lVar12 != 0) {
    local_230 = *(undefined **)(unaff_x20 + PostHogEvent::apiKey);
    local_218 = puVar7;
    lStack_228 = lVar12;
    FUN_100011080(&local_230,auStack_210);
    _swift_bridgeObjectRetain(lVar12);
    puVar6 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native(puVar10);
    local_230 = puVar10;
    FUN_10016fe74(auStack_210,0x79656b5f697061,&DAT_e700000000000000,puVar6);
  }
  return local_230;
}



/* Address: 0x100114574 | PostHogEvent::init */

/* Function Stack Size: 0x10 bytes */

ID PostHogEvent::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("PostHog.PostHogEvent",0x14,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001145a0);
  (*pcVar1)();
}



/* Address: 0x1001145a0 | FUN_1001145a0 */

void FUN_1001145a0(void)

{
  FUN_1001145d4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1001145d4 | FUN_1001145d4 */

void FUN_1001145d4(undefined8 param_1)

{
  if (DAT_100fafaf0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca3998);
  return;
}



/* Address: 0x10011460c | PostHogEvent::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void PostHogEvent::_cxx_destruct(ID param_1,SEL param_2)

{
  long lVar1;
  Date DVar2;
  UUID UVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + event + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + distinctId + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + properties));
  lVar1 = timestamp;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + lVar1,DVar2.unknown);
  lVar1 = uuid;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1 + lVar1,UVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + apiKey + 8));
  return;
}



/* Address: 0x1001146b8 | thunk_FUN_100114098 */

void thunk_FUN_100114098(void)

{
  FUN_100114098();
  return;
}



/* Address: 0x1001146bc | thunk_FUN_100114104 */

void thunk_FUN_100114104(void)

{
  FUN_100114104();
  return;
}



/* Address: 0x1001146c0 | FUN_1001146c0 */

void FUN_1001146c0(void)

{
  FUN_1001145d4(0);
  return;
}



/* Address: 0x1001146c8 | FUN_1001146c8 */

undefined1  [16] FUN_1001146c8(undefined *param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  local_50 = &DAT_100c2e720;
  puStack_48 = &DAT_100c2e720;
  local_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_38 = *(long *)(DVar1.unknown + -8) + 0x40;
    DVar1.unknown = (undefined *)Foundation::UUID::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
      puStack_28 = &DAT_100c2e738;
      uVar2 = 0x100;
      _swift_updateClassMetadata2(param_1,0x100,6,&local_50,param_1 + 0x50);
      if (param_1 == (undefined *)0x0) {
        param_1 = (undefined *)0x0;
        uVar2 = 0;
      }
      goto LAB_100114764;
    }
  }
  param_1 = DVar1.unknown;
  uVar2 = 0x3f;
LAB_100114764:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x100114774 | FUN_100114774 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001147b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100114774(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fafc18,&DAT_100c2e750);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Address: 0x1001147d8 | FUN_1001147d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

ID FUN_1001147d8(char *******param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  UUID UVar5;
  Date DVar6;
  long lVar7;
  char *******pppppppcVar8;
  undefined1 *puVar9;
  Date DVar10;
  NSDate *pNVar11;
  char *******pppppppcVar12;
  void *pvVar13;
  class_t *pcVar14;
  class_t *pcVar15;
  ID IVar16;
  ulong uVar17;
  long extraout_x8;
  long lVar18;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  char *******extraout_x13;
  code *pcVar19;
  ulong uVar20;
  void *pvVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  String SVar26;
  String SVar27;
  char *******local_120;
  char *******local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  void *local_f8;
  void *local_f0;
  char *******local_e8;
  char *******local_e0;
  long local_d8;
  char *******local_d0;
  void *local_c8;
  undefined *local_b8;
  char *******local_b0;
  void *pvStack_a8;
  objc_super local_a0;
  char *******local_90;
  undefined1 auStack_88 [40];
  
  puVar4 = &DAT_100fafc20;
  FUN_1000f7830(&DAT_100fafc20,&DAT_100c2e758);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar7 = (long)&local_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar7 - extraout_x12;
  local_e0 = (char *******)lVar18;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar23 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  lVar18 = lVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar18 - extraout_x12_00;
  puVar4 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar24 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar24 - extraout_x12_01;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  local_d8 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  if (param_1[2] == (char ******)0x0) {
    return 0;
  }
  local_f0 = (void *)lVar7;
  local_e8 = extraout_x13;
  _swift_bridgeObjectRetain(param_1);
  lVar7 = 0x746e657665;
  uVar20 = 0;
  FUN_100071370(0x746e657665);
  if ((uVar20 & 1) == 0) goto LAB_100114ef0;
  FUN_10000cbfc(param_1[7] + lVar7 * 4,auStack_88);
  _swift_bridgeObjectRelease(param_1);
  pppppppcVar8 = (char *******)&local_d0;
  _swift_dynamicCast(pppppppcVar8,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_String_100eac208,6);
  if (((ulong)pppppppcVar8 & 1) == 0) {
    return 0;
  }
  local_118 = local_d0;
  local_f8 = local_c8;
  local_110 = lVar18;
  local_108 = lVar23;
  local_100 = UVar5.unknown;
  if (param_1[2] == (char ******)0x0) {
LAB_100114a74:
    DVar10 = Foundation::Date::init();
    if (DAT_100fb2a00 != -1) {
      DVar10.unknown = (undefined *)&DAT_100fb2a00;
      _swift_once(&DAT_100fb2a00,FUN_10016e594);
    }
    IVar16 = *(ID *)(DAT_101057338 + 0x10);
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::stringFromDate_(IVar16,pNVar11);
    SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    (**(code **)(local_d8 + 8))
              ((lVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_02,
               DVar6.unknown);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    puVar9 = &DAT_6d617473656d6974;
    uVar20 = 0;
    FUN_100071370(&DAT_6d617473656d6974);
    if ((uVar20 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_100114a74;
    }
    FUN_10000cbfc(param_1[7] + (long)puVar9 * 4,auStack_88);
    _swift_bridgeObjectRelease(param_1);
    pppppppcVar8 = (char *******)&local_d0;
    _swift_dynamicCast(pppppppcVar8,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)pppppppcVar8 & 1) == 0) goto LAB_100114a74;
    SVar26.bridgeObject = local_c8;
    SVar26.str = (char *)local_d0;
  }
  if (DAT_100fb2a00 != -1) {
    _swift_once(&DAT_100fb2a00,FUN_10016e594);
  }
  FUN_10016e1a8(lVar22,SVar26.str,SVar26.bridgeObject);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  FUN_10011532c(lVar22,lVar24,&DAT_100faf508,&DAT_100c2e2e0);
  lVar18 = local_d8;
  pcVar19 = *(code **)(local_d8 + 0x30);
  lVar7 = lVar24;
  (*pcVar19)(lVar24,1,DVar6.unknown);
  if ((int)lVar7 == 1) {
    Foundation::Date::init();
    lVar7 = lVar24;
    (*pcVar19)(lVar24,1,DVar6.unknown);
    if ((int)lVar7 != 1) {
      FUN_1000fb4c4(lVar24,&DAT_100faf508,&DAT_100c2e2e0);
    }
  }
  else {
    (**(code **)(lVar18 + 0x20))(local_e8,lVar24,DVar6.unknown);
  }
  if (param_1[2] == (char ******)0x0) {
LAB_100114c44:
    pppppppcVar8 = (char *******)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar7 = 0x69747265706f7270;
    uVar20 = 0xea00000000007365;
    FUN_100071370(0x69747265706f7270);
    if ((uVar20 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_100114c44;
    }
    FUN_10000cbfc(param_1[7] + lVar7 * 4,auStack_88);
    _swift_bridgeObjectRelease(param_1);
    puVar4 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    pppppppcVar12 = (char *******)&local_d0;
    _swift_dynamicCast(pppppppcVar12,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6);
    pppppppcVar8 = local_d0;
    if (((ulong)pppppppcVar12 & 1) == 0) goto LAB_100114c44;
  }
  local_90 = pppppppcVar8;
  if (param_1[2] != (char ******)0x0) {
    _swift_bridgeObjectRetain(param_1);
    lVar7 = 0x74657324;
    uVar20 = 0;
    FUN_100071370(0x74657324);
    if ((uVar20 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(param_1[7] + lVar7 * 4,auStack_88);
      _swift_bridgeObjectRelease(param_1);
      puVar4 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      pppppppcVar12 = (char *******)&local_d0;
      _swift_dynamicCast(pppppppcVar12,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6
                        );
      if (((ulong)pppppppcVar12 & 1) != 0) {
        local_b8 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          FUN_1000fb4c4(&local_d0,&DAT_100fae668,&DAT_100c2e4a0);
          FUN_10016fcc4(auStack_88,0x74657324,&DAT_e400000000000000);
          FUN_1000fb4c4(auStack_88,&DAT_100fae668,&DAT_100c2e4a0);
        }
        else {
          FUN_100011080(&local_d0,auStack_88);
          pppppppcVar12 = pppppppcVar8;
          _swift_isUniquelyReferenced_nonNull_native(pppppppcVar8);
          local_d0 = pppppppcVar8;
          FUN_10016fe74(auStack_88,0x74657324,&DAT_e400000000000000,pppppppcVar12);
          local_90 = local_d0;
        }
      }
    }
  }
  uVar20 = 0xeb0000000064695f;
  lVar7 = 0x74636e6974736964;
  if (param_1[2] == (char ******)0x0) {
LAB_100114dc0:
    pppppppcVar8 = local_90;
    if (local_90[2] != (char ******)0x0) {
      _swift_bridgeObjectRetain(local_90);
      FUN_100071370(0x74636e6974736964);
      if ((uVar20 & 1) != 0) {
        FUN_10000cbfc(pppppppcVar8[7] + lVar7 * 4,auStack_88);
        _swift_bridgeObjectRelease(pppppppcVar8);
        pppppppcVar8 = (char *******)&local_d0;
        _swift_dynamicCast(pppppppcVar8,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if ((int)pppppppcVar8 == 0) {
          local_d0 = (char *******)0x0;
          local_c8 = (void *)0x0;
        }
        goto LAB_100114e4c;
      }
      _swift_bridgeObjectRelease(pppppppcVar8);
    }
    local_d0 = (char *******)0x0;
    local_c8 = (void *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar22 = lVar7;
    uVar17 = uVar20;
    FUN_100071370(0x74636e6974736964);
    if ((uVar17 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_100114dc0;
    }
    FUN_10000cbfc(param_1[7] + lVar22 * 4,auStack_88);
    _swift_bridgeObjectRelease(param_1);
    pppppppcVar8 = (char *******)&local_b0;
    _swift_dynamicCast(pppppppcVar8,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)pppppppcVar8 & 1) == 0) goto LAB_100114dc0;
    local_d0 = local_b0;
    local_c8 = pvStack_a8;
LAB_100114e4c:
    pvVar3 = local_c8;
    if (local_c8 != (void *)0x0) {
      UVar5.unknown = (undefined *)local_e8;
      local_120 = local_d0;
      if (param_1[2] == (char ******)0x0) {
LAB_100114ff0:
        local_d0 = (char *******)0x0;
        local_c8 = (void *)0x0;
LAB_100114ff4:
        if (DAT_100fb3060 != -1) {
          UVar5.unknown = (undefined *)&DAT_100fb3060;
          _swift_once(&DAT_100fb3060,FUN_100173f28);
        }
        FUN_100173f94(lVar25);
        SVar26 = Foundation::UUID::get_uuidString(UVar5);
        SVar27 = Swift::String::lowercased(SVar26);
        _swift_bridgeObjectRelease(SVar26.bridgeObject);
        puVar4 = local_100;
        lVar18 = local_108;
        (**(code **)(local_108 + 8))(lVar25,local_100);
        pvVar21 = SVar27.bridgeObject;
      }
      else {
        _swift_bridgeObjectRetain(param_1);
        lVar18 = 0x64697575;
        uVar20 = 0;
        FUN_100071370(0x64697575);
        if ((uVar20 & 1) == 0) {
          UVar5.unknown = (undefined *)param_1;
          _swift_bridgeObjectRelease();
LAB_100114f20:
          if (param_1[2] != (char ******)0x0) {
            _swift_bridgeObjectRetain(param_1);
            lVar18 = 0x5f6567617373656d;
            uVar20 = 0xea00000000006469;
            FUN_100071370(0x5f6567617373656d);
            if ((uVar20 & 1) != 0) {
              FUN_10000cbfc(param_1[7] + lVar18 * 4,auStack_88);
              _swift_bridgeObjectRelease(param_1);
              UVar5.unknown = (undefined *)&local_d0;
              _swift_dynamicCast(UVar5.unknown,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                 PTR___type_metadata_for_Swift_String_100eac208,6);
              if ((int)UVar5.unknown == 0) {
                local_d0 = (char *******)0x0;
                local_c8 = (void *)0x0;
              }
              goto LAB_1001152b4;
            }
            UVar5.unknown = (undefined *)param_1;
            _swift_bridgeObjectRelease();
          }
          goto LAB_100114ff0;
        }
        FUN_10000cbfc(param_1[7] + lVar18 * 4,auStack_88);
        _swift_bridgeObjectRelease(param_1);
        UVar5.unknown = (undefined *)&local_d0;
        _swift_dynamicCast(UVar5.unknown,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if (((ulong)UVar5.unknown & 1) == 0) goto LAB_100114f20;
LAB_1001152b4:
        pvVar21 = local_c8;
        puVar4 = local_100;
        lVar18 = local_108;
        if (local_c8 == (void *)0x0) goto LAB_100114ff4;
      }
      pppppppcVar8 = local_e0;
      Foundation::UUID::_init();
      _swift_bridgeObjectRelease(pvVar21);
      pvVar21 = local_f0;
      FUN_10011532c(pppppppcVar8,local_f0,&DAT_100fafc20,&DAT_100c2e758);
      pcVar19 = *(code **)(lVar18 + 0x30);
      pvVar13 = pvVar21;
      (*pcVar19)(pvVar21,1,puVar4);
      if ((int)pvVar13 == 1) {
        if (DAT_100fb3060 != -1) {
          _swift_once(&DAT_100fb3060,FUN_100173f28);
        }
        FUN_100173f94(local_110);
        pvVar21 = local_f0;
        pvVar13 = local_f0;
        (*pcVar19)(local_f0,1,local_100);
        if ((int)pvVar13 != 1) {
          FUN_1000fb4c4(pvVar21,&DAT_100fafc20,&DAT_100c2e758);
        }
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_110,pvVar21,puVar4);
      }
      if (param_1[2] != (char ******)0x0) {
        _swift_bridgeObjectRetain(param_1);
        lVar18 = 0x79656b5f697061;
        uVar20 = 0;
        FUN_100071370(0x79656b5f697061);
        if ((uVar20 & 1) != 0) {
          FUN_10000cbfc(param_1[7] + lVar18 * 4,auStack_88);
          _swift_bridgeObjectRelease(param_1);
          pppppppcVar8 = (char *******)&local_d0;
          _swift_dynamicCast(pppppppcVar8,auStack_88,PTR___type_metadata_for_Any_100eae0c0 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          local_f0 = local_c8;
          local_e0 = local_d0;
          if ((int)pppppppcVar8 == 0) {
            local_e0 = (char *******)0x0;
            local_f0 = (void *)0x0;
          }
          goto LAB_10011519c;
        }
        _swift_bridgeObjectRelease(param_1);
      }
      local_e0 = (char *******)0x0;
      local_f0 = (void *)0x0;
LAB_10011519c:
      pppppppcVar8 = local_90;
      pcVar14 = (class_t *)0x0;
      FUN_1001145d4();
      pcVar15 = pcVar14;
      _objc_allocWithZone();
      lVar22 = local_d8;
      puVar1 = (undefined8 *)((long)&pcVar15->isa + PostHogEvent::apiKey);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar2 = (undefined8 *)((long)&pcVar15->isa + PostHogEvent::event);
      *puVar2 = local_118;
      puVar2[1] = local_f8;
      puVar2 = (undefined8 *)((long)&pcVar15->isa + PostHogEvent::distinctId);
      *puVar2 = local_120;
      puVar2[1] = pvVar3;
      *(char ********)((long)&pcVar15->isa + PostHogEvent::properties) = pppppppcVar8;
      (**(code **)(local_d8 + 0x10))
                ((long)&pcVar15->isa + PostHogEvent::timestamp,local_e8,DVar6.unknown);
      puVar4 = local_100;
      lVar7 = local_108;
      lVar18 = local_110;
      (**(code **)(local_108 + 0x10))((long)&pcVar15->isa + PostHogEvent::uuid,local_110,local_100);
      *puVar1 = local_e0;
      puVar1[1] = local_f0;
      local_a0.receiver = (ID)pcVar15;
      local_a0.super_class = pcVar14;
      _swift_bridgeObjectRetain(pppppppcVar8);
      IVar16 = _objc_msgSendSuper2(&local_a0,"init");
      (**(code **)(lVar7 + 8))(lVar18,puVar4);
      (**(code **)(lVar22 + 8))(local_e8,DVar6.unknown);
      _swift_bridgeObjectRelease(pppppppcVar8);
      return IVar16;
    }
  }
  (**(code **)(lVar18 + 8))(local_e8,DVar6.unknown);
  _swift_bridgeObjectRelease(local_f8);
  param_1 = local_90;
LAB_100114ef0:
  _swift_bridgeObjectRelease(param_1);
  return 0;
}



/* Address: 0x10011532c | FUN_10011532c */

undefined8 FUN_10011532c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000f7830(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x100115374 | PostHogFeatureFlagResult::key */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogFeatureFlagResult::key(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  NSString *pNVar2;
  
  uVar1 = *(undefined8 *)(param_1 + key + 8);
  _swift_bridgeObjectRetain(uVar1);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  return (ID)pNVar2;
}



/* Address: 0x1001153c0 | FUN_1001153c0 */

undefined1  [16] FUN_1001153c0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + PostHogFeatureFlagResult::key);
  _swift_bridgeObjectRetain
            (*(undefined8 *)(*(undefined1 (*) [16])(unaff_x20 + PostHogFeatureFlagResult::key) + 8))
  ;
  return auVar1;
}



/* Address: 0x1001153f8 | PostHogFeatureFlagResult::enabled */

/* Function Stack Size: 0x10 bytes */

bool PostHogFeatureFlagResult::enabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + enabled);
}



/* Address: 0x100115408 | FUN_100115408 */

undefined1 FUN_100115408(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + PostHogFeatureFlagResult::enabled);
}



/* Address: 0x100115418 | PostHogFeatureFlagResult::variant */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogFeatureFlagResult::variant(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + variant + 8);
  if (lVar2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100115474 | FUN_100115474 */

undefined1  [16] FUN_100115474(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + PostHogFeatureFlagResult::variant);
  _swift_bridgeObjectRetain
            (*(undefined8 *)
              (*(undefined1 (*) [16])(unaff_x20 + PostHogFeatureFlagResult::variant) + 8));
  return auVar1;
}



/* Address: 0x1001154ac | PostHogFeatureFlagResult::payload */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID PostHogFeatureFlagResult::payload(ID param_1,SEL param_2)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  FUN_100108d58(param_1 + payload,auStack_60);
  if (local_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    FUN_100004640(auStack_60,local_48);
    lVar3 = *(long *)(local_48 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    Swift::__bridgeAnythingToObjectiveC(puVar2,local_48);
    (**(code **)(lVar3 + 8))(puVar2,local_48);
    FUN_100004594(auStack_60);
  }
  return (ID)puVar1;
}


