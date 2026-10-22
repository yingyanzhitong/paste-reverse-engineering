/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003ae8f0 | FUN_1003ae8f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ae8f0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  if (*(long *)(lVar1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    if (*(char *)(lVar1 + 0x30) == '\x01') {
      _swift_willThrow();
      FUN_10030da34(uVar2,1);
      _swift_errorRetain(uVar2);
      FUN_10030da20(uVar2,1);
      _swift_bridgeObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003ae998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    FUN_10030da34(uVar2);
    lVar1 = *(long *)(unaff_x22 + 0x48);
  }
  _swift_bridgeObjectRelease(lVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003ae9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Address: 0x1003ae9fc | FUN_1003ae9fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003ae9fc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001003aea40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003aea44 | FUN_1003aea44 */

void FUN_1003aea44(undefined8 param_1,long param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  String SVar4;
  String SVar5;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined *local_50;
  undefined8 uStack_48;
  
  if (param_2 != 0) {
    pcVar1 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (pcVar1 != (char *)0x0) {
      uVar3 = *(undefined8 *)(pcVar1 + _TtC9PasteCore10SyncEngine::logger);
      _swift_errorRetain(param_2);
      _swift_retain(uVar3);
      _swift_release(pcVar1);
      FUN_1000d468c(auStack_68);
      _swift_release(uVar3);
      _Var2.unknown = local_50;
      FUN_100004640(auStack_68);
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x20,_Var2);
      SVar4.bridgeObject = (void *)0x8000000100da4e90;
      SVar4.str = (char *)0xd00000000000001e;
      SVar5.bridgeObject = param_4;
      SVar5.str = param_3;
      Swift::String::append(SVar4,SVar5);
      _swift_getErrorValue(param_2,auStack_80,&local_98);
      Swift::DefaultStringInterpolation::_appendInterpolation(local_98,uStack_90);
      uVar3 = uStack_70;
      FUN_1000d4e0c(local_78,uStack_70,local_50,uStack_48);
      _swift_errorRelease(param_2);
      _swift_bridgeObjectRelease(uVar3);
      FUN_100004594(auStack_68);
    }
  }
  return;
}



/* Address: 0x1003aeb60 | FUN_1003aeb60 */

void FUN_1003aeb60(void)

{
  FUN_1003aea44();
  return;
}



/* Address: 0x1003aeb68 | FUN_1003aeb68 */

void FUN_1003aeb68(long param_1,long param_2)

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



/* Address: 0x1003aeb7c | FUN_1003aeb7c */

void FUN_1003aeb7c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003aeb84 | FUN_1003aeb84 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003af0e0) */

undefined *
FUN_1003aeb84(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             )

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  ID self;
  Data DVar5;
  Data DVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **self_00;
  Data DVar11;
  CKShare *pCVar12;
  CKAllowedSharingOptions *pCVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar14;
  long unaff_x20;
  CKContainer *pCVar15;
  long unaff_x21;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  String SVar21;
  undefined *local_d8 [3];
  undefined *local_c0;
  char local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar7 = &DAT_100c44478;
  _swift_getKeyPath(&DAT_100c44478);
  puVar4 = &DAT_100c444a0;
  _swift_getKeyPath(&DAT_100c444a0);
  Combine::Published::_get_subscript(local_d8);
  _swift_release(puVar7);
  _swift_release(puVar4);
  if (((char)local_d8[0] == '\x01') &&
     (*(long *)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine) != 0)) {
    lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
    puVar4 = *(undefined **)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    FUN_100004640(lVar1,puVar4);
    (**(code **)(lVar3 + 0x18))(puVar4,lVar3);
    FUN_10038fef4(0);
    self = objc_stub::objectID(param_1);
    FUN_10038efa8(self,puVar4);
    if ((self != 0) &&
       (DVar5.unknown = (undefined *)objc_stub::cloudKitRecordData(self),
       DVar5.unknown != (undefined *)0x0)) {
      uVar16 = extraout_x1;
      DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
      FUN_10000ec2c(0,&DAT_100fc0458,&PTR__OBJC_CLASS___CKRecord_100f8dbc8);
      FUN_1001037b4(DVar6.unknown,uVar16);
      DVar5 = DVar6;
      FUN_10038eecc(DVar6.unknown,uVar16);
      if (DVar5.unknown != (undefined *)0x0) {
        puVar7 = &_OBJC_CLASS___NSItemProvider;
        _objc_allocWithZone();
        puVar8 = (undefined *)objc_stub::init((ID)puVar7);
        puVar7 = puVar8;
        uVar14 = extraout_x1_00;
        FUN_1003b41b8();
        if (unaff_x21 != 0) {
          FUN_10003bf2c(DVar6.unknown,uVar16);
          return puVar8;
        }
        FUN_100394ee8();
        _swift_getObjectType();
        SVar20 = Swift::__typeName(SUB81(param_1,0));
        objc_stub::cloudKitZoneOwnerName(self);
        SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar9 = &DAT_100fbef68;
        FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
        _swift_initStackObject();
        *(undefined8 *)(puVar9 + 0x18) = 6;
        *(undefined8 *)(puVar9 + 0x10) = 3;
        *(undefined8 *)(puVar9 + 0x20) = 0x6f636552746f6f72;
        *(undefined8 *)(puVar9 + 0x28) = 0xee00656d614e6472;
        *(undefined **)(puVar9 + 0x30) = puVar7;
        *(undefined8 *)(puVar9 + 0x38) = uVar14;
        *(undefined8 *)(puVar9 + 0x40) = 0x6f636552746f6f72;
        *(undefined8 *)(puVar9 + 0x48) = 0xee00657079546472;
        *(String *)(puVar9 + 0x50) = SVar20;
        *(undefined8 *)(puVar9 + 0x60) = 0xd000000000000010;
        *(undefined8 *)(puVar9 + 0x68) = 0x8000000100da2ca0;
        *(String *)(puVar9 + 0x70) = SVar21;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(SVar20.bridgeObject);
        _swift_bridgeObjectRetain(SVar21.bridgeObject);
        puVar10 = puVar9;
        FUN_1003c92b8();
        _swift_setDeallocating(puVar9);
        puVar7 = &DAT_100fbef70;
        FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
        _swift_arrayDestroy(puVar9 + 0x20,3,puVar7);
        puVar7 = &DAT_100fbef78;
        FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
        self_00 = local_d8;
        local_d8[0] = puVar10;
        local_c0 = puVar7;
        FUN_100328ba8(self_00,0,puVar4);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        _swift_bridgeObjectRelease(SVar21.bridgeObject);
        FUN_100004594(local_d8);
        if (self_00 != (undefined **)0x0) {
          DVar5.unknown = (undefined *)objc_stub::shareRecordData((ID)self_00);
          uVar14 = extraout_x1_01;
          DVar11 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar5);
          _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
          FUN_1001037b4(DVar11.unknown,uVar14);
          DVar5 = DVar11;
          FUN_1003b09f8(DVar11.unknown,uVar14);
          FUN_10003bf2c(DVar11.unknown,uVar14);
          objc_stub::setRequiresSecureCoding_((ID)DVar5.unknown,1);
          puVar7 = &_OBJC_CLASS___CKShare;
          _objc_allocWithZone();
          pCVar12 = (CKShare *)objc_stub::initWithCoder_((ID)puVar7,DVar5.unknown);
          objc_stub::finishDecoding((ID)DVar5.unknown);
          FUN_10003bf2c(DVar11.unknown,uVar14);
          FUN_1003af2b8(param_2,param_3,param_4,param_5);
          pCVar15 = *(CKContainer **)(unaff_x20 + _TtC9PasteCore10SyncEngine::container);
          pCVar13 = (CKAllowedSharingOptions *)
                    objc_stub::FUN_100c0f280((ID)&_OBJC_CLASS___CKAllowedSharingOptions);
          (extension_CloudKit)::__C::NSItemProvider::registerCKShare(pCVar12,pCVar15,pCVar13);
          FUN_10003bf2c(DVar6.unknown,uVar16);
          return puVar8;
        }
        pCVar15 = *(CKContainer **)(unaff_x20 + _TtC9PasteCore10SyncEngine::container);
        puVar7 = &DAT_100ece738;
        _swift_allocObject(&DAT_100ece738,0x40,7);
        *(undefined **)(puVar7 + 0x10) = DVar5.unknown;
        *(undefined8 *)(puVar7 + 0x18) = param_2;
        *(undefined8 *)(puVar7 + 0x20) = param_3;
        *(undefined8 *)(puVar7 + 0x28) = param_4;
        *(undefined8 *)(puVar7 + 0x30) = param_5;
        *(long *)(puVar7 + 0x38) = unaff_x20;
        _swift_bridgeObjectRetain(param_3);
        FUN_10011da54(param_4,param_5);
        _swift_retain();
        pCVar13 = (CKAllowedSharingOptions *)
                  objc_stub::FUN_100c0f280((ID)&_OBJC_CLASS___CKAllowedSharingOptions);
        (extension_CloudKit)::__C::NSItemProvider::_registerCKShare(pCVar15,pCVar13);
        FUN_10003bf2c(DVar6.unknown,uVar16);
        _swift_release(puVar7);
        return puVar8;
      }
      FUN_10003bf2c(DVar6.unknown,uVar16);
    }
    uVar16 = 0;
    FUN_1003a2898(0);
    _swift_allocError(&DAT_100ece158,uVar16,0,0);
    _swift_willThrow();
  }
  else {
    puVar2 = (undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_isEnabled);
    _swift_beginAccess(puVar2,local_d8,0,0);
    uVar18 = puVar2[1];
    uVar16 = *puVar2;
    uStack_98 = puVar2[3];
    uVar19 = puVar2[2];
    uStack_88 = puVar2[5];
    uVar17 = puVar2[4];
    uVar14 = puVar2[6];
    local_b0 = uVar16;
    uStack_a8 = uVar18;
    local_a0 = uVar19;
    local_90 = uVar17;
    local_80 = uVar14;
    _swift_retain(uVar16);
    _swift_retain(uVar18);
    _swift_retain(uVar19);
    _swift_retain(uVar17);
    _swift_retain(uVar14);
    FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
    FUN_1002ca7e0(&local_b1);
    _swift_release(uVar14);
    _swift_release(uVar17);
    _swift_release(uVar19);
    _swift_release(uVar18);
    _swift_release(uVar16);
    if (local_b1 == '\x01') {
      FUN_1003a2854();
      puVar7 = &DAT_100ece138;
    }
    else {
      FUN_1003a28dc();
      puVar7 = &DAT_100ece178;
    }
    _swift_allocError(puVar7,uVar16,0,0);
    _swift_willThrow();
  }
  return puVar4;
}



