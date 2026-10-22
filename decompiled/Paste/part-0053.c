/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10009fce0 | _TtC5Paste16NotificationItem::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste16NotificationItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  ID IVar5;
  objc_super local_50;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/NotificationItem.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/NotificationItem.swift",0x1c,1,4,UVar3.unknown,pMVar1);
  }
  FUN_10009fdf4();
  local_50.receiver = param_1;
  local_50.super_class = (class_t *)pcVar4;
  IVar5 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x10009fdc4 | FUN_10009fdc4 */

void FUN_10009fdc4(void)

{
  FUN_10009fdf4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10009fdf4 | FUN_10009fdf4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10009fdf4(void)

{
  return ZEXT816(0x100f929c8);
}



/* Address: 0x10009fe14 | FUN_10009fe14 */

undefined1 * FUN_10009fe14(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  return param_1;
}



/* Address: 0x10009fe48 | FUN_10009fe48 */

undefined1 * FUN_10009fe48(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10009fe88 | FUN_10009fe88 */

undefined1 * FUN_10009fe88(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10009fec0 | FUN_10009fec0 */

undefined1  [16] FUN_10009fec0(void)

{
  return ZEXT816(0x100eb3c30);
}



/* Address: 0x10009fed0 | FUN_10009fed0 */

void FUN_10009fed0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  LocalizedStringResource localized;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  String SVar11;
  char *local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [31];
  byte local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020d0a8();
  local_c8 = *(undefined8 *)LVar3.unknown;
  uVar2 = *(undefined8 *)((long)LVar3.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001dbfd4(localized.unknown);
  SVar11 = (extension_Foundation)::Swift::String::init(localized);
  local_d0 = SVar11.str;
  puVar1 = (undefined8 *)(param_3 + _TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  _swift_beginAccess(puVar1,auStack_c0,0,0);
  uVar9 = puVar1[1];
  uVar7 = *puVar1;
  uStack_88 = puVar1[3];
  uVar10 = puVar1[2];
  uStack_78 = puVar1[5];
  uVar8 = puVar1[4];
  uVar6 = puVar1[6];
  local_a0 = uVar7;
  uStack_98 = uVar9;
  local_90 = uVar10;
  local_80 = uVar8;
  local_70 = uVar6;
  _swift_retain(uVar7);
  _swift_retain(uVar9);
  _swift_retain(uVar10);
  _swift_retain(uVar8);
  _swift_retain(uVar6);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_a1);
  _swift_release(uVar6);
  _swift_release(uVar8);
  _swift_release(uVar10);
  _swift_release(uVar9);
  _swift_release(uVar7);
  if (local_a1 == 1) {
    puVar4 = &DAT_100c28bb0;
    _swift_getKeyPath(&DAT_100c28bb0);
    puVar5 = &DAT_100c28bd8;
    _swift_getKeyPath(&DAT_100c28bd8);
    Combine::Published::_get_subscript(&local_a1,param_3,puVar4,puVar5);
    _swift_release(puVar4);
    _swift_release(puVar5);
    local_a1 = local_a1 ^ 1;
  }
  else {
    local_a1 = 0;
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = local_c8;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(char **)(param_1 + 0x18) = local_d0;
  *(void **)(param_1 + 0x20) = SVar11.bridgeObject;
  param_1[0x28] = local_a1 & 1;
  return;
}



/* Address: 0x1000a00a4 | FUN_1000a00a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a04f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1000a00a4(undefined4 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  Published PVar3;
  undefined *puVar4;
  OS_dispatch_queue *pOVar5;
  SchedulerOptions SVar6;
  undefined8 *puVar7;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_160 [8];
  long local_158;
  undefined *local_150;
  long local_148;
  undefined *local_140;
  undefined *local_138;
  long local_130;
  long local_128;
  undefined1 *local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  undefined *local_f8;
  long local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long local_d8;
  long local_d0;
  undefined4 local_c4;
  OS_dispatch_queue *local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100fa7510;
  local_c4 = param_1;
  FUN_1000037f0(&DAT_100fa7510,&DAT_100c24330);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa7aa0;
  local_120 = auStack_160 + -extraout_x8;
  FUN_1000037f0(&DAT_100fa7aa0,&DAT_100c28b50);
  local_140 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)(auStack_160 + -extraout_x8) - extraout_x8_00;
  puVar2 = &DAT_100fa6670;
  local_158 = lVar9;
  FUN_1000037f0(&DAT_100fa6670,&DAT_100c28380);
  local_150 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fab0e0;
  FUN_1000037f0(&DAT_100fab0e0,&DAT_100c28b60);
  local_128 = *(long *)(puVar2 + -8);
  local_138 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = (lVar9 - extraout_x8_01) - extraout_x8_02;
  puVar2 = &DAT_100fab0e8;
  FUN_1000037f0(&DAT_100fab0e8,&DAT_100c28b68);
  local_100 = *(long *)(puVar2 + -8);
  local_108 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar2 = &DAT_100fab0f0;
  local_148 = lVar10 - extraout_x8_03;
  FUN_1000037f0(&DAT_100fab0f0,&DAT_100c28b70);
  local_f0 = *(long *)(puVar2 + -8);
  local_f8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (lVar10 - extraout_x8_03) - extraout_x8_04;
  puVar2 = &DAT_100fab0f8;
  local_130 = lVar9;
  FUN_1000037f0(&DAT_100fab0f8,&DAT_100c28b78);
  local_d8 = *(long *)(puVar2 + -8);
  local_e8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_05;
  puVar2 = &DAT_100fab100;
  local_118 = lVar9;
  FUN_1000037f0(&DAT_100fab100,&DAT_100c28b80);
  local_d0 = *(long *)(puVar2 + -8);
  local_e0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar9 - extraout_x8_06;
  _swift_beginAccess(param_2 + _TtC5Paste24GeneralSettingsViewModel::_isAccessibilityAccessEnabled,
                     &local_a0,0x21,0);
  PVar3.unknown = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  Combine::Published::_get_projectedValue(PVar3);
  _swift_endAccess(&local_a0);
  puVar7 = (undefined8 *)(param_2 + _TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  _swift_beginAccess(puVar7,auStack_b8,0,0);
  uVar14 = puVar7[1];
  uVar12 = *puVar7;
  uStack_88 = puVar7[3];
  uVar15 = puVar7[2];
  uStack_78 = puVar7[5];
  uVar13 = puVar7[4];
  uVar11 = puVar7[6];
  local_a0 = uVar12;
  uStack_98 = uVar14;
  local_90 = uVar15;
  local_80 = uVar13;
  local_70 = uVar11;
  _swift_retain(uVar12);
  _swift_retain(uVar14);
  _swift_retain(uVar15);
  _swift_retain(uVar13);
  _swift_retain(uVar11);
  puVar2 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar15);
  _swift_release(uVar14);
  _swift_release(uVar12);
  puVar4 = &DAT_100c28b88;
  local_c0 = (OS_dispatch_queue *)puVar2;
  _swift_getKeyPath(&DAT_100c28b88);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_100016eac(&DAT_100faa8e0,&DAT_100fa7ab0,&DAT_100c26e30,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  lVar9 = local_158;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar2);
  _swift_release(puVar4);
  puVar2 = &DAT_100fa7848;
  FUN_100016eac(&DAT_100fa7848,&DAT_100fa6670,&DAT_100c28380,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar4 = &DAT_100fa7ac0;
  FUN_100016eac(&DAT_100fa7ac0,&DAT_100fa7aa0,&DAT_100c28b50,
                PTR_Combine__Combine__Publishers__MapKeyPath<undefined,undefined>_>Combine__Publisher_100ea9638
               );
  Combine::Publishers::Merge::init(lVar10,puVar4,lVar9,local_150,local_140,puVar2,puVar4);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10002137c();
  local_c0 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  SVar6 = SchedulerOptions::_typeMetadataAccessor();
  puVar1 = local_120;
  (**(code **)(*(long *)(SVar6.unknown + -8) + 0x38))(local_120,1,1,SVar6.unknown);
  puVar2 = &DAT_100fab108;
  FUN_100016eac(&DAT_100fab108,&DAT_100fab0e0,&DAT_100c28b60,
                PTR_Combine__Combine__Publishers__Merge<undefined,undefined>_>Combine__Publisher_100ea96e0
               );
  puVar7 = &DAT_100fa7538;
  FUN_100003a00(&DAT_100fa7538,FUN_10002137c,
                PTR_Dispatch____C__OS_dispatch_queue_>Combine__Scheduler_100eae780);
  puVar4 = local_138;
  lVar9 = local_148;
  (extension_Combine)::Combine::Publisher::_receive
            (local_148,puVar7,puVar1,local_138,pOVar5,puVar2,puVar7);
  FUN_1000a0aa8(puVar1);
  (**(code **)(local_128 + 8))(lVar10,puVar4);
  puVar2 = &DAT_100eb3ca8;
  _swift_allocObject(&DAT_100eb3ca8,0x20,7);
  puVar2[0x10] = (char)local_c4;
  *(long *)(puVar2 + 0x18) = param_2;
  FUN_100016eac(&DAT_100fab110,&DAT_100fab0e8,&DAT_100c28b68,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
               );
  _swift_retain(param_2);
  puVar4 = local_108;
  lVar10 = local_130;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar2);
  (**(code **)(local_100 + 8))(lVar9,puVar4);
  FUN_100016eac(&DAT_100fab118,&DAT_100fab0f0,&DAT_100c28b70,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  FUN_1000774d4();
  puVar2 = local_f8;
  lVar9 = local_118;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_f0 + 8))(lVar10,puVar2);
  FUN_100016eac(&DAT_100fab120,&DAT_100fab0f8,&DAT_100c28b78,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  puVar2 = local_e8;
  lVar10 = local_110;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  (**(code **)(local_d8 + 8))(lVar9,puVar2);
  FUN_100016eac(&DAT_100fab128,&DAT_100fab100,&DAT_100c28b80,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  puVar2 = local_e0;
  AVar8 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_d0 + 8))(lVar10,puVar2);
  return AVar8.unknown;
}



/* Address: 0x1000a07b8 | FUN_1000a07b8 */

void FUN_1000a07b8(undefined8 *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GeneralSettingsPane.swift",0x1f,1,0x14,UVar4.unknown,puVar3);
  }
  FUN_10009fed0(&local_70);
  _swift_release(pMVar2);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = CONCAT71(local_57,uStack_58);
  param_1[2] = uStack_60;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_4f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_50,local_57);
  return;
}



/* Address: 0x1000a0888 | FUN_1000a0888 */

void FUN_1000a0888(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_10009fed0(&local_50,param_2,*(undefined8 *)(unaff_x20 + 8));
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = CONCAT71(local_37,uStack_38);
  param_1[2] = uStack_40;
  *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
  *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  return;
}



/* Address: 0x1000a08c8 | FUN_1000a08c8 */

void FUN_1000a08c8(void)

{
  undefined1 *unaff_x20;
  
  FUN_1000a00a4(*unaff_x20,*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Address: 0x1000a08d4 | FUN_1000a08d4 */

void FUN_1000a08d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  _swift_retain();
  FUN_100062088(&local_70);
  param_1[3] = &DAT_100eb22e8;
  FUN_1000a0a24();
  param_1[4] = uVar1;
  puVar2 = &DAT_100eb3c80;
  _swift_allocObject(&DAT_100eb3c80,0x60,7);
  *param_1 = puVar2;
  *(undefined8 *)(puVar2 + 0x38) = uStack_48;
  *(undefined8 *)(puVar2 + 0x30) = local_50;
  *(undefined8 *)(puVar2 + 0x48) = uStack_38;
  *(undefined8 *)(puVar2 + 0x40) = uStack_40;
  *(undefined8 *)(puVar2 + 0x58) = uStack_28;
  *(undefined8 *)(puVar2 + 0x50) = local_30;
  *(undefined8 *)(puVar2 + 0x18) = uStack_68;
  *(undefined8 *)(puVar2 + 0x10) = local_70;
  *(undefined8 *)(puVar2 + 0x28) = uStack_58;
  *(undefined8 *)(puVar2 + 0x20) = uStack_60;
  return;
}



/* Address: 0x1000a094c | FUN_1000a094c */

void FUN_1000a094c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c28bb0;
  _swift_getKeyPath(&DAT_100c28bb0);
  puVar2 = &DAT_100c28bd8;
  _swift_getKeyPath(&DAT_100c28bd8);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000a09b4 | FUN_1000a09b4 */

void FUN_1000a09b4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  pPVar2 = (Published *)&DAT_100c28bb0;
  _swift_getKeyPath(&DAT_100c28bb0);
  puVar3 = &DAT_100c28bd8;
  _swift_getKeyPath(&DAT_100c28bd8);
  local_31 = uVar1;
  _swift_retain(uVar4);
  Combine::Published::_set_subscript(pPVar2,&local_31,uVar4,pPVar2,puVar3);
  return;
}



/* Address: 0x1000a0a24 | FUN_1000a0a24 */

void FUN_1000a0a24(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fab0d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c261e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c261e4,&DAT_100eb22e8);
  DAT_100fab0d8 = pTVar1;
  return;
}



/* Address: 0x1000a0a64 | FUN_1000a0a64 */

void FUN_1000a0a64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000a0aa8 | FUN_1000a0aa8 */

undefined8 FUN_1000a0aa8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7510;
  FUN_1000037f0(&DAT_100fa7510,&DAT_100c24330);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000a0af0 | FUN_1000a0af0 */

void FUN_1000a0af0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000a0b14 | FUN_1000a0b14 */

void FUN_1000a0b14(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000a07b8(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000a0b20 | thunk_FUN_1000a094c */

void thunk_FUN_1000a094c(void)

{
  FUN_1000a094c();
  return;
}



/* Address: 0x1000a0b24 | thunk_FUN_1000a09b4 */

void thunk_FUN_1000a09b4(void)

{
  FUN_1000a09b4();
  return;
}



/* Address: 0x1000a0b28 | thunk_FUN_10009fe14 */

void thunk_FUN_10009fe14(void)

{
  FUN_10009fe14();
  return;
}



/* Address: 0x1000a0b2c | _TtC5Paste19PasteStackTableView::mouseDownCanMoveWindow */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste19PasteStackTableView::mouseDownCanMoveWindow(ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackTableView.swift",0x1f,1,7,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x1000a0bb0 | _TtC5Paste19PasteStackTableView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste19PasteStackTableView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_70;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackTableView.swift",0x1f,1,3,UVar4.unknown,pMVar2);
  }
  local_70.receiver = param_1;
  local_70.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1000a0c98 | _TtC5Paste19PasteStackTableView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste19PasteStackTableView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PasteStackTableView.swift",0x1f,1,3,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar3);
  return IVar6;
}



/* Address: 0x1000a0d80 | FUN_1000a0d80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000a0d80(void)

{
  return ZEXT816(0x100f92a78);
}



/* Address: 0x1000a0da0 | FUN_1000a0da0 */

void FUN_1000a0da0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10020b428(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x1e,0x13,FUN_100009078,0,uVar1);
  return;
}



