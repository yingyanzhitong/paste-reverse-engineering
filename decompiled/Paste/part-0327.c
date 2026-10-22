/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10040ddac | FUN_10040ddac */

void FUN_10040ddac(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x10040ddbc | FUN_10040ddbc */

void FUN_10040ddbc(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x10040ddd4 | FUN_10040ddd4 */

void FUN_10040ddd4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [8];
  
  _swift_unknownObjectWeakInit(auStack_48,param_1);
  lVar1 = _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates;
  _swift_beginAccess(param_2 + _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::
                               delegates,auStack_60,0x21,0);
  uVar4 = *(ulong *)(param_2 + lVar1);
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_2 + lVar1) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_10040fcf0(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_2 + lVar1) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10040fcf0(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  FUN_100405d4c(auStack_48,uVar4 + uVar2 * 8 + 0x20);
  *(ulong *)(param_2 + lVar1) = uVar4;
  _swift_endAccess(auStack_60);
  return;
}



/* Address: 0x10040debc | FUN_10040debc */

void FUN_10040debc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [120];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = &DAT_100fc5370;
  FUN_1000037f0(&DAT_100fc5370,&DAT_100c48558);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_108 = param_1[9];
  uStack_110 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_118 = param_1[7];
  local_120 = param_1[6];
  uStack_88 = param_1[9];
  local_90 = param_1[8];
  uStack_f8 = param_1[0xb];
  local_100 = param_1[10];
  uStack_68 = param_1[0xd];
  local_70 = param_1[0xc];
  uStack_c8 = param_1[1];
  local_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  local_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_148 = param_1[1];
  local_150 = *param_1;
  uStack_138 = param_1[3];
  local_140 = param_1[2];
  uStack_128 = param_1[5];
  uStack_130 = param_1[4];
  uStack_e8 = param_1[0xd];
  uStack_f0 = param_1[0xc];
  local_60 = param_1[0xe];
  local_e0 = param_1[0xe];
  FUN_100011090(&local_d0,auStack_1c8,&DAT_100fc5378,&DAT_100c48560);
  puVar2 = &DAT_100fc5360;
  FUN_1000037f0(&DAT_100fc5360,&DAT_100c48548);
  Swift::AsyncStream::Continuation::_yield(auStack_1d0 + -extraout_x8,&local_150,puVar2);
  (**(code **)(lVar3 + 8))(auStack_1d0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10040dfe4 | FUN_10040dfe4 */

void FUN_10040dfe4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [136];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = &DAT_100fc5350;
  FUN_1000037f0(&DAT_100fc5350,&DAT_100c48538);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uStack_118 = param_1[0xb];
  uStack_120 = param_1[10];
  uStack_78 = param_1[0xd];
  local_80 = param_1[0xc];
  uStack_108 = param_1[0xd];
  local_110 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_158 = param_1[3];
  uStack_160 = param_1[2];
  uStack_b8 = param_1[5];
  local_c0 = param_1[4];
  uStack_148 = param_1[5];
  local_150 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_138 = param_1[7];
  uStack_140 = param_1[6];
  uStack_98 = param_1[9];
  local_a0 = param_1[8];
  uStack_128 = param_1[9];
  local_130 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  local_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_168 = param_1[1];
  local_170 = *param_1;
  uStack_f8 = param_1[0xf];
  uStack_100 = param_1[0xe];
  local_60 = param_1[0x10];
  local_f0 = param_1[0x10];
  FUN_100011090(&local_e0,auStack_1f8,&DAT_100fc5358,&DAT_100c48540);
  puVar2 = &DAT_100fc5340;
  FUN_1000037f0(&DAT_100fc5340,&DAT_100c48528);
  Swift::AsyncStream::Continuation::_yield(auStack_200 + -extraout_x8,&local_170,puVar2);
  (**(code **)(lVar3 + 8))(auStack_200 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10040e110 | FUN_10040e110 */

undefined * FUN_10040e110(long param_1)

{
  long lVar1;
  Component CVar2;
  bool bVar3;
  undefined7 extraout_var;
  _SetStorage *this;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  __int64 seed;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  long lVar4;
  
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fc5328;
    FUN_1000037f0(&DAT_100fc5328,&DAT_100c48520);
    puVar5 = puVar14;
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar15 = (undefined *)0x0;
    local_70 = puVar5 + 0x38;
    local_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(lVar12 + 0x48);
    pcVar16 = *(code **)(lVar12 + 0x10);
    local_98 = puVar14;
    do {
      lVar1 = local_88;
      (*pcVar16)(local_88,local_90 + lVar17 * (long)puVar15,lVar4);
      local_78 = *(code **)(lVar12 + 0x20);
      (*local_78)(local_68,lVar1,lVar4);
      seed = *(__int64 *)(puVar5 + 0x28);
      FUN_100003a00(&DAT_100fc5330,PTR_typeMetadataAccessor_100ea7668,
                    PTR_Foundation__Foundation__Calendar__Component_>Swift__Hashable_100ea7678);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(local_70 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        local_80 = puVar15;
        do {
          (*pcVar16)(puVar11,*(long *)(puVar5 + 0x30) + uVar6 * lVar17,lVar4);
          puVar14 = &DAT_100fc5338;
          FUN_100003a00(&DAT_100fc5338,PTR_typeMetadataAccessor_100ea7668,
                        PTR_Foundation__Foundation__Calendar__Component_>Swift__Equatable_100ea7680)
          ;
          bVar3 = Swift::Equatable::___infix(puVar11,local_68,lVar4,puVar14);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar4);
          if (bVar3) {
            (*pcVar13)(local_68,lVar4);
            puVar14 = local_98;
            puVar15 = local_80;
            goto LAB_10040e21c;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
          uVar7 = uVar6 >> 6;
          uVar8 = *(ulong *)(local_70 + uVar7 * 8);
          uVar9 = 1L << (uVar6 & 0x3f);
          puVar14 = local_98;
          puVar15 = local_80;
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(local_70 + uVar7 * 8) = uVar9 | uVar8;
      (*local_78)(*(long *)(puVar5 + 0x30) + uVar6 * lVar17,local_68,lVar4);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10040e3b8);
        (*pcVar16)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
LAB_10040e21c:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar14);
  }
  return puVar5;
}



/* Address: 0x10040e3b8 | FUN_10040e3b8 */

void FUN_10040e3b8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x158) = param_1;
  *(ulong *)(unaff_x22 + 0x160) = param_2;
  puVar3 = &DAT_100fc5308;
  FUN_1000037f0(&DAT_100fc5308,&DAT_100c484f8);
  *(undefined **)(unaff_x22 + 0x178) = puVar3;
  lVar6 = *(long *)(puVar3 + -8);
  *(long *)(unaff_x22 + 0x180) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar4;
  FUN_1000da768(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  FUN_100004640(unaff_x22 + 0x90,uVar2);
  piVar7 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 400) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10040e490;
                    /* WARNING: Could not recover jumptable at 0x00010040e48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(param_1,param_2 & 0xcfffffffffffffff,uVar2,lVar6);
  return;
}



/* Address: 0x10040e490 | FUN_10040e490 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010040e6c0) */
/* WARNING: Removing unreachable block (ram,0x00010040e748) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010040e660 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10040e490(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  ID IVar4;
  NSString *pNVar5;
  JSONEncoder *pJVar6;
  Data DVar7;
  Dictionary<undefined,undefined> DVar8;
  Dictionary<undefined,undefined> DVar9;
  NSDictionary *pNVar10;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar11;
  long unaff_x20;
  ID IVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long *unaff_x22;
  long lVar17;
  String function;
  
  lVar11 = *unaff_x22;
  lVar17 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar11 + 400));
  FUN_100004594(lVar11 + 0x90);
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar11 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010040e4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 8))();
    return;
  }
  lVar15 = *(long *)(lVar11 + 0x168);
  puVar3 = &_OBJC_CLASS___UNMutableNotificationContent;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  *(ID *)(lVar11 + 0x198) = IVar4;
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setTitle_(IVar4,pNVar5);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setSubtitle_(IVar4,pNVar5);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setBody_(IVar4,pNVar5);
  if (*(char *)(lVar15 + 0x48) == '\x01') {
    IVar12 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(lVar11 + 0x168) + 0x40);
    puVar3 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar12 = objc_stub::initWithUnsignedInteger_((ID)puVar3,uVar13);
  }
  lVar16 = *(long *)(lVar11 + 0x168);
  objc_stub::setBadge_(IVar4,IVar12);
  lVar15 = 0;
  FUN_100408ee8();
  lVar16 = *(long *)(lVar16 + *(int *)(lVar15 + 0x2c) + 8);
  if (lVar16 == 0) {
    lVar16 = -0x2000000000000000;
  }
  _swift_bridgeObjectRetain();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar16);
  objc_stub::setCategoryIdentifier_(IVar4,pNVar5);
  *(undefined8 *)(lVar11 + 0x140) = 0xd000000000000014;
  *(undefined8 *)(lVar11 + 0x148) = 0x8000000100da5da0;
  Swift::AnyHashable::_init
            (lVar11 + 0xb8,pNVar5,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  pJVar6 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
  pJVar6 = Foundation::JSONEncoder::init(pJVar6);
  puVar3 = &DAT_100fc5310;
  FUN_100003a00(&DAT_100fc5310,FUN_100408ee8,&TargetProtocolConformanceDescriptor_100c478d0);
  DVar7 = Foundation::JSONEncoder::_encode(pJVar6,puVar3,lVar15,puVar3);
  _swift_release(pJVar6);
  puVar3 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  objc_stub::userInfo(IVar4);
  DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(lVar11 + 0x100) = DVar7.unknown;
  *(long *)(lVar11 + 0x108) = lVar15;
  *(undefined8 *)(lVar11 + 0x110) = 0;
  *(undefined **)(lVar11 + 0x118) = puVar3;
  FUN_100011080(lVar11 + 0x100,lVar11 + 0xe0);
  DVar9 = DVar8;
  _swift_isUniquelyReferenced_nonNull_native(DVar8.unknown);
  FUN_10040d590(lVar11 + 0xe0,lVar11 + 0xb8,DVar9.unknown);
  FUN_100089674(lVar11 + 0xb8);
  lVar15 = *(long *)(lVar11 + 0x168);
  pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(DVar8.unknown);
  objc_stub::setUserInfo_(IVar4,pNVar10);
  cVar2 = *(char *)(lVar15 + 0x49);
  if (cVar2 == '\x01') {
    IVar12 = UNNotificationSound::defaultCriticalSound((ID)&_OBJC_CLASS___UNNotificationSound);
  }
  else {
    if (cVar2 == '\x02') goto LAB_10040e868;
    IVar12 = UNNotificationSound::defaultSound((ID)&_OBJC_CLASS___UNNotificationSound);
  }
  objc_stub::setSound_(IVar4,IVar12);
LAB_10040e868:
  lVar15 = *(long *)(lVar11 + 0x180);
  uVar13 = *(undefined8 *)(lVar11 + 0x188);
  uVar1 = *(undefined8 *)(lVar11 + 0x178);
  *(undefined8 *)(lVar11 + 0x1a0) = **(undefined8 **)(lVar11 + 0x168);
  *(undefined8 *)(lVar11 + 0x1a8) = (*(undefined8 **)(lVar11 + 0x168))[1];
  IVar12 = IVar4;
  FUN_10040bacc();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar4 = UNNotificationRequest::requestWithIdentifier_content_trigger_
                    ((ID)&_OBJC_CLASS___UNNotificationRequest,pNVar5,IVar4,IVar12);
  *(ID *)(lVar11 + 0x1b0) = IVar4;
  FUN_1000da768(lVar11 + 0x150,0);
  IVar12 = *(ID *)(lVar11 + 0x150);
  *(ID *)(lVar11 + 0x1b8) = IVar12;
  plVar14 = (long *)(lVar11 + 0x10);
  *plVar14 = lVar17;
  *(code **)(lVar11 + 0x18) = FUN_10040ea24;
  continuation.unknown = (undefined *)plVar14;
  _swift_continuation_init(plVar14,1);
  *(undefined8 *)(lVar11 + 0x88) = uVar1;
  lVar17 = lVar11 + 0x70;
  FUN_10000cbb0(lVar17);
  FUN_1000037f0(&DAT_100fc5318,&DAT_100c48500);
  function.bridgeObject = (void *)0x8000000100da1040;
  function.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar15 + 0x20))(lVar17,uVar13,uVar1);
  *(undefined8 *)(lVar11 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(lVar11 + 0x58) = 0x42000000;
  *(code **)(lVar11 + 0x60) = FUN_10040be80;
  *(undefined **)(lVar11 + 0x68) = &DAT_100ed28f0;
  objc_stub::addNotificationRequest_withCompletionHandler_
            (IVar12,IVar4,(undefined8 *)(lVar11 + 0x50));
  (**(code **)(lVar15 + 8))(lVar17,uVar1);
  _swift_continuation_await(plVar14);
  return;
}



/* Address: 0x10040ea24 | FUN_10040ea24 */

void FUN_10040ea24(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x158);
  uVar3 = *(undefined8 *)(lVar4 + 0x160);
  lVar5 = *(long *)(lVar4 + 0x30);
  *(long *)(lVar4 + 0x1c0) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_10040ea88;
  }
  else {
    pcVar2 = FUN_10040eae8;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10040ea88 | FUN_10040ea88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040ea88(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010040eae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x1a8));
  return;
}