/* Address: 0x1003af2b8 | FUN_1003af2b8 */

void FUN_1003af2b8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  String SVar3;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *puStack_58;
  
  SVar3 = (extension_CloudKit)::__C::CKShare::SystemFieldKey::get_thumbnailImageData
                    ((SystemFieldKey)(__int8)param_1);
  puStack_58 = 
  PTR___protocol_witness_table_for_Foundation_Data___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea91e0
  ;
  local_60 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  local_78 = param_3;
  uStack_70 = param_4;
  if (0xe < param_4 >> 0x3c) {
    local_68 = 0;
    puStack_58 = (undefined *)0x0;
    local_60 = (undefined *)0x0;
    local_78 = 0;
    uStack_70 = 0;
  }
  FUN_10011da54(param_3,param_4);
  uVar1 = 0;
  FUN_10000ec2c(0,&DAT_100fc22e8,&PTR__OBJC_CLASS___CKShare_100f8dbc0);
  puVar2 = &local_78;
  ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
            (puVar2,SVar3.str,SVar3.bridgeObject,uVar1);
  SVar3 = (extension_CloudKit)::__C::CKShare::SystemFieldKey::get_title
                    ((SystemFieldKey)(__int8)puVar2);
  puStack_58 = 
  PTR___protocol_witness_table_for_Swift_String___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea94b0
  ;
  local_60 = PTR___type_metadata_for_Swift_String_100eac208;
  uStack_70 = param_2;
  if (param_2 == 0) {
    param_1 = 0;
    local_68 = 0;
    puStack_58 = (undefined *)0x0;
    local_60 = (undefined *)0x0;
    uStack_70 = 0;
  }
  local_78 = param_1;
  _swift_bridgeObjectRetain(param_2);
  ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
            (&local_78,SVar3.str,SVar3.bridgeObject,uVar1);
  return;
}



/* Address: 0x1003af3ec | FUN_1003af3ec */

void FUN_1003af3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1003af40c,0,0);
  return;
}



/* Address: 0x1003af40c | FUN_1003af40c */

void FUN_1003af40c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *self;
  ID IVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar3 = *(long *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  self = &_OBJC_CLASS___CKShare;
  _objc_allocWithZone();
  IVar6 = objc_stub::initWithRootRecord_((ID)self,uVar2);
  *(ID *)(unaff_x22 + 0x40) = IVar6;
  FUN_1003af2b8(uVar5,uVar1,uVar4,uVar8);
  uVar8 = *(undefined8 *)(lVar3 + _TtC9PasteCore10SyncEngine::container);
  plVar7 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1003af4cc;
  FUN_1003af524(0,0,IVar6,*(undefined8 *)(unaff_x22 + 0x10),uVar8,0);
  return;
}



