/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003a9cfc | FUN_1003a9cfc */

void FUN_1003a9cfc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9d0c | FUN_1003a9d0c */

void FUN_1003a9d0c(long param_1,long param_2)

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



/* Address: 0x1003a9d20 | FUN_1003a9d20 */

void FUN_1003a9d20(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003a9d28 | FUN_1003a9d28 */

void FUN_1003a9d28(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9da0 | FUN_1003a9da0 */

void FUN_1003a9da0(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  FUN_1003a5cf4(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1003a9ddc | FUN_1003a9ddc */

void FUN_1003a9ddc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9e00 | FUN_1003a9e00 */

void FUN_1003a9e00(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9e64 | FUN_1003a9e64 */

void FUN_1003a9e64(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  Swift::CheckedContinuation::resume
            ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
             ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x1003a9eac | FUN_1003a9eac */

void FUN_1003a9eac(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9f2c | FUN_1003a9f2c */

void FUN_1003a9f2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  puVar4 = &DAT_100fc22b0;
  FUN_1000037f0(&DAT_100fc22b0,&DAT_100c44400);
  bVar3 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1003a5ebc(plVar5,param_1,uVar1,uVar2,uVar6,
                unaff_x20 + ((ulong)bVar3 + 0x28 & ((ulong)bVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1003a9fc8 | FUN_1003a9fc8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a9fc8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003a9fec | FUN_1003a9fec */

void FUN_1003a9fec(void)

{
  long unaff_x20;
  
  FUN_1003a81e4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003a9ff4 | FUN_1003a9ff4 */

void FUN_1003a9ff4(void)

{
  long unaff_x20;
  
  FUN_10038a218(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003aa00c | FUN_1003aa00c */

void FUN_1003aa00c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10038d610(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003aa014 | FUN_1003aa014 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003aa014(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003aa058 | FUN_1003aa058 */

void FUN_1003aa058(void)

{
  long unaff_x20;
  
  FUN_1003ab690(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1003aa068 | FUN_1003aa068 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003aa068(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003aa094 | FUN_1003aa094 */

void FUN_1003aa094(void)

{
  long unaff_x20;
  
  FUN_1003a4e38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003aa09c | FUN_1003aa09c */

void FUN_1003aa09c(void)

{
  FUN_1003aa0a4(0x30);
  return;
}



/* Address: 0x1003aa0a4 | FUN_1003aa0a4 */

void FUN_1003aa0a4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003aa0dc | FUN_1003aa0dc */

void FUN_1003aa0dc(undefined8 param_1)

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
  plVar5 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1003a93e0(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003aa154 | thunk_FUN_1003a9ddc */

void thunk_FUN_1003a9ddc(void)

{
  FUN_1003a9ddc();
  return;
}



/* Address: 0x1003aa158 | thunk_FUN_1003a9ddc */

void thunk_FUN_1003a9ddc(void)

{
  FUN_1003a9ddc();
  return;
}



/* Address: 0x1003aa15c | thunk_FUN_1003a9854 */

void thunk_FUN_1003a9854(void)

{
  FUN_1003a9854();
  return;
}



/* Address: 0x1003aa160 | thunk_FUN_1003a9d0c */

void thunk_FUN_1003a9d0c(void)

{
  FUN_1003a9d0c();
  return;
}



/* Address: 0x1003aa164 | thunk_FUN_1003a9d0c */

void thunk_FUN_1003a9d0c(void)

{
  FUN_1003a9d0c();
  return;
}



/* Address: 0x1003aa168 | thunk_FUN_1003a9d0c */

void thunk_FUN_1003a9d0c(void)

{
  FUN_1003a9d0c();
  return;
}



/* Address: 0x1003aa16c | thunk_FUN_1003a9d20 */

void thunk_FUN_1003a9d20(void)

{
  FUN_1003a9d20();
  return;
}



/* Address: 0x1003aa170 | thunk_FUN_1003a9d20 */

void thunk_FUN_1003a9d20(void)

{
  FUN_1003a9d20();
  return;
}



/* Address: 0x1003aa174 | thunk_FUN_1003a9d20 */

void thunk_FUN_1003a9d20(void)

{
  FUN_1003a9d20();
  return;
}



/* Address: 0x1003aa178 | thunk_FUN_1003a9cfc */

void thunk_FUN_1003a9cfc(void)

{
  FUN_1003a9cfc();
  return;
}



/* Address: 0x1003aa17c | thunk_FUN_1003a9cfc */

void thunk_FUN_1003a9cfc(void)

{
  FUN_1003a9cfc();
  return;
}



/* Address: 0x1003aa180 | thunk_FUN_1003aa068 */

void thunk_FUN_1003aa068(void)

{
  thunk_FUN_1003aa068();
  return;
}



/* Address: 0x1003aa184 | thunk_FUN_1003a9cfc */

void thunk_FUN_1003a9cfc(void)

{
  FUN_1003a9cfc();
  return;
}



/* Address: 0x1003aa188 | thunk_FUN_1003aa09c */

void thunk_FUN_1003aa09c(void)

{
  FUN_1003aa09c();
  return;
}



/* Address: 0x1003aa18c | FUN_1003aa18c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003aa18c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ID self;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  long unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  self = *(ID *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,self);
  (**(code **)(lVar2 + 0x18))(self,lVar2);
  IVar4 = self;
  FUN_1003acca0();
  _swift_allocObject();
  *(undefined8 *)(IVar4 + 0x18) = 10;
  *(undefined8 *)(IVar4 + 0x10) = 5;
  uVar5 = 0;
  FUN_10032b0c8();
  *(undefined8 *)(IVar4 + 0x20) = uVar5;
  uVar5 = 0;
  FUN_10032b6a8();
  *(undefined8 *)(IVar4 + 0x28) = uVar5;
  uVar5 = 0;
  FUN_1003214a8();
  *(undefined8 *)(IVar4 + 0x30) = uVar5;
  uVar5 = 0;
  FUN_100311d0c();
  *(undefined8 *)(IVar4 + 0x38) = uVar5;
  uVar5 = 0;
  FUN_100312518();
  *(undefined8 *)(IVar4 + 0x40) = uVar5;
  puVar6 = &DAT_100ece5f8;
  _swift_allocObject(&DAT_100ece5f8,0x28,7);
  *(ID *)(puVar6 + 0x10) = IVar4;
  *(ID *)(puVar6 + 0x18) = self;
  *(long *)(puVar6 + 0x20) = unaff_x20;
  puVar7 = &DAT_100ece620;
  _swift_allocObject(&DAT_100ece620,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1003acd54;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  local_50 = FUN_100209b34;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000d5218;
  puStack_58 = &DAT_100ece638;
  local_48 = puVar7;
  aBlock = __Block_copy(&local_70);
  puVar8 = local_48;
  _swift_retain();
  _swift_retain(puVar7);
  _swift_release(puVar8);
  objc_stub::performBlockAndWait_(self,aBlock);
  __Block_release(aBlock);
  puVar8 = puVar7;
  _swift_isEscapingClosureAtFileLocation(puVar7,"",0x9d,0x14,0x20,1);
  _swift_release(puVar6);
  _swift_release(puVar7);
  if (((ulong)puVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003aa368);
  (*pcVar3)();
}



/* Address: 0x1003aa368 | FUN_1003aa368 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003aa368(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  PendingRecordZoneChange PVar4;
  bool bVar5;
  undefined7 extraout_var;
  ID *pIVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  CKSyncEngine *pCVar13;
  State *pSVar14;
  undefined *puVar15;
  long lVar17;
  char *pcVar18;
  long extraout_x8;
  ulong uVar19;
  code *pcVar20;
  code *pcVar21;
  code *pcVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  undefined8 extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  ID *pIVar26;
  long unaff_x20;
  CKSyncEngine *pCVar27;
  ID *pIVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  code *pcVar33;
  long lVar34;
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
  String SVar49;
  String SVar50;
  ID aIStack_140 [3];
  undefined *local_118;
  undefined *local_90 [3];
  undefined *local_78;
  undefined *puStack_70;
  char *pcVar6;
  _StringGuts _Var16;
  
  PVar4 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  pcVar6 = (char *)CONCAT71(extraout_var,PVar4.value);
  lVar30 = *(long *)(pcVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar30 + 0x40));
  lVar23 = (long)aIStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = (((lVar23 - extraout_x12) - extraout_x12_00) - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar24 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar26 = (ID *)(lVar25 - extraout_x12_04);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pIVar28 = (ID *)((long)pIVar26 - extraout_x12_05);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar34 = *(long *)(param_1 + 0x10);
  if (lVar34 != 0) {
    uVar19 = (ulong)*(byte *)(lVar30 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar30 + 0x50) ^ 0xffffffffffffffff);
    param_1 = param_1 + uVar19;
    lVar32 = *(long *)(lVar30 + 0x48);
    pcVar20 = *(code **)(lVar30 + 0x10);
    iVar2 = *(int *)
             PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
    ;
    iVar3 = *(int *)
             PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_deleteRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92c0
    ;
    local_118 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    aIStack_140[1] = extraout_x15;
    aIStack_140[2] = extraout_x14;
    do {
      (*pcVar20)((long)pIVar28 - extraout_x12_06,param_1,pcVar6);
      pcVar21 = *(code **)(lVar30 + 0x20);
      (*pcVar21)(pIVar28,(long)pIVar28 - extraout_x12_06,pcVar6);
      (*pcVar20)(pIVar26,pIVar28,pcVar6);
      pcVar22 = *(code **)(lVar30 + 0x58);
      pIVar7 = pIVar26;
      (*pcVar22)(pIVar26,pcVar6);
      if ((int)pIVar7 == iVar2 || (int)pIVar7 == iVar3) {
        (**(code **)(lVar30 + 0x60))(pIVar26,pcVar6);
        IVar8 = objc_stub::zoneID(*pIVar26);
        objc_stub::ownerName(IVar8);
        SVar35 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var16.unknown = SVar35.bridgeObject;
        SVar36 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar9 = SVar36.bridgeObject;
        if (SVar35 == SVar36) {
          _swift_bridgeObjectRelease(_Var16.unknown);
          _swift_bridgeObjectRelease(puVar9);
LAB_1003aa6f8:
          (*pcVar20)(lVar25,pIVar28,pcVar6);
          puVar9 = puVar11;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar10 = puVar11;
          if (((ulong)puVar9 & 1) == 0) {
            puVar10 = (undefined *)0x0;
            FUN_100380498(0,*(long *)(puVar11 + 0x10) + 1,1);
            param_4 = puVar11;
          }
          uVar29 = *(ulong *)(puVar10 + 0x10);
          puVar11 = puVar10;
          if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar29) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
            FUN_100380498(puVar11,uVar29 + 1,1);
            param_4 = puVar10;
          }
          *(ulong *)(puVar11 + 0x10) = uVar29 + 1;
          puVar9 = puVar11 + uVar29 * lVar32 + uVar19;
          lVar17 = lVar25;
        }
        else {
          param_4 = puVar9;
          bVar5 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar35.str,_Var16,
                             (_StringComparisonResult)(__int8)SVar36.str);
          _swift_bridgeObjectRelease(_Var16.unknown);
          _swift_bridgeObjectRelease(puVar9);
          if (bVar5) goto LAB_1003aa6f8;
          (*pcVar20)(lVar24,pIVar28,pcVar6);
          puVar9 = local_118;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar9 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_100380498(0,*(long *)(local_118 + 0x10) + 1,1);
            param_4 = local_118;
            local_118 = puVar9;
          }
          uVar29 = *(ulong *)(local_118 + 0x10);
          if (*(ulong *)(local_118 + 0x18) >> 1 <= uVar29) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_118 + 0x18));
            FUN_100380498(puVar9,uVar29 + 1,1);
            param_4 = local_118;
            local_118 = puVar9;
          }
          *(ulong *)(local_118 + 0x10) = uVar29 + 1;
          puVar9 = local_118 + uVar29 * lVar32 + uVar19;
          lVar17 = lVar24;
        }
        (*pcVar21)(puVar9,lVar17,pcVar6);
        pcVar33 = *(code **)(lVar30 + 8);
        pIVar7 = pIVar28;
      }
      else {
        pcVar33 = *(code **)(lVar30 + 8);
        (*pcVar33)(pIVar28,pcVar6);
        pIVar7 = pIVar26;
      }
      (*pcVar33)(pIVar7,pcVar6);
      param_1 = param_1 + lVar32;
      lVar34 = lVar34 + -1;
    } while (lVar34 != 0);
    uVar29 = *(ulong *)(puVar11 + 0x10);
    if (uVar29 != 0) {
      uVar31 = 0;
      puVar9 = puVar11 + uVar19;
      puVar15 = param_4;
      puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (*(ulong *)(puVar11 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1003aadcc);
          (*pcVar20)();
        }
        (*pcVar20)(aIStack_140[1],puVar9,pcVar6);
        pcVar18 = pcVar6;
        (*pcVar20)(aIStack_140[2],aIStack_140[1]);
        IVar8 = aIStack_140[2];
        (*pcVar22)(aIStack_140[2],pcVar6);
        (*pcVar33)(aIStack_140[2],pcVar6);
        if ((int)IVar8 == iVar3) {
          puVar12 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          local_90[0] = puVar10;
          if (((ulong)puVar12 & 1) == 0) {
            FUN_1003077f8(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_90[0] + 0x10);
          if (*(ulong *)(local_90[0] + 0x18) >> 1 <= uVar1) {
            FUN_1003077f8(1 < *(ulong *)(local_90[0] + 0x18),uVar1 + 1,1);
          }
          puVar10 = local_90[0];
          *(ulong *)(local_90[0] + 0x10) = uVar1 + 1;
          pcVar18 = pcVar6;
          (*pcVar21)(local_90[0] + uVar1 * lVar32 + uVar19,aIStack_140[1]);
        }
        else {
          (*pcVar33)(aIStack_140[1],pcVar6);
        }
        uVar31 = uVar31 + 1;
        puVar9 = puVar9 + lVar32;
      } while (uVar29 != uVar31);
      lVar34 = *(long *)(puVar10 + 0x10);
      _swift_release(puVar10);
      param_4 = puVar15;
      if (lVar34 != 0) {
        FUN_1000d468c(local_90);
        param_4 = puStack_70;
        puVar9 = local_78;
        _Var16.unknown = local_78;
        FUN_100004640(local_90);
        Swift::_StringGuts::grow(0x3e,_Var16);
        SVar35.bridgeObject = (void *)0x8000000100da4c60;
        SVar35.str = (char *)0xd000000000000015;
        SVar41.bridgeObject = puVar15;
        SVar41.str = pcVar18;
        Swift::String::append(SVar35,SVar41);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar42.bridgeObject = puVar15;
        SVar42.str = pcVar18;
        Swift::String::append(SVar35,SVar42);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar36.bridgeObject = (void *)0xea00000000002820;
        SVar36.str = (char *)0x7365676e61686320;
        SVar43.bridgeObject = puVar15;
        SVar43.str = pcVar18;
        Swift::String::append(SVar36,SVar43);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar44.bridgeObject = puVar15;
        SVar44.str = pcVar18;
        Swift::String::append(SVar35,SVar44);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar37.bridgeObject = (void *)0x8000000100da4ca0;
        SVar37.str = (char *)0xd00000000000001b;
        SVar45.bridgeObject = puVar15;
        SVar45.str = pcVar18;
        Swift::String::append(SVar37,SVar45);
        FUN_1000d4db8(0,0xe000000000000000,puVar9);
        _swift_bridgeObjectRelease(0xe000000000000000);
        FUN_100004594(local_90);
      }
      pCVar27 = *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine);
      if (pCVar27 != (CKSyncEngine *)0x0) {
        pCVar13 = pCVar27;
        _swift_retain();
        pSVar14 = CloudKit::CKSyncEngine::get_state(pCVar27,pCVar13);
        _swift_release(pCVar27);
        CloudKit::CKSyncEngine::State::add(pSVar14,puVar11);
        _swift_release(pSVar14);
      }
    }
    uVar29 = *(ulong *)(local_118 + 0x10);
    if (uVar29 == 0) {
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      uVar31 = 0;
      puVar9 = local_118 + uVar19;
      puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (*(ulong *)(local_118 + 0x10) <= uVar31) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1003aadd0);
          (*pcVar20)();
        }
        (*pcVar20)(extraout_x13,puVar9,pcVar6);
        pcVar18 = pcVar6;
        (*pcVar20)(lVar23,extraout_x13);
        lVar34 = lVar23;
        (*pcVar22)(lVar23,pcVar6);
        (*pcVar33)(lVar23,pcVar6);
        if ((int)lVar34 == iVar3) {
          puVar15 = puVar10;
          _swift_isUniquelyReferenced_nonNull_native();
          local_90[0] = puVar10;
          if (((ulong)puVar15 & 1) == 0) {
            FUN_1003077f8(0,*(long *)(puVar10 + 0x10) + 1,1);
          }
          uVar1 = *(ulong *)(local_90[0] + 0x10);
          if (*(ulong *)(local_90[0] + 0x18) >> 1 <= uVar1) {
            FUN_1003077f8(1 < *(ulong *)(local_90[0] + 0x18),uVar1 + 1,1);
          }
          puVar10 = local_90[0];
          *(ulong *)(local_90[0] + 0x10) = uVar1 + 1;
          pcVar18 = pcVar6;
          (*pcVar21)(local_90[0] + uVar1 * lVar32 + uVar19,extraout_x13);
        }
        else {
          (*pcVar33)(extraout_x13,pcVar6);
        }
        uVar31 = uVar31 + 1;
        puVar9 = puVar9 + lVar32;
      } while (uVar29 != uVar31);
      lVar34 = *(long *)(puVar10 + 0x10);
      _swift_release(puVar10);
      if (lVar34 != 0) {
        FUN_1000d468c(local_90);
        _Var16.unknown = local_78;
        FUN_100004640(local_90);
        Swift::_StringGuts::grow(0x3d,_Var16);
        SVar38.bridgeObject = (void *)0x8000000100da4c60;
        SVar38.str = (char *)0xd000000000000015;
        SVar46.bridgeObject = param_4;
        SVar46.str = pcVar18;
        Swift::String::append(SVar38,SVar46);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar47.bridgeObject = param_4;
        SVar47.str = pcVar18;
        Swift::String::append(SVar35,SVar47);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar39.bridgeObject = (void *)0xea00000000002820;
        SVar39.str = (char *)0x7365676e61686320;
        SVar48.bridgeObject = param_4;
        SVar48.str = pcVar18;
        Swift::String::append(SVar39,SVar48);
        SVar35 = Swift::CustomStringConvertible::get_description();
        SVar49.bridgeObject = param_4;
        SVar49.str = pcVar18;
        Swift::String::append(SVar35,SVar49);
        _swift_bridgeObjectRelease(SVar35.bridgeObject);
        SVar40.bridgeObject = (void *)0x8000000100da4c80;
        SVar40.str = (char *)0xd00000000000001a;
        SVar50.bridgeObject = param_4;
        SVar50.str = pcVar18;
        Swift::String::append(SVar40,SVar50);
        FUN_1000d4db8(0,0xe000000000000000,local_78,puStack_70);
        _swift_bridgeObjectRelease(0xe000000000000000);
        FUN_100004594(local_90);
      }
      pCVar27 = *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
      if (pCVar27 != (CKSyncEngine *)0x0) {
        pCVar13 = pCVar27;
        _swift_retain();
        pSVar14 = CloudKit::CKSyncEngine::get_state(pCVar27,pCVar13);
        _swift_release(pCVar27);
        CloudKit::CKSyncEngine::State::add(pSVar14,local_118);
        _swift_bridgeObjectRelease(puVar11);
        _swift_bridgeObjectRelease(local_118);
        _swift_release(pSVar14);
        return;
      }
      _swift_bridgeObjectRelease(puVar11);
    }
    _swift_bridgeObjectRelease(local_118);
  }
  return;
}



/* Address: 0x1003aadd0 | FUN_1003aadd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003ab268) */

void FUN_1003aadd0(long param_1,char *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  PendingRecordZoneChange PVar4;
  undefined7 extraout_var;
  _ArrayBuffer _Var5;
  ulong *puVar6;
  ID IVar7;
  URL UVar8;
  undefined **ppuVar9;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar10;
  CKRecordID *pCVar11;
  CKRecordID *pCVar12;
  undefined *puVar13;
  _CocoaArrayWrapper _Var14;
  _ArrayBuffer _Var15;
  _StringGuts _Var16;
  void *pvVar17;
  long extraout_x8;
  undefined8 *puVar18;
  long extraout_x8_00;
  ID IVar19;
  long lVar20;
  undefined *puVar21;
  ID IVar22;
  ulong *puVar23;
  ContiguousArray CVar24;
  String SVar25;
  String zoneName;
  String SVar26;
  String SVar27;
  long local_1a0 [3];
  undefined4 local_184;
  undefined8 local_180;
  long local_178;
  CKRecordID *local_170;
  undefined8 *local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  long local_128;
  long local_120;
  undefined *local_118;
  ulong local_110;
  ID local_108;
  _ArrayBuffer local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  
  local_1a0[0] = param_3;
  PVar4 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  local_158 = CONCAT71(extraout_var,PVar4.value);
  local_160 = *(long *)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_160 + 0x40));
  puVar18 = (undefined8 *)((long)local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_168 = puVar18;
  local_118 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_120 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_120 + 0x40));
  local_128 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0[2] = *(long *)(param_1 + 0x10);
  if (local_1a0[2] == 0) {
    local_150 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar20 = 0;
    local_1a0[1] = param_1 + 0x20;
    local_180 = *(undefined8 *)PTR__CKCurrentUserDefaultName_100ea95d0;
    local_184 = *(undefined4 *)
                 PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
    ;
    uStack_138 = 2;
    local_140 = 1;
    local_150 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_148 = param_2;
    do {
      uStack_d8 = 0;
      local_e0 = (undefined *)0x0;
      local_c8 = (undefined *)0x0;
      uStack_d0 = 0;
      _Var5.unknown = (undefined *)&local_e0;
      local_178 = lVar20;
      FUN_10035f650(_Var5.unknown,param_2);
      _Var15.unknown = &DAT_100fbe6f0;
      FUN_100005808(&local_e0,&DAT_100fbe6f0,&DAT_100c42750);
      local_e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        puVar21 = *(undefined **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var14.unknown = _Var5.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
          _Var14.unknown = _Var5.unknown;
        }
        puVar21 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var14);
      }
      _Var14.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (puVar21 != (undefined *)0x0) {
        puVar23 = (ulong *)0x0;
        do {
          if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
            if (*(ulong **)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ab68c);
              (*pcVar3)();
            }
            puVar6 = *(ulong **)(_Var5.unknown + (long)puVar23 * 8 + 0x20);
          }
          else {
            puVar6 = puVar23;
            _Var15.unknown = _Var5.unknown;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar23,_Var5);
          }
          puVar13 = (undefined *)((long)puVar23 + 1);
          if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ab688);
            (*pcVar3)();
          }
          CVar24.unknown = (undefined *)puVar6;
          (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar6) + 0x88))();
          if (((ulong)CVar24.unknown & 1) != 0) {
            Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar24);
                    /* WARNING: Load size is inaccurate */
            CVar24.unknown = local_e0[0x10];
            Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                      ((__int64)CVar24.unknown,(ContiguousArray)_Var15.unknown);
            Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
            Swift::ContiguousArray::__endMutation(CVar24);
            _Var15.unknown = (undefined *)puVar6;
          }
          puVar23 = (ulong *)((long)puVar23 + 1);
          _Var14.unknown = local_e0;
          param_2 = local_148;
        } while (puVar13 != puVar21);
      }
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (((long)_Var14.unknown < 0) || (((ulong)_Var14.unknown >> 0x3e & 1) != 0)) {
        IVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var14);
      }
      else {
        IVar19 = *(ID *)(_Var14.unknown + 0x10);
      }
      if (IVar19 != 0) {
        FUN_10038fef4(0);
        if ((long)IVar19 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003ab690);
          (*pcVar3)();
        }
        IVar22 = 0;
        local_110 = (ulong)_Var14.unknown & 0xc000000000000001;
        local_108 = IVar19;
        local_100.unknown = _Var14.unknown;
        do {
          if (local_110 == 0) {
            IVar19 = *(ID *)(local_100.unknown + IVar22 * 8 + 0x20);
          }
          else {
            IVar19 = IVar22;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar22,local_100);
          }
          IVar7 = objc_stub::objectID(IVar19);
          UVar8.unknown = (undefined *)objc_stub::URIRepresentation(IVar7);
          lVar20 = local_128;
          Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
          SVar25 = Foundation::URL::get_absoluteString((URL)0x0);
          (**(code **)(local_120 + 8))(lVar20,local_118);
          puVar21 = &DAT_100fbef68;
          FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
          _swift_initStackObject();
          *(undefined8 *)(puVar21 + 0x18) = uStack_138;
          *(undefined8 *)(puVar21 + 0x10) = local_140;
          *(undefined8 *)(puVar21 + 0x20) = 0x52557463656a626f;
          *(undefined8 *)(puVar21 + 0x28) = 0xe900000000000049;
          *(String *)(puVar21 + 0x30) = SVar25;
          puVar13 = puVar21;
          FUN_1003c92b8();
          _swift_setDeallocating(puVar21);
          FUN_100005808(puVar21 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
          puVar21 = &DAT_100fbef78;
          FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
          ppuVar9 = &local_e0;
          local_e0 = puVar13;
          local_c8 = puVar21;
          FUN_100328974(ppuVar9,0,param_2);
          FUN_100004594(&local_e0);
          if (ppuVar9 == (undefined **)0x0) {
            IVar19 = objc_stub::objectID(IVar19);
            FUN_10038ff74(IVar19,param_2);
            if (IVar19 != 0) {
              this = (CKRecordZoneID *)0x0;
              FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
              SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              zoneName.bridgeObject = &DAT_e500000000000000;
              zoneName.str = (char *)0x6574736150;
              pCVar10 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                                  (this,zoneName,SVar25);
              puVar21 = &_OBJC_CLASS___CKRecordZone;
              _objc_allocWithZone();
              IVar7 = objc_stub::initWithZoneID_((ID)puVar21,pCVar10);
              objc_stub::cloudKitRecordName(IVar19);
              SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              pvVar17 = SVar25.bridgeObject;
              _swift_bridgeObjectRelease(pvVar17);
              uVar1 = (ulong)SVar25.str & 0xffffffffffff;
              if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
                uVar1 = (ulong)pvVar17 >> 0x38 & 0xf;
              }
              if (uVar1 != 0) {
                pCVar11 = (CKRecordID *)0x0;
                FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
                local_170 = pCVar11;
                objc_stub::cloudKitRecordName(IVar19);
                SVar25 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                pCVar10 = (CKRecordZoneID *)objc_stub::zoneID(IVar7);
                pCVar12 = (extension_CloudKit)::__C::CKRecordID::__allocating_init
                                    (local_170,SVar25,pCVar10);
                puVar18 = local_168;
                *local_168 = pCVar12;
                (**(code **)(local_160 + 0x68))(puVar18,local_184,local_158);
                puVar21 = local_150;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar13 = local_150;
                if (((ulong)puVar21 & 1) == 0) {
                  puVar13 = (undefined *)0x0;
                  FUN_100380498(0,*(long *)(local_150 + 0x10) + 1,1);
                }
                uVar1 = *(ulong *)(puVar13 + 0x10);
                if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
                  puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                  FUN_100380498(puVar13,uVar1 + 1,1);
                }
                *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
                local_150 = puVar13;
                (**(code **)(local_160 + 0x20))
                          (puVar13 + *(long *)(local_160 + 0x48) * uVar1 +
                                     ((ulong)*(byte *)(local_160 + 0x50) + 0x20 &
                                     ((ulong)*(byte *)(local_160 + 0x50) ^ 0xffffffffffffffff)),
                           local_168,local_158);
              }
            }
          }
          IVar22 = IVar22 + 1;
          _Var14.unknown = local_100.unknown;
        } while (local_108 != IVar22);
      }
      lVar20 = local_178 + 1;
      _swift_release(_Var14.unknown);
    } while (lVar20 != local_1a0[2]);
  }
  pvVar17 = (void *)0x0;
  FUN_100395ff8(0xd00000000000001b,0x8000000100da4d80);
  puVar21 = local_150;
  if (*(long *)(local_150 + 0x10) == 0) {
    FUN_1000d468c(&local_e0);
    puVar13 = local_c8;
    ppuVar9 = &local_e0;
    FUN_100004640(ppuVar9,local_c8);
    FUN_1000d4db8(0x1000000000000047,0x8000000100da4dc0,puVar13,uStack_c0,ppuVar9);
    _swift_bridgeObjectRelease(puVar21);
    FUN_100004594(&local_e0);
  }
  else {
    FUN_1000d468c(&local_e0);
    puVar13 = local_c8;
    _Var16.unknown = local_c8;
    FUN_100004640(&local_e0);
    local_f0 = 0;
    local_e8 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1f,_Var16);
    _swift_bridgeObjectRelease(local_e8);
    local_f0 = 0xd000000000000015;
    local_e8 = 0x8000000100da4da0;
    local_f8 = *(undefined8 *)(puVar21 + 0x10);
    SVar25 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = pvVar17;
    SVar26.str = param_2;
    Swift::String::append(SVar25,SVar26);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    SVar25.bridgeObject = &DAT_e800000000000000;
    SVar25.str = (char *)0x737463656a626f20;
    SVar27.bridgeObject = pvVar17;
    SVar27.str = param_2;
    Swift::String::append(SVar25,SVar27);
    uVar2 = local_e8;
    FUN_1000d4db8(local_f0,local_e8,puVar13,uStack_c0);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100004594(&local_e0);
    FUN_1003aa368(puVar21);
    _swift_bridgeObjectRelease(puVar21);
  }
  return;
}



/* Address: 0x1003ab690 | FUN_1003ab690 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ab690(_ArrayBuffer param_1,undefined *param_2,long param_3,CKRecordZoneID *param_4,
                  long param_5)

{
  _CocoaArrayWrapper _Var1;
  String SVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  code *pcVar5;
  bool bVar6;
  PendingRecordZoneChange PVar7;
  undefined7 extraout_var;
  undefined8 uVar8;
  URL UVar9;
  undefined *puVar10;
  undefined **self;
  _StringGuts _Var11;
  CKRecordZoneID *pCVar12;
  CKRecordZoneID *pCVar13;
  undefined *puVar14;
  ID IVar15;
  CKRecordID *pCVar16;
  CKRecordZoneID *pCVar17;
  CKRecordID *pCVar18;
  CKRecordZoneID *pCVar19;
  NSString *pNVar20;
  undefined8 *****pppppuVar21;
  undefined8 *****pppppuVar22;
  undefined *puVar23;
  _StringGuts _Var24;
  void *pvVar25;
  long extraout_x8;
  long extraout_x8_00;
  ID *pIVar26;
  undefined8 *puVar27;
  ulong uVar28;
  long extraout_x12;
  long extraout_x12_00;
  ulong *puVar29;
  undefined **ppuVar30;
  undefined8 *****pppppuVar31;
  ID IVar32;
  undefined **ppuVar33;
  long lVar34;
  undefined **ppuVar35;
  ulong uVar36;
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
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  ID IStack_270;
  undefined8 *local_268;
  long local_260;
  long local_258;
  CKRecordZoneID *local_250;
  CKRecordZoneID *local_248;
  char *local_240;
  undefined *local_238;
  ID *local_230;
  CKRecordZoneID *local_228;
  ulong *local_220;
  undefined8 uStack_218;
  undefined **local_208;
  undefined **local_200;
  _ArrayBuffer local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  long local_1d8;
  long lStack_1d0;
  CKRecordZoneID *local_1c8;
  undefined **local_1c0;
  ID local_1b8;
  long local_1b0;
  long local_1a8;
  undefined *puStack_1a0;
  CKRecordZoneID *local_198;
  undefined8 ****local_190;
  CKRecordZoneID *local_188;
  CKRecordZoneID *local_180;
  CKRecordZoneID *pCStack_178;
  undefined8 local_170;
  undefined8 local_168;
  ID local_160;
  undefined *local_d8 [3];
  undefined *local_c0;
  CKRecordZoneID *pCStack_b8;
  
  pCVar19 = param_4;
  local_260 = param_5;
  local_258 = param_3;
  local_1f8.unknown = param_2;
  PVar7 = CloudKit::CKSyncEngine::PendingRecordZoneChange::typeMetadataAccessor();
  lStack_1d0 = CONCAT71(extraout_var,PVar7.value);
  local_1d8 = *(long *)(lStack_1d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1d8 + 0x40));
  pIVar26 = (ID *)((long)&IStack_270 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_230 = pIVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar27 = (undefined8 *)((long)pIVar26 - extraout_x12);
  local_268 = puVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar27 = (undefined8 *)((long)puVar27 - extraout_x12_00);
  local_228 = (CKRecordZoneID *)puVar27;
  puStack_1a0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_1a8 = *(long *)(puStack_1a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1a8 + 0x40));
  local_1b0 = (long)puVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    local_200 = *(undefined ***)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    local_200 = (undefined **)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  lVar34 = _TtC9PasteCore10SyncEngine::logger;
  local_1c8 = param_4;
  if (local_200 == (undefined **)0x0) {
    local_1b8 = 0;
    local_240 = (char *)CONCAT44(local_240._4_4_,
                                 *(undefined4 *)
                                  PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
                                );
    local_198 = (CKRecordZoneID *)PTR___swiftEmptyArrayStorage_100eae0d8;
    IVar32 = local_1b8;
  }
  else {
    uVar8 = 0;
    FUN_10038fef4();
    local_1f0 = uVar8;
    if ((long)local_200 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003acc8c);
      (*pcVar5)();
    }
    ppuVar33 = (undefined **)0x0;
    IVar32 = 0;
    local_248 = *(CKRecordZoneID **)(local_260 + lVar34);
    local_208 = (undefined **)((ulong)param_1.unknown & 0xc000000000000001);
    local_250 = (CKRecordZoneID *)0x8000000100da4d60;
    local_240 = (char *)CONCAT44(local_240._4_4_,
                                 *(undefined4 *)
                                  PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_saveRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92b8
                                );
    local_198 = (CKRecordZoneID *)PTR___swiftEmptyArrayStorage_100eae0d8;
    uStack_218 = 2;
    local_220 = (ulong *)0x1;
    local_238 = param_1.unknown;
    do {
      if (local_208 == (undefined **)0x0) {
        ppuVar30 = *(undefined ***)(param_1.unknown + (long)ppuVar33 * 8 + 0x20);
      }
      else {
        ppuVar30 = ppuVar33;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)ppuVar33,param_1);
      }
      UVar9.unknown = (undefined *)objc_stub::URIRepresentation((ID)ppuVar30);
      lVar34 = local_1b0;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
      SVar37 = Foundation::URL::get_absoluteString((URL)0x0);
      (**(code **)(local_1a8 + 8))(lVar34,puStack_1a0);
      puVar14 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar14 + 0x18) = uStack_218;
      *(ulong **)(puVar14 + 0x10) = local_220;
      *(undefined8 *)(puVar14 + 0x20) = 0x52557463656a626f;
      *(undefined8 *)(puVar14 + 0x28) = 0xe900000000000049;
      *(String *)(puVar14 + 0x30) = SVar37;
      puVar10 = puVar14;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar14);
      FUN_100005808(puVar14 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
      puVar14 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      self = local_d8;
      _Var24.unknown = (undefined *)0x0;
      local_d8[0] = puVar10;
      local_c0 = puVar14;
      FUN_100328974(self,0,param_4);
      _Var11.unknown = (undefined *)local_d8;
      FUN_100004594();
      if (self == (undefined **)0x0) {
        self = ppuVar30;
        FUN_10038ff74(ppuVar30,param_4);
        ppuVar35 = local_200;
        if (IVar32 == 0) {
          param_4 = local_1c8;
          if (self != (undefined **)0x0) goto LAB_1003abb3c;
        }
        else {
          if (DAT_100fc2140 != -1) {
            _swift_once(&DAT_100fc2140,FUN_10038ff18);
          }
          FUN_1000da768(local_d8);
          pCVar13 = pCStack_b8;
          puVar14 = local_c0;
          FUN_100004640(local_d8,local_c0);
          (**(code **)(pCVar13 + 0x20))(IVar32,puVar14,pCVar13);
          _swift_errorRelease(IVar32);
          FUN_100004594(local_d8);
          IVar32 = 0;
          param_4 = local_1c8;
        }
      }
      else {
        local_1c0 = ppuVar30;
        FUN_10038f124();
        ppuVar30 = local_1c0;
        if ((undefined **)_Var11.unknown != (undefined **)0x0) {
          FUN_1003b41b8();
          SVar37.bridgeObject = _Var24.unknown;
          SVar37.str = _Var11.unknown;
          if (IVar32 == 0) {
            local_1b8 = IVar32;
            objc_stub::cloudKitRecordName((ID)self);
            SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            if (SVar38 == SVar37) {
              _swift_bridgeObjectRelease(_Var24.unknown);
              _swift_bridgeObjectRelease(SVar38.bridgeObject);
              ppuVar30 = local_1c0;
              IVar32 = local_1b8;
            }
            else {
              bVar6 = Swift::_stringCompareWithSmolCheck
                                (_Var11,_Var24,(_StringComparisonResult)(__int8)SVar38.str);
              _swift_bridgeObjectRelease(SVar38.bridgeObject);
              if (bVar6) {
                _swift_bridgeObjectRelease(_Var24.unknown);
                ppuVar30 = local_1c0;
                IVar32 = local_1b8;
              }
              else {
                pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(_Var24.unknown);
                objc_stub::FUN_100c0ae80((ID)self,pNVar20);
                ppuVar30 = local_1c0;
                IVar32 = local_1b8;
              }
            }
          }
          else {
            _swift_errorRelease(IVar32);
            local_1b8 = 0;
            ppuVar30 = local_1c0;
            IVar32 = local_1b8;
          }
        }
LAB_1003abb3c:
        local_1b8 = IVar32;
        local_1c0 = ppuVar30;
        pCVar12 = (CKRecordZoneID *)0x0;
        FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
        objc_stub::cloudKitZoneName((ID)self);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        objc_stub::cloudKitZoneOwnerName((ID)self);
        SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pCVar19 = SVar38.bridgeObject;
        pCVar13 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                            (pCVar12,SVar37,SVar38);
        puVar14 = &_OBJC_CLASS___CKRecordZone;
        _objc_allocWithZone();
        IVar15 = objc_stub::initWithZoneID_((ID)puVar14,pCVar13);
        objc_stub::cloudKitRecordName((ID)self);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pvVar25 = SVar37.bridgeObject;
        _swift_bridgeObjectRelease(pvVar25);
        uVar36 = (ulong)SVar37.str & 0xffffffffffff;
        if (((ulong)pvVar25 & 0x2000000000000000) != 0) {
          uVar36 = (ulong)pvVar25 >> 0x38 & 0xf;
        }
        IVar32 = local_1b8;
        ppuVar35 = local_200;
        param_4 = local_1c8;
        param_1.unknown = local_238;
        if (uVar36 != 0) {
          pCVar16 = (CKRecordID *)0x0;
          FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
          objc_stub::cloudKitRecordName((ID)self);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pCVar17 = (CKRecordZoneID *)objc_stub::zoneID(IVar15);
          pCVar18 = (extension_CloudKit)::__C::CKRecordID::__allocating_init(pCVar16,SVar37,pCVar17)
          ;
          FUN_1000d468c(local_d8,0);
          pCVar13 = pCStack_b8;
          puVar14 = local_c0;
          _Var11.unknown = local_c0;
          FUN_100004640(local_d8);
          local_190 = (undefined8 ****)0x0;
          local_188 = (CKRecordZoneID *)0xe000000000000000;
          Swift::_StringGuts::grow(0x1d,_Var11);
          _swift_bridgeObjectRelease(local_188);
          local_190 = (undefined8 *****)0xd000000000000014;
          local_188 = local_250;
          objc_stub::cloudKitRecordName((ID)self);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar45.bridgeObject = pCVar19;
          SVar45.str = (char *)pCVar17;
          Swift::String::append(SVar37,SVar45);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          SVar38.bridgeObject = &DAT_e500000000000000;
          SVar38.str = (char *)0x3d69727520;
          SVar46.bridgeObject = pCVar19;
          SVar46.str = (char *)pCVar17;
          Swift::String::append(SVar38,SVar46);
          objc_stub::FUN_100c07540((ID)self);
          SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar47.bridgeObject = pCVar19;
          SVar47.str = (char *)pCVar17;
          Swift::String::append(SVar37,SVar47);
          _swift_bridgeObjectRelease(SVar37.bridgeObject);
          pCVar19 = local_188;
          FUN_1000d4db8(local_190,local_188,puVar14);
          _swift_bridgeObjectRelease(pCVar19);
          FUN_100004594(local_d8);
          pCVar19 = local_228;
          *(CKRecordID **)local_228 = pCVar18;
          (**(code **)(local_1d8 + 0x68))(pCVar19,(ulong)local_240 & 0xffffffff,lStack_1d0);
          pCVar19 = local_198;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)pCVar19 & 1) == 0) {
            pCVar19 = (CKRecordZoneID *)0x0;
            FUN_100380498(0,*(undefined **)(local_198 + 0x10) + 1,1);
            pCVar13 = local_198;
            local_198 = pCVar19;
          }
          IVar32 = local_1b8;
          param_4 = local_1c8;
          param_1.unknown = local_238;
          puVar14 = *(undefined **)(local_198 + 0x10);
          pCVar19 = pCVar13;
          if ((undefined *)((ulong)*(undefined **)(local_198 + 0x18) >> 1) <= puVar14) {
            pCVar13 = (CKRecordZoneID *)
                      (ulong)((undefined *)0x1 < *(undefined **)(local_198 + 0x18));
            FUN_100380498(pCVar13,puVar14 + 1,1);
            pCVar19 = local_198;
            local_198 = pCVar13;
          }
          *(undefined **)(local_198 + 0x10) = puVar14 + 1;
          (**(code **)(local_1d8 + 0x20))
                    (local_198 +
                     *(long *)(local_1d8 + 0x48) * (long)puVar14 +
                     ((ulong)*(byte *)(local_1d8 + 0x50) + 0x20 &
                     ((ulong)*(byte *)(local_1d8 + 0x50) ^ 0xffffffffffffffff)),local_228,lStack_1d0
                    );
          ppuVar35 = local_200;
        }
      }
      ppuVar33 = (undefined **)((long)ppuVar33 + 1);
    } while (ppuVar35 != ppuVar33);
  }
  local_1b8 = IVar32;
  puVar29 = (ulong *)(local_258 + 0x40);
  uVar28 = 1L << ((ulong)*(byte *)(local_258 + 0x20) & 0x3f);
  uVar36 = 0xffffffffffffffff;
  if ((*(byte *)(local_258 + 0x20) & 0x3f) < 6) {
    uVar36 = ~(-1L << (uVar28 & 0x3f));
  }
  uVar36 = uVar36 & *puVar29;
  local_200 = *(undefined ***)(local_260 + _TtC9PasteCore10SyncEngine::logger);
  pCVar13 = (CKRecordZoneID *)(uVar28 + 0x3f >> 6);
  local_238 = (undefined *)0x8000000100da4d40;
  _swift_bridgeObjectRetain();
  lVar34 = 0;
  uStack_1e8 = 2;
  local_1f0 = 1;
  local_220 = puVar29;
  local_228 = pCVar13;
joined_r0x0001003abf50:
  do {
    if (uVar36 != 0) {
      uVar28 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
      uVar28 = (uVar28 & 0xcccccccccccccccc) >> 2 | (uVar28 & 0x3333333333333333) << 2;
      uVar28 = (uVar28 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar28 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar28 = (uVar28 & 0xff00ff00ff00ff00) >> 8 | (uVar28 & 0xff00ff00ff00ff) << 8;
      uVar28 = (uVar28 & 0xffff0000ffff0000) >> 0x10 | (uVar28 & 0xffff0000ffff) << 0x10;
      uVar36 = uVar36 - 1 & uVar36;
      uVar28 = lVar34 << 9 | LZCOUNT(uVar28 >> 0x20 | uVar28 << 0x20) << 3;
      ppuVar30 = *(undefined ***)(*(long *)(local_258 + 0x30) + uVar28);
      ppuVar33 = *(undefined ***)(*(long *)(local_258 + 0x38) + uVar28);
      FUN_10038fef4(0);
      local_1c0 = ppuVar33;
      _swift_bridgeObjectRetain(ppuVar33);
      UVar9.unknown = (undefined *)objc_stub::URIRepresentation((ID)ppuVar30);
      lVar3 = local_1b0;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
      SVar37 = Foundation::URL::get_absoluteString((URL)0x0);
      (**(code **)(local_1a8 + 8))(lVar3,puStack_1a0);
      puVar14 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar14 + 0x18) = uStack_1e8;
      *(undefined8 *)(puVar14 + 0x10) = local_1f0;
      *(undefined8 *)(puVar14 + 0x20) = 0x52557463656a626f;
      *(undefined8 *)(puVar14 + 0x28) = 0xe900000000000049;
      *(String *)(puVar14 + 0x30) = SVar37;
      puVar10 = puVar14;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar14);
      FUN_100005808(puVar14 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
      puVar14 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      ppuVar33 = local_d8;
      _Var24.unknown = (undefined *)0x0;
      local_d8[0] = puVar10;
      local_c0 = puVar14;
      FUN_100328974(ppuVar33,0,param_4);
      _Var11.unknown = (undefined *)local_d8;
      FUN_100004594();
      IVar32 = local_1b8;
      if (ppuVar33 == (undefined **)0x0) {
        ppuVar33 = ppuVar30;
        FUN_10038ff74(ppuVar30,param_4);
        local_1b8 = IVar32;
        if (IVar32 != 0) {
          if (DAT_100fc2140 != -1) {
            _swift_once(&DAT_100fc2140,FUN_10038ff18);
          }
          FUN_1000da768(local_d8);
          pCVar13 = pCStack_b8;
          puVar14 = local_c0;
          FUN_100004640(local_d8,local_c0);
          IVar32 = local_1b8;
          (**(code **)(pCVar13 + 0x20))(local_1b8,puVar14,pCVar13);
          _swift_bridgeObjectRelease(local_1c0);
          _swift_errorRelease(IVar32);
          FUN_100004594(local_d8);
          local_1b8 = 0;
          param_4 = local_1c8;
          pCVar13 = local_228;
          puVar29 = local_220;
          goto joined_r0x0001003abf50;
        }
        if (ppuVar33 == (undefined **)0x0) {
          _swift_bridgeObjectRelease(local_1c0);
          param_4 = local_1c8;
          pCVar13 = local_228;
          puVar29 = local_220;
          goto joined_r0x0001003abf50;
        }
      }
      else {
        local_208 = ppuVar30;
        FUN_10038f124();
        IVar32 = local_1b8;
        ppuVar30 = local_208;
        if ((undefined **)_Var11.unknown != (undefined **)0x0) {
          FUN_1003b41b8();
          SVar2.bridgeObject = _Var24.unknown;
          SVar2.str = _Var11.unknown;
          if (IVar32 == 0) {
            local_1b8 = IVar32;
            objc_stub::cloudKitRecordName((ID)ppuVar33);
            SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            if (SVar37 == SVar2) {
              _swift_bridgeObjectRelease(_Var24.unknown);
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              ppuVar30 = local_208;
            }
            else {
              bVar6 = Swift::_stringCompareWithSmolCheck
                                (_Var11,_Var24,(_StringComparisonResult)(__int8)SVar37.str);
              _swift_bridgeObjectRelease(SVar37.bridgeObject);
              if (bVar6) {
                _swift_bridgeObjectRelease(_Var24.unknown);
                ppuVar30 = local_208;
              }
              else {
                pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(_Var24.unknown);
                objc_stub::FUN_100c0ae80((ID)ppuVar33,pNVar20);
                ppuVar30 = local_208;
              }
            }
          }
          else {
            _swift_errorRelease(IVar32);
            local_1b8 = 0;
            ppuVar30 = local_208;
          }
        }
      }
      local_208 = ppuVar30;
      pCVar12 = (CKRecordZoneID *)0x0;
      FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
      objc_stub::cloudKitZoneName((ID)ppuVar33);
      SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      objc_stub::cloudKitZoneOwnerName((ID)ppuVar33);
      SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pCVar19 = SVar38.bridgeObject;
      pCVar13 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(pCVar12,SVar37,SVar38);
      puVar14 = &_OBJC_CLASS___CKRecordZone;
      _objc_allocWithZone();
      IVar32 = objc_stub::initWithZoneID_((ID)puVar14,pCVar13);
      objc_stub::cloudKitRecordName((ID)ppuVar33);
      SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar25 = SVar37.bridgeObject;
      _swift_bridgeObjectRelease(pvVar25);
      uVar28 = (ulong)SVar37.str & 0xffffffffffff;
      if (((ulong)pvVar25 & 0x2000000000000000) != 0) {
        uVar28 = (ulong)pvVar25 >> 0x38 & 0xf;
      }
      if (uVar28 == 0) {
        _swift_bridgeObjectRelease(local_1c0);
        param_4 = local_1c8;
        pCVar13 = local_228;
        puVar29 = local_220;
      }
      else {
        pCVar16 = (CKRecordID *)0x0;
        FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
        objc_stub::cloudKitRecordName((ID)ppuVar33);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pCVar13 = (CKRecordZoneID *)objc_stub::zoneID(IVar32);
        pCVar18 = (extension_CloudKit)::__C::CKRecordID::__allocating_init(pCVar16,SVar37,pCVar13);
        FUN_1000d468c(local_d8,0);
        puVar14 = local_c0;
        local_248 = pCStack_b8;
        pCVar17 = (CKRecordZoneID *)local_d8;
        _Var11.unknown = local_c0;
        FUN_100004640();
        local_190 = (undefined8 ****)0x0;
        local_188 = (CKRecordZoneID *)0xe000000000000000;
        local_250 = pCVar17;
        Swift::_StringGuts::grow(0x25,_Var11);
        _swift_bridgeObjectRelease(local_188);
        local_168 = 0xd000000000000014;
        local_160 = (ID)local_238;
        objc_stub::cloudKitRecordName((ID)ppuVar33);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar48.bridgeObject = pCVar19;
        SVar48.str = (char *)pCVar13;
        Swift::String::append(SVar37,SVar48);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar39.bridgeObject = &DAT_e600000000000000;
        SVar39.str = (char *)0x3d7379656b20;
        SVar49.bridgeObject = pCVar19;
        SVar49.str = (char *)pCVar13;
        Swift::String::append(SVar39,SVar49);
        ppuVar30 = local_1c0;
        param_4 = local_1c8;
        pppppuVar31 = (undefined8 *****)local_1c0[2];
        pppppuVar21 = (undefined8 *****)PTR___swiftEmptyArrayStorage_100eae0d8;
        if (pppppuVar31 != (undefined8 *****)0x0) {
          _swift_bridgeObjectRetain(local_1c0);
          pppppuVar21 = pppppuVar31;
          FUN_10036433c(pppppuVar31,0);
          pppppuVar22 = &local_190;
          FUN_100370d3c(pppppuVar22,pppppuVar21 + 4,pppppuVar31,ppuVar30);
          pCVar13 = local_180;
          pCVar19 = pCStack_178;
          FUN_10000c650(local_190,local_188,local_180,pCStack_178,local_170);
          if (pppppuVar22 != pppppuVar31) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1003acc94);
            (*pcVar5)();
          }
        }
        IVar32 = local_1b8;
        local_190 = pppppuVar21;
        FUN_100310608(&local_190);
        local_1b8 = IVar32;
        if (IVar32 != 0) {
          _swift_release(local_190);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003acca0);
          (*pcVar5)();
        }
        _swift_bridgeObjectRelease(local_1c0);
        ppppuVar4 = local_190;
        SVar37 = Swift::Array<undefined>::get_description
                           (local_190,PTR___type_metadata_for_Swift_String_100eac208);
        SVar50.bridgeObject = pCVar19;
        SVar50.str = (char *)pCVar13;
        Swift::String::append(SVar37,SVar50);
        _swift_release(ppppuVar4);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar40.bridgeObject = &DAT_e500000000000000;
        SVar40.str = (char *)0x3d69727520;
        SVar51.bridgeObject = pCVar19;
        SVar51.str = (char *)pCVar13;
        Swift::String::append(SVar40,SVar51);
        objc_stub::FUN_100c07540((ID)ppuVar33);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar52.bridgeObject = pCVar19;
        SVar52.str = (char *)pCVar13;
        Swift::String::append(SVar37,SVar52);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        IVar32 = local_160;
        pCVar19 = local_248;
        FUN_1000d4db8(local_168,local_160,puVar14);
        _swift_bridgeObjectRelease(IVar32);
        FUN_100004594(local_d8);
        puVar27 = local_268;
        *local_268 = pCVar18;
        (**(code **)(local_1d8 + 0x68))(puVar27,(ulong)local_240 & 0xffffffff,lStack_1d0);
        pCVar13 = local_198;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pCVar13 & 1) == 0) {
          pCVar13 = (CKRecordZoneID *)0x0;
          FUN_100380498(0,*(undefined **)(local_198 + 0x10) + 1,1);
          pCVar19 = local_198;
          local_198 = pCVar13;
        }
        puVar29 = local_220;
        pCVar13 = local_228;
        puVar14 = *(undefined **)(local_198 + 0x10);
        if ((undefined *)((ulong)*(undefined **)(local_198 + 0x18) >> 1) <= puVar14) {
          pCVar17 = (CKRecordZoneID *)(ulong)((undefined *)0x1 < *(undefined **)(local_198 + 0x18));
          FUN_100380498(pCVar17,puVar14 + 1,1);
          pCVar19 = local_198;
          local_198 = pCVar17;
        }
        *(undefined **)(local_198 + 0x10) = puVar14 + 1;
        (**(code **)(local_1d8 + 0x20))
                  (local_198 +
                   *(long *)(local_1d8 + 0x48) * (long)puVar14 +
                   ((ulong)*(byte *)(local_1d8 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(local_1d8 + 0x50) ^ 0xffffffffffffffff)),local_268,lStack_1d0);
      }
      goto joined_r0x0001003abf50;
    }
    bVar6 = SCARRY8(lVar34,1);
    lVar34 = lVar34 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003acbf8);
      (*pcVar5)();
    }
    if ((long)pCVar13 <= lVar34) break;
    uVar36 = puVar29[lVar34];
  } while( true );
  _swift_release(local_258);
  if ((ulong)local_1f8.unknown >> 0x3e == 0) {
    puVar14 = *(undefined **)(((ulong)local_1f8.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = local_1f8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_1f8.unknown) {
      _Var1.unknown = local_1f8.unknown;
    }
    puVar14 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (puVar14 != (undefined *)0x0) {
    ppuVar33 = (undefined **)0x0;
    FUN_10038fef4();
    local_208 = ppuVar33;
    if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003acc90);
      (*pcVar5)();
    }
    IVar32 = 0;
    local_220 = (ulong *)((ulong)local_1f8.unknown & 0xc000000000000001);
    local_248 = (CKRecordZoneID *)0x8000000100da4d20;
    local_250 = (CKRecordZoneID *)
                CONCAT44(local_250._4_4_,
                         *(undefined4 *)
                          PTR___enum_case_for_CloudKit_CKSyncEngine_PendingRecordZoneChange_deleteRecord_CloudKit_CKSyncEngine_PendingRecordZoneChange_Type___>____C_CKRecordID___>_CloudKit_CKSyncEngine_PendingRecordZoneChange_100ea92c0
                        );
    local_240 = " deletes) to private engine";
    local_238 = puVar14;
    do {
      if (local_220 == (ulong *)0x0) {
        IVar15 = *(ID *)(local_1f8.unknown + IVar32 * 8 + 0x20);
        pCVar13 = pCVar19;
      }
      else {
        IVar15 = IVar32;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar32,local_1f8);
        pCVar13 = pCVar19;
      }
      UVar9.unknown = (undefined *)objc_stub::URIRepresentation(IVar15);
      lVar34 = local_1b0;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
      SVar37 = Foundation::URL::get_absoluteString((URL)0x0);
      puVar10 = puStack_1a0;
      SVar42.bridgeObject = SVar37.bridgeObject;
      local_1c0 = (undefined **)SVar37.str;
      pcVar5 = *(code **)(local_1a8 + 8);
      (*pcVar5)(lVar34,puStack_1a0);
      local_1b8 = IVar15;
      UVar9.unknown = (undefined *)objc_stub::URIRepresentation(IVar15);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
      SVar37 = Foundation::URL::get_absoluteString((URL)0x0);
      (*pcVar5)(lVar34,puVar10);
      puVar10 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = uStack_1e8;
      *(undefined8 *)(puVar10 + 0x10) = local_1f0;
      *(undefined8 *)(puVar10 + 0x20) = 0x52557463656a626f;
      *(undefined8 *)(puVar10 + 0x28) = 0xe900000000000049;
      *(String *)(puVar10 + 0x30) = SVar37;
      puVar23 = puVar10;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar10);
      FUN_100005808(puVar10 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
      puVar10 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      ppuVar33 = local_d8;
      pCVar17 = param_4;
      local_d8[0] = puVar23;
      local_c0 = puVar10;
      FUN_100328974(ppuVar33,0);
      FUN_100004594(local_d8);
      if (ppuVar33 == (undefined **)0x0) {
LAB_1003ac75c:
        FUN_1000d468c(local_d8);
        pCVar19 = pCStack_b8;
        puVar10 = local_c0;
        _Var11.unknown = local_c0;
        FUN_100004640(local_d8);
        local_190 = (undefined8 *****)0x0;
        local_188 = (CKRecordZoneID *)0xe000000000000000;
        Swift::_StringGuts::grow(0x35,_Var11);
        SVar41.bridgeObject = (void *)((ulong)local_240 | 0x8000000000000000);
        SVar41.str = (char *)0x1000000000000033;
        SVar53.bridgeObject = pCVar13;
        SVar53.str = (char *)pCVar17;
        Swift::String::append(SVar41,SVar53);
        SVar42.str = (char *)local_1c0;
        SVar54.bridgeObject = pCVar13;
        SVar54.str = (char *)pCVar17;
        Swift::String::append(SVar42,SVar54);
        _swift_bridgeObjectRelease(SVar42.bridgeObject);
        pCVar13 = local_188;
        FUN_1000d4df0(local_190,local_188,puVar10);
        _swift_bridgeObjectRelease(pCVar13);
        FUN_100004594(local_d8);
      }
      else {
        pCVar12 = (CKRecordZoneID *)0x0;
        FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
        objc_stub::cloudKitZoneName((ID)ppuVar33);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        objc_stub::cloudKitZoneOwnerName((ID)ppuVar33);
        SVar38 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pCVar13 = SVar38.bridgeObject;
        pCVar17 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                            (pCVar12,SVar37,SVar38);
        puVar14 = &_OBJC_CLASS___CKRecordZone;
        _objc_allocWithZone();
        IVar15 = objc_stub::initWithZoneID_((ID)puVar14);
        FUN_10038f824();
        puVar14 = local_238;
        param_4 = local_1c8;
        if (IVar15 == 0) goto LAB_1003ac75c;
        FUN_1000d468c(local_d8,0);
        puVar14 = local_c0;
        local_228 = pCStack_b8;
        _Var11.unknown = local_c0;
        FUN_100004640(local_d8);
        local_190 = (undefined8 ****)0x0;
        local_188 = (CKRecordZoneID *)0xe000000000000000;
        Swift::_StringGuts::grow(0x1d,_Var11);
        _swift_bridgeObjectRelease(local_188);
        local_190 = (undefined8 *****)0xd000000000000014;
        local_188 = local_248;
        objc_stub::cloudKitRecordName((ID)ppuVar33);
        SVar37 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar55.bridgeObject = pCVar13;
        SVar55.str = (char *)pCVar17;
        Swift::String::append(SVar37,SVar55);
        _swift_bridgeObjectRelease(SVar37.bridgeObject);
        SVar43.bridgeObject = &DAT_e500000000000000;
        SVar43.str = (char *)0x3d69727520;
        SVar56.bridgeObject = pCVar13;
        SVar56.str = (char *)pCVar17;
        Swift::String::append(SVar43,SVar56);
        SVar44.bridgeObject = SVar42.bridgeObject;
        SVar44.str = (char *)local_1c0;
        SVar57.bridgeObject = pCVar13;
        SVar57.str = (char *)pCVar17;
        Swift::String::append(SVar44,SVar57);
        _swift_bridgeObjectRelease(SVar42.bridgeObject);
        pCVar13 = local_188;
        pCVar19 = local_228;
        FUN_1000d4db8(local_190,local_188,puVar14);
        _swift_bridgeObjectRelease(pCVar13);
        FUN_100004594(local_d8);
        pIVar26 = local_230;
        *local_230 = IVar15;
        (**(code **)(local_1d8 + 0x68))(pIVar26,(ulong)local_250 & 0xffffffff,lStack_1d0);
        pCVar13 = local_198;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)pCVar13 & 1) == 0) {
          pCVar13 = (CKRecordZoneID *)0x0;
          FUN_100380498(0,*(undefined **)(local_198 + 0x10) + 1,1);
          pCVar19 = local_198;
          local_198 = pCVar13;
        }
        param_4 = local_1c8;
        puVar14 = local_238;
        puVar10 = *(undefined **)(local_198 + 0x10);
        if ((undefined *)((ulong)*(undefined **)(local_198 + 0x18) >> 1) <= puVar10) {
          pCVar13 = (CKRecordZoneID *)(ulong)((undefined *)0x1 < *(undefined **)(local_198 + 0x18));
          FUN_100380498(pCVar13,puVar10 + 1,1);
          pCVar19 = local_198;
          local_198 = pCVar13;
        }
        *(undefined **)(local_198 + 0x10) = puVar10 + 1;
        (**(code **)(local_1d8 + 0x20))
                  (local_198 +
                   *(long *)(local_1d8 + 0x48) * (long)puVar10 +
                   ((ulong)*(byte *)(local_1d8 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(local_1d8 + 0x50) ^ 0xffffffffffffffff)),local_230,lStack_1d0);
      }
      IVar32 = IVar32 + 1;
    } while (puVar14 != (undefined *)IVar32);
  }
  FUN_100395ff8(0xd000000000000012,0x8000000100da4d00,param_4,0);
  pCVar19 = local_198;
  FUN_1003aa368(local_198);
  _swift_bridgeObjectRelease(pCVar19);
  return;
}



/* Address: 0x1003acca0 | FUN_1003acca0 */

void FUN_1003acca0(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100fc22e0;
    FUN_1000037f0(&DAT_100fc22e0,&DAT_100c44458);
    puVar3 = puVar2;
    _swift_isClassType();
    if (((int)puVar3 != 0) && (puVar2 != (undefined *)0x0)) {
      puVar2 = &DAT_100fbe4e8;
      puVar3 = &DAT_100c40a80;
      goto LAB_1003acd14;
    }
  }
  puVar2 = &DAT_100fc22d8;
  puVar3 = &DAT_100c44450;
LAB_1003acd14:
  FUN_1000037f0(puVar2,puVar3);
  return;
}



/* Address: 0x1003acd20 | FUN_1003acd20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003acd20(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003acd54 | FUN_1003acd54 */

void FUN_1003acd54(void)

{
  long unaff_x20;
  
  FUN_1003aadd0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1003acd60 | FUN_1003acd60 */

void FUN_1003acd60(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003acd70 | FUN_1003acd70 */

void FUN_1003acd70(long param_1,long param_2)

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



/* Address: 0x1003acd84 | FUN_1003acd84 */

void FUN_1003acd84(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003acd8c | FUN_1003acd8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003acd8c(ID param_1)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  void *aBlock;
  _StringGuts _Var5;
  long unaff_x20;
  String SVar6;
  String SVar7;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  FUN_1003b4444();
  if (param_1 == 0) {
    return;
  }
  IVar2 = objc_stub::recordID(param_1);
  IVar2 = objc_stub::zoneID(IVar2);
  objc_stub::ownerName(IVar2);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var5.unknown = SVar6.bridgeObject;
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar6 == SVar7) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar6.str,_Var5,(_StringComparisonResult)(__int8)SVar7.str);
    _swift_bridgeObjectRelease(_Var5.unknown);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    if (!bVar1) {
      IVar2 = objc_stub::sharedCloudDatabase
                        (*(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container));
      goto LAB_1003acea4;
    }
  }
  IVar2 = objc_stub::privateCloudDatabase
                    (*(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container));
LAB_1003acea4:
  IVar3 = objc_stub::recordID(param_1);
  puVar4 = &DAT_100ece670;
  _swift_allocObject(&DAT_100ece670,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  local_50 = FUN_1003aeb60;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100318594;
  puStack_58 = &DAT_100ece688;
  local_48 = puVar4;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  objc_stub::FUN_100c00f60(IVar2,IVar3,aBlock);
  __Block_release(aBlock);
  return;
}



/* Address: 0x1003acf84 | FUN_1003acf84 */

void FUN_1003acf84(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1003acfa8 | FUN_1003acfa8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003acfa8(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  _StringGuts _Var9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  undefined *puVar12;
  String SVar13;
  String SVar14;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar4 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,uVar3);
  (**(code **)(lVar4 + 0x18))(uVar3,lVar4);
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  _Var7.unknown = (undefined *)&local_80;
  FUN_10035f4e0();
  FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
  puVar12 = _Var7.unknown & 0xffffffffffffff8;
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    uVar11 = *(ulong *)(puVar12 + 0x10);
  }
  else {
    _Var2.unknown = puVar12;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var2.unknown = _Var7.unknown;
    }
    uVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  uVar8 = 0;
  do {
    uVar10 = uVar8;
    if (uVar11 == uVar10) break;
    if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar12 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ad188);
        (*pcVar5)();
      }
      uVar8 = *(ulong *)(_Var7.unknown + uVar10 * 8 + 0x20);
    }
    else {
      uVar8 = uVar10;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var7);
    }
    if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ad184);
      (*pcVar5)();
    }
    objc_stub::FUN_100c0eac0(uVar8);
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var9.unknown = SVar13.bridgeObject;
    SVar14 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar13 == SVar14) {
      _swift_bridgeObjectRelease(_Var7.unknown);
      _swift_bridgeObjectRelease(_Var9.unknown);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      goto LAB_1003ad158;
    }
    bVar6 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar13.str,_Var9,(_StringComparisonResult)(__int8)SVar14.str);
    _swift_bridgeObjectRelease(_Var9.unknown);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    uVar8 = uVar10 + 1;
  } while (!bVar6);
  _swift_bridgeObjectRelease(_Var7.unknown);
