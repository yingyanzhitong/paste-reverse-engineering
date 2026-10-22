/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003bfb8c | FUN_1003bfb8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bfb8c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  URL UVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  undefined8 uVar4;
  long lVar5;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  local_98 = param_3;
  local_90 = param_4;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar3 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_100357cf0(auStack_88);
  local_a0 = lStack_68;
  FUN_100004640(auStack_88,local_70);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  puVar2 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  FUN_100381740(0);
  (**(code **)(lVar5 + 0x10))(lVar3,local_98,UVar1.unknown);
  _swift_bridgeObjectRetain(param_5);
  FUN_10037c7bc(lVar3,local_90,param_5);
  *(long *)(puVar2 + 0x20) = lVar3;
  (**(code **)(*(long *)(local_a0 + 0x10) + 0x18))(uVar4,puVar2,local_70);
  _swift_release(puVar2);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003bfcf0 | FUN_1003bfcf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bfcf0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar3 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar4 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar10 - extraout_x12;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = lVar11 - extraout_x12_00;
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::deactivate(*(ID *)PTR__NSApp_100ea8fa0);
    FUN_10031ebc8(puVar8,*(undefined8 *)(unaff_x20 + 0x50));
    lVar6 = 0;
    FUN_100317b10();
    puVar7 = puVar8;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar8,1,lVar6);
    if ((int)puVar7 == 1) {
      FUN_100005808(puVar8,&DAT_100fbe6e0,&DAT_100c40980);
    }
    else {
      puVar7 = puVar8;
      _swift_getEnumCaseMultiPayload(puVar8,lVar6);
      if ((int)puVar7 == 1) {
        FUN_100319e98(puVar8,lVar10);
        FUN_100319e98(lVar10,lVar9);
        (**(code **)(lVar12 + 0x10))(lVar11,lVar9,UVar5.unknown);
        FUN_10005241c(lVar9,FUN_1003187b8);
        (**(code **)(lVar12 + 0x20))(lVar4,lVar11,UVar5.unknown);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
        lVar9 = *(long *)(unaff_x20 + 0x48);
        FUN_100004640(unaff_x20 + 0x28,uVar1);
        (**(code **)(lVar9 + 8))(lVar4,uVar1,lVar9);
        (**(code **)(lVar12 + 8))(lVar4,UVar5.unknown);
      }
      else {
        FUN_10005241c(puVar8,FUN_100317b10);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003bff3c);
  (*pcVar2)();
}



/* Address: 0x1003bff3c | FUN_1003bff3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bff3c(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  return;
}



/* Address: 0x1003bff70 | FUN_1003bff70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003bff70(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003bffac | FUN_1003bffac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003bffac(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [24];
  long local_50;
  undefined8 uStack_48;
  
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_10000cbb0(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x50) = param_1;
  FUN_100076688(auStack_68,param_3 + 0x28);
  puVar1 = &DAT_100ecee40;
  _swift_allocObject(&DAT_100ecee40,0x18,7);
  _swift_weakInit(puVar1 + 0x10,param_3);
  FUN_1000037f0(&DAT_100fc29a0,&DAT_100c44b00);
  _swift_allocObject();
  FUN_1003c1c60(param_1,FUN_1003bc500,puVar1);
  _swift_release(puVar1);
  FUN_100004594(auStack_68);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = param_1;
  _swift_release(uVar2);
  return param_3;
}



/* Address: 0x1003c00b8 | FUN_1003c00b8 */

void FUN_1003c00b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar1 + 0x40));
  _swift_allocObject(param_3,0x58,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
  FUN_1003bffac(param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                param_3,param_4,param_5);
  return;
}



/* Address: 0x1003c0168 | FUN_1003c0168 */

