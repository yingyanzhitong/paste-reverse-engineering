/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10035a880 | FUN_10035a880 */

void FUN_10035a880(undefined8 param_1,undefined8 param_2)

{
  FUN_10035a89c(param_1,param_2,&DAT_100fc0d10,&DAT_100c42ef0,FUN_10035bd5c);
  return;
}



/* Address: 0x10035a89c | FUN_10035a89c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10035a89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_80);
  FUN_100004640(auStack_80,local_68);
  uVar1 = local_68;
  (**(code **)(local_60 + 0x10))(local_68,local_60);
  FUN_100004594(auStack_80);
  lVar2 = 0;
  FUN_100358ba4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_70 = param_1;
  local_68 = param_2;
  local_60 = lVar2;
  FUN_1000037f0(param_3,param_4);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return local_58;
}



/* Address: 0x10035a9e4 | FUN_10035a9e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035a9e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_70);
  FUN_100004640(auStack_70,local_58);
  uVar1 = local_58;
  (**(code **)(local_50 + 0x10))(local_58,local_50);
  FUN_100004594(auStack_70);
  lVar2 = 0;
  FUN_100358ba4();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined8 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  local_60 = param_1;
  local_58 = param_2;
  local_50 = lVar2;
  FUN_1000037f0(&DAT_100fc0d08,&DAT_100c42930);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(lVar2);
  return local_48;
}



/* Address: 0x10035ab24 | FUN_10035ab24 */

void FUN_10035ab24(undefined8 param_1,undefined8 param_2)

{
  FUN_10035a89c(param_1,param_2,&DAT_100fc0d00,&DAT_100c42f00,FUN_10035bd5c);
  return;
}



/* Address: 0x10035ab40 | FUN_10035ab40 */

void FUN_10035ab40(undefined8 param_1,undefined8 param_2)

{
  FUN_10035a89c(param_1,param_2,&DAT_100fbe920,&DAT_100c408d0,FUN_10035bb5c);
  return;
}



/* Address: 0x10035ab5c | FUN_10035ab5c */

undefined8 FUN_10035ab5c(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x18) == '\x01') {
    FUN_1003293c4(*(undefined8 *)(unaff_x20 + 0x20));
    uVar1 = 0x1e;
    if ((param_2 & 0xff) != 1 && (param_2 & 0xff) != 0xff) {
      uVar1 = param_1;
    }
    *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
    *(undefined1 *)(unaff_x20 + 0x18) = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  return uVar1;
}



/* Address: 0x10035abb8 | FUN_10035abb8 */

void FUN_10035abb8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = 0;
  return;
}



/* Address: 0x10035abc4 | FUN_10035abc4 */

undefined1  [16] FUN_10035abc4(long *param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  plVar1 = param_1;
  FUN_10035ab5c();
  *param_1 = (long)plVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10035abf8;
  return auVar2;
}



/* Address: 0x10035abf8 | FUN_10035abf8 */

void FUN_10035abf8(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  *(undefined8 *)(lVar1 + 0x10) = *param_1;
  *(undefined1 *)(lVar1 + 0x18) = 0;
  return;
}



/* Address: 0x10035ac08 | FUN_10035ac08 */

bool FUN_10035ac08(long param_1)

{
  FUN_10035ab5c();
  return param_1 == 0;
}



/* Address: 0x10035ac24 | FUN_10035ac24 */

long FUN_10035ac24(void)

{
  code *pcVar1;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  pcVar1 = FUN_10035aca8;
  FUN_10035a72c(FUN_10035aca8,0);
  *(code **)(unaff_x20 + 0x20) = pcVar1;
  return unaff_x20;
}



/* Address: 0x10035ac74 | FUN_10035ac74 */

void FUN_10035ac74(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  pcVar1 = FUN_10035aca8;
  FUN_10035a72c(FUN_10035aca8,0);
  *(code **)(unaff_x20 + 0x20) = pcVar1;
  return;
}



/* Address: 0x10035aca8 | FUN_10035aca8 */

void FUN_10035aca8(undefined8 *param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_1003595f8(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(lStack_38 + 0x28))(local_40,lStack_38);
  *param_1 = local_40;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x10035ad10 | FUN_10035ad10 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10035ad10(void)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  DateComponents DVar6;
  DateComponents DVar7;
  Calendar CVar8;
  TimeZone TVar9;
  NSDateComponents *pNVar10;
  ID IVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  long lStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc0c40;
  FUN_1000037f0(&DAT_100fc0c40,&DAT_100c428e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)LVar4.unknown - extraout_x8_00;
  puVar5 = &DAT_100fc0c48;
  FUN_1000037f0(&DAT_100fc0c48,&DAT_100c428e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_01;
  DVar6 = Foundation::DateComponents::typeMetadataAccessor();
  lVar16 = *(long *)(DVar6.unknown + -8);
  DVar7 = DVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10035ab5c();
  if (DVar7.unknown == (undefined *)0x0) {
    FUN_1001c6924(LVar4.unknown);
    SVar17 = (extension_Foundation)::Swift::String::init(LVar4);
    return SVar17;
  }
  lVar15 = *(long *)(unaff_x20 + 0x10);
  if (lVar15 - 1U < 6) {
    uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
    CVar8 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar8.unknown + -8) + 0x38))(lVar14,1,1,CVar8.unknown);
    TVar9 = Foundation::TimeZone::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar13,1,1,TVar9.unknown);
    *(undefined1 *)(lVar12 + -8) = 1;
    *(undefined8 *)(lVar12 + -0x10) = 0;
    *(undefined1 *)(lVar12 + -0x18) = 1;
    *(undefined8 *)(lVar12 + -0x20) = 0;
    *(undefined1 *)(lVar12 + -0x28) = 1;
    *(undefined8 *)(lVar12 + -0x30) = 0;
    *(undefined1 *)(lVar12 + -0x38) = 1;
    *(undefined8 *)(lVar12 + -0x40) = 0;
    *(undefined1 *)(lVar12 + -0x48) = 1;
    *(undefined8 *)(lVar12 + -0x50) = 0;
    *(undefined1 *)(lVar12 + -0x58) = 1;
    *(undefined8 *)(lVar12 + -0x60) = 0;
    *(undefined1 *)(lVar12 + -0x68) = 1;
    *(undefined8 *)(lVar12 + -0x70) = 0;
    *(undefined1 *)(lVar12 + -0x78) = 1;
    *(undefined8 *)(lVar12 + -0x80) = 0;
    *(undefined1 *)(lVar12 + -0x88) = 1;
    *(undefined8 *)(lVar12 + -0x90) = 0;
    *(undefined1 *)(lVar12 + -0x98) = 1;
    *(undefined8 *)(lVar12 + -0xa0) = 0;
    *(undefined1 *)(lVar12 + -0xa8) = uVar1;
    *(long *)(lVar12 + -0xb0) = lVar15;
    goto LAB_10035afdc;
  }
  if (lVar15 - 7U < 0x17) {
    CVar8 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar8.unknown + -8) + 0x38))(lVar14,1,1,CVar8.unknown);
    TVar9 = Foundation::TimeZone::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar13,1,1,TVar9.unknown);
    uVar2 = (uint)((int)lVar15 * 0x25) >> 8;
    *(undefined1 *)(lVar12 + -8) = 1;
    *(undefined8 *)(lVar12 + -0x10) = 0;
    *(undefined1 *)(lVar12 + -0x18) = 1;
    *(undefined8 *)(lVar12 + -0x20) = 0;
    *(undefined1 *)(lVar12 + -0x28) = 0;
    *(ulong *)(lVar12 + -0x30) = (ulong)(uVar2 + (((int)lVar15 - uVar2 & 0xfe) >> 1) >> 2 & 0x3f);
    *(undefined1 *)(lVar12 + -0x38) = 1;
    *(undefined8 *)(lVar12 + -0x40) = 0;
    *(undefined1 *)(lVar12 + -0x48) = 1;
    *(undefined8 *)(lVar12 + -0x50) = 0;
    *(undefined1 *)(lVar12 + -0x58) = 1;
    *(undefined8 *)(lVar12 + -0x60) = 0;
    *(undefined1 *)(lVar12 + -0x68) = 1;
    *(undefined8 *)(lVar12 + -0x70) = 0;
    *(undefined1 *)(lVar12 + -0x78) = 1;
    *(undefined8 *)(lVar12 + -0x80) = 0;
    *(undefined1 *)(lVar12 + -0x88) = 1;
    *(undefined8 *)(lVar12 + -0x90) = 0;
    *(undefined1 *)(lVar12 + -0x98) = 1;
    *(undefined8 *)(lVar12 + -0xa0) = 0;
    *(undefined1 *)(lVar12 + -0xa8) = 1;
  }
  else {
    if (lVar15 - 0x1eU < 0x14f) {
      CVar8 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar8.unknown + -8) + 0x38))(lVar14,1,1,CVar8.unknown);
      TVar9 = Foundation::TimeZone::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar13,1,1,TVar9.unknown);
      *(undefined1 *)(lVar12 + -8) = 1;
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined1 *)(lVar12 + -0x18) = 1;
      *(undefined8 *)(lVar12 + -0x20) = 0;
      *(undefined1 *)(lVar12 + -0x28) = 1;
      *(undefined8 *)(lVar12 + -0x30) = 0;
      *(undefined1 *)(lVar12 + -0x38) = 1;
      *(undefined8 *)(lVar12 + -0x40) = 0;
      *(undefined1 *)(lVar12 + -0x48) = 1;
      *(undefined8 *)(lVar12 + -0x50) = 0;
      *(undefined1 *)(lVar12 + -0x58) = 1;
      *(undefined8 *)(lVar12 + -0x60) = 0;
      *(undefined1 *)(lVar12 + -0x68) = 1;
      *(undefined8 *)(lVar12 + -0x70) = 0;
      *(undefined1 *)(lVar12 + -0x78) = 1;
      *(undefined8 *)(lVar12 + -0x80) = 0;
      *(undefined1 *)(lVar12 + -0x88) = 1;
      *(undefined8 *)(lVar12 + -0x90) = 0;
      *(undefined1 *)(lVar12 + -0x98) = 1;
      *(undefined8 *)(lVar12 + -0xa0) = 0;
      *(undefined1 *)(lVar12 + -0xa8) = 1;
      *(undefined8 *)(lVar12 + -0xb0) = 0;
      goto LAB_10035afdc;
    }
    CVar8 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar8.unknown + -8) + 0x38))(lVar14,1,1,CVar8.unknown);
    TVar9 = Foundation::TimeZone::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar9.unknown + -8) + 0x38))(lVar13,1,1,TVar9.unknown);
    if (lVar15 == 0x16d) {
      *(undefined1 *)(lVar12 + -8) = 1;
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined1 *)(lVar12 + -0x18) = 1;
      *(undefined8 *)(lVar12 + -0x20) = 0;
      *(undefined1 *)(lVar12 + -0x28) = 1;
      *(undefined8 *)(lVar12 + -0x30) = 0;
      *(undefined1 *)(lVar12 + -0x38) = 1;
      *(undefined8 *)(lVar12 + -0x40) = 0;
      *(undefined1 *)(lVar12 + -0x48) = 1;
      *(undefined8 *)(lVar12 + -0x50) = 0;
      *(undefined1 *)(lVar12 + -0x58) = 1;
      *(undefined8 *)(lVar12 + -0x60) = 0;
      *(undefined1 *)(lVar12 + -0x68) = 1;
      *(undefined8 *)(lVar12 + -0x70) = 0;
      *(undefined1 *)(lVar12 + -0x78) = 1;
      *(undefined8 *)(lVar12 + -0x80) = 0;
      *(undefined1 *)(lVar12 + -0x88) = 1;
      *(undefined8 *)(lVar12 + -0x90) = 0;
      *(undefined1 *)(lVar12 + -0x98) = 1;
      *(undefined8 *)(lVar12 + -0xa0) = 0;
      *(undefined1 *)(lVar12 + -0xa8) = 1;
      *(undefined8 *)(lVar12 + -0xb0) = 0;
      goto LAB_10035afdc;
    }
    *(undefined1 *)(lVar12 + -8) = 1;
    *(undefined8 *)(lVar12 + -0x10) = 0;
    *(undefined1 *)(lVar12 + -0x18) = 1;
    *(undefined8 *)(lVar12 + -0x20) = 0;
    *(undefined1 *)(lVar12 + -0x28) = 1;
    *(undefined8 *)(lVar12 + -0x30) = 0;
    *(undefined1 *)(lVar12 + -0x38) = 1;
    *(undefined8 *)(lVar12 + -0x40) = 0;
    *(undefined1 *)(lVar12 + -0x48) = 1;
    *(undefined8 *)(lVar12 + -0x50) = 0;
    *(undefined1 *)(lVar12 + -0x58) = 1;
    *(undefined8 *)(lVar12 + -0x60) = 0;
    *(undefined1 *)(lVar12 + -0x68) = 1;
    *(undefined8 *)(lVar12 + -0x70) = 0;
    *(undefined1 *)(lVar12 + -0x78) = 1;
    *(undefined8 *)(lVar12 + -0x80) = 0;
    *(undefined1 *)(lVar12 + -0x88) = 1;
    *(undefined8 *)(lVar12 + -0x90) = 0;
    *(undefined1 *)(lVar12 + -0x98) = 1;
    *(undefined8 *)(lVar12 + -0xa0) = 0;
    *(undefined1 *)(lVar12 + -0xa8) = 1;
  }
  *(undefined8 *)(lVar12 + -0xb0) = 0;