LAB_1003ad158:
  return uVar11 != uVar10;
}



/* Address: 0x1003ad19c | FUN_1003ad19c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

tuple2_conflict5 FUN_1003ad19c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  Data DVar9;
  undefined *puVar10;
  NSData *pNVar11;
  ID IVar12;
  ID self;
  Dictionary<CKRecordID,(extension_in_CloudKit):__C_CKDatabase_modifyRecords(saving:_[__C_CKRecord],deleting:_[__C_CKRecordID],savePolicy:___C_CKRecordSavePolicy,atomically:_Swift_Bool)_async_throws__>__saveResults_____C_CKRecordID___Swift_Result<__C_CKRecord,Swift_Error>__deleteResults_____C_CKRecordID___Swift_Result<(),Swift_Error>__>
  DVar13;
  long *plVar14;
  Dictionary<CKRecordID,(extension_in_CloudKit):__C_CKDatabase_modifyRecords(saving:_[__C_CKRecord],deleting:_[__C_CKRecordID],savePolicy:___C_CKRecordSavePolicy,atomically:_Swift_Bool)_async_throws__>__saveResults_____C_CKRecordID___Swift_Result<__C_CKRecord,Swift_Error>__deleteResults_____C_CKRecordID___Swift_Result<(),Swift_Error>__>
  UNRECOVERED_JUMPTABLE;
  _StringGuts _Var15;
  _StringGuts _Var16;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  long lVar17;
  long lVar18;
  long unaff_x20;
  undefined8 *puVar19;
  long unaff_x22;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  String SVar23;
  String SVar24;
  tuple2_conflict5 tVar25;
  ulong local_78;
  
  lVar17 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  lVar18 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  uVar20 = *(undefined8 *)(lVar18 + 0x18);
  lVar3 = *(long *)(lVar18 + 0x20);
  FUN_100004640(lVar18,uVar20);
  (**(code **)(lVar3 + 0x18))(uVar20,lVar3);
  puVar19 = (undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *puVar19 = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
  _Var7.unknown = (undefined *)puVar19;
  FUN_10035f4e0();
  DVar13.unknown = &DAT_100fbe6f0;
  FUN_100005808(puVar19,&DAT_100fbe6f0,&DAT_100c42750);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    uVar21 = *(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
    *(undefined **)(unaff_x22 + 0x50) = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = _Var7.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var2.unknown = _Var7.unknown;
    }
    uVar21 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    *(undefined **)(unaff_x22 + 0x50) = puVar4;
  }
  if (uVar21 != 0) {
    local_78 = (ulong)_Var7.unknown & 0xffffffffffffff8;
    uVar22 = 0;
    do {
      while( true ) {
        if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(local_78 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ad604);
            (*pcVar5)();
          }
          uVar8 = *(ulong *)(_Var7.unknown + uVar22 * 8 + 0x20);
        }
        else {
          uVar8 = uVar22;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar22,_Var7);
        }
        uVar1 = uVar22 + 1;
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1003ad600);
          (*pcVar5)();
        }
        objc_stub::FUN_100c0eac0(uVar8);
        SVar23 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var15.unknown = SVar23.bridgeObject;
        SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar23 == SVar24) break;
        _Var16.unknown = _Var15.unknown;
        bVar6 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar23.str,_Var15,
                           (_StringComparisonResult)(__int8)SVar24.str);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        _swift_bridgeObjectRelease(_Var15.unknown);
        if (bVar6) goto LAB_1003ad3b8;
LAB_1003ad2f4:
        DVar13.unknown = _Var16.unknown;
        uVar22 = uVar22 + 1;
        if (uVar1 == uVar21) goto LAB_1003ad544;
      }
      _swift_bridgeObjectRelease(SVar24.bridgeObject);
      _swift_bridgeObjectRelease(_Var15.unknown);
LAB_1003ad3b8:
      DVar9.unknown = (undefined *)objc_stub::shareRecordData(uVar8);
      _Var16.unknown = extraout_x1;
      DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
      puVar10 = &_OBJC_CLASS___NSKeyedUnarchiver;
      _objc_allocWithZone();
      FUN_1001037b4(DVar9.unknown,_Var16.unknown);
      pNVar11 = Foundation::Data::_bridgeToObjectiveC(DVar9);
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      IVar12 = objc_stub::initForReadingFromData_error_((ID)puVar10,pNVar11,unaff_x22 + 0x30);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x30);
      if (IVar12 == 0) {
        FUN_10003bf2c(DVar9.unknown,_Var16.unknown);
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(uVar20);
        FUN_10003bf2c(DVar9.unknown,_Var16.unknown);
        goto LAB_1003ad2f4;
      }
      FUN_10003bf2c(DVar9.unknown,_Var16.unknown);
      objc_stub::setRequiresSecureCoding_(IVar12,1);
      puVar10 = &_OBJC_CLASS___CKShare;
      _objc_allocWithZone();
      self = objc_stub::initWithCoder_((ID)puVar10,IVar12);
      objc_stub::finishDecoding(IVar12);
      FUN_10003bf2c(DVar9.unknown,_Var16.unknown);
      DVar13.unknown = (undefined *)objc_stub::recordID(self);
      _Var16.unknown = extraout_x1_00;
      if (DVar13.unknown == (undefined *)0x0) goto LAB_1003ad2f4;
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique(0);
      uVar22 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
      uVar8 = *(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x18);
      if (uVar8 >> 1 <= uVar22) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar8,uVar22 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar22,DVar13.unknown);
      *(undefined **)(unaff_x22 + 0x50) = puVar4;
      uVar22 = uVar1;
    } while (uVar1 != uVar21);
  }
LAB_1003ad544:
  _swift_bridgeObjectRelease(_Var7.unknown);
  if ((ulong)puVar4 >> 0x3e == 0) {
    lVar18 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var2.unknown = puVar4;
    }
    lVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar18 == 0) {
    _swift_bridgeObjectRelease(puVar4);
    UNRECOVERED_JUMPTABLE.unknown = *(undefined **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x0001003ad688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)UNRECOVERED_JUMPTABLE.unknown)();
      tVar25.deleteResults.unknown = DVar13.unknown;
      tVar25.saveResults.unknown = UNRECOVERED_JUMPTABLE.unknown;
      return tVar25;
    }
  }
  else {
    IVar12 = objc_stub::privateCloudDatabase
                       (*(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container));
    *(ID *)(unaff_x22 + 0x58) = IVar12;
    plVar14 = (long *)(ulong)*(uint *)(PTR__modifyRecords_100ea94c0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar14;
    *plVar14 = unaff_x22;
    plVar14[1] = (long)FUN_1003ad690;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar17) {
      tVar25 = (extension_CloudKit)::__C::CKDatabase::_modifyRecords
                         (PTR___swiftEmptyArrayStorage_100eae0d8,puVar4,0,1);
      return tVar25;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003ad690 | FUN_1003ad690 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ad690(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar5 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(lVar5 + 0x68) = param_2;
  *(long *)(lVar5 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  uVar2 = *(undefined8 *)(lVar5 + 0x40);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(param_1);
    FUN_1000da368(uVar4,uVar2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_1003ad788;
    pcVar1 = FUN_1003ad78c;
  }
  else {
    FUN_1000da368(uVar4,uVar2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_1003ad788:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1003ad8e4;
  }
  _swift_task_switch(pcVar1,uVar4,uVar2);
  return;
}



/* Address: 0x1003ad78c | FUN_1003ad78c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ad78c(void)

{
  undefined8 *puVar1;
  bool bVar2;
  code *UNRECOVERED_JUMPTABLE;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  lVar3 = 0;
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar9 = *(long *)(unaff_x22 + 0x68);
  lVar7 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
  uVar5 = -lVar7;
  uVar6 = 0xffffffffffffffff;
  if (uVar5 < 0x40) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
  do {
    while (uVar6 != 0) {
      uVar5 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      puVar1 = (undefined8 *)
               (*(long *)(lVar9 + 0x38) + lVar3 * 0x400 +
               LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10);
      if (*(char *)(puVar1 + 1) == '\x01') {
        uVar8 = *puVar1;
        _swift_willThrow();
        _swift_errorRetain(uVar8);
        _swift_release(lVar9);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
joined_r0x0001003ad870:
        if (lVar3 != lVar4) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
                    /* WARNING: Could not recover jumptable at 0x0001003ad88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
    bVar2 = SCARRY8(lVar3,1);
    lVar3 = lVar3 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1003ad8e0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if ((long)(0x3fU - lVar7 >> 6) <= lVar3) {
      _swift_release(lVar9);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
      goto joined_r0x0001003ad870;
    }
    uVar6 = ((ulong *)(lVar9 + 0x40))[lVar3];
  } while( true );
}



/* Address: 0x1003ad8e4 | FUN_1003ad8e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ad8e4(void)

{
  long unaff_x22;
  
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
                    /* WARNING: Could not recover jumptable at 0x0001003ad93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003ad944 | FUN_1003ad944 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ad944(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Scope SVar1;
  ScheduledTaskType SVar2;
  undefined7 extraout_var;
  ulong uVar3;
  FetchChangesOptions FVar4;
  undefined7 extraout_var_00;
  undefined *puVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  long *plVar7;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  SVar1 = CloudKit::CKSyncEngine::FetchChangesOptions::Scope::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x58) = CONCAT71(extraout_var,SVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,SVar1.value) + -8);
  *(long *)(unaff_x22 + 0x60) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  FVar4 = CloudKit::CKSyncEngine::FetchChangesOptions::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = FVar4.unknown;
  lVar6 = *(long *)(FVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  SVar2 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  *(long *)(unaff_x22 + 0x88) = CONCAT71(extraout_var_00,SVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_00,SVar2.value) + -8);
  *(long *)(unaff_x22 + 0x90) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  puVar5 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  *(undefined **)(unaff_x22 + 0xa0) = puVar5;
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0xa8) = puVar5;
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = param_3;
  plVar7 = (long *)(ulong)*(uint *)(PTR__accept_100ea9548 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1003ada74;
  (extension_CloudKit)::__C::CKContainer::_accept();
  return;
}



/* Address: 0x1003ada74 | FUN_1003ada74 */