void FUN_1003c0168(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003bfb8c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1003c0184 | FUN_1003c0184 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003c0184(void)

{
  return ZEXT816(0x100fc2bd0);
}



/* Address: 0x1003c01a4 | FUN_1003c01a4 */

void FUN_1003c01a4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c01c8 | FUN_1003c01c8 */

void FUN_1003c01c8(undefined8 *param_1,undefined1 *param_2,code *param_3)

{
  (*param_3)(*param_1,*param_2);
  return;
}



/* Address: 0x1003c01f0 | FUN_1003c01f0 */

undefined1 FUN_1003c01f0(void)

{
  undefined1 uVar1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  ID unaff_x20;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined1 local_41;
  
  local_41 = 0;
  IVar3 = objc_stub::length(unaff_x20);
  puVar4 = &DAT_100ecee68;
  _swift_allocObject(&DAT_100ecee68,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &local_41;
  puVar5 = &DAT_100ecee90;
  _swift_allocObject(&DAT_100ecee90,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1003b80bc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_58 = FUN_100215f00;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_100309738;
  puStack_60 = &DAT_100eceea8;
  local_50 = puVar5;
  aBlock = __Block_copy(&local_78);
  puVar6 = local_50;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::enumerateAttributesInRange_options_usingBlock_(unaff_x20,0,IVar3,0,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0xa6,0x42,0x39,1);
  _swift_release(puVar5);
  uVar1 = local_41;
  if (((ulong)puVar6 & 1) == 0) {
    _swift_release(puVar4);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c0330);
  (*pcVar2)();
}



/* Address: 0x1003c0330 | FUN_1003c0330 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003c0330(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x20);
}



/* Address: 0x1003c0360 | FUN_1003c0360 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003c0360(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x28);
}



/* Address: 0x1003c0390 | FUN_1003c0390 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1003c0390(undefined8 param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(ID *)(unaff_x20 + 0x20) = IVar2;
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(ID *)(unaff_x20 + 0x28) = IVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  puVar1 = &DAT_100eceee0;
  _swift_allocObject(&DAT_100eceee0,0x18,7);
  _swift_weakInit(puVar1 + 0x10,unaff_x20);
  FUN_1000037f0(&DAT_100fc29a0,&DAT_100c44b00);
  _swift_allocObject();
  FUN_1003c1c84(param_1,FUN_1003c1f34,puVar1,&DAT_100ecf160,&DAT_100ecf188,FUN_1003c2024,
                FUN_1003c2030);
  _swift_release(puVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  _swift_release(uVar3);
  FUN_1003c05d4();
  return unaff_x20;
}



/* Address: 0x1003c04c0 | FUN_1003c04c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003c04c0(undefined8 param_1)

{
  FUN_1003c1dfc();
  return param_1;
}



/* Address: 0x1003c04f0 | FUN_1003c04f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c04f0(ID param_1,undefined8 param_2,long param_3)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  IVar1 = objc_stub::isDeleted(param_1);
  if ((IVar1 & 1) == 0) {
    lVar2 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (lVar2 != 0) {
      *(ID *)(lVar2 + 0x38) = param_1;
      _swift_release(lVar2);
    }
    lVar2 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (lVar2 != 0) {
      FUN_1003c05d4();
      _swift_release(lVar2);
    }
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (param_3 != 0) {
      _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
      pcVar4 = *(code **)(param_3 + 0x10);
      if (pcVar4 == (code *)0x0) {
        _swift_release(param_3);
      }
      else {
        uVar3 = *(undefined8 *)(param_3 + 0x18);
        FUN_100011128(pcVar4,uVar3);
        _swift_release(param_3);
        (*pcVar4)();
        FUN_100004550(pcVar4,uVar3);
      }
    }
  }
  return;
}



/* Address: 0x1003c05d4 | FUN_1003c05d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003c05d4(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  long lVar4;
  undefined8 uVar5;
  UTType UVar6;
  UTType UVar7;
  UTType UVar8;
  undefined *puVar9;
  ID self;
  ID IVar10;
  undefined *puVar11;
  void *pvVar12;
  undefined *puVar13;
  NSString *pNVar14;
  NSDictionary *pNVar15;
  ID IVar16;
  undefined *puVar17;
  ulong uVar18;
  long unaff_x20;
  undefined8 uVar19;
  ulong uVar20;
  String SVar21;
  undefined *local_f0;
  undefined8 local_e8;
  code *local_e0;
  undefined *puStack_d8;
  code *local_d0;
  undefined *local_c8;
  undefined1 auStack_78 [24];
  
  _Var3.unknown = (undefined *)objc_stub::data(*(ID *)(unaff_x20 + 0x38));
  FUN_10031b218();
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar17 = PTR___NSConcreteStackBlock_100ea82a0;
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  else {
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c0bdc);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(_Var3.unknown + 0x20);
    }
    else {
      uVar5 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var3);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
    UVar6.unknown = &DAT_100fbf8d8;
    FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
    UVar7 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
    uVar18 = (ulong)*(byte *)(*(long *)(UVar7.unknown + -8) + 0x50);
    uVar20 = uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff);
    _swift_allocObject(UVar6.unknown,uVar20 + *(long *)(*(long *)(UVar7.unknown + -8) + 0x48) * 3,
                       uVar18 | 7);
    *(undefined8 *)(UVar6.unknown + 0x18) = 6;
    *(undefined8 *)(UVar6.unknown + 0x10) = 3;
    UVar8 = UniformTypeIdentifiers::UTType::get_flatRTFD(UVar6);
    UVar8 = UniformTypeIdentifiers::UTType::get_rtfd(UVar8);
    UniformTypeIdentifiers::UTType::get_rtf(UVar8);
    UVar8.unknown = UVar6.unknown;
    FUN_10037ebdc(UVar6.unknown,uVar5);
    _swift_setDeallocating(UVar6.unknown);
    _swift_arrayDestroy(UVar6.unknown + uVar20,3,UVar7.unknown);
    lVar4 = 0x20;
    _swift_deallocClassInstance(UVar6.unknown,0x20,7);
    if (UVar8.unknown != (undefined *)0x0) {
      puVar9 = &_OBJC_CLASS___NSMutableAttributedString;
      _objc_allocWithZone();
      self = objc_stub::initWithAttributedString_((ID)puVar9,UVar8.unknown);
      IVar10 = objc_stub::length((ID)UVar8.unknown);
      puVar9 = &DAT_100ecf0e8;
      _swift_allocObject(&DAT_100ecf0e8,0x18,7);
      *(ID *)(puVar9 + 0x10) = self;
      puVar11 = &DAT_100ecf110;
      _swift_allocObject(&DAT_100ecf110,0x20,7);
      *(code **)(puVar11 + 0x10) = FUN_100309b24;
      *(undefined **)(puVar11 + 0x18) = puVar9;
      local_d0 = thunk_FUN_100215f00;
      local_f0 = puVar17;
      local_e8 = 0x42000000;
      local_e0 = FUN_100309738;
      puStack_d8 = &DAT_100ecf128;
      local_c8 = puVar11;
      pvVar12 = __Block_copy(&local_f0);
      puVar17 = local_c8;
      _swift_retain(puVar11);
      _swift_release(puVar17);
      objc_stub::enumerateAttributesInRange_options_usingBlock_(self,0,IVar10,0,pvVar12);
      __Block_release(pvVar12);
      puVar13 = puVar11;
      _swift_isEscapingClosureAtFileLocation(puVar11,"",0x9e,0x25,0x45,1);
      _swift_release(puVar9);
      _swift_release(puVar11);
      puVar17 = PTR___NSConcreteStackBlock_100ea82a0;
      if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c0be0);
        (*pcVar2)();
      }
      goto LAB_1003c0898;
    }
    FUN_10037c9a8();
    if (lVar4 != 0) {
      puVar9 = &_OBJC_CLASS___NSAttributedString;
      _objc_allocWithZone();
      pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar4);
      self = objc_stub::initWithString_((ID)puVar9,pNVar14);
      if (self != 0) goto LAB_1003c0898;
    }
  }
  puVar9 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  self = objc_stub::init((ID)puVar9);
LAB_1003c0898:
  _swift_beginAccess(unaff_x20 + 0x20,auStack_78,1,0);
  *(ID *)(unaff_x20 + 0x20) = self;
  pNVar14 = (NSString *)objc_stub::string(self);
  if (pNVar14 == (NSString *)0x0) {
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
  }
  puVar9 = &DAT_100fc2c48;
  FUN_1000037f0(&DAT_100fc2c48,&DAT_100c44cf8);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  uVar19 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar9 + 0x20) = uVar19;
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100fc2c50,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1000f3ef4();
  *(undefined8 *)(puVar9 + 0x40) = uVar5;
  *(undefined8 *)(puVar9 + 0x28) = uVar19;
  puVar11 = puVar9;
  FUN_1003c9e18(puVar9);
  _swift_setDeallocating(puVar9);
  FUN_1003c1f6c(puVar9 + 0x20);
  puVar9 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  FUN_1002fbbd0(0);
  FUN_100309b3c();
  pNVar15 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar11);
  IVar10 = objc_stub::initWithString_attributes_((ID)puVar9,pNVar14,pNVar15);
  objc_stub::beginEditing(IVar10);
  IVar16 = objc_stub::length(self);
  puVar9 = &DAT_100ecf070;
  _swift_allocObject(&DAT_100ecf070,0x18,7);
  *(ID *)(puVar9 + 0x10) = IVar10;
  puVar11 = &DAT_100ecf098;
  _swift_allocObject(&DAT_100ecf098,0x20,7);
  *(code **)(puVar11 + 0x10) = thunk_FUN_1003c1fd8;
  *(undefined **)(puVar11 + 0x18) = puVar9;
  local_d0 = thunk_FUN_100215f00;
  local_e8 = 0x42000000;
  local_e0 = FUN_100309738;
  puStack_d8 = &DAT_100ecf0b0;
  local_f0 = puVar17;
  local_c8 = puVar11;
  pvVar12 = __Block_copy(&local_f0);
  puVar17 = local_c8;
  _swift_retain(puVar11);
  _swift_release(puVar17);
  objc_stub::enumerateAttributesInRange_options_usingBlock_(self,0,IVar16,0,pvVar12);
  __Block_release(pvVar12);
  puVar17 = puVar11;
  _swift_isEscapingClosureAtFileLocation(puVar11,"",0xa6,0x58,0x39,1);
  _swift_release(puVar11);
  if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c0bc8);
    (*pcVar2)();
  }
  objc_stub::endEditing(IVar10);
  _swift_release(puVar9);
  _swift_beginAccess(unaff_x20 + 0x28,&local_f0,1,0);
  *(ID *)(unaff_x20 + 0x28) = IVar10;
  return 0;
}



/* Address: 0x1003c0be0 | FUN_1003c0be0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

bool FUN_1003c0be0(NSObject *param_1)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  bool bVar4;
  ID self;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  long unaff_x20;
  NSObject *pNVar10;
  undefined8 *puVar11;
  String SVar12;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  char local_79;
  undefined1 auStack_78 [24];
  
  objc_stub::string((ID)param_1);
  SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar8 = SVar12.bridgeObject;
  _swift_bridgeObjectRelease(pvVar8);
  uVar1 = (ulong)SVar12.str & 0xffffffffffff;
  if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar8 >> 0x38 & 0xf;
  }
  bVar4 = false;
  if (uVar1 != 0) {
    puVar11 = (undefined8 *)(unaff_x20 + 0x20);
    _swift_beginAccess(puVar11,auStack_78,0,0);
    self = *(ID *)(unaff_x20 + 0x20);
    local_79 = '\x01';
    IVar5 = objc_stub::length(self);
    puVar6 = &DAT_100ecef08;
    _swift_allocObject(&DAT_100ecef08,0x18,7);
    *(char **)(puVar6 + 0x10) = &local_79;
    puVar7 = &DAT_100ecef30;
    _swift_allocObject(&DAT_100ecef30,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_1003c1f3c;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    local_90 = thunk_FUN_100215f00;
    local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a8 = 0x42000000;
    local_a0 = FUN_100309738;
    puStack_98 = &DAT_100ecef48;
    local_88 = puVar7;
    pvVar8 = __Block_copy(&local_b0);
    puVar9 = local_88;
    _swift_retain(puVar7);
    _swift_release(puVar9);
    objc_stub::enumerateAttributesInRange_options_usingBlock_(self,0,IVar5,0,pvVar8);
    __Block_release(pvVar8);
    puVar9 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0x9e,0x15,0x54,1);
    _swift_release(puVar7);
    cVar2 = local_79;
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003c0e08);
      (*pcVar3)();
    }
    _swift_release(puVar6);
    if (cVar2 == '\x01') {
      puVar11 = (undefined8 *)(unaff_x20 + 0x28);
      _swift_beginAccess(puVar11,&local_b0,0,0);
    }
    pNVar10 = (NSObject *)*puVar11;
    FUN_10000ec2c(0,&DAT_100fc1aa0,&PTR__OBJC_CLASS___NSAttributedString_100f8d688);
    bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar10,param_1);
    bVar4 = !bVar4;
  }
  return bVar4;
}



/* Address: 0x1003c0e08 | FUN_1003c0e08 */

/* WARNING: Removing unreachable block (ram,0x0001003c0e34) */

void FUN_1003c0e08(undefined8 param_1)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  
  local_30 = param_1;
  FUN_1002ff5a8(FUN_1003c1f54,auStack_40);
  FUN_1003c05d4();
  return;
}



/* Address: 0x1003c0e50 | FUN_1003c0e50 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003c0e50(undefined1 *param_1,undefined8 param_2,ID param_3,long param_4)

{
  char cVar1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined **ppuVar7;
  UTType UVar8;
  UTType UVar9;
  long extraout_x8;
  undefined8 uVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  undefined **local_c0;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined *local_68;
  char local_51;
  
  local_a0 = param_1;
  local_a8 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar11 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  local_51 = '\0';
  IVar3 = objc_stub::length(param_3);
  puVar4 = &DAT_100eceff8;
  _swift_allocObject(&DAT_100eceff8,0x18,7);
  *(char **)(puVar4 + 0x10) = &local_51;
  puVar5 = &DAT_100ecf020;
  _swift_allocObject(&DAT_100ecf020,0x20,7);
  *(code **)(puVar5 + 0x10) = thunk_FUN_1003b80bc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_70 = thunk_FUN_100215f00;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100309738;
  local_78 = &DAT_100ecf038;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  puVar6 = local_68;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::enumerateAttributesInRange_options_usingBlock_(param_3,0,IVar3,0,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0xa6,0x42,0x39,1);
  _swift_release(puVar5);
  cVar1 = local_51;
  if (((ulong)puVar6 & 1) == 0) {
    _swift_release(puVar4);
    if (cVar1 == '\x01') {
      FUN_100357cf0(&local_90);
      pcVar2 = local_70;
      puVar5 = local_78;
      FUN_100004640(&local_90,local_78);
      uVar10 = *(undefined8 *)(param_4 + 0x38);
      puVar4 = &DAT_100fbe4e8;
      FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      FUN_100381740(0);
      FUN_10037efac();
      *(ID *)(puVar4 + 0x20) = param_3;
      (**(code **)(*(long *)(pcVar2 + 0x10) + 0x18))(uVar10,puVar4,puVar5);
    }
    else {
      FUN_100357cf0(&local_90);
      local_b8 = local_70;
      local_b0 = local_78;
      ppuVar7 = &local_90;
      FUN_100004640();
      uVar10 = *(undefined8 *)(param_4 + 0x38);
      puVar4 = &DAT_100fbe4e8;
      local_c0 = ppuVar7;
      FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      objc_stub::string(param_3);
      SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar3 = 0;
      FUN_100381740();
      _objc_allocWithZone();
      UVar8.unknown = (undefined *)objc_stub::init(IVar3);
      UVar9 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar8);
      SVar13 = UniformTypeIdentifiers::UTType::get_identifier(UVar9);
      (**(code **)(lVar11 + 8))
                ((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),local_a8);
      FUN_10037c4a8(SVar12.str,SVar12.bridgeObject,SVar13.str,SVar13.bridgeObject);
      _swift_bridgeObjectRelease(SVar12.bridgeObject);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      *(undefined **)(puVar4 + 0x20) = UVar8.unknown;
      (**(code **)(*(long *)(local_b8 + 0x10) + 0x18))(uVar10,puVar4,local_b0);
    }
    _swift_release(puVar4);
    FUN_100004594(&local_90);
    *local_a0 = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003c11c8);
  (*pcVar2)();
}



/* Address: 0x1003c11c8 | FUN_1003c11c8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003c11c8(void)

{
  code *pcVar1;
  NSString *pNVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  NSDictionary *pNVar6;
  ID self;
  ID IVar7;
  void *aBlock;
  undefined *puVar8;
  ID unaff_x20;
  undefined8 uVar9;
  String SVar10;
  undefined *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined *puStack_b0;
  code *local_a8;
  undefined *local_a0;
  
  pNVar2 = (NSString *)objc_stub::string(unaff_x20);
  if (pNVar2 == (NSString *)0x0) {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
  }
  puVar5 = &DAT_100fc2c48;
  FUN_1000037f0(&DAT_100fc2c48,&DAT_100c44cf8);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  uVar9 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fc2c50,&PTR__OBJC_CLASS___NSFont_100f8d678);
  FUN_1000f3ef4();
  *(undefined8 *)(puVar5 + 0x40) = uVar3;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  puVar4 = puVar5;
  FUN_1003c9e18(puVar5);
  _swift_setDeallocating(puVar5);
  FUN_1003c1f6c(puVar5 + 0x20);
  puVar5 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  FUN_1002fbbd0(0);
  FUN_100309b3c();
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  self = objc_stub::initWithString_attributes_((ID)puVar5,pNVar2,pNVar6);
  objc_stub::beginEditing(self);
  IVar7 = objc_stub::length(unaff_x20);
  puVar5 = &DAT_100ecef80;
  _swift_allocObject(&DAT_100ecef80,0x18,7);
  *(ID *)(puVar5 + 0x10) = self;
  puVar4 = &DAT_100ecefa8;
  _swift_allocObject(&DAT_100ecefa8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1003c1fd8;
  *(undefined **)(puVar4 + 0x18) = puVar5;
  local_a8 = thunk_FUN_100215f00;
  local_c8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c0 = 0x42000000;
  local_b8 = FUN_100309738;
  puStack_b0 = &DAT_100ecefc0;
  local_a0 = puVar4;
  aBlock = __Block_copy(&local_c8);
  puVar8 = local_a0;
  _swift_retain(puVar4);
  _swift_release(puVar8);
  objc_stub::enumerateAttributesInRange_options_usingBlock_(unaff_x20,0,IVar7,0,aBlock);
  __Block_release(aBlock);
  puVar8 = puVar4;
  _swift_isEscapingClosureAtFileLocation(puVar4,"",0xa6,0x58,0x39,1);
  _swift_release(puVar4);
  if (((ulong)puVar8 & 1) == 0) {
    objc_stub::endEditing(self);
    _swift_release(puVar5);
    return self;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c1450);
  (*pcVar1)();
}



/* Address: 0x1003c1450 | FUN_1003c1450 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c1450(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1003c148c | FUN_1003c148c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c148c(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003c14d0 | FUN_1003c14d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c14d0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  ID *pIVar4;
  ID IVar5;
  _StringGuts _Var6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  ID local_e8;
  undefined1 auStack_e0 [32];
  long local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  uVar8 = uVar8 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
LAB_1003c1584:
  do {
    if (uVar10 == 0) {
      uVar10 = uVar8;
      if ((long)uVar8 <= lVar12 + 1) {
        uVar10 = lVar12 + 1;
      }
      lVar9 = uVar10 - 1;
      lVar11 = lVar12;
      do {
        lVar12 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c1860);
          (*pcVar1)();
        }
        if ((long)uVar8 <= lVar12) {
          uVar10 = 0;
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          goto LAB_1003c15f8;
        }
        uVar10 = ((ulong *)(param_1 + 0x40))[lVar12];
        lVar11 = lVar11 + 1;
      } while (uVar10 == 0);
    }
    uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
    uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
    uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
    uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
    uVar10 = uVar10 - 1 & uVar10;
    uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar12 << 6;
    local_c0 = *(long *)(*(long *)(param_1 + 0x30) + uVar7 * 8);
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar7 * 0x20,&uStack_b8);
    lVar9 = lVar12;
LAB_1003c15f8:
    uStack_88 = uStack_b8;
    local_90 = local_c0;
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    local_70 = local_a0;
    if (local_c0 == 0) {
      _swift_release(param_1);
      return;
    }
    FUN_100011080(&uStack_88,&local_c0);
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var6.unknown = SVar13.bridgeObject;
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    lVar12 = lVar9;
    if (SVar13 == SVar14) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
LAB_1003c1690:
      FUN_10000cbfc(&local_c0,auStack_e0);
      uVar3 = 0;
      FUN_10000ec2c(0,&DAT_100fc2c50,&PTR__OBJC_CLASS___NSFont_100f8d678);
      pIVar4 = &local_e8;
      _swift_dynamicCast(pIVar4,auStack_e0,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar3,6);
      if (((ulong)pIVar4 & 1) == 0) goto LAB_1003c1728;
      IVar5 = objc_stub::fontDescriptor(local_e8);
      IVar5 = objc_stub::symbolicTraits(IVar5);
      if ((IVar5 & 3) == 0) {
        FUN_100004594(&local_c0);
      }
      else {
        *param_5 = 1;
        *param_4 = 1;
LAB_1003c1578:
        FUN_100004594(&local_c0);
      }
      goto LAB_1003c1584;
    }
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar13.str,_Var6,(_StringComparisonResult)(__int8)SVar14.str);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    if (bVar2) goto LAB_1003c1690;
LAB_1003c1728:
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var6.unknown = SVar14.bridgeObject;
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar14 == SVar13) {
LAB_1003c1554:
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
LAB_1003c1564:
      *param_5 = 1;
      *param_4 = 1;
      goto LAB_1003c1578;
    }
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar14.str,_Var6,(_StringComparisonResult)(__int8)SVar13.str);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    if (bVar2) goto LAB_1003c1564;
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var6.unknown = SVar14.bridgeObject;
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar14 == SVar13) goto LAB_1003c1554;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar14.str,_Var6,(_StringComparisonResult)(__int8)SVar13.str);
    _swift_bridgeObjectRelease(_Var6.unknown);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    if (bVar2) goto LAB_1003c1564;
    FUN_100004594(&local_c0);
  } while( true );
}



/* Address: 0x1003c1860 | FUN_1003c1860 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003c1860(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5)

{
  code *pcVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID *pIVar6;
  ulong uVar7;
  ulong *puVar8;
  _StringGuts _Var9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  String SVar18;
  String SVar19;
  ID local_128;
  undefined1 auStack_120 [80];
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar12 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(param_1 + 0x40);
  uVar10 = *(undefined8 *)PTR__NSFontAttributeName_100ea9048;
  uVar12 = uVar12 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  do {
    if (uVar14 == 0) {
      uVar14 = uVar12;
      if ((long)uVar12 <= lVar16 + 1) {
        uVar14 = lVar16 + 1;
      }
      lVar13 = uVar14 - 1;
      lVar15 = lVar16;
      do {
        lVar16 = lVar15 + 1;
        if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c1c10);
          (*pcVar1)();
        }
        if ((long)uVar12 <= lVar16) {
          uVar14 = 0;
          local_b0 = 0;
          uStack_c8 = 0;
          local_d0 = 0;
          local_b8 = 0;
          uStack_c0 = 0;
          goto LAB_1003c1a10;
        }
        uVar14 = ((ulong *)(param_1 + 0x40))[lVar16];
        lVar15 = lVar15 + 1;
      } while (uVar14 == 0);
    }
    uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar14 = uVar14 - 1 & uVar14;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar16 << 6;
    local_d0 = *(ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 8);
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar11 * 0x20,&uStack_c8);
    lVar13 = lVar16;
LAB_1003c1a10:
    uVar11 = local_d0;
    uStack_98 = uStack_c8;
    local_a0 = local_d0;
    uStack_88 = local_b8;
    uStack_90 = uStack_c0;
    local_80 = local_b0;
    if (local_d0 == 0) {
      _swift_release(param_1);
      return;
    }
    FUN_100011080(&uStack_98,&local_d0);
    puVar4 = &DAT_100fc2d20;
    FUN_1000037f0(&DAT_100fc2d20,&DAT_100c44d60);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    puVar17 = (undefined8 *)(puVar4 + 0x20);
    *puVar17 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_100ea9130;
    *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_100ea9128
    ;
    SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var9.unknown = SVar18.bridgeObject;
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar18 == SVar19) {
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
LAB_1003c1b10:
      FUN_10000cbfc(&local_d0,auStack_120);
      uVar5 = 0;
      FUN_10000ec2c(0,&DAT_100fc2c50,&PTR__OBJC_CLASS___NSFont_100f8d678);
      pIVar6 = &local_128;
      _swift_dynamicCast(pIVar6,auStack_120,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar5,6);
      if (((ulong)pIVar6 & 1) == 0) goto LAB_1003c1b5c;
      _swift_setDeallocating(puVar4);
      uVar5 = 0;
      FUN_1002fbbd0(0);
      _swift_arrayDestroy(puVar17,2,uVar5);
      IVar3 = objc_stub::fontDescriptor(local_128);
      IVar3 = objc_stub::symbolicTraits(IVar3);
      FUN_1000f3ef4(0);
      uVar11 = (ulong)((uint)IVar3 & 3);
      FUN_1000f3f6c(uVar11);
      objc_stub::addAttribute_value_range_(param_5,uVar10,uVar11,param_2,param_3);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar18.str,_Var9,(_StringComparisonResult)(__int8)SVar19.str);
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      if (bVar2) goto LAB_1003c1b10;
LAB_1003c1b5c:
      uVar7 = uVar11;
      FUN_100215bf0(uVar11,puVar4);
      _swift_setDeallocating(puVar4);
      uVar5 = 0;
      FUN_1002fbbd0(0);
      _swift_arrayDestroy(puVar17,2,uVar5);
      if ((uVar7 & 1) != 0) {
        puVar8 = &local_d0;
        FUN_100004640(puVar8,local_b8);
        Swift::__bridgeAnythingToObjectiveC();
        objc_stub::addAttribute_value_range_(param_5,uVar11,puVar8,param_2,param_3);
        _swift_unknownObjectRelease(puVar8);
      }
    }
    FUN_100004594(&local_d0);
    lVar16 = lVar13;
  } while( true );
}



/* Address: 0x1003c1c10 | FUN_1003c1c10 */

void FUN_1003c1c10(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c1c20 | FUN_1003c1c20 */

void FUN_1003c1c20(long param_1,long param_2)

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



/* Address: 0x1003c1c34 | FUN_1003c1c34 */

void FUN_1003c1c34(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003c1c3c | FUN_1003c1c3c */

void FUN_1003c1c3c(void)

{
  FUN_1003c1c84();
  return;
}



/* Address: 0x1003c1c60 | FUN_1003c1c60 */

void FUN_1003c1c60(void)

{
  FUN_1003c1c84();
  return;
}



/* Address: 0x1003c1c84 | FUN_1003c1c84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c1c84(ID param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  *(ID *)(unaff_x20 + 0x10) = param_1;
  IVar2 = objc_stub::managedObjectContext(param_1);
  if (IVar2 != 0) {
    uVar3 = 0;
    FUN_100356240(0);
    _swift_allocObject();
    FUN_100355fb8(IVar2,uVar3);
    *(ID *)(unaff_x20 + 0x18) = IVar2;
    _swift_allocObject(param_4,0x20,7);
    *(undefined8 *)(param_4 + 0x10) = param_2;
    *(undefined8 *)(param_4 + 0x18) = param_3;
    _swift_retain(IVar2);
    _swift_retain(param_3);
    IVar4 = objc_stub::objectID(param_1);
    _swift_allocObject(param_5,0x20,7);
    *(undefined8 *)(param_5 + 0x10) = param_6;
    *(long *)(param_5 + 0x18) = param_4;
    _swift_beginAccess(IVar2 + 0x30,auStack_78,0x21,0);
    _swift_retain(param_4);
    uVar3 = *(undefined8 *)(IVar2 + 0x30);
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uVar5 = *(undefined8 *)(IVar2 + 0x30);
    *(undefined8 *)(IVar2 + 0x30) = 0x8000000000000000;
    FUN_100381154(param_7,param_5,IVar4,uVar3);
    *(undefined8 *)(IVar2 + 0x30) = uVar5;
    _swift_endAccess(auStack_78);
    _swift_release(IVar2);
    _swift_release(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c1dfc);
  (*pcVar1)();
}



/* Address: 0x1003c1dfc | FUN_1003c1dfc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c1dfc(undefined8 param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(ID *)(unaff_x20 + 0x20) = IVar2;
  puVar1 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(ID *)(unaff_x20 + 0x28) = IVar2;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  puVar1 = &DAT_100eceee0;
  _swift_allocObject(&DAT_100eceee0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  FUN_1000037f0(&DAT_100fc29a0,&DAT_100c44b00);
  _swift_allocObject();
  FUN_1003c1c84(param_1,thunk_FUN_1003c1f34,puVar1,&DAT_100ecf160,&DAT_100ecf188,FUN_1003c2024,
                FUN_1003c2030);
  _swift_release(puVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  _swift_release(uVar3);
  FUN_1003c05d4();
  return;
}



/* Address: 0x1003c1f10 | FUN_1003c1f10 */

void FUN_1003c1f10(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c1f34 | FUN_1003c1f34 */

void FUN_1003c1f34(void)

{
  FUN_1003c04f0();
  return;
}



/* Address: 0x1003c1f3c | FUN_1003c1f3c */

void FUN_1003c1f3c(void)

{
  FUN_100309720();
  return;
}



/* Address: 0x1003c1f44 | FUN_1003c1f44 */

void FUN_1003c1f44(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c1f54 | FUN_1003c1f54 */

void FUN_1003c1f54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c0e50(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003c1f6c | FUN_1003c1f6c */

undefined8 FUN_1003c1f6c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc2c58;
  FUN_1000037f0(&DAT_100fc2c58,&DAT_100c44d00);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003c1fb4 | FUN_1003c1fb4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c1fb4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c1fd8 | FUN_1003c1fd8 */

void FUN_1003c1fd8(void)

{
  FUN_1003c1860();
  return;
}



/* Address: 0x1003c1fe0 | FUN_1003c1fe0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003c1fe0(void)

{
  return ZEXT816(0x100fc2ca0);
}



/* Address: 0x1003c2000 | FUN_1003c2000 */

void FUN_1003c2000(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c2024 | FUN_1003c2024 */

void FUN_1003c2024(undefined8 param_1,undefined8 param_2)

{
  FUN_1003c2064(param_1,param_2,FUN_1003214a8);
  return;
}



/* Address: 0x1003c2030 | FUN_1003c2030 */

void FUN_1003c2030(undefined8 *param_1,undefined1 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  return;
}



/* Address: 0x1003c2058 | FUN_1003c2058 */

void FUN_1003c2058(undefined8 param_1,undefined8 param_2)

{
  FUN_1003c2064(param_1,param_2,FUN_10032b0c8);
  return;
}



/* Address: 0x1003c2064 | FUN_1003c2064 */

void FUN_1003c2064(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = 0;
  (*param_3)(0);
  _swift_dynamicCastClassUnconditional(param_1,uVar2,0,0,0);
  (*pcVar1)();
  return;
}



/* Address: 0x1003c20b8 | thunk_FUN_1003c1fb4 */

void thunk_FUN_1003c1fb4(void)

{
  FUN_1003c1fb4();
  return;
}



/* Address: 0x1003c20bc | thunk_FUN_1003c1fb4 */

void thunk_FUN_1003c1fb4(void)

{
  FUN_1003c1fb4();
  return;
}



/* Address: 0x1003c20c0 | thunk_FUN_1003c2000 */

void thunk_FUN_1003c2000(void)

{
  FUN_1003c2000();
  return;
}



/* Address: 0x1003c20c4 | thunk_FUN_1003c2000 */

void thunk_FUN_1003c2000(void)

{
  FUN_1003c2000();
  return;
}



/* Address: 0x1003c20c8 | thunk_FUN_1003c2000 */

void thunk_FUN_1003c2000(void)

{
  FUN_1003c2000();
  return;
}



/* Address: 0x1003c20cc | thunk_FUN_1003c1c20 */

void thunk_FUN_1003c1c20(void)

{
  FUN_1003c1c20();
  return;
}



/* Address: 0x1003c20d0 | thunk_FUN_1003c1c20 */

void thunk_FUN_1003c1c20(void)

{
  FUN_1003c1c20();
  return;
}



/* Address: 0x1003c20d4 | thunk_FUN_1003c1c20 */

void thunk_FUN_1003c1c20(void)

{
  FUN_1003c1c20();
  return;
}



/* Address: 0x1003c20d8 | thunk_FUN_1003c1c20 */

void thunk_FUN_1003c1c20(void)

{
  FUN_1003c1c20();
  return;
}



/* Address: 0x1003c20dc | thunk_FUN_1003c1c20 */

void thunk_FUN_1003c1c20(void)

{
  FUN_1003c1c20();
  return;
}



/* Address: 0x1003c20e0 | thunk_FUN_1003c2030 */

void thunk_FUN_1003c2030(undefined8 *param_1,undefined1 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*param_2);
  return;
}



/* Address: 0x1003c20e4 | thunk_FUN_1003b80bc */

void thunk_FUN_1003b80bc(void)

{
  FUN_1003c14d0();
  return;
}



/* Address: 0x1003c20e8 | thunk_FUN_1003c1fd8 */

void thunk_FUN_1003c1fd8(void)

{
  FUN_1003c1860();
  return;
}



/* Address: 0x1003c20ec | thunk_FUN_1003c1c34 */

void thunk_FUN_1003c1c34(void)

{
  FUN_1003c1c34();
  return;
}



/* Address: 0x1003c20f0 | thunk_FUN_1003c1c34 */

void thunk_FUN_1003c1c34(void)

{
  FUN_1003c1c34();
  return;
}



/* Address: 0x1003c20f4 | thunk_FUN_1003c1c34 */

void thunk_FUN_1003c1c34(void)

{
  FUN_1003c1c34();
  return;
}



/* Address: 0x1003c20f8 | thunk_FUN_1003c1c34 */

void thunk_FUN_1003c1c34(void)

{
  FUN_1003c1c34();
  return;
}



/* Address: 0x1003c20fc | thunk_FUN_1003c1c34 */

void thunk_FUN_1003c1c34(void)

{
  FUN_1003c1c34();
  return;
}