/* Address: 0x1000a0df0 | FUN_1000a0df0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a0fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long **** FUN_1000a0df0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long ***ppplVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long ****pppplVar8;
  long lVar9;
  undefined *puVar10;
  NSHostingController *pNVar11;
  long ****pppplVar12;
  long *unaff_x20;
  long ***local_b8;
  long lStack_b0;
  undefined8 local_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a10c4);
    (*pcVar3)();
  }
  objc_stub::activate(*(ID *)PTR__NSApp_100ea8fa0);
  if (DAT_100fa6fa8 != 0) {
    FUN_1001adce8(DAT_100fa6fa8);
    return (long ****)0x0;
  }
  lVar4 = DAT_100fa6fa8;
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  ppplVar5 = (long ***)0x1;
  FUN_10021d6dc(1,5,lVar4);
  uVar6 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar5 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10001839c;
  puVar1[1] = 0;
  FUN_100004550(uVar7,uVar2);
  puVar1 = (undefined8 *)((long)ppplVar5 + _TtC12PasteRouting16WindowTransition::onDismissed);
  _swift_beginAccess(puVar1,auStack_90,1,0);
  uVar7 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_1000183d0;
  puVar1[1] = 0;
  FUN_100004550(uVar7,uVar2);
  ppuStack_98 = &PTR_PTR_100ebe110;
  uVar7 = 0;
  local_b8 = ppplVar5;
  local_a0 = uVar6;
  FUN_1001adc9c();
  _swift_allocObject();
  pppplVar8 = &local_b8;
  FUN_1001ad514();
  ppuStack_98 = &PTR_PTR_100ec6cd0;
  lVar9 = 0;
  local_b8 = (long ***)pppplVar8;
  local_a0 = uVar7;
  FUN_10005592c();
  lVar4 = lVar9;
  _swift_allocObject();
  FUN_100076508(&local_b8,lVar4 + 0x10);
  puVar10 = &DAT_100fab2f8;
  FUN_100003a00(&DAT_100fab2f8,FUN_10005592c,&TargetProtocolConformanceDescriptor_100c25e08);
  _swift_retain(pppplVar8);
  _swift_retain(lVar4);
  local_b8 = (long ***)SwiftUI::ObservedObject::init(puVar10,lVar9,puVar10);
  pNVar11 = (NSHostingController *)&DAT_100fab300;
  lStack_b0 = lVar9;
  FUN_1000037f0(&DAT_100fab300,&DAT_100c28d98);
  _objc_allocWithZone();
  _swift_retain(lVar9);
  pppplVar12 = &local_b8;
  SwiftUI::NSHostingController::_init(pNVar11,pppplVar12);
  (*(code *)(*pppplVar8)[0xd])(pppplVar12);
  ppuStack_98 = &PTR_PTR_100ebe0e8;
  local_b8 = (long ***)pppplVar8;
  local_a0 = uVar7;
  (**(code **)(*unaff_x20 + 0x88))(&local_b8,0,0);
  _swift_release(lVar9);
  _swift_release(lVar4);
  pppplVar8 = &local_b8;
  FUN_100004594(pppplVar8);
  return pppplVar8;
}



/* Address: 0x1000a10c4 | FUN_1000a10c4 */

void FUN_1000a10c4(undefined8 *param_1,undefined8 param_2)

{
  FUN_100008e84();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000a10e8 | FUN_1000a10e8 */

void FUN_1000a10e8(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x70) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x78) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x80) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x88) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x90) = puVar3;
  _swift_task_switch(FUN_1000a117c,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000a117c | FUN_1000a117c */

void FUN_1000a117c(MainActor *param_1)

{
  byte bVar1;
  MainActor *pMVar2;
  long *plVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  long unaff_x22;
  String isolation;
  
  pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x70),param_1);
  *(MainActor **)(unaff_x22 + 0x98) = pMVar2;
  *(long *)(unaff_x22 + 0x60) = unaff_x22 + 0x68;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1000a128c;
    isolation.bridgeObject = pMVar2;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (pMVar2 == (MainActor *)0x0) {
    UVar4.unknown = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_getObjectType(pMVar2);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1000a12d8,UVar4.unknown,uVar5);
  return;
}



/* Address: 0x1000a128c | FUN_1000a128c */

void FUN_1000a128c(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x98);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1000a14d8,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
  return;
}



/* Address: 0x1000a12d8 | FUN_1000a12d8 */