/* Address: 0x1003af4cc | FUN_1003af4cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003af4cc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
  uVar1 = 0;
  if (unaff_x20 == 0) {
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001003af520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(uVar1);
  return;
}



/* Address: 0x1003af524 | FUN_1003af524 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

tuple2_conflict5
FUN_1003af524(undefined8 param_1,undefined8 param_2,undefined8 param_3,ID param_4,ID param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 uVar6;
  String *pSVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  long *plVar8;
  tuple2_conflict5 tVar9;
  String local_78;
  undefined *local_60;
  undefined *puStack_58;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(ID *)(unaff_x22 + 200) = param_4;
  *(ID *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  puVar2 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  uVar4 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar4;
  IVar5 = objc_stub::recordID(param_4);
  objc_stub::recordName(IVar5);
  local_78 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar2 = 
  PTR___protocol_witness_table_for_Swift_String___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea94b0
  ;
  local_60 = PTR___type_metadata_for_Swift_String_100eac208;
  puStack_58 = 
  PTR___protocol_witness_table_for_Swift_String___CloudKit_CKRecordValueProtocol_in_CloudKit_100ea94b0
  ;
  uVar6 = 0;
  FUN_10000ec2c(0,&DAT_100fc22e8,&PTR__OBJC_CLASS___CKShare_100f8dbc0);
  pSVar7 = &local_78;
  ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
            (pSVar7,0x6f636552746f6f72,0xee00656d614e6472,uVar6);
  local_78 = (extension_CloudKit)::__C::CKRecord::get_recordType((CKRecord *)pSVar7);
  local_60 = puVar1;
  puStack_58 = puVar2;
  ___extension_in_CloudKit____C_CKRecordKeyValueSetting_subscript_setter____Swift_String___>_CloudKit_CKRecordValueProtocol_
            (&local_78,0x6f636552746f6f72,0xee00657079546472,uVar6);
  IVar5 = objc_stub::privateCloudDatabase(param_5);
  *(ID *)(unaff_x22 + 0xf8) = IVar5;
  puVar2 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0x100) = puVar2;
  *(undefined8 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(ID *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  plVar8 = (long *)(ulong)*(uint *)(PTR__modifyRecords_100ea94c0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1003af738;
  tVar9 = (extension_CloudKit)::__C::CKDatabase::_modifyRecords
                    (puVar2,PTR___swiftEmptyArrayStorage_100eae0d8,0,1);
  return tVar9;
}



/* Address: 0x1003af738 | FUN_1003af738 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003af738(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x100);
  *(undefined8 *)(lVar4 + 0x110) = param_1;
  *(long *)(lVar4 + 0x118) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x108));
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(lVar4 + 0xb0);
  uVar3 = *(undefined8 *)(lVar4 + 0xb8);
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(param_2);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003af7f4;
  }
  else {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1003afe44;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1003af7f4 | FUN_1003af7f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003af7f4(void)

{
  ID *pIVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID self;
  URL UVar5;
  char *pcVar6;
  void *pvVar7;
  long *plVar8;
  URL UVar9;
  URL UVar10;
  char cVar11;
  ulong extraout_x1;
  _StringGuts _Var12;
  ulong extraout_x1_00;
  URL UVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  
  lVar18 = *(long *)(unaff_x22 + 0x110);
  IVar4 = objc_stub::recordID(*(ID *)(unaff_x22 + 0xc0));
  if (*(long *)(lVar18 + 0x10) != 0) {
    uVar19 = extraout_x1;
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x110));
    FUN_100380828();
    lVar17 = *(long *)(unaff_x22 + 0x110);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar17);
    }
    else {
      pIVar1 = (ID *)(*(long *)(lVar17 + 0x38) + IVar4 * 0x10);
      IVar4 = *pIVar1;
      cVar11 = (char)pIVar1[1];
      FUN_10030da34(IVar4,cVar11);
      _swift_bridgeObjectRelease(lVar17);
      if (cVar11 == '\x01') {
        cVar11 = '\x01';
      }
      else {
        self = IVar4;
        _swift_dynamicCastObjCClass(IVar4,&_OBJC_CLASS___CKShare);
        if (self != 0) {
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x110));
          FUN_1000d468c(unaff_x22 + 0x60);
          puVar3 = *(undefined **)(unaff_x22 + 0x78);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
          _Var12.unknown = puVar3;
          FUN_100004640(unaff_x22 + 0x60);
          Swift::_StringGuts::grow(0x19,_Var12);
          _swift_bridgeObjectRelease(0xe000000000000000);
          UVar5.unknown = (undefined *)objc_stub::URL(self);
          if (UVar5.unknown != (undefined *)0x0) {
            Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
          }
          uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
          UVar10.unknown = *(undefined **)(unaff_x22 + 0xf0);
          UVar9 = Foundation::URL::typeMetadataAccessor();
          lVar18 = *(long *)(UVar9.unknown + -8);
          UVar13 = UVar9;
          (**(code **)(lVar18 + 0x38))(uVar15,UVar5.unknown == (undefined *)0x0,1);
          FUN_1002fc004(uVar15,UVar10.unknown);
          UVar5 = UVar9;
          (**(code **)(lVar18 + 0x30))(UVar10.unknown,1);
          uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
          if ((int)UVar10.unknown == 1) {
            UVar5.unknown = &DAT_100c40660;
            FUN_100005808(uVar15,&DAT_100fc1a40);
            SVar20.bridgeObject = (void *)0xe100000000000000;
            SVar20.str = (char *)0x5f;
          }
          else {
            SVar20 = Foundation::URL::get_absoluteString(UVar10);
            (**(code **)(lVar18 + 8))(uVar15,UVar9.unknown);
          }
          SVar24.bridgeObject = UVar13.unknown;
          SVar24.str = UVar5.unknown;
          Swift::String::append(SVar20,SVar24);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          FUN_1000d4db8(0xd000000000000017,0x8000000100da4e70,puVar3,uVar14);
          _swift_bridgeObjectRelease(0x8000000100da4e70);
          FUN_100004594(unaff_x22 + 0x60);
          uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
          _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf0));
          _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001003afd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(self);
          return;
        }
      }
      FUN_10030da20(IVar4,cVar11);
    }
  }
  IVar4 = objc_stub::recordID(*(ID *)(unaff_x22 + 200));
  if (*(long *)(lVar18 + 0x10) == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x110));
LAB_1003afba8:
    FUN_1002fbb58(0);
    *(undefined8 *)(unaff_x22 + 0x90) = 1;
    FUN_1003b0ab8(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1003b0fd8();
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((undefined *)(unaff_x22 + 0x90));
  }
  else {
    uVar19 = extraout_x1_00;
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x110));
    FUN_100380828();
    lVar18 = *(long *)(unaff_x22 + 0x110);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease_n(lVar18,2);
      goto LAB_1003afba8;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar18 + 0x38) + IVar4 * 0x10);
    uVar14 = *puVar2;
    cVar11 = *(char *)(puVar2 + 1);
    FUN_10030da34(uVar14,cVar11);
    _swift_bridgeObjectRelease_n(lVar18,2);
    if (cVar11 != '\x01') {
      FUN_10030da20(uVar14,cVar11);
      goto LAB_1003afba8;
    }
    *(undefined8 *)(unaff_x22 + 0x98) = uVar14;
    pcVar6 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    pvVar7 = (void *)0x0;
    FUN_1002fbb58();
    uVar19 = unaff_x22 + 0xa0;
    _swift_dynamicCast(uVar19,unaff_x22 + 0x98,pcVar6,pvVar7,6);
    if ((uVar19 & 1) == 0) goto LAB_1003afba8;
    lVar17 = *(long *)(unaff_x22 + 0xa0);
    *(long *)(unaff_x22 + 0x120) = lVar17;
    lVar18 = lVar17;
    (extension_CloudKit)::
    (extension_in_CloudKit):__C_Synthesized.related_decl_'e'_for_CKErrorCode.serverRecord.getter_:___C.CKRecord?
    ::_get_serverRecord();
    *(long *)(unaff_x22 + 0x128) = lVar18;
    if (lVar18 != 0) {
      lVar16 = *(long *)(unaff_x22 + 0xd8);
      if (lVar16 < 3) {
        uVar19 = *(ulong *)(unaff_x22 + 0xb8);
        FUN_1000d468c(unaff_x22 + 0x38);
        puVar3 = *(undefined **)(unaff_x22 + 0x50);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
        _Var12.unknown = puVar3;
        FUN_100004640(unaff_x22 + 0x38);
        Swift::_StringGuts::grow(0x2d,_Var12);
        _swift_bridgeObjectRelease(0xe000000000000000);
        lVar16 = lVar16 + 1;
        *(long *)(unaff_x22 + 0xa8) = lVar16;
        SVar20 = Swift::CustomStringConvertible::get_description();
        SVar22.bridgeObject = pvVar7;
        SVar22.str = pcVar6;
        Swift::String::append(SVar20,SVar22);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        SVar21.bridgeObject = &SUB_e200000000000000;
        SVar21.str = (char *)0x332f;
        SVar23.bridgeObject = pvVar7;
        SVar23.str = pcVar6;
        Swift::String::append(SVar21,SVar23);
        FUN_1000d4df0(0xd000000000000029,0x8000000100da4e40,puVar3,uVar14);
        _swift_bridgeObjectRelease(0x8000000100da4e40);
        FUN_100004594(unaff_x22 + 0x38);
        plVar8 = (long *)0x140;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x130) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_1003afdc8;
        FUN_1003af524(*(undefined8 *)(unaff_x22 + 0xb0),uVar19 & 0xcfffffffffffffff,
                      *(undefined8 *)(unaff_x22 + 0xc0),lVar18,*(undefined8 *)(unaff_x22 + 0xd0),
                      lVar16);
        return;
      }
      FUN_1000da768(unaff_x22 + 0x10);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
      lVar18 = *(long *)(unaff_x22 + 0x30);
      FUN_100004640(unaff_x22 + 0x10,uVar14);
      (**(code **)(lVar18 + 0x20))(lVar17,uVar14,lVar18);
      FUN_100004594(unaff_x22 + 0x10);
      _swift_willThrow();
      goto LAB_1003afbf4;
    }
  }
  _swift_willThrow();
LAB_1003afbf4:
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001003afc24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003afdc8 | FUN_1003afdc8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003afdc8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x130));
  uVar1 = *(undefined8 *)(lVar3 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xf0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003afe40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1003afe44 | FUN_1003afe44 */