LAB_10035afdc:
  Foundation::DateComponents::_init();
  pNVar10 = Foundation::DateComponents::_bridgeToObjectiveC
                      ((DateComponents)&_OBJC_CLASS___NSDateComponentsFormatter);
  IVar11 = objc_stub::localizedStringFromDateComponents_unitsStyle_
                     ((ID)&_OBJC_CLASS___NSDateComponentsFormatter,pNVar10,3);
  if (IVar11 != 0) {
    SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    (**(code **)(lVar16 + 8))(lVar12,DVar6.unknown);
    return SVar17;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10035b284);
  (*pcVar3)();
}



/* Address: 0x10035b284 | FUN_10035b284 */

void FUN_10035b284(void)

{
  code *pcVar1;
  code *pcVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  TimeZone TVar5;
  DateComponents DVar6;
  long lVar7;
  long extraout_x8;
  undefined *puVar8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  code *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  LocalizedStringResource local_90;
  code *local_88;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fc0c40;
  local_90.unknown = puVar8;
  FUN_1000037f0(&DAT_100fc0c40,&DAT_100c428e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar8 - extraout_x8_00;
  puVar4 = &DAT_100fc0c48;
  FUN_1000037f0(&DAT_100fc0c48,&DAT_100c428e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar9 - extraout_x8_01;
  local_70 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12;
  local_a0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_00;
  local_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_01;
  puVar4 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 10;
  *(undefined8 *)(puVar4 + 0x10) = 5;
  local_68 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_88 = *(code **)(*(long *)(local_68 + -8) + 0x38);
  (*local_88)(lVar11,1,1,local_68);
  TVar5 = Foundation::TimeZone::typeMetadataAccessor();
  local_b0 = *(code **)(*(long *)(TVar5.unknown + -8) + 0x38);
  local_78 = TVar5.unknown;
  (*local_b0)(lVar9,1,1,TVar5.unknown);
  *(undefined1 *)(lVar10 + -8) = 1;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined1 *)(lVar10 + -0x38) = 1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  *(undefined1 *)(lVar10 + -0x48) = 1;
  *(undefined8 *)(lVar10 + -0x50) = 0;
  *(undefined1 *)(lVar10 + -0x58) = 1;
  *(undefined8 *)(lVar10 + -0x60) = 0;
  *(undefined1 *)(lVar10 + -0x68) = 1;
  *(undefined8 *)(lVar10 + -0x70) = 0;
  *(undefined1 *)(lVar10 + -0x78) = 1;
  *(undefined8 *)(lVar10 + -0x80) = 0;
  *(undefined1 *)(lVar10 + -0x88) = 1;
  *(undefined8 *)(lVar10 + -0x90) = 0;
  *(undefined1 *)(lVar10 + -0x98) = 1;
  *(undefined8 *)(lVar10 + -0xa0) = 0;
  *(undefined1 *)(lVar10 + -0xa8) = 0;
  *(undefined8 *)(lVar10 + -0xb0) = 1;
  lVar7 = lVar9;
  DVar6 = Foundation::DateComponents::_init();
  FUN_10035b800();
  local_80 = *(code **)(lVar12 + 8);
  (*local_80)(lVar10,local_70);
  pcVar2 = local_88;
  *(undefined **)(puVar4 + 0x20) = DVar6.unknown;
  *(long *)(puVar4 + 0x28) = lVar7;
  (*local_88)(lVar11,1,1,local_68);
  pcVar1 = local_b0;
  (*local_b0)(lVar9,1,1,TVar5.unknown);
  *(undefined1 *)(lVar10 + -8) = 1;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 0;
  *(undefined8 *)(lVar10 + -0x30) = 1;
  *(undefined1 *)(lVar10 + -0x38) = 1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  *(undefined1 *)(lVar10 + -0x48) = 1;
  *(undefined8 *)(lVar10 + -0x50) = 0;
  *(undefined1 *)(lVar10 + -0x58) = 1;
  *(undefined8 *)(lVar10 + -0x60) = 0;
  *(undefined1 *)(lVar10 + -0x68) = 1;
  *(undefined8 *)(lVar10 + -0x70) = 0;
  *(undefined1 *)(lVar10 + -0x78) = 1;
  *(undefined8 *)(lVar10 + -0x80) = 0;
  *(undefined1 *)(lVar10 + -0x88) = 1;
  *(undefined8 *)(lVar10 + -0x90) = 0;
  *(undefined1 *)(lVar10 + -0x98) = 1;
  *(undefined8 *)(lVar10 + -0xa0) = 0;
  *(undefined1 *)(lVar10 + -0xa8) = 1;
  *(undefined8 *)(lVar10 + -0xb0) = 0;
  lVar7 = local_a8;
  lVar12 = lVar9;
  DVar6 = Foundation::DateComponents::_init();
  FUN_10035b800();
  puVar8 = local_70;
  (*local_80)(lVar7,local_70);
  *(undefined **)(puVar4 + 0x30) = DVar6.unknown;
  *(long *)(puVar4 + 0x38) = lVar12;
  (*pcVar2)(lVar11,1,1,local_68);
  (*pcVar1)(lVar9,1,1,local_78);
  *(undefined1 *)(lVar10 + -8) = 1;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined1 *)(lVar10 + -0x38) = 1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  *(undefined1 *)(lVar10 + -0x48) = 1;
  *(undefined8 *)(lVar10 + -0x50) = 0;
  *(undefined1 *)(lVar10 + -0x58) = 1;
  *(undefined8 *)(lVar10 + -0x60) = 0;
  *(undefined1 *)(lVar10 + -0x68) = 1;
  *(undefined8 *)(lVar10 + -0x70) = 0;
  *(undefined1 *)(lVar10 + -0x78) = 1;
  *(undefined8 *)(lVar10 + -0x80) = 0;
  *(undefined1 *)(lVar10 + -0x88) = 1;
  *(undefined8 *)(lVar10 + -0x90) = 0;
  *(undefined1 *)(lVar10 + -0x98) = 1;
  *(undefined8 *)(lVar10 + -0xa0) = 0;
  *(undefined1 *)(lVar10 + -0xa8) = 1;
  *(undefined8 *)(lVar10 + -0xb0) = 0;
  lVar7 = local_a0;
  lVar12 = lVar9;
  DVar6 = Foundation::DateComponents::_init();
  FUN_10035b800();
  pcVar2 = local_80;
  (*local_80)(lVar7,puVar8);
  *(undefined **)(puVar4 + 0x40) = DVar6.unknown;
  *(long *)(puVar4 + 0x48) = lVar12;
  (*local_88)(lVar11,1,1,local_68);
  (*pcVar1)(lVar9,1,1,local_78);
  *(undefined1 *)(lVar10 + -8) = 1;
  *(undefined8 *)(lVar10 + -0x10) = 0;
  *(undefined1 *)(lVar10 + -0x18) = 1;
  *(undefined8 *)(lVar10 + -0x20) = 0;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined1 *)(lVar10 + -0x38) = 1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  *(undefined1 *)(lVar10 + -0x48) = 1;
  *(undefined8 *)(lVar10 + -0x50) = 0;
  *(undefined1 *)(lVar10 + -0x58) = 1;
  *(undefined8 *)(lVar10 + -0x60) = 0;
  *(undefined1 *)(lVar10 + -0x68) = 1;
  *(undefined8 *)(lVar10 + -0x70) = 0;
  *(undefined1 *)(lVar10 + -0x78) = 1;
  *(undefined8 *)(lVar10 + -0x80) = 0;
  *(undefined1 *)(lVar10 + -0x88) = 1;
  *(undefined8 *)(lVar10 + -0x90) = 0;
  *(undefined1 *)(lVar10 + -0x98) = 1;
  *(undefined8 *)(lVar10 + -0xa0) = 0;
  *(undefined1 *)(lVar10 + -0xa8) = 1;
  *(undefined8 *)(lVar10 + -0xb0) = 0;
  lVar7 = local_98;
  DVar6 = Foundation::DateComponents::_init();
  FUN_10035b800();
  (*pcVar2)(lVar7,puVar8);
  LVar3.unknown = local_90.unknown;
  *(undefined **)(puVar4 + 0x50) = DVar6.unknown;
  *(long *)(puVar4 + 0x58) = lVar9;
  FUN_1001dc154(local_90.unknown);
  SVar13 = (extension_Foundation)::Swift::String::init(LVar3);
  *(String *)(puVar4 + 0x60) = SVar13;
  DAT_101057978 = puVar4;
  return;
}