void FUN_1000a12d8(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  CheckedContinuation<undefined,undefined> CVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  undefined8 uVar9;
  MainActor *pMVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  String function;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  pMVar10 = *(MainActor **)(unaff_x22 + 0x70);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1000a149c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar1 = &DAT_100fa80f8;
  FUN_1000037f0(&DAT_100fa80f8,&DAT_100c25238);
  lVar12 = *(long *)(puVar1 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  uVar6 = lVar11 + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  function.bridgeObject = (void *)0x8000000100d8f4f0;
  function.str = (char *)0xd000000000000010;
  CVar3 = Swift::CheckedContinuation::init(continuation,function);
  pMVar10 = Swift::MainActor::get_shared(pMVar10,(MainActor *)CVar3.unknown);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/Router+Onboarding.swift",0x1d,1,0x29,UVar4.unknown,uVar9);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar12 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100eb3dd0;
  _swift_allocObject(&DAT_100eb3dd0,uVar13 + lVar11,uVar8 | 7);
  (**(code **)(lVar12 + 0x20))(puVar7 + uVar13,uVar6,puVar1);
  FUN_1000a1508(FUN_1000aa358,puVar7);
  _swift_release(puVar7);
  _swift_release(pMVar10);
  _swift_release(uVar9);
  _swift_task_dealloc(uVar6);
  (**(code **)(lVar12 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1000a149c | FUN_1000a149c */

void FUN_1000a149c(void)

{
  long *unaff_x22;
  
  _swift_task_switch(FUN_1000a14d8,*(undefined8 *)(*unaff_x22 + 0x88),
                     *(undefined8 *)(*unaff_x22 + 0x90));
  return;
}



/* Address: 0x1000a14d8 | FUN_1000a14d8 */

void FUN_1000a14d8(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001000a1504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a1508 | FUN_1000a1508 */

void FUN_1000a1508(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *local_2a0;
  code *pcStack_298;
  undefined *local_290;
  code *local_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [24];
  undefined8 local_260;
  long lStack_258;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  ulong local_78;
  undefined8 local_70;
  
  puVar4 = &DAT_100c28dc8;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100faa360,&DAT_100c23c20);
  _swift_initStackObject();
  FUN_1000da6e0();
  puVar5 = &DAT_100c28df8;
  _swift_getKeyPath();
  puVar6 = &DAT_100fab308;
  FUN_1000037f0(&DAT_100fab308,&DAT_100c28e20);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar6);
  puVar6 = &DAT_100c28fa8;
  _swift_getKeyPath();
  puVar7 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar6,puVar7);
  puVar7 = &DAT_100c28e28;
  _swift_getKeyPath(&DAT_100c28e28);
  puVar8 = &DAT_100fa8f60;
  FUN_1000037f0(&DAT_100fa8f60,&DAT_100c28a40);
  _swift_initStackObject();
  FUN_1000da6e0(puVar7,puVar8);
  puVar8 = &DAT_100c29218;
  _swift_getKeyPath();
  puVar9 = &DAT_100fab340;
  FUN_1000037f0(&DAT_100fab340,&DAT_100c29248);
  _swift_initStackObject();
  FUN_1000da6e0(puVar8,puVar9);
  puVar9 = &DAT_100c29250;
  _swift_getKeyPath();
  puVar10 = &DAT_100fab348;
  FUN_1000037f0(&DAT_100fab348,&DAT_100c29280);
  _swift_initStackObject();
  FUN_1000da6e0(puVar9,puVar10);
  puVar10 = &DAT_100c29068;
  _swift_getKeyPath();
  puVar15 = &DAT_100faa848;
  FUN_1000037f0(&DAT_100faa848,&DAT_100c27fd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar10,puVar15);
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a1bf4);
    (*pcVar3)();
  }
  objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
  puVar15 = &DAT_100c29128;
  _swift_getKeyPath(&DAT_100c29128);
  puVar14 = &DAT_100fa80e0;
  FUN_100038704(&DAT_100fa80e0,FUN_1000386c4,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar13 = &DAT_100faa900;
  FUN_100038704(&DAT_100faa900,FUN_100038774,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_168,puVar15,puVar14,puVar13);
  puVar15 = &DAT_100faa538;
  FUN_1000037f0(&DAT_100faa538,&DAT_100c27d60);
  _swift_allocObject();
  *(undefined8 *)(puVar15 + 0x18) = 4;
  *(undefined8 *)(puVar15 + 0x10) = 2;
  FUN_100aff360(&local_130);
  *(undefined8 *)(puVar15 + 0x28) = uStack_128;
  *(undefined8 *)(puVar15 + 0x20) = local_130;
  *(undefined8 *)(puVar15 + 0x38) = uStack_118;
  *(undefined8 *)(puVar15 + 0x30) = uStack_120;
  *(undefined8 *)(puVar15 + 0x40) = local_110;
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002ca7e0(&local_90);
  uVar2 = local_80;
  uVar1 = uStack_88;
  puVar13 = local_90;
  puVar14 = &DAT_100eb3df8;
  _swift_allocObject(&DAT_100eb3df8,0x28,7);
  *(undefined **)(puVar14 + 0x10) = puVar10;
  *(undefined **)(puVar14 + 0x18) = puVar5;
  *(undefined **)(puVar14 + 0x20) = puVar6;
  _swift_retain(puVar10);
  _swift_retain(puVar5);
  _swift_retain(puVar6);
  FUN_100b03068(&local_108,0,puVar13,uVar1,uVar2,FUN_1000aa3e0,puVar14);
  _swift_release();
  *(undefined8 *)(puVar15 + 0x50) = uStack_100;
  *(undefined8 *)(puVar15 + 0x48) = local_108;
  *(undefined8 *)(puVar15 + 0x60) = uStack_f0;
  *(undefined8 *)(puVar15 + 0x58) = uStack_f8;
  *(undefined8 *)(puVar15 + 0x68) = local_e8;
  FUN_1000da768(&local_90);
  puVar13 = local_90;
  FUN_100ae5e74();
  _swift_release();
  if (((ulong)puVar14 & 1) == 0) {
    puVar13 = (undefined *)0x0;
    FUN_100afefb8(&local_e0,0x705f746365726964,0xec00000065747361,0,FUN_100038278,0,
                  PTR___type_metadata_for_SwiftUI_AnyView_100eab970,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                 );
    uVar12 = *(ulong *)(puVar15 + 0x10);
    if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar12) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
      FUN_100088f28(puVar13,uVar12 + 1,1,puVar15);
      puVar15 = puVar13;
    }
    *(ulong *)(puVar15 + 0x10) = uVar12 + 1;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x28) = uStack_d8;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x20) = local_e0;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x38) = uStack_c8;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x30) = uStack_d0;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x40) = local_c0;
  }
  FUN_1000da768(&local_90);
  puVar14 = local_90;
  FUN_100ae7288();
  _swift_release(puVar14);
  puVar14 = puVar15;
  if (((ulong)puVar13 & 1) == 0) {
    FUN_100afefb8(&local_b8,0xd000000000000011,0x8000000100d8f530,0,FUN_100038360,0,
                  PTR___type_metadata_for_SwiftUI_AnyView_100eab970,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                 );
    uVar12 = *(ulong *)(puVar15 + 0x10);
    if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar12) {
      puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
      FUN_100088f28(puVar14,uVar12 + 1,1,puVar15);
    }
    *(ulong *)(puVar14 + 0x10) = uVar12 + 1;
    *(undefined8 *)(puVar14 + uVar12 * 0x28 + 0x40) = local_98;
    *(undefined8 *)(puVar14 + uVar12 * 0x28 + 0x28) = uStack_b0;
    *(undefined8 *)(puVar14 + uVar12 * 0x28 + 0x20) = local_b8;
    *(undefined8 *)(puVar14 + uVar12 * 0x28 + 0x38) = uStack_a0;
    *(undefined8 *)(puVar14 + uVar12 * 0x28 + 0x30) = uStack_a8;
  }
  FUN_1000da768(&local_90);
  uVar1 = local_70;
  uVar12 = local_78;
  ppuVar11 = &local_90;
  FUN_100004640(ppuVar11,local_78);
  FUN_1001a15c4(uVar12,uVar1,ppuVar11);
  FUN_100004594(&local_90);
  if ((uVar12 & 1) == 0) {
    FUN_100afefb8(&local_90,0x6c6c6177796170,&DAT_e700000000000000,1,FUN_100038448,0,
                  PTR___type_metadata_for_SwiftUI_AnyView_100eab970,
                  PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960
                 );
    uVar12 = *(ulong *)(puVar14 + 0x10);
    puVar15 = puVar14;
    if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar12) {
      puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
      FUN_100088f28(puVar15,uVar12 + 1,1,puVar14);
    }
    *(ulong *)(puVar15 + 0x10) = uVar12 + 1;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x40) = local_70;
    *(undefined8 *)(puVar15 + uVar12 * 0x28 + 0x28) = uStack_88;
    *(undefined **)(puVar15 + uVar12 * 0x28 + 0x20) = local_90;
    *(ulong *)(puVar15 + uVar12 * 0x28 + 0x38) = local_78;
    *(ulong *)(puVar15 + uVar12 * 0x28 + 0x30) = CONCAT71(uStack_7f,local_80);
    puVar14 = puVar15;
  }
  puVar15 = &DAT_100eb3e20;
  _swift_allocObject(&DAT_100eb3e20,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = param_1;
  *(undefined8 *)(puVar15 + 0x18) = param_2;
  puVar13 = &DAT_100eb3e48;
  _swift_allocObject(&DAT_100eb3e48,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1000aa410;
  *(undefined **)(puVar13 + 0x18) = puVar15;
  _swift_bridgeObjectRetain(puVar14);
  _swift_retain(param_2);
  FUN_1000da768(&local_288);
  pcStack_298 = FUN_1000386a0;
  local_2a0 = puVar14;
  local_290 = puVar13;
  (*local_288)(auStack_278,&local_2a0);
  _swift_release(puVar13);
  _swift_bridgeObjectRelease(puVar14);
  _swift_release(uStack_280);
  FUN_100004640(auStack_278,local_260);
  (**(code **)(lStack_258 + 8))(local_260,lStack_258);
  _swift_release(local_168);
  _swift_release(local_160);
  _swift_release(local_158);
  _swift_release(local_148);
  _swift_bridgeObjectRelease(puVar14);
  _swift_release(puVar10);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release(puVar4);
  _swift_release(puVar7);
  _swift_release(puVar8);
  _swift_release(puVar9);
  _swift_release(local_138);
  FUN_100004594(auStack_278);
  return;
}



/* Address: 0x1000a1bf4 | FUN_1000a1bf4 */

void FUN_1000a1bf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10009b180(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x2a,0x13,FUN_100009118,0,uVar1);
  return;
}



/* Address: 0x1000a1c44 | FUN_1000a1c44 */

void FUN_1000a1c44(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(param_1,0xd000000000000012,0x8000000100d8f4d0,&local_38,puVar1);
  return;
}