void FUN_1003afe44(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xf0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001003afe7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1003afe80 | FUN_1003afe80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003b0178) */
/* WARNING: Removing unreachable block (ram,0x0001003aff34) */

ID FUN_1003afe80(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **self;
  Data DVar8;
  Data DVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  long unaff_x20;
  String SVar12;
  String SVar13;
  undefined *local_90 [3];
  undefined *local_78;
  
  lVar1 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  FUN_100004640(lVar1,uVar3);
  (**(code **)(lVar2 + 0x18))(uVar3,lVar2);
  FUN_10038fef4(0);
  IVar4 = objc_stub::objectID(param_1);
  uVar11 = uVar3;
  FUN_10038efa8();
  uVar5 = 0;
  if (IVar4 != 0) {
    FUN_1003b41b8();
    FUN_100394ee8();
    _swift_getObjectType();
    SVar12 = Swift::__typeName(SUB81(param_1,0));
    objc_stub::cloudKitZoneOwnerName(IVar4);
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar10 = &DAT_100fbef68;
    FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
    _swift_initStackObject();
    *(undefined8 *)(puVar10 + 0x18) = 6;
    *(undefined8 *)(puVar10 + 0x10) = 3;
    *(undefined8 *)(puVar10 + 0x20) = 0x6f636552746f6f72;
    *(undefined8 *)(puVar10 + 0x28) = 0xee00656d614e6472;
    *(undefined8 *)(puVar10 + 0x30) = uVar5;
    *(undefined8 *)(puVar10 + 0x38) = uVar11;
    *(undefined8 *)(puVar10 + 0x40) = 0x6f636552746f6f72;
    *(undefined8 *)(puVar10 + 0x48) = 0xee00657079546472;
    *(String *)(puVar10 + 0x50) = SVar12;
    *(undefined8 *)(puVar10 + 0x60) = 0xd000000000000010;
    *(undefined8 *)(puVar10 + 0x68) = 0x8000000100da2ca0;
    *(String *)(puVar10 + 0x70) = SVar13;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(SVar12.bridgeObject);
    _swift_bridgeObjectRetain(SVar13.bridgeObject);
    puVar6 = puVar10;
    FUN_1003c92b8();
    _swift_setDeallocating(puVar10);
    puVar7 = &DAT_100fbef70;
    FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
    _swift_arrayDestroy(puVar10 + 0x20,3,puVar7);
    puVar10 = &DAT_100fbef78;
    FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
    self = local_90;
    local_90[0] = puVar6;
    local_78 = puVar10;
    FUN_100328ba8(self,0,uVar3);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    FUN_100004594(local_90);
    if (self != (undefined **)0x0) {
      DVar8.unknown = (undefined *)objc_stub::shareRecordData((ID)self);
      uVar3 = extraout_x1;
      DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
      _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
      FUN_1001037b4(DVar9.unknown,uVar3);
      DVar8 = DVar9;
      FUN_1003b09f8(DVar9.unknown,uVar3);
      FUN_10003bf2c(DVar9.unknown,uVar3);
      objc_stub::setRequiresSecureCoding_((ID)DVar8.unknown,1);
      puVar10 = &_OBJC_CLASS___CKShare;
      _objc_allocWithZone();
      IVar4 = objc_stub::initWithCoder_((ID)puVar10,DVar8.unknown);
      objc_stub::finishDecoding((ID)DVar8.unknown);
      FUN_10003bf2c(DVar9.unknown,uVar3);
      FUN_1003af2b8(param_2,param_3,param_4,param_5);
      return IVar4;
    }
  }
  return 0;
}