void FUN_1003ada74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0xa8);
  uVar2 = *(undefined8 *)(lVar5 + 0x38);
  uVar4 = *(undefined8 *)(lVar5 + 0x40);
  *(undefined8 *)(lVar5 + 0xb8) = param_1;
  *(long *)(lVar5 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0xb0));
  _swift_release(uVar1);
  FUN_1000da368();
  *(undefined8 *)(lVar5 + 200) = uVar2;
  *(undefined8 *)(lVar5 + 0xd0) = uVar4;
  if (unaff_x20 == 0) {
    pcVar3 = FUN_1003adb04;
  }
  else {
    pcVar3 = FUN_1003ae550;
  }
  _swift_task_switch(pcVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1003adb04 | FUN_1003adb04 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003adb04(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  ID IVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0xb8);
  if (*(long *)(lVar8 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar8);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x48);
    _swift_bridgeObjectRetain(lVar8);
    FUN_1003807dc();
    lVar8 = *(long *)(unaff_x22 + 0xb8);
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease_n(lVar8,2);
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar6 * 0x10);
      uVar9 = *puVar1;
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar9;
      cVar2 = *(char *)(puVar1 + 1);
      *(char *)(unaff_x22 + 0x148) = cVar2;
      FUN_10030da34(uVar9,cVar2);
      _swift_bridgeObjectRelease_n(lVar8,2);
      if (cVar2 == '\x01') {
        _swift_willThrow();
        uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
        _swift_task_dealloc(uVar9);
        _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001003adbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      IVar4 = objc_stub::hierarchicalRootRecordID(*(ID *)(unaff_x22 + 0x48));
      *(ID *)(unaff_x22 + 0xe0) = IVar4;
      if (IVar4 != 0) {
        uVar11 = *(ulong *)(unaff_x22 + 0x40);
        plVar5 = (long *)0x60;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xe8) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_1003add08;
        FUN_1003ae658(*(undefined8 *)(unaff_x22 + 0x38),uVar11 & 0xcfffffffffffffff,IVar4);
        return;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x148);
      FUN_1000d468c(unaff_x22 + 0x10);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
      lVar8 = unaff_x22 + 0x10;
      FUN_100004640(lVar8,uVar9);
      FUN_1000d4e0c(0xd000000000000022,0x8000000100da4e10,uVar9,uVar10,lVar8);
      FUN_10030da20(uVar7,uVar3);
      FUN_100004594(unaff_x22 + 0x10);
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001003adc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Address: 0x1003add08 | FUN_1003add08 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003add08(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  String *pSVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  long *plVar15;
  long *unaff_x22;
  long lVar16;
  long lVar17;
  long lVar18;
  String local_80;
  undefined *local_68;
  undefined *puStack_60;
  
  lVar18 = *unaff_x22;
  lVar16 = *unaff_x22;
  *(long *)(lVar18 + 0xf0) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar18 + 0xe8));
  if (unaff_x20 != 0) {
    FUN_10030da20(*(undefined8 *)(lVar18 + 0xd8),*(undefined1 *)(lVar18 + 0x148));
    uVar12 = *(undefined8 *)(lVar18 + 0x80);
    uVar14 = *(undefined8 *)(lVar18 + 0x68);
    _swift_task_dealloc(*(undefined8 *)(lVar18 + 0x98));
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001003adda4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar16 + 8))();
    return;
  }
  if (param_1 != 0) {
    uVar12 = *(undefined8 *)(lVar18 + 0xd8);
    uVar14 = *(undefined8 *)(lVar18 + 0x98);
    lVar8 = *(long *)(lVar18 + 0xa0);
    uVar13 = *(undefined8 *)(lVar18 + 0x88);
    lVar1 = *(long *)(lVar18 + 0x90);
    lVar17 = *(long *)(lVar18 + 0x50);
    uVar3 = *(undefined1 *)(lVar18 + 0x148);
    objc_stub::recordName(*(ID *)(lVar18 + 0xe0));
    local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    puVar9 = 
    PTR___protocol_witness_table_for_Swift_String___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea94b0
    ;
    local_68 = PTR___type_metadata_for_Swift_String_100eac208;
    puStack_60 = 
    PTR___protocol_witness_table_for_Swift_String___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea94b0
    ;
    uVar5 = 0;
    FUN_10000ec2c(0,&DAT_100fc22e8,&PTR__OBJC_CLASS___CKShare_100f8dbc0);
    pSVar6 = &local_80;
    ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
              (pSVar6,0x6f636552746f6f72,0xee00656d614e6472,uVar5);
    local_80 = (extension_CloudKit)::__C::CKRecord::get_recordType((CKRecord *)pSVar6);
    local_68 = puVar10;
    puStack_60 = puVar9;
    ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
              (&local_80,0x6f636552746f6f72,0xee00657079546472,uVar5);
    lVar17 = lVar17 + _TtC9PasteCore10SyncEngine::persistentStack;
    uVar5 = *(undefined8 *)(lVar17 + 0x18);
    lVar2 = *(long *)(lVar17 + 0x20);
    FUN_100004640(lVar17,uVar5);
    (**(code **)(lVar2 + 0x18))(uVar5,lVar2);
    *(undefined8 *)(lVar18 + 0xf8) = uVar5;
    lVar17 = 0;
    FUN_100385b74();
    _swift_allocObject();
    *(long *)(lVar18 + 0x100) = lVar17;
    FUN_1000d4ca4(0);
    _swift_allocObject();
    uVar7 = 0x725065676e616843;
    FUN_1000d4624(0x725065676e616843,0xef726f737365636f);
    *(undefined8 *)(lVar17 + 0x10) = uVar7;
    *(undefined8 *)(lVar17 + 0x18) = uVar5;
    _swift_allocObject(lVar8,0x30,7);
    *(long *)(lVar18 + 0x108) = lVar8;
    *(undefined8 *)(lVar8 + 0x18) = 5;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    *(long *)(lVar8 + 0x20) = param_1;
    *(undefined8 *)(lVar8 + 0x28) = uVar12;
    puVar9 = &DAT_100ece6c0;
    _swift_allocObject(&DAT_100ece6c0,0x18,7);
    *(undefined **)(lVar18 + 0x110) = puVar9;
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined **)(puVar9 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar10 = &DAT_100ece6e8;
    _swift_allocObject(&DAT_100ece6e8,0x18,7);
    _swift_weakInit(puVar10 + 0x10,lVar17);
    puVar11 = &DAT_100ece710;
    _swift_allocObject(&DAT_100ece710,0x30,7);
    *(undefined **)(lVar18 + 0x118) = puVar11;
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(undefined **)(puVar11 + 0x18) = puVar4;
    *(long *)(puVar11 + 0x20) = lVar8;
    *(undefined **)(puVar11 + 0x28) = puVar9;
    (**(code **)(lVar1 + 0x68))
              (uVar14,*(undefined4 *)
                       PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
               ,uVar13);
    FUN_10030da34(uVar12,uVar3);
    plVar15 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
    _swift_retain(lVar8);
    _swift_retain(puVar9);
    _swift_task_alloc();
    *(long **)(lVar18 + 0x120) = plVar15;
    *plVar15 = lVar16;
    plVar15[1] = (long)FUN_1003ae138;
    (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar15);
    return;
  }
  uVar13 = *(undefined8 *)(lVar18 + 0xd8);
  uVar3 = *(undefined1 *)(lVar18 + 0x148);
  FUN_1000d468c(lVar18 + 0x10,0);
  uVar12 = *(undefined8 *)(lVar18 + 0x28);
  uVar14 = *(undefined8 *)(lVar18 + 0x30);
  lVar17 = lVar18 + 0x10;
  FUN_100004640(lVar17,uVar12);
  FUN_1000d4e0c(0xd000000000000022,0x8000000100da4e10,uVar12,uVar14,lVar17);
  FUN_10030da20(uVar13,uVar3);
  FUN_100004594(lVar18 + 0x10);
  uVar14 = *(undefined8 *)(lVar18 + 0x80);
  uVar12 = *(undefined8 *)(lVar18 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(lVar18 + 0x98));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001003ae134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))(0,0);
  return;
}



