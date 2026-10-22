/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ae5dd4 | FUN_100ae5dd4 */

void FUN_100ae5dd4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100ae5de0 | FUN_100ae5de0 */

void FUN_100ae5de0(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xdbb630);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae5e38);
  (*pcVar1)();
}



/* Address: 0x100ae5e38 | FUN_100ae5e38 */

void FUN_100ae5e38(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteSystemPermissions.AlertContentHostingView",0x2e,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae5e64);
  (*pcVar1)();
}



/* Address: 0x100ae5e64 | FUN_100ae5e64 */

void FUN_100ae5e64(void)

{
  long unaff_x20;
  
  FUN_100ae5794(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100ae5e6c | thunk_FUN_100ae5d50 */

void thunk_FUN_100ae5d50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ae5488(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100ae5e70 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100ae5e74 | FUN_100ae5e74 */

bool FUN_100ae5e74(int param_1)

{
  _AXIsProcessTrusted();
  return param_1 != 0;
}



/* Address: 0x100ae5e90 | FUN_100ae5e90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae6020 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100ae5e90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  SchedulerOptions SVar5;
  TimerPublisher *pTVar6;
  TimerPublisher *pTVar7;
  undefined *puVar8;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  TimerPublisher *local_68;
  
  puVar2 = &DAT_100ff8950;
  FUN_1000037f0(&DAT_100ff8950,&DAT_100c94e00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&local_a0 - extraout_x8;
  puVar2 = &DAT_100ff8958;
  FUN_1000037f0(&DAT_100ff8958,&DAT_100c94ed0);
  local_70 = *(long *)(puVar2 + -8);
  local_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100ff8960;
  FUN_1000037f0(&DAT_100ff8960,&DAT_100c94e10);
  local_a0 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (lVar13 - extraout_x8_00) - extraout_x8_01;
  puVar3 = &DAT_100ff8968;
  FUN_1000037f0(&DAT_100ff8968,&DAT_100c94ee0);
  local_88 = *(long *)(puVar3 + -8);
  local_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar12 - extraout_x8_02;
  puVar3 = &DAT_100ff8970;
  FUN_1000037f0(&DAT_100ff8970,&DAT_100c94e20);
  local_78 = *(long *)(puVar3 + -8);
  local_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _AXIsProcessTrusted();
  local_68 = (TimerPublisher *)CONCAT71(local_68._1_7_,(int)puVar3 != 0);
  Combine::Just::init(lVar12,puVar3,PTR___type_metadata_for_Swift_Bool_100eac570);
  FUN_100ae62dc(0);
  IVar4 = objc_stub::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  uVar10 = *(undefined8 *)PTR__NSRunLoopCommonModes_100ea9ad0;
  SVar5 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar5.unknown + -8) + 0x38))(lVar13,1,1,SVar5.unknown);
  pTVar6 = (extension_Foundation)::__C::NSTimer::_publish
                     (0x3ff0000000000000,SVar5.unknown,1,IVar4,uVar10,lVar13);
  FUN_100ae6320(lVar13);
  local_68 = pTVar6;
  pTVar7 = TimerPublisher::_typeMetadataAccessor();
  FUN_100ae6368();
  (extension_Combine)::Combine::ConnectablePublisher::_autoconnect();
  _swift_release(pTVar6);
  puVar3 = &DAT_100f31ec0;
  local_68 = pTVar7;
  _swift_allocObject(&DAT_100f31ec0,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  FUN_1000037f0(&DAT_100ff8988,&DAT_100c94ef0);
  FUN_100016eac(&DAT_100ff8990,&DAT_100ff8988,&DAT_100c94ef0,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_Publishers_Autoconnect<A>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9648
               );
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(pTVar7);
  _swift_release(puVar3);
  puVar3 = &DAT_100ff8998;
  FUN_100016eac(&DAT_100ff8998,&DAT_100ff8960,&DAT_100c94e10,
                PTR_Combine__Combine__Just<undefined>_>Combine__Publisher_100ea9870);
  puVar8 = &DAT_100ff89a0;
  FUN_100016eac(&DAT_100ff89a0,&DAT_100ff8958,&DAT_100c94ed0,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  puVar1 = local_80;
  (extension_Combine)::Combine::Publisher::_merge(lVar11,puVar8,puVar2,local_80,puVar3,puVar8);
  (**(code **)(local_70 + 8))(lVar13 - extraout_x8_00,puVar1);
  (**(code **)(local_a0 + 8))(lVar12,puVar2);
  FUN_100016eac(&DAT_100ff89a8,&DAT_100ff8968,&DAT_100c94ee0,
                PTR_Combine__Combine__Publishers__Merge<undefined,undefined>_>Combine__Publisher_100ea96e0
               );
  puVar2 = local_98;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_88 + 8))(lVar11,puVar2);
  FUN_100016eac(&DAT_100ff89b0,&DAT_100ff8970,&DAT_100c94e20,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  puVar2 = local_90;
  AVar9 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_78 + 8))(lVar11 - extraout_x8_03,puVar2);
  return AVar9.unknown;
}



/* Address: 0x100ae62dc | FUN_100ae62dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100ae62dc(void)

{
  undefined *puVar1;
  
  if (DAT_100ff8978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSTimer;
  _swift_getObjCClassMetadata();
  DAT_100ff8978 = puVar1;
  return;
}



/* Address: 0x100ae6320 | FUN_100ae6320 */

undefined8 FUN_100ae6320(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff8950;
  FUN_1000037f0(&DAT_100ff8950,&DAT_100c94e00);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100ae6368 | FUN_100ae6368 */

void FUN_100ae6368(void)

{
  TimerPublisher *pTVar1;
  undefined *puVar2;
  
  if (DAT_100ff8980 != (undefined *)0x0) {
    return;
  }
  pTVar1 = TimerPublisher::_typeMetadataAccessor();
  puVar2 = PTR__Foundation__TimerPublisher_>Combine__ConnectablePublisher_100ea79f0;
  _swift_getWitnessTable
            (PTR__Foundation__TimerPublisher_>Combine__ConnectablePublisher_100ea79f0,pTVar1);
  DAT_100ff8980 = puVar2;
  return;
}



/* Address: 0x100ae63ac | FUN_100ae63ac */

void FUN_100ae63ac(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae63d0 | FUN_100ae63d0 */

void FUN_100ae63d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    bVar1 = false;
  }
  else {
    _swift_release();
    iVar2 = (int)param_3;
    _AXIsProcessTrusted();
    bVar1 = iVar2 != 0;
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Address: 0x100ae6414 | FUN_100ae6414 */

void FUN_100ae6414(void)

{
  FUN_100ae63d0();
  return;
}



/* Address: 0x100ae641c | FUN_100ae641c */

void FUN_100ae641c(void)

{
  FUN_100ae6428(0x76,0xe100000000000000);
  return;
}



/* Address: 0x100ae6428 | FUN_100ae6428 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_100ae6428(_StringGuts param_1,_StringGuts param_2,char *param_3,undefined *param_4)

{
  undefined8 uVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  undefined *puVar9;
  uint uVar10;
  char *pcVar11;
  String SVar12;
  String SVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined *local_50;
  undefined8 uStack_48;
  
  pcVar11 = (char *)0x0;
  _Var8.unknown = param_2.unknown;
  do {
    pcVar3 = pcVar11;
    FUN_100ae6678();
    uVar10 = (uint)pcVar11;
    _Var7.unknown = _Var8.unknown;
    if (_Var8.unknown != (undefined *)0x0) {
      if ((param_1.unknown == pcVar3) && (_Var8.unknown == param_2.unknown)) {
        _swift_bridgeObjectRelease(_Var8.unknown);
LAB_100ae64b0:
        lVar4 = 0;
        _CGEventSourceCreate();
        lVar5 = lVar4;
        _CGEventCreateKeyboardEvent();
        if (lVar5 == 0) {
          _CGEventCreateKeyboardEvent(lVar4,uVar10 & 0xffff,0);
        }
        else {
          _CGEventSetFlags(lVar5,0x100000);
          _CGEventCreateKeyboardEvent(lVar4,uVar10 & 0xffff,0);
          _CGEventPost(2,lVar5);
        }
        if (lVar4 != 0) {
          _CGEventPost(2,lVar4);
        }
        return (undefined1 *)0x0;
      }
      _Var7.unknown = param_2.unknown;
      param_4 = _Var8.unknown;
      bVar2 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)pcVar3);
      _swift_bridgeObjectRelease(_Var8.unknown);
      param_3 = pcVar3;
      if (bVar2) goto LAB_100ae64b0;
    }
    pcVar11 = (char *)(ulong)(uVar10 + 1);
    _Var8.unknown = _Var7.unknown;
    if ((uVar10 + 1 & 0xffff) == 0x80) {
      FUN_1000d468c(auStack_68);
      _Var8.unknown = local_50;
      FUN_100004640(auStack_68);
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x25,_Var8);
      SVar12.bridgeObject = (void *)0x8000000100dbb680;
      SVar12.str = (char *)0xd000000000000012;
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar12,SVar15);
      CVar14.bridgeObject = param_2.unknown;
      CVar14.str = param_1.unknown;
      puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::Character::_write((undefined *)&local_78,CVar14);
      SVar13.bridgeObject = (void *)0x8000000100dbb6a0;
      SVar13.str = (char *)0xd000000000000011;
      SVar16.bridgeObject = puVar9;
      SVar16.str = param_2.unknown;
      Swift::String::append(SVar13,SVar16);
      uVar1 = uStack_70;
      FUN_1000d4e0c(local_78,uStack_70,local_50,uStack_48);
      _swift_bridgeObjectRelease(uVar1);
      puVar6 = auStack_68;
      FUN_100004594(puVar6);
      return puVar6;
    }
  } while( true );
}



/* Address: 0x100ae664c | FUN_100ae664c */

void FUN_100ae664c(void)

{
  FUN_100ae6428(99,0xe100000000000000);
  return;
}



/* Address: 0x100ae6658 | FUN_100ae6658 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ae6658(void)

{
  return ZEXT816(0x100ff89f8);
}



/* Address: 0x100ae6678 | FUN_100ae6678 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae6678(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  ushort *puVar9;
  String SVar10;
  ulong local_88;
  long local_80;
  undefined4 local_74 [11];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar5 = param_1;
  _TISCopyCurrentASCIICapableKeyboardLayoutInputSource();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100ae686c);
    (*pcVar4)();
  }
  _TISGetInputSourceProperty();
  _CFDataGetBytePtr();
  local_74[0] = 0;
  puVar6 = &DAT_100ff8a58;
  FUN_1000037f0(&DAT_100ff8a58,&DAT_100c94e58);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 8;
  *(undefined8 *)(puVar6 + 0x10) = 4;
  puVar9 = (ushort *)(puVar6 + 0x20);
  puVar9[0] = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  local_80 = 0;
  puVar7 = puVar6;
  _LMGetKbdType();
  pvVar8 = (void *)0x3;
  _UCKeyTranslate(lVar5,(uint)param_1 & 0xffff,3,0,puVar7,0,local_74,4,&local_80,puVar9);
  if (((int)lVar5 == 0) && (0 < local_80)) {
    uVar2 = *puVar9;
    if (uVar2 - 0xe000 < 0xfffff800) {
      uVar3 = (uVar2 & 0x3f) * 0x100;
      uVar1 = (uVar2 >> 6) + uVar3 + 0x81c1;
      if (0x7ff < uVar2) {
        uVar1 = ((uint)(uVar2 >> 0xc) | (uVar3 | uVar2 >> 6 & 0x3f) << 8) + 0x8181e1;
      }
      if (uVar2 < 0x80) {
        uVar1 = uVar2 + 1;
      }
      SVar10.str = (char *)(4 - ((ulong)LZCOUNT(uVar1) >> 3));
      local_88 = (ulong)uVar1 + 0xfefefefefefeff &
                 (-1L << ((long)SVar10.str * 8 & 0x3fU) ^ 0xffffffffffffffffU);
      SVar10.bridgeObject = pvVar8;
      SVar10 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)&local_88,SVar10);
      _swift_release(puVar6);
      goto LAB_100ae6764;
    }
    _swift_release(puVar6);
  }
  else {
    _swift_release(puVar6);
  }
  SVar10 = (String)ZEXT816(0);
LAB_100ae6764:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(SVar10.str,SVar10.bridgeObject);
}



/* Address: 0x100ae6870 | FUN_100ae6870 */

void FUN_100ae6870(void)

{
  FUN_100ae6918(FUN_100ae6658,9,FUN_100ae6888);
  return;
}



/* Address: 0x100ae6888 | FUN_100ae6888 */

void FUN_100ae6888(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_100ae6658();
  _swift_allocObject();
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0xd000000000000014;
  FUN_1000d4624(0xd000000000000014,0x8000000100dbb510);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Address: 0x100ae6900 | FUN_100ae6900 */

void FUN_100ae6900(void)

{
  FUN_100ae6918(FUN_100ae7860,0xf,FUN_100ae697c);
  return;
}



/* Address: 0x100ae6918 | FUN_100ae6918 */

undefined8 FUN_100ae6918(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  (*param_1)(0);
  FUN_1000d80e0(&local_28,"PasteSystemPermissions/DI+SystemPermissions.swift",0x31,2,param_2,0x13,
                param_3,0,uVar1);
  return local_28;
}



/* Address: 0x100ae697c | FUN_100ae697c */

void FUN_100ae697c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_100ae7860();
  _swift_allocObject();
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0xd000000000000010;
  FUN_1000d4624(0xd000000000000010,0x8000000100dbb530);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *param_1 = lVar1;
  return;
}



/* Address: 0x100ae69f4 | FUN_100ae69f4 */

void FUN_100ae69f4(void)

{
  FUN_100ae5d70(0);
  _swift_allocObject();
  return;
}



/* Address: 0x100ae6a14 | FUN_100ae6a14 */

undefined1  [16] FUN_100ae6a14(void)

{
  return ZEXT816(0x100ae6a24);
}



/* Address: 0x100ae6a24 | FUN_100ae6a24 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae6ae0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100ae6a24(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ObservedObject<undefined> OVar3;
  AnyView AVar4;
  undefined8 uVar5;
  
  puVar1 = &DAT_100f31f98;
  _swift_allocObject(&DAT_100f31f98,0x20,7);
  uVar5 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_100aec044();
  _swift_allocObject();
  _swift_retain(uVar5);
  uVar5 = 0;
  FUN_100aec53c(0,thunk_FUN_1001f68c0,puVar1);
  _swift_release(puVar1);
  puVar1 = &DAT_100ff87f0;
  FUN_100003a00(&DAT_100ff87f0,FUN_100aec044,&TargetProtocolConformanceDescriptor_100c95300);
  _swift_retain(uVar5);
  OVar3 = SwiftUI::ObservedObject::init(puVar1,uVar2,puVar1);
  FUN_100ae7190();
  AVar4 = SwiftUI::AnyView::_init(OVar3.unknown,&DAT_100f32048,OVar3.unknown);
  _swift_release(uVar5);
  *param_1 = AVar4.unknown;
  return;
}



/* Address: 0x100ae6b28 | FUN_100ae6b28 */

undefined1  [16] FUN_100ae6b28(void)

{
  return ZEXT816(0x100ae6b38);
}



/* Address: 0x100ae6b38 | FUN_100ae6b38 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae6bec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100ae6b38(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ObservedObject<undefined> OVar3;
  AnyView AVar4;
  undefined8 uVar5;
  
  puVar1 = &DAT_100f31f70;
  _swift_allocObject(&DAT_100f31f70,0x20,7);
  uVar5 = param_2[1];
  uVar2 = *param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  FUN_100aef56c();
  _swift_allocObject();
  _swift_retain(uVar5);
  uVar5 = 0;
  FUN_100aef19c(0,thunk_FUN_1001f68c0,puVar1);
  puVar1 = &DAT_100ff8a60;
  FUN_100003a00(&DAT_100ff8a60,FUN_100aef56c,&TargetProtocolConformanceDescriptor_100c958d8);
  _swift_retain(uVar5);
  OVar3 = SwiftUI::ObservedObject::init(puVar1,uVar2,puVar1);
  FUN_100ae7150();
  AVar4 = SwiftUI::AnyView::_init(OVar3.unknown,&DAT_100f323d0,OVar3.unknown);
  _swift_release(uVar5);
  *param_1 = AVar4.unknown;
  return;
}



/* Address: 0x100ae6c34 | FUN_100ae6c34 */

undefined1  [16] FUN_100ae6c34(void)

{
  return ZEXT816(0x100ae6c44);
}



/* Address: 0x100ae6c44 | FUN_100ae6c44 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae6da4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100ae6c44(ID *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ID self;
  ID IVar6;
  ObservedObject<undefined> OVar7;
  NSHostingView *pNVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  ID IStack_58;
  
  ppuVar9 = &local_70;
  puVar1 = &DAT_100f31ef8;
  _swift_allocObject(&DAT_100f31ef8,0x20,7);
  uVar10 = param_2[1];
  uVar5 = *param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_2[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  IVar2 = 0;
  FUN_1002177a4();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  _swift_retain(uVar10);
  IVar2 = objc_stub::init(IVar2);
  puVar3 = &DAT_100f31f20;
  _swift_allocObject(&DAT_100f31f20,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10,IVar2);
  puVar4 = &DAT_100f31f48;
  _swift_allocObject(&DAT_100f31f48,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(code **)(puVar4 + 0x18) = FUN_1001f68c0;
  *(undefined **)(puVar4 + 0x20) = puVar1;
  uVar10 = 0;
  FUN_100aef56c();
  _swift_allocObject();
  uVar5 = 1;
  FUN_100aef19c(1,FUN_100ae70fc,puVar4);
  FUN_10000ec2c(0,&DAT_100ff87e0,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  self = 1;
  FUN_10021d6dc(1,3);
  IVar6 = objc_stub::contentView(self);
  if (IVar6 != 0) {
    puVar1 = &DAT_100ff8a60;
    FUN_100003a00(&DAT_100ff8a60,FUN_100aef56c,&TargetProtocolConformanceDescriptor_100c958d8);
    _swift_retain(uVar5);
    OVar7 = SwiftUI::ObservedObject::init(puVar1,uVar10,puVar1);
    pNVar8 = (NSHostingView *)&DAT_100ff8a68;
    FUN_1000037f0(&DAT_100ff8a68,&DAT_100c94e80);
    _objc_allocWithZone();
    local_70 = OVar7.unknown;
    uStack_68 = uVar10;
    SwiftUI::NSHostingView::_init(pNVar8);
    local_60 = (undefined1 *)ppuVar9;
    IStack_58 = IVar6;
    FUN_1001fa09c();
    _swift_bridgeObjectRelease(ppuVar9);
  }
  objc_stub::setWindow_(IVar2,self);
  _swift_release(uVar5);
  *param_1 = IVar2;
  return;
}



/* Address: 0x100ae6e64 | FUN_100ae6e64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100ae6e64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 *local_68;
  
  uVar1 = 0;
  local_68 = param_1;
  FUN_10000ec2c(0,&DAT_100ff8928,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_70 = &PTR_PTR_100ec00e8;
  local_90[0] = param_2;
  local_78 = uVar1;
  FUN_1001f9774();
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  puVar2 = &DAT_100ff8a68;
  FUN_1000037f0(&DAT_100ff8a68,&DAT_100c94e80);
  ppuVar3 = local_90;
  FUN_1001f97b4(uVar1,uVar6,uVar7,uVar8,ppuVar3,puVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  local_90[0] = param_1;
  FUN_1001f9e3c(0x4081000000000000,0x4085400000000000,puVar2,&PTR_PTR_100ec00e8);
  puVar4 = &DAT_100ff8930;
  FUN_1000037f0(&DAT_100ff8930,&DAT_100c94dd0);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar5 = &DAT_100ff8938;
  FUN_1000037f0(&DAT_100ff8938,&DAT_100c94e90);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  *(undefined **)(puVar4 + 0x60) = puVar5;
  *(undefined ***)(puVar4 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar4 + 0x48) = puVar2;
  puVar5 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  puVar2 = &DAT_100ff8940;
  FUN_1000037f0(&DAT_100ff8940,&DAT_100c94de0);
  _swift_arrayDestroy(puVar4 + 0x20,uVar1,puVar2);
  return puVar5;
}



/* Address: 0x100ae6ffc | FUN_100ae6ffc */

void FUN_100ae6ffc(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long local_58 [3];
  long local_40;
  undefined **ppuStack_38;
  
  lVar1 = 0;
  FUN_1001ad0b8();
  lVar2 = lVar1;
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  ppuStack_38 = &PTR_PTR_100ebe088;
  lVar3 = 0;
  local_58[0] = lVar2;
  local_40 = lVar1;
  FUN_1001adc9c();
  _swift_allocObject();
  plVar4 = local_58;
  FUN_1001ad514();
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_PTR_100f31ed8;
  *param_1 = (long)plVar4;
  return;
}



/* Address: 0x100ae7088 | FUN_100ae7088 */

void FUN_100ae7088(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae70ac | FUN_100ae70ac */

void FUN_100ae70ac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae70d0 | FUN_100ae70d0 */

void FUN_100ae70d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae70fc | FUN_100ae70fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae70fc(undefined8 param_1)

{
  code *pcVar1;
  ID self;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  self = *(long *)(unaff_x20 + 0x10) + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  objc_stub::close(self);
  (*pcVar1)(param_1);
  return;
}



/* Address: 0x100ae7148 | FUN_100ae7148 */

void FUN_100ae7148(void)

{
  long unaff_x20;
  
  FUN_100ae6e64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100ae7150 | FUN_100ae7150 */

void FUN_100ae7150(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8a70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c955ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c955ac,&DAT_100f323d0);
  DAT_100ff8a70 = pTVar1;
  return;
}



/* Address: 0x100ae7190 | FUN_100ae7190 */

void FUN_100ae7190(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8a78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94f20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94f20,&DAT_100f32048);
  DAT_100ff8a78 = pTVar1;
  return;
}



/* Address: 0x100ae71d0 | thunk_FUN_100ae7088 */

void thunk_FUN_100ae7088(void)

{
  FUN_100ae7088();
  return;
}



/* Address: 0x100ae71d4 | thunk_FUN_100ae7088 */

void thunk_FUN_100ae7088(void)

{
  FUN_100ae7088();
  return;
}



/* Address: 0x100ae71d8 | thunk_FUN_1001f68c0 */

void thunk_FUN_1001f68c0(undefined1 param_1)

{
  long unaff_x20;
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_21);
  return;
}



/* Address: 0x100ae71dc | FUN_100ae71dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100ae71dc(void)

{
  bool bVar1;
  ID IVar2;
  _StringGuts _Var3;
  ID unaff_x20;
  String SVar4;
  
  IVar2 = objc_stub::bundleIdentifier(unaff_x20);
  if (IVar2 == 0) {
    bVar1 = false;
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var3.unknown = SVar4.bridgeObject;
    if ((SVar4.str == (undefined *)0xd00000000000001b) &&
       (_Var3.unknown == (undefined *)0x8000000100dbb700)) {
      bVar1 = true;
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar4.str,_Var3,(_StringComparisonResult)0x1b);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  return bVar1;
}



/* Address: 0x100ae7288 | FUN_100ae7288 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_100ae7288(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  ID IVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *in_x3;
  String SVar8;
  String SVar9;
  undefined1 auStack_68 [24];
  undefined *local_50;
  undefined8 uStack_48;
  
  pcVar7 = (char *)0x0;
  bVar4 = Swift::_stdlib_isOSVersionAtLeast(0xf,4,0);
  if ((bVar4 & 1) == 0) {
    bVar3 = true;
  }
  else {
    IVar5 = objc_stub::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
    IVar5 = objc_stub::FUN_100bfd260(IVar5);
    FUN_1000d468c(auStack_68,0);
    _Var6.unknown = local_50;
    FUN_100004640(auStack_68);
    Swift::_StringGuts::grow(0x18,_Var6);
    _swift_bridgeObjectRelease(0xe000000000000000);
    bVar3 = IVar5 == 2;
    pcVar1 = (char *)0x65757274;
    if (!bVar3) {
      pcVar1 = (char *)0x65736c6166;
    }
    puVar2 = &DAT_e400000000000000;
    if (!bVar3) {
      puVar2 = &DAT_e500000000000000;
    }
    SVar8.bridgeObject = puVar2;
    SVar8.str = pcVar1;
    SVar9.bridgeObject = in_x3;
    SVar9.str = pcVar7;
    Swift::String::append(SVar8,SVar9);
    _swift_bridgeObjectRelease(puVar2);
    FUN_1000d4db8(0xd000000000000016,0x8000000100dbb720,local_50,uStack_48);
    _swift_bridgeObjectRelease(0x8000000100dbb720);
    FUN_100004594(auStack_68);
  }
  return bVar3;
}



/* Address: 0x100ae73c4 | FUN_100ae73c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae7550 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100ae73c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  SchedulerOptions SVar5;
  TimerPublisher *pTVar6;
  TimerPublisher *pTVar7;
  undefined *puVar8;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  TimerPublisher *local_68;
  
  puVar2 = &DAT_100ff8950;
  FUN_1000037f0(&DAT_100ff8950,&DAT_100c94e00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&local_a0 - extraout_x8;
  puVar2 = &DAT_100ff8958;
  FUN_1000037f0(&DAT_100ff8958,&DAT_100c94ed0);
  local_70 = *(long *)(puVar2 + -8);
  local_80 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100ff8960;
  FUN_1000037f0(&DAT_100ff8960,&DAT_100c94e10);
  local_a0 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (lVar13 - extraout_x8_00) - extraout_x8_01;
  puVar3 = &DAT_100ff8968;
  FUN_1000037f0(&DAT_100ff8968,&DAT_100c94ee0);
  local_88 = *(long *)(puVar3 + -8);
  local_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar12 - extraout_x8_02;
  puVar3 = &DAT_100ff8970;
  FUN_1000037f0(&DAT_100ff8970,&DAT_100c94e20);
  local_78 = *(long *)(puVar3 + -8);
  local_90 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100ae7288();
  local_68 = (TimerPublisher *)(CONCAT71(local_68._1_7_,(char)puVar3) & 0xffffffffffffff01);
  Combine::Just::init(lVar12,puVar3,PTR___type_metadata_for_Swift_Bool_100eac570);
  FUN_100ae62dc(0);
  IVar4 = objc_stub::FUN_100c007a0((ID)&_OBJC_CLASS___NSRunLoop);
  uVar10 = *(undefined8 *)PTR__NSRunLoopCommonModes_100ea9ad0;
  SVar5 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar5.unknown + -8) + 0x38))(lVar13,1,1,SVar5.unknown);
  pTVar6 = (extension_Foundation)::__C::NSTimer::_publish
                     (0x3fe0000000000000,SVar5.unknown,1,IVar4,uVar10,lVar13);
  FUN_100ae6320(lVar13);
  local_68 = pTVar6;
  pTVar7 = TimerPublisher::_typeMetadataAccessor();
  FUN_100ae6368();
  (extension_Combine)::Combine::ConnectablePublisher::_autoconnect();
  _swift_release(pTVar6);
  puVar3 = &DAT_100f31fc8;
  local_68 = pTVar7;
  _swift_allocObject(&DAT_100f31fc8,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  FUN_1000037f0(&DAT_100ff8988,&DAT_100c94ef0);
  FUN_100016eac(&DAT_100ff8990,&DAT_100ff8988,&DAT_100c94ef0,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_Publishers_Autoconnect<A>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9648
               );
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(pTVar7);
  _swift_release(puVar3);
  puVar3 = &DAT_100ff8998;
  FUN_100016eac(&DAT_100ff8998,&DAT_100ff8960,&DAT_100c94e10,
                PTR_Combine__Combine__Just<undefined>_>Combine__Publisher_100ea9870);
  puVar8 = &DAT_100ff89a0;
  FUN_100016eac(&DAT_100ff89a0,&DAT_100ff8958,&DAT_100c94ed0,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  puVar1 = local_80;
  (extension_Combine)::Combine::Publisher::_merge(lVar11,puVar8,puVar2,local_80,puVar3,puVar8);
  (**(code **)(local_70 + 8))(lVar13 - extraout_x8_00,puVar1);
  (**(code **)(local_a0 + 8))(lVar12,puVar2);
  FUN_100016eac(&DAT_100ff89a8,&DAT_100ff8968,&DAT_100c94ee0,
                PTR_Combine__Combine__Publishers__Merge<undefined,undefined>_>Combine__Publisher_100ea96e0
               );
  puVar2 = local_98;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_88 + 8))(lVar11,puVar2);
  FUN_100016eac(&DAT_100ff89b0,&DAT_100ff8970,&DAT_100c94e20,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  puVar2 = local_90;
  AVar9 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_78 + 8))(lVar11 - extraout_x8_03,puVar2);
  return AVar9.unknown;
}



/* Address: 0x100ae780c | FUN_100ae780c */

void FUN_100ae780c(byte *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    bVar2 = 0;
  }
  else {
    lVar1 = param_3;
    FUN_100ae7288();
    _swift_release(param_3);
    bVar2 = (byte)lVar1 & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100ae7860 | FUN_100ae7860 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ae7860(void)

{
  return ZEXT816(0x100ff8ac0);
}



/* Address: 0x100ae7880 | FUN_100ae7880 */

void FUN_100ae7880(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae78a4 | FUN_100ae78a4 */

void FUN_100ae78a4(void)

{
  FUN_100ae780c();
  return;
}



/* Address: 0x100ae78ac | FUN_100ae78ac */

void FUN_100ae78ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100ae78b8 | FUN_100ae78b8 */

undefined1  [16] FUN_100ae78b8(void)

{
  return ZEXT816(0x100f32048);
}



/* Address: 0x100ae78c8 | FUN_100ae78c8 */

void FUN_100ae78c8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccbf18,1);
  return;
}



/* Address: 0x100ae78d8 | FUN_100ae78d8 */

void FUN_100ae78d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  String systemName;
  undefined8 uVar4;
  Design DVar5;
  undefined *puVar6;
  undefined *puVar7;
  Image IVar8;
  undefined7 extraout_var;
  Font FVar9;
  Color CVar10;
  Color CVar11;
  HorizontalAlignment HVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 auStack_80 [2];
  undefined *local_70;
  char local_61;
  
  puVar6 = &DAT_100ff8b20;
  auStack_80[1] = param_2;
  FUN_1000037f0(&DAT_100ff8b20,&DAT_100c94f70);
  local_70 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = -extraout_x8;
  puVar15 = (undefined8 *)((long)auStack_80 + lVar3);
  puVar6 = &DAT_100ff8b28;
  FUN_1000037f0(&DAT_100ff8b28,&DAT_100c94f78);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)puVar15 - extraout_x8_00);
  puVar7 = &DAT_100ff8b30;
  FUN_1000037f0(&DAT_100ff8b30,&DAT_100c94f80);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)puVar14 - extraout_x8_01;
  puVar7 = &DAT_100ff8b38;
  FUN_1000037f0(&DAT_100ff8b38,&DAT_100c94f88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar13 = lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar7 = &DAT_100c94f90;
  _swift_getKeyPath(&DAT_100c94f90);
  HVar12.unknown = &DAT_100c94fb8;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(&local_61,param_3,puVar7,HVar12.unknown);
  _swift_release(puVar7);
  _swift_release();
  if (local_61 == '\x01') {
    FUN_10020c9a8();
    systemName = *(String *)HVar12.unknown;
    _swift_bridgeObjectRetain(((String *)HVar12.unknown)->bridgeObject);
    IVar8 = SwiftUI::Image::init(systemName);
    DVar5 = SwiftUI::Font::Design::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,DVar5.value) + -8) + 0x38))
              (lVar16,1,1,CONCAT71(extraout_var,DVar5.value));
    FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
    FUN_100005808(lVar16,&DAT_100ff8b30,&DAT_100c94f80);
    CVar10.unknown = &DAT_100c95010;
    _swift_getKeyPath();
    CVar11 = SwiftUI::Color::get_green(CVar10);
    puVar7 = &DAT_100c95040;
    _swift_getKeyPath();
    *puVar14 = IVar8.unknown;
    puVar14[1] = CVar10.unknown;
    puVar14[2] = FVar9.unknown;
    puVar14[3] = puVar7;
    puVar14[4] = CVar11.unknown;
    _swift_storeEnumTagMultiPayload(puVar14,puVar6,0);
    FUN_1000037f0(&DAT_100ff8b48,&DAT_100c94fe0);
    FUN_100ae9a70();
    FUN_100ae9ba0();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
  }
  else {
    HVar12 = SwiftUI::HorizontalAlignment::get_center(HVar12);
    *puVar15 = HVar12.unknown;
    *(undefined8 *)((long)auStack_80 + lVar3 + 8) = 0;
    *(undefined1 *)((long)&local_70 + lVar3) = 0;
    puVar7 = &DAT_100ff8b40;
    FUN_1000037f0(&DAT_100ff8b40,&DAT_100c94fd8);
    uVar4 = auStack_80[1];
    FUN_100ae7d8c((long)puVar15 + (long)*(int *)(puVar7 + 0x2c),auStack_80[1],param_3);
    puVar7 = &DAT_100f32070;
    _swift_allocObject(&DAT_100f32070,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar4;
    *(undefined8 *)(puVar7 + 0x18) = param_3;
    puVar1 = (undefined8 *)((long)puVar15 + (long)*(int *)(local_70 + 0x24));
    *puVar1 = FUN_100ae9a18;
    puVar1[1] = puVar7;
    puVar1[2] = 0;
    puVar1[3] = 0;
    FUN_100ae9a20(puVar15,puVar14);
    _swift_storeEnumTagMultiPayload(puVar14,puVar6,1);
    _swift_retain(param_3);
    FUN_1000037f0(&DAT_100ff8b48,&DAT_100c94fe0);
    FUN_100ae9a70();
    FUN_100ae9ba0();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
    FUN_100005808(puVar15,&DAT_100ff8b20,&DAT_100c94f70);
  }
  FUN_100011090(lVar13 - extraout_x12,lVar13,&DAT_100ff8b38,&DAT_100c94f88);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar6 = &DAT_100ff8ba0;
  FUN_1000037f0(&DAT_100ff8ba0,&DAT_100c95008);
  FUN_100011090(lVar13,(long)param_1 + (long)*(int *)(puVar6 + 0x30),&DAT_100ff8b38,&DAT_100c94f88);
  iVar2 = *(int *)(puVar6 + 0x40);
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 1;
  FUN_100005808(lVar13 - extraout_x12,&DAT_100ff8b38,&DAT_100c94f88);
  FUN_100005808(lVar13,&DAT_100ff8b38,&DAT_100c94f88);
  return;
}