/* Address: 0x10040eae8 | FUN_10040eae8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040eae8(void)

{
  long unaff_x22;
  
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
                    /* WARNING: Could not recover jumptable at 0x00010040eb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10040eb54 | FUN_10040eb54 */

undefined8 FUN_10040eb54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc52d0;
  FUN_1000037f0(&DAT_100fc52d0,&DAT_100c484c0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10040eba4 | FUN_10040eba4 */

undefined8 FUN_10040eba4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100408ee8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10040ebe8 | FUN_10040ebe8 */

undefined8 FUN_10040ebe8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100408dd0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10040ec2c | FUN_10040ec2c */

void FUN_10040ec2c(void)

{
  FUN_10040ec9c(&DAT_100fc5340,&DAT_100c48528);
  return;
}



/* Address: 0x10040ec40 | FUN_10040ec40 */

void FUN_10040ec40(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc5340;
  FUN_1000037f0(&DAT_100fc5340,&DAT_100c48528);
  FUN_10040dfe4(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10040ec88 | FUN_10040ec88 */

void FUN_10040ec88(void)

{
  FUN_10040ec9c(&DAT_100fc5360,&DAT_100c48548);
  return;
}



/* Address: 0x10040ec9c | FUN_10040ec9c */

void FUN_10040ec9c(long param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_1000037f0();
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  (**(code **)(*(long *)(param_1 + -8) + 8))
            (unaff_x20 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)),param_1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10040ecf0 | FUN_10040ecf0 */

void FUN_10040ecf0(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc5360;
  FUN_1000037f0(&DAT_100fc5360,&DAT_100c48548);
  FUN_10040debc(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10040ed38 | thunk_FUN_10040d440 */

void thunk_FUN_10040d440(void)

{
  FUN_10040d440();
  return;
}



/* Address: 0x10040ed3c | thunk_FUN_10040dd88 */

void thunk_FUN_10040dd88(void)

{
  FUN_10040dd88();
  return;
}



/* Address: 0x10040ed40 | thunk_FUN_10040dd88 */

void thunk_FUN_10040dd88(void)

{
  FUN_10040dd88();
  return;
}



/* Address: 0x10040ed44 | thunk_FUN_10040dd88 */

void thunk_FUN_10040dd88(void)

{
  FUN_10040dd88();
  return;
}



/* Address: 0x10040ed48 | thunk_FUN_10040ddbc */

void thunk_FUN_10040ddbc(void)

{
  FUN_10040ddbc();
  return;
}



/* Address: 0x10040ed4c | thunk_FUN_10040ddbc */

void thunk_FUN_10040ddbc(void)

{
  FUN_10040ddbc();
  return;
}



/* Address: 0x10040ed50 | thunk_FUN_10040d0b4 */

void thunk_FUN_10040d0b4(void)

{
  FUN_10040c5dc();
  return;
}



/* Address: 0x10040ed54 | thunk_FUN_10040dcbc */

bool thunk_FUN_10040dcbc(undefined8 *param_1)

{
  bool bVar1;
  long unaff_x20;
  
  if ((undefined *)*param_1 != *(undefined **)(unaff_x20 + 0x10) ||
      (undefined *)param_1[1] != *(undefined **)(unaff_x20 + 0x18)) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)*(undefined **)(unaff_x20 + 0x10));
    return bVar1;
  }
  return true;
}



/* Address: 0x10040ed58 | thunk_FUN_10040ddac */

void thunk_FUN_10040ddac(void)

{
  FUN_10040ddac();
  return;
}



/* Address: 0x10040ed5c | thunk_FUN_10040ddac */

void thunk_FUN_10040ddac(void)

{
  FUN_10040ddac();
  return;
}



/* Address: 0x10040ed60 | thunk_FUN_1001a7a2c */

void thunk_FUN_1001a7a2c(void)

{
  FUN_1001a7a2c();
  return;
}



/* Address: 0x10040ed64 | thunk_FUN_10040ed68 */

void thunk_FUN_10040ed68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5380 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c485b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c485b0,&DAT_100ed2a38);
  DAT_100fc5380 = pTVar1;
  return;
}