/* Address: 0x1003b0228 | FUN_1003b0228 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003b0228(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container);
}



/* Address: 0x1003b023c | FUN_1003b023c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003b023c(void)

{
  undefined *puVar1;
  CKSystemSharingUIObserver *this;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container);
  puVar1 = &_OBJC_CLASS___CKSystemSharingUIObserver;
  _objc_allocWithZone();
  this = (CKSystemSharingUIObserver *)objc_stub::FUN_100c03d80((ID)puVar1,uVar3);
  puVar1 = &DAT_100ece670;
  puVar2 = puVar1;
  _swift_allocObject(&DAT_100ece670,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  _swift_retain(puVar2);
  (extension_CloudKit)::__C::CKSystemSharingUIObserver::_set_systemSharingUIDidSaveShareBlock(this);
  _swift_release(puVar2);
  _swift_allocObject(&DAT_100ece670,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  _swift_retain(puVar1);
  (extension_CloudKit)::__C::CKSystemSharingUIObserver::_set_systemSharingUIDidStopSharingBlock
            (this);
  _swift_release(puVar1);
  *(CKSystemSharingUIObserver **)(unaff_x20 + _TtC9PasteCore10SyncEngine::cloudKitSharingObserver) =
       this;
  return 0;
}



/* Address: 0x1003b0324 | FUN_1003b0324 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003b0324(ID param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ID self;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  _StringGuts _Var8;
  char *pcVar9;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  undefined *local_98;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar4 = (long)param_4 + 0x10;
  pcVar9 = param_3;
  _swift_weakLoadStrong();
  if (lVar4 != 0) {
    if (((uint)param_3 & 0xff) == 1) {
      uVar10 = *(undefined8 *)(lVar4 + _TtC9PasteCore10SyncEngine::logger);
      _swift_retain(uVar10);
      FUN_1000d468c(&local_b0);
      _swift_release(uVar10);
      _Var8.unknown = local_98;
      FUN_100004640(&local_b0);
      local_60 = 0;
      uStack_58 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x2e,_Var8);
      SVar11.bridgeObject = (void *)0x8000000100da4f00;
      SVar11.str = (char *)0xd00000000000001d;
      SVar13.bridgeObject = param_4;
      SVar13.str = pcVar9;
      Swift::String::append(SVar11,SVar13);
      objc_stub::description(param_1);
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar14.bridgeObject = param_4;
      SVar14.str = pcVar9;
      Swift::String::append(SVar11,SVar14);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar12.bridgeObject = (void *)0xed0000203a726f72;
      SVar12.str = (char *)0x7265206874697720;
      SVar15.bridgeObject = param_4;
      SVar15.str = pcVar9;
      Swift::String::append(SVar12,SVar15);
      _swift_getErrorValue(param_2,auStack_68,&local_80);
      Swift::DefaultStringInterpolation::_appendInterpolation(local_80,uStack_78);
      uVar10 = uStack_58;
      FUN_1000d4e0c(local_60,uStack_58,local_98,local_90);
      _swift_bridgeObjectRelease(uVar10);
      _swift_release(lVar4);
      FUN_100004594(&local_b0);
    }
    else {
      lVar1 = lVar4 + _TtC9PasteCore10SyncEngine::persistentStack;
      self = *(ID *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      FUN_100004640(lVar1,self);
      (**(code **)(lVar2 + 0x18))(self,lVar2);
      puVar5 = &DAT_100ece800;
      _swift_allocObject(&DAT_100ece800,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_2;
      *(ID *)(puVar5 + 0x18) = self;
      puVar6 = &DAT_100ece828;
      _swift_allocObject(&DAT_100ece828,0x20,7);
      *(code **)(puVar6 + 0x10) = FUN_1003b10c0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      local_90 = FUN_100209b34;
      local_b0 = PTR___NSConcreteStackBlock_100ea82a0;
      local_a8 = 0x42000000;
      local_a0 = FUN_1000d5218;
      local_98 = &DAT_100ece840;
      local_88 = puVar6;
      aBlock = __Block_copy(&local_b0);
      puVar7 = local_88;
      FUN_10030da34(param_2,param_3);
      _swift_retain(puVar6);
      _swift_release(puVar7);
      objc_stub::performBlockAndWait_(self,aBlock);
      __Block_release(aBlock);
      puVar7 = puVar6;
      _swift_isEscapingClosureAtFileLocation(puVar6,"",0x98,0xa4,0x28,1);
      _swift_release(puVar6);
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003b0628);
        (*pcVar3)();
      }
      FUN_100395ff8(0xd000000000000016,0x8000000100da4f20,self,0);
      _swift_release(puVar5);
      _swift_release(lVar4);
    }
  }
  return;
}



/* Address: 0x1003b0628 | FUN_1003b0628 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b0628(ID param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  ID local_70;
  undefined *local_68;
  undefined8 uStack_60;
  
  lVar3 = (long)param_4 + 0x10;
  pcVar5 = param_3;
  _swift_weakLoadStrong();
  if (lVar3 != 0) {
    if (((uint)param_3 & 0xff) == 1) {
      uVar6 = *(undefined8 *)(lVar3 + _TtC9PasteCore10SyncEngine::logger);
      _swift_retain(uVar6);
      FUN_1000d468c(auStack_80);
      _swift_release(uVar6);
      _Var4.unknown = local_68;
      FUN_100004640(auStack_80);
      local_90 = 0;
      uStack_88 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x31,_Var4);
      SVar7.bridgeObject = (void *)0x8000000100da4eb0;
      SVar7.str = (char *)0xd000000000000020;
      SVar9.bridgeObject = param_4;
      SVar9.str = pcVar5;
      Swift::String::append(SVar7,SVar9);
      objc_stub::description(param_1);
      SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar10.bridgeObject = param_4;
      SVar10.str = pcVar5;
      Swift::String::append(SVar7,SVar10);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      SVar8.bridgeObject = (void *)0xed0000203a726f72;
      SVar8.str = (char *)0x7265206874697720;
      SVar11.bridgeObject = param_4;
      SVar11.str = pcVar5;
      Swift::String::append(SVar8,SVar11);
      _swift_getErrorValue(param_2,auStack_98,&local_b0);
      Swift::DefaultStringInterpolation::_appendInterpolation(local_b0,uStack_a8);
      uVar6 = uStack_88;
      FUN_1000d4e0c(local_90,uStack_88,local_68,uStack_60);
      _swift_bridgeObjectRelease(uVar6);
      _swift_release(lVar3);
      FUN_100004594(auStack_80);
    }
    else {
      lVar1 = lVar3 + _TtC9PasteCore10SyncEngine::persistentStack;
      uVar6 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      FUN_100004640(lVar1,uVar6);
      (**(code **)(lVar2 + 0x18))(uVar6,lVar2);
      local_70 = param_1;
      local_68 = (undefined *)uVar6;
      FUN_1000037f0(&DAT_100fbe6c8,&DAT_100c43090);
      (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
      FUN_100395ff8(0xd00000000000001d,0x8000000100da4ee0,uVar6,0);
      _swift_release(lVar3);
    }
  }
  return;
}



/* Address: 0x1003b0868 | FUN_1003b0868 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b0868(undefined8 param_1,ID param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ID self;
  
  uVar1 = 0;
  FUN_100394ee8(0);
  FUN_100394144(param_2,param_3,uVar1);
  if (param_2 != 0) {
    self = objc_stub::managedObjectContext(param_2);
    objc_stub::deleteObject_(self,param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Address: 0x1003b08f8 | FUN_1003b08f8 */