/* Address: 0x1003ae138 | FUN_1003ae138 */

void FUN_1003ae138(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  uVar1 = *(undefined8 *)(lVar2 + 0x118);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar1);
    return;
  }
  (**(code **)(*(long *)(lVar2 + 0x90) + 8))
            (*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0x88));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1003ae1c8,*(undefined8 *)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xd0));
  return;
}



/* Address: 0x1003ae1c8 | FUN_1003ae1c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003ae1c8(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CKSyncEngine *this;
  long lVar5;
  long unaff_x22;
  String SVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x128);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x110));
  _swift_release(uVar4);
  FUN_100396174(uVar3,1);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x148);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
    FUN_10030da20(uVar4,uVar1);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001003ae294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  this = *(CKSyncEngine **)
          (*(long *)(unaff_x22 + 0x50) + _TtC9PasteCore10SyncEngine::sharedSyncEngine);
  *(CKSyncEngine **)(unaff_x22 + 0x130) = this;
  if (this != (CKSyncEngine *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x68))
              (uVar4,*(undefined4 *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_all_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_Type___>_CloudKit_CKSyncEngine_FetchChangesOptions_Scope_100ea9270
               ,*(undefined8 *)(unaff_x22 + 0x58));
    _swift_retain(this);
    CloudKit::CKSyncEngine::FetchChangesOptions::_init((Scope)(__int8)uVar4);
    plVar2 = (long *)(ulong)*(uint *)(PTR__fetchChanges_100ea9200 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1003ae3f0;
    CloudKit::CKSyncEngine::_fetchChanges
              (this,(FetchChangesOptions)*(undefined **)(unaff_x22 + 0x80));
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x148);
  objc_stub::recordName(*(ID *)(unaff_x22 + 0xe0));
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _swift_release(uVar3);
  FUN_10030da20(uVar4,uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001003ae3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(SVar6.str,SVar6.bridgeObject);
  return;
}



/* Address: 0x1003ae3f0 | FUN_1003ae3f0 */

