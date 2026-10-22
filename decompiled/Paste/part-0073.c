/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000dc158 | FUN_1000dc158 */

undefined8 FUN_1000dc158(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad0a0;
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000dc1a0 | thunk_FUN_1000dbc5c */

void thunk_FUN_1000dbc5c(void)

{
  FUN_1000dbc5c();
  return;
}



/* Address: 0x1000dc1a4 | FUN_1000dc1a4 */

undefined1  [16] FUN_1000dc1a4(void)

{
  return ZEXT816(0x1000dc2cc);
}



/* Address: 0x1000dc1b4 | FUN_1000dc1b4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000dc2a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1000dc1b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ObservedObject<undefined> OVar3;
  FocusState<bool> FVar4;
  AnyView AVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined *local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined8 local_58;
  byte local_50;
  
  ppuVar2 = &local_70;
  FUN_100018280(param_1,&local_70);
  uVar6 = 0;
  if (param_2 != 0) {
    uVar6 = param_3;
  }
  uVar1 = 0;
  FUN_1000f08dc();
  _swift_allocObject();
  FUN_100011128(param_2,param_3);
  FUN_1000f137c(&local_70,param_2,uVar6);
  FUN_100004550(param_2,param_3);
  FUN_100003a00(&DAT_100fad0d8,FUN_1000f08dc,&TargetProtocolConformanceDescriptor_100c2d0b8);
  bVar7 = (byte)ppuVar2;
  _swift_retain(ppuVar2);
  OVar3 = SwiftUI::ObservedObject::init();
  uVar6 = uVar1;
  FVar4 = SwiftUI::FocusState::_init();
  local_60 = (byte)FVar4.unknown & 1;
  local_50 = bVar7 & 1;
  local_70 = OVar3.unknown;
  uStack_68 = uVar1;
  local_58 = uVar6;
  FUN_1000dca40();
  AVar5 = SwiftUI::AnyView::_init(FVar4.unknown,&DAT_100eb6798,FVar4.unknown);
  _swift_release(ppuVar2);
  return AVar5.unknown;
}



/* Address: 0x1000dc2cc | FUN_1000dc2cc */

void FUN_1000dc2cc(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  lVar1 = *(long *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  if (lVar1 == 0) {
    pcVar4 = (code *)0x0;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_100eb5eb0;
    _swift_allocObject(&DAT_100eb5eb0,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar2;
    pcVar4 = FUN_1000386a0;
  }
  FUN_100011128(lVar1,uVar2);
  FUN_1000dc1b4(param_2,pcVar4,puVar3);
  FUN_100004550(pcVar4,puVar3);
  *param_1 = param_2;
  return;
}



/* Address: 0x1000dc364 | FUN_1000dc364 */

undefined1  [16] FUN_1000dc364(void)

{
  return ZEXT816(0x1000dc374);
}



/* Address: 0x1000dc374 | FUN_1000dc374 */

void FUN_1000dc374(undefined8 *param_1,undefined8 param_2)

{
  URL UVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_2,UVar1.unknown);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar6 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100eb5e88;
  _swift_allocObject(&DAT_100eb5e88,uVar6 + lVar4,uVar3 | 7);
  (**(code **)(lVar5 + 0x20))
            (puVar2 + uVar6,&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),
             UVar1.unknown);
  *param_1 = FUN_1000dc9f0;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1000dc440 | FUN_1000dc440 */

void FUN_1000dc440(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000e5ce0();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100eb6418;
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x1b,0x13,FUN_1000dc49c,0);
  return;
}



/* Address: 0x1000dc49c | FUN_1000dc49c */

void FUN_1000dc49c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  FUN_1000e5ce0();
  _swift_allocObject();
  puVar2 = &DAT_100c2be78;
  _swift_getKeyPath();
  puVar3 = &DAT_100facfd0;
  FUN_1000037f0(&DAT_100facfd0,&DAT_100c2d310);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1000dc520 | FUN_1000dc520 */

void FUN_1000dc520(void)

{
  FUN_1000dc5d4(&DAT_100fad0b8,&DAT_100c2c610,0x23,FUN_1000dc540);
  return;
}



/* Address: 0x1000dc540 | FUN_1000dc540 */

void FUN_1000dc540(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000037f0(&DAT_100fad0b8,&DAT_100c2c610);
  _swift_allocObject();
  uVar1 = 0xd000000000000010;
  FUN_1001a8524(0x4132750000000000,0xd000000000000010,0x8000000100d8fc20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000dc5b4 | FUN_1000dc5b4 */

void FUN_1000dc5b4(void)

{
  FUN_1000dc5d4(&DAT_100fad098,&DAT_100c2be48,0x29,FUN_1000dc630);
  return;
}



/* Address: 0x1000dc5d4 | FUN_1000dc5d4 */

undefined8
FUN_1000dc5d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  
  FUN_1000037f0();
  FUN_1000d80e0(&local_28,"PasteLicensingDirect/DI+Direct.swift",0x24,2,param_3,0x13,param_4,0,
                param_1);
  return local_28;
}



/* Address: 0x1000dc630 | FUN_1000dc630 */

void FUN_1000dc630(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1000037f0(&DAT_100fad098,&DAT_100c2be48);
  _swift_allocObject();
  uVar1 = 0xd000000000000013;
  FUN_1001a8524(0x41e77f03c0000000,0xd000000000000013,0x8000000100d8fc00);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000dc6a8 | FUN_1000dc6a8 */

void FUN_1000dc6a8(void)

{
  FUN_1000dc8a4(FUN_1000e799c,0x31,FUN_1000dc6c0);
  return;
}



/* Address: 0x1000dc6c0 | FUN_1000dc6c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000dc790 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000dc6c0(undefined8 *param_1)

{
  undefined *puVar1;
  Publisher PVar2;
  undefined *puVar3;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar4;
  code *pcVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  PVar2 = Publisher::_typeMetadataAccessor();
  puVar1 = PTR__typeMetadataAccessor_100ea79b0;
  lVar7 = *(long *)(PVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fad0c0;
  FUN_1000037f0(&DAT_100fad0c0,&DAT_100c2be70);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar6,puVar3,0);
  FUN_100003a00(&DAT_100fad0c8,puVar1,PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  (extension_Combine)::Combine::Publisher::_map();
  (**(code **)(lVar7 + 8))(puVar6,PVar2.unknown);
  FUN_1000dc944();
  AVar4 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(lVar8 + 8))((long)puVar6 - extraout_x8_00,puVar3);
  FUN_1000e799c(0);
  _swift_allocObject();
  pcVar5 = Foundation::Date::init;
  FUN_1000e7654(Foundation::Date::init,0,AVar4.unknown);
  _swift_release(AVar4.unknown);
  *param_1 = pcVar5;
  return;
}



/* Address: 0x1000dc874 | FUN_1000dc874 */

void FUN_1000dc874(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &DAT_100eb5ef0;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100eb5ec8;
  return;
}



/* Address: 0x1000dc88c | FUN_1000dc88c */

void FUN_1000dc88c(void)

{
  FUN_1000dc8a4(FUN_1000e2854,0x3b,FUN_1000dc908);
  return;
}



/* Address: 0x1000dc8a4 | FUN_1000dc8a4 */

undefined8 FUN_1000dc8a4(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  (*param_1)(0);
  FUN_1000d80e0(&local_28,"PasteLicensingDirect/DI+Direct.swift",0x24,2,param_2,0x13,param_3,0,uVar1
               );
  return local_28;
}



/* Address: 0x1000dc908 | FUN_1000dc908 */

void FUN_1000dc908(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000e2854();
  _swift_allocObject();
  FUN_1000e3518();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000dc944 | FUN_1000dc944 */

void FUN_1000dc944(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fad0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad0c0;
  FUN_100005c24(&DAT_100fad0c0,&DAT_100c2be70);
  puVar2 = PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698;
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
             ,puVar1);
  DAT_100fad0d0 = puVar2;
  return;
}



/* Address: 0x1000dc994 | thunk_FUN_1000e5814 */

void thunk_FUN_1000e5814(void)

{
  FUN_1000e5814();
  return;
}



/* Address: 0x1000dc998 | FUN_1000dc998 */

void FUN_1000dc998(void)

{
  URL UVar1;
  ulong uVar2;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000dc9f0 | FUN_1000dc9f0 */

void FUN_1000dc9f0(void)

{
  URL UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000f189c(unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x10 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000dca1c | FUN_1000dca1c */

void FUN_1000dca1c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000dca40 | FUN_1000dca40 */

void FUN_1000dca40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad0e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2cb84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2cb84,&DAT_100eb6798);
  DAT_100fad0e0 = pTVar1;
  return;
}



/* Address: 0x1000dca80 | FUN_1000dca80 */

void FUN_1000dca80(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000dcac4();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x1c),param_1,&DAT_100fad0e8,&DAT_100c2bea0);
  return;
}



/* Address: 0x1000dcac4 | FUN_1000dcac4 */

void FUN_1000dcac4(undefined8 param_1)

{
  if (DAT_100fad180 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca2b38);
  return;
}



/* Address: 0x1000dcafc | FUN_1000dcafc */

undefined1  [16] FUN_1000dcafc(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar2 = *unaff_x20;
  uVar5 = 0xea00000000006449;
  uVar3 = 0x65636e6174736e69;
  if (bVar2 != 2) {
    uVar5 = 0xe900000000000074;
    uVar3 = 0x4173657269707865;
  }
  uVar1 = 0xea00000000007965;
  uVar4 = 0x4b65736e6563696c;
  if (bVar2 != 0) {
    uVar1 = 0xeb00000000656d61;
    uVar4 = 0x4e65736e6563696c;
  }
  if (bVar2 < 2) {
    uVar5 = uVar1;
    uVar3 = uVar4;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1000dcb8c | FUN_1000dcb8c */

void FUN_1000dcb8c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1000de704();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000dcbb0 | FUN_1000dcbb0 */

undefined1  [16] FUN_1000dcbb0(void)

{
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1000dcbbc | FUN_1000dcbbc */

void FUN_1000dcbbc(undefined1 *param_1)

{
  *param_1 = 4;
  return;
}



/* Address: 0x1000dcbc8 | FUN_1000dcbc8 */

String FUN_1000dcbc8(void)

{
  String SVar1;
  
  FUN_1000de5f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1000dcbf0 | FUN_1000dcbf0 */

String FUN_1000dcbf0(void)

{
  String SVar1;
  
  FUN_1000de5f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1000dcc18 | thunk_FUN_1000de2ec */

void thunk_FUN_1000de2ec(void)

{
  FUN_1000de2ec();
  return;
}



/* Address: 0x1000dcc1c | FUN_1000dcc1c */

/* WARNING: Removing unreachable block (ram,0x0001000dcd54) */

void FUN_1000dcc1c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fad0f0;
  FUN_1000037f0(&DAT_100fad0f0,&DAT_100c2bea8);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1000de5f4();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar2);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_53,puVar2);
    lVar3 = 0;
    FUN_1000dcac4();
    iVar1 = *(int *)(lVar3 + 0x1c);
    local_54 = 3;
    DVar4 = Foundation::Date::typeMetadataAccessor();
    puVar5 = &DAT_100fad100;
    FUN_100003a00(&DAT_100fad100,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_54,puVar2,DVar4.unknown,puVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x1000dcde4 | FUN_1000dcde4 */

/* WARNING: Removing unreachable block (ram,0x0001000dcfe8) */
/* WARNING: Removing unreachable block (ram,0x0001000dcfa4) */
/* WARNING: Removing unreachable block (ram,0x0001000dd064) */
/* WARNING: Removing unreachable block (ram,0x0001000dd074) */
/* WARNING: Removing unreachable block (ram,0x0001000dd078) */
/* WARNING: Removing unreachable block (ram,0x0001000dd08c) */
/* WARNING: Removing unreachable block (ram,0x0001000dd094) */
/* WARNING: Removing unreachable block (ram,0x0001000dd098) */
/* WARNING: Removing unreachable block (ram,0x0001000dcf30) */

void FUN_1000dcde4(undefined8 param_1,long param_2)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  Date DVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  String *pSVar6;
  long lVar7;
  long lVar8;
  String SVar9;
  String SStack_90;
  String local_80;
  char *local_70;
  undefined1 local_54;
  char local_53 [3];
  
  puVar2 = &DAT_100fad0e8;
  local_80.str = (char *)param_1;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&SStack_90 - extraout_x8;
  puVar2 = &DAT_100fad108;
  FUN_1000037f0(&DAT_100fad108,&DAT_100c2beb0);
  lVar7 = *(long *)(puVar2 + -8);
  local_80.bridgeObject = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  FUN_1000dcac4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pSVar6 = (String *)((lVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1000de5f4();
  local_70 = (char *)(lVar8 - extraout_x8_00);
  Swift::Decoder::_container();
  pvVar1 = local_80.bridgeObject;
  if (unaff_x21 == 0) {
    local_53[2] = 0;
    SVar9 = Swift::KeyedDecodingContainer::_decode(local_53 + 2,local_80.bridgeObject);
    *pSVar6 = SVar9;
    local_53[1] = 1;
    SVar9 = Swift::KeyedDecodingContainer::_decode(local_53 + 1,pvVar1);
    pSVar6[1] = SVar9;
    local_53[0] = '\x02';
    pcVar4 = local_53;
    puVar2 = local_80.bridgeObject;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar6[2].str = pcVar4;
    pSVar6[2].bridgeObject = puVar2;
    DVar5 = Foundation::Date::typeMetadataAccessor();
    local_54 = 3;
    puVar2 = &DAT_100fad110;
    FUN_100003a00(&DAT_100fad110,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar8,DVar5.unknown,&local_54,local_80.bridgeObject,DVar5.unknown,puVar2);
    (**(code **)(lVar7 + 8))(local_70,local_80.bridgeObject);
    FUN_1000de634(lVar8,(long)&pSVar6->str + (long)*(int *)(lVar3 + 0x1c));
    FUN_1000de684(pSVar6,local_80.str);
    FUN_100004594(param_2);
    FUN_1000de6c8(pSVar6);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1000dd0e0 | FUN_1000dd0e0 */

void FUN_1000dd0e0(void)

{
  FUN_1000dcde4();
  return;
}



/* Address: 0x1000dd0f4 | FUN_1000dd0f4 */

void FUN_1000dd0f4(void)

{
  FUN_1000dcc1c();
  return;
}



/* Address: 0x1000dd108 | FUN_1000dd108 */

void FUN_1000dd108(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
                    /* WARNING: Load size is inaccurate */
  HVar2.unknown = (&DAT_100c2c3e0)[(ulong)bVar1 * 8];
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1000dd154 | FUN_1000dd154 */

void FUN_1000dd154(undefined8 param_1,Hasher param_2)

{
  byte *unaff_x20;
  
  Swift::Hasher::_combine(*(__uint64 *)(&DAT_100c2c3e0 + (ulong)*unaff_x20 * 8),param_2);
  return;
}



/* Address: 0x1000dd188 | FUN_1000dd188 */

void FUN_1000dd188(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
                    /* WARNING: Load size is inaccurate */
  HVar2.unknown = (&DAT_100c2c3e0)[(ulong)bVar1 * 8];
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1000dd1d0 | FUN_1000dd1d0 */

void FUN_1000dd1d0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1000de880();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000dd1f8 | FUN_1000dd1f8 */

void FUN_1000dd1f8(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&DAT_100c2c3e0 + (ulong)*unaff_x20 * 8);
  return;
}



/* Address: 0x1000dd210 | FUN_1000dd210 */

void FUN_1000dd210(void)

{
  FUN_1000dfa5c();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1000dd26c | thunk_FUN_10002b7f8 */

void thunk_FUN_10002b7f8(void)

{
  FUN_10002b7f8();
  return;
}



/* Address: 0x1000dd270 | thunk_FUN_10002ba14 */

void thunk_FUN_10002ba14(void)

{
  FUN_10002ba14();
  return;
}



/* Address: 0x1000dd274 | FUN_1000dd274 */

undefined1  [16] FUN_1000dd274(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6567617373656d;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x65646f63;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1000dd2a8 | FUN_1000dd2a8 */

void FUN_1000dd2a8(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x65646f63 || param_3 != &DAT_e400000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65646f63,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6567617373656d) && (param_3 == &DAT_e700000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e700000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_1000dd308;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1000dd308:
  *param_1 = uVar2;
  return;
}



/* Address: 0x1000dd380 | FUN_1000dd380 */

void FUN_1000dd380(undefined1 *param_1)

{
  *param_1 = 2;
  return;
}



/* Address: 0x1000dd38c | FUN_1000dd38c */

String FUN_1000dd38c(void)

{
  String SVar1;
  
  FUN_1000df76c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1000dd3b4 | FUN_1000dd3b4 */

String FUN_1000dd3b4(void)

{
  String SVar1;
  
  FUN_1000df76c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1000dd3dc | FUN_1000dd3dc */

undefined1  [16] FUN_1000dd3dc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Address: 0x1000dd408 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::LocalizedError::$get_failureReason */

void (extension_Foundation)::Foundation::LocalizedError::_get_failureReason(void)

{
  _get_failureReason();
  return;
}



/* Address: 0x1000dd40c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::LocalizedError::$get_recoverySuggestion */

void (extension_Foundation)::Foundation::LocalizedError::_get_recoverySuggestion(void)

{
  _get_recoverySuggestion();
  return;
}



/* Address: 0x1000dd410 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::LocalizedError::$get_helpAnchor */

void (extension_Foundation)::Foundation::LocalizedError::_get_helpAnchor(void)

{
  _get_helpAnchor();
  return;
}



/* Address: 0x1000dd414 | FUN_1000dd414 */

void FUN_1000dd414(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1000de8d0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  return;
}



/* Address: 0x1000dd440 | FUN_1000dd440 */

void FUN_1000dd440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  URLRequest_conflict UVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = UVar1.unknown;
  lVar7 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  puVar3 = &DAT_100fad118;
  FUN_1000037f0(&DAT_100fad118,&DAT_100c2bec0);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined8 *)(puVar3 + 0x20) = 0x5f65736e6563696c;
  *(undefined8 *)(puVar3 + 0x28) = 0xeb0000000079656b;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  *(undefined8 *)(puVar3 + 0x40) = 0x65636e6174736e69;
  *(undefined8 *)(puVar3 + 0x48) = 0xed0000656d616e5f;
  *(undefined8 *)(puVar3 + 0x50) = param_6;
  *(undefined8 *)(puVar3 + 0x58) = param_7;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  puVar4 = puVar3;
  FUN_1000dea40(puVar3);
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100fad120;
  FUN_1000037f0(&DAT_100fad120,&DAT_100c2bec8);
  _swift_arrayDestroy(puVar3 + 0x20,2,puVar5);
  FUN_1000dd650(uVar2,0x6574617669746361,&DAT_e800000000000000,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  plVar6 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1000dd5f0;
  FUN_1000dd8b8(plVar6,param_1,param_2,param_3,uVar2);
  return;
}



/* Address: 0x1000dd5f0 | FUN_1000dd5f0 */

void FUN_1000dd5f0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x80);
  uVar2 = *(undefined8 *)(lVar4 + 0x70);
  lVar3 = *(long *)(lVar4 + 0x78);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x88));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000dd64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x1000dd650 | FUN_1000dd650 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000dd650(URLRequest *param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  NSDictionary *pNVar5;
  Data DVar6;
  undefined8 uVar7;
  _StringGuts _Var8;
  long extraout_x8;
  URL url;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fad0a0;
  _Var8.unknown = &DAT_100c2be50;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  url.unknown = auStack_70 + -extraout_x8;
  local_68 = 0;
  local_60 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x27,_Var8);
  _swift_bridgeObjectRelease(local_60);
  local_68 = 0xd000000000000025;
  local_60 = 0x8000000100d8fc60;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar9,SVar11);
  uVar7 = local_60;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(uVar7);
  UVar3 = Foundation::URL::typeMetadataAccessor();
  UVar4.unknown = url.unknown;
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x30))(url.unknown,1,UVar3.unknown);
  if ((int)UVar4.unknown == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dd8b4);
    (*pcVar1)();
  }
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  SVar10.bridgeObject = (void *)0x8000000100d8fc90;
  SVar10.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar10,(URLRequest_conflict)0x747065636341);
  Foundation::URLRequest::_set_httpMethod(param_1);
  FUN_1000037f0(&DAT_100fad210,&DAT_100c2c100);
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  local_68 = 0;
  DVar6.unknown =
       (undefined *)
       NSJSONSerialization::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,&local_68);
  if (DVar6.unknown == (undefined *)0x0) {
    uVar7 = local_68;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar7);
  }
  else {
    Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
  }
  Foundation::URLRequest::_set_httpBody(param_1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1000dd8b8 | FUN_1000dd8b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

tuple2_conflict7
FUN_1000dd8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,URLRequest_conflict param_4)

{
  DateDecodingStrategy DVar1;
  KeyDecodingStrategy KVar2;
  Code CVar3;
  ulong uVar4;
  URLError UVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ID IVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  tuple2_conflict7 tVar9;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  CVar3 = Foundation::URLError::Code::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CVar3.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar4;
  UVar5 = Foundation::URLError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = UVar5.unknown;
  lVar8 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  DVar1 = Foundation::JSONDecoder::DateDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x60) = CONCAT71(extraout_var,DVar1.value);
  lVar8 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  *(long *)(unaff_x22 + 0x68) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar4;
  KVar2 = Foundation::JSONDecoder::KeyDecodingStrategy::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x78) = CONCAT71(extraout_var_00,KVar2.value);
  lVar8 = *(long *)(CONCAT71(extraout_var_00,KVar2.value) + -8);
  *(long *)(unaff_x22 + 0x80) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  IVar6 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  *(ID *)(unaff_x22 + 0x90) = IVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1000dd9d0;
  tVar9 = (extension_Foundation)::__C::NSURLSession::_data(param_4);
  return tVar9;
}



/* Address: 0x1000dd9d0 | FUN_1000dd9d0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000dd9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0xa0) = param_1;
  *(undefined8 *)(lVar4 + 0xa8) = param_2;
  *(undefined8 *)(lVar4 + 0xb0) = param_3;
  *(long *)(lVar4 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x98));
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x70);
    uVar2 = *(undefined8 *)(lVar4 + 0x58);
    uVar5 = *(undefined8 *)(lVar4 + 0x40);
    _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x88));
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001000dda54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(lVar4 + 0x30);
  uVar2 = *(undefined8 *)(lVar4 + 0x38);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1000dda8c,uVar1,uVar2);
  return;
}



/* Address: 0x1000dda8c | FUN_1000dda8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000dda8c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  JSONDecoder *pJVar5;
  ID IVar6;
  Data DVar7;
  code *UNRECOVERED_JUMPTABLE;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  DVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ID IVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  String SVar15;
  
  IVar11 = *(ID *)(unaff_x22 + 0xb0);
  _swift_dynamicCastObjCClass(IVar11,&_OBJC_CLASS___NSHTTPURLResponse);
  if (IVar11 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar12 = *(long *)(unaff_x22 + 0x50);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
    DVar8.unknown = *(undefined **)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    Foundation::URLError::Code::get_badServerResponse((Code)0x0);
    FUN_1000df450(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_100003a00(&DAT_100fad1e0,PTR_typeMetadataAccessor_100ea7740,
                  PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100ea7738)
    ;
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar8);
    Foundation::URLError::get__nsError((URLError)DVar8.unknown);
    _swift_willThrow();
    FUN_10003bf2c(uVar10,uVar14);
    (**(code **)(lVar12 + 8))(uVar13,uVar3);
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x80);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
    puVar1 = *(undefined8 **)(unaff_x22 + 0x70);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar2 = *(long *)(unaff_x22 + 0x68);
    pJVar5 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
    pJVar5 = Foundation::JSONDecoder::init(pJVar5);
    (**(code **)(lVar12 + 0x68))
              (uVar14,*(undefined4 *)
                       PTR___enum_case_for_Foundation_JSONDecoder_KeyDecodingStrategy_convertFromSnakeCase_Foundation_JSONDecoder_KeyDecodingStrategy_Type___>_Foundation_JSONDecoder_KeyDecodingStrategy_100ea6a18
               ,uVar13);
    Foundation::JSONDecoder::set_keyDecodingStrategy(pJVar5,(KeyDecodingStrategy)(__int8)uVar14);
    *puVar1 = FUN_1000ddfac;
    puVar1[1] = 0;
    (**(code **)(lVar2 + 0x68))
              (puVar1,*(undefined4 *)
                       PTR___enum_case_for_Foundation_JSONDecoder_DateDecodingStrategy_custom_Foundation_JSONDecoder_DateDecodingStrategy_Type___>___Swift_Decoder__throws__>_Foundation_Date___>_Foundation_JSONDecoder_DateDecodingStrategy_100ea6a30
               ,uVar10);
    Foundation::JSONDecoder::set_dateDecodingStrategy(pJVar5,(DateDecodingStrategy)(__int8)puVar1);
    IVar6 = objc_stub::statusCode(IVar11);
    lVar12 = *(long *)(unaff_x22 + 0xb8);
    if (IVar6 - 200 < 100) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      DVar7.unknown = (undefined *)0x0;
      FUN_1000dcac4();
      FUN_100003a00(&DAT_100fad1f8,FUN_1000dcac4,&TargetProtocolConformanceDescriptor_100c2bee0);
      Foundation::JSONDecoder::_decode(pJVar5,DVar7);
      _swift_release(pJVar5);
      FUN_10003bf2c(uVar14,uVar10);
      if (lVar12 == 0) {
        uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
        _swift_task_dealloc(uVar14);
        _swift_task_dealloc(uVar10);
        _swift_task_dealloc(uVar13);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_1000ddde0;
      }
    }
    else {
      FUN_1000df57c();
      puVar9 = &DAT_100eb5ff8;
      Foundation::JSONDecoder::_decode(pJVar5,(Data)0x100eb5ff8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      if (lVar12 == 0) {
        uVar4 = *(undefined1 *)(unaff_x22 + 0x10);
        SVar15 = *(String *)(unaff_x22 + 0x18);
      }
      else {
        _swift_errorRelease(lVar12);
        IVar11 = objc_stub::statusCode(IVar11);
        NSHTTPURLResponse::localizedStringForStatusCode_
                  ((ID)&_OBJC_CLASS___NSHTTPURLResponse,IVar11);
        SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar9 = (undefined *)0x0;
        uVar4 = IVar11 - 500 < 100;
      }
      FUN_1000df5bc();
      _swift_allocError(&DAT_100eb5ff8,puVar9,0,0);
      *puVar9 = uVar4;
      *(String *)(puVar9 + 8) = SVar15;
      _swift_willThrow();
      _swift_release(pJVar5);
      FUN_10003bf2c(uVar14,uVar10);
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar13);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1000ddde0:
                    /* WARNING: Could not recover jumptable at 0x0001000dddfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1000dde00 | FUN_1000dde00 */

void FUN_1000dde00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  URLRequest_conflict UVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  
  UVar1 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = UVar1.unknown;
  lVar7 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  puVar3 = &DAT_100fad118;
  FUN_1000037f0(&DAT_100fad118,&DAT_100c2bec0);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined8 *)(puVar3 + 0x20) = 0x5f65736e6563696c;
  *(undefined8 *)(puVar3 + 0x28) = 0xeb0000000079656b;
  *(undefined8 *)(puVar3 + 0x30) = param_4;
  *(undefined8 *)(puVar3 + 0x38) = param_5;
  *(undefined8 *)(puVar3 + 0x40) = 0x65636e6174736e69;
  *(undefined8 *)(puVar3 + 0x48) = 0xeb0000000064695f;
  *(undefined8 *)(puVar3 + 0x50) = param_6;
  *(undefined8 *)(puVar3 + 0x58) = param_7;
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_5);
  puVar4 = puVar3;
  FUN_1000dea40(puVar3);
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100fad120;
  FUN_1000037f0(&DAT_100fad120,&DAT_100c2bec8);
  _swift_arrayDestroy(puVar3 + 0x20,2,puVar5);
  FUN_1000dd650(uVar2,0x65746164696c6176,&DAT_e800000000000000,puVar4);
  _swift_bridgeObjectRelease(puVar4);
  plVar6 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1000dd5f0;
  FUN_1000dd8b8(plVar6,param_1,param_2,param_3,uVar2);
  return;
}


