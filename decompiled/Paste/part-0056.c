/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000aa750 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  FUN_1000aa754();
  return;
}



/* Address: 0x1000aa754 | FUN_1000aa754 */

void FUN_1000aa754(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000aa780 | thunk_FUN_1000aa3ec */

void thunk_FUN_1000aa3ec(void)

{
  FUN_1000aa3ec();
  return;
}



/* Address: 0x1000aa784 | thunk_FUN_1000aa3ec */

void thunk_FUN_1000aa3ec(void)

{
  FUN_1000aa3ec();
  return;
}



/* Address: 0x1000aa788 | thunk_FUN_1000aa3ec */

void thunk_FUN_1000aa3ec(void)

{
  FUN_1000aa3ec();
  return;
}



/* Address: 0x1000aa78c | thunk_FUN_1000aa3ec */

void thunk_FUN_1000aa3ec(void)

{
  FUN_1000aa3ec();
  return;
}



/* Address: 0x1000aa790 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1000aa794 | thunk_FUN_1000aa430 */

void thunk_FUN_1000aa430(void)

{
  thunk_FUN_1000aa430();
  return;
}



/* Address: 0x1000aa798 | thunk_FUN_1000aa358 */

void thunk_FUN_1000aa358(void)

{
  FUN_1000aa494(FUN_100037f28);
  return;
}



/* Address: 0x1000aa79c | thunk_FUN_1000aa430 */

void thunk_FUN_1000aa430(void)

{
  thunk_FUN_1000aa430();
  return;
}



/* Address: 0x1000aa7a0 | thunk_FUN_1000aa430 */

void thunk_FUN_1000aa430(void)

{
  thunk_FUN_1000aa430();
  return;
}



/* Address: 0x1000aa7a4 | thunk_FUN_1000a9978 */

void thunk_FUN_1000a9978(void)

{
  FUN_1000a94d4();
  return;
}



/* Address: 0x1000aa7a8 | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1000aa7ac | FUN_1000aa7ac */

void FUN_1000aa7ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90 [3];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar3 = &DAT_100c29358;
  _swift_getKeyPath(&DAT_100c29358);
  puVar4 = puVar3;
  FUN_100009bac();
  FUN_1002cb7e0(&local_78,puVar3,puVar4);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x10) = local_78;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x20) = local_68;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x30) = local_58;
  *(undefined8 *)(unaff_x20 + 0x40) = local_48;
  puVar3 = &DAT_100c29380;
  _swift_getKeyPath();
  puVar4 = &DAT_100faa880;
  FUN_1000037f0(&DAT_100faa880,&DAT_100c29bd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  _swift_retain();
  FUN_1000da768(local_90);
  _swift_release(puVar3);
  puVar3 = &DAT_100eb4030;
  _swift_allocObject(&DAT_100eb4030,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  _swift_beginAccess(local_90[0] + 0x40,local_90,1,0);
  uVar1 = *(undefined8 *)(local_90[0] + 0x40);
  uVar2 = *(undefined8 *)(local_90[0] + 0x48);
  *(code **)(local_90[0] + 0x40) = FUN_1000aaf80;
  *(undefined **)(local_90[0] + 0x48) = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar1,uVar2);
  _swift_release(puVar3);
  _swift_beginAccess(local_90[0] + 0x50,auStack_a8,1,0);
  uVar1 = *(undefined8 *)(local_90[0] + 0x50);
  uVar2 = *(undefined8 *)(local_90[0] + 0x58);
  *(code **)(local_90[0] + 0x50) = FUN_1000aaa9c;
  *(undefined8 *)(local_90[0] + 0x58) = 0;
  FUN_100004550(uVar1,uVar2);
  _swift_beginAccess(local_90[0] + 0x60,auStack_c0,1,0);
  uVar1 = *(undefined8 *)(local_90[0] + 0x60);
  uVar2 = *(undefined8 *)(local_90[0] + 0x68);
  *(code **)(local_90[0] + 0x60) = FUN_1000aab70;
  *(undefined8 *)(local_90[0] + 0x68) = 0;
  FUN_100004550(uVar1,uVar2);
  _swift_release(local_90[0]);
  return;
}



/* Address: 0x1000aa940 | FUN_1000aa940 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000aa940(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_c0;
  long local_b8;
  undefined8 local_b0;
  long lStack_a8;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uStack_78 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    local_90 = uVar3;
    uStack_88 = uVar5;
    local_80 = uVar6;
    local_70 = uVar4;
    local_60 = uVar2;
    _swift_retain(uVar3);
    _swift_retain(uVar5);
    _swift_retain(uVar6);
    _swift_retain(uVar4);
    _swift_retain(uVar2);
    FUN_1000037f0(&DAT_100fa8320,&DAT_100c25378);
    FUN_1002ca7e0(&local_c0);
    _swift_release(uVar2);
    _swift_release(uVar4);
    _swift_release(uVar6);
    _swift_release(uVar5);
    _swift_release(uVar3);
    if (local_b8 == 0) {
      _swift_release(param_1);
    }
    else {
      local_b0 = local_c0;
      lStack_a8 = local_b8;
      puVar1 = &DAT_100fa81f0;
      FUN_1000037f0(&DAT_100fa81f0,&DAT_100c2ae00);
      FUN_100357f60(&local_98,FUN_10004e630,&local_c0,puVar1);
      _swift_release(param_1);
      if (local_98 == 0) {
        _swift_bridgeObjectRelease(local_b8);
      }
    }
  }
  return;
}



/* Address: 0x1000aaa9c | FUN_1000aaa9c */

undefined1 FUN_1000aaa9c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_11;
  
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_100357f60(&local_11,FUN_1000aaf90,auStack_40,PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_11;
}



/* Address: 0x1000aaad8 | FUN_1000aaad8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000aaad8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003595f8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x20))(param_3,param_4,local_50,lStack_48);
  FUN_100004594(auStack_68);
  *(bool *)param_1 = param_3 != 0;
  return;
}



/* Address: 0x1000aab70 | FUN_1000aab70 */