/* Address: 0x10040ed68 | FUN_10040ed68 */

void FUN_10040ed68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5380 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c485b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c485b0,&DAT_100ed2a38);
  DAT_100fc5380 = pTVar1;
  return;
}



/* Address: 0x10040eda8 | FUN_10040eda8 */

undefined1  [16] FUN_10040eda8(void)

{
  return ZEXT816(0x100ed2a38);
}



/* Address: 0x10040edb8 | FUN_10040edb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10040edb8(void)

{
  return ZEXT816(0x100fc53c8);
}



/* Address: 0x10040edd8 | FUN_10040edd8 */

void FUN_10040edd8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar3;
  ID self;
  long unaff_x22;
  long lVar4;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  puVar1 = &DAT_100fc5438;
  FUN_1000037f0(&DAT_100fc5438,&DAT_100c48698);
  lVar4 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  FUN_1000da768(unaff_x22 + 0x98);
  self = *(ID *)(unaff_x22 + 0x98);
  *(ID *)(unaff_x22 + 0xb8) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10040ef34;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  lVar3 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar3);
  FUN_10040f628(0);
  function.bridgeObject = (void *)0x8000000100d8dcc0;
  function.str = (char *)0xd00000000000001e;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar4 + 0x20))(lVar3,uVar2,puVar1);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10040eff4;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100ed2a88;
  objc_stub::getNotificationSettingsWithCompletionHandler_(self);
  (**(code **)(lVar4 + 8))(lVar3,puVar1);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10040ef34 | FUN_10040ef34 */