/* Address: 0x10035b800 | FUN_10035b800 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_10035b800(void)

{
  CharacterSet CVar1;
  NSDateComponents *pNVar2;
  ID IVar3;
  CharacterSet CVar4;
  undefined *puVar5;
  CharacterSet CVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  CharacterSet in;
  CharacterSet CVar7;
  long lVar8;
  code *pcVar9;
  String SVar10;
  String SVar11;
  String local_60;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  CVar7.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  in.unknown = (undefined *)(((long)CVar7.unknown - extraout_x12) - extraout_x12_00);
  pNVar2 = Foundation::DateComponents::_bridgeToObjectiveC
                     ((DateComponents)&_OBJC_CLASS___NSDateComponentsFormatter);
  IVar3 = objc_stub::localizedStringFromDateComponents_unitsStyle_
                    ((ID)&_OBJC_CLASS___NSDateComponentsFormatter,pNVar2,3);
  if (IVar3 != 0) {
    local_60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar5 = local_60.bridgeObject;
    CVar6.unknown = puVar5;
    CVar4 = Foundation::CharacterSet::get_decimalDigits((CharacterSet)0x0);
    Foundation::CharacterSet::get_whitespaces(CVar4);
    Foundation::CharacterSet::union(CVar7,CVar6);
    pcVar9 = *(code **)(lVar8 + 8);
    (*pcVar9)(CVar7.unknown,CVar1.unknown);
    (*pcVar9)((long)CVar7.unknown - extraout_x12,CVar1.unknown);
    FUN_10030cce0();
    SVar10 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (*pcVar9)(in.unknown,CVar1.unknown);
    _swift_bridgeObjectRelease(puVar5);
    local_60 = SVar10;
    SVar11 = (extension_Foundation)::Swift::StringProtocol::get_capitalized();
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    return SVar11;
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10035b9b0);
  (*pcVar9)();
}



/* Address: 0x10035b9b0 | FUN_10035b9b0 */

undefined8 * FUN_10035b9b0(void)

{
  if (DAT_100fc0c50 != -1) {
    _swift_once(&DAT_100fc0c50,FUN_10035b284);
  }
  return &DAT_101057978;
}



/* Address: 0x10035b9f0 | FUN_10035b9f0 */

void FUN_10035b9f0(void)

{
  if (DAT_100fc0c50 != -1) {
    _swift_once(&DAT_100fc0c50,FUN_10035b284);
  }
  _swift_bridgeObjectRetain(DAT_101057978);
  return;
}



/* Address: 0x10035ba30 | FUN_10035ba30 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035ba30(void)

{
  return;
}



/* Address: 0x10035ba4c | FUN_10035ba4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035ba4c(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10035ba70 | FUN_10035ba70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035ba70(void)

{
  return ZEXT816(0x100fc0c98);
}



/* Address: 0x10035ba90 | FUN_10035ba90 */

double FUN_10035ba90(long param_1)

{
  long unaff_x20;
  double dVar1;
  double dVar2;
  
  FUN_10035ab5c();
  if (param_1 - 1U < 6) {
    dVar1 = ((double)*(long *)(unaff_x20 + 0x10) + -1.0) / 6.0;
    dVar2 = 1.0;
  }
  else if (param_1 - 7U < 0x17) {
    dVar1 = ((double)*(long *)(unaff_x20 + 0x10) / 7.0 + -1.0) / 3.0;
    dVar2 = 2.0;
  }
  else {
    if (0x14e < param_1 - 0x1eU) {
      dVar1 = 5.0;
      if (param_1 != 0) {
        dVar1 = 0.0;
      }
      dVar2 = 4.0;
      if (param_1 != 0x16d) {
        dVar2 = dVar1;
      }
      return dVar2;
    }
    dVar1 = ((double)*(long *)(unaff_x20 + 0x10) / 30.0 + -1.0) / 11.0;
    dVar2 = 3.0;
  }
  return dVar1 + dVar2;
}



/* Address: 0x10035bb5c | FUN_10035bb5c */

void FUN_10035bb5c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10035bb8c | FUN_10035bb8c */

undefined1  [16] FUN_10035bb8c(double param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  dVar4 = (double)(long)param_1;
  if (param_1 <= 4.0) {
    dVar4 = param_1;
  }
  bVar3 = false;
  if ((1.0 <= dVar4) && (bVar3 = false, !NAN(dVar4))) {
    bVar3 = dVar4 < 2.0;
  }
  if (bVar3) {
    dVar4 = (double)(long)((dVar4 + -1.0) * 6.0 + 1.0);
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd3c);
      (*pcVar2)();
    }
    if (-9.223372036854778e+18 < dVar4) {
      if (dVar4 < 9.223372036854776e+18) {
        auVar5._0_8_ = (ulong)dVar4;
        auVar5._8_8_ = 0;
        return auVar5;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd44);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd40);
    (*pcVar2)();
  }
  bVar3 = false;
  if ((2.0 <= dVar4) && (bVar3 = false, !NAN(dVar4))) {
    bVar3 = dVar4 < 3.0;
  }
  if (!bVar3) {
    bVar3 = false;
    if ((3.0 <= dVar4) && (bVar3 = false, !NAN(dVar4))) {
      bVar3 = dVar4 < 4.0;
    }
    if (!bVar3) {
      if (dVar4 == 4.0) {
        return ZEXT816(0x16d);
      }
      return ZEXT116(dVar4 != 5.0) << 0x40;
    }
    dVar4 = (double)(long)((dVar4 + -3.0) * 11.0 + 1.0) * 30.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd54);
      (*pcVar2)();
    }
    if (-9.223372036854778e+18 < dVar4) {
      if (dVar4 < 9.223372036854776e+18) {
        uVar1 = 0x16d;
        if ((long)dVar4 < 0x15a) {
          uVar1 = (long)dVar4;
        }
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar1;
        return auVar7;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd5c);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd58);
    (*pcVar2)();
  }
  dVar4 = (double)(long)((dVar4 + -2.0) * 3.0 + 1.0) * 7.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd48);
    (*pcVar2)();
  }
  if (-9.223372036854778e+18 < dVar4) {
    if (dVar4 < 9.223372036854776e+18) {
      uVar1 = 0x1e;
      if ((long)dVar4 < 0x1c) {
        uVar1 = (long)dVar4;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar1;
      return auVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd50);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10035bd4c);
  (*pcVar2)();
}