/* Address: 0x1000a1cb0 | FUN_1000a1cb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a1cb0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  LocalizedStringResource LVar5;
  undefined *puVar6;
  long lVar7;
  URL UVar8;
  URL UVar9;
  undefined8 uVar10;
  MainActor *this;
  TaskPriority TVar11;
  MainActor *pMVar12;
  MainActor *pMVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long extraout_x8_01;
  undefined8 *puVar15;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  ulong uVar16;
  long extraout_x12;
  long extraout_x12_00;
  MainActor *unaff_x20;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  code *pcVar21;
  code *pcVar22;
  undefined *puVar23;
  String SVar24;
  long local_130 [3];
  LocalizedStringResource local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined8 *local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  code *local_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 *local_80;
  undefined8 local_78;
  long lStack_70;
  
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  puVar23 = (undefined *)((long)local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100faa890;
  local_118.unknown = puVar23;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar23 - extraout_x8_00;
  lVar7 = 0;
  local_c0 = lVar14;
  FUN_1003efa8c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar15 = (undefined8 *)(lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_f8 = puVar15;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100ea71a8;
  lVar14 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar15 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_130[0] = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_02;
  local_130[1] = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_03;
  local_130[2] = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_04;
  local_110 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_05;
  local_108 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_06;
  local_100 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_07;
  local_f0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar16 = lVar7 - extraout_x8_08;
  local_e8 = uVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = uVar16 - extraout_x8_09;
  local_e0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x8_10;
  local_d8 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar23 = (undefined *)(lVar7 - extraout_x8_11);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar22 = (code *)(puVar23 + -extraout_x8_12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)pcVar22 - extraout_x8_13;
  local_d0 = extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar17 - extraout_x8_14;
  pcVar18 = *(code **)(lVar14 + 0x10);
  (*pcVar18)(lVar20,param_1,UVar8.unknown);
  lVar7 = lVar17;
  (*pcVar18)(lVar17,lVar20,UVar8.unknown);
  FUN_1001ac7f0();
  (*pcVar18)(pcVar22,lVar7,UVar8.unknown);
  pcVar21 = (code *)&DAT_100fab2f0;
  FUN_100003a00(&DAT_100fab2f0,puVar6,PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
  local_b8 = pcVar21;
  bVar3 = Swift::Equatable::___infix(pcVar22,lVar17,UVar8.unknown);
  pcVar21 = *(code **)(lVar14 + 8);
  local_c8 = lVar14;
  (*pcVar21)(pcVar22,UVar8.unknown);
  (*pcVar21)(lVar17,UVar8.unknown);
  if (bVar3) {
    FUN_1000a56f4();
    (*pcVar21)(lVar20,UVar8.unknown);
    goto LAB_1000a2534;
  }
  UVar9.unknown = puVar23;
  (*pcVar18)(puVar23,lVar20,UVar8.unknown);
  SVar24 = Foundation::URL::get_lastPathComponent(UVar9);
  FUN_1001ac4c4(pcVar22,SVar24.str);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  bVar3 = Swift::Equatable::___infix(pcVar22,puVar23,UVar8.unknown,local_b8);
  (*pcVar21)(pcVar22,UVar8.unknown);
  (*pcVar21)(puVar23,UVar8.unknown);
  lVar7 = local_d8;
  if (bVar3) {
    local_b8 = pcVar22;
    if (*(undefined **)(unaff_x20 + 0xd0) != (undefined *)0x0) {
      SVar24 = Foundation::URL::get_lastPathComponent((URL)*(undefined **)(unaff_x20 + 0xd0));
      FUN_100039c50(SVar24.str,SVar24.bridgeObject,1);
      _swift_bridgeObjectRelease(SVar24.bridgeObject);
    }
    FUN_1000a56f4(0);
    (*pcVar21)(lVar20,UVar8.unknown);
    pcVar22 = local_b8;
    goto LAB_1000a2534;
  }
  lVar14 = local_d8;
  (*pcVar18)(local_d8,lVar20,UVar8.unknown);
  FUN_1001ac850();
  (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
  bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
  (*pcVar21)(pcVar22,UVar8.unknown);
  (*pcVar21)(lVar7,UVar8.unknown);
  lVar7 = local_e0;
  if (bVar3) {
    FUN_1000da768(&local_90);
    FUN_1000a2e04();
    uVar10 = CONCAT71(uStack_8f,local_90);
LAB_1000a21c0:
    _swift_release(uVar10);
    (*pcVar21)(lVar20,UVar8.unknown);
  }
  else {
    lVar14 = local_e0;
    (*pcVar18)(local_e0,lVar20,UVar8.unknown);
    FUN_1001ac9b8();
    (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
    bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
    (*pcVar21)(pcVar22,UVar8.unknown);
    (*pcVar21)(lVar7,UVar8.unknown);
    uVar16 = local_e8;
    if (bVar3) {
      FUN_1000da768(&local_90);
      uVar10 = CONCAT71(uStack_8f,local_90);
      FUN_1000a0df0();
    }
    else {
      uVar19 = local_e8;
      (*pcVar18)(local_e8,lVar20,UVar8.unknown);
      FUN_1001acb08();
      (*pcVar18)(pcVar22,uVar19,UVar8.unknown);
      bVar3 = Swift::Equatable::___infix(pcVar22,uVar16,UVar8.unknown,local_b8);
      (*pcVar21)(pcVar22,UVar8.unknown);
      (*pcVar21)(uVar16,UVar8.unknown);
      lVar7 = local_f0;
      if (bVar3) {
        FUN_1000da768(&local_90);
        uVar4 = (uint)CONCAT71(uStack_8f,local_90);
        FUN_100ae5e74();
        _swift_release();
        if ((uVar16 & 1) == 0) {
          FUN_1000da768(&local_90);
          if (DAT_100fa7760 != -1) {
            uVar4 = 0xfa7760;
            _swift_once(&DAT_100fa7760,FUN_100024fb0);
          }
          FUN_1000da768(&local_98);
          FUN_100ae5248();
          _swift_release(local_98);
          _swift_release(CONCAT71(uStack_8f,local_90));
          if ((uVar4 & 0xff) != 0) {
            (*pcVar21)(lVar20,UVar8.unknown);
            return;
          }
        }
        puVar6 = &DAT_100c28d50;
        _swift_getKeyPath(&DAT_100c28d50);
        puVar23 = &DAT_100c28d78;
        _swift_getKeyPath(&DAT_100c28d78);
        local_90 = 1;
        _swift_retain(unaff_x20);
        FUN_1002cb5a0(&local_90,unaff_x20,puVar6,puVar23);
        FUN_1000da768(&local_90);
        puVar15 = local_f8;
        uVar10 = CONCAT71(uStack_8f,local_90);
        FUN_100400ddc(local_f8);
        FUN_1003feee0(*puVar15,puVar15[1]);
        _swift_release(uVar10);
        (*pcVar21)(lVar20,UVar8.unknown);
        FUN_10005241c(puVar15,FUN_1003efa8c);
        goto LAB_1000a2534;
      }
      lVar14 = local_f0;
      (*pcVar18)(local_f0,lVar20,UVar8.unknown);
      FUN_1001ac30c();
      (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
      bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
      (*pcVar21)(pcVar22,UVar8.unknown);
      (*pcVar21)(lVar7,UVar8.unknown);
      lVar7 = local_100;
      if (bVar3) {
        TVar11 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(local_c0,1,1,TVar11.unknown);
        pMVar13 = (MainActor *)&DAT_100eb3d08;
        _swift_allocObject(&DAT_100eb3d08,0x18,7);
        local_b8 = pcVar21;
        _swift_weakInit(pMVar13 + 0x10,unaff_x20);
        this = Swift::MainActor::typeMetadataAccessor();
        puVar6 = PTR_typeMetadataAccessor_100eaec10;
        pMVar12 = pMVar13;
        _swift_retain();
        pMVar12 = Swift::MainActor::get_shared(this,pMVar12);
        puVar15 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        puVar6 = &DAT_100eb3d30;
        _swift_allocObject(&DAT_100eb3d30,0x28,7);
        *(MainActor **)(puVar6 + 0x10) = pMVar12;
        *(undefined8 **)(puVar6 + 0x18) = puVar15;
        *(MainActor **)(puVar6 + 0x20) = pMVar13;
        _swift_release(pMVar13);
        FUN_1000645b0(0,0,local_c0,&DAT_100c28d48,puVar6);
        _swift_release();
        (*local_b8)(lVar20,UVar8.unknown);
        goto LAB_1000a2534;
      }
      lVar14 = local_100;
      (*pcVar18)(local_100,lVar20,UVar8.unknown);
      FUN_1001ac06c();
      (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
      bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
      (*pcVar21)(pcVar22,UVar8.unknown);
      (*pcVar21)(lVar7,UVar8.unknown);
      lVar7 = local_108;
      if (!bVar3) {
        lVar14 = local_108;
        (*pcVar18)(local_108,lVar20,UVar8.unknown);
        FUN_1001ac1bc();
        (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
        bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
        (*pcVar21)(pcVar22,UVar8.unknown);
        (*pcVar21)(lVar7,UVar8.unknown);
        lVar7 = local_110;
        if (!bVar3) {
          lVar14 = local_110;
          (*pcVar18)(local_110,lVar20,UVar8.unknown);
          FUN_1001acc58();
          (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
          bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
          (*pcVar21)(pcVar22,UVar8.unknown);
          (*pcVar21)(lVar7,UVar8.unknown);
          lVar7 = local_130[2];
          if (bVar3) {
            FUN_1000da768(&local_90);
            uVar10 = CONCAT71(uStack_8f,local_90);
            FUN_10009ac9c(1);
            _swift_release(uVar10);
            FUN_1000da768(&local_90);
            puVar15 = local_f8;
            uVar10 = CONCAT71(uStack_8f,local_90);
            FUN_100400f5c(local_f8);
          }
          else {
            lVar14 = local_130[2];
            (*pcVar18)(local_130[2],lVar20,UVar8.unknown);
            FUN_1001ac370();
            (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
            bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
            (*pcVar21)(pcVar22,UVar8.unknown);
            (*pcVar21)(lVar7,UVar8.unknown);
            lVar7 = local_130[1];
            if (bVar3) {
              FUN_1000da768(&local_98);
              local_a0 = local_98;
              Swift::MainActor::typeMetadataAccessor();
              local_80 = &local_a0;
              _swift_retain(local_98);
              FUN_1000582d0(FUN_1000a98ac,&local_90,"Paste/CreateItemRoute.swift",0x1b,2,0xf);
              (*pcVar21)(lVar20,UVar8.unknown);
              _swift_release_n(local_98,2);
              goto LAB_1000a2534;
            }
            lVar14 = local_130[1];
            (*pcVar18)(local_130[1],lVar20,UVar8.unknown);
            FUN_100af5164();
            (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
            bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
            (*pcVar21)(pcVar22,UVar8.unknown);
            (*pcVar21)(lVar7,UVar8.unknown);
            lVar7 = local_130[0];
            if (bVar3) {
              FUN_1000da768(&local_90);
              uVar10 = CONCAT71(uStack_8f,local_90);
              FUN_100af4e10();
              goto LAB_1000a21c0;
            }
            lVar14 = local_130[0];
            (*pcVar18)(local_130[0],lVar20,UVar8.unknown);
            FUN_1001acda8();
            (*pcVar18)(pcVar22,lVar14,UVar8.unknown);
            bVar3 = Swift::Equatable::___infix(pcVar22,lVar7,UVar8.unknown,local_b8);
            (*pcVar21)(pcVar22,UVar8.unknown);
            (*pcVar21)(lVar7,UVar8.unknown);
            if (!bVar3) {
              (*pcVar21)(lVar20,UVar8.unknown);
              goto LAB_1000a2534;
            }
            FUN_1000da768(&local_90);
            uVar10 = CONCAT71(uStack_8f,local_90);
            FUN_1000adc6c(1);
            _swift_release(uVar10);
            FUN_1000da768(&local_90);
            puVar15 = local_f8;
            uVar10 = CONCAT71(uStack_8f,local_90);
            FUN_1004010d4(local_f8);
          }
          FUN_1003feee0(*puVar15,puVar15[1]);
          _swift_release(uVar10);
          FUN_10005241c(puVar15,FUN_1003efa8c);
          FUN_1000da768(&local_90);
          uVar2 = CONCAT71(uStack_8f,local_90);
          FUN_10020c980();
          uVar10 = *puVar15;
          uVar1 = puVar15[1];
          _swift_bridgeObjectRetain(uVar1);
          LVar5.unknown = local_118.unknown;
          FUN_1001c4cd0(local_118.unknown);
          SVar24 = (extension_Foundation)::Swift::String::init(LVar5);
          FUN_10020b084(uVar10,uVar1,SVar24.str,SVar24.bridgeObject,0,0,0,0);
          _swift_release(uVar2);
          _swift_bridgeObjectRelease(uVar1);
          _swift_bridgeObjectRelease(SVar24.bridgeObject);
          (*pcVar21)(lVar20,UVar8.unknown);
          goto LAB_1000a2534;
        }
      }
      FUN_1000da768(&local_90);
      uVar10 = CONCAT71(uStack_8f,local_90);
      FUN_100064afc(4,0,0);
    }
    (*pcVar21)(lVar20,UVar8.unknown);
    _swift_release(uVar10);
  }
LAB_1000a2534:
  FUN_1000da768(&local_90);
  FUN_100004640(&local_90,local_78);
  uVar16 = param_1;
  (**(code **)(lStack_70 + 8))(param_1,local_78,lStack_70);
  FUN_100004594(&local_90);
  if ((uVar16 & 1) != 0) {
    TVar11 = Swift::TaskPriority::typeMetadataAccessor();
    lVar14 = local_c0;
    (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(local_c0,1,1,TVar11.unknown);
    (*pcVar18)(pcVar22,param_1,UVar8.unknown);
    pMVar12 = Swift::MainActor::typeMetadataAccessor();
    puVar6 = PTR_typeMetadataAccessor_100eaec10;
    pMVar13 = unaff_x20;
    _swift_retain();
    pMVar13 = Swift::MainActor::get_shared(pMVar12,pMVar13);
    puVar15 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    lVar7 = local_c8;
    uVar16 = (ulong)*(byte *)(local_c8 + 0x50);
    uVar19 = uVar16 + 0x28 & (uVar16 ^ 0xffffffffffffffff);
    puVar6 = &DAT_100eb3ce0;
    _swift_allocObject(&DAT_100eb3ce0,uVar19 + local_d0,uVar16 | 7);
    *(MainActor **)(puVar6 + 0x10) = pMVar13;
    *(undefined8 **)(puVar6 + 0x18) = puVar15;
    *(MainActor **)(puVar6 + 0x20) = unaff_x20;
    (**(code **)(lVar7 + 0x20))(puVar6 + uVar19,pcVar22,UVar8.unknown);
    FUN_1000645b0(0,0,lVar14,&DAT_100c28d38,puVar6);
    _swift_release();
  }
  return;
}



/* Address: 0x1000a2af4 | FUN_1000a2af4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a2af4(long *param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID *pIVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ID *pIVar11;
  ID *pIVar12;
  undefined *puVar13;
  ID *local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined **local_c0;
  undefined **ppuStack_b8;
  undefined1 auStack_b0 [24];
  ID local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_68;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar13,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemRoute.swift",0x1b,1,0xf,UVar3.unknown,puVar2);
  }
  IVar5 = 0;
  FUN_10004ee4c();
  _objc_allocWithZone();
  IVar5 = objc_stub::init(IVar5);
  objc_stub::setAnimationBehavior_(IVar5,3);
  uVar6 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar2 = (undefined8 *)(IVar5 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar2,auStack_b0,1,0);
  uVar7 = *puVar2;
  uVar10 = puVar2[1];
  *puVar2 = FUN_100058834;
  puVar2[1] = 0;
  FUN_100004550(uVar7,uVar10);
  local_78 = &PTR_PTR_100ebe110;
  uVar7 = 0;
  local_98 = IVar5;
  local_80 = uVar6;
  FUN_1001adc9c();
  _swift_allocObject();
  pIVar8 = &local_98;
  FUN_1001ad514();
  puVar13 = &DAT_100c28da0;
  _swift_getKeyPath(&DAT_100c28da0);
  puVar9 = puVar13;
  FUN_100009bac();
  FUN_1002cb7e0(&local_98,puVar13,puVar9);
  FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
  FUN_1002ca7e0(&local_e0);
  pIVar11 = local_e0;
  local_c0 = &PTR_PTR_100eb20c0;
  ppuStack_b8 = &PTR_PTR_100ebe100;
  uVar10 = 0;
  local_e0 = pIVar8;
  local_c8 = uVar7;
  FUN_1003b8084(0);
  _swift_allocObject();
  FUN_1003b7394(pIVar11,uStack_d8,&local_e0,uVar10);
  FUN_10008bd30(0);
  _objc_allocWithZone();
  _swift_retain(pIVar8);
  pIVar12 = pIVar11;
  _swift_retain(pIVar11);
  FUN_10008ad54();
  puVar13 = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar13);
  objc_stub::setView_(IVar5,pIVar12);
  (**(code **)(*pIVar8 + 0x68))(IVar5);
  local_c0 = &PTR_PTR_100ebe0e8;
  local_e0 = pIVar8;
  local_c8 = uVar7;
  (**(code **)(*param_1 + 0x88))(&local_e0,0,0);
  _swift_release(local_98);
  _swift_release(local_90);
  _swift_release(local_88);
  _swift_release(local_78);
  _swift_release(pIVar11);
  _swift_release(local_68);
  FUN_100004594(&local_e0);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1000a2e04 | FUN_1000a2e04 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000a2e04(void)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000a2f44);
    (*pcVar1)();
  }
  objc_stub::activate(*(ID *)PTR__NSApp_100ea8fa0);
  if (DAT_100fa92c0 != 0) {
    IVar2 = objc_stub::window(DAT_100fa92c0);
    if (IVar2 != 0) {
      FUN_1001adce8();
    }
    return 0;
  }
  IVar2 = DAT_100fa92c0;
  FUN_100059340();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar2);
  IVar2 = DAT_100fa92c0;
  DAT_100fa92c0 = IVar3;
  if (IVar3 != 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    FUN_100217e4c(IVar2,&local_50,FUN_1000595a8,0);
    FUN_100005808(&local_50,&DAT_100fa8810,&DAT_100c23ce0);
    if (DAT_100fa92c0 != 0) {
      IVar2 = objc_stub::window(DAT_100fa92c0);
      objc_stub::center(IVar2);
      if ((DAT_100fa92c0 != 0) && (IVar2 = objc_stub::window(DAT_100fa92c0), IVar2 != 0)) {
        FUN_1001adce8();
      }
    }
  }
  return 0;
}



/* Address: 0x1000a2f44 | FUN_1000a2f44 */