/* Address: 0x100ae7d00 | FUN_100ae7d00 */

void FUN_100ae7d00(void)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100ae9d00();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnableAccessibilityAccessView.swift",0x3a,1,0x10,
               UVar3.unknown,pMVar1);
  }
  FUN_100ae9ee4();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100ae7d8c | FUN_100ae7d8c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae80f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100ae7d8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  ResizingMode RVar6;
  RoundedCornerStyle RVar7;
  LocalizedStringResource LVar8;
  MainActor *pMVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  NSImage *nsImage;
  Image IVar14;
  Image IVar15;
  EdgeInsets EVar16;
  _FrameLayout _Var17;
  Set SVar18;
  char *pcVar19;
  Text TVar20;
  Font FVar21;
  Font FVar22;
  Text TVar23;
  Alignment AVar24;
  RoundedRectangle RVar25;
  VerticalAlignment VVar26;
  Text TVar27;
  undefined *puVar28;
  char *pcVar29;
  long extraout_x8;
  undefined8 *puVar30;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar31;
  long extraout_x8_02;
  long lVar32;
  long extraout_x12;
  long extraout_x12_00;
  long lVar33;
  EdgeInsets EVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  String SVar43;
  undefined8 uStack_1060;
  undefined1 auStack_1058 [8];
  undefined8 uStack_1050;
  undefined1 auStack_1048 [8];
  undefined8 auStack_1040 [2];
  char *apcStack_1030 [4];
  MainActor *local_1010;
  undefined8 *local_1008;
  long local_1000;
  undefined *local_ff8;
  undefined8 local_ff0;
  long local_fe8;
  LocalizedStringResource local_fe0;
  undefined8 *local_fd8;
  undefined8 *local_fd0;
  undefined1 auStack_fc8 [216];
  char *local_ef0;
  void *pvStack_ee8;
  undefined8 local_ee0;
  undefined8 uStack_ed8;
  undefined8 local_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  undefined8 local_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 local_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 local_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 local_e30;
  undefined8 uStack_e28;
  undefined1 local_e20;
  char *local_e10;
  void *pvStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 local_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 local_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 local_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 local_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 local_d70;
  undefined8 uStack_d68;
  undefined8 local_d60;
  undefined8 uStack_d58;
  undefined8 local_d50;
  undefined8 uStack_d48;
  undefined1 local_d40;
  undefined *local_d30;
  undefined8 uStack_d28;
  undefined8 uStack_d20;
  undefined8 uStack_d18;
  undefined8 local_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 local_cf0;
  undefined8 uStack_ce8;
  undefined8 uStack_ce0;
  undefined8 uStack_cd8;
  undefined1 local_cd0;
  char *local_cc0;
  void *pvStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined8 local_ca0;
  undefined8 uStack_c98;
  undefined1 local_c90;
  char *local_c80;
  void *pvStack_c78;
  undefined8 uStack_c70;
  undefined8 uStack_c68;
  undefined8 local_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 local_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 local_c20;
  undefined8 uStack_c18;
  undefined8 uStack_c10;
  undefined8 uStack_c08;
  undefined8 local_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  char *local_bd0;
  void *pvStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 uStack_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 local_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  char *local_b20;
  void *pvStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined8 uStack_ab8;
  undefined8 local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined1 uStack_a78;
  undefined7 uStack_a77;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined1 local_a50;
  char *local_a40;
  void *pvStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined8 uStack_a18;
  undefined8 local_a10;
  undefined8 uStack_a08;
  undefined8 local_a00;
  undefined8 uStack_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined1 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined1 local_970;
  undefined *local_960;
  undefined8 uStack_958;
  undefined8 local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 local_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  undefined1 local_900;
  char *local_8f0;
  void *pvStack_8e8;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined1 local_820;
  char *local_818;
  void *pvStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined1 local_7e8;
  char *local_7e0;
  void *pvStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined1 local_7b0;
  undefined7 uStack_7af;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  String local_730;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined1 local_660;
  char *local_650;
  void *pvStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined1 local_620;
  char *local_610;
  void *pvStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  char *local_560;
  void *pvStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  char *local_4b0;
  void *pvStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined1 uStack_408;
  undefined7 uStack_407;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined1 local_3e0;
  String local_3d0;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 local_310;
  undefined8 local_308;
  undefined1 local_300;
  char *local_2f0;
  void *pvStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined1 local_2c0;
  char *local_2b8;
  void *pvStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  char *local_280;
  void *pvStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  char *local_100;
  void *pvStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *puVar9;
  
  puVar9 = &DAT_100ff8ba8;
  local_ff0 = param_2;
  FUN_1000037f0(&DAT_100ff8ba8,&DAT_100c95070);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar33 = (long)apcStack_1030 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar30 = (undefined8 *)(lVar33 - extraout_x12);
  puVar9 = &DAT_100ff8bb0;
  local_fd0 = puVar30;
  FUN_1000037f0(&DAT_100ff8bb0,&DAT_100c95078);
  local_ff8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar32 = (long)puVar30 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_fe8 = lVar32;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar30 = (undefined8 *)(lVar32 - extraout_x12_00);
  local_fd8 = puVar30;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  puVar31 = (undefined *)((long)puVar30 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_fe0.unknown = puVar31;
  RVar6 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar9 = (undefined *)CONCAT71((int7)((ulong)LVar8.unknown >> 8),RVar6.value);
  lVar32 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar32 + 0x40));
  EVar34.unknown = puVar31 + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar11 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  pMVar10 = pMVar11;
  FUN_100ae9d00();
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnableAccessibilityAccessView.swift",0x3a,1,0x17,
               UVar12.unknown,pMVar10);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    apcStack_1030[3] = (char *)param_3;
    local_1010 = pMVar11;
    local_1008 = param_1;
    local_1000 = lVar33;
    nsImage = (NSImage *)objc_stub::applicationIconImage(*(ID *)PTR__NSApp_100ea8fa0);
    if (nsImage != (NSImage *)0x0) {
      IVar14 = SwiftUI::Image::init(nsImage);
      IVar15.unknown = puVar9;
      (**(code **)(lVar32 + 0x68))
                (EVar34.unknown,
                 *(undefined4 *)
                  PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
                );
      uVar37 = 0;
      uVar39 = 0;
      uVar40 = 0;
      IVar15 = SwiftUI::Image::resizable(EVar34,(ResizingMode)(__int8)IVar14.unknown,IVar15);
      _swift_release(IVar14.unknown);
      EVar16.unknown = EVar34.unknown;
      (**(code **)(lVar32 + 8))(EVar34.unknown,puVar9);
      SwiftUI::Alignment::get_center((Alignment)EVar16.unknown);
      _Var17 = SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
      SVar18 = SwiftUI::Edge::Set::get_bottom(_Var17.unknown);
      uVar38 = 0x4020000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
      uStack_1c8 = local_c0;
      local_1c0 = local_b8;
      uStack_1b8 = local_b0;
      local_1b0 = local_a8;
      uStack_1a8 = local_a0;
      local_1a0 = uStack_98;
      uStack_198 = SUB81(SVar18.unknown,0);
      local_170 = 0;
      local_160 = local_c0;
      local_158 = local_b8;
      local_150 = local_b0;
      local_148 = local_a8;
      local_140 = local_a0;
      local_138 = uStack_98;
      local_108 = 0;
      puVar9 = &DAT_100c95080;
      local_1d0 = IVar15.unknown;
      local_190 = uVar38;
      uStack_188 = uVar37;
      local_180 = uVar39;
      uStack_178 = uVar40;
      local_168 = IVar15.unknown;
      local_130 = uStack_198;
      local_128 = uVar38;
      local_120 = uVar37;
      local_118 = uVar39;
      local_110 = uVar40;
      FUN_100011090(&local_1d0,&local_3d0,&DAT_100ff8bb8);
      FUN_100005808(&local_168,&DAT_100ff8bb8,&DAT_100c95080);
      LVar8.unknown = local_fe0.unknown;
      FUN_1001bb388(local_fe0.unknown);
      SVar43 = (extension_Foundation)::Swift::String::init(LVar8);
      local_3d0 = SVar43;
      FUN_100ae9d44();
      pcVar19 = SVar43.str;
      puVar31 = PTR___type_metadata_for_Swift_String_100eac208;
      apcStack_1030[2] = pcVar19;
      TVar20 = SwiftUI::Text::_init(pcVar19,PTR___type_metadata_for_Swift_String_100eac208);
      apcStack_1030[1] = puVar9;
      FVar21 = SwiftUI::Font::get_title(TVar20.unknown);
      FVar22 = SwiftUI::Font::bold(FVar21);
      _swift_release(FVar21.unknown);
      TVar27 = TVar20;
      puVar9 = puVar31;
      AVar24.unknown = pcVar19;
      TVar23 = SwiftUI::Text::_font(FVar22.unknown);
      _swift_release(FVar22.unknown);
      FUN_100016d74(TVar20.unknown,puVar31,pcVar19);
      _swift_bridgeObjectRelease(apcStack_1030[1]);
      FUN_100205044(&local_2b8,1,TVar23.unknown,TVar27.unknown,puVar9,AVar24.unknown);
      FUN_100016d74(TVar23.unknown,TVar27.unknown,puVar9);
      _swift_bridgeObjectRelease();
      AVar24 = SwiftUI::Alignment::get_center(AVar24);
      pvStack_f8 = pvStack_2b0;
      local_100 = local_2b8;
      uStack_e8 = uStack_2a0;
      local_f0 = local_2a8;
      uStack_d8 = uStack_290;
      local_e0 = local_298;
      local_d0 = local_288;
      *(undefined **)(EVar34.unknown + -0x10) = AVar24.unknown;
      *(undefined **)(EVar34.unknown + -8) = TVar27.unknown;
      EVar34.unknown[-0x18] = 1;
      *(undefined8 *)(EVar34.unknown + -0x20) = 0;
      EVar34.unknown[-0x28] = 1;
      *(undefined8 *)(EVar34.unknown + -0x30) = 0;
      SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
      pvStack_278 = pvStack_f8;
      local_280 = local_100;
      uStack_268 = uStack_e8;
      local_270 = local_f0;
      uStack_258 = uStack_d8;
      local_260 = local_e0;
      pvStack_648 = pvStack_2b0;
      local_650 = local_2b8;
      local_250 = local_d0;
      uStack_638 = uStack_2a0;
      local_640 = local_2a8;
      uStack_628 = uStack_290;
      local_630 = local_298;
      local_620 = local_288;
      FUN_100011090(&local_100,&local_3d0,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18.unknown = (undefined *)&local_650;
      FUN_100005808(SVar18.unknown,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
      uStack_598 = uStack_208;
      local_5a0 = local_210;
      uStack_588 = uStack_1f8;
      local_590 = local_200;
      uStack_578 = uStack_1e8;
      local_580 = local_1f0;
      local_570 = local_1e0;
      local_5e0 = CONCAT71(uStack_24f,local_250);
      uStack_5d8 = uStack_248;
      uStack_5c8 = uStack_238;
      local_5d0 = local_240;
      uStack_5b8 = uStack_228;
      local_5c0 = local_230;
      uStack_5a8 = uStack_218;
      local_5b0 = local_220;
      pvStack_608 = pvStack_278;
      local_610 = local_280;
      uStack_5f8 = uStack_268;
      local_600 = local_270;
      uStack_5e8 = uStack_258;
      local_5f0 = local_260;
      uVar37 = 0x4010000000000000;
      uVar38 = local_2a8;
      SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
      uStack_4e8 = uStack_208;
      local_4f0 = local_210;
      uStack_4d8 = uStack_1f8;
      local_4e0 = local_200;
      uStack_4c8 = uStack_1e8;
      local_4d0 = local_1f0;
      local_4c0 = local_1e0;
      local_530 = CONCAT71(uStack_24f,local_250);
      uStack_528 = uStack_248;
      uStack_518 = uStack_238;
      local_520 = local_240;
      uStack_508 = uStack_228;
      local_510 = local_230;
      uStack_4f8 = uStack_218;
      local_500 = local_220;
      pvStack_558 = pvStack_278;
      local_560 = local_280;
      uStack_548 = uStack_268;
      local_550 = local_270;
      uStack_538 = uStack_258;
      local_540 = local_260;
      FUN_100011090(&local_610,&local_3d0,&DAT_100ff8bd0,&DAT_100c95090);
      FUN_100005808(&local_560,&DAT_100ff8bd0,&DAT_100c95090);
      local_410 = local_1e0;
      uStack_438 = uStack_208;
      local_440 = local_210;
      uStack_428 = uStack_1f8;
      local_430 = local_200;
      uStack_418 = uStack_1e8;
      local_420 = local_1f0;
      local_480 = CONCAT71(uStack_24f,local_250);
      uStack_478 = uStack_248;
      uStack_468 = uStack_238;
      local_470 = local_240;
      uStack_458 = uStack_228;
      local_460 = local_230;
      uStack_448 = uStack_218;
      local_450 = local_220;
      pvStack_4a8 = pvStack_278;
      local_4b0 = local_280;
      uStack_498 = uStack_268;
      local_4a0 = local_270;
      uStack_488 = uStack_258;
      local_490 = local_260;
      uStack_408 = SUB81(SVar18.unknown,0);
      local_3e0 = 0;
      uStack_358 = uStack_208;
      local_360 = local_210;
      uStack_348 = uStack_1f8;
      local_350 = local_200;
      uStack_338 = uStack_1e8;
      local_340 = local_1f0;
      local_330 = local_1e0;
      local_3a0 = CONCAT71(uStack_24f,local_250);
      uStack_398 = uStack_248;
      uStack_388 = uStack_238;
      local_390 = local_240;
      uStack_378 = uStack_228;
      local_380 = local_230;
      uStack_368 = uStack_218;
      local_370 = local_220;
      local_3d0.bridgeObject = pvStack_278;
      local_3d0.str = local_280;
      uStack_3b8 = uStack_268;
      local_3c0 = local_270;
      uStack_3a8 = uStack_258;
      local_3b0 = local_260;
      local_300 = 0;
      puVar9 = &DAT_100c95098;
      local_400 = uVar37;
      uStack_3f8 = uVar38;
      local_3f0 = uVar39;
      uStack_3e8 = uVar40;
      local_328 = uStack_408;
      local_320 = uVar37;
      local_310 = uVar39;
      local_308 = uVar40;
      FUN_100011090(&local_4b0,&local_730,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_3d0,&DAT_100ff8bd8,&DAT_100c95098);
      LVar8.unknown = local_fe0.unknown;
      FUN_1001bb208(local_fe0.unknown);
      local_730 = (extension_Foundation)::Swift::String::init(LVar8);
      puVar31 = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar19 = apcStack_1030[2];
      TVar20 = SwiftUI::Text::_init();
      FVar21 = SwiftUI::Font::get_body(TVar20.unknown);
      TVar27 = TVar20;
      puVar28 = puVar31;
      pcVar29 = pcVar19;
      TVar23 = SwiftUI::Text::_font(FVar21.unknown);
      local_fe0.unknown = pcVar29;
      _swift_release(FVar21.unknown);
      FUN_100016d74(TVar20.unknown,puVar31,pcVar19);
      _swift_bridgeObjectRelease(puVar9);
      LVar8.unknown = local_fe0.unknown;
      FUN_100205044(&local_818,1,TVar23.unknown,TVar27.unknown,puVar28,local_fe0.unknown);
      FUN_100016d74(TVar23.unknown,TVar27.unknown,puVar28);
      _swift_bridgeObjectRelease();
      AVar24 = SwiftUI::Alignment::get_center(LVar8.unknown);
      pvStack_2e8 = pvStack_810;
      local_2f0 = local_818;
      uStack_2d8 = uStack_800;
      local_2e0 = local_808;
      uStack_2c8 = uStack_7f0;
      local_2d0 = local_7f8;
      local_2c0 = local_7e8;
      *(undefined **)(EVar34.unknown + -0x10) = AVar24.unknown;
      *(undefined **)(EVar34.unknown + -8) = TVar27.unknown;
      EVar34.unknown[-0x18] = 1;
      *(undefined8 *)(EVar34.unknown + -0x20) = 0;
      EVar34.unknown[-0x28] = 1;
      *(undefined8 *)(EVar34.unknown + -0x30) = 0;
      SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
      pvStack_7d8 = pvStack_2e8;
      local_7e0 = local_2f0;
      uStack_7c8 = uStack_2d8;
      local_7d0 = local_2e0;
      uStack_7b8 = uStack_2c8;
      local_7c0 = local_2d0;
      local_7b0 = local_2c0;
      pvStack_cb8 = pvStack_810;
      local_cc0 = local_818;
      uStack_ca8 = uStack_800;
      uStack_cb0 = local_808;
      uStack_c98 = uStack_7f0;
      local_ca0 = local_7f8;
      local_c90 = local_7e8;
      FUN_100011090(&local_2f0,&local_730,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18.unknown = (undefined *)&local_cc0;
      FUN_100005808(SVar18.unknown,&DAT_100ff8bc8,&DAT_100c95c00);
      SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
      uStack_bf8 = uStack_758;
      local_c00 = local_760;
      uStack_be8 = uStack_748;
      uStack_bf0 = local_750;
      local_be0 = local_740;
      uVar38 = CONCAT71(uStack_7af,local_7b0);
      uStack_c38 = uStack_798;
      local_c40 = local_7a0;
      uStack_c28 = uStack_788;
      uStack_c30 = local_790;
      uStack_c18 = uStack_778;
      local_c20 = local_780;
      uStack_c08 = uStack_768;
      uStack_c10 = local_770;
      pvStack_c78 = pvStack_7d8;
      local_c80 = local_7e0;
      uStack_c68 = uStack_7c8;
      uStack_c70 = local_7d0;
      uStack_c58 = uStack_7b8;
      local_c60 = local_7c0;
      uStack_c48 = uStack_7a8;
      uVar35 = 0x403c000000000000;
      uVar39 = local_7d0;
      uVar41 = local_790;
      uStack_c50 = uVar38;
      SwiftUI::EdgeInsets::init((CGFloat)SVar18.unknown);
      uStack_b48 = uStack_758;
      local_b50 = local_760;
      uStack_b38 = uStack_748;
      uStack_b40 = local_750;
      local_b30 = local_740;
      uStack_ba0 = CONCAT71(uStack_7af,local_7b0);
      uStack_b88 = uStack_798;
      local_b90 = local_7a0;
      uStack_b78 = uStack_788;
      uStack_b80 = local_790;
      uStack_b68 = uStack_778;
      local_b70 = local_780;
      uStack_b58 = uStack_768;
      uStack_b60 = local_770;
      pvStack_bc8 = pvStack_7d8;
      local_bd0 = local_7e0;
      uStack_bb8 = uStack_7c8;
      uStack_bc0 = local_7d0;
      uStack_ba8 = uStack_7b8;
      local_bb0 = local_7c0;
      uStack_b98 = uStack_7a8;
      uVar42 = local_790;
      FUN_100011090(&local_c80,&local_730,&DAT_100ff8bd0,&DAT_100c95090);
      FUN_100005808(&local_bd0,&DAT_100ff8bd0,&DAT_100c95090);
      local_a80 = local_740;
      uStack_aa8 = uStack_768;
      local_ab0 = local_770;
      uStack_a98 = uStack_758;
      local_aa0 = local_760;
      uStack_a88 = uStack_748;
      local_a90 = local_750;
      uStack_af0 = CONCAT71(uStack_7af,local_7b0);
      uStack_ad8 = uStack_798;
      local_ae0 = local_7a0;
      uStack_ac8 = uStack_788;
      local_ad0 = local_790;
      uStack_ab8 = uStack_778;
      local_ac0 = local_780;
      pvStack_b18 = pvStack_7d8;
      local_b20 = local_7e0;
      uStack_b08 = uStack_7c8;
      uStack_b10 = local_7d0;
      uStack_af8 = uStack_7b8;
      local_b00 = local_7c0;
      uStack_ae8 = uStack_7a8;
      uStack_a78 = SUB81(SVar18.unknown,0);
      local_a50 = 0;
      uStack_9c8 = uStack_768;
      local_9d0 = local_770;
      uStack_9b8 = uStack_758;
      local_9c0 = local_760;
      uStack_9a8 = uStack_748;
      local_9b0 = local_750;
      local_9a0 = local_740;
      local_a10 = CONCAT71(uStack_7af,local_7b0);
      uStack_a08 = uStack_7a8;
      uStack_9f8 = uStack_798;
      local_a00 = local_7a0;
      uStack_9e8 = uStack_788;
      local_9f0 = local_790;
      uStack_9d8 = uStack_778;
      local_9e0 = local_780;
      pvStack_a38 = pvStack_7d8;
      local_a40 = local_7e0;
      uStack_a28 = uStack_7c8;
      local_a30 = local_7d0;
      uStack_a18 = uStack_7b8;
      local_a20 = local_7c0;
      local_970 = 0;
      uVar37 = local_7c0;
      uVar40 = local_7d0;
      local_a70 = uVar35;
      uStack_a68 = uVar38;
      local_a60 = uVar39;
      uStack_a58 = uVar41;
      local_998 = uStack_a78;
      local_990 = uVar35;
      local_988 = uVar38;
      local_980 = uVar39;
      FUN_100011090(&local_b20,&local_730,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_a40,&DAT_100ff8bd8,&DAT_100c95098);
      if (DAT_100ff87c8 != -1) {
        _swift_once(&DAT_100ff87c8,FUN_100ae43c8);
      }
      SVar43.bridgeObject = (void *)0x8000000100dbb780;
      SVar43.str = (char *)0xd00000000000001b;
      IVar15 = SwiftUI::Image::_init(SVar43);
      puVar9 = &DAT_100ff8be0;
      FUN_1000037f0(&DAT_100ff8be0,&DAT_100c950a0);
      puVar4 = local_fd8;
      puVar30 = (undefined8 *)((long)local_fd8 + (long)*(int *)(puVar9 + 0x24));
      RVar25 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar3 = *(int *)(RVar25.unknown + 0x14);
      uVar2 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar32 = CONCAT71((int7)((ulong)RVar25.unknown >> 8),RVar7.value);
      (**(code **)(*(long *)(lVar32 + -8) + 0x68))((long)puVar30 + (long)iVar3,uVar2,lVar32);
      auVar36 = NEON_fmov(0x4024000000000000,8);
      puVar30[1] = auVar36._8_8_;
      *puVar30 = auVar36._0_8_;
      SVar18.unknown = &DAT_100ff8be8;
      FUN_1000037f0(&DAT_100ff8be8,&DAT_100c950a8);
      *(undefined2 *)((long)puVar30 + (long)*(int *)(SVar18.unknown + 0x24)) = 0x100;
      *puVar4 = IVar15.unknown;
      SVar18 = SwiftUI::Edge::Set::get_bottom(SVar18);
      uVar38 = 0x403c000000000000;
      EVar34 = SwiftUI::EdgeInsets::init(SVar18.unknown);
      puVar1 = (undefined1 *)((long)puVar4 + (long)*(int *)(local_ff8 + 0x24));
      *puVar1 = (char)SVar18.unknown;
      *(undefined8 *)(puVar1 + 8) = uVar38;
      *(undefined8 *)(puVar1 + 0x10) = uVar37;
      *(undefined8 *)(puVar1 + 0x18) = uVar40;
      *(undefined8 *)(puVar1 + 0x20) = uVar42;
      puVar1[0x28] = 0;
      VVar26 = SwiftUI::VerticalAlignment::get_center(EVar34.unknown);
      puVar30 = local_fd0;
      *local_fd0 = VVar26.unknown;
      puVar30[1] = 0x4030000000000000;
      *(undefined1 *)(puVar30 + 2) = 0;
      puVar9 = &DAT_100ff8bf0;
      FUN_1000037f0(&DAT_100ff8bf0,&DAT_100c950b0);
      FUN_100ae8da8((long)puVar30 + (long)*(int *)(puVar9 + 0x2c),local_ff0,apcStack_1030[3]);
      lVar33 = local_fe8;
      uStack_cf8 = CONCAT71(uStack_197,uStack_198);
      uStack_ce8 = uStack_188;
      local_cf0 = local_190;
      uStack_cd8 = uStack_178;
      uStack_ce0 = local_180;
      local_cd0 = local_170;
      uStack_d20 = CONCAT71(uStack_1bf,local_1c0);
      uStack_d28 = uStack_1c8;
      local_d30 = local_1d0;
      uStack_d18 = uStack_1b8;
      local_d10 = CONCAT71(uStack_1af,local_1b0);
      uStack_d08 = uStack_1a8;
      uStack_d00 = local_1a0;
      uStack_d68 = CONCAT71(uStack_407,uStack_408);
      local_d70 = local_410;
      uStack_d58 = uStack_3f8;
      local_d60 = local_400;
      uStack_d48 = uStack_3e8;
      local_d50 = local_3f0;
      local_d40 = local_3e0;
      uStack_da8 = uStack_448;
      local_db0 = local_450;
      uStack_d98 = uStack_438;
      local_da0 = local_440;
      uStack_d88 = uStack_428;
      local_d90 = local_430;
      uStack_d78 = uStack_418;
      local_d80 = local_420;
      uStack_de8 = uStack_488;
      local_df0 = local_490;
      uStack_dd8 = uStack_478;
      local_de0 = local_480;
      uStack_dc8 = uStack_468;
      local_dd0 = local_470;
      uStack_db8 = uStack_458;
      local_dc0 = local_460;
      pvStack_e08 = pvStack_4a8;
      local_e10 = local_4b0;
      uStack_df8 = uStack_498;
      uStack_e00 = local_4a0;
      uStack_e48 = CONCAT71(uStack_a77,uStack_a78);
      local_e50 = local_a80;
      uStack_e38 = uStack_a68;
      local_e40 = local_a70;
      uStack_e28 = uStack_a58;
      local_e30 = local_a60;
      local_e20 = local_a50;
      uStack_e88 = uStack_ab8;
      local_e90 = local_ac0;
      uStack_e78 = uStack_aa8;
      local_e80 = local_ab0;
      uStack_e68 = uStack_a98;
      local_e70 = local_aa0;
      uStack_e58 = uStack_a88;
      local_e60 = local_a90;
      uStack_ec8 = uStack_af8;
      local_ed0 = local_b00;
      uStack_eb8 = uStack_ae8;
      local_ec0 = uStack_af0;
      uStack_ea8 = uStack_ad8;
      local_eb0 = local_ae0;
      uStack_e98 = uStack_ac8;
      local_ea0 = local_ad0;
      pvStack_ee8 = pvStack_b18;
      local_ef0 = local_b20;
      uStack_ed8 = uStack_b08;
      local_ee0 = uStack_b10;
      FUN_100011090(puVar4,local_fe8);
      lVar32 = local_1000;
      FUN_100011090(puVar30,local_1000,&DAT_100ff8ba8,&DAT_100c95070);
      puVar30 = local_1008;
      uStack_928 = uStack_cf8;
      local_930 = uStack_d00;
      uStack_918 = uStack_ce8;
      local_920 = local_cf0;
      uStack_908 = uStack_cd8;
      local_910 = uStack_ce0;
      uStack_958 = uStack_d28;
      local_960 = local_d30;
      uStack_948 = uStack_d18;
      local_950 = uStack_d20;
      uStack_938 = uStack_d08;
      local_940 = local_d10;
      local_1008[1] = uStack_d28;
      *local_1008 = local_d30;
      local_1008[3] = uStack_d18;
      local_1008[2] = uStack_d20;
      local_1008[5] = uStack_d08;
      local_1008[4] = local_d10;
      local_1008[7] = uStack_cf8;
      local_1008[6] = uStack_d00;
      local_1008[9] = uStack_ce8;
      local_1008[8] = local_cf0;
      local_1008[0xb] = uStack_cd8;
      local_1008[10] = uStack_ce0;
      pvStack_8e8 = pvStack_e08;
      local_8f0 = local_e10;
      uStack_898 = uStack_db8;
      local_8a0 = local_dc0;
      uStack_8a8 = uStack_dc8;
      local_8b0 = local_dd0;
      uStack_8b8 = uStack_dd8;
      local_8c0 = local_de0;
      uStack_8c8 = uStack_de8;
      local_8d0 = local_df0;
      uStack_858 = uStack_d78;
      local_860 = local_d80;
      uStack_868 = uStack_d88;
      local_870 = local_d90;
      uStack_878 = uStack_d98;
      local_880 = local_da0;
      uStack_888 = uStack_da8;
      local_890 = local_db0;
      uStack_828 = uStack_d48;
      local_830 = local_d50;
      uStack_838 = uStack_d58;
      local_840 = local_d60;
      uStack_848 = uStack_d68;
      local_850 = local_d70;
      uStack_8d8 = uStack_df8;
      local_8e0 = uStack_e00;
      local_1008[0x22] = uStack_d68;
      local_1008[0x21] = local_d70;
      local_1008[0x24] = uStack_d58;
      local_1008[0x23] = local_d60;
      local_1008[0x26] = uStack_d48;
      local_1008[0x25] = local_d50;
      local_1008[0x1a] = uStack_da8;
      local_1008[0x19] = local_db0;
      local_1008[0x1c] = uStack_d98;
      local_1008[0x1b] = local_da0;
      local_1008[0x1e] = uStack_d88;
      local_1008[0x1d] = local_d90;
      local_1008[0x20] = uStack_d78;
      local_1008[0x1f] = local_d80;
      local_1008[0x12] = uStack_de8;
      local_1008[0x11] = local_df0;
      local_1008[0x14] = uStack_dd8;
      local_1008[0x13] = local_de0;
      local_1008[0x16] = uStack_dc8;
      local_1008[0x15] = local_dd0;
      local_1008[0x18] = uStack_db8;
      local_1008[0x17] = local_dc0;
      local_1008[0xe] = pvStack_e08;
      local_1008[0xd] = local_e10;
      local_1008[0x10] = uStack_df8;
      local_1008[0xf] = uStack_e00;
      uStack_688 = uStack_e48;
      local_690 = local_e50;
      uStack_678 = uStack_e38;
      local_680 = local_e40;
      uStack_668 = uStack_e28;
      local_670 = local_e30;
      uStack_6c8 = uStack_e88;
      local_6d0 = local_e90;
      uStack_6b8 = uStack_e78;
      local_6c0 = local_e80;
      uStack_6a8 = uStack_e68;
      local_6b0 = local_e70;
      uStack_698 = uStack_e58;
      local_6a0 = local_e60;
      uStack_708 = uStack_ec8;
      local_710 = local_ed0;
      uStack_6f8 = uStack_eb8;
      local_700 = local_ec0;
      uStack_6e8 = uStack_ea8;
      local_6f0 = local_eb0;
      uStack_6d8 = uStack_e98;
      local_6e0 = local_ea0;
      local_730.bridgeObject = pvStack_ee8;
      local_730.str = local_ef0;
      uStack_718 = uStack_ed8;
      local_720 = local_ee0;
      local_1008[0x3d] = uStack_e48;
      local_1008[0x3c] = local_e50;
      local_1008[0x3f] = uStack_e38;
      local_1008[0x3e] = local_e40;
      local_1008[0x41] = uStack_e28;
      local_1008[0x40] = local_e30;
      local_1008[0x35] = uStack_e88;
      local_1008[0x34] = local_e90;
      local_1008[0x37] = uStack_e78;
      local_1008[0x36] = local_e80;
      local_1008[0x39] = uStack_e68;
      local_1008[0x38] = local_e70;
      local_1008[0x3b] = uStack_e58;
      local_1008[0x3a] = local_e60;
      local_900 = local_cd0;
      *(undefined1 *)(local_1008 + 0xc) = local_cd0;
      local_820 = local_d40;
      *(undefined1 *)(local_1008 + 0x27) = local_d40;
      local_660 = local_e20;
      *(undefined1 *)(local_1008 + 0x42) = local_e20;
      local_1008[0x2d] = uStack_ec8;
      local_1008[0x2c] = local_ed0;
      local_1008[0x2f] = uStack_eb8;
      local_1008[0x2e] = local_ec0;
      local_1008[0x31] = uStack_ea8;
      local_1008[0x30] = local_eb0;
      local_1008[0x33] = uStack_e98;
      local_1008[0x32] = local_ea0;
      local_1008[0x29] = pvStack_ee8;
      local_1008[0x28] = local_ef0;
      local_1008[0x2b] = uStack_ed8;
      local_1008[0x2a] = local_ee0;
      puVar9 = &DAT_100ff8bf8;
      FUN_1000037f0(&DAT_100ff8bf8,&DAT_100c950b8);
      FUN_100011090(lVar33,(long)puVar30 + (long)*(int *)(puVar9 + 0x50),&DAT_100ff8bb0,
                    &DAT_100c95078);
      FUN_100011090(lVar32,(long)puVar30 + (long)*(int *)(puVar9 + 0x60),&DAT_100ff8ba8,
                    &DAT_100c95070);
      FUN_100011090(&local_960,auStack_fc8,&DAT_100ff8bb8,&DAT_100c95080);
      FUN_100011090(&local_8f0,auStack_fc8,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100011090(&local_730,auStack_fc8,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(local_fd0,&DAT_100ff8ba8,&DAT_100c95070);
      FUN_100005808(local_fd8,&DAT_100ff8bb0,&DAT_100c95078);
      FUN_100005808(lVar32,&DAT_100ff8ba8,&DAT_100c95070);
      FUN_100005808(lVar33,&DAT_100ff8bb0,&DAT_100c95078);
      FUN_100005808(&local_ef0,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_e10,&DAT_100ff8bd8,&DAT_100c95098);
      FUN_100005808(&local_d30,&DAT_100ff8bb8,&DAT_100c95080);
      _swift_release(local_1010);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ae8da8);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100ae8da4);
  (*pcVar5)();
}



/* Address: 0x100ae8da8 | FUN_100ae8da8 */

void FUN_100ae8da8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined *puVar13;
  KeyboardShortcut KVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  KeyboardShortcut KVar16;
  KeyboardShortcut KVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined1 auStack_120 [8];
  KeyboardShortcut local_118;
  undefined8 local_110;
  MainActor *local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  long lStack_78;
  
  puVar6 = &DAT_100ff8c00;
  local_110 = param_2;
  local_e0 = param_1;
  FUN_1000037f0(&DAT_100ff8c00,&DAT_100c950c0);
  lVar20 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  local_d8 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar7 = &DAT_100ff8c08;
  local_f8 = lVar15;
  FUN_1000037f0(&DAT_100ff8c08,&DAT_100c950c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar15 = lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12_00;
  local_98 = lVar15;
  puStack_b8 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_c0 = *(long *)(puStack_b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  KVar16.unknown = (undefined *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100ff8c10;
  FUN_1000037f0(&DAT_100ff8c10,&DAT_100c950d0);
  local_a8 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  KVar17.unknown = KVar16.unknown + -extraout_x8_02;
  puVar8 = &DAT_100ff8c18;
  FUN_1000037f0(&DAT_100ff8c18,&DAT_100c950d8);
  local_d0 = *(long *)(puVar8 + -8);
  local_c8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)KVar17.unknown - extraout_x8_03;
  puVar8 = &DAT_100ff8c20;
  FUN_1000037f0(&DAT_100ff8c20,&DAT_100c950e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar15 = lVar18 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a0 = lVar15 - extraout_x12_01;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  pMVar10 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  pMVar9 = pMVar10;
  FUN_100ae9d00();
  local_108 = pMVar10;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnableAccessibilityAccessView.swift",0x3a,1,0x2d,
               UVar11.unknown,pMVar9);
  }
  bVar5 = *(char *)(param_3 +
                   _TtC22PasteSystemPermissions34EnableAccessibilityAccessViewModel::configuration)
          == '\0';
  lVar15 = local_a0;
  local_b0 = puVar6;
  if (bVar5) {
    _swift_retain(param_3);
    puVar8 = &DAT_100ff8c28;
    FUN_1000037f0(&DAT_100ff8c28,&DAT_100c95130);
    puVar13 = puVar8;
    FUN_100ae9dd8();
    SwiftUI::Button::_init();
    FUN_1001fa7a0(lVar18,2,1,1,puVar7);
    KVar14.unknown = KVar17.unknown;
    (**(code **)(local_a8 + 8))(KVar17.unknown,puVar7);
    SwiftUI::KeyboardShortcut::get_cancelAction(KVar14);
    puVar6 = local_b0;
    local_90 = puVar8;
    puStack_88 = puVar13;
    _swift_getOpaqueTypeConformance2(&local_90,&DAT_100ca7bfc,1);
    lVar15 = local_a0;
    puVar8 = local_c8;
    (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar16);
    (**(code **)(local_c0 + 8))(KVar16.unknown,puStack_b8);
    (**(code **)(local_d0 + 8))(lVar18,puVar8);
  }
  local_118.unknown = KVar16.unknown;
  local_e8 = lVar20;
  (**(code **)(lVar20 + 0x38))(lVar15,!bVar5,1,puVar6);
  puVar6 = &DAT_100c950e8;
  _swift_getKeyPath(&DAT_100c950e8);
  puVar8 = &DAT_100c95110;
  _swift_getKeyPath(&DAT_100c95110);
  Combine::Published::_get_subscript(&local_90,param_3,puVar6,puVar8);
  _swift_release(puVar6);
  _swift_release(puVar8);
  bVar5 = (char)local_90 != '\x01';
  if (!bVar5) {
    _swift_retain(param_3);
    FUN_1000037f0(&DAT_100ff8c28,&DAT_100c95130);
    FUN_100ae9dd8();
    SwiftUI::Button::_init();
    FUN_1001fa7a0(local_98,2,1,1,puVar7);
    (**(code **)(local_a8 + 8))(KVar17.unknown,puVar7);
  }
  lVar1 = local_98;
  puVar8 = local_c8;
  lVar15 = local_d0;
  (**(code **)(local_d0 + 0x38))(local_98,bVar5,1,local_c8);
  local_80 = local_110;
  lStack_78 = param_3;
  _swift_retain(param_3);
  puVar6 = &DAT_100ff8c28;
  FUN_1000037f0(&DAT_100ff8c28,&DAT_100c95130);
  puVar13 = puVar6;
  FUN_100ae9dd8();
  SwiftUI::Button::_init();
  FUN_1001fa7a0(lVar18,0,1,1,puVar7);
  (**(code **)(local_a8 + 8))(KVar17.unknown,puVar7);
  KVar16.unknown = local_118.unknown;
  SwiftUI::KeyboardShortcut::get_defaultAction(KVar17);
  local_90 = puVar6;
  puStack_88 = puVar13;
  _swift_getOpaqueTypeConformance2(&local_90,&DAT_100ca7bfc,1);
  lVar20 = local_f8;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar16);
  (**(code **)(local_c0 + 8))(KVar16.unknown,puStack_b8);
  (**(code **)(lVar15 + 8))(lVar18,puVar8);
  lVar4 = local_a0;
  lVar15 = local_100;
  FUN_100011090(local_a0,local_100,&DAT_100ff8c20,&DAT_100c950e0);
  lVar18 = local_f0;
  FUN_100011090(lVar1,local_f0,&DAT_100ff8c08,&DAT_100c950c8);
  puVar7 = local_b0;
  puVar3 = local_d8;
  lVar1 = local_e8;
  pcVar19 = *(code **)(local_e8 + 0x10);
  (*pcVar19)(local_d8,lVar20,local_b0);
  lVar2 = local_e0;
  FUN_100011090(lVar15,local_e0,&DAT_100ff8c20,&DAT_100c950e0);
  puVar6 = &DAT_100ff8c38;
  FUN_1000037f0(&DAT_100ff8c38,&DAT_100c95138);
  FUN_100011090(lVar18,lVar2 + *(int *)(puVar6 + 0x30),&DAT_100ff8c08,&DAT_100c950c8);
  (*pcVar19)(lVar2 + *(int *)(puVar6 + 0x40),puVar3,puVar7);
  pcVar19 = *(code **)(lVar1 + 8);
  (*pcVar19)(lVar20,puVar7);
  FUN_100005808(local_98,&DAT_100ff8c08,&DAT_100c950c8);
  FUN_100005808(lVar4,&DAT_100ff8c20,&DAT_100c950e0);
  (*pcVar19)(puVar3,puVar7);
  FUN_100005808(lVar18,&DAT_100ff8c08,&DAT_100c950c8);
  FUN_100005808(lVar15,&DAT_100ff8c20,&DAT_100c950e0);
  _swift_release(local_108);
  return;
}



/* Address: 0x100ae94ac | FUN_100ae94ac */

void FUN_100ae94ac(void)

{
  FUN_100ae95ac(0x2f,FUN_1001bb088);
  return;
}



/* Address: 0x100ae94bc | FUN_100ae94bc */

void FUN_100ae94bc(void)

{
  URL UVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(auStack_68);
  FUN_100004640(auStack_68,local_50);
  FUN_1001ab2ec(puVar2,0xd00000000000001f,0x8000000100dbb7a0);
  (**(code **)(lStack_48 + 8))(puVar2,local_50,lStack_48);
  (**(code **)(lVar3 + 8))(puVar2,UVar1.unknown);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100ae959c | FUN_100ae959c */

void FUN_100ae959c(void)

{
  FUN_100ae95ac(0x37,FUN_1001bad88);
  return;
}



/* Address: 0x100ae95ac | FUN_100ae95ac */

void FUN_100ae95ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8,
                  undefined8 param_9)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  Set _all;
  undefined *puVar7;
  undefined1 uVar8;
  long extraout_x8;
  undefined8 uVar9;
  undefined1 auStack_140 [80];
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  String local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100ae9d00();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnableAccessibilityAccessView.swift",0x3a,1,param_6,
               UVar4.unknown,pMVar2);
    param_9 = param_6;
  }
  (*param_7)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  uVar8 = local_a0.str._0_1_;
  FUN_100ae9d44();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _all = SwiftUI::Edge::Set::get_horizontal(TVar6.unknown);
  uVar9 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_d0 = SUB81(_all.unknown,0);
  local_b8 = (undefined1)param_4;
  uStack_b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_b0 = (undefined1)param_5;
  uStack_af = (undefined7)((ulong)param_5 >> 8);
  uStack_a8 = 0;
  local_a0.bridgeObject = puVar7;
  local_a0.str = TVar6.unknown;
  local_58 = 0;
  local_f0 = TVar6.unknown;
  puStack_e8 = puVar7;
  local_e0 = uVar8;
  local_d8 = param_9;
  uStack_c8 = uVar9;
  uStack_c0 = param_3;
  local_90 = uVar8;
  local_88 = param_9;
  local_80 = local_d0;
  local_78 = uVar9;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_100011090(&local_f0,auStack_140,&DAT_100ff8c28,&DAT_100c95130);
  FUN_100005808(&local_a0,&DAT_100ff8c28,&DAT_100c95130);
  _swift_release(pMVar3);
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,local_d0);
  param_1[7] = CONCAT71(uStack_b7,local_b8);
  param_1[6] = uStack_c0;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_b0,uStack_b7);
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = CONCAT71(uStack_df,local_e0);
  return;
}