undefined8 FUN_1000aab70(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = &DAT_100fa9400;
  local_20 = param_1;
  FUN_1000037f0(&DAT_100fa9400,&DAT_100c263c0);
  FUN_100357f60(&local_18,FUN_1000aaf88,auStack_30,puVar1);
  return local_18;
}



/* Address: 0x1000aabbc | FUN_1000aabbc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000aabbc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  MainActor *pMVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *local_a0;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  undefined *local_68;
  
  uVar15 = *(ulong *)(param_3 + 0x10);
  if (uVar15 == 0) {
    local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar14 = 0;
    local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      uVar2 = uVar14;
      if (uVar14 <= uVar15) {
        uVar2 = uVar15;
      }
      puVar13 = (undefined8 *)(param_3 + 0x28 + uVar14 * 0x10);
      uVar14 = uVar14 + 1;
      while( true ) {
        if (uVar14 - uVar2 == 1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1000aadcc);
          (*pcVar6)();
        }
        lVar1 = puVar13[-1];
        pMVar3 = (MainActor *)*puVar13;
        pMVar7 = Swift::MainActor::typeMetadataAccessor();
        pMVar8 = pMVar3;
        _swift_bridgeObjectRetain();
        pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar8);
        pMVar8 = pMVar7;
        FUN_1000081a8();
        UVar9 = Swift::Actor::get_unownedExecutor();
        UVar10 = UVar9;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar10.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/HandoffWiring.swift",0x19,1,0x1c,UVar9.unknown,pMVar8);
        }
        FUN_1003594c0(auStack_90);
        lVar5 = lStack_70;
        uVar4 = local_78;
        FUN_100004640(auStack_90,local_78);
        lVar11 = lVar1;
        (**(code **)(lVar5 + 0x20))(lVar1,pMVar3,uVar4,lVar5);
        if (lVar11 != 0) break;
        FUN_100004594(auStack_90);
        _swift_release(pMVar7);
        _swift_bridgeObjectRelease(pMVar3);
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 2;
        if (uVar14 - uVar15 == 1) goto LAB_1000aada0;
      }
      FUN_100004594(auStack_90);
      _swift_release(pMVar7);
      puVar12 = local_a0;
      _swift_isUniquelyReferenced_nonNull_native();
      local_68 = local_a0;
      if (((ulong)puVar12 & 1) == 0) {
        FUN_100071750(0,*(long *)(local_a0 + 0x10) + 1,1);
      }
      uVar2 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar2) {
        FUN_100071750(1 < *(ulong *)(local_68 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar2 + 1;
      *(long *)(local_68 + uVar2 * 0x10 + 0x20) = lVar1;
      *(MainActor **)(local_68 + uVar2 * 0x10 + 0x28) = pMVar3;
      local_a0 = local_68;
    } while (uVar14 != uVar15);
  }
LAB_1000aada0:
  *param_1 = local_a0;
  return;
}



/* Address: 0x1000aadcc | FUN_1000aadcc */

void FUN_1000aadcc(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [24];
  ulong local_60;
  long lStack_58;
  
  FUN_1003594c0(auStack_78);
  lVar2 = lStack_58;
  uVar1 = local_60;
  FUN_100004640(auStack_78,local_60);
  (**(code **)(lVar2 + 0x20))(param_3,param_4,uVar1,lVar2);
  if (param_3 == 0) {
    FUN_100004594(auStack_78);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar3 = auStack_78;
    FUN_100004594();
    FUN_10031bc94();
    if (puVar3 == (undefined1 *)0x0) {
      FUN_1003595f8(auStack_78);
      FUN_100004640(auStack_78,local_60);
      (**(code **)(lStack_58 + 0x28))(local_60,lStack_58);
      *param_1 = param_3;
      param_1[1] = local_60 | 0x4000000000000000;
      FUN_100004594(auStack_78);
    }
    else {
      *param_1 = param_3;
      param_1[1] = (ulong)puVar3 | 0x8000000000000000;
    }
  }
  return;
}



/* Address: 0x1000aaec4 | FUN_1000aaec4 */

void FUN_1000aaec4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000aaf34 | FUN_1000aaf34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000aaf34(void)

{
  return ZEXT816(0x100fab3d8);
}



/* Address: 0x1000aaf54 | thunk_FUN_1000b0718 */

void thunk_FUN_1000b0718(void)

{
  FUN_1000b0718();
  return;
}



/* Address: 0x1000aaf58 | thunk_FUN_10008d8dc */

void thunk_FUN_10008d8dc(void)

{
  FUN_10008d8dc();
  return;
}



/* Address: 0x1000aaf5c | FUN_1000aaf5c */

void FUN_1000aaf5c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000aaf80 | FUN_1000aaf80 */

void FUN_1000aaf80(void)

{
  FUN_1000aa940();
  return;
}



/* Address: 0x1000aaf88 | FUN_1000aaf88 */

void FUN_1000aaf88(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000aabbc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000aaf90 | FUN_1000aaf90 */

void FUN_1000aaf90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000aaad8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000aaf98 | FUN_1000aaf98 */

undefined1  [16] FUN_1000aaf98(void)

{
  return ZEXT816(0x100eb40b8);
}



/* Address: 0x1000aafa8 | FUN_1000aafa8 */

void FUN_1000aafa8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c29400;
  _swift_getKeyPath(&DAT_100c29400);
  puVar2 = &DAT_100c29428;
  _swift_getKeyPath(&DAT_100c29428);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000ab010 | FUN_1000ab010 */

void FUN_1000ab010(Published *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  puVar1 = &DAT_100c29400;
  _swift_getKeyPath(&DAT_100c29400);
  puVar2 = &DAT_100c29428;
  _swift_getKeyPath(&DAT_100c29428);
  FUN_100094f48(param_1,&stack0xffffffffffffffc0 + -extraout_x8);
  _swift_retain(uVar3);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffc0 + -extraout_x8,uVar3,puVar1,puVar2);
  return;
}