void FUN_1000a2f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100af5304(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x50,0x13,thunk_FUN_1000096f4,0,uVar1);
  return;
}



/* Address: 0x1000a2f94 | FUN_1000a2f94 */

void FUN_1000a2f94(undefined8 *param_1,undefined8 param_2)

{
  FUN_1001e7514();
  *param_1 = param_2;
  return;
}



/* Address: 0x1000a2fb8 | FUN_1000a2fb8 */

void FUN_1000a2fb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  puVar1 = &DAT_100faa8f0;
  FUN_1000037f0(&DAT_100faa8f0,&DAT_100c26980);
  FUN_1002ccc34(param_1,0xd000000000000012,0x8000000100d8f4b0,&local_38,puVar1);
  return;
}



/* Address: 0x1000a3024 | FUN_1000a3024 */

void FUN_1000a3024(undefined1 param_1,undefined1 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x163) = param_2;
  *(undefined1 *)(unaff_x22 + 0x162) = param_1;
  lVar1 = 0;
  FUN_1003efa8c();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar2;
  puVar3 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(LVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar2;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x1c8) = pMVar5;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x1d0) = pMVar5;
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x1d8) = puVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x1e0) = UVar7.unknown;
  *(undefined8 **)(unaff_x22 + 0x1e8) = puVar6;
  _swift_task_switch(FUN_1000a3130,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1000a3130 | FUN_1000a3130 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a3130(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ID IVar7;
  ID IVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  int *piVar12;
  long unaff_x22;
  undefined8 uVar13;
  ID self;
  LocalizedStringResource localized;
  undefined8 uVar14;
  String SVar15;
  Selector SVar16;
  String SVar17;
  
  self = *(ID *)PTR__NSApp_100ea8fa0;
  if (self != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
    localized.unknown = *(undefined **)(unaff_x22 + 0x1c0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar6 = 0;
    FUN_10000ec2c(0,&DAT_100fa8ac0,&PTR__OBJC_CLASS___NSMenu_100f8d780);
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar6;
    _swift_retain(uVar13);
    IVar7 = self;
    FUN_10021b6e8();
    IVar8 = IVar7;
    FUN_10021b6e8();
    FUN_1001c6180(localized.unknown);
    SVar15 = (extension_Foundation)::Swift::String::init(localized);
    pcVar9 = SVar15.str;
    FUN_10021bce0(pcVar9,SVar15.bridgeObject,0,0,0x71,0xe100000000000000,0x100000,0,0,"terminate:",
                  IVar8);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar14 = 0x6574736150;
    uVar6 = uVar14;
    FUN_10021b998(0x6574736150,&DAT_e500000000000000,0,pcVar9,IVar7);
    uVar13 = 0;
    FUN_10021b6e8();
    uVar10 = 0x65736f6c43;
    FUN_10021bce0(0x65736f6c43,&DAT_e500000000000000,0,0,0x77,0xe100000000000000,0x100000,0,0,
                  "performClose:",uVar13);
    uVar13 = 0x656c6946;
    FUN_10021b998(0x656c6946,&DAT_e400000000000000,0,uVar10,uVar6);
    uVar10 = 0;
    FUN_10021b6e8();
    SVar15.bridgeObject = &DAT_e500000000000000;
    SVar15.str = (char *)0x3a6f646e75;
    SVar16 = ObjectiveC::Selector::init(SVar15);
    uVar6 = 0x6f646e55;
    FUN_10021bce0(0x6f646e55,&DAT_e400000000000000,0,0,0x7a,0xe100000000000000,0x100000,0,0,
                  SVar16.events.unknown.unknown,uVar10);
    SVar17.bridgeObject = &DAT_e500000000000000;
    SVar17.str = (char *)0x3a6f646572;
    SVar16 = ObjectiveC::Selector::init(SVar17);
    uVar10 = 0x6f646552;
    FUN_10021bce0(0x6f646552,&DAT_e400000000000000,0,0,0x7a,0xe100000000000000,0x120000,0,0,
                  SVar16.events.unknown.unknown,uVar6);
    FUN_10021b7b4();
    uVar6 = 0x747543;
    FUN_10021bce0(0x747543,0xe300000000000000,0,0,0x78,0xe100000000000000,0x100000,0,0,"cut:",uVar10
                 );
    uVar10 = 0x79706f43;
    FUN_10021bce0(0x79706f43,&DAT_e400000000000000,0,0,99,0xe100000000000000,0x100000,0,0,"copy:",
                  uVar6);
    FUN_10021bce0(0x6574736150,&DAT_e500000000000000,0,0,0x76,0xe100000000000000,0x100000,0,0,
                  "paste:",uVar10);
    uVar6 = 0x41207463656c6553;
    FUN_10021bce0(0x41207463656c6553,0xea00000000006c6c,0,0,0x61,0xe100000000000000,0x100000,0,0,
                  "selectAll:",uVar14);
    uVar10 = 0x74696445;
    FUN_10021b998(0x74696445,&DAT_e400000000000000,0,uVar6,uVar13);
    objc_stub::setMainMenu_(self,uVar10);
    objc_stub::setActivationPolicy_(self,0);
    FUN_1000da768(unaff_x22 + 0x80,0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar4 = *(long *)(unaff_x22 + 0xa0);
    FUN_100004640(unaff_x22 + 0x80,uVar6);
    piVar12 = *(int **)(lVar4 + 0x20);
    iVar1 = *piVar12;
    plVar11 = (long *)(ulong)(uint)piVar12[1];
    _swift_retain(uVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1f8) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_1000a3580;
                    /* WARNING: Could not recover jumptable at 0x0001000a3578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(uVar2,uVar3,uVar6,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000a3580);
  (*pcVar5)();
}



/* Address: 0x1000a3580 | FUN_1000a3580 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000a3580(void)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  TaskPriority TVar5;
  undefined *puVar6;
  ulong uVar7;
  ID IVar8;
  ID IVar9;
  long *plVar10;
  _ArrayBuffer _Var11;
  MainActor *pMVar12;
  MainActor *pMVar13;
  UnownedSerialExecutor UVar14;
  UnownedSerialExecutor UVar15;
  NSString *pNVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  MainActor *pMVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *unaff_x22;
  long lVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  MainActor *pMVar28;
  MainActor *pMVar29;
  undefined8 uVar30;
  
  lVar18 = *unaff_x22;
  uVar19 = *(undefined8 *)(lVar18 + 0x1d0);
  uVar22 = *(undefined8 *)(lVar18 + 0x1b8);
  cVar2 = *(char *)(lVar18 + 0x162);
  lVar24 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar18 + 0x1f8));
  _swift_release(uVar19);
  FUN_100004594(lVar18 + 0x80);
  FUN_1000da768(lVar18 + 0xa8);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  *(undefined **)(lVar18 + 0x200) = TVar5.unknown;
  pcVar17 = *(code **)(*(long *)(TVar5.unknown + -8) + 0x38);
  *(code **)(lVar18 + 0x208) = pcVar17;
  (*pcVar17)(uVar22,1,1,TVar5.unknown);
  FUN_100076688(lVar18 + 0xa8,lVar18 + 0xd0);
  puVar6 = &DAT_100eb3d58;
  _swift_allocObject(&DAT_100eb3d58,0x48,7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  FUN_100076508(lVar18 + 0xd0,puVar6 + 0x20);
  FUN_10008ee90(0,0,uVar22,&DAT_100c291d8,puVar6);
  _swift_release();
  FUN_100005808(uVar22,&DAT_100faa890,&DAT_100c22f68);
  if (cVar2 == '\x01') {
    FUN_1000da768(lVar18 + 0x1a0);
    plVar10 = (long *)0xb0;
    pcVar17 = FUN_1000a10e8;
    _swift_task_alloc();
    *(long **)(lVar18 + 0x210) = plVar10;
    *plVar10 = lVar24;
    plVar10[1] = (long)FUN_1000a3cc4;
    goto LAB_1000a3c9c;
  }
  uVar7 = 0;
  FUN_100342c98();
  thunk_FUN_10034277c();
  lVar20 = *(long *)(lVar18 + 0x1a8);
  if ((uVar7 & 1) != 0) {
    FUN_1000da768(lVar18 + 0x188);
    *(undefined8 *)(lVar18 + 0x218) = *(undefined8 *)(lVar18 + 0x188);
    plVar10 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(lVar18 + 0x220) = plVar10;
    *plVar10 = lVar24;
    plVar10[1] = (long)FUN_1000a41d8;
    FUN_1000a4ae8();
    return;
  }
  _swift_release(*(undefined8 *)(lVar18 + 0x1d0));
  uVar22 = *(undefined8 *)(lVar20 + 0x1a0);
  uVar19 = *(undefined8 *)(lVar20 + 0x198);
  uVar26 = *(undefined8 *)(lVar20 + 0x1b0);
  uVar23 = *(undefined8 *)(lVar20 + 0x1a8);
  uVar30 = *(undefined8 *)(lVar20 + 0x1c0);
  uVar27 = *(undefined8 *)(lVar20 + 0x1b8);
  *(undefined8 *)(lVar18 + 0x40) = *(undefined8 *)(lVar20 + 0x1c8);
  *(undefined8 *)(lVar18 + 0x28) = uVar26;
  *(undefined8 *)(lVar18 + 0x20) = uVar23;
  *(undefined8 *)(lVar18 + 0x38) = uVar30;
  *(undefined8 *)(lVar18 + 0x30) = uVar27;
  *(undefined8 *)(lVar18 + 0x18) = uVar22;
  *(undefined8 *)(lVar18 + 0x10) = uVar19;
  uVar19 = *(undefined8 *)(lVar18 + 0x10);
  uVar22 = *(undefined8 *)(lVar18 + 0x18);
  uVar23 = *(undefined8 *)(lVar18 + 0x20);
  uVar26 = *(undefined8 *)(lVar18 + 0x30);
  uVar27 = *(undefined8 *)(lVar18 + 0x40);
  _swift_retain(uVar19);
  _swift_retain(uVar22);
  _swift_retain(uVar23);
  _swift_retain(uVar26);
  _swift_retain(uVar27);
  FUN_1000037f0(&DAT_100faa8b0,&DAT_100c28168);
  FUN_1002ca7e0(lVar18 + 0x148);
  _swift_release(uVar19);
  _swift_release(uVar22);
  _swift_release(uVar23);
  _swift_release(uVar26);
  _swift_release(uVar27);
  if (*(char *)(lVar18 + 0x160) != '\x01') {
    if (*(long *)(lVar18 + 0x148) == 6) {
      lVar20 = *(long *)(lVar18 + 0x150);
      if (lVar20 == 0) {
        lVar20 = *(long *)(lVar18 + 0x158);
      }
      if (lVar20 < 0) {
LAB_1000a3820:
        uVar19 = *(undefined8 *)(lVar18 + 0x1b0);
        FUN_1000da768(lVar18 + 0x180);
        uVar22 = *(undefined8 *)(lVar18 + 0x180);
        FUN_1003fd92c(uVar19);
        FUN_1003fea8c(uVar19);
        _swift_release(uVar22);
        FUN_10005241c(uVar19,FUN_1003efa8c);
      }
    }
    else if (*(long *)(lVar18 + 0x148) < 6) goto LAB_1000a3820;
  }
  puVar6 = PTR__NSApp_100ea8fa0;
  IVar8 = *(ID *)PTR__NSApp_100ea8fa0;
  if (IVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1000a3cc0);
    (*pcVar17)();
  }
  IVar9 = IVar8;
  FUN_10009d77c();
  objc_stub::setMainMenu_(IVar8,IVar9);
  objc_stub::setActivationPolicy_(IVar8,1);
  FUN_1000a6148(0);
  FUN_1000a61e0();
  FUN_1000a648c();
  FUN_1000a67e4();
  FUN_1000da768(lVar18 + 0xf8);
  plVar10 = (long *)(lVar18 + 0xf8);
  FUN_100004640(plVar10,*(undefined8 *)(lVar18 + 0x110));
  lVar20 = *plVar10;
  FUN_10004f664();
  FUN_10004f7d4();
  if (*(ID *)puVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1000a3cc4);
    (*pcVar17)();
  }
  _Var11.unknown = (undefined *)objc_stub::windows(*(ID *)puVar6);
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    pMVar21 = *(MainActor **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var1.unknown = _Var11.unknown;
    }
    pMVar21 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pMVar21 != (MainActor *)0x0) {
    pMVar28 = (MainActor *)0x0;
    do {
      if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
        if (*(MainActor **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= pMVar28) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1000a3adc);
          (*pcVar17)();
        }
        pMVar12 = *(MainActor **)(_Var11.unknown + (long)pMVar28 * 8 + 0x20);
      }
      else {
        pMVar12 = pMVar28;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar28,_Var11);
      }
      if (SCARRY8((long)pMVar28,1)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1000a3acc);
        (*pcVar17)();
      }
      pMVar29 = pMVar28 + 1;
      uVar19 = *(undefined8 *)(lVar18 + 0x1d8);
      pMVar13 = Swift::MainActor::get_shared(*(MainActor **)(lVar18 + 0x1c8),pMVar12);
      UVar14 = Swift::Actor::get_unownedExecutor();
      UVar15 = UVar14;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar15.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ScreensharingPrivacyManager.swift",0x27,1,0x3b,UVar14.unknown,uVar19);
      }
      uVar22 = *(undefined8 *)(lVar20 + 0x18);
      uVar19 = *(undefined8 *)(lVar20 + 0x10);
      uVar26 = *(undefined8 *)(lVar20 + 0x28);
      uVar23 = *(undefined8 *)(lVar20 + 0x20);
      uVar30 = *(undefined8 *)(lVar20 + 0x38);
      uVar27 = *(undefined8 *)(lVar20 + 0x30);
      *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(lVar20 + 0x40);
      *(undefined8 *)(lVar18 + 0x70) = uVar30;
      *(undefined8 *)(lVar18 + 0x68) = uVar27;
      *(undefined8 *)(lVar18 + 0x60) = uVar26;
      *(undefined8 *)(lVar18 + 0x58) = uVar23;
      *(undefined8 *)(lVar18 + 0x50) = uVar22;
      *(undefined8 *)(lVar18 + 0x48) = uVar19;
      uVar19 = *(undefined8 *)(lVar18 + 0x48);
      uVar22 = *(undefined8 *)(lVar18 + 0x50);
      uVar27 = *(undefined8 *)(lVar18 + 0x58);
      uVar26 = *(undefined8 *)(lVar18 + 0x68);
      uVar23 = *(undefined8 *)(lVar18 + 0x78);
      _swift_retain(uVar19);
      _swift_retain(uVar22);
      _swift_retain(uVar27);
      _swift_retain(uVar26);
      _swift_retain(uVar23);
      FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
      FUN_1002ca7e0(lVar18 + 0x161);
      _swift_release(uVar19);
      _swift_release(uVar22);
      _swift_release(uVar27);
      _swift_release(uVar26);
      _swift_release(uVar23);
      objc_stub::setSharingType_((ID)pMVar12,(ulong)*(byte *)(lVar18 + 0x161));
      _swift_release(pMVar13);
      pMVar28 = pMVar28 + 1;
    } while (pMVar29 != pMVar21);
  }
  _swift_bridgeObjectRelease(_Var11.unknown);
  FUN_100004594(lVar18 + 0xf8);
  FUN_1000da768(lVar18 + 0x168);
  uVar19 = *(undefined8 *)(lVar18 + 0x168);
  pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar16);
  IVar8 = SMAppService::status(IVar8);
  _swift_release(uVar19);
  puVar25 = *(undefined8 **)(lVar18 + 0x1b0);
  if (IVar8 == 1) {
    FUN_1000da768(lVar18 + 0x178,0);
    uVar19 = *(undefined8 *)(lVar18 + 0x178);
    FUN_1004010d4(puVar25);
    FUN_1003feee0(*puVar25,puVar25[1]);
  }
  else {
    FUN_1000da768(lVar18 + 0x170,0);
    uVar19 = *(undefined8 *)(lVar18 + 0x170);
    FUN_1004010d4(puVar25);
    FUN_1003fea8c(puVar25);
  }
  _swift_release(uVar19);
  FUN_10005241c(puVar25,FUN_1003efa8c);
  uVar26 = *(undefined8 *)(lVar18 + 0x1d8);
  uVar19 = *(undefined8 *)(lVar18 + 0x1c0);
  pMVar21 = *(MainActor **)(lVar18 + 0x1c8);
  uVar22 = *(undefined8 *)(lVar18 + 0x1b0);
  uVar23 = *(undefined8 *)(lVar18 + 0x1b8);
  pMVar12 = *(MainActor **)(lVar18 + 0x1a8);
  uVar3 = *(undefined1 *)(lVar18 + 0x163);
  uVar4 = *(undefined1 *)(lVar18 + 0x162);
  (**(code **)(lVar18 + 0x208))(uVar23,1,1,*(undefined8 *)(lVar18 + 0x200));
  pMVar28 = pMVar12;
  _swift_retain_n(pMVar12,2);
  pMVar21 = Swift::MainActor::get_shared(pMVar21,pMVar28);
  puVar6 = &DAT_100eb3d80;
  _swift_allocObject(&DAT_100eb3d80,0x41,7);
  *(MainActor **)(puVar6 + 0x10) = pMVar21;
  *(undefined8 *)(puVar6 + 0x18) = uVar26;
  *(MainActor **)(puVar6 + 0x20) = pMVar12;
  puVar6[0x28] = uVar4;
  *(code **)(puVar6 + 0x30) = FUN_1000aa094;
  *(MainActor **)(puVar6 + 0x38) = pMVar12;
  puVar6[0x40] = uVar3;
  FUN_1000645b0(0,0,uVar23,&DAT_100c291e8,puVar6);
  _swift_release();
  _swift_release(pMVar12);
  FUN_100004594(lVar18 + 0xa8);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar22);
  pcVar17 = *(code **)(lVar24 + 8);
LAB_1000a3c9c:
  (*pcVar17)();
  return;
}



/* Address: 0x1000a3cc4 | FUN_1000a3cc4 */

void FUN_1000a3cc4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x210));
  _swift_release(*(undefined8 *)(lVar1 + 0x1a0));
  _swift_task_switch(FUN_1000a3d10,*(undefined8 *)(lVar1 + 0x1e0),*(undefined8 *)(lVar1 + 0x1e8));
  return;
}



/* Address: 0x1000a3d10 | FUN_1000a3d10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000a3d10(void)

{
  _CocoaArrayWrapper _Var1;
  undefined1 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  ID IVar5;
  ID IVar6;
  long *plVar7;
  _ArrayBuffer _Var8;
  MainActor *pMVar9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  NSString *pNVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  MainActor *pMVar18;
  undefined8 uVar19;
  long unaff_x22;
  undefined8 uVar20;
  MainActor *pMVar21;
  undefined8 uVar22;
  MainActor *pMVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1d0));
  FUN_1000da768(unaff_x22 + 0x120);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar17 = *(long *)(unaff_x22 + 0x140);
  FUN_100004640(unaff_x22 + 0x120,uVar22);
  (**(code **)(lVar17 + 8))(uVar22,lVar17);
  FUN_100004594(unaff_x22 + 0x120);
  FUN_1000a5bec();
  puVar14 = PTR__NSApp_100ea8fa0;
  IVar5 = *(ID *)PTR__NSApp_100ea8fa0;
  if (IVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a41d4);
    (*pcVar4)();
  }
  IVar6 = IVar5;
  FUN_10009d77c();
  objc_stub::setMainMenu_(IVar5,IVar6);
  objc_stub::setActivationPolicy_(IVar5,1);
  FUN_1000a6148(0);
  FUN_1000a61e0();
  FUN_1000a648c();
  FUN_1000a67e4();
  FUN_1000da768(unaff_x22 + 0xf8);
  plVar7 = (long *)(unaff_x22 + 0xf8);
  FUN_100004640(plVar7,*(undefined8 *)(unaff_x22 + 0x110));
  lVar17 = *plVar7;
  FUN_10004f664();
  FUN_10004f7d4();
  if (*(ID *)puVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a41d8);
    (*pcVar4)();
  }
  _Var8.unknown = (undefined *)objc_stub::windows(*(ID *)puVar14);
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    pMVar18 = *(MainActor **)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var1.unknown = _Var8.unknown;
    }
    pMVar18 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pMVar18 != (MainActor *)0x0) {
    pMVar21 = (MainActor *)0x0;
    do {
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        if (*(MainActor **)(((ulong)_Var8.unknown & 0xffffffffffffff8) + 0x10) <= pMVar21) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3ff4);
          (*pcVar4)();
        }
        pMVar9 = *(MainActor **)(_Var8.unknown + (long)pMVar21 * 8 + 0x20);
      }
      else {
        pMVar9 = pMVar21;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar21,_Var8);
      }
      if (SCARRY8((long)pMVar21,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000a3ff0);
        (*pcVar4)();
      }
      pMVar23 = pMVar21 + 1;
      uVar22 = *(undefined8 *)(unaff_x22 + 0x1d8);
      pMVar10 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x1c8),pMVar9);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ScreensharingPrivacyManager.swift",0x27,1,0x3b,UVar11.unknown,uVar22);
      }
      uVar24 = *(undefined8 *)(lVar17 + 0x18);
      uVar22 = *(undefined8 *)(lVar17 + 0x10);
      uVar19 = *(undefined8 *)(lVar17 + 0x28);
      uVar15 = *(undefined8 *)(lVar17 + 0x20);
      uVar25 = *(undefined8 *)(lVar17 + 0x38);
      uVar20 = *(undefined8 *)(lVar17 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar17 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x70) = uVar25;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar24;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar22;
      uVar22 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
      _swift_retain(uVar22);
      _swift_retain(uVar24);
      _swift_retain(uVar20);
      _swift_retain(uVar19);
      _swift_retain(uVar15);
      FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
      FUN_1002ca7e0(unaff_x22 + 0x161);
      _swift_release(uVar22);
      _swift_release(uVar24);
      _swift_release(uVar20);
      _swift_release(uVar19);
      _swift_release(uVar15);
      objc_stub::setSharingType_((ID)pMVar9,(ulong)*(byte *)(unaff_x22 + 0x161));
      _swift_release(pMVar10);
      pMVar21 = pMVar21 + 1;
    } while (pMVar23 != pMVar18);
  }
  _swift_bridgeObjectRelease(_Var8.unknown);
  FUN_100004594(unaff_x22 + 0xf8);
  FUN_1000da768(unaff_x22 + 0x168);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x168);
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar13);
  IVar5 = SMAppService::status(IVar5);
  _swift_release(uVar22);
  puVar16 = *(undefined8 **)(unaff_x22 + 0x1b0);
  if (IVar5 == 1) {
    FUN_1000da768(unaff_x22 + 0x178,0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x178);
    FUN_1004010d4(puVar16);
    FUN_1003feee0(*puVar16,puVar16[1]);
  }
  else {
    FUN_1000da768(unaff_x22 + 0x170,0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x170);
    FUN_1004010d4(puVar16);
    FUN_1003fea8c(puVar16);
  }
  _swift_release(uVar22);
  FUN_10005241c(puVar16,FUN_1003efa8c);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1c0);
  pMVar18 = *(MainActor **)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
  pMVar9 = *(MainActor **)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x163);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x162);
  (**(code **)(unaff_x22 + 0x208))(uVar15,1,1,*(undefined8 *)(unaff_x22 + 0x200));
  pMVar21 = pMVar9;
  _swift_retain_n(pMVar9,2);
  pMVar18 = Swift::MainActor::get_shared(pMVar18,pMVar21);
  puVar14 = &DAT_100eb3d80;
  _swift_allocObject(&DAT_100eb3d80,0x41,7);
  *(MainActor **)(puVar14 + 0x10) = pMVar18;
  *(undefined8 *)(puVar14 + 0x18) = uVar19;
  *(MainActor **)(puVar14 + 0x20) = pMVar9;
  puVar14[0x28] = uVar3;
  *(code **)(puVar14 + 0x30) = FUN_1000aa094;
  *(MainActor **)(puVar14 + 0x38) = pMVar9;
  puVar14[0x40] = uVar2;
  FUN_1000645b0(0,0,uVar15,&DAT_100c291e8,puVar14);
  _swift_release();
  _swift_release(pMVar9);
  FUN_100004594(unaff_x22 + 0xa8);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar24);
                    /* WARNING: Could not recover jumptable at 0x0001000a41cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a41d8 | FUN_1000a41d8 */

void FUN_1000a41d8(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x218);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x220));
  _swift_release(uVar2);
  _swift_task_switch(FUN_1000a4228,*(undefined8 *)(lVar1 + 0x1e0),*(undefined8 *)(lVar1 + 0x1e8));
  return;
}