/* Address: 0x100ae9754 | FUN_100ae9754 */

void FUN_100ae9754(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined *puVar7;
  Text TVar8;
  Set _all;
  undefined1 uVar9;
  long extraout_x8;
  undefined8 uVar10;
  undefined1 auStack_140 [80];
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  String local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100ae9d00();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    param_9 = 0x3d;
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/EnableAccessibilityAccessView.swift",0x3a,1,0x3d,
               UVar4.unknown,pMVar2);
  }
  puVar6 = &DAT_100c95140;
  _swift_getKeyPath(&DAT_100c95140);
  puVar7 = &DAT_100c95168;
  _swift_getKeyPath(&DAT_100c95168);
  Combine::Published::_get_subscript(&local_a0,param_7,puVar6,puVar7);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if ((char)local_a0.str == '\x01') {
    FUN_1001baf08(LVar1.unknown);
  }
  else {
    FUN_1001bac08(LVar1.unknown);
  }
  local_a0 = (extension_Foundation)::Swift::String::init(LVar1);
  uVar9 = local_a0.str._0_1_;
  FUN_100ae9d44();
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init();
  _all = SwiftUI::Edge::Set::get_horizontal(TVar8.unknown);
  uVar10 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_d0 = SUB81(_all.unknown,0);
  local_b8 = (undefined1)param_4;
  uStack_b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_b0 = (undefined1)param_5;
  uStack_af = (undefined7)((ulong)param_5 >> 8);
  uStack_a8 = 0;
  local_a0.bridgeObject = puVar6;
  local_a0.str = TVar8.unknown;
  local_58 = 0;
  local_f0 = TVar8.unknown;
  puStack_e8 = puVar6;
  local_e0 = uVar9;
  local_d8 = param_9;
  uStack_c8 = uVar10;
  uStack_c0 = param_3;
  local_90 = uVar9;
  local_88 = param_9;
  local_80 = local_d0;
  local_78 = uVar10;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_100011090(&local_f0,auStack_140,&DAT_100ff8c28,&DAT_100c95130);
  FUN_100005808(&local_a0,&DAT_100ff8c28,&DAT_100c95130);
  _swift_release(pMVar3);
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,local_d0);
  param_1[7] = CONCAT71(uStack_b7,local_b8);
  param_1[6] = uStack_c0;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_b0,uStack_b7);
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = CONCAT71(uStack_df,local_e0);
  return;
}



/* Address: 0x100ae9954 | FUN_100ae9954 */

void FUN_100ae9954(void)

{
  undefined8 *unaff_x20;
  
  FUN_100ae78d8(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100ae995c | FUN_100ae995c */

void FUN_100ae995c(void)

{
  FUN_1000078b4();
  return;
}


