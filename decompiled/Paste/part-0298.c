/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003c2100 | thunk_FUN_1003c1f34 */

void thunk_FUN_1003c1f34(void)

{
  FUN_1003c04f0();
  return;
}



/* Address: 0x1003c2104 | thunk_FUN_1003c1c10 */

void thunk_FUN_1003c1c10(void)

{
  FUN_1003c1c10();
  return;
}



/* Address: 0x1003c2108 | thunk_FUN_1003c1f44 */

void thunk_FUN_1003c1f44(void)

{
  FUN_1003c1f44();
  return;
}



/* Address: 0x1003c210c | thunk_FUN_1003c1f44 */

void thunk_FUN_1003c1f44(void)

{
  FUN_1003c1f44();
  return;
}



/* Address: 0x1003c2110 | thunk_FUN_1003c1c10 */

void thunk_FUN_1003c1c10(void)

{
  FUN_1003c1c10();
  return;
}



/* Address: 0x1003c2114 | thunk_FUN_1003c1f44 */

void thunk_FUN_1003c1f44(void)

{
  FUN_1003c1f44();
  return;
}



/* Address: 0x1003c2118 | thunk_FUN_1003c1f44 */

void thunk_FUN_1003c1f44(void)

{
  FUN_1003c1f44();
  return;
}



/* Address: 0x1003c211c | thunk_FUN_1003c1f44 */

void thunk_FUN_1003c1f44(void)

{
  FUN_1003c1f44();
  return;
}



/* Address: 0x1003c2120 | FUN_1003c2120 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c214c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c2120(undefined8 param_1,undefined8 param_2)

{
  _swift_getObjectType();
  Combine::Published::init(param_1,param_2,param_2);
  return;
}



/* Address: 0x1003c2160 | FUN_1003c2160 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c218c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c2160(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1003214a8(0);
  Combine::Published::init(param_1,uVar1,uVar1);
  return;
}



/* Address: 0x1003c21a0 | FUN_1003c21a0 */

void FUN_1003c21a0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1003c2208 | FUN_1003c2208 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c2208(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  local_38 = uVar3;
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x1003c2280 | FUN_1003c2280 */

undefined8 FUN_1003c2280(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x1003c22f0 | thunk_FUN_1003c21a0 */

void thunk_FUN_1003c21a0(void)

{
  FUN_1003c21a0();
  return;
}



/* Address: 0x1003c22f4 | thunk_FUN_1003c2208 */

void thunk_FUN_1003c2208(void)

{
  FUN_1003c2208();
  return;
}



/* Address: 0x1003c22f8 | FUN_1003c22f8 */

void FUN_1003c22f8(long *param_1)

{
  Published PVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(*param_1 + _TtC9PasteCore20ItemPreviewViewModel::_item,auStack_48,0x21,0);
  PVar1.unknown = &DAT_100fc2d30;
  FUN_1000037f0(&DAT_100fc2d30,&DAT_100c44dc8);
  Combine::Published::_get_projectedValue(PVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1003c236c | FUN_1003c236c */

void FUN_1003c236c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  FUN_1000037f0(&DAT_100fc2ea8,&DAT_100c44e90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = *param_2;
  (**(code **)(extraout_x8 + 0x10))(auStack_50 + -extraout_x12,param_1);
  lVar1 = _TtC9PasteCore20ItemPreviewViewModel::_item;
  _swift_beginAccess(lVar2 + _TtC9PasteCore20ItemPreviewViewModel::_item,auStack_48,0x21,0);
  FUN_1000037f0(&DAT_100fc2d30,&DAT_100c44dc8);
  Combine::Published::_set_projectedValue
            ((Published *)(lVar2 + lVar1),(Publisher)(auStack_50 + -extraout_x12));
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1003c2438 | FUN_1003c2438 */

void FUN_1003c2438(void)

{
  Published PVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::_item,auStack_48,0x21,0);
  PVar1.unknown = &DAT_100fc2d30;
  FUN_1000037f0(&DAT_100fc2d30,&DAT_100c44dc8);
  Combine::Published::_get_projectedValue(PVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1003c24a8 | FUN_1003c24a8 */

void FUN_1003c24a8(void)

{
  FUN_10035ab24(FUN_1003c24b8,0);
  return;
}



/* Address: 0x1003c24b8 | FUN_1003c24b8 */

void FUN_1003c24b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003595f8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  uVar1 = local_50;
  (**(code **)(lStack_48 + 0x18))(local_50,lStack_48);
  puVar2 = &DAT_100fc0d10;
  FUN_1000037f0(&DAT_100fc0d10,&DAT_100c42ef0);
  puVar3 = &DAT_100fc2eb0;
  FUN_100016eac(&DAT_100fc2eb0,&DAT_100fc0d10,&DAT_100c42ef0,
                &TargetProtocolConformanceDescriptor_100c32ac0);
  FUN_1001b85f0(puVar2,puVar3);
  _swift_release(uVar1);
  FUN_100004594(auStack_68);
  *param_1 = puVar2;
  return;
}



/* Address: 0x1003c2588 | FUN_1003c2588 */

undefined8 FUN_1003c2588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1003c25dc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1003c25dc | FUN_1003c25dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003c2644 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003c25dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::itemObserver) = 0;
  lVar1 = _TtC9PasteCore20ItemPreviewViewModel::_item;
  uVar2 = 0;
  FUN_1003214a8(0);
  Combine::Published::init(unaff_x20 + lVar1,uVar2,uVar2);
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::context) = param_2;
  FUN_1003c2710(param_3,unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router);
  puVar3 = &DAT_100ecf200;
  _swift_allocObject(&DAT_100ecf200,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  FUN_1000037f0(&DAT_100fc29a0,&DAT_100c44b00);
  _swift_allocObject();
  FUN_1003c1c60(param_1,FUN_1003c27fc,puVar3);
  _swift_release(puVar3);
  FUN_100004594(param_3);
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::itemObserver);
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::itemObserver) = param_1;
  _swift_release(uVar2);
  return;
}



/* Address: 0x1003c2710 | FUN_1003c2710 */

long FUN_1003c2710(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x20) = uVar3;
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Address: 0x1003c275c | FUN_1003c275c */

void FUN_1003c275c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c2780 | FUN_1003c2780 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c2780(Published *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *local_38;
  
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    puVar1 = &DAT_100c44d80;
    _swift_getKeyPath(&DAT_100c44d80);
    puVar2 = &DAT_100c44da8;
    _swift_getKeyPath(&DAT_100c44da8);
    local_38 = param_1;
    Combine::Published::_set_subscript(param_1,&local_38,param_3,puVar1,puVar2);
  }
  return;
}



