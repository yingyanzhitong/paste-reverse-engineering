/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100020d34 | FUN_100020d34 */

void FUN_100020d34(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1000214c4(param_3,puVar9);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100faa890,&DAT_100c22f68);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100faa890,&DAT_100c22f68);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100faa890,&DAT_100c22f68);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x100020f84 | FUN_100020f84 */

void FUN_100020f84(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste19V5WhatsNewViewModel::_state;
  puVar2 = &DAT_100fa7508;
  FUN_1000037f0(&DAT_100fa7508,&DAT_100c242d8);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste19V5WhatsNewViewModel::telemetry));
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste19V5WhatsNewViewModel::progressObserver));
  FUN_100004594(unaff_x20 + _TtC5Paste19V5WhatsNewViewModel::router);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10002100c | FUN_10002100c */

void FUN_10002100c(void)

{
  FUN_100021014(0);
  return;
}



/* Address: 0x100021014 | FUN_100021014 */

void FUN_100021014(undefined8 param_1)

{
  if (DAT_100fa7460 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca05f0);
  return;
}



/* Address: 0x10002104c | FUN_10002104c */

void FUN_10002104c(long param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1000210d8();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_30 = &DAT_100c24268;
    puStack_28 = &DAT_100c24280;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000210d8 | FUN_1000210d8 */

void FUN_1000210d8(void)

{
  Published PVar1;
  undefined *puVar2;
  
  if (DAT_100fa7470 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100eb0b58;
  PVar1 = Combine::Published::typeMetadataAccessor();
  if (puVar2 != (undefined *)0x0) {
    return;
  }
  DAT_100fa7470 = PVar1.unknown;
  return;
}



/* Address: 0x100021128 | thunk_FUN_10002113c */

void thunk_FUN_10002113c(void)

{
  FUN_10002113c();
  return;
}



/* Address: 0x10002112c | FUN_10002112c */

void FUN_10002112c(undefined8 *param_1)

{
  FUN_10001f5c8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x10002113c | FUN_10002113c */

undefined8 * FUN_10002113c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001f60c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100021184 | FUN_100021184 */

undefined8 * FUN_100021184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_10001f60c(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10001f5c8(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1000211d8 | FUN_1000211d8 */

void FUN_1000211d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000211ec | FUN_1000211ec */

undefined8 * FUN_1000211ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10001f5c8(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100021230 | FUN_100021230 */

int FUN_100021230(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3d < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x3e;
  }
  uVar1 = (*(byte *)(param_1 + 4) & 0x3c | (uint)(*(byte *)(param_1 + 4) >> 6)) ^ 0x3f;
  if (0x3c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100021280 | FUN_100021280 */

void FUN_100021280(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x3e) {
    if (0x3d < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(byte *)(param_1 + 2) = (((byte)(-param_2 >> 2) & 0xf) + (char)param_2 * -0x10) * '\x04';
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0x3e);
    param_1[1] = 0;
    if (0x3d < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1000212d4 | FUN_1000212d4 */

uint FUN_1000212d4(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (-1 < (char)*(byte *)(param_1 + 4)) {
    uVar1 = (uint)(*(byte *)(param_1 + 4) >> 6);
  }
  return uVar1;
}



/* Address: 0x1000212f4 | FUN_1000212f4 */

void FUN_1000212f4(long param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0x3f;
  return;
}



/* Address: 0x100021304 | FUN_100021304 */

void FUN_100021304(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0x80;
    return;
  }
  *(byte *)(param_1 + 2) = (byte)param_1[2] & 3 | (byte)(param_2 << 6);
  return;
}



/* Address: 0x100021330 | FUN_100021330 */

undefined1  [16] FUN_100021330(void)

{
  return ZEXT816(0x100eb0b58);
}



/* Address: 0x100021340 | thunk_FUN_10001f4c8 */

void thunk_FUN_10001f4c8(void)

{
  FUN_10001f4c8();
  return;
}



/* Address: 0x100021344 | thunk_FUN_10001f534 */

void thunk_FUN_10001f534(void)

{
  FUN_10001f534();
  return;
}



/* Address: 0x100021348 | FUN_100021348 */

char * FUN_100021348(void)

{
  return "fractionCompleted";
}



/* Address: 0x100021354 | FUN_100021354 */

void FUN_100021354(undefined8 *param_1,ID *param_2)

{
  undefined8 extraout_d0;
  
  objc_stub::fractionCompleted(*param_2);
  *param_1 = extraout_d0;
  return;
}



/* Address: 0x10002137c | FUN_10002137c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10002137c(void)

{
  undefined *puVar1;
  
  if (DAT_100fa7528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fa7528 = puVar1;
  return;
}



/* Address: 0x1000213c0 | FUN_1000213c0 */

void FUN_1000213c0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000213e4 | FUN_1000213e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000213e4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100021410 | FUN_100021410 */

void FUN_100021410(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100020a20(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100021418 | FUN_100021418 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100021418(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10002144c | FUN_10002144c */

void FUN_10002144c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_100020b44(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1000214c4 | FUN_1000214c4 */

undefined8 FUN_1000214c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100021514 | thunk_FUN_10002113c */

void thunk_FUN_10002113c(void)

{
  FUN_10002113c();
  return;
}



/* Address: 0x100021518 | FUN_100021518 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000215b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100021518(void)

{
  Publisher PVar1;
  undefined *puVar2;
  AnyCancellable *pAVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  PVar1 = Publisher::_typeMetadataAccessor();
  puVar4 = PTR__typeMetadataAccessor_100ea79b0;
  lVar9 = *(long *)(PVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a6cc();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar8,PVar1.unknown,0);
  puVar5 = &DAT_100eb0c10;
  puVar2 = puVar5;
  _swift_allocObject(&DAT_100eb0c10,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_100003a00(&DAT_100fa6698,puVar4,PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8);
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  pcVar10 = *(code **)(lVar9 + 8);
  (*pcVar10)(puVar8,PVar1.unknown);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  Combine::AnyCancellable::store(pAVar3,(undefined *)(unaff_x20 + 0x10));
  _swift_endAccess(auStack_78);
  _swift_release();
  FUN_10037a7ec();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar8,auStack_78,0);
  puVar4 = puVar5;
  _swift_allocObject(&DAT_100eb0c10,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (*pcVar10)(puVar8,PVar1.unknown);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0x21,0);
  Combine::AnyCancellable::store(pAVar3,(undefined *)(unaff_x20 + 0x10));
  _swift_endAccess(auStack_78);
  _swift_release(pAVar3);
  _swift_allocObject(&DAT_100eb0c10,0x18,7);
  _swift_weakInit(puVar5 + 0x10);
  FUN_100385b1c(0);
  _swift_allocObject();
  _swift_retain(puVar5);
  uVar6 = 0;
  FUN_100385984(0x4024000000000000,0,FUN_100021d50,puVar5);
  _swift_release(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar6;
  _swift_release(uVar7);
  return;
}



/* Address: 0x1000217a8 | FUN_1000217a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000217a8(undefined8 param_1,long param_2)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindow.ClosedStateManager.swift",0x29,1,0x19,UVar3.unknown,puVar2);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar7 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 0x10) + 0x18);
    FUN_100357f60(&local_50,FUN_10003b058,0,PTR___type_metadata_for_Swift_String_100eac208);
    puVar5 = &DAT_100c24468;
    _swift_getKeyPath(&DAT_100c24468);
    puVar6 = &DAT_100c24490;
    _swift_getKeyPath(&DAT_100c24490);
    local_60 = local_50;
    uStack_58 = uStack_48;
    FUN_1002cb5a0(&local_60,uVar7,puVar5,puVar6);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    _swift_release(pMVar1);
    _swift_release(param_2);
    _swift_release(uVar7);
    return;
  }
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100021908 | FUN_100021908 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100021908(ulong param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  
  if ((param_1 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar3 = &DAT_100c243d8;
    _swift_getKeyPath(&DAT_100c243d8);
    puVar4 = &DAT_100c24400;
    _swift_getKeyPath(&DAT_100c24400);
    Combine::Published::_get_subscript(&local_50,uVar5,puVar3,puVar4);
    _swift_release(puVar3);
    _swift_release(puVar4);
    lVar1 = local_50;
    if (local_50 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100021a34);
      (*pcVar2)();
    }
    uVar6 = *(ulong *)(local_50 + 0x40);
    FUN_10000444c(uVar6);
    _swift_release(lVar1);
    FUN_100021e40(uVar6);
    if (uVar6 >> 0x3e != 1) {
      return;
    }
    if ((param_2 & 1) == 0) {
      return;
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + 0x18);
  FUN_100357f60(&local_50,FUN_10003b058,0,PTR___type_metadata_for_Swift_String_100eac208);
  puVar3 = &DAT_100c24468;
  _swift_getKeyPath(&DAT_100c24468);
  puVar4 = &DAT_100c24490;
  _swift_getKeyPath(&DAT_100c24490);
  local_60 = local_50;
  uStack_58 = uStack_48;
  FUN_1002cb5a0(&local_60,uVar5,puVar3,puVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  _swift_release(uVar5);
  return;
}



/* Address: 0x100021a34 | FUN_100021a34 */

void FUN_100021a34(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  MainActor *pMVar6;
  
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
              ("Paste/MainWindow.ClosedStateManager.swift",0x29,1,0x1d,UVar4.unknown,puVar3);
  }
  pMVar6 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar6 != (MainActor *)0x0) {
    FUN_100021908(0,1);
    _swift_release(pMVar2);
    pMVar2 = pMVar6;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100021b04 | FUN_100021b04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100021b04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *pPVar3;
  long lVar4;
  undefined8 uVar5;
  Published *pPVar6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *local_48;
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = &DAT_100c243d8;
    _swift_getKeyPath(&DAT_100c243d8);
    puVar2 = &DAT_100c24400;
    _swift_getKeyPath(&DAT_100c24400);
    Combine::Published::_get_subscript(&local_48,uVar5,puVar1,puVar2);
    _swift_release(puVar1);
    _swift_release(puVar2);
    puVar1 = local_48;
    if (local_48 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100021cc0);
      (*pcVar9)();
    }
    uVar7 = *(ulong *)(local_48 + 0x40);
    FUN_10000444c(uVar7);
    _swift_release(puVar1);
    FUN_100021e40(uVar7);
    if (uVar7 >> 0x3e == 0) {
      pPVar6 = *(Published **)(*(long *)(*(long *)(param_1 + 0x18) + 0x10) + 0x10);
      pPVar3 = pPVar6;
      _swift_retain();
      FUN_1002ddf60();
      puVar8 = pPVar3->unknown;
      puVar1 = &DAT_100c24420;
      _swift_getKeyPath(&DAT_100c24420);
      puVar2 = &DAT_100c24448;
      _swift_getKeyPath(&DAT_100c24448);
      local_48 = puVar8;
      _swift_bridgeObjectRetain(puVar8);
      Combine::Published::_set_subscript(pPVar6,&local_48,pPVar6,puVar1,puVar2);
      lVar4 = param_1 + 0x20;
      _swift_unknownObjectWeakLoadStrong();
      if (lVar4 != 0) {
        FUN_1000361a8();
        FUN_10000cd7c();
        pcVar9 = *(code **)(lVar4 + _TtC5Paste9SearchBar::onDismiss);
        if (pcVar9 != (code *)0x0) {
          uVar5 = ((undefined8 *)(lVar4 + _TtC5Paste9SearchBar::onDismiss))[1];
          _swift_retain(uVar5);
          (*pcVar9)();
          _swift_release(param_1);
          FUN_100004550(pcVar9,uVar5);
          return;
        }
        _swift_release(param_1);
        return;
      }
    }
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100021cc0 | FUN_100021cc0 */

void FUN_100021cc0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100021cfc | FUN_100021cfc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100021cfc(void)

{
  return ZEXT816(0x100fa7588);
}



/* Address: 0x100021d1c | FUN_100021d1c */

void FUN_100021d1c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100021d40 | FUN_100021d40 */

void FUN_100021d40(void)

{
  FUN_1000217a8();
  return;
}



/* Address: 0x100021d48 | FUN_100021d48 */

void FUN_100021d48(void)

{
  FUN_100021a34();
  return;
}



/* Address: 0x100021d50 | FUN_100021d50 */

void FUN_100021d50(void)

{
  FUN_100021b04();
  return;
}



/* Address: 0x100021d58 | FUN_100021d58 */

void FUN_100021d58(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c243d8;
  _swift_getKeyPath(&DAT_100c243d8);
  puVar2 = &DAT_100c24400;
  _swift_getKeyPath(&DAT_100c24400);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100021dc0 | thunk_FUN_100021d58 */

void thunk_FUN_100021d58(void)

{
  FUN_100021d58();
  return;
}



/* Address: 0x100021dc4 | FUN_100021dc4 */

void FUN_100021dc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  Published *pPVar4;
  undefined8 local_38;
  
  uVar3 = *param_1;
  pPVar4 = (Published *)*param_2;
  puVar1 = &DAT_100c243d8;
  _swift_getKeyPath(&DAT_100c243d8);
  puVar2 = &DAT_100c24400;
  _swift_getKeyPath(&DAT_100c24400);
  local_38 = uVar3;
  _swift_retain(uVar3);
  _swift_retain(pPVar4);
  Combine::Published::_set_subscript(pPVar4,&local_38,pPVar4,puVar1,puVar2);
  return;
}



/* Address: 0x100021e3c | thunk_FUN_100021dc4 */

void thunk_FUN_100021dc4(void)

{
  FUN_100021dc4();
  return;
}



/* Address: 0x100021e40 | FUN_100021e40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100021e40(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)((ulong)param_1 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      _swift_release();
      return param_1;
    }
  }
  else if (uVar2 != 2) {
    return param_1;
  }
  return 0;
}



/* Address: 0x100021e68 | thunk_FUN_100041a74 */

void thunk_FUN_100041a74(void)

{
  FUN_100041a74();
  return;
}



/* Address: 0x100021e6c | thunk_FUN_100041adc */

void thunk_FUN_100041adc(void)

{
  FUN_100041adc();
  return;
}



/* Address: 0x100021e70 | thunk_FUN_10003bb24 */

void thunk_FUN_10003bb24(void)

{
  FUN_10003bb24();
  return;
}



/* Address: 0x100021e74 | thunk_FUN_10003bc18 */

void thunk_FUN_10003bc18(void)

{
  FUN_10003bc18();
  return;
}



/* Address: 0x100021e78 | FUN_100021e78 */

void FUN_100021e78(undefined8 param_1,undefined8 param_2)

{
  __int64 _Var1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var1 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar2 = PTR___swiftEmptySetSingleton_100eae0e8, _Var1 != 0)) {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x20,0);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x20,param_2);
  return;
}



/* Address: 0x100021f00 | FUN_100021f00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_100021f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  NSString *pNVar6;
  long *plVar7;
  ulong uVar8;
  LocalizedStringResource LVar9;
  undefined8 *puVar10;
  NSString *pNVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  undefined *puVar16;
  class_t *pcVar17;
  class_t *pcVar18;
  MainActor *pMVar19;
  MainActor *this;
  ID self;
  MainActor *pMVar20;
  UnownedSerialExecutor UVar21;
  UnownedSerialExecutor UVar22;
  uint uVar23;
  void *pvVar24;
  void *pvVar25;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar26;
  ID IVar27;
  long lVar28;
  uint uVar29;
  byte *pbVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  MainActor *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  long *local_a8;
  String local_a0;
  MainActor *local_90;
  objc_super local_80;
  
  _swift_getObjectType();
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  plVar7 = (long *)_objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"initWithTitle:");
  uVar8 = 0;
  FUN_100328f38();
  if ((uVar8 & 1) != 0) {
    LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40))
    ;
    FUN_1001c2e88(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SVar31 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    puVar10 = (undefined8 *)0x0;
    FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    FUN_10020d5e4();
    pNVar6 = (NSString *)*puVar10;
    uVar1 = puVar10[1];
    _swift_bridgeObjectRetain_n(uVar1,2);
    pNVar11 = pNVar6;
    FUN_1000f653c(pNVar6,uVar1);
    if (pNVar11 == (NSString *)0x0) {
      _swift_bridgeObjectRelease(uVar1);
      pNVar6 = (NSString *)0xd000000000000013;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (pNVar6 == (NSString *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100022ac0);
        (*pcVar3)();
      }
    }
    else {
      FUN_1000f653c(pNVar6,uVar1);
      if (pNVar6 == (NSString *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100022030);
        (*pcVar3)();
      }
    }
    bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar4 & 1) == 0) {
      pNVar6 = (NSString *)0x0;
    }
    puVar12 = &DAT_100eb0d48;
    _swift_allocObject(&DAT_100eb0d48,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = param_2;
    *(undefined8 *)(puVar12 + 0x18) = param_1;
    param_4 = (void *)0x0;
    FUN_10021bafc(SVar31.str,SVar31.bridgeObject,pNVar6,0,0,0xe000000000000000,0,0,FUN_1000243ec,
                  puVar12,plVar7);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    _swift_release(puVar12);
    uVar8 = 0;
  }
  FUN_1003250f0();
  local_a8 = plVar7;
  if ((uVar8 & 1) == 0) {
    FUN_100325110();
    if (((uVar8 & 1) != 0) && (FUN_100325130(), (uVar8 & 1) == 0)) {
      LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
      FUN_1001c1b08(auStack_f0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      local_a0 = (extension_Foundation)::Swift::String::init
                           ((LocalizedStringResource)
                            (auStack_f0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
      pvVar25 = local_a0.bridgeObject;
      _swift_bridgeObjectRetain(pvVar25);
      SVar31.bridgeObject = (void *)0xe300000000000000;
      SVar31.str = (char *)0x2e2e2e;
      SVar33.bridgeObject = param_4;
      SVar33.str = (char *)pNVar6;
      Swift::String::append(SVar31,SVar33);
      _swift_bridgeObjectRelease(pvVar25);
      pcVar26 = local_a0.str;
      pvVar25 = local_a0.bridgeObject;
      plVar13 = (long *)0x0;
      FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
      FUN_10020da20();
      lVar28 = *plVar13;
      lVar2 = plVar13[1];
      _swift_bridgeObjectRetain_n(lVar2,2);
      lVar14 = lVar28;
      FUN_1000f653c(lVar28,lVar2);
      if (lVar14 == 0) {
        _swift_bridgeObjectRelease(lVar2);
        lVar28 = -0x2fffffffffffffed;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (lVar28 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100022ad0);
          (*pcVar3)();
        }
      }
      else {
        FUN_1000f653c(lVar28,lVar2);
        if (lVar28 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10002235c);
          (*pcVar3)();
        }
      }
      bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      if ((bVar4 & 1) == 0) {
        lVar28 = 0;
      }
      puVar12 = &DAT_100eb0c58;
      _swift_allocObject(&DAT_100eb0c58,0x18,7);
      *(undefined8 *)(puVar12 + 0x10) = param_2;
      FUN_10021bafc(pcVar26,pvVar25,lVar28,0,0,0xe000000000000000,0,0,FUN_100024274,puVar12,plVar7);
      _swift_bridgeObjectRelease(pvVar25);
      _swift_release(puVar12);
    }
  }
  else {
    FUN_100328e60();
    LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    lVar28 = *(long *)(*(long *)(LVar9.unknown + -8) + 0x40);
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    LVar9.unknown = auStack_f0 + -(lVar28 + 0xfU & 0xfffffffffffffff0);
    if ((uVar8 & 1) == 0) {
      FUN_1001c4088(LVar9.unknown);
      SVar31 = (extension_Foundation)::Swift::String::init(LVar9);
      plVar13 = (long *)0x0;
      FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
      FUN_10020d8f8();
      pcVar26 = (char *)*plVar13;
      lVar2 = plVar13[1];
      _swift_bridgeObjectRetain_n(lVar2,2);
      pcVar15 = pcVar26;
      FUN_1000f653c(pcVar26,lVar2);
      if (pcVar15 == (char *)0x0) {
        _swift_bridgeObjectRelease(lVar2);
        pcVar26 = (char *)0xd000000000000013;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (pcVar26 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100022acc);
          (*pcVar3)();
        }
      }
      else {
        FUN_1000f653c(pcVar26,lVar2);
        if (pcVar26 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10002227c);
          (*pcVar3)();
        }
      }
      bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      if ((bVar4 & 1) == 0) {
        pcVar26 = (char *)0x0;
      }
      puVar12 = &DAT_100eb0c80;
      _swift_allocObject(&DAT_100eb0c80,0x28,7);
      *(undefined8 *)(puVar12 + 0x10) = param_2;
      *(undefined8 *)(puVar12 + 0x18) = param_1;
      *(undefined8 *)(puVar12 + 0x20) = param_3;
      pcVar3 = FUN_1000242a0;
    }
    else {
      FUN_1001c1f88();
      SVar31 = (extension_Foundation)::Swift::String::init(LVar9);
      plVar13 = (long *)0x0;
      FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
      FUN_10020d65c();
      pcVar26 = (char *)*plVar13;
      lVar2 = plVar13[1];
      _swift_bridgeObjectRetain_n(lVar2,2);
      pcVar15 = pcVar26;
      FUN_1000f653c(pcVar26,lVar2);
      if (pcVar15 == (char *)0x0) {
        _swift_bridgeObjectRelease(lVar2);
        pcVar26 = (char *)0xd000000000000013;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (pcVar26 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100022ac8);
          (*pcVar3)();
        }
      }
      else {
        FUN_1000f653c(pcVar26,lVar2);
        if (pcVar26 == (char *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000221e4);
          (*pcVar3)();
        }
      }
      bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      if ((bVar4 & 1) == 0) {
        pcVar26 = (char *)0x0;
      }
      puVar12 = &DAT_100eb0d20;
      _swift_allocObject(&DAT_100eb0d20,0x28,7);
      *(undefined8 *)(puVar12 + 0x10) = param_2;
      *(undefined8 *)(puVar12 + 0x18) = param_1;
      *(undefined8 *)(puVar12 + 0x20) = param_3;
      pcVar3 = FUN_10002439c;
    }
    pvVar25 = (void *)0x0;
    FUN_10021bafc(SVar31.str,SVar31.bridgeObject,pcVar26,0,0,0xe000000000000000,0,0,pcVar3,puVar12,
                  plVar7);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    _swift_release(puVar12);
    uVar8 = 0;
    FUN_10032a1ec();
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    if ((uVar8 & 1) == 0) {
      FUN_1001c2d08(auStack_f0 + -(lVar28 + 0xfU & 0xfffffffffffffff0));
    }
    else {
      FUN_1001c1088();
    }
    SVar31 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_f0 + -(lVar28 + 0xfU & 0xfffffffffffffff0)));
    pcVar15 = SVar31.str;
    FUN_100325130();
    if (((ulong)pcVar15 & 1) == 0) {
      local_a0 = SVar31;
      _swift_bridgeObjectRetain(SVar31.bridgeObject);
      SVar32.bridgeObject = (void *)0xe300000000000000;
      SVar32.str = (char *)0x2e2e2e;
      SVar34.bridgeObject = pvVar25;
      SVar34.str = pcVar26;
      Swift::String::append(SVar32,SVar34);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar31 = local_a0;
    }
    pvVar25 = SVar31.bridgeObject;
    FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    plVar13 = plVar7;
    FUN_10020da20();
    lVar28 = *plVar13;
    lVar2 = plVar13[1];
    _swift_bridgeObjectRetain_n(lVar2,2);
    lVar14 = lVar28;
    FUN_1000f653c(lVar28,lVar2);
    if (lVar14 == 0) {
      _swift_bridgeObjectRelease(lVar2);
      lVar28 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar28 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100022ac4);
        (*pcVar3)();
      }
    }
    else {
      FUN_1000f653c(lVar28,lVar2);
      if (lVar28 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000225d4);
        (*pcVar3)();
      }
    }
    bVar4 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar4 & 1) == 0) {
      lVar28 = 0;
    }
    puVar12 = &DAT_100eb0ca8;
    _swift_allocObject(&DAT_100eb0ca8,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = param_2;
    *(undefined8 *)(puVar12 + 0x18) = param_1;
    pvVar24 = pvVar25;
    FUN_10021bafc(SVar31.str,pvVar25,lVar28,0,0,0xe000000000000000,0,0,FUN_1000242c8,puVar12,plVar7)
    ;
    uVar23 = (uint)pvVar24;
    _swift_bridgeObjectRelease(pvVar25);
    _swift_release(puVar12);
    uVar8 = 0;
    FUN_100328f38();
    if ((uVar8 & 1) != 0) {
      plVar13 = plVar7;
      FUN_10021b7b4();
      uVar5 = 0;
      local_b8 = plVar13;
      FUN_1003293c4();
      uVar29 = 8;
      if ((uVar23 & 0xff) == 1) {
        uVar29 = uVar5;
        thunk_FUN_100324cb0();
      }
      puVar12 = &DAT_100eb0cd0;
      local_b0 = param_3;
      _swift_allocObject(&DAT_100eb0cd0,0x18,7);
      _swift_unknownObjectWeakInit(puVar12 + 0x10,plVar7);
      puVar16 = &DAT_100eb0cf8;
      _swift_allocObject(&DAT_100eb0cf8,0x28,7);
      *(undefined8 *)(puVar16 + 0x10) = param_2;
      *(undefined8 *)(puVar16 + 0x18) = param_1;
      *(undefined **)(puVar16 + 0x20) = puVar12;
      local_d0 = puVar12;
      local_c8 = param_1;
      local_c0 = param_2;
      _swift_retain();
      FUN_100324b90();
      pcVar17 = (class_t *)0x0;
      FUN_1000235dc();
      pcVar18 = pcVar17;
      _objc_allocWithZone();
      lVar28 = _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::selectedColor;
      *(undefined1 *)
       ((long)&pcVar18->isa +
       _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::selectedColor) = 8;
      *(undefined8 *)
       ((long)&pcVar18->isa +
       _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::___lazy_storage___stackView) = 0
      ;
      *(char *)((long)&pcVar18->isa + lVar28) = (char)uVar29;
      puVar10 = (undefined8 *)
                ((long)&pcVar18->isa +
                _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::onSelect);
      *puVar10 = FUN_100024350;
      puVar10[1] = puVar16;
      local_d8 = puVar16;
      local_80.receiver = (ID)pcVar18;
      local_80.super_class = pcVar17;
      _swift_retain(puVar16);
      pMVar19 = (MainActor *)_objc_msgSendSuper2(&local_80,"initWithFrame:",0,0,0,0);
      lVar28 = *(long *)(puVar12 + 0x10);
      local_e8 = puVar12;
      local_e0 = pMVar19;
      if (lVar28 != 0) {
        this = Swift::MainActor::typeMetadataAccessor();
        pbVar30 = puVar12 + 0x20;
        do {
          bVar4 = *pbVar30;
          IVar27 = (ID)bVar4;
          pMVar20 = Swift::MainActor::get_shared(this,pMVar19);
          pMVar19 = pMVar20;
          FUN_1000081a8();
          UVar21 = Swift::Actor::get_unownedExecutor();
          UVar22 = UVar21;
          _swift_task_isCurrentExecutor();
          if (((ulong)UVar22.unknown & 1) == 0) {
            _swift_task_reportUnexpectedExecutor
                      ("Paste/TabBarCellMenu.swift",0x1a,1,0x62,UVar21.unknown,pMVar19);
          }
          FUN_100024230(0);
          _objc_allocWithZone();
          FUN_1000237f4();
          *(bool *)(IVar27 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::
                             isSelected) = (uVar29 & 0xff) != 8 && (uVar29 & 0xff) == (uint)bVar4;
          self = IVar27;
          FUN_1000235fc();
          FUN_100022c00();
          objc_stub::addArrangedSubview_(self,IVar27);
          _swift_release(pMVar20);
          pMVar19 = (MainActor *)0x0;
          lVar28 = lVar28 + -1;
          pbVar30 = pbVar30 + 1;
        } while (lVar28 != 0);
      }
      puVar12 = local_e8;
      _swift_bridgeObjectRelease(local_e8);
      pMVar19 = local_e0;
      FUN_100022c00();
      local_90 = pMVar19;
      FUN_1001fa09c();
      _swift_release(local_d0);
      _swift_release(local_d8);
      _swift_bridgeObjectRelease(puVar12);
      FUN_10021b73c(pMVar19,local_b8);
    }
  }
  return local_a8;
}



/* Address: 0x100022ad0 | FUN_100022ad0 */

void FUN_100022ad0(undefined8 param_1)

{
  FUN_10000ec2c(0,&DAT_100fa8300,&PTR__OBJC_CLASS___NSAlert_100f8d6f0);
  FUN_1003b6cfc(param_1);
  return;
}



/* Address: 0x100022b10 | FUN_100022b10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100022b10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ID self;
  
  FUN_1003c4bd4(param_1,param_3);
  self = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::cancelTracking(self);
    return 0;
  }
  return 0;
}



/* Address: 0x100022b5c | _TtC5Paste14TabBarCellMenu::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste14TabBarCellMenu::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e0a0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100022bb4);
  (*pcVar1)();
}



/* Address: 0x100022bb4 | _TtC5Paste14TabBarCellMenu::initWithTitle: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste14TabBarCellMenu::initWithTitle_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBarCellMenu",0x14,"init(title:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100022be0);
  (*pcVar1)();
}



/* Address: 0x100022be0 | FUN_100022be0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100022be0(void)

{
  return ZEXT816(0x100f8f968);
}



/* Address: 0x100022c00 | FUN_100022c00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100022c00(void)

{
  long lVar1;
  ID self;
  undefined *self_00;
  long unaff_x20;
  
  lVar1 = _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::___lazy_storage___stackView;
  self = *(ID *)(unaff_x20 +
                _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::
                ___lazy_storage___stackView);
  if (self == 0) {
    self_00 = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    self = objc_stub::init((ID)self_00);
    objc_stub::setOrientation_(self,0);
    objc_stub::setSpacing_(self,0x4000000000000000);
    objc_stub::setEdgeInsets_
              (self,0x4000000000000000,0x4024000000000000,0x4000000000000000,0x4024000000000000);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x100022ca0 | FUN_100022ca0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100022ca0(ID param_1)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  _ArrayBuffer _Var6;
  ulong uVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  
  FUN_100022c00();
  _Var6.unknown = (undefined *)objc_stub::arrangedSubviews(param_1);
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar16 = _Var6.unknown & 0xffffffffffffff8;
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    uVar14 = *(ulong *)(puVar16 + 0x10);
  }
  else {
    _Var2.unknown = puVar16;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var2.unknown = _Var6.unknown;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar14 != 0) {
    uVar15 = 0;
    do {
      while( true ) {
        if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar16 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100022e84);
            (*pcVar5)();
          }
          uVar7 = *(ulong *)(_Var6.unknown + uVar15 * 8 + 0x20);
        }
        else {
          uVar7 = uVar15;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar15,_Var6);
        }
        uVar1 = uVar15 + 1;
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100022e80);
          (*pcVar5)();
        }
        pMVar8 = Swift::MainActor::typeMetadataAccessor();
        pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar8);
        pMVar8 = pMVar9;
        FUN_1000081a8();
        UVar10 = Swift::Actor::get_unownedExecutor();
        UVar11 = UVar10;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar11.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/TabBarCellMenu.swift",0x1a,1,0x56,UVar10.unknown,pMVar8);
        }
        uVar12 = 0;
        FUN_100024230(0);
        _swift_dynamicCastClass(uVar7,uVar12);
        _swift_release(pMVar9);
        if (uVar7 != 0) break;
        uVar15 = uVar15 + 1;
        if (uVar1 == uVar14) goto LAB_100022ea0;
      }
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar15 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      uVar3 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x18);
      if (uVar3 >> 1 <= uVar15) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar15 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar15,uVar7);
      puVar13 = puVar4;
      uVar15 = uVar1;
    } while (uVar1 != uVar14);
  }
LAB_100022ea0:
  _swift_bridgeObjectRelease(_Var6.unknown);
  return puVar13;
}



/* Address: 0x100022ecc | FUN_100022ecc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_100022ecc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *local_90 [3];
  undefined8 *local_78;
  undefined **ppuStack_70;
  undefined8 *local_68;
  
  puVar1 = param_1;
  _swift_getObjectType();
  puVar2 = puVar1;
  FUN_100022c00();
  ppuStack_70 = &PTR_PTR_100ec00e8;
  puVar3 = param_1;
  local_90[0] = param_1;
  local_78 = puVar1;
  local_68 = puVar2;
  FUN_1001f9774();
  uVar10 = *puVar3;
  uVar11 = puVar3[1];
  uVar12 = puVar3[2];
  uVar13 = puVar3[3];
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa6c68,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  ppuVar5 = local_90;
  FUN_1001f97b4(uVar10,uVar11,uVar12,uVar13,ppuVar5,uVar4,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar6 = objc_stub::heightAnchor
                    (*(ID *)((long)param_1 +
                            _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::
                            ___lazy_storage___stackView));
  IVar6 = objc_stub::constraintEqualToConstant_(IVar6,0x403a000000000000);
  puVar7 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  puVar8 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar7 + 0x38) = puVar8;
  *(undefined ***)(puVar7 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar7 + 0x20) = ppuVar5;
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar7 + 0x60) = uVar4;
  *(undefined ***)(puVar7 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar7 + 0x48) = IVar6;
  puVar9 = puVar7;
  FUN_1001f8d60(puVar7);
  _swift_setDeallocating(puVar7);
  uVar4 = *(undefined8 *)(puVar7 + 0x10);
  puVar8 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar7 + 0x20,uVar4,puVar8);
  return puVar9;
}



/* Address: 0x100023090 | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellMenu.swift",0x1a,1,0x70,UVar3.unknown,pMVar2);
  }
  *(undefined1 *)(param_1 + selectedColor) = 8;
  *(undefined8 *)(param_1 + ___lazy_storage___stackView) = 0;
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e0a0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100023168);
  (*pcVar1)();
}



/* Address: 0x100023168 | FUN_100023168 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100023168(ID param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  undefined *puVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  MainActor *pMVar7;
  MainActor *pMVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  ID unaff_x20;
  long lVar11;
  ulong uVar12;
  
  objc_stub::locationInWindow(param_1);
  puVar4 = (undefined *)objc_stub::convertPoint_fromView_(unaff_x20,0);
  FUN_100023354();
  if (puVar4 == (undefined *)0x0) {
    return 0;
  }
  _Var5.unknown = puVar4;
  FUN_100022ca0();
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    lVar11 = *(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var2.unknown = _Var5.unknown;
    }
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar11 != 0) {
    uVar12 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1000232c4);
          (*pcVar3)();
        }
        uVar6 = *(ulong *)(_Var5.unknown + uVar12 * 8 + 0x20);
      }
      else {
        uVar6 = uVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar12,_Var5);
      }
      lVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000232c0);
        (*pcVar3)();
      }
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      pMVar8 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      pMVar7 = pMVar8;
      FUN_1000081a8();
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBarCellMenu.swift",0x1a,1,0x7f,UVar9.unknown,pMVar7);
      }
      *(undefined1 *)
       (uVar6 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isSelected) = 0;
      FUN_1000235fc();
      _swift_release(pMVar8);
      uVar12 = uVar12 + 1;
    } while (lVar1 != lVar11);
  }
  _swift_bridgeObjectRelease(_Var5.unknown);
  puVar4[_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::isSelected] = 1;
  FUN_1000235fc();
  *(undefined *)
   (unaff_x20 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::selectedColor) =
       puVar4[_TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F715ColorPickerCell::color];
  (**(code **)(unaff_x20 + _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::onSelect))()
  ;
  return 0;
}



/* Address: 0x100023354 | FUN_100023354 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100023354(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong self;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  FUN_100022ca0();
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100023484);
          (*pcVar3)();
        }
        self = *(ulong *)(param_1.unknown + uVar10 * 8 + 0x20);
      }
      else {
        self = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,param_1);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100023480);
        (*pcVar3)();
      }
      pMVar4 = Swift::MainActor::typeMetadataAccessor();
      pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
      pMVar4 = pMVar5;
      FUN_1000081a8();
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/TabBarCellMenu.swift",0x1a,1,0x84,UVar6.unknown,pMVar4);
      }
      uVar8 = objc_stub::frame(self);
      _CGRectContainsPoint();
      _swift_release(pMVar5);
      if ((uVar8 & 1) != 0) {
        _swift_bridgeObjectRelease(param_1.unknown);
        return self;
      }
      uVar10 = uVar10 + 1;
    } while (lVar1 != lVar9);
  }
  _swift_bridgeObjectRelease(param_1.unknown);
  return 0;
}



/* Address: 0x1000234cc | _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::mouseUp: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5PasteP33_57C9F60CD5BFD66172B46B652E0868F711ColorPicker::mouseUp_
               (ID param_1,SEL param_2,ID param_3)

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
              ("Paste/TabBarCellMenu.swift",0x1a,1,0x74,UVar3.unknown,pMVar1);
  }
  FUN_100023168(param_3);
  _swift_release(pMVar2);
  return;
}