/* Address: 0x10035bd5c | FUN_10035bd5c */

void FUN_10035bd5c(void)

{
  FUN_10035bb5c();
  return;
}



/* Address: 0x10035bd70 | FUN_10035bd70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035bd70(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100355be8(unaff_x20 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Address: 0x10035bdbc | FUN_10035bdbc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035bdbc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100355be8(unaff_x20 + 0x38);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10035be10 | FUN_10035be10 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035be10(void)

{
  return ZEXT816(0x100fc0d60);
}



/* Address: 0x10035be30 | FUN_10035be30 */

void FUN_10035be30(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
  _swift_task_switch(FUN_10035be48,0,0);
  return;
}



/* Address: 0x10035be48 | FUN_10035be48 */

void FUN_10035be48(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10035be98;
  FUN_10035bfcc(0,0);
  return;
}



/* Address: 0x10035be98 | FUN_10035be98 */

void FUN_10035be98(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  lVar2 = *(long *)(lVar8 + 0x38);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0x40));
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  lVar4 = *(long *)(lVar2 + 0x40);
  FUN_100004640(lVar2 + 0x20,uVar3);
  piVar6 = *(int **)(lVar4 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(lVar8 + 0x48) = plVar5;
  *plVar5 = lVar7;
  plVar5[1] = (long)FUN_10035bf30;
                    /* WARNING: Could not recover jumptable at 0x00010035bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0,0,uVar3,lVar4);
  return;
}



/* Address: 0x10035bf30 | FUN_10035bf30 */

void FUN_10035bf30(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  if (unaff_x20 != 0) {
    FUN_1000da768(lVar3 + 0x10);
    lVar1 = *(long *)(lVar3 + 0x30);
    FUN_100004640(lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x28));
    (**(code **)(lVar1 + 0x20))();
    _swift_errorRelease();
    FUN_100004594(lVar3 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010035bfc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10035bfcc | FUN_10035bfcc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10035bfcc(undefined8 param_1,undefined8 param_2)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  long unaff_x22;
  long lVar8;
  long lVar2;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar2 = CONCAT71(extraout_var,SVar1.value);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  lVar8 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar4 = 0xd000000000000021;
  FUN_1000d4624(0xd000000000000021,0x8000000100da2da0);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
  IVar5 = objc_stub::newBackgroundContext(*(ID *)(unaff_x20 + 0x18));
  *(ID *)(unaff_x22 + 0x40) = IVar5;
  puVar6 = &DAT_100ecc680;
  _swift_allocObject(&DAT_100ecc680,0x20,7);
  *(undefined **)(unaff_x22 + 0x48) = puVar6;
  *(ID *)(puVar6 + 0x10) = IVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  (**(code **)(lVar8 + 0x68))
            (uVar3,*(undefined4 *)
                    PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
             ,lVar2);
  plVar7 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10035c11c;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar7);
  return;
}



/* Address: 0x10035c11c | FUN_10035c11c */

void FUN_10035c11c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  undefined8 uVar4;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x48);
    _swift_errorRelease();
    _swift_release(uVar4);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  uVar4 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  (**(code **)(*(long *)(lVar2 + 0x28) + 8))
            (*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x20));
  _swift_release(uVar1);
  FUN_1000da368(uVar3,uVar4);
  _swift_task_switch(FUN_10035c1c8,uVar3,uVar4);
  return;
}