void FUN_1003ae3f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x140) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x138));
  uVar3 = *(undefined8 *)(lVar4 + 0x130);
  if (unaff_x20 == 0) {
    (**(code **)(*(long *)(lVar4 + 0x78) + 8))
              (*(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x70));
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_1003ae478;
  }
  else {
    _swift_release(uVar3);
    uVar3 = *(undefined8 *)(lVar4 + 200);
    uVar2 = *(undefined8 *)(lVar4 + 0xd0);
    pcVar1 = FUN_1003ae5a4;
  }
  _swift_task_switch(pcVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1003ae478 | FUN_1003ae478 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ae478(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  String SVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x148);
  objc_stub::recordName(*(ID *)(unaff_x22 + 0xe0));
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _swift_release(uVar3);
  FUN_10030da20(uVar2,uVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003ae54c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(SVar4.str,SVar4.bridgeObject);
  return;
}



/* Address: 0x1003ae550 | FUN_1003ae550 */

void FUN_1003ae550(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001003ae5a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003ae5a4 | FUN_1003ae5a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ae5a4(void)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x100));
  FUN_10030da20(uVar3,uVar2);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x98));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001003ae654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003ae658 | FUN_1003ae658 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003ae658(undefined8 param_1,undefined8 param_2,ID param_3)