/* Address: 0x1000ab0cc | FUN_1000ab0cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ab364 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1000ab0cc(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Published PVar3;
  OS_dispatch_queue *pOVar4;
  SchedulerOptions SVar5;
  undefined8 *puVar6;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  undefined4 local_84;
  long local_80;
  OS_dispatch_queue *local_78 [3];
  
  puVar1 = &DAT_100fa7510;
  local_84 = param_1;
  FUN_1000037f0(&DAT_100fa7510,&DAT_100c24330);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_d0 - extraout_x8;
  puVar1 = &DAT_100faacb0;
  FUN_1000037f0(&DAT_100faacb0,&DAT_100c28508);
  local_c8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fab450;
  FUN_1000037f0(&DAT_100fab450,&DAT_100c293e0);
  local_b8 = *(long *)(puVar2 + -8);
  local_c0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (lVar8 - extraout_x8_00) - extraout_x8_01;
  puVar2 = &DAT_100fab458;
  FUN_1000037f0(&DAT_100fab458,&DAT_100c293e8);
  local_a8 = *(long *)(puVar2 + -8);
  local_b0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fab460;
  FUN_1000037f0(&DAT_100fab460,&DAT_100c293f0);
  local_90 = *(long *)(puVar2 + -8);
  local_a0 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (lVar9 - extraout_x8_02) - extraout_x8_03;
  puVar2 = &DAT_100fab468;
  FUN_1000037f0(&DAT_100fab468,&DAT_100c293f8);
  local_80 = *(long *)(puVar2 + -8);
  local_98 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = param_2;
  _swift_beginAccess(param_2 + _TtC5Paste29SubscriptionSettingsViewModel::_activeLicense,local_78,
                     0x21,0);
  PVar3.unknown = &DAT_100faaca8;
  FUN_1000037f0(&DAT_100faaca8,&DAT_100c28500);
  Combine::Published::_get_projectedValue(PVar3);
  _swift_endAccess(local_78);
  pOVar4 = (OS_dispatch_queue *)0x0;
  FUN_10002137c();
  local_78[0] = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar4);
  SVar5 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar5.unknown + -8) + 0x38))(lVar8,1,1,SVar5.unknown);
  puVar2 = &DAT_100fab470;
  FUN_100016eac(&DAT_100fab470,&DAT_100faacb0,&DAT_100c28508,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar6 = &DAT_100fa7538;
  FUN_100003a00(&DAT_100fa7538,FUN_10002137c,
                PTR_Dispatch____C__OS_dispatch_queue_>Combine__Scheduler_100eae780);
  (extension_Combine)::Combine::Publisher::_receive(lVar9,puVar6,lVar8,puVar1,pOVar4,puVar2,puVar6);
  FUN_100005808(lVar8,&DAT_100fa7510,&DAT_100c24330);
  (**(code **)(local_c8 + 8))(lVar8 - extraout_x8_00,puVar1);
  puVar1 = &DAT_100eb4108;
  _swift_allocObject(&DAT_100eb4108,0x20,7);
  lVar8 = local_d0;
  puVar1[0x10] = (char)local_84;
  *(long *)(puVar1 + 0x18) = local_d0;
  FUN_100016eac(&DAT_100fab478,&DAT_100fab450,&DAT_100c293e0,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
               );
  _swift_retain(lVar8);
  puVar2 = local_c0;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar1);
  (**(code **)(local_b8 + 8))(lVar9,puVar2);
  FUN_100016eac(&DAT_100fab480,&DAT_100fab458,&DAT_100c293e8,
                PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
               );
  FUN_1000774d4();
  puVar1 = local_b0;
  (extension_Combine)::Combine::Publisher::_removeDuplicates();
  (**(code **)(local_a8 + 8))(lVar9 - extraout_x8_02,puVar1);
  FUN_100016eac(&DAT_100fab488,&DAT_100fab460,&DAT_100c293f0,
                PTR_Combine__Combine__Publishers__RemoveDuplicates<undefined>_>Combine__Publisher_100ea9680
               );
  puVar1 = local_a0;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  (**(code **)(local_90 + 8))(lVar10,puVar1);
  FUN_100016eac(&DAT_100fab490,&DAT_100fab468,&DAT_100c293f8,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  puVar1 = local_98;
  AVar7 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_80 + 8))(lVar10 - extraout_x8_04,puVar1);
  return AVar7.unknown;
}



/* Address: 0x1000ab560 | FUN_1000ab560 */