void FUN_1003b08f8(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1003b0960;
  FUN_1003ad944(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x1003b0960 | FUN_1003b0960 */

void FUN_1003b0960(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001003b09b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1003b09b8 | FUN_1003b09b8 */

void FUN_1003b09b8(void)

{
  FUN_1003aeb84();
  return;
}



/* Address: 0x1003b09d8 | FUN_1003b09d8 */

void FUN_1003b09d8(void)

{
  FUN_1003acd8c();
  return;
}



/* Address: 0x1003b09f8 | FUN_1003b09f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003b09f8(Data param_1)

{
  NSData *pNVar1;
  ID IVar2;
  ID unaff_x20;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  local_40 = 0;
  IVar2 = objc_stub::initForReadingFromData_error_(unaff_x20,pNVar1,&local_40);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar2;
}



/* Address: 0x1003b0ab8 | FUN_1003b0ab8 */

undefined * FUN_1003b0ab8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbfa30;
    FUN_1000037f0(&DAT_100fbfa30,&DAT_100c44530);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1003b101c(param_1,&local_80);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar6 = local_80;
      uVar7 = uStack_78;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b0bc0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b0bc4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1003b0bc4 | FUN_1003b0bc4 */

void FUN_1003b0bc4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b0be8 | FUN_1003b0be8 */

void FUN_1003b0be8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b0c24 | thunk_FUN_1003a98e4 */

void thunk_FUN_1003a98e4(void)

{
  FUN_1003a98e4();
  return;
}



/* Address: 0x1003b0c28 | thunk_FUN_1003a994c */

void thunk_FUN_1003a994c(void)

{
  FUN_1003a994c();
  return;
}



/* Address: 0x1003b0c2c | FUN_1003b0c2c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b0c2c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(ulong *)(unaff_x20 + 0x30) >> 0x3c < 0xf) {
    FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b0c78 | FUN_1003b0c78 */

void FUN_1003b0c78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1003b0cf0;
  FUN_1003af3ec(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x1003b0cf0 | FUN_1003b0cf0 */

void FUN_1003b0cf0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001003b0d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Address: 0x1003b0d34 | FUN_1003b0d34 */

void FUN_1003b0d34(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  if (0xe < *(ulong *)(param_1 + 0x18) >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1003b0d78 | FUN_1003b0d78 */

undefined8 * FUN_1003b0d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    FUN_1001037b4(uVar1,uVar2);
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
  }
  return param_1;
}



/* Address: 0x1003b0de0 | FUN_1003b0de0 */

undefined8 * FUN_1003b0de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_2[2];
      FUN_1001037b4(uVar2,uVar4);
      uVar3 = param_1[2];
      uVar1 = param_1[3];
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      FUN_10003bf2c(uVar3,uVar1);
      return param_1;
    }
    FUN_10031275c(param_1 + 2);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[2];
    FUN_1001037b4(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return param_1;
  }
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x1003b0ea0 | FUN_1003b0ea0 */

undefined8 * FUN_1003b0ea0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[2];
      param_1[2] = param_2[2];
      param_1[3] = uVar3;
      FUN_10003bf2c(uVar2);
      return param_1;
    }
    FUN_10031275c(param_1 + 2);
  }
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Address: 0x1003b0f18 | FUN_1003b0f18 */

int FUN_1003b0f18(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003b0f74 | FUN_1003b0f74 */

void FUN_1003b0f74(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x1003b0fc8 | FUN_1003b0fc8 */

undefined1  [16] FUN_1003b0fc8(void)

{
  return ZEXT816(0x100ece7d8);
}



/* Address: 0x1003b0fd8 | FUN_1003b0fd8 */

void FUN_1003b0fd8(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbddb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002fbb58(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3fa10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3fa10,uVar1);
  DAT_100fbddb0 = pTVar2;
  return;
}



/* Address: 0x1003b101c | FUN_1003b101c */

undefined8 FUN_1003b101c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbf9e0;
  FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003b106c | FUN_1003b106c */

void FUN_1003b106c(void)

{
  FUN_1003b0324();
  return;
}



/* Address: 0x1003b1074 | FUN_1003b1074 */

void FUN_1003b1074(void)

{
  FUN_1003b0628();
  return;
}



/* Address: 0x1003b107c | FUN_1003b107c */

void FUN_1003b107c(void)

{
  long unaff_x20;
  
  FUN_1003b0868(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003b1094 | FUN_1003b1094 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b1094(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b10c0 | FUN_1003b10c0 */

void FUN_1003b10c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = 0;
  FUN_100394ee8(0);
  FUN_1003942e0(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1003b10f8 | FUN_1003b10f8 */

void FUN_1003b10f8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b1108 | thunk_FUN_1003aeb68 */

void thunk_FUN_1003aeb68(void)

{
  FUN_1003aeb68();
  return;
}



/* Address: 0x1003b110c | thunk_FUN_1003aeb7c */

void thunk_FUN_1003aeb7c(void)

{
  FUN_1003aeb7c();
  return;
}



/* Address: 0x1003b1110 | thunk_FUN_1003acf84 */

void thunk_FUN_1003acf84(void)

{
  FUN_1003acf84();
  return;
}



/* Address: 0x1003b1114 | FUN_1003b1114 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b1114(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long local_38;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_3 == 0) {
    puVar1 = &DAT_100fc01c8;
    local_38 = param_2;
    FUN_1000037f0(&DAT_100fc01c8,&DAT_100c41f48);
    Swift::CheckedContinuation::resume(&local_38,puVar1);
  }
  else {
    puVar1 = &DAT_100fc01c8;
    local_38 = param_3;
    FUN_1000037f0(&DAT_100fc01c8,&DAT_100c41f48);
    Swift::CheckedContinuation::resume(&local_38,puVar1);
  }
  return;
}



/* Address: 0x1003b11bc | FUN_1003b11bc */

void FUN_1003b11bc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c44548;
  _swift_getKeyPath(&DAT_100c44548);
  puVar2 = &DAT_100c44570;
  _swift_getKeyPath(&DAT_100c44570);
  Combine::Published::_get_subscript(param_1);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1003b1220 | FUN_1003b1220 */

undefined1 FUN_1003b1220(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c44590;
  _swift_getKeyPath(&DAT_100c44590);
  puVar2 = &DAT_100c445b8;
  _swift_getKeyPath(&DAT_100c445b8);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x1003b1290 | FUN_1003b1290 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003b1420) */

void FUN_1003b1290(undefined8 param_1,undefined8 param_2,code *param_3,char *param_4,void *param_5)

{
  long *plVar1;
  undefined *puVar2;
  NSString *pNVar3;
  Data DVar4;
  Data DVar5;
  JSONDecoder *pJVar6;
  Serialization SVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  code *pcVar9;
  String SVar10;
  String SVar11;
  ID local_48;
  
  if (DAT_100fbe470 != -1) {
    param_3 = FUN_1002fd274;
    _swift_once(&DAT_100fbe470);
  }
  plVar1 = DAT_101057968;
  puVar2 = &DAT_100c446a0;
  _swift_getKeyPath(&DAT_100c446a0);
  (**(code **)(*plVar1 + 0x98))(&local_48);
  _swift_release(puVar2);
  Swift::_StringGuts::grow(0x14,(_StringGuts)param_3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar10 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar10,SVar11);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(0x8000000100da4f40);
  DVar4.unknown = (undefined *)objc_stub::dataForKey_(local_48,pNVar3);
  if (DVar4.unknown == (undefined *)0x0) {
    SVar7 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
    pcVar9 = *(code **)(*(long *)(SVar7.unknown + -8) + 0x38);
  }
  else {
    uVar8 = extraout_x1;
    DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
    pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
    pJVar6 = Foundation::JSONDecoder::init(pJVar6);
    SVar7 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
    FUN_1003b2ef0(&DAT_100fc2480,
                  PTR_CloudKit__CloudKit__CKSyncEngine__State__Serialization_>Swift__Decodable_100ea9450
                 );
    Foundation::JSONDecoder::_decode(pJVar6,(Data)SVar7.unknown);
    FUN_10003bf2c(DVar5.unknown,uVar8);
    _swift_release(pJVar6);
    pcVar9 = *(code **)(*(long *)(SVar7.unknown + -8) + 0x38);
  }
  (*pcVar9)(param_1,DVar4.unknown == (undefined *)0x0,1,SVar7.unknown);
  return;
}



/* Address: 0x1003b14d4 | FUN_1003b14d4 */

undefined1 FUN_1003b14d4(void)

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
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_isEnabled);
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
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(&local_81);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return local_81;
}



/* Address: 0x1003b15bc | FUN_1003b15bc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003b15d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003b15bc(undefined8 param_1)

{
  Combine::Published::init(param_1,PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1003b15e8 | FUN_1003b15e8 */

void FUN_1003b15e8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  _StringGuts _Var9;
  char *pcVar10;
  void *in_x3;
  String SVar11;
  String SVar12;
  char local_89;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  long lStack_58;
  
  FUN_1000da768(auStack_78);
  lVar3 = lStack_58;
  puVar6 = local_60;
  _Var9.unknown = local_60;
  FUN_100004640(auStack_78);
  local_88 = 0;
  local_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x12,_Var9);
  _swift_bridgeObjectRelease(local_80);
  local_88 = 0xd000000000000010;
  local_80 = 0x8000000100da4f80;
  puVar7 = &DAT_100c44590;
  puVar4 = puVar7;
  _swift_getKeyPath(&DAT_100c44590);
  pcVar8 = &DAT_100c445b8;
  pcVar5 = pcVar8;
  _swift_getKeyPath();
  pcVar10 = pcVar5;
  Combine::Published::_get_subscript(&local_89);
  _swift_release(puVar4);
  _swift_release(pcVar5);
  pcVar5 = (char *)0x65757274;
  if (local_89 == '\0') {
    pcVar5 = (char *)0x65736c6166;
  }
  puVar1 = &DAT_e400000000000000;
  if (local_89 == '\0') {
    puVar1 = &DAT_e500000000000000;
  }
  SVar11.bridgeObject = puVar1;
  SVar11.str = pcVar5;
  SVar12.bridgeObject = in_x3;
  SVar12.str = pcVar10;
  Swift::String::append(SVar11,SVar12);
  _swift_bridgeObjectRelease(puVar1);
  uVar2 = local_80;
  (**(code **)(lVar3 + 0x30))(0x636e7973,&DAT_e400000000000000,local_88,local_80,puVar6,lVar3);
  _swift_bridgeObjectRelease(uVar2);
  FUN_100004594(auStack_78);
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,local_60);
  puVar6 = &DAT_100fbe498;
  FUN_1000037f0(&DAT_100fbe498,&DAT_100c40608);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0x6176615f636e7973;
  *(undefined8 *)(puVar6 + 0x28) = 0xee00656c62616c69;
  _swift_getKeyPath(&DAT_100c44590);
  _swift_getKeyPath(&DAT_100c445b8);
  *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined ***)(puVar6 + 0x50) = &PTR_PTR_100ebcc70;
  Combine::Published::_get_subscript(puVar6 + 0x30);
  _swift_release(puVar7);
  _swift_release(pcVar8);
  puVar7 = puVar6;
  FUN_1003c8cd8(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_1002fe424(puVar6 + 0x20);
  (**(code **)(lStack_58 + 0x10))(puVar7,local_60,lStack_58);
  _swift_bridgeObjectRelease(puVar7);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1003b1858 | FUN_1003b1858 */

void FUN_1003b1858(void)

{
  FUN_1003b21e0(&_TtC9PasteCore10SyncEngine::_isAvailable,&DAT_100fbe488,&DAT_100c40550);
  return;
}



/* Address: 0x1003b1874 | FUN_1003b1874 */

void FUN_1003b1874(undefined8 param_1,long *param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  long lVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  FUN_1000037f0(&DAT_100fc2478,&DAT_100c44698);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = *param_2;
  (**(code **)(extraout_x8 + 0x10))(auStack_50 + -extraout_x12,param_1);
  lVar1 = _TtC9PasteCore10SyncEngine::_isAvailable;
  _swift_beginAccess(lVar2 + _TtC9PasteCore10SyncEngine::_isAvailable,auStack_48,0x21,0);
  FUN_1000037f0(&DAT_100fbe488,&DAT_100c40550);
  Combine::Published::_set_projectedValue
            ((Published *)(lVar2 + lVar1),(Publisher)(auStack_50 + -extraout_x12));
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1003b1940 | FUN_1003b1940 */

void FUN_1003b1940(void)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_150;
  long lStack_148;
  char local_139;
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char *local_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_1000d468c(&local_e0);
  _Var6.unknown = local_c8;
  FUN_100004640();
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1d,_Var6);
  _swift_bridgeObjectRelease(uStack_98);
  local_120 = 0xd00000000000001b;
  uStack_118 = 0x8000000100da4f60;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_isEnabled);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_138);
  uVar12 = puVar1[1];
  uVar10 = *puVar1;
  uStack_88 = puVar1[3];
  uVar13 = puVar1[2];
  uStack_78 = puVar1[5];
  uVar11 = puVar1[4];
  uVar9 = puVar1[6];
  local_a0 = uVar10;
  uStack_98 = uVar12;
  local_90 = uVar13;
  local_80 = uVar11;
  local_70 = uVar9;
  _swift_retain(uVar10);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  puVar4 = &DAT_100fbe4a0;
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(&local_168);
  _swift_release(uVar9);
  _swift_release(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar12);
  _swift_release(uVar10);
  pcVar3 = (char *)0x65757274;
  if ((char)local_168 == '\0') {
    pcVar3 = (char *)0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if ((char)local_168 == '\0') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar14.bridgeObject = puVar2;
  SVar14.str = pcVar3;
  SVar16.bridgeObject = pvVar8;
  SVar16.str = pcVar7;
  Swift::String::append(SVar14,SVar16);
  _swift_bridgeObjectRelease(puVar2);
  uVar9 = uStack_118;
  FUN_1000d4db8(local_120,uStack_118);
  _swift_bridgeObjectRelease(uVar9);
  FUN_100004594(&local_e0);
  FUN_1000da768(&local_120);
  _Var6.unknown = local_108;
  FUN_100004640();
  local_e0 = 0;
  uStack_d8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x10,_Var6);
  _swift_bridgeObjectRelease(uStack_d8);
  local_168 = 0x616e6520636e7953;
  uStack_160 = 0xee00203a64656c62;
  uVar12 = puVar1[1];
  uVar10 = *puVar1;
  uVar13 = puVar1[2];
  uStack_b8 = puVar1[5];
  uVar11 = puVar1[4];
  uVar9 = puVar1[6];
  pcVar7 = local_c8;
  pvVar8 = local_c0;
  local_e0 = uVar10;
  uStack_d8 = uVar12;
  local_d0 = uVar13;
  local_c8 = (char *)puVar1[3];
  local_c0 = (void *)uVar11;
  local_b0 = uVar9;
  _swift_retain(uVar10);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  FUN_1002ca7e0(&local_139,puVar4);
  _swift_release(uVar9);
  _swift_release(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar12);
  _swift_release(uVar10);
  pcVar3 = (char *)0x65757274;
  if (local_139 == '\0') {
    pcVar3 = (char *)0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if (local_139 == '\0') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar15.bridgeObject = puVar2;
  SVar15.str = pcVar3;
  SVar17.bridgeObject = pvVar8;
  SVar17.str = pcVar7;
  Swift::String::append(SVar15,SVar17);
  _swift_bridgeObjectRelease(puVar2);
  uVar9 = uStack_160;
  (**(code **)(local_100 + 0x30))
            (0x636e7973,&DAT_e400000000000000,local_168,uStack_160,local_108,local_100);
  _swift_bridgeObjectRelease(uVar9);
  FUN_100004594(&local_120);
  FUN_1000da768(&local_168);
  FUN_100004640(&local_168,local_150);
  puVar5 = &DAT_100fbe498;
  FUN_1000037f0(&DAT_100fbe498,&DAT_100c40608);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = 0x616e655f636e7973;
  *(undefined8 *)(puVar5 + 0x28) = 0xec00000064656c62;
  uVar12 = puVar1[1];
  uVar10 = *puVar1;
  local_108 = (undefined *)puVar1[3];
  uVar13 = puVar1[2];
  uStack_f8 = puVar1[5];
  uVar11 = puVar1[4];
  uVar9 = puVar1[6];
  *(undefined **)(puVar5 + 0x48) = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined ***)(puVar5 + 0x50) = &PTR_PTR_100ebcc70;
  local_120 = uVar10;
  uStack_118 = uVar12;
  local_110 = uVar13;
  local_100 = uVar11;
  local_f0 = uVar9;
  _swift_retain(uVar10);
  _swift_retain(uVar12);
  _swift_retain(uVar13);
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  FUN_1002ca7e0(puVar5 + 0x30,puVar4);
  _swift_release(uVar9);
  _swift_release(uVar11);
  _swift_release(uVar13);
  _swift_release(uVar12);
  _swift_release(uVar10);
  puVar4 = puVar5;
  FUN_1003c8cd8(puVar5);
  _swift_setDeallocating(puVar5);
  FUN_1002fe424(puVar5 + 0x20);
  (**(code **)(lStack_148 + 0x10))(puVar4,local_150,lStack_148);
  _swift_bridgeObjectRelease(puVar4);
  FUN_100004594(&local_168);
  return;
}



/* Address: 0x1003b1db4 | FUN_1003b1db4 */

undefined * FUN_1003b1db4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_isEnabled);
  _swift_beginAccess(puVar1,auStack_98,0,0);
  uVar6 = puVar1[1];
  uVar4 = *puVar1;
  uStack_68 = puVar1[3];
  uVar7 = puVar1[2];
  uStack_58 = puVar1[5];
  uVar5 = puVar1[4];
  uVar3 = puVar1[6];
  local_80 = uVar4;
  uStack_78 = uVar6;
  local_70 = uVar7;
  local_60 = uVar5;
  local_50 = uVar3;
  _swift_retain(uVar4);
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  puVar2 = &DAT_100fbe4a0;
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002cb1ec();
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar6);
  _swift_release(uVar4);
  return puVar2;
}