/* Address: 0x10035c1c8 | FUN_10035c1c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035c1c8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010035c208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10035c20c | FUN_10035c20c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10035c20c(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  char *pcVar3;
  _CocoaArrayWrapper _Var4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined *puVar9;
  NSString *pNVar10;
  _ArrayBuffer self;
  NSPredicate *pNVar11;
  undefined1 *puVar12;
  ID self_00;
  ID IVar13;
  ID IVar14;
  undefined *puVar15;
  _StringGuts _Var16;
  void *pvVar17;
  char *pcVar18;
  NSString *pNVar19;
  void *pvVar20;
  ulong uVar21;
  __int64 _Var22;
  long unaff_x21;
  long lVar23;
  ID IVar24;
  ID IVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  long local_e0;
  long local_d0;
  __int64 local_c0;
  char local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  NSString *local_78;
  void *pvStack_70;
  
  bVar7 = false;
  FUN_1003214a8();
  SVar26 = Swift::__typeName(bVar7);
  puVar9 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar9,pNVar10);
  pNVar11 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  pNVar11 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar11);
  objc_stub::setPredicate_((ID)self.unknown,pNVar11);
  pcVar18 = (char *)0x64;
  objc_stub::FUN_100c0bb60((ID)self.unknown);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    if ((ulong)self.unknown >> 0x3e == 0) {
      IVar25 = *(ID *)((self.unknown & 0xffffffffffffff8U) + 0x10);
    }
    else {
      _Var4.unknown = self.unknown & 0xffffffffffffff8U;
      if (((ulong)self.unknown & 0x8000000000000000) != 0) {
        _Var4.unknown = self.unknown;
      }
      IVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
    }
    if (IVar25 == 0) {
      FUN_1000d468c(auStack_90);
      puVar12 = auStack_90;
      FUN_100004640(puVar12,local_78);
      FUN_1000d4dd4(0xd000000000000025,0x8000000100da2ed0,local_78,pvStack_70,puVar12);
      _swift_bridgeObjectRelease(self.unknown);
      FUN_100004594(auStack_90);
    }
    else {
      FUN_1000d468c(auStack_90);
      pvVar20 = pvStack_70;
      pNVar10 = local_78;
      _Var16.unknown = local_78;
      FUN_100004640(auStack_90);
      local_a0 = 0;
      local_98 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x38,_Var16);
      SVar26.bridgeObject = &DAT_e600000000000000;
      SVar26.str = (char *)0x20646e756f46;
      SVar36.bridgeObject = param_4;
      SVar36.str = pcVar18;
      Swift::String::append(SVar26,SVar36);
      if ((ulong)self.unknown >> 0x3e == 0) {
        local_c0 = *(__int64 *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var4.unknown = self.unknown & 0xffffffffffffff8;
        if (((ulong)self.unknown & 0x8000000000000000) != 0) {
          _Var4.unknown = self.unknown;
        }
        local_c0 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
      }
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar37.bridgeObject = param_4;
      SVar37.str = pcVar18;
      Swift::String::append(SVar26,SVar37);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar27.bridgeObject = (void *)0x8000000100da2e30;
      SVar27.str = (char *)0xd000000000000030;
      SVar38.bridgeObject = param_4;
      SVar38.str = pcVar18;
      Swift::String::append(SVar27,SVar38);
      uVar5 = local_98;
      FUN_1000d4dd4(local_a0,local_98);
      _swift_bridgeObjectRelease(uVar5);
      FUN_100004594(auStack_90);
      if ((long)IVar25 < 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10035ca9c);
        (*pcVar6)();
      }
      local_e0 = 0;
      lVar23 = 0;
      IVar24 = 0;
      local_d0 = 0;
      do {
        if (((ulong)self.unknown & 0xc000000000000001) == 0) {
          self_00 = *(ID *)(self.unknown + IVar24 * 8 + 0x20);
          pNVar19 = pNVar10;
        }
        else {
          self_00 = IVar24;
          Swift::_ArrayBuffer::__getElementSlowPath(IVar24,self);
          pNVar19 = pNVar10;
        }
        objc_stub::checksum(self_00);
        SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar17 = SVar26.bridgeObject;
        _swift_bridgeObjectRelease(pvVar17);
        uVar21 = (ulong)SVar26.str & 0xffffffffffff;
        if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
          uVar21 = (ulong)pvVar17 >> 0x38 & 0xf;
        }
        if (uVar21 == 0) {
          IVar13 = objc_stub::rawType(self_00);
          uVar8 = (uint)IVar13;
          if (5 < IVar13) {
            uVar8 = 0;
          }
          uVar21 = (ulong)uVar8;
          IVar14 = objc_stub::data(self_00);
          FUN_10031b218();
          IVar13 = IVar14;
          FUN_1003216bc();
          _swift_bridgeObjectRelease(IVar14);
          pvVar17 = pvVar20;
          if (uVar21 != 0) {
            uVar2 = IVar13 & 0xffffffffffff;
            if ((uVar21 & 0x2000000000000000) != 0) {
              uVar2 = uVar21 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) {
              pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              objc_stub::setIdentifier_(self_00,pNVar10);
              pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(uVar21);
              objc_stub::setChecksum_(self_00);
              bVar7 = SCARRY8(local_e0,1);
              local_e0 = local_e0 + 1;
              if (bVar7) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x10035ca7c);
                (*pcVar6)();
              }
              goto LAB_10035c5c8;
            }
            _swift_bridgeObjectRelease(uVar21);
            pvVar17 = pvVar20;
          }
          bVar7 = SCARRY8(local_d0,1);
          local_d0 = local_d0 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10035ca78);
            (*pcVar6)();
          }
          FUN_1000d468c(auStack_90);
          pvVar20 = pvStack_70;
          pNVar10 = local_78;
          _Var16.unknown = local_78;
          FUN_100004640(auStack_90);
          local_a0 = 0;
          local_98 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x27,_Var16);
          SVar28.bridgeObject = (void *)0x8000000100da2eb0;
          SVar28.str = (char *)0xd000000000000019;
          SVar39.bridgeObject = pvVar17;
          SVar39.str = (char *)pNVar19;
          Swift::String::append(SVar28,SVar39);
          IVar13 = objc_stub::rawType(self_00);
          uVar8 = (uint)IVar13;
          FUN_100323594();
          uVar1 = 0;
          if ((uVar8 & 0xff) != 6) {
            uVar1 = (char)uVar8;
          }
          local_c0 = CONCAT71(local_c0._1_7_,uVar1);
          pcVar18 = "\x01\x02";
          puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
          Swift::__print_unlocked
                    (&local_c0,&local_a0,&DAT_100eca8f0,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          SVar29.bridgeObject = (void *)0xea00000000003d61;
          SVar29.str = (char *)0x746144736168202c;
          SVar40.bridgeObject = puVar9;
          SVar40.str = pcVar18;
          Swift::String::append(SVar29,SVar40);
          puVar15 = (undefined *)objc_stub::data(self_00);
          FUN_10031b218();
          if ((ulong)puVar15 >> 0x3e == 0) {
            _Var22 = *(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var4.unknown = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar15) {
              _Var4.unknown = puVar15;
            }
            _Var22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
          }
          _swift_bridgeObjectRelease(puVar15);
          pcVar3 = (char *)0x65736c6166;
          if (_Var22 != 0) {
            pcVar3 = (char *)0x65757274;
          }
          puVar12 = &DAT_e500000000000000;
          if (_Var22 != 0) {
            puVar12 = &DAT_e400000000000000;
          }
          SVar30.bridgeObject = puVar12;
          SVar30.str = pcVar3;
          SVar41.bridgeObject = puVar9;
          SVar41.str = pcVar18;
          Swift::String::append(SVar30,SVar41);
          _swift_bridgeObjectRelease(puVar12);
          uVar5 = local_98;
          FUN_1000d4df0(local_a0,local_98);
          _swift_bridgeObjectRelease(uVar5);
          FUN_100004594(auStack_90);
        }
        else {
          pNVar10 = (NSString *)objc_stub::checksum(self_00);
          objc_stub::setIdentifier_(self_00);
          bVar7 = SCARRY8(lVar23,1);
          lVar23 = lVar23 + 1;
          if (bVar7) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10035ca74);
            (*pcVar6)();
          }
        }
LAB_10035c5c8:
        IVar24 = IVar24 + 1;
      } while (IVar25 != IVar24);
      IVar25 = objc_stub::hasChanges(param_1);
      if ((IVar25 & 1) != 0) {
        FUN_10035ca9c();
      }
      FUN_1000d468c(auStack_90);
      _Var16.unknown = local_78;
      FUN_100004640(auStack_90);
      local_a0 = 0;
      local_98 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x45,_Var16);
      SVar31.bridgeObject = (void *)0x8000000100da2e70;
      SVar31.str = (char *)0xd00000000000001c;
      SVar42.bridgeObject = pvVar20;
      SVar42.str = (char *)pNVar10;
      Swift::String::append(SVar31,SVar42);
      local_c0 = lVar23;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar43.bridgeObject = pvVar20;
      SVar43.str = (char *)pNVar10;
      Swift::String::append(SVar26,SVar43);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar32.bridgeObject = (void *)0x8000000100da2e90;
      SVar32.str = (char *)0xd000000000000010;
      SVar44.bridgeObject = pvVar20;
      SVar44.str = (char *)pNVar10;
      Swift::String::append(SVar32,SVar44);
      local_c0 = local_e0;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar45.bridgeObject = pvVar20;
      SVar45.str = (char *)pNVar10;
      Swift::String::append(SVar26,SVar45);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar33.bridgeObject = (void *)0xec000000202c6174;
      SVar33.str = (char *)0x6164206d6f726620;
      SVar46.bridgeObject = pvVar20;
      SVar46.str = (char *)pNVar10;
      Swift::String::append(SVar33,SVar46);
      local_c0 = local_d0;
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar47.bridgeObject = pvVar20;
      SVar47.str = (char *)pNVar10;
      Swift::String::append(SVar26,SVar47);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar34.bridgeObject = &DAT_e700000000000000;
      SVar34.str = (char *)0x64656c69616620;
      SVar48.bridgeObject = pvVar20;
      SVar48.str = (char *)pNVar10;
      Swift::String::append(SVar34,SVar48);
      uVar5 = local_98;
      FUN_1000d4dd4(local_a0,local_98,local_78,pvStack_70);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(self.unknown);
      FUN_100004594(auStack_90);
    }
  }
  else {
    FUN_1000d468c(auStack_90);
    _Var16.unknown = local_78;
    FUN_100004640(auStack_90);
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x30,_Var16);
    _swift_bridgeObjectRelease(local_98);
    local_a0 = 0xd00000000000002e;
    local_98 = 0x8000000100da2e00;
    pcVar18 = local_b8;
    _swift_getErrorValue();
    SVar26 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar35.bridgeObject = param_4;
    SVar35.str = pcVar18;
    Swift::String::append(SVar26,SVar35);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    uVar5 = local_98;
    FUN_1000d4e0c(local_a0,local_98,local_78,pvStack_70);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar5);
    FUN_100004594(auStack_90);
  }
  return;
}



/* Address: 0x10035ca9c | FUN_10035ca9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1 FUN_10035ca9c(void)

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
  
  IVar3 = unaff_x20;
  _swift_getObjectType();
  local_41 = 1;
  puVar4 = &DAT_100ecc6a8;
  _swift_allocObject(&DAT_100ecc6a8,0x28,7);
  *(ID *)(puVar4 + 0x10) = unaff_x20;
  *(undefined1 **)(puVar4 + 0x18) = &local_41;
  *(ID *)(puVar4 + 0x20) = IVar3;
  puVar5 = &DAT_100ecc6d0;
  _swift_allocObject(&DAT_100ecc6d0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10035f228;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  local_58 = FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecc6e8;
  local_50 = puVar5;
  aBlock = __Block_copy(&local_78);
  puVar6 = local_50;
  _swift_retain(puVar5);
  _swift_release(puVar6);
  objc_stub::performBlockAndWait_(unaff_x20,aBlock);
  __Block_release(aBlock);
  puVar6 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x8d,0x122,0x18,1);
  _swift_release(puVar5);
  uVar1 = local_41;
  if (((ulong)puVar6 & 1) == 0) {
    _swift_release(puVar4);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10035cbe4);
  (*pcVar2)();
}



/* Address: 0x10035cbe4 | FUN_10035cbe4 */

void FUN_10035cbe4(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_10035cbfc,0,0);
  return;
}



/* Address: 0x10035cbfc | FUN_10035cbfc */