/* Address: 0x1000a4228 | FUN_1000a4228 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000a4228(void)

{
  _CocoaArrayWrapper _Var1;
  undefined1 uVar2;
  undefined1 uVar3;
  MainActor *pMVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  long *plVar8;
  _ArrayBuffer _Var9;
  MainActor *pMVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  NSString *pNVar13;
  MainActor *pMVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long unaff_x22;
  undefined8 uVar20;
  MainActor *pMVar21;
  code *pcVar22;
  MainActor *pMVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  pcVar22 = *(code **)(unaff_x22 + 0x208);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1d8);
  pMVar21 = *(MainActor **)(unaff_x22 + 0x1c8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
  pMVar14 = *(MainActor **)(unaff_x22 + 0x1a8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1d0));
  FUN_1000da768(unaff_x22 + 400);
  uVar17 = *(undefined8 *)(unaff_x22 + 400);
  FUN_1003fd5c8(uVar18);
  FUN_1003fea8c(uVar18);
  _swift_release(uVar17);
  FUN_10005241c(uVar18,FUN_1003efa8c);
  (*pcVar22)(uVar15,1,1,uVar20);
  pMVar4 = pMVar14;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(pMVar21,pMVar4);
  puVar5 = &DAT_100eb3da8;
  _swift_allocObject(&DAT_100eb3da8,0x28,7);
  *(MainActor **)(puVar5 + 0x10) = pMVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar24;
  *(MainActor **)(puVar5 + 0x20) = pMVar14;
  FUN_1000645b0(0,0,uVar15,&DAT_100c29200,puVar5);
  _swift_release();
  FUN_1000da768(unaff_x22 + 0x198);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x198);
  FUN_1000adc6c(1);
  _swift_release(uVar18);
  puVar5 = PTR__NSApp_100ea8fa0;
  IVar6 = *(ID *)PTR__NSApp_100ea8fa0;
  if (IVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x1000a4778);
    (*pcVar22)();
  }
  IVar7 = IVar6;
  FUN_10009d77c();
  objc_stub::setMainMenu_(IVar6,IVar7);
  objc_stub::setActivationPolicy_(IVar6,1);
  FUN_1000a6148(0);
  FUN_1000a61e0();
  FUN_1000a648c();
  FUN_1000a67e4();
  FUN_1000da768(unaff_x22 + 0xf8);
  plVar8 = (long *)(unaff_x22 + 0xf8);
  FUN_100004640(plVar8,*(undefined8 *)(unaff_x22 + 0x110));
  lVar19 = *plVar8;
  FUN_10004f664();
  FUN_10004f7d4();
  if (*(ID *)puVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x1000a477c);
    (*pcVar22)();
  }
  _Var9.unknown = (undefined *)objc_stub::windows(*(ID *)puVar5);
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var9.unknown >> 0x3e == 0) {
    pMVar4 = *(MainActor **)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var9.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
      _Var1.unknown = _Var9.unknown;
    }
    pMVar4 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (pMVar4 != (MainActor *)0x0) {
    pMVar14 = (MainActor *)0x0;
    do {
      if (((ulong)_Var9.unknown & 0xc000000000000001) == 0) {
        if (*(MainActor **)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10) <= pMVar14) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1000a4598);
          (*pcVar22)();
        }
        pMVar21 = *(MainActor **)(_Var9.unknown + (long)pMVar14 * 8 + 0x20);
      }
      else {
        pMVar21 = pMVar14;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar14,_Var9);
      }
      if (SCARRY8((long)pMVar14,1)) {
                    /* WARNING: Does not return */
        pcVar22 = (code *)SoftwareBreakpoint(1,0x1000a4594);
        (*pcVar22)();
      }
      pMVar23 = pMVar14 + 1;
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1d8);
      pMVar10 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x1c8),pMVar21);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ScreensharingPrivacyManager.swift",0x27,1,0x3b,UVar11.unknown,uVar18);
      }
      uVar24 = *(undefined8 *)(lVar19 + 0x18);
      uVar18 = *(undefined8 *)(lVar19 + 0x10);
      uVar17 = *(undefined8 *)(lVar19 + 0x28);
      uVar15 = *(undefined8 *)(lVar19 + 0x20);
      uVar25 = *(undefined8 *)(lVar19 + 0x38);
      uVar20 = *(undefined8 *)(lVar19 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar19 + 0x40);
      *(undefined8 *)(unaff_x22 + 0x70) = uVar25;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar24;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar18;
      uVar18 = *(undefined8 *)(unaff_x22 + 0x48);
      uVar24 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
      _swift_retain(uVar18);
      _swift_retain(uVar24);
      _swift_retain(uVar20);
      _swift_retain(uVar17);
      _swift_retain(uVar15);
      FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
      FUN_1002ca7e0(unaff_x22 + 0x161);
      _swift_release(uVar18);
      _swift_release(uVar24);
      _swift_release(uVar20);
      _swift_release(uVar17);
      _swift_release(uVar15);
      objc_stub::setSharingType_((ID)pMVar21,(ulong)*(byte *)(unaff_x22 + 0x161));
      _swift_release(pMVar10);
      pMVar14 = pMVar14 + 1;
    } while (pMVar23 != pMVar4);
  }
  _swift_bridgeObjectRelease(_Var9.unknown);
  FUN_100004594(unaff_x22 + 0xf8);
  FUN_1000da768(unaff_x22 + 0x168);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar13);
  IVar6 = SMAppService::status(IVar6);
  _swift_release(uVar18);
  puVar16 = *(undefined8 **)(unaff_x22 + 0x1b0);
  if (IVar6 == 1) {
    FUN_1000da768(unaff_x22 + 0x178,0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x178);
    FUN_1004010d4(puVar16);
    FUN_1003feee0(*puVar16,puVar16[1]);
  }
  else {
    FUN_1000da768(unaff_x22 + 0x170,0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x170);
    FUN_1004010d4(puVar16);
    FUN_1003fea8c(puVar16);
  }
  _swift_release(uVar18);
  FUN_10005241c(puVar16,FUN_1003efa8c);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1c0);
  pMVar4 = *(MainActor **)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
  pMVar21 = *(MainActor **)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x163);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x162);
  (**(code **)(unaff_x22 + 0x208))(uVar15,1,1,*(undefined8 *)(unaff_x22 + 0x200));
  pMVar14 = pMVar21;
  _swift_retain_n(pMVar21,2);
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar14);
  puVar5 = &DAT_100eb3d80;
  _swift_allocObject(&DAT_100eb3d80,0x41,7);
  *(MainActor **)(puVar5 + 0x10) = pMVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar17;
  *(MainActor **)(puVar5 + 0x20) = pMVar21;
  puVar5[0x28] = uVar3;
  *(code **)(puVar5 + 0x30) = FUN_1000aa094;
  *(MainActor **)(puVar5 + 0x38) = pMVar21;
  puVar5[0x40] = uVar2;
  FUN_1000645b0(0,0,uVar15,&DAT_100c291e8,puVar5);
  _swift_release();
  _swift_release(pMVar21);
  FUN_100004594(unaff_x22 + 0xa8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar24);
                    /* WARNING: Could not recover jumptable at 0x0001000a4770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a477c | FUN_1000a477c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a477c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long ***ppplVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long ****pppplVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *puVar9;
  NSHostingController *pNVar10;
  long ****pppplVar11;
  undefined8 extraout_x1;
  undefined8 uVar12;
  uint uVar13;
  long *unaff_x20;
  long ***local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  undefined **ppuStack_148;
  long **local_140;
  long ***local_138 [3];
  undefined8 local_120;
  undefined **local_118;
  undefined **ppuStack_110;
  ID local_108;
  undefined2 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a4ae4);
    (*pcVar2)();
  }
  objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
  if (DAT_100fab0a8 != 0) {
    objc_stub::makeKeyAndOrderFront_(DAT_100fab0a8,0);
    return;
  }
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  ppplVar3 = (long ***)0x1;
  FUN_10021d6dc(1,5);
  uVar4 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar3 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_80,1,0);
  uVar12 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = thunk_FUN_10009faa4;
  puVar1[1] = 0;
  FUN_100004550(uVar12,uVar5);
  puVar1 = (undefined8 *)((long)ppplVar3 + _TtC12PasteRouting16WindowTransition::onDismissed);
  uVar13 = 0;
  _swift_beginAccess(puVar1,auStack_98,1);
  uVar12 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = FUN_10009fad8;
  puVar1[1] = 0;
  FUN_100004550(uVar12,uVar5);
  local_118 = &PTR_PTR_100ebe110;
  uVar5 = 0;
  local_138[0] = ppplVar3;
  local_120 = uVar4;
  FUN_1001adc9c();
  uVar4 = 7;
  _swift_allocObject();
  pppplVar6 = local_138;
  FUN_1001ad514();
  IVar7 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  uVar12 = extraout_x1;
  FUN_1000f50ac();
  if ((uVar13 & 0xff) != 1) {
    FUN_1000f4a7c(IVar7,uVar12,uVar4);
    puVar8 = &DAT_100c292a0;
    _swift_getKeyPath(&DAT_100c292a0);
    puVar9 = &DAT_100fab360;
    FUN_1000037f0(&DAT_100fab360,&DAT_100c292d0);
    _swift_initStackObject();
    FUN_1000da6e0(puVar8,puVar9);
    local_118 = &PTR_PTR_100ebe100;
    ppuStack_110 = &PTR_PTR_100ec6cd0;
    local_f8 = 0x101;
    local_e0 = FUN_10009fae8;
    uStack_d8 = 0;
    local_138[0] = (long ***)pppplVar6;
    local_120 = uVar5;
    local_108 = IVar7;
    local_f0 = param_1;
    uStack_e8 = param_2;
    _swift_retain(pppplVar6);
    _swift_retain(param_2);
    FUN_1000da768(&local_168);
    (*(code *)local_168)(&local_140,local_138);
    _swift_release(uStack_160);
    local_168 = (long ***)local_140;
    pNVar10 = (NSHostingController *)&DAT_100fab368;
    FUN_1000037f0(&DAT_100fab368,&DAT_100c292d8);
    _objc_allocWithZone();
    _swift_retain(local_140);
    pppplVar11 = &local_168;
    SwiftUI::NSHostingController::_init(pNVar10,pppplVar11);
    (*(code *)(*pppplVar6)[0xd])(pppplVar11);
    ppuStack_148 = &PTR_PTR_100ebe0e8;
    local_168 = (long ***)pppplVar6;
    local_150 = uVar5;
    (**(code **)(*unaff_x20 + 0x88))(&local_168,0,0);
    _swift_release(local_140);
    _swift_release(puVar8);
    FUN_1000aa5cc(local_138);
    FUN_100004594(&local_168);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a4ae8);
  (*pcVar2)();
}



/* Address: 0x1000a4ae8 | FUN_1000a4ae8 */