void FUN_1000ab560(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar12;
  String SVar13;
  
  puVar3 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &stack0xffffffffffffffa0 + -extraout_x8;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "Paste/SubscriptionSettingsPane.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsPane.swift",0x24,1,0x14,UVar7.unknown,puVar6);
  }
  FUN_10020ca48();
  uVar1 = *(undefined8 *)pcVar8;
  uVar2 = *(undefined8 *)(pcVar8 + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001e2d54(puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar13 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (puVar12 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  puVar3 = &DAT_100c29400;
  _swift_getKeyPath(&DAT_100c29400);
  puVar9 = &DAT_100c29428;
  _swift_getKeyPath(&DAT_100c29428);
  Combine::Published::_get_subscript(puVar12,param_4,puVar3,puVar9);
  _swift_release(puVar3);
  _swift_release(puVar9);
  lVar10 = 0;
  FUN_10019fee0();
  puVar11 = puVar12;
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(puVar12,1,lVar10);
  FUN_100005808(puVar12,&DAT_100fa6fa0,&DAT_100c284c0);
  _swift_release(pMVar5);
  *param_1 = 4;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(String *)(param_1 + 0x18) = SVar13;
  param_1[0x28] = (int)puVar11 == 1;
  return;
}



/* Address: 0x1000ab750 | FUN_1000ab750 */

void FUN_1000ab750(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 *puVar9;
  String SVar10;
  
  puVar3 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  uVar8 = *(undefined8 *)(unaff_x20 + 8);
  FUN_10020ca48();
  uVar1 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001e2d54(puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  SVar10 = (extension_Foundation)::Swift::String::init
                     ((LocalizedStringResource)
                      (puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  puVar3 = &DAT_100c29400;
  _swift_getKeyPath(&DAT_100c29400);
  puVar5 = &DAT_100c29428;
  _swift_getKeyPath(&DAT_100c29428);
  Combine::Published::_get_subscript(puVar9,uVar8,puVar3,puVar5);
  _swift_release(puVar3);
  _swift_release(puVar5);
  lVar6 = 0;
  FUN_10019fee0();
  puVar7 = puVar9;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar9,1,lVar6);
  FUN_100005808(puVar9,&DAT_100fa6fa0,&DAT_100c284c0);
  *param_1 = 4;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(String *)(param_1 + 0x18) = SVar10;
  param_1[0x28] = (int)puVar7 == 1;
  return;
}



/* Address: 0x1000ab8c4 | FUN_1000ab8c4 */

void FUN_1000ab8c4(void)

{
  undefined1 *unaff_x20;
  
  FUN_1000ab0cc(*unaff_x20,*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Address: 0x1000ab8d0 | FUN_1000ab8d0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ab924 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ab8d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ObservedObject<undefined> OVar3;
  ObservedObject<undefined> OVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = 0;
  FUN_100094e34();
  puVar2 = &DAT_100fab440;
  FUN_100003a00(&DAT_100fab440,FUN_100094e34,&TargetProtocolConformanceDescriptor_100c284c8);
  _swift_retain(uVar5);
  OVar3 = SwiftUI::ObservedObject::init(puVar2,uVar1,puVar2);
  param_1[3] = &DAT_100eb1ff8;
  OVar4 = OVar3;
  FUN_1000ab958();
  param_1[4] = OVar4.unknown;
  *param_1 = OVar3.unknown;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x1000ab958 | FUN_1000ab958 */

void FUN_1000ab958(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fab448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c25e6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c25e6c,&DAT_100eb1ff8);
  DAT_100fab448 = pTVar1;
  return;
}



/* Address: 0x1000ab998 | FUN_1000ab998 */

void FUN_1000ab998(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000ab9bc | FUN_1000ab9bc */

void FUN_1000ab9bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000ab560(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000ab9c8 | thunk_FUN_1000aafa8 */

void thunk_FUN_1000aafa8(void)

{
  FUN_1000aafa8();
  return;
}



/* Address: 0x1000ab9cc | thunk_FUN_1000ab010 */

void thunk_FUN_1000ab010(void)

{
  FUN_1000ab010();
  return;
}



/* Address: 0x1000ab9d0 | FUN_1000ab9d0 */

void FUN_1000ab9d0(void)

{
  FUN_1000abcec(&DAT_100c29728,&DAT_100c29750);
  return;
}



/* Address: 0x1000ab9e4 | FUN_1000ab9e4 */

void FUN_1000ab9e4(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000ab9f8 | FUN_1000ab9f8 */

void FUN_1000ab9f8(undefined1 *param_1)

{
  FUN_1000aba1c(*param_1);
  return;
}



/* Address: 0x1000aba1c | FUN_1000aba1c */

void FUN_1000aba1c(Published *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_51;
  undefined8 local_50;
  undefined1 local_41;
  
  puVar1 = &DAT_100c29728;
  _swift_getKeyPath(&DAT_100c29728);
  puVar2 = &DAT_100c29750;
  _swift_getKeyPath(&DAT_100c29750);
  local_41 = SUB81(param_1,0);
  _swift_retain();
  Combine::Published::_set_subscript(param_1,&local_41);
  FUN_1000da768(&local_50);
  _swift_getKeyPath(&DAT_100c29728);
  _swift_getKeyPath(&DAT_100c29750);
  Combine::Published::_get_subscript(&local_51);
  _swift_release(puVar1);
  _swift_release(puVar2);
  FUN_10009ac9c(local_51);
  _swift_release(local_50);
  return;
}



/* Address: 0x1000abaf8 | FUN_1000abaf8 */

void FUN_1000abaf8(void)

{
  FUN_1000abcec(&DAT_100c296e0,&DAT_100c29708);
  return;
}



/* Address: 0x1000abb0c | FUN_1000abb0c */

void FUN_1000abb0c(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x1000abb20 | FUN_1000abb20 */

void FUN_1000abb20(undefined1 *param_1)

{
  FUN_1000abb44(*param_1);
  return;
}



/* Address: 0x1000abb44 | FUN_1000abb44 */

void FUN_1000abb44(Published *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_51;
  undefined8 local_50;
  undefined1 local_41;
  
  puVar1 = &DAT_100c296e0;
  _swift_getKeyPath(&DAT_100c296e0);
  puVar2 = &DAT_100c29708;
  _swift_getKeyPath(&DAT_100c29708);
  local_41 = SUB81(param_1,0);
  _swift_retain();
  Combine::Published::_set_subscript(param_1,&local_41);
  FUN_1000da768(&local_50);
  _swift_getKeyPath(&DAT_100c296e0);
  _swift_getKeyPath(&DAT_100c29708);
  Combine::Published::_get_subscript(&local_51);
  _swift_release(puVar1);
  _swift_release(puVar2);
  FUN_1000adc6c(local_51);
  _swift_release(local_50);
  return;
}



/* Address: 0x1000abc28 | FUN_1000abc28 */

void FUN_1000abc28(void)

{
  FUN_1000abcec(&DAT_100c29878,&DAT_100c298a0);
  return;
}



/* Address: 0x1000abc3c | FUN_1000abc3c */

void FUN_1000abc3c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c29830;
  _swift_getKeyPath(&DAT_100c29830);
  puVar2 = &DAT_100c29858;
  _swift_getKeyPath(&DAT_100c29858);
  Combine::Published::_get_subscript(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000abca0 | FUN_1000abca0 */

void FUN_1000abca0(void)

{
  FUN_1000abcec(&DAT_100c297e8,&DAT_100c29810);
  return;
}



/* Address: 0x1000abcb4 | FUN_1000abcb4 */

void FUN_1000abcb4(void)

{
  FUN_1000ac08c(&_TtC5Paste24GeneralSettingsViewModel::_isStatusIconEnabled);
  return;
}



/* Address: 0x1000abcc0 | FUN_1000abcc0 */

void FUN_1000abcc0(void)

{
  FUN_1000ac08c(&_TtC5Paste24GeneralSettingsViewModel::_isSoundEffectsEnabled);
  return;
}



/* Address: 0x1000abccc | FUN_1000abccc */

void FUN_1000abccc(void)

{
  FUN_1000ac08c(&_TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  return;
}



/* Address: 0x1000abcd8 | FUN_1000abcd8 */

void FUN_1000abcd8(void)

{
  FUN_1000abcec(&DAT_100c29778,&DAT_100c297a0);
  return;
}



/* Address: 0x1000abcec | FUN_1000abcec */

undefined1 FUN_1000abcec(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_31;
  
  _swift_getKeyPath();
  _swift_getKeyPath(param_2);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(param_1);
  _swift_release(param_2);
  return local_31;
}



/* Address: 0x1000abd54 | FUN_1000abd54 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000abe94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000abd54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  SchedulerOptions SVar4;
  undefined8 uVar5;
  undefined *puVar6;
  AnyCancellable *pAVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  undefined1 auStack_a0 [24];
  AnyCancellable *local_88 [3];
  AnyCancellable *local_70;
  undefined *puStack_68;
  
  puVar1 = &DAT_100fa9d88;
  FUN_1000037f0(&DAT_100fa9d88,&DAT_100c294f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_c0 - extraout_x8;
  puVar1 = &DAT_100fab660;
  FUN_1000037f0(&DAT_100fab660,&DAT_100c297c0);
  local_c0 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar10 - extraout_x8_00;
  puVar2 = &DAT_100fab668;
  FUN_1000037f0(&DAT_100fab668,&DAT_100c297c8);
  local_b0 = *(long *)(puVar2 + -8);
  local_b8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100eb4140;
  _swift_allocObject(&DAT_100eb4140,0x38,7);
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar9 = (undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *puVar9 = 0;
  FUN_1000adb5c(puVar9,local_88);
  puVar3 = &DAT_100fab670;
  FUN_1000037f0(&DAT_100fab670,&DAT_100c297d0);
  Combine::Just::init(lVar8,puVar3,puVar3);
  local_88[0] = (AnyCancellable *)NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  SVar4 = SchedulerOptions::_typeMetadataAccessor();
  (**(code **)(*(long *)(SVar4.unknown + -8) + 0x38))(lVar10,1,1,SVar4.unknown);
  uVar5 = 0;
  FUN_10007ed28(0);
  puVar3 = &DAT_100fab678;
  FUN_100016eac(&DAT_100fab678,&DAT_100fab660,&DAT_100c297c0,
                PTR_Combine__Combine__Just<undefined>_>Combine__Publisher_100ea9870);
  puVar6 = &DAT_100fa9da8;
  FUN_100003a00(&DAT_100fa9da8,FUN_10007ed28,
                PTR_Foundation____C__NSRunLoop_>Combine__Scheduler_100ea7ac8);
  (extension_Combine)::Combine::Publisher::_receive
            (lVar8 - extraout_x8_01,puVar6,lVar10,puVar1,uVar5,puVar3,puVar6);
  FUN_10007ed6c(lVar10);
  (**(code **)(local_c0 + 8))(lVar8,puVar1);
  puVar1 = &DAT_100eb4168;
  _swift_allocObject(&DAT_100eb4168,0x18,7);
  _swift_weakInit(puVar1 + 0x10,unaff_x20);
  puVar3 = &DAT_100eb4190;
  _swift_allocObject(&DAT_100eb4190,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  FUN_100016eac(&DAT_100fab680,&DAT_100fab668,&DAT_100c297c8,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
               );
  _swift_retain(puVar2);
  puVar1 = local_b8;
  pAVar7 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  (**(code **)(local_b0 + 8))(lVar8 - extraout_x8_01,puVar1);
  local_70 = Combine::AnyCancellable::typeMetadataAccessor();
  puStack_68 = 
  PTR___protocol_witness_table_for_Combine_AnyCancellable___Combine_Cancellable_in_Combine_100ea9778
  ;
  local_88[0] = pAVar7;
  _swift_beginAccess(puVar9,auStack_a0,1,0);
  FUN_1000adc04(local_88,puVar9);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000ac080 | FUN_1000ac080 */

void FUN_1000ac080(void)

{
  FUN_1000ac08c(&_TtC5Paste24GeneralSettingsViewModel::_isPasteAsPlainTextEnabled);
  return;
}



/* Address: 0x1000ac08c | FUN_1000ac08c */

undefined1 FUN_1000ac08c(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [31];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_1);
  _swift_beginAccess(puVar1,auStack_a0,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_68 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_58 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_80 = uVar3;
  uStack_78 = uVar5;
  local_70 = uVar6;
  local_60 = uVar4;
  local_50 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return local_81;
}



/* Address: 0x1000ac170 | FUN_1000ac170 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000ac4d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000ac170(void)

{
  undefined8 *puVar1;
  Publisher PVar2;
  Publisher PVar3;
  Published PVar4;
  Publisher to;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ID IVar8;
  NSString *pNVar9;
  SchedulerOptions SVar10;
  __int64 _Var11;
  long extraout_x8;
  undefined *puVar12;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar14;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  undefined8 local_230;
  undefined *local_228;
  undefined *local_220;
  long local_218;
  undefined *local_210;
  Publisher local_208;
  long local_200;
  long local_1f8;
  undefined *local_1f0;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  undefined *local_1d0;
  Publisher local_1c8;
  Publisher local_1c0;
  undefined *local_1b8;
  Published local_1b0;
  code *local_1a8;
  Published local_1a0;
  Publisher local_198;
  code *local_190;
  code *local_188;
  Publisher local_180;
  undefined *local_178;
  undefined8 local_170 [3];
  ID local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar5 = &DAT_100faab10;
  FUN_1000037f0(&DAT_100faab10,&DAT_100c28390);
  local_1e0 = *(long *)(puVar5 + -8);
  local_1b8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1e0 + 0x40));
  puVar12 = (undefined *)((long)&local_230 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_1c8.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = puVar12 + -extraout_x12;
  puVar5 = &DAT_100fab640;
  local_1c0.unknown = puVar12;
  FUN_1000037f0(&DAT_100fab640,&DAT_100c294e8);
  local_1d8 = *(long *)(puVar5 + -8);
  local_1d0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1d8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = (long)puVar12 - extraout_x8_00;
  puVar5 = &DAT_100fa7aa0;
  local_1e8 = lVar13;
  FUN_1000037f0(&DAT_100fa7aa0,&DAT_100c28b50);
  local_1f8 = *(long *)(puVar5 + -8);
  local_1f0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1f8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar13 = lVar13 - extraout_x8_01;
  puVar5 = &DAT_100fa6670;
  local_200 = lVar13;
  FUN_1000037f0(&DAT_100fa6670,&DAT_100c28380);
  local_188 = *(code **)(puVar5 + -8);
  local_178 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_188 + 0x40));
  puVar12 = (undefined *)(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  local_208.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = puVar12 + -extraout_x12_00;
  local_180.unknown = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar5 = &DAT_100fa9d88;
  local_198.unknown = puVar12 + -extraout_x12_01;
  FUN_1000037f0(&DAT_100fa9d88,&DAT_100c294f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(puVar12 + -extraout_x12_01) - extraout_x8_03;
  puVar5 = &DAT_100fab648;
  local_190 = (code *)lVar14;
  FUN_1000037f0(&DAT_100fab648,&DAT_100c294f8);
  local_218 = *(long *)(puVar5 + -8);
  local_210 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_218 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar14 = lVar14 - extraout_x8_04;
  puVar5 = &DAT_100fab638;
  local_1a8 = (code *)lVar14;
  FUN_1000037f0(&DAT_100fab638,&DAT_100c294d8);
  local_220 = *(undefined **)(puVar5 + -8);
  local_1a0.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)local_220 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar14 - extraout_x8_05;
  lVar6 = 0;
  local_228 = (undefined *)lVar14;
  FUN_1003b2fc0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar14 - extraout_x12_02;
  puVar5 = &DAT_100fa6680;
  FUN_1000037f0(&DAT_100fa6680,&DAT_100c28470);
  lVar18 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar20 - extraout_x8_07;
  puVar12 = &DAT_100c29500;
  _swift_getKeyPath();
  puVar7 = &DAT_100fab308;
  FUN_1000037f0(&DAT_100fab308,&DAT_100c28e20);
  _swift_allocObject();
  FUN_1000da6e0(puVar12,puVar7);
  *(undefined **)(unaff_x20 + 0x10) = puVar12;
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isOpenAtLoginEnabled;
  local_a0 = 0;
  Combine::Published::init(lVar17,puVar12,PTR___type_metadata_for_Swift_Bool_100eac570);
  pcVar19 = *(code **)(lVar18 + 0x20);
  (*pcVar19)(unaff_x20 + lVar13,lVar17,puVar5);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::pasteHelper;
  puVar12 = &DAT_100c29530;
  _swift_getKeyPath();
  puVar7 = &DAT_100faa848;
  FUN_1000037f0(&DAT_100faa848,&DAT_100c27fd0);
  _swift_allocObject();
  FUN_1000da6e0(puVar12,puVar7);
  *(undefined **)(unaff_x20 + lVar13) = puVar12;
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isRunInBackgroundEnabled;
  puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_a0 = 0;
  Combine::Published::init(lVar17,puVar12,PTR___type_metadata_for_Swift_Bool_100eac570);
  (*pcVar19)(unaff_x20 + lVar13,lVar17,puVar5);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isSyncAvailable;
  local_a0 = 0;
  Combine::Published::init(lVar17,puVar12,puVar7);
  (*pcVar19)(unaff_x20 + lVar13,lVar17,puVar5);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isSyncEnabled;
  local_a0 = 0;
  Combine::Published::init(lVar17,puVar12,puVar7);
  (*pcVar19)(unaff_x20 + lVar13,lVar17,puVar5);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_syncStatus;
  _swift_storeEnumTagMultiPayload(lVar20,lVar6,5);
  FUN_10006313c(lVar20,lVar14);
  puVar7 = local_228;
  Combine::Published::init(local_228,puVar12,lVar6);
  FUN_1000629fc(lVar20);
  (**(code **)((long)local_220 + 0x20))(unaff_x20 + lVar13,puVar7,local_1a0.unknown);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isStatusIconEnabled);
  _swift_getKeyPath(&DAT_100c29560);
  FUN_1002cb7e0(&local_148);
  puVar1[1] = uStack_140;
  *puVar1 = local_148;
  puVar1[3] = uStack_130;
  puVar1[2] = local_138;
  puVar1[5] = uStack_120;
  puVar1[4] = local_128;
  puVar1[6] = local_118;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isSoundEffectsEnabled);
  _swift_getKeyPath(&DAT_100c29588);
  FUN_1002cb7e0(&local_110);
  puVar1[1] = uStack_108;
  *puVar1 = local_110;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  puVar1[5] = uStack_e8;
  puVar1[4] = local_f0;
  puVar1[6] = local_e0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isDirectPasteEnabled);
  _swift_getKeyPath(&DAT_100c295b0);
  FUN_1002cb7e0(&local_d8);
  puVar1[1] = uStack_d0;
  *puVar1 = local_d8;
  puVar1[3] = uStack_c0;
  puVar1[2] = uStack_c8;
  puVar1[5] = uStack_b0;
  puVar1[4] = local_b8;
  puVar1[6] = local_a8;
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isAccessibilityAccessEnabled;
  local_a0 = 1;
  Combine::Published::init(lVar17,puVar12,PTR___type_metadata_for_Swift_Bool_100eac570);
  local_1b0.unknown = puVar5;
  (*pcVar19)(unaff_x20 + lVar13,lVar17,puVar5);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isPasteAsPlainTextEnabled);
  _swift_getKeyPath(&DAT_100c295d8);
  FUN_1002cb7e0(&local_a0);
  puVar1[1] = uStack_98;
  *puVar1 = CONCAT71(uStack_9f,local_a0);
  puVar1[3] = uStack_88;
  puVar1[2] = uStack_90;
  puVar1[5] = uStack_78;
  puVar1[4] = local_80;
  puVar1[6] = local_70;
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::syncManager;
  puVar5 = &DAT_100c29600;
  _swift_getKeyPath();
  puVar12 = &DAT_100faa820;
  FUN_1000037f0(&DAT_100faa820,&DAT_100c25c10);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar12);
  *(undefined **)(unaff_x20 + lVar13) = puVar5;
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::accessibilityService;
  puVar5 = &DAT_100c29638;
  _swift_getKeyPath();
  puVar12 = &DAT_100fa8f60;
  FUN_1000037f0(&DAT_100fa8f60,&DAT_100c28a40);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar12);
  *(undefined **)(unaff_x20 + lVar13) = puVar5;
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::router;
  puVar5 = &DAT_100c29670;
  _swift_getKeyPath();
  puVar12 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar5,puVar12);
  *(undefined **)(unaff_x20 + lVar13) = puVar5;
  puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var11 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar5 = PTR___swiftEmptySetSingleton_100eae0e8, _Var11 != 0)) {
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::cancellables) = puVar5;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar15);
  FUN_1000da768(local_170);
  _swift_release(uVar15);
  _swift_release(local_170[0]);
  IVar8 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  IVar8 = SMAppService::status(IVar8);
  FUN_1000aba1c(IVar8 == 1);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::pasteHelper;
  uVar15 = *(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::pasteHelper);
  _swift_retain(uVar15);
  FUN_1000da768(local_170);
  _swift_release(uVar15);
  uVar15 = local_170[0];
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar8 = SMAppService::loginItemServiceWithIdentifier_((ID)&_OBJC_CLASS___SMAppService,pNVar9);
  IVar8 = SMAppService::status(IVar8);
  _swift_release(uVar15);
  FUN_1000abb44(IVar8 == 1);
  uVar16 = *(undefined8 *)(unaff_x20 + lVar13);
  _swift_retain(uVar16);
  FUN_1000da768(local_170);
  _swift_release();
  uVar15 = local_170[0];
  FUN_1000ae12c();
  local_230 = uVar16;
  _swift_release(uVar15);
  local_150 = uVar16;
  local_158 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop);
  SVar10 = SchedulerOptions::_typeMetadataAccessor();
  pcVar19 = local_190;
  (**(code **)(*(long *)(SVar10.unknown + -8) + 0x38))(local_190,1,1,SVar10.unknown);
  puVar5 = &DAT_100fa7ac8;
  FUN_1000037f0(&DAT_100fa7ac8,&DAT_100c28460);
  uVar15 = 0;
  local_220 = puVar5;
  FUN_10007ed28(0);
  puVar12 = &DAT_100fa7ad0;
  FUN_100016eac(&DAT_100fa7ad0,&DAT_100fa7ac8,&DAT_100c28460,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  puVar7 = &DAT_100fa9da8;
  local_228 = puVar12;
  FUN_100003a00(&DAT_100fa9da8,FUN_10007ed28,
                PTR_Foundation____C__NSRunLoop_>Combine__Scheduler_100ea7ac8);
  (extension_Combine)::Combine::Publisher::_receive
            (local_1a8,puVar7,pcVar19,puVar5,uVar15,puVar12,puVar7);
  FUN_10007ed6c(pcVar19);
  _swift_release(local_230);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isRunInBackgroundEnabled;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isRunInBackgroundEnabled,
                     local_170,0x21,0);
  PVar3.unknown = local_198.unknown;
  PVar4.unknown = local_1b0.unknown;
  Combine::Published::_get_projectedValue(local_1b0);
  _swift_endAccess(local_170);
  FUN_100016eac(&DAT_100fab650,&DAT_100fab648,&DAT_100c294f8,
                PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
               );
  puVar5 = local_210;
  (extension_Combine)::Combine::Publisher::_assign(PVar3);
  puVar12 = local_178;
  to.unknown = local_180.unknown;
  pcVar19 = local_188;
  local_190 = *(code **)((long)local_188 + 0x10);
  (*local_190)(local_180.unknown,PVar3.unknown,local_178);
  _swift_beginAccess(unaff_x20 + lVar13,local_170,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar13),to);
  _swift_endAccess(local_170);
  local_188 = *(code **)((long)pcVar19 + 8);
  (*local_188)(PVar3.unknown,puVar12);
  (**(code **)(local_218 + 8))(local_1a8,puVar5);
  local_1a8 = (code *)_TtC5Paste24GeneralSettingsViewModel::syncManager;
  uVar15 = *(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::syncManager);
  _swift_retain(uVar15);
  FUN_1000da768(&local_150);
  _swift_release(uVar15);
  uVar15 = local_150;
  FUN_1003b1858(PVar3.unknown);
  _swift_release(uVar15);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isSyncAvailable;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isSyncAvailable,local_170,
                     0x21,0);
  Combine::Published::_get_projectedValue(PVar4);
  _swift_endAccess(local_170);
  FUN_100016eac(&DAT_100fa7848,&DAT_100fa6670,&DAT_100c28380,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  (extension_Combine)::Combine::Publisher::_assign(to);
  PVar2.unknown = local_208.unknown;
  (*local_190)(local_208.unknown,to.unknown,puVar12);
  _swift_beginAccess(unaff_x20 + lVar13,local_170,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar13),PVar2);
  _swift_endAccess(local_170);
  pcVar19 = local_188;
  (*local_188)(to.unknown,puVar12);
  (*pcVar19)(PVar3.unknown,puVar12);
  uVar16 = *(undefined8 *)(unaff_x20 + (long)local_1a8);
  _swift_retain(uVar16);
  FUN_1000da768(local_170);
  _swift_release();
  uVar15 = local_170[0];
  FUN_1003b1db4();
  _swift_release(uVar15);
  puVar5 = &DAT_100c29698;
  local_150 = uVar16;
  _swift_getKeyPath(&DAT_100c29698);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_100016eac(&DAT_100faa8e0,&DAT_100fa7ab0,&DAT_100c26e30,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  lVar6 = local_200;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(uVar16);
  _swift_release(puVar5);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isSyncEnabled;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isSyncEnabled,local_170,0x21
                     ,0);
  Combine::Published::_get_projectedValue(PVar4);
  _swift_endAccess(local_170);
  FUN_100016eac(&DAT_100fa7ac0,&DAT_100fa7aa0,&DAT_100c28b50,
                PTR_Combine__Combine__Publishers__MapKeyPath<undefined,undefined>_>Combine__Publisher_100ea9638
               );
  puVar5 = local_1f0;
  (extension_Combine)::Combine::Publisher::_assign(PVar3);
  puVar12 = local_178;
  PVar2.unknown = local_180.unknown;
  (*local_190)(local_180.unknown,PVar3.unknown,local_178);
  _swift_beginAccess(unaff_x20 + lVar13,local_170,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar13),PVar2);
  _swift_endAccess(local_170);
  (*local_188)(PVar3.unknown,puVar12);
  (**(code **)(local_1f8 + 8))(lVar6,puVar5);
  uVar15 = *(undefined8 *)(unaff_x20 + (long)local_1a8);
  _swift_retain(uVar15);
  FUN_1000da768(local_170);
  _swift_release(uVar15);
  PVar3.unknown = local_1c0.unknown;
  FUN_1003b21c4(local_1c0.unknown);
  _swift_release(local_170[0]);
  puVar5 = &DAT_100c296c8;
  _swift_getKeyPath(&DAT_100c296c8);
  FUN_100016eac(&DAT_100faab48,&DAT_100faab10,&DAT_100c28390,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar12 = local_1b8;
  lVar6 = local_1e8;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar5);
  lVar14 = local_1e0;
  local_1a8 = *(code **)(local_1e0 + 8);
  (*local_1a8)(PVar3.unknown,puVar12);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_syncStatus;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_syncStatus,local_170,0x21,0)
  ;
  Combine::Published::_get_projectedValue(local_1a0);
  _swift_endAccess(local_170);
  FUN_100016eac(&DAT_100fab658,&DAT_100fab640,&DAT_100c294e8,
                PTR_Combine__Combine__Publishers__MapKeyPath<undefined,undefined>_>Combine__Publisher_100ea9638
               );
  puVar5 = local_1d0;
  (extension_Combine)::Combine::Publisher::_assign(PVar3);
  PVar2.unknown = local_1c8.unknown;
  (**(code **)(lVar14 + 0x10))(local_1c8.unknown,PVar3.unknown,puVar12);
  _swift_beginAccess(unaff_x20 + lVar13,local_170,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar13),PVar2);
  _swift_endAccess(local_170);
  (*local_1a8)(PVar3.unknown,puVar12);
  (**(code **)(local_1d8 + 8))(lVar6,puVar5);
  uVar16 = *(undefined8 *)(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::accessibilityService);
  _swift_retain(uVar16);
  FUN_1000da768(&local_150);
  _swift_release();
  uVar15 = local_150;
  FUN_100ae5e90();
  _swift_release(uVar15);
  lVar13 = _TtC5Paste24GeneralSettingsViewModel::_isAccessibilityAccessEnabled;
  local_158 = uVar16;
  _swift_beginAccess(unaff_x20 + _TtC5Paste24GeneralSettingsViewModel::_isAccessibilityAccessEnabled
                     ,local_170,0x21,0);
  PVar2.unknown = local_198.unknown;
  Combine::Published::_get_projectedValue(local_1b0);
  _swift_endAccess(local_170);
  (extension_Combine)::Combine::Publisher::_assign(PVar2);
  puVar5 = local_178;
  PVar3.unknown = local_180.unknown;
  (*local_190)(local_180.unknown,PVar2.unknown,local_178);
  _swift_beginAccess(unaff_x20 + lVar13,local_170,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar13),PVar3);
  _swift_endAccess(local_170);
  (*local_188)(PVar2.unknown,puVar5);
  _swift_release(uVar16);
  return;
}



/* Address: 0x1000ad0b8 | FUN_1000ad0b8 */

void FUN_1000ad0b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x28) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x30) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x38) = puVar3;
  _swift_task_switch(FUN_1000ad148,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x1000ad148 | FUN_1000ad148 */

void FUN_1000ad148(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000ad1b0;
  FUN_1003a2b14();
  return;
}



/* Address: 0x1000ad1b0 | FUN_1000ad1b0 */

void FUN_1000ad1b0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar4 + 0x40));
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    pcVar1 = FUN_1000ad22c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    _swift_errorRelease();
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar2 = *(undefined8 *)(lVar4 + 0x38);
    pcVar1 = FUN_1000ad264;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}