void FUN_10035cbfc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  lVar3 = *(long *)(lVar5 + 0x40);
  FUN_100004640(lVar5 + 0x20,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10030b860;
                    /* WARNING: Could not recover jumptable at 0x00010035cc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(0,0,uVar2,lVar3);
  return;
}



/* Address: 0x10035cc80 | FUN_10035cc80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010035db10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10035cc80(undefined8 param_1)

{
  Set<AnyCancellable> in;
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  NSURL *pNVar6;
  NSNumber *pNVar7;
  undefined *puVar8;
  NSString *pNVar9;
  ID IVar10;
  undefined8 uVar11;
  NSArray *pNVar12;
  void *pvVar13;
  NSError *pNVar14;
  code *pcVar15;
  AnyCancellable *pAVar16;
  AnyCancellable *this;
  __int64 _Var17;
  void *pvVar18;
  void *pvVar19;
  _StringGuts _Var20;
  URL UVar21;
  char *pcVar22;
  code *pcVar23;
  code *pcVar24;
  long extraout_x8;
  long lVar25;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar26;
  long *plVar27;
  ulong uVar28;
  ulong *puVar29;
  ulong uVar30;
  char *pcVar31;
  ulong uVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  code *local_330;
  undefined8 local_328;
  undefined8 local_320;
  char *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined *local_300;
  undefined8 local_2f8;
  long local_2f0;
  Set<AnyCancellable> local_2e8;
  long local_2e0;
  long local_2d8;
  undefined *local_2d0;
  long local_2c8;
  long local_2c0;
  undefined *local_2b8;
  uint local_2ac;
  ID local_2a8;
  long local_2a0;
  undefined *puStack_298;
  ulong local_290;
  undefined8 local_288;
  undefined1 auStack_280 [80];
  undefined1 auStack_230 [232];
  undefined1 auStack_148 [24];
  code *local_130;
  undefined8 local_128;
  AnyCancellable *local_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined **local_100;
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_90;
  code *local_88;
  undefined *local_80;
  
  local_288 = param_1;
  local_2d0 = (undefined *)Publisher::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(local_2d0 + -8) + 0x40));
  lVar25 = (long)&local_330 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_2d8 = lVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar25 - extraout_x12;
  puVar8 = &DAT_100fc0ed8;
  local_2e0 = lVar25;
  FUN_1000037f0(&DAT_100fc0ed8,&DAT_100c42a58);
  local_2c0 = *(long *)(puVar8 + -8);
  local_2b8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_2c0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = lVar25 - extraout_x8_00;
  local_2c8 = lVar25;
  puStack_298 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_2a0 = *(long *)(puStack_298 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_2a0 + 0x40));
  lVar25 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_2f0 = lVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar31 = (char *)(lVar25 - extraout_x12_00);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  puVar8 = &DAT_100c42a60;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdbd8;
  FUN_1000037f0(&DAT_100fbdbd8,&DAT_100c3f0d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar8,puVar4);
  *(undefined **)(unaff_x20 + 0x48) = puVar8;
  puVar8 = &DAT_100c42a90;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  UVar21.unknown = (undefined *)0x7;
  _swift_allocObject();
  FUN_1000da6e0(puVar8,puVar4);
  *(undefined **)(unaff_x20 + 0x50) = puVar8;
  puVar8 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var17 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar8 = PTR___swiftEmptySetSingleton_100eae0e8, _Var17 != 0)) {
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002fc834();
  }
  local_2e8.unknown = (undefined *)(unaff_x20 + 0x58);
  *(undefined **)local_2e8.unknown = puVar8;
  SVar33.bridgeObject = (void *)0xe900000000000065;
  SVar33.str = (char *)0x74696c71732e6264;
  Foundation::URL::appendingPathComponent(SVar33,UVar21);
  IVar5 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  objc_stub::bundlePath(IVar5);
  SVar33 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar34.bridgeObject = &DAT_e600000000000000;
  SVar34.str = (char *)0x78657070612e;
  bVar3 = Swift::String::hasSuffix(SVar34,SVar33);
  uVar30 = CONCAT71((int7)(IVar5 >> 8),bVar3);
  _swift_bridgeObjectRelease(SVar33.bridgeObject);
  if (!bVar3) {
    FUN_100342fc4(pcVar31);
  }
  UVar21.unknown = &_OBJC_CLASS___NSPersistentStoreDescription;
  _objc_allocWithZone();
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar21);
  IVar5 = objc_stub::initWithURL_((ID)UVar21.unknown,pNVar6);
  pNVar7 = (extension_Foundation)::bool::_bridgeToObjectiveC();
  objc_stub::FUN_100c0cee0
            (IVar5,pNVar7,
             *(undefined8 *)PTR__NSPersistentStoreRemoteChangeNotificationPostOptionKey_100ea9a28);
  pNVar7 = (extension_Foundation)::bool::_bridgeToObjectiveC();
  objc_stub::FUN_100c0cee0
            (IVar5,pNVar7,*(undefined8 *)PTR__NSPersistentHistoryTrackingKey_100ea9a18);
  if (DAT_100fc0ee0 != -1) {
    _swift_once(&DAT_100fc0ee0,FUN_10035e28c);
  }
  uVar11 = DAT_101057980;
  puVar8 = &_OBJC_CLASS___NSPersistentContainer;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar10 = objc_stub::FUN_100c045c0((ID)puVar8,pNVar9,uVar11);
  *(ID *)(unaff_x20 + 0x18) = IVar10;
  puVar8 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  local_300 = puVar8;
  _swift_allocObject();
  uStack_308 = 3;
  local_310 = 1;
  *(undefined8 *)(puVar8 + 0x18) = 3;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  *(ID *)(puVar8 + 0x20) = IVar5;
  uVar11 = 0;
  FUN_10000ec2c(0,&DAT_100fc0ed0,&PTR__OBJC_CLASS___NSPersistentStoreDescription_100f8dbe0);
  local_2f8 = uVar11;
  local_2a8 = IVar5;
  pNVar12 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar8);
  objc_stub::FUN_100c0d0c0(IVar10,pNVar12);
  IVar5 = *(ID *)(unaff_x20 + 0x18);
  puVar8 = &DAT_100ecc720;
  _swift_allocObject(&DAT_100ecc720,0x18,7);
  plVar27 = (long *)(puVar8 + 0x10);
  *plVar27 = 0;
  puVar4 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = FUN_10035f2cc;
  local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_10035dd60;
  local_90 = &DAT_100ecc760;
  local_80 = puVar8;
  pvVar13 = __Block_copy(&local_a8);
  puVar2 = local_80;
  _swift_retain(puVar8);
  _swift_release(puVar2);
  objc_stub::FUN_100c06340(IVar5,pvVar13);
  __Block_release(pvVar13);
  _swift_beginAccess(plVar27,auStack_c0,0,0);
  lVar25 = *plVar27;
  _swift_errorRetain(lVar25);
  _swift_release(puVar8);
  if (lVar25 == 0) {
    uVar32 = 0;
    goto LAB_10035d920;
  }
  local_2ac = (uint)uVar30;
  FUN_10035e70c(pcVar31);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_retain(uVar11);
  FUN_1000da768(&local_a8);
  _swift_release(uVar11);
  pcVar26 = local_88;
  puVar8 = local_90;
  FUN_100004640(&local_a8,local_90);
  (**(code **)(pcVar26 + 0x30))
            (0x6573616261746164,&DAT_e800000000000000,0xd00000000000002f,0x8000000100da2fa0,puVar8,
             pcVar26);
  FUN_100004594(&local_a8);
  IVar5 = *(ID *)(unaff_x20 + 0x18);
  puVar8 = &DAT_100ecc720;
  _swift_allocObject(&DAT_100ecc720,0x18,7);
  puVar29 = (ulong *)(puVar8 + 0x10);
  *puVar29 = 0;
  local_88 = thunk_FUN_10035f2cc;
  local_a8 = puVar4;
  local_a0 = 0x42000000;
  local_98 = FUN_10035dd60;
  local_90 = &DAT_100ecc7b0;
  local_80 = puVar8;
  pvVar13 = __Block_copy(&local_a8);
  puVar4 = local_80;
  _swift_retain(puVar8);
  _swift_release(puVar4);
  objc_stub::FUN_100c06340(IVar5,pvVar13);
  _swift_errorRelease(lVar25);
  __Block_release(pvVar13);
  pcVar22 = (char *)0x0;
  pvVar13 = (void *)0x0;
  _swift_beginAccess(puVar29,auStack_148);
  uVar30 = *puVar29;
  _swift_errorRetain(uVar30);
  _swift_release(puVar8);
  if (uVar30 == 0) {
    uVar32 = 0;
  }
  else {
    FUN_1000d4ca4(0);
    _swift_initStackObject();
    _swift_errorRetain(uVar30);
    uVar11 = 0xd000000000000018;
    FUN_1000d4624(0xd000000000000018,0x8000000100da2fd0);
    pNVar14 = Foundation::__convertErrorToNSError();
    pvVar18 = (void *)0x0;
    FUN_10030fb80();
    pvVar19 = pvVar18;
    local_318 = pcVar31;
    local_290 = uVar30;
    FUN_100377700();
    local_320 = uVar11;
    FUN_1000d468c(&local_a8);
    puVar8 = local_90;
    local_330 = local_88;
    _Var20.unknown = local_90;
    FUN_100004640(&local_a8);
    local_120 = (AnyCancellable *)0x0;
    local_118 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x27,_Var20);
    _swift_bridgeObjectRelease(local_118);
    local_328 = 0x8000000100da2ff0;
    local_120 = (AnyCancellable *)0xd000000000000019;
    local_118 = 0x8000000100da2ff0;
    SVar35.bridgeObject = pvVar18;
    SVar35.str = (char *)pNVar14;
    SVar39.bridgeObject = pvVar13;
    SVar39.str = pcVar22;
    Swift::String::append(SVar35,SVar39);
    SVar36.bridgeObject = (void *)0xea0000000000203a;
    SVar36.str = (char *)0x737365636361203b;
    SVar40.bridgeObject = pvVar13;
    SVar40.str = pcVar22;
    Swift::String::append(SVar36,SVar40);
    SVar37.bridgeObject = pvVar19;
    SVar37.str = pcVar31;
    SVar41.bridgeObject = pvVar13;
    SVar41.str = pcVar22;
    Swift::String::append(SVar37,SVar41);
    uVar11 = local_118;
    pcVar24 = local_330;
    FUN_1000d4e0c(local_120,local_118,puVar8);
    _swift_bridgeObjectRelease(uVar11);
    FUN_100004594(&local_a8);
    pcVar26 = (code *)&DAT_100fbf9d8;
    FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
    local_330 = pcVar26;
    _swift_initStackObject();
    *(undefined8 *)(pcVar26 + 0x18) = 4;
    *(undefined8 *)(pcVar26 + 0x10) = 2;
    *(undefined8 *)(pcVar26 + 0x20) = 0xd000000000000014;
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(pcVar26 + 0x28) = 0x8000000100da3010;
    *(NSError **)(pcVar26 + 0x30) = pNVar14;
    *(void **)(pcVar26 + 0x38) = pvVar18;
    *(undefined **)(pcVar26 + 0x48) = puVar8;
    *(undefined8 *)(pcVar26 + 0x50) = 0xd000000000000016;
    *(undefined **)(pcVar26 + 0x78) = puVar8;
    *(undefined8 *)(pcVar26 + 0x58) = 0x8000000100da3030;
    *(char **)(pcVar26 + 0x60) = pcVar31;
    *(void **)(pcVar26 + 0x68) = pvVar19;
    _swift_bridgeObjectRetain(pvVar18);
    pcVar15 = pcVar26;
    FUN_1003c8f44();
    _swift_setDeallocating(pcVar26);
    puVar8 = &DAT_100fbf9e0;
    FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
    _swift_arrayDestroy(pcVar26 + 0x20,2,puVar8);
    uVar30 = local_290;
    pcVar23 = pcVar15;
    FUN_100377dbc(local_290,0);
    _swift_bridgeObjectRelease(pcVar15);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_retain(uVar11);
    FUN_1000da768(&local_a8);
    _swift_release(uVar11);
    pcVar26 = local_88;
    puVar8 = local_90;
    _Var20.unknown = local_90;
    FUN_100004640(&local_a8);
    local_120 = (AnyCancellable *)0x0;
    local_118 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1b,_Var20);
    _swift_bridgeObjectRelease(local_118);
    local_120 = (AnyCancellable *)0xd000000000000019;
    local_118 = local_328;
    SVar38.bridgeObject = pvVar18;
    SVar38.str = (char *)pNVar14;
    SVar42.bridgeObject = pcVar24;
    SVar42.str = (char *)pcVar23;
    Swift::String::append(SVar38,SVar42);
    _swift_bridgeObjectRelease(pvVar18);
    uVar11 = local_118;
    (**(code **)(pcVar26 + 0x30))
              (0x6573616261746164,&DAT_e800000000000000,local_120,local_118,puVar8,pcVar26);
    _swift_bridgeObjectRelease(uVar11);
    FUN_100004594(&local_a8);
    if ((uVar30 & 1) != 0) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
      _swift_retain(uVar11);
      FUN_1000da768(&local_a8);
      _swift_release(uVar11);
      pcVar26 = local_88;
      puVar8 = local_90;
      FUN_100004640(&local_a8,local_90);
      (**(code **)(pcVar26 + 0x40))(puVar8,pcVar26);
      FUN_100004594(&local_a8);
    }
    uVar30 = local_290;
    if ((local_2ac & 1) != 0) {
      DAT_101057988 = 1;
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ulong *)(unaff_x20 + 0x10) = local_290;
    _swift_errorRetain(local_290);
    _swift_errorRelease(uVar11);
    IVar10 = *(ID *)(unaff_x20 + 0x18);
    puVar8 = local_300;
    _swift_allocObject(local_300,0x28,7);
    lVar25 = local_2f0;
    *(undefined8 *)(puVar8 + 0x18) = uStack_308;
    *(undefined8 *)(puVar8 + 0x10) = local_310;
    Foundation::URL::_init();
    UVar21.unknown = &_OBJC_CLASS___NSPersistentStoreDescription;
    _objc_allocWithZone();
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar21);
    IVar5 = objc_stub::initWithURL_((ID)UVar21.unknown,pNVar6);
    (**(code **)(local_2a0 + 8))(lVar25,puStack_298);
    *(ID *)(puVar8 + 0x20) = IVar5;
    pNVar12 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar8);
    objc_stub::FUN_100c0d0c0(IVar10,pNVar12);
    IVar5 = *(ID *)(unaff_x20 + 0x18);
    puVar8 = &DAT_100ecc720;
    _swift_allocObject(&DAT_100ecc720,0x18,7);
    puVar29 = (ulong *)(puVar8 + 0x10);
    *puVar29 = 0;
    local_88 = thunk_FUN_10035f2cc;
    local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a0 = 0x42000000;
    local_98 = FUN_10035dd60;
    local_90 = &DAT_100ecc7d8;
    local_80 = puVar8;
    pvVar13 = __Block_copy(&local_a8);
    puVar4 = local_80;
    _swift_retain(puVar8);
    _swift_release(puVar4);
    objc_stub::FUN_100c06340(IVar5,pvVar13);
    __Block_release(pvVar13);
    _swift_beginAccess(puVar29,auStack_230,0,0);
    uVar28 = *puVar29;
    _swift_errorRetain(uVar28);
    _swift_release(puVar8);
    uVar32 = uVar30;
    if (uVar28 != 0) {
      pcVar26 = local_330;
      _swift_initStackObject(local_330,auStack_280);
      *(undefined8 *)(pcVar26 + 0x18) = 2;
      *(undefined8 *)(pcVar26 + 0x10) = 1;
      *(undefined8 *)(pcVar26 + 0x20) = 0xd00000000000001c;
      *(undefined8 *)(pcVar26 + 0x28) = 0x8000000100da3050;
      pNVar14 = Foundation::__convertErrorToNSError();
      uVar11 = 0;
      FUN_10030fb80();
      *(undefined **)(pcVar26 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(NSError **)(pcVar26 + 0x30) = pNVar14;
      *(undefined8 *)(pcVar26 + 0x38) = uVar11;
      pcVar15 = pcVar26;
      FUN_1003c8f44(pcVar26);
      _swift_setDeallocating(pcVar26);
      FUN_10031bc4c(pcVar26 + 0x20);
      uVar30 = uVar28;
      FUN_100377dbc(uVar28,1,pcVar15);
      _swift_bridgeObjectRelease(pcVar15);
      uVar32 = local_290;
      if ((uVar30 & 1) != 0) {
        uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
        _swift_retain(uVar11);
        FUN_1000da768(&local_a8);
        _swift_release(uVar11);
        pcVar26 = local_88;
        puVar8 = local_90;
        FUN_100004640(&local_a8,local_90);
        (**(code **)(pcVar26 + 0x40))(puVar8,pcVar26);
        uVar32 = local_290;
        _swift_errorRelease(local_290);
        _swift_errorRelease(uVar28);
        _swift_release(local_320);
        FUN_100004594(&local_a8);
        pcVar31 = local_318;
        goto LAB_10035d91c;
      }
      _swift_errorRelease(local_290);
      uVar30 = uVar28;
    }
    _swift_errorRelease(uVar30);
    _swift_release(local_320);
    pcVar31 = local_318;
  }
LAB_10035d91c:
  uVar30 = (ulong)local_2ac;
LAB_10035d920:
  IVar5 = objc_stub::viewContext(*(ID *)(unaff_x20 + 0x18));
  objc_stub::FUN_100c0a9e0(IVar5,1);
  IVar5 = objc_stub::viewContext(*(ID *)(unaff_x20 + 0x18));
  objc_stub::setMergePolicy_
            (IVar5,*(undefined8 *)PTR__NSMergeByPropertyStoreTrumpMergePolicy_100ea9a08);
  pAVar16 = (AnyCancellable *)objc_stub::persistentStoreCoordinator(*(ID *)(unaff_x20 + 0x18));
  uVar11 = 0;
  FUN_10036f460();
  _swift_allocObject();
  FUN_100370e8c();
  puVar8 = &DAT_100c42ac8;
  _swift_getKeyPath(&DAT_100c42ac8);
  puVar4 = &DAT_100fc0ee8;
  FUN_1000037f0(&DAT_100fc0ee8,&DAT_100c42af8);
  _swift_initStackObject();
  FUN_1000da6e0(puVar8,puVar4);
  local_100 = &PTR_PTR_100ecd040;
  local_120 = pAVar16;
  local_108 = uVar11;
  _swift_retain(pAVar16);
  FUN_1000da768(&local_130);
  (*local_130)(&local_a8,&local_120);
  _swift_release(local_128);
  _swift_release(puVar8);
  FUN_100004594(&local_120);
  FUN_100076508(&local_a8,unaff_x20 + 0x20);
  this = pAVar16;
  if ((uVar30 & 1) == 0) {
    IVar5 = objc_stub::viewContext(*(ID *)(unaff_x20 + 0x18));
    uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_retain(uVar11);
    FUN_1000da768(&local_a8);
    _swift_release(uVar11);
    objc_stub::setUndoManager_(IVar5,local_a8);
    objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
    local_290 = uVar32;
    _swift_retain(uVar11);
    FUN_1000da768(&local_a8);
    _swift_release(uVar11);
    (extension_Foundation)::__C::NSNotificationCenter::_publisher(local_2e0,IVar5,local_a8);
    objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_retain(uVar11);
    FUN_1000da768(&local_a8);
    _swift_release(uVar11);
    lVar25 = local_2d8;
    (extension_Foundation)::__C::NSNotificationCenter::_publisher(local_2d8,IVar5,local_a8);
    puVar8 = &DAT_100fbe490;
    FUN_100003a00(&DAT_100fbe490,PTR__typeMetadataAccessor_100ea79b0,
                  PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
    lVar1 = local_2c8;
    Combine::Publishers::Merge::init(local_2c8,puVar8,lVar25,local_2d0,local_2d0,puVar8,puVar8);
    puVar8 = &DAT_100ecc798;
    _swift_allocObject(&DAT_100ecc798,0x18,7);
    _swift_weakInit(puVar8 + 0x10);
    FUN_10035f334();
    puVar4 = local_2b8;
    this = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar8);
    uVar32 = local_290;
    (**(code **)(local_2c0 + 8))(lVar1,puVar4);
    in.unknown = local_2e8.unknown;
    _swift_beginAccess(local_2e8.unknown,&local_a8,0x21,0);
    Combine::AnyCancellable::store(this,in);
    _swift_endAccess(&local_a8);
    _swift_release(pAVar16);
  }
  _swift_release(this);
  _swift_errorRelease(uVar32);
  puVar8 = puStack_298;
  pcVar26 = *(code **)(local_2a0 + 8);
  (*pcVar26)(local_288,puStack_298);
  (*pcVar26)(pcVar31,puVar8);
  return;
}



/* Address: 0x10035dd04 | FUN_10035dd04 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035dd04(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    objc_stub::viewContext(*(ID *)(param_2 + 0x18));
    _swift_release(param_2);
    FUN_10035ca9c();
    return 0;
  }
  return 0;
}



/* Address: 0x10035dd60 | FUN_10035dd60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035dd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x10035ddd8 | FUN_10035ddd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035ddd8(void)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10035de24 | FUN_10035de24 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035de24(void)

{
  return ZEXT816(0x100fc0e30);
}



/* Address: 0x10035de44 | FUN_10035de44 */

undefined8 FUN_10035de44(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  _swift_errorRetain(uVar1);
  return uVar1;
}



/* Address: 0x10035de70 | FUN_10035de70 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10035de70(void)

{
  ID IVar1;
  long *unaff_x20;
  
  IVar1 = objc_stub::viewContext(*(ID *)(*unaff_x20 + 0x18));
  return IVar1;
}



/* Address: 0x10035de90 | FUN_10035de90 */

ID FUN_10035de90(void)

{
  ID self;
  long *unaff_x20;
  
  self = objc_stub::newBackgroundContext(*(ID *)(*unaff_x20 + 0x18));
  objc_stub::setMergePolicy_
            (self,*(undefined8 *)PTR__NSMergeByPropertyStoreTrumpMergePolicy_100ea9a08);
  return self;
}



/* Address: 0x10035decc | FUN_10035decc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035decc(void)

{
  URL self;
  NSURL *pNVar1;
  ID IVar2;
  long *unaff_x20;
  
  self.unknown = (undefined *)objc_stub::persistentStoreCoordinator(*(ID *)(*unaff_x20 + 0x18));
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(self);
  IVar2 = objc_stub::managedObjectIDForURIRepresentation_((ID)self.unknown,pNVar1);
  return IVar2;
}



/* Address: 0x10035df40 | FUN_10035df40 */

void FUN_10035df40(undefined8 param_1,undefined8 param_2)

{
  FUN_10035df68(param_1,param_2,&DAT_100ecc658,&DAT_100c42a40);
  return;
}



/* Address: 0x10035df54 | FUN_10035df54 */

void FUN_10035df54(undefined8 param_1,undefined8 param_2)

{
  FUN_10035df68(param_1,param_2,&UNK_100ecc630,&UNK_100c42a30);
  return;
}



/* Address: 0x10035df68 | FUN_10035df68 */

void FUN_10035df68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  TaskPriority TVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *unaff_x20;
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  _swift_allocObject(param_3,0x28,7);
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  *(undefined8 *)(param_3 + 0x20) = uVar3;
  _swift_retain(uVar3);
  FUN_100364f4c(0,0,&stack0xffffffffffffffd0 + -extraout_x8,param_4,param_3);
  _swift_release();
  return;
}