/* Address: 0x1003c27fc | FUN_1003c27fc */

void FUN_1003c27fc(void)

{
  FUN_1003c2780();
  return;
}



/* Address: 0x1003c2804 | FUN_1003c2804 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c2afc) */

void FUN_1003c2804(_StringGuts param_1,_StringGuts param_2)

{
  bool bVar1;
  CharacterSet CVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  _StringGuts _Var7;
  char *extraout_x1;
  char *pcVar9;
  long extraout_x8;
  void *pvVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_a0 [16];
  undefined *local_90;
  undefined *puStack_88;
  char *pcVar8;
  
  SVar13.bridgeObject = param_2.unknown;
  SVar13.str = param_1.unknown;
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar3 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar4 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_90);
  _swift_release(puVar3);
  _swift_release(puVar4);
  uVar5 = objc_stub::list((ID)local_90);
  if (((uVar5 != 0) && (FUN_1003250f0(), (uVar5 & 1) != 0)) && (FUN_100328f38(), (uVar5 & 1) == 0))
  {
    return;
  }
  puVar3 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar4 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_90);
  _swift_release(puVar3);
  _swift_release(puVar4);
  IVar6 = objc_stub::title((ID)local_90);
  pcVar8 = (char *)0x0;
  pcVar9 = extraout_x1;
  if (IVar6 == 0) {
LAB_1003c2990:
    FUN_100309008();
    SVar12.bridgeObject = pcVar9;
    SVar12.str = pcVar8;
  }
  else {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar8 = SVar12.bridgeObject;
    uVar5 = (ulong)SVar12.str & 0xffffffffffff;
    if (((ulong)pcVar8 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)pcVar8 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      pcVar9 = pcVar8;
      _swift_bridgeObjectRelease();
      goto LAB_1003c2990;
    }
  }
  pvVar10 = SVar12.bridgeObject;
  if (param_2.unknown == (undefined *)0x0) {
    _swift_bridgeObjectRelease(pvVar10);
    SVar13 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    if (SVar12 == SVar13) goto LAB_1003c2b04;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_2,(_StringComparisonResult)(__int8)SVar12.str);
    _swift_bridgeObjectRelease(pvVar10);
    if (bVar1) {
      return;
    }
    _Var7.unknown = param_2.unknown;
    local_90 = param_1.unknown;
    puStack_88 = param_2.unknown;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)_Var7.unknown);
    FUN_10030cce0();
    SVar13 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                       ((CharacterSet)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    (**(code **)(lVar11 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar2.unknown)
    ;
    _swift_bridgeObjectRelease(param_2.unknown);
  }
  pvVar10 = SVar13.bridgeObject;
  uVar5 = (ulong)SVar13.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar5 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  if (uVar5 == 0) {
    puVar3 = &DAT_100c44d80;
    _swift_getKeyPath(&DAT_100c44d80);
    puVar4 = &DAT_100c44da8;
    _swift_getKeyPath(&DAT_100c44da8);
    Combine::Published::_get_subscript(&local_90);
    _swift_release(puVar3);
    _swift_release(puVar4);
    IVar6 = objc_stub::title((ID)local_90);
    if (IVar6 != 0) {
      _swift_bridgeObjectRelease(pvVar10);
      SVar13 = (String)ZEXT816(0);
    }
  }
  pvVar10 = SVar13.bridgeObject;
  FUN_1002ff310(FUN_1003c40e8,&local_90);
LAB_1003c2b04:
  _swift_bridgeObjectRelease(pvVar10);
  return;
}