{
  undefined *puVar1;
  bool bVar2;
  NSPredicate *pNVar3;
  undefined *puVar4;
  undefined *puVar5;
  CKQuery *this;
  CKQuery *matching;
  ID IVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  String SVar8;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  pNVar3 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar4 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar5 = puVar4;
  FUN_10030d9e0();
  *(undefined **)(puVar4 + 0x40) = puVar5;
  *(undefined8 *)(puVar4 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar4 + 0x28) = 0xea00000000007265;
  objc_stub::recordName(param_3);
  SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar4 + 0x60) = puVar1;
  *(undefined **)(puVar4 + 0x68) = puVar5;
  *(String *)(puVar4 + 0x48) = SVar8;
  pNVar3 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar3);
  *(NSPredicate **)(unaff_x22 + 0x20) = pNVar3;
  this = (CKQuery *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb30,&PTR__OBJC_CLASS___CKQuery_100f8db28);
  bVar2 = false;
  FUN_10032b0c8();
  SVar8 = Swift::__typeName(bVar2);
  matching = (extension_CloudKit)::__C::CKQuery::__allocating_init(this,SVar8,pNVar3);
  *(CKQuery **)(unaff_x22 + 0x28) = matching;
  IVar6 = objc_stub::sharedCloudDatabase(*(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container))
  ;
  *(ID *)(unaff_x22 + 0x30) = IVar6;
  IVar6 = objc_stub::zoneID(param_3);
  *(ID *)(unaff_x22 + 0x38) = IVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__records_100ea9530 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1003ae848;
  (extension_CloudKit)::__C::CKDatabase::_records(matching,IVar6);
  return;
}



/* Address: 0x1003ae848 | FUN_1003ae848 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ae848(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x48) = param_1;
  *(long *)(lVar4 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x40));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003ae8f0;
  }
  else {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003ae9fc;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}