/* Address: 0x10035e038 | FUN_10035e038 */

void FUN_10035e038(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long *unaff_x20;
  long unaff_x22;
  
  lVar5 = *unaff_x20;
  *(long *)(unaff_x22 + 0x38) = lVar5;
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  lVar3 = *(long *)(lVar5 + 0x40);
  FUN_100004640(lVar5 + 0x20,uVar2);
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10035e0d0;
                    /* WARNING: Could not recover jumptable at 0x00010035e0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(param_1,param_2 & 0xcfffffffffffffff,uVar2,lVar3);
  return;
}



/* Address: 0x10035e0d0 | FUN_10035e0d0 */

void FUN_10035e0d0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  if (unaff_x20 != 0) {
    FUN_1000da768(lVar3 + 0x10);
    lVar1 = *(long *)(lVar3 + 0x30);
    FUN_100004640(lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x28));
    (**(code **)(lVar1 + 0x20))();
    _swift_errorRelease();
    FUN_100004594(lVar3 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010035e168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10035e16c | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x10035e170 | FUN_10035e170 */

void FUN_10035e170(undefined8 param_1)

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
  plVar3[1] = (long)FUN_100008284;
  FUN_10035cbe4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10035e1dc | FUN_10035e1dc */

void FUN_10035e1dc(undefined8 param_1)

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
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10035be30(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10035e248 | FUN_10035e248 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035e248(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10035e274 | FUN_10035e274 */

void FUN_10035e274(void)

{
  long unaff_x20;
  
  FUN_10035c20c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10035e28c | FUN_10035e28c */

void FUN_10035e28c(undefined8 param_1)

{
  FUN_10035e2a8();
  DAT_101057980 = param_1;
  return;
}



/* Address: 0x10035e2a8 | FUN_10035e2a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035e2a8(void)

{
  code *pcVar1;
  URL UVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  URL UVar5;
  NSURL *pNVar6;
  ID IVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long lVar9;
  String SVar10;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          extraout_x12;
  if (DAT_100fbe6d8 != -1) {
    _swift_once(&DAT_100fbe6d8,FUN_100308a24);
  }
  IVar7 = DAT_101057970;
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar5.unknown = (undefined *)objc_stub::URLForResource_withExtension_(IVar7,pNVar3,pNVar4);
  if (UVar5.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
    (**(code **)(lVar9 + 0x20))
              (lVar8,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               UVar2.unknown);
    UVar5.unknown = &_OBJC_CLASS___NSManagedObjectModel;
    _objc_allocWithZone();
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    IVar7 = objc_stub::FUN_100c03de0((ID)UVar5.unknown,pNVar6);
    (**(code **)(lVar9 + 8))(lVar8,UVar2.unknown);
    if (IVar7 != 0) {
      return IVar7;
    }
  }
  *(undefined4 *)(lVar8 + -8) = 0;
  *(undefined8 *)(lVar8 + -0x10) = 0x115;
  SVar10.bridgeObject = (void *)0x2;
  SVar10.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar10,(StaticString)0xd000000000000022,0x8000000100da2f20,
             0xda2f20);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035e484);
  (*pcVar1)();
}



/* Address: 0x10035e484 | FUN_10035e484 */

void FUN_10035e484(void)

{
  undefined8 uVar1;
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar1 = 0xd000000000000016;
  FUN_1000d4624(0xd000000000000016,0x8000000100da2f80);
  DAT_100fc0ec0 = uVar1;
  return;
}



/* Address: 0x10035e4d8 | FUN_10035e4d8 */

/* WARNING: Removing unreachable block (ram,0x00010035e51c) */
/* WARNING: Removing unreachable block (ram,0x00010035e5fc) */
/* WARNING: Removing unreachable block (ram,0x00010035e538) */

void FUN_10035e4d8(ID param_1)

{
  ID IVar1;
  undefined1 auStack_70 [16];
  ID local_60;
  
  IVar1 = objc_stub::hasChanges(param_1);
  if ((int)IVar1 != 0) {
    local_60 = param_1;
    FUN_1002ff9c8(FUN_10030844c,auStack_70);
  }
  return;
}



/* Address: 0x10035e614 | FUN_10035e614 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10035e614(ID param_1)

{
  ID IVar1;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_30 = 0;
  IVar1 = objc_stub::FUN_100c09980(param_1,&local_30);
  if ((int)IVar1 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10035e6b0 | FUN_10035e6b0 */

void FUN_10035e6b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  _swift_errorRetain(param_2);
  _swift_errorRelease(uVar1);
  return;
}