void FUN_1000a4ae8(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x78) = pMVar2;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x80) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x88) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x90) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x98) = puVar3;
  _swift_task_switch(FUN_1000a4b80,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000a4b80 | FUN_1000a4b80 */

void FUN_1000a4b80(MainActor *param_1)

{
  byte bVar1;
  MainActor *pMVar2;
  long *plVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  long unaff_x22;
  String isolation;
  
  pMVar2 = Swift::MainActor::get_shared(*(MainActor **)(unaff_x22 + 0x78),param_1);
  *(MainActor **)(unaff_x22 + 0xa0) = pMVar2;
  *(long *)(unaff_x22 + 0x60) = unaff_x22 + 0x68;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1000a4c90;
    isolation.bridgeObject = pMVar2;
    isolation.str = (char *)plVar3;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  if (pMVar2 == (MainActor *)0x0) {
    UVar4.unknown = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    _swift_getObjectType(pMVar2);
    UVar4 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1000a4cdc,UVar4.unknown,uVar5);
  return;
}



/* Address: 0x1000a4c90 | FUN_1000a4c90 */

void FUN_1000a4c90(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0xa0);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1000a4ee4,*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x98));
  return;
}



/* Address: 0x1000a4cdc | FUN_1000a4cdc */

void FUN_1000a4cdc(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  CheckedContinuation<undefined,undefined> CVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x22;
  undefined8 uVar9;
  MainActor *pMVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  String function;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  pMVar10 = *(MainActor **)(unaff_x22 + 0x78);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1000a4ea8;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar1 = &DAT_100fa80f8;
  FUN_1000037f0(&DAT_100fa80f8,&DAT_100c25238);
  lVar12 = *(long *)(puVar1 + -8);
  lVar11 = *(long *)(lVar12 + 0x40);
  uVar6 = lVar11 + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  function.bridgeObject = (void *)0x8000000100d8f550;
  function.str = (char *)0xd000000000000014;
  CVar3 = Swift::CheckedContinuation::init(continuation,function);
  pMVar10 = Swift::MainActor::get_shared(pMVar10,(MainActor *)CVar3.unknown);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/Router+WhatsNew.swift",0x1b,1,0x43,UVar4.unknown,uVar9);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar12 + 0x10))();
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100eb3e98;
  _swift_allocObject(&DAT_100eb3e98,uVar13 + lVar11,uVar8 | 7);
  (**(code **)(lVar12 + 0x20))(puVar7 + uVar13,uVar6,puVar1);
  FUN_1000a4f14(FUN_1000aa358,puVar7);
  _swift_release(puVar7);
  _swift_release(pMVar10);
  _swift_release(uVar9);
  _swift_task_dealloc(uVar6);
  (**(code **)(lVar12 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1000a4ea8 | FUN_1000a4ea8 */

void FUN_1000a4ea8(void)

{
  long *unaff_x22;
  
  _swift_task_switch(FUN_1000a4ee4,*(undefined8 *)(*unaff_x22 + 0x90),
                     *(undefined8 *)(*unaff_x22 + 0x98));
  return;
}



/* Address: 0x1000a4ee4 | FUN_1000a4ee4 */

void FUN_1000a4ee4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x0001000a4f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1000a4f14 | FUN_1000a4f14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000a5118 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000a4f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long ***ppplVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  undefined8 uVar8;
  long ****pppplVar9;
  NSHostingController *pNVar10;
  long ****pppplVar11;
  long *unaff_x20;
  long ***local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  long ***local_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (DAT_100fab0a8 != 0) {
    objc_stub::makeKeyAndOrderFront_(DAT_100fab0a8,0);
    return;
  }
  FUN_10000ec2c(0,&DAT_100fa6f50,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  ppplVar3 = (long ***)0x0;
  FUN_10021d6dc(0,5);
  uVar4 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar3 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar6 = *puVar1;
  uVar8 = puVar1[1];
  *puVar1 = thunk_FUN_10009faa4;
  puVar1[1] = 0;
  FUN_100004550(uVar6,uVar8);
  puVar5 = &DAT_100eb3ec0;
  _swift_allocObject(&DAT_100eb3ec0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  puVar1 = (undefined8 *)((long)ppplVar3 + _TtC12PasteRouting16WindowTransition::onDismissed);
  _swift_beginAccess(puVar1,auStack_90,1,0);
  uVar6 = *puVar1;
  uVar8 = puVar1[1];
  *puVar1 = FUN_1000aa420;
  puVar1[1] = puVar5;
  _swift_retain(param_2);
  FUN_100004550(uVar6,uVar8);
  ppuStack_98 = &PTR_PTR_100ebe110;
  uVar6 = 0;
  local_b8 = ppplVar3;
  local_a0 = (long ***)uVar4;
  FUN_1001adc9c();
  _swift_allocObject();
  pppplVar7 = &local_b8;
  FUN_1001ad514();
  uVar8 = 0;
  FUN_100021014();
  _swift_allocObject();
  pppplVar9 = pppplVar7;
  _swift_retain(pppplVar7);
  FUN_1000a9dfc();
  puVar5 = &DAT_100fab350;
  FUN_100003a00(&DAT_100fab350,FUN_100021014,&TargetProtocolConformanceDescriptor_100c242a0);
  _swift_retain(pppplVar7);
  _swift_retain(pppplVar9);
  local_b8 = (long ***)SwiftUI::ObservedObject::init(puVar5,uVar8,puVar5);
  local_a8 = FUN_1000aa428;
  pNVar10 = (NSHostingController *)&DAT_100fab358;
  uStack_b0 = uVar8;
  local_a0 = (long ***)pppplVar7;
  FUN_1000037f0(&DAT_100fab358,&DAT_100c29288);
  _objc_allocWithZone();
  _swift_retain(uVar8);
  _swift_retain(pppplVar7);
  pppplVar11 = &local_b8;
  SwiftUI::NSHostingController::_init(pNVar10,pppplVar11);
  (*(code *)(*pppplVar7)[0xd])(pppplVar11);
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
    ppuStack_98 = &PTR_PTR_100ebe0e8;
    local_b8 = (long ***)pppplVar7;
    local_a0 = (long ***)uVar6;
    (**(code **)(*unaff_x20 + 0x88))(&local_b8,0,0);
    _swift_release(pppplVar7);
    _swift_release(uVar8);
    _swift_release(pppplVar9);
    FUN_100004594(&local_b8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000a5224);
  (*pcVar2)();
}



/* Address: 0x1000a5224 | FUN_1000a5224 */

undefined1 FUN_1000a5224(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x160,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x20 + 400);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_81;
}



/* Address: 0x1000a5300 | FUN_1000a5300 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_1000a5300(void)

{
  ID self;
  ID IVar1;
  byte bVar2;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0xd0);
  if (((self == 0) || (IVar1 = objc_stub::window(self), IVar1 == 0)) ||
     (IVar1 = objc_stub::isVisible(IVar1), (int)IVar1 == 0)) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(self + _TtC5Paste20MainWindowController::closing) ^ 1;
  }
  return bVar2 & 1;
}



/* Address: 0x1000a5384 | FUN_1000a5384 */

void FUN_1000a5384(MainActor *param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  long extraout_x8;
  
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = param_1;
  _swift_retain();
  pMVar3 = Swift::MainActor::get_shared(this,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100eb3f88;
  _swift_allocObject(&DAT_100eb3f88,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar3;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(MainActor **)(puVar1 + 0x20) = param_1;
  FUN_1000645b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c29328,puVar1);
  _swift_release();
  return;
}



/* Address: 0x1000a5488 | FUN_1000a5488 */

void FUN_1000a5488(void)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x18) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x20) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x30) = pMVar4;
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x38) = UVar6.unknown;
  *(undefined8 **)(unaff_x22 + 0x40) = puVar5;
  _swift_task_switch(FUN_1000a5540,UVar6.unknown,puVar5);
  return;
}