void FUN_10040ef34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0xa8);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_10040ef84,uVar1,uVar2);
  return;
}



/* Address: 0x10040ef84 | FUN_10040ef84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040ef84(void)

{
  ID IVar1;
  undefined4 uVar2;
  long unaff_x22;
  
  IVar1 = objc_stub::authorizationStatus(*(ID *)(unaff_x22 + 0x90));
  uVar2 = (undefined4)(0x202020100 >> ((IVar1 & 7) << 3));
  if (4 < IVar1) {
    uVar2 = 0;
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010040eff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Address: 0x10040eff4 | FUN_10040eff4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10040eff4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 local_28;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  puVar1 = &DAT_100fc5438;
  local_28 = param_2;
  FUN_1000037f0(&DAT_100fc5438,&DAT_100c48698);
  Swift::CheckedContinuation::resume(&local_28,puVar1);
  return;
}



/* Address: 0x10040f054 | FUN_10040f054 */

void FUN_10040f054(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(ulong *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  puVar1 = &DAT_100fc5428;
  FUN_1000037f0(&DAT_100fc5428,&DAT_100c48680);
  *(undefined **)(unaff_x22 + 0xb0) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10040f0ec;
  FUN_10040edd8(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10040f0ec | FUN_10040f0ec */

void FUN_10040f0ec(char param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  UnsafeContinuation<undefined,undefined> continuation;
  long *plVar4;
  ID self;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  String function;
  
  lVar6 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar6 + 200);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(uVar3);
  if (param_1 != '\0') {
    if (param_1 == '\x01') {
      FUN_10040f5e8();
      _swift_allocError(&DAT_100ed2e08,uVar3,0,0);
      _swift_willThrow();
      _swift_task_dealloc(*(undefined8 *)(lVar6 + 0xc0));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
    }
    else {
      _swift_task_dealloc(*(undefined8 *)(lVar6 + 0xc0));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x00010040f2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar1 = *(long *)(lVar6 + 0xb8);
  uVar3 = *(undefined8 *)(lVar6 + 0xc0);
  uVar2 = *(undefined8 *)(lVar6 + 0xb0);
  FUN_1000da768(lVar6 + 0x90);
  self = *(ID *)(lVar6 + 0x90);
  *(ID *)(lVar6 + 0xd0) = self;
  plVar4 = (long *)(lVar6 + 0x10);
  *plVar4 = lVar5;
  *(long *)(lVar6 + 0x38) = lVar6 + 0xe0;
  *(code **)(lVar6 + 0x18) = FUN_10040f2c8;
  continuation.unknown = (undefined *)plVar4;
  _swift_continuation_init(plVar4,1);
  *(undefined8 *)(lVar6 + 0x88) = uVar2;
  lVar5 = lVar6 + 0x70;
  FUN_10000cbb0(lVar5);
  FUN_1000037f0(&DAT_100fc5318,&DAT_100c48500);
  function.bridgeObject = (void *)0x8000000100da1040;
  function.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar1 + 0x20))(lVar5,uVar3,uVar2);
  *(undefined8 *)(lVar6 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(lVar6 + 0x58) = 0x42000000;
  *(code **)(lVar6 + 0x60) = FUN_10040f468;
  *(undefined **)(lVar6 + 0x68) = &DAT_100ed2a60;
  objc_stub::requestAuthorizationWithOptions_completionHandler_(self,7,(undefined8 *)(lVar6 + 0x50))
  ;
  (**(code **)(lVar1 + 8))(lVar5,uVar2);
  _swift_continuation_await(plVar4);
  return;
}



/* Address: 0x10040f2c8 | FUN_10040f2c8 */

void FUN_10040f2c8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x98);
  uVar3 = *(undefined8 *)(lVar4 + 0xa0);
  lVar5 = *(long *)(lVar4 + 0x30);
  *(long *)(lVar4 + 0xd8) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_10040f32c;
  }
  else {
    pcVar2 = FUN_10040f3e8;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10040f32c | FUN_10040f32c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040f32c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar2;
  long unaff_x22;
  
  uVar1 = 0;
  if ((*(byte *)(unaff_x22 + 0xe0) & 1) == 0) {
    FUN_10040f5e8(0);
    puVar2 = &DAT_100ed2e08;
    _swift_allocError(&DAT_100ed2e08,uVar1,0,0);
    _swift_willThrow();
    _swift_allocError(&DAT_100ed2e08,uVar1,0,0);
    _swift_willThrow();
    _swift_errorRelease(puVar2);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010040f3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10040f3e8 | FUN_10040f3e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040f3e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_willThrow();
  uVar1 = 0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_10040f5e8(0);
  _swift_allocError(&DAT_100ed2e08,uVar1,0,0);
  _swift_willThrow();
  _swift_errorRelease(uVar2);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010040f464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10040f468 | FUN_10040f468 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040f468(long param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  long local_40;
  undefined1 local_31;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    puVar1 = &DAT_100fc5428;
    local_31 = param_2;
    FUN_1000037f0(&DAT_100fc5428,&DAT_100c48680);
    Swift::CheckedContinuation::resume(&local_31,puVar1);
  }
  else {
    puVar1 = &DAT_100fc5428;
    local_40 = param_3;
    FUN_1000037f0(&DAT_100fc5428,&DAT_100c48680);
    Swift::CheckedContinuation::resume(&local_40,puVar1);
  }
  return;
}



/* Address: 0x10040f510 | FUN_10040f510 */

void FUN_10040f510(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001a7a2c;
  FUN_10040edd8(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10040f570 | FUN_10040f570 */

void FUN_10040f570(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10040f054(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10040f5d0 | FUN_10040f5d0 */

void FUN_10040f5d0(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x10040f5e0 | FUN_10040f5e0 */

void FUN_10040f5e0(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x10040f5e8 | FUN_10040f5e8 */

void FUN_10040f5e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5430 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48b18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48b18,&DAT_100ed2e08);
  DAT_100fc5430 = pTVar1;
  return;
}



/* Address: 0x10040f628 | FUN_10040f628 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10040f628(void)

{
  undefined *puVar1;
  
  if (DAT_100fc5440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___UNNotificationSettings;
  _swift_getObjCClassMetadata();
  DAT_100fc5440 = puVar1;
  return;
}



/* Address: 0x10040f66c | thunk_FUN_10040f5e0 */

void thunk_FUN_10040f5e0(void)

{
  FUN_10040f5e0();
  return;
}



/* Address: 0x10040f670 | thunk_FUN_10040f5d0 */

void thunk_FUN_10040f5d0(void)

{
  FUN_10040f5d0();
  return;
}



/* Address: 0x10040f674 | FUN_10040f674 */

undefined * FUN_10040f674(void)

{
  return &DAT_100c486a0;
}



/* Address: 0x10040f680 | FUN_10040f680 */

undefined * FUN_10040f680(void)

{
  return &DAT_100c486a8;
}



/* Address: 0x10040f68c | FUN_10040f68c */

void FUN_10040f68c(void)

{
  return;
}



/* Address: 0x10040f698 | FUN_10040f698 */

void FUN_10040f698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  uVar1 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_100410188(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_100410188(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x28;
  *(undefined8 *)(lVar3 + 0x20) = param_1;
  *(undefined8 *)(lVar3 + 0x28) = param_2;
  *(undefined8 *)(lVar3 + 0x30) = param_3;
  *(undefined8 *)(lVar3 + 0x38) = param_4;
  *(undefined8 *)(lVar3 + 0x40) = param_5;
  *(ulong *)(unaff_x20 + 0x10) = uVar4;
  return;
}



/* Address: 0x10040f770 | FUN_10040f770 */

undefined8
FUN_10040f770(_StringGuts param_1,_StringGuts param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6)

{
  bool bVar1;
  
  if (((param_1.unknown != param_4) || (param_2.unknown != param_5)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_4), !bVar1)) {
    return 0;
  }
  FUN_10040f7cc(param_3,param_6);
  return param_3;
}



/* Address: 0x10040f7cc | FUN_10040f7cc */

undefined8 FUN_10040f7cc(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 != 0) && (param_1 != param_2)) {
      plVar8 = (long *)(param_1 + 0x40);
      plVar9 = (long *)(param_2 + 0x40);
      do {
        _Var1.unknown = (undefined *)plVar8[-2];
        _Var3.unknown = (undefined *)plVar8[-1];
        lVar10 = *plVar8;
        puVar2 = (undefined *)plVar9[-2];
        puVar4 = (undefined *)plVar9[-1];
        lVar11 = *plVar9;
        if (((undefined *)plVar8[-4] != (undefined *)plVar9[-4] ||
             (undefined *)plVar8[-3] != (undefined *)plVar9[-3]) &&
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)plVar8[-4],(undefined *)plVar8[-3],
                               (_StringComparisonResult)(__int8)(undefined *)plVar9[-4]), !bVar5))
        goto LAB_10040f894;
        if (_Var1.unknown == puVar2 && _Var3.unknown == puVar4) {
          if (lVar10 != lVar11) goto LAB_10040f894;
        }
        else {
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2);
          if (!bVar5) {
            return 0;
          }
          if (lVar10 != lVar11) {
            return 0;
          }
        }
        plVar8 = plVar8 + 5;
        plVar9 = plVar9 + 5;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_10040f894:
    uVar6 = 0;
  }
  return uVar6;
}



/* Address: 0x10040f8bc | FUN_10040f8bc */

void FUN_10040f8bc(Hasher param_1,Hasher param_2,void *param_3,long param_4)

{
  __uint64 _Var1;
  __uint64 _Var2;
  String SVar3;
  Hasher HVar4;
  __uint64 _Var5;
  __uint64 _Var6;
  __uint64 *p_Var7;
  String SVar8;
  
  SVar8.bridgeObject = param_3;
  SVar8.str = param_2.unknown;
  Swift::String::hash(param_1,SVar8);
  _Var5 = *(__uint64 *)(param_4 + 0x10);
  Swift::Hasher::_combine(_Var5,param_2);
  if (_Var5 != 0) {
    p_Var7 = (__uint64 *)(param_4 + 0x40);
    do {
      _Var1 = p_Var7[-3];
      SVar8 = *(String *)(p_Var7 + -4);
      HVar4.unknown = ((String *)(p_Var7 + -2))->str;
      _Var2 = p_Var7[-1];
      SVar3 = *(String *)(p_Var7 + -2);
      _Var6 = *p_Var7;
      _swift_bridgeObjectRetain(_Var1);
      _swift_bridgeObjectRetain(_Var2);
      Swift::String::hash(param_1,SVar8);
      Swift::String::hash(param_1,SVar3);
      Swift::Hasher::_combine(_Var6,HVar4);
      _swift_bridgeObjectRelease(_Var2);
      _swift_bridgeObjectRelease(_Var1);
      _Var5 = _Var5 - 1;
      p_Var7 = p_Var7 + 5;
    } while (_Var5 != 0);
  }
  return;
}



/* Address: 0x10040f968 | FUN_10040f968 */

void FUN_10040f968(Hasher param_1,void *param_2,long param_3)

{
  __uint64 _Var1;
  String SVar2;
  Hasher HVar3;
  Hasher HVar4;
  undefined *puVar5;
  __uint64 _Var6;
  __uint64 *p_Var7;
  String SVar8;
  undefined1 auStack_98 [72];
  
  Swift::Hasher::init(0);
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1.unknown;
  Swift::String::hash((Hasher)auStack_98,SVar8);
  puVar5 = *(undefined **)(param_3 + 0x10);
  HVar3.unknown = puVar5;
  Swift::Hasher::_combine((__uint64)puVar5,param_1);
  if (puVar5 != (undefined *)0x0) {
    p_Var7 = (__uint64 *)(param_3 + 0x40);
    do {
      HVar3.unknown = (undefined *)p_Var7[-3];
      SVar8 = *(String *)(p_Var7 + -4);
      HVar4.unknown = ((String *)(p_Var7 + -2))->str;
      _Var1 = p_Var7[-1];
      SVar2 = *(String *)(p_Var7 + -2);
      _Var6 = *p_Var7;
      _swift_bridgeObjectRetain(HVar3.unknown);
      _swift_bridgeObjectRetain(_Var1);
      Swift::String::hash((Hasher)auStack_98,SVar8);
      Swift::String::hash((Hasher)auStack_98,SVar2);
      Swift::Hasher::_combine(_Var6,HVar4);
      _swift_bridgeObjectRelease(_Var1);
      _swift_bridgeObjectRelease();
      puVar5 = puVar5 + -1;
      p_Var7 = p_Var7 + 5;
    } while (puVar5 != (undefined *)0x0);
  }
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10040fa48 | FUN_10040fa48 */

void FUN_10040fa48(void)

{
  undefined8 *unaff_x20;
  
  FUN_10040f968(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x10040fa54 | FUN_10040fa54 */

void FUN_10040fa54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10040f8bc(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x10040fa60 | FUN_10040fa60 */

void FUN_10040fa60(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_78;
  FUN_10040f8bc(HVar3.unknown,uVar1,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10040fab4 | FUN_10040fab4 */

undefined8 FUN_10040fab4(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = param_1[2];
  lVar3 = param_2[2];
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  FUN_10040f7cc(uVar2,lVar3);
  return uVar2;
}