/* Address: 0x1003c2b2c | FUN_1003c2b2c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c2b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  puVar1 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(local_b0,param_2,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  local_a0 = param_3;
  uStack_98 = param_4;
  (**(code **)(*(long *)(lStack_68 + 0x10) + 0x20))(local_b0[0],FUN_1003bbb70,local_b0,local_70);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003c2c1c | FUN_1003c2c1c */

void FUN_1003c2c1c(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  FUN_100004640(lVar1,uVar2);
  FUN_1001ad344(uVar2,uVar3,lVar1);
  return;
}



/* Address: 0x1003c2c64 | FUN_1003c2c64 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c2d2c) */

void FUN_1003c2c64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ID local_38;
  
  puVar1 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar3 = objc_stub::list(local_38);
  if (((uVar3 == 0) || (FUN_1003250f0(), (uVar3 & 1) == 0)) || (FUN_100328f38(), (uVar3 & 1) != 0))
  {
    FUN_1002ff310(FUN_1003c4104);
    lVar4 = unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router;
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    FUN_100004640(lVar4,uVar5);
    FUN_1001ad344(uVar5,uVar6,lVar4);
  }
  return;
}



/* Address: 0x1003c2d78 | FUN_1003c2d78 */

void FUN_1003c2d78(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar3 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_58,param_2,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  *(undefined **)(puVar1 + 0x20) = local_58;
  uVar6 = *(undefined8 *)(param_2 + _TtC9PasteCore20ItemPreviewViewModel::context);
  lVar7 = *(long *)(lStack_68 + 0x10);
  pcVar5 = *(code **)(lVar7 + 0x40);
  puVar2 = &DAT_100fbe920;
  local_58 = puVar1;
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  puVar4 = &DAT_100fbe928;
  FUN_100016eac(&DAT_100fbe928,&DAT_100fbe920,&DAT_100c408d0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  (*pcVar5)(&local_58,uVar6,puVar2,puVar4,local_70,lVar7);
  _swift_release(puVar1);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003c2ee0 | FUN_1003c2ee0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c3384) */
/* WARNING: Removing unreachable block (ram,0x0001003c3168) */

void FUN_1003c2ee0(ID param_1,code *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  LocalizedStringResource LVar3;
  code *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_1b0 [12];
  uint local_1a4;
  code *local_1a0;
  undefined1 auStack_198 [96];
  String local_138;
  String local_128;
  String local_118;
  code *local_108;
  undefined *local_100;
  String SStack_f8;
  code *pcStack_e8;
  undefined8 local_e0;
  String local_d0;
  
  puVar2 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_1b0 + -extraout_x8;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100ecf228;
  _swift_allocObject(&DAT_100ecf228,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(ID *)(puVar2 + 0x18) = param_1;
  *(code **)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  if (param_2 == (code *)0x0) {
    FUN_100011128(param_4,param_5);
    _swift_retain();
    FUN_1002ff310(FUN_1003c4164,&local_d0);
    if (param_4 != (code *)0x0) {
      (*param_4)();
    }
LAB_1003c33a8:
    _swift_release(puVar2);
  }
  else {
    FUN_100011128(param_4,param_5);
    _swift_retain();
    pcVar4 = param_2;
    FUN_100011128(param_2,param_3);
    FUN_100328f38();
    if (((ulong)pcVar4 & 1) == 0) {
      objc_stub::name(param_1);
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      thunk_FUN_1001e6b28(LVar3.unknown,SVar11.str,SVar11.bridgeObject);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar11 = (extension_Foundation)::Swift::String::init(LVar3);
      FUN_1001c2288(LVar3.unknown);
      local_118 = (extension_Foundation)::Swift::String::init(LVar3);
      local_128 = (String)ZEXT816(0);
      local_108 = FUN_100004520;
      local_e0 = 0;
      pcStack_e8 = (code *)0x0;
      SStack_f8 = (String)ZEXT816(0);
      local_100 = (undefined *)0x0;
      local_138 = SVar11;
      local_d0 = SVar11;
      FUN_10003c978(&local_d0,auStack_198);
      FUN_10003c9b4(&local_138);
      (*param_2)(&local_d0);
      _swift_release(puVar2);
      FUN_10003c9b4(&local_d0);
    }
    else {
      local_1a0 = param_2;
      FUN_1003b4444();
      if (pcVar4 == (code *)0x0) {
        FUN_100325588();
        (**(code **)(*(long *)(pcVar4 + -8) + 0x38))(puVar7,1,1,pcVar4);
LAB_1003c327c:
        FUN_1003c417c(puVar7);
LAB_1003c3284:
        puVar8 = &DAT_100c44d80;
        _swift_getKeyPath(&DAT_100c44d80);
        uVar10 = 0;
        _swift_getKeyPath();
        Combine::Published::_get_subscript(&local_d0);
        _swift_release(puVar8);
        _swift_release();
        FUN_100321210();
        if ((uVar10 & 1) == 0) {
LAB_1003c3368:
          FUN_1002ff310(FUN_1003c4304,&local_d0);
          pcVar4 = local_1a0;
          if (param_4 != (code *)0x0) {
            (*param_4)();
          }
          FUN_100004550(pcVar4,param_3);
          goto LAB_1003c33a8;
        }
        puVar8 = &DAT_100c44d80;
        _swift_getKeyPath(&DAT_100c44d80);
        puVar9 = &DAT_100c44da8;
        _swift_getKeyPath(&DAT_100c44da8);
        Combine::Published::_get_subscript(&local_d0);
        _swift_release(puVar8);
        _swift_release(puVar9);
        uVar10 = objc_stub::list((ID)local_d0.str);
        if (uVar10 != 0) {
          FUN_1003250f0();
          uVar1 = (uint)uVar10;
          if (((uVar10 & 1) != 0) && (FUN_100328f38(), local_1a4 = uVar1, (uVar1 & 1) == 0))
          goto LAB_1003c3368;
        }
        objc_stub::name(param_1);
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6af8(LVar3.unknown,SVar11.str,SVar11.bridgeObject);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        SVar12 = (extension_Foundation)::Swift::String::init(LVar3);
        objc_stub::name(param_1);
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6ae8(LVar3.unknown,SVar11.str,SVar11.bridgeObject);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        SVar11 = (extension_Foundation)::Swift::String::init(LVar3);
        FUN_1001c1508(LVar3.unknown);
        SVar13 = (extension_Foundation)::Swift::String::init(LVar3);
        _swift_retain(puVar2);
        FUN_1001c0788(LVar3.unknown);
        SStack_f8 = (extension_Foundation)::Swift::String::init(LVar3);
      }
      else {
        FUN_10032670c(puVar7);
        lVar5 = 0;
        FUN_100325588();
        puVar6 = puVar7;
        (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar7,1,lVar5);
        if ((int)puVar6 == 1) goto LAB_1003c327c;
        FUN_1003c417c();
        FUN_100328f38();
        if (((ulong)puVar7 & 1) == 0) goto LAB_1003c3284;
        objc_stub::name(param_1);
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6b18(LVar3.unknown,SVar11.str,SVar11.bridgeObject);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        SVar12 = (extension_Foundation)::Swift::String::init(LVar3);
        objc_stub::name(param_1);
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6b08(LVar3.unknown,SVar11.str,SVar11.bridgeObject);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        SVar11 = (extension_Foundation)::Swift::String::init(LVar3);
        FUN_1001c1508(LVar3.unknown);
        SVar13 = (extension_Foundation)::Swift::String::init(LVar3);
        _swift_retain(puVar2);
        FUN_1001c0788(LVar3.unknown);
        SStack_f8 = (extension_Foundation)::Swift::String::init(LVar3);
      }
      local_108 = FUN_1003c4158;
      pcStack_e8 = FUN_100004520;
      local_e0 = 0;
      local_138 = SVar12;
      local_128 = SVar11;
      local_118 = SVar13;
      local_100 = puVar2;
      local_d0 = SVar12;
      FUN_10003c978(&local_d0,auStack_198);
      FUN_10003c9b4(&local_138);
      param_2 = local_1a0;
      (*local_1a0)(&local_d0);
      _swift_release(puVar2);
      FUN_10003c9b4(&local_d0);
    }
    FUN_100004550(param_2,param_3);
  }
  return;
}



/* Address: 0x1003c3534 | FUN_1003c3534 */

/* WARNING: Removing unreachable block (ram,0x0001003c356c) */

void FUN_1003c3534(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  FUN_1002ff310(FUN_1003c4304,auStack_50);
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Address: 0x1003c3590 | FUN_1003c3590 */

void FUN_1003c3590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar3 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_58,param_2,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  *(undefined **)(puVar1 + 0x20) = local_58;
  lVar6 = *(long *)(lStack_68 + 0x10);
  pcVar5 = *(code **)(lVar6 + 0x28);
  puVar2 = &DAT_100fbe920;
  local_58 = puVar1;
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  puVar4 = &DAT_100fbe928;
  FUN_100016eac(&DAT_100fbe928,&DAT_100fbe920,&DAT_100c408d0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  (*pcVar5)(&local_58,param_3,puVar2,puVar4,local_70,lVar6);
  _swift_release(puVar1);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003c36f0 | FUN_1003c36f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c3730) */
/* WARNING: Removing unreachable block (ram,0x0001003c373c) */
/* WARNING: Removing unreachable block (ram,0x0001003c3744) */

undefined8 FUN_1003c36f0(void)

{
  FUN_1002ff2ec(FUN_1003c3790,0);
  FUN_1003c2ee0();
  return 0;
}



/* Address: 0x1003c3790 | FUN_1003c3790 */

void FUN_1003c3790(undefined8 *param_1)

{
  code *pcVar1;
  LocalizedStringResource LVar2;
  char *pcVar3;
  ulong uVar4;
  long extraout_x8;
  String SVar5;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  FUN_100357e58(auStack_78);
  FUN_100004640(auStack_78,local_60);
  FUN_1001c6aa4(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar5 = (extension_Foundation)::Swift::String::init
                    ((LocalizedStringResource)
                     (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pcVar3 = SVar5.str;
  uVar4 = 8;
  FUN_100324c28();
  if (uVar4 < 8) {
    FUN_100367c5c(pcVar3,SVar5.bridgeObject,(&DAT_100fbfd88)[uVar4],local_60,uStack_58);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    *param_1 = pcVar3;
    FUN_100004594(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003c3894);
  (*pcVar1)();
}



/* Address: 0x1003c3894 | FUN_1003c3894 */

/* WARNING: Removing unreachable block (ram,0x0001003c38c4) */

void FUN_1003c3894(ulong param_1)

{
  FUN_1003c3a40();
  if ((param_1 & 1) != 0) {
    FUN_1002ff310(FUN_1003c41c4);
  }
  return;
}



/* Address: 0x1003c38e8 | FUN_1003c38e8 */

void FUN_1003c38e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  puVar2 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar3 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_58,param_2,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  *(undefined **)(puVar1 + 0x20) = local_58;
  lVar5 = *(long *)(lStack_68 + 0x10);
  pcVar6 = *(code **)(lVar5 + 0x48);
  puVar2 = &DAT_100fbe920;
  local_58 = puVar1;
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  puVar4 = &DAT_100fbe928;
  FUN_100016eac(&DAT_100fbe928,&DAT_100fbe920,&DAT_100c408d0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  (*pcVar6)(&local_58,puVar2,puVar4,local_70,lVar5);
  _swift_release(puVar1);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003c3a40 | FUN_1003c3a40 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003c3a40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  ID local_38;
  
  puVar1 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  uVar3 = objc_stub::list(local_38);
  uVar4 = 0;
  if (uVar3 != 0) {
    FUN_1003250f0();
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      puVar1 = &DAT_100c44d80;
      _swift_getKeyPath(&DAT_100c44d80);
      puVar2 = &DAT_100c44da8;
      _swift_getKeyPath(&DAT_100c44da8);
      Combine::Published::_get_subscript(&local_38);
      _swift_release(puVar1);
      _swift_release(puVar2);
      uVar3 = objc_stub::list(local_38);
      if (uVar3 == 0) {
        uVar4 = 1;
      }
      else {
        FUN_1003250f0();
        uVar4 = (uint)uVar3;
        if ((uVar3 & 1) == 0) {
          uVar4 = 1;
        }
        else {
          FUN_100328f38();
        }
      }
    }
  }
  return uVar4 & 1;
}



/* Address: 0x1003c3b8c | FUN_1003c3b8c */

void FUN_1003c3b8c(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC9PasteCore20ItemPreviewViewModel::_item;
  puVar2 = &DAT_100fc2d30;
  FUN_1000037f0(&DAT_100fc2d30,&DAT_100c44dc8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  FUN_100004594(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router);
  FUN_100021e40(*(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::context));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::itemObserver));
  return;
}



/* Address: 0x1003c3c08 | FUN_1003c3c08 */

void FUN_1003c3c08(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC9PasteCore20ItemPreviewViewModel::_item;
  puVar2 = &DAT_100fc2d30;
  FUN_1000037f0(&DAT_100fc2d30,&DAT_100c44dc8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  FUN_100004594(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router);
  FUN_100021e40(*(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::context));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::itemObserver));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003c3c90 | FUN_1003c3c90 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003c3c90(ID *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ID IVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  ID local_58;
  
  puVar5 = &DAT_100c44d80;
  _swift_getKeyPath(&DAT_100c44d80);
  puVar2 = &DAT_100c44da8;
  _swift_getKeyPath(&DAT_100c44da8);
  Combine::Published::_get_subscript(&local_58);
  _swift_release(puVar5);
  _swift_release(puVar2);
  uVar3 = objc_stub::rawType(local_58);
  FUN_100323594();
  uVar1 = (uint)uVar3 & 0xff;
  if (uVar1 < 3) {
    if ((uVar3 & 0xff) == 0) goto LAB_1003c3fa0;
    if (uVar1 == 1) {
      puVar5 = &DAT_100c44d80;
      _swift_getKeyPath(&DAT_100c44d80);
      puVar2 = &DAT_100c44da8;
      _swift_getKeyPath(&DAT_100c44da8);
      Combine::Published::_get_subscript(&local_58);
      _swift_release(puVar5);
      _swift_release(puVar2);
      IVar4 = 0;
      FUN_1003bed54();
      IVar8 = IVar4;
      _swift_allocObject();
      puVar5 = &DAT_100c44dd0;
      _swift_getKeyPath();
      puVar2 = &DAT_100fbdc28;
      FUN_1000037f0(&DAT_100fbdc28,&DAT_100c44bc0);
      _swift_allocObject();
      FUN_1000da6e0(puVar5,puVar2);
      *(undefined **)(IVar8 + 0x18) = puVar5;
      *(undefined8 *)(IVar8 + 0x20) = 0;
      *(undefined2 *)(IVar8 + 0x28) = 0;
      *(undefined8 *)(IVar8 + 0x30) = 0;
      *(undefined8 *)(IVar8 + 0x38) = 0;
      *(ID *)(IVar8 + 0x10) = local_58;
      goto LAB_1003c3f94;
    }
    IVar8 = 0;
    FUN_1003bc4bc();
    puVar5 = &DAT_100c44d80;
    _swift_getKeyPath(&DAT_100c44d80);
    puVar2 = &DAT_100c44da8;
    _swift_getKeyPath(&DAT_100c44da8);
    Combine::Published::_get_subscript(&local_58);
    _swift_release(puVar5);
    _swift_release(puVar2);
    lVar7 = unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router;
    uVar9 = *(undefined8 *)(lVar7 + 0x18);
    uVar10 = *(undefined8 *)(lVar7 + 0x20);
    FUN_100004640(lVar7,uVar9);
    FUN_1003bc3f4(local_58,lVar7,IVar8,uVar9,uVar10);
  }
  else {
    if (4 < uVar1) {
      if (uVar1 == 5) {
        puVar5 = &DAT_100c44d80;
        _swift_getKeyPath(&DAT_100c44d80);
        puVar2 = &DAT_100c44da8;
        _swift_getKeyPath(&DAT_100c44da8);
        Combine::Published::_get_subscript(&local_58);
        _swift_release(puVar5);
        _swift_release(puVar2);
        IVar4 = 0;
        FUN_1003c1fe0();
        IVar8 = IVar4;
        _swift_allocObject();
        *(undefined8 *)(IVar8 + 0x10) = 0;
        *(undefined8 *)(IVar8 + 0x18) = 0;
        puVar5 = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        IVar6 = objc_stub::init((ID)puVar5);
        *(ID *)(IVar8 + 0x20) = IVar6;
        puVar5 = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        IVar6 = objc_stub::init((ID)puVar5);
        *(ID *)(IVar8 + 0x28) = IVar6;
        *(undefined8 *)(IVar8 + 0x30) = 0;
        *(ID *)(IVar8 + 0x38) = local_58;
        puVar5 = &DAT_100ecf250;
        _swift_allocObject(&DAT_100ecf250,0x18,7);
        _swift_weakInit(puVar5 + 0x10,IVar8);
        FUN_1000037f0(&DAT_100fc29a0,&DAT_100c44b00);
        _swift_allocObject();
        IVar6 = local_58;
        FUN_1003c1c60(local_58,FUN_1003c1f34,puVar5);
        _swift_release(puVar5);
        uVar9 = *(undefined8 *)(IVar8 + 0x30);
        *(ID *)(IVar8 + 0x30) = IVar6;
        _swift_release(uVar9);
        FUN_1003c05d4();
LAB_1003c3f94:
        param_1[3] = IVar4;
        *param_1 = IVar8;
        return;
      }
LAB_1003c3fa0:
      param_1[3] = (ID)(PTR___type_metadata_for____100eae0c8 + 8);
      return;
    }
    if (uVar1 == 3) {
      puVar5 = &DAT_100c44d80;
      _swift_getKeyPath(&DAT_100c44d80);
      puVar2 = &DAT_100c44da8;
      _swift_getKeyPath(&DAT_100c44da8);
      Combine::Published::_get_subscript(&local_58);
      _swift_release(puVar5);
      _swift_release(puVar2);
      IVar4 = 0;
      FUN_1003bcd70();
      IVar8 = IVar4;
      _swift_allocObject();
      *(ID *)(IVar8 + 0x10) = local_58;
      param_1[3] = IVar4;
      local_58 = IVar8;
      goto LAB_1003c40c8;
    }
    IVar8 = 0;
    FUN_1003c0184();
    puVar5 = &DAT_100c44d80;
    _swift_getKeyPath(&DAT_100c44d80);
    puVar2 = &DAT_100c44da8;
    _swift_getKeyPath(&DAT_100c44da8);
    Combine::Published::_get_subscript(&local_58);
    _swift_release(puVar5);
    _swift_release(puVar2);
    lVar7 = unaff_x20 + _TtC9PasteCore20ItemPreviewViewModel::router;
    uVar9 = *(undefined8 *)(lVar7 + 0x18);
    uVar10 = *(undefined8 *)(lVar7 + 0x30);
    FUN_100004640(lVar7,uVar9);
    FUN_1003c00b8(local_58,lVar7,IVar8,uVar9,uVar10);
  }
  param_1[3] = IVar8;
LAB_1003c40c8:
  *param_1 = local_58;
  return;
}



/* Address: 0x1003c40e8 | FUN_1003c40e8 */

void FUN_1003c40e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c2b2c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003c4104 | FUN_1003c4104 */

void FUN_1003c4104(void)

{
  FUN_1003c2d78();
  return;
}



/* Address: 0x1003c411c | FUN_1003c411c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c411c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1003c4158 | FUN_1003c4158 */

void FUN_1003c4158(void)

{
  long unaff_x20;
  
  FUN_1003c3534(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1003c4164 | FUN_1003c4164 */

void FUN_1003c4164(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003c3590(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003c417c | FUN_1003c417c */

undefined8 FUN_1003c417c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003c41c4 | FUN_1003c41c4 */

void FUN_1003c41c4(void)

{
  FUN_1003c38e8();
  return;
}



/* Address: 0x1003c41dc | thunk_FUN_1002d3708 */

void thunk_FUN_1002d3708(void)

{
  FUN_1002d3708();
  return;
}



/* Address: 0x1003c41e0 | thunk_FUN_1003c22f8 */

void thunk_FUN_1003c22f8(void)

{
  FUN_1003c22f8();
  return;
}



/* Address: 0x1003c41e4 | thunk_FUN_1003c236c */

void thunk_FUN_1003c236c(void)

{
  FUN_1003c236c();
  return;
}



/* Address: 0x1003c41e8 | FUN_1003c41e8 */

void FUN_1003c41e8(void)

{
  FUN_1003c41f0(0);
  return;
}



/* Address: 0x1003c41f0 | FUN_1003c41f0 */

void FUN_1003c41f0(undefined8 param_1)

{
  if (DAT_100fc2d78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cadab4);
  return;
}



/* Address: 0x1003c4228 | FUN_1003c4228 */

void FUN_1003c4228(long param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1003c42b0();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100c44e48;
    local_30 = &DAT_100c44e60;
    puStack_28 = &DAT_100c44e78;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1003c42b0 | FUN_1003c42b0 */

void FUN_1003c42b0(void)

{
  long lVar1;
  Published PVar2;
  
  if (DAT_100fc2d88.unknown == (undefined *)0x0) {
    lVar1 = 0xff;
    FUN_1003214a8();
    PVar2 = Combine::Published::typeMetadataAccessor();
    if (lVar1 == 0) {
      DAT_100fc2d88 = PVar2;
    }
  }
  return;
}



/* Address: 0x1003c4304 | FUN_1003c4304 */

void FUN_1003c4304(void)

{
  FUN_1003c4164();
  return;
}



/* Address: 0x1003c4318 | thunk_FUN_1003c275c */

void thunk_FUN_1003c275c(void)

{
  FUN_1003c275c();
  return;
}



/* Address: 0x1003c431c | FUN_1003c431c */

void FUN_1003c431c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ObservableObjectPublisher *pOVar4;
  undefined8 *puVar5;
  AnyCancellable *pAVar6;
  AnyCancellable *pAVar7;
  long extraout_x8;
  undefined *puVar8;
  long extraout_x12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_70 [24];
  long local_58;
  long local_50;
  undefined8 local_48;
  
  lVar1 = *param_2;
  local_48 = param_3;
  _swift_conformsToProtocol2(lVar1,PTR_Combine__ObservableObject_100ea97b0);
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    pAVar7 = (AnyCancellable *)0x0;
  }
  else {
    plVar2 = param_2;
    _swift_getObjectType(param_2);
    puVar8 = PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0;
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,lVar1,plVar2,
               PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0,
               PTR___associated_type_descriptor_for_Combine_ObservableObject_ObjectWillChangePublisher_100ea95e0
              );
    local_58 = lVar3;
    _swift_getAssociatedConformanceWitness
              (lVar1,plVar2,lVar3,puVar8,
               PTR___associated_conformance_descriptor_for_Combine_ObservableObject_Combine_ObservableObject_ObjectWillChangePublisher__Combine_Publisher_100ea97b8
              );
    local_50 = lVar1;
    FUN_10000cbb0(auStack_70);
    _swift_retain(param_2);
    Combine::ObservableObject::_get_objectWillChange();
    lVar1 = local_58;
    FUN_100004640(auStack_70,local_58);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
    (**(code **)(extraout_x12 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    pOVar4 = Combine::ObservableObjectPublisher::typeMetadataAccessor();
    puVar5 = &local_78;
    _swift_dynamicCast(puVar5,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1,pOVar4,6
                      );
    FUN_100004594(auStack_70);
    puVar8 = &DAT_100ecf2c8;
    _swift_allocObject(&DAT_100ecf2c8,0x18,7);
    if ((int)puVar5 == 0) {
      local_78 = 0;
    }
    _swift_weakInit(puVar8 + 0x10,local_78);
    _swift_retain(puVar8);
    FUN_1000037f0(&DAT_100fc07c8,&DAT_100c425f0);
    FUN_1003c576c();
    pAVar6 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(param_2);
    _swift_release(local_78);
    _swift_release_n(puVar8,2);
    pAVar7 = Combine::AnyCancellable::typeMetadataAccessor();
    *param_1 = pAVar6;
    puVar8 = 
    PTR___protocol_witness_table_for_Combine_AnyCancellable___Combine_Cancellable_in_Combine_100ea9778
    ;
  }
  param_1[3] = pAVar7;
  param_1[4] = puVar8;
  return;
}



/* Address: 0x1003c4528 | FUN_1003c4528 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003c4528(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  AnyCancellable *pAVar3;
  long lVar4;
  ObservableObjectPublisher *pOVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  AnyCancellable *pAVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined1 auStack_70 [24];
  long local_58;
  long local_50;
  undefined8 local_48;
  
  lVar1 = param_2;
  local_48 = param_3;
  _swift_getObjectType();
  lVar2 = lVar1;
  _swift_conformsToProtocol2();
  puVar7 = PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0;
  if (lVar2 == 0 || param_2 == 0) {
    pAVar3 = (AnyCancellable *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    puVar7 = (undefined *)0x0;
  }
  else {
    lVar4 = 0;
    _swift_getAssociatedTypeWitness
              (0,lVar2,lVar1,
               PTR___protocol_requirements_base_descriptor_for_Combine_ObservableObject_100ea97d0,
               PTR___associated_type_descriptor_for_Combine_ObservableObject_ObjectWillChangePublisher_100ea95e0
              );
    local_58 = lVar4;
    _swift_getAssociatedConformanceWitness
              (lVar2,lVar1,lVar4,puVar7,
               PTR___associated_conformance_descriptor_for_Combine_ObservableObject_Combine_ObservableObject_ObjectWillChangePublisher__Combine_Publisher_100ea97b8
              );
    local_50 = lVar2;
    FUN_10000cbb0(auStack_70);
    Combine::ObservableObject::_get_objectWillChange();
    lVar1 = local_58;
    FUN_100004640(auStack_70,local_58);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
    (**(code **)(extraout_x12 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    pOVar5 = Combine::ObservableObjectPublisher::typeMetadataAccessor();
    puVar6 = &local_78;
    _swift_dynamicCast(puVar6,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1,pOVar5,6
                      );
    FUN_100004594(auStack_70);
    puVar7 = &DAT_100ecf2c8;
    _swift_allocObject(&DAT_100ecf2c8,0x18,7);
    if ((int)puVar6 == 0) {
      local_78 = 0;
    }
    _swift_weakInit(puVar7 + 0x10,local_78);
    _swift_retain(puVar7);
    FUN_1000037f0(&DAT_100fc07c8,&DAT_100c425f0);
    FUN_1003c576c();
    pAVar8 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(local_78);
    _swift_release_n(puVar7,2);
    pAVar3 = Combine::AnyCancellable::typeMetadataAccessor();
    *param_1 = pAVar8;
    puVar7 = 
    PTR___protocol_witness_table_for_Combine_AnyCancellable___Combine_Cancellable_in_Combine_100ea9778
    ;
  }
  param_1[3] = pAVar3;
  param_1[4] = puVar7;
  return;
}



/* Address: 0x1003c473c | FUN_1003c473c */

code * FUN_1003c473c(void)

{
  long lVar1;
  code *pcVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists;
  pcVar2 = *(code **)(unaff_x20 + _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists);
  pcVar3 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    pcVar3 = FUN_1000cec3c;
    FUN_10035a880(FUN_1000cec3c,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    _swift_retain();
    _swift_release(uVar4);
    pcVar2 = (code *)0x0;
  }
  _swift_retain(pcVar2);
  return pcVar3;
}



/* Address: 0x1003c47a8 | FUN_1003c47a8 */

void FUN_1003c47a8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)
           (unaff_x20 + _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists);
  *(undefined8 *)(unaff_x20 + _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists) =
       param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1003c47c0 | FUN_1003c47c0 */

undefined1  [16] FUN_1003c47c0(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_1003c473c();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1003c47f4;
  return auVar2;
}



/* Address: 0x1003c47f4 | FUN_1003c47f4 */

void FUN_1003c47f4(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = *(undefined8 *)
           (param_1[1] + _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists);
  *(undefined8 *)(param_1[1] + _TtC9PasteCore23ListCollectionViewModel::___lazy_storage___lists) =
       uVar1;
  if ((param_2 & 1) != 0) {
    _swift_retain(uVar1);
    _swift_release(uVar2);
    uVar2 = uVar1;
  }
  _swift_release(uVar2);
  return;
}


